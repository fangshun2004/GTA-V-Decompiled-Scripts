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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	int iLocal_22 = 0;
	Object obScriptParam_23 = 0;
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

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (IS_BIT_SET(Global_1666891, 1))
		{
			func_25();
		}
		else
		{
			NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, -1);
			func_22(0, -1, false);
			MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
			iLocal_22 = 1;
		}
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2))
	{
		func_25();
	}

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (iLocal_22 == 1)
			if (func_14())
				func_25();
	
		if (ENTITY::DOES_ENTITY_EXIST(obScriptParam_23))
		{
			if (BRAIN::IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(obScriptParam_23))
			{
				switch (iLocal_18)
				{
					case 0:
						if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(obScriptParam_23))
						{
							uLocal_19 = { ENTITY::GET_ENTITY_COORDS(obScriptParam_23, true) };
							iLocal_18 = 1;
						}
						break;
				
					case 1:
						if (OBJECT::HAS_OBJECT_BEEN_BROKEN(obScriptParam_23, 0) && ENTITY::IS_ENTITY_VISIBLE(obScriptParam_23) && !ENTITY::IS_ENTITY_A_MISSION_ENTITY(obScriptParam_23))
						{
							func_1();
							iLocal_18 = 2;
						}
						break;
				
					case 2:
						break;
				}
			}
			else
			{
				func_25();
			}
		}
		else
		{
			func_25();
		}
	}

	return;
}

void func_1() // Position - 0x111 Hash - 0x2BC5D66C ^0x813E67DD
{
	Hash model;
	Hash pickupHash;
	int address;
	int randomIntInRange;

	model = 289396019;
	pickupHash = 341217064;
	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(70, 121);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		model = -295781225;
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(50, 101);
		randomIntInRange = func_13(randomIntInRange, 1);
	}

	MISC::SET_BIT(&address, 3);
	MISC::SET_BIT(&address, 4);
	STREAMING::REQUEST_MODEL(model);

	while (!STREAMING::HAS_MODEL_LOADED(model))
	{
		SYSTEM::WAIT(0);
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		func_2(pickupHash, OBJECT::GET_SAFE_PICKUP_COORDS(uLocal_19, 1067030938, 1069547520), address, randomIntInRange, model, false, false);
	else
		OBJECT::CREATE_PICKUP(pickupHash, OBJECT::GET_SAFE_PICKUP_COORDS(uLocal_19, 1067030938, 1069547520), address, randomIntInRange, false, model);

	return;
}

struct<5> func_2(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, Hash hParam6, BOOL bParam7, BOOL bParam8) // Position - 0x1C5 Hash - 0xDA03BE01 ^0xDA03BE01
{
	var unk;

	unk = 123;

	if (func_12() && func_11(hParam0))
		unk = { func_3(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7) };
	else
		unk.f_4 = OBJECT::CREATE_AMBIENT_PICKUP(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7, bParam8);

	return unk;
}

struct<5> func_3(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, int iParam4, int iParam5, Hash hParam6, BOOL bParam7) // Position - 0x21C Hash - 0xC0A4E8E1 ^0xC0A4E8E1
{
	var unk;
	int unk2;
	Hash unk3;
	int unk4;

	unk = 123;

	if (func_10() == -1)
		return unk;

	num = func_9(-1);

	if (num == -1)
		return unk;

	hash = 123;
	hash = hParam0;
	hash.f_1 = { vParam1 };

	if (func_4(&hash) != -1)
		return unk;

	MISC::SET_BIT(&iParam4, 5);
	hash.f_4 = OBJECT::CREATE_NON_NETWORKED_AMBIENT_PICKUP(hParam0, vParam1, iParam4, iParam5, hParam6, bParam7, false);
	num2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	if (bParam7)
	{
		Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_12 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
		Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_13 = NETWORK::NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT();
	
		if (Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_13 == 0)
		{
			Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_13 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
			Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_11 = 1;
		}
		else
		{
			Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_11 = 2;
		}
	}

	Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/] = { hash };
	Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_5 = { vParam1 };
	Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_8 = iParam4;
	Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_9 = iParam5;
	Global_1914091[num2 /*297*/].f_98.f_21[num /*14*/].f_10 = hParam6;
	return hash;
}

int func_4(var uParam0) // Position - 0x399 Hash - 0xE374EDA2 ^0xE374EDA2
{
	int i;

	if (!func_7(uParam0))
		return -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (func_5(uParam0, &Global_2652258.f_2452[i /*16*/]))
			return i;
	}

	return -1;
}

BOOL func_5(var uParam0, var uParam1) // Position - 0x3DC Hash - 0x152AB8AC ^0xE21D1BAA
{
	if (*uParam0 == *uParam1 && func_6(uParam0->f_1, uParam1->f_1, false) && uParam0->f_4 == uParam1->f_4)
		return true;

	return false;
}

BOOL func_6(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, BOOL bParam6) // Position - 0x417 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_7(var uParam0) // Position - 0x45E Hash - 0xDB6E44FA ^0x3962D52C
{
	if (*uParam0 == 123 || func_8(uParam0->f_1) || uParam0->f_4 == 0)
		return false;

	return true;
}

BOOL func_8(float fParam0, var uParam1, var uParam2) // Position - 0x490 Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

int func_9(int iParam0) // Position - 0x4BA Hash - 0x7CC95B2E ^0x464C4CB7
{
	int num;
	int i;

	if (iParam0 == -1)
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_1914091[iParam0 /*297*/].f_98.f_21[i /*14*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

int func_10() // Position - 0x506 Hash - 0x5320BFD5 ^0x5320BFD5
{
	int num;
	int i;

	num = -1;

	for (i = 0; i < 10; i = i + 1)
	{
		if (!func_7(&Global_2652258.f_2452[i /*16*/]))
		{
			num = i;
			break;
		}
	}

	return num;
}

int func_11(int iParam0) // Position - 0x540 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -31919185:
		case -831529621:
		case 1575005502:
		case 513448440:
		case 545862290:
		case 341217064:
		case 1897726628:
		case -562499202:
		case -512375144:
			return 1;
	
		default:
		
	}

	return 0;
}

int func_12() // Position - 0x58A Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_262145.f_30937;
}

int func_13(int iParam0, int iParam1) // Position - 0x599 Hash - 0x8FF32F3 ^0x5AB70E11
{
	float value;

	switch (iParam1)
	{
		case 0:
			break;
	
		case 1:
			if (iParam0 > 0)
			{
				value = SYSTEM::TO_FLOAT(iParam0) * Global_262145;
				iParam0 = SYSTEM::ROUND(value);
			}
			break;
	
		default:
			break;
	}

	return iParam0;
}

BOOL func_14() // Position - 0x5DA Hash - 0x52E21E9B ^0xD0F85E96
{
	if (Global_1575035 == false)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			return true;

	if (func_21())
		return true;

	if (Global_2696915)
		return true;

	if (func_20())
		return true;

	if (func_19(159))
		if (!func_18())
			return true;

	if (func_19(157))
		return true;

	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		return true;

	if (func_15() != 0)
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_15()) == 0)
			return true;

	return false;
}

Hash func_15() // Position - 0x65E Hash - 0x90B5165C ^0xB8DD5DC8
{
	switch (func_17())
	{
		case 0:
			return func_16();
	
		case 2:
			return -47565502;
	}

	return 0;
}

Hash func_16() // Position - 0x691 Hash - 0x61402777 ^0xB9FAC976
{
	switch (Global_2697019)
	{
		case 0:
			return -931834499;
	
		default:
		
	}

	return -931834499;
}

int func_17() // Position - 0x6B5 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_18() // Position - 0x6C0 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_698;
}

BOOL func_19(int iParam0) // Position - 0x6CF Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_20() // Position - 0x6E6 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2694524;
}

BOOL func_21() // Position - 0x6F2 Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_693;
}

int func_22(int iParam0, int iParam1, BOOL bParam2) // Position - 0x701 Hash - 0x75751681 ^0x9140C9A0
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_24();
			else
				return 0;
	
		if (!func_23(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_24();
					else
						return 0;
			
				if (func_21())
					if (!bParam2)
						func_24();
					else
						return 0;
			
				if (func_19(157))
					if (!bParam2)
						func_24();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_24();
				else
					return 0;
			}
		}
	
		SYSTEM::WAIT(0);
	}

	if (iParam1 > -1)
		Global_1574666 = i;

	if (iParam0 == 0)
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!bParam2)
				func_24();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_24();
		else
			return 0;

	return 1;
}

BOOL func_23(BOOL bParam0) // Position - 0x817 Hash - 0x1CCCE169 ^0x1CCCE169
{
	bParam0;
	return Global_1575035;
}

void func_24() // Position - 0x828 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_25() // Position - 0x834 Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

