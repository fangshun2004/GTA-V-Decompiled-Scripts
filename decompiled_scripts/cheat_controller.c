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
	var uLocal_45 = 0;
	int iLocal_46 = 0;
	int iLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	Hash hLocal_67 = 0;
	Vehicle veLocal_68 = 0;
	Vehicle veLocal_69 = 0;
	char* sLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	float fLocal_78 = 0f;
	int iLocal_79 = 0;
	var uLocal_80 = 10;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	int iLocal_91 = 0;
	BOOL bLocal_92 = 0;
	BOOL bLocal_93 = 0;
	int iLocal_94 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	iLocal_46 = 1;
	iLocal_47 = 1;
	iLocal_48 = 1;
	iLocal_49 = 1;
	iLocal_50 = 1;
	iLocal_51 = 1;
	iLocal_52 = 1;
	iLocal_53 = 1;
	iLocal_54 = 1;
	iLocal_55 = 1;
	iLocal_56 = 1;
	iLocal_57 = 1;
	iLocal_58 = 1;
	iLocal_59 = 1;
	iLocal_60 = 1;
	iLocal_61 = 1;
	iLocal_62 = 1;
	iLocal_63 = 1;
	iLocal_64 = 1;
	iLocal_65 = 1;
	iLocal_66 = 1;
	hLocal_67 = joaat("BMX");
	iLocal_73 = 300000;
	fLocal_78 = 1f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(34))
		func_113();

	Global_32413 = 0;
	Global_32412 = 0;
	Global_32414 = 0;
	Global_32415 = 0;
	Global_32417 = 0;
	Global_32416 = 0;
	func_112();

	while (true)
	{
		func_2();
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_1(PLAYER::PLAYER_ID(), true, true) && !Global_1836384 && Global_32163 == 0)
			func_113();
	
		SYSTEM::WAIT(0);
	}

	return;
}

BOOL func_1(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

void func_2() // Hash - 0x99800FD4 ^0x99800FD4
{
	func_88();
	func_68();
	func_22();
	func_3(hLocal_67);
	return;
}

void func_3(Hash hParam0) // Hash - 0x2094C976 ^0x9F38D222
{
	switch (iLocal_46)
	{
		case 0:
			break;
	
		case 1:
			break;
	
		case 2:
			if (INTERIOR::IS_INTERIOR_SCENE())
			{
				func_21(_("Can't spawn that vehicle here."));
				iLocal_46 = 1;
			}
			else
			{
				func_20(hParam0);
			}
			break;
	
		case 4:
			func_4(hParam0);
			break;
	
		default:
			break;
	}

	return;
}

void func_4(Hash hParam0) // Hash - 0x8E3E131F ^0xEA567AE0
{
	float entityCoords;
	float entityHeading;
	BOOL flag;

	flag = false;

	if (STREAMING::HAS_MODEL_LOADED(hParam0))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_68))
			{
				if (!ENTITY::IS_ENTITY_DEAD(veLocal_68, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_68, false))
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_68, true) };
						entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_68);
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), entityCoords, entityCoords.f_1, entityCoords.f_2 + 4f, true, false, false, true);
						flag = true;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(&veLocal_68);
			}
		
			if (!flag)
			{
				if (hParam0 == joaat("DUSTER") || hParam0 == joaat("STUNT"))
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), -1.5f, 3.5f, 1f) };
				else if (hParam0 == joaat("BUZZARD"))
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 6f, 2f) };
				else
					entityCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(PLAYER::PLAYER_PED_ID(), 0f, 3.5f, 1f) };
			
				entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) + 90f;
			}
		
			if (func_18(hParam0, entityCoords, entityHeading))
			{
				veLocal_68 = VEHICLE::CREATE_VEHICLE(hParam0, entityCoords, entityHeading, false, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_68, 1084227584);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam0);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_68);
				func_16(sLocal_70);
				func_5(20);
			}
			else
			{
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam0);
				func_21(_("Can't spawn that vehicle here."));
			}
		
			iLocal_46 = 1;
		}
	}

	return;
}

void func_5(int iParam0) // Hash - 0xC6665C43 ^0x981DEFE3
{
	if (!func_15(14) && !func_14(""))
	{
		MISC::SET_BIT(&Global_32414, iParam0);
		Global_32417 = 1;
		func_6();
	}

	return;
}

void func_6() // Hash - 0xB13B78F4 ^0x15A61AF5
{
	int num;

	num = func_8();

	switch (num)
	{
		case 0:
			func_7(joaat("SP0_TIMES_CHEATED"), 1);
			break;
	
		case 1:
			func_7(joaat("SP1_TIMES_CHEATED"), 1);
			break;
	
		case 2:
			func_7(joaat("SP2_TIMES_CHEATED"), 1);
			break;
	}

	return;
}

void func_7(Hash hParam0, int iParam1) // Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

int func_8() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_9();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_9() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_12(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_11(PLAYER::PLAYER_PED_ID());
		
			if (func_10(num) && !func_15(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_10(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_10(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_11(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_12(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_12(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_10(iParam0))
		return func_13(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_13(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_14(char* sParam0) // Hash - 0x763654F ^0xF3D4E24C
{
	if (iLocal_94 != 0)
	{
		if (func_15(14) && CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::ARE_STRINGS_EQUAL(sParam0, _("Super jump.")) && INTERIOR::IS_INTERIOR_SCENE())
				return false;
		
			if (MISC::ARE_STRINGS_EQUAL(sParam0, _("Moon gravity.")) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
				return false;
		}
	
		return true;
	}

	return false;
}

BOOL func_15(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_16(char* sParam0) // Hash - 0x52177E72 ^0xB73C47BF
{
	if (func_14(""))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Cheat activated:~n~~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
		STATS::PLAYSTATS_CHEAT_APPLIED(sParam0);
	}

	return;
}

void func_17(int iParam0) // Hash - 0xA5770AC9 ^0xA5770AC9
{
	uLocal_80[iLocal_91] = iParam0;
	iLocal_91 = iLocal_91 + 1;

	if (iLocal_91 >= 10)
		iLocal_91 = 0;

	return;
}

BOOL func_18(Hash hParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4) // Hash - 0xEF25110D ^0x426F3ED1
{
	var unk;
	var minimum;
	float maximum;
	float xOffset;
	var endCoords;
	var surfaceNormal;
	int hit;
	int shapeTestHandle;
	int shapeTestHandle2;
	int shapeTestHandle3;
	int shapeTestHandle4;
	int shapeTestHandle5;
	int shapeTestHandle6;
	int shapeTestHandle7;
	var entityHit;

	unk = 9;
	MISC::GET_MODEL_DIMENSIONS(hParam0, &minimum, &maximum);
	xOffset = MISC::ABSF(maximum - minimum) / 2f;
	xOffset.f_1 = MISC::ABSF(maximum.f_1 - minimum.f_1) / 2f;
	xOffset.f_2 = MISC::ABSF(maximum.f_2 - minimum.f_2) / 2f;
	unk[0 /*3*/] = { vParam1 };
	unk[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, -xOffset.f_1, -xOffset.f_2) };
	unk[2 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, -xOffset.f_1, -xOffset.f_2) };
	unk[3 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, xOffset.f_1, -xOffset.f_2) };
	unk[4 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, xOffset.f_1, -xOffset.f_2) };
	unk[5 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, -xOffset.f_1, xOffset.f_2) };
	unk[6 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, -xOffset.f_1, xOffset.f_2) };
	unk[7 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, xOffset, xOffset.f_1, xOffset.f_2) };
	unk[8 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, -xOffset, xOffset.f_1, xOffset.f_2) };

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam1))
		return false;

	shapeTestHandle7 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(func_19(PLAYER::PLAYER_ID()) + { 1f, 0f, 0f }, vParam1, 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle7, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[1 /*3*/], unk[3 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle2 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[2 /*3*/], unk[4 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle2, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle3 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[5 /*3*/], unk[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle3, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle4 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[6 /*3*/], unk[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle4, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle5 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[1 /*3*/], unk[8 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle5, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	shapeTestHandle6 = SHAPETEST::START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(unk[2 /*3*/], unk[7 /*3*/], 87, PLAYER::PLAYER_PED_ID(), 0);
	SHAPETEST::GET_SHAPE_TEST_RESULT(shapeTestHandle6, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (hit != 0)
		return false;

	return true;
}

Vector3 func_19(Player plParam0) // Hash - 0x6712BF53 ^0x688D5BEC
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}

void func_20(Hash hParam0) // Hash - 0xDC27EBAB ^0x4801F34A
{
	if (STREAMING::IS_MODEL_IN_CDIMAGE(hParam0))
	{
		STREAMING::REQUEST_MODEL(hParam0);
	
		if (STREAMING::HAS_MODEL_LOADED(hParam0))
			iLocal_46 = 4;
	}

	return;
}

void func_21(char* sParam0) // Hash - 0x71029F9 ^0xF3938C78
{
	if (!func_15(14))
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Cheat denied:~n~~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}

	return;
}

void func_22() // Hash - 0x200857A7 ^0x200857A7
{
	func_65();
	func_64();
	func_45();
	func_44();
	func_43();
	func_39();
	func_36();
	func_32();
	func_23();
	return;
}

void func_23() // Hash - 0x4A02498E ^0x36A1AB36
{
	switch (iLocal_66)
	{
		case 1:
			break;
	
		case 4:
			func_31(19, true);
			func_30();
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(19))
			{
				iLocal_66 = 9;
				return;
			}
		
			func_25();
			break;
	
		case 9:
			func_24(_("Slow motion aim."));
			func_31(19, false);
			MISC::SET_TIME_SCALE(1f);
			iLocal_77 = 0;
			iLocal_66 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_24(char* sParam0) // Hash - 0x559B898E ^0x383146A1
{
	if (func_14(sParam0))
	{
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("Cheat deactivated:~n~~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam0);
		func_17(HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true));
	}

	return;
}

void func_25() // Hash - 0xB839C67 ^0x33057EE4
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_AIM))
			if (func_26(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && func_26(PLAYER::PLAYER_PED_ID()) != joaat("OBJECT"))
				MISC::SET_TIME_SCALE(fLocal_78);
			else
				MISC::SET_TIME_SCALE(1f);
		else
			MISC::SET_TIME_SCALE(1f);

	return;
}

int func_26(Ped pedParam0) // Hash - 0xA860C4B2 ^0x4F46EE3F
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_27(int iParam0) // Hash - 0x71C4CD2D ^0x71C4CD2D
{
	if (IS_BIT_SET(Global_32412, iParam0))
		return true;

	return false;
}

BOOL func_28() // Hash - 0xEC9EC0D8 ^0xEC9EC0D8
{
	if (func_15(0) || func_15(11) || func_15(4) || func_15(9) || func_15(10) || func_15(3) || func_15(2) || func_29(35))
		return true;

	return false;
}

BOOL func_29(int iParam0) // Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_30() // Hash - 0xB7899BF ^0xB7899BF
{
	iLocal_77 = iLocal_77 + 1;

	if (iLocal_77 > 3)
	{
		iLocal_77 = 0;
		iLocal_66 = 9;
		return;
	}

	switch (iLocal_77)
	{
		case 1:
			func_16(_("Slow motion aim level 1."));
			fLocal_78 = 0.6f;
			break;
	
		case 2:
			func_16(_("Slow motion aim level 2."));
			fLocal_78 = 0.4f;
			break;
	
		case 3:
			func_16(_("Slow motion aim level 3."));
			fLocal_78 = 0.2f;
			break;
	
		default:
			break;
	}

	iLocal_66 = 5;
	return;
}

void func_31(int iParam0, BOOL bParam1) // Hash - 0x9D3BB367 ^0x3A7E235
{
	if (bParam1)
	{
		MISC::SET_BIT(&Global_32413, iParam0);
		func_5(iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_32413, iParam0);
	}

	return;
}

void func_32() // Hash - 0x46DD98A9 ^0xA3EB7992
{
	switch (iLocal_63)
	{
		case 1:
			break;
	
		case 4:
			func_31(16, true);
			func_35();
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
		
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_34() || func_33(true) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SELECT_WEAPON) || PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL) || func_27(23) || func_27(21) || func_27(16))
				iLocal_63 = 9;
			break;
	
		case 9:
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
			PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
			func_24(_("Slow Motion."));
			func_31(16, false);
			iLocal_76 = 0;
			MISC::SET_TIME_SCALE(1f);
			iLocal_63 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_33(BOOL bParam0) // Hash - 0x1F743529 ^0xDFDFCA73
{
	if (bParam0)
		return Global_23131.f_4 && Global_23131.f_104 == 4;

	return Global_23131.f_4;
}

BOOL func_34() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

void func_35() // Hash - 0xF1F805BD ^0xC8DA1F07
{
	iLocal_76 = iLocal_76 + 1;

	if (iLocal_76 > 3)
	{
		iLocal_63 = 9;
		return;
	}

	switch (iLocal_76)
	{
		case 1:
			func_16(_("Slow motion level 1."));
			MISC::SET_TIME_SCALE(0.6f);
			break;
	
		case 2:
			func_16(_("Slow motion level 2."));
			MISC::SET_TIME_SCALE(0.4f);
			break;
	
		case 3:
			func_16(_("Slow motion level 3."));
			MISC::SET_TIME_SCALE(0.2f);
			break;
	
		default:
			break;
	}

	iLocal_63 = 5;
	return;
}

void func_36() // Hash - 0x2D872249 ^0xA0635CBA
{
	float entityCoords;
	float entityHeading;
	float groundZ;

	switch (iLocal_64)
	{
		case 1:
			break;
	
		case 2:
			func_31(17, true);
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, false, true);
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			entityHeading = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
			MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
			groundZ = groundZ + 500f;
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), entityCoords, entityCoords.f_1, groundZ, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), entityHeading);
			iLocal_72 = MISC::GET_GAME_TIMER();
			CAM::DO_SCREEN_FADE_OUT(0);
			iLocal_64 = 3;
			break;
	
		case 3:
			if (func_38(1000, iLocal_72))
			{
				ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
				iLocal_72 = MISC::GET_GAME_TIMER();
				iLocal_64 = 4;
			}
			break;
	
		case 4:
			if (func_38(1000, iLocal_72))
			{
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_DEPLOY, true);
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_PITCH_UD, true);
			
				if (func_8() == 0)
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_TASK, 0, 0, 0);
				else
					PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_ACCS, 0, 0, 0);
			
				CAM::DO_SCREEN_FADE_IN(250);
				iLocal_72 = MISC::GET_GAME_TIMER();
				func_16(_("Skyfall."));
				MISC::SET_INSTANCE_PRIORITY_HINT(2);
				iLocal_64 = 5;
			}
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(17))
			{
				iLocal_64 = 9;
				break;
			}
		
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_PARACHUTE_DEPLOY, true);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
		
			if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
			{
				ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, 0f, 200f, 2.5f, 0f, 0f, 0f, 0, true, false, false, false, true);
			
				if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PLAYER::PLAYER_PED_ID()))
					iLocal_64 = 9;
			}
			else
			{
				iLocal_64 = 9;
			}
			break;
	
		case 9:
			func_37();
			func_24(_("Skyfall."));
			func_31(17, false);
			iLocal_64 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_37() // Hash - 0x12527D33 ^0xB0E39C47
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		WEAPON::REMOVE_WEAPON_FROM_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"));

	if (iLocal_62 != 5)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
	}

	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	return;
}

BOOL func_38(int iParam0, int iParam1) // Hash - 0x5F8CC473 ^0x6AD11ACD
{
	int gameTimer;
	int num;

	gameTimer = MISC::GET_GAME_TIMER();
	num = gameTimer - iParam0;

	if (num > iParam1)
		return true;

	return false;
}

void func_39() // Hash - 0xFC230868 ^0xC27FA20D
{
	var unk;

	switch (iLocal_62)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Invincible for 5 minutes."));
			func_31(15, true);
			iLocal_62 = 5;
			iLocal_74 = MISC::GET_GAME_TIMER();
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iLocal_62 = 9;
				return;
			}
		
			unk = { func_19(PLAYER::PLAYER_ID()) };
		
			if (func_28() || func_34() || func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
			{
				iLocal_62 = 9;
				return;
			}
		
			iLocal_75 = MISC::GET_GAME_TIMER() - iLocal_74;
		
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) == 0)
				func_40(iLocal_73 - iLocal_75, _("INVINCIBILITY"), 0, 0, 1000, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, -1);
		
			if (iLocal_75 >= iLocal_73 - 1000)
			{
				iLocal_62 = 9;
				return;
			}
		
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
			STATS::STAT_SET_CHEAT_IS_ACTIVE();
			break;
	
		case 9:
			func_24(_("Invincibility"));
			func_31(15, false);
			iLocal_62 = 1;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
				ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
			}
			break;
	
		default:
			break;
	}

	return;
}

void func_40(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17) // Hash - 0xE816D297 ^0xE816D297
{
	int num;
	int i;

	num = -1;

	for (i = 0; i <= 9; i = i + 1)
	{
		if (num == -1)
			if (func_42(7, i) == false)
				num = i;
	}

	if (num > -1)
	{
		Global_1655472.f_1 = 1;
		func_41(7, num);
		Global_1655472.f_4659[num] = iParam0;
		TEXT_LABEL_ASSIGN_STRING(&Global_1655472.f_4659.f_11[num /*16*/], sParam1, 64);
		Global_1655472.f_4659.f_172[num] = iParam2;
		Global_1655472.f_4659.f_216[num] = iParam3;
		Global_1655472.f_4659.f_183[num] = iParam4;
		Global_1655472.f_4659.f_194[num] = iParam5;
		Global_1655472.f_4659.f_249[num] = iParam6;
		Global_1655472.f_4659.f_260[num] = iParam7;
		Global_1655472.f_4659.f_205[num] = iParam8;
		Global_1655472.f_4659.f_314[num] = iParam9;
		Global_1655472.f_4659.f_325[num] = iParam10;
		Global_1655472.f_4659.f_357[num] = iParam11;
		Global_1655472.f_4659.f_238[num] = iParam12;
		Global_1655472.f_4659.f_271[num] = iParam13;
		Global_1655472.f_4659.f_368[num] = iParam14;
		Global_1655472.f_4659.f_379[num] = iParam15;
		Global_1655472.f_4659.f_390[num] = iParam16;
		Global_1655472.f_4659.f_227[num] = iParam17;
	}

	return;
}

void func_41(int iParam0, int iParam1) // Hash - 0xB94ADBE4 ^0x5A6F4E87
{
	MISC::SET_BIT(&Global_1655472.f_7009[iParam0], iParam1);
	return;
}

BOOL func_42(int iParam0, int iParam1) // Hash - 0x3E555E75 ^0x3E555E75
{
	return IS_BIT_SET(Global_1655472.f_7009[iParam0], iParam1);
}

void func_43() // Hash - 0x82B309B0 ^0x35D69544
{
	switch (iLocal_59)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Flaming bullets."));
			func_31(12, true);
			iLocal_59 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(12))
			{
				iLocal_59 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_59 = 9;
				return;
			}
		
			MISC::SET_FIRE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24(_("Flaming bullets."));
			func_31(12, false);
			iLocal_59 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_44() // Hash - 0xF04BF023 ^0x76AE3B6
{
	switch (iLocal_60)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Explosive melee attacks."));
			func_31(13, true);
			iLocal_60 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(13) || func_28())
			{
				iLocal_60 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_MELEE_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24(_("Explosive melee attacks."));
			func_31(13, false);
			iLocal_60 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_45() // Hash - 0xA5D4192E ^0x3A3EB316
{
	switch (iLocal_65)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Drunk mode."));
			func_31(18, true);
			func_60(PLAYER::PLAYER_PED_ID());
			func_58(30000, 1050253722, 1065353216, 0);
			iLocal_65 = 5;
			break;
	
		case 5:
			if (func_28() || !PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(18))
				iLocal_65 = 9;
			break;
	
		case 9:
			func_24(_("Drunk mode."));
			func_31(18, false);
			func_49(PLAYER::PLAYER_PED_ID());
			func_48(1000);
			iLocal_65 = 1;
			break;
	
		case 10:
			func_46(true);
			func_31(18, false);
			iLocal_65 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_46(BOOL bParam0) // Hash - 0x37413453 ^0xDEC2C333
{
	CAM::SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(0f);
	CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_GAMEPLAY_CAM_SHAKING(true);
	CAM::SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(0f);
	CAM::STOP_CINEMATIC_CAM_SHAKING(true);
	AUDIO::SET_AUDIO_SPECIAL_EFFECT_MODE(0);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("SAFEHOUSE_STONED_MICHAEL"))
		AUDIO::STOP_AUDIO_SCENE("SAFEHOUSE_STONED_MICHAEL");

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_44424))
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE(&Global_44424))
			AUDIO::STOP_AUDIO_SCENE(&Global_44424);

	if (CAM::DOES_CAM_EXIST(Global_44412))
	{
		if (CAM::IS_CAM_SHAKING(Global_44412))
		{
			CAM::SET_CAM_SHAKE_AMPLITUDE(Global_44412, 0f);
			CAM::STOP_CAM_SHAKING(Global_44412, true);
		}
	}

	if (CAM::IS_SCRIPT_GLOBAL_SHAKING())
		CAM::STOP_SCRIPT_GLOBAL_SHAKING(false);

	if (bParam0)
		if (GRAPHICS::GET_TIMECYCLE_MODIFIER_INDEX() != -1 || GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() != -1)
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
		else if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
			GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();

	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	TEXT_LABEL_ASSIGN_STRING(&Global_44424, "", 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_44440, "", 16);
	func_47();
	return;
}

void func_47() // Hash - 0xCB25708C ^0xCDEC1987
{
	Global_44411 = false;
	Global_44412 = 0;
	Global_44413 = 0;
	Global_44414 = 30000;
	Global_44415 = 0f;
	Global_44417 = 0f;
	Global_44416 = 0f;
	Global_44418 = 1f;
	Global_44419 = 0f;
	TEXT_LABEL_ASSIGN_STRING(&Global_44420, "", 16);
	return;
}

void func_48(int iParam0) // Hash - 0x4167165B ^0x9271E809
{
	int gameTimer;

	if (!Global_44411)
		return;

	gameTimer = MISC::GET_GAME_TIMER();
	Global_44413 = gameTimer + iParam0;
	Global_44414 = iParam0;
	return;
}

void func_49(Ped pedParam0) // Hash - 0x91438920 ^0xDA692F14
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_57(pedParam0);

	if (!num == -1)
	{
		num2 = Global_44232[num /*5*/];
		func_52(1, num2, 1);
		return;
	}

	num3 = func_51(pedParam0);

	if (num3 == -1)
		return;

	func_50(num3);
	return;
}

void func_50(int iParam0) // Hash - 0xBB510F32 ^0xE77AE77B
{
	if (iParam0 < 0 || iParam0 >= 5)
		return;

	if (!Global_44206[iParam0 /*5*/].f_1 == 0)
		if (Global_44206[iParam0 /*5*/].f_1 == PLAYER::PLAYER_PED_ID())
			Global_44444 = 0;

	Global_44206[iParam0 /*5*/] = 13;
	Global_44206[iParam0 /*5*/].f_1 = 0;
	Global_44206[iParam0 /*5*/].f_2 = 0;
	Global_44206[iParam0 /*5*/].f_3 = 0;
	Global_44206[iParam0 /*5*/].f_4 = 0;
	Global_44204 = Global_44204 - 1;

	if (Global_44204 < 0)
		Global_44204 = 0;

	return;
}

int func_51(Ped pedParam0) // Hash - 0x14AF2EDD ^0xC5BC7CD2
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/].f_1 == pedParam0)
			return i;
	}

	return -1;
}

void func_52(int iParam0, int iParam1, int iParam2) // Hash - 0xF54D70EF ^0xF54D70EF
{
	func_53(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_53(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_55(iParam0, iParam1, iParam2))
		return;

	num = func_54();

	if (num == -1)
		return;

	Global_44313[num /*6*/] = iParam0;
	Global_44313[num /*6*/].f_1 = iParam1;
	Global_44313[num /*6*/].f_2 = iParam2;
	Global_44313[num /*6*/].f_3 = iParam3;
	Global_44313[num /*6*/].f_4 = iParam4;
	Global_44313[num /*6*/].f_5 = iParam5;
	return;
}

int func_54() // Hash - 0x11506CC4 ^0x2E9F5641
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_44313[i /*6*/].f_2 == 6)
			return i;
	}

	return -1;
}

BOOL func_55(int iParam0, int iParam1, int iParam2) // Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_56(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_56(int iParam0, int iParam1, int iParam2) // Hash - 0x61F8C119 ^0x1C9B84EC
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (iParam2 == Global_44313[i /*6*/].f_2)
			if (iParam0 == Global_44313[i /*6*/])
				if (iParam1 == Global_44313[i /*6*/].f_1)
					return i;
	}

	return -1;
}

int func_57(Ped pedParam0) // Hash - 0xDCBB968F ^0xDCBB968F
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (!Global_44232[i /*5*/] == -1)
			if (pedParam0 == Global_44232[i /*5*/].f_1)
				return i;
	}

	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2, Cam caParam3) // Hash - 0x63B449CA ^0x63B449CA
{
	func_59(-1, iParam0, iParam1, iParam2, caParam3, true);
	return;
}

void func_59(int iParam0, int iParam1, float fParam2, float fParam3, Cam caParam4, BOOL bParam5) // Hash - 0xE2E72367 ^0x8F691389
{
	int gameTimer;

	if (Global_3)
		return;

	if (Global_44411)
		return;

	if (!bParam5)
		if (iParam0 < 0)
			return;

	if (fParam2 < 0f || fParam2 > 5f)
		return;

	if (!CAM::IS_GAMEPLAY_CAM_SHAKING())
		CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", fParam3);

	if (!CAM::IS_CINEMATIC_CAM_SHAKING())
		CAM::SHAKE_CINEMATIC_CAM("DRUNK_SHAKE", fParam3 * Global_44410);

	if (CAM::DOES_CAM_EXIST(caParam4))
	{
		CAM::SHAKE_CAM(caParam4, "DRUNK_SHAKE", fParam3);
		Global_44412 = caParam4;
	}
	else
	{
		Global_44412 = 0;
	}

	Global_44411 = true;
	gameTimer = MISC::GET_GAME_TIMER();
	Global_44413 = gameTimer + iParam0;

	if (bParam5)
		if (iParam0 == -1)
			Global_44413 = -1;

	Global_44414 = iParam1;
	Global_44415 = fParam2;
	Global_44417 = fParam3;
	Global_44416 = fParam3;
	return;
}

int func_60(Ped pedParam0) // Hash - 0xEEA6C472 ^0xEEA6C472
{
	return func_61(pedParam0, -1, true);
}

int func_61(Ped pedParam0, int iParam1, BOOL bParam2) // Hash - 0x1ECD241B ^0x2C71A0AB
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return 0;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	num = func_63(pedParam0);

	if (!num == -1)
		return 1;

	num2 = func_51(pedParam0);

	if (!num2 == -1)
		return 1;

	if (!bParam2)
		if (iParam1 == 0 || iParam1 < 0)
			return 0;

	num3 = func_62();

	if (num3 == -1)
		return 0;

	Global_44206[num3 /*5*/] = 0;
	Global_44206[num3 /*5*/].f_1 = pedParam0;
	Global_44206[num3 /*5*/].f_2 = iParam1;
	Global_44206[num3 /*5*/].f_3 = iParam1;
	Global_44206[num3 /*5*/].f_4 = 0;

	if (pedParam0 == PLAYER::PLAYER_PED_ID())
		Global_44444 = 1;

	Global_44204 = Global_44204 + 1;
	return 1;
}

int func_62() // Hash - 0x412B82DF ^0x412B82DF
{
	int i;

	i = 0;

	for (i = 0; i < 5; i = i + 1)
	{
		if (Global_44206[i /*5*/] == 13)
			return i;
	}

	return -1;
}

int func_63(Ped pedParam0) // Hash - 0x219FA119 ^0x5240A8AF
{
	int i;

	if (pedParam0 == 0)
		return -1;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (pedParam0 == Global_44232[i /*5*/].f_1)
			return Global_44232[i /*5*/];
	}

	return -1;
}

void func_64() // Hash - 0x6D98E4D5 ^0xF8371B8B
{
	switch (iLocal_58)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Bang bang!"));
			func_31(11, true);
			iLocal_58 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(21) || func_27(11))
			{
				iLocal_58 = 9;
				return;
			}
		
			if (func_28())
			{
				iLocal_58 = 9;
				return;
			}
		
			MISC::SET_EXPLOSIVE_AMMO_THIS_FRAME(PLAYER::PLAYER_ID());
			break;
	
		case 9:
			func_24(_("Bang bang!"));
			func_31(11, false);
			iLocal_58 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_65() // Hash - 0xB0AFB7D6 ^0x2AAA98
{
	switch (iLocal_61)
	{
		case 1:
			break;
	
		case 4:
			func_5(14);
			func_31(14, true);
			func_67();
			break;
	
		case 5:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_28() || func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					iLocal_61 = 9;
			else
				iLocal_61 = 9;
			break;
	
		case 9:
			func_24(_("Moon gravity."));
			func_31(14, false);
			MISC::SET_GRAVITY_LEVEL(0);
			iLocal_79 = 0;
			iLocal_61 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_66(int iParam0) // Hash - 0x71C4CD2D ^0x71C4CD2D
{
	if (IS_BIT_SET(Global_32413, iParam0))
		return true;

	return false;
}

void func_67() // Hash - 0x911CD778 ^0x7F0CC78E
{
	iLocal_79 = iLocal_79 + 1;

	if (iLocal_79 > 1)
	{
		iLocal_61 = 9;
		return;
	}

	switch (iLocal_79)
	{
		case 1:
			func_16(_("Moon gravity."));
			MISC::SET_GRAVITY_LEVEL(1);
			break;
	
		default:
			break;
	}

	iLocal_61 = 5;
	return;
}

void func_68() // Hash - 0xEAA42EA5 ^0xEAA42EA5
{
	func_87();
	func_81();
	func_80();
	func_79();
	func_78();
	func_77();
	func_76();
	func_74();
	func_73();
	func_72();
	func_69();
	return;
}

void func_69() // Hash - 0x86B88893 ^0xD2C00E78
{
	if (iLocal_57 == 4)
	{
		iLocal_57 = 1;
	
		if (func_27(23) || func_27(22) || func_27(10))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16(_("Parachute given."));
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), 1, true, true);
			func_5(10);
		}
	}

	return;
}

BOOL func_70() // Hash - 0xFB608F6D ^0xFB608F6D
{
	if (bLocal_93)
	{
		bLocal_93 = false;
		return false;
	}

	if (func_71(0))
		return true;

	return false;
}

BOOL func_71(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

void func_72() // Hash - 0xD7B44821 ^0x1F455956
{
	int playerWantedLevel;

	if (iLocal_56 == 4)
	{
		iLocal_56 = 1;
	
		if (func_27(23) || func_27(22) || func_27(9))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21(_("Can't activate that cheat right now."));
				return;
			}
		
			playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (playerWantedLevel > 0)
			{
				func_16(_("Wanted Level down."));
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), playerWantedLevel - 1, false);
				func_5(9);
			}
			else
			{
				func_21(_("No Wanted Level active."));
			}
		}
	}

	return;
}

void func_73() // Hash - 0xF4DC488E ^0xE400B8EF
{
	int playerWantedLevel;

	if (iLocal_55 == 4)
	{
		iLocal_55 = 1;
	
		if (func_27(23) || func_27(22) || func_27(8))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_MAX_WANTED_LEVEL() == 0)
			{
				func_21(_("Can't activate that cheat right now."));
				return;
			}
		
			playerWantedLevel = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
		
			if (playerWantedLevel < PLAYER::GET_MAX_WANTED_LEVEL())
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), playerWantedLevel + 1, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
				func_16(_("Wanted Level up."));
				func_5(8);
			}
			else
			{
				func_21(_("Current max Wanted Level reached."));
			}
		}
	}

	return;
}

void func_74() // Hash - 0x183CD44E ^0xC6CB930B
{
	if (iLocal_54 == 4)
	{
		iLocal_54 = 1;
	
		if (func_27(23) || func_27(22) || func_27(7) || func_15(9) || func_15(10) || !PLAYER::IS_SPECIAL_ABILITY_UNLOCKED(func_75()) || !PLAYER::IS_SPECIAL_ABILITY_ENABLED(PLAYER::PLAYER_ID(), 0))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
			func_16(_("Special ability recharged."));
			func_5(7);
		}
	}

	return;
}

Hash func_75() // Hash - 0xDED80B4D ^0x529AE3F0
{
	return ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
}

void func_76() // Hash - 0xEFCBE973 ^0xEC5D1C0F
{
	Vehicle vehiclePedIsUsing;

	if (iLocal_53 == 4)
	{
		iLocal_53 = 1;
	
		if (func_27(23) || func_27(22) || func_27(6) || func_15(9) || func_15(10))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			func_16(_("Max health and armor."));
			func_5(6);
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()), 0);
			PED::ADD_ARMOUR_TO_PED(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYER_MAX_ARMOUR(PLAYER::PLAYER_ID()) - PED::GET_PED_ARMOUR(PLAYER::PLAYER_PED_ID()));
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsUsing = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
			
				if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsUsing))
					if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsUsing, false))
						VEHICLE::SET_VEHICLE_FIXED(vehiclePedIsUsing);
			}
		}
	}

	return;
}

void func_77() // Hash - 0x95319A5F ^0x50DFDED0
{
	if (iLocal_52 == 4)
	{
		iLocal_52 = 1;
	
		if (func_27(23) || func_27(22) || func_27(5))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		func_5(5);
	
		switch (iLocal_71)
		{
			case 0:
				iLocal_71 = 1;
				[[fallthrough]];
		
			case 1:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("EXTRASUNNY");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Extra sunny weather."));
				iLocal_71 = 2;
				break;
		
			case 2:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEAR");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Clear weather."));
				iLocal_71 = 3;
				break;
		
			case 3:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLOUDS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Cloudy weather."));
				iLocal_71 = 4;
				break;
		
			case 4:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("SMOG");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Smoggy weather."));
				iLocal_71 = 6;
				break;
		
			case 6:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("OVERCAST");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Overcast weather."));
				iLocal_71 = 7;
				break;
		
			case 7:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("RAIN");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Rainy weather."));
				func_31(5, true);
				iLocal_71 = 8;
				break;
		
			case 8:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("THUNDER");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Thundery weather."));
				iLocal_71 = 9;
				break;
		
			case 9:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("CLEARING");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Clearing weather."));
				iLocal_71 = 11;
				break;
		
			case 11:
				MISC::SET_WEATHER_TYPE_NOW_PERSIST("XMAS");
				MISC::CLEAR_WEATHER_TYPE_PERSIST();
				func_16(_("Snowy weather."));
				iLocal_71 = 0;
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_78() // Hash - 0x9B136050 ^0x91425887
{
	if (iLocal_51 == 4)
	{
		iLocal_51 = 1;
	
		if (func_27(23) || func_27(22) || func_27(4))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		func_16(_("Give weapons."));
		func_5(4);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_KNIFE"), -1, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SMG"), 300, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_ASSAULTRIFLE"), 300, true);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_PUMPSHOTGUN"), 150, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_SNIPERRIFLE"), 30, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_GRENADE"), 5, false);
			WEAPON::GIVE_DELAYED_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_RPG"), 5, false);
		}
	}

	return;
}

void func_79() // Hash - 0x46D94DA5 ^0xA9FF5F91
{
	switch (iLocal_50)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Fast swim."));
			func_31(3, true);
			iLocal_50 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(3))
			{
				iLocal_50 = 9;
			}
			else
			{
				PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24(_("Fast swim."));
			func_31(3, false);
			iLocal_50 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_80() // Hash - 0x30ACA5DE ^0xB043F2E5
{
	switch (iLocal_49)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Fast run."));
			func_31(2, true);
			iLocal_49 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || func_27(23) || func_27(22) || func_27(2))
			{
				iLocal_49 = 9;
			}
			else
			{
				if (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1.49f);
				else
					PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			
				STATS::STAT_SET_CHEAT_IS_ACTIVE();
			}
			break;
	
		case 9:
			PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
			func_24(_("Fast run."));
			func_31(2, false);
			iLocal_49 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_81() // Hash - 0x31F6A94F ^0x51163FE6
{
	Vehicle vehiclePedIsIn;

	switch (iLocal_48)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Slidey cars."));
			func_31(1, true);
			iLocal_48 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(1))
				iLocal_48 = 9;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID())
					{
						if (veLocal_69 == 0)
						{
							veLocal_69 = vehiclePedIsIn;
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_69, false))
								if (func_82(1))
									VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_69, true);
								else
									veLocal_69 = 0;
						}
						else if (veLocal_69 != vehiclePedIsIn)
						{
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_69, false))
								VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_69, false);
						
							veLocal_69 = 0;
						}
					}
				}
			}
			break;
	
		case 9:
			func_24(_("Slidey cars."));
			iLocal_48 = 10;
			break;
	
		case 10:
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_69, false))
			{
				VEHICLE::SET_VEHICLE_REDUCE_GRIP(veLocal_69, false);
				veLocal_69 = 0;
			}
		
			func_31(1, false);
			iLocal_48 = 1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_82(int iParam0) // Hash - 0x6EE24E46 ^0x73B48A59
{
	Vehicle playersLastVehicle;
	Hash entityModel;
	int num;
	var script;
	const char* entityScript;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	
		if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
				num = func_8();
			
				if (iParam0 & 1 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(entityModel))
						return false;
			
				if (iParam0 & 2 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						return false;
			
				if (iParam0 & 4 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						return false;
			
				if (iParam0 & 8 != 0)
					if (!VEHICLE::IS_THIS_MODEL_A_BOAT(entityModel))
						return false;
			
				if (iParam0 & 16 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_pside_r") != -1)
						return false;
			
				if (iParam0 & 32 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "door_pside_r") == -1)
						return false;
			
				if (iParam0 & 64 != 0)
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_r") == -1)
							return false;
					else if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_dside_r") != -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_pside_r") != -1)
						return false;
			
				if (iParam0 & 128 != 0)
					if (ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_dside_r") == -1 || ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(playersLastVehicle, "seat_pside_r") == -1)
						return false;
			
				if (iParam0 & 256 != 0)
				{
					if (!func_10(num))
						return false;
				
					if (func_85(num, 0) != entityModel)
						return false;
				}
			
				if (iParam0 & 512 != 0)
				{
					if (!VEHICLE::IS_THIS_MODEL_A_CAR(entityModel) && !VEHICLE::IS_THIS_MODEL_A_BIKE(entityModel))
						return false;
				
					if (VEHICLE::IS_BIG_VEHICLE(playersLastVehicle))
						return false;
				
					entityScript = ENTITY::GET_ENTITY_SCRIPT(playersLastVehicle, &script);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(entityScript))
						if (MISC::GET_HASH_KEY(entityScript) == MISC::GET_HASH_KEY("taxiService"))
							return false;
				
					if (func_83(playersLastVehicle, num, false))
						return false;
				}
			
				return true;
			}
		}
	}

	return false;
}

BOOL func_83(Vehicle veParam0, int iParam1, BOOL bParam2) // Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_84(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_84(int iParam0, int iParam1, char* sParam2, var uParam3) // Hash - 0xF34BEAE8 ^0xBC089CB
{
	TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
				*uParam3 = 0;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 1;
				return true;
			}
			break;
	
		case 1:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
				*uParam3 = 5;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
				*uParam3 = 6;
				return true;
			}
			break;
	
		case 2:
			if (iParam1 == 0)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
				*uParam3 = 2;
				return true;
			}
			else if (iParam1 == 1)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
				*uParam3 = 3;
				return true;
			}
			else if (iParam1 == 2)
			{
				TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
				*uParam3 = 4;
				return true;
			}
			break;
	}

	return false;
}

Hash func_85(int iParam0, int iParam1) // Hash - 0x3C1119CD ^0x1010ECAE
{
	Hash num;

	if (func_10(iParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_86(iParam0, &num, iParam1);
		return num;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_86(int iParam0, var uParam1, int iParam2) // Hash - 0xF92B8944 ^0xD11BCD5C
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

void func_87() // Hash - 0xCFA276E4 ^0x679871EF
{
	switch (iLocal_47)
	{
		case 1:
			break;
	
		case 4:
			func_16(_("Super jump."));
			func_31(0, true);
			iLocal_47 = 5;
			break;
	
		case 5:
			if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
			{
				iLocal_47 = 9;
				return;
			}
		
			MISC::SET_SUPER_JUMP_THIS_FRAME(PLAYER::PLAYER_ID());
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 217, true);
			break;
	
		case 9:
			func_24(_("Super jump."));
			func_31(0, false);
			iLocal_47 = 1;
			break;
	
		default:
			break;
	}

	return;
}

void func_88() // Hash - 0x83B715C3 ^0x48ACF6CB
{
	if (func_111() || iLocal_94 != 0 || func_15(14))
		PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_ENTER_CHEAT_CODE, true);

	func_110();

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		return;

	if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		return;

	if (func_34() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return;

	if (func_109())
	{
		if (!bLocal_92)
		{
			func_108();
			bLocal_92 = true;
		}
	
		return;
	}

	bLocal_92 = false;
	bLocal_93 = false;

	if (func_107(988027572, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BUZZOFF")) || func_106(20, joaat("BUZZARD")))
		func_103(joaat("BUZZARD"), _("Spawn Buzzard."));

	if (func_107(-1134279030, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BANDIT")) || func_106(20, joaat("BMX")))
		func_103(joaat("BMX"), _("Spawn BMX."));

	if (func_107(971352167, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOLEIN1")) || func_106(20, joaat("CADDY")))
		func_103(joaat("CADDY"), _("Spawn Caddy."));

	if (func_107(-269863225, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("COMET")) || func_106(20, joaat("COMET2")))
		func_103(joaat("COMET2"), _("Spawn Comet."));

	if (func_107(458579068, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FLYSPRAY")) || func_106(20, joaat("DUSTER")))
		func_103(joaat("DUSTER"), _("Spawn Duster."));

	if (func_107(-666513193, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("ROCKET")) || func_106(20, joaat("PCJ")))
		func_103(joaat("PCJ"), _("Spawn PCJ."));

	if (func_107(-1245984749, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("RAPIDGT")) || func_106(20, joaat("RAPIDGT")))
		func_103(joaat("RAPIDGT"), _("Spawn Rapid GT."));

	if (func_107(2076774618, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("OFFROAD")) || func_106(20, joaat("SANCHEZ")))
		func_103(joaat("SANCHEZ"), _("Spawn Sanchez."));

	if (func_107(855685457, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("VINEWOOD")) || func_106(20, joaat("STRETCH")))
		func_103(joaat("STRETCH"), _("Spawn Stretch Limo."));

	if (func_107(-591395876, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BARNSTORM")) || func_106(20, joaat("STUNT")))
		func_103(joaat("STUNT"), _("Spawn Stunt Plane."));

	if (func_107(-1399217582, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TRASHED")) || func_106(20, joaat("TRASH")))
		func_103(joaat("TRASH"), _("Spawn Trashmaster."));

	if (func_102())
	{
		if (func_107(-375917581, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("EXTINCT")) || func_106(20, joaat("DODO")))
			func_103(joaat("DODO"), _("Spawn Dodo Sea Plane."));
	
		if (func_107(-2124307881, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("DEATHCAR")) || func_106(20, joaat("DUKES2")))
			func_103(joaat("DUKES2"), _("Spawn Duke O'Death."));
	
		if (func_107(1028964594, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("BUBBLES")) || func_106(20, joaat("SUBMERSIBLE2")))
			func_103(joaat("SUBMERSIBLE2"), _("Spawn Kraken submersible."));
	}

	if (func_107(-393416581, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOPTOIT")) || func_106(0, 0))
		func_101();

	if (func_107(-296509791, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SNOWDAY")) || func_106(1, 0))
		func_100();

	if (func_107(1120820643, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("CATCHME")) || func_106(2, 0))
		func_99();

	if (func_107(-421458016, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("GOTGILLS")) || func_106(3, 0))
		func_98();

	if (func_107(372390926, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TOOLUP")) || func_106(4, 0))
		iLocal_51 = 4;

	if (func_107(606506837, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("MAKEITRAIN")) || func_106(5, 0))
		iLocal_52 = 4;

	if (func_107(453014206, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("TURTLE")) || func_106(6, 0))
		iLocal_53 = 4;

	if (func_107(1773187142, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("POWERUP")) || func_106(7, 0))
		iLocal_54 = 4;

	if (func_107(1173296014, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FUGITIVE")) || func_106(8, 0))
		iLocal_55 = 4;

	if (func_107(-381269753, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("LAWYERUP")) || func_106(9, 0))
		iLocal_56 = 4;

	if (func_107(-2023988698, 11) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SKYDIVE")) || func_106(10, 0))
		iLocal_57 = 4;

	if (func_107(-835863906, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HIGHEX")) || func_106(11, 0))
		func_97();

	if (func_107(1958387485, 12) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("INCENDIARY")) || func_106(12, 0))
		func_96();

	if (func_107(-903985180, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("HOTHANDS")) || func_106(13, 0))
		func_95();

	if (func_107(2087642905, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("FLOATER")) || func_106(14, 0))
		func_94();

	if (func_107(1257820019, 10) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("PAINKILLER")) || func_106(15, 0))
		func_93();

	if (func_107(1540206179, 7) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SLOWMO")) || func_106(16, 0))
		func_92();

	if (func_107(115565392, 16) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("SKYFALL")) || func_106(17, 0))
		func_91();

	if (func_107(-1276513277, 8) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("LIQUOR")) || func_106(18, 0))
		func_90();

	if (func_107(2040433593, 9) || MISC::HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(joaat("DEADEYE")) || func_106(19, 0))
		func_89();

	return;
}

void func_89() // Hash - 0x51167D4C ^0x7C87C80F
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (iLocal_63 != 1)
		func_21(_("Can't activate that cheat right now."));
	else
		iLocal_66 = 4;

	return;
}

void func_90() // Hash - 0xA15240F9 ^0xE7C46A3A
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		iLocal_65 = 1;
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		iLocal_65 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(18))
	{
		func_21(_("Can't activate that cheat right now."));
		iLocal_65 = 1;
		return;
	}

	if (iLocal_65 == 1)
		iLocal_65 = 4;
	else if (iLocal_65 == 5)
		iLocal_65 = 9;

	return;
}

void func_91() // Hash - 0x304EA65C ^0x112E6204
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21(_("Can't activate that cheat here."));
		return;
	}

	if (iLocal_64 != 1)
	{
		func_21(_("Cheat already active."));
		return;
	}

	if (func_27(23) || func_27(21) || func_27(17) || func_66(0) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || !CAM::IS_GAMEPLAY_CAM_RENDERING())
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), false) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("RESPAWN_CONTROLLER")) > 0)
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	iLocal_64 = 2;
	return;
}

void func_92() // Hash - 0x51167D4C ^0x7C87C80F
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (func_27(23) || func_27(21) || func_27(16))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (iLocal_66 != 1)
		func_21(_("Can't activate that cheat right now."));
	else
		iLocal_63 = 4;

	return;
}

void func_93() // Hash - 0x20C9DA12 ^0x4D621459
{
	var unk;

	unk = { func_19(PLAYER::PLAYER_ID()) };

	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (func_27(23) || func_27(21) || func_27(15) || unk.f_2 <= -170f)
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (iLocal_62 == 1)
		iLocal_62 = 4;
	else if (iLocal_62 == 5)
		iLocal_62 = 9;

	return;
}

void func_94() // Hash - 0xC9A58B02 ^0x68FA13D3
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (func_27(23) || func_27(21) || func_27(14) || func_66(17) || ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	iLocal_61 = 4;
	return;
}

void func_95() // Hash - 0x6AC820C8 ^0xD01363B2
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		iLocal_60 = 1;
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		iLocal_60 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(13))
	{
		func_21(_("Can't activate that cheat right now."));
		iLocal_60 = 1;
		return;
	}

	if (iLocal_60 == 1)
		iLocal_60 = 4;
	else if (iLocal_60 == 5)
		iLocal_60 = 9;

	return;
}

void func_96() // Hash - 0xE0263E8E ^0xDBA2D302
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		iLocal_59 = 1;
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		iLocal_59 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(12))
	{
		func_21(_("Can't activate that cheat right now."));
		iLocal_59 = 1;
		return;
	}

	if (iLocal_59 == 1)
		iLocal_59 = 4;
	else if (iLocal_59 == 5)
		iLocal_59 = 9;

	return;
}

void func_97() // Hash - 0xD68DE57B ^0xC16845DC
{
	if (func_28())
	{
		func_21(_("Not available on a mission or pastime."));
		iLocal_58 = 1;
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		iLocal_58 = 1;
		return;
	}

	if (func_27(23) || func_27(21) || func_27(11))
	{
		func_21(_("Can't activate that cheat right now."));
		iLocal_58 = 1;
		return;
	}

	if (iLocal_58 == 1)
		iLocal_58 = 4;
	else if (iLocal_58 == 5)
		iLocal_58 = 9;

	return;
}

void func_98() // Hash - 0x27A40C71 ^0x918C4C18
{
	if (func_27(23) || func_27(22) || func_27(3) || func_15(9) || func_15(10))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (iLocal_50 == 1)
		iLocal_50 = 4;
	else if (iLocal_50 == 5)
		iLocal_50 = 9;

	return;
}

void func_99() // Hash - 0x205D9171 ^0x9674975C
{
	if (func_27(23) || func_27(22) || func_27(2) || func_15(9) || func_15(10))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (iLocal_49 == 1)
		iLocal_49 = 4;
	else if (iLocal_49 == 5)
		iLocal_49 = 9;

	return;
}

void func_100() // Hash - 0x5BC5EF35 ^0xC9FA2135
{
	if (func_27(23) || func_27(22) || func_27(1))
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (iLocal_48 == 1)
		iLocal_48 = 4;
	else if (iLocal_48 == 5)
		iLocal_48 = 9;

	return;
}

void func_101() // Hash - 0x6E016A80 ^0x5BD726D4
{
	if (func_27(23) || func_27(22) || func_27(0) || INTERIOR::IS_INTERIOR_SCENE())
	{
		func_21(_("Can't activate that cheat right now."));
		return;
	}

	if (func_70())
	{
		func_21(_("Can't activate cheats while using the cellphone."));
		return;
	}

	if (iLocal_47 == 1)
		iLocal_47 = 4;
	else if (iLocal_47 == 5)
		iLocal_47 = 9;

	return;
}

BOOL func_102() // Hash - 0x44DD83CC ^0x7B62A376
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

void func_103(int iParam0, char* sParam1) // Hash - 0x90587053 ^0x699DED6F
{
	if (iLocal_46 == 1)
	{
		if (func_15(9) || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BARRY1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("TENNIS")) > 0 || func_27(23) || func_27(22) || func_27(20))
		{
			func_21(_("Can't activate that cheat right now."));
			return;
		}
	
		if (func_70())
		{
			func_21(_("Can't activate cheats while using the cellphone."));
			return;
		}
	
		if (!func_104(iParam0))
		{
			func_21(_("Vehicle is not unlocked yet."));
			return;
		}
	
		hLocal_67 = iParam0;
		sLocal_70 = sParam1;
		iLocal_46 = 2;
	}

	return;
}

BOOL func_104(int iParam0) // Hash - 0xC78E8C7 ^0xC78E8C7
{
	switch (iParam0)
	{
		case joaat("DODO"):
			if (func_105(66, 0) == false)
				return false;
			break;
	
		case joaat("DUKES2"):
			if (func_105(64, 0) == false)
				return false;
			break;
	
		case joaat("SUBMERSIBLE2"):
			if (func_105(63, 0) == false)
				return false;
			break;
	}

	return true;
}

BOOL func_105(int iParam0, int iParam1) // Hash - 0x9EA0654 ^0x9EA0654
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

BOOL func_106(int iParam0, int iParam1) // Hash - 0xBAAAA77A ^0x16DDA499
{
	if (IS_BIT_SET(Global_32415, iParam0))
	{
		if (iParam1 != 0)
		{
			if (iParam1 == Global_32416)
			{
				MISC::CLEAR_BIT(&Global_32415, iParam0);
				bLocal_93 = true;
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			MISC::CLEAR_BIT(&Global_32415, iParam0);
			bLocal_93 = true;
			return true;
		}
	}

	return false;
}

BOOL func_107(Hash hParam0, int iParam1) // Hash - 0x87CFC258 ^0xE45D0F96
{
	if (!func_15(14))
		return MISC::HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(hParam0, iParam1);

	return false;
}

void func_108() // Hash - 0x2A596865 ^0xEB523C98
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (uLocal_80[i] != -1)
		{
			HUD::THEFEED_REMOVE_ITEM(uLocal_80[i]);
			uLocal_80[i] = -1;
		}
	}

	return;
}

BOOL func_109() // Hash - 0x25806CBF ^0x25806CBF
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

void func_110() // Hash - 0x880D0B8B ^0xFA6B476C
{
	if (func_15(14) || !CAM::IS_SCREEN_FADED_IN() && iLocal_94 != 0)
		iLocal_94 = MISC::GET_GAME_TIMER();

	if (iLocal_94 != 0)
		if (!func_15(14))
			if (MISC::GET_GAME_TIMER() - iLocal_94 > 1000)
				iLocal_94 = 0;

	return;
}

BOOL func_111() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

void func_112() // Hash - 0xE91C327D ^0xE91C327D
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		uLocal_80[i] = -1;
	}

	bLocal_92 = false;
	iLocal_91 = 0;
	return;
}

void func_113() // Hash - 0x49880A15 ^0x75F8A7C1
{
	MISC::SET_RIOT_MODE_ENABLED(false);

	if (iLocal_64 == 5)
		func_37();

	if (iLocal_65 == 5)
		func_46(true);

	if (iLocal_63 == 5 || iLocal_66 == 5)
		MISC::SET_TIME_SCALE(1f);

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_62 == 5)
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
			ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
		}
	
		PLAYER::SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
		PLAYER::SET_SWIM_MULTIPLIER_FOR_PLAYER(PLAYER::PLAYER_ID(), 1f);
	}

	MISC::SET_GRAVITY_LEVEL(0);
	Global_32413 = 0;
	Global_32412 = 0;
	Global_32414 = 0;
	Global_32415 = 0;
	Global_32417 = 0;
	Global_32416 = 0;
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

