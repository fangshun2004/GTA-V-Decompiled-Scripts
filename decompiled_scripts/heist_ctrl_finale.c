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
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	float fLocal_30 = 0f;
	float fLocal_31 = 0f;
	float fLocal_32 = 0f;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	int iLocal_35 = 0;
	eControlAction ecaLocal_36 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_37 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_38 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_39 = INPUT_NEXT_CAMERA;
	eControlAction ecaLocal_40 = INPUT_NEXT_CAMERA;
	var uLocal_41 = 0;
	char* sLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	int iLocal_46 = 0;
	BOOL bLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 49;
	var uLocal_60 = 0;
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
	var uLocal_109 = 2;
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
	Vehicle veLocal_128 = 0;
	Vehicle veLocal_129 = 0;
	Ped pedLocal_130 = 0;
	Ped pedLocal_131 = 0;
	Ped pedLocal_132 = 0;
	Ped pedLocal_133 = 0;
	Ped pedLocal_134 = 0;
	var uLocal_135 = 4;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 4;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 4;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 4;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 4;
	var uLocal_160 = 0;
	var uLocal_161 = 0;
	var uLocal_162 = 0;
	var uLocal_163 = 0;
	var uLocal_164 = 4;
	var uLocal_165 = 0;
	var uLocal_166 = 0;
	var uLocal_167 = 0;
	var uLocal_168 = 0;
	var uLocal_169 = 4;
	var uLocal_170 = 0;
	var uLocal_171 = 0;
	var uLocal_172 = 0;
	var uLocal_173 = 0;
	var uLocal_174 = 0;
	var uLocal_175 = 0;
	var uLocal_176 = 0;
	var uLocal_177 = 0;
	var uLocal_178 = 0;
	int iLocal_179 = 0;
	int iLocal_180 = 0;
	int iLocal_181 = 0;
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
	var uLocal_203 = 2;
	var uLocal_204 = 0;
	var uLocal_205 = 0;
	var uLocal_206 = 0;
	var uLocal_207 = 0;
	var uLocal_208 = 0;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 2;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 20;
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
	var uLocal_258 = 20;
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
	var uLocal_280 = 5;
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
	var uLocal_291 = 2;
	var uLocal_292 = 0;
	var uLocal_293 = 0;
	var uLocal_294 = 0;
	var uLocal_295 = 0;
	var uLocal_296 = 0;
	var uLocal_297 = 0;
	var uLocal_298 = 0;
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	var uLocal_301 = 22;
	var uLocal_302 = 0;
	var uLocal_303 = 0;
	var uLocal_304 = 0;
	var uLocal_305 = 0;
	var uLocal_306 = 0;
	var uLocal_307 = 0;
	var uLocal_308 = 0;
	var uLocal_309 = 0;
	var uLocal_310 = 0;
	var uLocal_311 = 0;
	var uLocal_312 = 0;
	var uLocal_313 = 0;
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
	var uLocal_324 = 22;
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
	var uLocal_369 = 22;
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
	var uLocal_394 = 9;
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
	var uLocal_431 = 9;
	var uLocal_432 = 0;
	var uLocal_433 = 0;
	var uLocal_434 = 0;
	var uLocal_435 = 0;
	var uLocal_436 = 0;
	var uLocal_437 = 0;
	var uLocal_438 = 0;
	var uLocal_439 = 0;
	var uLocal_440 = 0;
	var uLocal_441 = 9;
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
	var uLocal_463 = 11;
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
	var uLocal_487 = 32;
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
	var uLocal_554 = 7;
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
	var uLocal_569 = 7;
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
	var uLocal_600 = 8;
	var uLocal_601 = 0;
	var uLocal_602 = 0;
	var uLocal_603 = 0;
	var uLocal_604 = 0;
	var uLocal_605 = 0;
	var uLocal_606 = 0;
	var uLocal_607 = 0;
	var uLocal_608 = 0;
	var uLocal_609 = 0;
	var uLocal_610 = 20;
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
	var uLocal_633 = -1;
	var uLocal_634 = -1;
	var uLocal_635 = 0;
	var uLocal_636 = 0;
	var uLocal_637 = 0;
	var uLocal_638 = 0;
	var uLocal_639 = 0;
	var uLocal_640 = 4;
	var uLocal_641 = 0;
	var uLocal_642 = 0;
	var uLocal_643 = 0;
	var uLocal_644 = 0;
	var uLocal_645 = 0;
	var uLocal_646 = 0;
	var uLocal_647 = 0;
	var uLocal_648 = 0;
	var uLocal_649 = 3;
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
	var uLocal_664 = 0;
	var uLocal_665 = 0;
	var uLocal_666 = 16;
	var uLocal_667 = 0;
	var uLocal_668 = 0;
	var uLocal_669 = 0;
	var uLocal_670 = 0;
	var uLocal_671 = 0;
	var uLocal_672 = 0;
	var uLocal_673 = 0;
	var uLocal_674 = 0;
	var uLocal_675 = 0;
	var uLocal_676 = 0;
	var uLocal_677 = 0;
	var uLocal_678 = 0;
	var uLocal_679 = 0;
	var uLocal_680 = 0;
	var uLocal_681 = 0;
	var uLocal_682 = 0;
	var uLocal_683 = 0;
	var uLocal_684 = 0;
	var uLocal_685 = 0;
	var uLocal_686 = 0;
	var uLocal_687 = 0;
	var uLocal_688 = 0;
	var uLocal_689 = 0;
	var uLocal_690 = 0;
	var uLocal_691 = 0;
	var uLocal_692 = 0;
	var uLocal_693 = 0;
	var uLocal_694 = 0;
	var uLocal_695 = 0;
	var uLocal_696 = 0;
	var uLocal_697 = 0;
	var uLocal_698 = 0;
	var uLocal_699 = 0;
	var uLocal_700 = 0;
	var uLocal_701 = 0;
	var uLocal_702 = 0;
	var uLocal_703 = 0;
	var uLocal_704 = 0;
	var uLocal_705 = 0;
	var uLocal_706 = 0;
	var uLocal_707 = 0;
	var uLocal_708 = 0;
	var uLocal_709 = 0;
	var uLocal_710 = 0;
	var uLocal_711 = 0;
	var uLocal_712 = 0;
	var uLocal_713 = 0;
	var uLocal_714 = 0;
	var uLocal_715 = 0;
	var uLocal_716 = 0;
	var uLocal_717 = 0;
	var uLocal_718 = 0;
	var uLocal_719 = 0;
	var uLocal_720 = 0;
	var uLocal_721 = 0;
	var uLocal_722 = 0;
	var uLocal_723 = 0;
	var uLocal_724 = 0;
	var uLocal_725 = 0;
	var uLocal_726 = 0;
	var uLocal_727 = 0;
	var uLocal_728 = 0;
	var uLocal_729 = 0;
	var uLocal_730 = 0;
	var uLocal_731 = 0;
	var uLocal_732 = 0;
	var uLocal_733 = 0;
	var uLocal_734 = 0;
	var uLocal_735 = 0;
	var uLocal_736 = 0;
	var uLocal_737 = 0;
	var uLocal_738 = 0;
	var uLocal_739 = 0;
	var uLocal_740 = 0;
	var uLocal_741 = 0;
	var uLocal_742 = 0;
	var uLocal_743 = 0;
	var uLocal_744 = 0;
	var uLocal_745 = 0;
	var uLocal_746 = 0;
	var uLocal_747 = 0;
	var uLocal_748 = 0;
	var uLocal_749 = 0;
	var uLocal_750 = 0;
	var uLocal_751 = 0;
	var uLocal_752 = 0;
	var uLocal_753 = 0;
	var uLocal_754 = 0;
	var uLocal_755 = 0;
	var uLocal_756 = 0;
	var uLocal_757 = 0;
	var uLocal_758 = 0;
	var uLocal_759 = 0;
	var uLocal_760 = 0;
	var uLocal_761 = 0;
	var uLocal_762 = 0;
	var uLocal_763 = 0;
	var uLocal_764 = 0;
	var uLocal_765 = 0;
	var uLocal_766 = 0;
	var uLocal_767 = 0;
	var uLocal_768 = 0;
	var uLocal_769 = 0;
	var uLocal_770 = 0;
	var uLocal_771 = 0;
	var uLocal_772 = 0;
	var uLocal_773 = 0;
	var uLocal_774 = 0;
	var uLocal_775 = 0;
	var uLocal_776 = 0;
	var uLocal_777 = 0;
	var uLocal_778 = 0;
	var uLocal_779 = 0;
	var uLocal_780 = 0;
	var uLocal_781 = 0;
	var uLocal_782 = 0;
	var uLocal_783 = 0;
	var uLocal_784 = 0;
	var uLocal_785 = 0;
	var uLocal_786 = 0;
	var uLocal_787 = 0;
	var uLocal_788 = 0;
	var uLocal_789 = 0;
	var uLocal_790 = 0;
	var uLocal_791 = 0;
	var uLocal_792 = 0;
	var uLocal_793 = 0;
	var uLocal_794 = 0;
	var uLocal_795 = 0;
	var uLocal_796 = 0;
	var uLocal_797 = 0;
	var uLocal_798 = 0;
	var uLocal_799 = 0;
	var uLocal_800 = 0;
	var uLocal_801 = 0;
	var uLocal_802 = 0;
	var uLocal_803 = 0;
	var uLocal_804 = 0;
	var uLocal_805 = 0;
	var uLocal_806 = 0;
	var uLocal_807 = 0;
	var uLocal_808 = 0;
	var uLocal_809 = 0;
	var uLocal_810 = 0;
	var uLocal_811 = 0;
	var uLocal_812 = 0;
	var uLocal_813 = 0;
	var uLocal_814 = 0;
	var uLocal_815 = 0;
	var uLocal_816 = 0;
	var uLocal_817 = 0;
	var uLocal_818 = 0;
	var uLocal_819 = 0;
	var uLocal_820 = 0;
	var uLocal_821 = 0;
	var uLocal_822 = 0;
	var uLocal_823 = 0;
	var uLocal_824 = 0;
	var uLocal_825 = 0;
	var uLocal_826 = 0;
	var uLocal_827 = 0;
	var uLocal_828 = 0;
	var uLocal_829 = 0;
	var uLocal_830 = 0;
	var uLocal_831 = 0;
	var uLocal_832 = 0;
	var uLocal_833 = 0;
	var uLocal_834 = 0;
	var uLocal_835 = 0;
	var uLocal_836 = 0;
	var uLocal_837 = 0;
	var uLocal_838 = 0;
	var uLocal_839 = 0;
	var uLocal_840 = 0;
	var uLocal_841 = 0;
	var uLocal_842 = 0;
	var uLocal_843 = 0;
	var uLocal_844 = 0;
	var uLocal_845 = 0;
	var uLocal_846 = 0;
	var uLocal_847 = 0;
	var uLocal_848 = 0;
	var uLocal_849 = 0;
	var uLocal_850 = 0;
	var uLocal_851 = 0;
	var uLocal_852 = 0;
	var uLocal_853 = 0;
	var uLocal_854 = 0;
	var uLocal_855 = 0;
	var uLocal_856 = 0;
	var uLocal_857 = 0;
	var uLocal_858 = 0;
	var uLocal_859 = 0;
	var uLocal_860 = 0;
	var uLocal_861 = 0;
	var uLocal_862 = 0;
	var uLocal_863 = 0;
	var uLocal_864 = 0;
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
	sLocal_18 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	fLocal_30 = 80f;
	fLocal_31 = 140f;
	fLocal_32 = 180f;
	iLocal_35 = 3;
	ecaLocal_36 = INPUT_FRONTEND_CANCEL;
	ecaLocal_37 = INPUT_FRONTEND_ACCEPT;
	ecaLocal_38 = INPUT_ATTACK;
	ecaLocal_39 = INPUT_FRONTEND_CANCEL;
	ecaLocal_40 = INPUT_AIM;
	sLocal_42 = "";
	iLocal_44 = -1;
	iLocal_45 = -1;
	iLocal_46 = -1;
	iLocal_48 = -1;
	iLocal_49 = -1;
	iLocal_180 = -1;

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_421();

	func_420(2);
	func_408(&(uLocal_182.f_1), func_419(Global_96710[8 /*19*/], Global_96710[9 /*19*/]));
	func_407(&uLocal_182, 4);
	func_406(4, 0, true);
	func_405(false);

	while (!func_404(3))
	{
		if (!Global_78828 && !func_403(14))
		{
			func_389(&uLocal_182, 10f, 18f);
			func_387(&uLocal_182);
			func_222();
			func_152();
		
			if (func_150(0) || IS_BIT_SET(uLocal_182.f_449, 2))
			{
				func_68(&uLocal_182);
				func_5(&uLocal_182);
				func_4(&uLocal_182);
			}
		}
	
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-618416399) > 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-924773780) > 0)
			func_3();
	
		if (func_404(34))
			if (!func_2(false))
				if (!IS_BIT_SET(Global_113648.f_1.f_120[4], 9))
					func_406(4, 9, true);
			else if (IS_BIT_SET(Global_113648.f_1.f_120[4], 9))
				func_406(4, 9, false);
		else if (IS_BIT_SET(Global_113648.f_1.f_120[4], 9))
			func_406(4, 9, false);
	
		SYSTEM::WAIT(0);
	}

	func_1(2);
	func_421();
	return;
}

int func_1(int iParam0) // Position - 0x1C9 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], offset))
	{
		MISC::CLEAR_BIT(&Global_113648.f_9087.f_99.f_219[num], offset);
		return 1;
	}

	return 0;
}

BOOL func_2(BOOL bParam0) // Position - 0x220 Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_3() // Position - 0x248 Hash - 0x22922AF9 ^0x199CF6B1
{
	int num;

	if (Global_78819)
		return;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return;

	num = SYSTEM::ROUND(1f + (1000f * SYSTEM::TIMESTEP()));
	Global_96901.f_8 = Global_96901.f_8 + num;
	return;
}

void func_4(var uParam0) // Position - 0x28A Hash - 0xD87814E6 ^0xDD860BBB
{
	if (IS_BIT_SET(Global_96689, *uParam0))
	{
		if (IS_BIT_SET(uParam0->f_449, 1))
		{
			MISC::SET_BIT(&(uParam0->f_449), 15);
			MISC::SET_BIT(&(uParam0->f_449), 16);
			MISC::SET_BIT(&(uParam0->f_449), 14);
			MISC::CLEAR_BIT(&Global_96689, *uParam0);
		}
	}

	return;
}

void func_5(var uParam0) // Position - 0x2D3 Hash - 0xFC71D4A8 ^0xFC71D4A8
{
	int num;
	int num2;

	num = func_66(func_67(*uParam0));

	if (num < 0 || num >= 5)
		return;

	num2 = num;

	if (num2 != uParam0->f_464 && !(num2 == 2 && uParam0->f_464 == 4) && !(*uParam0 == 1 && num2 == 3 && uParam0->f_464 == 4))
		if (IS_BIT_SET(uParam0->f_449, 2))
			func_6(uParam0, num2, 0);
		else
			uParam0->f_464 = num2;

	return;
}

void func_6(var uParam0, int iParam1, int iParam2) // Position - 0x35E Hash - 0x3D6737 ^0x3D6737
{
	if (iParam1 != uParam0->f_464)
	{
		if (uParam0->f_680 == 0)
		{
			func_65(uParam0);
			uParam0->f_464 = iParam1;
			func_7(uParam0, iParam1, iParam2);
		}
	}

	return;
}

void func_7(var uParam0, int iParam1, int iParam2) // Position - 0x390 Hash - 0x2D0AD2DA ^0x397DBFF6
{
	switch (iParam1)
	{
		case 0:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			break;
	
		case 1:
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_452 = -1;
			break;
	
		case 2:
			func_36(uParam0, uParam0->f_417, iParam2);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	
		case 3:
			func_18(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);
			MISC::SET_BIT(&(uParam0->f_449), 9);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	
		case 4:
			func_14(&uParam0->f_1.f_108[0 /*4*/], 1);
			func_14(&uParam0->f_1.f_108[1 /*4*/], 1);
			Global_113648.f_1.f_6[*uParam0] = true;
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
			func_12(uParam0, false);
			func_64(uParam0);
			MISC::SET_BIT(&(uParam0->f_449), 5);
			MISC::SET_BIT(&(uParam0->f_449), 4);
			uParam0->f_457 = MISC::GET_GAME_TIMER();
			break;
	}

	func_8(uParam0);
	return;
}

void func_8(var uParam0) // Position - 0x4BD Hash - 0xFE0454C ^0x8D6A2EE9
{
	const char* controlGroupInstructionalButtonsString;
	const char* controlGroupInstructionalButtonsString2;
	const char* controlInstructionalButtonsString;
	const char* controlGroupInstructionalButtonsString3;
	const char* controlInstructionalButtonsString2;
	const char* controlInstructionalButtonsString3;
	BOOL flag;

	controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 13, true);
	controlGroupInstructionalButtonsString2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 11, true);
	controlInstructionalButtonsString = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, INPUT_MOVE_UP_ONLY, true);
	controlGroupInstructionalButtonsString3 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true);
	controlInstructionalButtonsString2 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT, true);
	controlInstructionalButtonsString3 = PAD::GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL, true);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 6, true);
		controlGroupInstructionalButtonsString2 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 7, true);
		controlInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 29, true);
	}

	flag = func_11(1, *uParam0);
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_MAX_WIDTH");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.6f);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	switch (uParam0->f_464)
	{
		case 0:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				if (flag)
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlInstructionalButtonsString);
					func_9(_("Zoom"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(controlInstructionalButtonsString);
					func_9(_("Zoom"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlInstructionalButtonsString3);
					func_9(_("Exit"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 1:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 2:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			
				if (*uParam0 == 2)
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(controlGroupInstructionalButtonsString);
					func_9(_("Browse"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlInstructionalButtonsString2);
					func_9(_("Select"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
					func_10(controlGroupInstructionalButtonsString);
					func_9(_("Browse"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlInstructionalButtonsString3);
					func_9(_("Back"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlInstructionalButtonsString2);
					func_9(_("Select"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 3:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				if (IS_BIT_SET(uParam0->f_449, 9))
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlGroupInstructionalButtonsString2);
					func_9(_("Browse"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
					func_10(controlGroupInstructionalButtonsString2);
					func_9(_("Browse"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
					func_10(controlGroupInstructionalButtonsString3);
					func_9(_("Look Around"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
					func_10(controlInstructionalButtonsString2);
					func_9(_("Select"));
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	
		case 4:
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT_EMPTY");
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
				func_10(controlInstructionalButtonsString);
				func_9(_("Zoom"));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
				func_10(controlGroupInstructionalButtonsString3);
				func_9(_("Look Around"));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				func_10(controlInstructionalButtonsString3);
				func_9(_("Back"));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "SET_DATA_SLOT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
				func_10(controlInstructionalButtonsString2);
				func_9(_("Confirm"));
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "DRAW_INSTRUCTIONAL_BUTTONS");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			}
			break;
	}

	return;
}

void func_9(char* sParam0) // Position - 0x98A Hash - 0x8E2F5FE2 ^0x29D9D432
{
	GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
	GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
	return;
}

void func_10(const char* sParam0) // Position - 0x99C Hash - 0x690E6520 ^0x509C71F3
{
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(sParam0);
	return;
}

BOOL func_11(int iParam0, int iParam1) // Position - 0x9AA Hash - 0xDEE74A4E ^0xDEE74A4E
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
	return flag;
}

void func_12(var uParam0, BOOL bParam1) // Position - 0x9F4 Hash - 0x4D081C1E ^0x384E676D
{
	if (bParam1)
	{
		MISC::SET_BIT(&(uParam0->f_449), 18);
	
		if (!func_13(&uParam0->f_1.f_20[0 /*4*/]) && !func_13(&uParam0->f_1.f_20[1 /*4*/]) && !func_13(&uParam0->f_1.f_108[0 /*4*/]) && !func_13(&uParam0->f_1.f_108[1 /*4*/]))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
	}
	else
	{
		MISC::CLEAR_BIT(&(uParam0->f_449), 18);
	}

	return;
}

BOOL func_13(const char* sParam0) // Position - 0xA69 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_14(const char* sParam0, int iParam1) // Position - 0xA7C Hash - 0xEE96521C ^0xE1C73320
{
	int i;
	int j;

	if (Global_112288 && iParam1)
		if (func_13(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/]))
		{
			for (j = i; j <= Global_113648.f_20412.f_145 - 2; j = j + 1)
			{
				func_17(j, j + 1);
			}
		
			func_16(Global_113648.f_20412.f_145 - 1);
			Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
			func_15();
			return;
		}
	}

	return;
}

void func_15() // Position - 0xB29 Hash - 0xCF8881D1 ^0x40507183
{
	int i;

	for (i = 0; i < 3; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0])
				Global_113648.f_20412.f_146[0] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1])
				Global_113648.f_20412.f_146[1] = Global_113648.f_20412[i /*16*/].f_12;
	
		if (IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))
			if (Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2])
				Global_113648.f_20412.f_146[2] = Global_113648.f_20412[i /*16*/].f_12;
	}

	return;
}

void func_16(int iParam0) // Position - 0xC40 Hash - 0xCC816B68 ^0xAFAF32F1
{
	TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[iParam0 /*16*/], "", 16);
	TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
	Global_113648.f_20412[iParam0 /*16*/].f_8 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = -1;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = 0;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = 0;
	return;
}

void func_17(int iParam0, int iParam1) // Position - 0xCD8 Hash - 0x812DB4B8 ^0x93F5D8C6
{
	Global_113648.f_20412[iParam0 /*16*/] = { Global_113648.f_20412[iParam1 /*16*/] };
	Global_113648.f_20412[iParam0 /*16*/].f_4 = { Global_113648.f_20412[iParam1 /*16*/].f_4 };
	Global_113648.f_20412[iParam0 /*16*/].f_8 = Global_113648.f_20412[iParam1 /*16*/].f_8;
	Global_113648.f_20412[iParam0 /*16*/].f_10 = Global_113648.f_20412[iParam1 /*16*/].f_10;
	Global_113648.f_20412[iParam0 /*16*/].f_9 = Global_113648.f_20412[iParam1 /*16*/].f_9;
	Global_113648.f_20412[iParam0 /*16*/].f_11 = Global_113648.f_20412[iParam1 /*16*/].f_11;
	Global_113648.f_20412[iParam0 /*16*/].f_12 = Global_113648.f_20412[iParam1 /*16*/].f_12;
	Global_113648.f_20412[iParam0 /*16*/].f_13 = Global_113648.f_20412[iParam1 /*16*/].f_13;
	Global_113648.f_20412[iParam0 /*16*/].f_14 = Global_113648.f_20412[iParam1 /*16*/].f_14;
	Global_113648.f_20412[iParam0 /*16*/].f_15 = Global_113648.f_20412[iParam1 /*16*/].f_15;
	return;
}

void func_18(var uParam0) // Position - 0xDE8 Hash - 0xC7F3A349 ^0x199194E3
{
	int num;
	int num2;

	func_35(uParam0);
	func_32(uParam0);
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = func_66(func_31(*uParam0));

	if (num != 0)
	{
		if (num == func_30(*uParam0, 0))
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (num == func_30(*uParam0, 1))
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	num2 = uParam0->f_1.f_16 + uParam0->f_1.f_18;
	num2.f_1 = uParam0->f_1.f_16.f_1 + uParam0->f_1.f_18.f_1;
	func_26(uParam0, &num2, uParam0->f_1.f_10);
	func_24(uParam0, 1, 1);
	func_12(uParam0, false);
	func_19(uParam0);
	return;
}

void func_19(var uParam0) // Position - 0xEBB Hash - 0xE178F9BB ^0x86462177
{
	int num;

	if (IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!IS_BIT_SET(uParam0->f_449, 18))
		{
			switch (uParam0->f_464)
			{
				case 3:
					if (!Global_113648.f_1[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_20[0 /*4*/], ""))
							func_22(&uParam0->f_1.f_20[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
					
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_20[1 /*4*/], ""))
							func_22(&uParam0->f_1.f_20[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
					
						Global_113648.f_1[*uParam0] = true;
					}
					else if (func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_20() && uParam0->f_483 == 0)
						{
							HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(_("Select an approach for this heist."));
							HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
						}
					}
					break;
			
				case 2:
					if (!Global_113648.f_1.f_6[*uParam0])
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_108[0 /*4*/], ""))
							func_22(&uParam0->f_1.f_108[0 /*4*/], 3, 0, -1, 10000, 7, 0, 0, 0);
					
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_108[1 /*4*/], ""))
							func_22(&uParam0->f_1.f_108[1 /*4*/], 3, 1000, -1, 10000, 7, 0, 0, 0);
					
						Global_113648.f_1.f_6[*uParam0] = true;
					}
					else if (func_21() && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
					{
						if (!IS_BIT_SET(uParam0->f_449, 10))
						{
							if (!func_13(_("Select a gunman to hire.")) && !func_13(_("Select a hacker to hire.")) && !func_13(_("Select a driver to hire.")))
							{
								num = func_66(func_31(*uParam0));
							
								if (uParam0->f_417 < 5)
								{
									if (!IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_20() && uParam0->f_483 == 0)
									{
										switch (Global_96710[num /*19*/].f_1[uParam0->f_417])
										{
											case 1:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(_("Select a gunman to hire."));
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										
											case 2:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(_("Select a hacker to hire."));
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										
											case 3:
												HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(_("Select a driver to hire."));
												HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, false, -1);
												break;
										}
									}
								}
							}
						}
					}
					break;
			}
		}
	}

	return;
}

BOOL func_20() // Position - 0x1117 Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

BOOL func_21() // Position - 0x1139 Hash - 0xE58CF981 ^0x86887139
{
	if (Global_113648.f_20412.f_145 > 0)
		return false;

	return true;
}

void func_22(const char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x1156 Hash - 0xFA14711 ^0xFA14711
{
	func_23(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_23(const char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x1176 Hash - 0x2DEFD20B ^0x2F7188BE
{
	int i;

	if (MISC::ARE_STRINGS_EQUAL(sParam0, ""))
		return;

	if (iParam3 < 0)
		return;

	if (iParam5 < 500 && iParam5 != -1)
		return;

	if (iParam4 < 0 && iParam4 != -1)
		return;

	if (iParam6 < 1 || iParam6 > 7)
		return;

	if (iParam7 == 235)
		return;

	if (iParam8 == 235)
		return;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0))
			return;
	}

	if (Global_113648.f_20412.f_145 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8 = MISC::GET_GAME_TIMER() + iParam3;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9 = iParam5;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11 = iParam6;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12 = iParam2;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13 = iParam7;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14 = iParam8;
		Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15 = iParam9;
	
		if (iParam4 != -1)
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = MISC::GET_GAME_TIMER() + iParam3 + iParam4;
		else
			Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10 = -1;
	
		Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 + 1;
		func_15();
	}

	return;
}

void func_24(var uParam0, int iParam1, int iParam2) // Position - 0x1348 Hash - 0xA0A17639 ^0x169B9493
{
	if (!IS_BIT_SET(uParam0->f_1.f_303, iParam1))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_280[iParam1 /*2*/], ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[iParam1 /*2*/], iParam2);
			MISC::SET_BIT(&(uParam0->f_1.f_303), iParam1);
		}
	}

	return;
}

void func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5) // Position - 0x139E Hash - 0xCC6FFE72 ^0x949F4B79
{
	if (uParam0->f_483 == 3)
		return;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uParam3))
	{
		uParam0->f_467[uParam0->f_483 /*5*/] = { uParam1 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_2 = { uParam3 };
		uParam0->f_467[uParam0->f_483 /*5*/].f_4 = iParam5;
		uParam0->f_483 = uParam0->f_483 + 1;
	}

	return;
}

void func_26(var uParam0, var uParam1, float fParam2) // Position - 0x13FE Hash - 0x24521FFC ^0x6711095C
{
	var unk;

	uParam0->f_411 = *uParam1;
	uParam0->f_411.f_1 = uParam1->f_1;
	uParam0->f_454 = MISC::GET_GAME_TIMER() + 1000;
	unk = { func_28(uParam0, &(uParam0->f_411)) };
	func_27(&(uParam0->f_649), unk, fParam2);
	return;
}

void func_27(var uParam0, var uParam1, var uParam2, var uParam3, float fParam4) // Position - 0x1443 Hash - 0x72EC7912 ^0xC3A718CD
{
	uParam0->f_11 = { uParam1 };

	if (fParam4 != -1f)
		uParam0->f_7 = fParam4;

	return;
}

Vector3 func_28(var uParam0, var uParam1) // Position - 0x1462 Hash - 0xF4C75BC ^0x4CA2BC55
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	var unk;
	var unk2;
	float unk3;
	float unk4;
	float num7;
	float num8;
	float num9;
	float num10;
	float num11;

	num = uParam0->f_1.f_4;
	num2 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &num3, &num4);
	num5 = num * (num3 - 0.5f);
	num6 = -num2 * (num4 - 0.5f);
	unk = uParam0->f_404;
	unk2 = { uParam0->f_401 };
	unk2 = { unk2 + { num6, num5 * SYSTEM::COS(90f - unk), num5 * SYSTEM::SIN(90f - unk) } };
	num7 = num5;
	num8 = MISC::ATAN(num7 / uParam0->f_1.f_8);
	num9 = uParam0->f_401.f_2 - uParam0->f_649.f_1.f_2;
	num10 = unk2.f_2 - uParam0->f_649.f_1.f_2;
	num11 = num10 - num9;
	num12 = MISC::ATAN(num11 / uParam0->f_1.f_8);
	num13 = (num8 * 3f) / 18f;
	return num12 * 0.95f, num13, -num8 * 0.85f;
}

void func_29(var uParam0, var uParam1, var uParam2, var uParam3) // Position - 0x1547 Hash - 0x80FF083F ^0x294B844A
{
	int value;
	int value2;

	value = uParam0->f_1.f_2;
	value2 = uParam0->f_1.f_3;

	if (*uParam1 < 0 || *uParam1 > value)
		return;

	if (uParam1->f_1 < 0 || uParam1->f_1 > value2)
		return;

	*uParam2 = SYSTEM::TO_FLOAT(*uParam1) / SYSTEM::TO_FLOAT(value);
	*uParam3 = SYSTEM::TO_FLOAT(uParam1->f_1) / SYSTEM::TO_FLOAT(value2);
	return;
}

int func_30(int iParam0, int iParam1) // Position - 0x15B2 Hash - 0x38064ADB ^0x38064ADB
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2;
			
				case 1:
					return 1;
			
				default:
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					return 3;
			
				case 1:
					return 4;
			
				default:
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return 5;
			
				default:
					break;
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return 6;
			
				case 1:
					return 7;
			
				default:
					break;
			}
			break;
	
		case 4:
			switch (iParam1)
			{
				case 0:
					return 8;
			
				case 1:
					return 9;
			
				default:
					break;
			}
			break;
	}

	return 0;
}

int func_31(int iParam0) // Position - 0x1698 Hash - 0x25418874 ^0x25418874
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 7;
			break;
	
		case 1:
			num = 8;
			break;
	
		case 2:
			num = 9;
			break;
	
		case 3:
			num = 10;
			break;
	
		case 4:
			num = 11;
			break;
	}

	return num;
}

void func_32(var uParam0) // Position - 0x16E9 Hash - 0x3D21498F ^0x3EB983A1
{
	int num;

	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_16.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);

	switch (*uParam0)
	{
		case 0:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 1:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(3);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 3:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(6);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	
		case 4:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}

	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(func_33(*uParam0, uParam0->f_1.f_29));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = func_66(func_31(*uParam0));

	if (num != 0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	
		if (num == func_30(*uParam0, 0))
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else if (num == func_30(*uParam0, 1))
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_33(int iParam0, int iParam1) // Position - 0x1956 Hash - 0xAD2F6390 ^0x71491155
{
	return IS_BIT_SET(Global_113648.f_1.f_120[iParam0], iParam1);
}

void func_34(var uParam0) // Position - 0x196D Hash - 0x73E41FC0 ^0xC301F174
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_LABELS");
	func_9(_("Name"));
	func_9(_("Expertise"));
	func_9(_("Skills"));

	switch (*uParam0)
	{
		case 0:
			func_9(_("JEWEL STORE"));
			break;
	
		case 1:
			func_9(_("LS PORT"));
			break;
	
		case 2:
			func_9(_("PALETO"));
			break;
	
		case 3:
			func_9(_("BUREAU"));
			break;
	
		case 4:
			func_9(_("BIG SCORE A"));
			func_9(_("BIG SCORE B"));
			break;
	}

	if (*uParam0 != 1)
		func_9(_("CREW"));

	func_9(_("TODO"));

	if (*uParam0 != 2)
		func_9(_("APPROACH"));

	switch (*uParam0)
	{
		case 0:
			func_9(_("CCTV"));
			func_9(_("VENT"));
			func_9(_("ALARM"));
			func_9(_("TUNNEL"));
			func_9(_("LOUD"));
			func_9(_("SMART"));
			break;
	
		case 1:
			func_9(_("FREIGHTER"));
			func_9(_("OFFSHORE"));
			break;
	
		case 2:
			func_9(_("plan A"));
			func_9(_("plan B?"));
			func_9(_("67 secs"));
			func_9(_("8+ Cops"));
			func_9(_("4 Cars"));
			func_9(_("Banker's wife"));
			func_9(_("$$$"));
			func_9(_("Need military grade hardware"));
			func_9(_("8/10 Smash it!"));
			func_9(_("Military Hardware Route"));
			func_9(_("Every 2 or 3hrs"));
			func_9(_("BOAT"));
			break;
	
		case 3:
			func_9(_("Davis fire station"));
			func_9(_("floor 53"));
			func_9(_("Bomb"));
			func_9(_("Drive 10"));
			func_9(_("83QSL722"));
			func_9(_("FIRE CREW"));
			func_9(_("ROOF ENTRY"));
			break;
	
		case 4:
			func_9(_("DROP-OFF"));
			func_9(_("HOLE"));
			func_9(_("SECURITY"));
			func_9(_("GETAWAY"));
			func_9(_("TUNNEL AMBUSH"));
			func_9(_("SUBTLE"));
			func_9(_("OBVIOUS"));
			break;
	}

	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_35(var uParam0) // Position - 0x1B6F Hash - 0x8C701288 ^0x8A9F41B8
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_36(var uParam0, int iParam1, int iParam2) // Position - 0x1B91 Hash - 0xB2D6187D ^0x65758CD8
{
	int num;
	int num2;
	int num3;

	if (iParam1 < 0 || iParam1 >= uParam0->f_1.f_96)
		return;

	func_24(uParam0, 2, 1);
	num = func_66(func_31(*uParam0));
	num2 = Global_96710[num /*19*/].f_1[iParam1];

	switch (num2)
	{
		case 1:
			func_63(uParam0, num, 1);
			break;
	
		case 2:
			func_63(uParam0, num, 3);
			break;
	
		case 3:
			func_63(uParam0, num, 2);
			break;
	}

	func_62(uParam0, uParam0->f_417);
	func_37(uParam0, uParam0->f_417);
	uParam0->f_450 = iParam1;
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_26(uParam0, &uParam0->f_1.f_97[iParam1 /*2*/], uParam0->f_1.f_10);

	if (iParam2 != 0)
	{
		num3 = 0;
	
		while (uParam0->f_418[num3] != iParam2)
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			num3 = num3 + 1;
		
			if (num3 > 7)
				return;
		}
	}

	func_12(uParam0, false);
	func_19(uParam0);
	return;
}

void func_37(var uParam0, int iParam1) // Position - 0x1CC7 Hash - 0x4808C267 ^0x47789B91
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int i;
	int num6;

	num = func_31(*uParam0);
	num2 = func_66(num);
	num3 = Global_96710[num2 /*19*/].f_1[iParam1];
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/]));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_97[iParam1 /*2*/].f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_34(uParam0);
	num4 = 0;

	if (Global_113648.f_1.f_12[num2 /*6*/][iParam1] != 0)
	{
		num5 = Global_113648.f_1.f_12[num2 /*6*/][iParam1];
		func_42(uParam0->f_413, num5, iParam1, num4, num5);
	}
	else
	{
		for (i = 0; i < 14; i = i + 1)
		{
			num6 = i;
		
			if (func_41(num6) == num3)
			{
				if (func_40(num6))
				{
					if (!func_39(num6))
					{
						if (!func_38(uParam0, num6))
						{
							if (!(num6 == 11 && *uParam0 == 3))
							{
								func_42(uParam0->f_413, num6, iParam1, num4, i);
								uParam0->f_418[num4] = num6;
								num4 = num4 + 1;
							}
						}
					}
				}
			}
		}
	}

	if (Global_113648.f_1.f_12[num2 /*6*/][iParam1] != 0)
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_38(var uParam0, int iParam1) // Position - 0x1E51 Hash - 0xD0CBB893 ^0x2E881F23
{
	int num;
	int i;

	num = func_66(func_31(*uParam0));

	for (i = 0; i < uParam0->f_417; i = i + 1)
	{
		if (Global_113648.f_1.f_12[num /*6*/][i] == iParam1)
			return true;
	}

	return false;
}

BOOL func_39(int iParam0) // Position - 0x1E96 Hash - 0xCD7AE937 ^0x97E5EFC3
{
	return IS_BIT_SET(Global_113648.f_1.f_118, iParam0);
}

BOOL func_40(int iParam0) // Position - 0x1EA9 Hash - 0xCD7AE937 ^0x87E41653
{
	return IS_BIT_SET(Global_113648.f_1.f_116, iParam0);
}

int func_41(int iParam0) // Position - 0x1EBC Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_96556[iParam0 /*5*/];
}

void func_42(Player plParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x1ECC Hash - 0xC1D893F1 ^0xE2A1B154
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, "SET_DATA_SLOT");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam3);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam4);
	func_9(func_60(iParam1));
	func_9(func_59(iParam1));

	switch (func_41(iParam1))
	{
		case 1:
			func_9(func_58(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 0));
			func_9(func_58(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 1));
			func_9(func_58(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 2));
			func_9(func_58(3));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_55(iParam1, 3));
			break;
	
		case 2:
			func_9(func_54(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 0));
			func_9(func_54(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 1));
			func_9(func_54(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_51(iParam1, 2));
			break;
	
		case 3:
			func_9(func_49(0));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 0));
			func_9(func_49(1));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 1));
			func_9(func_49(2));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_44(iParam1, 2));
			break;
	}

	func_9(_("Cut"));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(func_43(iParam1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

int func_43(int iParam0) // Position - 0x2008 Hash - 0x7647021A ^0xF0097466
{
	return Global_96556[iParam0 /*5*/].f_1;
}

int func_44(int iParam0, int iParam1) // Position - 0x201A Hash - 0x65830797 ^0x43288986
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_46(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_45(iParam1))) * 100f);
}

int func_45(int iParam0) // Position - 0x2043 Hash - 0xE6F49B0F ^0xE6F49B0F
{
	switch (iParam0)
	{
		case 0:
			return 100;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	}

	return 0;
}

int func_46(int iParam0, int iParam1) // Position - 0x207D Hash - 0x107CF8FF ^0x107CF8FF
{
	if (func_41(iParam0) != 3)
		return -1;

	return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1) // Position - 0x209B Hash - 0x8C17C022 ^0xA2A03D5A
{
	return func_48(iParam1, Global_113648.f_1.f_73[iParam0 /*3*/].f_1, Global_113648.f_1.f_73[iParam0 /*3*/].f_2);
}

int func_48(int iParam0, int iParam1, int iParam2) // Position - 0x20C5 Hash - 0x276DE4E4 ^0xC1F93B73
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return SYSTEM::SHIFT_RIGHT(iParam1, 15 * iParam0) & 32767;
	
		case 2:
		case 3:
			return SYSTEM::SHIFT_RIGHT(iParam2, 15 * (iParam0 - 2)) & 32767;
	}

	return -1;
}

char* func_49(int iParam0) // Position - 0x2119 Hash - 0xBBF7B8F4 ^0xBBF7B8F4
{
	return func_50(3, iParam0);
}

char* func_50(int iParam0, int iParam1) // Position - 0x2128 Hash - 0xC9A6CED5 ^0x81A4BD4D
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return _("Max Health");
			
				case 1:
					return _("Accuracy");
			
				case 2:
					return _("Shoot Rate");
			
				case 3:
					return _("Weapon Choice");
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					return _("Sys Knowledge");
			
				case 1:
					return _("Decryption Skill");
			
				case 2:
					return _("Access Speed");
			}
			break;
	
		case 3:
			switch (iParam1)
			{
				case 0:
					return _("Driving Skill");
			
				case 1:
					return _("Composure");
			
				case 2:
					return _("Vehicle Choice");
			}
			break;
	}

	return "ERROR!";
}

int func_51(int iParam0, int iParam1) // Position - 0x220B Hash - 0x65830797 ^0x43288986
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_53(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_52(iParam1))) * 100f);
}

int func_52(int iParam0) // Position - 0x2234 Hash - 0xE6F49B0F ^0xE6F49B0F
{
	switch (iParam0)
	{
		case 0:
			return 100;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	}

	return 0;
}

int func_53(int iParam0, int iParam1) // Position - 0x226E Hash - 0xB0F8C05A ^0xB0F8C05A
{
	if (func_41(iParam0) != 2)
		return -1;

	return func_47(iParam0, iParam1);
}

char* func_54(int iParam0) // Position - 0x228C Hash - 0xF5A35C63 ^0xF5A35C63
{
	return func_50(2, iParam0);
}

int func_55(int iParam0, int iParam1) // Position - 0x229B Hash - 0x65830797 ^0x43288986
{
	return SYSTEM::ROUND((SYSTEM::TO_FLOAT(func_57(iParam0, iParam1)) / SYSTEM::TO_FLOAT(func_56(iParam1))) * 100f);
}

int func_56(int iParam0) // Position - 0x22C4 Hash - 0xB42AD36E ^0x181DADB6
{
	switch (iParam0)
	{
		case 0:
			return 1000;
	
		case 1:
			return 100;
	
		case 2:
			return 100;
	
		case 3:
			return 100;
	}

	return 0;
}

int func_57(int iParam0, int iParam1) // Position - 0x230D Hash - 0xFED53070 ^0xFED53070
{
	if (func_41(iParam0) != 1)
		return -1;

	return func_47(iParam0, iParam1);
}

char* func_58(int iParam0) // Position - 0x232B Hash - 0xA3986FDD ^0xA3986FDD
{
	return func_50(1, iParam0);
}

char* func_59(int iParam0) // Position - 0x233A Hash - 0x1BA04DF5 ^0x5B739157
{
	switch (Global_96556[iParam0 /*5*/])
	{
		case 1:
			return _("Gunman");
	
		case 2:
			return _("Hacker");
	
		case 3:
			return _("Driver");
	}

	return "ERROR!";
}

char* func_60(int iParam0) // Position - 0x2383 Hash - 0x3E978ED3 ^0x3E978ED3
{
	return func_61(iParam0);
}

char* func_61(int iParam0) // Position - 0x2391 Hash - 0xE6862179 ^0xF681E6D3
{
	switch (iParam0)
	{
		case 1:
			return _("Gustavo Mota");
	
		case 2:
			return _("Karl Abolaji");
	
		case 10:
			return _("Packie McReary");
	
		case 11:
			return _("Chef");
	
		case 3:
			return _("Hugh Welsh");
	
		case 4:
			return _("Norm Richards");
	
		case 5:
			return _("Daryl Johns");
	
		case 6:
			return _("Paige Harris");
	
		case 7:
			return _("Christian Feltz");
	
		case 12:
			return _("Rickie Lukens");
	
		case 8:
			return _("Eddie Toh");
	
		case 13:
			return _("Taliana Martinez");
	
		case 9:
			return _("Karim Denz");
	}

	return "ERROR!";
}

void func_62(var uParam0, int iParam1) // Position - 0x2474 Hash - 0x366CBD83 ^0xA09512EF
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iParam1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

void func_63(var uParam0, int iParam1, int iParam2) // Position - 0x2493 Hash - 0x76029F0E ^0x3C5E6540
{
	int i;

	if (!IS_BIT_SET(Global_96710[iParam1 /*19*/].f_18, iParam2))
	{
		if (!MISC::ARE_STRINGS_EQUAL(&Global_96710[iParam1 /*19*/].f_7[iParam2 /*2*/], ""))
		{
			func_25(uParam0, uParam0->f_1.f_276, Global_96710[iParam1 /*19*/].f_7[iParam2 /*2*/], 1);
			MISC::SET_BIT(&(Global_96710[iParam1 /*19*/].f_18), iParam2);
		
			for (i = 0; i < 10; i = i + 1)
			{
				if (MISC::ARE_STRINGS_EQUAL(&Global_96710[iParam1 /*19*/].f_7[iParam2 /*2*/], &Global_96710[i /*19*/].f_7[iParam2 /*2*/]))
					MISC::SET_BIT(&(Global_96710[i /*19*/].f_18), iParam2);
			}
		}
	}

	return;
}

void func_64(var uParam0) // Position - 0x253A Hash - 0x94578A1B ^0x2DD0BB5D
{
	func_26(uParam0, &(uParam0->f_1.f_12), 45f);
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_19(uParam0);
	return;
}

void func_65(var uParam0) // Position - 0x2570 Hash - 0xACBFE982 ^0x99C61752
{
	switch (uParam0->f_464)
	{
		case 1:
		case 2:
		case 3:
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			break;
	}

	HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
	return;
}

int func_66(int iParam0) // Position - 0x25B3 Hash - 0xA594F9CE ^0xF1C20CAA
{
	if (iParam0 == 13 || iParam0 == -1)
		return 0;

	return Global_113648.f_9087.f_99.f_205[iParam0];
}

int func_67(int iParam0) // Position - 0x25E0 Hash - 0x79CEFFDC ^0x79CEFFDC
{
	switch (iParam0)
	{
		case 0:
			return 2;
	
		case 1:
			return 3;
	
		case 2:
			return 4;
	
		case 3:
			return 5;
	
		case 4:
			return 6;
	}

	return -1;
}

void func_68(var uParam0) // Position - 0x2631 Hash - 0x91EAB0F ^0x91EAB0F
{
	if (IS_BIT_SET(uParam0->f_449, 1))
		func_69(uParam0);

	return;
}

void func_69(var uParam0) // Position - 0x2649 Hash - 0xA925DCF0 ^0xDA671B97
{
	BOOL flag;
	float dx;
	float unk;
	float unk2;
	float headingFromVector2d;
	BOOL num;

	flag = false;

	if (!IS_BIT_SET(uParam0->f_449, 2))
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_149(0))
			{
				if (func_140(8))
				{
					if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uParam0->f_401) < 4f)
					{
						dx = { uParam0->f_401 - ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
						headingFromVector2d = MISC::GET_HEADING_FROM_VECTOR_2D(dx, dx.f_1);
						num = MISC::ABSF(uParam0->f_404 - headingFromVector2d);
					
						if (num <= 70f)
						{
							flag = true;
						}
						else
						{
							num2 = uParam0->f_404;
						
							if (num2 > 180f)
								num2 = num2 - 360f;
							else if (num2 < -180f)
								num2 = num2 + 360f;
						
							if (num2 - headingFromVector2d < num)
								num = MISC::ABSF(num2 - headingFromVector2d);
						
							if (num <= 70f)
							{
								flag = true;
							}
							else
							{
								if (headingFromVector2d > 180f)
									headingFromVector2d = headingFromVector2d - 360f;
								else if (headingFromVector2d < -180f)
									headingFromVector2d = headingFromVector2d + 360f;
							
								if (uParam0->f_404 - headingFromVector2d < num)
									num = MISC::ABSF(uParam0->f_404 - headingFromVector2d);
							
								if (num <= 70f)
								{
									flag = true;
								}
								else
								{
									if (num2 - headingFromVector2d < num)
										num = MISC::ABSF(num2 - headingFromVector2d);
								
									if (num <= 70f)
										flag = true;
								}
							}
						}
					}
				}
			}
		}
	
		if (flag)
		{
			if (uParam0->f_451 == -1)
			{
				func_139(&(uParam0->f_451), 3, _("Press ~INPUT_CONTEXT~ to view the plans."), 0, 0, 0, 0);
			}
			else if (func_138(uParam0->f_451, true))
			{
				func_136(&(uParam0->f_451));
				func_122(uParam0);
			}
		}
		else if (uParam0->f_451 != -1)
		{
			func_136(&(uParam0->f_451));
		}
	}
	else
	{
		flag2 = func_11(1, *uParam0);
		func_80(uParam0);
	
		if (!flag2 && uParam0->f_453 > 15 && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_36) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_CANCEL) || IS_BIT_SET(uParam0->f_449, 8))
		{
			MISC::CLEAR_BIT(&(uParam0->f_449), 8);
			func_70(uParam0, false);
		}
	}

	return;
}

void func_70(var uParam0, BOOL bParam1) // Position - 0x2862 Hash - 0x57BEA2E3 ^0x84C680CE
{
	Vector3 vector;
	Interior unk;

	uParam0->f_453 = 0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	
		if (!bParam1)
		{
			vector = { uParam0->f_401 };
			vector = { vector + { 0f, 1f * SYSTEM::COS(180f - uParam0->f_404), 1f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), -1871534317, false, 0, false);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), true, false);
		}
	}

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_AMBIENT_SCRIPT | 4 | 128);

	HUD::DISPLAY_RADAR(true);
	func_73(false);
	func_72();
	HUD::THEFEED_RESUME();
	HUD::RESET_HUD_COMPONENT_VALUES(HUD_SAVING_GAME);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(false);
	func_71(&(uParam0->f_649), false, true);
	func_14(&uParam0->f_1.f_20[0 /*4*/], 1);
	func_14(&uParam0->f_1.f_20[1 /*4*/], 1);
	func_14(&uParam0->f_1.f_108[0 /*4*/], 1);
	func_14(&uParam0->f_1.f_108[1 /*4*/], 1);
	HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	while (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
		SYSTEM::WAIT(0);
	}

	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);

	if (interiorAtCoords != 0)
		INTERIOR::UNPIN_INTERIOR(interiorAtCoords);

	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_65(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 7);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	Global_96688 = 0;
	return;
}

void func_71(var uParam0, BOOL bParam1, BOOL bParam2) // Position - 0x29E7 Hash - 0xB8299397 ^0x1316F39D
{
	if (CAM::DOES_CAM_EXIST(*uParam0))
	{
		if (bParam2)
			CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, bParam1, 0);
	
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			CAM::SET_CAM_ACTIVE(*uParam0, false);
	
		CAM::DESTROY_CAM(*uParam0, bParam1);
	}

	if (uParam0->f_23)
	{
		HUD::UNLOCK_MINIMAP_ANGLE();
		uParam0->f_23 = 0;
	}

	uParam0->f_1 = { 0f, 0f, 0f };
	uParam0->f_4 = { 0f, 0f, 0f };
	uParam0->f_7 = 0f;
	uParam0->f_20 = 0;
	uParam0->f_21 = 0;
	uParam0->f_22 = 0;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = 0f;
	uParam0->f_18 = 0f;
	return;
}

void func_72() // Position - 0x2A81 Hash - 0xC30A8265 ^0x139DE662
{
	Global_23131.f_5 = 0;
	return;
}

void func_73(BOOL bParam0) // Position - 0x2A8F Hash - 0x5FE88D2A ^0xA22C291D
{
	if (bParam0)
	{
		func_79();
	
		if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
			MISC::SET_BIT(&Global_8254, 16);
	
		Global_20383.f_1 = 1;
	
		if (func_149(0))
			func_74(0);
	}
	else if (Global_20383.f_1 == 1)
	{
		if (!Global_20383.f_1 == 0)
			Global_20383.f_1 = 3;
	}

	return;
}

void func_74(int iParam0) // Position - 0x2AF2 Hash - 0x4066FEF5 ^0x9787FBDA
{
	if (func_78())
		return;

	if (Global_20584)
		if (func_77())
			func_76(true, true);
		else
			func_76(false, false);

	if (Global_20383.f_1 == 10 || Global_20383.f_1 == 9)
		MISC::SET_BIT(&Global_8254, 16);

	if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);

	Global_21725 = 5;

	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 30);
	else
		MISC::CLEAR_BIT(&Global_8253, 30);

	if (!func_75())
		Global_20383.f_1 = 3;

	return;
}

BOOL func_75() // Position - 0x2B7C Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

void func_76(BOOL bParam0, BOOL bParam1) // Position - 0x2BA3 Hash - 0xF40FC178 ^0xA6F60F17
{
	if (bParam0)
	{
		if (func_149(0))
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

BOOL func_77() // Position - 0x2C17 Hash - 0x8DF3D75D ^0x8DF3D75D
{
	return IS_BIT_SET(Global_1962996, 5);
}

BOOL func_78() // Position - 0x2C25 Hash - 0xC41437CB ^0xC41437CB
{
	return IS_BIT_SET(Global_1962996, 19);
}

void func_79() // Position - 0x2C34 Hash - 0xF8FE2348 ^0xA77911B2
{
	if (Global_20383.f_1 == 9 || Global_20383.f_1 == 10)
	{
		Global_21778 = 0;
		Global_21774 = 1;
	}

	return;
}

void func_80(var uParam0) // Position - 0x2C5D Hash - 0xA7BF8741 ^0x6F3BDC1E
{
	const char* controlGroupInstructionalButtonsString;
	BOOL flag;
	Vector3 vector;

	controlGroupInstructionalButtonsString = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(PLAYER_CONTROL, 1, true);

	if (!MISC::ARE_STRINGS_EQUAL(controlGroupInstructionalButtonsString, uParam0->f_466))
		func_8(uParam0);

	uParam0->f_466 = controlGroupInstructionalButtonsString;
	func_120();
	func_110(uParam0);
	func_88(uParam0);

	if (uParam0->f_464 == 1)
		func_85(uParam0);

	if (func_21())
		func_19(uParam0);

	flag = uParam0->f_454 > MISC::GET_GAME_TIMER();
	func_81(&(uParam0->f_649), IS_BIT_SET(uParam0->f_449, 4), IS_BIT_SET(uParam0->f_449, 5) && !flag, true, false, 1045220557, true, 1065353216, false);

	if (IS_BIT_SET(uParam0->f_449, 7))
		if (!CUTSCENE::IS_CUTSCENE_PLAYING() && CAM::IS_SCREEN_FADED_IN() && !HUD::IS_PAUSE_MENU_ACTIVE())
			if (uParam0->f_464 != 1)
				if (uParam0->f_464 == 0 || !IS_BIT_SET(uParam0->f_449, 11) && !IS_BIT_SET(uParam0->f_449, 10) && !func_20() && uParam0->f_483 == 0)
					if (!IS_BIT_SET(uParam0->f_449, 18) || uParam0->f_464 == 2)
						GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(uParam0->f_414, 255, 255, 255, 0, 0);

	HUD::DISPLAY_RADAR(false);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WEAPON_ICON);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_WANTED_STARS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_VEHICLE_CLASS);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_AREA_NAME);
	HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
	HUD::THEFEED_HIDE_THIS_FRAME();
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(HUD_SAVING_GAME, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);

	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_UP);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_DOWN);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_LEFT);
	PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_RIGHT);

	if (!IS_BIT_SET(uParam0->f_449, 7))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			vector = { uParam0->f_401 };
			vector = { vector + { 0.5f, 2.9f * SYSTEM::COS(180f - uParam0->f_404), 2.9f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_AMBIENT_SCRIPT | 4 | 128);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			MISC::SET_BIT(&(uParam0->f_449), 7);
		}
	}

	return;
}

void func_81(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, int iParam5, BOOL bParam6, int iParam7, BOOL bParam8) // Position - 0x2E9A Hash - 0xBD3DA880 ^0xF1F2F0B8
{
	var unk;
	float unk2;
	float unk3;
	float unk4;
	float unk5;
	float controlUnboundNormal;
	float controlUnboundNormal2;
	eControlAction num;
	eControlAction num2;

	unk = 4;
	PAD::ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(FRONTEND_CONTROL);
	func_84(&unk[0], &unk[1], &unk[2], &unk[3], false, false);

	if (PAD::IS_LOOK_INVERTED())
		unk[3] = unk[3] * -1;

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		controlUnboundNormal = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_X);
		controlUnboundNormal2 = PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_CURSOR_Y);
		num = controlUnboundNormal - uParam0->f_29;
		num2 = controlUnboundNormal2 - uParam0->f_30;
		uParam0->f_29 = controlUnboundNormal;
		uParam0->f_30 = controlUnboundNormal2;
	
		if (bParam4)
		{
			unk[2] = -SYSTEM::ROUND(num * iParam5 * 127f);
			unk[3] = -SYSTEM::ROUND(num2 * iParam5 * 127f);
		}
		else
		{
			unk[2] = SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_LR) * iParam5 * 127f);
			unk[3] = SYSTEM::ROUND(PAD::GET_CONTROL_UNBOUND_NORMAL(FRONTEND_CONTROL, INPUT_SCALED_LOOK_UD) * iParam5 * 127f);
		}
	
		unk[2] = func_83(unk[2] + uParam0->f_24, -127, 127);
		unk[3] = func_83(unk[3] + uParam0->f_25, -127, 127);
	}

	if (uParam0->f_24 == unk[2] && uParam0->f_25 == unk[3])
	{
		if (uParam0->f_27 < MISC::GET_GAME_TIMER())
		{
			uParam0->f_24 = 0;
			uParam0->f_25 = 0;
		
			if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
			{
				unk[2] = 0;
				unk[3] = 0;
				uParam0->f_28 = 1;
			}
		}
	}
	else
	{
		uParam0->f_24 = unk[2];
		uParam0->f_25 = unk[3];
		uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
		uParam0->f_28 = 0;
	}

	if (bParam2)
	{
		uParam0->f_8.f_2 = -(SYSTEM::TO_FLOAT(unk[2]) / 127f) * (float)uParam0->f_20;
		uParam0->f_8.f_1 = (-uParam0->f_8.f_2 * (float)uParam0->f_22) / (float)uParam0->f_20;
		uParam0->f_8 = -(SYSTEM::TO_FLOAT(unk[3]) / 127f) * (float)uParam0->f_21;
	}
	else
	{
		uParam0->f_8 = { 0f, 0f, 0f };
		uParam0->f_24 = 0;
		uParam0->f_25 = 0;
	}

	num3 = 30f * SYSTEM::TIMESTEP();
	num4 = { uParam0->f_8 + uParam0->f_11 };

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && bParam2 && !uParam0->f_28)
	{
		uParam0->f_14 = num4;
		uParam0->f_14.f_1 = num4.f_1;
		uParam0->f_14.f_2 = num4.f_2;
	}
	else
	{
		uParam0->f_14 = uParam0->f_14 + func_82((num4 - uParam0->f_14) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_1 = uParam0->f_14.f_1 + func_82((num4.f_1 - uParam0->f_14.f_1) * 0.05f * num3 * iParam7, -3f, 3f);
		uParam0->f_14.f_2 = uParam0->f_14.f_2 + func_82((num4.f_2 - uParam0->f_14.f_2) * 0.05f * num3 * iParam7, -3f, 3f);
	}

	if (uParam0->f_26)
	{
		uParam0->f_14 = func_82(uParam0->f_14, SYSTEM::TO_FLOAT(-uParam0->f_21), SYSTEM::TO_FLOAT(uParam0->f_21));
		uParam0->f_14.f_1 = func_82(uParam0->f_14.f_1, SYSTEM::TO_FLOAT(-uParam0->f_22), SYSTEM::TO_FLOAT(uParam0->f_22));
		uParam0->f_14.f_2 = func_82(uParam0->f_14.f_2, SYSTEM::TO_FLOAT(-uParam0->f_20), SYSTEM::TO_FLOAT(uParam0->f_20));
	}

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL) && bParam1)
		if (uParam0->f_28)
			uParam0->f_17 = uParam0->f_7;
	else
		uParam0->f_17 = uParam0->f_7;

	if (bParam1)
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(PLAYER_CONTROL))
		{
			action = INPUT_SNIPER_ZOOM_IN_ONLY;
			action2 = INPUT_SNIPER_ZOOM_OUT_ONLY;
		
			if (bParam6)
			{
				action = INPUT_CURSOR_SCROLL_UP;
				action2 = INPUT_CURSOR_SCROLL_DOWN;
			}
		
			if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action))
			{
				uParam0->f_17 = uParam0->f_17 - 5f;
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, action2))
			{
				uParam0->f_17 = uParam0->f_17 + 5f;
				uParam0->f_27 = MISC::GET_GAME_TIMER() + 4000;
				uParam0->f_28 = 0;
			}
		
			if (bParam3)
				uParam0->f_17 = func_82(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7);
			else
				uParam0->f_17 = func_82(uParam0->f_17, uParam0->f_7 - uParam0->f_19, uParam0->f_7 + uParam0->f_19);
		}
		else if (bParam8)
		{
			unk[1] = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_LT);
			unk[3] = PAD::GET_CONTROL_VALUE(FRONTEND_CONTROL, INPUT_FRONTEND_RT);
		
			if (bParam3)
			{
				if (SYSTEM::TO_FLOAT(unk[3]) > 127f)
					uParam0->f_17 = uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * (uParam0->f_19 / 2f));
			}
			else
			{
				uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
				uParam0->f_17 = uParam0->f_17 - (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[3]) / 128f) * uParam0->f_19);
			}
		}
		else if (bParam3)
		{
			if (SYSTEM::TO_FLOAT(unk[1]) < 0f)
				uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
		}
		else
		{
			uParam0->f_17 = uParam0->f_17 + (float)SYSTEM::ROUND((SYSTEM::TO_FLOAT(unk[1]) / 128f) * uParam0->f_19);
		}
	}

	uParam0->f_18 = uParam0->f_18 + ((uParam0->f_17 - uParam0->f_18) * 0.06f * num3);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4 + uParam0->f_14, uParam0->f_18, 0, 1, 1, 2);

	if (CAM::DOES_CAM_EXIST(*uParam0))
		if (CAM::IS_CAM_ACTIVE(*uParam0))
			if (CAM::IS_CAM_RENDERING(*uParam0))
				RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();

	return;
}

float func_82(float fParam0, float fParam1, float fParam2) // Position - 0x33EE Hash - 0xF4DC03E3 ^0xF4DC03E3
{
	if (fParam0 > fParam2)
		return fParam2;
	else if (fParam0 < fParam1)
		return fParam1;

	return fParam0;
}

int func_83(int iParam0, int iParam1, int iParam2) // Position - 0x3415 Hash - 0x1D7642BB ^0x1D7642BB
{
	if (iParam0 > iParam2)
		return iParam2;
	else if (iParam0 < iParam1)
		return iParam1;

	return iParam0;
}

void func_84(var uParam0, var uParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0x343A Hash - 0x61DDCD0A ^0x4AAD6D
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

void func_85(var uParam0) // Position - 0x353E Hash - 0xA512D6C7 ^0xA512D6C7
{
	BOOL flag;
	int i;

	if (!func_11(3, *uParam0))
	{
		if (uParam0->f_483 == 0 && uParam0->f_455 > 3)
		{
			if (uParam0->f_452 == -1)
			{
				if (IS_BIT_SET(uParam0->f_449, 19))
					uParam0->f_452 = MISC::GET_GAME_TIMER() + 500;
				else
					uParam0->f_452 = MISC::GET_GAME_TIMER();
			}
			else if (MISC::GET_GAME_TIMER() > uParam0->f_452)
			{
				flag = false;
			
				for (i = 0; i < uParam0->f_1.f_369; i = i + 1)
				{
					if (!flag)
					{
						if (!IS_BIT_SET(uParam0->f_1.f_303, i + 4))
						{
							func_87(uParam0, i);
						
							if (IS_BIT_SET(uParam0->f_1.f_370, i))
								MISC::SET_BIT(&(uParam0->f_449), 19);
							else
								MISC::CLEAR_BIT(&(uParam0->f_449), 19);
						
							flag = true;
						}
					}
				}
			
				if (!flag)
					func_86(3, *uParam0, true);
			}
		}
	}

	return;
}

void func_86(int iParam0, int iParam1, BOOL bParam2) // Position - 0x3614 Hash - 0x3CEAF240 ^0xD6185046
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return;

	if (iParam1 < 0 || iParam1 >= 32)
		return;

	flag = IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);

	if (flag == bParam2)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113648.f_9087.f_99.f_219[iParam0], iParam1);

	return;
}

void func_87(var uParam0, int iParam1) // Position - 0x3696 Hash - 0x67426DF7 ^0xB41298C8
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	func_26(uParam0, &uParam0->f_1.f_371[iParam1 /*2*/], uParam0->f_1.f_11);
	func_24(uParam0, iParam1 + 4, 1);
	uParam0->f_452 = -1;
	return;
}

void func_88(var uParam0) // Position - 0x36DD Hash - 0x8159B193 ^0xC2890C58
{
	int i;
	int j;

	if (!func_20() && CAM::IS_SCREEN_FADED_IN() && !CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (uParam0->f_483 > 0)
		{
			if (!IS_BIT_SET(uParam0->f_449, 13))
			{
				if (func_89(&(uParam0->f_484), &uParam0->f_467[0 /*5*/], &(uParam0->f_467[0 /*5*/].f_2), 4, 0, 0, 0))
				{
					uParam0->f_455 = 0;
				
					if (uParam0->f_467[0 /*5*/].f_4)
						MISC::CLEAR_BIT(&(uParam0->f_449), 11);
					else
						MISC::SET_BIT(&(uParam0->f_449), 11);
				
					for (i = 0; i < 2; i = i + 1)
					{
						uParam0->f_467[i /*5*/] = { uParam0->f_467[i + 1 /*5*/] };
						uParam0->f_467[i /*5*/].f_2 = { uParam0->f_467[i + 1 /*5*/].f_2 };
						uParam0->f_467[i /*5*/].f_4 = uParam0->f_467[i + 1 /*5*/].f_4;
					}
				
					uParam0->f_483 = uParam0->f_483 - 1;
				}
			}
			else
			{
				for (j = 0; j < 2; j = j + 1)
				{
					uParam0->f_467[j /*5*/] = { uParam0->f_467[j + 1 /*5*/] };
					uParam0->f_467[j /*5*/].f_2 = { uParam0->f_467[j + 1 /*5*/].f_2 };
					uParam0->f_467[j /*5*/].f_4 = uParam0->f_467[j + 1 /*5*/].f_4;
				}
			
				uParam0->f_483 = uParam0->f_483 - 1;
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
			}
		}
		else
		{
			if (IS_BIT_SET(uParam0->f_449, 11))
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
		
			if (IS_BIT_SET(uParam0->f_449, 13))
				MISC::CLEAR_BIT(&(uParam0->f_449), 13);
		
			uParam0->f_455 = uParam0->f_455 + 1;
		}
	}

	return;
}

BOOL func_89(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x388B Hash - 0x384540C1 ^0x384540C1
{
	func_109(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_90(sParam2, iParam3, false);
}

BOOL func_90(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x38D9 Hash - 0x77297D51 ^0x40DC584A
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
					func_108();
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
	
		if (func_107(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_106();
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
				func_99();
			
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
			
				if (func_98())
					return 0;
			
				if (TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()))
					return 0;
			
				if (WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), -72657034))
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
		
			if (func_75())
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
		
			func_97();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_96();
		func_91();
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
		func_108();
	}

	return 0;
}

void func_91() // Position - 0x3BA7 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_92())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_92() // Position - 0x3BDE Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_95())
		return false;

	if (func_93(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_93(Player plParam0) // Position - 0x3C41 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_94(plParam0, 20);
}

BOOL func_94(Player plParam0, int iParam1) // Position - 0x3C51 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_95() // Position - 0x3C69 Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_96() // Position - 0x3C72 Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_97() // Position - 0x3CA2 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_98() // Position - 0x3D37 Hash - 0x9A999369 ^0x4033F7BF
{
	int num;
	int weaponHash;

	if (Global_78558)
	{
		num = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			if (weaponHash == 100416529 || weaponHash == 205991906 || weaponHash == 856002082)
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

void func_99() // Position - 0x3DD0 Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_403(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[0 /*29*/])
				Global_20383 = false;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[1 /*29*/])
				Global_20383 = true;
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_113648.f_28052[2 /*29*/])
				Global_20383 = 2;
			else
				Global_20383 = false;
	}
	else
	{
		Global_20383 = func_100();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

BOOL func_100() // Position - 0x3E72 Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_101();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_101() // Position - 0x3E8B Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_104(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_103(PLAYER::PLAYER_PED_ID());
		
			if (func_102(num) && !func_403(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_102(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_102(BOOL bParam0) // Position - 0x3F88 Hash - 0x8907F004 ^0x8907F004
{
	return bParam0 < 3;
}

int func_103(Ped pedParam0) // Position - 0x3F94 Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_104(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_104(int iParam0) // Position - 0x3FD1 Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_102(iParam0))
		return func_105(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_105(int iParam0) // Position - 0x3FF6 Hash - 0xE7BACE19 ^0xE7BACE19
{
	return Global_2028[iParam0 /*29*/];
}

void func_106() // Position - 0x4008 Hash - 0x719867DD ^0xB196B20A
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

BOOL func_107(int iParam0, int iParam1) // Position - 0x405E Hash - 0xA14C4D3F ^0xA6034F77
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

void func_108() // Position - 0x4096 Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_109(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x40ED Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_110(var uParam0) // Position - 0x4143 Hash - 0xF9A29240 ^0x33F5B06B
{
	int num;
	int num2;
	int i;
	int num3;
	BOOL flag;
	int j;
	int num4;
	int k;
	int num5;
	int l;
	int num6;
	int scaleformMovieMethodReturnValueInt;
	int m;
	int scaleformMovieMethodReturnValueInt2;
	int value;
	int scaleformMovieMethodReturnValueInt3;
	var unk;

	uParam0->f_453 = uParam0->f_453 + 1;

	if (PAD::HAVE_CONTROLS_CHANGED(FRONTEND_CONTROL))
		func_8(uParam0);

	if (!IS_BIT_SET(uParam0->f_449, 11))
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_37) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_39) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_38) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_40))
		{
			func_118();
		
			if (IS_BIT_SET(uParam0->f_449, 12))
			{
				MISC::SET_BIT(&(uParam0->f_449), 13);
				MISC::CLEAR_BIT(&(uParam0->f_449), 11);
				MISC::CLEAR_BIT(&(uParam0->f_449), 10);
			}
		
			MISC::CLEAR_BIT(&(uParam0->f_449), 12);
		}
	}

	func_84(&uParam0->f_458[0], &uParam0->f_458[1], &uParam0->f_458[2], &uParam0->f_458[3], false, false);

	if (PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL))
	{
		uParam0->f_458[2] = uParam0->f_458[2] / 10;
		uParam0->f_458[3] = uParam0->f_458[3] / 10;
		uParam0->f_458[2] = func_83(uParam0->f_458[2] + uParam0->f_649.f_24, -127, 127);
		uParam0->f_458[3] = func_83(uParam0->f_458[3] + uParam0->f_649.f_25, -127, 127);
	}

	uParam0->f_649.f_24 = uParam0->f_458[2];
	uParam0->f_649.f_25 = uParam0->f_458[3];

	if (PAD::IS_LOOK_INVERTED())
		uParam0->f_458[3] = -uParam0->f_458[3];

	if (uParam0->f_454 > MISC::GET_GAME_TIMER())
	{
		uParam0->f_458[2] = 0;
		uParam0->f_458[3] = 0;
	}

	if (uParam0->f_464 == 0 || uParam0->f_464 == 4)
		if (uParam0->f_453 > 15)
			MISC::SET_BIT(&(uParam0->f_449), 4);
		else
			MISC::CLEAR_BIT(&(uParam0->f_449), 4);

	if (!IS_BIT_SET(uParam0->f_449, 10))
	{
		if (!IS_BIT_SET(uParam0->f_449, 11))
		{
			if (MISC::GET_GAME_TIMER() - uParam0->f_456 > 200)
			{
				if (uParam0->f_464 == 2 || uParam0->f_464 == 3 || uParam0->f_464 == 4)
				{
					if (MISC::GET_GAME_TIMER() - uParam0->f_457 > 25000)
					{
						func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_280[3 /*2*/], 1);
						uParam0->f_457 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(0, 8000);
					}
				}
			
				if (uParam0->f_464 == 2)
				{
					if (uParam0->f_458[1] < -85 || uParam0->f_458[0] < -85 || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 188) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 189) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_CURSOR_SCROLL_UP))
					{
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if (uParam0->f_458[1] > 85 || uParam0->f_458[0] > 85 || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 187) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 190) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_CURSOR_SCROLL_DOWN))
					{
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "GET_CURRENT_SELECTION");
						uParam0->f_682 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
			
				if (uParam0->f_464 == 3)
				{
					if (uParam0->f_458[1] < -85 || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 188) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_IN_ONLY))
					{
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(8);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					
						if (uParam0->f_416 != 0)
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
					
						uParam0->f_416 = 0;
					
						if (IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
					
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
					else if (uParam0->f_458[1] > 85 || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(2, 187) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SNIPER_ZOOM_OUT_ONLY))
					{
						NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_INPUT_EVENT");
						GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(9);
						GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
					
						if (uParam0->f_416 != 1)
							AUDIO::PLAY_SOUND_FRONTEND(-1, "MARKER_ERASE", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
					
						uParam0->f_416 = 1;
					
						if (IS_BIT_SET(uParam0->f_449, 9))
						{
							MISC::CLEAR_BIT(&(uParam0->f_449), 9);
							func_8(uParam0);
						}
					
						uParam0->f_456 = MISC::GET_GAME_TIMER();
						uParam0->f_457 = uParam0->f_456;
					}
				}
			
				if (!func_20() || IS_BIT_SET(uParam0->f_449, 13))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_37) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_38))
					{
						switch (uParam0->f_464)
						{
							case 3:
								if (!func_20())
								{
									if (!IS_BIT_SET(uParam0->f_449, 9))
									{
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										num = func_31(*uParam0);
									
										if (num != -1)
										{
											NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "GET_CURRENT_SELECTION");
											uParam0->f_680 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
											func_12(uParam0, true);
											func_14(&uParam0->f_1.f_20[0 /*4*/], 1);
											func_14(&uParam0->f_1.f_20[1 /*4*/], 1);
											Global_113648.f_1[*uParam0] = true;
											HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
										}
									}
								}
								break;
						
							case 2:
								if (!func_11(4, *uParam0))
								{
									num = func_31(*uParam0);
									num2 = func_66(num);
								
									if (uParam0->f_450 < Global_96710[num2 /*19*/])
									{
										NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "GET_CURRENT_SELECTION");
										uParam0->f_681 = GRAPHICS::END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE();
										func_12(uParam0, true);
									}
								}
								break;
						
							case 4:
								if (*uParam0 != 1)
								{
									func_86(4, *uParam0, true);
								
									if (!func_2(false))
										func_116(*uParam0);
								}
								else
								{
									func_86(5, *uParam0, true);
								}
							
								AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
								num = func_31(*uParam0);
								num2 = func_66(num);
							
								for (i = 0; i < Global_96710[num2 /*19*/]; i = i + 1)
								{
									if (Global_113648.f_1.f_12[num2 /*6*/][i] == 0 || func_41(Global_113648.f_1.f_12[num2 /*6*/][i]) != Global_96710[num2 /*19*/].f_1[i])
									{
										flag = false;
									
										for (j = 0; j < 14; j = j + 1)
										{
											if (!flag)
											{
												flag = true;
												num3 = j;
											
												if (num3 != 0)
												{
													if (Global_96556[num3 /*5*/] != Global_96710[num2 /*19*/].f_1[i])
														flag = false;
												
													if (!IS_BIT_SET(Global_113648.f_1.f_116, num3))
														flag = false;
												
													if (IS_BIT_SET(Global_113648.f_1.f_118, num3))
														flag = false;
												
													if (num3 == 11 && *uParam0 == 3)
														flag = false;
												
													if (func_38(uParam0, num3))
														flag = false;
												}
												else
												{
													flag = false;
												}
											}
										}
									
										Global_113648.f_1.f_12[num2 /*6*/][i] = num3;
									}
								}
							
								func_12(uParam0, true);
								func_63(uParam0, num2, 4);
								break;
						}
					
						uParam0->f_427 = 0;
					}
				
					if (PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_39) || PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL) && PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, ecaLocal_40))
					{
						switch (uParam0->f_464)
						{
							case 2:
								num = func_31(*uParam0);
								num2 = func_66(num);
							
								if (uParam0->f_450 > 0)
								{
									func_12(uParam0, true);
									uParam0->f_450 = uParam0->f_450 - 1;
									uParam0->f_417 = uParam0->f_450;
									num4 = Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450];
									Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_96710[num2 /*19*/].f_1[uParam0->f_450];
									func_36(uParam0, uParam0->f_450, num4);
									AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									uParam0->f_427 = 0;
									uParam0->f_456 = MISC::GET_GAME_TIMER();
								}
								else if (!func_404(0))
								{
									if (*uParam0 != 2)
									{
										for (k = 0; k < uParam0->f_1.f_96; k = k + 1)
										{
											NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(k);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
											NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(k);
											GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
											GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
										}
									
										AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
									
										for (k = 0; k < 2; k = k + 1)
										{
											if (uParam0->f_1.f_30[k] != 13)
												func_406(*uParam0, uParam0->f_1.f_30[k], false);
										}
									
										uParam0->f_427 = 0;
										func_12(uParam0, true);
										uParam0->f_456 = MISC::GET_GAME_TIMER();
										uParam0->f_465 = 0;
										func_115(0, 1);
									}
								}
								break;
						
							case 4:
								if (*uParam0 != 1)
								{
									num = func_31(*uParam0);
									num2 = func_66(num);
									uParam0->f_450 = uParam0->f_450 - 1;
									uParam0->f_417 = uParam0->f_450;
									num5 = Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450];
									Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
									uParam0->f_465 = Global_96710[num2 /*19*/].f_1[uParam0->f_450];
									func_6(uParam0, 2, num5);
								}
								else
								{
									for (l = 0; l < 2; l = l + 1)
									{
										if (uParam0->f_1.f_30[l] != 13)
											func_406(*uParam0, uParam0->f_1.f_30[l], false);
									}
								
									func_114(8, 0);
									func_86(5, 1, false);
									uParam0->f_427 = 0;
									func_12(uParam0, true);
									uParam0->f_456 = MISC::GET_GAME_TIMER();
									func_6(uParam0, 3, 0);
								}
							
								AUDIO::PLAY_SOUND_FRONTEND(-1, "UNDO", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
								break;
						}
					}
				}
			}
		}
	}
	else if (uParam0->f_455 > 5)
	{
		num = func_31(*uParam0);
		num2 = func_66(num);
	
		if (uParam0->f_450 >= Global_96710[num2 /*19*/] || *uParam0 == 1 && uParam0->f_450 > uParam0->f_415)
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(-1);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			func_24(uParam0, 0, 1);
			func_6(uParam0, 4, 0);
		}
		else
		{
			if (!IS_BIT_SET(uParam0->f_449, 17))
			{
				num6 = Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450];
				Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450] = 0;
				uParam0->f_465 = Global_96710[num2 /*19*/].f_1[uParam0->f_450];
				func_36(uParam0, uParam0->f_450, num6);
			}
		
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
		}
	
		uParam0->f_457 = MISC::GET_GAME_TIMER();
		MISC::CLEAR_BIT(&(uParam0->f_449), 10);
	}
	else if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_13(&uParam0->f_1.f_108[0 /*4*/]) && !func_13(&uParam0->f_1.f_108[1 /*4*/]) && !func_13(&uParam0->f_1.f_20[0 /*4*/]) && !func_13(&uParam0->f_1.f_20[1 /*4*/]))
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
	}

	if (uParam0->f_680 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_680))
		{
			scaleformMovieMethodReturnValueInt = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_680);
			num2 = func_30(*uParam0, scaleformMovieMethodReturnValueInt);
			num = func_31(*uParam0);
			func_114(num, num2);
		
			if (!func_2(false))
				func_113(*uParam0);
		
			AUDIO::PLAY_SOUND_FRONTEND(-1, _("Filter List"), "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
			func_63(uParam0, num2, 0);
		
			if (uParam0->f_1.f_30[scaleformMovieMethodReturnValueInt] != 13)
				func_406(*uParam0, uParam0->f_1.f_30[scaleformMovieMethodReturnValueInt], true);
		
			for (m = 0; m < uParam0->f_1.f_96; m = m + 1)
			{
				func_62(uParam0, m);
			
				if (m < Global_96710[num2 /*19*/])
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(m);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
				else
				{
					NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(m);
					GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
					GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				}
			}
		
			if (*uParam0 != 1)
			{
				func_86(5, *uParam0, true);
			}
			else
			{
				MISC::SET_BIT(&(uParam0->f_449), 10);
				uParam0->f_450 = uParam0->f_450 + 1;
			}
		
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
			uParam0->f_680 = 0;
		}
	}

	if (uParam0->f_681 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_681))
		{
			scaleformMovieMethodReturnValueInt2 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_681);
			num = func_31(*uParam0);
			num2 = func_66(num);
			Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450] = uParam0->f_418[scaleformMovieMethodReturnValueInt2];
			value = Global_113648.f_1.f_12[num2 /*6*/][uParam0->f_450];
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "UPDATE_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_450);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(scaleformMovieMethodReturnValueInt2);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "FOCUS_VIEW");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(99);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SELECT", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			MISC::CLEAR_BIT(&(uParam0->f_449), 17);
			func_112(uParam0, value);
			uParam0->f_450 = uParam0->f_450 + 1;
			uParam0->f_417 = uParam0->f_450;
			uParam0->f_456 = MISC::GET_GAME_TIMER();
			uParam0->f_457 = uParam0->f_456;
			MISC::SET_BIT(&(uParam0->f_449), 10);
		
			if (!func_13(&uParam0->f_1.f_108[0 /*4*/]) && !func_13(&uParam0->f_1.f_108[1 /*4*/]))
				HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
		
			uParam0->f_681 = 0;
		}
	}

	if (uParam0->f_682 != 0)
	{
		if (GRAPHICS::IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(uParam0->f_682))
		{
			scaleformMovieMethodReturnValueInt3 = GRAPHICS::GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(uParam0->f_682);
		
			if (scaleformMovieMethodReturnValueInt3 != -1)
			{
				unk = uParam0->f_418[scaleformMovieMethodReturnValueInt3];
			
				if (unk != uParam0->f_427)
					AUDIO::PLAY_SOUND_FRONTEND(-1, "PERSON_SCROLL", "HEIST_BULLETIN_BOARD_SOUNDSET", true);
			
				uParam0->f_427 = unk;
			}
		
			uParam0->f_682 = 0;
		}
	}

	if (uParam0->f_427 != 0)
		func_111(uParam0, uParam0->f_427);

	return;
}

void func_111(var uParam0, int iParam1) // Position - 0x4EEB Hash - 0xEFC78F6A ^0x8C2B4B63
{
	if (!func_20())
	{
		if (uParam0->f_483 == 0)
		{
			switch (iParam1)
			{
				case 10:
					if (IS_BIT_SET(Global_113648.f_1.f_119, 14))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[14 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[14 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 14);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 13:
					if (IS_BIT_SET(Global_113648.f_1.f_119, 16))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[16 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[16 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 16);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 12:
					if (IS_BIT_SET(Global_113648.f_1.f_119, 15))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[15 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[15 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 15);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			
				case 11:
					if (IS_BIT_SET(Global_113648.f_1.f_119, 17))
					{
						if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[17 /*2*/], ""))
						{
							MISC::SET_BIT(&(uParam0->f_449), 10);
							MISC::SET_BIT(&(uParam0->f_449), 17);
							func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[17 /*2*/], 1);
							MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 17);
							MISC::SET_BIT(&(uParam0->f_449), 12);
							return;
						}
					}
					break;
			}
		}
	}

	return;
}

void func_112(var uParam0, int iParam1) // Position - 0x50F7 Hash - 0x7B61532E ^0xA315F904
{
	if (!IS_BIT_SET(uParam0->f_463, iParam1))
	{
		if (!IS_BIT_SET(Global_113648.f_1.f_119, iParam1))
		{
			if (!MISC::ARE_STRINGS_EQUAL(&uParam0->f_1.f_304[iParam1 /*2*/], ""))
			{
				func_25(uParam0, uParam0->f_1.f_278, uParam0->f_1.f_304[iParam1 /*2*/], 1);
				MISC::SET_BIT(&(Global_113648.f_1.f_119), iParam1);
			}
		}
		else
		{
			switch (*uParam0)
			{
				case 2:
					switch (iParam1)
					{
						case 1:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 0))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 1))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					}
					break;
			
				case 3:
					switch (iParam1)
					{
						case 12:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 3))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							break;
					
						case 9:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 6))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							break;
					
						case 1:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 0))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 7))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							else if (IS_BIT_SET(Global_113648.f_1.f_117, 7))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 1))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 8))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[21 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							else if (IS_BIT_SET(Global_113648.f_1.f_117, 8))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[19 /*2*/], 1);
							break;
					
						case 6:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 4))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 7:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 2))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					
						case 8:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 5))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[18 /*2*/], 1);
							break;
					}
					break;
			
				case 4:
					switch (iParam1)
					{
						case 12:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 15))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 3))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[25 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[24 /*2*/], 1);
							break;
					
						case 7:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 2))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 14))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[30 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[28 /*2*/], 1);
							else if (IS_BIT_SET(Global_113648.f_1.f_117, 14))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[29 /*2*/], 1);
							break;
					
						case 9:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 18))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 6))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[27 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[26 /*2*/], 1);
							break;
					
						case 4:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 17))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							break;
					
						case 5:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 12))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[31 /*2*/], 1);
							break;
					
						case 1:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 10))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 0))
									if (IS_BIT_SET(Global_113648.f_1.f_117, 7))
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									else
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 10:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 11))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 1))
									if (IS_BIT_SET(Global_113648.f_1.f_117, 8))
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[23 /*2*/], 1);
									else
										func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 3:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 13))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 6:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 19))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 4))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 8:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 16))
								if (IS_BIT_SET(Global_113648.f_1.f_117, 5))
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[22 /*2*/], 1);
								else
									func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					
						case 13:
							if (IS_BIT_SET(Global_113648.f_1.f_117, 20))
								func_25(uParam0, uParam0->f_1.f_276, uParam0->f_1.f_304[20 /*2*/], 1);
							break;
					}
					break;
			}
		}
	
		MISC::SET_BIT(&(uParam0->f_463), iParam1);
	}

	return;
}

void func_113(int iParam0) // Position - 0x5821 Hash - 0xFCA28270 ^0xB30788E3
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = Global_113648.f_9087.f_99.f_205[7];
		
			if (num == 1)
				STATS::STAT_SET_BOOL(754126632, true, true);
			else
				STATS::STAT_SET_BOOL(754126632, false, true);
			break;
	
		case 1:
			num = Global_113648.f_9087.f_99.f_205[8];
		
			if (num == 3)
				STATS::STAT_SET_BOOL(1830949400, true, true);
			else
				STATS::STAT_SET_BOOL(1830949400, false, true);
			break;
	
		case 3:
			num = Global_113648.f_9087.f_99.f_205[10];
		
			if (num == 6)
				STATS::STAT_SET_BOOL(-560772645, true, true);
			else
				STATS::STAT_SET_BOOL(-560772645, false, true);
			break;
	
		case 4:
			num = Global_113648.f_9087.f_99.f_205[11];
		
			if (num == 8)
				STATS::STAT_SET_BOOL(1347594056, true, true);
			else
				STATS::STAT_SET_BOOL(1347594056, false, true);
			break;
	}

	return;
}

void func_114(int iParam0, int iParam1) // Position - 0x591C Hash - 0x87731F46 ^0xA2D22A46
{
	if (iParam0 == 13 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_205[iParam0] == iParam1)
		return;

	Global_113648.f_9087.f_99.f_205[iParam0] = iParam1;
	return;
}

void func_115(int iParam0, int iParam1) // Position - 0x5961 Hash - 0xD6D1968B ^0x2D6E7FD1
{
	if (iParam0 == 146 || iParam0 == -1)
		return;

	if (Global_113648.f_9087.f_99.f_58[iParam0] == iParam1)
		return;

	Global_113648.f_9087.f_99.f_58[iParam0] = iParam1;
	return;
}

void func_116(int iParam0) // Position - 0x59A6 Hash - 0x4EC4C80D ^0xD45156C8
{
	int i;
	int num;

	func_117(iParam0);

	switch (iParam0)
	{
		case 0:
			num = Global_113648.f_9087.f_99.f_205[7];
		
			for (i = 0; i < Global_96710[num /*19*/]; i = i + 1)
			{
				switch (Global_113648.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 0);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 1);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 14);
						break;
				
					case 7:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 2);
						break;
				
					case 12:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 3);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 15);
						break;
				
					case 6:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 4);
						break;
				
					case 8:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 5);
						break;
				
					case 9:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 6);
						break;
				}
			
				MISC::SET_BIT(&(Global_113648.f_1.f_119), Global_113648.f_1.f_12[num /*6*/][i]);
			}
			break;
	
		case 2:
			num = Global_113648.f_9087.f_99.f_205[9];
		
			for (i = 0; i < Global_96710[num /*19*/]; i = i + 1)
			{
				switch (Global_113648.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 7);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 8);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 14);
						break;
				
					case 11:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 9);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 17);
						break;
				}
			
				MISC::SET_BIT(&(Global_113648.f_1.f_119), Global_113648.f_1.f_12[num /*6*/][i]);
			}
			break;
	
		case 3:
			num = Global_113648.f_9087.f_99.f_205[10];
		
			for (i = 0; i < Global_96710[num /*19*/]; i = i + 1)
			{
				switch (Global_113648.f_1.f_12[num /*6*/][i])
				{
					case 1:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 10);
						break;
				
					case 10:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 11);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 14);
						break;
				
					case 5:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 12);
						break;
				
					case 3:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 13);
						break;
				
					case 4:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 17);
						break;
				
					case 7:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 14);
						break;
				
					case 12:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 15);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 15);
						break;
				
					case 6:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 19);
						break;
				
					case 8:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 16);
						break;
				
					case 9:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 18);
						break;
				
					case 13:
						MISC::SET_BIT(&(Global_113648.f_1.f_117), 20);
						MISC::CLEAR_BIT(&(Global_113648.f_1.f_119), 16);
						break;
				}
			
				MISC::SET_BIT(&(Global_113648.f_1.f_119), Global_113648.f_1.f_12[num /*6*/][i]);
			}
			break;
	}

	return;
}

void func_117(int iParam0) // Position - 0x5D23 Hash - 0xD115C643 ^0x5139DFB6
{
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 0);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 1);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 2);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 3);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 4);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 5);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 6);
			break;
	
		case 2:
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 7);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 8);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 9);
			break;
	
		case 3:
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 10);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 11);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 12);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 13);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 14);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 15);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 16);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 17);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 18);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 19);
			MISC::CLEAR_BIT(&(Global_113648.f_1.f_117), 20);
			break;
	}

	return;
}

void func_118() // Position - 0x5E6B Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_119();
	return;
}

void func_119() // Position - 0x5E7B Hash - 0xF6D04E68 ^0x80AE5309
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

void func_120() // Position - 0x5E9C Hash - 0xF4F02F08 ^0x941C5F21
{
	RECORDING::REPLAY_PREVENT_RECORDING_THIS_FRAME();
	func_121();
	return;
}

void func_121() // Position - 0x5EAC Hash - 0x9A142650 ^0x461C197C
{
	Global_23131.f_134 = 1;
	return;
}

void func_122(var uParam0) // Position - 0x5EBA Hash - 0x5EDF96C2 ^0x9257A858
{
	Vector3 vector;
	Interior unk;

	uParam0->f_453 = 0;
	uParam0->f_463 = 0;
	MISC::SET_BIT(&(uParam0->f_449), 9);
	func_12(uParam0, false);

	if (!CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (Global_44446 == true)
				func_127(PLAYER::PLAYER_PED_ID());
		
			vector = { uParam0->f_401 };
			vector = { vector + { 0.5f, 2.9f * SYSTEM::COS(180f - uParam0->f_404), 2.9f * SYSTEM::SIN(180f - uParam0->f_404) } };
			MISC::GET_GROUND_Z_FOR_3D_COORD(vector, &(vector.f_2), false, false);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_AMBIENT_SCRIPT | 4 | 128);
			ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), vector, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), uParam0->f_404);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
		}
	
		MISC::SET_BIT(&(uParam0->f_449), 7);
	}

	HUD::DISPLAY_RADAR(false);
	func_73(true);
	func_126();
	HUD::THEFEED_PAUSE();
	MISC::CLEAR_AREA(uParam0->f_401, 5f, true, true, false, false);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(uParam0->f_401, 5f);
	GRAPHICS::CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(true);
	GRAPHICS::SET_SCRIPT_GFX_ALIGN(82, 66);
	HUD::SET_HUD_COMPONENT_POSITION(HUD_SAVING_GAME, 0.612f, 0.818f);
	GRAPHICS::RESET_SCRIPT_GFX_ALIGN();
	func_125(&(uParam0->f_649), uParam0->f_405, uParam0->f_408, 45f, 18, 13, 3, uParam0->f_1.f_9, 0, 0, -1082130432, false);
	interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_401);

	if (interiorAtCoords != 0)
		INTERIOR::PIN_INTERIOR_IN_MEMORY(interiorAtCoords);

	INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(&(Global_96627[uParam0->f_1.f_1 /*15*/].f_7));

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		INTERIOR::SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(PLAYER::PLAYER_PED_ID()));

	func_124(false);
	func_123();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);

	if (MISC::IS_PC_VERSION())
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_414, "TOGGLE_MOUSE_BUTTONS");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	uParam0->f_466 = PAD::GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(FRONTEND_CONTROL, 10, true);
	MISC::SET_BIT(&(uParam0->f_449), 2);
	Global_96688 = 1;
	func_7(uParam0, uParam0->f_464, 0);
	return;
}

void func_123() // Position - 0x60AC Hash - 0x52CAE88F ^0x943ADD9E
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		func_16(i);
	}

	Global_113648.f_20412.f_145 = 0;

	for (i = 0; i < 2; i = i + 1)
	{
		Global_113648.f_20412.f_146[i] = 0;
	}

	if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
		HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);

	return;
}

void func_124(BOOL bParam0) // Position - 0x610A Hash - 0xDD23C843 ^0xE5697B63
{
	if (!bParam0)
		Global_112290 = MISC::GET_GAME_TIMER() + 250;

	Global_112287 = bParam0;
	return;
}

void func_125(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7, int iParam8, int iParam9, int iParam10, var uParam11, int iParam12, int iParam13, int iParam14, BOOL bParam15) // Position - 0x6128 Hash - 0xA08DC8D3 ^0x3E642322
{
	uParam0->f_1 = { uParam1 };
	uParam0->f_4 = { uParam4 };
	uParam0->f_7 = fParam7;
	uParam0->f_20 = iParam8;
	uParam0->f_21 = iParam9;
	uParam0->f_22 = iParam10;
	uParam0->f_8 = { 0f, 0f, 0f };
	uParam0->f_11 = { 0f, 0f, 0f };
	uParam0->f_14 = { 0f, 0f, 0f };
	uParam0->f_17 = fParam7;
	uParam0->f_18 = fParam7;
	uParam0->f_23 = iParam12;
	uParam0->f_19 = uParam11;
	*uParam0 = unk_0xDEE46CEB08617ECA("DEFAULT_SCRIPTED_CAMERA", 0);
	CAM::SET_CAM_ACTIVE(*uParam0, true);
	CAM::SET_CAM_PARAMS(*uParam0, uParam0->f_1, uParam0->f_4, uParam0->f_7, 0, 1, 1, 2);

	if (!bParam15)
		CAM::SHAKE_CAM(*uParam0, "HAND_SHAKE", 0.19f);

	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);

	if (iParam14 > 0f)
		CAM::SET_CAM_NEAR_CLIP(*uParam0, iParam14);

	if (uParam0->f_23)
		HUD::LOCK_MINIMAP_ANGLE(iParam13);

	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_29 = 0f;
	uParam0->f_30 = 0f;
	uParam0->f_26 = 0;
	uParam0->f_28 = 0;
	uParam0->f_27 = 0;
	return;
}

void func_126() // Position - 0x6220 Hash - 0x9A142650 ^0x4D0752C1
{
	Global_23131.f_5 = 1;
	return;
}

void func_127(Ped pedParam0) // Position - 0x622E Hash - 0x91438920 ^0xDA692F14
{
	int num;
	int num2;
	int num3;

	if (pedParam0 == 0)
		return;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return;

	num = func_135(pedParam0);

	if (!num == -1)
	{
		num2 = Global_44232[num /*5*/];
		func_130(1, num2, 1);
		return;
	}

	num3 = func_129(pedParam0);

	if (num3 == -1)
		return;

	func_128(num3);
	return;
}

void func_128(int iParam0) // Position - 0x6287 Hash - 0xBB510F32 ^0xE77AE77B
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

int func_129(Ped pedParam0) // Position - 0x630A Hash - 0x14AF2EDD ^0xC5BC7CD2
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

void func_130(int iParam0, int iParam1, int iParam2) // Position - 0x633B Hash - 0xF54D70EF ^0xF54D70EF
{
	func_131(iParam0, iParam1, iParam2, 0, 0, 1);
	return;
}

void func_131(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x6350 Hash - 0x9F3D8BA2 ^0x9F3D8BA2
{
	int num;

	if (iParam0 == -1)
		return;

	if (iParam1 == -1)
		return;

	if (iParam2 == 6)
		return;

	if (func_133(iParam0, iParam1, iParam2))
		return;

	num = func_132();

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

int func_132() // Position - 0x63D2 Hash - 0x11506CC4 ^0x2E9F5641
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

BOOL func_133(int iParam0, int iParam1, int iParam2) // Position - 0x6403 Hash - 0x3A30B8C2 ^0x3A30B8C2
{
	if (func_134(iParam0, iParam1, iParam2) == -1)
		return false;

	return true;
}

int func_134(int iParam0, int iParam1, int iParam2) // Position - 0x641E Hash - 0x61F8C119 ^0x1C9B84EC
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

int func_135(Ped pedParam0) // Position - 0x646A Hash - 0xDCBB968F ^0xDCBB968F
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

void func_136(var uParam0) // Position - 0x64B3 Hash - 0xFE5630E8 ^0xFE5630E8
{
	int num;

	if (*uParam0 == -1)
		return;

	num = func_137(*uParam0);

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

int func_137(int iParam0) // Position - 0x650A Hash - 0x7F0E29AD ^0x84091235
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

BOOL func_138(int iParam0, BOOL bParam1) // Position - 0x6545 Hash - 0xE8E8EFB4 ^0x98461D05
{
	int num;

	num = func_137(iParam0);

	if (num == -1)
		return false;

	if (!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX()))
		return false;

	if (func_149(0))
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

void func_139(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x65FD Hash - 0xC67F23A2 ^0xEFF6309F
{
	int i;

	SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1974937116) < 1;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		if (!*uParam0 == -1)
			func_136(uParam0);
	
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

BOOL func_140(int iParam0) // Position - 0x6728 Hash - 0x97844555 ^0xADCD6DAA
{
	BOOL flag;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				flag = func_100();
			
				if (!func_102(flag))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_112695 || Global_32166 || func_147() || func_107(8, -1) || func_146() || func_145() || func_144() || func_143() || Global_113648.f_7690.f_919[flag] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_148() || Global_32166 || func_147() || func_107(8, -1) || func_144() || func_146() || func_145() || func_143() || Global_113648.f_7690.f_919[flag] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_112695 || Global_32166 || func_147() || func_107(8, -1) || func_144() || func_146() || func_145() || func_143() || Global_113648.f_7690.f_919[flag] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_148() || Global_112695 || Global_32166 || func_147() || func_107(8, -1) || func_146() || func_145() || func_143() || Global_113648.f_7690.f_919[flag] == 5)
							return false;
						break;
				
					case 4:
						if (func_148() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_107(8, -1) || func_143() || func_142() || Global_113648.f_7690.f_919[flag] == 5)
							return false;
						break;
				
					case 5:
						if (func_107(8, -1) || func_146() || func_145() || func_142() || func_141())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_148() || Global_32166 || func_147() || func_107(8, -1) || func_145() || func_144() || func_143() || Global_113648.f_7690.f_919[flag] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_148() || func_145() || Global_112695 || Global_32166 || func_147() || Global_44446 || func_107(8, -1) || func_144() || func_142() || func_143() || Global_113648.f_7690.f_919[flag] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_148() || Global_112695 || Global_32166 || func_147() || func_107(8, -1) || func_144() || func_142() || func_146() || func_145() || func_143())
							return false;
						break;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}

	return true;
}

BOOL func_141() // Position - 0x6E45 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_142() // Position - 0x6E53 Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_143() // Position - 0x6E76 Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1424752554) > 0)
		return true;

	return false;
}

BOOL func_144() // Position - 0x6E90 Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_145() // Position - 0x6EBA Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_146() // Position - 0x6ECB Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_147() // Position - 0x6EDC Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_148() // Position - 0x6EE8 Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_149(int iParam0) // Position - 0x6F04 Hash - 0xE8921B44 ^0x4F063755
{
	if (iParam0 == 1)
		if (Global_20383.f_1 > 3)
			if (IS_BIT_SET(Global_8253, 14))
				return true;
			else
				return false;
		else
			return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-754107665) > 0)
		return true;

	if (Global_20383.f_1 > 3)
		return true;

	return false;
}

BOOL func_150(int iParam0) // Position - 0x6F5B Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_151(iParam0, Global_43257);
}

BOOL func_151(int iParam0, int iParam1) // Position - 0x6F6C Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_152() // Position - 0x714D Hash - 0x2852D243 ^0xF2FD7054
{
	int num;
	int i;
	int flags;

	if (func_404(25))
	{
		num = func_66(func_31(4));
	
		if (num != iLocal_49)
		{
			CUTSCENE::REMOVE_CUTSCENE();
		
			switch (num)
			{
				case 8:
					sLocal_42 = "BS_2A_INT";
					break;
			
				case 9:
					sLocal_42 = "BS_2B_INT";
					break;
			}
		
			iLocal_49 = num;
		}
	
		if (iLocal_49 != -1)
			CUTSCENE::REQUEST_CUTSCENE(sLocal_42, 8);
	
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("LESTER", 1, 0, 0, 0);
	}

	if (func_404(26))
	{
		if (func_404(25))
		{
			if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_42))
			{
				if (!func_2(false))
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_130, "Michael", 0, 225514697, 0);
				else if (!ENTITY::IS_ENTITY_DEAD(pedLocal_130, false))
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_130, "Michael", 0, 225514697, 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_133, false))
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_133, "Lester", 0, 1302784073, 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_131, false))
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_131, "Franklin", 0, -1692214353, 0);
			
				if (!ENTITY::IS_ENTITY_DEAD(pedLocal_132, false))
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_132, "Trevor", 0, -1686040670, 0);
			
				func_73(true);
				func_124(true);
				func_213(true, true, true, false, false, false, false);
			
				for (i = 0; i < func_212(4); i = i + 1)
				{
					if (func_210(4, i) == 12)
						func_196(-837794877);
				}
			
				if (bLocal_47)
					flags = 0;
				else
					flags = 256;
			
				CUTSCENE::START_CUTSCENE(flags);
			
				if (func_2(false))
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, false, false);
			
				func_115(25, 0);
				iLocal_44 = MISC::GET_GAME_TIMER();
			}
		}
		else if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			iLocal_44 = iLocal_44;
			func_120();
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", 0))
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_133))
					PED::DELETE_PED(&pedLocal_133);
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 0))
			{
				if (!PED::IS_PED_INJURED(pedLocal_130))
				{
					PED::FORCE_PED_MOTION_STATE(pedLocal_130, -668482597, false, 1, false);
				
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0, true, false);
				}
			
				func_195(0);
			}
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", 0))
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_131))
					PED::DELETE_PED(&pedLocal_131);
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", 0))
				if (ENTITY::DOES_ENTITY_EXIST(pedLocal_132))
					PED::DELETE_PED(&pedLocal_132);
		
			if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(true))
			{
				CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0);
				CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0, 1065353216);
			}
		}
		else if (iLocal_45 == -1 && !func_2(false))
		{
			iLocal_45 = MISC::GET_GAME_TIMER() + 3500;
		}
		else if (MISC::GET_GAME_TIMER() > iLocal_45 || func_2(false))
		{
			if (func_2(false))
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			else
			{
				Global_63362 = false;
				Global_100720 = 0;
				func_194();
			}
		
			func_73(false);
			func_213(false, true, true, false, false, false, false);
			func_193();
			func_191(&(Global_113648.f_2365.f_539), 77);
			func_161(&(Global_113648.f_2365.f_539), 77);
			func_160(&iLocal_46);
			MISC::CLEAR_BIT(&iLocal_43, 3);
			func_115(26, 0);
			PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_179, false);
		
			if (iLocal_180 != -1)
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_180))
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_180);
		
			PED::CLEAR_PED_NON_CREATION_AREA();
			PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_182.f_1.f_394 - uLocal_182.f_1.f_397, uLocal_182.f_1.f_394 + uLocal_182.f_1.f_397, true, 0);
			PLAYER::SET_MAX_WANTED_LEVEL(5);
			func_153(4, false);
		}
	}
	else if (!func_404(25))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED(sLocal_42))
			CUTSCENE::REMOVE_CUTSCENE();
	}

	return;
}

void func_153(int iParam0, BOOL bParam1) // Position - 0x74B2 Hash - 0x5D40CDB1 ^0x5D40CDB1
{
	int i;
	int num;

	for (i = 0; i < 14; i = i + 1)
	{
		num = i;
	
		if (func_40(num) || func_39(num))
		{
			if (!(num == 11 && iParam0 == 3))
			{
				switch (num)
				{
					case 1:
						func_157(4, true);
						break;
				
					case 4:
						func_157(8, true);
						break;
				
					case 6:
						func_157(10, true);
						break;
				
					case 7:
						func_157(1, true);
						break;
				
					case 8:
						func_157(3, true);
						break;
				
					case 9:
						func_157(6, true);
						break;
				
					case 10:
						func_157(9, true);
						break;
				
					case 12:
						func_157(11, true);
						break;
				
					case 13:
						func_157(12, true);
						break;
				
					case 11:
						if (func_156(91))
							func_157(0, true);
						break;
				
					case 5:
						if (func_156(91))
							func_157(2, true);
						break;
				
					case 3:
						if (func_156(67))
							func_157(5, true);
						break;
				
					case 2:
						if (func_156(77))
							func_157(7, true);
						break;
				}
			}
		}
	}

	if (!func_40(10) && IS_BIT_SET(Global_113648.f_24997.f_8[4], 0))
		func_157(9, true);

	if (!func_40(13) && IS_BIT_SET(Global_113648.f_24997.f_8[16], 0))
		func_157(12, true);

	if (!func_40(12))
		if (iParam0 == 4)
			func_157(11, true);

	if (!bParam1)
	{
		if (!func_155(69))
			func_22(_("Heist characters become available in Rockstar Editor's 'Director Mode' after being up for selection on a GTAV heist."), 2, 0, 20000, 10000, 7, 0, 209, 0);
	
		func_154(_("Heist crew members"));
	}

	return;
}

void func_154(char* sParam0) // Position - 0x7678 Hash - 0x2E18739A ^0xD0B2ED68
{
	HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
	HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL("CHAR_ACTING_UP", "CHAR_ACTING_UP", false, 0, _("Director Mode Actor Unlock"), sParam0);
	return;
}

BOOL func_155(int iParam0) // Position - 0x769B Hash - 0x3F44A899 ^0x7041C53
{
	int num;
	int i;

	num = iParam0;

	for (i = 0; num > 31; i = i + 1)
	{
		num = num - 32;
	}

	if (i < 3)
		return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);

	return false;
}

BOOL func_156(int iParam0) // Position - 0x76DB Hash - 0x35F9F9C ^0x35F9F9C
{
	if (iParam0 == 94 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

void func_157(int iParam0, BOOL bParam1) // Position - 0x7707 Hash - 0x1C09FCF2 ^0xBD3E1D65
{
	int offset;

	offset = iParam0;

	if (offset >= 0 && offset <= 31)
	{
		if (!func_159(iParam0))
		{
			MISC::SET_BIT(&(Global_113648.f_26436.f_1), offset);
		
			if (!bParam1)
				func_154(func_158(iParam0));
		}
	}

	return;
}

char* func_158(int iParam0) // Position - 0x7750 Hash - 0xE6862179 ^0x83E96E7
{
	switch (iParam0)
	{
		case 0:
			return _("Chef");
	
		case 1:
			return _("Christian Feltz");
	
		case 2:
			return _("Daryl Johns");
	
		case 3:
			return _("Eddie Toh");
	
		case 4:
			return _("Gustavo Mota");
	
		case 5:
			return _("Hugh Welsh");
	
		case 6:
			return _("Karim Denz");
	
		case 7:
			return _("Karl Abolaji");
	
		case 8:
			return _("Norm Richards");
	
		case 9:
			return _("Packie McReary");
	
		case 10:
			return _("Paige Harris");
	
		case 11:
			return _("Rickie Lukens");
	
		case 12:
			return _("Taliana Martinez");
	}

	return "ERROR!";
}

BOOL func_159(int iParam0) // Position - 0x7833 Hash - 0x36272C3A ^0xCB2A7D5A
{
	if (iParam0 != -1 && iParam0 != 13)
		return IS_BIT_SET(Global_113648.f_26436.f_1, iParam0);

	return false;
}

void func_160(var uParam0) // Position - 0x785F Hash - 0x995C9E2 ^0x995C9E2
{
	if (*uParam0 == -1)
		return;

	if (!*uParam0 == Global_43219)
	{
		*uParam0 = -1;
		return;
	}

	*uParam0 = -1;
	Global_43218 = 0;
	Global_43220 = 0;
	Global_43257 = 15;
	Global_63359 = 0;
	Global_63360 = 0;
	return;
}

void func_161(var uParam0, int iParam1) // Position - 0x789C Hash - 0xA905BBA6 ^0xA905BBA6
{
	switch (iParam1)
	{
		case 17:
			func_162(uParam0, 0, 12);
			break;
	
		case 19:
			func_162(uParam0, 1, 13);
			break;
	
		case 29:
			func_162(uParam0, 1, 14);
			break;
	
		case 30:
			func_162(uParam0, 2, 15);
			func_162(uParam0, 1, 29);
			break;
	
		case 32:
			func_162(uParam0, 1, 16);
			func_162(uParam0, 0, 17);
			break;
	
		case 39:
			func_162(uParam0, 0, 21);
			func_162(uParam0, 1, 20);
			break;
	
		case 31:
			func_162(uParam0, 0, 18);
			break;
	
		case 20:
			func_162(uParam0, 2, 22);
			break;
	
		case 66:
			func_162(uParam0, 1, 23);
			break;
	
		case 68:
			func_162(uParam0, 1, 24);
			break;
	
		case 70:
			func_162(uParam0, 1, 67);
			break;
	
		case 8:
			func_162(uParam0, 1, 25);
			func_162(uParam0, 2, 26);
			break;
	
		case 67:
			func_162(uParam0, 1, 27);
			break;
	
		case 9:
			func_162(uParam0, 2, 28);
			break;
	
		case 38:
			func_162(uParam0, 2, 30);
			func_162(uParam0, 1, 19);
			break;
	
		case 83:
			func_162(uParam0, 2, 33);
			break;
	
		case 45:
			func_162(uParam0, 1, 35);
			break;
	
		case 64:
			func_162(uParam0, 0, 36);
			func_162(uParam0, 1, 37);
			break;
	
		case 91:
			func_162(uParam0, 0, 41);
			break;
	
		case 42:
			func_162(uParam0, 0, 58);
			Global_100085[0 /*98*/] = 0;
			func_162(uParam0, 2, 59);
			Global_100085[2 /*98*/] = 0;
			break;
	
		case 41:
			func_162(uParam0, 1, 42);
			func_162(uParam0, 2, 42);
			break;
	
		case 15:
			func_162(uParam0, 0, 46);
			func_162(uParam0, 1, 47);
			break;
	
		case 16:
			func_162(uParam0, 0, 48);
			break;
	
		case 48:
			func_162(uParam0, 1, 50);
			func_162(uParam0, 2, 51);
			break;
	
		case 74:
			func_162(uParam0, 0, 52);
			func_162(uParam0, 1, 66);
			break;
	
		case 76:
			func_162(uParam0, 1, 53);
			func_162(uParam0, 2, 54);
			func_162(uParam0, 0, 62);
			break;
	
		case 75:
			func_162(uParam0, 0, 61);
			func_162(uParam0, 1, 31);
			break;
	
		case 69:
			func_162(uParam0, 1, 63);
			break;
	
		case 84:
			func_162(uParam0, 0, 68);
			func_162(uParam0, 2, 69);
			break;
	
		case 85:
			func_162(uParam0, 0, 64);
			func_162(uParam0, 2, 65);
			break;
	
		case 93:
			func_162(uParam0, 1, 38);
			func_162(uParam0, 2, 39);
			break;
	
		case 11:
			func_162(uParam0, 2, 55);
			break;
	
		case 77:
			func_162(uParam0, 1, 56);
			func_162(uParam0, 2, 57);
			break;
	
		default:
			break;
	}

	return;
}

int func_162(var uParam0, int iParam1, int iParam2) // Position - 0x7BE5 Hash - 0x33F90E8 ^0xA5954A2B
{
	int num;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;

	if (!IS_BIT_SET(Global_113648.f_9087.f_99.f_219[0], 9))
	{
		num = Global_113648.f_18535[iParam1];
	
		if (num == 11)
			return 0;
	
		if (num == 8 || num == 9 || num == 10)
			return 0;
	}

	Global_113648.f_18535[iParam1] = iParam2;
	uParam0->f_2296[iParam1] = func_180();

	if (!func_179(iParam2, &uParam0->f_2300[iParam1 /*3*/], &uParam0->f_2310[iParam1]))
		return 0;

	if (!func_178(uParam0->f_2300[iParam1 /*3*/], 0f, 0f, 0f, false))
	{
		if (!func_178(Global_99120[iParam2 /*3*/], 0f, 0f, 0f, false))
		{
			unk.f_11 = 12;
			unk.f_31 = 49;
			unk.f_81 = 2;
		
			if (func_163(iParam1, iParam2, &unk, &unk99, &unk102, &unk103, &unk106))
				Global_100085[iParam1 /*98*/] = { unk };
		}
	}

	uParam0->f_2314[iParam1] = 0;
	uParam0->f_2318[iParam1 /*3*/] = { 0f, 0f, 0f };
	uParam0->f_2328[iParam1] = 0;
	return 1;
}

BOOL func_163(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Position - 0x7D02 Hash - 0x2127B64A ^0x2C2DB7FC
{
	uParam2->f_3 = 1000;
	uParam2->f_1 = 0;
	uParam2->f_84 = 255;
	uParam2->f_85 = 255;
	uParam2->f_86 = 255;

	switch (iParam1)
	{
		case 5:
			*uParam2 = { Global_100085[iParam0 /*98*/] };
		
			if (Global_100380[iParam0] != 2)
			{
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_100388[iParam0 /*3*/], -829.7478f, 192.11703f, 76.73248f, -827.13837f, 153.85951f, 59.961723f, 33.25f, false, true))
				{
					if (Global_100380[iParam0] == 1)
					{
						*uParam3 = { Global_100388[iParam0 /*3*/] - Global_113648.f_2365.f_539.f_2300[iParam0 /*3*/] };
						*uParam4 = Global_100398[iParam0] - Global_113648.f_2365.f_539.f_2310[iParam0];
					
						if (SYSTEM::VMAG2(*uParam3) > 5f * 5f)
						{
							*uParam3 = { 0f, 0f, 0f };
							*uParam4 = 0f;
							return false;
						}
					}
				}
			
				*uParam3 = { Global_100388[iParam0 /*3*/] - Global_113648.f_2365.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_100398[iParam0] - Global_113648.f_2365.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 6:
			*uParam2 = { Global_100085[iParam0 /*98*/] };
		
			if (Global_100380[iParam0] != 2)
			{
				*uParam3 = { Global_100388[iParam0 /*3*/] - Global_113648.f_2365.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_100398[iParam0] - Global_113648.f_2365.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 7:
			*uParam2 = { Global_100085[iParam0 /*98*/] };
		
			if (Global_100380[iParam0] != 2)
			{
				*uParam3 = { Global_100388[iParam0 /*3*/] - Global_113648.f_2365.f_539.f_2300[iParam0 /*3*/] };
				*uParam4 = Global_100398[iParam0] - Global_113648.f_2365.f_539.f_2310[iParam0];
			
				if (SYSTEM::VMAG2(*uParam3) < 0.5f * 0.5f)
					*uParam3 = { *uParam3 * { 1.5f, 1.5f, 1.5f } };
			}
			else
			{
				*uParam3 = { 0f, 0f, 0f };
				*uParam4 = 0f;
			}
		
			return true;
	
		case 11:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 37.43f, -23.81f, 0f };
			*uParam4 = 127f;
			return true;
	
		case 8:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { { 28.826f, -1277.56f, -90.961f } - { 28.3203f, -1324.1947f, -90.0089f } };
			*uParam4 = 1.27f - 194.1887f;
			return true;
	
		case 9:
			return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 10:
			return func_163(iParam0, 8, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 13:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 14:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 15:
			uParam2->f_97 = 0;
			*uParam2 = 744705981;
			uParam2->f_5 = 34;
			uParam2->f_6 = 34;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 55:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { { 4.8006f, -2965.4985f, 782.1644f } - { 4.0205f, -2975.3408f, 798.4536f } };
			*uParam4 = 246.1684f - 90f;
			return true;
	
		case 56:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 20f;
			return true;
	
		case 57:
			uParam2->f_97 = 0;
			*uParam2 = -377465520;
			*uParam3 = { { 28.764f, -1431.464f, 66.028f } - { 28.2954f, -1351.5203f, 37.5988f } };
			*uParam4 = 141.28f - 90.0339f;
			return true;
	
		case 12:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam5 = { 0f, 5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 16:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 17:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 18:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 19:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 15f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 20:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 23:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 24:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 67:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 21.6401f, 38.5601f, 1.9708f };
			*uParam4 = -84f;
			return true;
	
		case 58:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 59:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 60:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 22:
			uParam2->f_97 = 0;
			*uParam2 = -2137348917;
			*uParam5 = { 0f, 50f, 0f };
			*uParam6 = 20f;
			return true;
	
		case 74:
			func_165(iParam0, uParam2, 1);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 38:
			func_165(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 41:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -2.72f, 0.45f, 1f };
			*uParam4 = -137f;
			return true;
	
		case 25:
			uParam2->f_97 = 0;
			*uParam2 = -344943009;
			*uParam3 = { { 29.17f, -1417.047f, 54.081f } - { 28.2915f, -1464.6798f, 72.2278f } };
			*uParam4 = 0.72f - 156.8827f;
			return true;
	
		case 27:
			uParam2->f_97 = 0;
			*uParam2 = 1221512915;
			*uParam3 = { { 24.9f, -938.8f, 792.3f } - { 24.2312f, -906f, 763f } };
			*uParam4 = 2.23f - 7.2736f;
			return true;
	
		case 26:
			uParam2->f_97 = 0;
			*uParam2 = 1830407356;
			*uParam3 = { { 28.701f, -1090.07f, 306.036f } - { 28.3684f, -1120.7855f, 257.9167f } };
			*uParam4 = -1f - 97.2736f;
			return true;
	
		case 40:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
	
		case 28:
			uParam2->f_97 = 0;
			*uParam2 = 353883353;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 234:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 16.5182f, -8.5576f, -2.3291f };
			*uParam4 = 174.24f;
			return true;
	
		case 75:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 76:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 2.5f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 42:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { { 4.8006f, -2965.4985f, 782.1644f } - { 4.0205f, -2975.3408f, 798.4536f } };
			*uParam4 = 246.1684f - 90f;
			return true;
	
		case 43:
			uParam2->f_97 = 0;
			*uParam2 = 914654722;
			*uParam3 = { { 5.4446f, -2912.043f, 659.5297f } - { 5.0589f, -2916.4788f, 709.0244f } };
			*uParam4 = 247.4806f - 355.326f;
			return true;
	
		case 44:
			uParam2->f_97 = 0;
			*uParam2 = -599568815;
			*uParam3 = { { 5.1176f, -2936.8425f, 656.9753f } - { 5.1337f, -2917.325f, 643.5248f } };
			*uParam4 = 253.776f - 334.1068f;
			return true;
	
		case 45:
			uParam2->f_97 = 0;
			*uParam2 = -784816453;
			*uParam3 = { { 5.681f, -2769.795f, 593.033f } - { 5.0558f, -2819.0852f, 594.4415f } };
			*uParam4 = 2.62f - 299.0519f;
			return true;
	
		case 47:
			uParam2->f_97 = 0;
			*uParam2 = 2006918058;
			uParam2->f_5 = 0;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			TEXT_LABEL_ASSIGN_STRING(&(uParam2->f_27), "22LJK483", 16);
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 49:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { -1.5f, 35f, 3f };
			*uParam6 = 15f;
			return true;
	
		case 48:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 3.8721f, -5.9568f, 0f };
			*uParam4 = 164.2466f - 180f;
			return true;
	
		case 50:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 10f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 51:
			uParam2->f_97 = 0;
			*uParam2 = -1961627517;
			*uParam3 = { { 28.1755f, -550.2679f, -1170.7203f } - { 30.2361f, -526.9999f, -1257.5f } };
			*uParam4 = 310.4708f - 220.9554f;
			return true;
	
		case 52:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
	
		case 66:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 12.5f;
			return true;
	
		case 61:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 62:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 25f;
			return true;
	
		case 63:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -2.9117f, -15.0499f, -0.3468f };
			*uParam4 = -139.9751f;
			return true;
	
		case 64:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 69:
			uParam2->f_97 = 0;
			*uParam2 = -1450650718;
			*uParam3 = { { 36.5734f, -85.1799f, -737.1358f } - { 54f, 111f, -852f } };
			*uParam4 = 64.1848f - 180f;
			return true;
	
		case 65:
		case 54:
			uParam2->f_97 = 0;
			*uParam2 = 1949211328;
			uParam2->f_5 = 40;
			uParam2->f_6 = 0;
			uParam2->f_7 = 0;
			uParam2->f_8 = 0;
			uParam2->f_9 = 0;
			uParam2->f_11[0] = 1;
			uParam2->f_11[1] = 1;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 1;
			uParam2->f_11[4] = 1;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			uParam2->f_89 = 1;
		
			if (iParam1 == 54)
			{
				*uParam3 = { 5.5414f, -6.6035f, 1.0473f };
				*uParam4 = -83.2547f;
			}
		
			if (iParam1 == 65)
			{
				*uParam3 = { 5.7209f, -12.3958f, 1.0746f };
				*uParam4 = -152.2593f;
			}
		
			return true;
	
		case 112:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 113:
			if (func_163(iParam0, 112, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 118:
			uParam2->f_97 = 0;
			*uParam2 = -186537451;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 1f, 12.5f, 0f };
			*uParam6 = 5f;
			return true;
	
		case 119:
			if (func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 5f, 20f, 0f };
				*uParam6 = 5f;
				return true;
			}
			break;
	
		case 120:
			if (func_163(iParam0, 118, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 30f, 0f };
				*uParam6 = 8f;
				return true;
			}
			break;
	
		case 173:
			uParam2->f_97 = 0;
			*uParam2 = 448402357;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 114:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.9002f, 1.205f, -0.3537f };
			*uParam4 = -180f;
			return true;
	
		case 105:
			func_165(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
	
		case 106:
			return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 107:
			return func_163(iParam0, 105, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 98:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 99:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0f;
			return true;
	
		case 100:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 101:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 102:
			return func_163(iParam0, 99, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 123:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 3.2267f, 1.0966f, -0.354f };
			*uParam4 = -31.73f;
			return true;
	
		case 125:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -13.7322f, 1.8783f, 1.0593f };
			*uParam4 = 55.3652f;
			return true;
	
		case 133:
			uParam2->f_97 = 0;
			*uParam2 = 290013743;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0f;
			uParam2->f_11[0] = 0;
			uParam2->f_11[1] = 0;
			uParam2->f_11[2] = 1;
			uParam2->f_11[3] = 0;
			uParam2->f_11[4] = 0;
			uParam2->f_11[5] = 1;
			uParam2->f_11[6] = 1;
			uParam2->f_11[7] = 1;
			uParam2->f_11[8] = 1;
			*uParam5 = { 0f, 20f, 0f };
			*uParam6 = 15f;
			return true;
	
		case 89:
		case 90:
		case 127:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 0f, 0f };
			*uParam6 = 0.1f;
			return true;
	
		case 91:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 15.4538f, -8.711f, 5.79f };
			*uParam4 = 2.4942f;
			return true;
	
		case 93:
			if (func_163(iParam0, 91, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -8.1f, -9.01f, 0.4439f };
				*uParam4 = 94.03f;
				return true;
			}
			break;
	
		case 121:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 18.8468f, 40.7721f, 0f };
			*uParam4 = -116.3936f;
			return true;
	
		case 115:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 43.517f, -33.7052f, -531.6035f } - { 45.6141f, -21.87f, -511.73f } };
			*uParam4 = 177.259f - 180f - 69f;
			return true;
	
		case 116:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 1.7826f, 12.2098f, -0.6964f };
			*uParam4 = -96.0001f;
			return true;
	
		case 117:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 11.8705f, -1.4684f, -1.6487f };
			*uParam4 = -125.8331f;
			return true;
	
		case 94:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -13.1578f, 16.3962f, 0.6396f };
			*uParam4 = -177f;
			return true;
	
		case 96:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -21.0518f, 0.5037f, 0.4091f };
			*uParam4 = -83.1262f;
			return true;
	
		case 108:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 10.8971f, 2.0809f, -0.7983f };
			*uParam4 = -150.9417f;
			return true;
	
		case 109:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 79.9901f, -52.83f, -0.3533f };
			*uParam4 = 44.7231f;
			return true;
	
		case 135:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 136:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 137:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 138:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-5f, 5f), 0f };
				*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
				return true;
			}
			break;
	
		case 139:
			if (func_163(iParam0, 135, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 2.4845f, 2.3286f, -0.383f };
				*uParam4 = -31.4884f;
				return true;
			}
			break;
	
		case 140:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 141:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 40f, 0f };
				*uParam6 = 12.5f;
				return true;
			}
			break;
	
		case 142:
			func_165(iParam0, uParam2, 0);
			*uParam5 = { 0f, 25f, 0f };
			*uParam6 = 10f;
			return true;
	
		case 143:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 144:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 145:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 146:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 147:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 15f, 0f };
				*uParam6 = 7.5f;
				return true;
			}
			break;
	
		case 148:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 149:
			if (func_163(iParam0, 142, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam5 = { 0f, 25f, 0f };
				*uParam6 = 10f;
				return true;
			}
			break;
	
		case 151:
			if (func_163(iParam0, 94, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -13.2213f, 16.331f, 0f };
				*uParam4 = 6f;
				return true;
			}
			break;
	
		case 162:
			if (func_163(iParam0, 115, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 10.3876f, -10.3585f, -1.2183f };
				*uParam4 = 8.6726f;
				return true;
			}
			break;
	
		case 158:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 1.0793f, 15.631f, 1.1744f };
			*uParam4 = 2.52f;
			return true;
	
		case 166:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 170:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 0f, 0f, 0f };
			*uParam4 = 0.1f;
			*uParam5 = { 0.1f, 0.1f, 0.1f };
			*uParam6 = 0.1f;
			return true;
	
		case 171:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 172:
			return func_163(iParam0, 98, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 208:
			func_165(iParam0, uParam2, 1);
			*uParam5 = { 0f, 0.1f, 0f };
			*uParam6 = 0.5f;
			return true;
	
		case 209:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 210:
			return func_163(iParam0, 208, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 211:
			func_164(iParam0, uParam2, 2);
			uParam2->f_91 = 2;
			*uParam3 = { -2.19f, -1.23f, 0f };
			*uParam4 = 90f;
			return true;
	
		case 212:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { -1.3547f, 2.1615f, -0.3723f };
			*uParam4 = 177.8041f;
			return true;
	
		case 213:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.2075f, 1.0943f, 0f };
				*uParam4 = 15.82f;
				return true;
			}
			break;
	
		case 214:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			uParam2->f_2 = 0f;
			*uParam3 = { 2.291f, 1.0879f, 0.0635f };
			*uParam4 = 177.798f;
			return true;
	
		case 215:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { -0.9714f, 1.6112f, -0.2773f };
			*uParam4 = -7.0583f;
			*uParam5 = { { 183.8081f, 578.5989f, 174.7651f } - { 176.086f, 551.7596f, 10.9694f } };
			*uParam6 = 10f;
			return true;
	
		case 196:
			uParam2->f_97 = 0;
			*uParam2 = -956048545;
			uParam2->f_2 = 0f;
			uParam2->f_4 = 0;
			uParam2->f_9 = 1;
			*uParam3 = { { 29.4846f, -1457.9152f, -17.4132f } - { 31.1932f, -1441.1821f, -14.8689f } };
			*uParam4 = 89.0026f - -1.5f;
			*uParam5 = { { 33.6125f, -1563.4609f, -147.0307f } - { 31.1932f, -1441.1821f, -14.8689f } };
			*uParam6 = 10f;
			return true;
	
		case 221:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 43.5168f, -33.5909f, -531.4f } - { 45.2617f, -28.54f, -521.13f } };
			*uParam4 = 357.1407f - 84.96f;
			return true;
	
		case 216:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -2.1752f, -2.3781f, 0f };
				*uParam4 = -68.4f;
				return true;
			}
			break;
	
		case 217:
			if (func_163(iParam0, 211, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -3.9761f, 0.2542f, 0f };
				*uParam4 = -70.5273f;
				return true;
			}
			break;
	
		case 232:
		case 233:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { { 28.225f, -1015.1096f, -70.4456f } - { 27.5447f, -1019.2347f, -78.4023f } };
			*uParam4 = 162.09804f - 109.0206f;
			return true;
	
		case 192:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 3.403f, -1531.113f, -1190.0171f } - { 4.7514f, -1573.632f, -1174.458f } };
			*uParam4 = 302.182f - 105.981f;
			return true;
	
		case 193:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 3.403f, -1531.113f, -1190.0171f } - { 4.3599f, -1573.692f, -1175.298f } };
			*uParam4 = 302.182f - 172.9187f;
			return true;
	
		case 194:
			if (func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 12.74f, 3.26f, 0f };
				*uParam4 = 95.217f;
				return true;
			}
			break;
	
		case 195:
			if (func_163(iParam0, 193, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -1.34f, 7.684f, 0f };
				*uParam4 = 173.52f;
				return true;
			}
			break;
	
		case 200:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.4055f, -1607.5681f, 44.4802f } - { (28.2858f - 0.5f) + 1.5f, -1607.2864f, 2.8895f } };
			*uParam4 = 318.2674f - 310.879f - 180f;
			return true;
	
		case 201:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.1773f, -1592.7875f, 3.6009f } - { 29.2903f, -1607.2864f, 2.8895f } };
			*uParam4 = 322.6286f - 130.879f;
			return true;
	
		case 202:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 91.3579f, 18.1788f, -0.1911f };
			*uParam4 = -90.3475f;
			return true;
	
		case 222:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 12.5073f, -3.4625f, -0.3702f };
			*uParam4 = 14.3405f;
			return true;
	
		case 223:
			if (func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 21.87f, -10.5f, 0f };
				*uParam4 = -104.76f;
				return true;
			}
			break;
	
		case 224:
			return func_163(iParam0, 222, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 226:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.7f, -1356.9f, 24.6f } - { 29.3437f, -1351.412f, 28.986f } };
			*uParam4 = 270.1767f - 160f - 180f;
			return true;
	
		case 227:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -19.8544f, -10.4863f, -0.0334f };
			*uParam4 = -120.12f;
			return true;
	
		case 228:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 21.5897f, -6.8544f, 0.6015f };
			*uParam4 = -141f;
			return true;
	
		case 229:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -7.6041f, 0.1369f, 0.5812f };
			*uParam4 = -145.769f;
			return true;
	
		case 230:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -1.6f, 7.6802f, 0.6947f };
			*uParam4 = -50.99f;
			return true;
	
		case 238:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { 22.322f, -6.2034f, 0f };
			*uParam4 = 73.071f;
			return true;
	
		case 250:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam3 = { -1.2901f, -5.5798f, -0.0357f };
			*uParam4 = 160.56f;
			return true;
	
		case 251:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -4.0739f, 7.7692f, -0.2984f };
				*uParam4 = -48.9552f;
				return true;
			}
			break;
	
		case 252:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { -5.778f, -4.2397f, 0.9091f };
				*uParam4 = -12.9418f;
				return true;
			}
			break;
	
		case 253:
			if (func_163(iParam0, 250, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				*uParam3 = { 0.6968f, 1.1033f, 0.912f };
				*uParam4 = 90f;
				return true;
			}
			break;
	
		case 281:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
	
		case 282:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
				return true;
			break;
	
		case 283:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
				return true;
			break;
	
		case 284:
			if (func_163(iParam0, 281, uParam2, uParam3, uParam4, uParam5, uParam6))
			{
				uParam2->f_97 = 0;
				*uParam2 = 55628203;
				uParam2->f_91 = 0;
				return true;
			}
			break;
	
		case 275:
			func_164(iParam0, uParam2, 1);
			uParam2->f_91 = 1;
			*uParam5 = { 0f, 8f, 0.6f };
			*uParam6 = 15f;
			return true;
	
		case 276:
			return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 277:
			return func_163(iParam0, 275, uParam2, uParam3, uParam4, uParam5, uParam6);
	
		case 280:
			if (!Global_3)
			{
				uParam2->f_97 = 0;
				*uParam2 = 290013743;
				uParam2->f_11[0] = 0;
				uParam2->f_11[1] = 0;
				uParam2->f_11[2] = 1;
				uParam2->f_11[3] = 0;
				uParam2->f_11[4] = 0;
				uParam2->f_11[5] = 1;
				uParam2->f_11[6] = 1;
				uParam2->f_11[7] = 1;
				uParam2->f_11[8] = 1;
			}
			else
			{
				uParam2->f_97 = 0;
				*uParam2 = 1033245328;
			}
		
			*uParam3 = { { -0.6187f, -1440.4209f, 2779.759f } - { 0.3109f, -1453.731f, 2789.845f } };
			uParam3->f_2 = uParam3->f_2 + 0.5f;
			*uParam4 = 340.0835f - 4.44f;
			*uParam3 = { { -0.7f, 16.55f, -3.3962f } + { 0.5f, 0.5f, -0.5f } };
			*uParam4 = 23.6441f + 90f;
			*uParam3 = { -4.0164f, 19.9594f, 0f };
			*uParam4 = 113.6465f;
			*uParam3 = { *uParam3 * { 1.1f, 1.1f, 1.1f } };
			return true;
	
		case 247:
			uParam2->f_97 = 0;
			*uParam2 = 788045382;
			*uParam3 = { 9.8707f, 13.0084f, 0f };
			*uParam4 = (-114f - 43f) + 133f;
			return true;
	
		case 288:
			uParam2->f_97 = 0;
			*uParam2 = -810318068;
			*uParam3 = { -7.7078f, 23.9099f, 1.7307f };
			*uParam4 = 24.3187f;
			return true;
	
		case 309:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -4.5662f, -3.2485f, 0.9455f - 1.7f };
			*uParam4 = -138.6056f;
			return true;
	
		case 305:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 33.8797f, 3597.0466f, 1399.6621f } - { 37.9419f, 3602.284f, 1394.2081f } };
			*uParam4 = 315.9865f - 122.5269f;
			return true;
	
		case 310:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { 10.5999f, 3.3997f, 1.0212f };
			*uParam4 = -50.3062f;
			return true;
	
		case 255:
			uParam2->f_97 = 0;
			*uParam2 = 627094268;
			*uParam3 = { -13.2279f, -7.5348f, 0f };
			*uParam4 = 4.32f;
			return true;
	
		case 265:
			uParam2->f_97 = 0;
			*uParam2 = 1131912276;
			*uParam3 = { 11.9596f, 0.345f, -1.0016f };
			*uParam4 = -42.4225f;
			return true;
	
		case 285:
			uParam2->f_97 = 0;
			*uParam2 = -1745203402;
			*uParam3 = { 3.424f, 7.6462f, 0.8227f };
			*uParam4 = -150f;
			return true;
	
		case 256:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 7.1164f, -1094.2047f, -1243.6498f } - { 7.1f, -1105.15f, -1242.68f } };
			*uParam4 = 14.0848f - 120f;
			return true;
	
		case 257:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 6.8143f, -930.5448f, -1672.5349f } - { 6.479f, -974.7168f, -1667.148f } };
			*uParam4 = 144.9416f - 171.253f;
			return true;
	
		case 258:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 30.3025f, 6276.1196f, -267.5488f } - { 30.5054f, 6250.9f, -301.4778f } };
			*uParam4 = 130.9896f - 10.247f;
			return true;
	
		case 314:
			uParam2->f_97 = 0;
			*uParam2 = -644710429;
			*uParam5 = { 0f, 150f, 20f };
			*uParam6 = 30f;
			return true;
	}

	switch (iParam1)
	{
		case 110:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 32.5629f, -387.5143f, -147.166f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 341.4322f - 133f;
			return true;
	
		case 111:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 24.4283f, -689.1462f, -1306.7816f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 214.6826f - 33f;
			return true;
	
		case 153:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 79.3324f, 254.0631f, -708.9244f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 115.2022f - -176.25f;
			return true;
	
		case 154:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 79.3324f, 254.0631f, -708.9244f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 115.2022f - -147.192f;
			return true;
	
		case 165:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 35.0054f, -441.1681f, -1100.8779f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 297.5568f - -144.622f;
			return true;
	
		case 159:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 36.3852f, -199.5354f, -825.3141f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 29.4869f - -62.5f;
			return true;
	
		case 160:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 36.2086f, -144.1027f, -730.8218f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 28.532f - 119f;
			return true;
	
		case 167:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 31.7307f, -523.2257f, -1144.1743f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 299.2956f - -22.32f;
			return true;
	
		case 152:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 60.9436f, 314.6989f, -1421.7998f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 335.4134f - 72f;
			return true;
	
		case 157:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 79.469f, 255.3143f, -706.187f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 117.3069f - 37.27f;
			return true;
	
		case 225:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.7165f, -1677.7335f, 185.4888f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 54.2538f - -83.8f;
			return true;
	
		case 218:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.3218f, -1405.1594f, -17.556f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 91.3098f - -70.4124f;
			return true;
	
		case 219:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 30.2611f, -1492.1511f, -219.3172f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 139.2572f - -12f;
			return true;
	
		case 220:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 25.3018f, -1811.6935f, -22.6138f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 141.0423f - -117.356f;
			return true;
	
		case 206:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 208.5337f, 773.6719f, 164.1308f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 136.3104f - -36f;
			return true;
	
		case 207:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 108.9995f, 396.924f, -263.3745f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 284.4611f - -95.588f;
			return true;
	
		case 274:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 139.5782f, 2030.4458f, -1883.836f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 340.5746f - 9f;
			return true;
	
		case 312:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 10.0296f, 6560.5566f, -200.684f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 134.5505f - 110.5931f;
			return true;
	
		case 271:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 6.4647f, -1083.7513f, -1278.0234f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 115.8919f - 26.3597f;
			return true;
	
		case 248:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 102.4417f, 164.5124f, 325.8113f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 68.4108f - 10.77f;
			return true;
	
		case 242:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 56.616f, -122.9896f, -1622.2205f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 210.8653f - 13.7207f;
			return true;
	
		case 254:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 53.0019f, -213.7796f, 172.442f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 250.3032f - -40f;
			return true;
	
		case 287:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 17.3426f, -836.0328f, -887.9977f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 270.8607f - -81f;
			return true;
	
		case 286:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 4.8359f, -1182.7039f, -1264.2178f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 298.4328f - -150f;
			return true;
	
		case 239:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 104.8218f, 289.0073f, -80.4564f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 247.6446f - -122f;
			return true;
	
		case 243:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.2762f, -1477.2819f, 434.9171f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 228.6353f - 18f;
			return true;
	
		case 244:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.2762f, -1477.2819f, 434.9171f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 228.6353f - -51f;
			return true;
	
		case 249:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 103.1881f, 177.7729f, 288.977f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 68.9831f - 138f - 180f;
			return true;
	
		case 273:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 32.7794f, -432.4635f, -161.4589f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 340.0368f - -153f;
			return true;
	
		case 92:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 202.1143f, 828.3607f, -806.8813f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 101.1612f - -54.347f;
			return true;
	
		case 103:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 12.0174f, -1108.081f, -1724.72f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 319.8931f - 143.4931f;
			return true;
	
		case 109:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 10.2248f, -628.4899f, -1859.5045f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 229.0784f - 99f;
			return true;
	
		case 81:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 53.1469f, 90.4242f, -1393.4424f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 123.1782f - -45f;
			return true;
	
		case 95:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 101.921f, 186.1865f, 370.5876f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 159.7861f - 70f;
			return true;
	
		case 97:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 45.9871f, -188.5636f, -1391.1559f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 36.5172f - -45f;
			return true;
	
		case 134:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 46.0567f, 3076.742f, 2001.9182f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 328.101f - -33.128f;
			return true;
	
		case 88:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 60.9442f, 314.7191f, -1421.8212f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 336.5938f - -132f;
			return true;
	
		case 306:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 37.4888f, 5643.7256f, -569.3535f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 296.1685f - MISC::GET_HEADING_FROM_VECTOR_2D(7.4998f, -7.4995f);
			return true;
	
		case 307:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 47.4526f, 4717.728f, -1555.5929f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 236.223f - MISC::GET_HEADING_FROM_VECTOR_2D(-10.6345f, -0.7246f);
			return true;
	
		case 308:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 22.7549f, 4629.148f, -1553.861f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 332.7842f - MISC::GET_HEADING_FROM_VECTOR_2D(3.4271f, 13.6787f);
			return true;
	
		case 278:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 35.9161f, -1009.7451f, 631.8275f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 98.8128f - -33.77f;
			return true;
	
		case 279:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 234.6825f, 900.8749f, -111.9033f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 6.1087f - 155.68f;
			return true;
	
		case 240:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 33.5351f, 3636.151f, 1546.3232f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 298.4009f - -4.124f;
			return true;
	
		case 241:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 30.512f, 6439.6665f, -179.4242f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 225.5593f - 108f;
			return true;
	
		case 264:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.2977f, -1390.5446f, 486.7419f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 178.298f - -90f;
			return true;
	
		case 266:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 10.5662f, 143.2342f, -3052.8945f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 85.3429f - 68.8227f;
			return true;
	
		case 267:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 39.9155f, 4934.08f, 2202.3752f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 314.2654f - 56.2037f;
			return true;
	
		case 269:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 28.149f, -782.0952f, 401.2502f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 179.9905f - -106.6605f;
			return true;
	
		case 246:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 3.3919f, -1534.5072f, -1195.2559f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 305.8221f - -165f;
			return true;
	
		case 263:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 12.8792f, -1241.2125f, -573.3765f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 316.9941f - -171f;
			return true;
	
		case 259:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 4.0002f, -1298.5391f, -724.429f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 230.5715f - -32.488f;
			return true;
	
		case 260:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 61.203f, 250.8387f, -1309.1135f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 10.7756f - -29.093f;
			return true;
	
		case 261:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 79.764f, 60.3233f, 917.6678f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = 148.021f - 229.6085f;
			return true;
	
		case 270:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { { 350f, 8588f, 2919f } - Global_99120[iParam1 /*3*/] };
			*uParam4 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
			return true;
	
		case 289:
			func_165(iParam0, uParam2, 0);
			*uParam3 = { -48.5171f, 28.4211f, 3.0057f };
			*uParam4 = -1.3831f;
			return true;
	}

	return false;
}

void func_164(int iParam0, var uParam1, int iParam2) // Position - 0xB44D Hash - 0xF92B8944 ^0xD11BCD5C
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
			num = -1008861746;
		
			if (Global_113648.f_9087.f_99.f_58[128] && !Global_113648.f_9087.f_99.f_58[131])
				num = -1883869285;
		
			switch (num)
			{
				case -1008861746:
					*uParam1 = num;
					uParam1->f_2 = 3f;
					uParam1->f_4 = 0;
					uParam1->f_9 = 1;
					uParam1->f_11[0] = 1;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "5MDS003", 16);
					break;
			
				case -1883869285:
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
			num = -1435919434;
		
			switch (num)
			{
				case -1435919434:
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
				num = 736902334;
			else if (iParam2 == 2)
				num = -2140431165;
			else if (Global_113648.f_9087.f_99.f_58[118])
				num = -2140431165;
			else
				num = 736902334;
		
			switch (num)
			{
				case -2140431165:
					*uParam1 = num;
					uParam1->f_2 = 6f;
					uParam1->f_5 = 53;
					uParam1->f_6 = 0;
					uParam1->f_7 = 59;
					uParam1->f_8 = 156;
					TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_27), "FC88", 16);
					break;
			
				case 736902334:
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

int func_165(int iParam0, var uParam1, int iParam2) // Position - 0xB6A9 Hash - 0x36C85017 ^0xB53359F3
{
	if (Global_100085[iParam0 /*98*/] == 0)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (Global_100085[iParam0 /*98*/] == -150975354)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (func_177(iParam0))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(Global_100085[iParam0 /*98*/]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_PLANE(Global_100085[iParam0 /*98*/]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_HELI(Global_100085[iParam0 /*98*/]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (VEHICLE::IS_THIS_MODEL_A_TRAIN(Global_100085[iParam0 /*98*/]))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (iParam2 == 1)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_CAR(Global_100085[iParam0 /*98*/]))
		{
			func_164(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}
	else if (iParam2 == 2)
	{
		if (!VEHICLE::IS_THIS_MODEL_A_BIKE(Global_100085[iParam0 /*98*/]))
		{
			func_164(iParam0, uParam1, iParam2);
			uParam1->f_91 = iParam2;
			return 1;
		}
	}

	if (!func_166(Global_100085[iParam0 /*98*/], false, -1))
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
		return 1;
	}

	if (iParam2 != 0)
	{
		func_164(iParam0, uParam1, iParam2);
		uParam1->f_91 = iParam2;
	
		if (Global_100085[iParam0 /*98*/] != *uParam1)
		{
			*uParam1 = { Global_100085[iParam0 /*98*/] };
			uParam1->f_91 = 0;
			return 0;
		}
	}
	else
	{
		func_164(iParam0, uParam1, 1);
		uParam1->f_91 = 1;
	
		if (Global_100085[iParam0 /*98*/] == *uParam1)
		{
			func_164(iParam0, uParam1, 1);
			uParam1->f_91 = 1;
			return 1;
		}
	
		func_164(iParam0, uParam1, 2);
		uParam1->f_91 = 2;
	
		if (Global_100085[iParam0 /*98*/] == *uParam1)
		{
			func_164(iParam0, uParam1, 2);
			uParam1->f_91 = 2;
			return 1;
		}
	
		*uParam1 = { Global_100085[iParam0 /*98*/] };
		uParam1->f_91 = 0;
		return 0;
	}

	func_164(iParam0, uParam1, iParam2);
	uParam1->f_91 = iParam2;
	return 1;
}

BOOL func_166(Hash hParam0, BOOL bParam1, int iParam2) // Position - 0xB8E1 Hash - 0x9BD8A1CC ^0xA5081522
{
	int i;
	Hash outData;

	if (hParam0 == 0)
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(hParam0))
		return false;

	if (hParam0 == -915704871 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 237764926 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == 349315417 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || hParam0 == -613725916 || hParam0 == -401643538 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!func_176())
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

	if (hParam0 == -150975354)
		if (!func_175() && !func_174() && !func_173() && !func_172() && !func_176())
			return false;

	if (hParam0 == 37348240 || hParam0 == 11251904 || hParam0 == 544021352)
	{
		if (func_171() || MISC::IS_PC_VERSION() || func_170())
		{
		}
		else if (!func_173())
		{
			return false;
		}
	}

	if (bParam1)
		if (!func_169(hParam0, iParam2))
			return false;

	if (!func_167(hParam0))
		return false;

	return true;
}

BOOL func_167(Hash hParam0) // Position - 0xBA63 Hash - 0xC7E3100C ^0x46134811
{
	int num;
	var unk;
	var unk2;

	if (!func_168())
		return true;

	NETSHOPPING::NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(&num, &unk);

	if (num == 4)
		return true;

	switch (hParam0)
	{
		case -827162039:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_DUNE4_t0_v3", 64);
			break;
	
		case 989294410:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_VOLTIC2_t0_v3", 64);
			break;
	
		case 941494461:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_RUINER2_t0_v3", 64);
			break;
	
		case -1649536104:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_PHANTOM2_t0_v3", 64);
			break;
	
		case 1180875963:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_TECHNICAL2_t0_v3", 64);
			break;
	
		case 682434785:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BOXVILLE5_t0_v3", 64);
			break;
	
		case -1912017790:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_WASTELANDER_t0_v3", 64);
			break;
	
		case -1590337689:
			TEXT_LABEL_ASSIGN_STRING(&unk2, "VE_BLAZER5_t0_v3", 64);
			break;
	
		default:
			return true;
	}

	if (!unk_0x0E4605546F88E7A3(&unk2))
		return false;

	return true;
}

BOOL func_168() // Position - 0xBB2F Hash - 0x2E0B1DC1 ^0xD2D0A3D9
{
	if (MISC::IS_PC_VERSION())
		return NETSHOPPING::NET_GAMESERVER_USE_SERVER_TRANSACTIONS();

	return false;
}

BOOL func_169(Hash hParam0, int iParam1) // Position - 0xBB46 Hash - 0x2FF24ACC ^0x92A5C100
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

	if (hParam0 == -602287871)
		if (!Global_262145.f_7059 && !Global_262145.f_13397 && cloudTimeAsInt < Global_262145.f_13398)
			num = 0;

	if (hParam0 == -2039755226)
		if (!Global_262145.f_14737 && cloudTimeAsInt < Global_262145.f_14749)
			num = 0;
	else if (hParam0 == 16646064 || hParam0 == -899509638)
		if (!Global_262145.f_14733 && cloudTimeAsInt < Global_262145.f_14745)
			num = 0;
	else if (hParam0 == 223258115)
		if (!Global_262145.f_14734 && cloudTimeAsInt < Global_262145.f_14746)
			num = 0;
	else if (hParam0 == -1797613329)
		if (!Global_262145.f_14735 && cloudTimeAsInt < Global_262145.f_14747)
			num = 0;
	else if (hParam0 == -1126264336)
		if (!Global_262145.f_14736 && cloudTimeAsInt < Global_262145.f_14748)
			num = 0;
	else if (hParam0 == 1119641113)
		if (!Global_262145.f_14738 && cloudTimeAsInt < Global_262145.f_14750)
			num = 0;

	if (hParam0 == 2123327359)
		if (!Global_262145.f_14739 && cloudTimeAsInt < Global_262145.f_14742)
			num = 0;
	else if (hParam0 == -1757836725)
		if (!Global_262145.f_14740 && cloudTimeAsInt < Global_262145.f_14743)
			num = 0;
	else if (hParam0 == -1829802492)
		if (!Global_262145.f_14741 && cloudTimeAsInt < Global_262145.f_14744)
			num = 0;

	if (hParam0 == 86520421)
		if (!Global_262145.f_17313 && cloudTimeAsInt < Global_262145.f_17278)
			num = 0;
	else if (hParam0 == 1549126457)
		if (!Global_262145.f_17308 && cloudTimeAsInt < Global_262145.f_17273)
			num = 0;
	else if (hParam0 == 390201602)
		if (!Global_262145.f_17312 && cloudTimeAsInt < Global_262145.f_17277)
			num = 0;
	else if (hParam0 == 683047626)
		if (!Global_262145.f_17311 && cloudTimeAsInt < Global_262145.f_17276)
			num = 0;
	else if (hParam0 == -1232836011)
		if (!Global_262145.f_17305 && cloudTimeAsInt < Global_262145.f_17270)
			num = 0;
	else if (hParam0 == -777172681)
		if (!Global_262145.f_17306 && cloudTimeAsInt < Global_262145.f_17271)
			num = 0;
	else if (hParam0 == 101905590)
		if (!Global_262145.f_17309 && cloudTimeAsInt < Global_262145.f_17274)
			num = 0;
	else if (hParam0 == -663299102)
		if (!Global_262145.f_17310 && cloudTimeAsInt < Global_262145.f_17275)
			num = 0;
	else if (hParam0 == 1887331236)
		if (!Global_262145.f_17307 && cloudTimeAsInt < Global_262145.f_17272)
			num = 0;
	else if (hParam0 == 741090084)
		if (!Global_262145.f_17315 && cloudTimeAsInt < Global_262145.f_17280)
			num = 0;
	else if (hParam0 == -2103821244)
		if (!Global_262145.f_17316 && cloudTimeAsInt < Global_262145.f_17281)
			num = 0;
	else if (hParam0 == -1071380347)
		if (!Global_262145.f_17304 && cloudTimeAsInt < Global_262145.f_17269)
			num = 0;
	else if (hParam0 == 2067820283)
		if (!Global_262145.f_17303 && cloudTimeAsInt < Global_262145.f_17268)
			num = 0;
	else if (hParam0 == 819197656)
		if (!Global_262145.f_17302 && cloudTimeAsInt < Global_262145.f_17267)
			num = 0;
	else if (hParam0 == 482197771)
		if (!Global_262145.f_17314 && cloudTimeAsInt < Global_262145.f_17279)
			num = 0;
	else if (hParam0 == -401643538)
		if (!Global_262145.f_17317 && cloudTimeAsInt < Global_262145.f_17282)
			num = 0;
	else if (hParam0 == 349315417)
		if (!Global_262145.f_17318 && cloudTimeAsInt < Global_262145.f_17283)
			num = 0;
	else if (hParam0 == -915704871)
		if (!Global_262145.f_17319 && cloudTimeAsInt < Global_262145.f_17284)
			num = 0;
	else if (hParam0 == 237764926)
		if (!Global_262145.f_17320 && cloudTimeAsInt < Global_262145.f_17285)
			num = 0;

	if (hParam0 == 822018448)
		if (!Global_262145.f_17474 && cloudTimeAsInt < Global_262145.f_17496)
			num = 0;
	else if (hParam0 == -1606187161)
		if (!Global_262145.f_17475 && cloudTimeAsInt < Global_262145.f_17497)
			num = 0;
	else if (hParam0 == -1009268949)
		if (!Global_262145.f_17476 && cloudTimeAsInt < Global_262145.f_17498)
			num = 0;
	else if (hParam0 == 2035069708)
		if (!Global_262145.f_17477 && cloudTimeAsInt < Global_262145.f_17499)
			num = 0;
	else if (hParam0 == -2115793025)
		if (!Global_262145.f_17478 && cloudTimeAsInt < Global_262145.f_17500)
			num = 0;
	else if (hParam0 == -570033273)
		if (!Global_262145.f_17479 && cloudTimeAsInt < Global_262145.f_17501)
			num = 0;
	else if (hParam0 == -255678177)
		if (!Global_262145.f_17481 && cloudTimeAsInt < Global_262145.f_17502)
			num = 0;
	else if (hParam0 == -609625092)
		if (!Global_262145.f_17482 && cloudTimeAsInt < Global_262145.f_17503)
			num = 0;
	else if (hParam0 == -405626514)
		if (!Global_262145.f_17483 && cloudTimeAsInt < Global_262145.f_17504)
			num = 0;
	else if (hParam0 == 6774487)
		if (!Global_262145.f_17484 && cloudTimeAsInt < Global_262145.f_17505)
			num = 0;
	else if (hParam0 == -674927303)
		if (!Global_262145.f_17485 && cloudTimeAsInt < Global_262145.f_17506)
			num = 0;
	else if (hParam0 == -1404136503)
		if (!Global_262145.f_17486 && cloudTimeAsInt < Global_262145.f_17507)
			num = 0;
	else if (hParam0 == -440768424)
		if (!Global_262145.f_17487 && cloudTimeAsInt < Global_262145.f_17508)
			num = 0;
	else if (hParam0 == -1558399629)
		if (!Global_262145.f_17493 && cloudTimeAsInt < Global_262145.f_17515)
			num = 0;
	else if (hParam0 == 1026149675)
		if (!Global_262145.f_17490 && cloudTimeAsInt < Global_262145.f_17511)
			num = 0;
	else if (hParam0 == -618617997)
		if (!Global_262145.f_17491 && cloudTimeAsInt < Global_262145.f_17512)
			num = 0;
	else if (hParam0 == -1289178744)
		if (!Global_262145.f_17492 && cloudTimeAsInt < Global_262145.f_17513)
			num = 0;
	else if (hParam0 == -1842748181)
		if (!Global_262145.f_17480 && cloudTimeAsInt < Global_262145.f_17514)
			num = 0;
	else if (hParam0 == -2140431165)
		if (!Global_262145.f_17494 && cloudTimeAsInt < Global_262145.f_17516)
			num = 0;
	else if (hParam0 == 1491277511)
		if (!Global_262145.f_17488 && cloudTimeAsInt < Global_262145.f_17509)
			num = 0;
	else if (hParam0 == -1523428744)
		if (!Global_262145.f_17489 && cloudTimeAsInt < Global_262145.f_17510)
			num = 0;
	else if (hParam0 == 1873600305)
		if (!Global_262145.f_17495 && cloudTimeAsInt < Global_262145.f_17517)
			num = 0;

	if (hParam0 == 989294410)
		if (!Global_262145.f_19131 && cloudTimeAsInt < Global_262145.f_19228)
			num = 0;
	else if (hParam0 == 941494461)
		if (!Global_262145.f_19132 && cloudTimeAsInt < Global_262145.f_19229)
			num = 0;
	else if (hParam0 == -827162039)
		if (!Global_262145.f_19133 && cloudTimeAsInt < Global_262145.f_19230)
			num = 0;
	else if (hParam0 == -312295511)
		if (!Global_262145.f_19134 && cloudTimeAsInt < Global_262145.f_19231)
			num = 0;
	else if (hParam0 == -1649536104)
		if (!Global_262145.f_19135 && cloudTimeAsInt < Global_262145.f_19232)
			num = 0;
	else if (hParam0 == 1180875963)
		if (!Global_262145.f_19136 && cloudTimeAsInt < Global_262145.f_19233)
			num = 0;
	else if (hParam0 == 682434785)
		if (!Global_262145.f_19137 && cloudTimeAsInt < Global_262145.f_19234)
			num = 0;
	else if (hParam0 == -1912017790)
		if (!Global_262145.f_19138 && cloudTimeAsInt < Global_262145.f_19235)
			num = 0;
	else if (hParam0 == -1590337689)
		if (!Global_262145.f_19139 && cloudTimeAsInt < Global_262145.f_19236)
			num = 0;
	else if (hParam0 == -1045541610)
		if (!Global_262145.f_19140 && cloudTimeAsInt < Global_262145.f_19237)
			num = 0;
	else if (hParam0 == -2022483795)
		if (!Global_262145.f_19141 && cloudTimeAsInt < Global_262145.f_19238)
			num = 0;
	else if (hParam0 == -239841468)
		if (!Global_262145.f_19142 && cloudTimeAsInt < Global_262145.f_19239)
			num = 0;
	else if (hParam0 == 1790834270)
		if (!Global_262145.f_19143 && cloudTimeAsInt < Global_262145.f_19240)
			num = 0;
	else if (hParam0 == 196747873)
		if (!Global_262145.f_19144 && cloudTimeAsInt < Global_262145.f_19241)
			num = 0;
	else if (hParam0 == -566387422)
		if (!Global_262145.f_19145 && cloudTimeAsInt < Global_262145.f_19242)
			num = 0;
	else if (hParam0 == 627535535)
		if (!Global_262145.f_19146 && cloudTimeAsInt < Global_262145.f_19243)
			num = 0;
	else if (hParam0 == -757735410)
		if (!Global_262145.f_19147 && cloudTimeAsInt < Global_262145.f_19244)
			num = 0;
	else if (hParam0 == -2048333973)
		if (!Global_262145.f_19148 && cloudTimeAsInt < Global_262145.f_19245)
			num = 0;
	else if (hParam0 == -482719877)
		if (!Global_262145.f_19149 && cloudTimeAsInt < Global_262145.f_19246)
			num = 0;
	else if (hParam0 == 1034187331)
		if (!Global_262145.f_19150 && cloudTimeAsInt < Global_262145.f_19247)
			num = 0;
	else if (hParam0 == 1093792632)
		if (!Global_262145.f_19151 && cloudTimeAsInt < Global_262145.f_19248)
			num = 0;
	else if (hParam0 == -1758137366)
		if (!Global_262145.f_19152 && cloudTimeAsInt < Global_262145.f_19249)
			num = 0;
	else if (hParam0 == 1886268224)
		if (!Global_262145.f_19153 && cloudTimeAsInt < Global_262145.f_19250)
			num = 0;
	else if (hParam0 == 1074745671)
		if (!Global_262145.f_19154 && cloudTimeAsInt < Global_262145.f_19251)
			num = 0;
	else if (hParam0 == 272929391)
		if (!Global_262145.f_19155 && cloudTimeAsInt < Global_262145.f_19252)
			num = 0;

	if (hParam0 == 1234311532)
		if (!Global_262145.f_20212 && cloudTimeAsInt < Global_262145.f_20208)
			num = 0;
	else if (hParam0 == -1405937764)
		if (!Global_262145.f_20213 && cloudTimeAsInt < Global_262145.f_20209)
			num = 0;
	else if (hParam0 == 719660200)
		if (!Global_262145.f_20214 && cloudTimeAsInt < Global_262145.f_20210)
			num = 0;
	else if (hParam0 == -982130927)
		if (!Global_262145.f_20215 && cloudTimeAsInt < Global_262145.f_20211)
			num = 0;

	if (hParam0 == 917809321)
		if (!Global_262145.f_21094 && cloudTimeAsInt < Global_262145.f_21102)
			num = 0;
	else if (hParam0 == 223240013)
		if (!Global_262145.f_21095 && cloudTimeAsInt < Global_262145.f_21103)
			num = 0;
	else if (hParam0 == 1504306544)
		if (!Global_262145.f_21096 && cloudTimeAsInt < Global_262145.f_21104)
			num = 0;
	else if (hParam0 == 1939284556)
		if (!Global_262145.f_21097 && cloudTimeAsInt < Global_262145.f_21105)
			num = 0;
	else if (hParam0 == 159274291)
		if (!Global_262145.f_21098 && cloudTimeAsInt < Global_262145.f_21106)
			num = 0;
	else if (hParam0 == 433954513)
		if (!Global_262145.f_21099 && cloudTimeAsInt < Global_262145.f_21107)
			num = 0;

	if (hParam0 == -1763555241)
		if (!Global_262145.f_21893 && cloudTimeAsInt < Global_262145.f_21913)
			num = 0;
	else if (hParam0 == -749299473)
		if (!Global_262145.f_21905 && cloudTimeAsInt < Global_262145.f_21925)
			num = 0;
	else if (hParam0 == -975345305)
		if (!Global_262145.f_21896 && cloudTimeAsInt < Global_262145.f_21916)
			num = 0;
	else if (hParam0 == -1700874274)
		if (!Global_262145.f_21906 && cloudTimeAsInt < Global_262145.f_21926)
			num = 0;
	else if (hParam0 == -392675425)
		if (!Global_262145.f_21894 && cloudTimeAsInt < Global_262145.f_21914)
			num = 0;
	else if (hParam0 == 1043222410)
		if (!Global_262145.f_21910 && cloudTimeAsInt < Global_262145.f_21930)
			num = 0;
	else if (hParam0 == -1386191424)
		if (!Global_262145.f_21908 && cloudTimeAsInt < Global_262145.f_21928)
			num = 0;
	else if (hParam0 == 1565978651)
		if (!Global_262145.f_21909 && cloudTimeAsInt < Global_262145.f_21929)
			num = 0;
	else if (hParam0 == 1036591958)
		if (!Global_262145.f_21904 && cloudTimeAsInt < Global_262145.f_21924)
			num = 0;
	else if (hParam0 == -32878452)
		if (!Global_262145.f_21911 && cloudTimeAsInt < Global_262145.f_21931)
			num = 0;
	else if (hParam0 == -42959138)
		if (!Global_262145.f_21907 && cloudTimeAsInt < Global_262145.f_21927)
			num = 0;
	else if (hParam0 == -1984275979)
		if (!Global_262145.f_21903 && cloudTimeAsInt < Global_262145.f_21923)
			num = 0;
	else if (hParam0 == -1007528109)
		if (!Global_262145.f_21895 && cloudTimeAsInt < Global_262145.f_21915)
			num = 0;
	else if (hParam0 == -1523619738)
		if (!Global_262145.f_21897 && cloudTimeAsInt < Global_262145.f_21917)
			num = 0;
	else if (hParam0 == 1392481335)
		if (!Global_262145.f_21898 && cloudTimeAsInt < Global_262145.f_21918)
			num = 0;
	else if (hParam0 == -998177792)
		if (!Global_262145.f_21899 && cloudTimeAsInt < Global_262145.f_21919)
			num = 0;
	else if (hParam0 == -1242608589)
		if (!Global_262145.f_21900 && cloudTimeAsInt < Global_262145.f_21920)
			num = 0;
	else if (hParam0 == 1841130506)
		if (!Global_262145.f_21901 && cloudTimeAsInt < Global_262145.f_21921)
			num = 0;
	else if (hParam0 == 2049897956)
		if (!Global_262145.f_21902 && cloudTimeAsInt < Global_262145.f_21922)
			num = 0;

	if (hParam0 == 1483171323)
		if (!Global_262145.f_22861 && cloudTimeAsInt < Global_262145.f_22889)
			num = 0;
	else if (hParam0 == 886810209)
		if (!Global_262145.f_22862 && cloudTimeAsInt < Global_262145.f_22890)
			num = 0;
	else if (hParam0 == -1693015116)
		if (!Global_262145.f_22863 && cloudTimeAsInt < Global_262145.f_22891)
			num = 0;
	else if (hParam0 == -692292317)
		if (!Global_262145.f_22864 && cloudTimeAsInt < Global_262145.f_22892)
			num = 0;
	else if (hParam0 == -1435527158)
		if (!Global_262145.f_22865 && cloudTimeAsInt < Global_262145.f_22893)
			num = 0;
	else if (hParam0 == 1181327175)
		if (!Global_262145.f_22866 && cloudTimeAsInt < Global_262145.f_22894)
			num = 0;
	else if (hParam0 == 1489874736)
		if (!Global_262145.f_22867 && cloudTimeAsInt < Global_262145.f_22895)
			num = 0;
	else if (hParam0 == -212993243)
		if (!Global_262145.f_22868 && cloudTimeAsInt < Global_262145.f_22896)
			num = 0;
	else if (hParam0 == 447548909)
		if (!Global_262145.f_22869 && cloudTimeAsInt < Global_262145.f_22897)
			num = 0;
	else if (hParam0 == 1561920505)
		if (!Global_262145.f_22870 && cloudTimeAsInt < Global_262145.f_22898)
			num = 0;
	else if (hParam0 == -1848994066)
		if (!Global_262145.f_22871 && cloudTimeAsInt < Global_262145.f_22899)
			num = 0;
	else if (hParam0 == 1741861769)
		if (!Global_262145.f_22872 && cloudTimeAsInt < Global_262145.f_22900)
			num = 0;
	else if (hParam0 == 1104234922)
		if (!Global_262145.f_22873 && cloudTimeAsInt < Global_262145.f_22901)
			num = 0;
	else if (hParam0 == 1871995513)
		if (!Global_262145.f_22874 && cloudTimeAsInt < Global_262145.f_22902)
			num = 0;
	else if (hParam0 == 1352136073)
		if (!Global_262145.f_22875 && cloudTimeAsInt < Global_262145.f_22903)
			num = 0;
	else if (hParam0 == -313185164)
		if (!Global_262145.f_22876 && cloudTimeAsInt < Global_262145.f_22904)
			num = 0;
	else if (hParam0 == -2079788230)
		if (!Global_262145.f_22877 && cloudTimeAsInt < Global_262145.f_22905)
			num = 0;
	else if (hParam0 == 600450546)
		if (!Global_262145.f_22878 && cloudTimeAsInt < Global_262145.f_22906)
			num = 0;
	else if (hParam0 == -410205223)
		if (!Global_262145.f_22879 && cloudTimeAsInt < Global_262145.f_22907)
			num = 0;
	else if (hParam0 == 867799010)
		if (!Global_262145.f_22880 && cloudTimeAsInt < Global_262145.f_22908)
			num = 0;
	else if (hParam0 == -1529242755)
		if (!Global_262145.f_22881 && cloudTimeAsInt < Global_262145.f_22909)
			num = 0;
	else if (hParam0 == 903794909)
		if (!Global_262145.f_22882 && cloudTimeAsInt < Global_262145.f_22910)
			num = 0;
	else if (hParam0 == -1532697517)
		if (!Global_262145.f_22883 && cloudTimeAsInt < Global_262145.f_22911)
			num = 0;
	else if (hParam0 == 15219735)
		if (!Global_262145.f_22884 && cloudTimeAsInt < Global_262145.f_22912)
			num = 0;
	else if (hParam0 == 661493923)
		if (!Global_262145.f_22885 && cloudTimeAsInt < Global_262145.f_22913)
			num = 0;
	else if (hParam0 == 838982985)
		if (!Global_262145.f_22886 && cloudTimeAsInt < Global_262145.f_22914)
			num = 0;
	else if (hParam0 == -391595372)
		if (!Global_262145.f_22887 && cloudTimeAsInt < Global_262145.f_22915)
			num = 0;
	else if (hParam0 == -121446169)
		if (!Global_262145.f_22888 && cloudTimeAsInt < Global_262145.f_22916)
			num = 0;

	if (hParam0 == 1909189272)
		if (!Global_262145.f_24081 && cloudTimeAsInt < Global_262145.f_24097)
			num = 0;
	else if (hParam0 == 1617472902)
		if (!Global_262145.f_24082 && cloudTimeAsInt < Global_262145.f_24098)
			num = 0;
	else if (hParam0 == -1267543371)
		if (!Global_262145.f_24086 && cloudTimeAsInt < Global_262145.f_24102)
			num = 0;
	else if (hParam0 == 931280609)
		if (!Global_262145.f_24089 && cloudTimeAsInt < Global_262145.f_24105)
			num = 0;
	else if (hParam0 == 1046206681)
		if (!Global_262145.f_24094 && cloudTimeAsInt < Global_262145.f_24110)
			num = 0;
	else if (hParam0 == -1259134696)
		if (!Global_262145.f_24088 && cloudTimeAsInt < Global_262145.f_24104)
			num = 0;
	else if (hParam0 == 1115909093)
		if (!Global_262145.f_24080 && cloudTimeAsInt < Global_262145.f_24096)
			num = 0;
	else if (hParam0 == 1031562256)
		if (!Global_262145.f_24087 && cloudTimeAsInt < Global_262145.f_24103)
			num = 0;
	else if (hParam0 == -376434238)
		if (!Global_262145.f_24093 && cloudTimeAsInt < Global_262145.f_24109)
			num = 0;
	else if (hParam0 == -986944621)
		if (!Global_262145.f_24092 && cloudTimeAsInt < Global_262145.f_24108)
			num = 0;
	else if (hParam0 == -1134706562)
		if (!Global_262145.f_24083 && cloudTimeAsInt < Global_262145.f_24099)
			num = 0;
	else if (hParam0 == -2120700196)
		if (!Global_262145.f_24085 && cloudTimeAsInt < Global_262145.f_24101)
			num = 0;
	else if (hParam0 == -214906006)
		if (!Global_262145.f_24095 && cloudTimeAsInt < Global_262145.f_24111)
			num = 0;
	else if (hParam0 == -988501280)
		if (!Global_262145.f_24091 && cloudTimeAsInt < Global_262145.f_24107)
			num = 0;
	else if (hParam0 == 1254014755)
		if (!Global_262145.f_24084 && cloudTimeAsInt < Global_262145.f_24100)
			num = 0;
	else if (hParam0 == -726768679)
		if (!Global_262145.f_24090 && cloudTimeAsInt < Global_262145.f_24106)
			num = 0;

	if (hParam0 == -1988428699)
		if (!Global_262145.f_24171 && cloudTimeAsInt < Global_262145.f_24158)
			num = 0;
	else if (hParam0 == 345756458)
		if (!Global_262145.f_24172 && cloudTimeAsInt < Global_262145.f_24159)
			num = 0;
	else if (hParam0 == 1945374990)
		if (!Global_262145.f_24177 && cloudTimeAsInt < Global_262145.f_24164)
			num = 0;
	else if (hParam0 == 1653666139)
		if (!Global_262145.f_24176 && cloudTimeAsInt < Global_262145.f_24163)
			num = 0;
	else if (hParam0 == 500482303)
		if (!Global_262145.f_24174 && cloudTimeAsInt < Global_262145.f_24161)
			num = 0;
	else if (hParam0 == 2044532910)
		if (!Global_262145.f_24180 && cloudTimeAsInt < Global_262145.f_24167)
			num = 0;
	else if (hParam0 == -638562243)
		if (!Global_262145.f_24182 && cloudTimeAsInt < Global_262145.f_24169)
			num = 0;
	else if (hParam0 == 1692272545)
		if (!Global_262145.f_24183 && cloudTimeAsInt < Global_262145.f_24170)
			num = 0;
	else if (hParam0 == 2069146067)
		if (!Global_262145.f_24181 && cloudTimeAsInt < Global_262145.f_24168)
			num = 0;
	else if (hParam0 == -420911112)
		if (!Global_262145.f_24173 && cloudTimeAsInt < Global_262145.f_24160)
			num = 0;
	else if (hParam0 == 321186144)
		if (!Global_262145.f_24175 && cloudTimeAsInt < Global_262145.f_24162)
			num = 0;
	else if (hParam0 == -54332285)
		if (!Global_262145.f_24179 && cloudTimeAsInt < Global_262145.f_24166)
			num = 0;
	else if (hParam0 == -307958377)
		if (!Global_262145.f_24178 && cloudTimeAsInt < Global_262145.f_24165)
			num = 0;

	if (hParam0 == 1721676810)
	{
	}
	else if (hParam0 == -801550069)
	{
	}
	else if (hParam0 == 679453769)
	{
	}
	else if (hParam0 == 1909700336)
	{
	}
	else if (hParam0 == 2139203625)
	{
	}
	else if (hParam0 == -1890996696)
	{
	}
	else if (hParam0 == 2038858402)
	{
	}
	else if (hParam0 == -1146969353)
	{
	}
	else if (hParam0 == 1542143200)
	{
	}
	else if (hParam0 == -579747861)
	{
	}
	else if (hParam0 == 444994115)
	{
	}
	else if (hParam0 == 1637620610)
	{
	}
	else if (hParam0 == -755532233)
	{
	}
	else if (hParam0 == 540101442)
	{
	}
	else if (hParam0 == -1106120762)
	{
	}
	else if (hParam0 == -1478704292)
	{
	}
	else if (hParam0 == -2096690334)
	{
	}
	else if (hParam0 == 1591739866)
	{
		if (!Global_262145.f_26768 && cloudTimeAsInt < Global_262145.f_26770)
			num = 0;
	}
	else if (hParam0 == -1168952148)
	{
		if (!Global_262145.f_25781 && cloudTimeAsInt < Global_262145.f_25774)
			num = 0;
	}
	else if (hParam0 == -1566607184)
	{
		if (!Global_262145.f_25782 && cloudTimeAsInt < Global_262145.f_25775)
			num = 0;
	}
	else if (hParam0 == -331467772)
	{
		if (!Global_262145.f_25783 && cloudTimeAsInt < Global_262145.f_25776)
			num = 0;
	}
	else if (hParam0 == 1279262537)
	{
		if (!Global_262145.f_25784 && cloudTimeAsInt < Global_262145.f_25777)
			num = 0;
	}
	else if (hParam0 == -49115651)
	{
		if (!Global_262145.f_26769 && cloudTimeAsInt < Global_262145.f_26771)
			num = 0;
	}
	else if (hParam0 == 1456744817)
	{
		if (!Global_262145.f_25785 && cloudTimeAsInt < Global_262145.f_25778)
			num = 0;
	}
	else if (hParam0 == -507495760)
	{
		if (!Global_262145.f_25786 && cloudTimeAsInt < Global_262145.f_25779)
			num = 0;
	}
	else if (hParam0 == -286046740)
	{
		if (!Global_262145.f_25787 && cloudTimeAsInt < Global_262145.f_25780)
			num = 0;
	}
	else if (hParam0 == 1044193113)
	{
		if (!Global_262145.f_25792 && cloudTimeAsInt < Global_262145.f_25813)
			num = 0;
	}
	else if (hParam0 == 686471183)
	{
		if (!Global_262145.f_25793 && cloudTimeAsInt < Global_262145.f_25814)
			num = 0;
	}
	else if (hParam0 == -941272559)
	{
		if (!Global_262145.f_25794 && cloudTimeAsInt < Global_262145.f_25815)
			num = 0;
	}
	else if (hParam0 == -1829436850)
	{
		if (!Global_262145.f_25795 && cloudTimeAsInt < Global_262145.f_25816)
			num = 0;
	}
	else if (hParam0 == -682108547)
	{
		if (!Global_262145.f_25796 && cloudTimeAsInt < Global_262145.f_25817)
			num = 0;
	}
	else if (hParam0 == 722226637)
	{
		if (!Global_262145.f_25797 && cloudTimeAsInt < Global_262145.f_25818)
			num = 0;
	}
	else if (hParam0 == 1854776567)
	{
		if (!Global_262145.f_25798 && cloudTimeAsInt < Global_262145.f_25819)
			num = 0;
	}
	else if (hParam0 == 1862507111)
	{
		if (!Global_262145.f_25799 && cloudTimeAsInt < Global_262145.f_25820)
			num = 0;
	}
	else if (hParam0 == -882629065)
	{
		if (!Global_262145.f_25800 && cloudTimeAsInt < Global_262145.f_25821)
			num = 0;
	}
	else if (hParam0 == -362150785)
	{
		if (!Global_262145.f_25801 && cloudTimeAsInt < Global_262145.f_25822)
			num = 0;
	}
	else if (hParam0 == 310284501)
	{
		if (!Global_262145.f_25802 && cloudTimeAsInt < Global_262145.f_25823)
			num = 0;
	}
	else if (hParam0 == 916547552)
	{
		if (!Global_262145.f_25803 && cloudTimeAsInt < Global_262145.f_25824)
			num = 0;
	}
	else if (hParam0 == -1804415708)
	{
		if (!Global_262145.f_25804 && cloudTimeAsInt < Global_262145.f_25825)
			num = 0;
	}
	else if (hParam0 == 1934384720)
	{
		if (!Global_262145.f_25805 && cloudTimeAsInt < Global_262145.f_25826)
			num = 0;
	}
	else if (hParam0 == -1349095620)
	{
		if (!Global_262145.f_25806 && cloudTimeAsInt < Global_262145.f_25827)
			num = 0;
	}
	else if (hParam0 == -208911803)
	{
		if (!Global_262145.f_25807 && cloudTimeAsInt < Global_262145.f_25828)
			num = 0;
	}
	else if (hParam0 == -324618589)
	{
		if (!Global_262145.f_25808 && cloudTimeAsInt < Global_262145.f_25829)
			num = 0;
	}
	else if (hParam0 == -664141241)
	{
		if (!Global_262145.f_25809 && cloudTimeAsInt < Global_262145.f_25830)
			num = 0;
	}
	else if (hParam0 == 1323778901)
	{
		if (!Global_262145.f_25810 && cloudTimeAsInt < Global_262145.f_25831)
			num = 0;
	}
	else if (hParam0 == -1620126302)
	{
		if (!Global_262145.f_25811 && cloudTimeAsInt < Global_262145.f_25832)
			num = 0;
	}
	else if (hParam0 == -447711397)
	{
		if (!Global_262145.f_25812 && cloudTimeAsInt < Global_262145.f_25833)
			num = 0;
	}
	else if (hParam0 == 1118611807)
	{
		if (!Global_262145.f_28613 && cloudTimeAsInt < Global_262145.f_28634)
			num = 0;
	}
	else if (hParam0 == 409049982)
	{
		if (!Global_262145.f_28614 && cloudTimeAsInt < Global_262145.f_28635)
			num = 0;
	}
	else if (hParam0 == -1756021720)
	{
		if (!Global_262145.f_28615 && cloudTimeAsInt < Global_262145.f_28636)
			num = 0;
	}
	else if (hParam0 == 2031587082)
	{
		if (!Global_262145.f_28616 && cloudTimeAsInt < Global_262145.f_28637)
			num = 0;
	}
	else if (hParam0 == 1693751655)
	{
		if (!Global_262145.f_28617 && cloudTimeAsInt < Global_262145.f_28638)
			num = 0;
	}
	else if (hParam0 == 987469656)
	{
		if (!Global_262145.f_28618 && cloudTimeAsInt < Global_262145.f_28639)
			num = 0;
	}
	else if (hParam0 == 872704284)
	{
		if (!Global_262145.f_28619 && cloudTimeAsInt < Global_262145.f_28640)
			num = 0;
	}
	else if (hParam0 == 408825843)
	{
		if (!Global_262145.f_28620 && cloudTimeAsInt < Global_262145.f_28641)
			num = 0;
	}
	else if (hParam0 == 740289177)
	{
		if (!Global_262145.f_28621 && cloudTimeAsInt < Global_262145.f_28642)
			num = 0;
	}
	else if (hParam0 == -834353991)
	{
		if (!Global_262145.f_28622 && cloudTimeAsInt < Global_262145.f_28643)
			num = 0;
	}
	else if (hParam0 == 301304410)
	{
		if (!Global_262145.f_28623 && cloudTimeAsInt < Global_262145.f_28644)
			num = 0;
	}
	else if (hParam0 == 960812448)
	{
		if (!Global_262145.f_28624 && cloudTimeAsInt < Global_262145.f_28645)
			num = 0;
	}
	else if (hParam0 == 1284356689)
	{
		if (!Global_262145.f_28625 && cloudTimeAsInt < Global_262145.f_28646)
			num = 0;
	}
	else if (hParam0 == 394110044)
	{
		if (!Global_262145.f_28626 && cloudTimeAsInt < Global_262145.f_28647)
			num = 0;
	}
	else if (hParam0 == 1938952078)
	{
		if (!Global_262145.f_28627 && cloudTimeAsInt < Global_262145.f_28648)
			num = 0;
	}
	else if (hParam0 == -907477130)
	{
		if (!Global_262145.f_28628 && cloudTimeAsInt < Global_262145.f_28649)
			num = 0;
	}
	else if (hParam0 == -1987130134)
	{
		if (!Global_262145.f_28629 && cloudTimeAsInt < Global_262145.f_28650)
			num = 0;
	}
	else if (hParam0 == 1747439474)
	{
		if (!Global_262145.f_28630 && cloudTimeAsInt < Global_262145.f_28651)
			num = 0;
	}
	else if (hParam0 == -1254331310)
	{
		if (!Global_262145.f_28631 && cloudTimeAsInt < Global_262145.f_28652)
			num = 0;
	}
	else if (hParam0 == 469291905)
	{
		if (!Global_262145.f_28632 && cloudTimeAsInt < Global_262145.f_28653)
			num = 0;
	}
	else if (hParam0 == -48031959)
	{
		if (!Global_262145.f_28633 && cloudTimeAsInt < Global_262145.f_28654)
			num = 0;
	}
	else if (hParam0 == 340154634)
	{
		if (!Global_262145.f_28656 && cloudTimeAsInt < Global_262145.f_28657 && !Global_262145.f_28611)
			num = 0;
	}
	else if (hParam0 == -1960756985)
	{
		if (!Global_262145.f_28659 && cloudTimeAsInt < Global_262145.f_28660 && !Global_262145.f_28612)
			num = 0;
	}
	else if (hParam0 == -1132721664)
	{
		if (!Global_262145.f_28664 && cloudTimeAsInt < Global_262145.f_28667)
			num = 0;
	}
	else if (hParam0 == 83136452)
	{
		if (!Global_262145.f_28665 && cloudTimeAsInt < Global_262145.f_28668)
			num = 0;
	}
	else if (hParam0 == 1456336509)
	{
		if (!Global_262145.f_28666 && cloudTimeAsInt < Global_262145.f_28669)
			num = 0;
	}
	else if (hParam0 == -2122646867)
	{
		if (!Global_262145.f_29682 && cloudTimeAsInt < Global_262145.f_29347)
			num = 0;
	}
	else if (hParam0 == -2098954619)
	{
		if (!Global_262145.f_29333 && cloudTimeAsInt < Global_262145.f_29354)
			num = 0;
	}
	else if (hParam0 == 2134119907)
	{
		if (!Global_262145.f_29334 && cloudTimeAsInt < Global_262145.f_29340)
			num = 0;
	}
	else if (hParam0 == 67753863)
	{
		if (!Global_262145.f_29680 && cloudTimeAsInt < Global_262145.f_29348)
			num = 0;
	}
	else if (hParam0 == 1107404867)
	{
		if (!Global_262145.f_29681 && cloudTimeAsInt < Global_262145.f_29349)
			num = 0;
	}
	else if (hParam0 == -913589546)
	{
		if (!Global_262145.f_29327 && cloudTimeAsInt < Global_262145.f_29346)
			num = 0;
	}
	else if (hParam0 == -631322662)
	{
		if (!Global_262145.f_29328 && cloudTimeAsInt < Global_262145.f_29355)
			num = 0;
	}
	else if (hParam0 == -838099166)
	{
		if (!Global_262145.f_29329 && cloudTimeAsInt < Global_262145.f_29345)
			num = 0;
	}
	else if (hParam0 == -1810806490)
	{
		if (!Global_262145.f_29330 && cloudTimeAsInt < Global_262145.f_29343)
			num = 0;
	}
	else if (hParam0 == -1358197432)
	{
		if (!Global_262145.f_29676 && cloudTimeAsInt < Global_262145.f_29350)
			num = 0;
	}
	else if (hParam0 == 1492612435)
	{
		if (!Global_262145.f_29677 && cloudTimeAsInt < Global_262145.f_29351)
			num = 0;
	}
	else if (hParam0 == 1181339704)
	{
		if (!Global_262145.f_29678 && cloudTimeAsInt < Global_262145.f_29352)
			num = 0;
	}
	else if (hParam0 == -1728685474)
	{
		if (!Global_262145.f_29679 && cloudTimeAsInt < Global_262145.f_29353)
			num = 0;
	}
	else if (hParam0 == 1717532765)
	{
		if (!Global_262145.f_29331 && cloudTimeAsInt < Global_262145.f_29342)
			num = 0;
	}
	else if (hParam0 == 1802742206)
	{
		if (!Global_262145.f_29332 && cloudTimeAsInt < Global_262145.f_29344)
			num = 0;
	}
	else if (hParam0 == 1455990255)
	{
		if (!Global_262145.f_30141 && cloudTimeAsInt < Global_262145.f_30124)
			num = 0;
	}
	else if (hParam0 == 295054921)
	{
		if (!Global_262145.f_30142 && cloudTimeAsInt < Global_262145.f_30125)
			num = 0;
	}
	else if (hParam0 == -365873403)
	{
		if (!Global_262145.f_30143 && cloudTimeAsInt < Global_262145.f_30126)
			num = 0;
	}
	else if (hParam0 == -276744698)
	{
		if (!Global_262145.f_30144 && cloudTimeAsInt < Global_262145.f_30127)
			num = 0;
	}
	else if (hParam0 == 1861786828)
	{
		if (!Global_262145.f_30145 && cloudTimeAsInt < Global_262145.f_30128)
			num = 0;
	}
	else if (hParam0 == -210308634)
	{
		if (!Global_262145.f_30146 && cloudTimeAsInt < Global_262145.f_30129)
			num = 0;
	}
	else if (hParam0 == -857356038)
	{
		if (!Global_262145.f_30147 && cloudTimeAsInt < Global_262145.f_30130)
			num = 0;
	}
	else if (hParam0 == -1492917079)
	{
		if (!Global_262145.f_30148 && cloudTimeAsInt < Global_262145.f_30131)
			num = 0;
	}
	else if (hParam0 == -1149725334)
	{
		if (!Global_262145.f_30149 && cloudTimeAsInt < Global_262145.f_30132)
			num = 0;
	}
	else if (hParam0 == 1644055914)
	{
		if (Global_262145.f_30158)
		{
		}
		else if (!Global_262145.f_30150 && cloudTimeAsInt < Global_262145.f_30133)
		{
			num = 0;
		}
	}
	else if (hParam0 == 1086534307)
	{
		if (!Global_262145.f_30151 && cloudTimeAsInt < Global_262145.f_30134)
			num = 0;
	}
	else if (hParam0 == -1045911276)
	{
		if (!Global_262145.f_30152 && cloudTimeAsInt < Global_262145.f_30135)
			num = 0;
	}
	else if (hParam0 == 2014313426)
	{
		if (!Global_262145.f_30153 && cloudTimeAsInt < Global_262145.f_30136)
			num = 0;
	}
	else if (hParam0 == -102335483)
	{
		if (!Global_262145.f_30154 && cloudTimeAsInt < Global_262145.f_30137)
			num = 0;
	}
	else if (hParam0 == 1429622905)
	{
		if (Global_262145.f_30159)
		{
		}
		else if (!Global_262145.f_30155 && cloudTimeAsInt < Global_262145.f_30138)
		{
			num = 0;
		}
	}
	else if (hParam0 == -980573366)
	{
		if (!Global_262145.f_30156 && cloudTimeAsInt < Global_262145.f_30139)
			num = 0;
	}
	else if (hParam0 == 298565713)
	{
		if (!Global_262145.f_30157 && cloudTimeAsInt < Global_262145.f_30140)
			num = 0;
	}
	else if (hParam0 == -1244461404)
	{
		if (!Global_262145.f_31009 && cloudTimeAsInt < Global_262145.f_30992)
			num = 0;
	}
	else if (hParam0 == 2038480341)
	{
		if (!Global_262145.f_31010 && cloudTimeAsInt < Global_262145.f_30993)
			num = 0;
	}
	else if (hParam0 == -291021213)
	{
		if (!Global_262145.f_31011 && cloudTimeAsInt < Global_262145.f_30994)
			num = 0;
	}
	else if (hParam0 == -452604007)
	{
		if (!Global_262145.f_31012 && cloudTimeAsInt < Global_262145.f_30995)
			num = 0;
	}
	else if (hParam0 == -1540373595)
	{
		if (!Global_262145.f_31013 && cloudTimeAsInt < Global_262145.f_30996)
			num = 0;
	}
	else if (hParam0 == -1858654120)
	{
		if (!Global_262145.f_31014 && cloudTimeAsInt < Global_262145.f_30997)
			num = 0;
	}
	else if (hParam0 == 579912970)
	{
		if (!Global_262145.f_31015 && cloudTimeAsInt < Global_262145.f_30998)
			num = 0;
	}
	else if (hParam0 == -1193912403)
	{
		if (!Global_262145.f_31016 && cloudTimeAsInt < Global_262145.f_30999)
			num = 0;
	}
	else if (hParam0 == 1377217886)
	{
		if (!Global_262145.f_31017 && cloudTimeAsInt < Global_262145.f_31000)
			num = 0;
	}
	else if (hParam0 == 1755697647)
	{
		if (!Global_262145.f_31018 && cloudTimeAsInt < Global_262145.f_31001)
			num = 0;
	}
	else if (hParam0 == 426742808)
	{
		if (!Global_262145.f_31019 && cloudTimeAsInt < Global_262145.f_31002)
			num = 0;
	}
	else if (hParam0 == -1582061455)
	{
		if (!Global_262145.f_31020 && cloudTimeAsInt < Global_262145.f_31003)
			num = 0;
	}
	else if (hParam0 == -1507230520)
	{
		if (!Global_262145.f_31021 && cloudTimeAsInt < Global_262145.f_31004)
			num = 0;
	}
	else if (hParam0 == 736672010)
	{
		if (!Global_262145.f_31022 && cloudTimeAsInt < Global_262145.f_31005)
			num = 0;
	}
	else if (hParam0 == 1416471345)
	{
		if (!Global_262145.f_31023 && cloudTimeAsInt < Global_262145.f_31006)
			num = 0;
	}
	else if (hParam0 == 1304459735)
	{
		if (!Global_262145.f_31024 && cloudTimeAsInt < Global_262145.f_31007)
			num = 0;
	}
	else if (hParam0 == -1726022652)
	{
		if (!Global_262145.f_31025 && cloudTimeAsInt < Global_262145.f_31008)
			num = 0;
	}
	else if (hParam0 == -915234475)
	{
		if (!Global_262145.f_31889 && cloudTimeAsInt < Global_262145.f_31874)
			num = 0;
	}
	else if (hParam0 == -619930876)
	{
		if (!Global_262145.f_31890 && cloudTimeAsInt < Global_262145.f_31875)
			num = 0;
	}
	else if (hParam0 == 1532171089)
	{
		if (!Global_262145.f_31891 && cloudTimeAsInt < Global_262145.f_31876)
			num = 0;
	}
	else if (hParam0 == 461465043)
	{
		if (!Global_262145.f_31892 && cloudTimeAsInt < Global_262145.f_31877)
			num = 0;
	}
	else if (hParam0 == -1444114309)
	{
		if (!Global_262145.f_31893 && cloudTimeAsInt < Global_262145.f_31878)
			num = 0;
	}
	else if (hParam0 == -1527436269)
	{
		if (!Global_262145.f_31894 && cloudTimeAsInt < Global_262145.f_31879)
			num = 0;
	}
	else if (hParam0 == 629969764)
	{
		if (!Global_262145.f_31895 && cloudTimeAsInt < Global_262145.f_31880)
			num = 0;
	}
	else if (hParam0 == 1141395928)
	{
		if (!Global_262145.f_31896 && cloudTimeAsInt < Global_262145.f_31881)
			num = 0;
	}
	else if (hParam0 == 655665811)
	{
		if (!Global_262145.f_31897 && cloudTimeAsInt < Global_262145.f_31882)
			num = 0;
	}
	else if (hParam0 == 1993851908)
	{
		if (!Global_262145.f_31898 && cloudTimeAsInt < Global_262145.f_31883)
			num = 0;
	}
	else if (hParam0 == 662793086)
	{
		if (!Global_262145.f_31899 && cloudTimeAsInt < Global_262145.f_31884)
			num = 0;
	}
	else if (hParam0 == -261346873)
	{
		if (!Global_262145.f_31900 && cloudTimeAsInt < Global_262145.f_31885)
			num = 0;
	}
	else if (hParam0 == -670086588)
	{
		if (!Global_262145.f_31901 && cloudTimeAsInt < Global_262145.f_31886)
			num = 0;
	}
	else if (hParam0 == 1353120668)
	{
		if (!Global_262145.f_31902 && cloudTimeAsInt < Global_262145.f_31887)
			num = 0;
	}
	else if (hParam0 == 359875117)
	{
		if (Global_262145.f_31967)
		{
		}
		else if (!Global_262145.f_31903 && cloudTimeAsInt < Global_262145.f_31888)
		{
			num = 0;
		}
	}
	else if (hParam0 == 15214558)
	{
		if (!*Global_262145.f_33131 && cloudTimeAsInt < *Global_262145.f_33112)
			num = 0;
	}
	else if (hParam0 == -754687673)
	{
		if (!*Global_262145.f_33125 && cloudTimeAsInt < *Global_262145.f_33106)
			num = 0;
	}
	else if (hParam0 == -768236378)
	{
		if (!*Global_262145.f_33129 && cloudTimeAsInt < *Global_262145.f_33110)
			num = 0;
	}
	else if (hParam0 == 40817712)
	{
		if (!*Global_262145.f_33123 && cloudTimeAsInt < *Global_262145.f_33104)
			num = 0;
	}
	else if (hParam0 == -64075878)
	{
		if (!*Global_262145.f_33134 && cloudTimeAsInt < *Global_262145.f_33115)
			num = 0;
	}
	else if (hParam0 == -10917683)
	{
		if (!*Global_262145.f_33126 && cloudTimeAsInt < *Global_262145.f_33107)
			num = 0;
	}
	else if (hParam0 == -294678663)
	{
		if (!*Global_262145.f_33135 && cloudTimeAsInt < *Global_262145.f_33116)
			num = 0;
	}
	else if (hParam0 == -1855505138)
	{
		if (!*Global_262145.f_33137 && cloudTimeAsInt < *Global_262145.f_33118)
			num = 0;
	}
	else if (hParam0 == 775514032)
	{
		if (!*Global_262145.f_33128 && cloudTimeAsInt < *Global_262145.f_33109)
			num = 0;
	}
	else if (hParam0 == -893984159)
	{
		if (!*Global_262145.f_33136 && cloudTimeAsInt < *Global_262145.f_33117)
			num = 0;
	}
	else if (hParam0 == 274946574)
	{
		if (!*Global_262145.f_33139 && cloudTimeAsInt < *Global_262145.f_33120)
			num = 0;
	}
	else if (hParam0 == -165394758)
	{
		if (!*Global_262145.f_33124 && cloudTimeAsInt < *Global_262145.f_33105)
			num = 0;
	}
	else if (hParam0 == -1758379524)
	{
		if (!*Global_262145.f_33132 && cloudTimeAsInt < *Global_262145.f_33113)
			num = 0;
	}
	else if (hParam0 == -994371320)
	{
		if (!*Global_262145.f_33138 && cloudTimeAsInt < *Global_262145.f_33119)
			num = 0;
	}
	else if (hParam0 == 1706945532)
	{
		if (!*Global_262145.f_33130 && cloudTimeAsInt < *Global_262145.f_33111)
			num = 0;
	}
	else if (hParam0 == -1356880839)
	{
		if (!*Global_262145.f_33140 && cloudTimeAsInt < *Global_262145.f_33121)
			num = 0;
	}
	else if (hParam0 == -477831899)
	{
		if (!*Global_262145.f_33127 && cloudTimeAsInt < *Global_262145.f_33108)
			num = 0;
	}
	else if (hParam0 == -505223465)
	{
		if (!*Global_262145.f_33122 && cloudTimeAsInt < *Global_262145.f_33103)
			num = 0;
	}
	else if (hParam0 == 1384502824)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1576586413)
	{
		if (!*Global_262145.f_33962 && cloudTimeAsInt < *Global_262145.f_33946)
			num = 0;
	}
	else if (hParam0 == -1249788006)
	{
		if (!*Global_262145.f_33971 && cloudTimeAsInt < *Global_262145.f_33954)
			num = 0;
	}
	else if (hParam0 == -1386336041)
	{
		if (!*Global_262145.f_33965 && cloudTimeAsInt < *Global_262145.f_33949)
			num = 0;
	}
	else if (hParam0 == -1627077503)
	{
		if (!*Global_262145.f_33959 && cloudTimeAsInt < *Global_262145.f_33943)
			num = 0;
	}
	else if (hParam0 == -1035489563)
	{
		if (!*Global_262145.f_33960 && cloudTimeAsInt < *Global_262145.f_33944)
			num = 0;
	}
	else if (hParam0 == 1748565021)
	{
		if (!*Global_262145.f_33957 && cloudTimeAsInt < *Global_262145.f_33941)
			num = 0;
	}
	else if (hParam0 == 2100457220)
	{
		if (!*Global_262145.f_33968 && cloudTimeAsInt < *Global_262145.f_33952)
			num = 0;
	}
	else if (hParam0 == 996383885)
	{
		if (!*Global_262145.f_33972 && cloudTimeAsInt < *Global_262145.f_33956)
			num = 0;
	}
	else if (hParam0 == -131348178)
	{
		if (!*Global_262145.f_33969 && cloudTimeAsInt < *Global_262145.f_33953)
			num = 0;
	}
	else if (hParam0 == 268758436)
	{
		if (!*Global_262145.f_33958 && cloudTimeAsInt < *Global_262145.f_33942)
			num = 0;
	}
	else if (hParam0 == 1076201208)
	{
		if (!*Global_262145.f_33961 && cloudTimeAsInt < *Global_262145.f_33945)
			num = 0;
	}
	else if (hParam0 == 669204833)
	{
		if (!*Global_262145.f_33970 && cloudTimeAsInt < *Global_262145.f_33955)
			num = 0;
	}
	else if (hParam0 == 1550581940)
	{
		if (!*Global_262145.f_33966 && cloudTimeAsInt < *Global_262145.f_33950)
			num = 0;
	}
	else if (hParam0 == -1933242328)
	{
		if (!*Global_262145.f_33967 && cloudTimeAsInt < *Global_262145.f_33951)
			num = 0;
	}
	else if (hParam0 == -461850249)
	{
		if (!*Global_262145.f_33964 && cloudTimeAsInt < *Global_262145.f_33948)
			num = 0;
	}
	else if (hParam0 == -956048545)
	{
		if (!*Global_262145.f_33963 && cloudTimeAsInt < *Global_262145.f_33947)
			num = 0;
	}

	return num;
}

BOOL func_170() // Position - 0xF17A Hash - 0x4C81F065 ^0x26D68D51
{
	return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

BOOL func_171() // Position - 0xF190 Hash - 0x4C81F065 ^0x60494CEC
{
	return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}

BOOL func_172() // Position - 0xF1A6 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_173() // Position - 0xF1AF Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_174() // Position - 0xF1B8 Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

BOOL func_175() // Position - 0xF1C1 Hash - 0x64659D79 ^0xC3C726F6
{
	if (DLC::IS_DLC_PRESENT(-1226939934))
		return true;

	return false;
}

BOOL func_176() // Position - 0xF1DA Hash - 0x44DD83CC ^0x6D2C8335
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

BOOL func_177(int iParam0) // Position - 0xF292 Hash - 0x2E27F421 ^0x11F57E1B
{
	if (Global_100085[iParam0 /*98*/] == -150975354 || Global_100085[iParam0 /*98*/] == -613725916)
		return true;

	if (Global_100085[iParam0 /*98*/] == 771711535 || Global_100085[iParam0 /*98*/] == -1066334226)
		return true;

	if (Global_100085[iParam0 /*98*/] == 1030400667)
		return true;

	if (Global_100085[iParam0 /*98*/] == 569305213)
		return true;

	if (Global_100085[iParam0 /*98*/] == -1807623979)
		return true;

	if (Global_100085[iParam0 /*98*/] == -907477130 || Global_100085[iParam0 /*98*/] == -1647941228)
		return true;

	if (Global_100085[iParam0 /*98*/] == -1291952903 && !Global_113648.f_9087.f_330[8 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == -1311154784 && !Global_113648.f_9087.f_330[8 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == -34623805 && !Global_113648.f_9087.f_330[8 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == 758895617 && !Global_113648.f_9087.f_330[9 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == 353883353 && !Global_113648.f_9087.f_330[9 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == 1051415893 && !Global_113648.f_9087.f_330[10 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == -433375717 && !Global_113648.f_9087.f_330[11 /*6*/])
		return true;

	if (Global_100085[iParam0 /*98*/] == 1938952078)
		return true;

	if (Global_100085[iParam0 /*98*/] == 444583674)
		return true;

	if (Global_100085[iParam0 /*98*/] == -433375717)
		return true;

	if (Global_100085[iParam0 /*98*/] == -2137348917)
		return true;

	if (Global_100085[iParam0 /*98*/] == -1800170043 && !Global_113648.f_9087.f_330[80 /*6*/] && !Global_113648.f_9087.f_330[81 /*6*/] && !Global_113648.f_9087.f_330[82 /*6*/])
		return true;

	return false;
}

BOOL func_178(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Position - 0xF512 Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_179(int iParam0, var uParam1, var uParam2) // Position - 0xF559 Hash - 0x6BF2FA05 ^0x6BF2FA05
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
			return func_179(8, uParam1, uParam2);
	
		case 10:
			return func_179(8, uParam1, uParam2);
	
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

int func_180() // Position - 0xFEC8 Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_190(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_189(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_188(&unk, CLOCK::GET_CLOCK_HOURS());
	func_183(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_182(&unk, CLOCK::GET_CLOCK_MONTH());
	func_181(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_181(var uParam0, int iParam1) // Position - 0xFF0E Hash - 0x15B9927E ^0x4A4674
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

void func_182(var uParam0, int iParam1) // Position - 0xFF94 Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_183(var uParam0, int iParam1) // Position - 0xFFC7 Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_187(*uParam0);
	num2 = func_185(*uParam0);

	if (iParam1 < 1 || iParam1 > func_184(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

int func_184(int iParam0, int iParam1) // Position - 0x10019 Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_185(int iParam0) // Position - 0x100BB Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_186(BOOL bParam0, var uParam1, var uParam2) // Position - 0x100DD Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_187(int iParam0) // Position - 0x100F4 Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

void func_188(var uParam0, int iParam1) // Position - 0x10101 Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_189(var uParam0, int iParam1) // Position - 0x1013B Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_190(var uParam0, int iParam1) // Position - 0x10176 Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

void func_191(var uParam0, int iParam1) // Position - 0x101B2 Hash - 0x604FE9F ^0x604FE9F
{
	int i;
	int num;
	var unk;
	float unk2;

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
		
			if (!func_179(Global_113648.f_18535[i], &unk, &num2))
			{
				Global_113648.f_18535[i] = 318;
				func_192(&uParam0->f_2296[i]);
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

void func_192(var uParam0) // Position - 0x10378 Hash - 0xEE73B491 ^0xBDB3BDC2
{
	*uParam0 = -15;
	return;
}

void func_193() // Position - 0x10386 Hash - 0xFEC7C9F6 ^0xFEC7C9F6
{
	Global_112672 = 0;
	return;
}

int func_194() // Position - 0x10393 Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_2(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

void func_195(int iParam0) // Position - 0x103DE Hash - 0x29A8F290 ^0x7807499C
{
	Global_77348.f_138 = iParam0;
	return;
}

int func_196(int iParam0) // Position - 0x103EE Hash - 0xA75852D8 ^0xD16C52E
{
	int i;
	int num;

	num = 0;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (Global_113648.f_7690[i /*15*/] == iParam0)
		{
			if (Global_43804 != i)
			{
				func_209(i);
				func_201(iParam0);
				num = 1;
			}
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_201(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			func_200(iParam0);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_764; i = i + 1)
	{
		if (Global_113648.f_7690.f_651[i /*14*/] == iParam0)
		{
			func_198(i);
			num = 1;
		}
	}

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (Global_113648.f_7690.f_765[i /*10*/] == iParam0)
		{
			func_197(i);
			num = 1;
		}
	}

	return num;
}

void func_197(int iParam0) // Position - 0x10515 Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_866)
		return;

	if (Global_113648.f_7690.f_866 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_866 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_765[i /*10*/] = { Global_113648.f_7690.f_765[i + 1 /*10*/] };
		}
	}

	if (Global_113648.f_7690.f_866 > 0)
	{
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 - 1 /*10*/] = { unk };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 - 1;
	}

	return;
}

void func_198(int iParam0) // Position - 0x105CE Hash - 0xEC7DB104 ^0xEC7DB104
{
	int i;
	var unk;

	if (iParam0 < 0 || iParam0 >= Global_113648.f_7690.f_764)
		return;

	if (Global_113648.f_7690.f_764 > 1)
	{
		for (i = iParam0; i <= Global_113648.f_7690.f_764 - 2; i = i + 1)
		{
			Global_113648.f_7690.f_651[i /*14*/] = { Global_113648.f_7690.f_651[i + 1 /*14*/] };
		}
	}

	if (Global_113648.f_7690.f_764 > 0)
	{
		Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 - 1 /*14*/] = { unk };
		Global_113648.f_7690.f_764 = Global_113648.f_7690.f_764 - 1;
	}

	func_199(false);
	func_199(true);
	func_199(2);
	return;
}

void func_199(BOOL bParam0) // Position - 0x10696 Hash - 0xDBA91FA2 ^0x62041168
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_102(bParam0))
		return;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, bParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = 0; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, bParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[bParam0] = num;
	return;
}

void func_200(int iParam0) // Position - 0x10754 Hash - 0x137FFF25 ^0x82C17B
{
	var unk;
	int unk2;
	int unk3;

	for (i = 0; i < Global_113648.f_7690.f_650; i = i + 1)
	{
		if (Global_113648.f_7690.f_199[i /*15*/] == iParam0)
		{
			for (j = i; j <= Global_113648.f_7690.f_650 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_199[j /*15*/] = { Global_113648.f_7690.f_199[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_650 = Global_113648.f_7690.f_650 - 1;
			return;
		}
	}

	return;
}

void func_201(int iParam0) // Position - 0x10801 Hash - 0xCCFAC6AA ^0xEC431D32
{
	var unk;
	int unk2;
	int unk3;

	for (i = 0; i < Global_113648.f_7690.f_198; i = i + 1)
	{
		if (Global_113648.f_7690.f_137[i /*15*/] == iParam0)
		{
			func_202(Global_113648.f_7690.f_137[i /*15*/].f_6);
		
			for (j = i; j <= Global_113648.f_7690.f_198 - 2; j = j + 1)
			{
				Global_113648.f_7690.f_137[j /*15*/] = { Global_113648.f_7690.f_137[j + 1 /*15*/] };
			}
		
			Global_113648.f_7690.f_137[Global_113648.f_7690.f_198 - 1 /*15*/] = { unk };
			Global_113648.f_7690.f_198 = Global_113648.f_7690.f_198 - 1;
			return;
		}
	}

	return;
}

int func_202(int iParam0) // Position - 0x108BD Hash - 0xE624B23E ^0x73975030
{
	BOOL flag;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (func_208(iParam0, Global_20383) == 1)
		{
			func_207(iParam0, Global_20383, 0);
		
			if (func_206(iParam0, Global_20383) == 0)
			{
				flag = Global_20383;
				func_203(iParam0, flag);
			}
		
			return 1;
		}
		else
		{
			return 0;
		}
	}

	return 0;
}

void func_203(int iParam0, BOOL bParam1) // Position - 0x10913 Hash - 0x5207FAC0 ^0x6E316FC
{
	BOOL flag;

	if (Global_117[iParam0 /*10*/].f_8 != 169)
	{
		if (bParam1 > 3)
		{
		}
		else
		{
			flag = bParam1;
			func_205(iParam0, flag, 0);
			func_204(iParam0, flag, 0);
		}
	}

	return;
}

void func_204(int iParam0, BOOL bParam1, int iParam2) // Position - 0x10948 Hash - 0xAB9B6CC ^0x1B5EEB55
{
	if (bParam1 < false || bParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_24[bParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_24[bParam1] = iParam2;

	return;
}

void func_205(int iParam0, BOOL bParam1, int iParam2) // Position - 0x1098D Hash - 0xAB9B6CC ^0x80AE0F15
{
	if (bParam1 < false || bParam1 > 4)
		return;

	Global_2028[iParam0 /*29*/].f_12[bParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_12[bParam1] = iParam2;

	return;
}

int func_206(int iParam0, BOOL bParam1) // Position - 0x109D2 Hash - 0x97DCD8A1 ^0xF8178EDD
{
	if (bParam1 < false || bParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_24[bParam1];
}

void func_207(int iParam0, BOOL bParam1, int iParam2) // Position - 0x109FC Hash - 0xB4ABC33 ^0x67322EDD
{
	Global_2028[iParam0 /*29*/].f_19[bParam1] = iParam2;

	if (iParam0 < 162)
		Global_113648.f_28052[iParam0 /*29*/].f_19[bParam1] = iParam2;

	return;
}

int func_208(int iParam0, BOOL bParam1) // Position - 0x10A2D Hash - 0x97DCD8A1 ^0xFBF2A354
{
	if (bParam1 < false || bParam1 > 4)
		return 0;

	return Global_2028[iParam0 /*29*/].f_19[bParam1];
}

void func_209(BOOL bParam0) // Position - 0x10A57 Hash - 0x4FA51D98 ^0x238D4E50
{
	BOOL i;
	int num;
	var unk;

	if (bParam0 < 0 || bParam0 >= Global_113648.f_7690.f_136)
		return;

	num = Global_113648.f_7690[bParam0 /*15*/].f_2;

	if (Global_113648.f_7690.f_136 > 1)
	{
		for (i = bParam0; i <= Global_113648.f_7690.f_136 - 2; i = i + 1)
		{
			Global_113648.f_7690[i /*15*/] = { Global_113648.f_7690[i + 1 /*15*/] };
		}
	}

	if (Global_113648.f_7690.f_136 > 0)
	{
		Global_113648.f_7690[Global_113648.f_7690.f_136 - 1 /*15*/] = { unk };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 - 1;
	}

	for (i = false; i < 3; i = i + 1)
	{
		if (IS_BIT_SET(num, i))
			func_199(i);
	}

	return;
}

int func_210(int iParam0, int iParam1) // Position - 0x10B2F Hash - 0x22217C90 ^0x799A19AD
{
	int num;

	num = func_66(func_211(iParam0));

	if (num < 0)
		return 15;

	if (num >= 10)
		return 15;

	return Global_113648.f_1.f_12[num /*6*/][iParam1];
}

int func_211(int iParam0) // Position - 0x10B70 Hash - 0x25B8F4EB ^0x25B8F4EB
{
	switch (iParam0)
	{
		case 0:
			return 7;
	
		case 1:
			return 8;
	
		case 2:
			return 9;
	
		case 3:
			return 10;
	
		case 4:
			return 11;
	}

	return -1;
}

int func_212(int iParam0) // Position - 0x10BC5 Hash - 0xDE37E6EA ^0xDE37E6EA
{
	int num;

	num = func_66(func_211(iParam0));
	return Global_96710[num /*19*/];
}

void func_213(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x10BE1 Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_221(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_75())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_220(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_221(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_220(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_218(PLAYER::PLAYER_ID()) && !func_215(PLAYER::PLAYER_ID(), 0) && !func_214() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_218(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_214() // Position - 0x10D2E Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_215(Player plParam0, int iParam1) // Position - 0x10D48 Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_216(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_216(int iParam0, BOOL bParam1) // Position - 0x10D93 Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_217();

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

BOOL func_217() // Position - 0x10DD4 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

BOOL func_218(Player plParam0) // Position - 0x10DE0 Hash - 0x68897CDD ^0x62820466
{
	if (func_215(plParam0, 0))
		return true;

	if (func_219())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_219() // Position - 0x10E1F Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_220(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x10E2D Hash - 0x3167F4C7 ^0xCE6B9B6A
{
	int num;

	num = 0;

	if (MISC::IS_PC_VERSION())
	{
		if (CUTSCENE::IS_MULTIHEAD_FADE_UP() != bParam0 && bParam2)
		{
			CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
			num = 1;
		}
	}

	return num;
}

void func_221(int iParam0) // Position - 0x10E60 Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

void func_222() // Position - 0x10E83 Hash - 0xCA65D77D ^0xCA65D77D
{
	if (func_404(24))
	{
		if (!func_2(false))
		{
			if (!IS_BIT_SET(iLocal_43, 3))
			{
				if (func_156(77))
				{
					if (func_150(0))
					{
						if (func_385(&iLocal_46, 0, 0, false, 0) == 1)
						{
							MISC::SET_BIT(&iLocal_43, 3);
							func_384();
							iLocal_179 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_182.f_1.f_394 - uLocal_182.f_1.f_397, uLocal_182.f_1.f_394 + uLocal_182.f_1.f_397, false, true, true, true);
							iLocal_180 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(uLocal_182.f_1.f_394, uLocal_182.f_1.f_397 * { 1.5f, 1.5f, 1.5f }, 0f, false, 7);
							PED::SET_PED_NON_CREATION_AREA(uLocal_182.f_1.f_394 - uLocal_182.f_1.f_397, uLocal_182.f_1.f_394 + uLocal_182.f_1.f_397);
							PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_182.f_1.f_394 - uLocal_182.f_1.f_397, uLocal_182.f_1.f_394 + uLocal_182.f_1.f_397, false, 0);
						
							if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
							{
								PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
								PLAYER::SET_MAX_WANTED_LEVEL(0);
							}
						}
					}
				}
			}
		
			if (IS_BIT_SET(iLocal_43, 3))
			{
				if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
				{
					if (!CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						func_380();
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_9[0]))
						{
							pedLocal_133 = Global_97178.f_9[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_133, false, true);
							PED::DELETE_PED(&pedLocal_133);
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_133, "LESTER", 2, 1302784073, 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_133, "LESTER", 2, 1302784073, 0);
						}
					
						if (ENTITY::DOES_ENTITY_EXIST(Global_97178.f_28[0]))
						{
							pedLocal_134 = Global_97178.f_28[0];
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(pedLocal_134, false, true);
						
							if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(pedLocal_134))
								ENTITY::DETACH_ENTITY(pedLocal_134, true, true);
						
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_134, "WALKINGSTICK_LESTER", 1, 1302784073, 0);
						}
					
						switch (func_100())
						{
							case 0:
								pedLocal_130 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_130, "MICHAEL", 0, 225514697, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_131, "FRANKLIN", 2, -1692214353, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_132, "TREVOR", 2, -1686040670, 0);
								break;
						
							case 1:
								pedLocal_131 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_130, "MICHAEL", 2, 225514697, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_131, "FRANKLIN", 0, -1692214353, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_132, "TREVOR", 2, -1686040670, 0);
								MISC::SET_BIT(&iLocal_43, 4);
								break;
						
							case 2:
								pedLocal_132 = PLAYER::PLAYER_PED_ID();
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_130, "MICHAEL", 2, 225514697, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_131, "FRANKLIN", 2, -1692214353, 0);
								CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(pedLocal_132, "TREVOR", 0, -1686040670, 0);
								MISC::SET_BIT(&iLocal_43, 4);
								break;
						}
					
						STREAMING::REQUEST_MODEL(225514697);
						func_73(true);
						func_213(true, true, true, false, false, false, false);
						func_379(77);
						ENTITY::CREATE_MODEL_HIDE(95.19f, -1293.4994f, 28.2672f, 1.5f, 867556671, false);
						func_378(&(uLocal_182.f_484), 0, 0, "MICHAEL", 1, 1);
						func_378(&(uLocal_182.f_484), 1, 0, "FRANKLIN", 1, 1);
						func_378(&(uLocal_182.f_484), 2, 0, "TREVOR", 1, 1);
						func_378(&(uLocal_182.f_484), 3, 0, "LESTER", 1, 1);
					
						if (func_100() == 0)
							bLocal_47 = true;
						else
							bLocal_47 = false;
					
						CUTSCENE::START_CUTSCENE(2048);
					}
					else
					{
						func_120();
					
						if (!IS_BIT_SET(iLocal_43, 6))
						{
							MISC::CLEAR_AREA(124.0681f, -1294.7621f, 28.2695f, 1.5f, false, false, false, false);
							MISC::SET_BIT(&iLocal_43, 6);
						}
					
						switch (iLocal_181)
						{
							case 0:
								func_377(1, 0);
								func_377(2, 0);
							
								if (!ENTITY::IS_ENTITY_DEAD(veLocal_128, false))
									if (func_376(veLocal_128, 0, 0))
										iLocal_181 = 2;
								else if (ENTITY::DOES_ENTITY_EXIST(veLocal_128))
									VEHICLE::DELETE_VEHICLE(&veLocal_128);
							
								if (iLocal_181 != 2)
								{
									STREAMING::REQUEST_MODEL(-1008861746);
									iLocal_181 = 1;
								}
								break;
						
							case 1:
								if (STREAMING::HAS_MODEL_LOADED(-1008861746))
								{
									func_377(0, 0);
									func_368(133.95317f, -1311.4037f, 28.08922f, 127.84701f, -1315.5419f, 32.11665f, 3.3f, 124.97f, -1321.87f, 28f, 37.74f, func_375(), true, false, true, false, false);
									func_319(&veLocal_129, 0, 130.56f, -1313.66f, 28.74f, 124.66f, false, 0);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_129, 1084227584);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1008861746);
									func_292(veLocal_129, 0f, 0f, 0f, 0f, 24, false);
									iLocal_181 = 2;
								}
								break;
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MICHAEL", 225514697))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0), false))
							{
								pedLocal_130 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("MICHAEL", 0));
								PED::SET_PED_CONFIG_FLAG(pedLocal_130, 208, true);
								PED::SET_PED_CONFIG_FLAG(pedLocal_130, 118, false);
								PED::SET_PED_CONFIG_FLAG(pedLocal_130, 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_130, true);
								ENTITY::SET_ENTITY_COORDS(pedLocal_130, 96.46f, -1291.4402f, 28.2688f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(pedLocal_130, 299.3742f);
								func_378(&(uLocal_182.f_484), 0, pedLocal_130, "MICHAEL", 1, 1);
							
								if (IS_BIT_SET(iLocal_43, 4))
								{
									uLocal_135[0] = pedLocal_130;
									func_287(&uLocal_135, 0);
									func_226(&uLocal_135, false, false, 0);
								}
							}
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("FRANKLIN", -1692214353))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0), false))
							{
								pedLocal_131 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("FRANKLIN", 0));
								PED::SET_PED_CONFIG_FLAG(pedLocal_131, 208, true);
								PED::SET_PED_CONFIG_FLAG(pedLocal_131, 118, false);
								PED::SET_PED_CONFIG_FLAG(pedLocal_131, 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_131, true);
								ENTITY::SET_ENTITY_COORDS(pedLocal_131, 97.116f, -1288.5883f, 28.2688f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(pedLocal_131, 246.1162f);
								func_378(&(uLocal_182.f_484), 1, pedLocal_131, "FRANKLIN", 1, 1);
							}
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("TREVOR", -1686040670))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0), false))
							{
								pedLocal_132 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("TREVOR", 0));
								PED::SET_PED_CONFIG_FLAG(pedLocal_132, 208, true);
								PED::SET_PED_CONFIG_FLAG(pedLocal_132, 118, false);
								PED::SET_PED_CONFIG_FLAG(pedLocal_132, 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_132, true);
								ENTITY::SET_ENTITY_COORDS(pedLocal_132, 99.1774f, -1292.0686f, 28.2688f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(pedLocal_132, 20.8497f);
								func_378(&(uLocal_182.f_484), 2, pedLocal_132, "TREVOR", 1, 1);
							}
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("LESTER", 1302784073))
						{
							if (!ENTITY::IS_ENTITY_DEAD(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0), false))
							{
								pedLocal_133 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("LESTER", 0));
								PED::SET_PED_CONFIG_FLAG(pedLocal_133, 208, true);
								PED::SET_PED_CONFIG_FLAG(pedLocal_133, 118, false);
								PED::SET_PED_CONFIG_FLAG(pedLocal_133, 213, false);
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_133, true);
								ENTITY::SET_ENTITY_COORDS(pedLocal_133, 96.2331f, -1289.744f, 28.2688f, true, false, false, true);
								ENTITY::SET_ENTITY_HEADING(pedLocal_133, 223.2882f);
								func_378(&(uLocal_182.f_484), 3, pedLocal_133, "LESTER", 1, 1);
							}
						}
					
						if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
						{
							if (!IS_BIT_SET(iLocal_43, 2))
							{
								func_225();
								MISC::SET_BIT(&iLocal_43, 2);
							}
						
							if (iLocal_181 == 1)
								STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-1008861746);
						
							ENTITY::REMOVE_MODEL_HIDE(95.19f, -1293.4994f, 28.2672f, 1.5f, 867556671, false);
							func_115(24, 0);
						}
					}
				}
			}
		}
		else if (!IS_BIT_SET(iLocal_43, 3))
		{
			if (func_150(0))
				if (func_385(&iLocal_46, 0, 0, false, 0) == 1)
					MISC::SET_BIT(&iLocal_43, 3);
		}
		else
		{
			func_378(&(uLocal_182.f_484), 0, 0, "MICHAEL", 1, 1);
			func_378(&(uLocal_182.f_484), 1, 0, "FRANKLIN", 1, 1);
			func_378(&(uLocal_182.f_484), 2, 0, "TREVOR", 1, 1);
			func_378(&(uLocal_182.f_484), 3, 0, "LESTER", 1, 1);
			func_225();
			func_115(24, 0);
		}
	}
	else if (func_156(77) || func_2(false))
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("BS_2A_2B_INT"))
			CUTSCENE::REMOVE_CUTSCENE();
	
		if (iLocal_48 != -1)
			func_223(&iLocal_48);
	}

	return;
}

void func_223(var uParam0) // Position - 0x11622 Hash - 0x1C509C5B ^0x1C509C5B
{
	BOOL flag;
	int num;
	int i;

	if (*uParam0 == -1)
		return;

	if (Global_78555 == *uParam0)
		func_224(*uParam0, false);

	if (Global_78554 == *uParam0)
		Global_78554 = -1;

	flag = false;
	num = 0;

	while (!flag && num < Global_78551)
	{
		if (Global_78540[num /*2*/] == *uParam0)
			flag = true;
		else
			num = num + 1;
	}

	if (!flag)
		return;

	for (i = num; i <= Global_78551 - 2; i = i + 1)
	{
		Global_78540[i /*2*/] = Global_78540[i + 1 /*2*/];
		Global_78540[i /*2*/].f_1 = Global_78540[i + 1 /*2*/].f_1;
	}

	Global_78540[Global_78551 - 1 /*2*/] = -1;
	Global_78540[Global_78551 - 1 /*2*/].f_1 = 3;
	Global_78551 = Global_78551 - 1;
	Global_78552 = 1;
	Global_78553 = MISC::GET_FRAME_COUNT();
	*uParam0 = -1;
	return;
}

void func_224(int iParam0, BOOL bParam1) // Position - 0x1170A Hash - 0x3ABFF97A ^0x3ABFF97A
{
	if (iParam0 == -1)
		return;

	if (bParam1)
		if (Global_78554 == iParam0)
			Global_78555 = iParam0;
	else if (Global_78555 == iParam0)
		Global_78555 = -1;

	return;
}

void func_225() // Position - 0x11746 Hash - 0x892AC77E ^0x892AC77E
{
	func_86(1, 4, true);
	func_86(2, 4, true);
	func_387(&uLocal_182);
	func_68(&uLocal_182);
	return;
}

int func_226(var uParam0, BOOL bParam1, BOOL bParam2, int iParam3) // Position - 0x11768 Hash - 0xB3B53C96 ^0x4507A172
{
	Ped ped;
	BOOL flag;
	int num;
	float num2;
	int i;
	int num3;
	var unk;
	Ped unk2;
	var unk3;
	const char* unk4;

	if (!uParam0->f_39)
		if (uParam0->f_7 == 4)
			return 1;

	if (uParam0->[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
	}

	if (!PED::IS_PED_INJURED(uParam0->[uParam0->f_7]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && uParam0->[uParam0->f_7] != PLAYER::PLAYER_PED_ID())
	{
		if (!bParam2)
		{
			if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) && !FILES::GET_DLC_VEHICLE_FLAGS(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			else
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		
			if (PED::IS_PED_RAGDOLL(uParam0->[uParam0->f_7]) && !FILES::GET_DLC_VEHICLE_FLAGS(uParam0->[uParam0->f_7]) && !PED::IS_PED_GETTING_INTO_A_VEHICLE(uParam0->[uParam0->f_7]))
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(uParam0->[uParam0->f_7]);
			else
				TASK::CLEAR_PED_TASKS(uParam0->[uParam0->f_7]);
		}
	
		ped = PLAYER::PLAYER_PED_ID();
		flag = func_100();
	
		if (!uParam0->f_23)
			func_274(ped, false);
	
		func_272(flag, &ped);
		PED::SET_PED_CONFIG_FLAG(ped, 32, true);
		PED::SET_PED_CONFIG_FLAG(ped, 250, true);
		num = func_271(uParam0->f_7);
		func_274(uParam0->[uParam0->f_7], false);
		num2 = ((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(uParam0->[uParam0->f_7])) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(uParam0->[uParam0->f_7])) - 100f)) * 100f;
	
		switch (func_103(PLAYER::PLAYER_PED_ID()))
		{
			case 0:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTime"))
					GRAPHICS::ANIMPOSTFX_STOP("BulletTime");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("BulletTimeOut"))
					GRAPHICS::ANIMPOSTFX_STOP("BulletTimeOut");
				break;
		
			case 1:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocus"))
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocus");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("DrivingFocusOut"))
					GRAPHICS::ANIMPOSTFX_STOP("DrivingFocusOut");
				break;
		
			case 2:
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMIST"))
					GRAPHICS::ANIMPOSTFX_STOP("REDMIST");
			
				if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("REDMISTOut"))
					GRAPHICS::ANIMPOSTFX_STOP("REDMISTOut");
				break;
		}
	
		if (func_102(func_100()))
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
				PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
	
		PLAYER::CHANGE_PLAYER_PED(PLAYER::PLAYER_ID(), uParam0->[uParam0->f_7], bParam2, false);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(HUD_CASH_CHANGE);
	
		if (iParam3 & 1 != 0)
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 210, false);
	
		if (func_270(0) || func_270(3))
		{
			if (Global_23131.f_13)
			{
				for (i = 0; i < 7; i = i + 1)
				{
					if (IS_BIT_SET(Global_91433[i /*5*/].f_1, 2))
					{
						num3 = Global_91433[i /*5*/];
						TEXT_LABEL_ASSIGN_STRING(&unk, "MISS_SWITCH_", 64);
						TEXT_LABEL_APPEND_STRING(&unk, &Global_91469[Global_78828.f_109[num3 /*4*/] /*34*/], 64);
						STATS::STAT_INCREMENT(MISC::GET_HASH_KEY(&unk), 1f);
					}
				}
			}
		}
	
		Global_23131.f_13 = 0;
		uParam0->f_5 = func_269(flag);
	
		if (uParam0->f_5 == 4)
			uParam0->f_5 = 3;
	
		uParam0->[uParam0->f_5] = ped;
		uParam0->[uParam0->f_7] = 0;
		uParam0->f_6 = func_269(num);
		uParam0->f_7 = 4;
		ped2 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		func_268(ped2);
		PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(ped2, false, 0);
	
		if (num2 < 25f && !PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()))
			ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), SYSTEM::ROUND(((25f / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(PLAYER::PLAYER_PED_ID())) - 100f)) + 100f), 0);
	
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(ped))
			{
				ENTITY::SET_ENTITY_VISIBLE(ped, true, false);
				func_268(ped);
				PED::SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(ped, false, 0);
				PED::SET_PED_STEALTH_MOVEMENT(ped, false, 0);
			}
		}
		else if (ENTITY::DOES_ENTITY_EXIST(ped))
		{
			entityScript = ENTITY::GET_ENTITY_SCRIPT(ped, &script);
		
			if (!MISC::IS_STRING_NULL(entityScript))
			{
				if (!MISC::ARE_STRINGS_EQUAL(entityScript, SCRIPT::GET_THIS_SCRIPT_NAME()))
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, false, true);
			
				PED::DELETE_PED(&ped);
			}
		}
	
		Global_97963 = 1;
		func_266(PLAYER::PLAYER_PED_ID());
		func_265();
		func_264(num);
		func_255();
		func_250(num);
		func_233(func_248(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 145, 0));
		PLAYER::RESET_PLAYER_STAMINA(PLAYER::PLAYER_ID());
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_CAN_BE_DRAGGED_OUT(PLAYER::PLAYER_PED_ID(), true);
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), func_404(67));
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), func_404(68));
	
		func_230(num, &ped2);
	
		if (func_403(0) || func_403(3) || func_403(2) || func_403(4))
		{
			PED::SET_PED_CONFIG_FLAG(ped2, 32, false);
			PED::SET_PED_CONFIG_FLAG(ped2, 250, false);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(ped2, 32, true);
			PED::SET_PED_CONFIG_FLAG(ped2, 250, true);
		}
	
		if (!func_229())
			func_227();
	
		Global_97600 = 0;
		return 1;
	}
	else
	{
		PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
		PED::IS_PED_INJURED(uParam0->[uParam0->f_7]);
		PLAYER::PLAYER_PED_ID() == uParam0->[uParam0->f_7];
	}

	return 0;
}

void func_227() // Position - 0x11C57 Hash - 0xC9FF5B63 ^0xE5452B6D
{
	if (Global_97993)
	{
		func_101();
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER(func_228(Global_113648.f_2365.f_539.f_4321));
	}
	else
	{
		GRAPHICS::SET_NEXT_PLAYER_TCMODIFIER("");
	}

	return;
}

char* func_228(int iParam0) // Position - 0x11C88 Hash - 0x57C7E2A2 ^0x57C7E2A2
{
	iParam0 = iParam0;
	return "";
}

BOOL func_229() // Position - 0x11C96 Hash - 0x21D64237 ^0x21D64237
{
	return Global_23129;
}

void func_230(int iParam0, var uParam1) // Position - 0x11CA1 Hash - 0xF8E4A369 ^0xF8E4A369
{
	switch (iParam0)
	{
		case 0:
			func_231(4, *uParam1);
			func_231(7, *uParam1);
			func_231(8, *uParam1);
			func_231(11, *uParam1);
			break;
	
		case 1:
			if (Global_113648.f_9087.f_330[2 /*6*/])
				func_231(4, *uParam1);
		
			func_231(7, *uParam1);
			func_231(8, *uParam1);
			func_231(11, *uParam1);
		
			if (Global_113648.f_9087.f_99.f_58[126])
				func_231(12, *uParam1);
			break;
	
		case 2:
			if (Global_113648.f_9087.f_330[20 /*6*/])
				func_231(4, *uParam1);
		
			func_231(7, *uParam1);
			func_231(8, *uParam1);
			func_231(11, *uParam1);
			break;
	}

	return;
}

void func_231(int iParam0, Ped pedParam1) // Position - 0x11D6D Hash - 0x48BEDF86 ^0xD93CA775
{
	int i;
	Ped ped;
	BOOL flag;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam1))
		return;

	if (func_232(iParam0, pedParam1))
		return;

	if (Global_41953[iParam0 /*31*/].f_24 < 5)
	{
		Global_41953[iParam0 /*31*/].f_25[Global_41953[iParam0 /*31*/].f_24] = pedParam1;
		Global_41953[iParam0 /*31*/].f_24 = Global_41953[iParam0 /*31*/].f_24 + 1;
	}
	else
	{
		flag = false;
	
		for (i = 0; i < 5; i = i + 1)
		{
			ped = Global_41953[iParam0 /*31*/].f_25[i];
		
			if (!ENTITY::DOES_ENTITY_EXIST(ped) || PED::IS_PED_INJURED(ped))
			{
				Global_41953[iParam0 /*31*/].f_25[i] = pedParam1;
				flag = true;
				i = 6;
			}
		}
	
		!flag;
	}

	return;
}

BOOL func_232(int iParam0, Entity eParam1) // Position - 0x11E1F Hash - 0xFED9DEFF ^0xB17AF2BA
{
	int i;

	for (i = 0; i < Global_41953[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (eParam1 == Global_41953[iParam0 /*31*/].f_25[i])
			return true;
	}

	return false;
}

void func_233(int iParam0) // Position - 0x11E58 Hash - 0x3693C88D ^0x106F4F77
{
	if (iParam0 == 10)
		return;

	switch (iParam0)
	{
		case 0:
			MISC::SET_BIT(&Global_38617[38 / 32], 38 % 32);
			func_234(38, 0);
			MISC::SET_BIT(&Global_38617[41 / 32], 41 % 32);
			func_234(41, 0);
			MISC::SET_BIT(&Global_38617[43 / 32], 43 % 32);
			func_234(43, 0);
			MISC::SET_BIT(&Global_38617[42 / 32], 42 % 32);
			func_234(42, 0);
			MISC::SET_BIT(&Global_38617[44 / 32], 44 % 32);
			func_234(44, 0);
			break;
	
		case 1:
			MISC::SET_BIT(&Global_38617[51 / 32], 51 % 32);
			func_234(51, 0);
			break;
	
		case 2:
			MISC::SET_BIT(&Global_38617[51 / 32], 51 % 32);
			func_234(51, 0);
			break;
	
		case 3:
			MISC::SET_BIT(&Global_38617[53 / 32], 53 % 32);
			func_234(53, 0);
			break;
	
		case 4:
			MISC::SET_BIT(&Global_38617[81 / 32], 81 % 32);
			func_234(81, 0);
			MISC::SET_BIT(&Global_38617[82 / 32], 82 % 32);
			func_234(82, 0);
			break;
	
		case 5:
			MISC::SET_BIT(&Global_38617[47 / 32], 47 % 32);
			func_234(47, 0);
			MISC::SET_BIT(&Global_38617[50 / 32], 50 % 32);
			func_234(50, 0);
			break;
	
		case 6:
			MISC::SET_BIT(&Global_38617[50 / 32], 50 % 32);
			func_234(50, 0);
			break;
	}

	return;
}

void func_234(int iParam0, int iParam1) // Position - 0x11FE8 Hash - 0x4FE65956 ^0x4FE65956
{
	int num;

	if (iParam0 != 226)
	{
		if (Global_78558)
			num = Global_42791[iParam0];
		else
			num = Global_113648.f_7263[iParam0];
	
		if (num != iParam1 || IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32))
		{
			if (iParam1 == 4 || iParam1 == 3 || iParam1 == 5 || iParam1 == 6 || iParam1 == 2)
			{
				MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
				Global_39089[iParam0] = iParam1;
			}
			else if (Global_78558)
			{
				Global_42791[iParam0] = iParam1;
			}
			else
			{
				Global_113648.f_7263[iParam0] = iParam1;
			}
		
			MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
			func_236(iParam0);
		
			if (IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32))
				func_235(iParam0);
		}
	}

	return;
}

void func_235(int iParam0) // Position - 0x120D5 Hash - 0xF9254656 ^0xECCFDFAF
{
	if (!IS_BIT_SET(Global_39560.f_228[iParam0 / 32], iParam0 % 23))
	{
		MISC::SET_BIT(&Global_39560.f_228[iParam0 / 32], iParam0 % 23);
		Global_39560[Global_39560.f_227] = iParam0;
		Global_39560.f_227 = Global_39560.f_227 + 1;
	}

	return;
}

void func_236(int iParam0) // Position - 0x12120 Hash - 0xE7EE45FB ^0x26036F0B
{
	Vector3 vector;
	BOOL unk;
	BOOL unk2;
	int unk3;
	float unk4;
	Interior unk5;
	Interior unk6;
	BOOL flag;
	Interior flag2;
	Interior num;

	if (!func_245())
		return;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		return;

	vector = { func_244(iParam0) };

	if (IS_BIT_SET(vector.f_4, 2))
		func_241(iParam0, &vector);

	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
			return;

	flag = false;
	flag2 = false;
	distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);

	if (IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0] == 2 && distanceBetweenCoords > 210f)
	{
		MISC::CLEAR_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
		Global_38635[iParam0] = 0;
	}

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1832807115) == 0)
	{
		if (IS_BIT_SET(Global_38862[iParam0 / 32], iParam0 % 32))
		{
			if (distanceBetweenCoords < 25f)
			{
				if (Global_100733.f_385 == 0)
					if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						Global_100733.f_385 = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
			
				interior = Global_100733.f_385;
				interiorAtCoords = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
			
				if (interior == interiorAtCoords && interior != 0)
				{
					MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
					Global_39089[iParam0] = 3;
					MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
				}
			}
		
			MISC::CLEAR_BIT(&Global_38862[iParam0 / 32], iParam0 % 32);
		}
	}

	if (IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32))
	{
		num = Global_39089[iParam0];
	}
	else if (IS_BIT_SET(vector.f_4, 0))
	{
		if (Global_113648.f_9087)
			num = func_238(iParam0);
		else
			num = 0;
	
		if (func_403(14))
			num = 0;
	}
	else if (IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(92439941) == 0)
	{
		if (func_237())
			num = 0;
		else
			num = 1;
	}
	else
	{
		num = Global_113648.f_7263[iParam0];
	}

	if (Global_39316[iParam0] != num)
		flag = true;

	if (IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32))
		if (!IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) || Global_38635[iParam0] == 0 && Global_39089[iParam0] != 2)
			flag = true;

	if (flag)
	{
		if (!Global_38616)
		{
		}
		else
		{
			if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))
				OBJECT::ADD_DOOR_TO_SYSTEM(vector.f_5, vector.f_3, vector, false, false, false);
		
			switch (num)
			{
				case 1:
					if (IS_BIT_SET(vector.f_4, 3))
					{
						flag3 = true;
					}
					else if (distanceBetweenCoords > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(vector.f_5)) <= 0.015f)
					{
						interiorFromEntity = INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
						interiorAtCoords2 = INTERIOR::GET_INTERIOR_AT_COORDS(vector);
					
						if (interiorFromEntity != interiorAtCoords2 || interiorFromEntity == 0)
							flag3 = true;
					}
				
					if (flag3)
					{
						if (vector.f_6 != 0f)
							OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
					
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
						flag2 = true;
					}
					break;
			
				case 4:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 2:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 0:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, true);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 3:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, 0, false, true);
					flag2 = true;
					break;
			
				case 5:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				case 6:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			
				default:
					if (vector.f_6 != 0f)
						OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
				
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
					flag2 = true;
					break;
			}
		}
	
		if (flag2)
		{
			MISC::CLEAR_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
			Global_39316[iParam0] = num;
		}
	}

	if (IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0] != 2)
	{
		MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
		func_235(iParam0);
	
		if (Global_38635[iParam0] < 2)
			Global_38635[iParam0] = Global_38635[iParam0] + 1;
	}

	return;
}

BOOL func_237() // Position - 0x125E5 Hash - 0x70B4A54B ^0xF137E5FF
{
	if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
		return false;

	switch (func_100())
	{
		case false:
			if (Global_113648.f_9087.f_99.f_58[65])
				return true;
			break;
	
		case true:
			if (Global_113648.f_9087.f_99.f_58[66])
				return true;
			break;
	
		case 2:
			if (Global_113648.f_9087.f_99.f_58[65])
				return true;
			break;
	}

	return false;
}

int func_238(int iParam0) // Position - 0x12664 Hash - 0x46546439 ^0x46546439
{
	BOOL flag;

	flag = func_100();

	if (func_239(iParam0))
		return 1;

	if (iParam0 == 49)
	{
		if (flag == true)
			if (IS_BIT_SET(Global_113648.f_7231[5], 0) || IS_BIT_SET(Global_113648.f_7231[6], 0))
				return 0;
	
		if (func_102(flag))
			if (IS_BIT_SET(Global_95708[5], flag))
				return 0;
	}

	switch (iParam0)
	{
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
			if (flag == false)
				if (IS_BIT_SET(Global_113648.f_7231[0], 0))
					return 0;
		
			if (func_102(flag))
				if (IS_BIT_SET(Global_95708[0], flag))
					if (iParam0 != 40)
						return 0;
					else
						return 1;
			break;
	
		case 47:
		case 48:
		case 49:
			if (flag == true)
				if (IS_BIT_SET(Global_113648.f_7231[5], 0))
					return 0;
		
			if (func_102(flag))
				if (IS_BIT_SET(Global_95708[5], flag))
					return 0;
			break;
	
		case 50:
			if (flag == true)
				if (IS_BIT_SET(Global_113648.f_7231[6], 0))
					return 0;
		
			if (func_102(flag))
				if (IS_BIT_SET(Global_95708[6], flag))
					return 0;
			break;
	
		case 51:
		case 52:
			if (flag == 2)
			{
				if (IS_BIT_SET(Global_113648.f_7231[2], 0))
					return 0;
			
				if (func_102(flag))
					if (IS_BIT_SET(Global_95708[2], flag))
						return 0;
			}
			else if (flag == false)
			{
				if (IS_BIT_SET(Global_113648.f_7231[1], 0))
					return 0;
			
				if (func_102(flag))
					if (IS_BIT_SET(Global_95708[1], flag))
						return 0;
			}
			break;
	
		case 53:
			if (flag == 2)
				if (IS_BIT_SET(Global_113648.f_7231[3], 0))
					return 0;
		
			if (func_102(flag))
				if (IS_BIT_SET(Global_95708[3], flag))
					return 0;
			break;
	
		default:
			return 0;
	}

	return 1;
}

BOOL func_239(int iParam0) // Position - 0x1288C Hash - 0x5A075A23 ^0x27F6B86F
{
	Hash entityModel;

	if (iParam0 == 40 || iParam0 == 49 || iParam0 == 52)
	{
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				entityModel = ENTITY::GET_ENTITY_MODEL(func_240(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
			
				switch (entityModel)
				{
					case 516990260:
					case -845961253:
						return true;
				}
			}
		}
	}

	return false;
}

Vehicle func_240(Vehicle veParam0) // Position - 0x128F8 Hash - 0xC9D82232 ^0xC9D82232
{
	return veParam0;
}

void func_241(int iParam0, var uParam1) // Position - 0x12902 Hash - 0x45AE8BFD ^0xA0700457
{
	int num;
	int num2;

	if (!IS_BIT_SET(uParam1->f_4, 2))
		return;

	num = func_180();
	num2 = func_243(num);

	switch (iParam0)
	{
		case 133:
		case 134:
		case 201:
		case 202:
			if (func_242(iParam0))
			{
				if (num2 < 19)
				{
					if (num2 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 19)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 199:
		case 200:
		case 203:
		case 204:
			if (func_242(iParam0))
			{
				if (num2 < 18)
				{
					if (num2 >= 7)
					{
						Global_113648.f_7263[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 18)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else if (num2 < 7)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 12f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 141:
		case 142:
			if (func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1139079984) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(478649282) == 0 && !Global_113648.f_9087.f_99.f_58[4])
				{
					if (num2 < 21)
					{
						if (num2 >= 7)
						{
							Global_113648.f_7263[iParam0] = 0;
							OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
						}
					}
					else
					{
						return;
					}
				}
				else if (!Global_113648.f_9087.f_99.f_58[4])
				{
					Global_113648.f_7263[iParam0] = 0;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else if (Global_113648.f_9087.f_99.f_58[4])
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1139079984) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(478649282) == 0)
			{
				if (num2 >= 21)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
					}
				}
				else if (num2 < 7)
				{
					if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 18f)
					{
						Global_113648.f_7263[iParam0] = 1;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
					}
				}
			}
			break;
	
		case 145:
		case 146:
		case 143:
		case 144:
			if (func_242(iParam0))
			{
				if (num2 < 20)
				{
					if (num2 >= 9)
					{
						Global_113648.f_7263[iParam0] = 0;
						OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
					}
				}
				else
				{
					return;
				}
			}
			else if (num2 >= 20)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else if (num2 < 9)
			{
				if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >= 40f)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 147:
		case 148:
			if (!func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 152:
		case 153:
		case 154:
		case 155:
		case 156:
		case 157:
			if (!func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1802680602) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1802680602) > 0)
			{
				Global_113648.f_7263[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 158:
		case 159:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_242(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 160:
		case 161:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1723330028) == 0)
			{
				if (!func_242(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 70:
		case 71:
		case 72:
			if (!func_242(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[26 /*34*/].f_6) == 0)
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			else
			{
				return;
			}
			break;
	
		case 101:
		case 102:
		case 103:
		case 104:
			if (!func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[43 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 190:
		case 191:
			if (!func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 193:
			if (!func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[93 /*34*/].f_6) > 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 198:
			if (!func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 80:
			if (!func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[8 /*34*/].f_6) == 0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[10 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 205:
		case 206:
			if (!func_242(iParam0))
			{
				if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[47 /*34*/].f_6) == 0)
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			else
			{
				return;
			}
			break;
	
		case 207:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6) == 0)
			{
				if (!func_242(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 208:
		case 209:
		case 211:
		case 210:
		case 212:
		case 213:
		case 214:
		case 215:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[48 /*34*/].f_6) == 0)
			{
				if (!func_242(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 99:
		case 100:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[39 /*34*/].f_6) == 0)
			{
				if (!func_242(iParam0))
				{
					Global_113648.f_7263[iParam0] = 1;
					OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
				}
			}
			break;
	
		case 216:
			if (!func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 217:
		case 218:
			if (!func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 1;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	
		case 219:
		case 220:
		case 221:
		case 222:
			if (func_242(iParam0))
			{
				Global_113648.f_7263[iParam0] = 0;
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
			}
			break;
	}

	return;
}

BOOL func_242(int iParam0) // Position - 0x1329A Hash - 0xDEE87AD1 ^0x5F1ACD39
{
	var unk;
	int unk2;

	unk = { func_244(iParam0) };
	doorState = OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
	return doorState == 1 || doorState == 4 || doorState == 2;
}

int func_243(int iParam0) // Position - 0x132CE Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

struct<7> func_244(int iParam0) // Position - 0x132E1 Hash - 0xA6A81C3E ^0x591CC9FB
{
	var unk;

	switch (iParam0)
	{
		case 0:
			unk.f_3 = -1844444717;
			unk = { 133f, -1711f, 29f };
			unk.f_5 = 1804701345;
			break;
	
		case 1:
			unk.f_3 = -1844444717;
			unk = { -1287.8568f, -1115.7416f, 7.1401f };
			unk.f_5 = 1403601067;
			break;
	
		case 2:
			unk.f_3 = -1844444717;
			unk = { 1932.9518f, 3725.1536f, 32.9944f };
			unk.f_5 = -2031139496;
			break;
	
		case 3:
			unk.f_3 = -1844444717;
			unk = { 1207.8732f, -470.063f, 66.358f };
			unk.f_5 = 1796834809;
			break;
	
		case 4:
			unk.f_3 = -1844444717;
			unk = { -29.8692f, -148.1571f, 57.2265f };
			unk.f_5 = 96153298;
			break;
	
		case 5:
			unk.f_3 = -1844444717;
			unk = { -280.7851f, 6232.7817f, 31.8455f };
			unk.f_5 = -281080954;
			break;
	
		case 6:
			unk.f_3 = -1663512092;
			unk = { -824f, -187f, 38f };
			unk = { -823.2001f, -187.0831f, 37.819f };
			unk.f_5 = 183249434;
			break;
	
		case 7:
			unk.f_3 = 145369505;
			unk = { -823f, -188f, 38f };
			unk = { -822.4442f, -188.3924f, 37.819f };
			unk.f_5 = 758345384;
			break;
	
		case 8:
			unk.f_3 = 868499217;
			unk = { 82.3186f, -1392.7518f, 29.5261f };
			unk.f_5 = -1069262641;
			break;
	
		case 9:
			unk.f_3 = -1148826190;
			unk = { 82.3186f, -1390.4758f, 29.5261f };
			unk.f_5 = 1968521986;
			break;
	
		case 10:
			unk.f_3 = 868499217;
			unk = { 1686.9832f, 4821.7407f, 42.2131f };
			unk.f_5 = -2143706301;
			break;
	
		case 11:
			unk.f_3 = -1148826190;
			unk = { 1687.2817f, 4819.4844f, 42.2131f };
			unk.f_5 = -1403421822;
			break;
	
		case 12:
			unk.f_3 = 868499217;
			unk = { 418.637f, -806.457f, 29.6396f };
			unk.f_5 = -1950137670;
			break;
	
		case 13:
			unk.f_3 = -1148826190;
			unk = { 418.637f, -808.733f, 29.6396f };
			unk.f_5 = 1226259807;
			break;
	
		case 14:
			unk.f_3 = 868499217;
			unk = { -1096.6613f, 2705.4458f, 19.2578f };
			unk.f_5 = 1090833557;
			break;
	
		case 15:
			unk.f_3 = -1148826190;
			unk = { -1094.9652f, 2706.9636f, 19.2578f };
			unk.f_5 = 897332612;
			break;
	
		case 16:
			unk.f_3 = 868499217;
			unk = { 1196.825f, 2703.221f, 38.3726f };
			unk.f_5 = 1095946640;
			break;
	
		case 17:
			unk.f_3 = -1148826190;
			unk = { 1199.101f, 2703.221f, 38.3726f };
			unk.f_5 = 801975945;
			break;
	
		case 18:
			unk.f_3 = 868499217;
			unk = { -818.7642f, -1079.5444f, 11.4781f };
			unk.f_5 = -167996547;
			break;
	
		case 19:
			unk.f_3 = -1148826190;
			unk = { -816.7932f, -1078.4065f, 11.4781f };
			unk.f_5 = -1935818563;
			break;
	
		case 20:
			unk.f_3 = 868499217;
			unk = { -0.0564f, 6517.461f, 32.0278f };
			unk.f_5 = 1891185217;
			break;
	
		case 21:
			unk.f_3 = -1148826190;
			unk = { -1.7253f, 6515.9136f, 32.0278f };
			unk.f_5 = 1236591681;
			break;
	
		case 22:
			unk.f_3 = 1780022985;
			unk = { -1201.4349f, -776.8566f, 17.9918f };
			unk.f_5 = 1980808685;
			break;
	
		case 23:
			unk.f_3 = 1780022985;
			unk = { 617.2458f, 2751.0222f, 42.7578f };
			unk.f_5 = 1352749757;
			break;
	
		case 24:
			unk.f_3 = 1780022985;
			unk = { 127.8201f, -211.8274f, 55.2275f };
			unk.f_5 = -566554453;
			break;
	
		case 25:
			unk.f_3 = 1780022985;
			unk = { -3167.75f, 1055.5358f, 21.5329f };
			unk.f_5 = 1284749450;
			break;
	
		case 26:
			unk.f_3 = -1922281023;
			unk = { -716.6754f, -155.42f, 37.6749f };
			unk.f_5 = 261851994;
			break;
	
		case 27:
			unk.f_3 = -1922281023;
			unk = { -715.6154f, -157.2561f, 37.6749f };
			unk.f_5 = 217646625;
			break;
	
		case 28:
			unk.f_3 = -1922281023;
			unk = { -157.0924f, -306.4413f, 39.994f };
			unk.f_5 = 1801139578;
			break;
	
		case 29:
			unk.f_3 = -1922281023;
			unk = { -156.4022f, -304.4366f, 39.994f };
			unk.f_5 = -2123275866;
			break;
	
		case 30:
			unk.f_3 = -1922281023;
			unk = { -1454.7819f, -231.7927f, 50.0565f };
			unk.f_5 = 1312689981;
			break;
	
		case 31:
			unk.f_3 = -1922281023;
			unk = { -1456.2007f, -233.3682f, 50.0565f };
			unk.f_5 = -595055661;
			break;
	
		case 32:
			unk.f_3 = 543652229;
			unk = { 321.81f, 178.36f, 103.68f };
			unk.f_5 = -265260897;
			break;
	
		case 33:
			unk.f_3 = -1212951353;
			unk = { 1859.89f, 3749.79f, 33.18f };
			unk.f_5 = -1284867488;
			break;
	
		case 34:
			unk.f_3 = -1212951353;
			unk = { -289.1752f, 6199.1123f, 31.637f };
			unk.f_5 = 302307081;
			break;
	
		case 35:
			unk.f_3 = 543652229;
			unk = { -1155.4541f, -1424.0079f, 5.0461f };
			unk.f_5 = -681886015;
			break;
	
		case 36:
			unk.f_3 = 543652229;
			unk = { 1321.2856f, -1650.5967f, 52.3663f };
			unk.f_5 = -2086556500;
			break;
	
		case 37:
			unk.f_3 = 543652229;
			unk = { -3167.7888f, 1074.7668f, 20.9209f };
			unk.f_5 = -1496386696;
			break;
	
		case 38:
			unk.f_3 = 159994461;
			unk = { -817f, 179f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2097039789;
			break;
	
		case 39:
			unk.f_3 = -1686014385;
			unk = { -816f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -2127416656;
			break;
	
		case 40:
			unk.f_3 = 30769481;
			unk = { -815f, 186f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1986583853;
			unk.f_6 = 6.5f;
			break;
	
		case 41:
			unk.f_3 = -1454760130;
			unk = { -797f, 177f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 776026812;
			break;
	
		case 42:
			unk.f_3 = 1245831483;
			unk = { -795f, 178f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 698422331;
			break;
	
		case 43:
			unk.f_3 = -1454760130;
			unk = { -793f, 181f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 535076355;
			break;
	
		case 44:
			unk.f_3 = 1245831483;
			unk = { -794f, 183f, 73f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 474675599;
			break;
	
		case 45:
			unk.f_3 = -1568354151;
			unk = { -849f, 179f, 70f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1978427516;
			break;
	
		case 46:
			unk.f_3 = 1019527301;
			unk = { -802.7333f, 167.5041f, 77.5824f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1700375831;
			break;
	
		case 47:
			unk.f_3 = 520341586;
			unk = { -14f, -1441f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 613961892;
			break;
	
		case 48:
			unk.f_3 = 1413743677;
			unk = { -15f, -1427f, 31f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -272570634;
			break;
	
		case 49:
			unk.f_3 = 703855057;
			unk = { -25.28f, -1431.06f, 30.84f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1040675994;
			break;
	
		case 50:
			unk.f_3 = 308207762;
			unk = { 7.52f, 539.53f, 176.18f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1201219326;
			break;
	
		case 51:
			unk.f_3 = 132154435;
			unk = { 1973f, 3815f, 34f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = 1736361794;
			break;
	
		case 52:
			unk.f_3 = 67910261;
			unk = { 1972.7874f, 3824.5537f, 32.5831f };
			unk.f_5 = 1113956670;
			unk.f_6 = 12f;
			break;
	
		case 53:
			unk.f_3 = -607040053;
			unk = { -1150f, -1521f, 11f };
			MISC::SET_BIT(&(unk.f_4), 0);
			unk.f_5 = -1361617046;
			break;
	}

	switch (iParam0)
	{
		case 54:
			unk.f_3 = -550347177;
			unk = { -1145.9f, -1991.14f, 14.18f };
			unk.f_5 = -1871080926;
			unk.f_6 = 25f;
			break;
	
		case 55:
			unk.f_3 = 270330101;
			unk = { 723.12f, -1088.83f, 23.28f };
			unk.f_5 = 1168079979;
			unk.f_6 = 25f;
			break;
	
		case 56:
			unk.f_3 = -550347177;
			unk = { -356.09f, -134.77f, 40.01f };
			unk.f_5 = 1206354175;
			unk.f_6 = 25f;
			break;
	
		case 57:
			unk.f_3 = -822900180;
			unk = { 108.8502f, 6617.8765f, 32.673f };
			unk.f_5 = -1038180727;
			unk.f_6 = 25f;
			break;
	
		case 58:
			unk.f_3 = -822900180;
			unk = { 114.3206f, 6623.226f, 32.7161f };
			unk.f_5 = 1200466273;
			unk.f_6 = 25f;
			break;
	
		case 59:
			unk.f_3 = -822900180;
			unk = { 1182.3054f, 2645.2422f, 38.807f };
			unk.f_5 = 1391004277;
			unk.f_6 = 25f;
			break;
	
		case 60:
			unk.f_3 = -822900180;
			unk = { 1174.6542f, 2645.2422f, 38.6826f };
			unk.f_5 = -459199009;
			unk.f_6 = 25f;
			break;
	
		case 225:
			unk.f_3 = -427498890;
			unk = { -205.7007f, -1310.6917f, 30.2957f };
			unk.f_5 = -288764223;
			unk.f_6 = 25f;
			break;
	
		case 61:
			unk.f_3 = 486670049;
			unk = { -107.5401f, -9.0258f, 70.6696f };
			unk.f_5 = -252283844;
			break;
	
		case 62:
			unk.f_3 = 245182344;
			unk = { 717f, -975f, 25f };
			unk.f_5 = -826072862;
			break;
	
		case 63:
			unk.f_3 = -681066206;
			unk = { 719f, -975f, 25f };
			unk.f_5 = 763780711;
			break;
	
		case 64:
			unk.f_3 = 551491569;
			unk = { 709.9813f, -963.5311f, 30.5453f };
			unk.f_5 = -874851305;
			break;
	
		case 65:
			unk.f_3 = 933053701;
			unk = { 709.9894f, -960.6675f, 30.5453f };
			unk.f_5 = -1480820165;
			break;
	
		case 66:
			unk.f_3 = 426403179;
			unk = { 707.8046f, -962.4564f, 30.5453f };
			unk.f_5 = 949391213;
			break;
	
		case 67:
			unk.f_3 = -1212951353;
			unk = { 1393f, 3599f, 35f };
			unk.f_5 = 212192855;
			break;
	
		case 68:
			unk.f_3 = -1212951353;
			unk = { 1395f, 3600f, 35f };
			unk.f_5 = -126474752;
			break;
	
		case 69:
			unk.f_3 = 1173348778;
			unk = { 1387f, 3614f, 39f };
			unk.f_5 = 1765671336;
			break;
	
		case 70:
			unk.f_3 = -1428622127;
			unk = { 1083.5471f, -1975.4354f, 31.6222f };
			unk.f_5 = 792295685;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 71:
			unk.f_3 = -1428622127;
			unk = { 1065.237f, -2006.0791f, 32.2329f };
			unk.f_5 = 563273144;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 72:
			unk.f_3 = -1428622127;
			unk = { 1085.3069f, -2018.5613f, 41.6289f };
			unk.f_5 = -726993043;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 73:
			unk.f_3 = -353187150;
			unk = { -111f, 6464f, 32f };
			unk.f_5 = 178228075;
			break;
	
		case 74:
			unk.f_3 = -1666470363;
			unk = { -110f, 6462f, 32f };
			unk.f_5 = 1852297978;
			break;
	
		case 75:
			unk.f_3 = 1145337974;
			unk = { 1274f, -1721f, 55f };
			unk.f_5 = -565026078;
			break;
	
		case 76:
			unk.f_3 = -1647153464;
			unk = { 1271.89f, -1707.57f, 53.79f };
			unk.f_5 = 1646172266;
			break;
	
		case 77:
			unk.f_3 = -1647153464;
			unk = { 1270.77f, -1708.1f, 53.75f };
			unk.f_5 = 204467342;
			break;
	
		case 78:
			unk.f_3 = -2069558801;
			unk = { -127.5f, -1456.18f, 37.94f };
			unk.f_5 = 2047070410;
			break;
	
		case 79:
			unk.f_3 = -190780785;
			unk = { 483.56f, -1316.08f, 32.18f };
			unk.f_5 = 1417775309;
			break;
	
		case 80:
			unk.f_3 = -664582244;
			unk = { 483f, -1312f, 29f };
			unk.f_5 = -106474626;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 81:
			unk.f_3 = -1116041313;
			unk = { 128f, -1299f, 29f };
			unk.f_5 = 1840510598;
			break;
	
		case 82:
			unk.f_3 = 668467214;
			unk = { 96f, -1285f, 29f };
			unk.f_5 = 1382825971;
			break;
	
		case 83:
			unk.f_3 = -1306074314;
			unk = { 549f, -1773f, 34f };
			unk.f_5 = 232536303;
			break;
	
		case 84:
			unk.f_3 = -1375589668;
			unk = { 974f, -1839f, 36f };
			unk.f_5 = 1267246609;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 85:
			unk.f_3 = -1375589668;
			unk = { 977f, -105f, 75f };
			unk.f_5 = -1900237971;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 86:
			unk.f_3 = -1032171637;
			unk = { 1391f, 1163f, 114f };
			unk.f_5 = 2077901353;
			break;
	
		case 87:
			unk.f_3 = -52575179;
			unk = { 1391f, 1161f, 114f };
			unk.f_5 = -2102079126;
			break;
	
		case 88:
			unk.f_3 = 338220432;
			unk = { 1396f, 1143f, 115f };
			unk.f_5 = -1905793212;
			break;
	
		case 89:
			unk.f_3 = 1075555701;
			unk = { 1396f, 1141f, 115f };
			unk.f_5 = -1797032505;
			break;
	
		case 90:
			unk.f_3 = -1032171637;
			unk = { 1409f, 1146f, 114f };
			unk.f_5 = -62235167;
			break;
	
		case 91:
			unk.f_3 = -52575179;
			unk = { 1409f, 1148f, 114f };
			unk.f_5 = -1727188163;
			break;
	
		case 92:
			unk.f_3 = -1032171637;
			unk = { 1408f, 1159f, 114f };
			unk.f_5 = -562748873;
			break;
	
		case 93:
			unk.f_3 = -52575179;
			unk = { 1408f, 1161f, 114f };
			unk.f_5 = 1976429759;
			break;
	
		case 94:
			unk.f_3 = -1652821467;
			unk = { -1067f, -1666f, 5f };
			unk.f_5 = 1341041543;
			break;
	
		case 95:
			unk.f_3 = 1013329911;
			unk = { -1065f, -1669f, 5f };
			unk.f_5 = -1631467220;
			break;
	
		case 96:
			unk.f_3 = -502195954;
			unk = { -1104.66f, -1638.48f, 4.68f };
			unk.f_5 = -1788473129;
			break;
	
		case 97:
			unk.f_3 = -2051651622;
			unk = { -31.72f, -1101.85f, 26.57f };
			unk.f_5 = -1831288286;
			break;
	
		case 98:
			unk.f_3 = 464151082;
			unk = { 134.4f, -2204.1f, 7.52f };
			unk.f_5 = 963876966;
			break;
	
		case 99:
			unk.f_3 = -1081024910;
			unk = { 3628f, 3747f, 28f };
			unk.f_5 = 1773088812;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 100:
			unk.f_3 = -1081024910;
			unk = { 3621f, 3752f, 28f };
			unk.f_5 = -1332101528;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 101:
			unk.f_3 = 1099436502;
			unk = { -608.73f, -1610.32f, 27.16f };
			unk.f_5 = -1811763714;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 102:
			unk.f_3 = -1627599682;
			unk = { -611.32f, -1610.09f, 27.16f };
			unk.f_5 = 1608500665;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 103:
			unk.f_3 = 1099436502;
			unk = { -592.94f, -1631.58f, 27.16f };
			unk.f_5 = -1456048340;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 104:
			unk.f_3 = -1627599682;
			unk = { -592.71f, -1628.99f, 27.16f };
			unk.f_5 = 943854909;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 105:
			unk.f_3 = 1173348778;
			unk = { 1991f, 3053f, 47f };
			unk.f_5 = -89065356;
			break;
	
		case 106:
			unk.f_3 = 479144380;
			unk = { 1988.3529f, 3054.411f, 47.3204f };
			unk.f_5 = -925491840;
			break;
	
		case 107:
			unk.f_3 = -2045308299;
			unk = { -700.17f, 47.31f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 108:
			unk.f_3 = -42303174;
			unk = { -697.94f, 48.35f, 44.3f };
			unk.f_5 = 1999872275;
			break;
	
		case 109:
			unk.f_3 = -1230442770;
			unk = { 241.3574f, 361.0488f, 105.8963f };
			unk.f_5 = 1538555582;
			break;
	
		case 110:
			unk.f_3 = 913904359;
			unk = { -689.11f, 506.97f, 110.64f };
			unk.f_5 = -961994186;
			break;
	
		case 111:
			unk.f_3 = -495720969;
			unk = { -1055.96f, -236.43f, 44.17f };
			unk.f_5 = -1772472848;
			break;
	
		case 112:
			unk.f_3 = 668467214;
			unk = { 29f, 3661f, 41f };
			unk.f_5 = -46374650;
			break;
	
		case 113:
			unk.f_3 = 1342464176;
			unk = { 32f, 3667f, 41f };
			unk.f_5 = -358302761;
			break;
	
		case 114:
			unk.f_3 = 1436076651;
			unk = { 87f, -1959f, 21f };
			unk.f_5 = -1237936041;
			break;
	
		case 115:
			unk.f_3 = 1413743677;
			unk = { 0f, -1823f, 30f };
			unk.f_5 = 1487374207;
			break;
	
		case 116:
			unk.f_3 = -815851463;
			unk = { 23.34f, -1897.6f, 23.05f };
			unk.f_5 = -199126299;
			break;
	
		case 117:
			unk.f_3 = -684382235;
			unk = { 524.2f, 3081.14f, 41.16f };
			unk.f_5 = -897071863;
			break;
	
		case 118:
			unk.f_3 = 1378348636;
			unk = { -1910.58f, -576.01f, 19.25f };
			unk.f_5 = -864465775;
			break;
	
		case 119:
			unk.f_3 = -2076287065;
			unk = { -720.39f, 256.86f, 80.29f };
			unk.f_5 = -208439480;
			break;
	
		case 120:
			unk.f_3 = -374527357;
			unk = { -718.42f, 257.79f, 80.29f };
			unk.f_5 = -1001088805;
			break;
	
		case 121:
			unk.f_3 = -1517873911;
			unk = { 106.38f, -742.7f, 46.18f };
			unk.f_5 = 756894459;
			break;
	
		case 122:
			unk.f_3 = -90456267;
			unk = { 105.76f, -746.65f, 46.18f };
			unk.f_5 = 476981677;
			break;
	
		case 123:
			unk.f_3 = -1207991715;
			unk = { -2343.53f, 3265.37f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 124:
			unk.f_3 = -1207991715;
			unk = { -2342.23f, 3267.62f, 32.96f };
			unk.f_5 = 2081647379;
			break;
	
		case 125:
			unk.f_3 = -566611162;
			unk = { -1041.9326f, -2748.1675f, 22.0308f };
			unk.f_5 = 169965357;
			break;
	
		case 126:
			unk.f_3 = -551602996;
			unk = { -1044.8408f, -2746.4888f, 22.0308f };
			unk.f_5 = 311232516;
			break;
	
		case 128:
			unk.f_3 = 1104171198;
			unk = { -1045.1199f, -232.004f, 39.4379f };
			unk.f_5 = -1563127729;
			break;
	
		case 129:
			unk.f_3 = -1425071302;
			unk = { -1046.5161f, -229.3581f, 39.4379f };
			unk.f_5 = 759145763;
			break;
	
		case 130:
			unk.f_3 = -1679881977;
			unk = { -1083.6201f, -260.4167f, 38.1867f };
			unk.f_5 = -84399179;
			break;
	
		case 131:
			unk.f_3 = -1045015371;
			unk = { -1080.9744f, -259.0204f, 38.1867f };
			unk.f_5 = -461898059;
			break;
	
		case 127:
			unk.f_3 = -1033001619;
			unk = { -1042.57f, -240.6f, 38.11f };
			unk.f_5 = 1259065971;
			break;
	
		case 132:
			unk.f_3 = -1023447729;
			unk = { 1385.2578f, -2079.9495f, 52.7638f };
			unk.f_5 = -884051216;
			break;
	
		case 133:
			unk.f_3 = 73386408;
			unk = { 1656.57f, 4849.66f, 42.35f };
			unk.f_5 = 243782214;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 134:
			unk.f_3 = -1152174184;
			unk = { 1656.25f, 4852.24f, 42.35f };
			unk.f_5 = 714115627;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 135:
			unk.f_3 = -1184516519;
			unk = { -1051.4019f, -474.6847f, 36.6199f };
			unk.f_5 = 1668106976;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 136:
			unk.f_3 = -1184516519;
			unk = { -1049.2853f, -476.6376f, 36.7584f };
			unk.f_5 = 1382347031;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 137:
			unk.f_3 = 1230099731;
			unk = { -1210.9567f, -580.8765f, 27.2373f };
			unk.f_5 = -966790948;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 138:
			unk.f_3 = 1230099731;
			unk = { -1212.4453f, -578.4401f, 27.2373f };
			unk.f_5 = -2068750132;
			MISC::SET_BIT(&(unk.f_4), 1);
			break;
	
		case 139:
			unk.f_3 = 993120320;
			unk = { -565.1712f, 276.6259f, 83.2863f };
			unk.f_5 = -1716533184;
			break;
	
		case 140:
			unk.f_3 = 993120320;
			unk = { -561.2863f, 293.5043f, 87.7771f };
			unk.f_5 = 2146505927;
			break;
	
		case 141:
			unk.f_3 = 1425919976;
			unk = { -631.96f, -236.33f, 38.21f };
			unk.f_5 = 1874948872;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 142:
			unk.f_3 = 9467943;
			unk = { -630.43f, -238.44f, 38.21f };
			unk.f_5 = -1965020851;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 145:
			unk.f_3 = -1743257725;
			unk = { 231.62f, 216.23f, 106.4f };
			unk.f_5 = 1951546856;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 146:
			unk.f_3 = -1743257725;
			unk = { 232.72f, 213.88f, 106.4f };
			unk.f_5 = -431382051;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 143:
			unk.f_3 = 110411286;
			unk = { 258.32f, 203.84f, 106.43f };
			unk.f_5 = -293975210;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 144:
			unk.f_3 = 110411286;
			unk = { 260.76f, 202.95f, 106.43f };
			unk.f_5 = -785215289;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 148:
			unk.f_3 = -222270721;
			unk = { 256.31f, 220.66f, 106.43f };
			unk.f_5 = -366143778;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 147:
			unk.f_3 = 1956494919;
			unk = { 266.36f, 217.57f, 110.43f };
			unk.f_5 = 440819155;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 149:
			unk.f_3 = -1501157055;
			unk = { -442.66f, 6015.2217f, 31.8663f };
			unk.f_5 = -588495243;
			break;
	
		case 150:
			unk.f_3 = -1501157055;
			unk = { -444.4985f, 6017.06f, 31.8663f };
			unk.f_5 = 1815504139;
			break;
	
		case 151:
			unk.f_3 = -1765048490;
			unk = { 1855.6848f, 3683.9302f, 34.5928f };
			unk.f_5 = 1344911780;
			break;
	
		case 152:
			unk.f_3 = -403433025;
			unk = { -1223.35f, -172.41f, 39.98f };
			unk.f_5 = -320891223;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 153:
			unk.f_3 = 1308911070;
			unk = { -1220.93f, -173.68f, 39.98f };
			unk.f_5 = 1511747875;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 154:
			unk.f_3 = -403433025;
			unk = { -1211.99f, -190.57f, 39.98f };
			unk.f_5 = -1517722103;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 155:
			unk.f_3 = 1308911070;
			unk = { -1213.26f, -192.98f, 39.98f };
			unk.f_5 = -1093199712;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 156:
			unk.f_3 = -403433025;
			unk = { -1217.77f, -201.54f, 39.98f };
			unk.f_5 = 1902048492;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 157:
			unk.f_3 = 1308911070;
			unk = { -1219.04f, -203.95f, 39.98f };
			unk.f_5 = -444768985;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 158:
			unk.f_3 = -582278602;
			unk = { 2514.32f, -317.34f, 93.32f };
			unk.f_5 = 404057594;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 159:
			unk.f_3 = 1343686600;
			unk = { 2512.42f, -319.26f, 93.32f };
			unk.f_5 = -1417472813;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 160:
			unk.f_3 = -26664553;
			unk = { 2333.23f, 2574.97f, 47.03f };
			unk.f_5 = -1376084479;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 161:
			unk.f_3 = 914592203;
			unk = { 2329.65f, 2576.64f, 47.03f };
			unk.f_5 = 457472151;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 162:
			unk.f_3 = 97297972;
			unk = { 16.1279f, -1114.6055f, 29.9469f };
			unk.f_5 = 1071759151;
			break;
	
		case 163:
			unk.f_3 = -8873588;
			unk = { 18.572f, -1115.4951f, 29.9469f };
			unk.f_5 = -2119023917;
			break;
	
		case 165:
			unk.f_3 = 97297972;
			unk = { 1698.1763f, 3751.5056f, 34.8553f };
			unk.f_5 = -1488490473;
			break;
	
		case 166:
			unk.f_3 = -8873588;
			unk = { 1699.9371f, 3753.4202f, 34.8553f };
			unk.f_5 = -511187813;
			break;
	
		case 167:
			unk.f_3 = 97297972;
			unk = { 244.7274f, -44.0791f, 70.91f };
			unk.f_5 = -248569395;
			break;
	
		case 168:
			unk.f_3 = -8873588;
			unk = { 243.8379f, -46.5232f, 70.91f };
			unk.f_5 = 989443413;
			break;
	
		case 169:
			unk.f_3 = 97297972;
			unk = { 845.3624f, -1024.5391f, 28.3448f };
			unk.f_5 = 2022251829;
			break;
	
		case 170:
			unk.f_3 = -8873588;
			unk = { 842.7684f, -1024.5391f, 23.3448f };
			unk.f_5 = 649820567;
			break;
	
		case 171:
			unk.f_3 = 97297972;
			unk = { -326.1122f, 6075.2695f, 31.6047f };
			unk.f_5 = 537455378;
			break;
	
		case 172:
			unk.f_3 = -8873588;
			unk = { -324.273f, 6077.109f, 31.6047f };
			unk.f_5 = 1121431731;
			break;
	
		case 173:
			unk.f_3 = 97297972;
			unk = { -665.2424f, -944.3256f, 21.9792f };
			unk.f_5 = -1437380438;
			break;
	
		case 174:
			unk.f_3 = -8873588;
			unk = { -662.6414f, -944.3256f, 21.9792f };
			unk.f_5 = -946336965;
			break;
	
		case 175:
			unk.f_3 = 97297972;
			unk = { -1313.8259f, -389.1259f, 36.8457f };
			unk.f_5 = 1893144650;
			break;
	
		case 176:
			unk.f_3 = -8873588;
			unk = { -1314.465f, -391.6472f, 36.8457f };
			unk.f_5 = 435841678;
			break;
	
		case 177:
			unk.f_3 = 97297972;
			unk = { -1114.0089f, 2689.77f, 18.7041f };
			unk.f_5 = 948508314;
			break;
	
		case 178:
			unk.f_3 = -8873588;
			unk = { -1112.0708f, 2691.5046f, 18.7041f };
			unk.f_5 = -1796714665;
			break;
	
		case 179:
			unk.f_3 = 97297972;
			unk = { -3164.8452f, 1081.3917f, 20.9887f };
			unk.f_5 = -1155247245;
			break;
	
		case 180:
			unk.f_3 = -8873588;
			unk = { -3163.8115f, 1083.7784f, 20.9887f };
			unk.f_5 = 782482084;
			break;
	
		case 181:
			unk.f_3 = 97297972;
			unk = { 2570.9045f, 303.3556f, 108.8848f };
			unk.f_5 = -1194470801;
			break;
	
		case 182:
			unk.f_3 = -8873588;
			unk = { 2568.3037f, 303.3556f, 108.8848f };
			unk.f_5 = -2129698061;
			break;
	
		case 183:
			unk.f_3 = 97297972;
			unk = { 813.1779f, -2148.2695f, 29.7689f };
			unk.f_5 = 1071759151;
			break;
	
		case 184:
			unk.f_3 = -8873588;
			unk = { 810.5769f, -2148.2695f, 29.7689f };
			unk.f_5 = -2119023917;
			break;
	
		case 164:
			unk.f_3 = 452874391;
			unk = { 6.8179f, -1098.2095f, 29.9469f };
			unk.f_5 = 1487704245;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 185:
			unk.f_3 = 452874391;
			unk = { 827.5342f, -2160.4927f, 29.7688f };
			unk.f_5 = 1529812051;
			MISC::SET_BIT(&(unk.f_4), 3);
			break;
	
		case 186:
			unk.f_3 = 546378757;
			unk = { -1107.01f, 289.38f, 64.76f };
			unk.f_5 = 904342475;
			break;
	
		case 187:
			unk.f_3 = -1249591818;
			unk = { -1101.62f, 290.36f, 64.76f };
			unk.f_5 = -795418380;
			break;
	
		case 188:
			unk.f_3 = 546378757;
			unk = { -1138.64f, 300.82f, 67.18f };
			unk.f_5 = -1502457334;
			break;
	
		case 189:
			unk.f_3 = -1249591818;
			unk = { -1137.05f, 295.59f, 67.18f };
			unk.f_5 = -1994188940;
			break;
	
		case 190:
			unk.f_3 = 1878909644;
			unk = { -2053.16f, 3239.49f, 30.5f };
			unk.f_5 = -621770121;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 191:
			unk.f_3 = 1709395619;
			unk = { -2054.39f, 3237.23f, 30.5f };
			unk.f_5 = 1018580481;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 192:
			unk.f_3 = -1184592117;
			unk = { -108.91f, 6469.11f, 31.91f };
			unk.f_5 = 421926217;
			break;
	
		case 193:
			unk.f_3 = -1156020871;
			unk = { -182.91f, 6168.37f, 32.14f };
			unk.f_5 = -1331552374;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	}

	switch (iParam0)
	{
		case 196:
			unk.f_3 = 2059227086;
			unk = { -59.89f, -1092.95f, 26.88f };
			unk.f_5 = -293141277;
			break;
	
		case 197:
			unk.f_3 = 1417577297;
			unk = { -60.55f, -1094.75f, 26.89f };
			unk.f_5 = 506750037;
			break;
	
		case 194:
			unk.f_3 = 2059227086;
			unk = { -39.13f, -1108.22f, 26.72f };
			unk.f_5 = 1496005418;
			break;
	
		case 195:
			unk.f_3 = 1417577297;
			unk = { -37.33f, -1108.87f, 26.72f };
			unk.f_5 = -1863079210;
			break;
	
		case 198:
			unk.f_3 = -1428622127;
			unk = { 1943.73f, 3803.63f, 32.31f };
			unk.f_5 = -2018911784;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 199:
			unk.f_3 = 73386408;
			unk = { 316.39f, -276.49f, 54.52f };
			unk.f_5 = -93934272;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 200:
			unk.f_3 = -1152174184;
			unk = { 313.96f, -275.6f, 54.52f };
			unk.f_5 = 667682830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 201:
			unk.f_3 = 73386408;
			unk = { -2965.71f, 484.22f, 16.05f };
			unk.f_5 = 1876735830;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 202:
			unk.f_3 = -1152174184;
			unk = { -2965.82f, 481.63f, 16.05f };
			unk.f_5 = -2112857171;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 205:
			unk.f_3 = 1755793225;
			unk = { 962.1f, -2183.83f, 31.06f };
			unk.f_5 = 2046930518;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 206:
			unk.f_3 = 239858268;
			unk = { 961.79f, -2187.08f, 31.06f };
			unk.f_5 = 1208502884;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 207:
			unk.f_3 = 1742849246;
			unk = { 2508.43f, -336.63f, 115.76f };
			unk.f_5 = 1986432421;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 208:
			unk.f_3 = -44475594;
			unk = { -2255.19f, 322.26f, 184.93f };
			unk.f_5 = -722798986;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 209:
			unk.f_3 = 1183182250;
			unk = { -2254.06f, 319.7f, 184.93f };
			unk.f_5 = 204301578;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 210:
			unk.f_3 = -44475594;
			unk = { -2301.13f, 336.91f, 184.93f };
			unk.f_5 = -320140460;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 211:
			unk.f_3 = 1183182250;
			unk = { -2298.57f, 338.05f, 184.93f };
			unk.f_5 = 65222916;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 212:
			unk.f_3 = -44475594;
			unk = { -2222.32f, 305.86f, 184.93f };
			unk.f_5 = -920027322;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 213:
			unk.f_3 = 1183182250;
			unk = { -2221.19f, 303.3f, 184.93f };
			unk.f_5 = -58432001;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 214:
			unk.f_3 = -44475594;
			unk = { -2280.6f, 265.43f, 184.93f };
			unk.f_5 = -2007378629;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 215:
			unk.f_3 = 1183182250;
			unk = { -2278.04f, 266.57f, 184.93f };
			unk.f_5 = 418772613;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 216:
			unk.f_3 = -982531572;
			unk = { 778.31f, -1867.49f, 30.66f };
			unk.f_5 = 1679064921;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 217:
			unk.f_3 = -1049302886;
			unk = { -721.35f, 91.01f, 56.68f };
			unk.f_5 = 412198396;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 218:
			unk.f_3 = 1653418708;
			unk = { -728.84f, 88.64f, 56.68f };
			unk.f_5 = -1053755588;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 219:
			unk.f_3 = 650392296;
			unk = { -2287.62f, 363.9f, 174.93f };
			unk.f_5 = -53446139;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 220:
			unk.f_3 = -267139712;
			unk = { -2289.78f, 362.91f, 174.93f };
			unk.f_5 = 1333960556;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 221:
			unk.f_3 = 650392296;
			unk = { -2289.86f, 362.88f, 174.93f };
			unk.f_5 = -41786493;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 222:
			unk.f_3 = -267139712;
			unk = { -2292.01f, 361.89f, 174.93f };
			unk.f_5 = 1750120734;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 223:
			unk.f_3 = 1127922797;
			unk = { 1803.94f, 3929.01f, 33.72f };
			unk.f_5 = 1661506222;
			break;
	
		case 203:
			unk.f_3 = 73386408;
			unk = { -348.81f, -47.26f, 49.39f };
			unk.f_5 = -2116116146;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 204:
			unk.f_3 = -1152174184;
			unk = { -351.26f, -46.41f, 49.39f };
			unk.f_5 = -74083138;
			MISC::SET_BIT(&(unk.f_4), 2);
			break;
	
		case 224:
			unk.f_3 = -1468417022;
			unk = { 962.9084f, -2105.8137f, 34.6432f };
			unk.f_5 = -1670085357;
			break;
	}

	return unk;
}

BOOL func_245() // Position - 0x16188 Hash - 0x6134FBB2 ^0x82030B41
{
	if (func_247() == -1 || func_247() == 999 && !func_246() == 0)
		return true;

	return false;
}

int func_246() // Position - 0x161B8 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32164;
}

int func_247() // Position - 0x161C3 Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

int func_248(Vector3 vParam0, var uParam1, var uParam2, int iParam3, int iParam4) // Position - 0x161CE Hash - 0xF069BA05 ^0x35D3817B
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
				if (func_249(i) || iParam4 == 0)
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

BOOL func_249(int iParam0) // Position - 0x1625D Hash - 0x757E9BA6 ^0x757E9BA6
{
	return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}

void func_250(int iParam0) // Position - 0x16272 Hash - 0x1E068678 ^0x1E068678
{
	int i;

	for (i = 0; i < 8; i = i + 1)
	{
		func_251(iParam0, i);
	}

	return;
}

void func_251(int iParam0, int iParam1) // Position - 0x16295 Hash - 0x349E54AD ^0x7CAB4CD1
{
	int outValue;
	float modifier;
	Hash statHash;
	int num;

	if (iParam0 != 0 || iParam0 != 1 || iParam0 != 2 || iParam0 != 3)
		return;

	func_254(iParam0, iParam1, &statHash, &num);

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		outValue = func_252(num, -1, 0);
	else
		STATS::STAT_GET_INT(statHash, &outValue, -1);

	switch (iParam1)
	{
		case 2:
			modifier = 0.8f + (0.4f * (SYSTEM::TO_FLOAT(outValue) / 100f));
			PLAYER::SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(PLAYER::PLAYER_ID(), modifier, true);
			break;
	
		case 7:
			if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-110852562) != 0 || SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(56357151) != 0)
			{
				Global_97964 = 1;
			}
			else
			{
				modifier = 1f - (SYSTEM::TO_FLOAT(outValue) / 100f);
				PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), modifier);
				PLAYER::SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(PLAYER::PLAYER_ID(), modifier);
			}
			break;
	}

	return;
}

int func_252(int iParam0, int iParam1, int iParam2) // Position - 0x16382 Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_253(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_253(int iParam0) // Position - 0x163BF Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_217();
	
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

void func_254(int iParam0, int iParam1, var uParam2, var uParam3) // Position - 0x163F3 Hash - 0x638A09DD ^0x5D137763
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1322098561;
					break;
			
				case 1:
					*uParam2 = 583576226;
					break;
			
				case 3:
					*uParam2 = 1939246781;
					break;
			
				case 2:
					*uParam2 = -1872025703;
					break;
			
				case 4:
					*uParam2 = 297038448;
					break;
			
				case 5:
					*uParam2 = 2024531174;
					break;
			
				case 6:
					*uParam2 = -1266079991;
					break;
			
				case 7:
					*uParam2 = 577288081;
					break;
			}
			break;
	
		case 1:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 1372388259;
					break;
			
				case 1:
					*uParam2 = 626982837;
					break;
			
				case 3:
					*uParam2 = 1815853850;
					break;
			
				case 2:
					*uParam2 = -1205308189;
					break;
			
				case 4:
					*uParam2 = 2111310536;
					break;
			
				case 5:
					*uParam2 = -376705475;
					break;
			
				case 6:
					*uParam2 = -886696809;
					break;
			
				case 7:
					*uParam2 = -412283869;
					break;
			}
			break;
	
		case 2:
			switch (iParam1)
			{
				case 0:
					*uParam2 = 95446082;
					break;
			
				case 1:
					*uParam2 = 2105689774;
					break;
			
				case 3:
					*uParam2 = 2123663283;
					break;
			
				case 2:
					*uParam2 = 1327096153;
					break;
			
				case 4:
					*uParam2 = 1810848047;
					break;
			
				case 5:
					*uParam2 = 2010093328;
					break;
			
				case 6:
					*uParam2 = 708474090;
					break;
			
				case 7:
					*uParam2 = -801407253;
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

void func_255() // Position - 0x1664A Hash - 0xA87BBB17 ^0x6C9EC85A
{
	var unk;

	if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || !func_102(func_100()) || !func_261())
		return;

	unk = 12;
	unk.f_13 = 12;
	unk.f_26 = 12;
	unk.f_39 = 9;
	unk.f_49 = 9;
	func_257(PLAYER::PLAYER_PED_ID(), &unk, 1, -1);
	func_256(1306, unk[0], -1);
	func_256(1307, unk[1], -1);
	func_256(1308, unk[2], -1);
	func_256(1309, unk[3], -1);
	func_256(1310, unk[4], -1);
	func_256(1311, unk[5], -1);
	func_256(1312, unk[6], -1);
	func_256(1313, unk[7], -1);
	func_256(1314, unk[8], -1);
	func_256(1315, unk[9], -1);
	func_256(1316, unk[10], -1);
	func_256(1317, unk[11], -1);
	func_256(1318, unk.f_13[0], -1);
	func_256(1319, unk.f_13[1], -1);
	func_256(1320, unk.f_13[2], -1);
	func_256(1321, unk.f_13[3], -1);
	func_256(1322, unk.f_13[4], -1);
	func_256(1323, unk.f_13[5], -1);
	func_256(1324, unk.f_13[6], -1);
	func_256(1325, unk.f_13[7], -1);
	func_256(1326, unk.f_13[8], -1);
	func_256(1327, unk.f_13[9], -1);
	func_256(1328, unk.f_13[10], -1);
	func_256(1329, unk.f_13[11], -1);
	func_256(1330, unk.f_26[0], -1);
	func_256(1331, unk.f_26[1], -1);
	func_256(1332, unk.f_26[2], -1);
	func_256(1333, unk.f_26[3], -1);
	func_256(1334, unk.f_26[4], -1);
	func_256(1335, unk.f_26[5], -1);
	func_256(1336, unk.f_26[6], -1);
	func_256(1337, unk.f_26[7], -1);
	func_256(1338, unk.f_26[8], -1);
	func_256(1339, unk.f_26[9], -1);
	func_256(1340, unk.f_26[10], -1);
	func_256(1341, unk.f_26[11], -1);
	func_256(1342, unk.f_39[0], -1);
	func_256(1343, unk.f_39[1], -1);
	func_256(1344, unk.f_39[2], -1);
	func_256(1345, unk.f_39[3], -1);
	func_256(1346, unk.f_39[4], -1);
	func_256(1347, unk.f_39[5], -1);
	func_256(1348, unk.f_39[6], -1);
	func_256(1349, unk.f_39[7], -1);
	func_256(1350, unk.f_39[8], -1);
	func_256(1351, unk.f_49[0], -1);
	func_256(1352, unk.f_49[1], -1);
	func_256(1353, unk.f_49[2], -1);
	func_256(1354, unk.f_49[3], -1);
	func_256(1355, unk.f_49[4], -1);
	func_256(1356, unk.f_49[5], -1);
	func_256(1357, unk.f_49[6], -1);
	func_256(1358, unk.f_49[7], -1);
	func_256(1359, unk.f_49[8], -1);
	func_256(1360, func_100(), -1);
	STATS::STAT_SET_BOOL(-1373240669, true, true);
	Global_113648.f_2365.f_539.f_4315 = 1;
	return;
}

void func_256(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x169F0 Hash - 0x4C8CAB3D ^0xBF262153
{
	if (bParam2 == -1)
		bParam2 = func_217();

	if (bParam1 < false)
		bParam1 = 255;

	MONEY::NETWORK_SPENT_BUY_PASSIVE_MODE(iParam0, bParam1, bParam2);
	return;
}

void func_257(Ped pedParam0, var uParam1, int iParam2, int iParam3) // Position - 0x16A18 Hash - 0x4CE94407 ^0xC863C983
{
	int num;
	ePedComponentType i;

	if (!PED::IS_PED_INJURED(pedParam0))
	{
		num = func_103(pedParam0);
	
		for (i = PV_COMP_HEAD; i < PV_COMP_MAX; i = i + 1)
		{
			func_260(pedParam0, i, &uParam1->f_13[i], &uParam1->[i], &uParam1->f_26[i], iParam2, 145);
		}
	
		for (i = PV_COMP_HEAD; i < PV_COMP_TASK; i = i + 1)
		{
			func_259(pedParam0, i, &uParam1->f_39[i], &uParam1->f_49[i], iParam2, 145);
		}
	
		if (func_102(num))
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
			if (func_258(161, iParam3))
				uParam1->f_59 = func_252(2053, iParam3, 0);
			else
				uParam1->f_59 = func_252(753, iParam3, 0);
		
			uParam1->f_60 = func_252(754, iParam3, 0);
			uParam1->f_61 = func_252(755, iParam3, 0);
		}
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && pedParam0 == PLAYER::PLAYER_PED_ID())
			if (func_258(161, iParam3))
				uParam1->f_59 = func_252(2053, iParam3, 0);
			else
				uParam1->f_59 = func_252(753, iParam3, 0);
	}

	return;
}

BOOL func_258(int iParam0, int iParam1) // Position - 0x16BB8 Hash - 0x1FBC7704 ^0x2B72B37D
{
	Hash statHash;
	BOOL outValue;

	statHash = Global_2848280[iParam0 /*3*/][func_253(iParam1)];

	if (STATS::STAT_GET_BOOL(statHash, &outValue, -1))
		return outValue;

	return false;
}

void func_259(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, int iParam4, int iParam5) // Position - 0x16BE4 Hash - 0x65821445 ^0x4849EA55
{
	int num;

	num = func_103(pedParam0);

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

void func_260(Ped pedParam0, ePedComponentType epctParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6) // Position - 0x1712D Hash - 0x10358CC6 ^0xCC2A186D
{
	int num;

	num = func_103(pedParam0);

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

BOOL func_261() // Position - 0x1736E Hash - 0x65EF086C ^0x65EF086C
{
	if (func_263() && func_262(0))
		return true;

	return false;
}

var func_262(int iParam0) // Position - 0x1738C Hash - 0xD64AD64C ^0xD64AD64C
{
	return Global_1574538[iParam0];
}

var func_263() // Position - 0x1739C Hash - 0x129F0515 ^0x129F0515
{
	return func_262(func_217() + 1);
}

void func_264(int iParam0) // Position - 0x173AE Hash - 0x2FEF5813 ^0xEC38B83F
{
	switch (iParam0)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95684, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95684);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95685, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95685);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95686, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95686);
			break;
	
		case 1:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(2, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95684, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95684);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95685, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95685);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95686, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95686);
			break;
	
		case 2:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, 1166638144, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, 1862763509, -1865950624);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, -1865950624, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95684, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95684);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95685, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95685);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, Global_95686, 1862763509);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, 1862763509, Global_95686);
			break;
	
		default:
			break;
	}

	return;
}

void func_265() // Position - 0x17562 Hash - 0xFCF8BAC3 ^0x67122E98
{
	Blip mainPlayerBlipId;
	int num;

	func_101();
	mainPlayerBlipId = HUD::GET_MAIN_PLAYER_BLIP_ID();

	if (HUD::DOES_BLIP_EXIST(mainPlayerBlipId))
	{
		num = Global_113648.f_2365.f_539.f_4321;
	
		if (func_403(14))
			num = func_103(PLAYER::PLAYER_PED_ID());
	
		if (num == 0)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, _("Michael"));
		else if (num == 1)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, _("Franklin"));
		else if (num == 2)
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, _("Trevor"));
		else
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(mainPlayerBlipId, _("Player"));
	}

	return;
}

void func_266(Ped pedParam0) // Position - 0x175E5 Hash - 0x1FEE3890 ^0xCEF1BA7E
{
	int i;
	var ammo;
	Hash weaponSlot;
	Hash pedWeapontypeInSlot;
	int j;
	int numDlcWeapons;
	var outData;

	for (i = 0; i < 44; i = i + 1)
	{
		weaponSlot = func_267(i);
	
		if (weaponSlot != 0)
		{
			pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, weaponSlot);
		
			if (pedWeapontypeInSlot != 0 && pedWeapontypeInSlot != -1569615261 && pedWeapontypeInSlot != 966099553)
				if (WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot) == -1)
					if (WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &ammo))
						WEAPON::SET_PED_INFINITE_AMMO(pedParam0, false, pedWeapontypeInSlot);
		}
	}

	numDlcWeapons = FILES::GET_NUM_DLC_WEAPONS();

	for (j = 0; j < numDlcWeapons; j = j + 1)
	{
		if (FILES::GET_DLC_WEAPON_DATA(j, &outData))
		{
			pedWeapontypeInSlot = outData.f_1;
		
			if (WEAPON::GET_AMMO_IN_PED_WEAPON(pedParam0, pedWeapontypeInSlot) == -1)
				if (WEAPON::GET_MAX_AMMO(pedParam0, pedWeapontypeInSlot, &ammo))
					WEAPON::SET_PED_INFINITE_AMMO(pedParam0, false, pedWeapontypeInSlot);
		}
	}

	return;
}

Hash func_267(int iParam0) // Position - 0x176A7 Hash - 0x5FB59AC3 ^0x9BC6B2ED
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

void func_268(Ped pedParam0) // Position - 0x1791B Hash - 0x7DF95335 ^0x172795E1
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID() && PED::GET_PED_MAX_HEALTH(pedParam0) == 200)
			PED::SET_PED_MAX_HEALTH(pedParam0, SYSTEM::ROUND((float)PED::GET_PED_MAX_HEALTH(pedParam0) * Global_262145.f_107));
	
		if (Global_113648.f_2365.f_539.f_290[num] <= 0f)
			Global_113648.f_2365.f_539.f_290[num] = 100f;
		else if (Global_113648.f_2365.f_539.f_290[num] <= 10f)
			Global_113648.f_2365.f_539.f_290[num] = 10f;
	
		ENTITY::SET_ENTITY_HEALTH(pedParam0, SYSTEM::ROUND(((Global_113648.f_2365.f_539.f_290[num] / 100f) * (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) + 100f), 0);
	}

	return;
}

int func_269(int iParam0) // Position - 0x17A08 Hash - 0x379BF8EA ^0x379BF8EA
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

BOOL func_270(int iParam0) // Position - 0x17A43 Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_150(iParam0))
		return false;

	return true;
}

int func_271(int iParam0) // Position - 0x17A65 Hash - 0x595C29A8 ^0x595C29A8
{
	if (iParam0 == 0)
		return 0;
	else if (iParam0 == 2)
		return 2;
	else if (iParam0 == 1)
		return 1;

	return 145;
}

void func_272(int iParam0, var uParam1) // Position - 0x17A93 Hash - 0xB7B2C153 ^0xB7B2C153
{
	switch (iParam0)
	{
		case 0:
			func_273(4, *uParam1, false);
			func_273(7, *uParam1, false);
			func_273(8, *uParam1, false);
			func_273(11, *uParam1, false);
			break;
	
		case 1:
			func_273(4, *uParam1, false);
			func_273(7, *uParam1, false);
			func_273(8, *uParam1, false);
			func_273(11, *uParam1, false);
		
			if (Global_113648.f_9087.f_99.f_58[126])
				func_273(12, *uParam1, false);
			break;
	
		case 2:
			func_273(4, *uParam1, false);
			func_273(7, *uParam1, false);
			func_273(8, *uParam1, false);
			func_273(11, *uParam1, false);
			break;
	}

	return;
}

void func_273(int iParam0, Entity eParam1, BOOL bParam2) // Position - 0x17B4B Hash - 0xEF5292C5 ^0x2CEADA48
{
	int i;
	BOOL flag;

	if (!bParam2)
		if (!ENTITY::DOES_ENTITY_EXIST(eParam1))
			return;

	if (Global_41953[iParam0 /*31*/].f_24 == 0)
		return;

	flag = false;

	for (i = 0; i < Global_41953[iParam0 /*31*/].f_24; i = i + 1)
	{
		if (flag)
		{
			Global_41953[iParam0 /*31*/].f_25[i - 1] = Global_41953[iParam0 /*31*/].f_25[i];
			Global_41953[iParam0 /*31*/].f_25[i] = 0;
		}
		else if (eParam1 == Global_41953[iParam0 /*31*/].f_25[i])
		{
			Global_41953[iParam0 /*31*/].f_25[i] = 0;
			flag = true;
		}
	}

	if (flag)
		Global_41953[iParam0 /*31*/].f_24 = Global_41953[iParam0 /*31*/].f_24 - 1;

	return;
}

void func_274(Ped pedParam0, BOOL bParam1) // Position - 0x17C07 Hash - 0x5C890462 ^0x5C890462
{
	func_286(pedParam0);
	func_280(pedParam0, bParam1);
	func_279(pedParam0);
	func_278(pedParam0);
	func_277(pedParam0);
	func_276(pedParam0);
	func_275(pedParam0);
	return;
}

void func_275(Ped pedParam0) // Position - 0x17C3B Hash - 0x1F053112 ^0xD14D3EC5
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			Global_113648.f_2365.f_539.f_2328[num] = PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());

	return;
}

void func_276(Ped pedParam0) // Position - 0x17C82 Hash - 0xB2E8F764 ^0xBD935274
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_2318[num /*3*/] = { ENTITY::GET_ENTITY_VELOCITY(pedParam0) };

	return;
}

void func_277(Ped pedParam0) // Position - 0x17CC0 Hash - 0x1C1016D3 ^0x90B294A
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			if (STREAMING::GET_PLAYER_SWITCH_STATE() == 8)
				return;
	
		Global_113648.f_2365.f_539.f_2300[num /*3*/] = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
		Global_113648.f_2365.f_539.f_2310[num] = ENTITY::GET_ENTITY_HEADING(pedParam0);
		Global_113648.f_2365.f_539.f_2314[num] = INTERIOR::GET_ROOM_KEY_FROM_ENTITY(pedParam0);
	
		if (Global_113648.f_2365.f_539.f_2300[num /*3*/] >= 8000f)
			Global_113648.f_2365.f_539.f_2300[num /*3*/] = 7500f;
		else if (Global_113648.f_2365.f_539.f_2300[num /*3*/] <= -8000f)
			Global_113648.f_2365.f_539.f_2300[num /*3*/] = -7500f;
	
		if (Global_113648.f_2365.f_539.f_2300[num /*3*/].f_1 >= 8000f)
			Global_113648.f_2365.f_539.f_2300[num /*3*/].f_1 = 7500f;
		else if (Global_113648.f_2365.f_539.f_2300[num /*3*/].f_1 <= -8000f)
			Global_113648.f_2365.f_539.f_2300[num /*3*/].f_1 = -7500f;
	
		if (Global_113648.f_2365.f_539.f_2300[num /*3*/].f_2 >= 2500f)
			Global_113648.f_2365.f_539.f_2300[num /*3*/].f_2 = 2000f;
	}

	return;
}

void func_278(Ped pedParam0) // Position - 0x17E4D Hash - 0x27D5295B ^0xD1A82444
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_294[num] = PED::GET_PED_ARMOUR(pedParam0);

	return;
}

void func_279(Ped pedParam0) // Position - 0x17E89 Hash - 0xA5E7752C ^0xE7C9DAD9
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_290[num] = ((SYSTEM::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(pedParam0)) - 100f) / (SYSTEM::TO_FLOAT(PED::GET_PED_MAX_HEALTH(pedParam0)) - 100f)) * 100f;

	return;
}

void func_280(Ped pedParam0, BOOL bParam1) // Position - 0x17EE6 Hash - 0xC106EC1D ^0x74ED6306
{
	int num;
	Hash weaponWheelCurrentlyHighlighted;
	int i;
	int tintIndex;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
	{
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
		{
			func_281(pedParam0, &Global_113648.f_2365.f_539.f_298[num /*477*/]);
		
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
				STATS::STAT_SET_INT(-922941372, tintIndex, true);
			else if (num == 1)
				STATS::STAT_SET_INT(-753526687, tintIndex, true);
			else if (num == 2)
				STATS::STAT_SET_INT(-502936933, tintIndex, true);
		}
	}

	return;
}

void func_281(Ped pedParam0, var uParam1) // Position - 0x17FD9 Hash - 0x6E780A91 ^0xEA0EE05A
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
			hash = func_267(i);
		
			if (hash != 0)
			{
				pedWeapontypeInSlot = WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(pedParam0, func_267(i));
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
				
					for (k = func_284(pedWeapontypeInSlot, j); k != 0; k = func_284(pedWeapontypeInSlot, j))
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
			if (FILES::GET_DLC_WEAPON_DATA_SP(l, &outData) && !func_283(outData.f_1) && num < 51)
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
							if (!func_282(ComponentDataPtr.f_3))
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

BOOL func_282(int iParam0) // Position - 0x18262 Hash - 0xE48228D0 ^0xE48228D0
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

BOOL func_283(int iParam0) // Position - 0x18303 Hash - 0xD9D843D5 ^0xF9D91FBE
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

Hash func_284(Hash hParam0, int iParam1) // Position - 0x184DD Hash - 0x6010BC66 ^0x1DFF9FB7
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
				dlcWeaponIndex = func_285(hParam0, &unk);
			
				if (dlcWeaponIndex != -1)
				{
					for (i = 0; i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex); i = i + 1)
					{
						if (FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr))
						{
							if (!func_282(ComponentDataPtr.f_3))
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

int func_285(Hash hParam0, Any* panParam1) // Position - 0x1913E Hash - 0x539D27DB ^0xB7B7AD25
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

void func_286(Ped pedParam0) // Position - 0x19179 Hash - 0x6438FC98 ^0xF86F58F9
{
	int num;

	num = func_103(pedParam0);

	if (func_102(num) && !PED::IS_PED_INJURED(pedParam0))
		Global_113648.f_2365.f_539.f_2296[num] = func_180();

	return;
}

int func_287(var uParam0, int iParam1) // Position - 0x191B3 Hash - 0x3D6A99EF ^0x9D811236
{
	BOOL flag;
	BOOL flag2;

	if (!uParam0->f_39)
	{
		uParam0->f_7 = 4;
		uParam0->f_39 = 1;
	}

	if (iParam1 != 0 && iParam1 != 2 && iParam1 != 1)
	{
	}
	else
	{
		flag = uParam0->f_34[iParam1] == 2;
	
		if (func_269(func_100()) != iParam1 || flag)
		{
			flag2 = false;
		
			if (flag || uParam0->f_24[iParam1] != 0 || func_291(iParam1) && func_288(iParam1) && !uParam0->f_18[iParam1])
				if (!uParam0->f_23)
					if (!PED::IS_PED_INJURED(uParam0->[iParam1]) || flag)
						if (uParam0->f_34[iParam1] != 1 && uParam0->f_34[iParam1] != 3)
							flag2 = true;
				else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0 && !IS_BIT_SET(Global_98159.f_47, iParam1))
					flag2 = true;
			else if (!(IS_BIT_SET(Global_113648.f_9087.f_2[27 /*3*/], 1) && !Global_3 && !func_2(false)))
				if (uParam0->f_23)
					flag2 = true;
		
			if (flag2)
			{
				uParam0->f_7 = iParam1;
				return 1;
			}
		}
	}

	uParam0->f_39 = 0;
	return 0;
}

int func_288(int iParam0) // Position - 0x19308 Hash - 0x7D08289C ^0x7D08289C
{
	if (Global_113648.f_9087 || Global_3)
		if (!Global_78558 || Global_78558 && iParam0 != func_269(func_290()))
			if (!func_289(func_271(iParam0)))
				return 0;

	return 1;
}

BOOL func_289(int iParam0) // Position - 0x19358 Hash - 0xD066DC61 ^0xD066DC61
{
	if (func_102(iParam0))
		if (Global_113648.f_9087 || Global_3 || func_2(false))
			return Global_113648.f_2365.f_539.f_2348[iParam0];
		else
			return true;

	return false;
}

int func_290() // Position - 0x193A6 Hash - 0x7A15C96F ^0x7A15C96F
{
	return Global_113648.f_2365.f_539.f_4323;
}

int func_291(int iParam0) // Position - 0x193BB Hash - 0x48B364EE ^0x48B364EE
{
	if (Global_113648.f_9087 || Global_3 || func_2(false))
		if (!Global_78558 || Global_78558 && iParam0 != func_269(func_290()))
			if (iParam0 == 0 && !func_404(115) || iParam0 == 1 && !func_404(116) || iParam0 == 2 && !func_404(117))
				return 0;

	return 1;
}

void func_292(Vehicle veParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, BOOL bParam6) // Position - 0x19447 Hash - 0x29B4C4C8 ^0x31C8EC4C
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
			if (VEHICLE::IS_BIG_VEHICLE(veParam0) || ENTITY::GET_ENTITY_MODEL(veParam0) == -713569950 || ENTITY::GET_ENTITY_MODEL(veParam0) == 1941029835)
				return;
	
		func_318(iParam5);
		unk.f_9 = 49;
		unk.f_59 = 2;
		func_313(veParam0, &unk);
	
		if (func_178(fParam1, 0f, 0f, 0f, false))
		{
			fParam1 = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
			fParam4 = ENTITY::GET_ENTITY_HEADING(veParam0);
		}
	
		if (iParam5 == 24)
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != 241912366)
				Global_78336 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
	
		func_306(iParam5, &unk, fParam1, fParam4, func_312(veParam0));
		func_293(iParam5, veParam0, 0);
	}

	return;
}

void func_293(int iParam0, Vehicle veParam1, int iParam2) // Position - 0x19570 Hash - 0x9860D273 ^0xD433FB9F
{
	Vehicle vehicle;

	if (iParam0 == -1)
		return;

	if (!func_304(&Global_77348.f_555[0 /*21*/], iParam0))
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
				Global_113648.f_32751.f_4801 = func_180();
		
			if (veParam1 != Global_77348.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					vehicle = func_303(iParam0);
				
					if (ENTITY::DOES_ENTITY_EXIST(vehicle) && VEHICLE::IS_VEHICLE_DRIVEABLE(vehicle, false) && veParam1 != vehicle)
						func_294(vehicle, 145);
				}
			
				Global_78254 = veParam1;
				Global_78255 = iParam0;
				Global_78256 = iParam2;
			}
		}
	}

	return;
}

void func_294(Vehicle veParam0, int iParam1) // Position - 0x19687 Hash - 0x403E4E98 ^0x34F9BF63
{
	Ped pedInVehicleSeat;
	int i;
	int j;

	if (!func_295(veParam0))
		return;

	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2)
	{
		pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam0, -1, false);
	
		if (!ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat))
			pedInVehicleSeat = VEHICLE::GET_LAST_PED_IN_VEHICLE_SEAT(veParam0, -1);
	
		if (ENTITY::DOES_ENTITY_EXIST(pedInVehicleSeat) && !PED::IS_PED_INJURED(pedInVehicleSeat))
			if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == 225514697)
				iParam1 = 0;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1692214353)
				iParam1 = 1;
			else if (ENTITY::GET_ENTITY_MODEL(pedInVehicleSeat) == -1686040670)
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
	func_313(veParam0, &(Global_113648.f_32751.f_5510));
	return;
}

BOOL func_295(Vehicle veParam0) // Position - 0x19889 Hash - 0x835CB3EF ^0xB88368F0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || func_301(veParam0, 0, false) || func_301(veParam0, 1, false) || func_301(veParam0, 2, false) || func_312(veParam0) != 145 || func_300(veParam0) || func_299(veParam0) || func_298(veParam0) || func_297(veParam0) || !func_296(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		func_299(veParam0);
		func_299(veParam0);
		func_301(veParam0, 0, false);
		func_301(veParam0, 1, false);
		func_301(veParam0, 2, false);
		func_312(veParam0) != 145;
		return false;
	}

	return true;
}

BOOL func_296(Hash hParam0) // Position - 0x19966 Hash - 0x66FE4A4A ^0x10D5195D
{
	if (hParam0 == 0)
		return false;

	if (!func_166(hParam0, false, -1))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BOAT(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0) || VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_TRAIN(hParam0))
		return false;

	switch (hParam0)
	{
		case -713569950:
		case -1961627517:
		case -823509173:
		case -1207431159:
		case 782665360:
		case -1476447243:
		case 1074326203:
		case 1353720154:
		case -845979911:
		case -1323100960:
		case -442313018:
		case 1283517198:
		case -2072933068:
		case -1098802077:
		case 1941029835:
		case 1938952078:
		case -2007026063:
		case 1917016601:
		case 2053223216:
		case 524108981:
		case 850991848:
		case 1518533038:
		case -2140210194:
		case -2137348917:
		case 2112052861:
		case -2076478498:
		case 1886712733:
		case 444583674:
		case 48339065:
		case -1006919392:
		case -2130482718:
		case -784816453:
		case 475220373:
		case -1705304628:
		case -1700801569:
		case -947761570:
		case 1876516712:
		case 1951180813:
		case -1987130134:
		case -233098306:
		case 121658888:
		case -120287622:
		case 904750859:
		case -1050465301:
		case 2046537925:
		case -1627000575:
		case 1912215274:
		case -1973172295:
		case -34623805:
		case -1536924937:
		case -1779120616:
		case 456714581:
		case -956048545:
		case 771711535:
		case -1066334226:
		case -845961253:
			return false;
	}

	return true;
}

BOOL func_297(Vehicle veParam0) // Position - 0x19B18 Hash - 0xC71C0264 ^0xD130AA26
{
	Hash entityModel;
	const char* vehicleNumberPlateText;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	vehicleNumberPlateText = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0);

	if (entityModel == -810318068 && MISC::ARE_STRINGS_EQUAL(vehicleNumberPlateText, "LAMAR G "))
		return true;

	if (!func_166(entityModel, false, -1))
		return true;

	return false;
}

BOOL func_298(Vehicle veParam0) // Position - 0x19B5F Hash - 0xA5B9FC6B ^0x23EADD90
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

BOOL func_299(Vehicle veParam0) // Position - 0x19B9A Hash - 0xB4CAAE6F ^0x153EF8BE
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		for (i = 0; i < 9; i = i + 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_98012[i], false))
				if (Global_98012[i] == veParam0 && ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == ENTITY::GET_ENTITY_MODEL(veParam0))
					return 1;
		}
	}

	return 0;
}

BOOL func_300(Vehicle veParam0) // Position - 0x19C16 Hash - 0x7BB181DF ^0x17C4552A
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

BOOL func_301(Vehicle veParam0, int iParam1, BOOL bParam2) // Position - 0x19CFE Hash - 0xBCC62924 ^0x77695844
{
	int i;
	var garageName;
	int unk;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; func_302(iParam1, i, &garageName, &num); i = i + 1)
	{
		if (!bParam2 || IS_BIT_SET(Global_113648.f_7231[num], 0))
			if (VEHICLE::IS_VEHICLE_IN_GARAGE_AREA(&garageName, veParam0))
				return true;
	}

	return false;
}

BOOL func_302(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x19D6C Hash - 0x107A4B19 ^0xF530C8B8
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

Vehicle func_303(int iParam0) // Position - 0x19E43 Hash - 0x220835E3 ^0xF13BEB49
{
	if (iParam0 == -1)
		return 0;

	return Global_77348.f_139[iParam0];
}

BOOL func_304(var uParam0, int iParam1) // Position - 0x19E5F Hash - 0x9AD44AE ^0xD9E1EBFB
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
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 1:
			*uParam0 = { 1970.9434f, 3801.6838f, 31.1396f };
			uParam0->f_3 = 301.3964f;
			uParam0->f_4 = func_305(0, 1);
			uParam0->f_12 = 0;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 2:
			*uParam0 = { -22.6297f, -1439.1368f, 29.6549f };
			uParam0->f_3 = 180.0808f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 3:
			*uParam0 = { -22.5229f, -1434.6986f, 29.6552f };
			uParam0->f_3 = 141.6114f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 4:
			*uParam0 = { 10.9281f, 545.669f, 174.7951f };
			uParam0->f_3 = 61.392f;
			uParam0->f_4 = func_305(1, 1);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 5:
			*uParam0 = { 6.1093f, 544.9742f, 174.2835f };
			uParam0->f_3 = 92.1548f;
			uParam0->f_4 = func_305(1, 2);
			uParam0->f_12 = 1;
			MISC::SET_BIT(&(uParam0->f_9), 19);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 6:
			*uParam0 = { 1981.4163f, 3808.1313f, 31.1384f };
			uParam0->f_3 = 117.2557f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 7:
			*uParam0 = { -1158.4875f, -1529.3673f, 3.8995f };
			uParam0->f_3 = 35.7505f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 8:
			*uParam0 = { 148.2868f, -1270.5695f, 28.2252f };
			uParam0->f_3 = 208.4685f;
			uParam0->f_4 = func_305(2, 1);
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 20);
			MISC::SET_BIT(&(uParam0->f_9), 7);
			num = 1;
			break;
	
		case 9:
			*uParam0 = { 1459.5085f, -1380.45f, 78.3259f };
			uParam0->f_3 = 99.6211f;
			uParam0->f_4 = -186537451;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 10:
			*uParam0 = { -1518.947f, -1387.8655f, -0.5134f };
			uParam0->f_3 = 98.3867f;
			uParam0->f_4 = -1030275036;
			num = 1;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			break;
	
		case 11:
			*uParam0 = { 353.0926f, 3577.5925f, 32.351f };
			uParam0->f_3 = 16.6205f;
			uParam0->f_4 = 970356638;
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
			uParam0->f_4 = -1008861746;
			MISC::SET_BIT(&(uParam0->f_9), 10);
			MISC::SET_BIT(&(uParam0->f_9), 11);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			MISC::SET_BIT(&(uParam0->f_9), 12);
			num = 1;
			break;
	
		case 35:
			*uParam0 = { -51.23f, 3111.9f, 24.95f };
			uParam0->f_3 = 46.78f;
			uParam0->f_4 = 356391690;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 36:
			*uParam0 = { -55.7984f, -1096.5856f, 25.4223f };
			uParam0->f_3 = 308.0596f;
			uParam0->f_4 = 850565707;
			uParam0->f_10 = 126;
			uParam0->f_11 = 126;
			MISC::SET_BIT(&(uParam0->f_9), 9);
			MISC::SET_BIT(&(uParam0->f_9), 13);
			num = 1;
			break;
	
		case 37:
			*uParam0 = { -2892.93f, 3192.37f, 11.66f };
			uParam0->f_3 = -132.35f;
			uParam0->f_4 = -1673356438;
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
			uParam0->f_4 = 1394036463;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 39:
			*uParam0 = { 1751.4397f, 3322.643f, 42.1855f };
			uParam0->f_3 = 268.134f;
			uParam0->f_4 = 771711535;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			num = 1;
			break;
	
		case 41:
			*uParam0 = { 1377.1045f, -2076.2f, 52f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = -1323100960;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 40:
			*uParam0 = { 1380.42f, -2072.7695f, 51.7607f };
			uParam0->f_3 = 37.5f;
			uParam0->f_4 = 1917016601;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 42:
			*uParam0 = { 1359.3892f, 3618.4407f, 33.8907f };
			uParam0->f_3 = 108.2337f;
			uParam0->f_4 = -823509173;
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 43:
			*uParam0 = { 693.1154f, -1018.1551f, 21.6387f };
			uParam0->f_3 = 177.6454f;
			uParam0->f_4 = 1938952078;
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 8);
			num = 1;
			break;
	
		case 44:
			*uParam0 = { -73.6963f, 495.124f, 143.5226f };
			uParam0->f_3 = 155.5994f;
			uParam0->f_4 = 338562499;
			num = 1;
			break;
	
		case 45:
			*uParam0 = { -67.6314f, 891.8266f, 234.5348f };
			uParam0->f_3 = 294.993f;
			uParam0->f_4 = 384071873;
			num = 1;
			break;
	
		case 46:
			*uParam0 = { 533.9048f, -169.2469f, 53.7005f };
			uParam0->f_3 = 1.2998f;
			uParam0->f_4 = 1531094468;
			num = 1;
			break;
	
		case 47:
			*uParam0 = { -726.8914f, -408.6952f, 34.0416f };
			uParam0->f_3 = 267.7392f;
			uParam0->f_4 = 1123216662;
			num = 1;
			break;
	
		case 48:
			*uParam0 = { -1321.5186f, 261.3993f, 61.5709f };
			uParam0->f_3 = 350.7697f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 49:
			*uParam0 = { -1267.9991f, 451.6463f, 93.7071f };
			uParam0->f_3 = 48.9311f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 50:
			*uParam0 = { -1062.0762f, -226.7637f, 37.157f };
			uParam0->f_3 = 234.2767f;
			uParam0->f_4 = -1670998136;
			num = 1;
			break;
	
		case 51:
			*uParam0 = { 68.16914f, -1558.9581f, 29.469042f };
			uParam0->f_3 = 49.905754f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 52:
			*uParam0 = { 589.4399f, 2736.7078f, 42.033165f };
			uParam0->f_3 = -175.7105f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 53:
			*uParam0 = { -488.77396f, -344.57205f, 34.363564f };
			uParam0->f_3 = 82.4042f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 54:
			*uParam0 = { 288.88083f, -585.47284f, 43.15428f };
			uParam0->f_3 = -20.807068f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 55:
			*uParam0 = { 304.82938f, -1383.6742f, 31.677443f };
			uParam0->f_3 = -41.116028f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 56:
			*uParam0 = { 1126.1943f, -1481.486f, 34.701603f };
			uParam0->f_3 = -91.43369f;
			uParam0->f_4 = -1776615689;
			uParam0->f_12 = 2;
			MISC::SET_BIT(&(uParam0->f_9), 26);
			num = 1;
			break;
	
		case 57:
			*uParam0 = { -1598.36f, 5252.84f, 0f };
			uParam0->f_3 = 28.14f;
			uParam0->f_4 = 771711535;
			uParam0->f_13 = 308;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 58:
			*uParam0 = { -1602.62f, 5260.37f, 0.86f };
			uParam0->f_3 = 25.32f;
			uParam0->f_4 = 1033245328;
			uParam0->f_13 = 404;
			MISC::SET_BIT(&(uParam0->f_9), 2);
			MISC::SET_BIT(&(uParam0->f_9), 22);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 59:
			*uParam0 = { 2116.571f, 4763.2793f, 40.1596f };
			uParam0->f_3 = 198.723f;
			uParam0->f_4 = 1126868326;
			num = 1;
			break;
	
		case 60:
			*uParam0 = { 1133.21f, 120.2f, 80.9f };
			uParam0->f_3 = 134.4f;
		
			if (func_176())
				uParam0->f_4 = -613725916;
			else
				uParam0->f_4 = -150975354;
		
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
		
			if (func_176())
				uParam0->f_4 = -613725916;
			else
				uParam0->f_4 = -150975354;
		
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
			uParam0->f_4 = -1269889662;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 63:
			*uParam0 = { 3870.75f, 4464.67f, 0f };
			uParam0->f_3 = 0f;
			uParam0->f_4 = -1066334226;
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
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 65:
			*uParam0 = { 643.2823f, 3014.152f, 42.2733f };
			uParam0->f_3 = 128.0554f;
			uParam0->f_4 = -326143852;
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 66:
			*uParam0 = { 38.9368f, 850.8677f, 196.3f };
			uParam0->f_3 = 311.6813f;
			uParam0->f_4 = -901163259;
			MISC::SET_BIT(&(uParam0->f_9), 30);
			MISC::SET_BIT(&(uParam0->f_9), 23);
			MISC::SET_BIT(&(uParam0->f_9), 6);
			num = 1;
			break;
	
		case 67:
			*uParam0 = { 1333.8752f, 4262.2256f, 30.78f };
			uParam0->f_3 = 262.5293f;
			uParam0->f_4 = -901163259;
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
			if (uParam0->f_4 == 165154707 || uParam0->f_4 == 1824333165 || uParam0->f_4 == 621481054 || uParam0->f_4 == -1214505995 || uParam0->f_4 == 1981688531 || uParam0->f_4 == -1214293858)
			{
				*uParam0 = { 1678.8f, 3229.6f, 41.8f };
				uParam0->f_3 = 106.0906f;
			}
		}
	
		if (!func_178(Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, false))
			*uParam0 = { Global_113648.f_32751.f_1864[uParam0->f_14 /*3*/] };
	
		if (Global_113648.f_32751.f_1934[uParam0->f_14] != -1f)
			uParam0->f_3 = Global_113648.f_32751.f_1934[uParam0->f_14];
	}

	if (IS_BIT_SET(uParam0->f_9, 19))
	{
		if (!func_178(Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[1 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[1 /*4*/][uParam0->f_12];
		}
	}
	else if (IS_BIT_SET(uParam0->f_9, 20))
	{
		if (!func_178(Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, false))
		{
			*uParam0 = { Global_113648.f_2365.f_539.f_3588[0 /*10*/][uParam0->f_12 /*3*/] };
			uParam0->f_3 = Global_113648.f_2365.f_539.f_3609[0 /*4*/][uParam0->f_12];
		}
	}

	return num;
}

Hash func_305(int iParam0, int iParam1) // Position - 0x1B54C Hash - 0x3C1119CD ^0x1010ECAE
{
	Hash num;

	if (func_102(iParam0))
	{
		num.f_11 = 12;
		num.f_31 = 49;
		num.f_81 = 2;
		func_164(iParam0, &num, iParam1);
		return num;
	}
	else
	{
		iParam0 != 145;
	}

	return 0;
}

void func_306(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6) // Position - 0x1B58E Hash - 0xE596DE1C ^0xAEF9731A
{
	if (func_304(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 10))
		{
			func_311(iParam0);
			func_310(uParam1, &Global_113648.f_32751.f_69[Global_77348.f_555[0 /*21*/].f_14 /*78*/]);
		
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
			func_307(iParam0, true);
		}
	}

	return;
}

void func_307(int iParam0, BOOL bParam1) // Position - 0x1B687 Hash - 0xF45B4890 ^0xF45B4890
{
	if (iParam0 == -1)
		return;

	if (bParam1)
	{
		if (!func_309(iParam0, 0))
		{
			func_308(iParam0, 1, false);
			func_308(iParam0, 2, false);
			func_308(iParam0, 3, false);
			func_308(iParam0, 4, false);
			func_308(iParam0, 0, true);
			Global_77348[iParam0] = 1;
		}
	}
	else
	{
		func_308(iParam0, 0, false);
	}

	return;
}

void func_308(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1B6E4 Hash - 0xDEF0CB8B ^0x421AAE37
{
	if (iParam0 == -1)
		return;

	if (bParam2)
		MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);

	return;
}

BOOL func_309(int iParam0, int iParam1) // Position - 0x1B71F Hash - 0x9EA0654 ^0x9EA0654
{
	if (iParam0 == -1)
		return false;

	return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}

void func_310(var uParam0, var uParam1) // Position - 0x1B73F Hash - 0x8EF4EDA5 ^0xC1247BD8
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

void func_311(int iParam0) // Position - 0x1B80B Hash - 0x64A608A0 ^0xF3C031DC
{
	if (iParam0 == -1)
		return;

	if (func_304(&Global_77348.f_555[0 /*21*/], iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_77348.f_139[iParam0]))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_77348.f_139[iParam0], true, true);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&Global_77348.f_139[iParam0]);
			Global_77348.f_139[iParam0] = 0;
		}
	
		if (IS_BIT_SET(Global_77348.f_555[0 /*21*/].f_9, 13))
			func_307(iParam0, false);
	}

	return;
}

int func_312(Vehicle veParam0) // Position - 0x1B882 Hash - 0x593067C2 ^0x2918B7DD
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

void func_313(Vehicle veParam0, var uParam1) // Position - 0x1B8E5 Hash - 0x5E84B52A ^0xEF20F807
{
	int i;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		func_317(uParam1);
		uParam1->f_66 = ENTITY::GET_ENTITY_MODEL(veParam0);
		TEXT_LABEL_ASSIGN_STRING(&(uParam1->f_1), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam0), 16);
		*uParam1 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam0);
		VEHICLE::GET_VEHICLE_COLOURS(veParam0, &(uParam1->f_5), &(uParam1->f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam0, &(uParam1->f_7), &(uParam1->f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam0, &(uParam1->f_62), &(uParam1->f_63), &(uParam1->f_64));
		uParam1->f_65 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam0);
		uParam1->f_67 = VEHICLE::GET_VEHICLE_LIVERY(veParam0);
		uParam1->f_69 = unk_0xA79BA8CFAAB28820(veParam0);
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
	
		if (uParam1->f_65 == -1 && !func_316(uParam1->f_66))
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
	
		func_315(&veParam0, &(uParam1->f_9), &(uParam1->f_59));
	
		for (i = 0; i <= 11; i = i + 1)
		{
			if (VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, i + 1))
				MISC::SET_BIT(&(uParam1->f_77), func_314(i + 1));
		}
	
		if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(veParam0, 0))
			MISC::SET_BIT(&(uParam1->f_77), 11);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 11);
	
		if (DECORATOR::DECOR_EXIST_ON(veParam0, "IgnoredByQuickSave") && unk_0x8FA309E9ECEE409A(veParam0, "IgnoredByQuickSave"))
			MISC::SET_BIT(&(uParam1->f_77), 27);
		else
			MISC::CLEAR_BIT(&(uParam1->f_77), 27);
	}

	return;
}

int func_314(int iParam0) // Position - 0x1BB90 Hash - 0xEE599357 ^0xEE599357
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

int func_315(var uParam0, var uParam1, var uParam2) // Position - 0x1BC40 Hash - 0x4455160E ^0x8E5B3F28
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

BOOL func_316(int iParam0) // Position - 0x1BE33 Hash - 0x5000025C ^0x5000025C
{
	switch (iParam0)
	{
		case -1775728740:
		case -998177792:
			return true;
	
		default:
		
	}

	return false;
}

void func_317(var uParam0) // Position - 0x1BE53 Hash - 0xB95AF921 ^0x4DC7C61C
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

void func_318(int iParam0) // Position - 0x1BF02 Hash - 0x6203AFCC ^0x6203AFCC
{
	iParam0 != 24 && iParam0 != 25;
	func_311(iParam0);
	func_307(iParam0, false);
	return;
}

int func_319(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6, int iParam7) // Position - 0x1BF29 Hash - 0x5868D879 ^0xAF39B616
{
	int plateIndex;
	var plateText;
	Hash unk;
	int unk2;
	int unk3;
	BOOL model;
	var unk4;
	int unk5;

	if (func_102(iParam1))
	{
		model.f_11 = 12;
		model.f_31 = 49;
		model.f_81 = 2;
		func_164(iParam1, &model, iParam7);
	
		if (model == 0)
			return 1;
	
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			ENTITY::GET_ENTITY_MODEL(*uParam0) != model;
			return 1;
		}
	
		if (iParam1 == 0 && !Global_113648.f_2365.f_539.f_4316 && Global_113648.f_9087.f_99.f_58[131])
			Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/] = 0;
	
		if (Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/] == model)
		{
			STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
		
			if (STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/], fParam2, fParam5, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				model.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
			
				for (i = 0; i < 12; i = i + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, i + 1, !Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_11[i]);
				}
			
				if (Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_24);
			
				if (func_367(&plateText, &plateIndex))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_27));
				
					if (Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_89);
			
				if (Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_90);
			
				func_360(uParam0, &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
			
				if (iParam1 == 2)
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == -1435919434)
						func_358(uParam0);
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[0 /*295*/][iParam1 /*98*/]);
			
				func_357(*uParam0, iParam1);
				return 1;
			}
		}
		else if (Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/] == model)
		{
			STREAMING::REQUEST_MODEL(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
		
			if (STREAMING::HAS_MODEL_LOADED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]))
			{
				*uParam0 = VEHICLE::CREATE_VEHICLE(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/], fParam2, fParam5, false, false, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				model.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_7, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
			
				for (j = 0; j < 12; j = j + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, j + 1, !Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_11[j]);
				}
			
				if (Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_24);
			
				if (func_367(&plateText, &plateIndex))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_27));
				
					if (Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 >= 0 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_84, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_85, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_93, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_94, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_89);
			
				if (Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_90);
			
				func_360(uParam0, &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/].f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
			
				if (iParam1 == 2)
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == -1435919434)
						func_358(uParam0);
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_113648.f_2365.f_539.f_2407[1 /*295*/][iParam1 /*98*/]);
			
				func_357(*uParam0, iParam1);
				return 1;
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(model);
		
			if (STREAMING::HAS_MODEL_LOADED(model))
			{
				flag = true;
				*uParam0 = VEHICLE::CREATE_VEHICLE(model, fParam2, fParam5, true, true, false);
				VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*uParam0, 1084227584);
				VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(*uParam0, false);
				VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(*uParam0, false);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
				TEXT_LABEL_ASSIGN_STRING(&plateText2, VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0), 16);
				ENTITY::SET_ENTITY_HEALTH(*uParam0, 1250, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(*uParam0, 1250f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(*uParam0, 1250f);
				model.f_3 = 1250;
				VEHICLE::SET_VEHICLE_COLOURS(*uParam0, model.f_5, model.f_6);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*uParam0, model.f_7, model.f_8);
				VEHICLE::SET_VEHICLE_DIRT_LEVEL(*uParam0, model.f_2);
			
				for (k = 0; k < 12; k = k + 1)
				{
					VEHICLE::SET_VEHICLE_EXTRA(*uParam0, k + 1, !model.f_11[k]);
				}
			
				if (model.f_24)
					VEHICLE::SET_CONVERTIBLE_ROOF(*uParam0, model.f_24);
			
				if (func_367(&plateText, &plateIndex))
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText);
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, plateIndex);
				}
				else
				{
					VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &(model.f_27));
				
					if (model.f_26 >= 0 && model.f_26 < VEHICLE::GET_NUMBER_OF_VEHICLE_NUMBER_PLATES())
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam0, model.f_26);
				}
			
				VEHICLE::SET_VEHICLE_TYRE_SMOKE_COLOR(*uParam0, model.f_84, model.f_85, model.f_86);
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(*uParam0, model.f_88);
				VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, model.f_87);
				VEHICLE::SET_VEHICLE_NEON_COLOUR(*uParam0, model.f_93, model.f_94, model.f_95);
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 2, IS_BIT_SET(model.f_92, 28));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 3, IS_BIT_SET(model.f_92, 29));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 0, IS_BIT_SET(model.f_92, 30));
				VEHICLE::SET_VEHICLE_NEON_ENABLED(*uParam0, 1, IS_BIT_SET(model.f_92, 31));
			
				if (VEHICLE::GET_VEHICLE_LIVERY_COUNT(*uParam0) > 1 && model.f_89 >= 0)
					VEHICLE::SET_VEHICLE_LIVERY(*uParam0, model.f_89);
			
				if (model.f_90 > -1)
					if (!VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
						if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(*uParam0)))
							if (model.f_90 == 6)
								VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, model.f_90);
						else
							VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, model.f_90);
			
				func_360(uParam0, &(model.f_31), &(model.f_81));
				VEHICLE::SET_VEHICLE_ENVEFF_SCALE(*uParam0, model.f_96);
			
				if (iParam1 == 1)
				{
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == -2140431165 && !Global_113648.f_9087.f_99.f_58[118])
					{
						VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*uParam0, &plateText2);
						flag = false;
					}
				}
				else if (iParam1 == 2)
				{
					if (ENTITY::GET_ENTITY_MODEL(*uParam0) == -1435919434)
						func_358(uParam0);
				}
				else if (iParam1 == 0 && !Global_113648.f_2365.f_539.f_4316 && Global_113648.f_9087.f_99.f_58[131] && ENTITY::GET_ENTITY_MODEL(*uParam0) == -1008861746)
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 6, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 14, 7, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 11, 2, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 2, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 7, 5, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 0, 0, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 3, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 1, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 4, 3, false);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 12, 2, false);
					VEHICLE::TOGGLE_VEHICLE_MOD(*uParam0, 22, true);
					VEHICLE::SET_VEHICLE_WHEEL_TYPE(*uParam0, 2);
					VEHICLE::SET_VEHICLE_MOD(*uParam0, 23, 11, false);
					VEHICLE::SET_VEHICLE_WINDOW_TINT(*uParam0, 2);
					Global_113648.f_2365.f_539.f_4316 = 1;
					func_320(iParam1, uParam0, 0, true);
				}
			
				if (bParam6)
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(model);
			
				if (flag)
					func_357(*uParam0, iParam1);
			
				return 1;
			}
		}
	}

	return 0;
}

void func_320(int iParam0, var uParam1, int iParam2, BOOL bParam3) // Position - 0x1CD4C Hash - 0x4F5E7A4A ^0x5D08ABBE
{
	var unk;
	Entity trailer;
	int convertibleRoofState;
	int num;
	int paintType;
	var unk2;
	var pearlescentColor;

	if (func_102(iParam0) && ENTITY::DOES_ENTITY_EXIST(*uParam1) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam1, false))
	{
		if (iParam2 > Global_113648.f_2365.f_539.f_2407)
			return;
	
		if (iParam2 == 0)
		{
		}
		else if (iParam2 == 1)
		{
		}
		else if (iParam2 == 2)
		{
		}
		else if (iParam2 == 3)
		{
			func_294(*uParam1, iParam0);
		}
	
		if (VEHICLE::GET_NUM_MOD_KITS(*uParam1) != 0)
			VEHICLE::SET_VEHICLE_MOD_KIT(*uParam1, 0);
	
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/] = ENTITY::GET_ENTITY_MODEL(*uParam1);
	
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(*uParam1, &trailer))
			Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_1 = ENTITY::GET_ENTITY_MODEL(trailer);
	
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(*uParam1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_3 = ENTITY::GET_ENTITY_HEALTH(*uParam1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[0] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[1] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 2);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[2] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 3);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[3] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 4);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[4] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 5);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[5] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 6);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[6] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 7);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[7] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 8);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[8] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 9);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[9] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 10);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[10] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 11);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_11[11] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(*uParam1, 12);
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(*uParam1, false))
		{
			convertibleRoofState = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(*uParam1);
		
			if (convertibleRoofState == 0 || convertibleRoofState == 5)
				Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 1;
			else
				Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
		else
		{
			Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_24 = 0;
		}
	
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
		TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(*uParam1), 16);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*uParam1);
		VEHICLE::GET_VEHICLE_COLOURS(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6));
		VEHICLE::GET_VEHICLE_EXTRA_COLOURS(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_8));
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86));
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(*uParam1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(*uParam1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_89 = VEHICLE::GET_VEHICLE_LIVERY(*uParam1);
		Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90 = unk_0xA79BA8CFAAB28820(*uParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(*uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_93), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_94), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_95));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 2))
			MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
		else
			MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 3))
			MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
		else
			MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 0))
			MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
		else
			MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(*uParam1, 1))
			MISC::SET_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
		else
			MISC::CLEAR_BIT(&(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_92), 31);
	
		Global_113648.f_2365.f_539.f_4317[iParam0] = 10;
	
		if (VEHICLE::GET_VEHICLE_MOD_KIT(*uParam1) >= 0 && func_324(*uParam1, false, &unk))
		{
			func_315(uParam1, &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31), &(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_81));
		
			if (bParam3)
			{
				Global_113648.f_20120[iParam0 /*43*/].f_40 = 1;
				Global_113648.f_20120[iParam0 /*43*/] = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/];
				Global_113648.f_20120[iParam0 /*43*/].f_3 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_87;
				Global_113648.f_20120[iParam0 /*43*/].f_4 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_84;
				Global_113648.f_20120[iParam0 /*43*/].f_5 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_85;
				Global_113648.f_20120[iParam0 /*43*/].f_6 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_86;
				Global_113648.f_20120[iParam0 /*43*/].f_10 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_90;
				Global_113648.f_20120[iParam0 /*43*/].f_16 = !Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_88;
				Global_113648.f_20120[iParam0 /*43*/].f_19 = { Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_27 };
				Global_113648.f_20120[iParam0 /*43*/].f_23 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_26;
				Global_113648.f_20120[iParam0 /*43*/].f_7 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[11];
				Global_113648.f_20120[iParam0 /*43*/].f_8 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[12];
				Global_113648.f_20120[iParam0 /*43*/].f_9 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[23];
				Global_113648.f_20120[iParam0 /*43*/].f_11 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[4];
				Global_113648.f_20120[iParam0 /*43*/].f_12 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[15];
				Global_113648.f_20120[iParam0 /*43*/].f_13 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[16];
				Global_113648.f_20120[iParam0 /*43*/].f_14 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[14];
				Global_113648.f_20120[iParam0 /*43*/].f_15 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[22];
				Global_113648.f_20120[iParam0 /*43*/].f_18 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[20];
				Global_113648.f_20120[iParam0 /*43*/].f_17 = Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_31[18];
				Global_113648.f_20120[iParam0 /*43*/].f_24 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 11) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_25 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 12) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_26 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 4) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_27 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 23) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_28 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 14) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_29 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 16) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_30 = VEHICLE::GET_NUM_VEHICLE_MODS(*uParam1, 15) + 1;
				Global_113648.f_20120[iParam0 /*43*/].f_32 = VEHICLE::GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(*uParam1);
				Global_113648.f_20120[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN(*uParam1);
				Global_113648.f_20120[iParam0 /*43*/].f_33[1] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 0);
				Global_113648.f_20120[iParam0 /*43*/].f_33[2] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 1);
				Global_113648.f_20120[iParam0 /*43*/].f_33[3] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 2);
				Global_113648.f_20120[iParam0 /*43*/].f_33[4] = VEHICLE::GET_VEHICLE_MOD_MODIFIER_VALUE(*uParam1, 14, 3);
				Global_113648.f_20120[iParam0 /*43*/].f_39 = VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(*uParam1);
				Global_113648.f_20120[iParam0 /*43*/].f_31 = func_323(*uParam1);
				Global_113648.f_20120[iParam0 /*43*/].f_33[0] = AUDIO::GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(*uParam1);
				VEHICLE::GET_VEHICLE_MOD_COLOR_1(*uParam1, &paintType, &unk2, &pearlescentColor);
			
				if (paintType == 0)
					num = 0;
				else if (paintType == 1)
					num = 1;
				else if (paintType == 3)
					num = 2;
				else if (paintType == 4)
					num = 3;
				else if (paintType == 5)
					num = 4;
				else
					num = -1;
			
				func_321(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_5, Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_7, num, true, &(Global_113648.f_20120[iParam0 /*43*/].f_1));
				VEHICLE::GET_VEHICLE_MOD_COLOR_2(*uParam1, &paintType, &unk2);
			
				if (paintType == 0)
					num = 0;
				else if (paintType == 1)
					num = 1;
				else if (paintType == 3)
					num = 2;
				else if (paintType == 4)
					num = 3;
				else if (paintType == 5)
					num = 4;
				else
					num = -1;
			
				func_321(Global_113648.f_2365.f_539.f_2407[iParam2 /*295*/][iParam0 /*98*/].f_6, -1, num, false, &(Global_113648.f_20120[iParam0 /*43*/].f_2));
			}
		}
	}

	return;
}

int func_321(int iParam0, int iParam1, int iParam2, BOOL bParam3, var uParam4) // Position - 0x1D960 Hash - 0x926DDB09 ^0x926DDB09
{
	int i;
	int num;
	var unk;
	int unk2;
	int unk3;

	for (i = 0; func_322(i, &unk, &num, &num2, &num3); i = i + 1)
	{
		if (iParam0 == num2 && !bParam3 || iParam1 == num3 && iParam2 == num || iParam2 == -1 || iParam2 == 255)
		{
			*uParam4 = i;
			return 1;
		}
	}

	iParam0 = -1;
	iParam1 = -1;
	*uParam4 = -1;
	return 0;
}

BOOL func_322(int iParam0, char* sParam1, var uParam2, var uParam3, var uParam4) // Position - 0x1D9D3 Hash - 0xFAD9B0FF ^0x87D7E6EB
{
	*uParam2 = -1;
	*uParam3 = -1;
	*uParam4 = -1;

	switch (iParam0)
	{
		case 0:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Brushed Black Steel"), 16);
			*uParam2 = 3;
			*uParam3 = 118;
			*uParam4 = 3;
			break;
	
		case 1:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Carbon Black"), 16);
			*uParam2 = 0;
			*uParam3 = 147;
			*uParam4 = 4;
			break;
	
		case 2:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Chocolate Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 96;
			*uParam4 = 0;
			break;
	
		case 3:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Schafter Purple"), 16);
			*uParam2 = 0;
			*uParam3 = 71;
			*uParam4 = 145;
			break;
	
		case 4:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Hot Pink"), 16);
			*uParam2 = 0;
			*uParam3 = 135;
			*uParam4 = 135;
			break;
	
		case 5:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Formula Red"), 16);
			*uParam2 = 0;
			*uParam3 = 29;
			*uParam4 = 28;
			break;
	
		case 6:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 64;
			*uParam4 = 68;
			break;
	
		case 7:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Ultra Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 70;
			*uParam4 = 0;
			break;
	
		case 8:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Racing Green"), 16);
			*uParam2 = 1;
			*uParam3 = 50;
			*uParam4 = 0;
			break;
	
		case 9:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Lime Green"), 16);
			*uParam2 = 2;
			*uParam3 = 55;
			*uParam4 = 0;
			break;
	
		case 10:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Race Yellow"), 16);
			*uParam2 = 1;
			*uParam3 = 89;
			*uParam4 = 0;
			break;
	
		case 11:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Orange"), 16);
			*uParam2 = 1;
			*uParam3 = 38;
			*uParam4 = 0;
			break;
	
		case 12:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Gold"), 16);
			*uParam2 = 0;
			*uParam3 = 37;
			*uParam4 = 106;
			break;
	
		case 13:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 4;
			*uParam4 = 111;
			break;
	
		case 14:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Chrome"), 16);
			*uParam2 = 4;
			*uParam3 = 120;
			*uParam4 = 0;
			break;
	
		case 15:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Ice White"), 16);
			*uParam2 = 1;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 16:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Black"), 16);
			*uParam2 = 0;
			*uParam3 = 0;
			*uParam4 = 10;
			break;
	
		case 17:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Graphite"), 16);
			*uParam2 = 0;
			*uParam3 = 1;
			*uParam4 = 5;
			break;
	
		case 18:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Anthracite Black"), 16);
			*uParam2 = 0;
			*uParam3 = 11;
			*uParam4 = 2;
			break;
	
		case 19:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Black Steel"), 16);
			*uParam2 = 0;
			*uParam3 = 2;
			*uParam4 = 5;
			break;
	
		case 20:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Steel"), 16);
			*uParam2 = 0;
			*uParam3 = 3;
			*uParam4 = 6;
			break;
	
		case 21:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bluish Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 5;
			*uParam4 = 111;
			break;
	
		case 22:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Rolled Steel"), 16);
			*uParam2 = 0;
			*uParam3 = 6;
			*uParam4 = 4;
			break;
	
		case 23:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Shadow Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 7;
			*uParam4 = 5;
			break;
	
		case 24:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Stone Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 8;
			*uParam4 = 5;
			break;
	
		case 25:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 9;
			*uParam4 = 7;
			break;
	
		case 26:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cast Iron Silver"), 16);
			*uParam2 = 0;
			*uParam3 = 10;
			*uParam4 = 7;
			break;
	
		case 27:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Red"), 16);
			*uParam2 = 0;
			*uParam3 = 27;
			*uParam4 = 36;
			break;
	
		case 28:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Torino Red"), 16);
			*uParam2 = 0;
			*uParam3 = 28;
			*uParam4 = 28;
			break;
	
		case 29:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Lava Red"), 16);
			*uParam2 = 0;
			*uParam3 = 150;
			*uParam4 = 42;
			break;
	
		case 30:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Blaze Red"), 16);
			*uParam2 = 0;
			*uParam3 = 30;
			*uParam4 = 36;
			break;
	
		case 31:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Grace Red"), 16);
			*uParam2 = 0;
			*uParam3 = 31;
			*uParam4 = 27;
			break;
	
		case 32:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Garnet Red"), 16);
			*uParam2 = 0;
			*uParam3 = 32;
			*uParam4 = 25;
			break;
	
		case 33:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sunset Red"), 16);
			*uParam2 = 0;
			*uParam3 = 33;
			*uParam4 = 47;
			break;
	
		case 34:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cabernet Red"), 16);
			*uParam2 = 0;
			*uParam3 = 34;
			*uParam4 = 47;
			break;
	
		case 35:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Wine Red"), 16);
			*uParam2 = 0;
			*uParam3 = 143;
			*uParam4 = 31;
			break;
	
		case 36:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Candy Red"), 16);
			*uParam2 = 0;
			*uParam3 = 35;
			*uParam4 = 25;
			break;
	
		case 37:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Pfister Pink"), 16);
			*uParam2 = 0;
			*uParam3 = 137;
			*uParam4 = 3;
			break;
	
		case 38:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Salmon Pink"), 16);
			*uParam2 = 0;
			*uParam3 = 136;
			*uParam4 = 5;
			break;
	
		case 39:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sunrise Orange"), 16);
			*uParam2 = 0;
			*uParam3 = 36;
			*uParam4 = 26;
			break;
	
		case 40:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Orange"), 16);
			*uParam2 = 0;
			*uParam3 = 38;
			*uParam4 = 37;
			break;
	
		case 41:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Orange"), 16);
			*uParam2 = 0;
			*uParam3 = 138;
			*uParam4 = 89;
			break;
	
		case 42:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bronze"), 16);
			*uParam2 = 0;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 43:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Yellow"), 16);
			*uParam2 = 0;
			*uParam3 = 88;
			*uParam4 = 88;
			break;
	
		case 44:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Race Yellow"), 16);
			*uParam2 = 0;
			*uParam3 = 89;
			*uParam4 = 88;
			break;
	
		case 45:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dew Yellow"), 16);
			*uParam2 = 0;
			*uParam3 = 91;
			*uParam4 = 91;
			break;
	
		case 46:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Green"), 16);
			*uParam2 = 0;
			*uParam3 = 49;
			*uParam4 = 52;
			break;
	
		case 47:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Racing Green"), 16);
			*uParam2 = 0;
			*uParam3 = 50;
			*uParam4 = 53;
			break;
	
		case 48:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sea Green"), 16);
			*uParam2 = 0;
			*uParam3 = 51;
			*uParam4 = 66;
			break;
	
		case 49:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Olive Green"), 16);
			*uParam2 = 0;
			*uParam3 = 52;
			*uParam4 = 59;
			break;
	
		case 50:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Green"), 16);
			*uParam2 = 0;
			*uParam3 = 53;
			*uParam4 = 59;
			break;
	
		case 51:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Gasoline Green"), 16);
			*uParam2 = 0;
			*uParam3 = 54;
			*uParam4 = 60;
			break;
	
		case 52:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Lime Green"), 16);
			*uParam2 = 0;
			*uParam3 = 92;
			*uParam4 = 92;
			break;
	
		case 53:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 141;
			*uParam4 = 73;
			break;
	
		case 54:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Galaxy Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 61;
			*uParam4 = 63;
			break;
	
		case 55:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 62;
			*uParam4 = 68;
			break;
	
		case 56:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Saxon Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 63;
			*uParam4 = 87;
			break;
	
		case 57:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Mariner Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 65;
			*uParam4 = 87;
			break;
	
		case 58:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Harbor Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 66;
			*uParam4 = 60;
			break;
	
		case 59:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Diamond Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 67;
			*uParam4 = 67;
			break;
	
		case 60:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Surf Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 68;
			*uParam4 = 68;
			break;
	
		case 61:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Nautical Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 69;
			*uParam4 = 74;
			break;
	
		case 62:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Racing Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 73;
			*uParam4 = 73;
			break;
	
		case 63:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Ultra Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 70;
			*uParam4 = 70;
			break;
	
		case 64:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Light Blue"), 16);
			*uParam2 = 0;
			*uParam3 = 74;
			*uParam4 = 74;
			break;
	
		case 65:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Chocolate Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 96;
			*uParam4 = 95;
			break;
	
		case 66:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bison Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 101;
			*uParam4 = 95;
			break;
	
		case 67:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Creek Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 95;
			*uParam4 = 97;
			break;
	
		case 68:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Feltzer Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 94;
			*uParam4 = 104;
			break;
	
		case 69:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Maple Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 97;
			*uParam4 = 98;
			break;
	
		case 70:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Beechwood Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 103;
			*uParam4 = 104;
			break;
	
		case 71:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sienna Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 104;
			*uParam4 = 104;
			break;
	
		case 72:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Saddle Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 98;
			*uParam4 = 95;
			break;
	
		case 73:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Moss Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 100;
			*uParam4 = 100;
			break;
	
		case 74:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Woodbeech Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 102;
			*uParam4 = 105;
			break;
	
		case 75:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Straw Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 99;
			*uParam4 = 106;
			break;
	
		case 76:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sandy Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 105;
			*uParam4 = 105;
			break;
	
		case 77:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bleached Brown"), 16);
			*uParam2 = 0;
			*uParam3 = 106;
			*uParam4 = 106;
			break;
	
		case 78:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Spinnaker Purple"), 16);
			*uParam2 = 0;
			*uParam3 = 72;
			*uParam4 = 64;
			break;
	
		case 79:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Purple"), 16);
			*uParam2 = 0;
			*uParam3 = 146;
			*uParam4 = 145;
			break;
	
		case 80:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Purple"), 16);
			*uParam2 = 0;
			*uParam3 = 145;
			*uParam4 = 74;
			break;
	
		case 81:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cream"), 16);
			*uParam2 = 0;
			*uParam3 = 107;
			*uParam4 = 107;
			break;
	
		case 82:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Ice White"), 16);
			*uParam2 = 0;
			*uParam3 = 111;
			*uParam4 = 0;
			break;
	
		case 83:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Frost White"), 16);
			*uParam2 = 0;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 84:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Black"), 16);
			*uParam2 = 1;
			*uParam3 = 0;
			*uParam4 = 0;
			break;
	
		case 85:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Carbon Black"), 16);
			*uParam2 = 1;
			*uParam3 = 147;
			*uParam4 = 0;
			break;
	
		case 86:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Graphite"), 16);
			*uParam2 = 1;
			*uParam3 = 1;
			*uParam4 = 0;
			break;
	
		case 87:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Anthracite Black"), 16);
			*uParam2 = 1;
			*uParam3 = 11;
			*uParam4 = 0;
			break;
	
		case 88:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Black Steel"), 16);
			*uParam2 = 1;
			*uParam3 = 2;
			*uParam4 = 0;
			break;
	
		case 89:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Steel"), 16);
			*uParam2 = 1;
			*uParam3 = 3;
			*uParam4 = 2;
			break;
	
		case 90:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 4;
			*uParam4 = 4;
			break;
	
		case 91:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bluish Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 5;
			*uParam4 = 5;
			break;
	
		case 92:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Rolled Steel"), 16);
			*uParam2 = 1;
			*uParam3 = 6;
			*uParam4 = 0;
			break;
	
		case 93:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Shadow Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 7;
			*uParam4 = 0;
			break;
	
		case 94:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Stone Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 8;
			*uParam4 = 0;
			break;
	
		case 95:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 9;
			*uParam4 = 0;
			break;
	
		case 96:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cast Iron Silver"), 16);
			*uParam2 = 1;
			*uParam3 = 10;
			*uParam4 = 0;
			break;
	
		case 97:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Red"), 16);
			*uParam2 = 1;
			*uParam3 = 27;
			*uParam4 = 0;
			break;
	
		case 98:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Torino Red"), 16);
			*uParam2 = 1;
			*uParam3 = 28;
			*uParam4 = 0;
			break;
	
		case 99:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Formula Red"), 16);
			*uParam2 = 1;
			*uParam3 = 29;
			*uParam4 = 0;
			break;
	
		case 100:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Lava Red"), 16);
			*uParam2 = 1;
			*uParam3 = 150;
			*uParam4 = 0;
			break;
	
		case 101:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Blaze Red"), 16);
			*uParam2 = 1;
			*uParam3 = 30;
			*uParam4 = 0;
			break;
	
		case 102:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Grace Red"), 16);
			*uParam2 = 1;
			*uParam3 = 31;
			*uParam4 = 0;
			break;
	
		case 103:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Garnet Red"), 16);
			*uParam2 = 1;
			*uParam3 = 32;
			*uParam4 = 0;
			break;
	
		case 104:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sunset Red"), 16);
			*uParam2 = 1;
			*uParam3 = 33;
			*uParam4 = 0;
			break;
	
		case 105:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cabernet Red"), 16);
			*uParam2 = 1;
			*uParam3 = 34;
			*uParam4 = 0;
			break;
	
		case 106:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Wine Red"), 16);
			*uParam2 = 1;
			*uParam3 = 143;
			*uParam4 = 0;
			break;
	
		case 107:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Candy Red"), 16);
			*uParam2 = 1;
			*uParam3 = 35;
			*uParam4 = 0;
			break;
	
		case 108:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Hot Pink"), 16);
			*uParam2 = 1;
			*uParam3 = 135;
			*uParam4 = 0;
			break;
	
		case 109:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Pfister Pink"), 16);
			*uParam2 = 1;
			*uParam3 = 137;
			*uParam4 = 0;
			break;
	
		case 110:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Salmon Pink"), 16);
			*uParam2 = 1;
			*uParam3 = 136;
			*uParam4 = 0;
			break;
	
		case 111:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sunrise Orange"), 16);
			*uParam2 = 1;
			*uParam3 = 36;
			*uParam4 = 0;
			break;
	
		case 112:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Orange"), 16);
			*uParam2 = 1;
			*uParam3 = 138;
			*uParam4 = 0;
			break;
	
		case 113:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Gold"), 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 99;
			break;
	
		case 114:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bronze"), 16);
			*uParam2 = 1;
			*uParam3 = 90;
			*uParam4 = 102;
			break;
	
		case 115:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Yellow"), 16);
			*uParam2 = 1;
			*uParam3 = 88;
			*uParam4 = 0;
			break;
	
		case 116:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dew Yellow"), 16);
			*uParam2 = 1;
			*uParam3 = 91;
			*uParam4 = 0;
			break;
	
		case 117:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Green"), 16);
			*uParam2 = 1;
			*uParam3 = 49;
			*uParam4 = 0;
			break;
	
		case 118:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sea Green"), 16);
			*uParam2 = 1;
			*uParam3 = 51;
			*uParam4 = 0;
			break;
	
		case 119:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Olive Green"), 16);
			*uParam2 = 1;
			*uParam3 = 52;
			*uParam4 = 0;
			break;
	
		case 120:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Green"), 16);
			*uParam2 = 1;
			*uParam3 = 53;
			*uParam4 = 0;
			break;
	
		case 121:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Gasoline Green"), 16);
			*uParam2 = 1;
			*uParam3 = 54;
			*uParam4 = 0;
			break;
	
		case 122:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Lime Green"), 16);
			*uParam2 = 1;
			*uParam3 = 92;
			*uParam4 = 0;
			break;
	
		case 123:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 141;
			*uParam4 = 0;
			break;
	
		case 124:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Galaxy Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 61;
			*uParam4 = 0;
			break;
	
		case 125:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 62;
			*uParam4 = 0;
			break;
	
		case 126:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Saxon Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 63;
			*uParam4 = 0;
			break;
	
		case 127:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 64;
			*uParam4 = 0;
			break;
	
		case 128:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Mariner Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 65;
			*uParam4 = 0;
			break;
	
		case 129:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Harbor Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 66;
			*uParam4 = 0;
			break;
	
		case 130:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Diamond Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 67;
			*uParam4 = 0;
			break;
	
		case 131:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Surf Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 68;
			*uParam4 = 0;
			break;
	
		case 132:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Nautical Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 69;
			*uParam4 = 0;
			break;
	
		case 133:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Racing Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 73;
			*uParam4 = 0;
			break;
	
		case 134:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Light Blue"), 16);
			*uParam2 = 1;
			*uParam3 = 74;
			*uParam4 = 0;
			break;
	
		case 135:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bison Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 101;
			*uParam4 = 0;
			break;
	
		case 136:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Creek Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 95;
			*uParam4 = 0;
			break;
	
		case 137:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Feltzer Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 94;
			*uParam4 = 0;
			break;
	
		case 138:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Maple Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 97;
			*uParam4 = 0;
			break;
	
		case 139:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Beechwood Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 103;
			*uParam4 = 0;
			break;
	
		case 140:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sienna Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 104;
			*uParam4 = 0;
			break;
	
		case 141:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Saddle Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 98;
			*uParam4 = 0;
			break;
	
		case 142:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Moss Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 100;
			*uParam4 = 0;
			break;
	
		case 143:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Woodbeech Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 102;
			*uParam4 = 0;
			break;
	
		case 144:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Straw Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 99;
			*uParam4 = 0;
			break;
	
		case 145:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Sandy Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 105;
			*uParam4 = 0;
			break;
	
		case 146:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bleached Brown"), 16);
			*uParam2 = 1;
			*uParam3 = 106;
			*uParam4 = 0;
			break;
	
		case 147:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Schafter Purple"), 16);
			*uParam2 = 1;
			*uParam3 = 71;
			*uParam4 = 0;
			break;
	
		case 148:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Spinnaker Purple"), 16);
			*uParam2 = 1;
			*uParam3 = 72;
			*uParam4 = 0;
			break;
	
		case 149:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Purple"), 16);
			*uParam2 = 1;
			*uParam3 = 142;
			*uParam4 = 0;
			break;
	
		case 150:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Bright Purple"), 16);
			*uParam2 = 1;
			*uParam3 = 145;
			*uParam4 = 0;
			break;
	
		case 151:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Cream"), 16);
			*uParam2 = 1;
			*uParam3 = 107;
			*uParam4 = 0;
			break;
	
		case 152:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Frost White"), 16);
			*uParam2 = 1;
			*uParam3 = 112;
			*uParam4 = 0;
			break;
	
		case 153:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Black"), 16);
			*uParam2 = 2;
			*uParam3 = 12;
			*uParam4 = 0;
			break;
	
		case 154:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Gray"), 16);
			*uParam2 = 2;
			*uParam3 = 13;
			*uParam4 = 0;
			break;
	
		case 155:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Light Gray"), 16);
			*uParam2 = 2;
			*uParam3 = 14;
			*uParam4 = 0;
			break;
	
		case 156:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Ice White"), 16);
			*uParam2 = 2;
			*uParam3 = 131;
			*uParam4 = 0;
			break;
	
		case 157:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Blue"), 16);
			*uParam2 = 2;
			*uParam3 = 83;
			*uParam4 = 0;
			break;
	
		case 158:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Blue"), 16);
			*uParam2 = 2;
			*uParam3 = 82;
			*uParam4 = 0;
			break;
	
		case 159:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Blue"), 16);
			*uParam2 = 2;
			*uParam3 = 84;
			*uParam4 = 0;
			break;
	
		case 160:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Midnight Purple"), 16);
			*uParam2 = 2;
			*uParam3 = 149;
			*uParam4 = 0;
			break;
	
		case 161:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Schafter Purple"), 16);
			*uParam2 = 2;
			*uParam3 = 148;
			*uParam4 = 0;
			break;
	
		case 162:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Red"), 16);
			*uParam2 = 2;
			*uParam3 = 39;
			*uParam4 = 0;
			break;
	
		case 163:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Red"), 16);
			*uParam2 = 2;
			*uParam3 = 40;
			*uParam4 = 0;
			break;
	
		case 164:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Orange"), 16);
			*uParam2 = 2;
			*uParam3 = 41;
			*uParam4 = 0;
			break;
	
		case 165:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Yellow"), 16);
			*uParam2 = 2;
			*uParam3 = 42;
			*uParam4 = 0;
			break;
	
		case 166:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Green"), 16);
			*uParam2 = 2;
			*uParam3 = 128;
			*uParam4 = 0;
			break;
	
		case 167:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Forest Green"), 16);
			*uParam2 = 2;
			*uParam3 = 151;
			*uParam4 = 0;
			break;
	
		case 168:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Foliage Green"), 16);
			*uParam2 = 2;
			*uParam3 = 155;
			*uParam4 = 0;
			break;
	
		case 169:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Olive Drab"), 16);
			*uParam2 = 2;
			*uParam3 = 152;
			*uParam4 = 0;
			break;
	
		case 170:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Dark Earth"), 16);
			*uParam2 = 2;
			*uParam3 = 153;
			*uParam4 = 0;
			break;
	
		case 171:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Desert Tan"), 16);
			*uParam2 = 2;
			*uParam3 = 154;
			*uParam4 = 0;
			break;
	
		case 172:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Brushed Steel"), 16);
			*uParam2 = 3;
			*uParam3 = 117;
			*uParam4 = 18;
			break;
	
		case 173:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Brushed Aluminum"), 16);
			*uParam2 = 3;
			*uParam3 = 119;
			*uParam4 = 5;
			break;
	
		case 174:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Pure Gold"), 16);
			*uParam2 = 3;
			*uParam3 = 158;
			*uParam4 = 160;
			break;
	
		case 175:
			TEXT_LABEL_ASSIGN_STRING(sParam1, _("Brushed Gold"), 16);
			*uParam2 = 3;
			*uParam3 = 159;
			*uParam4 = 160;
			break;
	}

	return *uParam2 != -1;
}

float func_323(Vehicle veParam0) // Position - 0x1EEC5 Hash - 0xCD7B116B ^0x2AAA08A7
{
	int num;
	int num2;
	int num3;
	int num4;
	int value;
	int value2;
	float num5;

	num = 100000;
	num2 = 65000;
	num3 = 50000;
	num4 = 20000;
	value = 20000;
	value2 = value;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) && VEHICLE::GET_VEHICLE_MOD_KIT(veParam0) >= 0)
		if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 3)
			value2 = num;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 1)
			value2 = num2;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 2)
			value2 = num3;
		else if (VEHICLE::GET_VEHICLE_MOD_KIT_TYPE(veParam0) == 0)
			if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(veParam0)))
				value2 = num4;
			else
				value2 = value;

	num5 = SYSTEM::TO_FLOAT(value2) / SYSTEM::TO_FLOAT(value);
	return num5;
}

BOOL func_324(Vehicle veParam0, BOOL bParam1, var uParam2) // Position - 0x1EF75 Hash - 0x9C8FEC9C ^0xC4B520B
{
	Hash entityModel;
	BOOL flag;

	*uParam2 = 0;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	if (!STREAMING::IS_MODEL_A_VEHICLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
		return false;

	entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);

	if (!func_355(entityModel, bParam1, uParam2) && !func_354(PLAYER::PLAYER_ID()) && !func_335(veParam0))
		return false;

	if (func_354(PLAYER::PLAYER_ID()))
		if (func_333(entityModel))
			return true;
		else
			return false;

	flag = false;

	if (func_332(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(entityModel) || VEHICLE::IS_THIS_MODEL_A_PLANE(entityModel))
		flag = true;

	if (VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_329(veParam0) && !flag && !(func_328(ENTITY::GET_ENTITY_MODEL(veParam0)) && func_325(PLAYER::PLAYER_ID())))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case -801550069:
			case 679453769:
			case 1909700336:
			case 1721676810:
			case 840387324:
			case -715746948:
				*uParam2 = 16;
				break;
		
			default:
				*uParam2 = 2;
				break;
		}
	
		return false;
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_298(veParam0) && ENTITY::GET_ENTITY_MODEL(veParam0) != 873639469 && ENTITY::GET_ENTITY_MODEL(veParam0) != -1177863319)
		{
			*uParam2 = 2;
			return false;
		}
	}

	return true;
}

BOOL func_325(Player plParam0) // Position - 0x1F0E3 Hash - 0xB2831D42 ^0x9EF71D87
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 11;

	return false;
}

int func_326(int iParam0) // Position - 0x1F12A Hash - 0xEE599357 ^0xEE599357
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
	
		case 81:
			return 5;
	
		case 82:
			return 6;
	
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
			return 7;
	
		case 88:
			return 8;
	
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
	
		case 101:
			return 10;
	
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
	
		case 117:
			return 12;
	
		case 122:
			return 13;
	
		case 123:
			return 14;
	
		case 124:
			return 15;
	
		case 125:
			return 16;
	
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
			return 17;
	
		case 145:
			return 18;
	
		case 146:
			return 19;
	
		case 147:
			return 20;
	
		case 148:
			return 21;
	
		case 149:
		case 151:
		case 153:
		case 152:
		case 150:
			return 22;
	
		case 154:
			return 23;
	
		case 155:
		case 156:
		case 157:
		case 158:
			return 24;
	
		case 159:
			return 25;
	
		case 160:
			return 26;
	
		case 161:
			return 27;
	}

	return -1;
}

BOOL func_327(Player plParam0, BOOL bParam1, BOOL bParam2) // Position - 0x1F5DE Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_328(Hash hParam0) // Position - 0x1F63E Hash - 0x60BBC37B ^0x536B228
{
	if (hParam0 == 1945374990 || hParam0 == 1653666139 || hParam0 == 219613597 || hParam0 == -1988428699)
		return true;

	return false;
}

BOOL func_329(Vehicle veParam0) // Position - 0x1F680 Hash - 0xBF677DFF ^0xBA899DB9
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -32236122:
		case 177270108:
		case 387748548:
		case 1502869817:
		case -1881846085:
		case 668439077:
		case -1146969353:
		case 1542143200:
		case -579747861:
		case -1694081890:
		case -2042350822:
			return true;
	
		case -801550069:
		case 679453769:
		case 1909700336:
		case 1721676810:
		case 840387324:
		case -715746948:
			if (func_331(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case -1254331310:
		case -907477130:
			return true;
	
		case -1576586413:
			if (func_330(PLAYER::PLAYER_ID()))
				return true;
			break;
	
		case -1627077503:
			return true;
	}

	return false;
}

BOOL func_330(Player plParam0) // Position - 0x1F748 Hash - 0xB3E29AC5 ^0xCD327632
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 26;

	return false;
}

BOOL func_331(Player plParam0) // Position - 0x1F78F Hash - 0x796267EB ^0x2600D5E0
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 13;

	return false;
}

BOOL func_332(Player plParam0) // Position - 0x1F7D6 Hash - 0x6456149A ^0x8AF4F61A
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 7;

	return false;
}

BOOL func_333(Hash hParam0) // Position - 0x1F81C Hash - 0x5678AC24 ^0xC1FF6D5C
{
	if (hParam0 == 2069146067)
		return false;

	if (!func_334(PLAYER::PLAYER_ID()) && hParam0 != 1489874736 && hParam0 != -2118308144)
		return false;

	return true;
}

BOOL func_334(Player plParam0) // Position - 0x1F85D Hash - 0xB97D25CA ^0xB97D25CA
{
	if (plParam0 != func_95())
		return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_307, 2);

	return false;
}

BOOL func_335(Vehicle veParam0) // Position - 0x1F883 Hash - 0x244AAB53 ^0xD7B9CA6C
{
	if (func_353(PLAYER::PLAYER_ID()) || func_352(PLAYER::PLAYER_ID()))
		if (func_336(veParam0))
			return true;

	return false;
}

BOOL func_336(Vehicle veParam0) // Position - 0x1F8B2 Hash - 0x7165A02 ^0xF083AF0
{
	if (!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || ENTITY::IS_ENTITY_DEAD(veParam0, false))
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0)))
		return false;

	if (func_340(veParam0, false))
		return true;

	if (func_339(PLAYER::PLAYER_ID()) && !func_333(ENTITY::GET_ENTITY_MODEL(veParam0)) || VEHICLE::IS_VEHICLE_MODEL(veParam0, 1489874736))
		return false;

	if (DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))
		if (DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle") == NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))
			if (!func_337(veParam0))
				return true;

	return false;
}

BOOL func_337(Vehicle veParam0) // Position - 0x1F963 Hash - 0x3A8B7756 ^0x27EBD90E
{
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam0);
	
		if (VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_329(veParam0) || func_338(entityModel))
			return true;
	
		switch (entityModel)
		{
			case -1045911276:
			case -420911112:
			case 1945374990:
			case 1653666139:
			case 219613597:
				return true;
		}
	}

	return false;
}

BOOL func_338(Hash hParam0) // Position - 0x1F9DA Hash - 0x5000025C ^0x5000025C
{
	switch (hParam0)
	{
		case 904750859:
		case -1050465301:
		case -2052737935:
		case -305727417:
		case -1661854193:
		case -1987130134:
		case -233098306:
		case 121658888:
		case 444171386:
		case 682434785:
			return true;
	
		default:
		
	}

	return false;
}

BOOL func_339(Player plParam0) // Position - 0x1FA2A Hash - 0x6AB0796B ^0xE2E7422C
{
	if (plParam0 == func_95())
		return false;

	if (func_354(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10 == plParam0)
		return true;

	return false;
}

BOOL func_340(Vehicle veParam0, BOOL bParam1) // Position - 0x1FA63 Hash - 0x75473DE8 ^0xBB71153A
{
	switch (ENTITY::GET_ENTITY_MODEL(veParam0))
	{
		case -2096818938:
		case -1860900134:
			if (func_342(ENTITY::GET_ENTITY_MODEL(veParam0), 0))
				if (Global_2793044.f_304 == veParam0)
					return true;
				else if (func_341(veParam0) != -1 && !bParam1)
					return true;
			break;
	}

	return false;
}

int func_341(Vehicle veParam0) // Position - 0x1FABE Hash - 0x1C915FC3 ^0xABD5C4F6
{
	int i;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		for (i = 0; i < 32; i = i + 1)
		{
			if (Global_2672505.f_220[i] == veParam0)
				return i;
		}
	}

	return -1;
}

BOOL func_342(Hash hParam0, int iParam1) // Position - 0x1FAF7 Hash - 0xD8F8F78 ^0xD8F8F78
{
	if (iParam1 == 0)
		if (func_351(hParam0, 0))
			return true;

	switch (hParam0)
	{
		case -2119578145:
		case -682211828:
		case 349605904:
		case 525509695:
		case -1150599089:
		case 523724515:
			return func_350();
	
		case -1685021548:
			if (Global_262145.f_14734)
				return func_349();
			break;
	
		case 464687292:
		case 1531094468:
		case 1762279763:
			if (Global_262145.f_14735)
				return func_349();
			break;
	
		case 16646064:
			if (Global_262145.f_14733)
				return func_349();
			break;
	
		case -310465116:
			if (Global_262145.f_14736)
				return func_349();
			break;
	
		case 729783779:
			if (Global_262145.f_14738)
				return func_349();
			break;
	
		case 970598228:
		case -1041692462:
			return func_348();
	
		case -1045541610:
			if (Global_262145.f_19141)
				return func_347();
			break;
	
		case -239841468:
			if (Global_262145.f_19143)
				return func_347();
			break;
	
		case 627535535:
			if (Global_262145.f_19147)
				return func_347();
			break;
	
		case -566387422:
			if (Global_262145.f_19144)
				return func_347();
			break;
	
		case 1034187331:
			if (Global_262145.f_19151)
				return func_347();
			break;
	
		case -2048333973:
			if (Global_262145.f_19149)
				return func_347();
			break;
	
		case 1886268224:
			if (Global_262145.f_19154)
				return func_347();
			break;
	
		case -2096818938:
			if (Global_262145.f_21100)
				return func_346();
			break;
	
		case -1860900134:
			if (Global_262145.f_21101)
				return func_346();
			break;
	
		case -667151410:
		case -589178377:
			return func_345();
	
		case 75131841:
			if (func_345() || func_344())
				return true;
			break;
	
		case -2096690334:
			return func_345();
	
		case 931280609:
			return func_345();
	
		case 741090084:
			return func_345();
	
		case 80636076:
			return func_345();
	
		case -915704871:
			return func_345();
	
		case 444994115:
			return func_345();
	
		case 1637620610:
			return func_345();
	
		case -755532233:
			return func_345();
	
		case -27326686:
			return func_345();
	
		case -1812949672:
			return func_345();
	
		case -1374500452:
			return func_345();
	
		case 1009171724:
		case 2139203625:
		case 668439077:
		case -2061049099:
		case 628003514:
		case 1721676810:
		case -1146969353:
		case -801550069:
		case -688189648:
		case 540101442:
		case -1924800695:
		case -1890996696:
		case -1694081890:
		case 373261600:
		case 1537277726:
		case 840387324:
		case 1542143200:
		case 679453769:
		case -1375060657:
		case -1106120762:
		case -1744505657:
		case 2038858402:
		case -2042350822:
		case 1742022738:
		case 1239571361:
		case -715746948:
		case -579747861:
		case 1909700336:
		case -1293924613:
		case -1478704292:
			return func_345();
	
		case 1026149675:
			if (Global_262145.f_29332)
				return func_344();
			break;
	
		case 722226637:
			if (Global_262145.f_29682)
				return func_344();
			break;
	
		case -2124201592:
			if (Global_262145.f_29331)
				return func_344();
			break;
	
		case 1830407356:
			if (Global_262145.f_29681)
				return func_344();
			break;
	
		case 1871995513:
			if (Global_262145.f_29680)
				return func_344();
			break;
	}

	switch (hParam0)
	{
		case -893984159:
			if (*Global_262145.f_33139)
				return func_343();
			break;
	
		case 1644055914:
			if (*Global_262145.f_33138)
				return func_343();
			break;
	
		case 1429622905:
			if (*Global_262145.f_33131)
				return func_343();
			break;
	
		case 1104234922:
			if (*Global_262145.f_33140)
				return func_343();
			break;
	}

	return false;
}

BOOL func_343() // Position - 0x1FF76 Hash - 0x11DC3931 ^0x876AD057
{
	return DLC::IS_DLC_PRESENT(1199590110);
}

BOOL func_344() // Position - 0x1FF87 Hash - 0x11DC3931 ^0xAC641598
{
	return DLC::IS_DLC_PRESENT(1815791016);
}

BOOL func_345() // Position - 0x1FF98 Hash - 0x11DC3931 ^0x3EBF9FF6
{
	return DLC::IS_DLC_PRESENT(1927191088);
}

BOOL func_346() // Position - 0x1FFA9 Hash - 0x11DC3931 ^0x309FFA9B
{
	return DLC::IS_DLC_PRESENT(2067165443);
}

BOOL func_347() // Position - 0x1FFBA Hash - 0x11DC3931 ^0xAE129F72
{
	return DLC::IS_DLC_PRESENT(-957277403);
}

BOOL func_348() // Position - 0x1FFCB Hash - 0x11DC3931 ^0x88C0156C
{
	return DLC::IS_DLC_PRESENT(210122941);
}

BOOL func_349() // Position - 0x1FFDC Hash - 0x11DC3931 ^0xDC89318D
{
	return DLC::IS_DLC_PRESENT(-1894522408);
}

BOOL func_350() // Position - 0x1FFED Hash - 0x11DC3931 ^0x2629586D
{
	return DLC::IS_DLC_PRESENT(1630677557);
}

BOOL func_351(Hash hParam0, int iParam1) // Position - 0x1FFFE Hash - 0xFE274898 ^0xFE274898
{
	switch (hParam0)
	{
		case -1790546981:
		case -1013450936:
		case -1361687965:
		case 1896491931:
		case -2040426790:
		case 2006667053:
			return true;
	
		case 274946574:
		case -994371320:
		case 15214558:
		case -1356880839:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 223258115:
			if (!Global_262145.f_14734)
				return false;
			else
				return true;
			break;
	
		case -1797613329:
			if (!Global_262145.f_14735)
				return false;
			else
				return true;
			break;
	
		case -899509638:
			if (!Global_262145.f_14733)
				return false;
			else
				return true;
			break;
	
		case -1126264336:
			if (!Global_262145.f_14736)
				return false;
			else
				return true;
			break;
	
		case 1119641113:
			if (!Global_262145.f_14738)
				return false;
			else
				return true;
			break;
	
		case -2039755226:
			if (!Global_262145.f_14737)
				return false;
			else
				return true;
			break;
	
		case -295689028:
		case 633712403:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -2022483795:
			if (Global_262145.f_19141)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1790834270:
			if (Global_262145.f_19143)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -757735410:
			if (Global_262145.f_19147)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 196747873:
			if (Global_262145.f_19144)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1093792632:
			if (Global_262145.f_19151)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -482719877:
			if (Global_262145.f_19149)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1074745671:
			if (Global_262145.f_19154)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case 1356124575:
			if (Global_262145.f_21100)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -1924433270:
			if (Global_262145.f_21101)
			{
				if (iParam1 & 1 != 0)
					return false;
			
				return true;
			}
		
			return false;
	
		case -2061049099:
		case 373261600:
		case 1742022738:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 628003514:
		case 1537277726:
		case 1239571361:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1009171724:
		case -1924800695:
		case -1744505657:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -27326686:
		case -1812949672:
		case -1374500452:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1721676810:
		case 840387324:
		case -715746948:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case -688189648:
		case -1375060657:
		case -1293924613:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 668439077:
		case -1694081890:
		case -2042350822:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1802742206:
		case -2122646867:
		case 67753863:
			if (iParam1 & 1 != 0)
				return false;
		
			return true;
	
		case 1717532765:
		case 1107404867:
		case -913589546:
			return true;
	}

	return false;
}

BOOL func_352(Player plParam0) // Position - 0x203DF Hash - 0x928E8225 ^0x2EBE7B19
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[plParam0 /*466*/].f_321.f_10 != func_95())
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 5;

	return false;
}

BOOL func_353(Player plParam0) // Position - 0x2043E Hash - 0x928E8225 ^0x2EBE7B19
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1 && Global_2657589[plParam0 /*466*/].f_321.f_10 != func_95())
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 8;

	return false;
}

BOOL func_354(Player plParam0) // Position - 0x2049E Hash - 0x3B8D0381 ^0x717F7A8F
{
	if (plParam0 != func_95())
		if (func_327(plParam0, true, true))
			if (Global_2657589[plParam0 /*466*/].f_321.f_7 != -1)
				return func_326(Global_2657589[plParam0 /*466*/].f_321.f_7) == 9;

	return false;
}

BOOL func_355(Hash hParam0, BOOL bParam1, var uParam2) // Position - 0x204E5 Hash - 0xFC54E650 ^0xC1B9BFB6
{
	BOOL flag;

	if (!bParam1)
	{
		if (hParam0 == 2046537925 || hParam0 == -1536924937 || hParam0 == -1779120616 || hParam0 == -1627000575 || hParam0 == 1912215274 || hParam0 == -1973172295 || hParam0 == 1127131465 || hParam0 == -1647941228 || hParam0 == 353883353 || hParam0 == -34623805 || hParam0 == 456714581 || hParam0 == -1205689942 || hParam0 == -1683328900 || hParam0 == 741586030 || hParam0 == 1922257928)
		{
			*uParam2 = 1;
			return false;
		}
	}

	if (hParam0 == 1171614426 || hParam0 == 1938952078 || hParam0 == -956048545 || hParam0 == 469291905 || hParam0 == -845979911 || hParam0 == 1682114128 || hParam0 == 1283517198 || hParam0 == 1560980623)
	{
		*uParam2 = 2;
		return false;
	}

	if (hParam0 == -1346687836 || hParam0 == -1776615689 || hParam0 == -810318068 || hParam0 == 728614474)
	{
		*uParam2 = 2;
		return false;
	}

	if (hParam0 == -186537451 || hParam0 == 1131912276 || hParam0 == 448402357 || hParam0 == -836512833)
	{
		*uParam2 = 2;
		return false;
	}

	if (hParam0 == 1147287684 || hParam0 == 1491375716 || hParam0 == -537896628 || hParam0 == 321739290 || hParam0 == 1127861609 || hParam0 == -1233807380 || hParam0 == -400295096 || hParam0 == 1641462412 || hParam0 == -2076478498 || hParam0 == 1783355638 || hParam0 == -2033222435 || hParam0 == -884690486 || hParam0 == -1961627517 || hParam0 == 2072156101 || hParam0 == 1739845664 || hParam0 == 2053223216 || hParam0 == 2112052861 || hParam0 == 771711535 || hParam0 == -1241712818 || hParam0 == 534258863)
	{
		*uParam2 = 2;
		return false;
	}

	flag = false;

	if (func_332(PLAYER::PLAYER_ID()) && VEHICLE::IS_THIS_MODEL_A_HELI(hParam0) || VEHICLE::IS_THIS_MODEL_A_PLANE(hParam0))
		flag = true;

	if (!VEHICLE::IS_THIS_MODEL_A_CAR(hParam0) && !VEHICLE::IS_THIS_MODEL_A_BIKE(hParam0) && hParam0 != -2128233223 && hParam0 != -48031959 && hParam0 != -1269889662 && hParam0 != -440768424 && hParam0 != -1590337689 && hParam0 != 6774487 && hParam0 != 1502869817 && hParam0 != -1881846085 && hParam0 != 916547552 && hParam0 != 301304410 && hParam0 != 298565713 && !flag)
	{
		*uParam2 = 2;
		return false;
	}

	if (hParam0 == -845961253)
	{
		*uParam2 = 2;
		return false;
	}

	if (hParam0 == -1860900134 || hParam0 == -2096818938 || hParam0 == -114627507)
	{
		*uParam2 = 2;
		return false;
	}

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (func_356(hParam0))
		{
			*uParam2 = 2;
			return false;
		}
	}

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (hParam0 == -1860900134 || hParam0 == 2071877360)
			*uParam2 = 2;

	return true;
}

BOOL func_356(Hash hParam0) // Position - 0x20931 Hash - 0xE48228D0 ^0xE48228D0
{
	switch (hParam0)
	{
		case -1323100960:
		case -442313018:
		case 1491375716:
			return true;
	}

	return false;
}

void func_357(Vehicle veParam0, int iParam1) // Position - 0x2095A Hash - 0xC9E7D414 ^0xEA9F91AF
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

void func_358(var uParam0) // Position - 0x209DC Hash - 0x167E37B3 ^0xC40E80D0
{
	if (!func_359(*uParam0))
		VEHICLE::SET_VEHICLE_EXTRA(*uParam0, 5, !Global_113648.f_9087.f_99.f_58[119]);

	return;
}

BOOL func_359(Vehicle veParam0) // Position - 0x20A07 Hash - 0xC454F84 ^0x86F852A
{
	return VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam0, 5);
}

int func_360(var uParam0, var uParam1, var uParam2) // Position - 0x20A16 Hash - 0x5C9EC0F7 ^0xAEA0C62F
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
				else if (func_365(*uParam0, modType, uParam1->[i] - 1))
				{
				}
				else
				{
					VEHICLE::SET_VEHICLE_MOD(*uParam0, modType, uParam1->[i] - 1, false);
				}
			}
		}
	}

	if (func_351(ENTITY::GET_ENTITY_MODEL(*uParam0), 1) && VEHICLE::GET_VEHICLE_MOD(*uParam0, 24) != func_363(*uParam0, uParam1->[38] - 1))
		VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, func_363(*uParam0, uParam1->[38] - 1), false);

	func_362(uParam0);

	if (func_361(*uParam0))
	{
		VEHICLE::SET_VEHICLE_STRONG(*uParam0, true);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(*uParam0, true);
	}

	return 1;
}

BOOL func_361(Vehicle veParam0) // Position - 0x20BF0 Hash - 0x4E83583B ^0x79F702A8
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

void func_362(var uParam0) // Position - 0x20CCC Hash - 0x2806D680 ^0xEA5BC67
{
	switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
	{
		case -1700874274:
			if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
				VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
			else
				VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
			break;
	
		case -1045911276:
			VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
			break;
	
		default:
			break;
	}

	return;
}

int func_363(Vehicle veParam0, int iParam1) // Position - 0x20D23 Hash - 0xFE64EDC0 ^0x4504AA95
{
	int value;
	int value2;
	float num;
	int num2;

	if (ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		switch (ENTITY::GET_ENTITY_MODEL(veParam0))
		{
			case -1797613329:
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
		
			case -2039755226:
				return 3;
		}
	
		value = func_364(veParam0, 38) + 1;
		value2 = func_364(veParam0, 24) + 1;
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

int func_364(Vehicle veParam0, int iParam1) // Position - 0x20E0C Hash - 0x51ABE917 ^0xA6E9215C
{
	int i;

	if (STREAMING::IS_MODEL_VALID(Global_152535) && VEHICLE::IS_VEHICLE_MODEL(veParam0, Global_152535) && Global_152536 == iParam1)
		return Global_152537;

	for (i = VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) - 1; i >= 0 && func_365(veParam0, iParam1, i); i = i - 1)
	{
	}

	return i;
}

BOOL func_365(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x20E6E Hash - 0x206208ED ^0x4B76267C
{
	if (!func_366() && PED::APPLY_PED_BLOOD_SPECIFIC(veParam0, iParam1, iParam2))
		return true;

	return false;
}

BOOL func_366() // Position - 0x20E92 Hash - 0x98B7EFDD ^0x98B7EFDD
{
	return false;
}

BOOL func_367(var uParam0, var uParam1) // Position - 0x20E9B Hash - 0x78C9D9BE ^0x325585F9
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else if (Global_113648.f_20120.f_261)
	{
		*uParam0 = { Global_113648.f_20120.f_267 };
		*uParam1 = Global_113648.f_20120.f_271;
		return true;
	}

	return false;
}

void func_368(float fParam0, float fParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, float fParam9, float fParam10, var uParam11, var uParam12, var uParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x20EDC Hash - 0xC60077FB ^0xC60077FB
{
	func_369(fParam0, fParam3, fParam6, fParam7, fParam10, uParam11, bParam14, bParam15, bParam16, bParam17, bParam18);
	return;
}

void func_369(Vector3 vParam0, var uParam1, var uParam2, Vector3 vParam3, var uParam4, var uParam5, float fParam6, Vector3 vParam7, var uParam8, var uParam9, float fParam10, float fParam11, var uParam12, var uParam13, BOOL bParam14, BOOL bParam15, BOOL bParam16, BOOL bParam17, BOOL bParam18) // Position - 0x20F06 Hash - 0xFD52326E ^0x1AB3EC4D
{
	Vehicle playersLastVehicle;
	BOOL flag;
	BOOL flag2;
	int num;
	var out1;
	float unk;
	var unk2;
	Hash out2;
	Ped unk3;
	int unk4;

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
				func_374(playersLastVehicle);
		
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(playersLastVehicle, vParam0, vParam3, fParam6, false, true, 0))
			{
				flag = true;
			}
			else
			{
				entityCoords = { ENTITY::GET_ENTITY_COORDS(playersLastVehicle, true) };
			
				if (entityCoords.f_2 > vParam0.f_2 && entityCoords.f_2 < vParam3.f_2 || entityCoords.f_2 > vParam3.f_2 && entityCoords.f_2 < vParam0.f_2)
					if (func_371(playersLastVehicle, vParam0, vParam3, fParam6))
						flag = true;
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
			{
				if (VEHICLE::IS_VEHICLE_MODEL(playersLastVehicle, -956048545))
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
				if (func_301(playersLastVehicle, func_100(), true))
					flag = false;
		
			if (flag)
			{
				if (!func_370(fParam11))
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
					
						if (entityModel == -1403128555 || entityModel == 117401876 || entityModel == -1237253773 || entityModel == -845961253)
							fParam11 = { fParam11 * { 1.1f, 1.1f, 1.1f } };
						else if (entityModel == 1663218586 || entityModel == -498054846)
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

BOOL func_370(float fParam0, var uParam1, var uParam2) // Position - 0x212FC Hash - 0x16E871AD ^0x10C54C39
{
	if (fParam0 == 0f && fParam0.f_1 == 0f && fParam0.f_2 == 0f)
		return true;

	return false;
}

BOOL func_371(Vehicle veParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, float fParam7) // Position - 0x21326 Hash - 0x54559876 ^0xE4811CB1
{
	float num;
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	var unk6;
	float unk7;
	float unk8;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		uParam1.f_2 = uParam4.f_2;
		num = { func_373(uParam1 - uParam4) };
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
	
		if (func_372(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk9) || func_372(unk18[0 /*3*/], unk18[1 /*3*/], unk9, unk15) || func_372(unk18[0 /*3*/], unk18[1 /*3*/], unk12, unk15) || func_372(unk18[0 /*3*/], unk18[1 /*3*/], unk6, unk12) || func_372(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk9) || func_372(unk18[1 /*3*/], unk18[3 /*3*/], unk9, unk15) || func_372(unk18[1 /*3*/], unk18[3 /*3*/], unk12, unk15) || func_372(unk18[1 /*3*/], unk18[3 /*3*/], unk6, unk12) || func_372(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk9) || func_372(unk18[3 /*3*/], unk18[2 /*3*/], unk9, unk15) || func_372(unk18[3 /*3*/], unk18[2 /*3*/], unk12, unk15) || func_372(unk18[3 /*3*/], unk18[2 /*3*/], unk6, unk12) || func_372(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk9) || func_372(unk18[2 /*3*/], unk18[0 /*3*/], unk9, unk15) || func_372(unk18[2 /*3*/], unk18[0 /*3*/], unk12, unk15) || func_372(unk18[2 /*3*/], unk18[0 /*3*/], unk6, unk12))
			return true;
	}

	return false;
}

BOOL func_372(float fParam0, var uParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, float fParam9, var uParam10, var uParam11) // Position - 0x2161C Hash - 0x3823BB3 ^0xD0DFB98E
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

Vector3 func_373(float fParam0, var uParam1, var uParam2) // Position - 0x216D0 Hash - 0xFB6A39D2 ^0x80C9C759
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

void func_374(Vehicle veParam0) // Position - 0x2170F Hash - 0xE71E0364 ^0xCB8720DC
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

Vector3 func_375() // Position - 0x21774 Hash - 0x21158019 ^0x21158019
{
	return 2.55f, 5.665f, 2.55f;
}

BOOL func_376(Vehicle veParam0, int iParam1, int iParam2) // Position - 0x2178B Hash - 0xC883A039 ^0x6D45755E
{
	int i;

	if (!ENTITY::DOES_ENTITY_EXIST(veParam0))
		return false;

	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
		return false;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
			if (Global_98012[i] == veParam0)
				if (iParam1 == 145 || iParam1 == Global_98022[i])
					if (iParam2 == 0 || ENTITY::GET_ENTITY_MODEL(veParam0) == func_305(iParam1, iParam2))
						return true;
	}

	return false;
}

void func_377(int iParam0, int iParam1) // Position - 0x21819 Hash - 0xBF4A23B8 ^0xB5698C5
{
	int i;

	for (i = 0; i < 9; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_98012[i]))
		{
			if (iParam0 == 145 || Global_98022[i] == iParam0)
			{
				if (iParam1 == 0 || ENTITY::GET_ENTITY_MODEL(Global_98012[i]) == func_305(iParam0, iParam1))
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

void func_378(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x218B7 Hash - 0x6C235EE0 ^0x9E57F206
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
				TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
			else
				TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
	}

	return;
}

void func_379(int iParam0) // Position - 0x21952 Hash - 0xDF00B6A0 ^0xDF00B6A0
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

void func_380() // Position - 0x21976 Hash - 0xC5D9B7DB ^0xC2E593A7
{
	int num;

	num = func_103(PLAYER::PLAYER_PED_ID());
	func_381(PLAYER::PLAYER_PED_ID(), &Global_100085[num /*98*/], &Global_100388[num /*3*/], &Global_100398[num], &Global_100380[num], &Global_4542590[num]);
	return;
}

void func_381(Ped pedParam0, Hash hParam1, var uParam2, float fParam3, int iParam4, var uParam5) // Position - 0x219B8 Hash - 0x24AB0AB8 ^0x58BE4227
{
	BOOL flag;
	Vehicle vehiclePedIsIn;
	int num;
	Vector3 entityCoords;
	Vector3 unk;

	flag = false;
	vehiclePedIsIn = 0;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
			{
				vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
				*iParam4 = 2;
			}
			else
			{
				num = func_103(pedParam0);
			
				if (!ENTITY::IS_ENTITY_DEAD(Global_100384[num], false))
				{
					if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_100384[num], -1, false))
					{
						entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
						entityCoords2 = { ENTITY::GET_ENTITY_COORDS(Global_100384[num], true) };
					
						if (ENTITY::GET_ENTITY_MODEL(Global_100384[num]) == -1214293858)
						{
							if (SYSTEM::VDIST(entityCoords, entityCoords2) < 10f)
							{
								*iParam4 = 2;
								vehiclePedIsIn = Global_100384[num];
								flag = true;
							}
						}
					}
				}
			}
		}
	}

	func_382(pedParam0, vehiclePedIsIn, hParam1, uParam2, fParam3, iParam4, uParam5, flag);
	return;
}

void func_382(Ped pedParam0, Vehicle veParam1, Hash hParam2, var uParam3, float fParam4, int iParam5, var uParam6, BOOL bParam7) // Position - 0x21A8B Hash - 0x52405442 ^0x46144538
{
	int num;
	int i;
	Vector3 entityCoords;
	Vector3 unk;
	int unk2;
	Entity entityCoords2;
	int unk3;

	hParam2->f_97 = 0;
	num = 145;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false))
	{
		num = func_103(pedParam0);
	
		if (num > 3)
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
			}
		
			return;
		}
	
		if (DECORATOR::DECOR_EXIST_ON(veParam1, "GetawayVehicleValid"))
		{
			if (unk_0x8FA309E9ECEE409A(veParam1, "GetawayVehicleValid"))
			{
				if (Global_113648.f_9087.f_99.f_58[45] || Global_113648.f_9087.f_99.f_58[12] || Global_113648.f_9087.f_99.f_58[34])
				{
					*iParam5 = 0;
					Global_100384[num] = 0;
					return;
				}
			}
		}
	
		if (PED::IS_PED_IN_VEHICLE(pedParam0, veParam1, false) || bParam7)
		{
			*iParam5 = 2;
			Global_100384[num] = veParam1;
		}
		else if (PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))
		{
			veParam1 = PED::GET_VEHICLE_PED_IS_IN(pedParam0, false);
			*iParam5 = 2;
			Global_100384[num] = veParam1;
		}
		else
		{
			for (i = 0; i < 68; i = i + 1)
			{
				if (veParam1 == Global_77348.f_139[i])
				{
					*iParam5 = 0;
					Global_100384[num] = 0;
					return;
				}
			}
		
			if (!ENTITY::IS_ENTITY_DEAD(Global_100384[num], false))
			{
				if (!func_301(Global_100384[num], num, false) || PED::IS_PED_IN_VEHICLE(pedParam0, Global_100384[num], false))
				{
					entityCoords = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
					entityCoords2 = { ENTITY::GET_ENTITY_COORDS(Global_100384[num], true) };
				
					if (func_383(pedParam0, Global_100384[num], false))
					{
						if (SYSTEM::VDIST2(entityCoords, entityCoords2) < 22500f)
						{
							*uParam3 = { entityCoords2 };
							*fParam4 = ENTITY::GET_ENTITY_HEADING(Global_100384[num]);
							*iParam5 = 1;
							Global_100384[num] = veParam1;
						
							if (SYSTEM::VDIST2(entityCoords, entityCoords2) < 1.5f * 1.5f)
							{
							}
						}
					}
				}
				else
				{
					*iParam5 = 0;
					Global_100384[num] = 0;
				}
			}
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(veParam1))
	{
		*hParam2 = ENTITY::GET_ENTITY_MODEL(veParam1);
	
		if (VEHICLE::GET_VEHICLE_TRAILER_VEHICLE(veParam1, &trailer))
			hParam2->f_1 = ENTITY::GET_ENTITY_MODEL(trailer);
	
		hParam2->f_2 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(veParam1);
		hParam2->f_3 = ENTITY::GET_ENTITY_HEALTH(veParam1);
		hParam2->f_4 = VEHICLE::GET_VEHICLE_COLOUR_COMBINATION(veParam1);
	
		if (hParam2->f_4 > -1)
		{
			hParam2->f_9 = 1;
			hParam2->f_5 = -1;
			hParam2->f_6 = -1;
		}
		else
		{
			hParam2->f_9 = 0;
			VEHICLE::GET_VEHICLE_COLOURS(veParam1, &(hParam2->f_5), &(hParam2->f_6));
		}
	
		if (!VEHICLE::IS_THIS_MODEL_A_BOAT(*hParam2))
		{
			hParam2->f_10 = 1;
			VEHICLE::GET_VEHICLE_EXTRA_COLOURS(veParam1, &(hParam2->f_7), &(hParam2->f_8));
		}
		else
		{
			hParam2->f_10 = 0;
			hParam2->f_7 = -1;
			hParam2->f_8 = -1;
		}
	
		TEXT_LABEL_ASSIGN_STRING(&(hParam2->f_27), VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(veParam1), 16);
		hParam2->f_26 = VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veParam1);
		hParam2->f_88 = VEHICLE::GET_VEHICLE_TYRES_CAN_BURST(veParam1);
		VEHICLE::GET_VEHICLE_TYRE_SMOKE_COLOR(veParam1, &(hParam2->f_84), &(hParam2->f_85), &(hParam2->f_86));
		hParam2->f_87 = VEHICLE::GET_VEHICLE_WINDOW_TINT(veParam1);
		VEHICLE::GET_VEHICLE_NEON_COLOUR(veParam1, &(hParam2->f_93), &(hParam2->f_94), &(hParam2->f_95));
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 2))
			MISC::SET_BIT(&(hParam2->f_92), 28);
		else
			MISC::CLEAR_BIT(&(hParam2->f_92), 28);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 3))
			MISC::SET_BIT(&(hParam2->f_92), 29);
		else
			MISC::CLEAR_BIT(&(hParam2->f_92), 29);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 0))
			MISC::SET_BIT(&(hParam2->f_92), 30);
		else
			MISC::CLEAR_BIT(&(hParam2->f_92), 30);
	
		if (VEHICLE::GET_VEHICLE_NEON_ENABLED(veParam1, 1))
			MISC::SET_BIT(&(hParam2->f_92), 31);
		else
			MISC::CLEAR_BIT(&(hParam2->f_92), 31);
	
		hParam2->f_89 = VEHICLE::GET_VEHICLE_LIVERY(veParam1);
		hParam2->f_90 = unk_0xA79BA8CFAAB28820(veParam1);
	
		for (j = 0; j < 12; j = j + 1)
		{
			hParam2->f_11[j] = VEHICLE::IS_VEHICLE_EXTRA_TURNED_ON(veParam1, j + 1);
		}
	
		if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(veParam1, false))
		{
			convertibleRoofState = VEHICLE::GET_CONVERTIBLE_ROOF_STATE(veParam1);
		
			if (convertibleRoofState == 0 || convertibleRoofState == 5)
				hParam2->f_24 = 1;
			else
				hParam2->f_24 = 0;
		}
		else
		{
			hParam2->f_24 = 0;
		}
	
		if (pedParam0 == PLAYER::PLAYER_PED_ID())
			hParam2->f_25 = AUDIO::GET_PLAYER_RADIO_STATION_INDEX();
	
		func_315(&veParam1, &(hParam2->f_31), &(hParam2->f_81));
		hParam2->f_96 = VEHICLE::GET_VEHICLE_ENVEFF_SCALE(veParam1);
		hParam2->f_97 = func_299(veParam1);
		*uParam6 = -1;
	
		switch (num)
		{
			case 0:
				if (Global_113648.f_32751.f_69[0 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(veParam1))
					*uParam6 = 12;
				break;
		
			case 1:
				if (Global_113648.f_32751.f_69[1 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(veParam1))
					*uParam6 = 13;
				break;
		
			case 2:
				if (Global_113648.f_32751.f_69[2 /*78*/].f_66 == ENTITY::GET_ENTITY_MODEL(veParam1))
					*uParam6 = 14;
				break;
		}
	}
	else
	{
		*iParam5 = 0;
		*uParam3 = { 0f, 0f, 0f };
		*fParam4 = 0f;
		*hParam2 = 0;
		hParam2->f_1 = 0;
		hParam2->f_2 = 0f;
		hParam2->f_3 = 0;
		hParam2->f_4 = 0;
		hParam2->f_5 = 0;
		hParam2->f_6 = 0;
		hParam2->f_7 = 0;
		hParam2->f_8 = 0;
		hParam2->f_9 = 0;
		hParam2->f_10 = 0;
	
		for (j = 0; j < hParam2->f_11; j = j + 1)
		{
			hParam2->f_11[j] = 0;
		}
	
		hParam2->f_24 = 0;
		hParam2->f_25 = 0;
		*iParam5 = 0;
		*uParam6 = -1;
		hParam2->f_96 = 0f;
	}

	return;
}

BOOL func_383(Ped pedParam0, Vehicle veParam1, BOOL bParam2) // Position - 0x21F92 Hash - 0x99E4679A ^0x61E7731
{
	Hash entityModel;

	if (PED::IS_PED_IN_VEHICLE(pedParam0, veParam1, bParam2))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(veParam1);
	
		if (VEHICLE::IS_THIS_MODEL_A_BOAT(entityModel) || entityModel == 771711535 || entityModel == -1066334226)
		{
			if (ENTITY::IS_ENTITY_IN_WATER(veParam1))
				return false;
		
			return true;
		}
	
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(entityModel) || VEHICLE::IS_THIS_MODEL_A_HELI(entityModel) || entityModel == -150975354)
		{
			if (ENTITY::IS_ENTITY_IN_AIR(veParam1))
				return false;
		
			return true;
		}
	
		return true;
	}

	return false;
}

void func_384() // Position - 0x2201E Hash - 0xEB0D43DD ^0xEB0D43DD
{
	Global_100720 = 1;
	return;
}

int func_385(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x2202B Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_270(0))
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_23131.f_5 = 0;
	
		if (iParam2 != 5)
			PLAYER::FORCE_CLEANUP(8);
	
		Global_43257 = iParam2;
		Global_43219 = *uParam0;
		Global_43220 = iParam4;
		Global_43218 = 0;
		return 1;
	}

	if (*uParam0 != -1)
	{
		if (Global_43218 > 0)
		{
			i = 0;
		
			for (i = 0; i < Global_43218; i = i + 1)
			{
				if (Global_43224[i /*4*/] == *uParam0)
					return 2;
			}
		}
		else if (Global_43219 == *uParam0)
		{
			return 1;
		}
	
		*uParam0 = -1;
	}

	if (*uParam0 == -1)
	{
		if (!func_150(iParam2))
			return 0;
	
		if (Global_43218 == 8)
			return 0;
	
		Global_43221 = Global_43221 + 1;
		*uParam0 = Global_43221;
		Global_43224[Global_43218 /*4*/] = Global_43221;
		Global_43224[Global_43218 /*4*/].f_1 = iParam1;
		Global_43224[Global_43218 /*4*/].f_2 = iParam2;
		Global_43224[Global_43218 /*4*/].f_3 = 0;
		Global_43218 = Global_43218 + 1;
	
		if (iParam4 != 0)
			func_386(uParam0, iParam4);
	}

	return 2;
}

void func_386(var uParam0, int iParam1) // Position - 0x22162 Hash - 0x6AC97785 ^0x6AC97785
{
	int i;

	if (Global_43218 == 0)
		return;

	if (*uParam0 == -1)
		return;

	i = 0;

	for (i = 0; i < Global_43218; i = i + 1)
	{
		if (Global_43224[i /*4*/] == *uParam0)
			Global_43224[i /*4*/].f_3 = iParam1;
	}

	*uParam0 = -1;
	return;
}

void func_387(var uParam0) // Position - 0x221B1 Hash - 0x45115720 ^0x45115720
{
	if (func_11(2, *uParam0))
	{
		if (IS_BIT_SET(uParam0->f_449, 1))
		{
			if (IS_BIT_SET(uParam0->f_449, 2))
			{
				func_70(uParam0, func_388(*uParam0));
				func_86(2, *uParam0, false);
			}
			else
			{
				func_122(uParam0);
				func_86(2, *uParam0, false);
			}
		}
	}

	return;
}

BOOL func_388(int iParam0) // Position - 0x22200 Hash - 0xF9ACC98C ^0xF9ACC98C
{
	switch (iParam0)
	{
		case 0:
			return func_404(18);
	
		case 1:
			return func_404(22);
	
		case 2:
			return func_404(40);
	
		case 3:
			return func_404(8);
	
		case 4:
			return func_404(26);
	
		default:
			break;
	}

	return false;
}

void func_389(var uParam0, float fParam1, float fParam2) // Position - 0x2226D Hash - 0xB6424A22 ^0xC19A843D
{
	float num;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		num = SYSTEM::VDIST2(uParam0->f_401, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true));
	
		if (IS_BIT_SET(uParam0->f_449, 1))
			func_400(uParam0);
		else if (num < fParam1 * fParam1 || IS_BIT_SET(Global_96690, *uParam0))
			if (IS_BIT_SET(uParam0->f_449, 0))
				if (func_399(uParam0))
					if (IS_BIT_SET(Global_96690, *uParam0))
						if (IS_BIT_SET(Global_96692, *uParam0))
							func_394(uParam0);
					else
						func_394(uParam0);
			else
				func_393(uParam0);
	
		if (num > fParam2 * fParam2 && !IS_BIT_SET(Global_96690, *uParam0))
		{
			if (IS_BIT_SET(uParam0->f_449, 0))
			{
				if (IS_BIT_SET(uParam0->f_449, 1))
					func_391(uParam0);
			
				func_390(uParam0);
			}
		}
	}

	return;
}

void func_390(var uParam0) // Position - 0x2233E Hash - 0xF97E1DC0 ^0x84BCE95B
{
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD");
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(932342438);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-975272128);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(-735763507);

	if (uParam0->f_413 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_413));

	if (uParam0->f_414 != 0)
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_414));

	HUD::CLEAR_ADDITIONAL_TEXT(5, false);
	MISC::CLEAR_BIT(&Global_96691, *uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	return;
}

void func_391(var uParam0) // Position - 0x223A8 Hash - 0xAB2CC7E2 ^0x834C7DF2
{
	if (IS_BIT_SET(uParam0->f_449, 1))
	{
		if (!CUTSCENE::IS_CUTSCENE_PLAYING())
			if (IS_BIT_SET(uParam0->f_449, 2))
				func_70(uParam0, false);
	
		func_392(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 1);
		MISC::CLEAR_BIT(&Global_96690, *uParam0);
	}

	return;
}

void func_392(var uParam0) // Position - 0x223EE Hash - 0x35CBA45F ^0x100E32FB
{
	int i;

	for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
			OBJECT::DELETE_OBJECT(&uParam0->f_428[i]);
	}

	return;
}

void func_393(var uParam0) // Position - 0x2242A Hash - 0xA34BD2B5 ^0x35CE5214
{
	if (!AUDIO::HAS_LOADED_SP_DATA_SET())
		return;

	HUD::REQUEST_ADDITIONAL_TEXT(&(uParam0->f_1.f_272), 5);
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1);

	if (*uParam0 != 1)
	{
		STREAMING::REQUEST_MODEL(932342438);
		STREAMING::REQUEST_MODEL(-975272128);
		STREAMING::REQUEST_MODEL(-735763507);
	}

	uParam0->f_413 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE(&(uParam0->f_1.f_268));
	uParam0->f_414 = GRAPHICS::REQUEST_SCALEFORM_MOVIE_INSTANCE("INSTRUCTIONAL_BUTTONS");
	MISC::SET_BIT(&Global_96689, *uParam0);
	MISC::SET_BIT(&(uParam0->f_449), 0);
	return;
}

void func_394(var uParam0) // Position - 0x224A8 Hash - 0x3B6A64C3 ^0xA256CD38
{
	int i;

	if (!IS_BIT_SET(uParam0->f_449, 1))
	{
		for (i = 0; i < uParam0->f_1.f_96; i = i + 1)
		{
			func_37(uParam0, i);
		}
	
		func_34(uParam0);
		func_32(uParam0);
		func_398(uParam0);
		func_397(uParam0);
		func_395(uParam0);
		MISC::SET_BIT(&(uParam0->f_449), 1);
	}

	return;
}

void func_395(var uParam0) // Position - 0x22502 Hash - 0x37D1DA65 ^0xADC3926C
{
	int i;
	Hash modelHash;
	float pitch;
	float num;
	Vector3 vector;

	for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
	{
		if (func_33(*uParam0, uParam0->f_1.f_75[i]))
		{
			switch (i % 3)
			{
				case 0:
					modelHash = 932342438;
					break;
			
				case 1:
					modelHash = -975272128;
					break;
			
				case 2:
					modelHash = -735763507;
					break;
			}
		
			pitch = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
			num = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
			vector = { func_396(uParam0, &uParam0->f_1.f_34[i /*2*/]) };
			uParam0->f_428[i] = OBJECT::CREATE_OBJECT(modelHash, vector, true, true, false);
			ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[i], pitch, 0f, uParam0->f_404 + num, 2, true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[i], true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[i], true);
			ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[i], false, false);
			ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[i], false);
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[i], true);
		}
	}

	MISC::CLEAR_BIT(&Global_96692, *uParam0);
	return;
}

Vector3 func_396(var uParam0, var uParam1) // Position - 0x22637 Hash - 0xF4C75BC ^0x4CA2BC55
{
	float num;
	float num2;
	float num3;
	float num4;
	float num5;
	float num6;
	var unk;
	var unk2;

	num = uParam0->f_1.f_4;
	num2 = uParam0->f_1.f_5;
	func_29(uParam0, uParam1, &num3, &num4);
	num5 = num * (num3 - 0.5f);
	num6 = -num2 * (num4 - 0.5f);
	unk = uParam0->f_404;
	unk2 = { uParam0->f_401 };
	unk2 = { unk2 + { num6, num5 * SYSTEM::COS(90f - unk), num5 * SYSTEM::SIN(90f - unk) } };
	return unk2;
}

void func_397(var uParam0) // Position - 0x226B5 Hash - 0x3C2FC897 ^0xB574E179
{
	int i;
	int num;
	int num2;
	BOOL value;

	num = *uParam0;

	for (i = 0; i < uParam0->f_1.f_117; i = i + 1)
	{
		num2 = uParam0->f_1.f_186[i];
		value = IS_BIT_SET(Global_113648.f_1.f_120[num], num2);
	
		if (uParam0->f_1.f_141[i /*2*/] == 0 && uParam0->f_1.f_141[i /*2*/].f_1 == 0)
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
		else
		{
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[i /*2*/]));
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_141[i /*2*/].f_1));
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	}

	return;
}

void func_398(var uParam0) // Position - 0x22792 Hash - 0xF9F5988E ^0x2CEE0C80
{
	int num;
	int value;
	int i;
	int value2;

	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "CREATE_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14));
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(SYSTEM::TO_FLOAT(uParam0->f_1.f_14.f_1));
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	num = *uParam0;
	value = 0;

	for (i = 0; i < uParam0->f_1.f_209; i = i + 1)
	{
		if (func_33(num, uParam0->f_1.f_248[i]))
		{
			value2 = 0;
		
			if (func_33(num, uParam0->f_1.f_258[i]))
				value2 = 1;
		
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value2);
			func_9(&uParam0->f_1.f_211[i /*4*/]);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			value = value + 1;
		}
	}

	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "DISPLAY_VIEW");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();

	if (func_33(*uParam0, uParam0->f_1.f_210))
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}
	else
	{
		NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_VIEW");
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
		GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(false);
		GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	}

	return;
}

BOOL func_399(var uParam0) // Position - 0x228D2 Hash - 0xDC2D04B2 ^0xEB0E209E
{
	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_413))
		return false;

	if (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_414))
		return false;

	if (!HUD::HAS_ADDITIONAL_TEXT_LOADED(5))
		return false;

	if (AUDIO::HAS_LOADED_SP_DATA_SET())
		if (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("HEIST_BULLETIN_BOARD", false, -1))
			return false;
	else
		return false;

	if (*uParam0 != 1)
		if (!STREAMING::HAS_MODEL_LOADED(932342438) || !STREAMING::HAS_MODEL_LOADED(-975272128) || !STREAMING::HAS_MODEL_LOADED(-735763507))
			return false;

	MISC::SET_BIT(&Global_96691, *uParam0);
	return true;
}

void func_400(var uParam0) // Position - 0x2296D Hash - 0x150E35B4 ^0x65C61BF4
{
	float num;
	float num2;

	if (func_33(*uParam0, 0))
	{
		func_401(uParam0);
		num = -uParam0->f_1.f_4 * 0.5f;
		num2 = uParam0->f_1.f_5 * 0.5f;
		GRAPHICS::DRAW_SCALEFORM_MOVIE_3D(uParam0->f_413, uParam0->f_401 + { num2, num * SYSTEM::COS(90f - uParam0->f_404), num * SYSTEM::SIN(90f - uParam0->f_404) }, 180f, 0f, uParam0->f_404, 1f, 1f, 1f, uParam0->f_1.f_6, uParam0->f_1.f_7, 1f, 2);
	}

	return;
}

void func_401(var uParam0) // Position - 0x229F6 Hash - 0x8171B096 ^0xB90E271D
{
	int i;
	int num;
	BOOL value;
	Hash modelHash;
	float pitch;
	float num2;
	Vector3 vector;

	if (IS_BIT_SET(Global_96689, *uParam0))
	{
		MISC::SET_BIT(&(uParam0->f_449), 16);
		MISC::SET_BIT(&(uParam0->f_449), 15);
		MISC::SET_BIT(&(uParam0->f_449), 14);
		MISC::CLEAR_BIT(&Global_96689, *uParam0);
	}

	if (IS_BIT_SET(uParam0->f_449, 16))
	{
		for (i = 0; i < uParam0->f_1.f_117; i = i + 1)
		{
			num = uParam0->f_1.f_186[i];
			value = func_33(*uParam0, num);
			NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SHOW_HEIST_ASSET");
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_1.f_118[i]);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(value);
			GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
		}
	
		MISC::CLEAR_BIT(&(uParam0->f_449), 16);
	}

	if (IS_BIT_SET(uParam0->f_449, 15))
	{
		for (i = 0; i < uParam0->f_1.f_33; i = i + 1)
		{
			if (func_33(*uParam0, uParam0->f_1.f_75[i]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
				{
					switch (i % 3)
					{
						case 0:
							modelHash = 932342438;
							break;
					
						case 1:
							modelHash = -975272128;
							break;
					
						case 2:
							modelHash = -735763507;
							break;
					}
				
					pitch = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
					num2 = SYSTEM::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535) - 32767) / 4000f;
					vector = { func_396(uParam0, &uParam0->f_1.f_34[i /*2*/]) };
					uParam0->f_428[i] = OBJECT::CREATE_OBJECT(modelHash, vector, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(uParam0->f_428[i], pitch, 0f, uParam0->f_404 + num2, 2, true);
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_428[i], true, false);
					ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_428[i], true);
					ENTITY::SET_ENTITY_COLLISION(uParam0->f_428[i], false, false);
					ENTITY::SET_ENTITY_HAS_GRAVITY(uParam0->f_428[i], false);
					ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_428[i], true);
				}
			}
			else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_428[i]))
			{
				OBJECT::DELETE_OBJECT(&uParam0->f_428[i]);
			}
		}
	
		MISC::CLEAR_BIT(&(uParam0->f_449), 15);
	}

	if (IS_BIT_SET(uParam0->f_449, 14))
	{
		func_402(uParam0);
		func_34(uParam0);
		func_398(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_449), 14);
	}

	return;
}

void func_402(var uParam0) // Position - 0x22C36 Hash - 0xEA8954A4 ^0x7CA58981
{
	NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(uParam0->f_413, "SET_DATA_SLOT_EMPTY");
	GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(uParam0->f_415 + 1);
	GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
	return;
}

BOOL func_403(int iParam0) // Position - 0x22C5A Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_404(int iParam0) // Position - 0x22C68 Hash - 0xB6246282 ^0x2350A449
{
	if (iParam0 == 146 || iParam0 == -1)
		return false;

	return Global_113648.f_9087.f_99.f_58[iParam0];
}

void func_405(BOOL bParam0) // Position - 0x22C95 Hash - 0x7A8AA6D9 ^0x7A8AA6D9
{
	if (bParam0)
		Global_112670 = 0;
	else
		Global_112670 = 1;

	return;
}

void func_406(int iParam0, int iParam1, BOOL bParam2) // Position - 0x22CAF Hash - 0xA0AB6878 ^0xB2E11105
{
	if (bParam2)
		MISC::SET_BIT(&Global_113648.f_1.f_120[iParam0], iParam1);
	else
		MISC::CLEAR_BIT(&Global_113648.f_1.f_120[iParam0], iParam1);

	MISC::SET_BIT(&Global_96689, iParam0);
	return;
}

void func_407(var uParam0, int iParam1) // Position - 0x22CED Hash - 0x51C42492 ^0x7C99995B
{
	var unk;
	var unk2;

	*uParam0 = iParam1;
	unk = { Global_96627[uParam0->f_1.f_1 /*15*/].f_3 };
	unk4 = Global_96627[uParam0->f_1.f_1 /*15*/].f_6;
	uParam0->f_401 = { unk };
	uParam0->f_404 = unk4;
	uParam0->f_405 = { unk + { 0f, -uParam0->f_1.f_8 * SYSTEM::COS(360f - unk4), -uParam0->f_1.f_8 * SYSTEM::SIN(360f - unk4) } };
	uParam0->f_408 = { -0.85f, 0f, unk4 };
	MISC::SET_BIT(&(uParam0->f_449), 4);
	uParam0->f_415 = uParam0->f_1.f_96;
	uParam0->f_416 = -1;
	MISC::CLEAR_BIT(&(uParam0->f_449), 0);
	MISC::CLEAR_BIT(&(uParam0->f_449), 1);
	MISC::CLEAR_BIT(&(uParam0->f_449), 2);
	uParam0->f_464 = 0;
	uParam0->f_451 = -1;
	return;
}

void func_408(var uParam0, var uParam1) // Position - 0x22DB9 Hash - 0x9177DD34 ^0x2049E0E8
{
	func_418(uParam0, 0, "HEIST_FINALE", "BOARD6", "FHFAUD", "CRWAUD", 1, 1, 3, 4, uParam1, 96.47825f, -1292.3529f, 29.768753f, 5f, 5.5f, 6f);
	func_417(uParam0, 1500, 540, 3.45f, 1.34f, 3.18f, 1.79f, 2.58f, 747, 260, 620, 442, 490, 445, 360, 438, 230, 440, 100, 435, 872, 398, 20, 40, 1150, 415);
	func_416(uParam0, 18f, 17f, 19f);
	func_415(uParam0, "", "", "", "", "FHP16", "", "FHP17", "FHP19");
	func_414(uParam0, 1, "CRW_GM", "");
	func_414(uParam0, 2, "CRW_KA", "");
	func_414(uParam0, 3, "CRW_HW", "");
	func_414(uParam0, 4, "CRW_NR", "");
	func_414(uParam0, 5, "CRW_DJ", "");
	func_414(uParam0, 6, "CRW_PH", "");
	func_414(uParam0, 7, "CRW_CF", "");
	func_414(uParam0, 8, "CRW_ET", "");
	func_414(uParam0, 9, "CRW_KD", "");
	func_414(uParam0, 10, "CRW_PM", "CRM_PM");
	func_414(uParam0, 11, "", "CRM_CH");
	func_414(uParam0, 12, "CRW_RL", "CRM_RL");
	func_414(uParam0, 13, "CRW_TM", "CRM_TM");
	func_413(uParam0, 24, "FHP18");
	func_413(uParam0, 25, "FHP18b");
	func_413(uParam0, 28, "FHP18c");
	func_413(uParam0, 29, "FHP18d");
	func_413(uParam0, 30, "FHP18e");
	func_413(uParam0, 26, "FHP18f");
	func_413(uParam0, 27, "FHP18g");
	func_413(uParam0, 31, "FHP18h");
	func_413(uParam0, 22, "FHP18i");
	func_413(uParam0, 23, "FHP18j");
	func_413(uParam0, 20, "FHP18k");
	func_412(uParam0, 0, 1, 0, 0);
	func_412(uParam0, 1, 1, 0, 0);
	func_412(uParam0, 2, 1, 0, 0);
	func_412(uParam0, 3, 1, 0, 0);
	func_412(uParam0, 4, 1, 0, 0);
	func_412(uParam0, 5, 1, 0, 0);
	func_412(uParam0, 6, 1, 0, 0);
	func_412(uParam0, 7, 1, 0, 0);
	func_412(uParam0, 8, 1, 0, 0);
	func_412(uParam0, 9, 1, 0, 0);
	func_412(uParam0, 10, 1, 0, 0);
	func_412(uParam0, 11, 1, 0, 0);
	func_412(uParam0, 12, 1, 0, 0);
	func_412(uParam0, 13, 1, 0, 0);
	func_412(uParam0, 14, 1, 0, 0);
	func_412(uParam0, 15, 1, 0, 0);
	func_412(uParam0, 16, 1, 0, 0);
	func_412(uParam0, 17, 1, 0, 0);
	func_412(uParam0, 18, 1, 0, 0);
	func_412(uParam0, 19, 1, 0, 0);
	func_412(uParam0, 20, 1, 0, 0);
	func_412(uParam0, 21, 1, 0, 0);
	func_411(uParam0, 0, 0, _("Research repository"));
	func_411(uParam0, 0, 0, _("Flyover area"));
	func_411(uParam0, 0, 2, _("Decide approach"));
	func_411(uParam0, 0, 10, _("Pick crew"));
	func_411(uParam0, 3, 5, _("Police stingers"));
	func_411(uParam0, 3, 6, _("Modded Vehicles"));
	func_411(uParam0, 4, 7, _("Drilling machine"));
	func_411(uParam0, 4, 8, _("Get a train"));
	func_411(uParam0, 4, 9, _("Getaway Vehicle"));
	func_410(uParam0, 1, 142, 72);
	func_410(uParam0, 1, 134, 244);
	func_410(uParam0, 1, 262, 54);
	func_410(uParam0, 1, 334, 206);
	func_410(uParam0, 1, 547, 65);
	func_410(uParam0, 1, 550, 200);
	func_410(uParam0, 1, 453, 54);
	func_410(uParam0, 1, 492, 242);
	func_410(uParam0, 1, 731, 179);
	func_410(uParam0, 1, 685, 81);
	func_410(uParam0, 1, 828, 79);
	func_410(uParam0, 1, 982, 167);
	func_410(uParam0, 1, 1155, 70);
	func_410(uParam0, 1, 1293, 60);
	func_410(uParam0, 1, 1254, 191);
	func_410(uParam0, 1, 1433, 84);
	func_410(uParam0, 1, 1469, 172);
	func_410(uParam0, 1, 952, 367);
	func_410(uParam0, 1, 967, 469);
	func_410(uParam0, 1, 1246, 374);
	func_409(uParam0, 1, "FHP9", 777, 165, true);
	func_409(uParam0, 1, "FHP10", 970, 179, true);
	func_409(uParam0, 1, "FHP11", 1210, 184, true);
	func_409(uParam0, 1, "FHP12", 537, 168, false);
	func_409(uParam0, 1, "FHP13", 579, 229, true);
	func_409(uParam0, 1, "FHP14", 355, 228, true);
	func_409(uParam0, 1, "FHP15", 350, 117, true);
	return;
}

void func_409(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, BOOL bParam5) // Position - 0x23273 Hash - 0x4F0D0B53 ^0x4F0D0B53
{
	var unk;

	if (uParam0->f_369 < 7)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);
		uParam0->f_386[uParam0->f_369] = iParam1;
		uParam0->f_371[uParam0->f_369 /*2*/] = iParam3;
		uParam0->f_371[uParam0->f_369 /*2*/].f_1 = iParam4;
		uParam0->f_280[uParam0->f_369 + 4 /*2*/] = { unk };
	
		if (bParam5)
			MISC::SET_BIT(&(uParam0->f_370), uParam0->f_369);
	
		uParam0->f_369 = uParam0->f_369 + 1;
	}

	return;
}

void func_410(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x232EC Hash - 0x114653F8 ^0xF0B5381D
{
	if (uParam0->f_33 < 20)
	{
		uParam0->f_75[uParam0->f_33] = iParam1;
		uParam0->f_34[uParam0->f_33 /*2*/] = iParam2;
		uParam0->f_34[uParam0->f_33 /*2*/].f_1 = iParam3;
		uParam0->f_33 = uParam0->f_33 + 1;
	}

	return;
}

void func_411(var uParam0, int iParam1, int iParam2, char* sParam3) // Position - 0x23330 Hash - 0x23A9DD2C ^0xAC5599F3
{
	var unk;

	if (uParam0->f_209 < 9)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, sParam3, 32);
		uParam0->f_248[uParam0->f_209] = iParam1;
		uParam0->f_258[uParam0->f_209] = iParam2;
		TEXT_LABEL_COPY(&uParam0->f_211[uParam0->f_209 /*4*/], { unk }, 4);
		uParam0->f_209 = uParam0->f_209 + 1;
	}

	return;
}

void func_412(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4) // Position - 0x23380 Hash - 0x3F642A6B ^0xA090274F
{
	if (uParam0->f_117 < 22)
	{
		uParam0->f_118[uParam0->f_117] = iParam1;
		uParam0->f_186[uParam0->f_117] = iParam2;
		uParam0->f_141[uParam0->f_117 /*2*/] = iParam3;
		uParam0->f_141[uParam0->f_117 /*2*/].f_1 = iParam4;
		uParam0->f_117 = uParam0->f_117 + 1;
	}

	return;
}

void func_413(var uParam0, int iParam1, char* sParam2) // Position - 0x233D0 Hash - 0x778A5F1B ^0x102FDD76
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);

	if (MISC::ARE_STRINGS_EQUAL(sParam2, ""))
		return;

	uParam0->f_304[iParam1 /*2*/] = { unk };
	return;
}

void func_414(var uParam0, int iParam1, char* sParam2, char* sParam3) // Position - 0x233FB Hash - 0x56802603 ^0xEE2B7AC3
{
	var unk;
	var unk2;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam2, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk3, sParam3, 8);
	uParam0->f_304[iParam1 /*2*/] = { unk };

	if (!MISC::ARE_STRINGS_EQUAL(sParam3, ""))
	{
		switch (iParam1)
		{
			case 10:
				uParam0->f_304[14 /*2*/] = { unk3 };
				break;
		
			case 13:
				uParam0->f_304[16 /*2*/] = { unk3 };
				break;
		
			case 12:
				uParam0->f_304[15 /*2*/] = { unk3 };
				break;
		
			case 11:
				uParam0->f_304[17 /*2*/] = { unk3 };
				break;
		
			default:
				break;
		}
	}

	return;
}

void func_415(var uParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8) // Position - 0x23494 Hash - 0x634170F2 ^0x634170F2
{
	var unk;
	var unk2;
	var unk3;
	var unk4;
	var unk5;
	var unk6;
	var unk7;
	var unk8;

	TEXT_LABEL_ASSIGN_STRING(&unk, sParam1, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk5, sParam2, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk9, sParam3, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk13, sParam4, 16);
	TEXT_LABEL_ASSIGN_STRING(&unk17, sParam5, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk19, sParam6, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk21, sParam7, 8);
	TEXT_LABEL_ASSIGN_STRING(&unk23, sParam8, 8);
	uParam0->f_20[0 /*4*/] = { unk };
	uParam0->f_20[1 /*4*/] = { unk5 };
	uParam0->f_108[0 /*4*/] = { unk9 };
	uParam0->f_108[1 /*4*/] = { unk13 };
	uParam0->f_280[1 /*2*/] = { unk17 };
	uParam0->f_280[2 /*2*/] = { unk19 };
	uParam0->f_280[0 /*2*/] = { unk21 };
	uParam0->f_280[3 /*2*/] = { unk23 };
	return;
}

void func_416(var uParam0, float fParam1, float fParam2, float fParam3) // Position - 0x23538 Hash - 0xFA29E56E ^0xB9CB6FDB
{
	uParam0->f_9 = fParam1;
	uParam0->f_10 = fParam2;
	uParam0->f_11 = fParam3;
	return;
}

void func_417(var uParam0, int iParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24, int iParam25) // Position - 0x23552 Hash - 0xE91BF68B ^0x856B36AE
{
	uParam0->f_2 = iParam1;
	uParam0->f_3 = iParam2;
	uParam0->f_4 = fParam3;
	uParam0->f_5 = fParam4;
	uParam0->f_6 = fParam5;
	uParam0->f_7 = fParam6;
	uParam0->f_8 = fParam7;
	uParam0->f_12 = iParam8;
	uParam0->f_12.f_1 = iParam9;
	uParam0->f_97[0 /*2*/] = iParam10;
	uParam0->f_97[0 /*2*/].f_1 = iParam11;
	uParam0->f_97[1 /*2*/] = iParam12;
	uParam0->f_97[1 /*2*/].f_1 = iParam13;
	uParam0->f_97[2 /*2*/] = iParam14;
	uParam0->f_97[2 /*2*/].f_1 = iParam15;
	uParam0->f_97[3 /*2*/] = iParam16;
	uParam0->f_97[3 /*2*/].f_1 = iParam17;
	uParam0->f_97[4 /*2*/] = iParam18;
	uParam0->f_97[4 /*2*/].f_1 = iParam19;
	uParam0->f_16 = iParam20;
	uParam0->f_16.f_1 = iParam21;
	uParam0->f_18 = iParam22;
	uParam0->f_18.f_1 = iParam23;
	uParam0->f_14 = iParam24;
	uParam0->f_14.f_1 = iParam25;
	return;
}

void func_418(var uParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, var uParam10, float fParam11, float fParam12, float fParam13, float fParam14, float fParam15, float fParam16) // Position - 0x23620 Hash - 0x43625A4D ^0x75081F43
{
	uParam0->f_1 = iParam1;
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_268), sParam2, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_272), sParam3, 16);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_276), sParam4, 8);
	TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_278), sParam5, 8);
	uParam0->f_29 = iParam6;
	uParam0->f_30[0] = iParam8;
	uParam0->f_30[1] = iParam9;
	uParam0->f_210 = iParam7;
	uParam0->f_96 = uParam10;
	uParam0->f_394 = { fParam11 };
	uParam0->f_397 = { fParam14 };
	return;
}

var func_419(var uParam0, var uParam1) // Position - 0x2368C Hash - 0xD4B46002 ^0xD4B46002
{
	if (uParam0 > uParam1)
		return uParam0;

	return uParam1;
}

int func_420(int iParam0) // Position - 0x236A2 Hash - 0xFCBFD2CC ^0x1DBFD43E
{
	int num;
	int offset;

	if (iParam0 <= 31)
	{
		num = 9;
		offset = iParam0;
	}
	else
	{
		num = 10;
		offset = iParam0 - 32;
	}

	if (IS_BIT_SET(Global_113648.f_9087.f_99.f_219[num], offset))
		return 0;

	MISC::SET_BIT(&Global_113648.f_9087.f_99.f_219[num], offset);
	return 1;
}

void func_421() // Position - 0x236F9 Hash - 0x3A782509 ^0x71C0E454
{
	while (!func_422(&uLocal_182))
	{
		SYSTEM::WAIT(0);
	}

	func_115(24, 0);
	func_115(25, 0);
	func_115(26, 0);
	func_86(1, 4, 0);
	func_86(2, 4, false);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_179, false);

	if (iLocal_180 != -1)
		if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_180))
			PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_180);

	PED::CLEAR_PED_NON_CREATION_AREA();
	PATHFIND::SET_PED_PATHS_IN_AREA(uLocal_182.f_1.f_394 - uLocal_182.f_1.f_397, uLocal_182.f_1.f_394 + uLocal_182.f_1.f_397, true, 0);
	PLAYER::SET_MAX_WANTED_LEVEL(5);

	if (iLocal_48 != -1)
		func_223(&iLocal_48);

	CUTSCENE::REMOVE_CUTSCENE();

	if (iLocal_46 != -1)
		func_160(&iLocal_46);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

BOOL func_422(var uParam0) // Position - 0x237A7 Hash - 0xE4FDB1 ^0xE4FDB1
{
	if (IS_BIT_SET(uParam0->f_449, 1))
		func_391(uParam0);

	if (IS_BIT_SET(uParam0->f_449, 0))
		func_390(uParam0);

	return true;
}

