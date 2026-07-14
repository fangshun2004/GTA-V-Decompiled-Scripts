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
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	char* sLocal_37 = NULL;
	struct<705> Local_38 = { 0, 0, -1, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1065353216, 0 } ;
	struct<146> Local_743 = { -1, -1, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<7> Local_889 = { -1, -1, 1, 0, 1, 0, 0 } ;
	var uLocal_896 = 0;
	struct<146> ScriptParam_0 = { -1, -1, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	sLocal_37 = "NULL";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_743 = { ScriptParam_0 };
	while (true)
	{
		SYSTEM::WAIT(0);
		func_1();
	}
}

void func_1()
{
	switch (Local_38.f_0)
	{
		case 0:
			func_132();
		
		case 1:
			func_14();
			break;
		
		case 2:
			func_2();
			break;
	}
}

void func_2()
{
	struct<2> Var0;
	
	if (!func_13(6))
	{
		func_12(&(Local_38.f_4));
		func_11(&(Local_38.f_704), "GENERIC_INSTRUCTIONAL_BUTTONS");
		func_8(1, -1);
		func_6(0, 0);
	}
	MISC::SET_BIT(&(Local_889.f_6), 0);
	if (func_13(6))
	{
		MISC::SET_BIT(&(Local_889.f_6), 1);
		MISC::COPY_SCRIPT_STRUCT(&Global_1925233, &(Local_38.f_4), 700);
		Global_1925939 = Local_38.f_2;
	}
	else
	{
		Global_1925233.f_700 = 0;
		Global_1925939 = -1;
	}
	func_5(&Global_1925943, 1, 0);
	func_3(&Local_889);
	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Global_1925936, &Var0, 3);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_3(var* uParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&Global_1925226, uParam0, 7);
	func_4(0);
}

void func_4(int iParam0)
{
	MISC::SET_BIT(&(Global_1925226.f_6), iParam0);
}

void func_5(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

void func_6(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = 0;
	while (iVar0 < 256)
	{
		StringCopy(&(Global_24569.f_79[iVar0 /*6*/]), "", 24);
		iVar1 = 0;
		while (iVar1 < 4)
		{
			Global_24569.f_2387[iVar0 /*5*/][iVar1] = 0;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 50)
	{
		StringCopy(&(Global_2697637[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_24569.f_4469[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_24569.f_4726[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 256)
	{
		Global_24569.f_4984[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		Global_24569.f_5692[iVar0] = 0;
		Global_24569.f_5830[iVar0] = 0;
		Global_24569.f_5959[iVar0] = 0;
		Global_24569.f_6482[iVar0] = 0f;
		Global_24569.f_6088[iVar0] = 0;
		Global_24569.f_6348[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		Global_24569.f_5659[iVar0] = 0;
		Global_24569.f_5671[iVar0] = 0f;
		Global_24569.f_5665[iVar0] = -1f;
		Global_24569.f_5678[iVar0] = 0;
		Global_24569.f_5686[iVar0] = 1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 14)
	{
		StringCopy(&(Global_24569.f_5553[iVar0 /*4*/]), "", 16);
		Global_24569.f_5610[iVar0] = -1;
		Global_24569.f_5625[iVar0] = 402;
		Global_24569.f_5640[iVar0] = 32;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 70)
	{
		StringCopy(&(Global_24569.f_6623[iVar0 /*16*/]), "", 64);
		StringCopy(&(Global_24569.f_7744[iVar0 /*16*/]), "", 64);
		iVar0++;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 256)
		{
			Global_24569.f_1616[iVar0] = 0;
			iVar0++;
		}
	}
	StringCopy(&(Global_4521274.f_16), "", 16);
	Global_4521274.f_20 = -1;
	Global_24569 = 0;
	Global_24569.f_5821 = 0;
	Global_24569.f_5822 = 0;
	Global_24569.f_5823 = 0;
	Global_24569.f_5825 = 0;
	Global_24569.f_5826 = 0;
	Global_24569.f_5827 = 0;
	Global_24569.f_5824 = 0;
	Global_24569.f_6477 = 0;
	Global_24569.f_6617 = 0;
	Global_24569.f_6342 = 0;
	Global_24569.f_6341 = 0;
	Global_24569.f_6343 = 0;
	StringCopy(&(Global_24569.f_5241), "", 24);
	Global_24569.f_5319 = 0;
	Global_24569.f_5320 = 0;
	Global_24569.f_5321 = 0;
	Global_24569.f_5322 = 0;
	Global_24569.f_5323 = 0;
	Global_24569.f_5324 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24569.f_5253[iVar0] = 0;
		iVar0++;
	}
	Global_24569.f_5325 = 0;
	StringCopy(&(Global_4521274.f_21), "", 16);
	Global_4521274.f_61 = 0;
	Global_4521274.f_62 = 0;
	Global_4521274.f_63 = 0;
	Global_4521274.f_64 = 0;
	Global_4521274.f_65 = 0;
	Global_4521274.f_66 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_4521274.f_25[iVar0] = 0;
		iVar0++;
	}
	Global_4521274.f_67 = 0;
	StringCopy(&(Global_24569.f_1), "", 16);
	Global_24569.f_5677 = 0f;
	Global_24569.f_74 = 0;
	Global_24569.f_75 = 0;
	Global_24569.f_76 = 0;
	Global_24569.f_77 = 0;
	Global_24569.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24569.f_5[iVar0] = 0;
		iVar0++;
	}
	Global_24569.f_6347 = 0;
	Global_24569.f_6346 = 0;
	Global_24569.f_6344 = 0;
	Global_24569.f_6345 = 0;
	Global_24569.f_5326 = 0;
	Global_24569.f_5327 = 0;
	Global_24569.f_5828 = 10;
	Global_24569.f_5829 = 0;
	Global_24569.f_6479 = 0f;
	Global_24569.f_6480 = 0f;
	Global_24569.f_6331 = 0;
	Global_24569.f_6332 = 0;
	Global_24569.f_6333 = 0f;
	Global_24569.f_6334 = 0;
	Global_24569.f_6336 = 0;
	Global_24569.f_6335 = 0;
	Global_24569.f_6337 = 0;
	Global_24569.f_6338 = 0;
	Global_24569.f_6339 = 0;
	Global_24569.f_6340 = 0;
	Global_24569.f_9240 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		Global_24569.f_6611[iVar0] = -1;
		Global_24569.f_6614[iVar0] = -1;
		iVar0++;
	}
	Global_24569.f_5684 = 0f;
	Global_24569.f_5655 = 0;
	Global_24569.f_5685 = 0;
	iVar0 = 0;
	while (iVar0 < Global_24569.f_6618)
	{
		Global_24569.f_6618[iVar0] = 0;
		iVar0++;
	}
	Global_24569.f_9219 = 0;
	Global_24569.f_9214 = 0;
	Global_24569.f_9224 = 0;
	Global_24569.f_9229 = 0;
	Global_24569.f_9234 = 0;
	Global_24569.f_9236 = 0;
	Global_24569.f_9242 = 0;
	Global_24569.f_9245 = func_7(0);
	Global_24566 = 0.05f;
	Global_24567 = 0.05f;
	Global_24568 = 0.225f;
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (!bParam0 && fVar2 < 1.777778f)
	{
		Global_24568 = (0.225f * (1.777778f / fVar2));
	}
}

float func_7(bool bParam0)
{
	float fVar0;
	
	fVar0 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (!bParam0 && fVar0 < 1.777778f)
	{
		fVar0 = 1.777778f;
	}
	return fVar0;
}

void func_8(bool bParam0, int iParam1)
{
	int iVar0;
	
	if (!func_10(&iVar0, 0, iParam1))
	{
		return;
	}
	if (Global_24569.f_9244)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(15);
		Global_24569.f_9244 = 0;
	}
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);
	if (Global_24569.f_6231[iVar0])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_24569.f_6231[iVar0] = 0;
	}
	if (Global_24569.f_6217[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_24569.f_6217[iVar0] = 0;
	}
	if (Global_24569.f_6224[iVar0])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_24569.f_6224[iVar0] = 0;
	}
	if (bParam0)
	{
		func_9(&(Global_24569.f_6263[iVar0 /*10*/]));
		Global_24569.f_6324[iVar0] = 0;
	}
	else
	{
		Global_24569.f_6324[iVar0] = 0;
	}
	GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("Shared");
}

void func_9(int* iParam0)
{
	if (iParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
		{
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
		}
		*iParam0 = 0;
		iParam0->f_9 = 0;
	}
}

int func_10(var uParam0, bool bParam1, int iParam2)
{
	char cVar0[64];
	int iVar16;
	int iVar17;
	int iVar18;
	
	if (iParam2 == -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();
		}
	}
	StringCopy(&cVar0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	StringIntConCat(&cVar0, iParam2, 64);
	iVar16 = MISC::GET_HASH_KEY(&cVar0);
	iVar18 = -1;
	iVar17 = 0;
	while (iVar17 < 6)
	{
		if (Global_24569.f_6324[iVar17] == iVar16)
		{
			*uParam0 = iVar17;
			return 1;
		}
		else if (Global_24569.f_6324[iVar17] == 0)
		{
			iVar18 = iVar17;
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (iVar18 != -1)
		{
			Global_24569.f_6324[iVar18] = iVar16;
			*uParam0 = iVar18;
			return 1;
		}
	}
	return 0;
}

void func_11(var uParam0, char* sParam1)
{
	unk_0x2FDFB1B04C76E9C3(uParam0, sParam1);
	*uParam0 = 0;
}

void func_12(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		StringCopy(&(uParam0->f_1[iVar0 /*57*/]), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_16), "", 64);
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_32), "", 16);
		uParam0->f_1[iVar0 /*57*/].f_36 = 0;
		uParam0->f_1[iVar0 /*57*/].f_37 = 0;
		StringCopy(&(uParam0->f_1[iVar0 /*57*/].f_38), "", 64);
		uParam0->f_1[iVar0 /*57*/].f_54 = 2;
		uParam0->f_1[iVar0 /*57*/].f_55 = 402;
		uParam0->f_1[iVar0 /*57*/].f_56 = 402;
		iVar0++;
	}
	uParam0->f_686 = 0;
	uParam0->f_687 = 0;
	uParam0->f_688 = 0;
	uParam0->f_689 = 0;
	uParam0->f_691 = 0;
	uParam0->f_690 = 0;
	uParam0->f_692 = 0;
	uParam0->f_693 = 0;
	uParam0->f_695 = 0f;
	uParam0->f_696 = 0f;
	uParam0->f_697 = 0f;
	uParam0->f_698 = 0f;
	uParam0->f_699 = 1f;
	Global_1989058 = 0;
}

bool func_13(int iParam0)
{
	return BitTest(Local_38.f_1, iParam0);
}

void func_14()
{
	func_19();
	func_16();
	func_15();
	if (Local_38.f_0 == 2)
	{
		func_2();
	}
}

void func_15()
{
	Global_1925942 = 0;
}

void func_16()
{
	if (func_13(0))
	{
		func_18(2);
	}
	if (func_13(5))
	{
		func_18(2);
	}
	if (BitTest(Global_1925936.f_2, 0))
	{
		func_18(2);
	}
	if (BitTest(Global_1925936.f_2, 2))
	{
		func_18(2);
		func_17(0);
		func_17(6);
	}
}

void func_17(int iParam0)
{
	MISC::SET_BIT(&(Local_38.f_1), iParam0);
}

void func_18(int iParam0)
{
	Local_38.f_0 = iParam0;
}

void func_19()
{
	func_131();
	if (!BitTest(Global_1925936.f_2, 0))
	{
		if (!func_129(0, -1, 0))
		{
			return;
		}
	}
	else
	{
		return;
	}
	func_128(1);
	if (!func_13(6))
	{
		MISC::SET_BIT(&(Global_1925936.f_2), 1);
		func_6(0, 0);
	}
	func_127();
	func_122();
	func_112();
	func_38();
	func_23();
	func_20();
}

void func_20()
{
	if (!func_22())
	{
		return;
	}
	func_17(0);
	func_17(6);
	func_21();
}

void func_21()
{
	Global_1925941 = 0;
}

bool func_22()
{
	return Global_1925941;
}

void func_23()
{
	char* sVar0;
	int iVar4;
	struct<9> Var5;
	
	if (((PAD::HAVE_CONTROLS_CHANGED(2) && Local_38.f_4.f_693 != 0) || PAD::IS_CONTROL_JUST_PRESSED(0, 37)) || PAD::IS_CONTROL_JUST_RELEASED(0, 37))
	{
		func_12(&(Local_38.f_4));
		return;
	}
	if (Local_38.f_2 != -1)
	{
		iVar4 = Local_743.f_2.f_117[Local_38.f_2];
		if (iVar4 > -1 && iVar4 < 40)
		{
			MemCopy(&sVar0, {func_36(iVar4)}, 4);
		}
	}
	if (Local_38.f_4.f_693 == 0)
	{
		if (Local_38.f_2 != -1)
		{
			if (!BitTest(Local_743.f_2.f_130[Local_38.f_2], 8))
			{
				func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 201, true), "FMMC_SEL_ACCE", &(Local_38.f_4), 0);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&sVar0) && (!PAD::IS_CONTROL_PRESSED(0, 37) && !PAD::IS_CONTROL_JUST_PRESSED(0, 37)))
		{
			func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 51, true), &sVar0, &(Local_38.f_4), 0);
		}
		if (BitTest(Local_743.f_2, 1) && PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 238, true), "FMMC_SEL_CANC", &(Local_38.f_4), 0);
		}
		else
		{
			func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 202, true), "FMMC_SEL_CANC", &(Local_38.f_4), 0);
		}
		func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 188, true), "FMMC_SEL_UP", &(Local_38.f_4), 0);
		func_35(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(0, 187, true), "FMMC_SEL_DOWN", &(Local_38.f_4), 0);
	}
	Var5 = { func_34() };
	if (MISC::IS_PC_VERSION() && HUD::IS_MP_TEXT_CHAT_TYPING())
	{
		return;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Local_38.f_704))
		{
			func_12(&(Local_38.f_4));
			func_11(&(Local_38.f_704), "GENERIC_INSTRUCTIONAL_BUTTONS");
			MISC::CLEAR_BIT(&(Local_38.f_1), 4);
		}
		return;
	}
	if ((!func_33(&(Local_38.f_704), "GENERIC_INSTRUCTIONAL_BUTTONS") || !BitTest(Local_38.f_1, 4)) || GRAPHICS::IS_SCALEFORM_MOVIE_DELETING(Local_38.f_704))
	{
		Local_38.f_704 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("GENERIC_INSTRUCTIONAL_BUTTONS");
		MISC::SET_BIT(&(Local_38.f_1), 4);
		func_32(1);
	}
	else
	{
		func_32(1);
		func_24(&(Local_38.f_704), &Var5, &(Local_38.f_4), func_31(&(Local_38.f_4)));
	}
}

void func_24(var uParam0, var uParam1, var uParam2, int iParam3)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam3 == 1 || PAD::HAVE_CONTROLS_CHANGED(2))
	{
		*uParam2 = 0;
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		func_30(uParam2);
	}
	if (Global_1576389 < 2)
	{
		func_29(1);
	}
	if (*uParam2 == 0)
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("GENERIC_INSTRUCTIONAL_BUTTONS");
		}
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
		{
			GRAPHICS::CALL_SCALEFORM_MOVIE_METHOD(*uParam0, "CLEAR_ALL");
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			bVar0 = false;
			bVar0 = false;
			while (bVar0 < uParam2->f_693)
			{
				if (BitTest(uParam2->f_689, bVar0))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					if (!BitTest(uParam2->f_690, bVar0))
					{
						iVar1 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar2 = uParam2->f_1[bVar0 /*57*/].f_55;
						iVar3 = uParam2->f_1[bVar0 /*57*/].f_56;
						func_28(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar2, true));
						if (iVar3 < 402)
						{
							func_28(PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(iVar1, iVar3, true));
						}
					}
					else
					{
						iVar4 = uParam2->f_1[bVar0 /*57*/].f_54;
						iVar5 = uParam2->f_1[bVar0 /*57*/].f_55;
						func_28(PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(iVar4, iVar5, true));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_27(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						if (BitTest(uParam2->f_691, bVar0))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam2->f_1[bVar0 /*57*/].f_55);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar0);
					func_28(&(uParam2->f_1[bVar0 /*57*/]));
					if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam2->f_1[bVar0 /*57*/].f_16)))
					{
						func_28(&(uParam2->f_1[bVar0 /*57*/].f_16));
					}
					if (BitTest(uParam2->f_686, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						if (uParam2->f_694 == bVar0)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(uParam2->f_1[bVar0 /*57*/].f_36, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_36);
							if (BitTest(uParam2->f_687, bVar0))
							{
								HUD::ADD_TEXT_COMPONENT_INTEGER(uParam2->f_1[bVar0 /*57*/].f_37);
							}
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else if (BitTest(uParam2->f_688, bVar0))
					{
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(uParam2->f_1[bVar0 /*57*/].f_32));
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(uParam2->f_1[bVar0 /*57*/].f_38));
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					else
					{
						func_27(&(uParam2->f_1[bVar0 /*57*/].f_32));
					}
					if (MISC::IS_PC_VERSION())
					{
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar0++;
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(uParam2->f_699);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam2 = 1;
		}
	}
	uParam2->f_695 = 0.05f;
	uParam2->f_696 = 0.045f;
	uParam2->f_697 = 0f;
	uParam2->f_698 = 0f;
	if (*uParam2 == 1)
	{
		func_26(*uParam0, uParam1);
	}
	func_25();
}

void func_25()
{
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
}

void func_26(int iParam0, var uParam1)
{
	GRAPHICS::DRAW_SCALEFORM_MOVIE(iParam0, *uParam1, uParam1->f_1, uParam1->f_2, uParam1->f_3, uParam1->f_4, uParam1->f_5, uParam1->f_6, uParam1->f_7, 0);
}

void func_27(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_28(char* sParam0)
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
}

void func_29(int iParam0)
{
	Global_1576389 = iParam0;
}

void func_30(var uParam0)
{
	Global_1989058 = 0;
	uParam0->f_692 = 0;
}

int func_31(var uParam0)
{
	return (Global_1989058 || uParam0->f_692);
}

void func_32(int iParam0)
{
	Global_1679116.f_1163 = iParam0;
}

int func_33(var uParam0, char* sParam1)
{
	if (!unk_0x9743BCCF7CD6E1F6(*uParam0, sParam1))
	{
		*uParam0 = 0;
		return 0;
	}
	return 1;
}

struct<9> func_34()
{
	struct<9> Var0;
	
	Var0.f_0 = 0.5f;
	Var0.f_1 = 0.5f;
	Var0.f_2 = 1f;
	Var0.f_3 = 1f;
	Var0.f_4 = 255;
	Var0.f_5 = 255;
	Var0.f_6 = 255;
	Var0.f_7 = 200;
	Var0.f_8 = 0f;
	return Var0;
}

void func_35(char* sParam0, char* sParam1, var uParam2, char* sParam3)
{
	int iVar0;
	
	if (uParam2->f_693 >= 12)
	{
		return;
	}
	iVar0 = uParam2->f_693;
	StringCopy(&(uParam2->f_1[iVar0 /*57*/]), sParam0, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_16), sParam3, 64);
	StringCopy(&(uParam2->f_1[iVar0 /*57*/].f_32), sParam1, 16);
	uParam2->f_693++;
}

struct<16> func_36(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (func_37(iParam0))
	{
		if (iParam0 < 30)
		{
			return Global_4718592.f_113[iParam0 /*16*/];
		}
		else
		{
			MemCopy(&Var0, {Global_4718592.f_594[(iParam0 - 30) /*4*/]}, 16);
			return Var0;
		}
	}
	StringCopy(&Var16, "", 64);
	return Var16;
}

int func_37(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_38()
{
	var uVar0;
	var uVar1;
	var uVar2;
	var uVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	
	if (BitTest(Global_1575014, 9))
	{
		return;
	}
	HUD::GET_HUD_COLOUR(1, &uVar0, &uVar1, &uVar2, &uVar3);
	func_111(uVar0, uVar1, uVar2, uVar3, 1);
	func_110(&(Local_743.f_2.f_2));
	iVar4 = Local_743.f_2.f_1;
	HUD::GET_HUD_COLOUR(iVar4, &uVar0, &uVar1, &uVar2, &uVar3);
	func_109(uVar0, uVar1, uVar2, uVar3, 1);
	HUD::GET_HUD_COLOUR(9, &uVar0, &uVar1, &uVar2, &uVar3);
	func_108(uVar0, uVar1, uVar2, uVar3, 1);
	func_107(1, 4, 0, 0, 0);
	func_106(1, 2, 1, 1, 1);
	func_105(0, 0, 0, 0, 0);
	Global_24568 = 0.23f;
	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (Local_38.f_3 - 1))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Local_743.f_2.f_6[iVar7 /*4*/])))
		{
		}
		else
		{
			bVar5 = func_103(iVar7);
			bVar6 = func_101(iVar7);
			if (!BitTest(Local_743.f_2.f_130[iVar7], 2) || bVar5)
			{
				func_97(iVar7, &(Local_743.f_2.f_6[iVar7 /*4*/]), 0, !bVar6, 0, 0, 0);
				if (BitTest(Local_743.f_2.f_130[iVar7], 4) || (bVar5 && BitTest(Local_743.f_2.f_130[iVar7], 7)))
				{
					if ((BitTest(Local_743.f_2.f_130[iVar7], 5) && !func_95(iVar7)) || (!BitTest(Local_743.f_2.f_130[iVar7], 5) && func_95(iVar7)))
					{
						func_94(iVar7, 5, 0);
					}
					else
					{
						func_94(iVar7, 8, 0);
					}
				}
				else
				{
					func_94(iVar7, 0, 0);
				}
				if (iVar7 == Global_24569.f_6342 && !func_93(&(Local_743.f_2), iVar7))
				{
					func_92(&(Local_743.f_2.f_55[iVar7 /*4*/]), 0, 0);
				}
			}
		}
		iVar7++;
	}
	if (!func_91())
	{
		func_90();
		func_49(1, -1, 1, 0, 0, -1082130432, 0, 0, -1);
	}
	if (!BitTest(Local_743.f_145, 0))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && func_46(0, 0))
		{
			PAD::DISABLE_CONTROL_ACTION(1, 1, true);
			PAD::DISABLE_CONTROL_ACTION(1, 2, true);
			func_39(0, 0, 0, 1);
			HUD::SET_MOUSE_CURSOR_THIS_FRAME();
		}
	}
}

void func_39(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	
	fVar6 = (0.034722f / 2f);
	iVar13 = -1;
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		Global_4521350 = -1;
		return;
	}
	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	fVar0 = Global_24566;
	fVar2 = (fVar0 + Global_24568);
	fVar3 = Global_24569.f_6333;
	fVar1 = (Global_24569.f_6333 - (IntToFloat(Global_24569.f_6335) * 0.034722f));
	if (bParam2)
	{
		fVar3 = (fVar3 + 0.034722f);
		fVar1 = (fVar1 + 0.034722f);
	}
	if (Global_24569.f_6335 < 1)
	{
		fVar1 = (Global_24569.f_6333 - 0.034722f);
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar4 = fVar0;
	fVar5 = fVar1;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar0, fVar1, &fVar0, &fVar1);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(fVar2, fVar3, &fVar2, &fVar3);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_45();
	if (Global_4521350 == -6)
	{
		return;
	}
	Global_4521350 = -1;
	fVar7 = Global_4521344;
	fVar8 = Global_4521345;
	if (Global_24569.f_6336 > Global_24569.f_6335)
	{
		if (((Global_4521344 >= fVar0 && Global_4521344 <= fVar2) && Global_4521345 >= fVar3) && Global_4521345 < (fVar3 + fVar6))
		{
			Global_4521350 = -2;
			if (bParam3)
			{
				func_44(0);
			}
			return;
		}
		if (((Global_4521344 >= fVar0 && Global_4521344 <= fVar2) && Global_4521345 >= (fVar3 + fVar6)) && Global_4521345 < (fVar3 + 0.034722f))
		{
			Global_4521350 = -3;
			if (bParam3)
			{
				func_44(0);
			}
			return;
		}
	}
	if (((fVar7 >= fVar0 && fVar7 <= fVar2) && fVar8 >= fVar1) && fVar8 <= fVar3)
	{
		fVar9 = (fVar8 - fVar1);
		iVar13 = SYSTEM::FLOOR((fVar9 / 0.034722f));
		if (Global_24569.f_6336 == -1)
		{
			Global_4521350 = 0;
			iVar13 = 0;
			return;
		}
		iVar11 = 148;
		iVar12 = (iVar11 / Global_24569.f_6335);
		iVar10 = (32 + (iVar11 - (iVar12 * iVar13)));
		if (bParam3)
		{
			if (!bParam1 || iVar13 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_40(fVar4, (fVar5 + (IntToFloat(iVar13) * 0.034722f)), Global_24568, (0.034722f - 0.0015f), 255, 255, 255, iVar10);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
		Global_4521350 = Global_24569.f_8865[iVar13];
		return;
	}
	if (!bParam0)
	{
		if (fVar7 < fVar2)
		{
			Global_4521350 = -4;
			return;
		}
		if (fVar8 > 0.9f)
		{
			Global_4521350 = -5;
			return;
		}
	}
	else if (fVar7 < fVar2 && fVar8 < (fVar3 + 0.25f))
	{
		Global_4521350 = -4;
		return;
	}
	Global_4521350 = -1;
}

void func_40(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	GRAPHICS::DRAW_RECT(func_41((fParam0 + (fParam2 * 0.5f))), (fParam1 + (fParam3 * 0.5f)), func_41(fParam2), fParam3, iParam4, iParam5, iParam6, iParam7, false);
}

float func_41(float fParam0)
{
	fParam0 = (fParam0 * func_42());
	return fParam0;
}

float func_42()
{
	return (1.777778f / func_43());
}

float func_43()
{
	return Global_24569.f_9245;
}

void func_44(bool bParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	fVar2 = (0.034722f / 2f);
	if (bParam0)
	{
		iVar3 = 48;
	}
	else
	{
		iVar3 = 210;
	}
	fVar0 = Global_24566;
	fVar1 = Global_24569.f_6333;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	if (Global_4521350 == -2)
	{
		func_40(fVar0, fVar1, Global_24568, fVar2, 255, 255, 255, iVar3);
	}
	else if (Global_4521350 == -3)
	{
		func_40(fVar0, (fVar1 + fVar2), Global_24568, fVar2, 255, 255, 255, iVar3);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_45()
{
	Global_4521346 = Global_4521344;
	Global_4521347 = Global_4521345;
	Global_4521344 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 239);
	Global_4521345 = PAD::GET_DISABLED_CONTROL_NORMAL(2, 240);
	Global_4521348 = (Global_4521344 - Global_4521346);
	Global_4521349 = (Global_4521345 - Global_4521347);
}

int func_46(bool bParam0, bool bParam1)
{
	if (Global_2673273.f_1762.f_701 != 0)
	{
		return 1;
	}
	if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_48(8, -1) && func_47() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_80598) || Global_24569.f_9243) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_102538.f_1514)
	{
		return 0;
	}
	return 1;
}

int func_47()
{
	return Global_1575022;
}

var func_48(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677555.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677555.f_1048, iParam0);
}

void func_49(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	bool bVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	float fVar37;
	struct<3> Var38;
	bool bVar41;
	float fVar42;
	float fVar43;
	float fVar44;
	float fVar45;
	float fVar46;
	int iVar47;
	int iVar48;
	int iVar49;
	int iVar50;
	float fVar51;
	bool bVar52;
	bool bVar53;
	bool bVar54;
	bool bVar55;
	float fVar56;
	float fVar57;
	float fVar58;
	float fVar59;
	int* iVar60;
	int* iVar61;
	float fVar62;
	struct<8> Var63;
	char cVar79[64];
	float fVar95;
	float fVar96;
	float fVar97;
	int iVar98;
	float fVar99;
	float fVar100;
	int iVar101;
	int iVar102;
	int iVar103;
	int iVar104;
	int iVar105;
	int iVar106;
	char cVar107[16];
	float fVar111;
	float fVar112;
	float fVar113;
	float fVar114;
	float fVar115;
	
	if (!func_10(&iVar0, 0, iParam1))
	{
		return;
	}
	if (iVar0 == -1)
	{
	}
	if (!func_46(0, bParam6))
	{
		return;
	}
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	fVar57 = 0f;
	if (Global_24569)
	{
		if (func_88(30, 1, 1, &fVar36, &fVar37, bParam7))
		{
			fVar58 = (fVar37 / fVar36);
		}
		else
		{
			Global_24569 = 0;
		}
	}
	if (fParam5 == -1f)
	{
		fParam5 = Global_24568;
	}
	fVar57 = (fParam5 * fVar58);
	if (MISC::GET_HASH_KEY(&(Global_24569.f_1)) == MISC::GET_HASH_KEY("HIDE"))
	{
		fVar59 = Global_24567;
	}
	else
	{
		fVar59 = (((Global_24567 + fVar57) + 0.034722f) + 0f);
	}
	fVar62 = 1f;
	func_86(bParam7, &iVar60, &iVar61, &fVar62);
	if (bParam3)
	{
		if (Global_24569.f_5821 <= 1)
		{
			func_97(Global_24569.f_5821 + 1, "DFLT_MNU_OPT", 0, 1, 0, 0, 0);
			Global_24569.f_6617 = 1;
		}
	}
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 1 && Global_24569.f_6331)
		{
			if (MISC::GET_HASH_KEY(&(Global_24569.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				fVar51 = Global_24567;
			}
			else
			{
				if (Global_24569)
				{
					StringCopy(&Var63, func_85(30), 64);
					StringCopy(&cVar79, func_82(30, 1), 64);
					if (MISC::GET_HASH_KEY(&(Global_24569.f_7744[30 /*16*/])) == joaat("crew_logo"))
					{
						func_40(Global_24566, Global_24567, fParam5, fVar57, 0, 0, 0, 255);
						func_81(&Var63, &cVar79, (Global_24566 + (fParam5 * 0.5f)), (Global_24567 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
					else
					{
						func_81(&Var63, &cVar79, (Global_24566 + (fParam5 * 0.5f)), (Global_24567 + (fVar57 * 0.5f)), fParam5, fVar57, 0f, 255, 255, 255, 255, 0, 0);
					}
				}
				if (Global_24569.f_9214)
				{
					iVar1 = Global_24569.f_9210;
					iVar2 = Global_24569.f_9211;
					iVar3 = Global_24569.f_9212;
					iVar4 = Global_24569.f_9213;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				func_40(Global_24566, (Global_24567 + fVar57), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				fVar51 = (((Global_24567 + fVar57) + 0.034722f) + 0f);
				if (MISC::GET_HASH_KEY(&(Global_24569.f_1)) != 0)
				{
					func_80();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24569.f_1));
					iVar15 = 0;
					iVar16 = 0;
					iVar17 = 0;
					iVar18 = 0;
					iVar14 = 0;
					while (iVar14 < Global_24569.f_74)
					{
						if (Global_24569.f_5[iVar14] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_10[iVar15]);
							iVar15++;
						}
						else if (Global_24569.f_5[iVar14] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_14[iVar16], Global_24569.f_18[iVar16]);
							iVar16++;
						}
						else if (Global_24569.f_5[iVar14] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_24569.f_5[iVar14] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_22[iVar17 /*6*/]));
							iVar17++;
						}
						else if (Global_24569.f_5[iVar14] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24569.f_5[iVar14] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24569.f_5[iVar14] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						else if (Global_24569.f_5[iVar14] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_41[iVar18 /*16*/]));
							iVar18++;
						}
						iVar14++;
					}
					func_79((Global_24566 + 0.00390625f), ((Global_24567 + fVar57) + 0.00416664f), 0);
				}
				if (Global_24569.f_6338)
				{
					func_80();
					func_77((((Global_24566 + fParam5) - 0.00390625f) - func_78("CM_ITEM_COUNT", Global_24569.f_6339, Global_24569.f_6340)), ((Global_24567 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_24569.f_6339, Global_24569.f_6340);
				}
				else if (Global_24569.f_6334 > Global_24569.f_5828)
				{
					if (Global_24569.f_6337 != 0)
					{
						func_80();
						func_77((((Global_24566 + fParam5) - 0.00390625f) - func_78("CM_ITEM_COUNT", Global_24569.f_6337, Global_24569.f_6336)), ((Global_24567 + fVar57) + 0.00416664f), "CM_ITEM_COUNT", Global_24569.f_6337, Global_24569.f_6336);
					}
				}
			}
			iVar6 = Global_24569.f_6341;
			iVar9 = 0;
			fVar95 = fVar51;
			if (Global_24569.f_9224)
			{
				iVar1 = Global_24569.f_9220;
				iVar2 = Global_24569.f_9221;
				iVar3 = Global_24569.f_9222;
				iVar4 = Global_24569.f_9223;
			}
			else
			{
				HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
			}
			while (iVar9 < Global_24569.f_5828 && iVar6 <= Global_24569.f_5821)
			{
				if (iVar6 >= 0)
				{
					if (Global_24569.f_6088[iVar6])
					{
						if (Global_24569.f_5959[iVar6] && iVar6 != Global_24569.f_6341)
						{
							fVar51 = (fVar51 + 0.00277776f);
						}
						fVar56 = 0.034722f;
						if (Global_24569.f_6348[iVar6] != 0f)
						{
							fVar56 = Global_24569.f_6348[iVar6];
						}
						fVar51 = (fVar51 + fVar56);
						iVar9++;
					}
				}
				iVar6++;
			}
			func_81("CommonMenu", "Gradient_Bgd", (Global_24566 + (fParam5 * 0.5f)), ((fVar95 + ((fVar51 - fVar95) * 0.5f)) - 0.00138888f), fParam5, (fVar51 - fVar95), 0f, 255, 255, 255, 255, 0, 0);
			if (Global_24569.f_6334 > Global_24569.f_5828)
			{
				if (Global_24569.f_9229)
				{
					iVar1 = Global_24569.f_9225;
					iVar2 = Global_24569.f_9226;
					iVar3 = Global_24569.f_9227;
					iVar4 = Global_24569.f_9228;
				}
				else
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 204;
				}
				func_40(Global_24566, (fVar51 + 0f), fParam5, 0.034722f, iVar1, iVar2, iVar3, iVar4);
				Var38 = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				Var38.f_0 = (Var38.f_0 * (0.5f / fVar62));
				Var38.f_1 = (Var38.f_1 * (0.5f / fVar62));
				if (Global_24569.f_9242)
				{
					iVar1 = 0;
					iVar2 = 0;
					iVar3 = 0;
					iVar4 = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(1, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_81("CommonMenu", "shop_arrows_upANDdown", (Global_24566 + (fParam5 * 0.5f)), ((fVar51 + 0f) + (0.034722f * 0.5f)), ((Var38.f_0 / 1280f) * fVar62), ((Var38.f_1 / 720f) * fVar62), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				fVar51 = (fVar51 + (0f + 0.034722f));
			}
			if (MISC::GET_HASH_KEY(&(Global_24569.f_5241)) != 0 && Global_24569.f_5323 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24566 + 0.0046875f);
				if (Global_24569.f_5325 != 0)
				{
					func_88(Global_24569.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_24566 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_76(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24569.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24569.f_5319)
				{
					if (Global_24569.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24569.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_5262[iVar16], Global_24569.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24569.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_40(Global_24566, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24569.f_9234)
				{
					iVar1 = Global_24569.f_9230;
					iVar2 = Global_24569.f_9231;
					iVar3 = Global_24569.f_9232;
					iVar4 = Global_24569.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_81("CommonMenu", "Gradient_Bgd", (Global_24566 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_76(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24569.f_5241));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24569.f_5319)
				{
					if (Global_24569.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24569.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_5262[iVar16], Global_24569.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24569.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				func_79(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_24569.f_5325 != 0)
				{
					func_88(Global_24569.f_5325, 1, 1, &fVar36, &fVar37, bParam7);
					func_75(Global_24569.f_5325, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					func_81(func_85(Global_24569.f_5325), func_82(Global_24569.f_5325, 1), ((Global_24566 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_5247)))
				{
					fVar51 = (fVar51 + (0.00138888f * 6f));
					func_76(fVar42);
					fVar96 = 0.35f;
					if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24569.f_5247))) > 600)
					{
						fVar96 = (0.35f * 0.625f);
					}
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24569.f_5247));
					iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
					HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
					func_40(Global_24566, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
					if (Global_24569.f_9234)
					{
						iVar1 = Global_24569.f_9230;
						iVar2 = Global_24569.f_9231;
						iVar3 = Global_24569.f_9232;
						iVar4 = Global_24569.f_9233;
					}
					else
					{
						HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
					}
					func_81("CommonMenu", "Gradient_Bgd", (Global_24566 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
					func_76(fVar42);
					HUD::SET_TEXT_SCALE(0f, fVar96);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24569.f_5247));
					func_79(fVar42, (fVar51 + 0.00277776f), 0);
					fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar96, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				}
				if (Global_24569.f_5323 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_24569.f_5324) > Global_24569.f_5323)
					{
						StringCopy(&(Global_24569.f_5241), "", 24);
						Global_24569.f_5323 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_5247)))
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24566 + 0.0046875f);
				fVar97 = 0.35f;
				if (HUD::GET_LENGTH_OF_LITERAL_STRING(HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_24569.f_5247))) > 600)
				{
					fVar97 = (0.35f * 0.625f);
				}
				func_76(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_24569.f_5247));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_24569.f_5319)
				{
					if (Global_24569.f_5253[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_5258[iVar15]);
						iVar15++;
					}
					else if (Global_24569.f_5253[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_5262[iVar16], Global_24569.f_5266[iVar16]);
						iVar16++;
					}
					else if (Global_24569.f_5253[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					else if (Global_24569.f_5253[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_24569.f_5270[iVar17 /*16*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_40(Global_24566, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24569.f_9234)
				{
					iVar1 = Global_24569.f_9230;
					iVar2 = Global_24569.f_9231;
					iVar3 = Global_24569.f_9232;
					iVar4 = Global_24569.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_81("CommonMenu", "Gradient_Bgd", (Global_24566 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(fVar97, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4 + 25, 0, 0);
				func_76(fVar42);
				HUD::SET_TEXT_SCALE(0f, fVar97);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24569.f_5247));
				func_79(fVar42, (fVar51 + 0.00277776f), 0);
			}
			if (MISC::GET_HASH_KEY(&(Global_4521274.f_21)) != 0 && Global_4521274.f_65 != -1)
			{
				fVar51 = (fVar51 + (0.00277776f * 2f));
				fVar42 = (Global_24566 + 0.0046875f);
				if (Global_4521274.f_67 != 0)
				{
					func_88(Global_4521274.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					fVar42 = (((Global_24566 + fVar36) + (0.00078125f * 4f)) - (0.00078125f * 1f));
				}
				func_76(fVar42);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4521274.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4521274.f_61)
				{
					if (Global_4521274.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521274.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4521274.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521274.f_34[iVar16], Global_4521274.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4521274.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				iVar6 = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(fVar42, (fVar51 + 0.00277776f));
				HUD::GET_HUD_COLOUR(2, &iVar1, &iVar2, &iVar3, &iVar4);
				func_40(Global_24566, (fVar51 - 0.00277776f), fParam5, 0.00277776f, iVar1, iVar2, iVar3, iVar4);
				if (Global_24569.f_9234)
				{
					iVar1 = Global_24569.f_9230;
					iVar2 = Global_24569.f_9231;
					iVar3 = Global_24569.f_9232;
					iVar4 = Global_24569.f_9233;
				}
				else
				{
					HUD::GET_HUD_COLOUR(140, &iVar1, &iVar2, &iVar3, &iVar4);
				}
				func_81("CommonMenu", "Gradient_Bgd", (Global_24566 + (fParam5 * 0.5f)), ((fVar51 + ((((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))) * 0.5f)) - 0.00138888f), fParam5, (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))), 0f, iVar1, iVar2, iVar3, iVar4, 0, 0);
				func_76(fVar42);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4521274.f_21));
				iVar15 = 0;
				iVar16 = 0;
				iVar17 = 0;
				iVar14 = 0;
				while (iVar14 < Global_4521274.f_61)
				{
					if (Global_4521274.f_25[iVar14] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4521274.f_30[iVar15]);
						iVar15++;
					}
					else if (Global_4521274.f_25[iVar14] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4521274.f_34[iVar16], Global_4521274.f_38[iVar16]);
						iVar16++;
					}
					else if (Global_4521274.f_25[iVar14] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					else if (Global_4521274.f_25[iVar14] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4521274.f_42[iVar17 /*6*/]));
						iVar17++;
					}
					iVar14++;
				}
				func_79(fVar42, (fVar51 + 0.00277776f), 0);
				if (Global_4521274.f_67 != 0)
				{
					func_88(Global_4521274.f_67, 1, 1, &fVar36, &fVar37, bParam7);
					func_75(Global_4521274.f_67, 1, &iVar47, &iVar48, &iVar49, &iVar50);
					func_81(func_85(Global_4521274.f_67), func_82(Global_4521274.f_67, 1), ((Global_24566 + (fVar36 * 0.5f)) + (0.00078125f * 2f)), ((fVar51 + (fVar37 * 0.5f)) - (0.00138888f * 4f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
				}
				fVar51 = (fVar51 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * IntToFloat(iVar6)) + (0.00138888f * 13f)) + ((0.00138888f * 5f) * IntToFloat((iVar6 - 1)))));
				if (Global_4521274.f_65 > 0)
				{
					if ((MISC::GET_GAME_TIMER() - Global_4521274.f_66) > Global_4521274.f_65)
					{
						StringCopy(&(Global_4521274.f_21), "", 16);
						Global_4521274.f_65 = -1;
					}
				}
			}
			func_68(iVar60, iParam1, iParam8, 0, 0, 0, bParam4, 1, 0);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
		if (iVar5 == 1 || !Global_24569.f_6331)
		{
			iVar19 = 0;
			iVar23 = 0;
			iVar20 = 0;
			iVar21 = 0;
			iVar22 = 0;
			iVar9 = 0;
			iVar10 = 0;
			iVar11 = 0;
			iVar12 = 0;
			iVar13 = 0;
			iVar98 = Global_24569.f_5821;
			if (Global_24569.f_6332)
			{
				iVar98 = (Global_24569.f_6335 - 1);
			}
			fVar99 = 0f;
			fVar100 = 0f;
			iVar7 = 0;
			while (iVar7 <= iVar98)
			{
				fVar56 = 0.034722f;
				if (Global_24569.f_6348[iVar6] != 0f)
				{
					fVar56 = Global_24569.f_6348[iVar6];
				}
				if (Global_24569.f_6332)
				{
					iVar6 = Global_24569.f_8865[iVar7];
				}
				else
				{
					iVar6 = iVar7;
				}
				iVar12 = iVar13;
				bVar33 = false;
				if (iVar6 >= Global_24569.f_6341 && iVar9 < Global_24569.f_5828)
				{
					bVar33 = true;
					if (Global_24569.f_6342 == iVar6)
					{
						fVar100 = fVar99;
					}
					if (Global_24569.f_5959[iVar6])
					{
						iVar12++;
					}
					fVar35 = (((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12))) + 0.00277776f);
				}
				Global_24569.f_6482[iVar6] = fVar35;
				fVar34 = (Global_24566 + 0.0046875f);
				bVar41 = false;
				bVar32 = Global_24569.f_6342 == iVar6;
				if ((bVar32 && iVar5 == 1) && bVar33)
				{
					iVar102 = 255;
					iVar103 = 255;
					iVar104 = 255;
					iVar105 = 255;
					if (Global_24569.f_9236)
					{
						HUD::GET_HUD_COLOUR(Global_24569.f_9235, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					else
					{
						HUD::GET_HUD_COLOUR(1, &iVar102, &iVar103, &iVar104, &iVar105);
					}
					func_81("CommonMenu", "Gradient_Nav", (Global_24566 + (fParam5 * 0.5f)), (((fVar59 + fVar100) + (0.00277776f * IntToFloat(iVar12))) + (fVar56 * 0.5f)), fParam5, fVar56, 0f, iVar102, iVar103, iVar104, iVar105, 0, 0);
					Global_24569.f_6480 = fVar35;
				}
				iVar8 = 0;
				while (iVar8 < Global_24569.f_5829)
				{
					if (BitTest(Global_24569.f_5692[iVar6], iVar8) || Global_24569.f_5659[iVar8] == 5)
					{
						if (Global_24569.f_6332)
						{
							iVar19 = Global_24569.f_8881[((iVar9 * Global_24569.f_5829) + iVar8)];
							iVar20 = Global_24569.f_8922[((iVar9 * Global_24569.f_5829) + iVar8)];
							iVar21 = Global_24569.f_8963[((iVar9 * Global_24569.f_5829) + iVar8)];
							iVar22 = Global_24569.f_9004[((iVar9 * Global_24569.f_5829) + iVar8)];
							iVar23 = Global_24569.f_9045[((iVar9 * Global_24569.f_5829) + iVar8)];
						}
						else
						{
							Global_24569.f_8881[((iVar9 * Global_24569.f_5829) + iVar8)] = iVar19;
							Global_24569.f_8922[((iVar9 * Global_24569.f_5829) + iVar8)] = iVar20;
							Global_24569.f_8963[((iVar9 * Global_24569.f_5829) + iVar8)] = iVar21;
							Global_24569.f_9004[((iVar9 * Global_24569.f_5829) + iVar8)] = iVar22;
							Global_24569.f_9045[((iVar9 * Global_24569.f_5829) + iVar8)] = iVar23;
						}
						iVar106 = 0;
						bVar55 = false;
						if (Global_24569.f_6614[0] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_24569.f_6611[0])
							{
								bVar55 = true;
								iVar106 = 0;
							}
						}
						if (Global_24569.f_6614[1] != -1)
						{
							if ((iVar6 * 5 + iVar8) == Global_24569.f_6611[1])
							{
								bVar55 = true;
								iVar106 = 1;
							}
						}
						if (Global_24569.f_5665[iVar8] != -1f)
						{
							fVar34 = ((Global_24566 + 0.0046875f) + Global_24569.f_5665[iVar8]);
						}
						if ((iVar8 < 4 && Global_24569.f_5665[iVar8 + 1] != -1f) && fVar34 < Global_24569.f_5665[iVar8 + 1])
						{
							fVar46 = (Global_24569.f_5665[iVar8 + 1] - fVar34);
						}
						else
						{
							fVar46 = (((Global_24566 + Global_24568) - 0.0046875f) - fVar34);
						}
						if ((Global_24569.f_5678[iVar8] && Global_24569.f_6477) && bVar32)
						{
							bVar54 = true;
						}
						else
						{
							bVar54 = false;
						}
						switch (Global_24569.f_5659[iVar8])
						{
							case 0:
								break;
							
							case 1:
								iVar24 = iVar19;
								if (bVar33)
								{
									if (!Global_24569.f_6332)
									{
										fVar43 = 0f;
										fVar44 = 0f;
										iVar25 = 0;
										iVar26 = 0;
										iVar27 = 0;
										iVar28 = 0;
										iVar29 = 0;
										if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
										{
											bVar52 = false;
											bVar53 = false;
											iVar14 = 0;
											while (iVar14 < 4)
											{
												if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_24569.f_2387[iVar24 /*5*/][iVar14] == 8)
												{
													bVar53 = true;
												}
												else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 9)
												{
													bVar52 = true;
												}
												iVar14++;
											}
											if (Global_24569.f_2130[iVar24])
											{
												bVar53 = true;
											}
											func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, iVar106, bVar53, bVar52);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&(Global_24569.f_79[iVar24 /*6*/]));
										}
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 1)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												iVar25++;
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_79[(iVar24 + iVar25) /*6*/]));
												}
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 5)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 6)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 7)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
												}
												iVar29++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 2)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_4469[(iVar20 + iVar26)]);
												}
												iVar26++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 3)
											{
												if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
												{
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_4726[(iVar21 + iVar27)], Global_24569.f_4855[(iVar21 + iVar27)]);
												}
												iVar27++;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 4)
											{
												iVar28++;
											}
											iVar14++;
										}
										if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0)
										{
											fVar43 = func_62(1);
										}
										if (iVar28 > 0)
										{
											iVar14 = 0;
											while (iVar14 < iVar28)
											{
												if (func_88(Global_24569.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar44 = (fVar44 + fVar36);
													if (iVar14 > 0)
													{
														fVar44 = (fVar44 - (0.00078125f * 4f));
													}
													if ((Global_24569.f_4984[(iVar22 + iVar14)] == 2 || Global_24569.f_4984[(iVar22 + iVar14)] == 56) || Global_24569.f_4984[(iVar22 + iVar14)] == 66)
													{
														fVar44 = (fVar44 - (0.00078125f * 5f));
													}
												}
												iVar14++;
											}
										}
										fVar42 = 0f;
										if (Global_24569.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - (fVar43 + fVar44)) + (0.00078125f * 1f)));
										}
										else if (Global_24569.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - ((fVar43 + fVar44) * 0.5f)));
										}
										Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar42;
										Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar43;
										Global_24569.f_9168[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar44;
										if (Global_24569.f_5686[iVar8] == 2)
										{
											iVar101 = (iVar8 - 1);
											while (iVar101 >= 0)
											{
												if (Global_24569.f_5686[iVar101] == 2)
												{
													Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar101)] = (Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar101)] - Global_24569.f_5671[iVar8]);
												}
												iVar101 = (iVar101 + -1);
											}
										}
									}
									else
									{
										fVar42 = Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)];
										fVar43 = Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)];
										fVar44 = Global_24569.f_9168[((iVar9 * Global_24569.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_88(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_24569.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_88(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(27), func_82(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_88(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_88(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(28), func_82(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									iVar25 = 0;
									iVar26 = 0;
									iVar27 = 0;
									iVar28 = 0;
									iVar29 = 0;
									iVar31 = 0;
									if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										bVar52 = false;
										bVar53 = false;
										iVar14 = 0;
										while (iVar14 < 4)
										{
											if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 5 || Global_24569.f_2387[iVar24 /*5*/][iVar14] == 8)
											{
												bVar53 = true;
											}
											else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 9)
											{
												bVar52 = true;
											}
											iVar14++;
										}
										if (Global_24569.f_2130[iVar24])
										{
											bVar53 = true;
										}
										func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
										if (Global_24569.f_9240 && Global_24569.f_9241 == iVar6)
										{
											func_61(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_24569.f_79[iVar24 /*6*/]));
									}
									iVar14 = 0;
									while (iVar14 < 4)
									{
										if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 1)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 1;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 8)
										{
											iVar25++;
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_24569.f_79[(iVar24 + iVar25) /*6*/]));
											}
											iVar31 = 8;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 5)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 5;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 6)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 6;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 7)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 7;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 9)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2697637[(iVar23 + iVar29) /*16*/]));
											}
											iVar29++;
											iVar31 = 9;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 2)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_4469[(iVar20 + iVar26)]);
											}
											iVar26++;
											iVar31 = 2;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 3)
										{
											if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
											{
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_4726[(iVar21 + iVar27)], Global_24569.f_4855[(iVar21 + iVar27)]);
											}
											iVar27++;
											iVar31 = 3;
										}
										else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 4)
										{
											if ((Global_24569.f_4984[(iVar22 + iVar28)] == 2 || Global_24569.f_4984[(iVar22 + iVar28)] == 56) || Global_24569.f_4984[(iVar22 + iVar28)] == 66)
											{
												if (func_88(Global_24569.f_4984[(iVar22 + iVar28)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (func_88(Global_24569.f_4984[(iVar22 + iVar28)], bVar32, 1, &fVar36, &fVar37, bParam7))
													{
														func_75(Global_24569.f_4984[(iVar22 + iVar28)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
														if (iVar5 == 1)
														{
															if (Global_24569.f_5686[iVar8] == 2)
															{
																func_81(func_85(Global_24569.f_4984[(iVar22 + iVar28)]), func_82(Global_24569.f_4984[(iVar22 + iVar28)], bVar32), (((fVar34 + fVar42) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																func_81(func_85(Global_24569.f_4984[(iVar22 + iVar28)]), func_82(Global_24569.f_4984[(iVar22 + iVar28)], bVar32), ((fVar34 + fVar42) - (0.00078125f * 8f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
														fVar42 = (fVar42 + (0.00078125f * 3f));
													}
												}
											}
											iVar28++;
											iVar31 = 4;
										}
										iVar14++;
									}
									if (MISC::GET_HASH_KEY(&(Global_24569.f_79[iVar24 /*6*/])) != 0 && iVar5 == 1)
									{
										if (iVar31 == 4 && Global_24569.f_5686[iVar8] == 2)
										{
											func_79(((fVar34 + fVar42) + (0.00078125f * 7f)), fVar35, 0);
										}
										else
										{
											func_79((fVar34 + fVar42), fVar35, 0);
											if (func_60() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_mission_creator")) > 0)
											{
												if (iVar8 == 0)
												{
													if (Global_24569.f_2130[iVar24])
													{
														bVar53 = true;
													}
													func_65(0, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, bVar53, bVar52);
													StringCopy(&cVar107, "TEST_LABEL", 16);
													fVar111 = 0f;
													fVar112 = 55f;
													fVar113 = 0.0185f;
													fVar114 = 0.004f;
													fVar115 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, (0.35f * 0.7f));
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT((fVar34 - (fVar115 * 0.6f)), (fVar35 + (fVar113 * 0.75f)), 0.0175f, 0.035f, SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar111), SYSTEM::FLOOR(fVar112), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&cVar107);
													HUD::ADD_TEXT_COMPONENT_INTEGER((Global_24569.f_6341 + iVar30));
													func_79((fVar34 - fVar115), (fVar35 + fVar114), 0);
													iVar30++;
												}
											}
										}
									}
									if (iVar28 > 0)
									{
										fVar42 = (fVar42 + (6f * 0.00078125f));
										iVar14 = 0;
										while (iVar14 < iVar28)
										{
											if ((Global_24569.f_4984[(iVar22 + iVar14)] != 2 && Global_24569.f_4984[(iVar22 + iVar14)] != 56) && Global_24569.f_4984[(iVar22 + iVar14)] != 66)
											{
												if (func_88(Global_24569.f_4984[(iVar22 + iVar14)], bVar32, 0, &fVar36, &fVar37, bParam7))
												{
													fVar42 = (fVar42 + (fVar36 * 0.5f));
													if (iVar5 == 1)
													{
														if (func_88(Global_24569.f_4984[(iVar22 + iVar14)], bVar32, 1, &fVar36, &fVar37, bParam7))
														{
															func_75(Global_24569.f_4984[(iVar22 + iVar14)], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
															if (Global_24569.f_4984[(iVar22 + iVar14)] == 31)
															{
																func_81(func_85(Global_24569.f_4984[(iVar22 + iVar14)]), func_82(Global_24569.f_4984[(iVar22 + iVar14)], bVar32), (Global_24566 + (fVar36 * 0.5f)), (((fVar35 + 0.00277776f) + (fVar37 * 0.5f)) - (0.00078125f * 11f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else if (Global_24569.f_5686[iVar8] == 2)
															{
																func_81(func_85(Global_24569.f_4984[(iVar22 + iVar14)]), func_82(Global_24569.f_4984[(iVar22 + iVar14)], bVar32), ((((fVar34 + fVar42) + fVar43) - (0.00078125f * 8f)) + (0.00078125f * 4f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
															else
															{
																func_81(func_85(Global_24569.f_4984[(iVar22 + iVar14)]), func_82(Global_24569.f_4984[(iVar22 + iVar14)], bVar32), (((fVar34 + fVar42) + fVar43) - (0.00078125f * 12f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
															}
														}
													}
													fVar42 = (fVar42 + (12f * 0.00078125f));
												}
											}
											iVar14++;
										}
									}
								}
								bVar41 = true;
								iVar19++;
								iVar14 = 0;
								while (iVar14 < 4)
								{
									if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 1)
									{
										iVar19++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 8)
									{
										iVar19++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 2)
									{
										iVar20++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 3)
									{
										iVar21++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 4)
									{
										iVar22++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 5)
									{
										iVar23++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 6)
									{
										iVar23++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 7)
									{
										iVar23++;
									}
									else if (Global_24569.f_2387[iVar24 /*5*/][iVar14] == 9)
									{
										iVar23++;
									}
									iVar14++;
								}
								break;
							
							case 2:
								if (bVar33)
								{
									if (!Global_24569.f_6332)
									{
										func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_24569.f_9240 && Global_24569.f_9241 == iVar6)
										{
											func_61(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_24569.f_4469[iVar20]);
										fVar43 = func_62(1);
										fVar42 = 0f;
										if (Global_24569.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_24569.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar42;
										Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)];
										fVar43 = Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_88(27, 1, 0, &fVar36, &fVar37, bParam7))
										{
											if (Global_24569.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_88(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(27), func_82(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_88(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_88(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(28), func_82(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									if (iVar5 == 1)
									{
										func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, 0, 0);
										func_59((fVar34 + fVar42), fVar35, "NUMBER", Global_24569.f_4469[iVar20], 0);
									}
								}
								bVar41 = true;
								iVar20++;
								break;
							
							case 3:
								if (bVar33)
								{
									if (!Global_24569.f_6332)
									{
										func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, 0, 0);
										if (Global_24569.f_9240 && Global_24569.f_9241 == iVar6)
										{
											func_61(bVar32);
										}
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT("NUMBER");
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_24569.f_4726[iVar21], Global_24569.f_4855[iVar21]);
										fVar43 = func_62(1);
										fVar42 = 0f;
										if (Global_24569.f_5686[iVar8] == 2)
										{
											fVar42 = (fVar42 + ((fVar46 - fVar43) + (0.00078125f * 1f)));
										}
										else if (Global_24569.f_5686[iVar8] == 0)
										{
											fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar43 * 0.5f)));
										}
										Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar42;
										Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar43;
									}
									else
									{
										fVar42 = Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)];
										fVar43 = Global_24569.f_9127[((iVar9 * Global_24569.f_5829) + iVar8)];
									}
									if (bVar54)
									{
										if (func_88(27, 1, 0, &fVar36, &fVar37, 0))
										{
											if (Global_24569.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 - (fVar36 * 2f));
											}
											fVar45 = (fVar36 * 0.5f);
											if (func_88(27, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(27), func_82(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
										if (func_88(28, 1, 0, &fVar36, &fVar37, bParam7))
										{
											fVar42 = (fVar42 + fVar36);
											fVar45 = (fVar36 * 0.5f);
											if (func_88(28, 1, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
												if (iVar5 == 1)
												{
													func_81(func_85(28), func_82(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
												}
											}
										}
									}
									func_65(bVar32, Global_24569.f_1616[iVar24], Global_24569.f_1873[iVar24], bVar55, 0, 0, 0);
									func_58((fVar34 + fVar42), fVar35, "NUMBER", Global_24569.f_4726[iVar21], Global_24569.f_4855[iVar21]);
								}
								bVar41 = true;
								iVar21++;
								break;
							
							case 4:
								if (bVar33)
								{
									if (func_88(Global_24569.f_4984[iVar22], bVar32, 0, &fVar36, &fVar37, bParam7))
									{
										if (!Global_24569.f_6332)
										{
											fVar44 = fVar36;
											fVar42 = 0f;
											if (Global_24569.f_5686[iVar8] == 2)
											{
												fVar42 = (fVar42 + ((fVar46 - fVar44) + (0.00078125f * 1f)));
											}
											else if (Global_24569.f_5686[iVar8] == 0)
											{
												fVar42 = (fVar42 + (((fVar46 - fVar34) * 0.5f) - (fVar44 * 0.5f)));
											}
											Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar42;
											Global_24569.f_9168[((iVar9 * Global_24569.f_5829) + iVar8)] = fVar44;
										}
										else
										{
											fVar42 = Global_24569.f_9086[((iVar9 * Global_24569.f_5829) + iVar8)];
											fVar44 = Global_24569.f_9168[((iVar9 * Global_24569.f_5829) + iVar8)];
										}
										if (bVar54)
										{
											if (func_88(27, 1, 0, &fVar36, &fVar37, bParam7))
											{
												if (Global_24569.f_5686[iVar8] == 2)
												{
													fVar42 = (fVar42 - (fVar36 * 2f));
												}
												fVar45 = (fVar36 * 0.5f);
												if (func_88(27, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_75(27, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														func_81(func_85(27), func_82(27, 1), ((fVar34 + fVar42) + fVar45), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
											if (func_88(28, 1, 0, &fVar36, &fVar37, bParam7))
											{
												fVar42 = (fVar42 + fVar36);
												fVar45 = (fVar36 * 0.5f);
												if (func_88(28, 1, 1, &fVar36, &fVar37, bParam7))
												{
													func_75(28, 1, &iVar47, &iVar48, &iVar49, &iVar50);
													if (iVar5 == 1)
													{
														func_81(func_85(28), func_82(28, 1), (((fVar34 + fVar42) + fVar45) + (fVar43 + fVar44)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), fVar36, fVar37, 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
													}
												}
											}
										}
										if (iVar5 == 1)
										{
											if (func_88(Global_24569.f_4984[iVar22], bVar32, 1, &fVar36, &fVar37, bParam7))
											{
												func_75(Global_24569.f_4984[iVar22], bVar32, &iVar47, &iVar48, &iVar49, &iVar50);
												func_81(func_85(Global_24569.f_4984[iVar22]), func_82(Global_24569.f_4984[iVar22], bVar32), ((fVar34 + fVar42) + (fVar36 * 0.5f)), ((fVar35 - 0.00277776f) + (fVar56 * 0.5f)), (fVar36 * func_57(Global_24569.f_4984[iVar22])), (fVar37 * func_57(Global_24569.f_4984[iVar22])), 0f, iVar47, iVar48, iVar49, iVar50, 0, 0);
											}
										}
									}
								}
								bVar41 = true;
								iVar22++;
								break;
							
							case 5:
								bVar41 = true;
								break;
						}
						if (Global_24569.f_5659[iVar8] == 5)
						{
							if (Global_24569.f_5671[iVar8] > 0.05f)
							{
								fVar34 = (fVar34 + Global_24569.f_5671[iVar8]);
							}
							else
							{
								fVar34 = (fVar34 + 0.05f);
							}
						}
						else
						{
							fVar34 = (fVar34 + Global_24569.f_5671[iVar8]);
							if (Global_24569.f_5678[iVar8])
							{
								if (func_88(27, 1, 1, &fVar36, &fVar37, bParam7))
								{
									fVar34 = (fVar34 - fVar36);
								}
							}
						}
					}
					else
					{
						fVar34 = (fVar34 + Global_24569.f_5671[iVar8]);
					}
					iVar8++;
				}
				if (bVar41)
				{
					if (bVar33)
					{
						Global_24569.f_8865[iVar9] = iVar6;
						Global_24569.f_6343 = iVar6;
						iVar9++;
						if (Global_24569.f_5959[iVar6])
						{
							iVar13++;
						}
						if (Global_24569.f_6348[iVar6] != 0f)
						{
							fVar99 = (fVar99 + Global_24569.f_6348[iVar6]);
						}
						else
						{
							fVar99 = (fVar99 + 0.034722f);
						}
					}
					if (!Global_24569.f_6331)
					{
						Global_24569.f_6088[iVar6] = 1;
						if (Global_24569.f_5830[iVar6])
						{
							if (bVar32)
							{
								Global_24569.f_6337 = 0;
							}
						}
						else
						{
							iVar11++;
							if (bVar32)
							{
								Global_24569.f_6337 = iVar11;
							}
						}
						iVar10++;
					}
				}
				iVar7++;
			}
			if (!Global_24569.f_6331)
			{
				Global_24569.f_6333 = ((fVar59 + fVar99) + (0.00277776f * IntToFloat(iVar12)));
				Global_24569.f_6336 = iVar11;
				Global_24569.f_6334 = iVar10;
				Global_24569.f_6331 = 1;
			}
		}
		if (!Global_24569.f_6332)
		{
			Global_24569.f_6335 = iVar9;
			Global_24569.f_6332 = 1;
		}
		iVar5++;
	}
	Global_24569.f_6479 = fVar51;
	Global_24569.f_6481 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_24569.f_6479);
	if (!Global_24569.f_9209)
	{
		func_50(0);
	}
	Global_24569.f_9209 = 0;
	if (bParam2)
	{
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
	}
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
	if (bParam0)
	{
		func_32(1);
	}
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
}

void func_50(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (!Global_21649.f_1 == 1)
	{
		if (func_55(0))
		{
			func_51(iParam0);
		}
		MISC::SET_BIT(&Global_9503, 2);
	}
}

void func_51(int iParam0)
{
	if (func_56())
	{
		return;
	}
	if (Global_21882)
	{
		if (func_54())
		{
			func_53(1, 1);
		}
		else
		{
			func_53(0, 0);
		}
	}
	if (Global_21649.f_1 == 10 || Global_21649.f_1 == 9)
	{
		MISC::SET_BIT(&Global_9503, 16);
	}
	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	}
	Global_23023 = 5;
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 30);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 30);
	}
	if (!func_52())
	{
		Global_21649.f_1 = 3;
	}
}

int func_52()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

void func_53(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (func_55(0))
		{
			Global_21882 = 1;
			if (bParam1)
			{
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_21586);
			}
			Global_21577 = { Global_21595[Global_21594 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
	else if (Global_21882 == 1)
	{
		Global_21882 = 0;
		Global_21577 = { Global_21602[Global_21594 /*3*/] };
		if (bParam1)
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21586);
		}
		else
		{
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_21577);
		}
	}
}

bool func_54()
{
	return BitTest(Global_1964670, 5);
}

int func_55(int iParam0)
{
	if (iParam0 == 1)
	{
		if (Global_21649.f_1 > 3)
		{
			if (BitTest(Global_9502, 14))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	return 0;
}

bool func_56()
{
	return BitTest(Global_1964670, 19);
}

float func_57(int iParam0)
{
	switch (iParam0)
	{
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 40:
		case 41:
		case 39:
		case 58:
		case 48:
		case 49:
		case 50:
		case 55:
			return 0.85f;
			break;
	}
	return 1f;
}

void func_58(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_41(fParam0), fParam1, 0);
}

void func_59(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_41(fParam0), fParam1, iParam4);
}

bool func_60()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_61(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	if (bParam0)
	{
		HUD::GET_HUD_COLOUR(Global_24569.f_9237[0], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	else
	{
		HUD::GET_HUD_COLOUR(Global_24569.f_9237[1], &iVar0, &iVar1, &iVar2, &uVar3);
	}
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
}

float func_62(bool bParam0)
{
	return func_63(HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(bParam0));
}

float func_63(float fParam0)
{
	fParam0 = (fParam0 * func_64());
	return fParam0;
}

float func_64()
{
	return (func_43() / 1.777778f);
}

void func_65(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam2)
	{
		if (bParam3)
		{
			func_67(Global_24569.f_6614[iParam4], &iVar0, &iVar1, &iVar2);
			if ((iVar0 < 20 && iVar1 < 20) && iVar2 < 20)
			{
				if (bParam0 == 0)
				{
					HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
				}
			}
			else if ((iVar0 > 230 && iVar1 > 230) && iVar2 > 230)
			{
				if (bParam0)
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = 0;
				}
			}
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(14, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &iVar3);
				HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, 255);
			}
		}
		else if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
		else
		{
			HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
		}
	}
	else if (bParam1)
	{
		if (bParam0)
		{
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR((255f * 0.8f)));
		}
		else
		{
			HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
			HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
		}
	}
	else if (bParam0)
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	else
	{
		HUD::SET_TEXT_COLOUR(155, 155, 155, 255);
	}
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_JUSTIFICATION(1);
	if (bParam5)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(4);
	}
	else if (bParam6)
	{
		HUD::SET_TEXT_SCALE(0f, 0.425f);
		HUD::SET_TEXT_FONT(6);
	}
	else
	{
		HUD::SET_TEXT_FONT(0);
	}
	func_66(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_66(float fParam0, float fParam1)
{
	HUD::SET_TEXT_WRAP(func_41(fParam0), func_41(fParam1));
}

void func_67(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 8;
			*uParam2 = 8;
			*uParam3 = 8;
			break;
		
		case 1:
			*uParam1 = 37;
			*uParam2 = 37;
			*uParam3 = 39;
			break;
		
		case 22:
			*uParam1 = 140;
			*uParam2 = 146;
			*uParam3 = 154;
			break;
		
		case 23:
			*uParam1 = 91;
			*uParam2 = 93;
			*uParam3 = 94;
			break;
		
		case 6:
			*uParam1 = 81;
			*uParam2 = 84;
			*uParam3 = 89;
			break;
		
		case 111:
			*uParam1 = 240;
			*uParam2 = 240;
			*uParam3 = 240;
			break;
		
		case 28:
			*uParam1 = 150;
			*uParam2 = 8;
			*uParam3 = 0;
			break;
		
		case 34:
			*uParam1 = 38;
			*uParam2 = 3;
			*uParam3 = 6;
			break;
		
		case 88:
			*uParam1 = 245;
			*uParam2 = 137;
			*uParam3 = 15;
			break;
		
		case 45:
			*uParam1 = 74;
			*uParam2 = 22;
			*uParam3 = 7;
			break;
		
		case 56:
			*uParam1 = 45;
			*uParam2 = 58;
			*uParam3 = 53;
			break;
		
		case 58:
			*uParam1 = 71;
			*uParam2 = 120;
			*uParam3 = 60;
			break;
		
		case 54:
			*uParam1 = 77;
			*uParam2 = 98;
			*uParam3 = 104;
			break;
		
		case 73:
			*uParam1 = 14;
			*uParam2 = 49;
			*uParam3 = 109;
			break;
		
		case 68:
			*uParam1 = 22;
			*uParam2 = 34;
			*uParam3 = 72;
			break;
		
		case 140:
			*uParam1 = 0;
			*uParam2 = 174;
			*uParam3 = 239;
			break;
		
		case 131:
			*uParam1 = 255;
			*uParam2 = 183;
			*uParam3 = 0;
			break;
		
		case 90:
			*uParam1 = 142;
			*uParam2 = 140;
			*uParam3 = 70;
			break;
		
		case 97:
			*uParam1 = 156;
			*uParam2 = 141;
			*uParam3 = 113;
			break;
		
		case 89:
			*uParam1 = 145;
			*uParam2 = 115;
			*uParam3 = 71;
			break;
		
		case 105:
			*uParam1 = 98;
			*uParam2 = 68;
			*uParam3 = 40;
			break;
		
		case 100:
			*uParam1 = 124;
			*uParam2 = 27;
			*uParam3 = 68;
			break;
		
		case 99:
			*uParam1 = 114;
			*uParam2 = 42;
			*uParam3 = 63;
			break;
		
		case 136:
			*uParam1 = 246;
			*uParam2 = 151;
			*uParam3 = 153;
			break;
		
		case 49:
			*uParam1 = 32;
			*uParam2 = 32;
			*uParam3 = 44;
			break;
		
		case 146:
			*uParam1 = 26;
			*uParam2 = 1;
			*uParam3 = 23;
			break;
		
		default:
			*uParam1 = 255;
			*uParam2 = 255;
			*uParam3 = 255;
			break;
	}
}

void func_68(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (!func_10(&iVar0, 0, iParam1))
	{
		return;
	}
	iParam0 = iParam0;
	if (iParam3 && !func_46(bParam4, bParam8))
	{
		return;
	}
	if (func_73())
	{
		return;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return;
	}
	if (iParam7 == 0)
	{
		if (func_69(PLAYER::PLAYER_ID(), 0))
		{
			return;
		}
	}
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		{
			return;
		}
	}
	if (Global_24569.f_5326 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(2))
		{
			iVar1 = 0;
			while (iVar1 < Global_24569.f_5326)
			{
				if (Global_24569.f_5625[iVar1] != 402)
				{
					StringCopy(&(Global_24569.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24569.f_5625[iVar1], true), 64);
				}
				else if (Global_24569.f_5640[iVar1] != 32)
				{
					StringCopy(&(Global_24569.f_5328[iVar1 /*16*/]), PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(2, Global_24569.f_5640[iVar1], true), 64);
				}
				iVar1++;
			}
			Global_24569.f_5327 = 0;
		}
		if (!Global_24569.f_5327)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT((1f - (Global_24569.f_5684 / 100f)));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			iVar1 = 0;
			while (iVar1 < Global_24569.f_5326)
			{
				if (MISC::GET_HASH_KEY(&(Global_24569.f_5553[iVar1 /*4*/])) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
					func_28(&(Global_24569.f_5328[bVar1 /*16*/]));
					iVar2 = bVar1 + 1;
					while (iVar2 < 14 && MISC::GET_HASH_KEY(&(Global_24569.f_5553[iVar2 /*4*/])) == MISC::GET_HASH_KEY("PREV"))
					{
						func_28(&(Global_24569.f_5328[iVar2 /*16*/]));
						iVar2++;
					}
					if (Global_24569.f_5610[bVar1] == -1)
					{
						func_27(&(Global_24569.f_5553[bVar1 /*4*/]));
					}
					else
					{
						iVar3 = Global_24569.f_5610[bVar1];
						if (iParam2 >= 0)
						{
							iVar3 = iParam2;
						}
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24569.f_5553[bVar1 /*4*/]));
						if (bParam5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar3, 70);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(iVar3);
						}
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
					if (MISC::IS_PC_VERSION())
					{
						if (Global_24569.f_5625[bVar1] != 402 && BitTest(Global_24569.f_5655, bVar1))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24569.f_5625[bVar1]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(402);
						}
					}
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				bVar1++;
			}
			if (MISC::GET_HASH_KEY(&(Global_4521274.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_24569.f_5326);
				func_28(&Global_4521274);
				if (Global_4521274.f_20 == -1)
				{
					func_27(&(Global_4521274.f_16));
				}
				else
				{
					iVar4 = Global_24569.f_5610[bVar1];
					if (iParam2 >= 0)
					{
						iVar4 = iParam2;
					}
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iVar4, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iVar4);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
			if (Global_24569.f_5685)
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(true);
			}
			else
			{
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(false);
			}
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_24569.f_5327 = 1;
		}
		bVar1 = false;
		while (bVar1 < Global_24569.f_5326)
		{
			if (Global_24569.f_5610[bVar1] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_24569.f_5553[bVar1 /*4*/]));
					if (bParam5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
					}
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
			bVar1++;
		}
		if (Global_4521274.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_24569.f_6263[iVar0 /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(bVar1);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4521274.f_16));
				if (bParam5)
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				}
				else
				{
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				}
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
		if (bParam6)
		{
			if (!Global_24569.f_9244)
			{
				HUD::SET_HUD_COMPONENT_POSITION(15, 0f, -0.0375f);
				Global_24569.f_9244 = 1;
			}
		}
		else if (Global_24569.f_9244)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(15);
			Global_24569.f_9244 = 0;
		}
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		if (Global_24569.f_5658)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_24569.f_6263[iVar0 /*10*/], Global_24569.f_5656, Global_24569.f_5657, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_24569.f_6263[iVar0 /*10*/], 255, 255, 255, 255, 0);
		}
	}
}

bool func_69(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_72(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_70(-1, 0) == 8;
	}
	else
	{
		bVar0 = Global_1845298[iParam0 /*881*/].f_198 == 8;
	}
	if (iParam1 == 1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			bVar0 = PLAYER::GET_PLAYER_TEAM(iParam0) == 8;
		}
	}
	return bVar0;
}

int func_70(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_71();
	}
	if (Global_1575075[iVar1] == 1)
	{
		if (bParam1)
		{
		}
		iVar0 = 8;
	}
	else
	{
		iVar0 = Global_1574922[iVar1];
		if (bParam1)
		{
		}
	}
	return iVar0;
}

int func_71()
{
	return Global_1574928;
}

int func_72(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 < 0)
	{
		return 0;
	}
	if (iVar0 >= 32)
	{
		return 0;
	}
	return 1;
}

int func_73()
{
	struct<3> Var0;
	
	if (Global_21649.f_1 > 3)
	{
		return 1;
	}
	if (func_74())
	{
		Var0 = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&Var0);
		if (Global_21594 == 0)
		{
			if (Var0.f_1 > -119f)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else if (Var0.f_1 > -101f)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_74()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0)
	{
		return 1;
	}
	return 0;
}

void func_75(int iParam0, bool bParam1, int* iParam2, int* iParam3, int* iParam4, int* iParam5)
{
	HUD::GET_HUD_COLOUR(1, iParam2, iParam3, iParam4, iParam5);
	*iParam5 = 255;
	switch (iParam0)
	{
		case 29:
			*iParam2 = 194;
			*iParam3 = 80;
			*iParam4 = 80;
			break;
		
		case 16:
		case 4:
		case 17:
		case 27:
		case 28:
		case 36:
		case 35:
		case 52:
		case 51:
		case 43:
		case 37:
		case 38:
		case 58:
		case 40:
		case 41:
		case 39:
		case 45:
		case 44:
		case 48:
		case 49:
		case 50:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 55:
			if (bParam1)
			{
				*iParam2 = 0;
				*iParam3 = 0;
				*iParam4 = 0;
			}
			break;
		
		case 59:
			*iParam5 = 100;
			break;
		
		case 67:
			*iParam5 = 100;
			break;
		
		case 60:
			HUD::GET_HUD_COLOUR(24, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
		
		case 7:
			HUD::GET_HUD_COLOUR(6, iParam2, iParam3, iParam4, iParam5);
			*iParam5 = 255;
			break;
	}
}

void func_76(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	func_66(fParam0, ((Global_24566 + Global_24568) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_77(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_41(fParam0), fParam1, 0);
}

float func_78(char* sParam0, int iParam1, int iParam2)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_80();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return func_62(1);
}

void func_79(float fParam0, float fParam1, int iParam2)
{
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_41(fParam0), fParam1, iParam2);
}

void func_80()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	HUD::GET_HUD_COLOUR(1, &iVar0, &iVar1, &iVar2, &iVar3);
	if (Global_24569.f_9219)
	{
		iVar0 = Global_24569.f_9215;
		iVar1 = Global_24569.f_9216;
		iVar2 = Global_24569.f_9217;
		iVar3 = Global_24569.f_9218;
	}
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(iVar0, iVar1, iVar2, iVar3);
	func_66((Global_24566 + 0.0046875f), ((Global_24566 + Global_24568) - 0.0046875f));
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
}

void func_81(char* sParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12)
{
	GRAPHICS::DRAW_SPRITE(sParam0, sParam1, func_41(fParam2), fParam3, func_41(fParam4), fParam5, fParam6, iParam7, iParam8, iParam9, iParam10, bParam11, iParam12);
}

var func_82(int iParam0, bool bParam1)
{
	char* sVar0[2];
	var uVar3;
	struct<13> Var19;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_7744[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_24569.f_7744[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var19 = { func_84(PLAYER::PLAYER_ID()) };
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var19, &uVar3))
			{
				return func_83(&uVar3);
			}
		}
		else
		{
			return func_83(&(Global_24569.f_7744[iParam0 /*16*/]));
		}
	}
	switch (iParam0)
	{
		case 3:
			sVar0[0] = "MP_hostCrown";
			sVar0[1] = "MP_hostCrown";
			break;
		
		case 22:
			sVar0[0] = "MP_SpecItem_Coke";
			sVar0[1] = "MP_SpecItem_Coke";
			break;
		
		case 23:
			sVar0[0] = "MP_SpecItem_Heroin";
			sVar0[1] = "MP_SpecItem_Heroin";
			break;
		
		case 24:
			sVar0[0] = "MP_SpecItem_Weed";
			sVar0[1] = "MP_SpecItem_Weed";
			break;
		
		case 25:
			sVar0[0] = "MP_SpecItem_Meth";
			sVar0[1] = "MP_SpecItem_Meth";
			break;
		
		case 26:
			sVar0[0] = "MP_SpecItem_Cash";
			sVar0[1] = "MP_SpecItem_Cash";
			break;
		
		case 1:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 2:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 4:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 7:
		case 6:
			sVar0[0] = "Shop_Box_CrossB";
			sVar0[1] = "Shop_Box_Cross";
			break;
		
		case 8:
			sVar0[0] = "Shop_Box_BlankB";
			sVar0[1] = "Shop_Box_Blank";
			break;
		
		case 5:
			sVar0[0] = "Shop_Box_TickB";
			sVar0[1] = "Shop_Box_Tick";
			break;
		
		case 9:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 10:
			sVar0[0] = "Shop_Clothing_Icon_B";
			sVar0[1] = "Shop_Clothing_Icon_A";
			break;
		
		case 11:
			sVar0[0] = "Shop_GunClub_Icon_B";
			sVar0[1] = "Shop_GunClub_Icon_A";
			break;
		
		case 18:
			sVar0[0] = "Shop_Ammo_Icon_B";
			sVar0[1] = "Shop_Ammo_Icon_A";
			break;
		
		case 19:
			sVar0[0] = "Shop_Armour_Icon_B";
			sVar0[1] = "Shop_Armour_Icon_A";
			break;
		
		case 20:
			sVar0[0] = "Shop_Health_Icon_B";
			sVar0[1] = "Shop_Health_Icon_A";
			break;
		
		case 21:
			sVar0[0] = "Shop_MakeUp_Icon_B";
			sVar0[1] = "Shop_MakeUp_Icon_A";
			break;
		
		case 12:
			sVar0[0] = "Shop_Tattoos_Icon_B";
			sVar0[1] = "Shop_Tattoos_Icon_A";
			break;
		
		case 13:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 14:
			sVar0[0] = "Shop_Garage_Bike_Icon_B";
			sVar0[1] = "Shop_Garage_Bike_Icon_A";
			break;
		
		case 15:
			sVar0[0] = "Shop_Barber_Icon_B";
			sVar0[1] = "Shop_Barber_Icon_A";
			break;
		
		case 16:
			sVar0[0] = "shop_Lock";
			sVar0[1] = "shop_Lock";
			break;
		
		case 17:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 27:
			sVar0[0] = "arrowleft";
			sVar0[1] = "arrowleft";
			break;
		
		case 28:
			sVar0[0] = "arrowright";
			sVar0[1] = "arrowright";
			break;
		
		case 29:
			sVar0[0] = "MP_AlertTriangle";
			sVar0[1] = "MP_AlertTriangle";
			break;
		
		case 30:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 32:
			sVar0[0] = "Shop_Michael_Icon_B";
			sVar0[1] = "Shop_Michael_Icon_A";
			break;
		
		case 33:
			sVar0[0] = "Shop_Franklin_Icon_B";
			sVar0[1] = "Shop_Franklin_Icon_A";
			break;
		
		case 34:
			sVar0[0] = "Shop_Trevor_Icon_B";
			sVar0[1] = "Shop_Trevor_Icon_A";
			break;
		
		case 56:
			sVar0[0] = "SaleIcon";
			sVar0[1] = "SaleIcon";
			break;
		
		case 57:
			sVar0[0] = "Shop_Tick_Icon";
			sVar0[1] = "Shop_Tick_Icon";
			break;
		
		case 59:
			sVar0[0] = "shop_NEW_Star";
			sVar0[1] = "shop_NEW_Star";
			break;
		
		case 60:
			sVar0[0] = "Shop_Lock_Arena";
			sVar0[1] = "Shop_Lock_Arena";
			break;
		
		case 61:
			sVar0[0] = "Card_Suit_Clubs";
			sVar0[1] = "Card_Suit_Clubs";
			break;
		
		case 62:
			sVar0[0] = "Card_Suit_Hearts";
			sVar0[1] = "Card_Suit_Hearts";
			break;
		
		case 63:
			sVar0[0] = "Card_Suit_Spades";
			sVar0[1] = "Card_Suit_Spades";
			break;
		
		case 64:
			sVar0[0] = "Card_Suit_Diamonds";
			sVar0[1] = "Card_Suit_Diamonds";
			break;
		
		case 65:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 67:
			sVar0[0] = "Shop_Art_Icon_B";
			sVar0[1] = "Shop_Art_Icon_A";
			break;
		
		case 66:
			sVar0[0] = "Shop_Chips_A";
			sVar0[1] = "Shop_Chips_B";
			break;
		
		case 68:
			sVar0[0] = "Shop_Garage_Podium_Icon_B";
			sVar0[1] = "Shop_Garage_Podium_Icon_A";
			break;
		
		case 69:
			sVar0[0] = "Shop_Garage_Icon_B";
			sVar0[1] = "Shop_Garage_Icon_A";
			break;
		
		case 0:
			sVar0[0] = "";
			sVar0[1] = "";
			break;
	}
	if (bParam1)
	{
		return sVar0[0];
	}
	return sVar0[1];
}

var func_83(var uParam0)
{
	return uParam0;
}

struct<13> func_84(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

char* func_85(int iParam0)
{
	var uVar0;
	struct<13> Var16;
	
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_6623[iParam0 /*16*/])))
	{
		if (MISC::GET_HASH_KEY(&(Global_24569.f_6623[iParam0 /*16*/])) == joaat("crew_logo"))
		{
			Var16 = { func_84(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
			return func_83(&uVar0);
		}
		else
		{
			return func_83(&(Global_24569.f_6623[iParam0 /*16*/]));
		}
	}
	if (iParam0 == 56)
	{
		return "MPShopSale";
	}
	return "CommonMenu";
}

void func_86(bool bParam0, int* iParam1, int* iParam2, float fParam3)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(iParam1, iParam2);
		return;
	}
	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(iParam1, iParam2);
	fVar0 = SYSTEM::TO_FLOAT(*iParam1);
	fVar1 = SYSTEM::TO_FLOAT(*iParam2);
	fVar2 = GRAPHICS::GET_ASPECT_RATIO(false);
	if (func_87(*iParam1, *iParam2))
	{
		*fParam3 = 1f;
		*iParam1 = SYSTEM::ROUND((fVar1 * fVar2));
		*iParam2 = SYSTEM::ROUND(fVar1);
		return;
	}
	*fParam3 = ((fVar0 / fVar1) / fVar2);
	*iParam1 = SYSTEM::ROUND((fVar0 / *fParam3));
	*iParam2 = SYSTEM::ROUND((fVar1 / *fParam3));
}

bool func_87(int iParam0, int iParam1)
{
	return (SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1)) > 3.5f;
}

int func_88(int iParam0, bool bParam1, bool bParam2, float fParam3, float fParam4, bool bParam5)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	struct<3> Var35;
	float fVar38;
	
	StringCopy(&cVar0, func_85(iParam0), 64);
	StringCopy(&cVar16, func_82(iParam0, bParam1), 64);
	if (MISC::GET_HASH_KEY(&cVar16) != 0)
	{
		fVar34 = 1f;
		func_86(bParam5, &iVar32, &iVar33, &fVar34);
		Var35 = { GRAPHICS::GET_TEXTURE_RESOLUTION(&cVar0, &cVar16) };
		fVar38 = (func_89(iParam0) / fVar34);
		Var35 = { Var35 * Vector(fVar38, fVar38, fVar38) };
		if (!bParam2)
		{
			Var35.f_0 = (Var35.f_0 - 2f);
			Var35.f_1 = (Var35.f_1 - 2f);
		}
		if (iParam0 == 31)
		{
			Var35.f_0 = 288f;
			Var35.f_1 = 106f;
		}
		if (iParam0 == 30 && MISC::GET_HASH_KEY(&(Global_24569.f_7744[30 /*16*/])) == joaat("crew_logo"))
		{
			Var35.f_0 = 106f;
			Var35.f_1 = 106f;
		}
		*fParam3 = ((Var35.f_0 / IntToFloat(iVar32)) * IntToFloat((iVar32 / iVar33)));
		*fParam4 = (((Var35.f_1 / IntToFloat(iVar33)) / (Var35.f_0 / IntToFloat(iVar32))) * *fParam3);
		if (!bParam5)
		{
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 31)
			{
				*fParam3 = (*fParam3 * 1.33f);
			}
		}
		if (iParam0 == 30)
		{
			if (*fParam3 > Global_24568)
			{
				*fParam4 = (*fParam4 * (Global_24568 / *fParam3));
				*fParam3 = Global_24568;
			}
		}
		return 1;
	}
	return 0;
}

float func_89(int iParam0)
{
	switch (iParam0)
	{
		case 34:
		case 4:
		case 12:
		case 32:
		case 21:
		case 16:
		case 11:
		case 13:
		case 14:
		case 33:
		case 10:
		case 5:
		case 6:
		case 7:
		case 8:
		case 15:
		case 19:
		case 20:
		case 18:
		case 29:
		case 27:
		case 28:
		case 57:
		case 61:
		case 62:
		case 63:
		case 64:
		case 65:
		case 67:
		case 69:
		case 68:
			return 0.5f;
			break;
		
		case 66:
			return 0.8f;
			break;
	}
	return 1f;
}

void func_90()
{
	Global_1925942 = 1;
}

bool func_91()
{
	return Global_1925942;
}

void func_92(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	StringCopy(&(Global_24569.f_5241), sParam0, 24);
	Global_24569.f_5319 = 0;
	Global_24569.f_5320 = 0;
	Global_24569.f_5321 = 0;
	Global_24569.f_5322 = 0;
	Global_24569.f_5323 = iParam1;
	Global_24569.f_5324 = MISC::GET_GAME_TIMER();
	Global_24569.f_5325 = iParam2;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24569.f_5253[iVar0] = 0;
		iVar0++;
	}
}

bool func_93(var uParam0, int iParam1)
{
	return BitTest(uParam0->f_130[iParam1], 10);
}

void func_94(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	var uVar4;
	
	if (Global_24569.f_5821 > iParam0)
	{
		return;
	}
	if (Global_24569.f_5821 >= 128)
	{
		return;
	}
	if (Global_24569.f_5827 >= 256)
	{
		return;
	}
	if (Global_24569.f_6346 < Global_24569.f_6344)
	{
		return;
	}
	if (Global_24569.f_5821 != iParam0)
	{
		Global_24569.f_5821 = iParam0;
		Global_24569.f_5822 = 0;
	}
	iVar0 = Global_24569.f_5659[Global_24569.f_5822];
	if (iVar0 != 4)
	{
		while (Global_24569.f_5822 < 4 && iVar0 != 4)
		{
			Global_24569.f_5822++;
			iVar0 = Global_24569.f_5659[Global_24569.f_5822];
		}
		if (iVar0 != 4)
		{
			return;
		}
	}
	Global_24569.f_4984[Global_24569.f_5827] = iParam1;
	Global_24569.f_5827++;
	if (iParam1 != 0)
	{
		func_88(iParam1, 1, 0, &fVar1, &fVar2, 0);
		if (Global_24569.f_5678[Global_24569.f_5822])
		{
			func_88(27, 1, 0, &fVar3, &uVar4, 0);
			fVar1 = (fVar1 + (fVar3 * 2f));
		}
		if (fVar1 > Global_24569.f_5671[Global_24569.f_5822])
		{
			Global_24569.f_5671[Global_24569.f_5822] = fVar1;
		}
		if (bParam2)
		{
			if (fVar2 > Global_24569.f_6348[iParam0])
			{
				Global_24569.f_6348[iParam0] = fVar2;
			}
		}
	}
	MISC::SET_BIT(&(Global_24569.f_5692[iParam0]), Global_24569.f_5822);
	Global_24569.f_5822++;
	Global_24569.f_6347 = 4;
}

bool func_95(int iParam0)
{
	return func_96(&(Local_889.f_2), iParam0);
}

var func_96(var uParam0, int iParam1)
{
	return BitTest((*uParam0)[(iParam1 / 32)], iParam1 & 31);
}

void func_97(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;
	float fVar4;
	
	if (Global_24569.f_5821 > iParam0)
	{
		return;
	}
	if (Global_24569.f_5821 >= 128)
	{
		return;
	}
	if (Global_24569.f_5823 >= 256)
	{
		return;
	}
	if (Global_24569.f_6346 < Global_24569.f_6344)
	{
		return;
	}
	if (Global_24569.f_5821 != iParam0)
	{
		Global_24569.f_5821 = iParam0;
		Global_24569.f_5822 = 0;
	}
	iVar0 = Global_24569.f_5659[Global_24569.f_5822];
	if (iVar0 != 1)
	{
		while (Global_24569.f_5822 < 4 && iVar0 != 1)
		{
			Global_24569.f_5822++;
			iVar0 = Global_24569.f_5659[Global_24569.f_5822];
		}
		if (iVar0 != 1)
		{
			return;
		}
	}
	StringCopy(&(Global_24569.f_79[Global_24569.f_5823 /*6*/]), sParam1, 24);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1))
	{
	}
	Global_24569.f_1616[Global_24569.f_5823] = bParam3;
	Global_24569.f_1873[Global_24569.f_5823] = iParam4;
	Global_24569.f_2130[Global_24569.f_5823] = iParam6;
	Global_24569.f_5823++;
	if (!bParam3)
	{
		func_100(Global_24569.f_5821, 1);
	}
	else
	{
		func_100(Global_24569.f_5821, 0);
	}
	if (iParam2 == 0)
	{
		fVar1 = func_99(&(Global_24569.f_79[Global_24569.f_5823 /*6*/]));
		if (Global_24569.f_5678[Global_24569.f_5822])
		{
			func_88(27, 1, 0, &fVar2, &uVar3, 0);
			fVar1 = (fVar1 + (fVar2 * 2f));
		}
		if (fVar1 > Global_24569.f_5671[Global_24569.f_5822])
		{
			Global_24569.f_5671[Global_24569.f_5822] = fVar1;
		}
	}
	if (bParam5)
	{
		if (iParam2 == 0)
		{
			fVar4 = func_98(&(Global_24569.f_79[Global_24569.f_5823 /*6*/]));
			if (fVar4 > Global_24569.f_6348[iParam0])
			{
				Global_24569.f_6348[iParam0] = fVar4;
			}
		}
	}
	MISC::SET_BIT(&(Global_24569.f_5692[iParam0]), Global_24569.f_5822);
	Global_24569.f_5822++;
	Global_24569.f_6347 = 1;
	Global_24569.f_6345 = (Global_24569.f_5823 - 1);
	Global_24569.f_6346 = 0;
	Global_24569.f_6344 = iParam2;
}

float func_98(char* sParam0)
{
	if (!HUD::DOES_TEXT_LABEL_EXIST(sParam0))
	{
	}
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_99(char* sParam0)
{
	if (!MISC::IS_STRING_NULL(sParam0))
	{
		if (MISC::GET_HASH_KEY(sParam0) == 0)
		{
			return 0f;
		}
	}
	else
	{
		return 0f;
	}
	func_65(0, 1, 0, 0, 0, 0, 0);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return func_62(1);
}

void func_100(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iParam0) / 32f));
	if (bParam1)
	{
		MISC::SET_BIT(&(Global_24569.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_24569.f_6618[iVar0]), (iParam0 - iVar0 * 32));
	}
}

bool func_101(int iParam0)
{
	if (BitTest(Local_743.f_2.f_130[iParam0], 7))
	{
		return 0;
	}
	return !func_102(&(Local_743.f_2), iParam0);
}

bool func_102(var uParam0, int iParam1)
{
	return !BitTest(uParam0->f_130[iParam1], 1);
}

int func_103(int iParam0)
{
	if (BitTest(Local_743.f_2.f_130[iParam0], 7))
	{
		if (!BitTest(Local_743.f_2.f_130[iParam0], 2))
		{
			return 1;
		}
	}
	if (!func_104(&(Local_743.f_2), iParam0) && !func_102(&(Local_743.f_2), iParam0))
	{
		return 1;
	}
	return func_102(&(Local_743.f_2), iParam0);
}

bool func_104(var uParam0, int iParam1)
{
	return !BitTest(uParam0->f_130[iParam1], 11);
}

void func_105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24569.f_5678[0] = iParam0;
	Global_24569.f_5678[1] = iParam1;
	Global_24569.f_5678[2] = iParam2;
	Global_24569.f_5678[3] = iParam3;
	Global_24569.f_5678[4] = iParam4;
}

void func_106(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24569.f_5686[0] = iParam0;
	Global_24569.f_5686[1] = iParam1;
	Global_24569.f_5686[2] = iParam2;
	Global_24569.f_5686[3] = iParam3;
	Global_24569.f_5686[4] = iParam4;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	Global_24569.f_5659[0] = iParam0;
	Global_24569.f_5659[1] = iParam1;
	Global_24569.f_5659[2] = iParam2;
	Global_24569.f_5659[3] = iParam3;
	Global_24569.f_5659[4] = iParam4;
	Global_24569.f_5829 = 0;
	if (iParam0 != 0)
	{
		Global_24569.f_5829++;
	}
	if (iParam1 != 0)
	{
		Global_24569.f_5829++;
	}
	if (iParam2 != 0)
	{
		Global_24569.f_5829++;
	}
	if (iParam3 != 0)
	{
		Global_24569.f_5829++;
	}
	if (iParam4 != 0)
	{
		Global_24569.f_5829++;
	}
}

void func_108(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_24569.f_9229 = iParam4;
	Global_24569.f_9225 = uParam0;
	Global_24569.f_9226 = uParam1;
	Global_24569.f_9227 = uParam2;
	Global_24569.f_9228 = uParam3;
}

void func_109(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_24569.f_9214 = iParam4;
	Global_24569.f_9210 = uParam0;
	Global_24569.f_9211 = uParam1;
	Global_24569.f_9212 = uParam2;
	Global_24569.f_9213 = uParam3;
}

void func_110(char* sParam0)
{
	int iVar0;
	
	StringCopy(&(Global_24569.f_1), sParam0, 16);
	Global_24569.f_74 = 0;
	Global_24569.f_75 = 0;
	Global_24569.f_76 = 0;
	Global_24569.f_77 = 0;
	Global_24569.f_78 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_24569.f_5[iVar0] = 0;
		iVar0++;
	}
}

void func_111(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	Global_24569.f_9219 = iParam4;
	Global_24569.f_9215 = uParam0;
	Global_24569.f_9216 = uParam1;
	Global_24569.f_9217 = uParam2;
	Global_24569.f_9218 = uParam3;
}

void func_112()
{
	int iVar0;
	var uVar1;
	int iVar5;
	
	iVar0 = Global_24569.f_6342;
	if (iVar0 <= -1 || iVar0 >= 12)
	{
		return;
	}
	if ((func_13(2) && func_102(&(Local_743.f_2), iVar0)) && !BitTest(Local_743.f_2.f_130[iVar0], 8))
	{
		AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET");
		if (func_95(iVar0))
		{
			func_121(iVar0);
		}
		else
		{
			func_120(iVar0);
		}
		if (BitTest(Local_743.f_2.f_130[iVar0], 0))
		{
			func_17(0);
		}
		if (BitTest(Local_743.f_2.f_130[iVar0], 6))
		{
			func_17(6);
		}
	}
	if (func_13(3) && BitTest(Local_743.f_2.f_130[iVar0], 9))
	{
		if (Local_38.f_2 != -1)
		{
			iVar5 = Local_743.f_2.f_117[Local_38.f_2];
			if (iVar5 > -1 && iVar5 < 40)
			{
				MemCopy(&uVar1, {func_36(iVar5)}, 4);
			}
		}
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
		{
			AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET");
			if (func_119(iVar0))
			{
				func_117(iVar0);
			}
			else
			{
				func_115(iVar0);
			}
			if (BitTest(Local_743.f_2.f_130[iVar0], 6))
			{
				func_17(0);
				func_17(6);
			}
		}
	}
	func_113();
}

void func_113()
{
	func_114(2);
	func_114(3);
}

void func_114(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_38.f_1), iParam0);
}

void func_115(int iParam0)
{
	func_116(&(Local_889.f_4), iParam0);
}

void func_116(var uParam0, int iParam1)
{
	MISC::SET_BIT(uParam0[(iParam1 / 32)], iParam1 & 31);
}

void func_117(int iParam0)
{
	func_118(&(Local_889.f_4), iParam0);
}

void func_118(var uParam0, int iParam1)
{
	MISC::CLEAR_BIT(uParam0[(iParam1 / 32)], iParam1 & 31);
}

bool func_119(int iParam0)
{
	return func_96(&(Local_889.f_4), iParam0);
}

void func_120(int iParam0)
{
	func_116(&(Local_889.f_2), iParam0);
}

void func_121(int iParam0)
{
	func_118(&(Local_889.f_2), iParam0);
}

void func_122()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return;
	}
	PAD::DISABLE_CONTROL_ACTION(0, 188, true);
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 188) || PAD::IS_CONTROL_JUST_PRESSED(2, 188)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 241) && !BitTest(Local_743.f_145, 0)))
	{
		iVar0 = (iVar0 - 1);
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 187, true);
	if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 187) || PAD::IS_CONTROL_JUST_PRESSED(2, 187)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 242) && !BitTest(Local_743.f_145, 0)))
	{
		iVar0++;
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (iVar0 != 0)
	{
		func_12(&(Local_38.f_4));
		if (Local_38.f_2 <= -1)
		{
			Local_38.f_2 = 0;
		}
		if (Local_38.f_2 >= 12)
		{
			Local_38.f_2 = 0;
		}
		while (!func_103(Local_38.f_2) || iVar1 == 0)
		{
			func_126(iVar0);
			iVar1++;
			if (iVar1 >= 12)
			{
			}
		else
		{
			}
		}
	}
	func_125(Local_38.f_2, 1, 1);
	PAD::DISABLE_CONTROL_ACTION(0, 201, true);
	if (((PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_RELEASED(2, 237)) && Global_4521350 != Local_38.f_2) && !BitTest(Local_743.f_145, 0))
	{
		if (Global_4521350 > -1 && Global_4521350 < Local_38.f_3)
		{
			Local_38.f_2 = Global_4521350;
			AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("SELECT", "HUD_FRONTEND_DEFAULT_SOUNDSET");
		}
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 201) || PAD::IS_CONTROL_JUST_PRESSED(2, 201)) || ((PAD::IS_USING_KEYBOARD_AND_MOUSE(2) && PAD::IS_CONTROL_JUST_RELEASED(2, 237)) && Global_4521350 == Local_38.f_2))
	{
		func_17(2);
	}
	else if ((PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 51) || PAD::IS_CONTROL_JUST_PRESSED(2, 51)) && !PAD::IS_CONTROL_PRESSED(0, 37))
	{
		func_17(3);
	}
	PAD::DISABLE_CONTROL_ACTION(2, 244, true);
	PAD::DISABLE_CONTROL_ACTION(2, 199, true);
	PAD::DISABLE_CONTROL_ACTION(2, 200, true);
	if (!BitTest(Local_743.f_145, 0))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 24, true);
		PAD::DISABLE_CONTROL_ACTION(0, 294, true);
		PAD::DISABLE_CONTROL_ACTION(0, 25, true);
		PAD::DISABLE_CONTROL_ACTION(0, 69, true);
		PAD::DISABLE_CONTROL_ACTION(0, 70, true);
		PAD::DISABLE_CONTROL_ACTION(0, 68, true);
		PAD::DISABLE_CONTROL_ACTION(0, 301, true);
		PAD::DISABLE_CONTROL_ACTION(0, 142, true);
		PAD::DISABLE_CONTROL_ACTION(0, 141, true);
		PAD::DISABLE_CONTROL_ACTION(0, 143, true);
		PAD::DISABLE_CONTROL_ACTION(0, 37, true);
		PAD::DISABLE_CONTROL_ACTION(0, 22, true);
	}
	PAD::DISABLE_CONTROL_ACTION(0, 300, true);
	PAD::DISABLE_CONTROL_ACTION(0, 140, true);
	PAD::DISABLE_CONTROL_ACTION(0, 202, true);
	PAD::DISABLE_CONTROL_ACTION(0, 80, true);
	PAD::DISABLE_CONTROL_ACTION(0, 114, true);
	PAD::DISABLE_CONTROL_ACTION(0, 368, true);
	PAD::DISABLE_CONTROL_ACTION(0, 76, true);
	PAD::DISABLE_CONTROL_ACTION(0, 102, true);
	PAD::DISABLE_CONTROL_ACTION(0, 390, true);
	PAD::DISABLE_CONTROL_ACTION(0, 55, true);
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		if (BitTest(Local_743.f_2, 1))
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238) && (!BitTest(Local_743.f_145, 0) || BitTest(Local_743.f_2, 1)))
			{
				bVar2 = true;
			}
		}
		else if ((PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 202)) || (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(2, 238) && !BitTest(Local_743.f_145, 0)))
		{
			bVar2 = true;
		}
	}
	else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2, 202) || PAD::IS_CONTROL_JUST_RELEASED(2, 202))
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		func_17(0);
		if (BitTest(Local_743.f_2, 0))
		{
			AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("CANCEL", "HUD_FRONTEND_DEFAULT_SOUNDSET");
		}
		else
		{
			AUDIO::PLAY_DEFERRED_SOUND_FRONTEND("BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET");
		}
	}
	if (!BitTest(Local_743.f_145, 0))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
		{
			func_123(0, &uLocal_896);
		}
	}
}

int func_123(bool bParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	
	if (bParam0)
	{
		func_124(1, -1, 1);
		if (PAD::IS_DISABLED_CONTROL_PRESSED(2, 237))
		{
			if (Global_4521344 < 1f)
			{
				return 1;
			}
		}
	}
	else
	{
		func_124(0, -1, 1);
		if (*uParam1)
		{
			if (((Global_4521344 > (1f - 0.05f) || Global_4521344 < 0.05f) || Global_4521345 > (1f - 0.03f)) || Global_4521345 < 0.03f)
			{
				return 0;
			}
			else
			{
				*uParam1 = 0;
			}
		}
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				return 0;
			}
		}
		if (Global_4521350 == -1 || Global_4521350 == -4)
		{
			if (Global_4521344 > (1f - (0.05f * 0.75f)))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(7);
				fVar0 = (0.05f - (1f - Global_4521344));
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 - (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4521344 < (0.05f * 0.75f))
			{
				HUD::SET_MOUSE_CURSOR_STYLE(6);
				fVar0 = (0.05f - Global_4521344);
				if (fVar0 > 0.05f)
				{
					fVar0 = 0.05f;
				}
				fVar1 = CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING();
				fVar1 = (fVar1 + (70f * fVar0));
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fVar1);
			}
			else if (Global_4521345 > (1f - (0.03f * 0.75f)))
			{
			}
			else if (Global_4521345 < (0.03f * 0.75f))
			{
			}
		}
	}
	return 0;
}

int func_124(int iParam0, int iParam1, bool bParam2)
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(2))
	{
		return 0;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
	{
		return 0;
	}
	if (bParam2)
	{
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();
	}
	if (Global_4521350 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
		if (iParam0 && PAD::IS_CONTROL_PRESSED(2, 237))
		{
			return 1;
		}
		else
		{
			Global_4521350 = -1;
			return 0;
		}
	}
	if (((Global_4521350 > -1 || Global_4521350 == -3) || Global_4521350 == -2) || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}
	if (Global_4521350 == -1 && iParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(2, 237))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4521350 = -6;
			return 1;
		}
		else
		{
			HUD::SET_MOUSE_CURSOR_STYLE(3);
			return 0;
		}
	}
	HUD::SET_MOUSE_CURSOR_STYLE(1);
	return 0;
}

void func_125(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	Global_24569.f_6342 = iParam0;
	Global_24569.f_6477 = iParam2;
	if (Global_24569.f_6342 < Global_24569.f_6341)
	{
		Global_24569.f_6341 = Global_24569.f_6342;
	}
	else if ((Global_24569.f_6332 && Global_24569.f_6342 > Global_24569.f_6343) || (!Global_24569.f_6332 && Global_24569.f_6342 >= (Global_24569.f_6341 + Global_24569.f_5828)))
	{
		iVar0 = Global_24569.f_6341;
		while (iVar0 <= Global_24569.f_6342)
		{
			if (iVar0 >= 0 && iVar0 < 127)
			{
				if (Global_24569.f_5692[iVar0] != 0)
				{
					iVar1++;
				}
			}
			iVar0++;
		}
		while (iVar1 > Global_24569.f_5828 && Global_24569.f_6341 < 128)
		{
			Global_24569.f_6341++;
			iVar1 = 0;
			iVar0 = Global_24569.f_6341;
			while (iVar0 <= Global_24569.f_6342)
			{
				if (iVar0 >= 0 && iVar0 < 127)
				{
					if (Global_24569.f_5692[iVar0] != 0)
					{
						iVar1++;
					}
				}
				iVar0++;
			}
		}
	}
	Global_24569.f_6331 = 0;
	Global_24569.f_6332 = 0;
	if (bParam1)
	{
		StringCopy(&(Global_24569.f_5241), "", 24);
		StringCopy(&(Global_4521274.f_21), "", 16);
	}
}

void func_126(int iParam0)
{
	Local_38.f_2 = (Local_38.f_2 + iParam0);
	if (Local_38.f_2 >= Local_38.f_3 && iParam0 > 0)
	{
		Local_38.f_2 = 0;
		iParam0 = 1;
	}
	if (Local_38.f_2 < 0 && iParam0 < 0)
	{
		Local_38.f_2 = (Local_38.f_3 - 1);
	}
}

void func_127()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Local_743.f_0) == 0 || Local_743.f_0 != Global_1925936)
	{
		func_17(5);
	}
}

void func_128(int iParam0)
{
	MISC::CLEAR_BIT(&(Global_1925226.f_6), iParam0);
}

bool func_129(char* sParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (!func_10(&iVar0, 1, iParam1))
	{
		return 0;
	}
	bVar1 = true;
	StringCopy(&(Global_24569.f_6238[iVar0 /*4*/]), sParam0, 16);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_24569.f_6238[iVar0 /*4*/])))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&(Global_24569.f_6238[iVar0 /*4*/]), 9);
		Global_24569.f_6231[iVar0] = 1;
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&(Global_24569.f_6238[iVar0 /*4*/]), 9))
		{
			bVar1 = false;
		}
	}
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("Shared", true);
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("Shared"))
	{
		bVar1 = false;
	}
	Global_24569.f_6217[iVar0] = 1;
	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
	{
		bVar1 = false;
	}
	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_24569.f_6224[iVar0] = 1;
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
		{
			bVar1 = false;
		}
	}
	bVar2 = false;
	StringCopy(&(Global_24569.f_6263[iVar0 /*10*/].f_1), "instructional_buttons", 24);
	bVar2 = func_130(&(Global_24569.f_6263[iVar0 /*10*/]));
	if (!bVar1 || !bVar2)
	{
	}
	return (bVar1 && bVar2);
}

bool func_130(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				*uParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE(&(uParam0->f_1));
				uParam0->f_9 = 1;
				if (uParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
					{
						uParam0->f_8 = MISC::GET_GAME_TIMER();
						uParam0->f_9 = 2;
					}
				}
			}
			else
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_8 = MISC::GET_GAME_TIMER();
				uParam0->f_9 = 2;
			}
			break;
		
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*uParam0))
			{
				uParam0->f_9 = 0;
			}
			break;
	}
	return uParam0->f_9 == 2;
}

void func_131()
{
	Global_1925936.f_1 = Local_743.f_1;
	Global_1925936 = Local_743.f_0;
}

void func_132()
{
	int iVar0;
	int iVar1;
	
	if (func_10(&iVar0, 1, -1))
	{
		if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_24569.f_6263[iVar0 /*10*/]))
		{
			Global_24569.f_6263[iVar0 /*10*/].f_9 = 0;
			Global_24569.f_6263[iVar0 /*10*/] = 0;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 11)
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_743.f_2.f_6[iVar1 /*4*/])))
		{
			Local_38.f_3 = iVar1 + 1;
			if ((func_103(iVar1) && Local_38.f_2 == -1) && Global_1925939 == -1)
			{
				func_125(iVar1, 0, 1);
				Local_38.f_2 = iVar1;
			}
		}
		iVar1++;
	}
	if (Global_1925939 != -1 && func_103(Global_1925939))
	{
		Local_38.f_2 = Global_1925939;
		Global_1925939 = -1;
		func_125(Local_38.f_2, 0, 1);
	}
	func_131();
	func_134();
	Local_889.f_0 = Local_743.f_0;
	Local_889.f_1 = Local_743.f_1;
	func_133();
	func_18(1);
}

void func_133()
{
	Global_1925934 = -1;
	Global_1925934.f_1 = -1;
	Global_1925940 = 0;
}

void func_134()
{
	struct<5> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = 1;
	Var0.f_4 = 1;
	MISC::COPY_SCRIPT_STRUCT(&Global_1925226, &Var0, 7);
}

