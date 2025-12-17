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
	float fLocal_12 = 0f;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = -1;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 1000;
	var uLocal_28 = 1000;
	var uLocal_29 = 0;
	char* sLocal_30 = NULL;
	float fLocal_31 = 0f;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	float fLocal_35 = 0f;
	float fLocal_36 = 0f;
	var uLocal_37 = 0;
	int iLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	float fLocal_41 = 0f;
	float fLocal_42 = 0f;
	float fLocal_43 = 0f;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 6;
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
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	struct<3> Local_81 = { 0, 0, 0 } ;
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
	int iLocal_96 = 0;
	struct<3> Local_97 = { 0, 0, 0 } ;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	int iLocal_103 = 0;
	int iLocal_104 = 0;
	int iLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	float fLocal_109 = 0f;
	int iLocal_110 = 0;
	int iLocal_111 = 0;
	bool bLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int* iLocal_116 = NULL;
	var uLocal_117 = 0;
	var uLocal_118 = 0;
	int* iLocal_119 = NULL;
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
#endregion

void __EntryFunction__()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<3> Var6;
	struct<3> Var12;
	
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
	fLocal_12 = 0.001f;
	iLocal_15 = -1;
	sLocal_30 = "NULL";
	fLocal_31 = 0f;
	fLocal_35 = -0.0375f;
	fLocal_36 = 0.17f;
	iLocal_38 = 3;
	fLocal_41 = 80f;
	fLocal_42 = 140f;
	fLocal_43 = 180f;
	iLocal_49 = 1;
	iLocal_50 = 65;
	iLocal_51 = 49;
	iLocal_52 = 64;
	iLocal_75 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_76 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	Local_81 = { 500f, 500f, 500f };
	iLocal_106 = -1;
	fLocal_109 = 0f;
	iLocal_115 = 1;
	bVar0 = false;
	iVar1 = 0;
	func_93(&(Global_114904.f_19104), 4);
	func_93(&(Global_114904.f_19104), 256);
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
	{
		func_92();
	}
	func_91(16);
	while (true)
	{
		bVar0 = !func_90(0, 12);
		iVar2 = 0;
		if (bVar0 && iVar1 != 1)
		{
			iVar1 = 1;
		}
		if (iVar1 == 2)
		{
			if (func_89(9))
			{
				func_88(&iLocal_116);
				iVar1 = 1;
			}
		}
		switch (iVar1)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					iVar3 = func_87(PLAYER::PLAYER_PED_ID());
					if ((iVar3 == 0 || iVar3 == 2) || iVar3 == 1)
					{
						func_86();
						if (!func_85(Global_114904.f_19104, 64))
						{
							func_83(&(Global_114904.f_19104), 64);
						}
						func_82(&uLocal_122);
						iVar1 = 1;
						func_80(&iLocal_116);
					}
				}
				iVar2 = 100;
				break;
			
			case 1:
				if (func_79(1))
				{
					iLocal_107 = MISC::GET_GAME_TIMER();
				}
				if (!func_78() && !Global_99332)
				{
					if (iVar1 != 2)
					{
						if ((!MISC::IS_MINIGAME_IN_PROGRESS() && !bVar0) && !func_77(5))
						{
							func_74();
							if (func_73())
							{
								if (!iLocal_111)
								{
									if (func_71() == 2)
									{
										if (!func_85(Global_114904.f_19104, 1))
										{
											switch (func_70("TC_H_TOODAMAGED"))
											{
												case 2:
													func_68("TC_H_TOODAMAGED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													func_83(&(Global_114904.f_19104), 1);
													break;
												}
										}
									}
									else
									{
										func_93(&(Global_114904.f_19104), 1);
									}
									iLocal_111 = 1;
								}
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
								{
									iLocal_104 = 0;
								}
								else if (bLocal_112)
								{
									if (!func_85(Global_114904.f_19104, 16384))
									{
										switch (func_70("TC_ANOTHERJOB"))
										{
											case 2:
												func_68("TC_ANOTHERJOB", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												func_83(&(Global_114904.f_19104), 16384);
												break;
											}
									}
								}
								else if (!func_85(Global_114904.f_19104, 16))
								{
									if (!iLocal_114)
									{
										switch (func_70("TC_HOWTOSTART"))
										{
											case 2:
												func_68("TC_HOWTOSTART", 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
											
											case 1:
												iLocal_108 = MISC::GET_GAME_TIMER();
												iLocal_114 = 1;
												if (func_67("TC_HOWTOSTART"))
												{
													Global_114904.f_19104.f_22[15]++;
												}
												if (Global_114904.f_19104.f_22[15] >= 5)
												{
													func_83(&(Global_114904.f_19104), 16);
												}
												break;
											}
										}
								}
								if (HUD::DOES_BLIP_EXIST(iLocal_103))
								{
									HUD::REMOVE_BLIP(&iLocal_103);
								}
								switch (iLocal_104)
								{
									case 0:
										if (func_71() == 0)
										{
											if (!func_66(&iLocal_116))
											{
												func_65(&iLocal_116);
											}
											if (func_66(&iLocal_119))
											{
												func_88(&iLocal_119);
											}
											if (func_62(&iLocal_116) > 20f)
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_61())
												{
													iLocal_105 = 9;
													StringCopy(&Local_97, "Taxi_Procedural", 24);
													func_60(&uLocal_122, 8, 0, "TaxiDispatch", 0, 1);
													func_59(&uLocal_122, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_80(&iLocal_116);
													iLocal_104 = 1;
												}
												else if (!func_61())
												{
													if ((MISC::GET_GAME_TIMER() % 1000) < 50)
													{
													}
												}
											}
										}
										break;
									
									case 1:
										if (!func_66(&iLocal_116))
										{
											func_65(&iLocal_116);
										}
										if (func_62(&iLocal_116) >= 6f)
										{
											switch (func_70("TC_JOBOFFERED"))
											{
												case 2:
													func_68("TC_JOBOFFERED", 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
												
												case 1:
													iLocal_110 = 1;
													func_80(&iLocal_116);
													iLocal_104 = 2;
													break;
											}
											if ((MISC::GET_GAME_TIMER() % 1000) < 50)
											{
											}
										}
										break;
									
									case 2:
										if (!func_66(&iLocal_116))
										{
											func_65(&iLocal_116);
										}
										if (func_62(&iLocal_116) > 15f)
										{
											if (!func_85(Global_114904.f_19104, 32))
											{
												func_58("TC_MISSEDJOB", -1);
												func_83(&(Global_114904.f_19104), 32);
											}
											fLocal_109 = (MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 40f) + func_62(&iLocal_116));
											iLocal_104 = 3;
										}
										else if (iLocal_110)
										{
											if (func_62(&iLocal_116) > 6f)
											{
												iLocal_110 = 0;
												HUD::CLEAR_HELP(true);
											}
										}
										break;
									
									case 3:
										if (!func_66(&iLocal_116))
										{
											func_65(&iLocal_116);
										}
										if (func_62(&iLocal_116) > fLocal_109)
										{
											func_88(&iLocal_116);
											iLocal_104 = 0;
										}
										break;
								}
								if (((PAD::IS_CONTROL_PRESSED(0, 86) && !ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID())) && !Global_33928) && (MISC::GET_GAME_TIMER() - iLocal_107) > 3000)
								{
									iVar4 = func_71();
									if (iVar4 == 0)
									{
										if (iLocal_104 == 0 || iLocal_104 == 3)
										{
											func_82(&uLocal_122);
											iLocal_105 = 9;
											func_35(iLocal_105, &Local_97, &uLocal_122, 0);
											iLocal_113 = 1;
											iVar1 = 4;
										}
										else
										{
											HUD::CLEAR_PRINTS();
											HUD::CLEAR_HELP(true);
											if (!func_85(Global_114904.f_19104, 128))
											{
												func_83(&(Global_114904.f_19104), 128);
											}
											iVar1 = 4;
										}
										SCRIPT::REQUEST_SCRIPT(&Local_97);
										func_88(&iLocal_116);
										iVar2 = 0;
									}
									else if (iVar4 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											func_58("TXC_HEALTH_GONE", -1);
										}
									}
									else if (iVar4 == 3)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_67("TXC_WANTED_WARN"))
											{
												if (!func_85(Global_114904.f_19104, 32768))
												{
													func_58("TXC_WANTED_WARN", -1);
													func_83(&(Global_114904.f_19104), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_66(&iLocal_119))
								{
									func_65(&iLocal_119);
								}
								else
								{
									if (func_62(&iLocal_119) < 10f)
									{
										if ((MISC::GET_GAME_TIMER() % 1000) < 50)
										{
										}
									}
									if (func_62(&iLocal_119) > 10f && iLocal_104 != 0)
									{
										iLocal_104 = 0;
									}
								}
								if (func_34("TC_HOWTOSTART"))
								{
									func_30("TC_HOWTOSTART", 1);
								}
								if (func_34("TC_JOBOFFERED"))
								{
									func_30("TC_JOBOFFERED", 1);
								}
								if (func_34("TC_H_TOODAMAGED"))
								{
									func_30("TC_H_TOODAMAGED", 1);
								}
								if (func_34("TC_ANOTHERJOB"))
								{
									func_30("TC_ANOTHERJOB", 1);
								}
								if (((MISC::GET_GAME_TIMER() - iLocal_108) > 60000 && !func_67("TC_HOWTOSTART")) && iLocal_114)
								{
									iLocal_114 = 0;
								}
								if (bLocal_112)
								{
									bLocal_112 = false;
								}
								iLocal_111 = 0;
								func_88(&iLocal_116);
							}
						}
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				{
					iLocal_104 = 0;
				}
				break;
			
			case 4:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
				{
					AUDIO::SET_HORN_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
				}
				if (SCRIPT::HAS_SCRIPT_LOADED(&Local_97))
				{
					iVar5 = func_26(&iLocal_106, 2, 9, 0, 0);
					if (iVar5 == 1)
					{
						Global_113959 = 1;
						if (iLocal_113)
						{
							iVar1 = 5;
						}
						else
						{
							iVar1 = 7;
						}
						iVar2 = 0;
					}
					else if (iVar5 == 0)
					{
						iLocal_104 = 0;
						iVar1 = 11;
					}
					else
					{
						func_25("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_115, 1000);
					}
				}
				break;
			
			case 5:
				StringCopy(&Var6, "OJTX_PLRDE1", 24);
				func_24(&Var6, 1);
				func_59(&uLocal_122, "OJTXAUD", &Var6, 8, 0, 0, 0);
				iVar1 = 6;
				break;
			
			case 6:
				if (!func_23())
				{
					func_59(&uLocal_122, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					iVar1 = 7;
				}
				break;
			
			case 7:
				if (!func_23())
				{
					StringCopy(&Var12, "OJTX_ACCEPT", 24);
					func_24(&Var12, 1);
					func_82(&uLocal_122);
					func_59(&uLocal_122, "OJTXAUD", &Var12, 8, 0, 0, 0);
					iVar1 = 8;
				}
				break;
			
			case 8:
				if (func_73())
				{
					if (!func_23())
					{
						bLocal_112 = false;
						if (func_34("TC_HOWTOSTART"))
						{
							func_30("TC_HOWTOSTART", 1);
						}
						iLocal_96 = SYSTEM::START_NEW_SCRIPT(&Local_97, 64500);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_97);
						if (!func_85(Global_114904.f_19104, 4))
						{
							func_83(&(Global_114904.f_19104), 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), true);
						}
						func_83(&(Global_114904.f_19104), 256);
						StringCopy(&Local_97, "", 24);
						iLocal_113 = 0;
						iVar1 = 10;
						iLocal_104 = 0;
					}
				}
				else
				{
					if (func_23())
					{
						func_20();
					}
					bLocal_112 = false;
					iLocal_113 = 0;
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_97);
					func_83(&(Global_114904.f_19104), 256);
					StringCopy(&Local_97, "", 24);
					iLocal_104 = 0;
					iVar1 = 10;
				}
				break;
			
			case 10:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_96))
				{
					func_93(&(Global_114904.f_19104), 2048);
					if (func_85(Global_114904.f_19104, 4))
					{
						func_93(&(Global_114904.f_19104), 4);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), false);
					}
					Global_113959 = 0;
					iLocal_105 = -1;
					iVar1 = 11;
					iVar2 = 0;
				}
				else if (func_85(Global_114904.f_19104, 1024))
				{
					func_93(&(Global_114904.f_19104), 1024);
					func_13(func_19(iLocal_105), 0, 0);
					bLocal_112 = true;
					func_11(iLocal_105, bLocal_112);
					func_10(1, 0);
					func_7();
				}
				break;
			
			case 11:
				if (func_85(Global_114904.f_19104, 256))
				{
					func_93(&(Global_114904.f_19104), 256);
					func_6(&iLocal_106);
				}
				iLocal_106 = -1;
				if (!func_5())
				{
					func_10(0, 0);
					func_2();
					StringCopy(&Local_97, "", 24);
					if (iLocal_96 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(iLocal_96))
						{
							SCRIPT::TERMINATE_THREAD(iLocal_96);
							iLocal_96 = 0;
						}
					}
					func_88(&iLocal_116);
					func_1(0);
					iLocal_104 = 0;
					iVar1 = 1;
					iVar2 = 0;
				}
				break;
			
			case 12:
				func_92();
				break;
			
			default:
				func_92();
				break;
		}
		SYSTEM::WAIT(iVar2);
	}
}

void func_1(int iParam0)
{
	Global_80541 = iParam0;
	Global_80542 = iParam0;
}

void func_2()
{
	char cVar0[24];
	
	if (MISC::IS_XBOX360_VERSION() || func_4())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if ((MISC::IS_PS3_VERSION() || func_3()) || MISC::IS_PC_VERSION())
	{
		StringCopy(&cVar0, "PRESENCE_0_STR", 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &cVar0);
	}
}

bool func_3()
{
	return (MISC::IS_ORBIS_VERSION() || MISC::IS_PROSPERO_VERSION());
}

bool func_4()
{
	return (MISC::IS_DURANGO_VERSION() || MISC::IS_SCARLETT_VERSION());
}

bool func_5()
{
	return Global_102468.f_1;
}

void func_6(int iParam0)
{
	if (*iParam0 == -1)
	{
		return;
	}
	if (!*iParam0 == Global_44831)
	{
		*iParam0 = -1;
		return;
	}
	*iParam0 = -1;
	Global_44830 = 0;
	Global_44832 = 0;
	Global_44869 = 15;
	Global_65007 = 0;
	Global_65008 = 0;
}

void func_7()
{
	func_8();
}

int func_8()
{
	if (func_9(0))
	{
		return 0;
	}
	if (Global_102468.f_8)
	{
		if (Global_102468.f_10 > 0)
		{
			return 0;
		}
	}
	else if (Global_102468.f_10 > 1)
	{
		return 0;
	}
	Global_102468.f_10++;
	return 1;
}

int func_9(bool bParam0)
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0)
	{
		return 1;
	}
	return BitTest(Global_80529, 0);
}

void func_10(int iParam0, int iParam1)
{
	Global_102468.f_7 = iParam0;
	Global_102468.f_8 = iParam1;
}

void func_11(int iParam0, bool bParam1)
{
	func_12();
	if (bParam1)
	{
		Global_114904.f_19104.f_1[iParam0 /*2*/] = 1;
		Global_114904.f_19104.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_114904.f_19104.f_1[iParam0 /*2*/] = 0;
		Global_114904.f_19104.f_1[iParam0 /*2*/].f_1 = 1;
	}
}

void func_12()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Global_114904.f_19104.f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

void func_13(int iParam0, int iParam1, int iParam2)
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
		func_17((891 + iParam0), 1, -1);
	}
	bVar0 = true;
	if (Global_114904.f_10201[iParam0 /*12*/].f_5 == 1)
	{
		if (Global_114904.f_10201[iParam0 /*12*/].f_6 == 11 || Global_114904.f_10201[iParam0 /*12*/].f_6 == 12)
		{
			bVar0 = false;
		}
	}
	else
	{
		Global_114904.f_10201[iParam0 /*12*/].f_5 = 1;
		Global_114904.f_10201[iParam0 /*12*/].f_10 = iParam1;
		Global_114904.f_10201[iParam0 /*12*/].f_11 = iParam2;
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
		func_14();
	}
}

void func_14()
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
	Global_114640 = 0;
	Global_114641 = 0;
	Global_114642 = 0;
	Global_114643 = 0;
	Global_114644 = 0;
	Global_114645 = 0;
	Global_114646 = 0;
	fVar1 = 0f;
	fVar2 = 0f;
	fVar3 = 0f;
	fVar4 = 0f;
	fVar5 = 0f;
	fVar6 = 0f;
	fVar7 = 0f;
	fVar8 = Global_114904.f_10201.f_3853;
	Global_114904.f_10201.f_3853 = 0f;
	while (iVar0 < 321)
	{
		if (Global_114904.f_10201[iVar0 /*12*/].f_5 == 1)
		{
			switch (Global_114904.f_10201[iVar0 /*12*/].f_6)
			{
				case 1:
					Global_114640++;
					fVar1 = (fVar1 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 3:
					Global_114641++;
					fVar2 = (fVar2 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 5:
					Global_114642++;
					fVar3 = (fVar3 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 7:
					Global_114643++;
					fVar4 = (fVar4 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 9:
					Global_114644++;
					fVar5 = (fVar5 + (Global_114904.f_10201[iVar0 /*12*/].f_4 * 4f));
					break;
				
				case 11:
					Global_114645++;
					fVar6 = (fVar6 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				case 13:
					Global_114646++;
					fVar7 = (fVar7 + Global_114904.f_10201[iVar0 /*12*/].f_4);
					break;
				
				default:
					break;
				}
		}
		iVar0++;
	}
	if (Global_114623 > 0)
	{
		if (Global_114640 == Global_114623)
		{
			fVar1 = 55f;
		}
	}
	if (Global_114624 > 0)
	{
		if (Global_114641 == Global_114624)
		{
			fVar2 = 10f;
		}
	}
	if (Global_114625 > 0)
	{
		if (Global_114642 == Global_114625)
		{
			fVar3 = 0f;
		}
	}
	if (Global_114626 > 0)
	{
		if (Global_114643 == Global_114626)
		{
			fVar4 = 10f;
		}
	}
	if (Global_114627 > 0)
	{
		if (((Global_114644 == Global_114627 || (Global_114627 * 10 / Global_114644) < 41) || Global_114644 > Global_114630) || Global_114644 == Global_114630)
		{
			if (!BitTest(Global_114904.f_10201.f_3856, 14))
			{
				if (Global_114644 == Global_114627)
				{
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_114627, 0);
					MISC::SET_BIT(&(Global_114904.f_10201.f_3856), 14);
				}
			}
			fVar5 = 5f;
		}
	}
	if (Global_114628 > 0)
	{
		if (Global_114645 == Global_114628)
		{
			fVar6 = 15f;
		}
	}
	if (Global_114629 > 0)
	{
		if (Global_114646 == Global_114629)
		{
			fVar7 = 5f;
		}
	}
	Global_114904.f_10201.f_3853 = ((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
	if (Global_114644 > Global_114630 || Global_114644 == Global_114630)
	{
		iVar9 = Global_114630;
	}
	else
	{
		iVar9 = Global_114644;
	}
	STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_114640, true);
	STATS::STAT_SET_INT(joaat("num_missions_available"), Global_114623, true);
	STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_114641, true);
	STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_114624, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_114642, true);
	STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_114625, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_114643, true);
	STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_114626, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
	STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_114630, true);
	STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_114646 + Global_114645), true);
	STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_114629 + Global_114628), true);
	Global_114647 = (Global_114640 * 100 / Global_114623);
	Global_114649 = ((Global_114642 + Global_114641) * 100 / (Global_114625 + Global_114624));
	Global_114648 = ((Global_114643 + iVar9) * 100 / (Global_114626 + Global_114630));
	Global_114650 = ((Global_114645 + Global_114646) * 100 / (Global_114628 + Global_114629));
	STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_114904.f_10201.f_3853, true);
	STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_114647, true);
	STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_114648, true);
	STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_114649, true);
	if (fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_114904.f_10201.f_3853))
	{
		func_16(13, SYSTEM::FLOOR(Global_114904.f_10201.f_3853));
	}
	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_80280)
		{
			if (func_15() == 2 == 0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
				{
					Global_114638 = 0;
				}
				if (!Global_65010)
				{
					func_8();
				}
			}
		}
	}
}

int func_15()
{
	return Global_33775;
}

int func_16(int iParam0, int iParam1)
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

void func_17(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = func_18();
	}
	STATS::SET_PACKED_STAT_BOOL_CODE(iParam0, bParam1, iParam2);
}

int func_18()
{
	return Global_1574927;
}

int func_19(int iParam0)
{
	int iVar0;
	
	switch (iParam0)
	{
		case 0:
			iVar0 = 199;
			break;
		
		case 1:
			iVar0 = 200;
			break;
		
		case 2:
			iVar0 = 201;
			break;
		
		case 3:
			iVar0 = 202;
			break;
		
		case 4:
			iVar0 = 203;
			break;
		
		case 5:
			iVar0 = 204;
			break;
		
		case 6:
			iVar0 = 205;
			break;
		
		case 7:
			iVar0 = 206;
			break;
		
		case 8:
			iVar0 = 207;
			break;
		
		case 9:
			break;
		
		default:
			iVar0 = 199;
			break;
	}
	return iVar0;
}

void func_20()
{
	Global_21849 = 0;
	func_21();
}

void func_21()
{
	AUDIO::RESTART_SCRIPTED_CONVERSATION();
	Global_23994 = 0;
	if ((AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_21610.f_1 == 9) || Global_21609 == 1)
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(false);
		Global_22983 = 6;
		Global_21610.f_1 = 3;
		return;
	}
	if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		AUDIO::STOP_SCRIPTED_CONVERSATION(true);
		Global_22983 = 6;
		return;
	}
}

int func_22()
{
	return joaat("taxi");
}

int func_23()
{
	if (Global_22983 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
	{
		return 1;
	}
	return 0;
}

void func_24(char* sParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_87(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "M", 24);
		}
		else
		{
			StringConCat(sParam0, "_2", 24);
		}
	}
	else if (iVar0 == 2)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "T", 24);
		}
		else
		{
			StringConCat(sParam0, "_3", 24);
		}
	}
	else if (iVar0 == 1)
	{
		if (bParam1)
		{
			StringConCat(sParam0, "F", 24);
		}
		else
		{
			StringConCat(sParam0, "_4", 24);
		}
	}
}

void func_25(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::GET_GAME_TIMER() < (*iParam1 + iParam2))
	{
		return;
	}
	*iParam1 = MISC::GET_GAME_TIMER();
}

int func_26(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	int iVar0;
	
	if (iParam1 == 7)
	{
		return 0;
	}
	if (!bParam3)
	{
		if (Global_99882.f_44 == 1)
		{
			return 2;
		}
	}
	if (iParam1 == 0)
	{
		if (func_89(0))
		{
			return 0;
		}
		Global_44833++;
		*iParam0 = Global_44833;
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
		Global_24390.f_5 = 0;
		if (iParam2 != 5)
		{
			PLAYER::FORCE_CLEANUP(8);
		}
		Global_44869 = iParam2;
		Global_44831 = *iParam0;
		Global_44832 = iParam4;
		Global_44830 = 0;
		return 1;
	}
	if (*iParam0 != -1)
	{
		if (Global_44830 > 0)
		{
			iVar0 = 0;
			iVar0 = 0;
			while (iVar0 < Global_44830)
			{
				if (Global_44836[iVar0 /*4*/] == *iParam0)
				{
					return 2;
				}
				iVar0++;
			}
		}
		else if (Global_44831 == *iParam0)
		{
			return 1;
		}
		*iParam0 = -1;
	}
	if (*iParam0 == -1)
	{
		if (!func_28(iParam2))
		{
			return 0;
		}
		if (Global_44830 == 8)
		{
			return 0;
		}
		Global_44833++;
		*iParam0 = Global_44833;
		Global_44836[Global_44830 /*4*/] = Global_44833;
		Global_44836[Global_44830 /*4*/].f_1 = iParam1;
		Global_44836[Global_44830 /*4*/].f_2 = iParam2;
		Global_44836[Global_44830 /*4*/].f_3 = 0;
		Global_44830++;
		if (iParam4 != 0)
		{
			func_27(iParam0, iParam4);
		}
	}
	return 2;
}

void func_27(var uParam0, int iParam1)
{
	int iVar0;
	
	if (Global_44830 == 0)
	{
		return;
	}
	if (*uParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_44830)
	{
		if (Global_44836[iVar0 /*4*/] == *uParam0)
		{
			Global_44836[iVar0 /*4*/].f_3 = iParam1;
		}
		iVar0++;
	}
	*uParam0 = -1;
}

bool func_28(int iParam0)
{
	return func_29(iParam0, Global_44869);
}

int func_29(int iParam0, int iParam1)
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

void func_30(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (Global_113541 && iParam1)
	{
		if (func_67(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
		{
			HUD::CLEAR_HELP(false);
		}
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114904.f_20417[iVar0 /*16*/])))
		{
			iVar1 = iVar0;
			while (iVar1 <= (Global_114904.f_20417.f_145 - 2))
			{
				func_33(iVar1, iVar1 + 1);
				iVar1++;
			}
			func_32((Global_114904.f_20417.f_145 - 1));
			Global_114904.f_20417.f_145 = (Global_114904.f_20417.f_145 - 1);
			func_31();
			return;
		}
		iVar0++;
	}
}

void func_31()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 3)
	{
		Global_114904.f_20417.f_146[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 0))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[0])
			{
				Global_114904.f_20417.f_146[0] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 1))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[1])
			{
				Global_114904.f_20417.f_146[1] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		if (BitTest(Global_114904.f_20417[iVar0 /*16*/].f_11, 2))
		{
			if (Global_114904.f_20417[iVar0 /*16*/].f_12 > Global_114904.f_20417.f_146[2])
			{
				Global_114904.f_20417.f_146[2] = Global_114904.f_20417[iVar0 /*16*/].f_12;
			}
		}
		iVar0++;
	}
}

void func_32(int iParam0)
{
	StringCopy(&(Global_114904.f_20417[iParam0 /*16*/]), "", 16);
	StringCopy(&(Global_114904.f_20417[iParam0 /*16*/].f_4), "", 16);
	Global_114904.f_20417[iParam0 /*16*/].f_8 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_9 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_11 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_10 = -1;
	Global_114904.f_20417[iParam0 /*16*/].f_12 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_13 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_14 = 0;
	Global_114904.f_20417[iParam0 /*16*/].f_15 = 0;
}

void func_33(int iParam0, int iParam1)
{
	Global_114904.f_20417[iParam0 /*16*/] = { Global_114904.f_20417[iParam1 /*16*/] };
	Global_114904.f_20417[iParam0 /*16*/].f_4 = { Global_114904.f_20417[iParam1 /*16*/].f_4 };
	Global_114904.f_20417[iParam0 /*16*/].f_8 = Global_114904.f_20417[iParam1 /*16*/].f_8;
	Global_114904.f_20417[iParam0 /*16*/].f_10 = Global_114904.f_20417[iParam1 /*16*/].f_10;
	Global_114904.f_20417[iParam0 /*16*/].f_9 = Global_114904.f_20417[iParam1 /*16*/].f_9;
	Global_114904.f_20417[iParam0 /*16*/].f_11 = Global_114904.f_20417[iParam1 /*16*/].f_11;
	Global_114904.f_20417[iParam0 /*16*/].f_12 = Global_114904.f_20417[iParam1 /*16*/].f_12;
	Global_114904.f_20417[iParam0 /*16*/].f_13 = Global_114904.f_20417[iParam1 /*16*/].f_13;
	Global_114904.f_20417[iParam0 /*16*/].f_14 = Global_114904.f_20417[iParam1 /*16*/].f_14;
	Global_114904.f_20417[iParam0 /*16*/].f_15 = Global_114904.f_20417[iParam1 /*16*/].f_15;
}

int func_34(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_114904.f_20417[iVar0 /*16*/])))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_35(int iParam0, char* sParam1, var uParam2, bool bParam3)
{
	struct<6> Var0;
	char cVar6[24];
	
	if (iParam0 == 0)
	{
		StringCopy(sParam1, "Taxi_NeedExcitement", 24);
	}
	else if (iParam0 == 1)
	{
		StringCopy(sParam1, "Taxi_TakeItEasy", 24);
	}
	else if (iParam0 == 2)
	{
		StringCopy(sParam1, "Taxi_Deadline", 24);
	}
	else if (iParam0 == 3)
	{
		StringCopy(sParam1, "Taxi_GotYourBack", 24);
	}
	else if (iParam0 == 4)
	{
		StringCopy(sParam1, "Taxi_TakeToBest", 24);
	}
	else if (iParam0 == 5)
	{
		StringCopy(sParam1, "Taxi_CutYouIn", 24);
	}
	else if (iParam0 == 6)
	{
		StringCopy(sParam1, "Taxi_GotYouNow", 24);
	}
	else if (iParam0 == 7)
	{
		StringCopy(sParam1, "Taxi_ClownCar", 24);
	}
	else if (iParam0 == 8)
	{
		StringCopy(sParam1, "Taxi_FollowCar", 24);
	}
	else if (iParam0 == 9)
	{
		StringCopy(sParam1, "Taxi_Procedural", 24);
	}
	if (bParam3)
	{
		StringCopy(&Var0, func_57(iParam0), 24);
		cVar6 = { Var0 };
		StringConCat(&cVar6, "_1", 24);
		func_82(uParam2);
		func_36(uParam2, "OJTXAUD", &Var0, &cVar6, 8, 0, 0);
	}
}

int func_36(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7)
	{
		if (iParam4 < 12)
		{
			iParam4 = 7;
		}
	}
	Global_22990 = 0;
	Global_22997 = 0;
	Global_22992 = 0;
	Global_23974 = 1;
	Global_23976 = 0;
	Global_23980 = 0;
	StringCopy(&Global_23987, sParam3, 24);
	Global_2883585 = 0;
	return func_37(sParam2, iParam4, 0);
}

int func_37(char* sParam0, int iParam1, bool bParam2)
{
	Global_22984 = 0;
	if (Global_22983 == 0 || Global_22985 == 2)
	{
		if (Global_22983 != 0)
		{
			if (iParam1 > Global_22985)
			{
				if (Global_22990 == 0)
				{
					AUDIO::STOP_SCRIPTED_CONVERSATION(false);
					Global_21610.f_1 = 3;
					Global_22983 = 0;
					Global_22984 = 1;
					Global_23036 = 0;
					Global_22979 = 0;
					Global_22980 = 0;
					Global_22994 = 0;
					Global_22993 = 0;
					Global_21609 = 0;
				}
				else
				{
					func_21();
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
		if (func_55(8, -1))
		{
			return 0;
		}
		Global_23059 = { Global_23053 };
		func_54();
		Global_22272 = { Global_22437 };
		Global_22989 = Global_22990;
		Global_22996 = Global_22997;
		Global_2883586 = Global_2883585;
		Global_22998 = { Global_23014 };
		Global_22991 = Global_22992;
		Global_23973 = Global_23974;
		Global_23981 = { Global_23987 };
		Global_23975 = Global_23976;
		Global_23977 = Global_23978;
		Global_23979 = Global_23980;
		Global_22602.f_370 = Global_23972;
		Global_22602.f_368 = Global_23970;
		Global_22602.f_369 = Global_23971;
		Global_22979 = Global_22980;
		if (Global_22989)
		{
			MISC::CLEAR_BIT(&Global_9463, 20);
			MISC::CLEAR_BIT(&Global_9464, 17);
			MISC::CLEAR_BIT(&Global_9465, 0);
			if (bParam2)
			{
				func_48();
				if (Global_10285[Global_21610 /*2811*/][0 /*281*/].f_259 == 2)
				{
					if (iParam1 == 13)
					{
					}
					else
					{
						return 0;
					}
				}
				if (Global_21610.f_1 > 3)
				{
					return 0;
				}
			}
			if (Global_21576 == 1)
			{
				return 0;
			}
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()))
				{
					return 0;
				}
				if (func_47())
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
				if (!Global_80280)
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
			if (func_46())
			{
				return 0;
			}
			else
			{
				switch (Global_21610.f_1)
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
				if (BitTest(Global_9463, 9))
				{
					return 0;
				}
			}
			func_45();
			Global_22993 = bParam2;
		}
		Global_22985 = iParam1;
		StringCopy(&Global_22602, sParam0, 24);
		Global_21849 = 0;
		func_44();
		func_38();
		return 1;
	}
	if (Global_22983 == 5)
	{
		return 0;
	}
	if (iParam1 < Global_22985 || iParam1 == Global_22985)
	{
		return 0;
	}
	if (iParam1 == 2)
	{
	}
	else
	{
		func_21();
	}
	return 0;
}

void func_38()
{
	if (!func_39())
	{
		return;
	}
	if (Global_22989)
	{
		MemCopy(&(Global_1978568.f_1), {Global_22602}, 4);
		Global_1978568 = Global_8778;
		Global_1978568.f_6 = Global_22993;
	}
}

int func_39()
{
	if (!Global_262145.f_28485)
	{
		return 0;
	}
	if (!Global_80280)
	{
		return 0;
	}
	if (PLAYER::PLAYER_ID() == func_43())
	{
		return 0;
	}
	if (func_40(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (BitTest(Global_1892653[PLAYER::PLAYER_ID() /*615*/].f_1, 7))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return 0;
	}
	return 1;
}

int func_40(int iParam0)
{
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (func_42(8))
		{
			return 1;
		}
		if (Global_2733002.f_5971.f_1 > 0)
		{
			return 1;
		}
	}
	return func_41(iParam0, 20);
}

var func_41(int iParam0, int iParam1)
{
	return BitTest(Global_1892653[iParam0 /*615*/].f_10.f_4, iParam1);
}

bool func_42(int iParam0)
{
	return BitTest(Global_2733002.f_5960, iParam0);
}

int func_43()
{
	return -1;
}

void func_44()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 69)
	{
		StringCopy(&(Global_21851[iVar0 /*6*/]), "", 24);
		iVar0++;
	}
	AUDIO::STOP_SCRIPTED_CONVERSATION(false);
	Global_22983 = 1;
}

void func_45()
{
	Global_23036 = Global_23035;
	Global_23030 = Global_23031;
	Global_23077 = { Global_23065 };
	Global_23083 = { Global_23071 };
	Global_23038 = Global_23037;
	Global_23107 = { Global_23089 };
	Global_23113 = { Global_23095 };
	Global_23119 = { Global_23101 };
	Global_23125 = { Global_23131 };
	Global_8778 = Global_8779;
	Global_8780 = Global_8781;
	Global_22994 = Global_22995;
	Global_22996 = Global_22997;
	Global_22998 = { Global_23014 };
	Global_22987 = Global_22988;
	Global_23999 = 0;
	Global_23032 = 0;
	Global_23033 = 0;
	MISC::CLEAR_BIT(&Global_9464, 16);
}

int func_46()
{
	if (Global_21610.f_1 == 1 || Global_21610.f_1 == 0)
	{
		return 1;
	}
	return 0;
}

int func_47()
{
	int iVar0;
	int iVar1;
	
	if (Global_80280)
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

void func_48()
{
	if (func_77(14))
	{
		if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[0 /*29*/])
			{
				Global_21610 = 0;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[1 /*29*/])
			{
				Global_21610 = 1;
			}
			else if (ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()) == Global_114904.f_28058[2 /*29*/])
			{
				Global_21610 = 2;
			}
			else
			{
				Global_21610 = 0;
			}
		}
	}
	else
	{
		Global_21610 = func_49();
		if (Global_21610 == 145)
		{
			Global_21610 = 3;
		}
		if (Global_80280)
		{
			Global_21610 = 3;
		}
		if (Global_21610 > 3)
		{
			Global_21610 = 3;
		}
	}
}

var func_49()
{
	func_50();
	return Global_114904.f_2370.f_539.f_4321;
}

void func_50()
{
	int iVar0;
	
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_52(Global_114904.f_2370.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			iVar0 = func_87(PLAYER::PLAYER_PED_ID());
			if (func_51(iVar0) && (!func_77(14) || Global_113852))
			{
				if (Global_114904.f_2370.f_539.f_4321 != iVar0 && func_51(Global_114904.f_2370.f_539.f_4321))
				{
					Global_114904.f_2370.f_539.f_4322 = Global_114904.f_2370.f_539.f_4321;
				}
				Global_114904.f_2370.f_539.f_4323 = iVar0;
				Global_114904.f_2370.f_539.f_4321 = iVar0;
				return;
			}
		}
		else
		{
			if (Global_114904.f_2370.f_539.f_4321 != 145)
			{
				Global_114904.f_2370.f_539.f_4323 = Global_114904.f_2370.f_539.f_4321;
			}
			return;
		}
	}
	Global_114904.f_2370.f_539.f_4321 = 145;
}

bool func_51(int iParam0)
{
	return iParam0 < 3;
}

int func_52(int iParam0)
{
	if (func_51(iParam0))
	{
		return func_53(iParam0);
	}
	else if (iParam0 != 145)
	{
	}
	return 0;
}

var func_53(int iParam0)
{
	return Global_2339[iParam0 /*29*/];
}

void func_54()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 <= 15)
	{
		Global_22272[iVar0 /*10*/] = 0;
		StringCopy(&(Global_22272[iVar0 /*10*/].f_1), "", 24);
		Global_22272[iVar0 /*10*/].f_7 = 0;
		Global_22272[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_22272.f_161 = -99;
	Global_22272.f_162 = { 0f, 0f, 0f };
}

bool func_55(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			if (iParam1 > -1)
			{
				return Global_1677542.f_203[iParam1];
			}
			break;
	}
	return BitTest(Global_1677542.f_1048, iParam0);
}

void func_56(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Global_22437 = { *uParam0 };
	Global_8779 = iParam1;
	StringCopy(&Global_23053, sParam2, 24);
	Global_23972 = iParam5;
	if (iParam3 == 0)
	{
		Global_23970 = 1;
		Global_23968 = 0;
	}
	else
	{
		Global_23970 = 0;
		Global_23968 = 1;
	}
	if (iParam4 == 0)
	{
		Global_23971 = 1;
		Global_23969 = 0;
	}
	else
	{
		Global_23971 = 0;
		Global_23969 = 1;
	}
}

char* func_57(int iParam0)
{
	if (iParam0 == 0)
	{
		return "OJTX_EXC_OFF";
	}
	else if (iParam0 == 1)
	{
		return "OJTX_TIE_OFF";
	}
	else if (iParam0 == 2)
	{
		return "OJTX_DL_OFF";
	}
	else if (iParam0 == 3)
	{
		return "OJTX_GB_OFF";
	}
	else if (iParam0 == 4)
	{
		return "OJTX_TB_OFF";
	}
	else if (iParam0 == 5)
	{
		return "OJTX_CI_OFF";
	}
	else if (iParam0 == 6)
	{
		return "OJTX_GN_OFF";
	}
	else if (iParam0 == 7)
	{
		return "OJTX_CC_OFF";
	}
	else if (iParam0 == 8)
	{
		return "OJTX_FC_OFF";
	}
	else if (iParam0 == 9)
	{
		return "OJTX_PRO_OFF";
	}
	return "";
}

void func_58(char* sParam0, int iParam1)
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
}

int func_59(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_56(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7)
	{
		if (iParam3 < 12)
		{
			iParam3 = 7;
		}
	}
	Global_22990 = 0;
	Global_22992 = 0;
	Global_22997 = 0;
	Global_23974 = 0;
	Global_23976 = 0;
	Global_23980 = 0;
	Global_2883585 = 0;
	return func_37(sParam2, iParam3, 0);
}

void func_60(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if ((uParam0[iParam1 /*10*/])->f_7 == 1)
	{
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&((uParam0[iParam1 /*10*/])->f_1), sParam3, 24);
	(uParam0[iParam1 /*10*/])->f_7 = 1;
	(uParam0[iParam1 /*10*/])->f_8 = iParam4;
	(uParam0[iParam1 /*10*/])->f_9 = iParam5;
	if (!Global_80280)
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

int func_61()
{
	int iVar0;
	
	iVar0 = MISC::GET_GAME_TIMER();
	if (Global_22983 == 0)
	{
		if ((iVar0 - Global_24005) > 3000)
		{
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == 0)
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
	return 0;
}

float func_62(int* iParam0)
{
	if (func_66(iParam0))
	{
		if (func_64(iParam0))
		{
			return iParam0->f_2;
		}
		else
		{
			return (func_63(BitTest(*iParam0, 4)) - iParam0->f_1);
		}
	}
	return iParam0->f_1;
}

float func_63(bool bParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	if (bParam0)
	{
		fVar0 = SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
		fVar1 = (fVar0 / 1000f);
		return fVar1;
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar2 = NETWORK::GET_NETWORK_TIME();
		fVar3 = SYSTEM::TO_FLOAT(iVar2);
		fVar4 = (fVar3 / 1000f);
		return fVar4;
	}
	return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

bool func_64(int* iParam0)
{
	return BitTest(*iParam0, 2);
}

void func_65(int* iParam0)
{
	if (!func_66(iParam0))
	{
		func_80(iParam0);
	}
}

bool func_66(int* iParam0)
{
	return BitTest(*iParam0, 1);
}

bool func_67(char* sParam0)
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_68(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	func_69(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}

void func_69(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9)
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
	while (iVar0 < Global_114904.f_20417.f_145)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_114904.f_20417[iVar0 /*16*/]), sParam0))
		{
			return;
		}
		iVar0++;
	}
	if (Global_114904.f_20417.f_145 < 9)
	{
		StringCopy(&(Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/]), sParam0, 16);
		StringCopy(&(Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_4), sParam1, 16);
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_8 = (MISC::GET_GAME_TIMER() + iParam3);
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_9 = iParam5;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_11 = iParam6;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_12 = uParam2;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_13 = iParam7;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_14 = iParam8;
		Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_15 = uParam9;
		if (iParam4 != -1)
		{
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = ((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
		}
		else
		{
			Global_114904.f_20417[Global_114904.f_20417.f_145 /*16*/].f_10 = -1;
		}
		Global_114904.f_20417.f_145++;
		func_31();
	}
}

int func_70(char* sParam0)
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113544))
	{
		return 1;
	}
	if (func_34(sParam0))
	{
		return 0;
	}
	return 2;
}

int func_71()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_73())
	{
		return 1;
	}
	else
	{
		iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		iVar1 = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iVar0));
		iVar2 = ENTITY::GET_ENTITY_HEALTH(iVar0);
		if (iVar1 < 100 || iVar2 < 100)
		{
			return 2;
		}
		if (!func_72(iVar0))
		{
			return 2;
		}
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
		{
			return 3;
		}
	}
	return 0;
}

int func_72(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 0, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 1, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 4, false))
	{
		iVar0++;
	}
	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(iParam0, 5, false))
	{
		iVar0++;
	}
	if (iVar0 < 2)
	{
		return 0;
	}
	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		iVar1 = 0;
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 0))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 1))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 2))
		{
			iVar1++;
		}
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(iParam0, 3))
		{
			iVar1++;
		}
		if (iVar1 < 2)
		{
			return 0;
		}
	}
	return 1;
}

int func_73()
{
	int iVar0;
	
	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
				{
					if (VEHICLE::IS_VEHICLE_MODEL(iVar0, func_22()))
					{
						return 1;
					}
				}
			}
		}
	}
	return 0;
}

void func_74()
{
	if (!func_85(Global_114904.f_19104, 8192))
	{
		if (func_73())
		{
			func_83(&(Global_114904.f_19104), 8192);
			func_76();
		}
	}
	else if (!func_73())
	{
		func_93(&(Global_114904.f_19104), 8192);
		func_75();
	}
}

void func_75()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_Off", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

void func_76()
{
	int iVar0;
	
	iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
	{
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", iVar0, "TAXI_SOUNDS", false, 0);
	}
}

bool func_77(int iParam0)
{
	return Global_44869 == iParam0;
}

int func_78()
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	return 1;
}

int func_79(bool bParam0)
{
	if (Global_24390.f_130)
	{
		return 0;
	}
	if (PAD::IS_CONTROL_JUST_RELEASED(0, 19) || (!bParam0 && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 19)))
	{
		return 1;
	}
	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(0, 166))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 167) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 167))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 168)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 168))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 169))
			{
				return 1;
			}
		}
		else if (PAD::IS_CONTROL_JUST_RELEASED(0, 169))
		{
			if ((!PAD::IS_CONTROL_PRESSED(0, 166) && !PAD::IS_CONTROL_PRESSED(0, 167)) && !PAD::IS_CONTROL_PRESSED(0, 168))
			{
				return 1;
			}
		}
		if (!bParam0)
		{
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 166))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 167) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 167))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 168))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 169))
				{
					return 1;
				}
			}
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(0, 169))
			{
				if ((!PAD::IS_DISABLED_CONTROL_PRESSED(0, 166) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 167)) && !PAD::IS_DISABLED_CONTROL_PRESSED(0, 168))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void func_80(int* iParam0)
{
	func_81(iParam0, 0f);
}

void func_81(int* iParam0, float fParam1)
{
	iParam0->f_1 = (func_63(BitTest(*iParam0, 4)) - fParam1);
	MISC::SET_BIT(iParam0, true);
	MISC::CLEAR_BIT(iParam0, 2);
	iParam0->f_2 = 0f;
}

void func_82(var uParam0)
{
	int iVar0;
	char cVar1[64];
	
	iVar0 = func_87(PLAYER::PLAYER_PED_ID());
	if (iVar0 == 0)
	{
		func_60(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (iVar0 == 2)
	{
		func_60(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (iVar0 == 1)
	{
		func_60(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_60(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		StringCopy(&cVar1, "Invalid enum passed to Taxi dialogue is: ", 64);
		StringIntConCat(&cVar1, iVar0, 64);
	}
	func_60(uParam0, 8, 0, "TaxiDispatch", 0, 1);
}

void func_83(var uParam0, int iParam1)
{
	func_84(uParam0, iParam1);
}

void func_84(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

bool func_85(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_86()
{
	int iVar0;
	
	if (func_85(Global_114904.f_19104, 2048))
	{
		iVar0 = 0;
		while (iVar0 <= (10 - 1))
		{
			Global_114904.f_19104.f_1[0 /*2*/] = 0;
			Global_114904.f_19104.f_1[0 /*2*/].f_1 = 0;
			iVar0++;
		}
	}
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2)
		{
			if (func_52(iVar0) == iVar1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

void func_88(int* iParam0)
{
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

int func_89(int iParam0)
{
	if (Global_44869 == 15)
	{
		return 0;
	}
	if (func_28(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_90(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 11 || iParam0 == -1)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	iVar0 = BitTest(Global_114904.f_9092.f_99.f_219[iParam0], iParam1);
	return iVar0;
}

int func_91(int iParam0)
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
	if (BitTest(Global_114904.f_9092.f_99.f_219[iVar0], bVar1))
	{
		return 0;
	}
	MISC::SET_BIT(&(Global_114904.f_9092.f_99.f_219[iVar0]), bVar1);
	return 1;
}

void func_92()
{
	if (func_85(Global_114904.f_19104, 4))
	{
		func_93(&(Global_114904.f_19104), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), false);
	}
	if (func_85(Global_114904.f_19104, 256))
	{
		func_93(&(Global_114904.f_19104), 256);
		func_6(&iLocal_106);
	}
	if (iLocal_96 != 0)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_96))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_96);
			iLocal_96 = 0;
		}
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Local_97) != 0)
	{
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&Local_97);
	}
	if (HUD::DOES_BLIP_EXIST(iLocal_103))
	{
		HUD::REMOVE_BLIP(&iLocal_103);
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

void func_93(var uParam0, int iParam1)
{
	func_94(uParam0, iParam1);
}

void func_94(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && uParam1));
}

