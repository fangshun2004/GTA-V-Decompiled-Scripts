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
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
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
	float fLocal_62 = 0f;
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
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = -1;
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
	var uLocal_100 = 1;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 1;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
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
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	iLocal_41 = 1;
	iLocal_42 = 65;
	iLocal_43 = 49;
	iLocal_44 = 64;
	fLocal_62 = (0.05f + 0.275f) - 0.01f;
	func_290();

	while (true)
	{
		func_289();
	
		if (func_281())
			break;
	
		func_55();
	}

	func_1();
	return;
}

void func_1() // Position - 0xA5 Hash - 0x46C3DB41 ^0x1F460EEF
{
	GRAPHICS::ANIMPOSTFX_STOP_ALL();
	GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	func_3(&uLocal_95);
	func_2();
	return;
}

void func_2() // Position - 0xBF Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_3(var uParam0) // Position - 0xCB Hash - 0xC3E3DA3D ^0x74B20C4B
{
	var unk;

	if (CUTSCENE::IS_CUTSCENE_ACTIVE())
		CUTSCENE::STOP_CUTSCENE_IMMEDIATELY();

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
		PED::DELETE_PED(&(uParam0->f_22));

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
		PED::DELETE_PED(&(uParam0->f_23));

	func_54(uParam0, false);
	CUTSCENE::REMOVE_CUTSCENE();
	STREAMING::NEW_LOAD_SCENE_STOP();
	STREAMING::CLEAR_FOCUS();

	if (HUD::THEFEED_IS_PAUSED())
		HUD::THEFEED_RESUME();

	func_53(0);
	func_52(&(uParam0->f_18));
	func_4(true, false, false, true);
	unk.f_5 = 1;
	unk.f_8 = 1;
	*uParam0 = { unk };
	return;
}

void func_4(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x150 Hash - 0x7C034C1A ^0x86DB7D22
{
	func_50();

	if (bParam0)
	{
		func_48(true);
		HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
	}

	HUD::CLEAR_PRINTS();
	func_40();
	GRAPHICS::SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(false);
	func_36(false, true, true, false, false, bParam2, false);
	func_35();
	func_34(12, false, -1);
	func_33(1);
	CAM::SET_WIDESCREEN_BORDERS(false, -1);
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	func_32();
	AUDIO::SET_USER_RADIO_CONTROL_ENABLED(true);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (bParam3)
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
				NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false);

	func_31(0);

	if (func_30() == 0 && func_29() == false && bParam1 && !func_28(PLAYER::PLAYER_ID()) && !STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && func_26())
		func_16(PLAYER::PLAYER_ID(), true, 0, false);

	Global_2672505.f_3541 = 0;
	func_5();
	return;
}

void func_5() // Position - 0x222 Hash - 0xA976E5A3 ^0xFE9CD6B4
{
	int i;
	Player player;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_15(&Global_2802588))
	{
		if (!func_13(&Global_2802588, 3500, true) || NETWORK::NETWORK_IS_PLAYER_FADING(PLAYER::PLAYER_ID()))
		{
			if (!func_12())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_11(&Global_2802588, true, false);
				}
				else if (!func_8(PLAYER::PLAYER_ID(), 0))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PARACHUTE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), SCRIPT_TASK_PARACHUTE) != 0)
					{
						NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(true);
						NETWORK::SET_PLAYER_VISIBLE_LOCALLY(PLAYER::PLAYER_ID(), true);
					}
				
					ENTITY::SET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID(), 255, false);
				}
			}
			else
			{
				func_11(&Global_2802588, true, false);
			}
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::PLAYER_PED_ID());
		
			func_52(&Global_2802588);
		}
	}

	if (Global_2802592 > 0)
	{
		for (i = 0; i < 32; i = i + 1)
		{
			if (IS_BIT_SET(Global_2802592, i))
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (func_7(player, true, true))
					func_6(player);
			}
		}
	}

	return;
}

void func_6(Player plParam0) // Position - 0x32C Hash - 0x216EFF2D ^0x62269BA8
{
	if (IS_BIT_SET(Global_2802592, plParam0) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_13(&Global_2802593[plParam0 /*2*/], 3500, true) || NETWORK::NETWORK_IS_PLAYER_FADING(plParam0))
		{
			if (!func_12())
			{
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					func_11(&Global_2802593[plParam0 /*2*/], true, false);
				}
				else if (!func_8(plParam0, 0))
				{
					NETWORK::SET_PLAYER_VISIBLE_LOCALLY(plParam0, true);
				
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
						ENTITY::SET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(plParam0), 255, false);
				}
			}
			else
			{
				func_11(&Global_2802593[plParam0 /*2*/], true, false);
			}
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				ENTITY::RESET_ENTITY_ALPHA(PLAYER::GET_PLAYER_PED(plParam0));
		
			func_52(&Global_2802593[plParam0 /*2*/]);
			MISC::CLEAR_BIT(&Global_2802592, plParam0);
		}
	}

	return;
}

BOOL func_7(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x3FB Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_8(Player plParam0, int iParam1) // Position - 0x45B Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_9(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_9(int iParam0, BOOL bParam1) // Position - 0x4A6 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_10();

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

int func_10() // Position - 0x4E7 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

void func_11(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x4F3 Hash - 0x6A4AB354 ^0xD9372BF4
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

BOOL func_12() // Position - 0x530 Hash - 0xC27661 ^0xA95619B1
{
	if (CUTSCENE::IS_CUTSCENE_PLAYING() || NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
		return true;

	return false;
}

BOOL func_13(var uParam0, int iParam1, BOOL bParam2) // Position - 0x54E Hash - 0x154EA353 ^0xBFA672B0
{
	if (iParam1 == -1)
		return true;

	func_14(uParam0, bParam2, false);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
			return true;
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
		return true;

	return false;
}

void func_14(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x5AC Hash - 0x6F79B86B ^0x7B76DD66
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

BOOL func_15(var uParam0) // Position - 0x5F1 Hash - 0xD73B9827 ^0x2D8CE86B
{
	return uParam0->f_1;
}

void func_16(Player plParam0, BOOL bParam1, eSetPlayerControlFlags espcfParam2, BOOL bParam3) // Position - 0x5FD Hash - 0xCD788E2C ^0x50180146
{
	eSetPlayerControlFlags flags;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	BOOL flag8;
	BOOL flag9;
	BOOL flag10;
	BOOL flag11;
	BOOL flag12;
	BOOL flag13;
	BOOL flag14;
	BOOL flag15;
	BOOL toggle;
	BOOL toggle2;
	BOOL flag16;
	BOOL flag17;
	BOOL flag18;
	BOOL flag19;
	BOOL flag20;
	BOOL flag21;
	BOOL flag22;
	BOOL flag23;
	BOOL flag24;
	Ped playerPed;
	eSetPlayerControlFlags flags2;

	if (bParam1)
		if (SCRIPT::GET_NO_LOADING_SCREEN())
			SCRIPT::SET_NO_LOADING_SCREEN(false);

	if (func_25())
		if (bParam1)
			return;
		else
			bParam3 = true;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		flags = espcfParam2;
		PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags);
	}
	else
	{
		flag = true;
		flag2 = espcfParam2 & SPC_AMBIENT_SCRIPT != 0;
		flag3 = espcfParam2 & SPC_CLEAR_TASKS != 0;
		flag4 = espcfParam2 & SPC_REMOVE_FIRES != 0;
		flag5 = espcfParam2 & SPC_REMOVE_EXPLOSIONS != 0;
		flag6 = espcfParam2 & SPC_REMOVE_PROJECTILES != 0;
		flag7 = espcfParam2 & SPC_DEACTIVATE_GADGETS != 0;
		flag8 = espcfParam2 & SPC_REENABLE_CONTROL_ON_DEATH != 0;
		flag9 = espcfParam2 & SPC_LEAVE_CAMERA_CONTROL_ON != 0;
		flag10 = espcfParam2 & SPC_ALLOW_PLAYER_DAMAGE != 0;
		flag11 = espcfParam2 & SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER != 0;
		flag12 = espcfParam2 & SPC_PREVENT_EVERYBODY_BACKOFF != 0;
		flag13 = espcfParam2 & SPC_ALLOW_PAD_SHAKE != 0;
		flag14 = espcfParam2 & 8192 != 0;
		flag15 = espcfParam2 & 16384 != 0;
		toggle = espcfParam2 & 32768 != 0;
		toggle2 = espcfParam2 & 65536 != 0;
		flag16 = espcfParam2 & 131072 != 0;
		flag17 = espcfParam2 & 262144 != 0;
		flag18 = espcfParam2 & 524288 != 0;
		flag19 = espcfParam2 & 1048576 != 0;
		flag20 = espcfParam2 & 2097152 != 0;
		flag21 = espcfParam2 & 4194304 != 0;
		flag22 = espcfParam2 & 8388608 != 0;
		flag23 = espcfParam2 & 16777216 != 0;
	
		if (espcfParam2 & 33554432 != 0 || NETWORK::NETWORK_IS_ACTIVITY_SESSION())
			flag = false;
	
		if (!func_26())
		{
			flag24 = false;
		
			if (bParam1 == true)
				flag24 = true;
		
			if (toggle == false && !flag19)
				flag24 = true;
		
			if (flag10 == true)
				flag24 = true;
		
			if (flag24)
				return;
		}
	
		flag16;
	
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0) && PLAYER::IS_PLAYER_PLAYING(plParam0) || bParam3 == true)
		{
			if (bParam3 && ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(plParam0), false))
				return;
		
			playerPed = PLAYER::GET_PLAYER_PED(plParam0);
		
			if (!flag18)
			{
				if (flag17 && bParam1 == false && NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					NETWORK::FADE_OUT_LOCAL_PLAYER(true);
				else if (flag14 || !func_8(PLAYER::PLAYER_ID(), 0) && !func_24())
					ENTITY::SET_ENTITY_VISIBLE(playerPed, !flag14, false);
			
				if (!flag14)
				{
					if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !flag17)
						NETWORK::FADE_OUT_LOCAL_PLAYER(false);
				
					Global_2657589[plParam0 /*466*/].f_254 = 0;
				}
			}
		
			if (bParam1)
			{
				if (flag)
				{
					func_21(false, 0, 0);
				
					if (flag23)
						STREAMING::CLEAR_FOCUS();
				}
			
				if (!func_20(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, true, false);
			
				if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
				{
					if (!flag19)
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
				}
				else if (!flag19)
				{
					ENTITY::FREEZE_ENTITY_POSITION(playerPed, false);
				}
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, true);
				PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				PLAYER::SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(plParam0, false);
			
				if (PED::HAS_PED_HEAD_BLEND_FINISHED(playerPed) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(playerPed))
					PED::FINALIZE_HEAD_BLEND(playerPed);
			
				PED::SET_PED_DIES_WHEN_INJURED(playerPed, true);
			
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) == false)
				{
					func_19();
					func_18();
				}
			
				if (PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
					!flag21;
			
				STREAMING::IS_NEW_LOAD_SCENE_ACTIVE();
				Global_2657589[plParam0 /*466*/].f_255 = 0;
			
				if (!flag22)
					flag3 = true;
			
				if (Global_2635559.f_2681)
					Global_2635559.f_2681 = 0;
			}
			else
			{
				if (!func_20(playerPed) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(playerPed))
				{
					if (!flag20)
						ENTITY::SET_ENTITY_COLLISION(playerPed, !flag15, false);
				
					if (!ENTITY::IS_ENTITY_ATTACHED(playerPed))
					{
						if (!flag19)
							ENTITY::FREEZE_ENTITY_POSITION(playerPed, toggle);
					
						if (!toggle)
							ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(playerPed, true);
					}
				
					if (func_17(*Global_4718592.f_166301))
						ENTITY::FREEZE_ENTITY_POSITION(playerPed, true);
				}
			
				if (Global_1575035)
					flag10 = false;
			
				if (flag10)
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, false);
				else
					PLAYER::SET_PLAYER_INVINCIBLE(plParam0, true);
			
				PED::SET_PED_CAN_BE_TARGETTED(playerPed, toggle2);
			
				if (flag3)
					if (!PED::IS_PED_FATALLY_INJURED(playerPed) && !PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(playerPed);
			}
		
			flags2 = 0;
		
			if (flag2)
				flags2 = flags2 | SPC_AMBIENT_SCRIPT;
		
			if (flag3)
				flags2 = flags2 | SPC_CLEAR_TASKS;
		
			if (flag4)
				flags2 = flags2 | SPC_REMOVE_FIRES;
		
			if (flag5)
				flags2 = flags2 | SPC_REMOVE_EXPLOSIONS;
		
			if (flag6)
				flags2 = flags2 | SPC_REMOVE_PROJECTILES;
		
			if (flag7)
				flags2 = flags2 | SPC_DEACTIVATE_GADGETS;
		
			if (flag8)
				flags2 = flags2 | SPC_REENABLE_CONTROL_ON_DEATH;
		
			if (flag9)
				flags2 = flags2 | SPC_LEAVE_CAMERA_CONTROL_ON;
		
			if (flag10)
				flags2 = flags2 | SPC_ALLOW_PLAYER_DAMAGE;
		
			if (flag11)
				flags2 = flags2 | SPC_DONT_STOP_OTHER_CARS_AROUND_PLAYER;
		
			if (flag12)
				flags2 = flags2 | SPC_PREVENT_EVERYBODY_BACKOFF;
		
			if (flag13)
				flags2 = flags2 | SPC_ALLOW_PAD_SHAKE;
		
			PLAYER::SET_PLAYER_CONTROL(plParam0, bParam1, flags2);
		}
	}

	return;
}

BOOL func_17(int iParam0) // Position - 0xA8B Hash - 0xFB453256 ^0xFB453256
{
	return iParam0 == 17;
}

void func_18() // Position - 0xA98 Hash - 0xBC63612E ^0xBC63612E
{
	var unk;

	Global_2672505.f_1023 = 0;
	Global_2672505.f_1024 = 0;
	Global_2672505.f_1025 = { 9999.9f, 9999.9f, 9999.9f };
	Global_2672505.f_1030 = -1;
	Global_2672505.f_1031 = 0;
	Global_2635559.f_2692 = { unk };
	return;
}

void func_19() // Position - 0xAE5 Hash - 0x5FEB45C4 ^0x33557962
{
	Global_2635559.f_702 = 0;
	Global_2635559.f_2735 = 0;
	Global_2635559.f_515 = 0;
	Global_2635559.f_606 = 0;
	Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_217 = 0;
	Global_2635559.f_2690 = 0;
	return;
}

BOOL func_20(Ped pedParam0) // Position - 0xB23 Hash - 0x93DB01D2 ^0x43DCC591
{
	int scriptTaskStatus;

	if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
	{
		return true;
	}
	else
	{
		scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_ENTER_VEHICLE);
	
		if (scriptTaskStatus == 0)
			return true;
	}

	return false;
}

void func_21(BOOL bParam0, Ped pedParam1, int iParam2) // Position - 0xB54 Hash - 0x19FE7AFC ^0x4538006F
{
	int num;
	eViewModeContext i;

	ENTITY::IS_ENTITY_DEAD(pedParam1, false);

	if (bParam0 == true)
		if (ENTITY::DOES_ENTITY_EXIST(pedParam1))
			if (PED::IS_PED_A_PLAYER(pedParam1))
				if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(pedParam1)))
					num = 1;

	if (num == 0)
	{
		if (iParam2 == 1)
		{
			if (bParam0 == true)
			{
				func_23();
			}
			else if (!IS_BIT_SET(Global_2621446.f_67, 1))
			{
				if (IS_BIT_SET(Global_2621446.f_67, 2))
				{
					for (i = ON_FOOT; i < 8; i = i + 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(i, Global_2621446.f_58[i]);
					}
				}
			
				MISC::SET_BIT(&(Global_2621446.f_67), 1);
			}
		}
	
		if (func_8(PLAYER::PLAYER_ID(), 0))
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(bParam0, pedParam1, true);
		else
			NETWORK::NETWORK_SET_IN_SPECTATOR_MODE(bParam0, pedParam1);
	
		HUD::SET_MINIMAP_IN_SPECTATOR_MODE(bParam0, pedParam1);
		func_22(-2008016205, bParam0);
	}

	return;
}

void func_22(Hash hParam0, BOOL bParam1) // Position - 0xC24 Hash - 0x269D56BD ^0xB104E3E4
{
	Hash statName;

	statName = hParam0;

	if (statName != 0)
		STATS::STAT_SET_BOOL(statName, bParam1, true);

	return;
}

void func_23() // Position - 0xC40 Hash - 0xEFF6029E ^0x224AB476
{
	eViewModeContext i;

	if (!NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
	{
		if (!IS_BIT_SET(Global_2621446.f_67, 2))
		{
			for (i = ON_FOOT; i < 8; i = i + 1)
			{
				Global_2621446.f_58[i] = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(i);
			}
		
			MISC::SET_BIT(&(Global_2621446.f_67), 2);
			MISC::SET_BIT(&(Global_2621446.f_67), 0);
		}
	}

	return;
}

BOOL func_24() // Position - 0xC98 Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

BOOL func_25() // Position - 0xCA6 Hash - 0xEBB0E6F7 ^0x19BAFBE9
{
	if (IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_861, 2) && !Global_2684799.f_2846.f_216 == -1)
		return true;

	return false;
}

BOOL func_26() // Position - 0xCD7 Hash - 0xDBD936D3 ^0xDBD936D3
{
	if (func_27() == 0)
		return true;

	return false;
}

int func_27() // Position - 0xCEC Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_1574632.f_18;
}

BOOL func_28(Player plParam0) // Position - 0xCFA Hash - 0x68897CDD ^0x62820466
{
	if (func_8(plParam0, 0))
		return true;

	if (func_24())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_29() // Position - 0xD39 Hash - 0xE7491502 ^0xE7491502
{
	return IS_BIT_SET(Global_2683862, 7);
}

int func_30() // Position - 0xD47 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

void func_31(int iParam0) // Position - 0xD53 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

void func_32() // Position - 0xD76 Hash - 0xC30A8265 ^0x139DE662
{
	Global_23131.f_5 = 0;
	return;
}

void func_33(int iParam0) // Position - 0xD84 Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_2793044.f_4628 = iParam0;
	return;
}

void func_34(int iParam0, BOOL bParam1, int iParam2) // Position - 0xD95 Hash - 0xF1271C7F ^0xF8DA7FDB
{
	switch (iParam0)
	{
		case 5:
			if (iParam2 > -1)
				Global_1653913.f_137[iParam2] = bParam1;
			break;
	
		default:
			if (bParam1)
				MISC::SET_BIT(&(Global_1653913.f_1046), iParam0);
			else
				MISC::CLEAR_BIT(&(Global_1653913.f_1046), iParam0);
			break;
	}

	return;
}

void func_35() // Position - 0xDE4 Hash - 0xC85A4898 ^0xC85A4898
{
	func_33(1);
	func_34(4, false, -1);
	func_34(6, false, -1);
	func_34(7, false, -1);
	func_34(3, false, -1);
	func_34(1, false, -1);
	func_34(2, false, -1);
	func_34(11, false, -1);
	func_34(13, false, -1);
	func_34(14, false, -1);
	func_34(16, false, -1);
	return;
}

void func_36(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0xE3B Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_31(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_39())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_38(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_31(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_38(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID()) && !func_8(PLAYER::PLAYER_ID(), 0) && !func_37() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_28(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_37() // Position - 0xF88 Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

int func_38(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0xFA2 Hash - 0x3167F4C7 ^0xCE6B9B6A
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

BOOL func_39() // Position - 0xFD5 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_40() // Position - 0xFFC Hash - 0x850DE8C4 ^0x850DE8C4
{
	func_41(false);
	return;
}

void func_41(BOOL bParam0) // Position - 0x1009 Hash - 0x5FE88D2A ^0xA22C291D
{
	if (bParam0)
	{
		func_47();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			MISC::SET_BIT(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_46(0))
			func_42(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_42(int iParam0) // Position - 0x106C Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_45())
		return;

	if (Global_20584)
		if (func_44())
			func_43(true, true);
		else
			func_43(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_39())
		Global_20383.f_1 = 3;

	return;
}

void func_43(BOOL bParam0, BOOL bParam1) // Position - 0x10F6 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_46(0))
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

BOOL func_44() // Position - 0x116A Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_45() // Position - 0x1178 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_46(int iParam0) // Position - 0x1187 Hash - 0xE8921B44 ^0x4F063755
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

void func_47() // Position - 0x11DE Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}

	return;
}

void func_48(BOOL bParam0) // Position - 0x1207 Hash - 0x4086565B ^0xC8186F8B
{
	int i;

	i = 0;

	for (i = 0; i < Global_112300; i = i + 1)
	{
		HUD::CLEAR_FLOATING_HELP(i, bParam0);
		func_49(i);
	}

	return;
}

void func_49(int iParam0) // Position - 0x1235 Hash - 0x2C33869D ^0x1B33FE3
{
	Global_112300[iParam0 /*28*/].f_21 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_112300[iParam0 /*28*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_112300[iParam0 /*28*/].f_4), "", 64);
	Global_112300[iParam0 /*28*/].f_23 = 0;
	Global_112300[iParam0 /*28*/].f_24 = { 0f, 0f, 0f };
	Global_112300[iParam0 /*28*/].f_27 = 0;
	Global_112300[iParam0 /*28*/].f_20 = 0;
	Global_112300[iParam0 /*28*/].f_22 = 0;
	return;
}

void func_50() // Position - 0x129D Hash - 0x8D11088E ^0x8D11088E
{
	if (!Global_1574747)
		return;

	func_51();
	return;
}

void func_51() // Position - 0x12B4 Hash - 0xE0D4F0BC ^0x75D950DA
{
	Global_1574747 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), "", 32);
	Global_1574747.f_9 = 0;
	return;
}

void func_52(var uParam0) // Position - 0x12D2 Hash - 0xBA5A1D5A ^0x33644ECA
{
	uParam0->f_1 = 0;
	return;
}

void func_53(int iParam0) // Position - 0x12DF Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_1057410 = iParam0;
	return;
}

void func_54(var uParam0, BOOL bParam1) // Position - 0x12ED Hash - 0x238943C7 ^0xDEE216F0
{
	uParam0->f_6 = bParam1;

	if (bParam1)
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE"))
			AUDIO::START_AUDIO_SCENE("MUTES_RADIO_SCENE");
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MUTES_RADIO_SCENE"))
		AUDIO::STOP_AUDIO_SCENE("MUTES_RADIO_SCENE");

	return;
}

void func_55() // Position - 0x1323 Hash - 0x529C5807 ^0x529C5807
{
	if (func_60(&uLocal_95))
		func_1();

	func_59(_("Baller"));
	func_59("Baller_2");
	func_56();
	return;
}

void func_56() // Position - 0x134A Hash - 0xAC0A1713 ^0x6C8A7521
{
	Ped entityIndexOfCutsceneEntity;

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	if (Global_1962983)
	{
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		return;
	}

	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("Heist4CameraFlash3"))
	{
		if (unk_0xA903968D412A99A2("Heist4CameraFlash3") == 1f)
			Global_1962983 = true;
	
		return;
	}

	entityIndexOfCutsceneEntity = CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY("MP_1", 0);

	if (!ENTITY::DOES_ENTITY_EXIST(entityIndexOfCutsceneEntity) || !func_58(entityIndexOfCutsceneEntity))
		return;

	if (ENTITY::HAS_ANIM_EVENT_FIRED(entityIndexOfCutsceneEntity, 746734512))
		func_57("Heist4CameraFlash");

	if (ENTITY::HAS_ANIM_EVENT_FIRED(entityIndexOfCutsceneEntity, 1102081548))
	{
		GRAPHICS::ANIMPOSTFX_STOP("Heist4CameraFlash");
		func_57("Heist4CameraFlash2");
	}

	if (ENTITY::HAS_ANIM_EVENT_FIRED(entityIndexOfCutsceneEntity, 1401065908))
	{
		GRAPHICS::ANIMPOSTFX_STOP("Heist4CameraFlash2");
		func_57("Heist4CameraFlash3");
	}

	return;
}

void func_57(char* sParam0) // Position - 0x13FA Hash - 0xB68448D6 ^0x347C7A62
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return;

	if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sParam0))
		GRAPHICS::ANIMPOSTFX_PLAY(sParam0, 0, false);

	return;
}

BOOL func_58(Ped pedParam0) // Position - 0x1420 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_59(char* sParam0) // Position - 0x1441 Hash - 0x6120981 ^0xF163D9FD
{
	Vehicle vehicleIndexFromEntityIndex;

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
		return;

	if (ENTITY::DOES_ENTITY_EXIST(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(sParam0, 142944341)))
	{
		vehicleIndexFromEntityIndex = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(sParam0, 142944341));
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehicleIndexFromEntityIndex, false))
		{
			VEHICLE::SET_VEHICLE_COLOURS(vehicleIndexFromEntityIndex, 0, 0);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(vehicleIndexFromEntityIndex, 0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(vehicleIndexFromEntityIndex, 0);
		}
	}

	return;
}

BOOL func_60(var uParam0) // Position - 0x14A7 Hash - 0x40A83095 ^0x40A83095
{
	func_276();

	switch (func_275(uParam0))
	{
		case 0:
			func_159(uParam0);
			break;
	
		case 1:
			func_75(uParam0);
			break;
	
		case 2:
			func_74(uParam0);
			break;
	
		case 3:
			func_63(uParam0);
			break;
	
		case 4:
			return func_61(uParam0);
	}

	return false;
}

BOOL func_61(var uParam0) // Position - 0x150A Hash - 0xD322D0A9 ^0x53289261
{
	func_62();

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (uParam0->f_3)
		{
			func_4(true, false, false, true);
			ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	
		CUTSCENE::STOP_CUTSCENE(false);
		return 1;
	}

	if (!CAM::IS_SCREEN_FADING_OUT())
		CAM::DO_SCREEN_FADE_OUT(800);

	return 0;
}

void func_62() // Position - 0x154F Hash - 0x87A141AF ^0x16CB1AC
{
	STREAMING::SET_FOCUS_POS_AND_VEL(CAM::GET_FINAL_RENDERED_CAM_COORD(), 0f, 0f, 0f);
	return;
}

void func_63(var uParam0) // Position - 0x1562 Hash - 0x89DB6FD5 ^0xC4C4D280
{
	BOOL flag;

	func_62();
	func_70(uParam0);
	flag = uParam0->f_7;

	if (flag)
		if (func_69())
			func_68(uParam0, 4);

	if (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > CUTSCENE::GET_CUTSCENE_END_TIME() - 800)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
			if (!func_65(uParam0->f_24, 0, false, false, false, false, true, false, true))
				func_64(uParam0->f_24);
	
		func_68(uParam0, 4);
	}

	return;
}

void func_64(Vehicle veParam0) // Position - 0x15D9 Hash - 0xEF285B16 ^0x4EEAF74B
{
	Ped pedInVehicleSeat;
	int i;
	int vehicleMaxNumberOfPassengers;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
				if (!PED::IS_PED_INJURED(pedInVehicleSeat))
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedInVehicleSeat);
				else
					PED::DELETE_PED(&pedInVehicleSeat);
		
			vehicleMaxNumberOfPassengers = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0);
		
			for (i = 0; i < vehicleMaxNumberOfPassengers; i = i + 1)
			{
				if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, i, false))
				{
					pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, i, false);
				
					if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
						if (!PED::IS_PED_INJURED(pedInVehicleSeat))
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedInVehicleSeat);
						else
							PED::DELETE_PED(&pedInVehicleSeat);
				}
			}
		}
	}

	return;
}

BOOL func_65(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1675 Hash - 0xB51BA07A ^0xBC168CA
{
	int i;
	int num;
	Ped ped;
	Player playerIndexFromPed;

	num = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(veParam0) + 1;

	if (bParam4 || !ENTITY::IS_ENTITY_DEAD(veParam0, false))
	{
		for (i = 0; i < num; i = i + 1)
		{
			ped = func_67(veParam0, i - 1, bParam6, bParam7);
		
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				if (bParam3 && ped == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(ped))
					{
						playerIndexFromPed = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped);
					
						if (!PED::IS_PED_INJURED(ped) && playerIndexFromPed != func_66() && func_7(playerIndexFromPed, true, true) || bParam8)
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ped)) == 0)
								if (!bParam5)
									return false;
							else
								return false;
					}
				}
				else if (iParam1 == 0)
				{
					return false;
				}
				else if (!PED::IS_PED_INJURED(ped))
				{
					return false;
				}
			}
		}
	}

	return true;
}

Player func_66() // Position - 0x1759 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

Ped func_67(Vehicle veParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x1762 Hash - 0x6D404137 ^0x121AA864
{
	Ped pedInVehicleSeat;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veParam0, iParam1, bParam3))
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, iParam1, bParam3);

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, iParam1);
		
			if (!ENTITY::IS_ENTITY_DEAD(pedInVehicleSeat, false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_VEHICLE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedInVehicleSeat, SCRIPT_TASK_LEAVE_ANY_VEHICLE) == 1)
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(veParam0, false), ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, false)) < 10f)
						return pedInVehicleSeat;
		
			pedInVehicleSeat = -1;
		}
	}

	return pedInVehicleSeat;
}

void func_68(var uParam0, int iParam1) // Position - 0x17FD Hash - 0x3D5489B0 ^0x3D5489B0
{
	*uParam0 = iParam1;
	return;
}

BOOL func_69() // Position - 0x180A Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_70(var uParam0) // Position - 0x183C Hash - 0xFBA41A3 ^0xB52A1886
{
	char* cutsceneHandle;

	if (uParam0->f_20 == 0)
		return;

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		return;

	cutsceneHandle = uParam0->f_20 == -1295027632 ? "Plane_1" : "Plane";

	if (CUTSCENE::DOES_CUTSCENE_HANDLE_EXIST(cutsceneHandle) != 2)
		return;

	uParam0->f_24 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(cutsceneHandle, uParam0->f_20));

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
		return;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_24, false))
		return;

	func_71(uParam0);

	if (STATS::PLAYSTATS_BUSINESS_BATTLE_ENDED(uParam0->f_24, 0) < 0.0001f)
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_24, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_24, 2);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && !PED::IS_PED_INJURED(uParam0->f_22) && !PED::IS_PED_IN_VEHICLE(uParam0->f_22, uParam0->f_24, false))
		{
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_22, true, false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_22, false);
			TASK::TASK_ENTER_VEHICLE(uParam0->f_22, uParam0->f_24, -1, -1, 3f, 16, 0);
		}
	}
	else
	{
		VEHICLE::SET_VEHICLE_ENGINE_ON(uParam0->f_24, false, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(uParam0->f_24, 4);
	
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && !PED::IS_PED_INJURED(uParam0->f_22) && PED::IS_PED_IN_VEHICLE(uParam0->f_22, uParam0->f_24, false))
			TASK::TASK_LEAVE_VEHICLE(uParam0->f_22, uParam0->f_24, 16);
	}

	switch (uParam0->f_20)
	{
		case -1295027632:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 28);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 1, 6);
			break;
	
		case 1077420264:
			VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 27);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 111, 0);
			VEHICLE::SET_VEHICLE_LIVERY(uParam0->f_24, 2);
			break;
	}

	return;
}

BOOL func_71(var uParam0) // Position - 0x19CB Hash - 0xA0E0D491 ^0xFC7D8537
{
	if (uParam0->f_20 == 0)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
		return true;

	STREAMING::REQUEST_MODEL(func_72());

	if (!STREAMING::HAS_MODEL_LOADED(func_72()))
		return false;

	uParam0->f_22 = PED::CREATE_PED(PED_TYPE_CIVMALE, func_72(), uParam0->f_9, 0f, false, false);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_22, true);
	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_22, false, false);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_22, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_22, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_72());
	return true;
}

Hash func_72() // Position - 0x1A4B Hash - 0xDED80B4D ^0x529AE3F0
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

var func_73(BOOL bParam0, var uParam1, var uParam2) // Position - 0x1A5B Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_74(var uParam0) // Position - 0x1A72 Hash - 0x5F6DFD9C ^0xAFD0211D
{
	func_62();
	CAM::DO_SCREEN_FADE_IN(800);
	func_68(uParam0, 3);
	return;
}

void func_75(var uParam0) // Position - 0x1A8C Hash - 0xBE33FE84 ^0xA4C22384
{
	func_158(uParam0);

	if (uParam0->f_5)
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			CUTSCENE::SET_CUTSCENE_ENTITY_STREAMING_FLAGS("MP_1", 0, 1);

	if (!CUTSCENE::HAS_THIS_CUTSCENE_LOADED(uParam0->f_1))
	{
		func_13(&(uParam0->f_18), Global_262145.f_30917, false);
		return;
	}

	if (uParam0->f_5)
	{
		if (!func_58(uParam0->f_23))
			PED::RESURRECT_PED(uParam0->f_23);
	
		CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_23, "MP_1", 0, 0, 64);
	}

	func_79(uParam0);
	func_76(true, true, false);
	CUTSCENE::START_CUTSCENE(0);
	func_52(&(uParam0->f_18));
	MISC::CLEAR_AREA_OF_PROJECTILES(uParam0->f_9, 100f, 0);
	func_62();
	func_68(uParam0, 2);
	return;
}

void func_76(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1B32 Hash - 0xE3CC3A88 ^0xD0864DFA
{
	func_78();
	func_48(true);
	HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
	HUD::CLEAR_PRINTS();
	func_36(true, true, true, false, false, false, bParam2);
	func_77();
	func_34(12, true, -1);
	func_33(0);
	CAM::SET_WIDESCREEN_BORDERS(true, -1);
	HUD::DISPLAY_RADAR(false);
	HUD::DISPLAY_HUD(false);
	func_48(true);
	func_31(1);
	Global_2672505.f_3541 = 1;

	if (bParam0)
		if (!NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, bParam1);

	return;
}

void func_77() // Position - 0x1B9F Hash - 0x9E0EB620 ^0x9E0EB620
{
	func_33(0);
	func_34(4, 1, -1);
	func_34(6, true, -1);
	func_34(7, true, -1);
	func_34(3, true, -1);
	func_34(1, true, -1);
	func_34(2, true, -1);
	func_34(11, true, -1);
	func_34(13, true, -1);
	func_34(14, true, -1);
	func_34(16, true, -1);
	return;
}

void func_78() // Position - 0x1BF6 Hash - 0x62DDA6FB ^0xDB8789E6
{
	Global_1574747 = true;
	TEXT_LABEL_ASSIGN_STRING(&(Global_1574747.f_1), SCRIPT::GET_THIS_SCRIPT_NAME(), 32);
	Global_1574747.f_9 = MISC::GET_HASH_KEY(&(Global_1574747.f_1));
	return;
}

void func_79(var uParam0) // Position - 0x1C1F Hash - 0xBF25B0D4 ^0x95D4BBC1
{
	var unk;

	if (uParam0->f_20 != 0)
	{
		if (func_58(uParam0->f_24))
		{
			unk.f_9 = 49;
			unk.f_59 = 2;
			unk.f_78 = -1;
			unk.f_79 = -1;
			unk.f_96 = -1;
			unk.f_97 = 1;
			unk.f_99 = 132;
			unk.f_100 = -1;
		
			switch (uParam0->f_20)
			{
				case -1295027632:
					VEHICLE::SET_VEHICLE_COLOURS(uParam0->f_24, 111, 28);
					VEHICLE::SET_VEHICLE_EXTRA_COLOURS(uParam0->f_24, 1, 6);
					break;
			
				case 1077420264:
					unk.f_66 = 1077420264;
					TEXT_LABEL_ASSIGN_STRING(&(unk.f_1), "24SGX816", 16);
					unk.f_5 = 111;
					unk.f_6 = 27;
					unk.f_7 = 111;
					unk.f_8 = 0;
					unk.f_97 = 1;
					unk.f_99 = 132;
					unk.f_98 = 0;
					unk.f_67 = 2;
					unk.f_62 = 255;
					unk.f_63 = 255;
					unk.f_64 = 255;
					unk.f_74 = 255;
					unk.f_76 = 255;
					func_80(uParam0->f_24, &unk, false, true, false);
					break;
			}
		
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uParam0->f_24, uParam0->f_21, 0, 0, 64);
		}
	}

	return;
}

void func_80(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D1A Hash - 0x39770099 ^0x6B621F26
{
	Hash entityModel;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (PLAYER::PLAYER_ID() != func_66())
				uParam1->f_100 = PLAYER::PLAYER_ID();
		
			if (uParam1->f_70 == 0)
				uParam1->f_70 = 1;
		
			func_134(veParam0, uParam1, bParam2, bParam3);
		
			if (uParam1->f_102 != 0)
			{
				if (uParam1->f_102 == 2)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 1)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
					VEHICLE::SET_DRIFT_TYRES(veParam0, false);
				}
				else if (uParam1->f_102 == 3)
				{
					VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, true);
					VEHICLE::SET_DRIFT_TYRES(veParam0, true);
				}
			}
		
			if (func_133(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (uParam1->f_9[44] == 2)
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, false, true);
				else
					VEHICLE::SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(veParam0, true, true);
		
			if (!uParam1->f_78 == -1 && uParam1->f_9[14] == -1)
				AUDIO::OVERRIDE_VEH_HORN(veParam0, true, uParam1->f_78);
		
			if (!uParam1->f_79 == -1)
				AUDIO::SET_VEHICLE_HORN_SOUND_INDEX(veParam0, uParam1->f_79);
		
			if (func_132(uParam1->f_66, &num) && uParam1->f_80 != num)
				uParam1->f_80 = num;
		
			VEHICLE::SET_VEHICLE_ENVEFF_SCALE(veParam0, uParam1->f_80);
			VEHICLE::SET_VEHICLE_EXTRA_COLOUR_5(veParam0, uParam1->f_97);
		
			if (uParam1->f_99 >= 0)
				VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, uParam1->f_99);
		
			if (func_131(veParam0))
				func_125(veParam0, func_128(uParam1->f_74, uParam1->f_75, uParam1->f_76));
		
			if (VEHICLE::GET_VEHICLE_LIVERY2_COUNT(veParam0) > 1 && uParam1->f_98 >= 0)
				VEHICLE::SET_VEHICLE_LIVERY2(veParam0, uParam1->f_98);
		
			if (IS_BIT_SET(uParam1->f_95, 0))
				func_96(veParam0, &(uParam1->f_81));
		
			if (!func_87(4) && !bParam4 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				func_84(veParam0);
		
			if (func_83(entityModel))
			{
				switch (uParam1->f_9[5])
				{
					case 0:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						break;
				
					case 1:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 0, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						break;
				
					case 2:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 1, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 3, false);
						break;
				
					case 3:
						VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
					
						if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
						else
							VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						break;
				
					default:
						if (uParam1->f_9[5] != -1)
						{
							VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 16);
						
							if (VEHICLE::IS_VEHICLE_MODEL(veParam0, -1146969353) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1542143200) || VEHICLE::IS_VEHICLE_MODEL(veParam0, -579747861))
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 2, false);
							else
								VEHICLE::SET_VEHICLE_MOD(veParam0, 16, 4, false);
						}
						break;
				}
			}
		
			if (func_82(ENTITY::GET_ENTITY_MODEL(veParam0)))
			{
				switch (uParam1->f_9[5])
				{
					case 1:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_STRONG(veParam0, true);
					
						if (uParam1->f_9[16] == 5)
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747 + 0.05f);
						else
							VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, Global_262145.f_21747);
					
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				
					default:
						VEHICLE::SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(veParam0, false);
						VEHICLE::SET_VEHICLE_DAMAGE_SCALE(veParam0, 1f);
						VEHICLE::SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(veParam0, true);
						break;
				}
			}
		
			switch (uParam1->f_94)
			{
				case 0:
					break;
			
				case 1:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
					{
						if (IS_BIT_SET(uParam1->f_95, 3))
						{
						}
					}
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Player_Vehicle", INT))
					{
						DECORATOR::DECOR_SET_INT(veParam0, "Player_Vehicle", -1);
					}
					break;
			
				case 2:
					if (IS_BIT_SET(uParam1->f_95, 1) && IS_BIT_SET(uParam1->f_95, 2))
						if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()));
					else if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Veh_Modded_By_Player", INT))
						if (func_81(uParam1->f_81) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_81)))
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_81))));
						else
							DECORATOR::DECOR_SET_INT(veParam0, "Veh_Modded_By_Player", -1);
					break;
			
				case 3:
					break;
			
				case 4:
					break;
			}
		}
	}

	return;
}

BOOL func_81(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12) // Position - 0x21F1 Hash - 0x4709BB10 ^0xDD69BC9A
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0, 13);
}

BOOL func_82(Hash hParam0) // Position - 0x2201 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_133(hParam0);
}

BOOL func_83(Hash hParam0) // Position - 0x220F Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case 1653666139:
		case 1945374990:
		case 219613597:
		case 444994115:
		case -27326686:
		case -801550069:
		case 668439077:
		case -688189648:
		case 540101442:
		case 628003514:
		case 1637620610:
		case -1812949672:
		case 679453769:
		case -1694081890:
		case -1375060657:
		case -1106120762:
		case 1537277726:
		case -755532233:
		case -1374500452:
		case 1909700336:
		case -2042350822:
		case -1293924613:
		case -1478704292:
		case 1239571361:
		case 1009171724:
		case -1924800695:
		case -1744505657:
		case -2061049099:
		case 373261600:
		case 1742022738:
		case 1721676810:
		case 840387324:
		case -715746948:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 2139203625:
		case -1890996696:
		case 2038858402:
			return true;
	}

	return false;
}

void func_84(Vehicle veParam0) // Position - 0x2310 Hash - 0x81BE1D25 ^0x49ACF3EE
{
	Hash entityModel;

	if (Global_262145.f_20156)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		{
			if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veParam0))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
				entityModel.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0));
			
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", INT))
				{
					if (!DECORATOR::DECOR_EXIST_ON(veParam0, "RandomID"))
					{
						entityModel.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
						DECORATOR::DECOR_SET_INT(veParam0, "RandomID", entityModel.f_2);
					}
					else
					{
						entityModel.f_2 = DECORATOR::DECOR_GET_INT(veParam0, "RandomID");
					}
				}
			
				func_85(entityModel);
			}
		}
	}

	return;
}

void func_85(var uParam0, var uParam1, var uParam2) // Position - 0x239B Hash - 0x96D2C2D8 ^0x57DF276B
{
	struct<5> eventData;

	eventData = -2060526162;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = uParam0;
	eventData.f_2.f_1 = uParam0.f_1;
	eventData.f_2.f_2 = uParam0.f_2;
	SCRIPT::SEND_TU_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 5, func_86(true, true));
	return;
}

int func_86(BOOL bParam0, BOOL bParam1) // Position - 0x23DA Hash - 0x28809950 ^0x99E2BCBE
{
	int address;
	int i;
	Player player;

	for (i = 0; i < 32; i = i + 1)
	{
		player = PLAYER::INT_TO_PLAYERINDEX(i);
	
		if (func_7(player, false, false))
			if (player != PLAYER::PLAYER_ID() || bParam0)
				if (bParam1)
					MISC::SET_BIT(&address, i);
				else if (!func_8(player, 0))
					MISC::SET_BIT(&address, i);
	}

	return address;
}

BOOL func_87(int iParam0) // Position - 0x243F Hash - 0x79C8C36C ^0x79C8C36C
{
	int i;

	if (func_95())
	{
		for (i = 0; i < 60; i = i + 1)
		{
			if (func_94(i) == iParam0)
				if (func_88(i))
					return true;
		}
	}

	return false;
}

BOOL func_88(int iParam0) // Position - 0x247A Hash - 0x902ED9DB ^0x902ED9DB
{
	return func_89(iParam0, 6, true);
}

BOOL func_89(int iParam0, int iParam1, BOOL bParam2) // Position - 0x248A Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_93() == 0)
			return IS_BIT_SET(func_90(func_92(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

int func_90(int iParam0, int iParam1, int iParam2) // Position - 0x24EB Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_91(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_91(int iParam0) // Position - 0x2528 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_10();
	
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

int func_92(int iParam0) // Position - 0x255C Hash - 0x28E83966 ^0x9E37924F
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12385;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		case 58:
			return 11433;
	
		case 59:
			return 11844;
	
		default:
			break;
	}

	return 14192;
}

int func_93() // Position - 0x28F5 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

int func_94(int iParam0) // Position - 0x2900 Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
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
	
		case 22:
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_95() // Position - 0x2C29 Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

int func_96(Vehicle veParam0, Any* panParam1) // Position - 0x2C3A Hash - 0x26C20EE4 ^0x1E36FFB2
{
	int vehicleCrewEmblemRequestState;
	Player playerFromGamerHandle;

	if (!func_106(veParam0, panParam1))
		return 1;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 0)
	{
		if (!func_104(veParam0))
		{
			playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
		
			if (func_99(&veParam0, playerFromGamerHandle))
			{
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (vehicleCrewEmblemRequestState >= 3)
	{
		return 1;
	}
	else if (func_97(veParam0))
	{
	}

	return 0;
}

BOOL func_97(Vehicle veParam0) // Position - 0x2CB7 Hash - 0x5F209CA0 ^0x2B0580FA
{
	int vehicleCrewEmblemRequestState;
	int networkTime;
	int num;
	int num2;

	vehicleCrewEmblemRequestState = 0;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		vehicleCrewEmblemRequestState = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(veParam0, 0);

	if (vehicleCrewEmblemRequestState == 1 || vehicleCrewEmblemRequestState == 2)
	{
		if (vehicleCrewEmblemRequestState == 1)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				networkTime = NETWORK::GET_NETWORK_TIME();
			else
				networkTime = MISC::GET_GAME_TIMER();
		
			num = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(networkTime, Global_1577913));
			num2 = 20000;
		
			if (Global_1836597)
				num2 = 2000;
		
			if (num > num2)
			{
				GRAPHICS::ABORT_VEHICLE_CREW_EMBLEM_REQUEST(veParam0);
				func_98(veParam0);
				return false;
			}
		}
	
		return true;
	}

	return false;
}

void func_98(Vehicle veParam0) // Position - 0x2D44 Hash - 0x23A221D2 ^0x56A173D2
{
	int int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
				int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");

	if (!IS_BIT_SET(int, 16))
	{
		MISC::SET_BIT(&int, 16);
		DECORATOR::DECOR_SET_INT(veParam0, "MPBitset", int);
	}

	return;
}

BOOL func_99(var uParam0, Player plParam1) // Position - 0x2DA0 Hash - 0xBC57DF9D ^0xD82E46D0
{
	func_103();

	if (Global_1574632.f_18 != 0 || VEHICLE::GET_VEHICLE_IS_DUMMY(*uParam0))
	{
		Global_1949998.f_11 = VEHICLE::GET_FAKE_SUSPENSION_LOWERING_AMOUNT(*uParam0);
	
		if (Global_1949998.f_11 < 0f)
			Global_1949998.f_11 = 0f;
	}

	func_101(*uParam0, &Global_1949998, &(Global_1949998.f_1), &(Global_1949998.f_4), &(Global_1949998.f_7), &(Global_1949998.f_10));
	Global_1949998.f_1.f_2 = Global_1949998.f_1.f_2 - Global_1949998.f_11;

	if (Global_1949998.f_4.f_2 < 0f)
		Global_1949998.f_12 = 1;

	Global_1949998.f_13 = 200;

	if (ENTITY::GET_ENTITY_MODEL(*uParam0) == 1581459400 || ENTITY::GET_ENTITY_MODEL(*uParam0) == 1561920505)
		Global_1949998.f_13 = 255;

	if (Global_1949998.f_12)
	{
		if (func_100(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13))
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577913 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577913 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}
	else
	{
		Global_1949998.f_14 = { Global_1949998.f_1 };
		Global_1949998.f_14 = Global_1949998.f_14 * -1f;
		Global_1949998.f_17 = { Global_1949998.f_4 };
		Global_1949998.f_17 = Global_1949998.f_17 * -1f;
		Global_1949998.f_20 = { Global_1949998.f_7 };
		Global_1949998.f_20.f_1 = Global_1949998.f_20.f_1 * -1f;
		Global_1949998.f_20.f_2 = Global_1949998.f_20.f_2 * -1f;
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 0))
			Global_1949998.f_23 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 0);
		else
			Global_1949998.f_23 = 3;
	
		Global_1949998.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
	
		if (!GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(*uParam0, 1))
			Global_1949998.f_24 = GRAPHICS::GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(*uParam0, 1);
		else
			Global_1949998.f_24 = 3;
	
		if (Global_1949998.f_23 == 0 && func_100(uParam0, plParam1, Global_1949998, Global_1949998.f_1, Global_1949998.f_4, Global_1949998.f_7, Global_1949998.f_10, 0, Global_1949998.f_13) || Global_1949998.f_23 != 0 && Global_1949998.f_24 == 0 && func_100(uParam0, plParam1, Global_1949998, Global_1949998.f_14, Global_1949998.f_17, Global_1949998.f_20, Global_1949998.f_10, 1, Global_1949998.f_13) || Global_1949998.f_24 != 0)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				Global_1577913 = NETWORK::GET_NETWORK_TIME();
			else
				Global_1577913 = MISC::GET_GAME_TIMER();
		
			return true;
		}
	}

	return false;
}

BOOL func_100(var uParam0, Player plParam1, int iParam2, Vector3 vParam3, var uParam4, var uParam5, Vector3 vParam6, var uParam7, var uParam8, Vector3 vParam9, var uParam10, var uParam11, float fParam12, int iParam13, int iParam14) // Position - 0x304B Hash - 0x947E8C7E ^0xD061037E
{
	return GRAPHICS::ADD_VEHICLE_CREW_EMBLEM(*uParam0, PLAYER::GET_PLAYER_PED(plParam1), iParam2, vParam3, vParam6, vParam9, fParam12, iParam13, iParam14);
}

int func_101(Vehicle veParam0, int iParam1, var uParam2, var uParam3, var uParam4, float fParam5) // Position - 0x3074 Hash - 0xE4E90FE6 ^0x93F39EE7
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");

	if (!func_102(Global_1950024, 0f, 0f, 0f, false) && !func_102(Global_1950027, 0f, 0f, 0f, false) && !func_102(Global_1950030, 0f, 0f, 0f, false) && !Global_1950033 == 0f)
	{
		*uParam2 = { Global_1950024 };
		*uParam3 = { Global_1950027 };
		*uParam4 = { Global_1950030 };
		*fParam5 = Global_1950033;
		return 1;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 80636076:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1995326987:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1216765807:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1672195559:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case -1809822327:
			*uParam2 = { 0f, 1.5f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1903012613:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2140431165:
			*uParam2 = { -1f, 0.16f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -808831384:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 142944341:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1041692462:
			*uParam2 = { 0f, 0.94f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -114291515:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -891462355:
			*uParam2 = { 0f, 0.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1126868326:
			*uParam2 = { -1f, 0.08f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -16948145:
			*uParam2 = { 0f, 1.99f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 850565707:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -344943009:
			*uParam2 = { 0f, 1.49f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case 1069929536:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.65f;
			break;
	
		case -1435919434:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -682211828:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case -304802106:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 736902334:
			*uParam2 = { 0f, 2.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1696146015:
			*uParam2 = { -1.57f, 0.07f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 11251904:
			*uParam2 = { 0f, 0.09f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case 2072687711:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, -0.11f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2006918058:
			*uParam2 = { 0f, 1.51f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case -789894171:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1311154784:
			*uParam2 = { -1.61f, 0.26f, 0.17f };
			*uParam3 = { 0.9f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 330661258:
			*uParam2 = { 0f, 1.42f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1045541610:
			*uParam2 = { 0f, 1.35f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 108773431:
			*uParam2 = { 0f, 0.96f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case 2006142190:
			*uParam2 = { 0f, 0.06f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1130810103:
			*uParam2 = { 0f, 1.59f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1770332643:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1670998136:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1177543287:
			*uParam2 = { -1.71f, 0.31f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -394074634:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.75f;
			break;
	
		case -566387422:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -685276541:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1883002148:
			*uParam2 = { 0f, 1.31f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1291952903:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -5153954:
			*uParam2 = { 0f, 1.32f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -591610296:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 55628203:
			*uParam2 = { -1f, -0.48f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -391594584:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -89291282:
			*uParam2 = { 0f, 1.24f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1137532101:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1909141499:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 499169875:
			*uParam2 = { 0f, 0.98f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 2016857647:
			*uParam2 = { 0f, 1.28f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1800170043:
			*uParam2 = { 0f, 1.735f, 1.05f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -1775728740:
			*uParam2 = { 0f, 2.07f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1543762099:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 884422927:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 301427732:
			*uParam2 = { 0f, -0.46f, 1f };
			*uParam3 = { 0f, 1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.14f;
			break;
	
		case 37348240:
			*uParam2 = { -1.43f, -0.14f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 418536135:
			*uParam2 = { -1f, 0.33f, 0.08f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.25f;
			break;
	
		case -1289722222:
			*uParam2 = { 0f, 1.58f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 886934177:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1177863319:
			*uParam2 = { 0f, 1.21f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -624529134:
			*uParam2 = { 0f, 1.36f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1051415893:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 544021352:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.475f;
			break;
	
		case 1269098716:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2124201592:
			*uParam2 = { 0f, 0.86f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 914654722:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2064372143:
			*uParam2 = { 0f, 1.47f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -310465116:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -433375717:
			*uParam2 = { 0f, 1.23f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case -634879114:
			*uParam2 = { 0f, 0.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1032823388:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1461482751:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1348744438:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -511601230:
			*uParam2 = { 0f, 1.7f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -808457413:
			*uParam2 = { 0f, 1.75f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -909201658:
			*uParam2 = { 0f, 0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -377465520:
			*uParam2 = { 0f, 1.46f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1830407356:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2095439403:
			*uParam2 = { 0f, 1.833f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.44f;
			break;
	
		case 1507916787:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.425f;
			break;
	
		case -1450650718:
			*uParam2 = { 0f, 1.41f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case -1883869285:
			*uParam2 = { 0f, 1.6f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1150599089:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1651067813:
			*uParam2 = { 0f, 1.74f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1645267888:
			*uParam2 = { 0f, 1.54f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1934452204:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1737773231:
			*uParam2 = { 0f, 1.263f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -667151410:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1207771834:
			*uParam2 = { -1.22f, 0.6f, 0.44f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2045594037:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -14495224:
			*uParam2 = { 0f, 1.473f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2136773105:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 627094268:
			*uParam2 = { 0f, 1.83f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -893578776:
			*uParam2 = { 0f, -0.02f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -227741703:
			*uParam2 = { 0f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1685021548:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case -599568815:
			*uParam2 = { 0f, 2.26f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1189015600:
			*uParam2 = { 0f, 2.496f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 989381445:
			*uParam2 = { 0f, 2.286f, 1.55f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1255452397:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -746882698:
			*uParam2 = { 0f, 1.43f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1221512915:
			*uParam2 = { 0f, 1.45f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1349725314:
			*uParam2 = { 0f, 1.18f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 873639469:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1337041428:
			*uParam2 = { 0f, 1.68f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.49f;
			break;
	
		case -1477580979:
			*uParam2 = { 0f, 1.55f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1545842587:
			*uParam2 = { 0f, 1.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2098947590:
			*uParam2 = { -1f, -0.17f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1723137093:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 970598228:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 1123216662:
			*uParam2 = { 0f, 1.62f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 384071873:
			*uParam2 = { 0f, 1.38f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 699456151:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case -1311240698:
			*uParam2 = { 0f, 2.48f, 0.26f };
			*uParam3 = { 0f, -1f, -0.212f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.32f;
			break;
	
		case -1894894188:
			*uParam2 = { 0f, 1.69f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1008861746:
			*uParam2 = { 0f, 1.783f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 464687292:
			*uParam2 = { -1.23f, 0.11f, -0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1531094468:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1762279763:
			*uParam2 = { 0f, 1.44f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 338562499:
			*uParam2 = { 0f, 1.76f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -140902153:
			*uParam2 = { 0f, 0.08f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -825837129:
			*uParam2 = { -1f, 0.11f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1622444098:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case 523724515:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1777363799:
			*uParam2 = { 0f, 1.61f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 65402552:
			*uParam2 = { 0f, 2.352f, 1.003f };
			*uParam3 = { 0f, -1f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -1122289213:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1193103848:
			*uParam2 = { 0f, 1.48f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 758895617:
			*uParam2 = { -0.96f, -0.69f, 0.35f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		default:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, 0f, -1f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 92612664:
			*uParam2 = { -1f, 0.18f, 0.1f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1488164764:
			*uParam2 = { 0f, 2.23f, 1f };
			*uParam3 = { 0f, -0.22f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 767087018:
			*uParam2 = { -1f, 0.18f, -0.05f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 486987393:
			*uParam2 = { 0f, 1.52f, 0.99f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1403128555:
			*uParam2 = { -1.24f, 0.3f, -0.07f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1297672541:
			*uParam2 = { -1f, 0.17f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.05f };
			*fParam5 = 0.33f;
			break;
	
		case -142942670:
			*uParam2 = { 0f, 1.37f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 408192225:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1836027715:
			*uParam2 = { -1f, 0.405f, 0.4625f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case 117401876:
			*uParam2 = { 0f, 1.143f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7125f;
			break;
	
		case 841808271:
			*uParam2 = { -1f, -0.47f, -0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2625f;
			break;
	
		case 75131841:
			*uParam2 = { 0f, 1.683f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case 1373123368:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.775f;
			break;
	
		case -1205801634:
			*uParam2 = { -1f, 0.445f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.325f;
			break;
	
		case -431692672:
			*uParam2 = { -1f, 0f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1237253773:
			*uParam2 = { -1f, 0.34f, 0.2975f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1078682497:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1011753235:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -159126838:
			*uParam2 = { 0f, 0.15f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case 1265391242:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.16f;
			break;
	
		case -1089039904:
			*uParam2 = { -1f, 0f, 0.2075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -589178377:
			*uParam2 = { -1.78f, 0.52f, 0.52f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 729783779:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -326143852:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 723973206:
			*uParam2 = { -1f, 0f, 0.0375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3875f;
			break;
	
		case 1923400478:
			*uParam2 = { -1f, 0f, 0.0925f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4375f;
			break;
	
		case 1039032026:
			*uParam2 = { -1f, 0.5325f, 0.245f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2875f;
			break;
	
		case 941800958:
			*uParam2 = { 0f, 0.94f, 1.03f };
			*uParam3 = { 0f, -0.03f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1753414259:
			*uParam2 = { 0f, -0.17f, 1f };
			*uParam3 = { 0f, 0.34f, -0.786f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 296357396:
			*uParam2 = { 0f, 2.32f, 0.94f };
			*uParam3 = { 0f, -0.182f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2107990196:
			*uParam2 = { -1.94f, 1.07f, 0.38f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1372848492:
		case 410882957:
			*uParam2 = { -1f, 0.2475f, -0.175f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.435f;
			break;
	
		case 640818791:
			*uParam2 = { 0f, 0.3f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -1566741232:
			*iParam1 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veParam0, "chassis_dummy");
			*uParam2 = { 0f, 1.597f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1987142870:
			*uParam2 = { -1f, 0.27f, -0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -498054846:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1581459400:
			*uParam2 = { -1.2f, -0.39f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case -1479664699:
			*uParam2 = { -1f, -0.21f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 349605904:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 784565758:
			*uParam2 = { -1f, -0.1775f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1663218586:
			*uParam2 = { -1f, 0.4f, -0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1353081087:
			*uParam2 = { -1f, 0.21f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -2119578145:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1790546981:
			*uParam2 = { -1f, 0f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1013450936:
			*uParam2 = { 0f, 2.01f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case -1361687965:
			*uParam2 = { -1.05f, 0f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 525509695:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1896491931:
			*uParam2 = { 0f, 1.713f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2040426790:
			*uParam2 = { -1f, 0.42f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2006667053:
			*uParam2 = { -1.12f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -2039755226:
			*uParam2 = { -1f, 0f, 0.5f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 223258115:
			*uParam2 = { -1f, 0f, 0.14f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.015f };
			*fParam5 = 0.35f;
			break;
	
		case -1797613329:
			*uParam2 = { -1f, 0.15f, -0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -899509638:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 16646064:
			*uParam2 = { -1f, 0f, 0.1225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case -1126264336:
			*uParam2 = { 0f, 1.95f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1119641113:
			*uParam2 = { -1f, 0.275f, 0.195f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -831834716:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 2068293287:
			*uParam2 = { -1f, 0f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1878062887:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 634118882:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 470404958:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 666166960:
			*uParam2 = { 0f, 1.4f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 906642318:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 704435172:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -2030171296:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -604842630:
			*uParam2 = { -1f, 0.37f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1660945322:
			*uParam2 = { -1f, -0.18f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1943285540:
			*uParam2 = { -1f, -0.2f, 0.17f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1485523546:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1489967196:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -888242983:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1922255844:
			*uParam2 = { 0f, 1.56f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 1102544804:
			*uParam2 = { -1f, -0.21f, 0.03f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 972671128:
			*uParam2 = { -1f, 0f, 0.12f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 633712403:
			*uParam2 = { -1f, -0.4f, 0.075f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -295689028:
			*uParam2 = { 0f, 1.77f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -602287871:
			*uParam2 = { -1f, -0.1f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1274868363:
			*uParam2 = { -1f, -0.06f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1757836725:
			*uParam2 = { -1f, -0.21f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1426219628:
			*uParam2 = { -1f, -0.06f, 0.21f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1829802492:
			*uParam2 = { -1f, 0.06f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 2123327359:
			*uParam2 = { -1f, 0.3f, 0.27f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 234062309:
			*uParam2 = { -1f, 0.48f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1475773103:
			*uParam2 = { 0f, 2.103f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1930048799:
			*uParam2 = { -1.2f, 0.03f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.55f;
			break;
	
		case 1203490606:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -432008408:
			*uParam2 = { -1f, 0.36f, -0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1549126457:
			*uParam2 = { -1f, -0.06f, 0.565f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 683047626:
			*uParam2 = { 0f, 2.33f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1232836011:
			*uParam2 = { -1f, -0.12f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -777172681:
			*uParam2 = { -1f, 0.03f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1887331236:
			*uParam2 = { -1f, 0f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -2115793025:
			*uParam2 = { -1f, 0.27f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1404136503:
			*uParam2 = { -1f, 0.27f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 822018448:
			*uParam2 = { -1f, 0f, 0.34f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case 2035069708:
			*uParam2 = { -1f, 0.335f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.09f;
			break;
	
		case -255678177:
			*uParam2 = { 0f, 0.27f, 0.845f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1606187161:
			*uParam2 = { 0f, -0.133f, 0.61f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.125f;
			break;
	
		case 1873600305:
			*uParam2 = { -1f, 0.31f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -405626514:
			*uParam2 = { -1f, 0.06f, 0.325f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1009268949:
			*uParam2 = { -1f, 0.3f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -570033273:
			*uParam2 = { -1f, 0.2f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -609625092:
			*uParam2 = { -1f, 0.18f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.095f;
			break;
	
		case -1558399629:
			*uParam2 = { -1f, -0.03f, -0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1026149675:
			*uParam2 = { 0f, 2.352f, 0.253f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -618617997:
			*uParam2 = { -1f, 0.33f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1289178744:
			*uParam2 = { -1f, -0.54f, -0.11f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1842748181:
			*uParam2 = { -0.9875f, -0.0175f, -0.01f };
			*uParam3 = { 0.8975f, -0.26f, -0.0725f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1625f;
			break;
	
		case -2022483795:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -239841468:
			*uParam2 = { -1f, 0.006f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1790834270:
			*uParam2 = { -1f, 0.225f, 0.541f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 196747873:
			*uParam2 = { 0f, 1.14f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 627535535:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -757735410:
			*uParam2 = { -1f, 0.234f, 0.376f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -2048333973:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -482719877:
			*uParam2 = { -1f, -0.024f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1034187331:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1093792632:
			*uParam2 = { -1f, 0.237f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -1758137366:
			*uParam2 = { -1f, 0.153f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 941494461:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 777714999:
			*uParam2 = { 0.363f, 1.34f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1886268224:
			*uParam2 = { -1f, -0.273f, -0.02f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1074745671:
			*uParam2 = { -1f, -0.273f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1180875963:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 272929391:
			*uParam2 = { -1f, 0f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 989294410:
			*uParam2 = { 0f, 1.763f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1405937764:
			*uParam2 = { -1f, 0.33f, 0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0.06f };
			*fParam5 = 0.2f;
			break;
	
		case 719660200:
			*uParam2 = { -1f, -0.273f, 0.084f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -982130927:
			*uParam2 = { -1f, 0.159f, -0.193f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 159274291:
			*uParam2 = { -1f, 0.309f, 0.276f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 223240013:
			*uParam2 = { -1f, 0.159f, -0.127f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -32236122:
			*uParam2 = { -1f, 0.501f, 0.531f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 433954513:
			*uParam2 = { -1.5f, 0.42f, 0.584f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 884483972:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case -1210451983:
			*uParam2 = { 0f, 1.515f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case 1356124575:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.43f;
			break;
	
		case 1504306544:
			*uParam2 = { -1f, 0.201f, 0.114f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1939284556:
			*uParam2 = { -1.5f, 0.906f, 0.071f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 917809321:
			*uParam2 = { -1f, 0.441f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 177270108:
			*uParam2 = { -1.3f, 2.045f, 0.802f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 387748548:
			*uParam2 = { -1.627f, 2.456f, 0.745f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1392481335:
			*uParam2 = { -1f, 0.186f, 0.382f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -998177792:
			*uParam2 = { -1f, 0.432f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case -1242608589:
			*uParam2 = { -1f, 0.232f, 0.24f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case 1841130506:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 2049897956:
			*uParam2 = { 0f, 1.972f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.18f;
			break;
	
		case -2118308144:
			*uParam2 = { -2.02f, 6.45f, -0.716f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1483171323:
			*uParam2 = { -1f, -0.291f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 886810209:
			*uParam2 = { -1f, 0.23f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -1693015116:
			*uParam2 = { -1.891f, 2.144f, 0.657f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -692292317:
			*uParam2 = { -2.127f, 5.413f, 1.132f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.34f;
			break;
	
		case -1435527158:
			*uParam2 = { -0.897f, 1.391f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -212993243:
			*uParam2 = { -1.51f, 0.71f, 0.451f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1561920505:
			*uParam2 = { -1f, 0.298f, 0.257f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.36f;
			break;
	
		case -1848994066:
			*uParam2 = { -1f, 0.181f, -0.066f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1741861769:
			*uParam2 = { -1f, 0.301f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1104234922:
			*uParam2 = { 0f, 1.52f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1871995513:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1352136073:
			*uParam2 = { -1f, 0.616f, -0.131f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -313185164:
			*uParam2 = { -1f, 0f, 0.116f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -2079788230:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 600450546:
			*uParam2 = { -1f, -0.228f, 0.321f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -410205223:
			*uParam2 = { -1f, 0.203f, 0.126f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 867799010:
			*uParam2 = { -1f, -0.126f, 0.208f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1529242755:
			*uParam2 = { -1f, 0.252f, -0.095f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 903794909:
			*uParam2 = { -1f, 0f, 0.25f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1532697517:
			*uParam2 = { -1.3f, 0.18f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 15219735:
			*uParam2 = { -1f, -0.134f, 0.158f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 661493923:
			*uParam2 = { -1f, 0.002f, 0.031f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 838982985:
			*uParam2 = { -1f, -0.175f, 0.242f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -391595372:
			*uParam2 = { -1f, 0f, 0.244f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.275f;
			break;
	
		case -121446169:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	}

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 1909189272:
			*uParam2 = { -1f, 0f, 0.407f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.225f;
			break;
	
		case 1617472902:
			*uParam2 = { -1f, 0f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1267543371:
			*uParam2 = { -1f, 0.441f, -0.128f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 931280609:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1046206681:
			*uParam2 = { -1f, 0f, 0.0805f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1259134696:
			*uParam2 = { 0f, 1.592f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1115909093:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1031562256:
			*uParam2 = { -1f, 0.679f, 0.514f };
			*uParam3 = { 1f, 0f, -0.75f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.175f;
			break;
	
		case -376434238:
			*uParam2 = { -1.588f, 0.315f, 0.337f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -986944621:
			*uParam2 = { -1f, 0f, 0.221f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1134706562:
			*uParam2 = { -1f, 0f, 0.219f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2120700196:
			*uParam2 = { -1.52f, 0.41f, 0.15f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -214906006:
			*uParam2 = { -1f, 0f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -988501280:
			*uParam2 = { -1f, 0.393f, 0.162f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 1254014755:
			*uParam2 = { -1f, 1.266f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 219613597:
			*uParam2 = { -1.5f, 0.833f, 0.391f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1945374990:
			*uParam2 = { -1.125f, 2.691f, 0.318f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1653666139:
			*uParam2 = { -1.5f, 1.853f, 0.779f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.38f;
			break;
	
		case 500482303:
			*uParam2 = { -1f, 0.195f, 0.105f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2044532910:
			*uParam2 = { -1.73f, 0.159f, 0.61f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -638562243:
			*uParam2 = { -1f, -0.188f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -420911112:
			*uParam2 = { -1.213f, 1.546f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 321186144:
			*uParam2 = { -1f, 0.036f, 0.096f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -54332285:
			*uParam2 = { -1f, 0.249f, 0.511f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 2069146067:
			*uParam2 = { -1f, 0.306f, 0.355f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.08f;
			break;
	
		case -1988428699:
			*uParam2 = { -1.73f, 3.397f, 0.724f };
			*uParam3 = { 1f, 0.12f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 668439077:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case -1694081890:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case -2042350822:
			*uParam2 = { 0f, 2.12f, 1.241f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0.084f };
			*fParam5 = 0.775f;
			break;
	
		case 2139203625:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1890996696:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 2038858402:
			*uParam2 = { -1f, 0.446f, 0.247f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -801550069:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 679453769:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1909700336:
			*uParam2 = { -1.432f, 1.443f, 1.292f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1566607184:
			*uParam2 = { -1f, 0.167f, 0.159f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1591739866:
			*uParam2 = { -1.5f, 1.066f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1279262537:
			*uParam2 = { -1f, 0.111f, 0.123f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -688189648:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1375060657:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1293924613:
			*uParam2 = { -1f, 0f, 0.417f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2096690334:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1009171724:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1924800695:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1744505657:
			*uParam2 = { -1f, 0f, 0.137f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 444994115:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1637620610:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -755532233:
			*uParam2 = { -1f, 0f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 628003514:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1537277726:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1239571361:
			*uParam2 = { -1f, 0.195f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -331467772:
			*uParam2 = { -1f, -0.091f, 0.207f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1721676810:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 840387324:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -715746948:
			*uParam2 = { -1.78f, 0.445f, 0.81f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -507495760:
			*uParam2 = { -1f, -0.105f, 0.262f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2061049099:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 373261600:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case 1742022738:
			*uParam2 = { -1f, 0.152f, 0.537f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1168952148:
			*uParam2 = { -1f, 0.415f, 0.394f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1456744817:
			*uParam2 = { -1f, 0.171f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -49115651:
			*uParam2 = { -1f, 0f, 0.163f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 540101442:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1106120762:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1478704292:
			*uParam2 = { -1f, 0f, 0.286f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1349095620:
			*uParam2 = { -1f, 0.687f, 0.4115f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 686471183:
			*uParam2 = { -1.045f, 0.15f, 0.09f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 310284501:
			*uParam2 = { -1f, 0.12f, 0.334f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1323778901:
			*uParam2 = { -1f, 0.372f, 0.439f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 722226637:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case 1934384720:
			*uParam2 = { -1f, 0f, 0.222f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -362150785:
			*uParam2 = { -1f, 0.27f, 0.246f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1854776567:
			*uParam2 = { -1f, 0.195f, -0.063f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -208911803:
			*uParam2 = { -1f, 0.213f, 0.213f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -664141241:
			*uParam2 = { -1f, 0.576f, -0.123f };
			*uParam3 = { 0.997f, -0.105f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -941272559:
			*uParam2 = { -1f, -0.207f, 0.042f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case -882629065:
			*uParam2 = { -1f, 0.012f, 0.147f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1620126302:
			*uParam2 = { -1f, 0.216f, 0.216f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1829436850:
			*uParam2 = { -1f, 0.24f, 0.255f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -447711397:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1416466158:
			*uParam2 = { -1f, 0f, 0.156f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -1804415708:
			*uParam2 = { -1f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -324618589:
			*uParam2 = { -1f, 0.357f, 0.256f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.2f;
			break;
	
		case 1044193113:
			*uParam2 = { -1f, 0.426f, 0.339f };
			*uParam3 = { 1f, 0.06f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1862507111:
			*uParam2 = { -1f, 0.108f, 0.234f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -682108547:
			*uParam2 = { -1f, 0.273f, -0.06f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 833469436:
			*uParam2 = { -1f, 0.35f, 0.456f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 83136452:
			*uParam2 = { 0f, 1.9002f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1118611807:
			*uParam2 = { -1f, 0.104f, 0.339f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 987469656:
			*uParam2 = { -1f, 0.104f, 0.223f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -834353991:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 1456336509:
			*uParam2 = { -1f, 0.104f, 0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 872704284:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 409049982:
			*uParam2 = { -1f, 0.313f, 0.16f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 394110044:
			*uParam2 = { 0f, 1.2f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.37f;
			break;
	
		case 1693751655:
			*uParam2 = { -1f, 0.252f, 0.201f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 2031587082:
			*uParam2 = { -1f, -0.018f, 0.253f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 960812448:
			*uParam2 = { -1f, 0.0965f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1756021720:
			*uParam2 = { 0f, 2.019f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.5f;
			break;
	
		case -1132721664:
			*uParam2 = { -1.5f, 0.42f, -0.2f };
			*uParam3 = { 1f, -0.0997f, 0.0415f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case 1284356689:
			*uParam2 = { -1.202f, 0.034f, 0.6635f };
			*uParam3 = { 1f, -0.002f, 0f };
			*uParam4 = { 0f, -0.7398f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -2122646867:
			*uParam2 = { -1.5f, 0.379f, 0.297f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.24f;
			break;
	
		case 2134119907:
			*uParam2 = { -1f, 0f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.375f;
			break;
	
		case 1717532765:
			*uParam2 = { -1.76f, 0.105f, 0.009f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case -2098954619:
			*uParam2 = { 0f, 1.252f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.31f;
			break;
	
		case -913589546:
			*uParam2 = { 0f, 2.135f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.205f;
			break;
	
		case 1802742206:
			*uParam2 = { 0f, 2.352f, 0.3f };
			*uParam3 = { 0f, -1f, -0.256f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.135f;
			break;
	
		case 67753863:
			*uParam2 = { -1f, 0.252f, 0.203f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.21f;
			break;
	
		case -1810806490:
			*uParam2 = { 0f, 1.654f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -631322662:
			*uParam2 = { -1.08f, 0.28f, -0.093f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -838099166:
			*uParam2 = { -1.64f, 0.7f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1728685474:
			*uParam2 = { -1f, -0.021f, 0.273f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case -1358197432:
			*uParam2 = { -1f, 0.156f, 0.099f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1107404867:
			*uParam2 = { -1.5f, -0.36f, 0.2125f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1429622905:
			*uParam2 = { -1f, 0.275f, 0.215f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1045911276:
			*uParam2 = { -1f, 1.454f, 0.485f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1149725334:
			*uParam2 = { -1f, 0.109f, 0.129f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1455990255:
			*uParam2 = { -1f, 0.194f, 0.342f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.15f;
			break;
	
		case 1644055914:
			*uParam2 = { -1f, 0.111f, 0.168f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1858654120:
			*uParam2 = { 0f, 1.632f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.19f;
			break;
	
		case -1193912403:
			*uParam2 = { -1f, 0.497f, 0.212f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1582061455:
			*uParam2 = { -1f, 0f, 0.181f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1726022652:
			*uParam2 = { -1f, 0.205f, 0.074f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 579912970:
			*uParam2 = { -1f, 0.408f, 0.295f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1377217886:
			*uParam2 = { -1f, 0.204f, 0.357f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1540373595:
			*uParam2 = { -1f, 0.249f, 0.164f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 426742808:
			*uParam2 = { -1f, 0.253f, 0.142f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1755697647:
			*uParam2 = { -1f, 0.223f, 0.185f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -452604007:
			*uParam2 = { -1f, 0f, 0.189f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -291021213:
			*uParam2 = { -1f, 0.42f, 0.309f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case -1244461404:
			*uParam2 = { -1f, 0.337f, 0.283f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1416471345:
			*uParam2 = { -1f, 0.14f, -0.155f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 736672010:
			*uParam2 = { -1f, 0.153f, -0.006f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1507230520:
			*uParam2 = { -1f, 0.318f, -0.013f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2038480341:
			*uParam2 = { -1f, 0.101f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1304459735:
			*uParam2 = { -1f, 0.151f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1527436269:
			*uParam2 = { -1f, 0.533f, 0.197f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -915234475:
			*uParam2 = { -1f, 0.076f, 0.122f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -261346873:
			*uParam2 = { -1f, 0.461f, 0.264f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1532171089:
			*uParam2 = { -1f, 0.279f, 0.235f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -619930876:
			*uParam2 = { -1f, 0.251f, 0.149f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 359875117:
			*uParam2 = { -1.194f, 0.182f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 655665811:
			*uParam2 = { -1.194f, 0.409f, 0.199f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.22f;
			break;
	
		case 1141395928:
			*uParam2 = { -1f, 0.05f, 0.187f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 629969764:
			*uParam2 = { -1f, 0.249f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -670086588:
			*uParam2 = { -1.2f, 0.474f, 0.335f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.23f;
			break;
	
		case 461465043:
			*uParam2 = { -1.037f, 0.438f, 0.31f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 1353120668:
			*uParam2 = { 0f, 0.306f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.045f;
			break;
	
		case 1993851908:
			*uParam2 = { -1f, 0.292f, 0.29f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 662793086:
			*uParam2 = { -1f, 0.387f, 0.209f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 15214558:
			*uParam2 = { -1f, 0.15f, 0.2f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -754687673:
			*uParam2 = { -1f, 0.1f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case 40817712:
			*uParam2 = { -1f, 0.2f, 0.138f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -64075878:
			*uParam2 = { -1f, 0.1f, 0.26f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -294678663:
			*uParam2 = { -1f, 0f, 0.28f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1855505138:
			*uParam2 = { 0f, 1.317f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.33f;
			break;
	
		case -893984159:
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case 274946574:
			*uParam2 = { -1f, 0.74f, 0.19f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -165394758:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -1758379524:
			*uParam2 = { -1f, -0.07f, 0.3f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -994371320:
			*uParam2 = { -1f, 0.07f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.45f;
			break;
	
		case -768236378:
			*uParam2 = { -1f, 0.5f, 0.48f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1706945532:
			*uParam2 = { -1f, 0.5f, 0.182f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.28f;
			break;
	
		case -1356880839:
			*uParam2 = { -1f, 0.147f, 0.239f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 775514032:
			*uParam2 = { -1f, -0.4f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -505223465:
			*uParam2 = { 0f, 1.462f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.29f;
			break;
	
		case -1386336041:
			*uParam2 = { -1f, 0.3f, 0.37f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case 1748565021:
			*uParam2 = { -1f, 0.5f, 0.225f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.25f;
			break;
	
		case 1384502824:
			*uParam2 = { -1f, 0.066f, 0.329f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.1f;
			break;
	
		case -1035489563:
			*uParam2 = { -1f, 1.19f, 0.18f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case 996383885:
			*uParam2 = { -1f, 0.25f, 0.4f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.4f;
			break;
	
		case -1249788006:
			*uParam2 = { 0f, 1.623f, 1f };
			*uParam3 = { 0f, 0f, -1f };
			*uParam4 = { -1f, 0f, 0f };
			*fParam5 = 0.7f;
			break;
	
		case 268758436:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1076201208:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 669204833:
			*uParam2 = { -1f, 0f, 0.22f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 1550581940:
			*uParam2 = { -1f, 0.3f, 0f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -1933242328:
			*uParam2 = { -1f, -0.4f, 0.375f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case 2100457220:
			*uParam2 = { -1f, 0.069f, 0.13f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.3f;
			break;
	
		case -461850249:
			*uParam2 = { -1f, -0.253f, 0.39f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.35f;
			break;
	
		case -131348178:
			*uParam2 = { -1f, 0.101f, 0.227f };
			*uParam3 = { 1f, 0f, 0f };
			*uParam4 = { 0f, -1f, 0f };
			*fParam5 = 0.6f;
			break;
	}

	return 1;
}

BOOL func_102(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0x85DE Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

void func_103() // Position - 0x8625 Hash - 0x27D28D2 ^0x4A8E83FA
{
	Global_1949998 = 0;
	Global_1949998.f_1 = { 0f, 0f, 0f };
	Global_1949998.f_4 = { 0f, 0f, 0f };
	Global_1949998.f_7 = { 0f, 0f, 0f };
	Global_1949998.f_10 = 0f;
	Global_1949998.f_11 = 0f;
	Global_1949998.f_12 = 0;
	Global_1949998.f_13 = 0;
	Global_1949998.f_14 = { 0f, 0f, 0f };
	Global_1949998.f_17 = { 0f, 0f, 0f };
	Global_1949998.f_20 = { 0f, 0f, 0f };
	Global_1949998.f_23 = 0;
	Global_1949998.f_24 = 0;
	return;
}

BOOL func_104(Vehicle veParam0) // Position - 0x869E Hash - 0x3805EC88 ^0xC1D38CC2
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0) || func_105(veParam0))
			return true;

	return false;
}

BOOL func_105(Vehicle veParam0) // Position - 0x86D6 Hash - 0x69692E89 ^0x59A9D2B1
{
	int int;

	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
			{
				int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
				return IS_BIT_SET(int, 16);
			}
		}
	}

	return false;
}

BOOL func_106(Vehicle veParam0, Any* panParam1) // Position - 0x871E Hash - 0xC9297803 ^0xB20BA146
{
	Player playerFromGamerHandle;
	BOOL flag;

	if (NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(panParam1))
		playerFromGamerHandle = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(panParam1);
	else
		playerFromGamerHandle = func_66();

	flag = false;

	if (playerFromGamerHandle == PLAYER::PLAYER_ID())
		if (func_117(15, false))
			flag = true;
		else if (func_113(true))
			flag = true;
	else
		flag = true;

	if (!(ENTITY::DOES_ENTITY_EXIST(veParam0) && !ENTITY::IS_ENTITY_DEAD(veParam0, false)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veParam0) || !NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(0, -1, true) || !(NETWORK::NETWORK_IS_HANDLE_VALID(panParam1, 13) && NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(panParam1)) || playerFromGamerHandle == func_66() || !func_7(playerFromGamerHandle, false, false) || !flag || func_107(veParam0))
		return false;

	return true;
}

BOOL func_107(Vehicle veParam0) // Position - 0x8805 Hash - 0x760B040D ^0x601BFA7E
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	if (func_109(PLAYER::PLAYER_ID()) == 3)
		if (func_108(veParam0) != -1)
			return true;

	if (Global_1950023)
		return true;

	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case 788045382:
		case -1453280962:
		case -2128233223:
		case -1269889662:
		case 699456151:
		case -1311240698:
		case -349601129:
		case 743478836:
		case 301427732:
		case -1661854193:
		case 534258863:
		case -827162039:
		case -312295511:
		case -1860900134:
		case 2071877360:
		case -591651781:
		case -401643538:
		case 349315417:
		case -915704871:
		case 237764926:
		case -631760477:
		case -1106353882:
		case -777172681:
		case 86520421:
		case 1887331236:
		case 1549126457:
		case 101905590:
		case -663299102:
		case 390201602:
		case -1071380347:
		case 741090084:
		case -27326686:
		case -1812949672:
		case -1374500452:
		case -1232836011:
		case 2067820283:
		case 482197771:
		case 819197656:
		case 6774487:
		case 1491277511:
		case -440768424:
		case -1523428744:
		case -674927303:
		case -1590337689:
		case 301304410:
		case 340154634:
		case -1960756985:
		case -1254331310:
		case 408825843:
		case 740289177:
		case 1492612435:
		case 1181339704:
		case 1086534307:
		case -102335483:
		case -210308634:
		case -857356038:
		case -1492917079:
		case 298565713:
		case -10917683:
			return true;
	
		case 65402552:
		case 1026149675:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
				return true;
			break;
	
		case 384071873:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) == 1)
				return true;
			break;
	
		case 1234311532:
			return true;
	
		case 562680400:
		case 1897744184:
		case -1924433270:
		case 1502869817:
		case -1881846085:
		case 177270108:
		case 387748548:
			return true;
	
		case 1489874736:
			return true;
	
		case -1988428699:
			return true;
	
		case -286046740:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case 916547552:
		case -48031959:
		case -907477130:
		case -1444114309:
		case -768236378:
		case -1576586413:
		case -1627077503:
			return true;
	
		case -2098954619:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 0 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 7) == 7)
				return true;
			break;
	
		case 67753863:
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 4 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 5 || VEHICLE::GET_VEHICLE_MOD(veParam0, 45) == 6)
				return true;
			break;
	}

	return false;
}

int func_108(Vehicle veParam0) // Position - 0x8AFB Hash - 0xF0DD4307 ^0x13C45C81
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_109(Player plParam0) // Position - 0x8B27 Hash - 0xE627570A ^0xE627570A
{
	if (func_112(plParam0) == 233)
		return func_110(plParam0);

	return -1;
}

int func_110(Player plParam0) // Position - 0x8B44 Hash - 0x48014DA ^0xC49B9410
{
	if (func_111(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_111(Player plParam0, BOOL bParam1) // Position - 0x8B67 Hash - 0x8B0CDA01 ^0x4664171D
{
	if (Global_1894573[plParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

int func_112(Player plParam0) // Position - 0x8BA2 Hash - 0x48014DA ^0x68F6350
{
	if (func_111(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_113(BOOL bParam0) // Position - 0x8BC5 Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_114(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_114(Player plParam0, BOOL bParam1) // Position - 0x8BD7 Hash - 0xB4D52F0E ^0xB4D52F0E
{
	return func_115(plParam0, bParam1, 1);
}

BOOL func_115(Player plParam0, BOOL bParam1, int iParam2) // Position - 0x8BE8 Hash - 0xE1283130 ^0x8DFB78AD
{
	Player player;

	if (plParam0 == func_66())
		return 0;

	if (!bParam1)
		if (func_116(plParam0, iParam2))
			return 0;

	player = Global_1894573[plParam0 /*608*/].f_10;

	if (player != func_66() && Global_1894573[player /*608*/].f_10.f_428 == iParam2)
		return 1;

	return 0;
}

BOOL func_116(Player plParam0, int iParam1) // Position - 0x8C44 Hash - 0xECFEB130 ^0x65196460
{
	if (plParam0 != func_66())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_66())
			if (Global_1894573[plParam0 /*608*/].f_10 == plParam0 && Global_1894573[plParam0 /*608*/].f_10.f_428 == iParam1)
				return true;

	return false;
}

BOOL func_117(int iParam0, BOOL bParam1) // Position - 0x8C93 Hash - 0xA9E9B748 ^0x9CB5A15C
{
	int num;
	int num2;

	if (bParam1)
		if (iParam0 == 15)
			return true;

	if (func_122(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 4:
			case 5:
			case 12:
			case 15:
				return true;
		}
	}

	num = func_119(iParam0);
	num2 = iParam0;
	return IS_BIT_SET(num, func_118(num2));
}

int func_118(int iParam0) // Position - 0x8CF1 Hash - 0x9042BAD4 ^0x9042BAD4
{
	return iParam0 % 32;
}

int func_119(int iParam0) // Position - 0x8CFE Hash - 0x74EE5629 ^0x74EE5629
{
	int num;

	num = func_90(func_120(iParam0), -1, 0);
	return num;
}

int func_120(int iParam0) // Position - 0x8D16 Hash - 0xAA02C235 ^0x95A75FBF
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_121(num);

	switch (num2)
	{
		case 0:
			return 1291;
	}

	return 1291;
}

int func_121(int iParam0) // Position - 0x8D43 Hash - 0x195EBE32 ^0x195EBE32
{
	return iParam0 / 32;
}

BOOL func_122(Player plParam0) // Position - 0x8D50 Hash - 0x440D1C81 ^0x15AA607B
{
	if (plParam0 != func_66())
		if (func_123(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
			return true;

	return false;
}

BOOL func_123(Player plParam0) // Position - 0x8D85 Hash - 0xA4C8B8D7 ^0xE5015FA1
{
	if (plParam0 != func_66())
		if (func_7(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_124(Global_2657589[plParam0 /*466*/].f_321.f_7) == 22;

	return false;
}

int func_124(int iParam0) // Position - 0x8DCC Hash - 0xEE599357 ^0xEE599357
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
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
			return 0;
	
		case 60:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
		case 69:
			return 1;
	
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
			return 2;
	
		case 43:
		case 42:
		case 44:
		case 45:
		case 46:
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
		case 98:
		case 99:
		case 100:
		case 112:
		case 113:
		case 114:
		case 115:
		case 119:
		case 116:
		case 118:
		case 120:
		case 121:
		case 126:
		case 127:
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
			return 3;
	
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 76:
		case 77:
		case 78:
		case 79:
		case 80:
			return 4;
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
		case 89:
		case 90:
		case 91:
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
			return 9;
	
		case 101:
			return 10;
	
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
			return 11;
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

void func_125(Vehicle veParam0, int iParam1) // Position - 0x9280 Hash - 0x47F85C31 ^0xDC10F2C1
{
	int num;
	int num2;

	num2 = func_127(iParam1);
	func_126(num2, &num);
	VEHICLE::SET_VEHICLE_EXTRA_COLOUR_6(veParam0, num);
	return;
}

BOOL func_126(int iParam0, var uParam1) // Position - 0x92A1 Hash - 0x39DFC5A3 ^0x39DFC5A3
{
	*uParam1 = -1;

	switch (iParam0)
	{
		case 0:
			*uParam1 = 4;
			break;
	
		case 1:
			*uParam1 = 5;
			break;
	
		case 2:
			*uParam1 = 6;
			break;
	
		case 3:
			*uParam1 = 7;
			break;
	
		case 4:
			*uParam1 = 111;
			break;
	
		case 5:
			*uParam1 = 112;
			break;
	
		case 6:
			*uParam1 = 107;
			break;
	
		case 7:
			*uParam1 = 104;
			break;
	
		case 8:
			*uParam1 = 98;
			break;
	
		case 9:
			*uParam1 = 100;
			break;
	
		case 10:
			*uParam1 = 102;
			break;
	
		case 11:
			*uParam1 = 99;
			break;
	
		case 12:
			*uParam1 = 105;
			break;
	
		case 13:
			*uParam1 = 106;
			break;
	
		case 14:
			*uParam1 = 37;
			break;
	
		case 15:
			*uParam1 = 90;
			break;
	
		case 16:
			*uParam1 = 88;
			break;
	
		case 17:
			*uParam1 = 89;
			break;
	
		case 18:
			*uParam1 = 91;
			break;
	
		case 19:
			*uParam1 = 38;
			break;
	
		case 20:
			*uParam1 = 138;
			break;
	
		case 21:
			*uParam1 = 36;
			break;
	
		case 22:
			*uParam1 = 27;
			break;
	
		case 23:
			*uParam1 = 28;
			break;
	
		case 24:
			*uParam1 = 29;
			break;
	
		case 25:
			*uParam1 = 150;
			break;
	
		case 26:
			*uParam1 = 30;
			break;
	
		case 27:
			*uParam1 = 31;
			break;
	
		case 28:
			*uParam1 = 32;
			break;
	
		case 29:
			*uParam1 = 35;
			break;
	
		case 30:
			*uParam1 = 135;
			break;
	
		case 31:
			*uParam1 = 137;
			break;
	
		case 32:
			*uParam1 = 136;
			break;
	
		case 33:
			*uParam1 = 71;
			break;
	
		case 34:
			*uParam1 = 145;
			break;
	
		case 35:
			*uParam1 = 63;
			break;
	
		case 36:
			*uParam1 = 64;
			break;
	
		case 37:
			*uParam1 = 65;
			break;
	
		case 38:
			*uParam1 = 66;
			break;
	
		case 39:
			*uParam1 = 67;
			break;
	
		case 40:
			*uParam1 = 68;
			break;
	
		case 41:
			*uParam1 = 69;
			break;
	
		case 42:
			*uParam1 = 73;
			break;
	
		case 43:
			*uParam1 = 70;
			break;
	
		case 44:
			*uParam1 = 74;
			break;
	
		case 45:
			*uParam1 = 51;
			break;
	
		case 46:
			*uParam1 = 53;
			break;
	
		case 47:
			*uParam1 = 54;
			break;
	
		case 48:
			*uParam1 = 92;
			break;
	}

	return *uParam1 != -1;
}

int func_127(int iParam0) // Position - 0x9563 Hash - 0xACC8EE50 ^0xACC8EE50
{
	switch (iParam0)
	{
		case 0:
			return 1;
	
		case 1:
			return 36;
	
		case 2:
			return 35;
	
		case 3:
			return 46;
	
		case 4:
			return 48;
	
		case 5:
			return 16;
	
		case 6:
			return 14;
	
		case 7:
			return 19;
	
		case 8:
			return 22;
	
		case 9:
			return 31;
	
		case 10:
			return 30;
	
		case 11:
			return 33;
	
		case 12:
			return 34;
	
		default:
		
	}

	return 0;
}

int func_128(int iParam0, int iParam1, int iParam2) // Position - 0x9601 Hash - 0x8C841BCD ^0x8C841BCD
{
	if (iParam0 == 222 && iParam1 == 222 && iParam2 == 255)
		return 0;

	if (iParam0 == 2 && iParam1 == 21 && iParam2 == 255)
		return 1;

	if (iParam0 == 3 && iParam1 == 83 && iParam2 == 255)
		return 2;

	if (iParam0 == 0 && iParam1 == 255 && iParam2 == 140)
		return 3;

	if (iParam0 == 94 && iParam1 == 255 && iParam2 == 1)
		return 4;

	if (iParam0 == 255 && iParam1 == 255 && iParam2 == 0)
		return 5;

	if (iParam0 == 255 && iParam1 == 150 && iParam2 == 5)
		return 6;

	if (iParam0 == 255 && iParam1 == 62 && iParam2 == 0)
		return 7;

	if (iParam0 == 255 && iParam1 == 1 && iParam2 == 1)
		return 8;

	if (iParam0 == 255 && iParam1 == 50 && iParam2 == 100)
		return 9;

	if (iParam0 == 255 && iParam1 == 5 && iParam2 == 190)
		return 10;

	if (iParam0 == 35 && iParam1 == 1 && iParam2 == 255)
		return 11;

	if (iParam0 == 15 && iParam1 == 3 && iParam2 == 255)
		return 12;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_129() && Global_1576216)
		if (iParam0 == Global_1576217 && iParam1 == Global_1576218 && iParam2 == Global_1576219)
			return 13;

	return 0;
}

BOOL func_129() // Position - 0x97E3 Hash - 0x285908BA ^0xACED0094
{
	var gamerHandle;

	if (PLAYER::IS_PLAYER_ONLINE())
	{
		if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS() && NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
		{
			gamerHandle = { func_130() };
		
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID() && NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
				return true;
		}
	}

	return false;
}

struct<13> func_130() // Position - 0x982B Hash - 0xC50E1118 ^0xB1CB2F5D
{
	var gamerHandle;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&gamerHandle, 13);
	return gamerHandle;
}

BOOL func_131(Vehicle veParam0) // Position - 0x9840 Hash - 0xEB13AB9D ^0x4B8E20DB
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -1812949672:
			return true;
	}

	return false;
}

BOOL func_132(int iParam0, var uParam1) // Position - 0x9861 Hash - 0x1B3B2773 ^0x1B3B2773
{
	*uParam1 = -1f;

	switch (iParam0)
	{
		case -312295511:
			*uParam1 = 1f;
			break;
	
		case 682434785:
			*uParam1 = 1f;
			break;
	
		case -1912017790:
			*uParam1 = 1f;
			break;
	
		case -1523619738:
			*uParam1 = 0.2f;
			break;
	
		case -32878452:
			*uParam1 = 0.15f;
			break;
	
		case -1007528109:
			*uParam1 = 0.3f;
			break;
	
		case -42959138:
			*uParam1 = 0.5f;
			break;
	
		case -1763555241:
			*uParam1 = 0.3f;
			break;
	
		case -749299473:
			*uParam1 = 0.4f;
			break;
	
		case 1565978651:
			*uParam1 = 0.3f;
			break;
	
		case 1036591958:
			*uParam1 = 0.4f;
			break;
	
		case -1386191424:
			*uParam1 = 0.4f;
			break;
	
		case -975345305:
			*uParam1 = 0.4f;
			break;
	
		case -392675425:
			*uParam1 = 0.3f;
			break;
	
		case -1700874274:
			*uParam1 = 0.5f;
			break;
	
		case 1043222410:
			*uParam1 = 0.15f;
			break;
	
		case -1435527158:
			*uParam1 = 0.6f;
			break;
	
		case 668439077:
			*uParam1 = 1f;
			break;
	
		case -1694081890:
			*uParam1 = 1f;
			break;
	
		case -2042350822:
			*uParam1 = 1f;
			break;
	
		case 2139203625:
			*uParam1 = 1f;
			break;
	
		case -1890996696:
			*uParam1 = 1f;
			break;
	
		case 2038858402:
			*uParam1 = 1f;
			break;
	
		case -801550069:
			*uParam1 = 1f;
			break;
	
		case 679453769:
			*uParam1 = 1f;
			break;
	
		case 1909700336:
			*uParam1 = 1f;
			break;
	
		case -27326686:
			*uParam1 = 1f;
			break;
	
		case -1812949672:
			*uParam1 = 1f;
			break;
	
		case -1374500452:
			*uParam1 = 1f;
			break;
	
		case -688189648:
			*uParam1 = 1f;
			break;
	
		case -1375060657:
			*uParam1 = 1f;
			break;
	
		case -1293924613:
			*uParam1 = 1f;
			break;
	
		case 1009171724:
			*uParam1 = 1f;
			break;
	
		case -1924800695:
			*uParam1 = 1f;
			break;
	
		case -1744505657:
			*uParam1 = 1f;
			break;
	
		case 444994115:
			*uParam1 = 1f;
			break;
	
		case 1637620610:
			*uParam1 = 1f;
			break;
	
		case -755532233:
			*uParam1 = 1f;
			break;
	
		case 628003514:
			*uParam1 = 1f;
			break;
	
		case 1537277726:
			*uParam1 = 1f;
			break;
	
		case 1239571361:
			*uParam1 = 1f;
			break;
	
		case 1721676810:
			*uParam1 = 1f;
			break;
	
		case 840387324:
			*uParam1 = 1f;
			break;
	
		case -715746948:
			*uParam1 = 1f;
			break;
	
		case -1146969353:
			*uParam1 = 1f;
			break;
	
		case 1542143200:
			*uParam1 = 1f;
			break;
	
		case -579747861:
			*uParam1 = 1f;
			break;
	
		case -2061049099:
			*uParam1 = 1f;
			break;
	
		case 373261600:
			*uParam1 = 1f;
			break;
	
		case 1742022738:
			*uParam1 = 1f;
			break;
	
		case 540101442:
			*uParam1 = 1f;
			break;
	
		case -1106120762:
			*uParam1 = 1f;
			break;
	
		case -1478704292:
			*uParam1 = 1f;
			break;
	}

	return *uParam1 != -1f;
}

BOOL func_133(Hash hParam0) // Position - 0x9B62 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case 1532171089:
		case -261346873:
		case -619930876:
		case 461465043:
		case -670086588:
		case -915234475:
		case 40817712:
		case -505223465:
		case 669204833:
		case 1076201208:
			return true;
	}

	return false;
}

void func_134(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Position - 0x9BB5 Hash - 0x3234A2AB ^0xBABA9C12
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_156(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == 743478836)
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == 941800958)
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_155(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_155(num + 1));
			}
		}
		else if (uParam1->f_66 == -1189015600 || uParam1->f_66 == 989381445)
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_155(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_155(num2 + 1));
			}
		}
		else if (uParam1->f_66 == 340154634 || uParam1->f_66 == -1960756985)
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_155(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_155(i));
				}
			}
		}
		else if (uParam1->f_66 == 1492612435)
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_155(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_155(j));
				}
			}
		}
		else if (uParam1->f_66 == 1181339704)
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_155(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_155(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == -1035489563)
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_155(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_155(l));
				}
			}
		}
		else if (uParam1->f_66 == -980573366)
		{
			if (IS_BIT_SET(uParam1->f_77, func_155(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_155(4));
			}
		}
		else if (uParam1->f_66 == -1728685474)
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == 1693751655)
		{
			MISC::SET_BIT(&(uParam1->f_77), func_155(1));
		}
		else if (uParam1->f_66 == 37348240)
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_155(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_155(m));
				}
			}
		}
	
		if (uParam1->f_66 == 433954513)
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_153(uParam1->f_5) || func_153(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_152(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_151())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_150(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_149(veParam0, uParam1->f_69);
				else
					func_149(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_141(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_155(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == 819197656 || ENTITY::GET_ENTITY_MODEL(veParam0) == -777172681 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1232836011)
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_135() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, -2118308144))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (IS_BIT_SET(uParam1->f_77, 22))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 1);
		else
			unk_0xEC687B9B4DF9224E(veParam0, "IgnoredByQuickSave", 0);
	}

	return;
}

BOOL func_135() // Position - 0xA29A Hash - 0x599C0723 ^0x588DCD1B
{
	if (*Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 || *Global_4718592.f_104427 == 18 || *Global_4718592.f_104427 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_139(7))
		if (func_137(Global_2672505.f_4.f_16) || func_136(Global_2672505.f_4.f_16))
			return false;

	return true;
}

BOOL func_136(int iParam0) // Position - 0xA329 Hash - 0x16FCD261 ^0xC786AD29
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1890444[num /*129*/].f_77.f_51 != 0;

	return false;
}

BOOL func_137(int iParam0) // Position - 0xA34D Hash - 0xE40D6326 ^0xE40D6326
{
	int num;

	num = iParam0;

	if (num != -1)
		return func_138(iParam0, 9);

	return false;
}

BOOL func_138(int iParam0, int iParam1) // Position - 0xA36B Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[iParam0 /*608*/].f_10.f_4, iParam1);
}

BOOL func_139(int iParam0) // Position - 0xA383 Hash - 0x7F5F619C ^0x6E554E82
{
	return func_140(&(Global_2672505.f_183), iParam0);
}

BOOL func_140(var uParam0, int iParam1) // Position - 0xA397 Hash - 0x1995C9E6 ^0x1995C9E6
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_141(var uParam0, var uParam1, var uParam2) // Position - 0xA3BA Hash - 0x5C9EC0F7 ^0xAEA0C62F
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_147(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_146(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_144(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_144(*uParam0, uParam1->[38] - 1), false);

	func_143(uParam0);

	if (func_142(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_142(Vehicle veParam0) // Position - 0xA594 Hash - 0x4E83583B ^0x79F702A8
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY(_("Roll Cage and Chassis Upgrade")) || hashKey == MISC::GET_HASH_KEY(_("Stunt Cage")))
						return true;
			}
		}
	}

	return false;
}

void func_143(var uParam0) // Position - 0xA66E Hash - 0x2806D680 ^0xEA5BC67
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case -1045911276:
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_144(Vehicle veParam0, int iParam1) // Position - 0xA6C5 Hash - 0xFE64EDC0 ^0x4504AA95
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case -1797613329:
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case -2039755226:
				return 3;
		}
	
		value = func_145(veParam0, 38) + 1;
		value2 = func_145(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_145(Vehicle veParam0, int iParam1) // Position - 0xA7AE Hash - 0x51ABE917 ^0xA6E9215C
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536 == iParam1)
		return Global_152537;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_147(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_146(Hash hParam0, int iParam1) // Position - 0xA810 Hash - 0xFE274898 ^0xFE274898
{
	switch (hParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return true;
	
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 223258115:
			if (!Global_262145.f_14734)
				return false;
			else
				return true;
			break;
	
		case -1797613329:
			if (!Global_262145.f_14735)
				return false;
			else
				return true;
			break;
	
		case -899509638:
			if (!Global_262145.f_14733)
				return false;
			else
				return true;
			break;
	
		case -1126264336:
			if (!Global_262145.f_14736)
				return false;
			else
				return true;
			break;
	
		case 1119641113:
			if (!Global_262145.f_14738)
				return false;
			else
				return true;
			break;
	
		case -2039755226:
			if (!Global_262145.f_14737)
				return false;
			else
				return true;
			break;
	
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -2022483795:
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1790834270:
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -757735410:
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 196747873:
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1093792632:
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -482719877:
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1074745671:
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1356124575:
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -1924433270:
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}

	return false;
}

BOOL func_147(Vehicle veParam0, int iParam1, int iParam2) // Position - 0xABEF Hash - 0x206208ED ^0x4B76267C
{
	if (!func_148() && PED::APPLY_PED_BLOOD_SPECIFIC(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_148() // Position - 0xAC13 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_149(Vehicle veParam0, int iParam1) // Position - 0xAC1C Hash - 0x4F43FC2B ^0x7F7B0D9C
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == -1558399629 || ENTITY::GET_ENTITY_MODEL(veParam0) == -1804415708)
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_150(int iParam0) // Position - 0xAC94 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_151() // Position - 0xACB4 Hash - 0x11DC3931 ^0x2E8F2A7A
{
	return DLC::IS_DLC_PRESENT(-1691188696);
}

BOOL func_152(Vehicle veParam0) // Position - 0xACC5 Hash - 0xA5C374DF ^0xE604ECD9
{
	int int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(int, 4);
			}
		}
	}

	return false;
}

int func_153(var uParam0) // Position - 0xAD0A Hash - 0xF0601AB8 ^0xF0601AB8
{
	if (!func_148() && func_154(uParam0))
		return 1;

	return 0;
}

BOOL func_154(int iParam0) // Position - 0xAD2A Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

int func_155(int iParam0) // Position - 0xAD7D Hash - 0xEE599357 ^0xEE599357
{
	switch (iParam0)
	{
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
	
		case 6:
			return 5;
	
		case 7:
			return 6;
	
		case 8:
			return 7;
	
		case 9:
			return 8;
	
		case 10:
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

BOOL func_156(Vehicle veParam0) // Position - 0xAE2D Hash - 0x57A74E37 ^0x4772878C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!func_157(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_109(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_108(veParam0) != -1)
				return true;

	return false;
}

BOOL func_157(Player plParam0, int iParam1) // Position - 0xAEB4 Hash - 0x1C7D021F ^0xC08A6119
{
	Vehicle vehiclePedIsIn;

	if (func_7(plParam0, true, true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(plParam0), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(plParam0), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (PLAYER::PLAYER_PED_ID() == VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, iParam1, false))
					return true;
		}
	}

	return false;
}

void func_158(var uParam0) // Position - 0xAF01 Hash - 0x7EE00C2D ^0xC4582566
{
	const char* cutsceneName;

	if (!uParam0->f_16)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
		{
			func_68(uParam0, 4);
			return;
		}
	
		cutsceneName = uParam0->f_1;
	
		if (uParam0->f_2)
			CUTSCENE::REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(cutsceneName, uParam0->f_17, 24);
		else
			CUTSCENE::REQUEST_CUTSCENE(cutsceneName, 8);
	
		uParam0->f_16 = 1;
	}

	return;
}

void func_159(var uParam0) // Position - 0xAF4F Hash - 0x534A4BC7 ^0xD585ED5A
{
	if (func_274(PLAYER::PLAYER_ID(), false, false))
		return;

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (!func_161(uParam0))
		return;

	if (!func_71(uParam0))
		return;

	if (!uParam0->f_15)
		if (!STREAMING::NEW_LOAD_SCENE_START(uParam0->f_9, func_160(uParam0->f_12), 4000f, 0))
			return;
		else
			uParam0->f_15 = 1;

	if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() || !STREAMING::IS_NEW_LOAD_SCENE_LOADED())
		if (!func_13(&(uParam0->f_18), Global_262145.f_30917, false))
			return;
	else
		STREAMING::NEW_LOAD_SCENE_STOP();

	func_52(&(uParam0->f_18));
	func_68(uParam0, 1);
	return;
}

Vector3 func_160(float fParam0, var uParam1, var uParam2) // Position - 0xB009 Hash - 0x6F4648E7 ^0x44C762D3
{
	return -SYSTEM::SIN(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::COS(fParam0.f_2) * SYSTEM::COS(fParam0), SYSTEM::SIN(fParam0);
}

BOOL func_161(var uParam0) // Position - 0xB036 Hash - 0x285FAE81 ^0x387F5153
{
	Player player;

	if (!uParam0->f_5)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
		return true;

	if (!func_58(func_273()))
		return false;

	player = func_268();

	if (player == func_66())
		return false;

	if (player == PLAYER::PLAYER_ID())
	{
		uParam0->f_23 = PED::CLONE_PED_ALT(func_273(), false, false, true, true);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			return false;
	}
	else
	{
		uParam0->f_23 = PED::CLONE_PED_ALT(func_273(), false, false, false, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23))
			return false;
	
		func_162(uParam0->f_23, &Global_1887707[player /*53*/], false, -1);
	}

	ENTITY::SET_ENTITY_VISIBLE(uParam0->f_23, uParam0->f_8, false);
	ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_23, true);
	ENTITY::SET_ENTITY_COLLISION(uParam0->f_23, false, false);
	PED::SET_PED_HELMET(uParam0->f_23, false);
	PED::REMOVE_PED_HELMET(uParam0->f_23, true);
	return true;
}

void func_162(Ped pedParam0, var uParam1, BOOL bParam2, int iParam3) // Position - 0xB10D Hash - 0x318B1EA4 ^0x92A400F4
{
	var unk;
	int unk2;
	BOOL unk3;
	BOOL unk4;
	BOOL unk5;
	int unk6;
	int unk7;
	int unk8;
	Hash unk9;
	int unk10;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::CLEAR_PED_DECORATIONS_LEAVE_SCARS(pedParam0);
		characterType = func_267(pedParam0);
		flag = func_264(pedParam0, false);
		flag2 = func_256(pedParam0);
		flag3 = func_179(pedParam0, iParam3);
	
		if (bParam2)
			flag2 = true;
	
		for (i = 0; i < 127; i = i + 1)
		{
			if (IS_BIT_SET(uParam1->[i / 32], i % 32))
				if (func_171(&unk, i, characterType, pedParam0, -1))
					if (func_164(pedParam0, &unk, i, unk.f_4, unk.f_8, flag, flag2, bParam2, flag3))
						STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, unk.f_4, unk.f_5);
		}
	
		if (IS_BIT_SET(uParam1->[123 / 32], 123 % 32))
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(-1719270477, -1824026490) != 7)
				STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, -1719270477, -1824026490);
	
		numTattooShopDlcItems = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(characterType);
	
		for (j = 0; j < numTattooShopDlcItems; j = j + 1)
		{
			if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(characterType, j, &outComponent))
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outComponent))
				{
					num = 129 + j;
				
					if (num / 32 >= *uParam1)
					{
					}
					else if (IS_BIT_SET(uParam1->[num / 32], num % 32))
					{
						if (func_164(pedParam0, &(outComponent.f_7), num, outComponent.f_2, outComponent.f_6, flag, flag2, bParam2, flag3))
						{
							STATS::GET_PACKED_TU_INT_STAT_KEY(pedParam0, outComponent.f_2, outComponent.f_3);
							func_163(pedParam0, outComponent.f_2, outComponent.f_3);
						}
					}
				}
			}
		}
	}

	return;
}

void func_163(Ped pedParam0, int iParam1, int iParam2) // Position - 0xB276 Hash - 0xF1FAB61C ^0x2B4AC0E
{
	switch (iParam1)
	{
		case 1841427399:
			switch (iParam2)
			{
				case -507124931:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, -435695677);
					break;
			
				case -2045170715:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1841427399, 1684098164);
					break;
			}
			break;
	
		case 601646824:
			switch (iParam2)
			{
				case -1698823936:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 601646824, -1282588017);
					break;
			
				case 543067199:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 601646824, 884393080);
					break;
			}
			break;
	
		case -1970774728:
			switch (iParam2)
			{
				case -129339642:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1959383570);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -543063956);
					break;
			
				case 887263619:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -543063956);
					break;
			
				case -598443208:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -1160700813);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -543063956);
					break;
			
				case -619123295:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -543063956);
					break;
			
				case -2139930425:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -543063956);
					break;
			
				case 991513037:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 847416951);
					break;
			
				case -675149090:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 847416951);
					break;
			
				case 2021781367:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -1625184579);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1294359428);
					break;
			
				case -436866133:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1294359428);
					break;
			
				case 457275657:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 429414924);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1294359428);
					break;
			
				case -250832592:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1294359428);
					break;
			
				case -798760789:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, 1294359428);
					break;
			
				case -1634791241:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -2021672848);
					break;
			
				case -1227437948:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1970774728, -2021672848);
					break;
			}
			break;
	
		case -1368357453:
			switch (iParam2)
			{
				case 901985554:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -125935718);
					break;
			
				case -1199174880:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -1060131742);
					break;
			
				case 1450237635:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -1305394591);
					break;
			
				case -389741205:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 667969632);
					break;
			
				case -141257402:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -1359014181);
					break;
			
				case 153754618:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 2081465940);
					break;
			
				case 659374865:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -465054321);
					break;
			
				case -13136248:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 775081672);
					break;
			
				case -1132960710:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 106529549);
					break;
			
				case 1993003331:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -914124698);
					break;
			
				case -625419875:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 621839126);
					break;
			
				case -774542024:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 1907053018);
					break;
			
				case 888079344:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 1813906196);
					break;
			
				case -700883358:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 773995069);
					break;
			
				case -13127060:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 1207511209);
					break;
			
				case -1825878923:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -1417506982);
					break;
			
				case -308681510:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -952353610);
					break;
			
				case -2032106950:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 595710974);
					break;
			
				case 921664999:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, -1317513903);
					break;
			
				case 1700345329:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 1607579128);
					break;
			
				case -46539229:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 90277989);
					break;
			
				case 552527284:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1368357453, 1999546193);
					break;
			}
			break;
	
		case 1347816957:
			switch (iParam2)
			{
				case -725236090:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -2083543812);
					break;
			
				case -485989621:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1873408074);
					break;
			
				case 711356870:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1873408074);
					break;
			
				case 111487556:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 510898066);
					break;
			
				case 588276502:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 510898066);
					break;
			
				case -3335024:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 557464221);
					break;
			
				case 1184770609:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 557464221);
					break;
			
				case 359647189:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2089193796);
					break;
			
				case 1545327916:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1305509445);
					break;
			
				case 954502846:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -638853135);
					break;
			
				case -893208491:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -638853135);
					break;
			
				case -1661674318:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1601527241);
					break;
			
				case -1624645348:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1960396175);
					break;
			
				case 620358850:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 54045697);
					break;
			
				case 122204512:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1310058833);
					break;
			
				case -645147161:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 251854291);
					break;
			
				case -375556598:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2062329004);
					break;
			
				case 1841102407:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1538230799);
					break;
			
				case 831620593:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -59766962);
					break;
			
				case 1129884031:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1480518916);
					break;
			
				case 2092301321:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -482380281);
					break;
			
				case 580667351:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -76867803);
					break;
			
				case 1538832911:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -76867803);
					break;
			
				case -1355259635:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -533311445);
					break;
			
				case -1583168030:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2137255691);
					break;
			
				case -1831032746:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2137255691);
					break;
			
				case -2060448515:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -2042378246);
					break;
			
				case -50365286:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 756993084);
					break;
			
				case -364095692:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 756993084);
					break;
			
				case -606979520:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1161584545);
					break;
			
				case -1057062007:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1161584545);
					break;
			
				case -1253872621:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1528861297);
					break;
			
				case -1525625938:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1528861297);
					break;
			
				case 603801989:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 806416816);
					break;
			
				case 432289043:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 806416816);
					break;
			
				case 176592536:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1433191244);
					break;
			
				case -126291331:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1433191244);
					break;
			
				case 2093415191:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1917136673);
					break;
			
				case 1383966341:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1917136673);
					break;
			
				case 1061027846:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1634927571);
					break;
			
				case 610754913:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1634927571);
					break;
			
				case 1856271834:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1965545249);
					break;
			
				case 151235226:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1965545249);
					break;
			
				case 1292317344:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1855774824);
					break;
			
				case 1592055387:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1855774824);
					break;
			}
		
			switch (iParam2)
			{
				case 1389004292:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -408720218);
					break;
			
				case 459577145:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -789630253);
					break;
			
				case 697971620:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -789630253);
					break;
			
				case -157037136:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1104646403);
					break;
			
				case 70412493:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1104646403);
					break;
			
				case -861963864:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1535753965);
					break;
			
				case -496458438:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1535753965);
					break;
			
				case -1356579150:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -99283873);
					break;
			
				case -1125721545:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -485563451);
					break;
			
				case -2065044930:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1432409825);
					break;
			
				case -346765569:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1432409825);
					break;
			
				case -734816067:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -302122276);
					break;
			
				case -961282630:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -717650362);
					break;
			
				case 1134491538:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -233338433);
					break;
			
				case 842421441:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 314602147);
					break;
			
				case 523316919:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1900511936);
					break;
			
				case 158466873:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 821039296);
					break;
			
				case 1789019544:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -545035086);
					break;
			
				case 1426332252:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1960507422);
					break;
			
				case 1178893529:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -694062896);
					break;
			
				case -1101107129:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1829603753);
					break;
			
				case -1790763503:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2045678662);
					break;
			
				case -1550271812:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 2045678662);
					break;
			
				case -384612940:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1648833799);
					break;
			
				case -45257176:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -75503803);
					break;
			
				case -866087857:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -75503803);
					break;
			
				case -623761102:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1501392494);
					break;
			
				case 1075770310:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1390523363);
					break;
			
				case 342137938:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1390523363);
					break;
			
				case 599407357:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1233403366);
					break;
			
				case 335056082:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1233403366);
					break;
			
				case 1164668855:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1084269847);
					break;
			
				case -424365493:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1084269847);
					break;
			
				case -1995737350:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1344114351);
					break;
			
				case 2052610452:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1344114351);
					break;
			
				case 745160145:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1154163217);
					break;
			
				case 238944633:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1154163217);
					break;
			
				case -1894874368:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1174984361);
					break;
			
				case -1050515545:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, -1174984361);
					break;
			
				case -1296283045:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 495811116);
					break;
			
				case -254061820:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 495811116);
					break;
			
				case -482822209:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1152130184);
					break;
			
				case -1148622755:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1152130184);
					break;
			
				case 499821790:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1987407913);
					break;
			
				case 132940066:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1347816957, 1987407913);
					break;
			}
			break;
	
		case 202420620:
			switch (iParam2)
			{
				case 1495413374:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 202420620, -501147160);
					break;
			}
		
			switch (iParam2)
			{
				case -1214222467:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 202420620, -1739422168);
					break;
			}
			break;
	
		case -1016521996:
			switch (iParam2)
			{
				case 1321477520:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 5866095);
					break;
			
				case -670835215:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 1257645214);
					break;
			
				case -32315658:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1938877708);
					break;
			
				case -715501640:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 177616986);
					break;
			
				case 812138662:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -437640642);
					break;
			
				case -1950509905:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 460297451);
					break;
			
				case 1850969667:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -589899025);
					break;
			
				case 997671095:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 342543493);
					break;
			
				case -1526467268:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -950134188);
					break;
			
				case -881852779:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 2043701187);
					break;
			
				case -570992218:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 794519137);
					break;
			
				case -1075500139:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 90598123);
					break;
			
				case -791689054:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -151296204);
					break;
			
				case 699980662:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 386731882);
					break;
			
				case -583230088:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1129017399);
					break;
			
				case 1922201848:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1175077252);
					break;
			
				case -767702908:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1710583235);
					break;
			
				case 1979813112:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 900966291);
					break;
			
				case -2056272592:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -153754682);
					break;
			}
		
			switch (iParam2)
			{
				case 371389080:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 580372087);
					break;
			
				case -521204587:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -326572091);
					break;
			
				case 1685732560:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1550532305);
					break;
			
				case -1386443378:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1913405685);
					break;
			
				case -1706648281:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -956341143);
					break;
			
				case -519957866:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 2063062018);
					break;
			
				case 653935582:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 605481338);
					break;
			
				case 2111779395:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1708926987);
					break;
			
				case 428988289:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 264383347);
					break;
			
				case -1903962822:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 1101363062);
					break;
			
				case 1365770911:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1963254369);
					break;
			
				case 42029862:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 390663856);
					break;
			
				case 438631811:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 916481637);
					break;
			
				case -1478715891:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 1930151778);
					break;
			
				case -1395531229:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1731016702);
					break;
			
				case 30333135:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -1915197882);
					break;
			
				case 1783341339:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, -25535717);
					break;
			
				case -16077126:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 1193200233);
					break;
			
				case -833643184:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1016521996, 1031663893);
					break;
			}
			break;
	
		case 1616273011:
			switch (iParam2)
			{
				case -1318802347:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1616273011, -815706791);
					break;
			
				case -1366750043:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 1616273011, -1066127505);
					break;
			}
			break;
	
		case -1194930348:
			switch (iParam2)
			{
				case -841238543:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1194930348, -441419962);
					break;
			
				case -1405854945:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -1194930348, 1647997020);
					break;
			}
			break;
	
		case -777275782:
			switch (iParam2)
			{
				case 671171671:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -777275782, 904519720);
					break;
			
				case 1911627074:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, -777275782, -607391498);
					break;
			}
			break;
	
		case 484754152:
			switch (iParam2)
			{
				case 266230635:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 484754152, -588549683);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 484754152, 464027076);
					break;
			
				case -1261787835:
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 484754152, -965491494);
					PED::ADD_PED_DECORATION_FROM_HASHES(pedParam0, 484754152, 939374190);
					break;
			}
			break;
	}

	return;
}

BOOL func_164(Ped pedParam0, const char* sParam1, int iParam2, int iParam3, Hash hParam4, BOOL bParam5, BOOL bParam6, BOOL bParam7, BOOL bParam8) // Position - 0xC50D Hash - 0x69D10458 ^0x71D52412
{
	Hash entityModel;
	int num;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	if (hParam4 == 0)
	{
		num = func_170(entityModel, sParam1, hParam4);
		hParam4 = MISC::GET_HASH_KEY(func_169(num));
	}

	if (iParam3 == 449512698)
		return false;

	switch (hParam4)
	{
		case -793495770:
		case -763917073:
		case -1409061796:
		case -2066166276:
		case 849089063:
		case 1192230427:
		case -454273031:
		case -1459967458:
		case 1548327796:
		case -1238079313:
		case 129912816:
		case -1469750959:
		case 1586504577:
		case 1753976524:
		case 1361645381:
		case -388268096:
			if (bParam5)
				return false;
		
			if (hParam4 == -793495770 || hParam4 == -1409061796 && entityModel == -1667301416 || hParam4 == -2066166276 || hParam4 == 849089063 || hParam4 == 1192230427)
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_165(13, -1))
							{
								return false;
							}
							else if (func_165(14, -1))
							{
								return false;
							}
							else if (func_165(15, -1))
							{
								return false;
							}
							else if (func_165(16, -1))
							{
								return false;
							}
							else if (func_165(71, -1))
							{
								return false;
							}
							else if (func_165(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return false;
					}
					else if (Global_4540628 == 14)
					{
						return false;
					}
					else if (Global_4540628 == 15)
					{
						return false;
					}
					else if (Global_4540628 == 16)
					{
						return false;
					}
					else if (Global_4540628 == 71)
					{
						return false;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if (hParam4 == -763917073)
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_165(13, -1))
							{
								return false;
							}
							else if (func_165(14, -1))
							{
								return false;
							}
							else if (func_165(15, -1))
							{
								return false;
							}
							else if (func_165(16, -1))
							{
								return false;
							}
							else if (func_165(71, -1))
							{
								return false;
							}
							else if (func_165(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return false;
					}
					else if (Global_4540628 == 14)
					{
						return false;
					}
					else if (Global_4540628 == 15)
					{
						return false;
					}
					else if (Global_4540628 == 16)
					{
						return false;
					}
					else if (Global_4540628 == 71)
					{
						return false;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if (hParam4 == 129912816 || hParam4 == 1361645381 || hParam4 == -1469750959)
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_165(13, -1))
							{
							}
							else if (func_165(14, -1))
							{
								return false;
							}
							else if (func_165(15, -1))
							{
								return false;
							}
							else if (func_165(16, -1))
							{
							}
							else if (func_165(71, -1))
							{
								return false;
							}
							else if (func_165(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
					}
					else if (Global_4540628 == 14)
					{
						return false;
					}
					else if (Global_4540628 == 15)
					{
						return false;
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
						return false;
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			else if (hParam4 == 1928884106)
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_165(13, -1))
							{
							}
							else if (func_165(14, -1))
							{
							}
							else if (func_165(15, -1))
							{
							}
							else if (func_165(16, -1))
							{
							}
							else if (func_165(71, -1))
							{
							}
							else if (func_165(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
					}
					else if (Global_4540628 == 14)
					{
					}
					else if (Global_4540628 == 15)
					{
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			break;
	
		case 1484379715:
		case 711089605:
		case 1206993109:
		case 32564956:
		case 1618133209:
		case 314326195:
		case 1928884106:
		case 1565386395:
		case 2107621060:
			if (bParam8)
				return false;
		
			if (!bParam6)
			{
				if (Global_4540628 == -1)
				{
					if (!Global_100733.f_1570)
					{
						if (func_165(13, -1))
						{
						}
						else if (func_165(14, -1))
						{
						}
						else if (func_165(15, -1))
						{
							return false;
						}
						else if (func_165(16, -1))
						{
						}
						else if (func_165(71, -1))
						{
						}
						else if (func_165(72, -1))
						{
							return false;
						}
					}
				}
				else if (Global_4540628 == 13)
				{
				}
				else if (Global_4540628 == 14)
				{
				}
				else if (Global_4540628 == 15)
				{
					return false;
				}
				else if (Global_4540628 == 16)
				{
				}
				else if (Global_4540628 == 71)
				{
				}
				else if (Global_4540628 == 72)
				{
					return false;
				}
			}
			break;
	
		case 1019352240:
			if (bParam8)
				if (entityModel == 1885233650)
					if (Global_4540628 == -1)
						if (!Global_100733.f_1570)
							if (func_165(15, -1))
								return false;
					else if (Global_4540628 == 15)
						return false;
		
			if (bParam6)
				return false;
		
			if (bParam5)
			{
				if (Global_4540628 == -1)
				{
					if (!Global_100733.f_1570)
					{
						if (func_165(13, -1))
						{
							return false;
						}
						else if (func_165(14, -1))
						{
							return false;
						}
						else if (func_165(15, -1))
						{
							if (!MISC::ARE_STRINGS_EQUAL(sParam1, _("Crew Emblem Back")))
								return false;
						}
						else if (func_165(16, -1))
						{
						}
						else if (func_165(71, -1))
						{
						}
						else if (func_165(72, -1))
						{
						}
					}
				}
				else if (Global_4540628 == 13)
				{
					return false;
				}
				else if (Global_4540628 == 14)
				{
					return false;
				}
				else if (Global_4540628 == 15)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam1, _("Crew Emblem Back")))
						return false;
				}
				else if (Global_4540628 == 16)
				{
				}
				else if (Global_4540628 == 71)
				{
				}
				else if (Global_4540628 == 72)
				{
				}
			}
			break;
	
		case 0:
		case 2:
		case -518474626:
			if (bParam5)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
				{
					switch (MISC::GET_HASH_KEY(sParam1))
					{
						case 1774176944:
						case 1363941829:
						case -328314869:
						case -1903783095:
						case -1674924399:
						case -106785870:
						case -344656041:
						case 1480281490:
						case -2097372400:
						case 118598456:
						case -1386676768:
						case 1464947154:
						case -1282504117:
						case -1877294236:
						case 736950162:
							return false;
					}
				}
			}
		
			if (entityModel == 1885233650)
			{
			}
			else if (entityModel == -1667301416)
			{
				if (!bParam6)
				{
					if (Global_4540628 == -1)
					{
						if (!Global_100733.f_1570)
						{
							if (func_165(13, -1))
							{
							}
							else if (func_165(14, -1))
							{
							}
							else if (func_165(15, -1))
							{
							}
							else if (func_165(16, -1))
							{
							}
							else if (func_165(71, -1))
							{
							}
							else if (func_165(72, -1))
							{
							}
						}
					}
					else if (Global_4540628 == 13)
					{
						return false;
					}
					else if (Global_4540628 == 14)
					{
					}
					else if (Global_4540628 == 15)
					{
						return false;
					}
					else if (Global_4540628 == 16)
					{
					}
					else if (Global_4540628 == 71)
					{
					}
					else if (Global_4540628 == 72)
					{
					}
				}
			}
			break;
	
		case 277073536:
			if (bParam7)
				return false;
			break;
	}

	return true;
}

BOOL func_165(int iParam0, int iParam1) // Position - 0xCD33 Hash - 0x562E4F3B ^0x562E4F3B
{
	int num;
	int num2;

	if (iParam0 == -1)
		return false;

	num = func_166(iParam0, iParam1);
	num2 = func_118(iParam0);

	if (num2 < 0 || num2 >= 32)
		return false;

	return IS_BIT_SET(num, num2);
}

int func_166(int iParam0, int iParam1) // Position - 0xCD72 Hash - 0x92E3F215 ^0x67CC112C
{
	int num;
	int num2;

	num = func_168(iParam0);

	if (num == 14192)
		if (func_93() == 2 && func_167() == 2)
			return 0;
		else
			return 0;

	num2 = func_90(num, iParam1, 0);
	return num2;
}

int func_167() // Position - 0xCDB9 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32164;
}

int func_168(int iParam0) // Position - 0xCDC4 Hash - 0xF08C5B2E ^0xA4BC8B65
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_121(num);

	if (func_93() == 0 || func_167() == 0 || func_93() == 999 && func_167() == 999)
	{
		switch (num2)
		{
			case 0:
				return 1049;
		
			case 1:
				return 1050;
		
			case 2:
				return 1051;
		
			case 3:
				return 1052;
		
			case 4:
				return 1053;
		
			case 5:
				return 1054;
		
			case 6:
				return 1488;
		
			case 7:
				return 1489;
		
			case 8:
				return 1490;
		
			case 9:
				return 1491;
		
			case 10:
				return 1949;
		
			case 11:
				return 1950;
		
			case 12:
				return 1951;
		
			case 13:
				return 2425;
		
			case 14:
				return 2445;
		
			case 15:
				return 2448;
		
			case 16:
				return 2451;
		
			case 17:
				return 2615;
		
			case 18:
				return 2618;
		
			case 19:
				return 2621;
		
			case 20:
				return 3787;
		
			case 21:
				return 3790;
		
			case 22:
				return 3865;
		
			case 23:
				return 3868;
		
			case 24:
				return 3871;
		
			case 25:
				return 3874;
		
			case 26:
				return 5365;
		
			case 27:
				return 5368;
		
			case 28:
				return 5470;
		
			case 29:
				return 5473;
		
			case 30:
				return 6432;
		
			case 31:
				return 6435;
		
			case 32:
				return 7256;
		
			case 33:
				return 7259;
		
			case 34:
				return 7262;
		
			case 35:
				return 7971;
		
			case 36:
				return 7974;
		
			case 37:
				return 7977;
		
			case 38:
				return 7980;
		
			case 39:
				return 8502;
		
			case 40:
				return 8505;
		
			case 41:
				return 8508;
		
			case 42:
				return 8511;
		
			case 43:
				return 8907;
		
			case 44:
				return 8910;
		
			case 45:
				return 8913;
		
			case 46:
				return 10288;
		
			case 47:
				return 10291;
		
			case 48:
				return 10414;
		
			case 49:
				return 10417;
		
			case 50:
				return 11825;
		
			case 51:
				return 11828;
		
			case 52:
				break;
		}
	
		return 14192;
	}

	if (func_93() == 2 && func_167() == 2)
		return 14192;

	return 14192;
}

char* func_169(int iParam0) // Position - 0xD147 Hash - 0xE6862179 ^0xAF0AD1D4
{
	switch (iParam0)
	{
		case 0:
			return "ARM_LEFT_FULL_SLEEVE";
	
		case 1:
			return "ARM_LEFT_SHORT_SLEEVE";
	
		case 2:
			return "ARM_LEFT_LOWER_SLEEVE";
	
		case 3:
			return "ARM_LEFT_LOWER_INNER";
	
		case 4:
			return "ARM_LEFT_LOWER_OUTER";
	
		case 5:
			return "ARM_LEFT_WRIST";
	
		case 6:
			return "ARM_LEFT_UPPER_SLEEVE";
	
		case 7:
			return "ARM_LEFT_UPPER_TRICEP";
	
		case 8:
			return "ARM_LEFT_UPPER_SIDE";
	
		case 9:
			return "ARM_LEFT_UPPER_BICEP";
	
		case 10:
			return "ARM_LEFT_SHOULDER";
	
		case 11:
			return "ARM_LEFT_ELBOW";
	
		case 12:
			return "ARM_RIGHT_FULL_SLEEVE";
	
		case 13:
			return "ARM_RIGHT_SHORT_SLEEVE";
	
		case 14:
			return "ARM_RIGHT_LOWER_SLEEVE";
	
		case 15:
			return "ARM_RIGHT_LOWER_INNER";
	
		case 16:
			return "ARM_RIGHT_LOWER_OUTER";
	
		case 17:
			return "ARM_RIGHT_WRIST";
	
		case 18:
			return "ARM_RIGHT_UPPER_SLEEVE";
	
		case 19:
			return "ARM_RIGHT_UPPER_TRICEP";
	
		case 20:
			return "ARM_RIGHT_UPPER_SIDE";
	
		case 21:
			return "ARM_RIGHT_UPPER_BICEP";
	
		case 22:
			return "ARM_RIGHT_SHOULDER";
	
		case 23:
			return "ARM_RIGHT_ELBOW";
	
		case 24:
			return "HAND_LEFT";
	
		case 25:
			return "HAND_RIGHT";
	
		case 26:
			return "BACK_FULL";
	
		case 27:
			return "BACK_FULL_ARMS_FULL_BACK";
	
		case 28:
			return "BACK_FULL_SHORT";
	
		case 29:
			return "BACK_MID";
	
		case 30:
			return "BACK_UPPER";
	
		case 31:
			return "BACK_UPPER_LEFT";
	
		case 32:
			return "BACK_UPPER_RIGHT";
	
		case 33:
			return "BACK_LOWER";
	
		case 34:
			return "BACK_LOWER_LEFT";
	
		case 35:
			return "BACK_LOWER_MID";
	
		case 36:
			return "BACK_LOWER_RIGHT";
	
		case 37:
			return "CHEST_FULL";
	
		case 38:
			return "CHEST_STOM";
	
		case 39:
			return "CHEST_STOM_FULL";
	
		case 40:
			return "CHEST_LEFT";
	
		case 41:
			return "CHEST_UPPER_LEFT";
	
		case 42:
			return "CHEST_RIGHT";
	
		case 43:
			return "CHEST_UPPER_RIGHT";
	
		case 44:
			return "CHEST_MID";
	
		case 45:
			return "TORSO_SIDE_RIGHT";
	
		case 46:
			return "TORSO_SIDE_LEFT";
	
		case 47:
			return "STOMACH_FULL";
	
		case 48:
			return "STOMACH_UPPER";
	
		case 49:
			return "STOMACH_UPPER_LEFT";
	
		case 50:
			return "STOMACH_UPPER_RIGHT";
	
		case 51:
			return "STOMACH_LOWER";
	
		case 52:
			return "STOMACH_LOWER_LEFT";
	
		case 53:
			return "STOMACH_LOWER_RIGHT";
	
		case 54:
			return "STOMACH_LEFT";
	
		case 55:
			return "STOMACH_RIGHT";
	
		case 56:
			return "FACE";
	
		case 57:
			return "HEAD_LEFT";
	
		case 58:
			return "HEAD_RIGHT";
	
		case 59:
			return "NECK_FRONT";
	
		case 60:
			return "NECK_BACK";
	
		case 61:
			return "NECK_LEFT_FULL";
	
		case 62:
			return "NECK_LEFT_BACK";
	
		case 63:
			return "NECK_RIGHT_FULL";
	
		case 64:
			return "NECK_RIGHT_BACK";
	
		case 65:
			return "LEG_LEFT_FULL_SLEEVE";
	
		case 66:
			return "LEG_LEFT_FULL_FRONT";
	
		case 67:
			return "LEG_LEFT_FULL_BACK";
	
		case 68:
			return "LEG_LEFT_UPPER_SLEEVE";
	
		case 69:
			return "LEG_LEFT_UPPER_FRONT";
	
		case 70:
			return "LEG_LEFT_UPPER_BACK";
	
		case 71:
			return "LEG_LEFT_UPPER_OUTER";
	
		case 72:
			return "LEG_LEFT_UPPER_INNER";
	
		case 73:
			return "LEG_LEFT_LOWER_SLEEVE";
	
		case 74:
			return "LEG_LEFT_LOWER_FRONT";
	
		case 75:
			return "LEG_LEFT_LOWER_BACK";
	
		case 76:
			return "LEG_LEFT_LOWER_OUTER";
	
		case 77:
			return "LEG_LEFT_LOWER_INNER";
	
		case 78:
			return "LEG_LEFT_KNEE";
	
		case 79:
			return "LEG_LEFT_ANKLE";
	
		case 80:
			return "LEG_LEFT_CALF";
	
		case 81:
			return "LEG_RIGHT_FULL_SLEEVE";
	
		case 82:
			return "LEG_RIGHT_FULL_FRONT";
	
		case 83:
			return "LEG_RIGHT_FULL_BACK";
	
		case 84:
			return "LEG_RIGHT_UPPER_SLEEVE";
	
		case 85:
			return "LEG_RIGHT_UPPER_FRONT";
	
		case 86:
			return "LEG_RIGHT_UPPER_BACK";
	
		case 87:
			return "LEG_RIGHT_UPPER_OUTER";
	
		case 88:
			return "LEG_RIGHT_UPPER_INNER";
	
		case 89:
			return "LEG_RIGHT_LOWER_SLEEVE";
	
		case 90:
			return "LEG_RIGHT_LOWER_FRONT";
	
		case 91:
			return "LEG_RIGHT_LOWER_BACK";
	
		case 92:
			return "LEG_RIGHT_LOWER_OUTER";
	
		case 93:
			return "LEG_RIGHT_LOWER_INNER";
	
		case 94:
			return "LEG_RIGHT_KNEE";
	
		case 95:
			return "LEG_RIGHT_ANKLE";
	
		case 96:
			return "LEG_RIGHT_CALF";
	
		case 97:
			return "FOOT_LEFT";
	
		case 98:
			return "FOOT_RIGHT";
	}

	return "";
}

int func_170(Hash hParam0, const char* sParam1, int iParam2) // Position - 0xD788 Hash - 0x2D6EA43C ^0x2D6EA43C
{
	switch (iParam2)
	{
		case 1019352240:
		case 2140335355:
		case 277073536:
			return -1;
	}

	switch (iParam2)
	{
		case -1775023605:
			return 0;
	
		case 917950949:
			return 1;
	
		case -1684314297:
			return 2;
	
		case -1546663824:
			return 3;
	
		case -2119253768:
			return 4;
	
		case 1639951086:
			return 5;
	
		case 1372660034:
			return 6;
	
		case -1524227787:
			return 7;
	
		case -311742370:
			return 8;
	
		case -2057190659:
			return 9;
	
		case -686545645:
			return 10;
	
		case -80377674:
			return 11;
	
		case -1055976551:
			return 12;
	
		case 1963750528:
			return 13;
	
		case 796226384:
			return 14;
	
		case 123428314:
			return 15;
	
		case 1944550961:
			return 16;
	
		case 2136911405:
			return 17;
	
		case -1309595991:
			return 18;
	
		case 1470319061:
			return 19;
	
		case -1716562576:
			return 20;
	
		case -1940582056:
			return 21;
	
		case 1089807219:
			return 22;
	
		case -1073830579:
			return 23;
	
		case 1071134407:
			return 24;
	
		case 1455567330:
			return 25;
	
		case 711089605:
			return 26;
	
		case 1206993109:
			return 27;
	
		case 32564956:
			return 28;
	
		case 314326195:
			return 29;
	
		case 1928884106:
			return 30;
	
		case 1565386395:
			return 31;
	
		case 2107621060:
			return 32;
	
		case 1618133209:
			return 33;
	
		case -951899470:
			return 34;
	
		case 2048696626:
			return 35;
	
		case 74017048:
			return 36;
	
		case -793495770:
			return 37;
	
		case 849089063:
			return 38;
	
		case 1192230427:
			return 39;
	
		case -763917073:
			return 40;
	
		case 337552605:
			return 41;
	
		case -2066166276:
			return 42;
	
		case 100935796:
			return 43;
	
		case -1409061796:
			return 44;
	
		case 1548327796:
			return 45;
	
		case -1459967458:
			return 46;
	
		case 129912816:
			return 47;
	
		case 1387715942:
			return 48;
	
		case -1871804242:
			return 49;
	
		case 1603728616:
			return 50;
	
		case -742053244:
			return 51;
	
		case 1586504577:
			return 52;
	
		case 1753976524:
			return 53;
	
		case -1469750959:
			return 54;
	
		case -388268096:
			return 55;
	
		case -1538681432:
			return 56;
	
		case -737856380:
			return 57;
	
		case 1261643197:
			return 58;
	
		case 436139458:
			return 59;
	
		case 1012782925:
			return 60;
	
		case -277214012:
			return 61;
	
		case -484264198:
			return 62;
	
		case 1708200656:
			return 63;
	
		case 758827473:
			return 64;
	
		case 1039283199:
			return 65;
	
		case 325801797:
			return 66;
	
		case -1946435033:
			return 67;
	
		case -1917346117:
			return 68;
	
		case -382139768:
			return 69;
	
		case 1725561361:
			return 70;
	
		case -266913369:
			return 71;
	
		case 511433871:
			return 72;
	
		case -1399656601:
			return 73;
	
		case -1560441083:
			return 74;
	
		case 1034503747:
			return 75;
	
		case -1170681301:
			return 76;
	
		case 660577126:
			return 77;
	
		case -818089340:
			return 78;
	
		case 1052642087:
			return 79;
	
		case 134497037:
			return 80;
	
		case -624267373:
			return 81;
	
		case -1178847967:
			return 82;
	
		case -197292861:
			return 83;
	
		case 730193962:
			return 84;
	
		case 1469472731:
			return 85;
	
		case -1918884694:
			return 86;
	
		case -1670727628:
			return 87;
	
		case -1389296468:
			return 88;
	
		case -405262373:
			return 89;
	
		case -1619609833:
			return 90;
	
		case 2060550302:
			return 91;
	
		case -1202647020:
			return 92;
	
		case 12584588:
			return 93;
	
		case -1559605744:
			return 94;
	
		case -88374898:
			return 95;
	
		case -292219126:
			return 96;
	
		case -634232984:
			return 97;
	
		case -1259754598:
			return 98;
	}

	switch (MISC::GET_HASH_KEY(sParam1))
	{
		case 1948764112:
			return -1;
	
		case 1099734529:
			return 12;
	
		case 1875475066:
			return 12;
	
		case -2027116220:
			if (hParam0 == 1885233650)
				return 75;
			else
				return 65;
			break;
	
		case 973279522:
			return 26;
	
		case -344656041:
			return 47;
	
		case 437243648:
			return 1;
	
		case -1636967950:
			return 75;
	
		case -1759426263:
			return 1;
	
		case 1702259548:
			return 89;
	
		case 1471205329:
			return 73;
	
		case -33154131:
			return 22;
	
		case -1364624791:
			return 91;
	
		case 2048169112:
			return 26;
	
		case -2132107540:
			return 73;
	
		case -2097372400:
			return 38;
	
		case -106785870:
			if (hParam0 == 1885233650)
				return 40;
			else
				return 42;
			break;
	
		case 1116120433:
			return 31;
	
		case 118598456:
			return 42;
	
		case 1480281490:
			return 47;
	
		case -652292269:
			return 75;
	
		case -1179283327:
			return 20;
	
		case 860620540:
			return 32;
	
		case -880004050:
			return 14;
	
		case -1386676768:
			return 52;
	
		case 2104696341:
			return 30;
	
		case -1952728474:
			return 6;
	
		case 1464947154:
			return 80;
	
		case -1134718043:
			return 13;
	
		case -440373586:
			if (hParam0 == 1885233650)
				return 67;
			else
				return 75;
			break;
	
		case -1282504117:
			if (hParam0 == 1885233650)
				return 40;
			else
				return 42;
			break;
	
		case -1035884623:
			return 73;
	
		case -1877294236:
			return 47;
	
		case 1289632992:
			return 73;
	
		case 1152623695:
			return 10;
	
		case 1705208746:
			return 26;
	
		case 1774176944:
			return 42;
	
		case -2016202731:
			return 89;
	
		case 474241973:
			return 16;
	
		case 1549424756:
			return 91;
	
		case 1915520024:
			return 82;
	
		case -654914345:
			return 13;
	
		case -1745115353:
			return 75;
	
		case 1466027815:
			return 26;
	
		case -161772432:
			return 10;
	
		case 74131599:
			return 90;
	
		case 363383562:
			return 89;
	
		case 736950162:
			return 38;
	
		case 1291882802:
			return 20;
	
		case -281772534:
			return 26;
	
		case -837798134:
			return 18;
	
		case 62456:
			return 56;
	
		case -800320369:
			return 3;
	
		case 1363941829:
			return 47;
	
		case 1586377801:
			if (hParam0 == 1885233650)
				return 28;
			else
				return 26;
			break;
	
		case -1514257748:
			return 89;
	
		case -1023836894:
			return 6;
	
		case -1974105125:
			return 33;
	
		case -558386018:
			return 16;
	
		case -328314869:
			return 40;
	
		case -1903783095:
			return 40;
	
		case -1674924399:
			return 40;
	
		case -252323802:
			return 33;
	
		case 11466648:
			return 6;
	
		case 927130819:
			if (hParam0 == 1885233650)
				return 28;
			else
				return 26;
			break;
	
		case -978943608:
			if (hParam0 == 1885233650)
				return 28;
			else
				return 26;
			break;
	
		case 452144164:
			if (hParam0 == 1885233650)
				return 28;
			else
				return 26;
			break;
	
		case 691194019:
			if (hParam0 == 1885233650)
				return 28;
			else
				return 26;
			break;
	
		case -1516865571:
			return 44;
	
		case 2130586285:
			return 32;
	
		case 386521802:
			return 3;
	
		case 579924440:
			return 33;
	
		case 741770527:
			return 31;
	
		case 1173403795:
			return 33;
	
		case -569087776:
			return 45;
	
		case -1344959389:
			return 89;
	
		case -211217527:
			return 64;
	
		case 86488838:
			return 53;
	
		case 705494964:
			return 52;
	
		case -137684175:
			return 30;
	
		case -979388709:
			return 41;
	
		case 324653646:
			return 43;
	
		case -518820414:
			return 52;
	
		case -1361737401:
			return 20;
	
		case 2010946386:
			return 8;
	
		case -894811920:
			return 10;
	
		case 165068612:
			return 28;
	
		case 1549427782:
			return 40;
	
		case -927613913:
			return 42;
	
		case 385144996:
			return 56;
	
		case -814626401:
			return 57;
	
		case -1248225809:
			return 52;
	
		case 1910378101:
			return 8;
	
		case -2124501642:
			return 91;
	
		case -1943747838:
			return 20;
	
		case -1570115700:
			return 75;
	
		case 931699147:
			return 62;
	
		case 1019520067:
			return 63;
	
		case -859358814:
			return 20;
	
		case -1157818866:
			return 58;
	
		case -247856505:
			return 47;
	
		case -1628534963:
			return 37;
	
		case -1051898870:
			return 33;
	
		case 1334929540:
			return 80;
	
		case 1097124907:
			return 64;
	
		case 747545215:
			return 62;
	
		case 61892743:
			return 96;
	
		case 501548332:
			return 15;
	
		case -244169717:
			return 48;
	
		case 421886905:
			return 37;
	
		case -1398791504:
			return 33;
	
		case -106152761:
			return 3;
	
		case 125491300:
			return 41;
	
		case -1576950557:
			return 52;
	
		case -1815115649:
			return 53;
	
		case -1043396870:
			return 59;
	
		case -1388618285:
			return 3;
	
		case -948484638:
			return 48;
	
		case 643387405:
			return 33;
	
		case 979630098:
			return 64;
	
		case 211688583:
			return 62;
	
		case 1343791995:
			return 60;
	
		case 576309246:
			return 20;
	
		case 949154944:
			return 40;
	
		case -622511834:
			return 42;
	
		case -275651969:
			return 11;
	
		case -1256283855:
			return 15;
	
		case 955525350:
			return 40;
	
		case 1252641873:
			return 22;
	
		case -2034766264:
			return 40;
	
		case 1748021562:
			return 22;
	
		case -657146050:
			return 30;
	
		case -955835485:
			return 19;
	
		case -1269959119:
			return 40;
	
		case -1478763187:
			return 4;
	
		case -1881592504:
			return 15;
	
		case 2115996117:
			return 62;
	
		case 1824417551:
			return 45;
	
		case 1502068898:
			return 24;
	
		case -2019287742:
			return 22;
	
		case -1780827729:
			return 80;
	
		case -1966497207:
			return 25;
	
		case -2126999769:
			return 30;
	
		case 2014772448:
			return 30;
	
		case 1705760778:
			return 44;
	
		case 497993745:
			return 15;
	
		case 1142887665:
			return 9;
	
		case 22777707:
			return 3;
	
		case 799173624:
			return 16;
	
		case -410297401:
			return 17;
	
		case 214410819:
			return 75;
	
		case -2098342992:
			return 23;
	
		case -1280920283:
			return 64;
	
		case -1501455653:
			return 16;
	
		case 2117454408:
			return 25;
	
		case -1945704982:
			return 32;
	
		case -1581870771:
			return 31;
	
		case -1350521631:
			return 10;
	
		case -954508266:
			return 5;
	
		case -716244867:
			return 4;
	
		case 185361399:
			return 52;
	
		case -1208107213:
			return 35;
	
		case -812421538:
			return 30;
	
		case -566096965:
			return 32;
	
		case -316757644:
			return 38;
	
		case -103496992:
			return 24;
	
		case 391708136:
			return 52;
	
		case 616667309:
			return 20;
	
		case 870102755:
			return 10;
	
		case 1093030262:
			return 92;
	
		case 1378218869:
			return 0;
	
		case 332555747:
			return 80;
	
		case 1077526193:
			return 34;
	
		case 1332632858:
			return 91;
	
		case 1556379590:
			return 10;
	
		case 1780093553:
			return 22;
	
		case 2001284303:
			return 14;
	
		case -2059941716:
			return 30;
	
		case -1759875983:
			return 40;
	
		case -1521153818:
			return 24;
	}

	if (iParam2 == 0 && MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		return -1;

	switch (iParam2)
	{
		case -518474626:
			return -1;
	}

	return -1;
}

BOOL func_171(char* sParam0, int iParam1, int iParam2, Ped pedParam3, int iParam4) // Position - 0xE7BA Hash - 0x91D9CCD4 ^0x99E658E6
{
	Hash entityModel;
	int num;

	func_178(sParam0, -1, 0, "", "", "", "", iParam2, -1, 0);

	if (ENTITY::DOES_ENTITY_EXIST(pedParam3) && !PED::IS_PED_INJURED(pedParam3))
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam3);

	switch (iParam2)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_01", "singleplayer_overlays", "MK_000", "", iParam2, 300, 3);
					break;
			
				case 1:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_02", "singleplayer_overlays", "MK_001", "", iParam2, 450, 0);
					break;
			
				case 2:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_03", "singleplayer_overlays", "MK_002", "", iParam2, 250, 4);
					break;
			
				case 3:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_04", "singleplayer_overlays", "MK_003", "", iParam2, 175, 0);
					break;
			
				case 4:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_06", "singleplayer_overlays", "MK_005", "", iParam2, 380, 0);
					break;
			
				case 5:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_07", "singleplayer_overlays", "MK_006", "", iParam2, 180, 0);
					break;
			
				case 6:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_08", "singleplayer_overlays", "MK_007", "", iParam2, 240, 0);
					break;
			
				case 7:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_10", "singleplayer_overlays", "MK_009", "", iParam2, 195, 0);
					break;
			
				case 8:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_11", "singleplayer_overlays", "MK_010", "", iParam2, 280, 6);
					break;
			
				case 9:
					if (func_177() || func_176())
					{
						num = 400;
					
						if (func_175() && func_174() || func_173())
							num = 0;
					
						func_178(sParam0, iParam1, pedParam3, "TAT_MIC_12", "singleplayer_overlays", "MK_011", "", iParam2, num, 2);
					}
					break;
			
				case 10:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_13", "singleplayer_overlays", "MK_012", "", iParam2, 320, 3);
					break;
			
				case 11:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_14", "singleplayer_overlays", "MK_013", "", iParam2, 500, 2);
					break;
			
				case 12:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_16", "singleplayer_overlays", "MK_015", "", iParam2, 220, 0);
					break;
			
				case 13:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_17", "singleplayer_overlays", "MK_016", "", iParam2, 320, 4);
					break;
			
				case 14:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_18", "singleplayer_overlays", "MK_017", "", iParam2, 140, 2);
					break;
			
				case 15:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_20", "singleplayer_overlays", "MK_019", "", iParam2, 350, 0);
					break;
			
				case 16:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_21", "singleplayer_overlays", "MK_020", "", iParam2, 350, 0);
					break;
			
				case 17:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_05", "singleplayer_overlays", "MK_004", "", iParam2, 120, 1);
					break;
			
				case 18:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_09", "singleplayer_overlays", "MK_008", "", iParam2, 99, 1);
					break;
			
				case 19:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_15", "singleplayer_overlays", "MK_014", "", iParam2, 400, 1);
					break;
			
				case 20:
					func_178(sParam0, iParam1, pedParam3, "TAT_MIC_19", "singleplayer_overlays", "MK_018", "", iParam2, 420, 1);
					break;
			
				default:
					func_172(sParam0, iParam2, iParam1, 21);
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					if (func_177() || func_176())
					{
						num = 450;
					
						if (func_175() && func_174() || func_173())
							num = 0;
					
						func_178(sParam0, iParam1, pedParam3, "TAT_FRA_01", "singleplayer_overlays", "fr_000", "", iParam2, num, 0);
					}
					break;
			
				case 1:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_02", "singleplayer_overlays", "fr_001", "", iParam2, 230, 0);
					break;
			
				case 2:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_03", "singleplayer_overlays", "fr_002", "", iParam2, 310, 0);
					break;
			
				case 3:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_04", "singleplayer_overlays", "fr_003", "", iParam2, 260, 0);
					break;
			
				case 4:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_07", "singleplayer_overlays", "fr_006", "", iParam2, 240, 2);
					break;
			
				case 5:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_08", "singleplayer_overlays", "fr_007", "", iParam2, 190, 3);
					break;
			
				case 6:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_09", "singleplayer_overlays", "fr_008", "", iParam2, 200, 2);
					break;
			
				case 7:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_10", "singleplayer_overlays", "fr_009", "", iParam2, 225, 0);
					break;
			
				case 8:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_12", "singleplayer_overlays", "fr_011", "", iParam2, 195, 0);
					break;
			
				case 9:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_13", "singleplayer_overlays", "fr_012", "", iParam2, 275, 2);
					break;
			
				case 10:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_14", "singleplayer_overlays", "fr_013", "", iParam2, 80, 0);
					break;
			
				case 11:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_15", "singleplayer_overlays", "fr_014", "", iParam2, 95, 0);
					break;
			
				case 12:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_16", "singleplayer_overlays", "fr_015", "", iParam2, 300, 3);
					break;
			
				case 13:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_17", "singleplayer_overlays", "fr_016", "", iParam2, 450, 3);
					break;
			
				case 14:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_18", "singleplayer_overlays", "fr_017", "", iParam2, 345, 3);
					break;
			
				case 15:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_19", "singleplayer_overlays", "fr_018", "", iParam2, 550, 0);
					break;
			
				case 16:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_20", "singleplayer_overlays", "fr_019", "", iParam2, 200, 0);
					break;
			
				case 17:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_21", "singleplayer_overlays", "fr_020", "", iParam2, 180, 0);
					break;
			
				case 18:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_22", "singleplayer_overlays", "fr_021", "", iParam2, 140, 0);
					break;
			
				case 19:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_24", "singleplayer_overlays", "fr_023", "", iParam2, 245, 0);
					break;
			
				case 20:
					break;
			
				case 21:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_26", "singleplayer_overlays", "fr_025", "", iParam2, 370, 0);
					break;
			
				case 22:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_27", "singleplayer_overlays", "fr_026", "", iParam2, 350, 0);
					break;
			
				case 23:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_28", "singleplayer_overlays", "fr_027", "", iParam2, 310, 0);
					break;
			
				case 24:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_29", "singleplayer_overlays", "fr_028", "", iParam2, 210, 0);
					break;
			
				case 25:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_30", "singleplayer_overlays", "fr_029", "", iParam2, 245, 0);
					break;
			
				case 26:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_31", "singleplayer_overlays", "fr_030", "", iParam2, 85, 0);
					break;
			
				case 27:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_32", "singleplayer_overlays", "fr_031", "", iParam2, 210, 0);
					break;
			
				case 28:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_33", "singleplayer_overlays", "fr_032", "", iParam2, 225, 0);
					break;
			
				case 29:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_34", "singleplayer_overlays", "fr_033", "", iParam2, 145, 0);
					break;
			
				case 30:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_35", "singleplayer_overlays", "fr_034", "", iParam2, 230, 0);
					break;
			
				case 31:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_36", "singleplayer_overlays", "fr_035", "", iParam2, 195, 0);
					break;
			
				case 32:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_37", "singleplayer_overlays", "fr_036", "", iParam2, 255, 0);
					break;
			
				case 33:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_38", "singleplayer_overlays", "fr_037", "", iParam2, 300, 0);
					break;
			
				case 34:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_40", "singleplayer_overlays", "fr_039", "", iParam2, 300, 0);
					break;
			
				case 35:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_05", "singleplayer_overlays", "fr_004", "", iParam2, 255, 1);
					break;
			
				case 36:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_06", "singleplayer_overlays", "fr_005", "", iParam2, 175, 1);
					break;
			
				case 37:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_11", "singleplayer_overlays", "fr_010", "", iParam2, 520, 1);
					break;
			
				case 38:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_23", "singleplayer_overlays", "fr_022", "", iParam2, 125, 1);
					break;
			
				case 39:
					func_178(sParam0, iParam1, pedParam3, "TAT_FRA_39", "singleplayer_overlays", "fr_038", "", iParam2, 365, 1);
					break;
			
				default:
					func_172(sParam0, iParam2, iParam1, 40);
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_01", "singleplayer_overlays", "tp_000", "", iParam2, 120, 0);
					break;
			
				case 1:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_02", "singleplayer_overlays", "tp_001", "", iParam2, 150, 3);
					break;
			
				case 2:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_03", "singleplayer_overlays", "tp_002", "", iParam2, 100, 0);
					break;
			
				case 3:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_04", "singleplayer_overlays", "tp_003", "", iParam2, 140, 0);
					break;
			
				case 4:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_05", "singleplayer_overlays", "tp_004", "", iParam2, 250, 0);
					break;
			
				case 5:
					if (func_177() || func_176())
					{
						num = 380;
					
						if (func_175() && func_174() || func_173())
							num = 0;
					
						func_178(sParam0, iParam1, pedParam3, "TAT_TRV_06", "singleplayer_overlays", "tp_005", "", iParam2, num, 3);
					}
					break;
			
				case 6:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_07", "singleplayer_overlays", "tp_006", "", iParam2, 120, 0);
					break;
			
				case 7:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_08", "singleplayer_overlays", "tp_007", "", iParam2, 250, 0);
					break;
			
				case 8:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_09", "singleplayer_overlays", "tp_008", "", iParam2, 50, 3);
					break;
			
				case 9:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_10", "singleplayer_overlays", "tp_009", "", iParam2, 135, 2);
					break;
			
				case 10:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_11", "singleplayer_overlays", "tp_010", "", iParam2, 245, 0);
					break;
			
				case 11:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_12", "singleplayer_overlays", "tp_011", "", iParam2, 280, 0);
					break;
			
				case 12:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_13", "singleplayer_overlays", "tp_012", "", iParam2, 65, 0);
					break;
			
				case 13:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_14", "singleplayer_overlays", "tp_013", "", iParam2, 150, 6);
					break;
			
				case 14:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_15", "singleplayer_overlays", "tp_014", "", iParam2, 200, 0);
					break;
			
				case 15:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_16", "singleplayer_overlays", "tp_015", "", iParam2, 145, 0);
					break;
			
				case 16:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_17", "singleplayer_overlays", "tp_016", "", iParam2, 290, 0);
					break;
			
				case 17:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_18", "singleplayer_overlays", "tp_017", "", iParam2, 350, 3);
					break;
			
				case 18:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_19", "singleplayer_overlays", "tp_018", "", iParam2, 70, 0);
					break;
			
				case 19:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_20", "singleplayer_overlays", "tp_019", "", iParam2, 180, 6);
					break;
			
				case 20:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_21", "singleplayer_overlays", "tp_020", "", iParam2, 230, 0);
					break;
			
				case 21:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_22", "singleplayer_overlays", "tp_021", "", iParam2, 200, 0);
					break;
			
				case 22:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_24", "singleplayer_overlays", "tp_023", "", iParam2, 240, 0);
					break;
			
				case 23:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_25", "singleplayer_overlays", "tp_024", "", iParam2, 195, 0);
					break;
			
				case 24:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_26", "singleplayer_overlays", "tp_025", "", iParam2, 225, 2);
					break;
			
				case 25:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_28", "singleplayer_overlays", "tp_027", "", iParam2, 175, 0);
					break;
			
				case 26:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_29", "singleplayer_overlays", "tp_028", "", iParam2, 65, 0);
					break;
			
				case 27:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_30", "singleplayer_overlays", "tp_029", "", iParam2, 50, 0);
					break;
			
				case 28:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_31", "singleplayer_overlays", "tp_030", "", iParam2, 70, 0);
					break;
			
				case 29:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_34", "singleplayer_overlays", "tp_033", "", iParam2, 70, 0);
					break;
			
				case 30:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_23", "singleplayer_overlays", "tp_022", "", iParam2, 500, 1);
					break;
			
				case 31:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_27", "singleplayer_overlays", "tp_026", "", iParam2, 300, 1);
					break;
			
				case 32:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_32", "singleplayer_overlays", "tp_031", "", iParam2, 190, 1);
					break;
			
				case 33:
					func_178(sParam0, iParam1, pedParam3, "TAT_TRV_33", "singleplayer_overlays", "tp_032", "", iParam2, 129, 1);
					break;
			
				default:
					func_172(sParam0, iParam2, iParam1, 34);
					break;
			}
			break;
	
		case 3:
		case 4:
			switch (iParam1)
			{
				case 0:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_008", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(20000) * Global_262145.f_2917), 0);
					break;
			
				case 1:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_009", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1400) * Global_262145.f_2918), 2);
					break;
			
				case 2:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_010", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(9750) * Global_262145.f_2919), 3);
					break;
			
				case 3:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_011", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2150) * Global_262145.f_2920), 0);
					break;
			
				case 4:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_012", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2921), 0);
					break;
			
				case 54:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_013", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12400) * Global_262145.f_2922), 1);
					break;
			
				case 5:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_014", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2923), 0);
					break;
			
				case 6:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_015", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2924), 2);
					break;
			
				case 55:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_016", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1350) * Global_262145.f_2925), 1);
					break;
			
				case 7:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_017", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1450) * Global_262145.f_2926), 0);
					break;
			
				case 8:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_018", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2700) * Global_262145.f_2927), 7);
					break;
			
				case 9:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_019", "multiplayer_overlays", "011", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1200) * Global_262145.f_2928), 0);
					break;
			
				case 10:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_020", "multiplayer_overlays", "012", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1500) * Global_262145.f_2929), 0);
					break;
			
				case 11:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_021", "multiplayer_overlays", "013", "rank", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2650) * Global_262145.f_2930), 0);
					break;
			
				case 56:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_022", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2931), 1);
					break;
			
				case 12:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_023", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2932), 2);
					break;
			
				case 57:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_024", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2933), 1);
					break;
			
				case 58:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_025", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2934), 1);
					break;
			
				case 59:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_026", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7400) * Global_262145.f_2935), 1);
					break;
			
				case 60:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_027", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2936), 1);
					break;
			
				case 17:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_201", "multiplayer_overlays", "005", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2400) * Global_262145.f_2941), 2);
					break;
			
				case 18:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_202", "multiplayer_overlays", "006", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2942), 2);
					break;
			
				case 19:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_203", "multiplayer_overlays", "015", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3600) * Global_262145.f_2943), 2);
					break;
			
				case 20:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_204", "multiplayer_overlays", "000", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2944), 3);
					break;
			
				case 21:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_205", "multiplayer_overlays", "001", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12500) * Global_262145.f_2945), 3);
					break;
			
				case 22:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_206", "multiplayer_overlays", "003", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2946), 3);
					break;
			
				case 23:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_207", "multiplayer_overlays", "014", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2947), 3);
					break;
			
				case 24:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_208", "multiplayer_overlays", "018", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2948), 3);
					break;
			
				case 25:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_209", "multiplayer_overlays", "002", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2949), 2);
					break;
			
				case 26:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_210", "multiplayer_overlays", "007", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3750) * Global_262145.f_2950), 3);
					break;
			
				case 27:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_211", "multiplayer_overlays", "008", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4800) * Global_262145.f_2951), 3);
					break;
			
				case 28:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_212", "multiplayer_overlays", "017", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3500) * Global_262145.f_2952), 3);
					break;
			
				case 61:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_213", "multiplayer_overlays", "009", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12350) * Global_262145.f_2953), 1);
					break;
			
				case 62:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_214", "multiplayer_overlays", "011", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1900) * Global_262145.f_2954), 1);
					break;
			
				case 63:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_215", "multiplayer_overlays", "013", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4500) * Global_262145.f_2955), 1);
					break;
			
				case 64:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_216", "multiplayer_overlays", "016", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2956), 1);
					break;
			
				case 65:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_217", "multiplayer_overlays", "019", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12300) * Global_262145.f_2957), 1);
					break;
			
				case 29:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_218", "multiplayer_overlays", "010", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2958), 0);
					break;
			
				case 30:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_219", "multiplayer_overlays", "004", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2959), 0);
					break;
			
				case 31:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_220", "multiplayer_overlays", "012", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2960), 0);
					break;
			
				case 66:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_221", "multiplayer_overlays", "020", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2961), 1);
					break;
			
				case 32:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_222", "multiplayer_overlays", "021", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2962), 2);
					break;
			
				case 33:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_223", "multiplayer_overlays", "022", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2963), 3);
					break;
			
				case 34:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_224", "multiplayer_overlays", "023", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7250) * Global_262145.f_2964), 2);
					break;
			
				case 35:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_225", "multiplayer_overlays", "024", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(11900) * Global_262145.f_2965), 0);
					break;
			
				case 36:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_226", "multiplayer_overlays", "025", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2750) * Global_262145.f_2966), 0);
					break;
			
				case 37:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_227", "multiplayer_overlays", "026", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1750) * Global_262145.f_2967), 0);
					break;
			
				case 38:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_228", "multiplayer_overlays", "027", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7300) * Global_262145.f_2968), 3);
					break;
			
				case 39:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_229", "multiplayer_overlays", "028", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(3250) * Global_262145.f_2969), 2);
					break;
			
				case 40:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_230", "multiplayer_overlays", "029", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1000) * Global_262145.f_2970), 0);
					break;
			
				case 67:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_231", "multiplayer_overlays", "030", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2971), 1);
					break;
			
				case 41:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_232", "multiplayer_overlays", "031", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2972), 2);
					break;
			
				case 68:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_233", "multiplayer_overlays", "032", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2973), 1);
					break;
			
				case 42:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_234", "multiplayer_overlays", "033", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5050) * Global_262145.f_2974), 0);
					break;
			
				case 43:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_235", "multiplayer_overlays", "034", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2450) * Global_262145.f_2975), 2);
					break;
			
				case 44:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_236", "multiplayer_overlays", "035", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(4950) * Global_262145.f_2976), 0);
					break;
			
				case 45:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_237", "multiplayer_overlays", "036", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5100) * Global_262145.f_2977), 0);
					break;
			
				case 46:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_238", "multiplayer_overlays", "037", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(12250) * Global_262145.f_2978), 0);
					break;
			
				case 47:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_239", "multiplayer_overlays", "038", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(1150) * Global_262145.f_2979), 3);
					break;
			
				case 48:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_240", "multiplayer_overlays", "039", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2980), 3);
					break;
			
				case 49:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_241", "multiplayer_overlays", "040", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7600) * Global_262145.f_2981), 3);
					break;
			
				case 50:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_242", "multiplayer_overlays", "041", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2600) * Global_262145.f_2982), 2);
					break;
			
				case 51:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_243", "multiplayer_overlays", "042", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2983), 3);
					break;
			
				case 52:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_244", "multiplayer_overlays", "043", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7450) * Global_262145.f_2984), 3);
					break;
			
				case 53:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_245", "multiplayer_overlays", "044", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(7500) * Global_262145.f_2985), 0);
					break;
			
				case 69:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_246", "multiplayer_overlays", "045", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2986), 1);
					break;
			
				case 70:
					func_178(sParam0, iParam1, pedParam3, "TAT_FM_247", "multiplayer_overlays", "047", "", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(2500) * Global_262145.f_2987), 2);
					break;
			}
		
			if (entityModel == 1885233650)
			{
				switch (iParam1)
				{
					case 73:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_001", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_002", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_003", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_004", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_005", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_006", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_009", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_013", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_014", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_015", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_016", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_019", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_020", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 86:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 90:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_017", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 91:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_018", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 124:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_046", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 125:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_045", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
						break;
				
					case 88:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
						break;
				
					case 89:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
						break;
				
					case 93:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_M_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_M_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_M_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Small"), "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
						break;
				
					case 14:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Large"), "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2938), 0);
						break;
				
					case 15:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Back"), "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
						break;
				
					case 16:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Small"), "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2940), 0);
						break;
				
					case 71:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Large"), "multiplayer_overlays", "000_E", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				
					case 72:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Back"), "multiplayer_overlays", "000_F", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				}
			}
			else if (entityModel == -1667301416)
			{
				switch (iParam1)
				{
					case 73:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_027_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 74:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_028_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 75:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_034_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 76:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_036_f", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 77:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_048", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 78:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_052", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 79:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_053", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 80:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_054", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 81:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_055", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 82:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_056", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 83:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_058", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 84:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_067", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 85:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_068", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 92:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "mp_fm_branding_051", "torsoDecal", iParam2, 100, 0);
						break;
				
					case 87:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_000", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2988), 0);
						break;
				
					case 88:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_001", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2989), 0);
						break;
				
					case 89:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "FM_Tshirt_Award_F_002", "torsoDecal", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(100) * Global_262145.f_2990), 0);
						break;
				
					case 93:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 94:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_002", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 95:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_003", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 96:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_004", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 97:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_005", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 98:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_006", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 99:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_007", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 100:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_008", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 101:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_009", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 102:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_010", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 103:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_011", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 104:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_012", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 105:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_013", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 106:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_014", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 107:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NG_F_Hair_015", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 108:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 109:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBea_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 110:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 111:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGBus_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 112:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 113:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGHip_F_Hair_001", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 114:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "NGInd_F_Hair_000", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 115:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 116:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 117:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 118:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 119:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 120:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 121:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 122:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "multiplayer_overlays", "not_in_use", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 123:
						func_178(sParam0, iParam1, pedParam3, "NO_LABEL", "mpBeach_overlays", "FM_Hair_Fuzz", "hairOverlay", iParam2, 100, 0);
						break;
				
					case 13:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Small"), "multiplayer_overlays", "000_A", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2937), 0);
						break;
				
					case 14:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Small"), "multiplayer_overlays", "000_B", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(5000) * Global_262145.f_2938), 0);
						break;
				
					case 15:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Large"), "multiplayer_overlays", "000_C", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2939), 2);
						break;
				
					case 16:
						func_178(sParam0, iParam1, pedParam3, _("Crew Emblem Large"), "multiplayer_overlays", "000_D", "crewLogo", iParam2, SYSTEM::ROUND(SYSTEM::TO_FLOAT(10000) * Global_262145.f_2940), 0);
						break;
				}
			}
			break;
	}

	if (iParam2 == 3 || iParam2 == 4 && iParam1 >= 129)
		func_172(sParam0, iParam2, iParam1, 129);

	if (iParam4 == 22)
		sParam0->f_7 = sParam0->f_7 * 2;

	return sParam0->f_11 != -1;
}

void func_172(char* sParam0, int iParam1, int iParam2, int iParam3) // Position - 0x11760 Hash - 0xC0E60EB1 ^0xA6231434
{
	int decorationIndex;
	int numTattooShopDlcItems;
	Hash outComponent;

	decorationIndex = iParam2 - iParam3;
	numTattooShopDlcItems = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);

	if (numTattooShopDlcItems > 0 && decorationIndex < numTattooShopDlcItems)
	{
		if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, decorationIndex, &outComponent))
		{
			if (!FILES::IS_CONTENT_ITEM_LOCKED(outComponent))
			{
				sParam0->f_11 = iParam2;
				TEXT_LABEL_COPY(sParam0, { outComponent.f_7 }, 4);
				sParam0->f_5 = outComponent.f_3;
				sParam0->f_4 = outComponent.f_2;
				sParam0->f_8 = outComponent.f_6;
				sParam0->f_6 = iParam1;
				sParam0->f_7 = outComponent.f_4;
				sParam0->f_9 = iParam2 / 32;
				sParam0->f_10 = iParam2 % 32;
				sParam0->f_12 = outComponent.f_5;
			}
		}
	}

	return;
}

int func_173() // Position - 0x117F2 Hash - 0xAF3D3332 ^0xE009CBFC
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;
	int profileSetting2;

	if (IS_BIT_SET(Global_25, 5))
		if (IS_BIT_SET(Global_25, 1) || IS_BIT_SET(Global_25, 3))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(1571103992, &outValue, -1))
		if (IS_BIT_SET(outValue, 5))
			if (IS_BIT_SET(outValue, 1) || IS_BIT_SET(outValue, 3))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152525.f_3)
		{
			statHash = 1035124638;
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 5))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 1) || IS_BIT_SET(profileSetting, 3))
			return 1;
	}

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting2, -1);
				MISC::SET_BIT(&profileSetting2, 1);
				MISC::SET_BIT(&profileSetting2, 3);
				MISC::SET_BIT(&profileSetting2, 5);
				MISC::SET_BIT(&Global_25, 1);
				MISC::SET_BIT(&Global_25, 3);
				MISC::SET_BIT(&Global_25, 5);
				STATS::STAT_SET_INT(1571103992, profileSetting2, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting2 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting2, 1);
					MISC::SET_BIT(&profileSetting2, 3);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting2);
				}
			
				return 1;
			}
		}
	}

	return 0;
}

int func_174() // Position - 0x1192B Hash - 0xAF10CE31 ^0xCCA83A01
{
	int outValue;
	int outValue2;
	Hash statHash;
	int profileSetting;

	if (IS_BIT_SET(Global_25, 6))
		if (IS_BIT_SET(Global_25, 2) || IS_BIT_SET(Global_25, 4))
			return 1;
		else
			return 0;

	if (STATS::STAT_GET_INT(1571103992, &outValue, -1))
		if (IS_BIT_SET(outValue, 6))
			if (IS_BIT_SET(outValue, 2) || IS_BIT_SET(outValue, 4))
				return 1;
			else
				return 0;

	if (STATS::STAT_SLOT_IS_LOADED(0))
	{
		if (Global_152525.f_3)
		{
			statHash = 1035124638;
		
			if (STATS::STAT_GET_INT(statHash, &outValue2, -1))
				if (IS_BIT_SET(outValue2, 8))
					return 1;
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		profileSetting = MISC::GET_PROFILE_SETTING(866);
	
		if (IS_BIT_SET(profileSetting, 2) || IS_BIT_SET(profileSetting, 4))
			return 1;
	}

	return 0;
}

BOOL func_175() // Position - 0x119E1 Hash - 0x44DD83CC ^0x6D2C8335
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		if (unk_0x8BD41D5945F5762B())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(1571103992, &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(1571103992, profileSetting, true);
			
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					profileSetting = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&profileSetting, 0);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
				}
			
				return true;
			}
		}
	}

	if (MISC::ARE_PROFILE_SETTINGS_VALID())
		if (IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0))
			return true;

	return false;
}

int func_176() // Position - 0x11A99 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

int func_177() // Position - 0x11AA2 Hash - 0xFD255207 ^0xFD255207
{
	return 1;
}

void func_178(char* sParam0, int iParam1, Ped pedParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, int iParam9) // Position - 0x11AAB Hash - 0xBE814674 ^0x20110C9C
{
	var unk;

	sParam0->f_11 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(sParam0, sParam3, 16);
	sParam0->f_4 = MISC::GET_HASH_KEY(sParam4);
	sParam0->f_5 = MISC::GET_HASH_KEY(sParam5);
	sParam0->f_8 = MISC::GET_HASH_KEY(sParam6);
	sParam0->f_6 = iParam7;
	sParam0->f_7 = iParam8;
	sParam0->f_9 = iParam1 / 32;
	sParam0->f_10 = iParam1 % 32;
	sParam0->f_12 = iParam9;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2) && !PED::IS_PED_INJURED(pedParam2))
	{
		if (sParam0->f_6 == 0 || sParam0->f_6 == 1 || sParam0->f_6 == 2)
		{
		}
		else if (sParam0->f_6 == 3 || sParam0->f_6 == 4)
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
		
			if (sParam0->f_11 == 13 || sParam0->f_11 == 14 || sParam0->f_11 == 15 || sParam0->f_11 == 16 || sParam0->f_11 == 71 || sParam0->f_11 == 72)
			{
				TEXT_LABEL_APPEND_STRING(&unk, "FM_", 32);
				TEXT_LABEL_APPEND_STRING(&unk, "CREW_", 32);
			
				if (ENTITY::GET_ENTITY_MODEL(pedParam2) == 1885233650)
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
			else if (MISC::ARE_STRINGS_EQUAL(sParam6, "torsoDecal") || MISC::ARE_STRINGS_EQUAL(sParam6, "hairOverlay"))
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, sParam5, 32);
			}
			else
			{
				if (sParam0->f_11 == 0 || sParam0->f_11 == 1 || sParam0->f_11 == 2 || sParam0->f_11 == 4 || sParam0->f_11 == 3 || sParam0->f_11 == 54 || sParam0->f_11 == 5 || sParam0->f_11 == 6 || sParam0->f_11 == 55 || sParam0->f_11 == 7 || sParam0->f_11 == 8 || sParam0->f_11 == 9 || sParam0->f_11 == 10 || sParam0->f_11 == 11 || sParam0->f_11 == 56 || sParam0->f_11 == 12 || sParam0->f_11 == 57 || sParam0->f_11 == 58 || sParam0->f_11 == 59 || sParam0->f_11 == 60)
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_Award_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "FM_Tat_", 32);
			
				if (ENTITY::GET_ENTITY_MODEL(pedParam2) == 1885233650 || sParam0->f_11 == 20)
					TEXT_LABEL_APPEND_STRING(&unk, "M_", 32);
				else
					TEXT_LABEL_APPEND_STRING(&unk, "F_", 32);
			
				TEXT_LABEL_APPEND_STRING(&unk, sParam5, 32);
			}
		
			sParam0->f_5 = MISC::GET_HASH_KEY(&unk);
		
			if (PED::GET_PED_DECORATION_ZONE_FROM_HASHES(sParam0->f_4, sParam0->f_5) == 7)
				sParam0->f_11 = -1;
		}
	}

	return;
}

BOOL func_179(Ped pedParam0, int iParam1) // Position - 0x11D60 Hash - 0xB0832777 ^0x2C8325D4
{
	int pedDrawableVariation;
	int pedTextureVariation;
	int num;
	int num2;
	Hash componentHash;
	int num3;
	Hash componentHash2;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == 1885233650)
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			num = func_90(1759, -1, 0);
		
			if (iParam1 != -1)
				num = iParam1;
		
			if (pedDrawableVariation > 15)
			{
				num2 = func_184(pedParam0, 11, PV_COMP_INVALID);
			
				if (num2 >= 237)
				{
					componentHash = func_180(1885233650, num2, 11, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 362493804, 0))
					{
						switch (num)
						{
							case 671171671:
							case 1495413374:
							case 901985554:
							case -1199174880:
							case 1450237635:
							case -389741205:
							case -141257402:
							case 153754618:
							case 659374865:
							case -13136248:
							case -1132960710:
							case 1993003331:
							case -625419875:
							case -129339642:
							case 887263619:
							case -598443208:
							case -619123295:
							case -2139930425:
							case 991513037:
							case -675149090:
							case -507124931:
								return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, -1393156190, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, -1237899132, 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
		else if (ENTITY::GET_ENTITY_MODEL(pedParam0) == -1667301416)
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
			num = func_90(1759, -1, 0);
		
			if (iParam1 != -1)
				num = iParam1;
		
			if (pedDrawableVariation == 3)
			{
				if (pedTextureVariation == 14)
					return 1;
			}
			else if (pedDrawableVariation > 15)
			{
				num3 = func_184(pedParam0, 11, PV_COMP_INVALID);
			
				if (num3 >= 256)
				{
					componentHash2 = func_180(-1667301416, num3, 11, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 362493804, 0))
					{
						switch (num)
						{
							case 1911627074:
							case -1214222467:
							case -774542024:
							case 888079344:
							case -700883358:
							case -13127060:
							case -1825878923:
							case -308681510:
							case -2032106950:
							case 921664999:
							case 1700345329:
							case -46539229:
							case 552527284:
							case 2021781367:
							case -436866133:
							case 457275657:
							case -250832592:
							case -798760789:
							case -1634791241:
							case -1227437948:
							case -2045170715:
								return 1;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, -1393156190, 0) && !FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, -1237899132, 0))
					{
						return 1;
					}
				
					return 0;
				}
			}
		
			return 0;
		}
	}

	return 0;
}

Hash func_180(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x12022 Hash - 0x3B4EF0B2 ^0x11322F71
{
	var outProp;
	int unk;
	int unk2;
	var unk3;
	int unk4;
	int unk5;

	if (iParam2 == 12)
	{
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - func_183(hParam0);
	
		if (componentId < 0)
			return -1;
	
		num = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
	
		if (num <= componentId)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
		return outProp.f_1;
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
		componentId2 = iParam1 - func_181(hParam0, func_182(iParam2));
	
		if (componentId2 < 0)
			return -1;
	
		if (hParam0 == Global_78491.f_26[iParam2] && iParam1 == Global_78491[iParam2] && Global_78491.f_13[iParam2] != 0)
			return Global_78491.f_13[iParam2];
	
		num2 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_182(iParam2));
	
		if (num2 <= componentId2)
			return -1;
	
		FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
		Global_78491.f_13[iParam2] = outComponent.f_1;
		Global_78491[iParam2] = iParam1;
		Global_78491.f_26[iParam2] = hParam0;
		return outComponent.f_1;
	}

	return -1;
}

int func_181(Hash hParam0, int iParam1) // Position - 0x1213C Hash - 0x765E2190 ^0x765E2190
{
	switch (hParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 5;
			
				case 2:
					return 6;
			
				case 3:
					return 181;
			
				case 4:
					return 113;
			
				case 5:
					return 14;
			
				case 6:
					return 99;
			
				case 7:
					return 1;
			
				case 8:
					return 24;
			
				case 9:
					return 20;
			
				case 10:
					return 48;
			
				case 11:
					return 45;
			}
			break;
	
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					return 10;
			
				case 1:
					return 5;
			
				case 2:
					return 21;
			
				case 3:
					return 318;
			
				case 4:
					return 117;
			
				case 5:
					return 7;
			
				case 6:
					return 134;
			
				case 7:
					return 1;
			
				case 8:
					return 77;
			
				case 9:
					return 12;
			
				case 10:
					return 53;
			
				case 11:
					return 63;
			}
			break;
	
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					return 7;
			
				case 1:
					return 6;
			
				case 2:
					return 9;
			
				case 3:
					return 242;
			
				case 4:
					return 104;
			
				case 5:
					return 7;
			
				case 6:
					return 84;
			
				case 7:
					return 1;
			
				case 8:
					return 18;
			
				case 9:
					return 17;
			
				case 10:
					return 33;
			
				case 11:
					return 1;
			}
			break;
	}

	switch (hParam0)
	{
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 91;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 92;
			
				case 8:
					return 241;
			
				case 9:
					return 46;
			
				case 10:
					return 7;
			
				case 11:
					return 237;
			}
			break;
	
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					return 0;
			
				case 1:
					return 26;
			
				case 2:
					return 92;
			
				case 3:
					return 16;
			
				case 4:
					return 256;
			
				case 5:
					return 9;
			
				case 6:
					return 256;
			
				case 7:
					return 55;
			
				case 8:
					return 136;
			
				case 9:
					return 36;
			
				case 10:
					return 6;
			
				case 11:
					return 256;
			}
			break;
	}

	return -99;
}

ePedComponentType func_182(int iParam0) // Position - 0x124E3 Hash - 0xF91DA7A7 ^0xF91DA7A7
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

int func_183(Hash hParam0) // Position - 0x12593 Hash - 0xC0824942 ^0x8EB5258
{
	switch (hParam0)
	{
		case 225514697:
			return 113;
	
		case -1692214353:
			return 175;
	
		case -1686040670:
			return 155;
	}

	switch (hParam0)
	{
		case 1885233650:
			return 327;
	
		case -1667301416:
			return 327;
	}

	return -99;
}

int func_184(Ped pedParam0, int iParam1, ePedComponentType epctParam2) // Position - 0x125F4 Hash - 0x6AEB8E24 ^0x393FEB8F
{
	int i;
	int j;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (iParam1 == 12)
		{
			for (i = 0; i <= 53; i = i + 1)
			{
				if (func_193(pedParam0, iParam1, i))
					return i;
			}
		}
		else if (iParam1 == 13)
		{
			for (j = 0; j <= 19; j = j + 1)
			{
				if (func_193(pedParam0, iParam1, j))
					return j;
			}
		
			return 31;
		}
		else if (iParam1 == 14)
		{
			if (epctParam2 == PV_COMP_INVALID)
			{
			}
			else
			{
				return func_187(pedParam0, epctParam2);
			}
		}
		else
		{
			return func_185(pedParam0, iParam1);
		}
	}

	return -99;
}

int func_185(Ped pedParam0, int iParam1) // Position - 0x12695 Hash - 0x5DC76C2F ^0x122A4DD3
{
	ePedComponentType componentId;
	int pedDrawableVariation;
	int pedTextureVariation;

	if (iParam1 == 12 || iParam1 == 13 || iParam1 == 14 || PED::IS_PED_INJURED(pedParam0))
		return -99;

	componentId = func_182(iParam1);
	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId);
	pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId);
	return func_186(pedParam0, pedDrawableVariation, pedTextureVariation, iParam1);
}

int func_186(Ped pedParam0, int iParam1, int iParam2, int iParam3) // Position - 0x126F5 Hash - 0x8F4AAD60 ^0xD2AF7F3D
{
	ePedComponentType componentId;
	int numberOfPedDrawableVariations;
	int num;
	int i;

	componentId = func_182(iParam3);
	numberOfPedDrawableVariations = PED::GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(pedParam0, componentId);

	for (i = 0; i <= numberOfPedDrawableVariations - 1; i = i + 1)
	{
		if (i != iParam1)
		{
			num = num + PED::GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(pedParam0, componentId, i);
		}
		else
		{
			num = num + iParam2;
			return num;
		}
	}

	return -99;
}

int func_187(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x1274C Hash - 0xA9FF3076 ^0xC030B76B
{
	int pedPropIndex;
	int pedPropTextureIndex;

	if (PED::IS_PED_INJURED(pedParam0))
		return -99;

	pedPropIndex = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);

	if (pedPropIndex == -1)
		return func_192(epctParam1);

	pedPropTextureIndex = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	return func_188(pedParam0, pedPropIndex, pedPropTextureIndex, epctParam1);
}

int func_188(Ped pedParam0, int iParam1, int iParam2, ePedComponentType epctParam3) // Position - 0x12793 Hash - 0x3F809B31 ^0x8E48393
{
	Hash entityModel;
	Hash hashNameForProp;
	int numberOfPedPropDrawableVariations;
	int num;
	int i;
	int j;
	int numberOfPedPropTextureVariations;

	if (iParam1 == -1)
		return func_192(epctParam3);

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	hashNameForProp = FILES::GET_HASH_NAME_FOR_PROP(pedParam0, epctParam3, iParam1, iParam2);

	if (hashNameForProp != -1 && hashNameForProp != 0)
		if (entityModel == 1885233650)
			return func_190(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 3);
		else if (entityModel == -1667301416)
			return func_190(ENTITY::GET_ENTITY_MODEL(pedParam0), hashNameForProp, 14, 4);

	numberOfPedPropDrawableVariations = PED::GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(pedParam0, epctParam3);

	for (i = 0; i <= numberOfPedPropDrawableVariations - 1; i = i + 1)
	{
		numberOfPedPropTextureVariations = PED::GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(pedParam0, epctParam3, i);
	
		if (i != iParam1)
		{
			num = num + numberOfPedPropTextureVariations;
		}
		else
		{
			for (j = 0; j <= numberOfPedPropTextureVariations - 1; j = j + 1)
			{
				if (i == iParam1 && j == iParam2)
				{
					num = num + func_189(pedParam0, epctParam3);
					return num;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return func_192(epctParam3);
}

int func_189(Ped pedParam0, ePedComponentType epctParam1) // Position - 0x1288F Hash - 0xB8AC6F7F ^0x2249C2B3
{
	Hash entityModel;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);

	switch (entityModel)
	{
		case 225514697:
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 58;
			
				case PV_COMP_HAIR:
					return 112;
			}
			break;
	
		case -1692214353:
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 82;
			
				case PV_COMP_HAIR:
					return 158;
			}
			break;
	
		case -1686040670:
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 88;
			
				case PV_COMP_HAIR:
					return 154;
			}
			break;
	
		case 1885233650:
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	
		case -1667301416:
			switch (epctParam1)
			{
				case PV_COMP_HEAD:
					return 10;
			
				case PV_COMP_BERD:
					return 155;
			
				case PV_COMP_FEET:
					return 319;
			}
			break;
	}

	return -99;
}

int func_190(Hash hParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x129CD Hash - 0x37A3B7AE ^0xC607769B
{
	var unk;
	Ped unk2;
	Ped unk3;
	int unk4;
	int unk5;

	if (iParam2 == 12)
	{
		ped = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
	
		for (i = 0; i < ped; i = i + 1)
		{
			PED::APPLY_PED_BLOOD_BY_ZONE(i, &unk);
		
			if (unk.f_1 == hParam1)
				return func_191(hParam0) + i;
		}
	}
	else if (iParam2 == 13)
	{
	}
	else if (iParam2 == 14)
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
		shopPedQueryPropIndex = FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
	
		if (shopPedQueryPropIndex != -1)
			return func_183(hParam0) + shopPedQueryPropIndex;
	}
	else
	{
		FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_182(iParam2));
		shopPedQueryComponentIndex = FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
	
		if (shopPedQueryComponentIndex != -1)
			return func_181(hParam0, func_182(iParam2)) + shopPedQueryComponentIndex;
	}

	return -99;
}

int func_191(Hash hParam0) // Position - 0x12A88 Hash - 0x3694542E ^0xA74289BE
{
	switch (hParam0)
	{
		case 225514697:
			return 53;
	
		case -1692214353:
			return 47;
	
		case -1686040670:
			return 48;
	}

	switch (hParam0)
	{
		case 1885233650:
			return 26;
	
		case -1667301416:
			return 28;
	}

	return -99;
}

int func_192(ePedComponentType epctParam0) // Position - 0x12AE7 Hash - 0xEE599357 ^0xEE599357
{
	switch (epctParam0)
	{
		case PV_COMP_HEAD:
			return 0;
	
		case PV_COMP_BERD:
			return 1;
	
		case PV_COMP_HAIR:
			return 2;
	
		case PV_COMP_UPPR:
			return 3;
	
		case PV_COMP_LOWR:
			return 4;
	
		case PV_COMP_HAND:
			return 5;
	
		case PV_COMP_FEET:
			return 6;
	
		case PV_COMP_TEEF:
			return 7;
	
		case PV_COMP_ACCS:
			return 8;
	}

	return 0;
}

BOOL func_193(Ped pedParam0, int iParam1, int iParam2) // Position - 0x12B6D Hash - 0xEAF08AE1 ^0xBD027042
{
	Hash entityModel;
	int num;
	Hash hash;
	Hash hash2;
	int num2;
	ePedComponentType i;
	int j;
	int k;
	var unk;
	var unk2;
	int unk3;
	var unk4;
	int unk5;
	Hash unk6;
	var unk7;
	var unk8;
	int unk9;
	var unk10;
	int unk11;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	Global_78341[1 /*14*/] = { func_209(entityModel, iParam1, iParam2, -1) };
	hash = Global_2883588;
	hash2 = Global_2883589;

	if (!IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0))
		return false;

	if (iParam1 == 12)
	{
		unk = { func_205(entityModel, iParam2) };
	
		for (k = 0; k < 7; k = k + 1)
		{
			switch (k)
			{
				case 0:
					num2 = 1;
					break;
			
				case 1:
					num2 = 4;
					break;
			
				case 2:
					num2 = 6;
					break;
			
				case 3:
					num2 = 7;
					break;
			
				case 4:
					num2 = 8;
					break;
			
				case 5:
					num2 = 11;
					break;
			
				case 6:
					num2 = 13;
					break;
			}
		
			if (unk[num2] != -99)
			{
				if (!func_193(pedParam0, num2, unk[num2]))
				{
					Global_2883588 = hash;
					Global_2883589 = hash2;
					return false;
				
					if (num2 == 13)
					{
						unk18 = { func_202(entityModel, unk[num2]) };
					
						for (i = 0; i <= 8; i = i + 1)
						{
							if (!func_193(pedParam0, 14, unk18[i]))
							{
								for (j = 0; j <= 19; j = j + 1)
								{
									Global_78341[2 /*14*/] = { func_209(entityModel, 14, j, -1) };
								
									if (Global_78341[2 /*14*/].f_12 == i)
									{
										if (func_193(pedParam0, 14, j))
										{
											if (!func_197(entityModel, iParam2, 14, j, &unk, &Global_78341[2 /*14*/]))
											{
												Global_2883588 = hash;
												Global_2883589 = hash2;
												return false;
											}
										}
									}
								}
							}
						}
					}
					else
					{
						num = func_185(pedParam0, num2);
						Global_78341[2 /*14*/] = { func_209(entityModel, num2, num, -1) };
					
						if (!func_197(entityModel, iParam2, num2, num, &unk, &Global_78341[2 /*14*/]))
						{
							Global_2883588 = hash;
							Global_2883589 = hash2;
							return false;
						}
					}
				}
			}
		}
	
		if (unk[10] != 0 && unk[10] != 1849449579 && unk.f_16)
		{
			if (func_90(1759, Global_78338, 0) != unk[10])
			{
				Global_2883588 = hash;
				Global_2883589 = hash2;
				return false;
			}
		}
	
		Global_2883588 = hash;
		Global_2883589 = hash2;
		return true;
	}
	else if (iParam1 == 13)
	{
		unk28 = { func_202(entityModel, iParam2) };
	
		for (l = 0; l <= 8; l = l + 1)
		{
			if (!func_193(pedParam0, 14, unk28[l]))
				return false;
		}
	
		return true;
	}
	else if (iParam1 == 14)
	{
		if (PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1) == Global_78341[1 /*14*/].f_3 && PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12) == Global_78341[1 /*14*/].f_4 || Global_78341[1 /*14*/].f_3 == -1)
			return true;
	
		if (Global_78341[1 /*14*/].f_12 == PV_COMP_HEAD && IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, -1033433901, 1) && FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588) > 0)
		{
			shopPedApparelVariantPropCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Global_2883588);
		
			for (m = 0; m < shopPedApparelVariantPropCount; m = m + 1)
			{
				FILES::GET_VARIANT_PROP(Global_2883588, m, &nameHash, &enumValue, &anchorPoint);
			
				if (nameHash != 0 && nameHash != 1849449579)
				{
					FILES::INIT_SHOP_PED_PROP(&outProp);
					FILES::GET_SHOP_PED_PROP(nameHash, &outProp);
				
					if (outProp.f_3 == PED::GET_PED_PROP_INDEX(pedParam0, Global_78341[1 /*14*/].f_12, 1) && outProp.f_4 == PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, Global_78341[1 /*14*/].f_12))
						return true;
				}
			}
		}
	}
	else
	{
		if (Global_78341[1 /*14*/].f_3 == PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_182(iParam1)) && Global_78341[1 /*14*/].f_4 == PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_182(iParam1)))
			return true;
	
		if (iParam1 == 4)
		{
			Global_78340 = Global_78340 + 1;
		
			if (Global_78340 == 1)
				if (func_196(entityModel, 11, func_185(pedParam0, 11), -1))
					if (func_195(entityModel, 4, iParam2, &num3))
						return func_193(pedParam0, 4, num3);
				else if (func_194(entityModel, 4, iParam2, &num3))
					return func_193(pedParam0, 4, num3);
		
			Global_78340 = Global_78340 - 1;
		}
	}

	return false;
}

BOOL func_194(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x12FC9 Hash - 0x26B2FF44 ^0xDA957258
{
	Hash componentHash;
	int shopPedApparelVariantComponentCount;
	int i;
	Hash nameHash;
	var enumValue;
	int componentType;

	switch (hParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						componentHash = func_180(hParam0, iParam2, iParam1, 4);
					
						if (componentHash != -1)
						{
							shopPedApparelVariantComponentCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
						
							for (i = 0; i < shopPedApparelVariantComponentCount; i = i + 1)
							{
								FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
							
								if (componentType == 4)
								{
									if (nameHash != 0 && nameHash != 1849449579)
									{
										if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, -1100807313, 0))
										{
											*uParam3 = func_190(hParam0, nameHash, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_195(Hash hParam0, int iParam1, int iParam2, var uParam3) // Position - 0x13072 Hash - 0x26B2FF44 ^0xDA957258
{
	Hash componentHash;
	int shopPedApparelVariantComponentCount;
	int i;
	Hash nameHash;
	var enumValue;
	int componentType;

	switch (hParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 4:
					if (iParam2 >= 256)
					{
						componentHash = func_180(hParam0, iParam2, iParam1, 4);
					
						if (componentHash != -1)
						{
							shopPedApparelVariantComponentCount = FILES::GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(componentHash);
						
							for (i = 0; i < shopPedApparelVariantComponentCount; i = i + 1)
							{
								FILES::GET_VARIANT_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
							
								if (componentType == 4)
								{
									if (nameHash != 0 && nameHash != 1849449579)
									{
										if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(nameHash, -1100807313, 0))
										{
											*uParam3 = func_190(hParam0, nameHash, iParam1, 4);
											return true;
										}
									}
								}
							}
						}
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_196(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x1311A Hash - 0x9FDCB820 ^0xF3833F7A
{
	switch (hParam0)
	{
		case -1667301416:
			switch (iParam1)
			{
				case 11:
					if (iParam2 >= 256)
					{
						if (hParam3 == -1)
							hParam3 = func_180(hParam0, iParam2, 11, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -530089825, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_197(Hash hParam0, int iParam1, int iParam2, int iParam3, var uParam4, int iParam5) // Position - 0x1316D Hash - 0x4EAC6644 ^0x84ED5CC8
{
	var unk;
	int unk2;

	if (uParam4->[iParam2] == iParam3)
		return true;

	if (uParam4->[iParam2] == -99 && iParam2 != 14 && iParam2 != 13)
		return true;

	if (iParam2 == 13 || iParam2 == 14 && uParam4->[13] == 31)
		if (iParam3 == 0 || iParam3 == 1 || iParam3 == 2 || iParam3 == 3 || iParam3 == 4 || iParam3 == 5 || iParam3 == 6 || iParam3 == 7 || iParam3 == 8)
			return true;

	if (iParam3 == -99 || iParam5->f_1 == -1)
		return true;

	if (iParam2 == 14)
	{
		unk = { func_202(hParam0, uParam4->[13]) };
	
		for (i = 0; i <= 8; i = i + 1)
		{
			if (unk[i] == iParam3)
				return true;
		}
	}

	if (func_201(hParam0, iParam2, iParam3))
		return true;

	if (hParam0 == 225514697)
	{
		if (func_200(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			return true;
		}
		else if (func_199(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 0)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_198(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 4 || iParam1 == 5 || iParam1 == 10 || iParam1 == 11 || iParam1 == 12 || iParam1 == 14 || iParam1 == 18 || iParam1 == 50)
				return false;
		
			return true;
		}
	}
	else if (hParam0 == -1692214353)
	{
		if (func_200(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7)
				return false;
		
			return true;
		}
		else if (func_199(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21)
				if (iParam2 == 8)
					if (iParam3 == 9)
						if (iParam1 == 8 || iParam1 == 21)
							return true;
					else
						return false;
				else
					return false;
		
			if (iParam2 == 8)
			{
				if (uParam4->[8] != 26)
					return false;
			}
			else if (iParam2 == 9)
			{
				if (uParam4->[9] != 0)
					return false;
			
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46)
					if (iParam3 >= 5 && iParam3 <= 10)
						return false;
			}
			else if (iParam2 == 14)
			{
				if (iParam1 == 43 || iParam1 == 44 || iParam1 == 45 || iParam1 == 46)
					if (iParam3 >= 26 && iParam3 <= 39)
						return false;
			}
		
			return true;
		}
		else if (func_198(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 3 || iParam1 == 3 || iParam1 == 5 || iParam1 == 7 || iParam1 == 8 || iParam1 == 21)
				return false;
		
			return true;
		}
		else if (iParam2 == 14)
		{
			if (iParam3 >= 159 && iParam3 <= 174)
				return true;
		}
	}
	else if (hParam0 == -1686040670)
	{
		if (iParam1 == 2)
			if (iParam2 == 14 && iParam3 == 0)
				return true;
	
		if (func_200(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 6 || iParam1 == 8 || iParam1 == 45 || iParam1 == 12)
				return false;
		
			return true;
		}
		else if (func_199(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 || iParam1 == 45 || iParam1 == 12)
				return false;
		
			if (iParam2 == 8)
				if (uParam4->[8] != 15)
					return false;
			else if (iParam2 == 9)
				if (uParam4->[9] != 0)
					return false;
		
			return true;
		}
		else if (func_198(hParam0, iParam2, iParam3, -1))
		{
			if (iParam1 == 1 || iParam1 == 2 || iParam1 == 3 || iParam1 == 6 || iParam1 == 8 || iParam1 == 11 || iParam1 == 12)
				return false;
		
			return true;
		}
	}

	return false;
}

BOOL func_198(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x13771 Hash - 0xCC83E9BC ^0xCC83E9BC
{
	switch (hParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 16)
						return true;
					break;
			}
			break;
	
		case -1692214353:
			switch (iParam1)
			{
				case 14:
					if (iParam2 == 40 || iParam2 >= 41 && iParam2 <= 56 || iParam2 >= 64 && iParam2 <= 79)
						return true;
					break;
			}
			break;
	
		case -1686040670:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 17 && iParam2 <= 18 || iParam2 >= 71 && iParam2 <= 86)
						return true;
					break;
			}
			break;
	
		case 1885233650:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_180(hParam0, iParam2, 14, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_180(hParam0, iParam2, 14, 3), -1842686353, 1);
					}
					break;
			
				case 1:
					if (iParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_180(hParam0, iParam2, 1, 3);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_180(hParam0, iParam2, 1, 3), -1842686353, 0);
					}
					break;
			}
			break;
	
		case -1667301416:
			switch (iParam1)
			{
				case 14:
					if (iParam2 >= 18 && iParam2 <= 130)
					{
						return true;
					}
					else if (iParam2 >= 10 && iParam2 <= 17)
					{
						return true;
					}
					else if (iParam2 >= 327)
					{
						if (hParam3 == -1)
							hParam3 = func_180(hParam0, iParam2, 14, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 1) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_180(hParam0, iParam2, 14, 4), -1842686353, 1);
					}
					break;
			
				case 1:
					if (iParam2 >= 26)
					{
						if (hParam3 == -1)
							hParam3 = func_180(hParam0, iParam2, 1, 4);
					
						return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(func_180(hParam0, iParam2, 1, 4), -1842686353, 0);
					}
					break;
			}
			break;
	}

	return false;
}

BOOL func_199(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x139EE Hash - 0x261C127A ^0x57548E07
{
	if (hParam0 == 225514697)
	{
		if (iParam1 == 6)
			if (iParam2 == 10)
				return true;
		else if (iParam1 == 8)
			if (iParam2 == 9 || iParam2 == 7 || iParam2 == 23)
				return true;
		else if (iParam1 == 9)
			if (iParam2 >= 9 && iParam2 <= 14)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 12 || iParam2 == 59 || iParam2 == 60 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 == 37 || iParam2 == 38 || iParam2 == 39 || iParam2 == 40 || iParam2 == 41 || iParam2 >= 42 && iParam2 <= 44 || iParam2 == 54 || iParam2 == 55)
				return true;
	}
	else if (hParam0 == -1692214353)
	{
		if (iParam1 == 2)
			if (iParam2 == 20)
				return true;
		else if (iParam1 == 8)
			if (iParam2 == 3 || iParam2 == 5 || iParam2 == 9)
				return true;
		else if (iParam1 == 9)
			if (iParam2 >= 5 && iParam2 <= 10)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 82 || iParam2 == 10 || iParam2 == 26 || iParam2 == 27 || iParam2 == 28 || iParam2 == 29 || iParam2 == 30 || iParam2 == 31 || iParam2 == 32 || iParam2 == 33 || iParam2 == 34 || iParam2 == 35 || iParam2 == 36 || iParam2 >= 37 && iParam2 <= 39)
				return true;
	}
	else if (hParam0 == -1686040670)
	{
		if (iParam1 == 8)
			if (iParam2 == 14 || iParam2 == 7)
				return true;
		else if (iParam1 == 9)
			if (iParam2 == 8 || iParam2 >= 9 && iParam2 <= 14 || iParam2 == 15 || iParam2 == 16)
				return true;
		else if (iParam1 == 14)
			if (iParam2 == 88 || iParam2 == 12 || iParam2 == 47 || iParam2 == 48 || iParam2 == 49 || iParam2 == 50 || iParam2 == 51 || iParam2 == 52 || iParam2 == 53 || iParam2 == 54 || iParam2 == 55 || iParam2 == 56 || iParam2 == 57 || iParam2 >= 58 && iParam2 <= 60)
				return true;
	}
	else if (hParam0 == 1885233650)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_180(hParam0, iParam2, 1, 3);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, 66092876, 0))
						return false;
				}
			
				return true;
			}
		}
	}
	else if (hParam0 == -1667301416)
	{
		if (iParam1 == 1)
		{
			if (iParam2 > 0)
			{
				if (iParam2 >= 26)
				{
					if (hParam3 == -1)
						hParam3 = func_180(hParam0, iParam2, 1, 4);
				
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, -1757550583, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, 66092876, 0))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_200(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x13E13 Hash - 0xAC33D304 ^0xAC33D304
{
	switch (hParam0)
	{
		case 225514697:
			if (iParam1 == 14)
				if (iParam2 == 58 || iParam2 == 61 || iParam2 >= 62 && iParam2 <= 69 || iParam2 >= 70 && iParam2 <= 79 || iParam2 >= 80 && iParam2 <= 89 || iParam2 == 90 || iParam2 >= 91 && iParam2 <= 102 || iParam2 >= 103 && iParam2 <= 110 || iParam2 == 111)
					return true;
			break;
	
		case -1692214353:
			if (iParam1 == 14)
				if (iParam2 >= 83 && iParam2 <= 92 || iParam2 == 93 || iParam2 == 94 || iParam2 >= 95 && iParam2 <= 101 || iParam2 >= 102 && iParam2 <= 111 || iParam2 >= 112 && iParam2 <= 121 || iParam2 >= 122 && iParam2 <= 131 || iParam2 >= 132 && iParam2 <= 139 || iParam2 >= 140 && iParam2 <= 149 || iParam2 >= 150 && iParam2 <= 156 || iParam2 == 157)
					return true;
			break;
	
		case -1686040670:
			if (iParam1 == 14)
				if (iParam2 == 89 || iParam2 >= 90 && iParam2 <= 99 || iParam2 >= 100 && iParam2 <= 109 || iParam2 == 111 || iParam2 == 112 || iParam2 >= 113 && iParam2 <= 122 || iParam2 >= 123 && iParam2 <= 132 || iParam2 >= 133 && iParam2 <= 142 || iParam2 >= 143 && iParam2 <= 152 || iParam2 == 153)
					return true;
			break;
	
		case 1885233650:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_180(hParam0, iParam2, 14, 3);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, 97230661, 1);
				}
			}
			break;
	
		case -1667301416:
			if (iParam1 == 14)
			{
				if (iParam2 >= 155 && iParam2 <= 318)
				{
					return true;
				}
				else if (iParam2 >= 327)
				{
					if (hParam3 == -1)
						hParam3 = func_180(hParam0, iParam2, 14, 4);
				
					return FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hParam3, 97230661, 1);
				}
			}
			break;
	}

	return false;
}

BOOL func_201(Hash hParam0, int iParam1, int iParam2) // Position - 0x14107 Hash - 0x1194ADFB ^0x1194ADFB
{
	switch (hParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 15)
						return true;
					break;
			
				case 9:
					if (iParam2 == 6)
						return true;
					break;
			}
			break;
	
		case -1692214353:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 1 || iParam2 == 10)
						return true;
					break;
			}
			break;
	
		case -1686040670:
			switch (iParam1)
			{
				case 8:
					if (iParam2 == 4)
						return true;
					break;
			}
			break;
	}

	return false;
}

struct<10> func_202(Hash hParam0, int iParam1) // Position - 0x141A0 Hash - 0x2A30F768 ^0x18171033
{
	int i;
	var unk;

	unk = 9;

	for (i = 0; i <= 8; i = i + 1)
	{
		unk[i] = -99;
	}

	switch (hParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 31:
					func_204(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_204(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_204(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_204(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_204(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_204(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_204(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_204(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_204(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_204(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_204(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_203(&unk, hParam0, iParam1, 10);
					break;
			}
			break;
	
		case -1692214353:
			switch (iParam1)
			{
				case 31:
					func_204(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_204(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_204(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_204(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_204(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_204(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_204(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_204(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_204(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_204(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_203(&unk, hParam0, iParam1, 9);
					break;
			}
			break;
	
		case -1686040670:
			switch (iParam1)
			{
				case 31:
					func_204(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_204(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_204(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_204(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_204(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_204(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_204(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_204(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_204(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_204(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_203(&unk, hParam0, iParam1, 9);
					break;
			}
			break;
	
		case 1885233650:
			switch (iParam1)
			{
				case 31:
					func_204(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_204(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_204(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_204(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_204(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_204(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_204(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_204(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_204(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_204(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_204(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_204(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_204(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_204(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_204(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 14:
					func_204(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_204(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_204(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_204(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_204(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_204(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_204(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_204(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_204(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_204(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 24:
					func_204(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_203(&unk, hParam0, iParam1, 25);
					break;
			}
			break;
	
		case -1667301416:
			switch (iParam1)
			{
				case 31:
					func_204(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 0:
					func_204(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 1:
					func_204(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 2:
					func_204(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 3:
					func_204(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 4:
					func_204(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 5:
					func_204(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 6:
					func_204(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 7:
					func_204(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 8:
					func_204(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 9:
					func_204(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 10:
					func_204(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 11:
					func_204(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 12:
					func_204(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 13:
					func_204(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
					break;
			
				case 14:
					func_204(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 15:
					func_204(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 16:
					func_204(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 17:
					func_204(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 18:
					func_204(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 19:
					func_204(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 20:
					func_204(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 21:
					func_204(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 22:
					func_204(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				case 23:
					func_204(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
					break;
			
				default:
					func_203(&unk, hParam0, iParam1, 25);
					break;
			}
			break;
	}

	return unk;
}

void func_203(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x14ACF Hash - 0xE5FA3D79 ^0xC01023AA
{
	int num;
	Hash itemHash;
	Hash unk;
	int unk2;

	if (iParam2 != 0 && iParam2 != -99)
	{
		uParam0->[0] = 0;
		uParam0->[1] = 1;
		uParam0->[2] = 2;
		uParam0->[3] = 3;
		uParam0->[4] = 4;
		uParam0->[5] = 5;
		uParam0->[6] = 6;
		uParam0->[7] = 7;
		uParam0->[8] = 8;
		num = 0;
	
		if (hParam1 == 225514697)
			num = 0;
		else if (hParam1 == -1692214353)
			num = 1;
		else if (hParam1 == -1686040670)
			num = 2;
		else if (hParam1 == 1885233650)
			num = 3;
		else if (hParam1 == -1667301416)
			num = 4;
	
		FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
	
		if (!FILES::IS_CONTENT_ITEM_LOCKED(itemHash))
		{
			for (i = 0; i < itemHash.f_3; i = i + 1)
			{
				if (FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 != -1)
					if (outPropVariant != 0 && outPropVariant != -1 && outPropVariant != 1849449579)
						uParam0->[outPropVariant.f_2] = func_190(hParam1, outPropVariant, 14, num);
					else if (outPropVariant.f_1 != -1)
						uParam0->[outPropVariant.f_2] = outPropVariant.f_1;
			}
		}
	}

	return;
}

void func_204(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x14BF9 Hash - 0xF7320378 ^0xF7320378
{
	uParam0->[0] = iParam1;
	uParam0->[1] = iParam2;
	uParam0->[2] = iParam3;
	uParam0->[3] = iParam4;
	uParam0->[4] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[6] = iParam7;
	uParam0->[7] = iParam8;
	uParam0->[8] = iParam9;
	return;
}

struct<17> func_205(Hash hParam0, int iParam1) // Position - 0x14C41 Hash - 0x10D20E1D ^0x38BDAFC5
{
	int i;
	var unk;

	unk = 15;

	for (i = 0; i <= 14; i = i + 1)
	{
		unk[i] = -99;
	}

	unk.f_16 = 0;

	switch (hParam0)
	{
		case 225514697:
			switch (iParam1)
			{
				case 0:
					if (Global_113648.f_9087.f_99.f_58[120])
						func_208(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					else
						func_208(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_208(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
					break;
			
				case 2:
					func_208(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
					break;
			
				case 3:
					func_208(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
					break;
			
				case 4:
					func_208(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
					break;
			
				case 5:
					func_208(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
					break;
			
				case 6:
					func_208(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_208(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 8:
					func_208(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_208(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_208(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
					break;
			
				case 11:
					func_208(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_208(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_208(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_208(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
					break;
			
				case 15:
					func_208(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
					break;
			
				case 16:
					func_208(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_208(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_208(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
					break;
			
				case 19:
					func_208(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_208(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_208(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_208(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_208(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_208(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_208(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_208(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_208(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_208(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_208(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_208(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_208(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
					break;
			
				case 32:
					func_208(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_208(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_208(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
					break;
			
				case 35:
					func_208(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_208(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_208(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_208(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_208(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_208(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_208(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_208(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_208(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_208(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_208(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 46:
					func_208(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_208(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 48:
					func_208(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 49:
					func_208(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 50:
					func_208(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
					break;
			
				case 51:
					func_208(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 52:
					func_208(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_206(&unk, hParam0, iParam1, 53);
					break;
			}
			break;
	
		case -1692214353:
			switch (iParam1)
			{
				case 0:
					func_208(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_208(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 2:
					func_208(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
					break;
			
				case 3:
					func_208(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
					break;
			
				case 4:
					func_208(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
					break;
			
				case 5:
					func_208(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 6:
					func_208(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 7:
					func_208(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
					break;
			
				case 8:
					func_208(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
					break;
			
				case 9:
					func_208(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_208(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_208(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
					break;
			
				case 12:
					func_208(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_208(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_208(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_208(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_208(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_208(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_208(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
					break;
			
				case 19:
					func_208(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_208(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_208(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
					break;
			
				case 22:
					func_208(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
					break;
			
				case 23:
					func_208(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
					break;
			
				case 24:
					func_208(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
					break;
			
				case 25:
					func_208(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
					break;
			
				case 26:
					func_208(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
					break;
			
				case 27:
					func_208(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
					break;
			
				case 28:
					func_208(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
					break;
			
				case 29:
					func_208(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
					break;
			
				case 30:
					func_208(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
					break;
			
				case 31:
					func_208(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
					break;
			
				case 32:
					func_208(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
					break;
			
				case 33:
					func_208(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
					break;
			
				case 34:
					func_208(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
					break;
			
				case 35:
					func_208(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
					break;
			
				case 36:
					func_208(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
					break;
			
				case 37:
					func_208(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
					break;
			
				case 38:
					func_208(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_208(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_208(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_208(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_208(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_208(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
					break;
			
				case 44:
					func_208(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 45:
					func_208(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
					break;
			
				case 46:
					func_208(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
					break;
			
				default:
					func_206(&unk, hParam0, iParam1, 47);
					break;
			}
			break;
	
		case -1686040670:
			switch (iParam1)
			{
				case 0:
					func_208(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 1:
					func_208(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
					break;
			
				case 2:
					func_208(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
					break;
			
				case 3:
					func_208(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
					break;
			
				case 4:
					func_208(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 5:
					func_208(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
					break;
			
				case 6:
					func_208(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
					break;
			
				case 7:
					func_208(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
					break;
			
				case 8:
					func_208(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
					break;
			
				case 9:
					func_208(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 10:
					func_208(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 11:
					func_208(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
					break;
			
				case 12:
					func_208(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
					break;
			
				case 13:
					func_208(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 14:
					func_208(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
					break;
			
				case 15:
					func_208(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 16:
					func_208(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 17:
					func_208(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 18:
					func_208(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 19:
					func_208(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 20:
					func_208(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 21:
					func_208(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 22:
					func_208(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 23:
					func_208(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 24:
					func_208(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 25:
					func_208(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 26:
					func_208(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 27:
					func_208(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 28:
					func_208(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 29:
					func_208(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 30:
					func_208(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 31:
					func_208(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 32:
					func_208(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 33:
					func_208(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 34:
					func_208(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 35:
					func_208(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 36:
					func_208(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 37:
					func_208(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 38:
					func_208(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 39:
					func_208(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 40:
					func_208(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 41:
					func_208(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 42:
					func_208(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 43:
					func_208(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 44:
					func_208(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				case 45:
					func_208(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
					break;
			
				case 46:
					func_208(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
					break;
			
				case 47:
					func_208(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
					break;
			
				default:
					func_206(&unk, hParam0, iParam1, 48);
					break;
			}
			break;
	
		case 1885233650:
			switch (iParam1)
			{
				case 0:
					func_208(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
					break;
			
				case 1:
					func_208(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
					break;
			
				case 2:
					func_208(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
					break;
			
				case 3:
					func_208(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
					break;
			
				case 4:
					func_208(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
					break;
			
				case 5:
					func_208(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
					break;
			
				case 6:
					func_208(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
					break;
			
				case 7:
					func_208(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
					break;
			
				case 8:
					func_208(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
					break;
			
				case 9:
					func_208(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
					break;
			
				case 10:
					func_208(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
					break;
			
				case 11:
					func_208(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
					break;
			
				case 12:
					func_208(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
					break;
			
				case 13:
					func_208(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
					break;
			
				case 14:
					func_208(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
					break;
			
				case 15:
					func_208(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
					break;
			
				case 16:
					func_208(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
					break;
			
				case 17:
					func_208(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
					break;
			
				case 18:
					func_208(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
					break;
			
				case 19:
					func_208(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
					break;
			
				case 20:
					func_208(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
					break;
			
				case 21:
					func_208(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
					break;
			
				case 22:
					func_208(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
					break;
			
				case 23:
					func_208(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
					break;
			
				case 24:
					func_208(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
					break;
			
				case 25:
					func_208(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
					break;
			
				default:
					func_206(&unk, hParam0, iParam1, 26);
					break;
			}
			break;
	
		case -1667301416:
			switch (iParam1)
			{
				case 0:
					func_208(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
					break;
			
				case 1:
					func_208(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
					break;
			
				case 2:
					func_208(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
					break;
			
				case 3:
					func_208(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
					break;
			
				case 4:
					func_208(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
					break;
			
				case 5:
					func_208(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
					break;
			
				case 6:
					func_208(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
					break;
			
				case 7:
					func_208(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
					break;
			
				case 8:
					func_208(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
					break;
			
				case 9:
					func_208(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
					break;
			
				case 10:
					func_208(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
					break;
			
				case 11:
					func_208(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
					break;
			
				case 12:
					func_208(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
					break;
			
				case 13:
					func_208(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
					break;
			
				case 14:
					func_208(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
					break;
			
				case 15:
					func_208(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
					break;
			
				case 16:
					func_208(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
					break;
			
				case 17:
					func_208(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
					break;
			
				case 18:
					func_208(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
					break;
			
				case 19:
					func_208(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
					break;
			
				case 20:
					func_208(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
					break;
			
				case 21:
					func_208(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
					break;
			
				case 22:
					func_208(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
					break;
			
				case 23:
					func_208(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
					break;
			
				case 24:
					func_208(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
					break;
			
				case 25:
					func_208(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
					break;
			
				case 26:
					func_208(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
					break;
			
				case 27:
					func_208(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
					break;
			
				default:
					func_206(&unk, hParam0, iParam1, 28);
					break;
			}
			break;
	}

	return unk;
}

void func_206(var uParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x16A89 Hash - 0xD805D094 ^0x25EDFC78
{
	int num;
	Hash itemHash;
	Hash unk;
	var unk2;
	int unk3;

	uParam0->[0] = 0;
	uParam0->[2] = -99;
	uParam0->[3] = 0;
	uParam0->[4] = 0;
	uParam0->[6] = 0;
	uParam0->[5] = 0;
	uParam0->[8] = 0;
	uParam0->[9] = 0;
	uParam0->[10] = 0;
	uParam0->[1] = 0;
	uParam0->[7] = 0;
	uParam0->[11] = 0;
	uParam0->[13] = -99;
	uParam0->[14] = -99;
	uParam0->f_16 = 0;
	num = 0;

	if (hParam1 == 225514697)
	{
		num = 0;
		uParam0->[13] = 10 + (iParam2 - iParam3);
	}
	else if (hParam1 == -1692214353)
	{
		num = 1;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == -1686040670)
	{
		num = 2;
		uParam0->[13] = 9 + (iParam2 - iParam3);
	}
	else if (hParam1 == 1885233650)
	{
		num = 3;
	}
	else if (hParam1 == -1667301416)
	{
		num = 4;
	}

	FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
	PED::APPLY_PED_BLOOD_BY_ZONE(iParam2 - iParam3, &itemHash);

	if (!FILES::IS_CONTENT_ITEM_LOCKED(itemHash))
	{
		for (i = 0; i < itemHash.f_4; i = i + 1)
		{
			if (FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(itemHash.f_1, i, &outComponentVariant))
			{
				if (outComponentVariant != 0 && outComponentVariant != -1 && outComponentVariant != 1849449579)
				{
					if (outComponentVariant.f_2 == 10)
					{
						FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
						FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
					
						if (outComponentVariant != outComponent.f_1)
							uParam0->f_16 = 1;
					}
				
					if (outComponentVariant.f_2 == 10 && uParam0->f_16)
					{
						uParam0->[func_207(outComponentVariant.f_2)] = outComponentVariant;
						uParam0->f_16 = 1;
					}
					else
					{
						uParam0->[func_207(outComponentVariant.f_2)] = func_190(hParam1, outComponentVariant, func_207(outComponentVariant.f_2), num);
					}
				}
				else if (outComponentVariant.f_1 != -1)
				{
					uParam0->[func_207(outComponentVariant.f_2)] = outComponentVariant.f_1;
				}
			}
		}
	
		if (itemHash.f_3 == 0)
			uParam0->[13] = -99;
		else
			uParam0->[13] = itemHash.f_1;
	}

	return;
}

int func_207(int iParam0) // Position - 0x16C73 Hash - 0xF91DA7A7 ^0xF91DA7A7
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 6:
			return 6;
	
		case 5:
			return 5;
	
		case 8:
			return 8;
	
		case 9:
			return 9;
	
		case 10:
			return 10;
	
		case 1:
			return 1;
	
		case 7:
			return 7;
	
		case 11:
			return 11;
	}

	return 0;
}

void func_208(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x16D23 Hash - 0xEC425A3E ^0xEC425A3E
{
	uParam0->[0] = iParam1;
	uParam0->[2] = iParam2;
	uParam0->[3] = iParam3;
	uParam0->[4] = iParam4;
	uParam0->[6] = iParam5;
	uParam0->[5] = iParam6;
	uParam0->[8] = iParam7;
	uParam0->[9] = iParam8;
	uParam0->[10] = iParam9;
	uParam0->[1] = iParam10;
	uParam0->[7] = iParam11;
	uParam0->[11] = iParam12;
	uParam0->[13] = iParam13;
	uParam0->[14] = -99;
	return;
}

struct<14> func_209(Hash hParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x16D94 Hash - 0x2257F879 ^0x68AE5A32
{
	func_255();

	if (hParam0 == 1885233650)
		func_239(iParam1, iParam2, hParam3);
	else if (hParam0 == -1667301416)
		func_210(iParam1, iParam2, hParam3);

	return Global_78341[0 /*14*/];
}

void func_210(int iParam0, int iParam1, Hash hParam2) // Position - 0x16DD5 Hash - 0x9AF0DF05 ^0x9AF0DF05
{
	switch (iParam0)
	{
		case 2:
			func_238(iParam1, hParam2);
			break;
	
		case 11:
			func_237(iParam1, hParam2);
			break;
	
		case 8:
			func_233(iParam1, hParam2);
			break;
	
		case 9:
			func_232(iParam1, hParam2);
			break;
	
		case 3:
			func_231(iParam1, hParam2);
			break;
	
		case 4:
			func_230(iParam1, hParam2);
			break;
	
		case 6:
			func_229(iParam1, hParam2);
			break;
	
		case 1:
			func_228(iParam1, hParam2);
			break;
	
		case 7:
			func_227(iParam1, hParam2);
			break;
	
		case 10:
			func_226(iParam1, hParam2);
			break;
	
		case 14:
			func_225(iParam1, hParam2);
			break;
	
		case 12:
			func_224(iParam1, hParam2);
			break;
	
		case 5:
			func_223(iParam1, hParam2);
			break;
	
		case 0:
			func_221(iParam1, hParam2);
			break;
	
		case 13:
			func_211(iParam1);
			break;
	}

	return;
}

void func_211(int iParam0) // Position - 0x16EE1 Hash - 0xB745E49C ^0xB745E49C
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (iParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_212(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x1709C Hash - 0xA2DFD38C ^0xCA7EA132
{
	int num;
	int num2;

	iParam0->f_6 = 0;
	*iParam0 = iParam9;
	iParam0->f_1 = iParam2 % 32;
	iParam0->f_2 = iParam2 / 32;
	iParam0->f_3 = iParam4;
	iParam0->f_4 = iParam5;
	iParam0->f_7 = iParam6;
	TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
	iParam0->f_13 = iParam8;
	iParam0->f_12 = func_220(iParam8);

	if (iParam0->f_2 >= 10 && iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		!bParam10;
		iParam0->f_2 = 0;
	}

	MISC::GET_HASH_KEY(sParam3) != MISC::GET_HASH_KEY("NO_LABEL");

	if (bParam7)
		MISC::SET_BIT(&(iParam0->f_6), 3);

	if (bParam10)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
			MISC::SET_BIT(&(iParam0->f_6), 5);
	
		MISC::SET_BIT(&(iParam0->f_6), 1);
		MISC::SET_BIT(&(iParam0->f_6), 2);
		MISC::SET_BIT(&(iParam0->f_6), 6);
	
		if (func_219(14))
			return;
	
		if (iParam1 == 1)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, 1827025211, 0))
				MISC::SET_BIT(&(iParam0->f_6), 7);
	
		if (iParam1 == 12)
		{
			if (!func_217(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_217(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else if (iParam1 == 13)
		{
		}
		else if (iParam1 == 14)
		{
			if (!func_217(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_217(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
		else
		{
			if (!func_217(Global_2883588, 1, true, true, -1))
				MISC::CLEAR_BIT(&(iParam0->f_6), 2);
		
			if (!func_217(Global_2883588, 2, true, true, -1))
				MISC::SET_BIT(&(iParam0->f_6), 4);
		}
	
		if (FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589))
		{
			MISC::CLEAR_BIT(&(iParam0->f_6), 1);
			MISC::CLEAR_BIT(&(iParam0->f_6), 0);
		}
	}
	else if (iParam0->f_5 >= 0 && iParam0->f_5 < 3)
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
		MISC::SET_BIT(&(iParam0->f_6), 5);
	
		if (func_216(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 1);
	
		if (func_216(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 2);
	
		if (!func_216(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0))
			MISC::SET_BIT(&(iParam0->f_6), 4);
	}
	else
	{
		MISC::SET_BIT(&(iParam0->f_6), 0);
	
		if (iParam1 == 11 || iParam1 == 4 || iParam1 == 6 || iParam1 == 1 || iParam1 == 14 || iParam1 == 2 || iParam1 == 8 || iParam1 == 9 || iParam1 == 10 || iParam1 == 7 || iParam1 == 12)
		{
			if (func_219(14))
				return;
		
			num = func_90(func_215(iParam1, iParam0->f_2), Global_78338, 0);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 1);
		
			num = func_90(func_214(iParam1, iParam0->f_2), Global_78338, 0);
		
			if (IS_BIT_SET(num, iParam0->f_1))
				MISC::SET_BIT(&(iParam0->f_6), 2);
		
			if (func_213(iParam1, iParam0->f_2, &num2))
			{
				num = func_90(num2, Global_78338, 0);
			
				if (!IS_BIT_SET(num, iParam0->f_1))
					MISC::SET_BIT(&(iParam0->f_6), 4);
			}
		}
		else
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	if (iParam1 == 14)
	{
		if (iParam4 == -1)
		{
			MISC::SET_BIT(&(iParam0->f_6), 1);
			MISC::SET_BIT(&(iParam0->f_6), 2);
		}
	}

	return;
}

BOOL func_213(int iParam0, int iParam1, var uParam2) // Position - 0x17441 Hash - 0x805F0D09 ^0xD5FF8259
{
	*uParam2 = 979;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 980;
					break;
			
				case 3:
					*uParam2 = 1430;
					break;
			
				case 4:
					*uParam2 = 996;
					break;
			
				case 6:
					*uParam2 = 1004;
					break;
			
				case 8:
					*uParam2 = 1431;
					break;
			
				case 9:
					*uParam2 = 1439;
					break;
			
				case 10:
					*uParam2 = 1441;
					break;
			
				case 1:
					*uParam2 = 1012;
					break;
			
				case 7:
					*uParam2 = 1442;
					break;
			
				case 11:
					*uParam2 = 988;
					break;
			
				case 14:
					*uParam2 = 1020;
					break;
			
				case 12:
					*uParam2 = 1031;
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 981;
					break;
			
				case 4:
					*uParam2 = 997;
					break;
			
				case 6:
					*uParam2 = 1005;
					break;
			
				case 8:
					*uParam2 = 1432;
					break;
			
				case 9:
					*uParam2 = 1440;
					break;
			
				case 7:
					*uParam2 = 1443;
					break;
			
				case 11:
					*uParam2 = 989;
					break;
			
				case 14:
					*uParam2 = 1021;
					break;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					*uParam2 = 982;
					break;
			
				case 4:
					*uParam2 = 998;
					break;
			
				case 6:
					*uParam2 = 1006;
					break;
			
				case 8:
					*uParam2 = 1433;
					break;
			
				case 7:
					*uParam2 = 1444;
					break;
			
				case 11:
					*uParam2 = 990;
					break;
			
				case 14:
					*uParam2 = 1022;
					break;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 999;
					break;
			
				case 6:
					*uParam2 = 1007;
					break;
			
				case 8:
					*uParam2 = 1434;
					break;
			
				case 11:
					*uParam2 = 991;
					break;
			
				case 14:
					*uParam2 = 1023;
					break;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1000;
					break;
			
				case 6:
					*uParam2 = 1008;
					break;
			
				case 8:
					*uParam2 = 1435;
					break;
			
				case 11:
					*uParam2 = 992;
					break;
			
				case 14:
					*uParam2 = 1024;
					break;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1001;
					break;
			
				case 6:
					*uParam2 = 1009;
					break;
			
				case 8:
					*uParam2 = 1436;
					break;
			
				case 11:
					*uParam2 = 993;
					break;
			
				case 14:
					*uParam2 = 1025;
					break;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1002;
					break;
			
				case 6:
					*uParam2 = 1010;
					break;
			
				case 8:
					*uParam2 = 1437;
					break;
			
				case 11:
					*uParam2 = 994;
					break;
			
				case 14:
					*uParam2 = 1026;
					break;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					*uParam2 = 1003;
					break;
			
				case 6:
					*uParam2 = 1011;
					break;
			
				case 8:
					*uParam2 = 1438;
					break;
			
				case 11:
					*uParam2 = 995;
					break;
			
				case 14:
					*uParam2 = 1027;
					break;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1028;
					break;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1029;
					break;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					*uParam2 = 1030;
					break;
			}
			break;
	}

	return *uParam2 != 979;
}

int func_214(int iParam0, int iParam1) // Position - 0x17846 Hash - 0x4CEDF2DA ^0xD4A47B95
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 928;
			
				case 3:
					return 1415;
			
				case 4:
					return 944;
			
				case 6:
					return 952;
			
				case 8:
					return 1416;
			
				case 9:
					return 1424;
			
				case 10:
					return 1426;
			
				case 1:
					return 960;
			
				case 7:
					return 1427;
			
				case 11:
					return 936;
			
				case 14:
					return 968;
			
				case 12:
					return 979;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 929;
			
				case 4:
					return 945;
			
				case 6:
					return 953;
			
				case 8:
					return 1417;
			
				case 9:
					return 1425;
			
				case 7:
					return 1428;
			
				case 11:
					return 937;
			
				case 14:
					return 969;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 930;
			
				case 4:
					return 946;
			
				case 6:
					return 954;
			
				case 8:
					return 1418;
			
				case 7:
					return 1429;
			
				case 11:
					return 938;
			
				case 14:
					return 970;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 947;
			
				case 6:
					return 955;
			
				case 8:
					return 1419;
			
				case 11:
					return 939;
			
				case 14:
					return 971;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 948;
			
				case 6:
					return 956;
			
				case 8:
					return 1420;
			
				case 11:
					return 940;
			
				case 14:
					return 972;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 949;
			
				case 6:
					return 957;
			
				case 8:
					return 1421;
			
				case 11:
					return 941;
			
				case 14:
					return 973;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 950;
			
				case 6:
					return 958;
			
				case 8:
					return 1422;
			
				case 11:
					return 942;
			
				case 14:
					return 974;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 951;
			
				case 6:
					return 959;
			
				case 8:
					return 1423;
			
				case 11:
					return 943;
			
				case 14:
					return 975;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 976;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 977;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 978;
			}
			break;
	}

	return 936;
}

int func_215(int iParam0, int iParam1) // Position - 0x17C41 Hash - 0x4CEDF2DA ^0x7536052F
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 2:
					return 876;
			
				case 3:
					return 1400;
			
				case 4:
					return 892;
			
				case 6:
					return 900;
			
				case 8:
					return 1401;
			
				case 9:
					return 1409;
			
				case 10:
					return 1411;
			
				case 1:
					return 908;
			
				case 7:
					return 1412;
			
				case 11:
					return 884;
			
				case 14:
					return 916;
			
				case 12:
					return 927;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 2:
					return 877;
			
				case 4:
					return 893;
			
				case 6:
					return 901;
			
				case 8:
					return 1402;
			
				case 9:
					return 1410;
			
				case 7:
					return 1413;
			
				case 11:
					return 885;
			
				case 14:
					return 917;
			}
			break;
	
		case 2:
			switch (iParam0)
			{
				case 2:
					return 878;
			
				case 4:
					return 894;
			
				case 6:
					return 902;
			
				case 8:
					return 1403;
			
				case 7:
					return 1414;
			
				case 11:
					return 886;
			
				case 14:
					return 918;
			}
			break;
	
		case 3:
			switch (iParam0)
			{
				case 4:
					return 895;
			
				case 6:
					return 903;
			
				case 8:
					return 1404;
			
				case 11:
					return 887;
			
				case 14:
					return 919;
			}
			break;
	
		case 4:
			switch (iParam0)
			{
				case 4:
					return 896;
			
				case 6:
					return 904;
			
				case 8:
					return 1405;
			
				case 11:
					return 888;
			
				case 14:
					return 920;
			}
			break;
	
		case 5:
			switch (iParam0)
			{
				case 4:
					return 897;
			
				case 6:
					return 905;
			
				case 8:
					return 1406;
			
				case 11:
					return 889;
			
				case 14:
					return 921;
			}
			break;
	
		case 6:
			switch (iParam0)
			{
				case 4:
					return 898;
			
				case 6:
					return 906;
			
				case 8:
					return 1407;
			
				case 11:
					return 890;
			
				case 14:
					return 922;
			}
			break;
	
		case 7:
			switch (iParam0)
			{
				case 4:
					return 899;
			
				case 6:
					return 907;
			
				case 8:
					return 1408;
			
				case 11:
					return 891;
			
				case 14:
					return 923;
			}
			break;
	
		case 8:
			switch (iParam0)
			{
				case 14:
					return 924;
			}
			break;
	
		case 9:
			switch (iParam0)
			{
				case 14:
					return 925;
			}
			break;
	
		case 10:
			switch (iParam0)
			{
				case 14:
					return 926;
			}
			break;
	}

	return 884;
}

BOOL func_216(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1803E Hash - 0xDF4F0B01 ^0xAAD287D4
{
	if (iParam0 == 0)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
	}
	else if (iParam0 == 1)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
	}
	else if (iParam0 == 2)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
	}
	else if (iParam0 == 3)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
		}
		else if (iParam2 == 6)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
		}
		else if (iParam2 == 7)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
		}
		else if (iParam2 == 8)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
		}
		else if (iParam2 == 9)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
		}
	}
	else if (iParam0 == 4)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
		}
	}
	else if (iParam0 == 5)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
	}
	else if (iParam0 == 6)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
		}
	}
	else if (iParam0 == 7)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
	}
	else if (iParam0 == 8)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
		}
	}
	else if (iParam0 == 9)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
	}
	else if (iParam0 == 10)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
		}
	}
	else if (iParam0 == 11)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
		}
	}
	else if (iParam0 == 12)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
		}
	}
	else if (iParam0 == 13)
	{
		if (iParam5 == 1)
			MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		if (iParam6 == 1)
			MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	
		return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
	}
	else if (iParam0 == 14)
	{
		if (iParam2 == 0)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
		}
		else if (iParam2 == 1)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
		}
		else if (iParam2 == 2)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
		}
		else if (iParam2 == 3)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
		}
		else if (iParam2 == 4)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
		}
		else if (iParam2 == 5)
		{
			if (iParam5 == 1)
				MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			if (iParam6 == 1)
				MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		
			return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
		}
	}

	return false;
}

BOOL func_217(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x18EE1 Hash - 0x8C42734C ^0x8C42734C
{
	int num;
	int num2;
	int num3;
	int num4;

	num = Global_78338;

	if (iParam4 != -1)
		num = iParam4;

	if (func_218(hParam0, iParam1, &num3, &num2, bParam2, bParam3))
	{
		num4 = func_90(num3, num, 0);
		return IS_BIT_SET(num4, num2);
	}

	return false;
}

BOOL func_218(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x18F20 Hash - 0x1B8A3878 ^0x1D07D6A7
{
	int fmMaleShopPedApparelItemIndex;

	*uParam2 = 14192;

	if (bParam4 && Global_4539485 || !bParam4 && bParam5)
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case 1857811503:
					case -1198063650:
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case 552556691:
					case -1596927918:
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case 328711652:
					case 2093516866:
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case 1194403102:
					case 1863511255:
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case 1107630790:
					case 1503248869:
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case 1807937089:
					case 1263478096:
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case 1453442047:
					case 745170819:
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				
					case -1071423629:
					case -1382822784:
					case 385813134:
						*uParam2 = 936;
						*uParam3 = 0;
						return true;
				
					case -833094692:
					case -1731353868:
					case 675392787:
						*uParam2 = 936;
						*uParam3 = 1;
						return true;
				
					case -1836153782:
					case -1960638561:
					case -238272479:
						*uParam2 = 936;
						*uParam3 = 2;
						return true;
				
					case -1598414687:
					case 147161830:
					case 67757212:
						*uParam2 = 936;
						*uParam3 = 3;
						return true;
				
					case 123661793:
					case -92608943:
					case -536372072:
						*uParam2 = 936;
						*uParam3 = 4;
						return true;
				
					case 330958487:
					case -162931217:
					case -247578875:
						*uParam2 = 936;
						*uParam3 = 5;
						return true;
				
					case -142717408:
					case 1665087452:
					case -854821214:
						*uParam2 = 936;
						*uParam3 = 7;
						return true;
				
					case 1290696959:
					case 1012984348:
					case -1458295118:
						*uParam2 = 936;
						*uParam3 = 8;
						return true;
				
					case 2059568454:
					case 933072050:
					case -1454802604:
						*uParam2 = 936;
						*uParam3 = 11;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case 8886212:
					case -969630947:
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case 1857811503:
					case -1198063650:
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case 552556691:
					case -1596927918:
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case 328711652:
					case 2093516866:
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case 1194403102:
					case 1863511255:
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case 1107630790:
					case 1503248869:
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case 1807937089:
					case 1263478096:
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case 1453442047:
					case 745170819:
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 1:
				switch (hParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 972;
						*uParam3 = 19;
						return true;
				
					case 1655095722:
					case 472553912:
						*uParam2 = 972;
						*uParam3 = 20;
						return true;
				
					case -1951624263:
					case 147288818:
						*uParam2 = 972;
						*uParam3 = 21;
						return true;
				
					case -1586249913:
					case 1027988462:
						*uParam2 = 972;
						*uParam3 = 22;
						return true;
				
					case -1472181024:
					case 788217689:
						*uParam2 = 972;
						*uParam3 = 23;
						return true;
				
					case -1116178608:
					case 1338147047:
						*uParam2 = 972;
						*uParam3 = 24;
						return true;
				
					case -1028914761:
					case 1095820292:
						*uParam2 = 972;
						*uParam3 = 25;
						return true;
				
					case -654496167:
					case -1989217217:
						*uParam2 = 972;
						*uParam3 = 26;
						return true;
				}
				break;
		
			case 2:
				switch (hParam0)
				{
					case -1795774903:
					case -379046860:
						*uParam2 = 1024;
						*uParam3 = 19;
						return true;
				
					case 1655095722:
					case 472553912:
						*uParam2 = 1024;
						*uParam3 = 20;
						return true;
				
					case -1951624263:
					case 147288818:
						*uParam2 = 1024;
						*uParam3 = 21;
						return true;
				
					case -1586249913:
					case 1027988462:
						*uParam2 = 1024;
						*uParam3 = 22;
						return true;
				
					case -1472181024:
					case 788217689:
						*uParam2 = 1024;
						*uParam3 = 23;
						return true;
				
					case -1116178608:
					case 1338147047:
						*uParam2 = 1024;
						*uParam3 = 24;
						return true;
				
					case -1028914761:
					case 1095820292:
						*uParam2 = 1024;
						*uParam3 = 25;
						return true;
				
					case -654496167:
					case -1989217217:
						*uParam2 = 1024;
						*uParam3 = 26;
						return true;
				}
				break;
		}
	}

	fmMaleShopPedApparelItemIndex = -1;

	if (bParam4)
		if (Global_4539485)
			fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
		else
			fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else if (bParam5)
		fmMaleShopPedApparelItemIndex = PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
	else
		fmMaleShopPedApparelItemIndex = PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);

	if (fmMaleShopPedApparelItemIndex == -1)
		return false;

	switch (iParam1)
	{
		case 1:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1761;
					break;
			
				case 1:
					*uParam2 = 1762;
					break;
			
				case 2:
					*uParam2 = 1763;
					break;
			
				case 3:
					*uParam2 = 1764;
					break;
			
				case 4:
					*uParam2 = 1765;
					break;
			
				case 5:
					*uParam2 = 1766;
					break;
			
				case 6:
					*uParam2 = 1773;
					break;
			
				case 7:
					*uParam2 = 1774;
					break;
			
				case 8:
					*uParam2 = 1775;
					break;
			
				case 9:
					*uParam2 = 1776;
					break;
			
				case 10:
					*uParam2 = 1777;
					break;
			
				case 11:
					*uParam2 = 1778;
					break;
			
				case 12:
					*uParam2 = 1779;
					break;
			
				case 13:
					*uParam2 = 1787;
					break;
			
				case 14:
					*uParam2 = 1788;
					break;
			
				case 15:
					*uParam2 = 1889;
					break;
			
				case 16:
					*uParam2 = 1890;
					break;
			
				case 17:
					*uParam2 = 1921;
					break;
			
				case 18:
					*uParam2 = 1935;
					break;
			
				case 19:
					*uParam2 = 1936;
					break;
			
				case 20:
					*uParam2 = 1937;
					break;
			
				case 21:
					*uParam2 = 1938;
					break;
			
				case 22:
					*uParam2 = 1939;
					break;
			
				case 23:
					*uParam2 = 2043;
					break;
			
				case 24:
					*uParam2 = 2044;
					break;
			
				case 25:
					*uParam2 = 2070;
					break;
			
				case 26:
					*uParam2 = 2071;
					break;
			
				case 27:
					*uParam2 = 2072;
					break;
			
				case 28:
					*uParam2 = 2073;
					break;
			
				case 29:
					*uParam2 = 2074;
					break;
			
				case 30:
					*uParam2 = 2075;
					break;
			
				case 31:
					*uParam2 = 2076;
					break;
			
				case 32:
					*uParam2 = 2077;
					break;
			
				case 33:
					*uParam2 = 2078;
					break;
			
				case 34:
					*uParam2 = 2079;
					break;
			
				case 35:
					*uParam2 = 2326;
					break;
			
				case 36:
					*uParam2 = 2327;
					break;
			
				case 37:
					*uParam2 = 2391;
					break;
			
				case 38:
					*uParam2 = 2392;
					break;
			
				case 39:
					*uParam2 = 2393;
					break;
			
				case 40:
					*uParam2 = 2394;
					break;
			
				case 41:
					*uParam2 = 2453;
					break;
			
				case 42:
					*uParam2 = 2454;
					break;
			
				case 43:
					*uParam2 = 2455;
					break;
			
				case 44:
					*uParam2 = 2456;
					break;
			
				case 45:
					*uParam2 = 2457;
					break;
			
				case 46:
					*uParam2 = 2458;
					break;
			
				case 47:
					*uParam2 = 2459;
					break;
			
				case 48:
					*uParam2 = 2460;
					break;
			
				case 49:
					*uParam2 = 2461;
					break;
			
				case 50:
					*uParam2 = 2462;
					break;
			
				case 51:
					*uParam2 = 2592;
					break;
			
				case 52:
					*uParam2 = 2593;
					break;
			
				case 53:
					*uParam2 = 2594;
					break;
			
				case 54:
					*uParam2 = 2595;
					break;
			
				case 55:
					*uParam2 = 2596;
					break;
			
				case 56:
					*uParam2 = 2597;
					break;
			
				case 57:
					*uParam2 = 2598;
					break;
			
				case 58:
					*uParam2 = 2599;
					break;
			
				case 59:
					*uParam2 = 2600;
					break;
			
				case 60:
					*uParam2 = 2601;
					break;
			
				case 61:
					*uParam2 = 2602;
					break;
			
				case 62:
					*uParam2 = 3199;
					break;
			
				case 63:
					*uParam2 = 3200;
					break;
			
				case 64:
					*uParam2 = 3201;
					break;
			
				case 65:
					*uParam2 = 3202;
					break;
			
				case 66:
					*uParam2 = 3203;
					break;
			
				case 67:
					*uParam2 = 3204;
					break;
			
				case 68:
					*uParam2 = 3672;
					break;
			
				case 69:
					*uParam2 = 3673;
					break;
			
				case 70:
					*uParam2 = 3674;
					break;
			
				case 71:
					*uParam2 = 3675;
					break;
			
				case 72:
					*uParam2 = 3676;
					break;
			
				case 73:
					*uParam2 = 3677;
					break;
			
				case 74:
					*uParam2 = 3678;
					break;
			
				case 75:
					*uParam2 = 3679;
					break;
			
				case 76:
					*uParam2 = 3680;
					break;
			
				case 77:
					*uParam2 = 3681;
					break;
			
				case 78:
					*uParam2 = 3795;
					break;
			
				case 79:
					*uParam2 = 3796;
					break;
			
				case 80:
					*uParam2 = 3797;
					break;
			
				case 81:
					*uParam2 = 3798;
					break;
			
				case 82:
					*uParam2 = 3799;
					break;
			
				case 83:
					*uParam2 = 3800;
					break;
			
				case 84:
					*uParam2 = 3801;
					break;
			
				case 85:
					*uParam2 = 3802;
					break;
			
				case 86:
					*uParam2 = 3905;
					break;
			
				case 87:
					*uParam2 = 3906;
					break;
			
				case 88:
					*uParam2 = 3907;
					break;
			
				case 89:
					*uParam2 = 5340;
					break;
			
				case 90:
					*uParam2 = 5341;
					break;
			
				case 91:
					*uParam2 = 5342;
					break;
			
				case 92:
					*uParam2 = 5343;
					break;
			
				case 93:
					*uParam2 = 5344;
					break;
			
				case 94:
					*uParam2 = 5345;
					break;
			
				case 95:
					*uParam2 = 5346;
					break;
			
				case 96:
					*uParam2 = 5347;
					break;
			
				case 97:
					*uParam2 = 5348;
					break;
			
				case 98:
					*uParam2 = 5349;
					break;
			
				case 99:
					*uParam2 = 5350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5351;
					break;
			
				case 101:
					*uParam2 = 5397;
					break;
			
				case 102:
					*uParam2 = 5398;
					break;
			
				case 103:
					*uParam2 = 5399;
					break;
			
				case 104:
					*uParam2 = 5400;
					break;
			
				case 105:
					*uParam2 = 5401;
					break;
			
				case 106:
					*uParam2 = 5402;
					break;
			
				case 107:
					*uParam2 = 5403;
					break;
			
				case 108:
					*uParam2 = 5404;
					break;
			
				case 109:
					*uParam2 = 5405;
					break;
			
				case 110:
					*uParam2 = 5406;
					break;
			
				case 111:
					*uParam2 = 5407;
					break;
			
				case 112:
					*uParam2 = 5408;
					break;
			
				case 113:
					*uParam2 = 5409;
					break;
			
				case 114:
					*uParam2 = 5410;
					break;
			
				case 115:
					*uParam2 = 5411;
					break;
			
				case 116:
					*uParam2 = 5412;
					break;
			
				case 117:
					*uParam2 = 5413;
					break;
			
				case 118:
					*uParam2 = 5414;
					break;
			
				case 119:
					*uParam2 = 5415;
					break;
			
				case 120:
					*uParam2 = 5416;
					break;
			
				case 121:
					*uParam2 = 5417;
					break;
			
				case 122:
					*uParam2 = 5418;
					break;
			
				case 123:
					*uParam2 = 5419;
					break;
			
				case 124:
					*uParam2 = 6125;
					break;
			
				case 125:
					*uParam2 = 6126;
					break;
			
				case 126:
					*uParam2 = 6127;
					break;
			
				case 127:
					*uParam2 = 6128;
					break;
			
				case 128:
					*uParam2 = 6129;
					break;
			
				case 129:
					*uParam2 = 6130;
					break;
			
				case 130:
					*uParam2 = 6131;
					break;
			
				case 131:
					*uParam2 = 6132;
					break;
			
				case 132:
					*uParam2 = 6133;
					break;
			
				case 133:
					*uParam2 = 6134;
					break;
			
				case 134:
					*uParam2 = 6135;
					break;
			
				case 135:
					*uParam2 = 6136;
					break;
			
				case 136:
					*uParam2 = 6137;
					break;
			
				case 137:
					*uParam2 = 6138;
					break;
			
				case 138:
					*uParam2 = 6139;
					break;
			
				case 139:
					*uParam2 = 6438;
					break;
			
				case 140:
					*uParam2 = 6439;
					break;
			
				case 141:
					*uParam2 = 6440;
					break;
			
				case 142:
					*uParam2 = 6441;
					break;
			
				case 143:
					*uParam2 = 6442;
					break;
			
				case 144:
					*uParam2 = 6443;
					break;
			
				case 145:
					*uParam2 = 6444;
					break;
			
				case 146:
					*uParam2 = 6445;
					break;
			
				case 147:
					*uParam2 = 6446;
					break;
			
				case 148:
					*uParam2 = 6447;
					break;
			
				case 149:
					*uParam2 = 6448;
					break;
			
				case 150:
					*uParam2 = 6449;
					break;
			
				case 151:
					*uParam2 = 6450;
					break;
			
				case 152:
					*uParam2 = 6451;
					break;
			
				case 153:
					*uParam2 = 6452;
					break;
			
				case 154:
					*uParam2 = 7269;
					break;
			
				case 155:
					*uParam2 = 7270;
					break;
			
				case 156:
					*uParam2 = 7271;
					break;
			
				case 157:
					*uParam2 = 7272;
					break;
			
				case 158:
					*uParam2 = 7273;
					break;
			
				case 159:
					*uParam2 = 7274;
					break;
			
				case 160:
					*uParam2 = 7275;
					break;
			
				case 161:
					*uParam2 = 7882;
					break;
			
				case 162:
					*uParam2 = 7883;
					break;
			
				case 163:
					*uParam2 = 7884;
					break;
			
				case 164:
					*uParam2 = 7885;
					break;
			
				case 165:
					*uParam2 = 7886;
					break;
			
				case 166:
					*uParam2 = 7887;
					break;
			
				case 167:
					*uParam2 = 7888;
					break;
			
				case 168:
					*uParam2 = 7889;
					break;
			
				case 169:
					*uParam2 = 7890;
					break;
			
				case 170:
					*uParam2 = 7891;
					break;
			
				case 171:
					*uParam2 = 7892;
					break;
			
				case 172:
					*uParam2 = 7893;
					break;
			
				case 173:
					*uParam2 = 7894;
					break;
			
				case 174:
					*uParam2 = 7895;
					break;
			
				case 175:
					*uParam2 = 7896;
					break;
			
				case 176:
					*uParam2 = 8302;
					break;
			
				case 177:
					*uParam2 = 8303;
					break;
			
				case 178:
					*uParam2 = 8304;
					break;
			
				case 179:
					*uParam2 = 8305;
					break;
			
				case 180:
					*uParam2 = 8306;
					break;
			
				case 181:
					*uParam2 = 8307;
					break;
			
				case 182:
					*uParam2 = 8308;
					break;
			
				case 183:
					*uParam2 = 8309;
					break;
			
				case 184:
					*uParam2 = 8310;
					break;
			
				case 185:
					*uParam2 = 8311;
					break;
			
				case 186:
					*uParam2 = 8312;
					break;
			
				case 187:
					*uParam2 = 8313;
					break;
			
				case 188:
					*uParam2 = 8314;
					break;
			
				case 189:
					*uParam2 = 8315;
					break;
			
				case 190:
					*uParam2 = 8316;
					break;
			
				case 191:
					*uParam2 = 8317;
					break;
			
				case 192:
					*uParam2 = 8318;
					break;
			
				case 193:
					*uParam2 = 8319;
					break;
			
				case 194:
					*uParam2 = 8320;
					break;
			
				case 195:
					*uParam2 = 8321;
					break;
			
				case 196:
					*uParam2 = 8322;
					break;
			
				case 197:
					*uParam2 = 8323;
					break;
			
				case 198:
					*uParam2 = 8324;
					break;
			
				case 199:
					*uParam2 = 8325;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8326;
					break;
			
				case 201:
					*uParam2 = 8941;
					break;
			
				case 202:
					*uParam2 = 8942;
					break;
			
				case 203:
					*uParam2 = 8943;
					break;
			
				case 204:
					*uParam2 = 8944;
					break;
			
				case 205:
					*uParam2 = 8945;
					break;
			
				case 206:
					*uParam2 = 9424;
					break;
			
				case 207:
					*uParam2 = 9425;
					break;
			
				case 208:
					*uParam2 = 9426;
					break;
			
				case 209:
					*uParam2 = 9427;
					break;
			
				case 210:
					*uParam2 = 9428;
					break;
			
				case 211:
					*uParam2 = 9429;
					break;
			
				case 212:
					*uParam2 = 9430;
					break;
			
				case 213:
					*uParam2 = 9431;
					break;
			
				case 214:
					*uParam2 = 9432;
					break;
			
				case 215:
					*uParam2 = 9433;
					break;
			
				case 216:
					*uParam2 = 9434;
					break;
			
				case 217:
					*uParam2 = 9435;
					break;
			
				case 218:
					*uParam2 = 9436;
					break;
			
				case 219:
					*uParam2 = 9437;
					break;
			
				case 220:
					*uParam2 = 9438;
					break;
			
				case 221:
					*uParam2 = 9439;
					break;
			
				case 222:
					*uParam2 = 9440;
					break;
			
				case 223:
					*uParam2 = 9441;
					break;
			
				case 224:
					*uParam2 = 9442;
					break;
			
				case 225:
					*uParam2 = 9443;
					break;
			
				case 226:
					*uParam2 = 9444;
					break;
			
				case 227:
					*uParam2 = 9445;
					break;
			
				case 228:
					*uParam2 = 9446;
					break;
			
				case 229:
					*uParam2 = 9447;
					break;
			
				case 230:
					*uParam2 = 9448;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10303;
					break;
			
				case 232:
					*uParam2 = 10304;
					break;
			
				case 233:
					*uParam2 = 10305;
					break;
			
				case 234:
					*uParam2 = 10306;
					break;
			
				case 235:
					*uParam2 = 10307;
					break;
			
				case 236:
					*uParam2 = 10308;
					break;
			
				case 237:
					*uParam2 = 10309;
					break;
			
				case 238:
					*uParam2 = 10310;
					break;
			
				case 239:
					*uParam2 = 10311;
					break;
			
				case 240:
					*uParam2 = 10312;
					break;
			
				case 241:
					*uParam2 = 10313;
					break;
			
				case 242:
					*uParam2 = 10314;
					break;
			
				case 243:
					*uParam2 = 10315;
					break;
			
				case 244:
					*uParam2 = 10316;
					break;
			
				case 245:
					*uParam2 = 10317;
					break;
			
				case 246:
					*uParam2 = 10318;
					break;
			
				case 247:
					*uParam2 = 10319;
					break;
			
				case 248:
					*uParam2 = 10320;
					break;
			
				case 249:
					*uParam2 = 10321;
					break;
			
				case 250:
					*uParam2 = 10322;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10419;
					break;
			
				case 252:
					*uParam2 = 10420;
					break;
			
				case 253:
					*uParam2 = 10421;
					break;
			
				case 254:
					*uParam2 = 10422;
					break;
			
				case 255:
					*uParam2 = 10423;
					break;
			
				case 256:
					*uParam2 = 10424;
					break;
			
				case 257:
					*uParam2 = 10425;
					break;
			
				case 258:
					*uParam2 = 10426;
					break;
			
				case 259:
					*uParam2 = 10427;
					break;
			
				case 260:
					*uParam2 = 10428;
					break;
			
				case 261:
					*uParam2 = 11845;
					break;
			
				case 262:
					*uParam2 = 11846;
					break;
			
				case 263:
					*uParam2 = 11847;
					break;
			
				case 264:
					*uParam2 = 11848;
					break;
			
				case 265:
					*uParam2 = 11849;
					break;
			
				case 266:
					*uParam2 = 11850;
					break;
			
				case 267:
					*uParam2 = 11851;
					break;
			
				case 268:
					*uParam2 = 11852;
					break;
			
				case 269:
					*uParam2 = 11853;
					break;
			
				case 270:
					*uParam2 = 11854;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11876;
					break;
			
				case 272:
					*uParam2 = 11877;
					break;
			
				case 273:
					*uParam2 = 11878;
					break;
			
				case 274:
					*uParam2 = 11879;
					break;
			
				case 275:
					*uParam2 = 11880;
					break;
			
				case 276:
					*uParam2 = 11881;
					break;
			
				case 277:
					*uParam2 = 11882;
					break;
			
				case 278:
					*uParam2 = 11883;
					break;
			
				case 279:
					*uParam2 = 11884;
					break;
			
				case 280:
					*uParam2 = 11885;
					break;
			
				case 281:
					*uParam2 = 11886;
					break;
			
				case 282:
					*uParam2 = 11887;
					break;
			}
			break;
	
		case 2:
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 0:
					*uParam2 = 1767;
					break;
			
				case 1:
					*uParam2 = 1768;
					break;
			
				case 2:
					*uParam2 = 1769;
					break;
			
				case 3:
					*uParam2 = 1770;
					break;
			
				case 4:
					*uParam2 = 1771;
					break;
			
				case 5:
					*uParam2 = 1772;
					break;
			
				case 6:
					*uParam2 = 1780;
					break;
			
				case 7:
					*uParam2 = 1781;
					break;
			
				case 8:
					*uParam2 = 1782;
					break;
			
				case 9:
					*uParam2 = 1783;
					break;
			
				case 10:
					*uParam2 = 1784;
					break;
			
				case 11:
					*uParam2 = 1785;
					break;
			
				case 12:
					*uParam2 = 1786;
					break;
			
				case 13:
					*uParam2 = 1789;
					break;
			
				case 14:
					*uParam2 = 1790;
					break;
			
				case 15:
					*uParam2 = 1891;
					break;
			
				case 16:
					*uParam2 = 1892;
					break;
			
				case 17:
					*uParam2 = 1922;
					break;
			
				case 18:
					*uParam2 = 1940;
					break;
			
				case 19:
					*uParam2 = 1941;
					break;
			
				case 20:
					*uParam2 = 1942;
					break;
			
				case 21:
					*uParam2 = 1943;
					break;
			
				case 22:
					*uParam2 = 1944;
					break;
			
				case 23:
					*uParam2 = 2045;
					break;
			
				case 24:
					*uParam2 = 2046;
					break;
			
				case 25:
					*uParam2 = 2080;
					break;
			
				case 26:
					*uParam2 = 2081;
					break;
			
				case 27:
					*uParam2 = 2082;
					break;
			
				case 28:
					*uParam2 = 2083;
					break;
			
				case 29:
					*uParam2 = 2084;
					break;
			
				case 30:
					*uParam2 = 2085;
					break;
			
				case 31:
					*uParam2 = 2086;
					break;
			
				case 32:
					*uParam2 = 2087;
					break;
			
				case 33:
					*uParam2 = 2088;
					break;
			
				case 34:
					*uParam2 = 2089;
					break;
			
				case 35:
					*uParam2 = 2328;
					break;
			
				case 36:
					*uParam2 = 2329;
					break;
			
				case 37:
					*uParam2 = 2395;
					break;
			
				case 38:
					*uParam2 = 2396;
					break;
			
				case 39:
					*uParam2 = 2397;
					break;
			
				case 40:
					*uParam2 = 2398;
					break;
			
				case 41:
					*uParam2 = 2463;
					break;
			
				case 42:
					*uParam2 = 2464;
					break;
			
				case 43:
					*uParam2 = 2465;
					break;
			
				case 44:
					*uParam2 = 2466;
					break;
			
				case 45:
					*uParam2 = 2467;
					break;
			
				case 46:
					*uParam2 = 2468;
					break;
			
				case 47:
					*uParam2 = 2469;
					break;
			
				case 48:
					*uParam2 = 2470;
					break;
			
				case 49:
					*uParam2 = 2471;
					break;
			
				case 50:
					*uParam2 = 2472;
					break;
			
				case 51:
					*uParam2 = 2603;
					break;
			
				case 52:
					*uParam2 = 2604;
					break;
			
				case 53:
					*uParam2 = 2605;
					break;
			
				case 54:
					*uParam2 = 2606;
					break;
			
				case 55:
					*uParam2 = 2607;
					break;
			
				case 56:
					*uParam2 = 2608;
					break;
			
				case 57:
					*uParam2 = 2609;
					break;
			
				case 58:
					*uParam2 = 2610;
					break;
			
				case 59:
					*uParam2 = 2611;
					break;
			
				case 60:
					*uParam2 = 2612;
					break;
			
				case 61:
					*uParam2 = 2613;
					break;
			
				case 62:
					*uParam2 = 3205;
					break;
			
				case 63:
					*uParam2 = 3206;
					break;
			
				case 64:
					*uParam2 = 3207;
					break;
			
				case 65:
					*uParam2 = 3208;
					break;
			
				case 66:
					*uParam2 = 3209;
					break;
			
				case 67:
					*uParam2 = 3210;
					break;
			
				case 68:
					*uParam2 = 3682;
					break;
			
				case 69:
					*uParam2 = 3683;
					break;
			
				case 70:
					*uParam2 = 3684;
					break;
			
				case 71:
					*uParam2 = 3685;
					break;
			
				case 72:
					*uParam2 = 3686;
					break;
			
				case 73:
					*uParam2 = 3687;
					break;
			
				case 74:
					*uParam2 = 3688;
					break;
			
				case 75:
					*uParam2 = 3689;
					break;
			
				case 76:
					*uParam2 = 3690;
					break;
			
				case 77:
					*uParam2 = 3691;
					break;
			
				case 78:
					*uParam2 = 3803;
					break;
			
				case 79:
					*uParam2 = 3804;
					break;
			
				case 80:
					*uParam2 = 3805;
					break;
			
				case 81:
					*uParam2 = 3806;
					break;
			
				case 82:
					*uParam2 = 3807;
					break;
			
				case 83:
					*uParam2 = 3808;
					break;
			
				case 84:
					*uParam2 = 3809;
					break;
			
				case 85:
					*uParam2 = 3810;
					break;
			
				case 86:
					*uParam2 = 3908;
					break;
			
				case 87:
					*uParam2 = 3909;
					break;
			
				case 88:
					*uParam2 = 3910;
					break;
			
				case 89:
					*uParam2 = 5352;
					break;
			
				case 90:
					*uParam2 = 5353;
					break;
			
				case 91:
					*uParam2 = 5354;
					break;
			
				case 92:
					*uParam2 = 5355;
					break;
			
				case 93:
					*uParam2 = 5356;
					break;
			
				case 94:
					*uParam2 = 5357;
					break;
			
				case 95:
					*uParam2 = 5358;
					break;
			
				case 96:
					*uParam2 = 5359;
					break;
			
				case 97:
					*uParam2 = 5360;
					break;
			
				case 98:
					*uParam2 = 5361;
					break;
			
				case 99:
					*uParam2 = 5362;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 100:
					*uParam2 = 5363;
					break;
			
				case 101:
					*uParam2 = 5420;
					break;
			
				case 102:
					*uParam2 = 5421;
					break;
			
				case 103:
					*uParam2 = 5422;
					break;
			
				case 104:
					*uParam2 = 5423;
					break;
			
				case 105:
					*uParam2 = 5424;
					break;
			
				case 106:
					*uParam2 = 5425;
					break;
			
				case 107:
					*uParam2 = 5426;
					break;
			
				case 108:
					*uParam2 = 5427;
					break;
			
				case 109:
					*uParam2 = 5428;
					break;
			
				case 110:
					*uParam2 = 5429;
					break;
			
				case 111:
					*uParam2 = 5430;
					break;
			
				case 112:
					*uParam2 = 5431;
					break;
			
				case 113:
					*uParam2 = 5432;
					break;
			
				case 114:
					*uParam2 = 5433;
					break;
			
				case 115:
					*uParam2 = 5434;
					break;
			
				case 116:
					*uParam2 = 5435;
					break;
			
				case 117:
					*uParam2 = 5436;
					break;
			
				case 118:
					*uParam2 = 5437;
					break;
			
				case 119:
					*uParam2 = 5438;
					break;
			
				case 120:
					*uParam2 = 5439;
					break;
			
				case 121:
					*uParam2 = 5440;
					break;
			
				case 122:
					*uParam2 = 5441;
					break;
			
				case 123:
					*uParam2 = 5442;
					break;
			
				case 124:
					*uParam2 = 6140;
					break;
			
				case 125:
					*uParam2 = 6141;
					break;
			
				case 126:
					*uParam2 = 6142;
					break;
			
				case 127:
					*uParam2 = 6143;
					break;
			
				case 128:
					*uParam2 = 6144;
					break;
			
				case 129:
					*uParam2 = 6145;
					break;
			
				case 130:
					*uParam2 = 6146;
					break;
			
				case 131:
					*uParam2 = 6147;
					break;
			
				case 132:
					*uParam2 = 6148;
					break;
			
				case 133:
					*uParam2 = 6149;
					break;
			
				case 134:
					*uParam2 = 6150;
					break;
			
				case 135:
					*uParam2 = 6151;
					break;
			
				case 136:
					*uParam2 = 6152;
					break;
			
				case 137:
					*uParam2 = 6153;
					break;
			
				case 138:
					*uParam2 = 6154;
					break;
			
				case 139:
					*uParam2 = 6453;
					break;
			
				case 140:
					*uParam2 = 6454;
					break;
			
				case 141:
					*uParam2 = 6455;
					break;
			
				case 142:
					*uParam2 = 6456;
					break;
			
				case 143:
					*uParam2 = 6457;
					break;
			
				case 144:
					*uParam2 = 6458;
					break;
			
				case 145:
					*uParam2 = 6459;
					break;
			
				case 146:
					*uParam2 = 6460;
					break;
			
				case 147:
					*uParam2 = 6461;
					break;
			
				case 148:
					*uParam2 = 6462;
					break;
			
				case 149:
					*uParam2 = 6463;
					break;
			
				case 150:
					*uParam2 = 6464;
					break;
			
				case 151:
					*uParam2 = 6465;
					break;
			
				case 152:
					*uParam2 = 6466;
					break;
			
				case 153:
					*uParam2 = 6467;
					break;
			
				case 154:
					*uParam2 = 7276;
					break;
			
				case 155:
					*uParam2 = 7277;
					break;
			
				case 156:
					*uParam2 = 7278;
					break;
			
				case 157:
					*uParam2 = 7279;
					break;
			
				case 158:
					*uParam2 = 7280;
					break;
			
				case 159:
					*uParam2 = 7281;
					break;
			
				case 160:
					*uParam2 = 7282;
					break;
			
				case 161:
					*uParam2 = 7897;
					break;
			
				case 162:
					*uParam2 = 7898;
					break;
			
				case 163:
					*uParam2 = 7899;
					break;
			
				case 164:
					*uParam2 = 7900;
					break;
			
				case 165:
					*uParam2 = 7901;
					break;
			
				case 166:
					*uParam2 = 7902;
					break;
			
				case 167:
					*uParam2 = 7903;
					break;
			
				case 168:
					*uParam2 = 7904;
					break;
			
				case 169:
					*uParam2 = 7905;
					break;
			
				case 170:
					*uParam2 = 7906;
					break;
			
				case 171:
					*uParam2 = 7907;
					break;
			
				case 172:
					*uParam2 = 7908;
					break;
			
				case 173:
					*uParam2 = 7909;
					break;
			
				case 174:
					*uParam2 = 7910;
					break;
			
				case 175:
					*uParam2 = 7911;
					break;
			
				case 176:
					*uParam2 = 8327;
					break;
			
				case 177:
					*uParam2 = 8328;
					break;
			
				case 178:
					*uParam2 = 8329;
					break;
			
				case 179:
					*uParam2 = 8330;
					break;
			
				case 180:
					*uParam2 = 8331;
					break;
			
				case 181:
					*uParam2 = 8332;
					break;
			
				case 182:
					*uParam2 = 8333;
					break;
			
				case 183:
					*uParam2 = 8334;
					break;
			
				case 184:
					*uParam2 = 8335;
					break;
			
				case 185:
					*uParam2 = 8336;
					break;
			
				case 186:
					*uParam2 = 8337;
					break;
			
				case 187:
					*uParam2 = 8338;
					break;
			
				case 188:
					*uParam2 = 8339;
					break;
			
				case 189:
					*uParam2 = 8340;
					break;
			
				case 190:
					*uParam2 = 8341;
					break;
			
				case 191:
					*uParam2 = 8342;
					break;
			
				case 192:
					*uParam2 = 8343;
					break;
			
				case 193:
					*uParam2 = 8344;
					break;
			
				case 194:
					*uParam2 = 8345;
					break;
			
				case 195:
					*uParam2 = 8346;
					break;
			
				case 196:
					*uParam2 = 8347;
					break;
			
				case 197:
					*uParam2 = 8348;
					break;
			
				case 198:
					*uParam2 = 8349;
					break;
			
				case 199:
					*uParam2 = 8350;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 200:
					*uParam2 = 8351;
					break;
			
				case 201:
					*uParam2 = 8946;
					break;
			
				case 202:
					*uParam2 = 8947;
					break;
			
				case 203:
					*uParam2 = 8948;
					break;
			
				case 204:
					*uParam2 = 8949;
					break;
			
				case 205:
					*uParam2 = 8950;
					break;
			
				case 206:
					*uParam2 = 9449;
					break;
			
				case 207:
					*uParam2 = 9450;
					break;
			
				case 208:
					*uParam2 = 9451;
					break;
			
				case 209:
					*uParam2 = 9452;
					break;
			
				case 210:
					*uParam2 = 9453;
					break;
			
				case 211:
					*uParam2 = 9454;
					break;
			
				case 212:
					*uParam2 = 9455;
					break;
			
				case 213:
					*uParam2 = 9456;
					break;
			
				case 214:
					*uParam2 = 9457;
					break;
			
				case 215:
					*uParam2 = 9458;
					break;
			
				case 216:
					*uParam2 = 9459;
					break;
			
				case 217:
					*uParam2 = 9460;
					break;
			
				case 218:
					*uParam2 = 9461;
					break;
			
				case 219:
					*uParam2 = 9462;
					break;
			
				case 220:
					*uParam2 = 9463;
					break;
			
				case 221:
					*uParam2 = 9464;
					break;
			
				case 222:
					*uParam2 = 9465;
					break;
			
				case 223:
					*uParam2 = 9466;
					break;
			
				case 224:
					*uParam2 = 9467;
					break;
			
				case 225:
					*uParam2 = 9468;
					break;
			
				case 226:
					*uParam2 = 9469;
					break;
			
				case 227:
					*uParam2 = 9470;
					break;
			
				case 228:
					*uParam2 = 9471;
					break;
			
				case 229:
					*uParam2 = 9472;
					break;
			
				case 230:
					*uParam2 = 9473;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 231:
					*uParam2 = 10323;
					break;
			
				case 232:
					*uParam2 = 10324;
					break;
			
				case 233:
					*uParam2 = 10325;
					break;
			
				case 234:
					*uParam2 = 10326;
					break;
			
				case 235:
					*uParam2 = 10327;
					break;
			
				case 236:
					*uParam2 = 10328;
					break;
			
				case 237:
					*uParam2 = 10329;
					break;
			
				case 238:
					*uParam2 = 10330;
					break;
			
				case 239:
					*uParam2 = 10331;
					break;
			
				case 240:
					*uParam2 = 10332;
					break;
			
				case 241:
					*uParam2 = 10333;
					break;
			
				case 242:
					*uParam2 = 10334;
					break;
			
				case 243:
					*uParam2 = 10335;
					break;
			
				case 244:
					*uParam2 = 10336;
					break;
			
				case 245:
					*uParam2 = 10337;
					break;
			
				case 246:
					*uParam2 = 10338;
					break;
			
				case 247:
					*uParam2 = 10339;
					break;
			
				case 248:
					*uParam2 = 10340;
					break;
			
				case 249:
					*uParam2 = 10341;
					break;
			
				case 250:
					*uParam2 = 10342;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 251:
					*uParam2 = 10429;
					break;
			
				case 252:
					*uParam2 = 10430;
					break;
			
				case 253:
					*uParam2 = 10431;
					break;
			
				case 254:
					*uParam2 = 10432;
					break;
			
				case 255:
					*uParam2 = 10433;
					break;
			
				case 256:
					*uParam2 = 10434;
					break;
			
				case 257:
					*uParam2 = 10435;
					break;
			
				case 258:
					*uParam2 = 10436;
					break;
			
				case 259:
					*uParam2 = 10437;
					break;
			
				case 260:
					*uParam2 = 10438;
					break;
			
				case 261:
					*uParam2 = 11855;
					break;
			
				case 262:
					*uParam2 = 11856;
					break;
			
				case 263:
					*uParam2 = 11857;
					break;
			
				case 264:
					*uParam2 = 11858;
					break;
			
				case 265:
					*uParam2 = 11859;
					break;
			
				case 266:
					*uParam2 = 11860;
					break;
			
				case 267:
					*uParam2 = 11861;
					break;
			
				case 268:
					*uParam2 = 11862;
					break;
			
				case 269:
					*uParam2 = 11863;
					break;
			
				case 270:
					*uParam2 = 11864;
					break;
			}
		
			switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f))
			{
				case 271:
					*uParam2 = 11888;
					break;
			
				case 272:
					*uParam2 = 11889;
					break;
			
				case 273:
					*uParam2 = 11890;
					break;
			
				case 274:
					*uParam2 = 11891;
					break;
			
				case 275:
					*uParam2 = 11892;
					break;
			
				case 276:
					*uParam2 = 11893;
					break;
			
				case 277:
					*uParam2 = 11894;
					break;
			
				case 278:
					*uParam2 = 11895;
					break;
			
				case 279:
					*uParam2 = 11896;
					break;
			
				case 280:
					*uParam2 = 11897;
					break;
			
				case 281:
					*uParam2 = 11898;
					break;
			
				case 282:
					*uParam2 = 11899;
					break;
			}
			break;
	}

	*uParam3 = fmMaleShopPedApparelItemIndex % 32;
	return *uParam2 != 14192;
}

BOOL func_219(int iParam0) // Position - 0x1B72F Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

int func_220(int iParam0) // Position - 0x1B73D Hash - 0xE4C61EBD ^0xE4C61EBD
{
	switch (iParam0)
	{
		case -1:
			return 0;
	
		case 0:
			return 0;
	
		case 1:
			return 1;
	
		case 2:
			return 2;
	
		case 3:
			return 3;
	
		case 4:
			return 4;
	
		case 5:
			return 5;
	
		case 6:
			return 6;
	
		case 7:
			return 7;
	
		case 8:
			return 8;
	
		case 9:
			return 0;
	
		case 10:
			return 1;
	
		case 11:
			return 0;
	
		case 12:
			return 0;
	
		case 13:
			return 0;
	}

	return 0;
}

void func_221(int iParam0, Hash hParam1) // Position - 0x1B811 Hash - 0xEDA496E8 ^0xFA4009F9
{
	int num;

	num = 0;
	Global_78341[0 /*14*/].f_5 = 4;
	func_222(num, iParam0, 0, hParam1);
	return;
}

void func_222(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0x1B831 Hash - 0xE3509264 ^0xCA79B364
{
	int num;
	int num2;
	Hash hash;
	Ped unk;
	Ped unk2;
	Hash unk3;
	int unk4;
	int unk5;
	int unk6;
	Hash unk7;
	int unk8;
	int unk9;

	num = iParam1 - iParam2;
	num = num;

	if (num < 0)
		return;

	num2 = Global_78341[0 /*14*/].f_5;

	if (iParam0 == 12)
	{
		ped = iParam1 - iParam2;
	
		if (ped >= 0)
		{
			ped2 = FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
		
			if (ped2 > ped)
			{
				PED::APPLY_PED_BLOOD_BY_ZONE(ped, &hash);
				Global_2883588 = hash.f_1;
				Global_2883589 = hash;
				func_212(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
				return;
			}
		}
	}
	else if (iParam0 == 13)
	{
		func_212(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
	}
	else if (iParam0 == 14)
	{
		FILES::INIT_SHOP_PED_PROP(&outProp);
		componentId = iParam1 - iParam2;
	
		if (componentId >= 0)
		{
			num4 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
		
			if (num4 > componentId)
			{
				FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
			
				if (outProp.f_6 == 0)
					num3 = 9;
				else if (outProp.f_6 == 1)
					num3 = 10;
				else if (outProp.f_6 == 2)
					num3 = 2;
				else if (outProp.f_6 == 3)
					num3 = 3;
				else if (outProp.f_6 == 4)
					num3 = 4;
				else if (outProp.f_6 == 5)
					num3 = 5;
				else if (outProp.f_6 == 6)
					num3 = 6;
				else if (outProp.f_6 == 7)
					num3 = 7;
				else if (outProp.f_6 == 8)
					num3 = 8;
				else
					num3 = -1;
			
				Global_2883588 = outProp.f_1;
				Global_2883589 = outProp;
				func_212(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, -2050632586, 0), num3, 2, outProp.f_1 != 0);
				return;
			}
		}
	}
	else
	{
		FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
	
		if (hParam3 != -1 && Global_78539)
		{
			FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
			Global_2883588 = outComponent.f_1;
			Global_2883589 = outComponent;
			func_212(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, -2050632586, 0), -1, 2, outComponent.f_1 != 0);
			return;
		}
	
		componentId2 = iParam1 - iParam2;
	
		if (componentId2 >= 0)
		{
			num5 = FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_182(iParam0));
		
			if (num5 > componentId2)
			{
				FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
				Global_2883588 = outComponent.f_1;
				Global_2883589 = outComponent;
				func_212(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, -2050632586, 0), -1, 2, outComponent.f_1 != 0);
				return;
			}
		}
	}

	return;
}

void func_223(int iParam0, Hash hParam1) // Position - 0x1BAB8 Hash - 0x5C1D2F91 ^0x5C1D2F91
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num6, iParam0, 9, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_224(int iParam0, Hash hParam1) // Position - 0x1BBBB Hash - 0x34BAB0FD ^0x34BAB0FD
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Indie Heart"), 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Kitten"), 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Vacation"), 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Girly"), 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Standout"), 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Streetwise"), 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Butterfly"), 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Festival"), 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Interview"), 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Red Hot"), 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Upmarket"), 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Power Suit"), 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Versatile"), 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Egyptian"), 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Chalet"), 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Cougar"), 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Spring Break"), 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Yacht Club"), 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Holla Over"), 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Tough Chick"), 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Chica"), 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Tomboy"), 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Basics"), 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Young Luck"), 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Workout"), 16);
			break;
	
		case 26:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The She Devil"), 16);
			break;
	
		case 27:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Beach Beauty"), 16);
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num6, iParam0, 28, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_225(int iParam0, Hash hParam1) // Position - 0x1BE9A Hash - 0x859154FC ^0x859154FC
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (iParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Ear Defenders"), 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Magenta Ear Defenders"), 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Ear Defenders"), 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow Ear Defenders"), 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Desert Camo Ear Defenders"), 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Ear Defenders"), 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Ear Defenders"), 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Ear Defenders"), 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_0", 16);
			num = 2;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Accent Cowgirl Hat"), 16);
			num = 2;
			num2 = 1;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_2", 16);
			num = 2;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_3", 16);
			num = 2;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_4", 16);
			num = 2;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_5", 16);
			num = 2;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_6", 16);
			num = 2;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_2_7", 16);
			num = 2;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_1", 16);
			num = 3;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_2", 16);
			num = 3;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Plaid Canvas Hat"), 16);
			num = 3;
			num2 = 7;
			value = 120;
			num3 = 0;
			num6 = 1;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black LS Fitted Cap"), 16);
			num = 4;
			num2 = 0;
			value = 400;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fruntalot Fitted Cap"), 16);
			num = 4;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Broker Fitted Cap"), 16);
			num = 4;
			num2 = 2;
			value = 375;
			num3 = 0;
			num6 = 1;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("SA Fitted Cap"), 16);
			num = 4;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("SA Boars Fitted Cap"), 16);
			num = 4;
			num2 = 4;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stank Fitted Cap"), 16);
			num = 4;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Mist XI Fitted Cap"), 16);
			num = 4;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("LS Corkers Fitted Cap"), 16);
			num = 4;
			num2 = 7;
			value = 325;
			num3 = 0;
			num6 = 1;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rearwall Black Beanie"), 16);
			num = 5;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crevis Ash Beanie"), 16);
			num = 5;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crevis Pink Beanie"), 16);
			num = 5;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("LS Panic Beanie"), 16);
			num = 5;
			num2 = 3;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("SA Beanie"), 16);
			num = 5;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Blue Beanie"), 16);
			num = 5;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rearwall Lime Beanie"), 16);
			num = 5;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Plaid Beanie"), 16);
			num = 5;
			num2 = 7;
			value = 255;
			num3 = 0;
			num6 = 1;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Military Cap"), 16);
			num = 6;
			num2 = 0;
			value = 360;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Military Cap"), 16);
			num = 6;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Leopard Military Cap"), 16);
			num = 6;
			num2 = 2;
			value = 3970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Military Cap"), 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Denim Military Cap"), 16);
			num = 6;
			num2 = 4;
			value = 1355;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Field Camo Military Cap"), 16);
			num = 6;
			num2 = 5;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Desert Camo Military Cap"), 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Woodland Camo Military Cap"), 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Flat Cap"), 16);
			num = 7;
			num2 = 0;
			value = 230;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Flat Cap"), 16);
			num = 7;
			num2 = 1;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Plaid Flat Cap"), 16);
			num = 7;
			num2 = 2;
			value = 515;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Plaid Flat Cap"), 16);
			num = 7;
			num2 = 3;
			value = 545;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Flat Cap"), 16);
			num = 7;
			num2 = 4;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Flat Cap"), 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Plaid Flat Cap"), 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fruity Plaid Flat Cap"), 16);
			num = 7;
			num2 = 7;
			value = 1440;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fruit Cap"), 16);
			num = 9;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("247 Cap"), 16);
			num = 9;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fred's Cap"), 16);
			num = 9;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("US Post LS Cap"), 16);
			num = 9;
			num2 = 3;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Swallow Cap"), 16);
			num = 9;
			num2 = 4;
			value = 50;
			num3 = 0;
			num6 = 1;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("CNT Cap"), 16);
			num = 9;
			num2 = 5;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Peachy Chics Snakeskin Cap"), 16);
			num = 9;
			num2 = 6;
			value = 575;
			num3 = 0;
			num6 = 1;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Peachy Chics Leopard Cap"), 16);
			num = 9;
			num2 = 7;
			value = 605;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_5", 16);
			num = 10;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Patterned Cap"), 16);
			num = 10;
			num2 = 7;
			value = 285;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Sun Hat"), 16);
			num = 11;
			num2 = 1;
			value = 2125;
			num3 = 0;
			num6 = 1;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Saggy Beanie"), 16);
			num = 12;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Saggy Beanie"), 16);
			num = 12;
			num2 = 6;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yeti Saggy Beanie"), 16);
			num = 12;
			num2 = 7;
			value = 295;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Straw Hat"), 16);
			num = 13;
			num2 = 0;
			value = 195;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone Straw Hat"), 16);
			num = 13;
			num2 = 1;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Straw Hat"), 16);
			num = 13;
			num2 = 2;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Safari Straw Hat"), 16);
			num = 13;
			num2 = 3;
			value = 855;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Patterned Straw Hat"), 16);
			num = 13;
			num2 = 4;
			value = 1615;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Striped Straw Hat"), 16);
			num = 13;
			num2 = 5;
			value = 1130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Straw Hat"), 16);
			num = 13;
			num2 = 6;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Straw Hat"), 16);
			num = 13;
			num2 = 7;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Beret"), 16);
			num = 14;
			num2 = 0;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Cherry Beret"), 16);
			num = 14;
			num2 = 1;
			value = 250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Beret"), 16);
			num = 14;
			num2 = 2;
			value = 110;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Beret"), 16);
			num = 14;
			num2 = 3;
			value = 145;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Beret"), 16);
			num = 14;
			num2 = 4;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Beret"), 16);
			num = 14;
			num2 = 5;
			value = 105;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Beret"), 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Magenta Beret"), 16);
			num = 14;
			num2 = 7;
			value = 115;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off White Headphones"), 16);
			num = 15;
			num2 = 0;
			value = 390;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Black Headphones"), 16);
			num = 15;
			num2 = 1;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Red Headphones"), 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Gray Headphones"), 16);
			num = 15;
			num2 = 3;
			value = 425;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Navy Headphones"), 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Purple Headphones"), 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Pink Headphones"), 16);
			num = 15;
			num2 = 6;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Orange Headphones"), 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Yellow Helmet"), 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Blue Helmet"), 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Orange Helmet"), 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Green Helmet"), 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Red Helmet"), 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Black Helmet"), 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Helmet"), 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Lilac Helmet"), 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Open-Face Helmet"), 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Open-Face Helmet"), 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Open-Face Helmet"), 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Open-Face Helmet"), 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Open-Face Helmet"), 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Open-Face Helmet"), 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Open-Face Helmet"), 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Open-Face Helmet"), 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Shatter Pattern Helmet"), 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stars Helmet"), 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Squared Helmet"), 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crimson Helmet"), 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Skull Helmet"), 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ace of Spades Helmet"), 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Flamejob Helmet"), 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Helmet"), 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (iParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hornet Sports Shades"), 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone Sports Shades"), 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Sports Shades"), 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Sports Shades"), 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Marble Sports Shades"), 16);
			num = 0;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Sports Shades"), 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Topaz Sports Shades"), 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beige Sports Shades"), 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_8", 16);
			num = 0;
			num2 = 8;
			value = 820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_9", 16);
			num = 0;
			num2 = 9;
			value = 435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_0_10", 16);
			num = 0;
			num2 = 10;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Copper Marbles"), 16);
			num = 1;
			num2 = 0;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Tint Marbles"), 16);
			num = 1;
			num2 = 1;
			value = 165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Marbles"), 16);
			num = 1;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Marbles"), 16);
			num = 1;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Teal Marbles"), 16);
			num = 1;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Tint Marbles"), 16);
			num = 1;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Marbles"), 16);
			num = 1;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Tint Marbles"), 16);
			num = 1;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_8", 16);
			num = 1;
			num2 = 8;
			value = 970;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_9", 16);
			num = 1;
			num2 = 9;
			value = 585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_1_10", 16);
			num = 1;
			num2 = 10;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Marble Mademoiselles"), 16);
			num = 2;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Copper Mademoiselles"), 16);
			num = 2;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Tint Mademoiselles"), 16);
			num = 2;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Tint Mademoiselles"), 16);
			num = 2;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Walnut Mademoiselles"), 16);
			num = 2;
			num2 = 4;
			value = 595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Mademoiselles"), 16);
			num = 2;
			num2 = 5;
			value = 160;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Vintage Red Mademoiselles"), 16);
			num = 2;
			num2 = 6;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Mademoiselles"), 16);
			num = 2;
			num2 = 7;
			value = 590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 1125;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 740;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 805;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Zebra Shields"), 16);
			num = 3;
			num2 = 0;
			value = 6250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ombre Shields"), 16);
			num = 3;
			num2 = 1;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Flame Shields"), 16);
			num = 3;
			num2 = 2;
			value = 3585;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Violet Shields"), 16);
			num = 3;
			num2 = 3;
			value = 4075;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sun Shields"), 16);
			num = 3;
			num2 = 4;
			value = 4935;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Accent Shields"), 16);
			num = 3;
			num2 = 5;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Party Shields"), 16);
			num = 3;
			num2 = 6;
			value = 5600;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Shields"), 16);
			num = 3;
			num2 = 7;
			value = 4790;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Deep Walnut Retro"), 16);
			num = 4;
			num2 = 0;
			value = 2245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Marble Retro"), 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beige Retro"), 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Aqua Retro"), 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Dice Retro"), 16);
			num = 4;
			num2 = 4;
			value = 1205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Retro"), 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Toffee Retro"), 16);
			num = 4;
			num2 = 6;
			value = 2215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Retro"), 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_0", 16);
			num = 5;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_1", 16);
			num = 5;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_9", 16);
			num = 5;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Tint Bugs"), 16);
			num = 6;
			num2 = 0;
			value = 5000;
			num3 = 1;
			num6 = 3;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_8", 16);
			num = 6;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_9", 16);
			num = 6;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_6_10", 16);
			num = 6;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Champagne Figure 8s"), 16);
			num = 7;
			num2 = 0;
			value = 4815;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Platinum Figure 8s"), 16);
			num = 7;
			num2 = 1;
			value = 4795;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sapphire Figure 8s"), 16);
			num = 7;
			num2 = 2;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Amethyst Figure 8s"), 16);
			num = 7;
			num2 = 3;
			value = 4305;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Figure 8s"), 16);
			num = 7;
			num2 = 4;
			value = 4965;
			num3 = 1;
			num6 = 3;
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Figure 8s"), 16);
			num = 7;
			num2 = 5;
			value = 480;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Figure 8s"), 16);
			num = 7;
			num2 = 6;
			value = 465;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Garnet Figure 8s"), 16);
			num = 7;
			num2 = 7;
			value = 4320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 2390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 2005;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Tint Squared"), 16);
			num = 8;
			num2 = 0;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Lime Tint Shooters"), 16);
			num = 9;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Tint Shooters"), 16);
			num = 9;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Shooters"), 16);
			num = 9;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tropic Shooters"), 16);
			num = 9;
			num2 = 3;
			value = 570;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fly Shooters"), 16);
			num = 9;
			num2 = 4;
			value = 525;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crimson Shooters"), 16);
			num = 9;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Tint Shooters"), 16);
			num = 9;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Shooters"), 16);
			num = 9;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Luxury Ice Sports"), 16);
			num = 10;
			num2 = 0;
			value = 4065;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Sports"), 16);
			num = 10;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Sports"), 16);
			num = 10;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Luxury Cowhide Sports"), 16);
			num = 10;
			num2 = 3;
			value = 4275;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Sports"), 16);
			num = 10;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Pattern Sports"), 16);
			num = 10;
			num2 = 5;
			value = 80;
			num3 = 1;
			num6 = 3;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Pattern Sports"), 16);
			num = 10;
			num2 = 6;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Pattern Sports"), 16);
			num = 10;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 276:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pewter Aviators"), 16);
			num = 11;
			num2 = 0;
			value = 3660;
			num3 = 1;
			num6 = 3;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Aviators"), 16);
			num = 11;
			num2 = 1;
			value = 4165;
			num3 = 1;
			num6 = 3;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Bronze Aviators"), 16);
			num = 11;
			num2 = 2;
			value = 3670;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Aviators"), 16);
			num = 11;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Neon Aviators"), 16);
			num = 11;
			num2 = 4;
			value = 3620;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Copper Aviators"), 16);
			num = 11;
			num2 = 5;
			value = 3610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Aviators"), 16);
			num = 11;
			num2 = 6;
			value = 4140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Aviators"), 16);
			num = 11;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_12_7", 16);
			num = 12;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_0", 16);
			num = 13;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_1", 16);
			num = 13;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_2", 16);
			num = 13;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_3", 16);
			num = 13;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_4", 16);
			num = 13;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_5", 16);
			num = 13;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_6", 16);
			num = 13;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_13_7", 16);
			num = 13;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Cat Eyes"), 16);
			num = 14;
			num2 = 0;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Marble Cat Eyes"), 16);
			num = 14;
			num2 = 1;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Cat Eyes"), 16);
			num = 14;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Marble Cat Eyes"), 16);
			num = 14;
			num2 = 3;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Cat Eyes"), 16);
			num = 14;
			num2 = 4;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Teal Cat Eyes"), 16);
			num = 14;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Cat Eyes"), 16);
			num = 14;
			num2 = 6;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Cat Eyes"), 16);
			num = 14;
			num2 = 7;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_8", 16);
			num = 14;
			num2 = 8;
			value = 1490;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_9", 16);
			num = 14;
			num2 = 9;
			value = 1105;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXF_G_14_10", 16);
			num = 14;
			num2 = 10;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_3", 16);
			num = 15;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pewter Watch"), 16);
			num = 0;
			num2 = 4;
			value = 825;
			num3 = 6;
			num6 = 4;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_1", 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, "W_FMF_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = iParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2054[num7] * Global_296940.f_26);
		}
	}
	else if (num6 == 2)
	{
		num8 = iParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2175[num8] * Global_296940.f_27);
	}
	else if (num6 == 3)
	{
		num9 = iParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2200[num9] * Global_296940.f_56);
	}
	else if (num6 == 4)
	{
		num10 = iParam0 - 319;
	
		if (num10 >= 0 && num10 < 10)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2329[num10] * Global_296940.f_28);
	}

	if (iParam0 >= 327)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num5, iParam0, 327, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, -1757550583, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_26);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, 97230661, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_56);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, 1147826474, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_28);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_226(int iParam0, Hash hParam1) // Position - 0x1EC70 Hash - 0x532BD76A ^0x96AC33C9
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("No Crew Emblem"), 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 1;
			num3 = 0;
			num = 10000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Small Crew Emblem"), 16);
			num2 = 2;
			num3 = 0;
			num = 5000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 3;
			num3 = 0;
			num = 10000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Small Crew Emblem"), 16);
			num2 = 4;
			num3 = 0;
			num = 5000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 5;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num6, iParam0, 6, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_227(int iParam0, Hash hParam1) // Position - 0x1ED75 Hash - 0x31CAA5FE ^0x31CAA5FE
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
		
			if (Global_262145.f_4151 != -1)
				value = Global_262145.f_4151;
			else
				value = 310;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
		
			if (Global_262145.f_4152 != -1)
				value = Global_262145.f_4152;
			else
				value = 125;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
		
			if (Global_262145.f_4153 != -1)
				value = Global_262145.f_4153;
			else
				value = 145;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
		
			if (Global_262145.f_4154 != -1)
				value = Global_262145.f_4154;
			else
				value = 130;
			break;
	
		case 5:
			num = 1;
			num2 = 4;
		
			if (Global_262145.f_4155 != -1)
				value = Global_262145.f_4155;
			else
				value = 265;
			break;
	
		case 6:
			num = 1;
			num2 = 5;
		
			if (Global_262145.f_4156 != -1)
				value = Global_262145.f_4156;
			else
				value = 280;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
		
			if (Global_262145.f_4157 != -1)
				value = Global_262145.f_4157;
			else
				value = 295;
			break;
	
		case 8:
			num = 2;
			num2 = 1;
		
			if (Global_262145.f_4158 != -1)
				value = Global_262145.f_4158;
			else
				value = 95;
			break;
	
		case 9:
			num = 2;
			num2 = 2;
		
			if (Global_262145.f_4159 != -1)
				value = Global_262145.f_4159;
			else
				value = 85;
			break;
	
		case 10:
			num = 2;
			num2 = 3;
		
			if (Global_262145.f_4160 != -1)
				value = Global_262145.f_4160;
			else
				value = 95;
			break;
	
		case 11:
			num = 2;
			num2 = 4;
		
			if (Global_262145.f_4161 != -1)
				value = Global_262145.f_4161;
			else
				value = 105;
			break;
	
		case 12:
			num = 2;
			num2 = 5;
		
			if (Global_262145.f_4162 != -1)
				value = Global_262145.f_4162;
			else
				value = 95;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_4163 != -1)
				value = Global_262145.f_4163;
			else
				value = 35;
			break;
	
		case 14:
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_4164 != -1)
				value = Global_262145.f_4164;
			else
				value = 35;
			break;
	
		case 15:
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_4165 != -1)
				value = Global_262145.f_4165;
			else
				value = 30;
			break;
	
		case 16:
			num = 3;
			num2 = 3;
		
			if (Global_262145.f_4166 != -1)
				value = Global_262145.f_4166;
			else
				value = 40;
			break;
	
		case 17:
			num = 3;
			num2 = 4;
		
			if (Global_262145.f_4167 != -1)
				value = Global_262145.f_4167;
			else
				value = 35;
			break;
	
		case 18:
			num = 3;
			num2 = 5;
		
			if (Global_262145.f_4168 != -1)
				value = Global_262145.f_4168;
			else
				value = 35;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_4169 != -1)
				value = Global_262145.f_4169;
			else
				value = 355;
			break;
	
		case 22:
			num = 4;
			num2 = 3;
		
			if (Global_262145.f_4170 != -1)
				value = Global_262145.f_4170;
			else
				value = 370;
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 4;
		
			if (Global_262145.f_4171 != -1)
				value = Global_262145.f_4171;
			else
				value = 110;
			break;
	
		case 30:
			num = 5;
			num2 = 5;
		
			if (Global_262145.f_4172 != -1)
				value = Global_262145.f_4172;
			else
				value = 160;
			break;
	
		case 31:
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_4173 != -1)
				value = Global_262145.f_4173;
			else
				value = 385;
			break;
	
		case 32:
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_4174 != -1)
				value = Global_262145.f_4174;
			else
				value = 190;
			break;
	
		case 33:
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_4175 != -1)
				value = Global_262145.f_4175;
			else
				value = 235;
			break;
	
		case 34:
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_4176 != -1)
				value = Global_262145.f_4176;
			else
				value = 220;
			break;
	
		case 35:
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_4177 != -1)
				value = Global_262145.f_4177;
			else
				value = 250;
			break;
	
		case 36:
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_4178 != -1)
				value = Global_262145.f_4178;
			else
				value = 205;
			break;
	
		case 37:
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_4179 != -1)
				value = Global_262145.f_4179;
			else
				value = 445;
			break;
	
		case 38:
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_4180 != -1)
				value = Global_262145.f_4180;
			else
				value = 175;
			break;
	
		case 39:
			num = 7;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 8;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 9;
			num2 = 0;
		
			if (Global_262145.f_4181 != -1)
				value = Global_262145.f_4181;
			else
				value = 340;
			break;
	
		case 50:
			num = 9;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 9;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 9;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num5, iParam0, 55, hParam1);
		
			if (Global_78341[0 /*14*/].f_7 > 0)
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_58);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_58);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_228(int iParam0, Hash hParam1) // Position - 0x1F551 Hash - 0x8F60B7F6 ^0x8F60B7F6
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num5, iParam0, 26, hParam1);
		
			if (Global_78341[0 /*14*/].f_7 > 0)
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_29);
		
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2027[num6] * Global_296940.f_29);

	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_229(int iParam0, Hash hParam1) // Position - 0x1F836 Hash - 0x49FFFA4C ^0x108EA666
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 1765;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 760;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 760;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 765;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 85;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 80;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 90;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 90;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 95;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 100;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 60;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 55;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 100;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 1255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 65;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 1050;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 1895;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 185;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 190;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 115;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 415;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 115;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 135;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 125;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 105;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 130;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 3530;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 2610;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 1295;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 120;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 160;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 160;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 145;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 105;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 115;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 150;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 540;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 110;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 120;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 460;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 120;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 120;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 415;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 135;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 140;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 160;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1025;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 1560;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 145;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 120;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 365;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 100;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 65;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 85;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 50;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 50;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2395;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 3675;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 320;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 3875;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 2050;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 375;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 2105;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 345;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 380;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 340;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 385;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 4135;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 370;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 375;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 385;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 365;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 325;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 325;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 370;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 390;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 400;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 390;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 365;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 410;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 4125;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 4365;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 5365;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 6225;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 3755;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 405;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 4115;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 2240;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 3850;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 3110;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 1950;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 455;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 405;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 410;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 415;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 4425;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 115;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 65;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 85;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 75;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 115;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 135;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 175;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 675;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 100;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 400;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 340;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 195;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 215;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 120;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 165;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 100;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 1040;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 100;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 120;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 210;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 205;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 200;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 100;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 1420;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 435;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 420;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 425;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 435;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 425;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 430;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 3215;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 3320;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 440;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 440;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 450;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 450;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 1255;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 750;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 165;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 460;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 190;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 195;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 200;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 205;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 210;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 215;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 220;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 455;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 175;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 800;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 790;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 175;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 190;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1770[num6] * Global_296940.f_25);

	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num5, iParam0, 256, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_25);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_230(int iParam0, Hash hParam1) // Position - 0x20E5E Hash - 0xB448FE2B ^0xD5BAE134
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 270;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 750;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 450;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 4875;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 1760;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 1090;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 2465;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 305;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 290;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 410;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 255;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 255;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 405;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 5000;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 4480;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 4335;
			break;
	}

	switch (iParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 375;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 265;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 275;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 280;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 300;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 265;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 255;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 250;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 260;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 250;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 225;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 230;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 650;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 425;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 345;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 115;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 110;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 250;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 290;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 115;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 135;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 125;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 120;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 130;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 110;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 525;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 115;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 535;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 135;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 120;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 130;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 140;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 130;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 520;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 215;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 220;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 225;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 245;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 215;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 630;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 250;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 260;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 200;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 225;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 230;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 725;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 650;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 230;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 230;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 280;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 330;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 320;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 315;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 850;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 530;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 890;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 440;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 455;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 295;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 180;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 150;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 155;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 840;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 150;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 950;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 580;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 200;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 665;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 780;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 615;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 250;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 435;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 420;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 390;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 485;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 380;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 1295;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 1135;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 1425;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1645;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1925;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 2250;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 365;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 360;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 2245;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 2170;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 50;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 100;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 65;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 275;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 300;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 145;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 150;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 110;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 95;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 155;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 155;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 510;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 165;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 465;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 250;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 110;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 470;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 480;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 155;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 275;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 395;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 285;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 560;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 595;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 295;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 230;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 215;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 270;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 295;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 285;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 215;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 210;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 290;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 230;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 215;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 90;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 105;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 100;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 105;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 230;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 350;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 335;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1256[num6] * Global_296940.f_23);

	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num5, iParam0, 256, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_23);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_231(int iParam0, Hash hParam1) // Position - 0x224BD Hash - 0xE0A1579F ^0xE0A1579F
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	}

	if (iParam0 >= 16)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num6, iParam0, 16, hParam1);
		return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_232(int iParam0, Hash hParam1) // Position - 0x22618 Hash - 0x1DB3E93C ^0x1DB3E93C
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	}

	if (iParam0 >= 36)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num6, iParam0, 36, hParam1);
		return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_233(int iParam0, Hash hParam1) // Position - 0x22898 Hash - 0xE646E909 ^0x236129F
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;
	int num4;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crew T-Shirt"), 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salamanders T-Shirt"), 16);
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Feud T-Shirt"), 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow T-Shirt"), 16);
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red T-Shirt"), 16);
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Cyan T-Shirt"), 16);
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue T-Shirt"), 16);
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan T-Shirt"), 16);
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink T-Shirt"), 16);
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint T-Shirt"), 16);
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash T-Shirt"), 16);
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray T-Shirt"), 16);
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Leopard T-Shirt"), 16);
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone T-Shirt"), 16);
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Baby Blue T-Shirt"), 16);
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone Striped T-Shirt"), 16);
			num = 0;
			num2 = 15;
			value = 125;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crew T-Shirt"), 16);
			num = 1;
			num2 = 0;
			value = 250;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salamanders T-Shirt"), 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Feud T-Shirt"), 16);
			num = 1;
			num2 = 2;
			value = 50;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow T-Shirt"), 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red T-Shirt"), 16);
			num = 1;
			num2 = 4;
			value = 40;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Cyan T-Shirt"), 16);
			num = 1;
			num2 = 5;
			value = 40;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue T-Shirt"), 16);
			num = 1;
			num2 = 6;
			value = 40;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan T-Shirt"), 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink T-Shirt"), 16);
			num = 1;
			num2 = 8;
			value = 40;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint T-Shirt"), 16);
			num = 1;
			num2 = 9;
			value = 40;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash T-Shirt"), 16);
			num = 1;
			num2 = 10;
			value = 135;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray T-Shirt"), 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Leopard T-Shirt"), 16);
			num = 1;
			num2 = 12;
			value = 220;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone T-Shirt"), 16);
			num = 1;
			num2 = 13;
			value = 45;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Baby Blue T-Shirt"), 16);
			num = 1;
			num2 = 14;
			value = 45;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone Striped T-Shirt"), 16);
			num = 1;
			num2 = 15;
			value = 125;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			break;
	
		case 33:
			num = 3;
			num2 = 0;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_0", 16);
			num = 4;
			num2 = 0;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_1", 16);
			num = 4;
			num2 = 1;
			flag = true;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_2", 16);
			num = 4;
			num2 = 2;
			flag = true;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Two-Tone Tank"), 16);
			num = 4;
			num2 = 13;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[77]);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Two-Tone Tank"), 16);
			num = 4;
			num2 = 14;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[78]);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_4_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Off-White Cropped Tank"), 16);
			num = 5;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[80]);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash Cropped Tank"), 16);
			num = 5;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[81]);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_2", 16);
			num = 5;
			num2 = 2;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Snakeskin Cropped Tank"), 16);
			num = 5;
			num2 = 7;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[87]);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Stripe Cropped Tank"), 16);
			num = 5;
			num2 = 9;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[89]);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	
		case 66:
			num = 6;
			num2 = 0;
			break;
	
		case 67:
			num = 7;
			num2 = 0;
			break;
	
		case 68:
			num = 8;
			num2 = 0;
			break;
	
		case 69:
			num = 9;
			num2 = 0;
			break;
	
		case 70:
			num = 10;
			num2 = 0;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sky Blue Racerback"), 16);
			num = 11;
			num2 = 0;
			value = 90;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[176]);
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Racerback"), 16);
			num = 11;
			num2 = 1;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[177]);
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Racerback"), 16);
			num = 11;
			num2 = 2;
			value = 95;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[178]);
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_3", 16);
			num = 11;
			num2 = 3;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_4", 16);
			num = 11;
			num2 = 4;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_5", 16);
			num = 11;
			num2 = 5;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_6", 16);
			num = 11;
			num2 = 6;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_7", 16);
			num = 11;
			num2 = 7;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_8", 16);
			num = 11;
			num2 = 8;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_9", 16);
			num = 11;
			num2 = 9;
			flag = true;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Los Santos 01 Racerback"), 16);
			num = 11;
			num2 = 10;
			value = 150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[186]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("LS Racerback"), 16);
			num = 11;
			num2 = 11;
			value = 65;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[187]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_12", 16);
			num = 11;
			num2 = 12;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_13", 16);
			num = 11;
			num2 = 13;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_11_14", 16);
			num = 11;
			num2 = 14;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("LC Penetrators Racerback"), 16);
			num = 11;
			num2 = 15;
			value = 145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[191]);
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_0", 16);
			num = 12;
			num2 = 0;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_1", 16);
			num = 12;
			num2 = 1;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_2", 16);
			num = 12;
			num2 = 2;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_3", 16);
			num = 12;
			num2 = 3;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_4", 16);
			num = 12;
			num2 = 4;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_5", 16);
			num = 12;
			num2 = 5;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_6", 16);
			num = 12;
			num2 = 6;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Neon Camisole"), 16);
			num = 12;
			num2 = 7;
			value = 1560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[199]);
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Spotted Camisole"), 16);
			num = 12;
			num2 = 8;
			value = 195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[200]);
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Spotted Camisole"), 16);
			num = 12;
			num2 = 9;
			value = 200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[201]);
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_10", 16);
			num = 12;
			num2 = 10;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_11", 16);
			num = 12;
			num2 = 11;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Bustier"), 16);
			num = 13;
			num2 = 0;
			value = 975;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[208]);
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Rose Bustier"), 16);
			num = 13;
			num2 = 1;
			value = 2670;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[209]);
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Olive Bustier"), 16);
			num = 13;
			num2 = 2;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[210]);
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Bustier"), 16);
			num = 13;
			num2 = 3;
			value = 400;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[211]);
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Floral Bustier"), 16);
			num = 13;
			num2 = 4;
			value = 2500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[212]);
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Plaid Bustier"), 16);
			num = 13;
			num2 = 5;
			value = 2060;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[213]);
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Studded Bustier"), 16);
			num = 13;
			num2 = 6;
			value = 2620;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[214]);
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Bustier"), 16);
			num = 13;
			num2 = 7;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[215]);
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Bustier"), 16);
			num = 13;
			num2 = 8;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[216]);
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Vivid Blue Bustier"), 16);
			num = 13;
			num2 = 9;
			value = 2280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[217]);
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Denim Bustier"), 16);
			num = 13;
			num2 = 10;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[218]);
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Tribal Bustier"), 16);
			num = 13;
			num2 = 11;
			value = 2390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[219]);
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Camo Bustier"), 16);
			num = 13;
			num2 = 12;
			value = 2610;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[220]);
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Bustier"), 16);
			num = 13;
			num2 = 13;
			value = 1450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[221]);
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black & White Bustier"), 16);
			num = 13;
			num2 = 14;
			value = 2720;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[222]);
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Leopard Bustier"), 16);
			num = 13;
			num2 = 15;
			value = 4995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[223]);
			break;
	
		case 119:
			num = 14;
			num2 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Bikini"), 16);
			num = 15;
			num2 = 0;
			value = 325;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[240]);
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_1", 16);
			num = 15;
			num2 = 1;
			flag = true;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_2", 16);
			num = 15;
			num2 = 2;
			flag = true;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Bikini"), 16);
			num = 15;
			num2 = 3;
			value = 130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[243]);
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_4", 16);
			num = 15;
			num2 = 4;
			flag = true;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_5", 16);
			num = 15;
			num2 = 5;
			flag = true;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_6", 16);
			num = 15;
			num2 = 6;
			flag = true;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_7", 16);
			num = 15;
			num2 = 7;
			flag = true;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_8", 16);
			num = 15;
			num2 = 8;
			flag = true;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_9", 16);
			num = 15;
			num2 = 9;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Aqua Bikini"), 16);
			num = 15;
			num2 = 10;
			value = 450;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[250]);
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Bikini"), 16);
			num = 15;
			num2 = 11;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[251]);
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_12", 16);
			num = 15;
			num2 = 12;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_13", 16);
			num = 15;
			num2 = 13;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_14", 16);
			num = 15;
			num2 = 14;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_15_15", 16);
			num = 15;
			num2 = 15;
			flag = true;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num5, iParam0, 136, hParam1);
		
			if (Global_78341[0 /*14*/].f_7 > 0)
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
		
			return;
	}

	if (iParam0 == 4 || iParam0 == 20)
	{
		if (func_234(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rockstar V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4]);
		}
	}
	else if (iParam0 == 7 || iParam0 == 23)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, _("Los Santos Belle V Neck"), 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
	}
	else if (iParam0 == 9 || iParam0 == 25)
	{
		if (func_234(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Skull V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 16)
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6]);
	}
	else if (iParam0 >= 16 && iParam0 < 32)
	{
		num7 = iParam0 - 16;
	
		if (num7 >= 0 && num7 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num7]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_24);
	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

BOOL func_234(int iParam0, int iParam1) // Position - 0x23C3A Hash - 0x75CF6A28 ^0xC5FFA2E7
{
	int num;
	int num2;

	if (func_236(iParam0) == 14192)
		return false;

	num = func_235(iParam0, iParam1);
	num2 = iParam0;
	return IS_BIT_SET(num, func_118(num2));
}

int func_235(int iParam0, int iParam1) // Position - 0x23C69 Hash - 0xA7B129CF ^0xA7B129CF
{
	int num;

	num = func_90(func_236(iParam0), iParam1, 0);
	return num;
}

int func_236(int iParam0) // Position - 0x23C82 Hash - 0xF08C5B2E ^0xA4BC8B65
{
	int num;
	int num2;

	num = iParam0;
	num2 = func_121(num);

	if (func_93() == 0 || func_167() == 0 || func_93() == 999 && func_167() == 999)
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

void func_237(int iParam0, Hash hParam1) // Position - 0x23FDF Hash - 0x1A0ED0D0 ^0x1A0ED0D0
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 225;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 40;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 40;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 40;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 40;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 45;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 40;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 40;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 135;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 60;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 220;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 45;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 45;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 125;
			break;
	}

	switch (iParam0)
	{
		case 16:
			num = 1;
			num2 = 0;
			value = 390;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 230;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 355;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 5000;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 2725;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 3265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 3625;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 4220;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 310;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 45;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 75;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 50;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 60;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 50;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 295;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 80;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 75;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 2250;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 275;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 445;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 50;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 40;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 45;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 470;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 95;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 95;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 360;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 100;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 60;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 295;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 460;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 1980;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 2110;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 95;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 40;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 40;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 45;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 60;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 375;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 90;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 900;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 1000;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 1050;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 1000;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 2975;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 1100;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 1825;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 1750;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 1025;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 1075;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 2805;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 2250;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 495;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 95;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 95;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 525;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 100;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 110;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 130;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 560;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 295;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 975;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 160;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 100;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1700;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 380;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 95;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 95;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 110;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 95;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 90;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 85;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 215;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 90;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 95;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 95;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 150;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 65;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 145;
			break;
	}

	switch (iParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 1560;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 195;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 200;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 975;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 2670;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 480;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 400;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 2500;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 2060;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 2620;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 475;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 490;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 2280;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 485;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 2390;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 2610;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 1450;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 2720;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 4995;
			break;
	}

	switch (iParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 265;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 385;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 345;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 330;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 430;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 375;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 375;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 295;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 360;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 325;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 340;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 300;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 315;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 415;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 420;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 325;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 130;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 450;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 465;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 == 4)
	{
		if (func_234(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rockstar V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_24);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[4] * Global_296940.f_24);
		}
	}
	else if (iParam0 == 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, _("Los Santos Belle V Neck"), 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_24);
	}
	else if (iParam0 == 9)
	{
		if (func_234(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Skull V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_24);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(40) * Global_262145.f_1513[9] * Global_296940.f_24);
		}
	}
	else
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 256)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1513[num6] * Global_296940.f_24);
	}

	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 4;
		func_222(num5, iParam0, 256, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_24);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_238(int iParam0, Hash hParam1) // Position - 0x25747 Hash - 0xA91A09EB ^0xE2448087
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[15]);
			break;
	
		case 18:
			num = 4;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[16]);
			break;
	
		case 19:
			num = 4;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[17]);
			break;
	
		case 20:
			num = 4;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[18]);
			break;
	
		case 21:
			num = 4;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[19]);
			break;
	
		case 22:
			num = 4;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[20]);
			break;
	
		case 23:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 24:
			num = 5;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[21]);
			break;
	
		case 25:
			num = 5;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[22]);
			break;
	
		case 26:
			num = 5;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[23]);
			break;
	
		case 27:
			num = 5;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[24]);
			break;
	
		case 28:
			num = 5;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[25]);
			break;
	
		case 29:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 30:
			num = 6;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[26]);
			break;
	
		case 31:
			num = 6;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[27]);
			break;
	
		case 32:
			num = 6;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[28]);
			break;
	
		case 33:
			num = 6;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[29]);
			break;
	
		case 34:
			num = 6;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[30]);
			break;
	
		case 35:
			num = 7;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[31]);
			break;
	
		case 36:
			num = 7;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[32]);
			break;
	
		case 37:
			num = 7;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[33]);
			break;
	
		case 38:
			num = 7;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[34]);
			break;
	
		case 39:
			num = 7;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[35]);
			break;
	
		case 40:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 41:
			num = 8;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[36]);
			break;
	
		case 42:
			num = 8;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[37]);
			break;
	
		case 43:
			num = 8;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[38]);
			break;
	
		case 44:
			num = 8;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[39]);
			break;
	
		case 45:
			num = 8;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[40]);
			break;
	
		case 46:
			num = 8;
			num2 = 5;
			value = 0;
			break;
	
		case 47:
			num = 9;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[41]);
			break;
	
		case 48:
			num = 9;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[42]);
			break;
	
		case 49:
			num = 9;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[43]);
			break;
	
		case 50:
			num = 9;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[44]);
			break;
	
		case 51:
			num = 9;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[45]);
			break;
	
		case 52:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 53:
			num = 10;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[46]);
			break;
	
		case 54:
			num = 10;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[47]);
			break;
	
		case 55:
			num = 10;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[48]);
			break;
	
		case 56:
			num = 10;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[49]);
			break;
	
		case 57:
			num = 10;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[50]);
			break;
	
		case 58:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 59:
			num = 10;
			num2 = 6;
			value = 0;
			break;
	
		case 60:
			num = 11;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[51]);
			break;
	
		case 61:
			num = 11;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[52]);
			break;
	
		case 62:
			num = 11;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[53]);
			break;
	
		case 63:
			num = 11;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[54]);
			break;
	
		case 64:
			num = 11;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[55]);
			break;
	
		case 65:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 66:
			num = 11;
			num2 = 6;
			value = 0;
			break;
	
		case 67:
			num = 12;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[56]);
			break;
	
		case 68:
			num = 12;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[57]);
			break;
	
		case 69:
			num = 12;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[58]);
			break;
	
		case 70:
			num = 12;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[59]);
			break;
	
		case 71:
			num = 12;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[60]);
			break;
	
		case 72:
			num = 12;
			num2 = 5;
			value = 0;
			break;
	
		case 73:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[61]);
			break;
	
		case 74:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[62]);
			break;
	
		case 75:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[63]);
			break;
	
		case 76:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[64]);
			break;
	
		case 77:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[65]);
			break;
	
		case 78:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 79:
			num = 14;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[66]);
			break;
	
		case 80:
			num = 14;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[67]);
			break;
	
		case 81:
			num = 14;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[68]);
			break;
	
		case 82:
			num = 14;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[69]);
			break;
	
		case 83:
			num = 14;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[70]);
			break;
	
		case 84:
			num = 14;
			num2 = 5;
			value = 0;
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2466[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 6;
			value = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 4;
			func_222(num5, iParam0, 92, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMF_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_239(int iParam0, int iParam1, Hash hParam2) // Position - 0x26618 Hash - 0x9AF0DF05 ^0x9AF0DF05
{
	switch (iParam0)
	{
		case 2:
			func_254(iParam1, hParam2);
			break;
	
		case 11:
			func_253(iParam1, hParam2);
			break;
	
		case 8:
			func_252(iParam1, hParam2);
			break;
	
		case 9:
			func_251(iParam1, hParam2);
			break;
	
		case 3:
			func_250(iParam1, hParam2);
			break;
	
		case 4:
			func_249(iParam1, hParam2);
			break;
	
		case 6:
			func_248(iParam1, hParam2);
			break;
	
		case 1:
			func_247(iParam1, hParam2);
			break;
	
		case 7:
			func_246(iParam1, hParam2);
			break;
	
		case 10:
			func_245(iParam1, hParam2);
			break;
	
		case 14:
			func_244(iParam1, hParam2);
			break;
	
		case 12:
			func_243(iParam1, hParam2);
			break;
	
		case 5:
			func_242(iParam1, hParam2);
			break;
	
		case 0:
			func_241(iParam1, hParam2);
			break;
	
		case 13:
			func_240(iParam1);
			break;
	}

	return;
}

void func_240(int iParam0) // Position - 0x26724 Hash - 0xB745E49C ^0xB745E49C
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 13;

	switch (iParam0)
	{
		case 31:
			num2 = 0;
			num3 = 0;
			break;
	
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			break;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_241(int iParam0, Hash hParam1) // Position - 0x268EE Hash - 0x24B9D800 ^0xDE92F578
{
	int num;

	num = 0;
	Global_78341[0 /*14*/].f_5 = 3;
	func_222(num, iParam0, 0, hParam1);
	return;
}

void func_242(int iParam0, Hash hParam1) // Position - 0x2690E Hash - 0x5C1D2F91 ^0x5C1D2F91
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 5;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num6, iParam0, 9, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "HA_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num3, 16);
	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_243(int iParam0, Hash hParam1) // Position - 0x26A11 Hash - 0x34BAB0FD ^0x34BAB0FD
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 12;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			flag = true;
			break;
	
		case 1:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Beat Maker"), 16);
			break;
	
		case 2:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Brand"), 16);
			break;
	
		case 3:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Skater"), 16);
			break;
	
		case 4:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Roller"), 16);
			break;
	
		case 5:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Camo Kid"), 16);
			break;
	
		case 6:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Vibe"), 16);
			break;
	
		case 7:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Color Junky"), 16);
			break;
	
		case 8:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Classic T"), 16);
			break;
	
		case 9:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Worker"), 16);
			break;
	
		case 10:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Ladies Man"), 16);
			break;
	
		case 11:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Office"), 16);
			break;
	
		case 12:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The After Party"), 16);
			break;
	
		case 13:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Rebel"), 16);
			break;
	
		case 14:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Trendsetter"), 16);
			break;
	
		case 15:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Artist"), 16);
			break;
	
		case 16:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Icon"), 16);
			break;
	
		case 17:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Nightlife"), 16);
			break;
	
		case 18:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Sun Bather"), 16);
			break;
	
		case 19:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Stoop"), 16);
			break;
	
		case 20:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Street G"), 16);
			break;
	
		case 21:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Effortless"), 16);
			break;
	
		case 22:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Everyday"), 16);
			break;
	
		case 23:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Hood"), 16);
			break;
	
		case 24:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Jock"), 16);
			break;
	
		case 25:
			num2 = 0;
			num3 = 0;
			TEXT_LABEL_ASSIGN_STRING(&unk, _("The Pounders Fan"), 16);
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num6, iParam0, 26, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_244(int iParam0, Hash hParam1) // Position - 0x26CC2 Hash - 0x859154FC ^0x859154FC
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 14;
	num6 = 0;

	switch (iParam0)
	{
		case 0:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 0;
			break;
	
		case 1:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 1;
			break;
	
		case 2:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 2;
			break;
	
		case 3:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 3;
			break;
	
		case 4:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 4;
			break;
	
		case 5:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 5;
			break;
	
		case 6:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 6;
			break;
	
		case 7:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 7;
			break;
	
		case 8:
			num = -1;
			num2 = 0;
			value = 0;
			num3 = 8;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Ear Defenders"), 16);
			num = 0;
			num2 = 0;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Ear Defenders"), 16);
			num = 0;
			num2 = 1;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Ear Defenders"), 16);
			num = 0;
			num2 = 2;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow Ear Defenders"), 16);
			num = 0;
			num2 = 3;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Desert Camo Ear Defenders"), 16);
			num = 0;
			num2 = 4;
			value = 235;
			num3 = 0;
			num6 = 1;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Ear Defenders"), 16);
			num = 0;
			num2 = 5;
			value = 80;
			num3 = 0;
			num6 = 1;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Ear Defenders"), 16);
			num = 0;
			num2 = 6;
			value = 85;
			num3 = 0;
			num6 = 1;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Ear Defenders"), 16);
			num = 0;
			num2 = 7;
			value = 90;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Dunce Cap"), 16);
			num = 1;
			num2 = 0;
			num3 = 0;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Winter Hat"), 16);
			num = 2;
			num2 = 0;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Winter Hat"), 16);
			num = 2;
			num2 = 1;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Winter Hat"), 16);
			num = 2;
			num2 = 2;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rasta Winter Hat"), 16);
			num = 2;
			num2 = 3;
			value = 320;
			num3 = 0;
			num6 = 1;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Striped Winter Hat"), 16);
			num = 2;
			num2 = 4;
			value = 185;
			num3 = 0;
			num6 = 1;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Trio Knit Winter Hat"), 16);
			num = 2;
			num2 = 5;
			value = 245;
			num3 = 0;
			num6 = 1;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Winter Hat"), 16);
			num = 2;
			num2 = 6;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Maroon Winter Hat"), 16);
			num = 2;
			num2 = 7;
			value = 40;
			num3 = 0;
			num6 = 1;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_0", 16);
			num = 3;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Canvas Hat"), 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Canvas Hat"), 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black LS Fitted Cap"), 16);
			num = 4;
			num2 = 0;
			value = 415;
			num3 = 0;
			num6 = 1;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray LS Fitted Cap"), 16);
			num = 4;
			num2 = 1;
			value = 315;
			num3 = 0;
			num6 = 1;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_2", 16);
			num = 4;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_3", 16);
			num = 4;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_4", 16);
			num = 4;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_5", 16);
			num = 4;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_6", 16);
			num = 4;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_4_7", 16);
			num = 4;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Saggy Beanie"), 16);
			num = 5;
			num2 = 0;
			value = 75;
			num3 = 0;
			num6 = 1;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Saggy Beanie"), 16);
			num = 5;
			num2 = 1;
			value = 60;
			num3 = 0;
			num6 = 1;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_2", 16);
			num = 5;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_5_7", 16);
			num = 5;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Army Cap"), 16);
			num = 6;
			num2 = 0;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Army Cap"), 16);
			num = 6;
			num2 = 1;
			value = 265;
			num3 = 0;
			num6 = 1;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Army Cap"), 16);
			num = 6;
			num2 = 2;
			value = 170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Army Cap"), 16);
			num = 6;
			num2 = 3;
			value = 135;
			num3 = 0;
			num6 = 1;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Desert Army Cap"), 16);
			num = 6;
			num2 = 4;
			value = 570;
			num3 = 0;
			num6 = 1;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Woodland Army Cap"), 16);
			num = 6;
			num2 = 5;
			value = 560;
			num3 = 0;
			num6 = 1;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ranch Beige Army Cap"), 16);
			num = 6;
			num2 = 6;
			value = 140;
			num3 = 0;
			num6 = 1;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ranch Brown Army Cap"), 16);
			num = 6;
			num2 = 7;
			value = 130;
			num3 = 0;
			num6 = 1;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Flat Cap"), 16);
			num = 7;
			num2 = 0;
			value = 260;
			num3 = 0;
			num6 = 1;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Flat Cap"), 16);
			num = 7;
			num2 = 1;
			value = 215;
			num3 = 0;
			num6 = 1;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Flat Cap"), 16);
			num = 7;
			num2 = 2;
			value = 430;
			num3 = 0;
			num6 = 1;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Flat Cap"), 16);
			num = 7;
			num2 = 3;
			value = 160;
			num3 = 0;
			num6 = 1;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Flat Cap"), 16);
			num = 7;
			num2 = 4;
			value = 200;
			num3 = 0;
			num6 = 1;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Flat Cap"), 16);
			num = 7;
			num2 = 5;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Flat Cap"), 16);
			num = 7;
			num2 = 6;
			value = 155;
			num3 = 0;
			num6 = 1;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow Flat Cap"), 16);
			num = 7;
			num2 = 7;
			value = 165;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_0", 16);
			num = 8;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_0", 16);
			num = 9;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_1", 16);
			num = 9;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_2", 16);
			num = 9;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_3", 16);
			num = 9;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_4", 16);
			num = 9;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fruntalot Green Cap"), 16);
			num = 9;
			num2 = 5;
			value = 100;
			num3 = 0;
			num6 = 1;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_9_6", 16);
			num = 9;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stank Purple Cap"), 16);
			num = 9;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_0", 16);
			num = 10;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_1", 16);
			num = 10;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_2", 16);
			num = 10;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_3", 16);
			num = 10;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_4", 16);
			num = 10;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fruntalot Green Cap"), 16);
			num = 10;
			num2 = 5;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_10_6", 16);
			num = 10;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stank Purple Cap"), 16);
			num = 10;
			num2 = 7;
			value = 65;
			num3 = 0;
			num6 = 1;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Pork Pie"), 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Olive Pork Pie"), 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Pork Pie"), 16);
			num = 11;
			num2 = 6;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Fedora"), 16);
			num = 12;
			num2 = 0;
			value = 1715;
			num3 = 0;
			num6 = 1;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Fedora"), 16);
			num = 12;
			num2 = 1;
			value = 3900;
			num3 = 0;
			num6 = 1;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash Fedora"), 16);
			num = 12;
			num2 = 2;
			value = 1550;
			num3 = 0;
			num6 = 1;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_3", 16);
			num = 12;
			num2 = 3;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Fedora"), 16);
			num = 12;
			num2 = 4;
			value = 4250;
			num3 = 0;
			num6 = 1;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HT_FMM_12_5", 16);
			num = 12;
			num2 = 5;
			value = 0;
			num3 = 0;
			num6 = 1;
			flag = true;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Fedora"), 16);
			num = 12;
			num2 = 6;
			value = 4460;
			num3 = 0;
			num6 = 1;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Fedora"), 16);
			num = 12;
			num2 = 7;
			value = 4970;
			num3 = 0;
			num6 = 1;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Cowboy Hat"), 16);
			num = 13;
			num2 = 0;
			value = 290;
			num3 = 0;
			num6 = 1;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Cowboy Hat"), 16);
			num = 13;
			num2 = 1;
			value = 305;
			num3 = 0;
			num6 = 1;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Chocolate Cowboy Hat"), 16);
			num = 13;
			num2 = 2;
			value = 4170;
			num3 = 0;
			num6 = 1;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Cowboy Hat"), 16);
			num = 13;
			num2 = 3;
			value = 335;
			num3 = 0;
			num6 = 1;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Chestnut Cowboy Hat"), 16);
			num = 13;
			num2 = 4;
			value = 4940;
			num3 = 0;
			num6 = 1;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beige Cowboy Hat"), 16);
			num = 13;
			num2 = 5;
			value = 275;
			num3 = 0;
			num6 = 1;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Cowboy Hat"), 16);
			num = 13;
			num2 = 6;
			value = 5000;
			num3 = 0;
			num6 = 1;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Cowboy Hat"), 16);
			num = 13;
			num2 = 7;
			value = 3620;
			num3 = 0;
			num6 = 1;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Paisley Bandana"), 16);
			num = 14;
			num2 = 0;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Paisley Bandana"), 16);
			num = 14;
			num2 = 1;
			value = 25;
			num3 = 0;
			num6 = 1;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Bandana"), 16);
			num = 14;
			num2 = 2;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Bandana"), 16);
			num = 14;
			num2 = 3;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Bandana"), 16);
			num = 14;
			num2 = 4;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Bandana"), 16);
			num = 14;
			num2 = 5;
			value = 30;
			num3 = 0;
			num6 = 1;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Camo Bandana"), 16);
			num = 14;
			num2 = 6;
			value = 350;
			num3 = 0;
			num6 = 1;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow Bandana"), 16);
			num = 14;
			num2 = 7;
			value = 35;
			num3 = 0;
			num6 = 1;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off White Headphones"), 16);
			num = 15;
			num2 = 0;
			value = 365;
			num3 = 0;
			num6 = 1;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Black Headphones"), 16);
			num = 15;
			num2 = 1;
			value = 380;
			num3 = 0;
			num6 = 1;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Red Headphones"), 16);
			num = 15;
			num2 = 2;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Blue Headphones"), 16);
			num = 15;
			num2 = 3;
			value = 595;
			num3 = 0;
			num6 = 1;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Yellow Headphones"), 16);
			num = 15;
			num2 = 4;
			value = 600;
			num3 = 0;
			num6 = 1;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Purple Headphones"), 16);
			num = 15;
			num2 = 5;
			value = 590;
			num3 = 0;
			num6 = 1;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Gray Headphones"), 16);
			num = 15;
			num2 = 6;
			value = 395;
			num3 = 0;
			num6 = 1;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Beat Off Green Headphones"), 16);
			num = 15;
			num2 = 7;
			value = 555;
			num3 = 0;
			num6 = 1;
			break;
	}

	switch (iParam0)
	{
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Yellow Helmet"), 16);
			num = 16;
			num2 = 0;
			value = 1060;
			num3 = 0;
			num6 = 2;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Blue Helmet"), 16);
			num = 16;
			num2 = 1;
			value = 1400;
			num3 = 0;
			num6 = 2;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Orange Helmet"), 16);
			num = 16;
			num2 = 2;
			value = 1315;
			num3 = 0;
			num6 = 2;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Green Helmet"), 16);
			num = 16;
			num2 = 3;
			value = 1230;
			num3 = 0;
			num6 = 2;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Red Helmet"), 16);
			num = 16;
			num2 = 4;
			value = 1145;
			num3 = 0;
			num6 = 2;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Horse Black Helmet"), 16);
			num = 16;
			num2 = 5;
			value = 8450;
			num3 = 0;
			num6 = 2;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Helmet"), 16);
			num = 16;
			num2 = 6;
			value = 675;
			num3 = 0;
			num6 = 2;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Western MC Lilac Helmet"), 16);
			num = 16;
			num2 = 7;
			value = 8750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Open-Face Helmet"), 16);
			num = 17;
			num2 = 0;
			value = 975;
			num3 = 0;
			num6 = 2;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Open-Face Helmet"), 16);
			num = 17;
			num2 = 1;
			value = 750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Open-Face Helmet"), 16);
			num = 17;
			num2 = 2;
			value = 865;
			num3 = 0;
			num6 = 2;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Open-Face Helmet"), 16);
			num = 17;
			num2 = 3;
			value = 890;
			num3 = 0;
			num6 = 2;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Open-Face Helmet"), 16);
			num = 17;
			num2 = 4;
			value = 730;
			num3 = 0;
			num6 = 2;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Open-Face Helmet"), 16);
			num = 17;
			num2 = 5;
			value = 650;
			num3 = 0;
			num6 = 2;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Open-Face Helmet"), 16);
			num = 17;
			num2 = 6;
			value = 645;
			num3 = 0;
			num6 = 2;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Open-Face Helmet"), 16);
			num = 17;
			num2 = 7;
			value = 755;
			num3 = 0;
			num6 = 2;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Shatter Pattern Helmet"), 16);
			num = 18;
			num2 = 0;
			value = 13850;
			num3 = 0;
			num6 = 2;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stars Helmet"), 16);
			num = 18;
			num2 = 1;
			value = 2900;
			num3 = 0;
			num6 = 2;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Squared Helmet"), 16);
			num = 18;
			num2 = 2;
			value = 2895;
			num3 = 0;
			num6 = 2;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crimson Helmet"), 16);
			num = 18;
			num2 = 3;
			value = 12500;
			num3 = 0;
			num6 = 2;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Skull Helmet"), 16);
			num = 18;
			num2 = 4;
			value = 15000;
			num3 = 0;
			num6 = 2;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ace of Spades Helmet"), 16);
			num = 18;
			num2 = 5;
			value = 14750;
			num3 = 0;
			num6 = 2;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Flamejob Helmet"), 16);
			num = 18;
			num2 = 6;
			value = 13150;
			num3 = 0;
			num6 = 2;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Helmet"), 16);
			num = 18;
			num2 = 7;
			value = 2925;
			num3 = 0;
			num6 = 2;
			break;
	}

	switch (iParam0)
	{
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_0", 16);
			num = 0;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_1", 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_2", 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_3", 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_4", 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_5", 16);
			num = 0;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_7", 16);
			num = 0;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_8", 16);
			num = 0;
			num2 = 8;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			value = 50;
			num3 = 1;
			num6 = 3;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_0", 16);
			num = 1;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Wraparounds"), 16);
			num = 1;
			num2 = 1;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_3", 16);
			num = 1;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_4", 16);
			num = 1;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_5", 16);
			num = 1;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_6", 16);
			num = 1;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_1_7", 16);
			num = 1;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Winter Shades"), 16);
			num = 2;
			num2 = 0;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Silver Shades"), 16);
			num = 2;
			num2 = 1;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crimson Polarized Shades"), 16);
			num = 2;
			num2 = 2;
			value = 380;
			num3 = 1;
			num6 = 3;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Summer Shades"), 16);
			num = 2;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Autumn Shades"), 16);
			num = 2;
			num2 = 4;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Rust Shades"), 16);
			num = 2;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Steel Shades"), 16);
			num = 2;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Polarized Shades"), 16);
			num = 2;
			num2 = 7;
			value = 390;
			num3 = 1;
			num6 = 3;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_8", 16);
			num = 2;
			num2 = 8;
			value = 950;
			num3 = 1;
			num6 = 3;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_9", 16);
			num = 2;
			num2 = 9;
			value = 565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_2_10", 16);
			num = 2;
			num2 = 10;
			value = 630;
			num3 = 1;
			num6 = 3;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Janitor Frames"), 16);
			num = 3;
			num2 = 0;
			value = 70;
			num3 = 1;
			num6 = 3;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Janitor Frames"), 16);
			num = 3;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Janitor Frames"), 16);
			num = 3;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash Janitor Frames"), 16);
			num = 3;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Janitor Frames"), 16);
			num = 3;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Smoke Janitor Frames"), 16);
			num = 3;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Janitor Frames"), 16);
			num = 3;
			num2 = 6;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Janitor Frames"), 16);
			num = 3;
			num2 = 7;
			value = 90;
			num3 = 1;
			num6 = 3;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_8", 16);
			num = 3;
			num2 = 8;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_9", 16);
			num = 3;
			num2 = 9;
			value = 265;
			num3 = 1;
			num6 = 3;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_3_10", 16);
			num = 3;
			num2 = 10;
			value = 330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Brown Glasses"), 16);
			num = 4;
			num2 = 0;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Gray Glasses"), 16);
			num = 4;
			num2 = 1;
			value = 250;
			num3 = 1;
			num6 = 3;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Black Glasses"), 16);
			num = 4;
			num2 = 2;
			value = 210;
			num3 = 1;
			num6 = 3;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Tortoiseshell Glasses"), 16);
			num = 4;
			num2 = 3;
			value = 245;
			num3 = 1;
			num6 = 3;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Walnut Glasses"), 16);
			num = 4;
			num2 = 4;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Marble Glasses"), 16);
			num = 4;
			num2 = 5;
			value = 205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Smoke Glasses"), 16);
			num = 4;
			num2 = 6;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Enema Smoke Shades"), 16);
			num = 4;
			num2 = 7;
			value = 215;
			num3 = 1;
			num6 = 3;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_8", 16);
			num = 4;
			num2 = 8;
			value = 995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_9", 16);
			num = 4;
			num2 = 9;
			value = 610;
			num3 = 1;
			num6 = 3;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_4_10", 16);
			num = 4;
			num2 = 10;
			value = 675;
			num3 = 1;
			num6 = 3;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Aviators"), 16);
			num = 5;
			num2 = 0;
			value = 4050;
			num3 = 1;
			num6 = 3;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Aviators"), 16);
			num = 5;
			num2 = 1;
			value = 4060;
			num3 = 1;
			num6 = 3;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Aviators, Brown Tint"), 16);
			num = 5;
			num2 = 2;
			value = 170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Aviators, Green Tint"), 16);
			num = 5;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Aviators, Blue Tint"), 16);
			num = 5;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Aviators, Dark Tint"), 16);
			num = 5;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Aviators, Blue Tint"), 16);
			num = 5;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Aviators, Copper Tint"), 16);
			num = 5;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_8", 16);
			num = 5;
			num2 = 8;
			value = 1760;
			num3 = 1;
			num6 = 3;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_9", 16);
			num = 5;
			num2 = 9;
			value = 1375;
			num3 = 1;
			num6 = 3;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_5_10", 16);
			num = 5;
			num2 = 10;
			value = 1440;
			num3 = 1;
			num6 = 3;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_0", 16);
			num = 6;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_1", 16);
			num = 6;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_2", 16);
			num = 6;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_3", 16);
			num = 6;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_4", 16);
			num = 6;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_5", 16);
			num = 6;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_6", 16);
			num = 6;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_6_7", 16);
			num = 6;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Casuals"), 16);
			num = 7;
			num2 = 0;
			value = 180;
			num3 = 1;
			num6 = 3;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Zap Casuals"), 16);
			num = 7;
			num2 = 1;
			value = 500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tortoiseshell Casuals"), 16);
			num = 7;
			num2 = 2;
			value = 115;
			num3 = 1;
			num6 = 3;
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Casuals"), 16);
			num = 7;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Casuals"), 16);
			num = 7;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Camo Collection Casuals"), 16);
			num = 7;
			num2 = 5;
			value = 1445;
			num3 = 1;
			num6 = 3;
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Lemon Casuals"), 16);
			num = 7;
			num2 = 6;
			value = 530;
			num3 = 1;
			num6 = 3;
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blood Casuals"), 16);
			num = 7;
			num2 = 7;
			value = 650;
			num3 = 1;
			num6 = 3;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_8", 16);
			num = 7;
			num2 = 8;
			value = 1170;
			num3 = 1;
			num6 = 3;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_9", 16);
			num = 7;
			num2 = 9;
			value = 785;
			num3 = 1;
			num6 = 3;
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_7_10", 16);
			num = 7;
			num2 = 10;
			value = 850;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Eyewear"), 16);
			num = 8;
			num2 = 0;
			value = 4260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Eyewear"), 16);
			num = 8;
			num2 = 1;
			value = 4310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Eyewear"), 16);
			num = 8;
			num2 = 2;
			value = 4130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Smoke Cop Frames"), 16);
			num = 8;
			num2 = 3;
			value = 135;
			num3 = 1;
			num6 = 3;
			break;
	
		case 241:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Coffee Cop Frames"), 16);
			num = 8;
			num2 = 4;
			value = 120;
			num3 = 1;
			num6 = 3;
			break;
	
		case 242:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Cop Frames"), 16);
			num = 8;
			num2 = 5;
			value = 110;
			num3 = 1;
			num6 = 3;
			break;
	
		case 243:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Cop Frames"), 16);
			num = 8;
			num2 = 6;
			value = 140;
			num3 = 1;
			num6 = 3;
			break;
	
		case 244:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Cop Frames"), 16);
			num = 8;
			num2 = 7;
			value = 130;
			num3 = 1;
			num6 = 3;
			break;
	
		case 245:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_8", 16);
			num = 8;
			num2 = 8;
			value = 1885;
			num3 = 1;
			num6 = 3;
			break;
	
		case 246:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_9", 16);
			num = 8;
			num2 = 9;
			value = 1500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 247:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_8_10", 16);
			num = 8;
			num2 = 10;
			value = 1565;
			num3 = 1;
			num6 = 3;
			break;
	
		case 248:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Black"), 16);
			num = 9;
			num2 = 0;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 249:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Gray"), 16);
			num = 9;
			num2 = 1;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 250:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow White"), 16);
			num = 9;
			num2 = 2;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 251:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Ash"), 16);
			num = 9;
			num2 = 3;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 252:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Copper"), 16);
			num = 9;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 253:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Tortoiseshell"), 16);
			num = 9;
			num2 = 5;
			value = 4290;
			num3 = 1;
			num6 = 3;
			break;
	
		case 254:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Marble"), 16);
			num = 9;
			num2 = 6;
			value = 4150;
			num3 = 1;
			num6 = 3;
			break;
	
		case 255:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hawaiian Snow Walnut"), 16);
			num = 9;
			num2 = 7;
			value = 4295;
			num3 = 1;
			num6 = 3;
			break;
	
		case 256:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_8", 16);
			num = 9;
			num2 = 8;
			value = 2315;
			num3 = 1;
			num6 = 3;
			break;
	
		case 257:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_9", 16);
			num = 9;
			num2 = 9;
			value = 1930;
			num3 = 1;
			num6 = 3;
			break;
	
		case 258:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_9_10", 16);
			num = 9;
			num2 = 10;
			value = 1995;
			num3 = 1;
			num6 = 3;
			break;
	
		case 259:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Bull Emic"), 16);
			num = 10;
			num2 = 0;
			value = 6240;
			num3 = 1;
			num6 = 3;
			break;
	
		case 260:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Bull Emic"), 16);
			num = 10;
			num2 = 1;
			value = 4955;
			num3 = 1;
			num6 = 3;
			break;
	
		case 261:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Bull Emic"), 16);
			num = 10;
			num2 = 2;
			value = 5590;
			num3 = 1;
			num6 = 3;
			break;
	
		case 262:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Bull Emic"), 16);
			num = 10;
			num2 = 3;
			value = 4920;
			num3 = 1;
			num6 = 3;
			break;
	
		case 263:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown Bull Emic"), 16);
			num = 10;
			num2 = 4;
			value = 4990;
			num3 = 1;
			num6 = 3;
			break;
	
		case 264:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Bull Emic"), 16);
			num = 10;
			num2 = 5;
			value = 4780;
			num3 = 1;
			num6 = 3;
			break;
	
		case 265:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Bull Emic"), 16);
			num = 10;
			num2 = 6;
			value = 4775;
			num3 = 1;
			num6 = 3;
			break;
	
		case 266:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Purple Tint Bull Emic"), 16);
			num = 10;
			num2 = 7;
			value = 4800;
			num3 = 1;
			num6 = 3;
			break;
	
		case 267:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_8", 16);
			num = 10;
			num2 = 8;
			value = 2835;
			num3 = 1;
			num6 = 3;
			break;
	
		case 268:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_9", 16);
			num = 10;
			num2 = 9;
			value = 2450;
			num3 = 1;
			num6 = 3;
			break;
	
		case 269:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_10_10", 16);
			num = 10;
			num2 = 10;
			value = 2515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 270:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_0", 16);
			num = 11;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 271:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_1", 16);
			num = 11;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 272:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_2", 16);
			num = 11;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 273:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_3", 16);
			num = 11;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 274:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_4", 16);
			num = 11;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 275:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_5", 16);
			num = 11;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 277:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_11_7", 16);
			num = 11;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 278:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Elvis"), 16);
			num = 12;
			num2 = 0;
			value = 385;
			num3 = 1;
			num6 = 3;
			break;
	
		case 279:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Elvis"), 16);
			num = 12;
			num2 = 1;
			value = 310;
			num3 = 1;
			num6 = 3;
			break;
	
		case 280:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Elvis"), 16);
			num = 12;
			num2 = 2;
			value = 3655;
			num3 = 1;
			num6 = 3;
			break;
	
		case 281:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Elvis"), 16);
			num = 12;
			num2 = 3;
			value = 4055;
			num3 = 1;
			num6 = 3;
			break;
	
		case 282:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Elvis"), 16);
			num = 12;
			num2 = 4;
			value = 3595;
			num3 = 1;
			num6 = 3;
			break;
	
		case 283:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Tint Elvis"), 16);
			num = 12;
			num2 = 5;
			value = 3605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 284:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Tint Elvis"), 16);
			num = 12;
			num2 = 6;
			value = 3645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 285:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Copper Elvis"), 16);
			num = 12;
			num2 = 7;
			value = 320;
			num3 = 1;
			num6 = 3;
			break;
	
		case 286:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_8", 16);
			num = 12;
			num2 = 8;
			value = 2820;
			num3 = 1;
			num6 = 3;
			break;
	
		case 287:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_9", 16);
			num = 12;
			num2 = 9;
			value = 2435;
			num3 = 1;
			num6 = 3;
			break;
	
		case 288:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_12_10", 16);
			num = 12;
			num2 = 10;
			value = 2500;
			num3 = 1;
			num6 = 3;
			break;
	
		case 289:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Broker Black Hipsters"), 16);
			num = 13;
			num2 = 0;
			value = 230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 290:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Polarized Hipsters"), 16);
			num = 13;
			num2 = 1;
			value = 1605;
			num3 = 1;
			num6 = 3;
			break;
	
		case 291:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Choco Polarized Hipsters"), 16);
			num = 13;
			num2 = 2;
			value = 2230;
			num3 = 1;
			num6 = 3;
			break;
	
		case 292:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Hipsters"), 16);
			num = 13;
			num2 = 3;
			value = 220;
			num3 = 1;
			num6 = 3;
			break;
	
		case 293:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Hipsters"), 16);
			num = 13;
			num2 = 4;
			value = 185;
			num3 = 1;
			num6 = 3;
			break;
	
		case 294:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Olive Polarized Hipsters"), 16);
			num = 13;
			num2 = 5;
			value = 2070;
			num3 = 1;
			num6 = 3;
			break;
	
		case 295:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Polarized Hipsters"), 16);
			num = 13;
			num2 = 6;
			value = 2205;
			num3 = 1;
			num6 = 3;
			break;
	
		case 296:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Candy Polarized Hipsters"), 16);
			num = 13;
			num2 = 7;
			value = 1690;
			num3 = 1;
			num6 = 3;
			break;
	
		case 297:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_8", 16);
			num = 13;
			num2 = 8;
			value = 2715;
			num3 = 1;
			num6 = 3;
			break;
	
		case 298:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_9", 16);
			num = 13;
			num2 = 9;
			value = 2330;
			num3 = 1;
			num6 = 3;
			break;
	
		case 299:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_13_10", 16);
			num = 13;
			num2 = 10;
			value = 2395;
			num3 = 1;
			num6 = 3;
			break;
	
		case 300:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_0", 16);
			num = 14;
			num2 = 0;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 301:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_1", 16);
			num = 14;
			num2 = 1;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 302:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_2", 16);
			num = 14;
			num2 = 2;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 303:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_3", 16);
			num = 14;
			num2 = 3;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 304:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_4", 16);
			num = 14;
			num2 = 4;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 305:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_5", 16);
			num = 14;
			num2 = 5;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 306:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_6", 16);
			num = 14;
			num2 = 6;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 307:
			TEXT_LABEL_ASSIGN_STRING(&unk, "G_FMM_14_7", 16);
			num = 14;
			num2 = 7;
			value = 0;
			num3 = 1;
			num6 = 3;
			flag = true;
			break;
	
		case 308:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yellow Guns"), 16);
			num = 15;
			num2 = 0;
			value = 515;
			num3 = 1;
			num6 = 3;
			break;
	
		case 309:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Guns"), 16);
			num = 15;
			num2 = 1;
			value = 60;
			num3 = 1;
			num6 = 3;
			break;
	
		case 310:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Guns"), 16);
			num = 15;
			num2 = 2;
			value = 65;
			num3 = 1;
			num6 = 3;
			break;
	
		case 311:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Guns"), 16);
			num = 15;
			num2 = 3;
			value = 95;
			num3 = 1;
			num6 = 3;
			break;
	
		case 312:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Guns"), 16);
			num = 15;
			num2 = 4;
			value = 85;
			num3 = 1;
			num6 = 3;
			break;
	
		case 313:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hornet Guns"), 16);
			num = 15;
			num2 = 5;
			value = 75;
			num3 = 1;
			num6 = 3;
			break;
	
		case 314:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange Guns"), 16);
			num = 15;
			num2 = 6;
			value = 485;
			num3 = 1;
			num6 = 3;
			break;
	
		case 315:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Guns"), 16);
			num = 15;
			num2 = 7;
			value = 545;
			num3 = 1;
			num6 = 3;
			break;
	
		case 316:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_8", 16);
			num = 15;
			num2 = 8;
			value = 645;
			num3 = 1;
			num6 = 3;
			break;
	
		case 317:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_9", 16);
			num = 15;
			num2 = 9;
			value = 260;
			num3 = 1;
			num6 = 3;
			break;
	
		case 318:
			TEXT_LABEL_ASSIGN_STRING(&unk, "CLO_EXM_G_15_10", 16);
			num = 15;
			num2 = 10;
			value = 325;
			num3 = 1;
			num6 = 3;
			break;
	}

	switch (iParam0)
	{
		case 319:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Deep Sea Watch"), 16);
			num = 0;
			num2 = 0;
			value = 5000;
			num3 = 6;
			num6 = 4;
			break;
	
		case 320:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Watch"), 16);
			num = 0;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 321:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Watch"), 16);
			num = 0;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 322:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Watch"), 16);
			num = 0;
			num2 = 3;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 323:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gold Faced Silver Watch"), 16);
			num = 0;
			num2 = 4;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 324:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White LED, Black Strap"), 16);
			num = 1;
			num2 = 0;
			value = 695;
			num3 = 6;
			num6 = 4;
			break;
	
		case 325:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red LED, White Strap"), 16);
			num = 1;
			num2 = 1;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	
		case 326:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red LED, Brown Strap"), 16);
			num = 1;
			num2 = 2;
			value = 0;
			num3 = 6;
			num6 = 4;
			flag = true;
			break;
	}

	if (num6 == 1)
	{
		num7 = iParam0 - 10;
	
		if (num7 >= 0 && num7 < 121)
		{
			if (num7 > 8)
				num7 = num7 - 1;
		
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_965[num7] * Global_296940.f_18);
		}
	}
	else if (num6 == 2)
	{
		num8 = iParam0 - 131;
	
		if (num8 >= 0 && num8 < 24)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1086[num8] * Global_296940.f_19);
	}
	else if (num6 == 3)
	{
		num9 = iParam0 - 155;
	
		if (num9 >= 0 && num9 < 128)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1111[num9] * Global_296940.f_20);
	}
	else if (num6 == 4)
	{
		num10 = iParam0 - 319;
	
		if (num10 >= 0 && num10 < 15)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_1240[num10] * Global_296940.f_21);
	}

	if (iParam0 >= 327)
	{
		Global_78341[0 /*14*/].f_5 = 3;
		func_222(num5, iParam0, 327, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, -1757550583, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_18);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, 97230661, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_20);
			else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, 1147826474, 1))
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_21);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_245(int iParam0, Hash hParam1) // Position - 0x29A83 Hash - 0x532BD76A ^0x96AC33C9
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 10;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("No Crew Emblem"), 16);
			num2 = 0;
			num3 = 0;
			num = 0;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Small Crew Emblem"), 16);
			num2 = 1;
			num3 = 0;
			num = 5000;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 2;
			num3 = 0;
			num = 10000;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Small Crew Emblem"), 16);
			num2 = 3;
			num3 = 0;
			num = 5000;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 4;
			num3 = 0;
			num = 10000;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Small Crew Emblem"), 16);
			num2 = 5;
			num3 = 0;
			num = 5000;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Large Crew Emblem"), 16);
			num2 = 6;
			num3 = 0;
			num = 10000;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num6, iParam0, 7, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_246(int iParam0, Hash hParam1) // Position - 0x29BA4 Hash - 0x31CAA5FE ^0x31CAA5FE
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 7;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 3;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 3;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 3;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 17:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 18:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 20:
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 21:
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 22:
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 23:
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 24:
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 25:
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			break;
	
		case 39:
			num = 8;
			num2 = 0;
			break;
	
		case 40:
			num = 9;
			num2 = 0;
			break;
	
		case 41:
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_4182 != -1)
				value = Global_262145.f_4182;
			else
				value = 115;
			break;
	
		case 42:
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_4183 != -1)
				value = Global_262145.f_4183;
			else
				value = 125;
			break;
	
		case 43:
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_4184 != -1)
				value = Global_262145.f_4184;
			else
				value = 130;
			break;
	
		case 44:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 49:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 50:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 51:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 52:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 53:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 54:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 55:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 56:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 57:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 58:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 59:
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_4188 != -1)
				value = Global_262145.f_4188;
			else
				value = 725;
			break;
	
		case 60:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 61:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 62:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 63:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 64:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 65:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 67:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 12;
			num2 = 0;
		
			if (Global_262145.f_4185 != -1)
				value = Global_262145.f_4185;
			else
				value = 65;
			break;
	
		case 74:
			num = 12;
			num2 = 1;
		
			if (Global_262145.f_4186 != -1)
				value = Global_262145.f_4186;
			else
				value = 65;
			break;
	
		case 75:
			num = 12;
			num2 = 2;
		
			if (Global_262145.f_4187 != -1)
				value = Global_262145.f_4187;
			else
				value = 95;
			break;
	
		case 76:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 12;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 12;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 12;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 81:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 82:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 83:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 13;
			num2 = 0;
			break;
	
		case 90:
			num = 14;
			num2 = 0;
			break;
	
		case 91:
			num = 15;
			num2 = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num5, iParam0, 92, hParam1);
		
			if (Global_78341[0 /*14*/].f_7 > 0)
				Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_57);
		
			return;
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_57);
	TEXT_LABEL_ASSIGN_STRING(&unk, "T_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_247(int iParam0, Hash hParam1) // Position - 0x2A49C Hash - 0x8F60B7F6 ^0x8F60B7F6
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 1;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 965;
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 960;
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 9500;
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 975;
			break;
	
		case 5:
			num = 2;
			num2 = 0;
			value = 1185;
			break;
	
		case 6:
			num = 2;
			num2 = 1;
			value = 15000;
			break;
	
		case 7:
			num = 2;
			num2 = 2;
			value = 1115;
			break;
	
		case 8:
			num = 2;
			num2 = 3;
			value = 1105;
			break;
	
		case 9:
			num = 3;
			num2 = 0;
			value = 25000;
			break;
	
		case 10:
			num = 4;
			num2 = 0;
			value = 510;
			break;
	
		case 11:
			num = 4;
			num2 = 1;
			value = 530;
			break;
	
		case 12:
			num = 4;
			num2 = 2;
			value = 5500;
			break;
	
		case 13:
			num = 4;
			num2 = 3;
			value = 535;
			break;
	
		case 14:
			num = 5;
			num2 = 0;
			value = 1510;
			break;
	
		case 15:
			num = 5;
			num2 = 1;
			value = 1530;
			break;
	
		case 16:
			num = 5;
			num2 = 2;
			value = 14500;
			break;
	
		case 17:
			num = 5;
			num2 = 3;
			value = 13000;
			break;
	
		case 18:
			num = 6;
			num2 = 0;
			value = 8000;
			break;
	
		case 19:
			num = 6;
			num2 = 1;
			value = 1265;
			break;
	
		case 20:
			num = 6;
			num2 = 2;
			value = 8500;
			break;
	
		case 21:
			num = 6;
			num2 = 3;
			value = 1210;
			break;
	
		case 22:
			num = 7;
			num2 = 0;
			value = 2360;
			break;
	
		case 23:
			num = 7;
			num2 = 1;
			value = 22500;
			break;
	
		case 24:
			num = 7;
			num2 = 2;
			value = 2375;
			break;
	
		case 25:
			num = 7;
			num2 = 3;
			value = 2485;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num5, iParam0, 26, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "M_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0 - 1;

	if (num6 >= 0 && num6 < 26)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_938[num6] * Global_296940.f_22);

	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_248(int iParam0, Hash hParam1) // Position - 0x2A753 Hash - 0x154FE8B3 ^0x154FE8B3
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 6;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 300;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 285;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 180;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 190;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 190;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 165;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 200;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 480;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 155;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 350;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 290;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 165;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 165;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 170;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 155;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 165;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 165;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 160;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 205;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 560;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 275;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 290;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 300;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 360;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 270;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 265;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 295;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 355;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 340;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 285;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 310;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 350;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 305;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 280;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 320;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 115;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 115;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 110;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 125;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 50;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 35;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 50;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 65;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 65;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 112:
			num = 7;
			num2 = 0;
			value = 165;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 165;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 185;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 175;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 185;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 460;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 185;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 190;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 165;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 165;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 185;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 175;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 235;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 445;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 185;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 190;
			break;
	}

	switch (iParam0)
	{
		case 128:
			num = 8;
			num2 = 0;
			value = 175;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 215;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 225;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 230;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 235;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 215;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 205;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 245;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 225;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 215;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 225;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 230;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 235;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 215;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 425;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 245;
			break;
	
		case 144:
			num = 9;
			num2 = 0;
			value = 225;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 135;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 130;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 110;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 140;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 100;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 110;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 95;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 105;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 105;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 115;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 115;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 115;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 500;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 440;
			break;
	}

	switch (iParam0)
	{
		case 160:
			num = 10;
			num2 = 0;
			value = 1090;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 600;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 1865;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 490;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 470;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 1795;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 1830;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 455;
			break;
	}

	switch (iParam0)
	{
		case 192:
			num = 12;
			num2 = 0;
			value = 455;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 2110;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 380;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 1655;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 2500;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 415;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 730;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 445;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 425;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 410;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 480;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 485;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 480;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 395;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 495;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 2090;
			break;
	
		case 208:
			num = 13;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 224:
			num = 14;
			num2 = 0;
			value = 450;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 685;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 420;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 365;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 465;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 405;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 400;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 385;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 435;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 375;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 390;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 475;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 430;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 490;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 490;
			break;
	
		case 240:
			num = 15;
			num2 = 0;
			value = 615;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 315;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 415;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 425;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 435;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 445;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 640;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 460;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 465;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 745;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 845;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 1420;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 475;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 470;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 1000;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 690;
			break;
	}

	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_681[num6] * Global_296940.f_17);

	TEXT_LABEL_ASSIGN_STRING(&unk, "F_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 3;
		func_222(num5, iParam0, 256, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_17);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_249(int iParam0, Hash hParam1) // Position - 0x2BD90 Hash - 0xB448FE2B ^0xBF13E827
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 4;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 335;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 460;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 455;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 470;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 650;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 385;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 455;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 2150;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 375;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 2190;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 285;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 295;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 445;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 2240;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 465;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 1740;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 1415;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 325;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 345;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 355;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 395;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 315;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 275;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 265;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 305;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 255;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 235;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 245;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 215;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 1865;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 450;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 415;
			break;
	
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 100;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 48:
			num = 3;
			num2 = 0;
			value = 55;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 60;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 100;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 65;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 65;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 100;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 100;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 65;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 90;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 75;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 65;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 100;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 100;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 225;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 205;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 215;
			break;
	
		case 64:
			num = 4;
			num2 = 0;
			value = 490;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 485;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2500;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 485;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 80:
			num = 5;
			num2 = 0;
			value = 100;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 105;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 80;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 90;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 100;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 95;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 100;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 90;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 85;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 80;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 80;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 100;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 95;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 440;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 380;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 80;
			break;
	
		case 96:
			num = 6;
			num2 = 0;
			value = 115;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 140;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 135;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 255;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 108:
			num = 6;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 109:
			num = 6;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 110:
			num = 6;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 111:
			num = 6;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 112:
			num = 7;
			num2 = 0;
			value = 325;
			break;
	
		case 113:
			num = 7;
			num2 = 1;
			value = 115;
			break;
	
		case 114:
			num = 7;
			num2 = 2;
			value = 135;
			break;
	
		case 115:
			num = 7;
			num2 = 3;
			value = 125;
			break;
	
		case 116:
			num = 7;
			num2 = 4;
			value = 120;
			break;
	
		case 117:
			num = 7;
			num2 = 5;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 6;
			value = 110;
			break;
	
		case 119:
			num = 7;
			num2 = 7;
			value = 345;
			break;
	
		case 120:
			num = 7;
			num2 = 8;
			value = 745;
			break;
	
		case 121:
			num = 7;
			num2 = 9;
			value = 120;
			break;
	
		case 122:
			num = 7;
			num2 = 10;
			value = 135;
			break;
	
		case 123:
			num = 7;
			num2 = 11;
			value = 345;
			break;
	
		case 124:
			num = 7;
			num2 = 12;
			value = 130;
			break;
	
		case 125:
			num = 7;
			num2 = 13;
			value = 140;
			break;
	
		case 126:
			num = 7;
			num2 = 14;
			value = 130;
			break;
	
		case 127:
			num = 7;
			num2 = 15;
			value = 660;
			break;
	
		case 128:
			num = 8;
			num2 = 0;
			value = 150;
			break;
	
		case 129:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 3;
			value = 150;
			break;
	
		case 132:
			num = 8;
			num2 = 4;
			value = 150;
			break;
	
		case 133:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 135:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 138:
			num = 8;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 139:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 141:
			num = 8;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 142:
			num = 8;
			num2 = 14;
			value = 150;
			break;
	
		case 143:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 144:
			num = 9;
			num2 = 0;
			value = 75;
			break;
	
		case 145:
			num = 9;
			num2 = 1;
			value = 90;
			break;
	
		case 146:
			num = 9;
			num2 = 2;
			value = 145;
			break;
	
		case 147:
			num = 9;
			num2 = 3;
			value = 150;
			break;
	
		case 148:
			num = 9;
			num2 = 4;
			value = 110;
			break;
	
		case 149:
			num = 9;
			num2 = 5;
			value = 95;
			break;
	
		case 150:
			num = 9;
			num2 = 6;
			value = 155;
			break;
	
		case 151:
			num = 9;
			num2 = 7;
			value = 255;
			break;
	
		case 152:
			num = 9;
			num2 = 8;
			value = 165;
			break;
	
		case 153:
			num = 9;
			num2 = 9;
			value = 1150;
			break;
	
		case 154:
			num = 9;
			num2 = 10;
			value = 1150;
			break;
	
		case 155:
			num = 9;
			num2 = 11;
			value = 1210;
			break;
	
		case 156:
			num = 9;
			num2 = 12;
			value = 1125;
			break;
	
		case 157:
			num = 9;
			num2 = 13;
			value = 1135;
			break;
	
		case 158:
			num = 9;
			num2 = 14;
			value = 1145;
			break;
	
		case 159:
			num = 9;
			num2 = 15;
			value = 1145;
			break;
	
		case 160:
			num = 10;
			num2 = 0;
			value = 845;
			break;
	
		case 161:
			num = 10;
			num2 = 1;
			value = 480;
			break;
	
		case 162:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 163:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 173:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 174:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 176:
			num = 11;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 180:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 187:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 188:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 189:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 190:
			num = 11;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 191:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 192:
			num = 12;
			num2 = 0;
			value = 220;
			break;
	
		case 193:
			num = 12;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 194:
			num = 12;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 195:
			num = 12;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 196:
			num = 12;
			num2 = 4;
			value = 100;
			break;
	
		case 197:
			num = 12;
			num2 = 5;
			value = 65;
			break;
	
		case 198:
			num = 12;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 199:
			num = 12;
			num2 = 7;
			value = 50;
			break;
	
		case 200:
			num = 12;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 12;
			num2 = 12;
			value = 100;
			break;
	
		case 205:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 206:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 207:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 208:
			num = 13;
			num2 = 0;
			value = 460;
			break;
	
		case 209:
			num = 13;
			num2 = 1;
			value = 475;
			break;
	
		case 210:
			num = 13;
			num2 = 2;
			value = 470;
			break;
	
		case 211:
			num = 13;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 218:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 220:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 221:
			num = 13;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 222:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 223:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 224:
			num = 14;
			num2 = 0;
			value = 50;
			break;
	
		case 225:
			num = 14;
			num2 = 1;
			value = 100;
			break;
	
		case 226:
			num = 14;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 227:
			num = 14;
			num2 = 3;
			value = 100;
			break;
	
		case 228:
			num = 14;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 229:
			num = 14;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 230:
			num = 14;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 231:
			num = 14;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 232:
			num = 14;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 233:
			num = 14;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 234:
			num = 14;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 235:
			num = 14;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 236:
			num = 14;
			num2 = 12;
			value = 100;
			break;
	
		case 237:
			num = 14;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 238:
			num = 14;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 239:
			num = 14;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 240:
			num = 15;
			num2 = 0;
			value = 90;
			break;
	
		case 241:
			num = 15;
			num2 = 1;
			value = 105;
			break;
	
		case 242:
			num = 15;
			num2 = 2;
			value = 100;
			break;
	
		case 243:
			num = 15;
			num2 = 3;
			value = 240;
			break;
	
		case 244:
			num = 15;
			num2 = 4;
			value = 95;
			break;
	
		case 245:
			num = 15;
			num2 = 5;
			value = 95;
			break;
	
		case 246:
			num = 15;
			num2 = 6;
			value = 100;
			break;
	
		case 247:
			num = 15;
			num2 = 7;
			value = 105;
			break;
	
		case 248:
			num = 15;
			num2 = 8;
			value = 100;
			break;
	
		case 249:
			num = 15;
			num2 = 9;
			value = 295;
			break;
	
		case 250:
			num = 15;
			num2 = 10;
			value = 250;
			break;
	
		case 251:
			num = 15;
			num2 = 11;
			value = 285;
			break;
	
		case 252:
			num = 15;
			num2 = 12;
			value = 275;
			break;
	
		case 253:
			num = 15;
			num2 = 13;
			value = 105;
			break;
	
		case 254:
			num = 15;
			num2 = 14;
			value = 100;
			break;
	
		case 255:
			num = 15;
			num2 = 15;
			value = 95;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "L_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	num6 = iParam0;

	if (num6 >= 0 && num6 < 256)
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_186[num6] * Global_296940.f_15);

	if (iParam0 >= 256)
	{
		Global_78341[0 /*14*/].f_5 = 3;
		func_222(num5, iParam0, 256, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_15);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_250(int iParam0, Hash hParam1) // Position - 0x2D3C3 Hash - 0xE0A1579F ^0xE0A1579F
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 3;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 2;
			num3 = 0;
			break;
	
		case 3:
			num2 = 3;
			num3 = 0;
			break;
	
		case 4:
			num2 = 4;
			num3 = 0;
			break;
	
		case 5:
			num2 = 5;
			num3 = 0;
			break;
	
		case 6:
			num2 = 6;
			num3 = 0;
			break;
	
		case 7:
			num2 = 7;
			num3 = 0;
			break;
	
		case 8:
			num2 = 8;
			num3 = 0;
			break;
	
		case 9:
			num2 = 9;
			num3 = 0;
			break;
	
		case 10:
			num2 = 10;
			num3 = 0;
			break;
	
		case 11:
			num2 = 11;
			num3 = 0;
			break;
	
		case 12:
			num2 = 12;
			num3 = 0;
			break;
	
		case 13:
			num2 = 13;
			num3 = 0;
			break;
	
		case 14:
			num2 = 14;
			num3 = 0;
			break;
	
		case 15:
			num2 = 15;
			num3 = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num6, iParam0, 16, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_251(int iParam0, Hash hParam1) // Position - 0x2D51A Hash - 0x1DB3E93C ^0x1DB3E93C
{
	BOOL flag;
	int num;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num2;
	int num3;

	flag = false;
	num = 10;
	num2 = 0;
	num3 = 0;
	num4 = -1;
	num5 = 2;
	num6 = 9;

	switch (iParam0)
	{
		case 0:
			num2 = 0;
			num3 = 0;
			break;
	
		case 1:
			num2 = 1;
			num3 = 0;
			break;
	
		case 2:
			num2 = 1;
			num3 = 1;
			break;
	
		case 3:
			num2 = 1;
			num3 = 2;
			break;
	
		case 4:
			num2 = 1;
			num3 = 3;
			break;
	
		case 5:
			num2 = 1;
			num3 = 4;
			break;
	
		case 6:
			num2 = 2;
			num3 = 0;
			break;
	
		case 7:
			num2 = 2;
			num3 = 1;
			break;
	
		case 8:
			num2 = 2;
			num3 = 2;
			break;
	
		case 9:
			num2 = 2;
			num3 = 3;
			break;
	
		case 10:
			num2 = 2;
			num3 = 4;
			break;
	
		case 11:
			num2 = 3;
			num3 = 0;
			break;
	
		case 12:
			num2 = 3;
			num3 = 1;
			break;
	
		case 13:
			num2 = 3;
			num3 = 2;
			break;
	
		case 14:
			num2 = 3;
			num3 = 3;
			break;
	
		case 15:
			num2 = 3;
			num3 = 4;
			break;
	
		case 16:
			num2 = 4;
			num3 = 0;
			break;
	
		case 17:
			num2 = 4;
			num3 = 1;
			break;
	
		case 18:
			num2 = 4;
			num3 = 2;
			break;
	
		case 19:
			num2 = 4;
			num3 = 3;
			break;
	
		case 20:
			num2 = 4;
			num3 = 4;
			break;
	
		case 21:
			num2 = 5;
			num3 = 0;
			break;
	
		case 22:
			num2 = 5;
			num3 = 1;
			break;
	
		case 23:
			num2 = 5;
			num3 = 2;
			break;
	
		case 24:
			num2 = 5;
			num3 = 3;
			break;
	
		case 25:
			num2 = 5;
			num3 = 4;
			break;
	
		case 26:
			num2 = 6;
			num3 = 0;
			break;
	
		case 27:
			num2 = 6;
			num3 = 1;
			break;
	
		case 28:
			num2 = 6;
			num3 = 2;
			break;
	
		case 29:
			num2 = 6;
			num3 = 3;
			break;
	
		case 30:
			num2 = 6;
			num3 = 4;
			break;
	
		case 31:
			num2 = 7;
			num3 = 0;
			break;
	
		case 32:
			num2 = 7;
			num3 = 1;
			break;
	
		case 33:
			num2 = 7;
			num3 = 2;
			break;
	
		case 34:
			num2 = 7;
			num3 = 3;
			break;
	
		case 35:
			num2 = 7;
			num3 = 4;
			break;
	
		case 36:
			num2 = 8;
			num3 = 0;
			break;
	
		case 37:
			num2 = 8;
			num3 = 1;
			break;
	
		case 38:
			num2 = 8;
			num3 = 2;
			break;
	
		case 39:
			num2 = 8;
			num3 = 3;
			break;
	
		case 40:
			num2 = 8;
			num3 = 4;
			break;
	
		case 41:
			num2 = 9;
			num3 = 0;
			break;
	
		case 42:
			num2 = 9;
			num3 = 1;
			break;
	
		case 43:
			num2 = 9;
			num3 = 2;
			break;
	
		case 44:
			num2 = 9;
			num3 = 3;
			break;
	
		case 45:
			num2 = 9;
			num3 = 4;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num6, iParam0, 46, hParam1);
			return;
	}

	func_212(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
	return;
}

void func_252(int iParam0, Hash hParam1) // Position - 0x2D836 Hash - 0xE646E909 ^0x62B9EFF6
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 8;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crew T-Shirt"), 16);
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yeti T-Shirt"), 16);
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal T-Shirt"), 16);
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stank T-Shirt"), 16);
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ranch T-Shirt"), 16);
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pikeys T-Shirt"), 16);
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 0;
			num2 = 6;
			flag = true;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Multi-Logo T-Shirt"), 16);
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sweatbox T-Shirt"), 16);
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 0;
			num2 = 9;
			flag = true;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 0;
			num2 = 10;
			flag = true;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Eris T-Shirt"), 16);
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 0;
			num2 = 12;
			flag = true;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 0;
			num2 = 13;
			flag = true;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 0;
			num2 = 14;
			flag = true;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 0;
			num2 = 15;
			flag = true;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White V Neck"), 16);
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash V Neck"), 16);
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 1;
			num2 = 2;
			flag = true;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Swallow V Neck"), 16);
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Harsh Souls V Neck"), 16);
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Broker V Neck"), 16);
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hip-Hop Royalty V Neck"), 16);
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green V Neck"), 16);
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("G&B V Neck"), 16);
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 1;
			num2 = 9;
			flag = true;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 1;
			num2 = 10;
			flag = true;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange V Neck"), 16);
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown V Neck"), 16);
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 1;
			num2 = 13;
			flag = true;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Signs V Neck"), 16);
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Striped V Neck"), 16);
			num = 1;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Crew T-Shirt"), 16);
			num = 2;
			num2 = 0;
			value = 250;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Yeti T-Shirt"), 16);
			num = 2;
			num2 = 1;
			value = 210;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal T-Shirt"), 16);
			num = 2;
			num2 = 2;
			value = 50;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Stank T-Shirt"), 16);
			num = 2;
			num2 = 3;
			value = 90;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ranch T-Shirt"), 16);
			num = 2;
			num2 = 4;
			value = 210;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pikeys T-Shirt"), 16);
			num = 2;
			num2 = 5;
			value = 200;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_6", 16);
			num = 2;
			num2 = 6;
			flag = true;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Multi-Logo T-Shirt"), 16);
			num = 2;
			num2 = 7;
			value = 130;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sweatbox T-Shirt"), 16);
			num = 2;
			num2 = 8;
			value = 220;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_9", 16);
			num = 2;
			num2 = 9;
			flag = true;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_10", 16);
			num = 2;
			num2 = 10;
			flag = true;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Eris T-Shirt"), 16);
			num = 2;
			num2 = 11;
			value = 220;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_12", 16);
			num = 2;
			num2 = 12;
			flag = true;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_13", 16);
			num = 2;
			num2 = 13;
			flag = true;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_14", 16);
			num = 2;
			num2 = 14;
			flag = true;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_0_15", 16);
			num = 2;
			num2 = 15;
			flag = true;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Vest"), 16);
			num = 3;
			num2 = 0;
		
			if (Global_262145.f_4191 != -1)
				value = Global_262145.f_4191;
			else
				value = 165;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Vest"), 16);
			num = 3;
			num2 = 1;
		
			if (Global_262145.f_4199 != -1)
				value = Global_262145.f_4199;
			else
				value = 120;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Vest"), 16);
			num = 3;
			num2 = 2;
		
			if (Global_262145.f_4194 != -1)
				value = Global_262145.f_4194;
			else
				value = 115;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 3;
			num2 = 3;
			flag = true;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 3;
			num2 = 4;
			flag = true;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 3;
			num2 = 5;
			flag = true;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 3;
			num2 = 6;
			flag = true;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 3;
			num2 = 7;
			flag = true;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 3;
			num2 = 8;
			flag = true;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 3;
			num2 = 9;
			flag = true;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 3;
			num2 = 10;
			flag = true;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 3;
			num2 = 11;
			flag = true;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 3;
			num2 = 12;
			flag = true;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 3;
			num2 = 13;
			flag = true;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 3;
			num2 = 14;
			flag = true;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 3;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 64:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Vest"), 16);
			num = 4;
			num2 = 0;
		
			if (Global_262145.f_4191 != -1)
				value = Global_262145.f_4191;
			else
				value = 165;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Vest"), 16);
			num = 4;
			num2 = 1;
		
			if (Global_262145.f_4199 != -1)
				value = Global_262145.f_4199;
			else
				value = 120;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Vest"), 16);
			num = 4;
			num2 = 2;
		
			if (Global_262145.f_4194 != -1)
				value = Global_262145.f_4194;
			else
				value = 115;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_3", 16);
			num = 4;
			num2 = 3;
			flag = true;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_4", 16);
			num = 4;
			num2 = 4;
			flag = true;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_5", 16);
			num = 4;
			num2 = 5;
			flag = true;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_6", 16);
			num = 4;
			num2 = 6;
			flag = true;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_7", 16);
			num = 4;
			num2 = 7;
			flag = true;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_8", 16);
			num = 4;
			num2 = 8;
			flag = true;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_9", 16);
			num = 4;
			num2 = 9;
			flag = true;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_10", 16);
			num = 4;
			num2 = 10;
			flag = true;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_11", 16);
			num = 4;
			num2 = 11;
			flag = true;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_12", 16);
			num = 4;
			num2 = 12;
			flag = true;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_13", 16);
			num = 4;
			num2 = 13;
			flag = true;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_14", 16);
			num = 4;
			num2 = 14;
			flag = true;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SP_FMM_3_15", 16);
			num = 4;
			num2 = 15;
			flag = true;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Tank"), 16);
			num = 5;
			num2 = 0;
			value = 80;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[80]);
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Tank"), 16);
			num = 5;
			num2 = 1;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[81]);
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Tank"), 16);
			num = 5;
			num2 = 2;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[82]);
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_3", 16);
			num = 5;
			num2 = 3;
			flag = true;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_4", 16);
			num = 5;
			num2 = 4;
			flag = true;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_5", 16);
			num = 5;
			num2 = 5;
			flag = true;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_6", 16);
			num = 5;
			num2 = 6;
			flag = true;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Tank"), 16);
			num = 5;
			num2 = 7;
			value = 50;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[87]);
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_8", 16);
			num = 5;
			num2 = 8;
			flag = true;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_9", 16);
			num = 5;
			num2 = 9;
			flag = true;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_10", 16);
			num = 5;
			num2 = 10;
			flag = true;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_11", 16);
			num = 5;
			num2 = 11;
			flag = true;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_12", 16);
			num = 5;
			num2 = 12;
			flag = true;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_13", 16);
			num = 5;
			num2 = 13;
			flag = true;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_14", 16);
			num = 5;
			num2 = 14;
			flag = true;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_5_15", 16);
			num = 5;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Shirt"), 16);
			num = 6;
			num2 = 0;
		
			if (Global_262145.f_4212 != -1)
				value = Global_262145.f_4212;
			else
				value = 420;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Shirt"), 16);
			num = 6;
			num2 = 1;
		
			if (Global_262145.f_4210 != -1)
				value = Global_262145.f_4210;
			else
				value = 415;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Shirt"), 16);
			num = 6;
			num2 = 2;
		
			if (Global_262145.f_4190 != -1)
				value = Global_262145.f_4190;
			else
				value = 440;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Shirt"), 16);
			num = 6;
			num2 = 3;
		
			if (Global_262145.f_4204 != -1)
				value = Global_262145.f_4204;
			else
				value = 400;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Barely Blue Shirt"), 16);
			num = 6;
			num2 = 4;
		
			if (Global_262145.f_4189 != -1)
				value = Global_262145.f_4189;
			else
				value = 400;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Check Shirt"), 16);
			num = 6;
			num2 = 5;
		
			if (Global_262145.f_4206 != -1)
				value = Global_262145.f_4206;
			else
				value = 410;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salmon Shirt"), 16);
			num = 6;
			num2 = 6;
		
			if (Global_262145.f_4209 != -1)
				value = Global_262145.f_4209;
			else
				value = 435;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Olive Shirt"), 16);
			num = 6;
			num2 = 7;
		
			if (Global_262145.f_4205 != -1)
				value = Global_262145.f_4205;
			else
				value = 425;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fuchsia Shirt"), 16);
			num = 6;
			num2 = 8;
		
			if (Global_262145.f_4198 != -1)
				value = Global_262145.f_4198;
			else
				value = 435;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Off-White Shirt"), 16);
			num = 6;
			num2 = 9;
		
			if (Global_262145.f_4203 != -1)
				value = Global_262145.f_4203;
			else
				value = 420;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint Shirt"), 16);
			num = 6;
			num2 = 10;
		
			if (Global_262145.f_4201 != -1)
				value = Global_262145.f_4201;
			else
				value = 425;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Shirt"), 16);
			num = 6;
			num2 = 11;
		
			if (Global_262145.f_4211 != -1)
				value = Global_262145.f_4211;
			else
				value = 425;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Dark Salmon Shirt"), 16);
			num = 6;
			num2 = 12;
		
			if (Global_262145.f_4197 != -1)
				value = Global_262145.f_4197;
			else
				value = 435;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Check Shirt"), 16);
			num = 6;
			num2 = 13;
		
			if (Global_262145.f_4192 != -1)
				value = Global_262145.f_4192;
			else
				value = 750;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Shirt"), 16);
			num = 6;
			num2 = 14;
		
			if (Global_262145.f_4207 != -1)
				value = Global_262145.f_4207;
			else
				value = 400;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Lemon Shirt"), 16);
			num = 6;
			num2 = 15;
		
			if (Global_262145.f_4200 != -1)
				value = Global_262145.f_4200;
			else
				value = 435;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Shirt"), 16);
			num = 7;
			num2 = 0;
		
			if (Global_262145.f_4212 != -1)
				value = Global_262145.f_4212;
			else
				value = 420;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Shirt"), 16);
			num = 7;
			num2 = 1;
		
			if (Global_262145.f_4210 != -1)
				value = Global_262145.f_4210;
			else
				value = 415;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Shirt"), 16);
			num = 7;
			num2 = 2;
		
			if (Global_262145.f_4190 != -1)
				value = Global_262145.f_4190;
			else
				value = 440;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Shirt"), 16);
			num = 7;
			num2 = 3;
		
			if (Global_262145.f_4204 != -1)
				value = Global_262145.f_4204;
			else
				value = 400;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Barely Blue Shirt"), 16);
			num = 7;
			num2 = 4;
		
			if (Global_262145.f_4189 != -1)
				value = Global_262145.f_4189;
			else
				value = 400;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Check Shirt"), 16);
			num = 7;
			num2 = 5;
		
			if (Global_262145.f_4206 != -1)
				value = Global_262145.f_4206;
			else
				value = 410;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salmon Shirt"), 16);
			num = 7;
			num2 = 6;
		
			if (Global_262145.f_4209 != -1)
				value = Global_262145.f_4209;
			else
				value = 435;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Olive Shirt"), 16);
			num = 7;
			num2 = 7;
		
			if (Global_262145.f_4205 != -1)
				value = Global_262145.f_4205;
			else
				value = 425;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fuchsia Shirt"), 16);
			num = 7;
			num2 = 8;
		
			if (Global_262145.f_4198 != -1)
				value = Global_262145.f_4198;
			else
				value = 435;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Off-White Shirt"), 16);
			num = 7;
			num2 = 9;
		
			if (Global_262145.f_4203 != -1)
				value = Global_262145.f_4203;
			else
				value = 420;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint Shirt"), 16);
			num = 7;
			num2 = 10;
		
			if (Global_262145.f_4201 != -1)
				value = Global_262145.f_4201;
			else
				value = 425;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Shirt"), 16);
			num = 7;
			num2 = 11;
		
			if (Global_262145.f_4211 != -1)
				value = Global_262145.f_4211;
			else
				value = 425;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Dark Salmon Shirt"), 16);
			num = 7;
			num2 = 12;
		
			if (Global_262145.f_4197 != -1)
				value = Global_262145.f_4197;
			else
				value = 435;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Check Shirt"), 16);
			num = 7;
			num2 = 13;
		
			if (Global_262145.f_4192 != -1)
				value = Global_262145.f_4192;
			else
				value = 750;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Shirt"), 16);
			num = 7;
			num2 = 14;
		
			if (Global_262145.f_4207 != -1)
				value = Global_262145.f_4207;
			else
				value = 400;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Lemon Shirt"), 16);
			num = 7;
			num2 = 15;
		
			if (Global_262145.f_4200 != -1)
				value = Global_262145.f_4200;
			else
				value = 435;
			break;
	}

	switch (iParam0)
	{
		case 128:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Accent Tee"), 16);
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_1", 16);
			num = 8;
			num2 = 1;
			flag = true;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_2", 16);
			num = 8;
			num2 = 2;
			flag = true;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_3", 16);
			num = 8;
			num2 = 3;
			flag = true;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_4", 16);
			num = 8;
			num2 = 4;
			flag = true;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_5", 16);
			num = 8;
			num2 = 5;
			flag = true;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_6", 16);
			num = 8;
			num2 = 6;
			flag = true;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_7", 16);
			num = 8;
			num2 = 7;
			flag = true;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_8", 16);
			num = 8;
			num2 = 8;
			flag = true;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_9", 16);
			num = 8;
			num2 = 9;
			flag = true;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sky Blue Tee"), 16);
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_11", 16);
			num = 8;
			num2 = 11;
			flag = true;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_12", 16);
			num = 8;
			num2 = 12;
			flag = true;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Slate Tee"), 16);
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Gray Two-Tone Tee"), 16);
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_8_15", 16);
			num = 8;
			num2 = 15;
			flag = true;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Striped Polo Shirt"), 16);
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Metal Polo Shirt"), 16);
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Night Polo Shirt"), 16);
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Cupcake Polo Shirt"), 16);
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Polo Shirt"), 16);
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Vibe Polo Shirt"), 16);
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salmon Polo Shirt"), 16);
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Royale Polo Shirt"), 16);
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_8", 16);
			num = 9;
			num2 = 8;
			flag = true;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_9_9", 16);
			num = 9;
			num2 = 9;
			flag = true;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pro Lite Polo Shirt"), 16);
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ice Polo Shirt"), 16);
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Money Polo Shirt"), 16);
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hunter Polo Shirt"), 16);
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Polo Shirt"), 16);
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sunshine Polo Shirt"), 16);
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 160:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Shirt"), 16);
			num = 10;
			num2 = 0;
		
			if (Global_262145.f_4212 != -1)
				value = Global_262145.f_4212;
			else
				value = 405;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Shirt"), 16);
			num = 10;
			num2 = 1;
		
			if (Global_262145.f_4210 != -1)
				value = Global_262145.f_4210;
			else
				value = 400;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Shirt"), 16);
			num = 10;
			num2 = 2;
		
			if (Global_262145.f_4196 != -1)
				value = Global_262145.f_4196;
			else
				value = 425;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Shirt"), 16);
			num = 10;
			num2 = 3;
		
			if (Global_262145.f_4204 != -1)
				value = Global_262145.f_4204;
			else
				value = 385;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Barely Blue Shirt"), 16);
			num = 10;
			num2 = 4;
		
			if (Global_262145.f_4189 != -1)
				value = Global_262145.f_4189;
			else
				value = 385;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Check Shirt"), 16);
			num = 10;
			num2 = 5;
		
			if (Global_262145.f_4206 != -1)
				value = Global_262145.f_4206;
			else
				value = 395;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Woven Shirt"), 16);
			num = 10;
			num2 = 6;
		
			if (Global_262145.f_4195 != -1)
				value = Global_262145.f_4195;
			else
				value = 500;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salmon Shirt"), 16);
			num = 10;
			num2 = 7;
		
			if (Global_262145.f_4209 != -1)
				value = Global_262145.f_4209;
			else
				value = 420;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Olive Shirt"), 16);
			num = 10;
			num2 = 8;
		
			if (Global_262145.f_4205 != -1)
				value = Global_262145.f_4205;
			else
				value = 410;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fuchsia Shirt"), 16);
			num = 10;
			num2 = 9;
		
			if (Global_262145.f_4198 != -1)
				value = Global_262145.f_4198;
			else
				value = 420;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Off-White Shirt"), 16);
			num = 10;
			num2 = 10;
		
			if (Global_262145.f_4203 != -1)
				value = Global_262145.f_4203;
			else
				value = 405;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint Shirt"), 16);
			num = 10;
			num2 = 11;
		
			if (Global_262145.f_4201 != -1)
				value = Global_262145.f_4201;
			else
				value = 410;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Striped Shirt"), 16);
			num = 10;
			num2 = 12;
		
			if (Global_262145.f_4193 != -1)
				value = Global_262145.f_4193;
			else
				value = 420;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Striped Shirt"), 16);
			num = 10;
			num2 = 13;
		
			if (Global_262145.f_4208 != -1)
				value = Global_262145.f_4208;
			else
				value = 420;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Shirt"), 16);
			num = 10;
			num2 = 14;
		
			if (Global_262145.f_4211 != -1)
				value = Global_262145.f_4211;
			else
				value = 410;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ocean Stripe Shirt"), 16);
			num = 10;
			num2 = 15;
		
			if (Global_262145.f_4202 != -1)
				value = Global_262145.f_4202;
			else
				value = 460;
			break;
	
		case 176:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Shirt"), 16);
			num = 11;
			num2 = 0;
		
			if (Global_262145.f_4212 != -1)
				value = Global_262145.f_4212;
			else
				value = 405;
			break;
	
		case 177:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Shirt"), 16);
			num = 11;
			num2 = 1;
		
			if (Global_262145.f_4210 != -1)
				value = Global_262145.f_4210;
			else
				value = 400;
			break;
	
		case 178:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Charcoal Shirt"), 16);
			num = 11;
			num2 = 2;
		
			if (Global_262145.f_4196 != -1)
				value = Global_262145.f_4196;
			else
				value = 425;
			break;
	
		case 179:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Blue Shirt"), 16);
			num = 11;
			num2 = 3;
		
			if (Global_262145.f_4204 != -1)
				value = Global_262145.f_4204;
			else
				value = 385;
			break;
	
		case 180:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Barely Blue Shirt"), 16);
			num = 11;
			num2 = 4;
		
			if (Global_262145.f_4189 != -1)
				value = Global_262145.f_4189;
			else
				value = 385;
			break;
	
		case 181:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Check Shirt"), 16);
			num = 11;
			num2 = 5;
		
			if (Global_262145.f_4206 != -1)
				value = Global_262145.f_4206;
			else
				value = 395;
			break;
	
		case 182:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Woven Shirt"), 16);
			num = 11;
			num2 = 6;
		
			if (Global_262145.f_4195 != -1)
				value = Global_262145.f_4195;
			else
				value = 500;
			break;
	
		case 183:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Salmon Shirt"), 16);
			num = 11;
			num2 = 7;
		
			if (Global_262145.f_4209 != -1)
				value = Global_262145.f_4209;
			else
				value = 420;
			break;
	
		case 184:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pale Olive Shirt"), 16);
			num = 11;
			num2 = 8;
		
			if (Global_262145.f_4205 != -1)
				value = Global_262145.f_4205;
			else
				value = 410;
			break;
	
		case 185:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Fuchsia Shirt"), 16);
			num = 11;
			num2 = 9;
		
			if (Global_262145.f_4198 != -1)
				value = Global_262145.f_4198;
			else
				value = 420;
			break;
	
		case 186:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Off-White Shirt"), 16);
			num = 11;
			num2 = 10;
		
			if (Global_262145.f_4203 != -1)
				value = Global_262145.f_4203;
			else
				value = 405;
			break;
	
		case 187:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mint Shirt"), 16);
			num = 11;
			num2 = 11;
		
			if (Global_262145.f_4201 != -1)
				value = Global_262145.f_4201;
			else
				value = 410;
			break;
	
		case 188:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Striped Shirt"), 16);
			num = 11;
			num2 = 12;
		
			if (Global_262145.f_4193 != -1)
				value = Global_262145.f_4193;
			else
				value = 420;
			break;
	
		case 189:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Pink Striped Shirt"), 16);
			num = 11;
			num2 = 13;
		
			if (Global_262145.f_4208 != -1)
				value = Global_262145.f_4208;
			else
				value = 420;
			break;
	
		case 190:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Tan Shirt"), 16);
			num = 11;
			num2 = 14;
		
			if (Global_262145.f_4211 != -1)
				value = Global_262145.f_4211;
			else
				value = 410;
			break;
	
		case 191:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ocean Stripe Shirt"), 16);
			num = 11;
			num2 = 15;
		
			if (Global_262145.f_4202 != -1)
				value = Global_262145.f_4202;
			else
				value = 460;
			break;
	}

	switch (iParam0)
	{
		case 192:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Untucked"), 16);
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 193:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Steel Untucked"), 16);
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 194:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Untucked"), 16);
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 195:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Sky Untucked"), 16);
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 196:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Navy Untucked"), 16);
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 197:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Untucked"), 16);
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 198:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Moss Untucked"), 16);
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 199:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash Untucked"), 16);
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 200:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Mustard Untucked"), 16);
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 201:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Butter Untucked"), 16);
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 202:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Forest Untucked"), 16);
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 203:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Azure Untucked"), 16);
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 204:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_12", 16);
			num = 12;
			num2 = 12;
			flag = true;
			break;
	
		case 205:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_13", 16);
			num = 12;
			num2 = 13;
			flag = true;
			break;
	
		case 206:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_14", 16);
			num = 12;
			num2 = 14;
			flag = true;
			break;
	
		case 207:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_12_15", 16);
			num = 12;
			num2 = 15;
			flag = true;
			break;
	
		case 208:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White Tucked"), 16);
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 209:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Silver Tucked"), 16);
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 210:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Black Tucked"), 16);
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 211:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Tucked"), 16);
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 212:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_4", 16);
			num = 13;
			num2 = 4;
			flag = true;
			break;
	
		case 213:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Burgundy Tucked"), 16);
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 214:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_6", 16);
			num = 13;
			num2 = 6;
			flag = true;
			break;
	
		case 215:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_7", 16);
			num = 13;
			num2 = 7;
			flag = true;
			break;
	
		case 216:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_8", 16);
			num = 13;
			num2 = 8;
			flag = true;
			break;
	
		case 217:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_9", 16);
			num = 13;
			num2 = 9;
			flag = true;
			break;
	
		case 218:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_10", 16);
			num = 13;
			num2 = 10;
			flag = true;
			break;
	
		case 219:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_11", 16);
			num = 13;
			num2 = 11;
			flag = true;
			break;
	
		case 220:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_12", 16);
			num = 13;
			num2 = 12;
			flag = true;
			break;
	
		case 221:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green Plaid Tucked"), 16);
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 222:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_14", 16);
			num = 13;
			num2 = 14;
			flag = true;
			break;
	
		case 223:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_13_15", 16);
			num = 13;
			num2 = 15;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 224:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("White V Neck"), 16);
			num = 14;
			num2 = 0;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[16]);
			break;
	
		case 225:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Ash V Neck"), 16);
			num = 14;
			num2 = 1;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[17]);
			break;
	
		case 226:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_2", 16);
			num = 14;
			num2 = 2;
			flag = true;
			break;
	
		case 227:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Swallow V Neck"), 16);
			num = 14;
			num2 = 3;
			value = 40;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[19]);
			break;
	
		case 228:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Harsh Souls V Neck"), 16);
			num = 14;
			num2 = 4;
			value = 315;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[20]);
			break;
	
		case 229:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Broker V Neck"), 16);
			num = 14;
			num2 = 5;
			value = 215;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[21]);
			break;
	
		case 230:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Hip-Hop Royalty V Neck"), 16);
			num = 14;
			num2 = 6;
			value = 265;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[22]);
			break;
	
		case 231:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Green V Neck"), 16);
			num = 14;
			num2 = 7;
			value = 45;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[23]);
			break;
	
		case 232:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("G&B V Neck"), 16);
			num = 14;
			num2 = 8;
			value = 205;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[24]);
			break;
	
		case 233:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_9", 16);
			num = 14;
			num2 = 9;
			flag = true;
			break;
	
		case 234:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_10", 16);
			num = 14;
			num2 = 10;
			flag = true;
			break;
	
		case 235:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Orange V Neck"), 16);
			num = 14;
			num2 = 11;
			value = 60;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[27]);
			break;
	
		case 236:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Brown V Neck"), 16);
			num = 14;
			num2 = 12;
			value = 55;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[28]);
			break;
	
		case 237:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_1_13", 16);
			num = 14;
			num2 = 13;
			flag = true;
			break;
	
		case 238:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Signs V Neck"), 16);
			num = 14;
			num2 = 14;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[30]);
			break;
	
		case 239:
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Blue Striped V Neck"), 16);
			num = 14;
			num2 = 15;
			flag = true;
			break;
	
		case 240:
			TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_15_0", 16);
			num = 15;
			num2 = 0;
			value = 0;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[32]);
			break;
	}

	if (iParam0 == 23 || iParam0 == 231)
	{
		if (func_234(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rockstar V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23]);
		}
	}
	else if (iParam0 == 17 || iParam0 == 225)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, _("Los Santos Belle V Neck"), 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989);
	}
	else if (iParam0 == 28 || iParam0 == 236)
	{
		if (func_234(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Skull V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28]);
		}
	}
	else if (iParam0 >= 0 && iParam0 < 32)
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6]);
	}
	else if (iParam0 >= 32 && iParam0 < 48)
	{
		num7 = iParam0 - 32;
	
		if (num7 >= 0 && num7 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num7]);
	}
	else if (iParam0 >= 128 && iParam0 < 160)
	{
		num8 = (iParam0 - 160) + 124;
	
		if (num8 >= 0 && num8 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num8]);
	}
	else if (iParam0 >= 192 && iParam0 < 224)
	{
		num9 = (iParam0 - 160) + 188;
	
		if (num9 >= 0 && num9 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num9]);
	}

	value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_296940.f_16);

	if (iParam0 >= 241)
	{
		Global_78341[0 /*14*/].f_5 = 3;
		func_222(num5, iParam0, 241, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_253(int iParam0, Hash hParam1) // Position - 0x2FD27 Hash - 0xE6D60F9B ^0xE6D60F9B
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;
	int num3;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 11;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 250;
			break;
	
		case 1:
			num = 0;
			num2 = 1;
			value = 210;
			break;
	
		case 2:
			num = 0;
			num2 = 2;
			value = 50;
			break;
	
		case 3:
			num = 0;
			num2 = 3;
			value = 90;
			break;
	
		case 4:
			num = 0;
			num2 = 4;
			value = 210;
			break;
	
		case 5:
			num = 0;
			num2 = 5;
			value = 200;
			break;
	
		case 6:
			num = 0;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 7:
			num = 0;
			num2 = 7;
			value = 130;
			break;
	
		case 8:
			num = 0;
			num2 = 8;
			value = 220;
			break;
	
		case 9:
			num = 0;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 10:
			num = 0;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 11:
			num = 0;
			num2 = 11;
			value = 220;
			break;
	
		case 12:
			num = 0;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 13:
			num = 0;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 14:
			num = 0;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 15:
			num = 0;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 16:
			num = 1;
			num2 = 0;
			value = 45;
			break;
	
		case 17:
			num = 1;
			num2 = 1;
			value = 60;
			break;
	
		case 18:
			num = 1;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 19:
			num = 1;
			num2 = 3;
			value = 40;
			break;
	
		case 20:
			num = 1;
			num2 = 4;
			value = 315;
			break;
	
		case 21:
			num = 1;
			num2 = 5;
			value = 215;
			break;
	
		case 22:
			num = 1;
			num2 = 6;
			value = 265;
			break;
	
		case 23:
			num = 1;
			num2 = 7;
			value = 45;
			break;
	
		case 24:
			num = 1;
			num2 = 8;
			value = 205;
			break;
	
		case 25:
			num = 1;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 26:
			num = 1;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 27:
			num = 1;
			num2 = 11;
			value = 60;
			break;
	
		case 28:
			num = 1;
			num2 = 12;
			value = 55;
			break;
	
		case 29:
			num = 1;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 30:
			num = 1;
			num2 = 14;
			value = 170;
			break;
	
		case 31:
			num = 1;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 32:
			num = 2;
			num2 = 0;
			value = 0;
			flag = true;
			break;
	
		case 33:
			num = 2;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 34:
			num = 2;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 35:
			num = 2;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 36:
			num = 2;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 37:
			num = 2;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 38:
			num = 2;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 39:
			num = 2;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 40:
			num = 2;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 41:
			num = 2;
			num2 = 9;
			value = 160;
			break;
	
		case 42:
			num = 2;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 43:
			num = 2;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 44:
			num = 2;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 45:
			num = 2;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 46:
			num = 2;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 47:
			num = 2;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 48:
			num = 3;
			num2 = 0;
			value = 205;
			break;
	
		case 49:
			num = 3;
			num2 = 1;
			value = 110;
			break;
	
		case 50:
			num = 3;
			num2 = 2;
			value = 150;
			break;
	
		case 51:
			num = 3;
			num2 = 3;
			value = 115;
			break;
	
		case 52:
			num = 3;
			num2 = 4;
			value = 115;
			break;
	
		case 53:
			num = 3;
			num2 = 5;
			value = 150;
			break;
	
		case 54:
			num = 3;
			num2 = 6;
			value = 150;
			break;
	
		case 55:
			num = 3;
			num2 = 7;
			value = 115;
			break;
	
		case 56:
			num = 3;
			num2 = 8;
			value = 140;
			break;
	
		case 57:
			num = 3;
			num2 = 9;
			value = 125;
			break;
	
		case 58:
			num = 3;
			num2 = 10;
			value = 115;
			break;
	
		case 59:
			num = 3;
			num2 = 11;
			value = 150;
			break;
	
		case 60:
			num = 3;
			num2 = 12;
			value = 150;
			break;
	
		case 61:
			num = 3;
			num2 = 13;
			value = 275;
			break;
	
		case 62:
			num = 3;
			num2 = 14;
			value = 460;
			break;
	
		case 63:
			num = 3;
			num2 = 15;
			value = 260;
			break;
	}

	switch (iParam0)
	{
		case 64:
			num = 4;
			num2 = 0;
			value = 965;
			break;
	
		case 65:
			num = 4;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 66:
			num = 4;
			num2 = 2;
			value = 2520;
			break;
	
		case 67:
			num = 4;
			num2 = 3;
			value = 350;
			break;
	
		case 68:
			num = 4;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 69:
			num = 4;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 70:
			num = 4;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 71:
			num = 4;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 72:
			num = 4;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 73:
			num = 4;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 74:
			num = 4;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 75:
			num = 4;
			num2 = 11;
			value = 150;
			break;
	
		case 76:
			num = 4;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 77:
			num = 4;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 78:
			num = 4;
			num2 = 14;
			value = 3125;
			break;
	
		case 79:
			num = 4;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 80:
			num = 5;
			num2 = 0;
			value = 80;
			break;
	
		case 81:
			num = 5;
			num2 = 1;
			value = 45;
			break;
	
		case 82:
			num = 5;
			num2 = 2;
			value = 50;
			break;
	
		case 83:
			num = 5;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 84:
			num = 5;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 85:
			num = 5;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 86:
			num = 5;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 87:
			num = 5;
			num2 = 7;
			value = 50;
			break;
	
		case 88:
			num = 5;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 89:
			num = 5;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 90:
			num = 5;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 91:
			num = 5;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 92:
			num = 5;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 93:
			num = 5;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 94:
			num = 5;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 95:
			num = 5;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 96:
			num = 6;
			num2 = 0;
			value = 2485;
			break;
	
		case 97:
			num = 6;
			num2 = 1;
			value = 535;
			break;
	
		case 98:
			num = 6;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 99:
			num = 6;
			num2 = 3;
			value = 2945;
			break;
	
		case 100:
			num = 6;
			num2 = 4;
			value = 3080;
			break;
	
		case 101:
			num = 6;
			num2 = 5;
			value = 2990;
			break;
	
		case 102:
			num = 6;
			num2 = 6;
			value = 3750;
			break;
	
		case 103:
			num = 6;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 104:
			num = 6;
			num2 = 8;
			value = 515;
			break;
	
		case 105:
			num = 6;
			num2 = 9;
			value = 530;
			break;
	
		case 106:
			num = 6;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 107:
			num = 6;
			num2 = 11;
			value = 2810;
			break;
	
		case 108:
			num = 7;
			num2 = 0;
			value = 150;
			break;
	
		case 109:
			num = 7;
			num2 = 1;
			value = 155;
			break;
	
		case 110:
			num = 7;
			num2 = 2;
			value = 320;
			break;
	
		case 111:
			num = 7;
			num2 = 3;
			value = 140;
			break;
	
		case 112:
			num = 7;
			num2 = 4;
			value = 150;
			break;
	
		case 113:
			num = 7;
			num2 = 5;
			value = 145;
			break;
	
		case 114:
			num = 7;
			num2 = 6;
			value = 150;
			break;
	
		case 115:
			num = 7;
			num2 = 7;
			value = 140;
			break;
	
		case 116:
			num = 7;
			num2 = 8;
			value = 135;
			break;
	
		case 117:
			num = 7;
			num2 = 9;
			value = 130;
			break;
	
		case 118:
			num = 7;
			num2 = 10;
			value = 130;
			break;
	
		case 119:
			num = 7;
			num2 = 11;
			value = 150;
			break;
	
		case 120:
			num = 7;
			num2 = 12;
			value = 145;
			break;
	
		case 121:
			num = 7;
			num2 = 13;
			value = 740;
			break;
	
		case 122:
			num = 7;
			num2 = 14;
			value = 790;
			break;
	
		case 123:
			num = 7;
			num2 = 15;
			value = 130;
			break;
	}

	switch (iParam0)
	{
		case 124:
			num = 8;
			num2 = 0;
			value = 45;
			break;
	
		case 125:
			num = 8;
			num2 = 1;
			value = 0;
			flag = true;
			break;
	
		case 126:
			num = 8;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 127:
			num = 8;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 128:
			num = 8;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 129:
			num = 8;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 130:
			num = 8;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 131:
			num = 8;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 132:
			num = 8;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 133:
			num = 8;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 134:
			num = 8;
			num2 = 10;
			value = 65;
			break;
	
		case 135:
			num = 8;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 136:
			num = 8;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 137:
			num = 8;
			num2 = 13;
			value = 40;
			break;
	
		case 138:
			num = 8;
			num2 = 14;
			value = 45;
			break;
	
		case 139:
			num = 8;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 140:
			num = 9;
			num2 = 0;
			value = 265;
			break;
	
		case 141:
			num = 9;
			num2 = 1;
			value = 340;
			break;
	
		case 142:
			num = 9;
			num2 = 2;
			value = 335;
			break;
	
		case 143:
			num = 9;
			num2 = 3;
			value = 330;
			break;
	
		case 144:
			num = 9;
			num2 = 4;
			value = 345;
			break;
	
		case 145:
			num = 9;
			num2 = 5;
			value = 550;
			break;
	
		case 146:
			num = 9;
			num2 = 6;
			value = 340;
			break;
	
		case 147:
			num = 9;
			num2 = 7;
			value = 295;
			break;
	
		case 148:
			num = 9;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 149:
			num = 9;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 150:
			num = 9;
			num2 = 10;
			value = 545;
			break;
	
		case 151:
			num = 9;
			num2 = 11;
			value = 345;
			break;
	
		case 152:
			num = 9;
			num2 = 12;
			value = 315;
			break;
	
		case 153:
			num = 9;
			num2 = 13;
			value = 520;
			break;
	
		case 154:
			num = 9;
			num2 = 14;
			value = 325;
			break;
	
		case 155:
			num = 9;
			num2 = 15;
			value = 330;
			break;
	}

	switch (iParam0)
	{
		case 156:
			num = 10;
			num2 = 0;
			value = 505;
			break;
	
		case 157:
			num = 10;
			num2 = 1;
			value = 470;
			break;
	
		case 158:
			num = 10;
			num2 = 2;
			value = 475;
			break;
	
		case 159:
			num = 10;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 160:
			num = 10;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 161:
			num = 10;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 162:
			num = 10;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 163:
			num = 10;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 164:
			num = 10;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 165:
			num = 10;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 166:
			num = 10;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 167:
			num = 10;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 168:
			num = 10;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 169:
			num = 10;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 170:
			num = 10;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 171:
			num = 10;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 172:
			num = 11;
			num2 = 0;
			value = 120;
			break;
	
		case 173:
			num = 11;
			num2 = 1;
			value = 360;
			break;
	
		case 174:
			num = 11;
			num2 = 2;
			value = 0;
			flag = true;
			break;
	
		case 175:
			num = 11;
			num2 = 3;
			value = 0;
			flag = true;
			break;
	
		case 176:
			num = 11;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 177:
			num = 11;
			num2 = 5;
			value = 0;
			flag = true;
			break;
	
		case 178:
			num = 11;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 179:
			num = 11;
			num2 = 7;
			value = 90;
			break;
	
		case 180:
			num = 11;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 181:
			num = 11;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 182:
			num = 11;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 183:
			num = 11;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 184:
			num = 11;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 185:
			num = 11;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 186:
			num = 11;
			num2 = 14;
			value = 2450;
			break;
	
		case 187:
			num = 11;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 188:
			num = 12;
			num2 = 0;
			value = 420;
			break;
	
		case 189:
			num = 12;
			num2 = 1;
			value = 415;
			break;
	
		case 190:
			num = 12;
			num2 = 2;
			value = 695;
			break;
	
		case 191:
			num = 12;
			num2 = 3;
			value = 385;
			break;
	
		case 192:
			num = 12;
			num2 = 4;
			value = 330;
			break;
	
		case 193:
			num = 12;
			num2 = 5;
			value = 345;
			break;
	
		case 194:
			num = 12;
			num2 = 6;
			value = 340;
			break;
	
		case 195:
			num = 12;
			num2 = 7;
			value = 450;
			break;
	
		case 196:
			num = 12;
			num2 = 8;
			value = 295;
			break;
	
		case 197:
			num = 12;
			num2 = 9;
			value = 340;
			break;
	
		case 198:
			num = 12;
			num2 = 10;
			value = 1060;
			break;
	
		case 199:
			num = 12;
			num2 = 11;
			value = 1040;
			break;
	
		case 200:
			num = 12;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 201:
			num = 12;
			num2 = 13;
			value = 0;
			flag = true;
			break;
	
		case 202:
			num = 12;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 203:
			num = 12;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	
		case 204:
			num = 13;
			num2 = 0;
			value = 420;
			break;
	
		case 205:
			num = 13;
			num2 = 1;
			value = 415;
			break;
	
		case 206:
			num = 13;
			num2 = 2;
			value = 680;
			break;
	
		case 207:
			num = 13;
			num2 = 3;
			value = 385;
			break;
	
		case 208:
			num = 13;
			num2 = 4;
			value = 0;
			flag = true;
			break;
	
		case 209:
			num = 13;
			num2 = 5;
			value = 345;
			break;
	
		case 210:
			num = 13;
			num2 = 6;
			value = 0;
			flag = true;
			break;
	
		case 211:
			num = 13;
			num2 = 7;
			value = 0;
			flag = true;
			break;
	
		case 212:
			num = 13;
			num2 = 8;
			value = 0;
			flag = true;
			break;
	
		case 213:
			num = 13;
			num2 = 9;
			value = 0;
			flag = true;
			break;
	
		case 214:
			num = 13;
			num2 = 10;
			value = 0;
			flag = true;
			break;
	
		case 215:
			num = 13;
			num2 = 11;
			value = 0;
			flag = true;
			break;
	
		case 216:
			num = 13;
			num2 = 12;
			value = 0;
			flag = true;
			break;
	
		case 217:
			num = 13;
			num2 = 13;
			value = 1065;
			break;
	
		case 218:
			num = 13;
			num2 = 14;
			value = 0;
			flag = true;
			break;
	
		case 219:
			num = 13;
			num2 = 15;
			value = 0;
			flag = true;
			break;
	}

	switch (iParam0)
	{
		case 220:
			num = 14;
			num2 = 0;
			value = 420;
			break;
	
		case 221:
			num = 14;
			num2 = 1;
			value = 415;
			break;
	
		case 222:
			num = 14;
			num2 = 2;
			value = 440;
			break;
	
		case 223:
			num = 14;
			num2 = 3;
			value = 385;
			break;
	
		case 224:
			num = 14;
			num2 = 4;
			value = 330;
			break;
	
		case 225:
			num = 14;
			num2 = 5;
			value = 445;
			break;
	
		case 226:
			num = 14;
			num2 = 6;
			value = 340;
			break;
	
		case 227:
			num = 14;
			num2 = 7;
			value = 440;
			break;
	
		case 228:
			num = 14;
			num2 = 8;
			value = 295;
			break;
	
		case 229:
			num = 14;
			num2 = 9;
			value = 340;
			break;
	
		case 230:
			num = 14;
			num2 = 10;
			value = 325;
			break;
	
		case 231:
			num = 14;
			num2 = 11;
			value = 435;
			break;
	
		case 232:
			num = 14;
			num2 = 12;
			value = 445;
			break;
	
		case 233:
			num = 14;
			num2 = 13;
			value = 440;
			break;
	
		case 234:
			num = 14;
			num2 = 14;
			value = 325;
			break;
	
		case 235:
			num = 14;
			num2 = 15;
			value = 325;
			break;
	
		case 236:
			num = 15;
			num2 = 0;
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "U_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);

	if (iParam0 == 23)
	{
		if (func_234(89, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Rockstar V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(1250) * Global_262145.f_2990 * Global_296940.f_16);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(45) * Global_262145.f_443[23] * Global_296940.f_16);
		}
	}
	else if (iParam0 == 17)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, _("Los Santos Belle V Neck"), 16);
		value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(450) * Global_262145.f_2989 * Global_296940.f_16);
	}
	else if (iParam0 == 28)
	{
		if (func_234(87, -1))
		{
			TEXT_LABEL_ASSIGN_STRING(&unk, _("Red Skull V Neck"), 16);
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(500) * Global_262145.f_2988 * Global_296940.f_16);
		}
		else
		{
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(55) * Global_262145.f_443[28] * Global_296940.f_16);
		}
	}
	else
	{
		num6 = iParam0;
	
		if (num6 >= 0 && num6 < 237)
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_443[num6] * Global_296940.f_16);
	}

	if (iParam0 >= 237)
	{
		Global_78341[0 /*14*/].f_5 = 3;
		func_222(num5, iParam0, 237, hParam1);
	
		if (Global_78341[0 /*14*/].f_7 > 0)
			Global_78341[0 /*14*/].f_7 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(Global_78341[0 /*14*/].f_7) * Global_296940.f_16);
	}
	else
	{
		func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	}

	return;
}

void func_254(int iParam0, Hash hParam1) // Position - 0x312DC Hash - 0xA91A09EB ^0xE2448087
{
	BOOL flag;
	int value;
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int num;
	int num2;

	flag = false;
	value = 10;
	num = 0;
	num2 = 0;
	num3 = -1;
	num4 = 2;
	num5 = 2;

	switch (iParam0)
	{
		case 0:
			num = 0;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[0]);
			break;
	
		case 1:
			num = 1;
			num2 = 0;
			value = 190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[1]);
			break;
	
		case 2:
			num = 1;
			num2 = 1;
			value = 185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[2]);
			break;
	
		case 3:
			num = 1;
			num2 = 2;
			value = 180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[3]);
			break;
	
		case 4:
			num = 1;
			num2 = 3;
			value = 175;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[4]);
			break;
	
		case 5:
			num = 1;
			num2 = 4;
			value = 170;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[5]);
			break;
	
		case 6:
			num = 1;
			num2 = 5;
			value = 0;
			break;
	
		case 7:
			num = 2;
			num2 = 0;
			value = 580;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[6]);
			break;
	
		case 8:
			num = 2;
			num2 = 1;
			value = 575;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[7]);
			break;
	
		case 9:
			num = 2;
			num2 = 2;
			value = 570;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[8]);
			break;
	
		case 10:
			num = 2;
			num2 = 3;
			value = 565;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[9]);
			break;
	
		case 11:
			num = 2;
			num2 = 4;
			value = 560;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[10]);
			break;
	
		case 12:
			num = 2;
			num2 = 5;
			value = 0;
			break;
	
		case 13:
			num = 3;
			num2 = 0;
			value = 1100;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[11]);
			break;
	
		case 14:
			num = 3;
			num2 = 1;
			value = 1095;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[12]);
			break;
	
		case 15:
			num = 3;
			num2 = 2;
			value = 1090;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[13]);
			break;
	
		case 16:
			num = 3;
			num2 = 3;
			value = 1085;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[14]);
			break;
	
		case 17:
			num = 3;
			num2 = 4;
			value = 1080;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[15]);
			break;
	
		case 18:
			num = 3;
			num2 = 5;
			value = 0;
			break;
	
		case 19:
			num = 4;
			num2 = 0;
			value = 520;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[16]);
			break;
	
		case 20:
			num = 4;
			num2 = 1;
			value = 515;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[17]);
			break;
	
		case 21:
			num = 4;
			num2 = 2;
			value = 510;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[18]);
			break;
	
		case 22:
			num = 4;
			num2 = 3;
			value = 505;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[19]);
			break;
	
		case 23:
			num = 4;
			num2 = 4;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[20]);
			break;
	
		case 24:
			num = 4;
			num2 = 5;
			value = 0;
			break;
	
		case 25:
			num = 4;
			num2 = 6;
			value = 0;
			break;
	
		case 26:
			num = 5;
			num2 = 0;
			value = 295;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[21]);
			break;
	
		case 27:
			num = 5;
			num2 = 1;
			value = 290;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[22]);
			break;
	
		case 28:
			num = 5;
			num2 = 2;
			value = 285;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[23]);
			break;
	
		case 29:
			num = 5;
			num2 = 3;
			value = 280;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[24]);
			break;
	
		case 30:
			num = 5;
			num2 = 4;
			value = 275;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[25]);
			break;
	
		case 31:
			num = 5;
			num2 = 5;
			value = 0;
			break;
	
		case 32:
			num = 6;
			num2 = 0;
			value = 950;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[26]);
			break;
	
		case 33:
			num = 6;
			num2 = 1;
			value = 945;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[27]);
			break;
	
		case 34:
			num = 6;
			num2 = 2;
			value = 940;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[28]);
			break;
	
		case 35:
			num = 6;
			num2 = 3;
			value = 935;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[29]);
			break;
	
		case 36:
			num = 6;
			num2 = 4;
			value = 930;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[30]);
			break;
	
		case 37:
			num = 6;
			num2 = 5;
			value = 0;
			break;
	
		case 38:
			num = 7;
			num2 = 0;
			value = 440;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[31]);
			break;
	
		case 39:
			num = 7;
			num2 = 1;
			value = 435;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[32]);
			break;
	
		case 40:
			num = 7;
			num2 = 2;
			value = 430;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[33]);
			break;
	
		case 41:
			num = 7;
			num2 = 3;
			value = 425;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[34]);
			break;
	
		case 42:
			num = 7;
			num2 = 4;
			value = 420;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[35]);
			break;
	
		case 43:
			num = 7;
			num2 = 5;
			value = 0;
			break;
	
		case 44:
			num = 7;
			num2 = 6;
			value = 0;
			break;
	
		case 45:
			num = 8;
			num2 = 0;
			value = 1150;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[36]);
			break;
	
		case 46:
			num = 8;
			num2 = 1;
			value = 1145;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[37]);
			break;
	
		case 47:
			num = 8;
			num2 = 2;
			value = 1140;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[38]);
			break;
	
		case 48:
			num = 8;
			num2 = 3;
			value = 1135;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[39]);
			break;
	
		case 49:
			num = 8;
			num2 = 4;
			value = 1130;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[40]);
			break;
	
		case 50:
			num = 9;
			num2 = 0;
			value = 395;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[41]);
			break;
	
		case 51:
			num = 9;
			num2 = 1;
			value = 390;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[42]);
			break;
	
		case 52:
			num = 9;
			num2 = 2;
			value = 385;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[43]);
			break;
	
		case 53:
			num = 9;
			num2 = 3;
			value = 380;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[44]);
			break;
	
		case 54:
			num = 9;
			num2 = 4;
			value = 375;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[45]);
			break;
	
		case 55:
			num = 9;
			num2 = 5;
			value = 0;
			break;
	
		case 56:
			num = 9;
			num2 = 6;
			value = 0;
			break;
	
		case 57:
			num = 10;
			num2 = 0;
			value = 500;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[46]);
			break;
	
		case 58:
			num = 10;
			num2 = 1;
			value = 495;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[47]);
			break;
	
		case 59:
			num = 10;
			num2 = 2;
			value = 490;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[48]);
			break;
	
		case 60:
			num = 10;
			num2 = 3;
			value = 485;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[49]);
			break;
	
		case 61:
			num = 10;
			num2 = 4;
			value = 480;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[50]);
			break;
	
		case 62:
			num = 10;
			num2 = 5;
			value = 0;
			break;
	
		case 63:
			num = 11;
			num2 = 0;
			value = 1050;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[51]);
			break;
	
		case 64:
			num = 11;
			num2 = 1;
			value = 1045;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[52]);
			break;
	
		case 65:
			num = 11;
			num2 = 2;
			value = 1040;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[53]);
			break;
	
		case 66:
			num = 11;
			num2 = 3;
			value = 1035;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[54]);
			break;
	
		case 67:
			num = 11;
			num2 = 4;
			value = 1030;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[55]);
			break;
	
		case 68:
			num = 11;
			num2 = 5;
			value = 0;
			break;
	
		case 69:
			num = 12;
			num2 = 0;
			value = 550;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[56]);
			break;
	
		case 70:
			num = 12;
			num2 = 1;
			value = 545;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[57]);
			break;
	
		case 71:
			num = 12;
			num2 = 2;
			value = 540;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[58]);
			break;
	
		case 72:
			num = 12;
			num2 = 3;
			value = 535;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[59]);
			break;
	
		case 73:
			num = 12;
			num2 = 4;
			value = 530;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[60]);
			break;
	
		case 74:
			num = 13;
			num2 = 0;
			value = 1200;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[61]);
			break;
	
		case 75:
			num = 13;
			num2 = 1;
			value = 1195;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[62]);
			break;
	
		case 76:
			num = 13;
			num2 = 2;
			value = 1190;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[63]);
			break;
	
		case 77:
			num = 13;
			num2 = 3;
			value = 1185;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[64]);
			break;
	
		case 78:
			num = 13;
			num2 = 4;
			value = 1180;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[65]);
			break;
	
		case 79:
			num = 13;
			num2 = 5;
			value = 0;
			break;
	
		case 80:
			num = 14;
			num2 = 0;
			value = 2000;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[66]);
			break;
	
		case 81:
			num = 14;
			num2 = 1;
			value = 1995;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[67]);
			break;
	
		case 82:
			num = 14;
			num2 = 2;
			value = 1990;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[68]);
			break;
	
		case 83:
			num = 14;
			num2 = 3;
			value = 1985;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[69]);
			break;
	
		case 84:
			num = 14;
			num2 = 4;
			value = 1980;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[70]);
			break;
	
		case 85:
			num = 15;
			num2 = 0;
			value = 475;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[71]);
			break;
	
		case 86:
			num = 15;
			num2 = 1;
			value = 470;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[72]);
			break;
	
		case 87:
			num = 15;
			num2 = 2;
			value = 465;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[73]);
			break;
	
		case 88:
			num = 15;
			num2 = 3;
			value = 460;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[74]);
			break;
	
		case 89:
			num = 15;
			num2 = 4;
			value = 455;
			value = SYSTEM::ROUND(SYSTEM::TO_FLOAT(value) * Global_262145.f_2543[75]);
			break;
	
		case 90:
			num = 15;
			num2 = 5;
			value = 0;
			break;
	
		default:
			Global_78341[0 /*14*/].f_5 = 3;
			func_222(num5, iParam0, 91, hParam1);
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&unk, "H_FMM_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num, 16);
	TEXT_LABEL_APPEND_STRING(&unk, "_", 16);
	TEXT_LABEL_APPEND_INT(&unk, num2, 16);
	func_212(&Global_78341[0 /*14*/], num5, iParam0, &unk, num, num2, value, flag, num3, num4, false);
	return;
}

void func_255() // Position - 0x32196 Hash - 0xE5F61993 ^0xEFD41040
{
	Global_78341[0 /*14*/].f_1 = -1;
	Global_78341[0 /*14*/].f_2 = -1;
	Global_78341[0 /*14*/].f_5 = -1;
	Global_78341[0 /*14*/].f_3 = -1;
	Global_78341[0 /*14*/].f_4 = -1;
	Global_78341[0 /*14*/].f_7 = 0;
	Global_78341[0 /*14*/].f_6 = 0;
	Global_78341[0 /*14*/].f_13 = -1;
	Global_78341[0 /*14*/].f_12 = 0;
	Global_78341[0 /*14*/] = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
	return;
}

BOOL func_256(Ped pedParam0) // Position - 0x3220F Hash - 0xCD74A84A ^0x27173E99
{
	int num;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		num = Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_96.f_28;
	
		if (num != -1 && num < 4)
			if (func_257(num) != -1 && func_257(num) != 0)
				return 1;
	}

	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == 1885233650)
			if (PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB) == 15)
				return 1;

	return 0;
}

int func_257(int iParam0) // Position - 0x3228B Hash - 0x62D06D8F ^0x62D06D8F
{
	if (func_258(true))
		return Global_1665818;

	if (iParam0 <= -1 || iParam0 >= 4)
		return -1;

	return Global_2684799.f_6316[iParam0];
}

BOOL func_258(BOOL bParam0) // Position - 0x322C2 Hash - 0x25DF5B1D ^0x9F2B5EB0
{
	if (func_262(bParam0) || func_260() || func_259(*Global_4718592.f_166301))
		return true;

	return false;
}

BOOL func_259(int iParam0) // Position - 0x322F6 Hash - 0x22B3D50D ^0x22B3D50D
{
	return iParam0 == 87;
}

BOOL func_260() // Position - 0x32303 Hash - 0x39484892 ^0x2FC29187
{
	return func_261(*Global_4718592.f_113724);
}

int func_261(int iParam0) // Position - 0x32319 Hash - 0x9CB2DA77 ^0x9CB2DA77
{
	int i;

	if (iParam0 == 0)
		return 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_262145.f_31051[i] == iParam0)
			return 1;
	}

	return 0;
}

BOOL func_262(BOOL bParam0) // Position - 0x32353 Hash - 0x54BEFA8F ^0x2645E4C8
{
	if (bParam0)
		return IS_BIT_SET(*Global_4718592.f_160050, 12) && func_263();

	return IS_BIT_SET(*Global_4718592.f_160050, 12);
}

BOOL func_263() // Position - 0x32389 Hash - 0xFEA78839 ^0xAA3D5948
{
	if (*Global_4718592.f_114294 == 1 || *Global_4718592.f_114294 == 2)
		return true;

	return false;
}

BOOL func_264(Ped pedParam0, BOOL bParam1) // Position - 0x323B7 Hash - 0x84239F5A ^0x5C937669
{
	int pedDrawableVariation;
	int pedTextureVariation;
	int num;
	int num2;
	Hash componentHash;
	int num3;
	Hash componentHash2;
	int num4;
	int num5;
	Hash componentHash3;
	int num6;
	int num7;
	int num8;
	Hash componentHash4;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (ENTITY::GET_ENTITY_MODEL(pedParam0) == 1885233650)
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
							return 1;
					
						case 1:
						case 7:
						case 12:
							num = func_265(1885233650, 11, func_184(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 1 && num == 88 || pedTextureVariation == 7 && num == 89 || pedTextureVariation == 12 && num == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 9:
							return 1;
					}
					break;
			
				case 5:
					if (!bParam1)
					{
						if (func_165(13, -1))
						{
							return 1;
						}
						else if (func_165(14, -1))
						{
							return 1;
						}
						else if (func_165(15, -1))
						{
							return 1;
						}
						else if (func_165(16, -1))
						{
							return 1;
						}
						else if (func_165(71, -1))
						{
							return 1;
						}
						else if (func_165(72, -1))
						{
						}
						else if (func_114(PLAYER::PLAYER_ID(), true) && Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10.f_76.f_21 != 0)
						{
							return 1;
						}
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num2 = func_184(pedParam0, 11, PV_COMP_INVALID);
					
						if (num2 >= 237)
						{
							componentHash = func_180(1885233650, num2, 11, 3);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 362493804, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 1843965488, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 153792394, 0))
								return 1;
						}
					}
					break;
			}
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 14:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num3 = func_184(pedParam0, 8, PV_COMP_INVALID);
					
						if (num3 >= 241)
						{
							componentHash2 = func_180(1885233650, num3, 8, 3);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 362493804, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 1843965488, 0))
								return 1;
						}
					}
					break;
			}
		}
		else if (ENTITY::GET_ENTITY_MODEL(pedParam0) == -1667301416)
		{
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_JBIB);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_JBIB);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num4 = func_265(-1667301416, 11, func_184(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num4 == 88 || pedTextureVariation == 4 && num4 == 89 || pedTextureVariation == 9 && num4 == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 0:
						case 1:
						case 2:
						case 3:
						case 4:
							return 1;
					}
					break;
			
				case 3:
					switch (pedTextureVariation)
					{
						case 14:
							return 1;
					}
					break;
			
				case 11:
					switch (pedTextureVariation)
					{
						case 10:
						case 11:
						case 15:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num5 = func_184(pedParam0, 11, PV_COMP_INVALID);
					
						if (num5 >= 256)
						{
							componentHash3 = func_180(-1667301416, num5, 11, 4);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, 362493804, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, 1843965488, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, -672871169, 0))
								return 1;
						}
					}
					break;
			}
		
			pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_ACCS);
			pedTextureVariation = PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_ACCS);
		
			switch (pedDrawableVariation)
			{
				case 0:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num6 = func_265(-1667301416, 11, func_184(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num6 == 88 || pedTextureVariation == 4 && num6 == 89 || pedTextureVariation == 9 && num6 == 87)
								return 1;
							break;
					}
					break;
			
				case 1:
					switch (pedTextureVariation)
					{
						case 1:
						case 2:
							return 1;
					
						case 7:
						case 4:
						case 9:
							num7 = func_265(-1667301416, 11, func_184(pedParam0, 11, PV_COMP_INVALID), 0);
						
							if (pedTextureVariation == 7 && num7 == 88 || pedTextureVariation == 4 && num7 == 89 || pedTextureVariation == 9 && num7 == 87)
								return 1;
							break;
					}
					break;
			
				case 2:
					switch (pedTextureVariation)
					{
						case 1:
						case 3:
						case 5:
						case 7:
						case 4:
						case 8:
						case 11:
							return 1;
					}
					break;
			
				case 11:
					switch (pedTextureVariation)
					{
						case 10:
						case 11:
						case 15:
							return 1;
					}
					break;
			
				case 14:
					switch (pedTextureVariation)
					{
						case 3:
						case 5:
						case 6:
						case 8:
						case 4:
						case 14:
						case 1:
						case 7:
						case 12:
							return 1;
					}
					break;
			
				default:
					if (pedDrawableVariation > 15)
					{
						num8 = func_184(pedParam0, 8, PV_COMP_INVALID);
					
						if (num8 >= 136)
						{
							componentHash4 = func_180(-1667301416, num8, 8, 4);
						
							if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, -1467682989, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, 362493804, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, 1843965488, 0))
								return 1;
						}
					}
					break;
			}
		}
	}

	return 0;
}

int func_265(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x32BF1 Hash - 0x4C455E56 ^0x3BFDE16A
{
	Hash componentHash;
	int shopPedApparelForcedComponentCount;
	int i;
	int nameHash;
	int enumValue;
	int componentType;
	Hash componentHash2;
	int shopPedApparelForcedComponentCount2;
	int j;
	int nameHash2;
	int enumValue2;
	int componentType2;
	Hash componentHash3;
	int shopPedApparelForcedComponentCount3;
	int k;
	int nameHash3;
	int enumValue3;
	int componentType3;
	Hash componentHash4;
	int shopPedApparelForcedComponentCount4;
	int l;
	int nameHash4;
	int enumValue4;
	int componentType4;

	if (hParam0 == 1885233650)
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 23)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 == 41)
			{
				return 86;
			}
			else if (iParam2 >= 237)
			{
				componentHash = func_180(hParam0, iParam2, 11, 3);
			
				if (componentHash != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, 362493804, 0))
					{
						shopPedApparelForcedComponentCount = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash);
					
						for (i = 0; i < shopPedApparelForcedComponentCount; i = i + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash, i, &nameHash, &enumValue, &componentType);
						
							if (componentType == 10)
								if (nameHash != 0 && nameHash != 1849449579)
									return func_266(nameHash, 3);
								else
									return enumValue;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash, -1467682989, 0))
					{
						if (iParam3 == 0)
							iParam3 = func_90(1759, -1, 0);
					
						return func_266(iParam3, 3);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 73;
			}
			else if (iParam2 == 3)
			{
				return 74;
			}
			else if (iParam2 == 5)
			{
				return 75;
			}
			else if (iParam2 == 7)
			{
				return 76;
			}
			else if (iParam2 == 4)
			{
				return 77;
			}
			else if (iParam2 == 8)
			{
				return 78;
			}
			else if (iParam2 == 11)
			{
				return 79;
			}
			else if (iParam2 == 23)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 17)
			{
				return 88;
			}
			else if (iParam2 == 28)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 == 33)
			{
				return 73;
			}
			else if (iParam2 == 35)
			{
				return 74;
			}
			else if (iParam2 == 37)
			{
				return 75;
			}
			else if (iParam2 == 39)
			{
				return 76;
			}
			else if (iParam2 == 36)
			{
				return 77;
			}
			else if (iParam2 == 40)
			{
				return 78;
			}
			else if (iParam2 == 43)
			{
				return 79;
			}
			else if (iParam2 == 19)
			{
				return 80;
			}
			else if (iParam2 == 21)
			{
				return 81;
			}
			else if (iParam2 == 22)
			{
				return 82;
			}
			else if (iParam2 == 24)
			{
				return 83;
			}
			else if (iParam2 == 20)
			{
				return 84;
			}
			else if (iParam2 == 30)
			{
				return 85;
			}
			else if (iParam2 == 227)
			{
				return 80;
			}
			else if (iParam2 == 229)
			{
				return 81;
			}
			else if (iParam2 == 230)
			{
				return 82;
			}
			else if (iParam2 == 232)
			{
				return 83;
			}
			else if (iParam2 == 228)
			{
				return 84;
			}
			else if (iParam2 == 238)
			{
				return 85;
			}
			else if (iParam2 == 231)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 225)
			{
				return 88;
			}
			else if (iParam2 == 236)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 >= 241)
			{
				componentHash2 = func_180(hParam0, iParam2, 8, 3);
			
				if (componentHash2 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, 362493804, 0))
					{
						shopPedApparelForcedComponentCount2 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash2);
					
						for (j = 0; j < shopPedApparelForcedComponentCount2; j = j + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash2, j, &nameHash2, &enumValue2, &componentType2);
						
							if (componentType2 == 10)
								if (nameHash2 != 0 && nameHash2 != 1849449579)
									return func_266(nameHash2, 3);
								else
									return enumValue2;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash2, -1467682989, 0))
					{
						if (iParam3 == 0)
							iParam3 = func_90(1759, -1, 0);
					
						return func_266(iParam3, 3);
					}
				}
			}
		}
	}
	else if (hParam0 == -1667301416)
	{
		if (iParam1 == 11)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 == 32)
			{
				return 78;
			}
			else if (iParam2 == 33)
			{
				return 79;
			}
			else if (iParam2 == 34)
			{
				return 80;
			}
			else if (iParam2 == 35)
			{
				return 81;
			}
			else if (iParam2 == 36)
			{
				return 82;
			}
			else if (iParam2 == 62)
			{
				return 76;
			}
			else if (iParam2 == 63)
			{
				return 83;
			}
			else if (iParam2 == 186)
			{
				return 84;
			}
			else if (iParam2 == 187)
			{
				return 85;
			}
			else if (iParam2 == 191)
			{
				return 74;
			}
			else if (iParam2 >= 256)
			{
				componentHash3 = func_180(hParam0, iParam2, 11, 4);
			
				if (componentHash3 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, 362493804, 0))
					{
						shopPedApparelForcedComponentCount3 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash3);
					
						for (k = 0; k < shopPedApparelForcedComponentCount3; k = k + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash3, k, &nameHash3, &enumValue3, &componentType3);
						
							if (componentType3 == 10)
								if (nameHash3 != 0 && nameHash3 != 1849449579)
									return func_266(nameHash3, 4);
								else
									return enumValue3;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash3, -1467682989, 0))
					{
						if (iParam3 == 0)
							iParam3 = func_90(1759, -1, 0);
					
						return func_266(iParam3, 4);
					}
				}
			}
		}
		else if (iParam1 == 8)
		{
			if (iParam2 == 1)
			{
				return 75;
			}
			else if (iParam2 == 2)
			{
				return 77;
			}
			else if (iParam2 == 4)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 7)
			{
				return 88;
			}
			else if (iParam2 == 9)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 == 17)
			{
				return 75;
			}
			else if (iParam2 == 18)
			{
				return 77;
			}
			else if (iParam2 == 20)
			{
				if (func_234(89, -1))
					return 89;
			}
			else if (iParam2 == 23)
			{
				return 88;
			}
			else if (iParam2 == 25)
			{
				if (func_234(87, -1))
					return 87;
			}
			else if (iParam2 == 81)
			{
				return 84;
			}
			else if (iParam2 == 82)
			{
				return 85;
			}
			else if (iParam2 == 86)
			{
				return 74;
			}
			else if (iParam2 >= 136)
			{
				componentHash4 = func_180(hParam0, iParam2, 8, 4);
			
				if (componentHash4 != -1)
				{
					if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, 1113995558, 0) || FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, 362493804, 0))
					{
						shopPedApparelForcedComponentCount4 = FILES::GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(componentHash4);
					
						for (l = 0; l < shopPedApparelForcedComponentCount4; l = l + 1)
						{
							FILES::GET_FORCED_COMPONENT(componentHash4, l, &nameHash4, &enumValue4, &componentType4);
						
							if (componentType4 == 10)
								if (nameHash4 != 0 && nameHash4 != 1849449579)
									return func_266(nameHash4, 4);
								else
									return enumValue4;
						}
					}
					else if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(componentHash4, -1467682989, 0))
					{
						if (iParam3 == 0)
							iParam3 = func_90(1759, -1, 0);
					
						return func_266(iParam3, 4);
					}
				}
			}
		}
	}

	return -1;
}

int func_266(int iParam0, Hash hParam1) // Position - 0x33415 Hash - 0xF58FDC97 ^0x803B7A87
{
	int tattooShopDlcItemIndex;

	tattooShopDlcItemIndex = FILES::GET_TATTOO_SHOP_DLC_ITEM_INDEX(hParam1, -1, iParam0);

	if (tattooShopDlcItemIndex != -1)
		return 129 + tattooShopDlcItemIndex;

	return -1;
}

int func_267(Ped pedParam0) // Position - 0x33437 Hash - 0x48F0132B ^0x6FD5FB98
{
	if (PED::IS_PED_DEAD_OR_DYING(pedParam0, true))
		return 0;

	switch (ENTITY::GET_ENTITY_MODEL(pedParam0))
	{
		case 225514697:
			return 0;
	
		case -1692214353:
			return 1;
	
		case -1686040670:
			return 2;
	
		case 1885233650:
			return 3;
	
		case -1667301416:
			return 4;
	}

	return 0;
}

Player func_268() // Position - 0x3349A Hash - 0xB2FD1CC3 ^0x65B26EA5
{
	Player player;

	player = PLAYER::PLAYER_ID();

	if (func_270(true))
		player = func_269();

	return player;
}

Player func_269() // Position - 0x334B8 Hash - 0xFD2601BF ^0xA8AA969
{
	return Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_10;
}

BOOL func_270(BOOL bParam0) // Position - 0x334CD Hash - 0xCA2EA26D ^0x45E6CA28
{
	return func_271(PLAYER::PLAYER_ID(), bParam0);
}

BOOL func_271(Player plParam0, BOOL bParam1) // Position - 0x334DF Hash - 0xB01293DB ^0xE5AEA938
{
	if (!bParam1)
		if (func_272(plParam0))
			return false;

	return Global_1894573[plParam0 /*608*/].f_10 != func_66();
}

BOOL func_272(Player plParam0) // Position - 0x3350A Hash - 0x240F2609 ^0x5DFCCAA2
{
	if (plParam0 != func_66())
		if (Global_1894573[plParam0 /*608*/].f_10 != func_66())
			return Global_1894573[plParam0 /*608*/].f_10 == plParam0;

	return false;
}

Ped func_273() // Position - 0x3353F Hash - 0x36AF3084 ^0xCC9983BC
{
	Ped playerPed;

	playerPed = PLAYER::PLAYER_PED_ID();

	if (func_270(true))
		playerPed = PLAYER::GET_PLAYER_PED(func_269());

	return playerPed;
}

BOOL func_274(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x33561 Hash - 0xF79838EA ^0xA943B38
{
	if (Global_2657589[plParam0 /*466*/].f_232 == 99)
		if (bParam2 && Global_2657589[plParam0 /*466*/].f_235 == 0 || bParam2 == false)
			return false;

	if (bParam1)
		if (Global_2657589[plParam0 /*466*/].f_232 == 13)
			return false;

	return true;
}

int func_275(var uParam0) // Position - 0x335B8 Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

void func_276() // Position - 0x335C3 Hash - 0x4AC6005 ^0x23D5613C
{
	HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	HUD::THEFEED_HIDE_THIS_FRAME();
	func_278(true);
	HUD::DISABLE_FRONTEND_THIS_FRAME();

	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::SET_PAUSE_MENU_ACTIVE(false);
		HUD::SET_FRONTEND_ACTIVE(false);
	}

	func_278(true);
	func_277(1);

	if (!HUD::THEFEED_IS_PAUSED())
		HUD::THEFEED_PAUSE();

	HUD::HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_WHEEL);
	func_53(1);
	return;
}

void func_277(int iParam0) // Position - 0x3360E Hash - 0x7E11E9C ^0x544BF257
{
	if (func_45())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_46(0))
			func_42(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_278(BOOL bParam0) // Position - 0x33641 Hash - 0x77BBBED5 ^0x77BBBED5
{
	if (bParam0)
		func_280();

	func_279(4, -1);
	func_279(6, -1);
	func_279(7, -1);
	func_279(3, -1);
	func_279(1, -1);
	func_279(2, -1);
	func_279(11, -1);
	func_279(13, -1);
	func_279(14, -1);
	func_279(16, -1);
	return;
}

void func_279(int iParam0, int iParam1) // Position - 0x33692 Hash - 0xD7EC669C ^0xC01D15BF
{
	MISC::SET_BIT(&(Global_1653913.f_1047), iParam0);

	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				Global_1653913.f_170[iParam1] = 1;
			break;
	}

	return;
}

void func_280() // Position - 0x336C8 Hash - 0x6BEE258E ^0x6BEE258E
{
	Global_2793044.f_4629 = 0;
	return;
}

BOOL func_281() // Position - 0x336D8 Hash - 0x2EE4DDA7 ^0x2EE4DDA7
{
	if (func_282())
		return true;

	return false;
}

BOOL func_282() // Position - 0x336EC Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575035 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_288())
		return true;

	if (Global_2696915)
		return true;

	if (func_287())
		return true;

	if (func_286(159))
		if (!func_285())
			return true;

	if (func_286(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_283() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_283()) == 0)
			return true;

	return false;
}

Hash func_283() // Position - 0x33770 Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_93())
	{
		case 0:
			return func_284();
	
		case 2:
			return -47565502;
	}

	return 0;
}

Hash func_284() // Position - 0x337A3 Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2697019)
	{
		case 0:
			return -931834499;
	
		default:
		
	}

	return -931834499;
}

BOOL func_285() // Position - 0x337C7 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_698;
}

BOOL func_286(int iParam0) // Position - 0x337D6 Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_287() // Position - 0x337ED Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2694524;
}

BOOL func_288() // Position - 0x337F9 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_693;
}

void func_289() // Position - 0x33808 Hash - 0x66E327B2 ^0x39BE3C9E
{
	SYSTEM::WAIT(0);
	return;
}

void func_290() // Position - 0x33815 Hash - 0xAD493D2A ^0xFBB598E0
{
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
	func_298(&uLocal_95, -1295027632, "Plane_1");
	func_54(&uLocal_95, 1);
	func_296(&uLocal_95, -1640.5961f, -3127.1133f, 14.5828f, -2.3352f, 0.0001f, 145.7214f, "HS4_NIMB_LSA_ISD", 0, 1, 1023, 0);
	GRAPHICS::SET_TIMECYCLE_MODIFIER("H4_Hanger_for_CU");
	GRAPHICS::SET_TIMECYCLE_MODIFIER_STRENGTH(1f);

	if (func_58(PLAYER::PLAYER_PED_ID()))
	{
		func_291();
	
		if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), PV_COMP_HEAD, 1) == 19)
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0, 1);
	}

	return;
}

void func_291() // Position - 0x3389D Hash - 0x9F9A26D1 ^0xCB75089A
{
	Global_2793044.f_287 = 0;
	func_295(3782, 0, -1);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_293())
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_HAND, 0, 0, 0);
			func_292();
		}
	}

	return;
}

void func_292() // Position - 0x338DC Hash - 0x75A09A04 ^0x75A09A04
{
	Global_78530 = 0;
	Global_78531 = -1;
	Global_78532 = -1;
	Global_78533 = -1;
	Global_78534 = -1;
	Global_78538 = -1;
	return;
}

BOOL func_293() // Position - 0x33902 Hash - 0x5976C0FC ^0x9A6C2DE6
{
	return func_294(PLAYER::PLAYER_PED_ID());
}

BOOL func_294(Ped pedParam0) // Position - 0x33912 Hash - 0xB37C2EC1 ^0x3119A7F5
{
	int pedDrawableVariation;
	Hash hashNameForComponent;

	pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, PV_COMP_HAND);
	hashNameForComponent = -1;

	switch (ENTITY::GET_ENTITY_MODEL(pedParam0))
	{
		case 1885233650:
			if (pedDrawableVariation >= 1 && pedDrawableVariation <= 19 || pedDrawableVariation >= 21 && pedDrawableVariation <= 29)
				return 1;
		
			hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(pedParam0, 5, pedDrawableVariation, PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_HAND));
		
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hashNameForComponent, 1532858877, 0))
				return 1;
			break;
	
		case -1667301416:
			if (pedDrawableVariation >= 1 && pedDrawableVariation <= 19 || pedDrawableVariation >= 21 && pedDrawableVariation <= 29)
				return 1;
		
			hashNameForComponent = FILES::GET_HASH_NAME_FOR_COMPONENT(pedParam0, 5, pedDrawableVariation, PED::GET_PED_TEXTURE_VARIATION(pedParam0, PV_COMP_HAND));
		
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(hashNameForComponent, 1532858877, 0))
				return 1;
			break;
	}

	return 0;
}

void func_295(int iParam0, int iParam1, int iParam2) // Position - 0x339E2 Hash - 0xCF91FBA1 ^0xC4FE4CB6
{
	if (iParam2 == -1)
		iParam2 = func_10();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
	return;
}

void func_296(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x33A00 Hash - 0x607C6130 ^0x706A73DE
{
	func_297(uParam0, sParam7, iParam8, iParam9, iParam10);
	uParam0->f_9 = { fParam1 };
	uParam0->f_12 = { fParam4 };
	uParam0->f_7 = iParam11;
	return;
}

void func_297(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4) // Position - 0x33A30 Hash - 0x6C5FBB5E ^0xD460273B
{
	uParam0->f_1 = sParam1;
	uParam0->f_2 = iParam3;
	uParam0->f_17 = iParam4;
	uParam0->f_3 = iParam2;
	uParam0->f_16 = 0;
	func_52(&(uParam0->f_18));
	return;
}

void func_298(var uParam0, int iParam1, char* sParam2) // Position - 0x33A5D Hash - 0x56FFD57E ^0x2EC6E3FD
{
	uParam0->f_20 = iParam1;
	uParam0->f_21 = sParam2;
	return;
}

