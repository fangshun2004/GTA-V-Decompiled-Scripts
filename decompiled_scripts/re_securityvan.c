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
	int iLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	char* sLocal_38 = NULL;
	float fLocal_39 = 0f;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	float fLocal_48 = 0f;
	float fLocal_49 = 0f;
	float fLocal_50 = 0f;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	struct<3> Local_60 = { 0, 0, 0 } ;
	int iLocal_63 = 0;
	bool bLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68[2] = { 0, 0 };
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77[2] = { 0, 0 };
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	struct<3> Local_84[2];
	float fLocal_91[2] = { 0f, 0f };
	struct<3> Local_94 = { 0, 0, 0 } ;
	float fLocal_97 = 0f;
	struct<3> Local_98 = { 0, 0, 0 } ;
	struct<3> Local_101 = { 0, 0, 0 } ;
	struct<3> Local_104 = { 0, 0, 0 } ;
	struct<3> Local_107 = { 0, 0, 0 } ;
	struct<3> Local_110 = { 0, 0, 0 } ;
	struct<3> Local_113 = { 0, 0, 0 } ;
	struct<3> Local_116 = { 0, 0, 0 } ;
	float fLocal_119 = 0f;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	bool bLocal_124 = 0;
	bool bLocal_125 = 0;
	bool bLocal_126 = 0;
	bool bLocal_127 = 0;
	bool bLocal_128 = 0;
	bool bLocal_129 = 0;
	bool bLocal_130 = 0;
	bool bLocal_131 = 0;
	int iLocal_132 = 0;
	int iLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135[2] = { 0, 0 };
	bool bLocal_138 = 0;
	bool bLocal_139 = 0;
	int iLocal_140[2] = { 0, 0 };
	int iLocal_143 = 0;
	int iLocal_144 = 0;
	int iLocal_145 = 0;
	int iLocal_146 = 0;
	int iLocal_147 = 0;
	int iLocal_148 = 0;
	int iLocal_149 = 0;
	int iLocal_150 = 0;
	int iLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153 = 0;
	int iLocal_154 = 0;
	int iLocal_155 = 0;
	char[] cLocal_156[8] = 0;
	struct<10> Local_157[16];
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
	var uLocal_324 = -1;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 1000;
	var uLocal_332 = 1000;
	var uLocal_333 = 0;
	var uLocal_334 = 8;
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
	var uLocal_481 = 1;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	int iLocal_484 = 0;
	int iLocal_485 = 0;
	float fLocal_486 = 0f;
	struct<3> Local_487 = { 0, 0, 0 } ;
	struct<3> Local_490 = { 0, 0, 0 } ;
	int iLocal_493 = 0;
	struct<3> Local_494 = { 0, 0, 0 } ;
	float fLocal_497 = 0f;
	int iLocal_498[2] = { 0, 0 };
	int iLocal_501 = 0;
	struct<3> Local_502 = { 0, 0, 0 } ;
	struct<3> Local_505 = { 0, 0, 0 } ;
	struct<3> Local_508 = { 0, 0, 0 } ;
	int iLocal_511 = 0;
	int iLocal_512 = 0;
	bool bLocal_513 = 0;
	int iLocal_514 = 0;
	float fLocal_515 = 0f;
	int iLocal_516 = 0;
	int iLocal_517 = 0;
	struct<3> Local_518 = { 0, 0, 0 } ;
	int iLocal_521[2] = { 0, 0 };
	int iLocal_524 = 0;
	float fLocal_525 = 0f;
	float fLocal_526 = 0f;
	int iLocal_527 = 0;
	int iLocal_528 = 0;
	int iLocal_529[2] = { 0, 0 };
	int iLocal_532[2] = { 0, 0 };
	struct<2> ScriptParam_0 = { 0, 5 } ;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
	var uScriptParam_16 = 0;
	var uScriptParam_17 = 5;
	var uScriptParam_18 = 0;
	var uScriptParam_19 = 0;
	var uScriptParam_20 = 0;
	var uScriptParam_21 = 0;
	var uScriptParam_22 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
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
	iLocal_35 = 3;
	sLocal_38 = "NULL";
	fLocal_39 = 0f;
	fLocal_43 = -0.0375f;
	fLocal_44 = 0.17f;
	fLocal_48 = 80f;
	fLocal_49 = 140f;
	fLocal_50 = 180f;
	iLocal_56 = 1;
	iLocal_57 = 65;
	iLocal_58 = 49;
	iLocal_59 = 64;
	Local_98 = { 0.0203f, -3.1441f, 0.5027f };
	Local_101 = { 90f, 0f, 0f };
	Local_107 = { 0f, 0f, 0f };
	Local_110 = { 0f, 0f, 0f };
	iLocal_146 = 1;
	iLocal_147 = 1;
	cLocal_156 = "RESECAU";
	iLocal_482 = -1;
	fLocal_486 = -3.55f;
	Local_487 = { 0.014f, -0.9111f, 1.2317f };
	Local_490 = { 0f, -3.4368f, 1.2317f };
	iLocal_511 = -1;
	iLocal_512 = -1;
	iLocal_524 = -1;
	Local_104 = { Local_104 };
	Local_104 = { ScriptParam_0.f_1[0 /*3*/] };
	if (SYSTEM::VDIST(Local_104, -337.3338f, -1460.373f, 29.5668f) < 5f)
	{
		bLocal_64 = true;
	}
	else if (SYSTEM::VDIST(Local_104, -588.4711f, -866.9462f, 25.3292f) < 5f)
	{
		bLocal_64 = 2;
	}
	else if (SYSTEM::VDIST(Local_104, -389f, 6061f, 31f) < 5f)
	{
		bLocal_64 = 3;
	}
	else if (SYSTEM::VDIST(Local_104, -600f, -1094f, 22.76f) < 5f)
	{
		bLocal_64 = 4;
	}
	else if (SYSTEM::VDIST(Local_104, -1025f, -1086f, 2f) < 5f)
	{
		bLocal_64 = 5;
	}
	else if (SYSTEM::VDIST(Local_104, -595.5618f, -667.7235f, 31.0544f) < 5f)
	{
		bLocal_64 = 6;
	}
	else if (SYSTEM::VDIST(Local_104, 3018.384f, 3634.017f, 70.4076f) < 5f)
	{
		bLocal_64 = 7;
	}
	else if (SYSTEM::VDIST(Local_104, -2815.661f, 2208.171f, 27.8382f) < 5f)
	{
		bLocal_64 = 8;
	}
	else if (SYSTEM::VDIST(Local_104, 856.7742f, -2067.845f, 29.0704f) < 5f)
	{
		bLocal_64 = 9;
	}
	else if (SYSTEM::VDIST(Local_104, 805.1932f, -703.1327f, 28.1632f) < 5f)
	{
		bLocal_64 = 10;
	}
	else
	{
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	if (Global_4)
	{
		if (bLocal_64 != 2)
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
	}
	else
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_68[iVar0], iLocal_71, false))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_68[iVar0], iLocal_71, -1, func_249(iLocal_71), 1073741824, 1, 0);
						}
					}
					else
					{
						TASK::TASK_STAND_STILL(iLocal_68[iVar0], 10000);
					}
				}
				iVar0++;
			}
			func_232();
		}
		if (!func_192(Local_104, 9, bLocal_64, 1, 0))
		{
			SCRIPT::TERMINATE_THIS_THREAD();
		}
		else
		{
			func_189(-1);
		}
	}
	func_188();
	iLocal_82 = PED::ADD_SCENARIO_BLOCKING_AREA(Local_94 + Vector(30f, 30f, 30f), Local_94 - Vector(30f, 30f, 30f), false, true, true, true, 1);
	while (true)
	{
		SYSTEM::WAIT(0);
		func_185(&uLocal_334);
		if (!func_184())
		{
			if (func_183())
			{
				func_232();
			}
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_SV", 0);
			switch (iLocal_527)
			{
				case 0:
					if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() && !func_171())
					{
						if (func_162())
						{
							if ((iLocal_63 == 3 && !(CAM::IS_SPHERE_VISIBLE(Local_94, 3f) && func_161(PLAYER::PLAYER_PED_ID(), Local_94, 1) < 150f)) || iLocal_63 != 3)
							{
								if (iLocal_63 == 3)
								{
									if (!CAM::IS_SPHERE_VISIBLE(Local_94, 8f))
									{
										MISC::CLEAR_AREA(Local_94, 4f, true, false, false, false);
									}
									iLocal_65 = 4;
									bLocal_126 = true;
								}
								else
								{
									iLocal_65 = 1;
								}
								func_160();
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && iLocal_63 == 3)
								{
									VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_71, 5f);
								}
								SYSTEM::SETTIMERA(0);
								iLocal_527++;
							}
						}
					}
					else
					{
						func_232();
					}
					break;
				
				case 1:
					if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
					{
						if (((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) < 10000f || !ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) || (!PED::IS_PED_INJURED(iLocal_68[0]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_68[0]))) || (!PED::IS_PED_INJURED(iLocal_68[1]) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_68[1])))
						{
							iLocal_527++;
						}
					}
					if (func_159())
					{
						iLocal_527++;
					}
					if (iLocal_527 != 1)
					{
						SYSTEM::SETTIMERA(0);
					}
					break;
				
				case 2:
					if (SYSTEM::TIMERA() > 2000)
					{
						if (iLocal_63 != 3)
						{
							func_154();
						}
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_71) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_63 == 3)
						{
							func_149();
							if (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_71) && (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 100f || func_159()))
							{
								func_140(1);
							}
						}
						else if (((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_71) && iLocal_65 == 4) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_113, Local_116, fLocal_119, false, true, 0)) || func_159())
						{
							func_140(1);
						}
						if ((iLocal_65 == 4 && ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) && iLocal_63 != 3)
						{
							if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > 100f)
							{
								func_232();
							}
							else
							{
								func_140(1);
							}
						}
					}
					break;
			}
			if (iLocal_527 > 0)
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && ENTITY::IS_ENTITY_OCCLUDED(iLocal_71))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > 62500f)
					{
						func_232();
					}
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > 10000f && !BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE())
					{
						func_232();
					}
				}
			}
		}
		else
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			if (!HUD::DOES_BLIP_EXIST(iLocal_80))
			{
				if (!func_139(2) && !bLocal_131)
				{
					if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						func_138("SV_VANHELP1", 15000);
						func_137(2);
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
				{
					if (iLocal_528 != 0)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = 0;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				else if (((bLocal_126 && !OBJECT::DOES_PICKUP_EXIST(iLocal_154)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false)) && !bLocal_138)
				{
					if (iLocal_528 != 1)
					{
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = 1;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				else if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
				{
					if (iLocal_528 != 2)
					{
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_154), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = 2;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				if (iLocal_528 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
					{
						func_129(&uLocal_322, iLocal_73, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = -1;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				else if (iLocal_528 == 1)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, true))
					{
						func_129(&uLocal_322, iLocal_71, 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = -1;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				else if (iLocal_528 == 2)
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
					{
						func_106(&uLocal_322, OBJECT::GET_PICKUP_COORDS(iLocal_154), 0, 0, 1, 1, 1);
						if (SYSTEM::VDIST2(OBJECT::GET_PICKUP_COORDS(iLocal_154), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > SYSTEM::POW(50f, 2f))
						{
							iLocal_528 = -1;
							func_136(&uLocal_322, 0, 0, 0);
						}
					}
				}
				if (((!ENTITY::IS_ENTITY_DEAD(iLocal_71, false) && bLocal_126) && !bLocal_128) && (!func_139(0) || (WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), false) && !func_139(1))))
				{
					switch (iLocal_151)
					{
						case 0:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 225f)
							{
								func_138("SV_DOORHELP1", 15000);
								func_137(0);
								iLocal_151++;
							}
							break;
						
						case 1:
							if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
							{
								iLocal_152 = MISC::GET_GAME_TIMER();
								iLocal_151++;
							}
							break;
						
						case 2:
							if ((MISC::GET_GAME_TIMER() - iLocal_152) > 2000 && WEAPON::HAS_PED_GOT_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("weapon_stickybomb"), false))
							{
								func_138("SV_DOORHELP2", 15000);
								func_137(1);
								iLocal_151++;
							}
							break;
						}
				}
				if (bLocal_128 || bLocal_138)
				{
					if (func_105("SV_DOORHELP1") || func_105("SV_DOORHELP2"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
			switch (iLocal_65)
			{
				case 1:
					func_154();
					break;
				
				case 2:
					func_97();
					break;
				
				case 3:
					func_95();
					break;
				
				case 4:
					func_149();
					break;
				
				case 5:
					func_91();
					break;
				
				case 6:
					func_87();
					break;
				
				case 7:
					if (!PED::IS_PED_INJURED(iLocal_68[0]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_68[0]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_68[0], 3);
						}
					}
					if (!PED::IS_PED_INJURED(iLocal_68[1]))
					{
						if (PED::GET_PED_ALERTNESS(iLocal_68[1]) != 3)
						{
							PED::SET_PED_ALERTNESS(iLocal_68[1], 3);
						}
					}
					if (((!PED::IS_PED_INJURED(iLocal_68[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false)) && !PED::IS_PED_INJURED(iLocal_68[1])) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false))
					{
						iLocal_146 = 1;
						func_80(iLocal_68[1]);
						func_78(0, 1);
					}
					else if (iLocal_146 == 1)
					{
						if (PED::IS_PED_INJURED(iLocal_68[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false))
						{
							iLocal_67 = 0;
							iLocal_146 = 0;
						}
						else
						{
							func_80(iLocal_68[1]);
						}
					}
					else if (iLocal_146 == 0)
					{
						if (PED::IS_PED_INJURED(iLocal_68[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false))
						{
							iLocal_146 = -1;
						}
						else
						{
							func_80(iLocal_68[0]);
						}
					}
					break;
				
				case 8:
					func_72();
					break;
				
				case 9:
					func_232();
					break;
			}
			if (func_70())
			{
				func_69(9);
			}
			if ((((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false) == PLAYER::PLAYER_PED_ID()) && !bLocal_130) && iLocal_65 != 8)
			{
				if (bLocal_126)
				{
					func_69(8);
				}
				else
				{
					func_69(5);
				}
			}
			if (bLocal_127)
			{
				if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iLocal_83, joaat("player")) != 5)
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, iLocal_83, joaat("player"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("player"), iLocal_83);
				}
			}
			if (bLocal_128)
			{
				if ((OBJECT::DOES_PICKUP_EXIST(iLocal_154) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_154)) > 250f)
				{
					func_69(9);
				}
			}
			if (!bLocal_138)
			{
				if (func_68())
				{
					bLocal_138 = true;
				}
			}
			else
			{
				iVar1 = 1;
				iVar2 = 0;
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar2]))
				{
					if ((!ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar2], false) && !PED::IS_PED_INJURED(iLocal_68[iVar2])) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_68[0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 10000f)
					{
						iVar1 = 0;
					}
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, false))
						{
							iVar3 = 1;
						}
					}
					if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 10000f && ENTITY::IS_ENTITY_OCCLUDED(iLocal_71)) || SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 62500f)
					{
						iVar3 = 1;
					}
				}
				if (iVar3 && iVar1)
				{
					func_44();
				}
			}
			func_40();
			func_35();
			func_30();
		}
		if (!bLocal_124)
		{
			if (func_29())
			{
				iLocal_144 = MISC::GET_GAME_TIMER();
				bLocal_124 = true;
			}
		}
		if (bLocal_124)
		{
			if (!bLocal_125)
			{
				if ((MISC::GET_GAME_TIMER() - iLocal_144) > 5000)
				{
					PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
					if (func_28() < 30f)
					{
						if (func_4(&Local_157, cLocal_156, "RESEC_COPS", 8, 0, 0, 0))
						{
							bLocal_125 = true;
						}
					}
					else
					{
						bLocal_125 = true;
					}
				}
			}
		}
		if (((MISC::GET_GAME_TIMER() - iLocal_144) > 10000 && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) && !iLocal_143)
		{
			iVar4 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar4 == 0)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_01", 0f);
			}
			else if (iVar4 == 1)
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_02", 0f);
			}
			else
			{
				AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_SEC_TRUCK_03", 0f);
			}
			iLocal_143 = 1;
		}
		if (bLocal_125)
		{
			if ((!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < SYSTEM::POW(50f, 2f))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
					}
					PLAYER::SET_PLAYER_WANTED_CENTRE_POSITION(PLAYER::PLAYER_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
				}
			}
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && func_2())
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
		if (func_1())
		{
			func_69(9);
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 0) > 0f || VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 1) > 0f)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_71) == 3)
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_71, 1);
				}
			}
			if (!bLocal_129)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, false))
				{
					bLocal_129 = true;
				}
			}
			if (!bLocal_129)
			{
				if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 0) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 1) == 0f)
				{
					if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(iLocal_71) == 1)
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_71, 3);
					}
				}
			}
		}
		if (iLocal_148 != 0)
		{
			if ((iLocal_65 == 8 || iLocal_65 == 6) || iLocal_65 == 4)
			{
				EVENT::REMOVE_SHOCKING_EVENT(iLocal_148);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			iVar5 = 0;
			while (iVar5 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar5], false))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[iVar5]))
					{
						if (iLocal_65 == 1)
						{
							if (!iLocal_529[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, "random@security_van", "sec_walk_calm", 8f, true);
								iLocal_529[iVar5] = 1;
							}
						}
						if (iLocal_65 == 7)
						{
							if (!iLocal_532[iVar5])
							{
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, "random@security_van", "sec_idle", 8f, true);
								PED::SET_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, "random@security_van", "sec_walk_panic", 8f, true);
								iLocal_532[iVar5] = 1;
							}
						}
						if (WEAPON::IS_PED_ARMED(iLocal_68[iVar5], 4) && !iLocal_132)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_68[iVar5], true);
							iLocal_132 = 1;
						}
					}
					else
					{
						if (iLocal_529[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, -8f);
							iLocal_529[iVar5] = 0;
						}
						if (iLocal_532[iVar5])
						{
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, -8f);
							iLocal_532[iVar5] = 0;
						}
						if (iLocal_529[iVar5] || iLocal_532[iVar5])
						{
							iLocal_529[iVar5] = 0;
							iLocal_532[iVar5] = 0;
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, -8f);
							PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, -8f);
						}
						if (WEAPON::IS_PED_ARMED(iLocal_68[iVar5], 4) && iLocal_132)
						{
							WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(iLocal_68[iVar5], true);
							iLocal_132 = 0;
						}
					}
				}
				iVar5++;
			}
		}
		else
		{
			iVar5 = 0;
			while (iVar5 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar5]))
				{
					if (iLocal_529[iVar5] || iLocal_532[iVar5])
					{
						iLocal_529[iVar5] = 0;
						iLocal_532[iVar5] = 0;
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 0, -8f);
						PED::CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(iLocal_68[iVar5], 1, -8f);
					}
				}
				iVar5++;
			}
		}
		if (!bLocal_126 && !bLocal_513)
		{
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED(iLocal_73)) && !PED::IS_PED_INJURED(iLocal_68[iLocal_147])) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[iLocal_147], "random@security_van", "sec_hand_override", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[iLocal_147], "random@security_van", "sec_case_into_van_panic", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[iLocal_147], "random@security_van", "sec_case_into_van_calm", 3))
			{
				TASK::TASK_PLAY_ANIM(iLocal_68[iLocal_147], "random@security_van", "sec_hand_override", 1000f, -4f, -1, 49, 0f, false, false, false);
			}
		}
		if (!iLocal_133)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_133 = 1;
				}
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_71);
			}
		}
	}
}

int func_1()
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return Global_99939.f_44 == 1;
	}
	return 0;
}

int func_2()
{
	float fVar0;
	int iVar1;
	int iVar2;
	
	fVar0 = 50f;
	if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && bLocal_131) && OBJECT::DOES_PICKUP_EXIST(iLocal_154)) || (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && OBJECT::DOES_PICKUP_EXIST(iLocal_154)))) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) < 20f) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), OBJECT::GET_PICKUP_COORDS(iLocal_154)) < 20f)
	{
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar1 = PED::GET_RANDOM_PED_AT_COORD(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, fVar0, fVar0, -1);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			if (ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_m_y_cop_01") || ENTITY::GET_ENTITY_MODEL(iVar1) == joaat("s_f_y_cop_01"))
			{
				return 1;
			}
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
		iVar2 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), fVar0, 0, 1024);
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false))
		{
			return 1;
		}
	}
	return 0;
}

var func_3()
{
	float fVar0;
	int iVar1;
	
	fVar0 = 999999f;
	iVar1 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_68[0]))
		{
			fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[0], true));
			iVar1 = 0;
		}
		if (!PED::IS_PED_INJURED(iLocal_68[1]))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true));
				iVar1 = 1;
			}
		}
	}
	return iLocal_68[iVar1];
}

bool func_4(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_27(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_5(sParam2, iParam3, 0);
}

int func_5(char* sParam0, int iParam1, bool bParam2)
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
					func_26();
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
		if (func_25(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_24();
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
			MISC::CLEAR_BIT(&Global_9504, 0);
			if (bParam2)
			{
				func_16();
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
				if (func_15())
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
			if (func_14())
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
			func_13();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_12();
		func_6();
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
		func_26();
	}
	return 0;
}

void func_6()
{
	if (!func_7())
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

int func_7()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_11())
	{
		return 0;
	}
	if (func_8(PLAYER::PLAYER_ID()))
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

int func_8(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_10(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_9(iParam0, 20);
}

var func_9(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_10(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_11()
{
	return -1;
}

void func_12()
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

void func_13()
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

int func_14()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_15()
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

void func_16()
{
	if (func_23(14))
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
		Global_21649 = func_17();
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

int func_17()
{
	func_18();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_18()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_21(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_20(PLAYER::PLAYER_PED_ID());
			if (func_19(iVar0) && (!func_23(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_19(Global_114963.f_2370.f_539.f_4321))
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

bool func_19(int iParam0)
{
	return iParam0 < 3;
}

int func_20(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_21(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_21(int iParam0)
{
	if (func_19(iParam0))
	{
		return func_22(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_22(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

bool func_23(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_24()
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

bool func_25(int iParam0, int iParam1)
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

void func_26()
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

void func_27(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
{
	Global_22477 = { *uParam0 };
	Global_8818 = iParam1;
	StringCopy(&Global_23093, sParam2, 24);
	Global_24012 = uParam5;
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

float func_28()
{
	float fVar0;
	
	fVar0 = 999999f;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_INJURED(iLocal_68[0]))
		{
			fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[0], true));
		}
		if (!PED::IS_PED_INJURED(iLocal_68[1]))
		{
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true)) < fVar0)
			{
				fVar0 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true));
			}
		}
	}
	return SYSTEM::SQRT(fVar0);
}

int func_29()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		iVar1 = 0;
		while (iVar1 < iLocal_68)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar1]))
			{
				if (((!PED::IS_PED_INJURED(iLocal_68[iVar1]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar1], PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_INJURED(iLocal_68[iVar1])) || ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar1], false))
				{
					iVar0 = 1;
				}
			}
			iVar1++;
		}
		if ((!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1])) && iLocal_133)
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

void func_30()
{
	if (!bLocal_138)
	{
		if (!bLocal_126)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
			{
				if (!ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
				{
					OBJECT::DELETE_OBJECT(&iLocal_73);
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_154) && !bLocal_128)
					{
						func_31(0f, 0f, 0f, 0);
					}
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_153) > 3000)
				{
					if (PED::IS_PED_INJURED(iLocal_68[iLocal_147]) || PED::IS_PED_RAGDOLL(iLocal_68[iLocal_147]))
					{
						ENTITY::DETACH_ENTITY(iLocal_73, true, true);
						iLocal_153 = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (!OBJECT::DOES_PICKUP_EXIST(iLocal_154))
			{
				if (PED::IS_PED_INJURED(iLocal_68[iLocal_147]) || ((!PED::IS_PED_INJURED(iLocal_68[iLocal_147]) && PED::IS_PED_RAGDOLL(iLocal_68[iLocal_147])) && !bLocal_128))
				{
					func_31(0f, 0f, 0f, 0);
				}
			}
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			OBJECT::DELETE_OBJECT(&iLocal_73);
		}
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
		{
			OBJECT::REMOVE_PICKUP(iLocal_154);
		}
	}
}

void func_31(struct<3> Param0, bool bParam3)
{
	if (!bLocal_138 && !bLocal_128)
	{
		if (!bParam3)
		{
			if (bLocal_126)
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -3.3f, 0f), 1.2f, 1.5f) };
			}
			else
			{
				Param0 = { OBJECT::GET_SAFE_PICKUP_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_68[iLocal_147], false), 1.2f, 1.5f) };
			}
		}
		MISC::SET_BIT(&iLocal_155, 3);
		MISC::SET_BIT(&iLocal_155, 4);
		MISC::SET_BIT(&iLocal_155, true);
		if (bParam3)
		{
			iLocal_154 = OBJECT::CREATE_PICKUP_ROTATE(joaat("pickup_money_security_case"), Param0, ENTITY::GET_ENTITY_ROTATION(iLocal_73, 2), 0, iLocal_145, 2, true, 0);
		}
		else
		{
			iLocal_154 = OBJECT::CREATE_PICKUP(joaat("pickup_money_security_case"), Param0, iLocal_155, iLocal_145, true, 0);
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_81))
		{
			iLocal_81 = func_32(iLocal_154);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			OBJECT::DELETE_OBJECT(&iLocal_73);
		}
		bLocal_128 = true;
	}
}

int func_32(int iParam0)
{
	return func_33(iParam0);
}

int func_33(int iParam0)
{
	int iVar0;
	
	if (!OBJECT::DOES_PICKUP_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_PICKUP(iParam0);
	HUD::SET_BLIP_SCALE(iVar0, func_34(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	return iVar0;
}

float func_34(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_35()
{
	if (func_37())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_74))
		{
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 2, false, false);
			VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 3, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_74))
			{
				OBJECT::DELETE_OBJECT(&iLocal_74);
			}
		}
	}
	switch (iLocal_66)
	{
		case 0:
			if (bLocal_126)
			{
				iLocal_66 = 1;
			}
			break;
		
		case 1:
			if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 2) == 0f && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 3) == 0f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
				{
					if (ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
					{
						ENTITY::DETACH_ENTITY(iLocal_73, true, true);
					}
					ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_73, iLocal_71, 0, Local_98, Local_101, false, false, false, false, 2, true, 0);
					iLocal_66 = 2;
				}
			}
			break;
		
		case 2:
			if (!bLocal_128 && !bLocal_138)
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
				{
					if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 2) > 0.25f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 3) > 0.25f) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
						{
							if (ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
							{
								AUDIO::PLAY_SOUND_FROM_COORD(AUDIO::GET_SOUND_ID(), "DOORS_BLOWN", ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_71, 13), "RE_SECURITY_VAN_SOUNDSET", false, 0, false);
								ENTITY::DETACH_ENTITY(iLocal_73, true, false);
								ENTITY::SET_ENTITY_COLLISION(iLocal_73, true, false);
								PHYSICS::ACTIVATE_PHYSICS(iLocal_73);
								OBJECT::SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(iLocal_73, true);
								Local_494 = { ENTITY::GET_ENTITY_COORDS(iLocal_73, true) - ENTITY::GET_ENTITY_COORDS(iLocal_71, true) * Vector(1.5f, 1.5f, 1.5f) };
								if (SYSTEM::VMAG(Local_494) > 10f)
								{
									Local_494 = { func_36(Local_494) };
									Local_494 = { Local_494 * Vector(10f, 10f, 10f) };
								}
								if (iLocal_150 < 100)
								{
									iLocal_134 = 1;
								}
								ENTITY::APPLY_FORCE_TO_ENTITY(iLocal_73, 1, 0f, 1f, 5f, 0f, 0f, 0f, 0, true, true, true, false, true);
								iLocal_493 = MISC::GET_GAME_TIMER();
							}
							else if (MISC::GET_RATIO_OF_CLOSEST_POINT_ON_LINE(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, Local_487), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, Local_490), false) >= 1f)
							{
								iLocal_66 = 3;
								iLocal_140[0] = 0;
								iLocal_140[1] = 0;
							}
							else if ((MISC::GET_GAME_TIMER() - iLocal_493) > 5000)
							{
								func_31(0f, 0f, 0f, 0);
							}
						}
					}
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
				{
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 2, false, false);
					VEHICLE::SET_VEHICLE_DOOR_OPEN(iLocal_71, 3, false, false);
					func_31(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 2f, 0f), 0);
				}
			}
			break;
		
		case 3:
			if (iLocal_65 != 8)
			{
				func_69(8);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && !OBJECT::DOES_PICKUP_EXIST(iLocal_154))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_73) == 0f && (MISC::GET_GAME_TIMER() - iLocal_493) > 1000)
				{
					func_31(ENTITY::GET_ENTITY_COORDS(iLocal_73, true), 1);
					OBJECT::DELETE_OBJECT(&iLocal_73);
				}
				else if ((MISC::GET_GAME_TIMER() - iLocal_493) > 5000)
				{
					func_31(0f, 0f, 0f, 0);
				}
			}
			break;
	}
}

Vector3 func_36(struct<3> Param0)
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

int func_37()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_74) && ENTITY::IS_ENTITY_ATTACHED(iLocal_74))
	{
		if (!iLocal_483)
		{
			if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(iLocal_74, true), joaat("weapon_stickybomb"), 0.25f, false) || OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_74, true), 0.3f, WEAPON::GET_WEAPONTYPE_MODEL(joaat("weapon_stickybomb")), false))
			{
				iLocal_483 = 1;
			}
		}
		iVar0 = 0;
		GRAPHICS::DRAW_DEBUG_SPHERE(ENTITY::GET_ENTITY_COORDS(iLocal_74, true), 0.1f, 255, 0, 0, 255);
		if (func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_74, true), 1f, 1) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, ENTITY::GET_ENTITY_COORDS(iLocal_74, true), 0.3f) && iLocal_483))
		{
			iLocal_134 = 1;
			iVar0 = 1;
		}
		if (ENTITY::GET_ENTITY_HEALTH(iLocal_74) < iLocal_149 && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_74, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_150 = (iLocal_150 + (iLocal_149 - ENTITY::GET_ENTITY_HEALTH(iLocal_74)));
			ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(iLocal_74);
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_484) > 200 && ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			if (MISC::IS_BULLET_IN_ANGLED_AREA(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 0f, (1.2195f - 0.27f)), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, fLocal_486, (1.2195f + 0.09f)), 0.45f, true))
			{
				iLocal_484 = MISC::GET_GAME_TIMER();
				iLocal_485++;
			}
		}
		if (iLocal_485 > 5)
		{
			return 1;
		}
		if (iLocal_150 > 100 || iVar0)
		{
			return 1;
		}
		iLocal_149 = ENTITY::GET_ENTITY_HEALTH(iLocal_74);
	}
	return 0;
}

int func_38(struct<3> Param0, struct<3> Param3, struct<3> Param6, float fParam9, bool bParam10)
{
	int iVar0;
	
	iVar0 = 0;
	if (!func_39(Param0 + Param3))
	{
		if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_AREA(5, Param3, Param0) || (FIRE::IS_EXPLOSION_IN_AREA(2, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(20, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(4, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(28, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(32, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(25, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(9, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(3, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(6, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(0, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(1, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(23, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(34, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(14, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(30, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(12, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(7, Param3, Param0)) || (FIRE::IS_EXPLOSION_IN_AREA(21, Param3, Param0) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_AREA(18, Param3, Param0) && !bParam10)) || FIRE::IS_EXPLOSION_IN_AREA(15, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(10, Param3, Param0)) || FIRE::IS_EXPLOSION_IN_AREA(27, Param3, Param0))
		{
			iVar0 = 1;
		}
	}
	else if ((((((((((((((((((((((FIRE::IS_EXPLOSION_IN_SPHERE(5, Param6, fParam9) || (FIRE::IS_EXPLOSION_IN_SPHERE(2, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(20, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(4, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(28, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(32, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(25, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(9, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(3, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(6, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(0, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(1, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(23, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(34, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(14, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(30, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(12, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(7, Param6, fParam9)) || (FIRE::IS_EXPLOSION_IN_SPHERE(21, Param6, fParam9) && !bParam10)) || (FIRE::IS_EXPLOSION_IN_SPHERE(18, Param6, fParam9) && !bParam10)) || FIRE::IS_EXPLOSION_IN_SPHERE(15, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(10, Param6, fParam9)) || FIRE::IS_EXPLOSION_IN_SPHERE(27, Param6, fParam9))
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_39(struct<3> Param0)
{
	if ((Param0.f_0 == 0f && Param0.f_1 == 0f) && Param0.f_2 == 0f)
	{
		return 1;
	}
	return 0;
}

void func_40()
{
	int iVar0;
	bool bVar1;
	int iVar2[2];
	
	if (!HUD::DOES_BLIP_EXIST(iLocal_80))
	{
		if (!bLocal_127)
		{
			if ((!PED::IS_PED_INJURED(iLocal_68[1]) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false)) && !bLocal_138)
			{
				if (!bLocal_126)
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_77[1]))
					{
						uLocal_77[1] = func_43(iLocal_68[1], 0, 145);
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(uLocal_77[1]))
					{
						HUD::REMOVE_BLIP(&(uLocal_77[1]));
					}
					if (!HUD::DOES_BLIP_EXIST(iLocal_76))
					{
						iLocal_76 = func_41(iLocal_71, 0, 0);
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(uLocal_77[1]))
				{
					HUD::REMOVE_BLIP(&(uLocal_77[1]));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_76))
				{
					HUD::REMOVE_BLIP(&iLocal_76);
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_77[0]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_77[0]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_77[0]));
			}
			if (HUD::DOES_BLIP_EXIST(uLocal_77[1]) && HUD::GET_BLIP_HUD_COLOUR(uLocal_77[1]) != 119)
			{
				HUD::REMOVE_BLIP(&(uLocal_77[1]));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_76) && HUD::GET_BLIP_HUD_COLOUR(iLocal_76) != 119)
			{
				HUD::REMOVE_BLIP(&iLocal_76);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
					{
						if (PED::IS_PED_IN_VEHICLE(iLocal_68[iVar0], iLocal_71, false))
						{
							bVar1 = true;
						}
					}
					iVar0++;
				}
			}
			if (bVar1)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_76))
				{
					iLocal_76 = func_41(iLocal_71, 1, 0);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_76))
			{
				HUD::REMOVE_BLIP(&iLocal_76);
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && HUD::DOES_BLIP_EXIST(iLocal_76)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, false))
				{
					if (HUD::GET_BLIP_ALPHA(iLocal_76) != 0)
					{
						HUD::SET_BLIP_ALPHA(iLocal_76, 0);
					}
				}
				else if (HUD::GET_BLIP_ALPHA(iLocal_76) != 255)
				{
					HUD::SET_BLIP_ALPHA(iLocal_76, 255);
				}
			}
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					if (!OBJECT::DOES_PICKUP_EXIST(iLocal_154) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar0], false))
					{
						if (!PED::IS_PED_FLEEING(iLocal_68[iVar0]) || SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < 30f)
						{
							iVar2[iVar0] = 1;
						}
					}
					if (iLocal_65 == 8 && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar0], false))
					{
						iVar2[iVar0] = 1;
					}
					if (iLocal_65 == 5)
					{
						iVar2[iVar0] = 0;
					}
				}
				if (iVar2[iVar0])
				{
					if (!HUD::DOES_BLIP_EXIST(uLocal_77[iVar0]))
					{
						uLocal_77[iVar0] = func_43(iLocal_68[iVar0], 1, 145);
					}
				}
				else if (HUD::DOES_BLIP_EXIST(uLocal_77[iVar0]))
				{
					HUD::REMOVE_BLIP(&(uLocal_77[iVar0]));
				}
				iVar0++;
			}
			if (OBJECT::DOES_PICKUP_EXIST(iLocal_154) && !bLocal_138)
			{
				if (!HUD::DOES_BLIP_EXIST(iLocal_81))
				{
					iLocal_81 = func_33(iLocal_154);
				}
			}
			else if (HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				HUD::REMOVE_BLIP(&iLocal_81);
			}
		}
	}
	else if ((ENTITY::DOES_ENTITY_EXIST(iLocal_71) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[0])) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[1]))
	{
		if ((((((!ENTITY::IS_ENTITY_OCCLUDED(iLocal_71) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 100f, 100f, 30f, false, true, 0)) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_68[0]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[0], 100f, 100f, 30f, false, true, 0))) || (!ENTITY::IS_ENTITY_OCCLUDED(iLocal_68[1]) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[1], 100f, 100f, 30f, false, true, 0))) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[0], 50f, 50f, 20f, false, true, 0)) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[1], 50f, 50f, 20f, false, true, 0))
		{
			HUD::REMOVE_BLIP(&iLocal_80);
		}
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_77[0]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_77[0], iLocal_139);
	}
	if (HUD::DOES_BLIP_EXIST(uLocal_77[1]))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(uLocal_77[1], bLocal_139);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_76))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_76, bLocal_139);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_81))
	{
		HUD::SHOW_HEIGHT_ON_BLIP(iLocal_81, bLocal_139);
	}
	if (!bLocal_139)
	{
		if (bLocal_127 || iLocal_66 == 3)
		{
			bLocal_139 = false;
		}
	}
}

int func_41(int iParam0, bool bParam1, bool bParam2)
{
	return func_42(iParam0, !bParam1, bParam2);
}

int func_42(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = HUD::ADD_BLIP_FOR_ENTITY(iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_34(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
		if (!bParam2)
		{
			HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
		}
		else
		{
			HUD::SET_BLIP_COLOUR(iVar0, 2);
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_34(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
		HUD::SET_BLIP_AS_FRIENDLY(iVar0, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		HUD::SET_BLIP_SCALE(iVar0, func_34(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 0.7f, 0.7f));
	}
	return iVar0;
}

int func_43(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_42(iParam0, !bParam1, 0);
	if ((iParam2 != 145 && HUD::DOES_BLIP_EXIST(iVar0)) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2349[iParam2 /*29*/].f_3)))
	{
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, &(Global_2349[iParam2 /*29*/].f_3));
	}
	return iVar0;
}

void func_44()
{
	func_46(9, bLocal_64);
	while (!func_45())
	{
		SYSTEM::WAIT(0);
	}
	func_232();
}

int func_45()
{
	return 1;
}

void func_46(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1 <= func_65(iParam0))
	{
		func_64(iParam0, bParam1);
		if (!func_63(51))
		{
			func_59("RE_REWARD", 1, 0, 4000, 10000, func_62(), 0, 138, 0);
			func_58(51);
		}
		if (func_57(iParam0))
		{
			Global_114963.f_25004.f_2 = 3;
		}
		if (func_56(iParam0, bParam1) != 322)
		{
			func_48(func_56(iParam0, bParam1), Local_60.f_0, Local_60.f_1);
		}
		Global_114951 = bParam1;
		if (Global_114949 == 0)
		{
			if (((Global_114952 == 1 || Global_114952 == 5) || Global_114952 == 11) || Global_114952 == 25)
			{
				func_47(2);
			}
			else if ((Global_114952 == 26 || Global_114952 == 8) || Global_114952 == 17)
			{
				func_47(7);
			}
			else
			{
				func_47(1);
			}
		}
	}
}

void func_47(int iParam0)
{
	Global_114949 = iParam0;
}

void func_48(int iParam0, var uParam1, var uParam2)
{
	bool bVar0;
	
	if (iParam0 < 0)
	{
	}
	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_54((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114963.f_10203[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114963.f_10203[iParam0 /*12*/].f_6 == 11 || Global_114963.f_10203[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114963.f_10203[iParam0 /*12*/].f_5 = 1;
		Global_114963.f_10203[iParam0 /*12*/].f_10 = uParam1;
		Global_114963.f_10203[iParam0 /*12*/].f_11 = uParam2;
		if (iParam0 == 287)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
		}
		if (iParam0 == 286)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
		}
		if (iParam0 == 299)
		{
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
		}
	}
	if (bVar0)
	{
		func_49();
	}
}

void func_49()
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	int iVar9;
	
	iVar0 = 0;
	Global_114699 = 0;
	Global_114700 = 0;
	Global_114701 = 0;
	Global_114702 = 0;
	Global_114703 = 0;
	Global_114704 = 0;
	Global_114705 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114963.f_10203.f_3853;
	Global_114963.f_10203.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114963.f_10203[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114963.f_10203[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114699++;
					fVar1 = (fVar1 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114700++;
					fVar2 = (fVar2 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114701++;
					fVar3 = (fVar3 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114702++;
					fVar4 = (fVar4 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114703++;
					fVar5 = (fVar5 + (Global_114963.f_10203[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114704++;
					fVar6 = (fVar6 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114705++;
					fVar7 = (fVar7 + Global_114963.f_10203[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114682 > 0)
	{
		if (Global_114699 == Global_114682)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114683 > 0)
	{
		if (Global_114700 == Global_114683)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114684 > 0)
	{
		if (Global_114701 == Global_114684)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114685 > 0)
	{
		if (Global_114702 == Global_114685)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114686 > 0)
	{
		if (((Global_114703 == Global_114686 || (Global_114686 * 10 / Global_114703) < 41) || Global_114703 > Global_114689) || Global_114703 == Global_114689)
		{
			if (!BitTest(Global_114963.f_10203.f_3856, 14))
			{
				if (Global_114703 == Global_114686)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114686, 0);
					MISC::SET_BIT(&(Global_114963.f_10203.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114687 > 0)
	{
		if (Global_114704 == Global_114687)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114688 > 0)
	{
		if (Global_114705 == Global_114688)
		{
			fVar7 = 5f;
		}
	}
	Global_114963.f_10203.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114703 > Global_114689 || Global_114703 == Global_114689)
	{
		iVar9 = Global_114689;
	}
	else
	{
		iVar9 = Global_114703;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114699, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114682, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114700, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114683, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114701, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114684, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114702, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114685, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114689, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114705 + Global_114704), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114688 + Global_114687), true);
	Global_114706 = (Global_114699 * 100 / Global_114682);
	Global_114708 = ((Global_114701 + Global_114700) * 100 / (Global_114684 + Global_114683));
	Global_114707 = ((Global_114702 + iVar9) * 100 / (Global_114685 + Global_114689));
	Global_114709 = ((Global_114704 + Global_114705) * 100 / (Global_114687 + Global_114688));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114963.f_10203.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114706, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114707, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114708, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114963.f_10203.f_3853))
	{
		func_53(13, SYSTEM::FLOOR(Global_114963.f_10203.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80337)
		{
			if (func_52() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114697 = 0;
				}
				if (!Global_65063)
				{
					func_50();
				}
			}
		}
	}
}

int func_50()
{
	if (func_51(0))
	{
		return 0;
	}
	if (Global_102525.f_8)
	{
		if (Global_102525.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_102525.f_10 > 1)
	{
		return 0;
	}
	Global_102525.f_10++;
	return 1;
}

int func_51(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_52()
{
	return Global_33815;
}

int func_53(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 < 0)
	{
		return 0;
	}
	if (iParam0 > 78)
	{
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
	if (iParam1 > iVar0)
	{
		return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
	}
	return 0;
}

void func_54(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_55();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_55()
{
	return Global_1574928;
}

int func_56(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 250;
			break;
		
		case 1:
			return 226;
			break;
		
		case 2:
			return 243;
			break;
		
		case 3:
			return 256;
			break;
		
		case 4:
			return 259;
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				return 281;
			}
			if (bParam1 == 2)
			{
				return 282;
			}
			break;
		
		case 6:
			return 265;
			break;
		
		case 7:
			return 218;
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				return 271;
			}
			if (bParam1 == 2)
			{
				return 272;
			}
			if (bParam1 == 3)
			{
				return 273;
			}
			if (bParam1 == 4)
			{
				return 274;
			}
			if (bParam1 == 5)
			{
				return 275;
			}
			if (bParam1 == 6)
			{
				return 276;
			}
			if (bParam1 == 7)
			{
				return 277;
			}
			if (bParam1 == 8)
			{
				return 278;
			}
			if (bParam1 == 9)
			{
				return 279;
			}
			if (bParam1 == 10)
			{
				return 280;
			}
			break;
		
		case 10:
			return 219;
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				return 246;
			}
			if (bParam1 == 2)
			{
				return 247;
			}
			if (bParam1 == 3)
			{
				return 248;
			}
			if (bParam1 == 4)
			{
				return 249;
			}
			break;
		
		case 12:
			return 254;
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				return 260;
			}
			if (bParam1 == 2)
			{
				return 261;
			}
			if (bParam1 == 3)
			{
				return 262;
			}
			if (bParam1 == 4)
			{
				return 264;
			}
			break;
		
		case 14:
			return 283;
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				return 224;
			}
			if (bParam1 == 2)
			{
				return 225;
			}
			break;
		
		case 16:
			return 252;
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				return 244;
			}
			if (bParam1 == 2)
			{
				return 245;
			}
			break;
		
		case 18:
			return 253;
			break;
		
		case 19:
			return 215;
			break;
		
		case 20:
			return 216;
			break;
		
		case 21:
			return 251;
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				return 221;
			}
			if (bParam1 == 2)
			{
				return 222;
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				return 213;
			}
			if (bParam1 == 2)
			{
				return 214;
			}
			break;
		
		case 24:
			return 242;
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				return 267;
			}
			if (bParam1 == 2)
			{
				return 268;
			}
			if (bParam1 == 3)
			{
				return 269;
			}
			break;
		
		case 8:
			return 255;
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				return 227;
			}
			if (bParam1 == 2)
			{
				return 228;
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				return 257;
			}
			if (bParam1 == 2)
			{
				return 258;
			}
			break;
		
		case 28:
			return 217;
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				return 229;
			}
			if (bParam1 == 2)
			{
				return 230;
			}
			if (bParam1 == 3)
			{
				return 231;
			}
			break;
		
		case 30:
			return 285;
			break;
		
		case 31:
			return 318;
			break;
		
		case 32:
			return 319;
			break;
		
		case 33:
			return 320;
			break;
	}
	return 322;
}

int func_57(int iParam0)
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return 0;
			break;
	}
	return 1;
}

void func_58(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	bVar0 = iParam0;
	iVar1 = 0;
	while (bVar0 > 31)
	{
		bVar0 = (bVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		MISC::SET_BIT(&(Global_114963.f_20419.f_150[iVar1]), bVar0);
	}
}

void func_59(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_60(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_60(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
{
	int iVar0;
	
	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam5 < 500 && iParam5 != -1)
	{
		return;
	}
	if (iParam4 < 0 && iParam4 != -1)
	{
		return;
	}
	if (iParam6 < 1 || iParam6 > 7)
	{
		return;
	}
	if (iParam7 == 235)
	{
		return;
	}
	if (iParam8 == 235)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_114963.f_20419.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114963.f_20419[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114963.f_20419.f_145 < 9)
	{
		StringCopy(&(Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_4), sParam1, 16);
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_9 = iParam5;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_11 = iParam6;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_12 = uParam2;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_13 = iParam7;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_14 = iParam8;
		Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114963.f_20419[Global_114963.f_20419.f_145 /*16*/].f_10 = -1;
		}
		Global_114963.f_20419.f_145++;
		func_61();
	}
}

void func_61()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114963.f_20419.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114963.f_20419.f_145)
	{
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[0])
			{
				Global_114963.f_20419.f_146[0] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[1])
			{
				Global_114963.f_20419.f_146[1] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114963.f_20419[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114963.f_20419[iVar0 /*16*/].f_12 > Global_114963.f_20419.f_146[2])
			{
				Global_114963.f_20419.f_146[2] = Global_114963.f_20419[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

int func_62()
{
	func_18();
	switch (Global_114963.f_2370.f_539.f_4321)
	{
		case 0:
			return 1;
			break;
		
		case 1:
			return 2;
			break;
		
		case 2:
			return 4;
			break;
	}
	return 0;
}

int func_63(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = iParam0;
	iVar1 = 0;
	while (iVar0 > 31)
	{
		iVar0 = (iVar0 - 32);
		iVar1++;
	}
	if (iVar1 < 3)
	{
		return BitTest(Global_114963.f_20419.f_150[iVar1], iVar0);
	}
	return 0;
}

void func_64(int iParam0, bool bParam1)
{
	MISC::SET_BIT(&(Global_114963.f_25004.f_8[iParam0]), bParam1);
}

int func_65(int iParam0)
{
	int iVar0;
	
	iVar0 = 1;
	switch (iParam0)
	{
		case 1:
			iVar0 = 5;
			break;
		
		case 5:
			iVar0 = 2;
			break;
		
		case 9:
			iVar0 = 10;
			break;
		
		case 11:
			iVar0 = 4;
			break;
		
		case 13:
			iVar0 = 4;
			break;
		
		case 15:
			iVar0 = 2;
			break;
		
		case 17:
			iVar0 = 2;
			break;
		
		case 22:
			iVar0 = 2;
			break;
		
		case 23:
			iVar0 = 2;
			break;
		
		case 25:
			iVar0 = 3;
			break;
		
		case 26:
			iVar0 = 2;
			break;
		
		case 27:
			iVar0 = 2;
			break;
		
		case 29:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_66()
{
	struct<16> Var0;
	var uVar16;
	
	StringCopy(&Var0, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	uVar16 = func_67(Var0);
	return uVar16;
}

int func_67(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	switch (MISC::GET_HASH_KEY(&cParam0))
	{
		case joaat("re_abandonedcar"):
			return 23;
			break;
		
		case joaat("re_accident"):
			return 0;
			break;
		
		case joaat("re_arrests"):
			return 15;
			break;
		
		case joaat("re_atmrobbery"):
			return 1;
			break;
		
		case joaat("re_bikethief"):
			return 26;
			break;
		
		case joaat("re_border"):
			return 29;
			break;
		
		case joaat("re_burials"):
			return 24;
			break;
		
		case joaat("re_bus_tours"):
			return 2;
			break;
		
		case joaat("re_cartheft"):
			return 17;
			break;
		
		case joaat("re_chasethieves"):
			return 11;
			break;
		
		case joaat("re_crashrescue"):
			return 16;
			break;
		
		case joaat("re_cultshootout"):
			return 18;
			break;
		
		case joaat("re_dealgonewrong"):
			return 12;
			break;
		
		case joaat("re_domestic"):
			return 3;
			break;
		
		case joaat("re_drunkdriver"):
			return 27;
			break;
		
		case joaat("re_gang_intimidation"):
			return 20;
			break;
		
		case joaat("re_gangfight"):
			return 19;
			break;
		
		case joaat("re_getaway_driver"):
			return 4;
			break;
		
		case joaat("re_hitch_lift"):
			return 13;
			break;
		
		case joaat("re_homeland_security"):
			return 28;
			break;
		
		case joaat("re_lured"):
			return 7;
			break;
		
		case joaat("re_muggings"):
			return 25;
			break;
		
		case joaat("re_paparazzi"):
			return 10;
			break;
		
		case joaat("re_prisonerlift"):
			return 22;
			break;
		
		case joaat("re_prisonvanbreak"):
			return 21;
			break;
		
		case joaat("re_securityvan"):
			return 9;
			break;
		
		case joaat("re_shoprobbery"):
			return 5;
			break;
		
		case joaat("re_snatched"):
			return 6;
			break;
		
		case joaat("re_stag_do"):
			return 14;
			break;
		
		case joaat("re_yetarian"):
			return 30;
			break;
		
		case joaat("re_duel"):
			return 31;
			break;
		
		case joaat("re_seaplane"):
			return 32;
			break;
		
		case joaat("re_monkey"):
			return 33;
			break;
	}
	return -1;
}

int func_68()
{
	if (bLocal_128)
	{
		if (OBJECT::HAS_PICKUP_BEEN_COLLECTED(iLocal_154))
		{
			return 1;
		}
	}
	return 0;
}

void func_69(int iParam0)
{
	iLocal_65 = iParam0;
	iLocal_67 = 0;
}

int func_70()
{
	if (!OBJECT::DOES_PICKUP_EXIST(iLocal_154))
	{
		if (bLocal_126)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				if (!func_71(iLocal_71))
				{
					if (iLocal_482 == -1)
					{
						iLocal_482 = MISC::GET_GAME_TIMER();
					}
				}
				else if (iLocal_482 != -1)
				{
					iLocal_482 = -1;
				}
			}
		}
		if (!bLocal_126)
		{
			if (iLocal_147 != -1)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iLocal_147]))
				{
					if (!func_71(iLocal_71))
					{
						if (iLocal_482 == -1)
						{
							iLocal_482 = MISC::GET_GAME_TIMER();
						}
					}
					else if (iLocal_482 != -1)
					{
						iLocal_482 = -1;
					}
				}
			}
		}
		if (iLocal_482 != -1)
		{
			if ((MISC::GET_GAME_TIMER() - iLocal_482) > 3000)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_68[0]));
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(iLocal_68[1]));
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -1000f, true);
				ENTITY::SET_ENTITY_COLLISION(iLocal_71, true, false);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_71);
				return 1;
			}
		}
	}
	else
	{
		if (iLocal_482 != -1)
		{
			iLocal_482 = -1;
		}
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && SYSTEM::VDIST(OBJECT::GET_PICKUP_COORDS(iLocal_154), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 300f)
		{
			return 1;
		}
	}
	return 0;
}

int func_71(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 150f)
		{
			return 1;
		}
		else if (!ENTITY::IS_ENTITY_OCCLUDED(iParam0) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 300f)
		{
			return 1;
		}
	}
	return 0;
}

void func_72()
{
	int iVar0;
	int iVar1;
	
	if (iLocal_524 == -1)
	{
		iLocal_524 = MISC::GET_GAME_TIMER();
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		switch (iLocal_67)
		{
			case 0:
				bLocal_127 = true;
				if (!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1]))
				{
					if (func_28() < 30f && !PED::IS_PED_INJURED(Local_157[3 /*10*/]))
					{
						func_4(&Local_157, cLocal_156, "RESEC_SHT1", 8, 0, 0, 0);
					}
				}
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_73))
					{
						if ((iVar0 != iLocal_147 || bLocal_126) || !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[iVar0]))
						{
							TASK::CLEAR_PED_TASKS(iLocal_68[iVar0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
							if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar0], false))
							{
								if (iLocal_134)
								{
									if (STREAMING::HAS_CLIP_SET_LOADED("move_injured_generic"))
									{
										PED::SET_PED_MOVEMENT_CLIPSET(iLocal_68[iVar0], "move_injured_generic", 0.25f);
										iLocal_135[iVar0] = 1;
									}
								}
								TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
							}
							TASK::TASK_CLEAR_LOOK_AT(0);
							if (iLocal_135[iVar0])
							{
								TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(1000, 3000));
							}
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar0], iLocal_75);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
						}
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 6, false);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 0, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 1, false);
						PED::SET_PED_COMBAT_MOVEMENT(iLocal_68[iVar0], 1);
						PED::SET_PED_TARGET_LOSS_RESPONSE(iLocal_68[iVar0], 1);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], true);
					}
					iVar0++;
				}
				if ((ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED(iLocal_73)) && !PED::IS_PED_INJURED(iLocal_68[iLocal_147]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_68[iLocal_147]);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_67++;
				break;
			
			case 1:
				if (func_77(iLocal_147))
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iLocal_147]))
					{
						TASK::CLEAR_PED_TASKS(iLocal_68[iLocal_147]);
						TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iLocal_147], false))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
						}
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iLocal_147], iLocal_75);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
					}
					iLocal_67++;
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1]))
				{
					if (PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1]))
					{
						if (Local_157[3 /*10*/] != iLocal_68[1])
						{
							func_76(&Local_157, 3);
							func_76(&Local_157, 4);
							func_75(&Local_157, 3, iLocal_68[1], "SECVANGUY1", 0, 1);
						}
					}
					iVar0 = 0;
					while (iVar0 < iLocal_68)
					{
						if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
						{
							if ((iLocal_66 == 2 && !iLocal_140[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_68[iVar0], iLocal_71, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -4f, 0f), 5f, false);
								iLocal_140[iVar0] = 1;
							}
							if (((OBJECT::DOES_PICKUP_EXIST(iLocal_154) && !iLocal_140[iVar0]) && iLocal_66 == 3) && !bLocal_138)
							{
								PED::SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(iLocal_68[iVar0], iLocal_71, OBJECT::GET_PICKUP_COORDS(iLocal_154), 5f, false);
								iLocal_140[iVar0] = 1;
							}
							if (bLocal_138)
							{
								if (iLocal_140[iVar0])
								{
									PED::REMOVE_PED_DEFENSIVE_AREA(iLocal_68[iVar0], false);
									iLocal_140[iVar0] = 0;
								}
							}
						}
						iVar0++;
					}
					if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_517)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(10000f, 15000f))
					{
						if (!func_74() && func_28() < 30f)
						{
							if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
							{
								if (func_4(&Local_157, cLocal_156, "RESEC_SHT2", 8, 0, 0, 0))
								{
									iLocal_517 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
					{
						if (!bLocal_126)
						{
							if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, false) && (MISC::GET_GAME_TIMER() - iLocal_524) > 5000)
							{
								if (func_28() > (30f + (30f / 10f)))
								{
									func_69(7);
								}
								if (func_28() > (30f / 2f) && !func_73())
								{
									if (!bLocal_126)
									{
										func_69(7);
									}
									else
									{
										func_69(6);
									}
								}
								if (iLocal_65 != 8)
								{
									iLocal_140[0] = 0;
									iLocal_140[1] = 0;
									iLocal_524 = -1;
								}
							}
						}
					}
				}
				break;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
			{
				if (iVar0 == 0)
				{
					iVar1 = 7000;
				}
				else
				{
					iVar1 = 9000;
				}
				if (SYSTEM::TIMERA() > iVar1 && iLocal_135[iVar0])
				{
					PED::RESET_PED_MOVEMENT_CLIPSET(iLocal_68[iVar0], 0.25f);
					iLocal_135[iVar0] = 0;
				}
			}
			iVar0++;
		}
	}
}

bool func_73()
{
	int iVar0;
	
	if ((MISC::GET_GAME_TIMER() - iLocal_501) > 250)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), 19) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_498[iVar0] = 1;
					}
					else
					{
						iLocal_498[iVar0] = 0;
					}
				}
				iVar0++;
			}
		}
	}
	return (iLocal_498[0] || iLocal_498[1]);
}

int func_74()
{
	if (Global_23023 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_75(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

void func_76(var uParam0, int iParam1)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
		(uParam0[iParam1 /*10*/])->f_7 = 0;
	}
}

bool func_77(int iParam0)
{
	bool bVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
	{
		if (!PED::IS_PED_INJURED(iLocal_68[iParam0]))
		{
			if (ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[iParam0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[iParam0], "weapons@holster_1h", "holster", 3))
				{
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_68[iParam0], "weapons@holster_1h", "holster") > 0.9f)
					{
						ENTITY::DETACH_ENTITY(iLocal_73, true, true);
						OBJECT::DELETE_OBJECT(&iLocal_73);
					}
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iParam0], true);
					TASK::TASK_PLAY_ANIM(iLocal_68[iParam0], "weapons@holster_1h", "holster", 8f, -8f, -1, 0, 0f, false, false, false);
				}
			}
		}
	}
	bVar0 = (!ENTITY::DOES_ENTITY_EXIST(iLocal_73) || (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && !ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[iParam0])));
	if (bVar0)
	{
		if (!PED::IS_PED_INJURED(iLocal_68[iParam0]))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iParam0], false);
		}
	}
	return bVar0;
}

void func_78(int iParam0, bool bParam1)
{
	struct<3> Var0;
	float fVar3;
	float fVar4;
	struct<3> Var5[2];
	int iVar12;
	bool bVar13;
	int iVar14;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { func_36(ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true))) };
		fVar3 = ((ENTITY::GET_ENTITY_HEADING(iLocal_71) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) + 45f);
		fVar4 = ((ENTITY::GET_ENTITY_HEADING(iLocal_71) + MISC::GET_HEADING_FROM_VECTOR_2D(Var0.f_0, Var0.f_1)) - 45f);
		Var5[0 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), fVar3, 0f, 4.5f, 0f) };
		Var5[1 /*3*/] = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), fVar4, 0f, 4.5f, 0f) };
		func_79(&fVar3);
		func_79(&fVar4);
		if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_518) > 2f)
		{
			bVar13 = true;
		}
		iVar12 = 0;
		while (iVar12 < iLocal_68)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[iVar12]))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar12], true), Var5[iVar12 /*3*/]) > 2f)
				{
					bVar13 = true;
				}
			}
			iVar12++;
		}
		if (bVar13)
		{
			iVar12 = 0;
			while (iVar12 < iLocal_68)
			{
				if ((((((!PED::IS_PED_INJURED(iLocal_68[iVar12]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar12], true), Var5[iVar12 /*3*/]) > 2f) && (MISC::GET_GAME_TIMER() - iLocal_521[iVar12]) > 1000) && !PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar12], false)) && !iLocal_498[iVar12]) && (iParam0 == -1 || iParam0 == iVar12))
				{
					if (bParam1)
					{
						if (func_73())
						{
							Local_518 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						}
						TASK::OPEN_SEQUENCE_TASK(&iVar14);
						if (func_73() || func_39(Local_518))
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, Var5[iVar12 /*3*/], PLAYER::PLAYER_PED_ID(), 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
							TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, true);
						}
						else
						{
							TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, Var5[iVar12 /*3*/], Local_518, 2f, false, 0.5f, 4f, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"));
							TASK::TASK_AIM_GUN_AT_COORD(0, Local_518, -1, true, false);
						}
						TASK::CLOSE_SEQUENCE_TASK(iVar14);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar12], iVar14);
						TASK::CLEAR_SEQUENCE_TASK(&iVar14);
					}
					iLocal_521[iVar12] = MISC::GET_GAME_TIMER();
				}
				iVar12++;
			}
		}
	}
}

void func_79(float fParam0)
{
	if (*fParam0 > 180f)
	{
		*fParam0 = (*fParam0 - 360f);
	}
	else if (*fParam0 < -180f)
	{
		*fParam0 = (*fParam0 + 360f);
	}
}

void func_80(int iParam0)
{
	float fVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		switch (iLocal_67)
		{
			case 0:
				if (!bLocal_126)
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					TASK::CLEAR_PED_TASKS(iParam0);
					Local_502 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_71, 0) };
					Local_505 = { ENTITY::GET_ENTITY_ROTATION(iLocal_71, 2) };
					Local_508 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_panic", Local_502, Local_505, 0f, 2) };
					if (((!PED::IS_PED_INJURED(iLocal_68[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false)) && !PED::IS_PED_INJURED(iLocal_68[0])) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false))
					{
						if (func_28() < 20f)
						{
							if (bLocal_127)
							{
								func_4(&Local_157, cLocal_156, "RESEC_REC", 8, 0, 0, 0);
							}
						}
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
						{
							if (bLocal_127)
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_154), 2f, -1, 0.25f, 0, 40000f);
							}
							else
							{
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_154), 1f, -1, 0.25f, 0, 40000f);
							}
							iLocal_67++;
						}
						else
						{
							func_86(iParam0);
							iLocal_67 = 2;
						}
					}
					else if (!PED::IS_PED_INJURED(iParam0))
					{
						if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, OBJECT::GET_PICKUP_COORDS(iLocal_154), 2f, -1, 0.25f, 0, 40000f);
							iLocal_67++;
						}
						else
						{
							func_86(iParam0);
							iLocal_67 = 2;
						}
					}
				}
				else
				{
					iLocal_67 = 4;
				}
				break;
			
			case 1:
				if (!PED::IS_PED_INJURED(iParam0) && OBJECT::DOES_PICKUP_EXIST(iLocal_154))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, true), OBJECT::GET_PICKUP_COORDS(iLocal_154), true) < 2f && !PED::IS_PED_RAGDOLL(iParam0)) && (MISC::GET_GAME_TIMER() - iLocal_153) > 3000)
					{
						if (WEAPON::IS_PED_ARMED(iParam0, 4))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true);
						}
						OBJECT::REMOVE_PICKUP(iLocal_154);
						func_86(iParam0);
						WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_unarmed"), true);
						bLocal_128 = false;
						iLocal_147 = iLocal_146;
						iLocal_67++;
					}
				}
				break;
			
			case 2:
				if (!PED::IS_PED_INJURED(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, joaat("script_task_follow_nav_mesh_to_coord")) != 1)
					{
						if (bLocal_127)
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_508, 2f, -1, 0.1f, 512, Local_505.f_2);
						}
						else
						{
							TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iParam0, Local_508, 1f, -1, 0.1f, 512, Local_505.f_2);
						}
						iLocal_67++;
					}
				}
				break;
			
			case 3:
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
					{
						iLocal_67 = 0;
					}
					else
					{
						fVar0 = ENTITY::GET_ENTITY_HEADING(iParam0);
						if (fVar0 > 180f)
						{
							fVar0 = (fVar0 - 360f);
						}
						if (fVar0 <= -180f)
						{
							fVar0 = (fVar0 + 360f);
						}
						if (Local_505.f_2 > 180f)
						{
							Local_505.f_2 = (Local_505.f_2 - 360f);
						}
						if (Local_505.f_2 <= -180f)
						{
							Local_505.f_2 = (Local_505.f_2 + 360f);
						}
						if (SYSTEM::VDIST(Local_508, ENTITY::GET_ENTITY_COORDS(iParam0, true)) < 0.3f)
						{
							if (MISC::ABSF((fVar0 - Local_505.f_2)) < 15f)
							{
								PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iParam0, -8f);
								TASK::CLEAR_PED_TASKS(iParam0);
								bLocal_513 = true;
								iLocal_511 = PED::CREATE_SYNCHRONIZED_SCENE(Local_502, Local_505, 2);
								if (bLocal_127)
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_511, "random@security_van", "sec_case_into_van_panic", 4f, 4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, iLocal_511, "van_case_into_van_panic", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								else
								{
									TASK::TASK_SYNCHRONIZED_SCENE(iParam0, iLocal_511, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
									ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, iLocal_511, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
								}
								PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
								iLocal_67++;
							}
						}
						else if (ENTITY::IS_ENTITY_OCCLUDED(iParam0) && !CAM::IS_SPHERE_VISIBLE(Local_502, 2f))
						{
							ENTITY::SET_ENTITY_COORDS(iParam0, Local_502, true, false, false, true);
						}
					}
				}
				break;
			
			case 4:
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					if (bLocal_127)
					{
						fLocal_525 = 0.42f;
					}
					else
					{
						fLocal_525 = 0.3893f;
					}
					if (bLocal_127)
					{
						fLocal_526 = 0.52f;
					}
					else
					{
						fLocal_526 = 0.546243f;
					}
					if (!bLocal_126)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iParam0)) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > fLocal_525)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_71))
							{
								ENTITY::DETACH_ENTITY(iLocal_73, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_73, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_73, iLocal_71, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_71, ENTITY::GET_ENTITY_COORDS(iLocal_73, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_126 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > fLocal_526)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -4f, true);
						TASK::CLEAR_PED_TASKS(iParam0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
						{
							iLocal_123 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 3, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
							iLocal_67++;
						}
					}
				}
				break;
			
			case 5:
				if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > fLocal_526) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					if (!bLocal_127)
					{
						if (!PED::IS_PED_INJURED(iLocal_68[0]))
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_68[0], iLocal_71, -1, -1, 1f, 1, 0);
						}
					}
					iLocal_67++;
				}
				break;
			
			case 6:
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
				{
					if (bLocal_127)
					{
						func_69(6);
					}
					else
					{
						func_69(4);
					}
				}
				else
				{
					func_69(8);
				}
				break;
			}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1]))
		{
			func_69(8);
		}
	}
	if ((!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_126)
		{
			if ((((((func_28() < 10f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && func_73()) || ((func_28() < 20f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))) || (func_28() < 5f && bLocal_127)) || (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && func_81(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))) || ((!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE())) && func_81(PLAYER::GET_PLAYERS_LAST_VEHICLE())))
			{
				func_69(8);
			}
		}
	}
	if (iLocal_65 != 7)
	{
		if (bLocal_126)
		{
			if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -8f, true);
			}
		}
		if (!PED::IS_PED_INJURED(iParam0))
		{
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
		}
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && iLocal_65 != 7) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
	{
		ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -8f, true);
	}
}

int func_81(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	struct<2> Var4;
	struct<3> Var7[4];
	struct<3> Var20[4];
	struct<3> Var33[4];
	struct<3> Var46[4];
	var uVar59;
	float fVar72;
	float fVar73;
	
	iVar0 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::DOES_ENTITY_EXIST(iLocal_71))
	{
		uVar59 = 4;
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &Var1, &Var4);
		Var7[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var4.f_1, 0f) };
		Var7[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4.f_0, Var4.f_1, 0f) };
		Var7[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var4.f_0, Var1.f_1, 0f) };
		Var7[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Var1.f_0, Var1.f_1, 0f) };
		fVar72 = -3.7f;
		fVar73 = 1.35f;
		Var20[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (-fVar73 - 0.25f), fVar72, 0f) };
		Var20[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (fVar73 + 0.25f), fVar72, 0f) };
		Var20[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (fVar73 - 0.25f), (fVar72 - 1.55f), 0f) };
		Var20[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (-fVar73 + 0.25f), (fVar72 - 1.55f), 0f) };
		Var33[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, -fVar73, 0.5f, 0f) };
		Var33[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (-fVar73 - 0.75f), 0.5f, 0f) };
		Var33[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (-fVar73 - 0.75f), 1.5f, 0f) };
		Var33[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, -fVar73, 1.5f, 0f) };
		Var46[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, fVar73, 0.5f, 0f) };
		Var46[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (fVar73 + 0.75f), 0.5f, 0f) };
		Var46[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, (fVar73 + 0.75f), 1.5f, 0f) };
		Var46[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, fVar73, 1.5f, 0f) };
		if (!bLocal_126)
		{
			if (func_82(&Var20, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, true))
		{
			if (func_82(&Var33, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_68[1]) && !PED::IS_PED_IN_VEHICLE(iLocal_68[1], iLocal_71, true))
		{
			if (func_82(&Var46, &Var7, &uVar59))
			{
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_82(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar2 = iVar0 + 1;
		if (iVar2 == *uParam0)
		{
			iVar2 = 0;
		}
		iVar1 = 0;
		while (iVar1 < *uParam1)
		{
			iVar3 = iVar1 + 1;
			if (iVar3 == *uParam1)
			{
				iVar3 = 0;
			}
			if (func_83(*(uParam0[iVar0 /*3*/]), *(uParam0[iVar2 /*3*/]), *(uParam1[iVar1 /*3*/]), *(uParam1[iVar3 /*3*/]), uParam2[iVar0 /*3*/]))
			{
				return 1;
			}
			iVar1++;
		}
		iVar0++;
	}
	return 0;
}

int func_83(struct<3> Param0, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8, struct<2> Param9, var uParam11, var uParam12)
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
	float fVar10;
	float fVar11;
	float fVar12;
	
	fVar0 = Param0.f_0;
	fVar1 = Param3.f_0;
	fVar2 = Param6.f_0;
	fVar3 = Param9.f_0;
	fVar4 = Param0.f_1;
	fVar5 = Param3.f_1;
	fVar6 = Param6.f_1;
	fVar7 = Param9.f_1;
	fVar8 = (((fVar0 - fVar1) * (fVar6 - fVar7)) - ((fVar4 - fVar5) * (fVar2 - fVar3)));
	if (fVar8 == 0f)
	{
		return 0;
	}
	fVar9 = ((fVar0 * fVar5) - (fVar4 * fVar1));
	fVar10 = ((fVar2 * fVar7) - (fVar6 * fVar3));
	fVar11 = (((fVar9 * (fVar2 - fVar3)) - ((fVar0 - fVar1) * fVar10)) / fVar8);
	fVar12 = (((fVar9 * (fVar6 - fVar7)) - ((fVar4 - fVar5) * fVar10)) / fVar8);
	if (((fVar11 < func_85(fVar0, fVar1) || fVar11 > func_84(fVar0, fVar1)) || fVar11 < func_85(fVar2, fVar3)) || fVar11 > func_84(fVar2, fVar3))
	{
		return 0;
	}
	if (((fVar12 < func_85(fVar4, fVar5) || fVar12 > func_84(fVar4, fVar5)) || fVar12 < func_85(fVar6, fVar7)) || fVar12 > func_84(fVar6, fVar7))
	{
		return 0;
	}
	*uParam12 = fVar11;
	uParam12->f_1 = fVar12;
	uParam12->f_2 = Param0.f_2;
	return 1;
}

float func_84(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

float func_85(float fParam0, float fParam1)
{
	if (fParam0 < fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_86(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			iLocal_73 = OBJECT::CREATE_OBJECT(iLocal_122, Local_94, true, true, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iLocal_73, false);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_73, iParam0, PED::GET_PED_BONE_INDEX(iParam0, 28422), Local_107, Local_110, true, false, false, false, 2, true, 0);
		}
	}
}

void func_87()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_67)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < iLocal_68)
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[iVar0], true);
				}
				iVar0++;
			}
			bLocal_127 = true;
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_90()))
				{
					if (!PED::IS_PED_INJURED(func_90()))
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false) != func_90() && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_71, -1, false))
						{
							TASK::TASK_ENTER_VEHICLE(func_90(), iLocal_71, 20000, -1, 2f, 1, 0);
						}
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_68[1]) && func_90() != iLocal_68[1])
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, 0, false) != iLocal_68[1] && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_71, 0, false))
					{
						TASK::TASK_ENTER_VEHICLE(iLocal_68[1], iLocal_71, -1, 0, 1073741824, 1, 0);
					}
				}
				iLocal_67++;
			}
			else
			{
				func_69(8);
			}
			break;
		
		case 1:
			if (func_89())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_90()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(func_90(), iLocal_71, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
					iLocal_67++;
				}
			}
			break;
		
		case 2:
			if (func_88())
			{
				if (ENTITY::DOES_ENTITY_EXIST(func_90()))
				{
					TASK::TASK_VEHICLE_MISSION(func_90(), iLocal_71, 0, 5, 0f, 786484, 100f, 100f, true);
					iLocal_67++;
				}
			}
			break;
		
		case 3:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				if (ENTITY::GET_ENTITY_SPEED(iLocal_71) < 2f)
				{
					func_69(8);
				}
			}
			break;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(iLocal_71) && ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false))) && (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false), false) || PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false))))
	{
		iVar1 = 0;
		if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_71, -1, false) == iLocal_68[0])
		{
			iVar1 = 1;
		}
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_71, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) > 100f)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[iVar1]) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_68[iVar1], joaat("script_task_perform_sequence")) != 1)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68[iVar1], 2, true);
				TASK::OPEN_SEQUENCE_TASK(&iVar2);
				TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(0, iLocal_71, false);
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, iLocal_71, PLAYER::PLAYER_PED_ID(), 8, 50f, 786484, 100f, 5f, true);
				TASK::CLOSE_SEQUENCE_TASK(iVar2);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar1], iVar2);
				TASK::CLEAR_SEQUENCE_TASK(&iVar2);
			}
		}
		else
		{
			func_69(8);
		}
	}
	if (((((((!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) || OBJECT::DOES_PICKUP_EXIST(iLocal_154)) || iLocal_66 == 3) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_71, 0, 7000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_71, 3, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_71, 2, 30000)) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(iLocal_71, 1, 40000)) || (iLocal_67 > 1 && !func_89()))
	{
		if (!func_89())
		{
		}
		func_69(8);
	}
}

int func_88()
{
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_71))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_71, false))
		{
			if (((((ENTITY::GET_ENTITY_HEALTH(iLocal_71) < 300 || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_71) < 200f) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 1, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 4, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 5, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 0, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 4, false))) || (VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 1, false) && VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_71, 5, false)))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_89()
{
	int iVar0;
	
	iVar0 = 1;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_68[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, false))
			{
				iVar0 = 0;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_68[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_68[1], iLocal_71, false))
			{
				iVar0 = 0;
			}
		}
	}
	else
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_90()
{
	if (!PED::IS_PED_INJURED(iLocal_68[0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false))
	{
		return iLocal_68[0];
	}
	if (!PED::IS_PED_INJURED(iLocal_68[1]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false))
	{
		return iLocal_68[1];
	}
	return 0;
}

void func_91()
{
	int iVar0;
	int iVar1;
	
	switch (iLocal_67)
	{
		case 0:
			if (!bLocal_126)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
				{
					ENTITY::DETACH_ENTITY(iLocal_73, true, true);
				}
			}
			if ((!PED::IS_PED_INJURED(iLocal_68[0]) || !PED::IS_PED_INJURED(iLocal_68[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_28() < 20f)
				{
					func_4(&Local_157, cLocal_156, "RESEC_FFLEE", 8, 0, 0, 0);
				}
				iVar0 = 0;
				while (iVar0 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
					{
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 17, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68[iVar0], 128, true);
						PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68[iVar0], 16, true);
						PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 1, false);
						TASK::OPEN_SEQUENCE_TASK(&iVar1);
						if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iVar0], true))
						{
							TASK::TASK_LEAVE_ANY_VEHICLE(iLocal_68[iVar0], 0, 256);
						}
						TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
						TASK::CLOSE_SEQUENCE_TASK(iVar1);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iVar0], iVar1);
						TASK::CLEAR_SEQUENCE_TASK(&iVar1);
					}
					iVar0++;
				}
			}
			bLocal_130 = true;
			iLocal_67++;
			break;
		
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				if (func_92(iLocal_71, 1, 0, 0, 0, 0, 1, 0, 1))
				{
					iLocal_67++;
				}
			}
			break;
	}
}

int func_92(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) + 1;
	if (iParam4 || !ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			iVar2 = func_94(iParam0, (iVar0 - 1), bParam6, bParam7);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (iParam3 && iVar2 == PLAYER::PLAYER_PED_ID())
				{
				}
				else if (bParam2)
				{
					if (PED::IS_PED_A_PLAYER(iVar2))
					{
						iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2);
						if (((!PED::IS_PED_INJURED(iVar2) && iVar3 != func_11()) && func_93(iVar3, 1, 1)) || iParam8)
						{
							if (PLAYER::GET_PLAYER_WANTED_LEVEL(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar2)) == 0)
							{
								if (!bParam5)
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
				}
				else if (iParam1 == 0)
				{
					return 0;
				}
				else if (!PED::IS_PED_INJURED(iVar2))
				{
					return 0;
				}
			}
			iVar0++;
		}
	}
	return 1;
}

int func_93(int iParam0, bool bParam1, bool bParam2)
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

int func_94(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iParam1, bParam3))
	{
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1, bParam3);
	}
	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			iVar0 = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_vehicle")) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("script_task_leave_any_vehicle")) == 1)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false), ENTITY::GET_ENTITY_COORDS(iVar0, false)) < 10f)
					{
						return iVar0;
					}
				}
			}
			iVar0 = -1;
		}
	}
	return iVar0;
}

void func_95()
{
	if (!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1]))
	{
		switch (iLocal_67)
		{
			case 0:
				if (func_4(&Local_157, cLocal_156, "RESEC_CAR1", 8, 0, 0, 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
					{
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[0]))
						{
							func_96(0);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_68[0]);
						}
						if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[1]))
						{
							func_96(1);
						}
						else
						{
							TASK::CLEAR_PED_TASKS(iLocal_68[1]);
						}
						iLocal_67++;
					}
					else
					{
						func_96(0);
						func_96(1);
						iLocal_67 = 2;
					}
				}
				break;
			
			case 1:
				if (func_77(iLocal_147))
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iLocal_147]))
					{
						func_96(iLocal_147);
					}
					iLocal_67++;
				}
				break;
			
			case 2:
				if (!func_74())
				{
					if (func_4(&Local_157, cLocal_156, "RESEC_CAR2", 8, 0, 0, 0))
					{
						SYSTEM::SETTIMERA(0);
						iLocal_67++;
					}
				}
				break;
			
			case 3:
				if ((SYSTEM::TIMERA() > 12000 && !func_74()) && func_4(&Local_157, cLocal_156, "RESEC_CAR3", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					iLocal_67++;
				}
				break;
			
			case 4:
				if ((SYSTEM::TIMERA() > 7000 && !func_74()) && func_4(&Local_157, cLocal_156, "RESEC_CAR4", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_69(8);
				}
				break;
			}
	}
	if (iLocal_67 > 0)
	{
		func_78(-1, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_72))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iLocal_72, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
		{
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(iLocal_72, true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) > 10f)
			{
				func_69(7);
			}
		}
		if ((ENTITY::IS_ENTITY_DEAD(iLocal_72, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_72, false)) || (!ENTITY::IS_ENTITY_UPRIGHT(iLocal_72, 90f) && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_72, true)))
		{
			if (!func_81(iLocal_72))
			{
				func_69(7);
			}
			else
			{
				func_69(8);
			}
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), true))
		{
			func_69(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_68[1]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), true))
		{
			func_69(8);
		}
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_133)
		{
			func_69(8);
		}
	}
	if (bLocal_138)
	{
		func_69(8);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && func_73()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7))
	{
		func_69(2);
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		func_69(5);
	}
}

void func_96(int iParam0)
{
	if (!PED::IS_PED_INJURED(iLocal_68[iParam0]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		TASK::CLEAR_PED_TASKS(iLocal_68[iParam0]);
		TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
		if (PED::IS_PED_IN_ANY_VEHICLE(iLocal_68[iParam0], false))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 256);
		}
		TASK::TASK_CLEAR_LOOK_AT(0);
		TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
		TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
		TASK::TASK_PERFORM_SEQUENCE(iLocal_68[iParam0], iLocal_75);
		TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
		if (iLocal_148 == 0)
		{
			iLocal_148 = EVENT::ADD_SHOCKING_EVENT_AT_POSITION(118, ENTITY::GET_ENTITY_COORDS(iLocal_68[iParam0], true), -1f);
		}
	}
}

void func_97()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	
	switch (iLocal_67)
	{
		case 0:
			if (!PED::IS_PED_INJURED(iLocal_68[0]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[0], true);
			}
			if (!PED::IS_PED_INJURED(iLocal_68[1]))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[1], true);
			}
			if (func_104())
			{
				if (func_4(&Local_157, cLocal_156, "RESEC_ATT1", 8, 0, 0, 0))
				{
					SYSTEM::SETTIMERA(0);
					func_69(8);
				}
			}
			else if ((!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (func_103() || func_102())
				{
					func_4(&Local_157, cLocal_156, "RESEC_ENT1", 8, 0, 0, 0);
				}
				else if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
				{
					func_4(&Local_157, cLocal_156, "RESEC_WEP1", 8, 0, 0, 0);
				}
				else
				{
					func_4(&Local_157, cLocal_156, "RESEC_WARN", 8, 0, 0, 0);
				}
				SYSTEM::SETTIMERA(0);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED(iLocal_73))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[0]))
					{
						func_96(0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_68[0]);
					}
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[1]))
					{
						func_96(1);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_68[1]);
					}
					iLocal_67++;
				}
				else
				{
					func_96(0);
					func_96(1);
					iLocal_67 = 2;
				}
			}
			break;
		
		case 1:
			if (func_77(iLocal_147))
			{
				if (!PED::IS_PED_INJURED(iLocal_68[iLocal_147]))
				{
					func_96(iLocal_147);
				}
				iLocal_67++;
			}
			break;
		
		case 2:
			if (!func_101())
			{
				if (!func_100(iLocal_71, 1000) && SYSTEM::TIMERA() > 10000)
				{
					bVar0 = true;
				}
				else if (SYSTEM::TIMERA() > 7000)
				{
					SYSTEM::SETTIMERA(7000);
				}
				if (SYSTEM::TIMERA() > 5000)
				{
					if (func_103())
					{
						bVar0 = true;
					}
				}
				if (SYSTEM::TIMERA() > 10000)
				{
					if (func_102())
					{
						bVar0 = true;
					}
				}
				iVar1 = 0;
				while (iVar1 < iLocal_68)
				{
					if (!func_100(iLocal_68[iVar1], 1000) && (func_28() < 2f && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)))
					{
						bVar0 = true;
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar1], false))
					{
						if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[iVar1]) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[iVar1]))
						{
							bVar0 = true;
						}
					}
					iVar1++;
				}
				func_78(-1, 1);
				if (IntToFloat((MISC::GET_GAME_TIMER() - iLocal_517)) > MISC::GET_RANDOM_FLOAT_IN_RANGE(5000f, 7500f))
				{
					if (!func_74())
					{
						if (func_4(&Local_157, cLocal_156, "RESEC_WARN", 8, 0, 0, 0))
						{
							iLocal_517 = MISC::GET_GAME_TIMER();
						}
					}
				}
				if (bVar0)
				{
					func_98();
					func_69(8);
				}
			}
			break;
	}
	iVar2 = 0;
	while (iVar2 < iLocal_68)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar2]))
		{
			if ((PED::IS_PED_INJURED(iLocal_68[iVar2]) || ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar2], false)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar2], PLAYER::PLAYER_PED_ID(), false))
			{
				func_69(8);
			}
		}
		iVar2++;
	}
	if ((PED::IS_PED_INJURED(iLocal_68[0]) || PED::IS_PED_INJURED(iLocal_68[1])) || bLocal_138)
	{
		func_69(8);
	}
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && func_73())
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), true))
		{
			func_69(8);
		}
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		func_69(5);
	}
	if ((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6)) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
	{
		func_69(8);
	}
	if (func_28() > 20f || ((!iLocal_498[0] && !iLocal_498[1]) && func_28() > 5f))
	{
		func_69(7);
	}
}

void func_98()
{
	Global_21889 = 0;
	func_99();
}

void func_99()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_24034 = 0;
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_23023 = 6;
	}
}

int func_100(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = 0;
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if ((ENTITY::IS_ENTITY_A_PED(iParam0) && !PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))) || (ENTITY::IS_ENTITY_A_VEHICLE(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false)))
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true)) > fLocal_515)
				{
					iVar0 = 1;
				}
				if ((MISC::GET_GAME_TIMER() - iLocal_516) > iParam1)
				{
					fLocal_515 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iParam0, true));
					iLocal_516 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
	return iVar0;
}

int func_101()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_71, 20f, 20f, 5f, false, true, 0) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		{
			return 1;
		}
	}
	return 0;
}

int func_102()
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 1.7532f, 0.5984f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 3.3477f, 3.5984f), 2.8f, false, true, 0))
		{
			return 1;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
			{
				if ((!PED::IS_PED_IN_VEHICLE(iLocal_68[iVar0], iLocal_71, false) && PED::IS_PED_ON_SPECIFIC_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true)) < 400f)
				{
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_103()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_71)
		{
			if (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_104()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((!PED::IS_PED_INJURED(iLocal_68[0]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)) || (!PED::IS_PED_INJURED(iLocal_68[1]) && ENTITY::IS_ENTITY_AT_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), 20f, 20f, 5f, false, true, 0)))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_105(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_106(var uParam0, struct<3> Param1, int iParam4, int iParam5, bool bParam6, int iParam7, bool bParam8)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_136(uParam0, 0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_107(uParam0, Param1, iParam4, iParam5, bParam6, iParam7, bParam8);
}

void func_107(var uParam0, struct<3> Param1, var uParam4, int iParam5, bool bParam6, var uParam7, bool bParam8)
{
	int iVar0;
	
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2136380241) > 0)
	{
		return;
	}
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = uParam4;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_105(iVar0))
	{
		func_128();
	}
	if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (func_123(uParam0, bParam6, bParam8, 0))
		{
			func_122(uParam0, Param1, iParam5);
		}
		if (*uParam0)
		{
			*uParam0 = 0;
		}
		else if (uParam0->f_6 == 2)
		{
			if (func_112(iVar0))
			{
				if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
					{
						if (!func_105(iVar0))
						{
							func_138(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_111(1);
							}
						}
					}
				}
			}
		}
		else if (func_112(iVar0))
		{
			if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
			{
				if ((CAM::IS_SPHERE_VISIBLE(Param1, 1f) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam7)
				{
					if (!func_105(iVar0))
					{
						func_138(iVar0, -1);
						uParam0->f_3 = iVar0;
						if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
						{
							func_111(1);
						}
					}
				}
			}
		}
	}
	else
	{
		if (!MISC::IS_STRING_NULL(iVar0))
		{
			if (func_105(iVar0) && HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
		}
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				func_136(uParam0, iVar0, 1, 0);
			}
		}
		if (!func_123(uParam0, bParam6, bParam8, 0))
		{
			if ((!*uParam0 && !uParam0->f_1) && !func_110(uParam0))
			{
				func_108(uParam0);
			}
		}
	}
}

void func_108(var uParam0)
{
	if (func_109(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		CAM::STOP_GAMEPLAY_HINT(false);
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	uParam0->f_2 = -1;
	*uParam0 = 1;
}

int func_109(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
			{
				return 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_110(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_2 > 0)
	{
		iVar0 = (uParam0->f_10 / 2);
		if (uParam0->f_2 + iVar0) > MISC::GET_GAME_TIMER()
		{
			return 1;
		}
	}
	return 0;
}

int func_111(bool bParam0)
{
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (bParam0)
			{
				Global_114963.f_10058.f_100++;
			}
			return Global_114963.f_10058.f_100;
			break;
		
		case 4:
			if (bParam0)
			{
				Global_114963.f_10058.f_101++;
			}
			return Global_114963.f_10058.f_101;
			break;
		
		case 5:
		case 15:
			if (bParam0)
			{
				Global_114963.f_10058.f_102++;
			}
			return Global_114963.f_10058.f_102;
			break;
		
		default:
			break;
	}
	return 3;
}

int func_112(char* sParam0)
{
	if (!func_113(1, 1, 0))
	{
		if ((!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_105(sParam0)) || func_105("CMN_HINT"))
		{
			HUD::CLEAR_HELP(true);
		}
		return 0;
	}
	switch (Global_44921)
	{
		case 0:
		case 3:
			if (func_111(0) < 3)
			{
				return 1;
			}
			break;
		
		case 4:
			if (func_111(0) < 1)
			{
				return 1;
			}
			break;
		
		case 5:
		case 15:
			if (func_111(0) < 1)
			{
				return 1;
			}
			break;
		
		default:
			break;
	}
	return 0;
}

int func_113(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	if (bParam0)
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			return 0;
		}
	}
	if (bParam2)
	{
		return 1;
	}
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		return 0;
	}
	if (func_121(0))
	{
		return 0;
	}
	if (func_120())
	{
		return 0;
	}
	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		return 0;
	}
	if (Global_77397)
	{
		return 0;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appinternet")) > 0)
	{
		return 0;
	}
	if (Global_62244)
	{
		return 0;
	}
	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
				{
					return 0;
				}
			}
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
				{
					return 0;
				}
			}
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
			{
				return 0;
			}
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
			{
				return 0;
			}
		}
	}
	if ((func_119() || func_118(Global_4718592.f_197291)) || func_117())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			iVar1 = func_116(PLAYER::PLAYER_PED_ID(), 0);
			if (((VEHICLE::IS_TURRET_SEAT(iVar0, iVar1) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("apc") && iVar1 != -1)) || (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("akula") && iVar1 != -1)) || (((ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("riot2") && iVar1 == 0) && func_115(iVar0, 10)) && VEHICLE::GET_VEHICLE_MOD(iVar0, 10) != -1))
			{
				return 0;
			}
		}
	}
	if (Global_1963699)
	{
		return 0;
	}
	if (func_114(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return 1;
}

int func_114(int iParam0)
{
	if (iParam0 != func_11())
	{
		if (func_93(iParam0, 1, 1))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
		else if ((Global_1575095 && iParam0 == PLAYER::PLAYER_ID()) && func_93(iParam0, 1, 0))
		{
			return Global_2658293[iParam0 /*468*/].f_325.f_8 != -1;
		}
	}
	return 0;
}

int func_115(int iParam0, int iParam1)
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(iParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return 1;
					break;
				
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(iParam0, iParam1) > 0)
					{
						return 1;
					}
					break;
				}
			}
	}
	return 0;
}

int func_116(int iParam0, bool bParam1)
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

var func_117()
{
	return Global_2685152.f_20;
}

bool func_118(int iParam0)
{
	return iParam0 == 51;
}

var func_119()
{
	return Global_2685152.f_19;
}

bool func_120()
{
	return MISC::GET_GAME_TIMER() <= Global_24569.f_6481 + 100;
}

int func_121(int iParam0)
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

void func_122(var uParam0, struct<3> Param1, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar0 = uParam0->f_9;
	iVar1 = uParam0->f_10;
	if (iParam4 == 1726668277)
	{
		if (iVar0 < 1500)
		{
			iVar0 = 1500;
		}
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
	iVar2 = 2048;
	iVar3 = 3;
	TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

int func_123(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (uParam0->f_1)
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_127(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			if (func_110(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
		
		case 1:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_127(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_126(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
			}
			else
			{
				uParam0->f_5 = 2;
			}
			break;
		
		case 2:
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (!func_127(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (!func_126(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (!func_126(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
				{
					uParam0->f_5 = 0;
				}
				else if (!func_127(bParam1, bParam2, bParam3))
				{
					uParam0->f_5 = 0;
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - uParam0->f_4) > 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (func_125(bParam1, bParam2, bParam3))
						{
							uParam0->f_5 = 0;
						}
					}
					else if (func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_124(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					{
						uParam0->f_5 = 0;
					}
					else if (func_125(bParam1, bParam2, bParam3))
					{
						uParam0->f_5 = 0;
					}
				}
			}
			break;
		
		case 4:
			if (!func_110(uParam0))
			{
				uParam0->f_5 = 0;
			}
			break;
	}
	if (!func_113(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7)
	{
		func_128();
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_124(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_113(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_125(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_113(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 80))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

int func_126(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_113(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 140, true);
			PAD::DISABLE_CONTROL_ACTION(0, 80, true);
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_127(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_113(bParam0, bParam1, bParam2))
	{
		return 0;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0, 80, true);
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(0, 80) && MISC::GET_GAME_TIMER() > Global_117)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return 1;
			}
		}
	}
	return 0;
}

void func_128()
{
	MISC::SET_BIT(&Global_9503, 4);
}

void func_129(var uParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
	func_130(uParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, iParam5, bParam6);
}

void func_130(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		func_136(uParam0, 0, 0, 0);
	}
	uParam0->f_6 = 2;
	func_131(uParam0, iParam1, Param2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

void func_131(var uParam0, int iParam1, struct<3> Param2, char* sParam5, int iParam6, bool bParam7, var uParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	
	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		if (MISC::GET_GAME_TIMER() >= (uParam0->f_8 + uParam0->f_9))
		{
			uParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (MISC::IS_STRING_NULL(iVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			iVar0 = "CMN_HINT";
		}
		else
		{
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_105(iVar0))
	{
		func_128();
	}
	if (func_109(iParam1) && ENTITY::IS_ENTITY_VISIBLE(iParam1))
	{
		iVar1 = 0;
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1), true);
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1));
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iParam1)))
			{
				iVar1 = 1;
			}
		}
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_123(uParam0, bParam7, bParam9, 0))
			{
				func_132(uParam0, iParam1, Param2, iParam6);
			}
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_112(iVar0))
				{
					if ((MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0)) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if ((iVar1 && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
						{
							if (!func_105(iVar0))
							{
								func_138(iVar0, -1);
								uParam0->f_3 = iVar0;
								if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
								{
									func_111(1);
								}
							}
						}
					}
				}
			}
			else if (func_112(iVar0))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(iVar0))
				{
					if (((ENTITY::IS_ENTITY_ON_SCREEN(iParam1) && iVar1) && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()) && uParam8)
					{
						if (!func_105(iVar0))
						{
							func_138(iVar0, -1);
							uParam0->f_3 = iVar0;
							if (MISC::ARE_STRINGS_EQUAL("CMN_HINT", iVar0))
							{
								func_111(1);
							}
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
			{
				if (func_105(sParam5))
				{
					HUD::CLEAR_HELP(true);
				}
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(3) == 4)
					{
						func_136(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(6) == 4)
					{
						func_136(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(4) == 4)
					{
						func_136(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(5) == 4)
					{
						func_136(uParam0, iVar0, 1, 0);
					}
				}
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 3 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) == 4)
					{
						func_136(uParam0, iVar0, 1, 0);
					}
				}
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 3 || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == 4)
				{
					func_136(uParam0, iVar0, 1, 0);
				}
			}
			if (!func_123(uParam0, bParam7, bParam9, 0))
			{
				if ((!*uParam0 && !uParam0->f_1) && !func_110(uParam0))
				{
					func_108(uParam0);
				}
			}
		}
	}
	else
	{
		func_136(uParam0, iVar0, 0, 0);
	}
}

void func_132(var uParam0, int iParam1, struct<3> Param2, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	if (Global_1579271 == 1)
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1, false))
	{
		func_136(uParam0, 0, 0, 0);
	}
	if (func_135(Param2, 0f, 0f, 0f, 0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam1))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
			{
				if (PED::IS_PED_A_PLAYER(iVar0))
				{
					if (!func_133())
					{
						Param2 = { 0f, 0f, 1f };
					}
				}
				else if (PED::IS_PED_MALE(iVar0))
				{
					Param2 = { 0f, 0f, 1f };
				}
			}
		}
	}
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	iVar1 = uParam0->f_9;
	iVar2 = uParam0->f_10;
	if (iParam5 == 1726668277)
	{
		if (iVar1 < 1500)
		{
			iVar1 = 1500;
		}
		if (iVar2 < 1500)
		{
			iVar2 = 1500;
		}
	}
	CAM::SET_GAMEPLAY_ENTITY_HINT(iParam1, Param2, true, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1, -1, iVar3, iVar4);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
}

bool func_133()
{
	return func_134(PLAYER::PLAYER_ID());
}

int func_134(int iParam0)
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(iParam0)) == joaat("mp_f_freemode_01"))
	{
		return 1;
	}
	return 0;
}

bool func_135(struct<3> Param0, struct<3> Param3, bool bParam6)
{
	if (bParam6)
	{
		return (Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1);
	}
	return ((Param0.f_0 == Param3.f_0 && Param0.f_1 == Param3.f_1) && Param0.f_2 == Param3.f_2);
}

void func_136(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (BitTest(Global_2733190.f_3788, 26))
		{
			return;
		}
	}
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(bParam2);
		GRAPHICS::ANIMPOSTFX_STOP("FocusIn");
		AUDIO::STOP_AUDIO_SCENE("HINT_CAM_SCENE");
		if (uParam0->f_11)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("FocusOut", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusOut", "HintCamSounds", true);
			uParam0->f_11 = 0;
		}
	}
	if (!bParam3)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	}
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	sVar0 = iParam1;
	if (MISC::IS_STRING_NULL(sVar0))
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			sVar0 = "CMN_HINT";
		}
		else
		{
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!MISC::IS_STRING_NULL(uParam0->f_3))
	{
		if (func_105(uParam0->f_3))
		{
			HUD::CLEAR_HELP(true);
		}
	}
	if (!MISC::IS_STRING_NULL(sVar0))
	{
		if (func_105(sVar0))
		{
			HUD::CLEAR_HELP(true);
		}
	}
}

void func_137(bool bParam0)
{
	MISC::SET_BIT(&(Global_114963.f_25004.f_6), bParam0);
}

void func_138(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

bool func_139(int iParam0)
{
	return BitTest(Global_114963.f_25004.f_6, iParam0);
}

int func_140(int iParam0)
{
	if (func_143())
	{
		Global_114953 = 1;
		Global_114950 = MISC::GET_GAME_TIMER();
		if (func_57(Global_114952))
		{
			func_141(0);
		}
		HUD::SET_MISSION_NAME(true, "RE_TITLE");
		if (iParam0 && func_57(Global_114952))
		{
			HUD::FLASH_MINIMAP_DISPLAY();
		}
		return 1;
	}
	return 0;
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			if (Global_114963.f_25004.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_138(func_142(iParam0), -1);
					Global_114963.f_25004.f_2++;
					MISC::SET_BIT(&Global_114959, false);
				}
			}
			break;
		
		case 1:
			if (!BitTest(Global_114959, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_138(func_142(iParam0), -1);
					Global_114963.f_25004.f_3++;
					MISC::SET_BIT(&Global_114959, true);
				}
			}
			break;
		
		case 2:
			if (!BitTest(Global_114959, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_138(func_142(iParam0), -1);
					Global_114963.f_25004.f_4++;
					MISC::SET_BIT(&Global_114959, 2);
				}
			}
			break;
	}
}

char* func_142(int iParam0)
{
	char* sVar0;
	
	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "AM_H_REFS";
			break;
		
		case 1:
			sVar0 = "RE_FLASHBLIP";
			break;
		
		case 2:
			sVar0 = "RE_HANDOVER";
			break;
	}
	return sVar0;
}

int func_143()
{
	switch (func_144(&Global_33875, 0, 5, 0, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return 1;
			break;
		
		case 0:
			return 1;
			break;
	}
	return 0;
}

int func_144(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_99939.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_148(0))
		{
			return 0;
		}
		Global_44885++;
		*uParam0 = Global_44885;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24430.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44921 = iParam2;
		Global_44883 = *uParam0;
		Global_44884 = iParam4;
		Global_44882 = 0;
		return 1;
	}
	if (*uParam0 != -1)
	{
		if (Global_44882 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44882)
			{
				if (Global_44888[iVar0 /*4*/] == *uParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44883 == *uParam0)
		{
			return 1;
		}
		*uParam0 = -1;
	}
	if (*uParam0 == -1)
	{
		if (!func_146(iParam2))
		{
			return 0;
		}
		if (Global_44882 == 8)
		{
			return 0;
		}
		Global_44885++;
		*uParam0 = Global_44885;
		Global_44888[Global_44882 /*4*/] = Global_44885;
		Global_44888[Global_44882 /*4*/].f_1 = iParam1;
		Global_44888[Global_44882 /*4*/].f_2 = iParam2;
		Global_44888[Global_44882 /*4*/].f_3 = 0;
		Global_44882++;
		if (iParam4 != 0)
		{
			func_145(uParam0, iParam4);
		}
	}
	return 2;
}

void func_145(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44882 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44882)
	{
		if (Global_44888[iVar0 /*4*/] == *uParam0)
		{
			Global_44888[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_146(int iParam0)
{
	return func_147(iParam0, Global_44921);
}

int func_147(int iParam0, int iParam1)
{
	if (iParam1 == 15)
	{
		return 1;
	}
	if (iParam0 == 15)
	{
		return 0;
	}
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
					break;
			}
			return 1;
			break;
		
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 4:
			if (iParam1 == 17)
			{
				return 1;
			}
			break;
		
		case 5:
			break;
		
		case 6:
		case 8:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 7:
			if (iParam1 == 6)
			{
				return 1;
			}
			break;
		
		case 9:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
					break;
			}
			break;
		
		case 11:
			if (iParam1 == 5)
			{
				return 1;
			}
			break;
		
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
					break;
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
					break;
			}
			break;
		
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
		
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
					break;
			}
			break;
	}
	return 0;
}

int func_148(int iParam0)
{
	if (Global_44921 == 15)
	{
		return 0;
	}
	if (func_146(iParam0))
	{
		return 0;
	}
	return 1;
}

void func_149()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	
	switch (iLocal_67)
	{
		case 0:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
			{
				if (!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1]))
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[0], 6, true);
					PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[1], 6, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[0], true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[1], true);
					if (PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, false) && PED::IS_PED_IN_VEHICLE(iLocal_68[1], iLocal_71, false))
					{
						if (bLocal_64 == 2)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar0);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_71, -574.6195f, -847.232f, 25.2925f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_71, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar0);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_68[0], iVar0);
							TASK::CLEAR_SEQUENCE_TASK(&iVar0);
							iLocal_67++;
						}
						else if (bLocal_64 == 4)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar1);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_71, -551.2968f, -1119.418f, 20.4011f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_71, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar1);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_68[0], iVar1);
							TASK::CLEAR_SEQUENCE_TASK(&iVar1);
							iLocal_67++;
						}
						else if (bLocal_64 == 7)
						{
							TASK::OPEN_SEQUENCE_TASK(&iVar2);
							TASK::TASK_VEHICLE_DRIVE_TO_COORD(0, iLocal_71, 2786.752f, 4358.032f, 48.6794f, 10f, 0, joaat("stockade"), 786603, 2f, 4f);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_71, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iVar2);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_68[0], iVar2);
							TASK::CLEAR_SEQUENCE_TASK(&iVar2);
							iLocal_67++;
						}
						else
						{
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_68[0], iLocal_71, 10f, 786603);
							iLocal_67++;
						}
					}
					else
					{
						if (!PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_68[0], joaat("script_task_enter_vehicle")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_68[0], iLocal_71, -1, -1, 1f, 8388608, 0);
						}
						if (!PED::IS_PED_IN_VEHICLE(iLocal_68[1], iLocal_71, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_68[1], joaat("script_task_enter_vehicle")) != 1)
						{
							TASK::TASK_ENTER_VEHICLE(iLocal_68[1], iLocal_71, -1, 0, 1f, 8388608, 0);
						}
					}
				}
			}
			break;
		
		case 1:
			if (((((func_153() || func_152()) || func_103()) || func_102()) || func_151()) || func_150())
			{
				if (func_28() < 20f)
				{
					func_98();
					func_4(&Local_157, cLocal_156, "RESEC_VFLEE1", 8, 0, 0, 0);
				}
				func_69(6);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar3 = 0;
				while (iVar3 < iLocal_68)
				{
					if (!PED::IS_PED_INJURED(iLocal_68[iVar3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar3], false))
					{
						if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_68[iVar3]))
						{
							func_69(8);
						}
					}
					else
					{
						func_69(6);
					}
					iVar3++;
				}
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, true))
				{
					func_69(8);
				}
			}
			break;
	}
	if (iLocal_65 == 4)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar4, true);
			if ((iVar4 == joaat("weapon_stickybomb") || iVar4 == joaat("weapon_molotov")) || iVar4 == joaat("weapon_grenade"))
			{
				GRAPHICS::DRAW_DEBUG_TEXT("PLAYER HAS PROJECTILE WEAPON", ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 0, 0, 255, 255);
				if ((PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -13.44f, 3f), 2.3f, false, true, 0)) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) < 225f)
				{
					func_69(6);
				}
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -3.44f, -3f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, -13.44f, 3f), 2.3f, false, true, 0))
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS BEHIND VAN", 0.1f, 0.8f, 0f, 0, 0, 255, 255);
				}
				if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_71, true)) < 225f)
				{
					GRAPHICS::DRAW_DEBUG_TEXT_2D("PLAYER IS CLOSE TO VAN", 0.1f, 0.82f, 0f, 0, 0, 255, 255);
				}
				if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				{
				}
			}
		}
		if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_71, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_68[0]) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_68[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_68[1]) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true), 20f, 0)))
		{
			func_69(6);
		}
		if (iLocal_65 != 4)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[0]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[0], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[0], false);
			}
			if (!PED::IS_PED_INJURED(iLocal_68[1]))
			{
				PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[1], 6, false);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_68[1], false);
			}
		}
	}
}

int func_150()
{
	struct<3> Var0;
	struct<3> Var3;
	struct<3> Var6;
	
	if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) - ENTITY::GET_ENTITY_COORDS(iLocal_71, true) };
		Var3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iLocal_71) };
		Var6 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_71, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) };
		if (((Var6.f_1 > 1f && (((PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_71) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_71)) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[0])) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[1]))) && MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_0, Var3.f_1, Var0.f_0, Var0.f_1)) < 60f) && MISC::GET_ANGLE_BETWEEN_2D_VECTORS(Var3.f_2, Var3.f_1, Var0.f_2, Var0.f_1) < 30f)
		{
			return 1;
		}
	}
	return 0;
}

int func_151()
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 2.7f, -3.25f, 3f), 3f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, -2.7f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, -2.7f, -3.25f, 3f), 3f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 7f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_71, 0f, 0f, 3f), 2.4f, false, true, 0))
		{
			if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_152()
{
	int iVar0;
	
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
		{
			iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iLocal_71))
		{
			return ((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar0, iLocal_71)) && ENTITY::GET_ENTITY_SPEED(iVar0) > 10f);
		}
	}
	return 0;
}

int func_153()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_133)
		{
			return 1;
		}
		if (!PED::IS_PED_INJURED(iLocal_68[0]) || ENTITY::IS_ENTITY_DEAD(iLocal_68[0], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
		if (!PED::IS_PED_INJURED(iLocal_68[1]) || ENTITY::IS_ENTITY_DEAD(iLocal_68[1], false))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), true))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_154()
{
	float fVar0;
	
	if ((!PED::IS_PED_INJURED(iLocal_68[0]) && !PED::IS_PED_INJURED(iLocal_68[1])) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		switch (iLocal_67)
		{
			case 0:
				Local_502 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_71, 0) };
				Local_505 = { ENTITY::GET_ENTITY_ROTATION(iLocal_71, 2) };
				Local_508 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_502, Local_505, 0f, 2) };
				bLocal_513 = false;
				iLocal_514 = 0;
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_71, 5f);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
				TASK::TASK_STAND_STILL(0, 5000);
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_508, 1f, -1, 0.1f, 512, Local_505.f_2);
				TASK::TASK_ACHIEVE_HEADING(0, Local_505.f_2, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_68[1], iLocal_75);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
				iLocal_67++;
				break;
			
			case 1:
				Local_502 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(iLocal_71, 0) };
				Local_505 = { ENTITY::GET_ENTITY_ROTATION(iLocal_71, 2) };
				Local_508 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION("random@security_van", "sec_case_into_van_calm", Local_502, Local_505, 0f, 2) };
				if (!PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_94) < 22500f && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_71))
					{
						iLocal_512 = PED::CREATE_SYNCHRONIZED_SCENE(Local_502, Local_505, 2);
						TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68[0], iLocal_512, "random@security_van", "driver_idle", 2f, -8f, 13, 0, 1000f, 0);
						PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_512, true);
					}
				}
				if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_68[1], joaat("script_task_perform_sequence")) != 1)
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_75);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_508, 1f, -1, 0.1f, 512, Local_505.f_2);
					TASK::TASK_ACHIEVE_HEADING(0, Local_505.f_2, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_75);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_68[1], iLocal_75);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_75);
				}
				fVar0 = ENTITY::GET_ENTITY_HEADING(iLocal_68[1]);
				if (fVar0 > 180f)
				{
					fVar0 = (fVar0 - 360f);
				}
				if (fVar0 <= -180f)
				{
					fVar0 = (fVar0 + 360f);
				}
				if (Local_505.f_2 > 180f)
				{
					Local_505.f_2 = (Local_505.f_2 - 360f);
				}
				if (Local_505.f_2 <= -180f)
				{
					Local_505.f_2 = (Local_505.f_2 + 360f);
				}
				if (MISC::ABSF((fVar0 - Local_505.f_2)) < 15f && SYSTEM::VDIST(Local_508, ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true)) < 0.2f)
				{
					PED::CLEAR_PED_ALTERNATE_WALK_ANIM(iLocal_68[1], -8f);
					TASK::CLEAR_PED_TASKS(iLocal_68[1]);
					bLocal_513 = true;
					iLocal_511 = PED::CREATE_SYNCHRONIZED_SCENE(Local_502, Local_505, 2);
					TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68[1], iLocal_511, "random@security_van", "sec_case_into_van_calm", 4f, -4f, 3, 0, 4f, 0);
					ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, iLocal_511, "van_case_into_van_calm", "random@security_van", 4f, -1000f, 0, -1000f);
					iLocal_67++;
				}
				break;
			
			case 2:
				if (!iLocal_123)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > 0.09f) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) < 0.11f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[1], 20f, 20f, 5f, false, true, 0))
						{
							if (func_4(&Local_157, cLocal_156, "RESEC_CHT1", 3, 0, 0, 0))
							{
								iLocal_123 = 1;
							}
						}
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
				{
					if (!bLocal_126)
					{
						if ((ENTITY::DOES_ENTITY_EXIST(iLocal_73) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_68[1])) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > 0.3793f)
						{
							if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iLocal_73, iLocal_71))
							{
								ENTITY::DETACH_ENTITY(iLocal_73, true, true);
								ENTITY::SET_ENTITY_COLLISION(iLocal_73, false, false);
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_73, iLocal_71, 0, ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_71, ENTITY::GET_ENTITY_COORDS(iLocal_73, true)), 90f, 0f, 0f, false, false, false, false, 2, true, 0);
							}
							bLocal_126 = true;
						}
					}
					else if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > 0.546243f)
					{
						ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -4f, true);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
						{
							iLocal_123 = 0;
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 2, true);
							VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 3, true);
							iLocal_67++;
						}
					}
				}
				break;
			
			case 3:
				if (!iLocal_123)
				{
					if (((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > 0.56f) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_68[1], 20f, 20f, 5f, false, true, 0))
					{
						if (func_4(&Local_157, cLocal_156, "RESEC_CHT2", 3, 0, 0, 0))
						{
							iLocal_123 = 1;
						}
					}
				}
				if (!iLocal_514)
				{
					if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_511) > 0.6f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511))
					{
						if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
						{
							TASK::CLEAR_PED_TASKS(iLocal_68[0]);
							iLocal_512 = PED::CREATE_SYNCHRONIZED_SCENE(Local_502, Local_505, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(iLocal_68[0], iLocal_512, "random@security_van", "driver_exit_calm", 4f, -4f, 9, 0, 1000f, 0);
						}
						iLocal_514 = 1;
					}
				}
				else if ((PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512) && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_512) >= 0.92f) || !PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_512))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, false) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_68[0], joaat("script_task_enter_vehicle")) != 1)
					{
						TASK::CLEAR_PED_TASKS(iLocal_68[0]);
						TASK::TASK_ENTER_VEHICLE(iLocal_68[0], iLocal_71, -1, -1, 1f, 1, 0);
					}
				}
				if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511) && ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_68[1], MISC::GET_HASH_KEY("ENDS_IN_WALK")))
				{
					TASK::CLEAR_PED_TASKS(iLocal_68[1]);
					TASK::TASK_ENTER_VEHICLE(iLocal_68[1], iLocal_71, -1, 0, 1f, 1, 0);
					SYSTEM::SETTIMERA(0);
				}
				if ((func_89() && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 0) == 0f) && VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(iLocal_71, 1) == 0f)
				{
					func_69(4);
				}
				break;
			
			case 4:
				if (SYSTEM::TIMERA() > 15000)
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 0, true);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 1, true);
				}
				break;
		}
		if (((!PED::IS_PED_INJURED(func_3()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(func_3(), true)) < 30f) && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			func_69(8);
		}
	}
	if (!PED::IS_PED_INJURED(iLocal_68[1]))
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
		{
			func_69(7);
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_158())
		{
			if (func_89())
			{
				func_69(6);
			}
			else
			{
				func_69(8);
			}
		}
		else if (func_156())
		{
			func_69(2);
		}
		else if (func_155())
		{
			func_69(3);
		}
	}
	if (iLocal_65 != 1)
	{
		if (iLocal_65 != 4)
		{
			func_98();
			if (!PED::IS_PED_INJURED(iLocal_68[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_68[0], "random@security_van", "driver_idle", 3))
				{
					if (bLocal_64 != 2)
					{
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_68[0], "random@security_van", "driver_exit_panic", Local_502, Local_505, 1000f, -8f, -1, 4096, 0f, 2, 0);
					}
					else
					{
						TASK::CLEAR_PED_TASKS(iLocal_68[0]);
						TASK::TASK_PLAY_ANIM(iLocal_68[0], "random@security_van", "driver_exit_panic", 1000f, -8f, -1, 0, 0f, false, false, false);
					}
				}
			}
			if ((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_511)) && !PED::IS_PED_INJURED(iLocal_68[1]))
			{
				ENTITY::STOP_SYNCHRONIZED_ENTITY_ANIM(iLocal_71, -1000f, true);
				TASK::CLEAR_PED_TASKS(iLocal_68[1]);
			}
		}
		if (bLocal_126 && !OBJECT::DOES_PICKUP_EXIST(iLocal_154))
		{
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 2, true);
			VEHICLE::SET_VEHICLE_DOOR_SHUT(iLocal_71, 3, true);
		}
	}
}

int func_155()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (func_81(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
				{
					iLocal_72 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
					return 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
		{
			if (func_81(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
			{
				fLocal_497 = (fLocal_497 + MISC::GET_FRAME_TIME());
			}
			else if (fLocal_497 > 0f)
			{
				fLocal_497 = (fLocal_497 - (MISC::GET_FRAME_TIME() * 10f));
			}
			else if (fLocal_497 < 0f)
			{
				fLocal_497 = 0f;
			}
			if (fLocal_497 > 3f)
			{
				iLocal_72 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				return 1;
			}
		}
	}
	return 0;
}

int func_156()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_68[iVar0]) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), iLocal_68[iVar0]) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true)) < 9f) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7)) && func_73())
		{
			return 1;
		}
		if (PED::IS_PED_RAGDOLL(iLocal_68[iVar0]))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_102())
	{
		return 1;
	}
	if ((func_157() || func_103()) && func_73())
	{
		if (!PED::IS_PED_IN_VEHICLE(iLocal_68[0], iLocal_71, false) || !PED::IS_PED_IN_VEHICLE(iLocal_68[1], iLocal_71, false))
		{
			return 1;
		}
	}
	return 0;
}

int func_157()
{
	int iVar0;
	
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar0, true);
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 7) || (iVar0 == joaat("weapon_petrolcan") && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())))
		{
			if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
			{
				if (!PED::IS_PED_INJURED(iLocal_68[0]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_68[0], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
				if (!PED::IS_PED_INJURED(iLocal_68[1]))
				{
					if (ENTITY::IS_ENTITY_AT_ENTITY(iLocal_68[1], PLAYER::PLAYER_PED_ID(), 12f, 12f, 5f, false, true, 0))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

int func_158()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if ((((((!PED::IS_PED_INJURED(iLocal_68[iVar0]) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (!PED::IS_PED_INJURED(iLocal_68[iVar0]) && PED::IS_PED_IN_COMBAT(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID()))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), true)) || (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_71, PLAYER::PLAYER_PED_ID(), true) && func_73())) || PED::IS_PED_INJURED(iLocal_68[iVar0])) || ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar0], false))
		{
			return 1;
		}
		iVar0++;
	}
	if (func_151() || func_104())
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false))
	{
		iVar0 = 0;
		while (iVar0 < iLocal_68)
		{
			if (!PED::IS_PED_INJURED(iLocal_68[iVar0]))
			{
				if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_BEING_JACKED(iLocal_68[iVar0]))
				{
					return 1;
				}
			}
			iVar0++;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_71, true))
		{
			return 1;
		}
	}
	else
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
	{
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), Local_94, 25f, 25f, 20f, false, true, 0))
		{
			return 1;
		}
	}
	if (((VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_71, false) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_71, true), 25f, 0)) || (!PED::IS_PED_INJURED(iLocal_68[0]) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_68[0], true), 20f, 0))) || (!PED::IS_PED_INJURED(iLocal_68[1]) && func_38(0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_COORDS(iLocal_68[1], true), 20f, 0)))
	{
		return 1;
	}
	return 0;
}

int func_159()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_68[iVar0]))
		{
			if ((!PED::IS_PED_INJURED(iLocal_68[iVar0]) && !ENTITY::IS_ENTITY_DEAD(iLocal_68[iVar0], false)) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if ((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true), 5f, true) || func_38(ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true) + Vector(5f, 10f, 10f), ENTITY::GET_ENTITY_COORDS(iLocal_68[iVar0], true) - Vector(5f, 5f, 5f), 0f, 0f, 0f, 0, 0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_68[iVar0], PLAYER::PLAYER_PED_ID(), true))
				{
					bLocal_127 = true;
					return 1;
				}
			}
			else
			{
				bLocal_127 = true;
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_160()
{
	int iVar0;
	
	iLocal_71 = VEHICLE::CREATE_VEHICLE(iLocal_121, Local_94, fLocal_97, true, true, false);
	iLocal_74 = OBJECT::CREATE_OBJECT(joaat("prop_security_case_01"), Local_94, true, true, false);
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_74, iLocal_71, 0, 0f, -2.4589f, 1.2195f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	ENTITY::SET_ENTITY_VISIBLE(iLocal_74, false, false);
	ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(iLocal_74, iLocal_71, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_71, 5f);
	VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_71, 3);
	ENTITY::SET_ENTITY_PROOFS(iLocal_74, false, true, true, true, true, true, false, false);
	ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_71, true, 0f);
	ENTITY::SET_ENTITY_HEALTH(iLocal_71, 700, 0, 0);
	VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_71, false, 0);
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, true, 1);
	VEHICLE::SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(iLocal_71, false);
	VEHICLE::SET_VEHICLE_PROVIDES_COVER(iLocal_71, true);
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Local_94.f_0 - 200f), (Local_94.f_1 - 200f), (Local_94.f_0 + 200f), (Local_94.f_1 + 200f));
	if (iLocal_63 == 3)
	{
		iLocal_68[0] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_71, 26, iLocal_120, -1, true, true);
		iLocal_68[1] = PED::CREATE_PED_INSIDE_VEHICLE(iLocal_71, 26, iLocal_120, 0, true, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_71, true, true, false);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_71, true, 1);
	}
	else
	{
		iLocal_68[1] = PED::CREATE_PED(26, iLocal_120, Local_84[1 /*3*/], fLocal_91[1], true, true);
		iLocal_68[0] = PED::CREATE_PED(26, iLocal_120, Local_84[0 /*3*/], fLocal_91[0], true, true);
		TASK::TASK_LOOK_AT_ENTITY(iLocal_68[1], iLocal_68[0], -1, 0, 2);
	}
	func_86(iLocal_68[1]);
	PED::ADD_RELATIONSHIP_GROUP("Security_guards", &iLocal_83);
	iVar0 = 0;
	while (iVar0 < iLocal_68)
	{
		PED::SET_PED_MONEY(iLocal_68[iVar0], 0);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 1, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 13, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 6, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 8, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_68[iVar0], 10, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68[iVar0], 512, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_68[iVar0], 118, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_68[iVar0], 128, true);
		PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iLocal_68[iVar0], false);
		ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iLocal_68[iVar0], true, 0f);
		PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iLocal_68[iVar0], true);
		PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iLocal_68[iVar0], true);
		WEAPON::GIVE_WEAPON_TO_PED(iLocal_68[iVar0], joaat("weapon_pistol"), -1, false, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_68[iVar0], iLocal_83);
		PED::SET_PED_KEEP_TASK(iLocal_68[iVar0], true);
		ENTITY::SET_ENTITY_LOD_DIST(iLocal_68[iVar0], 250);
		iVar0++;
	}
	ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_68[1], true, 1);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), iLocal_83);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_83, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, iLocal_83, joaat("player"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, joaat("player"), iLocal_83);
	if (iLocal_63 == 1)
	{
		PED::SET_PED_PROP_INDEX(iLocal_68[0], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_68[0], false);
		PED::SET_PED_PROP_INDEX(iLocal_68[1], 0, 1, 0, false, 1);
		PED::SET_PED_SUFFERS_CRITICAL_HITS(iLocal_68[1], false);
	}
	if (func_17() == 0 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_75(&Local_157, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	if (func_17() == 1 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_75(&Local_157, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	if (func_17() == 2 && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_75(&Local_157, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	func_75(&Local_157, 3, iLocal_68[0], "SECVANGUY1", 0, 1);
	func_75(&Local_157, 4, iLocal_68[1], "SECVANGUY2", 0, 1);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_121, true);
	PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_120, true);
	if (iLocal_63 != 3)
	{
	}
}

float func_161(int iParam0, struct<3> Param1, bool bParam4)
{
	struct<3> Var0;
	
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
	}
	else
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Param1, bParam4);
}

bool func_162()
{
	func_170(&uLocal_334, iLocal_120);
	func_170(&uLocal_334, iLocal_121);
	func_170(&uLocal_334, iLocal_122);
	func_168(&uLocal_334, "random@security_van");
	func_168(&uLocal_334, "weapons@holster_1h");
	func_168(&uLocal_334, "move_injured_generic");
	func_167(&uLocal_334, 3);
	return func_163(&uLocal_334);
}

int func_163(var uParam0)
{
	int iVar0;
	
	if (!uParam0->f_145)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
			{
				return 0;
			}
			if (!func_164(uParam0[iVar0 /*18*/]))
			{
				return 0;
			}
		}
		iVar0++;
	}
	uParam0->f_145 = 0;
	return 1;
}

bool func_164(var uParam0)
{
	return func_165(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

int func_165(char* sParam0, char* sParam1, int iParam2)
{
	if (BitTest(sParam0, 30))
	{
		if (BitTest(sParam0, 29))
		{
			switch (func_166(sParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(iParam2);
					break;
				
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
					break;
				
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
					break;
				
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
					break;
				
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam2, sParam1);
					break;
				
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
					break;
				
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(sParam0, 27), -1);
					break;
				
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iParam2);
					break;
				
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(iParam2);
					break;
				
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
					break;
				
				default:
					break;
			}
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_166(var uParam0)
{
	bool bVar0;
	
	bVar0 = false;
	while (bVar0 < 10)
	{
		if (BitTest(uParam0, bVar0))
		{
			return bVar0;
		}
		bVar0++;
	}
	return -1;
}

void func_167(var uParam0, int iParam1)
{
	if (iParam1 > 0)
	{
		uParam0->f_147 = iParam1;
	}
}

void func_168(var uParam0, char* sParam1)
{
	func_169(uParam0, 1, -1, sParam1, 0);
}

void func_169(var uParam0, bool bParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			if (BitTest((*uParam0)[iVar0 /*18*/], bParam1))
			{
				if (iParam2 != -1)
				{
					if ((uParam0[iVar0 /*18*/])->f_1 == iParam2)
					{
						return;
					}
				}
				if (bParam1 != 4)
				{
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
					{
						if (MISC::ARE_STRINGS_EQUAL(&((uParam0[iVar0 /*18*/])->f_2), sParam3))
						{
							return;
						}
					}
				}
				if (bParam1 == 9)
				{
					return;
				}
			}
		}
		iVar0++;
	}
	if (!uParam0->f_145)
	{
		uParam0->f_145 = 1;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			StringCopy(&((uParam0[iVar0 /*18*/])->f_2), sParam3, 64);
			(uParam0[iVar0 /*18*/])->f_1 = iParam2;
			(*uParam0)[iVar0 /*18*/] = iParam4;
			MISC::SET_BIT(uParam0[iVar0 /*18*/], bParam1);
			MISC::SET_BIT(uParam0[iVar0 /*18*/], 30);
			return;
		}
		iVar0++;
	}
}

void func_170(var uParam0, int iParam1)
{
	func_169(uParam0, 0, iParam1, "NULL", 0);
}

int func_171()
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_60) < (75f * 75f))
		{
			return 1;
		}
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_178())
	{
		return 1;
	}
	if (func_172(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_172(float fParam0, bool bParam1)
{
	struct<27> Var0;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	bool bVar38;
	
	iVar33 = -1;
	fVar34 = fParam0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_19(func_17()))
		{
			iVar36 = func_62();
			iVar37 = 0;
			iVar37 = 0;
			while (iVar37 < 63)
			{
				iVar32 = iVar37;
				if (BitTest(Global_114963.f_18583[iVar32 /*6*/], 2) && !BitTest(Global_114963.f_18583[iVar32 /*6*/], 3))
				{
					func_173(iVar32, &Var0);
					fVar35 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var0.f_6, true);
					if (fVar35 < fVar34)
					{
						bVar38 = true;
						if (bParam1)
						{
							if (iVar36 != Var0.f_26)
							{
								bVar38 = false;
							}
						}
						if (bVar38)
						{
							iVar33 = iVar32;
							fVar34 = fVar35;
						}
					}
				}
				iVar37++;
			}
		}
	}
	return iVar33;
}

void func_173(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			func_174(uParam1, "Abigail1", func_176(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 1:
			func_174(uParam1, "Abigail2", func_176(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 2:
			func_174(uParam1, "Barry1", func_176(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 3:
			func_174(uParam1, "Barry2", func_176(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 4:
			func_174(uParam1, "Barry3", func_176(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 5:
			func_174(uParam1, "Barry3A", func_176(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 6:
			func_174(uParam1, "Barry3C", func_176(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 7:
			func_174(uParam1, "Barry4", func_176(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_175(iParam0), 0, 0);
			break;
		
		case 8:
			func_174(uParam1, "Dreyfuss1", func_176(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 9:
			func_174(uParam1, "Epsilon1", func_176(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 10:
			func_174(uParam1, "Epsilon2", func_176(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 11:
			func_174(uParam1, "Epsilon3", func_176(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 12:
			func_174(uParam1, "Epsilon4", func_176(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 13:
			func_174(uParam1, "Epsilon5", func_176(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 14:
			func_174(uParam1, "Epsilon6", func_176(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 15:
			func_174(uParam1, "Epsilon7", func_176(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 16:
			func_174(uParam1, "Epsilon8", func_176(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 17:
			func_174(uParam1, "Extreme1", func_176(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 18:
			func_174(uParam1, "Extreme2", func_176(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 19:
			func_174(uParam1, "Extreme3", func_176(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 20:
			func_174(uParam1, "Extreme4", func_176(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 21:
			func_174(uParam1, "Fanatic1", func_176(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_175(iParam0), 1, 0);
			break;
		
		case 22:
			func_174(uParam1, "Fanatic2", func_176(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_175(iParam0), 1, 0);
			break;
		
		case 23:
			func_174(uParam1, "Fanatic3", func_176(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_175(iParam0), 0, 1);
			break;
		
		case 24:
			func_174(uParam1, "Hao1", func_176(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_175(iParam0), 0, 1);
			break;
		
		case 25:
			func_174(uParam1, "Hunting1", func_176(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 26:
			func_174(uParam1, "Hunting2", func_176(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 27:
			func_174(uParam1, "Josh1", func_176(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 28:
			func_174(uParam1, "Josh2", func_176(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 29:
			func_174(uParam1, "Josh3", func_176(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 30:
			func_174(uParam1, "Josh4", func_176(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 31:
			func_174(uParam1, "Maude1", func_176(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 32:
			func_174(uParam1, "Minute1", func_176(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 33:
			func_174(uParam1, "Minute2", func_176(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 34:
			func_174(uParam1, "Minute3", func_176(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 35:
			func_174(uParam1, "MrsPhilips1", func_176(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 36:
			func_174(uParam1, "MrsPhilips2", func_176(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 37:
			func_174(uParam1, "Nigel1", func_176(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 38:
			func_174(uParam1, "Nigel1A", func_176(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 39:
			func_174(uParam1, "Nigel1B", func_176(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 40:
			func_174(uParam1, "Nigel1C", func_176(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 41:
			func_174(uParam1, "Nigel1D", func_176(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_175(iParam0), 1, 1);
			break;
		
		case 42:
			func_174(uParam1, "Nigel2", func_176(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 43:
			func_174(uParam1, "Nigel3", func_176(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 1);
			break;
		
		case 44:
			func_174(uParam1, "Omega1", func_176(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 45:
			func_174(uParam1, "Omega2", func_176(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 46:
			func_174(uParam1, "Paparazzo1", func_176(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 47:
			func_174(uParam1, "Paparazzo2", func_176(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 48:
			func_174(uParam1, "Paparazzo3", func_176(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 49:
			func_174(uParam1, "Paparazzo3A", func_176(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 50:
			func_174(uParam1, "Paparazzo3B", func_176(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 51:
			func_174(uParam1, "Paparazzo4", func_176(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 52:
			func_174(uParam1, "Rampage1", func_176(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 54:
			func_174(uParam1, "Rampage3", func_176(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 55:
			func_174(uParam1, "Rampage4", func_176(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 56:
			func_174(uParam1, "Rampage5", func_176(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_175(iParam0), 0, 0);
			break;
		
		case 53:
			func_174(uParam1, "Rampage2", func_176(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_175(iParam0), 1, 0);
			break;
		
		case 57:
			func_174(uParam1, "TheLastOne", func_176(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 58:
			func_174(uParam1, "Tonya1", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 59:
			func_174(uParam1, "Tonya2", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 60:
			func_174(uParam1, "Tonya3", func_176(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 61:
			func_174(uParam1, "Tonya4", func_176(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		case 62:
			func_174(uParam1, "Tonya5", func_176(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_175(iParam0), 0, 1);
			break;
		
		default:
			break;
	}
}

void func_174(var uParam0, char* sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, struct<3> Param7, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, var uParam22, int iParam23, int iParam24)
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { Param2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { Param7 };
	uParam0->f_9 = iParam10;
	StringCopy(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = uParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

int func_175(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
			break;
		
		case 1:
			return 0;
			break;
		
		case 2:
			return 1;
			break;
		
		case 3:
			return 1;
			break;
		
		case 4:
			return 0;
			break;
		
		case 5:
			return 1;
			break;
		
		case 6:
			return 1;
			break;
		
		case 7:
			return 0;
			break;
		
		case 8:
			return 1;
			break;
		
		case 9:
			return 0;
			break;
		
		case 10:
			return 0;
			break;
		
		case 11:
			return 0;
			break;
		
		case 12:
			return 1;
			break;
		
		case 13:
			return 0;
			break;
		
		case 14:
			return 1;
			break;
		
		case 15:
			return 0;
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
			return 1;
			break;
		
		case 23:
			return 1;
			break;
		
		case 24:
			return 1;
			break;
		
		case 25:
			return 1;
			break;
		
		case 26:
			return 1;
			break;
		
		case 27:
			return 0;
			break;
		
		case 28:
			return 1;
			break;
		
		case 29:
			return 1;
			break;
		
		case 30:
			return 1;
			break;
		
		case 31:
			return 0;
			break;
		
		case 32:
			return 1;
			break;
		
		case 33:
			return 1;
			break;
		
		case 34:
			return 1;
			break;
		
		case 35:
			return 0;
			break;
		
		case 36:
			return 0;
			break;
		
		case 37:
			return 0;
			break;
		
		case 38:
			return 1;
			break;
		
		case 39:
			return 1;
			break;
		
		case 40:
			return 1;
			break;
		
		case 41:
			return 1;
			break;
		
		case 42:
			return 1;
			break;
		
		case 43:
			return 1;
			break;
		
		case 44:
			return 0;
			break;
		
		case 45:
			return 0;
			break;
		
		case 46:
			return 1;
			break;
		
		case 47:
			return 1;
			break;
		
		case 48:
			return 0;
			break;
		
		case 49:
			return 1;
			break;
		
		case 50:
			return 1;
			break;
		
		case 51:
			return 1;
			break;
		
		case 52:
			return 1;
			break;
		
		case 54:
			return 1;
			break;
		
		case 55:
			return 1;
			break;
		
		case 56:
			return 1;
			break;
		
		case 53:
			return 1;
			break;
		
		case 57:
			return 1;
			break;
		
		case 58:
			return 1;
			break;
		
		case 59:
			return 1;
			break;
		
		case 60:
			return 1;
			break;
		
		case 61:
			return 1;
			break;
		
		case 62:
			return 1;
			break;
		
		default:
			break;
	}
	return 0;
}

struct<2> func_176(int iParam0)
{
	struct<2> Var0;
	char[] cVar2[8];
	
	StringCopy(&Var0, "", 8);
	cVar2 = { func_177(iParam0) };
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar2))
	{
	}
	else
	{
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

struct<2> func_177(int iParam0)
{
	struct<2> Var0;
	
	StringCopy(&Var0, "", 8);
	switch (iParam0)
	{
		case 0:
			StringCopy(&Var0, "ABI1", 8);
			break;
		
		case 1:
			StringCopy(&Var0, "ABI2", 8);
			break;
		
		case 2:
			StringCopy(&Var0, "BA1", 8);
			break;
		
		case 3:
			StringCopy(&Var0, "BA2", 8);
			break;
		
		case 4:
			StringCopy(&Var0, "BA3", 8);
			break;
		
		case 5:
			StringCopy(&Var0, "BA3A", 8);
			break;
		
		case 6:
			StringCopy(&Var0, "BA3C", 8);
			break;
		
		case 7:
			StringCopy(&Var0, "BA4", 8);
			break;
		
		case 8:
			StringCopy(&Var0, "DRE1", 8);
			break;
		
		case 9:
			StringCopy(&Var0, "EPS1", 8);
			break;
		
		case 10:
			StringCopy(&Var0, "EPS2", 8);
			break;
		
		case 11:
			StringCopy(&Var0, "EPS3", 8);
			break;
		
		case 12:
			StringCopy(&Var0, "EPS4", 8);
			break;
		
		case 13:
			StringCopy(&Var0, "EPS5", 8);
			break;
		
		case 14:
			StringCopy(&Var0, "EPS6", 8);
			break;
		
		case 15:
			StringCopy(&Var0, "EPS7", 8);
			break;
		
		case 16:
			StringCopy(&Var0, "EPS8", 8);
			break;
		
		case 17:
			StringCopy(&Var0, "EXT1", 8);
			break;
		
		case 18:
			StringCopy(&Var0, "EXT2", 8);
			break;
		
		case 19:
			StringCopy(&Var0, "EXT3", 8);
			break;
		
		case 20:
			StringCopy(&Var0, "EXT4", 8);
			break;
		
		case 21:
			StringCopy(&Var0, "FAN1", 8);
			break;
		
		case 22:
			StringCopy(&Var0, "FAN2", 8);
			break;
		
		case 23:
			StringCopy(&Var0, "FAN3", 8);
			break;
		
		case 24:
			StringCopy(&Var0, "HAO1", 8);
			break;
		
		case 25:
			StringCopy(&Var0, "HUN1", 8);
			break;
		
		case 26:
			StringCopy(&Var0, "HUN2", 8);
			break;
		
		case 27:
			StringCopy(&Var0, "JOS1", 8);
			break;
		
		case 28:
			StringCopy(&Var0, "JOS2", 8);
			break;
		
		case 29:
			StringCopy(&Var0, "JOS3", 8);
			break;
		
		case 30:
			StringCopy(&Var0, "JOS4", 8);
			break;
		
		case 31:
			StringCopy(&Var0, "MAU1", 8);
			break;
		
		case 32:
			StringCopy(&Var0, "MIN1", 8);
			break;
		
		case 33:
			StringCopy(&Var0, "MIN2", 8);
			break;
		
		case 34:
			StringCopy(&Var0, "MIN3", 8);
			break;
		
		case 35:
			StringCopy(&Var0, "MRS1", 8);
			break;
		
		case 36:
			StringCopy(&Var0, "MRS2", 8);
			break;
		
		case 37:
			StringCopy(&Var0, "NI1", 8);
			break;
		
		case 38:
			StringCopy(&Var0, "NI1A", 8);
			break;
		
		case 39:
			StringCopy(&Var0, "NI1B", 8);
			break;
		
		case 40:
			StringCopy(&Var0, "NI1C", 8);
			break;
		
		case 41:
			StringCopy(&Var0, "NI1D", 8);
			break;
		
		case 42:
			StringCopy(&Var0, "NI2", 8);
			break;
		
		case 43:
			StringCopy(&Var0, "NI3", 8);
			break;
		
		case 44:
			StringCopy(&Var0, "OME1", 8);
			break;
		
		case 45:
			StringCopy(&Var0, "OME2", 8);
			break;
		
		case 46:
			StringCopy(&Var0, "PA1", 8);
			break;
		
		case 47:
			StringCopy(&Var0, "PA2", 8);
			break;
		
		case 48:
			StringCopy(&Var0, "PA3", 8);
			break;
		
		case 49:
			StringCopy(&Var0, "PA3A", 8);
			break;
		
		case 50:
			StringCopy(&Var0, "PA3B", 8);
			break;
		
		case 51:
			StringCopy(&Var0, "PA4", 8);
			break;
		
		case 52:
			StringCopy(&Var0, "RAM1", 8);
			break;
		
		case 53:
			StringCopy(&Var0, "RAM2", 8);
			break;
		
		case 54:
			StringCopy(&Var0, "RAM3", 8);
			break;
		
		case 55:
			StringCopy(&Var0, "RAM4", 8);
			break;
		
		case 56:
			StringCopy(&Var0, "RAM5", 8);
			break;
		
		case 57:
			StringCopy(&Var0, "SAS1", 8);
			break;
		
		case 58:
			StringCopy(&Var0, "TON1", 8);
			break;
		
		case 59:
			StringCopy(&Var0, "TON2", 8);
			break;
		
		case 60:
			StringCopy(&Var0, "TON3", 8);
			break;
		
		case 61:
			StringCopy(&Var0, "TON4", 8);
			break;
		
		case 62:
			StringCopy(&Var0, "TON5", 8);
			break;
		
		default:
			break;
	}
	return Var0;
}

int func_178()
{
	if (func_181() && !func_182())
	{
		return 1;
	}
	if (func_180() && func_179())
	{
		return 1;
	}
	return 0;
}

bool func_179()
{
	return Global_114681 > 0;
}

int func_180()
{
	if (Global_99383 != -1)
	{
		return 1;
	}
	return 0;
}

int func_181()
{
	if (Global_99383 != -1)
	{
		return BitTest(Global_93249[Global_99383 /*34*/].f_15, 20);
	}
	return 0;
}

int func_182()
{
	if (MISC::IS_PC_VERSION())
	{
		if (MISC::GET_CITY_DENSITY() == 1f)
		{
			return 1;
		}
	}
	return 0;
}

int func_183()
{
	if (!func_146(5))
	{
		return 1;
	}
	if (func_178())
	{
		return 1;
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_182())
		{
			return 0;
		}
	}
	if (func_172(100f, 1) != -1)
	{
		return 1;
	}
	return 0;
}

int func_184()
{
	if ((Global_114952 == func_66() && MISC::GET_RANDOM_EVENT_FLAG()) && Global_114953)
	{
		return 1;
	}
	return 0;
}

void func_185(var uParam0)
{
	int iVar0;
	
	if (uParam0->f_145)
	{
		if ((MISC::GET_FRAME_COUNT() >= (uParam0->f_146 + uParam0->f_147) || BitTest(Global_102486.f_20, 2)) || BitTest(Global_102486.f_20, 13))
		{
			iVar0 = 0;
			while (iVar0 < 8)
			{
				if (BitTest((*uParam0)[iVar0 /*18*/], 30))
				{
					if (!BitTest((*uParam0)[iVar0 /*18*/], 29))
					{
						func_186(uParam0[iVar0 /*18*/]);
						uParam0->f_146 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
				iVar0++;
			}
		}
	}
}

void func_186(int* iParam0)
{
	func_187(iParam0, &(iParam0->f_2), iParam0->f_1);
}

void func_187(int* iParam0, char* sParam1, int iParam2)
{
	if (BitTest(*iParam0, 30))
	{
		switch (func_166(*iParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(iParam2);
				break;
			
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, BitTest(*iParam0, 28));
				break;
			
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, BitTest(*iParam0, 27), -1);
				break;
			
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(iParam2);
				break;
			
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, iParam2);
				break;
			
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
			
			default:
				break;
		}
		MISC::SET_BIT(iParam0, 29);
	}
}

void func_188()
{
	iLocal_122 = joaat("prop_security_case_01");
	iLocal_121 = joaat("stockade");
	iLocal_120 = joaat("s_m_m_armoured_01");
	iLocal_145 = MISC::GET_RANDOM_INT_IN_RANGE(3000, 8000);
	switch (bLocal_64)
	{
		case 1:
			Local_113 = { -315.889f, -1550.554f, 7.233013f };
			Local_116 = { -315.2352f, -1366.581f, 45.29617f };
			fLocal_119 = 180f;
			Local_94 = { -331.8429f, -1461.042f, 30.153f };
			fLocal_97 = -64.3539f;
			Local_84[0 /*3*/] = { -335.564f, -1462.237f, 29.5452f };
			fLocal_91[0] = 158.3857f;
			Local_84[1 /*3*/] = { -342.7024f, -1475.043f, 29.6004f };
			fLocal_91[1] = 290.3041f;
			iLocal_63 = 1;
			break;
		
		case 2:
			Local_113 = { -538.2149f, -868.7426f, 17.96054f };
			Local_116 = { -663.8162f, -867.9987f, 53.66249f };
			fLocal_119 = 121.5f;
			Local_94 = { -588.5128f, -866.9584f, 25.32786f };
			fLocal_97 = -89.02679f;
			Local_84[0 /*3*/] = { -589.4673f, -865.4055f, 24.7622f };
			fLocal_91[0] = 12.5464f;
			Local_84[1 /*3*/] = { -578.4414f, -874.5964f, 24.9183f };
			fLocal_91[1] = 352.4951f;
			iLocal_63 = 1;
			break;
		
		case 3:
			Local_113 = { -468.6309f, 6101.907f, 14.8912f };
			Local_116 = { -359.9734f, 5994.152f, 50.36843f };
			fLocal_119 = 152.25f;
			Local_94 = { -395.6852f, 6056.967f, 30.5001f };
			fLocal_97 = 188.9862f;
			Local_84[0 /*3*/] = { -398.4612f, 6051.296f, 30.5003f };
			fLocal_91[0] = 251.7138f;
			Local_84[1 /*3*/] = { -378.408f, 6035.689f, 30.498f };
			fLocal_91[1] = 154.0836f;
			iLocal_63 = 2;
			break;
		
		case 4:
			Local_113 = { -631.3408f, -1105.581f, 7.220509f };
			Local_116 = { -462.1721f, -1103.597f, 62.53583f };
			fLocal_119 = 177.25f;
			Local_94 = { -595.7766f, -1094.089f, 21.1785f };
			fLocal_97 = 263.4662f;
			Local_84[0 /*3*/] = { -600.8182f, -1103.778f, 21.3292f };
			fLocal_91[0] = 338.8304f;
			Local_84[1 /*3*/] = { -595.3461f, -1096.054f, 21.1785f };
			fLocal_91[1] = 151.297f;
			iLocal_63 = 1;
			break;
		
		case 5:
			Local_94 = { -1042.768f, -1049.296f, 1.0825f };
			fLocal_97 = 26.9919f;
			iLocal_63 = 3;
			break;
		
		case 6:
			Local_94 = { -595.5618f, -667.7325f, 31.0544f };
			fLocal_97 = 271.1543f;
			iLocal_63 = 3;
			break;
		
		case 7:
			Local_94 = { 3018.384f, 3634.017f, 70.4076f };
			fLocal_97 = 335.9052f;
			iLocal_63 = 3;
			break;
		
		case 8:
			Local_94 = { -2815.661f, 2208.171f, 27.8382f };
			fLocal_97 = 119.1519f;
			iLocal_63 = 3;
			break;
		
		case 9:
			Local_94 = { 856.7742f, -2067.845f, 29.0704f };
			fLocal_97 = 83.1204f;
			iLocal_63 = 3;
			break;
		
		case 10:
			Local_94 = { 805.1932f, -703.1327f, 28.1632f };
			fLocal_97 = 248.8625f;
			iLocal_63 = 3;
			break;
		
		default:
			break;
	}
}

void func_189(int iParam0)
{
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	func_191(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_114949 = 0;
	func_190();
}

void func_190()
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}
}

void func_191(int iParam0)
{
	Global_114952 = iParam0;
}

int func_192(struct<3> Param0, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	struct<3> Var1;
	int iVar4;
	struct<3> Var5;
	int iVar8;
	
	if (!Global_153557)
	{
		return 0;
	}
	if (iParam3 == -1)
	{
		iParam3 = func_66();
	}
	if (iParam3 == -1)
	{
		return 0;
	}
	if (iParam3 == 31 || iParam3 == 32)
	{
		if (!func_231())
		{
			return 0;
		}
	}
	Local_60 = { Param0 };
	bVar0 = false;
	if (!bVar0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_182())
			{
				return 0;
			}
		}
		if (!Global_114963.f_9094)
		{
			return 0;
		}
		if (func_51(0))
		{
			return 0;
		}
		if (func_178())
		{
			return 0;
		}
		if (func_230())
		{
			return 0;
		}
		if (Global_114952 != -1)
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_172(100f, 1) != -1)
			{
				return 0;
			}
		}
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
		{
			if ((Var1.f_2 - Local_60.f_2) > 50f)
			{
				return 0;
			}
		}
		if (!func_229(iParam3))
		{
			return 0;
		}
		if (func_19(func_17()))
		{
			if (func_228(func_17()) == 4 || func_228(func_17()) == 5)
			{
				return 0;
			}
		}
		if (func_19(func_17()))
		{
			if (!func_227(iParam3, bParam4, 145))
			{
				return 0;
			}
		}
		if (!func_226(Global_114963.f_25004.f_43[iParam3]))
		{
			return 0;
		}
		if ((MISC::GET_GAME_TIMER() - Global_114954) < 150000)
		{
			if (iParam3 != 30)
			{
				return 0;
			}
		}
		if (func_225())
		{
			return 0;
		}
		if (MISC::GET_MISSION_FLAG())
		{
			return 0;
		}
		if (MISC::GET_RANDOM_EVENT_FLAG())
		{
			return 0;
		}
		if (!func_217(4))
		{
			return 0;
		}
		if (!func_146(5))
		{
			return 0;
		}
		if (func_216(iParam3, bParam4) && !bParam5)
		{
			return 0;
		}
		if (Global_4 && iParam3 != 10)
		{
			return 0;
		}
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
		{
			if ((INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f)) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.564f, -244.3f, 15.8053f))
			{
				return 0;
			}
		}
		if ((iParam3 == 9 && (bParam4 == 2 || bParam4 == 5)) && !func_216(0, 0))
		{
			return 0;
		}
		if (Global_33962)
		{
			return 0;
		}
		if (func_229(30) && !func_216(30, 0))
		{
			if (iParam3 != 30)
			{
				if (SYSTEM::VDIST2(Var1, -61.2745f, -1100.468f, 25.3752f) < 176400f)
				{
					return 0;
				}
			}
		}
		if (func_19(func_17()))
		{
			iVar4 = 0;
			while (iVar4 < 3)
			{
				Var5 = { Global_114963.f_2370.f_539.f_2300[iVar4 /*3*/] };
				iVar8 = Global_114963.f_2370.f_539.f_2296[iVar4];
				if (func_215(iVar8))
				{
					if (func_193(iVar4))
					{
						if (!func_135(Var5, 0f, 0f, 0f, 0))
						{
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var5) < (210f * 210f))
							{
								if (func_17() != iVar4)
								{
									return 0;
								}
							}
						}
					}
				}
				iVar4++;
			}
		}
	}
	return 1;
}

bool func_193(int iParam0)
{
	int iVar0;
	
	iVar0 = Global_114963.f_2370.f_539.f_2296[iParam0];
	return func_194(iVar0);
}

int func_194(int iParam0)
{
	return func_195(iParam0, 1);
}

int func_195(int iParam0, int iParam1)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (!func_215(iParam0))
	{
		return 0;
	}
	func_196(iParam0, &uVar0, &uVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	if (((iVar5 > 0 || iVar4 > 0) || iVar3 > 0) || iVar2 >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_196(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_197(func_208(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_197(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	if (func_207(iParam0, iParam1))
	{
		iVar0 = func_206(iParam1);
		iVar1 = func_204(iParam0);
		iVar2 = (func_204(iParam0) - func_204(iParam1));
		iVar3 = (func_206(iParam0) - func_206(iParam1));
		iVar4 = (func_203(iParam0) - func_203(iParam1));
		iVar5 = (func_202(iParam0) - func_202(iParam1));
		iVar6 = (func_201(iParam0) - func_201(iParam1));
		iVar7 = (func_200(iParam0) - func_200(iParam1));
	}
	else
	{
		iVar0 = func_206(iParam0);
		iVar1 = func_204(iParam1);
		iVar2 = (func_204(iParam1) - func_204(iParam0));
		iVar3 = (func_206(iParam1) - func_206(iParam0));
		iVar4 = (func_203(iParam1) - func_203(iParam0));
		iVar5 = (func_202(iParam1) - func_202(iParam0));
		iVar6 = (func_201(iParam1) - func_201(iParam0));
		iVar7 = (func_200(iParam1) - func_200(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_199(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = SYSTEM::ROUND(func_198(SYSTEM::TO_FLOAT(iVar0 + 1), 0f, 12f));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

float func_198(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	
	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(SYSTEM::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

int func_199(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
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
			break;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
			break;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
			break;
	}
	return 30;
}

int func_200(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_201(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_202(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_203(int iParam0)
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_204(int iParam0)
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_205(BitTest(iParam0, 31), -1, 1)) + 2011;
}

int func_205(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_206(int iParam0)
{
	return iParam0 & 15;
}

int func_207(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (!func_215(iParam1) || !func_215(iParam0))
	{
		return 1;
	}
	iVar0 = func_204(iParam0);
	iVar1 = func_204(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_206(iParam0);
	iVar1 = func_206(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_203(iParam0);
	iVar1 = func_203(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_202(iParam0);
	iVar1 = func_202(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_201(iParam0);
	iVar1 = func_201(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	else if (iVar0 < iVar1)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	iVar1 = func_200(iParam1);
	if (iVar0 > iVar1)
	{
		return 1;
	}
	return 0;
}

int func_208()
{
	var uVar0;
	
	func_214(&uVar0, CLOCK::GET_CLOCK_SECONDS());
	func_213(&uVar0, CLOCK::GET_CLOCK_MINUTES());
	func_212(&uVar0, CLOCK::GET_CLOCK_HOURS());
	func_211(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_210(&uVar0, CLOCK::GET_CLOCK_MONTH());
	func_209(&uVar0, CLOCK::GET_CLOCK_YEAR());
	return uVar0;
}

void func_209(var uParam0, int iParam1)
{
	if (iParam1 <= 0)
	{
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 2011)
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_210(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15);
	*uParam0 = (*uParam0 || iParam1);
}

void func_211(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_206(*uParam0);
	iVar1 = func_204(*uParam0);
	if (iParam1 < 1 || iParam1 > func_199(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 496);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

void func_212(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 24)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 15872);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}

void func_213(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 1032192);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}

void func_214(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 66060288);
	*uParam0 = (*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}

int func_215(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_200(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_201(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_202(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_204(iParam0);
	if ((iVar3 <= 0 || iVar3 > 2043) || iVar3 < 1979)
	{
		return 0;
	}
	iVar4 = func_206(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_203(iParam0);
	if (iVar5 < 1 || iVar5 > func_199(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_216(int iParam0, bool bParam1)
{
	if (BitTest(Global_114963.f_25004.f_8[iParam0], bParam1))
	{
		return 1;
	}
	return 0;
}

int func_217(int iParam0)
{
	int iVar0;
	
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				iVar0 = func_17();
				if (!func_19(iVar0))
				{
					return 0;
				}
				switch (iParam0)
				{
					case 9:
					case 0:
						if (((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_114010) || Global_33818) || func_224()) || func_25(8, -1)) || func_223()) || func_222()) || func_221()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 1:
						if (((((((((PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_1()) || Global_33818) || func_224()) || func_25(8, -1)) || func_221()) || func_223()) || func_222()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 2:
						if ((((((((((((((((((!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_114010) || Global_33818) || func_224()) || func_25(8, -1)) || func_221()) || func_223()) || func_222()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5) || Global_45468 != -1)
						{
							return 0;
						}
						break;
					
					case 3:
						if ((((((((((((PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0)) || func_1()) || Global_114010) || Global_33818) || func_224()) || func_25(8, -1)) || func_223()) || func_222()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 4:
						if (((((func_1() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || func_25(8, -1)) || func_220()) || func_219()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 5:
						if ((((func_25(8, -1) || func_223()) || func_222()) || func_219()) || func_218())
						{
							return 0;
						}
						if ((STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3) && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
						{
							return 0;
						}
						break;
					
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
						{
							if ((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_1()) || Global_33818) || func_224()) || func_25(8, -1)) || func_222()) || func_221()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5)
							{
								return 0;
							}
						}
						break;
					
					case 7:
						if ((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || func_1()) || func_222()) || Global_114010) || Global_33818) || func_224()) || Global_46147) || func_25(8, -1)) || func_221()) || func_219()) || func_220()) || Global_114963.f_7697.f_919[iVar0] == 5)
						{
							return 0;
						}
						break;
					
					case 8:
						if (((((((((((((((((((((PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID())) || !CAM::IS_SCREEN_FADED_IN()) || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || func_1()) || Global_114010) || Global_33818) || func_224()) || func_25(8, -1)) || func_221()) || func_219()) || func_223()) || func_222()) || func_220())
						{
							return 0;
						}
						break;
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
	else
	{
		return 0;
	}
	return 1;
}

var func_218()
{
	return Global_102525.f_1;
}

int func_219()
{
	if (Global_99383 != -1)
	{
		return BitTest(Global_93249[Global_99383 /*34*/].f_15, 13);
	}
	return 0;
}

int func_220()
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0)
	{
		return 1;
	}
	return 0;
}

int func_221()
{
	if (Global_80598)
	{
		return 1;
	}
	else if (Global_65057 && !Global_65063)
	{
		return 1;
	}
	return 0;
}

bool func_222()
{
	return Global_102538.f_418 > 0;
}

bool func_223()
{
	return Global_102538.f_417 > 0;
}

var func_224()
{
	return Global_1575095;
}

int func_225()
{
	func_16();
	if (Global_10324[Global_21649 /*2811*/][0 /*281*/].f_259 == 2)
	{
		return 1;
	}
	return 0;
}

bool func_226(int iParam0)
{
	return func_207(func_208(), iParam0);
}

int func_227(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_17();
	if (iParam2 != 145 && ((iParam2 == 0 || iParam2 == 1) || iParam2 == 2))
	{
		iVar1 = iParam2;
	}
	switch (iParam0)
	{
		case 18:
			if (iVar1 == 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 19:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 20:
			if (iVar1 != 1)
			{
				iVar0 = 1;
			}
			break;
		
		case 28:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 13:
			if (iVar1 == 0)
			{
				if (iParam1 == 2)
				{
					iVar0 = 0;
				}
				else
				{
					iVar0 = 1;
				}
			}
			else
			{
				iVar0 = 1;
			}
			break;
		
		case 22:
			if (iParam1 == 2 || iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		case 30:
			if (iVar1 != 2)
			{
				iVar0 = 1;
			}
			break;
		
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

int func_228(int iParam0)
{
	if (!func_19(iParam0))
	{
		return 7;
	}
	return Global_114963.f_7697.f_919[iParam0];
}

int func_229(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (iParam0 == 31 || iParam0 == 32)
	{
		if (!func_231())
		{
			return 0;
		}
	}
	iVar0 = iParam0;
	if (iVar0 < 31)
	{
		iVar1 = BitTest(Global_114963.f_25004, iVar0);
	}
	else
	{
		iVar0 = (iVar0 - 31);
		iVar1 = BitTest(Global_114963.f_25004.f_1, iVar0);
	}
	return iVar1;
}

int func_230()
{
	int iVar0;
	
	if (Global_33967)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false)))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_231()
{
	int iVar0;
	
	if (Global_153848 == 2)
	{
		return 1;
	}
	else if (Global_153848 == 3)
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		if (NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
		{
			if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN())
			{
				STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				MISC::SET_BIT(&iVar0, 2);
				MISC::SET_BIT(&iVar0, 4);
				MISC::SET_BIT(&iVar0, 6);
				MISC::SET_BIT(&Global_26, 2);
				MISC::SET_BIT(&Global_26, 4);
				MISC::SET_BIT(&Global_26, 6);
				STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
				if (MISC::ARE_PROFILE_SETTINGS_VALID())
				{
					iVar0 = MISC::GET_PROFILE_SETTING(866);
					MISC::SET_BIT(&iVar0, false);
					STATS::SET_HAS_SPECIALEDITION_CONTENT(iVar0);
				}
				return 1;
			}
		}
	}
	if (MISC::ARE_PROFILE_SETTINGS_VALID())
	{
		if (BitTest(MISC::GET_PROFILE_SETTING(866), 0))
		{
			return 1;
		}
	}
	return 0;
}

void func_232()
{
	if (func_184())
	{
		if (OBJECT::DOES_PICKUP_EXIST(iLocal_154))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_81))
			{
				HUD::REMOVE_BLIP(&iLocal_81);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_74))
		{
			OBJECT::DELETE_OBJECT(&iLocal_74);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_73))
		{
			if (ENTITY::IS_ENTITY_OCCLUDED(iLocal_73))
			{
				OBJECT::DELETE_OBJECT(&iLocal_73);
			}
			else
			{
				ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_73);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_121);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_120);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_122);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PED::SET_PED_MODEL_IS_SUPPRESSED(iLocal_120, false);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_121, false);
	}
	if (iLocal_148 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(iLocal_148);
	}
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_82, false);
	func_136(&uLocal_322, 0, 0, 0);
	func_238(-1);
	func_233(&uLocal_334, 0);
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_233(var uParam0, bool bParam1)
{
	int iVar0;
	
	if (!bParam1)
	{
		func_235(uParam0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_234(uParam0[iVar0 /*18*/]);
		iVar0++;
	}
	uParam0->f_145 = 0;
	uParam0->f_146 = -1;
}

void func_234(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	StringCopy(&(uParam0->f_2), "NULL", 64);
}

void func_235(var uParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (BitTest((*uParam0)[iVar0 /*18*/], 30))
		{
			func_236(uParam0[iVar0 /*18*/]);
		}
		iVar0++;
	}
	uParam0->f_145 = 1;
}

void func_236(var uParam0)
{
	func_237(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

void func_237(int iParam0, char* sParam1, int iParam2)
{
	if (BitTest(iParam0, 30))
	{
		switch (func_166(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 1:
				STREAMING::REMOVE_ANIM_DICT(sParam1);
				break;
			
			case 2:
				STREAMING::REMOVE_CLIP_SET(sParam1);
				break;
			
			case 3:
				GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(sParam1);
				break;
			
			case 4:
				VEHICLE::REMOVE_VEHICLE_RECORDING(iParam2, sParam1);
				break;
			
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
			
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
			
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iParam2);
				break;
			
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(iParam2, BitTest(iParam0, 26));
				break;
			
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
			
			default:
				break;
		}
	}
}

void func_238(int iParam0)
{
	char cVar0[64];
	
	if (iParam0 == -1)
	{
		iParam0 = func_66();
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_184())
	{
		func_242(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_114954 = MISC::GET_GAME_TIMER();
		func_241(30000);
		StringCopy(&cVar0, func_240(Global_114952, 1), 64);
		if (func_65(Global_114952) > 0)
		{
			StringConCat(&cVar0, " Variation ", 64);
			StringIntConCat(&cVar0, Global_114951, 64);
		}
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&cVar0, Global_114949, (MISC::GET_GAME_TIMER() - Global_114950), 0);
	}
	else if (BitTest(Global_114959, 0) && Global_114963.f_25004.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_114959, 0);
	}
	func_239(&Global_33875);
	Global_114953 = 0;
	func_191(-1);
}

void func_239(var uParam0)
{
	if (*uParam0 == -1)
	{
		return;
	}
	if (!*uParam0 == Global_44883)
	{
		*uParam0 = -1;
		return;
	}
	*uParam0 = -1;
	Global_44882 = 0;
	Global_44884 = 0;
	Global_44921 = 15;
	Global_65060 = 0;
	Global_65061 = 0;
}

char* func_240(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
			break;
		
		case 1:
			return "RE_ATMROBBERY";
			break;
		
		case 2:
			return "RE_BUSTOUR";
			break;
		
		case 3:
			return "RE_DOMESTIC";
			break;
		
		case 4:
			return "RE_GETAWAYDRIVER";
			break;
		
		case 5:
			return "RE_SHOPROBBERY";
			break;
		
		case 6:
			return "RE_SNATCHED";
			break;
		
		case 7:
			return "RE_LURED";
			break;
		
		case 8:
			return "RE_BIKETHIEFSTAMP";
			break;
		
		case 9:
			return "RE_SECURITYVAN";
			break;
		
		case 10:
			return "RE_PAPARAZZI";
			break;
		
		case 11:
			return "RE_CHASETHIEVES";
			break;
		
		case 12:
			return "RE_DEALGONEWRONG";
			break;
		
		case 13:
			return "RE_HITCHLIFT";
			break;
		
		case 14:
			return "RE_STAG";
			break;
		
		case 15:
			return "RE_ARREST";
			break;
		
		case 16:
			return "RE_CRASHRESCUE";
			break;
		
		case 17:
			return "RE_CARTHEFT";
			break;
		
		case 18:
			return "RE_CULTSHOOTOUT";
			break;
		
		case 19:
			return "RE_GANGFIGHT";
			break;
		
		case 20:
			return "RE_GANGINTIMIDATION";
			break;
		
		case 21:
			return "RE_PRISONVANBREAK";
			break;
		
		case 22:
			return "RE_PRISONERLIFT";
			break;
		
		case 23:
			return "RE_ABANDONEDCAR";
			break;
		
		case 24:
			return "RE_BURIAL";
			break;
		
		case 25:
			return "RE_MUGGING";
			break;
		
		case 26:
			return "RE_BIKETHIEF";
			break;
		
		case 27:
			return "RE_DRUNKDRIVER";
			break;
		
		case 28:
			return "RE_HOMELANDSECURITY";
			break;
		
		case 29:
			return "RE_BORDERPATROL";
			break;
		
		case 30:
			return "RE_SIMEONYETARIAN";
			break;
		
		case 31:
			return "RE_DUEL";
			break;
		
		case 32:
			return "RE_SEAPLANE";
			break;
		
		case 33:
			return "RE_MONKEYPHOTO";
			break;
		
		case -1:
			return "RE_NONE";
			break;
	}
	if (!bParam1)
	{
	}
	return "UNKNOWN";
}

void func_241(int iParam0)
{
	Global_45472 = (MISC::GET_GAME_TIMER() + iParam0);
}

void func_242(int iParam0)
{
	func_243(iParam0, 0, func_248(iParam0));
}

void func_243(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<16> Var1;
	
	uVar0 = func_208();
	func_246(&uVar0, 0, 0, iParam2, iParam1, 0, 0);
	func_245(iParam0, &uVar0);
	Var1 = { func_244(&uVar0) };
}

struct<16> func_244(var uParam0)
{
	struct<16> Var0;
	int iVar16;
	
	StringCopy(&Var0, "", 64);
	iVar16 = func_202(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_201(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, ":", 64);
	iVar16 = func_200(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "  ", 64);
	iVar16 = func_203(*uParam0);
	if (iVar16 < 10)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16, 64);
	StringConCat(&Var0, "/", 64);
	iVar16 = func_206(*uParam0);
	if (iVar16 < 9)
	{
		StringIntConCat(&Var0, 0, 64);
	}
	StringIntConCat(&Var0, iVar16 + 1, 64);
	StringConCat(&Var0, "/", 64);
	StringIntConCat(&Var0, func_204(*uParam0), 64);
	return Var0;
}

void func_245(int iParam0, var uParam1)
{
	Global_114963.f_25004.f_43[iParam0] = *uParam1;
}

void func_246(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_204(*uParam0);
	iVar1 = func_206(*uParam0);
	iVar2 = func_203(*uParam0);
	iVar3 = func_202(*uParam0);
	iVar4 = func_201(*uParam0);
	iVar5 = func_200(*uParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_199(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iVar1++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iVar0++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_199(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	iVar0 = (iVar0 + iParam6);
	func_247(uParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_247(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_214(uParam0, iParam1);
	func_213(uParam0, iParam2);
	func_212(uParam0, iParam3);
	func_210(uParam0, iParam5);
	func_211(uParam0, iParam4);
	func_209(uParam0, iParam6);
}

int func_248(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 23:
			iVar0 = 30;
			break;
		
		case 0:
			iVar0 = 30;
			break;
		
		case 15:
			iVar0 = 30;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 26:
			iVar0 = 30;
			break;
		
		case 8:
			iVar0 = 30;
			break;
		
		case 29:
			iVar0 = 30;
			break;
		
		case 24:
			iVar0 = 30;
			break;
		
		case 2:
			iVar0 = 0;
			break;
		
		case 17:
			iVar0 = 30;
			break;
		
		case 11:
			iVar0 = 30;
			break;
		
		case 16:
			iVar0 = 30;
			break;
		
		case 18:
			iVar0 = 30;
			break;
		
		case 12:
			iVar0 = 120;
			break;
		
		case 3:
			iVar0 = 60;
			break;
		
		case 27:
			iVar0 = 60;
			break;
		
		case 19:
			iVar0 = 30;
			break;
		
		case 20:
			iVar0 = 30;
			break;
		
		case 4:
			iVar0 = 60;
			break;
		
		case 28:
			iVar0 = 30;
			break;
		
		case 13:
			iVar0 = 35;
			break;
		
		case 7:
			iVar0 = 30;
			break;
		
		case 25:
			iVar0 = 40;
			break;
		
		case 10:
			iVar0 = 30;
			break;
		
		case 22:
			iVar0 = 30;
			break;
		
		case 21:
			iVar0 = 30;
			break;
		
		case 5:
			iVar0 = 30;
			break;
		
		case 30:
			iVar0 = 60;
			break;
		
		case 9:
			iVar0 = 60;
			break;
		
		case 6:
			iVar0 = 40;
			break;
		
		case 14:
			iVar0 = 40;
			break;
	}
	return iVar0;
}

int func_249(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, -1, false))
		{
			return -1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 0, false))
		{
			return 0;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 1, false))
		{
			return 1;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 2, false))
		{
			return 2;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 3, false))
		{
			return 3;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 4, false))
		{
			return 4;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 5, false))
		{
			return 5;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 6, false))
		{
			return 6;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 7, false))
		{
			return 7;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 8, false))
		{
			return 8;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 9, false))
		{
			return 9;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 10, false))
		{
			return 10;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 11, false))
		{
			return 11;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 12, false))
		{
			return 12;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 13, false))
		{
			return 13;
		}
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, 14, false))
		{
			return 14;
		}
	}
	return -2;
}

