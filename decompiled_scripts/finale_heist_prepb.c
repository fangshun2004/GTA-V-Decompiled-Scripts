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
	int iLocal_31 = 0;
	Vehicle veLocal_32 = 0;
	Vehicle veLocal_33 = 0;
	Vehicle veLocal_34 = 0;
	var uLocal_35 = 7;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 2;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	Ped pedLocal_46 = 0;
	Ped pedLocal_47 = 0;
	Ped pedLocal_48 = 0;
	Ped pedLocal_49 = 0;
	Ped pedLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	Blip blLocal_58 = 0;
	Blip blLocal_59 = 0;
	Blip blLocal_60 = 0;
	Blip blLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	var uLocal_69 = 7;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	int iLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92 = 0;
	int iLocal_93 = 0;
	int iLocal_94 = 0;
	int iLocal_95 = 0;
	var uLocal_96 = 2;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 2;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 2;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 2;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	Hash hLocal_114 = 0;
	Hash hLocal_115 = 0;
	float fLocal_116 = 0f;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	float fLocal_119 = 0f;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	float fLocal_122 = 0f;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 2;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	float fLocal_135 = 0f;
	char* sLocal_136 = 0;
	var uLocal_137 = 16;
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
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	var uLocal_179 = 0;
	var uLocal_180 = 0;
	var uLocal_181 = 0;
	var uLocal_182 = 0;
	var uLocal_183 = 0;
	var uLocal_184 = 0;
	var uLocal_185 = 0;
	var uLocal_186 = 0;
	var uLocal_187 = 0;
	var uLocal_188 = 0;
	var uLocal_189 = 0;
	var uLocal_190 = 0;
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	var uLocal_193 = 0;
	var uLocal_194 = 0;
	var uLocal_195 = 0;
	var uLocal_196 = 0;
	var uLocal_197 = 0;
	var uLocal_198 = 0;
	var uLocal_199 = 0;
	var uLocal_200 = 0;
	var uLocal_201 = 0;
	var uLocal_202 = 0;
	var uLocal_203 = 0;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
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
	var uLocal_231 = 0;
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
	var uLocal_245 = 0;
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
	var uLocal_259 = 0;
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
	var uLocal_273 = 0;
	var uLocal_274 = 0;
	var uLocal_275 = 0;
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
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 0;
	Hash hLocal_302 = 0;
	Hash hLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	var uLocal_306 = 7;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
	int iLocal_314 = 0;
	int iLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	int iLocal_318 = 0;
	int iLocal_319 = 0;
	int iLocal_320 = 0;
	int iLocal_321 = 0;
	var uLocal_322 = 7;
	var uLocal_323 = 0;
	var uLocal_324 = 0;
	var uLocal_325 = 0;
	var uLocal_326 = 0;
	var uLocal_327 = 0;
	var uLocal_328 = 0;
	var uLocal_329 = 0;
	var uLocal_330 = 7;
	var uLocal_331 = 0;
	var uLocal_332 = 0;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	int iLocal_338 = 0;
	var uLocal_339 = 7;
	var uLocal_340 = 0;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	var uLocal_343 = 0;
	var uLocal_344 = 0;
	var uLocal_345 = 0;
	var uLocal_346 = 0;
	var uLocal_347 = 7;
	var uLocal_348 = 0;
	var uLocal_349 = 0;
	var uLocal_350 = 0;
	var uLocal_351 = 0;
	var uLocal_352 = 0;
	var uLocal_353 = 0;
	var uLocal_354 = 0;
	var uLocal_355 = 7;
	var uLocal_356 = 0;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	var uLocal_363 = 7;
	var uLocal_364 = 0;
	var uLocal_365 = 0;
	var uLocal_366 = 0;
	var uLocal_367 = 0;
	var uLocal_368 = 0;
	var uLocal_369 = 0;
	var uLocal_370 = 0;
	var uLocal_371 = 7;
	var uLocal_372 = 0;
	var uLocal_373 = 0;
	var uLocal_374 = 0;
	var uLocal_375 = 0;
	var uLocal_376 = 0;
	var uLocal_377 = 0;
	var uLocal_378 = 0;
	var uLocal_379 = 7;
	var uLocal_380 = 0;
	var uLocal_381 = 0;
	var uLocal_382 = 0;
	var uLocal_383 = 0;
	var uLocal_384 = 0;
	var uLocal_385 = 0;
	var uLocal_386 = 0;
	int iLocal_387 = 0;
	int iLocal_388 = 0;
	int iLocal_389 = 0;
	int iLocal_390 = 0;
	int iLocal_391 = 0;
	int iLocal_392 = 0;
	int iLocal_393 = 0;
	int iLocal_394 = 0;
	int iLocal_395 = 0;
	int iLocal_396 = 0;
	int iLocal_397 = 0;
	int iLocal_398 = 0;
	int iLocal_399 = 0;
	int iLocal_400 = 0;
	int iLocal_401 = 0;
	int iLocal_402 = 0;
	int iLocal_403 = 0;
	var uLocal_404 = 2;
	var uLocal_405 = 0;
	var uLocal_406 = 0;
	var uLocal_407 = 2;
	var uLocal_408 = 0;
	var uLocal_409 = 0;
	int iLocal_410 = 0;
	int iLocal_411 = 0;
	int iLocal_412 = 0;
	int iLocal_413 = 0;
	int iLocal_414 = 0;
	int iLocal_415 = 0;
	int iLocal_416 = 0;
	int iLocal_417 = 0;
	int iLocal_418 = 0;
	int iLocal_419 = 0;
	int iLocal_420 = 0;
	int iLocal_421 = 0;
	int iLocal_422 = 0;
	int iLocal_423 = 0;
	int iLocal_424 = 0;
	int iLocal_425 = 0;
	int iLocal_426 = 0;
	int iLocal_427 = 0;
	int iLocal_428 = 0;
	int iLocal_429 = 0;
	int iLocal_430 = 0;
	int iLocal_431 = 0;
	int iLocal_432 = 0;
	var uLocal_433 = 2;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 2;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 2;
	var uLocal_440 = 0;
	var uLocal_441 = 0;
	var uLocal_442 = 2;
	var uLocal_443 = 0;
	var uLocal_444 = 0;
	var uLocal_445 = 2;
	var uLocal_446 = 0;
	var uLocal_447 = 0;
	var uLocal_448 = 2;
	var uLocal_449 = 0;
	var uLocal_450 = 0;
	var uLocal_451 = 2;
	var uLocal_452 = 0;
	var uLocal_453 = 0;
	int iLocal_454 = 0;
	int iLocal_455 = 0;
	int iLocal_456 = 0;
	int iLocal_457 = 0;
	int iLocal_458 = 0;
	var uLocal_459 = 2;
	var uLocal_460 = 0;
	var uLocal_461 = 0;
	var uLocal_462 = 2;
	var uLocal_463 = 0;
	var uLocal_464 = 0;
	int iLocal_465 = 0;
	int iLocal_466 = 0;
	int iLocal_467 = 0;
	int iLocal_468 = 0;
	int iLocal_469 = 0;
	int iLocal_470 = 0;
	int iLocal_471 = 0;
	int iLocal_472 = 0;
	int iLocal_473 = 0;
	int iLocal_474 = 0;
	int iLocal_475 = 0;
	int iLocal_476 = 0;
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	int iLocal_481 = 0;
	int iLocal_482 = 0;
	int iLocal_483 = 0;
	var uLocal_484 = 2;
	var uLocal_485 = 0;
	var uLocal_486 = 0;
	int iLocal_487 = 0;
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
	fLocal_116 = { 27.7189f, -608.7927f, 30.6293f };
	uLocal_132 = { 903.1f, -1548.8f, 29.8f };
	fLocal_135 = 0f;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
		func_222();
		func_221();
	}

	if (func_220(false))
		HUD::REQUEST_ADDITIONAL_TEXT("FINPRB", 0);

	PED::ADD_RELATIONSHIP_GROUP("WorkerPedMainGroup", &hLocal_302);
	PED::ADD_RELATIONSHIP_GROUP("GuardMainGroup", &hLocal_303);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PACKER"), true);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_303, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_302, joaat("PLAYER"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_303, hLocal_302);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_302, hLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_303, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), hLocal_303);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_302, joaat("COP"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("COP"), hLocal_302);

	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_FINPRB", 0);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 230, false);
	
		func_218();
	
		if (iLocal_317 == 0)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_217(27, 1);
				iLocal_317 = 1;
			}
		}
	
		if (iLocal_396 == 1)
			func_213();
	
		func_210();
		func_203();
		func_195();
		func_190();
		func_187();
	
		switch (iLocal_28)
		{
			case 0:
				func_186();
				break;
		
			case 1:
				func_183();
				break;
		
			case 2:
				func_159();
				break;
		
			case 3:
				func_157();
				break;
		
			case 4:
				func_129();
				break;
		
			case 5:
				func_21();
				break;
		
			case 6:
				func_1();
				break;
		}
	
		SYSTEM::WAIT(0);
	}

	return;
}

void func_1() // Hash - 0x41679E0D ^0xA54771B6
{
	switch (iLocal_62)
	{
		case 0:
			HUD::CLEAR_PRINTS();
			HUD::CLEAR_HELP(true);
			AUDIO::TRIGGER_MUSIC_EVENT("FHPRA_FAIL");
		
			switch (iLocal_30)
			{
				case 0:
					break;
			
				case 4:
					sLocal_136 = "FPB_FAIL1";
					break;
			
				case 3:
					sLocal_136 = "FPB_FAIL2";
					break;
			
				case 1:
					sLocal_136 = "FPB_FAIL3";
					break;
			
				case 2:
					sLocal_136 = "FPB_FAIL10";
					break;
			
				case 5:
					if (func_14() == 0)
						sLocal_136 = "FPB_FAIL7";
				
					if (func_14() == 2)
						sLocal_136 = "FPB_FAIL8";
				
					if (func_14() == 1)
						sLocal_136 = "FPB_FAIL9";
					break;
			
				case 6:
					sLocal_136 = "FPB_FAIL11";
					break;
			}
		
			if (iLocal_30 == 0)
				func_6(0);
			else
				func_4(sLocal_136);
		
			iLocal_62 = 1;
			break;
	
		case 1:
			if (func_3())
			{
				func_2();
				func_221();
			}
			break;
	}

	return;
}

BOOL func_2() // Hash - 0x1F2273ED ^0x1F2273ED
{
	if (Global_100681 == 7)
		return true;

	return false;
}

BOOL func_3() // Hash - 0x56F647A6 ^0x56F647A6
{
	if (Global_3)
		return true;

	if (Global_100681 == 7 || Global_100681 == 8)
		return true;

	return false;
}

void func_4(char* sParam0) // Hash - 0x60B9B067 ^0x60B9B067
{
	func_5(sParam0);
	func_6(0);
	return;
}

void func_5(char* sParam0) // Hash - 0x9DFA5657 ^0xDCDD42D9
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

void func_6(int iParam0) // Hash - 0x2E198DBD ^0xE0E1C260
{
	int num;

	if (Global_113648.f_9087 || func_220(false))
	{
		num = func_13();
	
		if (!func_7(num))
			return;
	
		MISC::SET_BIT(&(Global_91433[num /*5*/].f_1), 5);
		Global_100717 = iParam0;
	}

	return;
}

BOOL func_7(int iParam0) // Hash - 0x9665C8BC ^0x4EE2CF72
{
	int num;
	int num2;

	func_12();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::START_FIRING_AMNESTY(5000);

	num = Global_91433[iParam0 /*5*/];
	num2 = Global_78828.f_109[num /*4*/];
	func_11(num2, true);
	PLAYER::SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(PLAYER::PLAYER_ID(), 0);
	PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
	func_8(&(Global_113648.f_2365.f_539), num2);

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

void func_8(var uParam0, int iParam1) // Hash - 0x604FE9F ^0x604FE9F
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
		
			if (!func_10(Global_113648.f_18535[i], &unk, &num2))
			{
				Global_113648.f_18535[i] = 318;
				func_9(&uParam0->f_2296[i]);
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

void func_9(var uParam0) // Hash - 0xEE73B491 ^0xBDB3BDC2
{
	*uParam0 = -15;
	return;
}

BOOL func_10(int iParam0, var uParam1, var uParam2) // Hash - 0x6BF2FA05 ^0x6BF2FA05
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
			return func_10(8, uParam1, uParam2);
	
		case 10:
			return func_10(8, uParam1, uParam2);
	
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

void func_11(int iParam0, BOOL bParam1) // Hash - 0x2E8A8CC9 ^0x2E8A8CC9
{
	if (bParam1)
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92)
			Global_94666[iParam0 /*2*/] = 1;
	else
		Global_94666[iParam0 /*2*/] = 0;

	return;
}

void func_12() // Hash - 0x27846CBD ^0xDAA2479C
{
	Global_100716 = 1;

	if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true))
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&Global_78791))
		{
			switch (func_14())
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
			switch (func_14())
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

int func_13() // Hash - 0x39D9D518 ^0xBC98C03C
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

int func_14() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_15();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_15() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_19(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_18(PLAYER::PLAYER_PED_ID());
		
			if (func_17(num) && !func_16(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_17(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_16(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_17(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_18(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_19(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_19(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_17(iParam0))
		return func_20(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_20(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_21() // Hash - 0x1CFE0389 ^0x98B08EB2
{
	func_187();

	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
	
		iLocal_318 = 0;
		iLocal_319 = 0;
		iLocal_320 = 0;
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0);
	
		if (func_34(pedLocal_46, 0))
		{
			if (!func_33(pedLocal_46))
			{
				while (!func_32(pedLocal_46, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (func_34(pedLocal_48, 0))
		{
			if (!func_33(pedLocal_48))
			{
				while (!func_32(pedLocal_48, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (func_34(pedLocal_47, 0))
		{
			if (!func_33(pedLocal_47))
			{
				while (!func_32(pedLocal_47, 0))
				{
					SYSTEM::WAIT(0);
				}
			}
		}
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			func_28(veLocal_33, -1, 1);
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		iLocal_396 = 1;
		iLocal_62 = 1;
	}

	if (iLocal_62 == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
			{
				if (func_14() == 0)
				{
					if (func_34(pedLocal_48, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_48, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_48);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_48);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_48, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_48, veLocal_33, 0);
						}
					}
				
					if (func_34(pedLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_47, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_47);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_47, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_47, veLocal_33, 0);
						}
					}
				}
			
				if (func_14() == 2)
				{
					if (func_34(pedLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_46, veLocal_33, 0);
						}
					}
				
					if (func_34(pedLocal_47, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_47, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_47);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_47);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_47, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_47, veLocal_33, 0);
						}
					}
				}
			
				if (func_14() == 1)
				{
					if (func_34(pedLocal_46, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_46);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_46, veLocal_33, 0);
						}
					}
				
					if (func_34(pedLocal_48, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_48, veLocal_33, false))
						{
							TASK::CLEAR_PED_TASKS(pedLocal_48);
							PED::REMOVE_PED_FROM_GROUP(pedLocal_48);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_48, true);
							TASK::TASK_LEAVE_VEHICLE(pedLocal_48, veLocal_33, 0);
						}
					}
				}
			
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, 0);
			}
		}
	
		SYSTEM::SETTIMERB(0);
		iLocal_62 = 2;
	}

	if (iLocal_62 == 2)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
			{
				if (iLocal_320 == 0)
				{
					if (func_14() == 0)
					{
						if (func_34(pedLocal_48, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_48, veLocal_33, false))
								if (func_33(pedLocal_48))
									if (func_25(pedLocal_48))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_318 = 1;
					
						if (func_34(pedLocal_47, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_47, veLocal_33, false))
								if (func_33(pedLocal_47))
									if (func_25(pedLocal_47))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_319 = 1;
					}
				
					if (func_14() == 2)
					{
						if (func_34(pedLocal_46, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_33, false))
								if (func_33(pedLocal_46))
									if (func_25(pedLocal_46))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_318 = 1;
					
						if (func_34(pedLocal_47, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_47, veLocal_33, false))
								if (func_33(pedLocal_47))
									if (func_25(pedLocal_47))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_319 = 1;
					}
				
					if (func_14() == 1)
					{
						if (func_34(pedLocal_46, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, veLocal_33, false))
								if (func_33(pedLocal_46))
									if (func_25(pedLocal_46))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_318 = 1;
					
						if (func_34(pedLocal_48, 0))
							if (!PED::IS_PED_IN_VEHICLE(pedLocal_48, veLocal_33, false))
								if (func_33(pedLocal_48))
									if (func_25(pedLocal_48))
										iLocal_320 = 1;
								else
									iLocal_320 = 1;
						else
							iLocal_319 = 1;
					}
				
					if (iLocal_318 == 1 && iLocal_319 == 1)
						iLocal_320 = 1;
				}
				else if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, true))
				{
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
					SYSTEM::SETTIMERB(0);
					iLocal_62 = 3;
				}
			}
		}
	}

	if (iLocal_62 == 3)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
			{
				VEHICLE::SET_VEHICLE_DOORS_SHUT(veLocal_33, false);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_33, 2);
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_33, true);
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_32))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
				ENTITY::FREEZE_ENTITY_POSITION(veLocal_32, true);
	
		iLocal_62 = 4;
	}

	if (iLocal_62 == 4)
		func_22();

	return;
}

void func_22() // Hash - 0xA9EFD2D6 ^0xA9EFD2D6
{
	func_23(false, 0);
	func_221();
	return;
}

void func_23(BOOL bParam0, BOOL bParam1) // Hash - 0x56032C5B ^0x18DFBA48
{
	int num;
	int num2;
	int num3;

	if (!Global_63364)
		Global_63364 = bParam1;

	if (bParam0)
	{
		if (func_220(false) && Global_78805.f_1 == 1 && func_24(Global_78805))
		{
		}
		else
		{
			Global_63362 = 1;
		}
	}

	if (Global_113648.f_9087 || func_220(false))
	{
		num = func_13();
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

BOOL func_24(int iParam0) // Hash - 0xE5CDC45F ^0xE5CDC45F
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

BOOL func_25(Ped pedParam0) // Hash - 0x7F39FA58 ^0x6151E3DC
{
	return false;
}

Ped func_26(int iParam0) // Hash - 0x44474C2F ^0xB8583860
{
	if (iParam0 > 3)
		return 0;

	if (iParam0 == func_14())
		return PLAYER::PLAYER_PED_ID();

	return Global_98159[func_27(iParam0)];
}

int func_27(int iParam0) // Hash - 0x379BF8EA ^0x379BF8EA
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

void func_28(Vehicle veParam0, int iParam1, int iParam2) // Hash - 0xBB66B13B ^0xEE89352E
{
	if (func_30() && func_31())
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
		func_29(0);
	}

	return;
}

void func_29(int iParam0) // Hash - 0x7BC1D73E ^0x69FC312C
{
	if (iParam0 == 1)
		MISC::SET_BIT(&(Global_100681.f_20), 13);
	else
		MISC::CLEAR_BIT(&(Global_100681.f_20), 13);

	return;
}

BOOL func_30() // Hash - 0x77F66043 ^0x77F66043
{
	if (Global_100681 == 10 || Global_100681 == 9)
		return true;

	return false;
}

BOOL func_31() // Hash - 0xDB96C64C ^0xAB601103
{
	return IS_BIT_SET(Global_100681.f_20, 13);
}

BOOL func_32(Ped pedParam0, int iParam1) // Hash - 0x42E87759 ^0xEDD71F6E
{
	return false;
}

BOOL func_33(Ped pedParam0) // Hash - 0x7F39FA58 ^0x6151E3DC
{
	return false;
}

BOOL func_34(Ped pedParam0, int iParam1) // Hash - 0xE4F8E1F1 ^0xF8674CFD
{
	return false;
}

void func_35() // Hash - 0x9776AA07 ^0x6401F7B6
{
	iLocal_396 = 0;
	iLocal_456 = 0;
	PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
	PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);

	if (!CAM::IS_SCREEN_FADED_OUT())
		CAM::DO_SCREEN_FADE_OUT(0);

	func_127();
	HUD::CLEAR_PRINTS();
	func_126();
	func_125();
	func_37();

	if (!func_31())
		func_36();

	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
	return;
}

void func_36() // Hash - 0xDCE25CF1 ^0x15B60F25
{
	switch (iLocal_28)
	{
		case 2:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
	
		case 3:
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 856.9501f, -1573.1766f, 29.4751f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 288.3586f);
			break;
	
		case 4:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, -1);
			break;
	
		case 5:
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, -1);
			break;
	}

	return;
}

void func_37() // Hash - 0xAB75DF8C ^0xAB75DF8C
{
	switch (iLocal_28)
	{
		case 3:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_121();
		
			if (func_120() && func_117(7f, 7f, 7f, 1))
			{
				func_115();
			
				while (!func_114())
				{
					SYSTEM::WAIT(0);
				}
			
				veLocal_34 = func_38(818.8139f, -1610.4055f, 30.7951f, 264.412f);
			}
		
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
			break;
	
		case 4:
			iLocal_418 = 0;
			iLocal_419 = 0;
			iLocal_420 = 0;
			func_121();
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
				{
					ENTITY::SET_ENTITY_COORDS(veLocal_33, 89.2131f, -596.9456f, 30.6224f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_33, 161.1163f);
				}
			}
		
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
			break;
	
		case 5:
			iLocal_418 = 1;
			iLocal_419 = 1;
			iLocal_420 = 1;
			func_121();
			MISC::CLEAR_AREA(41f, -615f, 30f, 50f, true, true, false, false);
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
				{
					ENTITY::SET_ENTITY_COORDS(veLocal_33, 28.4065f, -608.9371f, 30.6293f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(veLocal_33, 70.7778f);
				}
			}
		
			STREAMING::REQUEST_MODEL(joaat("S_M_M_SECURITY_01"));
		
			while (!STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_SECURITY_01")))
			{
				SYSTEM::WAIT(0);
			}
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_49))
			{
				pedLocal_49 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_SECURITY_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_SECURITY_01"));
				PED::SET_PED_CONFIG_FLAG(pedLocal_49, 324, true);
			}
			break;
	}

	return;
}

Vehicle func_38(float fParam0, float fParam1, float fParam2, float fParam3) // Hash - 0x8B428079 ^0x8B428079
{
	return func_39(&(Global_104212.f_2890), fParam0, fParam3, false);
}

Vehicle func_39(var uParam0, float fParam1, var uParam2, var uParam3, float fParam4, BOOL bParam5) // Hash - 0xD821241F ^0x8968603D
{
	Vehicle vehicle;
	Vector3 entityCoords;
	BOOL flag;
	var result;
	int num;

	if (func_113(uParam0))
	{
		if (func_112(fParam1, 0f, 0f, 0f, false))
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

BOOL func_49(Hash hParam0) // Hash - 0xC7E3100C ^0x29476B11
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

BOOL func_59(Vehicle veParam0) // Hash - 0xC71C0264 ^0x589B4E5
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

BOOL func_65(int iParam0, int iParam1, char* sParam2, var uParam3) // Hash - 0xDDDBA85A ^0xED30785E
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

BOOL func_73(var uParam0, int iParam1) // Hash - 0x57767735 ^0x203A8342
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
	
		if (!func_112(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_112(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_112(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
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

	if (func_17(iParam0))
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
					if (!bParam4 || func_112(uParam1, 0f, 0f, 0f, false) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(veParam0, true), ENTITY::GET_ENTITY_COORDS(sizeAndVehs[i], true), true) < 10f)
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

BOOL func_99(Vehicle veParam0) // Hash - 0xB4BAF94A ^0x3C7984FE
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

int func_103(Vehicle veParam0) // Hash - 0x2BB30050 ^0xEEF8CFCD
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
	if (func_113(uParam0))
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

BOOL func_112(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_113(var uParam0) // Hash - 0x250242CC ^0x9A8D76D5
{
	if (uParam0->f_12.f_66 == 0)
		return 0;

	if (!func_48(uParam0->f_12.f_66, false, -1))
		return 0;

	if (uParam0->f_12.f_66 == joaat("STUNT") && func_78(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, false))
		return 0;

	return 1;
}

BOOL func_114() // Hash - 0x4D7C1290 ^0x4D7C1290
{
	return func_111(&(Global_104212.f_2890));
}

void func_115() // Hash - 0x908D0A5F ^0x908D0A5F
{
	func_116(&(Global_104212.f_2890));
	return;
}

void func_116(var uParam0) // Hash - 0x78260907 ^0xA955114A
{
	if (func_113(uParam0))
		STREAMING::REQUEST_MODEL(uParam0->f_12.f_66);

	return;
}

BOOL func_117(float fParam0, float fParam1, float fParam2, int iParam3) // Hash - 0x6B1B965A ^0xAB4284C8
{
	return func_118(Global_104212.f_2890.f_12.f_66, fParam0, iParam3);
}

int func_118(Hash hParam0, float fParam1, var uParam2, var uParam3, int iParam4) // Hash - 0x304A9EE1 ^0x29CD3F63
{
	var minimum;
	float maximum;

	if (hParam0 == 0)
		return 0;

	if (iParam4 == 1)
		fParam1 = { func_119() };

	MISC::GET_MODEL_DIMENSIONS(hParam0, &minimum, &maximum);

	if (maximum - minimum > fParam1)
		return 0;
	else if (maximum.f_1 - minimum.f_1 > fParam1.f_1)
		return 0;
	else if (maximum.f_2 - minimum.f_2 > fParam1.f_2)
		return 0;

	return 1;
}

Vector3 func_119() // Hash - 0x21158019 ^0x21158019
{
	return 2.55f, 5.665f, 2.55f;
}

BOOL func_120() // Hash - 0x4D7C1290 ^0x4D7C1290
{
	return func_113(&(Global_104212.f_2890));
}

void func_121() // Hash - 0x1F2423CB ^0x4E2BDB7D
{
	STREAMING::REQUEST_MODEL(joaat("ARMYTRAILER2"));
	STREAMING::REQUEST_MODEL(joaat("PACKER"));
	STREAMING::REQUEST_MODEL(joaat("S_M_Y_CONSTRUCT_01"));
	STREAMING::REQUEST_MODEL(joaat("S_M_M_SECURITY_01"));
	STREAMING::REQUEST_MODEL(joaat("BISON2"));

	while (!STREAMING::HAS_MODEL_LOADED(joaat("ARMYTRAILER2")) || !STREAMING::HAS_MODEL_LOADED(joaat("PACKER")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_Y_CONSTRUCT_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_SECURITY_01")) || !STREAMING::HAS_MODEL_LOADED(joaat("BISON2")))
	{
		SYSTEM::WAIT(0);
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_32))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[1], true, true);
			veLocal_32 = Global_97178[1];
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_32);
		}
		else
		{
			veLocal_32 = VEHICLE::CREATE_VEHICLE(joaat("ARMYTRAILER2"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::ADD_VEHICLE_UPSIDEDOWN_CHECK(veLocal_32);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_33))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[2], true, true);
			veLocal_33 = Global_97178[2];
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_33, 7);
			func_124(veLocal_33, -1);
			func_123(veLocal_33, -1);
		}
		else
		{
			veLocal_33 = VEHICLE::CREATE_VEHICLE(joaat("PACKER"), 919.303f, -1553.8795f, 29.7789f, 167.1917f, true, true, false);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_33, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_33, 7);
			func_124(veLocal_33, -1);
			func_123(veLocal_33, -1);
		}
	}

	VEHICLE::ATTACH_VEHICLE_TO_TRAILER(veLocal_33, veLocal_32, 0.5f);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("ARMYTRAILER2"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PACKER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("BISON2"));

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[0], true, true);
			uLocal_35[0] = Global_97178.f_9[0];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[0], hLocal_302);
			func_122(uLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[0], true);
		}
		else
		{
			uLocal_35[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 912.34f, -1543.2975f, 29.6469f, 16.169f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[0], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.3f, -1542.6f, 30.4f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[0], 912.3f, -1542.6f, 30.4f, 5f, 0);
		
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[0], true);
			func_122(uLocal_35[0], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[1]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[1], true, true);
			uLocal_35[1] = Global_97178.f_9[1];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[1], hLocal_302);
			func_122(uLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[1], true);
		}
		else
		{
			uLocal_35[1] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 917.5028f, -1517.4009f, 29.9673f, 158.5738f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[1], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.5028f, -1517.4009f, 29.9673f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[1], 917.5028f, -1517.4009f, 29.9673f, 5f, 0);
		
			func_122(uLocal_35[1], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[1], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[2]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[2]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[2], true, true);
			uLocal_35[2] = Global_97178.f_9[2];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[2], hLocal_302);
			func_122(uLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[2], true);
		}
		else
		{
			uLocal_35[2] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 869.6423f, -1541.4226f, 29.2516f, 346.9848f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[2], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.6423f, -1541.4226f, 29.2516f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[2], 869.6423f, -1541.4226f, 29.2516f, 5f, 0);
		
			func_122(uLocal_35[2], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[2], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[3]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[3]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[3], true, true);
			uLocal_35[3] = Global_97178.f_9[3];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[3], hLocal_302);
			func_122(uLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[3], true);
		}
		else
		{
			uLocal_35[3] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 884.3046f, -1573.1875f, 29.8247f, 182.9722f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[3], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.3046f, -1573.1875f, 29.8247f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[3], 884.3046f, -1573.1875f, 29.8247f, 5f, 0);
		
			func_122(uLocal_35[3], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[3], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[4]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[4]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[4], true, true);
			uLocal_35[4] = Global_97178.f_9[4];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[4], hLocal_302);
			func_122(uLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[4], true);
		}
		else
		{
			uLocal_35[4] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 903.8805f, -1575.0199f, 29.8327f, 308.1952f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[4], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(903.8805f, -1575.0199f, 29.8327f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[4], 903.8805f, -1575.0199f, 29.8327f, 5f, 0);
		
			func_122(uLocal_35[4], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[4], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[5]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[5]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[5], true, true);
			uLocal_35[5] = Global_97178.f_9[5];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[5], hLocal_302);
			func_122(uLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[5], true);
		}
		else
		{
			uLocal_35[5] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 906.2186f, -1575.1078f, 29.8125f, 55.9906f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[5], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(906.2186f, -1575.1078f, 29.8125f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[5], 906.2186f, -1575.1078f, 29.8125f, 5f, 0);
		
			func_122(uLocal_35[5], 30f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[5], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_35[6]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[8]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[8], true, true);
			uLocal_35[6] = Global_97178.f_9[8];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[6], hLocal_302);
			func_122(uLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[6], true);
		}
		else
		{
			uLocal_35[6] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_Y_CONSTRUCT_01"), 889.285f, -1561.4847f, 29.6539f, 22.2456f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_35[6], hLocal_302);
		
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.285f, -1561.4847f, 29.6539f, 3f, false))
				TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(uLocal_35[6], 889.285f, -1561.4847f, 29.6539f, 5f, 0);
		
			func_122(uLocal_35[6], 20f, 5f, 120f, -45f, 45f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[6], true);
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[6]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[6], true, true);
			uLocal_43[0] = Global_97178.f_9[6];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_43[0], hLocal_303);
			func_122(uLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_43[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
		else
		{
			uLocal_43[0] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_SECURITY_01"), 863.1551f, -1564.5721f, 29.3231f, 130.7946f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_43[0], hLocal_303);
			func_122(uLocal_43[0], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43[0], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_43[0], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[0], "S_M_M_GENERICSECURITY_01_LATINO_MINI_01");
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[7]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178.f_9[7], true, true);
			uLocal_43[1] = Global_97178.f_9[7];
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_43[1], hLocal_303);
			func_122(uLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_43[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
		else
		{
			uLocal_43[1] = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_SECURITY_01"), 940.2881f, -1573.8774f, 29.3866f, 269.1856f, true, true);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_43[1], hLocal_303);
			func_122(uLocal_43[1], 40f, 1084227584, 1123024896, -1028390912, 1119092736);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_43[1], true);
			WEAPON::GIVE_WEAPON_TO_PED(uLocal_43[1], joaat("WEAPON_PISTOL"), 100, false, false);
			AUDIO::SET_AMBIENT_VOICE_NAME(uLocal_43[1], "S_M_M_GENERICSECURITY_01_LATINO_MINI_02");
		}
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_Y_CONSTRUCT_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_SECURITY_01"));
	return;
}

void func_122(Ped pedParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xD46E55E8 ^0x6006F6AB
{
	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::SET_PED_SEEING_RANGE(pedParam0, fParam1);
		PED::SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(pedParam0, iParam2);
		PED::SET_PED_VISUAL_FIELD_CENTER_ANGLE(pedParam0, iParam3 / 2f);
		PED::SET_PED_VISUAL_FIELD_MIN_ANGLE(pedParam0, iParam4);
		PED::SET_PED_VISUAL_FIELD_MAX_ANGLE(pedParam0, iParam5);
	}

	return;
}

void func_123(Vehicle veParam0, int iParam1) // Hash - 0x691F9D08 ^0x691F9D08
{
	Global_63373 = veParam0;
	Global_63374 = iParam1;
	return;
}

void func_124(Vehicle veParam0, int iParam1) // Hash - 0xEA11BB32 ^0x75D6FA73
{
	int i;

	Global_63375 = veParam0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		if (iParam1 == -1 || Global_75458[i /*9*/] == iParam1)
		{
			if (Global_75458[i /*9*/].f_6 != veParam0)
			{
				Global_75458[i /*9*/].f_6 = veParam0;
				Global_75458[i /*9*/].f_7 = 1;
				Global_75458[i /*9*/].f_8 = 0;
			}
		}
	}

	return;
}

void func_125() // Hash - 0xD54EC5D5 ^0x68A6AB48
{
	for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_63]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_35[iLocal_63], true))
			PED::DELETE_PED(&uLocal_35[iLocal_63]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_43[0], true))
		PED::DELETE_PED(&uLocal_43[0]);

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(uLocal_43[1], true))
		PED::DELETE_PED(&uLocal_43[1]);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_46, true))
		PED::DELETE_PED(&pedLocal_46);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_47, true))
		PED::DELETE_PED(&pedLocal_47);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_48) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_48, true))
		PED::DELETE_PED(&pedLocal_48);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_49) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_49, true))
		PED::DELETE_PED(&pedLocal_49);

	if (!func_31())
	{
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 519.1906f, -2980.9941f, 5.0443f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 270.1911f);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_32) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_32, true))
		VEHICLE::DELETE_VEHICLE(&veLocal_32);

	if (ENTITY::DOES_ENTITY_EXIST(Global_97178[3]))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], true, false);
		VEHICLE::DELETE_VEHICLE(&Global_97178[3]);
	}

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_33) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(veLocal_33, true))
		VEHICLE::DELETE_VEHICLE(&veLocal_33);

	STREAMING::REMOVE_ANIM_DICT("cellphone@str");
	STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	MISC::CLEAR_AREA(889.5f, -1553.8f, 30f, 150f, true, false, false, false);
	return;
}

void func_126() // Hash - 0x80FE12FC ^0x98237011
{
	if (HUD::DOES_BLIP_EXIST(blLocal_58))
		HUD::REMOVE_BLIP(&blLocal_58);

	if (HUD::DOES_BLIP_EXIST(blLocal_59))
		HUD::REMOVE_BLIP(&blLocal_59);

	if (HUD::DOES_BLIP_EXIST(blLocal_60))
		HUD::REMOVE_BLIP(&blLocal_60);

	if (HUD::DOES_BLIP_EXIST(blLocal_61))
		HUD::REMOVE_BLIP(&blLocal_61);

	return;
}

void func_127() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_128();
	return;
}

void func_128() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_129() // Hash - 0xC8F3EE9E ^0x6678B655
{
	func_151();

	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
	
		iLocal_305 = 0;
		iLocal_314 = 0;
		iLocal_469 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
		PLAYER::SET_MAX_WANTED_LEVEL(5);
		STREAMING::REMOVE_ANIM_DICT("cellphone@str");
		STREAMING::REMOVE_ANIM_DICT("misscarsteal4@director_grip");
	
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
	
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 5f, 4);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}

	if (iLocal_62 == 1)
	{
		func_150(&uLocal_137, 3, 0, "LESTER", 0, 1);
	
		if (func_14() == 0)
			func_150(&uLocal_137, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	
		if (func_14() == 1)
			func_150(&uLocal_137, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	
		if (func_14() == 2)
			func_150(&uLocal_137, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	
		iLocal_62 = 2;
	}

	if (iLocal_62 == 2)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (func_14() == 0)
			{
				if (func_136(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT1", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_62 = 3;
				}
			}
		
			if (func_14() == 1)
			{
				if (func_136(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT3", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_62 = 3;
				}
			}
		
			if (func_14() == 2)
			{
				if (func_136(&uLocal_137, 12, "FHPBAUD", "FHPB_CHAT2", 7, 1, 0, 0, false))
				{
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
					SYSTEM::SETTIMERA(0);
					iLocal_62 = 3;
				}
			}
		}
	}

	if (iLocal_62 == 3)
	{
		if (!HUD::DOES_BLIP_EXIST(blLocal_59))
			if (!func_135())
				if (SYSTEM::TIMERA() > 10500)
					blLocal_59 = func_133(fLocal_116, true);
	
		if (func_135())
			iLocal_62 = 4;
	}

	if (iLocal_62 == 4)
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
				{
					if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_33))
					{
						if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), fLocal_116, 4f, 4f, 2f, true, true, 2))
						{
							if (func_131(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4f, 3, 0.5f, false, true, false))
							{
								AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_STOP");
							
								if (HUD::DOES_BLIP_EXIST(blLocal_59))
									HUD::REMOVE_BLIP(&blLocal_59);
							
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 5f, 4);
								func_130(false, -1);
								iLocal_62 = 0;
								iLocal_28 = 5;
							}
						}
					}
				}
			}
		}
	}

	return;
}

void func_130(BOOL bParam0, int iParam1) // Hash - 0x3DD767FD ^0x3DD767FD
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

BOOL func_131(Vehicle veParam0, float fParam1, int iParam2, float fParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x60473011 ^0x5B80F12B
{
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ACCELERATE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_DUCK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_MOVE_UD, true);

	if (bParam5)
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_EXIT, true);

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);

	if (!bParam6)
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACK, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ATTACKRIGHT, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_AIM, true);
	}

	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HORN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_NEXT_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PREV_RADIO, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_FRONT_BRAKE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PUSHBIKE_PEDAL, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ATTACK, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_ROLL_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_YAW_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_UNDERCARRIAGE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_NEXT_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_PREV_WEAPON, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_SELECT_TARGET_RIGHT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_VERTICAL_FLIGHT_MODE, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_FLY_BOOST, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_ASCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_DESCEND, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_LR, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_PITCH_UD, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_UP, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_THROTTLE_DOWN, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_LEFT, true);
	PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SUB_TURN_HARD_RIGHT, true);
	CAM::DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE();
	func_132(veParam0);

	if (MISC::GET_GAME_TIMER() - Global_29 > 500)
		VEHICLE::BRING_VEHICLE_TO_HALT(veParam0, fParam1, iParam2, bParam4);

	Global_29 = MISC::GET_GAME_TIMER();

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (MISC::ABSF(ENTITY::GET_ENTITY_SPEED(veParam0)) <= fParam3)
			return true;

	return false;
}

void func_132(Vehicle veParam0) // Hash - 0x94E8CB0B ^0x47923A23
{
	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		if (VEHICLE::GET_HAS_ROCKET_BOOST(veParam0))
			if (VEHICLE::IS_ROCKET_BOOST_ACTIVE(veParam0))
				VEHICLE::SET_ROCKET_BOOST_ACTIVE(veParam0, false);

	return;
}

Blip func_133(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_134(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

BOOL func_135() // Hash - 0x6FD1B5DA ^0x6FD1B5DA
{
	if (Global_21725 == 0)
		return true;

	return false;
}

BOOL func_136(var uParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8) // Hash - 0xB2BF6D68 ^0xB2BF6D68
{
	func_149(uParam0, iParam1, sParam2, iParam6, iParam7, 0);
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
	return func_137(sParam3, iParam4, bParam8);
}

BOOL func_137(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_128();
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
	
		if (func_148(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_147();
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
				func_146();
			
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
			
				if (func_145())
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
		
			if (func_144())
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
		
			func_143();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_142();
		func_138();
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
		func_128();
	}

	return 0;
}

void func_138() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_139())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_139() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_141())
		return false;

	if (func_140(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_140(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_86(plParam0, 20);
}

Player func_141() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_142() // Hash - 0x14F1286F ^0x3A886F8D
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

void func_143() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_144() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_145() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_146() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_16(14))
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
		Global_20383 = func_14();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_147() // Hash - 0xE29A2995 ^0x64BCC3F5
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

BOOL func_148(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_149(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_150(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

void func_151() // Hash - 0x84CFA9C ^0x731C4C05
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
	{
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
		{
			if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_33))
			{
				if (func_156("HELP_1"))
					HUD::CLEAR_HELP(true);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_58))
					HUD::REMOVE_BLIP(&blLocal_58);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_61))
				{
					if (iLocal_395 == 1)
						if (MISC::GET_GAME_TIMER() < iLocal_109 + 7500)
							HUD::CLEAR_PRINTS();
				
					HUD::REMOVE_BLIP(&blLocal_61);
				}
			
				if (iLocal_28 == 4)
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_469 == 0)
						{
							AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_LOST");
							iLocal_469 = 1;
						}
					
						if (iLocal_314 == 1)
						{
							if (MISC::GET_GAME_TIMER() < iLocal_110 + 7500)
								HUD::CLEAR_PRINTS();
						
							iLocal_314 = 0;
						}
					
						if (iLocal_62 > 3)
						{
							if (!HUD::DOES_BLIP_EXIST(blLocal_59))
								blLocal_59 = func_133(fLocal_116, true);
						
							if (iLocal_305 == 0)
							{
								if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
								{
									func_155("GOD_2", 7500, 1);
									iLocal_305 = 1;
								}
							}
						}
					}
					else
					{
						if (HUD::DOES_BLIP_EXIST(blLocal_59))
							HUD::REMOVE_BLIP(&blLocal_59);
					
						if (iLocal_314 == 0)
						{
							HUD::CLEAR_PRINTS();
							func_155("GOD_4", 7500, -1);
							AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_COPS");
							iLocal_110 = MISC::GET_GAME_TIMER();
							iLocal_314 = 1;
							iLocal_469 = 0;
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_58))
					HUD::REMOVE_BLIP(&blLocal_58);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_59))
					HUD::REMOVE_BLIP(&blLocal_59);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_61))
					{
						blLocal_61 = func_153(veLocal_32, false, false);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_61, true);
					
						if (HUD::IS_MESSAGE_BEING_DISPLAYED())
							HUD::CLEAR_PRINTS();
					
						if (iLocal_395 == 0)
						{
							func_155("GOD_6", 7500, -1);
							iLocal_109 = MISC::GET_GAME_TIMER();
							iLocal_395 = 1;
						}
					
						if (!func_156("HELP_1"))
							func_152("HELP_1");
					}
				}
			}
		}
		else
		{
			if (HUD::DOES_BLIP_EXIST(blLocal_61))
				HUD::REMOVE_BLIP(&blLocal_61);
		
			if (HUD::DOES_BLIP_EXIST(blLocal_59))
				HUD::REMOVE_BLIP(&blLocal_59);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_58))
				{
					blLocal_58 = func_153(veLocal_33, false, false);
					HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, true);
				}
			}
		
			if (iLocal_315 == 0)
			{
				HUD::CLEAR_PRINTS();
				func_155("GOD_5", 7500, -1);
				iLocal_315 = 1;
			}
		}
	}

	return;
}

void func_152(char* sParam0) // Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

Blip func_153(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_154(veParam0, !bParam1, bParam2);
}

Blip func_154(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
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

void func_155(char* sParam0, int iParam1, int iParam2) // Hash - 0x8A76EF8E ^0x32DD2C0C
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
	return;
}

BOOL func_156(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_157() // Hash - 0xA1B8B0A3 ^0xA1B8B0A3
{
	if (iLocal_62 > 1)
		func_151();

	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
	
		iLocal_397 = 0;
		iLocal_398 = 0;
		iLocal_399 = 0;
		iLocal_400 = 0;
		iLocal_401 = 0;
		iLocal_402 = 0;
		iLocal_403 = 0;
		uLocal_404[0] = 0;
		uLocal_404[1] = 0;
		uLocal_407[0] = 0;
		uLocal_407[1] = 0;
		iLocal_410 = 0;
		iLocal_411 = 0;
		iLocal_412 = 0;
		iLocal_413 = 0;
		iLocal_414 = 0;
		iLocal_415 = 0;
		iLocal_416 = 0;
		iLocal_423 = 0;
		iLocal_424 = 0;
		iLocal_425 = 0;
		iLocal_426 = 0;
		iLocal_427 = 0;
		iLocal_428 = 0;
		iLocal_429 = 0;
		iLocal_430 = 0;
		iLocal_431 = 0;
		iLocal_432 = 0;
		uLocal_433[0] = 0;
		uLocal_433[1] = 0;
		uLocal_436[0] = 0;
		uLocal_436[1] = 0;
		uLocal_439[0] = 0;
		uLocal_439[1] = 0;
		uLocal_442[0] = 0;
		uLocal_442[1] = 0;
		uLocal_445[0] = 0;
		uLocal_445[1] = 0;
		uLocal_448[0] = 0;
		uLocal_448[1] = 0;
		uLocal_451[0] = 0;
		uLocal_451[1] = 0;
		iLocal_455 = 0;
		iLocal_458 = 0;
		uLocal_459[0] = 0;
		uLocal_462[0] = 0;
		uLocal_459[1] = 0;
		uLocal_462[1] = 0;
		iLocal_466 = 0;
		iLocal_467 = 0;
		iLocal_468 = 0;
		iLocal_482 = 0;
		iLocal_315 = 0;
		iLocal_316 = 0;
		iLocal_321 = 0;
		iLocal_387 = 0;
		iLocal_388 = 0;
		iLocal_389 = 0;
		iLocal_390 = 0;
		iLocal_391 = 0;
		iLocal_392 = 0;
		iLocal_393 = 0;
		iLocal_394 = 0;
		iLocal_395 = 0;
		iLocal_417 = 0;
		iLocal_465 = 0;
		iLocal_483 = 0;
		iLocal_487 = 0;
		iLocal_454 = 0;
		iLocal_109 = 0;
		iLocal_110 = 0;
	
		for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
		{
			uLocal_306[iLocal_63] = 0;
			uLocal_355[iLocal_63] = 0;
			uLocal_371[iLocal_63] = 0;
			uLocal_379[iLocal_63] = 0;
			uLocal_363[iLocal_63] = 0;
		}
	
		STREAMING::REQUEST_ANIM_DICT("cellphone@str");
		STREAMING::REQUEST_ANIM_DICT("misscarsteal4@director_grip");
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
		{
			if (!HUD::DOES_BLIP_EXIST(blLocal_58))
			{
				blLocal_58 = func_153(veLocal_33, false, false);
				HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, true);
			}
		}
	
		PLAYER::SET_MAX_WANTED_LEVEL(0);
	
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (!func_31())
				STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_34))
			{
				func_28(veLocal_34, -1, 1);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_34);
			}
			else
			{
				func_28(0, -1, 1);
			}
		}
	
		if (!CAM::IS_SCREEN_FADED_IN())
			CAM::DO_SCREEN_FADE_IN(800);
	
		AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_START");
		MISC::CLEAR_AREA(43.5f, -615.8f, 32.4f, 50f, true, false, false, false);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}

	if (iLocal_62 == 1)
	{
		if (iLocal_465 == 0)
		{
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
			{
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
				func_155("GOD_1", 7500, 1);
				iLocal_465 = 1;
			}
		}
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
			{
				AUDIO::TRIGGER_MUSIC_EVENT("FHPRB_TRUCK");
			
				if (HUD::DOES_BLIP_EXIST(blLocal_58))
					HUD::REMOVE_BLIP(&blLocal_58);
			
				func_158(656, false);
				PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
				iLocal_62 = 2;
			}
		}
	}

	if (iLocal_62 == 2)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
			{
				if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_33))
				{
					if (func_156("HELP_1"))
						HUD::CLEAR_HELP(true);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_58))
						HUD::REMOVE_BLIP(&blLocal_58);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_61))
						HUD::REMOVE_BLIP(&blLocal_61);
				
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(fLocal_119, uLocal_132, true) < 100f)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_316 == 1)
							{
								if (MISC::GET_GAME_TIMER() < iLocal_110 + 7500)
								{
									HUD::CLEAR_PRINTS();
									iLocal_316 = 0;
								}
							}
						
							if (iLocal_417 == 0)
							{
								RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
								func_155("GOD_7", 7500, -1);
								iLocal_417 = 1;
							}
						}
						else if (iLocal_316 == 0)
						{
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 8f, 4);
							AUDIO::PLAY_POLICE_REPORT("SCRIPTED_SCANNER_REPORT_BS_PREP_B_01", 0f);
							iLocal_110 = MISC::GET_GAME_TIMER();
							func_155("GOD_4", 7500, -1);
							iLocal_316 = 1;
						}
					}
					else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						iLocal_62 = 0;
						iLocal_28 = 4;
					}
				}
				else
				{
					if (HUD::DOES_BLIP_EXIST(blLocal_58))
						HUD::REMOVE_BLIP(&blLocal_58);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_61))
						{
							blLocal_61 = func_153(veLocal_32, false, false);
							HUD::SET_BLIP_AS_FRIENDLY(blLocal_61, true);
						
							if (HUD::IS_MESSAGE_BEING_DISPLAYED())
								HUD::CLEAR_PRINTS();
						
							if (iLocal_395 == 0)
							{
								func_155("GOD_6", 7500, -1);
								iLocal_395 = 1;
							}
						
							if (!func_156("HELP_1"))
								func_152("HELP_1");
						}
					}
				}
			}
			else
			{
				if (HUD::DOES_BLIP_EXIST(blLocal_61))
					HUD::REMOVE_BLIP(&blLocal_61);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
				{
					if (!HUD::DOES_BLIP_EXIST(blLocal_58))
					{
						blLocal_58 = func_153(veLocal_33, false, false);
						HUD::SET_BLIP_AS_FRIENDLY(blLocal_58, true);
					}
				}
			
				if (iLocal_315 == 0)
				{
					HUD::CLEAR_PRINTS();
					func_155("GOD_5", 7500, -1);
					iLocal_315 = 1;
				}
			}
		}
	}

	return;
}

void func_158(int iParam0, BOOL bParam1) // Hash - 0x4EE5C84A ^0x4EE5C84A
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

void func_159() // Hash - 0x56C2FC91 ^0xC2F16EF
{
	if (iLocal_62 == 0)
	{
		if (iLocal_304 == 1)
		{
			func_35();
			iLocal_304 = 0;
		}
	
		func_182();
		func_121();
	
		if (!CAM::IS_SCREEN_FADED_IN())
		{
			STREAMING::LOAD_SCENE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
			CAM::DO_SCREEN_FADE_IN(800);
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(Global_97178[3]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_97178[3], false))
			{
				if (VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(Global_97178[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], true, true);
					func_161(1.0095f, -631.9655f, 34.7259f, 349.0681f, 0, 145);
				}
			
				if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(Global_97178[3])) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(Global_97178[3])) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(Global_97178[3])) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(Global_97178[3])))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_97178[3], true, true);
					func_161(49.0052f, -599.5534f, 30.6299f, 158.5544f, 0, 145);
				}
			}
		}
	
		func_160(79);
		iLocal_396 = 1;
		iLocal_62 = 1;
	}

	if (iLocal_62 == 1)
	{
		iLocal_62 = 0;
		iLocal_28 = 3;
	}

	return;
}

void func_160(int iParam0) // Hash - 0xDF00B6A0 ^0xDF00B6A0
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

void func_161(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Hash - 0xFAD52877 ^0x5B3475CA
{
	var unk;
	float num;

	if (ENTITY::DOES_ENTITY_EXIST(Global_104212.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_104212.f_4, false))
		{
			if (func_181(24) != Global_104212.f_4)
			{
				if (iParam4 == 1)
				{
					if (func_178(ENTITY::GET_ENTITY_COORDS(Global_104212.f_4, true), iParam5, &unk, &num))
					{
						fParam0 = { unk };
						fParam3 = num;
					}
				}
			
				func_162(Global_104212.f_4, fParam0, fParam3, 24, false);
			}
		}
	}

	return;
}

void func_162(Vehicle veParam0, var uParam1, var uParam2, var uParam3, float fParam4, int iParam5, BOOL bParam6) // Hash - 0x29B4C4C8 ^0x31C8EC4C
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
	
		func_177(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_41(veParam0, &unk);
	
		if (func_112(uParam1, 0f, 0f, 0f, false))
		{
			uParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("VEHICLE_GEN_CONTROLLER"))
				Global_78336 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_175(iParam5, &unk, uParam1, fParam4, func_63(veParam0));
		func_163(iParam5, veParam0, 0);
	}

	return;
}

void func_163(int iParam0, Vehicle veParam1, int iParam2) // Hash - 0x9860D273 ^0xD433FB9F
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
				Global_113648.f_32751.f_4801 = func_164();
		
			if (veParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_181(iParam0);
				
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

var func_164() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_174(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_173(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_172(&unk, CLOCK::GET_CLOCK_HOURS());
	func_167(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_166(&unk, CLOCK::GET_CLOCK_MONTH());
	func_165(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_165(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_166(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_167(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_171(*uParam0);
	num2 = func_169(*uParam0);

	if (iParam1 < 1 || iParam1 > func_168(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_168(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_169(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_170(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_171(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_172(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_173(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_174(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Hash - 0xE596DE1C ^0xAEF9731A
{
	if (func_73(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_176(iParam0);
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

void func_176(int iParam0) // Hash - 0x64A608A0 ^0xF3C031DC
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

void func_177(int iParam0) // Hash - 0x6203AFCC ^0x6203AFCC
{
	iParam0 != 24 && iParam0 != 25;
	func_176(iParam0);
	func_66(iParam0, false);
	return;
}

BOOL func_178(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5) // Hash - 0x2129E9A2 ^0x2129E9A2
{
	int num;

	num = func_179(uParam0, iParam3, 1);

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

int func_179(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Hash - 0xF069BA05 ^0x35D3817B
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
				if (func_180(i) || iParam4 == 0)
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

BOOL func_180(int iParam0) // Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

Vehicle func_181(int iParam0) // Hash - 0x220835E3 ^0xF13BEB49
{
	if (iParam0 == -1)
		return 0;

	return Global_77348.f_139[iParam0];
}

void func_182() // Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_94859 = 1;
	return;
}

void func_183() // Hash - 0xD6A79173 ^0xD4BD627D
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0.01f);
	iLocal_53 = PED::ADD_SCENARIO_BLOCKING_AREA(861.6f, -1599.7f, 27.9f, 961.8f, -1476.4f, 49.7f, false, true, true, true);
	iLocal_54 = PED::ADD_SCENARIO_BLOCKING_AREA(851.2f, -1598.2f, 29.7f, 855.7f, -1587.1f, 33f, false, true, true, true);
	iLocal_55 = PED::ADD_SCENARIO_BLOCKING_AREA(859.4f, -1569.6f, 32.3f, 865.4f, -1561f, 28.7f, false, true, true, true);
	iLocal_56 = PED::ADD_SCENARIO_BLOCKING_AREA(939f, -1576.8f, 33f, 943.8f, -1571.3f, 28.9f, false, true, true, true);
	iLocal_51 = PED::ADD_SCENARIO_BLOCKING_AREA(5.4f, -588f, 39.1f, 57.4f, -678.8f, 25.4f, false, true, true, true);
	iLocal_52 = PED::ADD_SCENARIO_BLOCKING_AREA(50.9f, -641.6f, 37.7f, 81.1f, -608.4f, 29.5f, false, true, true, true);

	if (func_30())
	{
		if (Global_94858 == 1)
		{
			func_185(28.4065f, -608.9371f, 30.6293f, 70.7778f, 1, 0);
			iLocal_483 = 1;
			iLocal_304 = 1;
			iLocal_62 = 0;
			iLocal_28 = 5;
		}
		else if (func_184() == 0)
		{
			if (func_120() && func_117(7f, 7f, 7f, 1))
				func_185(818.8139f, -1610.4055f, 30.7951f, 264.412f, 1, 0);
			else
				func_185(825.5603f, -1605.8247f, 30.9548f, 312.5221f, 1, 0);
		
			iLocal_304 = 1;
			iLocal_483 = 1;
			iLocal_62 = 0;
			iLocal_28 = 3;
		}
	}
	else if (func_220(false))
	{
		iLocal_304 = 1;
		iLocal_483 = 1;
		iLocal_62 = 0;
		iLocal_28 = 3;
	}
	else
	{
		iLocal_62 = 0;
		iLocal_28 = 2;
	}

	return;
}

int func_184() // Hash - 0x8A8720E2 ^0x75007B29
{
	if (!Global_100681 == 10 && !Global_100681 == 9)
		return 0;

	return Global_100681.f_2;
}

void func_185(float fParam0, float fParam1, float fParam2, float fParam3, int iParam4, int iParam5) // Hash - 0xF88978B9 ^0xA249DBD8
{
	if (func_30())
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
	
		func_29(1);
	}

	return;
}

void func_186() // Hash - 0x897F847A ^0x897F847A
{
	if (!func_30())
		iLocal_28 = 1;
	else
		iLocal_28 = 1;

	return;
}

void func_187() // Hash - 0xE2EE1FE6 ^0xA4697348
{
	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_49))
	{
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 150f)
		{
			STREAMING::REQUEST_MODEL(joaat("S_M_M_SECURITY_01"));
		
			if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_SECURITY_01")))
			{
				pedLocal_49 = PED::CREATE_PED(PED_TYPE_MISSION, joaat("S_M_M_SECURITY_01"), 64.904f, -617.9949f, 30.7028f, 223.555f, true, true);
				PED::SET_PED_CONFIG_FLAG(pedLocal_49, 324, true);
			}
		
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("S_M_M_SECURITY_01"));
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_49))
	{
		if (!PED::IS_PED_INJURED(pedLocal_49))
		{
			if (TASK::DOES_SCENARIO_EXIST_IN_AREA(65.2f, -617.2f, 30.8f, 5f, false))
			{
				if (iLocal_456 == 0)
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(pedLocal_49))
						TASK::CLEAR_PED_TASKS(pedLocal_49);
					else
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_49);
				
					TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_49, 65.2f, -617.2f, 31f, 2f, 0);
					PED::SET_PED_KEEP_TASK(pedLocal_49, true);
					iLocal_113 = MISC::GET_GAME_TIMER();
					iLocal_456 = 1;
				}
				else if (MISC::GET_GAME_TIMER() > iLocal_113 + 5000)
				{
					if (!PED::IS_PED_USING_ANY_SCENARIO(pedLocal_49))
						iLocal_456 = 0;
				}
			}
		
			if (func_189(PLAYER::PLAYER_PED_ID(), pedLocal_49, true) < 20f)
			{
				if (iLocal_421 == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_49, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
					iLocal_421 = 1;
				}
			}
			else if (iLocal_421 == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_49, PLAYER::PLAYER_PED_ID(), 1, 0, 2);
				iLocal_421 = 0;
			}
		}
	}

	if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 45f, -616.2f, 30.8f, true) < 50f)
	{
		if (iLocal_457 == 0)
		{
			hLocal_114 = 498972213;
			hLocal_115 = -512924631;
			OBJECT::ADD_DOOR_TO_SYSTEM(hLocal_114, joaat("PROP_SEC_BARRIER_LD_01A"), 61f, -633f, 32f, true, true, false);
			OBJECT::ADD_DOOR_TO_SYSTEM(hLocal_115, joaat("PROP_SEC_BARRIER_LD_01A"), 66f, -618f, 32f, true, true, false);
			iLocal_457 = 1;
		}
	
		if (iLocal_457 == 1)
		{
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				if (fLocal_119 > 35f)
				{
					if (fLocal_135 < 1f)
						fLocal_135 = fLocal_135 + 0.02f;
					else
						fLocal_135 = 1f;
				
					if (fLocal_135 <= 1f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_114, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_115, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_114, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_115, 4, false, true);
						iLocal_422 = 0;
					}
				}
			
				if (fLocal_119 < 35f)
				{
					if (fLocal_135 > 0f)
						fLocal_135 = fLocal_135 - 0.02f;
					else
						fLocal_135 = 0f;
				
					if (fLocal_135 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_114, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_115, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_114, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_115, 4, false, true);
						iLocal_422 = 0;
					}
				}
			}
			else if (iLocal_422 == 0)
			{
				if (fLocal_119 < 35f)
				{
					if (fLocal_135 > 0f)
						fLocal_135 = fLocal_135 - 0.02f;
					else
						fLocal_135 = 0f;
				
					if (fLocal_135 >= 0f)
					{
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_114, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(hLocal_115, fLocal_135, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_114, 4, false, true);
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(hLocal_115, 4, false, true);
						iLocal_422 = 1;
					}
				}
			}
		}
	
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 62.901512f, -638.6329f, 29.918798f, 70.78919f, -617.1338f, 36.917885f, 10.75f, false, true, 0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_49))
			{
				if (!PED::IS_PED_INJURED(pedLocal_49))
				{
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
					{
						if (iLocal_419 == 0)
						{
							if (iLocal_418 == 0)
							{
								func_150(&uLocal_137, 4, pedLocal_49, "FHPBSecGuard", 0, 1);
							
								if (func_188(&uLocal_137, "FHPBAUD", "FHPB_CHAT20", 7, 0, 0, 0))
									iLocal_418 = 1;
							}
						}
						else if (iLocal_420 == 0)
						{
							func_150(&uLocal_137, 4, pedLocal_49, "FHPBSecGuard", 0, 1);
						
							if (func_188(&uLocal_137, "FHPBAUD", "FHPB_CHAT22", 7, 0, 0, 0))
								iLocal_420 = 1;
						}
					}
					else if (iLocal_419 == 0)
					{
						func_150(&uLocal_137, 4, pedLocal_49, "FHPBSecGuard", 0, 1);
					
						if (func_188(&uLocal_137, "FHPBAUD", "FHPB_CHAT21", 7, 0, 0, 0))
							iLocal_419 = 1;
					}
				}
			}
		}
	}

	return;
}

BOOL func_188(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_149(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_137(sParam2, iParam3, false);
}

float func_189(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

void func_190() // Hash - 0xC72E0FE2 ^0xCA2F751C
{
	int weaponHash;

	if (!HUD::IS_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_194() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
		{
			if (iLocal_28 == 3)
			{
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && iLocal_31 == 0)
				{
					if (func_14() == 0)
					{
						if (iLocal_29 == 1)
						{
							if (iLocal_392 == 0)
							{
								if (func_192() && func_191())
								{
									if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEE5", 7, 0, 0, 0))
									{
										iLocal_112 = MISC::GET_GAME_TIMER();
										iLocal_392 = 1;
									}
								}
							}
						}
					
						if (iLocal_29 == 1)
							if (iLocal_392 == 1 && MISC::GET_GAME_TIMER() > iLocal_112 + 7000)
								if (func_192() && func_191())
									if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
										iLocal_112 = MISC::GET_GAME_TIMER();
					}
				
					if (iLocal_29 == 2)
					{
						if (iLocal_430 == 0)
						{
							if (func_192())
							{
								if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
								{
									iLocal_95 = MISC::GET_GAME_TIMER();
									iLocal_430 = 1;
								}
							}
						}
					}
				}
				else if (iLocal_31 == 2 && iLocal_29 == 1)
				{
					if (iLocal_455 == 0)
					{
						if (func_192() && func_191())
						{
							if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
							{
								iLocal_108 = MISC::GET_GAME_TIMER();
								iLocal_455 = 1;
							}
						}
					}
					else if (MISC::GET_GAME_TIMER() > iLocal_108 + 8000)
					{
						if (func_192() && func_191())
							if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEE6", 7, 0, 0, 0))
								iLocal_108 = MISC::GET_GAME_TIMER();
					}
				}
			
				if (iLocal_29 == 4)
				{
					if (iLocal_391 == 0)
					{
						func_127();
					
						if (func_192())
						{
							WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
						
							if (weaponHash != joaat("WEAPON_UNARMED") && weaponHash != 0)
							{
								if (func_188(&uLocal_137, "SOL1AUD", "SOL1_ARM3", 7, 0, 0, 0))
								{
									iLocal_77 = MISC::GET_GAME_TIMER();
									iLocal_387 = 1;
									iLocal_391 = 1;
								}
							}
							else
							{
								iLocal_77 = MISC::GET_GAME_TIMER();
								iLocal_387 = 1;
								iLocal_391 = 1;
							}
						}
					}
				
					if (iLocal_391 == 1)
					{
						if (iLocal_387 == 0)
						{
							iLocal_77 = MISC::GET_GAME_TIMER();
							iLocal_387 = 1;
						}
					
						if (iLocal_387 == 1)
							if (MISC::GET_GAME_TIMER() > iLocal_77 + 9000)
								if (func_192())
									if (func_188(&uLocal_137, "SOL1AUD", "SOL1_PAN3", 7, 0, 0, 0))
										iLocal_387 = 0;
					}
				}
			
				if (iLocal_29 == 3)
				{
					if (iLocal_427 == 1)
						if (iLocal_389 == 0)
							if (iLocal_390 == 1)
								if (func_192())
									if (func_188(&uLocal_137, "SOL1AUD", "SOL1_STEAL3", 7, 0, 0, 0))
										iLocal_389 = 1;
				
					if (iLocal_388 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
								{
									if (func_192())
									{
										if (func_188(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
										{
											iLocal_78 = MISC::GET_GAME_TIMER();
											iLocal_389 = 1;
										}
									}
								}
							}
						}
					}
				
					if (MISC::GET_GAME_TIMER() > iLocal_78 + 10000)
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, false))
									if (func_192())
										if (func_188(&uLocal_137, "SOL1AUD", "SOL1_OUT3", 7, 0, 0, 0))
											iLocal_78 = MISC::GET_GAME_TIMER();
				
					if (iLocal_428 == 1)
						if (iLocal_429 == 0)
							if (func_192())
								if (func_188(&uLocal_137, "SOL1AUD", "SOL1_SEC3", 7, 0, 0, 0))
									iLocal_429 = 1;
				}
			}
		}
	}

	return;
}

BOOL func_191() // Hash - 0x44CC4A25 ^0xA8A0AE1D
{
	if (func_14() == 0)
	{
		func_150(&uLocal_137, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		return 1;
	}

	if (func_14() == 1)
	{
		func_150(&uLocal_137, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		return 1;
	}

	if (func_14() == 2)
	{
		func_150(&uLocal_137, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
		return 1;
	}

	return 0;
}

BOOL func_192() // Hash - 0xB538C18B ^0xC793370C
{
	Ped ped;

	for (iLocal_66 = 0; iLocal_66 <= 6; iLocal_66 = iLocal_66 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_66]))
		{
			if (!PED::IS_PED_INJURED(uLocal_35[iLocal_66]))
			{
				ped = func_193(PLAYER::PLAYER_PED_ID(), hLocal_302, 0, 0, -1);
			
				if (ENTITY::DOES_ENTITY_EXIST(ped))
					!PED::IS_PED_INJURED(ped);
			
				if (ped == uLocal_35[iLocal_66] && func_189(PLAYER::PLAYER_PED_ID(), ped, true) < 15f)
				{
					func_150(&uLocal_137, 5, uLocal_35[iLocal_66], "CONSTRUCTION3", 0, 1);
					return true;
				}
			}
		}
	}

	return false;
}

Ped func_193(Ped pedParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Hash - 0x38C2AABD ^0xDBD258BB
{
	int sizeAndPeds;
	int i;

	sizeAndPeds = 16;
	i = 0;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		PED::GET_PED_NEARBY_PEDS(pedParam0, &sizeAndPeds, iParam4);
	
		for (i = 0; i <= sizeAndPeds - 1; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i]))
				if (!PED::IS_PED_INJURED(sizeAndPeds[i]))
					if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(sizeAndPeds[i]) == hParam1)
						if (iParam2 <= 0)
							if (iParam3 == 1)
								if (ENTITY::IS_ENTITY_ON_SCREEN(sizeAndPeds[i]))
									return sizeAndPeds[i];
							else
								return sizeAndPeds[i];
						else if (i + iParam2 <= sizeAndPeds - 1)
							if (ENTITY::DOES_ENTITY_EXIST(sizeAndPeds[i + iParam2]))
								if (!PED::IS_PED_INJURED(sizeAndPeds[i + iParam2]))
									if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(sizeAndPeds[i + iParam2]) == hParam1)
										if (iParam3 == 1)
											if (ENTITY::IS_ENTITY_ON_SCREEN(sizeAndPeds[i + iParam2]))
												return sizeAndPeds[i + iParam2];
										else
											return sizeAndPeds[i + iParam2];
		}
	}

	return 0;
}

BOOL func_194() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_195() // Hash - 0xB0BB1CE9 ^0x8663328E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (WEAPON::IS_PED_CURRENT_WEAPON_SILENCED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		else
			PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);

	func_202();

	if (uLocal_404[0])
	{
		if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
		{
			if (uLocal_433[0] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_43[0], PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_433[0] = 1;
			}
		
			if (uLocal_433[0] == 1)
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_43[0], SCRIPT_TASK_LOOK_AT_ENTITY) != 0 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_43[0], SCRIPT_TASK_LOOK_AT_ENTITY) != 1)
					uLocal_433[0] = 0;
		}
		else if (uLocal_433[0] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_43[0], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			uLocal_433[0] = 0;
		}
	}

	if (uLocal_404[1])
	{
		if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
		{
			if (uLocal_433[1] == 0)
			{
				TASK::TASK_LOOK_AT_ENTITY(uLocal_43[1], PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_433[1] = 1;
			}
		
			if (uLocal_433[1] == 1)
				if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_43[1], SCRIPT_TASK_LOOK_AT_ENTITY) != 0 || TASK::GET_SCRIPT_TASK_STATUS(uLocal_43[1], SCRIPT_TASK_LOOK_AT_ENTITY) != 1)
					uLocal_433[1] = 0;
		}
		else if (uLocal_433[1] == 1)
		{
			TASK::TASK_LOOK_AT_ENTITY(uLocal_43[1], PLAYER::PLAYER_PED_ID(), 1, 0, 2);
			uLocal_433[1] = 0;
		}
	}

	if (uLocal_404[0] && uLocal_404[1])
	{
		if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true))
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
		else
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}
	else
	{
		if (uLocal_404[0] && !uLocal_404[1])
		{
			iLocal_399 = 1;
			iLocal_400 = 0;
		}
	
		if (uLocal_404[1] && !uLocal_404[0])
		{
			iLocal_399 = 0;
			iLocal_400 = 1;
		}
	}

	switch (iLocal_31)
	{
		case 0:
			if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
			{
				if (!TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
					TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", true);
			
				if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_43[0]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(uLocal_43[0]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(863.1551f, -1564.5721f, 29.3231f, 5f, true))
								{
									uLocal_105[0] = MISC::GET_GAME_TIMER();
								
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_43[0]))
									{
										if (uLocal_462[0] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_43[0], 863.1551f, -1564.5721f, 29.3231f, 5f, 0);
											uLocal_459[0] = 0;
											uLocal_462[0] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_105[0] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_43[0], true), 863.1551f, -1564.5721f, 29.3231f, true) > 3f)
									{
										if (uLocal_459[0] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[0], 863.1551f, -1564.5721f, 29.3231f, 1f, -1, 1048576000, 0, 1193033728);
											uLocal_462[0] = 0;
											uLocal_459[0] = 1;
										}
									}
								}
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_43[1]))
						{
							if (!PED::IS_PED_BEING_STEALTH_KILLED(uLocal_43[1]))
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(940.2881f, -1573.8774f, 29.3866f, 5f, true))
								{
									uLocal_105[1] = MISC::GET_GAME_TIMER();
								
									if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(uLocal_43[1]))
									{
										if (uLocal_462[1] == 0)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_43[1], 940.2881f, -1573.8774f, 29.3866f, 5f, 0);
											uLocal_459[1] = 0;
											uLocal_462[1] = 1;
										}
									}
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_105[1] + 2000)
								{
									if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(uLocal_43[1], true), 940.2881f, -1573.8774f, 29.3866f, true) > 3f)
									{
										if (uLocal_459[1] == 0)
										{
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[1], 940.2881f, -1573.8774f, 29.3866f, 1f, -1, 1048576000, 0, 1193033728);
											uLocal_462[1] = 0;
											uLocal_459[1] = 1;
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_43[0]))
				{
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
					{
						if (func_201(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_200(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 100f) || PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
								{
									if (uLocal_451[0] == 0)
									{
										if (!PED::IS_PED_FACING_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
											else
												TASK::CLEAR_PED_TASKS(uLocal_43[0]);
										
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_43[0], PLAYER::PLAYER_PED_ID(), 5000);
											uLocal_102[0] = MISC::GET_GAME_TIMER();
											func_199(uLocal_43[0]);
											uLocal_451[0] = 1;
										}
									}
								
									if (uLocal_451[0] == 1)
										if (MISC::GET_GAME_TIMER() > uLocal_102[0] + 5000)
											uLocal_451[0] = 0;
								
									if (uLocal_407[0] == 0 && uLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_197(uLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 6);
											iLocal_82 = MISC::GET_GAME_TIMER();
											iLocal_403 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_82 + 15000)
										{
											func_197(uLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
											iLocal_82 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (uLocal_407[0] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_197(uLocal_43[0], "PROVOKE_GEBERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_197(uLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									
										if (uLocal_407[1] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_197(uLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = MISC::GET_GAME_TIMER();
												iLocal_411 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_89 + 15000)
											{
												func_197(uLocal_43[0], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
												iLocal_89 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
			{
				if (!PED::IS_PED_INJURED(uLocal_43[1]))
				{
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 15f)
					{
						if (func_201(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_200(0))
						{
							if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 100f))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
								{
									if (uLocal_451[1] == 0)
									{
										if (!PED::IS_PED_FACING_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID(), 45f))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
											else
												TASK::CLEAR_PED_TASKS(uLocal_43[1]);
										
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(uLocal_43[1], PLAYER::PLAYER_PED_ID(), 5000);
											uLocal_102[1] = MISC::GET_GAME_TIMER();
											func_199(uLocal_43[1]);
											uLocal_451[1] = 1;
										}
									}
								
									if (uLocal_451[1] == 1)
										if (MISC::GET_GAME_TIMER() > uLocal_102[1] + 5000)
											uLocal_451[1] = 0;
								
									if (uLocal_407[0] == 0 && uLocal_407[1] == 0)
									{
										if (iLocal_403 == 0)
										{
											func_197(uLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
											iLocal_82 = MISC::GET_GAME_TIMER();
											iLocal_403 = 1;
										}
										else if (MISC::GET_GAME_TIMER() > iLocal_82 + 15000)
										{
											func_197(uLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
											iLocal_82 = MISC::GET_GAME_TIMER();
										}
									}
									else
									{
										if (uLocal_407[1] == 1)
										{
											if (iLocal_410 == 0)
											{
												func_197(uLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_88 = MISC::GET_GAME_TIMER();
												iLocal_410 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_88 + 15000)
											{
												func_197(uLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_88 = MISC::GET_GAME_TIMER();
											}
										}
									
										if (uLocal_407[0] == 1)
										{
											if (iLocal_411 == 0)
											{
												func_197(uLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 6);
												iLocal_89 = MISC::GET_GAME_TIMER();
												iLocal_411 = 1;
											}
											else if (MISC::GET_GAME_TIMER() > iLocal_89 + 15000)
											{
												func_197(uLocal_43[1], "PROVOKE_GENERIC", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_89 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_483 == 0)
				iLocal_483 = 1;
		
			if (func_196() || iLocal_398 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
				{
					if (!PED::IS_PED_INJURED(uLocal_43[0]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
						{
							uLocal_99[0] = MISC::GET_GAME_TIMER();
							uLocal_445[0] = 1;
						
							if (uLocal_442[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
									TASK::CLEAR_PED_TASKS(uLocal_43[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
							
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_43[0], BF_CanCharge, true);
								TASK::TASK_COMBAT_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_199(uLocal_43[0]);
								uLocal_442[0] = 1;
							}
						}
						else if (uLocal_448[0] == 0)
						{
							if (uLocal_445[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
									TASK::CLEAR_PED_TASKS(uLocal_43[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
							
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_199(uLocal_43[0]);
								uLocal_448[0] = 1;
							}
						
							if (uLocal_445[0] == 1)
							{
								if (MISC::GET_GAME_TIMER() > uLocal_99[0] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
										TASK::CLEAR_PED_TASKS(uLocal_43[0]);
									else
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
								
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_199(uLocal_43[0]);
									uLocal_448[0] = 1;
								}
							}
						}
					}
				}
			
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
				{
					if (!PED::IS_PED_INJURED(uLocal_43[1]))
					{
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
						{
							uLocal_99[1] = MISC::GET_GAME_TIMER();
							uLocal_445[1] = 1;
						
							if (uLocal_442[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
									TASK::CLEAR_PED_TASKS(uLocal_43[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
							
								PED::SET_PED_COMBAT_ATTRIBUTES(uLocal_43[1], BF_CanCharge, true);
								TASK::TASK_COMBAT_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID(), 0, 16);
								func_199(uLocal_43[1]);
								uLocal_442[1] = 1;
							}
						}
						else if (uLocal_448[1] == 0)
						{
							if (uLocal_445[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
									TASK::CLEAR_PED_TASKS(uLocal_43[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
							
								TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
								func_199(uLocal_43[1]);
								uLocal_448[1] = 1;
							}
						
							if (uLocal_445[1] == 1)
							{
								if (MISC::GET_GAME_TIMER() > uLocal_99[1] + 500)
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
										TASK::CLEAR_PED_TASKS(uLocal_43[1]);
									else
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
								
									TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 3f, -1, 1048576000, 0, 1193033728);
									func_199(uLocal_43[1]);
									uLocal_448[1] = 1;
								}
							}
						}
					}
				}
			
				if (func_196())
				{
					if (iLocal_412 == 0)
					{
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) < 2)
						{
							PLAYER::SET_MAX_WANTED_LEVEL(5);
							PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_412 = 1;
						}
					}
				
					if (iLocal_399 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
								{
									func_197(uLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
									iLocal_87 = MISC::GET_GAME_TIMER();
									iLocal_401 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_87 + 7000)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
								{
									func_197(uLocal_43[0], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
									iLocal_87 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				
					if (iLocal_400 == 1)
					{
						if (iLocal_401 == 0)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
								{
									func_197(uLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = MISC::GET_GAME_TIMER();
									iLocal_401 = 1;
								}
							}
						}
						else if (MISC::GET_GAME_TIMER() > iLocal_87 + 7000)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f)
							{
								if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
								{
									func_197(uLocal_43[1], "GUN_COOL", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
									iLocal_87 = MISC::GET_GAME_TIMER();
								}
							}
						}
					}
				}
				else
				{
					if (iLocal_458 == 0)
					{
						pedLocal_50 = func_193(PLAYER::PLAYER_PED_ID(), joaat("COP"), 0, 0, 28);
					
						if (pedLocal_50 != 0)
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_50))
								if (!PED::IS_PED_INJURED(pedLocal_50))
									if (func_189(PLAYER::PLAYER_PED_ID(), pedLocal_50, true) < 35f)
										iLocal_458 = 1;
					}
				
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_458 == 0)
					{
						if (iLocal_399 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
									{
										func_197(uLocal_43[0], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = MISC::GET_GAME_TIMER();
										iLocal_402 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
									{
										func_197(uLocal_43[0], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 9);
										iLocal_86 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					
						if (iLocal_400 == 1)
						{
							if (iLocal_402 == 0)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
									{
										func_197(uLocal_43[1], "GENERIC_INSULT_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = MISC::GET_GAME_TIMER();
										iLocal_402 = 1;
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_86 + 7000)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
									{
										func_197(uLocal_43[1], "GENERIC_CURSE_HIGH", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
										iLocal_86 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				}
			}
		
			if (!func_196())
			{
				if (iLocal_414 == 0)
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 893.2f, -1556.5f, 30f, true) < 18f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_43[0]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_81 = MISC::GET_GAME_TIMER();
									iLocal_414 = 1;
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
						{
							if (!PED::IS_PED_INJURED(uLocal_43[1]))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									iLocal_81 = MISC::GET_GAME_TIMER();
									iLocal_414 = 1;
								}
							}
						}
					}
				}
			
				if (iLocal_398 == 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
					{
						if (!PED::IS_PED_INJURED(uLocal_43[0]))
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
								{
									if (uLocal_436[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
											TASK::CLEAR_PED_TASKS(uLocal_43[0]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
									
										TASK::TASK_GO_TO_ENTITY(uLocal_43[0], PLAYER::PLAYER_PED_ID(), -1, 1056964608, 1073741824, 1073741824, 0);
										func_199(uLocal_43[0]);
										uLocal_436[0] = 1;
									}
								
									uLocal_96[0] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_96[0] + 500)
								{
									if (uLocal_439[0] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
											TASK::CLEAR_PED_TASKS(uLocal_43[0]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
									
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[0], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_199(uLocal_43[0]);
										uLocal_439[0] = 1;
									}
								}
							}
							else if (uLocal_484[0] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[0]))
									TASK::CLEAR_PED_TASKS(uLocal_43[0]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[0]);
							
								TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_57, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_43[0], iLocal_57);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
								func_199(uLocal_43[0]);
								uLocal_484[0] = 1;
							}
						
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
											{
												func_197(uLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 1);
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_84 = MISC::GET_GAME_TIMER();
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_414 = 1;
												iLocal_397 = 1;
												uLocal_407[0] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
											{
												func_197(uLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
												iLocal_83 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
											{
												func_197(uLocal_43[0], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_84 + 7000)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 15f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[0]))
									{
										func_197(uLocal_43[0], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_01", 11);
										iLocal_84 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
					{
						if (!PED::IS_PED_INJURED(uLocal_43[1]))
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) > 4f)
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
								{
									if (uLocal_436[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
											TASK::CLEAR_PED_TASKS(uLocal_43[1]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
									
										TASK::TASK_GO_TO_ENTITY(uLocal_43[1], PLAYER::PLAYER_PED_ID(), -1, 1056964608, 1073741824, 1073741824, 0);
										func_199(uLocal_43[1]);
										uLocal_436[1] = 1;
									}
								
									uLocal_96[1] = MISC::GET_GAME_TIMER();
								}
								else if (MISC::GET_GAME_TIMER() > uLocal_96[1] + 500)
								{
									if (uLocal_439[1] == 0)
									{
										if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
											TASK::CLEAR_PED_TASKS(uLocal_43[1]);
										else
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
									
										TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(uLocal_43[1], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2f, -1, 1048576000, 0, 1193033728);
										func_199(uLocal_43[1]);
										uLocal_439[1] = 1;
									}
								}
							}
							else if (uLocal_484[1] == 0)
							{
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_43[1]))
									TASK::CLEAR_PED_TASKS(uLocal_43[1]);
								else
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_43[1]);
							
								TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
								TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
								TASK::TASK_STAND_STILL(0, 2000);
								TASK::SET_SEQUENCE_TO_REPEAT(iLocal_57, true);
								TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
								TASK::TASK_PERFORM_SEQUENCE(uLocal_43[1], iLocal_57);
								TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
								func_199(uLocal_43[1]);
								uLocal_484[1] = 1;
							}
						
							if (iLocal_454 == 0)
							{
								if (iLocal_431 == 0 || iLocal_403 == 1)
								{
									if (iLocal_397 == 0)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
											{
												func_197(uLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 9);
												iLocal_83 = MISC::GET_GAME_TIMER();
												iLocal_85 = MISC::GET_GAME_TIMER();
												iLocal_81 = MISC::GET_GAME_TIMER();
												iLocal_414 = 1;
												iLocal_397 = 1;
												uLocal_407[1] = 1;
											}
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_83 + 7000)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
											{
												func_197(uLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
												iLocal_83 = MISC::GET_GAME_TIMER();
											}
										}
									}
								}
								else if (iLocal_403 == 0)
								{
									if (iLocal_432 == 0)
									{
										if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 10f)
										{
											if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
											{
												func_197(uLocal_43[1], "PROVOKE_TRESPASS", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 8);
												iLocal_397 = 1;
												iLocal_432 = 1;
											}
										}
									}
								}
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_85 + 7000)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 10f)
								{
									if (!AUDIO::IS_AMBIENT_SPEECH_PLAYING(uLocal_43[1]))
									{
										func_197(uLocal_43[1], "FIGHT", "S_M_M_GENERICSECURITY_01_LATINO_MINI_02", 11);
										iLocal_85 = MISC::GET_GAME_TIMER();
									}
								}
							}
						}
					}
				
					if (iLocal_414 == 1)
						if (iLocal_454 == 0)
							if (MISC::GET_GAME_TIMER() > iLocal_81 + 22000)
								iLocal_454 = 1;
				
					if (iLocal_414 == 1)
					{
						if (iLocal_398 == 0)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_81 + 30000)
							{
								PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
								iLocal_398 = 1;
							}
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
						{
							if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, true))
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
									iLocal_398 = 1;
						
							if (func_189(PLAYER::PLAYER_PED_ID(), veLocal_33, true) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
									iLocal_398 = 1;
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
						if (!PED::IS_PED_INJURED(uLocal_43[0]))
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
										iLocal_398 = 1;
				
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
						if (!PED::IS_PED_INJURED(uLocal_43[1]))
							if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
								if (PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()))
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
										iLocal_398 = 1;
				}
			}
			break;
	}

	return;
}

BOOL func_196() // Hash - 0x2E3B5E73 ^0xA0E308D
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		for (iLocal_80 = 0; iLocal_80 <= 6; iLocal_80 = iLocal_80 + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_80]))
				if (!PED::IS_PED_INJURED(uLocal_35[iLocal_80]))
					if (func_201(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_200(0))
						if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_80], PLAYER::PLAYER_PED_ID()))
							return true;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
			if (!PED::IS_PED_INJURED(uLocal_43[0]))
				if (func_201(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_200(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
						return true;
	
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
			if (!PED::IS_PED_INJURED(uLocal_43[1]))
				if (func_201(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_200(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
						return true;
	}

	return false;
}

void func_197(Ped pedParam0, char* sParam1, char* sParam2, int iParam3) // Hash - 0xB310831B ^0x96265DAC
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(pedParam0, sParam1, sParam2, func_198(iParam3), false);
	return;
}

char* func_198(int iParam0) // Hash - 0xA17D549C ^0xA5767843
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

void func_199(var uParam0) // Hash - 0xAB444493 ^0xAB444493
{
	if (uParam0 == uLocal_43[0])
	{
		uLocal_433[0] = 0;
		uLocal_459[0] = 0;
		uLocal_462[0] = 0;
		uLocal_451[0] = 0;
		uLocal_442[0] = 0;
		uLocal_448[0] = 0;
		uLocal_436[0] = 0;
		uLocal_439[0] = 0;
		uLocal_484[0] = 0;
	}

	if (uParam0 == uLocal_43[1])
	{
		uLocal_433[1] = 0;
		uLocal_459[1] = 0;
		uLocal_462[1] = 0;
		uLocal_451[1] = 0;
		uLocal_442[1] = 0;
		uLocal_448[1] = 0;
		uLocal_436[1] = 0;
		uLocal_439[1] = 0;
		uLocal_484[1] = 0;
	}

	return;
}

BOOL func_200(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
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

int func_201(Ped pedParam0) // Hash - 0xA860C4B2 ^0x4F46EE3F
{
	int weaponHash;

	WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
	return weaponHash;
}

void func_202() // Hash - 0xFECC47B4 ^0x5C33279E
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			fLocal_119 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
		if (!PED::IS_PED_INJURED(uLocal_43[0]))
			uLocal_125[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_43[0], true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
		if (!PED::IS_PED_INJURED(uLocal_43[1]))
			uLocal_125[1 /*3*/] = { ENTITY::GET_ENTITY_COORDS(uLocal_43[1], true) };

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
		if (!PED::IS_PED_INJURED(uLocal_43[0]))
			uLocal_404[0] = 1;
		else
			uLocal_404[0] = 0;
	else
		uLocal_404[0] = 0;

	if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
		if (!PED::IS_PED_INJURED(uLocal_43[1]))
			uLocal_404[1] = 1;
		else
			uLocal_404[1] = 0;
	else
		uLocal_404[1] = 0;

	if (iLocal_31 != 0)
	{
		if (iLocal_31 == 1)
		{
			if (uLocal_404[0] == 1)
			{
				if (uLocal_404[1] == 1)
				{
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true))
					{
						if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
						{
							if (fLocal_119 < uLocal_125[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
							{
								iLocal_31 = 0;
								uLocal_459[0] = 0;
								uLocal_462[0] = 0;
								uLocal_459[1] = 0;
								uLocal_462[1] = 0;
								uLocal_105[0] = MISC::GET_GAME_TIMER();
								uLocal_105[1] = MISC::GET_GAME_TIMER();
							}
						}
						else if (fLocal_119 < uLocal_125[0 /*3*/])
						{
							iLocal_31 = 0;
							uLocal_459[0] = 0;
							uLocal_462[0] = 0;
							uLocal_459[1] = 0;
							uLocal_462[1] = 0;
							uLocal_105[0] = MISC::GET_GAME_TIMER();
							uLocal_105[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 15f)
					{
						if (fLocal_119 > uLocal_125[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							uLocal_459[0] = 0;
							uLocal_462[0] = 0;
							uLocal_459[1] = 0;
							uLocal_462[1] = 0;
							uLocal_105[0] = MISC::GET_GAME_TIMER();
							uLocal_105[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (fLocal_119 > uLocal_125[1 /*3*/])
					{
						iLocal_31 = 0;
						uLocal_459[0] = 0;
						uLocal_462[0] = 0;
						uLocal_459[1] = 0;
						uLocal_462[1] = 0;
						uLocal_105[0] = MISC::GET_GAME_TIMER();
						uLocal_105[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true))
				{
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 15f)
					{
						if (fLocal_119 < uLocal_125[0 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
						{
							iLocal_31 = 0;
							uLocal_459[0] = 0;
							uLocal_462[0] = 0;
							uLocal_459[1] = 0;
							uLocal_462[1] = 0;
							uLocal_105[0] = MISC::GET_GAME_TIMER();
							uLocal_105[1] = MISC::GET_GAME_TIMER();
						}
					}
					else if (fLocal_119 < uLocal_125[0 /*3*/])
					{
						iLocal_31 = 0;
						uLocal_459[0] = 0;
						uLocal_462[0] = 0;
						uLocal_459[1] = 0;
						uLocal_462[1] = 0;
						uLocal_105[0] = MISC::GET_GAME_TIMER();
						uLocal_105[1] = MISC::GET_GAME_TIMER();
					}
				}
			}
			else if (uLocal_404[1] == 1)
			{
				if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 15f)
				{
					if (fLocal_119 > uLocal_125[1 /*3*/] && !PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 90f) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
					{
						iLocal_31 = 0;
						uLocal_459[0] = 0;
						uLocal_462[0] = 0;
						uLocal_459[1] = 0;
						uLocal_462[1] = 0;
						uLocal_105[0] = MISC::GET_GAME_TIMER();
						uLocal_105[1] = MISC::GET_GAME_TIMER();
					}
				}
				else if (fLocal_119 > uLocal_125[1 /*3*/])
				{
					iLocal_31 = 0;
					uLocal_459[0] = 0;
					uLocal_462[0] = 0;
					uLocal_459[1] = 0;
					uLocal_462[1] = 0;
					uLocal_105[0] = MISC::GET_GAME_TIMER();
					uLocal_105[1] = MISC::GET_GAME_TIMER();
				}
			}
		}
	
		if (iLocal_31 == 2)
		{
			if (iLocal_398 == 0)
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0) || fLocal_119 > 942f)
				{
					if (!PED::IS_PED_INJURED(uLocal_43[1]))
					{
						if (fLocal_119 > uLocal_125[1 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 90f))
							{
								iLocal_31 = 0;
								uLocal_459[0] = 0;
								uLocal_462[0] = 0;
								uLocal_459[1] = 0;
								uLocal_462[1] = 0;
								uLocal_105[0] = MISC::GET_GAME_TIMER();
								uLocal_105[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (fLocal_119 > 942f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 90f))
						{
							iLocal_31 = 0;
							uLocal_459[0] = 0;
							uLocal_462[0] = 0;
							uLocal_459[1] = 0;
							uLocal_462[1] = 0;
							uLocal_105[0] = MISC::GET_GAME_TIMER();
							uLocal_105[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0) || fLocal_119 < 860f)
				{
					if (!PED::IS_PED_INJURED(uLocal_43[0]))
					{
						if (fLocal_119 < uLocal_125[0 /*3*/])
						{
							if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 90f))
							{
								iLocal_31 = 0;
								uLocal_459[0] = 0;
								uLocal_462[0] = 0;
								uLocal_459[1] = 0;
								uLocal_462[1] = 0;
								uLocal_105[0] = MISC::GET_GAME_TIMER();
								uLocal_105[1] = MISC::GET_GAME_TIMER();
							}
						}
					}
					else if (fLocal_119 < 860f)
					{
						if (!PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 90f))
						{
							iLocal_31 = 0;
							uLocal_459[0] = 0;
							uLocal_462[0] = 0;
							uLocal_459[1] = 0;
							uLocal_462[1] = 0;
							uLocal_105[0] = MISC::GET_GAME_TIMER();
							uLocal_105[1] = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
		}
	}

	if (iLocal_31 != 1)
	{
		if (iLocal_31 != 2)
		{
			if (uLocal_404[0] == 1)
			{
				if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
				{
					if (func_201(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_200(0))
					{
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 860.4606f, -1563.5804f, 28.817883f, 865.0807f, -1575.0884f, 30.933239f, 5.75f, false, true, 0))
							if (fLocal_119 > uLocal_125[0 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[0], 90f))
								iLocal_31 = 1;
					
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 855.4593f, -1548.2284f, 28.277218f, 863.17645f, -1563.2878f, 33.313747f, 4.75f, false, true, 0))
							iLocal_31 = 1;
					}
				}
			}
		
			if (uLocal_404[1] == 1)
				if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 15f)
					if (func_201(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_200(0))
						if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 939.88617f, -1575.6354f, 28.597832f, 952.9254f, -1575.4835f, 33.194588f, 13.75f, false, true, 0))
							if (fLocal_119 < uLocal_125[1 /*3*/] || PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), uLocal_43[1], 90f))
								iLocal_31 = 1;
		}
	}

	if (iLocal_31 != 2)
	{
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
	
		if (iLocal_482 == 1)
		{
			iLocal_31 = 2;
			iLocal_398 = 1;
		}
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[0]))
			{
				if (!PED::IS_PED_INJURED(uLocal_43[0]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_43[1]))
			{
				if (!PED::IS_PED_INJURED(uLocal_43[1]))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
					{
						iLocal_31 = 2;
						iLocal_398 = 1;
					}
				}
			}
		}
	
		if (iLocal_431 == 0)
		{
			if (iLocal_430 == 1)
			{
				if (MISC::GET_GAME_TIMER() > iLocal_95 + 4000)
				{
					for (iLocal_94 = 0; iLocal_94 <= 6; iLocal_94 = iLocal_94 + 1)
					{
						if (func_194())
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_94]))
							{
								if (!PED::IS_PED_INJURED(uLocal_35[iLocal_94]))
								{
									if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(uLocal_35[iLocal_94]))
									{
										iLocal_31 = 2;
										iLocal_431 = 1;
									}
								}
							}
						}
					}
				}
			}
		}
	
		if (iLocal_29 == 4 || iLocal_29 == 3 || iLocal_430 == 1)
		{
			iLocal_31 = 2;
			iLocal_427 = 1;
			iLocal_398 = 1;
		}
	
		if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (uLocal_404[0] == 1)
				if (func_201(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_200(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
						iLocal_31 = 2;
		
			if (uLocal_404[1] == 1)
				if (func_201(PLAYER::PLAYER_PED_ID()) != joaat("WEAPON_UNARMED") && !func_200(0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
						iLocal_31 = 2;
		}
	
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(fLocal_119, uLocal_132, true) < 36f)
		{
			if (uLocal_404[0] == 1)
			{
				if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()))
					iLocal_31 = 2;
			
				if (func_189(uLocal_43[0], PLAYER::PLAYER_PED_ID(), true) < 20f)
					if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_43[0]))
						iLocal_31 = 2;
			}
		
			if (uLocal_404[1] == 1)
			{
				if (fLocal_119.f_2 < 36f || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()))
						iLocal_31 = 2;
				
					if (func_189(uLocal_43[1], PLAYER::PLAYER_PED_ID(), true) < 20f)
						if (PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_43[1]))
							iLocal_31 = 2;
				}
			}
		}
	
		if (uLocal_404[0] == 1)
			if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[0], true) < 20f)
				if (fLocal_119 > uLocal_125[0 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 868.5617f, -1579.4764f, 33.304478f, 866.56354f, -1560.9844f, 28.904823f, 8.25f, false, true, 0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[0], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_43[0]))
						iLocal_31 = 2;
	
		if (uLocal_404[1] == 1)
			if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_43[1], true) < 20f)
				if (fLocal_119 < uLocal_125[1 /*3*/] && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 936.7849f, -1569.3374f, 31.496609f, 936.3553f, -1581.9734f, 27.778118f, 8.25f, false, true, 0))
					if (PED::CAN_PED_SEE_HATED_PED(uLocal_43[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_43[1]))
						iLocal_31 = 2;
	}

	return;
}

void func_203() // Hash - 0x75A0AC55 ^0x2491B962
{
	for (iLocal_64 = 0; iLocal_64 <= 6; iLocal_64 = iLocal_64 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_64]))
		{
			if (!PED::IS_PED_INJURED(uLocal_35[iLocal_64]))
			{
				if (uLocal_330[iLocal_64] == 0)
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_64], true) > 20f)
						uLocal_330[iLocal_64] = 1;
			
				if (uLocal_330[iLocal_64] == 1)
					if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_64], true) < 20f)
						uLocal_330[iLocal_64] = 0;
			}
			else if (uLocal_330[iLocal_64] == 0)
			{
				uLocal_330[iLocal_64] = 1;
			}
		}
		else if (uLocal_330[iLocal_64] == 0)
		{
			uLocal_330[iLocal_64] = 1;
		}
	}

	if (uLocal_330[0] == 1 && uLocal_330[1] == 1 && uLocal_330[2] == 1 && uLocal_330[3] == 1 && uLocal_330[4] == 1 && uLocal_330[5] == 1)
		iLocal_338 = 1;
	else
		iLocal_338 = 0;

	for (iLocal_63 = 0; iLocal_63 <= 6; iLocal_63 = iLocal_63 + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_63]))
		{
			if (!PED::IS_PED_INJURED(uLocal_35[iLocal_63]))
			{
				func_208(uLocal_35[iLocal_63]);
			
				if (iLocal_28 == 3 || iLocal_28 == 4)
				{
					if (iLocal_31 == 2 && iLocal_29 == 0)
					{
						func_207(1);
					
						if (iLocal_416 == 1)
							func_127();
					}
				
					if (PED::HAS_PED_RECEIVED_EVENT(uLocal_35[iLocal_63], 18))
					{
						if (iLocal_29 != 4)
						{
							func_207(4);
						
							if (iLocal_416 == 1)
								func_205();
						
							iLocal_482 = 1;
						}
					}
				
					if (iLocal_29 != 4)
					{
						if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, 892.9f, -1552.4f, 30f, 40f))
						{
							func_207(4);
						
							if (iLocal_416 == 1)
								func_205();
						}
					}
				
					if (func_204(uLocal_35[iLocal_63], uLocal_35[0]) || func_204(uLocal_35[iLocal_63], uLocal_35[1]) || func_204(uLocal_35[iLocal_63], uLocal_35[2]) || func_204(uLocal_35[iLocal_63], uLocal_35[3]) || func_204(uLocal_35[iLocal_63], uLocal_35[4]) || func_204(uLocal_35[iLocal_63], uLocal_35[5]) || func_204(uLocal_35[iLocal_63], uLocal_35[6]) || func_204(uLocal_35[iLocal_63], uLocal_43[0]) || func_204(uLocal_35[iLocal_63], uLocal_43[1]))
					{
						if (iLocal_29 != 4)
						{
							func_207(4);
						
							if (iLocal_416 == 1)
								func_205();
						
							iLocal_482 = 1;
						}
					}
				
					if (func_201(PLAYER::PLAYER_PED_ID()) == joaat("WEAPON_UNARMED") || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_200(0))
					{
						if (iLocal_398 == 0)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) > 20f)
							{
								if (uLocal_322[iLocal_63] == 1)
									uLocal_322[iLocal_63] = 0;
							
								if (iLocal_338 == 1 && iLocal_29 != 0 && iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4 && iLocal_31 != 2)
									func_207(0);
							}
						
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_29 != 1 && iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4)
								{
									if (iLocal_431 == 0 && iLocal_398 == 0)
									{
										func_207(1);
									
										if (iLocal_416 == 1)
											func_127();
									}
									else
									{
										func_207(3);
									
										if (iLocal_416 == 1)
											func_205();
									}
								}
							}
						
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (uLocal_322[iLocal_63] == 0)
								{
									uLocal_69[iLocal_63] = MISC::GET_GAME_TIMER();
									uLocal_322[iLocal_63] = 1;
								}
							
								if (uLocal_322[iLocal_63] == 1)
								{
									if (MISC::GET_GAME_TIMER() > uLocal_69[iLocal_63] + 24000)
									{
										if (iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4)
										{
											func_207(2);
										
											if (iLocal_416 == 1)
												func_205();
										}
									}
								}
							}
						}
					
						if (iLocal_398 == 1)
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
							{
								if (iLocal_29 != 3 && iLocal_29 != 4)
								{
									func_207(3);
								
									if (iLocal_416 == 1)
										func_205();
								}
							}
						}
					
						if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
						{
							if (iLocal_413 == 0)
							{
								iLocal_90 = MISC::GET_GAME_TIMER();
								iLocal_413 = 1;
							}
							else if (MISC::GET_GAME_TIMER() > iLocal_90 + 3000)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 20f && PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
								{
									if (iLocal_29 != 3 && iLocal_29 != 4)
									{
										func_207(3);
									
										if (iLocal_416 == 1)
											func_205();
									}
								}
							}
						}
						else if (iLocal_413 == 1)
						{
							iLocal_413 = 0;
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
						{
							if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
							{
								if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, true))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_207(3);
										
											if (iLocal_416 == 1)
												func_205();
										}
									}
								}
							
								if (func_189(PLAYER::PLAYER_PED_ID(), veLocal_33, true) < 5f && PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 3 && iLocal_29 != 4)
										{
											iLocal_390 = 1;
											func_207(3);
										
											if (iLocal_416 == 1)
												func_205();
										}
									}
								
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 917.3436f, -1554.4198f, 29.266108f, 916.8774f, -1556.4407f, 33.006607f, 2.25f, false, true, 0))
									{
										if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[0]))
										{
											if (!PED::IS_PED_INJURED(uLocal_35[0]))
											{
												if (ENTITY::IS_ENTITY_AT_COORD(uLocal_35[0], 912.3f, -1542.6f, 30f, 3f, 3f, 3f, false, true, 0))
												{
													if (iLocal_29 != 3 && iLocal_29 != 4)
													{
														iLocal_390 = 1;
														func_207(3);
													
														if (iLocal_416 == 1)
															func_205();
													}
												}
											}
										}
									}
								}
							}
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[6]))
						{
							if (!PED::IS_PED_INJURED(uLocal_35[6]))
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[6], true) < 20f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 928.7163f, -1546.671f, 27.346033f, 921.8971f, -1549.7517f, 34.04724f, 6.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 931.868f, -1545.185f, 27.365303f, 925.8857f, -1547.3031f, 34.072052f, 3.5f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 929.49084f, -1524.8286f, 32.84098f, 929.3696f, -1545.2885f, 37.342575f, 5f, false, true, 0))
									{
										if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[6], PLAYER::PLAYER_PED_ID()))
										{
											if (fLocal_119.f_2 > 31f)
											{
												if (iLocal_29 != 3 && iLocal_29 != 4)
												{
													iLocal_428 = 1;
													func_207(3);
												
													if (iLocal_416 == 1)
														func_205();
												}
											}
											else if (iLocal_29 != 1 && iLocal_29 != 2 && iLocal_29 != 3 && iLocal_29 != 4)
											{
												func_207(1);
											
												if (iLocal_416 == 1)
													func_127();
											}
										}
									}
								}
							}
						}
					}
					else
					{
						if (iLocal_321 == 0)
						{
							iLocal_68 = MISC::GET_GAME_TIMER();
							iLocal_321 = 1;
						}
					
						if (iLocal_321 == 1)
						{
							if (MISC::GET_GAME_TIMER() > iLocal_68 + 4000 || iLocal_29 == 3)
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 20f)
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()))
									{
										if (iLocal_29 != 4)
										{
											func_207(4);
										
											if (iLocal_416 == 1)
												func_205();
										}
									}
								}
							}
						}
					
						if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_63], true) < 40f)
						{
							if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
							{
								if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_63], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), uLocal_35[iLocal_63]))
								{
									if (iLocal_29 != 4)
									{
										func_207(4);
									
										if (iLocal_416 == 1)
											func_205();
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return;
}

BOOL func_204(Ped pedParam0, Ped pedParam1) // Hash - 0xC8EABA15 ^0x5461E8FA
{
	if (func_189(pedParam0, pedParam1, true) < 20f && PED::IS_PED_FACING_PED(pedParam0, pedParam1, 90f) && !PED::IS_PED_INJURED(pedParam0) && PED::IS_PED_INJURED(pedParam1))
		return true;

	return false;
}

void func_205() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_206();
	return;
}

void func_206() // Hash - 0xF6D04E68 ^0x80AE5309
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_22736 = 0;

	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_21725 = 6;
	}

	return;
}

void func_207(int iParam0) // Hash - 0x252AADC6 ^0x252AADC6
{
	iLocal_29 = iParam0;
	iLocal_67 = 0;
	return;
}

void func_208(Ped pedParam0) // Hash - 0x4A98895D ^0x720624EE
{
	for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
	{
		if (pedParam0 == uLocal_35[iLocal_65])
		{
			if (func_189(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f && PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()))
			{
				if (uLocal_339[iLocal_65] == 0)
				{
					TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
					uLocal_339[iLocal_65] = 1;
				}
			}
			else if (uLocal_339[iLocal_65] == 1)
			{
				TASK::TASK_LOOK_AT_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
				uLocal_339[iLocal_65] = 0;
			}
		}
	}

	switch (iLocal_29)
	{
		case 0:
			if (iLocal_67 == 0)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
			
				if (pedParam0 == uLocal_35[0])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
			
				if (pedParam0 == uLocal_35[1])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_35[2])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
			
				if (pedParam0 == uLocal_35[3])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_35[4])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[4], 904f, -1575f, 30f, 20f, 0);
			
				if (pedParam0 == uLocal_35[5])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
			
				if (pedParam0 == uLocal_35[6])
					if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
							TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
			
				iLocal_67 = iLocal_67 + 1;
			}
		
			if (iLocal_67 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[4]))
				{
					if (!PED::IS_PED_INJURED(uLocal_35[4]))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[5]))
						{
							if (!PED::IS_PED_INJURED(uLocal_35[5]))
							{
								if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[4], true) < 25f)
								{
									if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 926.455f, -1582.3844f, 29.327585f, 909.6322f, -1581.3743f, 31.589067f, 9.5f, false, true, 0) || fLocal_119.f_1 > -1573f)
									{
										if (iLocal_416 == 0)
										{
											func_150(&uLocal_137, 3, uLocal_35[4], "CONSTRUCTION2", 0, 1);
											func_150(&uLocal_137, 5, uLocal_35[5], "CONSTRUCTION3", 0, 1);
											TASK::TASK_LOOK_AT_ENTITY(uLocal_35[4], uLocal_35[5], -1, 0, 2);
											TASK::TASK_LOOK_AT_ENTITY(uLocal_35[5], uLocal_35[4], -1, 0, 2);
										
											if (!func_194())
												if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
													if (func_188(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
														iLocal_416 = 1;
										}
									}
								}
							
								if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 921.9f, -1556.5f, 30f, 5f, 5f, 5f, false, true, 1))
								{
									if (iLocal_423 == 0)
									{
										iLocal_92 = MISC::GET_GAME_TIMER();
										iLocal_423 = 1;
									}
								
									if (iLocal_423 == 1)
									{
										if (MISC::GET_GAME_TIMER() > iLocal_92 + 4000)
										{
											if (iLocal_416 == 0)
											{
												func_150(&uLocal_137, 3, uLocal_35[4], "CONSTRUCTION2", 0, 1);
												func_150(&uLocal_137, 5, uLocal_35[5], "CONSTRUCTION3", 0, 1);
												TASK::TASK_LOOK_AT_ENTITY(uLocal_35[4], uLocal_35[5], -1, 0, 2);
												TASK::TASK_LOOK_AT_ENTITY(uLocal_35[5], uLocal_35[4], -1, 0, 2);
											
												if (!func_194())
													if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || !HUD::IS_SUBTITLE_PREFERENCE_SWITCHED_ON())
														if (func_188(&uLocal_137, "SOL1AUD", "SOL1_TALK", 6, 1, 1, 0))
															iLocal_416 = 1;
											}
										}
									}
								}
							
								if (iLocal_416 == 1 && !func_194())
								{
									if (iLocal_415 == 0)
									{
										if (TASK::DOES_SCENARIO_EXIST_IN_AREA(865f, -1558.1f, 29.5f, 3f, false))
										{
											TASK::TASK_CLEAR_LOOK_AT(uLocal_35[4]);
											TASK::TASK_CLEAR_LOOK_AT(uLocal_35[5]);
											TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_35[4], 865f, -1558.1f, 29.5f, 3f, 0);
											iLocal_415 = 1;
										}
									}
								}
							}
						}
					}
				}
			
				if (pedParam0 == uLocal_35[6])
				{
					if (iLocal_424 == 0)
					{
						if (iLocal_425 == 0)
						{
							iLocal_93 = MISC::GET_GAME_TIMER();
							iLocal_425 = 1;
						}
					
						if (MISC::GET_GAME_TIMER() > iLocal_93 + 30000)
						{
							if (iLocal_424 == 0)
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(925f, -1561f, 30f, 3f, false))
								{
									TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(uLocal_35[6], 925f, -1561f, 30f, 3f, 0);
									iLocal_424 = 1;
									iLocal_425 = 0;
								}
							}
						}
					}
				
					if (iLocal_424 == 1)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(uLocal_35[6], 925f, -1561f, 30f, 3f, 3f, 3f, false, true, 0))
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[6], true) < 15f && fLocal_119.f_2 < 40f)
							{
								if (iLocal_426 == 0)
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(909.5f, -1515.5f, 30f, 3f, false))
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[6], 909.5f, -1515.5f, 30f, 50f, 0);
										iLocal_426 = 1;
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 1:
			if (iLocal_67 == 0)
			{
				for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
				{
					if (iLocal_31 == 0)
					{
						if (pedParam0 == uLocal_35[iLocal_65])
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f)
							{
								if (uLocal_347[iLocal_65] == 0)
								{
									if (PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), pedParam0))
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
									
										if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS(pedParam0);
									
										TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
										TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 2f, 1f, 1073741824, 0);
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
										TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_57);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
										uLocal_339[iLocal_65] = 0;
										uLocal_347[iLocal_65] = 1;
									}
								}
							
								if (uLocal_347[iLocal_65] == 1)
								{
									if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
									{
										TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
										uLocal_347[iLocal_65] = 0;
									}
								}
							}
							else
							{
								if (uLocal_347[iLocal_65] == 1)
									uLocal_347[iLocal_65] = 0;
							
								if (pedParam0 == uLocal_35[0])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[0], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[1])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[1], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[2])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[2], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[3])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[3], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[4])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[4], 904f, -1575f, 30f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[4], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[5])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[5], true);
										}
									}
								}
							
								if (pedParam0 == uLocal_35[6])
								{
									if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
									{
										if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
										{
											TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
											PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[6], true);
										}
									}
								}
							}
						}
					}
					else if (pedParam0 == uLocal_35[iLocal_65])
					{
						if (func_189(PLAYER::PLAYER_PED_ID(), pedParam0, true) < 20f)
						{
							if (uLocal_347[iLocal_65] == 0)
							{
								if (PED::CAN_PED_SEE_HATED_PED(pedParam0, PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), pedParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WIDEST_YAW_LIMIT | 32 | 1024, 3);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
									TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_57);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									uLocal_339[iLocal_65] = 0;
									uLocal_347[iLocal_65] = 1;
								}
							}
						
							if (uLocal_347[iLocal_65] == 1)
							{
								if (!PED::IS_PED_FACING_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 45f))
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 0);
									uLocal_347[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (uLocal_347[iLocal_65] == 1)
								uLocal_347[iLocal_65] = 0;
						
							if (pedParam0 == uLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[0], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[1], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[2], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[3], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[4], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[5], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[6], true);
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 2:
			if (iLocal_483 == 0)
				iLocal_483 = 1;
		
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_302, joaat("PLAYER"));
				iLocal_67 = iLocal_67 + 1;
			}
		
			if (iLocal_67 == 1)
			{
				for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
				{
					if (pedParam0 == uLocal_35[iLocal_65])
					{
						if (func_189(pedParam0, PLAYER::PLAYER_PED_ID(), true) < 15f)
						{
							if (func_189(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 3f)
							{
								if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 0 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PERFORM_SEQUENCE) != 1)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
									TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 1f, 1f, 1073741824, 0);
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
									TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
									TASK::TASK_PERFORM_SEQUENCE(pedParam0, iLocal_57);
									TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
									uLocal_339[iLocal_65] = 0;
								}
							}
						}
						else
						{
							if (pedParam0 == uLocal_35[0])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(912.2f, -1542.5f, 29.8f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[0], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[0], 912.2f, -1542.5f, 29.8f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[0], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[1])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(917.4f, -1517.4f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[1], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[1], 917.4f, -1517.4f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[1], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[2])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(869.8f, -1541.2f, 29.4f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[2], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[2], 869.8f, -1541.2f, 29.4f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[2], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[3])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(884.2f, -1574.1f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[3], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[3], 884.2f, -1574.1f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[3], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[4])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(904f, -1575f, 30f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[4], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[4], 904f, -1575f, 30f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[4], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[5])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(905.9f, -1574.8f, 29.9f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[5], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[5], 905.9f, -1574.8f, 29.9f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[5], true);
									}
								}
							}
						
							if (pedParam0 == uLocal_35[6])
							{
								if (TASK::DOES_SCENARIO_EXIST_IN_AREA(889.5f, -1562f, 29.7f, 3f, false))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_TO_POS) != 1 && TASK::GET_SCRIPT_TASK_STATUS(uLocal_35[6], SCRIPT_TASK_USE_NEAREST_SCENARIO_CHAIN_TO_POS) != 1)
									{
										TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(uLocal_35[6], 889.5f, -1562f, 29.7f, 20f, 0);
										PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_35[6], true);
									}
								}
							}
						}
					}
				}
			}
			break;
	
		case 3:
			if (iLocal_483 == 0)
				iLocal_483 = 1;
		
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = MISC::GET_GAME_TIMER();
					iLocal_394 = 1;
				}
			
				if (iLocal_394 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_79 + 9000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_393 = 1;
					}
				}
			}
		
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_302, joaat("PLAYER"));
				iLocal_67 = iLocal_67 + 1;
			}
		
			if (iLocal_67 == 1)
			{
				if (iLocal_28 == 3)
				{
					for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
					{
						if (pedParam0 == uLocal_35[iLocal_65])
						{
							if (func_189(pedParam0, PLAYER::PLAYER_PED_ID(), true) < 100f)
							{
								if (uLocal_355[iLocal_65] == 0)
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									uLocal_355[iLocal_65] = 1;
								}
							
								if (uLocal_363[iLocal_65] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(pedParam0, 100f, 0);
									uLocal_339[iLocal_65] = 0;
									uLocal_363[iLocal_65] = 1;
								}
							}
						}
					}
				
					if (iLocal_468 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_35[0]))
							{
								if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
									{
										if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_33, true) && ENTITY::IS_ENTITY_AT_COORD(veLocal_33, 919.2f, -1554.4f, 30f, 4f, 4f, 4f, false, true, 0))
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[0]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_35[0]);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[0]))
												TASK::CLEAR_PED_TASKS(uLocal_35[0]);
										
											TASK::OPEN_SEQUENCE_TASK(&iLocal_57);
											TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 917.8f, -1561f, 29f, 3f, -1, 1048576000, 0, 1193033728);
											TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
											TASK::TASK_PLAY_ANIM(0, "misscarsteal4@director_grip", "mcs_2_loop_grip1", 8f, -8f, -1, 1, 0, false, false, false);
											TASK::CLOSE_SEQUENCE_TASK(iLocal_57);
											TASK::TASK_PERFORM_SEQUENCE(uLocal_35[0], iLocal_57);
											TASK::CLEAR_SEQUENCE_TASK(&iLocal_57);
											iLocal_468 = 1;
										}
									}
								}
							}
						}
					}
				
					if (iLocal_468 == 1 && iLocal_487 == 0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[0]))
						{
							if (!PED::IS_PED_INJURED(uLocal_35[0]))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(uLocal_35[0], 917.8f, -1561f, 29f, 2f, 2f, 2f, false, true, 0))
								{
									func_150(&uLocal_137, 3, uLocal_35[0], "FHPrepBWorker", 0, 1);
									func_197(uLocal_35[0], "FHPB_BBAA", "FHPrepBWorker", 4);
									iLocal_487 = 1;
								}
							}
						}
					}
				
					if (iLocal_467 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_79 + 3000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(uLocal_35[5]))
								{
									TASK::TASK_PLAY_ANIM(uLocal_35[5], "cellphone@str", "cellphone_call_listen_c", 4f, -8f, -1, 49, 0, false, false, false);
									iLocal_111 = MISC::GET_GAME_TIMER();
									iLocal_467 = 1;
								}
							}
						}
					}
					else if (iLocal_466 == 0)
					{
						if (MISC::GET_GAME_TIMER() > iLocal_111 + 5000)
						{
							if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[5]))
							{
								if (!PED::IS_PED_INJURED(uLocal_35[5]))
								{
									TASK::CLEAR_PED_TASKS(uLocal_35[5]);
									TASK::TASK_COMBAT_PED(uLocal_35[5], PLAYER::PLAYER_PED_ID(), 0, 16);
									iLocal_466 = 1;
								}
							}
						}
					}
				}
			
				for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
				{
					if (uLocal_306[iLocal_65] == 0)
					{
						if (pedParam0 == uLocal_35[iLocal_65])
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
							{
								if (!PED::IS_PED_INJURED(pedParam0))
								{
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
								
									if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
									{
										if (func_189(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 200f)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
												TASK::CLEAR_PED_TASKS(pedParam0);
										
											TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
											uLocal_306[iLocal_65] = 1;
										}
									}
									else if (func_189(pedParam0, PLAYER::PLAYER_PED_ID(), true) > 100f)
									{
										if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
									
										if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
											TASK::CLEAR_PED_TASKS(pedParam0);
									
										TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
										uLocal_306[iLocal_65] = 1;
									}
								}
							}
						}
					}
				}
			}
		
			if (iLocal_28 == 4)
			{
				for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
				{
					if (uLocal_306[iLocal_65] == 0)
					{
						if (pedParam0 == uLocal_35[iLocal_65])
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
							{
								if (!PED::IS_PED_INJURED(pedParam0))
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedParam0);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(pedParam0))
										TASK::CLEAR_PED_TASKS(pedParam0);
								
									PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
									TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
									PED::SET_PED_KEEP_TASK(pedParam0, true);
									ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedParam0);
									uLocal_306[iLocal_65] = 1;
								}
							}
						}
					}
				}
			}
			break;
	
		case 4:
			if (iLocal_483 == 0)
				iLocal_483 = 1;
		
			if (iLocal_393 == 0)
			{
				if (iLocal_394 == 0)
				{
					iLocal_79 = MISC::GET_GAME_TIMER();
					iLocal_394 = 1;
				}
			
				if (iLocal_394 == 1)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_79 + 6000)
					{
						PLAYER::SET_MAX_WANTED_LEVEL(5);
						PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
						PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 2, false);
						PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
						iLocal_393 = 1;
					}
				}
			}
		
			if (iLocal_67 == 0)
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_302, joaat("PLAYER"));
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedParam0, true);
				iLocal_67 = iLocal_67 + 1;
			}
		
			if (iLocal_67 == 1)
			{
				for (iLocal_65 = 0; iLocal_65 <= 6; iLocal_65 = iLocal_65 + 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_35[iLocal_65]))
					{
						if (!PED::IS_PED_INJURED(uLocal_35[iLocal_65]))
						{
							if (func_189(PLAYER::PLAYER_PED_ID(), uLocal_35[iLocal_65], true) < 15f)
							{
								if (func_209(uLocal_35[iLocal_65], 6))
								{
									if (PED::CAN_PED_SEE_HATED_PED(uLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID()))
									{
										if (uLocal_379[iLocal_65] == 0)
										{
											if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
												TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_35[iLocal_65]);
										
											if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
												TASK::CLEAR_PED_TASKS(uLocal_35[iLocal_65]);
										
											TASK::TASK_HANDS_UP(uLocal_35[iLocal_65], -1, PLAYER::PLAYER_PED_ID(), -1, 0);
											uLocal_379[iLocal_65] = 1;
											uLocal_371[iLocal_65] = 0;
											uLocal_339[iLocal_65] = 0;
											iLocal_91 = MISC::GET_GAME_TIMER();
										}
									}
									else if (MISC::GET_GAME_TIMER() > iLocal_91 + 300)
									{
										uLocal_371[iLocal_65] = 0;
									}
								}
								else if (uLocal_371[iLocal_65] == 0)
								{
									if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_35[iLocal_65]);
								
									if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
										TASK::CLEAR_PED_TASKS(uLocal_35[iLocal_65]);
								
									TASK::TASK_SMART_FLEE_PED(uLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
									uLocal_371[iLocal_65] = 1;
									uLocal_379[iLocal_65] = 0;
								}
							}
							else if (uLocal_371[iLocal_65] == 0)
							{
								if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
									TASK::CLEAR_PED_TASKS_IMMEDIATELY(uLocal_35[iLocal_65]);
							
								if (ENTITY::IS_ENTITY_ON_SCREEN(uLocal_35[iLocal_65]))
									TASK::CLEAR_PED_TASKS(uLocal_35[iLocal_65]);
							
								TASK::TASK_SMART_FLEE_PED(uLocal_35[iLocal_65], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
								uLocal_371[iLocal_65] = 1;
								uLocal_379[iLocal_65] = 0;
							}
						}
					}
				}
			}
			break;
	}

	return;
}

BOOL func_209(Ped pedParam0, int iParam1) // Hash - 0x105D49F1 ^0x993A3F41
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0) && !PED::IS_PED_INJURED(pedParam0))
		if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), iParam1))
			if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
				return true;

	return false;
}

void func_210() // Hash - 0x80B962C8 ^0x67B4BAED
{
	pedLocal_46 = func_26(0);
	pedLocal_47 = func_26(1);
	pedLocal_48 = func_26(2);

	if (func_34(pedLocal_46, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_46))
		{
			if (!func_33(pedLocal_46))
			{
				if (!func_212())
				{
					if (func_211(pedLocal_46))
					{
						if (func_32(pedLocal_46, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_46, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_46, true);
							TASK::CLEAR_PED_TASKS(pedLocal_46);
							iLocal_473 = 0;
							iLocal_476 = 0;
							iLocal_479 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_473 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_473 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_46, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_473 = 1;
			
				if (iLocal_473 == 0)
					if (func_212())
						iLocal_473 = 1;
			
				if (iLocal_470 == 1)
				{
					if (func_211(pedLocal_46) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_46, true) && iLocal_473 == 0)
					{
						fLocal_122 = { ENTITY::GET_ENTITY_COORDS(pedLocal_46, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_476 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
									iLocal_479 = 0;
									iLocal_476 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768)))
						{
							if (iLocal_479 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_476 = 0;
								iLocal_479 = 1;
							}
						}
						else if (iLocal_476 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_46, PED::GET_VEHICLE_PED_IS_IN(pedLocal_46, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
								iLocal_479 = 0;
								iLocal_476 = 1;
							}
						}
					}
					else
					{
						iLocal_473 = 1;
					}
				}
			
				if (iLocal_473 == 1)
					if (func_25(pedLocal_46))
						iLocal_473 = 0;
			}
		}
	}

	if (func_34(pedLocal_48, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_48))
		{
			if (!func_33(pedLocal_48))
			{
				if (!func_212())
				{
					if (func_211(pedLocal_48))
					{
						if (func_32(pedLocal_48, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_48, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_48, true);
							TASK::CLEAR_PED_TASKS(pedLocal_48);
							iLocal_475 = 0;
							iLocal_477 = 0;
							iLocal_480 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_475 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_475 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_48, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_48, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_475 = 1;
			
				if (iLocal_475 == 0)
					if (func_212())
						iLocal_475 = 1;
			
				if (iLocal_471 == 1)
				{
					if (func_211(pedLocal_48) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_48, true) && iLocal_475 == 0)
					{
						fLocal_122 = { ENTITY::GET_ENTITY_COORDS(pedLocal_48, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_477 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_48, PED::GET_VEHICLE_PED_IS_IN(pedLocal_48, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
									iLocal_480 = 0;
									iLocal_477 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768)))
						{
							if (iLocal_480 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_48, PED::GET_VEHICLE_PED_IS_IN(pedLocal_48, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_477 = 0;
								iLocal_480 = 1;
							}
						}
						else if (iLocal_477 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_48, PED::GET_VEHICLE_PED_IS_IN(pedLocal_48, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
								iLocal_480 = 0;
								iLocal_477 = 1;
							}
						}
					}
					else
					{
						iLocal_475 = 1;
					}
				}
			
				if (iLocal_475 == 1)
					if (func_25(pedLocal_48))
						iLocal_475 = 0;
			}
		}
	}

	if (func_34(pedLocal_47, 0))
	{
		if (!PED::IS_PED_INJURED(pedLocal_47))
		{
			if (!func_33(pedLocal_47))
			{
				if (!func_212())
				{
					if (func_211(pedLocal_47))
					{
						if (func_32(pedLocal_47, 0))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_47, true, true);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_47, true);
							TASK::CLEAR_PED_TASKS(pedLocal_47);
							iLocal_474 = 0;
							iLocal_478 = 0;
							iLocal_481 = 0;
						}
					}
				}
			}
			else
			{
				if (iLocal_474 == 0)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						iLocal_474 = 1;
					else if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_47, false))
						if (!PED::IS_PED_IN_VEHICLE(pedLocal_47, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
							iLocal_474 = 1;
			
				if (iLocal_474 == 0)
					if (func_212())
						iLocal_474 = 1;
			
				if (iLocal_472 == 1)
				{
					if (func_211(pedLocal_47) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_47, true) && iLocal_474 == 0)
					{
						fLocal_122 = { ENTITY::GET_ENTITY_COORDS(pedLocal_47, true) };
						PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1);
					
						if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
						{
							if (iLocal_478 == 0)
							{
								if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
								{
									TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_47, PED::GET_VEHICLE_PED_IS_IN(pedLocal_47, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
									iLocal_481 = 0;
									iLocal_478 = 1;
								}
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768)))
						{
							if (iLocal_481 == 0)
							{
								TASK::TASK_VEHICLE_MISSION(pedLocal_47, PED::GET_VEHICLE_PED_IS_IN(pedLocal_47, false), VEHICLE::GET_CLOSEST_VEHICLE(fLocal_122, 200f, joaat("POLICE3"), 32768), 8, 40f, 262144, 300f, 1f, true);
								iLocal_478 = 0;
								iLocal_481 = 1;
							}
						}
						else if (iLocal_478 == 0)
						{
							if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fLocal_122, fLocal_122.f_1, fLocal_116, fLocal_116.f_1))
							{
								TASK::TASK_VEHICLE_MISSION_COORS_TARGET(pedLocal_47, PED::GET_VEHICLE_PED_IS_IN(pedLocal_47, false), fLocal_116, 4, 30f, 786468, 3f, 15f, false);
								iLocal_481 = 0;
								iLocal_478 = 1;
							}
						}
					}
					else
					{
						iLocal_474 = 1;
					}
				}
			
				if (iLocal_474 == 1)
					if (func_25(pedLocal_47))
						iLocal_474 = 0;
			}
		}
	}

	return;
}

BOOL func_211(Ped pedParam0) // Hash - 0xB81F341D ^0x10A13EEE
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_INJURED(pedParam0))
		{
			if (PED::IS_PED_IN_VEHICLE(pedParam0, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == pedParam0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
					{
						if (PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_33, false) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_33, -1, false) == pedParam0 && !ENTITY::IS_ENTITY_AT_COORD(veLocal_33, fLocal_116, 3f, 3f, 3f, false, true, 0))
						{
							if (pedParam0 == pedLocal_46)
								iLocal_470 = 1;
						
							if (pedParam0 == pedLocal_48)
								iLocal_471 = 1;
						
							if (pedParam0 == pedLocal_47)
								iLocal_472 = 1;
						
							return true;
						}
					}
				}
			}
		}
	}

	if (pedParam0 == pedLocal_46)
		iLocal_470 = 0;

	if (pedParam0 == pedLocal_48)
		iLocal_471 = 0;

	if (pedParam0 == pedLocal_47)
		iLocal_472 = 0;

	return false;
}

BOOL func_212() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_23129;
}

void func_213() // Hash - 0xA92EF3DD ^0x75AEF0EF
{
	if (ENTITY::DOES_ENTITY_EXIST(veLocal_33))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_33, false))
		{
			func_216(3);
			return;
		}
		else
		{
			if (func_215(&veLocal_33))
			{
				func_216(2);
				return;
			}
		
			if (ENTITY::DOES_ENTITY_EXIST(veLocal_32))
			{
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
				{
					func_216(1);
					return;
				}
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
				{
					if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(veLocal_33))
					{
						if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(veLocal_32) || func_214(veLocal_32) || func_215(&veLocal_32))
						{
							func_216(1);
							return;
						}
					}
				}
			}
		}
	}

	if (iLocal_28 == 3 || iLocal_28 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_32))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_32, false))
			{
				if (func_189(veLocal_32, PLAYER::PLAYER_PED_ID(), true) > 600f)
				{
					func_216(5);
					return;
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_49))
	{
		if (PED::IS_PED_INJURED(pedLocal_49))
		{
			func_216(6);
			return;
		}
	}

	return;
}

BOOL func_214(Vehicle veParam0) // Hash - 0x2E9AC124 ^0x5164B34A
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_DEAD(veParam0, false))
			return true;
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;
	else
		return true;

	return false;
}

BOOL func_215(var uParam0) // Hash - 0xB4FE34DA ^0xD812147F
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
		if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 0, 7000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 3, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 2, 30000) || VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(*uParam0, 1, 40000))
			return true;

	return false;
}

void func_216(int iParam0) // Hash - 0xD0E42A4C ^0xD0E42A4C
{
	iLocal_30 = iParam0;

	if (iLocal_28 != 6)
	{
		iLocal_28 = 6;
		iLocal_62 = 0;
	}

	return;
}

void func_217(int iParam0, BOOL bParam1) // Hash - 0xD6D1968B ^0x2D6E7FD1
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_58[iParam0] == bParam1)
		return;

	Global_113648.f_9087.f_99.f_58[iParam0] = bParam1;
	return;
}

void func_218() // Hash - 0xDE741650 ^0x859E6BBA
{
	if (iLocal_28 == 5)
		if (iLocal_483 == 0)
			func_219(657);

	return;
}

void func_219(int iParam0) // Hash - 0xDB2F75DE ^0xDB2F75DE
{
	BOOL flag;
	int i;

	Global_63363 = 0;

	if (!Global_63587[iParam0 /*13*/] == 3)
		return;

	flag = false;
	i = 0;

	for (i = 0; i < Global_75457; i = i + 1)
	{
		if (Global_75458[i /*9*/] == iParam0)
		{
			flag = true;
			Global_75458[i /*9*/].f_1 = 1;
			Global_75458[i /*9*/].f_2 = 0f;
			Global_75458[i /*9*/].f_3 == 2;
		}
	}

	!flag;
	return;
}

BOOL func_220(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_221() // Hash - 0x68FA67E4 ^0xFFC0C30D
{
	PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PACKER"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("PHANTOM"), false);
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_START");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_TRUCK");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_COPS");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_LOST");
	AUDIO::CANCEL_MUSIC_EVENT("FHPRB_STOP");
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_51, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_52, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_53, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_54, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_55, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_56, false);

	if (TASK::DOES_SCENARIO_GROUP_EXIST("SCRAP_SECURITY"))
		if (TASK::IS_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY"))
			TASK::SET_SCENARIO_GROUP_ENABLED("SCRAP_SECURITY", false);

	PLAYER::SET_MAX_WANTED_LEVEL(5);

	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_114))
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hLocal_114, 0);

	if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(hLocal_115))
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(hLocal_115, 0);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_222() // Hash - 0x56F5D62B ^0x1C4AE54B
{
	int num;

	if (SCRIPT::HAS_SCRIPT_LOADED("buddyDeathResponse"))
		SYSTEM::START_NEW_SCRIPT("buddyDeathResponse", DEFAULT);

	if (Global_113648.f_9087 || func_220(false))
	{
		if (!func_223())
		{
			num = func_13();
		
			if (num != -1)
			{
				if (!func_7(num))
					return;
			
				MISC::SET_BIT(&(Global_91433[num /*5*/].f_1), 5);
				return;
			}
		}
		else
		{
			func_12();
		}
	}

	return;
}

BOOL func_223() // Hash - 0x25806CBF ^0x25806CBF
{
	if (Global_100681 == 13 || Global_100681 == 10 || Global_100681 == 11 || Global_100681 == 12)
		return false;

	return true;
}

