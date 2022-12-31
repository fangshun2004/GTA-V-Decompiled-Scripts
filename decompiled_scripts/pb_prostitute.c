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
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	BOOL bLocal_47 = 0;
	eViewMode evmLocal_48 = THIRD_PERSON_NEAR;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	BOOL bLocal_62 = 0;
	char* sLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
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
	BOOL bLocal_88 = 0;
	int iLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	Ped pedLocal_96 = 0;
	Ped pedLocal_97 = 0;
	Vehicle veLocal_98 = 0;
	Vehicle veLocal_99 = 0;
	int iLocal_100 = 0;
	int iLocal_101 = 0;
	Cam caLocal_102 = 0;
	Cam caLocal_103 = 0;
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
	var uLocal_122 = 16;
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
	var uLocal_287 = 1;
	var uLocal_288 = 0;
	var uLocal_289 = 3;
	var uLocal_290 = 0;
	var uLocal_291 = 0;
	var uLocal_292 = 0;
	int iLocal_293 = 0;
	int iLocal_294 = 0;
	int iLocal_295 = 0;
	int iLocal_296 = 0;
	int iLocal_297 = 0;
	int iLocal_298 = 0;
	var uLocal_299 = 0;
	int iLocal_300 = 0;
	int iLocal_301 = 0;
	int iLocal_302 = 0;
	int iLocal_303 = 0;
	int iLocal_304 = 0;
	int iLocal_305 = 0;
	int iLocal_306 = 0;
	Hash hLocal_307 = 0;
	var uLocal_308 = 4;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 4;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	var uLocal_316 = 0;
	var uLocal_317 = 0;
	var uLocal_318 = 0;
	var uLocal_319 = 0;
	var uLocal_320 = 0;
	var uLocal_321 = 0;
	var uLocal_322 = 0;
	var uLocal_323 = 0;
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
	float fLocal_360 = 0f;
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
	var uLocal_391 = 15;
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
	var uLocal_568 = 0;
	var uLocal_569 = 0;
	var uLocal_570 = 0;
	var uLocal_571 = 0;
	var uLocal_572 = 0;
	var uLocal_573 = 0;
	var uLocal_574 = 0;
	var uLocal_575 = 0;
	var uLocal_576 = 0;
	var uLocal_577 = 0;
	var uLocal_578 = 0;
	var uLocal_579 = 0;
	var uLocal_580 = 0;
	var uLocal_581 = 0;
	var uLocal_582 = 0;
	var uLocal_583 = 0;
	var uLocal_584 = 0;
	var uLocal_585 = 0;
	var uLocal_586 = 0;
	var uLocal_587 = 0;
	var uLocal_588 = 0;
	var uLocal_589 = 0;
	var uLocal_590 = 0;
	var uLocal_591 = 0;
	var uLocal_592 = 0;
	var uLocal_593 = 0;
	var uLocal_594 = 0;
	var uLocal_595 = 0;
	var uLocal_596 = 0;
	var uLocal_597 = 0;
	var uLocal_598 = 0;
	var uLocal_599 = 0;
	var uLocal_600 = 0;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 0;
	var uLocal_611 = 0;
	var uLocal_612 = 0;
	var uLocal_613 = 0;
	var uLocal_614 = 0;
	var uLocal_615 = 0;
	var uLocal_616 = 0;
	var uLocal_617 = 0;
	var uLocal_618 = 0;
	var uLocal_619 = 0;
	var uLocal_620 = 0;
	var uLocal_621 = 0;
	var uLocal_622 = 0;
	var uLocal_623 = 0;
	var uLocal_624 = 0;
	var uLocal_625 = 0;
	var uLocal_626 = 0;
	var uLocal_627 = 0;
	var uLocal_628 = 0;
	var uLocal_629 = 0;
	var uLocal_630 = 0;
	var uLocal_631 = 0;
	var uLocal_632 = 0;
	var uLocal_633 = 0;
	var uLocal_634 = 0;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 0;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 0;
	var uLocal_650 = 0;
	var uLocal_651 = 0;
	var uLocal_652 = 0;
	var uLocal_653 = 0;
	var uLocal_654 = 0;
	var uLocal_655 = 0;
	var uLocal_656 = 0;
	var uLocal_657 = 0;
	var uLocal_658 = 0;
	var uLocal_659 = 0;
	var uLocal_660 = 0;
	var uLocal_661 = 0;
	var uLocal_662 = 0;
	var uLocal_663 = 0;
	var uLocal_664 = 1;
	Ped pedScriptParam_0 = 0;
#endregion

void main() // Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;

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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	uLocal_56 = { 0f, 0f, 0f };
	iLocal_74 = -1;
	iLocal_76 = -1;
	iLocal_77 = -1;
	iLocal_78 = -1;
	iLocal_79 = -1;
	iLocal_80 = -1;
	iLocal_81 = -1;
	iLocal_82 = -1;
	iLocal_84 = -1;
	iLocal_86 = -1;
	iLocal_87 = -1;
	iLocal_293 = -1;
	fLocal_360 = (0.05f + 0.275f) - 0.01f;

	if (Global_3)
		SCRIPT::TERMINATE_THIS_THREAD();

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_554(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	
		if (func_553(PLAYER::PLAYER_ID(), true))
			SCRIPT::TERMINATE_THIS_THREAD();
	}

	if (func_552(13) || func_552(14))
		SCRIPT::TERMINATE_THIS_THREAD();

	if (!func_551() && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(35))
		{
			func_542();
			func_541(true);
			func_536(&uLocal_391);
		}
	}

	SYSTEM::WAIT(0);
	pedLocal_96 = pedScriptParam_0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_535();
		NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(2, false, PLAYER::PLAYER_ID());
		func_530(0, -1, false);
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	}

	func_529();
	func_528(128);

	while (bLocal_62)
	{
		flag = true;
		func_525(&uLocal_391);
	
		if (func_551())
		{
			if (func_524(1024))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::HAS_PED_HEAD_BLEND_FINISHED(PLAYER::PLAYER_PED_ID()) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(PLAYER::PLAYER_PED_ID()))
					{
						func_528(1024);
						PED::FINALIZE_HEAD_BLEND(PLAYER::PLAYER_PED_ID());
					}
				}
			}
		
			if (!func_524(1024) && func_524(2048))
				SCRIPT::TERMINATE_THIS_THREAD();
		
			if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
			{
				flag = false;
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				flag = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
		}
	
		if (!func_551() || !func_524(2048))
		{
			func_517();
		
			if (func_551())
			{
				func_516();
			
				if (func_524(128))
					bLocal_62 = false;
			}
		
			if (func_511())
			{
				if (flag)
				{
					if (iLocal_294 > 0)
						func_506(&uLocal_391);
				
					func_504();
					func_502();
				
					switch (iLocal_294)
					{
						case 0:
							if (iLocal_293 == -1)
							{
								if (TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_96))
									iLocal_293 = func_501();
								else if (func_499())
									iLocal_293 = 4;
							}
							else if (func_494())
							{
								if (func_493())
									if (func_551())
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
											TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
										else
											NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
									else
										TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_96, "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS", 0, false);
							
								iLocal_294 = 1;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_DETERMINE_TYPE");
							}
							break;
					
						case 1:
							if (func_491(iLocal_49, 4096))
								func_490();
						
							if (func_489())
							{
								iLocal_294 = 2;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_PLAYER");
							}
						
							if (func_484())
							{
								iLocal_294 = 3;
								func_482(&iLocal_49, 64);
								Global_32317 = true;
								func_492("Prostitue: moving to PROS_PB_CUSTOMER_OTHER");
							}
							break;
					
						case 2:
							func_98(&uLocal_391);
							break;
					
						case 3:
							func_3();
							break;
					
						default:
							break;
					}
				}
			}
			else
			{
				func_2(false);
			}
		
			func_1();
		}
	
		SYSTEM::WAIT(0);
	}

	func_491(iLocal_49, 2);
	func_492(" Something forced this exit!!!!!!~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	func_542();
	func_536(&uLocal_391);
	return;
}

void func_1() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_2(BOOL bParam0) // Hash - 0xA144670D ^0xA144670D
{
	if (bParam0)
		bLocal_62 = true;
	else
		bLocal_62 = false;

	return;
}

void func_3() // Hash - 0x507EA8AB ^0x314D9557
{
	if (iLocal_295 > 0)
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
			if (!PED::IS_PED_INJURED(pedLocal_97))
				if (!PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
					func_97();

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_97) || ENTITY::IS_ENTITY_DEAD(pedLocal_97, false))
		func_96(15);

	switch (iLocal_295)
	{
		case 0:
			if (!iLocal_296 == 0)
				iLocal_295 = 1;
			break;
	
		case 1:
			func_89();
			break;
	
		case 2:
			func_88();
			break;
	
		case 3:
			func_71();
			break;
	
		case 4:
			func_62();
			break;
	
		case 5:
			func_59();
			break;
	
		case 6:
			if (!PED::IS_PED_INJURED(pedLocal_97))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					iLocal_65 = MISC::GET_GAME_TIMER();
					iLocal_66 = iLocal_65 - iLocal_64;
				
					if (iLocal_66 >= 10000 || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, pedLocal_97, 12f, 12f, 5f, false, true, 0))
					{
						func_492("prostitute WAITING TO END");
						func_97();
					}
				}
			}
			else
			{
				func_97();
			}
			break;
	
		case 7:
			if (!PATHFIND::ARE_NODES_LOADED_FOR_AREA(func_58(0), func_58(1), func_58(2), func_58(3)))
			{
				PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(func_58(0), func_58(1), func_58(2), func_58(3));
			}
			else
			{
				TASK::TASK_VEHICLE_DRIVE_TO_COORD(pedLocal_97, veLocal_98, uLocal_90, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_98) * 0.65f, 0, 0, 786859, 4f, -1f);
				iLocal_295 = 8;
			}
			break;
	
		case 8:
			if (SYSTEM::VDIST2(uLocal_90, ENTITY::GET_ENTITY_COORDS(pedLocal_96, true)) < 25f && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_97, SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD) != 1)
			{
				iLocal_297 = MISC::GET_RANDOM_INT_IN_RANGE(1, 3);
				iLocal_295 = 11;
			}
		
			if (func_55(pedLocal_97))
				func_96(15);
			break;
	
		case 11:
			func_4();
			break;
	
		case 12:
			func_96(15);
			break;
	
		case 15:
			if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96) && ENTITY::DOES_ENTITY_EXIST(veLocal_98))
				if (PED::IS_PED_IN_VEHICLE(pedLocal_96, veLocal_98, false))
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_97, false))
						if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_97, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
							TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_96, 0, 16842752);
				else
					func_2(false);
			break;
	}

	return;
}

void func_4() // Hash - 0x3728F529 ^0x6FF50F9B
{
	switch (iLocal_302)
	{
		case 0:
			PED::SET_SCRIPTED_ANIM_SEAT_OFFSET(pedLocal_96, 0.916f);
		
			if (func_42(pedLocal_97))
			{
				func_40(&uLocal_119);
				iLocal_302 = 1;
			}
			break;
	
		case 1:
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), ENTITY::GET_ENTITY_COORDS(pedLocal_96, false)) < 22500f)
				func_38();
		
			func_35(veLocal_98);
		
			if (func_33(pedLocal_97))
			{
				func_11(&uLocal_122, "pbproau", "pbpro_pic", 4, 0, 0, 0);
				func_96(15);
			}
		
			if (func_7(&uLocal_119) > 1f)
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 7)
				{
					func_5(&iLocal_49, 512);
					iLocal_302 = 3;
				}
			}
			break;
	
		case 3:
			func_96(15);
			break;
	
		case 5:
			func_96(15);
			break;
	}

	return;
}

void func_5(var uParam0, int iParam1) // Hash - 0xF55E891F ^0xF55E891F
{
	func_6(uParam0, iParam1);
	return;
}

void func_6(var uParam0, int iParam1) // Hash - 0x9815F445 ^0x9815F445
{
	*uParam0 = *uParam0 - *uParam0 && iParam1;
	return;
}

float func_7(int* piParam0) // Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_8(BOOL bParam0) // Hash - 0xB0FB4432 ^0x9D798691
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

BOOL func_9(int* piParam0) // Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

BOOL func_10(int* piParam0) // Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

int func_11(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_32(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_12(sParam2, iParam3, false);
}

int func_12(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_31();
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
	
		if (func_30(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_29();
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
				func_22();
			
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
			
				if (func_21())
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
		
			if (func_20())
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
		
			func_19();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_18();
		func_13();
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
		func_31();
	}

	return 0;
}

void func_13() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_14())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_14() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_17())
		return false;

	if (func_15(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_15(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_16(plParam0, 20);
}

BOOL func_16(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_17() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_18() // Hash - 0xDB58E314 ^0xF41ED9F1
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

void func_19() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_20() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_21() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_22() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_552(14))
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
		Global_20383 = func_23();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

int func_23() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_24();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_24() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_27(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_26(PLAYER::PLAYER_PED_ID());
		
			if (func_25(num) && !func_552(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_25(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_25(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_26(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_27(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_27(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_25(iParam0))
		return func_28(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_28(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_29() // Hash - 0xBE88A374 ^0x9E84A0F6
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

BOOL func_30(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_31() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_32(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_33(Ped pedParam0) // Hash - 0x2CBE560C ^0xE46B8DBB
{
	if (func_34())
		if (!ENTITY::WOULD_ENTITY_BE_OCCLUDED(ENTITY::GET_ENTITY_MODEL(pedParam0), ENTITY::GET_ENTITY_COORDS(pedParam0, true), true))
			return true;

	return false;
}

BOOL func_34() // Hash - 0x2BF82AC3 ^0x2BF82AC3
{
	if (Global_22761)
		return true;

	return false;
}

void func_35(Vehicle veParam0) // Hash - 0x37F4A797 ^0x37F4A797
{
	if (iLocal_297 != 1 && iLocal_297 != 2)
		return;

	if (func_37())
		func_36(&veParam0);

	return;
}

void func_36(var uParam0) // Hash - 0x3B980811 ^0xC1A708D7
{
	Vector3 vector;
	Vector3 vector2;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		vector = { 0f, 0f, -0.1f };
		vector2 = { 0f, 0f, 0f };
		ENTITY::APPLY_FORCE_TO_ENTITY(*uParam0, 1, vector, vector2, 0, true, true, true, true, false);
	}

	return;
}

BOOL func_37() // Hash - 0xE5B42F43 ^0x3848ED0D
{
	return ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_96, joaat("SEX_BOUNCE"));
}

void func_38() // Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_39();
	return;
}

void func_39() // Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

void func_40(int* piParam0) // Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_41(piParam0, 0f);
	return;
}

void func_41(int* piParam0, float fParam1) // Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_8(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

BOOL func_42(Ped pedParam0) // Hash - 0xA9208275 ^0x5A07F8A0
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_63))
	{
		sLocal_63 = func_50(pedParam0, false, false);
		return false;
	}

	if (!STREAMING::HAS_ANIM_DICT_LOADED(sLocal_63))
	{
		return false;
	}
	else
	{
		func_43(pedLocal_96, func_49(), true, SYSTEM::FLOOR(15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_72) / 2f))), true);
	
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			func_43(pedParam0, func_49(), false, SYSTEM::FLOOR(15000f * (1f + (SYSTEM::TO_FLOAT(iLocal_72) / 2f))), true);
	
		func_492("anim_dict has loaded, triggering anims?");
		func_482(&iLocal_49, 512);
		return true;
	}

	return false;
}

void func_43(Ped pedParam0, BOOL bParam1, BOOL bParam2, int iParam3, BOOL bParam4) // Hash - 0x510C082A ^0xD1BD0848
{
	Vehicle vehiclePedIsIn;
	BOOL flag;
	char* animDict;
	int taskSequenceId;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return;

	evmLocal_48 = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) && func_48(false, true))
		if (evmLocal_48 != FIRST_PERSON)
			CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);

	flag = func_47(vehiclePedIsIn);
	animDict = func_50(pedParam0, false, false);

	if (!STREAMING::HAS_ANIM_DICT_LOADED(animDict))
	{
		STREAMING::REQUEST_ANIM_DICT(animDict);
	}
	else
	{
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(0, bParam2, bParam1, flag), 8f, -8f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(1, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(2, bParam2, bParam1, flag), 8f, -4f, iParam3, 1, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(3, bParam2, bParam1, flag), 8f, -4f, -1, 0, 0, false, false, false);
		TASK::TASK_PLAY_ANIM(0, animDict, func_44(4, bParam2, bParam1, flag), 4f, -2f, -1, 0, 0, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
	
		if (bParam4)
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

char* func_44(int iParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x2D583A39 ^0x504C2F4D
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(18);
					else
						str = func_46(23);
				else if (bParam1)
					str = func_46(8);
				else
					str = func_46(13);
			else if (bParam2)
				if (bParam1)
					str = func_45(18);
				else
					str = func_45(23);
			else if (bParam1)
				str = func_45(8);
			else
				str = func_45(13);
			break;
	
		case 1:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(19);
					else
						str = func_46(24);
				else if (bParam1)
					str = func_46(9);
				else
					str = func_46(14);
			else if (bParam2)
				if (bParam1)
					str = func_45(19);
				else
					str = func_45(24);
			else if (bParam1)
				str = func_45(9);
			else
				str = func_45(14);
			break;
	
		case 2:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(20);
					else
						str = func_46(25);
				else if (bParam1)
					str = func_46(10);
				else
					str = func_46(15);
			else if (bParam2)
				if (bParam1)
					str = func_45(20);
				else
					str = func_45(25);
			else if (bParam1)
				str = func_45(10);
			else
				str = func_45(15);
			break;
	
		case 3:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(21);
					else
						str = func_46(26);
				else if (bParam1)
					str = func_46(11);
				else
					str = func_46(16);
			else if (bParam2)
				if (bParam1)
					str = func_45(21);
				else
					str = func_45(26);
			else if (bParam1)
				str = func_45(11);
			else
				str = func_45(16);
			break;
	
		case 4:
			if (bParam3)
				if (bParam2)
					if (bParam1)
						str = func_46(22);
					else
						str = func_46(27);
				else if (bParam1)
					str = func_46(12);
				else
					str = func_46(17);
			else if (bParam2)
				if (bParam1)
					str = func_45(22);
				else
					str = func_45(27);
			else if (bParam1)
				str = func_45(12);
			else
				str = func_45(17);
			break;
	
		case 5:
			if (bParam3)
				if (bParam1)
					str = func_46(3);
				else
					str = func_46(2);
			else if (bParam1)
				str = func_45(3);
			else
				str = func_45(2);
			break;
	
		case 6:
			break;
	}

	return str;
}

char* func_45(int iParam0) // Hash - 0xAA08199C ^0xB7D14A97
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "into_proposition_male";
			break;
	
		case 1:
			str = "into_proposition_prostitute";
			break;
	
		case 2:
			str = "proposition_loop_male";
			break;
	
		case 3:
			str = "proposition_loop_prostitute";
			break;
	
		case 4:
			str = "proposition_to_exit_male";
			break;
	
		case 5:
			str = "prop_to_sit_alt_prostitute";
			break;
	
		case 6:
			str = "prop_to_sit_male";
			break;
	
		case 7:
			str = "prop_to_sit_prostitute";
			break;
	
		case 8:
			str = "proposition_to_sex_p1_prostitute";
			break;
	
		case 9:
			str = "proposition_to_sex_p2_prostitute";
			break;
	
		case 10:
			str = "sex_loop_prostitute";
			break;
	
		case 11:
			str = "sex_to_proposition_p1_prostitute";
			break;
	
		case 12:
			str = "sex_to_proposition_p2_prostitute";
			break;
	
		case 13:
			str = "proposition_to_sex_p1_male";
			break;
	
		case 14:
			str = "proposition_to_sex_p2_male";
			break;
	
		case 15:
			str = "sex_loop_male";
			break;
	
		case 16:
			str = "sex_to_proposition_p1_male";
			break;
	
		case 17:
			str = "sex_to_proposition_p2_male";
			break;
	
		case 18:
			str = "proposition_to_BJ_p1_prostitute";
			break;
	
		case 19:
			str = "proposition_to_BJ_p2_prostitute";
			break;
	
		case 20:
			str = "BJ_loop_prostitute";
			break;
	
		case 21:
			str = "BJ_to_proposition_p1_prostitute";
			break;
	
		case 22:
			str = "BJ_to_proposition_p2_prostitute";
			break;
	
		case 23:
			str = "proposition_to_BJ_p1_male";
			break;
	
		case 24:
			str = "proposition_to_BJ_p2_male";
			break;
	
		case 25:
			str = "BJ_loop_male";
			break;
	
		case 26:
			str = "BJ_to_proposition_p1_male";
			break;
	
		case 27:
			str = "BJ_to_proposition_p2_male";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

char* func_46(int iParam0) // Hash - 0xAA08199C ^0xD7B82CC2
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "low_car_sit_to_prop_player";
			break;
	
		case 1:
			str = "low_car_sit_to_prop_female";
			break;
	
		case 2:
			str = "low_car_prop_loop_player";
			break;
	
		case 3:
			str = "low_car_prop_loop_female";
			break;
	
		case 4:
			str = "low_car_prop_to_leave_player";
			break;
	
		case 5:
			str = "low_car_prop_to_sit_alt_female";
			break;
	
		case 6:
			str = "low_car_prop_to_sit_player";
			break;
	
		case 7:
			str = "low_car_prop_to_sit_female";
			break;
	
		case 8:
			str = "low_car_prop_to_sex_p1_female";
			break;
	
		case 9:
			str = "low_car_prop_to_sex_p2_female";
			break;
	
		case 10:
			str = "low_car_sex_loop_female";
			break;
	
		case 11:
			str = "low_car_sex_to_prop_p1_female";
			break;
	
		case 12:
			str = "low_car_sex_to_prop_p2_female";
			break;
	
		case 13:
			str = "low_car_prop_to_sex_p1_player";
			break;
	
		case 14:
			str = "low_car_prop_to_sex_p2_player";
			break;
	
		case 15:
			str = "low_car_sex_loop_player";
			break;
	
		case 16:
			str = "low_car_sex_to_prop_p1_player";
			break;
	
		case 17:
			str = "low_car_sex_to_prop_p2_player";
			break;
	
		case 18:
			str = "low_car_prop_to_bj_p1_female";
			break;
	
		case 19:
			str = "low_car_prop_to_bj_p2_female";
			break;
	
		case 20:
			str = "low_car_bj_loop_female";
			break;
	
		case 21:
			str = "low_car_bj_to_prop_p1_female";
			break;
	
		case 22:
			str = "low_car_bj_to_prop_p2_female";
			break;
	
		case 23:
			str = "low_car_prop_to_bj_p1_player";
			break;
	
		case 24:
			str = "low_car_prop_to_bj_p2_player";
			break;
	
		case 25:
			str = "low_car_bj_loop_player";
			break;
	
		case 26:
			str = "low_car_bj_to_prop_p1_player";
			break;
	
		case 27:
			str = "low_car_bj_to_prop_p2_player";
			break;
	
		default:
			str = "";
			break;
	}

	return str;
}

BOOL func_47(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
				return true;
		}
	}

	return false;
}

BOOL func_48(BOOL bParam0, BOOL bParam1) // Hash - 0x7552C7C8 ^0x3187BB99
{
	BOOL flag;

	flag = false;

	if (bParam0)
		flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_FOOT) == FIRST_PERSON;

	if (bParam1)
		if (!flag)
			flag = CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_VEHICLE) == FIRST_PERSON;

	return flag;
}

BOOL func_49() // Hash - 0xCB5A20F8 ^0xCB5A20F8
{
	return iLocal_297 == 0;
}

char* func_50(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xACA338EA ^0xCDE1556A
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_47(vehiclePedIsIn))
				if (!func_48(false, true) || bParam2 && !bParam1)
					return func_54();
				else
					return func_53();
			else if (ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("VSTR"))
				return "anim@mini@prostitutes@sex@veh_vstr@";
	}

	if (!func_48(false, true) || bParam2 && !bParam1)
		return func_52();

	return func_51();
}

char* func_51() // Hash - 0x306ACA3A ^0xDF040AB0
{
	return "mini@prostitutes@sexnorm_veh_first_person";
}

char* func_52() // Hash - 0x306ACA3A ^0x640FF4D2
{
	return "mini@prostitutes@sexnorm_veh";
}

char* func_53() // Hash - 0x306ACA3A ^0x502E1F29
{
	return "mini@prostitutes@sexlow_veh_first_person";
}

char* func_54() // Hash - 0x306ACA3A ^0x2B917757
{
	return "mini@prostitutes@sexlow_veh";
}

BOOL func_55(Ped pedParam0) // Hash - 0x38BD3C61 ^0x8AC0F341
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		if (PED::IS_PED_BEING_JACKED(pedParam0) || !func_57(pedParam0, veLocal_98, -1))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
		
			if (func_56())
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
			else if (!ENTITY::IS_ENTITY_DEAD(PED::GET_PEDS_JACKER(pedParam0), false))
				TASK::TASK_COMBAT_PED(pedParam0, PED::GET_PEDS_JACKER(pedParam0), 0, 16);
			else
				TASK::TASK_SMART_FLEE_COORD(pedParam0, entityCoords, 300f, -1, true, true);
		}
	}

	return false;
}

BOOL func_56() // Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

BOOL func_57(Ped pedParam0, Vehicle veParam1, int iParam2) // Hash - 0xEBF29DE8 ^0x42E5DC86
{
	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
		if (PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1))
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, iParam2, false) == pedParam0)
				return true;

	return false;
}

float func_58(int iParam0) // Hash - 0x5C4004D6 ^0x7D920C44
{
	float entityCoords;
	float num;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };
	num = { uLocal_90 };

	if (iParam0 == 0)
		if (entityCoords < num)
			return entityCoords - 20f;
		else
			return num - 20f;

	if (iParam0 == 1)
		if (entityCoords.f_1 < num.f_1)
			return entityCoords.f_1 - 20f;
		else
			return num.f_1 - 20f;

	if (iParam0 == 2)
		if (entityCoords > num)
			return entityCoords + 20f;
		else
			return num + 20f;

	if (entityCoords.f_1 > num.f_1)
		return entityCoords.f_1 + 20f;

	return num.f_1 + 20f;
}

void func_59() // Hash - 0x81744258 ^0x60D5ADD6
{
	if (!PED::IS_PED_INJURED(pedLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_96) > 0)
					{
						if (PED::IS_PED_IN_VEHICLE(pedLocal_96, veLocal_98, false))
						{
							func_492("prostitute WAITING TO END   - DRIVING OFF (WANDER)");
							TASK::OPEN_SEQUENCE_TASK(&iLocal_101);
							TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_98, 10f, 786603);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_101);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_97, iLocal_101);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
							uLocal_90 = { func_60(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true)) };
							STREAMING::REQUEST_ANIM_DICT(func_50(pedLocal_96, false, false));
							iLocal_295 = 7;
							iLocal_64 = MISC::GET_GAME_TIMER();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

Vector3 func_60(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0xB17C2E3F ^0x15A8638E
{
	int num;
	int i;

	num = 0;

	for (i = 0; i < 32; i = i + 1)
	{
		if (SYSTEM::VDIST2(vParam0, func_61(i)) < SYSTEM::VDIST2(vParam0, func_61(num)))
			num = i;
	}

	return func_61(num);
}

Vector3 func_61(int iParam0) // Hash - 0x8BB0B56F ^0x8BB0B56F
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk = { -1449.0748f, -634.0139f, 29.094f };
			break;
	
		case 1:
			unk = { -1266.2913f, -1361.1747f, 3.222f };
			break;
	
		case 2:
			unk = { -227.0429f, 311.6679f, 91.1655f };
			break;
	
		case 3:
			unk = { -1310.9777f, -235.9881f, 41.1789f };
			break;
	
		case 4:
			unk = { -545.299f, -874.6625f, 26.1981f };
			break;
	
		case 5:
			unk = { -192.1116f, -1332.3854f, 30.3304f };
			break;
	
		case 6:
			unk = { 196.6188f, -1850.3964f, 26.2005f };
			break;
	
		case 7:
			unk = { 322.9744f, -1000.2299f, 28.2401f };
			break;
	
		case 8:
			unk = { 38.824f, -98.3984f, 55.2507f };
			break;
	
		case 9:
			unk = { -1800.7599f, -404.1213f, 43.8109f };
			break;
	
		case 10:
			unk = { 1421.3337f, -1618.8297f, 58.3324f };
			break;
	
		case 11:
			unk = { 983.5914f, -2360.14f, 29.5098f };
			break;
	
		case 12:
			unk = { 97.9046f, -2501.28f, 5.0001f };
			break;
	
		case 13:
			unk = { 1591.9209f, 6516.8413f, 16.3155f };
			break;
	
		case 14:
			unk = { 1278.7299f, 3624.059f, 32.0408f };
			break;
	
		case 15:
			unk = { 2464.6675f, 5526.8154f, 44.2143f };
			break;
	
		case 16:
			unk = { 2052.5796f, 4637.4766f, 39.642f };
			break;
	
		case 17:
			unk = { 1435.6084f, 4483.9507f, 49.2513f };
			break;
	
		case 18:
			unk = { 218.214f, 4439.288f, 66.9056f };
			break;
	
		case 19:
			unk = { 16.9496f, 3632.3499f, 39.2848f };
			break;
	
		case 20:
			unk = { 2.0464f, 3293.74f, 40.2594f };
			break;
	
		case 21:
			unk = { -1195.701f, 2639.13f, 15.1653f };
			break;
	
		case 22:
			unk = { -1663.6412f, 2477.778f, 30.9941f };
			break;
	
		case 23:
			unk = { -2505.643f, 3677.8252f, 12.1719f };
			break;
	
		case 24:
			unk = { -2179.2092f, 4264.236f, 47.9904f };
			break;
	
		case 25:
			unk = { -758.9616f, 5612.7803f, 29.4536f };
			break;
	
		case 26:
			unk = { -276.8032f, 6327.1885f, 31.4262f };
			break;
	
		case 27:
			unk = { 1483.8394f, 6366.199f, 22.6875f };
			break;
	
		case 28:
			unk = { 949.013f, 3551.7532f, 32.9687f };
			break;
	
		case 29:
			unk = { 180.9372f, 3051.7812f, 42.1131f };
			break;
	
		case 30:
			unk = { -462.9046f, 6115.419f, 28.8805f };
			break;
	
		case 31:
			unk = { -256.3564f, 6056.516f, 30.9808f };
			break;
	}

	return unk;
}

void func_62() // Hash - 0x6EC46418 ^0xA72F547D
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_98);
			
				if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_97, pedLocal_96, 15f, 15f, 5f, false, true, 0) && entitySpeed <= 1f)
				{
					func_69(pedLocal_96);
					iLocal_65 = MISC::GET_GAME_TIMER();
					iLocal_66 = iLocal_65 - iLocal_64;
				
					if (iLocal_66 >= iLocal_68)
					{
						if (func_551())
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_97))
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
						else
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
					
						iLocal_68 = MISC::GET_RANDOM_INT_IN_RANGE(0, 10000);
					
						if (iLocal_68 > 2500)
						{
							TASK::CLEAR_PED_TASKS(pedLocal_96);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_101);
							TASK::TASK_ENTER_VEHICLE(0, veLocal_98, -1, 0, 1f, 8388609, 0);
							TASK::TASK_STAND_STILL(0, -1);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_101);
							TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, iLocal_101);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
							func_492("other GIVES MONEY");
							iLocal_295 = 5;
						}
						else
						{
							func_68();
							func_63();
						
							if (!PED::IS_PED_INJURED(pedLocal_97))
							{
								if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
								{
									if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
									{
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
										TASK::OPEN_SEQUENCE_TASK(&iLocal_101);
										TASK::TASK_STAND_STILL(0, MISC::GET_RANDOM_INT_IN_RANGE(500, 2000));
										TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_98, 10f, 786603);
										TASK::CLOSE_SEQUENCE_TASK(iLocal_101);
										TASK::TASK_PERFORM_SEQUENCE(pedLocal_97, iLocal_101);
										TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
										iLocal_64 = MISC::GET_GAME_TIMER();
									}
								}
							}
						
							func_492("prostitute REFUSED MONEY 2");
						
							if (func_551())
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_97))
									TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
							else
								TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
						
							iLocal_295 = 6;
						}
					}
				}
				else
				{
					if (func_551())
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_97))
							TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
					else
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
				
					func_97();
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
			
				if (func_551())
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_97))
						TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
				else
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_97);
			
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

BOOL func_63() // Hash - 0x9608CFD8 ^0x97819957
{
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_96) || PED::IS_PED_INJURED(pedLocal_96))
		return true;

	if (!func_551())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		
			if (func_491(iLocal_75, 524288))
				TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(7), 8f, -1.5f, -1, 0, 0, false, false, false);
		
			func_64(true);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			func_482(&iLocal_49, 16384);
			func_40(&uLocal_113);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
		}
	}

	switch (iLocal_54)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
				iLocal_54 = 1;
			break;
	
		case 1:
			if (func_491(iLocal_75, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(7), 8f, -1.5f, -1, 0, 0, false, false, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
					return false;
				}
			}
		
			iLocal_54 = 2;
			break;
	
		case 2:
			if (func_491(iLocal_75, 524288))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PLAY_ANIM) == 7)
					{
						func_64(false);
						iLocal_54 = 3;
					}
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
				}
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				func_64(false);
				iLocal_54 = 3;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
			break;
	
		case 3:
			func_482(&iLocal_49, 16384);
			func_40(&uLocal_113);
			return true;
	}

	return false;
}

void func_64(BOOL bParam0) // Hash - 0x774D62FA ^0xBC5DFD75
{
	Vector3 entityCoords;

	if (TASK::PED_HAS_USE_SCENARIO_TASK(pedLocal_96) || TASK::IS_PED_ACTIVE_IN_SCENARIO(pedLocal_96) || PED::IS_PED_USING_SCENARIO(pedLocal_96, func_65(0)) || PED::IS_PED_USING_SCENARIO(pedLocal_96, func_65(1)))
		return;

	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };

	if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(1), 20f, true))
	{
		if (bParam0)
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
		else
			TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
	
		return;
	}

	if (!bParam0)
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(pedLocal_96, entityCoords, 20f, 0);
	else
		TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, entityCoords, 20f, 0);

	return;
}

char* func_65(int iParam0) // Hash - 0xF801B75B ^0xA9D69D6F
{
	if (iParam0 == 0)
		return "WORLD_HUMAN_PROSTITUTE_LOW_CLASS";

	return "WORLD_HUMAN_PROSTITUTE_HIGH_CLASS";
}

char* func_66(int iParam0) // Hash - 0xE6862179 ^0x10A0D2B3
{
	switch (iParam0)
	{
		case 0:
			return "idle_intro";
	
		case 1:
			return "idle_a";
	
		case 2:
			return "idle_b";
	
		case 3:
			return "idle_c";
	
		case 4:
			return "idle_wait";
	
		case 5:
			return "idle_reject";
	
		case 8:
			return "idle_reject_loop_a";
	
		case 9:
			return "idle_reject_loop_b";
	
		case 10:
			return "idle_reject_loop_c";
	
		case 11:
			return "idle_outro";
	
		case 6:
			return "reject_2_idle";
	
		case 7:
			return "reject_outro";
	}

	return "";
}

char* func_67(int iParam0) // Hash - 0x38DFB2 ^0x1E710607
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "mini@hookers_spcrackhead";
			break;
	
		case 1:
			str = "mini@hookers_spcokehead";
			break;
	
		case 3:
		case 4:
			str = "mini@hookers_spfrench";
			break;
	
		case 2:
		default:
			str = "mini@hookers_spvanilla";
			break;
	}

	return str;
}

void func_68() // Hash - 0x898858AA ^0x40A73970
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		if (func_23() == 2)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_DECLINED_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_DECLINED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_69(Ped pedParam0) // Hash - 0x2A1AB2DC ^0x5567E6D
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (func_70(pedParam0))
			PED::SET_PED_RESET_FLAG(pedParam0, 109, true);

	return;
}

BOOL func_70(Ped pedParam0) // Hash - 0x8D1C1D17 ^0x64990F19
{
	if (!PED::IS_PED_INJURED(pedParam0))
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_293), func_66(1), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_293), func_66(2), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_67(iLocal_293), func_66(3), 3))
			return true;

	return false;
}

void func_71() // Hash - 0x84A62AB0 ^0xF0DA2D89
{
	float entitySpeed;

	if (!PED::IS_PED_INJURED(pedLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
				{
					if (TASK::GET_SEQUENCE_PROGRESS(pedLocal_96) > 1)
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, pedLocal_97, 20f, 20f, 10f, false, true, 0))
						{
							entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_98);
						
							if (entitySpeed <= 1f)
							{
								func_72(false);
								iLocal_64 = MISC::GET_GAME_TIMER();
								iLocal_68 = MISC::GET_RANDOM_INT_IN_RANGE(4000, 8000);
								func_492("prostitute proposition other in VEHICLE VEHICLE");
								iLocal_295 = 4;
							}
						}
						else
						{
							func_492("EXIT - OTHER IN VEHICLE OUT OF RANGE");
							func_97();
						}
					}
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

BOOL func_72(BOOL bParam0) // Hash - 0xEB7382DD ^0x6CC07D1B
{
	int randomIntInRange;
	int taskSequenceId;

	if (!func_551())
	{
		if (bParam0)
		{
			AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_96, "PROSTITUTE_GROUP", 0);
			func_87("PROSTITUTES_SOLICIT_SCENE");
		}
	
		func_73();
	
		if (func_491(iLocal_49, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(0), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	switch (iLocal_53)
	{
		case 0:
			if (bParam0)
			{
				AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(pedLocal_96, "PROSTITUTE_GROUP", 0);
				func_87("PROSTITUTES_SOLICIT_SCENE");
			}
		
			func_73();
			iLocal_53 = 1;
			break;
	
		case 1:
			if (func_491(iLocal_49, 4194304))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				{
					TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(0), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_53 = 2;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
				}
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(1, 4);
					TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(randomIntInRange), 2f, -2f, -1, 0, 0, false, false, false);
					iLocal_53 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
			break;
	
		case 3:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, 0, false, false, false);
					iLocal_53 = 4;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
			break;
	
		case 4:
			iLocal_53 = 0;
			return true;
	}

	return false;
}

void func_73() // Hash - 0xFBCF9E19 ^0x998D9E23
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
	{
		switch (func_23())
		{
			case 0:
				if (!func_74(pedLocal_96))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_MICHAEL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_MICHAEL_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case 1:
				if (!func_74(pedLocal_96))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_FRANKLIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_FRANKLIN_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		
			case 2:
				if (!func_74(pedLocal_96))
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_TREVOR", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				else
					AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SOLICIT_TREVOR_RETURN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
				break;
		}
	}

	return;
}

BOOL func_74(Ped pedParam0) // Hash - 0x56F579E4 ^0x56F579E4
{
	int num;

	num = func_77(pedParam0);
	return func_75(num);
}

BOOL func_75(int iParam0) // Hash - 0x883D18AC ^0x883D18AC
{
	if (func_76(iParam0) > 0)
		return true;

	return false;
}

int func_76(int iParam0) // Hash - 0xD1539DEF ^0xD8AA8CA0
{
	int num;

	num = 0;

	if (iParam0 == -1)
		return 0;

	if (func_23() == 0)
		num = Global_113648.f_10051.f_1[iParam0 /*11*/][0];
	else if (func_23() == 1)
		num = Global_113648.f_10051.f_1[iParam0 /*11*/][1];
	else if (func_23() == 2)
		num = Global_113648.f_10051.f_1[iParam0 /*11*/][2];

	return num;
}

int func_77(Ped pedParam0) // Hash - 0xF1A29C46 ^0x281C9B03
{
	int i;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		for (i = 0; i < 8; i = i + 1)
		{
			if (func_76(i) > 0)
				if (func_83(pedParam0, i) && func_79(pedParam0, i) && func_78(pedParam0, i))
					return i;
		}
	}

	return -1;
}

BOOL func_78(Ped pedParam0, int iParam1) // Hash - 0x7F3C6943 ^0x5616AA17
{
	if (PED::IS_PED_MODEL(pedParam0, Global_113648.f_10051.f_1[iParam1 /*11*/].f_10))
		return true;

	return false;
}

int func_79(Ped pedParam0, int iParam1) // Hash - 0x54117F2B ^0x54117F2B
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_80(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_80(Ped pedParam0, int iParam1, int iParam2) // Hash - 0xA7DFF1A1 ^0x24B3D250
{
	ePedComponentType componentId;

	componentId = func_82(iParam2);
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, componentId) == func_81(iParam1, iParam2);
}

int func_81(int iParam0, int iParam1) // Hash - 0x39A1739B ^0xB19D6671
{
	if (func_75(iParam0))
		return Global_113648.f_10051.f_1[iParam0 /*11*/].f_7[iParam1];

	return -1;
}

ePedComponentType func_82(int iParam0) // Hash - 0x632E2341 ^0x632E2341
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

int func_83(Ped pedParam0, int iParam1) // Hash - 0x54117F2B ^0x54117F2B
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (!func_84(pedParam0, iParam1, i))
			return 0;
	}

	return 1;
}

BOOL func_84(Ped pedParam0, int iParam1, int iParam2) // Hash - 0xA7DFF1A1 ^0xAC3C1FD0
{
	ePedComponentType componentId;

	componentId = func_86(iParam2);
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, componentId) == func_85(iParam1, iParam2);
}

int func_85(int iParam0, int iParam1) // Hash - 0x39A1739B ^0x3BBD7C3
{
	if (func_75(iParam0))
		return Global_113648.f_10051.f_1[iParam0 /*11*/].f_4[iParam1];

	return -1;
}

ePedComponentType func_86(int iParam0) // Hash - 0x632E2341 ^0x632E2341
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 0;
			break;
	
		case 1:
			num = 2;
			break;
	}

	return num;
}

void func_87(char* sParam0) // Hash - 0x6246AFC2 ^0x959D2FB6
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::START_AUDIO_SCENE(sParam0);

	return;
}

void func_88() // Hash - 0xBDA97886 ^0xC02F658B
{
	float entitySpeed;
	var maximum;
	var minimum;
	var unk5;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
			{
				entitySpeed = ENTITY::GET_ENTITY_SPEED(veLocal_98);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_97, SCRIPT_TASK_VEHICLE_PARK) == 7 || entitySpeed <= 1f)
				{
					MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_98), &minimum, &maximum);
					unk5 = { maximum - minimum };
					unk5 = { unk5 / { 2f, 2f, 2f } };
					offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_98, 0.2f, 0.2f, 0f) };
					offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_98, 0.2f, 0.2f, 0f) };
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };
				
					if (SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords))
						offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };
				
					TASK::OPEN_SEQUENCE_TASK(&iLocal_101);
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 0.5f, 8192, 1193033728);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, pedLocal_97, 0);
					TASK::TASK_STAND_STILL(0, -1);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_101);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, iLocal_101);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_101);
					func_492("prostitute ASKING OTHER FOR MONEY BY VEHICLE");
					iLocal_295 = 3;
				}
				else
				{
					func_492("WAITING FOR CUTSTOMER FINSIH TASK OR STOP");
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF VEHICLE");
				func_97();
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_97();
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_97();
	}

	return;
}

void func_89() // Hash - 0x92A1B84E ^0xCC97EF61
{
	Vector3 entityCoords;

	if (!PED::IS_PED_INJURED(pedLocal_97))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (PED::IS_PED_IN_VEHICLE(pedLocal_97, veLocal_98, false))
			{
				if (func_91(&veLocal_98))
				{
					if (func_90(ENTITY::GET_ENTITY_COORDS(pedLocal_97, true), 1106247680))
						return;
				
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };
				
					if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(entityCoords, &entityCoords, 8, 1077936128, 0))
					{
						PED::SET_DRIVER_ABILITY(pedLocal_97, 1f);
						PED::SET_DRIVER_RACING_MODIFIER(pedLocal_97, 0.2f);
						PED::SET_DRIVER_AGGRESSIVENESS(pedLocal_97, 0.05f);
						TASK::TASK_VEHICLE_PARK(pedLocal_97, veLocal_98, entityCoords, 0f, 3, 360f, true);
						TASK::TASK_LOOK_AT_ENTITY(pedLocal_97, pedLocal_96, -1, SLF_WHILE_NOT_IN_FOV, 4);
						func_492("OTHER TOLD TO PULL OVER");
						iLocal_295 = 2;
					}
				}
				else
				{
					func_492("EXIT - Vehicle is not suitable");
					func_96(15);
				}
			}
			else
			{
				func_492("EXIT - OTHER OUT OF THE VEHICLE");
				func_96(15);
			}
		}
		else
		{
			func_492("EXIT - OTHER VEHICLE DEAD");
			func_96(15);
		}
	}
	else
	{
		func_492("EXIT - OTHER ped INJURED");
		func_96(15);
	}

	return;
}

BOOL func_90(var uParam0, var uParam1, var uParam2, int iParam3) // Hash - 0xD7278001 ^0x1AA09E5C
{
	if (func_551())
		return PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });

	return VEHICLE::IS_COP_VEHICLE_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 }) || PED::IS_COP_PED_IN_AREA_3D(uParam0 - { iParam3, iParam3, iParam3 }, uParam0 + { iParam3, iParam3, iParam3 });
}

BOOL func_91(var uParam0) // Hash - 0x7D82745E ^0xDA053EDD
{
	Hash entityModel;
	int vehicleNumberOfPassengers;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(*uParam0);
	
		if (func_94(entityModel, false) && func_93(*uParam0))
		{
			if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(*uParam0) > 0)
			{
				vehicleNumberOfPassengers = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*uParam0, false, true);
			
				if (vehicleNumberOfPassengers == 0 && VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, 0, false) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 1) && !VEHICLE::IS_VEHICLE_DOOR_DAMAGED(*uParam0, 0) || VEHICLE::GET_PED_IN_VEHICLE_SEAT(*uParam0, 0, false) == pedLocal_96)
				{
					if (func_47(*uParam0))
					{
						if (!func_491(iLocal_49, 32768))
						{
							func_482(&iLocal_49, 32768);
						
							if (!func_491(iLocal_49, 8))
							{
								STREAMING::REQUEST_CLIP_SET(func_92());
								func_482(&iLocal_49, 8);
							}
						}
					}
					else
					{
						if (func_491(iLocal_49, 32768))
							func_5(&iLocal_49, 32768);
					
						if (func_491(iLocal_49, 8))
						{
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
							{
								STREAMING::REMOVE_CLIP_SET(func_92());
								func_5(&iLocal_49, 8);
							}
						}
					}
				
					return true;
				}
			}
		}
	}

	return false;
}

char* func_92() // Hash - 0x306ACA3A ^0xEDF44709
{
	return "clipset@veh@low@ps@female@base";
}

int func_93(Vehicle veParam0) // Hash - 0x13CBDF45 ^0x4E7F803E
{
	int i;
	int modType;
	Hash hashKey;
	var unk;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			for (i = 0; i < 49; i = i + 1)
			{
				modType = i;
			
				if (modType != 17 && modType != 18 && modType != 19 && modType != 20 && modType != 21 && modType != 22)
				{
					if (VEHICLE::GET_VEHICLE_MOD(veParam0, modType) != -1)
					{
						TEXT_LABEL_ASSIGN_STRING(&unk, VEHICLE::GET_MOD_TEXT_LABEL(veParam0, modType, VEHICLE::GET_VEHICLE_MOD(veParam0, modType)), 16);
						hashKey = MISC::GET_HASH_KEY(&unk);
					
						if (hashKey != 0)
							if (hashKey == MISC::GET_HASH_KEY(_("Stunt Cage")))
								return 0;
					}
				}
			}
		}
	
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case joaat("PEYOTE2"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4))
					return 0;
				break;
		
			case joaat("PEYOTE3"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 2) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 3) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 4) && !VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("COQUETTE4"):
				if (!VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("ZORRUSSO"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1)
					return 0;
				break;
		
			case joaat("MANANA2"):
				if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 1))
					return 0;
				break;
		
			case joaat("RT3000"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == -1 || VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 3)
					return 0;
				break;
		
			case joaat("ENTITY3"):
				if (VEHICLE::GET_VEHICLE_MOD(veParam0, 10) == 0)
					return 0;
				break;
		}
	
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW"):
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_SENTINEL2"):
			case joaat("LAYOUT_STANDARD"):
			case joaat("LAYOUT_STD_EXITFIXUP"):
			case joaat("LAYOUT_STD_HABANERO"):
			case joaat("LAYOUT_STD_STRETCH"):
			case joaat("LAYOUT_STD_HIGHWINDOW"):
			case joaat("LAYOUT_RANGER"):
			case joaat("LAYOUT_RANGER_SWAT"):
			case joaat("LAYOUT_4X4"):
			case joaat("LAYOUT_BISON"):
			case joaat("LAYOUT_VAN_BODHI"):
			case joaat("LAYOUT_STD_LOWROOF"):
			case joaat("LAYOUT_STD_STRATUM"):
			case joaat("LAYOUT_VAN_ROOSEVELT"):
			case joaat("LAYOUT_STD_HUNTLEY"):
			case joaat("LAYOUT_STD_WARRENER"):
			case joaat("LAYOUT_LOW_BLADE"):
			case joaat("LAYOUT_LOW_FURORE"):
			case joaat("LAYOUT_STD_KURUMA"):
			case joaat("LAYOUT_STD_BLISTA2"):
			case joaat("LAYOUT_STD_CHINO"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
			case joaat("LAYOUT_STD_LOWRIDER"):
			case joaat("LAYOUT_STD_LOWRIDER_CHINO"):
			case joaat("LAYOUT_STD_LOWRIDER_SIDEDOOR"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_STD_BALLER4"):
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
			case joaat("LAYOUT_STD_LOWRIDER2"):
			case joaat("LAYOUT_STD_LOWRIDER2_SIDEDOOR"):
			case joaat("LAYOUT_STD_LOWRIDER2_SLAMVAN"):
			case joaat("LAYOUT_STD_WINDSOR2"):
			case joaat("LAYOUT_STD_XLS"):
			case joaat("LAYOUT_LOW_LE7B"):
			case joaat("LAYOUT_STD_OMNIS"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_INFERNUS2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_SC1"):
			case joaat("LAYOUT_STD_NEON"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_DOMINATOR3"):
			case joaat("LAYOUT_LOW_TAIPAN"):
			case joaat("LAYOUT_LOW_ITALIGTO"):
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
			case joaat("LAYOUT_RANGER_TOROS"):
			case joaat("LAYOUT_STD_DEVIANT"):
			case joaat("LAYOUT_STD_DRAFTER"):
			case joaat("LAYOUT_STD_DYNASTY"):
			case joaat("LAYOUT_STD_PARAGON"):
			case joaat("LAYOUT_STD_ZION3"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_PEYOTE2"):
			case joaat("LAYOUT_LOW_NEO"):
			case joaat("LAYOUT_RANGER_NOVAK"):
			case joaat("LAYOUT_RANGER_EVERON"):
			case joaat("LAYOUT_LOW_PEYOTE3"):
			case joaat("LAYOUT_RANGER_SEMINOLE2"):
			case joaat("LAYOUT_LOW_CALICO"):
			case joaat("LAYOUT_STD_CYPHER"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_STANDARD_SULTAN3"):
			case joaat("LAYOUT_STD_WARRENER2"):
			case joaat("LAYOUT_LOW_ZR350"):
			case joaat("LAYOUT_LOW_IGNUS"):
			case joaat("LAYOUT_STANDARD_BUFFALO4"):
			case joaat("LAYOUT_STD_ASTRON"):
			case joaat("LAYOUT_STD_CINQUEMILA"):
			case joaat("LAYOUT_STD_DEITY"):
			case joaat("LAYOUT_STD_GRANGER2"):
			case joaat("LAYOUT_STD_I-WAGEN"):
			case joaat("LAYOUT_LOW_ZENO"):
			case joaat("LAYOUT_STD_S95"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_STD_RHINEHART"):
			case joaat("LAYOUT_STANDARD_SENTINEL4"):
			case joaat("LAYOUT_LOW_TORERO2"):
			case joaat("LAYOUT_STD_GREENWOOD"):
			case -607167196:
			case -1809273022:
			case 342836334:
			case -581105676:
				return 1;
		}
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_RIPLEY") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("SLAMVAN"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("WEEVIL") || ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("BRIOSO2"))
			return 1;
	
		if (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0) == joaat("LAYOUT_STD_ISSI3") && ENTITY::GET_ENTITY_MODEL(veParam0) == joaat("BRIOSO3"))
			return 1;
	}

	return 0;
}

int func_94(Hash hParam0, BOOL bParam1) // Hash - 0xFACD3603 ^0xD11AEDC7
{
	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0) || VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0))
		return 0;

	if (func_95(hParam0))
		return 0;

	if (!bParam1)
		if (hParam0 == joaat("POLICE") || hParam0 == joaat("POLICE2") || hParam0 == joaat("POLICE3") || hParam0 == joaat("POLICE4") || hParam0 == joaat("FBI") || hParam0 == joaat("FBI2") || hParam0 == joaat("CADDY") || hParam0 == joaat("CADDY2"))
			return 0;

	if (hParam0 == joaat("ISSI2") || hParam0 == joaat("HOTKNIFE") || hParam0 == joaat("JB700") || hParam0 == joaat("JESTER") || hParam0 == joaat("JESTER2") || hParam0 == joaat("STROMBERG") || hParam0 == joaat("BARRAGE") || hParam0 == joaat("KAMACHO") || hParam0 == joaat("GB200") || hParam0 == joaat("FAGALOA") || hParam0 == joaat("TEZERACT") || hParam0 == joaat("SWINGER") || hParam0 == joaat("IMPERATOR") || hParam0 == joaat("LOCUST") || hParam0 == joaat("SCHLAGEN") || hParam0 == joaat("OUTLAW") || hParam0 == joaat("COMET7") || hParam0 == joaat("YOUGA4") || hParam0 == joaat("SM722"))
		return 0;

	return 1;
}

BOOL func_95(Hash hParam0) // Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case joaat("POLICE"):
		case joaat("POLICE2"):
		case joaat("POLICE3"):
		case joaat("POLICE4"):
		case joaat("POLMAV"):
		case joaat("POLICEB"):
		case joaat("POLICET"):
		case joaat("POLICEOLD2"):
		case joaat("POLICEOLD1"):
		case joaat("SHERIFF"):
		case joaat("SHERIFF2"):
			return true;
	}

	return false;
}

void func_96(int iParam0) // Hash - 0x7B76730 ^0x7B76730
{
	iLocal_295 = iParam0;
	return;
}

void func_97() // Hash - 0xD45AD05 ^0x7C2204F6
{
	if (func_551())
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
		{
			TASK::CLEAR_PED_TASKS(pedLocal_96);
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_96);
		TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
	}

	pedLocal_97 = 0;
	veLocal_98 = 0;
	TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(4), 2f, -2f, -1, 1, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 0.9f), false, false, false);
	func_96(0);
	iLocal_296 = 0;
	iLocal_294 = 1;
	return;
}

void func_98(var uParam0) // Hash - 0xD88FA69A ^0xF03DFA2A
{
	if (!func_491(iLocal_49, 32))
		iLocal_294 = 1;

	if (iLocal_295 > 1 && iLocal_295 != 12)
	{
		if (!func_491(iLocal_49, 33554432))
		{
			if (func_551())
			{
				if (Global_1926703 || func_474())
				{
					func_473(false);
					func_482(&iLocal_49, 33554432);
				}
			}
		
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				if (func_491(iLocal_49, 1048576) || func_491(iLocal_49, 8192))
				{
					func_473(false);
					func_482(&iLocal_49, 33554432);
				}
			}
		}
	}

	switch (iLocal_295)
	{
		case 0:
			if (func_491(iLocal_49, 16384) || func_491(iLocal_49, 8388608))
			{
				if (!func_10(&uLocal_113))
					func_472(&uLocal_113);
			
				if (func_471(&uLocal_113, 25f))
				{
					func_5(&iLocal_49, 16384);
					func_5(&iLocal_49, 8388608);
				}
			}
			else if (iLocal_296 != 0 && !func_470(_("You need more cash to pick up a prostitute.")))
			{
				func_64(false);
			
				switch (func_23())
				{
					case 0:
						func_469(&uLocal_122, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
						break;
				
					case 1:
						func_469(&uLocal_122, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
						break;
				
					case 2:
						func_469(&uLocal_122, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
						break;
				}
			
				iLocal_295 = 1;
			}
			else
			{
				func_468();
				iLocal_296 = 2;
			}
			break;
	
		case 1:
			func_455(uParam0);
			break;
	
		case 2:
			func_442(uParam0);
			break;
	
		case 3:
			func_441();
			break;
	
		case 4:
			func_429(uParam0);
			break;
	
		case 5:
			func_411();
			break;
	
		case 6:
			func_410(uParam0);
			break;
	
		case 7:
			func_389();
			func_381();
			break;
	
		case 8:
			func_378();
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			func_232();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
		
			if (func_551())
				func_226(uParam0);
			break;
	
		case 9:
			func_223();
			break;
	
		case 10:
			func_220();
			break;
	
		case 11:
			PLAYER::SPECIAL_ABILITY_DEACTIVATE(PLAYER::PLAYER_ID(), 0);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			func_125();
			func_231(uParam0);
			func_230(uParam0);
			func_229(uParam0);
			func_122(uParam0);
		
			if (func_551())
			{
				PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 433, true);
				func_226(uParam0);
			}
			break;
	
		case 12:
			func_490();
			break;
	
		case 13:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_103();
			break;
	
		case 14:
			func_102();
			break;
	
		case 15:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_99(uParam0);
			break;
	}

	return;
}

void func_99(var uParam0) // Hash - 0x8F419A46 ^0xD000416B
{
	if (!func_551())
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_101(true), 3))
			return;

	if (func_491(iLocal_49, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
			func_5(&iLocal_49, 16);
		}
	}

	if (func_491(iLocal_49, 2))
	{
		func_100(1);
		func_492("RESETTING INTERFACE FLAG TO FALSE - PROSTITUTE SCRIPT TERMINATING");
	}

	func_542();

	if (func_551())
		func_536(uParam0);

	return;
}

void func_100(int iParam0) // Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

char* func_101(BOOL bParam0) // Hash - 0xF9B028BB ^0xF95B0683
{
	if (!func_491(iLocal_49, 32768))
		if (bParam0)
			return func_45(6);
		else
			return func_45(7);

	if (bParam0)
		return func_46(6);

	return func_46(7);
}

void func_102() // Hash - 0xB5D7EA55 ^0xB4B5BA08
{
	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_72 == 0)
		{
			if (func_491(iLocal_49, 134217728))
			{
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_96, 32768, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_96, 196624, true);
			}
		
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_LEAVES_ANGRY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_96(15);
		}
	}

	return;
}

void func_103() // Hash - 0x1A124251 ^0x5E14D314
{
	switch (iLocal_303)
	{
		case 0:
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96) || func_121(&uLocal_107) > 4f)
			{
				func_116(pedLocal_96);
			
				if (func_76(func_77(pedLocal_96)) == 1)
				{
					iLocal_303 = 2;
				}
				else
				{
					func_115(&uLocal_107);
					func_114(_("Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy"));
					iLocal_303 = 1;
				}
			}
			break;
	
		case 1:
			func_113();
		
			if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96) || func_112())
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON);
				func_482(&iLocal_49, 2048);
			}
			else
			{
				if (!func_10(&uLocal_107))
					func_40(&uLocal_107);
			
				if (func_121(&uLocal_107) > 15f || iLocal_306 != 0)
				{
					HUD::CLEAR_HELP(true);
					func_111();
					iLocal_303 = 2;
				}
			}
			break;
	
		case 2:
			if (!func_112())
				iLocal_303 = 3;
			break;
	
		case 3:
			func_106(false);
			func_104();
			func_96(15);
			break;
	}

	return;
}

int func_104() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_105(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_105(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_106(BOOL bParam0) // Hash - 0xE323A7BC ^0x3A7EC0CB
{
	if (!PED::IS_PED_INJURED(pedLocal_96))
		if (CAM::IS_SCREEN_FADED_OUT())
			PED::DELETE_PED(&pedLocal_96);
		else
			func_107(pedLocal_96, bParam0);

	return;
}

void func_107(Ped pedParam0, BOOL bParam1) // Hash - 0x1D576311 ^0x7181F3C
{
	int taskSequenceId;
	float randomFloatInRange;

	if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(true), 3))
		TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_101(true), 4f, -8f, -1, 0, 0, false, false, false);

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (func_551())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
		else
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedParam0);
	
		if (func_491(iLocal_49, 33554432))
			TASK::CLEAR_PED_TASKS(pedParam0);
	
		if (bParam1)
		{
			randomFloatInRange = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.1f, 2f);
		
			if (randomFloatInRange <= 0.25f)
				func_482(&iLocal_49, 134217728);
		}
	
		if (func_491(iLocal_49, 134217728))
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 32768, true);
			TASK::TASK_SMART_FLEE_PED(pedParam0, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
		}
		else
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedParam0, 196624, true);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			{
				if (!VEHICLE::IS_VEHICLE_STOPPED(PED::GET_VEHICLE_PED_IS_IN(pedParam0, false)))
				{
					func_109(pedParam0, 1);
				}
				else
				{
					if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(pedParam0, false, false), func_110(false), 3))
						if (iLocal_72 > 0)
							TASK::TASK_PLAY_ANIM(0, func_50(pedParam0, false, false), func_101(false), 4f, -4f, -1, 0, 0, false, false, false);
						else
							TASK::TASK_PLAY_ANIM(0, func_50(pedParam0, false, false), func_108(false), 4f, -4f, -1, 0, 0, false, false, false);
				
					func_109(pedParam0, 1);
				}
			}
		
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_STANDARD(0, 1193033728, 0);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		if (func_551())
			if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_96))
				if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_96)))
					PED::SET_PED_KEEP_TASK(pedParam0, true);
		else
			PED::SET_PED_KEEP_TASK(pedParam0, true);
	}

	return;
}

char* func_108(BOOL bParam0) // Hash - 0x9DB4185E ^0x7624AEA4
{
	if (!func_491(iLocal_49, 32768))
		if (bParam0)
			return func_45(4);
		else
			return func_45(5);

	if (bParam0)
		return func_46(4);

	return func_46(5);
}

void func_109(Ped pedParam0, int iParam1) // Hash - 0x3D3B8EF7 ^0x9FA325E7
{
	if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedParam0, PED::GET_VEHICLE_PED_IS_IN(pedParam0, false), 0, false, false))
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	else
		TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, iParam1);

	return;
}

char* func_110(BOOL bParam0) // Hash - 0xE2AA2D3A ^0x7945D493
{
	if (!func_491(iLocal_49, 32768))
		if (bParam0)
			return func_45(2);
		else
			return func_45(3);

	if (bParam0)
		return func_46(2);

	return func_46(3);
}

void func_111() // Hash - 0x9C71ED61 ^0xD4D31077
{
	int randomIntInRange;

	randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 1000);

	if (randomIntInRange <= 333 && iLocal_306 == 0 || iLocal_306 == 3)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_REVULSION_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (randomIntInRange > 333 && randomIntInRange <= 666 && iLocal_306 == 0 || iLocal_306 == 1)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SARCASTIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
	else if (iLocal_306 == 0 || iLocal_306 == 2)
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_STORY_SYMPATHETIC_RESP", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_112() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_113() // Hash - 0xD2474123 ^0x81942A07
{
	if (iLocal_306 == 0)
	{
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_SELECT_NEXT_WEAPON, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HANDBRAKE, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_X);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	
		if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_X))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_306 = 3;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_306 = 1;
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL))
		{
			HUD::CLEAR_HELP(true);
			AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			iLocal_306 = 2;
		}
	}

	return;
}

void func_114(char* sParam0) // Hash - 0x99A98712 ^0xE46BE9F0
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
	return;
}

void func_115(int* piParam0) // Hash - 0x4ECF353C ^0xF00161
{
	piParam0->f_1 = 0f;
	piParam0->f_2 = 0f;
	*piParam0 = 0;
	return;
}

void func_116(Ped pedParam0) // Hash - 0xAA1B71CD ^0x5EFDCB6B
{
	int num;

	num = func_77(pedParam0);

	if (num > -1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
			AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0);
	
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedParam0))
		{
			func_118(pedParam0);
			func_117(num);
		}
	}

	return;
}

void func_117(int iParam0) // Hash - 0x3E2B7A7 ^0x56C67CCB
{
	int num;
	var unk;

	num = func_76(iParam0);

	if (num < 6)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, "pbpro_H", 24);
		TEXT_LABEL_APPEND_INT(&unk, iParam0 + 1, 24);
		TEXT_LABEL_APPEND_STRING(&unk, "V", 24);
		TEXT_LABEL_APPEND_INT(&unk, num, 24);
		func_11(&uLocal_122, "pbproau", &unk, 4, 0, 0, 0);
	}

	return;
}

void func_118(Ped pedParam0) // Hash - 0xE970E2CC ^0xE970E2CC
{
	int num;

	num = func_77(pedParam0);

	if (num > -1)
	{
		func_120(&uLocal_122, 4);
		func_469(&uLocal_122, 6, pedParam0, func_119(num), 0, 1);
	}

	return;
}

char* func_119(int iParam0) // Hash - 0xAA08199C ^0x98793A54
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "Hooker1";
			break;
	
		case 1:
			str = "Hooker2";
			break;
	
		case 2:
			str = "Hooker3";
			break;
	
		case 3:
			str = "Hooker4";
			break;
	
		case 4:
			str = "Hooker5";
			break;
	
		case 5:
			str = "Hooker6";
			break;
	
		case 6:
			str = "Hooker7";
			break;
	
		case 7:
			str = "Hooker8";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

void func_120(var uParam0, int iParam1) // Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

float func_121(int* piParam0) // Hash - 0x828E31ED ^0x7E930FA0
{
	if (func_10(piParam0))
		if (func_9(piParam0))
			return piParam0->f_2;
		else
			return func_8(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return 0f;
}

void func_122(var uParam0) // Hash - 0xB6C3F772 ^0xB068B758
{
	BOOL flag;
	Vehicle vehiclePedIsIn;

	if (!func_551())
		return;

	flag = false;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					flag = true;
			
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false) != pedLocal_96)
					flag = true;
			
				if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(vehiclePedIsIn, false, true) > 2)
					flag = true;
			
				if (flag)
				{
					func_123(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}

	return;
}

void func_123(BOOL bParam0) // Hash - 0xEDD8A20E ^0x9DCED5EF
{
	var entityRotation;

	if (bParam0)
	{
		entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_99, 2) };
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(180f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-5.5f - entityRotation, 1065353216);
	}

	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	func_124(&uLocal_313[0 /*7*/]);
	func_124(&uLocal_313[3 /*7*/]);
	func_124(&uLocal_313[2 /*7*/]);
	func_124(&uLocal_313[1 /*7*/]);

	if (func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~")) || func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~")))
		HUD::CLEAR_HELP(true);

	return;
}

void func_124(var uParam0) // Hash - 0x9795EF4C ^0x3624C661
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, false);
	}

	return;
}

void func_125() // Hash - 0x4FE00097 ^0xBD92A500
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false))
		VEHICLE::SET_VEHICLE_BRAKE_LIGHTS(veLocal_99, true);

	if (iLocal_302 != 5)
	{
		if (!func_219(iLocal_76) && !func_219(iLocal_77) && !func_219(iLocal_78) && !func_219(iLocal_79) && !func_219(iLocal_80) && !func_219(iLocal_81) && !func_219(iLocal_82))
		{
			if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(pedLocal_96) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(PLAYER::PLAYER_PED_ID()))
				iLocal_302 = 5;
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (!VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
					iLocal_302 = 5;
		}
	}

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_213(0);

	switch (iLocal_302)
	{
		case 0:
			if (func_551())
				func_210(1089, -1);
		
			func_40(&uLocal_119);
			func_209(func_49(), func_491(iLocal_49, 32768));
			iLocal_302 = 1;
			func_492("Moving to PROSTITUTE_SERVICE_LOOPING");
			break;
	
		case 1:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
			func_202();
			func_195();
			func_134();
		
			if (!func_48(false, true))
				func_133();
		
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				
					if (iLocal_72 >= 3)
					{
						func_130();
						iLocal_302 = 5;
					}
					else
					{
						func_129();
						CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_48);
						iLocal_302 = 3;
					}
				}
			}
			break;
	
		case 2:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			func_202();
		
			if (!func_48(false, true))
				func_133();
		
			if (func_48(false, true))
				PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (func_7(&uLocal_119) > 1f)
			{
				if (func_132())
				{
					func_5(&iLocal_49, 512);
					iLocal_305 = 0;
					func_131("PROSTITUTES_SOLICIT_SCENE");
					func_131("PROSTITUTES_SEX_SCENE");
					func_131("PROSTITUTES_BJ_SCENE");
					func_131("PROSTITUTES_BJ_SPEECH_SCENE");
					iLocal_72 = 3;
				
					if (iLocal_72 >= 3)
					{
						func_130();
						iLocal_302 = 5;
						func_115(&uLocal_104);
					}
				}
			}
			break;
	
		case 3:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
			{
				func_131("PROSTITUTES_SOLICIT_SCENE");
				func_131("PROSTITUTES_BJ_SPEECH_SCENE");
				iLocal_301 = 0;
				iLocal_302 = 0;
				func_128();
				CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(evmLocal_48);
				iLocal_295 = 8;
			}
			break;
	
		case 5:
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_NEXT_CAMERA, true);
		
			if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
			{
				if (iLocal_72 > 0)
				{
					if (func_127(pedLocal_96))
						func_126();
					else
						func_473(false);
				}
				else
				{
					func_492("PROSTITUTE CANCEL PROS NO LONGER IN VEHICLE");
					func_473(true);
				}
			}
			break;
	}

	return;
}

void func_126() // Hash - 0x3CCA08F6 ^0x38FA78D9
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_72 == 0)
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_DECLINE_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		}
		else if (func_127(pedLocal_96))
		{
			func_40(&uLocal_107);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_LEAVE_CAMERA_CONTROL_ON | 512);
			func_482(&iLocal_49, 2048);
			iLocal_295 = 13;
		}
	}

	return;
}

BOOL func_127(Ped pedParam0) // Hash - 0x8DFCADB9 ^0x8DFCADB9
{
	int num;

	num = func_77(pedParam0);

	if (num == -1)
		return false;

	return func_76(num) < 6;
}

void func_128() // Hash - 0xD39EBC16 ^0xE54D0827
{
	if (!Global_2672505.f_946.f_10)
		Global_2672505.f_946.f_10 = 1;

	return;
}

void func_129() // Hash - 0x77E6767F ^0x8A49738C
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SEX_FINISHED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_130() // Hash - 0x77E6767F ^0x2DEBE4F2
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_HAD_ENOUGH", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

void func_131(char* sParam0) // Hash - 0x7DD010A2 ^0x97ECB185
{
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sParam0))
		AUDIO::STOP_AUDIO_SCENE(sParam0);

	return;
}

BOOL func_132() // Hash - 0x3BD0C49A ^0x3BD0C49A
{
	if (iLocal_305 == 6)
		return true;

	return false;
}

void func_133() // Hash - 0x96997D50 ^0x669D2ED3
{
	CAM::DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE();
	CAM::DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE();
	return;
}

void func_134() // Hash - 0x53592CC3 ^0x29C30F
{
	float num;
	BOOL flag;
	BOOL flag2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
		return;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);

	flag = func_49();
	flag2 = func_491(iLocal_49, 32768);

	if (!func_48(false, true))
		func_189(&iLocal_83);

	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::DISABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);
	func_188(23, true);

	switch (iLocal_305)
	{
		case 0:
			func_5(&iLocal_49, 256);
		
			if (!func_48(false, true))
				func_183(&iLocal_83);
		
			func_182(pedLocal_96, 0);
		
			if (!func_551())
				func_181(flag, flag2);
		
			func_180(flag, flag2);
			iLocal_305 = 1;
			break;
	
		case 1:
			func_179(iLocal_76);
		
			if (func_219(iLocal_77))
			{
				if (!func_491(iLocal_50, 4))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_77) >= num)
						func_482(&iLocal_50, 4);
				}
			}
		
			if (func_219(iLocal_76))
			{
				if (!func_491(iLocal_50, 8))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_76) >= num)
						func_482(&iLocal_50, 8);
				}
			}
		
			if (func_491(iLocal_50, 4) && func_491(iLocal_50, 8))
			{
				if (!func_551())
					func_177(flag, flag2);
			
				func_176(flag, flag2);
				iLocal_305 = 2;
			}
			break;
	
		case 2:
			func_179(iLocal_78);
		
			if (func_219(iLocal_78))
			{
				if (!func_491(iLocal_50, 16))
				{
					if (!func_551())
						num = 0.98f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_78) >= num)
						func_482(&iLocal_50, 16);
				}
			}
		
			if (func_491(iLocal_50, 16))
			{
				if (!func_551())
					func_175(flag, flag2);
			
				func_174(flag, flag2);
				iLocal_305 = 3;
			}
			break;
	
		case 3:
			func_179(iLocal_79);
		
			if (func_219(iLocal_79))
			{
				if (!func_491(iLocal_50, 64))
				{
					if (!func_491(iLocal_49, 16777216))
					{
						if (!func_551())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_178(iLocal_79) >= num)
						{
							func_482(&iLocal_49, 16777216);
							iLocal_73 = iLocal_73 + 1;
						}
					}
					else
					{
						if (!func_551())
							num = 0.975f;
						else
							num = 0.986f;
					
						if (func_178(iLocal_79) < num)
							func_5(&iLocal_49, 16777216);
					}
				
					if (iLocal_73 >= func_551() ? func_173() : func_168())
					{
						func_482(&iLocal_50, 64);
						func_5(&iLocal_49, 16777216);
					}
				}
			}
			else if (!func_491(iLocal_50, 64))
			{
				func_482(&iLocal_50, 64);
			}
		
			if (func_491(iLocal_50, 64))
			{
				if (!func_551())
					func_166(flag, flag2);
			
				func_165(flag, flag2);
				iLocal_305 = 4;
			}
			break;
	
		case 4:
			func_179(iLocal_80);
		
			if (func_219(iLocal_80))
			{
				if (!func_491(iLocal_50, 256))
				{
					if (!func_551())
						num = 0.925f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_80) >= num)
						func_482(&iLocal_50, 256);
				}
			}
			else if (!func_491(iLocal_50, 256))
			{
				func_482(&iLocal_50, 256);
			}
		
			if (func_491(iLocal_50, 256))
			{
				if (!func_551())
					func_159(flag, flag2);
			
				func_157(flag, flag2);
				iLocal_305 = 5;
			}
			break;
	
		case 5:
			func_179(iLocal_81);
		
			if (func_219(iLocal_81))
			{
				if (!func_491(iLocal_50, 1024))
				{
					if (!func_551())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_81) >= num)
						func_482(&iLocal_50, 1024);
				}
			}
			else if (!func_491(iLocal_50, 1024))
			{
				func_482(&iLocal_50, 1024);
			}
		
			if (func_219(iLocal_82))
			{
				if (!func_491(iLocal_50, 2048))
				{
					if (!func_551())
						num = 0.975f;
					else
						num = 0.986f;
				
					if (func_178(iLocal_82) >= num)
						func_482(&iLocal_50, 2048);
				}
			}
			else if (!func_491(iLocal_50, 2048))
			{
				func_482(&iLocal_50, 2048);
			}
		
			if (func_491(iLocal_50, 1024) && func_491(iLocal_50, 2048))
			{
				func_182(pedLocal_96, 0);
				TASK::TASK_PLAY_ANIM(pedLocal_96, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(iLocal_305, true, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_182(PLAYER::PLAYER_PED_ID(), -1);
				TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(iLocal_305, false, flag, flag2), 4f, -4f, -1, 1, 0, false, false, false);
				func_123(true);
				iLocal_50 = 0;
				iLocal_73 = 0;
				iLocal_61 = 0;
				func_135();
				iLocal_305 = 6;
			}
			break;
	}

	return;
}

void func_135() // Hash - 0x4BAC5EAB ^0xDFC1A34B
{
	int num;

	if (iLocal_72 == 0 && !func_551())
	{
		if (func_26(PLAYER::PLAYER_PED_ID()) == 0)
			func_156();
	
		func_151(296, 0, 0);
		num = func_77(pedLocal_96);
	
		if (num > -1)
			func_150(num);
		else
			func_142(pedLocal_96);
	}

	iLocal_72 = iLocal_72 + 1;
	func_136();
	return;
}

void func_136() // Hash - 0xC6A094F ^0xC52275A3
{
	switch (func_26(PLAYER::PLAYER_PED_ID()))
	{
		case 0:
			Global_113648.f_10051.f_90[0] = Global_113648.f_10051.f_90[0] + 1;
			func_137(0, 1, 1);
			break;
	
		case 1:
			Global_113648.f_10051.f_90[1] = Global_113648.f_10051.f_90[1] + 1;
			func_137(1, 1, 1);
			break;
	
		case 2:
			Global_113648.f_10051.f_90[2] = Global_113648.f_10051.f_90[2] + 1;
			func_137(2, 1, 1);
			break;
	
		case 3:
			func_137(3, 1, 1);
			break;
	}

	return;
}

void func_137(int iParam0, int iParam1, int iParam2) // Hash - 0xF0BE1C2C ^0xB42E6E17
{
	int num;
	int num2;

	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] = Global_113648.f_2365.f_539.f_2247[iParam1 /*4*/][iParam0] + iParam2;
			break;
	
		case 3:
			num2 = 14192;
		
			switch (iParam1)
			{
				case 1:
					num2 = 72;
					break;
			
				case 3:
					num2 = 74;
					break;
			
				case 2:
					num2 = 73;
					break;
			
				case 4:
					num2 = 75;
					break;
			
				case 5:
					num2 = 76;
					break;
			
				case 6:
					num2 = 77;
					break;
			
				case 7:
					num2 = 78;
					break;
			}
		
			if (num2 != 14192)
			{
				num = func_141(num2, -1, 0);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_138(num2, num, -1, true, false);
			}
			break;
	}

	return;
}

void func_138(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_139(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_139(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_140();
	
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

int func_140() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_141(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_139(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_142(Ped pedParam0) // Hash - 0xD1B47359 ^0x4AD799F2
{
	int num;
	int num2;
	int i;
	int num3;
	int num4;

	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	num = func_149();

	if (num == -1)
		return;

	func_150(num);
	PED::SET_PED_NAME_DEBUG(pedParam0, func_147(num));
	Global_113648.f_10051.f_1[num /*11*/].f_10 = ENTITY::GET_ENTITY_MODEL(pedParam0);

	for (i = 0; i < 2; i = i + 1)
	{
		num2 = i;
		num3 = func_146(pedParam0, num2);
		func_145(num, num2, num3);
	}

	for (i = 0; i < 2; i = i + 1)
	{
		num4 = i;
		num3 = func_144(pedParam0, num4);
		func_143(num, num4, num3);
	}

	return;
}

void func_143(int iParam0, int iParam1, int iParam2) // Hash - 0x2A387C50 ^0xDEC4C794
{
	if (iParam0 > -1)
		Global_113648.f_10051.f_1[iParam0 /*11*/].f_7[iParam1] = iParam2;

	return;
}

int func_144(Ped pedParam0, int iParam1) // Hash - 0xE4A498BB ^0xBF1E968C
{
	return PED::GET_PED_TEXTURE_VARIATION(pedParam0, func_82(iParam1));
}

void func_145(int iParam0, int iParam1, int iParam2) // Hash - 0x2A387C50 ^0x682F7008
{
	if (iParam0 > -1)
		Global_113648.f_10051.f_1[iParam0 /*11*/].f_4[iParam1] = iParam2;

	return;
}

int func_146(Ped pedParam0, int iParam1) // Hash - 0xE4A498BB ^0x4D36C09C
{
	return PED::GET_PED_DRAWABLE_VARIATION(pedParam0, func_86(iParam1));
}

char* func_147(int iParam0) // Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_148(iParam0);
}

char* func_148(int iParam0) // Hash - 0xAA08199C ^0x3F7D6E8D
{
	char* str;

	switch (iParam0)
	{
		case 0:
			str = "UPRO BABS";
			break;
	
		case 1:
			str = "UPRO DANA";
			break;
	
		case 2:
			str = "UPRO LIZZIE";
			break;
	
		case 3:
			str = "UPRO AMANDA";
			break;
	
		case 4:
			str = "UPRO ASHLEY";
			break;
	
		case 5:
			str = "UPRO KRISTEN";
			break;
	
		case 6:
			str = "UPRO SASHA";
			break;
	
		case 7:
			str = "UPRO JACQUELINE";
			break;
	
		default:
			str = "UPRO N/A";
	}

	return str;
}

int func_149() // Hash - 0x9EF005B9 ^0x9EF005B9
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		if (func_76(i) == 0)
			return i;
	}

	return -1;
}

void func_150(int iParam0) // Hash - 0xFD486AB3 ^0x7FCA92B2
{
	if (iParam0 > -1)
		if (func_23() == 0)
			Global_113648.f_10051.f_1[iParam0 /*11*/][0] = Global_113648.f_10051.f_1[iParam0 /*11*/][0] + 1;
		else if (func_23() == 1)
			Global_113648.f_10051.f_1[iParam0 /*11*/][1] = Global_113648.f_10051.f_1[iParam0 /*11*/][1] + 1;
		else if (func_23() == 2)
			Global_113648.f_10051.f_1[iParam0 /*11*/][2] = Global_113648.f_10051.f_1[iParam0 /*11*/][2] + 1;

	return;
}

void func_151(int iParam0, int iParam1, int iParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_155(891 + iParam0, true, -1);
	}

	flag = true;

	if (Global_113648.f_10196[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_113648.f_10196[iParam0 /*12*/].f_6 == 11 || Global_113648.f_10196[iParam0 /*12*/].f_6 == 12)
			flag = false;
	}
	else
	{
		Global_113648.f_10196[iParam0 /*12*/].f_5 = 1;
		Global_113648.f_10196[iParam0 /*12*/].f_10 = iParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = iParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_152();

	return;
}

void func_152() // Hash - 0x9F269E94 ^0x9F269E94
{
	int num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;
	float num8;
	float value;
	int value2;

	num = 0;
	Global_113384 = 0;
	Global_113385 = 0;
	Global_113386 = 0;
	Global_113387 = 0;
	Global_113388 = 0;
	Global_113389 = 0;
	Global_113390 = 0;
	num2 = 0f;
	num3 = 0f;
	num4 = 0f;
	num5 = 0f;
	num6 = 0f;
	num7 = 0f;
	num8 = 0f;
	value = Global_113648.f_10196.f_3853;
	Global_113648.f_10196.f_3853 = 0f;

	while (num < 321)
	{
		if (Global_113648.f_10196[num /*12*/].f_5 == 1)
		{
			switch (Global_113648.f_10196[num /*12*/].f_6)
			{
				case 1:
					Global_113384 = Global_113384 + 1;
					num2 = num2 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 3:
					Global_113385 = Global_113385 + 1;
					num3 = num3 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 5:
					Global_113386 = Global_113386 + 1;
					num4 = num4 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 7:
					Global_113387 = Global_113387 + 1;
					num5 = num5 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 9:
					Global_113388 = Global_113388 + 1;
					num6 = num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
					break;
			
				case 11:
					Global_113389 = Global_113389 + 1;
					num7 = num7 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				case 13:
					Global_113390 = Global_113390 + 1;
					num8 = num8 + Global_113648.f_10196[num /*12*/].f_4;
					break;
			
				default:
					break;
			}
		}
	
		num = num + 1;
	}

	if (Global_113367 > 0)
		if (Global_113384 == Global_113367)
			num2 = 55f;

	if (Global_113368 > 0)
		if (Global_113385 == Global_113368)
			num3 = 10f;

	if (Global_113369 > 0)
		if (Global_113386 == Global_113369)
			num4 = 0f;

	if (Global_113370 > 0)
		if (Global_113387 == Global_113370)
			num5 = 10f;

	if (Global_113371 > 0)
	{
		if (Global_113388 == Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388 == Global_113374)
		{
			if (!IS_BIT_SET(Global_113648.f_10196.f_3856, 14))
			{
				if (Global_113388 == Global_113371)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
					MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
				}
			}
		
			num6 = 5f;
		}
	}

	if (Global_113372 > 0)
		if (Global_113389 == Global_113372)
			num7 = 15f;

	if (Global_113373 > 0)
		if (Global_113390 == Global_113373)
			num8 = 5f;

	Global_113648.f_10196.f_3853 = num2 + num3 + num4 + num5 + num6 + num7 + num8;

	if (Global_113388 > Global_113374 || Global_113388 == Global_113374)
		value2 = Global_113374;
	else
		value2 = Global_113388;

	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
	STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
	STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
	STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
	STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
	STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
	STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_154(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_153() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_104();
			}
		}
	}

	return;
}

int func_153() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_154(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_155(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_140();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

void func_156() // Hash - 0x28076B41 ^0xF3174F31
{
	int i;

	for (i = 0; i < 2; i = i + 1)
	{
		if (i < 1)
			Global_97143[i] = Global_97143[i + 1];
		else
			Global_97143[i] = MISC::GET_GAME_TIMER();
	}

	return;
}

void func_157(BOOL bParam0, BOOL bParam1) // Hash - 0xD3F5EBE ^0xDD2E6561
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_158(pedLocal_96, iLocal_81, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_82, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_158(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, float fParam8, int iParam9) // Hash - 0x32C15F45 ^0x87C6490
{
	if (func_551())
		NETWORK::NETWORK_START_SYNCHRONISED_SCENE(iParam1);
	else
		TASK::TASK_SYNCHRONIZED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, fParam8, iParam9);

	return;
}

void func_159(BOOL bParam0, BOOL bParam1) // Hash - 0xD975DDFA ^0x6C0EE6BB
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_161(&iLocal_81, 1, false, false);
	func_160(pedLocal_96, iLocal_81, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_161(&iLocal_82, 0, false, false);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_82, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(4, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

void func_160(Ped pedParam0, int iParam1, char* sParam2, char* sParam3, float fParam4, float fParam5, int iParam6, int iParam7, int iParam8) // Hash - 0x1F7415A1 ^0xF102F0C7
{
	if (func_551())
		NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(pedParam0, iParam1, sParam2, sParam3, fParam4, fParam5, iParam6, iParam7, iParam8, 0);

	return;
}

void func_161(var uParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x8B10A7B6 ^0x8B10A7B6
{
	var unk;

	unk = { 0f, 0f, 0f };
	*uParam0 = func_164(unk, 0f, 0f, 0f, bParam3, bParam2, 2);

	if (iParam1 == 0)
		func_163(*uParam0, veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "seat_dside_f"));
	else if (iParam1 == 1)
		func_163(*uParam0, veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "seat_pside_f"));

	func_162(*uParam0, unk, 0f, 0f, 0f, false);
	return;
}

void func_162(int iParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, BOOL bParam7) // Hash - 0x2A5A2DB8 ^0x5BCDEE46
{
	if (!func_551())
		PED::SET_SYNCHRONIZED_SCENE_ORIGIN(iParam0, vParam1, fParam4, bParam7);

	return;
}

void func_163(int iParam0, Vehicle veParam1, int iParam2) // Hash - 0x992376B3 ^0x955FC226
{
	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		return;

	if (func_551())
		NETWORK::NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);
	else
		PED::ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(iParam0, veParam1, iParam2);

	return;
}

int func_164(Vector3 vParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Hash - 0xB190AB70 ^0xE3639BC9
{
	int sceneID;

	if (func_551())
	{
		if (bParam6)
			bParam7 = false;
	
		sceneID = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(vParam0, fParam3, iParam8, bParam6, bParam7, 1065353216, 0, 1065353216);
	}
	else
	{
		sceneID = PED::CREATE_SYNCHRONIZED_SCENE(vParam0, fParam3, iParam8);
		PED::SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(sceneID, bParam6);
		PED::SET_SYNCHRONIZED_SCENE_LOOPED(sceneID, bParam7);
	}

	return sceneID;
}

void func_165(BOOL bParam0, BOOL bParam1) // Hash - 0x3D1EED04 ^0x7DFAF460
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_158(pedLocal_96, iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_166(BOOL bParam0, BOOL bParam1) // Hash - 0xFF62FA07 ^0x3A63C6C7
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_161(&iLocal_80, 0, false, true);
	func_160(pedLocal_96, iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_80, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(3, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

var func_167(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_168() // Hash - 0x17290EAD ^0x17290EAD
{
	int num;
	int num2;

	num = func_169();

	if (num < 48)
		num2 = 2;
	else if (num >= 48 && num < 85)
		num2 = 3;
	else
		num2 = 4;

	return num2;
}

int func_169() // Hash - 0x68F88691 ^0xFBA2999
{
	if (func_551())
		return func_141(65, -1, 0);

	return func_170(func_26(PLAYER::PLAYER_PED_ID()), 1);
}

int func_170(int iParam0, int iParam1) // Hash - 0x5AE9792 ^0xF89DF9DA
{
	var outValue;
	Hash statHash;

	statHash = func_171(iParam0, iParam1);
	STATS::STAT_GET_INT(statHash, &outValue, -1);
	return outValue;
}

Hash func_171(int iParam0, int iParam1) // Hash - 0xEF7602B4 ^0xEF7602B4
{
	var unk;
	var unk2;

	func_172(iParam0, iParam1, &unk, &unk2);
	return unk;
}

void func_172(int iParam0, int iParam1, var uParam2, var uParam3) // Hash - 0x638A09DD ^0x5D137763
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP0_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP0_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP0_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP0_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP0_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP0_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP0_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP0_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP1_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP1_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP1_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP1_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP1_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP1_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP1_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP1_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = joaat("SP2_SPECIAL_ABILITY_UNLOCKED");
					break;
			
				case 1:
					*uParam2 = joaat("SP2_STAMINA");
					break;
			
				case 3:
					*uParam2 = joaat("SP2_LUNG_CAPACITY");
					break;
			
				case 2:
					*uParam2 = joaat("SP2_STRENGTH");
					break;
			
				case 4:
					*uParam2 = joaat("SP2_WHEELIE_ABILITY");
					break;
			
				case 5:
					*uParam2 = joaat("SP2_FLYING_ABILITY");
					break;
			
				case 6:
					*uParam2 = joaat("SP2_SHOOTING_ABILITY");
					break;
			
				case 7:
					*uParam2 = joaat("SP2_STEALTH_ABILITY");
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					*uParam3 = 64;
					break;
			
				case 1:
					*uParam3 = 65;
					break;
			
				case 3:
					*uParam3 = 67;
					break;
			
				case 2:
					*uParam3 = 66;
					break;
			
				case 4:
					*uParam3 = 68;
					break;
			
				case 5:
					*uParam3 = 69;
					break;
			
				case 6:
					*uParam3 = 70;
					break;
			
				case 7:
					*uParam3 = 71;
					break;
			}
			break;
	}

	return;
}

int func_173() // Hash - 0xC7D7C74E ^0xC7D7C74E
{
	int num;

	if (iLocal_297 != 0)
		if (iLocal_61 < 2)
			num = 3;
		else if (iLocal_61 == 2)
			num = 4;
		else if (iLocal_61 == 3)
			num = 5;
		else
			num = 6;
	else if (iLocal_61 < 3)
		num = 2;
	else
		num = 3;

	return num;
}

void func_174(BOOL bParam0, BOOL bParam1) // Hash - 0xECBD9947 ^0xB017747E
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_158(pedLocal_96, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_175(BOOL bParam0, BOOL bParam1) // Hash - 0x6A367F56 ^0x7DC94192
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_161(&iLocal_79, 0, true, false);
	func_160(pedLocal_96, iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, true, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_79, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(2, false, bParam0, bParam1), 1000f, -1000f, num, 0, 1148846080);
	return;
}

void func_176(BOOL bParam0, BOOL bParam1) // Hash - 0xD16110D9 ^0x73642EA6
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_158(pedLocal_96, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f, 0);
	return;
}

void func_177(BOOL bParam0, BOOL bParam1) // Hash - 0x3F5C3FCD ^0xDE50E7DC
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_161(&iLocal_78, 0, false, true);
	func_160(pedLocal_96, iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, true, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_78, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(1, false, bParam0, bParam1), 0.7f, -0.7f, num, 0, 0.7f);
	return;
}

float func_178(int iParam0) // Hash - 0x46250BBD ^0x8B3C13BF
{
	float synchronizedScenePhase;

	if (func_551())
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(iParam0);

	return synchronizedScenePhase;
}

void func_179(int iParam0) // Hash - 0x56DB2414 ^0x56DB2414
{
	if (!func_219(iParam0))
		return;

	return;
}

void func_180(BOOL bParam0, BOOL bParam1) // Hash - 0xF89AFD9A ^0x39009CC3
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_158(pedLocal_96, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, true, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	func_158(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, false, bParam0, bParam1), 8f, -0.7f, num, 0, 1000f, 0);
	return;
}

void func_181(BOOL bParam0, BOOL bParam1) // Hash - 0x1B5DEBD9 ^0x31E83EFB
{
	int num;

	num = 2052;

	if (func_551())
		num = 2056;

	func_161(&iLocal_76, 1, false, true);
	func_160(pedLocal_96, iLocal_76, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, true, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	func_161(&iLocal_77, 0, false, true);
	func_160(PLAYER::PLAYER_PED_ID(), iLocal_77, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_44(0, false, bParam0, bParam1), 4f, -1000f, num, 0, 1148846080);
	return;
}

void func_182(Ped pedParam0, int iParam1) // Hash - 0xA9A31DF3 ^0xC7A54623
{
	if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_99, false))
		if (!func_551())
			PED::SET_PED_INTO_VEHICLE(pedParam0, veLocal_99, iParam1);
		else if (!PED::IS_PED_IN_VEHICLE(pedParam0, veLocal_99, false))
			TASK::TASK_ENTER_VEHICLE(pedParam0, veLocal_99, -1, iParam1, 2f, 16, 0);

	return;
}

void func_183(var uParam0) // Hash - 0x7F9841C2 ^0x28AE4BE6
{
	float num;
	float num2;
	float entityRotation;
	float entityHeading;
	float num3;
	float num4;
	float num5;
	float num6;
	float num7;

	num = func_185(func_186(2), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "windscreen")));
	num2 = func_185(func_186(1), ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "windscreen")));
	entityRotation = { ENTITY::GET_ENTITY_ROTATION(veLocal_99, 2) };
	entityHeading = ENTITY::GET_ENTITY_HEADING(veLocal_99);

	if (entityHeading >= 180f)
		num3 = entityHeading - 180f;
	else
		num3 = entityHeading + 180f;

	num4 = -7f - entityRotation.f_1;
	num5 = -5f - entityRotation;
	num6 = -2.5f + entityRotation;
	num7 = (0f - (0.7f * entityRotation)) + (0.3f * entityRotation.f_1);

	if (!CAM::DOES_CAM_EXIST(uLocal_313[2 /*7*/]))
		func_184(&uLocal_313[2 /*7*/], func_186(2), num4, entityRotation, num, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_313[1 /*7*/]))
		func_184(&uLocal_313[1 /*7*/], func_186(1), num7, -entityRotation.f_1, num2, 37.3f);

	if (!CAM::DOES_CAM_EXIST(uLocal_313[0 /*7*/]))
		func_184(&uLocal_313[0 /*7*/], func_186(0), num5, -entityRotation.f_1, num3, 50f);

	if (!CAM::DOES_CAM_EXIST(uLocal_313[3 /*7*/]))
		func_184(&uLocal_313[3 /*7*/], func_186(3), num6, entityRotation.f_1, entityHeading, 45f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	CAM::SET_CAM_ACTIVE(uLocal_313[*uParam0 /*7*/], true);
	return;
}

void func_184(var uParam0, Vector3 vParam1, var uParam2, var uParam3, float fParam4, float fParam5, float fParam6, float fParam7) // Hash - 0x5305A30B ^0x5A8CCB49
{
	uParam0->f_1 = { fParam4 };
	uParam0->f_4 = { 0f, 0f, 0f };
	*uParam0 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, vParam1, uParam0->f_1, fParam7, 0, 1, 1, 2);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

float func_185(var uParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5) // Hash - 0x34651BCB ^0x945B346B
{
	return MISC::GET_HEADING_FROM_VECTOR_2D(fParam3 - uParam0, fParam3.f_1 - uParam0.f_1);
}

Vector3 func_186(int iParam0) // Hash - 0x2233E709 ^0xB780AA83
{
	var offsetFromEntityInWorldCoords;
	var minimum;
	var maximum;
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;

	!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false);
	!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false);
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_99), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_99, worldPositionOfEntityBone) };

	switch (iParam0)
	{
		case 0:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, 0f, maximum.f_1 + 1.4f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 1:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, 1.5f, maximum.f_1 + 1.2f, offsetFromEntityGivenWorldCoords.f_2 - 0.1f) };
			break;
	
		case 2:
			offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, -3.7f, 0.7f, offsetFromEntityGivenWorldCoords.f_2) };
			break;
	
		case 3:
			offsetFromEntityInWorldCoords = { func_187() };
			break;
	}

	return offsetFromEntityInWorldCoords;
}

Vector3 func_187() // Hash - 0x1915CB37 ^0xE50ABAD3
{
	Vector3 worldPositionOfEntityBone;
	var offsetFromEntityGivenWorldCoords;
	var minimum;
	var maximum;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_99), &minimum, &maximum);
	worldPositionOfEntityBone = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(veLocal_99, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(veLocal_99, "windscreen")) };
	offsetFromEntityGivenWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_99, worldPositionOfEntityBone) };
	offsetFromEntityGivenWorldCoords.f_2 = offsetFromEntityGivenWorldCoords.f_2 + 0.09f;
	minimum.f_1 = minimum.f_1 - 1f;
	return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, 0f, -MISC::ABSF(minimum.f_1), offsetFromEntityGivenWorldCoords.f_2);
}

void func_188(int iParam0, BOOL bParam1) // Hash - 0x48FB9B70 ^0xB8FAA002
{
	if (bParam1)
		MISC::SET_BIT(&Global_32412, iParam0);
	else
		MISC::CLEAR_BIT(&Global_32412, iParam0);

	return;
}

void func_189(var uParam0) // Hash - 0xF76D24A2 ^0x71105D31
{
	if (!CAM::DOES_CAM_EXIST(uLocal_313[*uParam0 /*7*/]))
		return;

	if (!CAM::IS_CAM_RENDERING(uLocal_313[*uParam0 /*7*/]))
		return;

	CAM::SHAKE_CAM(uLocal_313[*uParam0 /*7*/], "HAND_SHAKE", 0.25f);

	if (!HUD::IS_PAUSE_MENU_ACTIVE())
		func_192(&uLocal_313[*uParam0 /*7*/]);

	if (func_191())
	{
		if (!func_551())
			if (!func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~")))
				func_114(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~"));
	}
	else
	{
		if (!func_551())
			if (!func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~")))
				func_114(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~"));
	
		if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_NEXT_CAMERA) && !HUD::IS_PAUSE_MENU_ACTIVE() && !func_48(false, true))
		{
			func_190(uParam0);
			CAM::SET_CAM_ACTIVE(uLocal_313[*uParam0 /*7*/], true);
		}
	}

	return;
}

void func_190(var uParam0) // Hash - 0x6FC466F8 ^0x6FC466F8
{
	if (*uParam0 < 3)
		*uParam0 = *uParam0 + 1;
	else if (*uParam0 == 3)
		*uParam0 = 0;

	if (*uParam0 == 0)
		if (func_491(iLocal_51, 16))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 1)
		if (func_491(iLocal_51, 128))
			*uParam0 = *uParam0 + 1;

	if (*uParam0 == 2)
		if (func_491(iLocal_51, 64))
			*uParam0 = *uParam0 + 1;

	return;
}

BOOL func_191() // Hash - 0xDDAFE141 ^0xDDAFE141
{
	if (func_491(iLocal_51, 16) && func_491(iLocal_51, 64) && func_491(iLocal_51, 128))
		return true;

	return false;
}

void func_192(var uParam0) // Hash - 0xA4BF2717 ^0x818FC39B
{
	var unk;
	float num;
	float num2;
	float num3;

	unk = 4;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	func_194(&unk[0], &unk[1], &unk[2], &unk[3], false, false);
	num.f_2 = -(SYSTEM::TO_FLOAT(unk[2]) / 127f) * 10f;
	num.f_1 = (-num.f_2 * 3f) / 10f;

	if (PAD::IS_LOOK_INVERTED())
		num = (SYSTEM::TO_FLOAT(unk[3]) / 127f) * 10f;
	else
		num = -(SYSTEM::TO_FLOAT(unk[3]) / 127f) * 10f;

	num2 = 30f * SYSTEM::TIMESTEP();
	num3 = { num };

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
	{
		uParam0->f_4 = func_193(uParam0->f_4 + (num3 * 0.05f), -3f, 3f);
		uParam0->f_4.f_1 = func_193(uParam0->f_4.f_1 + (num3.f_1 * 0.05f), -3f, 3f);
		uParam0->f_4.f_2 = func_193(uParam0->f_4.f_2 + (num3.f_2 * 0.05f), -3f, 3f);
	}
	else
	{
		uParam0->f_4 = uParam0->f_4 + func_193((num3 - uParam0->f_4) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_1 = uParam0->f_4.f_1 + func_193((num3.f_1 - uParam0->f_4.f_1) * 0.05f * num2, -3f, 3f);
		uParam0->f_4.f_2 = uParam0->f_4.f_2 + func_193((num3.f_2 - uParam0->f_4.f_2) * 0.05f * num2, -3f, 3f);
	}

	CAM::SET_CAM_ROT(*uParam0, uParam0->f_1 + uParam0->f_4, 2);
	return;
}

float func_193(float fParam0, float fParam1, float fParam2) // Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

void func_194(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Hash - 0x61DDCD0A ^0x4AAD6D
{
	*uParam0 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = SYSTEM::FLOOR(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X))
			*uParam0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y))
			*uParam1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X))
			*uParam2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	
		if (!PAD::IS_CONTROL_ENABLED(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y))
			*uParam3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		if (bParam5)
		{
			if (PAD::IS_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		
			if (PAD::IS_MOUSE_LOOK_INVERTED())
				*uParam3 = *uParam3 * -1;
		}
	}

	return;
}

void func_195() // Hash - 0x136D093C ^0x83A2C30D
{
	int localSceneFromNetworkId;
	float synchronizedScenePhase;

	if (!func_200())
	{
		if (func_199(pedLocal_96))
		{
			if (!func_491(iLocal_49, 256))
			{
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(PLAYER::PLAYER_PED_ID());
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_CLIMAX", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			
				if (iLocal_72 == 1)
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 15, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 252);
				}
				else if (iLocal_72 == 2)
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 10, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 4000, 210);
				}
				else
				{
					if (!func_551())
						PLAYER::SPECIAL_ABILITY_CHARGE_ABSOLUTE(PLAYER::PLAYER_ID(), 5, true, 0);
				
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 3000, 168);
				}
			
				func_482(&iLocal_49, 256);
			}
		}
	}
	else
	{
		switch (iLocal_298)
		{
			case 0:
				if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_96, joaat("SEX_BOUNCE")))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 84);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_99, 1, 0f, 0f, -0.05f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
		
			case 1:
			case 2:
				if (func_491(iLocal_49, 32768))
				{
					if (func_551())
						localSceneFromNetworkId = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iLocal_79);
					else
						localSceneFromNetworkId = iLocal_79;
				
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(localSceneFromNetworkId))
					{
						synchronizedScenePhase = PED::GET_SYNCHRONIZED_SCENE_PHASE(localSceneFromNetworkId);
					
						if (synchronizedScenePhase > 0.01f && synchronizedScenePhase < 0.019f || synchronizedScenePhase > 0.093f && synchronizedScenePhase < 0.1f || synchronizedScenePhase > 0.165f && synchronizedScenePhase < 0.172f || synchronizedScenePhase > 0.231f && synchronizedScenePhase < 0.239f || synchronizedScenePhase > 0.308f && synchronizedScenePhase < 0.317f || synchronizedScenePhase > 0.37f && synchronizedScenePhase < 0.378f || synchronizedScenePhase > 0.437f && synchronizedScenePhase < 0.443f || synchronizedScenePhase > 0.507f && synchronizedScenePhase < 0.518f || synchronizedScenePhase > 0.58f && synchronizedScenePhase < 0.587f || synchronizedScenePhase > 0.651f && synchronizedScenePhase < 0.659f || synchronizedScenePhase > 0.72f && synchronizedScenePhase < 0.729f || synchronizedScenePhase > 0.788f && synchronizedScenePhase < 0.794f || synchronizedScenePhase > 0.862f && synchronizedScenePhase < 0.87f || synchronizedScenePhase > 0.937f && synchronizedScenePhase < 0.946f)
						{
							if (!func_524(512))
							{
								PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
								ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
								func_197();
								func_196(512);
							}
						}
						else
						{
							func_528(512);
						}
					}
				}
				else if (ENTITY::HAS_ANIM_EVENT_FIRED(pedLocal_96, joaat("SEX_BOUNCE")))
				{
					PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 200, 252);
					ENTITY::APPLY_FORCE_TO_ENTITY(veLocal_99, 1, 0f, 0f, -0.1f, 0f, 0f, 0f, 0, true, true, true, true, false);
					func_197();
				}
				break;
		}
	}

	return;
}

void func_196(int iParam0) // Hash - 0xED96FC5 ^0xED96FC5
{
	if (!func_491(iLocal_52, iParam0))
		func_482(&iLocal_52, iParam0);

	return;
}

void func_197() // Hash - 0x3F97188B ^0xE115A904
{
	int entityHealth;

	entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
	entityHealth = entityHealth + 1 + iLocal_297;

	if (entityHealth > ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID()))
		entityHealth = ENTITY::GET_ENTITY_MAX_HEALTH(PLAYER::PLAYER_PED_ID());

	ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), entityHealth, 0);
	func_198();
	return;
}

void func_198() // Hash - 0xF527FFE8 ^0x8513D08B
{
	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		iLocal_59 = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());

	return;
}

BOOL func_199(Ped pedParam0) // Hash - 0x167BE4BC ^0xF3A04924
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_54(), func_46(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_54(), func_46(21), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_52(), func_45(11), 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_52(), func_45(21), 3);
}

BOOL func_200() // Hash - 0x51744148 ^0xA0CD19E0
{
	return ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_96, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_201(pedLocal_96, func_49(), true), 3);
}

char* func_201(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x6A8C9314 ^0xA23DCCD1
{
	char* str;
	Vehicle vehiclePedIsIn;

	str = "";

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, true);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
			if (func_47(vehiclePedIsIn))
				if (bParam1)
					if (bParam2)
						str = func_46(20);
					else
						str = func_46(25);
				else if (bParam2)
					str = func_46(10);
				else
					str = func_46(15);
			else if (bParam1)
				if (bParam2)
					str = func_45(20);
				else
					str = func_45(25);
			else if (bParam2)
				str = func_45(10);
			else
				str = func_45(15);
	}

	return str;
}

void func_202() // Hash - 0x59B7E745 ^0x23298D64
{
	if (!func_200())
		return;

	if (func_551())
		func_206();

	if (AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96) || AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
		return;

	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 5000) > 2500)
		func_203();

	return;
}

void func_203() // Hash - 0x467BBE97 ^0x5A2C3AC3
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96) && !AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()))
	{
		if (iLocal_297 == 0)
			func_131("PROSTITUTES_BJ_SPEECH_SCENE");
	
		if (!func_10(&uLocal_107))
		{
			func_472(&uLocal_107);
		}
		else if (func_7(&uLocal_107) > MISC::GET_RANDOM_FLOAT_IN_RANGE(2f, 5f))
		{
			if (!func_491(iLocal_49, 65536))
			{
				func_482(&iLocal_49, 65536);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "SEX_GENERIC", "SPEECH_PARAMS_FORCE_NORMAL_CLEAR", 1);
				func_204(iLocal_298);
			}
			else
			{
				func_5(&iLocal_49, 65536);
				func_40(&uLocal_107);
			}
		}
	}

	return;
}

void func_204(int iParam0) // Hash - 0xC7811AD8 ^0xEAEDEFD6
{
	switch (iParam0)
	{
		case 0:
			func_87("PROSTITUTES_BJ_SPEECH_SCENE");
		
			if (func_205(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SEX_ORAL", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SEX_ORAL_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	
		case 1:
		case 2:
			if (func_205(PLAYER::PLAYER_ID()))
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SEX_GENERIC", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			else
				AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "SEX_GENERIC_FEM", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			break;
	}

	return;
}

BOOL func_205(Player plParam0) // Hash - 0xB2D7DB24 ^0x9B962F41
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return true;

	return Global_2657589[plParam0 /*466*/].f_240;
}

void func_206() // Hash - 0x3E08C77B ^0xD2D123A3
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (func_207(0.4f))
		func_196(4);

	if (func_524(4))
	{
		if (!func_10(&uLocal_110))
		{
			func_472(&uLocal_110);
		}
		else if (func_7(&uLocal_110) > 2f)
		{
			if (!func_524(16) && !func_207(0.4f))
			{
				func_196(16);
				iLocal_61 = iLocal_61 + 1;
			}
			else if (func_524(16))
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
				{
					func_528(4);
					func_528(16);
					func_40(&uLocal_110);
				}
			}
		}
	}

	return;
}

BOOL func_207(float fParam0) // Hash - 0x4FB553BD ^0x4BCC0351
{
	float playerLoudness;

	if (func_208(PLAYER::PLAYER_ID(), true, true))
	{
		playerLoudness = NETWORK::NETWORK_GET_PLAYER_LOUDNESS(PLAYER::PLAYER_ID());
	
		if (playerLoudness > fParam0)
			return true;
	}

	return false;
}

BOOL func_208(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

void func_209(BOOL bParam0, BOOL bParam1) // Hash - 0xE9C72B1E ^0xE9C72B1E
{
	if (!func_551())
		return;

	func_181(bParam0, bParam1);
	func_177(bParam0, bParam1);
	func_175(bParam0, bParam1);
	func_166(bParam0, bParam1);
	func_159(bParam0, bParam1);
	return;
}

void func_210(int iParam0, int iParam1) // Hash - 0xC66FF25F ^0xC66FF25F
{
	int num;

	num = func_141(iParam0, func_139(iParam1), 0);
	num = num + 1;

	if (!func_212(iParam0))
		func_138(iParam0, num, iParam1, true, false);
	else
		func_211(iParam0, num, iParam1, true);

	return;
}

void func_211(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Hash - 0xA44AABCD ^0x4F7E8096
{
	Hash statName;

	statName = Global_2805027[iParam0 /*3*/][func_139(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	switch (iParam0)
	{
		case 788:
			Global_1665566[func_139(iParam2)] = iParam1;
			break;
	
		case 789:
			Global_1665572[func_139(iParam2)] = iParam1;
			break;
	
		case 790:
			Global_1665578[func_139(iParam2)] = iParam1;
			break;
	
		case 791:
			Global_1665584[func_139(iParam2)] = iParam1;
			break;
	
		case 8729:
			Global_1665590[func_139(iParam2)] = iParam1;
			break;
	
		case 778:
			Global_1665536[func_139(iParam2)] = iParam1;
			break;
	
		case 779:
			Global_1665542[func_139(iParam2)] = iParam1;
			break;
	
		case 780:
			Global_1665548[func_139(iParam2)] = iParam1;
			break;
	
		case 781:
			Global_1665554[func_139(iParam2)] = iParam1;
			break;
	
		case 8731:
			Global_1665560[func_139(iParam2)] = iParam1;
			break;
	
		case 768:
			Global_1665506[func_139(iParam2)] = iParam1;
			break;
	
		case 769:
			Global_1665512[func_139(iParam2)] = iParam1;
			break;
	
		case 770:
			Global_1665518[func_139(iParam2)] = iParam1;
			break;
	
		case 771:
			Global_1665524[func_139(iParam2)] = iParam1;
			break;
	
		case 8733:
			Global_1665530[func_139(iParam2)] = iParam1;
			break;
	
		case 758:
			Global_1665596[func_139(iParam2)] = iParam1;
			break;
	
		case 759:
			Global_1665602[func_139(iParam2)] = iParam1;
			break;
	
		case 760:
			Global_1665608[func_139(iParam2)] = iParam1;
			break;
	
		case 761:
			Global_1665614[func_139(iParam2)] = iParam1;
			break;
	
		case 8735:
			Global_1665620[func_139(iParam2)] = iParam1;
			break;
	
		case 1304:
			Global_1665626[func_139(iParam2)] = iParam1;
			break;
	
		case 7236:
			Global_1665632[func_139(iParam2)] = iParam1;
			break;
	
		case 640:
			Global_1665638[func_139(iParam2)] = iParam1;
			break;
	
		case 1279:
			Global_1665644[func_139(iParam2)] = iParam1;
			break;
	
		case 1878:
			Global_2851323[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 2269:
			Global_2851323[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 2932:
			Global_2851323[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3061:
			Global_2851323[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 12424:
			Global_2851502[func_139(iParam2)] = iParam1;
			break;
	
		case 765:
			Global_1665650[func_139(iParam2)] = iParam1;
			break;
	
		case 766:
			Global_1665656[func_139(iParam2)] = iParam1;
			break;
	
		case 767:
			Global_1665662[func_139(iParam2)] = iParam1;
			break;
	
		case 8734:
			Global_1665668[func_139(iParam2)] = iParam1;
			break;
	
		case 9538:
			Global_1665674[func_139(iParam2)] = iParam1;
			break;
	
		case 11803:
			Global_1665680[func_139(iParam2)] = iParam1;
			break;
	
		case 1237:
			Global_1665686[func_139(iParam2)] = iParam1;
			break;
	
		case 3056:
			Global_2851411[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3057:
			Global_2851411[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3058:
			Global_2851411[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3059:
			Global_2851411[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3060:
			Global_2851411[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3639:
			Global_2851505[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3640:
			Global_2851505[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3641:
			Global_2851505[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3642:
			Global_2851505[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3643:
			Global_2851505[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3644:
			Global_2851521[0 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3645:
			Global_2851521[1 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3646:
			Global_2851521[2 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3647:
			Global_2851521[3 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3648:
			Global_2851521[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3224:
			Global_2851411[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3230:
			Global_2851323[4 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3666:
			Global_2851537[func_139(iParam2)] = iParam1;
			break;
	
		case 3667:
			Global_2851546[func_139(iParam2)] = iParam1;
			break;
	
		case 3668:
			Global_2851540[func_139(iParam2)] = iParam1;
			break;
	
		case 3669:
			Global_2851549[func_139(iParam2)] = iParam1;
			break;
	
		case 3670:
			Global_2851543[func_139(iParam2)] = iParam1;
			break;
	
		case 3671:
			Global_2851552[func_139(iParam2)] = iParam1;
			break;
	
		case 3692:
			Global_2851555[func_139(iParam2)] = iParam1;
			break;
	
		case 3232:
			Global_2851411[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3233:
			Global_2851323[5 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3237:
			Global_2851411[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 3235:
			Global_2851323[6 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4022:
			Global_2851411[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4023:
			Global_2851323[7 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4025:
			Global_2851411[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4026:
			Global_2851323[8 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4028:
			Global_2851411[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4029:
			Global_2851323[9 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4031:
			Global_2851411[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 4032:
			Global_2851323[10 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6112:
			Global_2851411[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6113:
			Global_2851323[11 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6170:
			Global_2851411[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6171:
			Global_2851323[12 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6548:
			Global_2851411[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6549:
			Global_2851323[13 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6561:
			Global_2851411[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6562:
			Global_2851323[14 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6564:
			Global_2851411[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6565:
			Global_2851323[15 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6567:
			Global_2851411[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 6568:
			Global_2851323[16 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 7286:
			Global_2851323[17 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 7288:
			Global_2851323[18 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 7290:
			Global_2851323[19 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8013:
			Global_2851323[20 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8285:
			Global_2851558[func_139(iParam2)] = iParam1;
			break;
	
		case 8286:
			Global_2851561[func_139(iParam2)] = iParam1;
			break;
	
		case 8287:
			Global_2851564[func_139(iParam2)] = iParam1;
			break;
	
		case 8288:
			Global_2851567[func_139(iParam2)] = iParam1;
			break;
	
		case 8289:
			Global_2851570[func_139(iParam2)] = iParam1;
			break;
	
		case 8290:
			Global_2851573[func_139(iParam2)] = iParam1;
			break;
	
		case 8291:
			Global_2851576[func_139(iParam2)] = iParam1;
			break;
	
		case 8292:
			Global_2851579[func_139(iParam2)] = iParam1;
			break;
	
		case 8293:
			Global_2851582[func_139(iParam2)] = iParam1;
			break;
	
		case 8294:
			Global_2851585[func_139(iParam2)] = iParam1;
			break;
	
		case 8295:
			Global_2851588[func_139(iParam2)] = iParam1;
			break;
	
		case 8296:
			Global_2851591[func_139(iParam2)] = iParam1;
			break;
	
		case 8297:
			Global_2851594[func_139(iParam2)] = iParam1;
			break;
	
		case 8905:
			Global_2851597[func_139(iParam2)] = iParam1;
			break;
	
		case 8537:
			Global_2851323[21 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8982:
			Global_2851411[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8980:
			Global_2851323[22 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8985:
			Global_2851411[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 8983:
			Global_2851323[23 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 9624:
			Global_2851323[24 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 9913:
			Global_2851323[25 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 10443:
			Global_2851411[27 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 10441:
			Global_2851323[26 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 10446:
			Global_2851411[28 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		case 10444:
			Global_2851323[27 /*3*/][func_139(iParam2)] = iParam1;
			break;
	
		default:
			break;
	}

	return;
}

BOOL func_212(int iParam0) // Hash - 0xD6A73054 ^0xD6A73054
{
	if (Global_1665487)
	{
		switch (iParam0)
		{
			case 788:
			case 789:
			case 790:
			case 791:
			case 8729:
			case 778:
			case 779:
			case 780:
			case 781:
			case 8731:
			case 768:
			case 769:
			case 770:
			case 771:
			case 8733:
			case 758:
			case 759:
			case 760:
			case 761:
			case 8735:
			case 1304:
			case 7236:
			case 640:
			case 1279:
			case 765:
			case 766:
			case 767:
			case 8734:
			case 9538:
			case 11803:
			case 1237:
			case 1878:
			case 2269:
			case 2932:
			case 3061:
			case 12424:
			case 3056:
			case 3057:
			case 3058:
			case 3059:
			case 3060:
			case 3235:
			case 3237:
			case 3639:
			case 3640:
			case 3641:
			case 3642:
			case 3643:
			case 3644:
			case 3645:
			case 3646:
			case 3647:
			case 3648:
			case 3230:
			case 3224:
			case 3666:
			case 3667:
			case 3668:
			case 3669:
			case 3670:
			case 3671:
			case 3692:
			case 3233:
			case 3232:
			case 4023:
			case 4022:
			case 4026:
			case 4025:
			case 4029:
			case 4028:
			case 4032:
			case 4031:
			case 6113:
			case 6112:
			case 6171:
			case 6170:
			case 6536:
			case 6535:
			case 6549:
			case 6548:
			case 6562:
			case 6561:
			case 6565:
			case 6564:
			case 6568:
			case 6567:
			case 7286:
			case 7288:
			case 7290:
			case 8285:
			case 8286:
			case 8287:
			case 8288:
			case 8289:
			case 8290:
			case 8291:
			case 8292:
			case 8293:
			case 8294:
			case 8295:
			case 8296:
			case 8297:
			case 8905:
			case 8013:
			case 8537:
			case 8980:
			case 8982:
			case 8983:
			case 8985:
			case 9624:
			case 9913:
			case 10441:
			case 10443:
			case 10444:
			case 10446:
				return true;
		}
	}

	return false;
}

void func_213(int iParam0) // Hash - 0x7E11E9C ^0x544BF257
{
	if (func_218())
		return;

	if (!Global_20383.f_1 == 1)
	{
		if (func_217(0))
			func_214(iParam0);
	
		MISC::SET_BIT(&Global_8254, 2);
	}

	return;
}

void func_214(int iParam0) // Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_218())
		return;

	if (Global_20584)
		if (func_216())
			func_215(true, true);
		else
			func_215(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_20())
		Global_20383.f_1 = 3;

	return;
}

void func_215(BOOL bParam0, BOOL bParam1) // Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_217(0))
		{
			Global_20584 = true;
		
			if (bParam1)
				MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
		
			Global_20311 = { Global_20329[Global_20328 /*3*/] };
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
		}
	}
	else if (Global_20584 == true)
	{
		Global_20584 = false;
		Global_20311 = { Global_20336[Global_20328 /*3*/] };
	
		if (bParam1)
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
		else
			MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
	}

	return;
}

BOOL func_216() // Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_217(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
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

BOOL func_218() // Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

BOOL func_219(int iParam0) // Hash - 0x46250BBD ^0x5F7A3E87
{
	BOOL isSynchronizedSceneRunning;

	if (func_551())
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(iParam0));
	else
		isSynchronizedSceneRunning = PED::IS_SYNCHRONIZED_SCENE_RUNNING(iParam0);

	return isSynchronizedSceneRunning;
}

void func_220() // Hash - 0x3659E603 ^0x9556402C
{
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), func_222(), true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), func_221());
		func_542();
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		PED::DELETE_PED(&pedLocal_96);
	}

	return;
}

float func_221() // Hash - 0xB9C4DD11 ^0xB9C4DD11
{
	switch (func_23())
	{
		case 0:
			return 116.6356f;
	
		case 1:
			return 175.0504f;
	
		case 2:
			return 299.5673f;
	}

	return 0f;
}

Vector3 func_222() // Hash - 0x9FE1ED2F ^0x9FE1ED2F
{
	switch (func_23())
	{
		case 0:
			return -820.4975f, 176.9618f, 70.6166f;
	
		case 1:
			return -14.6005f, -1444.6244f, 29.6472f;
	
		case 2:
			return 1979.9609f, 3816.0178f, 31.3641f;
	}

	return 0f, 0f, 0f;
}

void func_223() // Hash - 0x4F44841F ^0xD1816FD2
{
	int duration;

	if (func_225(&uLocal_104, 3f) && !CAM::IS_CAM_ACTIVE(caLocal_103))
	{
		duration = SYSTEM::FLOOR((func_224() - 2f) * 1000f);
		CAM::SET_CAM_ACTIVE(caLocal_102, false);
		CAM::SET_CAM_ACTIVE_WITH_INTERP(caLocal_103, caLocal_102, duration, 1, 1);
	}

	if (func_225(&uLocal_104, func_224()))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		iLocal_295 = 10;
	}

	return;
}

float func_224() // Hash - 0xB9C4DD11 ^0xB9C4DD11
{
	switch (func_23())
	{
		case 0:
			return 10f;
	
		case 1:
			return 12f;
	
		case 2:
			return 10f;
	}

	return 0f;
}

BOOL func_225(int* piParam0, float fParam1) // Hash - 0x18521603 ^0x18521603
{
	if (func_10(piParam0))
		if (func_7(piParam0) > fParam1)
			return true;

	return false;
}

void func_226(var uParam0) // Hash - 0x79AEED28 ^0x7BBD84CC
{
	int i;
	eEventType eventAtIndex;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		switch (eventAtIndex)
		{
			case EVENT_NETWORK_DAMAGE_ENTITY:
				func_227(i, uParam0);
				break;
		}
	}

	return;
}

void func_227(int iParam0, var uParam1) // Hash - 0x11854195 ^0xF247C8E8
{
	struct<13> eventData;

	if (SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, iParam0, &eventData, 13))
		func_228(&eventData, uParam1);

	return;
}

void func_228(var uParam0, var uParam1) // Hash - 0x50A72F4E ^0x1216BEA2
{
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if (ENTITY::IS_ENTITY_A_VEHICLE(*uParam0))
		{
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(*uParam0))
					{
						func_123(false);
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						func_542();
						func_536(uParam1);
					}
				}
			}
		}
	}

	return;
}

void func_229(var uParam0) // Hash - 0x6BEEFC09 ^0x515F3119
{
	int entityHealth;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(pedLocal_96);
		
			if (entityHealth - iLocal_60 < 0)
			{
				func_123(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_230(var uParam0) // Hash - 0x9D1A7916 ^0xAEAE8C2C
{
	int entityHealth;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			entityHealth = ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID());
		
			if (entityHealth - iLocal_59 < 0)
			{
				func_123(false);
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_231(var uParam0) // Hash - 0x481875AD ^0x29170F4
{
	Vehicle vehiclePedIsIn;
	Vector3 entityCoords;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
			
				if (SYSTEM::VDIST2(uLocal_56, entityCoords) >= 4f)
				{
					func_123(false);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
			}
		}
	}

	return;
}

void func_232() // Hash - 0x589BA966 ^0x3CB0971
{
	int num;
	var unk;
	eViewMode followPedCamViewMode;
	var unk5;
	int num2;
	var unk6;
	var unk7;
	int pedMoney;

	if (!func_491(iLocal_49, 16))
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
	
		func_482(&iLocal_49, 16);
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_99))
			{
				VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_99, true);
				VEHICLE::SET_VEHICLE_LIGHTS(veLocal_99, 4);
				VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_99, true);
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_99, false, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_99, true);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_99, 4);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_99, true);
		}
	
		if (!func_377() || !PED::IS_PED_IN_VEHICLE(pedLocal_96, veLocal_99, false))
		{
			func_473(false);
			return;
		}
	}
	else
	{
		func_473(false);
		return;
	}

	func_213(0);

	if (!VEHICLE::IS_VEHICLE_STOPPED(veLocal_99) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) && !func_491(iLocal_49, 1024))
	{
		iLocal_295 = 7;
		func_375(true, -1);
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1);
		iLocal_301 = 0;
		func_492("WAITING FOR VEHICLE TO STOP ");
		return;
	}

	num = 0;
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);

	switch (iLocal_301)
	{
		case 0:
		case 1:
			if (func_551())
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						{
							if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
										ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
									return;
								}
							}
						}
						else
						{
							NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
							return;
						}
					}
				}
			}
		
			func_374();
			func_373();
			func_198();
		
			if (func_370())
			{
				func_131("PROSTITUTES_DRIVE_SCENE");
				func_87("PROSTITUTES_PARKED_SCENE");
				func_369();
			
				if (func_551())
				{
					func_196(2);
				
					if (func_551())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
								{
									VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 4);
									VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
								}
							}
						}
					}
				}
			
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_96);
				iLocal_301 = 2;
			}
			break;
	
		case 2:
			if (func_368(iLocal_304))
			{
				func_367(&iLocal_304);
				func_5(&iLocal_75, 2);
			}
		
			func_365(pedLocal_96, false);
		
			if (func_365(PLAYER::PLAYER_PED_ID(), true))
			{
				if (func_363(&unk, 0))
				{
					evmLocal_48 = CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE();
					followPedCamViewMode = CAM::GET_FOLLOW_PED_CAM_VIEW_MODE();
				
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (followPedCamViewMode != FIRST_PERSON && evmLocal_48 == FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(FIRST_PERSON);
						else if (followPedCamViewMode == FIRST_PERSON && evmLocal_48 != FIRST_PERSON)
							CAM::SET_FOLLOW_PED_CAM_VIEW_MODE(THIRD_PERSON_MEDIUM);
				
					func_351();
					iLocal_301 = 3;
					func_492("Moving to SERVICE_MENU_CHOOSE");
				}
				else
				{
					func_350(&unk, -1);
					func_40(&uLocal_113);
					iLocal_297 = 3;
					iLocal_301 = 4;
				}
			}
			break;
	
		case 3:
			if (HUD::IS_PAUSE_MENU_ACTIVE())
				return;
		
			HUD::SHOW_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
			func_331();
			func_295(true, -1, true, false, true, -1082130432, false, false, -1);
			func_294(&unk5, &num2, &unk6, &unk7, false);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_HUD_SPECIAL, true);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
			PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
			num = 0;
		
			if (MISC::IS_PC_VERSION())
			{
				if (PAD::IS_USING_CURSOR(FRONTEND_CONTROL))
				{
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_LR, true);
					PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_LOOK_UD, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_ACCEPT, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_CANCEL, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_UP, true);
					PAD::ENABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN, true);
					func_290(false, false, false, true);
					func_289(false, -1, true);
				
					if (func_288())
					{
						if (Global_4541029 != iLocal_70)
						{
							AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
							iLocal_70 = Global_4541029;
							func_492("Player highlighted a new option using the mouse!");
						}
						else
						{
							num = 1;
						}
					}
				}
			}
		
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_DOWN) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_DOWN_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 > 100 && MISC::GET_GAME_TIMER() - iLocal_89 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("DOWN pressed!");
			
				if (iLocal_70 < iLocal_71)
					iLocal_70 = iLocal_70 + 1;
				else
					iLocal_70 = 0;
			
				iLocal_89 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY) || MISC::IS_PC_VERSION() && !PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && num2 < -100 && MISC::GET_GAME_TIMER() - iLocal_89 > 300)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				func_492("UP pressed!");
			
				if (iLocal_70 > 0)
					iLocal_70 = iLocal_70 - 1;
				else
					iLocal_70 = iLocal_71;
			
				iLocal_89 = MISC::GET_GAME_TIMER();
			}
			else if (PAD::IS_CONTROL_JUST_RELEASED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || num == 1)
			{
				AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
				HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
				func_284();
				ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
				iLocal_301 = 4;
			}
		
			func_283(iLocal_70, true, 1);
			break;
	
		case 4:
			pedMoney = PED::GET_PED_MONEY(pedLocal_96);
		
			if (iLocal_297 == 3)
			{
				func_375(true, -1);
				func_282();
				func_281(false);
				iLocal_64 = MISC::GET_GAME_TIMER();
				func_131("PROSTITUTES_PARKED_SCENE");
				func_492("eCurrentProstituteState = prostitute_REFUSED ");
				iLocal_295 = 6;
			
				if (iLocal_72 > 0)
				{
					if (func_127(pedLocal_96))
						func_126();
					else
						func_473(false);
				
					return;
				}
				else
				{
					if (func_276() >= 20)
					{
						pedMoney = pedMoney + 20;
						func_234(20);
						PED::SET_PED_MONEY(pedLocal_96, pedMoney);
					}
				
					func_473(true);
					return;
				}
			}
		
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
			{
			}
			else
			{
				func_375(true, -1);
				func_282();
			
				if (MISC::IS_AUSSIE_VERSION())
				{
					func_482(&iLocal_49, 1024);
					iLocal_297 = 3;
					func_492("AUSSIE VERSION IS TRUE!?!?!");
				}
			
				if (iLocal_297 != 3)
				{
					if (func_276() > func_233(iLocal_297))
					{
						func_234(func_233(iLocal_297));
						pedMoney = pedMoney + func_233(iLocal_297);
					}
				
					func_41(&uLocal_107, 14f - 4f);
					func_492("eCurrentProstituteState = PROSTITUTE_CUSTOMER_GETTING_SERVICED ");
					func_128();
					iLocal_295 = 11;
				}
			
				PED::SET_PED_MONEY(pedLocal_96, pedMoney);
				iLocal_64 = MISC::GET_GAME_TIMER();
			}
			break;
	}

	return;
}

int func_233(int iParam0) // Hash - 0x1492CB97 ^0x2FDCF687
{
	if (MISC::IS_AUSSIE_VERSION())
		if (iParam0 == 0)
			return 70;
		else if (iParam0 == 1)
			return 70;
		else if (iParam0 == 2)
			return 70;
		else
			return 0;

	if (iParam0 == 0)
		return 50;

	if (iParam0 == 1)
		return 70;

	if (iParam0 == 2)
		return 100;

	return 0;
}

void func_234(int iParam0) // Hash - 0x28D5C9E9 ^0x25DBE4E1
{
	var unk;

	if (!func_551())
		func_248(func_23(), 1, iParam0);
	else if (!func_247())
		MONEY::NETWORK_SPENT_PROSTITUTES(iParam0, false, false);
	else
		func_235(joaat("SERVICE_SPEND_PROSTITUTES"), iParam0, &unk, false, false, false);

	return;
}

void func_235(Hash hParam0, int iParam1, var uParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5) // Hash - 0x213EB214 ^0x213EB214
{
	int num;

	if (!func_247())
		return;

	num = 1;

	if (bParam4)
		num = 4;
	else if (bParam3)
		num = 2;
	else if (bParam5)
		num = 8;

	switch (hParam0)
	{
		case joaat("SERVICE_SPEND_MECHANIC_WAGE"):
		case joaat("SERVICE_SPEND_UTILITY_BILLS"):
		case joaat("SERVICE_SPEND_PROSTITUTES"):
		case joaat("SERVICE_SPEND_STRIP_CLUB"):
		case joaat("SERVICE_SPEND_CINEMA"):
		case joaat("SERVICE_SPEND_FAIRGROUND"):
		case joaat("SERVICE_SPEND_LOTTERY"):
		case joaat("SERVICE_SPEND_TELESCOPE"):
		case joaat("SERVICE_SPEND_CALL_PLAYER"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE"):
		case joaat("SERVICE_SPEND_VEHICLE_INSURANCE_PREMIUM"):
		case joaat("SERVICE_SPEND_CAR_REPAIR"):
		case joaat("SERVICE_SPEND_PERSONAL_VEHICLE_DROPOFF"):
		case joaat("SERVICE_SPEND_PEGASUS_DELIVERY"):
		case joaat("SERVICE_SPEND_CAR_IMPOUND"):
		case joaat("SERVICE_SPEND_CARWASH"):
		case joaat("SERVICE_SPEND_HEALTHCARE"):
		case joaat("SERVICE_SPEND_OTHER_PLAYER_HEALTHCARE"):
		case joaat("SERVICE_SPEND_ARREST_BAIL"):
		case joaat("SERVICE_SPEND_CASH_DROP"):
		case joaat("SERVICE_SPEND_ROBBED_BY_MUGGER"):
		case joaat("SERVICE_SPEND_CASH_DROP_HOLDUP"):
		case joaat("SERVICE_SPEND_MATCH_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_RACE_VEHICLE_RENTAL"):
		case joaat("SERVICE_SPEND_CHALLENGE_WAGER"):
		case joaat("SERVICE_SPEND_BETTING"):
		case joaat("SERVICE_SPEND_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_AMMO_DROP"):
		case joaat("SERVICE_SPEND_BACKUP_GANG"):
		case joaat("SERVICE_SPEND_BACKUP_HELI"):
		case joaat("SERVICE_SPEND_BOAT_PICKUP"):
		case joaat("SERVICE_SPEND_BOUNTY"):
		case joaat("SERVICE_SPEND_BULL_SHARK"):
		case joaat("SERVICE_SPEND_COPS_TURN_EYE"):
		case joaat("SERVICE_SPEND_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_HIRE_MERCENARY"):
		case joaat("SERVICE_SPEND_HIRE_MUGGER"):
		case joaat("SERVICE_SPEND_LOCATE_VEHICLE"):
		case joaat("SERVICE_SPEND_LOSE_WANTED_LEVEL"):
		case joaat("SERVICE_SPEND_OFF_THE_RADAR"):
		case joaat("SERVICE_SPEND_PASSIVE"):
		case joaat("SERVICE_SPEND_REQUEST_HEIST"):
		case joaat("SERVICE_SPEND_REQUEST_JOB"):
		case joaat("SERVICE_SPEND_REVEAL_PLAYERS"):
		case joaat("SERVICE_SPEND_TAXI"):
		case joaat("SERVICE_SPEND_BANK_INTEREST"):
		case joaat("SERVICE_SPEND_CASH_GIFT"):
		case joaat("SERVICE_SPEND_CASH_SHARED"):
		case joaat("SERVICE_SPEND_IMPROMPTU_RACE_FEE"):
		case joaat("SERVICE_SPEND_BOUNTY_DM"):
		case joaat("SERVICE_SPEND_WAGER"):
		case joaat("SERVICE_SPEND_PAY_BOSS"):
		case joaat("SERVICE_SPEND_PAY_GOON"):
		case joaat("SERVICE_SPEND_RENAME_ORGANIZATION"):
		case 2115896461:
		case 797947947:
		case joaat("SERVICE_SPEND_PA_SERVICE_HELI_PICKUP"):
		case joaat("SERVICE_SPEND_ORDER_BODYGUARD_VEHICLE"):
		case joaat("SERVICE_SPEND_ORDER_WAREHOUSE_VEHICLE"):
		case joaat("SERVICE_SPEND_JUKEBOX"):
		case joaat("SERVICE_SPEND_BUSINESS"):
		case joaat("SERVICE_SPEND_BA_VP_BOUNTY"):
		case joaat("SERVICE_SPEND_BA_VP_BULLSHARK"):
		case joaat("SERVICE_SPEND_BA_SARGE_AMMO"):
		case joaat("SERVICE_SPEND_BA_SARGE_MOLOTOV"):
		case joaat("SERVICE_SPEND_BA_ENFORCER_ARMOUR"):
		case joaat("SERVICE_SPEND_VEHICLE_EXPORT_MODS"):
		case joaat("SERVICE_SPEND_IMPORT_EXPORT_REPAIR"):
		case joaat("SERVICE_SPEND_EMPLOY_ASSASSINS"):
		case joaat("SERVICE_SPEND_GANGOPS_CANNON"):
		case joaat("SERVICE_SPEND_GANGOPS_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_GANGOPS_START_STRAND"):
		case joaat("SERVICE_SPEND_GANGOPS_TRIP_SKIP"):
		case joaat("SERVICE_SPEND_GANGOPS_REPAIR_COST"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_ENTRY_FEE"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_BAR_DRINK"):
		case joaat("SERVICE_SPEND_NIGHTCLUB_DJ_REHIRE"):
		case joaat("SERVICE_SPEND_ARENA_JOIN_SPECTATOR"):
		case joaat("SERVICE_SPEND_ARENA_SPECTATOR_BOX"):
		case joaat("SERVICE_SPEND_MAKE_IT_RAIN"):
			if (iParam1 > 0 || Global_262145.f_28375)
				func_236(uParam2, -1135378931, 537254313, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_PICKUP"):
		case joaat("SERVICE_EARN_JOBS"):
		case joaat("SERVICE_EARN_BETTING"):
		case joaat("SERVICE_EARN_LOTTERY"):
		case joaat("SERVICE_EARN_CHALLENGE_WIN"):
		case joaat("SERVICE_EARN_PROPERTY_SALES"):
		case joaat("SERVICE_EARN_VEHICLE_SALES"):
		case joaat("SERVICE_EARN_LESTER_TARGET_KILL"):
		case joaat("SERVICE_EARN_BOUNTY_COLLECTED"):
		case joaat("SERVICE_EARN_CRATE_DROP"):
		case joaat("SERVICE_EARN_HOLDUPS"):
		case joaat("SERVICE_EARN_IMPORT_EXPORT"):
		case joaat("SERVICE_EARN_ARMORED_TRUCKS"):
		case joaat("SERVICE_EARN_JOBSHARE_CASH"):
		case joaat("SERVICE_EARN_NOT_BADSPORT"):
		case joaat("SERVICE_EARN_BANK_INTEREST"):
		case joaat("SERVICE_EARN_ROCKSTAR"):
		case joaat("SERVICE_EARN_DEBUG"):
		case joaat("SERVICE_EARN_CNCW"):
		case joaat("SERVICE_EARN_CNCB"):
		case joaat("SERVICE_EARN_JOB_BONUS"):
		case joaat("SERVICE_EARN_BEND_JOB"):
		case joaat("SERVICE_EARN_PERSONAL_VEHICLE"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PLANE_TAKEDOWN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DISTRACT_COPS"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DESTROY_VEH"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_VAGOS"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_LOST"):
		case joaat("SERVICE_EARN_REFUND_BACKUP_FAMILIES"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MUGGER"):
		case joaat("SERVICE_EARN_REFUND_HIRE_MERCENARY"):
		case joaat("SERVICE_EARN_REFUND_BUY_CARDROPOFF"):
		case joaat("SERVICE_EARN_REFUND_HELI_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_BOAT_PICKUP"):
		case joaat("SERVICE_EARN_REFUND_CLEAR_WANTED"):
		case joaat("SERVICE_EARN_REFUND_HEAD_2_HEAD"):
		case joaat("SERVICE_EARN_REFUND_CHALLENGE"):
		case joaat("SERVICE_EARN_REFUND_SHARE_LAST_JOB"):
		case joaat("SERVICE_EARN_REFUND_LOTTERY"):
		case -1426920838:
		case joaat("SERVICE_EARN_GANGATTACK_PICKUP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_DELIVER"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_TARGET_KILL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_URBAN_WARFARE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_TIME_TRIAL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CHALLENGES"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HELI_HOT_TARGET"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_DEAD_DROP"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PENNED_IN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_PASS_PARCEL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BLAST"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_HOT_PROPERTY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_KING"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_BEAST"):
		case joaat("SERVICE_EARN_BOSS"):
		case joaat("SERVICE_EARN_GOON"):
		case joaat("SERVICE_EARN_BOSS_AGENCY"):
		case joaat("SERVICE_EARN_FROM_DESTROYING_CONTRABAND"):
		case joaat("SERVICE_EARN_PREMIUM_JOB"):
		case joaat("SERVICE_EARN_FROM_VEHICLE_EXPORT"):
		case joaat("SERVICE_EARN_SMUGGLER_AGENCY"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT_BONUS"):
		case joaat("SERVICE_EARN_WAGE_PAYMENT"):
		case joaat("SERVICE_EARN_REFUNDAMMODROP"):
		case joaat("SERVICE_EARN_SALVAGE_CHECKPOINT_COLLECTION"):
		case joaat("SERVICE_EARN_AMBIENT_MUGGING"):
		case joaat("SERVICE_EARN_AMBIENT_PICKUP"):
		case joaat("SERVICE_EARN_DEATHMATCH_BOUNTY"):
		case joaat("SERVICE_EARN_CASHING_OUT"):
		case joaat("SERVICE_EARN_JOB_BONUS_CRIMINAL_MASTERMIND"):
		case joaat("SERVICE_EARN_JOB_BONUS_HEIST_AWARD"):
		case joaat("SERVICE_EARN_JOB_BONUS_FIRST_TIME_BONUS"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_MANUAL"):
		case joaat("SERVICE_EARN_REFUND_ORBITAL_AUTO"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES"):
		case joaat("SERVICE_EARN_GANGOPS_WAGES_BONUS"):
		case joaat("SERVICE_EARN_GANGOPS_PREP_PARTICIPATION"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP"):
		case joaat("SERVICE_EARN_GANGOPS_SETUP_FAIL"):
		case joaat("SERVICE_EARN_GANGOPS_FINALE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_MASTERMIND_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_2"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_3"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_LOYALTY_AWARD_4"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_FIRST_TIME_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_SUPPORTING"):
		case joaat("SERVICE_EARN_GANGOPS_AWARD_ORDER"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_BASE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SUBMARINE"):
		case joaat("SERVICE_EARN_GANGOPS_ELITE_XM_SILO"):
		case joaat("SERVICE_EARN_GANGOPS_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_DOOMSDAY_FINALE_BONUS"):
		case joaat("SERVICE_EARN_BOUNTY_HUNTER_REWARD"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_BATTLE"):
		case joaat("SERVICE_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION"):
		case joaat("SERVICE_EARN_FROM_FMBB_PHONECALL_MISSION"):
		case joaat("SERVICE_EARN_FROM_BUSINESS_HUB_SELL"):
		case joaat("SERVICE_EARN_FROM_FMBB_BOSS_WORK"):
		case joaat("SERVICE_EARN_FMBB_WAGE_BONUS"):
		case joaat("SERVICE_EARN_BB_EVENT_BONUS"):
		case joaat("SERVICE_EARN_ARENA_SKILL_LVL_AWARD"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_1"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_2"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_3"):
		case joaat("SERVICE_EARN_ARENA_CAREER_TIER_PROGRESSION_4"):
		case joaat("SERVICE_EARN_SPIN_THE_WHEEL_CASH"):
			func_236(uParam2, -1135378931, 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	}

	switch (hParam0)
	{
		case joaat("SERVICE_SPEND_SPIN_THE_WHEEL_PAYMENT"):
		case joaat("SERVICE_SPEND_CASINO_GENERIC"):
		case joaat("SERVICE_SPEND_ARCADE_GAME"):
		case joaat("SERVICE_SPEND_ARCADE_GENERIC"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SKIP_MISSION"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_SETUP_HEIST"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_CASINO_MODEL"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_VAULT_DOOR"):
		case joaat("SERVICE_SPEND_CASINO_HEIST_DOOR_SECURITY"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIRSTRIKE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_HEAVY_WEAPON"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_SNIPER"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_AIR_SUPPORT"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_DRONE"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPORT_WEAPON_STASH"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_SUPPRESSORS"):
		case joaat("SERVICE_SPEND_ISLAND_HEIST_REPLAY"):
		case joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"):
		case joaat("SERVICE_SPEND_SUBMARINE_UTILITY_FEE"):
		case joaat("SERVICE_SPEND_SUBMARINE_BOAT"):
		case joaat("SERVICE_SPEND_SUBMARINE_RELOCATION"):
		case joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"):
		case joaat("SERVICE_SPEND_BUSINESS_EXPENSES"):
		case joaat("SERVICE_SPEND_FIXER_HQ_CONCIERGE"):
		case joaat("SERVICE_SPEND_REQUEST_COMPANY_SUV"):
		case joaat("SERVICE_SPEND_INTERACTION_MENU_ABILITY"):
		case joaat("SERVICE_SPEND_AGENT_14_VEHICLE_REQUEST"):
		case joaat("SERVICE_SPEND_TONY_LIMO"):
		case -2081984382:
		case 1089562091:
			if (iParam1 > 0 || Global_262145.f_28375)
				func_236(uParam2, -1135378931, 537254313, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	
		case joaat("SERVICE_EARN_ASSASSINATE_TARGET_KILLED"):
		case joaat("SERVICE_EARN_ARENA_WAR"):
		case joaat("SERVICE_EARN_REFUND_ARENA_SPEC_BOX_ENTRY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_RC_TIME_TRIAL"):
		case joaat("SERVICE_EARN_DAILY_OBJECTIVE_EVENT"):
		case joaat("SERVICE_EARN_COLLECTABLES_ACTION_FIGURES"):
		case joaat("SERVICE_EARN_CASINO_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_ONE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_TWO_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_THREE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FOUR_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_FIVE_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_MISSION_SIX_FIRST_TIME"):
		case joaat("SERVICE_EARN_CASINO_AWARD_STRAIGHT_FLUSH"):
		case joaat("SERVICE_EARN_CASINO_AWARD_TOP_PAIR"):
		case joaat("SERVICE_EARN_CASINO_AWARD_FULL_HOUSE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_LUCKY_LUCKY"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_BRONZE"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_SILVER"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_GOLD"):
		case joaat("SERVICE_EARN_CASINO_AWARD_HIGH_ROLLER_PLATINUM"):
		case joaat("SERVICE_EARN_CASINO_STORY_MISSION_REWARD"):
		case joaat("SERVICE_EARN_CASINO_HEIST_SETUP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_PREP_MISSION"):
		case joaat("SERVICE_EARN_CASINO_HEIST_FINALE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_SMASH_N_GRAB"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_IN_PLAIN_SIGHT"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_UNDETECTED"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ALL_ROUNDER"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_CASINO_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_STEALTH"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_SUBTERFUGE"):
		case joaat("SERVICE_EARN_CASINO_HEIST_ELITE_DIRECT"):
		case joaat("SERVICE_EARN_COLLECTABLE_ITEM"):
		case joaat("SERVICE_EARN_COLLECTABLE_COMPLETED_COLLECTION"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS"):
		case joaat("SERVICE_EARN_COLLECTABLES_SIGNAL_JAMMERS_COMPLETE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_FINALE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_ELITE_CHALLENGE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PROFESSIONAL"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_ELITE_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_THE_ISLAND_HEIST"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_GOING_ALONE"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_TEAM_WORK"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_CAT_BURGLAR"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_PRO_THIEF"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_AWARD_MIXING_IT_UP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_PREP"):
		case joaat("SERVICE_EARN_ISLAND_HEIST_DJ_MISSION"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_PREP"):
		case joaat("SERVICE_EARN_TUNER_ROBBERY_FINALE"):
		case joaat("SERVICE_EARN_TUNER_CAR_CLUB_MEMBERSHIP"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE"):
		case joaat("SERVICE_EARN_TUNER_DAILY_VEHICLE_BONUS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_UNION_DEPOSITORY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_MILITARY_CONVOY"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FLEECA_BANK"):
		case joaat("SERVICE_EARN_TUNER_AWARD_FREIGHT_TRAIN"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BOLINGBROKE_ASS"):
		case joaat("SERVICE_EARN_TUNER_AWARD_IAA_RAID"):
		case joaat("SERVICE_EARN_TUNER_AWARD_METH_JOB"):
		case joaat("SERVICE_EARN_TUNER_AWARD_BUNKER_RAID"):
		case joaat("SERVICE_EARN_AUTO_SHOP_DELIVERY_AWARD"):
		case joaat("SERVICE_EARN_AGENCY_SECURITY_CONTRACT"):
		case joaat("SERVICE_EARN_AGENCY_PAYPHONE_HIT"):
		case joaat("SERVICE_EARN_AGENCY_STORY_PREP"):
		case joaat("SERVICE_EARN_AGENCY_STORY_FINALE"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SEC_CON"):
		case joaat("SERVICE_EARN_FIXER_AWARD_PHONE_HIT"):
		case joaat("SERVICE_EARN_FIXER_AWARD_AGENCY_STORY"):
		case joaat("SERVICE_EARN_FIXER_AWARD_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FIXER_RIVAL_DELIVERY"):
		case joaat("SERVICE_EARN_MUSIC_STUDIO_SHORT_TRIP"):
		case joaat("SERVICE_EARN_FROM_CONTRABAND"):
		case joaat("SERVICE_EARN_NCLUB_TROUBLEMAKER"):
		case joaat("SERVICE_EARN_SIGHTSEEING_REWARD"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CLUBHOUSE_CONTRACT"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_UNDERWATER_CARGO"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_CRIME_SCENE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_METAL_DETECTOR"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_PLANE"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SMUGGLER_TRAIL"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_GOLDEN_GUN"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_AMMUNATION_DELIVERY"):
		case joaat("SERVICE_EARN_AMBIENT_JOB_SOURCE_RESEARCH"):
		case joaat("SERVICE_EARN_YOHAN_SOURCE_GOODS"):
		case 883337077:
		case -1274418755:
		case -1853979468:
		case -239888995:
		case 1163066566:
		case -955087020:
		case 1874391251:
		case 1633116913:
		case 668586600:
		case 15168061:
		case 590289134:
		case 99792878:
		case 1866258778:
		case -178394060:
		case 409592287:
		case 593836803:
		case 1973036520:
		case 2063456538:
		case -728008329:
		case 119239868:
			func_236(uParam2, -1135378931, 1445302971, joaat("CATEGORY_SERVICE_WITH_THRESHOLD"), hParam0, iParam1, num, 7);
			break;
	}

	return;
}

int func_236(var uParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, int iParam6, int iParam7) // Hash - 0x9D9428F4 ^0x9DF63005
{
	BOOL flag;
	BOOL flag2;
	int i;
	BOOL flag3;
	int transactionId;
	BOOL flag4;

	flag = false;

	if (!func_247())
		flag = true;

	flag2 = 1;

	if (!flag)
	{
		if (!NETSHOPPING::NET_GAMESERVER_IS_SESSION_VALID(func_140()) || NETSHOPPING::NET_GAMESERVER_IS_SESSION_REFRESH_PENDING())
		{
			Global_4536674 = 1;
			return 0;
		}
	
		if (Global_2695819)
		{
			if (hParam3 == joaat("CATEGORY_WEAPON_AMMO") || hParam3 == joaat("CATEGORY_MART"))
			{
				Global_4536675 = 1;
				return 0;
			}
		}
	}

	flag3 = false;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535172[i /*85*/].f_66.f_2 == 0)
			flag3 = true;
	}

	if (!flag3)
		return 0;

	*uParam0 = 15;
	transactionId = 2147483647;

	if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_BEGIN_SERVICE(&transactionId, hParam3, hParam4, hParam2, iParam5, iParam6))
	{
		if (flag || flag2 || NETSHOPPING::NET_GAMESERVER_CHECKOUT_START(transactionId))
		{
			*uParam0 = func_243(transactionId, iParam1, hParam4, hParam2, hParam3, iParam5, false, iParam6, iParam7, 1, true);
		
			if (flag2 && !flag)
			{
			}
		
			if (flag)
			{
				if (*uParam0 != -1)
				{
					Global_4535172[*uParam0 /*85*/].f_66.f_8 = 1;
					Global_4535172[*uParam0 /*85*/].f_66.f_12 = 1;
				}
			}
		
			Global_4536659 = 1;
			return 1;
		}
	}
	else
	{
		if (iParam7 & 2 != 0)
		{
			Global_4536673 = 1;
			Global_4536676 = hParam4;
			Global_4536678 = hParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
	
		if (iParam7 & 8 != 0)
		{
			Global_4536676 = hParam4;
			Global_4536678 = hParam3;
			Global_4536679 = 1;
			Global_4536677 = iParam5;
		}
	
		flag4 = false;
	
		if (flag4)
		{
			func_242(1, hParam4);
			Global_4536673 = 0;
		}
	
		if (iParam7 & 4 != 0)
			func_237(-1, hParam4, iParam6, iParam5, -1);
	}

	return 0;
}

void func_237(int iParam0, Hash hParam1, int iParam2, int iParam3, int iParam4) // Hash - 0x5DB723FD ^0x21C356CC
{
	switch (hParam1)
	{
		case joaat("SERVICE_SPEND_BETTING"):
			MISC::SET_BIT(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_126.f_71), 0);
			break;
	}

	if (iParam0 != -1)
		func_238(iParam0);

	return;
}

void func_238(int iParam0) // Hash - 0x1EF7AEAB ^0xF113E33C
{
	BOOL flag;

	flag = false;

	if (!func_247())
		flag = true;

	if (iParam0 != -1)
	{
		if (func_241(iParam0))
			if (!flag)
				NETSHOPPING::NET_GAMESERVER_BASKET_END();
		else if (!flag)
			NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4535172[iParam0 /*85*/].f_66);
	
		func_239(&Global_4535172[iParam0 /*85*/]);
	}

	return;
}

void func_239(var uParam0) // Hash - 0x5FAAFA5C ^0x2758B106
{
	uParam0->f_66 = 0;
	uParam0->f_66 = 2147483647;
	uParam0->f_66.f_1 = 0;
	uParam0->f_66.f_2 = 0;
	uParam0->f_66.f_3 = -1593119440;
	uParam0->f_66.f_4 = -2085313189;
	uParam0->f_66.f_5 = 0;
	uParam0->f_66.f_6 = joaat("CATEGORY_CLOTH");
	uParam0->f_66.f_7 = -1161833819;
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_13 = 0;
	uParam0->f_2 = 0;
	func_240(&(uParam0->f_14));
	func_240(&(uParam0->f_14.f_13));
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_26), "", 32);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_34), "", 24);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_40), "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_14.f_44), "", 32);
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_66.f_8 = 0;
	uParam0->f_66.f_9 = 0;
	uParam0->f_66.f_10 = 0;
	uParam0->f_66.f_11 = 0;
	uParam0->f_66.f_13 = 0;
	uParam0->f_66.f_12 = 0;
	uParam0->f_66.f_14 = 0;
	uParam0->f_66.f_15 = 0;
	uParam0->f_66.f_16 = 0;
	uParam0->f_66.f_18 = 0;
	return;
}

void func_240(var uParam0) // Hash - 0x9819A0D5 ^0x98F58DC2
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
	return;
}

BOOL func_241(int iParam0) // Hash - 0x117606EA ^0x642E4F1E
{
	if (iParam0 >= 0 && iParam0 < 15)
		return Global_4535172[iParam0 /*85*/].f_66.f_5 == 1;

	return false;
}

void func_242(int iParam0, Hash hParam1) // Hash - 0x8B1B3DA8 ^0x8B1B3DA8
{
	Global_2697013 = hParam1;
	Global_2697012 = iParam0;
	return;
}

int func_243(int iParam0, int iParam1, Hash hParam2, Hash hParam3, Hash hParam4, int iParam5, BOOL bParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10) // Hash - 0xD5ABF8B4 ^0xF440D67E
{
	int i;

	i = 0;

	for (i = 0; i < 15; i = i + 1)
	{
		if (Global_4535172[i /*85*/].f_66.f_2 == 0)
		{
			if (!func_247())
				iParam0 = i + 900;
		
			Global_4535172[i /*85*/].f_66.f_2 = 1;
			Global_4535172[i /*85*/].f_66.f_1 = iParam5;
			Global_4535172[i /*85*/].f_66.f_3 = iParam1;
			Global_4535172[i /*85*/].f_66.f_4 = hParam2;
			Global_4535172[i /*85*/].f_66.f_7 = hParam3;
			Global_4535172[i /*85*/].f_66.f_5 = 0;
			Global_4535172[i /*85*/].f_66 = iParam0;
			Global_4535172[i /*85*/].f_66.f_6 = hParam4;
			Global_4535172[i /*85*/].f_66.f_11 = iParam8;
			Global_4535172[i /*85*/].f_66.f_10 = iParam7;
			Global_4535172[i /*85*/].f_66.f_13 = iParam9;
			Global_4535172[i /*85*/].f_66.f_12 = 0;
			Global_4535172[i /*85*/].f_66.f_14 = MISC::GET_FRAME_COUNT();
			Global_4535172[i /*85*/].f_66.f_18 = 0;
			Global_4536659 = 0;
		
			if (bParam6)
				Global_4535172[i /*85*/].f_66.f_5 = 1;
		
			if (iParam1 == -1135378931 && bParam10)
				func_244(Global_4535172[i /*85*/], i);
		
			return i;
		}
	}

	return -1;
}

void func_244(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, int iParam85) // Hash - 0x8E828F1B ^0xE931A03B
{
	int eventData;
	int playerBits;

	if (iParam85 < 0)
		return;

	eventData.f_2 = 2147483647;
	eventData = -444617715;
	eventData.f_1 = PLAYER::PLAYER_ID();
	eventData.f_2 = { uParam0.f_66 };
	eventData.f_2.f_33 = iParam85;
	playerBits = func_246(eventData.f_1);

	if (Global_262145.f_24076 && !Global_262145.f_24077 && !Global_262145.f_24078)
		return;

	if (!playerBits == 0)
	{
		func_245();
		SCRIPT::TRIGGER_SCRIPT_EVENT(SCRIPT_EVENT_QUEUE_NETWORK, &eventData, 36, playerBits);
	}

	return;
}

void func_245() // Hash - 0xF91DC52E ^0x3BD51338
{
	SCRIPT::REQUEST_SCRIPT("AM_ARENA_SHP");
	return;
}

int func_246(int iParam0) // Hash - 0x8DB9A6C ^0x19CECEE
{
	var address;

	if (iParam0 != -1)
		MISC::SET_BIT(&address, iParam0);

	return address;
}

BOOL func_247() // Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

int func_248(int iParam0, int iParam1, int iParam2) // Hash - 0x24B6CAA3 ^0x24B6CAA3
{
	if (func_275(iParam0) == 3)
		return 0;

	if (func_275(iParam0) == 4)
		return 0;

	return func_249(func_275(iParam0), 0, iParam1, iParam2, false);
}

int func_249(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Hash - 0x66394909 ^0x7ECE9AC7
{
	float num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	func_274();

	if (iParam3 < 1)
		return 0;

	num = 1f;

	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					func_273(99, 1);
					func_272(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 1:
					func_272(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
					break;
			
				case 2:
					func_272(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
					break;
			}
		
			func_258(false);
		
			switch (iParam2)
			{
				case 127:
				case 129:
				case 125:
				case 126:
				case 128:
					if (func_256(5))
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
							func_272(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 1:
							func_272(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					
						case 2:
							func_272(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
							break;
					}
				
					if (func_256(1))
					{
						num = 0f;
						num2 = 1;
					}
					break;
			
				case 21:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 1:
							func_272(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					
						case 2:
							func_272(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
							break;
					}
					break;
			
				case 25:
					switch (iParam0)
					{
						case 0:
							func_272(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 1:
							func_272(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
							break;
					
						case 2:
							func_272(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
							func_272(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 1:
							func_272(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					
						case 2:
							func_272(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
							break;
					}
					break;
			
				default:
					switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME())
					{
						case joaat("CLOTHES_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 1:
									func_272(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							
								case 2:
									func_272(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
									break;
							}
							break;
					
						case joaat("HAIRDO_SHOP_SP"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 1:
									func_272(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							
								case 2:
									func_272(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
									break;
							}
						
							if (func_256(0))
							{
								num = 0f;
								num2 = 0;
							}
							break;
					
						case joaat("GUNCLUB_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 1:
									func_272(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							
								case 2:
									func_272(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
									break;
							}
							break;
					
						case joaat("CARMOD_SHOP"):
							switch (iParam0)
							{
								case 0:
									func_272(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 1:
									func_272(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							
								case 2:
									func_272(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
									break;
							}
						
							func_255(iParam3);
							break;
					}
					break;
			}
			break;
	
		case 1:
			switch (iParam0)
			{
				case 0:
					func_273(95, iParam3);
					break;
			
				case 1:
					func_273(97, iParam3);
					break;
			
				case 2:
					func_273(96, iParam3);
					break;
			}
		
			func_273(98, iParam3);
			break;
	}

	num3 = iParam0;
	iParam3 = SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
	num4 = 0;
	num5 = iParam3;

	if (num == 0f)
	{
		func_252(num2);
		return 1;
	}
	else if (num != 1f)
	{
		func_252(num2);
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
					func_272(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 1:
					func_272(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
					break;
			
				case 2:
					func_272(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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

	func_251(iParam0);

	if (Global_43257 == 15)
		func_250(false);

	return 1;
}

void func_250(BOOL bParam0) // Hash - 0xB232D28E ^0x40CAA0C6
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

void func_251(int iParam0) // Hash - 0xD2EB197 ^0x9FF73396
{
	int value;

	value = Global_60536[iParam0];

	switch (iParam0)
	{
		case 0:
			STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
			break;
	
		case 1:
			STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
			break;
	
		case 2:
			STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
			break;
	}

	return;
}

void func_252(int iParam0) // Hash - 0x3705FAD4 ^0x3705FAD4
{
	BOOL flag;
	var txdName;

	if (iParam0 == 8)
	{
		func_155(129, false, -1);
		return;
	}

	if (iParam0 == 9)
	{
		func_155(135, false, -1);
		return;
	}

	if (iParam0 == 10)
	{
		func_155(136, false, -1);
		return;
	}

	if (iParam0 == 11)
	{
		func_155(137, false, -1);
		return;
	}

	if (iParam0 == 12)
	{
		func_138(8272, 0, -1, true, false);
		return;
	}

	if (iParam0 == 13)
	{
		func_138(8273, 0, -1, true, false);
		return;
	}

	if (iParam0 == 14)
	{
		func_138(8274, 0, -1, true, false);
		return;
	}

	if (iParam0 == 15)
	{
		func_138(8275, 0, -1, true, false);
		return;
	}

	if (iParam0 == 16)
	{
		func_138(8276, 0, -1, true, false);
		return;
	}

	if (iParam0 == 17)
	{
		func_138(8277, 0, -1, true, false);
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
	else if (IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_254() /*5568*/].f_681.f_10, iParam0))
	{
		flag = true;
		MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
		MISC::CLEAR_BIT(&(Global_2359296[func_254() /*5568*/].f_681.f_10), iParam0);
	}

	if (flag)
	{
		TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
		HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(_("You have redeemed your promotion for ~a~"));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_253(iParam0));
		HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
	}

	return;
}

char* func_253(int iParam0) // Hash - 0xA17D549C ^0xCB5FD42F
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

int func_254() // Hash - 0xF9396AAC ^0xF9396AAC
{
	int num;

	num = 0;
	return num;
}

void func_255(int iParam0) // Hash - 0x35B495B7 ^0x35B495B7
{
	func_273(93, iParam0);
	func_273(29, iParam0);
	func_273(30, iParam0);
	return;
}

BOOL func_256(int iParam0) // Hash - 0xA882C352 ^0xA882C352
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
		return func_257(129, -1);

	if (iParam0 == 9)
		return func_257(135, -1);

	if (iParam0 == 10)
		return func_257(136, -1);

	if (iParam0 == 11)
		return func_257(137, -1);

	if (iParam0 == 12)
	{
		cloudTimeAsInt = NETWORK::GET_CLOUD_TIME_AS_INT();
		num = func_141(8272, -1, 0);
	
		if (num == 0 || cloudTimeAsInt >= num)
			return false;
	
		return true;
	}

	if (iParam0 == 13)
	{
		cloudTimeAsInt2 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num2 = func_141(8273, -1, 0);
	
		if (num2 == 0 || cloudTimeAsInt2 >= num2)
			return false;
	
		return true;
	}

	if (iParam0 == 14)
	{
		cloudTimeAsInt3 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num3 = func_141(8274, -1, 0);
	
		if (num3 == 0 || cloudTimeAsInt3 >= num3)
			return false;
	
		return true;
	}

	if (iParam0 == 15)
	{
		cloudTimeAsInt4 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num4 = func_141(8275, -1, 0);
	
		if (num4 == 0 || cloudTimeAsInt4 >= num4)
			return false;
	
		return true;
	}

	if (iParam0 == 16)
	{
		cloudTimeAsInt5 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num5 = func_141(8276, -1, 0);
	
		if (num5 == 0 || cloudTimeAsInt5 >= num5)
			return false;
	
		return true;
	}

	if (iParam0 == 17)
	{
		cloudTimeAsInt6 = NETWORK::GET_CLOUD_TIME_AS_INT();
		num6 = func_141(8277, -1, 0);
	
		if (num6 == 0 || cloudTimeAsInt6 >= num6)
			return false;
	
		return true;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);

	return IS_BIT_SET(Global_2359296[func_254() /*5568*/].f_681.f_10, iParam0);
}

BOOL func_257(int iParam0, int iParam1) // Hash - 0x6099A833 ^0x46750A9D
{
	if (iParam1 == -1)
		iParam1 = func_140();

	return STATS::GET_PACKED_STAT_BOOL_CODE(iParam0, iParam1);
}

int func_258(BOOL bParam0) // Hash - 0xDC114C70 ^0xC626A2DE
{
	var outValue;
	int value;
	int outValue2;

	value = 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27))
		return 0;

	if (STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	if (STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1))
		value = value + outValue;

	bParam0;
	outValue2 = 0;
	STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);

	if (value > 0 && outValue2 / 2000000 != value / 2000000)
	{
		STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
		func_154(27, value);
	}

	if (value < 200000000)
		return 0;

	func_259(27, 1);
	return 1;
}

int func_259(int iParam0, int iParam1) // Hash - 0x86FEA587 ^0x86FEA587
{
	if (iParam0 >= 78)
		return 0;

	return func_260(iParam0, iParam1);
}

int func_260(int iParam0, int iParam1) // Hash - 0x2EC23578 ^0x5A6CDDE0
{
	if (func_552(14) && !func_271(iParam0))
		return 0;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1 == 1)
		return 0;

	if (Global_32414 != 0 && !Global_78558)
		return 0;

	if (func_270(&Global_4542597))
	{
		if (func_268(&Global_4542597, iParam0))
			return 0;
	
		if (func_261(&Global_4542597, iParam0))
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

BOOL func_261(var uParam0, int iParam1) // Hash - 0x5631295D ^0x7E65A9A4
{
	int i;
	var unk;

	unk = 78;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return false;

	if (func_552(14) && !func_271(iParam1))
		return false;

	if (func_268(uParam0, iParam1))
		return false;

	if (func_267(uParam0) < 0f)
		func_266(uParam0, 0);

	func_264(&unk);
	i = 0;

	for (i = 0; i < *uParam0 - 1; i = i + 1)
	{
		unk[i + 1] = uParam0->[i];
	}

	func_262(&unk, iParam1);
	i = 0;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		uParam0->[i] = unk[i];
	}

	return true;
}

int func_262(var uParam0, int iParam1) // Hash - 0x80929C05 ^0xD2A2E174
{
	int i;

	if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1))
		return 0;

	if (func_552(14) && !func_271(iParam1))
		return 0;

	if (func_268(uParam0, iParam1))
		return 0;

	if (func_267(uParam0) < 0f)
		func_266(uParam0, 0);

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (func_263(uParam0, i))
		{
			uParam0->[i] = iParam1;
			return 1;
		}
	}

	return 0;
}

BOOL func_263(var uParam0, int iParam1) // Hash - 0xFE39C18F ^0xFE39C18F
{
	return uParam0->[iParam1] == 78;
}

void func_264(var uParam0) // Hash - 0x6E916534 ^0x6E916534
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		func_265(uParam0, i);
	}

	func_266(uParam0, Global_4542596 - 0.5f);
	return;
}

void func_265(var uParam0, int iParam1) // Hash - 0xE18ECB8F ^0xE18ECB8F
{
	uParam0->[iParam1] = 78;
	return;
}

void func_266(var uParam0, int iParam1) // Hash - 0x8B7064C5 ^0xE61DC398
{
	if (iParam1 == 0f)
		uParam0->f_80 = 0f;
	else
		uParam0->f_80 = iParam1;

	return;
}

float func_267(var uParam0) // Hash - 0xD73B9827 ^0xE571889D
{
	return uParam0->f_80;
}

BOOL func_268(var uParam0, int iParam1) // Hash - 0xD7E1A70C ^0xD7E1A70C
{
	return func_269(uParam0, iParam1) != -1;
}

int func_269(var uParam0, int iParam1) // Hash - 0xA778BD6E ^0xA778BD6E
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (uParam0->[i] == iParam1)
			return i;
	}

	return -1;
}

BOOL func_270(var uParam0) // Hash - 0x21364471 ^0xE4E379A4
{
	return uParam0->f_79 == 1;
}

BOOL func_271(int iParam0) // Hash - 0x5000025C ^0x5000025C
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

void func_272(Hash hParam0, int iParam1) // Hash - 0x1F80E88A ^0x1E13AAF3
{
	int outValue;

	STATS::STAT_GET_INT(hParam0, &outValue, -1);
	outValue = outValue + iParam1;
	STATS::STAT_SET_INT(hParam0, outValue, true);
	return;
}

void func_273(int iParam0, int iParam1) // Hash - 0xE9A65642 ^0xF9847A54
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

void func_274() // Hash - 0xFD5B61DC ^0x7C6336B1
{
	int outValue;

	if (NETWORK::NETWORK_IS_SIGNED_IN())
	{
		STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[0] == outValue)
			Global_60536[0] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[1] == outValue)
			Global_60536[1] = outValue;
	
		STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
	
		if (!Global_60536[2] == outValue)
			Global_60536[2] = outValue;
	}

	return;
}

int func_275(int iParam0) // Hash - 0x12DEE71A ^0xB4CACA6A
{
	return Global_2028[iParam0 /*29*/].f_17;
}

int func_276() // Hash - 0xEEFFDE19 ^0x6CCB121F
{
	if (func_551())
		return func_278(PLAYER::PLAYER_ID());

	return func_277(func_23());
}

int func_277(int iParam0) // Hash - 0x263E14E9 ^0x46FE135B
{
	int outValue;

	switch (iParam0)
	{
		case 0:
			STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case 1:
			STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		case 2:
			STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
			return outValue;
	
		default:
		
	}

	return 0;
}

int func_278(Player plParam0) // Hash - 0xB3F5DAA8 ^0xB3F5DAA8
{
	int num;

	num = func_279(plParam0);
	return num;
}

int func_279(Player plParam0) // Hash - 0x7998C8F7 ^0x50053313
{
	if (plParam0 > -1)
		if (plParam0 == PLAYER::PLAYER_ID())
			return MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1);
		else if (func_280(plParam0))
			return Global_1853910[plParam0 /*862*/].f_205.f_3;
		else
			return 0;

	return 0;
}

BOOL func_280(Player plParam0) // Hash - 0x5B7B4404 ^0xC4C44CB
{
	if (plParam0 == -1)
		return false;
	else
		return IS_BIT_SET(Global_2672505.f_1, plParam0);

	return true;
}

void func_281(BOOL bParam0) // Hash - 0x38EAC86F ^0x8274AB16
{
	if (AUDIO::GET_PLAYER_RADIO_STATION_INDEX() != 255)
	{
		AUDIO::SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(bParam0);
		AUDIO::SET_MOBILE_PHONE_RADIO_STATE(bParam0);
	}

	return;
}

void func_282() // Hash - 0xC30A8265 ^0x139DE662
{
	Global_23131.f_5 = 0;
	return;
}

void func_283(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xC6887A59 ^0xC6887A59
{
	int i;
	int num;

	Global_23270.f_6182 = iParam0;
	Global_23270.f_6317 = iParam2;

	if (Global_23270.f_6182 < Global_23270.f_6181)
	{
		Global_23270.f_6181 = Global_23270.f_6182;
	}
	else if (Global_23270.f_6172 && Global_23270.f_6182 > Global_23270.f_6183 || !Global_23270.f_6172 && Global_23270.f_6182 >= Global_23270.f_6181 + Global_23270.f_5668)
	{
		for (i = Global_23270.f_6181; i <= Global_23270.f_6182; i = i + 1)
		{
			if (i >= 0 && i < 127)
				if (Global_23270.f_5532[i] != 0)
					num = num + 1;
		}
	
		while (num > Global_23270.f_5668 && Global_23270.f_6181 < 128)
		{
			Global_23270.f_6181 = Global_23270.f_6181 + 1;
			num = 0;
		
			for (i = Global_23270.f_6181; i <= Global_23270.f_6182; i = i + 1)
			{
				if (i >= 0 && i < 127)
					if (Global_23270.f_5532[i] != 0)
						num = num + 1;
			}
		}
	}

	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;

	if (bParam1)
	{
		TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_5081), "", 24);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_21), "", 16);
	}

	return;
}

void func_284() // Hash - 0x2A171392 ^0x5B0160BF
{
	if (iLocal_70 == iLocal_71)
	{
		iLocal_297 = 3;
	}
	else
	{
		iLocal_298 = uLocal_289[iLocal_70];
		func_285();
	
		if (iLocal_298 == 0)
		{
			func_87("PROSTITUTES_BJ_SCENE");
			AUDIO::REQUEST_SCRIPT_AUDIO_BANK("PROSTITUTE_BLOWJOB", false, -1);
			iLocal_297 = 0;
		}
		else if (iLocal_298 == 1)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 1;
		}
		else if (iLocal_298 == 2)
		{
			func_87("PROSTITUTES_SEX_SCENE");
			iLocal_297 = 2;
		}
	}

	return;
}

void func_285() // Hash - 0xC6A739B3 ^0xC6A739B3
{
	switch (iLocal_298)
	{
		case 0:
			func_287();
			break;
	
		case 1:
		case 2:
			func_286();
			break;
	}

	return;
}

void func_286() // Hash - 0x55A64BCE ^0x55A64BCE
{
	iLocal_46 = iLocal_46 + 1;
	bLocal_47 = true;
	return;
}

void func_287() // Hash - 0x55A64BCE ^0x55A64BCE
{
	iLocal_45 = iLocal_45 + 1;
	bLocal_47 = true;
	return;
}

BOOL func_288() // Hash - 0xA8A381FE ^0xF1246643
{
	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		if (Global_4541029 > -1)
			if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
				return true;

	return false;
}

int func_289(BOOL bParam0, int iParam1, BOOL bParam2) // Hash - 0xE9530BE4 ^0x8687EDE0
{
	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
		return 0;

	if (HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE())
		return 0;

	if (bParam2)
		HUD::SET_MOUSE_CURSOR_THIS_FRAME();

	if (Global_4541029 == -6)
	{
		HUD::SET_MOUSE_CURSOR_STYLE(4);
	
		if (bParam0 && PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			return 1;
		}
		else
		{
			Global_4541029 = -1;
			return 0;
		}
	}

	if (Global_4541029 > -1 || Global_4541029 == -3 || Global_4541029 == -2 || HUD::IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS())
	{
		HUD::SET_MOUSE_CURSOR_STYLE(1);
		return 0;
	}

	if (Global_4541029 == -1 && bParam0)
	{
		if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_ACCEPT))
		{
			HUD::SET_MOUSE_CURSOR_STYLE(4);
			Global_4541029 = -6;
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

void func_290(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x6E7ED0C2 ^0x4BE3E0E
{
	float x;
	float y;
	float x2;
	float y2;
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	int num7;
	int num8;
	int num9;
	int num10;

	num3 = 0.034722f / 2f;
	num10 = -1;

	if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		Global_4541029 = -1;
		return;
	}

	PAD::SET_USE_ADJUSTED_MOUSE_COORDS(true);
	x = Global_23267;
	x2 = x + Global_23269;
	y2 = Global_23270.f_6173;
	y = Global_23270.f_6173 - ((float)Global_23270.f_6175 * 0.034722f);

	if (bParam2)
	{
		y2 = y2 + 0.034722f;
		y = y + 0.034722f;
	}

	if (Global_23270.f_6175 < 1)
		y = Global_23270.f_6173 - 0.034722f;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	num = x;
	num2 = y;
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x, y, &x, &y);
	GRAPHICS::GET_SCRIPT_GFX_ALIGN_POSITION(x2, y2, &x2, &y2);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_293();

	if (Global_4541029 == -6)
		return;

	Global_4541029 = -1;
	num4 = Global_4541023;
	num5 = Global_4541024;

	if (Global_23270.f_6176 > Global_23270.f_6175)
	{
		if (Global_4541023 >= x && Global_4541023 <= x2 && Global_4541024 >= y2 && Global_4541024 < y2 + num3)
		{
			Global_4541029 = -2;
		
			if (bParam3)
				func_292(false);
		
			return;
		}
	
		if (Global_4541023 >= x && Global_4541023 <= x2 && Global_4541024 >= y2 + num3 && Global_4541024 < y2 + 0.034722f)
		{
			Global_4541029 = -3;
		
			if (bParam3)
				func_292(false);
		
			return;
		}
	}

	if (num4 >= x && num4 <= x2 && num5 >= y && num5 <= y2)
	{
		num6 = num5 - y;
		num10 = SYSTEM::FLOOR(num6 / 0.034722f);
	
		if (Global_23270.f_6176 == -1)
		{
			Global_4541029 = 0;
			num10 = 0;
			return;
		}
	
		num8 = 148;
		num9 = num8 / Global_23270.f_6175;
		num7 = 32 + (num8 - (num9 * num10));
	
		if (bParam3)
		{
			if (!bParam1 || num10 != 0)
			{
				GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
				GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
				func_291(num, num2 + ((float)num10 * 0.034722f), Global_23269, 0.034722f - 0.0015f, 255, 255, 255, num7);
				GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
			}
		}
	
		Global_4541029 = Global_23270.f_8513[num10];
		return;
	}

	if (!bParam0)
	{
		if (num4 < x2)
		{
			Global_4541029 = -4;
			return;
		}
	
		if (num5 > 0.9f)
		{
			Global_4541029 = -5;
			return;
		}
	}
	else if (num4 < x2 && num5 < y2 + 0.25f)
	{
		Global_4541029 = -4;
		return;
	}

	Global_4541029 = -1;
	return;
}

void func_291(float fParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7) // Hash - 0x4539121 ^0xE88E6ABA
{
	GRAPHICS::DRAW_RECT(fParam0 + (iParam2 * 0.5f), fParam1 + (fParam3 * 0.5f), iParam2, fParam3, iParam4, iParam5, iParam6, iParam7, false);
	return;
}

void func_292(BOOL bParam0) // Hash - 0xD298BF7C ^0x3A4A9D9E
{
	float num;
	float num2;
	float num3;
	int num4;

	num3 = 0.034722f / 2f;

	if (bParam0)
		num4 = 48;
	else
		num4 = 210;

	num = Global_23267;
	num2 = Global_23270.f_6173;
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);

	if (Global_4541029 == -2)
		func_291(num, num2, Global_23269, num3, 255, 255, 255, num4);
	else if (Global_4541029 == -3)
		func_291(num, num2 + num3, Global_23269, num3, 255, 255, 255, num4);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_293() // Hash - 0xFDAF4DEA ^0xCA07F087
{
	Global_4541025 = Global_4541023;
	Global_4541026 = Global_4541024;
	Global_4541023 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
	Global_4541024 = PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
	Global_4541027 = Global_4541023 - Global_4541025;
	Global_4541028 = Global_4541024 - Global_4541026;
	return;
}

void func_294(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4) // Hash - 0xABB7A2E ^0x7162746A
{
	*uParam0 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
	*uParam1 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
	*uParam2 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
	*uParam3 = SYSTEM::FLOOR(PAD::GET_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);

	if (bParam4)
	{
		if ((float)*uParam0 == 0f && (float)*uParam1 == 0f)
		{
			*uParam0 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_X) * 127f);
			*uParam1 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_LEFT_AXIS_Y) * 127f);
		}
	
		if ((float)*uParam2 == 0f && (float)*uParam3 == 0f)
		{
			*uParam2 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_X) * 127f);
			*uParam3 = SYSTEM::FLOOR(PAD::GET_DISABLED_CONTROL_NORMAL(FRONTEND_CONTROL, INPUT_SCRIPT_RIGHT_AXIS_Y) * 127f);
		}
	}

	return;
}

void func_295(BOOL bParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, BOOL bParam7, int iParam8) // Hash - 0x5CD4D9BF ^0xD9788B4F
{
	int num;
	int r;
	int g;
	int b;
	int a;
	int i;
	int numberOfLinesForString;
	int j;
	int k;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int l;
	int num7;
	int num8;
	int num9;
	int num10;
	int num11;
	int num12;
	int num13;
	int num14;
	int num15;
	int num16;
	int num17;
	int num18;
	int num19;
	int num20;
	int num21;
	int num22;
	int num23;
	BOOL flag;
	BOOL flag2;
	float num24;
	float y;
	float width;
	float height;
	float textureResolution;
	BOOL flag3;
	float x;
	float screenWidthOfDisplayText;
	float num25;
	float num26;
	float num27;
	int red;
	int green;
	int blue;
	int alpha;
	float num28;
	BOOL flag4;
	BOOL flag5;
	BOOL flag6;
	BOOL flag7;
	float height2;
	float height3;
	float num29;
	float num30;
	var unk3;
	var unk4;
	float num31;
	var textureDict;
	var textureName;
	float num32;
	int num33;
	float num34;
	float num35;
	int m;
	int r2;
	int g2;
	int b2;
	int a2;
	int num36;
	var text;
	float value;
	float value2;
	float num37;
	float num38;
	float num39;

	if (!func_330(&num, false, iParam1))
		return;

	num == -1;

	if (!func_328(false, bParam6))
		return;

	GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
	height3 = 0f;

	if (Global_23270)
		if (func_326(29, true, true, &width, &height, bParam7))
			num29 = height / width;
		else
			Global_23270 = false;

	if (iParam5 == -1f)
		iParam5 = Global_23269;

	height3 = iParam5 * num29;

	if (MISC::GET_HASH_KEY(&(Global_23270.f_1)) == MISC::GET_HASH_KEY("HIDE"))
		num30 = Global_23268;
	else
		num30 = Global_23268 + height3 + 0.034722f + 0f;

	num31 = 1f;
	func_324(bParam7, &unk3, &unk4, &num31);

	if (bParam3)
	{
		if (Global_23270.f_5661 <= 1)
		{
			func_320(Global_23270.f_5661 + 1, _("Exit"), 0, true, 0, false, 0);
			Global_23270.f_6457 = 1;
		}
	}

	for (i = 0; i < 2; i = i + 1)
	{
		if (i == 1 && Global_23270.f_6171)
		{
			if (MISC::GET_HASH_KEY(&(Global_23270.f_1)) == MISC::GET_HASH_KEY("HIDE"))
			{
				num28 = Global_23268;
			}
			else
			{
				if (Global_23270)
				{
					TEXT_LABEL_ASSIGN_STRING(&textureDict, func_319(29), 64);
					TEXT_LABEL_ASSIGN_STRING(&textureName, func_316(29, true), 64);
				
					if (MISC::GET_HASH_KEY(&Global_23270.f_7488[29 /*16*/]) == joaat("CREW_LOGO"))
					{
						func_291(Global_23267, Global_23268, iParam5, height3, 0, 0, 0, 255);
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23267 + (iParam5 * 0.5f), Global_23268 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
					else
					{
						GRAPHICS::DRAW_SPRITE(&textureDict, &textureName, Global_23267 + (iParam5 * 0.5f), Global_23268 + (height3 * 0.5f), iParam5, height3, 0f, 255, 255, 255, 255, false, 0);
					}
				}
			
				if (Global_23270.f_8862)
				{
					r = Global_23270.f_8858;
					g = Global_23270.f_8859;
					b = Global_23270.f_8860;
					a = Global_23270.f_8861;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
			
				func_291(Global_23267, Global_23268 + height3, iParam5, 0.034722f, r, g, b, a);
				num28 = Global_23268 + height3 + 0.034722f + 0f;
			
				if (MISC::GET_HASH_KEY(&(Global_23270.f_1)) != 0)
				{
					func_315();
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_1));
					num7 = 0;
					num8 = 0;
					num9 = 0;
					num10 = 0;
				
					for (l = 0; l < Global_23270.f_74; l = l + 1)
					{
						if (Global_23270.f_5[l] == 2)
						{
							HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_10[num7]);
							num7 = num7 + 1;
						}
						else if (Global_23270.f_5[l] == 3)
						{
							HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_14[num8], Global_23270.f_18[num8]);
							num8 = num8 + 1;
						}
						else if (Global_23270.f_5[l] == 1)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23270.f_5[l] == 8)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_22[num9 /*6*/]);
							num9 = num9 + 1;
						}
						else if (Global_23270.f_5[l] == 5)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23270.f_5[l] == 6)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23270.f_5[l] == 7)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
						else if (Global_23270.f_5[l] == 9)
						{
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_41[num10 /*16*/]);
							num10 = num10 + 1;
						}
					}
				
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(Global_23267 + 0.00390625f, Global_23268 + height3 + 0.00416664f, 0);
				}
			
				if (Global_23270.f_6178)
				{
					func_315();
					func_313((Global_23267 + iParam5) - 0.00390625f - func_314(_("~1~ / ~1~"), Global_23270.f_6179, Global_23270.f_6180), Global_23268 + height3 + 0.00416664f, _("~1~ / ~1~"), Global_23270.f_6179, Global_23270.f_6180);
				}
				else if (Global_23270.f_6174 > Global_23270.f_5668)
				{
					if (Global_23270.f_6177 != 0)
					{
						func_315();
						func_313((Global_23267 + iParam5) - 0.00390625f - func_314(_("~1~ / ~1~"), Global_23270.f_6177, Global_23270.f_6176), Global_23268 + height3 + 0.00416664f, _("~1~ / ~1~"), Global_23270.f_6177, Global_23270.f_6176);
					}
				}
			}
		
			numberOfLinesForString = Global_23270.f_6181;
			num2 = 0;
			num32 = num28;
		
			if (Global_23270.f_8872)
			{
				r = Global_23270.f_8868;
				g = Global_23270.f_8869;
				b = Global_23270.f_8870;
				a = Global_23270.f_8871;
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
			}
		
			while (num2 < Global_23270.f_5668 && numberOfLinesForString <= Global_23270.f_5661)
			{
				if (numberOfLinesForString >= 0)
				{
					if (Global_23270.f_5928[numberOfLinesForString])
					{
						if (Global_23270.f_5799[numberOfLinesForString] && numberOfLinesForString != Global_23270.f_6181)
							num28 = num28 + 0.00277776f;
					
						height2 = 0.034722f;
					
						if (Global_23270.f_6188[numberOfLinesForString] != 0f)
							height2 = Global_23270.f_6188[numberOfLinesForString];
					
						num28 = num28 + height2;
						num2 = num2 + 1;
					}
				}
			
				numberOfLinesForString = numberOfLinesForString + 1;
			}
		
			GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23267 + (iParam5 * 0.5f), (num32 + ((num28 - num32) * 0.5f)) - 0.00138888f, iParam5, num28 - num32, 0f, 255, 255, 255, 255, false, 0);
		
			if (Global_23270.f_6174 > Global_23270.f_5668)
			{
				if (Global_23270.f_8877)
				{
					r = Global_23270.f_8873;
					g = Global_23270.f_8874;
					b = Global_23270.f_8875;
					a = Global_23270.f_8876;
				}
				else
				{
					r = 0;
					g = 0;
					b = 0;
					a = 204;
				}
			
				func_291(Global_23267, num28 + 0f, iParam5, 0.034722f, r, g, b, a);
				textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION("CommonMenu", "shop_arrows_upANDdown") };
				textureResolution = textureResolution * (0.5f / num31);
				textureResolution.f_1 = textureResolution.f_1 * (0.5f / num31);
			
				if (Global_23270.f_8890)
				{
					r = 0;
					g = 0;
					b = 0;
					a = 255;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "shop_arrows_upANDdown", Global_23267 + (iParam5 * 0.5f), num28 + 0f + (0.034722f * 0.5f), (textureResolution / 1280f) * num31, (textureResolution.f_1 / 720f) * num31, 0f, r, g, b, a, false, 0);
				num28 = num28 + 0f + 0.034722f;
			}
		
			if (MISC::GET_HASH_KEY(&(Global_23270.f_5081)) != 0 && Global_23270.f_5163 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23267 + 0.0046875f;
			
				if (Global_23270.f_5165 != 0)
				{
					func_326(Global_23270.f_5165, true, true, &width, &height, bParam7);
					x = (Global_23267 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5081));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23270.f_5159; l = l + 1)
				{
					if (Global_23270.f_5093[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23270.f_5093[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[num8], Global_23270.f_5106[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23270.f_5093[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23267, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23270.f_8882)
				{
					r = Global_23270.f_8878;
					g = Global_23270.f_8879;
					b = Global_23270.f_8880;
					a = Global_23270.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23267 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5081));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23270.f_5159; l = l + 1)
				{
					if (Global_23270.f_5093[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23270.f_5093[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[num8], Global_23270.f_5106[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23270.f_5093[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_23270.f_5165 != 0)
				{
					func_326(Global_23270.f_5165, true, true, &width, &height, bParam7);
					func_311(Global_23270.f_5165, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_5165), func_316(Global_23270.f_5165, true), Global_23267 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087)))
				{
					num28 = num28 + (0.00138888f * 6f);
					func_312(x);
					HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
					numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
					HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
					func_291(Global_23267, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
				
					if (Global_23270.f_8882)
					{
						r = Global_23270.f_8878;
						g = Global_23270.f_8879;
						b = Global_23270.f_8880;
						a = Global_23270.f_8881;
					}
					else
					{
						HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
					}
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23267 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
					func_312(x);
					HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
					HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
					num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
				}
			
				if (Global_23270.f_5163 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_23270.f_5164 > Global_23270.f_5163)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_5081), "", 24);
						Global_23270.f_5163 = -1;
					}
				}
			}
			else if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_23270.f_5087)))
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23267 + 0.0046875f;
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_23270.f_5087));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_23270.f_5159; l = l + 1)
				{
					if (Global_23270.f_5093[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_5098[num7]);
						num7 = num7 + 1;
					}
					else if (Global_23270.f_5093[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_5102[num8], Global_23270.f_5106[num8]);
						num8 = num8 + 1;
					}
					else if (Global_23270.f_5093[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
					else if (Global_23270.f_5093[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_23270.f_5110[num9 /*16*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23267, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23270.f_8882)
				{
					r = Global_23270.f_8878;
					g = Global_23270.f_8879;
					b = Global_23270.f_8880;
					a = Global_23270.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23267 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_23270.f_5087));
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4540953.f_21)) != 0 && Global_4540953.f_65 != -1)
			{
				num28 = num28 + (0.00277776f * 2f);
				x = Global_23267 + 0.0046875f;
			
				if (Global_4540953.f_67 != 0)
				{
					func_326(Global_4540953.f_67, true, true, &width, &height, bParam7);
					x = (Global_23267 + width + (0.00078125f * 4f)) - (0.00078125f * 1f);
				}
			
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(&(Global_4540953.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4540953.f_61; l = l + 1)
				{
					if (Global_4540953.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4540953.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[num8], Global_4540953.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4540953.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				numberOfLinesForString = HUD::END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(x, num28 + 0.00277776f);
				HUD::GET_HUD_COLOUR(HUD_COLOUR_BLACK, &r, &g, &b, &a);
				func_291(Global_23267, num28 - 0.00277776f, iParam5, 0.00277776f, r, g, b, a);
			
				if (Global_23270.f_8882)
				{
					r = Global_23270.f_8878;
					g = Global_23270.f_8879;
					b = Global_23270.f_8880;
					a = Global_23270.f_8881;
				}
				else
				{
					HUD::GET_HUD_COLOUR(HUD_COLOUR_INGAME_BG, &r, &g, &b, &a);
				}
			
				GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Bgd", Global_23267 + (iParam5 * 0.5f), (num28 + (((HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1)) * 0.5f)) - 0.00138888f, iParam5, (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1), 0f, r, g, b, a, false, 0);
				func_312(x);
				HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&(Global_4540953.f_21));
				num7 = 0;
				num8 = 0;
				num9 = 0;
			
				for (l = 0; l < Global_4540953.f_61; l = l + 1)
				{
					if (Global_4540953.f_25[l] == 2)
					{
						HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4540953.f_30[num7]);
						num7 = num7 + 1;
					}
					else if (Global_4540953.f_25[l] == 3)
					{
						HUD::ADD_TEXT_COMPONENT_FLOAT(Global_4540953.f_34[num8], Global_4540953.f_38[num8]);
						num8 = num8 + 1;
					}
					else if (Global_4540953.f_25[l] == 1)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 8)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 5)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 6)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 7)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
					else if (Global_4540953.f_25[l] == 9)
					{
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_4540953.f_42[num9 /*6*/]);
						num9 = num9 + 1;
					}
				}
			
				HUD::END_TEXT_COMMAND_DISPLAY_TEXT(x, num28 + 0.00277776f, 0);
			
				if (Global_4540953.f_67 != 0)
				{
					func_326(Global_4540953.f_67, true, true, &width, &height, bParam7);
					func_311(Global_4540953.f_67, true, &red, &green, &blue, &alpha);
					GRAPHICS::DRAW_SPRITE(func_319(Global_4540953.f_67), func_316(Global_4540953.f_67, true), Global_23267 + (width * 0.5f) + (0.00078125f * 2f), (num28 + (height * 0.5f)) - (0.00138888f * 4f), width, height, 0f, red, green, blue, alpha, false, 0);
				}
			
				num28 = num28 + (HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0) * (float)numberOfLinesForString) + (0.00138888f * 13f) + (0.00138888f * 5f * (float)numberOfLinesForString - 1);
			
				if (Global_4540953.f_65 > 0)
				{
					if (MISC::GET_GAME_TIMER() - Global_4540953.f_66 > Global_4540953.f_65)
					{
						TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_21), "", 16);
						Global_4540953.f_65 = -1;
					}
				}
			}
		
			func_304(unk3, iParam1, iParam8, false, false, false, bParam4, 1, false);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 84);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(-0.05f, -0.05f, 0f, 0f);
		}
	
		if (i == 1 || !Global_23270.f_6171)
		{
			num11 = 0;
			num15 = 0;
			num12 = 0;
			num13 = 0;
			num14 = 0;
			num2 = 0;
			num3 = 0;
			num4 = 0;
			num5 = 0;
			num6 = 0;
			num33 = Global_23270.f_5661;
		
			if (Global_23270.f_6172)
				num33 = Global_23270.f_6175 - 1;
		
			num34 = 0f;
			num35 = 0f;
		
			for (j = 0; j <= num33; j = j + 1)
			{
				height2 = 0.034722f;
			
				if (Global_23270.f_6188[numberOfLinesForString] != 0f)
					height2 = Global_23270.f_6188[numberOfLinesForString];
			
				if (Global_23270.f_6172)
					numberOfLinesForString = Global_23270.f_8513[j];
				else
					numberOfLinesForString = j;
			
				num5 = num6;
				flag2 = false;
			
				if (numberOfLinesForString >= Global_23270.f_6181 && num2 < Global_23270.f_5668)
				{
					flag2 = true;
				
					if (Global_23270.f_6182 == numberOfLinesForString)
						num35 = num34;
				
					if (Global_23270.f_5799[numberOfLinesForString])
						num5 = num5 + 1;
				
					y = num30 + num34 + (0.00277776f * (float)num5) + 0.00277776f;
				}
			
				Global_23270.f_6322[numberOfLinesForString] = y;
				num24 = Global_23267 + 0.0046875f;
				flag3 = false;
				flag = Global_23270.f_6182 == numberOfLinesForString;
			
				if (flag && i == 1 && flag2)
				{
					r2 = 255;
					g2 = 255;
					b2 = 255;
					a2 = 255;
				
					if (Global_23270.f_8884)
						HUD::GET_HUD_COLOUR(Global_23270.f_8883, &r2, &g2, &b2, &a2);
					else
						HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r2, &g2, &b2, &a2);
				
					GRAPHICS::DRAW_SPRITE("CommonMenu", "Gradient_Nav", Global_23267 + (iParam5 * 0.5f), num30 + num35 + (0.00277776f * (float)num5) + (height2 * 0.5f), iParam5, height2, 0f, r2, g2, b2, a2, false, 0);
					Global_23270.f_6320 = y;
				}
			
				for (k = 0; k < Global_23270.f_5669; k = k + 1)
				{
					if (IS_BIT_SET(Global_23270.f_5532[numberOfLinesForString], k) || Global_23270.f_5499[k] == 5)
					{
						if (Global_23270.f_6172)
						{
							num11 = Global_23270.f_8529[(num2 * Global_23270.f_5669) + k];
							num12 = Global_23270.f_8570[(num2 * Global_23270.f_5669) + k];
							num13 = Global_23270.f_8611[(num2 * Global_23270.f_5669) + k];
							num14 = Global_23270.f_8652[(num2 * Global_23270.f_5669) + k];
							num15 = Global_23270.f_8693[(num2 * Global_23270.f_5669) + k];
						}
						else
						{
							Global_23270.f_8529[(num2 * Global_23270.f_5669) + k] = num11;
							Global_23270.f_8570[(num2 * Global_23270.f_5669) + k] = num12;
							Global_23270.f_8611[(num2 * Global_23270.f_5669) + k] = num13;
							Global_23270.f_8652[(num2 * Global_23270.f_5669) + k] = num14;
							Global_23270.f_8693[(num2 * Global_23270.f_5669) + k] = num15;
						}
					
						num36 = 0;
						flag7 = false;
					
						if (Global_23270.f_6454[0] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23270.f_6451[0])
							{
								flag7 = true;
								num36 = 0;
							}
						}
					
						if (Global_23270.f_6454[1] != -1)
						{
							if ((numberOfLinesForString * 5) + k == Global_23270.f_6451[1])
							{
								flag7 = true;
								num36 = 1;
							}
						}
					
						if (Global_23270.f_5505[k] != -1f)
							num24 = Global_23267 + 0.0046875f + Global_23270.f_5505[k];
					
						if (k < 4 && Global_23270.f_5505[k + 1] != -1f && num24 < Global_23270.f_5505[k + 1])
							num27 = Global_23270.f_5505[k + 1] - num24;
						else
							num27 = (Global_23267 + Global_23269) - 0.0046875f - num24;
					
						if (Global_23270.f_5518[k] && Global_23270.f_6317 && flag)
							flag6 = true;
						else
							flag6 = false;
					
						switch (Global_23270.f_5499[k])
						{
							case 0:
								break;
						
							case 1:
								num16 = num11;
							
								if (flag2)
								{
									if (!Global_23270.f_6172)
									{
										screenWidthOfDisplayText = 0f;
										num25 = 0f;
										num17 = 0;
										num18 = 0;
										num19 = 0;
										num20 = 0;
										num21 = 0;
									
										if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
										{
											flag4 = false;
											flag5 = false;
										
											for (l = 0; l < 4; l = l + 1)
											{
												if (Global_23270.f_2387[num16 /*5*/][l] == 5 || Global_23270.f_2387[num16 /*5*/][l] == 8)
													flag5 = true;
												else if (Global_23270.f_2387[num16 /*5*/][l] == 9)
													flag4 = true;
											}
										
											if (Global_23270.f_2130[num16])
												flag5 = true;
										
											func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, num36, flag5, flag4);
											HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23270.f_79[num16 /*6*/]);
										}
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23270.f_2387[num16 /*5*/][l] == 1)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 8)
											{
												num17 = num17 + 1;
											
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[num16 + num17 /*6*/]);
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 5)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 6)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2695070[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 7)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 9)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
											
												num21 = num21 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 2)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[num12 + num18]);
											
												num18 = num18 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 3)
											{
												if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
													HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[num13 + num19], Global_23270.f_4695[num13 + num19]);
											
												num19 = num19 + 1;
											}
											else if (Global_23270.f_2387[num16 /*5*/][l] == 4)
											{
												num20 = num20 + 1;
											}
										}
									
										if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0)
											screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
									
										if (num20 > 0)
										{
											for (l = 0; l < num20; l = l + 1)
											{
												if (func_326(Global_23270.f_4824[num14 + l], flag, false, &width, &height, bParam7))
												{
													num25 = num25 + width;
												
													if (l > 0)
														num25 = num25 - (0.00078125f * 4f);
												
													if (Global_23270.f_4824[num14 + l] == 2 || Global_23270.f_4824[num14 + l] == 52 || Global_23270.f_4824[num14 + l] == 62)
														num25 = num25 - (0.00078125f * 5f);
												}
											}
										}
									
										x = 0f;
									
										if (Global_23270.f_5526[k] == 2)
											x = x + (num27 - (screenWidthOfDisplayText + num25)) + (0.00078125f * 1f);
										else if (Global_23270.f_5526[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - ((screenWidthOfDisplayText + num25) * 0.5f));
									
										Global_23270.f_8734[(num2 * Global_23270.f_5669) + k] = x;
										Global_23270.f_8775[(num2 * Global_23270.f_5669) + k] = screenWidthOfDisplayText;
										Global_23270.f_8816[(num2 * Global_23270.f_5669) + k] = num25;
									
										if (Global_23270.f_5526[k] == 2)
										{
											for (m = k - 1; m >= 0; m = m + -1)
											{
												if (Global_23270.f_5526[m] == 2)
													Global_23270.f_8734[(num2 * Global_23270.f_5669) + m] = Global_23270.f_8734[(num2 * Global_23270.f_5669) + m] - Global_23270.f_5511[k];
											}
										}
									}
									else
									{
										x = Global_23270.f_8734[(num2 * Global_23270.f_5669) + k];
										screenWidthOfDisplayText = Global_23270.f_8775[(num2 * Global_23270.f_5669) + k];
										num25 = Global_23270.f_8816[(num2 * Global_23270.f_5669) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, bParam7))
										{
											if (Global_23270.f_5526[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									num17 = 0;
									num18 = 0;
									num19 = 0;
									num20 = 0;
									num21 = 0;
									num23 = 0;
								
									if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										flag4 = false;
										flag5 = false;
									
										for (l = 0; l < 4; l = l + 1)
										{
											if (Global_23270.f_2387[num16 /*5*/][l] == 5 || Global_23270.f_2387[num16 /*5*/][l] == 8)
												flag5 = true;
											else if (Global_23270.f_2387[num16 /*5*/][l] == 9)
												flag4 = true;
										}
									
										if (Global_23270.f_2130[num16])
											flag5 = true;
									
										func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, flag5, flag4);
									
										if (Global_23270.f_8888 && Global_23270.f_8889 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&Global_23270.f_79[num16 /*6*/]);
									}
								
									for (l = 0; l < 4; l = l + 1)
									{
										if (Global_23270.f_2387[num16 /*5*/][l] == 1)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[num16 + num17 /*6*/]);
										
											num23 = 1;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 8)
										{
											num17 = num17 + 1;
										
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[num16 + num17 /*6*/]);
										
											num23 = 8;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 5)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 5;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 6)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2695070[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 6;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 7)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 7;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 9)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[num15 + num21 /*16*/]);
										
											num21 = num21 + 1;
											num23 = 9;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 2)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[num12 + num18]);
										
											num18 = num18 + 1;
											num23 = 2;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 3)
										{
											if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
												HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[num13 + num19], Global_23270.f_4695[num13 + num19]);
										
											num19 = num19 + 1;
											num23 = 3;
										}
										else if (Global_23270.f_2387[num16 /*5*/][l] == 4)
										{
											if (Global_23270.f_4824[num14 + num20] == 2 || Global_23270.f_4824[num14 + num20] == 52 || Global_23270.f_4824[num14 + num20] == 62)
											{
												if (func_326(Global_23270.f_4824[num14 + num20], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (func_326(Global_23270.f_4824[num14 + num20], flag, true, &width, &height, bParam7))
													{
														func_311(Global_23270.f_4824[num14 + num20], flag, &red, &green, &blue, &alpha);
													
														if (i == 1)
															if (Global_23270.f_5526[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14 + num20]), func_316(Global_23270.f_4824[num14 + num20], flag), ((num24 + x) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14 + num20]), func_316(Global_23270.f_4824[num14 + num20], flag), (num24 + x) - (0.00078125f * 8f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
													
														x = x + (0.00078125f * 3f);
													}
												}
											}
										
											num20 = num20 + 1;
											num23 = 4;
										}
									}
								
									if (MISC::GET_HASH_KEY(&Global_23270.f_79[num16 /*6*/]) != 0 && i == 1)
									{
										if (num23 == 4 && Global_23270.f_5526[k] == 2)
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x + (0.00078125f * 7f), y, 0);
										}
										else
										{
											HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 + x, y, 0);
										
											if (func_300() && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("FM_MISSION_CREATOR")) > 0)
											{
												if (k == 0)
												{
													if (Global_23270.f_2130[num16])
														flag5 = true;
												
													func_302(false, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, flag5, flag4);
													TEXT_LABEL_ASSIGN_STRING(&text, "TEST_LABEL", 16);
													value = 0f;
													value2 = 55f;
													num37 = 0.0185f;
													num38 = 0.004f;
													num39 = 0.02f;
													HUD::SET_TEXT_SCALE(0f, 0.35f * 0.7f);
													HUD::SET_TEXT_COLOUR(255, 255, 255, 150);
													GRAPHICS::DRAW_RECT(num24 - (num39 * 0.6f), y + (num37 * 0.75f), 0.0175f, 0.035f, SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value), SYSTEM::FLOOR(value2), false);
													HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(&text);
													HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_6181 + num22);
													HUD::END_TEXT_COMMAND_DISPLAY_TEXT(num24 - num39, y + num38, 0);
													num22 = num22 + 1;
												}
											}
										}
									}
								
									if (num20 > 0)
									{
										x = x + (6f * 0.00078125f);
									
										for (l = 0; l < num20; l = l + 1)
										{
											if (Global_23270.f_4824[num14 + l] != 2 && Global_23270.f_4824[num14 + l] != 52 && Global_23270.f_4824[num14 + l] != 62)
											{
												if (func_326(Global_23270.f_4824[num14 + l], flag, false, &width, &height, bParam7))
												{
													x = x + (width * 0.5f);
												
													if (i == 1)
													{
														if (func_326(Global_23270.f_4824[num14 + l], flag, true, &width, &height, bParam7))
														{
															func_311(Global_23270.f_4824[num14 + l], flag, &red, &green, &blue, &alpha);
														
															if (Global_23270.f_4824[num14 + l] == 30)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14 + l]), func_316(Global_23270.f_4824[num14 + l], flag), Global_23267 + (width * 0.5f), (y + 0.00277776f + (height * 0.5f)) - (0.00078125f * 11f), width, height, 0f, red, green, blue, alpha, false, 0);
															else if (Global_23270.f_5526[k] == 2)
																GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14 + l]), func_316(Global_23270.f_4824[num14 + l], flag), ((num24 + x + screenWidthOfDisplayText) - (0.00078125f * 8f)) + (0.00078125f * 4f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
															else
																GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14 + l]), func_316(Global_23270.f_4824[num14 + l], flag), (num24 + x + screenWidthOfDisplayText) - (0.00078125f * 12f), (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
														}
													}
												
													x = x + (12f * 0.00078125f);
												}
											}
										}
									}
								}
							
								flag3 = true;
								num11 = num11 + 1;
							
								for (l = 0; l < 4; l = l + 1)
								{
									if (Global_23270.f_2387[num16 /*5*/][l] == 1)
										num11 = num11 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 8)
										num11 = num11 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 2)
										num12 = num12 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 3)
										num13 = num13 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 4)
										num14 = num14 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 5)
										num15 = num15 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 6)
										num15 = num15 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 7)
										num15 = num15 + 1;
									else if (Global_23270.f_2387[num16 /*5*/][l] == 9)
										num15 = num15 + 1;
								}
								break;
						
							case 2:
								if (flag2)
								{
									if (!Global_23270.f_6172)
									{
										func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23270.f_8888 && Global_23270.f_8889 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(_("~1~"));
										HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[num12]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23270.f_5526[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23270.f_5526[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23270.f_8734[(num2 * Global_23270.f_5669) + k] = x;
										Global_23270.f_8775[(num2 * Global_23270.f_5669) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23270.f_8734[(num2 * Global_23270.f_5669) + k];
										screenWidthOfDisplayText = Global_23270.f_8775[(num2 * Global_23270.f_5669) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, bParam7))
										{
											if (Global_23270.f_5526[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									if (i == 1)
									{
										func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, false, false);
										func_299(num24 + x, y, _("~1~"), Global_23270.f_4309[num12], 0);
									}
								}
							
								flag3 = true;
								num12 = num12 + 1;
								break;
						
							case 3:
								if (flag2)
								{
									if (!Global_23270.f_6172)
									{
										func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, false, false);
									
										if (Global_23270.f_8888 && Global_23270.f_8889 == numberOfLinesForString)
											func_301(flag);
									
										HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(_("~1~"));
										HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[num13], Global_23270.f_4695[num13]);
										screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
										x = 0f;
									
										if (Global_23270.f_5526[k] == 2)
											x = x + (num27 - screenWidthOfDisplayText) + (0.00078125f * 1f);
										else if (Global_23270.f_5526[k] == 0)
											x = x + (((num27 - num24) * 0.5f) - (screenWidthOfDisplayText * 0.5f));
									
										Global_23270.f_8734[(num2 * Global_23270.f_5669) + k] = x;
										Global_23270.f_8775[(num2 * Global_23270.f_5669) + k] = screenWidthOfDisplayText;
									}
									else
									{
										x = Global_23270.f_8734[(num2 * Global_23270.f_5669) + k];
										screenWidthOfDisplayText = Global_23270.f_8775[(num2 * Global_23270.f_5669) + k];
									}
								
									if (flag6)
									{
										if (func_326(26, true, false, &width, &height, false))
										{
											if (Global_23270.f_5526[k] == 2)
												x = x - (width * 2f);
										
											num26 = width * 0.5f;
										
											if (func_326(26, true, true, &width, &height, bParam7))
											{
												func_311(26, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									
										if (func_326(27, true, false, &width, &height, bParam7))
										{
											x = x + width;
											num26 = width * 0.5f;
										
											if (func_326(27, true, true, &width, &height, bParam7))
											{
												func_311(27, true, &red, &green, &blue, &alpha);
											
												if (i == 1)
													GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								
									func_302(flag, Global_23270.f_1616[num16], Global_23270.f_1873[num16], flag7, 0, false, false);
									func_298(num24 + x, y, _("~1~"), Global_23270.f_4566[num13], Global_23270.f_4695[num13]);
								}
							
								flag3 = true;
								num13 = num13 + 1;
								break;
						
							case 4:
								if (flag2)
								{
									if (func_326(Global_23270.f_4824[num14], flag, false, &width, &height, bParam7))
									{
										if (!Global_23270.f_6172)
										{
											num25 = width;
											x = 0f;
										
											if (Global_23270.f_5526[k] == 2)
												x = x + (num27 - num25) + (0.00078125f * 1f);
											else if (Global_23270.f_5526[k] == 0)
												x = x + (((num27 - num24) * 0.5f) - (num25 * 0.5f));
										
											Global_23270.f_8734[(num2 * Global_23270.f_5669) + k] = x;
											Global_23270.f_8816[(num2 * Global_23270.f_5669) + k] = num25;
										}
										else
										{
											x = Global_23270.f_8734[(num2 * Global_23270.f_5669) + k];
											num25 = Global_23270.f_8816[(num2 * Global_23270.f_5669) + k];
										}
									
										if (flag6)
										{
											if (func_326(26, true, false, &width, &height, bParam7))
											{
												if (Global_23270.f_5526[k] == 2)
													x = x - (width * 2f);
											
												num26 = width * 0.5f;
											
												if (func_326(26, true, true, &width, &height, bParam7))
												{
													func_311(26, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_319(26), func_316(26, true), num24 + x + num26, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										
											if (func_326(27, true, false, &width, &height, bParam7))
											{
												x = x + width;
												num26 = width * 0.5f;
											
												if (func_326(27, true, true, &width, &height, bParam7))
												{
													func_311(27, true, &red, &green, &blue, &alpha);
												
													if (i == 1)
														GRAPHICS::DRAW_SPRITE(func_319(27), func_316(27, true), num24 + x + num26 + screenWidthOfDisplayText + num25, (y - 0.00277776f) + (height2 * 0.5f), width, height, 0f, red, green, blue, alpha, false, 0);
												}
											}
										}
									
										if (i == 1)
										{
											if (func_326(Global_23270.f_4824[num14], flag, true, &width, &height, bParam7))
											{
												func_311(Global_23270.f_4824[num14], flag, &red, &green, &blue, &alpha);
												GRAPHICS::DRAW_SPRITE(func_319(Global_23270.f_4824[num14]), func_316(Global_23270.f_4824[num14], flag), num24 + x + (width * 0.5f), (y - 0.00277776f) + (height2 * 0.5f), width * func_297(Global_23270.f_4824[num14]), height * func_297(Global_23270.f_4824[num14]), 0f, red, green, blue, alpha, false, 0);
											}
										}
									}
								}
							
								flag3 = true;
								num14 = num14 + 1;
								break;
						
							case 5:
								flag3 = true;
								break;
						}
					
						if (Global_23270.f_5499[k] == 5)
						{
							if (Global_23270.f_5511[k] > 0.05f)
								num24 = num24 + Global_23270.f_5511[k];
							else
								num24 = num24 + 0.05f;
						}
						else
						{
							num24 = num24 + Global_23270.f_5511[k];
						
							if (Global_23270.f_5518[k])
								if (func_326(26, true, true, &width, &height, bParam7))
									num24 = num24 - width;
						}
					}
					else
					{
						num24 = num24 + Global_23270.f_5511[k];
					}
				}
			
				if (flag3)
				{
					if (flag2)
					{
						Global_23270.f_8513[num2] = numberOfLinesForString;
						Global_23270.f_6183 = numberOfLinesForString;
						num2 = num2 + 1;
					
						if (Global_23270.f_5799[numberOfLinesForString])
							num6 = num6 + 1;
					
						if (Global_23270.f_6188[numberOfLinesForString] != 0f)
							num34 = num34 + Global_23270.f_6188[numberOfLinesForString];
						else
							num34 = num34 + 0.034722f;
					}
				
					if (!Global_23270.f_6171)
					{
						Global_23270.f_5928[numberOfLinesForString] = true;
					
						if (Global_23270.f_5670[numberOfLinesForString])
						{
							if (flag)
								Global_23270.f_6177 = 0;
						}
						else
						{
							num4 = num4 + 1;
						
							if (flag)
								Global_23270.f_6177 = num4;
						}
					
						num3 = num3 + 1;
					}
				}
			}
		
			if (!Global_23270.f_6171)
			{
				Global_23270.f_6173 = num30 + num34 + (0.00277776f * (float)num5);
				Global_23270.f_6176 = num4;
				Global_23270.f_6174 = num3;
				Global_23270.f_6171 = 1;
			}
		}
	
		if (!Global_23270.f_6172)
		{
			Global_23270.f_6175 = num2;
			Global_23270.f_6172 = 1;
		}
	}

	Global_23270.f_6319 = num28;
	Global_23270.f_6321 = MISC::GET_GAME_TIMER();
	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(Global_23270.f_6319);

	if (!Global_23270.f_8857)
		func_213(0);

	Global_23270.f_8857 = 0;

	if (bParam2)
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_HELP_TEXT);

	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_STREET_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);

	if (bParam0)
		func_296(1);

	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	return;
}

void func_296(int iParam0) // Hash - 0xE47D2A15 ^0xE47D2A15
{
	Global_1655472.f_1163 = iParam0;
	return;
}

float func_297(int iParam0) // Hash - 0x61246D49 ^0x61246D49
{
	switch (iParam0)
	{
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 39:
		case 40:
		case 38:
		case 54:
		case 45:
		case 46:
		case 47:
			return 0.85f;
	}

	return 1f;
}

void func_298(float fParam0, float fParam1, char* sParam2, float fParam3, int iParam4) // Hash - 0x69E27AC3 ^0x1F999E63
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_FLOAT(fParam3, iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

void func_299(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Hash - 0x51E04EF ^0x8FDB7829
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
	return;
}

BOOL func_300() // Hash - 0x11DC3931 ^0x820FC5
{
	return DLC::IS_DLC_PRESENT(-1762644250);
}

void func_301(BOOL bParam0) // Hash - 0xE7D01AEE ^0x5FC67C22
{
	int r;
	int g;
	int b;
	var a;

	if (bParam0)
		HUD::GET_HUD_COLOUR(Global_23270.f_8885[0], &r, &g, &b, &a);
	else
		HUD::GET_HUD_COLOUR(Global_23270.f_8885[1], &r, &g, &b, &a);

	HUD::SET_TEXT_COLOUR(r, g, b, 255);
	return;
}

void func_302(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x4F37228D ^0x4F37228D
{
	int r;
	int g;
	int b;
	int a;

	if (bParam2)
	{
		if (bParam3)
		{
			func_303(Global_23270.f_6454[iParam4], &r, &g, &b);
		
			if (r < 20 && g < 20 && b < 20)
			{
				if (bParam0 == false)
					HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			}
			else if (r > 230 && g > 230 && b > 230)
			{
				if (bParam0)
				{
					r = 0;
					g = 0;
					b = 0;
				}
			}
		
			HUD::SET_TEXT_COLOUR(r, g, b, 255);
		}
		else if (bParam1)
		{
			if (bParam0)
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOWDARK, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
			}
			else
			{
				HUD::GET_HUD_COLOUR(HUD_COLOUR_YELLOW, &r, &g, &b, &a);
				HUD::SET_TEXT_COLOUR(r, g, b, 255);
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
			HUD::SET_TEXT_COLOUR(0, 0, 0, SYSTEM::FLOOR(255f * 0.8f));
		}
		else
		{
			HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
			HUD::SET_TEXT_COLOUR(r, g, b, a);
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

	HUD::SET_TEXT_WRAP(0f, 1f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_303(int iParam0, var uParam1, var uParam2, var uParam3) // Hash - 0xBC32E287 ^0xBC32E287
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

	return;
}

void func_304(var uParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Hash - 0x27A51DEF ^0xFA033CDB
{
	int num;
	int i;
	int j;
	int timestamp;
	int timestamp2;

	if (!func_330(&num, false, iParam1))
		return;

	uParam0 = uParam0;

	if (bParam3 && !func_328(bParam4, bParam8))
		return;

	if (func_309())
		return;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return;

	if (iParam7 == 0)
		if (func_307(PLAYER::PLAYER_ID(), 0))
			return;

	if (MISC::IS_PC_VERSION())
		if (MISC::UPDATE_ONSCREEN_KEYBOARD() == 0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
			return;

	if (Global_23270.f_5166 != 0)
	{
		if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		{
			for (i = 0; i < Global_23270.f_5166; i = i + 1)
			{
				if (Global_23270.f_5465[i] != 363)
					TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[i /*16*/], PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23270.f_5465[i], true), 64);
				else if (Global_23270.f_5480[i] != 32)
					TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[i /*16*/], PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, Global_23270.f_5480[i], true), 64);
			}
		
			Global_23270.f_5167 = 0;
		}
	
		if (!Global_23270.f_5167)
		{
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "CLEAR_ALL");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "SET_MAX_WIDTH");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(1f - (Global_23270.f_5524 / 100f));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		
			if (MISC::IS_PC_VERSION())
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "TOGGLE_MOUSE_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			for (i = 0; i < Global_23270.f_5166; i = i + 1)
			{
				if (MISC::GET_HASH_KEY(&Global_23270.f_5393[i /*4*/]) != MISC::GET_HASH_KEY("PREV"))
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					func_306(&Global_23270.f_5168[i /*16*/]);
				
					for (j = i + 1; j < 14 && MISC::GET_HASH_KEY(&Global_23270.f_5393[j /*4*/]) == MISC::GET_HASH_KEY("PREV"); j = j + 1)
					{
						func_306(&Global_23270.f_5168[j /*16*/]);
					}
				
					if (Global_23270.f_5450[i] == -1)
					{
						func_305(&Global_23270.f_5393[i /*4*/]);
					}
					else
					{
						timestamp = Global_23270.f_5450[i];
					
						if (iParam2 >= 0)
							timestamp = iParam2;
					
						GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23270.f_5393[i /*4*/]);
					
						if (bParam5)
							HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp, 70);
						else
							HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp);
					
						GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					}
				
					if (MISC::IS_PC_VERSION())
					{
						if (Global_23270.f_5465[i] != 363 && IS_BIT_SET(Global_23270.f_5495, i))
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5465[i]);
						}
						else
						{
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
							GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(363);
						}
					}
				
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (MISC::GET_HASH_KEY(&(Global_4540953.f_16)) != MISC::GET_HASH_KEY(""))
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_23270.f_5166);
				func_306(&Global_4540953);
			
				if (Global_4540953.f_20 == -1)
				{
					func_305(&(Global_4540953.f_16));
				}
				else
				{
					timestamp2 = Global_23270.f_5450[i];
				
					if (iParam2 >= 0)
						timestamp2 = iParam2;
				
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(timestamp2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(timestamp2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				}
			
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "SET_BACKGROUND_COLOUR");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(80);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "DRAW_INSTRUCTIONAL_BUTTONS");
		
			if (Global_23270.f_5525)
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			else
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
		
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			Global_23270.f_5167 = 1;
		}
	
		for (i = 0; i < Global_23270.f_5166; i = i + 1)
		{
			if (Global_23270.f_5450[i] != -1)
			{
				if (iParam2 > 0)
				{
					GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
					GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&Global_23270.f_5393[i /*4*/]);
				
					if (bParam5)
						HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
					else
						HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
				
					GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		}
	
		if (Global_4540953.f_20 != -1)
		{
			if (iParam2 > 0)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_23270.f_6103[num /*10*/], "OVERRIDE_RESPAWN_TEXT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
				GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&(Global_4540953.f_16));
			
				if (bParam5)
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam2, 70);
				else
					HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
			
				GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
		}
	
		GRAPHICS::SET_SCRIPT_GFX_ALIGN(76, 66);
		GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
	
		if (bParam6)
		{
			if (!Global_23270.f_8892)
			{
				HUD::SET_HUD_COMPONENT_POSITION(HUD_SUBTITLE_TEXT, 0f, -0.0375f);
				Global_23270.f_8892 = 1;
			}
		}
		else if (Global_23270.f_8892)
		{
			HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
			Global_23270.f_8892 = 0;
		}
	
		GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	
		if (Global_23270.f_5498)
		{
			GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
			GRAPHICS::SET_SCRIPT_GFX_ALIGN_PARAMS(0f, 0f, 0f, 0f);
			GRAPHICS::DRAW_SCALEFORM_MOVIE(Global_23270.f_6103[num /*10*/], Global_23270.f_5496, Global_23270.f_5497, 1f, 1f, 255, 255, 255, 255, 0);
			GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
		}
		else
		{
			GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(Global_23270.f_6103[num /*10*/], 255, 255, 255, 255, 0);
		}
	}

	return;
}

void func_305(char* sParam0) // Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_306(char* sParam0) // Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_307(Player plParam0, int iParam1) // Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_308(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_308(int iParam0, BOOL bParam1) // Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_140();

	if (Global_1575040[num2] == 1)
	{
		bParam1;
		num = 8;
	}
	else
	{
		num = Global_1574912[num2];
		bParam1;
	}

	return num;
}

BOOL func_309() // Hash - 0x8034D5B3 ^0x6404C51
{
	var position;

	if (Global_20383.f_1 > 3)
		return true;

	if (func_310())
	{
		position = { 0f, -500f, 0f };
		MOBILE::GET_MOBILE_PHONE_POSITION(&position);
	
		if (Global_20328 == 0)
			if (position.f_1 > -119f)
				return true;
			else
				return false;
		else if (position.f_1 > -101f)
			return true;
		else
			return false;
	}

	return false;
}

BOOL func_310() // Hash - 0x3CA1BB47 ^0x894044A3
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CELLPHONE_FLASHHAND")) > 0)
		return true;

	return false;
}

void func_311(int iParam0, BOOL bParam1, int* piParam2, int* piParam3, int* piParam4, int* piParam5) // Hash - 0x16389FD1 ^0x58250497
{
	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, piParam2, piParam3, piParam4, piParam5);
	*piParam5 = 255;

	switch (iParam0)
	{
		case 28:
			*piParam2 = 194;
			*piParam3 = 80;
			*piParam4 = 80;
			break;
	
		case 15:
		case 4:
		case 16:
		case 26:
		case 27:
		case 35:
		case 34:
		case 49:
		case 48:
		case 42:
		case 36:
		case 37:
		case 54:
		case 39:
		case 40:
		case 38:
		case 44:
		case 43:
		case 45:
		case 46:
		case 47:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
			if (bParam1)
			{
				*piParam2 = 0;
				*piParam3 = 0;
				*piParam4 = 0;
			}
			break;
	
		case 55:
			*piParam5 = 100;
			break;
	
		case 63:
			*piParam5 = 100;
			break;
	
		case 56:
			HUD::GET_HUD_COLOUR(HUD_COLOUR_PINK, piParam2, piParam3, piParam4, piParam5);
			*piParam5 = 255;
			break;
	}

	return;
}

void func_312(float fParam0) // Hash - 0x4A65499D ^0x9B8EE2A2
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);
	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_LEADING(2);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(fParam0, (Global_23267 + Global_23269) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

void func_313(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Hash - 0xB49C9E3A ^0xA43F5A6
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam4);
	HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, 0);
	return;
}

float func_314(char* sParam0, int iParam1, int iParam2) // Hash - 0x4268C4EF ^0xB6E60544
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_315();
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam1);
	HUD::ADD_TEXT_COMPONENT_INTEGER(iParam2);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_315() // Hash - 0x16EFE904 ^0xB607D3A2
{
	int r;
	int g;
	int b;
	int a;

	HUD::GET_HUD_COLOUR(HUD_COLOUR_WHITE, &r, &g, &b, &a);

	if (Global_23270.f_8867)
	{
		r = Global_23270.f_8863;
		g = Global_23270.f_8864;
		b = Global_23270.f_8865;
		a = Global_23270.f_8866;
	}

	HUD::SET_TEXT_FONT(0);
	HUD::SET_TEXT_SCALE(0f, 0.35f);
	HUD::SET_TEXT_COLOUR(r, g, b, a);
	HUD::SET_TEXT_WRAP(Global_23267 + 0.0046875f, (Global_23267 + Global_23269) - 0.0046875f);
	HUD::SET_TEXT_CENTRE(false);
	HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
	HUD::SET_TEXT_EDGE(0, 0, 0, 0, 0);
	return;
}

char* func_316(int iParam0, BOOL bParam1) // Hash - 0x9230D0AE ^0x4BB30F5A
{
	var unk;
	var txdName;
	var netHandle;

	unk = 2;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23270.f_7488[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23270.f_7488[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { func_318(PLAYER::PLAYER_ID()) };
		
			if (NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName))
				return func_317(&txdName);
		}
		else
		{
			return func_317(&Global_23270.f_7488[iParam0 /*16*/]);
		}
	}

	switch (iParam0)
	{
		case 3:
			unk[0] = "MP_hostCrown";
			unk[1] = "MP_hostCrown";
			break;
	
		case 21:
			unk[0] = "MP_SpecItem_Coke";
			unk[1] = "MP_SpecItem_Coke";
			break;
	
		case 22:
			unk[0] = "MP_SpecItem_Heroin";
			unk[1] = "MP_SpecItem_Heroin";
			break;
	
		case 23:
			unk[0] = "MP_SpecItem_Weed";
			unk[1] = "MP_SpecItem_Weed";
			break;
	
		case 24:
			unk[0] = "MP_SpecItem_Meth";
			unk[1] = "MP_SpecItem_Meth";
			break;
	
		case 25:
			unk[0] = "MP_SpecItem_Cash";
			unk[1] = "MP_SpecItem_Cash";
			break;
	
		case 1:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 2:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 4:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 6:
			unk[0] = "Shop_Box_CrossB";
			unk[1] = "Shop_Box_Cross";
			break;
	
		case 7:
			unk[0] = "Shop_Box_BlankB";
			unk[1] = "Shop_Box_Blank";
			break;
	
		case 5:
			unk[0] = "Shop_Box_TickB";
			unk[1] = "Shop_Box_Tick";
			break;
	
		case 8:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 9:
			unk[0] = "Shop_Clothing_Icon_B";
			unk[1] = "Shop_Clothing_Icon_A";
			break;
	
		case 10:
			unk[0] = "Shop_GunClub_Icon_B";
			unk[1] = "Shop_GunClub_Icon_A";
			break;
	
		case 17:
			unk[0] = "Shop_Ammo_Icon_B";
			unk[1] = "Shop_Ammo_Icon_A";
			break;
	
		case 18:
			unk[0] = "Shop_Armour_Icon_B";
			unk[1] = "Shop_Armour_Icon_A";
			break;
	
		case 19:
			unk[0] = "Shop_Health_Icon_B";
			unk[1] = "Shop_Health_Icon_A";
			break;
	
		case 20:
			unk[0] = "Shop_MakeUp_Icon_B";
			unk[1] = "Shop_MakeUp_Icon_A";
			break;
	
		case 11:
			unk[0] = "Shop_Tattoos_Icon_B";
			unk[1] = "Shop_Tattoos_Icon_A";
			break;
	
		case 12:
			unk[0] = "Shop_Garage_Icon_B";
			unk[1] = "Shop_Garage_Icon_A";
			break;
	
		case 13:
			unk[0] = "Shop_Garage_Bike_Icon_B";
			unk[1] = "Shop_Garage_Bike_Icon_A";
			break;
	
		case 14:
			unk[0] = "Shop_Barber_Icon_B";
			unk[1] = "Shop_Barber_Icon_A";
			break;
	
		case 15:
			unk[0] = "shop_Lock";
			unk[1] = "shop_Lock";
			break;
	
		case 16:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 26:
			unk[0] = "arrowleft";
			unk[1] = "arrowleft";
			break;
	
		case 27:
			unk[0] = "arrowright";
			unk[1] = "arrowright";
			break;
	
		case 28:
			unk[0] = "MP_AlertTriangle";
			unk[1] = "MP_AlertTriangle";
			break;
	
		case 29:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 31:
			unk[0] = "Shop_Michael_Icon_B";
			unk[1] = "Shop_Michael_Icon_A";
			break;
	
		case 32:
			unk[0] = "Shop_Franklin_Icon_B";
			unk[1] = "Shop_Franklin_Icon_A";
			break;
	
		case 33:
			unk[0] = "Shop_Trevor_Icon_B";
			unk[1] = "Shop_Trevor_Icon_A";
			break;
	
		case 52:
			unk[0] = "SaleIcon";
			unk[1] = "SaleIcon";
			break;
	
		case 53:
			unk[0] = "Shop_Tick_Icon";
			unk[1] = "Shop_Tick_Icon";
			break;
	
		case 55:
			unk[0] = "shop_NEW_Star";
			unk[1] = "shop_NEW_Star";
			break;
	
		case 56:
			unk[0] = "Shop_Lock_Arena";
			unk[1] = "Shop_Lock_Arena";
			break;
	
		case 57:
			unk[0] = "Card_Suit_Clubs";
			unk[1] = "Card_Suit_Clubs";
			break;
	
		case 58:
			unk[0] = "Card_Suit_Hearts";
			unk[1] = "Card_Suit_Hearts";
			break;
	
		case 59:
			unk[0] = "Card_Suit_Spades";
			unk[1] = "Card_Suit_Spades";
			break;
	
		case 60:
			unk[0] = "Card_Suit_Diamonds";
			unk[1] = "Card_Suit_Diamonds";
			break;
	
		case 61:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 63:
			unk[0] = "Shop_Art_Icon_B";
			unk[1] = "Shop_Art_Icon_A";
			break;
	
		case 62:
			unk[0] = "Shop_Chips_A";
			unk[1] = "Shop_Chips_B";
			break;
	
		case 0:
			unk[0] = "";
			unk[1] = "";
			break;
	}

	if (bParam1)
		return unk[0];

	return unk[1];
}

char* func_317(char* sParam0) // Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

struct<13> func_318(Player plParam0) // Hash - 0x3F3CEB62 ^0x60A9D262
{
	var gamerHandle;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
	return gamerHandle;
}

char* func_319(int iParam0) // Hash - 0x60CD2ECC ^0xC4EB38
{
	var txdName;
	var netHandle;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23270.f_6463[iParam0 /*16*/]))
	{
		if (MISC::GET_HASH_KEY(&Global_23270.f_6463[iParam0 /*16*/]) == joaat("CREW_LOGO"))
		{
			netHandle = { func_318(PLAYER::PLAYER_ID()) };
			NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&netHandle, &txdName);
			return func_317(&txdName);
		}
		else
		{
			return func_317(&Global_23270.f_6463[iParam0 /*16*/]);
		}
	}

	if (iParam0 == 52)
		return "MPShopSale";

	return "CommonMenu";
}

void func_320(int iParam0, char* sParam1, int iParam2, BOOL bParam3, int iParam4, BOOL bParam5, int iParam6) // Hash - 0x266829EB ^0xA645288
{
	int num;
	float num2;
	float num3;
	var unk;
	float num4;

	if (Global_23270.f_5661 > iParam0)
		return;

	if (Global_23270.f_5661 >= 128)
		return;

	if (Global_23270.f_5663 >= 256)
		return;

	if (Global_23270.f_6186 < Global_23270.f_6184)
		return;

	if (Global_23270.f_5661 != iParam0)
	{
		Global_23270.f_5661 = iParam0;
		Global_23270.f_5662 = 0;
	}

	num = Global_23270.f_5499[Global_23270.f_5662];

	if (num != 1)
	{
		while (Global_23270.f_5662 < 4 && num != 1)
		{
			Global_23270.f_5662 = Global_23270.f_5662 + 1;
			num = Global_23270.f_5499[Global_23270.f_5662];
		}
	
		if (num != 1)
			return;
	}

	TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_79[Global_23270.f_5663 /*6*/], sParam1, 24);
	!MISC::IS_STRING_NULL_OR_EMPTY(sParam1) && !HUD::DOES_TEXT_LABEL_EXIST(sParam1);
	Global_23270.f_1616[Global_23270.f_5663] = bParam3;
	Global_23270.f_1873[Global_23270.f_5663] = iParam4;
	Global_23270.f_2130[Global_23270.f_5663] = iParam6;
	Global_23270.f_5663 = Global_23270.f_5663 + 1;

	if (!bParam3)
		func_323(Global_23270.f_5661, true);
	else
		func_323(Global_23270.f_5661, false);

	if (iParam2 == 0)
	{
		num2 = func_322(&Global_23270.f_79[Global_23270.f_5663 /*6*/]);
	
		if (Global_23270.f_5518[Global_23270.f_5662])
		{
			func_326(26, true, false, &num3, &unk, false);
			num2 = num2 + (num3 * 2f);
		}
	
		if (num2 > Global_23270.f_5511[Global_23270.f_5662])
			Global_23270.f_5511[Global_23270.f_5662] = num2;
	}

	if (bParam5)
	{
		if (iParam2 == 0)
		{
			num4 = func_321(&Global_23270.f_79[Global_23270.f_5663 /*6*/]);
		
			if (num4 > Global_23270.f_6188[iParam0])
				Global_23270.f_6188[iParam0] = num4;
		}
	}

	MISC::SET_BIT(&Global_23270.f_5532[iParam0], Global_23270.f_5662);
	Global_23270.f_5662 = Global_23270.f_5662 + 1;
	Global_23270.f_6187 = 1;
	Global_23270.f_6185 = Global_23270.f_5663 - 1;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = iParam2;
	return;
}

float func_321(char* sParam0) // Hash - 0xA8635191 ^0x72265D8A
{
	!HUD::DOES_TEXT_LABEL_EXIST(sParam0);
	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_322(char* sParam0) // Hash - 0x3C58D2F7 ^0x84E5FE10
{
	if (!MISC::IS_STRING_NULL(sParam0))
		if (MISC::GET_HASH_KEY(sParam0) == 0)
			return 0f;
	else
		return 0f;

	func_302(false, true, false, false, 0, false, false);
	HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(sParam0);
	return HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);
}

void func_323(int iParam0, BOOL bParam1) // Hash - 0x88A2313D ^0xBBA11C08
{
	int num;

	num = SYSTEM::FLOOR(SYSTEM::TO_FLOAT(iParam0) / 32f);

	if (bParam1)
		MISC::SET_BIT(&Global_23270.f_6458[num], iParam0 - (num * 32));
	else
		MISC::CLEAR_BIT(&Global_23270.f_6458[num], iParam0 - (num * 32));

	return;
}

void func_324(BOOL bParam0, int* piParam1, int* piParam2, var uParam3) // Hash - 0xEE4D06D2 ^0x33CDA0F9
{
	float num;
	float value;
	float aspectRatio;

	if (!bParam0)
	{
		GRAPHICS::GET_SCREEN_RESOLUTION(piParam1, piParam2);
		return;
	}

	GRAPHICS::GET_ACTUAL_SCREEN_RESOLUTION(piParam1, piParam2);
	num = SYSTEM::TO_FLOAT(*piParam1);
	value = SYSTEM::TO_FLOAT(*piParam2);
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (func_325(*piParam1, *piParam2))
	{
		*uParam3 = 1f;
		*piParam1 = SYSTEM::ROUND(value * aspectRatio);
		*piParam2 = SYSTEM::ROUND(value);
		return;
	}

	*uParam3 = num / value / aspectRatio;
	*piParam1 = SYSTEM::ROUND(num / *uParam3);
	*piParam2 = SYSTEM::ROUND(value / *uParam3);
	return;
}

BOOL func_325(int iParam0, int iParam1) // Hash - 0xB42F2FDC ^0x10EEA826
{
	return SYSTEM::TO_FLOAT(iParam0) / SYSTEM::TO_FLOAT(iParam1) > 3.5f;
}

BOOL func_326(int iParam0, BOOL bParam1, BOOL bParam2, var uParam3, var uParam4, BOOL bParam5) // Hash - 0x8B713771 ^0xD678E8A5
{
	var textureDict;
	var textureName;
	int num;
	int num2;
	float num3;
	float textureResolution;
	float num4;

	TEXT_LABEL_ASSIGN_STRING(&textureDict, func_319(iParam0), 64);
	TEXT_LABEL_ASSIGN_STRING(&textureName, func_316(iParam0, bParam1), 64);

	if (MISC::GET_HASH_KEY(&textureName) != 0)
	{
		num3 = 1f;
		func_324(bParam5, &num, &num2, &num3);
		textureResolution = { GRAPHICS::GET_TEXTURE_RESOLUTION(&textureDict, &textureName) };
		num4 = func_327(iParam0) / num3;
		textureResolution = { textureResolution * { num4, num4, num4 } };
	
		if (!bParam2)
		{
			textureResolution = textureResolution - 2f;
			textureResolution.f_1 = textureResolution.f_1 - 2f;
		}
	
		if (iParam0 == 30)
		{
			textureResolution = 288f;
			textureResolution.f_1 = 106f;
		}
	
		if (iParam0 == 29 && MISC::GET_HASH_KEY(&Global_23270.f_7488[29 /*16*/]) == joaat("CREW_LOGO"))
		{
			textureResolution = 106f;
			textureResolution.f_1 = 106f;
		}
	
		*uParam3 = (textureResolution / (float)num) * (float)num / num2;
		*uParam4 = (textureResolution.f_1 / (float)num2 / textureResolution / (float)num) * *uParam3;
	
		if (!bParam5)
			if (!GRAPHICS::GET_IS_WIDESCREEN() && iParam0 != 30)
				*uParam3 = *uParam3 * 1.33f;
	
		if (iParam0 == 29)
		{
			if (*uParam3 > Global_23269)
			{
				*uParam4 = *uParam4 * (Global_23269 / *uParam3);
				*uParam3 = Global_23269;
			}
		}
	
		return true;
	}

	return false;
}

float func_327(int iParam0) // Hash - 0xE12CB3F5 ^0xE12CB3F5
{
	switch (iParam0)
	{
		case 33:
		case 4:
		case 11:
		case 31:
		case 20:
		case 15:
		case 10:
		case 12:
		case 13:
		case 32:
		case 9:
		case 5:
		case 6:
		case 7:
		case 14:
		case 18:
		case 19:
		case 17:
		case 28:
		case 26:
		case 27:
		case 53:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 63:
			return 0.5f;
	
		case 62:
			return 0.8f;
	}

	return 1f;
}

BOOL func_328(BOOL bParam0, BOOL bParam1) // Hash - 0x64BEBD7A ^0xE226A347
{
	if (Global_2672505.f_1684.f_701 != 0)
		return true;

	if (!CAM::IS_SCREEN_FADED_IN() || func_30(8, -1) && func_329() != 65 || HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1 || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0 || NETWORK::IS_COMMERCE_STORE_OPEN() || Global_78819 || Global_23270.f_8891 || HUD::IS_WARNING_MESSAGE_ACTIVE() || Global_100733.f_1474)
		return false;

	return true;
}

int func_329() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574993;
}

BOOL func_330(var uParam0, BOOL bParam1, int iParam2) // Hash - 0x5D26C738 ^0x7D8419D1
{
	var unk;
	Hash hashKey;
	int i;
	int num;

	if (iParam2 == -1)
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
			iParam2 = NETWORK::NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT();

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	TEXT_LABEL_APPEND_INT(&unk, iParam2, 64);
	hashKey = MISC::GET_HASH_KEY(&unk);
	num = -1;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_23270.f_6164[i] == hashKey)
		{
			*uParam0 = i;
			return true;
		}
		else if (Global_23270.f_6164[i] == 0)
		{
			num = i;
		}
	}

	if (bParam1)
	{
		if (num != -1)
		{
			Global_23270.f_6164[num] = hashKey;
			*uParam0 = num;
			return true;
		}
	}

	return false;
}

void func_331() // Hash - 0xCC6E07C9 ^0xF1C8DEBC
{
	if (!func_368(iLocal_304))
	{
		iLocal_304 = func_349();
		func_340(&iLocal_304, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
	}
	else if (!func_491(iLocal_75, 2))
	{
		if (func_332(iLocal_304))
		{
			iLocal_304 = func_349();
			func_340(&iLocal_304, 0, 0, MISC::GET_RANDOM_INT_IN_RANGE(1, 2), 0, 0, 0);
			func_482(&iLocal_75, 2);
		}
	}
	else if (func_332(iLocal_304))
	{
		func_282();
		func_473(false);
	}

	return;
}

BOOL func_332(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_333(func_349(), iParam0);
}

BOOL func_333(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_368(iParam1) || !func_368(iParam0))
		return 1;

	num = func_339(iParam0);
	num2 = func_339(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_338(iParam0);
	num2 = func_338(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_337(iParam0);
	num2 = func_337(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_336(iParam0);
	num2 = func_336(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_335(iParam0);
	num2 = func_335(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_334(iParam0);
	num2 = func_334(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_334(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_335(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_336(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_337(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_338(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

int func_339(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

void func_340(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_339(*uParam0);
	i = func_338(*uParam0);
	num2 = func_337(*uParam0);
	j = func_336(*uParam0);
	k = func_335(*uParam0);
	l = func_334(*uParam0);

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

	for (m = func_348(i, num); num2 > m; m = func_348(i, num))
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
	func_341(uParam0, l, k, j, num2, i, num);
	return;
}

void func_341(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_347(uParam0, iParam1);
	func_346(uParam0, iParam2);
	func_345(uParam0, iParam3);
	func_344(uParam0, iParam5);
	func_343(uParam0, iParam4);
	func_342(uParam0, iParam6);
	return;
}

void func_342(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_343(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_338(*uParam0);
	num2 = func_339(*uParam0);

	if (iParam1 < 1 || iParam1 > func_348(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_344(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_345(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_346(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_347(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

int func_348(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_349() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_347(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_346(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_345(&unk, CLOCK::GET_CLOCK_HOURS());
	func_343(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_344(&unk, CLOCK::GET_CLOCK_MONTH());
	func_342(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_350(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

void func_351() // Hash - 0xBCE781E4 ^0xEE3CE2A0
{
	int num;
	int num2;
	int num3;

	func_362(true);
	func_281(true);
	HUD::DISPLAY_RADAR(false);
	func_361(false, false);
	func_360(1, 1, 0, 0, 0);
	func_359(1, 2, 1, 1, 1);
	func_358(_("Services Available"));
	func_357(INPUT_FRONTEND_ACCEPT, _("Select"), -1, false);
	iLocal_71 = 0;
	num = func_233(0);
	num2 = func_233(1);
	num3 = func_233(2);

	if (func_276() >= num)
	{
		func_320(iLocal_71, _("$~1~"), 1, 1, 0, false, 0);
		func_354(num, false);
		uLocal_289[iLocal_71] = 0;
		iLocal_71 = iLocal_71 + 1;
	}

	if (func_276() >= num2 && func_353(veLocal_99))
	{
		func_320(iLocal_71, _("$~1~"), 1, true, 0, false, 0);
		func_354(num2, false);
		uLocal_289[iLocal_71] = 1;
		iLocal_71 = iLocal_71 + 1;
	}

	if (func_276() >= num3 && func_353(veLocal_99))
	{
		func_320(iLocal_71, _("$~1~"), 1, true, 0, false, 0);
		func_354(num3, false);
		uLocal_289[iLocal_71] = 2;
		iLocal_71 = iLocal_71 + 1;
	}

	func_320(iLocal_71, _("Decline Service"), 0, true, 0, false, 0);
	iLocal_70 = 0;
	func_283(iLocal_70, true, 1);
	func_352();
	iLocal_89 = MISC::GET_GAME_TIMER();
	iLocal_301 = 3;
	return;
}

void func_352() // Hash - 0x9A142650 ^0x4D0752C1
{
	Global_23131.f_5 = 1;
	return;
}

BOOL func_353(Vehicle veParam0) // Hash - 0x5D6F773C ^0x8B3663B1
{
	Hash entityModel;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (entityModel == joaat("INFERNUS") || entityModel == joaat("VOLTIC") || entityModel == joaat("STINGERGT") || entityModel == joaat("STINGER") || entityModel == joaat("BULLET") || entityModel == joaat("ENTITYXF") || entityModel == joaat("FELTZER3") || entityModel == joaat("GRANGER") || entityModel == joaat("PANTO") || entityModel == joaat("PHOENIX") || entityModel == joaat("FMJ") || entityModel == joaat("REAPER") || entityModel == joaat("LE7B") || entityModel == joaat("TYRUS") || entityModel == joaat("INFERNUS2"))
			return false;
	}

	return true;
}

void func_354(int iParam0, BOOL bParam1) // Hash - 0xAFEE905A ^0x1831F53D
{
	float num;
	float num2;
	var unk;
	float num3;

	if (Global_23270.f_5665 >= 256)
		return;

	if (Global_23270.f_6186 >= 4)
		return;

	if (Global_23270.f_6187 != 1)
		return;

	if (Global_23270.f_6186 >= Global_23270.f_6184)
		return;

	Global_23270.f_4309[Global_23270.f_5665] = iParam0;
	Global_23270.f_5665 = Global_23270.f_5665 + 1;
	Global_23270.f_2387[Global_23270.f_6185 /*5*/][Global_23270.f_6186] = 2;
	Global_23270.f_6186 = Global_23270.f_6186 + 1;

	if (Global_23270.f_6186 >= Global_23270.f_6184)
	{
		num = func_356();
	
		if (Global_23270.f_5518[Global_23270.f_5662] && Global_23270.f_6186 == Global_23270.f_6184)
		{
			func_326(26, true, false, &num2, &unk, false);
			num = num + (num2 * 2f);
		}
	
		if (num > Global_23270.f_5511[Global_23270.f_5662 - 1])
			Global_23270.f_5511[Global_23270.f_5662 - 1] = num;
	}

	if (bParam1)
	{
		if (Global_23270.f_6186 >= Global_23270.f_6184)
		{
			num3 = func_355();
		
			if (num3 > Global_23270.f_6188[Global_23270.f_5661])
				Global_23270.f_6188[Global_23270.f_5661] = num3;
		}
	}

	return;
}

float func_355() // Hash - 0xBF415923 ^0xBF415923
{
	int i;
	int num;
	float num2;
	var unk;
	float num3;

	for (i = 0; i < Global_23270.f_6186; i = i + 1)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 4)
			num = num + 1;
	}

	for (i = 0; i < num; i = i + 1)
	{
		if (Global_23270.f_4824[(Global_23270.f_5667 - num) + i] != 0)
			if (func_326(Global_23270.f_4824[(Global_23270.f_5667 - num) + i], true, false, &unk, &num3, false))
				if (num3 > num2)
					num2 = num3;
	}

	if (num2 > HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0))
		return num2;

	return HUD::GET_RENDERED_CHARACTER_HEIGHT(0.35f, 0);
}

float func_356() // Hash - 0x9130772A ^0x9130772A
{
	float screenWidthOfDisplayText;
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;
	int i;
	int num5;
	int num6;
	int num7;
	int num8;

	for (i = 0; i < Global_23270.f_6186; i = i + 1)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 1)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 8)
		{
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 2)
		{
			num = num + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 3)
		{
			num2 = num2 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 4)
		{
			num3 = num3 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 5)
		{
			num4 = num4 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 6)
		{
			num4 = num4 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 7)
		{
			num4 = num4 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 9)
		{
			num4 = num4 + 1;
		}
	}

	func_302(false, true, false, false, 0, num4 > 0, false);

	if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
		HUD::BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(&Global_23270.f_79[Global_23270.f_6185 /*6*/]);

	for (i = 0; i < Global_23270.f_6186; i = i + 1)
	{
		if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 1)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[Global_23270.f_6185 + num5 /*6*/]);
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 8)
		{
			num5 = num5 + 1;
		
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_23270.f_79[Global_23270.f_6185 + num5 /*6*/]);
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 2)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_INTEGER(Global_23270.f_4309[(Global_23270.f_5665 - num) + num6]);
		
			num6 = num6 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 3)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_FLOAT(Global_23270.f_4566[(Global_23270.f_5666 - num2) + num7], Global_23270.f_4695[(Global_23270.f_5666 - num2) + num7]);
		
			num7 = num7 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 5)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[(Global_23270.f_5664 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 6)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2695070[(Global_23270.f_5664 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 7)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[(Global_23270.f_5664 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
		else if (Global_23270.f_2387[Global_23270.f_6185 /*5*/][i] == 9)
		{
			if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
				HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_2695070[(Global_23270.f_5664 - num4) + num8 /*16*/]);
		
			num8 = num8 + 1;
		}
	}

	if (MISC::GET_HASH_KEY(&Global_23270.f_79[Global_23270.f_6185 /*6*/]) != 0)
		screenWidthOfDisplayText = HUD::END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(true);

	for (i = 0; i < num3; i = i + 1)
	{
		if (Global_23270.f_4824[(Global_23270.f_5667 - num3) + i] != 0)
		{
			func_326(Global_23270.f_4824[(Global_23270.f_5667 - num3) + i], true, false, &unk, &unk2, false);
			screenWidthOfDisplayText = screenWidthOfDisplayText + unk;
		}
	}

	return screenWidthOfDisplayText;
}

void func_357(eControlAction ecaParam0, char* sParam1, int iParam2, BOOL bParam3) // Hash - 0x1F0633B6 ^0x199DA912
{
	const char* controlInstructionalButtonsString;

	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, ecaParam0, true);

	if (Global_23270.f_5166 >= 14)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_4540953, controlInstructionalButtonsString, 64);
		TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_16), sParam1, 16);
		Global_4540953.f_20 = iParam2;
		return;
		return;
	}

	if (!bParam3)
		MISC::SET_BIT(&(Global_23270.f_5495), Global_23270.f_5166);

	TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5168[Global_23270.f_5166 /*16*/], controlInstructionalButtonsString, 64);
	TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5393[Global_23270.f_5166 /*4*/], sParam1, 16);
	Global_23270.f_5450[Global_23270.f_5166] = iParam2;
	Global_23270.f_5465[Global_23270.f_5166] = ecaParam0;
	Global_23270.f_5480[Global_23270.f_5166] = 32;
	Global_23270.f_5166 = Global_23270.f_5166 + 1;
	return;
}

void func_358(char* sParam0) // Hash - 0xD03AE33A ^0xD6DE91B4
{
	int i;

	TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_1), sParam0, 16);
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23270.f_5[i] = 0;
	}

	return;
}

void func_359(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Hash - 0x9D52C17B ^0x9D52C17B
{
	Global_23270.f_5526[0] = iParam0;
	Global_23270.f_5526[1] = iParam1;
	Global_23270.f_5526[2] = iParam2;
	Global_23270.f_5526[3] = iParam3;
	Global_23270.f_5526[4] = iParam4;
	return;
}

void func_360(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Hash - 0x9D52C17B ^0x9D52C17B
{
	Global_23270.f_5499[0] = iParam0;
	Global_23270.f_5499[1] = iParam1;
	Global_23270.f_5499[2] = iParam2;
	Global_23270.f_5499[3] = iParam3;
	Global_23270.f_5499[4] = iParam4;
	Global_23270.f_5669 = 0;

	if (iParam0 != 0)
		Global_23270.f_5669 = Global_23270.f_5669 + 1;

	if (iParam1 != 0)
		Global_23270.f_5669 = Global_23270.f_5669 + 1;

	if (iParam2 != 0)
		Global_23270.f_5669 = Global_23270.f_5669 + 1;

	if (iParam3 != 0)
		Global_23270.f_5669 = Global_23270.f_5669 + 1;

	if (iParam4 != 0)
		Global_23270.f_5669 = Global_23270.f_5669 + 1;

	return;
}

void func_361(BOOL bParam0, BOOL bParam1) // Hash - 0x5512C63B ^0xDB23D490
{
	int i;
	int j;
	float aspectRatio;

	for (i = 0; i < 256; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_79[i /*6*/], "", 24);
	
		for (j = 0; j < 4; j = j + 1)
		{
			Global_23270.f_2387[i /*5*/][j] = 0;
		}
	}

	for (i = 0; i < 40; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_2695070[i /*16*/], "", 64);
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23270.f_4309[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23270.f_4566[i] = 0f;
	}

	for (i = 0; i < 256; i = i + 1)
	{
		Global_23270.f_4824[i] = 0;
	}

	for (i = 0; i < 128; i = i + 1)
	{
		Global_23270.f_5532[i] = 0;
		Global_23270.f_5670[i] = false;
		Global_23270.f_5799[i] = false;
		Global_23270.f_6322[i] = 0f;
		Global_23270.f_5928[i] = false;
		Global_23270.f_6188[i] = 0f;
	}

	for (i = 0; i < 5; i = i + 1)
	{
		Global_23270.f_5499[i] = 0;
		Global_23270.f_5511[i] = 0f;
		Global_23270.f_5505[i] = -1f;
		Global_23270.f_5518[i] = false;
		Global_23270.f_5526[i] = 1;
	}

	for (i = 0; i < 14; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_5393[i /*4*/], "", 16);
		Global_23270.f_5450[i] = -1;
		Global_23270.f_5465[i] = 363;
		Global_23270.f_5480[i] = 32;
	}

	for (i = 0; i < 64; i = i + 1)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_6463[i /*16*/], "", 64);
		TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_7488[i /*16*/], "", 64);
	}

	if (bParam1)
	{
		for (i = 0; i < 256; i = i + 1)
		{
			Global_23270.f_1616[i] = false;
		}
	}

	TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_16), "", 16);
	Global_4540953.f_20 = -1;
	Global_23270 = false;
	Global_23270.f_5661 = 0;
	Global_23270.f_5662 = 0;
	Global_23270.f_5663 = 0;
	Global_23270.f_5665 = 0;
	Global_23270.f_5666 = 0;
	Global_23270.f_5667 = 0;
	Global_23270.f_5664 = 0;
	Global_23270.f_6317 = 0;
	Global_23270.f_6457 = 0;
	Global_23270.f_6182 = 0;
	Global_23270.f_6181 = 0;
	Global_23270.f_6183 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_5081), "", 24);
	Global_23270.f_5159 = 0;
	Global_23270.f_5160 = 0;
	Global_23270.f_5161 = 0;
	Global_23270.f_5162 = 0;
	Global_23270.f_5163 = 0;
	Global_23270.f_5164 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23270.f_5093[i] = 0;
	}

	Global_23270.f_5165 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_4540953.f_21), "", 16);
	Global_4540953.f_61 = 0;
	Global_4540953.f_62 = 0;
	Global_4540953.f_63 = 0;
	Global_4540953.f_64 = 0;
	Global_4540953.f_65 = 0;
	Global_4540953.f_66 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_4540953.f_25[i] = 0;
	}

	Global_4540953.f_67 = 0;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_1), "", 16);
	Global_23270.f_5517 = 0f;
	Global_23270.f_74 = 0;
	Global_23270.f_75 = 0;
	Global_23270.f_76 = 0;
	Global_23270.f_77 = 0;
	Global_23270.f_78 = 0;

	for (i = 0; i < 4; i = i + 1)
	{
		Global_23270.f_5[i] = 0;
	}

	Global_23270.f_6187 = 0;
	Global_23270.f_6186 = 0;
	Global_23270.f_6184 = 0;
	Global_23270.f_6185 = 0;
	Global_23270.f_5166 = 0;
	Global_23270.f_5167 = 0;
	Global_23270.f_5668 = 10;
	Global_23270.f_5669 = 0;
	Global_23270.f_6319 = 0f;
	Global_23270.f_6320 = 0f;
	Global_23270.f_6171 = 0;
	Global_23270.f_6172 = 0;
	Global_23270.f_6173 = 0f;
	Global_23270.f_6174 = 0;
	Global_23270.f_6176 = 0;
	Global_23270.f_6175 = 0;
	Global_23270.f_6177 = 0;
	Global_23270.f_6178 = 0;
	Global_23270.f_6179 = 0;
	Global_23270.f_6180 = 0;
	Global_23270.f_8888 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_23270.f_6451[i] = -1;
		Global_23270.f_6454[i] = -1;
	}

	Global_23270.f_5524 = 0f;
	Global_23270.f_5495 = 0;
	Global_23270.f_5525 = 0;

	for (i = 0; i < Global_23270.f_6458; i = i + 1)
	{
		Global_23270.f_6458[i] = 0;
	}

	Global_23270.f_8867 = 0;
	Global_23270.f_8862 = 0;
	Global_23270.f_8872 = 0;
	Global_23270.f_8877 = 0;
	Global_23270.f_8882 = 0;
	Global_23270.f_8884 = 0;
	Global_23270.f_8890 = 0;
	Global_23267 = 0.05f;
	Global_23268 = 0.05f;
	Global_23269 = 0.225f;
	aspectRatio = GRAPHICS::GET_ASPECT_RATIO(false);

	if (bParam0)
		Global_23269 = 0.225f * (1.7777778f / aspectRatio);
	else if (aspectRatio < 1.77777f)
		Global_23269 = 0.225f * (1.7777778f / aspectRatio);
	else
		Global_23269 = 0.225f;

	return;
}

void func_362(BOOL bParam0) // Hash - 0xDD23C843 ^0xE5697B63
{
	if (!bParam0)
		Global_112290 = MISC::GET_GAME_TIMER() + 250;

	Global_112287 = bParam0;
	return;
}

BOOL func_363(char* sParam0, int iParam1) // Hash - 0x4D76D02D ^0x5F4A6C9E
{
	if (func_276() < func_233(iParam1))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, _("You need more cash to pick up a prostitute."), 16);
		return false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_364(PLAYER::PLAYER_ID()))
	{
		TEXT_LABEL_ASSIGN_STRING(sParam0, _("Not available while a key player in a Freemode Event."), 16);
		return false;
	}

	TEXT_LABEL_ASSIGN_STRING(sParam0, "", 16);
	return true;
}

BOOL func_364(Player plParam0) // Hash - 0x295F4323 ^0xC9EF0000
{
	Player player;

	player = plParam0;

	if (player != -1)
		return IS_BIT_SET(Global_1894573[player /*608*/].f_1, 0);

	return false;
}

BOOL func_365(Ped pedParam0, BOOL bParam1) // Hash - 0xE8F3B36C ^0x473E69C0
{
	int pedDrawableVariation;

	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_50(PLAYER::PLAYER_PED_ID(), false, false)))
	{
	}
	else if (!ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 3) && TASK::GET_SCRIPT_TASK_STATUS(pedParam0, SCRIPT_TASK_PLAY_ANIM) != 1)
	{
		if (func_551())
		{
			if (pedParam0 == PLAYER::PLAYER_PED_ID())
			{
				if (!func_205(PLAYER::PLAYER_ID()))
				{
					pedDrawableVariation = PED::GET_PED_DRAWABLE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
				
					if (!func_524(256))
					{
						func_196(256);
						iLocal_86 = pedDrawableVariation;
						iLocal_87 = PED::GET_PED_TEXTURE_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET);
						PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, 1, 0, 0);
						func_196(1024);
					}
				}
			
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
			else
			{
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
			}
		}
		else
		{
			TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 2f, -8f, -1, 0, 0, false, false, false);
		}
	}
	else
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1), 3))
			if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_366(bParam1)) >= 0.95f)
				TASK::TASK_PLAY_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 8f, -2f, -1, 1, 0, false, false, false);
	
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedParam0, func_50(PLAYER::PLAYER_PED_ID(), false, false), func_110(bParam1), 3))
			return true;
	}

	return false;
}

char* func_366(BOOL bParam0) // Hash - 0x7BF24927 ^0x1FB9CD58
{
	if (!func_491(iLocal_49, 32768))
		if (bParam0)
			return func_45(0);
		else
			return func_45(1);

	if (bParam0)
		return func_46(0);

	return func_46(1);
}

void func_367(var uParam0) // Hash - 0xEE73B491 ^0xBDB3BDC2
{
	*uParam0 = -15;
	return;
}

BOOL func_368(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_334(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_335(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_336(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_339(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_338(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_337(iParam0);

	if (num6 < 1 || num6 > func_348(num5, num4))
		return false;

	return true;
}

void func_369() // Hash - 0x8C96C830 ^0xEF9EFE67
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_96);

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		if (iLocal_72 < 1)
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_OFFER_SERVICE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
		else
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_OFFER_AGAIN", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_370() // Hash - 0xAAF439E9 ^0x7F9A2A94
{
	if (func_371(0, -1, false) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SCRIPT\\HUD_321_GO", true, -1))
		return true;

	return false;
}

BOOL func_371(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0xF7C7CB5C ^0x1F94FA7F
{
	int num;
	BOOL flag;
	BOOL flag2;

	if (!func_330(&num, true, iParam1))
		return false;

	flag = true;
	TEXT_LABEL_ASSIGN_STRING(&Global_23270.f_6078[num /*4*/], sParam0, 16);

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&Global_23270.f_6078[num /*4*/]))
	{
		HUD::REQUEST_ADDITIONAL_TEXT(&Global_23270.f_6078[num /*4*/], 9);
		Global_23270.f_6071[num] = true;
	
		if (!HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED(&Global_23270.f_6078[num /*4*/], 9))
			flag = false;
	}

	GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("CommonMenu", false);
	Global_23270.f_6057[num] = true;

	if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("CommonMenu"))
		flag = false;

	if (bParam2)
	{
		GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("MPShopSale", false);
		Global_23270.f_6064[num] = true;
	
		if (!GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED("MPShopSale"))
			flag = false;
	}

	flag2 = false;
	TEXT_LABEL_ASSIGN_STRING(&(Global_23270.f_6103[num /*10*/].f_1), "instructional_buttons", 24);
	flag2 = func_372(&Global_23270.f_6103[num /*10*/]);
	!flag || !flag2;
	return flag && flag2;
}

BOOL func_372(int* piParam0) // Hash - 0x55978EE6 ^0x74533A35
{
	switch (piParam0->f_9)
	{
		case 0:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				*piParam0 = unk_0x67D02A194A2FC2BD(&(piParam0->f_1));
				piParam0->f_9 = 1;
			
				if (piParam0->f_7)
				{
					if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
					{
						piParam0->f_8 = MISC::GET_GAME_TIMER();
						piParam0->f_9 = 2;
					}
				}
			}
			else
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 1:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			{
				piParam0->f_8 = MISC::GET_GAME_TIMER();
				piParam0->f_9 = 2;
			}
			break;
	
		case 2:
			if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
				piParam0->f_9 = 0;
			break;
	}

	return piParam0->f_9 == 2;
}

void func_373() // Hash - 0xBCF0D0CC ^0xE463285E
{
	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
		iLocal_60 = ENTITY::GET_ENTITY_HEALTH(pedLocal_96);

	return;
}

void func_374() // Hash - 0x738C93C ^0x377E998E
{
	Vehicle vehiclePedIsIn;

	if (!func_551())
		return;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
				uLocal_56 = { ENTITY::GET_ENTITY_COORDS(vehiclePedIsIn, true) };
		}
	}

	return;
}

void func_375(BOOL bParam0, int iParam1) // Hash - 0x8F233D4 ^0xB55528D0
{
	int num;

	if (!func_330(&num, false, iParam1))
		return;

	if (Global_23270.f_8892)
	{
		HUD::RESET_HUD_COMPONENT_VALUES(HUD_SUBTITLE_TEXT);
		Global_23270.f_8892 = 0;
	}

	HUD::THEFEED_SET_SCRIPTED_MENU_HEIGHT(0f);

	if (Global_23270.f_6071[num])
	{
		HUD::CLEAR_ADDITIONAL_TEXT(9, false);
		Global_23270.f_6071[num] = false;
	}

	if (Global_23270.f_6057[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("CommonMenu");
		Global_23270.f_6057[num] = false;
	}

	if (Global_23270.f_6064[num])
	{
		GRAPHICS::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("MPShopSale");
		Global_23270.f_6064[num] = false;
	}

	if (bParam0)
	{
		func_376(&Global_23270.f_6103[num /*10*/]);
		Global_23270.f_6164[num] = 0;
	}
	else
	{
		Global_23270.f_6164[num] = 0;
	}

	return;
}

void func_376(int* piParam0) // Hash - 0x294B53C7 ^0x1978B7FB
{
	if (piParam0->f_9 != 0)
	{
		if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*piParam0))
			GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(piParam0);
	
		*piParam0 = 0;
		piParam0->f_9 = 0;
	}

	return;
}

BOOL func_377() // Hash - 0x7C289863 ^0xBAFA497A
{
	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				veLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (!veLocal_99 == 0)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false) && !FIRE::IS_ENTITY_ON_FIRE(veLocal_99) && !ENTITY::IS_ENTITY_UPSIDEDOWN(veLocal_99))
					{
						if (func_91(&veLocal_99))
						{
							func_5(&iLocal_49, 1);
							return true;
						}
					}
				}
			}
		}
	}

	return false;
}

void func_378() // Hash - 0xD781E328 ^0xD781E328
{
	if (iLocal_72 == 0)
	{
		if (!func_491(iLocal_51, 1) && !func_491(iLocal_51, 16))
			if (func_379(0))
				func_482(&iLocal_51, 1);
	
		if (!func_491(iLocal_51, 4) && !func_491(iLocal_51, 64))
			if (func_379(2))
				func_482(&iLocal_51, 4);
	
		if (!func_491(iLocal_51, 8) && !func_491(iLocal_51, 128))
			if (func_379(1))
				func_482(&iLocal_51, 8);
	}

	return;
}

BOOL func_379(int iParam0) // Hash - 0xC8972BDE ^0xB1E2C640
{
	Vector3 vector;
	Vector3 entityCoords;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	vector = { func_186(iParam0) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_99, true) };

	if (uLocal_308[iParam0] == 0)
	{
		if (ENTITY::GET_ENTITY_MODEL(veLocal_99) == joaat("TYRANT"))
			uLocal_308[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.1f, 511, veLocal_99, 3);
		else if (ENTITY::GET_ENTITY_MODEL(veLocal_99) == joaat("CASCO") || ENTITY::GET_ENTITY_MODEL(veLocal_99) == joaat("FELTZER3") || ENTITY::GET_ENTITY_MODEL(veLocal_99) == joaat("FAGALOA") || ENTITY::GET_ENTITY_MODEL(veLocal_99) == joaat("WARRENER2"))
			uLocal_308[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.15f, 511, veLocal_99, 3);
		else
			uLocal_308[iParam0] = SHAPETEST::START_SHAPE_TEST_SWEPT_SPHERE(vector, entityCoords, 0.25f, 511, veLocal_99, 3);
	}
	else
	{
		switch (SHAPETEST::GET_SHAPE_TEST_RESULT(uLocal_308[iParam0], &hit, &endCoords, &surfaceNormal, &entityHit))
		{
			case 2:
				uLocal_308[iParam0] = 0;
			
				if (hit != 0)
				{
					func_380(iParam0);
					return false;
				}
				else
				{
					return true;
				}
				break;
		
			case 1:
				break;
		
			case 0:
				uLocal_308[iParam0] = 0;
				break;
		}
	}

	return false;
}

void func_380(int iParam0) // Hash - 0x41748AF4 ^0x41748AF4
{
	switch (iParam0)
	{
		case 0:
			if (!func_491(iLocal_51, 16))
			{
				func_482(&iLocal_51, 16);
				func_5(&iLocal_51, 1);
			}
			break;
	
		case 1:
			if (!func_491(iLocal_51, 128))
			{
				func_482(&iLocal_51, 128);
				func_5(&iLocal_51, 8);
			}
			break;
	
		case 2:
			if (!func_491(iLocal_51, 64))
			{
				func_482(&iLocal_51, 64);
				func_5(&iLocal_51, 4);
			}
			break;
	
		case 3:
			if (!func_491(iLocal_51, 32))
			{
				func_482(&iLocal_51, 32);
				func_5(&iLocal_51, 2);
			}
			break;
	}

	return;
}

void func_381() // Hash - 0xDEE08EA0 ^0xE9DC7FF
{
	if (func_386() && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		iLocal_295 = 9;
		func_384(pedLocal_96);
		func_384(PLAYER::PLAYER_PED_ID());
		func_382();
		func_40(&uLocal_104);
	}

	return;
}

void func_382() // Hash - 0xD3C6007 ^0xCF74C12A
{
	Vector3 vector;
	Vector3 vector2;

	if (!CAM::DOES_CAM_EXIST(caLocal_102))
		caLocal_102 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	if (!CAM::DOES_CAM_EXIST(caLocal_103))
		caLocal_103 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);

	func_383(&vector, &vector2);
	CAM::SET_CAM_COORD(caLocal_102, vector);
	CAM::SET_CAM_ROT(caLocal_102, vector.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_102, vector.f_6);
	CAM::SET_CAM_COORD(caLocal_103, vector2);
	CAM::SET_CAM_ROT(caLocal_103, vector2.f_3, 2);
	CAM::SET_CAM_FOV(caLocal_103, vector2.f_6);
	CAM::SET_CAM_ACTIVE(caLocal_102, true);
	CAM::SET_CAM_ACTIVE(caLocal_103, false);
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	return;
}

void func_383(var uParam0, var uParam1) // Hash - 0xAB2B4E38 ^0xFC5CC6B2
{
	switch (func_23())
	{
		case 0:
			*uParam0 = { -823.9435f, 186.8976f, 75.5221f };
			uParam0->f_3 = { -18.973f, 0f, -179.5878f };
			uParam0->f_6 = 50f;
			*uParam1 = { -828.0038f, 179.5113f, 75.7418f };
			uParam1->f_3 = { 14.0219f, 0f, -107.3339f };
			uParam1->f_6 = 50f;
			break;
	
		case 1:
			*uParam0 = { -20.162f, -1443.9158f, 31.9468f };
			uParam0->f_3 = { -12.0736f, 0f, -130.562f };
			uParam0->f_6 = 50f;
			*uParam1 = { -15.925f, -1446.9202f, 31.9534f };
			uParam1->f_3 = { -10.3101f, 0f, 34.3879f };
			uParam1->f_6 = 50f;
			break;
	
		case 2:
			*uParam0 = { 1972.2477f, 3804.8054f, 36.7174f };
			uParam0->f_3 = { -19.6476f, 0f, -45.6158f };
			uParam0->f_6 = 50f;
			*uParam1 = { 1970.1941f, 3807.5408f, 35.5247f };
			uParam1->f_3 = { -15.8717f, 0f, 41.6556f };
			uParam1->f_6 = 50f;
			break;
	}

	return;
}

void func_384(Ped pedParam0) // Hash - 0x72A5EEF7 ^0xA7187277
{
	int taskSequenceId;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 16842752);
	
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_385(), 1f, -1, 0.5f, 8192, 1193033728);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedParam0, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
	}

	return;
}

Vector3 func_385() // Hash - 0x9FE1ED2F ^0x9FE1ED2F
{
	switch (func_23())
	{
		case 0:
			return -819.88f, 177.47f, 70.63f;
	
		case 1:
			return -14.57f, -1437.56f, 30.12f;
	
		case 2:
			return 1972.16f, 3817.47f, 32.43f;
	}

	return 0f, 0f, 0f;
}

BOOL func_386() // Hash - 0xB3476B3B ^0xDFB50763
{
	return SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_388()) < func_387() * func_387();
}

float func_387() // Hash - 0xB9C4DD11 ^0xB9C4DD11
{
	switch (func_23())
	{
		case 0:
			return 20.75f;
	
		case 1:
			return 10f;
	
		case 2:
			return 14f;
	}

	return 0f;
}

Vector3 func_388() // Hash - 0x9FE1ED2F ^0x9FE1ED2F
{
	switch (func_23())
	{
		case 0:
			return -827.04f, 172.26f, 69.48f;
	
		case 1:
			return -16.98f, -1451.59f, 29.57f;
	
		case 2:
			return 1983.22f, 3820.64f, 31.37f;
	}

	return 0f, 0f, 0f;
}

void func_389() // Hash - 0x842E528C ^0xE35AD155
{
	func_331();
	func_404();

	if (!func_10(&uLocal_107))
		func_472(&uLocal_107);

	if (func_403())
		return;

	if (!func_10(&uLocal_116))
		func_472(&uLocal_116);

	if (func_377() && PED::IS_PED_IN_VEHICLE(pedLocal_96, veLocal_99, false))
	{
		if (VEHICLE::IS_VEHICLE_STOPPED(veLocal_99) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(veLocal_99))
		{
			if (func_396() && !func_386() && !func_395())
			{
				func_394();
			
				if (func_7(&uLocal_116) > 2.5f)
				{
					iLocal_85 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(ENTITY::GET_ENTITY_COORDS(veLocal_99, false), 40f, 40f, 40f, ENTITY::GET_ENTITY_HEADING(veLocal_99), false, 7);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REENABLE_CONTROL_ON_DEATH | 256 | 512);
					func_482(&iLocal_49, 2048);
					iLocal_100 = 0;
					PED::ADD_RELATIONSHIP_GROUP("ProstituteInPlay", &hLocal_307);
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_307, joaat("PLAYER"));
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_96, hLocal_307);
					func_492("Moving into sex state eCurrentProstituteState = PROSTITUTE_CHOOSING_SERVICE ");
					func_5(&iLocal_49, 1024);
					iLocal_304 = -15;
					func_128();
					func_393();
					iLocal_83 = 3;
				
					if (func_48(false, true))
						CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				
					iLocal_295 = 8;
				}
			}
			else
			{
				if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && func_7(&uLocal_107) > 15f && func_392())
				{
					if (!func_491(iLocal_50, 4096))
					{
						func_350(_("Go somewhere more secluded."), -1);
						func_482(&iLocal_50, 4096);
					}
				
					func_391();
					func_40(&uLocal_107);
				}
			
				func_40(&uLocal_116);
			}
		}
		else
		{
			func_40(&uLocal_116);
			func_390();
		}
	}
	else if (!func_386())
	{
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
			if (!PED::IS_PED_INJURED(pedLocal_96))
				TASK::CLEAR_PED_TASKS(pedLocal_96);
	
		func_473(false);
	}

	return;
}

void func_390() // Hash - 0x2F426AE3 ^0x2F426AE3
{
	iLocal_51 = 0;
	uLocal_308[0] = 0;
	uLocal_308[1] = 0;
	uLocal_308[2] = 0;
	uLocal_308[3] = 0;
	return;
}

void func_391() // Hash - 0x77E6767F ^0x950CE7FD
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	if (!AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "HOOKER_SECLUDED", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);

	return;
}

BOOL func_392() // Hash - 0x82B08150 ^0x546FF5EC
{
	if (!func_491(iLocal_51, 256))
		return true;

	return func_491(iLocal_51, 32);
}

void func_393() // Hash - 0x7211395D ^0x33125986
{
	if (func_551())
	{
		PED::SET_PED_CONFIG_FLAG(pedLocal_96, 229, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_96, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_96, 115, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, true);
	}

	return;
}

void func_394() // Hash - 0x28DE4B6C ^0x9962DA5E
{
	Vector3 entityCoords;
	Vector3 offsetFromEntityInWorldCoords;
	float groundZ;
	int materialHash;
	int hit;
	var endCoords;
	var surfaceNormal;
	var entityHit;

	if (!func_491(iLocal_49, 2097152))
	{
		if (MISC::GET_GAME_TIMER() > iLocal_84)
		{
			if (iLocal_100 == 0)
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(veLocal_99, true) };
				MISC::GET_GROUND_Z_FOR_3D_COORD(entityCoords, &groundZ, false, false);
				entityCoords.f_2 = groundZ + 0.15f;
				offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, 0f, 0f, -2f) };
				iLocal_100 = SHAPETEST::START_SHAPE_TEST_CAPSULE(entityCoords, offsetFromEntityInWorldCoords, 2f, 511, veLocal_99, 7);
			}
			else if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iLocal_100, &hit, &endCoords, &surfaceNormal, &materialHash, &entityHit) == 2)
			{
				if (hit != 0)
					if (materialHash == -1447280105 || materialHash == 1925605558 || materialHash == 2128369009)
						func_40(&uLocal_116);
			
				iLocal_84 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_100 = 0;
			}
		}
	}

	return;
}

BOOL func_395() // Hash - 0x5655B48 ^0x41122022
{
	Vehicle vehiclePedIsIn;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, 0, false))
			if (ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				return true;

	return false;
}

BOOL func_396() // Hash - 0x1E411440 ^0xAD034FAF
{
	Entity outPed;
	Vector3 entityCoords;
	var unk3;
	Interior interiorFromEntity;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			veLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	
		if (TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(0), 12f, false) || TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(entityCoords, func_65(1), 12f, false))
			return false;
	
		if (func_402())
			return false;
	
		if (func_401(veLocal_99, &unk3))
			if (!func_400(unk3))
				if (!func_399(entityCoords) || func_398(entityCoords))
					return false;
	
		if (func_90(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f * 0.5f))
			return false;
	
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_96, veLocal_99, 0, false, false))
			return false;
	
		PED::SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(true);
	
		if (PED::GET_CLOSEST_PED(entityCoords, 20f, true, true, &outPed, false, true, -1))
			if (ENTITY::DOES_ENTITY_EXIST(outPed))
				if (!ENTITY::IS_ENTITY_DEAD(outPed, false))
					if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(outPed, veLocal_99, 17))
						return false;
			else
				func_492("NO VEHICLES FOUND");
	
		interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
	
		if (!interiorFromEntity == 0)
		{
			func_492("IN AN INTERIOR");
			return false;
		}
	
		if (func_397())
			return false;
	}

	return true;
}

BOOL func_397() // Hash - 0xF488AA48 ^0xD6D7E828
{
	func_482(&iLocal_51, 256);

	if (!func_491(iLocal_51, 2))
	{
		if (func_379(3))
		{
			func_482(&iLocal_51, 2);
			func_5(&iLocal_51, 32);
		}
	
		return true;
	}
	else
	{
		func_378();
	}

	return false;
}

BOOL func_398(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0x5255688B ^0xF90BBF27
{
	if (SYSTEM::VDIST(vParam0, 491.76f, -515.73f, 29.51f) <= 12f || SYSTEM::VDIST(vParam0, -1453.3849f, -594.2627f, 29.7966f) <= 12f || SYSTEM::VDIST(vParam0, -633.6086f, -332.3337f, 33.81f) <= 25f || SYSTEM::VDIST(vParam0, -1493.1909f, -693.9906f, 26.0665f) <= 25f || SYSTEM::VDIST(vParam0, -1512.938f, -675.6082f, 27.4202f) <= 25f || SYSTEM::VDIST(vParam0, -1388.642f, -1342.2657f, 3.1626f) <= 25f || SYSTEM::VDIST(vParam0, 50.2024f, -1392.3063f, 28.4166f) <= 12f || SYSTEM::VDIST(vParam0, 25.9811f, -1392.2893f, 28.3356f) <= 12f || SYSTEM::VDIST(vParam0, 10.0435f, -1391.5956f, 28.3074f) <= 12f || SYSTEM::VDIST(vParam0, -1196.6f, -519.6772f, 31.9742f) <= 12f)
		return true;

	return false;
}

BOOL func_399(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0x5255688B ^0xF90BBF27
{
	if (SYSTEM::VDIST(vParam0, -1582.7823f, 5168.163f, 18.5615f) <= 15f || SYSTEM::VDIST(vParam0, -1445.7297f, -640.8375f, 28.7804f) <= 15f || SYSTEM::VDIST(vParam0, -348.7544f, 292.5813f, 83.9843f) <= 15f || SYSTEM::VDIST(vParam0, -273f, 317.8898f, 92.2549f) <= 15f || SYSTEM::VDIST(vParam0, -1627.9353f, -1083.4431f, 3.2819f) <= 40f || SYSTEM::VDIST(vParam0, -1661.0979f, -1057.7303f, 2.5729f) <= 40f || SYSTEM::VDIST(vParam0, -1518.3582f, -553.8981f, 32.1463f) <= 15f)
	{
		func_482(&iLocal_49, 2097152);
		return true;
	}

	func_5(&iLocal_49, 2097152);
	return false;
}

BOOL func_400(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0x7C3FFB43 ^0xCF75941E
{
	int nthClosestVehicleNodeId;

	nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 1, 1077936128, 0);
	PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);

	if (PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(nthClosestVehicleNodeId))
	{
		if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
			if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
				return true;
		else if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 56.25f)
			return true;
	}
	else if (!PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(nthClosestVehicleNodeId))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}
	else
	{
		nthClosestVehicleNodeId = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 1, 8, 1077936128, 0);
		PATHFIND::GET_VEHICLE_NODE_POSITION(nthClosestVehicleNodeId, &vParam0);
	
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vParam0) > 400f)
			return true;
	}

	return false;
}

BOOL func_401(Vehicle veParam0, Vector3* pvParam1) // Hash - 0x2A8B0296 ^0x6782012C
{
	var unk;

	unk = 4;
	unk[0 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 2f, 0f, 0f) };
	unk[1 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, -2f, 0f, 0f) };
	unk[2 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, 2f, 0f) };
	unk[3 /*3*/] = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veParam0, 0f, -2f, 0f) };

	if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[0 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[1 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[2 /*3*/], pvParam1, 1077936128, 0))
		return true;
	else if (PATHFIND::GET_CLOSEST_MAJOR_VEHICLE_NODE(unk[3 /*3*/], pvParam1, 1077936128, 0))
		return true;

	return false;
}

BOOL func_402() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_75693;
}

BOOL func_403() // Hash - 0xF2E36A84 ^0xB4D4D249
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CARWASH1")) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CARWASH2")) > 0)
		return true;

	return false;
}

void func_404() // Hash - 0x953E81F5 ^0x953E81F5
{
	if (!func_491(iLocal_49, 128))
	{
		func_405(39, true);
		func_405(40, true);
		func_405(41, true);
		func_405(42, true);
		func_405(43, true);
		func_405(44, true);
		func_482(&iLocal_49, 128);
	}

	return;
}

void func_405(int iParam0, BOOL bParam1) // Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_409(iParam0, 2, true))
			func_408(iParam0, 2, true);
	else if (func_409(iParam0, 2, true))
		func_406(iParam0, 2, true);

	return;
}

void func_406(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0xB2D02435
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_153() == 0)
		{
			address = func_141(func_407(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_138(func_407(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

int func_407(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
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

void func_408(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0x95628DB
{
	int address;

	if (iParam0 == -1)
		return;

	if (bParam2)
	{
		MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
	}
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_153() == 0)
		{
			address = func_141(func_407(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_138(func_407(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_409(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_153() == 0)
			return IS_BIT_SET(func_141(func_407(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

void func_410(var uParam0) // Hash - 0x7AF92B7 ^0x7AF92B7
{
	if (func_491(iLocal_49, 2))
	{
		if (!func_63())
			return;
	
		func_100(1);
	}

	func_68();
	func_542();

	if (func_551())
		func_536(uParam0);

	return;
}

void func_411() // Hash - 0x1D6C6CF0 ^0x9B8F4877
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, PLAYER::PLAYER_PED_ID(), 5f, 5f, 5f, false, true, 0) || func_491(iLocal_49, 8192))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
			PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, false))
			{
				ENTITY::SET_ENTITY_LOD_DIST(pedLocal_96, 50);
				PED::SET_PED_LOD_MULTIPLIER(pedLocal_96, 5f);
			
				if (func_491(iLocal_49, 16))
				{
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);
						func_5(&iLocal_49, 16);
					}
				}
			
				veLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_96, veLocal_99) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_99, false))
					{
						func_492("***** prostitute IN VEHICLE****** ");
					
						if (func_491(iLocal_49, 8))
							if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
								if (func_428(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_PASSENGER"));
								else if (func_427(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_NOAMBIENT_PASSENGER"));
								else if (func_426(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER_PASSENGER"));
								else if (func_425(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_LOWRIDER2_PASSENGER"));
								else if (func_424(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_INFERNUS2_PASSENGER"));
								else if (func_423(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_SC1_PASSENGER"));
								else if (func_422(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_TEZERACT_PASSENGER"));
								else if (func_421(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_DOMINATOR3_PASSENGER"));
								else if (func_420(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ITALIGTO_PASSENGER"));
								else if (func_419(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_RESTRICTED_SCHLAGEN_PASSENGER"));
								else if (func_418(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_NEO_PASSENGER"));
								else if (func_417(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PEYOTE2_PASSENGER"));
								else if (func_416(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZR350_PASSENGER"));
								else if (func_415(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_IGNUS_PASSENGER"));
								else if (func_414(veLocal_99))
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_ZENO_PASSENGER"));
								else
									PED::SET_PED_IN_VEHICLE_CONTEXT(pedLocal_96, MISC::GET_HASH_KEY("MINI_PROSTITUTE_LOW_PASSENGER"));
					
						if (func_551())
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, false, false);
						else
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, true, true);
					
						func_182(pedLocal_96, 0);
						func_391();
						iLocal_64 = MISC::GET_GAME_TIMER();
						func_40(&uLocal_107);
						iLocal_295 = 7;
					}
					else
					{
						func_492("SOMETHINGS GONE WRONGWITH PROS GETTING INTO VEHICLE , either her or player");
					}
				}
			}
			else
			{
				if (func_413(pedLocal_96, PLAYER::PLAYER_PED_ID(), true) > 11f || func_412(20f) || !PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_99, false))
				{
					func_115(&uLocal_113);
				
					if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, false))
					{
						TASK::CLEAR_PED_TASKS(pedLocal_96);
						func_473(false);
						func_492("PROS FINISHED SEQUENCE TASK BUT NOT IN VEHICLE");
						func_96(15);
					}
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false))
					{
						veLocal_99 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					}
					else if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_96, veLocal_99, 0, false, false))
					{
						if (!func_112())
						{
							if (!func_491(iLocal_75, 1))
							{
								func_40(&uLocal_119);
								func_482(&iLocal_75, 1);
							}
							else if (func_7(&uLocal_119) > 20f)
							{
								func_126();
								func_492("prostitute couldn't get into the car");
								iLocal_295 = 6;
							}
						}
					}
				}
			}
		}
		else if (!func_491(iLocal_75, 1))
		{
			func_492("PLAYER out of range for entering VEHICLE or wanted level");
			TASK::CLEAR_PED_TASKS(pedLocal_96);
			func_96(15);
		}
	}

	return;
}

BOOL func_412(float fParam0) // Hash - 0x1CA19BA0 ^0x1CA19BA0
{
	if (!func_10(&uLocal_113))
		func_40(&uLocal_113);

	return func_121(&uLocal_113) > fParam0;
}

float func_413(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
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

BOOL func_414(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ZENO"):
				return true;
		}
	}

	return false;
}

BOOL func_415(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_IGNUS"):
				return true;
		}
	}

	return false;
}

BOOL func_416(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ZR350"):
				return true;
		}
	}

	return false;
}

BOOL func_417(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_PEYOTE2"):
				return true;
		}
	}

	return false;
}

BOOL func_418(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_NEO"):
				return true;
		}
	}

	return false;
}

BOOL func_419(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_RESTRICTED_SCHLAGEN"):
				return true;
		}
	}

	return false;
}

BOOL func_420(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_ITALIGTO"):
				return true;
		}
	}

	return false;
}

BOOL func_421(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_DOMINATOR3"):
				return true;
		}
	}

	return false;
}

BOOL func_422(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_TEZERACT"):
			case joaat("LAYOUT_LOW_TAIPAN"):
				return true;
		}
	}

	return false;
}

BOOL func_423(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_SC1"):
				return true;
		}
	}

	return false;
}

BOOL func_424(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS2"):
				return true;
		}
	}

	return false;
}

BOOL func_425(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER2"):
			case joaat("LAYOUT_LOW_LOWRIDER2_FACTION3"):
				return true;
		}
	}

	return false;
}

BOOL func_426(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_LOWRIDER"):
			case joaat("LAYOUT_LOW_LOWRIDER_FACTION"):
				return true;
		}
	}

	return false;
}

BOOL func_427(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_CHEETAH"):
			case joaat("LAYOUT_LOW_ENTITYXF"):
			case joaat("LAYOUT_LOW_LE7B"):
				return true;
		}
	}

	return false;
}

BOOL func_428(Vehicle veParam0) // Hash - 0xC8D7C0BB ^0x33A5BB18
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (VEHICLE::GET_VEHICLE_LAYOUT_HASH(veParam0))
		{
			case joaat("LAYOUT_LOW_INFERNUS"):
			case joaat("LAYOUT_LOW_RESTRICTED"):
			case joaat("LAYOUT_LOW_OSIRIS"):
			case joaat("LAYOUT_LOW_FELTZER3"):
			case joaat("LAYOUT_LOW_VERLIERER"):
			case joaat("LAYOUT_LOW_RUINER2"):
			case joaat("LAYOUT_LOW_TORERO"):
			case joaat("LAYOUT_LOW_MICHELLI"):
			case joaat("LAYOUT_LOW_RESTRICTED_GAUNTLET3"):
			case joaat("LAYOUT_LOW_RESTRICTED_DOMINATOR8"):
			case joaat("LAYOUT_LOW_RESTRICTED_EUROS"):
			case joaat("LAYOUT_LOW_RESTRICTED_RT3000"):
			case joaat("LAYOUT_LOW_RESTRICTED_POSTLUDE"):
			case joaat("LAYOUT_LOW_RESTRICTED_TENF2"):
			case joaat("LAYOUT_LOW_CORSITA"):
			case joaat("LAYOUT_LOW_TORERO2"):
				return true;
		}
	}

	return false;
}

void func_429(var uParam0) // Hash - 0x5C13DDCE ^0xB059F5B9
{
	int scriptTaskStatus;

	if (!func_438(false))
		return;

	if (!func_491(iLocal_49, 16))
	{
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), false);
		func_482(&iLocal_49, 16);
	}

	if (!func_10(&uLocal_113))
		func_472(&uLocal_113);

	if (func_121(&uLocal_113) >= 20f || !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0))
	{
		if (func_491(iLocal_75, 524288))
		{
			func_115(&uLocal_113);
			iLocal_295 = 6;
		}
		else if (func_437())
		{
			func_40(&uLocal_113);
			func_482(&iLocal_75, 524288);
		}
	}

	func_69(pedLocal_96);

	if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, PLAYER::PLAYER_PED_ID(), 3f, 3f, 3f, false, true, 0) || func_491(iLocal_75, 1) && !func_217(0) && !func_402())
	{
		if (!VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(pedLocal_96, veLocal_99, 0, false, false))
		{
			if (!func_112())
			{
				if (!func_491(iLocal_75, 1))
				{
					func_40(&uLocal_119);
					func_482(&iLocal_75, 1);
				}
				else if (func_7(&uLocal_119) > 10f)
				{
					func_68();
					TASK::CLEAR_PED_TASKS(pedLocal_96);
					func_492("prostitute couldn't get into the car");
					iLocal_295 = 6;
				}
			}
		}
		else
		{
			func_430();
		}
	}
	else if (func_470(_("Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.")))
	{
		func_5(&iLocal_49, 1048576);
		func_468();
	
		if (func_551())
		{
			scriptTaskStatus = TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PLAY_ANIM);
		
			if (scriptTaskStatus != 1 && scriptTaskStatus != 0)
			{
				func_542();
				func_536(uParam0);
			}
		}
	}

	return;
}

void func_430() // Hash - 0x983253E4 ^0xB0716107
{
	var unk;

	if (iLocal_295 != 5 && func_363(&unk, 0))
	{
		func_433();
	
		if (func_431(iLocal_74, true) || PLAYER::IS_PLAYER_PRESSING_HORN(PLAYER::PLAYER_ID()))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_REQUEST", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_49, 8192);
			func_40(&uLocal_113);
		}
	
		if (func_491(iLocal_49, 8192))
		{
			func_468();
			Global_32315 = true;
			Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_431 = 1;
			func_131("PROSTITUTES_SOLICIT_SCENE");
			func_87("PROSTITUTES_DRIVE_SCENE");
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_ENTER_VEHICLE) != 1 && !PED::IS_PED_IN_VEHICLE(pedLocal_96, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true))
					TASK::TASK_ENTER_VEHICLE(pedLocal_96, veLocal_99, -1, 0, 1f, 8388609, 0);
		
			sLocal_63 = func_50(PLAYER::PLAYER_PED_ID(), true, false);
			STREAMING::REQUEST_ANIM_DICT(sLocal_63);
			sLocal_63 = func_50(PLAYER::PLAYER_PED_ID(), false, true);
			STREAMING::REQUEST_ANIM_DICT(sLocal_63);
			func_40(&uLocal_107);
			iLocal_295 = 5;
		}
	}

	return;
}

BOOL func_431(int iParam0, BOOL bParam1) // Hash - 0x4A8989C7 ^0xE051D46E
{
	int num;

	num = func_432(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_217(0))
		return false;

	if (CUTSCENE::IS_CUTSCENE_PLAYING())
		return false;

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/] == true && Global_44000[num /*32*/].f_4 == 1)
		{
			if (bParam1)
				if (Global_44000[num /*32*/].f_29)
					return false;
		
			Global_44000[num /*32*/].f_5 = 1;
			Global_44000[num /*32*/].f_29 = 1;
			return true;
		}
		else
		{
			Global_44000[num /*32*/] == false;
			Global_44000[num /*32*/].f_7;
		}
	}

	return false;
}

int func_432(int iParam0) // Hash - 0x7F0E29AD ^0x84091235
{
	int i;

	if (iParam0 < 0)
		return -1;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (Global_44000[i /*32*/].f_1 == iParam0)
			return i;
	}

	return -1;
}

void func_433() // Hash - 0x9F317D2 ^0xAAB17E7A
{
	if (Global_32315)
	{
		if (HUD::IS_PAUSE_MENU_ACTIVE())
			return;
	
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_ROOF, true);
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HEADLIGHT, true);
		PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
	
		if (!func_491(iLocal_49, 8192))
			if (iLocal_74 == -1)
				func_435(&iLocal_74, 5, _("Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle."), 0, 0, 0, 0);
	}
	else if (func_434(iLocal_74, 0))
	{
		func_468();
	}

	return;
}

BOOL func_434(int iParam0, int iParam1) // Hash - 0xE0A68A62 ^0x97FB55A0
{
	int num;
	BOOL flag;

	num = func_432(iParam0);

	if (iParam1 == 0)
		if (num == -1)
			return false;
	else
		num = iParam0;

	if (num < 0)
		return false;

	if (Global_44000[num /*32*/].f_6)
		return false;

	flag = false;

	if (!Global_44000[num /*32*/].f_12)
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44000[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44195);
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}
	else
	{
		HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(&(Global_44000[num /*32*/].f_8));
		HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_44195);
	
		if (Global_44000[num /*32*/].f_30)
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_44000[num /*32*/].f_13));
		else
			HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_44000[num /*32*/].f_13));
	
		flag = HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
	}

	return flag;
}

void func_435(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Hash - 0xC67F23A2 ^0xEFF6309F
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("CONTEXT_CONTROLLER")) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
			func_436(uParam0);
	
		return;
	}

	if (!*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < 6; i = i + 1)
	{
		if (!Global_44000[i /*32*/])
		{
			Global_44000[i /*32*/] = true;
			Global_44000[i /*32*/].f_1 = Global_44201;
			Global_44201 = Global_44201 + 1;
			Global_44000[i /*32*/].f_4 = 0;
			Global_44000[i /*32*/].f_29 = 0;
			Global_44000[i /*32*/].f_5 = 0;
			Global_44000[i /*32*/].f_2 = iParam1;
			TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
			Global_44000[i /*32*/].f_6 = iParam3;
			Global_44000[i /*32*/].f_31 = SCRIPT::GET_ID_OF_THIS_THREAD();
			Global_44000[i /*32*/].f_7 = 0;
			Global_44000[i /*32*/].f_3 = iParam5;
		
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
			{
				Global_44000[i /*32*/].f_12 = 1;
				TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
				Global_44000[i /*32*/].f_30 = iParam6;
			}
			else
			{
				Global_44000[i /*32*/].f_12 = 0;
				Global_44000[i /*32*/].f_30 = 0;
			}
		
			*uParam0 = Global_44000[i /*32*/].f_1;
			return;
		}
	}

	return;
}

void func_436(var uParam0) // Hash - 0xFE5630E8 ^0xFE5630E8
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_432(*uParam0);

	if (num == -1)
	{
		*uParam0 = -1;
		return;
	}

	if (num > -1 && num < 6)
	{
		if (Global_44000[num /*32*/])
		{
			Global_44000[num /*32*/].f_7 = 1;
			*uParam0 = -1;
			return;
		}
	}

	*uParam0 = -1;
	return;
}

BOOL func_437() // Hash - 0x90D9BFE3 ^0x618EBDB2
{
	int randomIntInRange;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_96) || PED::IS_PED_INJURED(pedLocal_96))
		return true;

	if (!func_551())
	{
		func_68();
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, true))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
		}
		else if (func_491(iLocal_49, 4194304))
		{
			randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
			TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(5), 2f, -2f, -1, 0, 0, false, false, false);
			TASK::TASK_PLAY_ANIM(0, func_67(iLocal_293), func_66(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
			TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
			TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, taskSequenceId);
			TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		}
	
		return true;
	}

	if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, true))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
		{
			TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
			return true;
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			return false;
		}
	}

	switch (iLocal_55)
	{
		case 0:
			if (func_491(iLocal_49, 4194304))
			{
				func_68();
				iLocal_55 = 1;
			}
			break;
	
		case 1:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(5), 2f, -2f, -1, 0, 0, false, false, false);
				iLocal_55 = 2;
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
			break;
	
		case 2:
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PLAY_ANIM) == 7)
				{
					randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(8, 11);
					TASK::TASK_PLAY_ANIM(pedLocal_96, func_67(iLocal_293), func_66(randomIntInRange), 8f, -8f, -1, 1, 0, false, false, false);
					iLocal_55 = 3;
				}
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
			break;
	
		case 3:
			iLocal_55 = 0;
			return true;
	}

	return false;
}

BOOL func_438(BOOL bParam0) // Hash - 0x4401AA8 ^0xE2619174
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
		return false;

	func_491(iLocal_49, 8192);

	if (func_413(pedLocal_96, PLAYER::PLAYER_PED_ID(), true) > 11f)
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (func_551())
		if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, true) > 1)
			return false;

	if (bParam0)
		if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 2f)
			return false;

	if (func_90(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true), 1106247680))
	{
		if (!func_491(iLocal_50, 8192) && !PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		{
			func_350(_("Prostitutes will ignore you if police are nearby."), -1);
			func_482(&iLocal_50, 8192);
		}
	
		return false;
	}

	if (!func_377())
	{
		if (!func_551())
		{
			if (!bLocal_88 && !Global_112695 && func_440(PLAYER::PLAYER_PED_ID(), false) == -1)
			{
				func_350(_("You cannot pick up Prostitutes in this vehicle."), -1);
				bLocal_88 = true;
			}
		
			func_439();
		}
		else if (!func_524(4096))
		{
			func_350(_("You cannot pick up Prostitutes in this vehicle."), -1);
			func_196(4096);
		}
	
		return false;
	}

	return true;
}

void func_439() // Hash - 0xD0953BE2 ^0xB4DC3A5E
{
	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	if (!func_491(iLocal_49, 1))
	{
		if (!AUDIO::IS_ANY_SPEECH_PLAYING(PLAYER::PLAYER_PED_ID()) && !AUDIO::IS_ANY_SPEECH_PLAYING(pedLocal_96))
		{
			AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(PLAYER::PLAYER_PED_ID(), "HOOKER_CAR_INCORRECT", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", 1);
			func_482(&iLocal_49, 1);
		}
	}

	return;
}

int func_440(Ped pedParam0, BOOL bParam1) // Hash - 0x4E1330D6 ^0x886EF094
{
	Vehicle vehiclePedIsIn;
	int vehicleModelNumberOfSeats;
	int i;
	int seatIndex;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, bParam1);
		
			if (ENTITY::DOES_ENTITY_EXIST(vehiclePedIsIn))
			{
				vehicleModelNumberOfSeats = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn));
			
				if (vehicleModelNumberOfSeats == 1)
				{
					seatIndex = -1;
					return seatIndex;
				}
			
				for (i = 0; i < vehicleModelNumberOfSeats; i = i + 1)
				{
					seatIndex = i - 1;
				
					if (!VEHICLE::IS_VEHICLE_SEAT_FREE(vehiclePedIsIn, seatIndex, false))
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, seatIndex, false) == pedParam0)
							return seatIndex;
				}
			}
		}
	}

	return seatIndex;
}

void func_441() // Hash - 0x3CB85060 ^0xCA54EFBF
{
	if (func_438(false))
	{
		func_430();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 && !func_491(iLocal_49, 8192))
		{
			if (func_72(true))
			{
				func_115(&uLocal_113);
				iLocal_64 = MISC::GET_GAME_TIMER();
				func_492("prostitute proposition player VEHICLE");
				iLocal_295 = 4;
			}
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_96);
		func_96(15);
	}

	return;
}

void func_442(var uParam0) // Hash - 0xCB356D5B ^0xCCEC79D2
{
	if (func_438(false))
	{
		func_430();
	
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_PERFORM_SEQUENCE) == 7 || func_491(iLocal_49, 8192))
		{
			iLocal_295 = 3;
		}
		else if (func_412(20f))
		{
			func_115(&uLocal_113);
			func_473(false);
		}
		else
		{
			func_443(uParam0);
		}
	}
	else
	{
		TASK::CLEAR_PED_TASKS(pedLocal_96);
		func_96(15);
	}

	return;
}

void func_443(var uParam0) // Hash - 0xB5671A2B ^0x173D0411
{
	float num;
	var maximum;
	var minimum;
	float offsetFromEntityInWorldCoords;
	Vector3 offsetFromEntityInWorldCoords2;
	Vector3 entityCoords;
	int taskSequenceId;

	if (!ENTITY::DOES_ENTITY_EXIST(veLocal_99))
		return;

	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(veLocal_99), &minimum, &maximum);
	num = { maximum - minimum };
	num = { num / { 2f, 2f, 2f } };
	offsetFromEntityInWorldCoords = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, -(num + 0.2f), 0f, 0f) };
	offsetFromEntityInWorldCoords2 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_99, num + 0.2f, 0f, 0f) };
	entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };

	if (SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords2) < SYSTEM::VDIST(entityCoords, offsetFromEntityInWorldCoords))
		offsetFromEntityInWorldCoords = { offsetFromEntityInWorldCoords2 };

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_ENTER_VEHICLE) != 1 || !func_491(iLocal_49, 8192) && SYSTEM::VDIST2(uLocal_93, offsetFromEntityInWorldCoords) > 0f)
	{
		if (func_551())
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_96))
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, false, true);
		
			func_453(&uLocal_287, func_67(iLocal_293));
			func_447(uParam0, true);
			func_444(&uLocal_287, uParam0);
		}
	
		TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, offsetFromEntityInWorldCoords, offsetFromEntityInWorldCoords.f_1, offsetFromEntityInWorldCoords.f_2, 1f, -1, 1f, 8192, 1193033728);
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 31086, 0f, 0f, 0f), 0);
		TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
		TASK::TASK_PERFORM_SEQUENCE(pedLocal_96, taskSequenceId);
		TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
		uLocal_93 = { offsetFromEntityInWorldCoords };
	}

	return;
}

void func_444(var uParam0, var uParam1) // Hash - 0xDB1C9B33 ^0x4B5BFC5
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			func_445(uParam1, uParam0->[i]);
	}

	return;
}

void func_445(var uParam0, const char* sParam1) // Hash - 0xEEA0A797 ^0xEEA0A797
{
	func_446(uParam0, 1, -1, sParam1, 0);
	return;
}

void func_446(var uParam0, int iParam1, int iParam2, const char* sParam3, int iParam4) // Hash - 0x1EECD4C7 ^0x1EECD4C7
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (IS_BIT_SET(uParam0->[i /*18*/], iParam1))
			{
				if (iParam2 != -1)
					if (uParam0->[i /*18*/].f_1 == iParam2)
						return;
			
				if (iParam1 != 4)
					if (!MISC::ARE_STRINGS_EQUAL(sParam3, "NULL"))
						if (MISC::ARE_STRINGS_EQUAL(&(uParam0->[i /*18*/].f_2), sParam3))
							return;
			
				if (iParam1 == 9)
					return;
			}
		}
	}

	if (!uParam0->f_271)
		uParam0->f_271 = 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (!IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			TEXT_LABEL_ASSIGN_STRING(&(uParam0->[i /*18*/].f_2), sParam3, 64);
			uParam0->[i /*18*/].f_1 = iParam2;
			uParam0->[i /*18*/] = iParam4;
			MISC::SET_BIT(&uParam0->[i /*18*/], iParam1);
			MISC::SET_BIT(&uParam0->[i /*18*/], 30);
			return;
		}
	}

	return;
}

void func_447(var uParam0, BOOL bParam1) // Hash - 0xA2C979D7 ^0xA2C979D7
{
	int i;

	if (!bParam1)
		func_449(uParam0);

	for (i = 0; i < 15; i = i + 1)
	{
		func_448(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 0;
	uParam0->f_272 = -1;
	uParam0->f_273 = 1;
	return;
}

void func_448(var uParam0) // Hash - 0xF945F393 ^0x417057A1
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_2), "NULL", 64);
	return;
}

void func_449(var uParam0) // Hash - 0x74F4F0FB ^0x74F4F0FB
{
	int i;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
			func_450(&uParam0->[i /*18*/]);
	}

	uParam0->f_271 = 1;
	return;
}

void func_450(var uParam0) // Hash - 0x700CF0BD ^0x203ACD8D
{
	func_451(*uParam0, &(uParam0->f_2), uParam0->f_1);
	return;
}

void func_451(int iParam0, const char* sParam1, Hash hParam2) // Hash - 0x2AE0929C ^0x571E5810
{
	if (IS_BIT_SET(iParam0, 30))
	{
		switch (func_452(iParam0))
		{
			case 0:
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hParam2);
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
				VEHICLE::REMOVE_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REMOVE_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
				break;
		
			case 7:
				SCRIPT::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(hParam2);
				break;
		
			case 8:
				HUD::CLEAR_ADDITIONAL_TEXT(hParam2, IS_BIT_SET(iParam0, 26));
				break;
		
			case 9:
				STREAMING::REMOVE_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	}

	return;
}

int func_452(int iParam0) // Hash - 0x3A85B246 ^0x3A85B246
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		if (IS_BIT_SET(iParam0, i))
			return i;
	}

	return -1;
}

int func_453(var uParam0, char* sParam1) // Hash - 0xD73D4D34 ^0xF4218F95
{
	int i;
	int num;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (!MISC::IS_STRING_NULL(uParam0->[i]))
			if (MISC::ARE_STRINGS_EQUAL(uParam0->[i], sParam1))
				return 0;
	}

	num = func_454(uParam0);

	if (num < 0 || num >= *uParam0)
		return 0;

	uParam0->[num] = sParam1;
	return 1;
}

int func_454(var uParam0) // Hash - 0xF48C4DAE ^0xF7468BD3
{
	int i;

	for (i = 0; i < *uParam0; i = i + 1)
	{
		if (MISC::IS_STRING_NULL(uParam0->[i]))
			return i;
	}

	return -1;
}

void func_455(var uParam0) // Hash - 0xAD7D2B3A ^0x27CEB6C6
{
	var string1;

	if (func_438(true))
	{
		if (!func_10(&uLocal_113))
			func_472(&uLocal_113);
	
		func_482(&iLocal_49, 4);
		Global_32316 = 1;
		func_430();
	
		if (func_471(&uLocal_113, 2f) || func_491(iLocal_49, 8192))
		{
			func_482(&iLocal_49, 2);
		
			if (func_363(&string1, 0))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), false);
				TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_96, -1, SLF_WHILE_NOT_IN_FOV, 4);
				func_443(uParam0);
				func_482(&iLocal_49, 4);
				Global_32315 = true;
				Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_431 = 1;
				iLocal_295 = 2;
			}
			else
			{
				if (MISC::ARE_STRINGS_EQUAL(func_467(&string1), _("Not available while a key player in a Freemode Event.")))
				{
					func_466(&string1, 30000);
					func_464(true);
				}
				else
				{
					func_350(&string1, -1);
				}
			
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&string1) && MISC::ARE_STRINGS_EQUAL(&string1, _("You need more cash to pick up a prostitute.")))
					func_456();
			
				func_96(0);
				iLocal_296 = 0;
				func_482(&iLocal_49, 8388608);
				func_5(&iLocal_49, 4);
				Global_32315 = false;
				Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_431 = 0;
			}
		}
	}
	else
	{
		func_5(&iLocal_49, 4);
		Global_32316 = 0;
	}

	return;
}

void func_456() // Hash - 0xB70A6F95 ^0xB70A6F95
{
	if (!func_524(64))
	{
		func_457(false, 31, 5);
		func_196(64);
	}

	return;
}

void func_457(BOOL bParam0, int iParam1, int iParam2) // Hash - 0xC641E830 ^0x727B8684
{
	int instructionalKey;

	if (!NETWORK::IS_STORE_AVAILABLE_TO_USER())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && func_461(PLAYER::PLAYER_ID(), true, false))
		return;

	if (PAD::IS_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE) || PAD::IS_DISABLED_CONTROL_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_PAUSE))
		return;

	if (HUD::GET_PAUSE_MENU_STATE() != 0)
		return;

	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return;

	if (PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED())
		return;

	if (HUD::IS_WARNING_MESSAGE_ACTIVE())
		return;

	if (func_460())
		return;

	if (!func_458())
		return;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || bParam0)
	{
		if (!Global_100733.f_1474 && !NETWORK::IS_COMMERCE_STORE_OPEN())
		{
			instructionalKey = 18;
			HUD::SET_WARNING_MESSAGE_WITH_HEADER(_("Alert"), _("You have insufficient funds. You can add GTA Dollars to your in-game account."), instructionalKey, _("Would you like to visit the Store?"), false, -1, 0, 0, true, 0);
			Global_2695712 = iParam1;
			Global_100733.f_1474 = 1;
			Global_100733.f_1475 = iParam2;
		}
	}

	return;
}

BOOL func_458() // Hash - 0x1C9B9817 ^0x5956764E
{
	if (func_459())
		return false;

	if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE() == false)
		return false;

	return true;
}

BOOL func_459() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2695031;
}

BOOL func_460() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_2695819;
}

BOOL func_461(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x326C99FC ^0x326C99FC
{
	if (bParam1)
		if (func_462(plParam0))
			return true;

	!bParam2;

	if (Global_1853910[plParam0 /*862*/] == -1)
		return false;

	return true;
}

BOOL func_462(Player plParam0) // Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_463(plParam0);
}

BOOL func_463(Player plParam0) // Hash - 0x1ACBF981 ^0x51A073B
{
	return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_11.f_1, 0);
}

void func_464(BOOL bParam0) // Hash - 0x89F96F99 ^0xD800904E
{
	HUD::SET_HELP_MESSAGE_STYLE(3, 21, 200, 0, 0);

	if (bParam0 && !func_465())
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Event_Message_Purple", "GTAO_FM_Events_Soundset", false);

	return;
}

BOOL func_465() // Hash - 0xD30DED2E ^0xF6A4A60A
{
	return Global_2672505.f_2513[0 /*80*/].f_1 != 0;
}

void func_466(const char* sParam0, int iParam1) // Hash - 0x3468CBBD ^0x5F388E6D
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, false, iParam1);
	return;
}

const char* func_467(const char* sParam0) // Hash - 0xC9D82232 ^0xC9D82232
{
	return sParam0;
}

void func_468() // Hash - 0xF6293AD8 ^0xF6293AD8
{
	if (iLocal_74 != -1)
		func_436(&iLocal_74);

	return;
}

void func_469(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

BOOL func_470(char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_471(int* piParam0, float fParam1) // Hash - 0xBBD67703 ^0xBBD67703
{
	if (func_225(piParam0, fParam1))
	{
		func_115(piParam0);
		return true;
	}

	return false;
}

void func_472(int* piParam0) // Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_10(piParam0))
		func_40(piParam0);

	return;
}

void func_473(BOOL bParam0) // Hash - 0x4633E968 ^0x4633E968
{
	BOOL flag;

	func_126();

	if (bParam0 || iLocal_72 == 0)
	{
		flag = true;
	
		if (func_551())
			flag = false;
	
		func_106(flag);
		func_96(14);
	}
	else
	{
		func_106(false);
		func_96(15);
	}

	return;
}

int func_474() // Hash - 0xD828AF7 ^0xA57329A3
{
	if (func_481() || func_480() || func_479() || func_478() || func_475() || Global_2625211 || Global_2625211.f_1 != 0)
		return 1;

	return 0;
}

BOOL func_475() // Hash - 0x15FDCA79 ^0x80F5026D
{
	if (func_477() || func_476())
		return Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_95 == 8;

	return false;
}

BOOL func_476() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_735;
}

BOOL func_477() // Hash - 0xEDAE0057 ^0x5A1A7786
{
	return IS_BIT_SET(Global_2683862.f_2, 11);
}

BOOL func_478() // Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_2683862, 5);
}

BOOL func_479() // Hash - 0x70FF297D ^0x70FF297D
{
	return IS_BIT_SET(Global_2683862, 2);
}

BOOL func_480() // Hash - 0x7BB65268 ^0x7BB65268
{
	return IS_BIT_SET(Global_2683862, 20);
}

BOOL func_481() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_698;
}

void func_482(var uParam0, int iParam1) // Hash - 0xF55E891F ^0xF55E891F
{
	func_483(uParam0, iParam1);
	return;
}

void func_483(var uParam0, int iParam1) // Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*uParam0 = *uParam0 || iParam1;
	return;
}

BOOL func_484() // Hash - 0xAFEA57B5 ^0xAFEA57B5
{
	if (Global_32317)
		return false;

	if (func_551())
		return false;

	if (!func_488())
		return false;

	if (func_485())
	{
		iLocal_296 = 4;
		return true;
	}

	return false;
}

BOOL func_485() // Hash - 0x8B2EF917 ^0xA2B2BCA2
{
	Hash entityModel;

	veLocal_98 = VEHICLE::GET_RANDOM_VEHICLE_IN_SPHERE(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true), 15f, 0, 6);

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_98) && !ENTITY::IS_ENTITY_DEAD(veLocal_98, false))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_98, false))
		{
			if (func_91(&veLocal_98) && !func_487(veLocal_98, true))
			{
				pedLocal_97 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veLocal_98, -1, false);
			
				if (!pedLocal_97 == 0)
				{
					if (func_486(&pedLocal_97))
					{
						entityModel = ENTITY::GET_ENTITY_MODEL(veLocal_98);
					
						if (!entityModel == joaat("TAXI") && !entityModel == joaat("TAXI"))
						{
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_97))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_97, true, false);
						
							if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(veLocal_98))
								ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_98, true, false);
						
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_97, true);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(pedLocal_97, false, 1);
							ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(veLocal_98, false, 1);
							return true;
						}
					}
				}
			}
		}
	}

	veLocal_98 = 0;
	pedLocal_97 = 0;
	return false;
}

BOOL func_486(var uParam0) // Hash - 0x6405D0A5 ^0x594CB2D4
{
	if (!PED::IS_PED_INJURED(*uParam0))
		if (PED::IS_PED_MALE(*uParam0))
			return true;

	return false;
}

BOOL func_487(Vehicle veParam0, BOOL bParam1) // Hash - 0x1540FA4C ^0xC1D4FE05
{
	if (Global_78558)
		if (ENTITY::DOES_ENTITY_EXIST(veParam0) && !bParam1 || VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (DECORATOR::DECOR_EXIST_ON(veParam0, _("Company SUV")))
				return true;

	return false;
}

BOOL func_488() // Hash - 0x5DCC040B ^0xAECF049D
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) || ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
		return false;

	return true;
}

BOOL func_489() // Hash - 0x1791E386 ^0x98A3792E
{
	if (!func_488() || !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) || func_491(iLocal_49, 4096))
		return false;

	if (func_491(iLocal_49, 32))
	{
		iLocal_296 = 2;
		func_100(2);
		func_492("IS_CUSTOMER_A_PLAYER is TRUE");
		return true;
	}

	return false;
}

void func_490() // Hash - 0xD68305F1 ^0x2098DCB4
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_96))
		{
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_SMART_FLEE_PED) != 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, false);
				PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_96, 196628, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(pedLocal_96);
				TASK::TASK_SMART_FLEE_PED(pedLocal_96, PLAYER::PLAYER_PED_ID(), 300f, -1, true, false);
				PED::SET_PED_KEEP_TASK(pedLocal_96, true);
				func_96(15);
			}
		}
	}

	return;
}

BOOL func_491(int iParam0, int iParam1) // Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_492(char* sParam0) // Hash - 0xB22D5C46 ^0xB22D5C46
{
	return;
}

BOOL func_493() // Hash - 0xB20CF858 ^0x2F46F88E
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return false;

	if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_ANY) == 1)
		return false;

	if (PED::IS_PED_USING_ANY_SCENARIO(pedLocal_96))
		return false;

	return true;
}

BOOL func_494() // Hash - 0x2D08A7C ^0x3AFC38CD
{
	switch (iLocal_300)
	{
		case 0:
			if (!func_551())
			{
				func_453(&uLocal_287, func_67(iLocal_293));
				func_444(&uLocal_287, &uLocal_391);
				func_492("Moving to PROSTITUTE_INIT_STREAMING");
			}
		
			if (func_551())
			{
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
			}
		
			iLocal_300 = 1;
			break;
	
		case 1:
			if (!func_551())
			{
				if (func_495(&uLocal_391))
				{
					func_482(&iLocal_49, 4194304);
					func_492("Moving to PROSTITUTE_INIT_INIT");
					iLocal_300 = 2;
				}
			}
			else if (func_551())
			{
				func_482(&iLocal_49, 4194304);
				func_492("Moving to PROSTITUTE_INIT_INIT");
				iLocal_300 = 2;
			}
			break;
	
		case 2:
			iLocal_297 = 0;
			iLocal_69 = iLocal_297;
			func_5(&iLocal_49, 512);
			func_5(&iLocal_49, 1024);
			iLocal_296 = 0;
			pedLocal_97 = 0;
			veLocal_98 = 0;
			func_492("Moving to PROSTITUTE_INIT_COMPLETE");
			iLocal_300 = 3;
			break;
	
		case 3:
			if (!PED::IS_PED_INJURED(pedLocal_96))
			{
				if (!func_551())
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, false);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_96, false);
					func_469(&uLocal_122, 4, pedLocal_96, "Prostitutes", 0, 1);
					return true;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedLocal_96);
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, false);
					func_469(&uLocal_122, 4, pedLocal_96, "Prostitutes", 0, 1);
					PED::SET_PED_CAN_EVASIVE_DIVE(pedLocal_96, false);
					PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(pedLocal_96);
					return true;
				}
			}
			break;
	}

	return false;
}

BOOL func_495(var uParam0) // Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_496(uParam0);
}

BOOL func_496(var uParam0) // Hash - 0x4A1C6408 ^0x4A1C6408
{
	int i;

	if (!uParam0->f_271)
		return 1;

	for (i = 0; i < 15; i = i + 1)
	{
		if (IS_BIT_SET(uParam0->[i /*18*/], 30))
		{
			if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
				return 0;
		
			if (!func_497(&uParam0->[i /*18*/]))
				return 0;
		}
	}

	uParam0->f_271 = 0;
	return 1;
}

BOOL func_497(var uParam0) // Hash - 0x5F04044A ^0x85C2A33D
{
	return func_498(*uParam0, &(uParam0->f_2), uParam0->f_1);
}

BOOL func_498(int iParam0, const char* sParam1, Hash hParam2) // Hash - 0x8008FEBF ^0xF0538B20
{
	if (IS_BIT_SET(iParam0, 30))
	{
		if (IS_BIT_SET(iParam0, 29))
		{
			switch (func_452(iParam0))
			{
				case 0:
					return STREAMING::HAS_MODEL_LOADED(hParam2);
			
				case 1:
					return STREAMING::HAS_ANIM_DICT_LOADED(sParam1);
			
				case 2:
					return STREAMING::HAS_CLIP_SET_LOADED(sParam1);
			
				case 3:
					return GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sParam1);
			
				case 4:
					return VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(hParam2, sParam1);
			
				case 5:
					return TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1);
			
				case 6:
					return AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(iParam0, 27), -1);
			
				case 7:
					return SCRIPT::HAS_SCRIPT_WITH_NAME_HASH_LOADED(hParam2);
			
				case 8:
					return HUD::HAS_ADDITIONAL_TEXT_LOADED(hParam2);
			
				case 9:
					return STREAMING::HAS_PTFX_ASSET_LOADED();
			
				default:
					break;
			}
		}
		else
		{
			return false;
		}
	}

	return false;
}

BOOL func_499() // Hash - 0x7D8B90BC ^0xAA7C44E1
{
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (func_23() == 0)
		{
			if (func_500(pedLocal_96, 537.0014f, 119.0252f, 96.0997f, true) <= 8f)
			{
				if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(pedLocal_96, true))
					if (func_551())
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, false, false);
					else
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, true, true);
			
				return true;
			}
		}
	}

	return false;
}

float func_500(Ped pedParam0, float fParam1, float fParam2, float fParam3, BOOL bParam4) // Hash - 0xC22B942A ^0xE0DB8793
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, fParam1, bParam4);
}

int func_501() // Hash - 0xA64382A1 ^0x8747448D
{
	if (PED::IS_PED_USING_SCENARIO(pedLocal_96, func_65(0)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
			return 0;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
			return 1;
	}

	if (PED::IS_PED_USING_SCENARIO(pedLocal_96, func_65(1)))
	{
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_96, "amb@world_human_prostitute@french@base", "base"))
			return 3;
	
		if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(pedLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
			return 2;
	}

	return -1;
}

void func_502() // Hash - 0xBA14221B ^0x38A468E9
{
	if (ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
		return;

	if (iLocal_294 != 3 && iLocal_294 != 4)
		func_503(PLAYER::PLAYER_PED_ID());
	else if (iLocal_294 == 3)
		func_503(pedLocal_97);

	return;
}

void func_503(Ped pedParam0) // Hash - 0x2A446B64 ^0x6F5E64E5
{
	if (ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		return;

	if (func_551())
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedParam0))
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(pedParam0);
			return;
		}
	}

	if (func_413(pedParam0, pedLocal_96, true) < 30f)
	{
		if (!PED::IS_PED_HEADTRACKING_PED(pedLocal_96, pedParam0))
		{
			if (func_551())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				{
					TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
					TASK::TASK_LOOK_AT_ENTITY(pedLocal_96, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
				}
			}
			else
			{
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_96, pedParam0, -1, SLF_WHILE_NOT_IN_FOV, 4);
			}
		}
	}
	else if (PED::IS_PED_HEADTRACKING_PED(pedLocal_96, pedParam0))
	{
		if (func_551())
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
				TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
		else
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_96);
	}

	return;
}

void func_504() // Hash - 0x2F917F19 ^0x48E07B31
{
	if (Global_32315)
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false))
			if (PED::IS_PED_IN_VEHICLE(pedLocal_96, veLocal_99, false))
				func_505();
	
		return;
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		return;

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_96, false) || !ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
	{
		if (Global_32319 != SCRIPT::GET_ID_OF_THIS_THREAD() && func_491(iLocal_49, 32))
			func_5(&iLocal_49, 32);
	
		return;
	}

	if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true)) < Global_32318 || Global_32318 == 0f && iLocal_296 != 4)
	{
		Global_32318 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
		Global_32319 = SCRIPT::GET_ID_OF_THIS_THREAD();
		func_482(&iLocal_49, 32);
	}
	else if (Global_32319 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_32318 = SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(pedLocal_96, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	}
	else
	{
		func_5(&iLocal_49, 32);
	}

	return;
}

void func_505() // Hash - 0x31F6B925 ^0x4E3958AA
{
	if (func_551())
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			PED::SET_PED_RESET_FLAG(pedLocal_96, 323, true);
	else
		PED::SET_PED_RESET_FLAG(pedLocal_96, 323, true);

	return;
}

void func_506(var uParam0) // Hash - 0x7E7B8350 ^0x173E4FC1
{
	if (!iLocal_295 == 12)
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (func_510())
			{
				if (func_551())
				{
					func_123(false);
					PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_96, 196624, true);
				
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_96))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_96, true, false);
				
					TASK::TASK_SMART_FLEE_PED(pedLocal_96, PLAYER::PLAYER_PED_ID(), 300f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_96, true);
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					func_542();
					func_536(uParam0);
				}
				else
				{
					func_96(12);
				}
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_96, PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_67 = iLocal_67 + 1;
			
				if (iLocal_67 >= 2)
				{
					func_492("prostitute CLASSED AS UNDER ATTACK");
					iLocal_295 = 12;
				}
				else
				{
					func_492("prostitute BEEN HIT BY PLAYER");
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(pedLocal_96);
				}
			}
			else if (func_508())
			{
				func_507();
				iLocal_295 = 12;
			}
		}
	}

	return;
}

void func_507() // Hash - 0xA4A6DDF3 ^0xF0D926F6
{
	if (PED::IS_PED_INJURED(pedLocal_96))
		return;

	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_96);
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedLocal_96, "APOLOGY_NO_TROUBLE", "SPEECH_PARAMS_FORCE_SHOUTED_CRITICAL", 1);
	return;
}

BOOL func_508() // Hash - 0xD9AF6757 ^0x1F010EFF
{
	Vehicle vehiclePedIsIn;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		return false;

	if (!func_509())
		return false;

	vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
		return false;

	if (PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()))
		return VEHICLE::IS_VEHICLE_SIREN_ON(vehiclePedIsIn);

	return false;
}

BOOL func_509() // Hash - 0xF3FD6FDA ^0x8F0A4BB6
{
	if (!func_551())
	{
		return true;
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), -1, false) == PLAYER::PLAYER_PED_ID())
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false, false);
				
					return true;
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
			}
		}
		else
		{
			NETWORK::NETWORK_REGISTER_ENTITY_AS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
		}
	}

	return false;
}

BOOL func_510() // Hash - 0x6FE72139 ^0xAE2F1C0C
{
	Vector3 entityCoords;

	if (!func_491(iLocal_49, 4096))
	{
		if (func_413(pedLocal_96, PLAYER::PLAYER_PED_ID(), true) < 30f)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(pedLocal_96, true) };
		
			if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_EXPLOSION, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUNSHOT_FIRED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_GUN_FIGHT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_PED_SHOT, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_PED_KILLED, entityCoords, 30f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(EVENT_SHOCKING_SEEN_MELEE_ACTION, entityCoords, 30f) && !func_551() || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				if (!func_551())
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, false);
			
				func_482(&iLocal_49, 4096);
				return true;
			}
		}
	}

	return false;
}

BOOL func_511() // Hash - 0x2854A2EC ^0x77A49B87
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96) && !ENTITY::IS_ENTITY_DEAD(pedLocal_96, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_551())
		{
			if (func_553(PLAYER::PLAYER_ID(), false))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - ANOTHER PLAYER IN VEHICLE");
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, false))
					func_106(false);
			
				func_96(15);
				return false;
			}
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_96))
		{
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, false))
			{
				if (!func_513(9))
				{
					if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_96, PLAYER::PLAYER_PED_ID(), 100f, 100f, 50f, false, true, 0))
						{
							return true;
						}
						else
						{
							func_492("prostitute SCRIPT SHOULD EXIT - PLAYER WALKED AWAY FROM CAR");
							func_96(15);
						}
					}
				}
				else if (!(func_512() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
				{
					func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
					func_96(15);
				}
				else
				{
					return true;
				}
			}
			else if (iLocal_295 == 0)
			{
				func_492("prostitute SCRIPT SHOULD EXIT - prostitute IN VEHICLE");
			}
			else if (!func_513(9) && !func_513(5))
			{
				return true;
			}
			else if (!(func_512() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !func_403()))
			{
				func_492("prostitute SCRIPT SHOULD EXIT - PLAYER ON MISSION");
				func_106(false);
				func_96(15);
			}
			else
			{
				return true;
			}
		}
		else
		{
			func_492("prostitute SCRIPT SHOULD EXIT - INJURED");
		}
	}

	if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute doesn't exist");

	if (ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
		func_492("prostitute SCRIPT SHOULD EXIT - Prostitute is dead");

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		func_492("prostitute SCRIPT SHOULD EXIT - Player is dead");

	return false;
}

BOOL func_512() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_513(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_514(iParam0))
		return false;

	return true;
}

BOOL func_514(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_515(iParam0, Global_43257);
}

BOOL func_515(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
{
	if (iParam1 == 15)
		return 1;

	if (iParam0 == 15)
		return 0;

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
			}
		
			return 1;
	
		case 0:
			switch (iParam1)
			{
				case 5:
				case 17:
					return 1;
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
			}
			break;
	
		case 4:
			if (iParam1 == 17)
				return 1;
			break;
	
		case 5:
			break;
	
		case 6:
		case 8:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 7:
			if (iParam1 == 6)
				return 1;
			break;
	
		case 9:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 10:
			switch (iParam1)
			{
				case 5:
				case 6:
				case 17:
					return 1;
			}
			break;
	
		case 11:
			if (iParam1 == 5)
				return 1;
			break;
	
		case 17:
			switch (iParam1)
			{
				case 17:
				case 12:
				case 5:
					return 1;
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
			}
			break;
	
		case 13:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	
		case 14:
			switch (iParam1)
			{
				case 5:
					return 1;
			}
			break;
	}

	return 0;
}

void func_516() // Hash - 0x98BA2559 ^0x2AF15A8
{
	int i;
	eEventType eventAtIndex;
	struct<2> eventData;

	for (i = 0; i < SCRIPT::GET_NUMBER_OF_EVENTS(SCRIPT_EVENT_QUEUE_NETWORK); i = i + 1)
	{
		eventAtIndex = SCRIPT::GET_EVENT_AT_INDEX(SCRIPT_EVENT_QUEUE_NETWORK, i);
	
		if (eventAtIndex == EVENT_NETWORK_SCRIPT_EVENT)
		{
			SCRIPT::GET_EVENT_DATA(SCRIPT_EVENT_QUEUE_NETWORK, i, &eventData, 2);
		
			if (eventData == -1763294690)
				if (eventData.f_1 == PLAYER::PLAYER_ID())
					func_196(128);
		}
	}

	return;
}

void func_517() // Hash - 0x80614248 ^0x547E3035
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return;

	if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		return;

	if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false, 0) != 1)
		if (func_518(1, false, true))
			if (NETWORK::GET_NUM_CREATED_MISSION_PEDS(false) <= 1)
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(1);

	return;
}

BOOL func_518(int iParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xB4895AFB ^0xB4895AFB
{
	return func_519(0, iParam0, true, bParam1, bParam2);
}

BOOL func_519(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x888E99B4 ^0x888E99B4
{
	int num;
	int num2;

	if (!IS_BIT_SET(Global_1666891, 0))
		return 0;

	if (bParam2 && !bParam3 && iParam1 <= func_523(iParam0) - func_522(iParam0, false))
	{
		return 1;
	}
	else
	{
		if (bParam3)
		{
			if (bParam2)
				num = iParam1 - func_522(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_523(iParam0) - func_521(iParam0);
		}
		else
		{
			if (bParam2)
				num = iParam1 - func_522(iParam0, false);
			else
				num = iParam1;
		
			num2 = func_523(iParam0) - func_522(iParam0, true);
		}
	
		if (!bParam4 && Global_1853910[PLAYER::PLAYER_ID() /*862*/] != 3)
			num2 = num2 - func_520(iParam0);
	
		if (num < num2)
			return 1;
	}

	return 0;
}

int func_520(int iParam0) // Hash - 0xF61C8BEE ^0xF61C8BEE
{
	switch (iParam0)
	{
		case 0:
			return 10;
	
		case 1:
			return 10;
	
		case 2:
			return 10;
	}

	return 0;
}

int func_521(int iParam0) // Hash - 0xC46ACF50 ^0x2D89675B
{
	switch (iParam0)
	{
		case 0:
			return Global_1666891.f_1;
	
		case 1:
			return Global_1666891.f_2;
	
		case 2:
			return Global_1666891.f_3;
	}

	return 0;
}

int func_522(int iParam0, BOOL bParam1) // Hash - 0x8148B892 ^0x7DFB917D
{
	Player player;

	player = PLAYER::PLAYER_ID();

	switch (iParam0)
	{
		case 0:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657589[player /*466*/].f_219;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_PEDS(!bParam1, 0);
			break;
	
		case 1:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657589[player /*466*/].f_220;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(!bParam1, 0);
			break;
	
		case 2:
			if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
				return Global_2657589[player /*466*/].f_221;
			else
				return NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(!bParam1, 0);
			break;
	}

	return 0;
}

int func_523(int iParam0) // Hash - 0x3D4448A4 ^0x3D4448A4
{
	switch (iParam0)
	{
		case 0:
			return Global_1666899;
	
		case 1:
			return Global_1666900;
	
		case 2:
			return Global_1666901;
	}

	return 0;
}

BOOL func_524(int iParam0) // Hash - 0x734E18A9 ^0x734E18A9
{
	return func_491(iLocal_52, iParam0);
}

void func_525(var uParam0) // Hash - 0x4AFB60B6 ^0x76DE031D
{
	int i;

	if (uParam0->f_271)
	{
		if (MISC::GET_FRAME_COUNT() >= uParam0->f_272 + uParam0->f_273 || IS_BIT_SET(Global_100681.f_20, 2) || IS_BIT_SET(Global_100681.f_20, 13))
		{
			for (i = 0; i < 15; i = i + 1)
			{
				if (IS_BIT_SET(uParam0->[i /*18*/], 30))
				{
					if (!IS_BIT_SET(uParam0->[i /*18*/], 29))
					{
						func_526(&uParam0->[i /*18*/]);
						uParam0->f_272 = MISC::GET_FRAME_COUNT();
						return;
					}
				}
			}
		}
	}

	return;
}

void func_526(int* piParam0) // Hash - 0x67977513 ^0x7F0883FC
{
	func_527(piParam0, &(piParam0->f_2), piParam0->f_1);
	return;
}

void func_527(int* piParam0, const char* sParam1, Hash hParam2) // Hash - 0xCB81CA4C ^0xCD422589
{
	if (IS_BIT_SET(*piParam0, 30))
	{
		switch (func_452(*piParam0))
		{
			case 0:
				STREAMING::REQUEST_MODEL(hParam2);
				break;
		
			case 1:
				STREAMING::REQUEST_ANIM_DICT(sParam1);
				break;
		
			case 2:
				STREAMING::REQUEST_CLIP_SET(sParam1);
				break;
		
			case 3:
				GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sParam1, IS_BIT_SET(*piParam0, 28));
				break;
		
			case 4:
				VEHICLE::REQUEST_VEHICLE_RECORDING(hParam2, sParam1);
				break;
		
			case 5:
				TASK::REQUEST_WAYPOINT_RECORDING(sParam1);
				break;
		
			case 6:
				AUDIO::REQUEST_SCRIPT_AUDIO_BANK(sParam1, IS_BIT_SET(*piParam0, 27), -1);
				break;
		
			case 7:
				SCRIPT::REQUEST_SCRIPT_WITH_NAME_HASH(hParam2);
				break;
		
			case 8:
				HUD::REQUEST_ADDITIONAL_TEXT(sParam1, hParam2);
				break;
		
			case 9:
				STREAMING::REQUEST_PTFX_ASSET();
				break;
		
			default:
				break;
		}
	
		MISC::SET_BIT(piParam0, 29);
	}

	return;
}

void func_528(int iParam0) // Hash - 0xFE691435 ^0xFE691435
{
	if (func_491(iLocal_52, iParam0))
		func_5(&iLocal_52, iParam0);

	return;
}

void func_529() // Hash - 0x6E0E66F2 ^0xA0A9CB7C
{
	func_2(false);

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_96))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
			func_2(true);
		else
			func_492("Prostitue: not continuing, prostitue is dead");
	else
		func_492("Prostitue: not continuing, prostitue doesn't exist");

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		func_2(false);
		func_492("Prostitue: not continuing, player isn't player or is dead");
	}

	return;
}

int func_530(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x75751681 ^0x9140C9A0
{
	int i;

	for (i = NETWORK::NETWORK_GET_SCRIPT_STATUS(); i != 2; i = NETWORK::NETWORK_GET_SCRIPT_STATUS())
	{
		if (i == 3 || i == 4 || i == 5 || i == 6)
			if (!bParam2)
				func_534();
			else
				return 0;
	
		if (!func_533(false))
		{
			if (iParam0 == 0)
			{
				if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
					if (!bParam2)
						func_534();
					else
						return 0;
			
				if (func_532())
					if (!bParam2)
						func_534();
					else
						return 0;
			
				if (func_531(157))
					if (!bParam2)
						func_534();
					else
						return 0;
			}
			else if (!NETWORK::NETWORK_IS_IN_SESSION())
			{
				if (!bParam2)
					func_534();
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
				func_534();
			else
				return 0;
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
		if (!bParam2)
			func_534();
		else
			return 0;

	return 1;
}

BOOL func_531(int iParam0) // Hash - 0xA28ADBB4 ^0x6EB81E64
{
	if (SCRIPT::GET_EVENT_EXISTS(SCRIPT_EVENT_QUEUE_NETWORK, iParam0))
		return true;

	return false;
}

BOOL func_532() // Hash - 0x974E48B4 ^0x974E48B4
{
	return Global_2683862.f_693;
}

BOOL func_533(BOOL bParam0) // Hash - 0x1CCCE169 ^0x1CCCE169
{
	bParam0;
	return Global_1575035;
}

void func_534() // Hash - 0xCE5FB49E ^0x214A59D5
{
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_535() // Hash - 0x6F73E100 ^0x6F73E100
{
	func_196(1);
	return;
}

void func_536(var uParam0) // Hash - 0x283A8D1B ^0xAFD51B7
{
	func_540();

	if (func_48(false, true))
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);

	if (!PED::IS_PED_INJURED(pedLocal_96))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_96))
		{
			if (func_551() && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_SMART_FLEE_PED) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_0xF10822AA) != 1)
			{
				TASK::TASK_WANDER_STANDARD(pedLocal_96, 1193033728, 0);
			
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
					PED::SET_PED_KEEP_TASK(pedLocal_96, true);
			
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_96))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_96);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_96);
			}
			else
			{
				if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_96))
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&pedLocal_96);
			
				AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedLocal_96);
			}
		}
	}

	iLocal_49 = 0;

	if (func_491(iLocal_49, 64))
		Global_32317 = false;

	if (!PED::IS_PED_INJURED(pedLocal_97))
		TASK::CLEAR_PED_TASKS(pedLocal_97);

	pedLocal_97 = 0;
	iLocal_296 = 0;

	if (func_491(iLocal_49, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_49, 2048);

	if (!func_539())
		func_538();

	if (func_551())
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_85))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_85);

	veLocal_98 = 0;
	func_540();
	func_537();
	Global_32318 = 0f;

	if (!Global_1956139.f_5602 && !Global_1956139.f_5606)
		STREAMING::CLEAR_FOCUS();

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CAN_DO_DRIVE_BY(PLAYER::PLAYER_ID(), true);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (func_524(256))
		{
			PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), PV_COMP_FEET, iLocal_86, iLocal_87, 0);
			func_196(1024);
		}
	}

	if (func_470(_("Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.")) && !Global_32315)
		HUD::CLEAR_HELP(true);

	if (Global_32319 == SCRIPT::GET_ID_OF_THIS_THREAD())
	{
		Global_32315 = false;
		Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_431 = 0;
	}

	func_447(uParam0, false);

	if (func_551())
		func_196(2048);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	return;
}

void func_537() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_538() // Hash - 0x33AC001D ^0x2671C198
{
	if (Global_2672505.f_946.f_10)
		Global_2672505.f_946.f_10 = 0;

	return;
}

BOOL func_539() // Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_1963021, 3);
}

void func_540() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

void func_541(BOOL bParam0) // Hash - 0x106348FD ^0xD1D62717
{
	if (!PED::IS_PED_INJURED(pedLocal_96))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_96, false))
			if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_96, SCRIPT_TASK_LEAVE_ANY_VEHICLE) != 1)
				TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_96, 0, 65536);
	
		if (bParam0)
			if (func_551())
				if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedLocal_96))
					if (NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(pedLocal_96))
						if (NETWORK::IS_NETWORK_ID_OWNED_BY_PARTICIPANT(NETWORK::NETWORK_GET_NETWORK_ID_FROM_ENTITY(pedLocal_96)))
							PED::SET_PED_KEEP_TASK(pedLocal_96, true);
			else
				PED::SET_PED_KEEP_TASK(pedLocal_96, true);
	}

	return;
}

void func_542() // Hash - 0xC409F30 ^0x9DB82E90
{
	if (!func_551())
		if (iLocal_295 == 11 || iLocal_295 == 13)
			return;

	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_96, false))
	{
		if (!PED::IS_PED_FLEEING(pedLocal_96))
		{
			func_96(0);
			iLocal_294 = 1;
		}
	
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(pedLocal_96))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_96, false);
				PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_96);
			}
		}
		else
		{
			PED::RESET_PED_IN_VEHICLE_CONTEXT(pedLocal_96);
		}
	
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(pedLocal_96, 0);
	}

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_99, false) && !ENTITY::IS_ENTITY_DEAD(veLocal_99, false))
	{
		if (func_551())
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_99))
			{
				if (Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_33 <= 0 && !IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_267.f_31, 11))
				{
					VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_99, false);
					VEHICLE::SET_VEHICLE_LIGHTS(veLocal_99, 3);
					VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_99, false);
				}
			
				VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(veLocal_99, true, 0);
			}
		}
		else
		{
			VEHICLE::SET_VEHICLE_HANDBRAKE(veLocal_99, false);
			VEHICLE::SET_VEHICLE_LIGHTS(veLocal_99, 3);
			VEHICLE::SET_VEHICLE_INTERIORLIGHT(veLocal_99, false);
		}
	}

	func_550(iLocal_76);
	func_550(iLocal_77);
	func_550(iLocal_78);
	func_550(iLocal_79);
	func_550(iLocal_80);
	func_550(iLocal_81);
	func_550(iLocal_82);

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
	
		if (func_551() && iLocal_297 != 3 && func_491(iLocal_49, 2048))
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
	
		PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(PLAYER::PLAYER_PED_ID(), true);
	}

	if (func_491(iLocal_49, 2048))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);

	func_5(&iLocal_49, 2048);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_CHARACTER_WHEEL, true);
	PAD::ENABLE_CONTROL_ACTION(FRONTEND_CONTROL, INPUT_SELECT_WEAPON, true);

	if (!func_539())
		func_538();

	iLocal_296 = 0;

	if (func_491(iLocal_49, 4))
	{
		func_5(&iLocal_49, 4);
		Global_32315 = false;
		Global_32316 = 0;
		Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_431 = 0;
	}

	if (func_491(iLocal_49, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
			STREAMING::REMOVE_CLIP_SET(func_92());

	func_549();
	func_468();

	if (func_470(_("Press ~INPUT_CONTEXT~ or honk your horn to invite the prostitute into the vehicle.")) || func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~Press ~INPUT_NEXT_CAMERA~ to change view.~n~")) || func_470(_("Choose response:~n~~INPUT_FRONTEND_X~ Disgust~n~~INPUT_FRONTEND_ACCEPT~ Sarcasm~n~~INPUT_FRONTEND_CANCEL~ Sympathy")) || func_470(_("Use ~INPUTGROUP_LOOK~ to move the camera.~n~")))
	{
		func_5(&iLocal_49, 1048576);
		HUD::CLEAR_HELP(true);
	}

	func_362(false);
	HUD::DISPLAY_RADAR(true);

	if (func_491(iLocal_49, 8))
		if (STREAMING::HAS_CLIP_SET_LOADED(func_92()))
			STREAMING::REMOVE_CLIP_SET(func_92());

	func_131("PROSTITUTES_SOLICIT_SCENE");
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	func_123(false);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	func_543();

	if (func_551())
	{
		if (func_524(2))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
					{
						VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), 1);
					}
				}
			}
			else if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(veLocal_99))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(veLocal_99))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_99, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_99, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_99, false);
				}
				else
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(veLocal_99);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_99, 1);
					VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(veLocal_99, false);
					VEHICLE::SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(veLocal_99, false);
				}
			}
		}
	}

	func_188(23, false);
	iLocal_49 = 0;
	iLocal_51 = 0;
	return;
}

void func_543() // Hash - 0xDAEF75A6 ^0xD9D39ED2
{
	var unk;
	var unk18;

	if (!func_548())
		return;

	if (!bLocal_47)
		return;

	unk = 2;
	unk18 = 2;
	TEXT_LABEL_ASSIGN_STRING(&unk[0 /*8*/], "GameType", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk[1 /*8*/], "Type", 32);
	TEXT_LABEL_ASSIGN_STRING(&unk18[0 /*6*/], "SP", 24);
	TEXT_LABEL_ASSIGN_STRING(&unk18[1 /*6*/], "????", 24);

	if (func_547(275, &unk18, &unk, 2, -1, false, false))
	{
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(131, func_546(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(117, func_545(), 0f);
		STATS::LEADERBOARDS_WRITE_ADD_COLUMN(118, func_544(), 0f);
	}

	return;
}

int func_544() // Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_46;
}

int func_545() // Hash - 0xA767DBD8 ^0xA767DBD8
{
	return iLocal_45;
}

int func_546() // Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return 0;
}

BOOL func_547(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xB348F537 ^0xD24CB377
{
	int num;
	int i;
	var gamerHandle;
	var clanDesc;

	!NETWORK::NETWORK_IS_SIGNED_ONLINE();

	if (!NETWORK::NETWORK_PLAYER_IS_CHEATER() && NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES() || !NETWORK::NETWORK_HAS_AGE_RESTRICTIONS() && NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV())
	{
		num.f_2.f_1 = 4;
		num = iParam0;
	
		if (iParam4 == -1)
		{
			if (NETWORK::NETWORK_CLAN_SERVICE_IS_VALID())
			{
				gamerHandle = { func_318(PLAYER::PLAYER_ID()) };
			
				if (NETWORK::NETWORK_CLAN_PLAYER_IS_ACTIVE(&gamerHandle))
					if (NETWORK::NETWORK_CLAN_PLAYER_GET_DESC(&clanDesc, 35, &gamerHandle))
						num.f_1 = clanDesc;
			}
		}
		else
		{
			num.f_1 = iParam4;
		}
	
		num.f_2 = iParam3;
	
		for (i = 0; i < iParam3; i = i + 1)
		{
			num.f_2.f_1[i /*16*/] = { uParam2->[i /*8*/] };
			TEXT_LABEL_COPY(&(num.f_2.f_1[i /*16*/].f_8), { uParam1->[i /*6*/] }, 8);
		}
	
		if (bParam5)
			Global_2097157.f_5 = { num };
	
		if (!bParam6)
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && Global_2692733.f_3)
				STATS::LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(&num, &(Global_1935368.f_10));
			else
				STATS::LEADERBOARDS2_WRITE_DATA(&num);
	
		return true;
	}

	NETWORK::NETWORK_PLAYER_IS_CHEATER();
	!NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES();
	NETWORK::NETWORK_HAS_AGE_RESTRICTIONS();
	!NETWORK::NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV();
	return false;
}

BOOL func_548() // Hash - 0xBC529DB6 ^0xD11B0F74
{
	if (NETWORK::NETWORK_IS_SIGNED_ONLINE() && NETWORK::NETWORK_IS_SIGNED_IN() && NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
		return true;

	return false;
}

void func_549() // Hash - 0x315F8FF ^0x315F8FF
{
	if (func_491(iLocal_49, 128))
	{
		func_405(39, false);
		func_405(40, false);
		func_405(41, false);
		func_405(42, false);
		func_405(43, false);
		func_405(44, false);
		func_5(&iLocal_49, 128);
	}

	return;
}

void func_550(int iParam0) // Hash - 0x8BC96717 ^0x8F82F162
{
	if (func_551())
		if (func_219(iParam0))
			NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(iParam0);

	return;
}

BOOL func_551() // Hash - 0x77F1FEBE ^0x77F1FEBE
{
	return func_524(1);
}

BOOL func_552(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_553(Player plParam0, BOOL bParam1) // Hash - 0xAB48AE6E ^0x4E0E3696
{
	Ped playerPed;
	int i;
	Player player;
	Vehicle vehiclePedIsIn;

	if (func_208(plParam0, true, true))
	{
		playerPed = PLAYER::GET_PLAYER_PED(plParam0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(playerPed, bParam1))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(playerPed, false);
		
			for (i = 0; i < 32; i = i + 1)
			{
				player = PLAYER::INT_TO_PLAYERINDEX(i);
			
				if (func_208(player, true, true))
					if (PLAYER::GET_PLAYER_PED(player) != playerPed)
						if (PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(player), vehiclePedIsIn, bParam1))
							return true;
			}
		}
	}

	return false;
}

BOOL func_554(Player plParam0, BOOL bParam1) // Hash - 0xA0C57110 ^0xA0C57110
{
	if (bParam1)
		if (func_462(plParam0))
			return true;

	if (Global_1853910[plParam0 /*862*/] == 2 || Global_1853910[plParam0 /*862*/] == 1 || Global_1853910[plParam0 /*862*/] == 0 || Global_1853910[plParam0 /*862*/] == 3 || Global_1853910[plParam0 /*862*/] == 8)
		return true;

	return false;
}

