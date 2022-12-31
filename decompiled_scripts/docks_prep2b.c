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
	char* sLocal_20 = 0;
	float fLocal_21 = 0f;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	float fLocal_25 = 0f;
	float fLocal_26 = 0f;
	var uLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	var uLocal_31 = 1;
	var uLocal_32 = 0;
	var uLocal_33 = 13;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	Entity eLocal_47 = 0;
	Vehicle veLocal_48 = 0;
	var uLocal_49 = 1;
	var uLocal_50 = 0;
	var uLocal_51 = 1;
	var uLocal_52 = 0;
	Vehicle veLocal_53 = 0;
	Vehicle veLocal_54 = 0;
	Vehicle veLocal_55 = 0;
	Cam caLocal_56 = 0;
	var uLocal_57 = 0;
	Entity eLocal_58 = 0;
	Entity eLocal_59 = 0;
	Hash hLocal_60 = 0;
	Blip blLocal_61 = 0;
	Blip blLocal_62 = 0;
	var uLocal_63 = 1;
	var uLocal_64 = 0;
	Blip blLocal_65 = 0;
	Blip blLocal_66 = 0;
	int iLocal_67 = 0;
	Any anLocal_68 = 0;
	int iLocal_69 = 0;
	var uLocal_70 = 13;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
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
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 0;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 0;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	int iLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
	int iLocal_182 = 0;
	int iLocal_183 = 0;
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186 = 0;
	int iLocal_187 = 0;
	int iLocal_188 = 0;
	int iLocal_189 = 0;
	int iLocal_190 = 0;
	int iLocal_191 = 0;
	int iLocal_192 = 0;
	int iLocal_193 = 0;
	int iLocal_194 = 0;
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	int iLocal_201 = 0;
	var uLocal_202 = 2;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	int iLocal_205 = 0;
	var uLocal_206 = 2;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	int iLocal_209 = 0;
	int iLocal_210 = 0;
	int iLocal_211 = 0;
	int iLocal_212 = 0;
	int iLocal_213 = 0;
	int iLocal_214 = 0;
	var uLocal_215 = 1;
	var uLocal_216 = 0;
	var uLocal_217 = 13;
	var uLocal_218 = 0;
	var uLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 13;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
	var uLocal_234 = 0;
	var uLocal_235 = 0;
	var uLocal_236 = 0;
	var uLocal_237 = 0;
	var uLocal_238 = 0;
	var uLocal_239 = 0;
	var uLocal_240 = 0;
	var uLocal_241 = 0;
	var uLocal_242 = 0;
	var uLocal_243 = 0;
	var uLocal_244 = 0;
	var uLocal_245 = 13;
	var uLocal_246 = 0;
	var uLocal_247 = 0;
	var uLocal_248 = 0;
	var uLocal_249 = 0;
	var uLocal_250 = 0;
	var uLocal_251 = 0;
	var uLocal_252 = 0;
	var uLocal_253 = 0;
	var uLocal_254 = 0;
	var uLocal_255 = 0;
	var uLocal_256 = 0;
	var uLocal_257 = 0;
	var uLocal_258 = 0;
	var uLocal_259 = 13;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 0;
	var uLocal_265 = 0;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	var uLocal_275 = 13;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = 0;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	int iLocal_289 = 0;
	int iLocal_290 = 0;
	int iLocal_291 = 0;
	var uLocal_292 = 2;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	int iLocal_299 = 0;
	int iLocal_300 = 0;
	var uLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	int iLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	float fLocal_317 = 0f;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	float fLocal_323 = 0f;
	char* sLocal_324 = 0;
	var uLocal_325 = 4;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 4;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 4;
	var uLocal_339 = 0;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 4;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 0;
	var uLocal_348 = 0;
	var uLocal_349 = 4;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 4;
	var uLocal_355 = 0;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 4;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 0;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 8;
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
	var uLocal_403 = 16;
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
	var uLocal_488 = 0;
	var uLocal_489 = 0;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 0;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 0;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	var uLocal_539 = 0;
	var uLocal_540 = 0;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	var uLocal_544 = 0;
	var uLocal_545 = 0;
	var uLocal_546 = 0;
	var uLocal_547 = 0;
	var uLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 0;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 0;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 0;
	var uLocal_560 = 0;
	var uLocal_561 = 0;
	var uLocal_562 = 0;
	var uLocal_563 = 0;
	var uLocal_564 = 0;
	var uLocal_565 = 0;
	var uLocal_566 = 0;
	var uLocal_567 = 0;
	var uLocal_568 = 3;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	int iLocal_572 = 0;
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
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	uLocal_311 = { -2145.4856f, 3018.2944f, 31.81f };
	uLocal_314 = { 1744.3083f, 3270.673f, 40.2076f };
	fLocal_323 = 330.4836f;
	MISC::SET_MISSION_FLAG(true);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_291();
		func_289();
	}

	MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 30f);
	func_287();

	if (!func_286())
		iLocal_28 = 0;
	else
		iLocal_28 = 1;

	while (true)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_ThePortOfLSHeistPrep2B", 0);
		func_285();
		func_279();
		func_278();
		func_277();
		func_275();
	
		switch (iLocal_28)
		{
			case 0:
				func_274();
				break;
		
			case 1:
				func_269();
				break;
		
			case 2:
				func_251();
				break;
		
			case 3:
				func_243();
				break;
		
			case 4:
				func_140();
				break;
		
			case 5:
				func_29();
				break;
		
			case 6:
				func_4();
				break;
		}
	
		if (iLocal_28 != 6)
			if (iLocal_197 == 1)
				func_1();
	}

	return;
}

void func_1() // Hash - 0xA313F7A8 ^0xC335F6C4
{
	if (iLocal_28 == 2 || iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (iLocal_200 == 1)
		{
			func_3(1);
			return;
		}
	}

	if (iLocal_28 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (func_2(veLocal_48, PLAYER::PLAYER_PED_ID(), true) > 850f)
				{
					func_3(2);
					return;
				}
			}
		}
	}

	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (func_2(veLocal_48, PLAYER::PLAYER_PED_ID(), true) > 100f)
				{
					func_3(2);
					return;
				}
				else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_48, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_48, 1, 40000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(veLocal_48, 0, 7000))
				{
					func_3(3);
					return;
				}
			}
		}
	}

	return;
}

float func_2(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(veParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(veParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_3(int iParam0) // Hash - 0xD0E42A4C ^0xD0E42A4C
{
	iLocal_29 = iParam0;

	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_175 = 0;
	}

	return;
}

void func_4() // Hash - 0x811C0F78 ^0xF17CEBFB
{
	switch (iLocal_175)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
		
			switch (iLocal_29)
			{
				case 0:
					break;
			
				case 1:
					sLocal_324 = "DP_FAIL1";
					break;
			
				case 2:
					sLocal_324 = "DP_FAIL2";
					break;
			
				case 3:
					sLocal_324 = "DP_FAIL3";
					break;
			}
		
			if (iLocal_29 == 0)
				func_13(0);
			else
				func_11(sLocal_324);
		
			iLocal_175 = 1;
			break;
	
		case 1:
			if (func_10())
			{
				if (func_9())
				{
				}
				else
				{
					func_7(-1139.1643f, 2662.4648f, 16.9873f, 74.9925f);
					func_5(-1147.504f, 2663.1035f, 17.0938f, 40.2433f);
				}
			
				func_289();
			}
			break;
	}

	return;
}

void func_5(float fParam0, float fParam1, float fParam2, float fParam3) // Hash - 0xE1E080FC ^0xE1E080FC
{
	func_6(&(Global_107196.f_2890), fParam0, fParam3);
	return;
}

void func_6(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Hash - 0xFE29C466 ^0x5AB4BDD9
{
	*uParam0 = { uParam1 };
	uParam0->f_6 = fParam4;
	return;
}

void func_7(float fParam0, float fParam1, float fParam2, float fParam3) // Hash - 0xD0CE78EF ^0xD0CE78EF
{
	if (func_8(Global_78799, 0f, 0f, 0f, false))
	{
		Global_78799 = { fParam0 };
		Global_78802 = fParam3;
	}

	return;
}

BOOL func_8(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_9() // Hash - 0x1F2273ED ^0x1F2273ED
{
	if (Global_100681 == 7)
		return true;

	return false;
}

BOOL func_10() // Hash - 0x56F647A6 ^0x56F647A6
{
	if (Global_3)
		return true;

	if (Global_100681 == 7 || Global_100681 == 8)
		return true;

	return false;
}

void func_11(char* sParam0) // Hash - 0x60B9B067 ^0x60B9B067
{
	func_12(sParam0);
	func_13(0);
	return;
}

void func_12(char* sParam0) // Hash - 0xCDE29485 ^0x41990891
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		if (HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0) <= 16)
		{
			TEXT_LABEL_ASSIGN_STRING(&Global_78791, sParam0, 16);
			TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
		
			if (RECORDING::IS_REPLAY_RECORDING())
				RECORDING::STOP_REPLAY_RECORDING();
		}
	}

	return;
}

void func_13(int iParam0) // Hash - 0x2E198DBD ^0xE0E1C260
{
	int num;

	if (Global_113648.f_9087 || func_28(false))
	{
		num = func_27();
	
		if (!func_14(num))
			return;
	
		MISC::SET_BIT(&(Global_91433[num /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}

	return;
}

BOOL func_14(int iParam0) // Hash - 0x9665C8BC ^0x4EE2CF72
{
	int num;
	int num2;

	func_19();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_91433[iParam0 /*5*/];
	num2 = Global_78828.f_109[num /*4*/];
	func_18(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_15(&(Global_113648.f_2365.f_539), num2);

	if (Global_94856 == Global_100718)
		Global_113648.f_9087.f_330[num2 /*6*/].f_1 = Global_113648.f_9087.f_330[num2 /*6*/].f_1 + 1;

	if (!IS_BIT_SET(Global_91469[num2 /*34*/].f_15, 1))
		if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			MISC::SET_FADE_IN_AFTER_DEATH_ARREST(false);

	Global_113648.f_9087.f_330[num2 /*6*/].f_2 = Global_113648.f_9087.f_330[num2 /*6*/].f_2 + 1;
	Global_94856 = Global_100718;

	if (iParam0 == -1)
	{
		Global_113648.f_9087;
		return false;
	}

	if (IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 4))
		return false;

	if (IS_BIT_SET(Global_91433[iParam0 /*5*/].f_1, 5))
		return false;

	return true;
}

void func_15(var uParam0, int iParam1) // Hash - 0x604FE9F ^0x604FE9F
{
	int i;
	int num;
	var unk;
	float num2;

	if (iParam1 == 94)
		return;

	for (i = 0; i < 3; i = i + 1)
	{
		num = Global_113648.f_18535[i];
	
		if (num == 8 || num == 9 || num == 10 || num == 11 || num == 34 || num == 72 || num == 73 && !IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], 9))
		{
		}
		else
		{
			unk = { 0f, 0f, 0f };
			num2 = 0f;
		
			if (!func_17(Global_113648.f_18535[i], &unk, &num2))
			{
				Global_113648.f_18535[i] = 318;
				func_16(&uParam0->f_2296[i]);
				uParam0->f_2300[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2310[i] = 0f;
				uParam0->f_2314[i] = 0;
				uParam0->f_2318[i /*3*/] = { 0f, 0f, 0f };
				uParam0->f_2328[i] = 0;
				Global_98071[i /*29*/] = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_9 = 0f;
				Global_98071[i /*29*/].f_12 = 0f;
				Global_98071[i /*29*/].f_3 = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_10 = 0f;
				Global_98071[i /*29*/].f_13 = 0f;
				Global_98071[i /*29*/].f_6 = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_11 = 0f;
				Global_98071[i /*29*/].f_14 = 0f;
				Global_98071[i /*29*/].f_17 = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_26 = 0f;
				Global_98071[i /*29*/].f_20 = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_27 = 0f;
				Global_98071[i /*29*/].f_23 = { 0f, 0f, 0f };
				Global_98071[i /*29*/].f_28 = 0f;
			}
		}
	}

	return;
}

void func_16(var uParam0) // Hash - 0xEE73B491 ^0xBDB3BDC2
{
	*uParam0 = -15;
	return;
}

BOOL func_17(int iParam0, var uParam1, var uParam2) // Hash - 0x6BF2FA05 ^0x6BF2FA05
{
	switch (iParam0)
	{
		case 11:
			*uParam1 = { 115.1569f, -1286.684f, 28.2613f };
			*uParam2 = 111f;
			return true;
	
		case 8:
			*uParam1 = { -90.0089f, -1324.1947f, 28.3203f };
			*uParam2 = 194.1887f;
			return true;
	
		case 9:
			return func_17(8, uParam1, uParam2);
	
		case 10:
			return func_17(8, uParam1, uParam2);
	
		case 13:
			*uParam1 = { -807.2979f, -48.4004f, 36.8173f };
			*uParam2 = 201.6328f;
			return true;
	
		case 14:
			*uParam1 = { 1432.3402f, -1887.3832f, 70.5768f };
			*uParam2 = 350.0509f;
			return true;
	
		case 15:
			*uParam1 = { 1666.204f, 1967.2504f, 143.3213f };
			*uParam2 = 0.7896f;
			return true;
	
		case 12:
			*uParam1 = { -1440.22f, -127.02f, 50f };
			*uParam2 = 42f;
			return true;
	
		case 16:
			*uParam1 = { 135.055f, -1759.6396f, 27.8957f };
			*uParam2 = -129f;
			return true;
	
		case 17:
			*uParam1 = { 687.6992f, -1744.0299f, 28.3624f };
			*uParam2 = 267.1409f;
			return true;
	
		case 18:
			*uParam1 = { 56.5117f, -744.6122f, 43.1356f };
			*uParam2 = 340.0526f;
			return true;
	
		case 19:
			*uParam1 = { 506.485f, -1884.967f, 24.764f };
			*uParam2 = 22.9566f;
			return true;
	
		case 20:
			*uParam1 = { 1555.9575f, 953.6136f, 77.2063f };
			*uParam2 = 152.8118f;
			return true;
	
		case 21:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 22:
			*uParam1 = { 220.72f, -64.4177f, 68.2922f };
			*uParam2 = 250.4535f - 360f;
			return true;
	
		case 74:
			*uParam1 = { 2048.07f, 3840.84f, 34.2238f };
			*uParam2 = 119.603f;
			return true;
	
		case 23:
			*uParam1 = { -464.22f, -1592.98f, 38.73f };
			*uParam2 = 168f;
			return true;
	
		case 24:
			*uParam1 = { 744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f };
			*uParam2 = 51.7279f;
			return true;
	
		case 67:
			*uParam1 = { -9f, 508.1f, 173.6278f };
			*uParam2 = 151.2504f;
			return true;
	
		case 25:
			*uParam1 = { 72.2278f, -1464.6798f, 28.2915f };
			*uParam2 = 156.8827f;
			return true;
	
		case 27:
			*uParam1 = { 763f, -906f, 24.2312f };
			*uParam2 = 7.2736f;
			return true;
	
		case 26:
			*uParam1 = { 257.9167f, -1120.7855f, 28.3684f };
			*uParam2 = 97.2736f;
			return true;
	
		case 28:
			*uParam1 = { 422.5858f, -978.6332f, 69.7073f };
			*uParam2 = 4f;
			return true;
	
		case 29:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 30:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 31:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 32:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 33:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 34:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 35:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 36:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 37:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 58:
			*uParam1 = { 294.8521f, 882.9366f, 197.8527f };
			*uParam2 = 162.693f;
			return true;
	
		case 59:
			*uParam1 = { -1771.8015f, 794.4316f, 138.4211f };
			*uParam2 = 128.9946f;
			return true;
	
		case 60:
			*uParam1 = { 1495.5953f, -1848.8207f, 70.2075f };
			*uParam2 = 32.2721f;
			return true;
	
		case 38:
			*uParam1 = { 2897.5544f, 4032.241f, 50.1419f };
			*uParam2 = 192.8091f;
			return true;
	
		case 39:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 40:
			*uParam1 = { 1973.355f, 3818.204f, 32.005f };
			*uParam2 = 32f;
			return true;
	
		case 41:
			*uParam1 = { 1397f, 3725.8f, 33.0673f };
			*uParam2 = -3.7534f;
			return true;
	
		case 42:
			*uParam1 = { { 4.0205f, -2975.3408f, 798.4536f } + { 1f, 0f, 0f } };
			*uParam2 = 90f;
			return true;
	
		case 43:
			*uParam1 = { 709.0244f, -2916.4788f, 5.0589f };
			*uParam2 = 355.326f;
			return true;
	
		case 44:
			*uParam1 = { 643.5248f, -2917.325f, 5.1337f };
			*uParam2 = 334.1068f;
			return true;
	
		case 45:
			*uParam1 = { 595.2742f, -2819.1826f, 5.0559f };
			*uParam2 = 46.8853f;
			return true;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 47:
			*uParam1 = { 314.4171f, 965.207f, 208.4024f };
			*uParam2 = 165.9421f;
			return true;
	
		case 49:
			*uParam1 = { 3321.5369f, 4975.4546f, 25.9097f };
			*uParam2 = 221.228f;
			return true;
	
		case 48:
			*uParam1 = { -111.1318f, 6316.479f, 30.4904f };
			*uParam2 = 42f + 180f;
			return true;
	
		case 50:
			*uParam1 = { -731.3261f, 106.68f, 54.7169f };
			*uParam2 = 98.9764f;
			return true;
	
		case 51:
			*uParam1 = { -1257.5f, -526.9999f, 30.2361f };
			*uParam2 = 220.9554f;
			return true;
	
		case 52:
			*uParam1 = { 736.9869f, -2050.678f, 28.2718f };
			*uParam2 = 83.9922f;
			return true;
	
		case 66:
			*uParam1 = { 262.5499f, -2540.1504f, 4.8433f };
			*uParam2 = -64.1366f;
			return true;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 55:
			*uParam1 = { -315.7789f, 6201.355f, 30.4322f };
			*uParam2 = 127.7547f;
			return true;
	
		case 56:
			*uParam1 = { 118.0988f, -1264.916f, 32.3637f };
			*uParam2 = -63f;
			return true;
	
		case 57:
			*uParam1 = { 37.5988f, -1351.5203f, 28.2954f };
			*uParam2 = 90.0339f;
			return true;
	
		case 61:
			*uParam1 = { -558.2693f, 261.1167f, 82.07f };
			*uParam2 = 84.6231f;
			return true;
	
		case 62:
			*uParam1 = { -196.9999f, 507.9999f, 132.477f };
			*uParam2 = 99.6049f;
			return true;
	
		case 63:
			*uParam1 = { 1312.01f, -1645.87f, 51.2f };
			*uParam2 = 120f;
			return true;
	
		case 68:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 69:
			*uParam1 = { -818.7374f, 6.4824f, 41.2432f };
			*uParam2 = 211.8223f;
			return true;
	
		case 64:
			*uParam1 = { 2091.2583f, 4714.852f, 40.1936f };
			*uParam2 = 136.0867f;
			return true;
	
		case 54:
			*uParam1 = { 1762.59f, 3247.212f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 65:
			*uParam1 = { 1764.013f, 3252.902f, 40.735f };
			*uParam2 = 27.0648f;
			return true;
	
		case 70:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 71:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 72:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		case 73:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			return true;
	
		default:
			break;
	}

	return false;
}

void func_18(int iParam0, BOOL bParam1) // Hash - 0x2E8A8CC9 ^0x2E8A8CC9
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94666[iParam0 /*2*/] = 1;
	else
		Global_94666[iParam0 /*2*/] = 0;

	return;
}

void func_19() // Hash - 0xD4E89C0A ^0xEDF5AB2B
{
	Global_100716 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_20())
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Michael was arrested."), 16);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Franklin was arrested."), 16);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Trevor was arrested."), 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
		}
	
		Global_100716 = 0;
	}
	else if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_20())
			{
				case 0:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Michael died."), 16);
					break;
			
				case 1:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Franklin died."), 16);
					break;
			
				case 2:
					TEXT_LABEL_ASSIGN_STRING(&Global_78791, _("~s~Trevor died."), 16);
					break;
			}
		
			TEXT_LABEL_ASSIGN_STRING(&Global_78795, "", 16);
		}
	
		Global_100716 = 0;
		MISC::SET_BIT(&(Global_100681.f_20), 25);
	}

	return;
}

int func_20() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_21();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_21() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_25(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_24(PLAYER::PLAYER_PED_ID());
		
			if (func_23(num) && !func_22(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_23(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_22(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_23(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_24(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_25(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_25(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_23(iParam0))
		return func_26(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_26(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

int func_27() // Hash - 0x39D9D518 ^0xBC98C03C
{
	int i;

	i = 0;

	for (i = 0; i < 7; i = i + 1)
	{
		if (IS_BIT_SET(Global_91433[i /*5*/].f_1, 2))
			return i;
	}

	return -1;
}

BOOL func_28(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_29() // Hash - 0x2AC8F74B ^0x16580CFE
{
	func_132();

	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, false);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	
		if (CAM::IS_SCREEN_FADED_OUT())
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, 0);
	
		iLocal_197 = 1;
		iLocal_175 = 1;
	}

	if (iLocal_175 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, true))
				{
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_48, 0, false);
					VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_48, 1, false);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_48, 2);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_48, false);
					ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, true);
					func_30();
				}
			}
		}
	}

	return;
}

void func_30() // Hash - 0x40FE7ACF ^0x40FE7ACF
{
	func_32(false, 0);
	func_31(1, 1);
	func_289();
	return;
}

void func_31(int iParam0, int iParam1) // Hash - 0x91747301 ^0x6F31F55
{
	Global_78827 = iParam1;

	if (Global_63356)
		return;

	if (Global_63383)
	{
		Global_63383 = false;
		return;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("MISSION_STAT_WATCHER")) > 0)
	{
		if (Global_63356)
		{
		}
	
		Global_63382 = iParam0;
		Global_63356 = true;
		Global_63367 = 1;
	}

	return;
}

void func_32(BOOL bParam0, BOOL bParam1) // Hash - 0x56032C5B ^0x18DFBA48
{
	int num;
	int num2;
	int num3;

	if (!Global_63364)
		Global_63364 = bParam1;

	if (bParam0)
	{
		if (func_28(false) && Global_78805.f_1 == 1 && func_33(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}

	if (Global_113648.f_9087 || func_28(false))
	{
		num = func_27();
		num2 = Global_91433[num /*5*/];
		num3 = Global_78828.f_109[num2 /*4*/];
	
		if (num == -1)
		{
			Global_113648.f_9087;
			return;
		}
	
		if (IS_BIT_SET(Global_91433[num /*5*/].f_1, 4))
			return;
	
		if (IS_BIT_SET(Global_91433[num /*5*/].f_1, 5))
			return;
	
		MISC::SET_BIT(&(Global_91433[num /*5*/].f_1), 4);
		MISC::SET_BIT(&Global_78807, 1);
		Global_78823 = num3;
		Global_78824 = MISC::GET_GAME_TIMER();
	}

	return;
}

BOOL func_33(int iParam0) // Hash - 0xE5CDC45F ^0xE5CDC45F
{
	switch (iParam0)
	{
		case 71:
			return true;
	
		case 86:
			return true;
	
		case 91:
			return true;
	
		default:
			return false;
	}

	return false;
}

void func_34() // Hash - 0x688BFF57 ^0xBA41FB1C
{
	func_130();
	func_129();
	func_37();

	if (!func_36() || func_28(false))
		func_35();

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	return;
}

void func_35() // Hash - 0x841709EC ^0xE9ECC7C1
{
	switch (iLocal_28)
	{
		case 2:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_55))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_55, false))
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_55, -1);
			}
			else
			{
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -1565.0836f, 2780.813f, 16.4022f, true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 53.6086f);
			}
			break;
	
		case 3:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (func_20() == 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, -1);
					
						ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, false);
					}
				}
			}
			break;
	
		case 4:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (func_20() == 2)
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, -1);
			break;
	
		case 5:
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (func_20() == 2)
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, -1);
			break;
	}

	return;
}

BOOL func_36() // Hash - 0xDB96C64C ^0xAB601103
{
	return IS_BIT_SET(Global_100681.f_20, 13);
}

void func_37() // Hash - 0x3DC3B978 ^0x7B64FEB3
{
	switch (iLocal_28)
	{
		case 2:
			MISC::CLEAR_AREA(-1588.1f, 2794.9f, 17.2f, 20f, true, false, false, false);
			func_122(-1720.5f, 2568.4f, 67.1f, -1523.2f, 3002f, -70f, 100f, -1155.0603f, 2665.9795f, 17.0939f, 219.2079f, true, false, true, false, false);
			MISC::CLEAR_AREA_OF_OBJECTS(-1588.1f, 2794.9f, 17.2f, 20f, 6);
			STREAMING::REQUEST_MODEL(joaat("CARGOBOB"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_MARINE_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_PILOT_02"));
			STREAMING::REQUEST_MODEL(joaat("BUZZARD"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("CARGOBOB")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_MARINE_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PILOT_02")) || !STREAMING::HAS_MODEL_LOADED(joaat("BUZZARD")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (func_286())
			{
				if (func_121())
				{
					if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_120()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_120()))
					{
						func_118();
					
						while (!func_117())
						{
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		
			iLocal_201 = 0;
		
			for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
			{
				uLocal_275[iLocal_176] = 0;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				MISC::CLEAR_AREA(uLocal_311, 10f, true, false, false, false);
				veLocal_48 = VEHICLE::CREATE_VEHICLE(joaat("CARGOBOB"), uLocal_311, fLocal_323, true, true, false);
				VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(veLocal_48, false);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_48, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CARGOBOB"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("CARGOBOB"), true);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
				func_116(veLocal_48, 0);
			}
		
			func_113();
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("BUZZARD")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("BUZZARD"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_49[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_49[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_49[0], 1084227584);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("BUZZARD"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_49[0], false);
				}
			}
		
			if (func_286())
			{
				if (!ENTITY::DOES_ENTITY_EXIST(veLocal_55))
				{
					if (func_121())
					{
						if (!VEHICLE::IS_THIS_MODEL_A_HELI(func_120()) && !VEHICLE::IS_THIS_MODEL_A_PLANE(func_120()))
						{
							veLocal_55 = func_38(-1535.2094f, 2744.5505f, 16.6437f, 47.9754f);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_120());
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_55, true);
							VEHICLE::SET_VEHICLE_STRONG(veLocal_55, true);
						}
					}
				}
			}
		
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			PLAYER::SET_POLICE_RADAR_BLIPS(true);
			break;
	
		case 3:
			AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
			SYSTEM::WAIT(1500);
			STREAMING::REQUEST_MODEL(joaat("CARGOBOB"));
			STREAMING::REQUEST_MODEL(joaat("BUZZARD"));
			STREAMING::REQUEST_MODEL(joaat("S_M_Y_MARINE_01"));
			STREAMING::REQUEST_MODEL(joaat("S_M_M_PILOT_02"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("CARGOBOB")) || !STREAMING::HAS_MODEL_LOADED(joaat("BUZZARD")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_MARINE_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PILOT_02")))
			{
				SYSTEM::WAIT(0);
			}
		
			iLocal_201 = 0;
		
			for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
			{
				uLocal_275[iLocal_176] = 0;
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				MISC::CLEAR_AREA(uLocal_311, 10f, true, false, false, false);
				veLocal_48 = VEHICLE::CREATE_VEHICLE(joaat("CARGOBOB"), uLocal_311, fLocal_323, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, true);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_48, true, 1);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(veLocal_48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CARGOBOB"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("CARGOBOB"), true);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
				func_116(veLocal_48, 0);
			}
		
			func_113();
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				if (STREAMING::HAS_MODEL_LOADED(joaat("BUZZARD")))
				{
					MISC::CLEAR_AREA(-1866.446f, 3071.395f, 31.8104f, 10f, true, false, false, false);
					uLocal_49[0] = VEHICLE::CREATE_VEHICLE(joaat("BUZZARD"), -1866.446f, 3071.395f, 31.8104f, 150.2863f, true, true, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_49[0], true, 1);
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_49[0], true);
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(uLocal_49[0], 1084227584);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("BUZZARD"));
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_49[0], false);
				}
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
			{
				uLocal_31[0] = PED::CREATE_PED_INSIDE_VEHICLE(uLocal_49[0], PED_TYPE_MISSION, joaat("S_M_M_PILOT_02"), -1, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PILOT_02"));
			}
			else if (!PED::IS_PED_IN_VEHICLE(uLocal_31[0], uLocal_49[0], false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_31[0], uLocal_49[0], -1);
			}
		
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
			AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
			AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
			break;
	
		case 4:
			STREAMING::REQUEST_MODEL(joaat("CARGOBOB"));
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("CARGOBOB")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				MISC::CLEAR_AREA(uLocal_311, 10f, true, false, false, false);
				veLocal_48 = VEHICLE::CREATE_VEHICLE(joaat("CARGOBOB"), -629.1677f, 2871.31f, 385.0313f, 283.1214f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_48, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CARGOBOB"));
				VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("CARGOBOB"), true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
				VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
				VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_48, true, true, false);
				VEHICLE::SET_HELI_BLADES_FULL_SPEED(veLocal_48);
				VEHICLE::SET_VEHICLE_FORWARD_SPEED(veLocal_48, 30f);
				func_116(veLocal_48, 0);
			}
		
			WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
			break;
	
		case 5:
			STREAMING::REQUEST_MODEL(joaat("CARGOBOB"));
			STREAMING::REQUEST_MODEL(joaat("SANDKING"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("CARGOBOB")) || !STREAMING::HAS_MODEL_LOADED(joaat("SANDKING")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				MISC::CLEAR_AREA(1749.6102f, 3272.9497f, 40.1533f, 5f, true, false, false, false);
				veLocal_48 = VEHICLE::CREATE_VEHICLE(joaat("CARGOBOB"), 1749.6102f, 3272.9497f, 40.1533f, 51.128f, true, true, false);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_48, true, 1);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CARGOBOB"));
				VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
				VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
				func_116(veLocal_48, 0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
			{
				uLocal_51[0] = VEHICLE::CREATE_VEHICLE(joaat("SANDKING"), 1754.9508f, 3290.994f, 40.1176f, 182.397f, true, true, false);
				ENTITY::FREEZE_ENTITY_POSITION(uLocal_51[0], true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("SANDKING"));
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
				iLocal_214 = 1;
			break;
	}

	return;
}

Vehicle func_38(float fParam0, float fParam1, float fParam2, float fParam3) // Hash - 0x8B428079 ^0x8B428079
{
	return func_39(&(Global_107196.f_2890), fParam0, fParam3, false);
}

Vehicle func_39(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Hash - 0xD821241F ^0x8968603D
{
	Vehicle vehicle;
	Vector3 entityCoords;
	BOOL flag;
	var result;
	int num;

	if (func_112(uParam0))
	{
		if (func_8(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { *uParam0 };
			fParam4 = uParam0->f_6;
		}
	
		if (uParam0->f_12.f_66 == joaat("MONSTER") || uParam0->f_12.f_66 == joaat("MARSHALL"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(fParam1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				fParam1 = { -850.93f, 158.82f, 65.7f };
				fParam4 = 89.5f;
			}
		}
	
		if (func_111(uParam0))
		{
			MISC::CLEAR_AREA(fParam1, 5f, true, false, false, false);
			func_110(fParam1, 5f, false);
			vehicle = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, fParam1, fParam4, true, true, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehicle))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			
				if (SYSTEM::VDIST2(entityCoords, -1151.15f, -1530.32f, 7.48925f) <= 3f)
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(vehicle, fParam1, false, false, true);
			
				func_82(vehicle, &(uParam0->f_12), false, true);
				flag = true;
			
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
					if (!WATER::TEST_PROBE_AGAINST_WATER(fParam1, fParam1.f_1, fParam1.f_2 + 30f, fParam1, fParam1.f_1, fParam1.f_2 - 30f, &result))
						flag = false;
			
				if (flag)
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(vehicle, 1084227584);
			
				if (uParam0->f_7 == 1)
				{
					if (bParam5)
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_81(uParam0->f_11, 1);
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehicle)))
							func_81(uParam0->f_11, 2);
				
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(vehicle, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(vehicle, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(vehicle, true);
					func_80(vehicle, uParam0->f_11);
				}
				else if (!func_77(vehicle, uParam0->f_3, uParam0->f_8) && uParam0->f_10 && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					num = func_76(vehicle);
				
					if (num == -1)
						uParam0->f_10 = 0;
					else
						func_69(num);
				}
			
				if (Global_100681 != 13 && Global_100681 != 10 && Global_100681 != 11 && Global_100681 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100681.f_3)) == Global_78336)
					{
						if (uParam0->f_12.f_66 == Global_113648.f_32751.f_69[21 /*78*/].f_66)
						{
							func_66(24, false);
							func_69(24);
						}
					}
				}
			
				if (uParam0->f_9 == 1)
					func_40(vehicle, uParam0->f_11);
			
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehicle, true) };
			}
		
			return vehicle;
		}
	}

	return vehicle;
}

void func_40(Vehicle veParam0, int iParam1) // Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_46(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_ZERO"))
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_ONE"))
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == joaat("PLAYER_TWO"))
				iParam1 = 2;
	
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
			iParam1 = Global_113648.f_2365.f_539.f_4321;
	}

	for (i = 0; i < 3; i = i + 1)
	{
		for (j = 0; j < 2; j = j + 1)
		{
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66)
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
				{
					if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_1)))
					{
						Global_113648.f_32751.f_5038[i /*157*/][j /*78*/].f_66 = 0;
						Global_113648.f_32751.f_5592[i] = j;
					}
				}
			}
		}
	}

	for (i = 0; i < 3; i = i + 1)
	{
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == Global_113648.f_32751.f_5600[i /*78*/].f_66)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
				if (MISC::ARE_STRINGS_EQUAL(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), &(Global_113648.f_32751.f_5600[i /*78*/].f_1)))
					Global_113648.f_32751.f_5600[i /*78*/].f_66 = 0;
	}

	Global_113648.f_32751.f_5590 = iParam1;
	Global_78253 = veParam0;
	Global_113648.f_32751.f_5588 = 1;
	func_41(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

void func_41(Vehicle veParam0, var uParam1) // Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_45(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = VEHICLE::GET_VEHICLE_WHEEL_TYPE(veParam0);
		uParam1->f_70 = VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(veParam0);
		VEHICLE::GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam0, &(uParam1->f_74), &(uParam1->f_75), &(uParam1->f_76));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 2))
			MISC::SET_BIT(&(uParam1->f_77), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 3))
			MISC::SET_BIT(&(uParam1->f_77), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam0, 1))
			MISC::SET_BIT(&(uParam1->f_77), 31);
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
			uParam1->f_65 = 0;
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			uParam1->f_68 = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam0);
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66))
		{
			if (VEHICLE::IS_PLANE_LANDING_GEAR_INTACT(veParam0))
			{
				switch (VEHICLE::GET_LANDING_GEAR_STATE(veParam0))
				{
					case 3:
					case 0:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::SET_BIT(&(uParam1->f_77), 22);
						break;
				
					case 4:
					case 1:
						MISC::CLEAR_BIT(&(uParam1->f_77), 23);
						MISC::CLEAR_BIT(&(uParam1->f_77), 22);
						break;
				
					case 5:
						MISC::SET_BIT(&(uParam1->f_77), 23);
						break;
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), 23);
			}
		}
	
		if (!VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 9);
	
		if (VEHICLE::IS_VEHICLE_STOLEN(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 10);
	
		if (VEHICLE::GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(veParam0))
		{
			MISC::SET_BIT(&(uParam1->f_77), 13);
			VEHICLE::GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, &(uParam1->f_71), &(uParam1->f_72), &(uParam1->f_73));
		}
	
		if (VEHICLE::GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(veParam0))
			MISC::SET_BIT(&(uParam1->f_77), 12);
	
		func_43(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_42(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && DECORATOR::DECOR_GET_BOOL(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_42(int iParam0) // Hash - 0xEE599357 ^0xEE599357
{
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
			return 24;
	
		case 11:
			return 25;
	
		case 12:
			return 26;
	}

	return 0;
}

int func_43(var uParam0, var uParam1, var uParam2) // Hash - 0x4455160E ^0x8E5B3F28
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			uParam1->[i] = 0;
		
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
				uParam1->[i] = 1;
		}
		else if (modType == 22)
		{
			if (VEHICLE::IS_TOGGLE_MOD_ON(*uParam0, modType))
			{
				switch (VEHICLE::GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0))
				{
					case 255:
						uParam1->[i] = 1;
						break;
				
					case 0:
						uParam1->[i] = 2;
						break;
				
					case 1:
						uParam1->[i] = 3;
						break;
				
					case 2:
						uParam1->[i] = 4;
						break;
				
					case 3:
						uParam1->[i] = 5;
						break;
				
					case 4:
						uParam1->[i] = 6;
						break;
				
					case 5:
						uParam1->[i] = 7;
						break;
				
					case 6:
						uParam1->[i] = 8;
						break;
				
					case 7:
						uParam1->[i] = 9;
						break;
				
					case 8:
						uParam1->[i] = 10;
						break;
				
					case 9:
						uParam1->[i] = 11;
						break;
				
					case 10:
						uParam1->[i] = 12;
						break;
				
					case 11:
						uParam1->[i] = 13;
						break;
				
					case 12:
						uParam1->[i] = 14;
						break;
				
					case 13:
						uParam1->[i] = 15;
						break;
				}
			}
			else
			{
				uParam1->[i] = 0;
			}
		}
		else
		{
			uParam1->[i] = VEHICLE::GET_VEHICLE_MOD(*uParam0, i) + 1;
		
			if (i == 23)
				uParam2->[0] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
			else if (i == 24)
				uParam2->[1] = VEHICLE::GET_VEHICLE_MOD_VARIATION(*uParam0, i);
		}
	}

	return 1;
}

BOOL func_44(int iParam0) // Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case joaat("GRANGER"):
		case joaat("VISIONE"):
			return true;
	
		default:
		
	}

	return false;
}

void func_45(var uParam0) // Hash - 0xB95AF921 ^0x4DC7C61C
{
	int i;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_1), "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;

	for (i = 0; i < 49; i = i + 1)
	{
		uParam0->f_9[i] = 0;
	}

	for (i = 0; i < 2; i = i + 1)
	{
		uParam0->f_59[i] = 0;
	}

	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
	return;
}

BOOL func_46(Vehicle veParam0) // Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_64(veParam0, 0, false) || func_64(veParam0, 1, false) || func_64(veParam0, 2, false) || func_63(veParam0) != 145 || func_62(veParam0) || func_61(veParam0) || func_60(veParam0) || func_59(veParam0) || !func_47(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_61(veParam0);
		func_61(veParam0);
		func_64(veParam0, 0, false);
		func_64(veParam0, 1, false);
		func_64(veParam0, 2, false);
		func_63(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_47(Hash hParam0) // Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_48(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case joaat("BUS"):
		case joaat("STRETCH"):
		case joaat("BARRACKS"):
		case joaat("ARMYTANKER"):
		case joaat("RHINO"):
		case joaat("ARMYTRAILER"):
		case joaat("BARRACKS2"):
		case joaat("FLATBED"):
		case joaat("RIPLEY"):
		case joaat("TOWTRUCK"):
		case joaat("TOWTRUCK2"):
		case joaat("AIRBUS"):
		case joaat("COACH"):
		case joaat("RENTALBUS"):
		case joaat("TOURBUS"):
		case joaat("FIRETRUK"):
		case joaat("PBUS"):
		case joaat("TRASH"):
		case joaat("BENSON"):
		case joaat("BOATTRAILER"):
		case joaat("BIFF"):
		case joaat("HAULER"):
		case joaat("DOCKTRAILER"):
		case joaat("PHANTOM"):
		case joaat("POUNDER"):
		case joaat("TRACTOR2"):
		case joaat("BULLDOZER"):
		case joaat("HANDLER"):
		case joaat("TIPTRUCK"):
		case joaat("CUTTER"):
		case joaat("DUMP"):
		case joaat("MIXER"):
		case joaat("MIXER2"):
		case joaat("RUBBLE"):
		case joaat("SCRAP"):
		case joaat("TIPTRUCK2"):
		case joaat("CAMPER"):
		case joaat("TACO"):
		case joaat("BOXVILLE"):
		case joaat("BOXVILLE2"):
		case joaat("BOXVILLE3"):
		case joaat("JOURNEY"):
		case joaat("MULE"):
		case joaat("MULE2"):
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLICEB"):
		case joaat("POLICEOLD1"):
		case joaat("POLICEOLD2"):
		case joaat("POLICET"):
		case joaat("TAXI"):
		case joaat("SUBMERSIBLE"):
		case joaat("SUBMERSIBLE2"):
		case joaat("MONSTER"):
			return false;
	}

	return true;
}

BOOL func_48(Hash hParam0, BOOL bParam1, int iParam2) // Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == joaat("DOMINATOR2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("BUFFALO3") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("GAUNTLET2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == joaat("BLIMP2") || hParam0 == joaat("STALION2") && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_58())
			return false;
	}
	else
	{
		for (i = 0; i < FILES::GET_NUM_DLC_VEHICLES(); i = i + 1)
		{
			if (FILES::GET_DLC_VEHICLE_DATA(i, &outData))
				if (hParam0 == outData.f_1)
					if (FILES::IS_CONTENT_ITEM_LOCKED(outData))
						return false;
		}
	}

	if (hParam0 == joaat("BLIMP"))
		if (!func_57() && !func_56() && !func_55() && !func_54() && !func_58())
			return false;

	if (hParam0 == joaat("HOTKNIFE") || hParam0 == joaat("CARBONRS") || hParam0 == joaat("KHAMELION"))
	{
		if (func_53() || MISC::IS_PC_VERSION() || func_52())
		{
		}
		else if (!func_55())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_51(hParam0, iParam2))
			return false;

	if (!func_49(hParam0))
		return false;

	return true;
}

BOOL func_49(Hash hParam0) // Hash - 0x719D5C79 ^0x86872E9D
{
	int num;
	var unk;
	var name;

	if (!func_50())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case joaat("DUNE4"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_DUNE4_t0_v3", 64);
			break;
	
		case joaat("VOLTIC2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case joaat("RUINER2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_RUINER2_t0_v3", 64);
			break;
	
		case joaat("PHANTOM2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case joaat("TECHNICAL2"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case joaat("BOXVILLE5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case joaat("WASTELANDER"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case joaat("BLAZER5"):
			TEXT_LABEL_ASSIGN_STRING(&name, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!NETSHOPPING::NET_GAMESERVER_CATALOG_ITEM_IS_VALID(&name))
		return false;

	return true;
}

BOOL func_50() // Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_51(Hash hParam0, int iParam1) // Hash - 0x2FF24ACC ^0x92A5C100
{
	BOOL num;
	int cloudTimeAsInt;

	if (!Global_2764242 && iParam1 >= 0 && iParam1 <= 415)
		if (IS_BIT_SET(Global_1586468[iParam1 /*142*/].f_103, 2))
			return true;

	if (Global_2764241)
		return true;

	num = 1;
	cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();

	if (hParam0 == joaat("BTYPE3"))
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == joaat("FACTION3"))
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == joaat("VIRGO3") || hParam0 == joaat("VIRGO2"))
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == joaat("SABREGT2"))
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == joaat("TORNADO5"))
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == joaat("MINIVAN2"))
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == joaat("SLAMVAN3"))
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == joaat("PROTOTIPO"))
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == joaat("SEVEN70"))
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == joaat("PFISTER811"))
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == joaat("BF400"))
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == joaat("BRIOSO"))
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == joaat("CLIFFHANGER"))
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == joaat("CONTENDER"))
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == joaat("LE7B"))
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == joaat("OMNIS"))
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == joaat("TROPHYTRUCK"))
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == joaat("TROPHYTRUCK2"))
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == joaat("TROPOS"))
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == joaat("GARGOYLE"))
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == joaat("RALLYTRUCK"))
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == joaat("TAMPA2"))
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == joaat("TYRUS"))
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == joaat("SHEAVA"))
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == joaat("LYNX"))
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == joaat("STALION2"))
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == joaat("GAUNTLET2"))
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == joaat("DOMINATOR2"))
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == joaat("BUFFALO3"))
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == joaat("DEFILER"))
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == joaat("NIGHTBLADE"))
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == joaat("ZOMBIEA"))
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == joaat("ESSKEY"))
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == joaat("AVARUS"))
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == joaat("ZOMBIEB"))
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == joaat("HAKUCHOU2"))
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == joaat("VORTEX"))
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == joaat("SHOTARO"))
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == joaat("CHIMERA"))
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == joaat("RAPTOR"))
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == joaat("DAEMON2"))
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == joaat("BLAZER4"))
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == joaat("TORNADO6"))
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == joaat("YOUGA2"))
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == joaat("WOLFSBANE"))
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == joaat("FAGGIO3"))
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == joaat("FAGGIO"))
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == joaat("BAGGER"))
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == joaat("SANCTUS"))
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == joaat("MANCHEZ"))
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == joaat("RATBIKE"))
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == joaat("VOLTIC2"))
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == joaat("RUINER2"))
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == joaat("DUNE4"))
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == joaat("DUNE5"))
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == joaat("PHANTOM2"))
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == joaat("TECHNICAL2"))
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == joaat("BOXVILLE5"))
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == joaat("WASTELANDER"))
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == joaat("BLAZER5"))
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == joaat("COMET2"))
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == joaat("COMET3"))
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == joaat("DIABLOUS"))
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == joaat("DIABLOUS2"))
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == joaat("ELEGY"))
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == joaat("ELEGY2"))
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == joaat("FCR"))
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == joaat("FCR2"))
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == joaat("ITALIGTB"))
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == joaat("ITALIGTB2"))
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == joaat("NERO"))
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == joaat("NERO2"))
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == joaat("PENETRATOR"))
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == joaat("SPECTER"))
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == joaat("SPECTER2"))
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == joaat("TEMPESTA"))
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == joaat("GP1"))
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == joaat("INFERNUS2"))
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == joaat("RUSTON"))
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == joaat("TURISMO2"))
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == joaat("XA21"))
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == joaat("CHEETAH2"))
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == joaat("TORERO"))
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == joaat("VAGNER"))
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == joaat("ARDENT"))
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == joaat("NIGHTSHARK"))
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == joaat("MICROLIGHT"))
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == joaat("MOGUL"))
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == joaat("ROGUE"))
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == joaat("STARLING"))
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == joaat("SEABREEZE"))
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == joaat("TULA"))
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == joaat("PYRO"))
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == joaat("MOLOTOK"))
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == joaat("NOKOTA"))
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == joaat("BOMBUSHKA"))
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == joaat("HUNTER"))
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == joaat("HAVOK"))
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == joaat("HOWARD"))
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == joaat("ALPHAZ1"))
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == joaat("CYCLONE"))
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == joaat("VISIONE"))
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == joaat("VIGILANTE"))
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == joaat("RETINUE"))
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == joaat("RAPIDGT3"))
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == joaat("DELUXO"))
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == joaat("STROMBERG"))
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == joaat("RIOT2"))
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == joaat("CHERNOBOG"))
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == joaat("KHANJALI"))
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == joaat("AKULA"))
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == joaat("THRUSTER"))
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == joaat("BARRAGE"))
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == joaat("VOLATOL"))
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == joaat("COMET4"))
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == joaat("NEON"))
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == joaat("STREITER"))
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == joaat("SENTINEL3"))
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == joaat("YOSEMITE"))
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == joaat("SC1"))
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == joaat("AUTARCH"))
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == joaat("GT500"))
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == joaat("HUSTLER"))
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == joaat("REVOLTER"))
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == joaat("PARIAH"))
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == joaat("RAIDEN"))
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == joaat("SAVESTRA"))
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == joaat("RIATA"))
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == joaat("HERMES"))
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == joaat("COMET5"))
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == joaat("Z190"))
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == joaat("VISERIS"))
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == joaat("KAMACHO"))
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == joaat("GB200"))
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == joaat("FAGALOA"))
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == joaat("ELLIE"))
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == joaat("ISSI3"))
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == joaat("MICHELLI"))
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == joaat("FLASHGT"))
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == joaat("HOTRING"))
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == joaat("TEZERACT"))
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == joaat("TYRANT"))
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == joaat("DOMINATOR3"))
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == joaat("TAIPAN"))
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == joaat("ENTITY2"))
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == joaat("JESTER3"))
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == joaat("CHEBUREK"))
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == joaat("CARACARA"))
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == joaat("SEASPARROW"))
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == joaat("TERBYTE"))
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == joaat("PBUS2"))
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == joaat("MULE4"))
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == joaat("POUNDER2"))
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == joaat("SWINGER"))
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == joaat("MENACER"))
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == joaat("SCRAMJET"))
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == joaat("STRIKEFORCE"))
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == joaat("OPPRESSOR2"))
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == joaat("PATRIOT2"))
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == joaat("STAFFORD"))
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == joaat("FREECRAWLER"))
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == joaat("BLIMP3"))
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == joaat("MONSTER3"))
	{
	}
	else if (hParam0 == joaat("CERBERUS"))
	{
	}
	else if (hParam0 == joaat("CERBERUS2"))
	{
	}
	else if (hParam0 == joaat("CERBERUS3"))
	{
	}
	else if (hParam0 == joaat("BRUTUS"))
	{
	}
	else if (hParam0 == joaat("BRUTUS2"))
	{
	}
	else if (hParam0 == joaat("BRUTUS3"))
	{
	}
	else if (hParam0 == joaat("SCARAB"))
	{
	}
	else if (hParam0 == joaat("SCARAB2"))
	{
	}
	else if (hParam0 == joaat("SCARAB3"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR2"))
	{
	}
	else if (hParam0 == joaat("IMPERATOR3"))
	{
	}
	else if (hParam0 == joaat("ZR380"))
	{
	}
	else if (hParam0 == joaat("ZR3802"))
	{
	}
	else if (hParam0 == joaat("ZR3803"))
	{
	}
	else if (hParam0 == joaat("IMPALER"))
	{
	}
	else if (hParam0 == joaat("DEVESTE"))
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == joaat("TOROS"))
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == joaat("CLIQUE"))
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == joaat("ITALIGTO"))
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == joaat("DEVIANT"))
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == joaat("VAMOS"))
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == joaat("TULIP"))
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == joaat("SCHLAGEN"))
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == joaat("RCBANDITO"))
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == joaat("THRAX"))
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == joaat("DRAFTER"))
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == joaat("LOCUST"))
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == joaat("NOVAK"))
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == joaat("ZORRUSSO"))
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET3"))
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == joaat("ISSI7"))
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == joaat("ZION3"))
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == joaat("NEBULA"))
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == joaat("HELLION"))
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == joaat("DYNASTY"))
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == joaat("RROCKET"))
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == joaat("PEYOTE2"))
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET4"))
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == joaat("CARACARA2"))
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == joaat("JUGULAR"))
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == joaat("S80"))
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == joaat("KRIEGER"))
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == joaat("EMERUS"))
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == joaat("NEO"))
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == joaat("PARAGON"))
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == joaat("ASBO"))
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == joaat("KANJO"))
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == joaat("EVERON"))
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == joaat("RETINUE2"))
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == joaat("YOSEMITE2"))
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == joaat("SUGOI"))
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == joaat("SULTAN2"))
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == joaat("OUTLAW"))
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == joaat("VAGRANT"))
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == joaat("KOMODA"))
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == joaat("STRYDER"))
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == joaat("FURIA"))
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == joaat("ZHABA"))
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == joaat("JB7002"))
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == joaat("FIRETRUK"))
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == joaat("BURRITO2"))
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == joaat("BOXVILLE"))
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == joaat("STOCKADE"))
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == joaat("MINITANK"))
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == joaat("LGUARD"))
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == joaat("BLAZER2"))
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == joaat("FORMULA"))
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == joaat("FORMULA2"))
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == joaat("IMORGON"))
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == joaat("REBLA"))
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == joaat("VSTR"))
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == joaat("GAUNTLET5"))
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == joaat("CLUB"))
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == joaat("DUKES3"))
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == joaat("YOSEMITE3"))
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == joaat("PEYOTE3"))
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == joaat("GLENDALE2"))
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == joaat("PENUMBRA2"))
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == joaat("LANDSTALKER2"))
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == joaat("SEMINOLE2"))
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == joaat("TIGON"))
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == joaat("OPENWHEEL1"))
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == joaat("OPENWHEEL2"))
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == joaat("COQUETTE4"))
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == joaat("MANANA2"))
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == joaat("YOUGA3"))
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == joaat("TOREADOR"))
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == joaat("ANNIHILATOR2"))
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == joaat("ALKONOST"))
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == joaat("PATROLBOAT"))
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == joaat("LONGFIN"))
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == joaat("WINKY"))
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == joaat("VETO"))
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == joaat("VETO2"))
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == joaat("ITALIRSX"))
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == joaat("WEEVIL"))
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("MANCHEZ2"))
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == joaat("SLAMTRUCK"))
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == joaat("VETIR"))
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == joaat("SQUADDIE"))
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == joaat("BRIOSO2"))
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("DINGHY5"))
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == joaat("VERUS"))
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == joaat("TAILGATER2"))
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == joaat("EUROS"))
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == joaat("SULTAN3"))
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == joaat("RT3000"))
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == joaat("VECTRE"))
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == joaat("ZR350"))
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == joaat("WARRENER2"))
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == joaat("CALICO"))
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == joaat("REMUS"))
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == joaat("CYPHER"))
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == joaat("DOMINATOR7"))
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == joaat("JESTER4"))
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == joaat("FUTO2"))
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == joaat("DOMINATOR8"))
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == joaat("PREVION"))
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == joaat("GROWLER"))
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == joaat("COMET6"))
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == joaat("CHAMPION"))
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == joaat("BUFFALO4"))
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == joaat("DEITY"))
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == joaat("JUBILEE"))
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == joaat("IGNUS"))
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == joaat("CINQUEMILA"))
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == joaat("ASTRON"))
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == joaat("COMET7"))
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == joaat("ZENO"))
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == joaat("REEVER"))
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == joaat("IWAGEN"))
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == joaat("GRANGER2"))
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == joaat("PATRIOT3"))
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == joaat("SHINOBI"))
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == joaat("BALLER7"))
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == joaat("BRIOSO3"))
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == joaat("CORSITA"))
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == joaat("DRAUGUR"))
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == joaat("GREENWOOD"))
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == joaat("KANJOSJ"))
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == joaat("LM87"))
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == joaat("POSTLUDE"))
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == joaat("RHINEHART"))
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == joaat("SM722"))
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == joaat("TENF"))
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == joaat("TENF2"))
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == joaat("TORERO2"))
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == joaat("VIGERO2"))
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == joaat("WEEVIL2"))
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == joaat("RUINER4"))
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == joaat("SENTINEL4"))
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == joaat("CONADA"))
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == joaat("OMNISEGT"))
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == joaat("MANCHEZ3"))
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == joaat("BRICKADE2"))
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == joaat("EUDORA"))
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == joaat("POWERSURGE"))
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == joaat("JOURNEY2"))
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == joaat("SURFER3"))
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == joaat("ENTITY3"))
	{
		if (!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == joaat("PANTHERE"))
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == joaat("BOOR"))
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == joaat("EVERON2"))
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == joaat("TULIP2"))
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == joaat("R300"))
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == joaat("VIRTUE"))
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == joaat("ISSI8"))
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == joaat("BROADWAY"))
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == joaat("TAHOMA"))
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == joaat("TAXI"))
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_52() // Hash - 0x4C81F065 ^0x79C65D03
{
	return MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION();
}

BOOL func_53() // Hash - 0x4C81F065 ^0xA2709774
{
	return MISC::IS_DURANGO_VERSION() || unk_0x0C545AB1CF97ABB3();
}

BOOL func_54() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_55() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_56() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_57() // Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_58() // Hash - 0x44DD83CC ^0x7B62A376
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

BOOL func_59(Vehicle veParam0) // Hash - 0xC71C0264 ^0xDD01E87E
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == joaat("SPEEDO") && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_48(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_60(Vehicle veParam0) // Hash - 0xA5B9FC6B ^0x23EADD90
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

BOOL func_61(Vehicle veParam0) // Hash - 0xB4CAAE6F ^0x153EF8BE
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

BOOL func_62(Vehicle veParam0) // Hash - 0x7BB181DF ^0x17C4552A
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[24]))
		if (veParam0 == Global_77348.f_484[24])
			return false;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (i != 24 && i != 21 && i != 22 && i != 23 && i != 27 && i != 30 && i != 33 && i != 28 && i != 31 && i != 34 && i != 26 && i != 29 && i != 32)
				if (veParam0 == Global_77348.f_484[i])
					return true;
	}

	return false;
}

int func_63(Vehicle veParam0) // Hash - 0x593067C2 ^0x2918B7DD
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 145;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 145;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				return Global_98022[i];
	}

	return 145;
}

BOOL func_64(Vehicle veParam0, int iParam1, BOOL bParam2) // Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int num;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_65(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_65(int iParam0, int iParam1, char* sParam2, var uParam3) // Hash - 0xB1C4A94 ^0xDDAD4D49
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

void func_66(int iParam0, BOOL bParam1) // Hash - 0xF45B4890 ^0xF45B4890
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_68(iParam0, 0))
		{
			func_67(iParam0, 1, false);
			func_67(iParam0, 2, false);
			func_67(iParam0, 3, false);
			func_67(iParam0, 4, false);
			func_67(iParam0, 0, true);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_67(iParam0, 0, false);
	}

	return;
}

void func_67(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xDEF0CB8B ^0x421AAE37
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);

	return;
}

BOOL func_68(int iParam0, int iParam1) // Hash - 0x9EA0654 ^0x9EA0654
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

void func_69(int iParam0) // Hash - 0xF3C009B6 ^0xC702DC05
{
	BOOL flag;

	if (iParam0 == -1)
		return;

	if (func_73(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			flag = true;
		
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_139[iParam0], false))
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_77348.f_139[iParam0], false))
						flag = false;
		
			if (flag)
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
				VEHICLE::DELETE_VEHICLE(&Global_77348.f_139[iParam0]);
			}
		}
	
		Global_77348[iParam0] = 1;
	
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13))
		{
			if (iParam0 == 24 && func_68(iParam0, 0) && Global_78257.f_66 == 0 && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] != 0 && Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] > 3 && !func_71(0, Global_77348.f_555[0 /*21*/].f_12) || !func_71(1, Global_77348.f_555[0 /*21*/].f_12))
			{
				func_70(&Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/], &Global_78257);
				Global_78335 = Global_113648.f_32751.f_5591;
			}
		
			func_66(iParam0, false);
		}
	}

	return;
}

void func_70(var uParam0, var uParam1) // Hash - 0x8EF4EDA5 ^0xC1247BD8
{
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = { uParam0->f_1 };
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = { uParam0->f_9 };
	uParam1->f_59 = { uParam0->f_59 };
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
	return;
}

BOOL func_71(int iParam0, int iParam1) // Hash - 0x5855B2D ^0x5855B2D
{
	int num;

	switch (iParam1)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 1;
			break;
	
		case 2:
			num = 2;
			break;
	}

	if (iParam0 < 0 || iParam0 >= func_72(&Global_113648.f_32751.f_5038[num /*157*/]))
		return false;

	return func_48(Global_113648.f_32751.f_5038[num /*157*/][iParam0 /*78*/].f_66, false, -1);
}

int func_72(var uParam0) // Hash - 0x51136ED0 ^0x51136ED0
{
	return *uParam0;
}

BOOL func_73(var uParam0, int iParam1) // Hash - 0x93EFD4FF ^0xDEABE6A0
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
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_74(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_74(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_74(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_74(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_74(2, 1);
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
		
			if (func_58())
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
		
			if (func_58())
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
	
		if (!func_8(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_8(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_8(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

Hash func_74(int iParam0, int iParam1) // Hash - 0x3C1119CD ^0x1010ECAE
{
	int num;

	if (func_23(iParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_75(iParam0, &num, iParam1);
		return num;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_75(int iParam0, var uParam1, int iParam2) // Hash - 0xF92B8944 ^0xD11BCD5C
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

int func_76(Vehicle veParam0) // Hash - 0x91E46476 ^0x7754CEB4
{
	int i;
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]) && !ENTITY::IS_ENTITY_DEAD(Global_77348.f_484[i], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[i], false))
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(Global_77348.f_484[i], &colorPrimary2, &colorSecondary2);
		
			if (ENTITY::GET_ENTITY_MODEL(veParam0) == ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[i]) && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[i]) && colorPrimary == colorSecondary && colorPrimary2 == colorSecondary2)
				return i;
		}
	}

	return -1;
}

BOOL func_77(Vehicle veParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Hash - 0xD8B487B8 ^0x163806E1
{
	Hash entityModel;
	var sizeAndVehs;
	int pedNearbyVehicles;
	int i;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	sizeAndVehs = 3;

	switch (entityModel)
	{
		case joaat("CARGOBOB"):
			if (func_79(veParam0, Global_77348.f_139[38], false))
			{
				func_69(38);
				return true;
			}
			break;
	
		case joaat("FIRETRUK"):
			if (func_79(veParam0, Global_77348.f_139[43], true))
			{
				func_69(43);
				return true;
			}
			break;
	
		case joaat("CUBAN800"):
			pedNearbyVehicles = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &sizeAndVehs);
		
			for (i = 0; i <= pedNearbyVehicles - 1; i = i + 1)
			{
				if (func_79(veParam0, sizeAndVehs[i], true) && func_78(ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), 2136.133f, 4780.5635f, 39.9702f, 5f, false))
				{
					if (!bParam4 || func_8(uParam1, 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), true) < 10f)
					{
						VEHICLE::DELETE_VEHICLE(&veParam0);
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			break;
	
		case joaat("LUXOR2"):
			if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[14]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[14], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[14]) == joaat("LUXOR2") && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[14]))
				{
					func_69(14);
					return true;
				}
			}
			break;
	
		case joaat("SWIFT2"):
			if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[20]) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[20], false))
			{
				if (ENTITY::GET_ENTITY_MODEL(Global_77348.f_484[20]) == joaat("SWIFT2") && VEHICLE::GET_VEHICLE_LIVERY(veParam0) == VEHICLE::GET_VEHICLE_LIVERY(Global_77348.f_484[20]))
				{
					func_69(20);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_78(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, int iParam6, BOOL bParam7) // Hash - 0x1FB736D4 ^0x234AEAB7
{
	if (iParam6 < 0f)
		iParam6 = 0f;

	if (!bParam7)
		if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
			if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
				if (MISC::ABSF(fParam0.f_2 - fParam3.f_2) <= iParam6)
					return true;
	else if (MISC::ABSF(fParam0 - fParam3) <= iParam6)
		if (MISC::ABSF(fParam0.f_1 - fParam3.f_1) <= iParam6)
			return true;

	return false;
}

BOOL func_79(Vehicle veParam0, Vehicle veParam1, BOOL bParam2) // Hash - 0xFE15FF6A ^0xF2D270E5
{
	var colorPrimary;
	var colorSecondary;
	var colorPrimary2;
	var colorSecondary2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1) && !ENTITY::IS_ENTITY_DEAD(veParam1, false) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
	{
		if (bParam2)
		{
			VEHICLE::GET_VEHICLE_COLOURS(veParam0, &colorPrimary, &colorSecondary);
			VEHICLE::GET_VEHICLE_COLOURS(veParam1, &colorPrimary2, &colorSecondary2);
		
			if (colorPrimary == colorPrimary2 && colorSecondary == colorSecondary2)
				return true;
		}
		else
		{
			return true;
		}
	}

	return false;
}

void func_80(Vehicle veParam0, int iParam1) // Hash - 0xC9E7D414 ^0xEA9F91AF
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
		{
			Global_98012[i] = veParam0;
			Global_98022[i] = iParam1;
			Global_98032[i] = ENTITY::GET_ENTITY_MODEL(veParam0);
		
			if (VEHICLE::IS_THIS_MODEL_A_CAR(Global_98032[i]))
				Global_98060[iParam1 /*3*/][0] = -1;
			else
				Global_98060[iParam1 /*3*/][1] = -1;
		
			i = 9;
		}
	
		i == 8;
	}

	return;
}

void func_81(int iParam0, int iParam1) // Hash - 0xBF4A23B8 ^0xB5698C5
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
		{
			if (iParam0 == 145 || Global_98022[i] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == func_74(iParam0, iParam1))
				{
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), Global_98012[i], false))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_98012[i], false, true);
						VEHICLE::DELETE_VEHICLE(&Global_98012[i]);
						Global_98022[i] = 145;
					}
				}
			}
		}
	}

	return;
}

void func_82(Vehicle veParam0, var uParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x3234A2AB ^0xBABA9C12
{
	int num;
	int num2;
	int i;
	int j;
	int k;
	int l;
	int m;
	int n;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1->f_66 != 0;
	
		if (!func_102(veParam0))
		{
			if (MISC::GET_HASH_KEY(&(uParam1->f_1)) != 0)
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(veParam0, &(uParam1->f_1));
		
			if (*uParam1 >= 0 && *uParam1 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
				VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0, *uParam1);
		}
	
		if (uParam1->f_66 == joaat("SOVEREIGN"))
		{
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("CASCO"))
		{
			num = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num + 1));
			}
		}
		else if (uParam1->f_66 == joaat("SANDKING") || uParam1->f_66 == joaat("SANDKING2"))
		{
			num2 = 1;
		
			if (IS_BIT_SET(uParam1->f_77, func_42(num2 + 1)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(num2 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("FORMULA") || uParam1->f_66 == joaat("FORMULA2"))
		{
			for (i = 1; i <= 9; i = i + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(i)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(i));
				}
			}
		}
		else if (uParam1->f_66 == joaat("OPENWHEEL1"))
		{
			for (j = 1; j <= 6; j = j + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(j)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(j));
				}
			}
		}
		else if (uParam1->f_66 == joaat("OPENWHEEL2"))
		{
			for (k = 1; k <= 11; k = k + 1)
			{
				if (k != 9 && k != 10)
				{
					if (IS_BIT_SET(uParam1->f_77, func_42(k)))
					{
					}
					else
					{
						MISC::SET_BIT(&(uParam1->f_77), func_42(k));
					}
				}
			}
		}
		else if (uParam1->f_66 == joaat("SURFER3"))
		{
			for (l = 1; l <= 2; l = l + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(l)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(l));
				}
			}
		}
		else if (uParam1->f_66 == joaat("DINGHY5"))
		{
			if (IS_BIT_SET(uParam1->f_77, func_42(4)))
			{
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_77), func_42(4));
			}
		}
		else if (uParam1->f_66 == joaat("COQUETTE4"))
		{
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) != 0)
				MISC::SET_BIT(&(uParam1->f_77), 0);
		}
		else if (uParam1->f_66 == joaat("YOSEMITE2"))
		{
			MISC::SET_BIT(&(uParam1->f_77), func_42(1));
		}
		else if (uParam1->f_66 == joaat("HOTKNIFE"))
		{
			for (m = 1; m <= 2; m = m + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(m)))
				{
				}
				else
				{
					MISC::SET_BIT(&(uParam1->f_77), func_42(m));
				}
			}
		}
	
		if (uParam1->f_66 == joaat("NIGHTSHARK"))
		{
			VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, false);
		
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 5) != -1)
				VEHICLE::SET_DONT_PROCESS_VEHICLE_GLASS(veParam0, true);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 13))
			VEHICLE::SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(veParam0);
	
		if (IS_BIT_SET(uParam1->f_77, 12))
			VEHICLE::SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		else
			VEHICLE::CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(veParam0);
	
		if (uParam1->f_5 != -1 && uParam1->f_6 != -1)
		{
			if (func_100(uParam1->f_5) || func_100(uParam1->f_6))
			{
			}
			else
			{
				VEHICLE::SET_VEHICLE_COLOURS(veParam0, uParam1->f_5, uParam1->f_6);
			}
		}
	
		if (uParam1->f_7 < 0)
			uParam1->f_7 = 0;
	
		if (uParam1->f_8 < 0)
			uParam1->f_8 = 0;
	
		VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veParam0, uParam1->f_7, uParam1->f_8);
	
		if (IS_BIT_SET(uParam1->f_77, 15) || func_99(veParam0) || uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0 && func_98())
		{
			uParam1->f_62 = 0;
			uParam1->f_63 = 0;
			uParam1->f_64 = 0;
		}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0)
		{
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
	
		VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
	
		if (uParam1->f_65 == -1 && !func_44(uParam1->f_66))
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
		}
		else
		{
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, 0);
			VEHICLE::SET_VEHICLE_WINDOW_TINT(veParam0, uParam1->f_65);
		}
	
		if (IS_BIT_SET(uParam1->f_77, 9))
		{
			VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veParam0, false);
			VEHICLE::SET_DRIFT_TYRES(veParam0, false);
		}
	
		if (bParam2)
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veParam0, uParam1->f_70);
	
		VEHICLE::SET_VEHICLE_NEON_COLOUR(veParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 2, IS_BIT_SET(uParam1->f_77, 28));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 3, IS_BIT_SET(uParam1->f_77, 29));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 0, IS_BIT_SET(uParam1->f_77, 30));
		VEHICLE::SET_VEHICLE_NEON_ENABLED(veParam0, 1, IS_BIT_SET(uParam1->f_77, 31));
		VEHICLE::SET_VEHICLE_IS_STOLEN(veParam0, IS_BIT_SET(uParam1->f_77, 10));
	
		if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(veParam0) > 1 && uParam1->f_67 >= 0)
			VEHICLE::SET_VEHICLE_LIVERY(veParam0, uParam1->f_67);
	
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255)
			if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
					if (uParam1->f_69 == 6)
						func_97(veParam0, uParam1->f_69);
				else
					func_97(veParam0, uParam1->f_69);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam0, false))
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5)
				VEHICLE::RAISE_CONVERTIBLE_ROOF(veParam0, true);
			else
				VEHICLE::LOWER_CONVERTIBLE_ROOF(veParam0, true);
	
		if (bParam3)
			func_89(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		if (!VEHICLE::IS_THIS_MODEL_A_HELI(uParam1->f_66) && !VEHICLE::IS_THIS_MODEL_A_BOAT(uParam1->f_66))
		{
			for (n = 0; n <= 11; n = n + 1)
			{
				if (IS_BIT_SET(uParam1->f_77, func_42(n + 1)))
					if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
						VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, false);
				else if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, n + 1))
					VEHICLE::SET_VEHICLE_EXTRA(veParam0, n + 1, true);
			}
		}
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("SHEAVA") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("OMNIS") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("LE7B"))
			if (VEHICLE::GET_VEHICLE_MOD(veParam0, 0) == -1)
				VEHICLE::SET_VEHICLE_EXTRA(veParam0, 1, false);
	
		if (func_83() && VEHICLE::IS_THIS_MODEL_A_PLANE(uParam1->f_66) && VEHICLE::GET_VEHICLE_HAS_LANDING_GEAR(veParam0) && !VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("AVENGER")))
			if (!IS_BIT_SET(uParam1->f_77, 23))
				if (IS_BIT_SET(uParam1->f_77, 22))
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 2);
				else
					VEHICLE::CONTROL_LANDING_GEAR(veParam0, 3);
			else
				VEHICLE::CONTROL_LANDING_GEAR(veParam0, 4);
	
		if (IS_BIT_SET(uParam1->f_77, 27))
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", true);
		else
			DECORATOR::DECOR_SET_BOOL(veParam0, "IgnoredByQuickSave", false);
	}

	return;
}

BOOL func_83() // Hash - 0x599C0723 ^0x588DCD1B
{
	if (*Global_4718592.f_104427 == 6 || *Global_4718592.f_104427 == 7 || *Global_4718592.f_104427 == 18 || *Global_4718592.f_104427 == 19 && Global_4718592.f_2 == 20)
		return false;

	if (func_87(7))
		if (func_85(Global_2672505.f_4.f_16) || func_84(Global_2672505.f_4.f_16))
			return false;

	return true;
}

BOOL func_84(int iParam0) // Hash - 0x16FCD261 ^0xC786AD29
{
	int num;

	num = iParam0;

	if (num != -1)
		return Global_1890444[num /*129*/].f_77.f_51 != 0;

	return false;
}

BOOL func_85(Player plParam0) // Hash - 0xE40D6326 ^0xE40D6326
{
	Player player;

	player = plParam0;

	if (player != -1)
		return func_86(plParam0, 9);

	return false;
}

BOOL func_86(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

BOOL func_87(int iParam0) // Hash - 0x7F5F619C ^0x6E554E82
{
	return func_88(&(Global_2672505.f_183), iParam0);
}

BOOL func_88(var uParam0, int iParam1) // Hash - 0x1995C9E6 ^0x1995C9E6
{
	int num;
	int num2;
	int num3;

	num = iParam1;
	num2 = num / 32;
	num3 = num % 32;
	return IS_BIT_SET(uParam0->[num2], num3);
}

int func_89(var uParam0, var uParam1, var uParam2) // Hash - 0x5C9EC0F7 ^0xAEA0C62F
{
	int i;
	int modType;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		return 0;

	if (VEHICLE::GET_NUM_MOD_KITS(*uParam0) == 0)
		return 0;

	VEHICLE::SET_VEHICLE_MOD_KIT(*uParam0, 0);

	for (i = 0; i < *uParam1; i = i + 1)
	{
		modType = i;
	
		if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21)
		{
			VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, uParam1->[i] > 0);
		}
		else if (modType == 22)
		{
			if (uParam1->[i] > 0)
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, true);
			
				if (uParam1->[i] == 1)
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, 255);
				else
					VEHICLE::SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(*uParam0, uParam1->[i] - 2);
			}
			else
			{
				VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, modType, false);
			}
		}
		else if (VEHICLE::GET_VEHICLE_MOD(*uParam0, modType) != uParam1->[i] - 1)
		{
			VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, modType);
		
			if (uParam1->[i] > 0)
			{
				if (modType == 23)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[0] > 0);
				}
				else if (modType == 24)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, uParam2->[1] > 0);
				}
				else if (func_95(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_94(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_92(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_92(*uParam0, uParam1->[38] - 1), false);

	func_91(uParam0);

	if (func_90(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_90(Vehicle veParam0) // Hash - 0x4E83583B ^0x79F702A8
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
	
		for (i = 0; i < 49; i = i + 1)
		{
			modType = i;
		
			if (modType == 17 || modType == 18 || modType == 19 || modType == 20 || modType == 21 || modType == 22)
			{
			}
			else if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
			{
				TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 32);
				hashKey = MISC::GET_HASH_KEY(&unk);
			
				if (hashKey != 0)
					if (hashKey == MISC::GET_HASH_KEY(_("Roll Cage and Chassis Upgrade")) || hashKey == MISC::GET_HASH_KEY(_("Stunt Cage")))
						return true;
			}
		}
	}

	return false;
}

void func_91(var uParam0) // Hash - 0x2806D680 ^0xEA5BC67
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case joaat("STARLING"):
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case joaat("SLAMTRUCK"):
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_92(Vehicle veParam0, int iParam1) // Hash - 0xFE64EDC0 ^0x4504AA95
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("TORNADO5"):
				switch (iParam1)
				{
					case 0:
						return 0;
				
					case 1:
						return 1;
				
					case 2:
						return 2;
				
					case 3:
						return 3;
				
					case 4:
						return 4;
				
					case 5:
						return 4;
				}
				break;
		
			case joaat("FACTION3"):
				return 3;
		}
	
		value = func_93(veParam0, 38) + 1;
		value2 = func_93(veParam0, 24) + 1;
		num = SYSTEM::TO_FLOAT(iParam1 + 1) / SYSTEM::TO_FLOAT(value);
		num2 = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(value2) * num) - 1;
	
		if (num2 < 0)
			num2 = 0;
	
		if (num2 >= value)
			num2 = value - 1;
	
		return num2;
	}

	return 0;
}

int func_93(Vehicle veParam0, int iParam1) // Hash - 0x51ABE917 ^0xA6E9215C
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536 == iParam1)
		return Global_152537;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_95(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_94(Hash hParam0, int iParam1) // Hash - 0xFE274898 ^0xFE274898
{
	switch (hParam0)
	{
		case joaat("FACTION2"):
		case joaat("BUCCANEER2"):
		case joaat("CHINO2"):
		case joaat("MOONBEAM2"):
		case joaat("PRIMO2"):
		case joaat("VOODOO"):
			return true;
	
		case joaat("TENF2"):
		case joaat("WEEVIL2"):
		case joaat("BRIOSO3"):
		case joaat("SENTINEL4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("SABREGT2"):
			if (!Global_262145.f_14734)
				return false;
			else
				return true;
			break;
	
		case joaat("TORNADO5"):
			if (!Global_262145.f_14735)
				return false;
			else
				return true;
			break;
	
		case joaat("VIRGO2"):
			if (!Global_262145.f_14733)
				return false;
			else
				return true;
			break;
	
		case joaat("MINIVAN2"):
			if (!Global_262145.f_14736)
				return false;
			else
				return true;
			break;
	
		case joaat("SLAMVAN3"):
			if (!Global_262145.f_14738)
				return false;
			else
				return true;
			break;
	
		case joaat("FACTION3"):
			if (!Global_262145.f_14737)
				return false;
			else
				return true;
			break;
	
		case joaat("SULTANRS"):
		case joaat("BANSHEE2"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("COMET3"):
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("DIABLOUS2"):
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("FCR2"):
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ELEGY"):
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("NERO2"):
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("ITALIGTB2"):
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SPECTER2"):
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("TECHNICAL3"):
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("INSURGENT3"):
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case joaat("SLAMVAN4"):
		case joaat("SLAMVAN5"):
		case joaat("SLAMVAN6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("ISSI4"):
		case joaat("ISSI5"):
		case joaat("ISSI6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("IMPALER2"):
		case joaat("IMPALER3"):
		case joaat("IMPALER4"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DEATHBIKE"):
		case joaat("DEATHBIKE2"):
		case joaat("DEATHBIKE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MONSTER3"):
		case joaat("MONSTER4"):
		case joaat("MONSTER5"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("DOMINATOR4"):
		case joaat("DOMINATOR5"):
		case joaat("DOMINATOR6"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("BRUISER"):
		case joaat("BRUISER2"):
		case joaat("BRUISER3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("YOUGA3"):
		case joaat("GAUNTLET5"):
		case joaat("YOSEMITE3"):
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case joaat("MANANA2"):
		case joaat("PEYOTE3"):
		case joaat("GLENDALE2"):
			return true;
	}

	return false;
}

BOOL func_95(Vehicle veParam0, int iParam1, int iParam2) // Hash - 0x206208ED ^0x243B2D10
{
	if (!func_96() && VEHICLE::IS_VEHICLE_MOD_GEN9_EXCLUSIVE(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_96() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

void func_97(Vehicle veParam0, int iParam1) // Hash - 0x4F43FC2B ^0x7F7B0D9C
{
	int vehicleMod;
	int vehicleModVariation;

	if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
	{
		VEHICLE::SET_VEHICLE_MOD_KIT(veParam0, 0);
		vehicleMod = VEHICLE::GET_VEHICLE_MOD(veParam0, 24);
		vehicleModVariation = VEHICLE::GET_VEHICLE_MOD_VARIATION(veParam0, 24);
		VEHICLE::SET_VEHICLE_WHEEL_TYPE(veParam0, iParam1);
	
		if (ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("TORNADO6") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("PEYOTE2"))
			return;
	
		if (vehicleMod == -1)
			VEHICLE::REMOVE_VEHICLE_MOD(veParam0, 24);
		else
			VEHICLE::SET_VEHICLE_MOD(veParam0, 24, vehicleMod, vehicleModVariation == 1);
	}

	return;
}

BOOL func_98() // Hash - 0x11DC3931 ^0x2E8F2A7A
{
	return DLC::IS_DLC_PRESENT(joaat("MPINDEPENDENCE"));
}

BOOL func_99(Vehicle veParam0) // Hash - 0xB4BAF94A ^0xA9DEA446
{
	int int;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", INT))
			{
				if (DECORATOR::DECOR_EXIST_ON(veParam0, "MPBitset"))
					int = DECORATOR::DECOR_GET_INT(veParam0, "MPBitset");
			
				return IS_BIT_SET(int, 4);
			}
		}
	}

	return false;
}

int func_100(var uParam0) // Hash - 0xF0601AB8 ^0xF0601AB8
{
	if (!func_96() && func_101(uParam0))
		return 1;

	return 0;
}

BOOL func_101(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case 161:
		case 164:
		case 170:
		case 171:
		case 183:
		case 191:
		case 199:
		case 209:
		case 216:
		case 218:
			return true;
	}

	return false;
}

BOOL func_102(Vehicle veParam0) // Hash - 0x57A74E37 ^0x4772878C
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (!func_108(PLAYER::PLAYER_ID(), -1))
			veParam0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (func_104(PLAYER::PLAYER_ID()) == 3)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (func_103(veParam0) != -1)
				return true;

	return false;
}

int func_103(Vehicle veParam0) // Hash - 0x2BB30050 ^0x4B69794B
{
	if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("FMDeliverableID", INT))
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "FMDeliverableID"))
			return DECORATOR::DECOR_GET_INT(veParam0, "FMDeliverableID");

	return -1;
}

int func_104(Player plParam0) // Hash - 0xE627570A ^0xE627570A
{
	if (func_107(plParam0) == 233)
		return func_105(plParam0);

	return -1;
}

int func_105(Player plParam0) // Hash - 0x48014DA ^0xC49B9410
{
	if (func_106(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_182;

	return -1;
}

BOOL func_106(Player plParam0, BOOL bParam1) // Hash - 0x8B0CDA01 ^0x4664171D
{
	if (Global_1894573[plParam0 /*608*/].f_10.f_33 != -1 || bParam1 && Global_1894573[plParam0 /*608*/].f_10.f_32 != -1)
		return true;

	return false;
}

int func_107(Player plParam0) // Hash - 0x48014DA ^0x68F6350
{
	if (func_106(plParam0, false))
		return Global_1894573[plParam0 /*608*/].f_10.f_33;

	return -1;
}

BOOL func_108(Player plParam0, int iParam1) // Hash - 0x1C7D021F ^0xC08A6119
{
	Vehicle vehiclePedIsIn;

	if (func_109(plParam0, true, true))
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

BOOL func_109(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

void func_110(Vector3 vParam0, var uParam1, var uParam2, float fParam3, BOOL bParam4) // Hash - 0x1C589E88 ^0xAB2FCAED
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (func_73(&Global_77348.f_555[0 /*21*/], i))
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_77348.f_555[0 /*21*/], bParam4) <= fParam3)
				func_69(i);
	}

	return;
}

BOOL func_111(var uParam0) // Hash - 0x79226296 ^0xA9806D0C
{
	if (func_112(uParam0))
	{
		if (STREAMING::HAS_MODEL_LOADED(uParam0->f_12.f_66))
			return 1;
		else
			return 0;
	
		return 1;
	}
	else
	{
		return 0;
	}

	return 1;
}

BOOL func_112(var uParam0) // Hash - 0x250242CC ^0x9A8D76D5
{
	if (uParam0->f_12.f_66 == 0)
		return 0;

	if (!func_48(uParam0->f_12.f_66, false, -1))
		return 0;

	if (uParam0->f_12.f_66 == joaat("STUNT") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, false))
		return 0;

	return 1;
}

void func_113() // Hash - 0x9DA544F ^0xE9E9E9BB
{
	if (iLocal_201 == 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_MARINE_01")) && STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_PILOT_02")))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
				uLocal_33[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -1590.5227f, 2796.3022f, 15.9184f, 247.0896f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
				uLocal_33[1] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2303.7996f, 3387.99f, 30.034f, 58.5763f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[2]))
				uLocal_33[2] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -1697.329f, 2909.9414f, 31.9506f, 245.656f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[3]))
				uLocal_33[3] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -1696.3693f, 2905.7722f, 31.9454f, 6.3714f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[4]))
				uLocal_33[4] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -1843.7073f, 2821.6106f, 31.8528f, 271.6265f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[5]))
				uLocal_33[5] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2006.8772f, 2955.1013f, 31.8103f, 332.0101f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[6]))
				uLocal_33[6] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2010.022f, 2956.8052f, 31.8103f, 288.1283f, true, true);
		
			if (iLocal_28 != 3)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[7]))
					uLocal_33[7] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2140.2131f, 3034.6091f, 31.81f, 302.4493f, true, true);
			
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[8]))
					uLocal_33[8] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2136.053f, 3031.4944f, 31.81f, 38.6856f, true, true);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[9]))
				uLocal_33[9] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2035.4293f, 3058.8765f, 31.8103f, 169.8222f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[10]))
				uLocal_33[10] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2146.4666f, 3160.749f, 31.8106f, 356.4766f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[11]))
				uLocal_33[11] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2280.087f, 3172.4233f, 31.8103f, 353.663f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_33[12]))
				uLocal_33[12] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_MARINE_01"), -2277.3762f, 3177.8f, 31.8103f, 175.0685f, true, true);
		
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
			{
				uLocal_31[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_PILOT_02"), -1859.8307f, 3071.7576f, 31.8104f, 139.3607f, true, true);
				PED::SET_PED_PROP_INDEX(uLocal_31[0], 0, 2, 0, false, 1);
				PED::SET_PED_COMPONENT_VARIATION(uLocal_31[0], PV_COMP_ACCS, 0, 0, 0);
				ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_31[0], true, 1);
				WEAPON::GIVE_WEAPON_TO_PED(uLocal_31[0], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_31[0], hLocal_60);
				PED::SET_PED_ACCURACY(uLocal_31[0], 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_31[0], true);
				func_115(uLocal_31[0], 595);
				func_114(uLocal_31[0], false);
			}
		
			for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
			{
				if (uLocal_275[iLocal_176] == 0)
				{
					if (!PED::IS_PED_INJURED(uLocal_33[iLocal_176]))
					{
						ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_33[iLocal_176], true, 1);
						WEAPON::GIVE_WEAPON_TO_PED(uLocal_33[iLocal_176], joaat("WEAPON_ASSAULTRIFLE"), 2000, true, true);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_33[iLocal_176], hLocal_60);
						PED::SET_PED_ACCURACY(uLocal_33[iLocal_176], 10);
						func_115(uLocal_33[iLocal_176], 595);
						func_114(uLocal_33[iLocal_176], false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_33[iLocal_176], true);
						uLocal_275[iLocal_176] = 1;
					}
				}
			}
		
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_MARINE_01"));
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_PILOT_02"));
			iLocal_201 = 1;
		}
	}

	return;
}

void func_114(int iParam0, BOOL bParam1) // Hash - 0x45BC3F89 ^0x45BC3F89
{
	int i;
	int num;
	int j;

	i = 0;

	if (bParam1)
	{
		for (i = 0; i < 64; i = i + 1)
		{
			if (Global_63392[i /*2*/] != 0)
				if (Global_63392[i /*2*/] == iParam0)
					return;
		}
	}

	if (64 == Global_63391)
		return;

	num = -1;

	for (j = 0; num == -1 && j != 64; j = j + 1)
	{
		if (Global_63392[j /*2*/] == 0)
			num = j;
	}

	if (num == -1)
		return;

	Global_63392[num /*2*/] = iParam0;
	Global_63392[num /*2*/].f_1 = 7;
	Global_63391 = Global_63391 + 1;
	return;
}

void func_115(int iParam0, int iParam1) // Hash - 0xB07C346C ^0xA9F53A54
{
	int i;

	i = 0;

	for (i = 0; i < 16; i = i + 1)
	{
		if (Global_75610[i /*2*/] == 0)
		{
			Global_75610[i /*2*/] = iParam0;
			Global_75610[i /*2*/].f_1 = iParam1;
		
			if (i == Global_75643)
				Global_75643 = Global_75643 + 1;
		
			return;
		}
	}

	return;
}

void func_116(Vehicle veParam0, int iParam1) // Hash - 0xAF05FCB ^0xAAD3205
{
	Global_100681.f_22[iParam1] = veParam0;
	return;
}

BOOL func_117() // Hash - 0x4D7C1290 ^0x4D7C1290
{
	return func_111(&(Global_107196.f_2890));
}

void func_118() // Hash - 0x908D0A5F ^0x908D0A5F
{
	func_119(&(Global_107196.f_2890));
	return;
}

void func_119(var uParam0) // Hash - 0x78260907 ^0xA955114A
{
	if (func_112(uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);

	return;
}

Hash func_120() // Hash - 0x8AFFA48 ^0xD76B3745
{
	return Global_107196.f_2890.f_12.f_66;
}

BOOL func_121() // Hash - 0x4D7C1290 ^0x4D7C1290
{
	return func_112(&(Global_107196.f_2890));
}

void func_122(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, BOOL bParam11, BOOL bParam12, BOOL bParam13, BOOL bParam14, BOOL bParam15) // Hash - 0xF238BB73 ^0xF238BB73
{
	func_123(fParam0, fParam3, fParam6, fParam7, fParam10, 0f, 0f, 0f, bParam11, bParam12, bParam13, bParam14, bParam15);
	return;
}

void func_123(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, float fParam12, float fParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Hash - 0xFD52326E ^0x1AB3EC4D
{
	Vehicle playersLastVehicle;
	BOOL flag;
	BOOL flag2;
	int num;
	var out1;
	float out2;
	var entityCoords;
	Hash entityModel;
	Ped pedInVehicleSeat;
	int vehicleModelNumberOfSeats;

	if (bParam15)
		bParam15 = false;

	flag2 = true;
	num = 0;
	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
			num = 1;
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		{
			if (bParam18)
				func_128(playersLastVehicle);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0))
			{
				flag = true;
			}
			else
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
			
				if (entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)
					if (func_125(playersLastVehicle, vParam0, vParam3, fParam6))
						flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, joaat("TAXI")))
				{
					if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != PLAYER::PLAYER_PED_ID() && VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false) != 0)
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS((vParam0 + vParam3) / { 2f, 2f, 2f }, ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true) < 20f)
						{
							flag = true;
							flag2 = false;
						}
					}
				}
			}
		
			if (bParam16)
				if (func_64(playersLastVehicle, func_20(), true))
					flag = false;
		
			if (flag)
			{
				if (!func_124(fParam11))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(playersLastVehicle);
						VEHICLE::GET_VEHICLE_SIZE(playersLastVehicle, &out1, &out2);
					
						if (VEHICLE::IS_THIS_MODEL_A_HELI(entityModel))
						{
							fParam11 = fParam11 + 3f;
							fParam11.f_1 = fParam11.f_1 + 3f;
						}
					
						if (entityModel == joaat("ZENTORNO") || entityModel == joaat("BTYPE") || entityModel == joaat("DUBSTA3") || entityModel == joaat("MONSTER"))
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (entityModel == joaat("T20") || entityModel == joaat("VIRGO"))
							fParam11 = { fParam11 * { 1.2f, 1.2f, 1.2f } };
					
						if (out2 - out1 > fParam11)
							flag2 = false;
						else if (out2.f_1 - out1.f_1 > fParam11.f_1)
							flag2 = false;
						else if (out2.f_2 - out1.f_2 > fParam11.f_2)
							flag2 = false;
					}
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
				{
					if (flag2)
					{
						MISC::CLEAR_AREA_OF_VEHICLES(vParam7, 5f, false, false, false, false, false, false, 0);
						ENTITY::SET_ENTITY_HEADING(playersLastVehicle, fParam10);
						ENTITY::SET_ENTITY_COORDS(playersLastVehicle, vParam7, true, false, false, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(playersLastVehicle, 1084227584);
					
						if (bParam17)
						{
							VEHICLE::SET_VEHICLE_ENGINE_ON(playersLastVehicle, false, true, false);
							VEHICLE::SET_VEHICLE_DOORS_SHUT(playersLastVehicle, true);
						}
					}
					else
					{
						if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle) || !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(playersLastVehicle, true))
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, true);
					
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), playersLastVehicle, false))
							ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true), true, false, false, true);
					
						VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
					}
				}
			}
		
			if (bParam14)
				MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(vParam0, vParam3, fParam6, false, false, false, false, false, 0, 0);
		
			if (num == 1)
				if (ENTITY::DOES_ENTITY_EXIST(playersLastVehicle))
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&playersLastVehicle);
		}
		else
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(playersLastVehicle))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(playersLastVehicle, true, false);
		
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, -1, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
				ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
		
			vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(playersLastVehicle));
		
			if (vehicleModelNumberOfSeats <= 2)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 0, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			if (vehicleModelNumberOfSeats <= 4)
			{
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 1, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			
				pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(playersLastVehicle, 2, false);
			
				if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
					ENTITY::SET_ENTITY_COORDS(pedInVehicleSeat, ENTITY::GET_ENTITY_COORDS(pedInVehicleSeat, true), true, false, false, true);
			}
		
			VEHICLE::DELETE_VEHICLE(&playersLastVehicle);
		}
	}

	return;
}

BOOL func_124(float fParam0, var uParam1, var uParam2) // Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_125(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Hash - 0x54559876 ^0xE4811CB1
{
	float num;
	var unk3;
	var unk6;
	var unk9;
	var unk12;
	var unk15;
	var unk18;
	float minimum;
	float maximum;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_127(uParam1 - uParam4) };
		unk3 = { num };
		unk18 = 4;
		num = -unk3.f_1;
		num.f_1 = unk3;
		num.f_2 = 0f;
		unk6 = { uParam1 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk9 = { uParam1 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk12 = { uParam4 - (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		unk15 = { uParam4 + (num * { fParam7 / 2f, fParam7 / 2f, fParam7 / 2f }) };
		MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veParam0), &minimum, &maximum);
		unk18[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, minimum.f_1, 0f) };
		unk18[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, minimum, maximum.f_1, 0f) };
		unk18[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, minimum.f_1, 0f) };
		unk18[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, maximum, maximum.f_1, 0f) };
	
		if (func_126(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_126(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_126(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_126(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_126(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_126(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_126(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_126(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_126(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_126(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_126(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_126(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_126(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_126(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_126(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_126(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_126(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Hash - 0x3823BB3 ^0xD0DFB98E
{
	float num;
	float num2;
	float num3;
	float num4;
	var unk;
	var unk2;
	float num5;
	float num6;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;
	float num12;

	num = fParam0;
	num2 = fParam0.f_1;
	num3 = fParam3;
	num4 = fParam3.f_1;
	unk = uParam6;
	unk2 = uParam6.f_1;
	num5 = fParam9;
	num6 = fParam9.f_1;
	num7 = num3 - num;
	num8 = num4 - num2;
	num9 = num5 - unk;
	num10 = num6 - unk2;
	num11 = ((-num8 * (num - unk)) + (num7 * (num2 - unk2))) / ((-num9 * num8) + (num7 * num10));
	num12 = ((num9 * (num2 - unk2)) - (num10 * (num - unk))) / ((-num9 * num8) + (num7 * num10));

	if (num11 >= 0f && num11 <= 1f && num12 >= 0f && num12 <= 1f)
		return true;

	return false;
}

Vector3 func_127(float fParam0, var uParam1, var uParam2) // Hash - 0xFB6A39D2 ^0x80C9C759
{
	float num;
	float num2;

	num = SYSTEM::VMAG(fParam0);

	if (num != 0f)
	{
		num2 = 1f / num;
		fParam0 = { fParam0 * { num2, num2, num2 } };
	}
	else
	{
		fParam0 = 0f;
		fParam0.f_1 = 0f;
		fParam0.f_2 = 0f;
	}

	return fParam0;
}

void func_128(Vehicle veParam0) // Hash - 0xE71E0364 ^0xCB8720DC
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		{
			if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) <= 200f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		
			if (VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) <= 700f)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 900f);
		
			if (ENTITY::GET_ENTITY_HEALTH(veParam0) < 200)
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, 500f);
		}
	}

	return;
}

void func_129() // Hash - 0xF78C36CB ^0x4E2EAE4C
{
	if (!func_36())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1738.1306f, 3283.3796f, 40.1261f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 25.3545f);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
		PED::DELETE_PED(&uLocal_31[0]);

	for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_176]))
			PED::DELETE_PED(&uLocal_33[iLocal_176]);
	}

	if (func_20() == 2)
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_325[0]))
			PED::DELETE_PED(&uLocal_325[0]);

	if (func_20() == 0)
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_325[2]))
			PED::DELETE_PED(&uLocal_325[2]);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_49[0], 0);

	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
		AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_47))
		VEHICLE::DELETE_VEHICLE(&eLocal_47);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_55))
		VEHICLE::DELETE_VEHICLE(&veLocal_55);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		VEHICLE::DELETE_VEHICLE(&veLocal_48);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
		VEHICLE::DELETE_VEHICLE(&uLocal_49[0]);

	if (ENTITY::DOES_ENTITY_EXIST(Global_97178[0]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97178[0], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97178[0]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_97178[1]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97178[1], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97178[1]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(Global_97178[2]))
	{
		if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Global_97178[2], true))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], true, true);
	
		VEHICLE::DELETE_VEHICLE(&Global_97178[2]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
		VEHICLE::DELETE_VEHICLE(&uLocal_51[0]);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_58))
		OBJECT::DELETE_OBJECT(&eLocal_58);

	if (ENTITY::DOES_ENTITY_EXIST(eLocal_59))
		OBJECT::DELETE_OBJECT(&eLocal_59);

	if (CAM::DOES_CAM_EXIST(caLocal_56))
	{
		if (CAM::IS_CAM_ACTIVE(caLocal_56))
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		CAM::DESTROY_CAM(caLocal_56, false);
	}

	return;
}

void func_130() // Hash - 0x24AA2804 ^0xA4DDEA7F
{
	if (HUD::DOES_BLIP_EXIST(blLocal_61))
		HUD::REMOVE_BLIP(&blLocal_61);

	if (HUD::DOES_BLIP_EXIST(blLocal_62))
		HUD::REMOVE_BLIP(&blLocal_62);

	if (HUD::DOES_BLIP_EXIST(blLocal_65))
		HUD::REMOVE_BLIP(&blLocal_65);

	for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
	{
		func_131(&uLocal_70[iLocal_176 /*8*/]);
	}

	HUD::CLEAR_GPS_MULTI_ROUTE();
	return;
}

void func_131(Blip* pblParam0) // Hash - 0x448A57D ^0x38679B08
{
	BOOL flag;
	var unk;

	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::REMOVE_BLIP(pblParam0);
		flag = true;
	}

	if (HUD::DOES_BLIP_EXIST(pblParam0->f_1))
	{
		HUD::REMOVE_BLIP(&(pblParam0->f_1));
		flag = true;
	}

	if (ENTITY::DOES_ENTITY_EXIST(pblParam0->f_7))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pblParam0->f_7, false))
			if (HUD::DOES_PED_HAVE_AI_BLIP(pblParam0->f_7))
				HUD::SET_PED_HAS_AI_BLIP(pblParam0->f_7, false);
	
		flag = true;
	}

	if (flag)
		*pblParam0 = { unk };

	return;
}

void func_132() // Hash - 0x1F6715A0 ^0x431087E9
{
	if (iLocal_28 == 5)
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_61))
			HUD::REMOVE_BLIP(&blLocal_61);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_62))
			HUD::REMOVE_BLIP(&blLocal_62);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_61))
					HUD::REMOVE_BLIP(&blLocal_61);
			
				if (iLocal_300 == 1)
					if (MISC::GET_GAME_TIMER() < iLocal_189 + 7500)
						HUD::CLEAR_PRINTS();
			
				if (iLocal_28 == 4)
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_62))
						blLocal_62 = func_139(uLocal_314, false);
				
					if (iLocal_199 == 0)
					{
						if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
						{
							if (!func_138() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								func_137("DP_GOD4", 7500, 1);
								iLocal_190 = MISC::GET_GAME_TIMER();
								iLocal_199 = 1;
							}
						}
					}
				}
			
				if (iLocal_28 == 3)
					if (!HUD::DOES_BLIP_EXIST(uLocal_63[0]))
						uLocal_63[0] = func_136(uLocal_31[0], true, false);
			}
			else if (iLocal_28 != 5)
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_61))
					blLocal_61 = func_133(veLocal_48, false, false);
			
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_300 == 0)
					{
						HUD::CLEAR_PRINTS();
						func_137("DP_GOD6", 7500, 1);
						iLocal_189 = MISC::GET_GAME_TIMER();
						iLocal_300 = 1;
					}
				}
			
				if (HUD::DOES_BLIP_EXIST(blLocal_62))
					HUD::REMOVE_BLIP(&blLocal_62);
			
				if (iLocal_28 == 3)
					if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
						HUD::REMOVE_BLIP(&uLocal_63[0]);
			
				if (iLocal_28 == 4)
					if (iLocal_199 == 1)
						if (MISC::GET_GAME_TIMER() < iLocal_190 + 7500)
							HUD::CLEAR_PRINTS();
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_61))
				HUD::REMOVE_BLIP(&blLocal_61);
		
			if (iLocal_197 == 1)
				iLocal_200 = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(blLocal_61))
			HUD::REMOVE_BLIP(&blLocal_61);
	
		if (iLocal_197 == 1)
			iLocal_200 = 1;
	}

	return;
}

Blip func_133(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_134(veParam0, !bParam1, bParam2);
}

Blip func_134(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(veParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

var func_135(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_136(Entity eParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_134(eParam0, !bParam1, bParam2);
}

void func_137(char* sParam0, int iParam1, int iParam2) // Hash - 0x8A76EF8E ^0x32DD2C0C
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_138() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

Blip func_139(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

void func_140() // Hash - 0x8A0F9AC7 ^0x8A0F9AC7
{
	if (iLocal_175 > 0)
	{
		func_132();
		func_242();
	}

	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
	
		iLocal_304 = 0;
		iLocal_305 = 0;
		iLocal_308 = 0;
		iLocal_309 = 0;
	
		if (HUD::DOES_BLIP_EXIST(blLocal_65))
			HUD::REMOVE_BLIP(&blLocal_65);
	
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, false);
	
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	
		for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_176]))
			{
				if (!PED::IS_PED_INJURED(uLocal_33[iLocal_176]))
				{
					PED::SET_PED_KEEP_TASK(uLocal_33[iLocal_176], true);
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_33[iLocal_176]);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&uLocal_49[0]);
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uLocal_31[0]);
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_240(veLocal_48, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}

	if (iLocal_175 == 1)
	{
		if (iLocal_308 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_311, true) > 800f)
						{
							func_162(2, "STAGE_FLY_CARGOBOB_TO_HANGER", 1, 0, 0, 1);
							iLocal_308 = 1;
						}
					}
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
				{
					if (ENTITY::IS_ENTITY_IN_AIR(veLocal_48))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_311, true) > 800f)
						{
							if (iLocal_304 == 0 && iLocal_199 == 1)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									if (!func_138() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										func_161(&uLocal_403, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
									
										if (func_160(&uLocal_403, "DP2BAUD", "DP2B_CHAT59", 7, 0, 0, 0))
											iLocal_304 = 1;
									}
								}
							}
						
							if (iLocal_304 == 1 && iLocal_309 == 0)
							{
								if (func_159(72) == 0)
								{
									if (!func_138())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											func_161(&uLocal_403, 3, 0, "Wade", 0, 1);
										
											if (func_144(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP3", 7, 1, 0, 0, false))
												iLocal_309 = 1;
										}
									}
								}
								else if (!func_138())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										func_161(&uLocal_403, 3, 0, "Wade", 0, 1);
									
										if (func_144(&uLocal_403, 24, "DP2BAUD", "DP2B_WADEP4", 7, 1, 0, 0, false))
											iLocal_309 = 1;
									}
								}
							}
						}
						else if (func_143(71) == false)
						{
							if (iLocal_305 == 0)
							{
								if (!func_138())
								{
									if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
									{
										func_142("DP_HELP4", -1);
										iLocal_305 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
				{
					ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_314, 2f, 2f, 2f, true, true, 0);
				
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 1721.0015f, 3264.2483f, 38.400642f, 1765.5089f, 3276.518f, 46.053852f, 48.25f, false, true, 0))
					{
						if (!ENTITY::IS_ENTITY_IN_AIR(veLocal_48) && VEHICLE::IS_VEHICLE_STOPPED(veLocal_48))
						{
							func_141(true, 600);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 5f, 4);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
					}
				}
			}
		}
	}

	return;
}

void func_141(BOOL bParam0, int iParam1) // Hash - 0x3DD767FD ^0x3DD767FD
{
	int i;

	if (Global_63370)
	{
	}

	Global_63370 = false;

	if (bParam0)
		Global_63371 = 1;

	i = 0;

	if (iParam1 == -1)
	{
		for (i = 0; i < Global_75457; i = i + 1)
		{
			if (Global_63587[Global_75458[i /*9*/] /*13*/] == 4)
			{
				Global_75458[i /*9*/].f_5 = 0;
				return;
			}
		}
	}
	else
	{
		for (i = 0; i < Global_75457; i = i + 1)
		{
			if (Global_75458[i /*9*/] > 0)
			{
				if (Global_75458[i /*9*/] == iParam1)
				{
					Global_75458[i /*9*/].f_5 = 0;
					return;
				}
			}
		}
	}

	return;
}

void func_142(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_143(int iParam0) // Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

BOOL func_144(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Hash - 0xB2BF6D68 ^0xB2BF6D68
{
	func_158(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
	Global_21773 = 0;
	Global_21732 = true;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_21730 = 0;
	Global_21777 = 0;
	Global_21779 = 0;

	if (iParam5 == 1)
		Global_21737 = 1;
	else
		Global_21737 = 0;

	Global_2883585 = 0;
	return func_145(sParam3, iParam4, bParam8);
}

BOOL func_145(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
{
	Global_21726 = 0;

	if (Global_21725 == 0 || Global_21727 == 2)
	{
		if (Global_21725 != 0)
		{
			if (iParam1 > Global_21727)
			{
				if (Global_21732 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_20383.f_1 = 3;
					Global_21725 = 0;
					Global_21726 = 1;
					Global_21778 = 0;
					Global_21721 = 0;
					Global_21722 = 0;
					Global_21736 = 0;
					Global_21735 = false;
					Global_20382 = 0;
				}
				else
				{
					func_157();
					return 0;
				}
			}
			else
			{
				return 0;
			}
		}
	
		if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
			return 0;
	
		if (func_156(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_155();
		Global_21014 = { Global_21179 };
		Global_21731 = Global_21732;
		Global_21738 = Global_21739;
		Global_2883586 = Global_2883585;
		Global_21740 = { Global_21756 };
		Global_21733 = Global_21734;
		Global_22715 = Global_22716;
		Global_22723 = { Global_22729 };
		Global_22717 = Global_22718;
		Global_22719 = Global_22720;
		Global_22721 = Global_22722;
		Global_21344.f_370 = Global_22714;
		Global_21344.f_368 = Global_22712;
		Global_21344.f_369 = Global_22713;
		Global_21721 = Global_21722;
	
		if (Global_21731)
		{
			MISC::CLEAR_BIT(&Global_8253, 20);
			MISC::CLEAR_BIT(&Global_8254, 17);
			MISC::CLEAR_BIT(&Global_8255, 0);
		
			if (bParam2)
			{
				func_154();
			
				if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
			
				if (Global_20383.f_1 > 3)
					return 0;
			}
		
			if (Global_20349 == 1)
				return 0;
		
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (func_153())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE")))
					return 0;
			
				if (!Global_78558)
				{
					if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()))
						return 0;
				
					if (PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID()))
						return 0;
				
					if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						return 0;
				}
			}
		
			if (func_152())
			{
				return 0;
			}
			else
			{
				switch (Global_20383.f_1)
				{
					case 7:
						return 0;
				
					case 8:
						return 0;
				
					case 9:
						break;
				
					case 10:
						break;
				
					default:
						break;
				}
			
				if (IS_BIT_SET(Global_8253, 9))
					return 0;
			}
		
			func_151();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_150();
		func_146();
		return 1;
	}

	if (Global_21725 == 5)
		return 0;

	if (iParam1 < Global_21727 || iParam1 == Global_21727)
		return 0;

	if (iParam1 == 2)
	{
	}
	else
	{
		func_157();
	}

	return 0;
}

void func_146() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_147())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_147() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_149())
		return false;

	if (func_148(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_148(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_86(plParam0, 20);
}

Player func_149() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_150() // Hash - 0xD361CCE ^0x8275CC99
{
	int i;

	for (i = 0; i <= 69; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
	}

	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_21725 = 1;
	return;
}

void func_151() // Hash - 0xCD8A4D28 ^0xCD8A4D28
{
	Global_21778 = Global_21777;
	Global_21772 = Global_21773;
	Global_21819 = { Global_21807 };
	Global_21825 = { Global_21813 };
	Global_21780 = Global_21779;
	Global_21849 = { Global_21831 };
	Global_21855 = { Global_21837 };
	Global_21861 = { Global_21843 };
	Global_21867 = { Global_21873 };
	Global_7568 = Global_7569;
	Global_7570 = Global_7571;
	Global_21736 = Global_21737;
	Global_21738 = Global_21739;
	Global_21740 = { Global_21756 };
	Global_21729 = Global_21730;
	Global_22741 = 0;
	Global_21774 = 0;
	Global_21775 = 0;
	MISC::CLEAR_BIT(&Global_8254, 16);
	return;
}

BOOL func_152() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_153() // Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == joaat("WEAPON_SNIPERRIFLE") || weaponHash == joaat("WEAPON_HEAVYSNIPER") || weaponHash == joaat("WEAPON_REMOTESNIPER"))
				num = 1;
	
		if (CAM::IS_AIM_CAM_ACTIVE() && num == 1)
			return true;
		else
			return false;
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		if (PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true))
			return true;
		else
			return false;

	return true;
}

void func_154() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_22(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = 2;
			else
				Global_20383 = 0;
	}
	else
	{
		Global_20383 = func_20();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_155() // Hash - 0xA278716E ^0x1D21C390
{
	int i;

	for (i = 0; i <= 15; i = i + 1)
	{
		Global_21014[i /*10*/] = 0;
		TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
		Global_21014[i /*10*/].f_7 = 0;
		Global_21014[i /*10*/].f_8 = 0;
	}

	Global_21014.f_161 = -99;
	Global_21014.f_162 = { 0f, 0f, 0f };
	return;
}

BOOL func_156(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
				return Global_1653913.f_203[iParam1];
			break;
	}

	return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}

void func_157() // Hash - 0xE32CF1EF ^0xB9A7BEB2
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1 == 9 || Global_20382 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
		Global_20383.f_1 = 3;
		return;
	}

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

void func_158(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xF083067 ^0xF083067
{
	Global_21179 = { *uParam0 };
	Global_7569 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
	Global_22714 = iParam5;

	if (iParam3 == 0)
	{
		Global_22712 = 1;
		Global_22710 = 0;
	}
	else
	{
		Global_22712 = 0;
		Global_22710 = 1;
	}

	if (iParam4 == 0)
	{
		Global_22713 = 1;
		Global_22711 = 0;
	}
	else
	{
		Global_22713 = 0;
		Global_22711 = 1;
	}

	return;
}

int func_159(int iParam0) // Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return 0;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

BOOL func_160(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_158(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	Global_21732 = 0;
	Global_21734 = 0;
	Global_21739 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 0;
	Global_2883585 = 0;
	return func_145(sParam2, iParam3, false);
}

void func_161(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
{
	uParam0->[iParam1 /*10*/].f_7 == 1;
	uParam0->[iParam1 /*10*/] = pedParam2;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
	uParam0->[iParam1 /*10*/].f_7 = 1;
	uParam0->[iParam1 /*10*/].f_8 = iParam4;
	uParam0->[iParam1 /*10*/].f_9 = iParam5;

	if (!Global_78558)
	{
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_8 == 0)
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
			else
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
	
		if (!PED::IS_PED_INJURED(pedParam2))
			if (uParam0->[iParam1 /*10*/].f_9 == 0)
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, false);
			else
				PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(pedParam2, true);
	}

	return;
}

void func_162(int iParam0, char* sParam1, int iParam2, int iParam3, Ped pedParam4, int iParam5) // Hash - 0x60731CFA ^0xC09624B2
{
	int num;
	int num2;
	int num3;
	var unk;
	int num4;
	var unk3;
	int num5;

	if (iParam3 == 1)
		!MISC::ARE_STRINGS_EQUAL("FinaleC2", SCRIPT::GET_THIS_SCRIPT_NAME());

	num = 0;

	if (iParam3 == 1)
		if (iParam0 != Global_100718)
			num = 1;
	else if (iParam0 > Global_100718)
		num = 1;

	if (num == 1)
	{
		func_239(true);
		iParam0 <= Global_100718;
		num2 = func_237(SCRIPT::GET_THIS_SCRIPT_NAME(), true);
	
		if (num2 != -1 && num2 != 94)
		{
			Global_113648.f_9087.f_330[num2 /*6*/].f_1 = 0;
			num3 = func_235(num2);
			unk = { Global_91469[num2 /*34*/].f_8 };
		
			if (num2 == 90)
			{
				switch (Global_113648.f_9087.f_99.f_205[7])
				{
					case 1:
						TEXT_LABEL_APPEND_STRING(&unk, "A", 8);
						break;
				
					case 2:
						TEXT_LABEL_APPEND_STRING(&unk, "B", 8);
						break;
				}
			}
		
			STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk, num3, Global_100718, iParam0);
		}
		else
		{
			num4 = func_230(SCRIPT::GET_THIS_SCRIPT_NAME(), 1);
		
			if (num4 != -1)
			{
				Global_113648.f_18576[num4 /*6*/].f_4 = 0;
				TEXT_LABEL_COPY(&unk3, { func_229(num4) }, 4);
				STATS::PLAYSTATS_MISSION_CHECKPOINT(&unk3, 0, Global_100718, iParam0);
			}
			else
			{
				num5 = func_228(&(Global_100681.f_3));
			
				if (num5 > -1)
					Global_113648.f_24988.f_4[num5] = 0;
			}
		}
	
		Global_94859 = iParam2;
		Global_100718 = iParam0;
		func_163(iParam0, sParam1, pedParam4, iParam5);
		MISC::ARE_STRINGS_EQUAL(sParam1, "");
	}
	else if (iParam0 < Global_100718)
	{
	}

	return;
}

void func_163(int iParam0, char* sParam1, Ped pedParam2, int iParam3) // Hash - 0xA4C7F735 ^0x27C2099
{
	func_164(&Global_107196, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, sParam1, iParam3, pedParam2);
	return;
}

void func_164(var uParam0, const char* sParam1, int iParam2, char* sParam3, int iParam4, Ped pedParam5) // Hash - 0x53B0865D ^0xC434A1E8
{
	int i;
	int j;

	*uParam0 = func_20();
	uParam0->f_1 = func_217();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		func_189(&(uParam0->f_2884), 0);
		func_188(PLAYER::PLAYER_PED_ID());
		func_181(PLAYER::PLAYER_PED_ID(), false);
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &(uParam0->f_2), true);
	
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("OBJECT"))
			uParam0->f_2 = joaat("WEAPON_UNARMED");
	}

	for (j = 0; j < 3; j = j + 1)
	{
		uParam0->f_17[j] = Global_113648.f_2365.f_539.f_294[j];
	
		if (j == func_180())
		{
			func_173(PLAYER::PLAYER_PED_ID(), &uParam0->f_616[j /*65*/], 1, -1);
		}
		else
		{
			for (i = 0; i < 12; i = i + 1)
			{
				uParam0->f_616[j /*65*/][i] = Global_100406[j /*65*/][i];
				uParam0->f_616[j /*65*/].f_13[i] = Global_100406[j /*65*/].f_13[i];
			}
		
			uParam0->f_616[j /*65*/].f_59 = Global_100406[j /*65*/].f_59;
			uParam0->f_616[j /*65*/].f_60 = Global_100406[j /*65*/].f_60;
			uParam0->f_616[j /*65*/].f_61 = Global_100406[j /*65*/].f_61;
			uParam0->f_616[j /*65*/].f_62 = Global_100406[j /*65*/].f_62;
			uParam0->f_616[j /*65*/].f_63 = Global_100406[j /*65*/].f_63;
			uParam0->f_616[j /*65*/].f_64 = Global_100406[j /*65*/].f_64;
		
			for (i = 0; i < 9; i = i + 1)
			{
				uParam0->f_616[j /*65*/].f_39[i] = Global_100406[j /*65*/].f_39[i];
				uParam0->f_616[j /*65*/].f_49[i] = Global_100406[j /*65*/].f_49[i];
			}
		}
	
		for (i = 0; i < 44; i = i + 1)
		{
			uParam0->f_812[j /*477*/][i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/][i /*5*/] };
		}
	
		for (i = 0; i < 51; i = i + 1)
		{
			uParam0->f_812[j /*477*/].f_221[i /*5*/] = { Global_113648.f_2365.f_539.f_298[j /*477*/].f_221[i /*5*/] };
		}
	
		switch (j)
		{
			case 0:
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP0_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case 1:
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP1_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		
			case 2:
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_0"), &uParam0->f_2244[j /*32*/][0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_PURCH_1"), &uParam0->f_2244[j /*32*/][1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_0"), &uParam0->f_2244[j /*32*/].f_5[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_1"), &uParam0->f_2244[j /*32*/].f_5[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_2"), &uParam0->f_2244[j /*32*/].f_5[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_3"), &uParam0->f_2244[j /*32*/].f_5[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_PURCH_4"), &uParam0->f_2244[j /*32*/].f_5[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_0"), &uParam0->f_2244[j /*32*/].f_16[0], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_1"), &uParam0->f_2244[j /*32*/].f_16[1], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_2"), &uParam0->f_2244[j /*32*/].f_16[2], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_3"), &uParam0->f_2244[j /*32*/].f_16[3], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_4"), &uParam0->f_2244[j /*32*/].f_16[4], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_5"), &uParam0->f_2244[j /*32*/].f_16[5], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_6"), &uParam0->f_2244[j /*32*/].f_16[6], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_7"), &uParam0->f_2244[j /*32*/].f_16[7], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_8"), &uParam0->f_2244[j /*32*/].f_16[8], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_9"), &uParam0->f_2244[j /*32*/].f_16[9], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_10"), &uParam0->f_2244[j /*32*/].f_16[10], -1);
				STATS::STAT_GET_INT(joaat("SP2_WEAP_TINT_PURCH_11"), &uParam0->f_2244[j /*32*/].f_16[11], -1);
				break;
		}
	
		uParam0->f_9[j] = Global_113648.f_20566.f_233[j /*69*/].f_1;
		uParam0->f_13[j] = Global_60536[j];
		uParam0->f_25[0 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[0 /*295*/][j /*98*/] };
		uParam0->f_25[1 /*295*/][j /*98*/] = { Global_113648.f_2365.f_539.f_2407[1 /*295*/][j /*98*/] };
	
		for (i = 0; i <= 3; i = i + 1)
		{
			uParam0->f_2838[j /*15*/][i] = Global_113648.f_2365.f_493[j /*15*/][i];
			uParam0->f_2838[j /*15*/].f_5[i] = Global_113648.f_2365.f_493[j /*15*/].f_5[i];
			uParam0->f_2838[j /*15*/].f_10[i] = Global_113648.f_2365.f_493[j /*15*/].f_10[i];
		}
	
		for (i = 0; i <= 2; i = i + 1)
		{
			uParam0->f_2345[j /*164*/][i] = Global_113648.f_2365[j /*164*/][i];
			uParam0->f_2345[j /*164*/].f_4[i] = Global_113648.f_2365[j /*164*/].f_4[i];
			uParam0->f_2345[j /*164*/].f_8[i] = Global_113648.f_2365[j /*164*/].f_8[i];
			uParam0->f_2345[j /*164*/].f_12[i] = Global_113648.f_2365[j /*164*/].f_12[i];
			uParam0->f_2345[j /*164*/].f_16[i] = Global_113648.f_2365[j /*164*/].f_16[i];
			uParam0->f_2345[j /*164*/].f_20[i] = Global_113648.f_2365[j /*164*/].f_20[i];
			uParam0->f_2345[j /*164*/].f_24[i] = Global_113648.f_2365[j /*164*/].f_24[i];
			uParam0->f_2345[j /*164*/].f_28[i] = Global_113648.f_2365[j /*164*/].f_28[i];
			uParam0->f_2345[j /*164*/].f_32[i] = Global_113648.f_2365[j /*164*/].f_32[i];
			uParam0->f_2345[j /*164*/].f_36[i] = Global_113648.f_2365[j /*164*/].f_36[i];
			uParam0->f_2345[j /*164*/].f_40[i] = Global_113648.f_2365[j /*164*/].f_40[i];
			uParam0->f_2345[j /*164*/].f_44[i] = Global_113648.f_2365[j /*164*/].f_44[i];
			uParam0->f_2345[j /*164*/].f_48[i] = Global_113648.f_2365[j /*164*/].f_48[i];
			uParam0->f_2345[j /*164*/].f_52[i] = Global_113648.f_2365[j /*164*/].f_52[i];
			uParam0->f_2345[j /*164*/].f_56[i] = Global_113648.f_2365[j /*164*/].f_56[i];
			uParam0->f_2345[j /*164*/].f_60[i] = Global_113648.f_2365[j /*164*/].f_60[i];
			uParam0->f_2345[j /*164*/].f_64[i] = Global_113648.f_2365[j /*164*/].f_64[i];
			uParam0->f_2345[j /*164*/].f_68[i] = Global_113648.f_2365[j /*164*/].f_68[i];
			uParam0->f_2345[j /*164*/].f_72[i] = Global_113648.f_2365[j /*164*/].f_72[i];
			uParam0->f_2345[j /*164*/].f_76[i] = Global_113648.f_2365[j /*164*/].f_76[i];
			uParam0->f_2345[j /*164*/].f_80[i] = Global_113648.f_2365[j /*164*/].f_80[i];
			uParam0->f_2345[j /*164*/].f_84[i] = Global_113648.f_2365[j /*164*/].f_84[i];
			uParam0->f_2345[j /*164*/].f_88[i] = Global_113648.f_2365[j /*164*/].f_88[i];
			uParam0->f_2345[j /*164*/].f_92[i] = Global_113648.f_2365[j /*164*/].f_92[i];
			uParam0->f_2345[j /*164*/].f_96[i] = Global_113648.f_2365[j /*164*/].f_96[i];
			uParam0->f_2345[j /*164*/].f_100[i] = Global_113648.f_2365[j /*164*/].f_100[i];
			uParam0->f_2345[j /*164*/].f_104[i] = Global_113648.f_2365[j /*164*/].f_104[i];
			uParam0->f_2345[j /*164*/].f_108[i] = Global_113648.f_2365[j /*164*/].f_108[i];
			uParam0->f_2345[j /*164*/].f_112[i] = Global_113648.f_2365[j /*164*/].f_112[i];
			uParam0->f_2345[j /*164*/].f_116[i] = Global_113648.f_2365[j /*164*/].f_116[i];
			uParam0->f_2345[j /*164*/].f_120[i] = Global_113648.f_2365[j /*164*/].f_120[i];
			uParam0->f_2345[j /*164*/].f_124[i] = Global_113648.f_2365[j /*164*/].f_124[i];
			uParam0->f_2345[j /*164*/].f_128[i] = Global_113648.f_2365[j /*164*/].f_128[i];
			uParam0->f_2345[j /*164*/].f_132[i] = Global_113648.f_2365[j /*164*/].f_132[i];
			uParam0->f_2345[j /*164*/].f_136[i] = Global_113648.f_2365[j /*164*/].f_136[i];
			uParam0->f_2345[j /*164*/].f_140[i] = Global_113648.f_2365[j /*164*/].f_140[i];
			uParam0->f_2345[j /*164*/].f_144[i] = Global_113648.f_2365[j /*164*/].f_144[i];
			uParam0->f_2345[j /*164*/].f_148[i] = Global_113648.f_2365[j /*164*/].f_148[i];
			uParam0->f_2345[j /*164*/].f_152[i] = Global_113648.f_2365[j /*164*/].f_152[i];
			uParam0->f_2345[j /*164*/].f_156[i] = Global_113648.f_2365[j /*164*/].f_156[i];
			uParam0->f_2345[j /*164*/].f_160[i] = Global_113648.f_2365[j /*164*/].f_160[i];
		}
	}

	STATS::STAT_GET_INT(joaat("SP0_SPECIAL_ABILITY"), &uParam0->f_2341[0], -1);
	STATS::STAT_GET_INT(joaat("SP1_SPECIAL_ABILITY"), &uParam0->f_2341[1], -1);
	STATS::STAT_GET_INT(joaat("SP2_SPECIAL_ABILITY"), &uParam0->f_2341[2], -1);
	uParam0->f_5 = 145;

	if (iParam4 == 1)
		func_166(&(uParam0->f_2890), uParam0, pedParam5, 1, 1, 0);

	func_165(&(uParam0->f_2980));
	sParam3 = sParam3;
	iParam2 = iParam2;
	return;
}

int func_165(var uParam0) // Hash - 0x56C64BA4 ^0xCAE61007
{
	*uParam0 = Global_96530;
	uParam0->f_1 = Global_96531;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

void func_166(var uParam0, var uParam1, Ped pedParam2, int iParam3, int iParam4, int iParam5) // Hash - 0x4709079E ^0x71C884C9
{
	Vehicle vehicle;

	if (pedParam2 == 0)
		pedParam2 = PLAYER::PLAYER_PED_ID();

	if (ENTITY::DOES_ENTITY_EXIST(pedParam2))
		uParam1->f_5 = func_24(pedParam2);

	if (func_172(pedParam2, &vehicle, iParam3, iParam5))
		func_167(uParam0, uParam1, vehicle, iParam4);
	else if (ENTITY::DOES_ENTITY_EXIST(vehicle))
		if (!ENTITY::IS_ENTITY_DEAD(vehicle, false))
			if (VEHICLE::IS_VEHICLE_MODEL(vehicle, joaat("SKYLIFT")) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), vehicle, false))
				func_167(uParam0, uParam1, vehicle, iParam4);

	return;
}

int func_167(var uParam0, var uParam1, Vehicle veParam2, int iParam3) // Hash - 0x6BF8E630 ^0xF655D74B
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam2, false))
	{
		func_169(uParam0, veParam2, iParam3);
		uParam1->f_4 = veParam2;
	
		if (func_168(veParam2))
			uParam1->f_3 = 1;
		else
			uParam1->f_3 = 0;
	
		return 1;
	}

	return 0;
}

BOOL func_168(Vehicle veParam0) // Hash - 0x8CDF26D5 ^0xCE04F037
{
	int i;

	for (i = 0; i <= 6; i = i + 1)
	{
		if (Global_100681.f_22[i] == veParam0)
			return true;
	}

	return false;
}

void func_169(var uParam0, Vehicle veParam1, int iParam2) // Hash - 0x9B217A45 ^0xEE9A0448
{
	func_41(veParam1, &(uParam0->f_12));
	uParam0->f_7 = func_171(veParam1, 145, 0);
	uParam0->f_11 = func_63(veParam1);

	if (!uParam0->f_7)
		if (!uParam0->f_10)
			uParam0->f_10 = func_170(veParam1);

	if (iParam2 == 1)
	{
		*uParam0 = { ENTITY::GET_ENTITY_COORDS(veParam1, true) };
		uParam0->f_6 = ENTITY::GET_ENTITY_HEADING(veParam1);
		uParam0->f_3 = { ENTITY::GET_ENTITY_VELOCITY(veParam1) };
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veParam1, -1154.3256f, -1523.8713f, 3.262189f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_6 = 305.6424f;
		}
	
		if (Global_78253 == veParam1)
			uParam0->f_9 = 1;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		uParam0->f_8 = 1;
	else
		uParam0->f_8 = 0;

	return;
}

int func_170(Vehicle veParam0) // Hash - 0xDEF2B534 ^0x25A18686
{
	int i;

	for (i = 0; i < 68; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[i]))
			if (veParam0 == Global_77348.f_484[i])
				return 1;
	}

	return 0;
}

int func_171(Vehicle veParam0, int iParam1, int iParam2) // Hash - 0xC883A039 ^0x6D45755E
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return 0;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return 0;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				if (iParam1 == 145 || iParam1 == Global_98022[i])
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(veParam0) == func_74(iParam1, iParam2))
						return 1;
	}

	return 0;
}

BOOL func_172(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Hash - 0x6795F6D3 ^0x3A08E8AF
{
	const char* thisScriptName;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
				*uParam1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			else
				*uParam1 = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
		
			if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
				{
					if (iParam2 == 0 || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(*uParam1, true), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true) < 100f)
					{
						if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("TAXI")))
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != pedParam0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam1, -1, false) != 0)
								return false;
					
						if (func_64(*uParam1, func_20(), true))
						{
							thisScriptName = SCRIPT::GET_THIS_SCRIPT_NAME();
						
							if (!MISC::ARE_STRINGS_EQUAL(thisScriptName, "save_anywhere"))
								return false;
							else if (!PED::IS_PED_IN_ANY_VEHICLE(pedParam0, true))
								return false;
						}
					
						if (iParam3 == 1)
							if (DECORATOR::DECOR_EXIST_ON(*uParam1, "IgnoredByQuickSave"))
								if (DECORATOR::DECOR_GET_BOOL(*uParam1, "IgnoredByQuickSave"))
									return false;
						else if (VEHICLE::IS_VEHICLE_MODEL(*uParam1, joaat("BLIMP")))
							return false;
					
						return true;
					}
				}
			}
		}
	}

	return false;
}

void func_173(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Hash - 0x4CE94407 ^0xC863C983
{
	int num;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		num = func_24(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_179(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_178(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_23(num))
		{
			uParam1->f_59 = Global_113648.f_2365.f_539[num /*65*/].f_59;
			uParam1->f_60 = Global_113648.f_2365.f_539[num /*65*/].f_60;
			uParam1->f_61 = Global_113648.f_2365.f_539[num /*65*/].f_61;
			uParam1->f_62 = Global_113648.f_2365.f_539[num /*65*/].f_62;
			uParam1->f_63 = Global_113648.f_2365.f_539[num /*65*/].f_63;
			uParam1->f_64 = Global_113648.f_2365.f_539[num /*65*/].f_64;
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(pedParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_177(161, iParam3))
				uParam1->f_59 = func_174(2053, iParam3, 0);
			else
				uParam1->f_59 = func_174(753, iParam3, 0);
		
			uParam1->f_60 = func_174(754, iParam3, 0);
			uParam1->f_61 = func_174(755, iParam3, 0);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_177(161, iParam3))
				uParam1->f_59 = func_174(2053, iParam3, 0);
			else
				uParam1->f_59 = func_174(753, iParam3, 0);
	}

	return;
}

int func_174(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_175(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_175(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_176();
	
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

int func_176() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_177(int iParam0, int iParam1) // Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	BOOL outValue;

	statHash = Global_2848280[iParam0 /*3*/][func_175(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

void func_178(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Hash - 0x65821445 ^0x4849EA55
{
	int num;

	num = func_24(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_PROP_INDEX(pedParam0, epctParam1, 1);
		*uParam3 = PED::GET_PED_PROP_TEXTURE_INDEX(pedParam0, epctParam1);
	}
	else
	{
		num = iParam5;
	}

	if (iParam4 == 0)
		return;

	if (epctParam1 == PV_COMP_HEAD)
	{
		if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
		{
			if (pedParam0 != 0)
			{
				if (PED::IS_PED_WEARING_HELMET(pedParam0) && PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0) != -1)
				{
					*uParam2 = PED::GET_PED_HELMET_STORED_HAT_PROP_INDEX(pedParam0);
					*uParam3 = PED::GET_PED_HELMET_STORED_HAT_TEX_INDEX(pedParam0);
				}
			}
		}
	}

	switch (num)
	{
		case 0:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 7)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 28)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			else if (epctParam1 == PV_COMP_BERD)
			{
				if (*uParam2 == 1)
				{
					if (iParam4 & 2 != 0 || iParam4 & 64 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case 1:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 2)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 4)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 16 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 6)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 17)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 20)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 8 && *uParam2 <= 14)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	
		case 2:
			if (epctParam1 == PV_COMP_HEAD)
			{
				if (*uParam2 == 9)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 11)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 12)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 21)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 23)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 == 27)
				{
					if (iParam4 & 1 != 0 || iParam4 & 2 != 0 || iParam4 & 8 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
				else if (*uParam2 >= 14 && *uParam2 <= 20 || *uParam2 == 2)
				{
					if (iParam4 & 2 != 0 || iParam4 & 4 != 0)
					{
						*uParam2 = -1;
						*uParam3 = -1;
					}
				}
			}
			break;
	}

	return;
}

void func_179(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Hash - 0x10358CC6 ^0xCC2A186D
{
	int num;

	num = func_24(pedParam0);

	if (pedParam0 != 0)
	{
		*uParam2 = PED::GET_PED_DRAWABLE_VARIATION(pedParam0, epctParam1);
		*uParam3 = PED::GET_PED_TEXTURE_VARIATION(pedParam0, epctParam1);
		*uParam4 = PED::GET_PED_PALETTE_VARIATION(pedParam0, epctParam1);
	}
	else
	{
		num = iParam6;
	}

	if (iParam5 == 0)
		return;

	switch (num)
	{
		case 0:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 15)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 3 || *uParam2 == 22)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 8)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case 1:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 1 || *uParam2 == 10)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			
				if (iParam5 & 2 != 0 || iParam5 & 64 != 0)
				{
					if (*uParam2 == 19)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
				{
					if (*uParam2 == 5)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	
		case 2:
			if (epctParam1 == PV_COMP_ACCS)
			{
				if (iParam5 & 1 != 0 || iParam5 & 2 != 0 || iParam5 & 32 != 0)
				{
					if (*uParam2 == 3)
					{
						*uParam2 = 14;
						*uParam3 = 0;
					}
				}
			}
			else if (epctParam1 == PV_COMP_TASK)
			{
				if (*uParam2 >= 5 && *uParam2 <= 7)
				{
					if (iParam5 & 2 != 0 || iParam5 & 4 != 0)
					{
						*uParam2 = 0;
						*uParam3 = 0;
					}
				}
			}
			break;
	}

	return;
}

int func_180() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_21();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_181(Ped pedParam0, BOOL bParam1) // Hash - 0xC106EC1D ^0x74ED6306
{
	int num;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	num = func_24(pedParam0);

	if (func_23(num) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_182(pedParam0, &Global_113648.f_2365.f_539.f_298[num /*477*/]);
		
			for (i = 0; i <= 8 - 1; i = i + 1)
			{
				Global_113648.f_2365.f_539.f_1730[i /*4*/][num] = HUD::HUD_GET_WEAPON_WHEEL_TOP_SLOT(i);
			
				if (bParam1)
				{
					weaponWheelCurrentlyHighlighted = HUD::HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED();
				
					if (Global_113648.f_2365.f_539.f_1730[i /*4*/][num] == weaponWheelCurrentlyHighlighted)
						Global_113648.f_2365.f_539.f_1763 = i;
				}
			}
		
			PLAYER::GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(PLAYER::PLAYER_ID(), &tintIndex);
		
			if (num == 0)
				STATS::STAT_SET_INT(joaat("SP0_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (num == 1)
				STATS::STAT_SET_INT(joaat("SP1_PARACHUTE_CURRENT_TINT"), tintIndex, true);
			else if (num == 2)
				STATS::STAT_SET_INT(joaat("SP2_PARACHUTE_CURRENT_TINT"), tintIndex, true);
		}
	}

	return;
}

void func_182(Ped pedParam0, var uParam1) // Hash - 0xDEAAD761 ^0xB2E3A390
{
	int i;
	int j;
	Hash k;
	Hash hash;
	Hash pedWeapontypeInSlot;
	int l;
	int numDlcWeaponsSp;
	Hash outData;
	var ComponentDataPtr;
	int num;
	int offset;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			uParam1->[i /*5*/].f_1 = 0;
		}
	
		for (i = 0; i <= 44 - 1; i = i + 1)
		{
			hash = func_187(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_187(i));
				pedWeapontypeInSlot.f_1 = 0;
				pedWeapontypeInSlot.f_2 = 0;
				pedWeapontypeInSlot.f_3 = 0;
				pedWeapontypeInSlot.f_4 = 0;
			
				if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != joaat("WEAPON_UNARMED"))
				{
					pedWeapontypeInSlot.f_1 = WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot == joaat("GADGET_PARACHUTE"))
						pedWeapontypeInSlot.f_1 = 1;
				
					pedWeapontypeInSlot.f_3 = WEAPON::GET_PED_WEAPON_TINT_INDEX(pedParam0, pedWeapontypeInSlot);
					pedWeapontypeInSlot.f_4 = WEAPON::GET_PED_WEAPON_CAMO_INDEX(pedParam0, pedWeapontypeInSlot);
				
					if (pedWeapontypeInSlot.f_1 == -1)
						if (!WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &(pedWeapontypeInSlot.f_1)))
							pedWeapontypeInSlot.f_1 = 0;
				
					uParam1->[i /*5*/].f_1 = pedWeapontypeInSlot.f_1;
					j = 0;
				
					for (k = func_185(pedWeapontypeInSlot, j); k != 0; k = func_185(pedWeapontypeInSlot, j))
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
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_184(outData.f_1) && num < 51)
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
							if (!func_183(ComponentDataPtr.f_3))
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

BOOL func_183(int iParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (iParam0)
	{
		case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
		case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
		case 1011473080:
			return true;
	}

	return false;
}

BOOL func_184(int iParam0) // Hash - 0xD9D843D5 ^0xF9D91FBE
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		switch (iParam0)
		{
			case joaat("WEAPON_PISTOL50"):
			case joaat("WEAPON_BULLPUPSHOTGUN"):
			case joaat("WEAPON_ASSAULTSMG"):
				return false;
		
			case joaat("WEAPON_BOTTLE"):
			case joaat("WEAPON_SNSPISTOL"):
			case joaat("WEAPON_GUSENBERG"):
				return false;
		
			case joaat("WEAPON_HEAVYPISTOL"):
			case joaat("WEAPON_SPECIALCARBINE"):
				return false;
		
			case joaat("WEAPON_BULLPUPRIFLE"):
				return false;
		
			case joaat("WEAPON_DAGGER"):
			case joaat("WEAPON_VINTAGEPISTOL"):
				return false;
		
			case joaat("WEAPON_FIREWORK"):
			case joaat("WEAPON_MUSKET"):
				return false;
		
			case joaat("WEAPON_HEAVYSHOTGUN"):
			case joaat("WEAPON_MARKSMANRIFLE"):
				return false;
		
			case joaat("WEAPON_HOMINGLAUNCHER"):
			case joaat("WEAPON_PROXMINE"):
				return false;
		
			case joaat("WEAPON_COMBATPDW"):
			case joaat("WEAPON_KNUCKLE"):
			case joaat("WEAPON_MARKSMANPISTOL"):
				return false;
		
			case joaat("WEAPON_HEAVYRIFLE"):
			case joaat("WEAPON_ASSAULTMG"):
			case joaat("WEAPON_ASSAULTSNIPER"):
			case joaat("WEAPON_AMRIFLE"):
			case joaat("WEAPON_CROSSBOW"):
			case joaat("WEAPON_HARPOON"):
			case joaat("WEAPON_PROGRAMMABLEAR"):
			case joaat("WEAPON_RUBBERGUN"):
			case joaat("WEAPON_LOUDHAILER"):
			case joaat("WEAPON_FLAREGUN"):
			case joaat("WEAPON_HANDCUFFS"):
			case joaat("WEAPON_SNOWBALL"):
			case joaat("WEAPON_GARBAGEBAG"):
			case joaat("WEAPON_FLASHLIGHT"):
			case joaat("WEAPON_SWITCHBLADE"):
			case joaat("WEAPON_REVOLVER"):
			case joaat("WEAPON_DBSHOTGUN"):
			case joaat("WEAPON_COMPACTRIFLE"):
			case joaat("WEAPON_AUTOSHOTGUN"):
			case joaat("WEAPON_MINISMG"):
			case joaat("WEAPON_COMPACTLAUNCHER"):
			case joaat("WEAPON_BATTLEAXE"):
			case joaat("WEAPON_PIPEBOMB"):
			case joaat("WEAPON_POOLCUE"):
			case joaat("WEAPON_WRENCH"):
			case joaat("WEAPON_DOUBLEACTION"):
			case joaat("WEAPON_RAYCARBINE"):
			case joaat("WEAPON_RAYMINIGUN"):
			case joaat("WEAPON_RAYPISTOL"):
			case joaat("WEAPON_NAVYREVOLVER"):
			case joaat("WEAPON_CERAMICPISTOL"):
			case joaat("WEAPON_GADGETPISTOL"):
			case joaat("WEAPON_MILITARYRIFLE"):
			case joaat("WEAPON_COMBATSHOTGUN"):
			case joaat("WEAPON_EMPLAUNCHER"):
			case joaat("WEAPON_FERTILIZERCAN"):
			case joaat("WEAPON_STUNGUN_MP"):
			case joaat("WEAPON_METALDETECTOR"):
			case joaat("WEAPON_PRECISIONRIFLE"):
			case joaat("WEAPON_TACTICALRIFLE"):
			case joaat("WEAPON_PISTOLXM3"):
			case joaat("WEAPON_CANDYCANE"):
			case joaat("WEAPON_RAILGUNXM3"):
				return true;
		}
	}

	return false;
}

Hash func_185(Hash hParam0, int iParam1) // Hash - 0x6010BC66 ^0x1DFF9FB7
{
	int num;
	int dlcWeaponIndex;
	int i;
	int num2;
	var unk;
	var ComponentDataPtr;

	num = 0;

	switch (hParam0)
	{
		case joaat("WEAPON_PISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_PISTOL_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_PI_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_PISTOL_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_APPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_APPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_APPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 4:
					num = joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
					break;
			
				case 5:
					num = joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_MICROSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MICROSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MICROSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
					break;
			
				case 6:
					num = joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
					break;
			}
			break;
	
		case joaat("WEAPON_SMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_SMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_SMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_SMG_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO_02");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 8:
					num = joaat("COMPONENT_SMG_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 8:
					num = joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_CARBINERIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_CARBINERIFLE_CLIP_03");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_RAILCOVER_01");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 7:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 8:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 9:
					num = joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_ADVANCEDRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_MG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_MG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATMG_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATMG_CLIP_02");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_PUMPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_SR_SUPP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
					break;
			
				case 3:
					num = joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
					break;
			
				case 4:
					num = 330905451;
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SNIPERRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_HEAVYSNIPER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
					break;
			
				case 1:
					num = joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_LARGE");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MAX");
					break;
			}
			break;
	
		case joaat("WEAPON_GRENADELAUNCHER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			}
			break;
	
		case joaat("WEAPON_MINIGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINIGUN_CLIP_01");
					break;
			}
			break;
	
		case joaat("WEAPON_ASSAULTSMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_ASSAULTSMG_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_MACRO");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 5:
					num = joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 1:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_PISTOL50"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_PISTOL50_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_PISTOL50_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_PI_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 4:
					num = joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_COMBATPDW"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_COMBATPDW_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_COMBATPDW_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_COMBATPDW_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			}
			break;
	
		case joaat("WEAPON_SAWNOFFSHOTGUN"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
					break;
			}
			break;
	
		case joaat("WEAPON_BULLPUPRIFLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_SCOPE_SMALL");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_AR_SUPP");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 6:
					num = joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
					break;
			}
			break;
	
		case joaat("WEAPON_SNSPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SNSPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_SPECIALCARBINE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_AR_FLSH");
					break;
			
				case 4:
					num = joaat("COMPONENT_AT_SCOPE_MEDIUM");
					break;
			
				case 5:
					num = joaat("COMPONENT_AT_AR_SUPP_02");
					break;
			
				case 6:
					num = joaat("COMPONENT_AT_AR_AFGRIP");
					break;
			
				case 7:
					num = joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
					break;
			}
			break;
	
		case joaat("WEAPON_KNUCKLE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
					break;
			
				case 1:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
					break;
			
				case 2:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
					break;
			
				case 3:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
					break;
			
				case 4:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
					break;
			
				case 5:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
					break;
			
				case 6:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
					break;
			
				case 7:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_KING");
					break;
			
				case 8:
					num = joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
					break;
			}
			break;
	
		case joaat("WEAPON_MACHINEPISTOL"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
					break;
			
				case 2:
					num = joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
					break;
			
				case 3:
					num = joaat("COMPONENT_AT_PI_SUPP");
					break;
			}
			break;
	
		case joaat("WEAPON_SWITCHBLADE"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
					break;
			
				case 1:
					num = joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
					break;
			}
			break;
	
		case joaat("WEAPON_REVOLVER"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_REVOLVER_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
					break;
			
				case 2:
					num = joaat("COMPONENT_REVOLVER_VARMOD_GOON");
					break;
			}
			break;
	
		case joaat("WEAPON_MINISMG"):
			switch (iParam1)
			{
				case 0:
					num = joaat("COMPONENT_MINISMG_CLIP_01");
					break;
			
				case 1:
					num = joaat("COMPONENT_MINISMG_CLIP_02");
					break;
			}
			break;
	
		case joaat("WEAPON_BAT"):
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
				dlcWeaponIndex = func_186(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_183(ComponentDataPtr.f_3))
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

int func_186(Hash hParam0, Any* panParam1) // Hash - 0x539D27DB ^0xB7B7AD25
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

Hash func_187(int iParam0) // Hash - 0x5FB59AC3 ^0x9BC6B2ED
{
	int num;

	num = 0;

	switch (iParam0)
	{
		case 0:
			num = joaat("SLOT_UNARMED");
			break;
	
		case 1:
			num = joaat("SLOT_KNIFE");
			break;
	
		case 2:
			num = joaat("SLOT_NIGHTSTICK");
			break;
	
		case 3:
			num = joaat("SLOT_HAMMER");
			break;
	
		case 4:
			num = joaat("SLOT_BAT");
			break;
	
		case 5:
			num = joaat("SLOT_CROWBAR");
			break;
	
		case 6:
			num = joaat("SLOT_GOLFCLUB");
			break;
	
		case 7:
			num = joaat("SLOT_STUNGUN");
			break;
	
		case 8:
			num = joaat("SLOT_PISTOL");
			break;
	
		case 9:
			num = joaat("SLOT_COMBATPISTOL");
			break;
	
		case 10:
			num = joaat("SLOT_APPISTOL");
			break;
	
		case 11:
			num = joaat("SLOT_MICROSMG");
			break;
	
		case 12:
			num = joaat("SLOT_SMG");
			break;
	
		case 13:
			num = joaat("SLOT_ASSAULTRIFLE");
			break;
	
		case 14:
			num = joaat("SLOT_CARBINERIFLE");
			break;
	
		case 15:
			num = joaat("SLOT_ADVANCEDRIFLE");
			break;
	
		case 16:
			num = joaat("SLOT_MG");
			break;
	
		case 17:
			num = joaat("SLOT_COMBATMG");
			break;
	
		case 18:
			num = joaat("SLOT_PUMPSHOTGUN");
			break;
	
		case 19:
			num = joaat("SLOT_SAWNOFFSHOTGUN");
			break;
	
		case 20:
			num = joaat("SLOT_ASSAULTSHOTGUN");
			break;
	
		case 21:
			num = joaat("SLOT_SNIPERRIFLE");
			break;
	
		case 22:
			num = joaat("SLOT_HEAVYSNIPER");
			break;
	
		case 23:
			num = joaat("SLOT_GRENADELAUNCHER");
			break;
	
		case 24:
			num = joaat("SLOT_RPG");
			break;
	
		case 25:
			num = joaat("SLOT_MINIGUN");
			break;
	
		case 26:
			num = joaat("SLOT_GRENADE");
			break;
	
		case 27:
			num = joaat("SLOT_STICKYBOMB");
			break;
	
		case 28:
			num = joaat("SLOT_SMOKEGRENADE");
			break;
	
		case 29:
			num = joaat("SLOT_MOLOTOV");
			break;
	
		case 30:
			num = joaat("SLOT_FIREEXTINGUISHER");
			break;
	
		case 31:
			num = joaat("SLOT_PETROLCAN");
			break;
	
		case 33:
			num = joaat("SLOT_PARACHUTE");
			break;
	
		case 34:
			num = joaat("SLOT_DIGISCANNER");
			break;
	
		case 35:
			num = joaat("SLOT_OBJECT");
			break;
	
		case 36:
			num = joaat("SLOT_ASSAULTSMG");
			break;
	
		case 37:
			num = joaat("SLOT_BULLPUPSHOTGUN");
			break;
	
		case 38:
			num = joaat("SLOT_PISTOL50");
			break;
	}

	return num;
}

void func_188(Ped pedParam0) // Hash - 0x27D5295B ^0xD1A82444
{
	int num;

	num = func_24(pedParam0);

	if (func_23(num) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_294[num] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_189(var uParam0, int iParam1) // Hash - 0x635FFA34 ^0xAE461588
{
	var unk;
	var unk2;
	var unk5;
	int num;

	*uParam0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	uParam0->f_3 = ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID());
	uParam0->f_5 = PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID());

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		uParam0->f_4 = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	if (SYSTEM::VDIST(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f)
	{
		*uParam0 = { 301.2162f, 202.1357f, 103.3797f };
		uParam0->f_3 = 156.5144f;
	}
	else if (SYSTEM::VDIST(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f)
	{
		*uParam0 = { 394.2567f, -713.5439f, 28.2853f };
		uParam0->f_3 = 276.6273f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1425.5645f, -244.3f, 15.8053f) < 10f)
	{
		*uParam0 = { -1423.4724f, -214.2539f, 45.5004f };
		uParam0->f_3 = 353.8757f;
	}
	else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FINALE_CHOICE")) > 0)
	{
		*uParam0 = { 4.2587f, 525.0214f, 173.6281f };
		uParam0->f_3 = 203.6746f;
	}
	else if (IS_BIT_SET(Global_78807, 4))
	{
		*uParam0 = { 452.0255f, 5571.85f, 780.1859f };
		uParam0->f_3 = 78.9858f;
	}
	else if (IS_BIT_SET(Global_78807, 5))
	{
		*uParam0 = { -745.4462f, 5595.1465f, 40.6594f };
		uParam0->f_3 = 261.747f;
	}
	else if (IS_BIT_SET(Global_78807, 6))
	{
		*uParam0 = { -1675.5215f, -1125.5901f, 12.091f };
		uParam0->f_3 = 271.8208f;
	}
	else if (IS_BIT_SET(Global_78807, 7))
	{
		*uParam0 = { -1631.2192f, -1112.8052f, 12.0212f };
		uParam0->f_3 = 316.8879f;
	}
	else if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(1272.6588f, -1715.4669f, 53.7715f, "v_lesters"))
	{
		*uParam0 = { 1276.9564f, -1725.1892f, 53.6551f };
		uParam0->f_3 = 204.1703f;
	}
	else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -415.43646f, 2068.2886f, 113.30017f, -564.9516f, 1884.7025f, 134.04034f, 258.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -596.4706f, 2089.921f, 125.41275f, -581.21344f, 2036.2561f, 136.28363f, 9.5f, false, true, 0))
	{
		*uParam0 = { -601.59f, 2099.1973f, 128.8928f };
		uParam0->f_3 = 204.7498f;
	}
	else if (SYSTEM::VDIST(*uParam0, -1007.39264f, -477.95844f, 52.5357f) < 8f)
	{
		*uParam0 = { -1018.3756f, -483.9436f, 36.0964f };
		uParam0->f_3 = 114.7664f;
	}
	else if (SYSTEM::VDIST(*uParam0, 480.6662f, -1317.8085f, 28.20303f) < 15f)
	{
		*uParam0 = { 497.7238f, -1310.9323f, 28.2372f };
		uParam0->f_3 = 289.3663f;
	}
	else if (SYSTEM::VDIST(*uParam0, 2329.5266f, 2571.3113f, 45.6779f) < 5f)
	{
		*uParam0 = { 2316.9304f, 2594.1528f, 45.7199f };
		uParam0->f_3 = 348.1325f;
	}

	if (iParam1 == 1)
	{
		if (func_192(&unk))
		{
			if (func_191(unk, &unk2, &unk5))
			{
				unk2.f_2 = unk2.f_2 + 1f;
				*uParam0 = { unk2 };
				uParam0->f_3 = unk5;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0))
		{
			num = func_20();
		
			if (num == 0)
			{
				*uParam0 = { -65.1234f, 81.2517f, 70.5644f };
				uParam0->f_3 = 71.6237f;
			}
			else if (num == 1)
			{
				*uParam0 = { -68.5531f, -1824.3774f, 25.9424f };
				uParam0->f_3 = 215.8295f;
			}
			else if (num == 2)
			{
				*uParam0 = { -220.8189f, -1162.3016f, 22.0242f };
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 483.71747f, -1326.6299f, 28.2135f, 474.96436f, -1307.9983f, 34.494976f, 12f, false, true, 0))
		{
			*uParam0 = { 495.4108f, -1306.0801f, 29.2883f };
			uParam0->f_3 = 213.6273f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1146.77f, -1534.22f, 3.37f, -1158.4525f, -1517.7496f, 6.374244f, 13f, false, true, 0))
		{
			*uParam0 = { -1160.0951f, -1515.407f, 3.1496f };
			uParam0->f_3 = 305.6424f;
		}
		else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.54315f, -996.97687f, 24.88307f, 428.29355f, -997.0192f, 28.574581f, 8.5f, false, true, 0))
		{
			*uParam0 = { 431.8853f, -1013.133f, 28.7907f };
			uParam0->f_3 = 186.6814f;
		}
		else if (func_190(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f))
		{
			*uParam0 = { 279.4137f, -585.8815f, 43.2502f };
			uParam0->f_3 = 48.8028f;
		}
	}

	return;
}

BOOL func_190(Vector3 vParam0, var uParam1, var uParam2, char* sParam3, float fParam4, float fParam5, float fParam6) // Hash - 0xA7FD254F ^0xFF9CDA51
{
	Interior interiorAtCoordsWithType;
	Interior interiorFromCollision;

	if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
	{
		interiorAtCoordsWithType = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(fParam4, sParam3);
	
		if (!INTERIOR::IS_VALID_INTERIOR(interiorAtCoordsWithType))
			return false;
	
		interiorFromCollision = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
	
		if (interiorFromCollision == interiorAtCoordsWithType)
			return true;
	}

	return false;
}

BOOL func_191(int iParam0, var uParam1, var uParam2) // Hash - 0xE3586C79 ^0xE3586C79
{
	*uParam1 = { 0f, 0f, 0f };
	*uParam2 = 0f;

	switch (iParam0)
	{
		case 0:
			*uParam1 = { -829.842f, -191.7454f, 36.4386f };
			*uParam2 = 29.5061f;
			break;
	
		case 1:
			*uParam1 = { 129.8484f, -1716.5278f, 28.0702f };
			*uParam2 = 50.3483f;
			break;
	
		case 2:
			*uParam1 = { -1296.9128f, -1120.9985f, 5.3951f };
			*uParam2 = 0.9933f;
			break;
	
		case 3:
			*uParam1 = { 1938.0281f, 3718.7358f, 31.3154f };
			*uParam2 = 118.2305f;
			break;
	
		case 4:
			*uParam1 = { 1197.8656f, -469.3809f, 65.0885f };
			*uParam2 = 346.4477f;
			break;
	
		case 5:
			*uParam1 = { -32.2161f, -135.8212f, 56.0532f };
			*uParam2 = 186.0052f;
			break;
	
		case 6:
			*uParam1 = { -287.7696f, 6238.0806f, 30.2902f };
			*uParam2 = 316.1349f;
			break;
	
		case 7:
			*uParam1 = { 99.2876f, -1395.1599f, 28.2759f };
			*uParam2 = 320.2739f;
			break;
	
		case 8:
			*uParam1 = { 1679.4451f, 4819.056f, 41.0035f };
			*uParam2 = 4.6192f;
			break;
	
		case 9:
			*uParam1 = { 411.3063f, -809.1863f, 28.1554f };
			*uParam2 = 1.8972f;
			break;
	
		case 10:
			*uParam1 = { -1088.0536f, 2699.167f, 19.2748f };
			*uParam2 = 129.7382f;
			break;
	
		case 11:
			*uParam1 = { 1194.163f, 2695.6436f, 36.9225f };
			*uParam2 = 1.1454f;
			break;
	
		case 12:
			*uParam1 = { -821.2829f, -1088.0271f, 10.0499f };
			*uParam2 = 120.5883f;
			break;
	
		case 13:
			*uParam1 = { -3.3416f, 6521.3027f, 30.2961f };
			*uParam2 = 316.4451f;
			break;
	
		case 14:
			*uParam1 = { -1208.4172f, -785.9635f, 16.0139f };
			*uParam2 = 36.3181f;
			break;
	
		case 15:
			*uParam1 = { 623.1845f, 2739.191f, 40.9588f };
			*uParam2 = 3.5411f;
			break;
	
		case 16:
			*uParam1 = { 130.9555f, -198.2084f, 53.41f };
			*uParam2 = 251.3506f;
			break;
	
		case 17:
			*uParam1 = { -3164.065f, 1067.317f, 19.6778f };
			*uParam2 = 101.2229f;
			break;
	
		case 18:
			*uParam1 = { -713.2797f, -174.2767f, 35.8962f };
			*uParam2 = 29.8138f;
			break;
	
		case 19:
			*uParam1 = { -147.0616f, -306.4322f, 37.7912f };
			*uParam2 = 160.4526f;
			break;
	
		case 20:
			*uParam1 = { -1461.3552f, -230.6092f, 48.3064f };
			*uParam2 = 318.7851f;
			break;
	
		case 21:
			*uParam1 = { -1347.7391f, -1278.5734f, 3.8952f };
			*uParam2 = 17.9365f;
			break;
	
		case 22:
			*uParam1 = { 325.6833f, 164.3263f, 102.4425f };
			*uParam2 = 68.6407f;
			break;
	
		case 23:
			*uParam1 = { 1858.774f, 3742.3928f, 32.0779f };
			*uParam2 = 301.2329f;
			break;
	
		case 24:
			*uParam1 = { -286.3272f, 6202.8022f, 30.3323f };
			*uParam2 = 225.1334f;
			break;
	
		case 25:
			*uParam1 = { -1161.5958f, -1417.6997f, 3.712f };
			*uParam2 = 246.9161f;
			break;
	
		case 26:
			*uParam1 = { 1308.9523f, -1660.6111f, 50.2362f };
			*uParam2 = 163.5456f;
			break;
	
		case 27:
			*uParam1 = { -3161.585f, 1074.2136f, 19.6847f };
			*uParam2 = 98.6092f;
			break;
	
		case 28:
			*uParam1 = { 28.423f, -1110.8136f, 28.2848f };
			*uParam2 = 85.2495f;
			break;
	
		case 29:
			*uParam1 = { 1704.9661f, 3749.7092f, 33.0188f };
			*uParam2 = 45.6778f;
			break;
	
		case 30:
			*uParam1 = { 223.949f, -38.7894f, 68.6483f };
			*uParam2 = 159.4265f;
			break;
	
		case 31:
			*uParam1 = { 837.7854f, -1017.9628f, 26.3045f };
			*uParam2 = 181.0445f;
			break;
	
		case 32:
			*uParam1 = { -313.1914f, 6093.351f, 30.4625f };
			*uParam2 = 315.8405f;
			break;
	
		case 33:
			*uParam1 = { -663.4631f, -952.8069f, 20.3143f };
			*uParam2 = 92.6796f;
			break;
	
		case 34:
			*uParam1 = { -1323.0597f, -392.8577f, 35.4596f };
			*uParam2 = 210.7398f;
			break;
	
		case 35:
			*uParam1 = { -1106.1018f, 2684.35f, 18.0953f };
			*uParam2 = 127.0383f;
			break;
	
		case 36:
			*uParam1 = { -3157.9321f, 1081.309f, 19.6953f };
			*uParam2 = 100.2942f;
			break;
	
		case 37:
			*uParam1 = { 2562.8818f, 312.8641f, 107.4612f };
			*uParam2 = 179.205f;
			break;
	
		case 38:
			*uParam1 = { 822.48f, -2142.8745f, 27.8496f };
			*uParam2 = 355.0598f;
			break;
	
		case 39:
			*uParam1 = { -1137.0531f, -1993.9161f, 12.1677f };
			*uParam2 = 43.1213f;
			break;
	
		case 40:
			*uParam1 = { 717.8107f, -1084.0814f, 21.3094f };
			*uParam2 = 93.2649f;
			break;
	
		case 41:
			*uParam1 = { -387.6789f, -128.2568f, 37.6796f };
			*uParam2 = 119.1085f;
			break;
	
		case 42:
			*uParam1 = { 117.8835f, 6599.415f, 31.0134f };
			*uParam2 = 90.7225f;
			break;
	
		case 43:
			*uParam1 = { 1201.7089f, 2664.8135f, 36.8102f };
			*uParam2 = 133.9002f;
			break;
	
		case 44:
			*uParam1 = { -200.1521f, -1297.5024f, 30.296f };
			*uParam2 = 269.0687f;
			break;
	
		case 45:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 46:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 47:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 48:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 49:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 52:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 50:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 51:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 53:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 54:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 55:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 56:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	
		case 57:
			*uParam1 = { 0f, 0f, 0f };
			*uParam2 = 0f;
			break;
	}

	return !func_8(*uParam1, 0f, 0f, 0f, false);
}

BOOL func_192(var uParam0) // Hash - 0xDB33C708 ^0xF5B91AC7
{
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (func_216())
		{
			*uParam0 = func_198(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 6, -1, false, true, -1);
		
			if (func_197(*uParam0) && !func_193(*uParam0))
				return true;
		}
	}

	return false;
}

BOOL func_193(int iParam0) // Hash - 0xCAEAF99E ^0xCAEAF99E
{
	return func_194(iParam0, 0, true);
}

BOOL func_194(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_196() == 0)
			return IS_BIT_SET(func_174(func_195(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

int func_195(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
{
	switch (iParam0)
	{
		case 0:
			return 828;
	
		case 1:
			return 829;
	
		case 2:
			return 830;
	
		case 3:
			return 831;
	
		case 4:
			return 832;
	
		case 5:
			return 833;
	
		case 6:
			return 834;
	
		case 7:
			return 835;
	
		case 8:
			return 836;
	
		case 9:
			return 837;
	
		case 10:
			return 838;
	
		case 11:
			return 839;
	
		case 12:
			return 840;
	
		case 13:
			return 841;
	
		case 14:
			return 842;
	
		case 15:
			return 844;
	
		case 16:
			return 845;
	
		case 17:
			return 846;
	
		case 18:
			return 847;
	
		case 19:
			return 848;
	
		case 20:
			return 849;
	
		case 21:
			return 850;
	
		case 22:
			return 851;
	
		case 23:
			return 852;
	
		case 24:
			return 853;
	
		case 25:
			return 854;
	
		case 26:
			return 855;
	
		case 27:
			return 856;
	
		case 28:
			return 857;
	
		case 29:
			return 858;
	
		case 30:
			return 859;
	
		case 31:
			return 860;
	
		case 32:
			return 861;
	
		case 33:
			return 862;
	
		case 34:
			return 863;
	
		case 35:
			return 864;
	
		case 36:
			return 865;
	
		case 37:
			return 866;
	
		case 38:
			return 867;
	
		case 39:
			return 868;
	
		case 40:
			return 872;
	
		case 41:
			return 873;
	
		case 42:
			return 874;
	
		case 43:
			return 875;
	
		case 44:
			return 12385;
	
		case 45:
			return 3811;
	
		case 46:
			return 5386;
	
		case 47:
			return 6158;
	
		case 48:
			return 7235;
	
		case 49:
			return 7881;
	
		case 52:
			return 8917;
	
		case 50:
			return 8268;
	
		case 51:
			return 8270;
	
		case 53:
			return 9557;
	
		case 54:
			return 9633;
	
		case 55:
			return 9848;
	
		case 56:
			return 9916;
	
		case 57:
			return 9918;
	
		case 58:
			return 11433;
	
		case 59:
			return 11844;
	
		default:
			break;
	}

	return 14192;
}

int func_196() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_197(int iParam0) // Hash - 0xBE61F0FD ^0xBE61F0FD
{
	return func_194(iParam0, 5, true);
}

int func_198(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6, int iParam7) // Hash - 0x220FBC33 ^0x220FBC33
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = -1;

	for (i = 0; i <= 59; i = i + 1)
	{
		if (iParam3 == 6 || iParam3 == func_215(i))
		{
			if (!bParam5 || func_214(i))
			{
				distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_199(i, false), true);
			
				if (distanceBetweenCoords < num && distanceBetweenCoords <= (float)iParam4 || iParam4 == -1 && bParam6 || i != 21 && i != iParam7)
				{
					num = distanceBetweenCoords;
					num2 = i;
				}
			}
		}
	}

	return num2;
}

Vector3 func_199(int iParam0, BOOL bParam1) // Hash - 0x4894642D ^0x4894642D
{
	switch (iParam0)
	{
		case -1:
			return 0f, 0f, 0f;
	
		case 0:
			return -821.9946f, -187.1776f, 36.5689f;
	
		case 1:
			return 133.5702f, -1710.918f, 28.2916f;
	
		case 2:
			return -1287.0822f, -1116.5576f, 5.9901f;
	
		case 3:
			return 1933.1191f, 3726.079f, 31.8444f;
	
		case 4:
			return 1208.3335f, -470.917f, 65.208f;
	
		case 5:
			return -30.7448f, -148.4921f, 56.0765f;
	
		case 6:
			return -280.8165f, 6231.7705f, 30.6955f;
	
		case 7:
			return 80.665f, -1391.6694f, 28.3761f;
	
		case 8:
			return 1687.8812f, 4820.55f, 41.0096f;
	
		case 9:
			return 419.531f, -807.5787f, 28.4896f;
	
		case 10:
			return -1094.0487f, 2704.1707f, 18.0873f;
	
		case 11:
			return 1197.9722f, 2704.2205f, 37.1572f;
	
		case 12:
			return -818.6218f, -1077.533f, 10.3282f;
	
		case 13:
			return -0.2361f, 6516.0454f, 30.8684f;
	
		case 14:
			return -1199.8092f, -776.6886f, 16.3237f;
	
		case 15:
			return 618.1857f, 2752.5667f, 41.0881f;
	
		case 16:
			return 126.6853f, -212.5027f, 53.5578f;
	
		case 17:
			return -3168.9663f, 1055.2869f, 19.8632f;
	
		case 18:
			return -715.3598f, -155.7742f, 36.4105f;
	
		case 19:
			return -158.2199f, -304.9663f, 38.735f;
	
		case 20:
			return -1455.0045f, -233.1862f, 48.7936f;
	
		case 21:
			return -1335.973f, -1278.5549f, 3.8598f;
	
		case 22:
			return 321.6098f, 179.4165f, 102.5865f;
	
		case 23:
			return 1861.6853f, 3750.0798f, 32.0318f;
	
		case 24:
			return -290.1603f, 6199.0947f, 30.4871f;
	
		case 25:
			return -1153.9481f, -1425.0186f, 3.9544f;
	
		case 26:
			return 1322.4547f, -1651.1252f, 51.1885f;
	
		case 27:
			return -3169.4204f, 1074.7272f, 19.8343f;
	
		case 28:
			return 17.6804f, -1114.288f, 28.797f;
	
		case 29:
			return 1697.9788f, 3753.2002f, 33.7053f;
	
		case 30:
			return 245.2711f, -45.8126f, 68.941f;
	
		case 31:
			return 844.1248f, -1025.5707f, 27.1948f;
	
		case 32:
			return -325.8904f, 6077.0264f, 30.4548f;
	
		case 33:
			return -664.2178f, -943.3646f, 20.8292f;
	
		case 34:
			return -1313.9485f, -390.9637f, 35.592f;
	
		case 35:
			return -1111.2375f, 2688.4626f, 17.6131f;
	
		case 36:
			return -3165.2307f, 1082.8551f, 19.8438f;
	
		case 37:
			return 2569.6116f, 302.576f, 107.7349f;
	
		case 38:
			return 811.8699f, -2149.1016f, 28.6363f;
	
		case 39:
			return -1147.3138f, -1992.4344f, 12.1803f;
	
		case 40:
			return 724.524f, -1089.081f, 21.1692f;
	
		case 41:
			return -354.5272f, -135.4011f, 38.185f;
	
		case 42:
			return 113.2615f, 6624.2803f, 30.7871f;
	
		case 43:
			return 1174.7074f, 2644.4497f, 36.7552f;
	
		case 44:
			if (bParam1)
				return -211.5f, -1324.2f, 30.296f;
			else
				return -205.6654f, -1311.1127f, 30.296f;
			break;
	
		case 45:
			return func_211(Global_102825);
	
		case 46:
			if (Global_1853747 != func_149())
				if (func_210(Global_1853747))
					return func_203(2, 2);
				else if (func_202(Global_1853747))
					return func_203(45, 3);
				else
					return 1000000f, 1000000f, 1000000f;
			else
				return 1000000f, 1000000f, 1000000f;
			break;
	
		case 47:
			return 510.1f, 4749.5f, -69f;
	
		case 48:
			return -1422.1969f, -3015.8027f, -79.1603f;
	
		case 49:
			return 203.0799f, 5200.189f, -89.6f;
	
		case 52:
			return 2714.5466f, -354.2701f, -55.1867f;
	
		case 50:
			return Global_1970473;
	
		case 51:
			return 1100f, 220f, -50f;
	
		case 53:
			return 1560f, 400f, -50f;
	
		case 54:
			return -2159.901f, 1075.2125f, -25.361736f;
	
		case 55:
			return -2194.1226f, 1103.8047f, -24.2451f;
	
		case 56:
			switch (Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_321.f_7)
			{
				case 155:
					return 379.4285f, -53.6067f, 111.7088f;
			
				case 156:
					return -1029.1659f, -426.3766f, 72.2069f;
			
				case 157:
					return -581.9924f, -721.3945f, 121.3509f;
			
				case 158:
					return -1013.7179f, -768.3539f, 69.4942f;
			}
		
			return 1000000f, 1000000f, 1000000f;
	
		case 57:
			return -1010f, -70f, -100f;
	
		case 58:
			return func_200();
	
		case 59:
			return 560f, -405f, -69.6591f;
	}

	return 1000000f, 1000000f, 1000000f;
}

Vector3 func_200() // Hash - 0x6E37375C ^0x6E37375C
{
	if (!func_124(Global_1956117))
		return Global_1956117;

	switch (func_201())
	{
		case 0:
			return -29.532f, 6435.136f, 31.162f;
	
		case 1:
			return 1705.214f, 4819.167f, 41.75f;
	
		case 2:
			return 1795.522f, 3899.753f, 33.869f;
	
		case 3:
			return 1335.536f, 2758.746f, 51.099f;
	
		case 4:
			return 795.583f, 1210.78f, 338.962f;
	
		case 5:
			return -3192.67f, 1077.205f, 20.594f;
	
		case 6:
			return -789.719f, 5400.921f, 33.915f;
	
		case 7:
			return -24.384f, 3048.167f, 40.703f;
	
		case 8:
			return 2666.786f, 1469.324f, 24.237f;
	
		case 9:
			return -1454.966f, 2667.503f, 3.2f;
	
		case 10:
			return 2340.418f, 3054.188f, 47.888f;
	
		case 11:
			return 1509.183f, -2146.795f, 76.853f;
	
		case 12:
			return 1137.404f, -1358.654f, 34.322f;
	
		case 13:
			return -57.208f, -2658.793f, 5.737f;
	
		case 14:
			return 1905.017f, 565.222f, 175.558f;
	
		case 15:
			return 974.484f, -1718.798f, 30.296f;
	
		case 16:
			return 779.077f, -3266.297f, 5.719f;
	
		case 17:
			return -587.728f, -1637.208f, 19.611f;
	
		case 18:
			return 733.99f, -736.803f, 26.165f;
	
		case 19:
			return -1694.632f, -454.082f, 40.712f;
	
		case 20:
			return -1330.726f, -1163.948f, 4.313f;
	
		case 21:
			return -496.618f, 40.231f, 52.316f;
	
		case 22:
			return 275.527f, 66.509f, 94.108f;
	
		case 23:
			return 260.928f, -763.35f, 30.559f;
	
		case 24:
			return -478.025f, -741.45f, 30.299f;
	
		case 25:
			return 894.94f, 3603.911f, 32.56f;
	
		case 26:
			return -2166.511f, 4289.503f, 48.733f;
	
		case 27:
			return 1465.633f, 6553.67f, 13.771f;
	
		case 28:
			return 1101.032f, -335.172f, 66.944f;
	
		case 29:
			return 149.683f, -1655.674f, 29.028f;
	
		default:
		
	}

	return 0f, 0f, 0f;
}

int func_201() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2652258.f_2650;
}

BOOL func_202(Player plParam0) // Hash - 0x78AB9EAC ^0x78AB9EAC
{
	if (plParam0 != func_149())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 0) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 1) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 2))
			return true;

	return false;
}

Vector3 func_203(int iParam0, int iParam1) // Hash - 0x7E203DFC ^0x7E203DFC
{
	var unk;
	var unk7;

	unk7 = { 1000000f, 1000000f, 1000000f };

	if (Global_1853747 != func_149())
		if (iParam1 == 3)
			if (func_204(iParam0, 1, &unk, 0, false))
				unk7 = { unk };
		else if (iParam1 == 2)
			if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 4))
				if (func_204(iParam0, 1, &unk, 0, false))
					unk7 = { unk };
			else if (IS_BIT_SET(Global_1853910[Global_1853747 /*862*/].f_267.f_288, 5))
				if (func_204(iParam0, 2, &unk, 0, false))
					unk7 = { unk };

	return unk7;
}

BOOL func_204(int iParam0, int iParam1, var uParam2, int iParam3, BOOL bParam4) // Hash - 0x5642A5C0 ^0x5642A5C0
{
	var unk;
	Vector3 vector;
	var unk12;
	Vector3 vector2;

	if (!func_209(iParam3, &unk))
		return false;

	if (!func_209(iParam1, &vector))
		return false;

	if (!bParam4)
		unk12 = { func_207(iParam0) };
	else
		unk12 = { func_206(iParam0) };

	vector2 = { unk12 - unk };
	vector2 = { func_205(vector2, -unk.f_3.f_2) };
	vector2 = { func_205(vector2, vector.f_3.f_2) };
	*uParam2 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vector, 0f, vector2) };
	uParam2->f_3 = { unk12.f_3 };
	return true;
}

Vector3 func_205(float fParam0, var uParam1, var uParam2, float fParam3) // Hash - 0x8959C4D1 ^0x8922A2E2
{
	float num;
	float num2;
	float num3;

	num2 = SYSTEM::SIN(fParam3);
	num3 = SYSTEM::COS(fParam3);
	num = (fParam0 * num3) - (fParam0.f_1 * num2);
	num.f_1 = (fParam0 * num2) + (fParam0.f_1 * num3);
	num.f_2 = fParam0.f_2;
	return num;
}

struct<6> func_206(int iParam0) // Hash - 0xC73C1158 ^0x2A6D4A6F
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 1:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 2:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 3:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 4:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 5:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 6:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 7:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 8:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	}

	return unk;
}

struct<6> func_207(int iParam0) // Hash - 0x2623C81B ^0x2623C81B
{
	return func_208(iParam0);
}

struct<6> func_208(int iParam0) // Hash - 0x7684F11 ^0xD37BE1E4
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { 1105.22f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 1:
			unk = { 1104.105f, -3013.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 19:
			unk = { 1105.22f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 20:
			unk = { 1104.105f, -3005.985f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 2:
			unk = { 1102f, -3011.925f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 3:
			unk = { 1103f, -3010f, -38.125f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 4:
			unk = { 1103.213f, -3013.483f, -39.03f };
			unk.f_3 = { 0f, 0f, 31.32f };
			break;
	
		case 5:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1101.4084f, -3012.3198f, -38.45339f };
			break;
	
		case 6:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1103.0374f, -3012.3184f, -39.998745f };
			break;
	
		case 7:
			unk = { 1105.645f, -3012.04f, -39.542f };
			unk.f_3 = { 0f, 0f, -86.04f };
			break;
	
		case 8:
			unk.f_3 = { 0f, 0f, 0f };
			unk = { 1104.0634f, -3012.3677f, -39.998753f };
			break;
	
		case 9:
			unk = { 1105.6648f, -3012.3345f, -38.50835f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 10:
			unk = { 1102.504f, -3012.35f, -39.341f };
			unk.f_3 = { 0f, 0f, -96.48f };
			break;
	
		case 11:
			unk = { 1102.9282f, -3012.6934f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 12:
			unk = { 1102.9421f, -3011.315f, -37.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 61:
			unk = { 1101.9943f, -3012.8777f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 62:
			unk = { 1103.1519f, -3013.0325f, -38.24946f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 13:
			unk = { 1102.465f, -3009.515f, -39.341f };
			unk.f_3 = { 0f, 0f, -12.96f };
			break;
	
		case 14:
			unk = { 1102.9167f, -3009.525f, -39.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 15:
			unk = { 1102.9218f, -3010.8872f, -37.99945f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 63:
			unk = { 1101.6818f, -3009.227f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 64:
			unk = { 1102.4534f, -3008.5105f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 16:
			unk = { 1104.684f, -3009.561f, -39.341f };
			unk.f_3 = { 0f, 0f, 169.56f };
			break;
	
		case 17:
			unk = { 1104.3401f, -3008.6982f, -39.999454f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 18:
			unk = { 1104.3442f, -3009.618f, -37.981716f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 65:
			unk = { 1105.4595f, -3009.7935f, -39.949997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 66:
			unk = { 1104.7828f, -3010.433f, -38.199997f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 44:
			unk = { 1104.0251f, -3007.3157f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 21:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 22:
			unk = { 1103.562f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 23:
			unk = { 1102.1f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 115.92f };
			break;
	
		case 24:
			unk = { 1105.05f, -3010.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -103.32f };
			break;
	
		case 25:
			unk = { 1105.05f, -3008.75f, -39.35f };
			unk.f_3 = { 0f, 0f, -77.76f };
			break;
	
		case 26:
			unk = { 1102.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 27:
			unk = { 1102.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 28:
			unk = { 1105.05f, -3012.653f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 29:
			unk = { 1105.05f, -3011.717f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 30:
			unk = { 1102.1f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, 102.96f };
			break;
	
		case 31:
			unk = { 1105.05f, -3002.1f, -39.35f };
			unk.f_3 = { 0f, 0f, -101.88f };
			break;
	
		case 32:
			unk = { 1105.05f, -3000.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -81.36f };
			break;
	
		case 33:
			unk = { 1102.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 34:
			unk = { 1102.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 35:
			unk = { 1105.05f, -3004.541f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 36:
			unk = { 1105.05f, -3003.592f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 37:
			unk = { 1102.1f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, 103.32f };
			break;
	
		case 38:
			unk = { 1105.05f, -2994.2f, -39.35f };
			unk.f_3 = { 0f, 0f, -109.8f };
			break;
	
		case 39:
			unk = { 1105.05f, -2992.65f, -39.35f };
			unk.f_3 = { 0f, 0f, -84.96f };
			break;
	
		case 40:
			unk = { 1102.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 41:
			unk = { 1102.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, 90f };
			break;
	
		case 42:
			unk = { 1105.05f, -2996.501f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 43:
			unk = { 1105.05f, -2995.582f, -39.35f };
			unk.f_3 = { 0f, 0f, -90f };
			break;
	
		case 45:
			unk = { 1101f, -3011.9f, -39.95f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 46:
			unk = { 1102f, -3010f, -38.115f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 47:
			unk = { 1105.174f, -3004.1602f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 48:
			unk = { 1105.1749f, -3005.818f, -37.919476f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 49:
			unk = { 1106.5996f, -3000.8472f, -39.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 50:
			unk = { 1106.6013f, -3002.171f, -37.89988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 51:
			unk = { 1101.95f, -3011.9f, -39.2f };
			unk.f_3 = { 0f, 0f, 49.5f };
			break;
	
		case 52:
			unk = { 1101.95f, -3010f, -39.2f };
			unk.f_3 = { 0f, 0f, 130.32f };
			break;
	
		case 53:
			unk = { 1105.16f, -3009.06f, -39.2f };
			unk.f_3 = { 0f, 0f, -44.64f };
			break;
	
		case 54:
			unk = { 1102.4756f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 55:
			unk = { 1099f, -3008.5076f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 56:
			unk = { 1103.5928f, -3008.2698f, -39.9987f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 57:
			unk = { 1103.565f, -3014f, -39.988f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 58:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 59:
			unk = { 1103.565f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 60:
			unk = { 1103.55f, -3014f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 67:
			unk = { 1103.55f, -3013.762f, -40f };
			unk.f_3 = { 0f, 0f, 180f };
			break;
	
		case 68:
			unk = { 1103.55f, -3006.186f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	
		case 71:
		case 69:
		case 70:
		case 73:
		case 72:
		case 74:
			unk = { 1103.6f, -3013.933f, -40f };
			unk.f_3 = { 0f, 0f, 0f };
			break;
	}

	return unk;
}

BOOL func_209(int iParam0, var uParam1) // Hash - 0x31632D18 ^0xF002B35A
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { 1103.562f, -3014f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 1:
			*uParam1 = { 1103.562f, -3006f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		case 2:
			*uParam1 = { 1103.562f, -2998f, -40f };
			uParam1->f_3 = { 0f, 0f, 0f };
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_210(Player plParam0) // Hash - 0x9D5E1610 ^0x9D5E1610
{
	if (plParam0 != func_149())
		if (IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 3) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 4) || IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_288, 5))
			return true;

	return false;
}

Vector3 func_211(int iParam0) // Hash - 0xCBED323 ^0xCBED323
{
	switch (iParam0)
	{
		case 1:
			return 1060f, -2990f, -35f;
	
		case 2:
			return 1060f, -2990f, -35f;
	
		case 3:
			return 974.9542f, -3000.0908f, -35f;
	
		case 6:
			return -1586.36f, -566.6f, 106.17f;
	
		case 7:
			return -1389.87f, -465.17f, 82.68f;
	
		case 8:
			return -145.81f, -590.2f, 171.13f;
	
		case 9:
			return -62.49f, -823.55f, 288.74f;
	
		case 4:
			return 1102.5149f, -3158.888f, -38.5186f;
	
		case 5:
			return 1005.861f, -3156.162f, -39.907f;
	
		case 10:
			return 1103.5624f, -3000f, -40f;
	
		case 11:
			return 938.3077f, -3196.1116f, -100f;
	
		case 12:
			return -1266.802f, -3014.8364f, -49.4895f;
	
		case 13:
			return 520.0001f, 4750f, -70f;
	
		case 14:
			return 345.0041f, 4842.001f, -59.9997f;
	
		case 15:
			return -1604.6643f, -3012.5828f, -79.9999f;
	
		case 16:
			return -1421.0149f, -3012.5867f, -80f;
	
		case 17:
			if (func_212() == 0)
				return 205f, 5180f, -90f;
			else
				return 170f, 5190f, 10f;
			break;
	
		case 18:
			return -2000f, 1250f, 50f;
	
		case 19:
			return -1350f, 160f, -100f;
	
		case 20:
			return -1070f, -70f, -100f;
	
		case 21:
			return 570f, -415f, -70f;
	
		default:
			return 0f, 0f, -200f;
	}

	return 0f, 0f, -200f;
}

int func_212() // Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_213(PLAYER::PLAYER_ID());
}

int func_213(Player plParam0) // Hash - 0x1A54F100 ^0x35DB7B9D
{
	return MISC::GET_BITS_IN_RANGE(Global_2657589[plParam0 /*466*/].f_321.f_3, 28, 31);
}

BOOL func_214(int iParam0) // Hash - 0xA85A6891 ^0xA85A6891
{
	return func_194(iParam0, 0, false);
}

int func_215(int iParam0) // Hash - 0x1BE0B176 ^0x1BE0B176
{
	switch (iParam0)
	{
		case -1:
			return 6;
	
		case 0:
			return 0;
	
		case 1:
			return 0;
	
		case 2:
			return 0;
	
		case 3:
			return 0;
	
		case 4:
			return 0;
	
		case 5:
			return 0;
	
		case 6:
			return 0;
	
		case 50:
			return 0;
	
		case 7:
			return 1;
	
		case 8:
			return 1;
	
		case 9:
			return 1;
	
		case 10:
			return 1;
	
		case 11:
			return 1;
	
		case 12:
			return 1;
	
		case 13:
			return 1;
	
		case 14:
			return 1;
	
		case 15:
			return 1;
	
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
			return 2;
	
		case 23:
			return 2;
	
		case 24:
			return 2;
	
		case 25:
			return 2;
	
		case 26:
			return 2;
	
		case 27:
			return 2;
	
		case 28:
			return 3;
	
		case 29:
			return 3;
	
		case 30:
			return 3;
	
		case 31:
			return 3;
	
		case 32:
			return 3;
	
		case 33:
			return 3;
	
		case 34:
			return 3;
	
		case 35:
			return 3;
	
		case 36:
			return 3;
	
		case 37:
			return 3;
	
		case 38:
			return 3;
	
		case 39:
			return 4;
	
		case 40:
			return 4;
	
		case 41:
			return 4;
	
		case 42:
			return 4;
	
		case 43:
			return 4;
	
		case 44:
			return 4;
	
		case 45:
			return 5;
	
		case 46:
			return 3;
	
		case 47:
			return 3;
	
		case 48:
			return 3;
	
		case 49:
			return 3;
	
		case 52:
			return 3;
	
		case 51:
			return 1;
	
		case 53:
			return 3;
	
		case 54:
			return 2;
	
		case 55:
			return 1;
	
		case 56:
			return 3;
	
		case 57:
			return 1;
	
		case 58:
			return 3;
	
		case 59:
			return 3;
	}

	return 6;
}

BOOL func_216() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

var func_217() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_227(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_226(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_225(&unk, CLOCK::GET_CLOCK_HOURS());
	func_220(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_219(&unk, CLOCK::GET_CLOCK_MONTH());
	func_218(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_218(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_219(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_220(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_224(*uParam0);
	num2 = func_222(*uParam0);

	if (iParam1 < 1 || iParam1 > func_221(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_221(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_222(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_223(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_224(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_225(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_226(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_227(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_228(const char* sParam0) // Hash - 0x76B99CC6 ^0xD3FA6DF6
{
	if (MISC::ARE_STRINGS_EQUAL("BailBond1", sParam0))
		return 0;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond2", sParam0))
		return 1;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond3", sParam0))
		return 2;
	else if (MISC::ARE_STRINGS_EQUAL("BailBond4", sParam0))
		return 3;

	return -1;
}

struct<2> func_229(int iParam0) // Hash - 0x5F843DAD ^0x93F33E1F
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI1", 8);
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(&unk, "ABI2", 8);
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA1", 8);
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA2", 8);
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3", 8);
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3A", 8);
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA3C", 8);
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(&unk, "BA4", 8);
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(&unk, "DRE1", 8);
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS1", 8);
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS2", 8);
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS3", 8);
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS4", 8);
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS5", 8);
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS6", 8);
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS7", 8);
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EPS8", 8);
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT1", 8);
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT2", 8);
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT3", 8);
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(&unk, "EXT4", 8);
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN1", 8);
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN2", 8);
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(&unk, "FAN3", 8);
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HAO1", 8);
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN1", 8);
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(&unk, "HUN2", 8);
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS1", 8);
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS2", 8);
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS3", 8);
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(&unk, "JOS4", 8);
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MAU1", 8);
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN1", 8);
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN2", 8);
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MIN3", 8);
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS1", 8);
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(&unk, "MRS2", 8);
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1", 8);
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1A", 8);
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1B", 8);
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1C", 8);
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI1D", 8);
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI2", 8);
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(&unk, "NI3", 8);
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME1", 8);
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(&unk, "OME2", 8);
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA1", 8);
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA2", 8);
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3", 8);
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3A", 8);
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA3B", 8);
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(&unk, "PA4", 8);
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM1", 8);
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM2", 8);
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM3", 8);
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM4", 8);
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(&unk, "RAM5", 8);
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(&unk, "SAS1", 8);
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON1", 8);
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON2", 8);
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON3", 8);
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON4", 8);
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(&unk, "TON5", 8);
			break;
	
		default:
			break;
	}

	return unk;
}

int func_230(const char* sParam0, int iParam1) // Hash - 0x76A2E0AF ^0x8A5231BB
{
	int num;
	const char* str;
	Hash hashKey;
	int i;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	i = 0;

	for (i = 0; i < 63; i = i + 1)
	{
		num = i;
		func_231(num, &str);
	
		if (MISC::GET_HASH_KEY(str) == hashKey)
			return num;
	}

	iParam1 == 0;
	return -1;
}

void func_231(int iParam0, var uParam1) // Hash - 0xABE7683B ^0x7B8D7265
{
	switch (iParam0)
	{
		case 0:
			func_232(uParam1, "Abigail1", func_234(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 1:
			func_232(uParam1, "Abigail2", func_234(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 2:
			func_232(uParam1, "Barry1", func_234(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 3:
			func_232(uParam1, "Barry2", func_234(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 4:
			func_232(uParam1, "Barry3", func_234(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 5:
			func_232(uParam1, "Barry3A", func_234(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 6:
			func_232(uParam1, "Barry3C", func_234(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 7:
			func_232(uParam1, "Barry4", func_234(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_233(iParam0), 0, 0);
			break;
	
		case 8:
			func_232(uParam1, "Dreyfuss1", func_234(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 9:
			func_232(uParam1, "Epsilon1", func_234(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 10:
			func_232(uParam1, "Epsilon2", func_234(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 11:
			func_232(uParam1, "Epsilon3", func_234(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 12:
			func_232(uParam1, "Epsilon4", func_234(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 13:
			func_232(uParam1, "Epsilon5", func_234(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 14:
			func_232(uParam1, "Epsilon6", func_234(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 15:
			func_232(uParam1, "Epsilon7", func_234(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 16:
			func_232(uParam1, "Epsilon8", func_234(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 17:
			func_232(uParam1, "Extreme1", func_234(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 18:
			func_232(uParam1, "Extreme2", func_234(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 19:
			func_232(uParam1, "Extreme3", func_234(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 20:
			func_232(uParam1, "Extreme4", func_234(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 21:
			func_232(uParam1, "Fanatic1", func_234(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_233(iParam0), 1, 0);
			break;
	
		case 22:
			func_232(uParam1, "Fanatic2", func_234(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_233(iParam0), 1, 0);
			break;
	
		case 23:
			func_232(uParam1, "Fanatic3", func_234(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_233(iParam0), 0, 1);
			break;
	
		case 24:
			func_232(uParam1, "Hao1", func_234(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_233(iParam0), 0, 1);
			break;
	
		case 25:
			func_232(uParam1, "Hunting1", func_234(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 26:
			func_232(uParam1, "Hunting2", func_234(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 27:
			func_232(uParam1, "Josh1", func_234(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 28:
			func_232(uParam1, "Josh2", func_234(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 29:
			func_232(uParam1, "Josh3", func_234(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 30:
			func_232(uParam1, "Josh4", func_234(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 31:
			func_232(uParam1, "Maude1", func_234(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 32:
			func_232(uParam1, "Minute1", func_234(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 33:
			func_232(uParam1, "Minute2", func_234(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 34:
			func_232(uParam1, "Minute3", func_234(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 35:
			func_232(uParam1, "MrsPhilips1", func_234(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 36:
			func_232(uParam1, "MrsPhilips2", func_234(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 37:
			func_232(uParam1, "Nigel1", func_234(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 38:
			func_232(uParam1, "Nigel1A", func_234(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 39:
			func_232(uParam1, "Nigel1B", func_234(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_233(iParam0), 1, 1);
			break;
	
		case 40:
			func_232(uParam1, "Nigel1C", func_234(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_233(iParam0), 1, 1);
			break;
	
		case 41:
			func_232(uParam1, "Nigel1D", func_234(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_233(iParam0), 1, 1);
			break;
	
		case 42:
			func_232(uParam1, "Nigel2", func_234(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 43:
			func_232(uParam1, "Nigel3", func_234(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_233(iParam0), 1, 1);
			break;
	
		case 44:
			func_232(uParam1, "Omega1", func_234(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 45:
			func_232(uParam1, "Omega2", func_234(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 46:
			func_232(uParam1, "Paparazzo1", func_234(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 47:
			func_232(uParam1, "Paparazzo2", func_234(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 48:
			func_232(uParam1, "Paparazzo3", func_234(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 49:
			func_232(uParam1, "Paparazzo3A", func_234(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 50:
			func_232(uParam1, "Paparazzo3B", func_234(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 51:
			func_232(uParam1, "Paparazzo4", func_234(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 52:
			func_232(uParam1, "Rampage1", func_234(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 54:
			func_232(uParam1, "Rampage3", func_234(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 55:
			func_232(uParam1, "Rampage4", func_234(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 56:
			func_232(uParam1, "Rampage5", func_234(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_233(iParam0), 0, 0);
			break;
	
		case 53:
			func_232(uParam1, "Rampage2", func_234(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_233(iParam0), 1, 0);
			break;
	
		case 57:
			func_232(uParam1, "TheLastOne", func_234(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 58:
			func_232(uParam1, "Tonya1", func_234(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 59:
			func_232(uParam1, "Tonya2", func_234(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 60:
			func_232(uParam1, "Tonya3", func_234(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 61:
			func_232(uParam1, "Tonya4", func_234(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		case 62:
			func_232(uParam1, "Tonya5", func_234(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_233(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_232(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
{
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = { uParam2 };
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = { fParam7 };
	uParam0->f_9 = iParam10;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_10), sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_16), sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
	return;
}

int func_233(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_234(int iParam0) // Hash - 0x661307F0 ^0x209BF86B
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_229(iParam0) };

	if (MISC::IS_STRING_NULL_OR_EMPTY(&unk3))
	{
	}
	else
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "RC_", 8);
		TEXT_LABEL_APPEND_STRING(&unk, &unk3, 8);
	}

	return unk;
}

int func_235(int iParam0) // Hash - 0xA68C4CC2 ^0x3D062200
{
	switch (iParam0)
	{
		case 69:
		case 70:
			return func_236(Global_113648.f_9087.f_99.f_205[10]);
	
		case 74:
		case 75:
			return func_236(Global_113648.f_9087.f_99.f_205[8]);
	
		case 84:
		case 85:
			return func_236(Global_113648.f_9087.f_99.f_205[11]);
	
		case 90:
			return func_236(Global_113648.f_9087.f_99.f_205[7]);
	
		case 93:
			return func_236(Global_113648.f_9087.f_99.f_205[9]);
	}

	return 0;
}

int func_236(int iParam0) // Hash - 0xE3FB7E3F ^0xE3FB7E3F
{
	switch (iParam0)
	{
		case 1:
		case 3:
		case 5:
		case 6:
		case 8:
			return 0;
	
		case 2:
		case 4:
		case 7:
		case 9:
			return 1;
	}

	return -1;
}

int func_237(const char* sParam0, BOOL bParam1) // Hash - 0xB77E1B23 ^0xEB3CA535
{
	Hash hashKey;
	int num;

	hashKey = MISC::GET_HASH_KEY(sParam0);
	num = func_238(hashKey, true);
	num == -1 && !bParam1;
	return num;
}

int func_238(Hash hParam0, BOOL bParam1) // Hash - 0x486E1959 ^0x3A81F66C
{
	int i;

	for (i = 0; i < 94; i = i + 1)
	{
		if (Global_91469[i /*34*/].f_6 == hParam0)
			return i;
	}

	!bParam1;
	return -1;
}

void func_239(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
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

void func_240(Vehicle veParam0, int iParam1, int iParam2) // Hash - 0xBB66B13B ^0xEE89352E
{
	if (func_286() && func_36())
	{
		while (Global_100676 != 6)
		{
			SYSTEM::WAIT(0);
		}
	
		MISC::SET_GAME_PAUSED(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				PED::CLEAR_PED_WETNESS(PLAYER::PLAYER_PED_ID());
	
		if (veParam0 != 0)
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::DOES_ENTITY_EXIST(veParam0))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
					{
						if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, false))
						{
							PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veParam0, iParam1);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1065353216);
							CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
							SYSTEM::WAIT(0);
						}
					}
				}
			}
		}
	
		if (iParam2 == 1)
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
	
		GRAPHICS::ANIMPOSTFX_STOP_ALL();
		func_241(0);
	}

	return;
}

void func_241(int iParam0) // Hash - 0x7BC1D73E ^0x69FC312C
{
	if (iParam0 == 1)
		MISC::SET_BIT(&(Global_100681.f_20), 13);
	else
		MISC::CLEAR_BIT(&(Global_100681.f_20), 13);

	return;
}

void func_242() // Hash - 0xB757CF9B ^0x57E22F61
{
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_314, true) < 500f)
	{
		if (iLocal_214 == 0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
			{
				STREAMING::REQUEST_MODEL(joaat("SANDKING"));
			
				if (STREAMING::HAS_MODEL_LOADED(joaat("SANDKING")))
				{
					uLocal_51[0] = VEHICLE::CREATE_VEHICLE(joaat("SANDKING"), 1754.9508f, 3290.994f, 40.1176f, 182.397f, true, true, false);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_51[0], true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("SANDKING"));
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
				iLocal_214 = 1;
		}
	}
	else if (iLocal_214 == 1)
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_314, true) > 550f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_51[0]))
				VEHICLE::DELETE_VEHICLE(&uLocal_51[0]);
		
			iLocal_214 = 0;
		}
	}

	return;
}

void func_243() // Hash - 0x1423D9E4 ^0x69BD8599
{
	if (iLocal_175 > 0)
	{
		func_132();
		func_249();
		func_242();
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
		{
			PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
			PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		}
	
		func_248();
		func_247();
	
		for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
				func_246(uLocal_33[iLocal_176], &uLocal_70[iLocal_176 /*8*/], -1, 0, false, false, -1082130432, 0, -1, -1, true, false, false);
			else
				func_131(&uLocal_70[iLocal_176 /*8*/]);
		}
	}

	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
	
		iLocal_199 = 0;
		uLocal_202[0] = 0;
		uLocal_202[1] = 0;
		iLocal_205 = 0;
		uLocal_206[0] = 0;
		uLocal_206[1] = 0;
		iLocal_209 = 0;
		iLocal_214 = 0;
		uLocal_215[0] = 0;
		iLocal_273 = 0;
		iLocal_274 = 0;
		iLocal_295 = 0;
		iLocal_296 = 0;
		iLocal_297 = 0;
		iLocal_298 = 0;
		iLocal_299 = 0;
		iLocal_300 = 0;
		iLocal_183 = MISC::GET_GAME_TIMER();
		iLocal_188 = MISC::GET_GAME_TIMER();
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, false);
	
		func_162(1, "STAGE_ESCAPE_MILITARY", 0, 0, 0, 1);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_240(veLocal_48, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENTER_CHOPPER"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENTER_CHOPPER");
	
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
			AUDIO::START_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
	
		func_245(602, false);
		PLAYER::SET_POLICE_RADAR_BLIPS(false);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
				func_244(veLocal_48, -1);
	
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}

	if (iLocal_175 == 1)
	{
		if (uLocal_206[0] == 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
				HUD::REMOVE_BLIP(&uLocal_63[0]);
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(uLocal_49[0], 0);
		
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE"))
				AUDIO::STOP_AUDIO_SCENE("DH_P_2B_ENEMY_CHOPPERS_ARRIVE");
		
			func_141(true, 602);
			func_245(600, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(veLocal_48, 1721.0015f, 3264.2483f, 38.400642f, 1765.5089f, 3276.518f, 46.053852f, 48.25f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_175 = 0;
							iLocal_28 = 5;
						}
						else
						{
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							func_30();
						}
					}
					else
					{
						iLocal_175 = 0;
						iLocal_28 = 4;
					}
				}
			}
		}
		else if (iLocal_209 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183 + 10000)
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
							{
								func_137("DP_GOD5", 7500, 1);
								iLocal_209 = 1;
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_244(Vehicle veParam0, int iParam1) // Hash - 0x691F9D08 ^0x691F9D08
{
	Global_63373 = veParam0;
	Global_63374 = iParam1;
	return;
}

void func_245(int iParam0, BOOL bParam1) // Hash - 0x4EE5C84A ^0x4EE5C84A
{
	int i;

	Global_63372 = iParam0;

	if (!Global_63370)
		Global_63370 = true;

	if (bParam1)
	{
		for (i = 0; i < Global_75457; i = i + 1)
		{
			if (Global_75458[i /*9*/] == iParam0)
				Global_75458[i /*9*/].f_1 = 0;
		}
	}

	return;
}

int func_246(Ped pedParam0, var uParam1, int iParam2, Player plParam3, BOOL bParam4, BOOL bParam5, int iParam6, const char* sParam7, int iParam8, int iParam9, BOOL bParam10, BOOL bParam11, BOOL bParam12) // Hash - 0x1E0371E4 ^0x2179AF37
{
	BOOL flag;

	if (plParam3 == 0)
		plParam3 = PLAYER::GET_PLAYER_INDEX();

	if (iParam6 < 0f)
		iParam6 = 100f;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (!HUD::DOES_PED_HAVE_AI_BLIP(pedParam0))
		{
			flag = true;
		
			if (PED::IS_PED_IN_FLYING_VEHICLE(pedParam0) && bParam11)
				flag = false;
		
			if (flag)
			{
				if (iParam8 == -1)
					HUD::SET_PED_HAS_AI_BLIP(pedParam0, true);
				else
					HUD::SET_PED_HAS_AI_BLIP_WITH_COLOUR(pedParam0, true, iParam8);
			
				uParam1->f_7 = pedParam0;
				HUD::SET_PED_AI_BLIP_GANG_ID(pedParam0, iParam2);
				HUD::SET_PED_AI_BLIP_NOTICE_RANGE(pedParam0, iParam6);
			
				if (HUD::DOES_BLIP_EXIST(*uParam1))
					HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!iParam9 == -1)
			HUD::SET_PED_AI_BLIP_SPRITE(pedParam0, iParam9);
	
		HUD::SET_PED_AI_BLIP_FORCED_ON(pedParam0, bParam4);
		HUD::SET_PED_AI_BLIP_HAS_CONE(pedParam0, bParam5);
		*uParam1 = HUD::GET_AI_PED_PED_BLIP_INDEX(pedParam0);
	
		if (!iParam9 == -1 || bParam12)
		{
			if (HUD::DOES_BLIP_EXIST(*uParam1))
			{
				if (!iParam8 == -1)
					HUD::SET_BLIP_COLOUR(*uParam1, iParam8);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
				
					if (bParam10)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
					else
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				
					HUD::END_TEXT_COMMAND_SET_BLIP_NAME(*uParam1);
				}
			
				HUD::SET_BLIP_PRIORITY(*uParam1, 7);
			}
		}
	
		if (!IS_BIT_SET(uParam1->f_6, 2))
			if (HUD::DOES_BLIP_EXIST(*uParam1))
				MISC::SET_BIT(&(uParam1->f_6), 2);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			uParam1->f_1 = HUD::GET_AI_PED_VEHICLE_BLIP_INDEX(pedParam0);
		
			if (!IS_BIT_SET(uParam1->f_6, 3))
			{
				if (HUD::DOES_BLIP_EXIST(uParam1->f_1))
				{
					if (!iParam8 == -1)
						HUD::SET_BLIP_COLOUR(uParam1->f_1, iParam8);
				
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
					{
						HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("STRING");
					
						if (bParam10)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam7);
						else
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
					
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
	}
	else
	{
		return 1;
	}

	return 0;
}

void func_247() // Hash - 0xDE41E4EC ^0xB2037CA9
{
	veLocal_53 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("LAZER"), 4);
	veLocal_54 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 300f, joaat("LAZER"), 16386);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_53) && ENTITY::IS_ENTITY_IN_AIR(veLocal_53))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_65))
		{
			blLocal_65 = HUD::ADD_BLIP_FOR_ENTITY(veLocal_53);
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_65, false);
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_54) && ENTITY::IS_ENTITY_IN_AIR(veLocal_54))
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_66))
		{
			blLocal_66 = HUD::ADD_BLIP_FOR_ENTITY(veLocal_54);
			HUD::SET_BLIP_AS_FRIENDLY(blLocal_66, false);
		}
	}

	return;
}

void func_248() // Hash - 0x8C5B3CDE ^0x9DC44C45
{
	if (iLocal_28 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
				{
					uLocal_320 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 600f)
									{
										if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -75.8f, -819.9f, 326f, true) > 1600f && MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -2159f, 3067f, 33f, true) < 1000f)
										{
											if (uLocal_320.f_2 > 70f)
											{
												if (iLocal_30 != 2)
												{
													uLocal_215[0] = 1;
													iLocal_30 = 2;
												}
											}
											else if (iLocal_30 != 1)
											{
												uLocal_215[0] = 1;
												iLocal_30 = 1;
											}
										
											if (iLocal_273 == 1)
											{
												if (iLocal_274 == 0)
												{
													if (!func_138())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															func_161(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_161(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
														
															if (func_160(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
																iLocal_274 = 1;
														}
													}
												}
											}
										}
										else
										{
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -75.8f, -819.9f, 326f, true) < 1600f)
											{
												if (iLocal_30 != 3)
												{
													uLocal_215[0] = 1;
													iLocal_30 = 3;
												}
											
												if (iLocal_273 == 0)
												{
													if (!func_138())
													{
														if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														{
															func_161(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
															func_161(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
														
															if (func_160(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
																iLocal_273 = 1;
														}
													}
												}
											}
										
											if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -2159f, 3067f, 33f, true) > 1000f)
											{
												if (iLocal_30 != 3)
												{
													uLocal_215[0] = 1;
													iLocal_30 = 3;
												}
											}
										}
									}
									else if (iLocal_30 != 4)
									{
										uLocal_215[0] = 1;
										iLocal_30 = 4;
									}
								}
							}
						}
					}
				}
				else if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -75.8f, -819.9f, 326f, true) > 1600f)
				{
					if (iLocal_30 != 0)
					{
						uLocal_215[0] = 1;
						iLocal_30 = 0;
					}
				
					if (iLocal_273 == 1)
					{
						if (iLocal_274 == 0)
						{
							if (!func_138())
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
								{
									func_161(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
									func_161(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
								
									if (func_160(&uLocal_403, "DP2BAUD", "DP2B_CHAT54", 7, 0, 0, 0))
										iLocal_274 = 1;
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_30 != 3)
					{
						uLocal_215[0] = 1;
						iLocal_30 = 3;
					}
				
					if (iLocal_273 == 0)
					{
						if (!func_138())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								func_161(&uLocal_403, 4, 0, "PilotDispatch", 0, 1);
								func_161(&uLocal_403, 5, 0, "PilotDispatch2", 0, 1);
							
								if (func_160(&uLocal_403, "DP2BAUD", "DP2B_CHAT53", 7, 0, 0, 0))
									iLocal_273 = 1;
							}
						}
					}
				}
			}
		}
	}

	if (uLocal_202[0] == 0)
	{
		if (iLocal_28 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_31[0]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) < 200f)
							{
								fLocal_317 = { ENTITY::GET_ENTITY_COORDS(uLocal_49[0], true) };
								TASK::CLEAR_PED_TASKS(uLocal_31[0]);
								PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_31[0], fLocal_317, 10f, false, false);
								TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(uLocal_31[0], 250f, 0);
								uLocal_202[0] = 1;
							}
						}
					}
				}
			}
		}
	
		if (iLocal_28 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_31[0]))
						{
							if (!HUD::DOES_BLIP_EXIST(uLocal_63[0]))
								uLocal_63[0] = func_136(uLocal_31[0], true, false);
						
							fLocal_317 = { ENTITY::GET_ENTITY_COORDS(uLocal_49[0], true) };
							TASK::CLEAR_PED_TASKS(uLocal_31[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_572);
						
							if (!PED::IS_PED_IN_VEHICLE(uLocal_31[0], uLocal_49[0], false))
								TASK::TASK_ENTER_VEHICLE(0, uLocal_49[0], 20000, -1, 1073741824, 1, 0);
						
							TASK::TASK_HELI_MISSION(0, uLocal_49[0], 0, 0, fLocal_317, fLocal_317.f_1, fLocal_317.f_2 + 20f, 4, 30f, 10f, -1f, 170, 40, -1082130432, 0);
							TASK::TASK_HELI_MISSION(0, uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 40, -1082130432, 0);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_572);
							TASK::TASK_PERFORM_SEQUENCE(uLocal_31[0], iLocal_572);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_572);
							uLocal_202[0] = 1;
						}
					}
				}
			}
		}
	}
	else if (iLocal_28 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_31[0]))
					{
						if (PED::IS_PED_IN_VEHICLE(uLocal_31[0], uLocal_49[0], false))
						{
							if (MISC::GET_GAME_TIMER() > iLocal_188 + 90000)
							{
								if (iLocal_297 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_188 + 10000 && !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
							{
								if (iLocal_297 == 0)
								{
									PED::SET_PED_ACCURACY(uLocal_31[0], 100);
									iLocal_296 = 0;
									iLocal_297 = 1;
								}
							}
							else if (iLocal_296 == 0)
							{
								PED::SET_PED_ACCURACY(uLocal_31[0], 0);
								iLocal_297 = 0;
								iLocal_296 = 1;
							}
						
							if (func_2(uLocal_49[0], PLAYER::PLAYER_PED_ID(), true) < 300f)
							{
								if (iLocal_299 == 0)
								{
									WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_31[0], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
									PED::SET_PED_FIRING_PATTERN(uLocal_31[0], joaat("FIRING_PATTERN_BURST_FIRE_HELI"));
									iLocal_298 = 0;
									iLocal_299 = 1;
								}
							}
							else if (iLocal_298 == 0)
							{
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_31[0], joaat("VEHICLE_WEAPON_PLAYER_BUZZARD"));
								PED::SET_PED_FIRING_PATTERN(uLocal_31[0], joaat("FIRING_PATTERN_SINGLE_SHOT"));
								iLocal_299 = 0;
								iLocal_298 = 1;
							}
						}
					}
				}
			}
		}
	
		if (iLocal_205 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_31[0]))
						{
							if (PED::IS_PED_IN_VEHICLE(uLocal_31[0], uLocal_49[0], false))
							{
								PED::SET_PED_ACCURACY(uLocal_31[0], 0);
								WEAPON::SET_CURRENT_PED_VEHICLE_WEAPON(uLocal_31[0], joaat("VEHICLE_WEAPON_SPACE_ROCKET"));
								iLocal_205 = 1;
							}
						}
					}
				}
			}
		}
	
		switch (iLocal_30)
		{
			case 0:
				if (uLocal_215[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 15, 10, -1082130432, 0);
									uLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 1:
				if (uLocal_215[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 50, 20, -1082130432, 0);
									uLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 2:
				if (uLocal_215[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 40f, 20f, -1f, 170, 70, -1082130432, 0);
									uLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
		
			case 3:
				if (uLocal_215[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, 0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uLocal_49[0], 20f, 0f, 0f), 4, 10f, 10f, ENTITY::GET_ENTITY_HEADING(uLocal_49[0]), SYSTEM::ROUND(ENTITY::GET_ENTITY_HEIGHT(uLocal_49[0], ENTITY::GET_ENTITY_COORDS(uLocal_49[0], true), true, true)), 100, -1082130432, 0);
									uLocal_215[0] = 0;
								}
							}
						}
					}
				}
			
				if (iLocal_295 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(uLocal_320, -2159f, 3067f, 33f, true) > 1000f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
							{
								if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
								{
									if (!PED::IS_PED_INJURED(uLocal_31[0]))
									{
										TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 6, 20f, 20f, -1f, 170, 70, -1082130432, 0);
										iLocal_295 = 1;
									}
								}
							}
						}
					}
				}
				break;
		
			case 4:
				if (uLocal_215[0] == 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
							{
								if (!PED::IS_PED_INJURED(uLocal_31[0]))
								{
									TASK::TASK_HELI_MISSION(uLocal_31[0], uLocal_49[0], 0, PLAYER::PLAYER_PED_ID(), 0f, 0f, 0f, 8, 40f, 50f, -1f, 200, 170, -1082130432, 0);
									uLocal_215[0] = 0;
								}
							}
						}
					}
				}
				break;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
	{
		if (PED::IS_PED_INJURED(uLocal_31[0]))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
				HUD::REMOVE_BLIP(&uLocal_63[0]);
		
			uLocal_206[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
			HUD::REMOVE_BLIP(&uLocal_63[0]);
	
		uLocal_206[0] = 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
				HUD::REMOVE_BLIP(&uLocal_63[0]);
		
			uLocal_206[0] = 1;
		}
	}
	else
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
			HUD::REMOVE_BLIP(&uLocal_63[0]);
	
		uLocal_206[0] = 1;
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(uLocal_49[0], false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_31[0]))
				{
					if (PED::IS_PED_IN_VEHICLE(uLocal_31[0], uLocal_49[0], false))
						if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
							HUD::SET_BLIP_SCALE(uLocal_63[0], 1f);
				
					if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_31[0], true) > 600f)
					{
						if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
							HUD::REMOVE_BLIP(&uLocal_63[0]);
					
						uLocal_206[0] = 1;
					}
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_31[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_31[0]))
		{
			if (ENTITY::IS_ENTITY_IN_WATER(uLocal_31[0]))
			{
				TASK::CLEAR_PED_TASKS(uLocal_31[0]);
				ENTITY::SET_ENTITY_HEALTH(uLocal_31[0], 0, 0);
			
				if (HUD::DOES_BLIP_EXIST(uLocal_63[0]))
					HUD::REMOVE_BLIP(&uLocal_63[0]);
			
				uLocal_206[0] = 1;
			}
		}
	}

	return;
}

void func_249() // Hash - 0xD354A60C ^0xE187F1DE
{
	if (iLocal_210 == 0)
		if (func_250(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, false) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.5138f, 2794.1477f, 14.84222f, -1587.6917f, 2806.1013f, 20.295572f, 16f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.2782f, 2803.9797f, 17.017721f, -1665.9796f, 2895.3977f, 34.589527f, 14.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.5542f, 2873.74f, 24.850174f, -1673.8643f, 2889.6978f, 38.188564f, 14.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.9688f, 24.82373f, -1667.3163f, 2914.302f, 39.394775f, 14.5f, false, true, 0))
			iLocal_210 = 1;

	if (iLocal_210 == 1)
		if (!func_250(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 0, false) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1601.5138f, 2794.1477f, 14.84222f, -1587.6917f, 2806.1013f, 20.295572f, 16f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1598.2782f, 2803.9797f, 17.017721f, -1665.9796f, 2895.3977f, 34.589527f, 14.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1648.5542f, 2873.74f, 24.850174f, -1673.8643f, 2889.6978f, 38.188564f, 14.5f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1647.446f, 2873.9688f, 24.82373f, -1667.3163f, 2914.302f, 39.394775f, 14.5f, false, true, 0))
			iLocal_210 = 0;

	if (iLocal_201 == 1)
	{
		if (iLocal_210 == 1 || iLocal_289 == 1 || iLocal_302 == 1 || iLocal_211 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 4)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 4, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		
			for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_176]))
				{
					if (!PED::IS_PED_INJURED(uLocal_33[iLocal_176]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false) || iLocal_212 == 1)
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_176], true) < 39f)
									{
										if (uLocal_217[iLocal_176] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_176]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_33[iLocal_176], ENTITY::GET_ENTITY_COORDS(uLocal_33[iLocal_176], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(uLocal_33[iLocal_176], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_33[iLocal_176], BF_0xDA8C2BD3, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_33[iLocal_176], BF_SwitchToAdvanceIfCantFindCover, true);
											uLocal_231[iLocal_176] = 0;
											uLocal_245[iLocal_176] = 0;
											uLocal_259[iLocal_176] = 0;
											uLocal_217[iLocal_176] = 1;
										}
									}
									else if (uLocal_231[iLocal_176] == 0)
									{
										TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_176]);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_572);
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(veLocal_48, true), 2f, -1, 20f, 0, 1193033728);
										TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_572);
										TASK::TASK_PERFORM_SEQUENCE(uLocal_33[iLocal_176], iLocal_572);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_572);
										uLocal_245[iLocal_176] = 0;
										uLocal_259[iLocal_176] = 0;
										uLocal_217[iLocal_176] = 0;
										uLocal_231[iLocal_176] = 1;
									}
								}
								else
								{
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_176], true) < 39f)
									{
										if (uLocal_245[iLocal_176] == 0)
										{
											TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_176]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_33[iLocal_176], ENTITY::GET_ENTITY_COORDS(uLocal_33[iLocal_176], true), 50f, false, false);
											TASK::TASK_COMBAT_PED(uLocal_33[iLocal_176], PLAYER::PLAYER_PED_ID(), 0, 16);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_33[iLocal_176], BF_0xDA8C2BD3, true);
											PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_33[iLocal_176], BF_SwitchToAdvanceIfCantFindCover, true);
											uLocal_231[iLocal_176] = 0;
											uLocal_259[iLocal_176] = 0;
											uLocal_217[iLocal_176] = 0;
											uLocal_245[iLocal_176] = 1;
										}
									}
								
									if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_176], true) > 41f && func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_176], true) < 400f)
									{
										if (uLocal_259[iLocal_176] == 0)
										{
											iLocal_195 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
											TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_176]);
											PED::SET_PED_SPHERE_DEFENSIVE_AREA(uLocal_33[iLocal_176], ENTITY::GET_ENTITY_COORDS(uLocal_33[iLocal_176], true), 50f, false, false);
											TASK::OPEN_SEQUENCE_TASK(&iLocal_572);
										
											if (iLocal_195 == 0)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 1)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 1073741824, 1073741824, 0);
											}
											else if (iLocal_195 == 2)
											{
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
											else if (iLocal_195 == 3)
											{
												TASK::TASK_STAND_STILL(0, 500);
												TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 25f, 3f, 1073741824, 0);
											}
										
											TASK::CLOSE_SEQUENCE_TASK(iLocal_572);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_33[iLocal_176], iLocal_572);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_572);
											uLocal_231[iLocal_176] = 0;
											uLocal_245[iLocal_176] = 0;
											uLocal_217[iLocal_176] = 0;
											uLocal_259[iLocal_176] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_210 == 0 && iLocal_289 == 0 && iLocal_302 == 0 && iLocal_211 == 0)
		{
			for (iLocal_193 = 0; iLocal_193 <= 1; iLocal_193 = iLocal_193 + 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_193]))
				{
					if (!PED::IS_PED_INJURED(uLocal_33[iLocal_193]))
					{
						if (func_2(uLocal_33[iLocal_193], PLAYER::PLAYER_PED_ID(), true) < 25f)
						{
							if (uLocal_292[iLocal_193] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_193]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[iLocal_193]);
								else
									TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_193]);
							
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_33[iLocal_193], PLAYER::PLAYER_PED_ID(), -1, false);
								uLocal_292[iLocal_193] = 1;
							}
						
							if (iLocal_303 == 1)
								if (MISC::GET_GAME_TIMER() > iLocal_191 + 20000)
									iLocal_302 = 1;
						}
						else if (func_2(uLocal_33[iLocal_193], PLAYER::PLAYER_PED_ID(), true) > 30f)
						{
							if (uLocal_292[iLocal_193] == 1)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_33[iLocal_193]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_33[iLocal_193]);
								else
									TASK::CLEAR_PED_TASKS(uLocal_33[iLocal_193]);
							
								TASK::TASK_AIM_GUN_AT_ENTITY(uLocal_33[iLocal_193], PLAYER::PLAYER_PED_ID(), 1, false);
								uLocal_292[iLocal_193] = 0;
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_250(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5) // Hash - 0x8B520578 ^0x8B520578
{
	var unk;
	var unk47;
	var unk93;
	int num;
	int i;
	BOOL debug;
	int num2;

	unk = 15;
	unk47 = 15;
	unk93 = 15;
	debug = false;

	switch (iParam3)
	{
		case 1:
			unk[0 /*3*/] = { -1332.2113f, 100.46083f, 40.384373f };
			unk47[0 /*3*/] = { -1094.2382f, 148.42744f, 73f };
			unk93[0] = 171.25f;
			unk[1 /*3*/] = { -999.7344f, -110.22309f, 25.257057f };
			unk47[1 /*3*/] = { -1149.4938f, 109.25583f, 73f };
			unk93[1] = 132f;
			unk[2 /*3*/] = { -1035.1129f, -84.958855f, 28.274601f };
			unk47[2 /*3*/] = { -1261.1031f, 50.081482f, 73f };
			unk93[2] = 132f;
			num = 3;
			break;
	
		case 2:
			unk[0 /*3*/] = { -804.3439f, -3346.5005f, 10f };
			unk47[0 /*3*/] = { -1816.9539f, -2768.8933f, (float)250 + iParam4 };
			unk93[0] = 247f;
			unk[1 /*3*/] = { -1911.4879f, -2934.197f, 10f };
			unk47[1 /*3*/] = { -968.6236f, -3477.7476f, (float)250 + iParam4 };
			unk93[1] = 149f;
			unk[2 /*3*/] = { -844.9433f, -2802.7852f, 10f };
			unk47[2 /*3*/] = { -1011.08105f, -3086.9038f, (float)250 + iParam4 };
			unk93[2] = 185.5f;
			unk[3 /*3*/] = { -1021.0861f, -2952.277f, 10f };
			unk47[3 /*3*/] = { -1599.0082f, -2616.2705f, (float)250 + iParam4 };
			unk93[3] = 250f;
			unk[4 /*3*/] = { -1027.1364f, -2436.457f, 10f };
			unk47[4 /*3*/] = { -1392.6105f, -2226.7634f, (float)250 + iParam4 };
			unk93[4] = 193.5f;
			unk[5 /*3*/] = { -1497.5493f, -2408.7122f, 10f };
			unk47[5 /*3*/] = { -1136.9174f, -2617.9546f, (float)250 + iParam4 };
			unk93[5] = 234.5f;
			unk[6 /*3*/] = { -982.79236f, -2831.7087f, 12.93313f };
			unk47[6 /*3*/] = { -966.46765f, -2803.458f, 16.68313f };
			unk93[6] = 16f;
			unk[7 /*3*/] = { -1110.0831f, -3496.8057f, 12f };
			unk47[7 /*3*/] = { -1955.2982f, -3010.4314f, (float)250 + iParam4 };
			unk93[7] = 80f;
			unk[8 /*3*/] = { -1886.8994f, -3193.0237f, 12f };
			unk47[8 /*3*/] = { -1836.143f, -3105.2683f, (float)250 + iParam4 };
			unk93[8] = 142f;
			unk[9 /*3*/] = { -1134.3367f, -3535.6482f, 12f };
			unk47[9 /*3*/] = { -1259.6486f, -3463.4863f, (float)250 + iParam4 };
			unk93[9] = 30.75f;
			unk[10 /*3*/] = { -969.12787f, -3463.8994f, 12f };
			unk47[10 /*3*/] = { -896.3734f, -3505.7148f, (float)250 + iParam4 };
			unk93[10] = 150f;
			unk[11 /*3*/] = { -1369.4913f, -2173.5789f, 10f };
			unk47[11 /*3*/] = { -1685.6256f, -2720.3635f, (float)250 + iParam4 };
			unk93[11] = 29.25f;
			unk[12 /*3*/] = { -1010.9256f, -3550.9434f, 10f };
			unk47[12 /*3*/] = { -1110.1978f, -3493.6172f, (float)250 + iParam4 };
			unk93[12] = 43f;
			num = 13;
			break;
	
		case 3:
			unk[0 /*3*/] = { -1773.944f, 3287.3342f, 30f };
			unk47[0 /*3*/] = { -2029.7765f, 2845.0833f, (float)250 + iParam4 };
			unk93[0] = 255f;
			unk[1 /*3*/] = { -2725.8894f, 3291.0986f, 30f };
			unk47[1 /*3*/] = { -2009.1815f, 2879.8352f, (float)250 + iParam4 };
			unk93[1] = 180f;
			unk[2 /*3*/] = { -2442.0261f, 3326.6987f, 30f };
			unk47[2 /*3*/] = { -2033.9279f, 3089.0488f, (float)250 + iParam4 };
			unk93[2] = 205f;
			unk[3 /*3*/] = { -1917.1654f, 3374.209f, 30f };
			unk47[3 /*3*/] = { -2016.7909f, 3195.058f, (float)250 + iParam4 };
			unk93[3] = 86.25f;
			unk[4 /*3*/] = { -2192.753f, 3373.2778f, 30f };
			unk47[4 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[4] = 150.5f;
			unk[5 /*3*/] = { -2077.6633f, 3344.5142f, 30f };
			unk47[5 /*3*/] = { -2191.5444f, 3150.4165f, (float)250 + iParam4 };
			unk93[5] = 140.5f;
			unk[6 /*3*/] = { -2861.7554f, 3352.6606f, 30f };
			unk47[6 /*3*/] = { -2715.8708f, 3269.9155f, (float)250 + iParam4 };
			unk93[6] = 90f;
			unk[7 /*3*/] = { -2005.5745f, 3364.5327f, 30f };
			unk47[7 /*3*/] = { -1977.5688f, 3330.8882f, (float)250 + iParam4 };
			unk93[7] = 100f;
			unk[8 /*3*/] = { -1682.235f, 3004.2852f, 30f };
			unk47[8 /*3*/] = { -1942.747f, 2947.4412f, (float)250 + iParam4 };
			unk93[8] = 248.75f;
			unk[9 /*3*/] = { -2393.2954f, 2936.406f, 31.680103f };
			unk47[9 /*3*/] = { -2453.0366f, 3006.863f, 52.310028f };
			unk93[9] = 128f;
			unk[10 /*3*/] = { -2347.1848f, 3023.8298f, 31.56573f };
			unk47[10 /*3*/] = { -2517.3298f, 2989.0635f, 49.956444f };
			unk93[10] = 140f;
			unk[11 /*3*/] = { -2259.9219f, 3358.0398f, 29.999718f };
			unk47[11 /*3*/] = { -2299.772f, 3385.79f, 38.060143f };
			unk93[11] = 16f;
			unk[12 /*3*/] = { -2476.3093f, 3363.914f, 31.679329f };
			unk47[12 /*3*/] = { -2431.9807f, 3287.6694f, 39.978264f };
			unk93[12] = 214.25f;
			unk[13 /*3*/] = { -2103.0813f, 2797.7834f, 29.37864f };
			unk47[13 /*3*/] = { -2096.8213f, 2874.4233f, 57.80989f };
			unk93[13] = 65.75f;
		
			if (bParam5)
				num2 = iParam4;
			else
				num2 = 0;
		
			unk47[9 /*3*/].f_2 = unk47[9 /*3*/].f_2 + (float)num2;
			unk47[10 /*3*/].f_2 = unk47[10 /*3*/].f_2 + (float)num2;
			unk47[11 /*3*/].f_2 = unk47[11 /*3*/].f_2 + (float)num2;
			unk47[12 /*3*/].f_2 = unk47[12 /*3*/].f_2 + (float)num2;
			unk47[13 /*3*/].f_2 = unk47[13 /*3*/].f_2 + (float)num2;
			num = 14;
			break;
	
		case 4:
			unk[0 /*3*/] = { 1541.6072f, 2527.555f, 40f };
			unk47[0 /*3*/] = { 1815.5753f, 2535.0596f, (float)150 + iParam4 };
			unk93[0] = 114f;
			unk[1 /*3*/] = { 1788.8787f, 2445.7273f, 40f };
			unk47[1 /*3*/] = { 1716.9603f, 2502.957f, (float)150 + iParam4 };
			unk93[1] = 88.5f;
			unk[2 /*3*/] = { 1601.1575f, 2436.2441f, 40f };
			unk47[2 /*3*/] = { 1650.0776f, 2515.9226f, (float)150 + iParam4 };
			unk93[2] = 133.25f;
			unk[3 /*3*/] = { 1706.3307f, 2407.5972f, 40f };
			unk47[3 /*3*/] = { 1698.5546f, 2460.2078f, (float)150 + iParam4 };
			unk93[3] = 104.5f;
			unk[4 /*3*/] = { 1712.4517f, 2756.2175f, 40f };
			unk47[4 /*3*/] = { 1718.8477f, 2589.1616f, (float)150 + iParam4 };
			unk93[4] = 121.75f;
			unk[5 /*3*/] = { 1830.2278f, 2661.2402f, 40f };
			unk47[5 /*3*/] = { 1774.8124f, 2679.4187f, (float)150 + iParam4 };
			unk93[5] = 84.5f;
			unk[6 /*3*/] = { 1559.0503f, 2632.2205f, 40f };
			unk47[6 /*3*/] = { 1657.2083f, 2595.4844f, (float)150 + iParam4 };
			unk93[6] = 103.75f;
			unk[7 /*3*/] = { 1612.0209f, 2716.869f, 40f };
			unk47[7 /*3*/] = { 1657.1647f, 2669.721f, (float)150 + iParam4 };
			unk93[7] = 104.25f;
			unk[8 /*3*/] = { 1809.8721f, 2729.827f, 40f };
			unk47[8 /*3*/] = { 1789.8551f, 2705.0369f, (float)150 + iParam4 };
			unk93[8] = 91f;
			unk[9 /*3*/] = { 1818.7888f, 2605.9478f, 40f };
			unk47[9 /*3*/] = { 1783.1143f, 2606.7832f, (float)150 + iParam4 };
			unk93[9] = 51.25f;
			num = 10;
			break;
	
		case 5:
			unk[0 /*3*/] = { 3411.002f, 3663.1846f, 20f };
			unk47[0 /*3*/] = { 3615.583f, 3626.1936f, (float)40 + iParam4 };
			unk93[0] = 45.75f;
			unk[1 /*3*/] = { 3426.66f, 3733.078f, 20f };
			unk47[1 /*3*/] = { 3643.8008f, 3694.3618f, (float)40 + iParam4 };
			unk93[1] = 99f;
			unk[2 /*3*/] = { 3446.0364f, 3795.6882f, 20f };
			unk47[2 /*3*/] = { 3650.9143f, 3766.1516f, (float)40 + iParam4 };
			unk93[2] = 81.5f;
			num = 3;
			break;
	
		case 6:
			unk[0 /*3*/] = { 526.05304f, -3391.4968f, -10f };
			unk47[0 /*3*/] = { 523.22894f, -3118.678f, (float)10 + iParam4 };
			unk93[0] = 120f;
			unk[1 /*3*/] = { 459.4397f, -3199.9895f, 4.819676f };
			unk47[1 /*3*/] = { 593.89276f, -3199.998f, 30.069256f };
			unk93[1] = 170f;
			unk[2 /*3*/] = { 552.8467f, -3111.0537f, 4.819394f };
			unk47[2 /*3*/] = { 585.3137f, -3111.8442f, 17.569231f };
			unk93[2] = 12.5f;
			unk[3 /*3*/] = { 598.46655f, -3140.1475f, 4.819257f };
			unk47[3 /*3*/] = { 597.4973f, -3117.0627f, 17.319258f };
			unk93[3] = 9.75f;
			num = 4;
			break;
	
		case 7:
			unk[0 /*3*/] = { -1108.5497f, -570.87976f, 20f };
			unk47[0 /*3*/] = { -1187.8108f, -477.50366f, (float)50 + iParam4 };
			unk93[0] = 162f;
			unk[1 /*3*/] = { -1201.3776f, -485.96732f, 20f };
			unk47[1 /*3*/] = { -1215.7959f, -464.82806f, (float)50 + iParam4 };
			unk93[1] = 124f;
			unk[2 /*3*/] = { -985.6311f, -525.42334f, 20f };
			unk47[2 /*3*/] = { -1013.3932f, -475.20575f, (float)50 + iParam4 };
			unk93[2] = 55f;
			unk[3 /*3*/] = { -1055.8492f, -477.8226f, 20f };
			unk47[3 /*3*/] = { -1073.3325f, -498.717f, (float)50 + iParam4 };
			unk93[3] = 142f;
			num = 4;
			break;
	
		case 8:
			unk[0 /*3*/] = { 461.5684f, -984.57196f, 29.439508f };
			unk47[0 /*3*/] = { 471.17004f, -984.4292f, 40.14212f };
			unk93[0] = 7.75f;
			unk[1 /*3*/] = { 457.3404f, -984.75604f, 34.439507f };
			unk47[1 /*3*/] = { 457.20837f, -993.71893f, 29.389584f };
			unk93[1] = 14.75f;
			unk[2 /*3*/] = { 477.62268f, -986.60004f, 40.00819f };
			unk47[2 /*3*/] = { 424.8687f, -986.3279f, 48.712406f };
			unk93[2] = 31.5f;
			unk[3 /*3*/] = { 474.38895f, -974.4613f, 39.557606f };
			unk47[3 /*3*/] = { 474.0358f, -1021.9721f, 49.10033f };
			unk93[3] = 30.5f;
			unk[4 /*3*/] = { 442.17685f, -974.1888f, 29.689508f };
			unk47[4 /*3*/] = { 442.18552f, -979.8635f, 33.439507f };
			unk93[4] = 6.75f;
			num = 5;
			break;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (OBJECT::IS_POINT_IN_ANGLED_AREA(vParam0, unk[i /*3*/], unk47[i /*3*/], unk93[i], debug, true))
			return true;
	}

	return false;
}

void func_251() // Hash - 0x931BCE6C ^0x931BCE6C
{
	if (iLocal_175 > 0)
	{
		func_132();
		func_249();
		func_248();
	}

	if (iLocal_175 == 0)
	{
		if (iLocal_196 == 1)
		{
			iLocal_197 = 0;
			func_34();
			iLocal_196 = 0;
		}
	
		iLocal_198 = 0;
		iLocal_201 = 0;
		uLocal_202[0] = 0;
		uLocal_202[1] = 0;
		iLocal_210 = 0;
		iLocal_211 = 0;
		iLocal_212 = 0;
		iLocal_290 = 0;
		iLocal_291 = 0;
		uLocal_292[0] = 0;
		uLocal_292[1] = 0;
		iLocal_302 = 0;
		iLocal_303 = 0;
		iLocal_306 = 0;
		iLocal_307 = 0;
		iLocal_310 = 0;
		iLocal_191 = 0;
	
		for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
		{
			uLocal_217[iLocal_176] = 0;
			uLocal_231[iLocal_176] = 0;
			uLocal_245[iLocal_176] = 0;
			uLocal_259[iLocal_176] = 0;
		}
	
		PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
		PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
		AUDIO::PREPARE_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS");
		iLocal_182 = MISC::GET_GAME_TIMER();
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("LAZER"), true);
		STREAMING::REQUEST_MODEL(joaat("S_M_Y_MARINE_01"));
		STREAMING::REQUEST_MODEL(joaat("S_M_M_PILOT_02"));
	
		if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97178[0]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[0], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[0], true, true);
					veLocal_48 = Global_97178[0];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(veLocal_48, false);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_48, true, 1);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("CARGOBOB"));
					VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("CARGOBOB"), true);
					VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
					VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
					func_116(veLocal_48, 0);
				}
			}
		}
	
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_49[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_97178[1]))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[1], false))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], true, true);
					uLocal_49[0] = Global_97178[1];
					VEHICLE::SET_VEHICLE_CAN_BE_TARGETTED(uLocal_49[0], true);
					ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(uLocal_49[0], true, 1);
					ENTITY::FREEZE_ENTITY_POSITION(uLocal_49[0], false);
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(uLocal_49[0], "DH_P_2B_ENEMY_CHOPPERS", 0);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(uLocal_49[0], false);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[2]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[2], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_97178[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], true, true);
					func_259(1734.799f, 3234.8335f, 40.7041f, 321.0399f, 0, 145);
				}
			
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97178[2])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97178[2])) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_97178[2])) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_97178[2])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], true, true);
					func_259(1748.0499f, 3294.7f, 40.106f, 204.2419f, 0, 145);
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[0], true, true);
			uLocal_33[0] = Global_97178.f_9[0];
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[1], true, true);
			uLocal_33[1] = Global_97178.f_9[1];
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
			ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, false);
	
		AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", true);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_36())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_240(veLocal_55, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		func_258(PLAYER::PLAYER_PED_ID(), -1);
		func_257(73);
		iLocal_197 = 1;
		iLocal_175 = 1;
	}

	if (iLocal_175 == 1)
	{
		if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
			if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
				TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", false);
	
		func_113();
	
		if (iLocal_211 == 0)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_182 + 3000)
			{
				for (iLocal_184 = 0; iLocal_184 <= 12; iLocal_184 = iLocal_184 + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_184]))
					{
						if (!PED::IS_PED_INJURED(uLocal_33[iLocal_184]))
						{
							if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_184], true) < 40f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_184], PLAYER::PLAYER_PED_ID()))
								{
									if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_211 = 1;
									}
								
									if (iLocal_210 == 1)
									{
										AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
										AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
										iLocal_211 = 1;
									}
								
									if (iLocal_307 == 0)
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_256(0))
										{
											if (func_255(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
											{
												iLocal_194 = MISC::GET_GAME_TIMER();
												iLocal_307 = 1;
											}
										}
									}
									else if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_256(0))
									{
										if (func_255(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
										{
											if (MISC::GET_GAME_TIMER() > iLocal_194 + 3000)
											{
												AUDIO::START_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", false);
												AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", true, true);
												iLocal_211 = 1;
											}
										}
										else if (iLocal_306 == 0)
										{
											iLocal_307 = 0;
											iLocal_306 = 1;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_198 == 0)
		{
			HUD::CLEAR_PRINTS();
			RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 10f, 4);
			func_137("DP_GOD2", 7500, 1);
			iLocal_198 = 1;
		}
	
		if (iLocal_210 == 1)
			if (!func_254(5))
				func_253(5);
		else if (func_254(5))
			func_252(5);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			{
				if (func_2(PLAYER::PLAYER_PED_ID(), veLocal_48, true) < 30f)
					iLocal_212 = 1;
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
				{
					WEAPON::GIVE_WEAPON_TO_PED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"), -1, false, true);
					iLocal_175 = 0;
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 4);
					iLocal_28 = 3;
				}
			}
		}
	}

	return;
}

void func_252(int iParam0) // Hash - 0x53D7F035 ^0x3D0A223B
{
	MISC::CLEAR_BIT(&Global_96536, iParam0);
	return;
}

void func_253(int iParam0) // Hash - 0x53D7F035 ^0x7451626F
{
	MISC::SET_BIT(&Global_96536, iParam0);
	return;
}

BOOL func_254(int iParam0) // Hash - 0xAA29B344 ^0xAA29B344
{
	return IS_BIT_SET(Global_96536, iParam0);
}

int func_255(Ped pedParam0) // Hash - 0xA860C4B2 ^0x4F46EE3F
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

BOOL func_256(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
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

void func_257(int iParam0) // Hash - 0xDF00B6A0 ^0xDF00B6A0
{
	if (Global_97603 != -1)
	{
		if (iParam0 == Global_97603)
		{
			Global_97607 = 1;
			return;
		}
	}

	return;
}

void func_258(Ped pedParam0, int iParam1) // Hash - 0xEA11BB32 ^0x75D6FA73
{
	int i;

	Global_63375 = pedParam0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		if (iParam1 == -1 || Global_75458[i /*9*/] == iParam1)
		{
			if (Global_75458[i /*9*/].f_6 != pedParam0)
			{
				Global_75458[i /*9*/].f_6 = pedParam0;
				Global_75458[i /*9*/].f_7 = 1;
				Global_75458[i /*9*/].f_8 = 0;
			}
		}
	}

	return;
}

void func_259(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Hash - 0xFAD52877 ^0x5B3475CA
{
	var unk;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, false))
		{
			if (func_268(24) != Global_104212.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_265(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, true), iParam5, &unk, &num))
					{
						fParam0 = { unk };
						fParam3 = num;
					}
				}
			
				func_260(Global_104212.f_4, fParam0, fParam3, 24, false);
			}
		}
	}

	return;
}

void func_260(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Hash - 0x29B4C4C8 ^0x31C8EC4C
{
	var unk;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (iParam5 != 24 && iParam5 != 25)
			return;
	
		if (iParam5 == 24)
			if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77348.f_484[25], false))
				if (Global_77348.f_484[25] == veParam0)
					return;
	
		if (!bParam6)
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("BUS") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("TOURBUS"))
				return;
	
		func_264(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_41(veParam0, &unk);
	
		if (func_8(uParam1, 0f, 0f, 0f, false))
		{
			uParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("VEHICLE_GEN_CONTROLLER"))
				Global_78336 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_262(iParam5, &unk, uParam1, fParam4, func_63(veParam0));
		func_261(iParam5, veParam0, 0);
	}

	return;
}

void func_261(int iParam0, Vehicle veParam1, int iParam2) // Hash - 0x9860D273 ^0xD433FB9F
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_73(&Global_77348.f_555[0 /*21*/], iParam0))
		return;

	if (!IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 12) && !IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))
		if (Global_77348.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(veParam1))
			return;

	if (Global_78255 != -1 && Global_78255 != iParam0)
		return;

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veParam1))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veParam1, true, true);
		
			if (iParam0 == 24)
				Global_113648.f_32751.f_4801 = func_217();
		
			if (veParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_268(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_40(vehicle, 145);
				}
			
				Global_78254 = veParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}

	return;
}

void func_262(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Hash - 0xE596DE1C ^0xAEF9731A
{
	if (func_73(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_263(iParam0);
			func_70(uParam1, &Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]);
		
			if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 11))
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { uParam2 };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = fParam5;
			}
			else
			{
				Global_113648.f_32751.f_1864[Global_77348.f_555[0 /*21*/].f_14 /*3*/] = { 0f, 0f, 0f };
				Global_113648.f_32751.f_1934[Global_77348.f_555[0 /*21*/].f_14] = -1f;
			}
		
			Global_113648.f_32751.f_1958[Global_77348.f_555[0 /*21*/].f_14] = iParam6 + 1;
			func_66(iParam0, true);
		}
	}

	return;
}

void func_263(int iParam0) // Hash - 0x64A608A0 ^0xF3C031DC
{
	if (iParam0 == -1)
		return;

	if (func_73(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77348.f_139[iParam0]);
			Global_77348.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13))
			func_66(iParam0, false);
	}

	return;
}

void func_264(int iParam0) // Hash - 0x6203AFCC ^0x6203AFCC
{
	iParam0 != 24 && iParam0 != 25;
	func_263(iParam0);
	func_66(iParam0, false);
	return;
}

BOOL func_265(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Hash - 0x2129E9A2 ^0x2129E9A2
{
	int num;

	num = func_266(uParam0, iParam3, 1);

	switch (num)
	{
		case 0:
			*uParam4 = { -827.351f, 157.785f, 68.2143f };
			*uParam5 = 85.1509f;
			return true;
	
		case 1:
		case 2:
			*uParam4 = { 1992.5234f, 3813.9158f, 31.1008f };
			*uParam5 = 122.1498f;
			return true;
	
		case 3:
			*uParam4 = { -1184.2582f, -1496.5555f, 3.3895f };
			*uParam5 = 303.2098f;
			return true;
	
		case 4:
			*uParam4 = { 118.1067f, -1325.9058f, 28.3706f };
			*uParam5 = 123.5016f;
			return true;
	
		case 5:
			*uParam4 = { -18.118f, -1455.1265f, 29.5004f };
			*uParam5 = 273.2822f;
			return true;
	
		case 6:
			*uParam4 = { 1.5947f, 543.4017f, 173.46439f };
			*uParam5 = 310.7556f;
			return true;
	
		default:
			break;
	}

	return false;
}

int func_266(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Hash - 0xF069BA05 ^0x35D3817B
{
	int i;
	float distanceBetweenCoords;
	float num;
	int num2;

	num = 1000000f;
	num2 = 10;

	for (i = 0; i <= 10 - 1; i = i + 1)
	{
		if (Global_95719[i /*10*/].f_7 != 263)
		{
			if (Global_95719[i /*10*/].f_9 == iParam3 || iParam3 == 145)
			{
				if (func_267(i) || iParam4 == 0)
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, Global_95719[i /*10*/].f_3, true);
				
					if (distanceBetweenCoords < num)
					{
						num = distanceBetweenCoords;
						num2 = i;
					}
				}
			}
		}
	}

	return num2;
}

BOOL func_267(int iParam0) // Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

Vehicle func_268(int iParam0) // Hash - 0x220835E3 ^0xF13BEB49
{
	if (iParam0 == -1)
		return 0;

	return Global_77348.f_139[iParam0];
}

void func_269() // Hash - 0xDD7A330F ^0xDD7A330F
{
	if (iLocal_175 == 0)
	{
		func_273(DT_PoliceAutomobile, false);
		func_273(DT_PoliceHelicopter, false);
		func_273(DT_PoliceVehicleRequest, false);
		func_273(DT_PoliceRoadBlock, false);
		func_273(DT_PoliceAutomobileWaitPulledOver, false);
		func_273(DT_PoliceAutomobileWaitCruising, false);
		func_273(DT_SwatAutomobile, false);
		func_273(DT_SwatHelicopter, false);
		PED::ADD_RELATIONSHIP_GROUP("MarineGroupHash", &hLocal_60);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_60, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, joaat("ARMY"), joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_60, joaat("ARMY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), hLocal_60);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), hLocal_60);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_60, joaat("COP"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), joaat("ARMY"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("ARMY"), joaat("COP"));
	
		if (func_286())
		{
			if (Global_94858 == 1)
			{
				if (func_272() == 0)
				{
					func_271(uLocal_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
			
				if (func_272() == 1)
				{
					func_271(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
			
				if (func_272() == 2)
					func_270();
			}
			else
			{
				if (func_272() == 0)
				{
					func_271(-1565.0836f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 2;
				}
			
				if (func_272() == 1)
				{
					func_271(uLocal_311, fLocal_323, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 3;
				}
			
				if (func_272() == 2)
				{
					func_271(-629.1677f, 2871.31f, 385.0313f, 283.1214f, 1, 0);
					iLocal_196 = 1;
					iLocal_175 = 0;
					iLocal_28 = 4;
				}
			}
		}
		else if (func_28(false))
		{
			func_271(-1565.0836f, 2780.813f, 16.4022f, 53.6086f, 1, 0);
			iLocal_196 = 1;
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
		else
		{
			iLocal_175 = 0;
			iLocal_28 = 2;
		}
	}

	return;
}

void func_270() // Hash - 0x84DD7B55 ^0x29DBB273
{
	iLocal_197 = 0;

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 1747.0403f, 3267.4558f, 40.246f, true, false, false, true);
	ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 229.0887f);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		VEHICLE::DELETE_VEHICLE(&veLocal_48);

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_48))
	{
		STREAMING::REQUEST_MODEL(joaat("CARGOBOB"));
	
		while (!STREAMING::HAS_MODEL_LOADED(joaat("CARGOBOB")))
		{
			SYSTEM::WAIT(0);
		}
	
		veLocal_48 = VEHICLE::CREATE_VEHICLE(joaat("CARGOBOB"), 1740.8517f, 3263.1614f, 40.2743f, 280.3712f, true, true, false);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_48, 0, true);
		VEHICLE::SET_VEHICLE_DOOR_SHUT(veLocal_48, 1, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_48, 2);
		VEHICLE::SET_VEHICLE_STRONG(veLocal_48, true);
		ENTITY::FREEZE_ENTITY_POSITION(veLocal_48, true);
		VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(veLocal_48, false);
		func_116(veLocal_48, 0);
	}

	if (CAM::IS_SCREEN_FADED_OUT())
		STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);

	if (!CAM::IS_SCREEN_FADED_IN())
		CAM::DO_SCREEN_FADE_IN(800);

	while (!CAM::IS_SCREEN_FADED_IN())
	{
		CAM::DO_SCREEN_FADE_IN(800);
		SYSTEM::WAIT(0);
	}

	func_30();
	return;
}

void func_271(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Hash - 0xF88978B9 ^0xA249DBD8
{
	if (func_286())
	{
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		MISC::CLEAR_BIT(&(Global_100681.f_20), 2);
		MISC::SET_GAME_PAUSED(true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		Global_100677 = { fParam0 };
		Global_100680 = fParam3;
		Global_100676 = 1;
	
		if (iParam4 == 1)
			MISC::SET_BIT(&(Global_100681.f_20), 14);
		else
			MISC::CLEAR_BIT(&(Global_100681.f_20), 14);
	
		if (iParam5 == 1)
			MISC::SET_BIT(&(Global_100681.f_20), 24);
		else
			MISC::CLEAR_BIT(&(Global_100681.f_20), 24);
	
		func_241(1);
	}

	return;
}

int func_272() // Hash - 0x8A8720E2 ^0x75007B29
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
		return 0;

	return Global_100681.f_2;
}

void func_273(eDispatchType edtParam0, BOOL bParam1) // Hash - 0x9F0FFF9B ^0x75B2CE04
{
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(edtParam0, !bParam1);
	MISC::ENABLE_DISPATCH_SERVICE(edtParam0, bParam1);
	return;
}

void func_274() // Hash - 0x8B16AA4C ^0x8B16AA4C
{
	if (!func_286())
	{
		if (iLocal_175 == 0)
			iLocal_28 = 1;
	}
	else
	{
		iLocal_175 = 0;
		iLocal_28 = 1;
	}

	return;
}

void func_275() // Hash - 0xE59E7914 ^0xD1E65B7C
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_48))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_48, false))
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48, false))
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_48))
						if (func_276(PLAYER::PLAYER_PED_ID(), veLocal_48) == -1)
							PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);

	return;
}

int func_276(Ped pedParam0, Vehicle veParam1) // Hash - 0xE817AD6A ^0xE00B3CE3
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false) == pedParam0)
				return -1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false) == pedParam0)
				return 0;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false) == pedParam0)
				return 1;
		
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false) == pedParam0)
				return 2;
		}
	}

	return -2;
}

void func_277() // Hash - 0x27B08A1A ^0xF1215043
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_28 == 2 || iLocal_28 == 3)
		{
			if (func_250(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3, 200, false) || iLocal_211 == 1)
			{
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::PLAYER_ID());
				PLAYER::SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(PLAYER::PLAYER_ID());
			}
		}
	
		if (iLocal_28 == 4)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_311, true) > 1000f)
			{
				PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
				PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
			}
		}
	}

	return;
}

void func_278() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_279() // Hash - 0x60ADEE51 ^0x69345C45
{
	if (iLocal_289 == 0)
	{
		for (iLocal_185 = 0; iLocal_185 <= 12; iLocal_185 = iLocal_185 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_185]))
			{
				if (!PED::IS_PED_INJURED(uLocal_33[iLocal_185]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_185], PLAYER::PLAYER_PED_ID()))
					{
						if (func_2(uLocal_33[iLocal_185], PLAYER::PLAYER_PED_ID(), true) < 40f)
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
								iLocal_289 = 1;
					
						if (func_2(uLocal_33[iLocal_185], PLAYER::PLAYER_PED_ID(), true) < 25f)
							if (func_255(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
								if (func_284(uLocal_33[iLocal_185], 6))
									iLocal_289 = 1;
					}
				}
			}
		}
	}

	if (iLocal_213 == 0)
	{
		if (func_20() == 2)
		{
			func_161(&uLocal_403, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
			iLocal_213 = 1;
		}
	}

	if (iLocal_210 == 0)
	{
		for (iLocal_192 = 0; iLocal_192 <= 1; iLocal_192 = iLocal_192 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_192]))
			{
				if (!PED::IS_PED_INJURED(uLocal_33[iLocal_192]))
				{
					if (iLocal_290 == 0 && iLocal_291 == 0)
					{
						if (!func_138())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_192], true) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_192], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_256(0))
										{
											if (func_255(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
													if (!PED::IS_PED_INJURED(uLocal_33[0]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[0], true) < 30f)
															func_161(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
											
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
													if (!PED::IS_PED_INJURED(uLocal_33[1]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[1], true) < 30f)
															func_161(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
											
												if (func_160(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = MISC::GET_GAME_TIMER();
													iLocal_186 = MISC::GET_GAME_TIMER();
													iLocal_290 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				
					if (iLocal_291 == 0 && iLocal_290 == 0)
					{
						if (!func_138())
						{
							if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
							{
								if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_192], true) < 25f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_192], PLAYER::PLAYER_PED_ID()))
									{
										if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
										{
											if (func_255(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || func_256(0))
											{
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
													if (!PED::IS_PED_INJURED(uLocal_33[0]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[0], true) < 30f)
															func_161(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
											
												if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
													if (!PED::IS_PED_INJURED(uLocal_33[1]))
														if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[1], true) < 30f)
															func_161(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
											
												if (func_160(&uLocal_403, "ARMYAUD", "ARMY_WRN1", 7, 0, 0, 0))
												{
													iLocal_187 = MISC::GET_GAME_TIMER();
													iLocal_186 = MISC::GET_GAME_TIMER();
													iLocal_291 = 1;
												}
											}
										}
									}
								}
							}
						}
					}
				
					if (iLocal_290 == 1 || iLocal_291 == 1)
					{
						if (iLocal_289 == 0 && iLocal_210 == 0)
						{
							if (iLocal_310 == 0)
							{
								if (MISC::GET_GAME_TIMER() > iLocal_186 + 8000)
								{
									if (!func_138())
									{
										if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
										{
											if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_192], true) < 25f)
											{
												if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_192], PLAYER::PLAYER_PED_ID()))
												{
													if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !func_256(0))
													{
														if (func_255(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED"))
														{
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
																if (!PED::IS_PED_INJURED(uLocal_33[0]))
																	if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[0], true) < 30f)
																		func_161(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
														
															if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
																if (!PED::IS_PED_INJURED(uLocal_33[1]))
																	if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[1], true) < 30f)
																		func_161(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
														
															if (func_160(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_186 = MISC::GET_GAME_TIMER();
																iLocal_310 = 1;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						
							if (MISC::GET_GAME_TIMER() > iLocal_187 + 8000)
							{
								if (!func_138())
								{
									if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
									{
										if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_192], true) < 25f)
										{
											if (PED::CAN_PED_SEE_HATED_PED(uLocal_33[iLocal_192], PLAYER::PLAYER_PED_ID()))
											{
												if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
												{
													if (func_255(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || func_256(0))
													{
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[0]))
															if (!PED::IS_PED_INJURED(uLocal_33[0]))
																if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[0], true) < 30f)
																	func_161(&uLocal_403, 4, uLocal_33[0], "ARMY_Guard01", 0, 1);
													
														if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[1]))
															if (!PED::IS_PED_INJURED(uLocal_33[1]))
																if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[1], true) < 30f)
																	func_161(&uLocal_403, 4, uLocal_33[1], "ARMY_Guard01", 0, 1);
													
														if (iLocal_310 == 0)
														{
															if (func_160(&uLocal_403, "ARMYAUD", "ARMY_WRN1a", 7, 0, 0, 0))
															{
																iLocal_187 = MISC::GET_GAME_TIMER();
																iLocal_310 = 1;
															}
														}
													
														if (iLocal_303 == 0)
														{
															iLocal_191 = MISC::GET_GAME_TIMER();
															iLocal_303 = 1;
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
				}
			}
		}
	}

	if (MISC::GET_GAME_TIMER() > iLocal_177 + 12000)
	{
		if (iLocal_210 == 1 || iLocal_289 == 1)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
			{
				if (!func_138())
				{
					if (func_283())
					{
						iLocal_181 = MISC::GET_RANDOM_INT_IN_RANGE(0, 6);
					
						if (iLocal_181 == 0)
						{
							func_280(func_282(), "OVER_THERE", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_181 == 1)
						{
							func_280(func_282(), "PROVOKE_TRESSPASS", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_181 == 2)
						{
							func_280(func_282(), "UP_THERE", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_181 == 3)
						{
							func_280(func_282(), "suspect_spotted", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_181 == 4)
						{
							func_280(func_282(), "GENERIC_INSULT_HIGH", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
						else if (iLocal_181 == 5)
						{
							func_280(func_282(), "GENERIC_INSULT_MED", 9);
							iLocal_177 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}

	return;
}

void func_280(Ped pedParam0, char* sParam1, int iParam2) // Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_281(iParam2), 1);
	return;
}

char* func_281(int iParam0) // Hash - 0xA17D549C ^0xF5955C37
{
	char* str;

	switch (iParam0)
	{
		case 0:
			return "SPEECH_PARAMS_STANDARD";
	
		case 1:
			return "SPEECH_PARAMS_ALLOW_REPEAT";
	
		case 2:
			return "SPEECH_PARAMS_BEAT";
	
		case 3:
			return "SPEECH_PARAMS_FORCE";
	
		case 4:
			return "SPEECH_PARAMS_FORCE_FRONTEND";
	
		case 5:
			return "SPEECH_PARAMS_FORCE_NO_REPEAT_FRONTEND";
	
		case 6:
			return "SPEECH_PARAMS_FORCE_NORMAL";
	
		case 7:
			return "SPEECH_PARAMS_FORCE_NORMAL_CLEAR";
	
		case 8:
			return "SPEECH_PARAMS_FORCE_NORMAL_CRITICAL";
	
		case 9:
			return "SPEECH_PARAMS_FORCE_SHOUTED";
	
		case 10:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR";
	
		case 11:
			return "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL";
	
		case 12:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY";
	
		case 13:
			return "SPEECH_PARAMS_MEGAPHONE";
	
		case 14:
			return "SPEECH_PARAMS_HELI";
	
		case 15:
			return "SPEECH_PARAMS_FORCE_MEGAPHONE";
	
		case 16:
			return "SPEECH_PARAMS_FORCE_HELI";
	
		case 17:
			return "SPEECH_PARAMS_INTERRUPT";
	
		case 18:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED";
	
		case 19:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CLEAR";
	
		case 20:
			return "SPEECH_PARAMS_INTERRUPT_SHOUTED_CRITICAL";
	
		case 21:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE";
	
		case 22:
			return "SPEECH_PARAMS_INTERRUPT_FRONTEND";
	
		case 23:
			return "SPEECH_PARAMS_INTERRUPT_NO_FORCE_FRONTEND";
	
		case 24:
			return "SPEECH_PARAMS_ADD_BLIP";
	
		case 25:
			return "SPEECH_PARAMS_ADD_BLIP_ALLOW_REPEAT";
	
		case 26:
			return "SPEECH_PARAMS_ADD_BLIP_FORCE";
	
		case 27:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED";
	
		case 28:
			return "SPEECH_PARAMS_ADD_BLIP_SHOUTED_FORCE";
	
		case 29:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT";
	
		case 30:
			return "SPEECH_PARAMS_ADD_BLIP_INTERRUPT_FORCE";
	
		case 31:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED";
	
		case 32:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CLEAR";
	
		case 33:
			return "SPEECH_PARAMS_FORCE_PRELOAD_ONLY_SHOUTED_CRITICAL";
	
		case 34:
			return "SPEECH_PARAMS_SHOUTED";
	
		case 35:
			return "SPEECH_PARAMS_SHOUTED_CLEAR";
	
		case 36:
			return "SPEECH_PARAMS_SHOUTED_CRITICAL";
	
		default:
		
	}

	str = 0;
	return str;
}

Ped func_282() // Hash - 0x52CC47E3 ^0x4EF6B80D
{
	var outPed;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, false, true, &outPed, false, true, -1);

	for (iLocal_179 = 0; iLocal_179 <= 9; iLocal_179 = iLocal_179 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_179]))
			if (!PED::IS_PED_INJURED(uLocal_33[iLocal_179]))
				if (outPed == uLocal_33[iLocal_179])
					return uLocal_33[iLocal_179];
	}

	return 0;
}

BOOL func_283() // Hash - 0x910400A4 ^0x8555125F
{
	for (iLocal_180 = 0; iLocal_180 <= 9; iLocal_180 = iLocal_180 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_33[iLocal_180]))
			if (!PED::IS_PED_INJURED(uLocal_33[iLocal_180]))
				if (func_2(PLAYER::PLAYER_PED_ID(), uLocal_33[iLocal_180], true) < 25f)
					return true;
	}

	return false;
}

BOOL func_284(Ped pedParam0, int iParam1) // Hash - 0x105D49F1 ^0x993A3F41
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !PED::IS_PED_INJURED(pedParam0))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				return true;

	return false;
}

void func_285() // Hash - 0x9DD42924 ^0xA80C496D
{
	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
		if (TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", false);

	return;
}

BOOL func_286() // Hash - 0x77F66043 ^0x77F66043
{
	if (Global_100681 == 10 || Global_100681 == 9)
		return true;

	return false;
}

void func_287() // Hash - 0xBB943E73 ^0xDD0FF7E9
{
	func_288(73);
	HUD::REQUEST_ADDITIONAL_TEXT("DOCKP2B", 0);

	while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
	{
		SYSTEM::WAIT(0);
	}

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);

	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_SwatAutomobile, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2024.2f, 2968f, 30.2f, -2004f, 2921.5f, 37.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2133.3f, 2993.7f, 41.1f, -2152.7f, 3039.4f, 31.6f, false, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true);
	iLocal_67 = PED::ADD_SCENARIO_BLOCKING_AREA(-1884.6f, 2827.7f, 41.8f, -1843.1f, 2772.1f, 29.9f, false, true, true, true);
	iLocal_69 = PED::ADD_SCENARIO_BLOCKING_AREA(-2168.3f, 3223.6f, 52.8f, -2156.2f, 3205f, 29f, false, true, true, true);
	MISC::CLEAR_AREA(-1876.8f, 2806.1f, 32.3f, 8f, true, false, false, false);
	MISC::CLEAR_AREA(-1857.7f, 2797.9f, 32.4f, 8f, true, false, false, false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BUZZARD"), true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, 0);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, false, true);
	VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, 0);
	return;
}

void func_288(int iParam0) // Hash - 0x6F0ACC58 ^0x6F0ACC58
{
	Global_96536 = 0;

	switch (iParam0)
	{
		case 72:
			func_253(2);
			func_253(4);
			break;
	
		case 73:
			func_253(0);
			func_253(1);
			func_253(7);
			break;
	
		case 92:
			func_253(10);
			func_253(9);
			func_253(13);
			func_253(6);
			break;
	
		case 68:
			func_253(11);
			break;
	
		case 78:
			func_253(14);
			break;
	
		case 79:
			func_253(3);
			break;
	
		default:
			break;
	}

	return;
}

void func_289() // Hash - 0x1C976F47 ^0x5D738273
{
	func_290();
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("CARGOBOB"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("BUZZARD"), false);
	PLAYER::SET_POLICE_RADAR_BLIPS(true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2195.3f, 3231.1f, 41.4f, -2164.1f, 3250.5f, 29f, true, true);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-2050.8f, 3139.5f, 41f, -2018.5f, 3160f, 27f, true, true);
	VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_67, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(anLocal_68, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_69, false);
	func_273(DT_PoliceAutomobile, true);
	func_273(DT_PoliceHelicopter, true);
	func_273(DT_PoliceVehicleRequest, true);
	func_273(DT_PoliceRoadBlock, true);
	func_273(DT_PoliceAutomobileWaitPulledOver, true);
	func_273(DT_PoliceAutomobileWaitCruising, true);
	func_273(DT_SwatAutomobile, true);
	func_273(DT_SwatHelicopter, true);
	func_130();

	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_GUARD"))
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_GUARD"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_GUARD", true);

	AUDIO::STOP_ALARM("PORT_OF_LS_HEIST_FORT_ZANCUDO_ALARMS", true);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_AFB_ALARM_SPEECH", false, false);
	AUDIO::SET_AUDIO_FLAG("PoliceScannerDisabled", false);
	AUDIO::SET_AUDIO_FLAG("WantedMusicOnMission", false);

	for (iLocal_176 = 0; iLocal_176 <= 12; iLocal_176 = iLocal_176 + 1)
	{
		func_131(&uLocal_70[iLocal_176 /*8*/]);
	}

	if (TASK::DOES_SCENARIO_GROUP_EXIST("ARMY_HELI"))
		if (!TASK::IS_SCENARIO_GROUP_ENABLED("ARMY_HELI"))
			TASK::SET_SCENARIO_GROUP_ENABLED("ARMY_HELI", true);

	PED::REMOVE_RELATIONSHIP_GROUP(hLocal_60);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_290() // Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_96536 = 0;
	return;
}

void func_291() // Hash - 0x56F5D62B ^0x98A5B79E
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_113648.f_9087 || func_28(false))
	{
		if (!func_292())
		{
			num = func_27();
		
			if (num != -1)
			{
				if (!func_14(num))
					return;
			
				MISC::SET_BIT(&(Global_91433[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_19();
		}
	}

	return;
}

BOOL func_292() // Hash - 0x25806CBF ^0x25806CBF
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

