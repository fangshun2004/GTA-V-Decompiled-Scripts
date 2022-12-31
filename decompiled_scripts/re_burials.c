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
	int iLocal_18 = 0;
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	char* sLocal_22 = 0;
	float fLocal_23 = 0f;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	float fLocal_27 = 0f;
	float fLocal_28 = 0f;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	float fLocal_32 = 0f;
	float fLocal_33 = 0f;
	float fLocal_34 = 0f;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	int iLocal_41 = 0;
	int iLocal_42 = 0;
	int iLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	float fLocal_47 = 0f;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	BOOL bLocal_52 = 0;
	Ped pedLocal_53 = 0;
	int iLocal_54 = 2;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	Ped pedLocal_57 = 0;
	Vehicle veLocal_58 = 0;
	Vehicle veLocal_59 = 0;
	Object obLocal_60 = 0;
	var uLocal_61 = 2;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	BOOL bLocal_66 = 0;
	BOOL bLocal_67 = 0;
	BOOL bLocal_68 = 0;
	BOOL bLocal_69 = 0;
	BOOL bLocal_70 = 0;
	var uLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	BOOL bLocal_74 = 0;
	BOOL bLocal_75 = 0;
	BOOL bLocal_76 = 0;
	Cam caLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 2;
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
	float fLocal_97 = 0f;
	var uLocal_98 = 2;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	float fLocal_101 = 0f;
	Hash hLocal_102 = 0;
	Hash hLocal_103 = 0;
	Hash hLocal_104 = 0;
	Hash hLocal_105 = 0;
	int iLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 2;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	Blip blLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	BOOL bLocal_117 = 0;
	BOOL bLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	BOOL bLocal_121 = 0;
	BOOL bLocal_122 = 0;
	BOOL bLocal_123 = 0;
	BOOL bLocal_124 = 0;
	int iLocal_125 = 0;
	int iLocal_126 = 0;
	var uLocal_127 = 0;
	int iLocal_128 = 0;
	BOOL bLocal_129 = 0;
	BOOL bLocal_130 = 0;
	BOOL bLocal_131 = 0;
	BOOL bLocal_132 = 0;
	BOOL bLocal_133 = 0;
	BOOL bLocal_134 = 0;
	BOOL bLocal_135 = 0;
	int iLocal_136 = 0;
	Blip blLocal_137 = 0;
	Blip blLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	BOOL bLocal_145 = 0;
	BOOL bLocal_146 = 0;
	BOOL bLocal_147 = 0;
	var uLocal_148 = 0;
	BOOL bLocal_149 = 0;
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
	BOOL bLocal_162 = 0;
	Blip blLocal_163 = 0;
	BOOL bLocal_164 = 0;
	BOOL bLocal_165 = 0;
	BOOL bLocal_166 = 0;
	BOOL bLocal_167 = 0;
	int iLocal_168 = 0;
	Vehicle veLocal_169 = 0;
	BOOL bLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	BOOL bLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	Hash hLocal_176 = 0;
	Hash hLocal_177 = 0;
	var uLocal_178 = 16;
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
	int iLocal_343 = 0;
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
	int i;

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
	iLocal_18 = 3;
	sLocal_22 = "NULL";
	fLocal_23 = 0f;
	fLocal_27 = -0.0375f;
	fLocal_28 = 0.17f;
	fLocal_32 = 80f;
	fLocal_33 = 140f;
	fLocal_34 = 180f;
	iLocal_40 = 1;
	iLocal_41 = 65;
	iLocal_42 = 49;
	iLocal_43 = 64;
	fLocal_47 = -1f;
	uLocal_107 = { 154.92f, 6841.12f, 19.14f };
	iLocal_125 = 200;
	uLocal_139 = { -1161.1992f, 934.5912f, 196.7591f };
	uLocal_142 = { -1034.6f, 4918.6f, 205.9f };
	TEXT_LABEL_ASSIGN_STRING(&uLocal_150, "", 24);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(11))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
			if (PED::IS_PED_IN_GROUP(pedLocal_53))
				PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
	
		func_212();
	}

	if (func_170(uScriptParam_0.f_1[0 /*3*/], -1, 0, false, false))
		func_167(-1);
	else
		SCRIPT::TERMINATE_THIS_THREAD();

	while (true)
	{
		SYSTEM::WAIT(0);
	
		if (BRAIN::IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() || bLocal_131)
		{
			if (!func_166())
				if (func_165())
					func_212();
		
			RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("RE_BU", 0);
		
			switch (iLocal_48)
			{
				case 0:
					if (func_153())
						func_212();
				
					if (!bLocal_66)
						func_152();
					else
						func_151();
				
					if (bLocal_52)
					{
						bLocal_162 = true;
						iLocal_48 = 1;
					}
					break;
			
				case 1:
					if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
					{
						func_150();
					
						switch (iLocal_49)
						{
							case 0:
								func_140();
								iLocal_49 = 1;
								break;
						
							case 1:
								if (!func_133(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, bLocal_129, 7f, 0) && !func_133(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, bLocal_129, 7f, 0) && !func_132())
								{
									switch (iLocal_50)
									{
										case 0:
											func_131();
										
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_78, 50f, 35f, 50f, false, true, 0))
												func_130();
										
											if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_78, 80f, 65f, 50f, false, true, 0))
												func_129();
										
											if (!ENTITY::IS_ENTITY_DEAD(veLocal_58, false))
											{
												if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 281.9148f, 6816.3447f, 4.3197f, 48.3924f, 6885.9214f, 43.0037f, 226.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88 - { 0f, 0f, 7f }, 20f, 15f, 50f, false, true, 0))
												{
													func_128();
												
													if (HUD::DOES_BLIP_EXIST(blLocal_114))
														HUD::SHOW_HEIGHT_ON_BLIP(blLocal_114, false);
												
													for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
													{
														if (HUD::DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
															HUD::SHOW_HEIGHT_ON_BLIP(uLocal_111[iLocal_64], false);
													}
												
													if (!func_166())
														func_119(true);
												}
											}
											break;
									}
								}
								else
								{
									func_128();
									iLocal_49 = 2;
								}
								break;
						
							case 2:
								if (func_133(iLocal_54[0], &iLocal_128, &uLocal_127, iLocal_126, bLocal_129, 7f, 0) || func_133(iLocal_54[1], &iLocal_128, &uLocal_127, iLocal_126, bLocal_129, 7f, 0) || bLocal_129)
								{
									bLocal_129 = true;
								
									if (!func_166())
										func_119(true);
								
									if (HUD::DOES_BLIP_EXIST(blLocal_114))
										HUD::SHOW_HEIGHT_ON_BLIP(blLocal_114, true);
								
									for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
											HUD::SHOW_HEIGHT_ON_BLIP(uLocal_111[iLocal_64], true);
									}
								
									switch (iLocal_128)
									{
										case 0:
											func_118();
											break;
									
										case 1:
											func_118();
											break;
									
										case 2:
											func_118();
											break;
									
										case 3:
											func_118();
											break;
									
										case 4:
											func_118();
											break;
									
										case 5:
											func_118();
											break;
									}
								}
							
								if (func_132())
								{
									bLocal_75 = true;
								
									if (HUD::DOES_BLIP_EXIST(blLocal_114))
										HUD::SHOW_HEIGHT_ON_BLIP(blLocal_114, true);
								
									for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
									{
										if (HUD::DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
											HUD::SHOW_HEIGHT_ON_BLIP(uLocal_111[iLocal_64], true);
									}
								
									if (!func_117())
									{
										switch (iLocal_51)
										{
											case 1:
												func_114();
												break;
										
											case 3:
												func_113();
												break;
										
											case 4:
												func_112();
												break;
										
											case 5:
												func_110();
												SYSTEM::WAIT(0);
											
												if (!PED::IS_PED_INJURED(iLocal_54[0]))
													func_108(iLocal_54[0], "GENERIC_WAR_CRY", 24);
												else if (!PED::IS_PED_INJURED(iLocal_54[1]))
													func_108(iLocal_54[1], "GENERIC_WAR_CRY", 24);
											
												func_118();
												break;
										
											case 6:
												func_110();
												SYSTEM::WAIT(0);
											
												if (!PED::IS_PED_INJURED(iLocal_54[0]))
													func_108(iLocal_54[0], "GENERIC_SHOCKED_HIGH", 24);
												else if (!PED::IS_PED_INJURED(iLocal_54[1]))
													func_108(iLocal_54[1], "GENERIC_SHOCKED_HIGH", 24);
											
												func_118();
												break;
										}
									}
									else
									{
										func_110();
										SYSTEM::WAIT(0);
									
										for (i = 0; i < iLocal_54; i = i + 1)
										{
											if (!PED::IS_PED_INJURED(iLocal_54[i]))
											{
												AUDIO::PLAY_PAIN(iLocal_54[i], 5, 0, 0);
												TASK::TASK_SMART_FLEE_PED(iLocal_54[i], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
												PED::SET_PED_KEEP_TASK(iLocal_54[i], true);
											
												if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
													if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
														ENTITY::DETACH_ENTITY(obLocal_60, true, true);
											
												if (HUD::DOES_BLIP_EXIST(uLocal_111[i]))
													HUD::REMOVE_BLIP(&uLocal_111[i]);
											}
										}
									
										iLocal_49 = 3;
									}
								}
								break;
						
							case 3:
								if (!bLocal_130)
									func_107();
							
								if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
									func_92();
								break;
						
							case 4:
								func_91();
							
								if (!ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_107, 100f, 100f, 100f, true, true, 0))
								{
									PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
								
									if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
									{
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54[0]);
										ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54[1]);
									}
								}
							
								if (!ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
								{
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_139, 200f, 200f, 200f, true, true, 0))
									{
										STREAMING::REQUEST_MODEL(joaat("S_M_M_HIGHSEC_01"));
										STREAMING::REQUEST_MODEL(joaat("GRANGER"));
									
										if (STREAMING::HAS_MODEL_LOADED(joaat("S_M_M_HIGHSEC_01")) && STREAMING::HAS_MODEL_LOADED(joaat("GRANGER")))
										{
											veLocal_59 = VEHICLE::CREATE_VEHICLE(joaat("GRANGER"), -1155.0431f, 942.9685f, 197.4921f, 161.1247f, true, true, false);
											ENTITY::SET_ENTITY_LOD_DIST(veLocal_59, 200);
											VEHICLE::SET_VEHICLE_LOD_MULTIPLIER(veLocal_59, 1.5f);
											pedLocal_57 = PED::CREATE_PED_INSIDE_VEHICLE(veLocal_59, PED_TYPE_MISSION, joaat("S_M_M_HIGHSEC_01"), -1, true, true);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_HEAD, 0, 2, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_UPPR, 0, 0, 0);
											PED::SET_PED_COMPONENT_VARIATION(pedLocal_57, PV_COMP_LOWR, 0, 0, 0);
											WEAPON::GIVE_WEAPON_TO_PED(pedLocal_57, joaat("WEAPON_PISTOL"), -1, true, true);
											PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_57, hLocal_177);
										}
									}
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_53))
								{
									if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
									{
										if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 1)
										{
											if (!bLocal_132)
											{
												func_87(false);
												func_110();
												SYSTEM::WAIT(0);
												func_71(&uLocal_178, "REBU2AU", "REBU2_WV", 4, 0, 0, 0);
												bLocal_132 = true;
											}
										}
									}
									else
									{
										bLocal_132 = false;
									}
								
									if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_139, Global_22, true, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0))
									{
										if (PED::IS_PED_IN_GROUP(pedLocal_53))
										{
											if (HUD::DOES_BLIP_EXIST(blLocal_137))
												HUD::REMOVE_BLIP(&blLocal_137);
										
											if (HUD::DOES_BLIP_EXIST(blLocal_138))
												HUD::REMOVE_BLIP(&blLocal_138);
										
											if (func_70())
												iLocal_49 = 5;
											else
												iLocal_49 = 6;
										}
									}
									else
									{
										func_65();
										func_64();
										func_63();
										func_59();
										func_58();
										func_52();
									
										if (func_51(uLocal_139))
										{
											func_87(false);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_CULT", 4, 0, 0, 0);
										}
									
										if (func_50())
										{
											func_87(false);
											func_110();
											SYSTEM::WAIT(0);
											func_71(&uLocal_178, "REBU2AU", "REBU2_NEAR", 4, 0, 0, 0);
										}
									}
								}
								break;
						
							case 5:
								func_91();
							
								if (func_49(true, false, true))
									func_48();
							
								if (bLocal_124)
									iLocal_49 = 8;
								break;
						
							case 6:
								func_91();
							
								if (func_49(true, false, true))
									func_47();
							
								if (bLocal_124)
									iLocal_49 = 8;
								break;
						
							case 8:
								func_13();
								break;
						
							case 7:
								func_11();
							
								if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
									if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
										if (!PED::IS_PED_INJURED(iLocal_54[0]))
											if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
												if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
													ENTITY::DETACH_ENTITY(obLocal_60, true, true);
											else
												ENTITY::DETACH_ENTITY(obLocal_60, true, true);
							
								if (PED::IS_PED_INJURED(iLocal_54[0]) || PED::IS_PED_INJURED(iLocal_54[1]))
									bLocal_147 = true;
							
								if (bLocal_147)
								{
									if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_58, false))
									{
										if (!PED::IS_PED_INJURED(iLocal_54[0]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_54[0]);
										
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_54[0], veLocal_58, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_54[0], veLocal_58, 0, false, false))
											{
												if (!bLocal_164)
												{
													TASK::CLEAR_PED_TASKS(iLocal_54[0]);
												
													if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
														if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
															ENTITY::DETACH_ENTITY(obLocal_60, true, true);
												
													TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_58, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 1056964608, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													TASK::TASK_ENTER_VEHICLE(0, veLocal_58, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_54[0], iLocal_65);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
													PED::SET_PED_KEEP_TASK(iLocal_54[0], true);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_58, true);
													bLocal_164 = true;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54[0], SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_54[0]) == 3)
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_54[0], uLocal_88, 10f, 10f, 10f, false, true, 0))
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54[0]);
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_54[0], true);
											}
										}
									
										if (!PED::IS_PED_INJURED(iLocal_54[1]))
										{
											PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_54[1]);
										
											if (VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_54[1], veLocal_58, -1, false, false) || VEHICLE::IS_ENTRY_POINT_FOR_SEAT_CLEAR(iLocal_54[1], veLocal_58, 0, false, false))
											{
												if (!bLocal_164)
												{
													TASK::CLEAR_PED_TASKS(iLocal_54[1]);
													TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
													TASK::TASK_CLEAR_LOOK_AT(0);
													TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(veLocal_58, -0.5f, 0.5f, 0f), PLAYER::PLAYER_PED_ID(), 3f, true, 1056964608, 1082130432, true, 0, false, joaat("FIRING_PATTERN_FULL_AUTO"), 20000);
													TASK::TASK_ENTER_VEHICLE(0, veLocal_58, -1, -1, 3f, 9, 0);
													TASK::TASK_VEHICLE_MISSION_PED_TARGET(0, veLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
													TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
													TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
													TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
													PED::SET_PED_KEEP_TASK(iLocal_54[1], true);
													VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_58, true);
													bLocal_164 = true;
												}
												else if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_54[1], SCRIPT_TASK_PERFORM_SEQUENCE) == 1)
												{
													if (TASK::GET_SEQUENCE_PROGRESS(iLocal_54[1]) == 3)
														if (!ENTITY::IS_ENTITY_AT_ENTITY(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 10f, 10f, 10f, false, true, 0) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_54[1], uLocal_88, 10f, 10f, 10f, false, true, 0))
															ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_54[1]);
												}
											}
											else
											{
												TASK::TASK_COMBAT_PED(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 0, 16);
												PED::SET_PED_KEEP_TASK(iLocal_54[1], true);
											}
										}
									}
								}
								break;
						
							case 9:
								break;
						}
					
						if (func_10() && !func_9() && iLocal_49 != 9)
						{
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, uLocal_142, 5f, 5f, 5f, false, true, 0))
								{
									func_8(0);
									SYSTEM::WAIT(0);
									func_110();
									iLocal_49 = 9;
								}
							}
						}
					
						if (func_6())
						{
							if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
								PED::DELETE_PED(&pedLocal_53);
						
							func_13();
						}
					
						if (func_5())
							func_4();
					
						func_2();
					
						if (iLocal_49 != 3)
						{
							if (func_1())
							{
								AUDIO::TRIGGER_MUSIC_EVENT("RE6_BOTH_DEAD");
							
								if (!bLocal_74)
								{
									SYSTEM::SETTIMERA(0);
									iLocal_106 = MISC::GET_GAME_TIMER() + 8500;
									bLocal_74 = true;
								}
							
								if (!PED::IS_PED_INJURED(pedLocal_53))
									if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 20f, 20f, 20f, false, true, 1))
										if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
											iLocal_49 = 3;
							}
						}
					
						if (iLocal_49 == 1 || iLocal_49 == 2 || iLocal_49 == 3 || iLocal_49 == 7)
						{
							if (!PED::IS_PED_INJURED(pedLocal_53))
							{
								if (!bLocal_130)
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_SYNCHRONIZED_SCENE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_SYNCHRONIZED_SCENE) != 0)
									{
										TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
										iLocal_343 = PED::CREATE_SYNCHRONIZED_SCENE(uLocal_78, -2f, -4f, 18f, 2);
										TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_53, iLocal_343, "random@burial", "b_burial", 1000f, -4f, 1, 24592, 1148846080, 0);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
										ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
										PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_343, true);
										PED::SET_PED_KEEP_TASK(pedLocal_53, true);
									}
								
									if (FIRE::IS_ENTITY_ON_FIRE(pedLocal_53))
									{
										PED::SET_ENABLE_HANDCUFFS(pedLocal_53, true);
										PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, true);
										ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 0, 0);
									}
								}
							
								if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(pedLocal_53) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(pedLocal_53) || iLocal_125 - ENTITY::GET_ENTITY_HEALTH(pedLocal_53) >= 50)
								{
									PED::SET_ENABLE_HANDCUFFS(pedLocal_53, true);
									PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, true);
									ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 0, 0);
								}
							
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_DEAD(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
								{
									if (ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) < 5f)
									{
									}
									else if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), pedLocal_53))
									{
										PED::SET_ENABLE_HANDCUFFS(pedLocal_53, true);
										PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, true);
										ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 0, 0);
									}
								}
							
								if (!ENTITY::IS_ENTITY_DEAD(veLocal_58, false))
								{
									if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(veLocal_58, pedLocal_53))
									{
										PED::SET_ENABLE_HANDCUFFS(pedLocal_53, true);
										PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, true);
										ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 0, 0);
									}
								}
							}
						}
					}
					break;
			}
		}
		else
		{
			func_212();
		}
	}

	return;
}

BOOL func_1() // Hash - 0x3470DCA0 ^0x885F5E1F
{
	if (!bLocal_130)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
			return true;
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (PED::IS_PED_INJURED(iLocal_54[0]) && PED::IS_PED_INJURED(iLocal_54[1]))
				return true;
		
			if (PED::IS_PED_HURT(iLocal_54[0]) && PED::IS_PED_HURT(iLocal_54[1]))
				return true;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
			if (PED::IS_PED_INJURED(iLocal_54[0]))
				return true;
	
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]) && !ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]))
			if (PED::IS_PED_INJURED(iLocal_54[1]))
				return true;
	}

	return false;
}

void func_2() // Hash - 0x785CC2CB ^0x8C94929E
{
	if (PED::IS_PED_INJURED(iLocal_54[0]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_111[0]))
		{
			if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
				if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
					ENTITY::DETACH_ENTITY(obLocal_60, true, true);
		
			func_3(&uLocal_178, 4);
			HUD::REMOVE_BLIP(&uLocal_111[0]);
		}
	}

	if (PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (HUD::DOES_BLIP_EXIST(uLocal_111[1]))
		{
			func_3(&uLocal_178, 3);
			HUD::REMOVE_BLIP(&uLocal_111[1]);
		}
	}

	if (PED::IS_PED_INJURED(pedLocal_53))
	{
		!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false);
	
		if (HUD::DOES_BLIP_EXIST(blLocal_114))
		{
			func_3(&uLocal_178, 5);
			HUD::REMOVE_BLIP(&blLocal_114);
		}
	}

	return;
}

void func_3(var uParam0, int iParam1) // Hash - 0xD18CB130 ^0xA0F4C6FD
{
	if (uParam0->[iParam1 /*10*/].f_7 == 1)
		uParam0->[iParam1 /*10*/].f_7 = 0;

	return;
}

void func_4() // Hash - 0xF28C55F4 ^0xD017B1B7
{
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
	func_212();
	return;
}

BOOL func_5() // Hash - 0x5CD3135B ^0x7A8B6999
{
	if (PED::IS_PED_INJURED(pedLocal_53))
		return true;

	return false;
}

BOOL func_6() // Hash - 0x631513D1 ^0x631513D1
{
	if (Global_32403)
	{
		func_7(4);
		return true;
	}

	return false;
}

void func_7(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113634 = iParam0;
	return;
}

void func_8(int iParam0) // Hash - 0x67413911 ^0x67413911
{
	Global_22736 = iParam0;
	return;
}

BOOL func_9() // Hash - 0xAF463394 ^0x90F146CD
{
	if (Global_113648.f_24997.f_5 == 1000)
		return true;

	return false;
}

BOOL func_10() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32402;
}

void func_11() // Hash - 0xFC5D6318 ^0x767052F7
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (!PED::IS_PED_INJURED(iLocal_54[0]) || !PED::IS_PED_INJURED(iLocal_54[1]))
		{
			if (!func_12())
			{
				switch (iLocal_168)
				{
					case 0:
						if (iLocal_106 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
								iLocal_168 = iLocal_168 + 1;
							}
						}
						break;
				
					case 1:
						if (iLocal_106 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
								iLocal_168 = iLocal_168 + 1;
							}
						}
						break;
				
					case 2:
						if (iLocal_106 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
								iLocal_168 = iLocal_168 + 1;
							}
						}
						break;
				
					case 3:
						if (iLocal_106 < MISC::GET_GAME_TIMER())
						{
							if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0))
							{
								iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(3500, 5000);
								iLocal_168 = 0;
							}
						}
						break;
				}
			}
		}
	}

	return;
}

BOOL func_12() // Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_13() // Hash - 0x7E38B72B ^0x6BE1165C
{
	while (!func_46())
	{
		SYSTEM::WAIT(0);
	}

	if (!func_6())
		if (func_45() == 0)
			func_42(-1199050901, 6, 1, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		else if (func_45() == 1)
			func_42(1082655975, 6, 2, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);
		else if (func_45() == 2)
			func_42(-2100435596, 6, 4, 95, 3, 60000, 30000, 1988415324, -1, 149, -1, 128);

	PLAYER::SPECIAL_ABILITY_FILL_METER(PLAYER::PLAYER_ID(), true, 0);
	func_17(-1, 0);
	func_14();
	func_212();
	return;
}

void func_14() // Hash - 0xD765C186 ^0xD765C186
{
	func_15();
	return;
}

int func_15() // Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_16(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_16(BOOL bParam0) // Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("BENCHMARK")) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_17(int iParam0, int iParam1) // Hash - 0x323C4E80 ^0x323C4E80
{
	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	if (iParam1 <= func_39(iParam0))
	{
		func_38(iParam0, iParam1);
	
		if (!func_37(51))
		{
			func_27(_("Some Random Events will reward the player with stat boosts or money."), 1, 0, 4000, 10000, func_30(), 0, 138, 0);
			func_26(51);
		}
	
		if (func_25(iParam0))
			Global_113648.f_24997.f_2 = 3;
	
		if (func_24(iParam0, iParam1) != 322)
			func_18(func_24(iParam0, iParam1), uLocal_44, uLocal_44.f_1);
	
		Global_113636 = iParam1;
	
		if (Global_113634 == 0)
			if (Global_113637 == 1 || Global_113637 == 5 || Global_113637 == 11 || Global_113637 == 25)
				func_7(2);
			else if (Global_113637 == 26 || Global_113637 == 8 || Global_113637 == 17)
				func_7(7);
			else
				func_7(1);
	}

	return;
}

void func_18(int iParam0, var uParam1, var uParam2) // Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_22(891 + iParam0, true, -1);
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
		func_19();

	return;
}

void func_19() // Hash - 0x9F269E94 ^0x9F269E94
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
		func_21(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_20() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_15();
			}
		}
	}

	return;
}

int func_20() // Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_21(int iParam0, int iParam1) // Hash - 0x77E0C72A ^0x80DA2A54
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

void func_22(int iParam0, BOOL bParam1, int iParam2) // Hash - 0xCF91FBA1 ^0xAE1D9C41
{
	if (iParam2 == -1)
		iParam2 = func_23();

	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
	return;
}

int func_23() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_24(int iParam0, int iParam1) // Hash - 0xE97012CD ^0x68FBF85A
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

BOOL func_25(int iParam0) // Hash - 0xBF3EFB31 ^0xBF3EFB31
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

void func_26(int iParam0) // Hash - 0x12249850 ^0x46987D7A
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

void func_27(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Hash - 0xFA14711 ^0xFA14711
{
	func_28(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_28(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Hash - 0x2DEFD20B ^0x2F7188BE
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
		func_29();
	}

	return;
}

void func_29() // Hash - 0xCF8881D1 ^0x40507183
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

int func_30() // Hash - 0x35BC7314 ^0x35BC7314
{
	func_31();

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

void func_31() // Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_35(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_34(PLAYER::PLAYER_PED_ID());
		
			if (func_33(num) && !func_32(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_33(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_32(int iParam0) // Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_33(int iParam0) // Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

int func_34(Ped pedParam0) // Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_35(i) == entityModel)
				return i;
		}
	}

	return 145;
}

Hash func_35(int iParam0) // Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_33(iParam0))
		return func_36(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_36(int iParam0) // Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

BOOL func_37(int iParam0) // Hash - 0x3F44A899 ^0x7041C53
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

void func_38(int iParam0, int iParam1) // Hash - 0xE2246457 ^0xD5018049
{
	MISC::SET_BIT(&Global_113648.f_24997.f_8[iParam0], iParam1);
	return;
}

int func_39(int iParam0) // Hash - 0xAA02DAD0 ^0xAA02DAD0
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

int func_40() // Hash - 0x7AC1007E ^0x4E7D4F54
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, SCRIPT::GET_THIS_SCRIPT_NAME(), 64);
	num = func_41(unk);
	return num;
}

int func_41(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15) // Hash - 0x6DA57317 ^0x57A32A43
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

int func_42(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Hash - 0xA32DA1EA ^0xA32DA1EA
{
	int num;
	int i;

	if (func_16(false))
		return 0;

	if (iParam5 < 0)
		return 0;

	if (iParam6 < 0)
		return 0;

	if (iParam8 == 76)
		return 0;

	if (iParam9 == 235)
		return 0;

	if (iParam3 < 3)
		if (IS_BIT_SET(iParam2, iParam3))
			return 0;

	if (iParam4 < 3)
		if (iParam4 != iParam3)
			return 0;

	if (iParam2 < 1 || iParam2 > 7)
		return 0;

	if (Global_113648.f_7690.f_136 < 9)
	{
		num = iParam0;
	
		if (Global_113648.f_7690.f_911 == num)
			Global_113648.f_7690.f_911 = -1;
	
		num.f_3 = func_44(iParam1);
		num.f_1 = iParam11;
		num.f_2 = iParam2;
		num.f_4 = MISC::GET_GAME_TIMER() + iParam5;
		num.f_5 = iParam6;
		num.f_6 = iParam3;
		num.f_14 = iParam4;
		num.f_10 = iParam7;
		num.f_11 = -1;
		num.f_7 = iParam8;
		num.f_8 = iParam9;
		num.f_9 = iParam10;
		MISC::CLEAR_BIT(&(num.f_1), 1);
		MISC::CLEAR_BIT(&(num.f_1), 0);
	
		if (iParam7 != -1)
			MISC::SET_BIT(&(num.f_1), 11);
		else if (iParam1 == 0)
			MISC::SET_BIT(&(num.f_1), 10);
	
		Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/] = { num };
		Global_113648.f_7690.f_136 = Global_113648.f_7690.f_136 + 1;
	
		for (i = 0; i < 3; i = i + 1)
		{
			if (IS_BIT_SET(iParam2, i))
				func_43(i);
		}
	
		return 1;
	}

	return 0;
}

void func_43(int iParam0) // Hash - 0xDBA91FA2 ^0x62041168
{
	int i;
	int num;
	int j;

	num = 0;

	if (!func_33(iParam0))
		return;

	for (i = 0; i < Global_113648.f_7690.f_136; i = i + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, iParam0))
			if (Global_113648.f_7690[i /*15*/].f_3 > num)
				num = Global_113648.f_7690[i /*15*/].f_3;
	}

	for (j = 0; j < Global_113648.f_7690.f_764; j = j + 1)
	{
		if (IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, iParam0))
			if (Global_113648.f_7690.f_651[j /*14*/].f_3 == 5)
				num = 5;
	}

	Global_113648.f_7690.f_919[iParam0] = num;
	return;
}

int func_44(int iParam0) // Hash - 0x17C68833 ^0x17C68833
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

int func_45() // Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_31();
	return Global_113648.f_2365.f_539.f_4321;
}

BOOL func_46() // Hash - 0xFD255207 ^0xFD255207
{
	return true;
}

void func_47() // Hash - 0x706F5904 ^0x7435781D
{
	switch (iLocal_136)
	{
		case 0:
			if (!PED::IS_PED_INJURED(pedLocal_53) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false))
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_53))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_53, true);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 1f, 1, 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
			}
		
			iLocal_136 = iLocal_136 + 1;
			break;
	
		case 1:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false))
			{
				if (PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_59, false))
				{
					if (!PED::IS_PED_INJURED(pedLocal_57))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_57, veLocal_58, 10f, 786599);
						PED::SET_PED_KEEP_TASK(pedLocal_57, true);
					}
				
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_59, true);
					iLocal_136 = iLocal_136 + 1;
				}
			}
			break;
	
		case 2:
			iLocal_136 = iLocal_136 + 1;
			break;
	
		case 3:
			iLocal_136 = iLocal_136 + 1;
			break;
	
		case 4:
			if (!func_12())
				iLocal_136 = iLocal_136 + 1;
			break;
	
		case 5:
			SYSTEM::SETTIMERA(0);
			func_13();
			break;
	}

	return;
}

void func_48() // Hash - 0xF133859B ^0x6920395A
{
	switch (iLocal_136)
	{
		case 0:
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_177, joaat("PLAYER"));
			PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), hLocal_177);
		
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				VEHICLE::BRING_VEHICLE_TO_HALT(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 5f, 2, false);
			
				if (!PED::IS_PED_INJURED(pedLocal_53) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false))
				{
					if (PED::IS_PED_IN_GROUP(pedLocal_53))
						PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
				
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
					PED::SET_PED_CAN_BE_TARGETTED(pedLocal_53, true);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), 5000, SLF_WHILE_NOT_IN_FOV, 2);
					TASK::TASK_ENTER_VEHICLE(0, veLocal_59, -1, 0, 1f, 1, 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_65);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
					func_110();
					SYSTEM::WAIT(0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_BACK", 4, 0, 0, 0);
				}
			}
		
			SYSTEM::WAIT(2700);
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
			iLocal_136 = iLocal_136 + 1;
			break;
	
		case 1:
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_ON_ANY_BIKE(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1))
					{
						if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1) > 0.1f)
						{
							if (func_45() == 0)
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR0", 4, 0, 0, 0);
						
							if (func_45() == 1)
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR1", 4, 0, 0, 0);
						
							if (func_45() == 2)
								func_71(&uLocal_178, "REBU2AU", "REBU2_DOOR2", 4, 0, 0, 0);
						}
					}
				}
			}
		
			iLocal_136 = iLocal_136 + 1;
			break;
	
		case 2:
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_59, false))
			{
				if (PED::IS_PED_IN_VEHICLE(pedLocal_53, veLocal_59, false))
				{
					if (!PED::IS_PED_INJURED(pedLocal_57))
					{
						TASK::TASK_VEHICLE_DRIVE_WANDER(pedLocal_57, veLocal_59, 10f, 786599);
						PED::SET_PED_KEEP_TASK(pedLocal_57, true);
					}
				
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(veLocal_59, true);
					iLocal_136 = iLocal_136 + 1;
				}
			}
			break;
	
		case 3:
			if (!func_12())
				bLocal_124 = true;
			break;
	}

	return;
}

BOOL func_49(BOOL bParam0, BOOL bParam1, BOOL bParam2) // Hash - 0xF0D380FF ^0x29DD7336
{
	Vehicle vehiclePedIsIn;

	if (MISC::IS_MINIGAME_IN_PROGRESS())
		return false;

	if (bParam0)
		if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
			return false;

	vehiclePedIsIn = 0;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!PED::IS_PED_SITTING_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID()))
			return false;
	
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (bParam0)
			if (ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				return false;
	
		if (bParam2)
			if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) != PLAYER::PLAYER_PED_ID())
					return false;
	
		if (!ENTITY::IS_ENTITY_DEAD(vehiclePedIsIn, false))
			if (ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) < 0.95f || ENTITY::GET_ENTITY_UPRIGHT_VALUE(vehiclePedIsIn) > 1.011f)
				return false;
	}
	else if (bParam1)
	{
		return false;
	}

	if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()))
		return false;

	if (!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID()))
		return false;

	return true;
}

BOOL func_50() // Hash - 0x6EF86551 ^0x2A368A99
{
	if (func_45() == 2)
	{
		if (func_10())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				if (!Global_32407)
				{
					AUDIO::TRIGGER_MUSIC_EVENT("AC_EN_ROUTE_CULT");
					Global_32407 = true;
				
					if (!Global_32406)
					{
						Global_32406 = true;
						return true;
					}
				}
			}
			else if (Global_32407)
			{
				AUDIO::TRIGGER_MUSIC_EVENT("AC_LEFT_AREA");
				Global_32407 = false;
			}
		}
	}

	return false;
}

BOOL func_51(Vector3 vParam0, var uParam1, var uParam2) // Hash - 0xBFD4BC13 ^0xF257BB49
{
	if (func_45() == 2)
	{
		if (func_10() && !Global_32405)
		{
			if (fLocal_47 == -1f)
				fLocal_47 = SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0);
		
			if (SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), vParam0) > fLocal_47 + 200f || MISC::GET_DISTANCE_BETWEEN_COORDS(-1014.1535f, 4881.411f, 245.00009f, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), false), true) < 400f)
			{
				Global_32405 = true;
				return true;
			}
		}
	}

	return false;
}

void func_52() // Hash - 0xD3ED0D7 ^0xA2B13489
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (func_56("REBU2_LV2_2") || func_56("REBU2_LV2_3") || func_56("REBU2_LV2_4") || func_56("REBU2_LV2_5") || func_56("REBU2_LV2_6") || func_56("REBU2_LV2_7") || func_56("REBU2_LV2_8"))
		{
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_53, true, 1);
			TASK::TASK_CLEAR_LOOK_AT(pedLocal_53);
		}
	
		if (func_56("REBU2_LV2_9") || iLocal_72 > 1)
			TASK::TASK_USE_MOBILE_PHONE(pedLocal_53, false, 1);
	}

	if (func_70() && !func_12())
	{
		if (!func_53())
			func_87(true);
	
		switch (iLocal_72)
		{
			case 0:
				func_71(&uLocal_178, "REBU2AU", "REBU2_LV2", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 1:
				iLocal_73 = MISC::GET_GAME_TIMER() + 1500;
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 2:
				if (iLocal_73 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0", 4, 0, 0, 0);
					iLocal_72 = iLocal_72 + 1;
				}
				break;
		
			case 3:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT0T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 4:
				iLocal_73 = MISC::GET_GAME_TIMER() + 500;
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 5:
				if (iLocal_73 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1", 4, 0, 0, 0);
					iLocal_72 = iLocal_72 + 1;
				}
				break;
		
			case 6:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT1T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 7:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 8:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT2T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 9:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 10:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT3T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 11:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 12:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT4T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 13:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 14:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT5T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 15:
				func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6", 4, 0, 0, 0);
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 16:
				if (func_45() == 0)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6M", 4, 0, 0, 0);
				else if (func_45() == 1)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6F", 4, 0, 0, 0);
				else if (func_45() == 2)
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT6T", 4, 0, 0, 0);
			
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 17:
				iLocal_73 = MISC::GET_GAME_TIMER() + 1000;
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 18:
				if (iLocal_73 < MISC::GET_GAME_TIMER())
				{
					func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7", 4, 0, 0, 0);
					iLocal_72 = iLocal_72 + 1;
				}
				break;
		
			case 19:
				iLocal_73 = MISC::GET_GAME_TIMER() + 2500;
				iLocal_72 = iLocal_72 + 1;
				break;
		
			case 20:
				if (iLocal_73 < MISC::GET_GAME_TIMER())
				{
					if (func_45() == 0)
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7M", 4, 0, 0, 0);
					else if (func_45() == 1)
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7F", 4, 0, 0, 0);
					else if (func_45() == 2)
						func_71(&uLocal_178, "REBU2AU", "REBU2_BANT7T", 4, 0, 0, 0);
				
					iLocal_72 = iLocal_72 + 1;
				}
				break;
		}
	}

	return;
}

BOOL func_53() // Hash - 0x42DFB5DC ^0x20256BA1
{
	if (func_54("REBU2_WV") || func_54("REBU2_UNS1") || func_54("REBU2_UNS2") || func_54("REBU2_CULT") || func_54("REBU2_NEAR") || func_54("REBU2_WRONG") || func_54("REBU2_STOP") || func_54("REBU2_GETOUT") || func_54("REBU2_JACK") || func_54("REBU2_SHOOT"))
		return true;

	return false;
}

BOOL func_54(char* sParam0) // Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_12())
	{
		TEXT_LABEL_COPY(&string2, { func_55() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

struct<6> func_55() // Hash - 0xB37EF8EF ^0xB37EF8EF
{
	var unk;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
		return Global_21344;

	return unk;
}

BOOL func_56(char* sParam0) // Hash - 0xBFB3A048 ^0xC37F964
{
	var string2;

	if (func_12())
	{
		TEXT_LABEL_COPY(&string2, { func_57() }, 4);
	
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &string2))
			return true;
	}

	return false;
}

struct<6> func_57() // Hash - 0xFF267AB8 ^0xED44CCFB
{
	var unk;
	int currentScriptedConversationLine;

	TEXT_LABEL_ASSIGN_STRING(&unk, "NULL", 24);

	if (Global_21725 == 4)
	{
		currentScriptedConversationLine = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE();
		currentScriptedConversationLine = currentScriptedConversationLine + Global_22735;
	
		if (currentScriptedConversationLine > -1)
			return Global_20593[currentScriptedConversationLine /*6*/];
		else
			return unk;
	}

	return unk;
}

void func_58() // Hash - 0x9CD9C6AB ^0x8A149F2
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (!bLocal_133)
		{
			if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
			{
				if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), true) && PED::IS_PED_IN_VEHICLE(pedLocal_53, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (!func_54("REBU2_LV2"))
					{
						func_87(false);
						func_110();
						SYSTEM::WAIT(0);
						func_71(&uLocal_178, "REBU2AU", "REBU2_GETOUT", 4, 0, 0, 0);
						bLocal_133 = true;
					}
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PLAYER::GET_PLAYERS_LAST_VEHICLE(), false) && PED::IS_PED_IN_VEHICLE(pedLocal_53, PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				bLocal_133 = false;
		}
	
		if (!bLocal_134)
		{
			if (PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
			{
				func_87(false);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_JACK", 4, 0, 0, 0);
				bLocal_134 = true;
			}
		}
		else if (!PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_134 = false;
		}
	
		if (!bLocal_135)
		{
			if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
			{
				func_87(false);
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_SHOOT", 4, 0, 0, 0);
				bLocal_135 = true;
			}
		}
		else if (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
		{
			bLocal_135 = false;
		}
	}

	return;
}

void func_59() // Hash - 0x8C6DC71 ^0x1217F181
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		{
			if (!func_62())
			{
				if (PED::IS_PED_IN_GROUP(pedLocal_53))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) != 0)
					TASK::TASK_GO_TO_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), -1, 6f, 1073741824, 1073741824, 0);
			
				if (PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_53, 0, 4194304);
			
				if (!bLocal_132)
				{
					func_87(false);
					func_110();
					SYSTEM::WAIT(0);
					bLocal_132 = true;
				
					if (!func_61())
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS1", 4, 0, 0, 0);
					else
						func_71(&uLocal_178, "REBU2AU", "REBU2_UNS2", 4, 0, 0, 0);
				}
			}
			else
			{
				bLocal_132 = false;
			
				if (TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_GO_TO_ENTITY) == 0 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 1 || TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) == 0)
					TASK::CLEAR_PED_TASKS(pedLocal_53);
			}
		}
		else if (!PED::IS_PED_IN_GROUP(pedLocal_53) && !PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false) && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) != 1 && TASK::GET_SCRIPT_TASK_STATUS(pedLocal_53, SCRIPT_TASK_PERFORM_SEQUENCE) != 0)
		{
			PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_60());
			PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
			PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
		}
	}

	return;
}

int func_60() // Hash - 0xDED80B4D ^0xD3C18941
{
	return PLAYER::GET_PLAYER_GROUP(PLAYER::GET_PLAYER_INDEX());
}

BOOL func_61() // Hash - 0xB366A366 ^0x79AE46B7
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), true))
			if (VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true))))
				return true;

	return false;
}

BOOL func_62() // Hash - 0x52A1F378 ^0x48A181AD
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
			if (!PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_PLANE(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_SUB(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_ANY_TRAIN(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")))
				if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) >= 1)
					return true;
	else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()), false))
			if (!VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()))) && ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID())) != joaat("RHINO"))
				return true;

	return false;
}

void func_63() // Hash - 0xCE14D0D8 ^0xACE6EBF8
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (PED::IS_PED_ON_FOOT(pedLocal_53))
		{
			if (!bLocal_170)
			{
				iLocal_171 = MISC::GET_GAME_TIMER();
				bLocal_170 = true;
			}
			else
			{
				iLocal_172 = MISC::GET_GAME_TIMER();
			}
		}
		else
		{
			bLocal_170 = false;
		}
	}

	if (iLocal_172 - iLocal_171 > 180000)
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (PED::IS_PED_IN_GROUP(pedLocal_53))
			{
				PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, uLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_53, 1740.7965f, 4648.7563f, 42.6529f, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
			
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_WK", 4, 0, 0, 0);
				func_4();
			}
		}
	}

	return;
}

void func_64() // Hash - 0x73ACFDD5 ^0x9B5A386A
{
	if (PED::IS_PED_STOPPED(PLAYER::PLAYER_PED_ID()))
	{
		if (!bLocal_173)
		{
			iLocal_174 = MISC::GET_GAME_TIMER();
			bLocal_173 = true;
		}
		else
		{
			iLocal_175 = MISC::GET_GAME_TIMER();
		}
	}
	else
	{
		bLocal_173 = false;
	}

	if (iLocal_175 - iLocal_174 > 120000)
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (PED::IS_PED_IN_GROUP(pedLocal_53))
			{
				PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				if (ENTITY::IS_ENTITY_AT_COORD(pedLocal_53, uLocal_139, 100f, 100f, 100f, false, true, 0))
				{
					TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(pedLocal_53, uLocal_139, 1f, -1, 1048576000, 0, 1193033728);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
				else
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(pedLocal_53, 0, 4194304);
				}
			
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_QM", 4, 0, 0, 0);
				func_4();
			}
		}
	}

	return;
}

void func_65() // Hash - 0xB6F040F7 ^0xC0D579BC
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 8f, 8f, 8f, false, true, 0) || PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_IN_VEHICLE(pedLocal_53, PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false) && !PED::IS_PED_IN_ANY_TAXI(PLAYER::PLAYER_PED_ID()))
			{
				if (!HUD::DOES_BLIP_EXIST(blLocal_114))
					blLocal_114 = func_68(pedLocal_53, false, 145);
			
				if (HUD::DOES_BLIP_EXIST(blLocal_137))
					HUD::REMOVE_BLIP(&blLocal_137);
			}
			else
			{
				if (!PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
					if (HUD::DOES_BLIP_EXIST(blLocal_114))
						HUD::REMOVE_BLIP(&blLocal_114);
			
				if (!HUD::DOES_BLIP_EXIST(blLocal_137))
					blLocal_137 = func_66(uLocal_139, true);
			}
		}
		else if (!HUD::DOES_BLIP_EXIST(blLocal_114))
		{
			blLocal_114 = func_68(pedLocal_53, false, 145);
		}
	
		if (!PED::IS_PED_IN_GROUP(pedLocal_53))
		{
			if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 8f, 8f, 8f, false, true, 0))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_53);
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_60());
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
			}
		
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
			{
				TASK::CLEAR_PED_TASKS(pedLocal_53);
				PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_60());
				PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
				PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
			}
		}
	
		if (!ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 150f, 150f, 150f, false, true, 0))
			func_4();
	}

	return;
}

Blip func_66(Vector3 vParam0, var uParam1, var uParam2, BOOL bParam3) // Hash - 0xF4E99477 ^0x29669E98
{
	Blip blip;

	blip = HUD::ADD_BLIP_FOR_COORD(vParam0);
	HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	HUD::SET_BLIP_ROUTE(blip, bParam3);
	return blip;
}

var func_67(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

Blip func_68(Ped pedParam0, BOOL bParam1, int iParam2) // Hash - 0xA714218A ^0xAD0F82BD
{
	Blip blip;

	blip = func_69(pedParam0, !bParam1, false);

	if (iParam2 != 145 && HUD::DOES_BLIP_EXIST(blip) && HUD::DOES_TEXT_LABEL_EXIST(&(Global_2028[iParam2 /*29*/].f_3)))
		HUD::SET_BLIP_NAME_FROM_TEXT_FILE(blip, &(Global_2028[iParam2 /*29*/].f_3));

	return blip;
}

Blip func_69(Ped pedParam0, BOOL bParam1, BOOL bParam2) // Hash - 0x2E5A72B ^0x64F26CC0
{
	Blip blip;

	if (!ENTITY::DOES_ENTITY_EXIST(pedParam0))
		return 0;

	blip = HUD::ADD_BLIP_FOR_ENTITY(pedParam0);

	if (ENTITY::IS_ENTITY_A_VEHICLE(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 1f : 1f);
	
		if (!bParam2)
			HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
		else
			HUD::SET_BLIP_COLOUR(blip, 2);
	}
	else if (ENTITY::IS_ENTITY_A_PED(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
		HUD::SET_BLIP_AS_FRIENDLY(blip, bParam1);
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(pedParam0))
	{
		HUD::SET_BLIP_SCALE(blip, NETWORK::NETWORK_IS_GAME_IN_PROGRESS() ? 0.7f : 0.7f);
	}

	return blip;
}

BOOL func_70() // Hash - 0xC9A216E6 ^0xBF700A11
{
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		veLocal_169 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_169, false))
			if (!PED::IS_PED_INJURED(pedLocal_53))
				if (PED::IS_PED_SITTING_IN_VEHICLE(pedLocal_53, veLocal_169))
					return true;
	}

	return false;
}

BOOL func_71(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x384540C1 ^0x384540C1
{
	func_86(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_72(sParam2, iParam3, false);
}

BOOL func_72(char* sParam0, int iParam1, BOOL bParam2) // Hash - 0x77297D51 ^0x40DC584A
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
					func_85();
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
	
		if (func_84(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_83();
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
				func_82();
			
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
			
				if (func_81())
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
		
			if (func_80())
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
		
			func_79();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_78();
		func_73();
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
		func_85();
	}

	return 0;
}

void func_73() // Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_74())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_74() // Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_77())
		return false;

	if (func_75(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_75(Player plParam0) // Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_76(plParam0, 20);
}

BOOL func_76(Player plParam0, int iParam1) // Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_77() // Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_78() // Hash - 0xE1F0C158 ^0xB5D2F635
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

void func_79() // Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_80() // Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_81() // Hash - 0x9A999369 ^0x4033F7BF
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

void func_82() // Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_32(14))
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
		Global_20383 = func_45();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

void func_83() // Hash - 0x719867DD ^0xB196B20A
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

BOOL func_84(int iParam0, int iParam1) // Hash - 0xA14C4D3F ^0xA6034F77
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

void func_85() // Hash - 0xE32CF1EF ^0xB9A7BEB2
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

void func_86(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Hash - 0xC6B752B2 ^0xC6B752B2
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

void func_87(BOOL bParam0) // Hash - 0xBE38191F ^0xC6594C09
{
	if (bParam0)
	{
		if (bLocal_149)
			if (!MISC::IS_STRING_NULL_OR_EMPTY(&uLocal_156))
				if (func_90(&uLocal_178, "REBU2AU", &uLocal_156, &uLocal_150, 8, 0, 0))
					bLocal_149 = false;
			else
				bLocal_149 = false;
	}
	else if (!bLocal_149 && func_12() && !func_53())
	{
		uLocal_156 = { func_55() };
		uLocal_150 = { func_57() };
		func_88();
		bLocal_149 = true;
	}

	return;
}

void func_88() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_89();
	return;
}

void func_89() // Hash - 0x21027D29 ^0xBEB9ECFD
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

BOOL func_90(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xF7B25BD8 ^0xF7B25BD8
{
	func_86(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_21732 = false;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 0;
	Global_22718 = 0;
	Global_22722 = 1;
	TEXT_LABEL_ASSIGN_STRING(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_72(sParam2, iParam4, false);
}

void func_91() // Hash - 0x1DDB14BC ^0x9135B2C2
{
	if (ENTITY::DOES_ENTITY_EXIST(pedLocal_53))
	{
		if (!PED::IS_PED_INJURED(pedLocal_53))
			PED::SET_PED_RESET_FLAG(pedLocal_53, 394, true);
	
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), true))
		{
			if (!PED::IS_PED_INJURED(pedLocal_53))
			{
				TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
				PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			}
		
			if (!PED::IS_PED_INJURED(pedLocal_57))
			{
				PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_177, joaat("PLAYER"));
				TASK::TASK_COMBAT_PED(pedLocal_57, PLAYER::PLAYER_PED_ID(), 0, 16);
				PED::SET_PED_KEEP_TASK(pedLocal_57, true);
			}
		
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(pedLocal_57))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_57, PLAYER::PLAYER_PED_ID(), true))
			{
				if (!PED::IS_PED_INJURED(pedLocal_53))
				{
					TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
					PED::SET_PED_KEEP_TASK(pedLocal_53, true);
				}
			
				if (!PED::IS_PED_INJURED(pedLocal_57))
				{
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_177, joaat("PLAYER"));
					TASK::TASK_COMBAT_PED(pedLocal_57, PLAYER::PLAYER_PED_ID(), 0, 16);
					PED::SET_PED_KEEP_TASK(pedLocal_57, true);
				}
			
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
				func_4();
				iLocal_51 = 4;
			}
		}
	}

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 1)
		{
			TASK::TASK_SMART_FLEE_PED(pedLocal_53, PLAYER::PLAYER_PED_ID(), 150f, -1, false, false);
			PED::SET_PED_KEEP_TASK(pedLocal_53, true);
			func_110();
			SYSTEM::WAIT(0);
			func_71(&uLocal_178, "REBU2AU", "REBU2_CRAZY", 4, 0, 0, 0);
			func_4();
			iLocal_51 = 4;
		}
	}

	return;
}

void func_92() // Hash - 0x436A4399 ^0x3EF78DDC
{
	int i;

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), pedLocal_53, 1.2f, 1.2f, 5f, false, true, 0) && PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
		{
			if (func_49(true, false, true))
			{
				bLocal_130 = true;
			
				if (!bLocal_115)
				{
					func_99(true, true, true, false, false, false, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16);
					HUD::CLEAR_HELP(true);
					HUD::DISPLAY_HUD(false);
					HUD::DISPLAY_RADAR(false);
					WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), true);
				
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), true, false);
					
						if (FIRE::IS_ENTITY_ON_FIRE(PLAYER::GET_PLAYERS_LAST_VEHICLE()))
						{
							func_98(PLAYER::GET_PLAYERS_LAST_VEHICLE());
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 200f);
						}
					
						if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), pedLocal_53, 5f, 5f, 5f, false, true, 0) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), uLocal_88, 5f, 5f, 5f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS(PLAYER::GET_PLAYERS_LAST_VEHICLE(), ENTITY::GET_ENTITY_COORDS(pedLocal_53, true) - { 0f, 3f, 5f }, false, false, false, true);
						
							if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), 1084227584);
						}
					}
				
					if (ENTITY::DOES_ENTITY_EXIST(veLocal_58))
					{
						if (FIRE::IS_ENTITY_ON_FIRE(veLocal_58))
						{
							func_98(veLocal_58);
							VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_58, 200f);
						}
					
						if (ENTITY::IS_ENTITY_AT_ENTITY(veLocal_58, pedLocal_53, 8f, 8f, 8f, false, true, 0))
						{
							ENTITY::SET_ENTITY_COORDS(veLocal_58, uLocal_88, false, false, false, true);
						
							if (!ENTITY::IS_ENTITY_DEAD(veLocal_58, false))
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_58, 1084227584);
						}
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_53))
					{
						veLocal_169 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(pedLocal_53, true), 5f, 0, 2);
					
						if (!ENTITY::IS_ENTITY_DEAD(veLocal_169, false))
						{
							if (FIRE::IS_ENTITY_ON_FIRE(veLocal_169))
							{
								func_98(veLocal_169);
								VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veLocal_169, 200f);
							}
						
							ENTITY::SET_ENTITY_COORDS(veLocal_169, ENTITY::GET_ENTITY_COORDS(pedLocal_53, true) + { 0f, 5f, 5f }, true, false, false, true);
						}
					}
				
					FIRE::STOP_FIRE_IN_RANGE(uLocal_78, 10f);
					MISC::CLEAR_AREA_OF_PROJECTILES(uLocal_78, 10f, 0);
					MISC::CLEAR_AREA_OF_VEHICLES(uLocal_78, 4.5f, false, false, false, false, false, false, 0);
					ENTITY::SET_ENTITY_COORDS(pedLocal_53, uLocal_78, true, false, false, true);
					ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), uLocal_78, true, false, false, true);
					!PED::IS_PED_INJURED(pedLocal_53);
				
					for (i = 0; i < iLocal_54; i = i + 1)
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[i]))
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_54[i], ENTITY::GET_ENTITY_COORDS(pedLocal_53, false), 1.5f, 1.5f, 1.5f, false, true, 0))
								PED::DELETE_PED(&iLocal_54[i]);
					}
				
					if (!PED::IS_PED_INJURED(pedLocal_53))
					{
						iLocal_343 = PED::CREATE_SYNCHRONIZED_SCENE(163.449f, 6839.993f, 18.88f, 0f, 0f, 0f, 2);
						caLocal_77 = CAM::CREATE_CAM("DEFAULT_ANIMATED_CAMERA", false);
						CAM::PLAY_SYNCHRONIZED_CAM_ANIM(caLocal_77, iLocal_343, "untie_cam", "random@burial");
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.6699f, 6839.238f, 18.8314f, false, false, false, true);
						ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 18.2311f);
						ENTITY::SET_ENTITY_HEALTH(pedLocal_53, 200, 0);
						PED::SET_ENABLE_HANDCUFFS(pedLocal_53, false);
						PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
						TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_53, iLocal_343, "random@burial", "untie_ped", 1000f, -1000f, 4, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_53, false, false);
						TASK::TASK_SYNCHRONIZED_SCENE(PLAYER::PLAYER_PED_ID(), iLocal_343, "random@burial", "untie_player", 1000f, -1000f, 0, 0, 1148846080, 0);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], iLocal_343, "untie_legstie", "random@burial", 1000f, -1000f, 0, 1148846080);
						ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], iLocal_343, "untie_wristtie", "random@burial", 1000f, -1000f, 0, 1148846080);
						CAM::SET_CAM_ACTIVE(caLocal_77, true);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						iLocal_120 = MISC::GET_GAME_TIMER();
						bLocal_115 = true;
					}
				}
			}
		}
	}

	if (bLocal_115 && !bLocal_117)
	{
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
	
		if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_343))
		{
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_343) > 0.115f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_343) < 0.12f || PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_343) > 0.355f && PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_343) < 0.36f)
				AUDIO::PLAY_SOUND_FRONTEND(-1, "ROPE_CUT", "ROPE_CUT_SOUNDSET", true);
		
			if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iLocal_343) > 0.6f)
			{
				if (!bLocal_116)
				{
					func_110();
					SYSTEM::WAIT(0);
				
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_UNT", 4, 0, 0, 0))
						bLocal_116 = true;
				}
			}
		}
	
		iLocal_119 = MISC::GET_GAME_TIMER();
	
		if (iLocal_119 - iLocal_120 > 9700 && !bLocal_123 && CAM::GET_FOLLOW_PED_CAM_VIEW_MODE() == FIRST_PERSON)
		{
			GRAPHICS::ANIMPOSTFX_PLAY("CamPushInNeutral", 0, false);
			AUDIO::PLAY_SOUND_FRONTEND(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
			bLocal_123 = true;
		}
	
		if (iLocal_119 - iLocal_120 > 10000)
			bLocal_117 = true;
	
		if (func_96(1000))
		{
			func_110();
			CAM::DO_SCREEN_FADE_OUT(800);
		
			while (CAM::IS_SCREEN_FADING_OUT())
			{
				SYSTEM::WAIT(0);
			}
		
			bLocal_117 = true;
			bLocal_118 = true;
		}
	}

	if (bLocal_117 && !bLocal_122)
	{
		HUD::DISPLAY_HUD(true);
		HUD::DISPLAY_RADAR(true);
		PED::SET_SYNCHRONIZED_SCENE_PHASE(iLocal_343, 1f);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
		ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), 162.5284f, 6839.658f, 18.8198f, true, false, false, true);
		ENTITY::SET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID(), 256.7693f);
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(pedLocal_53);
			PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(pedLocal_53, false, false);
			PED::SET_PED_CAN_RAGDOLL(pedLocal_53, true);
			ENTITY::SET_ENTITY_COORDS(pedLocal_53, 164.4963f, 6839.3335f, 18.9657f, true, false, false, true);
			ENTITY::SET_ENTITY_HEADING(pedLocal_53, 73.449f);
		}
	
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(26.1578f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-8.1198f, 1065353216);
		CAM::SET_CAM_ACTIVE(caLocal_77, false);
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CAM::DESTROY_CAM(caLocal_77, false);
		WEAPON::HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(PLAYER::PLAYER_PED_ID(), false);
	
		if (bLocal_118)
		{
			CAM::DO_SCREEN_FADE_IN(800);
		
			while (CAM::IS_SCREEN_FADING_IN())
			{
				SYSTEM::WAIT(0);
			}
		}
	
		bLocal_122 = true;
	}

	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		if (bLocal_122)
		{
			if (!bLocal_121)
			{
				if (!func_12())
				{
					if (func_45() == 0)
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM0", 4, 0, 0, 0);
				
					if (func_45() == 1)
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM1", 4, 0, 0, 0);
				
					if (func_45() == 2)
						func_71(&uLocal_178, "REBU2AU", "REBU2_HM2", 4, 0, 0, 0);
				
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, hLocal_177, joaat("PLAYER"));
					PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), hLocal_177);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 4000);
				
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
					{
						if (ENTITY::IS_ENTITY_AT_ENTITY(pedLocal_53, PLAYER::GET_PLAYERS_LAST_VEHICLE(), 20f, 20f, 20f, false, true, 0) && VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(PLAYER::GET_PLAYERS_LAST_VEHICLE()) > 0)
						{
							TASK::TASK_ENTER_VEHICLE(0, PLAYER::GET_PLAYERS_LAST_VEHICLE(), -1, 0, 1f, 1, 0);
						}
						else if (!PED::IS_PED_IN_GROUP(pedLocal_53))
						{
							PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_60());
							PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
							PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
						}
					}
					else if (!PED::IS_PED_IN_GROUP(pedLocal_53))
					{
						PED::SET_PED_AS_GROUP_MEMBER(pedLocal_53, func_60());
						PED::SET_PED_NEVER_LEAVES_GROUP(pedLocal_53, true);
						PED::SET_PED_GROUP_MEMBER_PASSENGER_INDEX(pedLocal_53, 0);
					}
				
					TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
					TASK::TASK_PERFORM_SEQUENCE(pedLocal_53, iLocal_65);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				
					if (HUD::DOES_BLIP_EXIST(blLocal_114))
						HUD::REMOVE_BLIP(&blLocal_114);
				
					if (!HUD::DOES_BLIP_EXIST(blLocal_137))
						blLocal_137 = func_66(uLocal_139, true);
				
					if (func_45() == 2 && !func_9())
					{
						if (!HUD::DOES_BLIP_EXIST(blLocal_138))
						{
							blLocal_138 = func_66(uLocal_142, false);
							HUD::SET_BLIP_SPRITE(blLocal_138, BLIP_ALTRUIST);
							func_94();
						}
					}
				
					func_93();
					bLocal_131 = true;
					bLocal_121 = true;
					SYSTEM::SETTIMERA(0);
					VEHICLE::REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, 0);
					VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, false, true);
					func_99(false, true, true, false, false, false, false);
					PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, SPC_CLEAR_TASKS);
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
					iLocal_49 = 4;
				}
			}
		}
	}

	return;
}

void func_93() // Hash - 0xCDEEC49D ^0xCDEEC49D
{
	if (!func_9())
		if (func_45() == 2)
			Global_32402 = 1;

	return;
}

void func_94() // Hash - 0x3167FC12 ^0x87D8CFC0
{
	if (func_45() == 2)
	{
		if (!Global_32404)
		{
			func_95(_("Trevor can sometimes deliver Random Event passengers to the Altruist Cult, located at ~BLIP_ALTRUIST~"), -1);
			Global_32404 = true;
		}
	}

	return;
}

void func_95(char* sParam0, int iParam1) // Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

BOOL func_96(int iParam0) // Hash - 0x7FAC01B4 ^0x9388B6EC
{
	if (CAM::IS_SCREEN_FADED_IN())
	{
		if (MISC::GET_GAME_TIMER() - Global_28 > iParam0)
			Global_27 = MISC::GET_GAME_TIMER();
	
		Global_28 = MISC::GET_GAME_TIMER();
	
		if (MISC::GET_GAME_TIMER() - Global_27 > iParam0)
		{
			if (func_97())
			{
				Global_27 = MISC::GET_GAME_TIMER();
				return true;
			}
		}
	}

	return false;
}

BOOL func_97() // Hash - 0x57459B9C ^0x9A36D842
{
	if (HUD::IS_PAUSE_MENU_ACTIVE())
		return false;

	if (PAD::IS_CONTROL_JUST_PRESSED(PLAYER_CONTROL, INPUT_SKIP_CUTSCENE) || PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_SKIP_CUTSCENE))
		return true;

	return false;
}

void func_98(Vehicle veParam0) // Hash - 0x78E86253 ^0xD1289117
{
	if (ENTITY::DOES_ENTITY_EXIST(veParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(veParam0, false))
		{
			if (FIRE::IS_ENTITY_ON_FIRE(veParam0))
			{
				FIRE::STOP_ENTITY_FIRE(veParam0);
				ENTITY::SET_ENTITY_HEALTH(veParam0, ENTITY::GET_ENTITY_HEALTH(veParam0) + 200, 0);
				VEHICLE::SET_VEHICLE_ENGINE_HEALTH(veParam0, VEHICLE::GET_VEHICLE_ENGINE_HEALTH(veParam0) + 200f);
				VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(veParam0, VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(veParam0) + 200f);
				FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(veParam0, true), 5f);
				MISC::CLEAR_AREA(ENTITY::GET_ENTITY_COORDS(veParam0, true), 2.5f, true, false, false, false);
			}
		}
	}

	return;
}

void func_99(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Hash - 0x787E640E ^0x67C15509
{
	if (bParam0)
	{
		PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
		func_106(1);
		HUD::THEFEED_FLUSH_QUEUE();
		HUD::THEFEED_PAUSE();
	
		if (Global_20383.f_1 > 3 && !bParam6)
		{
			if (AUDIO::IS_MOBILE_PHONE_CALL_ONGOING())
				AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		
			if (!func_80())
				Global_20383.f_1 = 3;
		
			Global_21725 = 5;
		}
	
		func_105(true, bParam3, bParam2, false);
		Global_63368 = 1;
		Global_75696 = 1;
		Global_78556 = 1;
	}
	else
	{
		func_106(0);
		HUD::THEFEED_RESUME();
		Global_63368 = 0;
	
		if (bParam1)
			GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
	
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
		PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
		func_105(false, bParam3, bParam2, false);
	
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_103(PLAYER::PLAYER_ID()) && !func_101(PLAYER::PLAYER_ID(), 0) && !func_100() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE())
				ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
		else if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_103(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5)
			ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
	
		Global_78556 = 0;
	}

	return;
}

BOOL func_100() // Hash - 0xAA7793E3 ^0x3F62CDC8
{
	return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}

BOOL func_101(Player plParam0, int iParam1) // Hash - 0x5A3B86CC ^0x2CFA58CE
{
	BOOL flag;

	if (plParam0 == PLAYER::PLAYER_ID())
		flag = func_102(-1, false) == 8;
	else
		flag = Global_1853910[plParam0 /*862*/].f_205 == 8;

	if (iParam1 == 1)
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(plParam0))
			flag = PLAYER::GET_PLAYER_TEAM(plParam0) == 8;

	return flag;
}

int func_102(int iParam0, BOOL bParam1) // Hash - 0x1DCD393E ^0x1DCD393E
{
	int num;
	int num2;

	num2 = iParam0;

	if (num2 == -1)
		num2 = func_23();

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

BOOL func_103(Player plParam0) // Hash - 0x68897CDD ^0x62820466
{
	if (func_101(plParam0, 0))
		return true;

	if (func_104())
		if (plParam0 == PLAYER::PLAYER_ID())
			return true;

	if (IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2))
		return true;

	return false;
}

BOOL func_104() // Hash - 0xA525B2F4 ^0xA525B2F4
{
	return IS_BIT_SET(Global_2621446, 3);
}

int func_105(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Hash - 0x3167F4C7 ^0xCE6B9B6A
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

void func_106(int iParam0) // Hash - 0x1B2EEE72 ^0xEDBC1F9D
{
	if (iParam0 == 1)
		MISC::SET_BIT(&Global_8253, 13);
	else
		MISC::CLEAR_BIT(&Global_8253, 13);

	return;
}

void func_107() // Hash - 0x23C049D3 ^0xBE99EEAD
{
	if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 1:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 2:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 3:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_HPF", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4000, 5500);
						iLocal_168 = 0;
					}
				}
				break;
		}
	}

	return;
}

void func_108(Ped pedParam0, char* sParam1, int iParam2) // Hash - 0x48D349EA ^0xA208047E
{
	AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(pedParam0, sParam1, func_109(iParam2), 1);
	return;
}

char* func_109(int iParam0) // Hash - 0xA17D549C ^0x66F02B57
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

void func_110() // Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_111();
	return;
}

void func_111() // Hash - 0xF6D04E68 ^0x80AE5309
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

void func_112() // Hash - 0x4B0D1732 ^0x41AB6763
{
	if (!bLocal_67 && ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_107, 30f, 30f, 30f, false, true, 0))
		if (!PED::IS_PED_INJURED(iLocal_54[1]))
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_ATVF", 4, 0, 0, 0))
				bLocal_67 = true;

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_58, false))
	{
		if (!PED::IS_PED_INJURED(iLocal_54[0]))
		{
			TASK::TASK_VEHICLE_MISSION_PED_TARGET(iLocal_54[0], veLocal_58, PLAYER::PLAYER_PED_ID(), 8, 30f, 262144, -1f, 10f, true);
			PED::SET_PED_KEEP_TASK(iLocal_54[0], true);
		}
	
		if (!PED::IS_PED_INJURED(iLocal_54[1]))
		{
			TASK::TASK_ENTER_VEHICLE(iLocal_54[1], veLocal_58, -1, 0, 3f, 1, 0);
			PED::SET_PED_KEEP_TASK(iLocal_54[1], true);
		}
	}
	else
	{
		for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[iLocal_64]))
			{
				TASK::TASK_SMART_FLEE_PED(iLocal_54[iLocal_64], PLAYER::PLAYER_PED_ID(), 250f, -1, false, false);
				PED::SET_PED_KEEP_TASK(iLocal_54[iLocal_64], true);
			}
		}
	}

	SYSTEM::WAIT(0);
	func_4();
	return;
}

void func_113() // Hash - 0x955481BB ^0x34142038
{
	if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (!ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_54[0]) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iLocal_54[1]))
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_VH", 4, 0, 0, 0))
			{
				if (!PED::IS_PED_SHOOTING(iLocal_54[1]))
				{
					TASK::CLEAR_PED_TASKS(iLocal_54[1]);
					TASK::TASK_SHOOT_AT_ENTITY(iLocal_54[1], PLAYER::PLAYER_PED_ID(), -1, joaat("FIRING_PATTERN_FULL_AUTO"));
				}
			}
		}
	}

	iLocal_49 = 7;
	return;
}

void func_114() // Hash - 0x99F7F94D ^0x545074A1
{
	float distance;

	if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
	{
		if (!bLocal_69)
		{
			if (!bLocal_68)
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				bLocal_68 = true;
			}
		
			if (PED::IS_PED_FACING_PED(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 90f))
			{
				func_110();
				SYSTEM::WAIT(0);
				func_71(&uLocal_178, "REBU2AU", "REBU2_GUY", 4, 0, 0, 0);
			
				if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
				{
					distance = func_116(iLocal_54[0], PLAYER::PLAYER_PED_ID(), true);
				
					if (distance > 5f)
						distance = distance - 2f;
					else
						distance = distance - 0.5f;
				
					ENTITY::DETACH_ENTITY(obLocal_60, false, true);
					ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_60, iLocal_54[0], PED::GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
					TASK::CLEAR_PED_TASKS(iLocal_54[0]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
					TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -4f, 2000, 0, 0, false, false, false);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54[0], iLocal_65);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
					WEAPON::SET_CURRENT_PED_WEAPON(iLocal_54[1], joaat("WEAPON_SAWNOFFSHOTGUN"), true);
					TASK::CLEAR_PED_TASKS(iLocal_54[1]);
					TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
					TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, SLF_WHILE_NOT_IN_FOV, 2);
					TASK::TASK_GO_TO_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, distance, 1f, 1073741824, 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 0);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
					bLocal_69 = true;
				}
			}
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
			if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
						ENTITY::DETACH_ENTITY(obLocal_60, true, true);
	
		if (bLocal_69 && !bLocal_165)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WHO", 4, 0, 0, 0))
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), PLAYER::PLAYER_PED_ID(), 1f, false, 3.5f, 1082130432, true, false, joaat("FIRING_PATTERN_FULL_AUTO"));
				TASK::TASK_AIM_GUN_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, false);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");
				bLocal_165 = true;
			}
		}
	
		if (bLocal_165 && !bLocal_166)
		{
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_WAR", 4, 0, 0, 0))
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, false, true, 0))
					TASK::TASK_AIM_GUN_AT_ENTITY(iLocal_54[0], PLAYER::PLAYER_PED_ID(), -1, false);
			
				bLocal_166 = true;
				SYSTEM::SETTIMERB(0);
			}
		}
	
		if (bLocal_166 && !bLocal_167)
		{
			if (SYSTEM::TIMERB() > 15000 && !func_12())
			{
				if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, false, true, 0))
				{
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54[0], PLAYER::PLAYER_PED_ID(), 0);
					TASK::TASK_TURN_PED_TO_FACE_ENTITY(iLocal_54[1], PLAYER::PLAYER_PED_ID(), 0);
					func_71(&uLocal_178, "REBU2AU", "REBU2_SHO", 4, 0, 0, 0);
					bLocal_167 = true;
				}
			}
		}
	
		if (!bLocal_70 && bLocal_165 && !PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
		{
			if (ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[0], 30f, 30f, 30f, false, true, 0) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_54[1], 30f, 30f, 30f, false, true, 0))
			{
				if (!func_12())
					if (func_115())
						func_71(&uLocal_178, "REBU2AU", "REBU2_FO", 4, 0, 0, 0);
					else
						func_71(&uLocal_178, "REBU2AU", "REBU2_ATT", 4, 0, 0, 0);
			}
			else
			{
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_54[1], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_54[1], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54[0], iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_GO_TO_ENTITY(0, iLocal_54[0], -1, 2f, 1f, 1073741824, 0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iLocal_54[0], 0);
				TASK::TASK_START_SCENARIO_IN_PLACE(0, "WORLD_HUMAN_HANG_OUT_STREET", 0, true);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				SYSTEM::SETTIMERB(15000);
				bLocal_145 = false;
				bLocal_166 = true;
				bLocal_70 = true;
			}
		}
	
		if (bLocal_167)
		{
			func_11();
			func_118();
		}
	
		if (PED::CAN_PED_SEE_HATED_PED(iLocal_54[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_54[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_54[0]) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_54[1]))
		{
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
					
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_GUN", 4, 0, 0, 0))
						{
							bLocal_76 = true;
							func_118();
						}
					}
				}
			}
		
			if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 3) && !WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 4))
			{
				if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
				{
					if (!bLocal_76)
					{
						func_110();
						SYSTEM::WAIT(0);
					
						if (func_71(&uLocal_178, "REBU2AU", "REBU2_WEP", 4, 0, 0, 0))
						{
							bLocal_76 = true;
							func_118();
						}
					}
				}
			}
		
			if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()))
				func_118();
		}
	}

	return;
}

BOOL func_115() // Hash - 0x6E373505 ^0x528400E3
{
	if (IS_BIT_SET(MISC::GET_RANDOM_INT_IN_RANGE(0, 65535), 0))
		return true;

	return false;
}

float func_116(Entity eParam0, Ped pedParam1, BOOL bParam2) // Hash - 0x7B2C17A2 ^0xDF922C6D
{
	Vector3 entityCoords;
	Vector3 entityCoords2;

	if (!ENTITY::IS_ENTITY_DEAD(eParam0, false))
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, true) };
	else
		entityCoords = { ENTITY::GET_ENTITY_COORDS(eParam0, false) };

	if (!ENTITY::IS_ENTITY_DEAD(pedParam1, false))
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, true) };
	else
		entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam1, false) };

	return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}

BOOL func_117() // Hash - 0xB05A43A4 ^0x12EF857E
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), false))
				if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("RHINO")) || PED::IS_PED_IN_ANY_POLICE_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("ANNIHILATOR")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("BUZZARD")) || PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID()))
					return true;

	return false;
}

void func_118() // Hash - 0x406E33BB ^0x825B027E
{
	func_11();
	AUDIO::TRIGGER_MUSIC_EVENT("RE6_START");

	if (!bLocal_145)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[0]))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_54[0], 156, true);
			
				if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
				{
					PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_54[0]);
				
					if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
					{
						if (!bLocal_70)
						{
							ENTITY::DETACH_ENTITY(obLocal_60, false, true);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_60, iLocal_54[0], PED::GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
							TASK::CLEAR_PED_TASKS(iLocal_54[0]);
							TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
							TASK::TASK_CLEAR_LOOK_AT(0);
							TASK::TASK_PLAY_ANIM(0, "random@burial", "a_burial_stop", 8f, -8f, 2000, 0, 0, false, false, false);
							TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
							TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
							TASK::TASK_PERFORM_SEQUENCE(iLocal_54[0], iLocal_65);
							TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
							PED::SET_PED_KEEP_TASK(iLocal_54[0], true);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_54[0], false, false);
							bLocal_145 = true;
						}
					}
					else
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
						TASK::TASK_CLEAR_LOOK_AT(0);
						TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
						TASK::TASK_PERFORM_SEQUENCE(iLocal_54[0], iLocal_65);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
						PED::SET_PED_KEEP_TASK(iLocal_54[0], true);
						bLocal_145 = true;
					}
				}
			}
			else
			{
				bLocal_145 = true;
			}
		}
		else
		{
			bLocal_145 = true;
		}
	}

	if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.355f)
						ENTITY::DETACH_ENTITY(obLocal_60, true, true);

	if (!bLocal_146)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_54[1]))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[1]))
			{
				PED::SET_PED_RESET_FLAG(iLocal_54[1], 156, true);
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_54[1]);
				TASK::OPEN_SEQUENCE_TASK(&iLocal_65);
				TASK::TASK_CLEAR_LOOK_AT(0);
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, PLAYER::PLAYER_PED_ID(), 500);
				TASK::TASK_COMBAT_PED(0, PLAYER::PLAYER_PED_ID(), 0, 16);
				TASK::CLOSE_SEQUENCE_TASK(iLocal_65);
				TASK::TASK_PERFORM_SEQUENCE(iLocal_54[1], iLocal_65);
				TASK::CLEAR_SEQUENCE_TASK(&iLocal_65);
				PED::SET_PED_KEEP_TASK(iLocal_54[1], true);
				bLocal_146 = true;
			}
			else
			{
				bLocal_146 = true;
			}
		}
		else
		{
			bLocal_146 = true;
		}
	}

	if (bLocal_146 && bLocal_145)
	{
		iLocal_106 = MISC::GET_GAME_TIMER() + 8500;
		SYSTEM::SETTIMERA(0);
		iLocal_49 = 7;
	}

	return;
}

int func_119(BOOL bParam0) // Hash - 0x3A78A0E1 ^0xB3644749
{
	if (func_122())
	{
		Global_113638 = true;
		Global_113635 = MISC::GET_GAME_TIMER();
	
		if (func_25(Global_113637))
			func_120(0);
	
		HUD::SET_MISSION_NAME(true, _("Random Event"));
	
		if (bParam0 && func_25(Global_113637))
			HUD::FLASH_MINIMAP_DISPLAY();
	
		return 1;
	}

	return 0;
}

void func_120(int iParam0) // Hash - 0x3B4E6AAB ^0x52844A7B
{
	switch (iParam0)
	{
		case 0:
			if (Global_113648.f_24997.f_2 < 3)
			{
				if (!HUD::IS_HELP_MESSAGE_ON_SCREEN())
				{
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
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
					func_95(func_121(iParam0), -1);
					Global_113648.f_24997.f_4 = Global_113648.f_24997.f_4 + 1;
					MISC::SET_BIT(&Global_113644, 2);
				}
			}
			break;
	}

	return;
}

char* func_121(int iParam0) // Hash - 0x8B1302A6 ^0x578A0E2E
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

BOOL func_122() // Hash - 0x8129EEA4 ^0x48B13301
{
	switch (func_123(&Global_32223, 0, 5, false, SCRIPT::GET_ID_OF_THIS_THREAD()))
	{
		case 1:
			return true;
	
		case 0:
			return true;
	}

	return false;
}

int func_123(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_127(0))
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
		if (!func_125(iParam2))
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
			func_124(uParam0, iParam4);
	}

	return 2;
}

void func_124(var uParam0, int iParam1) // Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_125(int iParam0) // Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_126(iParam0, Global_43257);
}

BOOL func_126(int iParam0, int iParam1) // Hash - 0x1FD727E0 ^0x1FD727E0
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

BOOL func_127(int iParam0) // Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_125(iParam0))
		return false;

	return true;
}

void func_128() // Hash - 0xCBF47CEB ^0xC5BFDB37
{
	if (HUD::DOES_BLIP_EXIST(blLocal_163))
		HUD::REMOVE_BLIP(&blLocal_163);

	if (!HUD::DOES_BLIP_EXIST(blLocal_114))
		if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
			blLocal_114 = func_68(pedLocal_53, false, 145);

	for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
	{
		if (!HUD::DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_54[iLocal_64], false))
				uLocal_111[iLocal_64] = func_68(iLocal_54[iLocal_64], true, 145);
	}

	return;
}

void func_129() // Hash - 0x5E25F943 ^0x43C20FFB
{
	if (!PED::IS_PED_INJURED(pedLocal_53))
	{
		switch (iLocal_168)
		{
			case 0:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 1:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 2:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500);
						iLocal_168 = iLocal_168 + 1;
					}
				}
				break;
		
			case 3:
				if (iLocal_106 < MISC::GET_GAME_TIMER())
				{
					if (func_71(&uLocal_178, "REBU2AU", "REBU2_PD", 4, 0, 0, 0))
					{
						iLocal_106 = MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(4500, 6500);
						iLocal_168 = 0;
					}
				}
				break;
		}
	}

	return;
}

void func_130() // Hash - 0x9BE6DBFC ^0xC108BDD8
{
	switch (iLocal_110)
	{
		case 0:
			if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH1", 4, 0, 0, 0))
				iLocal_110 = iLocal_110 + 1;
			break;
	
		case 1:
			if (!func_12())
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH2", 4, 0, 0, 0))
					iLocal_110 = iLocal_110 + 1;
			break;
	
		case 2:
			if (!func_12())
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH3", 4, 0, 0, 0))
					iLocal_110 = iLocal_110 + 1;
			break;
	
		case 3:
			if (!func_12())
				if (func_71(&uLocal_178, "REBU2AU", "REBU2_CH4", 4, 0, 0, 0))
					iLocal_110 = iLocal_110 + 1;
			break;
	
		case 4:
			iLocal_106 = MISC::GET_GAME_TIMER() + 3000;
			iLocal_110 = iLocal_110 + 1;
			break;
	
		case 5:
			break;
	}

	return;
}

void func_131() // Hash - 0xC20F2B69 ^0x20668686
{
	if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial_stop", 3))
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial_stop") > 0.124f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.127f)
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", obLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, false, false, false);
			
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_54[0], "random@burial", "a_burial", 3))
					if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.04f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.043f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.24f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.243f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.44f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.443f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.64f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.643f || ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") > 0.84f && ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(iLocal_54[0], "random@burial", "a_burial") < 0.843f)
						GRAPHICS::START_PARTICLE_FX_NON_LOOPED_ON_ENTITY("scr_burial_dirt", obLocal_60, 0f, 0f, -0.95f, 0f, 180f, 0f, 1065353216, false, false, false);
			}
		}
	}

	return;
}

BOOL func_132() // Hash - 0xE81CAA03 ^0xBD7D605C
{
	if (!bLocal_129)
	{
		if (MISC::IS_BULLET_IN_AREA(uLocal_88, 100f, true) || MISC::IS_BULLET_IN_AREA(uLocal_88, 100f, true))
		{
			if (PED::IS_PED_INJURED(iLocal_54[0]) || PED::IS_PED_INJURED(iLocal_54[1]))
			{
				iLocal_51 = 1;
				return true;
			}
			else if (!MISC::IS_BULLET_IN_AREA(uLocal_88, 100f, true) || !MISC::IS_BULLET_IN_AREA(uLocal_88, 100f, true))
			{
				iLocal_51 = 1;
				return true;
			}
		}
	
		if (MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_SMOKEGRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADE"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_STICKYBOMB"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_GRENADELAUNCHER_SMOKE"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_RPG"), true) || MISC::IS_PROJECTILE_TYPE_IN_ANGLED_AREA(194.3872f, 6833.941f, 62.4419f, 131.3547f, 6845.673f, 15.4613f, 36.9375f, joaat("WEAPON_MOLOTOV"), true) || FIRE::IS_EXPLOSION_IN_AREA(2, uLocal_88 - { 100f, 100f, 100f }, uLocal_88 + { 100f, 100f, 100f }) || FIRE::IS_EXPLOSION_IN_AREA(4, uLocal_88 - { 100f, 100f, 100f }, uLocal_88 + { 100f, 100f, 100f }) || FIRE::IS_EXPLOSION_IN_AREA(0, uLocal_88 - { 100f, 100f, 100f }, uLocal_88 + { 100f, 100f, 100f }))
		{
			iLocal_51 = 1;
			return true;
		}
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_58))
		{
			if (!ENTITY::IS_ENTITY_DEAD(veLocal_58, false))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(veLocal_58, PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_58, false))
				{
					ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(veLocal_58);
					func_118();
					iLocal_51 = 3;
					return true;
				}
			
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					if (PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("TOWTRUCK")) || PED::IS_PED_IN_MODEL(PLAYER::PLAYER_PED_ID(), joaat("TOWTRUCK2")))
					{
						if (VEHICLE::IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), veLocal_58))
						{
							func_118();
							iLocal_51 = 3;
							return true;
						}
					}
				}
			}
		}
	
		if (!bLocal_75)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
			{
				if (PED::CAN_PED_SEE_HATED_PED(iLocal_54[0], PLAYER::PLAYER_PED_ID()) || PED::CAN_PED_SEE_HATED_PED(iLocal_54[1], PLAYER::PLAYER_PED_ID()) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_54[0]) || PLAYER::CAN_PED_HEAR_PLAYER(PLAYER::PLAYER_ID(), iLocal_54[1]) || ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88 - { 0f, 0f, 7f }, 20f, 15f, 35f, false, true, 0))
				{
					if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), uLocal_88 - { 0f, 0f, 7f }, 28f, 18f, 35f, false, true, 0))
					{
						iLocal_51 = 1;
						return true;
					}
				}
			}
		}
	
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!PED::IS_PED_INJURED(iLocal_54[0]) && !PED::IS_PED_INJURED(iLocal_54[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYERS_LAST_VEHICLE(), false))
				{
					if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_54[0]) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::GET_PLAYERS_LAST_VEHICLE(), iLocal_54[1]))
					{
						iLocal_51 = 5;
						return true;
					}
				}
			}
		}
	
		if (!PED::IS_PED_INJURED(pedLocal_53))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedLocal_53, PLAYER::PLAYER_PED_ID(), false) || WEAPON::HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(pedLocal_53, joaat("WEAPON_STUNGUN"), 0))
			{
				iLocal_51 = 4;
				return true;
			}
		}
		else
		{
			iLocal_51 = 4;
			return true;
		}
	
		if (ENTITY::IS_ENTITY_DEAD(iLocal_54[0], false) || ENTITY::IS_ENTITY_DEAD(iLocal_54[1], false))
		{
			iLocal_51 = 6;
			return true;
		}
	
		if (bLocal_75)
			return true;
	}

	return false;
}

BOOL func_133(Ped pedParam0, var uParam1, var uParam2, int iParam3, BOOL bParam4, float fParam5, int iParam6) // Hash - 0xDC76849E ^0x25371CE0
{
	float lockonDistanceOfCurrentPedWeapon;
	float num;
	BOOL flag;
	Vector3 entityCoords;
	Vector3 entityCoords2;
	float num2;

	flag = false;

	if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !bParam4)
		if (PED::IS_PED_ON_FOOT(pedParam0))
			num = fParam5;
		else
			num = fParam5 + 3f;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !bParam4)
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
			entityCoords2 = { ENTITY::GET_ENTITY_COORDS(pedParam0, true) };
			num2 = SYSTEM::VDIST(entityCoords, entityCoords2);
		
			if (!IS_BIT_SET(iParam3, 3))
			{
				if (func_139(pedParam0, iParam6))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_138("	aggroReason = EAggro_Attacked\\n");
					*uParam1 = 3;
					func_137(pedParam0);
					return true;
				}
			}
		
			if (!IS_BIT_SET(iParam3, 1))
			{
				num < 20f;
			
				if (MISC::IS_BULLET_IN_AREA(entityCoords2, fParam5, true))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_138("	aggroReason = EAggro_ShotNear\\n");
					*uParam1 = 1;
					func_137(pedParam0);
					return true;
				}
			
				if (MISC::IS_PROJECTILE_IN_AREA(entityCoords2 - { fParam5 / 2f, fParam5 / 2f, fParam5 / 2f }, entityCoords2 + { fParam5 / 2f, fParam5 / 2f, fParam5 / 2f }, false))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_138("	aggroReason = EAggro_ShotNear\\n");
					*uParam1 = 1;
					func_137(pedParam0);
					return true;
				}
			}
		
			if (!IS_BIT_SET(iParam3, 2))
			{
				lockonDistanceOfCurrentPedWeapon = WEAPON::GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID());
			
				if (lockonDistanceOfCurrentPedWeapon < 0f)
					lockonDistanceOfCurrentPedWeapon = 25f;
				else if (lockonDistanceOfCurrentPedWeapon > 25f)
					lockonDistanceOfCurrentPedWeapon = 25f;
			
				if (WEAPON::IS_PED_ARMED(PLAYER::PLAYER_PED_ID(), 6))
				{
					if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0))
					{
						if (num2 < lockonDistanceOfCurrentPedWeapon)
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), 17))
							{
								func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
								func_138("	aggro Ped knows player is pointing gun\\n");
								func_134("		lockOnTimer = ", *uParam2);
								func_138("\\n");
								func_134("		time since not LockedOn = ", MISC::GET_GAME_TIMER() - iLocal_19);
								func_138("\\n");
								flag = true;
							
								if (MISC::GET_GAME_TIMER() > iLocal_19 + *uParam2)
								{
									func_138("			aggroReason = EAggro_HostileOrEnemy\\n");
									*uParam1 = 2;
									func_137(pedParam0);
									return true;
								}
							}
						}
						else
						{
							flag = false;
						}
					}
					else
					{
						flag = false;
					}
				}
			}
		
			if (!IS_BIT_SET(iParam3, 0))
			{
				if (PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					func_138("FUNC BOOL HAS_PLAYER_AGGROED_PED\\n");
					func_138("			aggroReason = EAggro_Danger\\n");
					*uParam1 = 0;
					func_137(pedParam0);
					return true;
				}
			}
		}
	}

	if (!flag)
		iLocal_19 = MISC::GET_GAME_TIMER();

	return false;
}

void func_134(char* sParam0, int iParam1) // Hash - 0x2E949C6A ^0x2E949C6A
{
	func_136(sParam0);
	func_135(iParam1);
	return;
}

void func_135(int iParam0) // Hash - 0xFB4BE991 ^0xFB4BE991
{
	iParam0 > 0;
	return;
}

void func_136(char* sParam0) // Hash - 0xF54A2398 ^0xC5887C42
{
	MISC::ARE_STRINGS_EQUAL(sParam0, sParam0);
	return;
}

void func_137(Ped pedParam0) // Hash - 0x690E6520 ^0x842C44DB
{
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(pedParam0);
	return;
}

void func_138(char* sParam0) // Hash - 0x646928F0 ^0x646928F0
{
	func_136(sParam0);
	return;
}

BOOL func_139(Ped pedParam0, int iParam1) // Hash - 0x3078729F ^0x659786F0
{
	if (PED::IS_PED_ON_FOOT(PLAYER::PLAYER_PED_ID()))
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
			return true;
	else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(pedParam0, PLAYER::PLAYER_PED_ID(), true))
		if (PED::GET_PED_MAX_HEALTH(pedParam0) - ENTITY::GET_ENTITY_HEALTH(pedParam0) > iParam1)
			return true;

	return false;
}

void func_140() // Hash - 0xE5402935 ^0xE5402935
{
	Vector3 vector;
	Vector3 vector2;

	func_142(39, true);
	func_142(40, true);
	func_142(41, true);
	func_142(42, true);
	func_142(43, true);
	func_142(44, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_139 - { 20f, 40f, 40f }, uLocal_139 + { 20f, 40f, 40f }, false, true, true, true);
	PED::ADD_SCENARIO_BLOCKING_AREA(uLocal_78 - { 20f, 50f, 60f }, uLocal_78 + { 20f, 50f, 50f }, false, true, true, true);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(hLocal_105, true);
	MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, false);
	MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, false);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
	pedLocal_53 = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_102, uLocal_78, fLocal_97, true, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, true);
	PED::SET_PED_CAN_BE_TARGETTED(pedLocal_53, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_53, 2, false);
	PED::SET_PED_FLEE_ATTRIBUTES(pedLocal_53, 128, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_CanUseVehicles, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(pedLocal_53, BF_0x66BB9FCC, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 206, true);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 318, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 118, false);
	PED::SET_PED_CONFIG_FLAG(pedLocal_53, 208, true);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_102);
	ENTITY::SET_ENTITY_HEALTH(pedLocal_53, iLocal_125, 0);
	PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(PLAYER::PLAYER_PED_ID(), false);
	PED::ADD_RELATIONSHIP_GROUP("rghKidnappers", &hLocal_176);
	PED::ADD_RELATIONSHIP_GROUP("rghVictim", &hLocal_177);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(pedLocal_53, hLocal_177);

	for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
	{
		iLocal_54[iLocal_64] = PED::CREATE_PED(PED_TYPE_MISSION, hLocal_103, uLocal_81[iLocal_64 /*3*/], uLocal_98[iLocal_64], true, true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_54[iLocal_64], true);
		PED::SET_PED_AS_ENEMY(iLocal_54[iLocal_64], true);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54[iLocal_64], BF_CanUseCover, true);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54[iLocal_64], 2, false);
		PED::SET_PED_FLEE_ATTRIBUTES(iLocal_54[iLocal_64], 128, true);
		PED::SET_PED_CONFIG_FLAG(iLocal_54[iLocal_64], 42, true);
		PED::SET_PED_COMBAT_MOVEMENT(iLocal_54[0], CM_WillAdvance);
		PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_54[0], BF_CanCharge, true);
		PED::SET_PED_SHOOT_RATE(iLocal_54[iLocal_64], 50);
		PED::SET_PED_ACCURACY(iLocal_54[iLocal_64], 13);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_54[iLocal_64], true, 1);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_54[iLocal_64], hLocal_176);
		PED::SET_PED_MONEY(iLocal_54[iLocal_64], MISC::GET_RANDOM_INT_IN_RANGE(800, 2000));
	}

	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_104);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_103);
	PED::SET_PED_SHOOT_RATE(iLocal_54[1], 100);
	PED::SET_PED_FIRING_PATTERN(iLocal_54[1], joaat("FIRING_PATTERN_BURST_FIRE"));
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(5, hLocal_176, joaat("PLAYER"));
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_54[0], joaat("WEAPON_PISTOL"), -1, false, true);
	WEAPON::GIVE_WEAPON_TO_PED(iLocal_54[1], joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
	veLocal_58 = VEHICLE::CREATE_VEHICLE(hLocal_105, uLocal_88, fLocal_101, true, true, false);
	VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_58, 1084227584);
	VEHICLE::SET_VEHICLE_LIGHTS(veLocal_58, 3);
	VEHICLE::SET_VEHICLE_DOOR_OPEN(veLocal_58, 5, false, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(hLocal_105);
	obLocal_60 = OBJECT::CREATE_OBJECT(joaat("PROP_LD_SHOVEL"), uLocal_107, true, true, false);
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("PROP_LD_SHOVEL"));
	uLocal_61[0] = OBJECT::CREATE_OBJECT(joaat("P_ARM_BIND_CUT_S"), uLocal_107, true, true, false);
	uLocal_61[1] = OBJECT::CREATE_OBJECT(joaat("P_ARM_BIND_CUT_S"), uLocal_107 + { 1f, 1f, 1f }, true, true, false);
	STREAMING::REQUEST_MODEL(joaat("P_ARM_BIND_CUT_S"));
	ENTITY::ATTACH_ENTITY_TO_ENTITY(obLocal_60, iLocal_54[0], PED::GET_PED_BONE_INDEX(iLocal_54[0], 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[0], PV_COMP_HEAD, 0, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[0], PV_COMP_UPPR, 0, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[0], PV_COMP_LOWR, 1, 0, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[1], PV_COMP_HEAD, 0, 2, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[1], PV_COMP_UPPR, 2, 1, 0);
	PED::SET_PED_COMPONENT_VARIATION(iLocal_54[1], PV_COMP_LOWR, 1, 1, 0);
	vector = { uLocal_78 };
	vector2 = { -2f, -4f, 18f };
	iLocal_343 = PED::CREATE_SYNCHRONIZED_SCENE(vector, vector2, 2);
	TASK::TASK_SYNCHRONIZED_SCENE(pedLocal_53, iLocal_343, "random@burial", "b_burial", 4f, -4f, 1, 0, 1148846080, 0);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[0], iLocal_343, "b_burial_legstie", "random@burial", 4f, -4f, 0, 1148846080);
	ENTITY::PLAY_SYNCHRONIZED_ENTITY_ANIM(uLocal_61[1], iLocal_343, "b_burial_wristtie", "random@burial", 4f, -4f, 0, 1148846080);
	PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_343, true);
	PED::SET_PED_KEEP_TASK(pedLocal_53, true);
	TASK::TASK_PLAY_ANIM(iLocal_54[0], "random@burial", "a_burial", 8f, -4f, -1, 1, 0, false, false, false);
	TASK::TASK_PLAY_ANIM(iLocal_54[1], "random@burial", "c_burial", 8f, -4f, -1, 1, 0, false, false, false);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_54[0], uLocal_91, uLocal_94, 2.75f, false, false);
	PED::SET_PED_ANGLED_DEFENSIVE_AREA(iLocal_54[1], uLocal_91, uLocal_94, 2.75f, false, false);

	if (func_45() == 0)
		func_141(&uLocal_178, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	else if (func_45() == 1)
		func_141(&uLocal_178, 1, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	else if (func_45() == 2)
		func_141(&uLocal_178, 2, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);

	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54[0], "A_M_M_HillBilly_02_WHITE_MINI_03");
	AUDIO::SET_AMBIENT_VOICE_NAME(iLocal_54[1], "A_M_M_HillBilly_02_WHITE_MINI_02");
	AUDIO::SET_AMBIENT_VOICE_NAME(pedLocal_53, "KIDNAPPEDFEMALE");
	func_141(&uLocal_178, 4, iLocal_54[0], "KIDNAPPER2", 0, 1);
	func_141(&uLocal_178, 3, iLocal_54[1], "KIDNAPPER1", 0, 1);
	func_141(&uLocal_178, 5, pedLocal_53, "KIDNAPPEDFEMALE", 0, 1);
	return;
}

void func_141(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Hash - 0x6C235EE0 ^0x9E57F206
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

void func_142(int iParam0, BOOL bParam1) // Hash - 0x64B1D886 ^0x64B1D886
{
	if (bParam1)
		if (!func_149(iParam0, 2, true))
			func_148(iParam0, 2, true);
	else if (func_149(iParam0, 2, true))
		func_143(iParam0, 2, true);

	return;
}

void func_143(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0xB2D02435
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
		if (func_20() == 0)
		{
			address = func_146(func_147(iParam0), -1, 0);
			MISC::CLEAR_BIT(&address, iParam1);
			func_144(func_147(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

void func_144(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Hash - 0x7D768555 ^0x693A841
{
	Hash statName;

	bParam4;
	statName = Global_2805027[iParam0 /*3*/][func_145(iParam2)];

	if (statName != 0)
		STATS::STAT_SET_INT(statName, iParam1, bParam3);

	return;
}

int func_145(int iParam0) // Hash - 0x1A3F3220 ^0x1A3F3220
{
	int num;
	int num2;

	num = iParam0;

	if (num == -1)
	{
		num2 = func_23();
	
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

int func_146(int iParam0, int iParam1, int iParam2) // Hash - 0x4BC84F7B ^0x370D7D6F
{
	Hash statHash;
	int outValue;

	if (iParam0 != 14192)
	{
		iParam2 == 0;
		statHash = Global_2805027[iParam0 /*3*/][func_145(iParam1)];
	
		if (STATS::STAT_GET_INT(statHash, &outValue, -1))
			return outValue;
	}

	return 0;
}

int func_147(int iParam0) // Hash - 0x28E83966 ^0x9E37924F
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

void func_148(int iParam0, int iParam1, BOOL bParam2) // Hash - 0x1F4148DA ^0x95628DB
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
		if (func_20() == 0)
		{
			address = func_146(func_147(iParam0), -1, 0);
			MISC::SET_BIT(&address, iParam1);
			func_144(func_147(iParam0), address, -1, true, false);
		}
	}
	else
	{
		MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
	}

	return;
}

BOOL func_149(int iParam0, int iParam1, BOOL bParam2) // Hash - 0xA45BEB30 ^0x6033D2A2
{
	if (iParam0 == -1)
		return false;

	if (bParam2)
		return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
	else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		if (func_20() == 0)
			return IS_BIT_SET(func_146(func_147(iParam0), -1, 0), iParam1);
	else
		return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);

	return false;
}

void func_150() // Hash - 0xD3ADA56D ^0x10639AB8
{
	Vehicle vehiclePedIsEntering;
	Ped pedInVehicleSeat;

	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		vehiclePedIsEntering = PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID());
	
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsEntering, false))
		{
			pedInVehicleSeat = VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsEntering, 0, false);
		
			if (!PED::IS_PED_INJURED(pedInVehicleSeat))
				if (pedInVehicleSeat != PLAYER::PLAYER_PED_ID())
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(pedInVehicleSeat))
						if (!PED::IS_PED_HEADTRACKING_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID()))
							TASK::TASK_LOOK_AT_ENTITY(pedInVehicleSeat, PLAYER::PLAYER_PED_ID(), 2000, SLF_WHILE_NOT_IN_FOV, 2);
		}
	}

	return;
}

void func_151() // Hash - 0x30B9C14B ^0x26478D07
{
	STREAMING::REQUEST_MODEL(hLocal_102);
	STREAMING::REQUEST_MODEL(hLocal_104);
	STREAMING::REQUEST_MODEL(hLocal_103);
	STREAMING::REQUEST_MODEL(hLocal_105);
	STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOVEL"));
	STREAMING::REQUEST_MODEL(joaat("P_ARM_BIND_CUT_S"));
	STREAMING::REQUEST_ANIM_DICT("random@burial");
	STREAMING::REQUEST_PTFX_ASSET();
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
	AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");

	if (STREAMING::HAS_MODEL_LOADED(hLocal_102) && STREAMING::HAS_MODEL_LOADED(hLocal_104) && STREAMING::HAS_MODEL_LOADED(hLocal_103) && STREAMING::HAS_MODEL_LOADED(hLocal_105) && STREAMING::HAS_MODEL_LOADED(joaat("PROP_LD_SHOVEL")) && STREAMING::HAS_MODEL_LOADED(joaat("P_ARM_BIND_CUT_S")) && STREAMING::HAS_ANIM_DICT_LOADED("random@burial") && STREAMING::HAS_PTFX_ASSET_LOADED() && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1) && AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS"))
	{
		bLocal_52 = true;
	}
	else
	{
		STREAMING::REQUEST_MODEL(hLocal_102);
		STREAMING::REQUEST_MODEL(hLocal_104);
		STREAMING::REQUEST_MODEL(hLocal_103);
		STREAMING::REQUEST_MODEL(hLocal_105);
		STREAMING::REQUEST_MODEL(joaat("PROP_LD_SHOVEL"));
		STREAMING::REQUEST_MODEL(joaat("P_ARM_BIND_CUT_S"));
		STREAMING::REQUEST_ANIM_DICT("random@burial");
		STREAMING::REQUEST_PTFX_ASSET();
		AUDIO::REQUEST_SCRIPT_AUDIO_BANK("ROPE_CUT", false, -1);
		AUDIO::PREPARE_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	}

	return;
}

void func_152() // Hash - 0xBC7F2B15 ^0x4F857F6F
{
	hLocal_102 = joaat("U_F_Y_MISTRESS");
	hLocal_103 = joaat("A_M_M_SALTON_01");
	hLocal_104 = joaat("A_M_M_SALTON_01");
	hLocal_105 = joaat("BISON");
	uLocal_78 = { 163.4486f, 6839.993f, 18.86f };
	fLocal_97 = 0f;
	uLocal_81[0 /*3*/] = { 162.8193f, 6837.257f, 18.9614f };
	uLocal_98[0] = 297.0056f;
	uLocal_81[1 /*3*/] = { 162.5046f, 6841.6797f, 18.8426f };
	uLocal_98[1] = 193.3866f;
	uLocal_88 = { 169.3462f, 6837.8047f, 19.1421f };
	fLocal_101 = 265.6862f;
	uLocal_91 = { 164.08965f, 6836.923f, 19.03899f };
	uLocal_94 = { 168.9638f, 6834.3022f, 24.99057f };
	bLocal_66 = true;
	return;
}

BOOL func_153() // Hash - 0xC05B0E62 ^0x94C54EFE
{
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), uLocal_44) < 75f * 75f)
			return true;
	
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
			return false;
	}

	if (func_160())
		return true;

	if (func_154(100f, true) != -1)
		return true;

	return false;
}

int func_154(float fParam0, BOOL bParam1) // Hash - 0xA169FFDC ^0x284941E0
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
		if (func_33(func_45()))
		{
			num4 = func_30();
			i = 0;
		
			for (i = 0; i < 63; i = i + 1)
			{
				num = i;
			
				if (IS_BIT_SET(Global_113648.f_18576[num /*6*/], 2) && !IS_BIT_SET(Global_113648.f_18576[num /*6*/], 3))
				{
					func_155(num, &unk);
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

void func_155(int iParam0, var uParam1) // Hash - 0xCF1528B4 ^0x71CA8068
{
	switch (iParam0)
	{
		case 0:
			func_156(uParam1, "Abigail1", func_158(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0, "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 1:
			func_156(uParam1, "Abigail2", func_158(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 2:
			func_156(uParam1, "Barry1", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 3:
			func_156(uParam1, "Barry2", func_158(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 4:
			func_156(uParam1, "Barry3", func_158(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 5:
			func_156(uParam1, "Barry3A", func_158(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, _("Areas where you can find vehicles with a hidden stash have been marked on the map. Collect these vehicles for Barry."), 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 6:
			func_156(uParam1, "Barry3C", func_158(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0, 7, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 7:
			func_156(uParam1, "Barry4", func_158(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0, "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_157(iParam0), 0, 0);
			break;
	
		case 8:
			func_156(uParam1, "Dreyfuss1", func_158(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, _("The killer's identity and location have been revealed."), 106, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 9:
			func_156(uParam1, "Epsilon1", func_158(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1, 10, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 10:
			func_156(uParam1, "Epsilon2", func_158(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0, 11, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 11:
			func_156(uParam1, "Epsilon3", func_158(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars", 0, 0, 12, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 12:
			func_156(uParam1, "Epsilon4", func_158(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16, "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 13:
			func_156(uParam1, "Epsilon5", func_158(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16, "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 14:
			func_156(uParam1, "Epsilon6", func_158(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0, 15, 4, 1, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 15:
			func_156(uParam1, "Epsilon7", func_158(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16, "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 16:
			func_156(uParam1, "Epsilon8", func_158(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16, "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 17:
			func_156(uParam1, "Extreme1", func_158(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1, 18, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 18:
			func_156(uParam1, "Extreme2", func_158(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171, 0, 19, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 19:
			func_156(uParam1, "Extreme3", func_158(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 20:
			func_156(uParam1, "Extreme4", func_158(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 21:
			func_156(uParam1, "Fanatic1", func_158(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0, 1, -1, 4, 1, 700, 2000, func_157(iParam0), 1, 0);
			break;
	
		case 22:
			func_156(uParam1, "Fanatic2", func_158(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1, -1, 4, 4, 700, 2000, func_157(iParam0), 1, 0);
			break;
	
		case 23:
			func_156(uParam1, "Fanatic3", func_158(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1, 4, 2, 700, 2000, func_157(iParam0), 0, 1);
			break;
	
		case 24:
			func_156(uParam1, "Hao1", func_158(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0, "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_157(iParam0), 0, 1);
			break;
	
		case 25:
			func_156(uParam1, "Hunting1", func_158(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1, 26, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 26:
			func_156(uParam1, "Hunting2", func_158(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 27:
			func_156(uParam1, "Josh1", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns", 0, 1, 28, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 28:
			func_156(uParam1, "Josh2", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0, 29, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 29:
			func_156(uParam1, "Josh3", func_158(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0, 30, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 30:
			func_156(uParam1, "Josh4", func_158(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 31:
			func_156(uParam1, "Maude1", func_158(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0, "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 32:
			func_156(uParam1, "Minute1", func_158(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 33:
			func_156(uParam1, "Minute2", func_158(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 34:
			func_156(uParam1, "Minute3", func_158(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 35:
			func_156(uParam1, "MrsPhilips1", func_158(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0, "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 36:
			func_156(uParam1, "MrsPhilips2", func_158(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 37:
			func_156(uParam1, "Nigel1", func_158(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1, -1, 1, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 38:
			func_156(uParam1, "Nigel1A", func_158(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, _("Areas where you can find celebrity items have been marked on the map. Steal these items for Nigel and Mrs. Thornhill."), 100, 0, "", 0, 0, 42, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 39:
			func_156(uParam1, "Nigel1B", func_158(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
	
		case 40:
			func_156(uParam1, "Nigel1C", func_158(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
	
		case 41:
			func_156(uParam1, "Nigel1D", func_158(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0, 42, 4, 4, 700, 2000, func_157(iParam0), 1, 1);
			break;
	
		case 42:
			func_156(uParam1, "Nigel2", func_158(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0, 43, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 43:
			func_156(uParam1, "Nigel3", func_158(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16, "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 1);
			break;
	
		case 44:
			func_156(uParam1, "Omega1", func_158(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0, "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 45:
			func_156(uParam1, "Omega2", func_158(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 46:
			func_156(uParam1, "Paparazzo1", func_158(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1, 47, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 47:
			func_156(uParam1, "Paparazzo2", func_158(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0, 0, 48, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 48:
			func_156(uParam1, "Paparazzo3", func_158(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183, 1, -1, 2, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 49:
			func_156(uParam1, "Paparazzo3A", func_158(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, _("Areas where you can find celebrity photo opportunities have been marked on the map. Track down and photograph these celebrities for Beverly."), 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 50:
			func_156(uParam1, "Paparazzo3B", func_158(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "", 0, 0, 51, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 51:
			func_156(uParam1, "Paparazzo4", func_158(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 52:
			func_156(uParam1, "Rampage1", func_158(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 54:
			func_156(uParam1, "Rampage3", func_158(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 55:
			func_156(uParam1, "Rampage4", func_158(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 56:
			func_156(uParam1, "Rampage5", func_158(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0, 53, 4, 4, 0, 2359, func_157(iParam0), 0, 0);
			break;
	
		case 53:
			func_156(uParam1, "Rampage2", func_158(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0, "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_157(iParam0), 1, 0);
			break;
	
		case 57:
			func_156(uParam1, "TheLastOne", func_158(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "", 0, 1, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 58:
			func_156(uParam1, "Tonya1", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, _("Strangers and Freaks can be found throughout San Andreas at ~HUD_COLOUR_FRANKLIN~~BLIP_RANDOM_CHARACTER~~s~"), -1, 0, "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 59:
			func_156(uParam1, "Tonya2", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 60:
			func_156(uParam1, "Tonya3", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 61:
			func_156(uParam1, "Tonya4", func_158(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		case 62:
			func_156(uParam1, "Tonya5", func_158(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0, -1, 4, 2, 0, 2359, func_157(iParam0), 0, 1);
			break;
	
		default:
			break;
	}

	return;
}

void func_156(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, float fParam9, int iParam10, char* sParam11, int iParam12, int iParam13, char* sParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23, int iParam24) // Hash - 0x340E6E87 ^0xA591C803
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

int func_157(int iParam0) // Hash - 0xC999F6B2 ^0xC999F6B2
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

struct<2> func_158(int iParam0) // Hash - 0x49BA4072 ^0x7AA055B6
{
	var unk;
	var unk3;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 8);
	unk3 = { func_159(iParam0) };

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

struct<2> func_159(int iParam0) // Hash - 0x37A0347F ^0xFFF7589E
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

BOOL func_160() // Hash - 0x7055FFB1 ^0x7055FFB1
{
	if (func_163() && !func_164())
		return true;

	if (func_162() && func_161())
		return true;

	return false;
}

BOOL func_161() // Hash - 0x79CF7679 ^0x79CF7679
{
	return Global_113366 > 0;
}

BOOL func_162() // Hash - 0xCF2296C0 ^0xCF2296C0
{
	if (Global_97603 != -1)
		return true;

	return false;
}

BOOL func_163() // Hash - 0x98CCC132 ^0x97B0D6ED
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);

	return false;
}

BOOL func_164() // Hash - 0x29CB2928 ^0xE369A18D
{
	if (MISC::IS_PC_VERSION())
		if (MISC::GET_CITY_DENSITY() == 1f)
			return true;

	return false;
}

BOOL func_165() // Hash - 0xF2B7F534 ^0x7F3EC4F9
{
	if (!func_125(5))
		return true;

	if (func_160())
		return true;

	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
			return false;

	if (func_154(100f, true) != -1)
		return true;

	return false;
}

BOOL func_166() // Hash - 0x1121F6F2 ^0x90CE37A6
{
	if (Global_113637 == func_40() && MISC::GET_RANDOM_EVENT_FLAG() && Global_113638)
		return true;

	return false;
}

void func_167(int iParam0) // Hash - 0xA62BD46A ^0x1E050688
{
	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	func_169(iParam0);
	MISC::SET_SCRIPT_HIGH_PRIO(false);
	MISC::SET_RANDOM_EVENT_FLAG(true);
	Global_113634 = 0;
	func_168();
	return;
}

void func_168() // Hash - 0x178BF2A7 ^0x744062F5
{
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)), true);
	
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
	}

	return;
}

void func_169(int iParam0) // Hash - 0xE49C42EC ^0xE49C42EC
{
	Global_113637 = iParam0;
	return;
}

BOOL func_170(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, BOOL bParam5, BOOL bParam6) // Hash - 0xC601B4EA ^0xC601B4EA
{
	BOOL flag;
	Vector3 entityCoords;
	int i;
	Vector3 vector;
	int num;

	if (!Global_152234)
		return false;

	if (iParam3 == -1)
		iParam3 = func_40();

	if (iParam3 == -1)
		return false;

	if (iParam3 == 31 || iParam3 == 32)
		if (!func_211())
			return false;

	uLocal_44 = { uParam0 };
	flag = false;

	if (!flag)
	{
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			entityCoords = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		
			if (SYSTEM::VMAG2(ENTITY::GET_ENTITY_VELOCITY(PLAYER::PLAYER_PED_ID())) > 1369f && !func_164())
				return false;
		}
	
		if (!Global_113648.f_9087)
			return false;
	
		if (func_16(false))
			return false;
	
		if (func_160())
			return false;
	
		if (func_210())
			return false;
	
		if (Global_113637 != -1)
			return false;
	
		if (func_33(func_45()))
			if (func_154(100f, true) != -1)
				return false;
	
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) && !bParam6)
			if (entityCoords.f_2 - uLocal_44.f_2 > 50f)
				return false;
	
		if (!func_209(iParam3))
			return false;
	
		if (func_33(func_45()))
			if (func_208(func_45()) == 4 || func_208(func_45()) == 5)
				return false;
	
		if (func_33(func_45()))
			if (!func_207(iParam3, iParam4, 145))
				return false;
	
		if (!func_206(Global_113648.f_24997.f_43[iParam3]))
			return false;
	
		if (MISC::GET_GAME_TIMER() - Global_113639 < 150000)
			if (iParam3 != 30)
				return false;
	
		if (func_205())
			return false;
	
		if (MISC::GET_MISSION_FLAG())
			return false;
	
		if (MISC::GET_RANDOM_EVENT_FLAG())
			return false;
	
		if (!func_196(4))
			return false;
	
		if (!func_125(5))
			return false;
	
		if (func_195(iParam3, iParam4) && !bParam5)
			return false;
	
		if (Global_3 && iParam3 != 10)
			return false;
	
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID())))
			if (INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(377.153f, -717.567f, 10.0536f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(320.9934f, 265.2515f, 82.1221f) || INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID()) == INTERIOR::GET_INTERIOR_AT_COORDS(-1425.5645f, -244.3f, 15.8053f))
				return false;
	
		if (iParam3 == 9 && iParam4 == 2 || iParam4 == 5 && !func_195(0, 0))
			return false;
	
		if (Global_32310)
			return false;
	
		if (func_209(30) && !func_195(30, 0))
			if (iParam3 != 30)
				if (SYSTEM::VDIST2(entityCoords, -61.2745f, -1100.4675f, 25.3752f) < 176400f)
					return false;
	
		if (func_33(func_45()))
		{
			for (i = 0; i < 3; i = i + 1)
			{
				vector = { Global_113648.f_2365.f_539.f_2300[i /*3*/] };
				num = Global_113648.f_2365.f_539.f_2296[i];
			
				if (func_194(num))
					if (func_172(i))
						if (!func_171(vector, 0f, 0f, 0f, false))
							if (SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector) < 210f * 210f)
								if (func_45() != i)
									return false;
			}
		}
	}

	return true;
}

BOOL func_171(float fParam0, var uParam1, var uParam2, float fParam3, float fParam4, float fParam5, BOOL bParam6) // Hash - 0x2D46096D ^0xEA41378F
{
	if (bParam6)
		return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1;

	return fParam0 == fParam3 && fParam0.f_1 == fParam3.f_1 && fParam0.f_2 == fParam3.f_2;
}

BOOL func_172(int iParam0) // Hash - 0x687D9246 ^0x687D9246
{
	int num;

	num = Global_113648.f_2365.f_539.f_2296[iParam0];
	return func_173(num);
}

BOOL func_173(int iParam0) // Hash - 0x2D75E13A ^0x2D75E13A
{
	return func_174(iParam0, 1);
}

int func_174(int iParam0, int iParam1) // Hash - 0x1F92FEBC ^0x1F92FEBC
{
	var unk;
	var unk2;
	int num;
	int num2;
	int num3;
	int num4;

	if (!func_194(iParam0))
		return 0;

	func_175(iParam0, &unk, &unk2, &num, &num2, &num3, &num4);

	if (num4 > 0 || num3 > 0 || num2 > 0 || num >= iParam1)
		return 1;

	return 0;
}

void func_175(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6) // Hash - 0x2BEE335D ^0x2BEE335D
{
	func_176(func_187(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
	return;
}

void func_176(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7) // Hash - 0xB807819C ^0xB807819C
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int num8;

	if (func_186(iParam0, iParam1))
	{
		num = func_185(iParam1);
		num2 = func_183(iParam0);
		num3 = func_183(iParam0) - func_183(iParam1);
		num4 = func_185(iParam0) - func_185(iParam1);
		num5 = func_182(iParam0) - func_182(iParam1);
		num6 = func_181(iParam0) - func_181(iParam1);
		num7 = func_180(iParam0) - func_180(iParam1);
		num8 = func_179(iParam0) - func_179(iParam1);
	}
	else
	{
		num = func_185(iParam0);
		num2 = func_183(iParam1);
		num3 = func_183(iParam1) - func_183(iParam0);
		num4 = func_185(iParam1) - func_185(iParam0);
		num5 = func_182(iParam1) - func_182(iParam0);
		num6 = func_181(iParam1) - func_181(iParam0);
		num7 = func_180(iParam1) - func_180(iParam0);
		num8 = func_179(iParam1) - func_179(iParam0);
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
	
		num5 = num5 + func_178(num, num2);
		num4 = num4 - 1;
		num = SYSTEM::ROUND(func_177(SYSTEM::TO_FLOAT(num + 1), 0f, 12f));
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

float func_177(float fParam0, float fParam1, float fParam2) // Hash - 0xDB08F514 ^0x78C0BF6F
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

int func_178(int iParam0, int iParam1) // Hash - 0xD3EBACB3 ^0xD3EBACB3
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

int func_179(int iParam0) // Hash - 0x90B520AB ^0x257AC1C4
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 20) & 63;
}

int func_180(int iParam0) // Hash - 0xC188C91C ^0x48884C7
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 14) & 63;
}

int func_181(int iParam0) // Hash - 0x626AEC54 ^0xDB28E416
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_182(int iParam0) // Hash - 0x826C592F ^0xDEC5AA46
{
	return SYSTEM::SHIFT_RIGHT(iParam0, 4) & 31;
}

int func_183(int iParam0) // Hash - 0xE1B0542C ^0x127A471E
{
	return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 : 1) + 2011;
}

var func_184(BOOL bParam0, var uParam1, var uParam2) // Hash - 0x3EE55A88 ^0x3EE55A88
{
	if (bParam0)
		return uParam1;

	return uParam2;
}

int func_185(int iParam0) // Hash - 0x2D4DB85F ^0x2D4DB85F
{
	return iParam0 & 15;
}

BOOL func_186(int iParam0, int iParam1) // Hash - 0xEA08B1 ^0xEA08B1
{
	int num;
	int num2;

	if (!func_194(iParam1) || !func_194(iParam0))
		return 1;

	num = func_183(iParam0);
	num2 = func_183(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_185(iParam0);
	num2 = func_185(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_182(iParam0);
	num2 = func_182(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_181(iParam0);
	num2 = func_181(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_180(iParam0);
	num2 = func_180(iParam1);

	if (num > num2)
		return 1;
	else if (num < num2)
		return 0;

	num = func_179(iParam0);
	num2 = func_179(iParam1);

	if (num > num2)
		return 1;

	return 0;
}

int func_187() // Hash - 0x9E44C35 ^0xB9993D58
{
	var unk;

	func_193(&unk, CLOCK::GET_CLOCK_SECONDS());
	func_192(&unk, CLOCK::GET_CLOCK_MINUTES());
	func_191(&unk, CLOCK::GET_CLOCK_HOURS());
	func_190(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
	func_189(&unk, CLOCK::GET_CLOCK_MONTH());
	func_188(&unk, CLOCK::GET_CLOCK_YEAR());
	return unk;
}

void func_188(var uParam0, int iParam1) // Hash - 0x15B9927E ^0x4A4674
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

void func_189(var uParam0, int iParam1) // Hash - 0x4C70B2C3 ^0x4C70B2C3
{
	if (iParam1 < 0 || iParam1 > 11)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15;
	*uParam0 = *uParam0 || iParam1;
	return;
}

void func_190(var uParam0, int iParam1) // Hash - 0x2220FC6 ^0x2220FC6
{
	int num;
	int num2;

	num = func_185(*uParam0);
	num2 = func_183(*uParam0);

	if (iParam1 < 1 || iParam1 > func_178(num, num2))
		return;

	*uParam0 = *uParam0 - *uParam0 & 496;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
	return;
}

void func_191(var uParam0, int iParam1) // Hash - 0x864304A8 ^0x1F5003E2
{
	if (iParam1 < 0 || iParam1 > 24)
		return;

	*uParam0 = *uParam0 - *uParam0 & 15872;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
	return;
}

void func_192(var uParam0, int iParam1) // Hash - 0x76860AE7 ^0x32308FFF
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 1032192;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
	return;
}

void func_193(var uParam0, int iParam1) // Hash - 0xDB8A72C0 ^0x4F6D426D
{
	if (iParam1 < 0 || iParam1 >= 60)
		return;

	*uParam0 = *uParam0 - *uParam0 & 66060288;
	*uParam0 = *uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
	return;
}

BOOL func_194(int iParam0) // Hash - 0x57D8E518 ^0xD297DD35
{
	int num;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;

	if (iParam0 == -15)
		return false;

	num = func_179(iParam0);

	if (num < 0 || num >= 60)
		return false;

	num2 = func_180(iParam0);

	if (num2 < 0 || num2 >= 60)
		return false;

	num3 = func_181(iParam0);

	if (num3 < 0 || num3 > 23)
		return false;

	num4 = func_183(iParam0);

	if (num4 <= 0 || num4 > 2043 || num4 < 1979)
		return false;

	num5 = func_185(iParam0);

	if (num5 < 0 || num5 > 11)
		return false;

	num6 = func_182(iParam0);

	if (num6 < 1 || num6 > func_178(num5, num4))
		return false;

	return true;
}

BOOL func_195(int iParam0, int iParam1) // Hash - 0x577FB514 ^0xAAF8B538
{
	if (IS_BIT_SET(Global_113648.f_24997.f_8[iParam0], iParam1))
		return true;

	return false;
}

BOOL func_196(int iParam0) // Hash - 0x97844555 ^0xADCD6DAA
{
	int num;

	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				num = func_45();
			
				if (!func_33(num))
					return false;
			
				switch (iParam0)
				{
					case 9:
					case 0:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_204() || Global_112695 || Global_32166 || func_203() || func_84(8, -1) || func_202() || func_201() || func_200() || func_199() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 1:
						if (PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_204() || Global_32166 || func_203() || func_84(8, -1) || func_200() || func_202() || func_201() || func_199() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 2:
						if (!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_204() || Global_112695 || Global_32166 || func_203() || func_84(8, -1) || func_200() || func_202() || func_201() || func_199() || Global_113648.f_7690.f_919[num] == 5 || Global_43804 != -1)
							return false;
						break;
				
					case 3:
						if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_204() || Global_112695 || Global_32166 || func_203() || func_84(8, -1) || func_202() || func_201() || func_199() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 4:
						if (func_204() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_84(8, -1) || func_199() || func_198() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 5:
						if (func_84(8, -1) || func_202() || func_201() || func_198() || func_197())
							return false;
					
						if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8)
							return false;
						break;
				
					case 6:
						if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
							if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_204() || Global_32166 || func_203() || func_84(8, -1) || func_201() || func_200() || func_199() || Global_113648.f_7690.f_919[num] == 5)
								return false;
						break;
				
					case 7:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_204() || func_201() || Global_112695 || Global_32166 || func_203() || Global_44446 || func_84(8, -1) || func_200() || func_198() || func_199() || Global_113648.f_7690.f_919[num] == 5)
							return false;
						break;
				
					case 8:
						if (PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_204() || Global_112695 || Global_32166 || func_203() || func_84(8, -1) || func_200() || func_198() || func_202() || func_201() || func_199())
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

BOOL func_197() // Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

BOOL func_198() // Hash - 0xC20DBA70 ^0xAC4006FB
{
	if (Global_97603 != -1)
		return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);

	return false;
}

BOOL func_199() // Hash - 0x3CA1BB47 ^0xB78A1ACB
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("PLAYER_TIMETABLE_SCENE")) > 0)
		return true;

	return false;
}

BOOL func_200() // Hash - 0xE663B8F6 ^0xE663B8F6
{
	if (Global_78819)
		return true;
	else if (Global_63356 && !Global_63362)
		return true;

	return false;
}

BOOL func_201() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_388 > 0;
}

BOOL func_202() // Hash - 0xD56328D2 ^0xD56328D2
{
	return Global_100733.f_387 > 0;
}

BOOL func_203() // Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1575060;
}

BOOL func_204() // Hash - 0x7FE517FE ^0x128A3BC8
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		return Global_98159.f_44 == 1;

	return false;
}

BOOL func_205() // Hash - 0xB12DEAA2 ^0xB12DEAA2
{
	func_82();

	if (Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259 == 2)
		return true;

	return false;
}

BOOL func_206(int iParam0) // Hash - 0xCDB90269 ^0xCDB90269
{
	return func_186(func_187(), iParam0);
}

BOOL func_207(int iParam0, int iParam1, int iParam2) // Hash - 0xBEEFD79C ^0xBEEFD79C
{
	BOOL num;
	int num2;

	num = 0;
	num2 = func_45();

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

int func_208(int iParam0) // Hash - 0x45FC9D61 ^0x45FC9D61
{
	if (!func_33(iParam0))
		return 7;

	return Global_113648.f_7690.f_919[iParam0];
}

BOOL func_209(int iParam0) // Hash - 0xF2A54181 ^0xF2A54181
{
	int num;
	BOOL flag;

	if (iParam0 == 31 || iParam0 == 32)
		if (!func_211())
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

BOOL func_210() // Hash - 0xB72C022E ^0x452A7B6D
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

BOOL func_211() // Hash - 0x44DD83CC ^0x7B62A376
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

void func_212() // Hash - 0xBD0B2D4E ^0x3128D37F
{
	int i;

	if (bLocal_162)
	{
		func_225(false);
		PED::REMOVE_SCENARIO_BLOCKING_AREAS();
		AUDIO::CANCEL_MUSIC_EVENT("RE6_BOTH_DEAD_OS");
	
		if (bLocal_145 || bLocal_165)
			if (Global_32406)
				AUDIO::TRIGGER_MUSIC_EVENT("AC_STOP");
			else
				AUDIO::TRIGGER_MUSIC_EVENT("RE6_END");
	
		func_224();
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, hLocal_177, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(255, joaat("PLAYER"), hLocal_177);
	
		if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
		{
			if (!PED::IS_PED_INJURED(pedLocal_53))
			{
				PED::SET_PED_CONFIG_FLAG(pedLocal_53, 317, true);
			
				if (!PED::IS_PED_IN_ANY_VEHICLE(pedLocal_53, false))
					PED::RESET_PED_LAST_VEHICLE(pedLocal_53);
			
				if (PED::IS_PED_IN_GROUP(pedLocal_53))
					PED::REMOVE_PED_FROM_GROUP(pedLocal_53);
			
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(pedLocal_53, false);
				PED::SET_PED_CAN_BE_TARGETTED(pedLocal_53, true);
			}
			else if (!ENTITY::IS_ENTITY_DEAD(pedLocal_53, false))
			{
				PED::SET_ENABLE_HANDCUFFS(pedLocal_53, true);
				PED::SET_ENABLE_BOUND_ANKLES(pedLocal_53, true);
			}
		}
	
		for (i = 0; i < iLocal_54; i = i + 1)
		{
			if (!PED::IS_PED_INJURED(iLocal_54[i]) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iLocal_54[i]);
			
				if (bLocal_69 || bLocal_76)
				{
					TASK::TASK_COMBAT_PED(iLocal_54[i], PLAYER::PLAYER_PED_ID(), 0, 16);
				}
				else
				{
					TASK::TASK_SMART_FLEE_PED(iLocal_54[i], PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
					func_110();
				}
			
				PED::SET_PED_KEEP_TASK(iLocal_54[i], true);
			}
		}
	
		OBJECT::DELETE_OBJECT(&uLocal_61[0]);
		OBJECT::DELETE_OBJECT(&uLocal_61[1]);
	
		if (ENTITY::DOES_ENTITY_EXIST(veLocal_58))
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_58);
	
		if (ENTITY::DOES_ENTITY_EXIST(obLocal_60))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(obLocal_60))
				ENTITY::DETACH_ENTITY(obLocal_60, true, true);
		
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&obLocal_60);
		}
	
		if (HUD::DOES_BLIP_EXIST(blLocal_163))
			HUD::REMOVE_BLIP(&blLocal_163);
	
		for (iLocal_64 = 0; iLocal_64 <= 1; iLocal_64 = iLocal_64 + 1)
		{
			if (HUD::DOES_BLIP_EXIST(uLocal_111[iLocal_64]))
				HUD::REMOVE_BLIP(&uLocal_111[iLocal_64]);
		}
	
		if (HUD::DOES_BLIP_EXIST(blLocal_114))
			HUD::REMOVE_BLIP(&blLocal_114);
	
		if (CAM::DOES_CAM_EXIST(caLocal_77))
			CAM::DESTROY_CAM(caLocal_77, false);
	
		MISC::ENABLE_DISPATCH_SERVICE(DT_AmbulanceDepartment, true);
		MISC::ENABLE_DISPATCH_SERVICE(DT_FireDepartment, true);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-133.841f, -38.5734f, -100f, -126.2403f, -29.194f, 100f, true, true);
	}

	func_213(-1);
	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_213(int iParam0) // Hash - 0xE6B11918 ^0x37AF2AD2
{
	var name;

	if (iParam0 == -1)
		iParam0 = func_40();

	if (iParam0 == -1)
		return;

	if (func_166())
	{
		func_217(iParam0);
		HUD::SET_MISSION_NAME(false, 0);
		Global_113639 = MISC::GET_GAME_TIMER();
		func_216(30000);
		TEXT_LABEL_ASSIGN_STRING(&name, func_215(Global_113637, true), 64);
	
		if (func_39(Global_113637) > 0)
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

	func_214(&Global_32223);
	Global_113638 = false;
	func_169(-1);
	return;
}

void func_214(var uParam0) // Hash - 0x995C9E2 ^0x995C9E2
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

char* func_215(int iParam0, BOOL bParam1) // Hash - 0x959319CB ^0x726644F
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

void func_216(int iParam0) // Hash - 0xC0234809 ^0x4FD853DC
{
	Global_43808 = MISC::GET_GAME_TIMER() + iParam0;
	return;
}

void func_217(int iParam0) // Hash - 0x881273A8 ^0x881273A8
{
	func_218(iParam0, 0, func_223(iParam0));
	return;
}

void func_218(int iParam0, int iParam1, int iParam2) // Hash - 0xA7DBC311 ^0xA7DBC311
{
	int unk;
	var unk2;

	unk = func_187();
	func_221(&unk, 0, 0, iParam2, iParam1, 0, 0);
	func_220(iParam0, &unk);
	unk2 = { func_219(&unk) };
	return;
}

struct<16> func_219(var uParam0) // Hash - 0xB55EE866 ^0x8B66D3F5
{
	var unk;
	int num;

	TEXT_LABEL_ASSIGN_STRING(&unk, "", 64);
	num = func_181(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_180(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, ":", 64);
	num = func_179(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "  ", 64);
	num = func_182(*uParam0);

	if (num < 10)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	num = func_185(*uParam0);

	if (num < 9)
		TEXT_LABEL_APPEND_INT(&unk, 0, 64);

	TEXT_LABEL_APPEND_INT(&unk, num + 1, 64);
	TEXT_LABEL_APPEND_STRING(&unk, "/", 64);
	TEXT_LABEL_APPEND_INT(&unk, func_183(*uParam0), 64);
	return unk;
}

void func_220(int iParam0, var uParam1) // Hash - 0x63EF72B0 ^0xC612AA53
{
	Global_113648.f_24997.f_43[iParam0] = *uParam1;
	return;
}

void func_221(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0xB28A4507 ^0xB28A4507
{
	int num;
	int i;
	int num2;
	int j;
	int k;
	int l;
	int m;

	num = func_183(*uParam0);
	i = func_185(*uParam0);
	num2 = func_182(*uParam0);
	j = func_181(*uParam0);
	k = func_180(*uParam0);
	l = func_179(*uParam0);

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

	for (m = func_178(i, num); num2 > m; m = func_178(i, num))
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
	func_222(uParam0, l, k, j, num2, i, num);
	return;
}

void func_222(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Hash - 0x733BFBA2 ^0x733BFBA2
{
	func_193(uParam0, iParam1);
	func_192(uParam0, iParam2);
	func_191(uParam0, iParam3);
	func_189(uParam0, iParam5);
	func_190(uParam0, iParam4);
	func_188(uParam0, iParam6);
	return;
}

int func_223(int iParam0) // Hash - 0x4219564C ^0x4219564C
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

void func_224() // Hash - 0x17878A26 ^0x17878A26
{
	Global_32402 = 0;
	Global_32403 = false;
	Global_32405 = false;
	Global_32406 = false;
	Global_32407 = false;
	return;
}

void func_225(BOOL bParam0) // Hash - 0x1254D1D1 ^0x1254D1D1
{
	int i;

	for (i = 0; i < 60; i = i + 1)
	{
		func_142(i, bParam0);
	}

	return;
}

