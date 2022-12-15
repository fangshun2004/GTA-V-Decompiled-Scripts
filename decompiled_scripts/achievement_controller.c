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
	int iLocal_21 = 0;
	float fLocal_22 = 0f;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	float fLocal_26 = 0f;
	float fLocal_27 = 0f;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	float fLocal_64 = 0f;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	BOOL bLocal_71 = 0;
	int iLocal_72 = 0;
	BOOL bLocal_73 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	int value;

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
	iLocal_21 = 3;
	fLocal_22 = 0f;
	fLocal_26 = -0.0375f;
	fLocal_27 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	iLocal_62 = 1000;
	iLocal_63 = 3333;
	fLocal_64 = 0f;
	bLocal_71 = true;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(32))
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_57 = MISC::GET_GAME_TIMER();
	iLocal_66 = 0;
	func_179(iLocal_67);
	func_178();
	func_176(&Global_4542597);
	func_175(&Global_4542597, 1);
	func_173(&uLocal_68);

	while (true)
	{
		if (Global_32414 != iLocal_66)
		{
			if (iLocal_66 == 0 && Global_32414 != 0)
				if (MISC::IS_PS3_VERSION() || func_172())
					func_171(_("Cheats have been activated. Trophies will not be awarded for the duration of this session."), -1);
				else
					func_171(_("Cheats have been activated. Achievements will not be awarded for the duration of this session."), -1);
		
			iLocal_66 != 0 && Global_32414 == 0;
		}
	
		iLocal_66 = Global_32414;
	
		if (!func_170(14))
		{
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(24))
				func_161();
		
			if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(25))
				func_159();
		
			if (Global_32173)
			{
				if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(12))
				{
					value = func_144(true);
				
					if (value > 0)
					{
						func_143(12, value);
						STATS::STAT_SET_INT(2105240537, value, true);
					}
				
					if (value >= 70)
						func_137(12, 1);
				}
			
				Global_32173 = false;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_67 = iLocal_67 + 1;
				
					if (MISC::GET_GAME_TIMER() > iLocal_57)
					{
						func_126(false);
						iLocal_57 = MISC::GET_GAME_TIMER() + iLocal_62;
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_58)
					{
						if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(14) || iLocal_65 == 1)
							if (func_125(53))
								func_124();
					
						iLocal_58 = MISC::GET_GAME_TIMER() + iLocal_63;
					}
				}
			}
		
			func_116(&Global_4542597);
			func_1();
		}
		else
		{
			func_116(&Global_4542597);
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Position - 0x20A Hash - 0xC8C9213C ^0xC8C9213C
{
	BOOL flag;
	int num;

	if (!func_115(&Global_4542597))
		return;

	if (!Global_78558)
	{
		if (bLocal_73)
			bLocal_73 = false;
	
		return;
	}

	if (!func_112())
		return;

	if (bLocal_71)
	{
		if (!func_110(3, -1))
			return;
	
		if (!func_110(5, -1))
			return;
	}

	if (bLocal_73)
		return;

	flag = SOCIALCLUB::SC_ACHIEVEMENT_INFO_STATUS(&num);
	num == -1 && iLocal_72 == 0;

	if (flag && num == 0)
	{
		func_109();
		bLocal_73 = true;
	}
	else
	{
		func_2();
	}

	return;
}

void func_2() // Position - 0x29A Hash - 0xACF26543 ^0x7AF4DA1B
{
	int num;

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(33))
		if (func_106())
			func_137(33, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
	{
		if (func_102(&uLocal_68) > 5f)
		{
			func_17(PLAYER::PLAYER_PED_ID());
			func_173(&uLocal_68);
		}
	}

	num = func_15(func_16(-1), 0);

	if (num >= 100)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(36))
			func_137(36, 1);

	if (num >= 50)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(35))
			func_137(35, 1);

	if (num >= 25)
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(34))
			func_137(34, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		func_13(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(38))
		if (func_12(-1302220678) >= 5)
			func_137(38, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(39))
		if (func_11(48, -1) >= 10)
			func_137(39, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(40))
		if (func_11(52, -1) > 0)
			func_137(40, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(41))
		if (IS_BIT_SET(Global_2793044.f_2320.f_18, 1))
			func_137(41, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(43))
		if (func_10(756, -1, 0) >= 30)
			func_137(43, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(44))
		if (func_11(14, -1) >= 20)
			func_137(44, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		func_8(false);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(48))
		if (func_7(11, -1))
			func_137(48, 1);

	if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		func_3(false);

	return;
}

int func_3(BOOL bParam0) // Position - 0x439 Hash - 0x211AFFD2 ^0xE00273F3
{
	if (!func_112())
		return 0;

	if (!Global_78558)
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(49))
		return 0;

	bParam0 == true;

	if (!func_4(100, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(102, -1))
	{
		bParam0 == true;
		return 0;
	}

	if (!func_4(101, -1))
	{
		bParam0 == true;
		return 0;
	}

	func_137(49, 1);
	return 1;
}

BOOL func_4(int iParam0, int iParam1) // Position - 0x4B4 Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	BOOL outValue;

	statHash = Global_2848280[iParam0 /*3*/][func_5(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

int func_5(int iParam0) // Position - 0x4E0 Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_6();
	
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

int func_6() // Position - 0x514 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_7(int iParam0, int iParam1) // Position - 0x520 Hash - 0x6099A833 ^0xF5FE5C03
{
	if (iParam1 == -1)
		iParam1 = func_6();

	return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_8(BOOL bParam0) // Position - 0x53C Hash - 0x67FF3ADF ^0x90753EF1
{
	int i;
	int num;
	int num2;

	if (!func_112())
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(45))
		return 0;

	if (!Global_78558)
		return 0;

	num2 = func_10(757, -1, 0);

	for (i = 0; i < 9; i = i + 1)
	{
		if (func_9(num2, i, bParam0))
			num = num + 1;
	}

	if (num == 9)
	{
		func_137(45, 1);
		return 1;
	}

	return 0;
}

BOOL func_9(int iParam0, int iParam1, BOOL bParam2) // Position - 0x5AE Hash - 0x28CF955 ^0x28CF955
{
	BOOL flag;

	flag = IS_BIT_SET(iParam0, iParam1);

	if (!bParam2)
		return flag;

	switch (iParam1)
	{
		case 0:
			return flag;
	
		case 1:
			return flag;
	
		case 2:
			return flag;
	
		case 3:
			return flag;
	
		case 4:
			return flag;
	
		case 5:
			return flag;
	
		case 6:
			return flag;
	
		case 7:
			return flag;
	
		case 8:
			return flag;
	
		default:
		
	}

	return false;
}

int func_10(int iParam0, int iParam1, int iParam2) // Position - 0x633 Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_5(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_11(int iParam0, int iParam1) // Position - 0x670 Hash - 0x1FBC7704 ^0x9A311F48
{
	Hash statHash;
	int outValue;

	statHash = Global_2850192[iParam0 /*3*/][func_5(iParam1)];

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_12(Hash hParam0) // Position - 0x69C Hash - 0x4F1C0EC ^0xC7D84231
{
	Hash statHash;
	int outValue;

	statHash = hParam0;

	if (STATS::STAT_GET_INT(statHash, &outValue, -1))
		return outValue;

	return 0;
}

int func_13(BOOL bParam0) // Position - 0x6BA Hash - 0xFC6598A0 ^0x674522EB
{
	int num;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(37))
		return 0;

	if (!func_112())
		return 0;

	if (!Global_78558)
		return 0;

	if (bParam0)
	{
		num = func_11(21, -1);
		num = num - func_11(58, -1);
		num = num - func_11(57, -1);
	}

	if (func_14(8, -1))
	{
		func_137(37, 1);
		return 1;
	}

	return 0;
}

BOOL func_14(int iParam0, int iParam1) // Position - 0x724 Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	BOOL outValue;

	statHash = Global_2850649[iParam0 /*3*/][func_5(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

int func_15(var uParam0, int iParam1) // Position - 0x750 Hash - 0xDF9AED47 ^0xE2775504
{
	int i;
	int value;
	int value2;
	int num;
	float value3;

	iParam1 == 0;
	value = 8000;
	value2 = 0;
	num = (value - value2) / 2;

	for (i = 0; i <= 100; i = i + 1)
	{
		if (value == value2)
		{
			i = 8000;
		
			if (num == 0)
				num = 1;
		
			return num;
		}
	
		if (Global_297010[num] == uParam0)
		{
			value = num;
			value2 = num;
		}
		else if (Global_297010[num] < uParam0)
		{
			if (value2 == num)
				value2 = value2 + 1;
			else
				value2 = num;
		}
		else if (value == num)
		{
			value = value - 1;
		}
		else
		{
			value = num;
		}
	
		value3 = ((SYSTEM::TO_FLOAT(value) - SYSTEM::TO_FLOAT(value2)) / 2f) + SYSTEM::TO_FLOAT(value2);
		num = SYSTEM::ROUND(value3);
	}

	return 8000;
}

var func_16(int iParam0) // Position - 0x80F Hash - 0xAA63D81C ^0xAA63D81C
{
	return Global_1665638[func_5(iParam0)];
}

void func_17(Ped pedParam0) // Position - 0x823 Hash - 0x65D65A54 ^0xB37942B8
{
	int i;
	int num;

	num = 44;
	num.f_221 = 51;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(29))
		return;

	func_98(pedParam0, &num);
	i = 0;

	for (i = 0; i < num; i = i + 1)
	{
		if (func_18(pedParam0, num[i /*5*/]))
		{
			func_137(29, 1);
			return;
		}
	}

	i = 0;

	for (i = 0; i < num.f_221; i = i + 1)
	{
		if (func_18(pedParam0, num.f_221[i /*5*/]))
		{
			func_137(29, 1);
			return;
		}
	}

	return;
}

BOOL func_18(Ped pedParam0, Hash hParam1) // Position - 0x8B2 Hash - 0x97635306 ^0x4F0EDCC5
{
	var unk;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	Hash unk8;

	if (hParam1 == -61829581)
		return false;

	if (hParam1 == -656458692)
		return false;

	if (PED::IS_PED_INJURED(pedParam0))
		return false;

	if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, hParam1, false))
		return false;

	dlcWeaponIndex = func_97(hParam1, &unk);

	if (hParam1 != 453432689 && hParam1 != 584646201 && hParam1 != 1593441988 && hParam1 != 324215364 && hParam1 != 736523883 && hParam1 != 487013001 && hParam1 != -494615257 && hParam1 != 2017895192 && hParam1 != -1074790547 && hParam1 != -2084633992 && hParam1 != -1357824103 && hParam1 != 100416529 && hParam1 != 205991906 && hParam1 != -1660422300 && hParam1 != 2144741730 && hParam1 != -1568386805 && hParam1 != -572349828 && hParam1 != -270015777 && hParam1 != 392730790 && hParam1 != -1654528753 && hParam1 != -1716589765 && dlcWeaponIndex == -1 || FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex) < 3)
		return false;

	num = 0;
	num2 = 0;
	num3 = 0;
	num4 = 0;

	for (i = 0; func_21(&hash, hParam1, i, false); i = i + 1)
	{
		if (hash.f_4 == -571619404)
			num2 = num2 + 1;
	
		if (hash.f_4 == 196630833)
			num = num + 1;
	
		if (func_19(pedParam0, hParam1, hash))
		{
			if (hash.f_4 == -571619404)
				num4 = hash.f_6;
			else if (hash.f_4 == 196630833)
				num3 = hash.f_6;
		}
		else if (hash.f_4 == -571619404 || hash.f_4 == 196630833 || hash.f_4 == -1843287667 || hash.f_4 == 962500902 || hash.f_4 == -31573710)
		{
		}
		else
		{
			return false;
		}
	}

	if (num > num3)
		return false;

	if (num2 > num4)
		return false;

	if (WEAPON::GET_WEAPON_TINT_COUNT(hParam1) > 0 && WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, hParam1) == 0)
		return false;

	return true;
}

BOOL func_19(Ped pedParam0, Hash hParam1, Hash hParam2) // Position - 0xB32 Hash - 0xE3597E2F ^0x82D72C24
{
	if (func_20(pedParam0))
		return WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, hParam1, hParam2);

	return false;
}

BOOL func_20(Ped pedParam0) // Position - 0xB51 Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

BOOL func_21(var uParam0, Hash hParam1, int iParam2, BOOL bParam3) // Position - 0xB72 Hash - 0x37312C5D ^0xC8D62CC4
{
	int num;
	int unk;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	int unk8;
	int unk9;
	int unk10;
	int unk11;
	int unk12;
	int unk13;
	int unk14;
	int unk15;
	int unk16;
	var unk17;
	int unk18;

	num = 37;
	func_96(uParam0, 0, 989182658, 0, 0);

	switch (hParam1)
	{
		case 453432689:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 453432689, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -19858063, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -316253668, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 899381934, 679107254, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 1709866683, 1863181664, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -684126074, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -19858063, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -316253668, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 899381934, 679107254, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, 1709866683, 1863181664, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -19858063, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -316253668, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, 1709866683, 1863181664, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -684126074, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 1593441988:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 119648377, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -696561875, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 899381934, 679107254, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -1023114086, 1863181664, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, -966439566, 962500902, 1, 0);
					break;
			}
			break;
	
		case 584646201:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 834974250, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 614078421, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1686714580, 962500902, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, 1657753414, 962500902, 2, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 834974250, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 614078421, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1686714580, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 324215364:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -884429072, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 283556395, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, 1215999497, 962500902, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 2012362801, 962500902, 2, 0);
						break;
				
					case 7:
						func_96(uParam0, -1566778158, 962500902, 3, 0);
						break;
				}
			
				if (*uParam0 == -1566778158 && !(func_7(36788, -1) || func_82(-1566778158, 324215364, -1)))
					return false;
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -884429072, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 283556395, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 899381934, 679107254, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, 1215999497, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 736523883:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 736523883, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, 643254679, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, 889808635, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 2043113590, -571619404, 3, 0);
							break;
					
						case 4:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, 1019656791, 196630833, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1023114086, 1863181664, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 663170192, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 643254679, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, 889808635, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 2043113590, -571619404, 3, 0);
							break;
					
						case 3:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 1019656791, 196630833, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1023114086, 1863181664, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 643254679, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 889808635, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 2043113590, -571619404, 3, 0);
						break;
				
					case 3:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, 1019656791, 196630833, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -1023114086, 1863181664, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 663170192, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1074790547:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -1074790547, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -1101075946, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -1323216997, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, -604986051, -571619404, 3, 0);
							break;
					
						case 4:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1657815255, 196630833, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 8:
							func_96(uParam0, 1319990579, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -1101075946, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -1323216997, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, -604986051, -571619404, 3, 0);
							break;
					
						case 3:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1657815255, 196630833, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -1101075946, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -1323216997, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, -604986051, -571619404, 3, 0);
						break;
				
					case 3:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -1657815255, 196630833, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 7:
						func_96(uParam0, 1319990579, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -2084633992:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -2084633992, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -1614924820, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -1861183855, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, -1167922891, -571619404, 3, 0);
							break;
					
						case 4:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 8:
							func_96(uParam0, -660892072, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -1614924820, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -1861183855, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, -1167922891, -571619404, 3, 0);
							break;
					
						case 3:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -1614924820, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -1861183855, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, -1167922891, -571619404, 3, 0);
						break;
				
					case 3:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 7:
						func_96(uParam0, -660892072, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1357824103:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -91250417, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -1899902599, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -1439939148, 196630833, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			
				case 5:
					func_96(uParam0, 930927479, 962500902, 1, 0);
					break;
			}
			break;
	
		case -1660422300:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -197857404, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -2112517305, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 1006677997, 196630833, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -690308418, 962500902, 1, 0);
					break;
			}
			break;
	
		case 2144741730:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 2144741730, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -503336118, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -691692330, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1828795171, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -503336118, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -691692330, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -503336118, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -691692330, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1828795171, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -494615257:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1796727865, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -2034401422, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, -2089531990, 1863181664, 1, 0);
					break;
			}
			break;
	
		case 100416529:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1681506167, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 2:
					func_96(uParam0, -767279652, 196630833, 1, 1);
					break;
			
				case 3:
					func_96(uParam0, -1135289737, 196630833, 2, 0);
					break;
			
				case 4:
					func_96(uParam0, 1077065191, 962500902, 1, 0);
					break;
			}
			break;
	
		case 205991906:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 205991906, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, 1198478068, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -767279652, 196630833, 1, 1);
							break;
					
						case 3:
							func_96(uParam0, -1135289737, 196630833, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1198478068, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -767279652, 196630833, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -1135289737, 196630833, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 1198478068, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -767279652, 196630833, 1, 1);
						break;
				
					case 2:
						func_96(uParam0, -1135289737, 196630833, 2, 0);
						break;
				}
			}
			break;
	
		case -1568386805:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 1:
					func_96(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 2:
					func_96(uParam0, -1439939148, 196630833, 1, 0);
					break;
			}
			break;
	
		case 1119849093:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -924946682, -571619404, 1, 1);
					break;
			}
			break;
	
		case -270015777:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1928132688, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -1152981993, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -1657815255, 196630833, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 5:
					func_96(uParam0, 663517359, 962500902, 1, 0);
					break;
			}
			break;
	
		case -1654528753:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 202788691, -1322016827, 1, 0);
					break;
			
				case 1:
					func_96(uParam0, 2076495324, 679107254, 1, 0);
					break;
			
				case 2:
					func_96(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			}
			break;
	
		case -1716589765:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 580369945, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -640439150, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 899381934, 679107254, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, 2008591151, 962500902, 1, 0);
					break;
			}
			break;
	
		case 2017895192:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -2052698631, 962500902, 1, 0);
					break;
			}
			break;
	
		case 961495388:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -2045758401, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -785724817, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -282298175, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -76490669, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, -1478681000, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1675665560, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 77277509, 1684637069, 3, 0);
					break;
			
				case 13:
					func_96(uParam0, -966040254, 1684637069, 4, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 15:
					func_96(uParam0, -1489156508, 945598191, 2, 0);
					break;
			
				case 16:
					func_96(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 17:
					func_96(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 18:
					func_96(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 19:
					func_96(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 20:
					func_96(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 21:
					func_96(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 22:
					func_96(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 23:
					func_96(uParam0, 1134861606, -1312077031, 1, 1);
					break;
			
				case 24:
					func_96(uParam0, 1447477866, -1312077031, 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_96(uParam0, -1860492113, 962500902, 2, 0);
					break;
			
				case 27:
					func_96(uParam0, 937772107, 962500902, 3, 0);
					break;
			
				case 28:
					func_96(uParam0, 1401650071, 962500902, 4, 0);
					break;
			
				case 29:
					func_96(uParam0, 628662130, 962500902, 5, 0);
					break;
			
				case 30:
					func_96(uParam0, -985047251, 962500902, 6, 0);
					break;
			
				case 31:
					func_96(uParam0, -812944463, 962500902, 7, 0);
					break;
			
				case 32:
					func_96(uParam0, -1447352303, 962500902, 8, 0);
					break;
			
				case 33:
					func_96(uParam0, -60338860, 962500902, 9, 0);
					break;
			
				case 34:
					func_96(uParam0, 2088750491, 962500902, 10, 0);
					break;
			
				case 35:
					func_96(uParam0, -1513913454, 962500902, 11, 0);
					break;
			
				case 36:
					func_96(uParam0, -1179558480, 962500902, 12, 0);
					break;
			}
			break;
	
		case -86904375:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 1283078430, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, 1574296533, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 391640422, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, 1025884839, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 626875735, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1141059345, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 13:
					func_96(uParam0, -966040254, 196630833, 4, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 15:
					func_96(uParam0, -2089531990, 945598191, 2, 0);
					break;
			
				case 16:
					func_96(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 17:
					func_96(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 18:
					func_96(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 19:
					func_96(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 20:
					func_96(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 21:
					func_96(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 22:
					func_96(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 23:
					func_96(uParam0, -2093598721, -1312077031, 1, 1);
					break;
			
				case 24:
					func_96(uParam0, -1958983669, -1312077031, 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_96(uParam0, 1272803094, 962500902, 2, 0);
					break;
			
				case 27:
					func_96(uParam0, 1080719624, 962500902, 3, 0);
					break;
			
				case 28:
					func_96(uParam0, 792221348, 962500902, 4, 0);
					break;
			
				case 29:
					func_96(uParam0, -452181427, 962500902, 5, 0);
					break;
			
				case 30:
					func_96(uParam0, -746774737, 962500902, 6, 0);
					break;
			
				case 31:
					func_96(uParam0, -2044296061, 962500902, 7, 0);
					break;
			
				case 32:
					func_96(uParam0, -199171978, 962500902, 8, 0);
					break;
			
				case 33:
					func_96(uParam0, -1428075016, 962500902, 9, 0);
					break;
			
				case 34:
					func_96(uParam0, -1735153315, 962500902, 10, 0);
					break;
			
				case 35:
					func_96(uParam0, 1796459838, 962500902, 11, 0);
					break;
			
				case 36:
					func_96(uParam0, -631911105, 962500902, 12, 0);
					break;
			}
			break;
	
		case -608341376:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 1227564412, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, 400507625, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -161179835, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -1020871238, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 696788003, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1475288264, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 1060929921, 196630833, 3, 0);
					break;
			
				case 11:
					func_96(uParam0, -966040254, 196630833, 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 13:
					func_96(uParam0, -1181482284, 1863181664, 2, 0);
					break;
			
				case 14:
					func_96(uParam0, -932732805, 1863181664, 3, 0);
					break;
			
				case 15:
					func_96(uParam0, -569259057, 1863181664, 4, 0);
					break;
			
				case 16:
					func_96(uParam0, -326080308, 1863181664, 5, 0);
					break;
			
				case 17:
					func_96(uParam0, 48731514, 1863181664, 6, 0);
					break;
			
				case 18:
					func_96(uParam0, 880736428, 1863181664, 7, 0);
					break;
			
				case 19:
					func_96(uParam0, 1303784126, 1863181664, 8, 0);
					break;
			
				case 20:
					func_96(uParam0, -1018236364, -1312077031, 1, 1);
					break;
			
				case 21:
					func_96(uParam0, -1243457701, -1312077031, 2, 0);
					break;
			
				case 22:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 23:
					func_96(uParam0, 1249283253, 962500902, 2, 0);
					break;
			
				case 24:
					func_96(uParam0, -857707587, 962500902, 3, 0);
					break;
			
				case 25:
					func_96(uParam0, -1097543898, 962500902, 4, 0);
					break;
			
				case 26:
					func_96(uParam0, 1980349969, 962500902, 5, 0);
					break;
			
				case 27:
					func_96(uParam0, 1219453777, 962500902, 6, 0);
					break;
			
				case 28:
					func_96(uParam0, -1853459190, 962500902, 7, 0);
					break;
			
				case 29:
					func_96(uParam0, -2074781016, 962500902, 8, 0);
					break;
			
				case 30:
					func_96(uParam0, 457967755, 962500902, 9, 0);
					break;
			
				case 31:
					func_96(uParam0, 235171324, 962500902, 10, 0);
					break;
			
				case 32:
					func_96(uParam0, 42685294, 962500902, 11, 0);
					break;
			
				case 33:
					func_96(uParam0, -687617715, 962500902, 12, 0);
					break;
			}
			break;
	
		case 177293209:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -98690520, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, 752418717, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 247526935, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -130689324, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 1005144310, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, -1981031769, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, -2101279869, 196630833, 1, 0);
					break;
			
				case 7:
					func_96(uParam0, -1135289737, 196630833, 2, 1);
					break;
			
				case 8:
					func_96(uParam0, -1233121104, 196630833, 3, 0);
					break;
			
				case 9:
					func_96(uParam0, 776198721, 196630833, 4, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, -1404903567, 1863181664, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 1602080333, 1863181664, 3, 0);
					break;
			
				case 13:
					func_96(uParam0, 1764221345, 1863181664, 4, 0);
					break;
			
				case 14:
					func_96(uParam0, -1869205321, -1312077031, 1, 1);
					break;
			
				case 15:
					func_96(uParam0, 277524638, -1312077031, 2, 0);
					break;
			
				case 16:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 17:
					func_96(uParam0, -130843390, 962500902, 2, 0);
					break;
			
				case 18:
					func_96(uParam0, -977347227, 962500902, 3, 0);
					break;
			
				case 19:
					func_96(uParam0, -378461067, 962500902, 4, 0);
					break;
			
				case 20:
					func_96(uParam0, 329939175, 962500902, 5, 0);
					break;
			
				case 21:
					func_96(uParam0, 643374672, 962500902, 6, 0);
					break;
			
				case 22:
					func_96(uParam0, 807875052, 962500902, 7, 0);
					break;
			
				case 23:
					func_96(uParam0, -1401804168, 962500902, 8, 0);
					break;
			
				case 24:
					func_96(uParam0, -1096495395, 962500902, 9, 0);
					break;
			
				case 25:
					func_96(uParam0, -847811454, 962500902, 10, 0);
					break;
			
				case 26:
					func_96(uParam0, -1413108537, 962500902, 11, 0);
					break;
			
				case 27:
					func_96(uParam0, 1815270123, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1075685676:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1795936926, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, 1591132456, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 634039983, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, 733837882, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, -2046910199, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1329061674, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, -1898661008, 196630833, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 1140676955, 679107254, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, 1709866683, 1863181664, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 568543123, 1863181664, 3, 0);
					break;
			
				case 13:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 14:
					func_96(uParam0, 1550611612, 962500902, 2, 0);
					break;
			
				case 15:
					func_96(uParam0, 368550800, 962500902, 3, 0);
					break;
			
				case 16:
					func_96(uParam0, -1769069349, 962500902, 4, 0);
					break;
			
				case 17:
					func_96(uParam0, 24902297, 962500902, 5, 0);
					break;
			
				case 18:
					func_96(uParam0, -228041614, 962500902, 6, 0);
					break;
			
				case 19:
					func_96(uParam0, -584961562, 962500902, 7, 0);
					break;
			
				case 20:
					func_96(uParam0, -1153175946, 962500902, 8, 0);
					break;
			
				case 21:
					func_96(uParam0, 1301287696, 962500902, 9, 0);
					break;
			
				case 22:
					func_96(uParam0, 1597093459, 962500902, 10, 0);
					break;
			
				case 23:
					func_96(uParam0, 1769871776, 962500902, 11, 0);
					break;
			
				case 24:
					func_96(uParam0, -1827882671, 962500902, 12, 0);
					break;
			
				case 25:
					func_96(uParam0, 1141184690, 962500902, 13, 0);
					break;
			}
		
			if (*uParam0 == 1141184690 && !func_7(36786, -1))
				return false;
			break;
	
		case 2024373456:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 1277460590, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -1182573778, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 2146055916, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -644734235, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 974903034, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 190476639, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, -1613015470, 196630833, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, -452809877, 196630833, 3, 0);
					break;
			
				case 11:
					func_96(uParam0, 1038927834, 196630833, 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 13:
					func_96(uParam0, -1023114086, 945598191, 1, 0);
					break;
			
				case 14:
					func_96(uParam0, -1181482284, 945598191, 2, 0);
					break;
			
				case 15:
					func_96(uParam0, -932732805, 945598191, 3, 0);
					break;
			
				case 16:
					func_96(uParam0, -569259057, 945598191, 4, 0);
					break;
			
				case 17:
					func_96(uParam0, -326080308, 945598191, 5, 0);
					break;
			
				case 18:
					func_96(uParam0, 48731514, 945598191, 6, 0);
					break;
			
				case 19:
					func_96(uParam0, 880736428, 945598191, 7, 0);
					break;
			
				case 20:
					func_96(uParam0, 1303784126, 945598191, 8, 0);
					break;
			
				case 21:
					func_96(uParam0, -653246751, -1312077031, 1, 1);
					break;
			
				case 22:
					func_96(uParam0, -1520117877, -1312077031, 2, 0);
					break;
			
				case 23:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 24:
					func_96(uParam0, -996700057, 962500902, 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 940943685, 962500902, 3, 0);
					break;
			
				case 26:
					func_96(uParam0, 1263226800, 962500902, 4, 0);
					break;
			
				case 27:
					func_96(uParam0, -328035840, 962500902, 5, 0);
					break;
			
				case 28:
					func_96(uParam0, 1224100642, 962500902, 6, 0);
					break;
			
				case 29:
					func_96(uParam0, 899228776, 962500902, 7, 0);
					break;
			
				case 30:
					func_96(uParam0, 616006309, 962500902, 8, 0);
					break;
			
				case 31:
					func_96(uParam0, -1561952511, 962500902, 9, 0);
					break;
			
				case 32:
					func_96(uParam0, 572063080, 962500902, 10, 0);
					break;
			
				case 33:
					func_96(uParam0, 1170588613, 962500902, 11, 0);
					break;
			
				case 34:
					func_96(uParam0, 966612367, 962500902, 12, 0);
					break;
			}
			break;
	
		case 487013001:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 487013001, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 2:
							func_96(uParam0, -435637410, 1863181664, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, -1562927653, 962500902, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -242322891, 962500902, 2, 0);
							break;
					
						case 5:
							func_96(uParam0, 330905451, 962500902, 3, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 2076495324, 679107254, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -435637410, 1863181664, 1, 0);
							break;
					
						case 2:
							func_96(uParam0, -1562927653, 962500902, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 1:
						func_96(uParam0, -435637410, 1863181664, 1, 0);
						break;
				
					case 2:
						func_96(uParam0, -1562927653, 962500902, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -242322891, 962500902, 2, 0);
						break;
				
					case 4:
						func_96(uParam0, 330905451, 962500902, 3, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 1:
						func_96(uParam0, -435637410, 1863181664, 1, 0);
						break;
				
					case 2:
						func_96(uParam0, -1562927653, 962500902, 1, 0);
						break;
				}
			}
		
			if (*uParam0 == 330905451 && !(func_7(36787, -1) || func_82(330905451, 487013001, -1)))
				return false;
			break;
	
		case -1063057011:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -1063057011, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -959978111, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, 2089537806, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 1801039530, -571619404, 3, 0);
							break;
					
						case 4:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 8:
							func_96(uParam0, 1929467122, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -959978111, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, 2089537806, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 1801039530, -571619404, 3, 0);
							break;
					
						case 3:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -1596416958, 196630833, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -1489156508, 1863181664, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 1929467122, 962500902, 1, 0);
							break;
					
						case 8:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -959978111, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 2089537806, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 1801039530, -571619404, 3, 0);
						break;
				
					case 3:
						func_96(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -1596416958, 196630833, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -1489156508, 1863181664, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 7:
						func_96(uParam0, 1929467122, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1076751822:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -1076751822, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -125817127, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, 2063610803, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, -2144080721, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -125817127, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, 2063610803, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, -2144080721, 962500902, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -125817127, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 2063610803, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, -2144080721, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -952879014:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -952879014, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -667205311, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -855823675, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 471997210, 196630833, 1, 1);
							break;
					
						case 4:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 371102273, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -667205311, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -855823675, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 471997210, 196630833, 1, 1);
							break;
					
						case 3:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, 371102273, 962500902, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -667205311, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -855823675, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 471997210, 196630833, 1, 1);
						break;
				
					case 3:
						func_96(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 371102273, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case -1045183535:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, -1045183535, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -377062173, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, 384708672, 962500902, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, -1802258419, 962500902, 2, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -377062173, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, 384708672, 962500902, 1, 0);
							break;
					
						case 2:
							func_96(uParam0, -1802258419, 962500902, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -377062173, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 384708672, 962500902, 1, 0);
						break;
				
					case 2:
						func_96(uParam0, -1802258419, 962500902, 2, 0);
						break;
				}
			}
			break;
	
		case 2132975508:
			if (func_95(iLocal_55))
			{
				if (!func_92(1623028892, 2132975508, -1))
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					
						case 1:
							func_96(uParam0, -979292288, -571619404, 1, 1);
							break;
					
						case 2:
							func_96(uParam0, -1284994289, -571619404, 2, 0);
							break;
					
						case 3:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -1439939148, 196630833, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, -1470645128, 962500902, 1, 0);
							break;
					}
				}
				else
				{
					switch (iParam2)
					{
						case 0:
							func_96(uParam0, -979292288, -571619404, 1, 1);
							break;
					
						case 1:
							func_96(uParam0, -1284994289, -571619404, 2, 0);
							break;
					
						case 2:
							func_96(uParam0, 2076495324, 953267555, 1, 0);
							break;
					
						case 3:
							func_96(uParam0, -1439939148, 196630833, 1, 0);
							break;
					
						case 4:
							func_96(uParam0, -2089531990, 1863181664, 1, 0);
							break;
					
						case 5:
							func_96(uParam0, 202788691, -1322016827, 1, 0);
							break;
					
						case 6:
							func_96(uParam0, -1470645128, 962500902, 1, 0);
							break;
					
						case 7:
							func_96(uParam0, 1623028892, -31573710, 1, 0);
							break;
					}
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, -979292288, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, -1284994289, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, 2076495324, 953267555, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1439939148, 196630833, 1, 0);
						break;
				
					case 4:
						func_96(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, -1470645128, 962500902, 1, 0);
						break;
				}
			}
			break;
	
		case 1432025498:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -845938367, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -1618338827, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -380098265, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, 1315288101, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 1004815965, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 6:
					func_96(uParam0, 2076495324, -1572840598, 2, 0);
					break;
			
				case 7:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 8:
					func_96(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 9:
					func_96(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 10:
					func_96(uParam0, 1060929921, 196630833, 4, 0);
					break;
			
				case 11:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 12:
					func_96(uParam0, -1404903567, 1863181664, 2, 0);
					break;
			
				case 13:
					func_96(uParam0, 1602080333, 1863181664, 3, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 15:
					func_96(uParam0, -474112444, 962500902, 2, 0);
					break;
			
				case 16:
					func_96(uParam0, 387223451, 962500902, 3, 0);
					break;
			
				case 17:
					func_96(uParam0, 617753366, 962500902, 4, 0);
					break;
			
				case 18:
					func_96(uParam0, -222378256, 962500902, 5, 0);
					break;
			
				case 19:
					func_96(uParam0, 8741501, 962500902, 6, 0);
					break;
			
				case 20:
					func_96(uParam0, -601286203, 962500902, 7, 0);
					break;
			
				case 21:
					func_96(uParam0, -511433605, 962500902, 8, 0);
					break;
			
				case 22:
					func_96(uParam0, -655387818, 962500902, 9, 0);
					break;
			
				case 23:
					func_96(uParam0, -282476598, 962500902, 10, 0);
					break;
			
				case 24:
					func_96(uParam0, 1739501925, 962500902, 11, 0);
					break;
			
				case 25:
					func_96(uParam0, 1178671645, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1768145561:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 382112385, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -568352468, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -2023373174, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -570355066, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 1362433589, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1346235024, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 77277509, 1684637069, 3, 0);
					break;
			
				case 11:
					func_96(uParam0, -966040254, 1684637069, 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 13:
					func_96(uParam0, -1489156508, 1863181664, 2, 0);
					break;
			
				case 14:
					func_96(uParam0, -1181482284, 1863181664, 3, 0);
					break;
			
				case 15:
					func_96(uParam0, -932732805, 1863181664, 4, 0);
					break;
			
				case 16:
					func_96(uParam0, -569259057, 1863181664, 5, 0);
					break;
			
				case 17:
					func_96(uParam0, -326080308, 1863181664, 6, 0);
					break;
			
				case 18:
					func_96(uParam0, 48731514, 1863181664, 7, 0);
					break;
			
				case 19:
					func_96(uParam0, 880736428, 1863181664, 8, 0);
					break;
			
				case 20:
					func_96(uParam0, 1303784126, 1863181664, 9, 0);
					break;
			
				case 21:
					func_96(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 22:
					func_96(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 23:
					func_96(uParam0, -415870039, -1312077031, 1, 1);
					break;
			
				case 24:
					func_96(uParam0, -109086661, -1312077031, 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_96(uParam0, -737430213, 962500902, 2, 0);
					break;
			
				case 27:
					func_96(uParam0, 1125852043, 962500902, 3, 0);
					break;
			
				case 28:
					func_96(uParam0, 886015732, 962500902, 4, 0);
					break;
			
				case 29:
					func_96(uParam0, -1262287139, 962500902, 5, 0);
					break;
			
				case 30:
					func_96(uParam0, -295208411, 962500902, 6, 0);
					break;
			
				case 31:
					func_96(uParam0, -544154504, 962500902, 7, 0);
					break;
			
				case 32:
					func_96(uParam0, 172765678, 962500902, 8, 0);
					break;
			
				case 33:
					func_96(uParam0, -1982877449, 962500902, 9, 0);
					break;
			
				case 34:
					func_96(uParam0, 2072122460, 962500902, 10, 0);
					break;
			
				case 35:
					func_96(uParam0, -1986220171, 962500902, 11, 0);
					break;
			
				case 36:
					func_96(uParam0, 1377355801, 962500902, 12, 0);
					break;
			}
			break;
	
		case -2009644972:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 21392614, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -829683854, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -1876057490, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -424845447, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, -1928301566, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, -1055790298, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, -1572840598, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, 1246324211, -1572840598, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 1205768792, 196630833, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, 1709866683, 945598191, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, -1434287169, 945598191, 3, 0);
					break;
			
				case 13:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 14:
					func_96(uParam0, 259780317, 962500902, 2, 0);
					break;
			
				case 15:
					func_96(uParam0, -1973342474, 962500902, 3, 0);
					break;
			
				case 16:
					func_96(uParam0, 1996130345, 962500902, 4, 0);
					break;
			
				case 17:
					func_96(uParam0, -1455657812, 962500902, 5, 0);
					break;
			
				case 18:
					func_96(uParam0, -1668263084, 962500902, 6, 0);
					break;
			
				case 19:
					func_96(uParam0, 1308243489, 962500902, 7, 0);
					break;
			
				case 20:
					func_96(uParam0, 1122574335, 962500902, 8, 0);
					break;
			
				case 21:
					func_96(uParam0, 1420313469, 962500902, 9, 0);
					break;
			
				case 22:
					func_96(uParam0, 109848390, 962500902, 10, 0);
					break;
			
				case 23:
					func_96(uParam0, 593945703, 962500902, 11, 0);
					break;
			
				case 24:
					func_96(uParam0, 1142457062, 962500902, 12, 0);
					break;
			}
			break;
	
		case 1785463520:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1797182002, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -422587990, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -679861550, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, 1842849902, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, -193998727, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, -515203373, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 9:
					func_96(uParam0, -966040254, 1684637069, 3, 0);
					break;
			
				case 10:
					func_96(uParam0, 1528590652, 1684637069, 4, 1);
					break;
			
				case 11:
					func_96(uParam0, 0, 945598191, 1, 1);
					break;
			
				case 12:
					func_96(uParam0, -2089531990, 945598191, 2, 0);
					break;
			
				case 13:
					func_96(uParam0, -1181482284, 945598191, 3, 0);
					break;
			
				case 14:
					func_96(uParam0, -932732805, 945598191, 4, 0);
					break;
			
				case 15:
					func_96(uParam0, -569259057, 945598191, 5, 0);
					break;
			
				case 16:
					func_96(uParam0, -326080308, 945598191, 6, 0);
					break;
			
				case 17:
					func_96(uParam0, 48731514, 945598191, 7, 0);
					break;
			
				case 18:
					func_96(uParam0, 880736428, 945598191, 8, 0);
					break;
			
				case 19:
					func_96(uParam0, 1303784126, 945598191, 9, 0);
					break;
			
				case 20:
					func_96(uParam0, 0, -546751811, 1, 1);
					break;
			
				case 21:
					func_96(uParam0, -1654288262, -546751811, 2, 0);
					break;
			
				case 22:
					func_96(uParam0, 941317513, -1312077031, 1, 1);
					break;
			
				case 23:
					func_96(uParam0, 1748450780, -1312077031, 2, 0);
					break;
			
				case 24:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 25:
					func_96(uParam0, -1869284448, 962500902, 2, 0);
					break;
			
				case 26:
					func_96(uParam0, 1931539634, 962500902, 3, 0);
					break;
			
				case 27:
					func_96(uParam0, 1624199183, 962500902, 4, 0);
					break;
			
				case 28:
					func_96(uParam0, -26834113, 962500902, 5, 0);
					break;
			
				case 29:
					func_96(uParam0, -210406055, 962500902, 6, 0);
					break;
			
				case 30:
					func_96(uParam0, 423313640, 962500902, 7, 0);
					break;
			
				case 31:
					func_96(uParam0, 276639596, 962500902, 8, 0);
					break;
			
				case 32:
					func_96(uParam0, -991356863, 962500902, 9, 0);
					break;
			
				case 33:
					func_96(uParam0, -1682848301, 962500902, 10, 0);
					break;
			
				case 34:
					func_96(uParam0, 996213771, 962500902, 11, 0);
					break;
			
				case 35:
					func_96(uParam0, -1214048550, 962500902, 12, 0);
					break;
			}
			break;
	
		case -879347409:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -1172055874, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -958864266, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, 15712037, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, 284438159, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, 231258687, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 0, 196630833, 1, 1);
					break;
			
				case 6:
					func_96(uParam0, 1108334355, 196630833, 2, 0);
					break;
			
				case 7:
					func_96(uParam0, 77277509, 196630833, 3, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 899381934, 679107254, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 11:
					func_96(uParam0, 654802123, 1863181664, 2, 0);
					break;
			
				case 12:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 13:
					func_96(uParam0, -1069552225, 962500902, 2, 0);
					break;
			
				case 14:
					func_96(uParam0, 11918884, 962500902, 3, 0);
					break;
			
				case 15:
					func_96(uParam0, 176157112, 962500902, 4, 0);
					break;
			
				case 16:
					func_96(uParam0, -220052855, 962500902, 5, 0);
					break;
			
				case 17:
					func_96(uParam0, 288456487, 962500902, 6, 0);
					break;
			
				case 18:
					func_96(uParam0, 398658626, 962500902, 7, 0);
					break;
			
				case 19:
					func_96(uParam0, 628697006, 962500902, 8, 0);
					break;
			
				case 20:
					func_96(uParam0, 925911836, 962500902, 9, 0);
					break;
			
				case 21:
					func_96(uParam0, 1222307441, 962500902, 10, 0);
					break;
			
				case 22:
					func_96(uParam0, 552442715, 962500902, 11, 0);
					break;
			
				case 23:
					func_96(uParam0, -648943513, 962500902, 12, 0);
					break;
			}
			break;
	
		case -2066285827:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 25766362, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -273676760, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -2111807319, -571619404, 3, 0);
					break;
			
				case 3:
					func_96(uParam0, -1449330342, -571619404, 4, 0);
					break;
			
				case 4:
					func_96(uParam0, -89655827, -571619404, 5, 0);
					break;
			
				case 5:
					func_96(uParam0, 1130501904, -571619404, 6, 0);
					break;
			
				case 6:
					func_96(uParam0, 0, 679107254, 1, 1);
					break;
			
				case 7:
					func_96(uParam0, 2076495324, 679107254, 2, 0);
					break;
			
				case 8:
					func_96(uParam0, 0, 1684637069, 1, 1);
					break;
			
				case 9:
					func_96(uParam0, 1108334355, 1684637069, 2, 0);
					break;
			
				case 10:
					func_96(uParam0, -944910075, 1684637069, 3, 0);
					break;
			
				case 11:
					func_96(uParam0, 1060929921, 1684637069, 4, 0);
					break;
			
				case 12:
					func_96(uParam0, 1704640795, -1312077031, 1, 1);
					break;
			
				case 13:
					func_96(uParam0, 1005743559, -1312077031, 2, 0);
					break;
			
				case 14:
					func_96(uParam0, 0, 1863181664, 1, 1);
					break;
			
				case 15:
					func_96(uParam0, -2089531990, 1863181664, 2, 0);
					break;
			
				case 16:
					func_96(uParam0, -1181482284, 1863181664, 3, 0);
					break;
			
				case 17:
					func_96(uParam0, -932732805, 1863181664, 4, 0);
					break;
			
				case 18:
					func_96(uParam0, -569259057, 1863181664, 5, 0);
					break;
			
				case 19:
					func_96(uParam0, -326080308, 1863181664, 6, 0);
					break;
			
				case 20:
					func_96(uParam0, 48731514, 1863181664, 7, 0);
					break;
			
				case 21:
					func_96(uParam0, 880736428, 1863181664, 8, 0);
					break;
			
				case 22:
					func_96(uParam0, 1303784126, 1863181664, 9, 0);
					break;
			
				case 23:
					func_96(uParam0, 0, -1322016827, 1, 1);
					break;
			
				case 24:
					func_96(uParam0, -1654288262, -1322016827, 2, 0);
					break;
			
				case 25:
					func_96(uParam0, 0, 962500902, 1, 1);
					break;
			
				case 26:
					func_96(uParam0, -1371515465, 962500902, 2, 0);
					break;
			
				case 27:
					func_96(uParam0, -1190793877, 962500902, 3, 0);
					break;
			
				case 28:
					func_96(uParam0, -1497085720, 962500902, 4, 0);
					break;
			
				case 29:
					func_96(uParam0, -1803148180, 962500902, 5, 0);
					break;
			
				case 30:
					func_96(uParam0, -1975971886, 962500902, 6, 0);
					break;
			
				case 31:
					func_96(uParam0, 36929477, 962500902, 7, 0);
					break;
			
				case 32:
					func_96(uParam0, -268444834, 962500902, 8, 0);
					break;
			
				case 33:
					func_96(uParam0, -574769446, 962500902, 9, 0);
					break;
			
				case 34:
					func_96(uParam0, -882699739, 962500902, 10, 0);
					break;
			
				case 35:
					func_96(uParam0, -1468181474, 962500902, 11, 0);
					break;
			
				case 36:
					func_96(uParam0, -974541230, 962500902, 12, 0);
					break;
			}
			break;
	
		case -1355376991:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, -673450233, 962500902, 1, 0);
					break;
			}
			break;
	
		case 727643628:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 1423184737, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -2122814295, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -1828202758, 1863181664, 1, 0);
					break;
			}
			break;
	
		case -947031628:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 1525977990, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 1824470811, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, -1277049774, 196630833, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1596416958, 196630833, 2, 0);
						break;
				
					case 4:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				
					case 7:
						func_96(uParam0, -325063463, 962500902, 1, 0);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_96(uParam0, 1525977990, -571619404, 1, 1);
						break;
				
					case 1:
						func_96(uParam0, 1824470811, -571619404, 2, 0);
						break;
				
					case 2:
						func_96(uParam0, -1277049774, 196630833, 1, 0);
						break;
				
					case 3:
						func_96(uParam0, -1596416958, 196630833, 2, 0);
						break;
				
					case 4:
						func_96(uParam0, 2076495324, 679107254, 1, 0);
						break;
				
					case 5:
						func_96(uParam0, -2089531990, 1863181664, 1, 0);
						break;
				
					case 6:
						func_96(uParam0, 202788691, -1322016827, 1, 0);
						break;
				}
			}
			break;
	
		case -774507221:
			switch (iParam2)
			{
				case 0:
					func_96(uParam0, 927578299, -571619404, 1, 1);
					break;
			
				case 1:
					func_96(uParam0, -2053876401, -571619404, 2, 0);
					break;
			
				case 2:
					func_96(uParam0, -1649287133, 679107254, 1, 0);
					break;
			
				case 3:
					func_96(uParam0, -1489156508, 1863181664, 1, 0);
					break;
			
				case 4:
					func_96(uParam0, 202788691, -1322016827, 1, 0);
					break;
			}
			break;
	
		case -1716189206:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_81(iLocal_55))
			{
				num2 = func_79(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 370527443:
							func_96(uParam0, num[iParam2], 962500902, 1, 0);
							break;
					
						case 1109907117:
							func_96(uParam0, num[iParam2], 962500902, 2, 0);
							break;
					
						case 2055456612:
							func_96(uParam0, num[iParam2], 962500902, 3, 0);
							break;
					
						case 1690606566:
							func_96(uParam0, num[iParam2], 962500902, 4, 0);
							break;
					
						case -1633316949:
							func_96(uParam0, num[iParam2], 962500902, 5, 0);
							break;
					
						case -1461476313:
							func_96(uParam0, num[iParam2], 962500902, 6, 0);
							break;
					
						case -1770422457:
							func_96(uParam0, num[iParam2], 962500902, 7, 0);
							break;
					
						case -2059739958:
							func_96(uParam0, num[iParam2], 962500902, 8, 0);
							break;
					
						case -1280001599:
							func_96(uParam0, num[iParam2], 962500902, 9, 0);
							break;
					
						case -922885037:
							func_96(uParam0, num[iParam2], 962500902, 10, 0);
							break;
					}
				}
			}
			break;
	
		case -1786099057:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_81(iLocal_55))
			{
				num2 = func_79(hParam1, &num);
			
				if (num2 > 0 && iParam2 >= 0 && iParam2 < num)
				{
					switch (num[iParam2])
					{
						case 716207715:
							func_96(uParam0, num[iParam2], 962500902, 1, 0);
							break;
					
						case 446271089:
							func_96(uParam0, num[iParam2], 962500902, 2, 0);
							break;
					
						case 1045616099:
							func_96(uParam0, num[iParam2], 962500902, 3, 0);
							break;
					
						case 1336277129:
							func_96(uParam0, num[iParam2], 962500902, 4, 0);
							break;
					
						case -513369076:
							func_96(uParam0, num[iParam2], 962500902, 5, 0);
							break;
					
						case -447700000:
							func_96(uParam0, num[iParam2], 962500902, 6, 0);
							break;
					
						case -149207179:
							func_96(uParam0, num[iParam2], 962500902, 7, 0);
							break;
					
						case 166784288:
							func_96(uParam0, num[iParam2], 962500902, 8, 0);
							break;
					
						case 2068729789:
							func_96(uParam0, num[iParam2], 962500902, 9, 0);
							break;
					
						case 1761389338:
							func_96(uParam0, num[iParam2], 962500902, 10, 0);
							break;
					}
				}
			}
			break;
	
		default:
			dlcWeaponIndex = func_97(hParam1, &unk38);
		
			if (dlcWeaponIndex != -1)
			{
				for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
				{
					if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
					{
						if (!func_78(ComponentDataPtr.f_3))
						{
							if (ComponentDataPtr == -571619404 || ComponentDataPtr == 291640902)
								num4 = num4 + 1;
							else if (ComponentDataPtr == 679107254 || ComponentDataPtr == -1572840598)
								num5 = num5 + 1;
							else if (ComponentDataPtr == 196630833 || ComponentDataPtr == 1684637069)
								num6 = num6 + 1;
							else if (ComponentDataPtr == -1843287667 || ComponentDataPtr == 497110245)
								num7 = num7 + 1;
							else if (ComponentDataPtr == -1322016827 || ComponentDataPtr == -546751811)
								num8 = num8 + 1;
							else if (ComponentDataPtr == 1863181664 || ComponentDataPtr == 945598191)
								num9 = num9 + 1;
							else if (ComponentDataPtr == 1731751835)
								num10 = num10 + 1;
							else if (ComponentDataPtr == 962500902)
								num11 = num11 + 1;
							else if (ComponentDataPtr == -31573710)
								num12 = num12 + 1;
							else if (ComponentDataPtr == -1312077031)
								num13 = num13 + 1;
							else
								num14 = num14 + 1;
						
							if (num15 == iParam2)
							{
								if (ComponentDataPtr == -571619404 || ComponentDataPtr == 291640902)
									num3 = num4;
								else if (ComponentDataPtr == 679107254 || ComponentDataPtr == -1572840598)
									num3 = num5;
								else if (ComponentDataPtr == 196630833 || ComponentDataPtr == 1684637069)
									num3 = num6;
								else if (ComponentDataPtr == -1843287667 || ComponentDataPtr == 497110245)
									num3 = num7;
								else if (ComponentDataPtr == -1322016827 || ComponentDataPtr == -546751811)
									num3 = num8;
								else if (ComponentDataPtr == 1863181664 || ComponentDataPtr == 945598191)
									num3 = num9;
								else if (ComponentDataPtr == 1731751835)
									num3 = num10;
								else if (ComponentDataPtr == 962500902)
									num3 = num11;
								else if (ComponentDataPtr == -31573710)
									num3 = num12;
								else if (ComponentDataPtr == -1312077031)
									num3 = num13;
								else
									num3 = num14;
							
								func_96(uParam0, ComponentDataPtr.f_3, ComponentDataPtr, num3, ComponentDataPtr.f_1);
							}
						
							num15 = num15 + 1;
						}
					}
				}
			}
			break;
	}

	if (bParam3)
		uParam0->f_2 = func_22(hParam1, *uParam0);

	return uParam0->f_4 != 989182658;
}

int func_22(Hash hParam0, int iParam1) // Position - 0x6027 Hash - 0x982504C7 ^0x4A56EB9F
{
	int price;
	float num;
	int dlcWeaponIndex;
	int i;
	var unk;
	var unk2;
	int unk3;
	int unk4;
	var unk5;
	var unk6;
	var unk7;
	var unk8;
	float unk9;

	price = 0;
	num = 2.5f;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						price = 120;
						break;
				
					case -316253668:
						price = 155;
						break;
				
					case 899381934:
						price = 189;
						break;
				
					case 1709866683:
						price = 729;
						break;
				
					case -684126074:
						price = 18600;
						break;
				}
				break;
		
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						price = 136;
						break;
				
					case -696561875:
						price = 159;
						break;
				
					case 899381934:
						price = 189;
						break;
				
					case -1023114086:
						price = 735;
						break;
				
					case -966439566:
						price = 14500;
						break;
				}
				break;
		
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						price = 145;
						break;
				
					case 614078421:
						price = 165;
						break;
				
					case 899381934:
						price = 185;
						break;
				
					case -1023114086:
						price = 730;
						break;
				
					case -1686714580:
						price = 15800;
						break;
				}
				break;
		
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						price = 120;
						break;
				
					case 283556395:
						price = 137;
						break;
				
					case 899381934:
						price = 190;
						break;
				
					case -1657815255:
						price = 549;
						break;
				
					case -1489156508:
						price = 775;
						break;
				
					case 1215999497:
						price = 15100;
						break;
				}
				break;
		
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						price = 119;
						break;
				
					case 889808635:
						price = 134;
						break;
				
					case 2043113590:
						price = -1;
						break;
				
					case 2076495324:
						price = 210;
						break;
				
					case 1019656791:
						price = 549;
						break;
				
					case -1023114086:
						price = 815;
						break;
				
					case 663170192:
						price = 19300;
						break;
				}
				break;
		
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						price = 120;
						break;
				
					case -1323216997:
						price = 129;
						break;
				
					case -604986051:
						price = -1;
						break;
				
					case 202788691:
						price = 159;
						break;
				
					case 2076495324:
						price = 189;
						break;
				
					case -1657815255:
						price = 565;
						break;
				
					case -1489156508:
						price = 810;
						break;
				
					case 1319990579:
						price = 14400;
						break;
				}
				break;
		
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						price = 99;
						break;
				
					case -1861183855:
						price = 105;
						break;
				
					case -1167922891:
						price = -1;
						break;
				
					case 202788691:
						price = 132;
						break;
				
					case 2076495324:
						price = 150;
						break;
				
					case -1596416958:
						price = 450;
						break;
				
					case -2089531990:
						price = 815;
						break;
				
					case -660892072:
						price = 17900;
						break;
				}
				break;
		
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						price = 110;
						break;
				
					case -1899902599:
						price = 124;
						break;
				
					case 2076495324:
						price = 159;
						break;
				
					case -1439939148:
						price = 450;
						break;
				
					case -2089531990:
						price = 812;
						break;
				
					case 930927479:
						price = 16500;
						break;
				}
				break;
		
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						price = 135;
						break;
				
					case -2112517305:
						price = 145;
						break;
				
					case 1006677997:
						price = 450;
						break;
				
					case -690308418:
						price = 15600;
						break;
				}
				break;
		
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						price = 119;
						break;
				
					case -691692330:
						price = 126;
						break;
				
					case 202788691:
						price = 129;
						break;
				
					case -1596416958:
						price = 559;
						break;
				
					case -1828795171:
						price = 14000;
						break;
				}
				break;
		
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						price = 189;
						break;
				
					case -435637410:
						price = 975;
						break;
				
					case -1562927653:
						price = 16900;
						break;
				}
				break;
		
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						price = 129;
						break;
				
					case -2034401422:
						price = 139;
						break;
				
					case 202788691:
						price = 150;
						break;
				
					case 2076495324:
						price = 225;
						break;
				
					case -2089531990:
						price = 899;
						break;
				}
				break;
		
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						price = -1;
						break;
				
					case -767279652:
						price = 559;
						break;
				
					case -1135289737:
						price = 975;
						break;
				
					case -1489156508:
						price = 920;
						break;
				
					case 1077065191:
						price = 13000;
						break;
				}
				break;
		
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						price = -1;
						break;
				
					case -767279652:
						price = 575;
						break;
				
					case -1135289737:
						price = 999;
						break;
				}
				break;
		
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						price = 128;
						break;
				
					case 2076495324:
						price = 185;
						break;
				
					case -1439939148:
						price = 525;
						break;
				}
				break;
		
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						price = -1;
						break;
				}
				break;
		
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						price = 110;
						break;
				
					case -1152981993:
						price = 9700;
						break;
				
					case 2076495324:
						price = 2275;
						break;
				
					case -1657815255:
						price = 10875;
						break;
				
					case -1489156508:
						price = 12400;
						break;
				
					case 663517359:
						price = 17600;
						break;
				}
			
				if (func_77() && func_76() || func_75())
					price = 0;
				break;
		
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						price = 4100;
						break;
				
					case 2076495324:
						price = 2300;
						break;
				
					case -1489156508:
						price = 12450;
						break;
				}
			
				if (func_77() && func_76() || func_75())
					price = 0;
				break;
		
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						price = 0;
						break;
				
					case -640439150:
						price = 9500;
						break;
				
					case 899381934:
						price = 2000;
						break;
				
					case -1489156508:
						price = 12250;
						break;
				
					case 2008591151:
						price = 20000;
						break;
				}
			
				if (func_77() && func_76() || func_75())
					price = 0;
				break;
		
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						price = 13700;
						break;
				}
				break;
		
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						price = 0;
						break;
				
					case -855823675:
						price = 3612;
						break;
				
					case 471997210:
						price = 0;
						break;
				
					case 2076495324:
						price = 1020;
						break;
				
					case -2089531990:
						price = 5000;
						break;
				
					case 202788691:
						price = 1760;
						break;
				
					case 371102273:
						price = 17200;
						break;
				}
				break;
		
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						price = 0;
						break;
				
					case 1694090795:
						price = 3680;
						break;
				
					case 899381934:
						price = 710;
						break;
				
					case -1023114086:
						price = 4800;
						break;
				
					case 2053798779:
						price = 12000;
						break;
				}
				break;
		
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						price = 4900;
						break;
				
					case -287703709:
						price = 5600;
						break;
				
					case 1351683121:
						price = 5500;
						break;
				
					case -1755194916:
						price = 5200;
						break;
				
					case 2112683568:
						price = 4600;
						break;
				
					case 1062111910:
						price = 4700;
						break;
				
					case 146278587:
						price = 4800;
						break;
				
					case -494162961:
						price = 4300;
						break;
				
					case 2062808965:
						price = 4000;
						break;
				}
				break;
		
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						price = 108;
						break;
				
					case -1284994289:
						price = 9950;
						break;
				
					case 2076495324:
						price = 2575;
						break;
				
					case -1657815255:
						price = 11350;
						break;
				
					case -1489156508:
						price = 12500;
						break;
				
					case 202788691:
						price = 4275;
						break;
				
					case -1470645128:
						price = 16600;
						break;
				}
				break;
		
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						price = 29;
						break;
				
					case 2063610803:
						price = 9150;
						break;
				
					case -2144080721:
						price = 13900;
						break;
				}
				break;
		
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						price = 108;
						break;
				
					case 2089537806:
						price = 9975;
						break;
				
					case 1801039530:
						price = -1;
						break;
				
					case 2076495324:
						price = 2525;
						break;
				
					case -1596416958:
						price = 11550;
						break;
				
					case -1489156508:
						price = 12500;
						break;
				
					case 1929467122:
						price = 18000;
						break;
				}
				break;
		
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						price = 0;
						break;
				
					case -1188271751:
						price = 3680;
						break;
				
					case -1444295948:
						price = -1;
						break;
				
					case -1023114086:
						price = 4840;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex = func_97(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_78(ComponentDataPtr.f_3))
							{
								if (ComponentDataPtr.f_3 == iParam1)
								{
									num = 1f;
								
									if (!func_73(iParam1))
										ComponentDataPtr.f_5 = -1;
								
									if (ComponentDataPtr.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr.f_5;
								
									if (hParam0 == 1317494643)
										if (func_77() && func_76() || func_75())
											price = 0;
								}
							}
						}
					}
				}
				break;
		}
	}
	else
	{
		num = 2.5f;
	
		switch (hParam0)
		{
			case 453432689:
				switch (iParam1)
				{
					case -19858063:
						price = 120;
						break;
				
					case -316253668:
						price = 9175;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2895);
						break;
				
					case 899381934:
						price = 1675;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4347);
						break;
				
					case 1709866683:
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4348);
						break;
				
					case -684126074:
						price = Global_262145.f_11040;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4425);
						break;
				
					case 1623028892:
						price = Global_262145.f_21193;
						break;
				}
				break;
		
			case 1593441988:
				switch (iParam1)
				{
					case 119648377:
						price = 136;
						break;
				
					case -696561875:
						price = Global_262145.f_21079;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2896);
						break;
				
					case 899381934:
						price = 1825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4349);
						break;
				
					case -1023114086:
						price = Global_262145.f_21080;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4350);
						break;
				
					case -966439566:
						price = Global_262145.f_12431;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4420);
						break;
				}
				break;
		
			case 584646201:
				switch (iParam1)
				{
					case 834974250:
						price = 145;
						break;
				
					case 614078421:
						price = 9400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2898);
						break;
				
					case 899381934:
						price = 1975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4351);
						break;
				
					case -1023114086:
						price = 12200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4352);
						break;
				
					case -1686714580:
						price = Global_262145.f_11039;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4414);
						break;
				
					case 1657753414:
						price = Global_262145.f_32010;
						break;
				}
				break;
		
			case 324215364:
				switch (iParam1)
				{
					case -884429072:
						price = 120;
						break;
				
					case 283556395:
						price = 9325;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2899);
						break;
				
					case 899381934:
						price = 1900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4355);
						break;
				
					case -1657815255:
						price = 10800;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4357);
						break;
				
					case -1489156508:
						price = 12150;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4356);
						break;
				
					case 1215999497:
						price = Global_262145.f_11043;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4424);
						break;
				
					case 2012362801:
						price = Global_262145.f_32009;
						break;
				
					case -1566778158:
						price = 0;
						break;
				}
				break;
		
			case 736523883:
				switch (iParam1)
				{
					case 643254679:
						price = 119;
						break;
				
					case 889808635:
						price = 9475;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2900);
						break;
				
					case 2043113590:
						price = Global_262145.f_16587;
						break;
				
					case 2076495324:
						price = 2050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4358);
						break;
				
					case 1019656791:
						price = 10825;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4360);
						break;
				
					case -1023114086:
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4359);
						break;
				
					case 663170192:
						price = Global_262145.f_11042;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4429);
						break;
				
					case 1623028892:
						price = Global_262145.f_21194;
						break;
				}
				break;
		
			case -1074790547:
				switch (iParam1)
				{
					case -1101075946:
						price = 120;
						break;
				
					case -1323216997:
						price = 9550;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2902);
						break;
				
					case -604986051:
						price = Global_262145.f_16582;
						break;
				
					case 202788691:
						price = 4200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4368);
						break;
				
					case 2076495324:
						price = 2125;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4365);
						break;
				
					case -1657815255:
						price = 10850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4367);
						break;
				
					case -1489156508:
						price = 12300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4366);
						break;
				
					case 1319990579:
						price = Global_262145.f_11036;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4415);
						break;
				
					case 1623028892:
						price = Global_262145.f_21196;
						break;
				}
				break;
		
			case -2084633992:
				switch (iParam1)
				{
					case -1614924820:
						price = 99;
						break;
				
					case -1861183855:
						price = 9775;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2903);
						break;
				
					case -1167922891:
						price = Global_262145.f_16581;
						break;
				
					case 202788691:
						price = 4350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4376);
						break;
				
					case 2076495324:
						price = 2350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4373);
						break;
				
					case -1596416958:
						price = 10900;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4375);
						break;
				
					case -2089531990:
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4374);
						break;
				
					case -660892072:
						price = Global_262145.f_11038;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4418);
						break;
				
					case 1623028892:
						price = Global_262145.f_21197;
						break;
				}
				break;
		
			case -1357824103:
				switch (iParam1)
				{
					case -91250417:
						price = 110;
						break;
				
					case -1899902599:
						price = 9925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2905);
						break;
				
					case 2076495324:
						price = 2425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4378);
						break;
				
					case -1439939148:
						price = 10950;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4380);
						break;
				
					case -2089531990:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4379);
						break;
				
					case 930927479:
						price = Global_262145.f_11037;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4413);
						break;
				}
				break;
		
			case -1660422300:
				switch (iParam1)
				{
					case -197857404:
						price = 135;
						break;
				
					case -2112517305:
						price = 9850;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2906);
						break;
				
					case 1006677997:
						price = 10925;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4381);
						break;
				
					case -690308418:
						price = Global_262145.f_12432;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4423);
						break;
				}
				break;
		
			case 2144741730:
				switch (iParam1)
				{
					case -503336118:
						price = 119;
						break;
				
					case -691692330:
						price = 10000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2907);
						break;
				
					case 202788691:
						price = 4425;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4403);
						break;
				
					case -1596416958:
						price = 10975;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4404);
						break;
				
					case -1828795171:
						price = Global_262145.f_12433;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4419);
						break;
				
					case 1623028892:
						price = Global_262145.f_21195;
						break;
				}
				break;
		
			case 487013001:
				switch (iParam1)
				{
					case 2076495324:
						price = 1750;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4385);
						break;
				
					case -435637410:
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4386);
						break;
				
					case -1562927653:
						price = Global_262145.f_12428;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4427);
						break;
				
					case 1623028892:
						price = Global_262145.f_22933;
						break;
				
					case -242322891:
						price = Global_262145.f_32007;
						break;
				
					case 330905451:
						price = 0;
						break;
				}
				break;
		
			case -494615257:
				switch (iParam1)
				{
					case -1796727865:
						price = 129;
						break;
				
					case -2034401422:
						price = 9625;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2909);
						break;
				
					case 202788691:
						price = 4275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4389);
						break;
				
					case 2076495324:
						price = 2200;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4390);
						break;
				
					case -2089531990:
						price = 12350;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4391);
						break;
				}
				break;
		
			case 100416529:
				switch (iParam1)
				{
					case -1681506167:
						price = -1;
						break;
				
					case -767279652:
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4392);
						break;
				
					case -1135289737:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4393);
						break;
				
					case -1489156508:
						price = 12050;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4394);
						break;
				
					case 1077065191:
						price = Global_262145.f_11045;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4430);
						break;
				}
				break;
		
			case 205991906:
				switch (iParam1)
				{
					case 1198478068:
						price = -1;
						break;
				
					case -767279652:
						price = 99;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4395);
						break;
				
					case -1135289737:
						price = 12500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4396);
						break;
				
					case 1623028892:
						price = Global_262145.f_21198;
						break;
				}
				break;
		
			case -1568386805:
				switch (iParam1)
				{
					case 202788691:
						price = 4500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4405);
						break;
				
					case 2076495324:
						price = 2500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4401);
						break;
				
					case -1439939148:
						price = 11000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4402);
						break;
				}
				break;
		
			case 1119849093:
				switch (iParam1)
				{
					case -924946682:
						price = -1;
						break;
				}
				break;
		
			case -270015777:
				switch (iParam1)
				{
					case -1928132688:
						price = 110;
						break;
				
					case -1152981993:
						price = 9700;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2901);
						break;
				
					case 2076495324:
						price = 2275;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4361);
						break;
				
					case -1657815255:
						price = 10875;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4364);
						break;
				
					case -1489156508:
						price = 12400;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4362);
						break;
				
					case 663517359:
						price = Global_262145.f_12429;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4363);
						break;
				}
				break;
		
			case 1627465347:
				switch (iParam1)
				{
					case 484812453:
						price = 0;
						break;
				
					case -355941776:
						price = Global_262145.f_7061;
						break;
				}
				break;
		
			case -1076751822:
				switch (iParam1)
				{
					case -125817127:
						price = 0;
						break;
				
					case 2063610803:
						price = Global_262145.f_7640;
						break;
				
					case -2144080721:
						price = Global_262145.f_12430;
						break;
				
					case 1623028892:
						price = Global_262145.f_22938;
						break;
				}
				break;
		
			case -1063057011:
				switch (iParam1)
				{
					case -959978111:
						price = 0;
						break;
				
					case 2089537806:
						price = Global_262145.f_7645;
						break;
				
					case 1801039530:
						price = Global_262145.f_16584;
						break;
				
					case 2076495324:
						price = Global_262145.f_7648;
						break;
				
					case -1596416958:
						price = Global_262145.f_7644;
						break;
				
					case -1489156508:
						price = Global_262145.f_7642;
						break;
				
					case 202788691:
						price = Global_262145.f_7647;
						break;
				
					case 1929467122:
						price = Global_262145.f_12434;
						break;
				
					case 1623028892:
						price = Global_262145.f_22934;
						break;
				}
				break;
		
			case -771403250:
				switch (iParam1)
				{
					case 222992026:
						price = 0;
						break;
				
					case 1694090795:
						price = Global_262145.f_7646;
						break;
				
					case 899381934:
						price = Global_262145.f_7650;
						break;
				
					case -1023114086:
						price = Global_262145.f_7643;
						break;
				
					case 2053798779:
						price = Global_262145.f_7670;
						break;
				}
				break;
		
			case 2132975508:
				switch (iParam1)
				{
					case -979292288:
						price = 0;
						break;
				
					case -1284994289:
						price = Global_262145.f_7653;
						break;
				
					case 2076495324:
						price = Global_262145.f_7656;
						break;
				
					case -2089531990:
						price = Global_262145.f_7651;
						break;
				
					case -1439939148:
						price = Global_262145.f_7652;
						break;
				
					case 202788691:
						price = Global_262145.f_7654;
						break;
				
					case -1470645128:
						price = Global_262145.f_12435;
						break;
				
					case 1623028892:
						price = Global_262145.f_22937;
						break;
				}
				break;
		
			case 137902532:
				switch (iParam1)
				{
					case 1168357051:
						price = 0;
						break;
				
					case 867832552:
						price = Global_262145.f_8128;
						break;
				
					case -1023114086:
						price = Global_262145.f_8129;
						break;
				}
				break;
		
			case 984333226:
				switch (iParam1)
				{
					case 844049759:
						price = 0;
						break;
				
					case -1759709443:
						price = Global_262145.f_8857;
						break;
				
					case -2000168365:
						price = Global_262145.f_16588;
						break;
				
					case 2076495324:
						price = Global_262145.f_8858;
						break;
				
					case -1489156508:
						price = Global_262145.f_8859;
						break;
				
					case 202788691:
						price = Global_262145.f_8860;
						break;
				}
				break;
		
			case -952879014:
				switch (iParam1)
				{
					case -667205311:
						price = 0;
						break;
				
					case -855823675:
						price = Global_262145.f_8863;
						break;
				
					case 2076495324:
						price = Global_262145.f_8864;
						break;
				
					case -2089531990:
						price = Global_262145.f_8866;
						break;
				
					case 202788691:
						price = Global_262145.f_8867;
						break;
				
					case 371102273:
						price = Global_262145.f_8868;
						break;
				
					case 1623028892:
						price = Global_262145.f_22935;
						break;
				}
				break;
		
			case -1654528753:
				switch (iParam1)
				{
					case 202788691:
						price = 4100;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_15137);
						break;
				
					case 2076495324:
						price = 2300;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4387);
						break;
				
					case -1489156508:
						price = 12450;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4388);
						break;
				}
			
				if (func_77() && func_76() || func_75())
					price = 0;
				break;
		
			case -1716589765:
				switch (iParam1)
				{
					case 580369945:
						price = 0;
						break;
				
					case -640439150:
						price = 9500;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_2897);
						break;
				
					case 899381934:
						price = 2000;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4353);
						break;
				
					case -1489156508:
						price = 12250;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4354);
						break;
				
					case 2008591151:
						price = Global_262145.f_11041;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4426);
						break;
				}
			
				if (func_77() && func_76() || func_75())
					price = 0;
				break;
		
			case 2017895192:
				switch (iParam1)
				{
					case -2052698631:
						price = Global_262145.f_11044;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4428);
						break;
				}
				break;
		
			case -656458692:
				switch (iParam1)
				{
					case -971770235:
						price = Global_262145.f_11368;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4433);
						break;
				
					case -287703709:
						price = Global_262145.f_11369;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4434);
						break;
				
					case 1351683121:
						price = Global_262145.f_11370;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4435);
						break;
				
					case -1755194916:
						price = Global_262145.f_11371;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4436);
						break;
				
					case 2112683568:
						price = Global_262145.f_11372;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4437);
						break;
				
					case 1062111910:
						price = Global_262145.f_11373;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4438);
						break;
				
					case 146278587:
						price = Global_262145.f_11374;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4439);
						break;
				
					case -494162961:
						price = Global_262145.f_11375;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4440);
						break;
				
					case 2062808965:
						price = Global_262145.f_11376;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4441);
						break;
				}
				break;
		
			case -619010992:
				switch (iParam1)
				{
					case 1198425599:
						price = 0;
						break;
				
					case -1188271751:
						price = Global_262145.f_11393;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4443);
						break;
				
					case -1444295948:
						price = Global_262145.f_16586;
						break;
				
					case -1023114086:
						price = Global_262145.f_11394;
						price = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(price) * Global_262145.f_4444);
						break;
				}
				break;
		
			case -538741184:
				switch (iParam1)
				{
					case -1858624256:
						price = 0;
						break;
				
					case 1530822070:
						price = Global_262145.f_13276;
						break;
				
					case -409758110:
						price = Global_262145.f_13277;
						break;
				}
				break;
		
			case -1045183535:
				switch (iParam1)
				{
					case -377062173:
						price = 0;
						break;
				
					case 384708672:
						price = Global_262145.f_13334;
						break;
				
					case -1802258419:
						price = Global_262145.f_13275;
						break;
				
					case 1623028892:
						price = Global_262145.f_22936;
						break;
				}
				break;
		
			case 1649403952:
				switch (iParam1)
				{
					case 1363085923:
						price = 0;
						break;
				
					case 1509923832:
						price = Global_262145.f_15067;
						break;
				
					case -972590066:
						price = Global_262145.f_16583;
						break;
				}
				break;
		
			case -275439685:
				switch (iParam1)
				{
					case 703231006:
						price = 0;
						break;
				}
				break;
		
			case -1121678507:
				switch (iParam1)
				{
					case -2067221805:
						price = 0;
						break;
				
					case -1820405577:
						price = Global_262145.f_19042;
						break;
				}
				break;
		
			case 171789620:
				switch (iParam1)
				{
					case 1125642654:
						price = 0;
						break;
				
					case 860508675:
						price = Global_262145.f_21075;
						break;
				
					case 1857603803:
						price = Global_262145.f_16585;
						break;
				
					case 2076495324:
						price = Global_262145.f_21076;
						break;
				
					case -1439939148:
						price = Global_262145.f_21078;
						break;
				
					case 202788691:
						price = Global_262145.f_21077;
						break;
				}
				break;
		
			case 961495388:
				switch (iParam1)
				{
					case -2045758401:
						price = 0;
						break;
				
					case -785724817:
						price = Global_262145.f_21199;
						break;
				
					case -1478681000:
						price = Global_262145.f_21200;
						break;
				
					case 1675665560:
						price = Global_262145.f_21201;
						break;
				
					case -76490669:
						price = Global_262145.f_21202;
						break;
				
					case -282298175:
						price = Global_262145.f_21203;
						break;
				
					case 2076495324:
						price = Global_262145.f_21204;
						break;
				
					case 1108334355:
						price = Global_262145.f_21205;
						break;
				
					case 77277509:
						price = Global_262145.f_21206;
						break;
				
					case 1060929921:
						price = Global_262145.f_21207;
						break;
				
					case -966040254:
						price = Global_262145.f_21208;
						break;
				
					case -1489156508:
						price = Global_262145.f_21209;
						break;
				
					case -1181482284:
						price = Global_262145.f_21210;
						break;
				
					case -932732805:
						price = Global_262145.f_21211;
						break;
				
					case -569259057:
						price = Global_262145.f_21212;
						break;
				
					case -326080308:
						price = Global_262145.f_21213;
						break;
				
					case 48731514:
						price = Global_262145.f_21214;
						break;
				
					case 880736428:
						price = Global_262145.f_21215;
						break;
				
					case 1303784126:
						price = Global_262145.f_21216;
						break;
				
					case -1654288262:
						price = Global_262145.f_21217;
						break;
				
					case 1134861606:
						price = 0;
						break;
				
					case 1447477866:
						price = Global_262145.f_21218;
						break;
				
					case -1860492113:
						price = Global_262145.f_21327;
						break;
				
					case 937772107:
						price = Global_262145.f_21328;
						break;
				
					case 1401650071:
						price = Global_262145.f_21329;
						break;
				
					case 628662130:
						price = Global_262145.f_21330;
						break;
				
					case -985047251:
						price = Global_262145.f_21331;
						break;
				
					case -812944463:
						price = Global_262145.f_21332;
						break;
				
					case -1447352303:
						price = Global_262145.f_21333;
						break;
				
					case -60338860:
						price = Global_262145.f_21334;
						break;
				
					case 2088750491:
						price = Global_262145.f_21335;
						break;
				
					case -1513913454:
						price = Global_262145.f_21336;
						break;
				
					case -1179558480:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -86904375:
				switch (iParam1)
				{
					case 1283078430:
						price = 0;
						break;
				
					case 1574296533:
						price = Global_262145.f_21219;
						break;
				
					case 626875735:
						price = Global_262145.f_21220;
						break;
				
					case 1141059345:
						price = Global_262145.f_21221;
						break;
				
					case 1025884839:
						price = Global_262145.f_21222;
						break;
				
					case 391640422:
						price = Global_262145.f_21223;
						break;
				
					case 2076495324:
						price = Global_262145.f_21224;
						break;
				
					case 1108334355:
						price = Global_262145.f_21225;
						break;
				
					case 77277509:
						price = Global_262145.f_21226;
						break;
				
					case 1060929921:
						price = Global_262145.f_21227;
						break;
				
					case -966040254:
						price = Global_262145.f_21228;
						break;
				
					case -2089531990:
						price = Global_262145.f_21229;
						break;
				
					case -1181482284:
						price = Global_262145.f_21230;
						break;
				
					case -932732805:
						price = Global_262145.f_21231;
						break;
				
					case -569259057:
						price = Global_262145.f_21232;
						break;
				
					case -326080308:
						price = Global_262145.f_21233;
						break;
				
					case 48731514:
						price = Global_262145.f_21234;
						break;
				
					case 880736428:
						price = Global_262145.f_21235;
						break;
				
					case 1303784126:
						price = Global_262145.f_21236;
						break;
				
					case -1654288262:
						price = Global_262145.f_21237;
						break;
				
					case -2093598721:
						price = 0;
						break;
				
					case -1958983669:
						price = Global_262145.f_21238;
						break;
				
					case 1272803094:
						price = Global_262145.f_21327;
						break;
				
					case 1080719624:
						price = Global_262145.f_21328;
						break;
				
					case 792221348:
						price = Global_262145.f_21329;
						break;
				
					case -452181427:
						price = Global_262145.f_21330;
						break;
				
					case -746774737:
						price = Global_262145.f_21331;
						break;
				
					case -2044296061:
						price = Global_262145.f_21332;
						break;
				
					case -199171978:
						price = Global_262145.f_21333;
						break;
				
					case -1428075016:
						price = Global_262145.f_21334;
						break;
				
					case -1735153315:
						price = Global_262145.f_21335;
						break;
				
					case 1796459838:
						price = Global_262145.f_21336;
						break;
				
					case -631911105:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -608341376:
				switch (iParam1)
				{
					case 1227564412:
						price = 0;
						break;
				
					case 400507625:
						price = Global_262145.f_21239;
						break;
				
					case 696788003:
						price = Global_262145.f_21240;
						break;
				
					case 1475288264:
						price = Global_262145.f_21241;
						break;
				
					case -1020871238:
						price = Global_262145.f_21242;
						break;
				
					case -161179835:
						price = Global_262145.f_21243;
						break;
				
					case 1108334355:
						price = Global_262145.f_21244;
						break;
				
					case 77277509:
						price = Global_262145.f_21245;
						break;
				
					case 1060929921:
						price = Global_262145.f_21246;
						break;
				
					case -966040254:
						price = Global_262145.f_21247;
						break;
				
					case -1181482284:
						price = Global_262145.f_21248;
						break;
				
					case -932732805:
						price = Global_262145.f_21249;
						break;
				
					case -569259057:
						price = Global_262145.f_21250;
						break;
				
					case -326080308:
						price = Global_262145.f_21251;
						break;
				
					case 48731514:
						price = Global_262145.f_21252;
						break;
				
					case 880736428:
						price = Global_262145.f_21253;
						break;
				
					case 1303784126:
						price = Global_262145.f_21254;
						break;
				
					case -1654288262:
						price = Global_262145.f_21255;
						break;
				
					case -1018236364:
						price = 0;
						break;
				
					case -1243457701:
						price = Global_262145.f_21256;
						break;
				
					case 1249283253:
						price = Global_262145.f_21327;
						break;
				
					case -857707587:
						price = Global_262145.f_21328;
						break;
				
					case -1097543898:
						price = Global_262145.f_21329;
						break;
				
					case 1980349969:
						price = Global_262145.f_21330;
						break;
				
					case 1219453777:
						price = Global_262145.f_21331;
						break;
				
					case -1853459190:
						price = Global_262145.f_21332;
						break;
				
					case -2074781016:
						price = Global_262145.f_21333;
						break;
				
					case 457967755:
						price = Global_262145.f_21334;
						break;
				
					case 235171324:
						price = Global_262145.f_21335;
						break;
				
					case 42685294:
						price = Global_262145.f_21336;
						break;
				
					case -687617715:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case 177293209:
				switch (iParam1)
				{
					case -98690520:
						price = 0;
						break;
				
					case 752418717:
						price = Global_262145.f_21257;
						break;
				
					case -130689324:
						price = Global_262145.f_21258;
						break;
				
					case 1005144310:
						price = Global_262145.f_21260;
						break;
				
					case 247526935:
						price = Global_262145.f_21261;
						break;
				
					case -1981031769:
						price = Global_262145.f_21259;
						break;
				
					case -2101279869:
						price = Global_262145.f_21262;
						break;
				
					case -1135289737:
						price = 0;
						break;
				
					case -1233121104:
						price = Global_262145.f_21263;
						break;
				
					case 776198721:
						price = Global_262145.f_21264;
						break;
				
					case -1404903567:
						price = Global_262145.f_21265;
						break;
				
					case 1602080333:
						price = Global_262145.f_21266;
						break;
				
					case 1764221345:
						price = Global_262145.f_21267;
						break;
				
					case -1869205321:
						price = 0;
						break;
				
					case 277524638:
						price = Global_262145.f_21268;
						break;
				
					case -130843390:
						price = Global_262145.f_21327;
						break;
				
					case -977347227:
						price = Global_262145.f_21328;
						break;
				
					case -378461067:
						price = Global_262145.f_21329;
						break;
				
					case 329939175:
						price = Global_262145.f_21330;
						break;
				
					case 643374672:
						price = Global_262145.f_21331;
						break;
				
					case 807875052:
						price = Global_262145.f_21332;
						break;
				
					case -1401804168:
						price = Global_262145.f_21333;
						break;
				
					case -1096495395:
						price = Global_262145.f_21334;
						break;
				
					case -847811454:
						price = Global_262145.f_21335;
						break;
				
					case -1413108537:
						price = Global_262145.f_21336;
						break;
				
					case 1815270123:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -1075685676:
				switch (iParam1)
				{
					case -1795936926:
						price = 0;
						break;
				
					case 1591132456:
						price = Global_262145.f_21269;
						break;
				
					case -2046910199:
						price = Global_262145.f_21271;
						break;
				
					case 1329061674:
						price = Global_262145.f_21270;
						break;
				
					case 733837882:
						price = Global_262145.f_21272;
						break;
				
					case 634039983:
						price = Global_262145.f_21273;
						break;
				
					case 1140676955:
						price = Global_262145.f_21274;
						break;
				
					case -1898661008:
						price = Global_262145.f_21275;
						break;
				
					case 1709866683:
						price = Global_262145.f_21276;
						break;
				
					case 568543123:
						price = Global_262145.f_21277;
						break;
				
					case 1550611612:
						price = Global_262145.f_21327;
						break;
				
					case 368550800:
						price = Global_262145.f_21328;
						break;
				
					case -1769069349:
						price = Global_262145.f_21329;
						break;
				
					case 24902297:
						price = Global_262145.f_21330;
						break;
				
					case -228041614:
						price = Global_262145.f_21331;
						break;
				
					case -584961562:
						price = Global_262145.f_21332;
						break;
				
					case -1153175946:
						price = Global_262145.f_21333;
						break;
				
					case 1301287696:
						price = Global_262145.f_21334;
						break;
				
					case 1597093459:
						price = Global_262145.f_21335;
						break;
				
					case 1769871776:
						price = Global_262145.f_21336;
						break;
				
					case -1827882671:
						price = Global_262145.f_21337;
						break;
				
					case 1141184690:
						price = 0;
						break;
				}
				break;
		
			case 2024373456:
				switch (iParam1)
				{
					case 1277460590:
						price = 0;
						break;
				
					case -1182573778:
						price = Global_262145.f_21278;
						break;
				
					case 974903034:
						price = Global_262145.f_21280;
						break;
				
					case 190476639:
						price = Global_262145.f_21279;
						break;
				
					case -644734235:
						price = Global_262145.f_21281;
						break;
				
					case 2146055916:
						price = Global_262145.f_21282;
						break;
				
					case 2076495324:
						price = Global_262145.f_21283;
						break;
				
					case -1613015470:
						price = Global_262145.f_21284;
						break;
				
					case -452809877:
						price = Global_262145.f_21285;
						break;
				
					case 1038927834:
						price = Global_262145.f_21286;
						break;
				
					case -1023114086:
						price = Global_262145.f_21287;
						break;
				
					case -1181482284:
						price = Global_262145.f_21288;
						break;
				
					case -932732805:
						price = Global_262145.f_21289;
						break;
				
					case -569259057:
						price = Global_262145.f_21290;
						break;
				
					case -326080308:
						price = Global_262145.f_21291;
						break;
				
					case 48731514:
						price = Global_262145.f_21292;
						break;
				
					case 880736428:
						price = Global_262145.f_21293;
						break;
				
					case 1303784126:
						price = Global_262145.f_21294;
						break;
				
					case -653246751:
						price = 0;
						break;
				
					case -1520117877:
						price = Global_262145.f_21295;
						break;
				
					case -996700057:
						price = Global_262145.f_21327;
						break;
				
					case 940943685:
						price = Global_262145.f_21328;
						break;
				
					case 1263226800:
						price = Global_262145.f_21329;
						break;
				
					case -328035840:
						price = Global_262145.f_21330;
						break;
				
					case 1224100642:
						price = Global_262145.f_21331;
						break;
				
					case 899228776:
						price = Global_262145.f_21332;
						break;
				
					case 616006309:
						price = Global_262145.f_21333;
						break;
				
					case -1561952511:
						price = Global_262145.f_21334;
						break;
				
					case 572063080:
						price = Global_262145.f_21335;
						break;
				
					case 1170588613:
						price = Global_262145.f_21336;
						break;
				
					case 966612367:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case 1432025498:
				switch (iParam1)
				{
					case -845938367:
						price = 0;
						break;
				
					case 1315288101:
						price = Global_262145.f_22965;
						break;
				
					case 1004815965:
						price = Global_262145.f_22966;
						break;
				
					case -380098265:
						price = Global_262145.f_22964;
						break;
				
					case -1618338827:
						price = Global_262145.f_22963;
						break;
				
					case 2076495324:
						price = Global_262145.f_22992;
						break;
				
					case 1108334355:
						price = Global_262145.f_22993;
						break;
				
					case 77277509:
						price = Global_262145.f_22994;
						break;
				
					case 1060929921:
						price = Global_262145.f_22995;
						break;
				
					case -1404903567:
						price = Global_262145.f_22996;
						break;
				
					case 1602080333:
						price = Global_262145.f_22997;
						break;
				
					case -474112444:
						price = Global_262145.f_21327;
						break;
				
					case 387223451:
						price = Global_262145.f_21328;
						break;
				
					case 617753366:
						price = Global_262145.f_21329;
						break;
				
					case -222378256:
						price = Global_262145.f_21330;
						break;
				
					case 8741501:
						price = Global_262145.f_21331;
						break;
				
					case -601286203:
						price = Global_262145.f_21332;
						break;
				
					case -511433605:
						price = Global_262145.f_21333;
						break;
				
					case -655387818:
						price = Global_262145.f_21334;
						break;
				
					case -282476598:
						price = Global_262145.f_21335;
						break;
				
					case 1739501925:
						price = Global_262145.f_21336;
						break;
				
					case 1178671645:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -1768145561:
				switch (iParam1)
				{
					case 382112385:
						price = 0;
						break;
				
					case -568352468:
						price = Global_262145.f_22967;
						break;
				
					case 1362433589:
						price = Global_262145.f_22971;
						break;
				
					case 1346235024:
						price = Global_262145.f_22969;
						break;
				
					case -570355066:
						price = Global_262145.f_22970;
						break;
				
					case -2023373174:
						price = Global_262145.f_22968;
						break;
				
					case 2076495324:
						price = Global_262145.f_22998;
						break;
				
					case 1108334355:
						price = Global_262145.f_22999;
						break;
				
					case 77277509:
						price = Global_262145.f_23000;
						break;
				
					case -966040254:
						price = Global_262145.f_23001;
						break;
				
					case -1489156508:
						price = Global_262145.f_23002;
						break;
				
					case -1181482284:
						price = Global_262145.f_23003;
						break;
				
					case -932732805:
						price = Global_262145.f_23004;
						break;
				
					case -569259057:
						price = Global_262145.f_23005;
						break;
				
					case -326080308:
						price = Global_262145.f_23006;
						break;
				
					case 48731514:
						price = Global_262145.f_23007;
						break;
				
					case 880736428:
						price = Global_262145.f_23008;
						break;
				
					case 1303784126:
						price = Global_262145.f_23009;
						break;
				
					case -1654288262:
						price = Global_262145.f_23010;
						break;
				
					case -415870039:
						price = 0;
						break;
				
					case -109086661:
						price = Global_262145.f_23011;
						break;
				
					case -737430213:
						price = Global_262145.f_21327;
						break;
				
					case 1125852043:
						price = Global_262145.f_21328;
						break;
				
					case 886015732:
						price = Global_262145.f_21329;
						break;
				
					case -1262287139:
						price = Global_262145.f_21330;
						break;
				
					case -295208411:
						price = Global_262145.f_21331;
						break;
				
					case -544154504:
						price = Global_262145.f_21332;
						break;
				
					case 172765678:
						price = Global_262145.f_21333;
						break;
				
					case -1982877449:
						price = Global_262145.f_21334;
						break;
				
					case 2072122460:
						price = Global_262145.f_21335;
						break;
				
					case -1986220171:
						price = Global_262145.f_21336;
						break;
				
					case 1377355801:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -2009644972:
				switch (iParam1)
				{
					case 21392614:
						price = 0;
						break;
				
					case -829683854:
						price = Global_262145.f_23882;
						break;
				
					case -1055790298:
						price = Global_262145.f_22987;
						break;
				
					case -1928301566:
						price = Global_262145.f_22989;
						break;
				
					case -424845447:
						price = Global_262145.f_22988;
						break;
				
					case -1876057490:
						price = Global_262145.f_22986;
						break;
				
					case 1246324211:
						price = Global_262145.f_23043;
						break;
				
					case 1205768792:
						price = Global_262145.f_23044;
						break;
				
					case 1709866683:
						price = Global_262145.f_23045;
						break;
				
					case -1434287169:
						price = Global_262145.f_23046;
						break;
				
					case 259780317:
						price = Global_262145.f_21327;
						break;
				
					case -1973342474:
						price = Global_262145.f_21328;
						break;
				
					case 1996130345:
						price = Global_262145.f_21329;
						break;
				
					case -1455657812:
						price = Global_262145.f_21330;
						break;
				
					case -1668263084:
						price = Global_262145.f_21331;
						break;
				
					case 1308243489:
						price = Global_262145.f_21332;
						break;
				
					case 1122574335:
						price = Global_262145.f_21333;
						break;
				
					case 1420313469:
						price = Global_262145.f_21334;
						break;
				
					case 109848390:
						price = Global_262145.f_21335;
						break;
				
					case 593945703:
						price = Global_262145.f_21336;
						break;
				
					case 1142457062:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case 1785463520:
				switch (iParam1)
				{
					case -1797182002:
						price = 0;
						break;
				
					case -422587990:
						price = Global_262145.f_22972;
						break;
				
					case -193998727:
						price = Global_262145.f_22976;
						break;
				
					case -515203373:
						price = Global_262145.f_22974;
						break;
				
					case 1842849902:
						price = Global_262145.f_22975;
						break;
				
					case -679861550:
						price = Global_262145.f_22973;
						break;
				
					case 2076495324:
						price = Global_262145.f_23012;
						break;
				
					case 1108334355:
						price = Global_262145.f_23013;
						break;
				
					case -966040254:
						price = Global_262145.f_23014;
						break;
				
					case 1528590652:
						price = 0;
						break;
				
					case -2089531990:
						price = Global_262145.f_23015;
						break;
				
					case -1181482284:
						price = Global_262145.f_23016;
						break;
				
					case -932732805:
						price = Global_262145.f_23017;
						break;
				
					case -569259057:
						price = Global_262145.f_23018;
						break;
				
					case -326080308:
						price = Global_262145.f_23019;
						break;
				
					case 48731514:
						price = Global_262145.f_23020;
						break;
				
					case 880736428:
						price = Global_262145.f_23021;
						break;
				
					case 1303784126:
						price = Global_262145.f_23022;
						break;
				
					case -1654288262:
						price = Global_262145.f_23023;
						break;
				
					case 941317513:
						price = 0;
						break;
				
					case 1748450780:
						price = Global_262145.f_23024;
						break;
				
					case -1869284448:
						price = Global_262145.f_21327;
						break;
				
					case 1931539634:
						price = Global_262145.f_21328;
						break;
				
					case 1624199183:
						price = Global_262145.f_21329;
						break;
				
					case -26834113:
						price = Global_262145.f_21330;
						break;
				
					case -210406055:
						price = Global_262145.f_21331;
						break;
				
					case 423313640:
						price = Global_262145.f_21332;
						break;
				
					case 276639596:
						price = Global_262145.f_21333;
						break;
				
					case -991356863:
						price = Global_262145.f_21334;
						break;
				
					case -1682848301:
						price = Global_262145.f_21335;
						break;
				
					case 996213771:
						price = Global_262145.f_21336;
						break;
				
					case -1214048550:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -879347409:
				switch (iParam1)
				{
					case -1172055874:
						price = 0;
						break;
				
					case -958864266:
						price = Global_262145.f_22977;
						break;
				
					case 231258687:
						price = Global_262145.f_22978;
						break;
				
					case 284438159:
						price = Global_262145.f_22980;
						break;
				
					case 15712037:
						price = Global_262145.f_22979;
						break;
				
					case 1108334355:
						price = Global_262145.f_23025;
						break;
				
					case 77277509:
						price = Global_262145.f_23026;
						break;
				
					case 899381934:
						price = Global_262145.f_23027;
						break;
				
					case 654802123:
						price = Global_262145.f_23028;
						break;
				
					case -1069552225:
						price = Global_262145.f_21327;
						break;
				
					case 11918884:
						price = Global_262145.f_21328;
						break;
				
					case 176157112:
						price = Global_262145.f_21329;
						break;
				
					case -220052855:
						price = Global_262145.f_21330;
						break;
				
					case 288456487:
						price = Global_262145.f_21331;
						break;
				
					case 398658626:
						price = Global_262145.f_21332;
						break;
				
					case 628697006:
						price = Global_262145.f_21333;
						break;
				
					case 925911836:
						price = Global_262145.f_21334;
						break;
				
					case 1222307441:
						price = Global_262145.f_21335;
						break;
				
					case 552442715:
						price = Global_262145.f_21336;
						break;
				
					case -648943513:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -2066285827:
				switch (iParam1)
				{
					case 25766362:
						price = 0;
						break;
				
					case -273676760:
						price = Global_262145.f_22981;
						break;
				
					case -89655827:
						price = Global_262145.f_22985;
						break;
				
					case 1130501904:
						price = Global_262145.f_22983;
						break;
				
					case -1449330342:
						price = Global_262145.f_22984;
						break;
				
					case -2111807319:
						price = Global_262145.f_22982;
						break;
				
					case 2076495324:
						price = Global_262145.f_23029;
						break;
				
					case 1108334355:
						price = Global_262145.f_23030;
						break;
				
					case -944910075:
						price = Global_262145.f_23031;
						break;
				
					case 1060929921:
						price = Global_262145.f_23032;
						break;
				
					case 1704640795:
						price = 0;
						break;
				
					case 1005743559:
						price = Global_262145.f_23042;
						break;
				
					case -2089531990:
						price = Global_262145.f_23033;
						break;
				
					case -1181482284:
						price = Global_262145.f_23034;
						break;
				
					case -932732805:
						price = Global_262145.f_23035;
						break;
				
					case -569259057:
						price = Global_262145.f_23036;
						break;
				
					case -326080308:
						price = Global_262145.f_23037;
						break;
				
					case 48731514:
						price = Global_262145.f_23038;
						break;
				
					case 880736428:
						price = Global_262145.f_23039;
						break;
				
					case 1303784126:
						price = Global_262145.f_23040;
						break;
				
					case -1654288262:
						price = Global_262145.f_23041;
						break;
				
					case -1371515465:
						price = Global_262145.f_21327;
						break;
				
					case -1190793877:
						price = Global_262145.f_21328;
						break;
				
					case -1497085720:
						price = Global_262145.f_21329;
						break;
				
					case -1803148180:
						price = Global_262145.f_21330;
						break;
				
					case -1975971886:
						price = Global_262145.f_21331;
						break;
				
					case 36929477:
						price = Global_262145.f_21332;
						break;
				
					case -268444834:
						price = Global_262145.f_21333;
						break;
				
					case -574769446:
						price = Global_262145.f_21334;
						break;
				
					case -882699739:
						price = Global_262145.f_21335;
						break;
				
					case -1468181474:
						price = Global_262145.f_21336;
						break;
				
					case -974541230:
						price = Global_262145.f_21337;
						break;
				}
				break;
		
			case -1355376991:
				switch (iParam1)
				{
					case -673450233:
						price = 0;
						break;
				}
				break;
		
			case 727643628:
				switch (iParam1)
				{
					case 1423184737:
						price = 0;
						break;
				
					case -2122814295:
						price = Global_262145.f_28697;
						break;
				
					case -1828202758:
						price = Global_262145.f_28698;
						break;
				}
				break;
		
			case 94989220:
				switch (iParam1)
				{
					case -971688363:
						price = 0;
						break;
				
					case 2076495324:
						price = Global_262145.f_30836;
						break;
				
					case -2089531990:
						price = Global_262145.f_30837;
						break;
				}
				break;
		
			case 1470379660:
				switch (iParam1)
				{
					case -1423479223:
						price = 0;
						break;
				}
				break;
		
			case -1658906650:
				switch (iParam1)
				{
					case 759617595:
						price = Global_262145.f_30822;
						break;
				
					case 1749732930:
						price = Global_262145.f_30823;
						break;
				
					case 1803744149:
						price = Global_262145.f_30824;
						break;
				
					case -1439939148:
						price = Global_262145.f_30825;
						break;
				
					case 2076495324:
						price = Global_262145.f_30826;
						break;
				
					case -2089531990:
						price = Global_262145.f_30827;
						break;
				}
				break;
		
			case -947031628:
				switch (iParam1)
				{
					case 1525977990:
						price = Global_262145.f_31975;
						break;
				
					case 1824470811:
						price = Global_262145.f_31976;
						break;
				
					case -325063463:
						price = Global_262145.f_32008;
						break;
				
					case 202788691:
						price = Global_262145.f_31981;
						break;
				
					case 2076495324:
						price = Global_262145.f_31979;
						break;
				
					case -1596416958:
						price = Global_262145.f_31978;
						break;
				
					case -2089531990:
						price = Global_262145.f_31980;
						break;
				
					case -1277049774:
						price = Global_262145.f_31977;
						break;
				}
				break;
		
			case -774507221:
				switch (iParam1)
				{
					case 927578299:
						price = 0;
						break;
				
					case -2053876401:
						price = *Global_262145.f_33218;
						break;
				
					case -1649287133:
						price = *Global_262145.f_33220;
						break;
				
					case -1489156508:
						price = *Global_262145.f_33221;
						break;
				
					case 202788691:
						price = *Global_262145.f_33219;
						break;
				}
				break;
		
			case -1716189206:
				switch (iParam1)
				{
					case 370527443:
						price = *Global_262145.f_34096;
						break;
				
					case 1109907117:
						price = *Global_262145.f_34100;
						break;
				
					case 2055456612:
						price = *Global_262145.f_34097;
						break;
				
					case 1690606566:
						price = *Global_262145.f_34098;
						break;
				
					case -1633316949:
						price = *Global_262145.f_34101;
						break;
				
					case -1461476313:
						price = *Global_262145.f_34099;
						break;
				
					case -1770422457:
						price = *Global_262145.f_34103;
						break;
				
					case -2059739958:
						price = *Global_262145.f_34102;
						break;
				
					case -1280001599:
						price = *Global_262145.f_34104;
						break;
				
					case -922885037:
						price = *Global_262145.f_34105;
						break;
				}
				break;
		
			case -1786099057:
				switch (iParam1)
				{
					case 716207715:
						price = *Global_262145.f_34086;
						break;
				
					case 446271089:
						price = *Global_262145.f_34087;
						break;
				
					case 1045616099:
						price = *Global_262145.f_34089;
						break;
				
					case 1336277129:
						price = *Global_262145.f_34090;
						break;
				
					case -513369076:
						price = *Global_262145.f_34091;
						break;
				
					case -447700000:
						price = *Global_262145.f_34092;
						break;
				
					case -149207179:
						price = *Global_262145.f_34093;
						break;
				
					case 166784288:
						price = *Global_262145.f_34094;
						break;
				
					case 2068729789:
						price = *Global_262145.f_34095;
						break;
				
					case 1761389338:
						price = *Global_262145.f_34088;
						break;
				}
				break;
		
			case 465894841:
				switch (iParam1)
				{
					case 375646046:
						price = 0;
						break;
				
					case 503494624:
						price = *Global_262145.f_34069;
						break;
				}
				break;
		
			default:
				dlcWeaponIndex2 = func_97(hParam0, &unk61);
			
				if (dlcWeaponIndex2 != -1)
				{
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex2); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex2, j, &ComponentDataPtr2))
						{
							if (!func_78(ComponentDataPtr2.f_3))
							{
								if (ComponentDataPtr2.f_3 == iParam1)
								{
									num = 1f;
								
									if (ComponentDataPtr2.f_5 == -1)
										price = -1;
									else
										price = ComponentDataPtr2.f_5;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_71())
	{
		TEXT_LABEL_ASSIGN_STRING(&unk137, func_69(iParam1, hParam0), 16);
		func_62(&unk121, unk137, ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 3, 1, func_67(hParam0), func_66(hParam0), -1, false, false);
	
		if (unk_0x0E4605546F88E7A3(&unk121))
			price = NETSHOPPING::NET_GAMESERVER_GET_PRICE(MISC::GET_HASH_KEY(&unk121), 1671640801, true);
	}

	if (price > 0)
	{
		num2 = func_23(hParam0, &price, num);
		num2 != 1f;
	}

	return price;
}

float func_23(Hash hParam0, var uParam1, float fParam2) // Position - 0x9B5D Hash - 0x9BB082D6 ^0x230CD90C
{
	float num;
	float num2;
	int num3;

	num = 0f;
	num2 = 0f;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_71())
	{
		num2 = num2 + func_61();
		num = 1f - num2;
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
		return num;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * fParam2);

	if (!Global_78558)
	{
		if (*uParam1 != 0)
		{
			num3 = func_52(hParam0);
		
			if (num3 == 3)
				num2 = 0.1f;
			else if (num3 == 2)
				num2 = 0.15f;
			else if (num3 == 1)
				num2 = 0.25f;
		}
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iLocal_54 == 1)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
			num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
		}
	
		if (iLocal_54 == 0)
		{
			*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * Global_262145.f_77);
		
			if (func_24())
			{
				num2 = num2 + (SYSTEM::TO_FLOAT(Global_262145.f_133) / 100f);
				iLocal_54 = 1;
			}
			else
			{
				iLocal_54 = -1;
			}
		}
	
		num2 = num2 + func_61();
	}

	num = 1f - num2;
	*uParam1 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(*uParam1) * num);
	return num;
}

BOOL func_24() // Position - 0x9C96 Hash - 0xDDF841F0 ^0x3071D49D
{
	int value;
	int value2;
	float num;

	if (MISC::IS_PC_VERSION())
		return false;

	if (func_112())
	{
		if (func_27())
		{
			value = func_26();
			value2 = func_25();
			num = (SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value)) * 100f;
		
			if (num > (float)Global_262145.f_132 && value >= 8)
				return true;
		}
	}

	return false;
}

int func_25() // Position - 0x9CF4 Hash - 0x158D17B9 ^0x158D17B9
{
	int num;

	num = num + Global_1665499;
	num = num + Global_1665502;
	return num;
}

int func_26() // Position - 0x9D10 Hash - 0x9819968 ^0x9819968
{
	int num;

	num = num + Global_1665500;
	num = num + Global_1665501;
	num = num + Global_1665499;
	num = num + Global_1665502;
	num = num + Global_1665504;
	num = num + Global_1665503;
	num = num + func_12(-1619412469);
	num = num + func_12(1659604058);
	num = num + func_12(242250445);
	num = num + func_12(-1440509968);
	num = num + func_12(55646841);
	num = num + func_12(995519836);
	num = num + func_12(915369945);
	num = num + func_12(-1029657896);
	num = num + func_12(1938637151);
	return num;
}

BOOL func_27() // Position - 0x9DCE Hash - 0x6C4FB78D ^0x39683114
{
	var year;
	var unk;

	CLOCK::GET_POSIX_TIME(&year, &(year.f_1), &(year.f_2), &(year.f_3), &(year.f_4), &(year.f_5));
	unk7 = { func_51(-77337635) };

	if (func_28(unk7, year, 7))
		return true;

	return false;
}

BOOL func_28(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14) // Position - 0x9E12 Hash - 0xF565A5F5 ^0x5E3CCA4C
{
	int num;
	int num2;

	num = func_49(uParam7);
	num2 = func_39(uParam0, iParam14);

	if (num2 == -15)
		return false;

	if (func_29(num, num2) == 1)
		return true;

	return false;
}

int func_29(int iParam0, int iParam1) // Position - 0x9E4D Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_37(iParam1) || !func_37(iParam0))
		return 1;

	num = func_35(iParam0);
	num2 = func_35(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_34(iParam0);
	num2 = func_34(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_33(iParam0);
	num2 = func_33(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_32(iParam0);
	num2 = func_32(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_31(iParam0);
	num2 = func_31(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_30(iParam0);
	num2 = func_30(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_30(int iParam0) // Position - 0x9F59 Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_31(int iParam0) // Position - 0x9F6C Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_32(int iParam0) // Position - 0x9F7F Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_33(int iParam0) // Position - 0x9F92 Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_34(int iParam0) // Position - 0x9FA4 Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

int func_35(int iParam0) // Position - 0x9FB1 Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_36(BOOL bParam0, var uParam1, var uParam2) // Position - 0x9FD3 Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_37(int iParam0) // Position - 0x9FEA Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_30(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_31(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_32(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_35(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_34(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_33(iParam0);

	if (num6 < 1 || num6 > func_38(num5, num4))
		return false;

	return true;
}

int func_38(int iParam0, int iParam1) // Position - 0xA0C6 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_39(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7) // Position - 0xA168 Hash - 0xF2723682 ^0xF2723682
{
	var unk;
	var unk2;
	var unk3;

	if (func_48(uParam0) == 0)
	{
		unk = func_49(uParam0);
		unk2 = unk;
		func_40(&unk2, 0, 0, 0, iParam7, 0, 0);
	
		if (iParam7 == 0)
			unk2 = unk;
	
		return unk2;
	}

	return unk3;
}

void func_40(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA1A8 Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_35(*uParam0);
	i = func_34(*uParam0);
	num2 = func_33(*uParam0);
	j = func_32(*uParam0);
	k = func_31(*uParam0);
	l = func_30(*uParam0);

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

	for (m = func_38(i, num); num2 > m; m = func_38(i, num))
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
	func_41(uParam0, l, k, j, num2, i, num);
	return;
}

void func_41(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0xA32A Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_47(uParam0, iParam1);
	func_46(uParam0, iParam2);
	func_45(uParam0, iParam3);
	func_44(uParam0, iParam5);
	func_43(uParam0, iParam4);
	func_42(uParam0, iParam6);
	return;
}

void func_42(var uParam0, int iParam1) // Position - 0xA362 Hash - 0x15B9927E ^0x4A4674
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

void func_43(var uParam0, int iParam1) // Position - 0xA3E8 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_34(*uParam0);
	num2 = func_35(*uParam0);

	if (iParam1 < 1 || iParam1 > func_38(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_44(var uParam0, int iParam1) // Position - 0xA439 Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_45(var uParam0, int iParam1) // Position - 0xA46C Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_46(var uParam0, int iParam1) // Position - 0xA4A6 Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_47(var uParam0, int iParam1) // Position - 0xA4E1 Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_48(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xA51D Hash - 0xF9EEC617 ^0x2258CCF1
{
	if (iParam0 == 0 && iParam0.f_1 == 0 && iParam0.f_2 == 0 && iParam0.f_3 == 0 && iParam0.f_4 == 0 && iParam0.f_5 == 0 && iParam0.f_6 == 0)
		return 1;

	return 0;
}

var func_49(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0xA573 Hash - 0x9F6F37DE ^0x78F6B3C5
{
	var unk;

	if (iParam0 > 0)
		func_42(&unk, iParam0);

	if (iParam0.f_1 > 0)
		func_44(&unk, func_50(iParam0.f_1));

	if (iParam0.f_2 > 0)
		func_43(&unk, iParam0.f_2);

	if (iParam0.f_3 > 0)
		func_45(&unk, iParam0.f_3);

	if (iParam0.f_4 > 0)
		func_46(&unk, iParam0.f_4);

	if (iParam0.f_5 > 0)
		func_47(&unk, iParam0.f_5);

	return unk;
}

int func_50(int iParam0) // Position - 0xA5E9 Hash - 0x8F784873 ^0x8F784873
{
	if (iParam0 < 1)
		return 0;

	if (iParam0 > 12)
		return 0;

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
			return 9;
	
		case 11:
			return 10;
	
		case 12:
			return 11;
	}

	return 0;
}

struct<7> func_51(Hash hParam0) // Position - 0xA6AE Hash - 0x2D2D830D ^0x8EF20162
{
	Hash statHash;
	var unk;
	var unk2;

	statHash = hParam0;

	if (STATS::STAT_GET_DATE(statHash, &outValue, 7, -1))
		return outValue;

	return unk;
}

int func_52(Hash hParam0) // Position - 0xA6D2 Hash - 0xC4FCD67A ^0xC4FCD67A
{
	int num;
	int num2;
	int i;
	var unk;
	BOOL unk2;

	num = func_56();

	if (hParam0 == 0 || !func_55(num))
		return -1;

	num2 = 7;

	switch (hParam0)
	{
		case -1569615261:
			break;
	
		case -72657034:
			break;
	
		case 324215364:
			num2 = 1;
			break;
	
		case 736523883:
			num2 = 1;
			break;
	
		case 2017895192:
			num2 = 3;
			break;
	
		case 487013001:
			num2 = 3;
			break;
	
		case -494615257:
			num2 = 3;
			break;
	
		case -1074790547:
			num2 = 2;
			break;
	
		case -2084633992:
			num2 = 2;
			break;
	
		case -1357824103:
			num2 = 2;
			break;
	
		case 100416529:
			break;
	
		case 205991906:
			break;
	
		case -1660422300:
			num2 = 4;
			break;
	
		case 2144741730:
			num2 = 4;
			break;
	
		case -1312131151:
			break;
	
		case -1568386805:
			break;
	
		case 1119849093:
			num2 = 5;
			break;
	
		case -1716189206:
			break;
	
		case 1737195953:
			break;
	
		case 883325847:
			break;
	
		case 911657153:
			break;
	
		case 584646201:
			num2 = 0;
			break;
	
		case 1593441988:
			num2 = 0;
			break;
	
		case 453432689:
			num2 = 0;
			break;
	
		case -37975472:
			break;
	
		case -1813897027:
			break;
	
		case 741814745:
			break;
	}

	if (num2 != 7)
	{
		switch (func_53(num2, num))
		{
			case 1:
				return 3;
		
			case 2:
				return 2;
		
			case 3:
				return 1;
		}
	}
	else
	{
		unk = 6;
		unk[0] = func_53(1, num);
		unk[1] = func_53(3, num);
		unk[2] = func_53(2, num);
		unk[3] = func_53(4, num);
		unk[4] = func_53(5, num);
		unk[5] = func_53(0, num);
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 3)
				flag = true;
		}
	
		if (!flag)
			return 1;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 2)
				flag = true;
		}
	
		if (!flag)
			return 2;
	
		flag = false;
	
		for (i = 0; i < 6; i = i + 1)
		{
			if (unk[i] < 1)
				flag = true;
		}
	
		if (!flag)
			return 3;
	}

	return -1;
}

int func_53(int iParam0, int iParam1) // Position - 0xA92E Hash - 0x4F6A5799 ^0x4F6A5799
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;

	if (iParam0 == 0)
	{
		num = 0;
		num2 = 1;
		num3 = 2;
		num4 = -1;
	}
	else if (iParam0 == 1)
	{
		num = 3;
		num2 = 4;
		num3 = 5;
		num4 = -1;
	}
	else if (iParam0 == 2)
	{
		num = 9;
		num2 = 10;
		num3 = 11;
		num4 = -1;
	}
	else if (iParam0 == 3)
	{
		num = 6;
		num2 = 7;
		num3 = 8;
		num4 = -1;
	}
	else if (iParam0 == 4)
	{
		num = 12;
		num2 = 13;
		num3 = 14;
		num4 = -1;
	}
	else if (iParam0 == 5)
	{
		num = 15;
		num2 = 16;
		num3 = 17;
		num4 = -1;
	}
	else if (iParam0 == 6)
	{
		num = 18;
		num2 = 19;
		num3 = 20;
		num4 = 21;
	}
	else
	{
		return 0;
	}

	num5 = func_54(num, iParam1);

	if (func_54(num2, iParam1) < num5)
		num5 = func_54(num2, iParam1);

	if (func_54(num3, iParam1) < num5)
		num5 = func_54(num3, iParam1);

	if (num4 != -1)
		if (func_54(num4, iParam1) < num5)
			num5 = func_54(num4, iParam1);

	return num5;
}

int func_54(int iParam0, int iParam1) // Position - 0xAA32 Hash - 0x7D70B3FA ^0xA137583A
{
	return Global_113648.f_19149[iParam1 /*271*/].f_3[iParam0 /*12*/].f_3;
}

BOOL func_55(int iParam0) // Position - 0xAA4E Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_56() // Position - 0xAA5A Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_57();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_57() // Position - 0xAA73 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_59(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_58(PLAYER::PLAYER_PED_ID());
		
			if (func_55(num) && !func_170(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_55(Global_113648.f_2365.f_539.f_4321))
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

int func_58(Ped pedParam0) // Position - 0xAB70 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_59(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_59(int iParam0) // Position - 0xABAD Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_55(iParam0))
		return func_60(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_60(int iParam0) // Position - 0xABD2 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

var func_61() // Position - 0xABE1 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_100733.f_2088;
}

void func_62(char* sParam0, var uParam1, var uParam2, var uParam3, var uParam4, Hash hParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, BOOL bParam11, BOOL bParam12) // Position - 0xABF0 Hash - 0x8FD7D7A8 ^0xE9BE2EC5
{
	switch (MISC::GET_HASH_KEY(&uParam1))
	{
		case 64715401:
		case -2016195117:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_R", 16);
			break;
	
		case -414529079:
		case -1253005183:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_C", 16);
			break;
	
		case 336264847:
		case -1119195824:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_RO", 16);
			break;
	
		case 531395379:
		case -672224483:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_CH", 16);
			break;
	
		case 1034118160:
		case 600999375:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_G", 16);
			break;
	
		case -218834291:
		case -859056265:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, "GSA_TYPE_B", 16);
			break;
	
		case 1779531303:
		case 82051787:
			TEXT_LABEL_ASSIGN_STRING(&uParam1, _("Fireworks"), 16);
			break;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 64);

	switch (iParam6)
	{
		case 0:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_HA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 1:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_CL_", 64);
		
			if (iParam7 == 12)
				TEXT_LABEL_APPEND_STRING(sParam0, "OUTFIT_", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam10 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
			}
			break;
	
		case 2:
			if (hParam5 == 1885233650)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "M", 64);
			else if (hParam5 == -1667301416)
				TEXT_LABEL_ASSIGN_STRING(sParam0, "F", 64);
		
			TEXT_LABEL_APPEND_STRING(sParam0, "_TA_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			break;
	
		case 3:
			TEXT_LABEL_APPEND_STRING(sParam0, "WP_", 64);
			TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
			TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
			TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
		
			if (iParam9 != -1)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
			}
			break;
	
		case 4:
			if (hParam5 == Global_75654)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_YACHT_t0_v0", 64);
			}
			else if (hParam5 == Global_75655)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == Global_75656)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BALLISTIC_EQUIPMENT_t0_v0", 64);
			}
			else if (hParam5 == Global_75657)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BIG_PLANE_t0_v0", 64);
			}
			else if (hParam5 == Global_75658)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_HACKER_TRUCK_t0_v0", 64);
			}
			else if (hParam5 == func_65())
			{
				TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_KOSATKA_t0_v0", 64);
			}
			else if (hParam5 == func_64())
			{
				if (iParam7 == 40)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VEU_BRICKADE2_t0_v0", 64);
				else if (iParam7 == 2)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t2_v38", 64);
				else if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t1_v38", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_BRICKADE2_t0_v38", 64);
			}
			else if (hParam5 == func_63())
			{
				if (iParam7 == 1)
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t1_v4", 64);
				else
					TEXT_LABEL_ASSIGN_STRING(sParam0, "VE_MANCHEZ3_t0_v4", 64);
			}
			else if (hParam5 == 0)
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_", 64);
			
				if (iParam7 == 24 || iParam7 == 25)
				{
					if (iParam9 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_1_", 64);
					else if (iParam9 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_2_", 64);
					else if (iParam9 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_EXTRA_1_", 64);
				
					if (iParam10 == 5)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CHROME_", 64);
					else if (iParam10 == 1)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_CLASSIC_", 64);
					else if (iParam10 == 0)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALLIC_", 64);
					else if (iParam10 == 4)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_METALS_", 64);
					else if (iParam10 == 3)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_MATTE_", 64);
					else if (iParam10 == 2)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_PEARLESCENT_", 64);
					else if (iParam10 == 7)
						TEXT_LABEL_APPEND_STRING(sParam0, "MCT_NONE_", 64);
				
					iParam9 = -1;
				}
				else if (iParam7 == 38)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_5_", 64);
				}
				else if (iParam7 == 65)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "COLOUR_6_", 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else if (iParam7 == 22)
			{
				TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
			
				if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1) || MISC::GET_HASH_KEY(&uParam1) == -515263000)
					return;
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEM_INSURANCE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case -2033222435:
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			}
			else if (iParam7 == 40)
			{
				switch (hParam5)
				{
					case -757735410:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "FCR2", 16);
						break;
				
					case 1790834270:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "DIABLOUS2", 16);
						break;
				
					case -2022483795:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, "COMET3", 16);
						break;
				
					default:
						TEXT_LABEL_ASSIGN_STRING(&uParam1, VEHICLE::GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(hParam5), 16);
					
						if (MISC::IS_STRING_NULL_OR_EMPTY(&uParam1))
							return;
						break;
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "VEU_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_t0_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			}
			else
			{
				TEXT_LABEL_APPEND_STRING(sParam0, "VE_", 64);
				TEXT_LABEL_APPEND_STRING(sParam0, &uParam1, 64);
			
				if (!bParam11)
				{
					switch (hParam5)
					{
						case -394074634:
						case -789894171:
						case -748008636:
						case 1737773231:
						case -1883002148:
						case 1621617168:
							TEXT_LABEL_APPEND_STRING(sParam0, "2", 64);
							break;
					
						case -2064372143:
						case -1241712818:
						case -1743316013:
						case -2052737935:
							TEXT_LABEL_APPEND_STRING(sParam0, "3", 64);
							break;
					
						case -2033222435:
							TEXT_LABEL_APPEND_STRING(sParam0, "4", 64);
							break;
					}
				}
			
				if (iParam9 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_n", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam9, 64);
				}
			
				TEXT_LABEL_APPEND_STRING(sParam0, "_t", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam7, 64);
				TEXT_LABEL_APPEND_STRING(sParam0, "_v", 64);
				TEXT_LABEL_APPEND_INT(sParam0, iParam8, 64);
			
				if (iParam10 != -1)
				{
					TEXT_LABEL_APPEND_STRING(sParam0, "_p", 64);
					TEXT_LABEL_APPEND_INT(sParam0, iParam10, 64);
				}
			}
			break;
	}

	if (bParam12)
		TEXT_LABEL_APPEND_STRING(sParam0, "_CESP", 64);

	return;
}

Hash func_63() // Position - 0xB220 Hash - 0x9F572D68 ^0x3E58ADFF
{
	return 1384502824;
}

Hash func_64() // Position - 0xB22D Hash - 0x9F572D68 ^0x97FA1023
{
	return -1576586413;
}

Hash func_65() // Position - 0xB23A Hash - 0x9F572D68 ^0x98C2EF7D
{
	return 1336872304;
}

int func_66(Hash hParam0) // Position - 0xB247 Hash - 0x7FC98130 ^0x7FC98130
{
	switch (hParam0)
	{
		case -1075685676:
		case 2024373456:
		case 961495388:
		case -86904375:
		case -608341376:
		case 177293209:
		case 1432025498:
		case -1768145561:
		case -2009644972:
		case 1785463520:
		case -879347409:
		case -2066285827:
			return 2;
	}

	return -1;
}

int func_67(Hash hParam0) // Position - 0xB2A6 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_68(hParam0);
}

int func_68(Hash hParam0) // Position - 0xB2B4 Hash - 0xEE599357 ^0xEE599357
{
	switch (hParam0)
	{
		case -1569615261:
			return 0;
	
		case 453432689:
			return 1;
	
		case 1593441988:
			return 2;
	
		case 584646201:
			return 3;
	
		case -1716589765:
			return 4;
	
		case 736523883:
			return 5;
	
		case -270015777:
			return 6;
	
		case 324215364:
			return 7;
	
		case -1074790547:
			return 8;
	
		case -2084633992:
			return 9;
	
		case -1357824103:
			return 11;
	
		case -1660422300:
			return 12;
	
		case 2144741730:
			return 13;
	
		case -572349828:
			return 14;
	
		case 741814745:
			return 15;
	
		case -1813897027:
			return 16;
	
		case -37975472:
			return 17;
	
		case 856002082:
			return 18;
	
		case 392730790:
			return 19;
	
		case 100416529:
			return 20;
	
		case 205991906:
			return 21;
	
		case 487013001:
			return 22;
	
		case -1654528753:
			return 23;
	
		case -494615257:
			return 24;
	
		case 2017895192:
			return 25;
	
		case -1568386805:
			return 26;
	
		case -1312131151:
			return 27;
	
		case 1119849093:
			return 28;
	
		case -344484024:
			return 29;
	
		case -1887867191:
			return 30;
	
		case 911657153:
			return 31;
	
		case -837150131:
			return 32;
	
		case -72657034:
			return 33;
	
		case -1716189206:
			return 34;
	
		case 1737195953:
			return 35;
	
		case 1317494643:
			return 36;
	
		case -1786099057:
			return 37;
	
		case -2067956739:
			return 38;
	
		case 1141786504:
			return 39;
	
		case 1305664598:
			return 40;
	
		case 615608432:
			return 41;
	
		case 101631238:
			return 42;
	
		case 883325847:
			return 43;
	
		case -38085395:
			return 44;
	
		case -102323637:
			return 45;
	
		case -1063057011:
			return 46;
	
		case -1076751822:
			return 47;
	
		case -771403250:
			return 49;
	
		case 2132975508:
			return 48;
	
		case 1627465347:
			return 50;
	
		case -1834847097:
			return 51;
	
		case 137902532:
			return 52;
	
		case 1198879012:
			return 57;
	
		case -1466123874:
			return 53;
	
		case 2138347493:
			return 54;
	
		case -952879014:
			return 56;
	
		case 984333226:
			return 55;
	
		case -1420407917:
			return 60;
	
		case 1672152130:
			return 61;
	
		case -102973651:
			return 58;
	
		case 1834241177:
			return 59;
	
		case 171789620:
			return 64;
	
		case -656458692:
			return 62;
	
		case -598887786:
			return 63;
	
		case -581044007:
			return 65;
	
		case -619010992:
			return 68;
	
		case -275439685:
			return 66;
	
		case 1649403952:
			return 67;
	
		case -1951375401:
			return 69;
	
		case -1045183535:
			return 70;
	
		case -538741184:
			return 71;
	
		case 317205821:
			return 72;
	
		case -1121678507:
			return 73;
	
		case 125959754:
			return 74;
	
		case -853065399:
			return 75;
	
		case -1169823560:
			return 76;
	
		case -1810795771:
			return 77;
	
		case 419712736:
			return 78;
	
		case 961495388:
			return 8;
	
		case -86904375:
			return 9;
	
		case -608341376:
			return 13;
	
		case 177293209:
			return 21;
	
		case -1075685676:
			return 1;
	
		case 2024373456:
			return 5;
	
		case 1432025498:
			return 22;
	
		case -1768145561:
			return 46;
	
		case -2009644972:
			return 47;
	
		case 1785463520:
			return 56;
	
		case -879347409:
			return 70;
	
		case -2066285827:
			return 48;
	
		case -1746263880:
			return 79;
	
		case 940833800:
			return 80;
	
		case -1355376991:
			return 81;
	
		case 1198256469:
			return 82;
	
		case -1238556825:
			return 83;
	
		case -1853920116:
			return 84;
	
		case 727643628:
			return 85;
	
		case 94989220:
			return 86;
	
		case -1658906650:
			return 88;
	
		case 1470379660:
			return 87;
	
		case -947031628:
			return 10;
	
		case -618237638:
			return 89;
	
		case 406929569:
			return 90;
	
		case 1171102963:
			return 91;
	
		case -610080759:
			return 92;
	
		case -774507221:
			return 93;
	
		case 1853742572:
			return 94;
	
		case 465894841:
			return 95;
	
		case 1703483498:
			return 96;
	
		case -22923932:
			return 97;
	}

	return 0;
}

char* func_69(int iParam0, Hash hParam1) // Position - 0xB8BE Hash - 0xF8673E79 ^0x1874A6FF
{
	int dlcWeaponIndex;
	int i;
	var unk;
	var unk2;

	if (hParam1 == -656458692)
	{
		switch (iParam0)
		{
			case -213504205:
				return _("Knuckle Duster");
		
			case -971770235:
				return "WCT_KNUCK_02";
		
			case -287703709:
				return "WCT_KNUCK_BG";
		
			case 1351683121:
				return "WCT_KNUCK_DLR";
		
			case -1755194916:
				return "WCT_KNUCK_DMD";
		
			case 2112683568:
				return "WCT_KNUCK_HT";
		
			case 1062111910:
				return "WCT_KNUCK_LV";
		
			case 146278587:
				return "WCT_KNUCK_PC";
		
			case -494162961:
				return "WCT_KNUCK_SLG";
		
			case 2062808965:
				return "WCT_KNUCK_VG";
		}
	}
	else if (hParam1 == -1786099057)
	{
		switch (iParam0)
		{
			case 716207715:
				return "WCT_BAT_XM3";
		
			case 446271089:
				return "WCT_BAT_XM301";
		
			case 1045616099:
				return "WCT_BAT_XM302";
		
			case 1336277129:
				return "WCT_BAT_XM303";
		
			case -513369076:
				return "WCT_BAT_XM304";
		
			case -447700000:
				return "WCT_BAT_XM305";
		
			case -149207179:
				return "WCT_BAT_XM306";
		
			case 166784288:
				return "WCT_BAT_XM307";
		
			case 2068729789:
				return "WCT_BAT_XM308";
		
			case 1761389338:
				return "WCT_BAT_XM309";
		}
	}
	else if (hParam1 == -1716189206)
	{
		switch (iParam0)
		{
			case 370527443:
				return "WCT_KNIFE_XM3";
		
			case 1109907117:
				return "WCT_KNIFE_XM301";
		
			case 2055456612:
				return "WCT_KNIFE_XM302";
		
			case 1690606566:
				return "WCT_KNIFE_XM303";
		
			case -1633316949:
				return "WCT_KNIFE_XM304";
		
			case -1461476313:
				return "WCT_KNIFE_XM305";
		
			case -1770422457:
				return "WCT_KNIFE_XM306";
		
			case -2059739958:
				return "WCT_KNIFE_XM307";
		
			case -1280001599:
				return "WCT_KNIFE_XM308";
		
			case -922885037:
				return "WCT_KNIFE_XM309";
		}
	}

	switch (iParam0)
	{
		case 0:
			return _("No Attachment");
	
		case 1967214384:
			return "WCT_RAIL";
	
		case 202788691:
			return _("Grip");
	
		case 899381934:
			return _("Flashlight");
	
		case 2076495324:
			return _("Flashlight");
	
		case -1657815255:
			return _("Scope");
	
		case 1019656791:
			return _("Scope");
	
		case -1439939148:
			return _("Scope");
	
		case 1006677997:
			return _("Scope");
	
		case -1596416958:
			return _("Scope");
	
		case -767279652:
			return _("Scope");
	
		case -1135289737:
			return _("Advanced Scope");
	
		case -1023114086:
			return _("Suppressor");
	
		case -2089531990:
			return _("Suppressor");
	
		case -1489156508:
			return _("Suppressor");
	
		case -435637410:
			return _("Suppressor");
	
		case -19858063:
			return _("Default Clip");
	
		case -316253668:
			return _("Extended Clip");
	
		case 119648377:
			return _("Default Clip");
	
		case -696561875:
			return _("Extended Clip");
	
		case 834974250:
			return _("Default Clip");
	
		case 614078421:
			return _("Extended Clip");
	
		case -884429072:
			return _("Default Clip");
	
		case 283556395:
			return _("Extended Clip");
	
		case 643254679:
			return _("Default Clip");
	
		case 889808635:
			return _("Extended Clip");
	
		case -1101075946:
			return _("Default Clip");
	
		case -1323216997:
			return _("Extended Clip");
	
		case -1614924820:
			return _("Default Clip");
	
		case -1861183855:
			return _("Extended Clip");
	
		case -91250417:
			return _("Default Clip");
	
		case -1899902599:
			return _("Extended Clip");
	
		case -197857404:
			return _("Default Clip");
	
		case -2112517305:
			return _("Extended Clip");
	
		case -503336118:
			return _("Default Clip");
	
		case -691692330:
			return _("Extended Clip");
	
		case -1796727865:
			return _("Default Clip");
	
		case -2034401422:
			return _("Extended Clip");
	
		case -1681506167:
			return _("Default Clip");
	
		case 1198478068:
			return _("Default Clip");
	
		case -924946682:
			return _("Extended Clip");
	
		case -1928132688:
			return _("Default Clip");
	
		case -1152981993:
			return _("Extended Clip");
	
		case 580369945:
			return _("Default Clip");
	
		case -640439150:
			return _("Extended Clip");
	
		case 195735895:
			return _("Default Clip");
	
		case -890514874:
			return _("Default Clip");
	
		case -507117574:
			return _("Extended Clip");
	
		case -124428919:
			return _("Default Clip");
	
		case 1048471894:
			return _("Extended Clip");
	
		case -125817127:
			return _("Default Clip");
	
		case 2063610803:
			return _("Extended Clip");
	
		case 1168357051:
			return _("Default Clip");
	
		case 867832552:
			return _("Extended Clip");
	
		case 844049759:
			return _("Default Clip");
	
		case -667205311:
			return _("Default Clip");
	
		case -1759709443:
			return _("Extended Clip");
	
		case -855823675:
			return _("Extended Clip");
	
		case 927578299:
			return _("Default Clip");
	
		case -2053876401:
			return _("Extended Clip");
	
		case 471997210:
			return _("Scope");
	
		case 1709866683:
			return _("Suppressor");
	
		case 1125642654:
			return _("Default Clip");
	
		case 860508675:
			return _("Extended Clip");
	
		case -878820883:
			return _("Default Clip");
	
		case 1198425599:
			return _("Default Clip");
	
		case -1188271751:
			return _("Extended Clip");
	
		case 1319990579:
			return "WCT_VAR_GOLD";
	
		case 930927479:
			return "WCT_VAR_METAL";
	
		case -660892072:
			return "WCT_VAR_GOLD";
	
		case -1686714580:
			return "WCT_VAR_METAL";
	
		case -684126074:
			return "WCT_VAR_GOLD";
	
		case 2008591151:
			return "WCT_VAR_SIL";
	
		case 2053798779:
			return "WCT_VAR_WOOD";
	
		case 663170192:
			return "WCT_VAR_GOLD";
	
		case 1215999497:
			return "WCT_VAR_GOLD";
	
		case -2052698631:
			return "WCT_VAR_METAL";
	
		case 1077065191:
			return "WCT_VAR_WOOD";
	
		case 371102273:
			return "WCT_VAR_GOLD";
	
		case 663517359:
			return "WCT_VAR_GOLD";
	
		case -1470645128:
			return "WCT_VAR_METAL";
	
		case -1828795171:
			return "WCT_VAR_ETCHM";
	
		case -966439566:
			return "WCT_VAR_GOLD";
	
		case -690308418:
			return "WCT_VAR_GOLD";
	
		case -1562927653:
			return "WCT_VAR_GOLD";
	
		case -2144080721:
			return "WCT_VAR_WOOD";
	
		case 1929467122:
			return "WCT_VAR_ETCHM";
	
		case -1858624256:
			return "WCT_SB_BASE";
	
		case 1530822070:
			return "WCT_SB_VAR1";
	
		case -409758110:
			return "WCT_SB_VAR2";
	
		case -377062173:
			return _("Default Clip");
	
		case 384708672:
			return "WCT_REV_VARB";
	
		case -1802258419:
			return "WCT_REV_VARG";
	
		case 2043113590:
			return "WCT_CLIP_DRM";
	
		case -1167922891:
			return "WCT_CLIP_BOX";
	
		case -604986051:
			return "WCT_CLIP_DRM";
	
		case -2000168365:
			return "WCT_CLIP_DRM";
	
		case 1623028892:
			return "WCT_VAR_GUN";
	
		case -1214048550:
			return "WCT_CAMO_IND";
	
		case 1142457062:
			return "WCT_CAMO_IND";
	
		case -829683854:
			return _("Extended Clip");
	
		case -944910075:
			return "WCT_SCOPE_MAC2";
	
		case 1060929921:
			return "WCT_SCOPE_SML2";
	
		case -673450233:
			return "WCT_VAR_RAY18";
	
		case 1423184737:
			return _("Default Clip");
	
		case -2122814295:
			return _("Extended Clip");
	
		case -1828202758:
			return _("Suppressor");
	
		case -325063463:
			return "WCT_VAR_FAM";
	
		case 2012362801:
			return "WCT_VAR_WEED";
	
		case 1657753414:
			return "WCT_VAR_STUD";
	
		case -242322891:
			return "WCT_VAR_BONE";
	
		case 1141184690:
			return "WCT_PISTMK2_XM3";
	
		case -1566778158:
			return "WCT_MSMG_XM3";
	
		case 330905451:
			return "WCT_PUMPSHT_XM3";
	
		case 375646046:
			return _("Default Clip");
	
		case 503494624:
			return _("Suppressor");
	
		default:
			if (hParam1 != 0)
			{
				dlcWeaponIndex = func_97(hParam1, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
							if (ComponentDataPtr.f_3 == iParam0)
								return func_70(&(ComponentDataPtr.f_6));
					}
				}
			}
			break;
	}

	return "WCT_INVALID";
}

char* func_70(var uParam0) // Position - 0xC27E Hash - 0xC9D82232 ^0xC9D82232
{
	return uParam0;
}

BOOL func_71() // Position - 0xC288 Hash - 0xD8D9617D ^0xA930711D
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_72())
		return true;

	return false;
}

BOOL func_72() // Position - 0xC2A5 Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

// Unhandled jump detected. Output should be considered invalid
BOOL func_73(int iParam0) // Position - 0xC2BC Hash - 0x5CB0EDAD ^0x861666ED
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		switch (iParam0)
		{
			case -604986051:
			case -1167922891:
			case 1857603803:
			case -972590066:
			case -2000168365:
			case -1444295948:
			case 2043113590:
			case 1801039530:
				return false;
		
			default:
				goto 0x5E;
		}
	}
	else if (func_74(iParam0))
	{
		return Global_262145.f_21188;
	}

	return true;
}

BOOL func_74(int iParam0) // Position - 0xC31E Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1827882671:
		case 966612367:
		case 1815270123:
		case -687617715:
		case -1179558480:
		case -631911105:
		case 1178671645:
		case 1377355801:
		case 1142457062:
		case -1214048550:
		case -648943513:
		case -974541230:
			return true;
	}

	return false;
}

int func_75() // Position - 0xC37D Hash - 0xAF10CE31 ^0xCCA83A01
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

int func_76() // Position - 0xC433 Hash - 0xAF3D3332 ^0xE009CBFC
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

BOOL func_77() // Position - 0xC56C Hash - 0x44DD83CC ^0x6D2C8335
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

BOOL func_78(int iParam0) // Position - 0xC624 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case -1258515792:
		case 438243936:
		case -455079056:
		case 740920107:
		case -541616347:
		case 1809261196:
		case -1646538868:
		case -1290164948:
		case -964465134:
		case 1135718771:
		case 1253942266:
		case -403805974:
		case 691432737:
		case 987648331:
		case -431680535:
		case -847582310:
		case -92592218:
		case -494548326:
		case 730876697:
		case 583159708:
		case -1928503603:
		case 520557834:
		case 1011473080:
			return true;
	}

	return false;
}

int func_79(Hash hParam0, var uParam1) // Position - 0xC6C5 Hash - 0x254C172 ^0xDF4A3ACD
{
	int num;
	int num2;
	var unk;

	num = 0;

	switch (hParam0)
	{
		case -1716189206:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_80(370527443, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 370527443;
					num = num + 1;
				}
			
				if (func_80(1109907117, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1109907117;
					num = num + 1;
				}
			
				if (func_80(2055456612, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2055456612;
					num = num + 1;
				}
			
				if (func_80(1690606566, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1690606566;
					num = num + 1;
				}
			
				if (func_80(-1633316949, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1633316949;
					num = num + 1;
				}
			
				if (func_80(-1461476313, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1461476313;
					num = num + 1;
				}
			
				if (func_80(-1770422457, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1770422457;
					num = num + 1;
				}
			
				if (func_80(-2059739958, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -2059739958;
					num = num + 1;
				}
			
				if (func_80(-1280001599, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -1280001599;
					num = num + 1;
				}
			
				if (func_80(-922885037, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -922885037;
					num = num + 1;
				}
			}
			break;
	
		case -1786099057:
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (func_80(716207715, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 716207715;
					num = num + 1;
				}
			
				if (func_80(446271089, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 446271089;
					num = num + 1;
				}
			
				if (func_80(1045616099, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1045616099;
					num = num + 1;
				}
			
				if (func_80(1336277129, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1336277129;
					num = num + 1;
				}
			
				if (func_80(-513369076, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -513369076;
					num = num + 1;
				}
			
				if (func_80(-447700000, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -447700000;
					num = num + 1;
				}
			
				if (func_80(-149207179, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = -149207179;
					num = num + 1;
				}
			
				if (func_80(166784288, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 166784288;
					num = num + 1;
				}
			
				if (func_80(2068729789, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 2068729789;
					num = num + 1;
				}
			
				if (func_80(1761389338, hParam0, &num2, &unk) && num2)
				{
					uParam1->[num] = 1761389338;
					num = num + 1;
				}
			}
			break;
	}

	return num;
}

int func_80(int iParam0, Hash hParam1, var uParam2, var uParam3) // Position - 0xCA41 Hash - 0x6D916C2C ^0x85D704C2
{
	*uParam2 = 1;
	*uParam3 = 0;

	switch (hParam1)
	{
		case -1786099057:
			if (!*Global_262145.f_33877 || func_82(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	
		case -1716189206:
			if (!*Global_262145.f_33877 || func_82(iParam0, hParam1, -1))
			{
				*uParam2 = 1;
				*uParam3 = 0;
				return 1;
			}
		
			if (*Global_262145.f_33877)
			{
				*uParam2 = 0;
				*uParam3 = 1;
				return 1;
			}
		
			return 1;
	}

	return 0;
}

BOOL func_81(int iParam0) // Position - 0xCAF7 Hash - 0x10F98E3 ^0x10F98E3
{
	return iParam0 == 58;
}

BOOL func_82(int iParam0, Hash hParam1, int iParam2) // Position - 0xCB04 Hash - 0xE0DDFDFF ^0xE0DDFDFF
{
	int num;
	int num2;

	if (func_91())
		return false;

	num = func_86(iParam0, hParam1, iParam2);
	num2 = func_84(iParam0, hParam1);
	return IS_BIT_SET(num, func_83(num2));
}

int func_83(int iParam0) // Position - 0xCB36 Hash - 0x9042BAD4 ^0x9042BAD4
{
	return iParam0 % 32;
}

int func_84(int iParam0, int iParam1) // Position - 0xCB43 Hash - 0x33C225B6 ^0x33C225B6
{
	return func_85(iParam0, iParam1);
}

int func_85(int iParam0, int iParam1) // Position - 0xCB53 Hash - 0xF573E303 ^0xF573E303
{
	switch (iParam1)
	{
		case 453432689:
			switch (iParam0)
			{
				case -19858063:
					return 1;
			
				case -316253668:
					return 2;
			
				case 899381934:
					return 3;
			
				case 1709866683:
					return 4;
			
				case -684126074:
					return 175;
			
				case 1623028892:
					return 211;
			}
			break;
	
		case 1593441988:
			switch (iParam0)
			{
				case 119648377:
					return 5;
			
				case -696561875:
					return 6;
			
				case 899381934:
					return 7;
			
				case -1023114086:
					return 8;
			
				case -966439566:
					return 186;
			}
			break;
	
		case 584646201:
			switch (iParam0)
			{
				case 834974250:
					return 11;
			
				case 614078421:
					return 12;
			
				case 899381934:
					return 13;
			
				case -1023114086:
					return 14;
			
				case -1686714580:
					return 164;
			
				case 1657753414:
					return 569;
			}
			break;
	
		case 324215364:
			switch (iParam0)
			{
				case -884429072:
					return 15;
			
				case 283556395:
					return 16;
			
				case 899381934:
					return 17;
			
				case -1657815255:
					return 18;
			
				case -1489156508:
					return 19;
			
				case 1215999497:
					return 174;
			
				case 2012362801:
					return 570;
			
				case -1566778158:
					return 602;
			}
			break;
	
		case 736523883:
			switch (iParam0)
			{
				case 643254679:
					return 22;
			
				case 889808635:
					return 23;
			
				case 2043113590:
					return 207;
			
				case 2076495324:
					return 24;
			
				case 1019656791:
					return 25;
			
				case -1023114086:
					return 26;
			
				case 663170192:
					return 179;
			
				case 1623028892:
					return 212;
			}
			break;
	
		case -1074790547:
			switch (iParam0)
			{
				case -1101075946:
					return 27;
			
				case -1323216997:
					return 28;
			
				case -604986051:
					return 201;
			
				case 202788691:
					return 29;
			
				case 2076495324:
					return 30;
			
				case -1657815255:
					return 31;
			
				case -1489156508:
					return 32;
			
				case 1319990579:
					return 165;
			
				case 1623028892:
					return 213;
			}
			break;
	
		case -2084633992:
			switch (iParam0)
			{
				case -1614924820:
					return 33;
			
				case -1861183855:
					return 34;
			
				case -1167922891:
					return 202;
			
				case 1967214384:
					return 35;
			
				case 202788691:
					return 36;
			
				case 2076495324:
					return 37;
			
				case -1596416958:
					return 38;
			
				case -2089531990:
					return 39;
			
				case -660892072:
					return 168;
			
				case 1623028892:
					return 214;
			}
			break;
	
		case -1357824103:
			switch (iParam0)
			{
				case -91250417:
					return 44;
			
				case -1899902599:
					return 45;
			
				case 2076495324:
					return 47;
			
				case -1439939148:
					return 48;
			
				case -2089531990:
					return 49;
			
				case 930927479:
					return 163;
			}
			break;
	
		case -1660422300:
			switch (iParam0)
			{
				case -197857404:
					return 50;
			
				case -2112517305:
					return 51;
			
				case 1006677997:
					return 52;
			
				case -690308418:
					return 187;
			}
			break;
	
		case 2144741730:
			switch (iParam0)
			{
				case -503336118:
					return 53;
			
				case -691692330:
					return 54;
			
				case 202788691:
					return 55;
			
				case -1596416958:
					return 56;
			
				case -1828795171:
					return 188;
			
				case 1623028892:
					return 215;
			}
			break;
	
		case 487013001:
			switch (iParam0)
			{
				case -435637410:
					return 59;
			
				case 2076495324:
					return 60;
			
				case -1562927653:
					return 193;
			
				case 1623028892:
					return 389;
			
				case -242322891:
					return 571;
			
				case 330905451:
					return 603;
			}
			break;
	
		case -494615257:
			switch (iParam0)
			{
				case -1796727865:
					return 64;
			
				case -2034401422:
					return 65;
			
				case 202788691:
					return 66;
			
				case 2076495324:
					return 67;
			
				case -2089531990:
					return 68;
			}
			break;
	
		case 100416529:
			switch (iParam0)
			{
				case -1681506167:
					return 69;
			
				case -767279652:
					return 70;
			
				case -1135289737:
					return 71;
			
				case -1489156508:
					return 72;
			
				case 1077065191:
					return 180;
			}
			break;
	
		case 205991906:
			switch (iParam0)
			{
				case 1198478068:
					return 76;
			
				case -1135289737:
					return 77;
			
				case -767279652:
					return 82;
			
				case 1623028892:
					return 216;
			}
			break;
	
		case -1568386805:
			switch (iParam0)
			{
				case 202788691:
					return 78;
			
				case 2076495324:
					return 79;
			
				case -1439939148:
					return 80;
			}
			break;
	
		case 1119849093:
			switch (iParam0)
			{
				case -924946682:
					return 81;
			}
			break;
	
		case -270015777:
			switch (iParam0)
			{
				case -1928132688:
					return 83;
			
				case -1152981993:
					return 84;
			
				case 2076495324:
					return 85;
			
				case -1657815255:
					return 86;
			
				case -1489156508:
					return 87;
			
				case 663517359:
					return 189;
			}
			break;
	
		case -1654528753:
			switch (iParam0)
			{
				case 202788691:
					return 88;
			
				case 2076495324:
					return 89;
			
				case -1489156508:
					return 90;
			}
			break;
	
		case -1716589765:
			switch (iParam0)
			{
				case 580369945:
					return 91;
			
				case -640439150:
					return 92;
			
				case 899381934:
					return 93;
			
				case -1489156508:
					return 94;
			
				case 2008591151:
					return 176;
			}
			break;
	
		case 392730790:
			switch (iParam0)
			{
				case 195735895:
					return 95;
			
				case -767279652:
					return 96;
			
				case -1135289737:
					return 97;
			
				case -2089531990:
					return 98;
			}
			break;
	
		case -572349828:
			switch (iParam0)
			{
				case -890514874:
					return 105;
			
				case -507117574:
					return 106;
			
				case 202788691:
					return 107;
			
				case -1596416958:
					return 108;
			}
			break;
	
		case -1887867191:
			switch (iParam0)
			{
				case -124428919:
					return 109;
			
				case 1048471894:
					return 110;
			}
			break;
	
		case -1063057011:
			switch (iParam0)
			{
				case -959978111:
					return 111;
			
				case 2089537806:
					return 112;
			
				case 1801039530:
					return 208;
			
				case 202788691:
					return 113;
			
				case 2076495324:
					return 114;
			
				case -1596416958:
					return 115;
			
				case -1489156508:
					return 116;
			
				case 1929467122:
					return 190;
			
				case 1623028892:
					return 390;
			}
			break;
	
		case -1076751822:
			switch (iParam0)
			{
				case -125817127:
					return 117;
			
				case 2063610803:
					return 118;
			
				case 899381934:
					return 119;
			
				case -1023114086:
					return 120;
			
				case -2144080721:
					return 191;
			
				case 1623028892:
					return 391;
			}
			break;
	
		case -771403250:
			switch (iParam0)
			{
				case 222992026:
					return 121;
			
				case 1694090795:
					return 122;
			
				case 899381934:
					return 123;
			
				case -1023114086:
					return 124;
			
				case 2053798779:
					return 171;
			}
			break;
	
		case 2132975508:
			switch (iParam0)
			{
				case -979292288:
					return 131;
			
				case -1284994289:
					return 132;
			
				case 2076495324:
					return 127;
			
				case -2089531990:
					return 128;
			
				case -1439939148:
					return 129;
			
				case 202788691:
					return 130;
			
				case -1470645128:
					return 192;
			
				case 1623028892:
					return 394;
			}
			break;
	
		case 1627465347:
			switch (iParam0)
			{
				case 484812453:
					return 125;
			
				case -355941776:
					return 126;
			}
			break;
	
		case 137902532:
			switch (iParam0)
			{
				case 1168357051:
					return 133;
			
				case 867832552:
					return 134;
			
				case -1023114086:
					return 136;
			}
			break;
	
		case 984333226:
			switch (iParam0)
			{
				case 844049759:
					return 137;
			
				case -1759709443:
					return 140;
			
				case -2000168365:
					return 205;
			
				case 2076495324:
					return 145;
			
				case -1489156508:
					return 146;
			
				case 202788691:
					return 147;
			}
			break;
	
		case -952879014:
			switch (iParam0)
			{
				case -667205311:
					return 138;
			
				case -855823675:
					return 139;
			
				case 471997210:
					return 141;
			
				case 2076495324:
					return 142;
			
				case -2089531990:
					return 143;
			
				case 202788691:
					return 144;
			
				case 371102273:
					return 172;
			
				case 1623028892:
					return 392;
			}
			break;
	
		case 171789620:
			switch (iParam0)
			{
				case 1125642654:
					return 149;
			
				case 860508675:
					return 150;
			
				case 1857603803:
					return 203;
			
				case 2076495324:
					return 151;
			
				case -1439939148:
					return 152;
			
				case 202788691:
					return 153;
			}
			break;
	
		case 2017895192:
			switch (iParam0)
			{
				case -2052698631:
					return 178;
			}
			break;
	
		case -598887786:
			switch (iParam0)
			{
				case -878820883:
					return 148;
			}
			break;
	
		case -656458692:
			switch (iParam0)
			{
				case -971770235:
					return 154;
			
				case -287703709:
					return 155;
			
				case 1351683121:
					return 156;
			
				case -1755194916:
					return 157;
			
				case 2112683568:
					return 158;
			
				case 1062111910:
					return 159;
			
				case 146278587:
					return 160;
			
				case -494162961:
					return 161;
			
				case 2062808965:
					return 162;
			}
			break;
	
		case -619010992:
			switch (iParam0)
			{
				case 1198425599:
					return 184;
			
				case -1188271751:
					return 185;
			
				case -1444295948:
					return 206;
			
				case -1023114086:
					return 183;
			}
			break;
	
		case -538741184:
			switch (iParam0)
			{
				case 1530822070:
					return 194;
			
				case -409758110:
					return 195;
			}
			break;
	
		case -1045183535:
			switch (iParam0)
			{
				case -377062173:
					return 196;
			
				case 384708672:
					return 197;
			
				case -1802258419:
					return 198;
			
				case 1623028892:
					return 393;
			}
			break;
	
		case 1649403952:
			switch (iParam0)
			{
				case 1363085923:
					return 199;
			
				case 1509923832:
					return 200;
			
				case -972590066:
					return 204;
			}
			break;
	
		case -1121678507:
			switch (iParam0)
			{
				case -2067221805:
					return 209;
			
				case -1820405577:
					return 210;
			}
			break;
	
		case -1075685676:
			switch (iParam0)
			{
				case -1795936926:
					return 217;
			
				case 1591132456:
					return 218;
			
				case 1329061674:
					return 219;
			
				case -2046910199:
					return 220;
			
				case 733837882:
					return 221;
			
				case 634039983:
					return 222;
			
				case 1140676955:
					return 223;
			
				case -1898661008:
					return 224;
			
				case 1709866683:
					return 225;
			
				case 568543123:
					return 226;
			
				case 1550611612:
					return 367;
			
				case 368550800:
					return 368;
			
				case -1769069349:
					return 369;
			
				case 24902297:
					return 370;
			
				case -228041614:
					return 371;
			
				case -584961562:
					return 372;
			
				case -1153175946:
					return 373;
			
				case 1301287696:
					return 374;
			
				case 1597093459:
					return 375;
			
				case 1769871776:
					return 376;
			
				case -1827882671:
					return 377;
			
				case 1141184690:
					return 601;
			}
			break;
	
		case 2024373456:
			switch (iParam0)
			{
				case 1277460590:
					return 227;
			
				case -1182573778:
					return 228;
			
				case 190476639:
					return 229;
			
				case 974903034:
					return 230;
			
				case -644734235:
					return 231;
			
				case 2146055916:
					return 232;
			
				case 2076495324:
					return 233;
			
				case -1613015470:
					return 234;
			
				case -452809877:
					return 235;
			
				case 1038927834:
					return 236;
			
				case -1023114086:
					return 237;
			
				case -1181482284:
					return 238;
			
				case -932732805:
					return 239;
			
				case -569259057:
					return 240;
			
				case -326080308:
					return 241;
			
				case 48731514:
					return 242;
			
				case 880736428:
					return 243;
			
				case 1303784126:
					return 244;
			
				case -653246751:
					return 245;
			
				case -1520117877:
					return 246;
			
				case -996700057:
					return 378;
			
				case 940943685:
					return 379;
			
				case 1263226800:
					return 380;
			
				case -328035840:
					return 381;
			
				case 1224100642:
					return 382;
			
				case 899228776:
					return 383;
			
				case 616006309:
					return 384;
			
				case -1561952511:
					return 385;
			
				case 572063080:
					return 386;
			
				case 1170588613:
					return 387;
			
				case 966612367:
					return 388;
			}
			break;
	
		case 177293209:
			switch (iParam0)
			{
				case -98690520:
					return 247;
			
				case 752418717:
					return 248;
			
				case -130689324:
					return 249;
			
				case -1981031769:
					return 250;
			
				case 1005144310:
					return 251;
			
				case 247526935:
					return 252;
			
				case -2101279869:
					return 253;
			
				case -1135289737:
					return 254;
			
				case -1233121104:
					return 255;
			
				case 776198721:
					return 256;
			
				case -1404903567:
					return 257;
			
				case 1602080333:
					return 258;
			
				case 1764221345:
					return 259;
			
				case -1869205321:
					return 260;
			
				case 277524638:
					return 261;
			
				case -130843390:
					return 356;
			
				case -977347227:
					return 357;
			
				case -378461067:
					return 358;
			
				case 329939175:
					return 359;
			
				case 643374672:
					return 360;
			
				case 807875052:
					return 361;
			
				case -1401804168:
					return 362;
			
				case -1096495395:
					return 363;
			
				case -847811454:
					return 364;
			
				case -1413108537:
					return 365;
			
				case 1815270123:
					return 366;
			}
			break;
	
		case -608341376:
			switch (iParam0)
			{
				case 1227564412:
					return 262;
			
				case 400507625:
					return 263;
			
				case 696788003:
					return 264;
			
				case 1475288264:
					return 265;
			
				case -1020871238:
					return 266;
			
				case -161179835:
					return 267;
			
				case -1654288262:
					return 268;
			
				case 1108334355:
					return 269;
			
				case 1060929921:
					return 270;
			
				case -966040254:
					return 271;
			
				case -1181482284:
					return 272;
			
				case -932732805:
					return 273;
			
				case -569259057:
					return 274;
			
				case -326080308:
					return 275;
			
				case 48731514:
					return 276;
			
				case 880736428:
					return 277;
			
				case 1303784126:
					return 278;
			
				case -1018236364:
					return 279;
			
				case -1243457701:
					return 280;
			
				case 1249283253:
					return 345;
			
				case -857707587:
					return 346;
			
				case -1097543898:
					return 347;
			
				case 1980349969:
					return 348;
			
				case 1219453777:
					return 349;
			
				case -1853459190:
					return 350;
			
				case -2074781016:
					return 351;
			
				case 457967755:
					return 352;
			
				case 235171324:
					return 353;
			
				case 42685294:
					return 354;
			
				case -687617715:
					return 355;
			}
			break;
	
		case 961495388:
			switch (iParam0)
			{
				case -2045758401:
					return 281;
			
				case -785724817:
					return 282;
			
				case -1478681000:
					return 283;
			
				case 1675665560:
					return 284;
			
				case -76490669:
					return 285;
			
				case -282298175:
					return 286;
			
				case -1654288262:
					return 287;
			
				case 2076495324:
					return 288;
			
				case 1108334355:
					return 289;
			
				case 77277509:
					return 290;
			
				case -966040254:
					return 291;
			
				case -1489156508:
					return 292;
			
				case -1181482284:
					return 293;
			
				case -932732805:
					return 294;
			
				case -569259057:
					return 295;
			
				case -326080308:
					return 296;
			
				case 48731514:
					return 297;
			
				case 880736428:
					return 298;
			
				case 1303784126:
					return 299;
			
				case 1134861606:
					return 300;
			
				case 1447477866:
					return 301;
			
				case -1860492113:
					return 323;
			
				case 937772107:
					return 324;
			
				case 1401650071:
					return 325;
			
				case 628662130:
					return 326;
			
				case -985047251:
					return 327;
			
				case -812944463:
					return 328;
			
				case -1447352303:
					return 329;
			
				case -60338860:
					return 330;
			
				case 2088750491:
					return 331;
			
				case -1513913454:
					return 332;
			
				case -1179558480:
					return 333;
			}
			break;
	
		case -86904375:
			switch (iParam0)
			{
				case 1283078430:
					return 302;
			
				case 1574296533:
					return 303;
			
				case 626875735:
					return 304;
			
				case 1141059345:
					return 305;
			
				case 1025884839:
					return 306;
			
				case 391640422:
					return 307;
			
				case -1654288262:
					return 308;
			
				case 2076495324:
					return 309;
			
				case 1108334355:
					return 310;
			
				case 77277509:
					return 311;
			
				case -966040254:
					return 312;
			
				case -2089531990:
					return 313;
			
				case -1181482284:
					return 314;
			
				case -932732805:
					return 315;
			
				case -569259057:
					return 316;
			
				case -326080308:
					return 317;
			
				case 48731514:
					return 318;
			
				case 880736428:
					return 319;
			
				case 1303784126:
					return 320;
			
				case -2093598721:
					return 321;
			
				case -1958983669:
					return 322;
			
				case 1272803094:
					return 334;
			
				case 1080719624:
					return 335;
			
				case 792221348:
					return 336;
			
				case -452181427:
					return 337;
			
				case -746774737:
					return 338;
			
				case -2044296061:
					return 339;
			
				case -199171978:
					return 340;
			
				case -1428075016:
					return 341;
			
				case -1735153315:
					return 342;
			
				case 1796459838:
					return 343;
			
				case -631911105:
					return 344;
			}
			break;
	
		case 1432025498:
			switch (iParam0)
			{
				case -845938367:
					return 395;
			
				case 1315288101:
					return 396;
			
				case 1004815965:
					return 397;
			
				case -380098265:
					return 398;
			
				case -1618338827:
					return 399;
			
				case 2076495324:
					return 400;
			
				case 1108334355:
					return 401;
			
				case 77277509:
					return 402;
			
				case 1060929921:
					return 403;
			
				case -1404903567:
					return 404;
			
				case 1602080333:
					return 405;
			
				case -474112444:
					return 488;
			
				case 387223451:
					return 489;
			
				case 617753366:
					return 490;
			
				case -222378256:
					return 491;
			
				case 8741501:
					return 492;
			
				case -601286203:
					return 493;
			
				case -511433605:
					return 494;
			
				case -655387818:
					return 495;
			
				case -282476598:
					return 496;
			
				case 1739501925:
					return 497;
			
				case 1178671645:
					return 498;
			}
			break;
	
		case -1768145561:
			switch (iParam0)
			{
				case 382112385:
					return 406;
			
				case -568352468:
					return 407;
			
				case 1362433589:
					return 408;
			
				case 1346235024:
					return 409;
			
				case -570355066:
					return 410;
			
				case -2023373174:
					return 411;
			
				case 2076495324:
					return 412;
			
				case 1108334355:
					return 413;
			
				case 77277509:
					return 414;
			
				case -966040254:
					return 415;
			
				case -1489156508:
					return 416;
			
				case -1181482284:
					return 417;
			
				case -932732805:
					return 418;
			
				case -569259057:
					return 419;
			
				case -326080308:
					return 420;
			
				case 48731514:
					return 421;
			
				case 880736428:
					return 422;
			
				case 1303784126:
					return 423;
			
				case -1654288262:
					return 424;
			
				case -415870039:
					return 425;
			
				case -109086661:
					return 426;
			
				case -737430213:
					return 532;
			
				case 1125852043:
					return 533;
			
				case 886015732:
					return 534;
			
				case -1262287139:
					return 535;
			
				case -295208411:
					return 536;
			
				case -544154504:
					return 537;
			
				case 172765678:
					return 538;
			
				case -1982877449:
					return 539;
			
				case 2072122460:
					return 540;
			
				case -1986220171:
					return 541;
			
				case 1377355801:
					return 542;
			}
			break;
	
		case -2009644972:
			switch (iParam0)
			{
				case 21392614:
					return 427;
			
				case -829683854:
					return 428;
			
				case -1055790298:
					return 429;
			
				case -1928301566:
					return 430;
			
				case -424845447:
					return 431;
			
				case -1876057490:
					return 432;
			
				case 1246324211:
					return 433;
			
				case 1205768792:
					return 434;
			
				case 1709866683:
					return 435;
			
				case -1434287169:
					return 436;
			
				case 259780317:
					return 510;
			
				case -1973342474:
					return 511;
			
				case 1996130345:
					return 512;
			
				case -1455657812:
					return 513;
			
				case -1668263084:
					return 514;
			
				case 1308243489:
					return 515;
			
				case 1122574335:
					return 516;
			
				case 1420313469:
					return 517;
			
				case 109848390:
					return 518;
			
				case 593945703:
					return 519;
			
				case 1142457062:
					return 520;
			}
			break;
	
		case 1785463520:
			switch (iParam0)
			{
				case -1797182002:
					return 437;
			
				case -422587990:
					return 438;
			
				case -193998727:
					return 439;
			
				case -515203373:
					return 440;
			
				case 1842849902:
					return 441;
			
				case -679861550:
					return 442;
			
				case 2076495324:
					return 443;
			
				case 1108334355:
					return 444;
			
				case -966040254:
					return 445;
			
				case 1528590652:
					return 446;
			
				case -2089531990:
					return 447;
			
				case -1181482284:
					return 448;
			
				case -932732805:
					return 449;
			
				case -569259057:
					return 450;
			
				case -326080308:
					return 451;
			
				case 48731514:
					return 452;
			
				case 880736428:
					return 453;
			
				case 1303784126:
					return 454;
			
				case -1654288262:
					return 455;
			
				case 941317513:
					return 456;
			
				case 1748450780:
					return 457;
			
				case -1869284448:
					return 521;
			
				case 1931539634:
					return 522;
			
				case 1624199183:
					return 523;
			
				case -26834113:
					return 524;
			
				case -210406055:
					return 525;
			
				case 423313640:
					return 526;
			
				case 276639596:
					return 527;
			
				case -991356863:
					return 528;
			
				case -1682848301:
					return 529;
			
				case 996213771:
					return 530;
			
				case -1214048550:
					return 531;
			}
			break;
	
		case -879347409:
			switch (iParam0)
			{
				case -1172055874:
					return 458;
			
				case 231258687:
					return 459;
			
				case 284438159:
					return 460;
			
				case 15712037:
					return 461;
			
				case -958864266:
					return 462;
			
				case 1108334355:
					return 463;
			
				case 77277509:
					return 464;
			
				case 899381934:
					return 465;
			
				case 654802123:
					return 466;
			
				case -1069552225:
					return 499;
			
				case 11918884:
					return 500;
			
				case 176157112:
					return 501;
			
				case -220052855:
					return 502;
			
				case 288456487:
					return 503;
			
				case 398658626:
					return 504;
			
				case 628697006:
					return 505;
			
				case 925911836:
					return 506;
			
				case 1222307441:
					return 507;
			
				case 552442715:
					return 508;
			
				case -648943513:
					return 509;
			}
			break;
	
		case -2066285827:
			switch (iParam0)
			{
				case 25766362:
					return 467;
			
				case -273676760:
					return 468;
			
				case -89655827:
					return 469;
			
				case 1130501904:
					return 470;
			
				case -1449330342:
					return 471;
			
				case -2111807319:
					return 472;
			
				case 2076495324:
					return 473;
			
				case 1108334355:
					return 474;
			
				case -944910075:
					return 475;
			
				case 1060929921:
					return 476;
			
				case 1704640795:
					return 477;
			
				case 1005743559:
					return 478;
			
				case -2089531990:
					return 479;
			
				case -1181482284:
					return 480;
			
				case -932732805:
					return 481;
			
				case -569259057:
					return 482;
			
				case -326080308:
					return 483;
			
				case 48731514:
					return 484;
			
				case 880736428:
					return 485;
			
				case 1303784126:
					return 486;
			
				case -1654288262:
					return 487;
			
				case -1371515465:
					return 543;
			
				case -1190793877:
					return 544;
			
				case -1497085720:
					return 545;
			
				case -1803148180:
					return 546;
			
				case -1975971886:
					return 547;
			
				case 36929477:
					return 548;
			
				case -268444834:
					return 549;
			
				case -574769446:
					return 550;
			
				case -882699739:
					return 551;
			
				case -1468181474:
					return 552;
			
				case -974541230:
					return 553;
			}
			break;
	
		case -1355376991:
			switch (iParam0)
			{
				case -673450233:
					return 554;
			}
			break;
	
		case 727643628:
			switch (iParam0)
			{
				case 1423184737:
					return 555;
			
				case -2122814295:
					return 556;
			
				case -1828202758:
					return 557;
			}
			break;
	
		case 94989220:
			switch (iParam0)
			{
				case -971688363:
					return 559;
			
				case 2076495324:
					return 560;
			
				case -2089531990:
					return 561;
			}
			break;
	
		case -1658906650:
			switch (iParam0)
			{
				case 759617595:
					return 562;
			
				case 1749732930:
					return 563;
			
				case 1803744149:
					return 564;
			
				case -1439939148:
					return 565;
			
				case 2076495324:
					return 566;
			
				case -2089531990:
					return 567;
			}
			break;
	
		case 1470379660:
			switch (iParam0)
			{
				case -1423479223:
					return 558;
			}
			break;
	
		case -947031628:
			switch (iParam0)
			{
				case 1525977990:
					return 99;
			
				case 1824470811:
					return 100;
			
				case -325063463:
					return 568;
			
				case 202788691:
					return 101;
			
				case 2076495324:
					return 102;
			
				case -1596416958:
					return 103;
			
				case -2089531990:
					return 104;
			
				case -1277049774:
					return 572;
			}
			break;
	
		case -774507221:
			switch (iParam0)
			{
				case 927578299:
					return 573;
			
				case -2053876401:
					return 574;
			
				case -1649287133:
					return 575;
			
				case -1489156508:
					return 576;
			
				case 202788691:
					return 577;
			}
			break;
	
		case 465894841:
			switch (iParam0)
			{
				case 375646046:
					return 578;
			
				case 503494624:
					return 579;
			}
			break;
	
		case -22923932:
			switch (iParam0)
			{
				case 1130760338:
					return 580;
			}
			break;
	
		case -1786099057:
			switch (iParam0)
			{
				case 716207715:
					return 581;
			
				case 446271089:
					return 583;
			
				case 1045616099:
					return 584;
			
				case 1336277129:
					return 585;
			
				case -513369076:
					return 586;
			
				case -447700000:
					return 587;
			
				case -149207179:
					return 588;
			
				case 166784288:
					return 589;
			
				case 2068729789:
					return 590;
			
				case 1761389338:
					return 591;
			}
			break;
	
		case -1716189206:
			switch (iParam0)
			{
				case 370527443:
					return 582;
			
				case 1109907117:
					return 592;
			
				case 2055456612:
					return 593;
			
				case 1690606566:
					return 594;
			
				case -1633316949:
					return 595;
			
				case -1461476313:
					return 596;
			
				case -1770422457:
					return 597;
			
				case -2059739958:
					return 598;
			
				case -1280001599:
					return 599;
			
				case -922885037:
					return 600;
			}
			break;
	}

	return 0;
}

int func_86(int iParam0, int iParam1, int iParam2) // Position - 0xF023 Hash - 0x71D0267A ^0x71D0267A
{
	int num;

	num = func_10(func_87(iParam0, iParam1), iParam2, 0);
	return num;
}

int func_87(int iParam0, int iParam1) // Position - 0xF03E Hash - 0x70D56B0 ^0xF33EF4E1
{
	int num;
	int num2;

	num = func_84(iParam0, iParam1);
	num2 = func_90(num);

	if (func_89() == 0 || func_88() == 0 || func_89() == 999 && func_88() == 999)
	{
		switch (num2)
		{
			case 0:
				return 811;
		
			case 1:
				return 812;
		
			case 2:
				return 813;
		
			case 3:
				return 814;
		
			case 4:
				return 1753;
		
			case 5:
				return 2435;
		
			case 6:
				return 2828;
		
			case 7:
				return 5502;
		
			case 8:
				return 5506;
		
			case 9:
				return 5510;
		
			case 10:
				return 5623;
		
			case 11:
				return 5627;
		
			case 12:
				return 5631;
		
			case 13:
				return 5635;
		
			case 14:
				return 6374;
		
			case 15:
				return 6497;
		
			case 16:
				return 6517;
		
			case 17:
				return 6523;
		
			case 18:
				return 10272;
		}
	}

	return 14192;
}

int func_88() // Position - 0xF1AF Hash - 0x21D64237 ^0x21D64237
{
	return Global_32164;
}

int func_89() // Position - 0xF1BA Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

int func_90(int iParam0) // Position - 0xF1C5 Hash - 0x195EBE32 ^0x195EBE32
{
	return iParam0 / 32;
}

BOOL func_91() // Position - 0xF1D2 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575039;
}

BOOL func_92(int iParam0, int iParam1, int iParam2) // Position - 0xF1DE Hash - 0xE0DDFDFF ^0xE0DDFDFF
{
	int num;
	int num2;

	if (func_91())
		return false;

	num = func_93(iParam0, iParam1, iParam2);
	num2 = func_84(iParam0, iParam1);
	return IS_BIT_SET(num, func_83(num2));
}

int func_93(int iParam0, int iParam1, int iParam2) // Position - 0xF210 Hash - 0x71D0267A ^0x71D0267A
{
	int num;

	num = func_10(func_94(iParam0, iParam1), iParam2, 0);
	return num;
}

int func_94(int iParam0, int iParam1) // Position - 0xF22B Hash - 0x70D56B0 ^0xF33EF4E1
{
	int num;
	int num2;

	num = func_84(iParam0, iParam1);
	num2 = func_90(num);

	if (func_89() == 0 || func_88() == 0 || func_89() == 999 && func_88() == 999)
	{
		switch (num2)
		{
			case 0:
				return 688;
		
			case 1:
				return 689;
		
			case 2:
				return 690;
		
			case 3:
				return 691;
		
			case 4:
				return 1755;
		
			case 5:
				return 2437;
		
			case 6:
				return 2830;
		
			case 7:
				return 5504;
		
			case 8:
				return 5508;
		
			case 9:
				return 5512;
		
			case 10:
				return 5625;
		
			case 11:
				return 5629;
		
			case 12:
				return 5633;
		
			case 13:
				return 5637;
		
			case 14:
				return 6376;
		
			case 15:
				return 6499;
		
			case 16:
				return 6519;
		
			case 17:
				return 6525;
		
			case 18:
				return 10274;
		}
	}

	return 1755;
}

BOOL func_95(int iParam0) // Position - 0xF39F Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case 46:
		case 47:
		case 48:
		case 49:
		case 52:
		case 53:
		case 56:
		case 59:
			return true;
	
		default:
		
	}

	return false;
}

void func_96(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0xF3E3 Hash - 0xA7EE70C5 ^0x4FA92769
{
	*uParam0 = iParam1;
	uParam0->f_4 = iParam2;
	uParam0->f_6 = iParam3;
	uParam0->f_1 = iParam4;
	return;
}

int func_97(Hash hParam0, Any* panParam1) // Position - 0xF402 Hash - 0x539D27DB ^0xB7B7AD25
{
	int i;
	int numDlcWeapons;

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (i = 0; i < numDlcWeapons; i = i + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(i, panParam1))
			if (panParam1->f_1 == hParam0)
				return i;
	}

	return -1;
}

void func_98(Ped pedParam0, var uParam1) // Position - 0xF43D Hash - 0xDEAAD761 ^0xB2E3A390
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int unk;
	int unk2;
	Hash unk3;
	var unk4;
	int l;
	int numDlcWeaponsSp;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_101(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_101(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != -1569615261)
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == -72657034)
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_100(pedWeapontypeInSlot, j); k != 0; k = func_100(pedWeapontypeInSlot, j))
					{
						if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, k))
							MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), j);
					
						j = j + 1;
					}
				}
			
				uParam1->[i /*5*/] = { pedWeapontypeInSlot };
			}
		}
	
		for (i = 0; i <= 50; i = i + 1)
		{
			uParam1->f_221[i /*5*/].f_1 = 0;
		}
	
		numDlcWeaponsSp = FILES::GET_NUM_DLC_WEAPONS_SP();
	
		for (l = 0; l < numDlcWeaponsSp; l = l + 1)
		{
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_99(outData.f_1) && num < 51)
			{
				if (!FILES::IS_CONTENT_ITEM_LOCKED(outData))
				{
					pedWeapontypeInSlot = outData.f_1;
					pedWeapontypeInSlot.f_1 = 0;
					pedWeapontypeInSlot.f_2 = 0;
					pedWeapontypeInSlot.f_3 = 0;
					pedWeapontypeInSlot.f_4 = 0;
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
						pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
					}
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->f_221[num /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					offset = 0;
				
					for (j = 0; j < FILES::GET_NUM_DLC_WEAPON_COMPONENTS_SP(l); j = j + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA_SP(l, j, &ComponentDataPtr))
						{
							if (!func_78(ComponentDataPtr.f_3))
							{
								if (WEAPON::HAS_PED_GOT_WEAPON_COMPONENT(pedParam0, pedWeapontypeInSlot, ComponentDataPtr.f_3))
									MISC::SET_BIT(&(pedWeapontypeInSlot.f_2), offset);
							
								offset = offset + 1;
							}
						}
					}
				}
			
				if (pedWeapontypeInSlot != 0)
				{
					if (!WEAPON::HAS_PED_GOT_WEAPON(pedParam0, pedWeapontypeInSlot, false))
					{
						pedWeapontypeInSlot = 0;
						pedWeapontypeInSlot.f_1 = 0;
					}
				}
			
				uParam1->f_221[num /*5*/] = { pedWeapontypeInSlot };
				num = num + 1;
			}
		}
	}

	return;
}

BOOL func_99(int iParam0) // Position - 0xF6C5 Hash - 0xD9D843D5 ^0xF9D91FBE
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case -1716589765:
			case -1654528753:
			case -270015777:
				return false;
		
			case -102323637:
			case -1076751822:
			case 1627465347:
				return false;
		
			case -771403250:
			case -1063057011:
				return false;
		
			case 2132975508:
				return false;
		
			case -1834847097:
			case 137902532:
				return false;
		
			case 2138347493:
			case -1466123874:
				return false;
		
			case 984333226:
			case -952879014:
				return false;
		
			case 1672152130:
			case -1420407917:
				return false;
		
			case 171789620:
			case -656458692:
			case -598887786:
				return false;
		
			case -947031628:
			case -572349828:
			case 392730790:
			case -1523701417:
			case -2112826155:
			case -664359727:
			case -1887867191:
			case -837150131:
			case -344484024:
			case 1198879012:
			case -800287667:
			case 126349499:
			case -499989876:
			case -1951375401:
			case -538741184:
			case -1045183535:
			case -275439685:
			case 1649403952:
			case 317205821:
			case -1121678507:
			case 125959754:
			case -853065399:
			case -1169823560:
			case -1810795771:
			case 419712736:
			case -1746263880:
			case 1198256469:
			case -1238556825:
			case -1355376991:
			case -1853920116:
			case 727643628:
			case 1470379660:
			case -1658906650:
			case 94989220:
			case -618237638:
			case 406929569:
			case 1171102963:
			case -610080759:
			case 1853742572:
			case -774507221:
			case 465894841:
			case 1703483498:
			case -22923932:
				return true;
		}
	}

	return false;
}

Hash func_100(Hash hParam0, int iParam1) // Position - 0xF89F Hash - 0x6010BC66 ^0x1DFF9FB7
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var unk2;

	num = 0;

	switch (hParam0)
	{
		case 453432689:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -19858063;
					break;
			
				case 2:
					num = -316253668;
					break;
			
				case 3:
					num = 899381934;
					break;
			
				case 4:
					num = 1709866683;
					break;
			
				case 5:
					num = -684126074;
					break;
			}
			break;
	
		case 1593441988:
			switch (iParam1)
			{
				case 0:
					num = 119648377;
					break;
			
				case 1:
					num = -696561875;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1023114086;
					break;
			
				case 4:
					num = -966439566;
					break;
			}
			break;
	
		case 584646201:
			switch (iParam1)
			{
				case 0:
					num = 834974250;
					break;
			
				case 1:
					num = 614078421;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1023114086;
					break;
			
				case 4:
					num = -1686714580;
					break;
			
				case 5:
					num = 1657753414;
					break;
			}
			break;
	
		case 324215364:
			switch (iParam1)
			{
				case 0:
					num = -884429072;
					break;
			
				case 1:
					num = 283556395;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1657815255;
					break;
			
				case 4:
					num = -1489156508;
					break;
			
				case 5:
					num = 1215999497;
					break;
			
				case 6:
					num = 2012362801;
					break;
			}
			break;
	
		case 736523883:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = 643254679;
					break;
			
				case 2:
					num = 889808635;
					break;
			
				case 3:
					num = 2043113590;
					break;
			
				case 4:
					num = 2076495324;
					break;
			
				case 5:
					num = -1023114086;
					break;
			
				case 6:
					num = 1019656791;
					break;
			
				case 7:
					num = 202788691;
					break;
			
				case 8:
					num = 663170192;
					break;
			}
			break;
	
		case -1074790547:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -1101075946;
					break;
			
				case 2:
					num = -1323216997;
					break;
			
				case 3:
					num = -604986051;
					break;
			
				case 4:
					num = 202788691;
					break;
			
				case 5:
					num = 2076495324;
					break;
			
				case 6:
					num = -1657815255;
					break;
			
				case 7:
					num = -1489156508;
					break;
			
				case 8:
					num = 1319990579;
					break;
			}
			break;
	
		case -2084633992:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -1614924820;
					break;
			
				case 2:
					num = -1861183855;
					break;
			
				case 3:
					num = -1167922891;
					break;
			
				case 4:
					num = 1967214384;
					break;
			
				case 5:
					num = 202788691;
					break;
			
				case 6:
					num = 2076495324;
					break;
			
				case 7:
					num = -1596416958;
					break;
			
				case 8:
					num = -2089531990;
					break;
			
				case 9:
					num = -660892072;
					break;
			}
			break;
	
		case -1357824103:
			switch (iParam1)
			{
				case 0:
					num = -91250417;
					break;
			
				case 1:
					num = -1899902599;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1439939148;
					break;
			
				case 4:
					num = -2089531990;
					break;
			
				case 5:
					num = 930927479;
					break;
			}
			break;
	
		case -1660422300:
			switch (iParam1)
			{
				case 0:
					num = -197857404;
					break;
			
				case 1:
					num = -2112517305;
					break;
			
				case 2:
					num = 1006677997;
					break;
			
				case 3:
					num = 202788691;
					break;
			
				case 4:
					num = -690308418;
					break;
			}
			break;
	
		case 2144741730:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = -503336118;
					break;
			
				case 2:
					num = -691692330;
					break;
			
				case 3:
					num = 202788691;
					break;
			
				case 4:
					num = -1596416958;
					break;
			
				case 5:
					num = -1828795171;
					break;
			}
			break;
	
		case 487013001:
			switch (iParam1)
			{
				case 0:
					num = -435637410;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1562927653;
					break;
			
				case 3:
					num = -242322891;
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case -494615257:
			switch (iParam1)
			{
				case 0:
					num = -1796727865;
					break;
			
				case 1:
					num = -2034401422;
					break;
			
				case 2:
					num = 202788691;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -2089531990;
					break;
			}
			break;
	
		case 100416529:
			switch (iParam1)
			{
				case 0:
					num = -1681506167;
					break;
			
				case 1:
					num = -767279652;
					break;
			
				case 2:
					num = -1135289737;
					break;
			
				case 3:
					num = -1489156508;
					break;
			
				case 4:
					num = 1077065191;
					break;
			}
			break;
	
		case 205991906:
			switch (iParam1)
			{
				case 0:
					num = 1623028892;
					break;
			
				case 1:
					num = 1198478068;
					break;
			
				case 2:
					num = -767279652;
					break;
			
				case 3:
					num = -1135289737;
					break;
			}
			break;
	
		case -1568386805:
			switch (iParam1)
			{
				case 0:
					num = 202788691;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1439939148;
					break;
			}
			break;
	
		case 1119849093:
			switch (iParam1)
			{
				case 0:
					num = -924946682;
					break;
			}
			break;
	
		case -270015777:
			switch (iParam1)
			{
				case 0:
					num = -1928132688;
					break;
			
				case 1:
					num = -1152981993;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1657815255;
					break;
			
				case 4:
					num = -1489156508;
					break;
			
				case 5:
					num = 663517359;
					break;
			}
			break;
	
		case -1654528753:
			switch (iParam1)
			{
				case 0:
					num = 202788691;
					break;
			
				case 1:
					num = 2076495324;
					break;
			
				case 2:
					num = -1489156508;
					break;
			}
			break;
	
		case -1716589765:
			switch (iParam1)
			{
				case 0:
					num = 580369945;
					break;
			
				case 1:
					num = -640439150;
					break;
			
				case 2:
					num = 899381934;
					break;
			
				case 3:
					num = -1489156508;
					break;
			
				case 4:
					num = 2008591151;
					break;
			}
			break;
	
		case 171789620:
			switch (iParam1)
			{
				case 0:
					num = 1125642654;
					break;
			
				case 1:
					num = 860508675;
					break;
			
				case 2:
					num = 1857603803;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -1439939148;
					break;
			
				case 5:
					num = 202788691;
					break;
			}
			break;
	
		case 2017895192:
			switch (iParam1)
			{
				case 0:
					num = -2052698631;
					break;
			}
			break;
	
		case 2132975508:
			switch (iParam1)
			{
				case 0:
					num = -979292288;
					break;
			
				case 1:
					num = -1284994289;
					break;
			
				case 2:
					num = 2076495324;
					break;
			
				case 3:
					num = -1439939148;
					break;
			
				case 4:
					num = -2089531990;
					break;
			
				case 5:
					num = 202788691;
					break;
			
				case 6:
					num = -1470645128;
					break;
			}
			break;
	
		case -1076751822:
			switch (iParam1)
			{
				case 0:
					num = -125817127;
					break;
			
				case 1:
					num = 2063610803;
					break;
			
				case 2:
					num = -2144080721;
					break;
			}
			break;
	
		case -1063057011:
			switch (iParam1)
			{
				case 0:
					num = -959978111;
					break;
			
				case 1:
					num = 2089537806;
					break;
			
				case 2:
					num = 1801039530;
					break;
			
				case 3:
					num = 2076495324;
					break;
			
				case 4:
					num = -1596416958;
					break;
			
				case 5:
					num = -1489156508;
					break;
			
				case 6:
					num = 202788691;
					break;
			
				case 7:
					num = 1929467122;
					break;
			}
			break;
	
		case -656458692:
			switch (iParam1)
			{
				case 0:
					num = -971770235;
					break;
			
				case 1:
					num = -287703709;
					break;
			
				case 2:
					num = 1351683121;
					break;
			
				case 3:
					num = -1755194916;
					break;
			
				case 4:
					num = 2112683568;
					break;
			
				case 5:
					num = 1062111910;
					break;
			
				case 6:
					num = 146278587;
					break;
			
				case 7:
					num = -494162961;
					break;
			
				case 8:
					num = 2062808965;
					break;
			}
			break;
	
		case -619010992:
			switch (iParam1)
			{
				case 0:
					num = 1198425599;
					break;
			
				case 1:
					num = -1188271751;
					break;
			
				case 2:
					num = -1444295948;
					break;
			
				case 3:
					num = -1023114086;
					break;
			}
			break;
	
		case -538741184:
			switch (iParam1)
			{
				case 0:
					num = 1530822070;
					break;
			
				case 1:
					num = -409758110;
					break;
			}
			break;
	
		case -1045183535:
			switch (iParam1)
			{
				case 0:
					num = -377062173;
					break;
			
				case 1:
					num = 384708672;
					break;
			
				case 2:
					num = -1802258419;
					break;
			}
			break;
	
		case -1121678507:
			switch (iParam1)
			{
				case 0:
					num = -2067221805;
					break;
			
				case 1:
					num = -1820405577;
					break;
			}
			break;
	
		case -1786099057:
			switch (iParam1)
			{
				case 0:
					num = 716207715;
					break;
			
				case 1:
					num = 446271089;
					break;
			
				case 2:
					num = 1045616099;
					break;
			
				case 3:
					num = 1336277129;
					break;
			
				case 4:
					num = -513369076;
					break;
			
				case 5:
					num = -447700000;
					break;
			
				case 6:
					num = -149207179;
					break;
			
				case 7:
					num = 166784288;
					break;
			
				case 8:
					num = 2068729789;
					break;
			
				case 9:
					num = 1761389338;
					break;
			}
			break;
	
		default:
			if (hParam0 != 0)
			{
				dlcWeaponIndex = func_97(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_78(ComponentDataPtr.f_3))
							{
								if (num2 == iParam1)
									return ComponentDataPtr.f_3;
							
								num2 = num2 + 1;
							}
						}
					}
				}
			}
			break;
	}

	return num;
}

Hash func_101(int iParam0) // Position - 0x10502 Hash - 0x5FB59AC3 ^0x9BC6B2ED
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = 1993361168;
			break;
	
		case 1:
			num = 1277010230;
			break;
	
		case 2:
			num = 932043479;
			break;
	
		case 3:
			num = -690654591;
			break;
	
		case 4:
			num = -1459198205;
			break;
	
		case 5:
			num = 195782970;
			break;
	
		case 6:
			num = -438797331;
			break;
	
		case 7:
			num = 896793492;
			break;
	
		case 8:
			num = 495159329;
			break;
	
		case 9:
			num = -1155528315;
			break;
	
		case 10:
			num = -515636489;
			break;
	
		case 11:
			num = -871913299;
			break;
	
		case 12:
			num = -1352759032;
			break;
	
		case 13:
			num = -542958961;
			break;
	
		case 14:
			num = 1682645887;
			break;
	
		case 15:
			num = -859470162;
			break;
	
		case 16:
			num = -2125426402;
			break;
	
		case 17:
			num = 2067210266;
			break;
	
		case 18:
			num = -538172856;
			break;
	
		case 19:
			num = 1783244476;
			break;
	
		case 20:
			num = 439844898;
			break;
	
		case 21:
			num = -24829327;
			break;
	
		case 22:
			num = 1949306232;
			break;
	
		case 23:
			num = -1941230881;
			break;
	
		case 24:
			num = -1033554448;
			break;
	
		case 25:
			num = 320513715;
			break;
	
		case 26:
			num = -695165975;
			break;
	
		case 27:
			num = -281028447;
			break;
	
		case 28:
			num = -686713772;
			break;
	
		case 29:
			num = 347509793;
			break;
	
		case 30:
			num = 1769089473;
			break;
	
		case 31:
			num = 189935548;
			break;
	
		case 33:
			num = 248801358;
			break;
	
		case 34:
			num = 386596758;
			break;
	
		case 35:
			num = -157212362;
			break;
	
		case 36:
			num = 436985596;
			break;
	
		case 37:
			num = -47957369;
			break;
	
		case 38:
			num = 575938238;
			break;
	}

	return num;
}

float func_102(int* piParam0) // Position - 0x10776 Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_105(piParam0))
		if (func_104(piParam0))
			return piParam0->f_2;
		else
			return func_103(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_103(BOOL bParam0) // Position - 0x107B2 Hash - 0xB0FB4432 ^0x9D798691
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

BOOL func_104(int* piParam0) // Position - 0x1080A Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_105(int* piParam0) // Position - 0x10817 Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

BOOL func_106() // Position - 0x10824 Hash - 0xC4E7FDEB ^0xC4E7FDEB
{
	if (Global_1574612)
		return true;

	if (func_108())
		return true;

	if (func_107())
		return true;

	return func_4(124, -1);
}

BOOL func_107() // Position - 0x10854 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575048;
}

BOOL func_108() // Position - 0x10860 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575050;
}

void func_109() // Position - 0x1086C Hash - 0x1A3A0D41 ^0xC307D196
{
	int i;

	for (i = 1; i <= 49; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_137(i, 1);
	}

	for (i = 51; i <= 59; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_137(i, 1);
	}

	for (i = 70; i <= 77; i = i + 1)
	{
		if (!PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i))
			if (SOCIALCLUB::SC_HAS_ACHIEVEMENT_BEEN_PASSED(i))
				func_137(i, 1);
	}

	return;
}

BOOL func_110(int iParam0, int iParam1) // Position - 0x10900 Hash - 0xF6E4B595 ^0x3042B439
{
	int profileSetting;
	int profileSetting2;

	if (iParam1 == -1)
		iParam1 = func_6();

	profileSetting = func_111(iParam1);
	profileSetting2 = MISC::GET_PROFILE_SETTING(profileSetting);
	return IS_BIT_SET(profileSetting2, iParam0);
}

int func_111(int iParam0) // Position - 0x10929 Hash - 0xE9111CD1 ^0x81B320A3
{
	int num;

	if (iParam0 == -1)
		iParam0 = func_6();

	switch (iParam0)
	{
		case 0:
			num = 914;
			break;
	
		case 1:
			num = 915;
			break;
	
		case 2:
			num = 916;
			break;
	
		case 3:
			num = 917;
			break;
	
		case 4:
			num = 918;
			break;
	}

	return num;
}

BOOL func_112() // Position - 0x1098C Hash - 0x65EF086C ^0x65EF086C
{
	if (func_114() && func_113(0))
		return true;

	return false;
}

var func_113(int iParam0) // Position - 0x109AA Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1574538[iParam0];
}

var func_114() // Position - 0x109BA Hash - 0x129F0515 ^0x129F0515
{
	return func_113(func_6() + 1);
}

BOOL func_115(var uParam0) // Position - 0x109CC Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

void func_116(var uParam0) // Position - 0x109DA Hash - 0x9F67E532 ^0x3FA9F27A
{
	float num;

	num = Global_4542596;
	uParam0->f_80 = uParam0->f_80 + MISC::GET_FRAME_TIME();

	if (!func_115(uParam0))
		return;

	if (func_123(uParam0) < 0f)
	{
		func_122(uParam0, 0);
		return;
	}

	if (func_170(14))
		num = 10f;

	if (func_123(uParam0) < num)
		return;

	if (func_121(uParam0, 0))
		return;

	if (func_119(uParam0->[0]))
	{
		func_118(uParam0);
		func_117(uParam0);
		func_122(uParam0, 0);
	}

	return;
}

void func_117(var uParam0) // Position - 0x10A62 Hash - 0xB15617B6 ^0xB15617B6
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_121(uParam0, i))
			i = *uParam0 + 100;
	}

	return;
}

void func_118(var uParam0) // Position - 0x10A93 Hash - 0x3545E9BB ^0x3545E9BB
{
	int num;

	num = 1;

	if (func_121(uParam0, 0))
		return;

	while (num < *uParam0)
	{
		uParam0->[num - 1] = uParam0->[num];
		num = num + 1;
	}

	return;
}

BOOL func_119(int iParam0) // Position - 0x10ACA Hash - 0x5D03984A ^0xA1E72922
{
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return false;

	if (func_170(14) && !func_120(iParam0))
		return false;

	if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		return false;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		return true;

	return false;
}

BOOL func_120(int iParam0) // Position - 0x10B14 Hash - 0x5000025C ^0x5000025C
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

BOOL func_121(var uParam0, int iParam1) // Position - 0x10B64 Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_122(var uParam0, int iParam1) // Position - 0x10B75 Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_123(var uParam0) // Position - 0x10B92 Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

int func_124() // Position - 0x10B9E Hash - 0xF74B57C3 ^0xBBEA1FC6
{
	float minimapFowDiscoveryRatio;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || Global_78558)
		return 0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			minimapFowDiscoveryRatio = HUD::GET_MINIMAP_FOW_DISCOVERY_RATIO();
		
			if (minimapFowDiscoveryRatio > 0.01f && MISC::IS_PC_VERSION())
				func_143(14, SYSTEM::FLOOR(minimapFowDiscoveryRatio * 100f));
		
			if (minimapFowDiscoveryRatio >= 0.975f)
			{
				func_137(14, 1);
				return 1;
			}
		}
	}

	return 0;
}

BOOL func_125(int iParam0) // Position - 0x10C16 Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_126(BOOL bParam0) // Position - 0x10C42 Hash - 0xCA181FA4 ^0xCA181FA4
{
	if (Global_78558)
	{
		if (bParam0)
			func_8(bParam0);
	
		func_3(bParam0);
		func_13(bParam0);
		bParam0;
	}

	func_136(bParam0);
	func_129(bParam0);
	func_128();
	func_127();

	if (bParam0)
		func_105(&uLocal_59);

	return;
}

int func_127() // Position - 0x10C96 Hash - 0xF2C13433 ^0x16FF7CF9
{
	int num;
	int num2;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(50))
		return 0;

	num = 0;
	num2 = 0;
	num = num + (STATS::STAT_GET_NUMBER_OF_DAYS(-183734540) * 24);
	num = num + STATS::STAT_GET_NUMBER_OF_HOURS(-183734540);
	num2 = num2 + (STATS::STAT_GET_NUMBER_OF_DAYS(1158126130) * 24);
	num2 = num2 + STATS::STAT_GET_NUMBER_OF_HOURS(1158126130);

	if (num + num2 >= 15)
	{
		func_137(50, 1);
		return 1;
	}

	return 0;
}

int func_128() // Position - 0x10D04 Hash - 0xF8D17606 ^0x1CB2989
{
	int numSuccessfulStuntJumps;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(22))
		return 0;

	numSuccessfulStuntJumps = MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS();

	if (numSuccessfulStuntJumps > 0)
	{
		if (Global_32429 < numSuccessfulStuntJumps)
		{
			if (Global_32429 >= 0)
				func_143(22, numSuccessfulStuntJumps);
		
			Global_32429 = numSuccessfulStuntJumps;
		}
	}

	if (MISC::GET_NUM_SUCCESSFUL_STUNT_JUMPS() >= 50)
	{
		func_137(22, 1);
		return 1;
	}

	return 0;
}

int func_129(BOOL bParam0) // Position - 0x10D5B Hash - 0xC759F800 ^0xF540CB7F
{
	var unk;
	int unk2;
	int unk3;
	int unk4;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(17))
		return 0;

	unk = 6;
	unk[0] = func_135();
	unk[1] = func_134();
	unk[2] = func_133();
	unk[3] = func_132();
	unk[4] = func_131();
	unk[5] = func_130();
	value = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (unk[i])
			value = value + 1;
	}

	STATS::STAT_GET_INT(-596685709, &outValue, -1);

	if (value > outValue && value > 0)
	{
		STATS::STAT_SET_INT(-596685709, value, true);
		func_143(17, value);
	}

	bParam0;

	if (!unk[0])
	{
		bParam0;
		return 0;
	}

	if (!unk[1])
	{
		bParam0;
		return 0;
	}

	if (!unk[2])
	{
		bParam0;
		return 0;
	}

	if (!unk[3])
	{
		bParam0;
		return 0;
	}

	if (!unk[4])
	{
		bParam0;
		return 0;
	}

	if (!unk[5])
	{
		bParam0;
		return 0;
	}

	func_137(17, 1);
	return 1;
}

int func_130() // Position - 0x10E7D Hash - 0x5EB94B1C ^0x89C94291
{
	int i;

	i = 0;

	for (i = 0; i < 12; i = i + 1)
	{
		if (Global_113648.f_1990[0 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113648.f_1990[1 /*121*/][i /*10*/].f_8 == 3)
			return 1;
		else if (Global_113648.f_1990[2 /*121*/][i /*10*/].f_8 == 3)
			return 1;
	}

	return 0;
}

int func_131() // Position - 0x10EEA Hash - 0x6F8BA640 ^0x5165E3A2
{
	int i;

	i = 0;

	for (i = 0; i < 22; i = i + 1)
	{
		if (Global_113648.f_19149[0 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113648.f_19149[1 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
		else if (Global_113648.f_19149[2 /*271*/].f_3[i /*12*/].f_3 == 3)
			return 1;
	}

	return 0;
}

int func_132() // Position - 0x10F60 Hash - 0x3557EF35 ^0x156A1D28
{
	int i;

	i = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_24978.f_1, i))
			return 1;
	}

	return 0;
}

int func_133() // Position - 0x10F91 Hash - 0xD9A4822A ^0x64575570
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_24981.f_2, i))
			return 1;
	}

	return 0;
}

int func_134() // Position - 0x10FC2 Hash - 0x6781FB2F ^0x7890484
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (Global_113648.f_19018.f_19[i] == 1)
			return 1;
	}

	return 0;
}

int func_135() // Position - 0x10FF5 Hash - 0xBDDB454C ^0xBDDB454C
{
	int i;

	i = 0;

	for (i = 0; i < 3; i = i + 1)
	{
		if (Global_113648.f_20013[i] == 1)
			return 1;
	}

	return 0;
}

int func_136(BOOL bParam0) // Position - 0x11026 Hash - 0xDC114C70 ^0xC626A2DE
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
		func_143(27, value);
	}

	if (value < 200000000)
		return 0;

	func_137(27, 1);
	return 1;
}

int func_137(int iParam0, int iParam1) // Position - 0x110DD Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_138(iParam0, iParam1);
}

int func_138(int iParam0, int iParam1) // Position - 0x110F8 Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_170(14) && !func_120(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_115(&Global_4542597))
	{
		if (func_141(&Global_4542597, iParam0))
			return 0;
	
		if (func_139(&Global_4542597, iParam0))
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

BOOL func_139(var uParam0, int iParam1) // Position - 0x11195 Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_170(14) && !func_120(iParam1))
		return false;

	if (func_141(uParam0, iParam1))
		return false;

	if (func_123(uParam0) < 0f)
		func_122(uParam0, 0);

	func_176(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_140(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_140(var uParam0, int iParam1) // Position - 0x11246 Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_170(14) && !func_120(iParam1))
		return 0;

	if (func_141(uParam0, iParam1))
		return 0;

	if (func_123(uParam0) < 0f)
		func_122(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_121(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_141(var uParam0, int iParam1) // Position - 0x112C1 Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_142(uParam0, iParam1) != -1;
}

int func_142(var uParam0, int iParam1) // Position - 0x112D3 Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_143(int iParam0, int iParam1) // Position - 0x11300 Hash - 0x77E0C72A ^0x80DA2A54
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

int func_144(BOOL bParam0) // Position - 0x11351 Hash - 0xE4DCC0AA ^0xE4DCC0AA
{
	int num;

	num = func_157(bParam0) + func_145(bParam0);
	bParam0;
	return num;
}

int func_145(BOOL bParam0) // Position - 0x1136F Hash - 0x7E8F8576 ^0x3F46814C
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113648.f_18576; i = i + 1)
	{
		if (Global_113648.f_18576[i /*6*/].f_3 != -1 && func_155(i, 7))
		{
			num3 = 0;
			num4 = 0;
		
			for (j = 0; j < func_153(i, 7); j = j + 1)
			{
				num6 = func_151(i, 7, j);
			
				if (!Global_63587[num6 /*13*/].f_7)
				{
					if (func_148(num6) == 1)
						num4 = num4 + 1;
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_147(num4, num3, false);
			num2 = func_146(num5);
		
			if (i >= 52 && i <= 56)
			{
				bParam0;
				num2 = Global_113648.f_2354[i - 52 /*2*/];
				num5 = 0f;
			}
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_146(float fParam0) // Position - 0x11463 Hash - 0x9F5139BD ^0x9F5139BD
{
	if (fParam0 == 0f)
		return 0;

	if (fParam0 == 100f)
		return 3;
	else if (fParam0 > 50f)
		return 2;

	return 1;
}

float func_147(int iParam0, int iParam1, BOOL bParam2) // Position - 0x11498 Hash - 0xB606A20F ^0xE2337BDE
{
	float num;
	float value;

	if (bParam2)
		return 0f;

	if (iParam0 == iParam1)
		return 100f;

	num = SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1);
	value = (50f * num) + 50f;
	value = SYSTEM::TO_FLOAT(SYSTEM::CEIL(value));

	if (value > 100f)
		value = 100f;

	return value;
}

int func_148(int iParam0) // Position - 0x114F7 Hash - 0x400E5F53 ^0x1AB12576
{
	if (func_149(iParam0, func_150(Global_63587[iParam0 /*13*/].f_4)))
		return 1;

	return 0;
}

BOOL func_149(int iParam0, int iParam1) // Position - 0x1151A Hash - 0x92B07CD ^0x4DDE5ABA
{
	if (iParam1 < 0)
		return false;

	switch (Global_63587[iParam0 /*13*/])
	{
		case 1:
		case 2:
		case 4:
		case 5:
		case 17:
			if (iParam1 < 1)
				return false;
			break;
	}

	if (iParam1 == 2147483647)
		return false;

	if (iParam0 == 881 || iParam0 == 889 || iParam0 == 897 && Global_113648.f_24906[4 /*4*/] == func_56())
		Global_63587[iParam0 /*13*/].f_2 = 0;

	if (Global_63587[iParam0 /*13*/].f_3)
		if (iParam1 < Global_63587[iParam0 /*13*/].f_2)
			return true;
	else if (iParam1 >= Global_63587[iParam0 /*13*/].f_2)
		return true;

	return false;
}

int func_150(Hash hParam0) // Position - 0x115E4 Hash - 0x671EC69 ^0xFAAE3E43
{
	int outValue;

	if (hParam0 == 0)
		return -1;

	if (STATS::STAT_GET_INT(hParam0, &outValue, -1))
		return outValue - 1;

	return -1;
}

int func_151(int iParam0, int iParam1, int iParam2) // Position - 0x1160D Hash - 0x18D4F097 ^0xCC21744D
{
	switch (iParam1)
	{
		case 1:
			return Global_91469[iParam0 /*34*/].f_17[iParam2];
	
		case 7:
			return func_152(iParam0, iParam2);
	
		default:
			break;
	}

	return 914;
}

int func_152(int iParam0, int iParam1) // Position - 0x11650 Hash - 0x7748E784 ^0xEC455128
{
	switch (iParam0)
	{
		case 2:
			switch (iParam1)
			{
				case 0:
					return 741;
			
				case 1:
					return 742;
			
				default:
				
			}
		
			return -1;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 743;
			
				case 1:
					return 744;
			
				default:
				
			}
		
			return -1;
	
		case 5:
			switch (iParam1)
			{
				case 0:
					return 745;
			
				case 1:
					return 746;
			
				default:
				
			}
		
			return -1;
	
		case 6:
			switch (iParam1)
			{
				case 0:
					return 747;
			
				case 1:
					return 748;
			
				default:
				
			}
		
			return -1;
	
		case 8:
			switch (iParam1)
			{
				case 0:
					return 749;
			
				default:
				
			}
		
			return -1;
	
		case 12:
			switch (iParam1)
			{
				case 0:
					return 750;
			
				default:
				
			}
		
			return -1;
	
		case 14:
			switch (iParam1)
			{
				case 0:
					return 751;
			
				case 1:
					return 752;
			
				default:
				
			}
		
			return -1;
	
		case 16:
			switch (iParam1)
			{
				case 0:
					return 753;
			
				case 1:
					return 754;
			
				default:
				
			}
		
			return -1;
	
		case 17:
			switch (iParam1)
			{
				case 0:
					return 755;
			
				case 1:
					return 756;
			
				case 2:
					return 757;
			
				default:
				
			}
		
			return -1;
	
		case 18:
			switch (iParam1)
			{
				case 0:
					return 758;
			
				case 1:
					return 759;
			
				default:
				
			}
		
			return -1;
	
		case 19:
			switch (iParam1)
			{
				case 0:
					return 760;
			
				case 1:
					return 761;
			
				default:
				
			}
		
			return -1;
	
		case 20:
			switch (iParam1)
			{
				case 0:
					return 762;
			
				default:
				
			}
		
			return -1;
	
		case 21:
			switch (iParam1)
			{
				case 0:
					return 763;
			
				default:
				
			}
		
			return -1;
	
		case 22:
			switch (iParam1)
			{
				case 0:
					return 764;
			
				case 1:
					return 765;
			
				default:
				
			}
		
			return -1;
	
		case 23:
			switch (iParam1)
			{
				case 0:
					return 766;
			
				default:
				
			}
		
			return -1;
	
		case 25:
			switch (iParam1)
			{
				case 0:
					return 767;
			
				case 1:
					return 768;
			
				case 2:
					return 769;
			
				default:
				
			}
		
			return -1;
	
		case 26:
			switch (iParam1)
			{
				case 0:
					return 770;
			
				case 1:
					return 771;
			
				default:
				
			}
		
			return -1;
	
		case 28:
			switch (iParam1)
			{
				case 0:
					return 772;
			
				case 1:
					return 773;
			
				default:
				
			}
		
			return -1;
	
		case 29:
			switch (iParam1)
			{
				case 0:
					return 774;
			
				case 1:
					return 775;
			
				default:
				
			}
		
			return -1;
	
		case 30:
			switch (iParam1)
			{
				case 0:
					return 776;
			
				case 1:
					return 777;
			
				default:
				
			}
		
			return -1;
	
		case 32:
			switch (iParam1)
			{
				case 0:
					return 778;
			
				case 1:
					return 779;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			switch (iParam1)
			{
				case 0:
					return 780;
			
				case 1:
					return 781;
			
				case 2:
					return 782;
			
				default:
				
			}
		
			return -1;
	
		case 34:
			switch (iParam1)
			{
				case 0:
					return 783;
			
				case 1:
					return 784;
			
				default:
				
			}
		
			return -1;
	
		case 38:
			switch (iParam1)
			{
				case 0:
					return 785;
			
				case 1:
					return 786;
			
				default:
				
			}
		
			return -1;
	
		case 39:
			switch (iParam1)
			{
				case 0:
					return 787;
			
				case 1:
					return 788;
			
				default:
				
			}
		
			return -1;
	
		case 40:
			switch (iParam1)
			{
				case 0:
					return 789;
			
				default:
				
			}
		
			return -1;
	
		case 41:
			switch (iParam1)
			{
				case 0:
					return 790;
			
				case 1:
					return 791;
			
				case 2:
					return 792;
			
				default:
				
			}
		
			return -1;
	
		case 42:
			switch (iParam1)
			{
				case 0:
					return 793;
			
				case 1:
					return 794;
			
				case 2:
					return 795;
			
				default:
				
			}
		
			return -1;
	
		case 43:
			switch (iParam1)
			{
				case 0:
					return 796;
			
				case 1:
					return 797;
			
				default:
				
			}
		
			return -1;
	
		case 46:
			switch (iParam1)
			{
				case 0:
					return 798;
			
				case 1:
					return 799;
			
				default:
				
			}
		
			return -1;
	
		case 47:
			switch (iParam1)
			{
				case 0:
					return 800;
			
				case 1:
					return 801;
			
				default:
				
			}
		
			return -1;
	
		case 49:
			switch (iParam1)
			{
				case 0:
					return 802;
			
				case 1:
					return 803;
			
				default:
				
			}
		
			return -1;
	
		case 50:
			switch (iParam1)
			{
				case 0:
					return 804;
			
				case 1:
					return 805;
			
				default:
				
			}
		
			return -1;
	
		case 51:
			switch (iParam1)
			{
				case 0:
					return 806;
			
				default:
				
			}
		
			return -1;
	
		case 57:
			switch (iParam1)
			{
				case 0:
					return 807;
			
				case 1:
					return 808;
			
				case 2:
					return 809;
			
				default:
				
			}
		
			return -1;
	
		case 58:
			switch (iParam1)
			{
				case 0:
					return 828;
			
				case 1:
					return 829;
			
				case 2:
					return 830;
			
				default:
				
			}
		
			return -1;
	
		case 59:
			switch (iParam1)
			{
				case 0:
					return 831;
			
				case 1:
					return 832;
			
				case 2:
					return 833;
			
				default:
				
			}
		
			return -1;
	
		case 60:
			switch (iParam1)
			{
				case 0:
					return 834;
			
				case 1:
					return 835;
			
				case 2:
					return 836;
			
				default:
				
			}
		
			return -1;
	
		case 61:
			switch (iParam1)
			{
				case 0:
					return 837;
			
				case 1:
					return 838;
			
				case 2:
					return 839;
			
				default:
				
			}
		
			return -1;
	
		case 62:
			switch (iParam1)
			{
				case 0:
					return 840;
			
				case 1:
					return 841;
			
				case 2:
					return 842;
			
				default:
				
			}
		
			return -1;
	
		case 24:
			switch (iParam1)
			{
				case 0:
					return 843;
			
				case 1:
					return 844;
			
				case 2:
					return 845;
			
				default:
				
			}
		
			return -1;
	
		default:
		
	}

	return -1;
}

int func_153(int iParam0, int iParam1) // Position - 0x11D34 Hash - 0x2CB0FBEB ^0x4E4F4989
{
	switch (iParam1)
	{
		case 1:
			return Global_91469[iParam0 /*34*/].f_16;
	
		case 7:
			return func_154(iParam0);
	
		default:
			break;
	}

	return 0;
}

int func_154(int iParam0) // Position - 0x11D6F Hash - 0x6DC67296 ^0x6DC67296
{
	switch (iParam0)
	{
		case 2:
			return 2;
	
		case 3:
			return 2;
	
		case 5:
			return 2;
	
		case 6:
			return 2;
	
		case 8:
			return 1;
	
		case 12:
			return 1;
	
		case 14:
			return 2;
	
		case 16:
			return 2;
	
		case 17:
			return 3;
	
		case 18:
			return 2;
	
		case 19:
			return 2;
	
		case 20:
			return 1;
	
		case 21:
			return 1;
	
		case 22:
			return 2;
	
		case 23:
			return 1;
	
		case 25:
			return 3;
	
		case 26:
			return 2;
	
		case 28:
			return 2;
	
		case 29:
			return 2;
	
		case 30:
			return 2;
	
		case 32:
			return 2;
	
		default:
		
	}

	switch (iParam0)
	{
		case 33:
			return 3;
	
		case 34:
			return 2;
	
		case 38:
			return 2;
	
		case 39:
			return 2;
	
		case 40:
			return 1;
	
		case 41:
			return 3;
	
		case 42:
			return 3;
	
		case 43:
			return 2;
	
		case 46:
			return 2;
	
		case 47:
			return 2;
	
		case 49:
			return 2;
	
		case 50:
			return 2;
	
		case 51:
			return 1;
	
		case 57:
			return 3;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	
		case 60:
			return 3;
	
		case 61:
			return 3;
	
		case 62:
			return 3;
	
		case 24:
			return 3;
	
		default:
		
	}

	return 0;
}

BOOL func_155(int iParam0, int iParam1) // Position - 0x11F20 Hash - 0xAC8757AF ^0x27E68E2B
{
	switch (iParam1)
	{
		case 1:
			return !IS_BIT_SET(Global_91469[iParam0 /*34*/].f_15, 5);
	
		case 7:
			return func_156(iParam0);
	
		default:
			break;
	}

	return false;
}

BOOL func_156(int iParam0) // Position - 0x11F5E Hash - 0xC999F6B2 ^0xC999F6B2
{
	switch (iParam0)
	{
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 1;
	
		case 3:
			return 1;
	
		case 4:
			return 0;
	
		case 5:
			return 1;
	
		case 6:
			return 1;
	
		case 7:
			return 0;
	
		case 8:
			return 1;
	
		case 9:
			return 0;
	
		case 10:
			return 0;
	
		case 11:
			return 0;
	
		case 12:
			return 1;
	
		case 13:
			return 0;
	
		case 14:
			return 1;
	
		case 15:
			return 0;
	
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
			return 1;
	
		case 23:
			return 1;
	
		case 24:
			return 1;
	
		case 25:
			return 1;
	
		case 26:
			return 1;
	
		case 27:
			return 0;
	
		case 28:
			return 1;
	
		case 29:
			return 1;
	
		case 30:
			return 1;
	
		case 31:
			return 0;
	
		case 32:
			return 1;
	
		case 33:
			return 1;
	
		case 34:
			return 1;
	
		case 35:
			return 0;
	
		case 36:
			return 0;
	
		case 37:
			return 0;
	
		case 38:
			return 1;
	
		case 39:
			return 1;
	
		case 40:
			return 1;
	
		case 41:
			return 1;
	
		case 42:
			return 1;
	
		case 43:
			return 1;
	
		case 44:
			return 0;
	
		case 45:
			return 0;
	
		case 46:
			return 1;
	
		case 47:
			return 1;
	
		case 48:
			return 0;
	
		case 49:
			return 1;
	
		case 50:
			return 1;
	
		case 51:
			return 1;
	
		case 52:
			return 1;
	
		case 54:
			return 1;
	
		case 55:
			return 1;
	
		case 56:
			return 1;
	
		case 53:
			return 1;
	
		case 57:
			return 1;
	
		case 58:
			return 1;
	
		case 59:
			return 1;
	
		case 60:
			return 1;
	
		case 61:
			return 1;
	
		case 62:
			return 1;
	
		default:
			break;
	}

	return 0;
}

int func_157(BOOL bParam0) // Position - 0x122A4 Hash - 0xEB22E5F1 ^0x62C8F983
{
	int i;
	int num;
	int num2;
	int num3;
	int num4;
	int j;
	float num5;
	int num6;
	int num7;

	num3 = 0;
	num4 = 0;
	bParam0;

	for (i = 0; i < Global_113648.f_9087.f_330; i = i + 1)
	{
		if (Global_113648.f_9087.f_330[i /*6*/].f_3 != -1 && func_155(i, 1))
		{
			num3 = 0;
			num4 = 0;
			num7 = -1;
		
			for (j = 0; j < func_153(i, 1); j = j + 1)
			{
				num6 = func_151(i, 1, j);
			
				if (!Global_63587[num6 /*13*/].f_7)
				{
					if (func_148(num6) == 1)
						num4 = num4 + 1;
				
					switch (num6)
					{
						case 42:
						case 55:
						case 85:
						case 70:
						case 101:
							num7 = func_158(num6);
						
							if (num7 >= 2147483647)
								num7 = 1;
							break;
					}
				
					num3 = num3 + 1;
				}
			}
		
			num5 = func_147(num4, num3, false);
			num2 = func_146(num5);
		
			if (num7 > -1)
				num2 = num7;
		
			if (num5 >= 100f || num2 == 3)
				num = num + 1;
		}
	}

	bParam0;
	return num;
}

int func_158(int iParam0) // Position - 0x123BE Hash - 0x7ADD5368 ^0x6779994A
{
	int num;

	num = func_150(Global_63587[iParam0 /*13*/].f_4);

	if (num > -2)
		return num;

	return 0;
}

void func_159() // Position - 0x123E3 Hash - 0xBFB15FF8 ^0xB8B48338
{
	Entity pedSourceOfDeath;
	Ped pedIndexFromEntityIndex;

	ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
		return;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "creatures@shark@move", "attack_player", 3))
	{
		func_137(25, 1);
		return;
	}

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		pedSourceOfDeath = PED::GET_PED_SOURCE_OF_DEATH(PLAYER::PLAYER_PED_ID());
	
		if (ENTITY::IS_ENTITY_A_PED(pedSourceOfDeath))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(pedSourceOfDeath);
		
			if (func_160(pedIndexFromEntityIndex))
			{
				if (ENTITY::GET_ENTITY_MODEL(pedIndexFromEntityIndex) == 113504370)
				{
					func_137(25, 1);
					return;
				}
			}
		}
	}

	return;
}

BOOL func_160(Ped pedParam0) // Position - 0x1246C Hash - 0x251F0A94 ^0x6A446318
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return false;

	return !ENTITY::IS_ENTITY_DEAD(pedParam0, false);
}

void func_161() // Position - 0x1248A Hash - 0x626F3C8C ^0x486A897B
{
	switch (iLocal_56)
	{
		case 0:
			fLocal_64 = 0f;
		
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				return;
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) >= 3 && MISC::GET_MISSION_FLAG() == false)
			{
				if (func_166() == 2)
				{
					func_173(&uLocal_59);
					iLocal_56 = iLocal_56 + 1;
				}
			}
			break;
	
		case 1:
			if (func_165() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
				return;
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 3)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (MISC::GET_MISSION_FLAG() == true)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (func_166() < 2)
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			{
				func_164(&uLocal_59);
				iLocal_56 = 0;
				return;
			}
		
			fLocal_64 = func_163(&uLocal_59);
		
			if (fLocal_64 >= 180f)
			{
				func_137(24, 1);
				func_162(&uLocal_59);
				iLocal_56 = iLocal_56 + 1;
			}
			break;
	
		case 2:
			iLocal_56 = iLocal_56 + 1;
			break;
	}

	return;
}

void func_162(int* piParam0) // Position - 0x1259A Hash - 0xB91994E4 ^0xBBFC6497
{
	if (func_105(piParam0))
	{
		if (!func_104(piParam0))
		{
			piParam0->f_2 = func_103(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
			MISC::SET_BIT(piParam0, 2);
		}
	}

	return;
}

float func_163(var uParam0) // Position - 0x125D1 Hash - 0x828E31ED ^0x7E930FA0
{
	if (func_105(uParam0))
		if (func_104(uParam0))
			return uParam0->f_2;
		else
			return func_103(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;

	return 0f;
}

void func_164(var uParam0) // Position - 0x1260A Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_165() // Position - 0x12620 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

int func_166() // Position - 0x1263C Hash - 0x833A8C2C ^0x833A8C2C
{
	int num;
	Ped ped;

	num = 0;
	ped = func_168(2);

	if (func_167(ped, 0) || IS_BIT_SET(Global_96532, 2))
		num = num + 1;

	ped = func_168(1);

	if (func_167(ped, 0) || IS_BIT_SET(Global_96532, 1))
		num = num + 1;

	ped = func_168(0);

	if (func_167(ped, 0) || IS_BIT_SET(Global_96532, 0))
		num = num + 1;

	return num;
}

BOOL func_167(Ped pedParam0, int iParam1) // Position - 0x126B2 Hash - 0xE4F8E1F1 ^0xF8674CFD
{
	return false;
}

Ped func_168(int iParam0) // Position - 0x1270B Hash - 0x44474C2F ^0xB8583860
{
	if (iParam0 > 3)
		return 0;

	if (iParam0 == func_56())
		return PLAYER::PLAYER_PED_ID();

	return Global_98159[func_169(iParam0)];
}

int func_169(int iParam0) // Position - 0x1273C Hash - 0x379BF8EA ^0x379BF8EA
{
	if (iParam0 == 0)
		return 0;
	else if (iParam0 == 2)
		return 2;
	else if (iParam0 == 1)
		return 1;
	else if (iParam0 == 145)
		return 3;

	return 4;
}

BOOL func_170(int iParam0) // Position - 0x12777 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_171(char* sParam0, int iParam1) // Position - 0x12785 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_172() // Position - 0x1279C Hash - 0x4C81F065 ^0x26D68D51
{
	return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

void func_173(int* piParam0) // Position - 0x127B2 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_174(piParam0, 0f);
	return;
}

void func_174(int* piParam0, float fParam1) // Position - 0x127C1 Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_103(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_175(var uParam0, int iParam1) // Position - 0x127EC Hash - 0x9018AFAD ^0xF80E9FE8
{
	uParam0->f_79 = iParam1;

	if (uParam0->f_79)
		func_122(uParam0, 0);

	return;
}

void func_176(var uParam0) // Position - 0x12808 Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_177(uParam0, i);
	}

	func_122(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_177(var uParam0, int iParam1) // Position - 0x1283C Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_178() // Position - 0x1284C Hash - 0x395CA824 ^0x400BAED
{
	int i;
	int num;

	num = 78;

	for (i = 1; i <= num - 1; i = i + 1)
	{
		PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(i);
	}

	return;
}

void func_179(int iParam0) // Position - 0x12876 Hash - 0xFB4BE991 ^0xFB4BE991
{
	iParam0 > 0;
	return;
}

