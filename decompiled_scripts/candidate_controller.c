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
	BOOL bLocal_20 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int num;
	int num2;
	var unk;
	int num3;
	int i;
	int num4;

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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_18();

	num = Global_43218;
	num2 = 15;
	unk = 8;

	while (true)
	{
		if (Global_43257 != 15)
			if (Global_43220 != 0)
				if (Global_43219 != -1)
					if (!SCRIPT::IS_THREAD_ACTIVE(Global_43220))
						func_17(&Global_43219);
	
		if (Global_43218 > 0)
		{
			Global_43223 = 1;
		
			if (Global_43218 == num)
			{
				num3 = 0;
			
				if (Global_43218 > 1)
				{
					i = 0;
				
					for (i = 0; i < Global_43218; i = i + 1)
					{
						if (func_15(Global_43224[i /*4*/].f_2))
							unk[i] = 0;
						else
							unk[i] = 1;
					
						if (Global_43224[i /*4*/].f_1 == 7)
							unk[i] = 1;
					}
				
					num4 = 0;
					i = 0;
				
					for (i = 0; i < Global_43218 - 1; i = i + 1)
					{
						if (!unk[i + 1])
							if (Global_43224[i + 1 /*4*/].f_1 < Global_43224[num4 /*4*/].f_1)
								num4 = i + 1;
					}
				
					num3 = num4;
				
					if (Global_43224[num3 /*4*/].f_2 == 15)
						num3 = -1;
				
					if (num3 != -1)
						if (!func_15(Global_43224[num3 /*4*/].f_2))
							num3 = -1;
				}
			
				if (num3 > -1)
				{
					Global_43219 = Global_43224[num3 /*4*/];
					Global_43220 = Global_43224[num3 /*4*/].f_3;
					Global_43257 = Global_43224[num3 /*4*/].f_2;
					Global_43218 = 0;
					Global_43223 = 0;
				}
				else
				{
					Global_43218 = 0;
					Global_43223 = 0;
				}
			}
		}
	
		if (num2 != Global_43257)
		{
			if (num2 == 15)
				func_14(false);
		
			if (Global_43257 == 15)
				func_14(true);
		
			Global_43223 = 0;
			Global_38595 = 1;
		
			if (Global_43257 != 5 && Global_43257 != 15)
				PLAYER::FORCE_CLEANUP(8);
		
			if (Global_43257 == 15 || Global_43257 == 6)
				func_13(false);
			else
				func_13(true);
		
			if (func_12(Global_43257))
			{
				if (!bLocal_20)
				{
					NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(true);
					bLocal_20 = true;
				}
			}
			else if (bLocal_20)
			{
				NETWORK::NETWORK_BLOCK_JOIN_QUEUE_INVITES(false);
				bLocal_20 = false;
			}
		}
	
		num2 = Global_43257;
		num = Global_43218;
		Global_112074 = func_1();
		Global_32440 = CLOCK::GET_CLOCK_DAY_OF_WEEK();
		SYSTEM::WAIT(0);
	}

	Global_43223 = 0;
	return;
}

var func_1() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_11(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_10(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_9(&unk, CLOCK::GET_CLOCK_HOURS());
	func_4(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_3(&unk, CLOCK::GET_CLOCK_MONTH());
	func_2(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_2(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
{
	if (iParam1 <= 0)
		return;

	if (iParam1 > 2043 || iParam1 < 1979)
		return;

	*uParam0 = *uParam0 - *uParam0 & 2080374784;

	if (iParam1 < 2011)
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
		*uParam0 = *uParam0 | -2147483648;
	}
	else
	{
		*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
		*uParam0 = *uParam0 - *uParam0 & -2147483648;
	}

	return;
}

void func_3(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_4(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_8(*uParam0);
	num2 = func_6(*uParam0);

	if (iParam1 < 1 || iParam1 > func_5(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_5(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
{
	if (iParam1 < 0)
		iParam1 = 0;

	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
	
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
	
		case 1:
			if (iParam1 % 4 == 0)
				if (iParam1 % 100 != 0)
					return 29;
				else if (iParam1 % 400 == 0)
					return 29;
		
			return 28;
	}

	return 30;
}

int func_6(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_7(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_8(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_9(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_10(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_11(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_12(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 0:
		case 2:
		case 3:
		case 4:
		case 7:
		case 9:
		case 10:
		case 11:
		case 13:
		case 14:
		case 17:
		case 18:
			return true;
	}

	return false;
}

void func_13(BOOL bParam0) // Hash - 0xDD23C843 ^0xE5697B63
{
	if (!bParam0)
		Global_112290 = MISC::GET_GAME_TIMER() + 250;

	Global_112287 = bParam0;
	return;
}

void func_14(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
{
	int i;
	int j;

	i = 0;
	j = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 11; j = j + 1)
		{
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_3 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/];
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_4 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_1;
			Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_5 = Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_2;
		}
	}

	for (i = 0; i < 10; i = i + 1)
	{
		Global_60544[i /*3*/][0] = Global_113648.f_20566[i];
		Global_60544.f_31[i /*3*/][0] = Global_113648.f_20566.f_11[i];
		Global_60544.f_62[i /*3*/][0] = Global_113648.f_20566.f_22[i];
		Global_60544.f_93[i /*3*/][0] = Global_113648.f_20566.f_33[i];
		Global_60544.f_124[i /*3*/][0] = Global_113648.f_20566.f_44[i];
		Global_60544.f_155[i /*3*/][0] = Global_113648.f_20566.f_55[i];
		Global_60544.f_186[i /*3*/][0] = Global_113648.f_20566.f_66[i];
		Global_60544.f_217[i /*3*/][0] = Global_113648.f_20566.f_77[i];
		Global_60544.f_248[i /*3*/][0] = Global_113648.f_20566.f_88[i];
	
		if (!bParam0)
		{
			Global_60544[i /*3*/][1] = Global_113648.f_20566[i];
			Global_60544.f_31[i /*3*/][1] = Global_113648.f_20566.f_11[i];
			Global_60544.f_62[i /*3*/][1] = Global_113648.f_20566.f_22[i];
			Global_60544.f_93[i /*3*/][1] = Global_113648.f_20566.f_33[i];
			Global_60544.f_124[i /*3*/][1] = Global_113648.f_20566.f_44[i];
			Global_60544.f_155[i /*3*/][1] = Global_113648.f_20566.f_55[i];
			Global_60544.f_186[i /*3*/][1] = Global_113648.f_20566.f_66[i];
			Global_60544.f_217[i /*3*/][1] = Global_113648.f_20566.f_77[i];
			Global_60544.f_248[i /*3*/][1] = Global_113648.f_20566.f_88[i];
		}
	}

	return;
}

BOOL func_15(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_16(iParam0, Global_43257);
}

BOOL func_16(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_17(int iParam0) // Hash - 0x995C9E2 ^0x995C9E2
{
	if (*iParam0 == -1)
		return;

	if (!*iParam0 == Global_43219)
	{
		*iParam0 = -1;
		return;
	}

	*iParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
	return;
}

void func_18() // Hash - 0xE5803F3D ^0xC6101E62
{
	func_17(&Global_43219);
	Global_43223 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

