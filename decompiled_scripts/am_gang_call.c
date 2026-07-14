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
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	float fLocal_40 = 0f;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	int iLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
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
	float fLocal_80 = 0f;
	struct<55> Local_81 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_136 = 0;
	struct<5> Local_137[32];
	int iLocal_298 = 0;
	int iLocal_299[3] = { 0, 0, 0 };
	int iLocal_303 = 0;
	bool bLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	struct<3> Local_308 = { 0, 0, 0 } ;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	bool bLocal_313 = 0;
	int iLocal_314 = 0;
	int* iLocal_315 = NULL;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 16;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 0;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 0;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	var uLocal_387 = 0;
	var uLocal_388 = 0;
	var uLocal_389 = 0;
	var uLocal_390 = 0;
	var uLocal_391 = 0;
	var uLocal_392 = 0;
	var uLocal_393 = 0;
	var uLocal_394 = 0;
	var uLocal_395 = 0;
	var uLocal_396 = 0;
	var uLocal_397 = 0;
	var uLocal_398 = 0;
	var uLocal_399 = 0;
	var uLocal_400 = 0;
	var uLocal_401 = 0;
	var uLocal_402 = 0;
	var uLocal_403 = 0;
	var uLocal_404 = 0;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 0;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	var uLocal_410 = 0;
	var uLocal_411 = 0;
	var uLocal_412 = 0;
	var uLocal_413 = 0;
	var uLocal_414 = 0;
	var uLocal_415 = 0;
	var uLocal_416 = 0;
	var uLocal_417 = 0;
	var uLocal_418 = 0;
	var uLocal_419 = 0;
	var uLocal_420 = 0;
	var uLocal_421 = 0;
	var uLocal_422 = 0;
	var uLocal_423 = 0;
	var uLocal_424 = 0;
	var uLocal_425 = 0;
	var uLocal_426 = 0;
	var uLocal_427 = 0;
	var uLocal_428 = 0;
	var uLocal_429 = 0;
	var uLocal_430 = 0;
	var uLocal_431 = 0;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 0;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 0;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 0;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 0;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	var uLocal_454 = 0;
	var uLocal_455 = 0;
	var uLocal_456 = 0;
	var uLocal_457 = 0;
	var uLocal_458 = 0;
	var uLocal_459 = 0;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 0;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	var uLocal_465 = 0;
	var uLocal_466 = 0;
	var uLocal_467 = 0;
	var uLocal_468 = 0;
	var uLocal_469 = 0;
	var uLocal_470 = 0;
	var uLocal_471 = 0;
	var uLocal_472 = 0;
	var uLocal_473 = 0;
	var uLocal_474 = 0;
	var uLocal_475 = 0;
	var uLocal_476 = 0;
	var uLocal_477 = 0;
	var uLocal_478 = 0;
	var uLocal_479 = 0;
	var uLocal_480 = 0;
	var uLocal_481 = 0;
	var uLocal_482 = 0;
	var uLocal_483 = 0;
	var uLocal_484 = 0;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	var uLocal_487 = 0;
	int iLocal_488 = 0;
	var uLocal_489[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_506 = 0;
	int iLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	struct<21> ScriptParam_0 = { 0, -1, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, -1 } ;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
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
	fLocal_40 = 80f;
	fLocal_41 = 140f;
	fLocal_42 = 180f;
	fLocal_45 = 0f;
	fLocal_49 = -0.0375f;
	fLocal_50 = 0.17f;
	iLocal_53 = 3;
	iLocal_57 = 1;
	iLocal_58 = 65;
	iLocal_59 = 49;
	iLocal_60 = 64;
	fLocal_80 = ((0.05f + 0.275f) - 0.01f);
	bLocal_304 = -1;
	iLocal_307 = -1;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_590(ScriptParam_0);
	}
	while (true)
	{
		func_589();
		if (func_582())
		{
			func_579();
		}
		iLocal_311 = NETWORK::GET_NETWORK_TIME();
		func_570();
		func_567();
		func_562();
		func_561();
		switch (func_560(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			case 0:
				if (func_559() == 1)
				{
					Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 1;
				}
				else if (func_559() == 4)
				{
					Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 1:
				if (func_559() == 1)
				{
					func_554();
				}
				else if (func_559() == 0)
				{
					func_548();
					Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
				}
				else if (func_559() == 4)
				{
					Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 3;
				}
				break;
			
			case 3:
				func_523();
				func_521(&(Local_81.f_54));
				if (func_520(&(Local_81.f_54)))
				{
					iVar0 = 0;
					while (iVar0 < func_519(bLocal_304))
					{
						func_523();
						iVar0++;
					}
					Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
				}
				break;
			
			case 2:
				Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 4;
			
			case 4:
				func_281();
				break;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_279();
			func_278();
			func_277();
			switch (func_559())
			{
				case 0:
					func_276();
					if (func_272())
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_306), false))
						{
							func_270(PLAYER::GET_PLAYER_PED(iLocal_306));
						}
						else
						{
							Local_81.f_36 = { Local_308 };
						}
						MISC::CLEAR_BIT(&(Local_81.f_2), 6);
						Local_81.f_0 = 1;
					}
					break;
				
				case 1:
					if (func_72())
					{
						func_71();
						func_70();
					}
					func_52();
					break;
				
				case 4:
					break;
			}
			func_1();
		}
	}
}

void func_1()
{
	int iVar0;
	
	if (func_559() < 4)
	{
		if (func_23())
		{
			iLocal_312 = 0;
			iVar0 = 0;
			while (iVar0 <= (func_519(bLocal_304) - 1))
			{
				func_2();
				iVar0++;
			}
			Local_81.f_0 = 4;
		}
	}
}

void func_2()
{
	var uVar0;
	struct<15> Var1;
	
	if (BitTest(Local_81.f_10[iLocal_312 /*7*/].f_2, 1) || BitTest(Local_81.f_10[iLocal_312 /*7*/].f_2, 6))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iLocal_312 /*7*/]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(Local_81.f_10[iLocal_312 /*7*/])))
			{
				if (ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_81.f_10[iLocal_312 /*7*/]), false))
				{
					if (!BitTest(Local_81.f_10[iLocal_312 /*7*/].f_2, 6))
					{
						if (bLocal_304 == 0)
						{
							Local_81.f_48++;
							if (!BitTest(Local_81.f_2, 12))
							{
								if (NETWORK::NETWORK_GET_DESTROYER_OF_NETWORK_ID(Local_81.f_10[iLocal_312 /*7*/], &uVar0) == iLocal_306)
								{
									MISC::SET_BIT(&(Local_81.f_2), 12);
								}
							}
							if ((Local_81.f_42 == iLocal_312 && !BitTest(Local_81.f_2, 5)) || Local_81.f_48 == func_519(bLocal_304))
							{
								Var1.f_3 = -578453253;
								Var1.f_11 = iLocal_306;
								Var1.f_12 = iLocal_305;
								if (func_519(bLocal_304) > 1)
								{
									Var1.f_13 = PLAYER::INT_TO_PLAYERINDEX(true);
								}
								else
								{
									Var1.f_13 = PLAYER::INT_TO_PLAYERINDEX(false);
								}
								Var1.f_4 = Local_81.f_43;
								func_21(Var1, func_22(1));
								if (Local_81.f_42 == iLocal_312)
								{
									MISC::SET_BIT(&(Local_81.f_2), 5);
								}
							}
							else if (!BitTest(Local_81.f_2, 5))
							{
								Var1.f_3 = 1590597533;
								Var1.f_12 = iLocal_305;
								func_21(Var1, func_22(1));
							}
						}
						MISC::SET_BIT(&(Local_81.f_10[iLocal_312 /*7*/].f_2), 6);
					}
				}
				else
				{
					if (!BitTest(Local_81.f_10[iLocal_312 /*7*/].f_2, 5))
					{
						MISC::SET_BIT(&iLocal_298, 2);
					}
					MISC::SET_BIT(&iLocal_298, true);
				}
			}
		}
	}
	else
	{
		MISC::SET_BIT(&iLocal_298, true);
		MISC::SET_BIT(&iLocal_298, 2);
	}
	func_3(iLocal_312);
	iLocal_312++;
	if (iLocal_312 >= func_519(bLocal_304))
	{
		iLocal_312 = 0;
		if (BitTest(Local_81.f_1, 0))
		{
			if (!BitTest(iLocal_298, 1))
			{
				if (!BitTest(Local_81.f_1, 1))
				{
					MISC::SET_BIT(&(Local_81.f_1), true);
				}
			}
			if (!BitTest(iLocal_298, 2))
			{
				if (!BitTest(Local_81.f_1, 9))
				{
					MISC::SET_BIT(&(Local_81.f_1), 9);
				}
			}
		}
		MISC::CLEAR_BIT(&iLocal_298, true);
		MISC::CLEAR_BIT(&iLocal_298, 2);
	}
}

void func_3(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iParam0 /*7*/]))
		{
			iVar0 = NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 9))
				{
					bVar2 = false;
					switch (Local_81.f_10[iParam0 /*7*/].f_1)
					{
						case 0:
							if (func_20(iVar0, 3))
							{
								bVar2 = true;
							}
							break;
					}
					if (bVar2)
					{
						MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 9);
					}
				}
				switch (Local_81.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 7))
							{
								if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) == 2 || (Global_2658293[iLocal_306 /*468*/].f_250 != -1 && func_19(Global_2658293[iLocal_306 /*468*/].f_250) == 4)) || BitTest(Global_1845298[iLocal_306 /*881*/].f_879, 14)) || func_17(iLocal_306, 0)) || func_9(iLocal_306))
								{
									Local_81.f_10[iParam0 /*7*/].f_3 = iLocal_311;
									MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 7);
								}
							}
							else if ((((TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2 && Global_2658293[iLocal_306 /*468*/].f_250 == -1) && !BitTest(Global_1845298[iLocal_306 /*881*/].f_879, 14)) && !func_17(iLocal_306, 0)) && !func_9(iLocal_306))
							{
								MISC::CLEAR_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 7);
							}
							else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_10[iParam0 /*7*/].f_3) > 10000 || TASK::GET_NAVMESH_ROUTE_RESULT(iVar0) != 2)
							{
								if (!BitTest(Local_81.f_2, 10))
								{
									MISC::SET_BIT(&(Local_81.f_2), 10);
									Local_81.f_39 = { func_8(iLocal_306) };
									iVar1 = 0;
									iVar1 = 0;
									while (iVar1 < func_519(bLocal_304))
									{
										func_7(iVar1, 3);
										iVar1++;
									}
								}
							}
							if (BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 3))
								{
									if (TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0) == 3f && !PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
									{
										MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 3);
									}
								}
							}
						}
						if (BitTest(Local_81.f_2, 1))
						{
							MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_306, 1, 1))
						{
							if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true), 25f) || !func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true), 625f))
								{
									MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 2);
								}
							}
							if (func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true)) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_306)))
							{
								func_7(iParam0, 2);
							}
						}
						break;
					
					case 2:
						if (BitTest(Local_81.f_2, 1))
						{
							MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 2);
							func_7(iParam0, 3);
						}
						else if (func_6(iLocal_306, 1, 1))
						{
							if (!func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true)) && !(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_306)))
							{
								func_7(iParam0, 1);
							}
						}
						break;
					
					case 3:
						if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 4))
							{
								if (PED::GET_PED_CONFIG_FLAG(iVar0, 118, true))
								{
									MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 4);
								}
							}
						}
						break;
					
					case 4:
						break;
					}
				}
			}
	}
}

int func_4(struct<3> Param0, struct<3> Param3)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (MISC::ABSF((Param3.f_2 - Param0.f_2)) < 2f)
	{
		Var0.f_0 = Param0.f_0;
		Var0.f_1 = Param0.f_1;
		Var3.f_0 = Param3.f_0;
		Var3.f_1 = Param3.f_1;
		if (func_5(Var0, Var3, 2f))
		{
			return 1;
		}
	}
	return 0;
}

int func_5(struct<3> Param0, struct<3> Param3, float fParam6)
{
	if (SYSTEM::VDIST2(Param0, Param3) < fParam6)
	{
		return 1;
	}
	return 0;
}

int func_6(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			if (bParam1)
			{
				if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
				{
					return 0;
				}
			}
			if (bParam2)
			{
				if (iVar0 == Global_2673273.f_3)
				{
					return Global_2673273.f_2;
				}
				else if (Global_2658293[iVar0 /*468*/] != 4)
				{
					return 0;
				}
			}
			return 1;
		}
	}
	return 0;
}

void func_7(int iParam0, int iParam1)
{
	Local_81.f_10[iParam0 /*7*/].f_5 = iParam1;
}

Vector3 func_8(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
			iVar1 = func_11(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
					{
						return func_10(iVar1);
					}
				}
			}
		}
	}
	return 0;
}

int func_10(int iParam0)
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3) && DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
		{
			iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
			if (BitTest(iVar0, 17))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_11(int iParam0)
{
	if (func_15(iParam0, 1))
	{
		return Global_2733190.f_3988.f_230[func_12(iParam0)];
	}
	return 0;
}

int func_12(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_1892925[iParam0 /*615*/].f_10;
	}
	return func_13();
}

int func_13()
{
	return -1;
}

int func_14(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
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

int func_15(int iParam0, bool bParam1)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (func_16(iParam0))
		{
			return 0;
		}
	}
	return func_14(Global_1892925[iParam0 /*615*/].f_10);
}

int func_16(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_14(Global_1892925[iParam0 /*615*/].f_10))
		{
			return Global_1892925[iParam0 /*615*/].f_10 == iParam0;
		}
	}
	return 0;
}

int func_17(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (func_6(iParam0, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, bParam1))
		{
			if (func_18(PED::GET_VEHICLE_PED_IS_IN(iVar0, bParam1), 1))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_18(int iParam0, bool bParam1)
{
	if (Global_80337)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle"))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_19(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return 6;
			break;
		
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 0;
			break;
		
		case 3:
			return 0;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 0;
			break;
		
		case 6:
			return 0;
			break;
		
		case 50:
			return 0;
			break;
		
		case 7:
			return 1;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 1;
			break;
		
		case 10:
			return 1;
			break;
		
		case 11:
			return 1;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 1;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 1;
			break;
		
		case 16:
			return 1;
			break;
		
		case 17:
			return 1;
			break;
		
		case 18:
			return 1;
			break;
		
		case 19:
			return 1;
			break;
		
		case 20:
			return 1;
			break;
		
		case 21:
			return 1;
			break;
		
		case 22:
			return 2;
			break;
		
		case 23:
			return 2;
			break;
		
		case 24:
			return 2;
			break;
		
		case 25:
			return 2;
			break;
		
		case 26:
			return 2;
			break;
		
		case 27:
			return 2;
			break;
		
		case 28:
			return 3;
			break;
		
		case 29:
			return 3;
			break;
		
		case 30:
			return 3;
			break;
		
		case 31:
			return 3;
			break;
		
		case 32:
			return 3;
			break;
		
		case 33:
			return 3;
			break;
		
		case 34:
			return 3;
			break;
		
		case 35:
			return 3;
			break;
		
		case 36:
			return 3;
			break;
		
		case 37:
			return 3;
			break;
		
		case 38:
			return 3;
			break;
		
		case 39:
			return 4;
			break;
		
		case 40:
			return 4;
			break;
		
		case 41:
			return 4;
			break;
		
		case 42:
			return 4;
			break;
		
		case 43:
			return 4;
			break;
		
		case 44:
			return 4;
			break;
		
		case 45:
			return 5;
			break;
		
		case 46:
			return 3;
			break;
		
		case 47:
			return 3;
			break;
		
		case 48:
			return 3;
			break;
		
		case 49:
			return 3;
			break;
		
		case 52:
			return 3;
			break;
		
		case 51:
			return 1;
			break;
		
		case 53:
			return 3;
			break;
		
		case 54:
			return 2;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 3;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 3;
			break;
		
		case 59:
			return 3;
			break;
		
		case 60:
			return 3;
			break;
		
		case 61:
			return 3;
			break;
		
		case 62:
			return 0;
			break;
		
		case 63:
			return 2;
			break;
		
		case 64:
			return 3;
			break;
	}
	return 6;
}

int func_20(int iParam0, bool bParam1)
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("AttributeDamage", 3))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
		{
			if (BitTest(DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage"), bParam1))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15)
{
	Param0.f_0 = -642704387;
	Param0.f_1 = PLAYER::PLAYER_ID();
	if (!iParam15 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Param0, 15, iParam15, Param0.f_0);
	}
}

int func_22(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			if (func_6(iVar2, 0, 0))
			{
				if (iVar2 != PLAYER::PLAYER_ID() || iParam0)
				{
					MISC::SET_BIT(&uVar0, iVar2);
				}
			}
		}
		iVar1++;
	}
	return uVar0;
}

int func_23()
{
	if (BitTest(Local_81.f_1, 0))
	{
		if (bLocal_304 == 1)
		{
			if (BitTest(Local_81.f_1, 4))
			{
				MISC::SET_BIT(&(Local_81.f_3), 11);
				return 1;
			}
		}
		else if (BitTest(Local_81.f_1, 1))
		{
			MISC::SET_BIT(&(Local_81.f_3), false);
			return 1;
		}
	}
	else if (BitTest(Local_81.f_1, 2))
	{
		MISC::SET_BIT(&(Local_81.f_3), true);
		MISC::SET_BIT(&Global_1926918, bLocal_304);
		return 1;
	}
	if (BitTest(Local_81.f_3, 12))
	{
		return 1;
	}
	if (bLocal_304 == 0)
	{
		if (BitTest(Local_81.f_2, 2))
		{
			MISC::SET_BIT(&(Local_81.f_3), 2);
			return 1;
		}
		if (BitTest(Local_81.f_2, 8))
		{
			MISC::SET_BIT(&(Local_81.f_3), 8);
			return 1;
		}
		if (BitTest(Local_81.f_2, 5))
		{
			MISC::SET_BIT(&(Local_81.f_3), 3);
			return 1;
		}
		if (BitTest(Local_81.f_2, 9))
		{
			MISC::SET_BIT(&(Local_81.f_3), 9);
			return 1;
		}
		if (BitTest(Local_81.f_1, 15))
		{
			MISC::SET_BIT(&(Local_81.f_3), 10);
			return 1;
		}
	}
	if (!func_6(iLocal_306, 0, 1))
	{
		if (bLocal_304 != 0 || !BitTest(Local_81.f_2, 1))
		{
			MISC::SET_BIT(&(Local_81.f_3), 4);
			return 1;
		}
	}
	else
	{
		if (func_50(iLocal_306, 129))
		{
			MISC::SET_BIT(&(Local_81.f_2), 13);
			MISC::SET_BIT(&(Local_81.f_3), 8);
			return 1;
		}
		if (func_50(iLocal_306, 131) || BitTest(Global_1892925[iLocal_306 /*615*/].f_1, 11))
		{
			MISC::SET_BIT(&(Local_81.f_2), 13);
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_50(iLocal_306, 136) || (func_49(PLAYER::PLAYER_ID(), 24) && func_48(iLocal_306)))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_50(iLocal_306, 146))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		switch (func_47(iLocal_306))
		{
			case 5:
				MISC::SET_BIT(&(Local_81.f_2), 8);
				return 1;
			
			default:
		}
		if (func_46(PLAYER::PLAYER_ID()) && ((func_45(PLAYER::PLAYER_ID()) == 148 || func_45(PLAYER::PLAYER_ID()) == 142) || func_45(PLAYER::PLAYER_ID()) == 164))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 153)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 170)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 167)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(PLAYER::PLAYER_ID()) == 168)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 238)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_43(PLAYER::PLAYER_ID()) && func_45(PLAYER::PLAYER_ID()) == 249)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		switch (func_42(PLAYER::PLAYER_ID()))
		{
			case 6:
			case 7:
				if (func_41())
				{
					MISC::SET_BIT(&(Local_81.f_2), 8);
					return 1;
				}
				break;
		}
		if (func_40(iLocal_306))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_36(iLocal_306))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_35(iLocal_306))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_306) == 276)
		{
			if (func_33(iLocal_306) == 3)
			{
				MISC::SET_BIT(&(Local_81.f_2), 8);
				return 1;
			}
		}
		if (func_45(iLocal_306) == 309)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_306) == 318)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_32(func_45(iLocal_306)))
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_306) == 324)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (func_45(iLocal_306) == 339)
		{
			MISC::SET_BIT(&(Local_81.f_2), 8);
			return 1;
		}
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(iLocal_306), false))
		{
			if (bLocal_304 == 1)
			{
				if (BitTest(Local_81.f_1, 0))
				{
					MISC::SET_BIT(&(Local_81.f_3), 6);
					return 1;
				}
			}
		}
		else
		{
			if (bLocal_304 == 1)
			{
				if (func_50(iLocal_306, 146))
				{
					MISC::SET_BIT(&(Local_81.f_3), 7);
					return 1;
				}
				if (!BitTest(Local_81.f_1, 16))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_9) > func_31())
					{
						MISC::SET_BIT(&(Local_81.f_3), 7);
						return 1;
					}
				}
				if (func_28())
				{
					MISC::SET_BIT(&(Local_81.f_3), 7);
					return 1;
				}
				if (func_24(iLocal_306, func_12(iLocal_305), 1))
				{
					MISC::SET_BIT(&(Local_81.f_3), 7);
					return 1;
				}
			}
			if (iLocal_307 != MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_306)))
			{
				MISC::SET_BIT(&(Local_81.f_3), 5);
				return 1;
			}
		}
	}
	return 0;
}

bool func_24(int iParam0, int iParam1, bool bParam2)
{
	return func_25(iParam0, iParam1, bParam2, 1);
}

int func_25(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_14(iParam1) && func_14(iParam0))
	{
		if (!bParam2)
		{
			if (func_27(iParam0, iParam1, iParam3))
			{
				return 0;
			}
		}
		if (Global_1892925[iParam0 /*615*/].f_10 != func_13())
		{
			if (iParam1 == Global_1892925[iParam0 /*615*/].f_10)
			{
				return func_26(iParam1, iParam3);
			}
		}
	}
	return 0;
}

int func_26(int iParam0, int iParam1)
{
	if (func_16(iParam0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_433 == iParam1;
	}
	return 0;
}

int func_27(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 != func_13())
	{
		if (iParam0 != func_13())
		{
			if (func_14(Global_1892925[iParam0 /*615*/].f_10))
			{
				if (Global_1892925[iParam0 /*615*/].f_10 == iParam0)
				{
					if (Global_1892925[iParam0 /*615*/].f_10.f_433 == iParam2)
					{
						return iParam1 == iParam0;
					}
				}
			}
		}
	}
	return 0;
}

int func_28()
{
	if (((func_30(iLocal_306, 1, 1) || func_49(iLocal_306, 0)) || func_49(iLocal_306, 7)) || func_29(iLocal_306))
	{
		return 1;
	}
	return 0;
}

bool func_29(int iParam0)
{
	return Global_1845298[iParam0 /*881*/].f_185 != 0;
}

int func_30(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 0))
	{
		return 1;
	}
	if (bParam1)
	{
		if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 1))
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1)
		{
			return 1;
		}
	}
	return 0;
}

int func_31()
{
	if (Local_81.f_52)
	{
		return 300000;
	}
	return 120000;
}

int func_32(int iParam0)
{
	switch (iParam0)
	{
		case 316:
		case 315:
			return 1;
		
		default:
	}
	return 0;
}

int func_33(int iParam0)
{
	if (func_34(iParam0, 0))
	{
		return Global_1892925[iParam0 /*615*/].f_10.f_183;
	}
	return -1;
}

int func_34(int iParam0, int iParam1)
{
	if (func_14(iParam0))
	{
		if (Global_1892925[iParam0 /*615*/].f_10.f_34 != -1 || (iParam1 && Global_1892925[iParam0 /*615*/].f_10.f_33 != -1))
		{
			return 1;
		}
	}
	return 0;
}

int func_35(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1882652[iVar0 /*321*/].f_82.f_75 != 0;
	}
	return 0;
}

int func_36(int iParam0)
{
	if (iParam0 == func_13())
	{
		return 0;
	}
	if (func_39(iParam0))
	{
		return 1;
	}
	if (func_38(iParam0))
	{
		return 1;
	}
	if (func_37(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_37(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845298[iParam0 /*881*/].f_260.f_439.f_3, 6);
	}
	return 0;
}

int func_38(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845298[iParam0 /*881*/].f_260.f_376, 29);
	}
	return 0;
}

int func_39(int iParam0)
{
	if (iParam0 != func_13())
	{
		return BitTest(Global_1845298[iParam0 /*881*/].f_260.f_439.f_2, 16);
	}
	return 0;
}

int func_40(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return Global_2709384;
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
			if (iVar1 == joaat("mp_m_freemode_01") || iVar1 == joaat("mp_f_freemode_01"))
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

bool func_41()
{
	return Global_1835544;
}

int func_42(int iParam0)
{
	if (func_45(iParam0) == 243)
	{
		return func_33(iParam0);
	}
	return -1;
}

int func_43(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return func_44(iParam0, 9);
	}
	return 0;
}

var func_44(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

int func_45(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_34(iParam0, 0))
		{
			return Global_1892925[iParam0 /*615*/].f_10.f_34;
		}
	}
	return -1;
}

int func_46(int iParam0)
{
	if (func_16(iParam0))
	{
		if (func_43(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_47(int iParam0)
{
	if (func_45(iParam0) == 237 || func_45(iParam0) == 250)
	{
		return func_33(iParam0);
	}
	return -1;
}

var func_48(int iParam0)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_1, 4);
}

var func_49(int iParam0, int iParam1)
{
	return BitTest(Global_2658293[iParam0 /*468*/].f_222, iParam1);
}

int func_50(int iParam0, int iParam1)
{
	if (Global_1892925[iParam0 /*615*/] == iParam1)
	{
		return func_51(iParam0);
	}
	return 0;
}

int func_51(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return BitTest(Global_1892925[iVar0 /*615*/].f_1, 0);
	}
	return 0;
}

void func_52()
{
	func_63();
	if (bLocal_304 != 1)
	{
		func_2();
	}
	func_53();
}

void func_53()
{
	int iVar0;
	
	if (func_6(PLAYER::INT_TO_PLAYERINDEX(iLocal_313), 0, 1))
	{
		if (bLocal_304 == 1)
		{
			if (PLAYER::INT_TO_PLAYERINDEX(bLocal_313) == iLocal_306)
			{
				if (!BitTest(Local_81.f_1, 16))
				{
					if (BitTest(Local_137[bLocal_313 /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_81.f_1), 16);
					}
				}
			}
		}
		else
		{
			if (!BitTest(Local_81.f_1, 11))
			{
				if (func_59(PLAYER::INT_TO_PLAYERINDEX(bLocal_313)))
				{
					if (!BitTest(Local_81.f_4, bLocal_313))
					{
						MISC::SET_BIT(&(Local_81.f_1), 11);
						MISC::SET_BIT(&(Local_81.f_4), bLocal_313);
					}
				}
				else if (BitTest(Local_81.f_4, bLocal_313))
				{
					MISC::SET_BIT(&(Local_81.f_1), 11);
					MISC::CLEAR_BIT(&(Local_81.f_4), bLocal_313);
				}
			}
			else if (BitTest(Local_137[bLocal_313 /*5*/].f_1, 2))
			{
				MISC::CLEAR_BIT(&(Local_81.f_1), 11);
			}
			if (bLocal_304 == 0)
			{
				if (BitTest(Local_137[bLocal_313 /*5*/].f_1, 0))
				{
					if (Local_137[bLocal_313 /*5*/].f_2 != -1)
					{
						if (!BitTest(Local_81.f_2, 1))
						{
							MISC::SET_BIT(&(Local_81.f_2), true);
							Local_81.f_42 = Local_137[bLocal_313 /*5*/].f_2;
							Local_81.f_43 = Local_137[bLocal_313 /*5*/].f_3;
							if (!func_58())
							{
								func_57();
							}
						}
					}
					else if (!BitTest(Local_81.f_2, 9))
					{
						if (!func_58())
						{
							func_56();
						}
						iVar0 = 0;
						while (iVar0 < func_519(bLocal_304))
						{
							func_7(iVar0, 3);
							iVar0++;
						}
						MISC::SET_BIT(&(Local_81.f_2), 9);
						MISC::SET_BIT(&(Local_81.f_2), true);
					}
				}
				if (func_58())
				{
					if (!BitTest(iLocal_298, 17))
					{
						if (BitTest(Local_137[bLocal_313 /*5*/].f_1, 5))
						{
							func_57();
							MISC::SET_BIT(&iLocal_298, 17);
						}
						else if (BitTest(Local_137[bLocal_313 /*5*/].f_1, 6))
						{
							func_56();
							MISC::SET_BIT(&iLocal_298, 17);
						}
					}
				}
				if (!BitTest(Local_137[bLocal_313 /*5*/].f_1, 1))
				{
					if (!BitTest(iLocal_298, 3))
					{
						MISC::SET_BIT(&iLocal_298, 3);
					}
				}
				else if (PLAYER::INT_TO_PLAYERINDEX(bLocal_313) == iLocal_306)
				{
					if (bLocal_304 == 0)
					{
						if (!BitTest(Local_81.f_2, 1))
						{
							if (!BitTest(Local_81.f_2, 6))
							{
								MISC::SET_BIT(&(Local_81.f_2), 6);
							}
						}
					}
				}
			}
		}
	}
	bLocal_313++;
	if (bLocal_313 >= 32)
	{
		bLocal_313 = false;
		if (bLocal_304 == 0)
		{
			if (!BitTest(iLocal_298, 3))
			{
				func_55();
			}
			else
			{
				func_54();
			}
			MISC::CLEAR_BIT(&iLocal_298, 3);
		}
	}
}

void func_54()
{
	if (BitTest(Local_81.f_2, 3))
	{
		MISC::CLEAR_BIT(&(Local_81.f_2), 3);
	}
}

void func_55()
{
	if (!BitTest(Local_81.f_2, 3))
	{
		Local_81.f_6 = iLocal_311;
		MISC::SET_BIT(&(Local_81.f_2), 3);
	}
}

void func_56()
{
	struct<15> Var0;
	
	Var0.f_3 = -1209401092;
	Var0.f_11 = iLocal_306;
	Var0.f_12 = iLocal_305;
	func_21(Var0, func_22(1));
}

void func_57()
{
	struct<15> Var0;
	
	Var0.f_3 = -1079941038;
	Var0.f_11 = iLocal_306;
	Var0.f_12 = iLocal_305;
	if (func_519(bLocal_304) > 1)
	{
		Var0.f_13 = PLAYER::INT_TO_PLAYERINDEX(true);
	}
	else
	{
		Var0.f_13 = PLAYER::INT_TO_PLAYERINDEX(false);
	}
	Var0.f_4 = Local_81.f_43;
	func_21(Var0, func_22(1));
}

int func_58()
{
	if (MISC::IS_PC_VERSION())
	{
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();
	}
	return 0;
}

bool func_59(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_62();
	}
	return BitTest(Global_1677555.f_241.f_136[func_61(10) /*33*/][iParam0], func_60(10));
}

int func_60(int iParam0)
{
	return (iParam0 % 32);
}

int func_61(int iParam0)
{
	return (iParam0 / 32);
}

var func_62()
{
	return Global_1574582;
}

void func_63()
{
	int iVar0;
	
	if (bLocal_304 == 0)
	{
		if (BitTest(Local_81.f_2, 3))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_6) > 10000)
			{
				if (BitTest(Local_81.f_2, 1))
				{
					MISC::SET_BIT(&(Local_81.f_2), 2);
				}
			}
		}
		if (BitTest(Local_81.f_1, 8))
		{
			if (!BitTest(Local_81.f_2, 1))
			{
				if (func_67())
				{
					MISC::SET_BIT(&(Local_81.f_2), 6);
					func_66();
				}
			}
		}
		if (!BitTest(Local_81.f_1, 0))
		{
			if (func_6(iLocal_306, 1, 1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iLocal_306);
				if (func_65(iVar0))
				{
					func_270(iVar0);
				}
			}
		}
		if (!BitTest(Local_81.f_2, 1))
		{
			if (!func_6(iLocal_306, 1, 1) || func_29(iLocal_306))
			{
				MISC::SET_BIT(&(Local_81.f_1), 15);
			}
		}
	}
	if (BitTest(Local_81.f_1, 0))
	{
		if (BitTest(Local_81.f_1, 5))
		{
			if (!BitTest(Local_81.f_1, 4))
			{
				if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_5) > 600000)
				{
					MISC::SET_BIT(&(Local_81.f_1), 4);
				}
			}
		}
		if (!BitTest(Local_81.f_3, 12))
		{
			if (func_64())
			{
				MISC::SET_BIT(&(Local_81.f_3), 12);
			}
		}
	}
}

int func_64()
{
	switch (Local_81.f_10[0 /*7*/].f_1)
	{
		case 0:
			if (Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_829 == 0)
			{
				return 1;
			}
			break;
		
		case 1:
			if (Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_829 == 1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_65(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (BitTest(Local_81.f_1, 17))
	{
		if (!ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 1;
		}
	}
	if (!func_5(Local_81.f_36, ENTITY::GET_ENTITY_COORDS(iParam0, true), 625f))
	{
		return 1;
	}
	return 0;
}

void func_66()
{
	func_548();
	Local_81.f_0 = 0;
}

int func_67()
{
	if ((((((((BitTest(Local_81.f_2, 6) || PLAYER::IS_PLAYER_DEAD(iLocal_306)) || func_30(iLocal_306, 1, 1)) || func_69(iLocal_306)) || func_49(iLocal_306, 0)) || func_49(iLocal_306, 7)) || func_29(iLocal_306)) || Global_2658293[iLocal_306 /*468*/].f_252) || func_68(PLAYER::GET_PLAYER_PED(iLocal_306), joaat("titan")))
	{
		return 1;
	}
	if (iLocal_306 != -1)
	{
		if (BitTest(Local_137[iLocal_306 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_68(int iParam0, int iParam1)
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iParam0))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::GET_ENTITY_MODEL(iVar0) == iParam1)
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_69(int iParam0)
{
	if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 14))
	{
		return 1;
	}
	if (BitTest(Global_1845298[iParam0 /*881*/].f_260.f_37, 11))
	{
		return 1;
	}
	return 0;
}

void func_70()
{
	if (!BitTest(Local_81.f_1, 5))
	{
		Local_81.f_5 = iLocal_311;
		MISC::SET_BIT(&(Local_81.f_1), 5);
	}
}

void func_71()
{
	if (BitTest(Local_81.f_1, 5))
	{
		MISC::CLEAR_BIT(&(Local_81.f_1), 5);
	}
}

int func_72()
{
	bool bVar0;
	
	if (BitTest(Local_81.f_1, 0))
	{
		return 0;
	}
	else
	{
		bVar0 = false;
		if (func_272())
		{
			if (bLocal_304 == 1)
			{
				bVar0 = true;
			}
			else if (func_267())
			{
				if (func_263())
				{
					if (func_262())
					{
						bVar0 = true;
					}
					else if (func_260(func_261(bLocal_304)))
					{
						if (func_78())
						{
							bVar0 = true;
						}
					}
				}
			}
		}
		if (bVar0)
		{
			func_70();
			if (func_73())
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_73()
{
	int iVar0;
	
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_81.f_1, 0))
		{
			return 1;
		}
		else
		{
			switch (bLocal_304)
			{
				case 0:
					iVar0 = 0;
					while (iVar0 < func_519(bLocal_304))
					{
						if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iVar0 /*7*/]) && !BitTest(Local_81.f_10[iVar0 /*7*/].f_2, 1)) && !BitTest(Local_81.f_10[iVar0 /*7*/].f_2, 6))
						{
							func_74(iVar0, func_77(bLocal_304), Local_81.f_32, Local_81.f_35);
						}
						iVar0++;
					}
					break;
			}
			if (bLocal_304 != 1)
			{
				iVar0 = 0;
				while (iVar0 < func_519(bLocal_304))
				{
					if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iVar0 /*7*/]))
					{
						if (!BitTest(Local_81.f_10[iVar0 /*7*/].f_2, 6))
						{
							return 0;
						}
					}
					iVar0++;
				}
			}
			MISC::SET_BIT(&iLocal_298, true);
			MISC::SET_BIT(&iLocal_298, 2);
			MISC::SET_BIT(&iLocal_298, 3);
			MISC::SET_BIT(&iLocal_298, 4);
			MISC::SET_BIT(&(Local_81.f_1), false);
			MISC::SET_BIT(&Global_1926919, bLocal_304);
			return 1;
		}
	}
	return 0;
}

void func_74(int iParam0, var uParam1, struct<3> Param2, float fParam5)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iParam0 /*7*/]))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) < NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0))
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
				{
					if (func_260(func_261(bLocal_304)))
					{
						if (func_76(&(Local_81.f_10[iParam0 /*7*/]), 7, func_261(bLocal_304), Param2, fParam5, 1, 1, 1))
						{
							Local_81.f_10[iParam0 /*7*/].f_1 = bLocal_304;
							Local_81.f_10[iParam0 /*7*/].f_4 = uParam1;
							func_75(iParam0);
						}
					}
				}
			}
		}
	}
}

void func_75(int iParam0)
{
	char cVar0[16];
	
	if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 1))
	{
		if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), false))
		{
			if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), Global_1837389);
				TASK::SET_PED_PATH_MAY_ENTER_WATER(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), true);
				TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), false);
			}
			ENTITY::SET_ENTITY_PROOFS(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), false, false, false, false, false, false, true, false);
			PED::SET_PED_COMBAT_ABILITY(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 2);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 13, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 41, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 20, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 132, true);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 118, false);
			PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 311, true);
			PED::SET_PED_TO_INFORM_RESPECTED_FRIENDS(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 300f, 10);
			PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), true);
			StringCopy(&cVar0, "gang ", 16);
			StringIntConCat(&cVar0, iParam0, 16);
			PED::SET_PED_NAME_DEBUG(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), &cVar0);
			switch (Local_81.f_10[iParam0 /*7*/].f_4)
			{
				case 0:
					func_7(iParam0, 1);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 0, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 2, false);
					PED::SET_PED_COMBAT_MOVEMENT(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 2);
					PED::SET_PED_COMBAT_RANGE(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 0);
					PED::SET_PED_USING_ACTION_MODE(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), false, -1, 0);
					PED::SET_PED_CONFIG_FLAG(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 32, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 4, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 1024, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 128, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 32, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 8, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 64, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 256, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 1, false);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 2, true);
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 16, true);
					if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 0))
					{
						MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), 2);
					}
					PED::SET_PED_FLEE_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 512, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 17, false);
					WEAPON::GIVE_WEAPON_TO_PED(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), joaat("weapon_knife"), 1, true, true);
					PED::SET_PED_MONEY(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 0);
					TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), PLAYER::GET_PLAYER_PED(iLocal_306), -1, 0, 2);
					NETWORK::SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(Local_81.f_10[iParam0 /*7*/], true);
					break;
			}
			ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), SYSTEM::ROUND((Global_262145.f_156 * IntToFloat(ENTITY::GET_ENTITY_HEALTH(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]))))), 0, 0);
			if (!BitTest(Local_81.f_1, 8))
			{
				MISC::SET_BIT(&(Local_81.f_1), 8);
			}
			MISC::SET_BIT(&(Local_81.f_10[iParam0 /*7*/].f_2), true);
		}
	}
}

int func_76(var uParam0, int iParam1, int iParam2, struct<3> Param3, float fParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam1, iParam2, Param3, fParam6, bParam8, bParam7);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, bParam9);
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iVar0))
		{
			if (bParam7)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
		}
		return 1;
	}
	return 0;
}

int func_77(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
	}
	return 0;
}

int func_78()
{
	struct<6> Var0;
	
	if (BitTest(Local_81.f_1, 3))
	{
		return 1;
	}
	else
	{
		switch (bLocal_304)
		{
			case 0:
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_306) && func_6(iLocal_306, 1, 1))
				{
					Var0.f_5 = 1115815936;
					Var0.f_13 = 2;
					Var0.f_20 = 2;
					Var0.f_32 = -1082130432;
					Var0.f_34 = 1;
					Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true) };
					Var0.f_5 = 20f;
					if (func_79(Local_81.f_36, 40f, &(Local_81.f_32), &(Local_81.f_35), &Var0, 0))
					{
						MISC::SET_BIT(&(Local_81.f_1), 3);
						return 1;
					}
				}
				else
				{
					NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
					PED::SPAWNPOINTS_CANCEL_SEARCH();
					if (Global_2635562.f_2773)
					{
						PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
						Global_2635562.f_2773 = 0;
					}
				}
				break;
			}
	}
	return 0;
}

int func_79(struct<3> Param0, float fParam3, var uParam4, var uParam5, var uParam6, int iParam7)
{
	struct<17> Var0;
	struct<31> Var34;
	struct<3> Var65;
	
	if (uParam6->f_5 > (fParam3 - 20f))
	{
		uParam6->f_5 = (fParam3 - 20f);
	}
	Var0 = 5;
	Var0.f_16 = 5;
	Var0.f_22 = 5;
	Var0.f_28 = 5;
	Var34.f_16 = 1;
	Var34.f_22 = 1;
	Var34.f_23 = 1;
	Var34.f_24 = 1;
	Var34.f_28 = -1;
	Var34 = { Param0 };
	Var34.f_3 = uParam6->f_11;
	Var34.f_4 = fParam3;
	Var34.f_5 = 0;
	Var34.f_6 = 1;
	Var34.f_7 = 0;
	Var34.f_15 = iParam7;
	Var34.f_16 = 1;
	Var34.f_17 = 0;
	Var34.f_24 = iParam7;
	Var34.f_30 = iParam7;
	Var34.f_29 = iParam7;
	if (func_80(&Var34, uParam6, &Var0))
	{
		if ((uParam6->f_12 > 0f && uParam6->f_7) && uParam6->f_8)
		{
			Var65 = { Param0 - Var0[0 /*3*/] };
			if (Var65.f_2 > uParam6->f_12)
			{
				Var0[0 /*3*/] = { Param0 };
				Var0.f_16[0] = uParam6->f_11;
			}
		}
		*uParam4 = { Var0[0 /*3*/] };
		*uParam5 = Var0.f_16[0];
		return 1;
	}
	return 0;
}

int func_80(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	struct<3> Var8;
	struct<3> Var11;
	struct<3> Var14;
	int iVar17;
	struct<3> Var18;
	struct<3> Var21;
	float fVar24;
	bool bVar25;
	struct<61> Var26;
	bool bVar87;
	
	bVar25 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2635562.f_2767 == *uParam0 || !Global_2635562.f_2767.f_1 == uParam0->f_1) || !Global_2635562.f_2767.f_2 == uParam0->f_2) || !Global_2635562.f_2770 == uParam0->f_4)
			{
				bVar25 = true;
			}
			break;
		
		case 1:
			if (((((!Global_2635562.f_2781 == uParam0->f_8 || !Global_2635562.f_2781.f_1 == uParam0->f_8.f_1) || !Global_2635562.f_2781.f_2 == uParam0->f_8.f_2) || !Global_2635562.f_2784 == uParam0->f_11) || !Global_2635562.f_2784.f_1 == uParam0->f_11.f_1) || !Global_2635562.f_2784.f_2 == uParam0->f_11.f_2)
			{
				bVar25 = true;
			}
			break;
		
		case 2:
			if ((((((!Global_2635562.f_2781 == uParam0->f_8 || !Global_2635562.f_2781.f_1 == uParam0->f_8.f_1) || !Global_2635562.f_2781.f_2 == uParam0->f_8.f_2) || !Global_2635562.f_2784 == uParam0->f_11) || !Global_2635562.f_2784.f_1 == uParam0->f_11.f_1) || !Global_2635562.f_2784.f_2 == uParam0->f_11.f_2) || !Global_2635562.f_2787 == uParam0->f_14)
			{
				bVar25 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2635562.f_2788 == uParam0->f_7)
		{
			bVar25 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_2774) && !Global_2635562.f_2774 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar25 = true;
		}
	}
	if (bVar25)
	{
		if (Global_2635562.f_2765 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2635562.f_2774))
			{
				if (Global_2635562.f_2774 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2771) < func_259(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2771) < func_259(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_258();
		}
		Global_2635562.f_2765 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2771) > func_259(0))
	{
		Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
		func_252();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar4 = (*uParam0 - uParam0->f_4);
			fVar5 = (uParam0->f_1 - uParam0->f_4);
			fVar6 = (*uParam0 + uParam0->f_4);
			fVar7 = (uParam0->f_1 + uParam0->f_4);
			break;
		
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = uParam0->f_8;
				fVar6 = uParam0->f_11;
			}
			else
			{
				fVar4 = uParam0->f_11;
				fVar6 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = uParam0->f_8.f_1;
				fVar7 = uParam0->f_11.f_1;
			}
			else
			{
				fVar5 = uParam0->f_11.f_1;
				fVar7 = uParam0->f_8.f_1;
			}
			break;
		
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar4 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar4 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar6 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar5 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar5 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar7 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar4, fVar5, fVar6, fVar7);
	if (uParam0->f_7 == 0)
	{
		Var8 = { *uParam0 };
	}
	else
	{
		Var8 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var11 = { Var8 + Vector(-0.1f, -0.1f, -0.1f) };
	Var14 = { Var8 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2635562.f_2765)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		func_258();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (func_251(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2635562.f_2788 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2635562.f_2767 = { *uParam0 };
					Global_2635562.f_2770 = uParam0->f_4;
					break;
				
				case 1:
					Global_2635562.f_2781 = { uParam0->f_8 };
					Global_2635562.f_2784 = { uParam0->f_11 };
					Global_2635562.f_2787 = 0f;
					Global_2635562.f_2767 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				
				case 2:
					Global_2635562.f_2781 = { uParam0->f_8 };
					Global_2635562.f_2784 = { uParam0->f_11 };
					Global_2635562.f_2787 = uParam0->f_14;
					Global_2635562.f_2767 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				func_250(Var8.f_0, Var8.f_1);
			}
			Global_2635562.f_2766 = 1;
			Global_2635562.f_2765 = 1;
			Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635562.f_2771 = NETWORK::GET_NETWORK_TIME();
			Global_2635562.f_2774 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2635562.f_2765)
	{
		if (Global_2635562.f_2766 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar4, fVar5, fVar6, fVar7) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2772) > 5000)
			{
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var8 };
					}
					Var26.f_6 = 1082130432;
					Var26.f_7 = 1176255488;
					Var26.f_8 = 1;
					Var26.f_10 = 1;
					Var26.f_13 = 1;
					Var26.f_15 = 1;
					Var26.f_16 = 1;
					Var26.f_31 = 1;
					Var26.f_34 = joaat("tailgater");
					Var26.f_38 = 2;
					Var26.f_45 = 2;
					Var26.f_49 = 1123024896;
					Var26.f_53 = 999;
					Var26.f_54 = 1176256410;
					Var26.f_55 = 1;
					Var26.f_56 = 1;
					Var26.f_57 = 1;
					Var26 = { *uParam1 };
					Var26.f_3 = uParam1->f_5;
					Var26.f_11 = uParam1->f_9;
					Var26.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var26.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var26.f_19 = { *uParam0 };
							Var26.f_25 = uParam0->f_4;
							break;
						
						case 1:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = 0f;
							break;
						
						case 2:
							Var26.f_19 = { uParam0->f_8 };
							Var26.f_22 = { uParam0->f_11 };
							Var26.f_25 = uParam0->f_14;
							break;
					}
					Var26.f_26 = uParam0->f_7;
					Var26.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var26.f_30 = 1;
						Var26.f_32 = 1;
					}
					iVar17 = 0;
					while (iVar17 < 2)
					{
						Var26.f_38[iVar17 /*3*/] = { uParam1->f_13[iVar17 /*3*/] };
						Var26.f_45[iVar17] = uParam1->f_20[iVar17];
						iVar17++;
					}
					Var26.f_51 = uParam1->f_30;
					Var26.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var26.f_10 = 0;
					}
					if (func_249(Global_4718592.f_197291))
					{
						Var26.f_9 = 1;
					}
					Var26.f_60 = uParam0->f_30;
					func_222(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var26);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!func_221(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2635562.f_2766 = 9;
				}
				else
				{
					Global_2635562.f_2766 = 2;
				}
			}
		}
		if (Global_2635562.f_2766 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var11, Var14) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2772) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var11, Var14) == 0)
			{
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !func_218(PLAYER::PLAYER_ID(), 0))
				{
					Global_2635562.f_2766 = 3;
				}
				else
				{
					Global_2635562.f_2766 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2776) > 7000)
			{
				func_217(Var8.f_0, Var8.f_1);
			}
		}
		if (Global_2635562.f_2766 == 3)
		{
			if (func_216() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2772) > 10000)
			{
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635562.f_2766 = 4;
			}
		}
		if (Global_2635562.f_2766 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				func_252();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635562.f_2766 = 5;
							}
							break;
						
						case 1:
							func_215(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var18, Var21, fVar24, *uParam1, iVar0))
							{
								Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635562.f_2766 = 5;
							}
							break;
						
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
								Global_2635562.f_2766 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
					Global_2635562.f_2766 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						
						case 1:
							func_215(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, fVar24, iVar0, 2f, 5000);
							break;
						
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2635562.f_2766 == 5)
		{
			if (func_133(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2635562.f_2792.f_5)
				{
					Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
					Global_2635562.f_2766 = 6;
				}
				else
				{
					Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2635562.f_2766 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2772) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635562.f_2766 = 8;
			}
		}
		if (Global_2635562.f_2766 == 6)
		{
			iVar0 = 0;
			Global_2635562.f_2792.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!func_132(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
					{
						iVar0++;
					}
				}
			}
			else if (!func_131(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var8)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635562.f_2766 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				
				case 1:
					func_215(uParam0->f_8, uParam0->f_11, &Var18, &Var21, &fVar24);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var18, Var21, fVar24, iVar0, 2f, 5000);
					break;
				
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2635562.f_2766 == 7)
		{
			if (func_133(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2635562.f_2928[iVar17 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (func_221(Global_2635562.f_2928[iVar17 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635562.f_2928[iVar17 /*3*/] };
										}
										break;
									
									case 1:
										if (func_129(Global_2635562.f_2928[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2635562.f_2928[iVar17 /*3*/] };
										}
										break;
									
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2635562.f_2928[iVar17 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2635562.f_2928[iVar17 /*3*/] };
										}
										break;
									}
								}
						}
						iVar17++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_83(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar17 = 0;
					while (iVar17 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar17 /*3*/]) };
						uParam2->f_16[iVar17] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar17++;
					}
				}
				Global_2635562.f_2766 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2635562.f_2772) > 20000)
			{
				Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
				Global_2635562.f_2766 = 8;
			}
		}
		if (Global_2635562.f_2766 == 8)
		{
			if (uParam0->f_5)
			{
				if (func_82(Global_2635562.f_490))
				{
				}
			}
			else if (Global_2635562.f_2792.f_2)
			{
				func_81(uParam2, &(Global_2635562.f_2792.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar87 = false;
				}
				else
				{
					bVar87 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2635562.f_2767 };
				func_83(uParam2[0 /*3*/], 0, bVar87, 0, 0, uParam0, uParam1);
			}
			Global_2635562.f_2772 = NETWORK::GET_NETWORK_TIME();
			Global_2635562.f_2766 = 9;
		}
		if (Global_2635562.f_2766 == 9)
		{
			Global_2635562.f_2765 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			func_258();
			return 1;
		}
		Global_2635562.f_2771 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_81(var uParam0, var uParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 5)
	{
		*(uParam0[iVar0 /*3*/]) = { (uParam1[iVar0 /*10*/])->f_4 };
		uParam0->f_16[iVar0] = (uParam1[iVar0 /*10*/])->f_7;
		uParam0->f_22[iVar0] = (*uParam1)[iVar0 /*10*/];
		iVar0++;
	}
}

int func_82(int iParam0)
{
	if (iParam0 == 3 || iParam0 == 26)
	{
		return 1;
	}
	return 0;
}

void func_83(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)
{
	struct<3> Var0;
	var uVar3;
	struct<61> Var4;
	var uVar65;
	int iVar66;
	bool bVar67;
	int iVar68;
	struct<3> Var69;
	struct<3> Var72;
	struct<3> Var75;
	float fVar78;
	
	Var4.f_6 = 1082130432;
	Var4.f_7 = 1176255488;
	Var4.f_8 = 1;
	Var4.f_10 = 1;
	Var4.f_13 = 1;
	Var4.f_15 = 1;
	Var4.f_16 = 1;
	Var4.f_31 = 1;
	Var4.f_34 = joaat("tailgater");
	Var4.f_38 = 2;
	Var4.f_45 = 2;
	Var4.f_49 = 1123024896;
	Var4.f_53 = 999;
	Var4.f_54 = 1176256410;
	Var4.f_55 = 1;
	Var4.f_56 = 1;
	Var4.f_57 = 1;
	if (bParam1)
	{
		iVar68 = 0;
	}
	else
	{
		iVar68 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar68 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var69 = { *uParam5 };
						if (func_132(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 1:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_131(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					
					case 2:
						Var69 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (func_131(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var69)))
						{
							iVar68 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar68 += 4;
		}
	}
	if (func_97(*uParam0, &Var0, iVar68, iParam3, 1))
	{
	}
	else
	{
		bVar67 = true;
	}
	if (bVar67)
	{
		Var0 = { *uParam0 };
		Var4 = { *uParam6 };
		Var4.f_8 = 1;
		Var4.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var4.f_10 = 0;
		}
		else
		{
			Var4.f_10 = 1;
		}
		Var4.f_13 = uParam5->f_15;
		Var4.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var4.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var4.f_18 = 1;
			Var4.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var4.f_19 = { *uParam5 };
					Var4.f_25 = uParam5->f_4;
					break;
				
				case 1:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = 0f;
					break;
				
				case 2:
					Var4.f_19 = { uParam5->f_8 };
					Var4.f_22 = { uParam5->f_11 };
					Var4.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar66 = 0;
		while (iVar66 < 2)
		{
			Var4.f_38[iVar66 /*3*/] = { uParam6->f_13[iVar66 /*3*/] };
			Var4.f_45[iVar66] = uParam6->f_20[iVar66];
			iVar66++;
		}
		Var4.f_51 = uParam6->f_30;
		Var4.f_55 = uParam5->f_16;
		if (func_95(PLAYER::PLAYER_ID(), 0))
		{
			Var4.f_9 = 1;
		}
		Var4.f_60 = uParam5->f_30;
		func_222(&Var0, &uVar3, &Var4);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var72 = { *uParam5 };
				fVar78 = uParam5->f_4;
				break;
			
			case 1:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				break;
			
			case 2:
				Var72 = { uParam5->f_8 };
				Var75 = { uParam5->f_11 };
				fVar78 = uParam5->f_14;
				break;
		}
		if (!func_94(Var0, uParam5->f_7, Var72, Var75, fVar78))
		{
			if (func_97(*uParam0, &Var0, iVar68, iParam3, 0))
			{
				if (!func_94(Var0, uParam5->f_7, Var72, Var75, fVar78))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var72 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, false, false))
					{
						Var0.f_2 = uVar65;
					}
				}
			}
			else if (func_84(uParam0, 1, 1, 1, 1))
			{
				func_83(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var72 + Var75 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var72 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, false, false))
				{
					Var0.f_2 = uVar65;
				}
				else
				{
					Var0.f_2 = (Var0.f_2 + 10f);
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar65, false, false))
					{
						Var0.f_2 = uVar65;
					}
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2635562.f_668 = 1;
}

int func_84(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	while (iVar0 < 14)
	{
		if (Global_2640830[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2640830[iVar0 /*17*/].f_16))
			{
				if (func_93(*uParam0, &(Global_2640830[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2640830[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2640830[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							func_85(&Var1, &(Global_2640830[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_84(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								func_85(&Var1, &(Global_2640830[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

void func_85(var uParam0, var uParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		switch (uParam1->f_10)
		{
			case 0:
				*uParam0 = { func_92(*uParam0, *uParam1, 0f, 0f, 0f, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3038) * uParam1->f_8)), 0, fParam2, bParam3) };
				break;
			
			case 1:
				*uParam0 = { func_92(*uParam0, *uParam1, uParam1->f_3, 0f, 1, fParam2, bParam3) };
				break;
			
			case 2:
				*uParam0 = { func_92(*uParam0, *uParam1, uParam1->f_3, uParam1->f_6, 2, fParam2, bParam3) };
				break;
		}
	}
	else
	{
		switch (uParam1->f_10)
		{
			case 0:
				func_90(uParam0, *uParam1, (uParam1->f_6 + (IntToFloat(Global_2635562.f_3038) * uParam1->f_8)), fParam2, bParam3, 0);
				break;
			
			case 1:
				func_89(uParam0, *uParam1, uParam1->f_3, fParam2, bParam3);
				break;
			
			case 2:
				func_86(uParam0, *uParam1, uParam1->f_3, uParam1->f_6, fParam2, bParam3);
				break;
			}
	}
}

void func_86(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7, float fParam8, bool bParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	struct<3> Var10;
	struct<3> Var13;
	float fVar16;
	struct<3> Var17;
	struct<3> Var20;
	struct<3> Var23;
	struct<3> Var26;
	struct<3> Var29;
	
	Var0 = { Param4 - Param1 };
	Var0.f_2 = 0f;
	Var3 = { *uParam0 - Param1 };
	Var3.f_2 = 0f;
	Var6 = { func_88(0f, 0f, 1f, Var0) };
	Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
	fVar9 = (SYSTEM::VMAG(Var3) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var0.f_0, Var0.f_1, Var3.f_0, Var3.f_1)));
	if (fVar9 < (fParam7 * 0.5f))
	{
		if (!bParam9)
		{
			if (func_87(Var6, Var3) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fParam7 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_87(Var6, Var3) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fParam7 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fParam7 * 0.5f) + fVar9) + fParam8)) };
		}
		Var10 = { *uParam0 + Var6 };
		fVar16 = SYSTEM::VDIST(Param1.f_0, Param1.f_1, 0f, Param4.f_0, Param4.f_1, 0f);
		Var17 = { Param1 + Param4 / Vector(2f, 2f, 2f) };
		Var17.f_2 = 0f;
		Var6 = { func_88(0f, 0f, 1f, Var0) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		Var6 = { Var6 * FtoV((fParam7 * 0.5f)) };
		Var20 = { Var17 - Var6 };
		Var23 = { Var17 + Var6 };
		Var26 = { Var23 - Var20 };
		Var26.f_2 = 0f;
		Var29 = { *uParam0 - Var20 };
		Var29.f_2 = 0f;
		Var6 = { func_88(0f, 0f, 1f, Var26) };
		Var6 = { Var6 / FtoV(SYSTEM::VMAG(Var6)) };
		fVar9 = (SYSTEM::VMAG(Var29) * SYSTEM::SIN(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var26.f_0, Var26.f_1, Var29.f_0, Var29.f_1)));
		if (!bParam9)
		{
			if (func_87(Var6, Var29) >= 0f)
			{
				Var6 = { Var6 * FtoV((((fVar16 * 0.5f) - fVar9) + fParam8)) };
			}
			else
			{
				Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) - fVar9) + fParam8) * -1f)) };
			}
		}
		else if (func_87(Var6, Var29) >= 0f)
		{
			Var6 = { Var6 * FtoV(((((fVar16 * 0.5f) + fVar9) + fParam8) * -1f)) };
		}
		else
		{
			Var6 = { Var6 * FtoV((((fVar16 * 0.5f) + fVar9) + fParam8)) };
		}
		Var13 = { *uParam0 + Var6 };
		if (SYSTEM::VDIST(Var10, *uParam0, uParam0->f_1, 0f) < SYSTEM::VDIST(Var13, *uParam0, uParam0->f_1, 0f))
		{
			*uParam0 = { Var10 };
		}
		else
		{
			*uParam0 = { Var13 };
		}
	}
}

float func_87(struct<3> Param0, struct<3> Param3)
{
	return (((Param0.f_0 * Param3.f_0) + (Param0.f_1 * Param3.f_1)) + (Param0.f_2 * Param3.f_2));
}

Vector3 func_88(struct<3> Param0, struct<3> Param3)
{
	return ((Param0.f_1 * Param3.f_2) - (Param0.f_2 * Param3.f_1)), ((Param0.f_2 * Param3.f_0) - (Param0.f_0 * Param3.f_2)), ((Param0.f_0 * Param3.f_1) - (Param0.f_1 * Param3.f_0));
}

void func_89(var uParam0, struct<2> Param1, var uParam3, struct<2> Param4, var uParam6, float fParam7, bool bParam8)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	
	Var0 = { *uParam0 };
	fVar3 = (*uParam0 - Param1.f_0);
	fVar4 = (*uParam0 - Param4.f_0);
	if (fVar3 < fVar4)
	{
		fVar5 = fVar3;
	}
	else
	{
		fVar5 = fVar4;
	}
	fVar6 = (uParam0->f_1 - Param1.f_1);
	fVar7 = (uParam0->f_1 - Param4.f_1);
	if (fVar6 < fVar7)
	{
		fVar8 = fVar6;
	}
	else
	{
		fVar8 = fVar7;
	}
	Var0 = { *uParam0 };
	if (!bParam8)
	{
		if (fVar5 < fVar8)
		{
			if (fVar3 < fVar4)
			{
				Var0.f_0 = (Param1.f_0 - fParam7);
			}
			else
			{
				Var0.f_0 = (Param4.f_0 + fParam7);
			}
		}
		else if (fVar6 < fVar7)
		{
			Var0.f_1 = (Param1.f_1 - fParam7);
		}
		else
		{
			Var0.f_1 = (Param4.f_1 + fParam7);
		}
	}
	else if (fVar5 < fVar8)
	{
		if (fVar3 < fVar4)
		{
			Var0.f_0 = (Param4.f_0 + fParam7);
		}
		else
		{
			Var0.f_0 = (Param1.f_0 - fParam7);
		}
	}
	else if (fVar6 < fVar7)
	{
		Var0.f_1 = (Param4.f_1 + fParam7);
	}
	else
	{
		Var0.f_1 = (Param1.f_1 - fParam7);
	}
	*uParam0 = { Var0 };
}

void func_90(var uParam0, struct<3> Param1, float fParam4, float fParam5, bool bParam6, float fParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { *uParam0 - Param1 };
	Var0.f_2 = 0f;
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	}
	else
	{
		Var0 = { 0f, 1f, 0f };
		if (fParam7 == 0f)
		{
			func_91(&Var0, 0f, 0f, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f));
		}
		else
		{
			func_91(&Var0, 0f, 0f, fParam7);
		}
	}
	Var0 = { Var0 * FtoV((fParam4 + fParam5)) };
	if (!bParam6)
	{
		Var3 = { Param1 + Var0 };
	}
	else
	{
		Var3 = { Param1 - Var0 };
	}
	*uParam0 = Var3.f_0;
	uParam0->f_1 = Var3.f_1;
}

void func_91(var uParam0, struct<3> Param1)
{
	float fVar0;
	float fVar1;
	struct<3> Var2;
	
	fVar0 = SYSTEM::COS(Param1.f_0);
	fVar1 = SYSTEM::SIN(Param1.f_0);
	Var2.f_0 = *uParam0;
	Var2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	Var2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_1);
	fVar1 = SYSTEM::SIN(Param1.f_1);
	Var2.f_0 = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	Var2.f_1 = uParam0->f_1;
	Var2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { Var2 };
	fVar0 = SYSTEM::COS(Param1.f_2);
	fVar1 = SYSTEM::SIN(Param1.f_2);
	Var2.f_0 = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	Var2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	Var2.f_2 = uParam0->f_2;
	*uParam0 = { Var2 };
}

Vector3 func_92(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, int iParam10, float fParam11, bool bParam12)
{
	int iVar0;
	struct<3> Var1;
	
	switch (iParam10)
	{
		case 0:
			func_90(&Param0, Param3, fParam9, fParam11, bParam12, 0);
			break;
		
		case 1:
			func_89(&Param0, Param3, Param6, fParam11, bParam12);
			break;
		
		case 2:
			func_86(&Param0, Param3, Param6, fParam9, fParam11, bParam12);
			break;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(Param0, iVar0 * 5, &Var1, 1, 0f, 0f);
		switch (iParam10)
		{
			case 0:
				if (!func_221(Var1, Param3, fParam9, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 1:
				if (!func_129(Var1, Param3, Param6, 0, 0))
				{
					return Var1;
				}
				break;
			
			case 2:
				if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var1, Param3, Param6, fParam9, false, true))
				{
					return Var1;
				}
				break;
		}
		iVar0++;
	}
	return Param0;
}

int func_93(struct<3> Param0, var uParam3, float fParam4, bool bParam5, bool bParam6)
{
	switch (uParam3->f_10)
	{
		case 0:
			return func_221(Param0, *uParam3, ((uParam3->f_6 + fParam4) + (IntToFloat(Global_2635562.f_3038) * uParam3->f_8)), bParam5, bParam6);
			break;
		
		case 1:
			return func_129(Param0, *uParam3 + Vector((fParam4 * -1f), (fParam4 * -1f), (fParam4 * -1f)), uParam3->f_3 + Vector(fParam4, fParam4, fParam4), bParam5, bParam6);
			break;
		
		case 2:
			if (bParam5 && bParam6)
			{
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false);
			}
			else if (bParam5)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 < uParam3->f_2 && Param0.f_2 < uParam3->f_3.f_2))
				{
					return 1;
				}
				else
				{
					return 0;
				}
			}
			else if (bParam6)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, false) && !(Param0.f_2 > uParam3->f_2 && Param0.f_2 > uParam3->f_3.f_2))
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
				return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
			}
			break;
	}
	return 0;
}

int func_94(struct<3> Param0, int iParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	switch (iParam3)
	{
		case 0:
			if (SYSTEM::VDIST(Param0, Param4) <= fParam10)
			{
				return 1;
			}
			break;
		
		case 1:
			return func_129(Param0, Param4, Param7, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param4, Param7, fParam10, false, true);
			break;
	}
	return 0;
}

int func_95(int iParam0, bool bParam1)
{
	int iVar0;
	
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("terbyte"))
			{
				return 1;
			}
		}
	}
	if (iParam0 != func_13())
	{
		if (func_6(iParam0, 1, 1))
		{
			if (Global_2658293[iParam0 /*468*/].f_325.f_8 != -1 && Global_2658293[iParam0 /*468*/].f_325.f_11 != func_13())
			{
				return func_96(Global_2658293[iParam0 /*468*/].f_325.f_8) == 12;
			}
		}
	}
	return 0;
}

int func_96(int iParam0)
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
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
			break;
		
		case 81:
			return 5;
			break;
		
		case 82:
			return 6;
			break;
		
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
			break;
		
		case 88:
			return 8;
			break;
		
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
			break;
		
		case 101:
			return 10;
			break;
		
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
			break;
		
		case 117:
			return 12;
			break;
		
		case 122:
			return 13;
			break;
		
		case 123:
			return 14;
			break;
		
		case 124:
			return 15;
			break;
		
		case 125:
			return 16;
			break;
		
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
			break;
		
		case 145:
			return 18;
			break;
		
		case 146:
			return 19;
			break;
		
		case 147:
			return 20;
			break;
		
		case 148:
			return 21;
			break;
		
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
			break;
		
		case 154:
			return 23;
			break;
		
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
			break;
		
		case 159:
			return 25;
			break;
		
		case 160:
			return 26;
			break;
		
		case 161:
			return 27;
			break;
		
		case 162:
		case 163:
		case 164:
		case 165:
		case 166:
			return 28;
			break;
		
		case 167:
		case 168:
		case 169:
		case 170:
		case 171:
			return 29;
			break;
		
		case 172:
			return 30;
			break;
		
		case 173:
			return 31;
			break;
		
		case 174:
		case 175:
		case 176:
			return 32;
			break;
		
		case 177:
		case 178:
		case 179:
			return 33;
			break;
	}
	return -1;
}

int func_97(struct<3> Param0, var* uParam3, int iParam4, int iParam5, bool bParam6)
{
	if (func_128(Param0, uParam3))
	{
		if (func_98(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam3, iParam4))
	{
		if (func_98(Param0, uParam3, iParam5, bParam6))
		{
			return 1;
		}
	}
	return 0;
}

int func_98(struct<3> Param0, var* uParam3, int iParam4, bool bParam5)
{
	float fVar0;
	var uVar1;
	var uVar8;
	
	fVar0 = SYSTEM::VDIST(Param0, *uParam3);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar8 = 2;
		if ((iParam4 == 1 && !func_114(Global_2635562.f_513, uParam3, &uVar1, &uVar8, bParam5, 1)) || iParam4 == 0)
		{
			if (!func_102(*uParam3, 1056964608))
			{
				if (!func_99(uParam3, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_99(var uParam0, bool bParam1)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { *uParam0 };
	iVar4 = func_101(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642654[iVar4])
	{
		if (func_100(Var1, &(Global_2641069[iVar4 /*176*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_86(&Var1, Global_2641069[iVar4 /*176*/][iVar0 /*7*/], Global_2641069[iVar4 /*176*/][iVar0 /*7*/].f_3, Global_2641069[iVar4 /*176*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642654[8])
	{
		if (func_100(Var1, &(Global_2641069[8 /*176*/][iVar0 /*7*/])))
		{
			if (bParam1)
			{
				func_86(&Var1, Global_2641069[8 /*176*/][iVar0 /*7*/], Global_2641069[8 /*176*/][iVar0 /*7*/].f_3, Global_2641069[8 /*176*/][iVar0 /*7*/].f_6, 1036831949, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_100(struct<3> Param0, var uParam3)
{
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, *uParam3, uParam3->f_3, uParam3->f_6, false, true);
}

int func_101(struct<2> Param0, var uParam2)
{
	if (Param0.f_1 > Global_2642665[0])
	{
		return 0;
	}
	if (Param0.f_1 > Global_2642665[1])
	{
		if (Param0.f_0 < Global_2642669[0])
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	if (Param0.f_1 > Global_2642665[2])
	{
		if (Param0.f_0 < Global_2642669[1])
		{
			return 3;
		}
		else if (Param0.f_0 < Global_2642669[2])
		{
			return 4;
		}
		else if (Param0.f_0 < Global_2642669[3])
		{
			return 5;
		}
		else
		{
			return 6;
		}
	}
	return 7;
}

int func_102(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	if (func_111(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (Global_5242880 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_5242880)
			{
				if (Global_5242880.f_1[iVar0 /*170*/].f_7 != 0)
				{
					if (func_103(Param0, Global_5242880.f_1[iVar0 /*170*/], Global_5242880.f_1[iVar0 /*170*/].f_6, Global_5242880.f_1[iVar0 /*170*/].f_7, fParam3))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_7125 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_7125)
			{
				if (Global_4980736.f_7128[iVar0 /*668*/].f_16 != 0)
				{
					if (func_103(Param0, Global_4980736.f_7128[iVar0 /*668*/], Global_4980736.f_7128[iVar0 /*668*/].f_3, Global_4980736.f_7128[iVar0 /*668*/].f_16, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_4980736.f_71080 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_4980736.f_71080)
			{
				if (Global_4980736.f_71084[iVar0 /*631*/].f_13 != 0)
				{
					if (func_103(Param0, Global_4980736.f_71084[iVar0 /*631*/], Global_4980736.f_71084[iVar0 /*631*/].f_3, Global_4980736.f_71084[iVar0 /*631*/].f_13, 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058150.f_273 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058150.f_273)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_238[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058150.f_238[iVar0], false))
				{
					if (func_103(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058150.f_238[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058150.f_238[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058150.f_238[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
		if (Global_1058150.f_271 > 0)
		{
			iVar0 = 0;
			while (iVar0 < Global_1058150.f_271)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_124[iVar0]) && !ENTITY::IS_ENTITY_DEAD(Global_1058150.f_124[iVar0], false))
				{
					if (func_103(Param0, ENTITY::GET_ENTITY_COORDS(Global_1058150.f_124[iVar0], true), ENTITY::GET_ENTITY_HEADING(Global_1058150.f_124[iVar0]), ENTITY::GET_ENTITY_MODEL(Global_1058150.f_124[iVar0]), 0.5f))
					{
						return 1;
					}
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_103(struct<3> Param0, struct<3> Param3, float fParam6, int iParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	float fVar6;
	
	if (SYSTEM::VDIST(Param0, Param3) < func_110(iParam7, 1008981770))
	{
		func_104(Param3, fParam6, iParam7, &Var0, &Var3, &fVar6, fParam8);
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var0, Var3, fVar6, false, true))
		{
			return 1;
		}
	}
	return 0;
}

void func_104(struct<3> Param0, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, float fParam8)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	struct<3> Var9;
	struct<3> Var12;
	
	Var0 = { 0f, 1f, 0f };
	func_91(&Var0, 0f, 0f, fParam3);
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	func_105(iParam4, &Var3, &Var6, 1086324736, 1080033280, 1077936128);
	Var9 = { Param0 + Var0 * FtoV((Var6.f_1 + fParam8)) };
	Var9.f_2 = (Var9.f_2 - ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	Var12 = { Param0 - Var0 * FtoV(((Var3.f_1 * -1f) + fParam8)) };
	Var12.f_2 = (Var12.f_2 + ((0.5f * MISC::ABSF((Var6.f_2 - Var3.f_2))) + fParam8));
	*uParam5 = { Var9 };
	*uParam6 = { Var12 };
	*uParam7 = MISC::ABSF((Var6.f_0 - Var3.f_0));
}

void func_105(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	if (STREAMING::IS_MODEL_VALID(iParam0))
	{
		MISC::GET_MODEL_DIMENSIONS(iParam0, uParam1, uParam2);
	}
	else
	{
		iVar0 = func_108(iParam0);
		if (iVar0 != 0)
		{
			func_106(iVar0, uParam1, uParam2, 1086324736, 1080033280, 1077936128);
			return;
		}
	}
	if (SYSTEM::VMAG(*uParam1) <= 0.01f || SYSTEM::VMAG(*uParam2) <= 0.01f)
	{
		if (iParam0 == joaat("kosatka"))
		{
			if (fParam4 < 20.7f)
			{
				fParam4 = 20.7f;
			}
			if (fParam3 < 137.2f)
			{
				fParam3 = 137.2f;
			}
			if (fParam5 < 21.1f)
			{
				fParam5 = 21.1f;
			}
		}
		*uParam1 = (0f - (fParam4 * 0.5f));
		*uParam2 = (0f + (fParam4 * 0.5f));
		uParam1->f_1 = (0f - (fParam3 * 0.5f));
		uParam2->f_1 = (0f + (fParam3 * 0.5f));
		uParam1->f_2 = (0f - (fParam5 * 0.5f));
		uParam2->f_2 = (0f + (fParam5 * 0.5f));
	}
}

void func_106(int iParam0, var* uParam1, var* uParam2, float fParam3, float fParam4, float fParam5)
{
	int iVar0;
	
	func_107(iParam0, &Global_1576486);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (STREAMING::IS_MODEL_VALID(Global_1576486[iVar0]))
		{
			MISC::GET_MODEL_DIMENSIONS(Global_1576486[iVar0], &(Global_1576490[iVar0 /*3*/]), &(Global_1576497[iVar0 /*3*/]));
		}
		if (SYSTEM::VMAG(Global_1576490[iVar0 /*3*/]) <= 0.01f || SYSTEM::VMAG(Global_1576497[iVar0 /*3*/]) <= 0.01f)
		{
			Global_1576490[iVar0 /*3*/] = (0f - (fParam4 * 0.5f));
			Global_1576497[iVar0 /*3*/] = (0f + (fParam4 * 0.5f));
			Global_1576490[iVar0 /*3*/].f_1 = (0f - (fParam3 * 0.5f));
			Global_1576497[iVar0 /*3*/].f_1 = (0f + (fParam3 * 0.5f));
			Global_1576490[iVar0 /*3*/].f_2 = (0f - (fParam5 * 0.5f));
			Global_1576497[iVar0 /*3*/].f_2 = (0f + (fParam5 * 0.5f));
		}
		Global_1576504[iVar0] = (Global_1576497[iVar0 /*3*/] - Global_1576490[iVar0 /*3*/]);
		Global_1576507[iVar0] = (Global_1576497[iVar0 /*3*/].f_1 - Global_1576490[iVar0 /*3*/].f_1);
		Global_1576510[iVar0] = (Global_1576497[iVar0 /*3*/].f_2 - Global_1576490[iVar0 /*3*/].f_2);
		if (Global_1576504[iVar0] > Global_1576513)
		{
			Global_1576513 = Global_1576504[iVar0];
		}
		if (Global_1576510[iVar0] > Global_1576514)
		{
			Global_1576514 = Global_1576510[iVar0];
		}
		iVar0++;
	}
	Global_1576515 = (Global_1576513 * -0.5f);
	Global_1576518 = (Global_1576513 * 0.5f);
	Global_1576515.f_1 = ((((0.5f * Global_1576507[0]) + Global_1576507[1]) + Global_1576486.f_3) * -1f);
	Global_1576518.f_1 = (0.5f * Global_1576507[0]);
	Global_1576515.f_2 = (Global_1576510[0] * -0.5f);
	Global_1576518.f_2 = (Global_1576510[0] * 0.5f);
	*uParam1 = { Global_1576515 };
	*uParam2 = { Global_1576518 };
}

void func_107(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 1:
			(*uParam1)[0] = joaat("hauler2");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 2:
			(*uParam1)[0] = joaat("phantom3");
			(*uParam1)[1] = joaat("trailerlarge");
			uParam1->f_3 = -2.6f;
			break;
		
		case 3:
			(*uParam1)[0] = joaat("nightshark");
			(*uParam1)[1] = joaat("trailersmall2");
			uParam1->f_3 = 0.5f;
			break;
	}
}

int func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0;
		if (func_109(iVar1) == iParam0)
		{
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_109(int iParam0)
{
	int iVar0;
	
	iVar0 = (1000 + iParam0);
	return iVar0;
}

float func_110(int iParam0, float fParam1)
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	float fVar9;
	
	if (iParam0 == 0)
	{
		return 5f;
	}
	func_105(iParam0, &Var0, &Var3, 1086324736, 1080033280, 1077936128);
	Var6 = { Var3 - Var0 };
	fVar9 = (SYSTEM::SQRT(((((Var6.f_0 * 0.5f) * (Var6.f_0 * 0.5f)) + ((Var6.f_1 * 0.5f) * (Var6.f_1 * 0.5f))) + ((Var6.f_2 * 0.5f) * (Var6.f_2 * 0.5f)))) + fParam1);
	return fVar9;
}

int func_111(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (func_112(iParam0))
		{
			return 1;
		}
	}
	if (!bParam2)
	{
	}
	if (Global_1845298[iParam0 /*881*/] == -1)
	{
		return 0;
	}
	return 1;
}

bool func_112(int iParam0)
{
	return func_113(iParam0);
}

var func_113(int iParam0)
{
	return BitTest(Global_1845298[iParam0 /*881*/].f_11.f_1, 0);
}

int func_114(struct<3> Param0, var uParam3, var uParam4, var uParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;
	
	if (func_121(Param0))
	{
		if (func_84(uParam3, bParam6, 0, 1, 1))
		{
			if (bParam6)
			{
			}
			return 1;
		}
	}
	if (func_116(uParam3, bParam6, 1))
	{
		if (bParam6)
		{
		}
		return 1;
	}
	if (bParam7)
	{
		if (func_115(*uParam3, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		if (SYSTEM::VDIST(*uParam3, *(uParam4[iVar0 /*3*/])) < (*uParam5)[iVar0])
		{
			if (bParam6)
			{
				func_90(uParam3, *(uParam4[iVar0 /*3*/]), (*uParam5)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_115(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		if (SYSTEM::VDIST(Param0, Global_2635562.f_3040[iVar0 /*3*/]) < fParam3)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_116(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	var uVar1;
	struct<3> Var2;
	
	if (func_118(*uParam0, &iVar0))
	{
		if (bParam1)
		{
			Var2 = { *uParam0 };
			func_85(&Var2, &(Global_2635562.f_369[iVar0 /*12*/]), 1036831949, 0, bParam2);
			if (func_118(Var2, &uVar1) || func_117(Var2))
			{
				Var2 = { *uParam0 };
				func_85(&Var2, &(Global_2635562.f_369[iVar0 /*12*/]), 1036831949, 1, bParam2);
			}
			*uParam0 = { Var2 };
		}
		return 1;
	}
	return 0;
}

int func_117(struct<3> Param0)
{
	float fVar0;
	
	if (Global_2635562.f_597 > 0f)
	{
		fVar0 = SYSTEM::VDIST(Param0, Global_2635562.f_594);
		if (fVar0 < Global_2635562.f_597)
		{
			return 1;
		}
	}
	return 0;
}

int func_118(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	
	if (func_120())
	{
		return 0;
	}
	iVar1 = func_119();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (Global_2635562.f_369[iVar0 /*12*/].f_9 == 1)
		{
			if (func_93(Param0, &(Global_2635562.f_369[iVar0 /*12*/]), 1008981770, 0, 0))
			{
				*uParam3 = iVar0;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_119()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_2635562.f_369[iVar0 /*12*/].f_9)
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

bool func_120()
{
	return Global_1950702.f_765;
}

int func_121(struct<3> Param0)
{
	int iVar0;
	struct<3> Var1;
	
	if (!Global_2635562.f_516 && !Global_2635562.f_517)
	{
		if (!Global_2635562.f_45.f_318)
		{
			if (!func_125(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!func_124(Param0, 1008981770))
			{
				if (!func_84(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_84(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = func_123(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { func_122(&(Global_2635562.f_45[iVar0 /*12*/])) };
					if (!func_84(&Var1, 0, 0, 0, 1))
					{
						if (!func_84(&Param0, 0, 0, 0, 1))
						{
							return 1;
						}
					}
				}
			}
		}
	}
	return 0;
}

Vector3 func_122(var uParam0)
{
	switch (uParam0->f_10)
	{
		case 0:
			return *uParam0;
			break;
		
		case 1:
		case 2:
			return *uParam0 + uParam0->f_3 * Vector(0.5f, 0.5f, 0.5f);
			break;
	}
	return *uParam0;
}

int func_123(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_93(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_124(struct<3> Param0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_2635562.f_45[iVar0 /*12*/].f_9)
		{
			if (func_93(Param0, &(Global_2635562.f_45[iVar0 /*12*/]), fParam3, 0, 0))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_125(int iParam0, bool bParam1)
{
	if (func_127() != 0)
	{
		return func_126(iParam0) != 0;
	}
	return func_111(iParam0, bParam1, 0);
}

int func_126(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		return Global_2658293[iParam0 /*468*/].f_1;
	}
	return 0;
}

int func_127()
{
	return Global_33815;
}

int func_128(struct<3> Param0, var uParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 999999.9f;
	if (Global_2635562.f_2563 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635562.f_2563)
		{
			fVar3 = SYSTEM::VDIST(Global_2635562.f_2564[iVar0 /*4*/], Param0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
			iVar0++;
		}
		if (!iVar1 == -1)
		{
			*uParam3 = { Global_2635562.f_2564[iVar1 /*4*/] };
			return 1;
		}
	}
	return 0;
}

int func_129(struct<3> Param0, struct<3> Param3, struct<3> Param6, bool bParam9, bool bParam10)
{
	func_130(&Param3, &Param6);
	if (((!Param0.f_0 >= Param3.f_0 || !Param0.f_1 >= Param3.f_1) || !Param0.f_0 <= Param6.f_0) || !Param0.f_1 <= Param6.f_1)
	{
		return 0;
	}
	if (bParam9 && bParam10)
	{
		return 1;
	}
	else if (bParam9)
	{
		if (Param0.f_2 >= Param3.f_2)
		{
			return 1;
		}
	}
	else if (bParam10)
	{
		if (Param0.f_2 <= Param6.f_2)
		{
			return 1;
		}
	}
	else if (Param0.f_2 >= Param3.f_2 && Param0.f_2 <= Param6.f_2)
	{
		return 1;
	}
	return 0;
}

void func_130(var uParam0, var uParam1)
{
	var uVar0;
	
	if (*uParam0 > *uParam1)
	{
		uVar0 = *uParam1;
		*uParam1 = *uParam0;
		*uParam0 = uVar0;
	}
	if (uParam0->f_1 > uParam1->f_1)
	{
		uVar0 = uParam1->f_1;
		uParam1->f_1 = uParam0->f_1;
		uParam0->f_1 = uVar0;
	}
	if (uParam0->f_2 > uParam1->f_2)
	{
		uVar0 = uParam1->f_2;
		uParam1->f_2 = uParam0->f_2;
		uParam0->f_2 = uVar0;
	}
}

int func_131(struct<3> Param0, struct<3> Param3, float fParam6)
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (Param0.f_0 > Param3.f_0)
	{
		Var3.f_0 = Param0.f_0;
		Var0.f_0 = Param3.f_0;
	}
	else
	{
		Var3.f_0 = Param3.f_0;
		Var0.f_0 = Param0.f_0;
	}
	if (Param0.f_1 > Param3.f_1)
	{
		Var3.f_1 = Param0.f_1;
		Var0.f_1 = Param3.f_1;
	}
	else
	{
		Var3.f_1 = Param3.f_1;
		Var0.f_1 = Param0.f_1;
	}
	if (Param0.f_2 > Param3.f_2)
	{
		Var3.f_2 = Param0.f_2;
		Var0.f_2 = Param3.f_2;
	}
	else
	{
		Var3.f_2 = Param3.f_2;
		Var0.f_2 = Param0.f_2;
	}
	if (SYSTEM::VMAG(Var3 - Var0) > 100f)
	{
		return 1;
	}
	if (fParam6 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_132(float fParam0)
{
	if (fParam0 > 50f)
	{
		return 1;
	}
	return 0;
}

int func_133(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	struct<3> Var0;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	struct<3> Var9;
	float fVar12;
	bool bVar13;
	
	if (Global_2635562.f_2792.f_1 == 0 && Global_2635562.f_2792 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2635562.f_2792.f_1)))
			{
				case 0:
					func_213(uParam1, uParam2);
					if (!Global_2635562.f_2792.f_2)
					{
						if (uParam2->f_7 && Global_2635562.f_556.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2635562.f_2767 };
							}
							if (uParam1->f_5 && func_82(Global_2635562.f_490))
							{
								if (!Global_2635562.f_2792.f_5)
								{
									Global_2635562.f_2792.f_5 = 1;
								}
								else
								{
									func_83(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_83(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				
				case 1:
					func_213(uParam1, uParam2);
					break;
				
				case 2:
					return 0;
					break;
				
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_213(uParam1, uParam2);
					Global_2635562.f_2792.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_213(uParam1, uParam2);
				if (!Global_2635562.f_2792.f_2)
				{
					Global_2635562.f_2792.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_210(Global_2635562.f_556, &(Global_2635562.f_2792.f_57), &(Global_2635562.f_2792.f_90));
	}
	if (uParam2->f_7 && !Global_2635562.f_2792.f_4)
	{
		Global_2635562.f_2792.f_4 = 1;
		func_145(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar6 = 0;
	if (uParam1->f_5)
	{
		iVar7 = 64;
	}
	else
	{
		iVar7 = 32;
	}
	if (Global_2635562.f_2792.f_1 > 0 || Global_2635562.f_2792 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar4 = 0;
			while (iVar4 < Global_2635562.f_2792.f_1)
			{
				if (iVar6 < iVar7)
				{
					if (iVar4 <= Global_2635562.f_2792.f_3)
					{
						iVar4 = Global_2635562.f_2792.f_3 + 1;
					}
					if (iVar4 > (Global_2635562.f_2792.f_1 - 1))
					{
						iVar4 = (Global_2635562.f_2792.f_1 - 1);
					}
					if (iVar4 < 0)
					{
						iVar4 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, &Var0, &fVar3);
						fVar3 = (fVar3 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar4, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar5 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar4);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar4, &iVar5);
					}
					func_145(Var0, fVar3, uParam1, uParam2, 0, iVar5);
					iVar6++;
					Global_2635562.f_2792.f_3 = iVar4;
				}
				else
				{
					return 0;
				}
				iVar4++;
			}
		}
		else
		{
			iVar4 = Global_2635562.f_2792.f_1;
		}
		if (Global_2635562.f_2792.f_1 == iVar4)
		{
			if (uParam1->f_5 && Global_2635562.f_3201)
			{
				func_139(&(Global_2635562.f_2792.f_6[0 /*10*/]), &(Global_2635562.f_2792.f_6[1 /*10*/]), &(Global_2635562.f_2792.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && func_82(Global_2635562.f_490))
			{
				if (Global_2635562.f_2792.f_2)
				{
					func_81(uParam0, &(Global_2635562.f_2792.f_6));
					func_138(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635562.f_2767 };
					func_83(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					func_138(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2635562.f_2792.f_2)
			{
				func_81(uParam0, &(Global_2635562.f_2792.f_6));
				func_138(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2792.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar4, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!func_99(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					func_138(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2635562.f_2767 };
					func_83(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					iVar8 = func_137();
					if ((func_136() && func_135(iVar8)) && func_134(iVar8, 1))
					{
						Var9 = { *(uParam0[0 /*3*/]) };
						if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Var9, &fVar12, false, false))
						{
							Var9.f_2 = (Var9.f_2 + 10f);
							if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var9, &fVar12, false, false))
							{
								(uParam0[0 /*3*/])->f_2 = (fVar12 + 2f);
							}
						}
					}
					func_138(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2635562.f_2767 };
				func_83(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				func_138(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2635562.f_2767 };
		if (uParam1->f_5 && func_82(Global_2635562.f_490))
		{
			if (!Global_2635562.f_2792.f_5)
			{
				Global_2635562.f_2792.f_5 = 1;
			}
			else
			{
				func_83(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar13 = false;
			}
			else
			{
				bVar13 = true;
			}
			func_83(uParam0[0 /*3*/], 0, bVar13, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		func_138(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

int func_134(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_96(iParam0);
	if ((((iVar0 == 5 || iVar0 == 8) || iVar0 == 12) || iVar0 == 20) || iVar0 == 25)
	{
		return 1;
	}
	else if (iVar0 == 6 || iVar0 == 10)
	{
		return iParam1;
	}
	return 0;
}

int func_135(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 180)
	{
		return 1;
	}
	return 0;
}

int func_136()
{
	if (func_120())
	{
		return Global_1950702.f_766 == 0;
	}
	return 0;
}

var func_137()
{
	return Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_325.f_8;
}

void func_138(struct<3> Param0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (iVar0 > 0)
		{
			Global_2635562.f_2928[(3 - iVar0) /*3*/] = { Global_2635562.f_2928[(3 - iVar0 + 1) /*3*/] };
		}
		iVar0++;
	}
	Global_2635562.f_2928[0 /*3*/] = { Param0 };
}

void func_139(var uParam0, var uParam1, var uParam2)
{
	if (func_82(Global_2635562.f_490) && func_144() < 4096)
	{
		func_143(uParam0, 0f);
		func_143(uParam1, uParam0->f_2);
		func_143(uParam2, uParam1->f_2);
	}
	else
	{
		func_142(uParam0);
		func_141(uParam2, uParam0->f_4);
		func_140(uParam1, uParam0->f_4, uParam2->f_4);
	}
}

void func_140(var uParam0, struct<3> Param1, struct<3> Param4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<10> Var5;
	
	fVar1 = -1f;
	Var5.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2638819[iVar0 /*10*/].f_4, Param1);
			fVar3 = SYSTEM::VDIST(Global_2638819[iVar0 /*10*/].f_4, Param4);
			fVar4 = (fVar2 + fVar3);
			fVar4 = (fVar4 * Global_2638819[iVar0 /*10*/].f_1);
			if (fVar4 > fVar1)
			{
				fVar1 = fVar4;
				Var5 = { Global_2638819[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var5 };
}

void func_141(var uParam0, struct<3> Param1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	struct<10> Var3;
	
	fVar1 = -1f;
	Var3.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > 0)
		{
			fVar2 = SYSTEM::VDIST(Global_2638819[iVar0 /*10*/].f_4, Param1);
			fVar2 = (fVar2 * Global_2638819[iVar0 /*10*/].f_1);
			if (fVar2 > fVar1)
			{
				fVar1 = fVar2;
				Var3 = { Global_2638819[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var3 };
}

void func_142(var uParam0)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = -1f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > 0)
		{
			if (Global_2638819[iVar0 /*10*/].f_1 > fVar1)
			{
				fVar1 = Global_2638819[iVar0 /*10*/].f_1;
				Var2 = { Global_2638819[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

void func_143(var uParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	struct<10> Var2;
	
	fVar1 = 999999.9f;
	Var2.f_2 = 1176256410;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > 0)
		{
			if (Global_2638819[iVar0 /*10*/].f_2 < fVar1 && Global_2638819[iVar0 /*10*/].f_2 > fParam1)
			{
				fVar1 = Global_2638819[iVar0 /*10*/].f_2;
				Var2 = { Global_2638819[iVar0 /*10*/] };
			}
		}
		iVar0++;
	}
	*uParam0 = { Var2 };
}

int func_144()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > iVar1)
		{
			iVar1 = Global_2638819[iVar0 /*10*/];
		}
		iVar0++;
	}
	return iVar1;
}

void func_145(struct<3> Param0, float fParam3, var uParam4, var uParam5, bool bParam6, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	var uVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar15;
	int iVar16;
	struct<3> Var17;
	struct<3> Var20;
	float fVar23;
	int iVar24;
	struct<10> Var25;
	bool bVar35;
	bool bVar36;
	
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam4->f_5)
	{
		if (Global_2635562.f_490 == 1)
		{
			if (MISC::ABSF((Global_2635562.f_513.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam4->f_5)
	{
		if (func_207(PLAYER::PLAYER_ID()))
		{
			if (iParam7 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam7 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam7 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam7 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam4->f_5 && uParam4->f_6)
	{
		if (!func_206(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam4->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam4->f_5)
	{
		if (!func_205(Param0, uParam5->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar15 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam5->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam5->f_13[iVar11 /*3*/]) > uParam5->f_20[iVar11])
			{
				bVar15 = false;
			}
		}
		iVar11++;
	}
	if (bVar15)
	{
		if ((SYSTEM::VMAG(uParam5->f_23) > 0f && SYSTEM::VMAG(uParam5->f_26) > 0f) && uParam5->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam5->f_23, uParam5->f_26, uParam5->f_29, false, true))
			{
				bVar15 = false;
			}
		}
	}
	if (bVar15)
	{
		iVar8 += 256;
	}
	if (uParam4->f_5)
	{
		if (func_199(Param0, fParam3, uParam4->f_15, func_204(1), uParam4->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2635562.f_3;
		}
	}
	else if (!func_196(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam4->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!func_191(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!func_191(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635562.f_702)
		{
			Var12 = { Global_2635562.f_513 };
			if (Global_2635562.f_490 == 26)
			{
				Var12 = { Global_2635562.f_556.f_18 };
			}
			if (!func_115(Param0, 0.5f))
			{
				if (func_121(Var12))
				{
					if (!func_84(&Param0, 0, 0, 0, 1) && !func_190(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!func_190(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!func_189(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam4->f_5)
	{
		if (!(func_188(PLAYER::PLAYER_ID()) && func_187(PLAYER::PLAYER_ID())))
		{
			if (!func_186(&Param0, &(Global_2635562.f_2792.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam4->f_5)
	{
		if (!func_187(PLAYER::PLAYER_ID()))
		{
			if (!func_185(Param0, &(Global_2635562.f_2792.f_57), &(Global_2635562.f_2792.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (func_184(Param0))
	{
		if (uParam4->f_5)
		{
			if (func_82(Global_2635562.f_490))
			{
				if (func_124(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam4->f_5)
	{
		if (func_183(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2635562.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam4->f_5)
	{
		if (!iParam7 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam7 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam4->f_5)
	{
		if (!Global_2635562.f_702)
		{
			if (!func_116(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!func_99(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar16 = func_123(Param0, 1008981770);
		if (iVar16 > -1)
		{
			func_182(Param0, &Var17, &Var20, &fVar23);
			if (!func_177(&(Global_2635562.f_45[iVar16 /*12*/]), Var17, Var20, fVar23))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (func_102(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam5->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam5->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam4->f_5)
	{
	}
	else if (func_176(Param0, 1, 0, uParam4->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_173(0))
	{
		if (uParam4->f_5)
		{
			iVar11 = 0;
			while (iVar11 <= 9)
			{
				if (Global_2635562.f_369[iVar11 /*12*/].f_9 == 1)
				{
					if (Global_2635562.f_369[iVar11 /*12*/].f_10 == 0)
					{
						if (func_221(Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_6, 1, 1))
						{
							func_90(&Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_6, 5f, 0, 0);
							iVar8 = -1;
						}
					}
					else if (Global_2635562.f_369[iVar11 /*12*/].f_10 == 2)
					{
						if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_3, Global_2635562.f_369[iVar11 /*12*/].f_6, false, true))
						{
							func_86(&Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_3, Global_2635562.f_369[iVar11 /*12*/].f_6, 5f, 0);
							iVar8 = -1;
						}
					}
					else if (Global_2635562.f_369[iVar11 /*12*/].f_10 == 1)
					{
						if (func_129(Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_3, 0, 0))
						{
							func_89(&Param0, Global_2635562.f_369[iVar11 /*12*/], Global_2635562.f_369[iVar11 /*12*/].f_3, 5f, 0);
							iVar8 = -1;
						}
					}
				}
				iVar11++;
			}
		}
	}
	Var25.f_2 = 1176256410;
	bVar35 = false;
	bVar36 = false;
	if (Global_2635562.f_3201 && uParam4->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam6)
			{
				uParam5->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam4->f_21)
			{
				fVar0 = func_164(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			else
			{
				fVar0 = func_164(Param0, Global_2635562.f_2767, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (func_82(Global_2635562.f_490) && iVar8 < 4096)
			{
				Var25.f_2 = func_162(Param0);
			}
			uVar7 = func_151(Param0, 1, 0, 0, 0, 0);
			Var25.f_4 = { Param0 };
			Var25.f_7 = fParam3;
			Var25.f_0 = iVar8;
			Var25.f_1 = fVar0;
			Var25.f_9 = uVar7;
			func_150(Var25);
			Global_2635562.f_2792.f_2 = 1;
		}
	}
	else
	{
		iVar24 = 0;
		while (iVar24 < 5)
		{
			if (iVar8 >= Global_2635562.f_2792.f_6[iVar24 /*10*/])
			{
				if (uParam4->f_5)
				{
					if (!bVar35)
					{
						if (bParam6)
						{
							uParam5->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam4->f_21)
						{
							fVar0 = func_164(Param0, uParam4->f_18, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						else
						{
							fVar0 = func_164(Param0, Global_2635562.f_2767, uParam5->f_6, uParam5->f_4, bVar4, iVar10, &(Var25.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar35 = true;
					}
					if ((func_82(Global_2635562.f_490) && iVar8 == Global_2635562.f_2792.f_6[iVar24 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar36)
						{
							fVar2 = func_162(Param0);
							bVar36 = true;
						}
						if (fVar2 < Global_2635562.f_2792.f_6[iVar24 /*10*/].f_2)
						{
							Var25.f_4 = { Param0 };
							Var25.f_7 = fParam3;
							Var25.f_0 = iVar8;
							Var25.f_1 = fVar0;
							Var25.f_2 = fVar2;
							func_149(Var25, iVar24);
							Global_2635562.f_2792.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2635562.f_2792.f_6[iVar24 /*10*/] || (iVar8 == Global_2635562.f_2792.f_6[iVar24 /*10*/] && fVar0 > Global_2635562.f_2792.f_6[iVar24 /*10*/].f_1))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_1 = fVar0;
						func_149(Var25, iVar24);
						Global_2635562.f_2792.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar35)
					{
						if (uParam4->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = func_147(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = func_151(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = func_146(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = func_146(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar35 = true;
					}
					if (iVar8 > Global_2635562.f_2792.f_6[iVar24 /*10*/] || (iVar8 == Global_2635562.f_2792.f_6[iVar24 /*10*/] && fVar3 > Global_2635562.f_2792.f_6[iVar24 /*10*/].f_3))
					{
						Var25.f_4 = { Param0 };
						Var25.f_7 = fParam3;
						Var25.f_0 = iVar8;
						Var25.f_3 = fVar3;
						func_149(Var25, iVar24);
						Global_2635562.f_2792.f_2 = 1;
						return;
					}
				}
			}
			iVar24++;
		}
	}
}

float func_146(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5)
{
	float fVar0;
	
	if (fParam1 >= fParam3)
	{
		fParam1 = (fParam3 * 0.5f);
	}
	if (fParam0 < fParam1)
	{
		fParam0 = fParam1;
	}
	if (fParam0 > fParam3)
	{
		fParam0 = fParam3;
	}
	if (fParam2 < fParam3 && fParam2 > fParam1)
	{
		if (fParam0 < fParam2)
		{
			fVar0 = (fParam4 + ((1f - fParam4) - ((1f - fParam4) * ((fParam2 - fParam0) / (fParam2 - fParam1)))));
		}
		else
		{
			fVar0 = (fParam5 + ((1f - fParam5) - ((1f - fParam5) * ((fParam0 - fParam2) / (fParam3 - fParam2)))));
		}
	}
	else
	{
		fVar0 = (fParam4 + (((fParam0 - fParam1) / (fParam3 - fParam1)) * (fParam5 - fParam4)));
	}
	return fVar0;
}

float func_147(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	
	bVar2 = false;
	fVar3 = 1E+13f;
	if (iParam4 && !bParam6)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
				{
					fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false));
					if (fVar4 < fVar3)
					{
						fVar3 = fVar4;
						bVar2 = true;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_218(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if (func_148(iVar1) || !bParam8)
					{
						if (!bParam6)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
									if (fVar4 < fVar3)
									{
										fVar3 = fVar4;
										bVar2 = true;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam7 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								fVar4 = SYSTEM::VDIST2(Param0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false));
								if (fVar4 < fVar3)
								{
									fVar3 = fVar4;
									bVar2 = true;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar2)
	{
		return SYSTEM::SQRT(fVar3);
	}
	return -1f;
}

int func_148(int iParam0)
{
	if (ENTITY::IS_ENTITY_VISIBLE_TO_SCRIPT(PLAYER::GET_PLAYER_PED(iParam0)) || Global_2658293[iParam0 /*468*/].f_259)
	{
		return 1;
	}
	return 0;
}

void func_149(struct<10> Param0, int iParam10)
{
	struct<10> Var0;
	
	Var0.f_2 = 1176256410;
	Var0 = { Global_2635562.f_2792.f_6[iParam10 /*10*/] };
	Global_2635562.f_2792.f_6[iParam10 /*10*/] = { Param0 };
	if (iParam10 < 4)
	{
		func_149(Var0, iParam10 + 1);
	}
}

void func_150(struct<10> Param0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	float fVar12;
	int iVar13;
	
	Var1.f_2 = 1176256410;
	iVar11 = func_144();
	if (Param0.f_0 > iVar11)
	{
		iVar11 = Param0.f_0;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] < iVar11)
		{
			Global_2638819[iVar0 /*10*/] = { Var1 };
		}
		iVar0++;
	}
	if (Param0.f_0 < iVar11)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] == 0)
		{
			Global_2638819[iVar0 /*10*/] = { Param0 };
			return;
		}
		iVar0++;
	}
	fVar12 = 9999.9f;
	iVar13 = -1;
	iVar0 = 0;
	while (iVar0 < 128)
	{
		if (Global_2638819[iVar0 /*10*/] > 0)
		{
			if (Global_2638819[iVar0 /*10*/].f_1 < fVar12)
			{
				fVar12 = Global_2638819[iVar0 /*10*/].f_1;
				iVar13 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar13 > -1)
	{
		Global_2638819[iVar13 /*10*/] = { Param0 };
	}
}

float func_151(struct<3> Param0, bool bParam3, bool bParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	struct<3> Var5;
	struct<3> Var8;
	int iVar11;
	
	fVar3 = 999999.9f;
	bVar4 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar11 = iVar0;
		if (func_6(iVar11, 1, 1) || (iParam7 == 1 && func_6(iVar11, 0, 0)))
		{
			if (!iVar11 == PLAYER::PLAYER_ID() || iParam5 == 1)
			{
				bVar4 = false;
				if (bParam3)
				{
					if (func_152(iVar11))
					{
						bVar4 = true;
					}
				}
				if (bParam4)
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar11) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar11) == -1 || !func_125(PLAYER::PLAYER_ID(), 1))
						{
							bVar4 = true;
						}
					}
				}
				if (bVar4)
				{
					if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar11) || !bParam6)
					{
						if (func_148(iVar11))
						{
							Var5 = { func_8(iVar11) };
							if (!iVar11 == PLAYER::PLAYER_ID())
							{
								Var8 = { NETWORK::NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(PLAYER::GET_PLAYER_PED(iVar11)) };
							}
							else
							{
								Var8 = { Var5 };
							}
							if (!bParam6)
							{
								if (Var5.f_2 < -100f)
								{
									Var5.f_2 = Param0.f_2;
								}
								if (Var8.f_2 < -100f)
								{
									Var8.f_2 = Param0.f_2;
								}
							}
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var5, true);
							fVar2 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var8, true);
							if (fVar1 < fVar3)
							{
								fVar3 = fVar1;
							}
							if (fVar2 < fVar3)
							{
								fVar3 = fVar2;
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return fVar3;
}

int func_152(int iParam0)
{
	if (func_6(iParam0, 0, 1))
	{
		if (!func_160(iParam0))
		{
			if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam0))
			{
				if (!PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
				{
					if (func_111(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_157(PLAYER::GET_PLAYER_TEAM(iParam0), PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), 0, -1))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
				else if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
				{
					if (!func_111(PLAYER::PLAYER_ID(), 1, 0))
					{
						if (!func_153(iParam0))
						{
							return 1;
						}
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_153(int iParam0)
{
	if (func_156(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	Global_2708615 = { func_155(iParam0) };
	if (NETWORK::NETWORK_IS_FRIEND(&Global_2708615))
	{
		return 1;
	}
	if (func_154(PLAYER::PLAYER_ID(), iParam0))
	{
		return 1;
	}
	return 0;
}

int func_154(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_12(iParam0);
	if (func_14(iVar0))
	{
		if (iVar0 == func_12(iParam1))
		{
			return 1;
		}
	}
	return 0;
}

struct<13> func_155(int iParam0)
{
	struct<13> Var0;
	
	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0, 13);
	return Var0;
}

int func_156(int iParam0, int iParam1)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		Global_2708615 = { func_155(iParam0) };
		Global_2708628 = { func_155(iParam1) };
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708615))
		{
			if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Global_2708628))
			{
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708545, 35, &Global_2708615);
				NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708580, 35, &Global_2708628);
				if (Global_2708545 == Global_2708580)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_157(int iParam0, int iParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam2 == 1)
	{
		if (iParam0 == iParam1)
		{
			return 1;
		}
		return 0;
	}
	if ((iParam0 > -1 && iParam1 > -1) && iParam0 == iParam1)
	{
		return 1;
	}
	if (((iParam0 > -1 && iParam0 < 4) && iParam1 > -1) && iParam1 < 4)
	{
		bVar0 = Global_1058150.f_14[iParam0];
		if (iParam3 != -1)
		{
			bVar0 = iParam3;
		}
		if (bVar0 < 17 && bVar0 > -1)
		{
			if (BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26719, bVar0))
			{
				bVar1 = Global_1058150.f_14[iParam1];
				if (bVar1 < 17 && bVar1 > -1)
				{
					switch (iParam0)
					{
						case 0:
							if (!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[bVar0], (0 + iParam1));
							}
							break;
						
						case 1:
							if (!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[bVar0], (4 + iParam1));
							}
							break;
						
						case 2:
							if (!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[bVar0], (8 + iParam1));
							}
							break;
						
						case 3:
							if (!func_158(iParam0, bVar0, iParam1, bVar1) || !func_158(iParam1, bVar1, iParam0, bVar0))
							{
								return BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26721[bVar0], (12 + iParam1));
							}
							break;
						}
					}
				}
			}
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3787, 0);
				
				case 1:
					return BitTest(Global_4718592.f_3787, 1);
				
				case 2:
					return BitTest(Global_4718592.f_3787, 2);
				
				case 3:
					return BitTest(Global_4718592.f_3787, 3);
				
				default:
			}
			break;
		
		case 1:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3787, 4);
				
				case 1:
					return BitTest(Global_4718592.f_3787, 5);
				
				case 2:
					return BitTest(Global_4718592.f_3787, 6);
				
				case 3:
					return BitTest(Global_4718592.f_3787, 7);
				
				default:
			}
			break;
		
		case 2:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3787, 8);
				
				case 1:
					return BitTest(Global_4718592.f_3787, 9);
				
				case 2:
					return BitTest(Global_4718592.f_3787, 10);
				
				case 3:
					return BitTest(Global_4718592.f_3787, 11);
				
				default:
			}
			break;
		
		case 3:
			switch (iParam1)
			{
				case 0:
					return BitTest(Global_4718592.f_3787, 12);
				
				case 1:
					return BitTest(Global_4718592.f_3787, 13);
				
				case 2:
					return BitTest(Global_4718592.f_3787, 14);
				
				case 3:
					return BitTest(Global_4718592.f_3787, 15);
				
				default:
			}
			break;
	}
	return 0;
}

int func_158(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == iParam2)
	{
		return 1;
	}
	if (!BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_26720, bParam1))
	{
		return 0;
	}
	if (!BitTest(Global_4718592.f_3838[iParam2 /*26988*/].f_26720, bParam3))
	{
		return 0;
	}
	iVar0 = 1;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar4 = ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID());
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar1 = iVar5;
		if (((!func_6(iVar1, 1, 1) || func_218(iVar1, 0)) || BitTest(Global_2658293[iVar1 /*468*/].f_203, 2)) || func_159(iVar1))
		{
		}
		else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam2)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (PED::IS_PED_INJURED(iVar2))
			{
			}
			else
			{
				iVar3 = ENTITY::GET_ENTITY_MODEL(iVar2);
				if (iVar4 == joaat("mp_f_freemode_01") || iVar4 == joaat("mp_m_freemode_01"))
				{
					if (iVar3 == joaat("mp_f_freemode_01") || iVar3 == joaat("mp_m_freemode_01"))
					{
						return 1;
					}
					else
					{
						return 0;
					}
				}
				else if (iVar4 != iVar3)
				{
					return 0;
				}
			}
		}
		iVar5++;
	}
	return iVar0;
}

var func_159(int iParam0)
{
	return BitTest(Global_1845298[iParam0 /*881*/].f_36.f_18, 14);
}

int func_160(int iParam0)
{
	if (func_218(iParam0, 0))
	{
		return 1;
	}
	if (func_161())
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return 1;
		}
	}
	if (BitTest(Global_2658293[iParam0 /*468*/].f_203, 2))
	{
		return 1;
	}
	return 0;
}

bool func_161()
{
	return BitTest(Global_2621446, 3);
}

float func_162(struct<3> Param0)
{
	var uVar0;
	
	return func_163(Param0, &(Global_2635562.f_45), &uVar0);
}

float func_163(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = -1;
	fVar2 = 1E+07f;
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if ((uParam3[iVar0 /*12*/])->f_9)
		{
			fVar1 = 0f;
			switch ((uParam3[iVar0 /*12*/])->f_10)
			{
				case 0:
					fVar1 = SYSTEM::VDIST(*(uParam3[iVar0 /*12*/]), Param0);
					fVar1 = (fVar1 - ((uParam3[iVar0 /*12*/])->f_6 + (IntToFloat(Global_2635562.f_3038) * (uParam3[iVar0 /*12*/])->f_8)));
					break;
				
				case 1:
				case 2:
					if (Param0.f_0 < (*uParam3)[iVar0 /*12*/])
					{
						fVar1 = (fVar1 + ((*uParam3)[iVar0 /*12*/] - Param0.f_0));
					}
					else if (Param0.f_0 > (uParam3[iVar0 /*12*/])->f_3)
					{
						fVar1 = (fVar1 + (Param0.f_0 - (uParam3[iVar0 /*12*/])->f_3));
					}
					if (Param0.f_1 < (uParam3[iVar0 /*12*/])->f_1)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_1 - Param0.f_1));
					}
					else if (Param0.f_1 > (uParam3[iVar0 /*12*/])->f_3.f_1)
					{
						fVar1 = (fVar1 + (Param0.f_1 - (uParam3[iVar0 /*12*/])->f_3.f_1));
					}
					if (Param0.f_2 < (uParam3[iVar0 /*12*/])->f_2)
					{
						fVar1 = (fVar1 + ((uParam3[iVar0 /*12*/])->f_2 - Param0.f_2));
					}
					else if (Param0.f_2 > (uParam3[iVar0 /*12*/])->f_3.f_2)
					{
						fVar1 = (fVar1 + (Param0.f_2 - (uParam3[iVar0 /*12*/])->f_3.f_2));
					}
					break;
			}
			if (fVar1 < fVar2)
			{
				fVar2 = fVar1;
				iVar3 = iVar0;
			}
		}
		iVar0++;
	}
	if (fVar2 < 0f)
	{
		fVar2 = 0f;
	}
	*uParam4 = iVar3;
	return fVar2;
}

float func_164(struct<3> Param0, struct<3> Param3, bool bParam6, bool bParam7, bool bParam8, int iParam9, var uParam10)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	
	fVar1 = 1f;
	if (iParam9 > 0)
	{
		fVar1 = (SYSTEM::TO_FLOAT(iParam9) / SYSTEM::TO_FLOAT(8));
	}
	if (bParam6)
	{
		fVar0 = func_146(SYSTEM::VDIST(Param0, Param3), 0f, 0f, 200f, 1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.95f));
	}
	*uParam10 = 1E+07f;
	fVar4 = func_151(Param0, 1, 0, 0, 1, 0);
	fVar0 = func_146(fVar4, 0f, func_172(), func_170(), 0f, 0.3f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar4 = func_168(Param0);
	fVar0 = func_146(fVar4, 0f, 0f, 60f, 0.5f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	fVar5 = 100f;
	if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !func_125(PLAYER::PLAYER_ID(), 1))
	{
		fVar5 = 1f;
	}
	fVar4 = func_166(Param0, PLAYER::PLAYER_ID(), 0);
	fVar0 = func_146(fVar4, 0f, 0f, fVar5, 0f, 1f);
	fVar1 = (fVar1 * (fVar0 * 0.95f));
	if (fVar4 < *uParam10)
	{
		fVar4 = fVar4;
	}
	if (bParam7)
	{
		if (func_165(Param0, &fVar2, &fVar3))
		{
			if (fVar2 < 10f)
			{
				fVar2 = 10f;
			}
			if (fVar3 < 0.5f)
			{
				fVar3 = 0.5f;
			}
			fVar0 = func_146(fVar2, 0f, 0f, 200f, 1f, 0.1f);
			fVar0 = (fVar0 + func_146(fVar3, 0f, 0f, 6f, 1f, 0.5f));
			fVar0 = (fVar0 * 0.5f);
			fVar1 = (fVar1 * (fVar0 * 0.85f));
		}
	}
	if (bParam8)
	{
		fVar0 = func_146(SYSTEM::VDIST(Global_2635562.f_513, Param0), 0f, 100f, 200f, 0.1f, 0.1f);
		fVar1 = (fVar1 * (fVar0 * 0.9f));
	}
	return fVar1;
}

int func_165(struct<3> Param0, var uParam3, var uParam4)
{
	struct<3> Var0;
	int iVar3;
	var uVar4;
	var uVar5;
	
	iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
	if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
	{
		PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &Var0);
		*uParam3 = SYSTEM::VDIST(Param0.f_0, Param0.f_1, 0f, Var0.f_0, Var0.f_1, 0f);
		*uParam4 = MISC::ABSF((Param0.f_2 - Var0.f_2));
		return 1;
	}
	return 0;
}

float func_166(struct<3> Param0, int iParam3, int iParam4)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 999999.9f;
	if (func_6(iParam3, 0, 1))
	{
		iVar2 = 0;
		while (iVar2 < 32)
		{
			if (!iParam3 == iVar2 || iParam4 == 1)
			{
				iVar3 = iVar2;
				if (func_6(iVar3, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar3) != PLAYER::GET_PLAYER_TEAM(iParam3) || (PLAYER::GET_PLAYER_TEAM(iVar3) == -1 && PLAYER::GET_PLAYER_TEAM(iParam3) == -1))
					{
						if (!func_167(iVar3, iParam3))
						{
							if (Global_2649161.f_261[iVar2])
							{
								fVar1 = SYSTEM::VDIST(Global_2649161.f_131[iVar2 /*3*/], Param0);
								if (fVar1 < fVar0)
								{
									fVar0 = fVar1;
								}
							}
						}
					}
				}
			}
			iVar2++;
		}
	}
	return fVar0;
}

int func_167(int iParam0, int iParam1)
{
	int iVar0;
	
	if (func_14(iParam0) && func_14(iParam1))
	{
		iVar0 = func_12(iParam0);
		if (iVar0 != func_13())
		{
			return iVar0 == func_12(iParam1);
		}
	}
	return 0;
}

float func_168(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	struct<3> Var3;
	var uVar6[32];
	int iVar39;
	
	iVar39 = PED::GET_PED_NEARBY_PEDS(PLAYER::PLAYER_PED_ID(), &uVar6, 2);
	fVar0 = 1E+07f;
	iVar2 = 0;
	while (iVar2 < iVar39)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uVar6[iVar2]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(uVar6[iVar2], false))
			{
				if (func_169(uVar6[iVar2]))
				{
					Var3 = { ENTITY::GET_ENTITY_COORDS(uVar6[iVar2], true) };
					fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, true);
					if (fVar1 < fVar0)
					{
						fVar0 = fVar1;
					}
				}
			}
		}
		iVar2++;
	}
	if (Global_2635562.f_3246)
	{
		if (Global_1058150.f_272 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1058150.f_272)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1058150.f_157[iVar2]))
				{
					if (!ENTITY::IS_ENTITY_DEAD(Global_1058150.f_157[iVar2], false))
					{
						if (func_169(Global_1058150.f_157[iVar2]))
						{
							Var3 = { ENTITY::GET_ENTITY_COORDS(Global_1058150.f_157[iVar2], true) };
							fVar1 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Var3, true);
							if (fVar1 < fVar0)
							{
								fVar0 = fVar1;
							}
						}
					}
				}
				iVar2++;
			}
		}
	}
	return fVar0;
}

int func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, joaat("player")))
	{
		case 3:
		case 5:
			return 1;
			break;
	}
	if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837354[PLAYER::PLAYER_ID()]))
	{
		switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1837354[PLAYER::PLAYER_ID()]))
		{
			case 3:
			case 5:
				return 1;
				break;
			}
	}
	if (Global_1845298[PLAYER::PLAYER_ID() /*881*/] == 0)
	{
		iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
		if (iVar1 > -1 && iVar1 < 4)
		{
			if (PED::DOES_RELATIONSHIP_GROUP_EXIST(Global_1837064[iVar1]))
			{
				switch (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iVar0, Global_1837064[iVar1]))
				{
					case 3:
					case 5:
						return 1;
						break;
					}
				}
			}
	}
	return 0;
}

float func_170()
{
	if (func_171())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635562.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635562.f_45.f_67)) || Global_2635562.f_45.f_67 == joaat("rhino"))
		{
			return 640f;
		}
		else
		{
			return 320f;
		}
	}
	return 160f;
}

int func_171()
{
	if (Global_2635562.f_45.f_65 && !Global_2635562.f_45.f_305)
	{
		if (!func_160(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

float func_172()
{
	if (func_171())
	{
		if ((VEHICLE::IS_THIS_MODEL_A_PLANE(Global_2635562.f_45.f_67) || VEHICLE::IS_THIS_MODEL_A_HELI(Global_2635562.f_45.f_67)) || Global_2635562.f_45.f_67 == joaat("rhino"))
		{
			return 320f;
		}
		else
		{
			return 160f;
		}
	}
	return 80f;
}

int func_173(int iParam0)
{
	if (iParam0 && Global_1575066)
	{
		if (func_174())
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	return Global_1575066;
}

int func_174()
{
	if (func_175())
	{
		return 1;
	}
	return Global_1575069;
	return 0;
}

int func_175()
{
	if (Global_1575066 || Global_1575073)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_controler")) != 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_176(struct<3> Param0, int iParam3, int iParam4, bool bParam5, int iParam6, float fParam7, float fParam8, float fParam9)
{
	float fVar0;
	
	fVar0 = iParam6;
	if (bParam5)
	{
		fVar0 = fParam7;
	}
	if ((((fParam7 > 0f && VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam7)) || (fVar0 > 0f && PED::IS_ANY_PED_NEAR_POINT(Param0, fVar0))) || ((iParam4 == 1 && fParam8 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam8, false))) || ((iParam3 == 1 && fParam9 > 0f) && OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam9, true)))
	{
		return 1;
	}
	return 0;
}

int func_177(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	switch (uParam0->f_10)
	{
		case 0:
			if (func_181(*uParam0, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 1:
			if (func_180(*uParam0, uParam0->f_3, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
		
		case 2:
			if (func_178(*uParam0, uParam0->f_3, uParam0->f_6, Param1, Param4, fParam7))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_178(struct<3> Param0, struct<3> Param3, float fParam6, struct<3> Param7, struct<3> Param10, float fParam13)
{
	struct<3> Var0[8];
	int iVar25;
	
	func_179(Param0, Param3, fParam6, &Var0);
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param7, Param10, fParam13, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

void func_179(struct<3> Param0, struct<3> Param3, float fParam6, var uParam7)
{
	struct<3> Var0;
	struct<3> Var3;
	var uVar6;
	var uVar7;
	
	if (Param0.f_2 == Param3.f_2)
	{
		Param3.f_2 = (Param3.f_2 + 0.01f);
	}
	Var0 = { Param0 - Param3 };
	Var3 = { func_88(Var0, Var0.f_0, Var0.f_1, 0f) };
	Var3 = { Var3 / FtoV(SYSTEM::VMAG(Var3)) };
	Var3 = { Var3 * FtoV((fParam6 * 0.5f)) };
	if (Param0.f_2 > Param3.f_2)
	{
		uVar6 = Param3.f_2;
		uVar7 = Param0.f_2;
	}
	else
	{
		uVar6 = Param0.f_2;
		uVar7 = Param3.f_2;
	}
	*(uParam7[0 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[1 /*3*/]) = { Vector(uVar6, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[2 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) - Var3 };
	*(uParam7[3 /*3*/]) = { Vector(uVar7, Param0.f_1, Param0.f_0) + Var3 };
	*(uParam7[4 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) + Var3 };
	*(uParam7[5 /*3*/]) = { Vector(uVar6, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[6 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) - Var3 };
	*(uParam7[7 /*3*/]) = { Vector(uVar7, Param3.f_1, Param3.f_0) + Var3 };
}

int func_180(struct<3> Param0, struct<3> Param3, struct<3> Param6, struct<3> Param9, float fParam12)
{
	struct<3> Var0[8];
	int iVar25;
	
	Var0[0 /*3*/] = { Param0.f_0, Param0.f_1, Param0.f_2 };
	Var0[1 /*3*/] = { Param0.f_0, Param0.f_1, Param3.f_2 };
	Var0[2 /*3*/] = { Param0.f_0, Param3.f_1, Param3.f_2 };
	Var0[3 /*3*/] = { Param0.f_0, Param3.f_1, Param0.f_2 };
	Var0[4 /*3*/] = { Param3.f_0, Param0.f_1, Param0.f_2 };
	Var0[5 /*3*/] = { Param3.f_0, Param0.f_1, Param3.f_2 };
	Var0[6 /*3*/] = { Param3.f_0, Param3.f_1, Param3.f_2 };
	Var0[7 /*3*/] = { Param3.f_0, Param3.f_1, Param0.f_2 };
	iVar25 = 0;
	while (iVar25 < 8)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar25 /*3*/], Param6, Param9, fParam12, false, true))
		{
			return 0;
		}
		iVar25++;
	}
	return 1;
}

int func_181(struct<3> Param0, float fParam3, struct<3> Param4, struct<3> Param7, float fParam10)
{
	struct<3> Var0[4];
	int iVar13;
	
	Var0[0 /*3*/] = { Param0 + Vector(0f, fParam3, 0f) };
	Var0[1 /*3*/] = { Param0 + Vector(0f, (-1f * fParam3), 0f) };
	Var0[2 /*3*/] = { Param0 + Vector(0f, 0f, fParam3) };
	Var0[3 /*3*/] = { Param0 + Vector(0f, 0f, (-1f * fParam3)) };
	iVar13 = 0;
	while (iVar13 < 4)
	{
		if (!OBJECT::IS_POINT_IN_ANGLED_AREA(Var0[iVar13 /*3*/], Param4, Param7, fParam10, false, true))
		{
			return 0;
		}
		iVar13++;
	}
	return 1;
}

void func_182(struct<3> Param0, var uParam3, var uParam4, var uParam5)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	
	Var1 = { Param0 };
	iVar4 = func_101(Var1);
	iVar0 = 0;
	while (iVar0 < Global_2642654[iVar4])
	{
		if (func_100(Var1, &(Global_2641069[iVar4 /*176*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2641069[iVar4 /*176*/][iVar0 /*7*/] };
			*uParam4 = { Global_2641069[iVar4 /*176*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2641069[iVar4 /*176*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2642654[8])
	{
		if (func_100(Var1, &(Global_2641069[8 /*176*/][iVar0 /*7*/])))
		{
			*uParam3 = { Global_2641069[8 /*176*/][iVar0 /*7*/] };
			*uParam4 = { Global_2641069[8 /*176*/][iVar0 /*7*/].f_3 };
			*uParam5 = Global_2641069[8 /*176*/][iVar0 /*7*/].f_6;
			return;
		}
		iVar0++;
	}
}

int func_183(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_2635562.f_45.f_55)
	{
		if (INTERIOR::IS_VALID_INTERIOR(Global_2635562.f_45.f_56))
		{
			if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
			{
				iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
				if (INTERIOR::IS_VALID_INTERIOR(iVar0))
				{
					iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
					if (!iVar1 == Global_2635562.f_45.f_57)
					{
						return 0;
					}
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
	}
	return 1;
}

int func_184(struct<3> Param0)
{
	switch (Global_2635562.f_2788)
	{
		case 0:
			return func_221(Param0, Global_2635562.f_2767, Global_2635562.f_2770, 0, 0);
			break;
		
		case 1:
			return func_129(Param0, Global_2635562.f_2781, Global_2635562.f_2784, 0, 0);
			break;
		
		case 2:
			return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Global_2635562.f_2781, Global_2635562.f_2784, Global_2635562.f_2787, false, true);
			break;
	}
	return 0;
}

int func_185(struct<3> Param0, var uParam3, var uParam4, float fParam5)
{
	float fVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var5;
	float fVar8;
	
	fVar0 = 0f;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < *uParam3)
	{
		fVar0 = ((uParam3[iVar1 /*4*/])->f_3 + fParam5);
		if (SYSTEM::VDIST(*(uParam3[iVar1 /*4*/]), Param0) < fVar0)
		{
			return 1;
		}
		iVar1++;
	}
	Var2 = { 0f, 0f, 0f };
	Var5 = { 0f, 0f, 0f };
	fVar8 = 0f;
	iVar1 = 0;
	while (iVar1 < *uParam4)
	{
		Var2 = { *(uParam4[iVar1 /*10*/]) };
		Var5 = { (uParam4[iVar1 /*10*/])->f_3 };
		fVar8 = (uParam4[iVar1 /*10*/])->f_6;
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2, Var5, fVar8, false, true))
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

int func_186(var uParam0, var uParam1, bool bParam2, float fParam3)
{
	int iVar0;
	struct<3> Var1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (SYSTEM::VDIST((uParam1[iVar0 /*10*/])->f_7, *uParam0) < (80f * fParam3))
		{
			if (bParam2)
			{
				Var1 = { *uParam0 };
				func_90(&Var1, (uParam1[iVar0 /*10*/])->f_7, 80f, 1036831949, 0, 0);
				*uParam0 = { Var1 };
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_187(int iParam0)
{
	switch (func_127())
	{
		case 0:
			if (!func_29(iParam0))
			{
				if (Global_1845298[iParam0 /*881*/] == 0)
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_188(int iParam0)
{
	if (func_111(iParam0, 1, 0))
	{
		if (Global_1845298[iParam0 /*881*/] != 6)
		{
			return 1;
		}
	}
	return 0;
}

int func_189(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if (SYSTEM::VDIST2(Global_2635562.f_2928[iVar0 /*3*/], Param0) < (fParam3 * fParam3))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_190(var uParam0, bool bParam1)
{
	var uVar0;
	struct<3> Var1;
	float fVar4;
	
	if (func_117(*uParam0))
	{
		if (bParam1)
		{
			Var1 = { *uParam0 };
			fVar4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 360f);
			func_90(&Var1, Global_2635562.f_594, Global_2635562.f_597, 1036831949, 0, fVar4);
			if (func_118(Var1, &uVar0) || func_117(Var1))
			{
				Var1 = { *uParam0 };
				func_90(&Var1, Global_2635562.f_594, Global_2635562.f_597, 1036831949, 1, fVar4);
			}
			*uParam0 = { Var1 };
		}
	}
	return 0;
}

int func_191(struct<3> Param0, float fParam3, int iParam4, int iParam5, float fParam6, bool bParam7, int iParam8, float fParam9, bool bParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam4 && !bParam7)
	{
		if (func_6(PLAYER::PLAYER_ID(), 1, 1))
		{
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				fVar2 = fParam6;
				if (fParam9 > 0f)
				{
					fVar2 = fParam9;
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_192(PLAYER::PLAYER_ID()), Param0, true) <= (fVar2 + fParam3))
				{
					if (CAM::IS_SPHERE_VISIBLE(Param0, fParam3))
					{
						return 1;
					}
				}
			}
		}
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (func_6(iVar1, 1, 1))
		{
			if (!func_218(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (iParam4 == 1 || (iParam4 == 0 && iVar1 != PLAYER::PLAYER_ID()))
				{
					if ((func_148(iVar1) || !bParam10) && !Global_2658293[iVar1 /*468*/].f_274)
					{
						fVar2 = fParam6;
						if (fParam9 > 0f)
						{
							if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
								{
									fVar2 = fParam9;
								}
							}
						}
						if (!bParam7)
						{
							if ((iParam5 || (iParam5 == 0 && PLAYER::GET_PLAYER_TEAM(iVar1) != PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))) || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_192(iVar1), Param0, true) <= (fVar2 + fParam3))
								{
									if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
									{
										return 1;
									}
								}
							}
						}
						else if (PLAYER::GET_PLAYER_TEAM(iVar1) != iParam8 || PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_192(iVar1), Param0, true) <= (fVar2 + fParam3))
							{
								if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

Vector3 func_192(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if ((func_195() && Global_1845298[iVar0 /*881*/].f_862) && !func_194(Global_1845298[iVar0 /*881*/].f_863))
	{
		return Global_1845298[iVar0 /*881*/].f_863;
	}
	if ((NETWORK::NETWORK_IS_ACTIVITY_SESSION() || func_173(0)) && func_193())
	{
		return CAM::GET_FINAL_RENDERED_CAM_COORD();
	}
	return func_8(iParam0);
}

var func_193()
{
	return BitTest(Global_1964670, 5);
}

int func_194(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

var func_195()
{
	return Global_2685152.f_20;
}

int func_196(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	if (func_198(Param0, fParam3, iParam4, iParam5, 0) || func_197(Param0, iParam4, iParam6))
	{
		return 1;
	}
	return 0;
}

int func_197(struct<3> Param0, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam3 == iVar0 || iParam4 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (!Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4 == 0)
				{
					if (func_103(Param0, Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 1036831949))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam3, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_198(struct<3> Param0, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam4 == iVar0 || iParam5 == 1)
		{
			iVar1 = iVar0;
			bVar2 = false;
			if (bParam6)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(iParam4))
					{
						bVar2 = true;
					}
				}
			}
			if (!bVar2)
			{
				if (func_6(iVar1, 0, 1) && func_6(iParam4, 0, 1))
				{
					if (Global_2649161.f_261[iVar0])
					{
						if (SYSTEM::VDIST(Global_2649161.f_131[iVar0 /*3*/], Param0) < fParam3)
						{
							return 1;
						}
					}
					else if (SYSTEM::VDIST(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
				else if (Global_2649161.f_261[iVar0])
				{
					if (SYSTEM::VDIST(Global_2649161.f_131[iVar0 /*3*/], Param0) < fParam3)
					{
						return 1;
					}
				}
				else if (func_6(iVar1, 0, 1))
				{
					if (SYSTEM::VDIST(func_8(iVar1), Param0) < 1f)
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_199(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, float fParam8, float fParam9, float fParam10, float fParam11, float fParam12, float fParam13, bool bParam14, bool bParam15)
{
	Global_2635562.f_3 = 0;
	if (!func_196(Param0, 0.5f, PLAYER::PLAYER_ID(), 0, 0))
	{
		Global_2635562.f_3++;
		if (bParam5)
		{
			if (func_251(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
				if (!func_203(Param0, fParam12))
				{
					Global_2635562.f_3++;
					if (!func_102(Param0, 1056964608))
					{
						Global_2635562.f_3++;
						return 1;
					}
				}
			}
			else
			{
				Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
			}
		}
		else if (!bParam4)
		{
			if (func_251(Param0, 3.65f, 0.5f, 1.5f, 1f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
			{
				Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
				if (!func_203(Param0, fParam12))
				{
					Global_2635562.f_3++;
					if (!func_200(Param0, fParam3, fParam9, fParam10, 1084227584))
					{
						Global_2635562.f_3++;
						if (!func_102(Param0, 1056964608))
						{
							Global_2635562.f_3++;
							return 1;
						}
					}
				}
			}
			else
			{
				Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
			}
		}
		else if (func_251(Param0, 6f, 5f, 5f, 5f, 0, bParam6, iParam7, fParam8, bParam15, -1, 1, 0, 0, fParam13, bParam14, 0))
		{
			Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
			if (!func_203(Param0, fParam12))
			{
				Global_2635562.f_3++;
				if (!func_200(Param0, fParam3, fParam9, fParam10, fParam11))
				{
					Global_2635562.f_3++;
					if (!func_102(Param0, 1056964608))
					{
						Global_2635562.f_3++;
						return 1;
					}
				}
			}
		}
		else
		{
			Global_2635562.f_3 = (Global_2635562.f_3 + Global_2635562.f_2);
		}
	}
	return 0;
}

int func_200(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if (!PLAYER::PLAYER_ID() == iVar1)
		{
			if ((func_6(iVar1, 1, 1) && func_148(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
			{
				if (!func_202(PLAYER::PLAYER_ID(), iVar1, -2, 0))
				{
					if (func_201(func_8(iVar1), Param0, fParam3, fParam4, fParam5, fParam6))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_201(struct<3> Param0, struct<3> Param3, float fParam6, float fParam7, float fParam8, float fParam9)
{
	struct<3> Var0;
	struct<3> Var3;
	
	fParam6 = (fParam6 * -1f);
	fParam6 = (fParam6 + 360f);
	Var0.f_0 = SYSTEM::SIN(fParam6);
	Var0.f_1 = SYSTEM::COS(fParam6);
	Var0.f_2 = 0f;
	Var0 = { Var0 / FtoV(SYSTEM::VMAG(Var0)) };
	Var0 = { Var0 * Vector(fParam7, fParam7, fParam7) };
	Var3 = { Param3 + Var0 };
	Var3.f_2 = Param3.f_2;
	Var3.f_2 = (Var3.f_2 + fParam9);
	Param3.f_2 = (Param3.f_2 + fParam9);
	return OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Param3, Var3, fParam8, false, true);
}

bool func_202(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 == -2)
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && PLAYER::GET_PLAYER_TEAM(iParam1) == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == PLAYER::GET_PLAYER_TEAM(iParam1);
	}
	else
	{
		if (iParam3 == 0)
		{
			if (PLAYER::GET_PLAYER_TEAM(iParam0) == -1 && iParam2 == -1)
			{
				return 0;
			}
		}
		return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
	}
	return PLAYER::GET_PLAYER_TEAM(iParam0) == iParam2;
}

int func_203(struct<3> Param0, float fParam3)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((func_6(iVar1, 1, 1) && func_148(iVar1)) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
		{
			if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && PLAYER::GET_PLAYER_TEAM(iVar1) == -1) && !func_125(PLAYER::PLAYER_ID(), 1))
			{
				return 0;
			}
			else if ((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && !PLAYER::PLAYER_ID() == iVar1) || !func_202(PLAYER::PLAYER_ID(), iVar1, -2, 0))
			{
				if (SYSTEM::VDIST(Param0, func_8(iVar1)) < fParam3)
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_204(int iParam0)
{
	if ((Global_2635562.f_490 == 9 || Global_2635562.f_490 == 9) || (Global_2635562.f_490 == 15 && iParam0 == 1))
	{
		return 1;
	}
	return 0;
}

int func_205(struct<3> Param0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam8 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam8 == 0)
		{
			if (func_6(iVar1, bParam4, bParam5))
			{
				if (iParam10 || NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam7 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_148(iVar1)))
					{
						if ((!bParam6 || (bParam6 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam9) && bParam6) && func_153(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, true) < fParam3)
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_206(struct<3> Param0, float fParam3, int iParam4, float fParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	
	iVar3 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	if (!iVar3 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 1, 1))
			{
				if ((!func_218(iVar1, 0) && NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1)) && iVar1 != PLAYER::PLAYER_ID())
				{
					fVar2 = iParam4;
					if (fParam5 > 0f)
					{
						if (!PLAYER::GET_PLAYER_TEAM(iVar1) == -1)
						{
							if (PLAYER::GET_PLAYER_TEAM(iVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
							{
								fVar2 = fParam5;
							}
						}
					}
					if (PLAYER::GET_PLAYER_TEAM(iVar1) == iVar3)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_8(iVar1), Param0, true) <= (fVar2 + fParam3))
						{
							if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(iVar1, Param0, fParam3))
							{
								return 1;
							}
						}
					}
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_207(int iParam0)
{
	if ((((func_125(iParam0, 1) || func_209(iParam0)) || func_34(iParam0, 0)) || func_208(iParam0)) || func_173(0))
	{
		return 1;
	}
	return 0;
}

int func_208(int iParam0)
{
	if (!func_6(iParam0, 0, 1))
	{
		return 0;
	}
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_879, 2);
}

int func_209(int iParam0)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != -1)
	{
		return Global_1892925[iVar0 /*615*/] != -1;
	}
	return 0;
}

void func_210(struct<3> Param0, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var7;
	struct<3> Var17;
	struct<3> Var20;
	
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		*(uParam3[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam4)
	{
		*(uParam4[iVar0 /*10*/]) = { Var7 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (!BitTest(Global_4526250[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_4526250[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_4526250[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_4526250[iVar1 /*26*/].f_6.f_2;
					func_212(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam3)
		{
			if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6271[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6271[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_212(&Var3, uParam3, iVar0);
				iVar0 = *uParam3;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 25)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam3)
			{
				if (SYSTEM::VMAG(*(uParam3[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6329[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam3[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6329[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_212(&Var3, uParam3, iVar0);
					iVar0 = *uParam3;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam4)
		{
			Var17 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var20 = { *(uParam4[iVar0 /*10*/]) + (uParam4[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam4[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var17, Param0) < SYSTEM::VDIST(Var20, Param0))
			{
				Var7 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var7.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var7.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var7.f_7 = { Global_4525926[iVar1 /*3*/] };
				func_211(&Var7, uParam4, iVar0);
				iVar0 = *uParam4;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_211(var uParam0, var uParam1, int iParam2)
{
	Global_2643667 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_211(&Global_2643667, uParam1, iParam2 + 1);
	}
}

void func_212(var uParam0, var uParam1, int iParam2)
{
	Global_2643663 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_212(&Global_2643663, uParam1, iParam2 + 1);
	}
}

void func_213(var uParam0, var uParam1)
{
	int iVar0;
	struct<3> Var1;
	float fVar4;
	
	if (Global_2635562.f_2563 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2635562.f_2563)
		{
			if (func_214(Global_2635562.f_2564[iVar0 /*4*/], uParam0))
			{
				fVar4 = Global_2635562.f_2564[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2635562.f_2564[iVar0 /*4*/] };
					fVar4 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_145(Global_2635562.f_2564[iVar0 /*4*/], fVar4, uParam0, uParam1, 0, uParam0->f_28);
				Global_2635562.f_2792++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2635562.f_3201)
	{
		func_139(&(Global_2635562.f_2792.f_6[0 /*10*/]), &(Global_2635562.f_2792.f_6[1 /*10*/]), &(Global_2635562.f_2792.f_6[2 /*10*/]));
	}
}

int func_214(struct<3> Param0, var uParam3)
{
	switch (uParam3->f_7)
	{
		case 0:
			return func_94(Param0, uParam3->f_7, *uParam3, 0f, 0f, 0f, uParam3->f_4);
		
		case 1:
		case 2:
			return func_94(Param0, uParam3->f_7, uParam3->f_8, uParam3->f_11, uParam3->f_14);
		
		default:
	}
	return 0;
}

void func_215(struct<3> Param0, struct<3> Param3, var uParam6, var uParam7, float fParam8)
{
	float fVar0;
	
	func_130(&Param0, &Param3);
	fVar0 = (Param3.f_0 - Param0.f_0);
	*uParam6 = (Param0.f_0 + (fVar0 * 0.5f));
	uParam6->f_1 = Param0.f_1;
	uParam6->f_2 = Param0.f_2;
	*uParam7 = *uParam6;
	uParam7->f_1 = Param3.f_1;
	uParam7->f_2 = Param3.f_2;
	*fParam8 = (fVar0 * 0.5f);
}

var func_216()
{
	return Global_1573131.f_4;
}

void func_217(float fParam0, float fParam1)
{
	func_258();
	func_250(fParam0, fParam1);
}

bool func_218(int iParam0, int iParam1)
{
	bool bVar0;
	
	if (!func_14(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		bVar0 = func_219(-1, 0) == 8;
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

int func_219(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = iParam0;
	if (iVar1 == -1)
	{
		iVar1 = func_220();
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

int func_220()
{
	return Global_1574928;
}

bool func_221(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7, bool bParam8)
{
	if (bParam7 && bParam8)
	{
		Param0.f_2 = 0f;
		Param3.f_2 = 0f;
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam7)
	{
		if (Param0.f_2 > Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	else if (bParam8)
	{
		if (Param0.f_2 < Param3.f_2)
		{
			Param0.f_2 = Param3.f_2;
		}
		return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
	}
	return SYSTEM::VDIST(Param0, Param3) < (fParam6 + 0.01f);
}

void func_222(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = 0;
	if (Global_2635562.f_2055 > 0)
	{
		iVar0 = 0;
		while (func_244(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_223(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_223(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<3> Var1;
	float* fVar4;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	int iVar23;
	int iVar24;
	float fVar25;
	int iVar26;
	struct<3> Var27;
	var uVar30;
	struct<3> Var31;
	float* fVar34;
	bool bVar35;
	
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_114(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (func_243(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar5 = 0;
	bVar10 = true;
	if (uParam2->f_11)
	{
		iVar5 += 2;
		iVar5++;
		bVar10 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar5++;
		bVar10 = false;
	}
	iVar5 += 4;
	fVar13 = 3f;
	fVar14 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar13 = 3f;
			fVar14 = 5f;
			break;
		
		case 1:
			fVar13 = 2.75f;
			fVar14 = 7.5f;
			break;
		
		default:
			fVar13 = 2.5f;
			fVar14 = 10f;
			break;
	}
	iVar15 = 0;
	Global_2643677.f_162 = 0;
	Global_2643677.f_163 = 0;
	Global_2643677.f_164 = -99;
	Global_2643677.f_165 = { 0f, 0f, 0f };
	iVar16 = 0;
	while (iVar16 < 40)
	{
		Global_2643677[iVar16 /*3*/] = { 0f, 0f, 0f };
		Global_2643677.f_121[iVar16] = 0f;
		iVar16++;
	}
	iVar17 = 1;
	if (func_108(uParam2->f_34) != 0)
	{
		iVar17 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar8 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar17), &fVar4, &iVar9, iVar5, fVar13, fVar14);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar8))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar8, &Var1);
			bVar12 = false;
			if (Global_2643677.f_164 == iVar8)
			{
				bVar12 = true;
			}
			Global_2643677.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar8)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar8))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar6, &uVar7);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!func_190(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar7 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar7 & 16 == 0)
							{
								if ((uVar7 & 128 == 0 && uVar7 & 256 == 0) && uVar7 & 512 == 0)
								{
									if (!func_242(Var1))
									{
										Var1 = { func_238(Var1, &fVar4, iVar9, uParam2->f_9, *uParam2, bVar10, uParam2->f_11, uParam2->f_34, &bVar11, bVar12, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!func_102(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (func_237(Var1, uParam2))
														{
															if ((uParam2->f_48 && !func_243(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar18 = true;
																if (!bVar12)
																{
																	if (bVar11)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar18 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !func_233(Var1, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_114(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar19 = uParam2->f_31;
																					bVar20 = true;
																					iVar21 = 1;
																					fVar22 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						fVar22 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar19 = 0;
																						bVar20 = false;
																						iVar21 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar22 = (fVar22 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar20 = true;
																						iVar21 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar22 = (fVar22 * 0.375f);
																							}
																						}
																					}
																					iVar23 = 0;
																					if (!func_232(Var1, fVar4, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (func_251(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar23 = 1;
																							}
																						}
																						else if (func_251(Var1, 6f, 1f, 1f, 5f, iVar19, bVar20, iVar21, fVar22, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_230(Var1, fVar4, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar23 = 1;
																						}
																					}
																					if (iVar23 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar25 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar24 = func_229(Var1, uParam2->f_54, &fVar25);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar24 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar24 < uParam2->f_53)
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643677.f_162)
																										{
																											Global_2643677[iVar16 /*3*/] = { 0f, 0f, 0f };
																											Global_2643677.f_121[iVar16] = 0f;
																											iVar16++;
																										}
																										Global_2643677.f_162 = 0;
																										uParam2->f_53 = iVar24;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2643677.f_162 == 0)
																									{
																										Global_2643677[0 /*3*/] = { Var1 };
																										Global_2643677.f_121[0] = fVar4;
																									}
																									else
																									{
																										iVar16 = 0;
																										while (iVar16 < Global_2643677.f_162 + 1)
																										{
																											if (iVar16 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2643677[iVar16 /*3*/], uParam2->f_35))
																												{
																													func_228(Var1, fVar4, iVar16);
																													iVar16 = Global_2643677.f_162 + 1;
																												}
																											}
																											iVar16++;
																										}
																									}
																									Global_2643677.f_162++;
																									if (Global_2643677.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643677.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2643677[Global_2643677.f_162 /*3*/] = { Var1 };
																									Global_2643677.f_121[Global_2643677.f_162] = fVar4;
																									Global_2643677.f_162++;
																									if (func_237(Var1, uParam2))
																									{
																										Global_2643677.f_163++;
																									}
																									if (Global_2643677.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2643677.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar4;
																							return 1;
																						}
																					}
																					else if (bVar18)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar4;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar15++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar15++;
					}
				}
				else
				{
					iVar15++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar15) || iVar0 >= 100)
			{
				if (Global_2643677.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2643677[0 /*3*/] };
						*uParam1 = Global_2643677.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2643677.f_163 > 0 && !Global_2643677.f_163 == Global_2643677.f_162)
						{
							func_226(0, uParam2);
						}
						iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643677.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar26 = 0;
						}
						Var27 = { Global_2643677[0 /*3*/] };
						uVar30 = Global_2643677.f_121[0];
						Global_2643677[0 /*3*/] = { Global_2643677[iVar26 /*3*/] };
						Global_2643677.f_121[0] = Global_2643677.f_121[iVar26];
						Global_2643677[iVar26 /*3*/] = { Var27 };
						Global_2643677.f_121[iVar26] = uVar30;
						*uParam0 = { Global_2643677[0 /*3*/] };
						*uParam1 = Global_2643677.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						func_225(iVar15, *uParam0, &iVar0, &Var1, &fVar4, uParam2, bVar10, iVar9, iVar5, fVar13, fVar14, bVar11);
						Var31 = { Var1 };
						fVar34 = fVar4;
						if (!uParam2->f_50)
						{
							bVar35 = true;
						}
						else
						{
							bVar35 = false;
						}
						if (func_114(uParam2->f_35, &Var31, &(uParam2->f_38), &(uParam2->f_45), bVar35, 1) || func_243(&Var31, bVar35))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var31 };
								*uParam1 = fVar34;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var31 };
							*uParam1 = fVar34;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				func_224(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2643677.f_164 = iVar8;
	}
	return 0;
}

void func_224(var uParam0, var uParam1, var uParam2, struct<3> Param3)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	fVar0 = 1E+09f;
	iVar3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam0)
	{
		fVar1 = SYSTEM::VDIST(*(uParam0[iVar2 /*4*/]), Param3);
		if (fVar1 < fVar0)
		{
			if (!func_196(*(uParam0[iVar2 /*4*/]), 5f, PLAYER::PLAYER_ID(), 0, 0))
			{
				fVar0 = fVar1;
				iVar3 = iVar2;
			}
		}
		iVar2++;
	}
	if (!iVar3 == -1)
	{
		*uParam1 = { *(uParam0[iVar3 /*4*/]) };
		*uParam2 = (uParam0[iVar3 /*4*/])->f_3;
	}
}

void func_225(int iParam0, struct<3> Param1, int iParam4, var* uParam5, float* fParam6, var uParam7, bool bParam8, int iParam9, int iParam10, float fParam11, float fParam12, bool bParam13)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 30)
	{
		*iParam4 = MISC::GET_RANDOM_INT_IN_RANGE((1 + iParam0), (40 + iParam0));
		if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(Param1, *iParam4, uParam5, fParam6, &iParam9, iParam10, fParam11, fParam12))
		{
			if (SYSTEM::VMAG(*uParam5) > 0f)
			{
				*uParam5 = { func_238(*uParam5, fParam6, iParam9, uParam7->f_9, *uParam7, bParam8, uParam7->f_11, uParam7->f_34, &bParam13, 0, 0, uParam7->f_51, uParam7->f_60) };
				if (!func_242(*uParam5))
				{
					iVar0 = 999;
					return;
				}
			}
		}
		iVar0++;
	}
}

void func_226(int iParam0, var uParam1)
{
	if (!func_237(Global_2643677[iParam0 /*3*/], uParam1))
	{
		Global_2643677.f_162 = (Global_2643677.f_162 - 1);
		func_227(iParam0);
		if (Global_2643677.f_162 > Global_2643677.f_163)
		{
			func_226(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_226(iParam0 + 1, uParam1);
	}
}

void func_227(int iParam0)
{
	while (iParam0 < 39)
	{
		if (iParam0 < 39)
		{
			Global_2643677[iParam0 /*3*/] = { Global_2643677[iParam0 + 1 /*3*/] };
			Global_2643677.f_121[iParam0] = Global_2643677.f_121[iParam0 + 1];
		}
		iParam0++;
	}
}

void func_228(struct<3> Param0, float fParam3, int iParam4)
{
	struct<3> Var0;
	var uVar3;
	
	Var0 = { Global_2643677[iParam4 /*3*/] };
	uVar3 = Global_2643677.f_121[iParam4];
	Global_2643677[iParam4 /*3*/] = { Param0 };
	Global_2643677.f_121[iParam4] = fParam3;
	if (iParam4 <= Global_2643677.f_162 && iParam4 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_228(Var0, uVar3, iParam4 + 1);
		}
	}
}

int func_229(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	struct<3> Var1;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	
	fVar6 = 99999.9f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar5 = iVar0;
		if (func_152(iVar5))
		{
			Var1 = { func_8(iVar5) };
			fVar7 = SYSTEM::VDIST(Param0, Var1);
			if (fVar7 < fParam3)
			{
				if (fVar7 < fVar6)
				{
					fVar6 = fVar7;
				}
				iVar4++;
			}
		}
		iVar0++;
	}
	*fParam4 = fVar6;
	return iVar4;
}

int func_230(struct<3> Param0, float fParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, int iParam9, int iParam10)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	struct<3> Var5;
	float fVar8;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = iVar0;
		if ((iParam9 == 1 && PLAYER::PLAYER_ID() != iVar1) || iParam9 == 0)
		{
			if (func_6(iVar1, bParam5, bParam6))
			{
				if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iVar1))
				{
					if (!bParam8 || (!PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar1)) && func_148(iVar1)))
					{
						if ((!bParam7 || (bParam7 == 1 && PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) != PLAYER::GET_PLAYER_TEAM(iVar1))) || PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
						{
							if (((PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1 && iParam10) && bParam7) && func_153(iVar1))
							{
							}
							else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
							{
								fVar2 = 0.1f;
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iVar1), false))
								{
									iVar3 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar1), false);
									if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
									{
										iVar4 = ENTITY::GET_ENTITY_MODEL(iVar3);
										Var5 = { ENTITY::GET_ENTITY_COORDS(iVar3, false) };
										fVar8 = ENTITY::GET_ENTITY_HEADING(iVar3);
										if (func_231(Param0, fParam3, iParam4, Var5, fVar8, iVar4, 0))
										{
											return 1;
										}
									}
									else
									{
										fVar2 = 5f;
									}
								}
								if (func_103(func_8(iVar1), Param0, fParam3, iParam4, fVar2))
								{
									return 1;
								}
							}
						}
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_231(struct<3> Param0, float fParam3, int iParam4, struct<3> Param5, float fParam8, int iParam9, int iParam10)
{
	if (func_103(Param0, Param5, fParam8, iParam9, 1036831949))
	{
		return 1;
	}
	func_104(Param0, fParam3, iParam4, &Global_1982978, &(Global_1982978.f_3), &(Global_1982978.f_6), 1036831949);
	func_104(Param5, fParam8, iParam9, &(Global_1982978.f_7), &(Global_1982978.f_10), &(Global_1982978.f_13), 1036831949);
	if (MISC::GET_POINT_AREA_OVERLAP(Global_1982978, Global_1982978.f_3, Global_1982978.f_6, Global_1982978.f_7, Global_1982978.f_10, Global_1982978.f_13))
	{
		return 1;
	}
	return 0;
}

int func_232(struct<3> Param0, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	
	iVar0 = 1;
	iVar0 += 2;
	iVar0 += 4;
	iVar0 += 8;
	iVar0 += 16;
	iVar0 += 32;
	iVar0 += 64;
	iVar0 = (iVar0 + 131076);
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_231(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	iVar0 += 4096;
	iVar0 += 8192;
	iVar0 += 16384;
	iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(Param0, 30f, 0, iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
	{
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		Var3 = { ENTITY::GET_ENTITY_COORDS(iVar1, false) };
		fVar6 = ENTITY::GET_ENTITY_HEADING(iVar1);
		if (func_231(Param0, fParam3, iParam4, Var3, fVar6, iVar2, 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_233(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	if (func_236(Param0, fParam3, iParam4, iParam5, iParam6) || func_234(Param0, fParam3, iParam4, iParam5, iParam7))
	{
		return 1;
	}
	return 0;
}

int func_234(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar2 = iVar0;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if (func_235(Param0, iParam4, Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4))
				{
					if (func_231(Param0, fParam3, iParam4, Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/], Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_3, Global_2649161.f_461[iVar0 /*11*/][iVar1 /*5*/].f_4, 0))
					{
						if (func_6(iVar2, 0, 1) && func_6(iParam5, 0, 1))
						{
							return 1;
						}
						else
						{
							return 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_235(struct<3> Param0, int iParam3, struct<3> Param4, int iParam7)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = func_110(iParam3, 1008981770);
	fVar1 = func_110(iParam7, 1008981770);
	fVar2 = SYSTEM::VDIST(Param0, Param4);
	if (fVar2 < (fVar0 + fVar1))
	{
		return 1;
	}
	return 0;
}

int func_236(struct<3> Param0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!iParam5 == iVar0 || iParam6 == 1)
		{
			iVar1 = iVar0;
			if (func_6(iVar1, 0, 1) && func_6(iParam5, 0, 1))
			{
				if (Global_2649161.f_261[iVar0])
				{
					if (func_103(Global_2649161.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
				else if (func_103(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (Global_2649161.f_261[iVar0])
			{
				if (func_103(Global_2649161.f_131[iVar0 /*3*/], Param0, fParam3, iParam4, 1036831949))
				{
					return 1;
				}
			}
			else if (func_6(iVar1, 0, 0))
			{
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iVar1)))
				{
					if (func_103(func_8(iVar1), Param0, fParam3, iParam4, 1036831949))
					{
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_237(struct<3> Param0, var uParam3)
{
	if (uParam3->f_18)
	{
		switch (uParam3->f_26)
		{
			case 0:
				if (func_221(Param0, uParam3->f_19, uParam3->f_25, 0, 0))
				{
					return 1;
				}
				break;
			
			case 1:
				if (func_129(Param0, uParam3->f_19, uParam3->f_22, 0, 0))
				{
					return 1;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_19, uParam3->f_22, uParam3->f_25, false, true))
				{
					return 1;
				}
				break;
		}
		return 0;
	}
	return 1;
}

Vector3 func_238(struct<3> Param0, float* fParam3, int iParam4, bool bParam5, struct<3> Param6, bool bParam9, bool bParam10, int iParam11, var uParam12, int iParam13, bool bParam14, bool bParam15, var uParam16)
{
	struct<3> Var0;
	var uVar3;
	var uVar4;
	var uVar5;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	bool bVar12;
	bool bVar13;
	float fVar14;
	struct<3> Var15;
	struct<3> Var18;
	struct<3> Var21;
	
	if (bParam15)
	{
		if (SYSTEM::VMAG(Param6) > 0f)
		{
			if (!func_241(Param0, *fParam3, Param6))
			{
				*fParam3 = (*fParam3 + 180f);
			}
		}
		return Param0;
	}
	PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Param0, &uVar3, &uVar4);
	if (uVar4 & 1024 == 0 && !bParam10)
	{
		PATHFIND::GET_CLOSEST_ROAD(Param0, 1f, 1, &uVar5, &uVar5, &iVar8, &iVar9, &fVar10, bParam9);
		if (iVar8 == iVar9)
		{
			*uParam12 = 1;
		}
		if (bParam14)
		{
			if (!uVar4 & 128 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 256 == 0)
			{
				return 0f, 0f, 0f;
			}
			if (!uVar4 & 512 == 0)
			{
				return 0f, 0f, 0f;
			}
			if ((iVar8 + iVar9) != iParam4)
			{
				return 0f, 0f, 0f;
			}
			if (VEHICLE::IS_THIS_MODEL_A_HELI(iParam11) && func_240(Param0))
			{
				return 0f, 0f, 0f;
			}
		}
		if (iParam13 && *uParam12)
		{
			*fParam3 = (*fParam3 + 180f);
			if (*fParam3 > 360f)
			{
				*fParam3 = (*fParam3 + -360f);
			}
		}
		if (*fParam3 <= 90f || *fParam3 > 270f)
		{
			bVar12 = true;
		}
		else
		{
			bVar12 = false;
		}
		bVar13 = false;
		if (bVar12)
		{
			if (iVar8 == 0)
			{
				if (bParam14)
				{
					return 0f, 0f, 0f;
				}
			}
			else if (iParam4 == iVar8)
			{
				bVar13 = true;
			}
		}
		else if (iVar9 == 0)
		{
			if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
		else if (iParam4 == iVar9)
		{
			bVar13 = true;
		}
		if (fVar10 < 0f)
		{
			fVar11 = 0f;
		}
		else
		{
			if (bVar12)
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar8) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar8));
				}
				if (bVar13)
				{
					if (iVar8 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar8 - 2)) * 1f));
					}
				}
				else if (iVar8 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar8 - 1)) * 1f));
				}
			}
			else
			{
				if (bVar13)
				{
					fVar11 = (4.2f * (SYSTEM::TO_FLOAT(iVar9) * 0.5f));
				}
				else
				{
					fVar11 = (4.2f * SYSTEM::TO_FLOAT(iVar9));
				}
				if (bVar13)
				{
					if (iVar9 > 2)
					{
						fVar11 = (fVar11 + (IntToFloat((iVar9 - 2)) * 1f));
					}
				}
				else if (iVar9 > 1)
				{
					fVar11 = (fVar11 + (IntToFloat((iVar9 - 1)) * 1f));
				}
			}
			if (!uVar4 & 64 == 0)
			{
				fVar11 = (fVar11 + (0.95f * fVar10));
			}
			if (!uVar4 & 4 == 0 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -0.5f);
			}
			if ((!uVar4 & 32 == 0 && uVar4 & 4 == 0) && uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + -1f);
			}
			if (!bParam5 || !uVar4 & 8 == 0)
			{
				fVar11 = (fVar11 + (4.2f * -0.5f));
			}
			if (!iParam11 == 0)
			{
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_239(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_239(iParam11, 1.5f);
				}
				if (fVar14 > 1.8f)
				{
					fVar11 = (fVar11 + ((fVar14 - 1.8f) * -0.5f));
				}
			}
		}
	}
	if (SYSTEM::VMAG(Param6) > 0f)
	{
		if (!func_241(Param0, *fParam3, Param6))
		{
			if ((bParam5 || uParam16) || ((uVar4 & 1024 != 0 || Param0.f_2 == 0f) && bParam10))
			{
				*fParam3 = (*fParam3 + 180f);
			}
			else if (bParam14)
			{
				return 0f, 0f, 0f;
			}
		}
	}
	if (fVar11 < 0f)
	{
		fVar11 = 0f;
	}
	Var0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(Param0, *fParam3, fVar11, 0f, 0f) };
	if (bParam5)
	{
		if (PATHFIND::GET_ROAD_BOUNDARY_USING_HEADING(Param0, *fParam3, &Var15))
		{
			Var18 = { Var15 - Param0 };
			if (!iParam11 == 0)
			{
				Var21 = { Var18 / FtoV(SYSTEM::VMAG(Var18)) };
				if (uVar4 & 8 != 0)
				{
					fVar14 = func_239(iParam11, 3.5f);
				}
				else
				{
					fVar14 = func_239(iParam11, 1.5f);
				}
				Var21 = { Var21 * FtoV((fVar14 * 0.5f)) };
				Var18 = { Var18 - Var21 };
				Var15 = { Param0 + Var18 };
			}
			Var21 = { Var0 - Var15 };
			Var0 = { Var15 };
		}
	}
	return Var0;
}

float func_239(int iParam0, float fParam1)
{
	float fVar0;
	float fVar3;
	float fVar6;
	
	func_105(iParam0, &fVar0, &fVar3, 1086324736, 1080033280, 1077936128);
	fVar6 = (fVar3 - fVar0);
	if (fVar6 < fParam1)
	{
		return fParam1;
	}
	return fVar6;
}

int func_240(struct<3> Param0)
{
	float fVar0;
	
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(Param0.f_0, Param0.f_1, (Param0.f_2 + 500f), &fVar0, false, false))
	{
		fVar0 = (fVar0 - Param0.f_2);
		if (fVar0 > 6f)
		{
			return 1;
		}
	}
	return 0;
}

int func_241(struct<3> Param0, float fParam3, struct<3> Param4)
{
	struct<3> Var0;
	struct<3> Var3;
	
	Var0 = { 0f, 1f, 0f };
	func_91(&Var0, 0f, 0f, fParam3);
	Var3 = { Param4 - Param0 };
	if (func_87(Var3, Var0) >= 0f)
	{
		return 1;
	}
	return 0;
}

int func_242(struct<3> Param0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_101(Param0);
	iVar0 = 0;
	while (iVar0 < Global_2643377[iVar1])
	{
		if (func_100(Param0, &(Global_2642674[iVar1 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2643377[8])
	{
		if (func_100(Param0, &(Global_2642674[8 /*78*/][iVar0 /*7*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_243(var uParam0, bool bParam1)
{
	bool bVar0;
	
	bVar0 = false;
	if (Global_2635562.f_26.f_18)
	{
		switch (Global_2635562.f_26.f_17)
		{
			case 0:
				if (func_221(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_16, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 1:
				if (func_129(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, 0, 0))
				{
					bVar0 = true;
				}
				break;
			
			case 2:
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, false, true))
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			if (bParam1)
			{
				*uParam0 = { func_92(*uParam0, Global_2635562.f_26.f_10, Global_2635562.f_26.f_13, Global_2635562.f_26.f_16, Global_2635562.f_26.f_17, 1036831949, 0) };
			}
		}
	}
	return bVar0;
}

int func_244(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	float fVar11;
	bool bVar12;
	int iVar13;
	float fVar14;
	struct<3> Var15;
	var uVar18;
	
	if (Global_2635562.f_2055 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_114(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (func_243(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2643677.f_162 = 0;
		Global_2643677.f_163 = 0;
		iVar7 = 0;
		while (iVar7 < 40)
		{
			Global_2643677[iVar7 /*3*/] = { 0f, 0f, 0f };
			Global_2643677.f_121[iVar7] = 0f;
			iVar7++;
		}
		if (uParam2->f_30)
		{
			func_247(*uParam0);
		}
		else if (uParam2->f_29)
		{
			func_246();
		}
		else
		{
			func_245();
		}
		iVar1 = 0;
		while (iVar1 < Global_2635562.f_2055)
		{
			iVar2 = Global_2635562.f_2461[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2635562.f_2056[iVar2 /*4*/] };
				fVar6 = Global_2635562.f_2056[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !func_233(Var3, fVar6, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_114(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar8 = uParam2->f_31;
										bVar9 = true;
										iVar10 = 1;
										fVar11 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											fVar11 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar8 = 0;
											bVar9 = false;
											iVar10 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar11 = (fVar11 * 0.375f);
											}
										}
										else
										{
											bVar9 = true;
											iVar10 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar11 = (fVar11 * 0.375f);
												}
											}
										}
										bVar12 = false;
										if (!func_232(Var3, fVar6, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (func_251(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar12 = true;
												}
											}
											else if (func_251(Var3, 6f, 1f, 1f, 5f, iVar8, bVar9, iVar10, fVar11, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !func_230(Var3, fVar6, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar12 = true;
											}
										}
										if (bVar12)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar14 = 0f;
												if (uParam2->f_52)
												{
													iVar13 = func_229(Var3, uParam2->f_54, &fVar14);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar13 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar13 < uParam2->f_53)
														{
															iVar7 = 0;
															while (iVar7 < Global_2643677.f_162)
															{
																Global_2643677[iVar7 /*3*/] = { 0f, 0f, 0f };
																Global_2643677.f_121[iVar7] = 0f;
																iVar7++;
															}
															Global_2643677.f_162 = 0;
															uParam2->f_53 = iVar13;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2643677.f_162 == 0)
														{
															Global_2643677[0 /*3*/] = { Var3 };
															Global_2643677.f_121[0] = fVar6;
														}
														else
														{
															iVar7 = 0;
															while (iVar7 < Global_2643677.f_162 + 1)
															{
																if (iVar7 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2643677[iVar7 /*3*/], uParam2->f_35))
																	{
																		func_228(Var3, fVar6, iVar7);
																		iVar7 = Global_2643677.f_162 + 1;
																	}
																}
																iVar7++;
															}
														}
														Global_2643677.f_162++;
														if (Global_2643677.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2055;
															}
															else if (Global_2643677.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2055;
															}
														}
													}
													else
													{
														Global_2643677[Global_2643677.f_162 /*3*/] = { Var3 };
														Global_2643677.f_121[Global_2643677.f_162] = fVar6;
														Global_2643677.f_162++;
														if (Global_2643677.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2635562.f_2055;
															}
															else if (Global_2643677.f_162 == 40)
															{
																iVar1 = Global_2635562.f_2055;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar6;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar6;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2643677.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2643677[0 /*3*/] };
				*uParam1 = Global_2643677.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2643677.f_163 > 0 && !Global_2643677.f_163 == Global_2643677.f_162)
				{
					func_226(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2643677.f_162);
				Var15 = { Global_2643677[0 /*3*/] };
				uVar18 = Global_2643677.f_121[0];
				Global_2643677[0 /*3*/] = { Global_2643677[iVar0 /*3*/] };
				Global_2643677.f_121[0] = Global_2643677.f_121[iVar0];
				Global_2643677[iVar0 /*3*/] = { Var15 };
				Global_2643677.f_121[iVar0] = uVar18;
				*uParam0 = { Global_2643677[0 /*3*/] };
				*uParam1 = Global_2643677.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2635562.f_2055 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
				*uParam0 = { Global_2635562.f_2056[iVar0 /*4*/] };
				*uParam1 = Global_2635562.f_2056[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

void func_245()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		Global_2635562.f_2461[iVar0] = iVar0;
		iVar0++;
	}
}

void func_246()
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		Global_2635562.f_2461[iVar0] = iVar0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_2635562.f_2055)
	{
		iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2635562.f_2055);
		uVar3 = Global_2635562.f_2461[iVar1];
		Global_2635562.f_2461[iVar1] = Global_2635562.f_2461[iVar2];
		Global_2635562.f_2461[iVar2] = uVar3;
		iVar0++;
	}
}

void func_247(struct<3> Param0)
{
	float fVar0;
	var uVar1;
	int iVar2;
	
	fVar0 = -1f;
	while (iVar2 < Global_2635562.f_2055)
	{
		uVar1 = func_248(Param0, fVar0, &fVar0);
		Global_2635562.f_2461[iVar2] = uVar1;
		iVar2++;
	}
}

int func_248(struct<3> Param0, float fParam3, float fParam4)
{
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	
	iVar0 = -1;
	fVar1 = 1E+08f;
	iVar3 = 0;
	while (iVar3 < Global_2635562.f_2055)
	{
		fVar2 = SYSTEM::VDIST2(Param0, Global_2635562.f_2056[iVar3 /*4*/]);
		if (fVar2 < fVar1 && fVar2 > fParam3)
		{
			iVar0 = iVar3;
			fVar1 = fVar2;
		}
		iVar3++;
	}
	*fParam4 = fVar1;
	return iVar0;
}

bool func_249(int iParam0)
{
	return iParam0 == 50;
}

void func_250(float fParam0, float fParam1)
{
	PATHFIND::ADD_NAVMESH_REQUIRED_REGION(fParam0, fParam1, 0.1f);
	Global_2635562.f_2775 = SCRIPT::GET_ID_OF_THIS_THREAD();
	Global_2635562.f_2773 = 1;
	Global_2635562.f_2776 = NETWORK::GET_NETWORK_TIME();
}

int func_251(struct<3> Param0, float fParam3, float fParam4, float fParam5, float fParam6, int iParam7, bool bParam8, int iParam9, float fParam10, bool bParam11, int iParam12, bool bParam13, float fParam14, bool bParam15, float fParam16, bool bParam17, bool bParam18)
{
	Global_2635562.f_2 = 0;
	if (fParam3 > 0f)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0, fParam3))
		{
			return 0;
		}
	}
	if (fParam4 > 0f)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), fParam4) || PED::IS_ANY_PED_NEAR_POINT(Param0, fParam4))
		{
			return 0;
		}
	}
	if (fParam5 > 0f)
	{
		if (OBJECT::IS_ANY_OBJECT_NEAR_POINT(Param0, fParam5, bParam18))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam13)
	{
		if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(Param0, 2.5f) > 0)
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (fParam14 > 0f)
	{
		if (func_205(Param0, fParam14, 1, 1, bParam15, bParam17, bParam11, bParam15, 0))
		{
			return 0;
		}
	}
	Global_2635562.f_2++;
	if (bParam8)
	{
		if (fParam6 > 0f)
		{
			if (func_191(Param0, fParam6, iParam7, iParam9, fParam10, bParam11, iParam12, fParam16, bParam17))
			{
				return 0;
			}
		}
	}
	Global_2635562.f_2++;
	return 1;
}

void func_252()
{
	func_257();
	func_256();
	func_255();
	func_254();
	func_253();
}

void func_253()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 128)
	{
		Global_2638819[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_254()
{
	struct<10> Var0;
	int iVar10;
	
	iVar10 = 0;
	while (iVar10 < 4)
	{
		Global_2635562.f_2792.f_90[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_255()
{
	struct<4> Var0;
	int iVar4;
	
	iVar4 = 0;
	while (iVar4 < 8)
	{
		Global_2635562.f_2792.f_57[iVar4 /*4*/] = { Var0 };
		iVar4++;
	}
}

void func_256()
{
	struct<10> Var0;
	int iVar10;
	
	Var0.f_2 = 1176256410;
	iVar10 = 0;
	while (iVar10 < 5)
	{
		Global_2635562.f_2792.f_6[iVar10 /*10*/] = { Var0 };
		iVar10++;
	}
}

void func_257()
{
	struct<6> Var0;
	
	Var0.f_3 = -1;
	Global_2635562.f_2792 = { Var0 };
}

void func_258()
{
	if (Global_2635562.f_2773)
	{
		if (SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2635562.f_2775)
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		else
		{
			PATHFIND::REMOVE_NAVMESH_REQUIRED_REGIONS();
		}
		Global_2635562.f_2773 = 0;
	}
}

int func_259(bool bParam0)
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return 10000;
	}
	if (bParam0)
	{
		return 5000;
	}
	return 1000;
}

bool func_260(int iParam0)
{
	if (iParam0 == 0)
	{
		return 1;
	}
	STREAMING::REQUEST_MODEL(iParam0);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Local_81.f_49;
			break;
	}
	return 0;
}

int func_262()
{
	if (bLocal_304 == 0)
	{
		if (BitTest(Local_81.f_2, 4))
		{
			return 1;
		}
	}
	return 0;
}

int func_263()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	var uVar9;
	
	if (!BitTest(Local_81.f_2, 0))
	{
		MISC::SET_BIT(&(Local_81.f_2), false);
		if (bLocal_304 != 0)
		{
			return 1;
		}
		else if (func_6(iLocal_306, 1, 1))
		{
			if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false)) >= func_519(bLocal_304)
			{
				if (NETWORK::CAN_REGISTER_MISSION_PEDS(func_519(bLocal_304)))
				{
					iVar0 = 0;
					iVar1 = 0;
					iVar2 = PLAYER::GET_PLAYER_PED(iLocal_306);
					iVar3 = PED::GET_PED_NEARBY_PEDS(iVar2, &uLocal_489, -1);
					bVar4 = true;
					iVar0 = 0;
					while (iVar0 < iVar3)
					{
						if (bVar4)
						{
							iVar5 = -1;
							bVar4 = false;
							iVar1 = 0;
							while (iVar1 < func_519(bLocal_304))
							{
								if (iVar5 == -1)
								{
									if (((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iVar1 /*7*/]) && !BitTest(Local_81.f_10[iVar1 /*7*/].f_2, 1)) && !BitTest(Local_81.f_10[iVar1 /*7*/].f_2, 6)) && !BitTest(Local_81.f_10[iVar1 /*7*/].f_2, 8))
									{
										iVar5 = iVar1;
										bVar4 = true;
									}
								}
								iVar1++;
							}
							if (iVar5 != -1)
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[iVar0]))
								{
									if (!ENTITY::IS_ENTITY_DEAD(uLocal_489[iVar0], false))
									{
										if (!PED::IS_PED_A_PLAYER(uLocal_489[iVar0]))
										{
											if (func_265(ENTITY::GET_ENTITY_MODEL(uLocal_489[iVar0])))
											{
												if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_489[iVar0]))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(uLocal_489[iVar0], false))
													{
														if (func_5(ENTITY::GET_ENTITY_COORDS(uLocal_489[iVar0], true), ENTITY::GET_ENTITY_COORDS(iVar2, true), 625f))
														{
															ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_489[iVar0], true, false);
															Local_81.f_10[iVar5 /*7*/].f_6 = iVar0;
															MISC::SET_BIT(&(Local_81.f_10[iVar5 /*7*/].f_2), 8);
															if (!BitTest(Local_81.f_1, 12))
															{
																Local_81.f_8 = iLocal_311;
																MISC::SET_BIT(&(Local_81.f_1), 12);
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
						iVar0++;
					}
				}
			}
		}
	}
	else if (BitTest(Local_81.f_1, 12))
	{
		iVar6 = 0;
		iVar7 = 0;
		bVar8 = false;
		iVar6 = 0;
		while (iVar6 < func_519(bLocal_304))
		{
			if (BitTest(Local_81.f_10[iVar6 /*7*/].f_2, 1) || BitTest(Local_81.f_10[iVar6 /*7*/].f_2, 6))
			{
				iVar7++;
			}
			else if (BitTest(Local_81.f_10[iVar6 /*7*/].f_2, 8))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6], false))
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6]))
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6]);
							bVar8 = true;
						}
						else
						{
							WEAPON::REMOVE_ALL_PED_WEAPONS(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6], true);
							Local_81.f_10[iVar6 /*7*/] = NETWORK::PED_TO_NET(uLocal_489[Local_81.f_10[iVar6 /*7*/].f_6]);
							NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_81.f_10[iVar6 /*7*/], true);
							MISC::SET_BIT(&(Local_81.f_10[iVar6 /*7*/].f_2), false);
							Local_81.f_10[iVar6 /*7*/].f_1 = bLocal_304;
							Local_81.f_10[iVar6 /*7*/].f_4 = func_77(bLocal_304);
							func_75(iVar6);
							MISC::CLEAR_BIT(&(Local_81.f_10[iVar6 /*7*/].f_2), 8);
							iVar7++;
						}
					}
					else
					{
						bVar8 = true;
					}
				}
			}
			iVar6++;
		}
		if (!bVar8 || NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_8) > 5000)
		{
			if (iVar7 >= func_519(bLocal_304))
			{
				MISC::SET_BIT(&(Local_81.f_2), 4);
			}
			iVar6 = 0;
			while (iVar6 < 16)
			{
				uLocal_489[iVar6] = uVar9;
				iVar6++;
			}
			iVar6 = 0;
			while (iVar6 < func_519(bLocal_304))
			{
				if (BitTest(Local_81.f_10[iVar6 /*7*/].f_2, 8))
				{
					func_264(&(Local_81.f_10[iVar6 /*7*/]));
					MISC::CLEAR_BIT(&(Local_81.f_10[iVar6 /*7*/].f_2), 8);
				}
				iVar6++;
			}
			MISC::CLEAR_BIT(&(Local_81.f_1), 12);
			return 1;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_264(int iParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(*iParam0))
	{
		iVar0 = NETWORK::NET_TO_ENT(*iParam0);
		ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar0);
	}
}

int func_265(int iParam0)
{
	if (((((((((((((((((((((((((((((((((((((((((((((((((((((((iParam0 == joaat("mp_m_freemode_01") || iParam0 == joaat("mp_m_fibsec_01")) || iParam0 == joaat("mp_s_m_armoured_01")) || iParam0 == joaat("s_f_y_airhostess_01")) || iParam0 == joaat("s_f_y_baywatch_01")) || iParam0 == joaat("s_f_y_cop_01")) || iParam0 == joaat("s_f_y_ranger_01")) || iParam0 == joaat("s_f_y_scrubs_01")) || iParam0 == joaat("s_f_y_sheriff_01")) || iParam0 == joaat("s_m_m_armoured_01")) || iParam0 == joaat("s_m_m_armoured_02")) || iParam0 == joaat("s_m_m_bouncer_01")) || iParam0 == joaat("s_m_m_ciasec_01")) || iParam0 == joaat("s_m_m_chemsec_01")) || iParam0 == joaat("s_m_m_doctor_01")) || iParam0 == joaat("s_m_m_fiboffice_01")) || iParam0 == joaat("s_m_m_fiboffice_02")) || iParam0 == joaat("s_m_m_highsec_01")) || iParam0 == joaat("s_m_m_highsec_02")) || iParam0 == joaat("s_m_m_janitor")) || iParam0 == joaat("s_m_m_lsmetro_01")) || iParam0 == joaat("s_m_m_marine_01")) || iParam0 == joaat("s_m_m_marine_02")) || iParam0 == joaat("s_m_m_paramedic_01")) || iParam0 == joaat("s_m_m_pilot_01")) || iParam0 == joaat("s_m_m_pilot_02")) || iParam0 == joaat("s_m_m_postal_01")) || iParam0 == joaat("s_m_m_postal_02")) || iParam0 == joaat("s_m_m_prisguard_01")) || iParam0 == joaat("s_m_m_scientist_01")) || iParam0 == joaat("s_m_m_security_01")) || iParam0 == joaat("s_m_m_ups_01")) || iParam0 == joaat("s_m_m_ups_02")) || iParam0 == joaat("s_m_y_airworker")) || iParam0 == joaat("s_m_y_armymech_01")) || iParam0 == joaat("s_m_y_baywatch_01")) || iParam0 == joaat("s_m_y_blackops_01")) || iParam0 == joaat("s_m_y_blackops_02")) || iParam0 == joaat("s_m_y_cop_01")) || iParam0 == joaat("s_m_y_doorman_01")) || iParam0 == joaat("s_m_y_fireman_01")) || iParam0 == joaat("s_m_y_garbage")) || iParam0 == joaat("s_m_y_hwaycop_01")) || iParam0 == joaat("s_m_y_marine_01")) || iParam0 == joaat("s_m_y_marine_02")) || iParam0 == joaat("s_m_y_marine_03")) || iParam0 == joaat("s_m_y_pilot_01")) || iParam0 == joaat("s_m_y_ranger_01")) || iParam0 == joaat("s_m_y_sheriff_01")) || iParam0 == joaat("s_m_y_swat_01")) || iParam0 == joaat("s_m_y_uscg_01")) || iParam0 == joaat("s_m_y_valet_01")) || iParam0 == joaat("s_m_y_waiter_01")) || iParam0 == joaat("u_m_m_jewelsec_01")) || iParam0 == joaat("s_m_y_casino_01")) || func_266(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_266(int iParam0)
{
	switch (iParam0)
	{
		case joaat("a_c_boar"):
		case joaat("a_c_boar_02"):
		case joaat("a_c_cat_01"):
		case joaat("a_c_chickenhawk"):
		case joaat("a_c_chimp"):
		case joaat("a_c_chimp_02"):
		case joaat("a_c_chop"):
		case joaat("a_c_cormorant"):
		case joaat("a_c_cow"):
		case joaat("a_c_coyote"):
		case joaat("a_c_coyote_02"):
		case joaat("a_c_crow"):
		case joaat("a_c_deer"):
		case joaat("a_c_dolphin"):
		case joaat("a_c_fish"):
		case joaat("a_c_hen"):
		case joaat("a_c_humpback"):
		case joaat("a_c_husky"):
		case joaat("a_c_killerwhale"):
		case joaat("a_c_mtlion"):
		case joaat("a_c_pig"):
		case joaat("a_c_pigeon"):
		case joaat("a_c_poodle"):
		case joaat("a_c_pug"):
		case joaat("a_c_rabbit_01"):
		case joaat("a_c_rabbit_02"):
		case joaat("a_c_rat"):
		case joaat("a_c_retriever"):
		case joaat("a_c_rhesus"):
		case joaat("a_c_rottweiler"):
		case joaat("a_c_seagull"):
		case joaat("a_c_sharkhammer"):
		case joaat("a_c_sharktiger"):
		case joaat("a_c_shepherd"):
		case joaat("a_c_stingray"):
		case joaat("a_c_westy"):
		case joaat("ig_orleans"):
		case -1418373279:
			return 1;
		
		default:
	}
	return 0;
}

int func_267()
{
	if (BitTest(Local_81.f_1, 6))
	{
		return 1;
	}
	else if (bLocal_304 == 0)
	{
		Local_81.f_49 = func_268(Local_81.f_36, 1);
		MISC::SET_BIT(&(Local_81.f_1), 6);
		return 1;
	}
	else
	{
		MISC::SET_BIT(&(Local_81.f_1), 6);
		return 1;
	}
	return 0;
}

int func_268(struct<3> Param0, int iParam3)
{
	int iVar0;
	
	if (func_269(Param0, 1301f, -1696f, 300f, 350f, 0))
	{
		return joaat("g_m_y_mexgoon_01");
	}
	else if (func_269(Param0, 1100f, -196f, 300f, 350f, 0) || func_269(Param0, 77f, 3657f, 100f, 150f, 0))
	{
		return joaat("g_m_y_lost_01");
	}
	else if (func_269(Param0, 208f, -1835f, 200f, 250f, 0))
	{
		return joaat("g_m_y_ballaorig_01");
	}
	else if (func_269(Param0, -26f, -1450f, 200f, 250f, 0))
	{
		return joaat("g_m_y_famca_01");
	}
	else if (func_269(Param0, -654f, -922f, 300f, 350f, 0))
	{
		return joaat("g_m_y_korean_02");
	}
	else if (func_269(Param0, 1840f, 3657f, 450f, 500f, 0))
	{
		return joaat("a_m_m_hillbilly_02");
	}
	else if (func_269(Param0, 550f, -1885f, 200f, 250f, 0))
	{
		return joaat("g_m_y_salvagoon_01");
	}
	else if (iParam3 == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
		if (iVar0 < 33)
		{
			return joaat("mp_g_m_pros_01");
		}
		else if (iVar0 >= 66)
		{
			return joaat("g_m_m_armgoon_01");
		}
		else
		{
			return joaat("g_m_m_chigoon_01");
		}
		if (Param0.f_1 > 800f)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 100);
			if (iVar0 < 33)
			{
				return joaat("a_m_m_hillbilly_02");
			}
		}
	}
	return joaat("mp_g_m_pros_01");
}

bool func_269(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Param0, Param3, bParam7) <= fParam6;
}

void func_270(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	Local_81.f_36 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	if (func_271(iParam0, 0))
	{
		MISC::SET_BIT(&(Local_81.f_1), 17);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_81.f_1), 17);
	}
}

int func_271(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) || iParam1)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
			{
				if (ENTITY::GET_ENTITY_SUBMERGED_LEVEL(iParam0) >= 0.7f)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_272()
{
	bool bVar0;
	
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (BitTest(Local_81.f_1, 7))
		{
			return 1;
		}
		else
		{
			bVar0 = false;
			switch (bLocal_304)
			{
				case 0:
					if (BitTest(Local_81.f_2, 11))
					{
						if (func_6(iLocal_306, 1, 1))
						{
							if (SYSTEM::VDIST2(func_8(iLocal_306), Local_81.f_39) > 625f)
							{
								MISC::CLEAR_BIT(&(Local_81.f_2), 11);
								MISC::CLEAR_BIT(&iLocal_298, 8);
							}
						}
					}
					else
					{
						if (func_6(iLocal_306, 1, 1))
						{
							bVar0 = true;
							if (func_275())
							{
								bVar0 = false;
							}
						}
						if (bVar0)
						{
							func_70();
						}
						else
						{
							func_71();
						}
						if (BitTest(Local_81.f_1, 5))
						{
							if (func_274())
							{
								func_71();
								MISC::SET_BIT(&(Local_81.f_1), 7);
							}
						}
					}
					break;
				
				case 1:
					if (func_6(iLocal_306, 1, 1))
					{
						bVar0 = true;
						if (func_273())
						{
							bVar0 = false;
						}
					}
					if (bVar0)
					{
						func_70();
					}
					else
					{
						func_71();
					}
					if (BitTest(Local_81.f_1, 5))
					{
						if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_5) > 30000)
						{
							func_71();
							MISC::SET_BIT(&(Local_81.f_1), 7);
						}
					}
					break;
				}
			}
	}
	return 0;
}

int func_273()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_306);
	if (((((ENTITY::IS_ENTITY_IN_AIR(iVar0) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_30(iLocal_306, 1, 1)) || func_49(iLocal_306, 0)) || func_49(iLocal_306, 7)) || func_29(iLocal_306))
	{
		return 1;
	}
	if (func_125(iLocal_306, 1))
	{
		if (iLocal_306 > -1)
		{
			if (Global_1845298[iLocal_306 /*881*/] != 1)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_274()
{
	if (!BitTest(Local_81.f_1, 18))
	{
		if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_5) > 5000)
		{
			MISC::SET_BIT(&(Local_81.f_1), 18);
			return 1;
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_5) > 60000)
	{
		return 1;
	}
	return 0;
}

int func_275()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYER_PED(iLocal_306);
	if (((((((((ENTITY::GET_ENTITY_SPEED(iVar0) > 10f || ENTITY::IS_ENTITY_IN_AIR(iVar0)) || ENTITY::IS_ENTITY_IN_WATER(iVar0)) || func_30(iLocal_306, 1, 1)) || func_69(iLocal_306)) || func_49(iLocal_306, 0)) || func_49(iLocal_306, 7)) || func_29(iLocal_306)) || Global_2658293[iLocal_306 /*468*/].f_252) || func_68(PLAYER::GET_PLAYER_PED(iLocal_306), joaat("titan")))
	{
		return 1;
	}
	if (func_125(iLocal_306, 1))
	{
		if (iLocal_306 > -1)
		{
			if (Global_1845298[iLocal_306 /*881*/] != 1)
			{
				return 1;
			}
		}
	}
	if (iLocal_306 != -1)
	{
		if (BitTest(Local_137[iLocal_306 /*5*/].f_1, 4))
		{
			return 1;
		}
	}
	return 0;
}

void func_276()
{
	if (!BitTest(Local_81.f_1, 14))
	{
		Local_81.f_9 = iLocal_311;
		MISC::SET_BIT(&(Local_81.f_1), 14);
	}
}

void func_277()
{
	if (Local_81.f_44 != Local_137[iLocal_305 /*5*/].f_4)
	{
		Local_81.f_44 = Local_137[iLocal_305 /*5*/].f_4;
	}
}

void func_278()
{
	if (!BitTest(Local_81.f_1, 10))
	{
		Local_81.f_45 = func_519(bLocal_304);
		Local_81.f_46 = 0;
		Local_81.f_47 = 0;
		MISC::SET_BIT(&(Local_81.f_1), 10);
	}
}

void func_279()
{
	func_280();
	if (!BitTest(Local_81.f_1, 8))
	{
		if (BitTest(Local_81.f_2, 7))
		{
			if (NETWORK::GET_TIME_DIFFERENCE(iLocal_311, Local_81.f_7) > 300000)
			{
				MISC::SET_BIT(&(Local_81.f_2), 8);
			}
		}
	}
}

void func_280()
{
	if (!BitTest(Local_81.f_2, 7))
	{
		Local_81.f_7 = iLocal_311;
		MISC::SET_BIT(&(Local_81.f_2), 7);
	}
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	MISC::SET_BIT(&iLocal_298, 7);
	if (BitTest(Local_81.f_3, 1))
	{
	}
	if (BitTest(Local_81.f_3, 2))
	{
	}
	if (BitTest(Local_81.f_3, 3))
	{
	}
	if (BitTest(Local_81.f_3, 9))
	{
	}
	if (BitTest(Local_81.f_3, 4))
	{
	}
	if (BitTest(Local_81.f_3, 5))
	{
	}
	if (BitTest(Local_81.f_3, 11))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::CLEAR_BIT(&iLocal_298, 7);
			if (Local_81.f_50 || Local_81.f_52)
			{
				MISC::SET_BIT(&iLocal_298, 7);
			}
			else if (func_411("MPCT_MERts", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_298, 7);
			}
		}
	}
	if (BitTest(Local_81.f_3, 6))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::CLEAR_BIT(&iLocal_298, 7);
			if (Local_81.f_50 || Local_81.f_52)
			{
				MISC::SET_BIT(&iLocal_298, 7);
			}
			else if (func_411("MPCT_MERtd", "FM_MERRYWEATHER", 85))
			{
				MISC::SET_BIT(&iLocal_298, 7);
			}
		}
	}
	if (BitTest(Local_81.f_3, 7))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::CLEAR_BIT(&iLocal_298, 7);
			if (func_359())
			{
				if (!Local_81.f_50)
				{
					if (Local_81.f_52)
					{
						iLocal_506 = func_358(Local_81.f_53);
					}
					else
					{
						iLocal_506 = func_354(12);
					}
					if (iLocal_506 > 0)
					{
						func_352(iLocal_506, 1, 0, 0f);
						func_338(iLocal_506, 4, 1, 1);
					}
					MISC::SET_BIT(&iLocal_298, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_298, 7);
				}
			}
		}
	}
	if (BitTest(Local_81.f_3, 0))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			if (!BitTest(Local_81.f_2, 1))
			{
				MISC::CLEAR_BIT(&iLocal_298, 7);
				if (func_411("MPCT_mugfail", "LAMAR", 19))
				{
					MISC::SET_BIT(&iLocal_298, 7);
				}
			}
		}
		else if (PLAYER::PLAYER_ID() == iLocal_306)
		{
			if (BitTest(Local_81.f_2, 1))
			{
				if (BitTest(Local_81.f_2, 12))
				{
					iVar0 = SYSTEM::ROUND((IntToFloat(Global_262145.f_7259) * Global_262145.f_3987));
					func_297(0, "XPT_MEDIUMT", -1859646258, 757237446, iVar0, 1, -1, 0);
					func_283(47, 1);
				}
			}
		}
	}
	if (BitTest(Local_81.f_3, 8))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::CLEAR_BIT(&iLocal_298, 7);
			if (func_359())
			{
				if (bLocal_304 == 0)
				{
					iLocal_506 = (func_354(2) * func_519(bLocal_304));
					iVar1 = 3;
				}
				else
				{
					if (Local_81.f_52)
					{
						iLocal_506 = func_358(Local_81.f_53);
					}
					else
					{
						iLocal_506 = func_354(12);
					}
					iVar1 = 4;
				}
				if (!Local_81.f_50)
				{
					if (iLocal_506 > 0)
					{
						func_352(iLocal_506, 1, 0, 0f);
						func_338(iLocal_506, iVar1, 1, 0);
					}
					MISC::SET_BIT(&iLocal_298, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_298, 7);
				}
			}
		}
	}
	if (BitTest(Local_81.f_3, 10))
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::CLEAR_BIT(&iLocal_298, 7);
			if (func_359())
			{
				if (bLocal_304 == 0)
				{
					iLocal_506 = (func_354(2) * func_519(bLocal_304));
					iVar2 = 3;
				}
				else
				{
					if (Local_81.f_52)
					{
						iLocal_506 = func_358(Local_81.f_53);
					}
					else
					{
						iLocal_506 = func_354(12);
					}
					iVar2 = 4;
				}
				if (!Local_81.f_50)
				{
					if (iLocal_506 > 0)
					{
						func_352(iLocal_506, 1, 0, 0f);
						func_338(iLocal_506, iVar2, 1, 0);
					}
					MISC::SET_BIT(&iLocal_298, 7);
				}
				else
				{
					MISC::SET_BIT(&iLocal_298, 7);
				}
			}
		}
	}
	if (BitTest(iLocal_298, 7))
	{
		func_282();
	}
}

void func_282()
{
	MISC::CLEAR_BIT(&(Global_1845298[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*881*/].f_141), bLocal_304);
	Global_1845298[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*881*/].f_142 = -1;
	if (bLocal_304 == 1)
	{
		if (MISC::IS_INCIDENT_VALID(iLocal_488))
		{
			MISC::DELETE_INCIDENT(iLocal_488);
		}
	}
	func_548();
	func_579();
}

int func_283(int iParam0, int iParam1)
{
	if (iParam0 >= 78)
	{
		return 0;
	}
	return func_284(iParam0, iParam1);
}

int func_284(int iParam0, int iParam1)
{
	if (func_296(14) && !func_295(iParam0))
	{
		return 0;
	}
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
	{
		return 0;
	}
	if (Global_34066 != 0 && !Global_80337)
	{
		return 0;
	}
	if (func_294(&Global_4525223))
	{
		if (func_292(&Global_4525223, iParam0))
		{
			return 0;
		}
		if (func_285(&Global_4525223, iParam0))
		{
			return 1;
		}
	}
	else
	{
		if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
		{
			return 0;
		}
		if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_285(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1[78];
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_296(14) && !func_295(iParam1))
	{
		return 0;
	}
	if (func_292(uParam0, iParam1))
	{
		return 0;
	}
	if (func_291(uParam0) < 0f)
	{
		func_290(uParam0, 0);
	}
	func_288(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < (*uParam0 - 1))
	{
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_286(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return 1;
}

int func_286(var uParam0, int iParam1)
{
	int iVar0;
	
	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
	{
		return 0;
	}
	if (func_296(14) && !func_295(iParam1))
	{
		return 0;
	}
	if (func_292(uParam0, iParam1))
	{
		return 0;
	}
	if (func_291(uParam0) < 0f)
	{
		func_290(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_287(uParam0, iVar0))
		{
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_287(var uParam0, int iParam1)
{
	return (*uParam0)[iParam1] == 78;
}

void func_288(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_289(uParam0, iVar0);
		iVar0++;
	}
	func_290(uParam0, (Global_4525222 - 0.5f));
}

void func_289(var uParam0, int iParam1)
{
	(*uParam0)[iParam1] = 78;
}

void func_290(var uParam0, float fParam1)
{
	if (fParam1 == 0f)
	{
		uParam0->f_80 = 0f;
	}
	else
	{
		uParam0->f_80 = fParam1;
	}
}

float func_291(var uParam0)
{
	return uParam0->f_80;
}

bool func_292(var uParam0, int iParam1)
{
	return func_293(uParam0, iParam1) != -1;
}

int func_293(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((*uParam0)[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_294(var uParam0)
{
	return uParam0->f_79 == 1;
}

int func_295(int iParam0)
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
			return 1;
		
		default:
	}
	return 0;
}

bool func_296(int iParam0)
{
	return Global_44921 == iParam0;
}

var func_297(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	return func_298(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, iParam6, bParam7);
}

var func_298(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	var uVar0;
	
	uVar0 = func_299(iParam0, 0, sParam1, iParam4, iParam5, 0, iParam6, 1, iParam2, iParam3, bParam7);
	return uVar0;
}

int func_299(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	
	iVar2 = func_330();
	if (func_329(sParam2))
	{
	}
	if (func_328())
	{
		if (iParam4 < 1)
		{
			iParam4 = 1;
		}
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam3) * (IntToFloat(iParam4) + fVar0)));
		iVar1 = func_326(iVar1);
		fVar3 = (SYSTEM::TO_FLOAT(iVar1) * Global_262145.f_1);
		iVar1 = SYSTEM::ROUND(fVar3);
		if (bParam10)
		{
			iVar1 = func_325(&iVar1);
		}
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 2:
					func_323(0, &iVar1);
					break;
				
				case 3:
					func_323(1, &iVar1);
					break;
				
				case 1:
					func_321(&iVar1);
					break;
				}
		}
		if (iVar1 > Global_262145.f_13458)
		{
			return 0;
		}
		if (iParam1 == 0)
		{
			if (iVar1 > iVar2)
			{
				if (iParam0 == 1)
				{
					iVar1 = iVar2;
				}
				if (iParam0 == 2 || iParam0 == 3)
				{
					iVar1 = iVar2;
				}
			}
		}
		if (bParam7)
		{
			func_320(1165, iVar1, -1);
			if (iParam1 == 0)
			{
				func_307((func_319(PLAYER::PLAYER_ID()) + iVar1), iParam9, 0);
				if (iParam8 == 0)
				{
				}
				if (iParam9 == 0)
				{
				}
				STATS::PLAYSTATS_AWARD_XP(iVar1, iParam8, iParam9);
				if (Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_2 != -1)
				{
					func_320(1166, iVar1, -1);
				}
				func_304(iVar1);
			}
		}
		if (bParam5)
		{
		}
		if (bParam7)
		{
			if (iParam6 == -1)
			{
				func_300((func_302(PLAYER::PLAYER_ID()) + iVar1));
			}
			else
			{
				func_300((func_302(PLAYER::PLAYER_ID()) + iParam6));
			}
		}
	}
	return iVar1;
}

void func_300(int iParam0)
{
	if (func_328())
	{
		Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_5 = iParam0;
		func_301(joaat("mpply_globalxp"), iParam0);
	}
}

void func_301(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iVar0 != 0)
	{
		STATS::STAT_SET_INT(iVar0, iParam1, true);
	}
}

int func_302(int iParam0)
{
	if (iParam0 > -1)
	{
		if (func_6(iParam0, 0, 1))
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_303(joaat("mpply_globalxp"));
			}
			else
			{
				return Global_1845298[iParam0 /*881*/].f_198.f_5;
			}
		}
		else
		{
			return func_303(joaat("mpply_globalxp"));
		}
	}
	return 0;
}

int func_303(int iParam0)
{
	int iVar0;
	var uVar1;
	
	iVar0 = iParam0;
	if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
	{
		return uVar1;
	}
	return 0;
}

void func_304(int iParam0)
{
	struct<13> Var0;
	int iVar13;
	
	Var0 = { func_155(PLAYER::PLAYER_ID()) };
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&Var0))
		{
			iVar13 = func_305(func_306(&Var0));
			if (iVar13 == 0)
			{
				func_301(joaat("mpply_crew_local_xp_0"), (func_303(joaat("mpply_crew_local_xp_0")) + iParam0));
			}
			else if (iVar13 == 1)
			{
				func_301(joaat("mpply_crew_local_xp_1"), (func_303(joaat("mpply_crew_local_xp_1")) + iParam0));
			}
			else if (iVar13 == 2)
			{
				func_301(joaat("mpply_crew_local_xp_2"), (func_303(joaat("mpply_crew_local_xp_2")) + iParam0));
			}
			else if (iVar13 == 3)
			{
				func_301(joaat("mpply_crew_local_xp_3"), (func_303(joaat("mpply_crew_local_xp_3")) + iParam0));
			}
			else if (iVar13 == 4)
			{
				func_301(joaat("mpply_crew_local_xp_4"), (func_303(joaat("mpply_crew_local_xp_4")) + iParam0));
			}
		}
	}
}

int func_305(int iParam0)
{
	if (iParam0 == func_303(joaat("mpply_crew_0_id")))
	{
		return 0;
	}
	else if (iParam0 == func_303(joaat("mpply_crew_1_id")))
	{
		return 1;
	}
	else if (iParam0 == func_303(joaat("mpply_crew_2_id")))
	{
		return 2;
	}
	else if (iParam0 == func_303(joaat("mpply_crew_3_id")))
	{
		return 3;
	}
	else if (iParam0 == func_303(joaat("mpply_crew_4_id")))
	{
		return 4;
	}
	else
	{
		return -1;
	}
	return -1;
}

int func_306(var* uParam0)
{
	if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
	{
		if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(uParam0))
		{
			return Global_2697014;
		}
	}
	return Global_2697014;
}

void func_307(int iParam0, int iParam1, int iParam2)
{
	if (func_328())
	{
		if (iParam0 >= 1787576850)
		{
			iParam0 = 1787576850;
		}
		if (Global_262145.f_10184 == 0 && iParam1 != -1076930708)
		{
			if (iParam2 == 0)
			{
				if (iParam0 < func_318(640, -1))
				{
					STATS::PLAYSTATS_AWARD_XP(iParam0, -523908350, iParam1);
					return;
				}
				else if (iParam0 == func_318(640, -1))
				{
					return;
				}
			}
		}
		if (Global_262145.f_10183 == 0)
		{
			if (iParam0 == 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1158693853, -1345423847);
				if (iParam2 == 0)
				{
					return;
				}
			}
		}
		if (Global_262145.f_10183 == 0)
		{
			if (iParam0 < 0)
			{
				STATS::PLAYSTATS_AWARD_XP(iParam0, -1586921397, iParam1);
				return;
			}
		}
		if (func_317(PLAYER::PLAYER_ID()))
		{
			Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_1 = iParam0;
			Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_6 = func_314(iParam0, 1);
		}
		func_311(640, iParam0, -1, 1);
		func_311(641, func_314(iParam0, 1), -1, 1);
		func_308(-1109644434, 7, 0);
	}
}

void func_308(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_310(iParam1, iParam2))
	{
		iVar0 = func_309();
		Global_2696964[iVar0] = iParam1;
		Global_2696975[iVar0] = iParam0;
	}
}

int func_309()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 9;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_2696964[iVar1] == 0)
		{
			iVar0 = iVar1;
			iVar1 = 10;
		}
		iVar1++;
	}
	return iVar0;
}

int func_310(int iParam0, var uParam1)
{
	if (Global_1575083)
	{
		return 0;
	}
	if (iParam0 == 22)
	{
		return 1;
	}
	if ((((((((uParam1 || !Global_1575095) || iParam0 == 3) || iParam0 == 10) || iParam0 == 11) || iParam0 == 27) || iParam0 == 28) || iParam0 == 29) || iParam0 == 30)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_311(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_312(iParam0, iParam2);
		if (iVar0 != 0)
		{
			STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
		}
	}
}

int func_312(int iParam0, var uParam1)
{
	return STATS::_GET_STAT_HASH_FOR_CHARACTER_STAT(0, iParam0, func_313(uParam1));
}

int func_313(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = uParam0;
	if (iVar0 == -1)
	{
		iVar1 = func_220();
		if (iVar1 > -1)
		{
			Global_2741491 = 0;
			iVar0 = iVar1;
		}
		else
		{
			iVar0 = 0;
			Global_2741491 = 1;
		}
	}
	return iVar0;
}

int func_314(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	return func_315(iParam0, 0);
}

int func_315(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	
	if (iParam1 == 0)
	{
	}
	iVar1 = 8000;
	iVar2 = 0;
	iVar3 = ((iVar1 - iVar2) / 2);
	iVar0 = 0;
	while (iVar0 <= 100)
	{
		if (iVar1 == iVar2)
		{
			iVar0 = 8000;
			if (iVar3 == 0)
			{
				iVar3 = 1;
			}
			return iVar3;
		}
		if (func_316(iVar3) == iParam0)
		{
			iVar1 = iVar3;
			iVar2 = iVar3;
		}
		else if (func_316(iVar3) < iParam0)
		{
			if (iVar2 == iVar3)
			{
				iVar2++;
			}
			else
			{
				iVar2 = iVar3;
			}
		}
		else if (iVar1 == iVar3)
		{
			iVar1 = (iVar1 - 1);
		}
		else
		{
			iVar1 = iVar3;
		}
		fVar4 = (((SYSTEM::TO_FLOAT(iVar1) - SYSTEM::TO_FLOAT(iVar2)) / 2f) + SYSTEM::TO_FLOAT(iVar2));
		iVar3 = SYSTEM::ROUND(fVar4);
		iVar0++;
	}
	return 8000;
}

int func_316(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 < 100)
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 0;
				break;
			
			case 2:
				return 800;
			
			case 3:
				return 2100;
			
			case 4:
				return 3800;
			
			case 5:
				return 6100;
			
			case 6:
				return 9500;
			
			case 7:
				return 12500;
			
			case 8:
				return 16000;
			
			case 9:
				return 19800;
			
			case 10:
				return 24000;
			
			case 11:
				return 28500;
			
			case 12:
				return 33400;
			
			case 13:
				return 38700;
			
			case 14:
				return 44200;
			
			case 15:
				return 50200;
			
			case 16:
				return 56400;
			
			case 17:
				return 63000;
			
			case 18:
				return 69900;
			
			case 19:
				return 77100;
			
			case 20:
				return 84700;
			
			case 21:
				return 92500;
			
			case 22:
				return 100700;
			
			case 23:
				return 109200;
			
			case 24:
				return 118000;
			
			case 25:
				return 127100;
			
			case 26:
				return 136500;
			
			case 27:
				return 146200;
			
			case 28:
				return 156200;
			
			case 29:
				return 166500;
			
			case 30:
				return 177100;
			
			case 31:
				return 188000;
			
			case 32:
				return 199200;
			
			case 33:
				return 210700;
			
			case 34:
				return 222400;
			
			case 35:
				return 234500;
			
			case 36:
				return 246800;
			
			case 37:
				return 259400;
			
			case 38:
				return 272300;
			
			case 39:
				return 285500;
			
			case 40:
				return 299000;
			
			case 41:
				return 312700;
			
			case 42:
				return 326800;
			
			case 43:
				return 341000;
			
			case 44:
				return 355600;
			
			case 45:
				return 370500;
			
			case 46:
				return 385600;
			
			case 47:
				return 401000;
			
			case 48:
				return 416600;
			
			case 49:
				return 432600;
			
			case 50:
				return 448800;
			
			case 51:
				return 465200;
			
			case 52:
				return 482000;
			
			case 53:
				return 499000;
			
			case 54:
				return 516300;
			
			case 55:
				return 533800;
			
			case 56:
				return 551600;
			
			case 57:
				return 569600;
			
			case 58:
				return 588000;
			
			case 59:
				return 606500;
			
			case 60:
				return 625400;
			
			case 61:
				return 644500;
			
			case 62:
				return joaat("pyro_sub_bass_synth");
			
			case 63:
				return 683400;
			
			case 64:
				return 703300;
			
			case 65:
				return 723400;
			
			case 66:
				return 743800;
			
			case 67:
				return 764500;
			
			case 68:
				return 785400;
			
			case 69:
				return 806500;
			
			case 70:
				return 827900;
			
			case 71:
				return 849600;
			
			case 72:
				return 871500;
			
			case 73:
				return 893600;
			
			case 74:
				return 916000;
			
			case 75:
				return 938700;
			
			case 76:
				return 961600;
			
			case 77:
				return 984700;
			
			case 78:
				return 1008100;
			
			case 79:
				return 1031800;
			
			case 80:
				return 1055700;
			
			case 81:
				return 1079800;
			
			case 82:
				return 1104200;
			
			case 83:
				return 1128800;
			
			case 84:
				return 1153700;
			
			case 85:
				return 1178800;
			
			case 86:
				return 1204200;
			
			case 87:
				return 1229800;
			
			case 88:
				return 1255600;
			
			case 89:
				return 1281700;
			
			case 90:
				return 1308100;
			
			case 91:
				return 1334600;
			
			case 92:
				return 1361400;
			
			case 93:
				return 1388500;
			
			case 94:
				return 1415800;
			
			case 95:
				return 1443300;
			
			case 96:
				return 1471100;
			
			case 97:
				return 1499100;
			
			case 98:
				return 1527300;
			
			case 99:
				return 1555800;
		}
	}
	else
	{
		iVar0 = (iParam0 - 99);
		iVar1 = ((iVar0 * iVar0 + 1) / 2);
		return ((1555800 + iVar0 * 28500) + iVar1 * 50);
	}
	return 1555800;
}

int func_317(int iParam0)
{
	if (!func_14(iParam0))
	{
		return 0;
	}
	return BitTest(Global_2673273.f_1, iParam0);
}

int func_318(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	
	if (iParam0 != 16764)
	{
		iVar0 = func_312(iParam0, iParam1);
		if (STATS::STAT_GET_INT(iVar0, &uVar1, -1))
		{
			return uVar1;
		}
	}
	return 0;
}

int func_319(int iParam0)
{
	if (Global_1574635.f_9 == 0)
	{
		if (iParam0 > -1)
		{
			if (iParam0 == PLAYER::PLAYER_ID())
			{
				return func_318(640, -1);
			}
			else if (func_317(iParam0))
			{
				return Global_1845298[iParam0 /*881*/].f_198.f_1;
			}
		}
	}
	else
	{
		return func_318(640, -1);
	}
	return 0;
}

void func_320(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_318(iParam0, func_313(iParam2));
	iVar0 = (iVar0 + iParam1);
	func_311(iParam0, iVar0, iParam2, 1);
}

void func_321(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar1 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (PLAYER::GET_PLAYER_TEAM(iVar5) != -1)
			{
				if (PLAYER::GET_PLAYER_TEAM(iVar5) == iVar1 || func_157(PLAYER::GET_PLAYER_TEAM(iVar5), iVar1, 0, -1))
				{
					iVar2++;
					if (iVar5 != PLAYER::PLAYER_ID())
					{
						if (func_156(PLAYER::PLAYER_ID(), iVar5))
						{
							bVar3 = true;
						}
					}
				}
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		iVar6 = SYSTEM::ROUND((func_322(*iParam0, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar2 > 4)
	{
		iVar2 = 4;
	}
	if (iVar2 >= 2)
	{
		iVar7 = SYSTEM::ROUND((func_322(*iParam0, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam0 = (*iParam0 + iVar6);
	*iParam0 = (*iParam0 + iVar7);
}

float func_322(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = SYSTEM::TO_FLOAT(iParam0);
	fVar1 = SYSTEM::TO_FLOAT(iParam1);
	fVar2 = (fVar0 / fVar1);
	return fVar2;
}

void func_323(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (bParam0)
	{
		iVar0 = 0;
		while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			iVar3 = iVar0;
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
			{
				iVar4 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar3);
				if (func_6(iVar4, 0, 1))
				{
					if (iVar4 != PLAYER::PLAYER_ID())
					{
						iVar1++;
						if (func_156(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar4 = iVar0;
			if (func_6(iVar4, 1, 1))
			{
				if (iVar4 != PLAYER::PLAYER_ID())
				{
					if (func_324(PLAYER::PLAYER_ID(), iVar4) <= 20f)
					{
						iVar1++;
						if (func_156(PLAYER::PLAYER_ID(), iVar4))
						{
							bVar2 = true;
						}
					}
				}
			}
			iVar0++;
		}
	}
	if (bVar2)
	{
		iVar5 = SYSTEM::ROUND((func_322(*iParam1, 100) * (10f * Global_262145.f_3922)));
	}
	if (iVar1 > 4)
	{
		iVar1 = 4;
	}
	if (iVar1 >= 1)
	{
		iVar6 = SYSTEM::ROUND((func_322(*iParam1, 100) * (20f * Global_262145.f_3920)));
	}
	*iParam1 = (*iParam1 + iVar5);
	*iParam1 = (*iParam1 + iVar6);
}

float func_324(int iParam0, int iParam1)
{
	return SYSTEM::VDIST(func_8(iParam0), func_8(iParam1));
	return 0f;
}

int func_325(int iParam0)
{
	int iVar0;
	
	if (PAD::GET_LOCAL_PLAYER_AIM_STATE() != 3)
	{
		return *iParam0;
	}
	iVar0 = SYSTEM::ROUND((func_322(*iParam0, 100) * 25f));
	*iParam0 = (*iParam0 + iVar0);
	return *iParam0;
}

int func_326(int iParam0)
{
	if (iParam0 < 0)
	{
		if (MISC::ABSI(iParam0) > func_319(PLAYER::PLAYER_ID()))
		{
			iParam0 = -func_319(PLAYER::PLAYER_ID());
		}
	}
	if (func_327(8000, 0, 0) > 0)
	{
		if (func_327(8000, 0, 0) < (iParam0 + func_319(PLAYER::PLAYER_ID())))
		{
			iParam0 = (func_327(8000, 0, 0) - func_319(PLAYER::PLAYER_ID()));
		}
	}
	return iParam0;
}

int func_327(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == 0)
	{
	}
	if (bParam1)
	{
	}
	if (iParam0 >= 8000)
	{
		iParam0 = 8000;
	}
	return func_316(iParam0);
}

int func_328()
{
	return 1;
}

int func_329(char* sParam0)
{
	if (MISC::IS_STRING_NULL(sParam0))
	{
		return 1;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam0, "") || MISC::ARE_STRINGS_EQUAL(sParam0, "0"))
	{
		return 1;
	}
	return 0;
}

int func_330()
{
	int iVar0;
	
	if (func_337(PLAYER::PLAYER_ID()) || func_336(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_10214 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_10214;
		}
	}
	else if (func_334() || func_332(PLAYER::PLAYER_ID()))
	{
		if (Global_262145.f_23019 > 16000)
		{
			iVar0 = 16000;
		}
		else
		{
			iVar0 = Global_262145.f_23019;
		}
	}
	else if (func_331(Global_4718592.f_197291))
	{
		if (Global_262145.f_7252 > 36000)
		{
			iVar0 = 36000;
		}
		else
		{
			iVar0 = Global_262145.f_7252;
		}
	}
	else if (Global_262145.f_7251 > 36000)
	{
		iVar0 = 36000;
	}
	else
	{
		iVar0 = Global_262145.f_7251;
	}
	return iVar0;
}

bool func_331(int iParam0)
{
	return iParam0 == 89;
}

int func_332(int iParam0)
{
	return func_333(func_45(iParam0));
}

int func_333(int iParam0)
{
	switch (iParam0)
	{
		case 233:
			return 1;
		
		default:
	}
	return 0;
}

int func_334()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return func_195();
	}
	return func_335(Global_4718592.f_132931);
}

int func_335(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_262145.f_4708[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_336(int iParam0)
{
	return Global_2658293[iParam0 /*468*/].f_124 == 2;
}

bool func_337(int iParam0)
{
	return Global_2658293[iParam0 /*468*/].f_124 == 7;
}

void func_338(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	struct<4> Var0;
	struct<8> Var4;
	int iVar12;
	int iVar13;
	
	StringCopy(&Var0, func_351(iParam1), 16);
	StringCopy(&Var4, func_350(iParam2), 32);
	switch (iParam1)
	{
		case 0:
			iVar12 = joaat("service_earn_refund_backup_vagos");
			break;
		
		case 1:
			iVar12 = joaat("service_earn_refund_backup_lost");
			break;
		
		case 2:
			iVar12 = joaat("service_earn_refund_backup_families");
			break;
		
		case 3:
			iVar12 = joaat("service_earn_refund_hire_mugger");
			break;
		
		case 4:
			iVar12 = joaat("service_earn_refund_hire_mercenary");
			break;
		
		case 5:
			iVar12 = joaat("service_earn_refund_buy_cardropoff");
			break;
		
		case 6:
			iVar12 = joaat("service_earn_refund_heli_pickup");
			break;
		
		case 7:
			iVar12 = joaat("service_earn_refund_boat_pickup");
			break;
		
		case 8:
			iVar12 = joaat("service_earn_refund_clear_wanted");
			break;
		
		case 9:
			iVar12 = joaat("service_earn_refund_head_2_head");
			break;
		
		case 10:
			iVar12 = joaat("service_earn_refund_challenge");
			break;
		
		case 11:
			iVar12 = joaat("service_earn_refund_share_last_job");
			break;
		
		case 12:
			iVar12 = joaat("service_earn_refund_lottery");
			break;
		
		case 13:
			iVar12 = -1426920838;
			break;
		
		case 14:
			iVar12 = joaat("service_earn_refundammodrop");
			break;
		
		case 15:
			iVar12 = joaat("service_earn_refund_orbital_manual");
			break;
		
		case 16:
			iVar12 = joaat("service_earn_refund_orbital_auto");
			break;
		
		case 17:
			iVar12 = joaat("service_earn_refund_arena_spec_box_entry");
			break;
	}
	if (func_58())
	{
		if (iParam0 > 0)
		{
			func_339(iVar12, iParam0, &iVar13, bParam3, bParam3, 0);
			Global_4515492[iVar13 /*84*/].f_13.f_40 = { Var0 };
			Global_4515492[iVar13 /*84*/].f_13.f_44 = { Var4 };
		}
	}
	else
	{
		MONEY::NETWORK_REFUND_CASH(iParam0, &Var0, &Var4, bParam3);
	}
}

void func_339(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	
	if (!func_58())
	{
		return;
	}
	iVar0 = 1;
	if (bParam4)
	{
		iVar0 = 4;
	}
	else if (bParam3)
	{
		iVar0 = 2;
	}
	else if (bParam5)
	{
		iVar0 = 8;
	}
	switch (iParam0)
	{
		case joaat("service_spend_mechanic_wage"):
		case joaat("service_spend_utility_bills"):
		case joaat("service_spend_prostitutes"):
		case joaat("service_spend_strip_club"):
		case joaat("service_spend_cinema"):
		case joaat("service_spend_fairground"):
		case joaat("service_spend_lottery"):
		case joaat("service_spend_telescope"):
		case joaat("service_spend_call_player"):
		case joaat("service_spend_vehicle_insurance"):
		case joaat("service_spend_vehicle_insurance_premium"):
		case joaat("service_spend_car_repair"):
		case joaat("service_spend_personal_vehicle_dropoff"):
		case joaat("service_spend_pegasus_delivery"):
		case joaat("service_spend_car_impound"):
		case joaat("service_spend_carwash"):
		case joaat("service_spend_healthcare"):
		case joaat("service_spend_other_player_healthcare"):
		case joaat("service_spend_arrest_bail"):
		case joaat("service_spend_cash_drop"):
		case joaat("service_spend_robbed_by_mugger"):
		case joaat("service_spend_cash_drop_holdup"):
		case joaat("service_spend_match_entry_fee"):
		case joaat("service_spend_race_vehicle_rental"):
		case joaat("service_spend_challenge_wager"):
		case joaat("service_spend_betting"):
		case joaat("service_spend_airstrike"):
		case joaat("service_spend_ammo_drop"):
		case joaat("service_spend_backup_gang"):
		case joaat("service_spend_backup_heli"):
		case joaat("service_spend_boat_pickup"):
		case joaat("service_spend_bounty"):
		case joaat("service_spend_bull_shark"):
		case joaat("service_spend_cops_turn_eye"):
		case joaat("service_spend_heli_pickup"):
		case joaat("service_spend_hire_mercenary"):
		case joaat("service_spend_hire_mugger"):
		case joaat("service_spend_locate_vehicle"):
		case joaat("service_spend_lose_wanted_level"):
		case joaat("service_spend_off_the_radar"):
		case joaat("service_spend_passive"):
		case joaat("service_spend_request_heist"):
		case joaat("service_spend_request_job"):
		case joaat("service_spend_reveal_players"):
		case joaat("service_spend_taxi"):
		case joaat("service_spend_bank_interest"):
		case joaat("service_spend_cash_gift"):
		case joaat("service_spend_cash_shared"):
		case joaat("service_spend_impromptu_race_fee"):
		case joaat("service_spend_bounty_dm"):
		case joaat("service_spend_wager"):
		case joaat("service_spend_pay_boss"):
		case joaat("service_spend_pay_goon"):
		case joaat("service_spend_rename_organization"):
		case joaat("service_spend_rename_acid_product"):
		case joaat("service_spend_rename_acid_lab"):
		case joaat("service_spend_pa_service_heli_pickup"):
		case joaat("service_spend_order_bodyguard_vehicle"):
		case joaat("service_spend_order_warehouse_vehicle"):
		case joaat("service_spend_jukebox"):
		case joaat("service_spend_business"):
		case joaat("service_spend_ba_vp_bounty"):
		case joaat("service_spend_ba_vp_bullshark"):
		case joaat("service_spend_ba_sarge_ammo"):
		case joaat("service_spend_ba_sarge_molotov"):
		case joaat("service_spend_ba_enforcer_armour"):
		case joaat("service_spend_vehicle_export_mods"):
		case joaat("service_spend_import_export_repair"):
		case joaat("service_spend_employ_assassins"):
		case joaat("service_spend_gangops_cannon"):
		case joaat("service_spend_gangops_skip_mission"):
		case joaat("service_spend_gangops_start_strand"):
		case joaat("service_spend_gangops_trip_skip"):
		case joaat("service_spend_gangops_repair_cost"):
		case joaat("service_spend_nightclub_entry_fee"):
		case joaat("service_spend_nightclub_bar_drink"):
		case joaat("service_spend_nightclub_dj_rehire"):
		case joaat("service_spend_arena_join_spectator"):
		case joaat("service_spend_arena_spectator_box"):
		case joaat("service_spend_make_it_rain"):
		case 571787049:
			if (iParam1 > 0 || Global_262145.f_28024)
			{
				func_340(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_pickup"):
		case joaat("service_earn_jobs"):
		case joaat("service_earn_betting"):
		case joaat("service_earn_lottery"):
		case joaat("service_earn_challenge_win"):
		case joaat("service_earn_property_sales"):
		case joaat("service_earn_vehicle_sales"):
		case joaat("service_earn_lester_target_kill"):
		case joaat("service_earn_bounty_collected"):
		case joaat("service_earn_crate_drop"):
		case joaat("service_earn_holdups"):
		case joaat("service_earn_import_export"):
		case joaat("service_earn_armored_trucks"):
		case joaat("service_earn_jobshare_cash"):
		case joaat("service_earn_not_badsport"):
		case joaat("service_earn_bank_interest"):
		case joaat("service_earn_debug"):
		case joaat("service_earn_cncw"):
		case joaat("service_earn_cncb"):
		case joaat("service_earn_job_bonus"):
		case joaat("service_earn_bend_job"):
		case joaat("service_earn_personal_vehicle"):
		case joaat("service_earn_daily_objectives"):
		case joaat("service_earn_ambient_job_plane_takedown"):
		case joaat("service_earn_ambient_job_distract_cops"):
		case joaat("service_earn_ambient_job_destroy_veh"):
		case joaat("service_earn_refund_backup_vagos"):
		case joaat("service_earn_refund_backup_lost"):
		case joaat("service_earn_refund_backup_families"):
		case joaat("service_earn_refund_hire_mugger"):
		case joaat("service_earn_refund_hire_mercenary"):
		case joaat("service_earn_refund_buy_cardropoff"):
		case joaat("service_earn_refund_heli_pickup"):
		case joaat("service_earn_refund_boat_pickup"):
		case joaat("service_earn_refund_clear_wanted"):
		case joaat("service_earn_refund_head_2_head"):
		case joaat("service_earn_refund_challenge"):
		case joaat("service_earn_refund_share_last_job"):
		case joaat("service_earn_refund_lottery"):
		case -1426920838:
		case joaat("service_earn_gangattack_pickup"):
		case joaat("service_earn_ambient_job_hot_target_deliver"):
		case joaat("service_earn_ambient_job_hot_target_kill"):
		case joaat("service_earn_ambient_job_urban_warfare"):
		case joaat("service_earn_ambient_job_checkpoint_collection"):
		case joaat("service_earn_ambient_job_time_trial"):
		case joaat("service_earn_ambient_job_challenges"):
		case joaat("service_earn_ambient_job_heli_hot_target"):
		case joaat("service_earn_ambient_job_dead_drop"):
		case joaat("service_earn_ambient_job_penned_in"):
		case joaat("service_earn_ambient_job_pass_parcel"):
		case joaat("service_earn_ambient_job_blast"):
		case joaat("service_earn_ambient_job_hot_property"):
		case joaat("service_earn_ambient_job_king"):
		case joaat("service_earn_ambient_job_beast"):
		case joaat("service_earn_boss"):
		case joaat("service_earn_goon"):
		case joaat("service_earn_boss_agency"):
		case joaat("service_earn_from_destroying_contraband"):
		case joaat("service_earn_premium_job"):
		case joaat("service_earn_from_vehicle_export"):
		case joaat("service_earn_smuggler_agency"):
		case joaat("service_earn_wage_payment_bonus"):
		case joaat("service_earn_wage_payment"):
		case joaat("service_earn_refundammodrop"):
		case joaat("service_earn_salvage_checkpoint_collection"):
		case joaat("service_earn_ambient_mugging"):
		case joaat("service_earn_ambient_pickup"):
		case joaat("service_earn_deathmatch_bounty"):
		case joaat("service_earn_cashing_out"):
		case joaat("service_earn_job_bonus_criminal_mastermind"):
		case joaat("service_earn_job_bonus_heist_award"):
		case joaat("service_earn_job_bonus_first_time_bonus"):
		case joaat("service_earn_refund_orbital_manual"):
		case joaat("service_earn_refund_orbital_auto"):
		case joaat("service_earn_gangops_wages"):
		case joaat("service_earn_gangops_wages_bonus"):
		case joaat("service_earn_gangops_prep_participation"):
		case joaat("service_earn_gangops_setup"):
		case joaat("service_earn_gangops_setup_fail"):
		case joaat("service_earn_gangops_finale"):
		case joaat("service_earn_gangops_award_mastermind_2"):
		case joaat("service_earn_gangops_award_mastermind_3"):
		case joaat("service_earn_gangops_award_mastermind_4"):
		case joaat("service_earn_gangops_award_loyalty_award_2"):
		case joaat("service_earn_gangops_award_loyalty_award_3"):
		case joaat("service_earn_gangops_award_loyalty_award_4"):
		case joaat("service_earn_gangops_award_first_time_xm_base"):
		case joaat("service_earn_gangops_award_first_time_xm_submarine"):
		case joaat("service_earn_gangops_award_first_time_xm_silo"):
		case joaat("service_earn_gangops_award_supporting"):
		case joaat("service_earn_gangops_award_order"):
		case joaat("service_earn_gangops_elite_xm_base"):
		case joaat("service_earn_gangops_elite_xm_submarine"):
		case joaat("service_earn_gangops_elite_xm_silo"):
		case joaat("service_earn_gangops_rival_delivery"):
		case joaat("service_earn_doomsday_finale_bonus"):
		case joaat("service_earn_bounty_hunter_reward"):
		case joaat("service_earn_from_business_battle"):
		case joaat("service_earn_from_club_management_participation"):
		case joaat("service_earn_from_fmbb_phonecall_mission"):
		case joaat("service_earn_from_business_hub_sell"):
		case joaat("service_earn_from_fmbb_boss_work"):
		case joaat("service_earn_fmbb_wage_bonus"):
		case joaat("service_earn_bb_event_bonus"):
		case joaat("service_earn_arena_skill_lvl_award"):
		case joaat("service_earn_arena_career_tier_progression_1"):
		case joaat("service_earn_arena_career_tier_progression_2"):
		case joaat("service_earn_arena_career_tier_progression_3"):
		case joaat("service_earn_arena_career_tier_progression_4"):
		case joaat("service_earn_spin_the_wheel_cash"):
			func_340(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case joaat("service_spend_spin_the_wheel_payment"):
		case joaat("service_spend_casino_generic"):
		case joaat("service_spend_arcade_game"):
		case joaat("service_spend_arcade_generic"):
		case joaat("service_spend_casino_heist_skip_mission"):
		case joaat("service_spend_casino_heist_setup_heist"):
		case joaat("service_spend_casino_heist_casino_model"):
		case joaat("service_spend_casino_heist_vault_door"):
		case joaat("service_spend_casino_heist_door_security"):
		case joaat("service_spend_island_heist_support_airstrike"):
		case joaat("service_spend_island_heist_support_heavy_weapon"):
		case joaat("service_spend_island_heist_support_sniper"):
		case joaat("service_spend_island_heist_support_air_support"):
		case joaat("service_spend_island_heist_support_drone"):
		case joaat("service_spend_island_heist_support_weapon_stash"):
		case joaat("service_spend_island_heist_suppressors"):
		case joaat("service_spend_island_heist_replay"):
		case joaat("service_spend_beach_party_generic"):
		case joaat("service_spend_submarine_utility_fee"):
		case joaat("service_spend_submarine_boat"):
		case joaat("service_spend_submarine_relocation"):
		case joaat("service_spend_casino_club_generic"):
		case joaat("service_spend_business_expenses"):
		case joaat("service_spend_fixer_hq_concierge"):
		case joaat("service_spend_request_company_suv"):
		case joaat("service_spend_interaction_menu_ability"):
		case joaat("service_spend_agent_14_vehicle_request"):
		case joaat("service_spend_tony_limo"):
		case joaat("service_spend_nightclub_toilet_attendant"):
		case joaat("service_spend_jugallo_boss_vehicle_request"):
		case 1989973742:
		case 767920357:
		case 1238804234:
		case -2140508184:
		case 1678966150:
		case 1391075557:
			if (iParam1 > 0 || Global_262145.f_28024)
			{
				func_340(uParam2, -1135378931, 537254313, 1474183246, iParam0, iParam1, iVar0, 7);
			}
			break;
		
		case joaat("service_earn_assassinate_target_killed"):
		case joaat("service_earn_arena_war"):
		case joaat("service_earn_refund_arena_spec_box_entry"):
		case joaat("service_earn_ambient_job_rc_time_trial"):
		case joaat("service_earn_daily_objective_event"):
		case joaat("service_earn_collectables_action_figures"):
		case joaat("service_earn_casino_mission_reward"):
		case joaat("service_earn_casino_award_mission_one_first_time"):
		case joaat("service_earn_casino_award_mission_two_first_time"):
		case joaat("service_earn_casino_award_mission_three_first_time"):
		case joaat("service_earn_casino_award_mission_four_first_time"):
		case joaat("service_earn_casino_award_mission_five_first_time"):
		case joaat("service_earn_casino_award_mission_six_first_time"):
		case joaat("service_earn_casino_award_straight_flush"):
		case joaat("service_earn_casino_award_top_pair"):
		case joaat("service_earn_casino_award_full_house"):
		case joaat("service_earn_casino_award_lucky_lucky"):
		case joaat("service_earn_casino_award_high_roller_bronze"):
		case joaat("service_earn_casino_award_high_roller_silver"):
		case joaat("service_earn_casino_award_high_roller_gold"):
		case joaat("service_earn_casino_award_high_roller_platinum"):
		case joaat("service_earn_casino_story_mission_reward"):
		case joaat("service_earn_casino_heist_setup_mission"):
		case joaat("service_earn_casino_heist_prep_mission"):
		case joaat("service_earn_casino_heist_finale"):
		case joaat("service_earn_casino_heist_award_smash_n_grab"):
		case joaat("service_earn_casino_heist_award_in_plain_sight"):
		case joaat("service_earn_casino_heist_award_undetected"):
		case joaat("service_earn_casino_heist_award_all_rounder"):
		case joaat("service_earn_casino_heist_award_elite_thief"):
		case joaat("service_earn_casino_heist_award_professional"):
		case joaat("service_earn_casino_heist_elite_stealth"):
		case joaat("service_earn_casino_heist_elite_subterfuge"):
		case joaat("service_earn_casino_heist_elite_direct"):
		case joaat("service_earn_collectable_item"):
		case joaat("service_earn_collectable_completed_collection"):
		case joaat("service_earn_collectables_signal_jammers"):
		case joaat("service_earn_collectables_signal_jammers_complete"):
		case joaat("service_earn_island_heist_finale"):
		case joaat("service_earn_island_heist_elite_challenge"):
		case joaat("service_earn_island_heist_award_professional"):
		case joaat("service_earn_island_heist_award_elite_thief"):
		case joaat("service_earn_island_heist_award_the_island_heist"):
		case joaat("service_earn_island_heist_award_going_alone"):
		case joaat("service_earn_island_heist_award_team_work"):
		case joaat("service_earn_island_heist_award_cat_burglar"):
		case joaat("service_earn_island_heist_award_pro_thief"):
		case joaat("service_earn_island_heist_award_mixing_it_up"):
		case joaat("service_earn_island_heist_prep"):
		case joaat("service_earn_island_heist_dj_mission"):
		case joaat("service_earn_tuner_robbery_prep"):
		case joaat("service_earn_tuner_robbery_finale"):
		case joaat("service_earn_tuner_car_club_membership"):
		case joaat("service_earn_tuner_daily_vehicle"):
		case joaat("service_earn_tuner_daily_vehicle_bonus"):
		case joaat("service_earn_tuner_award_union_depository"):
		case joaat("service_earn_tuner_award_military_convoy"):
		case joaat("service_earn_tuner_award_fleeca_bank"):
		case joaat("service_earn_tuner_award_freight_train"):
		case joaat("service_earn_tuner_award_bolingbroke_ass"):
		case joaat("service_earn_tuner_award_iaa_raid"):
		case joaat("service_earn_tuner_award_meth_job"):
		case joaat("service_earn_tuner_award_bunker_raid"):
		case joaat("service_earn_auto_shop_delivery_award"):
		case joaat("service_earn_agency_security_contract"):
		case joaat("service_earn_agency_payphone_hit"):
		case joaat("service_earn_agency_story_prep"):
		case joaat("service_earn_agency_story_finale"):
		case joaat("service_earn_fixer_award_sec_con"):
		case joaat("service_earn_fixer_award_phone_hit"):
		case joaat("service_earn_fixer_award_agency_story"):
		case joaat("service_earn_fixer_award_short_trip"):
		case joaat("service_earn_fixer_rival_delivery"):
		case joaat("service_earn_music_studio_short_trip"):
		case joaat("service_earn_from_contraband"):
		case joaat("service_earn_nclub_troublemaker"):
		case joaat("service_earn_sightseeing_reward"):
		case joaat("service_earn_ambient_job_clubhouse_contract"):
		case joaat("service_earn_ambient_job_underwater_cargo"):
		case joaat("service_earn_ambient_job_crime_scene"):
		case joaat("service_earn_ambient_job_metal_detector"):
		case joaat("service_earn_ambient_job_smuggler_plane"):
		case joaat("service_earn_ambient_job_smuggler_trail"):
		case joaat("service_earn_ambient_job_golden_gun"):
		case joaat("service_earn_ambient_job_ammunation_delivery"):
		case joaat("service_earn_ambient_job_source_research"):
		case joaat("service_earn_yohan_source_goods"):
		case joaat("service_earn_taxi_job"):
		case joaat("service_earn_daily_stash_house_participation"):
		case joaat("service_earn_daily_stash_house_completed"):
		case joaat("service_earn_ambient_job_gang_convoy"):
		case joaat("service_earn_ambient_job_shop_robbery"):
		case joaat("service_earn_ambient_job_xmas_mugger"):
		case joaat("service_earn_ambient_job_maze_bank"):
		case joaat("service_earn_juggalo_story_mission"):
		case joaat("service_earn_juggalo_phone_mission"):
		case joaat("service_earn_winter_22_award_juggalo_story"):
		case joaat("service_earn_winter_22_award_acid_lab"):
		case joaat("service_earn_winter_22_award_daily_stash"):
		case joaat("service_earn_winter_22_award_dead_drop"):
		case joaat("service_earn_winter_22_award_random_event"):
		case joaat("service_earn_winter_22_award_taxi"):
		case joaat("service_earn_acid_lab_setup_participation"):
		case joaat("service_earn_acid_lab_source_participation"):
		case joaat("service_earn_acid_lab_sell_participation"):
		case joaat("service_earn_smuggler_ops"):
		case joaat("service_earn_ambient_job_armored_truck"):
		case joaat("service_earn_ambient_job_bicycle_time_trial"):
		case joaat("service_earn_cayo_attrition_bonus_objective"):
		case joaat("service_earn_avenger_operations"):
		case joaat("service_earn_avenger_ops_bonus"):
		case joaat("service_earn_ambient_job_drug_vehicle"):
		case 649031587:
		case -1539520895:
		case 560526114:
		case -256590568:
		case -470808433:
		case 1245164680:
		case -1433838369:
		case 1648751987:
		case 674719198:
		case 617724895:
		case 1424147761:
		case 2131157548:
		case 1237940902:
		case -1688538833:
		case 918785029:
		case -1343182760:
		case -1725871206:
		case 1435585629:
		case 1851118721:
		case -1961446392:
		case -1726080156:
		case 300207193:
		case 1378095557:
		case -1948553812:
		case -1672547752:
		case -485163763:
		case 723646035:
		case 805615290:
		case -243568299:
		case 1226579288:
		case -2107356056:
		case -428381543:
		case 72361536:
		case -804351832:
		case 1570992221:
		case 565434243:
		case -1154756209:
		case 1496037489:
		case 1080388086:
		case 616397339:
		case 175159049:
		case -1950948893:
			func_340(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
	switch (iParam0)
	{
		case -1919450538:
		case -1683562330:
			func_340(uParam2, -1135378931, 1445302971, 1474183246, iParam0, iParam1, iVar0, 7);
			break;
	}
}

int func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	
	bVar0 = false;
	if (!func_58())
	{
		bVar0 = true;
	}
	iVar1 = 1;
	if (!bVar0)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_220()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4516982 = 1;
			return 0;
		}
		if (Global_2698550)
		{
			if (iParam3 == 1067618600 || iParam3 == -1303831698)
			{
				Global_4516983 = 1;
				return 0;
			}
		}
	}
	bVar3 = false;
	iVar2 = 0;
	while (iVar2 < 15)
	{
		if (Global_4515492[iVar2 /*84*/].f_65.f_2 == 0)
		{
			bVar3 = true;
		}
		iVar2++;
	}
	if (!bVar3)
	{
		return 0;
	}
	*uParam0 = 15;
	iVar4 = 2147483647;
	if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&iVar4, iParam3, iParam4, iParam2, iParam5, iParam6))
	{
		if ((bVar0 || iVar1) || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(iVar4))
		{
			*uParam0 = func_347(iVar4, iParam1, iParam4, iParam2, iParam3, iParam5, 0, iParam6, iParam7, 1, 1);
			if (iVar1 && !bVar0)
			{
			}
			if (bVar0)
			{
				if (*uParam0 != -1)
				{
					Global_4515492[*uParam0 /*84*/].f_65.f_8 = 1;
					Global_4515492[*uParam0 /*84*/].f_65.f_12 = 1;
				}
			}
			Global_4516963 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4516981 = 1;
			Global_4516984 = iParam4;
			Global_4516986 = iParam3;
			Global_4516987 = 1;
			Global_4516985 = iParam5;
		}
		if (iParam7 & 8 != 0)
		{
			Global_4516984 = iParam4;
			Global_4516986 = iParam3;
			Global_4516987 = 1;
			Global_4516985 = iParam5;
		}
		bVar5 = false;
		if (bVar5)
		{
			func_346(1, iParam4);
			Global_4516981 = 0;
		}
		if (iParam7 & 4 != 0)
		{
			func_341(-1, iParam4, iParam6, iParam5, -1);
		}
	}
	return 0;
}

void func_341(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam1)
	{
		case joaat("service_spend_betting"):
			MISC::SET_BIT(&(Global_2658293[PLAYER::PLAYER_ID() /*468*/].f_130.f_71), false);
			break;
	}
	if (iParam0 != -1)
	{
		func_342(iParam0);
	}
}

void func_342(int iParam0)
{
	bool bVar0;
	
	bVar0 = false;
	if (!func_58())
	{
		bVar0 = true;
	}
	if (iParam0 != -1)
	{
		if (func_345(iParam0))
		{
			if (!bVar0)
			{
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
			}
		}
		else if (!bVar0)
		{
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4515492[iParam0 /*84*/].f_65);
		}
		func_343(&(Global_4515492[iParam0 /*84*/]));
	}
}

void func_343(var uParam0)
{
	uParam0->f_65 = 0;
	uParam0->f_65 = 2147483647;
	uParam0->f_65.f_1 = 0;
	uParam0->f_65.f_2 = 0;
	uParam0->f_65.f_3 = -1593119440;
	uParam0->f_65.f_4 = -2085313189;
	uParam0->f_65.f_5 = 0;
	uParam0->f_65.f_6 = 1227573907;
	uParam0->f_65.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_12 = 0;
	uParam0->f_2 = 0;
	func_344(&(uParam0->f_13));
	func_344(&(uParam0->f_13.f_13));
	StringCopy(&(uParam0->f_13.f_26), "", 32);
	StringCopy(&(uParam0->f_13.f_34), "", 24);
	StringCopy(&(uParam0->f_13.f_40), "", 16);
	StringCopy(&(uParam0->f_13.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_65.f_8 = 0;
	uParam0->f_65.f_9 = 0;
	uParam0->f_65.f_10 = 0;
	uParam0->f_65.f_11 = 0;
	uParam0->f_65.f_13 = 0;
	uParam0->f_65.f_12 = 0;
	uParam0->f_65.f_14 = 0;
	uParam0->f_65.f_15 = 0;
	uParam0->f_65.f_16 = 0;
	uParam0->f_65.f_18 = 0;
}

void func_344(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
}

int func_345(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515492[iParam0 /*84*/].f_65.f_5 == 1;
	}
	return 0;
}

void func_346(int iParam0, int iParam1)
{
	Global_2699778 = iParam1;
	Global_2699777 = iParam0;
}

int func_347(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, var uParam8, int iParam9, int iParam10)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 15)
	{
		if (Global_4515492[iVar0 /*84*/].f_65.f_2 == 0)
		{
			if (!func_58())
			{
				iParam0 = iVar0 + 900;
			}
			Global_4515492[iVar0 /*84*/].f_65.f_2 = 1;
			Global_4515492[iVar0 /*84*/].f_65.f_1 = iParam5;
			Global_4515492[iVar0 /*84*/].f_65.f_3 = iParam1;
			Global_4515492[iVar0 /*84*/].f_65.f_4 = iParam2;
			Global_4515492[iVar0 /*84*/].f_65.f_7 = iParam3;
			Global_4515492[iVar0 /*84*/].f_65.f_5 = 0;
			Global_4515492[iVar0 /*84*/].f_65 = iParam0;
			Global_4515492[iVar0 /*84*/].f_65.f_6 = iParam4;
			Global_4515492[iVar0 /*84*/].f_65.f_11 = uParam8;
			Global_4515492[iVar0 /*84*/].f_65.f_10 = iParam7;
			Global_4515492[iVar0 /*84*/].f_65.f_13 = iParam9;
			Global_4515492[iVar0 /*84*/].f_65.f_12 = 0;
			Global_4515492[iVar0 /*84*/].f_65.f_14 = MISC::GET_FRAME_COUNT();
			Global_4515492[iVar0 /*84*/].f_65.f_18 = 0;
			Global_4516963 = 0;
			if (bParam6)
			{
				Global_4515492[iVar0 /*84*/].f_65.f_5 = 1;
			}
			if (iParam1 == -1135378931 && iParam10)
			{
				func_348(Global_4515492[iVar0 /*84*/], iVar0);
			}
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_348(struct<66> Param0, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, int iParam84)
{
	struct<4> Var0;
	int iVar36;
	
	if (iParam84 < 0)
	{
		return;
	}
	Var0.f_3 = 2147483647;
	Var0.f_0 = -710178565;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_3 = { Param0.f_65 };
	Var0.f_3.f_32 = iParam84;
	iVar36 = func_349(Var0.f_1);
	if (Global_262145.f_23800 && !Global_262145.f_23801)
	{
		return;
	}
	if (!iVar36 == 0)
	{
		SCRIPT::_SEND_TU_SCRIPT_EVENT_NEW(1, &Var0, 36, iVar36, Var0.f_0);
	}
}

var func_349(bool bParam0)
{
	var uVar0;
	
	if (func_14(iParam0))
	{
		MISC::SET_BIT(&uVar0, iParam0);
	}
	return uVar0;
}

char* func_350(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NOTREACHTARGET";
			break;
		
		case 1:
			return "TARGET_ESCAPE";
			break;
		
		case 2:
			return "DELIVERY_FAIL";
			break;
		
		case 3:
			return "NOT_USED";
			break;
		
		case 4:
			return "TEAM_QUIT";
			break;
		
		case 5:
			return "SERVER_ERROR";
			break;
		
		case 6:
			return "RECEIVE_LJ_L";
			break;
		
		case 8:
			return "CHALLENGE_PLAYER_LEFT";
			break;
	}
	return "DEFAULT";
}

char* func_351(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BACKUP_VAGOS";
		
		case 1:
			return "BACKUP_LOST";
		
		case 2:
			return "BACKUP_FAMILIES";
		
		case 3:
			return "HIRE_MUGGER";
		
		case 4:
			return "HIRE_MERCENARY";
		
		case 5:
			return "BUY_CARDROPOFF";
		
		case 6:
			return "HELI_PICKUP";
		
		case 7:
			return "BOAT_PICKUP";
		
		case 8:
			return "CLEAR_WANTED";
		
		case 9:
			return "HEAD_2_HEAD";
		
		case 10:
			return "CHALLENGE";
		
		case 11:
			return "SHARE_LAST_JOB";
		
		case 13:
			return "REFUNDAPPEA";
		
		case 14:
			return "AMMO_DROP_REF";
		
		case 15:
			return "ORBITAL_MANUAL";
		
		case 16:
			return "ORBITAL_AUTO";
		
		case 17:
			return "ARENA_SPEC_BOX";
		
		default:
	}
	return "DEFAULT";
}

void func_352(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	if (iParam1 < 1)
	{
		iParam1 = 1;
	}
	iVar0 = (iParam0 * iParam1);
	fParam3 = 0f;
	if (iVar0 > 0)
	{
		fVar2 = (100f - fParam3);
		iVar1 = SYSTEM::FLOOR((IntToFloat(iVar0) * (fVar2 / 100f)));
	}
	else
	{
		iVar1 = iVar0;
	}
	Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_4 = iVar1;
	Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_3 = (Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_198.f_3 + iVar1);
	if (iParam2 == 1)
	{
		func_353(iVar1, 0);
	}
}

void func_353(int iParam0, bool bParam1)
{
	if (bParam1)
	{
	}
	iParam0 = iParam0;
}

int func_354(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	if (func_357(iParam0) >= 0)
	{
		iVar0 = func_357(iParam0);
	}
	else
	{
		iVar0 = func_355(iParam0);
	}
	return iVar0;
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1000;
			break;
		
		case 10:
			return 5000;
			break;
		
		case 11:
			return 8000;
			break;
		
		case 8:
			return 1000;
			break;
		
		case 0:
			return 500;
			break;
		
		case 9:
			return 250;
			break;
		
		case 13:
			return 1000;
			break;
		
		case 12:
			return 7500;
			break;
		
		case 2:
			return 1000;
			break;
		
		case 14:
			return 500;
			break;
		
		case 20:
			if (func_356())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return 200;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return 400;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return 600;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return 800;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return 1000;
			}
			break;
		
		case 6:
			return 500;
			break;
		
		case 22:
			return 200;
			break;
		
		case 23:
			return 400;
			break;
		
		case 24:
			return 700;
			break;
		
		case 25:
			return 100;
			break;
		
		case 26:
			return 1000;
			break;
		
		case 57:
			return 700;
			break;
		
		case 35:
			return 5000;
			break;
		
		case 15:
			return 0;
			break;
		
		case 17:
			return 0;
			break;
		
		case 18:
			return 0;
			break;
		
		case 19:
			return 0;
			break;
		
		case 21:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 39:
			return 200;
			break;
		
		case 40:
			return 1000;
		
		case 41:
			return 750;
		
		case 42:
			return 0;
	}
	return 0;
}

bool func_356()
{
	return BitTest(func_318(6427, -1), 19);
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_7262;
			break;
		
		case 10:
			return Global_262145.f_3836;
			break;
		
		case 11:
			return Global_262145.f_3837;
			break;
		
		case 8:
			return Global_262145.f_3834;
			break;
		
		case 0:
			return Global_262145.f_3831;
			break;
		
		case 9:
			return Global_262145.f_3835;
			break;
		
		case 13:
			return Global_262145.f_3839;
			break;
		
		case 12:
			return Global_262145.f_3838;
			break;
		
		case 2:
			return Global_262145.f_3832;
			break;
		
		case 14:
			return Global_262145.f_3840;
			break;
		
		case 20:
			if (func_356())
			{
				return 0;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 1)
			{
				return Global_262145.f_7269;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 2)
			{
				return Global_262145.f_7270;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 3)
			{
				return Global_262145.f_7271;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 4)
			{
				return Global_262145.f_7272;
			}
			else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 5)
			{
				return Global_262145.f_7273;
			}
			break;
		
		case 6:
			return Global_262145.f_3833;
			break;
		
		case 22:
			return Global_262145.f_3841;
			break;
		
		case 23:
			return Global_262145.f_3842;
			break;
		
		case 24:
			return Global_262145.f_3843;
			break;
		
		case 25:
			return Global_262145.f_3844;
			break;
		
		case 26:
			return Global_262145.f_3845;
			break;
		
		case 35:
			return Global_262145.f_7955;
			break;
		
		case 15:
			return Global_262145.f_7263;
			break;
		
		case 17:
			return Global_262145.f_7263;
			break;
		
		case 18:
			return Global_262145.f_7263;
			break;
		
		case 19:
			return Global_262145.f_7263;
			break;
		
		case 21:
			return Global_262145.f_7263;
			break;
		
		case 36:
			return Global_262145.f_8422;
			break;
		
		case 39:
			return -1;
			break;
		
		case 40:
			return Global_262145.f_13415;
			break;
		
		case 41:
			return Global_262145.f_13416;
			break;
		
		case 42:
			return Global_262145.f_13417;
			break;
		
		case 43:
			return Global_262145.f_15925;
			break;
		
		case 44:
			return Global_262145.f_15926;
			break;
		
		case 57:
			return Global_262145.f_3843;
			break;
		
		case 58:
			return Global_262145.f_25461;
			break;
		
		case 62:
			return Global_262145.f_25462;
			break;
		
		case 63:
			return Global_262145.f_28849;
			break;
		
		case 64:
			return Global_262145.f_7263;
			break;
		
		case 71:
			return Global_262145.f_25462;
			break;
		
		case 72:
			return Global_262145.f_31200;
			break;
		
		case 73:
			return Global_262145.f_31202;
			break;
		
		case 74:
			return Global_262145.f_31204;
			break;
	}
	return 0;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_262145.f_23695;
		
		case 2:
			return Global_262145.f_23696;
		
		case 3:
			return Global_262145.f_23697;
		
		default:
	}
	return 9999999;
}

int func_359()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (Local_81.f_50 || Local_81.f_52)
	{
		if (!Local_81.f_51)
		{
			if (!BitTest(Local_81.f_3, 7))
			{
				func_360("HS_UNABLE", iLocal_306, 0, 0, 0, 1, 0);
			}
		}
		return 1;
	}
	switch (bLocal_304)
	{
		case 0:
			sVar0 = "MPCT_muglost";
			sVar1 = "LAMAR";
			iVar2 = 19;
			break;
		
		case 1:
			sVar0 = "MPCT_MERloc";
			sVar1 = "FM_MERRYWEATHER";
			iVar2 = 85;
			break;
	}
	if (func_411(sVar0, sVar1, iVar2))
	{
		return 1;
	}
	return 0;
}

int func_360(char* sParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	struct<16> Var2;
	bool bVar18;
	bool bVar19;
	
	iVar0 = -1;
	iVar1 = PLAYER::GET_PLAYER_TEAM(iParam1);
	if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), iParam1) || iParam3)
	{
		if (func_14(iParam1))
		{
			if (!bParam2)
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			else
			{
				StringCopy(&Var2, PLAYER::GET_PLAYER_NAME(iParam1), 64);
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
			{
			}
			HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
			if ((iVar1 != -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iVar1 < 4)
			{
				if (Global_4718592.f_127184[iVar1] != -1)
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_409(iVar1, iParam1, 0));
				}
				else
				{
					HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_368(iParam1, -2, 1, 0, 0));
				}
			}
			else
			{
				HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(func_368(iParam1, -2, 1, 0, 0));
			}
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(func_366(&Var2));
			if (!bParam4)
			{
				iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
			}
			else
			{
				Global_2708615 = { func_155(iParam1) };
				if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&Global_2708545, 35, &Global_2708615))
				{
					bVar18 = false;
					if (MISC::ARE_STRINGS_EQUAL(&(Global_2708545.f_22), "Leader") && Global_2708545.f_30 == 0)
					{
						bVar18 = true;
					}
					if (Global_2708545.f_21 > 0)
					{
						bVar19 = false;
					}
					else
					{
						bVar19 = true;
					}
					if (bParam5)
					{
						if (bParam6)
						{
							Var2 = { func_365(&Var2) };
						}
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2708545, 35), &(Global_2708545.f_17), Global_2708545.f_30, bVar18, false, Global_2708545, &Var2, Global_1576253, Global_1576254, Global_1576255);
					}
					else
					{
						iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_CREWTAG(bVar19, NETWORK::NETWORK_CLAN_IS_ROCKSTAR_CLAN(&Global_2708545, 35), &(Global_2708545.f_17), Global_2708545.f_30, bVar18, false, Global_2708545, Global_1576253, Global_1576254, Global_1576255);
					}
				}
				else
				{
					iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
				}
			}
			func_361(14, sParam0, 1, &Var2, 0, 0, 0, 0, 1, 0, 0, 0);
		}
	}
	return iVar0;
}

void func_361(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, char* sParam9, char* sParam10, char* sParam11)
{
	int iVar0;
	
	if ((!func_364() || !NETWORK::NETWORK_IS_ACTIVITY_SESSION()) || !func_218(PLAYER::PLAYER_ID(), 0))
	{
		return;
	}
	iVar0 = func_362(iParam2);
	if (iVar0 >= 0 && iVar0 < 5)
	{
		Global_1944302.f_5[iVar0 /*53*/] = iParam0;
		Global_1944302.f_5[iVar0 /*53*/].f_1 = iParam2;
		StringCopy(&(Global_1944302.f_5[iVar0 /*53*/].f_8), sParam1, 16);
		Global_1944302.f_5[iVar0 /*53*/].f_2[0] = iParam4;
		Global_1944302.f_5[iVar0 /*53*/].f_2[1] = iParam5;
		Global_1944302.f_5[iVar0 /*53*/].f_2[2] = iParam6;
		Global_1944302.f_5[iVar0 /*53*/].f_7 = iParam7;
		Global_1944302.f_5[iVar0 /*53*/].f_6 = iParam8;
		StringCopy(&(Global_1944302.f_5[iVar0 /*53*/].f_12), sParam3, 64);
		StringCopy(&(Global_1944302.f_5[iVar0 /*53*/].f_28[0 /*6*/]), sParam9, 24);
		StringCopy(&(Global_1944302.f_5[iVar0 /*53*/].f_28[1 /*6*/]), sParam10, 24);
		StringCopy(&(Global_1944302.f_5[iVar0 /*53*/].f_28[2 /*6*/]), sParam11, 24);
	}
}

int func_362(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= (Global_1944302 - 1))
	{
		if (iParam0 > Global_1944302.f_5[iVar0 /*53*/].f_1)
		{
			func_363(iVar0);
			return iVar0;
		}
		iVar0++;
	}
	Global_1944302++;
	if (Global_1944302 > 5)
	{
		Global_1944302 = 5;
		return Global_1944302;
	}
	return (Global_1944302 - 1);
}

void func_363(int iParam0)
{
	int iVar0;
	
	iVar0 = 4;
	while (iVar0 >= iParam0 + 1)
	{
		Global_1944302.f_5[iVar0 /*53*/] = { Global_1944302.f_5[(iVar0 - 1) /*53*/] };
		iVar0 = (iVar0 + -1);
	}
}

bool func_364()
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

struct<16> func_365(char* sParam0)
{
	struct<16> Var0;
	
	StringCopy(&Var0, "<C>", 64);
	StringConCat(&Var0, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
	StringConCat(&Var0, sParam0, 64);
	StringConCat(&Var0, "</C>", 64);
	return Var0;
}

var func_366(char* sParam0)
{
	char cVar0[64];
	
	StringCopy(&cVar0, "<C>", 64);
	StringConCat(&cVar0, sParam0, 64);
	StringConCat(&cVar0, "</C>~s~", 64);
	return func_367(&cVar0);
}

var func_367(char[4] cParam0)
{
	return cParam0;
}

int func_368(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!func_14(iParam0))
	{
		return 1;
	}
	if (func_160(iParam0) && !bParam4)
	{
		if (bParam2)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (iParam1 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_4718592.f_127184[iVar0] != -1)
			{
				iParam1 = iVar0;
			}
		}
	}
	if (((func_160(PLAYER::PLAYER_ID()) || (func_408() && func_407())) && !BitTest(Global_2733190.f_3788, 31)) && !bParam4)
	{
		iVar1 = func_406();
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (PED::IS_PED_A_PLAYER(iVar1))
			{
				if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) != -1)
				{
					if (func_6(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), 0, 1))
					{
						if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
						{
							if (Global_4718592.f_127184[iParam1] != -1)
							{
								return func_409(iParam1, iParam0, 0);
							}
							else
							{
								return func_382(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
							}
						}
						else
						{
							return func_382(iParam0, NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1), iParam1, bParam2, bParam3);
						}
					}
				}
			}
			else if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
			{
				if (Global_4718592.f_127184[iParam1] != -1)
				{
					return func_409(iParam1, iParam0, 0);
				}
				else
				{
					return func_369(0, -1, 0);
				}
			}
			else
			{
				return func_369(0, -1, 0);
			}
		}
	}
	if ((iParam1 > -1 && NETWORK::NETWORK_IS_ACTIVITY_SESSION()) && iParam1 < 4)
	{
		if (Global_4718592.f_127184[iParam1] != -1)
		{
			return func_409(iParam1, iParam0, 0);
		}
		else
		{
			return func_382(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
		}
	}
	return func_382(iParam0, PLAYER::PLAYER_ID(), iParam1, bParam2, bParam3);
}

int func_369(bool bParam0, int iParam1, bool bParam2)
{
	return func_370(PLAYER::PLAYER_ID(), bParam0, iParam1, bParam2);
}

int func_370(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 3;
	}
	iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if (func_381(Global_4718592.f_197291))
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID());
	}
	if ((func_380() || (func_379() && func_377())) && Global_1689077.f_1)
	{
		if (bParam1)
		{
			return func_376(iParam2, iVar0);
		}
		else
		{
			return func_376(iVar0, iVar0);
		}
	}
	if (bParam1)
	{
		if (iParam2 > -1)
		{
			if (func_157(iVar0, iParam2, 0, -1) && !BitTest(Global_4718592.f_16, 18))
			{
				if (iVar0 == iParam2)
				{
					return func_375(1);
				}
				else
				{
					return func_375(0);
				}
			}
			else if (bParam3)
			{
				return 28;
			}
			else if (BitTest(Global_4718592.f_4, 20))
			{
				return func_371(iVar0, iParam2, 1, 4);
			}
			else
			{
				return func_371(iVar0, iParam2, 0, 4);
			}
		}
		return 28;
	}
	if (iVar0 == iParam2 || iParam2 == -1)
	{
		return func_375(1);
	}
	return func_375(0);
}

int func_371(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_374(iParam0, iParam1, iParam3);
	if (func_372(Global_4718592.f_132931, 1, 1))
	{
		if (iVar0 == 1)
		{
			iVar0 = 0;
		}
	}
	if (bParam2)
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			
			case 3:
				return 31;
			
			case 4:
				return 32;
			
			case 5:
				return 33;
			
			case 6:
				return 34;
			
			case 7:
				return 35;
			
			case 8:
				return 36;
			
			case 9:
				return 37;
			
			case 10:
				return 38;
			
			case 11:
				return 39;
			
			case 12:
				return 40;
			
			case 13:
				return 41;
			
			case 14:
				return 42;
			
			case 15:
				return 43;
			
			default:
		}
	}
	else
	{
		switch (iVar0)
		{
			case 0:
				return 28;
			
			case 1:
				return 29;
			
			case 2:
				return 30;
			}
		
		default:
	}
	return 28;
}

int func_372(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (bParam1)
	{
		if (Global_4718592.f_197291 == 65)
		{
			return 1;
		}
	}
	if (bParam2)
	{
		if (func_373(Global_4718592.f_197291, 0))
		{
			return 1;
		}
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (iParam0 == Global_262145.f_9605[iVar0])
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_373(int iParam0, bool bParam1)
{
	if (iParam0 == 93)
	{
		if (bParam1)
		{
			if (PLAYER::GET_PLAYER_TEAM(PLAYER::GET_PLAYER_INDEX()) == 2)
			{
				return 1;
			}
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_374(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if (iVar0 == iParam1)
		{
			return iVar1;
		}
		else if (!iParam0 == iVar0)
		{
			if (!func_157(iParam0, iVar0, 0, -1))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

int func_375(bool bParam0)
{
	if (bParam0)
	{
		return 118;
	}
	return 116;
}

int func_376(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_374(iParam1, iParam0, 4);
	}
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		default:
	}
	return 28;
}

int func_377()
{
	if (func_378())
	{
		return 1;
	}
	return BitTest(Global_4718592.f_202198, 4);
}

bool func_378()
{
	return BitTest(Global_4718592.f_189724, 12);
}

bool func_379()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return BitTest(Global_4718592.f_202198, 0);
	}
	return ((BitTest(Global_4718592.f_202198, 0) || Global_1926860) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("fm_deathmatch_creator")) > 0);
}

int func_380()
{
	if (func_378() && NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 1;
	}
	return 0;
}

bool func_381(int iParam0)
{
	return iParam0 == 94;
}

int func_382(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (iParam2 == -2)
	{
		iVar0 = PLAYER::GET_PLAYER_TEAM(iParam0);
	}
	else
	{
		iVar0 = iParam2;
	}
	if (Global_1845298[PLAYER::PLAYER_ID() /*881*/] == 148)
	{
		bVar1 = true;
	}
	iVar2 = iParam0;
	if (iVar2 > -1)
	{
		if (Global_1845298[iVar2 /*881*/] == 148)
		{
			bVar1 = true;
		}
	}
	if (!bVar1)
	{
		if (iVar0 != -1)
		{
			if (func_387())
			{
				iVar3 = func_386(iParam0);
				if (!iVar3 == -1)
				{
					return func_384(iVar3);
				}
			}
			if ((func_202(iParam1, iParam0, iVar0, 0) && !BitTest(Global_4718592.f_16, 18)) || ((func_157(PLAYER::GET_PLAYER_TEAM(iParam1), PLAYER::GET_PLAYER_TEAM(iParam0), 0, -1) && BitTest(Global_4718592.f_16, 23)) && !BitTest(Global_4718592.f_16, 18)))
			{
				return func_375(1);
			}
			else if (BitTest(Global_4718592.f_16, 26))
			{
				return func_383(1);
			}
			else
			{
				return func_370(iParam1, 1, iVar0, bParam4);
			}
		}
		else if ((Global_1836754 || Global_1836744) || Global_1845298[iParam0 /*881*/] == 0)
		{
			if (iParam0 == iParam1 || (Global_1836754 == 1 && Global_1836764 == 0))
			{
				return func_375(1);
			}
			else
			{
				return func_370(iParam1, 1, iVar0, bParam4);
			}
		}
		if (Global_1836748 && Global_1836207.f_14 == iParam0)
		{
			return 28;
		}
	}
	iVar4 = func_386(iParam0);
	if (!iVar4 == -1)
	{
		return func_384(iVar4);
	}
	if (bParam3)
	{
		return 0;
	}
	return 1;
}

int func_383(bool bParam0)
{
	if (bParam0)
	{
		return 119;
	}
	return 116;
}

int func_384(int iParam0)
{
	int iVar0;
	
	if (iParam0 > -1)
	{
		iVar0 = func_385(iParam0);
		switch (iVar0)
		{
			case 0:
				return 192;
			
			case 1:
				return 193;
			
			case 2:
				return 194;
			
			case 3:
				return 195;
			
			case 4:
				return 196;
			
			case 5:
				return 197;
			
			case 6:
				return 198;
			
			case 7:
				return 199;
			
			case 8:
				return 200;
			
			case 9:
				return 201;
			
			case 10:
				return 202;
			
			case 11:
				return 203;
			
			case 12:
				return 204;
			
			case 13:
				return 205;
			
			case 14:
				return 206;
			}
		
		default:
	}
	return 1;
}

var func_385(int iParam0)
{
	return Global_2649161.f_818.f_44[iParam0 /*2*/].f_1;
}

int func_386(int iParam0)
{
	if (func_14(iParam0))
	{
		if (func_15(iParam0, 1))
		{
			return Global_2649161.f_818.f_11[func_12(iParam0)];
		}
	}
	return -1;
}

int func_387()
{
	if (((((((((func_405() || func_404()) || func_195()) || func_403()) || func_402()) || func_400()) || func_398()) || func_395()) || func_392()) || func_388())
	{
		return 1;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION() && BitTest(Global_4718592.f_37, 1))
	{
		return 1;
	}
	return 0;
}

int func_388()
{
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return Global_2685152.f_27;
	}
	return func_389(Global_4718592.f_132931);
}

int func_389(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 23)
	{
		if (iParam0 == func_391(iVar0) || iParam0 == func_390(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_390(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -1561912048;
		
		case 9:
			return 172853447;
		
		case 10:
			return 629260601;
		
		case 16:
			return 97645458;
		
		case 17:
			return -1784228215;
		
		case 18:
			return 1207616054;
		
		case 19:
			return -1792579181;
		
		case 20:
			return -425660339;
		
		case 21:
			return -1938166757;
		
		case 22:
			return 2029245399;
		
		default:
	}
	return -1;
}

int func_391(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return Global_262145.f_37389[0];
		
		case 9:
			return Global_262145.f_37389[1];
		
		case 10:
			return Global_262145.f_37389[2];
		
		case 16:
			return Global_262145.f_37389[3];
		
		case 17:
			return Global_262145.f_37389[4];
		
		case 18:
			return Global_262145.f_37389[5];
		
		case 19:
			return Global_262145.f_37389[6];
		
		case 20:
			return Global_262145.f_37389[7];
		
		case 21:
			return Global_262145.f_37389[8];
		
		case 22:
			return Global_262145.f_37389[9];
		
		default:
	}
	return -1;
}

int func_392()
{
	return func_393(Global_4718592.f_132931);
}

int func_393(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_394(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_394(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_35570[iParam0];
	}
	return -1;
}

int func_395()
{
	return func_396(Global_4718592.f_132931);
}

int func_396(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iParam0 == func_397(iVar0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_397(int iParam0)
{
	if (iParam0 != -1)
	{
		return Global_262145.f_33077[iParam0];
	}
	return -1;
}

int func_398()
{
	return func_399(Global_4718592.f_132931);
}

int func_399(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Global_262145.f_31141[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_400()
{
	return func_401(Global_4718592.f_132931);
}

int func_401(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (Global_262145.f_30436[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_402()
{
	return Global_2685152.f_25;
}

var func_403()
{
	return Global_2685152.f_22;
}

var func_404()
{
	return Global_2685152.f_19;
}

var func_405()
{
	return Global_2685152.f_18;
}

var func_406()
{
	return Global_2621446.f_2;
}

var func_407()
{
	return BitTest(Global_2621446, 4);
}

var func_408()
{
	return BitTest(Global_1845298[PLAYER::PLAYER_ID() /*881*/].f_36.f_18, 14);
}

int func_409(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = Global_1058150.f_14[iParam0];
	if (func_387())
	{
		iVar2 = func_386(iParam1);
		if (!iVar2 == -1)
		{
			return func_384(iVar2);
		}
	}
	if (iVar1 > -1 && iVar1 < 17)
	{
		if (BitTest(Global_4718592.f_3838[iParam0 /*26988*/].f_8612[iVar1], 24))
		{
			return 18;
		}
	}
	if (iParam0 > -1 && iParam1 != func_13())
	{
		if (Global_4718592.f_127184[iParam0] != -1 && Global_4718592.f_127184[iParam0] <= 4)
		{
			if (Global_4718592.f_127184[iParam0] == 0)
			{
				iVar0 = 15;
			}
			else if (Global_4718592.f_127184[iParam0] == 1)
			{
				iVar0 = 18;
			}
			else if (Global_4718592.f_127184[iParam0] == 2)
			{
				iVar0 = 24;
			}
			else if (Global_4718592.f_127184[iParam0] == 4)
			{
				if (BitTest(Global_4718592.f_16, 29))
				{
					iVar0 = 21;
				}
				else
				{
					iVar0 = 6;
				}
			}
			else
			{
				iVar0 = Global_4718592.f_127184[iParam0];
			}
		}
		else
		{
			iVar0 = func_370(iParam1, !bParam2, iParam0, 0);
		}
		if (BitTest(Global_4718592.f_22, 13))
		{
			iVar0 = func_410(iParam0);
		}
		if (BitTest(Global_4718592.f_25, 29))
		{
			iVar0 = 0;
		}
		if (BitTest(Global_4718592.f_16, 26) && !func_157(iParam0, PLAYER::GET_PLAYER_TEAM(iParam1), 0, -1))
		{
			iVar0 = func_383(1);
		}
	}
	else
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_410(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = Global_4718592.f_197487;
			break;
		
		case 1:
			iVar0 = Global_4718592.f_197488;
			break;
		
		case 2:
			iVar0 = Global_4718592.f_197489;
			break;
		
		case 3:
			iVar0 = Global_4718592.f_197490;
			break;
	}
	switch (iVar0)
	{
		case 0:
			return 15;
		
		case 1:
			return 21;
		
		case 2:
			return 24;
		
		case 3:
			return 18;
		
		case 4:
			return 6;
		
		case 5:
			return 9;
		
		case 6:
			return 3;
		
		case 7:
			return 1;
		
		case 8:
			return 12;
		
		case 9:
			return 2;
		
		default:
	}
	return 2;
}

int func_411(char* sParam0, char* sParam1, int iParam2)
{
	if (!MISC::ARE_STRINGS_EQUAL(sParam0, "NULL"))
	{
		if (!BitTest(iLocal_303, 0))
		{
			func_518(&uLocal_323, 3, 0, sParam1, 0, 1);
			if (func_413(&uLocal_323, iParam2, "CT_AUD", sParam0, 0, 0))
			{
				MISC::SET_BIT(&iLocal_303, false);
			}
		}
		else if (!BitTest(iLocal_303, 1))
		{
			if (func_412(0))
			{
				MISC::SET_BIT(&iLocal_303, true);
			}
		}
		else if (!func_412(0))
		{
			iLocal_303 = 0;
			return 1;
		}
	}
	return 0;
}

int func_412(int iParam0)
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

int func_413(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	
	if (func_516())
	{
		return 0;
	}
	if (func_515())
	{
		return 0;
	}
	sVar0 = 0;
	bVar1 = false;
	iVar2 = -99;
	return func_414(uParam0, iParam1, sParam2, sParam3, 1, iParam5, iParam4, sVar0, bVar1, iVar2, sVar0, sVar0, -1);
}

int func_414(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, var uParam6, char* sParam7, bool bParam8, int iParam9, char* sParam10, char* sParam11, int iParam12)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam2) > 7)
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return 0;
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(sParam3) > 15)
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	iVar1 = func_514(sParam2, sParam3);
	iVar2 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		iVar2 = MISC::GET_HASH_KEY(sParam7);
	}
	if (func_513(iVar0, iVar1, iVar2))
	{
		return 1;
	}
	if (!func_508(uParam6))
	{
		return 0;
	}
	if (func_505(iVar0, iVar1, iVar2))
	{
		if (func_504())
		{
			return 0;
		}
		func_503();
		return func_421(uParam0, iParam1, iParam12, sParam2, sParam3, iParam4, iParam5, uParam6, sParam7, bParam8, iParam9, sParam10, sParam11);
	}
	if (!func_420(iParam4))
	{
		return 0;
	}
	func_415(iVar0, iVar1, iVar2, sParam3, iParam4, iParam5, uParam6);
	return 0;
}

void func_415(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, var uParam6)
{
	Global_1674261.f_40.f_1 = iParam0;
	Global_1674261.f_40.f_2 = iParam1;
	Global_1674261.f_40.f_3 = iParam2;
	StringCopy(&(Global_1674261.f_40.f_4), sParam3, 16);
	Global_1674261.f_40.f_8 = iParam4;
	Global_1674261.f_40.f_9 = iParam5;
	Global_1674261.f_40.f_14 = uParam6;
	func_416(iParam4);
	func_503();
	Global_1674261.f_40.f_13 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), 7000);
}

void func_416(int iParam0)
{
	if (func_419(iParam0))
	{
		func_418();
		return;
	}
	func_417();
}

void func_417()
{
	Global_1674261.f_40.f_10 = 0;
}

void func_418()
{
	Global_1674261.f_40.f_10 = 1;
}

int func_419(int iParam0)
{
	switch (iParam0)
	{
		case 4:
		case 5:
			return 1;
		
		case 0:
		case 1:
		case 7:
		case 8:
		case 2:
		case 3:
			return 0;
		
		default:
	}
	return 0;
}

bool func_420(int iParam0)
{
	return iParam0 > Global_1674261.f_40.f_8;
}

int func_421(var uParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, var uParam7, char* sParam8, bool bParam9, int iParam10, char* sParam11, char* sParam12)
{
	struct<2> Var0;
	
	func_502();
	if (iParam6 == 5)
	{
		iParam6 = 0;
	}
	if (iParam5 == 8)
	{
		return func_499(uParam0, sParam3, sParam4);
	}
	if (iParam5 == 4)
	{
		StringCopy(&Var0, "CELL_226", 16);
		return func_496(uParam0, iParam1, sParam3, sParam4, &Var0);
	}
	if (iParam5 == 1 || iParam5 == 7)
	{
		if (iParam6 == 2)
		{
			return func_499(uParam0, sParam3, sParam4);
		}
		return func_478(uParam0, iParam1, sParam3, sParam4, uParam7);
	}
	if (iParam5 == 5)
	{
		return func_477(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 2)
	{
		return func_465(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 3)
	{
		return func_464(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	if (iParam5 == 6)
	{
		return func_422(iParam1, iParam2, sParam4, uParam7, sParam8, bParam9, iParam10, sParam11, sParam12);
	}
	return 0;
}

int func_422(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_463();
	bVar0 = true;
	if (func_424(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_423(120000);
		return 1;
	}
	return 0;
}

void func_423(int iParam0)
{
	Global_1674261.f_40.f_11 = NETWORK::GET_TIME_OFFSET(NETWORK::GET_NETWORK_TIME(), iParam0);
	Global_1674261.f_40.f_12 = 1;
}

int func_424(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_457(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1674261.f_40.f_13))
			{
				return 0;
			}
		}
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_456(sParam5, bParam6, &iVar3);
	uVar5 = func_454(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = true;
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_453(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_428(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_427();
	}
	func_463();
	func_426();
	func_425();
	return 1;
}

void func_425()
{
	Global_1674261.f_57 = 0;
	Global_1674261.f_57.f_1 = 0;
}

void func_426()
{
	Global_1674261.f_40 = 3;
}

void func_427()
{
	MISC::SET_BIT(&Global_9502, 8);
}

int func_428(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_429(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_10226 = iParam6;
			MISC::SET_BIT(&Global_4524923, false);
		}
		return 1;
	}
	return 0;
}

int func_429(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_446();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_21649 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_21649 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_21649 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_4524908 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appemail")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appmpemail")) > 0)
		{
			return 0;
		}
	}
	if (func_445() == 0)
	{
		func_443();
		return 0;
	}
	func_442(Global_4524907);
	StringCopy(&(Global_4521354[Global_4524907 /*296*/]), sParam1, 64);
	Global_4521354[Global_4524907 /*296*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_4521354[Global_4524907 /*296*/].f_24 = iParam2;
	}
	Global_4521354[Global_4524907 /*296*/].f_25 = iParam7;
	Global_4521354[Global_4524907 /*296*/].f_26 = uParam8;
	Global_4521354[Global_4524907 /*296*/].f_29 = uParam9;
	Global_4521354[Global_4524907 /*296*/].f_30 = uParam12;
	Global_4521354[Global_4524907 /*296*/].f_31 = uParam11;
	Global_4521354[Global_4524907 /*296*/].f_28 = 0;
	Global_4521354[Global_4524907 /*296*/].f_32 = iParam3;
	StringCopy(&(Global_4521354[Global_4524907 /*296*/].f_33), sParam4, 64);
	Global_4521354[Global_4524907 /*296*/].f_49 = iParam6;
	StringCopy(&(Global_4521354[Global_4524907 /*296*/].f_50), sParam5, 64);
	Global_4521354[Global_4524907 /*296*/].f_66 = iParam13;
	StringCopy(&(Global_4521354[Global_4524907 /*296*/].f_67), sParam14, 64);
	StringCopy(&(Global_4521354[Global_4524907 /*296*/].f_83), sParam15, 64);
	func_446();
	switch (iParam16)
	{
		case 3:
			Global_4521354[Global_4524907 /*296*/].f_291[Global_21649] = 1;
			break;
		
		case 0:
			Global_4521354[Global_4524907 /*296*/].f_291[0] = 1;
			break;
		
		case 2:
			Global_4521354[Global_4524907 /*296*/].f_291[2] = 1;
			break;
		
		case 1:
			Global_4521354[Global_4524907 /*296*/].f_291[1] = 1;
			break;
	}
	if (iParam16 == 3)
	{
		switch (Global_21649)
		{
			case 0:
				func_441(0);
				break;
			
			case 1:
				func_441(1);
				break;
			
			case 2:
				func_441(2);
				break;
			
			case 3:
				func_441(3);
				break;
			
			default:
				break;
			}
	}
	if (iParam7 == 1)
	{
		switch (iParam16)
		{
			case 3:
				Global_4524908 = 1;
				break;
			
			case 0:
				Global_4524908 = 1;
				break;
			
			case 2:
				Global_4524908 = 1;
				break;
			
			case 1:
				Global_4524908 = 1;
				break;
			}
	}
	Global_24093[Global_4524907] = 0;
	if (bParam10)
	{
		func_446();
		if (Global_21592)
		{
			StringCopy(&Global_21638, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21649)
			{
				case 0:
					StringCopy(&Global_21638, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_21638, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_21638, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_21638, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_440())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21638, true);
			}
		}
	}
	if (!Global_21883 && !BitTest(Global_9504, 9))
	{
		if (Global_21649.f_1 == 6)
		{
			func_439(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_435(1);
			func_439(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1979116 != -1 && iParam0 == Global_1979116)
	{
		bVar1 = true;
	}
	func_430(iParam0, sParam1, bVar1, func_434(PLAYER::PLAYER_ID()));
	return 1;
}

void func_430(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_431())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = -1180597171;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1979099.f_7;
	Var0.f_7 = Global_1979099.f_8;
	Var0.f_8 = Global_1979099.f_9;
	Var0.f_9 = Global_1979099.f_10;
	Var0.f_10 = Global_1979099.f_11;
	Var0.f_11 = Global_1979099.f_12;
	Var0.f_12 = Global_1979099.f_13;
	Var0.f_13 = Global_1979099.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1979116 = -1;
	}
}

int func_431()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_13())
	{
		return 0;
	}
	if (func_432(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_432(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_433(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_44(iParam0, 20);
}

bool func_433(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_434(int iParam0)
{
	if (func_14(iParam0))
	{
		return Global_1845298[iParam0 /*881*/].f_198.f_6;
	}
	return 0;
}

void func_435(int iParam0)
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
	
	Global_24092 = 0;
	Global_10124 = iParam0;
	func_438();
	iVar0 = 0;
	while (iVar0 < 9)
	{
		iVar1 = 0;
		if (func_296(14))
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9509[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9509[iVar1 /*15*/].f_4)
					{
						if (Global_10087[iVar0] == 0)
						{
							Global_10050[iVar0] = iVar1;
							if (iVar1 == 3)
							{
								if (BitTest(Global_9503, 3))
								{
									iVar2 = 42;
									Global_21886 = 1;
								}
								else
								{
									iVar2 = 255;
									Global_21886 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							if (Global_2697067)
							{
								if (iVar1 == 14)
								{
									func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							Global_10087[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		else
		{
			while (iVar1 < 35)
			{
				if (iParam0 == Global_9509[iVar1 /*15*/].f_11)
				{
					if (iVar0 == Global_9509[iVar1 /*15*/].f_4)
					{
						if (Global_10087[iVar0] == 0)
						{
							Global_10050[iVar0] = iVar1;
							if (iVar1 == 1)
							{
								iVar3 = 0;
								while (iVar3 < 35)
								{
									if (Global_114963.f_14150[iVar3 /*104*/].f_24 != 0)
									{
										if (Global_114963.f_14150[iVar3 /*104*/].f_28 == 0)
										{
											if (Global_114963.f_14150[iVar3 /*104*/].f_99[Global_21649] == 1)
											{
												Global_24092++;
											}
										}
									}
									iVar3++;
								}
								func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24092), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 7)
							{
								if (Global_80337)
								{
									iVar4 = 0;
									iVar4 = Global_4521352;
									iVar5 = 0;
									while (iVar5 < 12)
									{
										if (Global_4521354[iVar5 /*296*/].f_24 != 0)
										{
											if (Global_4521354[iVar5 /*296*/].f_28 == 0)
											{
												if (Global_4521354[iVar5 /*296*/].f_291[Global_21649] == 1)
												{
													iVar4++;
												}
											}
										}
										iVar5++;
									}
									func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
								else
								{
									switch (Global_21649)
									{
										case 0:
											iVar6 = Global_46158;
											break;
										
										case 1:
											iVar6 = Global_46159;
											break;
										
										case 2:
											iVar6 = Global_46160;
											break;
										
										default:
											break;
									}
									func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
								}
							}
							else if (iVar1 == 14)
							{
								func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_24086), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else if (iVar1 == 20)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9508);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 2)
							{
								if (BitTest(Global_9503, 6))
								{
									iVar7 = 42;
								}
								else
								{
									iVar7 = 255;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 3)
							{
								if (BitTest(Global_9503, 3))
								{
									iVar8 = 42;
									Global_21886 = 1;
								}
								else
								{
									iVar8 = 255;
									Global_21886 = 0;
								}
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (iVar1 == 8)
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if ((iVar1 == 24 && MISC::ARE_STRINGS_EQUAL(&(Global_9509[iVar1 /*15*/]), "CELL_BENWEB")) && BitTest(Global_9503, 6))
							{
								GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_21630, "SET_DATA_SLOT");
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_9509[iVar1 /*15*/].f_10);
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
								func_437(&(Global_9509[iVar1 /*15*/]));
								GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
								GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
							}
							else if (Global_9509[iVar1 /*15*/].f_10 == 57 && iVar1 == 24)
							{
								iVar9 = 0;
								iVar9 = Global_1882061.f_1;
								func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							else
							{
								func_436(Global_21630, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_9509[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_9509[iVar1 /*15*/]), 0, 0, 0, 0);
							}
							Global_10087[iVar0] = 1;
						}
					}
				}
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_436(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
	{
		func_437(sParam7);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		func_437(sParam8);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
	{
		func_437(sParam9);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
	{
		func_437(sParam10);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
	{
		func_437(sParam11);
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

void func_437(char* sParam0)
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}

void func_438()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 9)
	{
		Global_10087[iVar0] = 0;
		iVar0++;
	}
}

void func_439(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6)
{
	GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
	if (fParam3 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
	}
	if (fParam4 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
	}
	if (fParam5 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
	}
	if (fParam6 != -1f)
	{
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
	}
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}

bool func_440()
{
	return Global_1575095;
}

void func_441(int iParam0)
{
	var uVar0;
	var uVar1;
	
	uVar0 = Global_114963.f_14060[iParam0 /*20*/].f_8;
	uVar0 = uVar0;
	uVar1 = uVar1;
}

void func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_4521354[iParam0 /*296*/].f_18 = iVar0;
	Global_4521354[iParam0 /*296*/].f_18.f_1 = iVar1;
	Global_4521354[iParam0 /*296*/].f_18.f_2 = iVar2;
	Global_4521354[iParam0 /*296*/].f_18.f_3 = iVar3;
	Global_4521354[iParam0 /*296*/].f_18.f_4 = uVar4;
	Global_4521354[iParam0 /*296*/].f_18.f_5 = iVar5;
}

void func_443()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	Global_4524907 = 11;
	Global_4521354[Global_4524907 /*296*/].f_18 = -1;
	Global_4521354[Global_4524907 /*296*/].f_18.f_1 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_2 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_3 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_444(Global_4521354[iVar2 /*296*/].f_18, Global_4521354[Global_4524907 /*296*/].f_18))
		{
			Global_4524907 = iVar2;
		}
		iVar2++;
	}
	Global_4521354[Global_4524907 /*296*/].f_24 = 1;
}

int func_444(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_445()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 10;
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_4521354[iVar2 /*296*/].f_24 == 0)
		{
			Global_4524907 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_4524907 = 11;
	Global_4521354[Global_4524907 /*296*/].f_18 = -1;
	Global_4521354[Global_4524907 /*296*/].f_18.f_1 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_2 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_3 = 0;
	Global_4521354[Global_4524907 /*296*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_4521354[iVar2 /*296*/].f_24 == 0 || Global_4521354[iVar2 /*296*/].f_24 == 1)
		{
			if (!func_444(Global_4521354[iVar2 /*296*/].f_18, Global_4521354[Global_4524907 /*296*/].f_18))
			{
				Global_4524907 = iVar2;
			}
		}
		iVar2++;
	}
	if (Global_4524907 == 11)
	{
		return 0;
	}
	Global_4521354[Global_4524907 /*296*/].f_291[0] = 0;
	Global_4521354[Global_4524907 /*296*/].f_291[1] = 0;
	Global_4521354[Global_4524907 /*296*/].f_291[2] = 0;
	return 1;
}

void func_446()
{
	if (func_296(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[0 /*29*/])
			{
				Global_21649 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[1 /*29*/])
			{
				Global_21649 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114963.f_28060[2 /*29*/])
			{
				Global_21649 = 2;
			}
			else
			{
				Global_21649 = 0;
			}
		}
	}
	else
	{
		Global_21649 = func_447();
		if (Global_21649 == 145)
		{
			Global_21649 = 3;
		}
		if (Global_80337)
		{
			Global_21649 = 3;
		}
		if (Global_21649 > 3)
		{
			Global_21649 = 3;
		}
	}
}

var func_447()
{
	func_448();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_448()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_451(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_450(PLAYER::PLAYER_PED_ID());
			if (func_449(iVar0) && (!func_296(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_449(Global_114963.f_2370.f_539.f_4321))
				{
					Global_114963.f_2370.f_539.f_4322 = Global_114963.f_2370.f_539.f_4321;
				}
				Global_114963.f_2370.f_539.f_4323 = iVar0;
				Global_114963.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114963.f_2370.f_539.f_4321 != 145)
			{
				Global_114963.f_2370.f_539.f_4323 = Global_114963.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114963.f_2370.f_539.f_4321 = 145;
}

bool func_449(int iParam0)
{
	return iParam0 < 3;
}

int func_450(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_451(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_451(int iParam0)
{
	if (func_449(iParam0))
	{
		return func_452(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_452(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

int func_453(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	iVar0 = 3;
	if (func_429(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_10226 = iParam10;
			MISC::SET_BIT(&Global_4524923, false);
		}
		return 1;
	}
	return 0;
}

int func_454(int iParam0, int iParam1)
{
	if (iParam0 == -99)
	{
		return -99;
	}
	func_455(2, iParam1);
	return iParam0;
}

void func_455(int iParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	
	if (iParam0 == 0)
	{
		return;
	}
	bVar0 = false;
	bVar1 = false;
	switch (iParam0)
	{
		case 1:
			bVar0 = true;
			break;
		
		case 2:
			bVar1 = true;
			break;
		
		default:
			return;
	}
	if (bVar0)
	{
		switch (*uParam1)
		{
			case 1:
			case 3:
				break;
			
			case 0:
				*uParam1 = 1;
				break;
			
			case 2:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
	if (bVar1)
	{
		switch (*uParam1)
		{
			case 2:
			case 3:
				break;
			
			case 0:
				*uParam1 = 2;
				break;
			
			case 1:
				*uParam1 = 3;
				break;
			
			default:
				return;
		}
		return;
	}
}

char* func_456(char* sParam0, bool bParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return sLocal_37;
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam0, sLocal_37))
	{
		return sLocal_37;
	}
	func_455(1, iParam2);
	if (bParam1)
	{
		return sParam0;
	}
	return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(sParam0);
}

int func_457(int iParam0)
{
	int iVar0;
	
	iVar0 = func_460(iParam0);
	if (iVar0 == -1)
	{
		func_458(iParam0, 1);
		return 0;
	}
	Global_1690184[iVar0 /*5*/].f_4 = 1;
	return Global_1690184[iVar0 /*5*/].f_2;
}

void func_458(int iParam0, bool bParam1)
{
	if (!func_6(iParam0, 0, 1))
	{
		return;
	}
	if (func_460(iParam0) != -1)
	{
		return;
	}
	if (Global_1690347)
	{
		if (iParam0 == Global_1690347.f_1)
		{
			return;
		}
	}
	if (func_459(iParam0))
	{
		return;
	}
	if (Global_1690385 >= 32)
	{
		return;
	}
	Global_1690352[Global_1690385] = iParam0;
	Global_1690385++;
	if (bParam1)
	{
	}
}

int func_459(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1690385)
	{
		if (Global_1690352[iVar0] == iParam0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_460(int iParam0)
{
	int iVar0;
	
	if (!func_6(iParam0, 0, 1))
	{
		return -1;
	}
	if (Global_1690345 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1690345)
	{
		if (Global_1690184[iVar0 /*5*/].f_1 == iParam0)
		{
			if (PED::IS_PEDHEADSHOT_VALID(Global_1690184[iVar0 /*5*/].f_2) && PED::IS_PEDHEADSHOT_READY(Global_1690184[iVar0 /*5*/].f_2))
			{
				return iVar0;
			}
			func_461(iVar0);
			return -1;
		}
		iVar0++;
	}
	return -1;
}

void func_461(int iParam0)
{
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	
	if (iParam0 >= Global_1690345)
	{
		return;
	}
	if (PED::IS_PEDHEADSHOT_VALID(Global_1690184[iParam0 /*5*/].f_2))
	{
		StringCopy(&cVar0, "CHAR_DEFAULT", 64);
		if (Global_1690184[iParam0 /*5*/].f_2 != 0)
		{
			StringCopy(&cVar16, PED::GET_PEDHEADSHOT_TXD_STRING(Global_1690184[iParam0 /*5*/].f_2), 64);
			HUD::THEFEED_UPDATE_ITEM_TEXTURE(&cVar16, &cVar16, &cVar0, &cVar0);
		}
		PED::UNREGISTER_PEDHEADSHOT(Global_1690184[iParam0 /*5*/].f_2);
	}
	iVar32 = iParam0;
	iVar33 = iVar32 + 1;
	while (iVar33 < Global_1690345)
	{
		Global_1690184[iVar32 /*5*/] = { Global_1690184[iVar33 /*5*/] };
		iVar32++;
		iVar33++;
	}
	func_462(&(Global_1690184[iVar32 /*5*/]));
	Global_1690345 = (Global_1690345 - 1);
}

void func_462(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = func_13();
	uParam0->f_2 = 0;
	uParam0->f_4 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		uParam0->f_3 = NETWORK::GET_NETWORK_TIME();
	}
}

void func_463()
{
	Global_1674261.f_40.f_9 = 4;
}

int func_464(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	func_463();
	bVar0 = false;
	return func_424(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_465(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	bVar0 = false;
	return func_466(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8);
}

int func_466(int iParam0, int iParam1, char* sParam2, bool bParam3, var uParam4, char* sParam5, bool bParam6, int iParam7, char* sParam8, char* sParam9)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	char* sVar4;
	var uVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar12;
	
	iVar0 = func_13();
	iVar1 = 0;
	if (iParam0 == 145)
	{
		iVar0 = iParam1;
		sVar2 = PLAYER::GET_PLAYER_NAME(iVar0);
		iVar1 = func_457(iVar0);
		if (iVar1 == 0)
		{
			if (NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1674261.f_40.f_13))
			{
				return 0;
			}
		}
		Global_24084 = iVar1;
	}
	else
	{
		sVar2 = "";
	}
	iVar3 = 0;
	sVar4 = func_456(sParam5, bParam6, &iVar3);
	uVar5 = func_454(iParam7, &iVar3);
	iVar6 = 0;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
	{
		iVar6++;
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
		{
			iVar6++;
		}
	}
	if (MISC::ARE_STRINGS_EQUAL(sVar4, " "))
	{
		sVar4 = "";
	}
	bVar7 = !BitTest(uParam4, 8);
	iVar8 = 0;
	iVar9 = 0;
	iVar10 = 1;
	iVar11 = 0;
	if (bParam3)
	{
		iVar9 = 1;
		iVar10 = 2;
		iVar11 = 1;
		if (BitTest(uParam4, 1))
		{
			iVar8 = 1;
		}
	}
	if (BitTest(uParam4, 2))
	{
		iVar10 = 2;
	}
	bVar12 = false;
	if (!iVar3 == 0 || !MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
		bVar12 = func_476(iParam0, sParam2, iVar10, sVar4, uVar5, sVar2, iVar3, iVar11, 1, iVar9, 0, bVar7, iVar8, 0, iVar6, sParam8, sParam9);
	}
	else
	{
		bVar12 = func_468(iParam0, sParam2, iVar10, iVar11, 1, iVar9, 0, bVar7, iVar8, 0);
	}
	if (!bVar12)
	{
		return 0;
	}
	if (BitTest(uParam4, 0))
	{
		func_427();
	}
	func_467();
	func_426();
	func_425();
	return 1;
}

void func_467()
{
	Global_1674261.f_40.f_9 = 3;
}

int func_468(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9)
{
	int iVar0;
	char* sVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	char* sVar5;
	char* sVar6;
	int iVar7;
	
	MISC::CLEAR_BIT(&Global_9502, 10);
	iVar0 = 0;
	sVar1 = "NULL";
	iVar2 = -99;
	sVar3 = "NULL";
	iVar4 = 0;
	sVar5 = "NULL";
	sVar6 = "NULL";
	iVar7 = 3;
	if (func_470(iParam0, sParam1, iParam2, iVar0, sVar1, sVar3, iVar2, iParam3, iParam4, iParam5, bParam7, iParam8, iParam9, iVar4, sVar5, sVar6, iVar7) == 1)
	{
		if (bParam7 == 1)
		{
			Global_10226 = iParam6;
			Global_10129[3 /*6*/] = { func_469(iParam0) };
			Global_10206 = iParam0;
			MISC::SET_BIT(&Global_9502, true);
			MISC::SET_BIT(&Global_9502, 7);
		}
		return 1;
	}
	return 0;
}

struct<4> func_469(int iParam0)
{
	return Global_2349[iParam0 /*29*/].f_3;
}

int func_470(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16)
{
	int iVar0;
	bool bVar1;
	
	if (iParam13 > 99)
	{
	}
	if (MISC::ARE_STRINGS_EQUAL(sParam14, sParam15))
	{
	}
	func_446();
	iVar0 = 0;
	switch (iParam16)
	{
		case 0:
			if (Global_21649 == 0)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 2:
			if (Global_21649 == 2)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 1:
			if (Global_21649 == 1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			{
				return 0;
			}
		}
		if (Global_114963.f_14060[Global_21649 /*20*/].f_17 == 1)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0)
		{
			return 0;
		}
	}
	if (func_475() == 0)
	{
		func_473();
		return 0;
	}
	func_472(Global_24091);
	StringCopy(&(Global_114963.f_14150[Global_24091 /*104*/]), sParam1, 64);
	Global_114963.f_14150[Global_24091 /*104*/].f_17 = iParam0;
	if (iParam2 == 0)
	{
	}
	else
	{
		Global_114963.f_14150[Global_24091 /*104*/].f_24 = iParam2;
	}
	Global_114963.f_14150[Global_24091 /*104*/].f_25 = iParam7;
	Global_114963.f_14150[Global_24091 /*104*/].f_26 = uParam8;
	Global_114963.f_14150[Global_24091 /*104*/].f_29 = uParam9;
	Global_114963.f_14150[Global_24091 /*104*/].f_30 = uParam12;
	Global_114963.f_14150[Global_24091 /*104*/].f_31 = uParam11;
	Global_114963.f_14150[Global_24091 /*104*/].f_28 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_32 = iParam3;
	StringCopy(&(Global_114963.f_14150[Global_24091 /*104*/].f_33), sParam4, 64);
	Global_114963.f_14150[Global_24091 /*104*/].f_49 = iParam6;
	StringCopy(&(Global_114963.f_14150[Global_24091 /*104*/].f_50), sParam5, 64);
	Global_114963.f_14150[Global_24091 /*104*/].f_66 = iParam13;
	StringCopy(&(Global_114963.f_14150[Global_24091 /*104*/].f_67), sParam14, 64);
	StringCopy(&(Global_114963.f_14150[Global_24091 /*104*/].f_83), sParam15, 64);
	if (BitTest(Global_9502, 10))
	{
		Global_114963.f_14150[Global_24091 /*104*/].f_99[0] = 1;
		Global_114963.f_14150[Global_24091 /*104*/].f_99[1] = 1;
		Global_114963.f_14150[Global_24091 /*104*/].f_99[2] = 1;
		Global_10225 = 4;
		func_441(0);
		func_441(2);
		func_441(1);
	}
	else
	{
		func_446();
		switch (iParam16)
		{
			case 3:
				Global_114963.f_14150[Global_24091 /*104*/].f_99[Global_21649] = 1;
				break;
			
			case 0:
				Global_114963.f_14150[Global_24091 /*104*/].f_99[0] = 1;
				break;
			
			case 2:
				Global_114963.f_14150[Global_24091 /*104*/].f_99[2] = 1;
				break;
			
			case 1:
				Global_114963.f_14150[Global_24091 /*104*/].f_99[1] = 1;
				break;
		}
		if (iParam16 == 3)
		{
			switch (Global_21649)
			{
				case 0:
					func_441(0);
					Global_10225 = 0;
					break;
				
				case 1:
					func_441(1);
					Global_10225 = 1;
					break;
				
				case 2:
					func_441(2);
					Global_10225 = 2;
					break;
				
				case 3:
					func_441(3);
					Global_10225 = 3;
					break;
				
				default:
					Global_10225 = 4;
					break;
				}
			}
	}
	if (iParam7 == 1)
	{
		if (BitTest(Global_9502, 10))
		{
			Global_114963.f_14060[0 /*20*/].f_17 = 1;
			Global_114963.f_14060[1 /*20*/].f_17 = 1;
			Global_114963.f_14060[2 /*20*/].f_17 = 1;
		}
		else
		{
			switch (iParam16)
			{
				case 3:
					Global_114963.f_14060[Global_21649 /*20*/].f_17 = 1;
					break;
				
				case 0:
					Global_114963.f_14060[0 /*20*/].f_17 = 1;
					break;
				
				case 2:
					Global_114963.f_14060[2 /*20*/].f_17 = 1;
					break;
				
				case 1:
					Global_114963.f_14060[1 /*20*/].f_17 = 1;
					break;
				}
			}
	}
	Global_24093[Global_24091] = 0;
	if (bParam10)
	{
		func_446();
		if (Global_21592)
		{
			StringCopy(&Global_21638, "Phone_SoundSet_Prologue", 24);
		}
		else
		{
			switch (Global_21649)
			{
				case 0:
					StringCopy(&Global_21638, "Phone_SoundSet_Michael", 24);
					break;
				
				case 2:
					StringCopy(&Global_21638, "Phone_SoundSet_Trevor", 24);
					break;
				
				case 1:
					StringCopy(&Global_21638, "Phone_SoundSet_Franklin", 24);
					break;
				
				default:
					StringCopy(&Global_21638, "Phone_SoundSet_Default", 24);
					break;
				}
		}
		if (!Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 1)
		{
			if (!func_440())
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_21638, true);
			}
		}
	}
	if (!Global_21883 && !BitTest(Global_9504, 9))
	{
		if (Global_21649.f_1 == 6)
		{
			func_439(Global_21630, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
			func_435(1);
			func_439(Global_21630, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_21629), -1082130432, -1082130432, -1082130432);
		}
	}
	if (Global_1979116 != -1 && iParam0 == Global_1979116)
	{
		bVar1 = true;
	}
	func_471(iParam0, sParam1, bVar1, func_434(PLAYER::PLAYER_ID()));
	return 1;
}

void func_471(int iParam0, char* sParam1, bool bParam2, var uParam3)
{
	struct<14> Var0;
	
	if (!func_431())
	{
		return;
	}
	Var0.f_0 = iParam0;
	Var0.f_1 = 1654525105;
	Var0.f_2 = MISC::GET_HASH_KEY(sParam1);
	Var0.f_3 = 0;
	Var0.f_4 = bParam2;
	Var0.f_5 = uParam3;
	Var0.f_6 = Global_1979099.f_7;
	Var0.f_7 = Global_1979099.f_8;
	Var0.f_8 = Global_1979099.f_9;
	Var0.f_9 = Global_1979099.f_10;
	Var0.f_10 = Global_1979099.f_11;
	Var0.f_11 = Global_1979099.f_12;
	Var0.f_12 = Global_1979099.f_13;
	Var0.f_13 = Global_1979099.f_14;
	STATS::PLAYSTATS_NPC_PHONE(&Var0);
	if (bParam2)
	{
		Global_1979116 = -1;
	}
}

void func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	int iVar5;
	
	iVar0 = CLOCK::GET_CLOCK_SECONDS();
	iVar1 = CLOCK::GET_CLOCK_MINUTES();
	iVar2 = CLOCK::GET_CLOCK_HOURS();
	iVar3 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	uVar4 = CLOCK::GET_CLOCK_MONTH() + 1;
	iVar5 = CLOCK::GET_CLOCK_YEAR();
	Global_114963.f_14150[iParam0 /*104*/].f_18 = iVar0;
	Global_114963.f_14150[iParam0 /*104*/].f_18.f_1 = iVar1;
	Global_114963.f_14150[iParam0 /*104*/].f_18.f_2 = iVar2;
	Global_114963.f_14150[iParam0 /*104*/].f_18.f_3 = iVar3;
	Global_114963.f_14150[iParam0 /*104*/].f_18.f_4 = uVar4;
	Global_114963.f_14150[iParam0 /*104*/].f_18.f_5 = iVar5;
}

void func_473()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_80337)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	Global_24091 = 34;
	Global_114963.f_14150[Global_24091 /*104*/].f_18 = -1;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_1 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_2 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_3 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (!func_474(Global_114963.f_14150[iVar2 /*104*/].f_18, Global_114963.f_14150[Global_24091 /*104*/].f_18))
		{
			Global_24091 = iVar2;
		}
		iVar2++;
	}
	Global_114963.f_14150[Global_24091 /*104*/].f_24 = 1;
}

int func_474(struct<6> Param0, struct<6> Param6)
{
	struct<4> Var0;
	struct<4> Var6;
	int iVar12;
	int iVar13;
	
	if (Param0.f_5 < Param6.f_5)
	{
		return 0;
	}
	if (Param0.f_5 > Param6.f_5)
	{
		return 1;
	}
	if (Param0.f_5 == Param6.f_5)
	{
		if (Param0.f_4 < Param6.f_4)
		{
			return 0;
		}
		if (Param0.f_4 > Param6.f_4)
		{
			return 1;
		}
		if (Param0.f_4 == Param6.f_4)
		{
			Var0.f_0 = Param0.f_0;
			Var0.f_1 = Param0.f_1 * 60;
			Var0.f_2 = Param0.f_2 * 3600;
			Var0.f_3 = (Param0.f_3 * 86400);
			iVar12 = (((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
			Var6.f_0 = Param6.f_0;
			Var6.f_1 = Param6.f_1 * 60;
			Var6.f_2 = Param6.f_2 * 3600;
			Var6.f_3 = (Param6.f_3 * 86400);
			iVar13 = (((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
			if (iVar12 > iVar13 || iVar12 == iVar13)
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_475()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_80337)
	{
		iVar0 = 24;
		iVar1 = 33;
	}
	else
	{
		iVar0 = 0;
		iVar1 = 20;
	}
	iVar2 = iVar0;
	while (iVar2 < iVar1)
	{
		if (Global_114963.f_14150[iVar2 /*104*/].f_24 == 0)
		{
			Global_24091 = iVar2;
			return 1;
		}
		iVar2++;
	}
	iVar2 = iVar0;
	Global_24091 = 34;
	Global_114963.f_14150[Global_24091 /*104*/].f_18 = -1;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_1 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_2 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_3 = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_18.f_5 = 99999;
	while (iVar2 < iVar1)
	{
		if (Global_114963.f_14150[iVar2 /*104*/].f_24 == 0 || Global_114963.f_14150[iVar2 /*104*/].f_24 == 1)
		{
			if (!func_474(Global_114963.f_14150[iVar2 /*104*/].f_18, Global_114963.f_14150[Global_24091 /*104*/].f_18))
			{
				Global_24091 = iVar2;
			}
		}
		if (Global_114963.f_14150[iVar2 /*104*/].f_24 == 2)
		{
		}
		iVar2++;
	}
	if (Global_24091 == 34)
	{
		return 0;
	}
	Global_114963.f_14150[Global_24091 /*104*/].f_99[0] = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_99[1] = 0;
	Global_114963.f_14150[Global_24091 /*104*/].f_99[2] = 0;
	return 1;
}

int func_476(int iParam0, char* sParam1, int iParam2, char* sParam3, var uParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, int iParam12, int iParam13, int iParam14, char* sParam15, char* sParam16)
{
	int iVar0;
	
	switch (iParam14)
	{
		case 0:
			sParam15 = "NULL";
			sParam16 = "NULL";
			break;
		
		case 1:
			sParam16 = "NULL";
			break;
		
		case 2:
			break;
		
		default:
			break;
	}
	MISC::CLEAR_BIT(&Global_9502, 10);
	iVar0 = 3;
	if (func_470(iParam0, sParam1, iParam2, iParam6, sParam3, sParam5, uParam4, iParam7, iParam8, iParam9, bParam11, iParam12, iParam13, iParam14, sParam15, sParam16, iVar0) == 1)
	{
		if (bParam11 == 1)
		{
			Global_10226 = iParam10;
			Global_10129[3 /*6*/] = { func_469(iParam0) };
			Global_10206 = iParam0;
			StringCopy(&Global_10207, sParam5, 64);
			MISC::SET_BIT(&Global_9502, true);
			MISC::SET_BIT(&Global_9502, 7);
		}
		return 1;
	}
	return 0;
}

int func_477(int iParam0, int iParam1, char* sParam2, var uParam3, char* sParam4, bool bParam5, int iParam6, char* sParam7, char* sParam8)
{
	bool bVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	func_467();
	bVar0 = true;
	if (func_466(iParam0, iParam1, sParam2, bVar0, uParam3, sParam4, bParam5, iParam6, sParam7, sParam8))
	{
		func_423(120000);
		return 1;
	}
	return 0;
}

int func_478(var uParam0, int iParam1, char* sParam2, char* sParam3, var uParam4)
{
	bool bVar0;
	int iVar1;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
		{
			return 0;
		}
	}
	bVar0 = false;
	iVar1 = 12;
	if (BitTest(uParam4, 7))
	{
		iVar1 = 9;
	}
	if (BitTest(uParam4, 4))
	{
		bVar0 = func_495(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	else
	{
		bVar0 = func_484(uParam0, iParam1, sParam2, sParam3, iVar1, 0, 0, 1);
	}
	if (bVar0)
	{
		if (BitTest(uParam4, 3))
		{
			func_483(1);
		}
		if (BitTest(uParam4, 5))
		{
			func_482(1);
		}
		func_481();
		func_426();
		func_480();
		func_479();
		return 1;
	}
	return 0;
}

void func_479()
{
	Global_2739913 = 0;
}

void func_480()
{
	Global_1674261.f_57 = 1;
	Global_1674261.f_57.f_1 = 0;
}

void func_481()
{
	Global_1674261.f_40.f_9 = 1;
}

void func_482(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9504, false);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9504, false);
	}
}

void func_483(int iParam0)
{
	if (iParam0 == 1)
	{
		MISC::SET_BIT(&Global_9502, 20);
	}
	else
	{
		MISC::CLEAR_BIT(&Global_9502, 20);
	}
}

int func_484(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_494(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_23071 = 0;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_23028 = 0;
	Global_23075 = 0;
	Global_23077 = 0;
	Global_2883585 = 0;
	return func_485(sParam3, iParam4, bParam7);
}

int func_485(char* sParam0, int iParam1, bool bParam2)
{
	Global_23024 = 0;
	if (Global_23023 == 0 || Global_23025 == 2)
	{
		if (Global_23023 != 0)
		{
			if (iParam1 > Global_23025)
			{
				if (Global_23030 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21649.f_1 = 3;
					Global_23023 = 0;
					Global_23024 = 1;
					Global_23076 = 0;
					Global_23019 = 0;
					Global_23020 = 0;
					Global_23034 = 0;
					Global_23033 = 0;
					Global_21648 = 0;
				}
				else
				{
					func_493();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		{
			return 0;
		}
		if (func_492(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_491();
		Global_22312 = { Global_22477 };
		Global_23029 = Global_23030;
		Global_23036 = Global_23037;
		Global_2883586 = Global_2883585;
		Global_23038 = { Global_23054 };
		Global_23031 = Global_23032;
		Global_24013 = Global_24014;
		Global_24021 = { Global_24027 };
		Global_24015 = Global_24016;
		Global_24017 = Global_24018;
		Global_24019 = Global_24020;
		Global_22642.f_370 = Global_24012;
		Global_22642.f_368 = Global_24010;
		Global_22642.f_369 = Global_24011;
		Global_23019 = Global_23020;
		if (Global_23029)
		{
			MISC::CLEAR_BIT(&Global_9502, 20);
			MISC::CLEAR_BIT(&Global_9503, 17);
			MISC::CLEAR_BIT(&Global_9504, false);
			if (bParam2)
			{
				func_446();
				if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21649.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21615 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_490())
				{
					return 0;
				}
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("gadget_parachute")))
				{
					return 0;
				}
				if (!Global_80337)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
					{
						return 0;
					}
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
					{
						return 0;
					}
				}
			}
			if (func_489())
			{
				return 0;
			}
			else
			{
				switch (Global_21649.f_1)
				{
					case 7:
						return 0;
						break;
					
					case 8:
						return 0;
						break;
					
					case 9:
						break;
					
					case 10:
						break;
					
					default:
						break;
				}
				if (BitTest(Global_9502, 9))
				{
					return 0;
				}
			}
			func_488();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_487();
		func_486();
		return 1;
	}
	if (Global_23023 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_23025 || iParam1 == Global_23025)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_493();
	}
	return 0;
}

void func_486()
{
	if (!func_431())
	{
		return;
	}
	if (Global_23029)
	{
		MemCopy(&(Global_1979099.f_1), {Global_22642}, 4);
		Global_1979099 = Global_8817;
		Global_1979099.f_6 = Global_23033;
	}
}

void func_487()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21891[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_23023 = 1;
}

void func_488()
{
	Global_23076 = Global_23075;
	Global_23070 = Global_23071;
	Global_23117 = { Global_23105 };
	Global_23123 = { Global_23111 };
	Global_23078 = Global_23077;
	Global_23147 = { Global_23129 };
	Global_23153 = { Global_23135 };
	Global_23159 = { Global_23141 };
	Global_23165 = { Global_23171 };
	Global_8817 = Global_8818;
	Global_8819 = Global_8820;
	Global_23034 = Global_23035;
	Global_23036 = Global_23037;
	Global_23038 = { Global_23054 };
	Global_23027 = Global_23028;
	Global_24039 = 0;
	Global_23072 = 0;
	Global_23073 = 0;
	MISC::CLEAR_BIT(&Global_9503, 16);
}

int func_489()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_490()
{
	int iVar0;
	int iVar1;
	
	if (Global_80337)
	{
		iVar0 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar1, true);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if ((iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper")) || iVar1 == joaat("weapon_remotesniper"))
			{
				iVar0 = 1;
			}
		}
		if (CAM::IS_AIM_CAM_ACTIVE() && iVar0 == 1)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_491()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_22312[iVar0 /*10*/] = 0;
		StringCopy(&(Global_22312[iVar0 /*10*/].f_1), "", 24);
		Global_22312[iVar0 /*10*/].f_7 = 0;
		Global_22312[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_22312.f_161 = -99;
	Global_22312.f_162 = { 0f, 0f, 0f };
}

bool func_492(int iParam0, int iParam1)
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

void func_493()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21649.f_1 == 9) || Global_21648 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
		Global_21649.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_23023 = 6;
		return;
	}
}

void func_494(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22477 = { *uParam0 };
	Global_8818 = iParam1;
	StringCopy(&Global_23093, sParam2, 24);
	Global_24012 = iParam5;
	if (iParam3 == 0)
	{
		Global_24010 = 1;
		Global_24008 = 0;
	}
	else
	{
		Global_24010 = 0;
		Global_24008 = 1;
	}
	if (iParam4 == 0)
	{
		Global_24011 = 1;
		Global_24009 = 0;
	}
	else
	{
		Global_24011 = 0;
		Global_24009 = 1;
	}
}

int func_495(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	func_494(uParam0, iParam1, sParam2, iParam5, iParam6, 0);
	Global_23071 = 1;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_23028 = 0;
	Global_23075 = 0;
	Global_23077 = 0;
	Global_2883585 = 0;
	return func_485(sParam3, iParam4, bParam7);
}

int func_496(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4)
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
	}
	if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (func_498(uParam0, iParam1, sParam2, sParam3, 9, sParam4, 0, 0, 1))
	{
		func_497();
		func_481();
		func_426();
		func_480();
		func_479();
		return 1;
	}
	return 0;
}

void func_497()
{
	Global_24041 = 0;
}

bool func_498(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8)
{
	func_494(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_23071 = 0;
	Global_23030 = 1;
	Global_23037 = 0;
	Global_23032 = 1;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_23028 = 0;
	Global_23075 = 1;
	Global_23077 = 0;
	StringCopy(&Global_23171, sParam5, 24);
	Global_2883585 = 0;
	return func_485(sParam3, iParam4, bParam8);
}

int func_499(var uParam0, char* sParam1, char* sParam2)
{
	if (func_501(uParam0, sParam1, sParam2, 12, 0, 0, 0))
	{
		func_500();
		func_426();
		func_480();
		return 1;
	}
	return 0;
}

void func_500()
{
	Global_1674261.f_40.f_9 = 2;
}

bool func_501(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_494(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_23030 = 0;
	Global_23032 = 0;
	Global_23037 = 0;
	Global_24014 = 0;
	Global_24016 = 0;
	Global_24020 = 0;
	Global_2883585 = 0;
	return func_485(sParam2, iParam3, 0);
}

void func_502()
{
	Global_1674261.f_55 = Global_1674261.f_40.f_1;
	Global_1674261.f_55.f_1 = Global_1674261.f_40.f_10;
}

void func_503()
{
	Global_1674261.f_40 = 1;
}

bool func_504()
{
	return Global_1674261.f_40 == 1;
}

int func_505(int iParam0, int iParam1, int iParam2)
{
	if (!func_506(iParam0))
	{
		return 0;
	}
	if (Global_1674261.f_40.f_2 != iParam1)
	{
		return 0;
	}
	if (iParam2 != 0)
	{
		if (Global_1674261.f_40.f_3 != iParam2)
		{
			return 0;
		}
	}
	return 1;
}

int func_506(int iParam0)
{
	if (!func_507())
	{
		return 0;
	}
	if (!Global_1674261.f_40.f_1 == iParam0)
	{
		return 0;
	}
	return 1;
}

int func_507()
{
	if (Global_1674261.f_40 == 0)
	{
		return 0;
	}
	return 1;
}

int func_508(var uParam0)
{
	if (func_512())
	{
		return 0;
	}
	if (func_511())
	{
		return 0;
	}
	if (func_412(0))
	{
		return 0;
	}
	if (Global_1574635.f_18 != 0)
	{
		return 0;
	}
	if (Global_1935401 || func_510())
	{
		return 0;
	}
	if (!BitTest(uParam0, 6))
	{
		if (func_509())
		{
			return 0;
		}
	}
	return 1;
}

bool func_509()
{
	return NETWORK::IS_TIME_LESS_THAN(NETWORK::GET_NETWORK_TIME(), Global_1688993);
}

int func_510()
{
	if (Global_4502481.f_945 > -1)
	{
		return 1;
	}
	return 0;
}

bool func_511()
{
	return Global_1674261.f_40 == 3;
}

bool func_512()
{
	return func_489();
}

int func_513(int iParam0, int iParam1, int iParam2)
{
	if (!func_511())
	{
		return 0;
	}
	return func_505(iParam0, iParam1, iParam2);
}

int func_514(char* sParam0, char* sParam1)
{
	char cVar0[64];
	
	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, sParam1, 64);
	return MISC::GET_HASH_KEY(&cVar0);
}

bool func_515()
{
	return Global_2739179.f_1;
}

int func_516()
{
	if (Global_1674449.f_2)
	{
		return 1;
	}
	return func_517();
}

bool func_517()
{
	return func_512();
}

void func_518(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_80337)
	{
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_8 == 0)
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam2, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam2))
		{
			if ((uParam0[iParam1 /*10*/])->f_9 == 0)
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, false);
			}
			else
			{
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(iParam2, true);
			}
		}
	}
}

int func_519(bool bParam0)
{
	switch (bParam0)
	{
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_520(var uParam0)
{
	if (uParam0->f_1)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= 1000)
		{
			return 1;
		}
	}
	return 0;
}

void func_521(var uParam0)
{
	if (!uParam0->f_1)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_522(uParam0, 0, 0);
		}
	}
}

void func_522(var uParam0, bool bParam1, bool bParam2)
{
	if (uParam0->f_1 == 0)
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
}

void func_523()
{
	if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_10[iLocal_314 /*7*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_81.f_10[iLocal_314 /*7*/]), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_5(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(Local_81.f_10[iLocal_314 /*7*/]), true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 50625f))
			{
				if (!BitTest(iLocal_298, 4))
				{
					MISC::SET_BIT(&iLocal_298, 4);
				}
			}
			else if (!BitTest(iLocal_298, 5))
			{
				if (Local_81.f_42 != -1)
				{
					if (iLocal_314 == Local_81.f_42)
					{
						if (!BitTest(iLocal_298, 5))
						{
							MISC::SET_BIT(&iLocal_298, 5);
						}
					}
				}
			}
		}
	}
	func_524(iLocal_314);
	iLocal_314++;
	if (iLocal_314 >= func_519(bLocal_304))
	{
		if ((!BitTest(iLocal_298, 4) && BitTest(Local_81.f_1, 8)) || BitTest(iLocal_298, 5))
		{
			if (!BitTest(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
			{
				MISC::SET_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), true);
			}
		}
		else if (BitTest(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 1))
		{
			MISC::CLEAR_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), true);
		}
		MISC::CLEAR_BIT(&iLocal_298, 4);
		MISC::CLEAR_BIT(&iLocal_298, 5);
		iLocal_314 = 0;
	}
}

void func_524(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	bool bVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	
	iVar2 = 0;
	Var3 = { 0f, 0f, 0f };
	bVar6 = false;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iParam0 /*7*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]);
		if (bLocal_304 == 0)
		{
			if (PLAYER::PLAYER_ID() == iLocal_306)
			{
				if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
				{
					if (Local_81.f_10[iParam0 /*7*/].f_5 == 2)
					{
						bVar6 = true;
					}
				}
			}
		}
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			if (BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 1))
			{
				if (!BitTest(iLocal_299[iParam0], 0))
				{
					MISC::SET_BIT(&Global_1835541, false);
					MISC::SET_BIT(&(iLocal_299[iParam0]), false);
				}
				if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 9))
				{
					if (!BitTest(iLocal_299[iParam0], 1))
					{
						bVar6 = true;
					}
				}
				else if (BitTest(iLocal_299[iParam0], 1))
				{
					MISC::CLEAR_BIT(&(iLocal_299[iParam0]), true);
				}
			}
		}
		if (bVar6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iParam0 /*7*/]))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_10[iParam0 /*7*/]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_81.f_10[iParam0 /*7*/]);
				}
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_10[iParam0 /*7*/]))
		{
			if (PLAYER::PLAYER_ID() == iLocal_305)
			{
				if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 9) && !BitTest(iLocal_299[iParam0], 1))
				{
					if (NETWORK::NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(iVar0, PLAYER::PLAYER_ID()))
					{
						switch (Local_81.f_10[iParam0 /*7*/].f_1)
						{
							case 0:
								func_547(iVar0, 3);
								break;
						}
						MISC::SET_BIT(&(iLocal_299[iParam0]), true);
					}
				}
			}
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false) && !PED::IS_PED_INJURED(iVar0))
			{
				switch (Local_81.f_10[iParam0 /*7*/].f_5)
				{
					case 0:
						break;
					
					case 1:
						PED::SET_PED_RESET_FLAG(iVar0, 187, true);
						if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 2))
							{
								if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 3))
								{
									TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 3f);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
									PED::SET_PED_CONFIG_FLAG(iVar0, 118, false);
								}
							}
						}
						if (PLAYER::PLAYER_ID() == iLocal_306 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true), 25f))
						{
							MISC::SET_BIT(&(Global_2733190.f_3786), false);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2733190.f_3786), false);
						}
						if (!PED::IS_PED_FLEEING(iVar0))
						{
							if (!PED::IS_PED_RESPONDING_TO_EVENT(iVar0, 29))
							{
								if (func_6(iLocal_306, 1, 1))
								{
									if (!BitTest(Local_81.f_2, 13))
									{
										if (func_546(iLocal_306) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::GET_PLAYER_PED(iLocal_306)))
										{
											if (!func_545(iVar0, joaat("script_task_enter_vehicle")))
											{
												if (func_544(iVar0))
												{
													iVar1 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_306), false);
													if (ENTITY::DOES_ENTITY_EXIST(iVar1))
													{
														if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
														{
														}
														if (!VEHICLE::IS_SEAT_WARP_ONLY(iVar1, func_543(PLAYER::GET_PLAYER_PED(iLocal_306), 0)))
														{
															TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, func_542(PLAYER::GET_PLAYER_PED(iLocal_306), iVar1), func_541(iParam0), 1179977, 0);
														}
													}
												}
											}
										}
										else if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_306)) && !PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
										{
											if (func_545(iVar0, joaat("script_task_enter_vehicle")))
											{
												TASK::CLEAR_PED_TASKS(iVar0);
											}
											if (!func_545(iVar0, joaat("script_task_go_to_entity")))
											{
												if (func_544(iVar0))
												{
													TASK::TASK_GO_TO_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(iLocal_306), -1, 0f, func_541(iParam0), 2f, 0);
												}
											}
											else
											{
												PED::SET_PED_RESET_FLAG(iVar0, 151, true);
											}
										}
									}
								}
							}
						}
						break;
					
					case 2:
						if (PLAYER::PLAYER_ID() == iLocal_306 && func_5(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iLocal_306), true), 25f))
						{
							MISC::SET_BIT(&(Global_2733190.f_3786), false);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_2733190.f_3786), false);
						}
						if (PLAYER::PLAYER_ID() == iLocal_306)
						{
							if (!BitTest(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 0))
							{
								if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
								{
									if ((func_4(ENTITY::GET_ENTITY_COORDS(iVar0, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) && (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()))) || (PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::PLAYER_PED_ID()))
									{
										iVar2 = func_539(PLAYER::PLAYER_ID());
										fVar7 = (SYSTEM::TO_FLOAT(Global_262145.f_7267) / 100f);
										iVar2 = SYSTEM::ROUND((SYSTEM::TO_FLOAT(iVar2) * fVar7));
										iVar8 = func_434(PLAYER::PLAYER_ID());
										if (iVar8 > 100)
										{
											iVar8 = 100;
										}
										if (iVar2 > (iVar8 * Global_262145.f_7268))
										{
											iVar2 = (iVar8 * Global_262145.f_7268);
										}
										if (iVar2 > 0)
										{
											MISC::SET_BIT(&iLocal_298, 16);
										}
										TASK::SET_HIGH_FALL_TASK(PLAYER::PLAYER_PED_ID(), 5000, 10000, 4);
										if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_306)))
										{
											Var3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iVar0, true) };
											Var3 = { func_538(Var3) };
											Var3.f_0 = (Var3.f_0 * 3f);
											Var3.f_1 = (Var3.f_1 * 3f);
											Var3.f_2 = (Var3.f_2 * 3f);
											ENTITY::APPLY_FORCE_TO_ENTITY(PLAYER::PLAYER_PED_ID(), 1, Var3, 0f, 0f, 0.5f, 0, false, true, true, false, true);
										}
										PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 512, false);
										PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
										if (((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && func_536(iVar0)) && func_543(iVar0, 0) == -1)
										{
											PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
											PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, true);
										}
										else
										{
											TASK::CLEAR_PED_TASKS(iVar0);
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::PLAYER_PED_ID(), 10000f, -1, true, false);
										}
										Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3 = iVar2;
										if (iVar2 > 0)
										{
											Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = iParam0;
										}
										else
										{
											Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
										}
										PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Global_1837394);
										MISC::SET_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), false);
										MISC::SET_BIT(&(Global_2733190.f_3786), 2);
									}
								}
							}
						}
						break;
					
					case 3:
						if (PED::GET_PED_RESET_FLAG(iVar0, 187))
						{
							PED::SET_PED_RESET_FLAG(iVar0, 187, false);
						}
						if (Local_81.f_10[iParam0 /*7*/].f_4 == 0)
						{
							if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 4))
							{
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
								PED::SET_PED_CONFIG_FLAG(iVar0, 118, true);
							}
						}
						if (!(PED::IS_PED_JACKING(iVar0) && PED::GET_JACK_TARGET(iVar0) == PLAYER::GET_PLAYER_PED(iLocal_306)))
						{
							if (!PED::IS_PED_FLEEING(iVar0))
							{
								if (func_544(iVar0))
								{
									if ((PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) || PED::IS_PED_JACKING(iVar0)) && !BitTest(Local_81.f_2, 10))
									{
										if (!func_545(iVar0, joaat("script_task_vehicle_drive_wander")) && !func_545(iVar0, joaat("script_task_vehicle_mission")))
										{
											if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(iVar0))
											{
												iVar9 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
												iVar10 = ENTITY::GET_ENTITY_MODEL(iVar9);
												if (BitTest(Local_81.f_2, 13))
												{
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 17, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 1, false);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_HELI(iVar10))
												{
													TASK::TASK_HELI_MISSION(iVar0, iVar9, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 20f, 0f, -1f, 80, 80, -1f, 0);
												}
												else if (VEHICLE::IS_THIS_MODEL_A_PLANE(iVar10))
												{
													TASK::TASK_PLANE_MISSION(iVar0, iVar9, 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 25f, 0f, -1f, 1.121039E-43f, 1.121039E-43f, true);
												}
												else if (ENTITY::GET_ENTITY_MODEL(iVar9) == joaat("taxi") || func_535(iVar9, 1))
												{
													PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, true);
													PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
													TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_306), 10000f, -1, true, false);
												}
												else
												{
													TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, PED::GET_VEHICLE_PED_IS_IN(iVar0, true), 60f, 786468);
												}
											}
										}
									}
									else if (!func_545(iVar0, joaat("script_task_smart_flee_ped")))
									{
										if (func_6(iLocal_306, 1, 1))
										{
											TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iLocal_306), 10000f, -1, true, false);
										}
									}
								}
							}
						}
						break;
					
					case 4:
						func_533(Local_81.f_10[iParam0 /*7*/], 0);
						break;
				}
				if (BitTest(Local_81.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(Local_81.f_10[iParam0 /*7*/]), 1, false);
				}
				func_525(iVar0);
			}
		}
	}
}

void func_525(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (BitTest(iLocal_298, 16))
	{
		iVar0 = Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_3;
		iVar1 = func_526(iVar0);
		if (iVar1 == 1)
		{
			MISC::CLEAR_BIT(&iLocal_298, 15);
			MISC::CLEAR_BIT(&iLocal_298, 16);
			if (!func_58())
			{
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iVar0, false, false, 0);
			}
			if (iVar0 > Global_262145.f_8675)
			{
				iVar0 = Global_262145.f_8675;
			}
			PED::SET_PED_MONEY(iParam0, iVar0);
			MISC::SET_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 5);
		}
		else if (iVar1 == 0)
		{
			MISC::CLEAR_BIT(&iLocal_298, 15);
			MISC::CLEAR_BIT(&iLocal_298, 16);
			MISC::SET_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 6);
		}
		else
		{
			return;
		}
	}
}

int func_526(int iParam0)
{
	if (func_58())
	{
		if (func_529(iParam0))
		{
			if (func_528(iLocal_507) == 2)
			{
				NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_527(iLocal_507));
				MONEY::NETWORK_SPENT_ROBBED_BY_MUGGER(iParam0, false, false, 0);
				func_342(iLocal_507);
				return 1;
			}
			else
			{
				func_342(iLocal_507);
				return 0;
			}
		}
	}
	else
	{
		return 1;
	}
	return -1;
}

int func_527(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515492[iParam0 /*84*/].f_65;
	}
	return -1;
}

int func_528(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515492[iParam0 /*84*/].f_65.f_2;
	}
	return 0;
}

int func_529(int iParam0)
{
	if (!BitTest(iLocal_298, 15))
	{
		func_340(&iLocal_507, -1135378931, 537254313, 1474183246, joaat("service_spend_robbed_by_mugger"), iParam0, 4, 3);
		func_532(&uLocal_508, 0, 0);
		MISC::SET_BIT(&iLocal_298, 15);
	}
	else if (func_531(iLocal_507) || func_530(&uLocal_508, 10000, 0))
	{
		return 1;
	}
	return 0;
}

int func_530(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return 1;
	}
	func_522(uParam0, bParam2, 0);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam2)
	{
		if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), *uParam0)) >= iParam1)
		{
			return 1;
		}
	}
	else if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(MISC::GET_GAME_TIMER(), *uParam0)) >= iParam1)
	{
		return 1;
	}
	return 0;
}

int func_531(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 15)
	{
		return Global_4515492[iParam0 /*84*/].f_65.f_2 != 1;
	}
	return 0;
}

void func_532(var uParam0, bool bParam1, bool bParam2)
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

void func_533(int iParam0, bool bParam1)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iParam0))
		{
			if (!func_534(iParam0))
			{
				if (BitTest(Local_81.f_2, 13))
				{
					TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 17, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, false);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, false);
				}
				else
				{
					if (bParam1)
					{
						TASK::CLEAR_PED_TASKS(NETWORK::NET_TO_PED(iParam0));
					}
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(NETWORK::NET_TO_PED(iParam0), 1, true);
				}
			}
		}
		func_264(&iParam0);
	}
}

int func_534(int iParam0)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		return PED::IS_PED_INJURED(NETWORK::NET_TO_PED(iParam0));
	}
	return 1;
}

int func_535(int iParam0, bool bParam1)
{
	if (Global_80337)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0) && (!bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("TestDrive", 2))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "TestDrive"))
				{
					return DECORATOR::DECOR_GET_BOOL(iParam0, "TestDrive");
				}
			}
		}
	}
	return 0;
}

int func_536(int iParam0)
{
	int iVar0;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
	}
	if (PED::IS_PED_JACKING(iParam0))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_ENTERING(iParam0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_546(iLocal_306))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iLocal_306), true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_537(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_IN_ANY_BOAT(iParam0) || VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar0)))
		{
			if (!ENTITY::IS_ENTITY_IN_WATER(iVar0))
			{
				return 0;
			}
		}
		if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("trailersmall2"))
		{
			return 0;
		}
	}
	return 1;
}

int func_537(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

Vector3 func_538(struct<3> Param0)
{
	float fVar0;
	float fVar1;
	
	fVar0 = SYSTEM::VMAG(Param0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		Param0 = { Param0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		Param0.f_0 = 0f;
		Param0.f_1 = 0f;
		Param0.f_2 = 0f;
	}
	return Param0;
}

int func_539(int iParam0)
{
	var uVar0;
	
	uVar0 = func_540(iParam0);
	return uVar0;
}

int func_540(int iParam0)
{
	if (iParam0 > -1)
	{
		if (iParam0 == PLAYER::PLAYER_ID())
		{
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		}
		else if (func_317(iParam0))
		{
			return Global_1845298[iParam0 /*881*/].f_198.f_3;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

float func_541(int iParam0)
{
	if (!BitTest(Local_81.f_10[iParam0 /*7*/].f_2, 2))
	{
		return 1f;
	}
	return 3f;
}

int func_542(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && !ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(iParam0, iParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, -1, false) == iParam0)
			{
				return -1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 0, false) == iParam0)
			{
				return 0;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 1, false) == iParam0)
			{
				return 1;
			}
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, 2, false) == iParam0)
			{
				return 2;
			}
		}
	}
	return -2;
}

int func_543(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, bParam1))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, bParam1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar0));
				if (iVar1 == 1)
				{
					iVar3 = -1;
					return iVar3;
				}
				iVar2 = 0;
				while (iVar2 < iVar1)
				{
					iVar3 = (iVar2 - 1);
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iVar0, iVar3, false))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, iVar3, false) == iParam0)
						{
							return iVar3;
						}
					}
					iVar2++;
				}
			}
		}
	}
	return iVar3;
}

int func_544(int iParam0)
{
	if ((!PED::IS_PED_INJURED(iParam0) && !PED::IS_PED_BEING_STUNNED(iParam0, 0)) && !PED::IS_PED_RAGDOLL(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_545(int iParam0, int iParam1)
{
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1) == 0)
	{
		return 1;
	}
	return 0;
}

int func_546(int iParam0)
{
	if (PLAYER::IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_547(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "AttributeDamage"))
	{
		iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "AttributeDamage");
	}
	MISC::SET_BIT(&iVar0, iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "AttributeDamage", iVar0);
}

void func_548()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	
	bVar0 = BitTest(Local_81.f_2, 6);
	bVar1 = BitTest(Local_81.f_2, 10);
	func_553();
	if (bLocal_304 != 1)
	{
		if (BitTest(Local_81.f_3, 12))
		{
			func_550();
		}
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_315))
	{
		func_549(&iLocal_315, 0);
	}
	iVar3 = 0;
	while (iVar3 < func_519(bLocal_304))
	{
		iLocal_299[iVar3] = 0;
		iVar3++;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_81.f_42 = -1;
		Local_81.f_5 = iLocal_311;
		Local_81.f_6 = iLocal_311;
		Local_81.f_7 = iLocal_311;
		Local_81.f_1 = 0;
		Local_81.f_4 = 0;
		Local_81.f_2 = 0;
		iVar3 = 0;
		while (iVar3 < func_519(bLocal_304))
		{
			bVar2 = BitTest(Local_81.f_10[iVar3 /*7*/].f_2, 6);
			Local_81.f_10[iVar3 /*7*/].f_2 = 0;
			Local_81.f_10[iVar3 /*7*/].f_6 = -1;
			if (bVar2)
			{
				MISC::SET_BIT(&(Local_81.f_10[iVar3 /*7*/].f_2), 6);
			}
			iVar3++;
		}
	}
	Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1 = 0;
	Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_2 = -1;
	iLocal_298 = 0;
	if (bVar0)
	{
		MISC::SET_BIT(&(Local_81.f_2), 6);
	}
	if (bVar1)
	{
		MISC::SET_BIT(&(Local_81.f_2), 11);
		MISC::SET_BIT(&iLocal_298, 8);
	}
	MISC::SET_BIT(&iLocal_298, 4);
	MISC::SET_BIT(&iLocal_298, 11);
}

void func_549(int* iParam0, bool bParam1)
{
	bool bVar0;
	struct<8> Var1;
	
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::REMOVE_BLIP(iParam0);
		bVar0 = true;
	}
	if (HUD::DOES_BLIP_EXIST(iParam0->f_1) && !bParam1)
	{
		HUD::REMOVE_BLIP(&(iParam0->f_1));
		bVar0 = true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0->f_7, false))
		{
			if (HUD::DOES_PED_HAVE_AI_BLIP(iParam0->f_7))
			{
				HUD::SET_PED_HAS_AI_BLIP(iParam0->f_7, false);
			}
		}
		bVar0 = true;
	}
	if (bVar0)
	{
		*iParam0 = { Var1 };
	}
}

void func_550()
{
	switch (bLocal_304)
	{
		case 0:
			func_552(&(Global_1837402[3]));
			break;
		
		case 1:
			func_551();
			break;
	}
}

void func_551()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837354[iVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1837354[iVar0]);
			iVar0++;
		}
	}
}

void func_552(var uParam0)
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837354[iVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837354[iVar0]);
			iVar0++;
		}
	}
}

void func_553()
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < func_519(bLocal_304))
	{
		bVar1 = false;
		if (bLocal_304 == 0)
		{
			if (!BitTest(Local_81.f_2, 1))
			{
				bVar1 = true;
			}
		}
		func_533(Local_81.f_10[iVar0 /*7*/], bVar1);
		iVar0++;
	}
}

void func_554()
{
	func_555();
	if (bLocal_304 != 1)
	{
		func_523();
	}
}

void func_555()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	while (iVar0 < func_519(bLocal_304))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_81.f_10[iVar0 /*7*/]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_81.f_10[iVar0 /*7*/]))
			{
				iVar1 = NETWORK::NET_TO_PED(Local_81.f_10[iVar0 /*7*/]);
				if (!ENTITY::IS_ENTITY_DEAD(iVar1, false))
				{
					PED::SET_PED_RESET_FLAG(iVar1, 151, true);
				}
			}
		}
		iVar0++;
	}
	if (Global_2733190.f_889)
	{
	}
	if (bLocal_304 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_306)
		{
			if (BitTest(Local_81.f_1, 0))
			{
				if (!MISC::IS_INCIDENT_VALID(iLocal_488))
				{
					if (func_6(iLocal_306, 1, 1))
					{
						if (Local_81.f_50)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(15, PLAYER::GET_PLAYER_PED(iLocal_306), 4, 0f, &iLocal_488, -1467815081, 0);
						}
						else if (Local_81.f_52)
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(16, PLAYER::GET_PLAYER_PED(iLocal_306), 4, 0f, &iLocal_488, -1467815081, Local_81.f_53);
						}
						else
						{
							MISC::CREATE_INCIDENT_WITH_ENTITY(14, PLAYER::GET_PLAYER_PED(iLocal_306), 4, 0f, &iLocal_488, 0, 0);
						}
					}
				}
				if (Global_2733190.f_889)
				{
					if (!BitTest(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1, 3))
					{
						MISC::SET_BIT(&(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_1), 3);
					}
				}
			}
		}
	}
	else if (bLocal_304 == 0)
	{
		if (Local_81.f_42 != -1)
		{
			if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_81.f_10[Local_81.f_42 /*7*/]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(Local_81.f_10[Local_81.f_42 /*7*/]), false) && !func_558(NETWORK::NET_TO_PED(Local_81.f_10[Local_81.f_42 /*7*/])))
				{
					if (Local_81.f_10[Local_81.f_42 /*7*/].f_5 == 3)
					{
						func_556(Local_81.f_10[Local_81.f_42 /*7*/], &iLocal_315, -1082130432, 0, 1, 0, 0, -1, -1, 1, 0, 0, 1, 0);
						if (HUD::DOES_BLIP_EXIST(iLocal_315))
						{
							if (!BitTest(iLocal_298, 6))
							{
								HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_315, "FM_MGR_BLP");
								MISC::SET_BIT(&iLocal_298, 6);
							}
						}
					}
				}
				else if (HUD::DOES_BLIP_EXIST(iLocal_315))
				{
					func_549(&iLocal_315, 0);
				}
			}
			if (PLAYER::PLAYER_ID() == iLocal_305)
			{
				if (!BitTest(iLocal_298, 14))
				{
					if (func_411("MPCT_mugsuc", "LAMAR", 19))
					{
						MISC::SET_BIT(&iLocal_298, 14);
					}
				}
			}
		}
	}
}

void func_556(int iParam0, int* iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, int iParam10, int iParam11, bool bParam12, int iParam13)
{
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam0))
	{
		if (func_173(0))
		{
			Global_2673273 = PLAYER::PLAYER_ID();
		}
		if (bParam3)
		{
			func_557(NETWORK::NET_TO_PED(iParam0), iParam1, 1, Global_2673273, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13);
		}
		else
		{
			func_557(NETWORK::NET_TO_PED(iParam0), iParam1, -1, Global_2673273, bParam4, bParam5, fParam2, sParam6, iParam7, iParam8, bParam9, iParam10, iParam11, bParam12, iParam13);
		}
	}
	else if (HUD::DOES_BLIP_EXIST(*iParam1))
	{
		func_549(iParam1, 0);
	}
}

int func_557(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, float fParam6, char* sParam7, int iParam8, int iParam9, bool bParam10, var uParam11, var uParam12, bool bParam13, var uParam14)
{
	bool bVar0;
	int iVar1;
	
	if (iParam3 == 0)
	{
		iParam3 = PLAYER::GET_PLAYER_INDEX();
	}
	if (fParam6 < 0f)
	{
		fParam6 = 100f;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(iParam0))
		{
			bVar0 = true;
			if (PED::IS_PED_IN_FLYING_VEHICLE(iParam0) && uParam11)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				if (iParam8 == -1)
				{
					HUD::SET_PED_HAS_AI_BLIP(iParam0, true);
				}
				else
				{
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(iParam0, true, iParam8);
				}
				uParam1->f_7 = iParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(iParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(iParam0, fParam6);
				if (HUD::DOES_BLIP_EXIST(*uParam1))
				{
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
				}
			}
		}
		if (iParam9 != -1)
		{
			if (bParam13)
			{
				HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
			}
			else
			{
				iVar1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
				if (HUD::DOES_BLIP_EXIST(iVar1) && HUD::GET_BLIP_SPRITE(iVar1) != iParam9)
				{
					HUD::SET_PED_AI_BLIP_SPRITE(iParam0, iParam9);
				}
			}
		}
		HUD::SET_PED_AI_BLIP_FORCED_ON(iParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(iParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(iParam0);
		if (!iParam9 == -1 || uParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
				{
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					if (bParam10)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					}
					else
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					}
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
		if (!BitTest(uParam1->f_6, 2))
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				MISC::SET_BIT(&(uParam1->f_6), 2);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(iParam0);
			if (!BitTest(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
					{
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
					}
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
						if (bParam10)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						}
						else
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
						}
						HUD::END_TEXT_COMMAND_SET_BLIP_NAME(uParam1->f_1);
					}
					HUD::SET_BLIP_PRIORITY(uParam1->f_1, 7);
					MISC::SET_BIT(&(uParam1->f_6), 3);
				}
			}
			else if (!HUD::DOES_BLIP_EXIST(uParam1->f_1))
			{
				uParam1->f_1 = 0;
				MISC::CLEAR_BIT(&(uParam1->f_6), 3);
			}
		}
		else if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
		{
			uParam1->f_1 = 0;
			MISC::CLEAR_BIT(&(uParam1->f_6), 3);
		}
		else if ((uParam14 && iParam9 == 41) && HUD::DOES_BLIP_EXIST(*uParam1))
		{
			HUD::SET_BLIP_SCALE(*uParam1, 0.4f);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

int func_558(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(iParam0, false);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iVar0, "MPBitset"))
				{
					iVar1 = DECORATOR::DECOR_GET_INT(iVar0, "MPBitset");
				}
				if (BitTest(iVar1, 12))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_559()
{
	return Local_81.f_0;
}

int func_560(int iParam0)
{
	return Local_137[iParam0 /*5*/];
}

void func_561()
{
	if (PLAYER::PLAYER_ID() == iLocal_306)
	{
		if (Global_33967)
		{
			if (!BitTest(Local_137[bLocal_313 /*5*/].f_1, 4))
			{
				MISC::SET_BIT(&(Local_137[bLocal_313 /*5*/].f_1), 4);
			}
		}
		else
		{
			MISC::CLEAR_BIT(&(Local_137[bLocal_313 /*5*/].f_1), 4);
		}
	}
}

void func_562()
{
	bool bVar0;
	
	bVar0 = false;
	if (PLAYER::PLAYER_ID() == iLocal_305)
	{
		if (BitTest(Global_1835541, 0))
		{
			MISC::CLEAR_BIT(&Global_1835541, false);
			bVar0 = true;
		}
		if (!BitTest(Local_137[iLocal_305 /*5*/].f_1, 2))
		{
			if (BitTest(Local_81.f_1, 11))
			{
				MISC::SET_BIT(&(Local_137[iLocal_305 /*5*/].f_1), 2);
				bVar0 = true;
			}
		}
		else if (!BitTest(Local_81.f_1, 11))
		{
			MISC::CLEAR_BIT(&(Local_137[iLocal_305 /*5*/].f_1), 2);
		}
		if (bVar0)
		{
			Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = func_566();
			func_563(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		}
	}
	else if (Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 != Local_81.f_44)
	{
		Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4 = Local_81.f_44;
		func_563(Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/].f_4);
		bVar0 = true;
	}
}

void func_563(var uParam0)
{
	switch (bLocal_304)
	{
		case 0:
			func_565(&(Global_1837402[3]), uParam0);
			break;
		
		case 1:
			func_564(uParam0);
			break;
	}
}

void func_564(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam0, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837354[bVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, -1467815081, Global_1837354[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837354[bVar0], -1467815081);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, -1467815081, Global_1837354[bVar0]);
		}
		bVar0++;
	}
}

void func_565(var uParam0, var uParam1)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 32)
	{
		if (BitTest(uParam1, bVar0))
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_1837354[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, *uParam0, Global_1837354[bVar0]);
		}
		else
		{
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, Global_1837354[bVar0], *uParam0);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(3, *uParam0, Global_1837354[bVar0]);
		}
		bVar0++;
	}
}

int func_566()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (bLocal_304 == 1 || bLocal_304 == 0)
		{
			if (iLocal_305 == PLAYER::INT_TO_PLAYERINDEX(iVar1))
			{
				MISC::SET_BIT(&iVar0, bVar1);
			}
		}
		else if (PLAYER::PLAYER_ID() == PLAYER::INT_TO_PLAYERINDEX(bVar1))
		{
			MISC::SET_BIT(&iVar0, bVar1);
		}
		else if (func_6(PLAYER::INT_TO_PLAYERINDEX(bVar1), 0, 1))
		{
			if (func_59(PLAYER::INT_TO_PLAYERINDEX(bVar1)))
			{
				MISC::SET_BIT(&iVar0, bVar1);
			}
		}
		bVar1++;
	}
	return iVar0;
}

void func_567()
{
	switch (bLocal_304)
	{
		case 0:
			if (!BitTest(iLocal_298, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
				{
					if (func_6(iLocal_306, 1, 1))
					{
						func_360("GC_TCK_60", iLocal_306, 0, 0, 0, 1, 0);
						MISC::SET_BIT(&iLocal_298, 11);
					}
				}
			}
			if (!BitTest(iLocal_298, 12))
			{
				if (BitTest(Local_81.f_1, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
					{
						if (func_6(iLocal_306, 1, 1))
						{
							func_360("GC_TCK_62", iLocal_306, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_298, 12);
						}
					}
				}
			}
			if (BitTest(Local_81.f_2, 10))
			{
				if (!BitTest(iLocal_298, 8))
				{
					if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
					{
						if (func_6(iLocal_306, 1, 1))
						{
							func_360("GC_TCK_65", iLocal_306, 0, 0, 0, 1, 0);
							MISC::SET_BIT(&iLocal_298, 8);
						}
					}
				}
			}
			else if (!BitTest(iLocal_298, 13))
			{
				if (!BitTest(Local_81.f_2, 11))
				{
					if (BitTest(Local_81.f_1, 8))
					{
						if (BitTest(Local_81.f_2, 6))
						{
							if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
							{
								if (func_6(iLocal_306, 1, 1))
								{
									func_360("GC_TCK_63", iLocal_306, 0, 0, 0, 1, 0);
									MISC::SET_BIT(&iLocal_298, 13);
								}
							}
						}
					}
				}
			}
			break;
		
		case 1:
			if (!BitTest(iLocal_298, 11))
			{
				if (PLAYER::PLAYER_ID() == iLocal_305)
				{
					if (func_6(iLocal_306, 1, 1) && PLAYER::PLAYER_ID() != iLocal_306)
					{
						if (Local_81.f_50)
						{
							func_360("HS_SUCC", iLocal_306, 0, 0, 0, 1, 0);
						}
						else if (Local_81.f_52)
						{
							func_360("GO_ASS_SUCC", iLocal_306, 0, 0, 0, 1, 0);
						}
						else
						{
							func_360("GC_TCK_70", iLocal_306, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_298, 11);
					}
				}
				else if (PLAYER::PLAYER_ID() == iLocal_306)
				{
					if (func_6(iLocal_305, 1, 1))
					{
						if (Local_81.f_50)
						{
							if (Local_81.f_51)
							{
								func_569("HS_A_SUCC", 0);
							}
							else
							{
								func_360("HS_SENT", iLocal_305, 0, 0, 0, 1, 0);
							}
						}
						else if (Local_81.f_52)
						{
							func_360("GO_ASS_SENT", iLocal_305, 0, 0, 0, 1, 0);
						}
						else
						{
							func_360("GC_TCK_71", iLocal_305, 0, 0, 0, 1, 0);
						}
						MISC::SET_BIT(&iLocal_298, 11);
					}
				}
			}
			if (!BitTest(iLocal_298, 10))
			{
				if (BitTest(Local_81.f_1, 0))
				{
					if (BitTest(Local_81.f_3, 6))
					{
						if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
						{
							if (func_6(iLocal_306, 0, 1))
							{
								func_568(-1, 1);
								if (Local_81.f_50)
								{
									if (!Local_81.f_51)
									{
										func_360("HS_KILLED", iLocal_306, 0, 0, 0, 1, 0);
									}
								}
								else if (Local_81.f_52)
								{
									func_360("GO_ASS_KILL", iLocal_306, 0, 0, 0, 1, 0);
								}
								else
								{
									func_360("GC_TCK_73", iLocal_306, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_298, 10);
							}
						}
					}
				}
			}
			if (!BitTest(iLocal_298, 9))
			{
				if (BitTest(Local_81.f_1, 0))
				{
					if (BitTest(Local_81.f_3, 7))
					{
						if (PLAYER::PLAYER_ID() == iLocal_305 && PLAYER::PLAYER_ID() != iLocal_306)
						{
							if (func_6(iLocal_306, 0, 1))
							{
								if (Local_81.f_50)
								{
									func_360("HS_ESCAPED", iLocal_306, 0, 0, 0, 1, 0);
								}
								else if (Local_81.f_52)
								{
									func_360("GO_ASS_ESC", iLocal_306, 0, 0, 0, 1, 0);
								}
								else
								{
									func_360("GC_TCK_75", iLocal_306, 0, 0, 0, 1, 0);
								}
								MISC::SET_BIT(&iLocal_298, 9);
							}
						}
					}
				}
			}
			break;
	}
}

void func_568(bool bParam0, int iParam1)
{
	if (Global_1836744)
	{
		if (Global_1836748 && Global_1845298[PLAYER::PLAYER_ID() /*881*/] != 148)
		{
			if (Global_1836207.f_14 == PLAYER::INT_TO_PLAYERINDEX(iParam0))
			{
				Global_1881759 = (Global_1881759 + iParam1);
			}
		}
		else
		{
			Global_1881759 = (Global_1881759 + iParam1);
		}
	}
}

int func_569(char* sParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = -1;
	iVar1 = 1;
	if (bParam1)
	{
		iVar1 = 2;
	}
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
	iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
	func_361(0, sParam0, iVar1, 0, 0, 0, 0, 0, 1, 0, 0, 0);
	return iVar0;
}

void func_570()
{
	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != Local_81.f_45)
	{
		if (func_578(Local_81.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= Local_81.f_45)
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_81.f_45);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false, 0) != Local_81.f_46)
	{
		if (func_577(Local_81.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_VEHICLES(false) <= Local_81.f_46)
			{
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_81.f_46);
			}
		}
	}
	if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false, 0) != Local_81.f_47)
	{
		if (func_571(Local_81.f_45, 0, 1))
		{
			if (NETWORK::GET_NUM_CREATED_MISSION_OBJECTS(false) <= Local_81.f_47)
			{
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_81.f_47);
			}
		}
	}
}

bool func_571(int iParam0, bool bParam1, bool bParam2)
{
	return func_572(2, iParam0, 1, bParam1, bParam2);
}

int func_572(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	
	if (!BitTest(Global_1690407, 0))
	{
		return 0;
	}
	if ((bParam2 && !bParam3) && iParam1 <= (func_576(iParam0) - func_575(iParam0, 0)))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_575(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_576(iParam0) - func_574(iParam0));
		}
		else
		{
			if (bParam2)
			{
				iVar0 = (iParam1 - func_575(iParam0, 0));
			}
			else
			{
				iVar0 = iParam1;
			}
			iVar1 = (func_576(iParam0) - func_575(iParam0, 1));
		}
		if (!bParam4 && Global_1845298[PLAYER::PLAYER_ID() /*881*/] != 3)
		{
			iVar1 = (iVar1 - func_573(iParam0));
		}
		if (iVar0 < iVar1)
		{
			return 1;
		}
	}
	return 0;
}

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 10;
			break;
		
		case 1:
			return 10;
			break;
		
		case 2:
			return 10;
			break;
	}
	return 0;
}

int func_574(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690407.f_1;
			break;
		
		case 1:
			return Global_1690407.f_2;
			break;
		
		case 2:
			return Global_1690407.f_3;
			break;
	}
	return 0;
}

int func_575(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_223;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			}
			break;
		
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_224;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			}
			break;
		
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			{
				return Global_2658293[iVar0 /*468*/].f_225;
			}
			else
			{
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			}
			break;
	}
	return 0;
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1690415;
			break;
		
		case 1:
			return Global_1690416;
			break;
		
		case 2:
			return Global_1690417;
			break;
	}
	return 0;
}

bool func_577(int iParam0, bool bParam1, bool bParam2)
{
	return func_572(1, iParam0, 1, bParam1, bParam2);
}

bool func_578(int iParam0, bool bParam1, bool bParam2)
{
	return func_572(0, iParam0, 1, bParam1, bParam2);
}

void func_579()
{
	if (Local_81.f_50)
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			func_581(3);
		}
		else if (PLAYER::PLAYER_ID() == iLocal_306)
		{
			func_581(4);
		}
	}
	else if (Local_81.f_52)
	{
	}
	func_580();
}

void func_580()
{
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_581(bool bParam0)
{
	MISC::CLEAR_BIT(&(Global_1892925[PLAYER::PLAYER_ID() /*615*/].f_10.f_5), iParam0);
}

int func_582()
{
	if (Global_1575066 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 1;
		}
	}
	if (func_588())
	{
		return 1;
	}
	if (Global_2699678)
	{
		return 1;
	}
	if (func_587())
	{
		return 1;
	}
	if (func_586(159))
	{
		if (!func_585())
		{
			return 1;
		}
	}
	if (func_586(157))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return 1;
	}
	if (func_583() != 0)
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(func_583()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

int func_583()
{
	switch (func_127())
	{
		case 0:
			return func_584();
			break;
		
		case 2:
			return joaat("creator");
			break;
	}
	return 0;
}

int func_584()
{
	switch (Global_2699787)
	{
		case 0:
			return joaat("freemode");
		
		default:
	}
	return joaat("freemode");
}

bool func_585()
{
	return Global_2685152.f_726;
}

int func_586(int iParam0)
{
	if (SCRIPT::GET_EVENT_EXISTS(1, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_587()
{
	return Global_2697072;
}

bool func_588()
{
	return Global_2685152.f_721;
}

void func_589()
{
	SYSTEM::WAIT(0);
}

void func_590(struct<21> Param0)
{
	func_596(32, Param0);
	func_595(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_81, 56, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_137, 161, 0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	if (!func_594())
	{
		func_282();
	}
	bLocal_304 = Param0.f_16;
	iLocal_305 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_17);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_305))
	{
	}
	iLocal_306 = PLAYER::INT_TO_PLAYERINDEX(Param0.f_18);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iLocal_306))
	{
		iLocal_307 = MISC::GET_HASH_KEY(PLAYER::GET_PLAYER_NAME(iLocal_306));
	}
	if (func_593(iLocal_305, 3) && bLocal_304 == 1)
	{
		Local_81.f_50 = 1;
		if (func_593(iLocal_306, 4))
		{
			Local_81.f_51 = 1;
		}
	}
	if (bLocal_304 == 1)
	{
		if (func_592(iLocal_305))
		{
			Local_81.f_52 = 1;
			Local_81.f_53 = func_591(iLocal_305);
		}
	}
	Local_308 = { Param0.f_10 };
	if (bLocal_304 == 1)
	{
		if (PLAYER::PLAYER_ID() == iLocal_305)
		{
			MISC::SET_BIT(&Global_1835541, false);
		}
	}
	Global_1926918 = 0;
	Global_1926919 = 0;
	if (bLocal_304 == 1)
	{
		Global_2733190.f_889 = 0;
	}
	Local_137[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*5*/] = 0;
}

var func_591(int iParam0)
{
	return Global_1845298[iParam0 /*881*/].f_173.f_4;
}

bool func_592(int iParam0)
{
	return Global_1845298[iParam0 /*881*/].f_173 != func_13();
}

bool func_593(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_5, iParam1);
}

int func_594()
{
	int iVar0;
	
	iVar0 = 0;
	while (true)
	{
		iVar0++;
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return 0;
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return 1;
		}
		if (func_588())
		{
			return 0;
		}
		if (func_586(157))
		{
			return 0;
		}
		if (iVar0 >= 3600)
		{
			return 0;
		}
		SYSTEM::WAIT(0);
	}
	return 0;
}

int func_595(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	while (iVar0 != 2)
	{
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			if (!bParam2)
			{
				func_580();
			}
			else
			{
				return 0;
			}
		}
		if (!func_173(0))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
				{
					if (!bParam2)
					{
						func_580();
					}
					else
					{
						return 0;
					}
				}
				if (func_588())
				{
					if (!bParam2)
					{
						func_580();
					}
					else
					{
						return 0;
					}
				}
				if (func_586(157))
				{
					if (!bParam2)
					{
						func_580();
					}
					else
					{
						return 0;
					}
				}
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
				{
					func_580();
				}
				else
				{
					return 0;
				}
			}
		}
		SYSTEM::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (iParam1 > -1)
	{
		Global_1574669 = iVar0;
	}
	if (iParam0 == 0)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			if (!bParam2)
			{
				func_580();
			}
			else
			{
				return 0;
			}
		}
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (!bParam2)
		{
			func_580();
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_596(int iParam0, struct<17> Param1, var uParam18, var uParam19, var uParam20, var uParam21)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_580();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, Param1.f_16);
}

