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
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int gameTimer;
	BOOL flag;

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
	gameTimer = -1;
	flag = false;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
		func_5();

	while (true)
	{
		if (!flag)
		{
			switch (func_1(PLAYER::PLAYER_PED_ID()))
			{
				case 1:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_FRANKLIN_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			
				case 2:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_TREVOR_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			
				default:
					if (AUDIO::LOAD_STREAM("MISSION_COMPLETE_MICHAEL_SMALL", 0))
					{
						AUDIO::PLAY_STREAM_FRONTEND();
						flag = true;
					}
					break;
			}
		}
		else if (gameTimer == -1)
		{
			gameTimer = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() > gameTimer + 8000)
		{
			func_5();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

int func_1(Ped pedParam0) // Position - 0xD2 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_2(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_2(int iParam0) // Position - 0x10F Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_4(iParam0))
		return func_3(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_3(int iParam0) // Position - 0x134 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_4(int iParam0) // Position - 0x143 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

void func_5() // Position - 0x14F Hash - 0x96997D50 ^0xB102C97B
{
	AUDIO::STOP_STREAM();
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

