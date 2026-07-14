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
	var uLocal_37 = 0;
	char* sLocal_38 = NULL;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	float fLocal_45 = 0f;
	float fLocal_46 = 0f;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	float fLocal_50 = 0f;
	float fLocal_51 = 0f;
	float fLocal_52 = 0f;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	int iLocal_55 = 0;
	var uLocal_56 = 0;
	struct<3> Local_57 = { 0, 0, 0 } ;
	struct<27> Local_60 = { 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1014350479, 2, 0, 0, 0, 0, 0, 0, 0 } ;
	struct<3> Local_87[5];
	int iLocal_103[5] = { 0, 0, 0, 0, 0 };
	int* iLocal_109 = NULL;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	bool bLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	int iLocal_121 = 0;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124 = 0;
	int iLocal_125 = 0;
	struct<3> Local_126[2];
	var uLocal_133 = 0;
	int iLocal_134 = 0;
	int iLocal_135 = 0;
	var uLocal_136 = 16;
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
	var uLocal_299 = 0;
	var uLocal_300 = 0;
	int* iLocal_301 = NULL;
	int iLocal_302 = 0;
	var uLocal_303 = 0;
#endregion

void __EntryFunction__()
{
	struct<3> Var0;
	struct<3> Var3;
	
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
	sLocal_38 = "NULL";
	fLocal_41 = 0f;
	fLocal_45 = -0.0375f;
	fLocal_46 = 0.17f;
	fLocal_50 = 80f;
	fLocal_51 = 140f;
	fLocal_52 = 180f;
	iLocal_55 = 3;
	Local_57 = { -690.938f, 512.2703f, 109.3639f };
	bLocal_117 = -1;
	iLocal_125 = 60000;
	iLocal_302 = 99;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(146))
	{
		func_97();
	}
	if (func_96(90) == 1)
	{
		func_95();
		SCRIPT::TERMINATE_THIS_THREAD();
	}
	iLocal_116 = Global_114963.f_10058.f_103;
	func_94();
	if (func_93())
	{
		func_97();
	}
	func_92(6);
	func_91(&Local_60, joaat("prop_ch2_09c_garage_door"), -689.81f, 510.34f, 109.98f, Local_57, -688.4919f, 507.2549f, 108.9186f, -691.8835f, 516.2689f, 113.4316f, 9.25f, -687.4553f, 507.5179f, 109.3635f, -690.9484f, 506.2783f, 109.3631f);
	func_90(&Local_60, 2);
	Local_60.f_4 = 3;
	MISC::CLEAR_AREA_OF_VEHICLES(Local_57, 5f, false, false, false, false, false, false, 0);
	func_89(&Local_126, -691.9059f, 515.8249f, 108.6139f, -684.0605f, 493.0171f, 110.8504f, 8.25f);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(Local_126[0 /*3*/], Local_126[1 /*3*/], 8.25f, false, false, true);
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, false, false, true);
	func_88(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	iLocal_135 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, false, true, true, true, 1);
	if (func_96(90) == 1)
	{
		func_95();
		func_97();
	}
	if (Global_114963.f_10058.f_104 == 0)
	{
		Global_114963.f_10058.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	}
	func_84(1);
	func_83(0);
	while (true)
	{
		if (func_96(90) == 1)
		{
			func_95();
			func_97();
		}
		func_82(PLAYER::PLAYER_PED_ID());
		if (MISC::GET_MISSION_FLAG() || func_76() != 0)
		{
			func_71();
		}
		switch (iLocal_111)
		{
			case 0:
				func_70(&iLocal_110);
				break;
			
			case 4:
				func_69(&iLocal_110);
				break;
			
			case 1:
				func_68(&iLocal_110);
				break;
			
			case 2:
				func_62(&iLocal_110);
				break;
			
			case 3:
				func_58(&iLocal_110);
				break;
			
			case 6:
				func_55(2, 6, 1);
				func_54(2, "EPS_LSTEMAIL", 1);
				func_53(2);
				func_97();
				break;
		}
		func_50(&Local_60);
		if (func_49(&Local_60))
		{
			if (func_43(&Local_60))
			{
				if (VEHICLE::GET_LAST_DRIVEN_VEHICLE() == Global_80032)
				{
					Global_80032 = 0;
					Global_114963.f_32759.f_5588 = 0;
				}
				MISC::CLEAR_AREA_OF_VEHICLES(Local_60.f_14, 8.5f, false, false, false, false, false, false, 0);
				Global_114963.f_10058.f_103 = iLocal_116;
				func_41();
				func_40(&uLocal_136, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
				func_22(&uLocal_136, "EPS3AUD", "EP3_MCS1", 6, 0, 0, 0);
				if (func_21("EPS_DROP_HELP"))
				{
					HUD::CLEAR_HELP(true);
				}
				func_19();
			}
		}
		if (Global_114963.f_10058.f_104 != 0)
		{
			iLocal_114 = (Global_114963.f_10058.f_104 + 14 % func_18(CLOCK::GET_CLOCK_MONTH(), CLOCK::GET_CLOCK_YEAR()));
			if (((CLOCK::GET_CLOCK_DAY_OF_MONTH() == iLocal_114 && !func_17(0)) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				func_4(func_16());
			}
		}
		func_1(&iLocal_301, &uLocal_303, &iLocal_302);
		if ((iLocal_124 > 0 && MISC::GET_GAME_TIMER() > iLocal_124) && iLocal_302 == 99)
		{
			iLocal_124 = 0;
			if (func_93())
			{
				func_83(6);
			}
		}
		SYSTEM::WAIT(0);
	}
}

void func_1(int* iParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	switch (*iParam2)
	{
		case 0:
			*iParam0 = GRAPHICS::REQUEST_SCALEFORM_MOVIE("MIDSIZED_MESSAGE");
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				iVar0 = AUDIO::GET_SOUND_ID();
				AUDIO::PLAY_SOUND_FRONTEND(iVar0, "CHECKPOINT_UNDER_THE_BRIDGE", "HUD_MINI_GAME_SOUNDSET", true);
				*iParam2++;
			}
			break;
		
		case 1:
			GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHOW_SHARD_MIDSIZED_MESSAGE");
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_TITLE");
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("EPS_CAR_NOTE");
			HUD::ADD_TEXT_COMPONENT_INTEGER(func_3());
			GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
			GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
			*uParam1 = MISC::GET_GAME_TIMER();
			*iParam2++;
			break;
		
		case 2:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7000)
			{
				GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*iParam0, "SHARD_ANIM_OUT");
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
				GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(0.33f);
				GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 3:
			if ((MISC::GET_GAME_TIMER() - *uParam1) > 7500)
			{
				*iParam2++;
			}
			else if (!func_2())
			{
				if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
				{
					GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(*iParam0, 100, 100, 100, 255, 0);
				}
			}
			break;
		
		case 4:
			if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(*iParam0))
			{
				GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(iParam0);
			}
			*iParam2 = 99;
			break;
		
		case 99:
			break;
	}
}

int func_2()
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

int func_3()
{
	bool bVar0;
	int iVar1;
	
	bVar0 = false;
	iVar1 = 0;
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (BitTest(iLocal_116, bVar0))
		{
			iVar1++;
		}
		bVar0++;
	}
	return iVar1;
}

void func_4(int iParam0)
{
	int iVar0;
	
	if (iParam0 <= 0)
	{
		return;
	}
	func_55(2, Local_87[(5 - iParam0) /*3*/], 1);
	if (func_15(bLocal_117))
	{
		func_54(2, Local_87[(5 - iParam0) /*3*/].f_2, 0);
	}
	else
	{
		func_54(2, Local_87[(5 - iParam0) /*3*/].f_1, 0);
	}
	iParam0 = 0;
	iVar0 = 0;
	iParam0 = 0;
	while (iParam0 < iLocal_103)
	{
		if (!func_14(iParam0))
		{
			func_12(2, func_13(iLocal_103[iParam0]));
			iVar0++;
		}
		iParam0++;
	}
	func_5(2);
	Global_114963.f_10058.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
	if (iVar0 == 0)
	{
	}
}

void func_5(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	char* sVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_55466[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	iVar1 = Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/];
	iVar2 = (Global_55466[iVar0 /*203*/].f_9 - 1);
	if (!Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_1)
	{
		iVar7 = Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/];
		MemCopy(&Var3, {func_10(Global_46166[iVar7 /*12*/].f_1)}, 4);
	}
	else
	{
		Var3 = { Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_2 };
	}
	if (iParam0 == 28)
	{
		switch (iVar1)
		{
			case 249:
				sVar8 = "PW_FEED_EM_1";
				break;
			
			case 269:
				sVar8 = "PW_FEED_EM_3";
				break;
			
			default:
				sVar8 = "PW_FEED_EM_2";
				break;
		}
		func_6(1, Global_46166[iVar1 /*12*/].f_2, iVar1, sVar8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		switch (Global_46166[iVar1 /*12*/].f_3)
		{
			case 0:
				func_6(0, Global_46166[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 1:
				func_6(1, Global_46166[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			
			case 2:
				func_6(2, Global_46166[iVar1 /*12*/].f_2, iVar1, &Var3, &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[0 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[1 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[2 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[3 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[4 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[5 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[6 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[7 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[8 /*4*/]), &(Global_55466[iVar0 /*203*/].f_10[iVar2 /*48*/].f_7[9 /*4*/]));
				break;
			}
	}
}

void func_6(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13)
{
	int iVar0;
	bool bVar1;
	char cVar2[64];
	
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return;
	}
	iVar0 = func_76();
	bVar1 = false;
	StringCopy(&cVar2, func_9(iParam1, &bVar1), 64);
	if (iVar0 == iParam0)
	{
		switch (iParam2)
		{
			case 72:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
				break;
			
			case 73:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
				break;
			
			case 74:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
				break;
			
			default:
				HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam6))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam7))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam8))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam9))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam10))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam11))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam12))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam13))
				{
					HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
				}
				break;
		}
		if (bVar1)
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
		}
		else
		{
			func_7(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(func_8(iParam1)), 0));
		}
		switch (Global_21649)
		{
			case 0:
				StringCopy(&Global_21638, "Phone_SoundSet_Michael", 24);
				Global_46158++;
				if (Global_46158 > 16)
				{
					Global_46158 = 16;
				}
				break;
			
			case 2:
				StringCopy(&Global_21638, "Phone_SoundSet_Trevor", 24);
				Global_46160++;
				if (Global_46160 > 16)
				{
					Global_46160 = 16;
				}
				break;
			
			case 1:
				StringCopy(&Global_21638, "Phone_SoundSet_Franklin", 24);
				Global_46159++;
				if (Global_46159 > 16)
				{
					Global_46159 = 16;
				}
				break;
			
			default:
				StringCopy(&Global_21638, "Phone_SoundSet_Default", 24);
				break;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_21638, true);
	}
}

void func_7(int iParam0)
{
	Global_46161[Global_46165] = iParam0;
	Global_24081 = 1;
	Global_24080 = iParam0;
	Global_46165++;
	if (Global_46165 == 3)
	{
		Global_46165 = 0;
	}
}

char* func_8(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMSTR_0";
		
		case 3:
			return "EMSTR_3";
		
		case 1:
			return "EMSTR_6";
		
		case 2:
			return "EMSTR_9";
		
		case 4:
			return "EMSTR_12";
		
		case 5:
			return "EMSTR_29";
		
		case 6:
			return "EMSTR_36";
		
		case 7:
			return "EMSTR_39";
		
		case 8:
			return "EMSTR_52";
		
		case 9:
			return "EMSTR_55";
		
		case 10:
			return "EMSTR_58";
		
		case 11:
			return "EMSTR_78";
		
		case 12:
			return "EMSTR_81";
		
		case 13:
			return "EMSTR_84";
		
		case 14:
			return "EMSTR_87";
		
		case 15:
			return "EMSTR_106";
		
		case 16:
			return "EMSTR_114";
		
		case 17:
			return "EMSTR_142";
		
		case 18:
			return "EMSTR_145";
		
		case 19:
			return "EMSTR_152";
		
		case 20:
			return "EMSTR_157";
		
		case 21:
			return "EMSTR_163";
		
		case 22:
			return "EMSTR_182";
		
		case 23:
			return "EMSTR_187";
		
		case 24:
			return "EMSTR_190";
		
		case 25:
			return "EMSTR_206";
		
		case 26:
			return "EMSTR_219";
		
		case 27:
			return "EMSTR_226";
		
		case 28:
			return "EMSTR_233";
		
		case 29:
			return "EMSTR_242";
		
		case 30:
			return "EMSTR_249";
		
		case 31:
			return "EMSTR_262";
		
		case 32:
			return "EMSTR_269";
		
		case 33:
			return "EMSTR_319";
		
		case 34:
			return "EMSTR_340";
		
		case 35:
			return "EMSTR_348";
		
		case 36:
			return "EMSTR_182";
		
		case 37:
			return "EMSTR_357";
		
		case 38:
			return "EMSTR_360";
		
		case 39:
			return "EMSTR_369";
		
		case 40:
			return "EMSTR_376";
		
		case 41:
			return "EMSTR_379";
		
		case 42:
			return "EMSTR_382";
		
		case 43:
			return "EMSTR_384";
		
		case 44:
			return "EMSTR_387";
		
		case 45:
			return "EMSTR_390";
		
		case 46:
			return "EMSTR_393";
		
		case 47:
			return "EMSTR_396";
		
		case 48:
			return "EMSTR_399";
		
		case 49:
			return "EMSTR_402";
		
		case 50:
			return "EMSTR_405";
		
		case 51:
			return "EMSTR_408";
		
		case 52:
			return "EMSTR_411";
		
		case 53:
			return "EMSTR_414";
		
		case 54:
			return "EMSTR_465";
		
		case 55:
			return "EMSTR_468";
		
		case 56:
			return "EMSTR_489";
		
		case 57:
			return "EMSTR_492";
		
		case 58:
			return "EMSTR_495";
		
		case 59:
			return "EMSTR_498";
		
		case 60:
			return "EMSTR_501";
		
		case 61:
			return "EMSTR_504";
		
		case 62:
			return "EMSTR_507";
		
		case 63:
			return "EMSTR_640";
		
		case 64:
			return "EMSTR_643";
		
		case 65:
			return "EMSTR_652";
		
		default:
	}
	return "NULL";
}

char* func_9(int iParam0, int iParam1)
{
	*iParam1 = 1;
	switch (iParam0)
	{
		case 0:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[0 /*29*/].f_7));
		
		case 1:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[1 /*29*/].f_7));
		
		case 2:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[2 /*29*/].f_7));
		
		case 7:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[12 /*29*/].f_7));
		
		case 4:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[60 /*29*/].f_7));
		
		case 6:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[62 /*29*/].f_7));
		
		case 3:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[14 /*29*/].f_7));
		
		case 16:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[97 /*29*/].f_7));
		
		case 19:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[99 /*29*/].f_7));
		
		case 15:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[96 /*29*/].f_7));
		
		case 63:
			return "CHAR_CARSITE2";
		
		case 64:
			return "CHAR_BOATSITE";
		
		case 8:
			return "CHAR_BANK_MAZE";
		
		case 9:
			return "CHAR_BANK_FLEECA";
		
		case 10:
			return "CHAR_BANK_BOL";
		
		case 21:
			return "CHAR_MINOTAUR";
		
		case 25:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[15 /*29*/].f_7));
		
		case 26:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[30 /*29*/].f_7));
		
		case 27:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[17 /*29*/].f_7));
		
		case 29:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[20 /*29*/].f_7));
		
		case 30:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[43 /*29*/].f_7));
		
		case 31:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[44 /*29*/].f_7));
		
		case 32:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[19 /*29*/].f_7));
		
		case 34:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[40 /*29*/].f_7));
		
		case 36:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381");
		
		case 38:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[64 /*29*/].f_7));
		
		case 5:
			return "CHAR_EPSILON";
		
		case 13:
			return "CHAR_MILSITE";
		
		case 11:
			return "CHAR_CARSITE";
		
		case 14:
			return "CHAR_BOATSITE";
		
		case 12:
			return "CHAR_PLANESITE";
		
		case 24:
			return "CHAR_DR_FRIEDLANDER";
		
		case 55:
			return "CHAR_CARSITE2";
		
		case 54:
			return "CHAR_BIKESITE";
		
		case 39:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[122 /*29*/].f_7));
		
		case 40:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[125 /*29*/].f_7));
		
		case 41:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[113 /*29*/].f_7));
		
		case 42:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[126 /*29*/].f_7));
		
		case 43:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[127 /*29*/].f_7));
		
		case 44:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[124 /*29*/].f_7));
		
		case 45:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[114 /*29*/].f_7));
		
		case 46:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[115 /*29*/].f_7));
		
		case 47:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[116 /*29*/].f_7));
		
		case 48:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[123 /*29*/].f_7));
		
		case 49:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[117 /*29*/].f_7));
		
		case 50:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[118 /*29*/].f_7));
		
		case 51:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[119 /*29*/].f_7));
		
		case 52:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[120 /*29*/].f_7));
		
		case 53:
			return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2349[121 /*29*/].f_7));
		
		default:
	}
	*iParam1 = 0;
	return "ERROR!";
}

struct<16> func_10(int iParam0)
{
	struct<16> Var0;
	struct<16> Var16;
	
	if (iParam0 > -1)
	{
		StringCopy(&Var0, "EMSTR_", 64);
		StringIntConCat(&Var0, iParam0, 64);
		return Var0;
	}
	StringCopy(&Var16, "FAIL", 64);
	return Var16;
}

int func_11(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = -1;
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_55466[iVar0 /*203*/].f_2 == iParam0)
		{
			if (Global_55466[iVar0 /*203*/].f_1 > iVar2)
			{
				iVar2 = Global_55466[iVar0 /*203*/].f_1;
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 != -1 && iVar2 != -1)
	{
		return iVar1;
	}
	return -1;
}

void func_12(int iParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_55466[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	if (Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 == 10)
	{
		return;
	}
	iVar1 = Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_6;
	Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_6++;
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[iVar1 /*4*/]), sParam1, 16);
}

char* func_13(int iParam0)
{
	if (iParam0 == iLocal_103[0])
	{
		return "EPS_CARNME_0";
	}
	if (iParam0 == iLocal_103[1])
	{
		return "EPS_CARNME_1";
	}
	if (iParam0 == iLocal_103[2])
	{
		return "EPS_CARNME_2";
	}
	if (iParam0 == iLocal_103[3])
	{
		return "EPS_CARNME_3";
	}
	if (iParam0 == iLocal_103[4])
	{
		return "EPS_CARNME_4";
	}
	return "EPS_CARNME_N";
}

bool func_14(int iParam0)
{
	return BitTest(iLocal_116, iParam0);
}

int func_15(int iParam0)
{
	if (iParam0 < 0)
	{
		return 1;
	}
	return BitTest(iLocal_116, iParam0 + 5);
}

int func_16()
{
	return (5 - func_3());
}

int func_17(int iParam0)
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

int func_18(int iParam0, int iParam1)
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

void func_19()
{
	int iVar0;
	
	iLocal_302 = 0;
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), true);
		func_20(23, (6 + func_3()));
	}
}

int func_20(int iParam0, int iParam1)
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

bool func_21(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

int func_22(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_39(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
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
	return func_23(sParam2, iParam3, 0);
}

int func_23(char* sParam0, int iParam1, bool bParam2)
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
					func_38();
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
		if (func_37(8, -1))
		{
			return 0;
		}
		Global_23099 = { Global_23093 };
		func_36();
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
				func_34();
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
				if (func_33())
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
			if (func_32())
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
			func_31();
			Global_23033 = bParam2;
		}
		Global_23025 = iParam1;
		StringCopy(&Global_22642, sParam0, 24);
		Global_21889 = 0;
		func_30();
		func_24();
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
		func_38();
	}
	return 0;
}

void func_24()
{
	if (!func_25())
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

int func_25()
{
	if (!Global_262145.f_28486)
	{
		return 0;
	}
	if (!Global_80337)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_29())
	{
		return 0;
	}
	if (func_26(PLAYER::PLAYER_ID()))
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

int func_26(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_28(8))
		{
			return 1;
		}
		if (Global_2733190.f_5975.f_1 > 0)
		{
			return 1;
		}
	}
	return func_27(iParam0, 20);
}

var func_27(int iParam0, int iParam1)
{
	return BitTest(Global_1892925[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_28(int iParam0)
{
	return BitTest(Global_2733190.f_5964, iParam0);
}

int func_29()
{
	return -1;
}

void func_30()
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

void func_31()
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

int func_32()
{
	if (Global_21649.f_1 == 1 || Global_21649.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_33()
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

void func_34()
{
	if (func_35(14))
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
		Global_21649 = func_76();
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

bool func_35(int iParam0)
{
	return Global_44921 == iParam0;
}

void func_36()
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

bool func_37(int iParam0, int iParam1)
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

void func_38()
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

void func_39(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, var uParam5)
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

void func_40(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
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

int func_41()
{
	if (func_42(0))
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

int func_42(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80586, 0);
}

int func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3[20];
	
	iVar2 = 0;
	iVar1 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar3);
	if (iVar1 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_82(uVar3[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(uVar3[iVar0], uParam0->f_6[0 /*3*/], uParam0->f_6[1 /*3*/], uParam0->f_6.f_7, false, true, 0) && !uParam0->f_26)
			{
				if (func_44(uVar3[iVar0]))
				{
					iVar2 = 1;
				}
			}
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		Global_114963.f_10058.f_104 = CLOCK::GET_CLOCK_DAY_OF_MONTH();
		iLocal_124 = (MISC::GET_GAME_TIMER() + iLocal_125);
	}
	return iVar2;
}

int func_44(int iParam0)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_48(iParam0))
	{
		return 0;
	}
	bVar0 = false;
	while (bVar0 < 5)
	{
		if (func_47(iVar1, bVar0))
		{
			if (!func_14(bVar0))
			{
				func_46(bVar0, ENTITY::GET_ENTITY_HEALTH(iParam0) < 875);
				func_45(bVar0, 1);
				return 1;
			}
		}
		bVar0++;
	}
	return 0;
}

void func_45(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_116, bParam0);
		bLocal_117 = bParam0;
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_116, bParam0);
	}
}

void func_46(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		MISC::SET_BIT(&iLocal_116, iParam0 + 5);
	}
	else
	{
		MISC::CLEAR_BIT(&iLocal_116, iParam0 + 5);
	}
}

int func_47(int iParam0, int iParam1)
{
	if (iParam0 == iLocal_103[iParam1])
	{
		return 1;
	}
	if (iLocal_103[iParam1] != joaat("tornado2"))
	{
		return 0;
	}
	if (iParam0 == joaat("tornado"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado2"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado3"))
	{
		return 1;
	}
	if (iParam0 == joaat("tornado4"))
	{
		return 1;
	}
	return 0;
}

bool func_48(int iParam0)
{
	if (!func_82(iParam0))
	{
		return 1;
	}
	if (ENTITY::GET_ENTITY_HEALTH(iParam0) < 750)
	{
		return 1;
	}
	if (VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, true) || VEHICLE::IS_VEHICLE_BUMPER_BROKEN_OFF(iParam0, false))
	{
		return 1;
	}
	return VEHICLE::GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(iParam0) > 0;
}

bool func_49(var uParam0)
{
	return (uParam0->f_5 == 2 && uParam0->f_4 == 2);
}

void func_50(var uParam0)
{
	struct<3> Var0;
	
	uParam0->f_26 = 0;
	if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[0 /*3*/], 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_26 = 1;
	}
	else if (MISC::IS_POSITION_OCCUPIED(uParam0->f_19[1 /*3*/], 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false))
	{
		uParam0->f_26 = 1;
	}
	else
	{
		Var0 = { func_51(uParam0->f_19[0 /*3*/], uParam0->f_19[1 /*3*/], 0.5f, 1) };
		uParam0->f_26 = MISC::IS_POSITION_OCCUPIED(Var0, 1.2f, false, true, true, false, false, PLAYER::PLAYER_PED_ID(), false);
		if (uParam0->f_26)
		{
		}
	}
	if (uParam0->f_5 == 2 && (uParam0->f_4 != 2 || uParam0->f_4 == 3))
	{
		uParam0->f_17 = (uParam0->f_17 - uParam0->f_18);
		if (uParam0->f_17 <= 0f)
		{
			uParam0->f_17 = 0f;
			uParam0->f_4 = 2;
			AUDIO::STOP_SOUND(iLocal_112);
			iLocal_113 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "CLOSED", *uParam0, "DOOR_GARAGE", false, 0, true);
		}
		else if (!iLocal_113)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_112, "CLOSING", *uParam0, "DOOR_GARAGE", false, 0, true);
			iLocal_113 = 1;
		}
	}
	if (uParam0->f_5 == 1 && (uParam0->f_4 != 1 || uParam0->f_4 == 4))
	{
		uParam0->f_17 = (uParam0->f_17 + uParam0->f_18);
		if (uParam0->f_17 >= 1f)
		{
			uParam0->f_17 = 1f;
			uParam0->f_4 = 1;
			AUDIO::STOP_SOUND(iLocal_112);
			iLocal_113 = 0;
			AUDIO::PLAY_SOUND_FROM_COORD(-1, "OPENED", *uParam0, "DOOR_GARAGE", false, 0, true);
		}
		else if (!iLocal_113)
		{
			AUDIO::PLAY_SOUND_FROM_COORD(iLocal_112, "OPENING", *uParam0, "DOOR_GARAGE", false, 0, true);
			iLocal_113 = 1;
		}
	}
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, true, uParam0->f_17, false);
	}
}

Vector3 func_51(struct<3> Param0, struct<3> Param3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		fParam6 = func_52(fParam6, 0f, 1f);
	}
	return Param0 + Vector(fParam6, fParam6, fParam6) * Param3 - Param0;
}

float func_52(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_53(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 26)
	{
		if (!BitTest(Global_114963.f_24995, (4 - 1)))
		{
			return;
		}
	}
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	Global_55466[iVar0 /*203*/] = 0;
}

void func_54(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = func_11(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (Global_55466[iVar0 /*203*/].f_9 == 0)
	{
		return;
	}
	Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_1 = 1;
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_2), sParam1, 16);
	Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_6 = 0;
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[0 /*4*/]), "", 16);
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[1 /*4*/]), "", 16);
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[2 /*4*/]), "", 16);
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[3 /*4*/]), "", 16);
	StringCopy(&(Global_55466[iVar0 /*203*/].f_10[(Global_55466[iVar0 /*203*/].f_9 - 1) /*48*/].f_7[4 /*4*/]), "", 16);
	if (bParam2)
	{
		func_5(iParam0);
	}
}

int func_55(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_57(iParam0, 1);
	if (iVar0 == -1)
	{
		return 0;
	}
	if (Global_55466[iVar0 /*203*/].f_9 == 4)
	{
		return 0;
	}
	Global_55466[iVar0 /*203*/].f_2 = iParam0;
	Global_55466[iVar0 /*203*/].f_10[Global_55466[iVar0 /*203*/].f_9 /*48*/] = iParam1;
	Global_55466[iVar0 /*203*/].f_10[Global_55466[iVar0 /*203*/].f_9 /*48*/].f_1 = 0;
	Global_55466[iVar0 /*203*/].f_10[Global_55466[iVar0 /*203*/].f_9 /*48*/].f_6 = 0;
	Global_55466[iVar0 /*203*/].f_9++;
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_55466[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_55466[iVar0 /*203*/].f_4[iVar1] == Global_46166[iParam1 /*12*/].f_3)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_55466[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_55466[iVar0 /*203*/].f_4[Global_55466[iVar0 /*203*/].f_3] = Global_46166[iParam1 /*12*/].f_3;
			Global_55466[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar2 = -1;
	iVar1 = 0;
	while (iVar1 < Global_55466[iVar0 /*203*/].f_3)
	{
		if (iVar2 == -1)
		{
			if (Global_55466[iVar0 /*203*/].f_4[iVar1] == Global_46166[iParam1 /*12*/].f_2)
			{
				iVar2 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar2 == -1)
	{
		if (Global_55466[iVar0 /*203*/].f_3 == 4)
		{
			return 0;
		}
		else
		{
			Global_55466[iVar0 /*203*/].f_4[Global_55466[iVar0 /*203*/].f_3] = Global_46166[iParam1 /*12*/].f_2;
			Global_55466[iVar0 /*203*/].f_3++;
		}
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_55466[iVar0 /*203*/].f_3)
	{
		iVar3 = Global_55466[iVar0 /*203*/].f_4[iVar1];
		if (iVar3 < 3)
		{
			func_56(Global_55466[iVar0 /*203*/].f_4[iVar1], Global_55466[iVar0 /*203*/].f_1, 1, bParam2, 0);
		}
		iVar1++;
	}
	return 1;
}

void func_56(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<16> Var3;
	int iVar19;
	int iVar20;
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	
	if (!iParam0 < 3)
	{
		return;
	}
	iVar0 = -1;
	StringCopy(&Var3, "UNSET", 64);
	if (!bParam2)
	{
		iVar19 = (Global_49491[iParam1 /*46*/].f_42 - 1);
		if (iVar19 < 0)
		{
			return;
		}
		iVar20 = Global_49491[iParam1 /*46*/].f_32[iVar19];
		iVar2 = iVar20;
		Var3 = { func_10(Global_46166[iVar20 /*12*/].f_1) };
		if (Global_46166[iVar20 /*12*/].f_2 == iParam0 && !Global_46166[iVar20 /*12*/].f_3 == iParam0)
		{
			return;
		}
		iVar1 = Global_46166[iVar20 /*12*/].f_2;
		iVar0 = Global_55104[iParam0 /*120*/];
		bVar21 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar21 = true;
		}
		if (bVar21)
		{
			if (!Global_55104[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_46158 = (Global_46158 - 1);
						if (Global_46158 < 0)
						{
							Global_46158 = 0;
						}
						break;
					
					case 1:
						Global_46159 = (Global_46159 - 1);
						if (Global_46159 < 0)
						{
							Global_46159 = 0;
						}
						break;
					
					case 2:
						Global_46160 = (Global_46160 - 1);
						if (Global_46160 < 0)
						{
							Global_46160 = 0;
						}
						break;
					}
				}
		}
		Global_55104[iParam0 /*120*/].f_18[iVar0] = iParam1;
		Global_55104[iParam0 /*120*/].f_1[iVar0] = iVar19;
		Global_55104[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_55104[iParam0 /*120*/].f_86[iVar0] = 0;
		Global_55104[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_55104[iParam0 /*120*/]++;
	}
	else
	{
		iVar0 = Global_55104[iParam0 /*120*/];
		bVar22 = false;
		while (iVar0 >= 16)
		{
			iVar0 = (iVar0 - 16);
			bVar22 = true;
		}
		if (bVar22)
		{
			if (!Global_55104[iParam0 /*120*/].f_69[iVar0])
			{
				switch (iParam0)
				{
					case 0:
						Global_46158 = (Global_46158 - 1);
						if (Global_46158 < 0)
						{
							Global_46158 = 0;
						}
						break;
					
					case 1:
						Global_46159 = (Global_46159 - 1);
						if (Global_46159 < 0)
						{
							Global_46159 = 0;
						}
						break;
					
					case 2:
						Global_46160 = (Global_46160 - 1);
						if (Global_46160 < 0)
						{
							Global_46160 = 0;
						}
						break;
					}
				}
		}
		iVar23 = -1;
		iVar24 = 0;
		iVar24 = 0;
		while (iVar24 < 7)
		{
			if (Global_55466[iVar24 /*203*/].f_1 == iParam1 && Global_55466[iVar24 /*203*/].f_9 > 0)
			{
				iVar23 = iVar24;
			}
			iVar24++;
		}
		if (iVar23 == -1)
		{
			return;
		}
		Global_55104[iParam0 /*120*/].f_18[iVar0] = Global_55466[iVar23 /*203*/].f_1;
		Global_55104[iParam0 /*120*/].f_1[iVar0] = (Global_55466[iVar23 /*203*/].f_9 - 1);
		Global_55104[iParam0 /*120*/].f_35[iVar0] = 0;
		Global_55104[iParam0 /*120*/].f_86[iVar0] = 1;
		Global_55104[iParam0 /*120*/].f_69[iVar0] = 0;
		Global_55104[iParam0 /*120*/]++;
		iVar25 = Global_55104[iParam0 /*120*/].f_1[iVar0];
		iVar26 = Global_55466[iVar23 /*203*/].f_10[iVar25 /*48*/];
		iVar2 = iVar26;
		iVar1 = Global_46166[iVar26 /*12*/].f_2;
		if (Global_55466[iVar23 /*203*/].f_10[(Global_55466[iVar23 /*203*/].f_9 - 1) /*48*/].f_1)
		{
			MemCopy(&Var3, {Global_55466[iVar23 /*203*/].f_10[(Global_55466[iVar23 /*203*/].f_9 - 1) /*48*/].f_2}, 16);
		}
		else
		{
			Var3 = { func_10(Global_46166[iVar26 /*12*/].f_1) };
		}
	}
	if (!bParam4)
	{
		if (!Global_55104[iParam0 /*120*/].f_69[iVar0] && !bParam3)
		{
			switch (iParam0)
			{
				case 0:
					func_6(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				
				case 1:
					if (iVar2 == 249)
					{
						func_6(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					else
					{
						func_6(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					}
					break;
				
				case 2:
					func_6(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
					break;
				}
			}
	}
}

int func_57(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	
	iVar0 = func_11(iParam0);
	if (iVar0 > -1)
	{
		if (Global_55466[iVar0 /*203*/].f_9 < 4)
		{
			return iVar0;
		}
	}
	iVar1 = 0;
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_55466[iVar1 /*203*/] == 0)
		{
			bVar2 = true;
		}
		iVar1++;
	}
	if (!bVar2)
	{
		return -1;
	}
	bVar3 = true;
	iVar1 = 0;
	iVar4 = -1;
	iVar5 = -1;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (Global_55466[iVar1 /*203*/] == 0)
		{
			if (bVar3)
			{
				iVar4 = iVar1;
				iVar5 = Global_55466[iVar1 /*203*/].f_1;
				bVar3 = false;
			}
			else if (iVar5 > Global_55466[iVar1 /*203*/].f_1)
			{
				iVar4 = iVar1;
				iVar5 = Global_55466[iVar1 /*203*/].f_1;
			}
		}
		iVar1++;
	}
	if (Global_55466[iVar4 /*203*/].f_9 > 0)
	{
		iVar1 = 0;
		iVar1 = 0;
		while (iVar1 < Global_55466[iVar4 /*203*/].f_9)
		{
			iVar6 = 0;
			iVar6 = 0;
			while (iVar6 < 3)
			{
				iVar7 = Global_55104[iVar6 /*120*/];
				if (iVar7 > 16)
				{
					iVar7 = 16;
				}
				iVar8 = 0;
				iVar8 = 0;
				while (iVar8 < iVar7)
				{
					if (Global_55104[iVar6 /*120*/].f_86[iVar8])
					{
						if (!Global_55104[iVar6 /*120*/].f_69[iVar8])
						{
							if (Global_55104[iVar6 /*120*/].f_18[iVar8] == Global_55466[iVar4 /*203*/].f_1)
							{
								if (Global_55104[iVar6 /*120*/].f_1[iVar8] == iVar1)
								{
									switch (iVar6)
									{
										case 0:
											Global_46158 = (Global_46158 - 1);
											break;
										
										case 1:
											Global_46159 = (Global_46159 - 1);
											break;
										
										case 2:
											Global_46160 = (Global_46160 - 1);
											break;
										}
									}
								}
							}
					}
					iVar8++;
				}
				iVar6++;
			}
			iVar1++;
		}
	}
	Global_55466[iVar4 /*203*/].f_2 = iParam0;
	Global_55466[iVar4 /*203*/].f_3 = 0;
	if (!bParam1)
	{
		Global_55466[iVar4 /*203*/] = 1;
	}
	Global_114963.f_21046.f_310++;
	if (Global_114963.f_21046.f_310 == 0)
	{
		Global_114963.f_21046.f_310 = 1;
	}
	Global_55466[iVar4 /*203*/].f_1 = Global_114963.f_21046.f_310;
	Global_55466[iVar4 /*203*/].f_9 = 0;
	return iVar4;
}

void func_58(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_61(&iLocal_109);
			func_60("EPS_DROP_PERSON", -1);
			*iParam0 = 2;
			break;
		
		case 2:
			if (!func_59())
			{
				*iParam0 = 4;
				return;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
				if (func_82(iVar0))
				{
					if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) == 0)
					{
						*iParam0 = 4;
					}
				}
			}
			break;
		
		case 4:
			if (!func_59())
			{
				func_83(0);
			}
			else
			{
				func_60("EPS_DROP_ESCAPE", -1);
				func_83(2);
			}
			break;
	}
}

int func_59()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!func_82(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_119 = 0;
		return 0;
	}
	iVar1 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
	if (!func_82(iVar1))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_14(iVar0))
		{
			if (func_47(ENTITY::GET_ENTITY_MODEL(iVar1), iVar0))
			{
				if (func_48(iVar1))
				{
					if (!iLocal_119)
					{
						func_60("EPS_DROP_FAIL", -1);
						iLocal_119 = 1;
					}
					return 0;
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_60(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

void func_61(int* iParam0)
{
	if (HUD::DOES_BLIP_EXIST(*iParam0))
	{
		HUD::SET_BLIP_ROUTE(*iParam0, false);
		HUD::REMOVE_BLIP(iParam0);
	}
}

void func_62(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			func_90(&Local_60, 1);
			Local_60.f_4 = 4;
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1.5f);
			}
			*iParam0 = 2;
			iLocal_115 = 0;
			iLocal_123 = 0;
			break;
		
		case 2:
			switch (iLocal_115)
			{
				case 0:
					if (iLocal_120 == 1 && !Local_60.f_26)
					{
						if (func_21("EPS_DROP_MESS"))
						{
							HUD::CLEAR_HELP(true);
						}
					}
					if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
					{
						func_83(4);
						return;
					}
					if (func_67(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					}
					if (func_82(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) > 0)
					{
						if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false) != PLAYER::PLAYER_PED_ID())
						{
							func_83(3);
							return;
						}
					}
					if (!Local_60.f_26)
					{
						if (iLocal_121 == 0)
						{
							if (func_66(iVar0))
							{
								if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, Local_60.f_6[0 /*3*/], Local_60.f_6[1 /*3*/], Local_60.f_6.f_7, false, true, 0))
								{
									func_65("EPS_DROP_EXIT", 7500, 1);
									iLocal_123 = 0;
									iLocal_121 = 1;
									iLocal_120 = 0;
								}
							}
						}
						if (func_64(PLAYER::PLAYER_PED_ID(), Local_60.f_14, 0) < 3f)
						{
							func_61(&iLocal_109);
						}
						if (func_64(PLAYER::PLAYER_PED_ID(), Local_60, 0) > (15f + 5f))
						{
							func_90(&Local_60, 2);
							Local_60.f_4 = 3;
							iLocal_121 = 0;
							iLocal_120 = 0;
							iLocal_123 = 0;
							func_83(1);
							return;
						}
						if (func_63(&Local_60) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							func_90(&Local_60, 2);
							Local_60.f_4 = 3;
							iLocal_123 = 0;
							func_83(0);
							return;
						}
					}
					if ((Local_60.f_26 && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					{
						if (iLocal_123 == 0)
						{
							iLocal_123 = MISC::GET_GAME_TIMER();
						}
						else if ((MISC::GET_GAME_TIMER() - iLocal_123) > 500)
						{
							if (iLocal_120 == 0)
							{
								HUD::CLEAR_PRINTS();
								func_60("EPS_DROP_MESS", -1);
								iLocal_120 = 1;
								iLocal_121 = 0;
							}
						}
					}
					break;
			}
			break;
	}
}

bool func_63(var uParam0)
{
	return (!uParam0->f_26 && !MISC::IS_POSITION_OCCUPIED(uParam0->f_14, 6.2f, false, false, true, false, false, 0, false));
}

float func_64(int iParam0, struct<3> Param1, bool bParam4)
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

void func_65(char* sParam0, int iParam1, int iParam2)
{
	iParam2 = iParam2;
	HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
	HUD::END_TEXT_COMMAND_PRINT(iParam1, true);
}

int func_66(int iParam0)
{
	if (func_67(iParam0))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_67(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
		{
			return 1;
		}
	}
	return 0;
}

void func_68(int iParam0)
{
	int iVar0;
	
	switch (*iParam0)
	{
		case 1:
			if (!HUD::DOES_BLIP_EXIST(iLocal_109))
			{
				iLocal_109 = HUD::ADD_BLIP_FOR_COORD(Local_57);
				if (HUD::DOES_BLIP_EXIST(iLocal_109))
				{
					HUD::SET_BLIP_SPRITE(iLocal_109, 206);
					HUD::SET_BLIP_COLOUR(iLocal_109, 42);
				}
			}
			*iParam0 = 2;
			iLocal_115 = 0;
			break;
		
		case 2:
			if (!func_59())
			{
				func_83(0);
				return;
			}
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			{
				func_83(4);
				return;
			}
			if (func_67(PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
			}
			if (func_82(iVar0) && VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iVar0, false, true) > 0)
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0, false) != PLAYER::PLAYER_PED_ID())
				{
					func_83(3);
					return;
				}
			}
			if (func_64(PLAYER::PLAYER_PED_ID(), Local_60, 0) < 15f)
			{
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			func_83(2);
			break;
	}
}

void func_69(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			func_61(&iLocal_109);
			if (iLocal_122 == 0)
			{
				func_60("EPS_DROP_WANTED", -1);
			}
			*iParam0 = 2;
			break;
		
		case 2:
			if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
			{
				*iParam0 = 4;
			}
			break;
		
		case 4:
			if (!func_59())
			{
				func_83(0);
			}
			else
			{
				if (iLocal_122 == 0)
				{
					func_60("EPS_DROP_ESCAPE", -1);
				}
				func_83(2);
			}
			iLocal_122 = 1;
			break;
	}
}

void func_70(int iParam0)
{
	switch (*iParam0)
	{
		case 1:
			*iParam0 = 2;
			iLocal_118 = 0;
			iLocal_120 = 0;
			func_61(&iLocal_109);
			break;
		
		case 2:
			if (func_67(PLAYER::PLAYER_PED_ID()))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), Local_60.f_6[0 /*3*/], Local_60.f_6[1 /*3*/], Local_60.f_6.f_7, false, true, 0) && func_49(&Local_60))
				{
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), -687.6668f, 500.598f, 109.0364f, true, false, false, true);
					ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 200.7367f);
				}
			}
			if (func_64(PLAYER::PLAYER_PED_ID(), Local_60, 0) > (15f + 5f))
			{
				func_90(&Local_60, 2);
				if (Local_60.f_4 != 2)
				{
					Local_60.f_4 = 3;
				}
			}
			if (func_59())
			{
				if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
				{
					func_83(4);
					return;
				}
				*iParam0 = 4;
				return;
			}
			break;
		
		case 4:
			if (iLocal_118 == 0 && func_67(PLAYER::PLAYER_PED_ID()))
			{
				if (iLocal_134 != PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))
				{
					iLocal_134 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
					func_60("EPS_DROP_HELP", -1);
					iLocal_118 = 1;
				}
			}
			iLocal_119 = 0;
			func_83(1);
			break;
	}
}

void func_71()
{
	func_73();
	while (MISC::GET_MISSION_FLAG() || func_76() != 0)
	{
		SYSTEM::WAIT(0);
	}
	func_72();
}

void func_72()
{
	struct<3> Var0;
	struct<3> Var3;
	
	if (!func_82(PLAYER::PLAYER_PED_ID()))
	{
	}
	PATHFIND::SET_ROADS_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, false, false, true);
	func_88(-688.5f, 503.7f, 110.2f, 30f, &Var0, &Var3);
	iLocal_135 = PED::ADD_SCENARIO_BLOCKING_AREA(Var0, Var3, false, true, true, true, 1);
	iLocal_116 = Global_114963.f_10058.f_103;
	func_94();
	if (func_93())
	{
		func_97();
	}
	func_84(1);
	if (func_11(2) == -1)
	{
		func_4(func_16());
	}
	func_83(0);
}

void func_73()
{
	if (HUD::DOES_BLIP_EXIST(iLocal_109))
	{
		func_61(&iLocal_109);
		iLocal_109 = 0;
	}
	Global_114963.f_10058.f_103 = iLocal_116;
	func_61(&iLocal_109);
	func_84(0);
	func_75();
	func_74(&Local_60);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_135, false);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_126[0 /*3*/], Local_126[1 /*3*/], 8.25f, 1);
}

void func_74(var uParam0)
{
	if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(*uParam0, 20f, uParam0->f_3, false))
	{
		OBJECT::SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(uParam0->f_3, *uParam0, true, 0f, false);
	}
}

void func_75()
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_103[iVar0]);
		iVar0++;
	}
}

int func_76()
{
	func_77();
	return Global_114963.f_2370.f_539.f_4321;
}

void func_77()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_80(Global_114963.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_79(PLAYER::PLAYER_PED_ID());
			if (func_78(iVar0) && (!func_35(14) || Global_113909))
			{
				if (Global_114963.f_2370.f_539.f_4321 != iVar0 && func_78(Global_114963.f_2370.f_539.f_4321))
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

bool func_78(int iParam0)
{
	return iParam0 < 3;
}

int func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_80(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

int func_80(int iParam0)
{
	if (func_78(iParam0))
	{
		return func_81(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_81(int iParam0)
{
	return Global_2349[iParam0 /*29*/];
}

bool func_82(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	return !ENTITY::IS_ENTITY_DEAD(iParam0, false);
}

void func_83(int iParam0)
{
	iLocal_111 = iParam0;
	iLocal_110 = 1;
}

void func_84(bool bParam0)
{
	func_85(44, bParam0);
	func_85(45, bParam0);
	func_85(46, bParam0);
	func_85(47, bParam0);
	func_85(48, bParam0);
	func_85(49, bParam0);
	func_85(50, bParam0);
}

void func_85(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam1)
	{
		if (!func_87(iParam0, 0))
		{
			func_86(iParam0, 1, 0);
			func_86(iParam0, 2, 0);
			func_86(iParam0, 3, 0);
			func_86(iParam0, 4, 0);
			func_86(iParam0, 0, 1);
			Global_79127[iParam0] = 1;
		}
	}
	else
	{
		func_86(iParam0, 0, 0);
	}
}

void func_86(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (bParam2)
	{
		MISC::SET_BIT(&(Global_114963.f_32759[iParam0]), iParam1);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_114963.f_32759[iParam0]), bParam1);
	}
}

int func_87(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return BitTest(Global_114963.f_32759[iParam0], iParam1);
}

void func_88(struct<3> Param0, float fParam3, var uParam4, var uParam5)
{
	struct<3> Var0;
	
	Var0 = { fParam3, fParam3, fParam3 };
	*uParam4 = { Param0 - Var0 };
	*uParam5 = { Param0 + Var0 };
}

void func_89(var uParam0, struct<3> Param1, struct<3> Param4, float fParam7)
{
	*(uParam0[0 /*3*/]) = { Param1 };
	*(uParam0[1 /*3*/]) = { Param4 };
	uParam0->f_7 = fParam7;
}

void func_90(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_91(var uParam0, int iParam1, struct<3> Param2, struct<3> Param5, struct<3> Param8, struct<3> Param11, float fParam14, struct<3> Param15, struct<3> Param18)
{
	uParam0->f_3 = iParam1;
	*uParam0 = { Param2 };
	uParam0->f_5 = 2;
	uParam0->f_4 = 0;
	uParam0->f_19[0 /*3*/] = { Param15 };
	uParam0->f_19[1 /*3*/] = { Param18 };
	uParam0->f_14 = { Param5 };
	func_89(&(uParam0->f_6), Param8, Param11, fParam14);
}

int func_92(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114963.f_9094.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114963.f_9094.f_99.f_219[iVar0]), bVar1);
	return 1;
}

bool func_93()
{
	return func_3() == 5;
}

void func_94()
{
	iLocal_103[0] = joaat("vacca");
	iLocal_103[1] = joaat("surano");
	iLocal_103[2] = joaat("tornado2");
	iLocal_103[3] = joaat("superd");
	iLocal_103[4] = joaat("double");
	Local_87[0 /*3*/] = 1;
	Local_87[0 /*3*/].f_1 = "EPS_GMAIL_G5";
	Local_87[0 /*3*/].f_2 = "EPS_BMAIL_G5";
	Local_87[1 /*3*/] = 2;
	Local_87[1 /*3*/].f_1 = "EPS_GMAIL_G4";
	Local_87[1 /*3*/].f_2 = "EPS_BMAIL_G4";
	Local_87[2 /*3*/] = 3;
	Local_87[2 /*3*/].f_1 = "EPS_GMAIL_G3";
	Local_87[2 /*3*/].f_2 = "EPS_BMAIL_G3";
	Local_87[3 /*3*/] = 4;
	Local_87[3 /*3*/].f_1 = "EPS_GMAIL_G2";
	Local_87[3 /*3*/].f_2 = "EPS_BMAIL_G2";
	Local_87[4 /*3*/] = 5;
	Local_87[4 /*3*/].f_1 = "EPS_GMAIL_G1";
	Local_87[4 /*3*/].f_2 = "EPS_BMAIL_G1";
}

void func_95()
{
	int iVar0;
	
	iLocal_116 = 0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		MISC::SET_BIT(&iLocal_116, iVar0);
		bVar0++;
	}
}

int func_96(int iParam0)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return 0;
	}
	return Global_114963.f_9094.f_99.f_58[iParam0];
}

void func_97()
{
	int iVar0;
	
	func_61(&iLocal_109);
	func_84(0);
	func_75();
	func_74(&Local_60);
	Global_114963.f_10058.f_103 = iLocal_116;
	if (func_93() || func_96(90) == 1)
	{
		func_99(90, 1);
		func_98(6);
	}
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(-683.4503f, 492.9922f, 108.8737f, -688.8357f, 506.9997f, 112.1928f, 11.25f, 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(Local_126[0 /*3*/], Local_126[1 /*3*/], 8.25f, 1);
	PED::REMOVE_SCENARIO_BLOCKING_AREA(iLocal_135, false);
	if (iLocal_301 != 0)
	{
		GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_301);
		iLocal_301 = 0;
	}
	STATS::STAT_GET_INT(joaat("num_epsilon_step"), &iVar0, -1);
	if (iVar0 < (6 + func_3()))
	{
		STATS::STAT_SET_INT(joaat("num_epsilon_step"), (6 + func_3()), true);
		func_20(23, (6 + func_3()));
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

int func_98(int iParam0)
{
	int iVar0;
	bool bVar1;
	
	if (iParam0 <= 31)
	{
		iVar0 = 9;
		bVar1 = iParam0;
	}
	else
	{
		iVar0 = 10;
		bVar1 = (iParam0 - 32);
	}
	if (BitTest(Global_114963.f_9094.f_99.f_219[iVar0], bVar1))
	{
		MISC::CLEAR_BIT(&(Global_114963.f_9094.f_99.f_219[iVar0]), bVar1);
		return 1;
	}
	return 0;
}

void func_99(int iParam0, int iParam1)
{
	if (iParam0 == 146 || iParam0 == -1)
	{
		return;
	}
	if (Global_114963.f_9094.f_99.f_58[iParam0] == iParam1)
	{
		return;
	}
	Global_114963.f_9094.f_99.f_58[iParam0] = iParam1;
}

