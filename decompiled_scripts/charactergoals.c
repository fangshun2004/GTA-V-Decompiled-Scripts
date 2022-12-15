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
	int iLocal_18 = 0;
	var uLocal_19 = 2;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	BOOL bLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
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

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
		func_51();

	while (true)
	{
		SYSTEM::WAIT(250);
	
		switch (iLocal_18)
		{
			case 0:
				if (uLocal_19[0])
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						Global_22844[3 /*42*/].f_27[0] = func_50(2);
						func_49(2, 32, Global_22844[3 /*42*/].f_27[0]);
					}
				
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[3 /*42*/], _("Earn one million dollars."), 16);
					TEXT_LABEL_ASSIGN_STRING(&(Global_22844[3 /*42*/].f_4), _("Earn one million dollars."), 16);
					Global_22844[3 /*42*/].f_8 = 0;
					Global_22844[3 /*42*/].f_9 = 1;
					TEXT_LABEL_ASSIGN_STRING(&Global_22844[3 /*42*/].f_10[1 /*4*/], _("Current wealth $~1~."), 16);
					Global_22844[3 /*42*/].f_37[1] = 0;
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						Global_22844[3 /*42*/].f_27[1] = func_50(2);
				
					func_42(2, 3, true, 1);
					func_39(_("Current wealth $~1~."), Global_22844[3 /*42*/].f_27[1]);
					iLocal_18 = 1;
				}
				break;
		
			case 1:
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					Global_22844[3 /*42*/].f_27[1] = func_50(2);
				
					if (func_38(2, 999999))
					{
						func_37(_("Goal achieved ~a~"), _("Earn one million dollars."), 2000, 1);
						Global_22844[3 /*42*/].f_37[1] = 1;
						Global_22844[3 /*42*/].f_8 = 1;
						iLocal_24 = MISC::GET_GAME_TIMER();
						iLocal_18 = 2;
					}
					else if (func_38(2, 499999))
					{
						if (!bLocal_22)
						{
							func_36(_("Earn one million dollars."), 2000, 1);
							bLocal_22 = true;
						}
					}
				
					if (uLocal_19[1])
					{
						func_1(2, 32, 500000, false, false);
						uLocal_19[1] = 0;
					}
				}
				break;
		
			case 2:
				iLocal_23 = MISC::GET_GAME_TIMER();
			
				if (iLocal_23 - iLocal_24 < 5000)
					func_39(_("Current wealth $~1~."), Global_22844[3 /*42*/].f_27[1]);
				break;
		}
	}

	return;
}

void func_1(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D5 Hash - 0xD1775FEC ^0xD1775FEC
{
	int outValue;
	Hash statHash;

	if (func_35(iParam0) == 3)
		return;

	if (func_35(iParam0) == 4)
		return;

	func_2(func_35(iParam0), 1, iParam1, iParam2, false);

	if (bParam3)
	{
		outValue = 0;
	
		if (bParam4)
		{
			switch (iParam0)
			{
				case 0:
					statHash = 1762386298;
					break;
			
				case 1:
					statHash = -544246134;
					break;
			
				case 2:
					statHash = -1147816992;
					break;
			
				default:
					return;
			}
		}
		else
		{
			switch (iParam0)
			{
				case 0:
					statHash = 138536943;
					break;
			
				case 1:
					statHash = 691239862;
					break;
			
				case 2:
					statHash = -1133981805;
					break;
			
				default:
					return;
			}
		}
	
		STATS::STAT_GET_INT(statHash, &outValue, -1);
		outValue = outValue + iParam2;
		STATS::STAT_SET_INT(statHash, outValue, true);
	}

	return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A7 Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_34();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_33(99, 1);
					func_32(-656546900, iParam3);
					break;
			
				case 1:
					func_32(-2098183071, iParam3);
					break;
			
				case 2:
					func_32(1578119842, iParam3);
					break;
			}
		
			func_16(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_13(5))
					{
						num = 0.9f;
						num2 = 5;
					}
					break;
			
				case 63:
				case 64:
				case 65:
				case 66:
				case 67:
				case 68:
					switch (iParam0)
					{
						case 0:
							func_32(-1190521599, iParam3);
							break;
					
						case 1:
							func_32(490143716, iParam3);
							break;
					
						case 2:
							func_32(121069433, iParam3);
							break;
					}
				
					if (func_13(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_32(219506691, iParam3);
							break;
					
						case 1:
							func_32(1871505786, iParam3);
							break;
					
						case 2:
							func_32(-2024399847, iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_32(27639974, iParam3);
							break;
					
						case 1:
							func_32(422258364, iParam3);
							break;
					
						case 2:
							func_32(316202960, iParam3);
							break;
					}
					break;
			
				case 99:
				case 100:
				case 101:
				case 102:
				case 104:
				case 105:
				case 106:
				case 107:
				case 108:
				case 109:
				case 110:
				case 111:
				case 112:
				case 113:
					switch (iParam0)
					{
						case 0:
							func_32(1806738963, iParam3);
							break;
					
						case 1:
							func_32(1576781520, iParam3);
							break;
					
						case 2:
							func_32(671882196, iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case -123529621:
							switch (iParam0)
							{
								case 0:
									func_32(408653638, iParam3);
									break;
							
								case 1:
									func_32(-424799277, iParam3);
									break;
							
								case 2:
									func_32(-558138038, iParam3);
									break;
							}
							break;
					
						case -1215733929:
							switch (iParam0)
							{
								case 0:
									func_32(2038531975, iParam3);
									break;
							
								case 1:
									func_32(-572903575, iParam3);
									break;
							
								case 2:
									func_32(-953947924, iParam3);
									break;
							}
						
							if (func_13(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case 468388854:
							switch (iParam0)
							{
								case 0:
									func_32(-445823242, iParam3);
									break;
							
								case 1:
									func_32(-1386757215, iParam3);
									break;
							
								case 2:
									func_32(-727828275, iParam3);
									break;
							}
							break;
					
						case 499562112:
							switch (iParam0)
							{
								case 0:
									func_32(-1744069936, iParam3);
									break;
							
								case 1:
									func_32(799609312, iParam3);
									break;
							
								case 2:
									func_32(181688102, iParam3);
									break;
							}
						
							func_12(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_33(95, iParam3);
					break;
			
				case 1:
					func_33(97, iParam3);
					break;
			
				case 2:
					func_33(96, iParam3);
					break;
			}
		
			func_33(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_5(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_5(num2);
	}

	num6 = Global_60536[num3] + iParam3;

	switch (iParam1)
	{
		case 1:
			if (Global_60536[num3] >= 0 && iParam3 > 0)
				if (num6 <= 0)
					Global_60536[num3] = 2147483647;
				else
					Global_60536[num3] = Global_60536[num3] + iParam3;
		
			switch (iParam0)
			{
				case 0:
					func_32(-330339780, iParam3);
					break;
			
				case 1:
					func_32(1697564429, iParam3);
					break;
			
				case 2:
					func_32(1674823841, iParam3);
					break;
			}
			break;
	
		case 0:
			if (!bParam4)
				if (Global_60536[num3] - iParam3 < 0)
					return 0;
		
			num4 = Global_60536[num3];
			Global_60536[num3] = Global_60536[num3] - iParam3;
		
			if (bParam4)
				num5 = num4;
			break;
	}

	if (iParam2 == 1)
	{
		num5 > 20;
	}
	else
	{
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/] = iParam1;
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_1 = iParam2;
		Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_2 = iParam3;
		Global_113648.f_20566.f_233[num3 /*69*/] = Global_113648.f_20566.f_233[num3 /*69*/] + 1;
		Global_113648.f_20566.f_233[num3 /*69*/].f_1 = Global_113648.f_20566.f_233[num3 /*69*/].f_1 + 1;
	
		if (Global_113648.f_20566.f_233[num3 /*69*/].f_1 > 10)
			Global_113648.f_20566.f_233[num3 /*69*/].f_1 = 0;
	}

	func_4(iParam0);

	if (Global_43257 == 15)
		func_3(false);

	return 1;
}

void func_3(BOOL bParam0) // Position - 0x8A6 Hash - 0xB232D28E ^0x40CAA0C6
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

void func_4(int iParam0) // Position - 0xB28 Hash - 0xD2EB197 ^0x9FF73396
{
	int value;

	value = Global_60536[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(52740893, value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(1153264002, value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(-1921710979, value, true);
			break;
	}

	return;
}

void func_5(int iParam0) // Position - 0xB82 Hash - 0x3705FAD4 ^0x3705FAD4
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		func_11(129, 0, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_11(135, 0, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_11(136, 0, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_11(137, 0, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_8(8272, 0, -1, true, false);
		return;
	}

	if (iParam0 == 13)
	{
		func_8(8273, 0, -1, true, false);
		return;
	}

	if (iParam0 == 14)
	{
		func_8(8274, 0, -1, true, false);
		return;
	}

	if (iParam0 == 15)
	{
		func_8(8275, 0, -1, true, false);
		return;
	}

	if (iParam0 == 16)
	{
		func_8(8276, 0, -1, true, false);
		return;
	}

	if (iParam0 == 17)
	{
		func_8(8277, 0, -1, true, false);
		return;
	}

	flag = false;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0))
		{
			flag = true;
			MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		}
	}
	else if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("You have redeemed your promotion for ~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_6(int iParam0) // Position - 0xCFF Hash - 0x58FC43F1 ^0x58FC43F1
{
	switch (iParam0)
	{
		case 0:
			return _("one free haircut.");
	
		case 1:
			return _("one free tattoo.");
	
		case 2:
			return _("10% off your next purchase at Warstock-Cache-and-Carry.com.");
	
		case 3:
			return _("10 percent off your next purchase at LegendaryMotorsport.net.");
	
		case 4:
			return _("10 percent off your next purchase at ElitasTravel.com.");
	
		case 5:
			return _("10 percent off your next medical expenses.");
	
		case 6:
			return _("one free can of Sprunk.");
	
		case 7:
			return _("one free respray.");
	
		case 8:
			return "COUP_XMAS2017";
	
		case 9:
			return "COUP_CAR_XMAS2018";
	
		case 10:
			return "COUP_HELI_XMAS2018";
	
		case 11:
			return "COUP_CAR2_XMAS2018";
	
		case 12:
			return _("10 percent off your next purchase at ElitasTravel.com.");
	
		case 13:
			return _("10 percent off your next purchase at DockTease.com.");
	
		case 14:
			return _("10 percent off your next purchase at LegendaryMotorsport.net.");
	
		case 15:
			return _("10 percent off your next purchase at southernsanandreassuperautos.com.");
	
		case 16:
			return _("10 percent off your next purchase at Warstock-Cache-and-Carry.com.");
	
		case 17:
			return _("10 percent off your next purchase at pandmcycles.com.");
	
		default:
			break;
	}

	return "";
}

int func_7() // Position - 0xDF3 Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_8(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE00 Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_9(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_9(int iParam0) // Position - 0xE30 Hash - 0x1A3F3220 ^0x1A3F3220
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

int func_10() // Position - 0xE64 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

void func_11(int iParam0, int iParam1, int iParam2) // Position - 0xE70 Hash - 0xCF91FBA1 ^0xC4FE4CB6
{
	if (iParam2 == -1)
		iParam2 = func_10();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
	return;
}

void func_12(int iParam0) // Position - 0xE8E Hash - 0x35B495B7 ^0x35B495B7
{
	func_33(93, iParam0);
	func_33(29, iParam0);
	func_33(30, iParam0);
	return;
}

BOOL func_13(int iParam0) // Position - 0xEAE Hash - 0xA882C352 ^0xA882C352
{
	int cloudTimeAsInt;
	int num;
	int cloudTimeAsInt2;
	int num2;
	int cloudTimeAsInt3;
	int num3;
	int cloudTimeAsInt4;
	int num4;
	int cloudTimeAsInt5;
	int num5;
	int cloudTimeAsInt6;
	int num6;

	if (iParam0 == 8)
		return func_15(129, -1);

	if (iParam0 == 9)
		return func_15(135, -1);

	if (iParam0 == 10)
		return func_15(136, -1);

	if (iParam0 == 11)
		return func_15(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_14(8272, -1, 0);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_14(8273, -1, 0);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_14(8274, -1, 0);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_14(8275, -1, 0);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_14(8276, -1, 0);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_14(8277, -1, 0);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0);
}

int func_14(int iParam0, int iParam1, int iParam2) // Position - 0x1054 Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_9(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

BOOL func_15(int iParam0, int iParam1) // Position - 0x1091 Hash - 0x6099A833 ^0xF5FE5C03
{
	if (iParam1 == -1)
		iParam1 = func_10();

	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_16(BOOL bParam0) // Position - 0x10AD Hash - 0xDC114C70 ^0xC626A2DE
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(-656546900, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(-2098183071, &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(1578119842, &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(-422142831, &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(-422142831, value, true);
		func_31(27, value);
	}

	if (value < 200000000)
		return 0;

	func_17(27, 1);
	return 1;
}

int func_17(int iParam0, int iParam1) // Position - 0x1164 Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_18(iParam0, iParam1);
}

int func_18(int iParam0, int iParam1) // Position - 0x117F Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_30(14) && !func_29(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_28(&Global_4542597))
	{
		if (func_26(&Global_4542597, iParam0))
			return 0;
	
		if (func_19(&Global_4542597, iParam0))
			return 1;
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
			return 0;
	
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
			return 1;
	
		return 0;
	}

	return 0;
}

BOOL func_19(var uParam0, int iParam1) // Position - 0x121C Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_30(14) && !func_29(iParam1))
		return false;

	if (func_26(uParam0, iParam1))
		return false;

	if (func_25(uParam0) < 0f)
		func_24(uParam0, 0);

	func_22(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_20(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_20(var uParam0, int iParam1) // Position - 0x12CD Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_30(14) && !func_29(iParam1))
		return 0;

	if (func_26(uParam0, iParam1))
		return 0;

	if (func_25(uParam0) < 0f)
		func_24(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_21(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_21(var uParam0, int iParam1) // Position - 0x1348 Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_22(var uParam0) // Position - 0x1359 Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_23(uParam0, i);
	}

	func_24(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_23(var uParam0, int iParam1) // Position - 0x138D Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_24(var uParam0, int iParam1) // Position - 0x139D Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_25(var uParam0) // Position - 0x13BA Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_26(var uParam0, int iParam1) // Position - 0x13C6 Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_27(uParam0, iParam1) != -1;
}

int func_27(var uParam0, int iParam1) // Position - 0x13D8 Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_28(var uParam0) // Position - 0x1405 Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_29(int iParam0) // Position - 0x1413 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
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
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_30(int iParam0) // Position - 0x1463 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_31(int iParam0, int iParam1) // Position - 0x1471 Hash - 0x77E0C72A ^0x80DA2A54
{
	int achievementProgress;

	if (iParam0 < 0)
		return false;

	if (iParam0 > 78)
		return false;

	if (iParam1 <= 0 || iParam1 > 100)
		return false;

	achievementProgress = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);

	if (iParam1 > achievementProgress)
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);

	return false;
}

void func_32(Hash hParam0, int iParam1) // Position - 0x14C2 Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_33(int iParam0, int iParam1) // Position - 0x14E5 Hash - 0xE9A65642 ^0xF9847A54
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

void func_34() // Position - 0x1542 Hash - 0xFD5B61DC ^0xBD460DB8
{
	int outValue;

	if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		STATS::STAT_GET_INT(52740893, &outValue, -1);
	
		if (!Global_60536[0] == outValue)
			Global_60536[0] = outValue;
	
		STATS::STAT_GET_INT(1153264002, &outValue, -1);
	
		if (!Global_60536[1] == outValue)
			Global_60536[1] = outValue;
	
		STATS::STAT_GET_INT(-1921710979, &outValue, -1);
	
		if (!Global_60536[2] == outValue)
			Global_60536[2] = outValue;
	}

	return;
}

int func_35(int iParam0) // Position - 0x15B7 Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2028[iParam0 /*29*/].f_17;
}

void func_36(char* sParam0, int iParam1, int iParam2) // Position - 0x15C8 Hash - 0xE15785C1 ^0x9139B094
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
	return;
}

void func_37(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x15E1 Hash - 0x5E266549 ^0xA3BE48A0
{
	iParam3 = iParam3;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
	HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
	return;
}

BOOL func_38(int iParam0, int iParam1) // Position - 0x1600 Hash - 0xA1C73CD ^0xA1C73CD
{
	if (func_50(iParam0) > iParam1)
		return true;

	return false;
}

void func_39(char* sParam0, int iParam1) // Position - 0x161B Hash - 0x623C2646 ^0x8440D968
{
	GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
	func_41(255, 255, 255, 255);
	func_40(0.81f, 0.8f, sParam0, iParam1, 0);
	return;
}

void func_40(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x165E Hash - 0x51E04EF ^0x8FDB7829
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

void func_41(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x167C Hash - 0xF5815B00 ^0x383DE471
{
	HUD::SET_TEXT_SCALE(0.3f, 0.3f);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
	HUD::SET_TEXT_PROPORTIONAL(true);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
	return;
}

int func_42(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16BB Hash - 0xE37F612F ^0xE37F612F
{
	if (func_48())
		return 0;

	if (func_43(iParam0, iParam1, bParam2, iParam3) == 1)
		return 1;

	return 0;
}

int func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16E6 Hash - 0x174E3A23 ^0xAE8B966F
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(693300299) > 0)
		return 0;

	if (func_46() == 0)
	{
		func_45();
		return 0;
	}

	func_44(Global_22843);
	Global_23013[Global_22843 /*9*/].f_1 = iParam1;
	Global_23013[Global_22843 /*9*/] = iParam0;

	if (iParam3 == 0)
	{
	}
	else
	{
		Global_23013[Global_22843 /*9*/].f_8 = iParam3;
	}

	bParam2;
	return 1;
}

void func_44(int iParam0) // Position - 0x174A Hash - 0x19DE445B ^0xD9E1B700
{
	int clockSeconds;
	int clockMinutes;
	int clockHours;
	int clockDayOfMonth;
	int num;
	int clockYear;

	clockSeconds = CLOCK::GET_CLOCK_SECONDS();
	clockMinutes = CLOCK::GET_CLOCK_MINUTES();
	clockHours = CLOCK::GET_CLOCK_HOURS();
	clockDayOfMonth = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	num = CLOCK::GET_CLOCK_MONTH() + 1;
	clockYear = CLOCK::GET_CLOCK_YEAR();
	Global_23013[iParam0 /*9*/].f_2 = clockSeconds;
	Global_23013[iParam0 /*9*/].f_2.f_1 = clockMinutes;
	Global_23013[iParam0 /*9*/].f_2.f_2 = clockHours;
	Global_23013[iParam0 /*9*/].f_2.f_3 = clockDayOfMonth;
	Global_23013[iParam0 /*9*/].f_2.f_4 = num;
	Global_23013[iParam0 /*9*/].f_2.f_5 = clockYear;
	return;
}

void func_45() // Position - 0x17C4 Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_46() // Position - 0x17CC Hash - 0x4A9692DF ^0x96327CFB
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (Global_23013[i /*9*/].f_8 == 0)
		{
			Global_22843 = i;
			return 1;
		}
	}

	i = 0;
	Global_22843 = 3;
	Global_23013[Global_22843 /*9*/].f_2 = -1;
	Global_23013[Global_22843 /*9*/].f_2.f_1 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_2 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_3 = 0;
	Global_23013[Global_22843 /*9*/].f_2.f_5 = 99999;

	while (i < 2)
	{
		if (Global_23013[i /*9*/].f_8 == 0 || Global_23013[i /*9*/].f_8 == 1)
			if (!func_47(Global_23013[i /*9*/].f_2, Global_23013[Global_22843 /*9*/].f_2))
				Global_22843 = i;
	
		i = i + 1;
	}

	if (Global_22843 == 3)
		return 0;

	return 1;
}

BOOL func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x18A6 Hash - 0x87F973EB ^0x688F177D
{
	int num;
	int unk;
	int unk2;
	int unk3;

	if (iParam0.f_5 < iParam6.f_5)
		return false;

	if (iParam0.f_5 > iParam6.f_5)
		return true;

	if (iParam0.f_5 == iParam6.f_5)
	{
		if (iParam0.f_4 < iParam6.f_4)
			return false;
	
		if (iParam0.f_4 > iParam6.f_4)
			return true;
	
		if (iParam0.f_4 == iParam6.f_4)
		{
			num = iParam0;
			num.f_1 = iParam0.f_1 * 60;
			num.f_2 = iParam0.f_2 * 3600;
			num.f_3 = iParam0.f_3 * 86400;
			num3 = num + num.f_1 + num.f_2 + num.f_3;
			num2 = iParam6;
			num2.f_1 = iParam6.f_1 * 60;
			num2.f_2 = iParam6.f_2 * 3600;
			num2.f_3 = iParam6.f_3 * 86400;
			num4 = num2 + num2.f_1 + num2.f_2 + num2.f_3;
		
			if (num3 > num4 || num3 == num4)
				return true;
			else
				return false;
		}
	}

	return false;
}

BOOL func_48() // Position - 0x1991 Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

int func_49(int iParam0, int iParam1, int iParam2) // Position - 0x19B8 Hash - 0x24B6CAA3 ^0x24B6CAA3
{
	if (func_35(iParam0) == 3)
		return 0;

	if (func_35(iParam0) == 4)
		return 0;

	return func_2(func_35(iParam0), 0, iParam1, iParam2, false);
}

int func_50(int iParam0) // Position - 0x19EC Hash - 0x263E14E9 ^0x46FE135B
{
	int outValue;

	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(52740893, &outValue, -1);
			return outValue;
	
		case 1:
			STATS::STAT_GET_INT(1153264002, &outValue, -1);
			return outValue;
	
		case 2:
			STATS::STAT_GET_INT(-1921710979, &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

void func_51() // Position - 0x1A44 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

