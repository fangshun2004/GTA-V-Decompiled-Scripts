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
	int iLocal_44 = 10;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
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
	BOOL bLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	int iLocal_89 = 0;
	Hash hLocal_90 = 0;
	Ped pedLocal_91 = 0;
	Ped pedLocal_92 = 0;
	Vehicle veLocal_93 = 0;
	Vehicle veLocal_94 = 0;
	int iLocal_95 = 0;
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
	float fLocal_111 = 0f;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	float fLocal_114 = 0f;
	float fLocal_115 = 0f;
	float fLocal_116 = 0f;
	float fLocal_117 = 0f;
	int iLocal_118 = 0;
	BOOL bLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	Hash hLocal_122 = 0;
	Hash hLocal_123 = 0;
	float fLocal_124 = 0f;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	int iLocal_127 = 0;
	int iLocal_128 = 0;
	int iLocal_129 = 0;
	int iLocal_130 = 0;
	Blip blLocal_131 = 0;
	Blip blLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 16;
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
	char* sLocal_299 = 0;
	char* sLocal_300 = 0;
	char* sLocal_301 = 0;
	char* sLocal_302 = 0;
	char* sLocal_303 = 0;
	char* sLocal_304 = 0;
	char* sLocal_305 = 0;
	char* sLocal_306 = 0;
	char* sLocal_307 = 0;
	int iLocal_308 = 0;
	int iLocal_309 = 0;
	int iLocal_310 = 0;
	int iLocal_311 = 0;
	int iLocal_312 = 0;
	var uLocal_313 = 0;
	var uLocal_314 = 0;
	var uLocal_315 = 0;
	int iLocal_316 = 0;
	int iLocal_317 = 0;
	char* sLocal_318 = 0;
	char* sLocal_319 = 0;
	char* sLocal_320 = 0;
	char* sLocal_321 = 0;
	char* sLocal_322 = 0;
	char* sLocal_323 = 0;
	char* sLocal_324 = 0;
	int iLocal_325 = 0;
	BOOL bLocal_326 = 0;
	int iLocal_327 = 0;
	int iLocal_328 = 0;
	int iLocal_329 = 0;
	var uLocal_330 = 0;
	var uLocal_331 = 0;
	var uLocal_332 = -1;
	var uLocal_333 = 0;
	var uLocal_334 = 0;
	var uLocal_335 = 0;
	var uLocal_336 = 0;
	var uLocal_337 = 0;
	var uLocal_338 = 0;
	var uLocal_339 = 1000;
	var uLocal_340 = 1000;
	var uLocal_341 = 0;
	var uLocal_342 = 0;
	int iLocal_343 = 0;
	int iLocal_344 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 5;
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
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	bLocal_119 = true;
	sLocal_302 = "REBTH_HANGAR";
	sLocal_303 = "REBTH_RUNSOF";
	sLocal_304 = "REBTH_TAUNT";
	sLocal_318 = "RANDOM@BICYCLE_THIEF@BASE";
	sLocal_319 = "RANDOM@BICYCLE_THIEF@ASK_HELP";
	sLocal_321 = "RANDOM@BICYCLE_THIEF@IDLE_A";
	sLocal_322 = "RANDOM@BICYCLE_THIEF@GET_OFF_BIKE";
	sLocal_323 = "RANDOM@BICYCLE_THIEF@RETURN_FRONT";
	sLocal_324 = "RANDOM@BICYCLE_THIEF@THANKS";
	uLocal_96 = { uScriptParam_0.f_1[0 /*3*/] };

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
		func_226();

	if (SYSTEM::VDIST2(uLocal_96, 421.92f, -1930.95f, 23.18f) < 16f)
		iLocal_317 = 1;
	else if (SYSTEM::VDIST2(uLocal_96, 769.3f, -151.66f, 73.79f) < 16f)
		iLocal_317 = 2;
	else if (SYSTEM::VDIST2(uLocal_96, -1923.93f, 254.48f, 85.7f) < 16f)
		iLocal_317 = 3;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) != 0)
			SCRIPT::TERMINATE_THIS_THREAD();
		else if (func_225(PLAYER::PLAYER_PED_ID(), uLocal_96, true) < 100f)
			SCRIPT::TERMINATE_THIS_THREAD();

	if (iLocal_317 != 3)
		if (func_185(uLocal_96, 26, iLocal_317, false, false))
			func_182(26);
		else
			SCRIPT::TERMINATE_THIS_THREAD();
	else if (func_185(uLocal_96, 8, 0, false, false))
		func_182(8);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	iLocal_316 = func_180();
	iLocal_325 = PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_96 - { 20f, 20f, 20f }, uLocal_96 + { 20f, 20f, 20f }, false, true, true, true);

	while (true)
	{
		SYSTEM::WAIT(0);
		func_179();
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 28);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 13);
			PLAYER::SUPPRESS_CRIME_THIS_FRAME(PLAYER::PLAYER_ID(), 35);
		}
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || iLocal_89 > 1)
		{
			if (func_159())
			{
				func_158();
				func_226();
			}
			else
			{
				switch (iLocal_89)
				{
					case 0:
						func_155();
						break;
				
					case 1:
						if (func_154())
						{
							func_158();
							func_226();
						}
						else
						{
							func_142();
						}
						break;
				
					case 2:
						func_111();
						func_107();
						func_106();
						func_105();
						func_103();
						func_102();
						func_94();
						break;
				
					case 3:
						func_92();
						func_74();
						func_65();
						break;
				
					case 4:
						func_1();
						break;
				}
			}
		}
		else
		{
			func_226();
		}
	}

	return;
}

void func_1() // Hash - 0x828232E8 ^0x2BB6CBBA
{
	if (func_64(PLAYER::PLAYER_PED_ID()) && func_64(pedLocal_92))
	{
		if (func_63(PLAYER::PLAYER_PED_ID(), pedLocal_92, true) > 50f)
		{
			func_62(8);
			func_26();
		}
		else if (MISC::GET_GAME_TIMER() - iLocal_129 > 10000)
		{
			func_62(8);
			func_26();
		}
		else if (iLocal_329 == 0 && !func_25() && func_2(&uLocal_134, "REBTHAU", sLocal_301, 4, 0, 0, 0))
		{
			iLocal_329 = 1;
		}
	}

	return;
}

BOOL func_2(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_3(sParam2, iParam3, false);
}

BOOL func_3(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_23();
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
	
		if (func_22(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_21();
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
				func_13();
			
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
			
				if (func_12())
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
		
			if (func_11())
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
		
			func_10();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_9();
		func_4();
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
		func_23();
	}

	return 0;
}

void func_4() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_5())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_5() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_8())
		return false;

	if (func_6(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_6(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_7(plParam0, 20);
}

BOOL func_7(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_8() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_9() // Hash - 0x9CBFA1B7 ^0xC242041E
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

void func_10() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_11() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_12() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_13() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_20(14))
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
		if (func_18(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_17(PLAYER::PLAYER_PED_ID());
		
			if (func_16(num) && !func_20(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_16(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_16(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_17(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_18(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_18(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_16(iParam0))
		return func_19(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_19(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_20(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

void func_21() // Hash - 0x4105D4D8 ^0xA26F94BB
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

BOOL func_22(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_23() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_24(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

BOOL func_25() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_26() // Hash - 0x2AE03F0A ^0xA26438EC
{
	int num;

	if (iLocal_317 == 3)
		func_58(func_17(PLAYER::PLAYER_PED_ID()), 4, 5);
	else
		func_58(func_17(PLAYER::PLAYER_PED_ID()), 1, 3);

	if (iLocal_317 != 3)
		func_39(26, iLocal_317);
	else
		func_39(8, 0);

	if (iLocal_317 == 1)
	{
		num = func_14();
	
		switch (num)
		{
			case 0:
				while (!func_30(-1551606815, 6, 1, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
		
			case 1:
				while (!func_30(-980148216, 6, 2, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
		
			case 2:
				while (!func_30(-1857996981, 6, 4, 144, 7200000, 10000, -1, 201, -1, 0))
				{
					SYSTEM::WAIT(0);
				}
				break;
		}
	}

	func_27();
	func_226();
	return;
}

void func_27() // Hash - 0xD765C186 ^0xD765C186
{
	func_28();
	return;
}

int func_28() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_29(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_29(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

BOOL func_30(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0xCD7D90D3 ^0xCD7D90D3
{
	int num;
	var unk10;
	int num2;
	int num3;

	if (func_29(false))
		return false;

	if (iParam4 < 0)
		return false;

	if (iParam5 < 0)
		return false;

	if (iParam6 == 76)
		return false;

	if (iParam7 == 235)
		return false;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return false;

	if (iParam2 < 1 || iParam2 > 7)
		return false;

	if (Global_113648.f_7690.f_866 < 10)
	{
		num = iParam0;
		num.f_3 = func_38(iParam1);
		num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
		num.f_5 = iParam5;
		num.f_1 = iParam9;
		num.f_2 = iParam2;
		num.f_6 = iParam3;
		num.f_7 = iParam6;
		num.f_8 = iParam7;
		num.f_9 = iParam8;
		MISC::CLEAR_BIT(&(num.f_1), 0);
		Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 /*10*/] = { num };
		Global_113648.f_7690.f_866 = Global_113648.f_7690.f_866 + 1;
		return true;
	}
	else
	{
		unk10 = { func_37(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) };
		num2 = 0;
		func_36(&num2);
		num3 = func_35(unk10, Global_113648.f_7690.f_765[num2 /*10*/]);
	
		if (num3 == 2)
		{
			func_33(Global_113648.f_7690.f_765[num2 /*10*/]);
			Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
			func_32(&unk10);
			return true;
		}
		else if (num3 == 1)
		{
			if (func_31(unk10))
			{
				func_33(Global_113648.f_7690.f_765[num2 /*10*/]);
				Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
				func_32(&unk10);
				return true;
			}
			else
			{
				if (!func_31(Global_113648.f_7690.f_765[num2 /*10*/]))
				{
					Global_113648.f_7690.f_765[num2 /*10*/] = { unk10 };
					func_32(&unk10);
					return true;
				}
			
				func_32(&unk10);
				return true;
			}
		}
		else
		{
			func_33(unk10);
			func_32(&unk10);
			return true;
		}
	}

	return false;
}

BOOL func_31(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Hash - 0x5829CA23 ^0x90D2141D
{
	if (uParam0.f_8 == 0)
		return false;

	return true;
}

void func_32(var uParam0) // Hash - 0x7F9E7548 ^0x7F9E7548
{
	var unk;

	*uParam0 = { unk };
	return;
}

void func_33(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Hash - 0xA7FCC8CC ^0xD13FD65B
{
	if (func_31(uParam0))
		func_34(uParam0.f_8, 0);

	return;
}

void func_34(int iParam0, int iParam1) // Hash - 0xEFDF2B54 ^0x1CE7BA3B
{
	if (iParam0 == 235 || iParam0 == 0)
		return;

	Global_113648.f_8615[iParam0] = 1;
	Global_113648.f_8615.f_236[iParam0] = MISC::GET_GAME_TIMER() + iParam1;
	return;
}

int func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Hash - 0xC393E93F ^0x75404E91
{
	var unk;
	var unk2;

	unk = uParam0.f_3;
	unk2 = uParam10.f_3;

	if (unk > unk2)
		return 2;

	if (unk < unk2)
		return 0;

	return 1;
}

void func_36(var uParam0) // Hash - 0x2F9672FB ^0x2F9672FB
{
	int i;

	*uParam0 = 0;

	for (i = 0; i < Global_113648.f_7690.f_866; i = i + 1)
	{
		if (func_35(Global_113648.f_7690.f_765[i /*10*/], Global_113648.f_7690.f_765[*uParam0 /*10*/]) == 0)
			*uParam0 = i;
	}

	return;
}

struct<10> func_37(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x242D9B5A ^0x9F57922F
{
	int num;

	num = iParam0;
	num.f_3 = func_38(iParam1);
	num.f_4 = MISC::GET_GAME_TIMER() + iParam4;
	num.f_5 = iParam5;
	num.f_1 = iParam9;
	num.f_2 = iParam2;
	num.f_6 = iParam3;
	num.f_7 = iParam6;
	num.f_8 = iParam7;
	num.f_9 = iParam8;
	MISC::CLEAR_BIT(&(num.f_1), 0);
	return num;
}

int func_38(int iParam0) // Hash - 0x17C68833 ^0x17C68833
{
	switch (iParam0)
	{
		case 0:
		case 4:
			return 5;
	
		case 7:
			return 4;
	
		case 2:
			return 3;
	
		case 1:
			return 2;
	
		case 3:
			return 1;
	
		case 5:
		case 6:
			return 0;
	}

	return 7;
}

void func_39(int iParam0, int iParam1) // Hash - 0x514C45BD ^0x514C45BD
{
	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_55(iParam0))
	{
		func_54(iParam0, iParam1);
	
		if (!func_53(51))
		{
			func_49(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_52(), 0, 138, 0);
			func_48(51);
		}
	
		if (func_47(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_46(iParam0, iParam1) != 322)
			func_40(func_46(iParam0, iParam1), uLocal_86, uLocal_86.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_62(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_62(7);
			else
				func_62(1);
	}

	return;
}

void func_40(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_44(891 + iParam0, true, -1);
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
		Global_113648.f_10196[iParam0 /*12*/].f_10 = uParam1;
		Global_113648.f_10196[iParam0 /*12*/].f_11 = uParam2;
	
		if (iParam0 == 287)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
	}

	if (flag)
		func_41();

	return;
}

void func_41() // Hash - 0x9F269E94 ^0x9F269E94
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
		func_43(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_42() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_28();
			}
		}
	}

	return;
}

int func_42() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_43(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_44(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_45();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_45() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_46(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
{
	switch (iParam0)
	{
		case 0:
			return 250;
	
		case 1:
			return 226;
	
		case 2:
			return 243;
	
		case 3:
			return 256;
	
		case 4:
			return 259;
	
		case 5:
			if (iParam1 == 1)
				return 281;
		
			if (iParam1 == 2)
				return 282;
			break;
	
		case 6:
			return 265;
	
		case 7:
			return 218;
	
		case 9:
			if (iParam1 == 1)
				return 271;
		
			if (iParam1 == 2)
				return 272;
		
			if (iParam1 == 3)
				return 273;
		
			if (iParam1 == 4)
				return 274;
		
			if (iParam1 == 5)
				return 275;
		
			if (iParam1 == 6)
				return 276;
		
			if (iParam1 == 7)
				return 277;
		
			if (iParam1 == 8)
				return 278;
		
			if (iParam1 == 9)
				return 279;
		
			if (iParam1 == 10)
				return 280;
			break;
	
		case 10:
			return 219;
	
		case 11:
			if (iParam1 == 1)
				return 246;
		
			if (iParam1 == 2)
				return 247;
		
			if (iParam1 == 3)
				return 248;
		
			if (iParam1 == 4)
				return 249;
			break;
	
		case 12:
			return 254;
	
		case 13:
			if (iParam1 == 1)
				return 260;
		
			if (iParam1 == 2)
				return 261;
		
			if (iParam1 == 3)
				return 262;
		
			if (iParam1 == 4)
				return 264;
			break;
	
		case 14:
			return 283;
	
		case 15:
			if (iParam1 == 1)
				return 224;
		
			if (iParam1 == 2)
				return 225;
			break;
	
		case 16:
			return 252;
	
		case 17:
			if (iParam1 == 1)
				return 244;
		
			if (iParam1 == 2)
				return 245;
			break;
	
		case 18:
			return 253;
	
		case 19:
			return 215;
	
		case 20:
			return 216;
	
		case 21:
			return 251;
	
		case 22:
			if (iParam1 == 1)
				return 221;
		
			if (iParam1 == 2)
				return 222;
			break;
	
		case 23:
			if (iParam1 == 1)
				return 213;
		
			if (iParam1 == 2)
				return 214;
			break;
	
		case 24:
			return 242;
	
		case 25:
			if (iParam1 == 1)
				return 267;
		
			if (iParam1 == 2)
				return 268;
		
			if (iParam1 == 3)
				return 269;
			break;
	
		case 8:
			return 255;
	
		case 26:
			if (iParam1 == 1)
				return 227;
		
			if (iParam1 == 2)
				return 228;
			break;
	
		case 27:
			if (iParam1 == 1)
				return 257;
		
			if (iParam1 == 2)
				return 258;
			break;
	
		case 28:
			return 217;
	
		case 29:
			if (iParam1 == 1)
				return 229;
		
			if (iParam1 == 2)
				return 230;
		
			if (iParam1 == 3)
				return 231;
			break;
	
		case 30:
			return 285;
	
		case 31:
			return 318;
	
		case 32:
			return 319;
	
		case 33:
			return 320;
	}

	return 322;
}

BOOL func_47(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
{
	switch (iParam0)
	{
		case 29:
		case 30:
		case 2:
		case 18:
			return false;
	}

	return true;
}

void func_48(int iParam0) // Hash - 0x12249850 ^0x46987D7A
{
	int offset;
	int i;

	offset = iParam0;

	for (i = 0; offset > 31; i = i + 1)
	{
		offset = offset - 32;
	}

	if (i < 3)
		MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);

	return;
}

void func_49(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0xC4540ECF ^0xC4540ECF
{
	func_50(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_50(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x397C25 ^0xC6646463
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
		func_51();
	}

	return;
}

void func_51() // Hash - 0xCF8881D1 ^0x40507183
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

int func_52() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_15();

	switch (Global_113648.f_2365.f_539.f_4321)
	{
		case 0:
			return 1;
	
		case 1:
			return 2;
	
		case 2:
			return 4;
	}

	return 0;
}

BOOL func_53(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
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

void func_54(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_55(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
{
	int num;

	num = 1;

	switch (iParam0)
	{
		case 1:
			num = 5;
			break;
	
		case 5:
			num = 2;
			break;
	
		case 9:
			num = 10;
			break;
	
		case 11:
			num = 4;
			break;
	
		case 13:
			num = 4;
			break;
	
		case 15:
			num = 2;
			break;
	
		case 17:
			num = 2;
			break;
	
		case 22:
			num = 2;
			break;
	
		case 23:
			num = 2;
			break;
	
		case 25:
			num = 3;
			break;
	
		case 26:
			num = 2;
			break;
	
		case 27:
			num = 2;
			break;
	
		case 29:
			num = 3;
			break;
	}

	return num;
}

int func_56() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_57(unk);
	return num;
}

int func_57(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
{
	switch (MISC::GET_HASH_KEY(&uParam0))
	{
		case joaat("RE_ABANDONEDCAR"):
			return 23;
	
		case joaat("RE_ACCIDENT"):
			return 0;
	
		case joaat("RE_ARRESTS"):
			return 15;
	
		case joaat("RE_ATMROBBERY"):
			return 1;
	
		case joaat("RE_BIKETHIEF"):
			return 26;
	
		case joaat("RE_BORDER"):
			return 29;
	
		case joaat("RE_BURIALS"):
			return 24;
	
		case joaat("RE_BUS_TOURS"):
			return 2;
	
		case joaat("RE_CARTHEFT"):
			return 17;
	
		case joaat("RE_CHASETHIEVES"):
			return 11;
	
		case joaat("RE_CRASHRESCUE"):
			return 16;
	
		case joaat("RE_CULTSHOOTOUT"):
			return 18;
	
		case joaat("RE_DEALGONEWRONG"):
			return 12;
	
		case joaat("RE_DOMESTIC"):
			return 3;
	
		case joaat("RE_DRUNKDRIVER"):
			return 27;
	
		case joaat("RE_GANG_INTIMIDATION"):
			return 20;
	
		case joaat("RE_GANGFIGHT"):
			return 19;
	
		case joaat("RE_GETAWAY_DRIVER"):
			return 4;
	
		case joaat("RE_HITCH_LIFT"):
			return 13;
	
		case joaat("RE_HOMELAND_SECURITY"):
			return 28;
	
		case joaat("RE_LURED"):
			return 7;
	
		case joaat("RE_MUGGINGS"):
			return 25;
	
		case joaat("RE_PAPARAZZI"):
			return 10;
	
		case joaat("RE_PRISONERLIFT"):
			return 22;
	
		case joaat("RE_PRISONVANBREAK"):
			return 21;
	
		case joaat("RE_SECURITYVAN"):
			return 9;
	
		case joaat("RE_SHOPROBBERY"):
			return 5;
	
		case joaat("RE_SNATCHED"):
			return 6;
	
		case joaat("RE_STAG_DO"):
			return 14;
	
		case joaat("RE_YETARIAN"):
			return 30;
	
		case joaat("RE_DUEL"):
			return 31;
	
		case joaat("RE_SEAPLANE"):
			return 32;
	
		case joaat("RE_MONKEY"):
			return 33;
	}

	return -1;
}

void func_58(int iParam0, int iParam1, int iParam2) // Hash - 0xF0BE1C2C ^0xB42E6E17
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
				num = func_61(num2, -1, 0);
				num = num + iParam2;
			
				if (num > 100)
					num = 100;
			
				func_59(num2, num, -1, true, false);
			}
			break;
	}

	return;
}

void func_59(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_60(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_60(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_45();
	
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

int func_61(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_60(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

void func_62(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

float func_63(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
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

BOOL func_64(Ped pedParam0) // Hash - 0x3D210083 ^0xF7E7C389
{
	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false))
			return true;

	return false;
}

void func_65() // Hash - 0xCCB15F0C ^0xDCF17A4C
{
	if (func_64(pedLocal_92) && func_73(veLocal_93))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, false))
		{
			func_72(&uLocal_342);
			func_71(&blLocal_132);
		
			if (iLocal_130 == 0 && !HUD::DOES_BLIP_EXIST(blLocal_131))
				blLocal_131 = func_70(veLocal_93, false, false);
		}
		else
		{
			func_71(&blLocal_131);
		
			if (!HUD::DOES_BLIP_EXIST(blLocal_132))
			{
				blLocal_132 = func_67(pedLocal_92, false, 145);
			
				if (iLocal_343 == 0)
				{
					func_66(&uLocal_342);
					iLocal_343 = 1;
				}
			}
		}
	}

	return;
}

void func_66(var uParam0) // Hash - 0xEE73B491 ^0x5CAB0245
{
	*uParam0 = -99;
	return;
}

Blip func_67(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_68(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_68(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
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

var func_69(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_70(Vehicle veParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x177BFEFF ^0x177BFEFF
{
	return func_68(veParam0, !bParam1, bParam2);
}

void func_71(Blip* pblParam0) // Hash - 0x4C359FE5 ^0xBAF5111C
{
	if (HUD::DOES_BLIP_EXIST(*pblParam0))
	{
		HUD::SET_BLIP_ROUTE(*pblParam0, false);
		HUD::REMOVE_BLIP(pblParam0);
	}

	return;
}

void func_72(var uParam0) // Hash - 0xCBA402AB ^0x6FA3900
{
	*uParam0 = MISC::GET_GAME_TIMER() - 5000;
	return;
}

BOOL func_73(Vehicle veParam0) // Hash - 0x7E47BB06 ^0x692E6B64
{
	if (func_64(veParam0))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
			if (!FIRE::IS_ENTITY_ON_FIRE(veParam0))
				return true;

	return false;
}

void func_74() // Hash - 0xD2E7576D ^0x5BD63948
{
	float num;

	if (func_64(pedLocal_92) && func_73(veLocal_93))
	{
		func_91(blLocal_132, &uLocal_342);
	
		if (fLocal_124 > 0f)
		{
			num = func_63(PLAYER::PLAYER_PED_ID(), pedLocal_92, true);
		
			if (num > fLocal_124 + fLocal_117)
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, false))
				{
					func_62(7);
					func_26();
				}
				else
				{
					func_226();
				}
			}
		}
		else
		{
			fLocal_124 = func_63(PLAYER::PLAYER_PED_ID(), pedLocal_92, true);
		
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
			{
				AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_93, 0);
				AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
			}
		}
	
		if (iLocal_308 == 0)
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_92, 40f, 40f, 40f, false, true, 0))
			{
				func_90();
			
				if (iLocal_311 == 0)
				{
					if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_92, 25f, 25f, 25f, false, true, 0))
					{
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, false) && PED::IS_PED_FACING_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 30f) && func_81(pedLocal_92, PLAYER::PLAYER_PED_ID(), 1126825984, 1, 250, 7) && !PED::IS_PED_RAGDOLL(pedLocal_92) && !TASK::IS_PED_GETTING_UP(pedLocal_92) && func_2(&uLocal_134, "REBTHAU", "REBTH_APEBIK", 4, 0, 0, 0))
						{
							TASK::TASK_PLAY_ANIM(pedLocal_92, sLocal_323, "RETURNING_FRONT_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
							PLAYER::SET_PLAYER_WANTED_LEVEL_NOW(PLAYER::PLAYER_ID(), false);
							iLocal_311 = 1;
						}
					}
					else
					{
						iLocal_311 = 1;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_AT_ENTITY(veLocal_93, pedLocal_92, 35f, 35f, 35f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, false) && !func_80() && func_2(&uLocal_134, "REBTHAU", "REBTH_PLASTE", 4, 0, 0, 0))
		{
			func_78(0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_92, false);
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_122, joaat("PLAYER"));
			PED::SET_PED_CAN_BE_TARGETTED(pedLocal_92, true);
			TASK::TASK_COMBAT_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 0, 16);
			PED::SET_PED_KEEP_TASK(pedLocal_92, true);
			SYSTEM::WAIT(0);
			func_62(7);
			func_26();
		}
	
		if (PED::IS_PED_IN_VEHICLE(pedLocal_92, veLocal_93, false))
		{
			!func_25() && func_2(&uLocal_134, "REBTHAU", "REBTH_GETOFF", 4, 0, 0, 0);
			iLocal_129 = MISC::GET_GAME_TIMER();
			iLocal_89 = 4;
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_93, pedLocal_92, 20f, 20f, 20f, false, true, 0))
		{
			if (func_77())
			{
				if (!func_75(pedLocal_92, SCRIPT_TASK_PERFORM_SEQUENCE))
				{
					iLocal_130 = 1;
					func_78(0);
					func_72(&uLocal_342);
					func_71(&blLocal_132);
					func_71(&blLocal_131);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_93, false);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				
					if (iLocal_308 == 0)
						TASK::TASK_ENTER_VEHICLE(0, veLocal_93, 20000, -1, 2f, 8, 0);
					else
						TASK::TASK_ENTER_VEHICLE(0, veLocal_93, 20000, -1, 2f, 262152, 0);
				
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, veLocal_93, fLocal_114, 786485);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_92, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					PED::SET_PED_KEEP_TASK(pedLocal_92, true);
				}
			}
			else
			{
				switch (iLocal_308)
				{
					case 0:
						if (iLocal_311 == 1 && !func_75(pedLocal_92, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_92) && !TASK::IS_PED_GETTING_UP(pedLocal_92) && func_2(&uLocal_134, "REBTHAU", "REBTH_THANKS", 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 30f) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_92, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7)
								TASK::TASK_PLAY_ANIM(pedLocal_92, sLocal_323, "RETURNING_FRONT_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
						
							iLocal_309 = MISC::GET_GAME_TIMER();
							iLocal_308 = iLocal_308 + 1;
						}
						else
						{
							func_90();
						}
						break;
				
					case 1:
						if (MISC::GET_GAME_TIMER() - iLocal_309 > 10000 && !func_75(pedLocal_92, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_92) && !TASK::IS_PED_GETTING_UP(pedLocal_92) && func_2(&uLocal_134, "REBTHAU", sLocal_305, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_78(0);
								TASK::TASK_PLAY_ANIM(pedLocal_92, sLocal_324, "THANKS_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							}
						
							iLocal_309 = MISC::GET_GAME_TIMER();
							iLocal_308 = iLocal_308 + 1;
						}
						else
						{
							func_78(1);
						}
						break;
				
					case 2:
						if (MISC::GET_GAME_TIMER() - iLocal_309 > 10000 && !func_75(pedLocal_92, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_RAGDOLL(pedLocal_92) && !TASK::IS_PED_GETTING_UP(pedLocal_92) && func_2(&uLocal_134, "REBTHAU", sLocal_306, 4, 0, 0, 0))
						{
							if (PED::IS_PED_FACING_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 30f))
							{
								func_78(0);
								TASK::TASK_PLAY_ANIM(pedLocal_92, sLocal_322, "BIKE_BACK_NOW_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
							}
						
							iLocal_308 = iLocal_308 + 1;
						}
						else
						{
							func_78(1);
						}
						break;
				
					default:
						func_78(1);
						break;
				}
			}
		}
	}

	return;
}

BOOL func_75(Ped pedParam0, eScriptTaskHash esthParam1) // Hash - 0x5CB13EA9 ^0x50B73240
{
	if (func_76(pedParam0))
		if (TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedParam0, esthParam1) == 0)
			return true;

	return false;
}

BOOL func_76(Ped pedParam0) // Hash - 0x7E48B415 ^0x126328AB
{
	if (func_64(pedParam0))
		if (!PED::IS_PED_INJURED(pedParam0))
			return true;

	return false;
}

BOOL func_77() // Hash - 0xBEFDA872 ^0xC37515DB
{
	if (iLocal_130 == 1)
		return true;

	if (MISC::GET_GAME_TIMER() - iLocal_128 < 4000)
		return false;

	if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_93, true))
		return false;

	if (func_64(pedLocal_91) && PED::IS_PED_BEING_JACKED(pedLocal_91))
		return false;

	if (!VEHICLE::IS_VEHICLE_SEAT_FREE(veLocal_93, -1, false))
		return false;

	return true;
}

void func_78(int iParam0) // Hash - 0xDF884B9 ^0x3A8AB9BC
{
	if (func_64(pedLocal_92))
	{
		if (iParam0 == 1)
		{
			if (!PED::IS_PED_IN_GROUP(pedLocal_92) && func_64(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_92, PED::GET_PED_GROUP_INDEX(PLAYER::PLAYER_PED_ID()));
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_92, true);
				PED::SET_GROUP_FORMATION_SPACING(func_79(), 2f, -1082130432, -1082130432);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
			}
		}
		else if (PED::IS_PED_IN_GROUP(pedLocal_92))
		{
			PED::REMOVE_PED_FROM_GROUP(pedLocal_92);
		}
	}

	return;
}

int func_79() // Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_80() // Hash - 0x147BB944 ^0xB08913DF
{
	if (iLocal_317 == 3)
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1875.8583f, 262.3736f, 82.96029f, -1927.3792f, 234.79507f, 90.71558f, 50.25f, false, true, 0))
			return true;

	return false;
}

BOOL func_81(Ped pedParam0, Ped pedParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Hash - 0x275BB58B ^0x275BB58B
{
	BOOL flag;
	var pedBoneCoords;
	int num;

	num = func_89(pedParam0, pedParam1);

	if (!func_64(pedParam0) || !func_64(pedParam1))
	{
		if (num != -1)
			func_88(&iLocal_44[num /*4*/]);
	
		return false;
	}

	if (!func_85(pedParam0, pedParam1, iParam2, iParam3))
		return false;

	if (num == -1)
	{
		num = func_84();
	
		if (num == -1)
			return false;
	
		iLocal_44[num /*4*/].f_1 = pedParam0;
		iLocal_44[num /*4*/].f_2 = pedParam1;
	}

	pedBoneCoords = { PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f) };
	flag = func_82(&iLocal_44[num /*4*/], pedBoneCoords, pedParam1, &(iLocal_44[num /*4*/].f_3), pedParam0, iParam5);
	return flag || MISC::GET_GAME_TIMER() - iLocal_44[num /*4*/].f_3 < iParam4;
}

BOOL func_82(var uParam0, Vector3 vParam1, var uParam2, var uParam3, Ped pedParam4, var uParam5, Ped pedParam6, int iParam7) // Hash - 0xBBBECF07 ^0xBBBECF07
{
	var hit;
	var endCoords;
	var surfaceNormal;
	Ped entityHit;
	int shapeTestResult;

	entityHit = 0;

	if (!func_64(pedParam4))
	{
		*uParam0 = 0;
		return 0;
	}

	if (*uParam0 == 0)
	{
		endCoords = { func_83(pedParam4, iParam7) };
		*uParam0 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vParam1, endCoords + ((endCoords - vParam1) * { 0.1f, 0.1f, 0.1f }), 511, pedParam6, 7);
		return 0;
	}

	shapeTestResult = SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &hit, &endCoords, &surfaceNormal, &entityHit);

	if (shapeTestResult == 0)
	{
		*uParam0 = 0;
		return 0;
	}
	else if (shapeTestResult == 1)
	{
		return 0;
	}

	*uParam0 = 0;

	if (ENTITY::IS_ENTITY_A_PED(entityHit))
	{
		func_64(entityHit);
	
		if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(entityHit) == pedParam4)
		{
			if (bLocal_85)
				GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
		
			*uParam5 = MISC::GET_GAME_TIMER();
			return 1;
		}
	
		return 0;
	}

	if (ENTITY::IS_ENTITY_A_VEHICLE(entityHit))
	{
		func_64(entityHit);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(pedParam4, false))
		{
			if (ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(entityHit) == PED::GET_VEHICLE_PED_IS_IN(pedParam4, false))
			{
				if (bLocal_85)
					GRAPHICS::DRAW_DEBUG_LINE_WITH_TWO_COLOURS(vParam1, ENTITY::GET_ENTITY_COORDS(pedParam4, true), 255, 0, 0, 255, 0, 0, 255, 255);
			
				*uParam5 = MISC::GET_GAME_TIMER();
				return 1;
			}
		}
	
		return 0;
	}

	return 0;
}

Vector3 func_83(Ped pedParam0, int iParam1) // Hash - 0xA6273130 ^0xF7D9CDEA
{
	int randomIntInRange;

	if (iParam1 == 7)
	{
		randomIntInRange = MISC::GET_RANDOM_INT_IN_RANGE(0, 7);
		iParam1 = randomIntInRange;
	}

	if (iParam1 == 0)
		return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
	else if (iParam1 == 1)
		return PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f);
	else if (iParam1 == 2)
		return PED::GET_PED_BONE_COORDS(pedParam0, 39317, 0f, 0f, 0f);
	else if (iParam1 == 3)
		return PED::GET_PED_BONE_COORDS(pedParam0, 18905, 0f, 0f, 0f);
	else if (iParam1 == 4)
		return PED::GET_PED_BONE_COORDS(pedParam0, 57005, 0f, 0f, 0f);
	else if (iParam1 == 5)
		return PED::GET_PED_BONE_COORDS(pedParam0, 63931, 0f, 0f, 0f);
	else if (iParam1 == 6)
		return PED::GET_PED_BONE_COORDS(pedParam0, 36864, 0f, 0f, 0f);

	return ENTITY::GET_ENTITY_COORDS(pedParam0, true);
}

int func_84() // Hash - 0x1398F041 ^0xCD84FF69
{
	int i;

	for (i = 0; i < iLocal_44; i = i + 1)
	{
		if (iLocal_44[i /*4*/] == 0 && iLocal_44[i /*4*/].f_1 == 0 && iLocal_44[i /*4*/].f_2 == 0)
			return i;
	}

	return -1;
}

BOOL func_85(Ped pedParam0, Ped pedParam1, float fParam2, int iParam3) // Hash - 0x6EF1707D ^0x8C069CF9
{
	var unk;
	var entityForwardVector;
	float num;

	unk = { func_87(ENTITY::GET_ENTITY_COORDS(pedParam1, true) - ENTITY::GET_ENTITY_COORDS(pedParam0, true)) };

	if (fParam2 < 0.1f || fParam2 > 360f)
		return true;

	if (iParam3 == 0)
		entityForwardVector = { ENTITY::GET_ENTITY_FORWARD_VECTOR(pedParam0) };
	else
		entityForwardVector = { func_87(PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 5f, 0f) - PED::GET_PED_BONE_COORDS(pedParam0, 31086, 0f, 0f, 0f)) };

	num = func_86(entityForwardVector, unk);

	if (num <= SYSTEM::COS(fParam2 / 2f))
		return false;

	return true;
}

float func_86(float fParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5) // Hash - 0x596BEA29 ^0x5FBCDBE5
{
	return (fParam0 * uParam3) + (fParam0.f_1 * uParam3.f_1) + (fParam0.f_2 * uParam3.f_2);
}

Vector3 func_87(float fParam0, var uParam1, var uParam2) // Hash - 0xFB6A39D2 ^0x80C9C759
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

void func_88(var uParam0) // Hash - 0xA4B72113 ^0x62A5EAE1
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return;
}

int func_89(Ped pedParam0, Ped pedParam1) // Hash - 0xAA445031 ^0xEBA3F8CF
{
	int i;

	for (i = 0; i < iLocal_44; i = i + 1)
	{
		if (iLocal_44[i /*4*/].f_1 == pedParam0 && iLocal_44[i /*4*/].f_2 == pedParam1)
			return i;
	}

	return -1;
}

void func_90() // Hash - 0xA1EA0892 ^0xE4736DC1
{
	if (iLocal_130 == 0 && func_64(pedLocal_92))
	{
		if (func_75(pedLocal_92, SCRIPT_TASK_PERFORM_SEQUENCE))
			TASK::CLEAR_PED_TASKS(pedLocal_92);
	
		if (!func_75(pedLocal_92, SCRIPT_TASK_PLAY_ANIM) && !PED::IS_PED_FACING_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 20f) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_92, SCRIPT_TASK_TURN_PED_TO_FACE_ENTITY) == 7 && !PED::IS_PED_RAGDOLL(pedLocal_92) && !TASK::IS_PED_GETTING_UP(pedLocal_92))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), 0);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
		}
	}

	return;
}

void func_91(Blip blParam0, var uParam1) // Hash - 0x54F8B7E9 ^0xFC9A9E73
{
	int value;
	int num;

	if (*uParam1 == -99)
		*uParam1 = MISC::GET_GAME_TIMER();

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		value = MISC::GET_GAME_TIMER() - *uParam1;
	
		if (value < 5000)
		{
			num = SYSTEM::CEIL(SYSTEM::TO_FLOAT(value) / 1000f);
		
			if ((num * 1000) - value < 500)
				if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
					HUD::SET_BLIP_ALPHA(blParam0, 255);
			else if (HUD::GET_BLIP_ALPHA(blParam0) != 0)
				HUD::SET_BLIP_ALPHA(blParam0, 0);
		}
		else if (*uParam1 != -100)
		{
			*uParam1 = -100;
		
			if (HUD::GET_BLIP_ALPHA(blParam0) != 255)
				HUD::SET_BLIP_ALPHA(blParam0, 255);
		}
	}

	return;
}

void func_92() // Hash - 0x974DC5D2 ^0x2849F4A1
{
	if (func_64(pedLocal_91))
	{
		if (iLocal_120 == 0)
		{
			PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_91, 2, false);
			TASK::CLEAR_PED_TASKS(pedLocal_91);
		
			if (func_73(veLocal_93))
			{
				if (iLocal_317 == 2)
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_93))
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_93);
				
					VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");
				}
			
				if (PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, true))
					PED::KNOCK_PED_OFF_VEHICLE(pedLocal_91);
			}
		
			PED::SET_PED_KEEP_TASK(pedLocal_91, true);
			TASK::TASK_SMART_FLEE_PED(pedLocal_91, PLAYER::PLAYER_PED_ID(), 200f, -1, false, false);
			iLocal_120 = 1;
		}
		else
		{
			if (iLocal_121 == 0 && func_63(pedLocal_91, PLAYER::PLAYER_PED_ID(), true) < 30f && !PED::IS_PED_RAGDOLL(pedLocal_91) && func_75(pedLocal_91, SCRIPT_TASK_SMART_FLEE_PED) && !func_25() && func_2(&uLocal_134, "REBTHAU", sLocal_303, 4, 0, 0, 0))
				iLocal_121 = 1;
		
			if (func_63(pedLocal_91, PLAYER::PLAYER_PED_ID(), true) > 50f)
				func_93(&pedLocal_91, true, 0, 1);
		}
	}

	return;
}

void func_93(Ped* ppedParam0, BOOL bParam1, int iParam2, int iParam3) // Hash - 0x34362197 ^0xC592197
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!PED::IS_PED_INJURED(*ppedParam0))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
		
			if (iParam3 == 0)
				TASK::CLEAR_PED_SECONDARY_TASK(*ppedParam0);
		
			PED::SET_PED_KEEP_TASK(*ppedParam0, bParam1);
		
			if (iParam2 == 1)
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*ppedParam0, false);
		}
	
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(ppedParam0);
	}

	return;
}

void func_94() // Hash - 0xE77FA7B7 ^0xC679BB19
{
	if (func_64(pedLocal_91) && func_64(pedLocal_92) && func_73(veLocal_93))
	{
		if (func_101())
		{
			func_99(&uLocal_330, 0, false);
			func_98(&pedLocal_91);
			func_97(&veLocal_93);
			ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), 25f, 25f, 25f, false, true, 0) && func_2(&uLocal_134, "REBTHAU", sLocal_307, 4, 0, 0, 0);
			TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, true);
			func_96();
		}
		else
		{
			func_95(blLocal_131, veLocal_93, fLocal_117, 1061158912, false);
		}
	}

	return;
}

void func_95(Blip blParam0, Vehicle veParam1, float fParam2, int iParam3, BOOL bParam4) // Hash - 0xBE866CF5 ^0x5FE08F9C
{
	int num;
	float distanceBetweenCoords;
	float num2;

	num2 = fParam2 * iParam3;

	if (HUD::DOES_BLIP_EXIST(blParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(veParam1) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
			{
				if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1), false))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND(255f * ((distanceBetweenCoords - num2) / (fParam2 - num2)));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
			else if (ENTITY::IS_ENTITY_A_PED(veParam1))
			{
				if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				{
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veParam1, true), true);
				
					if (distanceBetweenCoords >= num2 || bParam4)
					{
						num = SYSTEM::ROUND((255f * (distanceBetweenCoords - num2)) / (fParam2 - num2));
					
						if (num <= 0)
							num = 0;
					
						if (num >= 255)
							num = 255;
					
						HUD::SET_BLIP_FLASHES(blParam0, true);
						HUD::SET_BLIP_ALPHA(blParam0, 255 - num);
					}
					else
					{
						HUD::SET_BLIP_FLASHES(blParam0, false);
						HUD::SET_BLIP_ALPHA(blParam0, 255);
					}
				}
			}
		}
	}

	return;
}

void func_96() // Hash - 0xD8C6DE12 ^0xD8C6DE12
{
	func_226();
	return;
}

void func_97(Vehicle* pveParam0) // Hash - 0x8D18F713 ^0xF71A18A8
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*pveParam0, true, false);
	
		if (func_73(*pveParam0))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			{
				if (func_64(PLAYER::PLAYER_PED_ID()))
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
					{
						ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
						return;
					}
				}
			
				VEHICLE::DELETE_VEHICLE(pveParam0);
			}
		}
		else
		{
			if (func_64(PLAYER::PLAYER_PED_ID()))
			{
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), *pveParam0, false))
				{
					ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
					return;
				}
			}
		
			VEHICLE::DELETE_VEHICLE(pveParam0);
		}
	}

	return;
}

void func_98(Ped* ppedParam0) // Hash - 0xCA79453F ^0x7BA88177
{
	if (ENTITY::DOES_ENTITY_EXIST(*ppedParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(*ppedParam0, false))
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(*ppedParam0, false, 1);
	
		if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(*ppedParam0))
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(*ppedParam0, true, false);
	
		PED::DELETE_PED(ppedParam0);
	}

	return;
}

void func_99(var uParam0, const char* sParam1, BOOL bParam2) // Hash - 0xAF87CC41 ^0x7F078B03
{
	const char* str;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (IS_BIT_SET(Global_2793044.f_4690, 26))
			return;

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

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	uParam0->f_1 = 0;
	*uParam0 = 0;
	uParam0->f_2 = -1;
	uParam0->f_8 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	str = sParam1;

	if (MISC::IS_STRING_NULL(str))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			str = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (!MISC::IS_STRING_NULL(uParam0->f_3))
		if (func_100(uParam0->f_3))
			HUD::CLEAR_HELP(true);

	if (!MISC::IS_STRING_NULL(str))
		if (func_100(str))
			HUD::CLEAR_HELP(true);

	return;
}

BOOL func_100(const char* sParam0) // Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

BOOL func_101() // Hash - 0xB5AE5A0 ^0xCDAB2DA
{
	if (func_63(veLocal_93, PLAYER::PLAYER_PED_ID(), true) > fLocal_117 + 100f)
		return true;

	if (func_63(veLocal_93, PLAYER::PLAYER_PED_ID(), true) > fLocal_117)
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_92, sLocal_321, "IDLE_A", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_92, sLocal_321, "IDLE_A") > 0.99f || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_92, sLocal_321, "IDLE_B", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_92, sLocal_321, "IDLE_B") > 0.99f || ENTITY::IS_ENTITY_PLAYING_ANIM(pedLocal_92, sLocal_321, "IDLE_C", 3) && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(pedLocal_92, sLocal_321, "IDLE_C") > 0.99f)
			return true;

	return false;
}

void func_102() // Hash - 0xE9A01978 ^0x48A625DB
{
	if (iLocal_127 > -1 && MISC::GET_GAME_TIMER() - iLocal_127 > 5000 && !func_25() && func_64(pedLocal_91) && func_64(pedLocal_92) && func_73(veLocal_93) && !ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_91, 13f, 13f, 13f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_92, pedLocal_91, 13f, 13f, 13f, false, true, 0) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), 8f, 8f, 8f, false, true, 0) && func_2(&uLocal_134, "REBTHAU", sLocal_302, 4, 0, 0, 0))
		iLocal_127 = -1;

	return;
}

void func_103() // Hash - 0xEDC44DF9 ^0x9463D5B
{
	if (func_104())
	{
		iLocal_128 = MISC::GET_GAME_TIMER();
		func_71(&blLocal_131);
		func_99(&uLocal_330, 0, false);
		MISC::SET_INSTANCE_PRIORITY_HINT(0);
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			veLocal_94 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_94, true, true);
		}
	
		if (func_64(pedLocal_92))
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_92);
	
		func_64(pedLocal_91) && !func_25() && func_2(&uLocal_134, "REBTHAU", "REBTH_INAIR", 4, 0, 0, 0);
		iLocal_89 = 3;
	}
	else
	{
		if (bLocal_326 == false && HUD::DOES_BLIP_EXIST(blLocal_131) && func_64(PLAYER::PLAYER_PED_ID()) && func_64(pedLocal_91))
		{
			if (func_63(PLAYER::PLAYER_PED_ID(), pedLocal_91, true) < 30f || MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(pedLocal_91, true), 10f, true))
			{
				bLocal_326 = true;
				HUD::SHOW_HEIGHT_ON_BLIP(blLocal_131, bLocal_326);
			}
		}
	
		if (iLocal_317 == 2 && func_64(pedLocal_91) && func_73(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
		{
			if (iLocal_312 == 0)
			{
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(veLocal_93, 1, "RE_BikeThief2", 30f, 786468);
				iLocal_312 = 1;
				uLocal_313 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(1, "RE_BikeThief2"), VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, "RE_BikeThief2")) };
			}
			else if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_93) || func_225(veLocal_93, uLocal_313, true) < 5f)
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_93))
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_93);
			
				TASK::TASK_VEHICLE_MISSION_PED_TARGET(pedLocal_91, veLocal_93, PLAYER::PLAYER_PED_ID(), 8, fLocal_114, 786468, 10f, 1f, false);
			}
		}
	}

	return;
}

BOOL func_104() // Hash - 0x7DEC301E ^0xA1C97CB3
{
	if (!func_64(pedLocal_91))
	{
		return true;
	}
	else if (func_64(veLocal_93))
	{
		if (iLocal_344 == 0)
			if (PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
				iLocal_344 = 1;
		else if (!PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_91, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}

	return false;
}

void func_105() // Hash - 0xDF6C390F ^0x18AED82
{
	if (func_64(pedLocal_91) && func_73(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
	{
		if (bLocal_119)
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_91, 40f, 40f, 40f, false, true, 0))
			{
				fLocal_114 = fLocal_116;
				TASK::SET_DRIVE_TASK_CRUISE_SPEED(pedLocal_91, fLocal_114);
				TASK::TASK_LOOK_AT_ENTITY(pedLocal_91, PLAYER::PLAYER_PED_ID(), 20000, SLF_WIDEST_YAW_LIMIT, 2);
				bLocal_119 = false;
			}
		}
		else if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_91, 40f, 40f, 40f, false, true, 0))
		{
			fLocal_114 = fLocal_115;
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(pedLocal_91, fLocal_114);
			TASK::TASK_LOOK_AT_ENTITY(pedLocal_91, PLAYER::PLAYER_PED_ID(), 20000, SLF_WIDEST_YAW_LIMIT, 2);
			bLocal_119 = true;
		}
	}

	return;
}

void func_106() // Hash - 0x7114B099 ^0x7A7FE0B8
{
	if (iLocal_125 < 5 && !func_25() && func_64(pedLocal_91) && func_64(pedLocal_92) && func_73(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_91, 13f, 13f, 13f, false, true, 0) && !ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_92, pedLocal_91, 13f, 13f, 13f, false, true, 0) && MISC::GET_GAME_TIMER() - iLocal_126 > 15000 && func_2(&uLocal_134, "REBTHAU", sLocal_304, 4, 0, 0, 0))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_91, SCRIPT_TASK_VEHICLE_MISSION) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(pedLocal_91))
			TASK::TASK_DRIVE_BY(pedLocal_91, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, true, joaat("FIRING_PATTERN_BURST_FIRE_DRIVEBY"));
	
		iLocal_126 = MISC::GET_GAME_TIMER();
		iLocal_125 = iLocal_125 + 1;
	}

	return;
}

void func_107() // Hash - 0x9453A6AA ^0x3EEAB38F
{
	if (iLocal_310 == 0 && func_64(pedLocal_92) && func_64(pedLocal_91) && func_73(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
	{
		if (iLocal_327 == 0)
		{
			if (func_2(&uLocal_134, "REBTHAU", sLocal_299, 4, func_110(), 0, 0))
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_92);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
				TASK::TASK_LOOK_AT_ENTITY(0, pedLocal_91, -1, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_GO_STRAIGHT_TO_COORD(0, uLocal_105, 2f, 20000, 1193033728, 1056964608);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, veLocal_93, 1000);
				TASK::TASK_PLAY_ANIM(0, sLocal_319, sLocal_320, 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_C", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_A", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_B", 1090519040, -1056964608, -1, 0, 0, false, false, false);
				TASK::TASK_PLAY_ANIM(0, sLocal_321, "IDLE_C", 8f, -8f, -1, 1, 0, false, false, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_92, iLocal_95);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
				iLocal_126 = MISC::GET_GAME_TIMER();
				iLocal_127 = MISC::GET_GAME_TIMER();
			
				if (iLocal_317 == 3)
					sLocal_300 = "REBTH_HELP2X";
				else
					sLocal_300 = "REBTH_HELP2";
			
				iLocal_327 = 1;
			}
		}
		else if (func_64(PLAYER::PLAYER_PED_ID()))
		{
			if (func_63(PLAYER::PLAYER_PED_ID(), pedLocal_92, true) < 30f)
			{
				if (!func_25())
				{
					if (func_2(&uLocal_134, "REBTHAU", sLocal_300, 4, 0, 0, 0))
						iLocal_310 = 1;
				}
				else if (iLocal_328 == 0)
				{
					func_108();
					iLocal_328 = 1;
				}
			}
		}
	}

	return;
}

void func_108() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_109();
	return;
}

void func_109() // Hash - 0x21027D29 ^0xBEB9ECFD
{
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::RESTART_SCRIPTED_CONVERSATION();
		Global_22736 = 0;
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_21725 = 6;
		return;
	}

	return;
}

int func_110() // Hash - 0x2537ACEB ^0xFA9C37E
{
	int num;
	Vector3 vector;

	vector = { 100f, 100f, 20f };

	if (!PED::IS_PED_INJURED(pedLocal_92))
		if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), vector, false, true, 0))
			num = 0;
		else
			num = 1;

	return num;
}

void func_111() // Hash - 0x514393E1 ^0x7366380A
{
	if (func_64(pedLocal_91) && func_73(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_91, veLocal_93, false))
		func_112(&uLocal_330, veLocal_93, 0, 0, true, true, true);

	return;
}

void func_112(var uParam0, Vehicle veParam1, int iParam2, int iParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x85234EBF ^0x85234EBF
{
	func_113(uParam0, veParam1, 0f, 0f, 0f, iParam2, iParam3, bParam4, bParam5, bParam6);
	return;
}

void func_113(var uParam0, Vehicle veParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Hash - 0x61CE440A ^0x61CE440A
{
	func_114(uParam0, veParam1, fParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_114(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, int iParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Hash - 0x811E56D5 ^0xAB2F569F
{
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		func_99(uParam0, 0, false);

	uParam0->f_6 = 2;
	func_115(uParam0, veParam1, uParam2, iParam5, iParam6, bParam7, bParam8, bParam9);
	return;
}

void func_115(var uParam0, Vehicle veParam1, var uParam2, var uParam3, var uParam4, const char* sParam5, int iParam6, BOOL bParam7, BOOL bParam8, BOOL bParam9) // Hash - 0xDAF9A1E8 ^0x9B7C725B
{
	const char* string2;
	BOOL flag;

	if (uParam0->f_1 && CAM::IS_GAMEPLAY_HINT_ACTIVE())
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	string2 = sParam5;

	if (MISC::IS_STRING_NULL(string2))
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.");
		else
			string2 = _("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus.");

	if (func_100(string2))
		func_141();

	if (func_140(veParam1) && ENTITY::IS_ENTITY_VISIBLE(veParam1))
	{
		flag = false;
	
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1));
			PED::REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1), true);
		
			if (PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_A_VEHICLE(veParam1))
		{
			VEHICLE::TRACK_VEHICLE_VISIBILITY(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (VEHICLE::IS_VEHICLE_VISIBLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam1))
		{
			OBJECT::TRACK_OBJECT_VISIBILITY(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1));
		
			if (OBJECT::IS_OBJECT_VISIBLE(ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(veParam1)))
				flag = true;
		}
	
		if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (func_135(uParam0, bParam7, bParam9, false))
				func_131(uParam0, veParam1, uParam2, iParam6);
		
			if (*uParam0)
			{
				*uParam0 = 0;
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_120(string2))
				{
					if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						if (flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
						{
							if (!func_100(string2))
							{
								func_119(string2, -1);
								uParam0->f_3 = string2;
							
								if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
									func_118(true);
							}
						}
					}
				}
			}
			else if (func_120(string2))
			{
				if (MISC::IS_STRING_NULL(uParam0->f_3) && !MISC::IS_STRING_NULL(string2))
				{
					if (ENTITY::IS_ENTITY_ON_SCREEN(veParam1) && flag && !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && bParam8)
					{
						if (!func_100(string2))
						{
							func_119(string2, -1);
							uParam0->f_3 = string2;
						
							if (MISC::ARE_STRINGS_EQUAL(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target."), string2))
								func_118(true);
						}
					}
				}
			}
		}
		else
		{
			if (!MISC::IS_STRING_NULL(sParam5))
				if (func_100(sParam5))
					HUD::CLEAR_HELP(true);
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
						func_99(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
						func_99(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
						func_99(uParam0, string2, true);
				else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
						func_99(uParam0, string2, true);
				else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
						func_99(uParam0, string2, true);
				else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
					func_99(uParam0, string2, true);
		
			if (!func_135(uParam0, bParam7, bParam9, false))
				if (!*uParam0 && !uParam0->f_1 && !func_117(uParam0))
					func_116(uParam0);
		}
	}
	else
	{
		func_99(uParam0, string2, false);
	}

	return;
}

void func_116(var uParam0) // Hash - 0x4809780E ^0x1000DD65
{
	if (func_140(PLAYER::PLAYER_PED_ID()))
		TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());

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
	return;
}

BOOL func_117(var uParam0) // Hash - 0x98F74CA5 ^0xEF4CACA5
{
	int num;

	if (uParam0->f_2 > 0)
	{
		num = uParam0->f_10 / 2;
	
		if (uParam0->f_2 + num > MISC::GET_GAME_TIMER())
			return true;
	}

	return false;
}

int func_118(BOOL bParam0) // Hash - 0xEA423090 ^0xE108A001
{
	switch (Global_43257)
	{
		case 0:
		case 3:
			if (bParam0)
				Global_113648.f_10051.f_100 = Global_113648.f_10051.f_100 + 1;
		
			return Global_113648.f_10051.f_100;
	
		case 4:
			if (bParam0)
				Global_113648.f_10051.f_101 = Global_113648.f_10051.f_101 + 1;
		
			return Global_113648.f_10051.f_101;
	
		case 5:
		case 15:
			if (bParam0)
				Global_113648.f_10051.f_102 = Global_113648.f_10051.f_102 + 1;
		
			return Global_113648.f_10051.f_102;
	
		default:
			break;
	}

	return 3;
}

void func_119(const char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_120(const char* sParam0) // Hash - 0x4F114C67 ^0x9A14E7AA
{
	if (!func_121(true, true, false))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0) && func_100(sParam0) || func_100(_("~s~Press ~INPUT_VEH_CIN_CAM~ to toggle focus on the target.")))
			HUD::CLEAR_HELP(true);
	
		return false;
	}

	switch (Global_43257)
	{
		case 0:
		case 3:
			if (func_118(false) < 3)
				return true;
			break;
	
		case 4:
			if (func_118(false) < 1)
				return true;
			break;
	
		case 5:
		case 15:
			if (func_118(false) < 1)
				return true;
			break;
	
		default:
			break;
	}

	return false;
}

BOOL func_121(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3D231FF2 ^0x1CCF6728
{
	Vehicle vehiclePedIsIn;
	int seatIndex;

	if (bParam0)
		if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
			return false;

	if (bParam2)
		return true;

	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		return false;

	if (func_130(0))
		return false;

	if (func_129())
		return false;

	if (NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
		return false;

	if (Global_75693)
		return false;

	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("APPINTERNET")) > 0)
		return false;

	if (Global_60543)
		return false;

	if (bParam1)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_BOAT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_HELI) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_AIRCRAFT) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(IN_SUBMARINE) == FIRST_PERSON)
					return false;
			else if (PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == CINEMATIC || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(ON_BIKE) == FIRST_PERSON)
					return false;
			else if (CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == CINEMATIC || CAM::GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() == FIRST_PERSON)
				return false;
		
			if (CAM::IS_GAMEPLAY_CAM_LOOKING_BEHIND())
				return false;
		}
	}

	if (func_128() || func_127(*Global_4718592.f_166301) || func_126())
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			seatIndex = func_125(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_TURRET_SEAT(vehiclePedIsIn, seatIndex) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("APC") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("AKULA") && seatIndex != -1 || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn) == joaat("RIOT2") && seatIndex == 0 && func_124(vehiclePedIsIn, 10) && VEHICLE::GET_VEHICLE_MOD(vehiclePedIsIn, 10) != -1)
				return false;
		}
	}

	if (Global_1962010)
		return false;

	if (func_122(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_122(Player plParam0) // Hash - 0xA439E034 ^0x18C6D29E
{
	if (plParam0 != func_8())
		if (func_123(plParam0, true, true))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;
		else if (Global_1575060 && plParam0 == PLAYER::PLAYER_ID() && func_123(plParam0, true, false))
			return Global_2657589[plParam0 /*466*/].f_321.f_7 != -1;

	return false;
}

BOOL func_123(Player plParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FF6E4CA ^0xE6B59972
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

BOOL func_124(Vehicle veParam0, int iParam1) // Hash - 0xCE6C32C8 ^0x91687715
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false))
	{
		if (VEHICLE::GET_NUM_MOD_KITS(veParam0) > 0)
		{
			switch (iParam1)
			{
				case 17:
				case 18:
				case 19:
				case 20:
				case 21:
				case 22:
					return true;
			
				default:
					if (VEHICLE::GET_NUM_VEHICLE_MODS(veParam0, iParam1) > 0)
						return true;
					break;
			}
		}
	}

	return false;
}

int func_125(Ped pedParam0, BOOL bParam1) // Hash - 0x4E1330D6 ^0x886EF094
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

BOOL func_126() // Hash - 0x4228A1C2 ^0xF0823820
{
	return Global_2683862.f_19;
}

BOOL func_127(int iParam0) // Hash - 0x6B8F9071 ^0x6B8F9071
{
	return iParam0 == 51;
}

BOOL func_128() // Hash - 0x4228A1C2 ^0x58D4D226
{
	return Global_2683862.f_18;
}

BOOL func_129() // Hash - 0x44A439DC ^0x3D5209CD
{
	return MISC::GET_GAME_TIMER() <= Global_23270.f_6321 + 100;
}

BOOL func_130(int iParam0) // Hash - 0xE8921B44 ^0x4F063755
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

void func_131(var uParam0, Vehicle veParam1, Vector3 vParam2, var uParam3, var uParam4, int iParam5) // Hash - 0x9F7B2F79 ^0x8B74986F
{
	Ped pedIndexFromEntityIndex;
	int easeInTime;
	int easeOutTime;
	eScriptLookAtFlags flags;
	int num;

	if (Global_1581968 == 1)
		return;

	if (ENTITY::IS_ENTITY_DEAD(veParam1, false))
		func_99(uParam0, 0, false);

	if (func_134(vParam2, 0f, 0f, 0f, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(veParam1))
		{
			pedIndexFromEntityIndex = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam1);
		
			if (!PED::IS_PED_IN_ANY_VEHICLE(pedIndexFromEntityIndex, false))
				if (PED::IS_PED_A_PLAYER(pedIndexFromEntityIndex))
					if (!func_132())
						vParam2 = { 0f, 0f, 1f };
				else if (PED::IS_PED_MALE(pedIndexFromEntityIndex))
					vParam2 = { 0f, 0f, 1f };
		}
	}

	CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
	easeInTime = uParam0->f_9;
	easeOutTime = uParam0->f_10;

	if (iParam5 == 1726668277)
	{
		if (easeInTime < 1500)
			easeInTime = 1500;
	
		if (easeOutTime < 1500)
			easeOutTime = 1500;
	}

	CAM::SET_GAMEPLAY_ENTITY_HINT(veParam1, vParam2, true, -1, easeInTime, easeOutTime, iParam5);
	flags = SLF_WHILE_NOT_IN_FOV;
	num = 3;
	TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), veParam1, -1, flags, num);
	GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
	AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
	AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
	uParam0->f_11 = 1;
	uParam0->f_8 = MISC::GET_GAME_TIMER();
	uParam0->f_1 = 1;
	*uParam0 = 0;
	return;
}

BOOL func_132() // Hash - 0x5976C0FC ^0xC3C6644E
{
	return func_133(PLAYER::PLAYER_ID());
}

BOOL func_133(Player plParam0) // Hash - 0x2281DC14 ^0xFBEE7D11
{
	if (ENTITY::GET_ENTITY_MODEL(PLAYER::GET_PLAYER_PED(plParam0)) == joaat("MP_F_FREEMODE_01"))
		return 1;

	return 0;
}

BOOL func_134(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_135(var uParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0xA880205D ^0xE1080820
{
	if (uParam0->f_1)
		if (MISC::GET_GAME_TIMER() >= uParam0->f_8 + uParam0->f_9)
			uParam0->f_1 = 0;

	switch (uParam0->f_5)
	{
		case 0:
			uParam0->f_7 = 0;
		
			if (uParam0->f_6 == 0)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
				{
					if (func_139(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 1;
						uParam0->f_7 = 1;
					}
				}
				else if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 1)
			{
				if (func_138(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (uParam0->f_6 == 2)
			{
				if (func_139(bParam1, bParam2, bParam3))
				{
					uParam0->f_4 = MISC::GET_GAME_TIMER();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
		
			if (func_117(uParam0))
			{
				uParam0->f_7 = 1;
				uParam0->f_5 = 4;
			}
			break;
	
		case 1:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 <= 500)
			{
				if (uParam0->f_6 == 0)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					{
						if (!func_139(bParam1, bParam2, bParam3))
						{
							uParam0->f_4 = MISC::GET_GAME_TIMER();
							uParam0->f_5 = 3;
						}
					}
					else if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 1)
				{
					if (!func_138(bParam1, bParam2, bParam3))
					{
						uParam0->f_4 = MISC::GET_GAME_TIMER();
						uParam0->f_5 = 3;
					}
				}
				else if (uParam0->f_6 == 2)
				{
					if (!func_139(bParam1, bParam2, bParam3))
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
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					if (!func_139(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (!func_138(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 1)
				if (!func_138(bParam1, bParam2, bParam3) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
					uParam0->f_5 = 0;
			else if (uParam0->f_6 == 2)
				if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
					uParam0->f_5 = 0;
				else if (!func_139(bParam1, bParam2, bParam3))
					uParam0->f_5 = 0;
			break;
	
		case 3:
			if (MISC::GET_GAME_TIMER() - uParam0->f_4 > 500)
				if (uParam0->f_6 == 0)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
						if (func_137(bParam1, bParam2, bParam3))
							uParam0->f_5 = 0;
					else if (func_136(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 1)
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || func_136(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
				else if (uParam0->f_6 == 2)
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || TASK::GET_IS_TASK_ACTIVE(PLAYER::PLAYER_PED_ID(), 2))
						uParam0->f_5 = 0;
					else if (func_137(bParam1, bParam2, bParam3))
						uParam0->f_5 = 0;
			break;
	
		case 4:
			if (!func_117(uParam0))
				uParam0->f_5 = 0;
			break;
	}

	if (!func_121(bParam1, bParam2, bParam3))
	{
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}

	if (uParam0->f_7)
	{
		func_141();
		return true;
	}
	else
	{
		return false;
	}

	return false;
}

BOOL func_136(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_121(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
				return true;
		}
	}

	return false;
}

BOOL func_137(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x3FCF0638 ^0x1EFD5267
{
	if (!func_121(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM))
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_138(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF87F500F ^0xE2038DA5
{
	if (!func_121(bParam0, bParam1, bParam2))
		return false;

	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
		{
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_MELEE_ATTACK_LIGHT, true);
			PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
		
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
				return true;
		}
	}

	return false;
}

BOOL func_139(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF22F9C98 ^0xCA2E1CBD
{
	if (!func_121(bParam0, bParam1, bParam2))
		return false;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_CIN_CAM, true);
	
		if (CAM::IS_FOLLOW_VEHICLE_CAM_ACTIVE())
		{
			if (PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_VEH_CIN_CAM) && MISC::GET_GAME_TIMER() > Global_116)
			{
				CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
				return true;
			}
		}
	}

	return false;
}

BOOL func_140(Vehicle veParam0) // Hash - 0xF847883B ^0xE7694E14
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
		if (ENTITY::IS_ENTITY_A_VEHICLE(veParam0))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(veParam0), false))
				return true;
		else if (ENTITY::IS_ENTITY_A_PED(veParam0))
			if (!PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(veParam0)))
				return true;
		else if (ENTITY::IS_ENTITY_AN_OBJECT(veParam0))
			return true;

	return false;
}

void func_141() // Hash - 0x4941A993 ^0x296D04CD
{
	MISC::SET_BIT(&Global_8254, 4);
	return;
}

void func_142() // Hash - 0x7BB979AF ^0x89996D08
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_91))
	{
		if (PED::IS_PED_INJURED(pedLocal_91))
		{
			func_158();
			func_226();
		}
		else if (func_153())
		{
			if (func_14() == 0)
			{
				func_152(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				sLocal_301 = "REBTH_RESPM";
			}
			else if (func_14() == 1)
			{
				func_152(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
				sLocal_301 = "REBTH_RESPF";
			}
			else if (func_14() == 2)
			{
				func_152(&uLocal_134, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
				sLocal_301 = "REBTH_RESPT";
			}
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_93, false) && !PED::IS_PED_INJURED(pedLocal_91))
			{
				if (iLocal_317 == 2)
				{
					TASK::TASK_ENTER_VEHICLE(pedLocal_91, veLocal_93, 20000, -1, 1073741824, 1, 0);
				}
				else
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_95);
					TASK::TASK_ENTER_VEHICLE(0, veLocal_93, 20000, -1, 1073741824, 1, 0);
					TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_93, PLAYER::PLAYER_PED_ID(), 8, fLocal_114, 786468, 10f, 1f, false);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_95);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_91, iLocal_95);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_95);
					PED::SET_PED_KEEP_TASK(pedLocal_91, true);
				}
			}
		
			func_71(&uLocal_133);
			blLocal_131 = func_67(pedLocal_91, true, 145);
			HUD::SHOW_HEIGHT_ON_BLIP(blLocal_131, bLocal_326);
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
		
			if (iLocal_317 == 1)
				PATHFIND::SET_ROADS_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, false, false, true);
		
			iLocal_89 = 2;
			func_143(true);
		}
	}

	return;
}

int func_143(BOOL bParam0) // Hash - 0x3A78A0E1 ^0x377EFCF7
{
	if (func_146())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_47(Global_113637))
			func_144(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_47(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_144(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_145(iParam0), -1);
					Global_113648.f_24997.f_2 = Global_113648.f_24997.f_2 + 1;
					MISC::SET_BIT(&Global_113644, 0);
				}
			}
			break;
	
		case 1:
			if (!IS_BIT_SET(Global_113644, 1))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_145(iParam0), -1);
					Global_113648.f_24997.f_3 = Global_113648.f_24997.f_3 + 1;
					MISC::SET_BIT(&Global_113644, 1);
				}
			}
			break;
	
		case 2:
			if (!IS_BIT_SET(Global_113644, 2))
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_119(func_145(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

char* func_145(int iParam0) // Hash - 0x599A0BD6 ^0x5A815B29
{
	char* str;

	str = "";

	switch (iParam0)
	{
		case 0:
			str = _("Various events unfold across San Andreas daily. These events will become blipped on the Radar when nearby.");
			break;
	
		case 1:
			str = _("Flashing blue and red blips indicate situations around San Andreas that you can choose to help with.");
			break;
	
		case 2:
			str = _("If you retrieve a stolen item, you can choose to keep it or return it for a reward.");
			break;
	}

	return str;
}

BOOL func_146() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_147(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_147(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_151(0))
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
		if (!func_149(iParam2))
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
			func_148(uParam0, iParam4);
	}

	return 2;
}

void func_148(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_149(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_150(iParam0, Global_43257);
}

BOOL func_150(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_151(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_149(iParam0))
		return false;

	return true;
}

void func_152(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

BOOL func_153() // Hash - 0x616F84E ^0x53C3A5BA
{
	switch (iLocal_317)
	{
		case 1:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 365.9538f, -1971.7162f, 18.34454f, 526.409f, -1861.9406f, 34.529064f, 100f, false, true, 0))
				return true;
			break;
	
		case 2:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 886.14014f, -229.93735f, 67.42569f, 652.7365f, -91.95201f, 83.21314f, 60f, false, true, 0))
				return true;
			break;
	
		case 3:
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1969.382f, 382.13315f, 68.15017f, -1878.1522f, 158.40523f, 104.85044f, 100f, false, true, 0))
				return true;
			break;
	}

	return false;
}

BOOL func_154() // Hash - 0xE1E4E14A ^0x9E38938D
{
	Vector3 vector;
	Vector3 vector2;

	vector = { 16f, 16f, 6f };
	vector2 = { -16f, -16f, -6f };

	if (func_64(pedLocal_91))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_91, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else
		return true;

	if (func_73(veLocal_93))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_93, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else
		return true;

	if (func_64(pedLocal_92))
	{
		if (MISC::IS_BULLET_IN_AREA(PED::GET_PED_BONE_COORDS(pedLocal_92, 31086, 0f, 0f, 0f), 3f, true))
			return true;
	
		vector = { vector + PED::GET_PED_BONE_COORDS(pedLocal_92, 31086, 0f, 0f, 0f) };
		vector2 = { vector2 + PED::GET_PED_BONE_COORDS(pedLocal_92, 31086, 0f, 0f, 0f) };
	
		if (MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_AREA(vector2, vector, joaat("WEAPON_STICKYBOMB"), true))
			return true;
	
		if (GRAPHICS::GET_IS_PETROL_DECAL_IN_RANGE(PED::GET_PED_BONE_COORDS(pedLocal_92, 31086, 0f, 0f, 0f), 6f))
			return true;
	
		if (FIRE::IS_EXPLOSION_IN_SPHERE(-1, PED::GET_PED_BONE_COORDS(pedLocal_92, 31086, 0f, 0f, 0f), 6f))
			return true;
	
		if (PED::IS_PED_FLEEING(pedLocal_92))
			return true;
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), true))
			return true;
	}

	return false;
}

void func_155() // Hash - 0xF0EFEDFF ^0xF0EFEDFF
{
	if (iLocal_118 == 0)
	{
		switch (iLocal_317)
		{
			case 1:
				uLocal_102 = { 433.57f, -1916.68f, 24.04f };
				fLocal_112 = 248.5f;
				uLocal_105 = { 439.054f, -1920.1454f, 23.5581f };
				uLocal_108 = { 434.31f, -1908.87f, 25.92f };
				fLocal_113 = -163.17f;
				uLocal_99 = { 435.18f, -1915.18f, 24.68f };
				fLocal_111 = 226.13f;
				fLocal_115 = 10f;
				fLocal_116 = 20f;
				hLocal_90 = joaat("SCORCHER");
				fLocal_117 = 250f;
				sLocal_305 = "REBTH_THX2";
				sLocal_306 = "REBTH_THX3";
				sLocal_307 = "REBTH_GONE";
				break;
		
			case 2:
				uLocal_102 = { 774.06f, -155.63f, 73.44f };
				fLocal_112 = 144.3932f;
				uLocal_105 = { 769.8723f, -156.9548f, 73.5144f };
				uLocal_108 = { 773.632f, -150.3134f, 74.6217f };
				fLocal_113 = 151.6004f;
				uLocal_99 = { 771.41f, -154.29f, 74.09f };
				fLocal_111 = 150.54f;
				fLocal_115 = 10f;
				fLocal_116 = 20f;
				hLocal_90 = joaat("SCORCHER");
				fLocal_117 = 250f;
				sLocal_305 = "REBTH_THX2";
				sLocal_306 = "REBTH_THX3";
				sLocal_307 = "REBTH_GONE";
				break;
		
			case 3:
				uLocal_102 = { -1927.94f, 254.7125f, 84.4018f };
				fLocal_112 = 285.0046f;
				uLocal_105 = { -1934.7849f, 253.2105f, 83.8164f };
				uLocal_108 = { -1931.04f, 252.19f, 84.99f };
				fLocal_113 = 42.33f;
				uLocal_99 = { -1932.27f, 254.5f, 84.4f };
				fLocal_111 = 96.81f;
				fLocal_115 = 10f;
				fLocal_116 = 35f;
				hLocal_90 = joaat("BATI");
				fLocal_117 = 400f;
				sLocal_305 = "REBTH_THX2X";
				sLocal_306 = "REBTH_THX3X";
				sLocal_307 = "REBTH_GONEX";
				break;
		}
	
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_102 - { 20f, 20f, 20f }, uLocal_102 + { 20f, 20f, 20f }, false, true);
		VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(uLocal_102 - { 20f, 20f, 20f }, uLocal_102 + { 20f, 20f, 20f }, 0);
		MISC::CLEAR_AREA(uLocal_102, 20f, true, false, false, false);
		iLocal_118 = 1;
	}

	STREAMING::REQUEST_MODEL(joaat("G_M_Y_STRPUNK_01"));
	STREAMING::REQUEST_MODEL(joaat("A_M_Y_BEACHVESP_01"));
	STREAMING::REQUEST_MODEL(hLocal_90);

	if (STREAMING::HAS_MODEL_LOADED(joaat("G_M_Y_STRPUNK_01")) && STREAMING::HAS_MODEL_LOADED(joaat("A_M_Y_BEACHVESP_01")) && STREAMING::HAS_MODEL_LOADED(hLocal_90) && func_157() && func_156())
	{
		veLocal_93 = VEHICLE::CREATE_VEHICLE(hLocal_90, uLocal_99, fLocal_111, true, true, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_90);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_90, true);
		VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_93, true, true, false);
		VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(veLocal_93, false);
		VEHICLE::SET_VEHICLE_INFLUENCES_WANTED_LEVEL(veLocal_93, false);
		VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_93, true);
		AUDIO::START_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(veLocal_93, "RE_CAR_STEAL_STOLEN_VEHICLE", 0);
		fLocal_114 = fLocal_116;
	
		if (iLocal_317 == 3)
		{
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_93, 49, 0);
			VEHICLE::SET_VEHICLE_MOD_KIT(veLocal_93, 0);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 16, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 11, 3, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 12, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 13, 2, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 23, 10, false);
			VEHICLE::SET_VEHICLE_MOD(veLocal_93, 24, 10, false);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_93, 22, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_93, 17, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_93, 21, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_93, 20, true);
			VEHICLE::TOGGLE_VEHICLE_MOD(veLocal_93, 19, true);
			VEHICLE::SET_VEHICLE_COLOURS(veLocal_93, 89, 89);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(veLocal_93, 0, 1);
			VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(veLocal_93, 1);
		}
	
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupVictim", &hLocal_122);
		PED::ADD_RELATIONSHIP_GROUP("re_bikethief_relGroupThief", &hLocal_123);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_123, hLocal_122);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_123, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_122, joaat("PLAYER"));
		pedLocal_91 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("G_M_Y_STRPUNK_01"), uLocal_108, fLocal_113, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_STRPUNK_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_91, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_91, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_91, hLocal_123);
		PED::SET_PED_COMBAT_MOVEMENT(pedLocal_91, CM_WillRetreat);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_91, BF_AlwaysFlee, true);
		PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_91, BF_Aggressive, false);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_91, 1, true);
		PED::SET_PED_HELMET(pedLocal_91, false);
		PED::SET_PED_CONFIG_FLAG(pedLocal_91, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_91, 281, true);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(pedLocal_91, KNOCKOFFVEHICLE_EASY);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_91, "G_M_Y_StreetPunk_01_BLACK_MINI_03");
		TASK::TASK_PLAY_ANIM(pedLocal_91, sLocal_318, "base", 8f, -8f, -1, 1, 0, false, false, false);
		pedLocal_92 = PED::CREATE_PED(PED_TYPE_DEALER, joaat("A_M_Y_BEACHVESP_01"), uLocal_102, fLocal_112, true, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BEACHVESP_01"));
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_92, true);
		ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(pedLocal_92, true);
		PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_92, 8, true);
	
		if (iLocal_317 == 3)
			PED::SET_PED_HELMET(pedLocal_92, true);
		else
			PED::SET_PED_HELMET(pedLocal_92, false);
	
		PED::SET_PED_CONFIG_FLAG(pedLocal_92, 26, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_92, 42, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_92, 167, true);
		PED::SET_PED_CONFIG_FLAG(pedLocal_92, 281, true);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_92, hLocal_122);
		PED::SET_PED_CAN_BE_TARGETTED(pedLocal_92, false);
		AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_92, "A_M_Y_BeachVesp_01_LATINO_MINI_01");
		TASK::TASK_START_SCENARIO_IN_PLACE(pedLocal_92, "WORLD_HUMAN_STAND_MOBILE", 0, true);
		func_152(&uLocal_134, 1, pedLocal_91, "BThief", 0, 1);
		func_152(&uLocal_134, 2, pedLocal_92, "BThiefVictim", 0, 1);
	
		if (iLocal_316 == 0)
		{
			if (iLocal_317 == 3)
				sLocal_299 = "REBTH_HELPX";
			else
				sLocal_299 = "REBTH_HELP";
		
			sLocal_303 = "REBTH_RUNSOF";
			sLocal_304 = "REBTH_TAUNT";
			sLocal_320 = "I_CANT_CATCH_HIM_ON_FOOT";
		}
		else if (iLocal_316 == 1)
		{
			if (iLocal_317 == 3)
				sLocal_299 = "REBTH_HLPBX";
			else
				sLocal_299 = "REBTH_HLPB";
		
			sLocal_303 = "REBTH_RUNB";
			sLocal_304 = "REBTH_TNTB";
			sLocal_320 = "MY_DADS_GOING_TO_KILL_ME";
		}
		else
		{
			sLocal_299 = "REBTH_HLPC";
			sLocal_303 = "REBTH_RUNC";
			sLocal_304 = "REBTH_TNTC";
			sLocal_320 = "PLEASE_MAN_YOU_GOTTA_HELP_ME";
		}
	
		PED::SET_CREATE_RANDOM_COPS(false);
		iLocal_89 = 1;
	}

	return;
}

BOOL func_156() // Hash - 0xFB1BD0B3 ^0x7C604281
{
	if (iLocal_317 == 2)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(1, "RE_BikeThief2");
	
		if (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(1, "RE_BikeThief2"))
			return false;
	}

	return true;
}

BOOL func_157() // Hash - 0xDBDAF942 ^0xC68ACF37
{
	STREAMING::REQUEST_ANIM_DICT(sLocal_318);
	STREAMING::REQUEST_ANIM_DICT(sLocal_319);
	STREAMING::REQUEST_ANIM_DICT(sLocal_321);
	STREAMING::REQUEST_ANIM_DICT(sLocal_322);
	STREAMING::REQUEST_ANIM_DICT(sLocal_324);
	STREAMING::REQUEST_ANIM_DICT(sLocal_323);

	if (STREAMING::HAS_ANIM_DICT_LOADED(sLocal_318) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_319) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_321) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_322) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_324) && STREAMING::HAS_ANIM_DICT_LOADED(sLocal_323))
		return true;

	return false;
}

void func_158() // Hash - 0xF3AF687E ^0x7EEAFE1B
{
	if (!PED::IS_PED_INJURED(pedLocal_92))
	{
		if (func_75(pedLocal_92, SCRIPT_TASK_START_SCENARIO_IN_PLACE))
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_92);
		else
			TASK::CLEAR_PED_TASKS(pedLocal_92);
	
		PED::SET_PED_KEEP_TASK(pedLocal_92, true);
		TASK::TASK_SMART_FLEE_PED(pedLocal_92, PLAYER::PLAYER_PED_ID(), 100f, -1, false, false);
	}

	if (!PED::IS_PED_INJURED(pedLocal_91))
	{
		PED::SET_PED_KEEP_TASK(pedLocal_91, true);
		TASK::TASK_SMART_FLEE_PED(pedLocal_91, PLAYER::PLAYER_PED_ID(), 100f, -1, false, true);
	}

	return;
}

BOOL func_159() // Hash - 0x4FDF6CE8 ^0x68561C6C
{
	if (iLocal_89 == 0 && func_178())
		return true;

	if (iLocal_89 == 1 && func_166())
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_92))
	{
		if (PED::IS_PED_INJURED(pedLocal_92))
		{
			return true;
		}
		else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_92, PLAYER::PLAYER_PED_ID(), true))
		{
			func_164();
			func_163(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
		else if (func_160(pedLocal_92, 170f))
		{
			func_164();
			func_163(&uLocal_134, "REBTHAU", "REBTH_ATTACK", 4, 0, 0);
			return true;
		}
	}

	if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 && iLocal_311 == 1)
		return true;

	if (ENTITY::DOES_ENTITY_EXIST(veLocal_93) && !VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_93, false))
		return true;

	return false;
}

BOOL func_160(Ped pedParam0, float fParam1) // Hash - 0x5EA05E45 ^0x7984EB04
{
	float xSize;

	if (func_64(PLAYER::PLAYER_PED_ID()) && func_64(pedParam0))
	{
		if (func_162(pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				xSize = 40f;
			else
				xSize = 3f;
		
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedParam0, xSize, xSize, xSize, false, true, 0))
				if (func_161(pedParam0, fParam1))
					return true;
		}
	}

	return false;
}

BOOL func_161(Ped pedParam0, float fParam1) // Hash - 0xF1789D04 ^0x3F9D1900
{
	return func_81(pedParam0, PLAYER::PLAYER_PED_ID(), fParam1, 1, 250, 7);
}

BOOL func_162(Ped pedParam0) // Hash - 0xEC80536A ^0x2D4CF2B0
{
	if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) && WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
		return true;

	return false;
}

void func_163(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xF7ECDFD9 ^0x6B079C3E
{
	func_24(uParam0, 145, sParam1, iParam4, iParam5, 0);

	if (iParam3 > 7)
		if (iParam3 < 12)
			iParam3 = 7;

	MISC::SET_BIT(&Global_20591, 0);
	Global_21728 = iParam3;
	TEXT_LABEL_ASSIGN_STRING(&Global_21715, sParam2, 24);
	return;
}

void func_164() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_165();
	return;
}

void func_165() // Hash - 0xF6D04E68 ^0x80AE5309
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

BOOL func_166() // Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_149(5))
		return true;

	if (func_174())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_173())
			return false;

	if (func_167(100f, true) != -1)
		return true;

	return false;
}

int func_167(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
{
	var unk;
	int num;
	int num2;
	float num3;
	float distanceBetweenCoords;
	int num4;
	int i;
	BOOL flag;

	num2 = -1;
	num3 = fParam0;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (func_16(func_14()))
		{
			num4 = func_52();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_168(num, &unk);
					distanceBetweenCoords = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), unk.f_6, true);
				
					if (distanceBetweenCoords < num3)
					{
						flag = true;
					
						if (bParam1)
							if (num4 != unk.f_26)
								flag = false;
					
						if (flag)
						{
							num2 = num;
							num3 = distanceBetweenCoords;
						}
					}
				}
			}
		}
	}

	return num2;
}

void func_168(int iParam0, var uParam1) // Hash - 0xDDFDA55C ^0x42B55FB0
{
	switch (iParam0)
	{
		case 0:
			func_169(uParam1, "Abigail1", func_171(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 1:
			func_169(uParam1, "Abigail2", func_171(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 2:
			func_169(uParam1, "Barry1", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 3:
			func_169(uParam1, "Barry2", func_171(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 4:
			func_169(uParam1, "Barry3", func_171(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 5:
			func_169(uParam1, "Barry3A", func_171(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 6:
			func_169(uParam1, "Barry3C", func_171(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 7:
			func_169(uParam1, "Barry4", func_171(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_170(iParam0), 0, 0);
			break;
	
		case 8:
			func_169(uParam1, "Dreyfuss1", func_171(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 9:
			func_169(uParam1, "Epsilon1", func_171(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 10:
			func_169(uParam1, "Epsilon2", func_171(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 11:
			func_169(uParam1, "Epsilon3", func_171(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 12:
			func_169(uParam1, "Epsilon4", func_171(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 13:
			func_169(uParam1, "Epsilon5", func_171(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 14:
			func_169(uParam1, "Epsilon6", func_171(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 15:
			func_169(uParam1, "Epsilon7", func_171(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 16:
			func_169(uParam1, "Epsilon8", func_171(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 17:
			func_169(uParam1, "Extreme1", func_171(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 18:
			func_169(uParam1, "Extreme2", func_171(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 19:
			func_169(uParam1, "Extreme3", func_171(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 20:
			func_169(uParam1, "Extreme4", func_171(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 21:
			func_169(uParam1, "Fanatic1", func_171(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_170(iParam0), 1, 0);
			break;
	
		case 22:
			func_169(uParam1, "Fanatic2", func_171(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_170(iParam0), 1, 0);
			break;
	
		case 23:
			func_169(uParam1, "Fanatic3", func_171(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_170(iParam0), 0, 1);
			break;
	
		case 24:
			func_169(uParam1, "Hao1", func_171(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_170(iParam0), 0, 1);
			break;
	
		case 25:
			func_169(uParam1, "Hunting1", func_171(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 26:
			func_169(uParam1, "Hunting2", func_171(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 27:
			func_169(uParam1, "Josh1", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 28:
			func_169(uParam1, "Josh2", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 29:
			func_169(uParam1, "Josh3", func_171(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 30:
			func_169(uParam1, "Josh4", func_171(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 31:
			func_169(uParam1, "Maude1", func_171(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 32:
			func_169(uParam1, "Minute1", func_171(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 33:
			func_169(uParam1, "Minute2", func_171(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 34:
			func_169(uParam1, "Minute3", func_171(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 35:
			func_169(uParam1, "MrsPhilips1", func_171(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 36:
			func_169(uParam1, "MrsPhilips2", func_171(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 37:
			func_169(uParam1, "Nigel1", func_171(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 38:
			func_169(uParam1, "Nigel1A", func_171(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 39:
			func_169(uParam1, "Nigel1B", func_171(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 40:
			func_169(uParam1, "Nigel1C", func_171(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 41:
			func_169(uParam1, "Nigel1D", func_171(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_170(iParam0), 1, 1);
			break;
	
		case 42:
			func_169(uParam1, "Nigel2", func_171(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 43:
			func_169(uParam1, "Nigel3", func_171(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 1);
			break;
	
		case 44:
			func_169(uParam1, "Omega1", func_171(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 45:
			func_169(uParam1, "Omega2", func_171(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 46:
			func_169(uParam1, "Paparazzo1", func_171(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 47:
			func_169(uParam1, "Paparazzo2", func_171(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 48:
			func_169(uParam1, "Paparazzo3", func_171(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 49:
			func_169(uParam1, "Paparazzo3A", func_171(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 50:
			func_169(uParam1, "Paparazzo3B", func_171(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 51:
			func_169(uParam1, "Paparazzo4", func_171(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 52:
			func_169(uParam1, "Rampage1", func_171(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 54:
			func_169(uParam1, "Rampage3", func_171(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 55:
			func_169(uParam1, "Rampage4", func_171(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 56:
			func_169(uParam1, "Rampage5", func_171(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_170(iParam0), 0, 0);
			break;
	
		case 53:
			func_169(uParam1, "Rampage2", func_171(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_170(iParam0), 1, 0);
			break;
	
		case 57:
			func_169(uParam1, "TheLastOne", func_171(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 58:
			func_169(uParam1, "Tonya1", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 59:
			func_169(uParam1, "Tonya2", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 60:
			func_169(uParam1, "Tonya3", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 61:
			func_169(uParam1, "Tonya4", func_171(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		case 62:
			func_169(uParam1, "Tonya5", func_171(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_170(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_169(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
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

int func_170(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_171(int iParam0) // Hash - 0x609D23E7 ^0x4E19AD9D
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_172(iParam0) };

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

struct<2> func_172(int iParam0) // Hash - 0x155CA5AF ^0x6A246CFA
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

BOOL func_173() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_174() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_177() && !func_173())
		return true;

	if (func_176() && func_175())
		return true;

	return false;
}

BOOL func_175() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_176() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_177() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_178() // Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_86) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_173())
			return false;
	}

	if (func_174())
		return true;

	if (func_167(100f, true) != -1)
		return true;

	return false;
}

void func_179() // Hash - 0xF3B2B67E ^0xF3B2B67E
{
	return;
}

int func_180() // Hash - 0xB2E863F1 ^0xB2E863F1
{
	int num;

	if (func_181(26, 1))
		num = num + 1;

	if (func_181(26, 2))
		num = num + 1;

	if (func_181(8, 0))
		num = num + 1;

	return num;
}

BOOL func_181(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

void func_182(int iParam0) // Hash - 0x669CF011 ^0x221AAF16
{
	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	func_184(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_183();
	return;
}

void func_183() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_184(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_185(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_56();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_224())
			return false;

	uLocal_86 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_173())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_29(false))
			return false;
	
		if (func_174())
			return false;
	
		if (func_223())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_16(func_14()))
			if (func_167(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_86.f_2 > 50f)
				return false;
	
		if (!func_222(iParam3))
			return false;
	
		if (func_16(func_14()))
			if (func_221(func_14()) == 4 || func_221(func_14()) == 5)
				return false;
	
		if (func_16(func_14()))
			if (!func_220(iParam3, iParam4, 145))
				return false;
	
		if (!func_219(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_218())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_209(4))
			return false;
	
		if (!func_149(5))
			return false;
	
		if (func_181(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_181(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_222(30) && !func_181(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_16(func_14()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_208(num))
					if (func_186(i))
						if (!func_134(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_14() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_186(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_187(num);
}

BOOL func_187(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_188(iParam0, 1);
}

int func_188(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_208(iParam0))
		return 0;

	func_189(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_189(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_190(func_201(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_190(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_200(iParam0, iParam1))
	{
		num = func_199(iParam1);
		num2 = func_197(iParam0);
		num3 = func_197(iParam0) - func_197(iParam1);
		num4 = func_199(iParam0) - func_199(iParam1);
		num5 = func_196(iParam0) - func_196(iParam1);
		num6 = func_195(iParam0) - func_195(iParam1);
		num7 = func_194(iParam0) - func_194(iParam1);
		num8 = func_193(iParam0) - func_193(iParam1);
	}
	else
	{
		num = func_199(iParam0);
		num2 = func_197(iParam1);
		num3 = func_197(iParam1) - func_197(iParam0);
		num4 = func_199(iParam1) - func_199(iParam0);
		num5 = func_196(iParam1) - func_196(iParam0);
		num6 = func_195(iParam1) - func_195(iParam0);
		num7 = func_194(iParam1) - func_194(iParam0);
		num8 = func_193(iParam1) - func_193(iParam0);
	}

	while (num8 < 0)
	{
		num8 = num8 + 60;
		num7 = num7 - 1;
	}

	while (num8 > 59)
	{
		num8 = num8 - 60;
		num7 = num7 + 1;
	}

	while (num7 < 0)
	{
		num7 = num7 + 60;
		num6 = num6 - 1;
	}

	while (num7 > 59)
	{
		num7 = num7 - 60;
		num6 = num6 + 1;
	}

	while (num6 < 0)
	{
		num6 = num6 + 24;
		num5 = num5 - 1;
	}

	while (num6 > 23)
	{
		num6 = num6 - 24;
		num5 = num5 + 1;
	}

	while (num5 < 0)
	{
		while (num4 < 0)
		{
			num4 = num4 + 12;
			num3 = num3 - 1;
		}
	
		num5 = num5 + func_192(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_191(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
	}

	while (num4 < 0)
	{
		num4 = num4 + 12;
		num3 = num3 - 1;
	}

	while (num4 > 12)
	{
		num4 = num4 - 12;
		num3 = num3 + 1;
	}

	*uParam2 = num8;
	*uParam3 = num7;
	*uParam4 = num6;
	*uParam5 = num5;
	*uParam6 = num4;
	*uParam7 = num3;
	return;
}

float func_191(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
{
	float num;

	if (fParam1 == fParam2)
		return fParam1;

	num = fParam2 - fParam1;
	fParam0 = fParam0 - ((float)SYSTEM::ROUND((fParam0 - fParam1) / num) * num);

	if (fParam0 < fParam1)
		fParam0 = fParam0 + num;

	return fParam0;
}

int func_192(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_193(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_194(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_195(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_196(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_197(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_198(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_199(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_200(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_208(iParam1) || !func_208(iParam0))
		return 1;

	num = func_197(iParam0);
	num2 = func_197(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_199(iParam0);
	num2 = func_199(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_196(iParam0);
	num2 = func_196(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_195(iParam0);
	num2 = func_195(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_194(iParam0);
	num2 = func_194(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_193(iParam0);
	num2 = func_193(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_201() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_207(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_206(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_205(&unk, CLOCK::GET_CLOCK_HOURS());
	func_204(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_203(&unk, CLOCK::GET_CLOCK_MONTH());
	func_202(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_202(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_203(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_204(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_199(*uParam0);
	num2 = func_197(*uParam0);

	if (iParam1 < 1 || iParam1 > func_192(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_205(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_206(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_207(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_208(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_193(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_194(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_195(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_197(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_199(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_196(iParam0);

	if (num6 < 1 || num6 > func_192(num5, num4))
		return false;

	return true;
}

BOOL func_209(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_14();
			
				if (!func_16(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_22(8, -1) || func_215() || func_214() || func_213() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_217() || Global_32166 || func_216() || func_22(8, -1) || func_213() || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_22(8, -1) || func_213() || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_217() || Global_112695 || Global_32166 || func_216() || func_22(8, -1) || func_215() || func_214() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_217() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_22(8, -1) || func_212() || func_211() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_22(8, -1) || func_215() || func_214() || func_211() || func_210())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_217() || Global_32166 || func_216() || func_22(8, -1) || func_214() || func_213() || func_212() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_217() || func_214() || Global_112695 || Global_32166 || func_216() || Global_44446 || func_22(8, -1) || func_213() || func_211() || func_212() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_217() || Global_112695 || Global_32166 || func_216() || func_22(8, -1) || func_213() || func_211() || func_215() || func_214() || func_212())
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

BOOL func_210() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_211() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_212() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_213() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_214() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_215() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_216() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_217() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_218() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_13();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_219(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_200(func_201(), iParam0);
}

BOOL func_220(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_14();

	if (iParam2 != 145 && iParam2 == 0 || iParam2 == 1 || iParam2 == 2)
		num2 = iParam2;

	switch (iParam0)
	{
		case 18:
			if (num2 == 2)
				num = 1;
			break;
	
		case 19:
			if (num2 != 2)
				num = 1;
			break;
	
		case 20:
			if (num2 != 1)
				num = 1;
			break;
	
		case 28:
			if (num2 != 2)
				num = 1;
			break;
	
		case 13:
			if (num2 == 0)
				if (iParam1 == 2)
					num = 0;
				else
					num = 1;
			else
				num = 1;
			break;
	
		case 22:
			if (iParam1 == 2 || num2 != 2)
				num = 1;
			break;
	
		case 30:
			if (num2 != 2)
				num = 1;
			break;
	
		default:
			num = 1;
			break;
	}

	return num;
}

int func_221(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_16(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_222(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_224())
			return false;

	num = iParam0;

	if (num < 31)
	{
		flag = IS_BIT_SET(Global_113648.f_24997, num);
	}
	else
	{
		num = num - 31;
		flag = IS_BIT_SET(Global_113648.f_24997.f_1, num);
	}

	return flag;
}

BOOL func_223() // Hash - 0xB72C022E ^0x452A7B6D
{
	Vehicle vehiclePedIsIn;

	if (Global_32315)
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, 0, false)))
					return true;
		}
	}

	return false;
}

BOOL func_224() // Hash - 0x44DD83CC ^0x7B62A376
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

float func_225(Vehicle veParam0, Vector3 vParam1, var uParam2, var uParam3, BOOL bParam4) // Hash - 0xC22B942A ^0xE0DB8793
{
	Vector3 entityCoords;

	if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(veParam0, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, vParam1, bParam4);
}

void func_226() // Hash - 0xE9B372B0 ^0x6F85E540
{
	func_99(&uLocal_330, 0, false);

	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("RE_CAR_STEAL_SCENE"))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_93, false))
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(veLocal_93, 0);
	
		AUDIO::STOP_AUDIO_SCENE("RE_CAR_STEAL_SCENE");
	}

	if (iLocal_317 != 3)
		func_229(26);
	else
		func_229(8);

	if (iLocal_317 == 1)
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(472.19504f, -1974.9023f, 18.577868f, 572.74677f, -1921.2164f, 28.686325f, 75f, 1);

	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_325, false);
	VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(uLocal_102 - { 20f, 20f, 20f }, uLocal_102 + { 20f, 20f, 20f }, true, true);

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_93, false))
	{
		VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(veLocal_93, true);
	
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(veLocal_93))
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(veLocal_93);
	}

	if (iLocal_317 == 2)
		VEHICLE::REMOVE_VEHICLE_RECORDING(1, "RE_BikeThief2");

	func_71(&uLocal_133);
	func_71(&blLocal_131);
	func_72(&uLocal_342);
	func_71(&blLocal_132);
	func_78(0);
	func_228(&uLocal_134, 0);
	func_228(&uLocal_134, 1);
	func_228(&uLocal_134, 2);

	if (func_64(pedLocal_92) && func_64(veLocal_93) && PED::IS_PED_IN_VEHICLE(pedLocal_92, veLocal_93, false))
	{
		TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_92, veLocal_93, fLocal_114, 786485);
		PED::SET_PED_KEEP_TASK(pedLocal_92, true);
	}

	func_93(&pedLocal_91, true, 0, 1);
	func_93(&pedLocal_92, true, 0, 1);
	func_227(&veLocal_93);

	if (func_64(veLocal_94))
	{
		VEHICLE::SET_LAST_DRIVEN_VEHICLE(veLocal_94);
		func_227(&veLocal_94);
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("G_M_Y_STRPUNK_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("A_M_Y_BEACHVESP_01"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("SCORCHER"));
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("BATI"));
	STREAMING::REMOVE_ANIM_DICT(sLocal_318);
	STREAMING::REMOVE_ANIM_DICT(sLocal_319);
	STREAMING::REMOVE_ANIM_DICT(sLocal_321);
	STREAMING::REMOVE_ANIM_DICT(sLocal_322);
	STREAMING::REMOVE_ANIM_DICT(sLocal_323);
	STREAMING::REMOVE_ANIM_DICT(sLocal_324);
	MISC::SET_INSTANCE_PRIORITY_HINT(0);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_227(Vehicle* pveParam0) // Hash - 0xC50F9886 ^0x638B6124
{
	if (ENTITY::DOES_ENTITY_EXIST(*pveParam0))
	{
		ENTITY::IS_ENTITY_DEAD(*pveParam0, false);
	
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*pveParam0) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(*pveParam0, true))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(pveParam0);
	}

	return;
}

void func_228(var uParam0, int iParam1) // Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_229(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_56();

	if (iParam0 == -1)
		return;

	if (func_240())
	{
		func_233(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_232(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_231(Global_113637, true), 64);
	
		if (func_55(Global_113637) > 0)
		{
			TEXT_LABEL_APPEND_STRING(&name, " Variation ", 64);
			TEXT_LABEL_APPEND_INT(&name, Global_113636, 64);
		}
	
		STATS::PLAYSTATS_RANDOM_MISSION_DONE(&name, Global_113634, MISC::GET_GAME_TIMER() - Global_113635, 0);
	}
	else if (IS_BIT_SET(Global_113644, 0) && Global_113648.f_24997.f_2 < 3)
	{
		MISC::CLEAR_BIT(&Global_113644, 0);
	}

	func_230(&Global_32223);
	Global_113638 = false;
	func_184(-1);
	return;
}

void func_230(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
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

char* func_231(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0x6ED71394
{
	switch (iParam0)
	{
		case 0:
			return "RE_ACCIDENT";
	
		case 1:
			return "RE_ATMROBBERY";
	
		case 2:
			return "RE_BUSTOUR";
	
		case 3:
			return "RE_DOMESTIC";
	
		case 4:
			return "RE_GETAWAYDRIVER";
	
		case 5:
			return "RE_SHOPROBBERY";
	
		case 6:
			return "RE_SNATCHED";
	
		case 7:
			return "RE_LURED";
	
		case 8:
			return "RE_BIKETHIEFSTAMP";
	
		case 9:
			return "RE_SECURITYVAN";
	
		case 10:
			return "RE_PAPARAZZI";
	
		case 11:
			return "RE_CHASETHIEVES";
	
		case 12:
			return "RE_DEALGONEWRONG";
	
		case 13:
			return "RE_HITCHLIFT";
	
		case 14:
			return "RE_STAG";
	
		case 15:
			return "RE_ARREST";
	
		case 16:
			return "RE_CRASHRESCUE";
	
		case 17:
			return "RE_CARTHEFT";
	
		case 18:
			return "RE_CULTSHOOTOUT";
	
		case 19:
			return "RE_GANGFIGHT";
	
		case 20:
			return "RE_GANGINTIMIDATION";
	
		case 21:
			return "RE_PRISONVANBREAK";
	
		case 22:
			return "RE_PRISONERLIFT";
	
		case 23:
			return "RE_ABANDONEDCAR";
	
		case 24:
			return "RE_BURIAL";
	
		case 25:
			return "RE_MUGGING";
	
		case 26:
			return "RE_BIKETHIEF";
	
		case 27:
			return "RE_DRUNKDRIVER";
	
		case 28:
			return "RE_HOMELANDSECURITY";
	
		case 29:
			return "RE_BORDERPATROL";
	
		case 30:
			return "RE_SIMEONYETARIAN";
	
		case 31:
			return "RE_DUEL";
	
		case 32:
			return "RE_SEAPLANE";
	
		case 33:
			return "RE_MONKEYPHOTO";
	
		case -1:
			return "RE_NONE";
	}

	!bParam1;
	return "UNKNOWN";
}

void func_232(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_233(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_234(iParam0, 0, func_239(iParam0));
	return;
}

void func_234(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_201();
	func_237(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_236(iParam0, &unk);
	unk2 = { func_235(&unk) };
	return;
}

struct<16> func_235(var uParam0) // Hash - 0x8FC63C16 ^0x485B3C55
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_195(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_194(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_193(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_196(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_199(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_197(*uParam0), 64);
	return unk;
}

void func_236(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_237(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_197(*uParam0);
	i = func_199(*uParam0);
	num2 = func_196(*uParam0);
	j = func_195(*uParam0);
	k = func_194(*uParam0);
	l = func_193(*uParam0);

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

	for (m = func_192(i, num); num2 > m; m = func_192(i, num))
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
	func_238(uParam0, l, k, j, num2, i, num);
	return;
}

void func_238(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_207(uParam0, iParam1);
	func_206(uParam0, iParam2);
	func_205(uParam0, iParam3);
	func_203(uParam0, iParam5);
	func_204(uParam0, iParam4);
	func_202(uParam0, iParam6);
	return;
}

int func_239(int iParam0) // Hash - 0x4219564C ^0x4219564C
{
	int num;

	switch (iParam0)
	{
		case 23:
			num = 30;
			break;
	
		case 0:
			num = 30;
			break;
	
		case 15:
			num = 30;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 26:
			num = 30;
			break;
	
		case 8:
			num = 30;
			break;
	
		case 29:
			num = 30;
			break;
	
		case 24:
			num = 30;
			break;
	
		case 2:
			num = 0;
			break;
	
		case 17:
			num = 30;
			break;
	
		case 11:
			num = 30;
			break;
	
		case 16:
			num = 30;
			break;
	
		case 18:
			num = 30;
			break;
	
		case 12:
			num = 120;
			break;
	
		case 3:
			num = 60;
			break;
	
		case 27:
			num = 60;
			break;
	
		case 19:
			num = 30;
			break;
	
		case 20:
			num = 30;
			break;
	
		case 4:
			num = 60;
			break;
	
		case 28:
			num = 30;
			break;
	
		case 13:
			num = 35;
			break;
	
		case 7:
			num = 30;
			break;
	
		case 25:
			num = 40;
			break;
	
		case 10:
			num = 30;
			break;
	
		case 22:
			num = 30;
			break;
	
		case 21:
			num = 30;
			break;
	
		case 5:
			num = 30;
			break;
	
		case 30:
			num = 60;
			break;
	
		case 9:
			num = 60;
			break;
	
		case 6:
			num = 40;
			break;
	
		case 14:
			num = 40;
			break;
	}

	return num;
}

BOOL func_240() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_56() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

