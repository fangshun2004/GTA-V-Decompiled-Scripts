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
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	int iLocal_25 = 0;
	int iLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	Vehicle veLocal_33 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	int i;
	float outValue;
	int j;
	int num;

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
	iLocal_20 = -15;
	iLocal_21 = -15;
	iLocal_22 = -1;
	iLocal_26 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_99();

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("STOCK_CONTROLLER")) > 1)
		func_99();

	Global_63346 = 1;
	iLocal_22 = SYSTEM::ROUND(SYSTEM::TO_FLOAT(480) / 16f);
	func_98();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59104[i /*7*/])
		{
			if (Global_59104[i /*7*/].f_2)
			{
				if (!Global_59104[i /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_59104[i /*7*/].f_3, &(Global_59104[i /*7*/].f_5), -1);
				}
				else
				{
					outValue = 0f;
					STATS::STAT_GET_FLOAT(Global_59104[i /*7*/].f_3, &outValue, -1);
					Global_59104[i /*7*/].f_5 = SYSTEM::FLOOR(outValue);
				}
			}
		}
	}

	func_97();
	func_95();
	func_94();
	func_91();
	Global_63346 = 0;
	func_90(true);
	func_87();
	func_84();

	while (true)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			if (!Global_113648.f_20566.f_233[j /*69*/].f_1 < 11)
				Global_113648.f_20566.f_233[j /*69*/].f_1 = 0;
		}
	
		func_80();
	
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !func_79(14))
		{
			func_68();
			num = 16;
		
			while (func_67() && num >= 0)
			{
				num = num - 1;
				func_47();
				Global_60540 = 1;
				func_41();
				Global_63348 = 1;
				func_39();
				func_38();
			}
		
			if (func_30())
			{
				func_28(false);
				func_38();
				func_27();
				func_38();
				func_87();
				func_38();
			}
		
			while (Global_60533 > 0)
			{
				func_11(&iLocal_20, 0, 480, 0, 0, 0, 0);
				func_11(&iLocal_21, 0, 480, 0, 0, 0, 0);
				Global_60533 = Global_60533 - 1;
			}
		}
	
		func_4();
		func_1();
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Hash - 0xE1CF4C78 ^0x37BA8AE
{
	Ped playerPed;
	Ped ped;

	playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());

	if (ENTITY::IS_ENTITY_DEAD(playerPed, false))
		return;

	ped = func_3(playerPed);

	if (FIRE::IS_ENTITY_ON_FIRE(ped))
	{
		func_2(89, 1);
	
		if (ENTITY::GET_ENTITY_SPEED(ped) > 5f)
			func_2(90, 1);
	}

	return;
}

void func_2(int iParam0, int iParam1) // Hash - 0xE9A65642 ^0xF9847A54
{
	int outValue;

	if (iParam1 < 1)
		return;

	if (Global_59104[iParam0 /*7*/].f_2)
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (Global_59104[iParam0 /*7*/])
	{
		STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &outValue, -1);
		outValue = outValue + iParam1;
		STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, outValue, true);
	}

	return;
}

Ped func_3(Ped pedParam0) // Hash - 0xC9D82232 ^0xC9D82232
{
	return pedParam0;
}

void func_4() // Hash - 0x5D9A9596 ^0x427B32C5
{
	int num;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		if (Global_60534)
		{
			Global_60534 = false;
			Global_60535 = MISC::GET_GAME_TIMER();
			Global_63347 = 1;
		}
	
		return;
	}

	if (Global_60534)
	{
		if (!STATS::STAT_COMMUNITY_SYNCH_IS_PENDING())
		{
			num = func_5();
			Global_60534 = false;
		
			if (num < 5)
				Global_63347 = 0;
		}
	}

	return;
}

int func_5() // Hash - 0x52A84F06 ^0xEF1C3284
{
	int i;
	int num;
	Hash statHash;
	float num2;
	int j;
	float outValue;
	float num3;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE() || !NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		return 1;

	i = 0;
	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_55661[i /*36*/].f_8)
		{
			if (Global_55661[i /*36*/].f_35 > -1)
			{
				statHash = Global_58542[Global_55661[i /*36*/].f_35 /*7*/];
				STATS::STAT_GET_FLOAT(statHash, &(Global_55661[i /*36*/].f_9), -1);
			
				if (Global_55661[i /*36*/].f_9 > 0f)
				{
					num2 = 0f;
					STATS::STAT_COMMUNITY_GET_HISTORY(statHash, 0, &(Global_55661[i /*36*/].f_33));
					Global_55661[i /*36*/].f_31 = Global_55661[i /*36*/].f_9;
					Global_55661[i /*36*/].f_32 = Global_55661[i /*36*/].f_9;
					num2 = num2 + Global_55661[i /*36*/].f_33;
				
					for (j = 0; j < 4; j = j + 1)
					{
						outValue = 0f;
						STATS::STAT_COMMUNITY_GET_HISTORY(statHash, j + 1, &outValue);
					
						if (outValue > Global_55661[i /*36*/].f_31)
							Global_55661[i /*36*/].f_31 = outValue;
					
						if (outValue < Global_55661[i /*36*/].f_32)
							Global_55661[i /*36*/].f_32 = outValue;
					
						num2 = num2 + outValue;
					}
				
					num2 = num2 / 5f;
					num3 = func_6(i);
				
					if (num3 > Global_55661[i /*36*/].f_31)
						Global_55661[i /*36*/].f_31 = num3;
				
					if (num3 < Global_55661[i /*36*/].f_32)
						Global_55661[i /*36*/].f_32 = num3;
				
					Global_55661[i /*36*/].f_33 = num3 - num2;
					Global_55661[i /*36*/].f_34 = (Global_55661[i /*36*/].f_33 / num2) * 100f;
				}
				else
				{
					num = num + 1;
				}
			}
		}
	}

	return num;
}

float func_6(int iParam0) // Hash - 0x2C2A4A98 ^0xF21A573D
{
	int num;
	float num2;

	num = iParam0;
	num2 = Global_55661[iParam0 /*36*/].f_9 * func_7(num);
	return SYSTEM::TO_FLOAT(SYSTEM::FLOOR(num2 * 100f)) / 100f;
}

float func_7(int iParam0) // Hash - 0xCEB6E88E ^0x49DE8C7F
{
	float num;
	int num2;
	int i;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;

	num = 1f;

	switch (iParam0)
	{
		case 61:
			if (Global_113648.f_9087.f_99.f_58[131])
				num = 0.5f;
			break;
	
		case 73:
			if (func_10(25))
			{
				num = num * 3f;
			}
			else
			{
				if (func_10(74) || func_10(75))
					num = num * 0.95f;
			
				if (func_10(14))
					num = num * 0.98f;
			
				if (func_10(16))
					num = num * 0.98f;
			
				if (func_10(48))
					num = num * 0.98f;
			
				if (func_10(24))
					num = num * 0.98f;
			
				if (func_10(27))
					num = num * 0.5f;
			}
			break;
	
		case 66:
			if (func_10(49))
				num = num * 0.5f;
		
			if (func_10(10))
				num = num * 0.95f;
			break;
	
		case 59:
			if (func_10(93))
				if (!func_10(47))
					num = num * 0.9f;
		
			if (func_10(38))
				if (!func_10(28))
					num = num * 0.9f;
		
			if (func_10(84))
				if (!func_10(28))
					num = num * 0.9f;
			break;
	
		case 69:
			if (func_10(90))
				if (!func_10(14))
					num = num * 0.7f;
			break;
	
		case 16:
			if (func_10(28))
				num = num * 2f;
			break;
	
		case 52:
			if (func_10(93))
				if (!func_10(28))
					num = num * 0.6f;
			break;
	
		case 56:
			if (func_10(61))
				if (!func_10(49))
					num = num * 0.5f;
			break;
	}

	if (Global_113648.f_20566.f_442 < 1)
		return num;

	num2 = -1;
	i = 0;

	for (i = 0; i < 8; i = i + 1)
	{
		if (Global_113648.f_20566.f_443[i] == iParam0)
			num2 = i;
	}

	if (num2 > -1)
		num = func_9(Global_113648.f_20566.f_452[num2], Global_113648.f_20566.f_461[num2]);

	if (num > 1f)
	{
		num3 = num - 1f;
		num4 = iParam0;
		num5 = func_8(0, num4);
		num6 = func_8(1, num4);
		num7 = func_8(2, num4);
	
		if (num5 + num6 + num7 > 0)
		{
			num8 = Global_60536[0] + Global_60536[1] + Global_60536[2];
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (Global_113648.f_20566.f_22[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_11[i]);
			
				if (Global_113648.f_20566.f_55[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_44[i]);
			
				if (Global_113648.f_20566.f_88[i] > 0)
					num8 = num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_77[i]);
			}
		
			num9 = 700000000;
			num10 = 1000000000;
		
			if (num8 > num10)
			{
				num3 = 0f;
			}
			else if (num8 < num9)
			{
				num3 = 1f;
			}
			else
			{
				num11 = SYSTEM::TO_FLOAT(num8 - num9);
				num12 = SYSTEM::TO_FLOAT(num10 - num9);
				num3 = num3 * (1f - (num11 / num12));
			}
		}
	
		num = 1f + num3;
	}

	return num;
}

int func_8(int iParam0, int iParam1) // Hash - 0x9B587762 ^0xE50A2992
{
	if (iParam1 < 0 || iParam1 > 9)
		return 0;

	switch (iParam0)
	{
		case 0:
			return Global_113648.f_20566.f_22[iParam1];
	
		case 1:
			return Global_113648.f_20566.f_55[iParam1];
	
		case 2:
			return Global_113648.f_20566.f_88[iParam1];
	}

	return 0;
}

float func_9(int iParam0, int iParam1) // Hash - 0xEDE6A49A ^0xA05D2D39
{
	float num;
	BOOL flag;
	float num2;
	int num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;

	num = 0f;

	if (iParam0 < 1)
		return 1f;

	flag = IS_BIT_SET(iParam1, 0);
	num2 = SYSTEM::TO_FLOAT(iParam0);
	num3 = 0;

	if (IS_BIT_SET(iParam1, 3))
		num3 = num3 + 1;

	if (IS_BIT_SET(iParam1, 4))
		num3 = num3 + 2;

	if (IS_BIT_SET(iParam1, 5))
		num3 = num3 + 4;

	if (IS_BIT_SET(iParam1, 20))
		num3 = num3 + 8;

	num4 = SYSTEM::TO_FLOAT(3 * num3);

	if (IS_BIT_SET(iParam1, 2))
		num4 = num4 * 7f;

	if (IS_BIT_SET(iParam1, 1))
		if (func_10(21))
			return 1f;
	else if (num4 < 1f)
		return 1f;

	num5 = 1f - (num2 / num4);

	if (IS_BIT_SET(iParam1, 16))
		num = num - 0.5f;

	if (IS_BIT_SET(iParam1, 17))
		num = num - 0.25f;

	if (IS_BIT_SET(iParam1, 18))
		num = num - 0.1f;

	if (IS_BIT_SET(iParam1, 19))
		num = num - 0.33f;

	if (flag)
		num = -num;

	if (!IS_BIT_SET(iParam1, 1))
	{
		if (IS_BIT_SET(iParam1, 6))
		{
			num6 = 0f;
		
			if (IS_BIT_SET(iParam1, 8))
				num6 = num6 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 9))
				num6 = num6 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 10))
				num6 = num6 + 0.125f;
		
			if (num5 < num6)
			{
				num7 = num5 / num6;
			
				if (IS_BIT_SET(iParam1, 7))
				{
					num7 = 1f - num7;
					num7 = num7 * num7;
					num7 = 1f - num7;
				}
			
				num = num * num7;
			}
		}
	
		if (IS_BIT_SET(iParam1, 11))
		{
			num8 = 0f;
		
			if (IS_BIT_SET(iParam1, 13))
				num8 = num8 + 0.5f;
		
			if (IS_BIT_SET(iParam1, 14))
				num8 = num8 + 0.25f;
		
			if (IS_BIT_SET(iParam1, 15))
				num8 = num8 + 0.125f;
		
			num9 = 1f - num8;
		
			if (num5 > num9)
			{
				num10 = (num5 - num9) / num8;
			
				if (IS_BIT_SET(iParam1, 12))
					num10 = num10 * num10;
			
				num = num * (1f - num10);
			}
		}
	}

	num = 1f + num;
	return num;
}

BOOL func_10(int iParam0) // Hash - 0xBB06FECD ^0xBB06FECD
{
	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_11(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int j;
	int k;
	int l;
	int m;
	int num2;
	int num3;
	int num4;
	int num5;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	j = func_23(*uParam0);
	k = func_22(*uParam0);
	l = func_21(*uParam0);
	m = func_20(*uParam0);

	if (iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	for (m = m - iParam1; m < 0; m = m + 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (l = l - iParam2; l < 0; l = l + 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (k = k - iParam3; k < 0; k = k + 24)
	{
		iParam4 = iParam4 + 1;
	}

	for (j = j - iParam4; j <= 0; j = j + num5)
	{
		iParam5 = iParam5 + 1;
		num2 = i - 1;
		num3 = num;
	
		if (num2 < 0)
		{
			num2 = 11;
			num3 = num3 - 1;
		}
	
		num4 = num2;
		num5 = func_19(num4, num3);
	}

	for (i = i - iParam5; i < 0; i = i + 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num - iParam6;
	func_12(uParam0, m, l, k, j, i, num);
	return;
}

void func_12(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_18(uParam0, iParam1);
	func_17(uParam0, iParam2);
	func_16(uParam0, iParam3);
	func_15(uParam0, iParam5);
	func_14(uParam0, iParam4);
	func_13(uParam0, iParam6);
	return;
}

void func_13(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_14(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_24(*uParam0);
	num2 = func_25(*uParam0);

	if (iParam1 < 1 || iParam1 > func_19(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_15(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_16(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_17(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_18(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_19(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_20(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_21(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_22(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_23(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_24(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

int func_25(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_26(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

void func_27() // Hash - 0x1F05FEB5 ^0x1F05FEB5
{
	int i;

	if (Global_113648.f_20566.f_442 < 1)
		return;

	for (i = 0; i < 8; i = i + 1)
	{
		if (!IS_BIT_SET(Global_113648.f_20566.f_461[i], 1))
		{
			if (Global_113648.f_20566.f_452[i] > 0)
			{
				Global_113648.f_20566.f_452[i] = Global_113648.f_20566.f_452[i] - 1;
			
				if (Global_113648.f_20566.f_452[i] < 1)
				{
					Global_113648.f_20566.f_452[i] = 0;
					Global_113648.f_20566.f_442 = Global_113648.f_20566.f_442 - 1;
				}
			}
		}
	}

	return;
}

void func_28(BOOL bParam0) // Hash - 0xCD57EEDD ^0xD5A0DC94
{
	int i;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		func_29(i, bParam0);
		SYSTEM::WAIT(0);
	
		if (!bParam0)
			func_68();
	}

	return;
}

void func_29(int iParam0, BOOL bParam1) // Hash - 0x1AB04278 ^0xA11438E6
{
	float num;
	float num2;
	int i;

	if (Global_55661[iParam0 /*36*/].f_8)
		return;

	num = Global_55661[iParam0 /*36*/].f_9;

	if (!bParam1)
		num = func_6(iParam0);

	if (num == 0f)
		return;

	Global_55661[iParam0 /*36*/].f_14[Global_55661[iParam0 /*36*/].f_13] = num;

	if (num > Global_55661[iParam0 /*36*/].f_31)
		Global_55661[iParam0 /*36*/].f_31 = num;

	if (num < Global_55661[iParam0 /*36*/].f_32)
		Global_55661[iParam0 /*36*/].f_32 = num;

	Global_55661[iParam0 /*36*/].f_13 = Global_55661[iParam0 /*36*/].f_13 + 1;

	if (Global_55661[iParam0 /*36*/].f_13 >= 16)
		Global_55661[iParam0 /*36*/].f_13 = 0;

	num2 = 0f;

	for (i = 0; i < 16; i = i + 1)
	{
		num2 = num2 + Global_55661[iParam0 /*36*/].f_14[i];
	}

	num2 = num2 / SYSTEM::TO_FLOAT(16);
	Global_55661[iParam0 /*36*/].f_33 = num - num2;
	Global_55661[iParam0 /*36*/].f_34 = (Global_55661[iParam0 /*36*/].f_33 / num2) * 100f;
	return;
}

BOOL func_30() // Hash - 0x61A252E8 ^0xA16F8275
{
	int num;

	if (iLocal_20 == -15)
	{
		iLocal_20 = func_37();
		num = func_22(iLocal_20);
	
		if (num == 24)
			num = 0;
	
		if (func_36(num, 0, 8))
		{
			func_16(&iLocal_20, 8);
		}
		else if (func_36(num, 8, 16))
		{
			func_16(&iLocal_20, 16);
		}
		else if (func_36(num, 16, 24))
		{
			func_16(&iLocal_20, 0);
			func_35(&iLocal_20, 0, 0, 0, 1, 0, 0);
		}
	
		func_17(&iLocal_20, 0);
		func_18(&iLocal_20, 0);
		iLocal_21 = iLocal_20;
		return false;
	}

	if (func_34(iLocal_20))
	{
		if (func_31(&iLocal_20, true, 8))
			return false;
	
		func_35(&iLocal_20, 0, 480, 0, 0, 0, 0);
		return true;
	}

	return false;
}

BOOL func_31(var uParam0, BOOL bParam1, int iParam2) // Hash - 0x757D6B02 ^0x757D6B02
{
	int num;
	int num2;
	int num3;
	int i;

	if (func_33(Global_1574629))
	{
		if (bParam1)
		{
			num = func_37();
			num2 = func_22(Global_1574629);
			num3 = func_21(Global_1574629);
			func_16(&num, num2);
			func_17(&num, num3);
			func_18(&num, 0);
		
			if (func_32(func_37(), num))
				func_35(&num, 0, 0, 0, 1, 0, 0);
		
			for (i = 0; func_32(num, *uParam0) && i < 24; i = i + iParam2)
			{
				func_35(uParam0, 0, 0, iParam2, 0, 0, 0);
			}
		}
	
		return true;
	}

	return false;
}

BOOL func_32(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_33(iParam1) || !func_33(iParam0))
		return 1;

	num = func_25(iParam0);
	num2 = func_25(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_24(iParam0);
	num2 = func_24(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_23(iParam0);
	num2 = func_23(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_22(iParam0);
	num2 = func_22(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_21(iParam0);
	num2 = func_21(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_20(iParam0);
	num2 = func_20(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

BOOL func_33(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_20(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_21(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_22(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_25(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_24(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_23(iParam0);

	if (num6 < 1 || num6 > func_19(num5, num4))
		return false;

	return true;
}

BOOL func_34(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_32(func_37(), iParam0);
}

void func_35(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_25(*uParam0);
	i = func_24(*uParam0);
	num2 = func_23(*uParam0);
	j = func_22(*uParam0);
	k = func_21(*uParam0);
	l = func_20(*uParam0);

	if (iParam6 == 0 && iParam5 == 0 && iParam4 == 0 && iParam3 == 0 && iParam2 == 0 && iParam1 == 0)
		return;

	if (iParam1 < 0)
		return;

	if (iParam2 < 0)
		return;

	if (iParam3 < 0)
		return;

	if (iParam4 < 0)
		return;

	if (iParam5 < 0)
		return;

	if (iParam6 < 0)
		return;

	for (l = l + iParam1; l >= 60; l = l - 60)
	{
		iParam2 = iParam2 + 1;
	}

	for (k = k + iParam2; k >= 60; k = k - 60)
	{
		iParam3 = iParam3 + 1;
	}

	for (j = j + iParam3; j >= 24; j = j - 24)
	{
		iParam4 = iParam4 + 1;
	}

	num2 = num2 + iParam4;

	for (m = func_19(i, num); num2 > m; m = func_19(i, num))
	{
		i = i + 1;
		num2 = num2 - m;
	
		if (i > 11)
		{
			num = num + 1;
			i = i - 12;
		}
	}

	for (i = i + iParam5; i > 11; i = i - 12)
	{
		iParam6 = iParam6 + 1;
	}

	num = num + iParam6;
	func_12(uParam0, l, k, j, num2, i, num);
	return;
}

BOOL func_36(int iParam0, int iParam1, int iParam2) // Hash - 0xD8381BE7 ^0xD8381BE7
{
	BOOL flag;
	int num;
	int num2;

	if (iParam1 == 24)
		iParam1 = 0;

	if (iParam1 < 0 || iParam1 >= 24)
		return false;

	if (iParam2 == 24)
		iParam2 = 0;

	if (iParam2 < 0 || iParam2 >= 24)
		return false;

	if (iParam1 == iParam2)
		return true;

	flag = iParam2 < iParam1;
	num = iParam1;
	num2 = iParam2;

	if (flag)
		num2 = 24;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	if (!flag)
		return false;

	num = 0;
	num2 = iParam2;

	if (iParam0 >= num && iParam0 < num2)
		return true;

	return false;
}

int func_37() // Hash - 0x9E44C35 ^0xB9993D58
{
	int unk;

	func_18(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_17(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_16(&unk, CLOCK::GET_CLOCK_HOURS());
	func_14(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_15(&unk, CLOCK::GET_CLOCK_MONTH());
	func_13(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_38() // Hash - 0x98A19F16 ^0xD8B3ECB7
{
	SYSTEM::WAIT(0);
	func_68();
	return;
}

void func_39() // Hash - 0x420E2475 ^0xEEFF416A
{
	int playerRadioStationIndex;

	playerRadioStationIndex = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();

	if (iLocal_26 != playerRadioStationIndex)
	{
		if (iLocal_25 > 48)
		{
			switch (func_40(iLocal_26))
			{
				case 1:
					func_2(85, 1);
					break;
			
				case 2:
					func_2(84, 1);
					break;
			
				case 3:
					func_2(86, 1);
					break;
			
				case 4:
					func_2(87, 1);
					break;
			}
		}
	
		iLocal_25 = 0;
		iLocal_26 = playerRadioStationIndex;
	}

	switch (func_40(playerRadioStationIndex))
	{
		case 1:
			func_2(77, 1);
			break;
	
		case 2:
			func_2(76, 1);
			break;
	
		case 3:
			func_2(79, 1);
			break;
	
		case 4:
			func_2(80, 1);
			break;
	
		case 0:
			break;
	}

	func_2(78, 1);
	iLocal_25 = iLocal_25 + 1;
	return;
}

int func_40(int iParam0) // Hash - 0xBA7AAE8E ^0xBA7AAE8E
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
			return 3;
	
		case 5:
		case 6:
		case 7:
		case 8:
			return 4;
	
		case 9:
		case 10:
		case 11:
		case 12:
			return 1;
	
		case 13:
		case 14:
		case 15:
		case 16:
			return 2;
	}

	return 0;
}

void func_41() // Hash - 0x3E41589 ^0xE65860AB
{
	int i;
	int outValue;
	float outValue2;
	int num;
	int num2;
	float num3;
	int num4;
	float num5;
	float num6;
	float num7;

	func_68();

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59104[i /*7*/])
		{
			if (Global_59104[i /*7*/].f_2)
			{
				outValue = 0;
			
				if (!Global_59104[i /*7*/].f_4)
				{
					STATS::STAT_GET_INT(Global_59104[i /*7*/].f_3, &outValue, -1);
				}
				else
				{
					outValue2 = 0f;
					STATS::STAT_GET_FLOAT(Global_59104[i /*7*/].f_3, &outValue2, -1);
					num = SYSTEM::FLOOR(outValue2);
				
					if (Global_59104[i /*7*/].f_5 < num)
						outValue = num;
					else
						outValue = Global_59104[i /*7*/].f_5;
				}
			
				Global_59104[i /*7*/].f_6 = outValue - Global_59104[i /*7*/].f_5;
			}
		}
	
		if (i % 20 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55661[i /*36*/].f_8)
			if (!Global_55661[i /*36*/].f_10 == 0f)
				Global_55661[i /*36*/].f_11 = Global_55661[i /*36*/].f_10;
	
		if (i % 40 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	num2 = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55661[i /*36*/].f_8)
		{
			num3 = 0f;
		
			if (Global_55661[i /*36*/].f_10 != 0f)
				num3 = num3 + ((0.02f * Global_55661[i /*36*/].f_9 * Global_55661[i /*36*/].f_10) - Global_55661[i /*36*/].f_9);
		
			num3 = num3 + (MISC::GET_RANDOM_FLOAT_IN_RANGE(-Global_58816[num2 /*7*/].f_6, Global_58816[num2 /*7*/].f_6) * 0.1f * Global_55661[i /*36*/].f_9);
			Global_58816[num2 /*7*/] = Global_58816[num2 /*7*/] * 0.995f;
		
			if (num3 < 0f)
				num3 = num3 * Global_58816[num2 /*7*/].f_2;
			else if (num3 > 0f)
				num3 = num3 * Global_58816[num2 /*7*/].f_1;
		
			num3 = func_46(num3, -Global_58816[num2 /*7*/].f_5, Global_58816[num2 /*7*/].f_5);
			num4 = 61;
		
			if (i == num4 && func_45(44) && !func_45(64) && num3 > 0f)
			{
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 - num3;
			}
			else
			{
				if (num3 > 0f)
				{
					num5 = func_43(i);
					num3 = num3 * num5;
				}
			
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 + num3;
			}
		
			if (Global_55661[i /*36*/].f_9 > Global_58816[num2 /*7*/].f_3)
			{
				num6 = Global_55661[i /*36*/].f_9 - Global_58816[num2 /*7*/].f_3;
				num6 = num6 * 0.5f;
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 - num6;
			}
			else if (Global_55661[i /*36*/].f_9 < Global_58816[num2 /*7*/].f_4)
			{
				num7 = Global_58816[num2 /*7*/].f_4 - Global_55661[i /*36*/].f_9;
				num7 = num7 * 0.5f;
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 + num7;
			}
		
			Global_58816[num2 /*7*/] = Global_58816[num2 /*7*/] - (((num3 * 0.66f) + (Global_58816[num2 /*7*/] * 0.33f)) * 0.02f);
		
			if (!Global_55661[i /*36*/].f_9 > 0f)
			{
				Global_55661[i /*36*/].f_9 = -1f * Global_55661[i /*36*/].f_9;
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 + 0.02f;
			}
		}
	
		if (i % 20 == 0)
		{
			SYSTEM::WAIT(0);
			func_68();
		}
	}

	func_42();
	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		if (!Global_59104[i /*7*/])
			if (Global_59104[i /*7*/].f_2)
				Global_59104[i /*7*/].f_5 = Global_59104[i /*7*/].f_5 + Global_59104[i /*7*/].f_6;
	}

	return;
}

void func_42() // Hash - 0x4F5C80E6 ^0x8C97BB10
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (!Global_55661[i /*36*/].f_8)
		{
			if (num < 42)
			{
				Global_113648.f_20566.f_103[num] = Global_55661[i /*36*/].f_9;
			
				if (Global_55661[i /*36*/].f_31 > Global_113648.f_20566.f_146[num])
					Global_113648.f_20566.f_146[num] = Global_55661[i /*36*/].f_31;
			
				if (Global_113648.f_20566.f_189[num] == 0f)
					Global_113648.f_20566.f_189[num] = Global_55661[i /*36*/].f_32;
				else if (Global_55661[i /*36*/].f_32 < Global_113648.f_20566.f_189[num])
					Global_113648.f_20566.f_189[num] = Global_55661[i /*36*/].f_32;
			
				num = num + 1;
			}
		}
	}

	return;
}

float func_43(int iParam0) // Hash - 0x8982FCDD ^0x1C6633B1
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	float value;
	int i;
	int num6;
	int num7;
	int num8;
	float num9;
	float num10;

	if (Global_55661[iParam0 /*36*/].f_8)
		return 1f;

	num = func_8(0, iParam0);
	num2 = func_8(1, iParam0);
	num3 = func_8(2, iParam0);

	if (num + num2 + num3 < 1)
		return 1f;

	num4 = 1000000000;
	num5 = Global_60536[0] + Global_60536[1] + Global_60536[2];

	if (Global_60536[0] > num4)
		return 0f;

	if (Global_60536[1] > num4)
		return 0f;

	if (Global_60536[2] > num4)
		return 0f;

	value = 0f;

	for (i = 0; i < 10; i = i + 1)
	{
		num6 = func_8(0, i);
	
		if (num6 > 0)
			value = value + (func_6(func_44(0, i)) * (float)num6);
	
		if (func_8(1, i) > 0)
			value = value + (func_6(func_44(1, i)) * (float)num6);
	
		if (func_8(2, i) > 0)
			value = value + (func_6(func_44(2, i)) * (float)num6);
	}

	num7 = SYSTEM::FLOOR(value) + num5;
	num8 = 700000000;

	if (num7 > num4)
		return 0f;

	if (num7 < num8)
		return 1f;

	num9 = SYSTEM::TO_FLOAT(num7 - num8);
	num10 = SYSTEM::TO_FLOAT(num4 - num8);

	if (!num10 > 0f)
		return 1f;

	return 1f - (num9 / num10);
}

int func_44(int iParam0, int iParam1) // Hash - 0x8277D959 ^0x2D6D32B7
{
	if (iParam1 < 0 || iParam1 > 9)
		return 31;

	switch (iParam0)
	{
		case 0:
			return Global_113648.f_20566[iParam1];
	
		case 1:
			return Global_113648.f_20566.f_33[iParam1];
	
		case 2:
			return Global_113648.f_20566.f_66[iParam1];
	
		default:
		
	}

	return 31;
}

BOOL func_45(int iParam0) // Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

float func_46(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_47() // Hash - 0xEBAA1748 ^0x19FB3621
{
	int playerWantedLevel;
	Ped playerPed;
	Vehicle vehiclePedIsIn;
	Hash entityModel;
	Hash selectedPedWeapon;

	if (!PLAYER::IS_PLAYER_DEAD(PLAYER::GET_PLAYER_INDEX()))
	{
		playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::GET_PLAYER_INDEX());
	
		if (playerWantedLevel == 0)
			func_2(75, 1);
	
		playerPed = PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX());
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			if (vehiclePedIsIn != 0)
			{
				if (func_58(vehiclePedIsIn))
				{
					entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
					func_56(entityModel);
				}
			}
		}
	
		SYSTEM::WAIT(0);
	
		if (!ENTITY::IS_ENTITY_DEAD(playerPed, false))
		{
			selectedPedWeapon = WEAPON::GET_SELECTED_PED_WEAPON(playerPed);
			func_54(selectedPedWeapon);
		
			switch (selectedPedWeapon)
			{
				case joaat("WEAPON_MOLOTOV"):
				case joaat("WEAPON_PETROLCAN"):
					switch (func_48())
					{
						case 0:
							func_2(147, 1);
							break;
					
						case 1:
							func_2(148, 1);
							break;
					
						case 2:
							func_2(149, 1);
							break;
					}
					break;
			}
		}
	}

	return;
}

int func_48() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_49();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_49() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_51(PLAYER::PLAYER_PED_ID());
		
			if (func_50(num) && !func_79(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_50(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_50(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_51(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_52(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_52(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_50(iParam0))
		return func_53(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_53(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_54(Hash hParam0) // Hash - 0xF4AC2281 ^0xF4AC2281
{
	int num;

	num = func_55(hParam0);

	switch (num)
	{
		case 0:
			func_2(51, 1);
			break;
	
		case 1:
			func_2(52, 1);
			break;
	
		case 2:
			func_2(53, 1);
			break;
	}

	return;
}

int func_55(Hash hParam0) // Hash - 0x3F26CD83 ^0x3F26CD83
{
	switch (hParam0)
	{
		case joaat("WEAPON_STICKYBOMB"):
		case joaat("WEAPON_STUNGUN"):
		case joaat("WEAPON_GRENADELAUNCHER"):
		case joaat("WEAPON_HEAVYSNIPER"):
		case joaat("WEAPON_CARBINERIFLE"):
		case joaat("WEAPON_SPECIALCARBINE"):
		case joaat("WEAPON_SMG"):
		case joaat("WEAPON_ASSAULTSHOTGUN"):
		case joaat("WEAPON_APPISTOL"):
			return 0;
	
		case joaat("WEAPON_SMOKEGRENADE"):
		case joaat("WEAPON_REMOTESNIPER"):
		case joaat("WEAPON_RPG"):
		case joaat("WEAPON_MG"):
		case joaat("WEAPON_ADVANCEDRIFLE"):
		case joaat("WEAPON_MICROSMG"):
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
		case joaat("WEAPON_PISTOL"):
			return 1;
	
		case joaat("WEAPON_GRENADE"):
		case joaat("WEAPON_MINIGUN"):
		case joaat("WEAPON_SNIPERRIFLE"):
		case joaat("WEAPON_COMBATMG"):
		case joaat("WEAPON_ASSAULTRIFLE"):
		case joaat("WEAPON_PUMPSHOTGUN"):
		case joaat("WEAPON_COMBATPISTOL"):
			return 2;
	
		default:
			return 3;
	}

	return 3;
}

void func_56(Hash hParam0) // Hash - 0xDF41AA4A ^0xDF41AA4A
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(39, 1);
			break;
	
		case 1:
			func_2(35, 1);
			break;
	
		case 2:
			func_2(32, 1);
			break;
	
		case 3:
			func_2(38, 1);
			break;
	
		case 4:
			func_2(31, 1);
			break;
	
		case 5:
			func_2(33, 1);
			break;
	
		case 6:
			func_2(36, 1);
			break;
	
		case 7:
			func_2(37, 1);
			break;
	}

	switch (hParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE2"):
		case joaat("FIXTER"):
		case joaat("TRIBIKE"):
		case joaat("CRUISER"):
			func_2(34, 1);
			break;
	}

	return;
}

int func_57(Hash hParam0) // Hash - 0x29C2AAC3 ^0x29C2AAC3
{
	switch (hParam0)
	{
		case joaat("BENSON"):
		case joaat("BOBCATXL"):
		case joaat("BULLET"):
		case joaat("DOMINATOR"):
		case joaat("MINIVAN"):
		case joaat("PEYOTE"):
		case joaat("RADI"):
		case joaat("SADLER"):
		case joaat("SADLER2"):
		case joaat("SANDKING"):
		case joaat("SANDKING2"):
		case joaat("SPEEDO"):
		case joaat("SPEEDO2"):
		case joaat("STANIER"):
			return 3;
	
		case joaat("BOXVILLE"):
		case joaat("CAMPER"):
		case joaat("PONY"):
		case joaat("PONY2"):
		case joaat("STOCKADE"):
		case joaat("STOCKADE3"):
		case joaat("TIPTRUCK"):
			return 2;
	
		case joaat("FUSILADE"):
			return 6;
	
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("PENUMBRA"):
		case joaat("SANCHEZ"):
		case joaat("SANCHEZ2"):
			return 1;
	
		case joaat("BFINJECTION"):
		case joaat("DUNE"):
		case joaat("SURFER"):
		case joaat("SURFER2"):
			return 4;
	
		case joaat("BARRACKS2"):
		case joaat("BIFF"):
		case joaat("BULLDOZER"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("FORKLIFT"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
			return 0;
	
		case joaat("ORACLE"):
		case joaat("ORACLE2"):
		case joaat("SENTINEL"):
		case joaat("SENTINEL2"):
		case joaat("ZION"):
		case joaat("ZION2"):
			return 7;
	}

	return 8;
}

BOOL func_58(Vehicle veParam0) // Hash - 0xD400990F ^0x16BB3F2F
{
	var unk;

	if (Global_78558)
		return VEHICLE::IS_VEHICLE_STOLEN(veParam0);

	if (func_61(veParam0, &unk))
		return false;

	if (func_60(veParam0))
		return false;

	if (func_59(veParam0))
		return false;

	return true;
}

BOOL func_59(Vehicle veParam0) // Hash - 0xA5B9FC6B ^0x23EADD90
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98042[i]))
			if (Global_98042[i] == veParam0)
				return true;
	}

	return false;
}

BOOL func_60(Vehicle veParam0) // Hash - 0xB4CAAE6F ^0x153EF8BE
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))
				if (Global_98012[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return true;
		}
	}

	return false;
}

BOOL func_61(Vehicle veParam0, var uParam1) // Hash - 0x9629BA52 ^0x1ECD0513
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (Global_77348.f_484[i] == veParam0)
		{
			if (func_62(&Global_77348.f_555[0 /*21*/], i))
			{
				if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10) && Global_77348.f_555[0 /*21*/].f_4 == ENTITY::GET_ENTITY_MODEL(veParam0))
				{
					*uParam1 = i;
					return true;
				}
			}
		}
	}

	return false;
}

BOOL func_62(var uParam0, int iParam1) // Hash - 0x95BCA6BD ^0xD788FC77
{
	BOOL num;
	int num2;

	*uParam0 = { 0f, 0f, 0f };
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_5), "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = { 0f, 0f, 0f };
	uParam0->f_18 = { 0f, 0f, 0f };

	switch (iParam1)
	{
		case 0:
			*uParam0 = { -831.8538f, 172.1154f, 69.9058f };
			uParam0->f_3 = 157.5705f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_65(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_65(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_65(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_65(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = joaat("SCORCHER");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = joaat("SEASHARK");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = joaat("DUSTER");
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 12:
			uParam0->f_14 = 0;
			*uParam0 = { -1652.0043f, -3142.3484f, 12.9921f };
			uParam0->f_3 = 329.1082f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 13:
			uParam0->f_14 = 1;
			*uParam0 = { -1271.6487f, -3380.6853f, 12.9451f };
			uParam0->f_3 = 329.5137f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 14:
			uParam0->f_14 = 2;
			*uParam0 = { 1735.5863f, 3294.5305f, 40.1651f };
			uParam0->f_3 = 194.9525f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 359;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 15:
			uParam0->f_14 = 3;
			*uParam0 = { -846.27f, -1363.19f, 0.22f };
			uParam0->f_3 = 108.78f;
			uParam0->f_12 = 0;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 16:
			uParam0->f_14 = 4;
			*uParam0 = { -849.47f, -1354.99f, 0.24f };
			uParam0->f_3 = 109.84f;
			uParam0->f_12 = 1;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 17:
			uParam0->f_14 = 5;
			*uParam0 = { -852.47f, -1346.2f, 0.21f };
			uParam0->f_3 = 108.76f;
			uParam0->f_12 = 2;
			uParam0->f_13 = 356;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 18:
			uParam0->f_14 = 6;
			*uParam0 = { -745.857f, -1433.9036f, 4.0005f };
			uParam0->f_12 = 0;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -756.2952f, -1441.6093f, 2.9184f };
			uParam0->f_18 = { -738.0606f, -1423.0676f, 8.2835f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 19:
			uParam0->f_14 = 7;
			*uParam0 = { -761.8486f, -1453.8293f, 4.0005f };
			uParam0->f_12 = 1;
			uParam0->f_13 = 360;
			uParam0->f_15 = { -772.8158f, -1459.9572f, 3.2894f };
			uParam0->f_18 = { -754.3353f, -1440.836f, 8.3334f };
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 20:
			uParam0->f_14 = 8;
			*uParam0 = { 1769.3f, 3244f, 41.1f };
			uParam0->f_12 = 2;
			uParam0->f_13 = 360;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			num = 1;
			break;
	
		case 21:
			uParam0->f_14 = 9;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 22:
			uParam0->f_14 = 10;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 1;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 23:
			uParam0->f_14 = 11;
			*uParam0 = { 192.7897f, -1020.5385f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 2;
			uParam0->f_13 = 357;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 14);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 28);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 26:
		case 27:
		case 28:
			num2 = iParam1 - 26;
			uParam0->f_14 = 12 + num2;
			*uParam0 = { 196.2794f, -1020.4791f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 29:
		case 30:
		case 31:
			num2 = iParam1 - 29;
			uParam0->f_14 = 15 + num2;
			*uParam0 = { 199.8872f, -1020.048f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 32:
		case 33:
		case 34:
			num2 = iParam1 - 32;
			uParam0->f_14 = 18 + num2;
			*uParam0 = { 203.6006f, -1019.7762f, -99.98f };
			uParam0->f_3 = 180f;
			uParam0->f_4 = 0;
			uParam0->f_12 = 0 + num2;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			MISC::SET_BIT(&(uParam0->f_9), 27);
			MISC::SET_BIT(&(uParam0->f_9), 24);
			MISC::SET_BIT(&(uParam0->f_9), 29);
			num = 1;
			break;
	
		case 24:
			uParam0->f_14 = 21;
			*uParam0 = { 0f, 0f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 25:
			uParam0->f_14 = 22;
			*uParam0 = { 723.2515f, -632.0496f, 27.1484f };
			uParam0->f_3 = 12.9316f;
			uParam0->f_4 = joaat("TAILGATER");
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = joaat("PROPTRAILER");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = joaat("BJXL");
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = joaat("VELUM");
			uParam0->f_10 = 157;
			uParam0->f_11 = 157;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 38:
			*uParam0 = { 1744.3083f, 3270.673f, 40.2076f };
			uParam0->f_3 = 125f;
			uParam0->f_4 = joaat("CARGOBOB3");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TOWTRUCK");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = joaat("TRASH");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = joaat("BARRACKS");
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = joaat("FIRETRUK");
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = joaat("VACCA");
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = joaat("SURANO");
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = joaat("TORNADO2");
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = joaat("SUPERD");
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = joaat("DOUBLE");
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = joaat("DOUBLE");
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = joaat("DOUBLE");
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = joaat("RUMPO2");
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = joaat("SUBMERSIBLE");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = joaat("DINGHY");
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = joaat("BFINJECTION");
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (func_64())
				uParam0->f_4 = joaat("BLIMP2");
			else
				uParam0->f_4 = joaat("BLIMP");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 61:
			*uParam0 = { -806.31f, -2679.65f, 13.9f };
			uParam0->f_3 = 150.54f;
		
			if (func_64())
				uParam0->f_4 = joaat("BLIMP2");
			else
				uParam0->f_4 = joaat("BLIMP");
		
			uParam0->f_13 = 401;
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 1);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			num = 1;
			break;
	
		case 62:
			*uParam0 = { 1985.85f, 3828.96f, 31.98f };
			uParam0->f_3 = -16.58f;
			uParam0->f_4 = joaat("BLAZER3");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = joaat("SUBMERSIBLE2");
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 0);
			MISC::SET_BIT(&(uParam0->f_9), 21);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			num = 1;
			break;
	
		case 64:
			*uParam0 = { 1257.7295f, -2564.474f, 41.717f };
			uParam0->f_3 = 284.5561f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = joaat("DUKES2");
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = joaat("DODO");
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	}

	if (IS_BIT_SET(uParam0->f_9, 10))
	{
		uParam0->f_4 = Global_113648.f_32751.f_69[uParam0->f_14 /*78*/].f_66;
	
		if (iParam1 == 14)
		{
			if (uParam0->f_4 == joaat("MILJET") || uParam0->f_4 == joaat("BESRA") || uParam0->f_4 == joaat("LUXOR") || uParam0->f_4 == joaat("SHAMAL") || uParam0->f_4 == joaat("TITAN") || uParam0->f_4 == joaat("LUXOR2"))
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_63(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_63(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_63(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

BOOL func_63(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_64() // Hash - 0x44DD83CC ^0x7B62A376
{
	int profileSetting;

	if (Global_152523 == 2)
		return true;
	else if (Global_152523 == 3)
		return false;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
				MISC::SET_BIT(&profileSetting, 2);
				MISC::SET_BIT(&profileSetting, 4);
				MISC::SET_BIT(&profileSetting, 6);
				MISC::SET_BIT(&Global_25, 2);
				MISC::SET_BIT(&Global_25, 4);
				MISC::SET_BIT(&Global_25, 6);
				STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
			
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

int func_65(int iParam0, int iParam1) // Hash - 0x3C1119CD ^0x1010ECAE
{
	int num;

	if (func_50(iParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_66(iParam0, &num, iParam1);
		return num;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_66(int iParam0, var uParam1, int iParam2) // Hash - 0xF92B8944 ^0xD11BCD5C
{
	int num;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("TAILGATER");
		
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
				num = joaat("PREMIER");
		
			switch (num)
			{
				case joaat("TAILGATER"):
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case joaat("PREMIER"):
					*uParam1 = num;
					uParam1->f_2 = 14.9f;
					uParam1->f_5 = 43;
					uParam1->f_6 = 43;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_9 = 0;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "880HS955", 16);
					break;
			}
			break;
	
		case 2:
			num = joaat("BODHI2");
		
			switch (num)
			{
				case joaat("BODHI2"):
					*uParam1 = num;
					uParam1->f_2 = 14f;
					uParam1->f_5 = 32;
					uParam1->f_6 = 0;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "BETTY 32", 16);
				
					if (Global_113648.f_9087.f_99.f_58[119])
						uParam1->f_11[1] = 1;
					break;
			}
			break;
	
		case 1:
			if (iParam2 == 1)
				num = joaat("BUFFALO2");
			else if (iParam2 == 2)
				num = joaat("BAGGER");
			else if (Global_113648.f_9087.f_99.f_58[118])
				num = joaat("BAGGER");
			else
				num = joaat("BUFFALO2");
		
			switch (num)
			{
				case joaat("BAGGER"):
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case joaat("BUFFALO2"):
					*uParam1 = num;
					uParam1->f_2 = 0f;
					uParam1->f_5 = 111;
					uParam1->f_6 = 111;
					uParam1->f_7 = 0;
					uParam1->f_8 = 156;
					uParam1->f_10 = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC1988", 16);
					uParam1->f_11[0] = 1;
					uParam1->f_11[1] = 1;
					uParam1->f_11[2] = 1;
					uParam1->f_11[3] = 1;
					uParam1->f_11[4] = 1;
					uParam1->f_11[5] = 1;
					uParam1->f_11[6] = 1;
					uParam1->f_11[7] = 1;
					uParam1->f_11[8] = 1;
					break;
			}
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_67() // Hash - 0x57169878 ^0xD7CA27C2
{
	if (iLocal_21 == -15)
		return false;

	if (func_34(iLocal_21))
	{
		if (func_31(&iLocal_21, true, 8))
			return false;
	
		func_35(&iLocal_21, 0, iLocal_22, 0, 0, 0, 0);
		return true;
	}

	return false;
}

void func_68() // Hash - 0x27FBF5ED ^0x27FBF5ED
{
	int i;
	Entity eventData;
	eEventType eventAtIndex;
	Ped pedIndexFromEntityIndex;
	BOOL flag;

	if (Global_60541)
	{
		Global_60541 = false;
	
		switch (func_57(Global_60542))
		{
			case 0:
			case 1:
			case 2:
			case 3:
				func_2(29, 1);
				break;
		
			case 4:
			case 5:
			case 6:
			case 7:
				func_2(30, 1);
				break;
		}
	}

	i = 0;
	flag = true;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_AI); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_AI, i);
	
		switch (eventAtIndex)
		{
			case EVENT_ENTITY_DESTROYED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							func_74(eventData);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							if (func_73(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(eventData)))
								func_2(3, 1);
						
							func_72(ENTITY::GET_ENTITY_MODEL(eventData));
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							switch (ENTITY::GET_ENTITY_MODEL(eventData))
							{
								case joaat("PROP_NEWS_DISP_01A"):
								case joaat("PROP_NEWS_DISP_02A"):
								case joaat("PROP_NEWS_DISP_02A_S"):
								case joaat("PROP_NEWS_DISP_02B"):
								case joaat("PROP_NEWS_DISP_02C"):
								case joaat("PROP_NEWS_DISP_02D"):
								case joaat("PROP_NEWS_DISP_02E"):
								case joaat("PROP_NEWS_DISP_03A"):
								case joaat("PROP_NEWS_DISP_03C"):
								case joaat("PROP_NEWS_DISP_05A"):
								case -1389481633:
								case 1301918910:
								case joaat("PROP_NEWS_DISP_06A"):
								case -1406224059:
									func_2(68, 1);
									break;
							
								case -959573699:
								case joaat("PROP_POSTBOX_01A"):
								case 1147034058:
								case 1444740423:
								case joaat("PROP_POSTBOX_SS_01A"):
									func_2(128, 1);
									break;
							}
						}
					}
				}
				break;
		
			case EVENT_ENTITY_DAMAGED:
				SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_AI, i, &eventData, 1);
				func_78(eventData);
				flag = true;
			
				if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eventData))
							flag = false;
					else
						flag = false;
			
				if (flag)
				{
					if (ENTITY::DOES_ENTITY_EXIST(eventData))
					{
						if (ENTITY::IS_ENTITY_A_PED(eventData))
						{
							pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData);
						
							if (func_48() == 0 && pedIndexFromEntityIndex != PLAYER::PLAYER_PED_ID())
								if (ENTITY::IS_ENTITY_DEAD(eventData, false) || (float)ENTITY::GET_ENTITY_HEALTH(eventData) < 0.5f * (float)PED::GET_PED_MAX_HEALTH(pedIndexFromEntityIndex))
									if (ENTITY::IS_ENTITY_A_PED(eventData) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eventData)))
										if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
											func_70(3);
						
							func_2(111, 1);
							func_2(124, 1);
						
							if (FIRE::IS_ENTITY_ON_FIRE(eventData))
								func_2(130, 1);
						}
						else if (ENTITY::IS_ENTITY_A_VEHICLE(eventData))
						{
							func_69(ENTITY::GET_ENTITY_MODEL(eventData));
							func_2(111, 1);
						}
						else if (ENTITY::IS_ENTITY_AN_OBJECT(eventData))
						{
							func_2(111, 1);
						}
					}
				}
				break;
		}
	}

	return;
}

void func_69(Hash hParam0) // Hash - 0x91BA8620 ^0x91BA8620
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(47, 1);
			break;
	
		case 1:
			func_2(43, 1);
			break;
	
		case 2:
			func_2(41, 1);
			break;
	
		case 3:
			func_2(46, 1);
			break;
	
		case 4:
			func_2(40, 1);
			break;
	
		case 5:
			func_2(42, 1);
			break;
	
		case 6:
			func_2(44, 1);
			break;
	
		case 7:
			func_2(45, 1);
			break;
	}

	return;
}

void func_70(int iParam0) // Hash - 0xCC64085F ^0xCC64085F
{
	switch (iParam0)
	{
		case 0:
			func_71(&Global_97149, 1);
			break;
	
		case 1:
			func_71(&Global_97151, 3);
			break;
	
		case 2:
			func_71(&Global_97155, 1);
			break;
	
		case 3:
			func_71(&Global_97157, 1);
			break;
	
		case 4:
			func_71(&Global_97159, 1);
			break;
	
		case 5:
			func_71(&Global_97161, 1);
			break;
	
		case 6:
			func_71(&Global_97163, 1);
			break;
	
		case 7:
			func_71(&Global_97165, 2);
			break;
	
		case 8:
			func_71(&Global_97168, 1);
			break;
	
		case 9:
			func_71(&Global_97170, 1);
			break;
	}

	return;
}

void func_71(var uParam0, int iParam1) // Hash - 0x505A8B6B ^0xC4F63EF4
{
	int i;

	for (i = 0; i < iParam1; i = i + 1)
	{
		if (i < iParam1 - 1)
			uParam0->[i] = uParam0->[i + 1];
		else
			uParam0->[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_72(Hash hParam0) // Hash - 0x555D17B4 ^0x555D17B4
{
	switch (func_57(hParam0))
	{
		case 0:
			func_2(11, 1);
			break;
	
		case 1:
			func_2(6, 1);
			break;
	
		case 2:
			func_2(1, 1);
			break;
	
		case 3:
			func_2(10, 1);
			break;
	
		case 4:
			func_2(0, 1);
			break;
	
		case 5:
			func_2(2, 1);
			break;
	
		case 6:
			func_2(8, 1);
			break;
	
		case 7:
			func_2(9, 1);
			break;
	}

	if (hParam0 == joaat("TAXI"))
		func_2(100, 1);

	func_2(111, 1);
	return;
}

BOOL func_73(Vehicle veParam0) // Hash - 0x175BCCA7 ^0x24002963
{
	if (VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
	{
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 3) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 4) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 6) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 7) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 11) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 12) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 13) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 14) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 15) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 16) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 23) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 24) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 1) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 2) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 8) != -1)
			return true;
	
		if (VEHICLE::GET_VEHICLE_MOD(veParam0, 9) != -1)
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 18))
			return true;
	
		if (VEHICLE::IS_TOGGLE_MOD_ON(veParam0, 22))
			return true;
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			return true;
	}

	return false;
}

void func_74(Entity eParam0) // Hash - 0xF57EA654 ^0x8ADD9103
{
	Ped pedIndexFromEntityIndex;
	Entity pedSourceOfDeath;
	Hash entityModel;
	Hash pedCauseOfDeath;
	Hash entityModel2;
	int gameTimer;
	int num;

	pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0);

	if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(eParam0))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(pedIndexFromEntityIndex);
	
		if (ENTITY::IS_ENTITY_A_VEHICLE(pedSourceOfDeath))
		{
			entityModel = ENTITY::GET_ENTITY_MODEL(pedSourceOfDeath);
			func_77(entityModel, PED::GET_PED_TYPE(pedIndexFromEntityIndex));
		}
		else
		{
			pedCauseOfDeath = PED::GET_PED_CAUSE_OF_DEATH(pedIndexFromEntityIndex);
			entityModel2 = ENTITY::GET_ENTITY_MODEL(eParam0);
			func_76(pedCauseOfDeath, PED::GET_PED_TYPE(pedIndexFromEntityIndex), entityModel2);
		}
	}

	if (FIRE::IS_ENTITY_ON_FIRE(eParam0))
		func_2(129, 1);

	if (!func_75(eParam0))
		return;

	func_2(111, 1);
	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - iLocal_23;
	iLocal_23 = gameTimer;

	if (num > 2000)
	{
		iLocal_24 = 0;
	}
	else
	{
		iLocal_24 = iLocal_24 + 1;
	
		if (iLocal_24 == 3)
			func_2(127, 1);
	}

	return;
}

BOOL func_75(Entity eParam0) // Hash - 0xC897AB6F ^0xBBC8EED8
{
	Ped pedSourceOfDeath;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(eParam0))
		return false;

	pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(eParam0));

	if (func_3(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX())) == pedSourceOfDeath)
		return true;

	return false;
}

void func_76(Hash hParam0, int iParam1, Hash hParam2) // Hash - 0x7136A41B ^0x7136A41B
{
	int num;

	num = func_55(hParam0);

	if (num == 0)
		func_2(108, 1);

	switch (iParam1)
	{
		case 4:
		case 5:
			switch (num)
			{
				case 0:
					func_2(63, 1);
					break;
			
				case 1:
					func_2(64, 1);
					break;
			
				case 2:
					func_2(65, 1);
					break;
			}
			break;
	
		case 22:
			switch (num)
			{
				case 0:
					func_2(57, 1);
					break;
			
				case 1:
					func_2(58, 1);
					break;
			
				case 2:
					func_2(59, 1);
					break;
			}
			break;
	
		case 27:
		case 6:
			switch (num)
			{
				case 0:
					func_2(54, 1);
					break;
			
				case 1:
					func_2(55, 1);
					break;
			
				case 2:
					func_2(56, 1);
					break;
			}
			break;
	}

	switch (hParam2)
	{
		case joaat("S_F_Y_HOOKER_01"):
			func_2(121, 1);
			break;
	
		case joaat("A_F_M_BODYBUILD_01"):
		case joaat("A_M_M_BEACH_02"):
		case joaat("A_M_Y_MUSCLBEAC_02"):
		case joaat("A_M_Y_RUNNER_01"):
		case joaat("A_M_Y_ROADCYC_01"):
		case joaat("A_M_Y_SKATER_01"):
		case joaat("A_M_Y_SKATER_02"):
		case joaat("A_M_Y_SUNBATHE_01"):
		case joaat("A_M_Y_SURFER_01"):
		case joaat("A_M_Y_YOGA_01"):
		case joaat("S_M_Y_BAYWATCH_01"):
		case joaat("S_M_Y_MARINE_02"):
			func_2(69, 1);
			break;
	
		case joaat("S_M_Y_DEALER_01"):
			func_2(125, 1);
			break;
	}

	return;
}

void func_77(Hash hParam0, int iParam1) // Hash - 0x14EBCEE7 ^0x14EBCEE7
{
	func_2(48, 1);

	switch (hParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
			func_2(4, 1);
			break;
	
		case joaat("TANKER"):
			func_2(5, 1);
			func_2(7, 1);
			func_2(91, 1);
			break;
	
		case joaat("PACKER"):
			func_2(7, 1);
			break;
	
		case joaat("PHANTOM"):
			func_2(5, 1);
			break;
	}

	switch (func_57(hParam0))
	{
		case 0:
			func_2(109, 1);
			break;
	
		case 1:
			func_2(104, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(60, 1);
					break;
			}
			break;
	
		case 2:
			func_2(102, 1);
			break;
	
		case 3:
			func_2(107, 1);
			break;
	
		case 4:
			func_2(101, 1);
			break;
	
		case 5:
			func_2(103, 1);
			break;
	
		case 6:
			func_2(105, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(61, 1);
					break;
			}
			break;
	
		case 7:
			func_2(106, 1);
		
			switch (iParam1)
			{
				case 4:
				case 5:
					func_2(62, 1);
					break;
			}
			break;
	}

	return;
}

void func_78(Entity eParam0) // Hash - 0xF7C88441 ^0xD535293B
{
	ENTITY::DOES_ENTITY_EXIST(eParam0);
	ENTITY::IS_ENTITY_DEAD(eParam0, false);
	return;
}

BOOL func_79(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_80() // Hash - 0x55EBB617 ^0x6ECDD16F
{
	Vehicle vehiclePedIsIn;
	Hash entityModel;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
	{
		veLocal_33 = 0;
		return;
	}

	if (func_82(PLAYER::GET_PLAYER_INDEX(), -1))
	{
		veLocal_33 = 0;
		return;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false);
	
		if (veLocal_33 != vehiclePedIsIn)
		{
			uLocal_27 = { uLocal_30 };
			veLocal_33 = vehiclePedIsIn;
		}
	
		if (vehiclePedIsIn == 0)
			return;
	
		uLocal_27 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
	
		if (veLocal_33 == 0)
		{
			uLocal_30 = { uLocal_27 };
			veLocal_33 = vehiclePedIsIn;
			return;
		}
	
		entityModel = ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn);
	
		if (func_81(entityModel, MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_27, uLocal_30, false)))
			uLocal_30 = { uLocal_27 };
	}

	return;
}

BOOL func_81(Hash hParam0, float fParam1) // Hash - 0x91966062 ^0xCABA31F0
{
	if (fParam1 < 10f)
		return false;

	switch (func_57(hParam0))
	{
		case 0:
			func_2(28, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 1:
			func_2(24, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 2:
			func_2(21, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 3:
			func_2(27, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 4:
			func_2(20, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 5:
			func_2(22, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 6:
			func_2(25, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case 7:
			func_2(26, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	}

	switch (hParam0)
	{
		case joaat("COACH"):
		case joaat("TAXI"):
			func_2(23, SYSTEM::FLOOR(fParam1 / 10f));
			break;
	
		case joaat("BMX"):
		case joaat("SCORCHER"):
		case joaat("TRIBIKE2"):
		case joaat("FIXTER"):
		case joaat("TRIBIKE"):
		case joaat("CRUISER"):
			switch (func_48())
			{
				case 0:
					func_2(141, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			
				case 1:
					func_2(142, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			
				case 2:
					func_2(143, SYSTEM::FLOOR(fParam1 / 10f));
					break;
			}
			break;
	}

	return true;
}

BOOL func_82(Player plParam0, int iParam1) // Hash - 0x1C7D021F ^0xC08A6119
{
	Vehicle vehiclePedIsIn;

	if (func_83(plParam0, true, true))
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

BOOL func_83(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

void func_84() // Hash - 0x2F2D50D2 ^0x2F2D50D2
{
	func_85(0);
	func_85(1);
	func_85(2);
	return;
}

void func_85(int iParam0) // Hash - 0xB817F705 ^0x4F2581C8
{
	int i;
	int num;
	int value;

	for (i = 0; i < 80; i = i + 1)
	{
		if (Global_55661[i /*36*/].f_8)
		{
			num = Global_55661[i /*36*/].f_35;
		
			if (num > -1)
			{
				value = func_86(iParam0, i);
			
				if (Global_55661[i /*36*/].f_9 <= 0f)
					value = 0;
			
				STATS::STAT_SET_INT(Global_58542[num /*7*/].f_3[iParam0], value, true);
			}
		}
	}

	return;
}

int func_86(int iParam0, int iParam1) // Hash - 0x5A2802A9 ^0x548CDBD1
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		switch (iParam0)
		{
			case 0:
				if (Global_113648.f_20566[i] == iParam1)
					if (Global_113648.f_20566.f_22[i] > 0)
						return Global_113648.f_20566.f_22[i];
				break;
		
			case 1:
				if (Global_113648.f_20566.f_33[i] == iParam1)
					if (Global_113648.f_20566.f_55[i] > 0)
						return Global_113648.f_20566.f_55[i];
				break;
		
			case 2:
				if (Global_113648.f_20566.f_66[i] == iParam1)
					if (Global_113648.f_20566.f_88[i] > 0)
						return Global_113648.f_20566.f_88[i];
				break;
		}
	}

	return 0;
}

void func_87() // Hash - 0xC8C42CF2 ^0x8DBF7432
{
	int i;
	int num;

	num = Global_60823;

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_60826[i /*14*/].f_13 > 0)
		{
			Global_60826[i /*14*/].f_13 = Global_60826[i /*14*/].f_13 - 1;
		}
		else if (func_89(i))
		{
			func_88(&Global_60826[i /*14*/], -1);
			Global_60826[i /*14*/].f_13 = 60000;
		}
	
		SYSTEM::WAIT(0);
		func_68();
	}

	return;
}

BOOL func_88(int iParam0, int iParam1) // Hash - 0x110B6F0 ^0x3FD04468
{
	int num;
	int i;
	float num2;
	int num3;

	num = *iParam0;

	if (iParam1 != -1)
		num = iParam1;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_63208[num /*34*/][i /*11*/].f_9 == iParam0->f_9)
		{
			iParam0->f_10 = iParam0->f_10 + 0.05f;
			return false;
		}
	}

	i = 0;
	num2 = 0f;
	num3 = -1;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_63208[num /*34*/][i /*11*/].f_10 > num2)
		{
			num3 = i;
			num2 = Global_63208[num /*34*/][i /*11*/].f_10;
		}
	}

	if (num3 == -1)
		return false;

	if (iParam0->f_10 <= Global_63208[num /*34*/][num3 /*11*/].f_10)
	{
		iParam0->f_10 = iParam0->f_10 + 1f;
		Global_63208[num /*34*/][num3 /*11*/].f_10 = iParam0->f_10;
		Global_63208[num /*34*/][num3 /*11*/].f_1 = { iParam0->f_1 };
		Global_63208[num /*34*/][num3 /*11*/].f_5 = { iParam0->f_5 };
		Global_63208[num /*34*/][num3 /*11*/].f_9 = iParam0->f_9;
		Global_63208[num /*34*/][num3 /*11*/] = *iParam0;
		return true;
	}

	return false;
}

BOOL func_89(int iParam0) // Hash - 0x7B998EC6 ^0xCDD96EB9
{
	int num;
	float num2;
	int i;
	int j;
	float num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int k;
	int num8;
	int num9;
	int num10;
	float num11;
	float num12;
	float num13;

	num = Global_60826[iParam0 /*14*/].f_12;
	num2 = Global_55661[num /*36*/].f_9;

	for (i = Global_55661[num /*36*/].f_13; i > 15; i = i - 16)
	{
	}

	for (j = i - 10; j < 0; j = 16 + j)
	{
	}

	num3 = Global_55661[num /*36*/].f_14[j];
	Global_55661[num /*36*/].f_14[Global_55661[num /*36*/].f_13] = func_6(num);
	num4 = 0;
	num5 = 0;
	num6 = 0;
	num7 = j + 1;

	if (num7 == 16)
		num7 = 0;

	k = 0;
	num8 = num7;
	num9 = 0;
	num10 = 0;

	for (k = 0; k < 8; k = k + 1)
	{
		num9 = num8 + 1;
	
		if (num9 == 16)
			num9 = 0;
	
		num10 = num9 + 1;
	
		if (num10 == 16)
			num10 = 0;
	
		if (Global_55661[num /*36*/].f_14[num8] < Global_55661[num /*36*/].f_14[num9])
		{
			num5 = num5 + 1;
			num11 = num11 + (Global_55661[num /*36*/].f_14[num9] - Global_55661[num /*36*/].f_14[num8]);
		}
		else
		{
			num6 = num6 + 1;
			num12 = num12 + (Global_55661[num /*36*/].f_14[num8] - Global_55661[num /*36*/].f_14[num9]);
		}
	
		if (Global_55661[num /*36*/].f_14[num8] < Global_55661[num /*36*/].f_14[num9] && Global_55661[num /*36*/].f_14[num10] < Global_55661[num /*36*/].f_14[num9])
			num4 = num4 + 1;
	
		if (Global_55661[num /*36*/].f_14[num8] > Global_55661[num /*36*/].f_14[num9] && Global_55661[num /*36*/].f_14[num10] > Global_55661[num /*36*/].f_14[num9])
			num4 = num4 + 1;
	
		num8 = num8 + 1;
	
		if (num8 == 16)
			num8 = 0;
	}

	if (num5 < 0)
		num11 = num11 / (float)num5;

	if (num6 > 0)
		num12 = num12 / (float)num6;

	num13 = num2 - num3;

	if (num13 < 0f)
		num13 = num13 * -1f;

	switch (Global_60826[iParam0 /*14*/].f_11)
	{
		case 0:
			if (num5 < 6)
				return false;
		
			if (num11 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 1:
			if (num6 < 6)
				return false;
		
			if (num12 < num3 * 0.04f)
				return false;
		
			return true;
	
		case 2:
			if (num4 < 7)
				return false;
		
			if (num13 > num3 * 0.01f)
				return false;
		
			return true;
	}

	return false;
}

void func_90(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
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

void func_91() // Hash - 0xB18D335D ^0xDBB9888E
{
	int num;
	int i;
	float num2;
	int j;
	float num3;
	float num4;
	float num5;
	float randomFloatInRange;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;
	float num13;
	float num14;
	float num15;
	float num16;

	num = 0;
	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		if (num < 42)
		{
			if (!Global_55661[i /*36*/].f_8)
			{
				if (Global_113648.f_20566.f_103[num] > 0f)
					Global_55661[i /*36*/].f_9 = Global_113648.f_20566.f_103[num];
			
				if (Global_113648.f_20566.f_146[num] > 0f)
					Global_55661[i /*36*/].f_31 = Global_113648.f_20566.f_146[num];
			
				if (Global_113648.f_20566.f_189[num] > 0f)
					Global_55661[i /*36*/].f_32 = Global_113648.f_20566.f_189[num];
			
				num = num + 1;
			}
		
			if (Global_55661[i /*36*/].f_32 > 0f && Global_55661[i /*36*/].f_31 > 0f && Global_55661[i /*36*/].f_9 > 0f)
			{
				num2 = Global_55661[i /*36*/].f_9;
			
				if (num2 > Global_55661[i /*36*/].f_31)
					Global_55661[i /*36*/].f_31 = num2;
			
				if (num2 < Global_55661[i /*36*/].f_32)
					Global_55661[i /*36*/].f_32 = num2;
			
				j = 0;
				num3 = Global_55661[i /*36*/].f_31 - Global_55661[i /*36*/].f_32;
				num4 = 0f;
				num8 = 2.1474836E+09f;
				num9 = -2.1474836E+09f;
			
				for (j = 15; j >= 0; j = j + -1)
				{
					num5 = num3 * MISC::GET_RANDOM_FLOAT_IN_RANGE(1f, 5f) * 0.01f;
					num6 = 1f;
					num7 = 1f;
				
					if (j == 15)
					{
						num10 = (Global_55661[i /*36*/].f_31 - Global_55661[i /*36*/].f_9) / num3;
					
						if (num10 < 0.2f)
							num6 = num10 / 0.2f;
					
						num11 = (Global_55661[i /*36*/].f_9 - Global_55661[i /*36*/].f_32) / num3;
					
						if (num11 < 0.2f)
							num7 = num11 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_55661[i /*36*/].f_14[j] = Global_55661[i /*36*/].f_9;
					}
					else
					{
						num12 = (Global_55661[i /*36*/].f_31 - Global_55661[i /*36*/].f_14[j + 1]) / num3;
					
						if (num12 < 0.2f)
							num6 = num12 / 0.2f;
					
						num13 = (Global_55661[i /*36*/].f_14[j + 1] - Global_55661[i /*36*/].f_32) / num3;
					
						if (num13 < 0.2f)
							num7 = num13 / 0.2f;
					
						randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(-num5 * num7, num5 * num6);
						Global_55661[i /*36*/].f_14[j] = Global_55661[i /*36*/].f_14[j + 1] + randomFloatInRange;
					}
				
					num8 = func_93(num8, Global_55661[i /*36*/].f_14[j]);
					num9 = func_92(num9, Global_55661[i /*36*/].f_14[j]);
					num4 = num4 + Global_55661[i /*36*/].f_14[j];
				}
			
				Global_55661[i /*36*/].f_32 = num8;
				Global_55661[i /*36*/].f_31 = num9;
				num4 = num4 / 16f;
				Global_55661[i /*36*/].f_33 = Global_55661[i /*36*/].f_9 - num4;
				Global_55661[i /*36*/].f_34 = (Global_55661[i /*36*/].f_33 / num4) * 100f;
				num14 = func_7(i);
			
				if (num14 != 1f)
				{
					num4 = 0f;
					num15 = num14 - 1f;
				
					for (j = 0; j <= 15; j = j + 1)
					{
						num16 = SYSTEM::TO_FLOAT(j) / 16f;
						Global_55661[i /*36*/].f_14[j] = Global_55661[i /*36*/].f_14[j] * (MISC::GET_RANDOM_FLOAT_IN_RANGE(0.95f, 1.05f) + (num16 * num15));
					
						if (j == 15)
							Global_55661[i /*36*/].f_14[j] = Global_55661[i /*36*/].f_9 * num14;
					
						num4 = num4 + Global_55661[i /*36*/].f_14[j];
						Global_55661[i /*36*/].f_32 = func_93(Global_55661[i /*36*/].f_32, Global_55661[i /*36*/].f_14[j]);
						Global_55661[i /*36*/].f_31 = func_92(Global_55661[i /*36*/].f_31, Global_55661[i /*36*/].f_14[j]);
					}
				
					num4 = num4 / 16f;
					Global_55661[i /*36*/].f_33 = Global_55661[i /*36*/].f_9 - num4;
					Global_55661[i /*36*/].f_34 = (Global_55661[i /*36*/].f_33 / num4) * 100f;
				}
			}
		}
	}

	return;
}

float func_92(float fParam0, float fParam1) // Hash - 0x99935A7D ^0x99935A7D
{
	if (fParam0 > fParam1)
		return fParam0;

	return fParam1;
}

float func_93(float fParam0, float fParam1) // Hash - 0xAB447DEC ^0xAB447DEC
{
	if (fParam0 > fParam1)
		return fParam1;

	return fParam0;
}

void func_94() // Hash - 0xD54B64BA ^0x7B3B32E8
{
	int i;
	int j;
	float startRange;
	float endRange;

	if (!Global_113648.f_20566.f_101)
	{
		for (i = 0; i < 80; i = i + 1)
		{
			if (!Global_55661[i /*36*/].f_8)
				Global_55661[i /*36*/].f_9 = MISC::GET_RANDOM_FLOAT_IN_RANGE(15f, 290f);
		}
	
		i = 0;
		j = 0;
	
		for (j = 0; j <= 15; j = j + 1)
		{
			func_28(true);
		
			for (i = 0; i < 80; i = i + 1)
			{
				startRange = 0.85f;
				endRange = 1.15f;
			
				if (Global_55661[i /*36*/].f_9 < 5f)
					startRange = 1.1f;
				else if (Global_55661[i /*36*/].f_9 < 10f)
					startRange = 0.95f;
				else if (Global_55661[i /*36*/].f_9 > 285f)
					endRange = 0.97f;
				else if (Global_55661[i /*36*/].f_9 > 270f)
					endRange = 1.05f;
			
				Global_55661[i /*36*/].f_9 = Global_55661[i /*36*/].f_9 * MISC::GET_RANDOM_FLOAT_IN_RANGE(startRange, endRange);
				Global_55661[i /*36*/].f_9 = func_93(func_92(MISC::ABSF(Global_55661[i /*36*/].f_9), 3.5f), 290f);
			}
		}
	
		func_42();
		Global_113648.f_20566.f_101 = 1;
	}

	return;
}

void func_95() // Hash - 0xD9860646 ^0xBC0AC2AB
{
	int i;
	int j;
	int randomIntInRange;

	Global_60823 = 0;
	Global_60825 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			TEXT_LABEL_ASSIGN_STRING(&(Global_63208[i /*34*/][j /*11*/].f_1), _("BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME"), 16);
			TEXT_LABEL_ASSIGN_STRING(&(Global_63208[i /*34*/][j /*11*/].f_5), _("BREAKING NEWS! THIS NEWS STORY HAS AN UNSET STRING!.//REMOVE THIS ENTRY FOR RELEASE! IT SHOULD NEVER SHOW IN GAME"), 16);
		}
	}

	func_96(55, _("World gulping eCola in record volume, stocks up."), "ECL_P_SR_C", 0, 0);
	func_96(55, _("Ecola 'sugar water' losing favour among investors."), "ECL_P_SF_C", 1, 0);
	func_96(55, _("eCola stocks all over the place, sticky"), "ECL_P_RF_C", 2, 0);
	func_96(51, _("Burgershot stocks shoot up like cholesterol."), "BGR_P_SR_C", 0, 0);
	func_96(51, _("Burgershot junk food stocks down."), "BGR_P_SF_C", 1, 0);
	func_96(52, _("Cluckin' Bell stocks up on \"Free Range is for Fairies\" campaign."), "CLK_P_SR_C", 0, 0);
	func_96(52, _("Cluckin' Bell chicken cruelty video brings stocks down."), "CLK_P_SF_C", 1, 0);
	func_96(52, _("Investors don't know what to do with Cluckin' Bell fast food stocks."), "CLK_P_RF_C", 2, 0);
	func_96(48, _("Bean Machine uses tax loopholes to win big.  Stocks rise."), "BEN_P_SR_C", 0, 0);
	func_96(48, _("Fair trade coffee killing Bean Machine profits.  Stocks down."), "BEN_P_SF_C", 1, 0);
	func_96(48, _("Coffee giant Bean Machine sees stocks moody, edgy."), "BEN_P_RF_C", 2, 0);
	func_96(13, _("Credit card fees rack up huge profits says Fleeca."), "FLC_P_SR_C", 0, 0);
	func_96(13, _("Cash is king - under the table deals killing Fleeca stock."), "FLC_P_SF_C", 1, 0);
	func_96(13, _("Fleeca stock unsteady as market flails aimlessly."), "FLC_P_RF_C", 2, 0);
	func_96(64, _("Prolaps shares up despite Bangladesh factory fire."), "PRO_P_SR_C", 0, 0);
	func_96(64, _("Prolaps shares down as America goes more hipster."), "PRO_P_SF_C", 1, 0);
	func_96(64, _("Prolaps unsteady after football player rampage."), "PRO_P_RF_C", 2, 0);
	func_96(70, _("Vanilla Unicorn Strip Clubs are packed, stocks are up."), "UNI_P_SR_C", 0, 0);
	func_96(70, _("Vanilla Unicorn strippers cry as stocks drop."), "UNI_P_SF_C", 1, 0);
	func_96(70, _("Vanilla Unicorn Strip club stocks and clientele unpredictable."), "UNI_P_RF_C", 2, 0);
	func_96(60, _("Krapea CEO announces new tax avoidance plan.  Stocks up."), "KRP_P_SR_C", 0, 0);
	func_96(60, _("Krapea particle board furniture falling out of favour."), "KRP_P_SF_C", 1, 0);
	func_96(60, _("Directions confusing for Krapea."), "KRP_P_RF_C", 2, 0);
	func_96(56, _("No Strike! FlyUS stocks surge."), "FUS_P_SR_C", 0, 0);
	func_96(56, _("Food poisoning on 154 FlyUS flights brings stock down."), "FUS_P_SF_C", 1, 0);
	func_96(56, _("FlyUS stock hitting turbulence, bad headline."), "FUS_P_RF_C", 2, 0);
	func_96(58, _("60% of shipments contain drugs says Go Postal CEO - stocks rise."), "GOP_P_SR_C", 0, 0);
	func_96(58, _("Go Postal going profitless."), "GOP_P_SF_C", 1, 0);
	func_96(58, _("Go Postal stocks unsteady as America ships less."), "GOP_P_RF_C", 2, 0);
	func_96(53, _("Snotty coffee house Cool Beans stocks surge."), "BAN_P_SR_C", 0, 0);
	func_96(53, _("Prices cool off for Cool Beans."), "BAN_P_SF_C", 1, 0);
	func_96(53, _("Cool Beans stocks up, then down, then up."), "BAN_P_RF_C", 2, 0);
	func_96(62, _("Female insecurity sends Max Renda stocks up."), "MAX_P_SR_C", 0, 0);
	func_96(62, _("Max Renda stocks runny."), "MAX_P_SF_C", 1, 0);
	func_96(62, _("Max Renda stocks bipolar."), "MAX_P_RF_C", 2, 0);
	func_96(57, _("Surgery soars price of Gastro Band stock."), "GAS_P_SR_C", 0, 0);
	func_96(57, _("Another Gastro Band stock brings price down."), "GAS_P_SF_C", 1, 0);
	func_96(57, _("Gastro Band stock - feast then famine."), "GAS_P_RF_C", 2, 0);
	func_96(59, _("GruppeSechs not all it's cracked up to be."), "GRU_P_SR_C", 0, 0);
	func_96(59, _("GruppeSechs down after heist."), "GRU_P_SF_C", 1, 0);
	func_96(59, _("GruppeSechs unsteady if investors decide whether to join in."), "GRU_P_RF_C", 2, 0);
	func_96(44, _("Pump and Run franchise sees stock rise as abs harden."), "PMP_P_SR_C", 0, 0);
	func_96(44, _("Americans not going to gym. Prefer binge eating. Pump and Run shares drop."), "PMP_P_SF_C", 1, 0);
	func_96(44, _("PMP shares volatile as gym attendance murky."), "PMP_P_RF_C", 2, 0);
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60823 - 1);

	for (i = 0; i < 4; i = i + 1)
	{
		for (j = 0; j < 3; j = j + 1)
		{
			Global_63208[i /*34*/][j /*11*/].f_10 = 5000f;
		
			while (!func_88(&Global_60826[randomIntInRange /*14*/], i))
			{
				randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60823 - 1);
				SYSTEM::WAIT(2000);
			}
		
			Global_60826[randomIntInRange /*14*/].f_10 = 0f;
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_60823 - 1);
		}
	}

	return;
}

void func_96(int iParam0, char* sParam1, char* sParam2, int iParam3, int iParam4) // Hash - 0xEF428EE5 ^0xB19A3419
{
	if (Global_60823 == 150)
		return;

	Global_60826[Global_60823 /*14*/].f_11 = iParam3;
	Global_60826[Global_60823 /*14*/] = iParam4;
	TEXT_LABEL_ASSIGN_STRING(&(Global_60826[Global_60823 /*14*/].f_1), sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_60826[Global_60823 /*14*/].f_5), sParam2, 16);
	Global_60826[Global_60823 /*14*/].f_9 = Global_60825;
	Global_60826[Global_60823 /*14*/].f_12 = iParam0;
	Global_60823 = Global_60823 + 1;
	Global_60825 = Global_60825 + 1;
	return;
}

void func_97() // Hash - 0xC25900E ^0x123EE009
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	return;
}

void func_98() // Hash - 0x25108220 ^0x2566C15C
{
	int i;
	int j;

	i = 0;

	for (i = 0; i < 80; i = i + 1)
	{
		Global_55661[i /*36*/].f_33 = 0f;
		Global_55661[i /*36*/].f_13 = 0;
		Global_55661[i /*36*/].f_12 = 0;
		Global_55661[i /*36*/].f_31 = 0f;
		Global_55661[i /*36*/].f_32 = 3.402823E+38f;
		j = 0;
	
		for (j = 0; j < 16; j = j + 1)
		{
			Global_55661[i /*36*/].f_14[j] = 0f;
		}
	}

	i = 0;

	for (i = 0; i < 204; i = i + 1)
	{
		Global_59104[i /*7*/].f_2 = 0;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_55661[0 /*36*/], _("Ammu-Nation"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[0 /*36*/].f_4), _("AMU"), 16);
	Global_55661[0 /*36*/].f_8 = 1;
	Global_55661[0 /*36*/].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[1 /*36*/], _("Badger"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[1 /*36*/].f_4), _("BDG"), 16);
	Global_55661[1 /*36*/].f_8 = 1;
	Global_55661[1 /*36*/].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[2 /*36*/], _("BankOfLiberty"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[2 /*36*/].f_4), _("BOL"), 16);
	Global_55661[2 /*36*/].f_8 = 0;
	Global_55661[2 /*36*/].f_35 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[3 /*36*/], _("BF"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[3 /*36*/].f_4), _("BFA"), 16);
	Global_55661[3 /*36*/].f_8 = 1;
	Global_55661[3 /*36*/].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[4 /*36*/], _("Binco"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[4 /*36*/].f_4), _("BIN"), 16);
	Global_55661[4 /*36*/].f_8 = 1;
	Global_55661[4 /*36*/].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[5 /*36*/], _("BitterSweet"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[5 /*36*/].f_4), _("BTR"), 16);
	Global_55661[5 /*36*/].f_8 = 1;
	Global_55661[5 /*36*/].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[6 /*36*/], _("Bleeter"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[6 /*36*/].f_4), _("BLE"), 16);
	Global_55661[6 /*36*/].f_8 = 1;
	Global_55661[6 /*36*/].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[7 /*36*/], _("Brute"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[7 /*36*/].f_4), _("BRU"), 16);
	Global_55661[7 /*36*/].f_8 = 1;
	Global_55661[7 /*36*/].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[8 /*36*/], _("CNT"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[8 /*36*/].f_4), _("CNT"), 16);
	Global_55661[8 /*36*/].f_8 = 1;
	Global_55661[8 /*36*/].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[9 /*36*/], _("Crevis"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[9 /*36*/].f_4), _("CRE"), 16);
	Global_55661[9 /*36*/].f_8 = 1;
	Global_55661[9 /*36*/].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[10 /*36*/], _("DailyGlobe"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[10 /*36*/].f_4), _("DGP"), 16);
	Global_55661[10 /*36*/].f_8 = 1;
	Global_55661[10 /*36*/].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[11 /*36*/], _("Dept.WaterandPower"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[11 /*36*/].f_4), _("WAP"), 16);
	Global_55661[11 /*36*/].f_8 = 1;
	Global_55661[11 /*36*/].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[12 /*36*/], _("Facade"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[12 /*36*/].f_4), _("FAC"), 16);
	Global_55661[12 /*36*/].f_8 = 1;
	Global_55661[12 /*36*/].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[13 /*36*/], _("Fleeca"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[13 /*36*/].f_4), _("FLC"), 16);
	Global_55661[13 /*36*/].f_8 = 0;
	Global_55661[13 /*36*/].f_35 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[14 /*36*/], _("Hijak"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[14 /*36*/].f_4), _("HJK"), 16);
	Global_55661[14 /*36*/].f_8 = 0;
	Global_55661[14 /*36*/].f_35 = 2;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[15 /*36*/], _("Fruit"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[15 /*36*/].f_4), _("FRT"), 16);
	Global_55661[15 /*36*/].f_8 = 1;
	Global_55661[15 /*36*/].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[16 /*36*/], _("AuguryInsurance"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[16 /*36*/].f_4), _("AUG"), 16);
	Global_55661[16 /*36*/].f_8 = 0;
	Global_55661[16 /*36*/].f_35 = 3;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[17 /*36*/], _("Bullhead"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[17 /*36*/].f_4), _("BUL"), 16);
	Global_55661[17 /*36*/].f_8 = 0;
	Global_55661[17 /*36*/].f_35 = 4;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[18 /*36*/], _("Hammerstein&Faust"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[18 /*36*/].f_4), _("HAF"), 16);
	Global_55661[18 /*36*/].f_8 = 0;
	Global_55661[18 /*36*/].f_35 = 5;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[19 /*36*/], _("Slaughter,Slaughter&Slaughter"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[19 /*36*/].f_4), _("SSS"), 16);
	Global_55661[19 /*36*/].f_8 = 0;
	Global_55661[19 /*36*/].f_35 = 6;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[20 /*36*/], _("LosSantosCustoms"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[20 /*36*/].f_4), _("LSC"), 16);
	Global_55661[20 /*36*/].f_8 = 1;
	Global_55661[20 /*36*/].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[21 /*36*/], _("LSTransport"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[21 /*36*/].f_4), _("LST"), 16);
	Global_55661[21 /*36*/].f_8 = 1;
	Global_55661[21 /*36*/].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[22 /*36*/], _("LTDOil"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[22 /*36*/].f_4), _("LTD"), 16);
	Global_55661[22 /*36*/].f_8 = 1;
	Global_55661[22 /*36*/].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[23 /*36*/], _("Maibatsu"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[23 /*36*/].f_4), _("MAI"), 16);
	Global_55661[23 /*36*/].f_8 = 1;
	Global_55661[23 /*36*/].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[24 /*36*/], _("MazeBank"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[24 /*36*/].f_4), _("MAZ"), 16);
	Global_55661[24 /*36*/].f_8 = 0;
	Global_55661[24 /*36*/].f_35 = 7;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[25 /*36*/], _("Suburban"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[25 /*36*/].f_4), _("SUB"), 16);
	Global_55661[25 /*36*/].f_8 = 1;
	Global_55661[25 /*36*/].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[26 /*36*/], _("AnimalArk"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[26 /*36*/].f_4), _("ARK"), 16);
	Global_55661[26 /*36*/].f_8 = 0;
	Global_55661[26 /*36*/].f_35 = 8;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[27 /*36*/], _("Pisswasser"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[27 /*36*/].f_4), _("PIS"), 16);
	Global_55661[27 /*36*/].f_8 = 1;
	Global_55661[27 /*36*/].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[28 /*36*/], _("Ponsonbys"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[28 /*36*/].f_4), _("PON"), 16);
	Global_55661[28 /*36*/].f_8 = 1;
	Global_55661[28 /*36*/].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[29 /*36*/], _("Raine"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[29 /*36*/].f_4), _("RAI"), 16);
	Global_55661[29 /*36*/].f_8 = 0;
	Global_55661[29 /*36*/].f_35 = 9;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[30 /*36*/], _("RonOil"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[30 /*36*/].f_4), _("RON"), 16);
	Global_55661[30 /*36*/].f_8 = 1;
	Global_55661[30 /*36*/].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[31 /*36*/], _("Schyster"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[31 /*36*/].f_4), _("SHT"), 16);
	Global_55661[31 /*36*/].f_8 = 1;
	Global_55661[31 /*36*/].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[32 /*36*/], _("Sprunk"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[32 /*36*/].f_4), _("SPU"), 16);
	Global_55661[32 /*36*/].f_8 = 1;
	Global_55661[32 /*36*/].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[33 /*36*/], _("Tinkle"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[33 /*36*/].f_4), _("TNK"), 16);
	Global_55661[33 /*36*/].f_8 = 1;
	Global_55661[33 /*36*/].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[34 /*36*/], _("WIWANG"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[34 /*36*/].f_4), _("WIW"), 16);
	Global_55661[34 /*36*/].f_8 = 1;
	Global_55661[34 /*36*/].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[35 /*36*/], _("Ubermacht"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[35 /*36*/].f_4), _("UMA"), 16);
	Global_55661[35 /*36*/].f_8 = 1;
	Global_55661[35 /*36*/].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[36 /*36*/], _("Vapid"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[36 /*36*/].f_4), _("VAP"), 16);
	Global_55661[36 /*36*/].f_8 = 1;
	Global_55661[36 /*36*/].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[37 /*36*/], _("VomFeuer"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[37 /*36*/].f_4), _("VOM"), 16);
	Global_55661[37 /*36*/].f_8 = 1;
	Global_55661[37 /*36*/].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[38 /*36*/], _("Weazel"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[38 /*36*/].f_4), _("WZL"), 16);
	Global_55661[38 /*36*/].f_8 = 1;
	Global_55661[38 /*36*/].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[39 /*36*/], _("Whiz"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[39 /*36*/].f_4), _("WIZ"), 16);
	Global_55661[39 /*36*/].f_8 = 1;
	Global_55661[39 /*36*/].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[40 /*36*/], _("Debonaire"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[40 /*36*/].f_4), _("DEB"), 16);
	Global_55661[40 /*36*/].f_8 = 0;
	Global_55661[40 /*36*/].f_35 = 10;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[41 /*36*/], _("Zit"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[41 /*36*/].f_4), _("ZIT"), 16);
	Global_55661[41 /*36*/].f_8 = 1;
	Global_55661[41 /*36*/].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[42 /*36*/], _("Shark"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[42 /*36*/].f_4), _("SHK"), 16);
	Global_55661[42 /*36*/].f_8 = 1;
	Global_55661[42 /*36*/].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[43 /*36*/], _("BettaPharmaceuticals"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[43 /*36*/].f_4), _("BET"), 16);
	Global_55661[43 /*36*/].f_8 = 1;
	Global_55661[43 /*36*/].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[44 /*36*/], _("PumpnRun"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[44 /*36*/].f_4), _("PMP"), 16);
	Global_55661[44 /*36*/].f_8 = 1;
	Global_55661[44 /*36*/].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[45 /*36*/], _("GrainOfTruth"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[45 /*36*/].f_4), _("GOT"), 16);
	Global_55661[45 /*36*/].f_8 = 1;
	Global_55661[45 /*36*/].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[46 /*36*/], _("Eyefind"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[46 /*36*/].f_4), _("EYE"), 16);
	Global_55661[46 /*36*/].f_8 = 1;
	Global_55661[46 /*36*/].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[47 /*36*/], _("AirEmu"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[47 /*36*/].f_4), _("EMU"), 16);
	Global_55661[47 /*36*/].f_8 = 0;
	Global_55661[47 /*36*/].f_35 = 11;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[48 /*36*/], _("BeanMachine"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[48 /*36*/].f_4), _("BEN"), 16);
	Global_55661[48 /*36*/].f_8 = 0;
	Global_55661[48 /*36*/].f_35 = 12;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[49 /*36*/], _("GoldCoast"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[49 /*36*/].f_4), _("GCD"), 16);
	Global_55661[49 /*36*/].f_8 = 0;
	Global_55661[49 /*36*/].f_35 = 13;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[50 /*36*/], _("BobMulét"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[50 /*36*/].f_4), _("BOM"), 16);
	Global_55661[50 /*36*/].f_8 = 0;
	Global_55661[50 /*36*/].f_35 = 14;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[51 /*36*/], _("BurgerShot"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[51 /*36*/].f_4), _("BGR"), 16);
	Global_55661[51 /*36*/].f_8 = 0;
	Global_55661[51 /*36*/].f_35 = 15;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[52 /*36*/], _("CluckinBell"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[52 /*36*/].f_4), _("CLK"), 16);
	Global_55661[52 /*36*/].f_8 = 0;
	Global_55661[52 /*36*/].f_35 = 16;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[53 /*36*/], _("CoolBeans"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[53 /*36*/].f_4), _("BAN"), 16);
	Global_55661[53 /*36*/].f_8 = 0;
	Global_55661[53 /*36*/].f_35 = 17;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[54 /*36*/], _("DollarPills"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[54 /*36*/].f_4), _("DOP"), 16);
	Global_55661[54 /*36*/].f_8 = 0;
	Global_55661[54 /*36*/].f_35 = 18;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[55 /*36*/], _("eCola"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[55 /*36*/].f_4), _("ECL"), 16);
	Global_55661[55 /*36*/].f_8 = 0;
	Global_55661[55 /*36*/].f_35 = 19;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[56 /*36*/], _("FlyUS"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[56 /*36*/].f_4), _("FUS"), 16);
	Global_55661[56 /*36*/].f_8 = 0;
	Global_55661[56 /*36*/].f_35 = 20;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[57 /*36*/], _("GastroBand"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[57 /*36*/].f_4), _("GAS"), 16);
	Global_55661[57 /*36*/].f_8 = 0;
	Global_55661[57 /*36*/].f_35 = 21;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[58 /*36*/], _("GoPostal"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[58 /*36*/].f_4), _("GOP"), 16);
	Global_55661[58 /*36*/].f_8 = 0;
	Global_55661[58 /*36*/].f_35 = 22;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[59 /*36*/], _("GruppeSechs"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[59 /*36*/].f_4), _("GRU"), 16);
	Global_55661[59 /*36*/].f_8 = 0;
	Global_55661[59 /*36*/].f_35 = 23;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[60 /*36*/], _("Krapea"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[60 /*36*/].f_4), _("KRP"), 16);
	Global_55661[60 /*36*/].f_8 = 0;
	Global_55661[60 /*36*/].f_35 = 24;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[61 /*36*/], _("Lifeinvader"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[61 /*36*/].f_4), _("LFI"), 16);
	Global_55661[61 /*36*/].f_8 = 0;
	Global_55661[61 /*36*/].f_35 = 25;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[62 /*36*/], _("MaxRenda"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[62 /*36*/].f_4), _("MAX"), 16);
	Global_55661[62 /*36*/].f_8 = 0;
	Global_55661[62 /*36*/].f_35 = 26;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[63 /*36*/], _("PostOP"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[63 /*36*/].f_4), _("POP"), 16);
	Global_55661[63 /*36*/].f_8 = 0;
	Global_55661[63 /*36*/].f_35 = 27;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[64 /*36*/], _("ProLaps"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[64 /*36*/].f_4), _("PRO"), 16);
	Global_55661[64 /*36*/].f_8 = 0;
	Global_55661[64 /*36*/].f_35 = 28;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[65 /*36*/], _("Redwood"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[65 /*36*/].f_4), _("RWC"), 16);
	Global_55661[65 /*36*/].f_8 = 0;
	Global_55661[65 /*36*/].f_35 = 29;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[66 /*36*/], _("RichardsMajestic"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[66 /*36*/].f_4), _("RIM"), 16);
	Global_55661[66 /*36*/].f_8 = 0;
	Global_55661[66 /*36*/].f_35 = 30;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[67 /*36*/], _("TacoBomb"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[67 /*36*/].f_4), _("TBO"), 16);
	Global_55661[67 /*36*/].f_8 = 0;
	Global_55661[67 /*36*/].f_35 = 31;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[68 /*36*/], _("Up-n-Atom"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[68 /*36*/].f_4), _("UPA"), 16);
	Global_55661[68 /*36*/].f_8 = 0;
	Global_55661[68 /*36*/].f_35 = 32;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[69 /*36*/], _("Vangelico"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[69 /*36*/].f_4), _("VAG"), 16);
	Global_55661[69 /*36*/].f_8 = 0;
	Global_55661[69 /*36*/].f_35 = 33;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[70 /*36*/], _("VanillaUnicorn"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[70 /*36*/].f_4), _("UNI"), 16);
	Global_55661[70 /*36*/].f_8 = 0;
	Global_55661[70 /*36*/].f_35 = 34;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[71 /*36*/], _("HVYIndustries"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[71 /*36*/].f_4), _("HVY"), 16);
	Global_55661[71 /*36*/].f_8 = 1;
	Global_55661[71 /*36*/].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[72 /*36*/], _("Logger"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[72 /*36*/].f_4), _("LOG"), 16);
	Global_55661[72 /*36*/].f_8 = 0;
	Global_55661[72 /*36*/].f_35 = 35;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[73 /*36*/], _("Merryweather"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[73 /*36*/].f_4), _("MER"), 16);
	Global_55661[73 /*36*/].f_8 = 0;
	Global_55661[73 /*36*/].f_35 = 36;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[74 /*36*/], _("WorldwideFM"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[74 /*36*/].f_4), _("WFM"), 16);
	Global_55661[74 /*36*/].f_8 = 0;
	Global_55661[74 /*36*/].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[75 /*36*/], _("RadioLosSantos"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[75 /*36*/].f_4), _("RLS"), 16);
	Global_55661[75 /*36*/].f_8 = 0;
	Global_55661[75 /*36*/].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[76 /*36*/], _("Shrewsbury"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[76 /*36*/].f_4), _("SHR"), 16);
	Global_55661[76 /*36*/].f_8 = 1;
	Global_55661[76 /*36*/].f_35 = 37;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[77 /*36*/], _("HawkAndLittle"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[77 /*36*/].f_4), _("HAL"), 16);
	Global_55661[77 /*36*/].f_8 = 1;
	Global_55661[77 /*36*/].f_35 = 38;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[78 /*36*/], _("MorsMutualInsurance"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[78 /*36*/].f_4), _("MOR"), 16);
	Global_55661[78 /*36*/].f_8 = 0;
	Global_55661[78 /*36*/].f_35 = 39;
	TEXT_LABEL_ASSIGN_STRING(&Global_55661[79 /*36*/], _("Bilkinton"), 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_55661[79 /*36*/].f_4), _("BIL"), 16);
	Global_55661[79 /*36*/].f_8 = 0;
	Global_55661[79 /*36*/].f_35 = 40;
	Global_58816[0 /*7*/].f_2 = 1f;
	Global_58816[0 /*7*/].f_1 = 1f;
	Global_58816[0 /*7*/].f_3 = 1000f;
	Global_58816[0 /*7*/].f_4 = 3.5f;
	Global_58816[0 /*7*/].f_5 = 3.5f;
	Global_58816[0 /*7*/].f_6 = 0.1f;
	Global_58816[1 /*7*/].f_2 = 1f;
	Global_58816[1 /*7*/].f_1 = 1f;
	Global_58816[1 /*7*/].f_3 = 1000f;
	Global_58816[1 /*7*/].f_4 = 3.5f;
	Global_58816[1 /*7*/].f_5 = 3.5f;
	Global_58816[1 /*7*/].f_6 = 0.1f;
	Global_58816[2 /*7*/].f_2 = 1f;
	Global_58816[2 /*7*/].f_1 = 1f;
	Global_58816[2 /*7*/].f_3 = 1000f;
	Global_58816[2 /*7*/].f_4 = 3.5f;
	Global_58816[2 /*7*/].f_5 = 3.5f;
	Global_58816[2 /*7*/].f_6 = 0.1f;
	Global_58816[3 /*7*/].f_2 = 1f;
	Global_58816[3 /*7*/].f_1 = 1f;
	Global_58816[3 /*7*/].f_3 = 1000f;
	Global_58816[3 /*7*/].f_4 = 3.5f;
	Global_58816[3 /*7*/].f_5 = 3.5f;
	Global_58816[3 /*7*/].f_6 = 0.1f;
	Global_58816[4 /*7*/].f_2 = 1f;
	Global_58816[4 /*7*/].f_1 = 1f;
	Global_58816[4 /*7*/].f_3 = 1000f;
	Global_58816[4 /*7*/].f_4 = 3.5f;
	Global_58816[4 /*7*/].f_5 = 3.5f;
	Global_58816[4 /*7*/].f_6 = 0.1f;
	Global_58816[5 /*7*/].f_2 = 1f;
	Global_58816[5 /*7*/].f_1 = 1f;
	Global_58816[5 /*7*/].f_3 = 1000f;
	Global_58816[5 /*7*/].f_4 = 3.5f;
	Global_58816[5 /*7*/].f_5 = 3.5f;
	Global_58816[5 /*7*/].f_6 = 0.1f;
	Global_58816[6 /*7*/].f_2 = 1f;
	Global_58816[6 /*7*/].f_1 = 1f;
	Global_58816[6 /*7*/].f_3 = 1000f;
	Global_58816[6 /*7*/].f_4 = 3.5f;
	Global_58816[6 /*7*/].f_5 = 3.5f;
	Global_58816[6 /*7*/].f_6 = 0.1f;
	Global_58816[7 /*7*/].f_2 = 1f;
	Global_58816[7 /*7*/].f_1 = 1f;
	Global_58816[7 /*7*/].f_3 = 1000f;
	Global_58816[7 /*7*/].f_4 = 3.5f;
	Global_58816[7 /*7*/].f_5 = 3.5f;
	Global_58816[7 /*7*/].f_6 = 0.1f;
	Global_58816[8 /*7*/].f_2 = 1f;
	Global_58816[8 /*7*/].f_1 = 1f;
	Global_58816[8 /*7*/].f_3 = 1000f;
	Global_58816[8 /*7*/].f_4 = 3.5f;
	Global_58816[8 /*7*/].f_5 = 3.5f;
	Global_58816[8 /*7*/].f_6 = 0.1f;
	Global_58816[9 /*7*/].f_2 = 1f;
	Global_58816[9 /*7*/].f_1 = 1f;
	Global_58816[9 /*7*/].f_3 = 1000f;
	Global_58816[9 /*7*/].f_4 = 3.5f;
	Global_58816[9 /*7*/].f_5 = 3.5f;
	Global_58816[9 /*7*/].f_6 = 0.1f;
	Global_58816[10 /*7*/].f_2 = 1f;
	Global_58816[10 /*7*/].f_1 = 1f;
	Global_58816[10 /*7*/].f_3 = 1000f;
	Global_58816[10 /*7*/].f_4 = 3.5f;
	Global_58816[10 /*7*/].f_5 = 3.5f;
	Global_58816[10 /*7*/].f_6 = 0.1f;
	Global_58816[11 /*7*/].f_2 = 1f;
	Global_58816[11 /*7*/].f_1 = 1f;
	Global_58816[11 /*7*/].f_3 = 1000f;
	Global_58816[11 /*7*/].f_4 = 3.5f;
	Global_58816[11 /*7*/].f_5 = 3.5f;
	Global_58816[11 /*7*/].f_6 = 0.1f;
	Global_58816[12 /*7*/].f_2 = 1f;
	Global_58816[12 /*7*/].f_1 = 1f;
	Global_58816[12 /*7*/].f_3 = 1000f;
	Global_58816[12 /*7*/].f_4 = 3.5f;
	Global_58816[12 /*7*/].f_5 = 3.5f;
	Global_58816[12 /*7*/].f_6 = 0.1f;
	Global_58816[13 /*7*/].f_2 = 1f;
	Global_58816[13 /*7*/].f_1 = 1f;
	Global_58816[13 /*7*/].f_3 = 1000f;
	Global_58816[13 /*7*/].f_4 = 3.5f;
	Global_58816[13 /*7*/].f_5 = 3.5f;
	Global_58816[13 /*7*/].f_6 = 0.1f;
	Global_58816[14 /*7*/].f_2 = 1f;
	Global_58816[14 /*7*/].f_1 = 1f;
	Global_58816[14 /*7*/].f_3 = 1000f;
	Global_58816[14 /*7*/].f_4 = 3.5f;
	Global_58816[14 /*7*/].f_5 = 3.5f;
	Global_58816[14 /*7*/].f_6 = 0.1f;
	Global_58816[15 /*7*/].f_2 = 1f;
	Global_58816[15 /*7*/].f_1 = 1f;
	Global_58816[15 /*7*/].f_3 = 1000f;
	Global_58816[15 /*7*/].f_4 = 3.5f;
	Global_58816[15 /*7*/].f_5 = 3.5f;
	Global_58816[15 /*7*/].f_6 = 0.1f;
	Global_58816[16 /*7*/].f_2 = 1f;
	Global_58816[16 /*7*/].f_1 = 1f;
	Global_58816[16 /*7*/].f_3 = 1000f;
	Global_58816[16 /*7*/].f_4 = 3.5f;
	Global_58816[16 /*7*/].f_5 = 3.5f;
	Global_58816[16 /*7*/].f_6 = 0.1f;
	Global_58816[17 /*7*/].f_2 = 1f;
	Global_58816[17 /*7*/].f_1 = 1f;
	Global_58816[17 /*7*/].f_3 = 1000f;
	Global_58816[17 /*7*/].f_4 = 3.5f;
	Global_58816[17 /*7*/].f_5 = 3.5f;
	Global_58816[17 /*7*/].f_6 = 0.1f;
	Global_58816[18 /*7*/].f_2 = 1f;
	Global_58816[18 /*7*/].f_1 = 1f;
	Global_58816[18 /*7*/].f_3 = 1000f;
	Global_58816[18 /*7*/].f_4 = 3.5f;
	Global_58816[18 /*7*/].f_5 = 3.5f;
	Global_58816[18 /*7*/].f_6 = 0.1f;
	Global_58816[19 /*7*/].f_2 = 1f;
	Global_58816[19 /*7*/].f_1 = 1f;
	Global_58816[19 /*7*/].f_3 = 1000f;
	Global_58816[19 /*7*/].f_4 = 3.5f;
	Global_58816[19 /*7*/].f_5 = 3.5f;
	Global_58816[19 /*7*/].f_6 = 0.1f;
	Global_58816[20 /*7*/].f_2 = 1f;
	Global_58816[20 /*7*/].f_1 = 1f;
	Global_58816[20 /*7*/].f_3 = 1000f;
	Global_58816[20 /*7*/].f_4 = 3.5f;
	Global_58816[20 /*7*/].f_5 = 3.5f;
	Global_58816[20 /*7*/].f_6 = 0.1f;
	Global_58816[21 /*7*/].f_2 = 1f;
	Global_58816[21 /*7*/].f_1 = 1f;
	Global_58816[21 /*7*/].f_3 = 1000f;
	Global_58816[21 /*7*/].f_4 = 3.5f;
	Global_58816[21 /*7*/].f_5 = 3.5f;
	Global_58816[21 /*7*/].f_6 = 0.1f;
	Global_58816[22 /*7*/].f_2 = 1f;
	Global_58816[22 /*7*/].f_1 = 1f;
	Global_58816[22 /*7*/].f_3 = 1000f;
	Global_58816[22 /*7*/].f_4 = 3.5f;
	Global_58816[22 /*7*/].f_5 = 3.5f;
	Global_58816[22 /*7*/].f_6 = 0.1f;
	Global_58816[23 /*7*/].f_2 = 1f;
	Global_58816[23 /*7*/].f_1 = 1f;
	Global_58816[23 /*7*/].f_3 = 1000f;
	Global_58816[23 /*7*/].f_4 = 3.5f;
	Global_58816[23 /*7*/].f_5 = 3.5f;
	Global_58816[23 /*7*/].f_6 = 0.1f;
	Global_58816[24 /*7*/].f_2 = 1f;
	Global_58816[24 /*7*/].f_1 = 1f;
	Global_58816[24 /*7*/].f_3 = 1000f;
	Global_58816[24 /*7*/].f_4 = 3.5f;
	Global_58816[24 /*7*/].f_5 = 3.5f;
	Global_58816[24 /*7*/].f_6 = 0.1f;
	Global_58816[25 /*7*/].f_2 = 1f;
	Global_58816[25 /*7*/].f_1 = 1f;
	Global_58816[25 /*7*/].f_3 = 1000f;
	Global_58816[25 /*7*/].f_4 = 3.5f;
	Global_58816[25 /*7*/].f_5 = 3.5f;
	Global_58816[25 /*7*/].f_6 = 0.1f;
	Global_58816[26 /*7*/].f_2 = 1f;
	Global_58816[26 /*7*/].f_1 = 1f;
	Global_58816[26 /*7*/].f_3 = 1000f;
	Global_58816[26 /*7*/].f_4 = 3.5f;
	Global_58816[26 /*7*/].f_5 = 3.5f;
	Global_58816[26 /*7*/].f_6 = 0.1f;
	Global_58816[27 /*7*/].f_2 = 1f;
	Global_58816[27 /*7*/].f_1 = 1f;
	Global_58816[27 /*7*/].f_3 = 1000f;
	Global_58816[27 /*7*/].f_4 = 3.5f;
	Global_58816[27 /*7*/].f_5 = 3.5f;
	Global_58816[27 /*7*/].f_6 = 0.1f;
	Global_58816[28 /*7*/].f_2 = 1f;
	Global_58816[28 /*7*/].f_1 = 1f;
	Global_58816[28 /*7*/].f_3 = 1000f;
	Global_58816[28 /*7*/].f_4 = 3.5f;
	Global_58816[28 /*7*/].f_5 = 3.5f;
	Global_58816[28 /*7*/].f_6 = 0.1f;
	Global_58816[29 /*7*/].f_2 = 1f;
	Global_58816[29 /*7*/].f_1 = 1f;
	Global_58816[29 /*7*/].f_3 = 1000f;
	Global_58816[29 /*7*/].f_4 = 3.5f;
	Global_58816[29 /*7*/].f_5 = 3.5f;
	Global_58816[29 /*7*/].f_6 = 0.1f;
	Global_58816[30 /*7*/].f_2 = 1f;
	Global_58816[30 /*7*/].f_1 = 1f;
	Global_58816[30 /*7*/].f_3 = 1000f;
	Global_58816[30 /*7*/].f_4 = 3.5f;
	Global_58816[30 /*7*/].f_5 = 3.5f;
	Global_58816[30 /*7*/].f_6 = 0.1f;
	Global_58816[31 /*7*/].f_2 = 1f;
	Global_58816[31 /*7*/].f_1 = 1f;
	Global_58816[31 /*7*/].f_3 = 1000f;
	Global_58816[31 /*7*/].f_4 = 3.5f;
	Global_58816[31 /*7*/].f_5 = 3.5f;
	Global_58816[31 /*7*/].f_6 = 0.1f;
	Global_58816[32 /*7*/].f_2 = 1f;
	Global_58816[32 /*7*/].f_1 = 1f;
	Global_58816[32 /*7*/].f_3 = 1000f;
	Global_58816[32 /*7*/].f_4 = 3.5f;
	Global_58816[32 /*7*/].f_5 = 3.5f;
	Global_58816[32 /*7*/].f_6 = 0.1f;
	Global_58816[33 /*7*/].f_2 = 1f;
	Global_58816[33 /*7*/].f_1 = 1f;
	Global_58816[33 /*7*/].f_3 = 1000f;
	Global_58816[33 /*7*/].f_4 = 3.5f;
	Global_58816[33 /*7*/].f_5 = 3.5f;
	Global_58816[33 /*7*/].f_6 = 0.1f;
	Global_58816[34 /*7*/].f_2 = 1f;
	Global_58816[34 /*7*/].f_1 = 1f;
	Global_58816[34 /*7*/].f_3 = 1000f;
	Global_58816[34 /*7*/].f_4 = 3.5f;
	Global_58816[34 /*7*/].f_5 = 3.5f;
	Global_58816[34 /*7*/].f_6 = 0.1f;
	Global_58816[35 /*7*/].f_2 = 1f;
	Global_58816[35 /*7*/].f_1 = 1f;
	Global_58816[35 /*7*/].f_3 = 1000f;
	Global_58816[35 /*7*/].f_4 = 3.5f;
	Global_58816[35 /*7*/].f_5 = 3.5f;
	Global_58816[35 /*7*/].f_6 = 0.1f;
	Global_58816[36 /*7*/].f_2 = 1f;
	Global_58816[36 /*7*/].f_1 = 1f;
	Global_58816[36 /*7*/].f_3 = 1000f;
	Global_58816[36 /*7*/].f_4 = 3.5f;
	Global_58816[36 /*7*/].f_5 = 3.5f;
	Global_58816[36 /*7*/].f_6 = 0.1f;
	Global_58816[37 /*7*/].f_2 = 1f;
	Global_58816[37 /*7*/].f_1 = 1f;
	Global_58816[37 /*7*/].f_3 = 1000f;
	Global_58816[37 /*7*/].f_4 = 3.5f;
	Global_58816[37 /*7*/].f_5 = 3.5f;
	Global_58816[37 /*7*/].f_6 = 0.1f;
	Global_58816[38 /*7*/].f_2 = 1f;
	Global_58816[38 /*7*/].f_1 = 1f;
	Global_58816[38 /*7*/].f_3 = 1000f;
	Global_58816[38 /*7*/].f_4 = 3.5f;
	Global_58816[38 /*7*/].f_5 = 3.5f;
	Global_58816[38 /*7*/].f_6 = 0.1f;
	Global_58816[39 /*7*/].f_2 = 1f;
	Global_58816[39 /*7*/].f_1 = 1f;
	Global_58816[39 /*7*/].f_3 = 1000f;
	Global_58816[39 /*7*/].f_4 = 3.5f;
	Global_58816[39 /*7*/].f_5 = 3.5f;
	Global_58816[39 /*7*/].f_6 = 0.1f;
	Global_58816[40 /*7*/].f_2 = 1f;
	Global_58816[40 /*7*/].f_1 = 1f;
	Global_58816[40 /*7*/].f_3 = 1000f;
	Global_58816[40 /*7*/].f_4 = 3.5f;
	Global_58816[40 /*7*/].f_5 = 3.5f;
	Global_58816[40 /*7*/].f_6 = 0.1f;
	Global_59104[0 /*7*/].f_1 = joaat("SM_BRVECDESBFA");
	Global_59104[0 /*7*/] = true;
	Global_59104[1 /*7*/].f_1 = joaat("SM_BRVECDESBRU");
	Global_59104[1 /*7*/] = true;
	Global_59104[3 /*7*/].f_1 = joaat("SM_BRVECDESLSC");
	Global_59104[3 /*7*/] = true;
	Global_59104[4 /*7*/].f_1 = joaat("SM_BRVECDESLST");
	Global_59104[4 /*7*/] = true;
	Global_59104[5 /*7*/].f_1 = joaat("SM_BRVECDESLTD");
	Global_59104[5 /*7*/] = true;
	Global_59104[6 /*7*/].f_1 = joaat("SM_BRVECDESMAI");
	Global_59104[6 /*7*/] = true;
	Global_59104[7 /*7*/].f_1 = joaat("SM_BRVECDESRON");
	Global_59104[7 /*7*/] = true;
	Global_59104[8 /*7*/].f_1 = joaat("SM_BRVECDESSHT");
	Global_59104[8 /*7*/] = true;
	Global_59104[9 /*7*/].f_1 = joaat("SM_BRVECDESUMA");
	Global_59104[9 /*7*/] = true;
	Global_59104[10 /*7*/].f_1 = joaat("SM_BRVECDESVAP");
	Global_59104[10 /*7*/] = true;
	Global_59104[11 /*7*/].f_1 = joaat("SM_BRVECDESHVY");
	Global_59104[11 /*7*/] = true;
	Global_59104[12 /*7*/].f_1 = joaat("SM_VECBUYBFA");
	Global_59104[12 /*7*/] = true;
	Global_59104[13 /*7*/].f_1 = joaat("SM_VECBUYBRU");
	Global_59104[13 /*7*/] = true;
	Global_59104[15 /*7*/].f_1 = joaat("SM_VECBUYMAI");
	Global_59104[15 /*7*/] = true;
	Global_59104[16 /*7*/].f_1 = joaat("SM_VECBUYSHT");
	Global_59104[16 /*7*/] = true;
	Global_59104[17 /*7*/].f_1 = joaat("SM_VECBUYUMA");
	Global_59104[17 /*7*/] = true;
	Global_59104[18 /*7*/].f_1 = joaat("SM_VECBUYVAP");
	Global_59104[18 /*7*/] = true;
	Global_59104[19 /*7*/].f_1 = joaat("SM_VECBUYHVY");
	Global_59104[19 /*7*/] = true;
	Global_59104[20 /*7*/].f_1 = joaat("SM_DISDRIVBFA");
	Global_59104[20 /*7*/] = true;
	Global_59104[21 /*7*/].f_1 = joaat("SM_DISDRIVBRU");
	Global_59104[21 /*7*/] = true;
	Global_59104[23 /*7*/].f_1 = joaat("SM_DISDRIVLST");
	Global_59104[23 /*7*/] = true;
	Global_59104[24 /*7*/].f_1 = joaat("SM_DISDRIVMAI");
	Global_59104[24 /*7*/] = true;
	Global_59104[25 /*7*/].f_1 = joaat("SM_DISDRIVSHT");
	Global_59104[25 /*7*/] = true;
	Global_59104[26 /*7*/].f_1 = joaat("SM_DISDRIVUMA");
	Global_59104[26 /*7*/] = true;
	Global_59104[27 /*7*/].f_1 = joaat("SM_DISDRIVVAP");
	Global_59104[27 /*7*/] = true;
	Global_59104[28 /*7*/].f_1 = joaat("SM_DISDRIVHVY");
	Global_59104[28 /*7*/] = true;
	Global_59104[30 /*7*/].f_1 = joaat("SM_VECMODLSC");
	Global_59104[30 /*7*/] = true;
	Global_59104[31 /*7*/].f_1 = joaat("SM_VECSTOLBFA");
	Global_59104[31 /*7*/] = true;
	Global_59104[32 /*7*/].f_1 = joaat("SM_VECSTOLBRU");
	Global_59104[32 /*7*/] = true;
	Global_59104[34 /*7*/].f_1 = joaat("SM_VECSTOLLST");
	Global_59104[34 /*7*/] = true;
	Global_59104[35 /*7*/].f_1 = joaat("SM_VECSTOLMAI");
	Global_59104[35 /*7*/] = true;
	Global_59104[36 /*7*/].f_1 = joaat("SM_VECSTOLSHT");
	Global_59104[36 /*7*/] = true;
	Global_59104[37 /*7*/].f_1 = joaat("SM_VECSTOLUMA");
	Global_59104[37 /*7*/] = true;
	Global_59104[38 /*7*/].f_1 = joaat("SM_VECSTOLVAP");
	Global_59104[38 /*7*/] = true;
	Global_59104[39 /*7*/].f_1 = joaat("SM_VECSTOLHVY");
	Global_59104[39 /*7*/] = true;
	Global_59104[40 /*7*/].f_1 = joaat("SM_VECDMGBFA");
	Global_59104[40 /*7*/] = true;
	Global_59104[41 /*7*/].f_1 = joaat("SM_VECDMGBRU");
	Global_59104[41 /*7*/] = true;
	Global_59104[43 /*7*/].f_1 = joaat("SM_VECDMGMAI");
	Global_59104[43 /*7*/] = true;
	Global_59104[44 /*7*/].f_1 = joaat("SM_VECDMGSHT");
	Global_59104[44 /*7*/] = true;
	Global_59104[45 /*7*/].f_1 = joaat("SM_VECDMGUMA");
	Global_59104[45 /*7*/] = true;
	Global_59104[46 /*7*/].f_1 = joaat("SM_VECDMGVAP");
	Global_59104[46 /*7*/] = true;
	Global_59104[47 /*7*/].f_1 = joaat("SM_VECDMGHVY");
	Global_59104[47 /*7*/] = true;
	Global_59104[48 /*7*/].f_1 = joaat("SM_VECPEDKIL");
	Global_59104[48 /*7*/] = true;
	Global_59104[49 /*7*/].f_1 = joaat("SM_WEPBUYSHR");
	Global_59104[49 /*7*/] = true;
	Global_59104[50 /*7*/].f_1 = joaat("SM_WEPBUYHAL");
	Global_59104[50 /*7*/] = true;
	Global_59104[51 /*7*/].f_1 = joaat("SM_WEPTAKEVOM");
	Global_59104[51 /*7*/] = true;
	Global_59104[52 /*7*/].f_1 = joaat("SM_WEPTAKESHR");
	Global_59104[52 /*7*/] = true;
	Global_59104[53 /*7*/].f_1 = joaat("SM_WEPTAKEHAL");
	Global_59104[53 /*7*/] = true;
	Global_59104[54 /*7*/].f_1 = joaat("SM_KILCOPVOM");
	Global_59104[54 /*7*/] = true;
	Global_59104[55 /*7*/].f_1 = joaat("SM_KILCOPSHR");
	Global_59104[55 /*7*/] = true;
	Global_59104[56 /*7*/].f_1 = joaat("SM_KILCOPHAL");
	Global_59104[56 /*7*/] = true;
	Global_59104[57 /*7*/].f_1 = joaat("SM_KILCRIMVOM");
	Global_59104[57 /*7*/] = true;
	Global_59104[58 /*7*/].f_1 = joaat("SM_KILCRIMSHR");
	Global_59104[58 /*7*/] = true;
	Global_59104[59 /*7*/].f_1 = joaat("SM_KILCRIMHAL");
	Global_59104[59 /*7*/] = true;
	Global_59104[60 /*7*/].f_1 = joaat("SM_KILCIVMAI");
	Global_59104[60 /*7*/] = true;
	Global_59104[61 /*7*/].f_1 = joaat("SM_KILCIVSHT");
	Global_59104[61 /*7*/] = true;
	Global_59104[62 /*7*/].f_1 = joaat("SM_KILCIVUMA");
	Global_59104[62 /*7*/] = true;
	Global_59104[63 /*7*/].f_1 = joaat("SM_KILCIVVOM");
	Global_59104[63 /*7*/] = true;
	Global_59104[64 /*7*/].f_1 = joaat("SM_KILCIVSHR");
	Global_59104[64 /*7*/] = true;
	Global_59104[65 /*7*/].f_1 = joaat("SM_KILCIVHAL");
	Global_59104[65 /*7*/] = true;
	Global_59104[67 /*7*/].f_1 = joaat("SM_VENUSESPU");
	Global_59104[67 /*7*/] = true;
	Global_59104[68 /*7*/].f_1 = joaat("SM_NEWDAM");
	Global_59104[68 /*7*/] = true;
	Global_59104[69 /*7*/].f_1 = joaat("SM_HPKIL");
	Global_59104[69 /*7*/] = true;
	Global_59104[70 /*7*/].f_1 = joaat("SM_PUBCLUB");
	Global_59104[70 /*7*/] = true;
	Global_59104[71 /*7*/].f_1 = joaat("SM_TDRNK");
	Global_59104[71 /*7*/] = true;
	Global_59104[72 /*7*/].f_1 = joaat("SM_FRNPUB");
	Global_59104[72 /*7*/] = true;
	Global_59104[73 /*7*/].f_1 = joaat("SM_DRNKCRM");
	Global_59104[73 /*7*/] = true;
	Global_59104[74 /*7*/].f_1 = joaat("SM_RAMCOM");
	Global_59104[74 /*7*/] = true;
	Global_59104[76 /*7*/].f_1 = joaat("SM_RADCNT");
	Global_59104[76 /*7*/] = true;
	Global_59104[77 /*7*/].f_1 = joaat("SM_RADWZL");
	Global_59104[77 /*7*/] = true;
	Global_59104[78 /*7*/].f_1 = joaat("SM_RADZIT");
	Global_59104[78 /*7*/] = true;
	Global_59104[81 /*7*/].f_1 = joaat("SM_ZITITCNT");
	Global_59104[81 /*7*/] = true;
	Global_59104[82 /*7*/].f_1 = joaat("SM_ZITITWZL");
	Global_59104[82 /*7*/] = true;
	Global_59104[83 /*7*/].f_1 = joaat("SM_ZITITZIT");
	Global_59104[83 /*7*/] = true;
	Global_59104[84 /*7*/].f_1 = joaat("SM_RADCHACNT");
	Global_59104[84 /*7*/] = true;
	Global_59104[85 /*7*/].f_1 = joaat("SM_RADCHAWZL");
	Global_59104[85 /*7*/] = true;
	Global_59104[88 /*7*/].f_1 = joaat("SM_PARA");
	Global_59104[88 /*7*/] = true;
	Global_59104[89 /*7*/].f_1 = joaat("SM_TKFIRE");
	Global_59104[89 /*7*/] = true;
	Global_59104[90 /*7*/].f_1 = joaat("SM_FIBAI");
	Global_59104[90 /*7*/] = true;
	Global_59104[91 /*7*/].f_1 = joaat("SM_TANDES");
	Global_59104[91 /*7*/] = true;
	Global_59104[92 /*7*/].f_1 = joaat("SM_GAREP");
	Global_59104[92 /*7*/] = true;
	Global_59104[93 /*7*/].f_1 = joaat("SM_GAMONSP");
	Global_59104[93 /*7*/] = true;
	Global_59104[94 /*7*/].f_1 = joaat("SM_MONB");
	Global_59104[94 /*7*/] = true;
	Global_59104[98 /*7*/].f_1 = joaat("SM_MONUPSHK");
	Global_59104[98 /*7*/] = true;
	Global_59104[100 /*7*/].f_1 = joaat("SM_TAXDEST");
	Global_59104[100 /*7*/] = true;
	Global_59104[101 /*7*/].f_1 = joaat("SM_KILWBFA");
	Global_59104[101 /*7*/] = true;
	Global_59104[102 /*7*/].f_1 = joaat("SM_KILWBRU");
	Global_59104[102 /*7*/] = true;
	Global_59104[104 /*7*/].f_1 = joaat("SM_KILWMAI");
	Global_59104[104 /*7*/] = true;
	Global_59104[105 /*7*/].f_1 = joaat("SM_KILWSHT");
	Global_59104[105 /*7*/] = true;
	Global_59104[106 /*7*/].f_1 = joaat("SM_KILWUMA");
	Global_59104[106 /*7*/] = true;
	Global_59104[107 /*7*/].f_1 = joaat("SM_KILWVAP");
	Global_59104[107 /*7*/] = true;
	Global_59104[108 /*7*/].f_1 = joaat("SM_KILWVOM");
	Global_59104[108 /*7*/] = true;
	Global_59104[109 /*7*/].f_1 = joaat("SM_KILWHVY");
	Global_59104[109 /*7*/] = true;
	Global_59104[112 /*7*/].f_1 = joaat("SM_CLOBOFBIN");
	Global_59104[112 /*7*/] = true;
	Global_59104[113 /*7*/].f_1 = joaat("SM_CLOBOFPKW");
	Global_59104[113 /*7*/] = true;
	Global_59104[114 /*7*/].f_1 = joaat("SM_CLOBOFPON");
	Global_59104[114 /*7*/] = true;
	Global_59104[117 /*7*/].f_1 = joaat("SM_YOGA");
	Global_59104[117 /*7*/] = true;
	Global_59104[118 /*7*/].f_1 = joaat("SM_TRI");
	Global_59104[118 /*7*/] = true;
	Global_59104[119 /*7*/].f_1 = joaat("SM_GYM");
	Global_59104[119 /*7*/] = true;
	Global_59104[120 /*7*/].f_1 = joaat("SM_STRIP");
	Global_59104[120 /*7*/] = true;
	Global_59104[121 /*7*/].f_1 = joaat("SM_UGHOK");
	Global_59104[121 /*7*/] = true;
	Global_59104[122 /*7*/].f_1 = joaat("SM_STRTRO");
	Global_59104[122 /*7*/] = true;
	Global_59104[123 /*7*/].f_1 = joaat("SM_PISCO");
	Global_59104[123 /*7*/] = true;
	Global_59104[124 /*7*/].f_1 = joaat("SM_TOTINJ");
	Global_59104[124 /*7*/] = true;
	Global_59104[125 /*7*/].f_1 = joaat("SM_DRUGKIL");
	Global_59104[125 /*7*/] = true;
	Global_59104[126 /*7*/].f_1 = joaat("SM_HANGOVR");
	Global_59104[126 /*7*/] = true;
	Global_59104[127 /*7*/].f_1 = joaat("SM_KILLSPR");
	Global_59104[127 /*7*/] = true;
	Global_59104[129 /*7*/].f_1 = joaat("SM_PEDFIREKILL");
	Global_59104[129 /*7*/] = true;
	Global_59104[130 /*7*/].f_1 = joaat("SM_PEDFIRETICK");
	Global_59104[130 /*7*/] = true;
	Global_59104[131 /*7*/].f_1 = joaat("SM_TVTICKWAP");
	Global_59104[131 /*7*/] = true;
	Global_59104[132 /*7*/].f_1 = joaat("SM_TVTICKWIW");
	Global_59104[132 /*7*/] = true;
	Global_59104[134 /*7*/].f_1 = joaat("SM_ZITPOPZIT");
	Global_59104[134 /*7*/] = true;
	Global_59104[135 /*7*/].f_1 = joaat("SM_CARAPP");
	Global_59104[135 /*7*/] = true;
	Global_59104[137 /*7*/].f_1 = joaat("SM_STOROB");
	Global_59104[137 /*7*/] = true;
	Global_59104[162 /*7*/].f_1 = joaat("SM_PHONCALBDG");
	Global_59104[162 /*7*/] = true;
	Global_59104[163 /*7*/].f_1 = joaat("SM_PHONCALTNK");
	Global_59104[163 /*7*/] = true;
	Global_59104[164 /*7*/].f_1 = joaat("SM_PHONCALWIZ");
	Global_59104[164 /*7*/] = true;
	Global_59104[165 /*7*/].f_1 = joaat("SM_PHONTXTBDG");
	Global_59104[165 /*7*/] = true;
	Global_59104[166 /*7*/].f_1 = joaat("SM_PHONTXTTNK");
	Global_59104[166 /*7*/] = true;
	Global_59104[167 /*7*/].f_1 = joaat("SM_PHONTXTWIZ");
	Global_59104[167 /*7*/] = true;
	Global_59104[168 /*7*/].f_1 = joaat("SM_CHTICKBDG");
	Global_59104[168 /*7*/] = true;
	Global_59104[169 /*7*/].f_1 = joaat("SM_CHTICKTNK");
	Global_59104[169 /*7*/] = true;
	Global_59104[170 /*7*/].f_1 = joaat("SM_CHTICKWIZ");
	Global_59104[170 /*7*/] = true;
	Global_59104[171 /*7*/].f_1 = joaat("SM_CALCANBDG");
	Global_59104[171 /*7*/] = true;
	Global_59104[172 /*7*/].f_1 = joaat("SM_CALCANTNK");
	Global_59104[172 /*7*/] = true;
	Global_59104[173 /*7*/].f_1 = joaat("SM_CALCANWIZ");
	Global_59104[173 /*7*/] = true;
	Global_59104[138 /*7*/].f_2 = 1;
	Global_59104[138 /*7*/].f_3 = joaat("SP0_DIST_WALKING");
	Global_59104[138 /*7*/].f_4 = 1;
	Global_59104[139 /*7*/].f_2 = 1;
	Global_59104[139 /*7*/].f_3 = joaat("SP1_DIST_WALKING");
	Global_59104[139 /*7*/].f_4 = 1;
	Global_59104[140 /*7*/].f_2 = 1;
	Global_59104[140 /*7*/].f_3 = joaat("SP2_DIST_WALKING");
	Global_59104[140 /*7*/].f_4 = 1;
	Global_59104[141 /*7*/].f_2 = 1;
	Global_59104[141 /*7*/].f_3 = joaat("SP0_DIST_DRIVING_BICYCLE");
	Global_59104[141 /*7*/].f_4 = 1;
	Global_59104[142 /*7*/].f_2 = 1;
	Global_59104[142 /*7*/].f_3 = joaat("SP1_DIST_DRIVING_BICYCLE");
	Global_59104[142 /*7*/].f_4 = 1;
	Global_59104[143 /*7*/].f_2 = 1;
	Global_59104[143 /*7*/].f_3 = joaat("SP2_DIST_DRIVING_BICYCLE");
	Global_59104[143 /*7*/].f_4 = 1;
	Global_59104[144 /*7*/].f_2 = 1;
	Global_59104[144 /*7*/].f_3 = joaat("SP0_BAILED_FROM_VEHICLE");
	Global_59104[144 /*7*/].f_4 = 0;
	Global_59104[145 /*7*/].f_2 = 1;
	Global_59104[145 /*7*/].f_3 = joaat("SP1_BAILED_FROM_VEHICLE");
	Global_59104[145 /*7*/].f_4 = 0;
	Global_59104[146 /*7*/].f_2 = 1;
	Global_59104[146 /*7*/].f_3 = joaat("SP2_BAILED_FROM_VEHICLE");
	Global_59104[146 /*7*/].f_4 = 0;
	Global_59104[150 /*7*/].f_2 = 1;
	Global_59104[150 /*7*/].f_3 = joaat("SP0_LARGE_ACCIDENTS");
	Global_59104[150 /*7*/].f_4 = 0;
	Global_59104[151 /*7*/].f_2 = 1;
	Global_59104[151 /*7*/].f_3 = joaat("SP1_LARGE_ACCIDENTS");
	Global_59104[151 /*7*/].f_4 = 0;
	Global_59104[152 /*7*/].f_2 = 1;
	Global_59104[152 /*7*/].f_3 = joaat("SP2_LARGE_ACCIDENTS");
	Global_59104[152 /*7*/].f_4 = 0;
	Global_59104[153 /*7*/].f_2 = 1;
	Global_59104[153 /*7*/].f_3 = joaat("SP0_TOTAL_LEGITIMATE_KILLS");
	Global_59104[153 /*7*/].f_4 = 0;
	Global_59104[154 /*7*/].f_2 = 1;
	Global_59104[154 /*7*/].f_3 = joaat("SP1_TOTAL_LEGITIMATE_KILLS");
	Global_59104[154 /*7*/].f_4 = 0;
	Global_59104[155 /*7*/].f_2 = 1;
	Global_59104[155 /*7*/].f_3 = joaat("SP2_TOTAL_LEGITIMATE_KILLS");
	Global_59104[155 /*7*/].f_4 = 0;
	Global_59104[156 /*7*/].f_2 = 1;
	Global_59104[156 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_TAXIS");
	Global_59104[156 /*7*/].f_4 = 0;
	Global_59104[157 /*7*/].f_2 = 1;
	Global_59104[157 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_TAXIS");
	Global_59104[157 /*7*/].f_4 = 0;
	Global_59104[158 /*7*/].f_2 = 1;
	Global_59104[158 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_TAXIS");
	Global_59104[158 /*7*/].f_4 = 0;
	Global_59104[159 /*7*/].f_2 = 1;
	Global_59104[159 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_ON_HEALTHCARE");
	Global_59104[159 /*7*/].f_4 = 0;
	Global_59104[160 /*7*/].f_2 = 1;
	Global_59104[160 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_ON_HEALTHCARE");
	Global_59104[160 /*7*/].f_4 = 0;
	Global_59104[161 /*7*/].f_2 = 1;
	Global_59104[161 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_ON_HEALTHCARE");
	Global_59104[161 /*7*/].f_4 = 0;
	Global_59104[174 /*7*/].f_2 = 1;
	Global_59104[174 /*7*/].f_3 = joaat("SP0_MONEY_SPENT_IN_COP_BRIBES");
	Global_59104[174 /*7*/].f_4 = 0;
	Global_59104[175 /*7*/].f_2 = 1;
	Global_59104[175 /*7*/].f_3 = joaat("SP1_MONEY_SPENT_IN_COP_BRIBES");
	Global_59104[175 /*7*/].f_4 = 0;
	Global_59104[176 /*7*/].f_2 = 1;
	Global_59104[176 /*7*/].f_3 = joaat("SP2_MONEY_SPENT_IN_COP_BRIBES");
	Global_59104[176 /*7*/].f_4 = 0;
	Global_59104[177 /*7*/].f_2 = 1;
	Global_59104[177 /*7*/].f_3 = joaat("SP0_BUSTED");
	Global_59104[177 /*7*/].f_4 = 0;
	Global_59104[178 /*7*/].f_2 = 1;
	Global_59104[178 /*7*/].f_3 = joaat("SP1_BUSTED");
	Global_59104[178 /*7*/].f_4 = 0;
	Global_59104[179 /*7*/].f_2 = 1;
	Global_59104[179 /*7*/].f_3 = joaat("SP2_BUSTED");
	Global_59104[179 /*7*/].f_4 = 0;
	Global_59104[180 /*7*/].f_2 = 1;
	Global_59104[180 /*7*/].f_3 = joaat("SP0_DIED_IN_FALL");
	Global_59104[180 /*7*/].f_4 = 0;
	Global_59104[181 /*7*/].f_2 = 1;
	Global_59104[181 /*7*/].f_3 = joaat("SP1_DIED_IN_FALL");
	Global_59104[181 /*7*/].f_4 = 0;
	Global_59104[182 /*7*/].f_2 = 1;
	Global_59104[182 /*7*/].f_3 = joaat("SP2_DIED_IN_FALL");
	Global_59104[182 /*7*/].f_4 = 0;
	Global_59104[183 /*7*/].f_2 = 1;
	Global_59104[183 /*7*/].f_3 = joaat("SP0_STARS_ATTAINED");
	Global_59104[183 /*7*/].f_4 = 0;
	Global_59104[184 /*7*/].f_2 = 1;
	Global_59104[184 /*7*/].f_3 = joaat("SP1_STARS_ATTAINED");
	Global_59104[184 /*7*/].f_4 = 0;
	Global_59104[185 /*7*/].f_2 = 1;
	Global_59104[185 /*7*/].f_3 = joaat("SP2_STARS_ATTAINED");
	Global_59104[185 /*7*/].f_4 = 0;
	Global_59104[186 /*7*/].f_2 = 1;
	Global_59104[186 /*7*/].f_3 = joaat("SP0_STARS_EVADED");
	Global_59104[186 /*7*/].f_4 = 0;
	Global_59104[187 /*7*/].f_2 = 1;
	Global_59104[187 /*7*/].f_3 = joaat("SP1_STARS_EVADED");
	Global_59104[187 /*7*/].f_4 = 0;
	Global_59104[188 /*7*/].f_2 = 1;
	Global_59104[188 /*7*/].f_3 = joaat("SP2_STARS_EVADED");
	Global_59104[188 /*7*/].f_4 = 0;
	Global_59104[189 /*7*/].f_2 = 1;
	Global_59104[189 /*7*/].f_3 = joaat("SP0_MANUAL_SAVED");
	Global_59104[189 /*7*/].f_4 = 0;
	Global_59104[190 /*7*/].f_2 = 1;
	Global_59104[190 /*7*/].f_3 = joaat("SP1_MANUAL_SAVED");
	Global_59104[190 /*7*/].f_4 = 0;
	Global_59104[191 /*7*/].f_2 = 1;
	Global_59104[191 /*7*/].f_3 = joaat("SP2_MANUAL_SAVED");
	Global_59104[191 /*7*/].f_4 = 0;
	Global_59104[192 /*7*/].f_2 = 1;
	Global_59104[192 /*7*/].f_3 = joaat("SP0_KILLS_COP");
	Global_59104[192 /*7*/].f_4 = 0;
	Global_59104[193 /*7*/].f_2 = 1;
	Global_59104[193 /*7*/].f_3 = joaat("SP1_KILLS_COP");
	Global_59104[193 /*7*/].f_4 = 0;
	Global_59104[194 /*7*/].f_2 = 1;
	Global_59104[194 /*7*/].f_3 = joaat("SP2_KILLS_COP");
	Global_59104[194 /*7*/].f_4 = 0;
	Global_59104[195 /*7*/].f_2 = 1;
	Global_59104[195 /*7*/].f_3 = joaat("SP0_KILLS_SWAT");
	Global_59104[195 /*7*/].f_4 = 0;
	Global_59104[196 /*7*/].f_2 = 1;
	Global_59104[196 /*7*/].f_3 = joaat("SP1_KILLS_SWAT");
	Global_59104[196 /*7*/].f_4 = 0;
	Global_59104[197 /*7*/].f_2 = 1;
	Global_59104[197 /*7*/].f_3 = joaat("SP2_KILLS_SWAT");
	Global_59104[197 /*7*/].f_4 = 0;
	Global_59104[198 /*7*/].f_2 = 1;
	Global_59104[198 /*7*/].f_3 = joaat("SP0_TIME_IN_COVER");
	Global_59104[198 /*7*/].f_4 = 0;
	Global_59104[199 /*7*/].f_2 = 1;
	Global_59104[199 /*7*/].f_3 = joaat("SP1_TIME_IN_COVER");
	Global_59104[199 /*7*/].f_4 = 0;
	Global_59104[200 /*7*/].f_2 = 1;
	Global_59104[200 /*7*/].f_3 = joaat("SP2_TIME_IN_COVER");
	Global_59104[200 /*7*/].f_4 = 0;
	Global_58542[0 /*7*/] = joaat("SM_PRICE_AMU");
	Global_58542[0 /*7*/].f_3[0] = joaat("AMU_OW0");
	Global_58542[0 /*7*/].f_3[1] = joaat("AMU_OW1");
	Global_58542[0 /*7*/].f_3[2] = joaat("AMU_OW2");
	Global_58542[1 /*7*/] = joaat("SM_PRICE_BDG");
	Global_58542[1 /*7*/].f_3[0] = joaat("BDG_OW0");
	Global_58542[1 /*7*/].f_3[1] = joaat("BDG_OW1");
	Global_58542[1 /*7*/].f_3[2] = joaat("BDG_OW2");
	Global_58542[2 /*7*/] = joaat("SM_PRICE_BFA");
	Global_58542[2 /*7*/].f_3[0] = joaat("BFA_OW0");
	Global_58542[2 /*7*/].f_3[1] = joaat("BFA_OW1");
	Global_58542[2 /*7*/].f_3[2] = joaat("BFA_OW2");
	Global_58542[3 /*7*/] = joaat("SM_PRICE_BIN");
	Global_58542[3 /*7*/].f_3[0] = joaat("BIN_OW0");
	Global_58542[3 /*7*/].f_3[1] = joaat("BIN_OW1");
	Global_58542[3 /*7*/].f_3[2] = joaat("BIN_OW2");
	Global_58542[4 /*7*/] = joaat("SM_PRICE_BTR");
	Global_58542[4 /*7*/].f_3[0] = joaat("BTR_OW0");
	Global_58542[4 /*7*/].f_3[1] = joaat("BTR_OW1");
	Global_58542[4 /*7*/].f_3[2] = joaat("BTR_OW2");
	Global_58542[5 /*7*/] = joaat("SM_PRICE_BLE");
	Global_58542[5 /*7*/].f_3[0] = joaat("BLE_OW0");
	Global_58542[5 /*7*/].f_3[1] = joaat("BLE_OW1");
	Global_58542[5 /*7*/].f_3[2] = joaat("BLE_OW2");
	Global_58542[6 /*7*/] = joaat("SM_PRICE_BRU");
	Global_58542[6 /*7*/].f_3[0] = joaat("BRU_OW0");
	Global_58542[6 /*7*/].f_3[1] = joaat("BRU_OW1");
	Global_58542[6 /*7*/].f_3[2] = joaat("BRU_OW2");
	Global_58542[7 /*7*/] = joaat("SM_PRICE_CNT");
	Global_58542[7 /*7*/].f_3[0] = joaat("CNT_OW0");
	Global_58542[7 /*7*/].f_3[1] = joaat("CNT_OW1");
	Global_58542[7 /*7*/].f_3[2] = joaat("CNT_OW2");
	Global_58542[8 /*7*/] = joaat("SM_PRICE_CRE");
	Global_58542[8 /*7*/].f_3[0] = joaat("CRE_OW0");
	Global_58542[8 /*7*/].f_3[1] = joaat("CRE_OW1");
	Global_58542[8 /*7*/].f_3[2] = joaat("CRE_OW2");
	Global_58542[9 /*7*/] = joaat("SM_PRICE_DGP");
	Global_58542[9 /*7*/].f_3[0] = joaat("DGP_OW0");
	Global_58542[9 /*7*/].f_3[1] = joaat("DGP_OW1");
	Global_58542[9 /*7*/].f_3[2] = joaat("DGP_OW2");
	Global_58542[10 /*7*/] = joaat("SM_PRICE_WAP");
	Global_58542[10 /*7*/].f_3[0] = joaat("WAP_OW0");
	Global_58542[10 /*7*/].f_3[1] = joaat("WAP_OW1");
	Global_58542[10 /*7*/].f_3[2] = joaat("WAP_OW2");
	Global_58542[11 /*7*/] = joaat("SM_PRICE_FAC");
	Global_58542[11 /*7*/].f_3[0] = joaat("FAC_OW0");
	Global_58542[11 /*7*/].f_3[1] = joaat("FAC_OW1");
	Global_58542[11 /*7*/].f_3[2] = joaat("FAC_OW2");
	Global_58542[12 /*7*/] = joaat("SM_PRICE_FRT");
	Global_58542[12 /*7*/].f_3[0] = joaat("FRT_OW0");
	Global_58542[12 /*7*/].f_3[1] = joaat("FRT_OW1");
	Global_58542[12 /*7*/].f_3[2] = joaat("FRT_OW2");
	Global_58542[13 /*7*/] = joaat("SM_PRICE_LSC");
	Global_58542[13 /*7*/].f_3[0] = joaat("LSC_OW0");
	Global_58542[13 /*7*/].f_3[1] = joaat("LSC_OW1");
	Global_58542[13 /*7*/].f_3[2] = joaat("LSC_OW2");
	Global_58542[14 /*7*/] = joaat("SM_PRICE_LST");
	Global_58542[14 /*7*/].f_3[0] = joaat("LST_OW0");
	Global_58542[14 /*7*/].f_3[1] = joaat("LST_OW1");
	Global_58542[14 /*7*/].f_3[2] = joaat("LST_OW2");
	Global_58542[15 /*7*/] = joaat("SM_PRICE_LTD");
	Global_58542[15 /*7*/].f_3[0] = joaat("LTD_OW0");
	Global_58542[15 /*7*/].f_3[1] = joaat("LTD_OW1");
	Global_58542[15 /*7*/].f_3[2] = joaat("LTD_OW2");
	Global_58542[16 /*7*/] = joaat("SM_PRICE_MAI");
	Global_58542[16 /*7*/].f_3[0] = joaat("MAI_OW0");
	Global_58542[16 /*7*/].f_3[1] = joaat("MAI_OW1");
	Global_58542[16 /*7*/].f_3[2] = joaat("MAI_OW2");
	Global_58542[17 /*7*/] = joaat("SM_PRICE_PKW");
	Global_58542[17 /*7*/].f_3[0] = joaat("PKW_OW0");
	Global_58542[17 /*7*/].f_3[1] = joaat("PKW_OW1");
	Global_58542[17 /*7*/].f_3[2] = joaat("PKW_OW2");
	Global_58542[18 /*7*/] = joaat("SM_PRICE_PIS");
	Global_58542[18 /*7*/].f_3[0] = joaat("PIS_OW0");
	Global_58542[18 /*7*/].f_3[1] = joaat("PIS_OW1");
	Global_58542[18 /*7*/].f_3[2] = joaat("PIS_OW2");
	Global_58542[19 /*7*/] = joaat("SM_PRICE_PON");
	Global_58542[19 /*7*/].f_3[0] = joaat("PON_OW0");
	Global_58542[19 /*7*/].f_3[1] = joaat("PON_OW1");
	Global_58542[19 /*7*/].f_3[2] = joaat("PON_OW2");
	Global_58542[20 /*7*/] = joaat("SM_PRICE_RON");
	Global_58542[20 /*7*/].f_3[0] = joaat("RON_OW0");
	Global_58542[20 /*7*/].f_3[1] = joaat("RON_OW1");
	Global_58542[20 /*7*/].f_3[2] = joaat("RON_OW2");
	Global_58542[21 /*7*/] = joaat("SM_PRICE_SHT");
	Global_58542[21 /*7*/].f_3[0] = joaat("SHT_OW0");
	Global_58542[21 /*7*/].f_3[1] = joaat("SHT_OW1");
	Global_58542[21 /*7*/].f_3[2] = joaat("SHT_OW2");
	Global_58542[22 /*7*/] = joaat("SM_PRICE_SPU");
	Global_58542[22 /*7*/].f_3[0] = joaat("SPU_OW0");
	Global_58542[22 /*7*/].f_3[1] = joaat("SPU_OW1");
	Global_58542[22 /*7*/].f_3[2] = joaat("SPU_OW2");
	Global_58542[23 /*7*/] = joaat("SM_PRICE_TNK");
	Global_58542[23 /*7*/].f_3[0] = joaat("TNK_OW0");
	Global_58542[23 /*7*/].f_3[1] = joaat("TNK_OW1");
	Global_58542[23 /*7*/].f_3[2] = joaat("TNK_OW2");
	Global_58542[24 /*7*/] = joaat("SM_PRICE_WIW");
	Global_58542[24 /*7*/].f_3[0] = joaat("WIW_OW0");
	Global_58542[24 /*7*/].f_3[1] = joaat("WIW_OW1");
	Global_58542[24 /*7*/].f_3[2] = joaat("WIW_OW2");
	Global_58542[25 /*7*/] = joaat("SM_PRICE_UMA");
	Global_58542[25 /*7*/].f_3[0] = joaat("UMA_OW0");
	Global_58542[25 /*7*/].f_3[1] = joaat("UMA_OW1");
	Global_58542[25 /*7*/].f_3[2] = joaat("UMA_OW2");
	Global_58542[26 /*7*/] = joaat("SM_PRICE_VAP");
	Global_58542[26 /*7*/].f_3[0] = joaat("VAP_OW0");
	Global_58542[26 /*7*/].f_3[1] = joaat("VAP_OW1");
	Global_58542[26 /*7*/].f_3[2] = joaat("VAP_OW2");
	Global_58542[27 /*7*/] = joaat("SM_PRICE_VOM");
	Global_58542[27 /*7*/].f_3[0] = joaat("VOM_OW0");
	Global_58542[27 /*7*/].f_3[1] = joaat("VOM_OW1");
	Global_58542[27 /*7*/].f_3[2] = joaat("VOM_OW2");
	Global_58542[28 /*7*/] = joaat("SM_PRICE_WZL");
	Global_58542[28 /*7*/].f_3[0] = joaat("WZL_OW0");
	Global_58542[28 /*7*/].f_3[1] = joaat("WZL_OW1");
	Global_58542[28 /*7*/].f_3[2] = joaat("WZL_OW2");
	Global_58542[29 /*7*/] = joaat("SM_PRICE_WIZ");
	Global_58542[29 /*7*/].f_3[0] = joaat("WIZ_OW0");
	Global_58542[29 /*7*/].f_3[1] = joaat("WIZ_OW1");
	Global_58542[29 /*7*/].f_3[2] = joaat("WIZ_OW2");
	Global_58542[30 /*7*/] = joaat("SM_PRICE_ZIT");
	Global_58542[30 /*7*/].f_3[0] = joaat("ZIT_OW0");
	Global_58542[30 /*7*/].f_3[1] = joaat("ZIT_OW1");
	Global_58542[30 /*7*/].f_3[2] = joaat("ZIT_OW2");
	Global_58542[31 /*7*/] = joaat("SM_PRICE_SHK");
	Global_58542[31 /*7*/].f_3[0] = joaat("SHK_OW0");
	Global_58542[31 /*7*/].f_3[1] = joaat("SHK_OW1");
	Global_58542[31 /*7*/].f_3[2] = joaat("SHK_OW2");
	Global_58542[32 /*7*/] = joaat("SM_PRICE_MOL");
	Global_58542[32 /*7*/].f_3[0] = joaat("MOL_OW0");
	Global_58542[32 /*7*/].f_3[1] = joaat("MOL_OW1");
	Global_58542[32 /*7*/].f_3[2] = joaat("MOL_OW2");
	Global_58542[33 /*7*/] = joaat("SM_PRICE_PMP");
	Global_58542[33 /*7*/].f_3[0] = joaat("PMP_OW0");
	Global_58542[33 /*7*/].f_3[1] = joaat("PMP_OW1");
	Global_58542[33 /*7*/].f_3[2] = joaat("PMP_OW2");
	Global_58542[34 /*7*/] = joaat("SM_PRICE_GOT");
	Global_58542[34 /*7*/].f_3[0] = joaat("GOT_OW0");
	Global_58542[34 /*7*/].f_3[1] = joaat("GOT_OW1");
	Global_58542[34 /*7*/].f_3[2] = joaat("GOT_OW2");
	Global_58542[35 /*7*/] = joaat("SM_PRICE_EYE");
	Global_58542[35 /*7*/].f_3[0] = joaat("EYE_OW0");
	Global_58542[35 /*7*/].f_3[1] = joaat("EYE_OW1");
	Global_58542[35 /*7*/].f_3[2] = joaat("EYE_OW2");
	Global_58542[36 /*7*/] = joaat("SM_PRICE_HVY");
	Global_58542[36 /*7*/].f_3[0] = joaat("HVY_OW0");
	Global_58542[36 /*7*/].f_3[1] = joaat("HVY_OW1");
	Global_58542[36 /*7*/].f_3[2] = joaat("HVY_OW2");
	Global_58542[37 /*7*/] = joaat("SM_PRICE_SHR");
	Global_58542[37 /*7*/].f_3[0] = joaat("SHR_OW0");
	Global_58542[37 /*7*/].f_3[1] = joaat("SHR_OW1");
	Global_58542[37 /*7*/].f_3[2] = joaat("SHR_OW2");
	Global_58542[38 /*7*/] = joaat("SM_PRICE_HAL");
	Global_58542[38 /*7*/].f_3[0] = joaat("HAL_OW0");
	Global_58542[38 /*7*/].f_3[1] = joaat("HAL_OW1");
	Global_58542[38 /*7*/].f_3[2] = joaat("HAL_OW2");
	return;
}

void func_99() // Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

