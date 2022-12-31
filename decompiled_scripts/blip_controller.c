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
	char* sLocal_21 = 0;
	char* sLocal_22 = 0;
	char* sLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	int iLocal_30 = 0;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	float fLocal_39 = 0f;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	BOOL bLocal_45 = 0;
	BOOL bLocal_46 = 0;
	BOOL bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	BOOL bLocal_50 = 0;
	Interior inLocal_51 = 0;
	BOOL bLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 7;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	BOOL bLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	BOOL bLocal_71 = 0;
	BOOL bLocal_72 = 0;
	BOOL bLocal_73 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;
	int num;
	int j;
	BOOL flag;
	int num2;
	int num3;
	int num4;
	BOOL flag2;
	int num5;
	int num6;
	BOOL flag3;
	int num7;

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
	sLocal_21 = "CHECKPOINT_NORMAL";
	sLocal_22 = "CHECKPOINT_MISSED";
	sLocal_23 = "CHECKPOINT_PERFECT";
	uLocal_24 = { 1694.7395f, 3276.5024f, 41.2796f };
	uLocal_27 = { 8.79494f, 0.59893f, 154.8464f };
	iLocal_30 = 3;
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	fLocal_39 = 80f;
	fLocal_40 = 140f;
	fLocal_41 = 180f;
	bLocal_50 = true;
	iLocal_53 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_52();

	for (i = 0; i <= 59; i = i + 1)
	{
		if (func_51(i))
		{
			num = func_50(i);
			func_47(num, func_48(i));
		}
	}

	func_46(91, true);
	func_46(92, true);
	Global_32540 = true;

	while (Global_32542)
	{
		MISC::GET_GAME_TIMER() % 250 == 0;
		SYSTEM::WAIT(0);
	}

	j = 0;

	for (j = 0; j < 7; j = j + 1)
	{
		uLocal_55[j] = -1;
	}

	MISC::SET_BIT(&(Global_32543[j /*23*/].f_11), 18);
	j = 0;

	for (j = 0; j < 263; j = j + 1)
	{
		MISC::SET_BIT(&(Global_32543[j /*23*/].f_11), 18);
	}

	bLocal_71 = Global_38594;
	flag = false;
	func_45();
	func_43();

	while (true)
	{
		if (!flag)
			func_42();
	
		flag = func_35();
	
		if (flag)
			Global_32540 = true;
	
		num2 = 0;
		num3 = 0;
		j = 0;
	
		if (Global_32540)
		{
			func_45();
			func_43();
			num4 = 0;
		
			for (j = 0; j < 263; j = j + 1)
			{
				flag2 = IS_BIT_SET(Global_32543[j /*23*/].f_11, 18);
			
				if (!flag2)
				{
					if (func_34(j))
					{
						num3 = num3 + 1;
						flag2 = true;
					}
				}
			
				num2 = num2 + 1;
			
				if (flag2)
				{
					num5 = 0;
					num6 = 0;
				
					if (Global_38594)
					{
						num5 = num5 + 1;
						num6 = num6 + 1;
					}
					else
					{
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 13))
						{
							if (func_33())
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 1))
						{
							if (!bLocal_50)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 2))
						{
							if (bLocal_50)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 7))
						{
							if (!func_32(15))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 16))
						{
							if (!func_30(Global_32543[j /*23*/].f_22))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 14))
						{
							if (func_32(5))
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 8))
						{
							if (Global_32543[j /*23*/].f_16 != 4 && Global_32543[j /*23*/].f_16 != 8)
							{
								if (!func_29(j))
									num5 = num5 + 1;
							
								num6 = num6 + 1;
							}
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
						{
							switch (iLocal_64)
							{
								case 1:
								case 0:
								case 2:
									break;
							
								default:
									num5 = num5 + 1;
									break;
							}
						
							num6 = num6 + 1;
						}
					
						if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 27))
						{
							if (bLocal_45)
								num5 = num5 + 1;
						
							num6 = num6 + 1;
						}
					
						if (Global_32543[j /*23*/].f_16 == 1)
							func_23();
					}
				
					if (num6 > 0)
						if (num5 > 0)
							MISC::CLEAR_BIT(&(Global_32543[j /*23*/].f_11), 0);
						else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 15))
							MISC::SET_BIT(&(Global_32543[j /*23*/].f_11), 0);
					else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 15))
						MISC::SET_BIT(&(Global_32543[j /*23*/].f_11), 0);
				
					if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 0) && IS_BIT_SET(Global_32543[j /*23*/].f_11, 3))
					{
						flag3 = false;
					
						if (!HUD::DOES_BLIP_EXIST(Global_32543[j /*23*/].f_19))
						{
							while (!HUD::GET_NUMBER_OF_ACTIVE_BLIPS() < 150)
							{
								SYSTEM::WAIT(2000);
							}
						
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 28))
										{
											Global_32543[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_32543[j /*23*/][0 /*3*/], Global_32543[j /*23*/].f_10);
											HUD::SET_BLIP_ALPHA(Global_32543[j /*23*/].f_19, 128);
											HUD::SHOW_HEIGHT_ON_BLIP(Global_32543[j /*23*/].f_19, false);
										}
										else
										{
											Global_32543[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_32543[j /*23*/][iLocal_64 /*3*/]);
											HUD::SET_BLIP_SPRITE(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/].f_12[iLocal_64]);
										}
										break;
								
									default:
										Global_32543[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(1f, 2f, 3f);
										break;
								}
							}
							else if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 28))
							{
								Global_32543[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_RADIUS(Global_32543[j /*23*/][0 /*3*/], Global_32543[j /*23*/].f_10);
								HUD::SET_BLIP_ALPHA(Global_32543[j /*23*/].f_19, 128);
								HUD::SHOW_HEIGHT_ON_BLIP(Global_32543[j /*23*/].f_19, false);
							}
							else
							{
								Global_32543[j /*23*/].f_19 = HUD::ADD_BLIP_FOR_COORD(Global_32543[j /*23*/][0 /*3*/]);
								HUD::SET_BLIP_SPRITE(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/].f_12[0]);
							}
						
							if (Global_32543[j /*23*/].f_16 == 1)
								flag3 = true;
						}
						else
						{
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 19))
							{
								switch (iLocal_64)
								{
									case 1:
									case 0:
									case 2:
										HUD::SET_BLIP_COORDS(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/][iLocal_64 /*3*/]);
										break;
								
									default:
										break;
								}
							}
							else
							{
								HUD::SET_BLIP_COORDS(Global_32543[j /*23*/].f_19, Global_32543[j /*23*/][0 /*3*/]);
							}
						
							if (IS_BIT_SET(Global_32543[j /*23*/].f_11, 9))
							{
								if (bLocal_47)
								{
									HUD::SET_BLIP_FLASHES(Global_32543[j /*23*/].f_19, true);
									bLocal_47 = false;
								}
								else
								{
									HUD::SET_BLIP_FLASHES_ALTERNATE(Global_32543[j /*23*/].f_19, true);
									bLocal_47 = true;
								}
							
								HUD::SET_BLIP_FLASH_TIMER(Global_32543[j /*23*/].f_19, 10000);
								MISC::CLEAR_BIT(&(Global_32543[j /*23*/].f_11), 9);
							}
							else
							{
								HUD::SET_BLIP_FLASHES(Global_32543[j /*23*/].f_19, false);
							}
						}
					
						func_20(Global_32543[j /*23*/].f_19, j);
					
						if (flag3)
							func_19(j);
					
						num3 = num3 + 1;
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(Global_32543[j /*23*/].f_19))
						{
							HUD::REMOVE_BLIP(&(Global_32543[j /*23*/].f_19));
							num3 = num3 + 1;
						
							if (Global_32543[j /*23*/].f_16 == 1)
								func_18(j);
						}
					
						Global_32543[j /*23*/].f_19 = 0;
					}
				}
			
				MISC::CLEAR_BIT(&(Global_32543[j /*23*/].f_11), 18);
				num7 = 30;
			
				if (CAM::IS_SCREEN_FADED_OUT())
					num7 = 250;
			
				if (num3 > num7)
				{
					SYSTEM::WAIT(0);
					num3 = 0;
				}
			
				if (num2 / 20 > num4)
				{
					num4 = num2 / 20;
					SYSTEM::WAIT(0);
				}
			}
		}
	
		Global_32540 = Global_32541;
		Global_32541 = false;
	
		if (num2 == 0)
		{
			func_11();
			func_7();
			SYSTEM::WAIT(500);
			iLocal_64 = func_1();
		}
	}

	return;
}

int func_1() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_2() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_5(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_4(PLAYER::PLAYER_PED_ID());
		
			if (func_3(num) && !func_32(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_3(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_3(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_4(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_5(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_5(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_3(iParam0))
		return func_6(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_6(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_7() // Hash - 0xFC9E09FE ^0xC84FC3B9
{
	if (func_1() == 1)
	{
		if (func_10(63))
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (func_10(126))
				{
					if (func_9(138))
						func_8(138, false, false);
				
					if (!func_9(139))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CHOP")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 19.3f, 528.24f, 169.63f, true) > 50f)
								func_8(139, true, false);
				}
				else
				{
					if (func_9(139))
						func_8(139, false, false);
				
					if (!func_9(138))
						if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CHOP")) == 0)
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), -11.15f, -1425.56f, 29.67f, true) > 50f)
								func_8(138, true, false);
				}
			}
		}
	}

	return;
}

void func_8(int iParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3DFD90D4 ^0xB85FE721
{
	int num;
	BOOL flag;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (!bParam2)
	{
		flag = IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
	
		if (flag == bParam1)
			return;
	}

	if (bParam1 != IS_BIT_SET(Global_32543[num /*23*/].f_11, 0))
	{
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
	
		if (Global_32540 == true)
			Global_32541 = 1;
	
		Global_32540 = true;
	}

	if (bParam1)
	{
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 0);
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 15);
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 3);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 0);
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 15);
	}

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 0))
	{
		if (HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19))
		{
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
			HUD::REMOVE_BLIP(&(Global_32543[num /*23*/].f_19));
			MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
		}
	}

	return;
}

BOOL func_9(int iParam0) // Hash - 0x7524A8DB ^0x409ED99B
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}

BOOL func_10(int iParam0) // Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_11() // Hash - 0xB0BA8B6C ^0x70945B8B
{
	Vector3 vector;
	int num;
	float num2;
	int i;
	float distanceBetweenCoords;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
		return;

	vector = { func_17(PLAYER::GET_PLAYER_INDEX()) };
	num = -1;
	num2 = 1000000f;
	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] != -1)
		{
			if (HUD::DOES_BLIP_EXIST(Global_32543[uLocal_55[i] /*23*/].f_19))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, HUD::GET_BLIP_COORDS(Global_32543[uLocal_55[i] /*23*/].f_19), true);
			
				if (distanceBetweenCoords < num2)
				{
					num2 = distanceBetweenCoords;
					num = i;
				}
			}
		}
	}

	if (iLocal_53 == num)
		return;

	iLocal_53 = num;

	if (num == -1)
		return;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] != -1)
			if (i == num)
				if (HUD::DOES_BLIP_EXIST(Global_32543[uLocal_55[i] /*23*/].f_19))
					func_16(uLocal_55[i]);
			else if (HUD::DOES_BLIP_EXIST(Global_32543[uLocal_55[i] /*23*/].f_19))
				func_12(uLocal_55[i]);
	}

	return;
}

void func_12(int iParam0) // Hash - 0xEA6E290A ^0xEA6E290A
{
	func_15(iParam0, false, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

void func_13(int iParam0, BOOL bParam1) // Hash - 0x47A120FC ^0x8AC0AE90
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 4))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 4);
	else
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 4);

	if (Global_32540 == true)
		Global_32541 = 1;

	Global_32540 = true;
	MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_14(int iParam0, BOOL bParam1) // Hash - 0x7A90E6B9 ^0xCDD88403
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 5))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 5);
	else
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 5);

	if (Global_32540 == true)
		Global_32541 = 1;

	Global_32540 = true;
	MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_15(int iParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x1EA6B920 ^0x270D6F7E
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 6))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 6);
	else
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 6);

	if (bParam2)
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 11);
	else
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 11);

	if (Global_32540 == true)
		Global_32541 = 1;

	Global_32540 = true;
	MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_16(int iParam0) // Hash - 0x3B9358A9 ^0x3B9358A9
{
	func_15(iParam0, true, false);
	func_14(iParam0, true);
	func_13(iParam0, true);
	return;
}

Vector3 func_17(Player plParam0) // Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_18(int iParam0) // Hash - 0x65283A25 ^0x65283A25
{
	int i;

	if (iLocal_54 < 1)
		return;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] == iParam0)
		{
			iLocal_54 = iLocal_54 - 1;
			uLocal_55[i] = -1;
		
			if (iParam0 == iLocal_53)
				iLocal_53 = -1;
		
			return;
		}
	}

	return;
}

void func_19(int iParam0) // Hash - 0xAE3E6F62 ^0xAE3E6F62
{
	int i;
	int num;

	if (iLocal_54 == 7)
		return;

	i = 0;
	num = -1;

	for (i = 0; i < iLocal_54; i = i + 1)
	{
		if (uLocal_55[i] == iParam0)
			return;
	}

	for (i = 0; i < 7; i = i + 1)
	{
		if (uLocal_55[i] == -1)
		{
			num = i;
			i = 7;
		}
	}

	uLocal_55[num] = iParam0;
	iLocal_54 = iLocal_54 + 1;
	return;
}

void func_20(Blip blParam0, int iParam1) // Hash - 0xA9216813 ^0x9CC99DBF
{
	int num;
	BOOL flag;
	BOOL flag2;
	BOOL flag3;
	BOOL flag4;

	num = func_1();
	HUD::SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(blParam0, true);
	HUD::SET_BLIP_PRIORITY(blParam0, 2);
	HUD::SET_BLIP_COLOUR(blParam0, func_22(iParam1));

	if (Global_32543[iParam1 /*23*/].f_16 == 4 || Global_32543[iParam1 /*23*/].f_16 == 8)
	{
		switch (num)
		{
			case 0:
				HUD::SET_BLIP_COLOUR(blParam0, 42);
				break;
		
			case 1:
				HUD::SET_BLIP_COLOUR(blParam0, 43);
				break;
		
			case 2:
				HUD::SET_BLIP_COLOUR(blParam0, 44);
				break;
		}
	}

	if (!IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
		HUD::SET_BLIP_SCALE(blParam0, 1f);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_32543[iParam1 /*23*/].f_20)))
		if (HUD::DOES_TEXT_LABEL_EXIST(&(Global_32543[iParam1 /*23*/].f_20)))
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blParam0, &(Global_32543[iParam1 /*23*/].f_20));

	flag = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 4);
	flag2 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 5);
	flag3 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 6);
	flag4 = false;

	if (func_21(0))
		flag4 = IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 11);

	if (flag3 && !flag4)
		HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, false);
	else
		HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, true);

	if (flag2 && flag)
	{
		HUD::SET_BLIP_DISPLAY(blParam0, 4);
	}
	else
	{
		if (flag2)
			HUD::SET_BLIP_DISPLAY(blParam0, 5);
	
		if (flag)
			HUD::SET_BLIP_DISPLAY(blParam0, 3);
	}

	switch (Global_32543[iParam1 /*23*/].f_16)
	{
		case 7:
			HUD::SET_BLIP_PRIORITY(blParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 6:
		case 5:
			HUD::SET_BLIP_PRIORITY(blParam0, 2);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 1:
			HUD::SET_BLIP_PRIORITY(blParam0, 3);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
			break;
	
		case 9:
			HUD::SET_BLIP_PRIORITY(blParam0, 1);
			HUD::SET_BLIP_CATEGORY(blParam0, 10);
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, false);
			break;
	
		case 4:
		case 8:
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
		
			if (Global_32543[iParam1 /*23*/].f_16 == 4)
				HUD::SET_BLIP_PRIORITY(blParam0, 7);
			else
				HUD::SET_BLIP_PRIORITY(blParam0, 5);
		
			if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 8))
			{
				if (!func_29(iParam1))
				{
					if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
					{
						HUD::SET_BLIP_ALPHA(blParam0, 0);
					}
					else
					{
						if (Global_32543[iParam1 /*23*/].f_17 == 0)
							HUD::SET_BLIP_COLOUR(blParam0, 42);
					
						if (Global_32543[iParam1 /*23*/].f_17 == 1)
							HUD::SET_BLIP_COLOUR(blParam0, 43);
					
						if (Global_32543[iParam1 /*23*/].f_17 == 2)
							HUD::SET_BLIP_COLOUR(blParam0, 44);
					
						if (Global_32543[iParam1 /*23*/].f_16 == 8)
						{
							HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 5));
							HUD::SET_BLIP_PRIORITY(blParam0, 3);
							HUD::SET_BLIP_AS_SHORT_RANGE(blParam0, true);
							HUD::SET_BLIP_HIDDEN_ON_LEGEND(blParam0, true);
							HUD::SET_BLIP_SCALE(blParam0, 0.77f);
						}
						else
						{
							HUD::SET_BLIP_SCALE(blParam0, 0.72f);
						}
					}
				}
				else
				{
					if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 28))
						HUD::SET_BLIP_ALPHA(blParam0, 128);
				
					if (Global_32543[iParam1 /*23*/].f_16 == 8)
						HUD::SET_BLIP_HIDDEN_ON_LEGEND(blParam0, false);
				}
			}
			break;
	
		default:
			HUD::SET_BLIP_PRIORITY(blParam0, 5);
			break;
	}

	switch (iParam1)
	{
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
			HUD::SET_BLIP_HIGH_DETAIL(blParam0, true);
			break;
	}

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 19))
	{
		switch (num)
		{
			case 1:
			case 0:
			case 2:
				HUD::SET_BLIP_COORDS(Global_32543[iParam1 /*23*/].f_19, Global_32543[iParam1 /*23*/][num /*3*/]);
				break;
		}
	}

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 17))
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(blParam0, true);
	else
		HUD::SET_BLIP_AS_MISSION_CREATOR_BLIP(blParam0, false);

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 20))
		HUD::SHOW_TICK_ON_BLIP(blParam0, true);
	else
		HUD::SHOW_TICK_ON_BLIP(blParam0, false);

	if (IS_BIT_SET(Global_32543[iParam1 /*23*/].f_11, 29))
		HUD::SET_BLIP_COLOUR(blParam0, 39);

	return;
}

BOOL func_21(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return 0;

	if (func_30(iParam0))
		return 0;

	return 1;
}

int func_22(int iParam0) // Hash - 0x22A7F6CA ^0x9E839D49
{
	int num;
	int bitsInRange;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return 0;

	bitsInRange = MISC::GET_BITS_IN_RANGE(Global_32543[num /*23*/].f_11, 21, 26);
	return bitsInRange;
}

void func_23() // Hash - 0x90BFFF20 ^0x90BFFF20
{
	int i;

	for (i = 0; i < 7; i = i + 1)
	{
		func_24(i);
	}

	return;
}

void func_24(int iParam0) // Hash - 0x9480DE65 ^0x648C6BAE
{
	BOOL flag;

	if (iParam0 == 10)
		return;

	if (Global_95719[iParam0 /*10*/].f_7 == 263)
		return;

	flag = false;

	if (IS_BIT_SET(Global_113648.f_7231[iParam0], 0))
		if (Global_95719[iParam0 /*10*/].f_9 != func_28())
			flag = true;
		else if (!func_26(iParam0))
			flag = true;

	if (iParam0 == 5)
		if (func_25(6))
			flag = false;

	if (func_21(14))
		flag = false;

	func_8(Global_95719[iParam0 /*10*/].f_7, flag, false);
	return;
}

BOOL func_25(int iParam0) // Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

BOOL func_26(int iParam0) // Hash - 0xDEAD9A68 ^0xDEAD9A68
{
	int i;
	var interiorType;
	Interior interiorAtCoordsWithType;

	if (Global_100733.f_385 == 0)
		return false;

	if (iParam0 == 10)
	{
		for (i = 0; i < 10; i = i + 1)
		{
			if (func_26(i))
				return true;
		}
	}
	else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_27(iParam0, &interiorType);
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95719[iParam0 /*10*/].f_3, &interiorType);
	
		if (interiorAtCoordsWithType != 0 && Global_100733.f_385 == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_27(int iParam0, char* sParam1) // Hash - 0xEB46C6A ^0xEB46C6A
{
	TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
			break;
	
		case 2:
		case 1:
			if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailer"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
			else if (STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash"))
				TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
			break;
	
		case 8:
		case 7:
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
			break;
	}

	return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_28() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_2();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_29(int iParam0) // Hash - 0x4EA1365A ^0x5324D055
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return false;

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 8))
		return false;

	if (Global_32543[num /*23*/].f_17 == func_1())
		return true;

	if (!IS_BIT_SET(Global_32543[num /*23*/].f_11, 10))
		return false;

	if (Global_32543[num /*23*/].f_18 == func_1())
		return true;

	return false;
}

BOOL func_30(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_31(iParam0, Global_43257);
}

BOOL func_31(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

	switch (iParam0)
	{
		case 16:
			switch (iParam1)
			{
				case 9:
				case 10:
				case 7:
				case 13:
				case 14:
					return 0;
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
			}
			break;
	
		case 2:
		case 3:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
				case 17:
					return 1;
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
			}
			break;
	
		case 18:
		case 12:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 8:
					return 1;
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

BOOL func_32(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_33() // Hash - 0xC3255B65 ^0x95740786
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != 0)
		return true;

	return false;
}

BOOL func_34(int iParam0) // Hash - 0x88E08DE8 ^0x33845136
{
	if (bLocal_68 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 13))
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_69 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 7) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 11) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 16))
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_70 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 14))
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_65 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 10) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 8) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 19))
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_66)
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_72 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 27))
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	if (bLocal_73 && IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 1) || IS_BIT_SET(Global_32543[iParam0 /*23*/].f_11, 2) || Global_32543[iParam0 /*23*/].f_16 == 1)
	{
		MISC::SET_BIT(&(Global_32543[iParam0 /*23*/].f_11), 18);
		return true;
	}

	return false;
}

BOOL func_35() // Hash - 0x3D349281 ^0x3D349281
{
	int num;

	num = 0;

	if (func_41())
	{
		if (!bLocal_67)
		{
			bLocal_67 = true;
			num = 1;
		}
	}

	if (func_40())
	{
		if (!bLocal_68)
		{
			bLocal_68 = true;
			num = 1;
		}
	}

	if (func_39())
	{
		if (!bLocal_69)
		{
			bLocal_69 = true;
			num = 1;
		}
	}

	if (func_38())
	{
		if (!bLocal_70)
		{
			bLocal_70 = true;
			num = 1;
		}
	}

	bLocal_66 = false;

	if (Global_38594 != bLocal_71)
	{
		bLocal_71 = Global_38594;
	
		if (!bLocal_66)
		{
			bLocal_66 = true;
			num = 1;
		}
	}

	if (func_36())
	{
		if (!bLocal_73)
		{
			bLocal_73 = true;
			num = 1;
		}
	}

	iLocal_64 = func_1();

	if (iLocal_64 != iLocal_63)
	{
		iLocal_63 = iLocal_64;
		bLocal_65 = true;
		num = 1;
	}

	bLocal_46 = bLocal_45;

	if (func_10(130))
		bLocal_45 = true;

	if (func_10(131))
		bLocal_45 = false;

	if (bLocal_45 != bLocal_46)
	{
		if (!bLocal_72)
			num = 1;
	
		bLocal_72 = true;
	}

	return num;
}

BOOL func_36() // Hash - 0x68A7BF95 ^0x40C85B41
{
	Interior interiorFromEntity;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
		return false;

	interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()));

	if (inLocal_51 != interiorFromEntity)
	{
		inLocal_51 = interiorFromEntity;
	
		if (interiorFromEntity == 0 || func_37(interiorFromEntity))
			bLocal_50 = true;
		else
			bLocal_50 = false;
	
		return true;
	}

	return false;
}

BOOL func_37(Interior inParam0) // Hash - 0xB58779E9 ^0xB58779E9
{
	int i;

	i = 0;

	for (i = 0; i <= 60; i = i + 1)
	{
		if (Global_30[i] == inParam0)
			return true;
	}

	return false;
}

BOOL func_38() // Hash - 0x30FF2BF8 ^0x30FF2BF8
{
	if (bLocal_52 != func_21(0))
	{
		bLocal_52 = func_21(0);
		return true;
	}

	return false;
}

BOOL func_39() // Hash - 0xDF70D0F9 ^0xDF70D0F9
{
	BOOL flag;

	flag = Global_38595;
	Global_38595 = false;
	flag;
	return flag;
}

BOOL func_40() // Hash - 0x21CB65B ^0x8D16A5D9
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX()) != iLocal_49)
	{
		iLocal_49 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
		return true;
	}

	return false;
}

BOOL func_41() // Hash - 0x9F648B5 ^0xE82A0F6A
{
	if (Global_43257 != 15)
		return false;

	if (CLOCK::GET_CLOCK_HOURS() != iLocal_48)
	{
		iLocal_48 = CLOCK::GET_CLOCK_HOURS();
		return true;
	}

	return false;
}

void func_42() // Hash - 0xD830612D ^0xD830612D
{
	bLocal_65 = false;
	bLocal_66 = false;
	bLocal_67 = false;
	bLocal_68 = false;
	bLocal_69 = false;
	bLocal_70 = false;
	bLocal_71 = false;
	bLocal_72 = false;
	bLocal_73 = false;
	return;
}

void func_43() // Hash - 0xFCA8D81D ^0xFCA8D81D
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(112, true, false);
		func_8(113, true, false);
		func_8(114, true, false);
	}

	return;
}

int func_44(int iParam0) // Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return 0;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_45() // Hash - 0xC0C5B85A ^0xC0C5B85A
{
	if (func_44(0) == 1 && !func_32(6))
	{
		func_8(156, 1, false);
		func_8(157, true, false);
		func_8(161, true, false);
		func_8(160, true, false);
		func_8(158, true, false);
		func_12(158);
		func_8(159, true, false);
		func_12(159);
	}

	return;
}

void func_46(int iParam0, BOOL bParam1) // Hash - 0x4D1256BB ^0x89DBF5D6
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	if (bParam1 == IS_BIT_SET(Global_32543[num /*23*/].f_11, 2))
		return;

	if (bParam1)
		MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 2);
	else
		MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 2);

	if (Global_32540 == true)
		Global_32541 = 1;

	Global_32540 = true;
	MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
	return;
}

void func_47(int iParam0, char* sParam1) // Hash - 0xF718BD8C ^0x9F126126
{
	int num;

	num = iParam0;

	if (num < 0 || num >= 263 || iParam0 == 263)
		return;

	TEXT_LABEL_ASSIGN_STRING(&(Global_32543[num /*23*/].f_20), sParam1, 8);

	if (HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(Global_32543[num /*23*/].f_19, sParam1);

	return;
}

char* func_48(int iParam0) // Hash - 0x5B47F5FF ^0x5B47F5FF
{
	switch (iParam0)
	{
		case 0:
			return _("Barber Shop");
	
		case 1:
			return _("Barber Shop");
	
		case 2:
			return _("Barber Shop");
	
		case 3:
			return _("Barber Shop");
	
		case 4:
			return _("Barber Shop");
	
		case 5:
			return _("Barber Shop");
	
		case 6:
			return _("Barber Shop");
	
		case 7:
			return func_49(iParam0, 0, false);
	
		case 8:
			return func_49(iParam0, 0, false);
	
		case 9:
			return func_49(iParam0, 0, false);
	
		case 10:
			return func_49(iParam0, 0, false);
	
		case 11:
			return func_49(iParam0, 0, false);
	
		case 12:
			return func_49(iParam0, 0, false);
	
		case 13:
			return func_49(iParam0, 0, false);
	
		case 14:
			return func_49(iParam0, 0, false);
	
		case 15:
			return func_49(iParam0, 0, false);
	
		case 16:
			return func_49(iParam0, 0, false);
	
		case 17:
			return func_49(iParam0, 0, false);
	
		case 18:
			return func_49(iParam0, 0, false);
	
		case 19:
			return func_49(iParam0, 0, false);
	
		case 20:
			return func_49(iParam0, 0, false);
	
		case 21:
			return func_49(iParam0, 0, false);
	
		case 22:
			return _("Tattoo Parlor");
	
		case 23:
			return _("Tattoo Parlor");
	
		case 24:
			return _("Tattoo Parlor");
	
		case 25:
			return _("Tattoo Parlor");
	
		case 26:
			return _("Tattoo Parlor");
	
		case 27:
			return _("Tattoo Parlor");
	
		case 28:
			return _("Ammu-Nation with Range");
	
		case 29:
			return _("Ammu-Nation");
	
		case 30:
			return _("Ammu-Nation");
	
		case 31:
			return _("Ammu-Nation");
	
		case 32:
			return _("Ammu-Nation");
	
		case 33:
			return _("Ammu-Nation");
	
		case 34:
			return _("Ammu-Nation");
	
		case 35:
			return _("Ammu-Nation");
	
		case 36:
			return _("Ammu-Nation");
	
		case 37:
			return _("Ammu-Nation");
	
		case 38:
			return _("Ammu-Nation with Range");
	
		case 39:
			return func_49(iParam0, 0, false);
	
		case 40:
			return func_49(iParam0, 0, false);
	
		case 41:
			return func_49(iParam0, 0, false);
	
		case 42:
			return func_49(iParam0, 0, false);
	
		case 43:
			return func_49(iParam0, 0, false);
	
		case 44:
			return func_49(iParam0, 0, false);
	
		case 45:
			return func_49(iParam0, 0, false);
	
		case 46:
			return _("Ammu-Nation");
	
		case 47:
			return _("Ammu-Nation");
	
		case 48:
			return _("Ammu-Nation");
	
		case 49:
			return _("Ammu-Nation");
	
		case 52:
			return _("Ammu-Nation");
	
		case 50:
			return _("Barber Shop");
	
		case 51:
			return _("Casino Store");
	
		case 53:
			return _("Ammu-Nation");
	
		case 54:
			return _("Tattoo Parlor");
	
		case 55:
			return func_49(iParam0, 0, false);
	
		case 56:
			return _("Ammu-Nation");
	
		case 57:
			return func_49(iParam0, 0, false);
	
		case 58:
			return func_49(iParam0, 0, false);
	
		case 59:
			return _("Ammu-Nation");
	}

	return "SHOP_BLIP_INV";
}

char* func_49(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x6BC80F8B ^0x979C43CC
{
	switch (iParam0)
	{
		case -1:
			return _("Empty Shop");
	
		case 0:
			return _("Bob Mulét Hair & Beauty");
	
		case 1:
			return _("Herr Kutz Barber");
	
		case 2:
			return _("Beachcombover Barbers");
	
		case 3:
			return _("O'Sheas Barbers");
	
		case 4:
			return _("Herr Kutz Barber");
	
		case 5:
			return _("Hair On Hawick Barbers");
	
		case 6:
			return _("Herr Kutz Barber");
	
		case 7:
			return _("Discount Store");
	
		case 8:
			return _("Discount Store");
	
		case 9:
			return _("Binco Clothing");
	
		case 10:
			return _("Discount Store");
	
		case 11:
			return _("Discount Store");
	
		case 12:
			return _("Binco Clothing");
	
		case 13:
			return _("Discount Store");
	
		case 14:
			return _("Suburban");
	
		case 15:
			return _("Suburban");
	
		case 16:
			return _("Suburban");
	
		case 17:
			return _("Suburban");
	
		case 18:
			return _("Ponsonbys");
	
		case 19:
			return _("Ponsonbys");
	
		case 20:
			return _("Ponsonbys");
	
		case 21:
			return _("Vespucci Movie Masks");
	
		case 22:
			return _("Blazing Tattoo");
	
		case 23:
			return _("Alamo Tattoo Studio");
	
		case 24:
			return _("Paleto Tattoo Studio");
	
		case 25:
			return _("The Pit");
	
		case 26:
			return _("Los Santos Tattoos");
	
		case 27:
			return _("Ink Inc Tattoos");
	
		case 28:
			return _("Ammu-Nation");
	
		case 29:
			return _("Ammu-Nation");
	
		case 30:
			return _("Ammu-Nation");
	
		case 31:
			return _("Ammu-Nation");
	
		case 32:
			return _("Ammu-Nation");
	
		case 33:
			return _("Ammu-Nation");
	
		case 34:
			return _("Ammu-Nation");
	
		case 35:
			return _("Ammu-Nation");
	
		case 36:
			return _("Ammu-Nation");
	
		case 37:
			return _("Ammu-Nation");
	
		case 38:
			return _("Ammu-Nation");
	
		case 39:
			return _("Los Santos Customs");
	
		case 40:
			return _("Los Santos Customs");
	
		case 41:
			return _("Los Santos Customs");
	
		case 42:
			return _("Beeker's Garage");
	
		case 43:
			return _("Los Santos Customs");
	
		case 44:
			return _("Benny's Original Motor Works");
	
		case 45:
			switch (iParam1)
			{
				case 4:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_ONE";
					else
						return _("Custom Mod Shop");
					break;
			
				case 5:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BIKER_TWO";
					else
						return _("Custom Mod Shop");
					break;
			
				case 11:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUNKER";
					else
						return _("Bunker Vehicle Workshop");
					break;
			
				case 10:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TRUCK";
					else
						return _("Weapon & Vehicle Workshop");
					break;
			
				case 12:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HANGAR";
					else
						return _("Hangar Aircraft Workshop");
					break;
			
				case 13:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_AOC";
					else
						return _("Vehicle Workshop");
					break;
			
				case 14:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BASE";
					else
						return _("Vehicle Workshop");
					break;
			
				case 15:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_BUSINESS_HUB";
					else
						return _("Vehicle Workshop");
					break;
			
				case 16:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_HACKER_TRUCK";
					else
						return _("Vehicle Workshop");
					break;
			
				case 17:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_ARENA_WARS";
					else
						return _("Vehicle Workshop");
					break;
			
				case 18:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_CAR_MEET";
					else
						return _("Vehicle Workshop");
					break;
			
				case 19:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_TUNER_AUTO_SHOP";
					else
						return _("Vehicle Workshop");
					break;
			
				case 20:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_FIXER_HQ";
					else
						return _("Vehicle Workshop");
					break;
			
				case 21:
					if (bParam2)
						return "PERSONAL_CAR_MOD_VARIATION_JUGGALO_HIDEOUT";
					else
						return _("Vehicle Workshop");
					break;
			}
		
			return _("Custom Auto Shop");
	
		case 46:
			return _("MOC Armory");
	
		case 47:
			return _("Avenger Armory");
	
		case 48:
			return _("Terrorbyte Armory");
	
		case 49:
			return _("Arena Armory");
	
		case 52:
			return _("Arcade Armory");
	
		case 53:
			return _("Kosatka Armory");
	
		case 50:
			return _("Penthouse Barber");
	
		case 51:
			return _("Casino Store");
	
		case 54:
			return _("LS Car Meet Tattoos");
	
		case 55:
			return _("Merch Shop");
	
		case 56:
			return _("Fixer Armory");
	
		case 57:
			return _("Record A Studios");
	
		case 58:
			return "S_G_19";
	
		case 59:
			return "S_G_20";
	}

	return "SHOP_NAME_EMPTY";
}

int func_50(int iParam0) // Hash - 0xE2A99677 ^0x592ADA71
{
	switch (iParam0)
	{
		case -1:
			return 263;
	
		case 0:
			return 19;
	
		case 1:
			return 20;
	
		case 2:
			return 21;
	
		case 3:
			return 22;
	
		case 4:
			return 23;
	
		case 5:
			return 24;
	
		case 6:
			return 25;
	
		case 7:
			return 26;
	
		case 8:
			return 27;
	
		case 9:
			return 28;
	
		case 10:
			return 29;
	
		case 11:
			return 30;
	
		case 12:
			return 31;
	
		case 13:
			return 32;
	
		case 14:
			return 33;
	
		case 15:
			return 35;
	
		case 16:
			return 36;
	
		case 17:
			return 37;
	
		case 18:
			return 38;
	
		case 19:
			return 39;
	
		case 20:
			return 40;
	
		case 21:
			return 41;
	
		case 22:
			return 42;
	
		case 23:
			return 43;
	
		case 24:
			return 44;
	
		case 25:
			return 45;
	
		case 26:
			return 46;
	
		case 27:
			return 47;
	
		case 28:
			return 48;
	
		case 29:
			return 49;
	
		case 30:
			return 50;
	
		case 31:
			return 51;
	
		case 32:
			return 52;
	
		case 33:
			return 53;
	
		case 34:
			return 54;
	
		case 35:
			return 55;
	
		case 36:
			return 56;
	
		case 37:
			return 57;
	
		case 38:
			return 58;
	
		case 39:
			return 59;
	
		case 40:
			return 60;
	
		case 41:
			return 61;
	
		case 42:
			return 62;
	
		case 43:
			return 63;
	
		case 44:
			return 64;
	
		case 45:
			return 64;
	
		case 46:
			return 48;
	
		case 47:
			return 48;
	
		case 48:
			return 48;
	
		case 49:
			return 48;
	
		case 52:
			return 48;
	
		case 50:
			return 25;
	
		case 51:
			return 40;
	
		case 53:
			return 48;
	
		case 54:
			return 42;
	
		case 55:
			return 40;
	
		case 56:
			return 48;
	
		case 57:
			return 40;
	
		case 58:
			return 48;
	
		case 59:
			return 48;
	
		default:
			break;
	}

	return 263;
}

BOOL func_51(int iParam0) // Hash - 0xC2D53179 ^0xC2D53179
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
		case 42:
		case 43:
			return true;
	
		case 44:
			break;
	}

	return false;
}

void func_52() // Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

