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
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = -1;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 1000;
	var uLocal_30 = 1000;
	var uLocal_31 = 0;
	char* sLocal_32 = 0;
	float fLocal_33 = 0f;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	float fLocal_37 = 0f;
	float fLocal_38 = 0f;
	var uLocal_39 = 0;
	int iLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	float fLocal_43 = 0f;
	float fLocal_44 = 0f;
	float fLocal_45 = 0f;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 6;
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
	int iLocal_77 = 0;
	int iLocal_78 = 0;
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
	int iLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	Blip blLocal_105 = 0;
	int iLocal_106 = 0;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	float fLocal_111 = 0f;
	BOOL bLocal_112 = 0;
	BOOL bLocal_113 = 0;
	BOOL bLocal_114 = 0;
	BOOL bLocal_115 = 0;
	BOOL bLocal_116 = 0;
	int iLocal_117 = 0;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 16;
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
	var uLocal_287 = 0;
	var uLocal_288 = 0;
#endregion

void main() // Position - 0x0 Hash - 0x5D84F89F ^0x5D84F89F
{
	BOOL flag;
	int num;
	int ms;
	int num2;
	int num3;
	int num4;
	var unk;
	var unk2;

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
	sLocal_32 = "NULL";
	fLocal_33 = 0f;
	fLocal_37 = -0.0375f;
	fLocal_38 = 0.17f;
	iLocal_40 = 3;
	fLocal_43 = 80f;
	fLocal_44 = 140f;
	fLocal_45 = 180f;
	iLocal_51 = 1;
	iLocal_52 = 65;
	iLocal_53 = 49;
	iLocal_54 = 64;
	iLocal_77 = HUD::GET_STANDARD_BLIP_ENUM_ID();
	iLocal_78 = HUD::GET_WAYPOINT_BLIP_ENUM_ID();
	uLocal_83 = { 500f, 500f, 500f };
	iLocal_108 = -1;
	fLocal_111 = 0f;
	iLocal_117 = 1;
	flag = false;
	num = 0;
	func_92(&(Global_113648.f_19099), 4);
	func_92(&(Global_113648.f_19099), 256);

	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(82))
		func_91();

	func_90(16);

	while (true)
	{
		flag = !func_89(0, 12);
		ms = 0;
	
		if (flag && num != 1)
			num = 1;
	
		if (num == 2)
		{
			if (func_88(9))
			{
				func_87(&uLocal_118);
				num = 1;
			}
		}
	
		switch (num)
		{
			case 0:
				if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
				{
					num2 = func_86(PLAYER::PLAYER_PED_ID());
				
					if (num2 == 0 || num2 == 2 || num2 == 1)
					{
						func_85();
					
						if (!func_84(Global_113648.f_19099, 64))
							func_82(&(Global_113648.f_19099), 64);
					
						func_81(&uLocal_124);
						num = 1;
						func_79(&uLocal_118);
					}
				}
			
				ms = 100;
				break;
		
			case 1:
				if (func_78(true))
					iLocal_109 = MISC::GET_GAME_TIMER();
			
				if (!func_77() && !Global_97609)
				{
					if (num != 2)
					{
						if (!MISC::IS_MINIGAME_IN_PROGRESS() && !flag && !func_76(5))
						{
							func_73();
						
							if (func_72())
							{
								if (!bLocal_113)
								{
									if (func_70() == 2)
									{
										if (!func_84(Global_113648.f_19099, 1))
										{
											switch (func_69(_("This taxi is too damaged. Repair it, or get a taxi in better condition to be offered or ask for taxi jobs.")))
											{
												case 2:
													func_67(_("This taxi is too damaged. Repair it, or get a taxi in better condition to be offered or ask for taxi jobs."), 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
											
												case 1:
													func_82(&(Global_113648.f_19099), 1);
													break;
											}
										}
									}
									else
									{
										func_92(&(Global_113648.f_19099), 1);
									}
								
									bLocal_113 = true;
								}
							
								if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
								{
									iLocal_106 = 0;
								}
								else if (bLocal_114)
								{
									if (!func_84(Global_113648.f_19099, 16384))
									{
										switch (func_69(_("~s~For another taxi job, press ~INPUT_VEH_HORN~")))
										{
											case 2:
												func_67(_("~s~For another taxi job, press ~INPUT_VEH_HORN~"), 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												func_82(&(Global_113648.f_19099), 16384);
												break;
										}
									}
								}
								else if (!func_84(Global_113648.f_19099, 16))
								{
									if (!bLocal_116)
									{
										switch (func_69(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~")))
										{
											case 2:
												func_67(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~"), 1, 0, 1000, 10000, 7, 0, 0, 0);
												break;
										
											case 1:
												iLocal_110 = MISC::GET_GAME_TIMER();
												bLocal_116 = true;
											
												if (func_66(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~")))
													Global_113648.f_19099.f_22[15] = Global_113648.f_19099.f_22[15] + 1;
											
												if (Global_113648.f_19099.f_22[15] >= 5)
													func_82(&(Global_113648.f_19099), 16);
												break;
										}
									}
								}
							
								if (HUD::DOES_BLIP_EXIST(blLocal_105))
									HUD::REMOVE_BLIP(&blLocal_105);
							
								switch (iLocal_106)
								{
									case 0:
										if (func_70() == 0)
										{
											if (!func_65(&uLocal_118))
												func_64(&uLocal_118);
										
											if (func_65(&uLocal_121))
												func_87(&uLocal_121);
										
											if (func_61(&uLocal_118) > 20f)
											{
												if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED() && func_60())
												{
													iLocal_107 = 9;
													TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "Taxi_Procedural", 24);
													func_59(&uLocal_124, 8, 0, "TaxiDispatch", 0, 1);
													func_58(&uLocal_124, "OJTXAUD", "OJTX_PRO_OFF", 2, 0, 0, 0);
													func_79(&uLocal_118);
													iLocal_106 = 1;
												}
												else if (!func_60())
												{
													MISC::GET_GAME_TIMER() % 1000 < 50;
												}
											}
										}
										break;
								
									case 1:
										if (!func_65(&uLocal_118))
											func_64(&uLocal_118);
									
										if (func_61(&uLocal_118) >= 6f)
										{
											switch (func_69(_("~s~Taxi job offered. To accept, press ~INPUT_VEH_HORN~~s~")))
											{
												case 2:
													func_67(_("~s~Taxi job offered. To accept, press ~INPUT_VEH_HORN~~s~"), 1, 0, 1000, 10000, 7, 0, 0, 0);
													break;
											
												case 1:
													bLocal_112 = true;
													func_79(&uLocal_118);
													iLocal_106 = 2;
													break;
											}
										
											MISC::GET_GAME_TIMER() % 1000 < 50;
										}
										break;
								
									case 2:
										if (!func_65(&uLocal_118))
											func_64(&uLocal_118);
									
										if (func_61(&uLocal_118) > 15f)
										{
											if (!func_84(Global_113648.f_19099, 32))
											{
												func_57(_("~s~The taxi job you were offered has expired. There is only a short time to accept before another driver takes the job. However, more jobs can be accessed by pressing ~INPUT_VEH_HORN~~s~"), -1);
												func_82(&(Global_113648.f_19099), 32);
											}
										
											fLocal_111 = MISC::GET_RANDOM_FLOAT_IN_RANGE(10f, 40f) + func_61(&uLocal_118);
											iLocal_106 = 3;
										}
										else if (bLocal_112)
										{
											if (func_61(&uLocal_118) > 6f)
											{
												bLocal_112 = false;
												HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
											}
										}
										break;
								
									case 3:
										if (!func_65(&uLocal_118))
											func_64(&uLocal_118);
									
										if (func_61(&uLocal_118) > fLocal_111)
										{
											func_87(&uLocal_118);
											iLocal_106 = 0;
										}
										break;
								}
							
								if (GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 86) && !ENTITY::IS_ENTITY_UPSIDEDOWN(PLAYER::PLAYER_PED_ID()) && !Global_32316 && MISC::GET_GAME_TIMER() - iLocal_109 > 3000)
								{
									num3 = func_70();
								
									if (num3 == 0)
									{
										if (iLocal_106 == 0 || iLocal_106 == 3)
										{
											func_81(&uLocal_124);
											iLocal_107 = 9;
											func_35(iLocal_107, &uLocal_99, &uLocal_124, false);
											bLocal_115 = true;
											num = 4;
										}
										else
										{
											HUD::CLEAR_PRINTS();
											HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
										
											if (!func_84(Global_113648.f_19099, 128))
												func_82(&(Global_113648.f_19099), 128);
										
											num = 4;
										}
									
										SCRIPT::REQUEST_SCRIPT(&uLocal_99);
										func_87(&uLocal_118);
										ms = 0;
									}
									else if (num3 == 2)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
											func_57(_("Taxi has too much damage to start a Taxi job."), -1);
									}
									else if (num3 == 3)
									{
										if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
										{
											if (!func_66(_("Taxi jobs are not available while wanted.")))
											{
												if (!func_84(Global_113648.f_19099, 32768))
												{
													func_57(_("Taxi jobs are not available while wanted."), -1);
													func_82(&(Global_113648.f_19099), 32768);
												}
											}
										}
									}
								}
							}
							else
							{
								if (!func_65(&uLocal_121))
								{
									func_64(&uLocal_121);
								}
								else
								{
									if (func_61(&uLocal_121) < 10f)
										MISC::GET_GAME_TIMER() % 1000 < 50;
								
									if (func_61(&uLocal_121) > 10f && iLocal_106 != 0)
										iLocal_106 = 0;
								}
							
								if (func_34(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~")))
									func_30(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~"), 1);
							
								if (func_34(_("~s~Taxi job offered. To accept, press ~INPUT_VEH_HORN~~s~")))
									func_30(_("~s~Taxi job offered. To accept, press ~INPUT_VEH_HORN~~s~"), 1);
							
								if (func_34(_("This taxi is too damaged. Repair it, or get a taxi in better condition to be offered or ask for taxi jobs.")))
									func_30(_("This taxi is too damaged. Repair it, or get a taxi in better condition to be offered or ask for taxi jobs."), 1);
							
								if (func_34(_("~s~For another taxi job, press ~INPUT_VEH_HORN~")))
									func_30(_("~s~For another taxi job, press ~INPUT_VEH_HORN~"), 1);
							
								if (MISC::GET_GAME_TIMER() - iLocal_110 > 60000 && !func_66(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~")) && bLocal_116)
									bLocal_116 = false;
							
								if (bLocal_114)
									bLocal_114 = false;
							
								bLocal_113 = false;
								func_87(&uLocal_118);
							}
						}
					}
				}
				else if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) != 0)
				{
					iLocal_106 = 0;
				}
				break;
		
			case 4:
				if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
					AUDIO::SET_HORN_ENABLED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
			
				if (SCRIPT::HAS_SCRIPT_LOADED(&uLocal_99))
				{
					num4 = func_26(&iLocal_108, 2, 9, false, 0);
				
					if (num4 == 1)
					{
						Global_112703 = 1;
					
						if (bLocal_115)
							num = 5;
						else
							num = 7;
					
						ms = 0;
					}
					else if (num4 == 0)
					{
						iLocal_106 = 0;
						num = 11;
					}
					else
					{
						func_25("PROCESS_TAXI_DBG_SKIP = Scene is loading.", &iLocal_117, 1000);
					}
				}
				break;
		
			case 5:
				TEXT_LABEL_ASSIGN_STRING(&unk, "OJTX_PLRDE1", 24);
				func_24(&unk, true);
				func_58(&uLocal_124, "OJTXAUD", &unk, 8, 0, 0, 0);
				num = 6;
				break;
		
			case 6:
				if (!func_23())
				{
					func_58(&uLocal_124, "OJTXAUD", "OJTX_DIS_JOB", 8, 0, 0, 0);
					num = 7;
				}
				break;
		
			case 7:
				if (!func_23())
				{
					TEXT_LABEL_ASSIGN_STRING(&unk7, "OJTX_ACCEPT", 24);
					func_24(&unk7, true);
					func_81(&uLocal_124);
					func_58(&uLocal_124, "OJTXAUD", &unk7, 8, 0, 0, 0);
					num = 8;
				}
				break;
		
			case 8:
				if (func_72())
				{
					if (!func_23())
					{
						bLocal_114 = false;
					
						if (func_34(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~")))
							func_30(_("~s~While driving a taxi, become available for jobs by pressing ~INPUT_VEH_HORN~"), 1);
					
						iLocal_98 = SYSTEM::START_NEW_SCRIPT(&uLocal_99, 54000);
						SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_99);
					
						if (!func_84(Global_113648.f_19099, 4))
						{
							func_82(&(Global_113648.f_19099), 4);
							VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), true);
						}
					
						func_82(&(Global_113648.f_19099), 256);
						TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "", 24);
						bLocal_115 = false;
						num = 10;
						iLocal_106 = 0;
					}
				}
				else
				{
					if (func_23())
						func_20();
				
					bLocal_114 = false;
					bLocal_115 = false;
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_99);
					func_82(&(Global_113648.f_19099), 256);
					TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "", 24);
					iLocal_106 = 0;
					num = 10;
				}
				break;
		
			case 10:
				if (!SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
				{
					func_92(&(Global_113648.f_19099), 2048);
				
					if (func_84(Global_113648.f_19099, 4))
					{
						func_92(&(Global_113648.f_19099), 4);
						VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), false);
					}
				
					Global_112703 = 0;
					iLocal_107 = -1;
					num = 11;
					ms = 0;
				}
				else if (func_84(Global_113648.f_19099, 1024))
				{
					func_92(&(Global_113648.f_19099), 1024);
					func_13(func_19(iLocal_107), 0, 0);
					bLocal_114 = true;
					func_11(iLocal_107, bLocal_114);
					func_10(1, 0);
					func_7();
				}
				break;
		
			case 11:
				if (func_84(Global_113648.f_19099, 256))
				{
					func_92(&(Global_113648.f_19099), 256);
					func_6(&iLocal_108);
				}
			
				iLocal_108 = -1;
			
				if (!func_5())
				{
					func_10(0, 0);
					func_2();
					TEXT_LABEL_ASSIGN_STRING(&uLocal_99, "", 24);
				
					if (iLocal_98 != 0)
					{
						if (SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
						{
							SCRIPT::TERMINATE_THREAD(iLocal_98);
							iLocal_98 = 0;
						}
					}
				
					func_87(&uLocal_118);
					func_1(0);
					iLocal_106 = 0;
					num = 1;
					ms = 0;
				}
				break;
		
			case 12:
				func_91();
				break;
		
			default:
				func_91();
				break;
		}
	
		SYSTEM::WAIT(ms);
	}

	return;
}

void func_1(int iParam0) // Position - 0x9D7 Hash - 0xFFF39126 ^0xFFF39126
{
	Global_78819 = iParam0;
	Global_78820 = iParam0;
	return;
}

void func_2() // Position - 0x9EB Hash - 0xF4A3B95E ^0x300DC60A
{
	var textLabel;

	if (MISC::IS_XBOX360_VERSION() || func_4())
	{
		NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
	}
	else if (MISC::IS_PS3_VERSION() || func_3())
	{
		TEXT_LABEL_ASSIGN_STRING(&textLabel, _("Playing story"), 24);
		NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
	}

	return;
}

BOOL func_3() // Position - 0xA2D Hash - 0x4C81F065 ^0x26D68D51
{
	return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}

BOOL func_4() // Position - 0xA43 Hash - 0x4C81F065 ^0x60494CEC
{
	return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}

BOOL func_5() // Position - 0xA59 Hash - 0x4228A1C2 ^0x952FE30F
{
	return Global_100720.f_1;
}

void func_6(var uParam0) // Position - 0xA67 Hash - 0x995C9E2 ^0x995C9E2
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

void func_7() // Position - 0xAA4 Hash - 0xD765C186 ^0xD765C186
{
	func_8();
	return;
}

int func_8() // Position - 0xAB1 Hash - 0x9482CBBF ^0x8B17A994
{
	if (func_9(false))
		return 0;

	if (Global_100720.f_8)
		if (Global_100720.f_10 > 0)
			return 0;
	else if (Global_100720.f_10 > 1)
		return 0;

	Global_100720.f_10 = Global_100720.f_10 + 1;
	return 1;
}

BOOL func_9(BOOL bParam0) // Position - 0xAFC Hash - 0x15889021 ^0xE7262364
{
	if (!bParam0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-448212099) > 0)
		return true;

	return IS_BIT_SET(Global_78807, 0);
}

void func_10(int iParam0, int iParam1) // Position - 0xB24 Hash - 0x277DE552 ^0x65283938
{
	Global_100720.f_7 = iParam0;
	Global_100720.f_8 = iParam1;
	return;
}

void func_11(int iParam0, BOOL bParam1) // Position - 0xB3C Hash - 0xA404E89C ^0x5D982F7
{
	func_12();

	if (bParam1)
	{
		Global_113648.f_19099.f_1[iParam0 /*2*/] = 1;
		Global_113648.f_19099.f_1[iParam0 /*2*/].f_1 = 0;
	}
	else
	{
		Global_113648.f_19099.f_1[iParam0 /*2*/] = 0;
		Global_113648.f_19099.f_1[iParam0 /*2*/].f_1 = 1;
	}

	return;
}

void func_12() // Position - 0xB8C Hash - 0xF065CDFD ^0xBC6DB28E
{
	int i;

	for (i = 0; i < 10; i = i + 1)
	{
		Global_113648.f_19099.f_1[i /*2*/].f_1 = 0;
	}

	return;
}

void func_13(int iParam0, int iParam1, int iParam2) // Position - 0xBB7 Hash - 0xEC2439E7 ^0x1B67A713
{
	BOOL flag;

	iParam0 < 0;

	if (iParam0 == 321 || iParam0 > 321)
	{
	}
	else
	{
		func_17(891 + iParam0, 1, -1);
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
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2044299740, 50, 0);
	
		if (iParam0 == 286)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(86701099, 50, 0);
	
		if (iParam0 == 299)
			STATS::PRESENCE_EVENT_UPDATESTAT_INT(-375571184, 50, 0);
	}

	if (flag)
		func_14();

	return;
}

void func_14() // Position - 0xC9D Hash - 0x9F269E94 ^0x9F269E94
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
					STATS::PRESENCE_EVENT_UPDATESTAT_INT(-2122623864, Global_113371, 0);
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

	STATS::STAT_SET_INT(-1055525200, Global_113384, true);
	STATS::STAT_SET_INT(-419750212, Global_113367, true);
	STATS::STAT_SET_INT(1331385274, Global_113385, true);
	STATS::STAT_SET_INT(542355616, Global_113368, true);
	STATS::STAT_SET_INT(1561233577, Global_113386, true);
	STATS::STAT_SET_INT(558499468, Global_113369, true);
	STATS::STAT_SET_INT(-852659719, Global_113387, true);
	STATS::STAT_SET_INT(-20401960, Global_113370, true);
	STATS::STAT_SET_INT(-2122623864, value2, true);
	STATS::STAT_SET_INT(-215705366, Global_113374, true);
	STATS::STAT_SET_INT(-131898641, Global_113390 + Global_113389, true);
	STATS::STAT_SET_INT(-2086369560, Global_113373 + Global_113372, true);
	Global_113391 = (Global_113384 * 100) / Global_113367;
	Global_113393 = ((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
	Global_113392 = ((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
	Global_113394 = ((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
	STATS::STAT_SET_FLOAT(1215094015, Global_113648.f_10196.f_3853, true);
	STATS::STAT_SET_INT(1813094653, Global_113391, true);
	STATS::STAT_SET_INT(-1205712980, Global_113392, true);
	STATS::STAT_SET_INT(480408826, Global_113393, true);

	if (value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853))
		func_16(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));

	if (!DATAFILE::DATAFILE_IS_SAVE_PENDING())
	{
		if (!Global_78558)
		{
			if (func_15() == 2 == false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
			{
				if (NETWORK::NETWORK_IS_CLOUD_AVAILABLE())
					Global_113382 = 0;
			
				if (!Global_63362)
					func_8();
			}
		}
	}

	return;
}

int func_15() // Position - 0x115B Hash - 0x21D64237 ^0x21D64237
{
	return Global_32163;
}

BOOL func_16(int iParam0, int iParam1) // Position - 0x1166 Hash - 0x77E0C72A ^0x80DA2A54
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

void func_17(int iParam0, int iParam1, int iParam2) // Position - 0x11B7 Hash - 0xCF91FBA1 ^0xC4FE4CB6
{
	if (iParam2 == -1)
		iParam2 = func_18();

	unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
	return;
}

int func_18() // Position - 0x11D5 Hash - 0x47FF56D2 ^0x47FF56D2
{
	return Global_1574918;
}

int func_19(int iParam0) // Position - 0x11E1 Hash - 0x38D182EF ^0x38D182EF
{
	int num;

	switch (iParam0)
	{
		case 0:
			num = 199;
			break;
	
		case 1:
			num = 200;
			break;
	
		case 2:
			num = 201;
			break;
	
		case 3:
			num = 202;
			break;
	
		case 4:
			num = 203;
			break;
	
		case 5:
			num = 204;
			break;
	
		case 6:
			num = 205;
			break;
	
		case 7:
			num = 206;
			break;
	
		case 8:
			num = 207;
			break;
	
		case 9:
			break;
	
		default:
			num = 199;
			break;
	}

	return num;
}

void func_20() // Position - 0x1277 Hash - 0xC536DD5 ^0xC536DD5
{
	Global_20591 = 0;
	func_21();
	return;
}

void func_21() // Position - 0x1287 Hash - 0xE32CF1EF ^0xB9A7BEB2
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

Hash func_22() // Position - 0x12DE Hash - 0x9F572D68 ^0xE01B27C4
{
	return -956048545;
}

BOOL func_23() // Position - 0x12EB Hash - 0x152DA0B2 ^0x220E93E9
{
	if (Global_21725 != 0 || AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING())
		return true;

	return false;
}

void func_24(char* sParam0, BOOL bParam1) // Position - 0x130D Hash - 0xD12FB562 ^0x94E54133
{
	int num;

	num = func_86(PLAYER::PLAYER_PED_ID());

	if (num == 0)
		if (bParam1)
			TEXT_LABEL_APPEND_STRING(sParam0, "M", 24);
		else
			TEXT_LABEL_APPEND_STRING(sParam0, "_2", 24);
	else if (num == 2)
		if (bParam1)
			TEXT_LABEL_APPEND_STRING(sParam0, "T", 24);
		else
			TEXT_LABEL_APPEND_STRING(sParam0, "_3", 24);
	else if (num == 1)
		if (bParam1)
			TEXT_LABEL_APPEND_STRING(sParam0, "F", 24);
		else
			TEXT_LABEL_APPEND_STRING(sParam0, "_4", 24);

	return;
}

void func_25(char* sParam0, var uParam1, int iParam2) // Position - 0x137D Hash - 0xA99F8440 ^0x4A58D49E
{
	if (MISC::GET_GAME_TIMER() < *uParam1 + iParam2)
		return;

	*uParam1 = MISC::GET_GAME_TIMER();
	return;
}

int func_26(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x139C Hash - 0x8F9349A ^0xC5C097C1
{
	int i;

	if (iParam1 == 7)
		return 0;

	if (!bParam3)
		if (Global_98159.f_44 == 1)
			return 2;

	if (iParam1 == 0)
	{
		if (func_88(0))
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
		if (!func_28(iParam2))
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
			func_27(uParam0, iParam4);
	}

	return 2;
}

void func_27(var uParam0, int iParam1) // Position - 0x14D3 Hash - 0x6AC97785 ^0x6AC97785
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

BOOL func_28(int iParam0) // Position - 0x1522 Hash - 0xECB6C71B ^0xECB6C71B
{
	return func_29(iParam0, Global_43257);
}

BOOL func_29(int iParam0, int iParam1) // Position - 0x1533 Hash - 0x1FD727E0 ^0x1FD727E0
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

void func_30(char* sParam0, int iParam1) // Position - 0x1714 Hash - 0xEE96521C ^0xE1C73320
{
	int i;
	int j;

	if (Global_112288 && iParam1)
		if (func_66(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT())
			HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/]))
		{
			for (j = i; j <= Global_113648.f_20412.f_145 - 2; j = j + 1)
			{
				func_33(j, j + 1);
			}
		
			func_32(Global_113648.f_20412.f_145 - 1);
			Global_113648.f_20412.f_145 = Global_113648.f_20412.f_145 - 1;
			func_31();
			return;
		}
	}

	return;
}

void func_31() // Position - 0x17C1 Hash - 0xCF8881D1 ^0x40507183
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

void func_32(int iParam0) // Position - 0x18D8 Hash - 0xC3DF914A ^0x8F03428F
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

void func_33(int iParam0, int iParam1) // Position - 0x1972 Hash - 0x812DB4B8 ^0x93F5D8C6
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

BOOL func_34(char* sParam0) // Position - 0x1A82 Hash - 0x486E76BF ^0xD39F7AD6
{
	int i;

	for (i = 0; i < Global_113648.f_20412.f_145; i = i + 1)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/]))
			return true;
	}

	return false;
}

void func_35(int iParam0, char* sParam1, var uParam2, BOOL bParam3) // Position - 0x1ABD Hash - 0xE74F2DB9 ^0xFBB618F0
{
	var unk;
	var unk2;

	if (iParam0 == 0)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_NeedExcitement", 24);
	else if (iParam0 == 1)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_TakeItEasy", 24);
	else if (iParam0 == 2)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_Deadline", 24);
	else if (iParam0 == 3)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_GotYourBack", 24);
	else if (iParam0 == 4)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_TakeToBest", 24);
	else if (iParam0 == 5)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_CutYouIn", 24);
	else if (iParam0 == 6)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_GotYouNow", 24);
	else if (iParam0 == 7)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_ClownCar", 24);
	else if (iParam0 == 8)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_FollowCar", 24);
	else if (iParam0 == 9)
		TEXT_LABEL_ASSIGN_STRING(sParam1, "Taxi_Procedural", 24);

	if (bParam3)
	{
		TEXT_LABEL_ASSIGN_STRING(&unk, func_56(iParam0), 24);
		unk7 = { unk };
		TEXT_LABEL_APPEND_STRING(&unk7, "_1", 24);
		func_81(uParam2);
		func_36(uParam2, "OJTXAUD", &unk, &unk7, 8, 0, 0);
	}

	return;
}

int func_36(var uParam0, char* sParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, int iParam6) // Position - 0x1BA7 Hash - 0xB83D7D0 ^0xB83D7D0
{
	func_55(uParam0, 145, sParam1, iParam5, iParam6, 0);

	if (iParam4 > 7)
		if (iParam4 < 12)
			iParam4 = 7;

	Global_21732 = false;
	Global_21739 = 0;
	Global_21734 = 0;
	Global_22716 = 1;
	Global_22718 = 0;
	Global_22722 = 0;
	TEXT_LABEL_ASSIGN_STRING(&Global_22729, sParam3, 24);
	Global_2883585 = 0;
	return func_37(sParam2, iParam4, false);
}

int func_37(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x1BFB Hash - 0x77297D51 ^0x40DC584A
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
			return 0;
	
		if (func_54(8, -1))
			return 0;
	
		Global_21801 = { Global_21795 };
		func_53();
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
				func_47();
			
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
			
				if (func_46())
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
		
			if (func_45())
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
		
			func_44();
			Global_21735 = bParam2;
		}
	
		Global_21727 = iParam1;
		TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
		Global_20591 = 0;
		func_43();
		func_38();
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
		func_21();
	}

	return 0;
}

void func_38() // Position - 0x1EC9 Hash - 0xF42BEB19 ^0xA29557DA
{
	if (!func_39())
		return;

	if (Global_21731)
	{
		TEXT_LABEL_COPY(&(Global_1977511.f_1), { Global_21344 }, 4);
		Global_1977511 = Global_7568;
		Global_1977511.f_6 = Global_21735;
	}

	return;
}

BOOL func_39() // Position - 0x1F00 Hash - 0x7B74B45F ^0xCE052A5D
{
	if (!Global_262145.f_28878)
		return false;

	if (!Global_78558)
		return false;

	if (PLAYER::PLAYER_ID() == func_42())
		return false;

	if (func_40(PLAYER::PLAYER_ID()))
		return false;

	if (IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7))
		return false;

	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		return false;

	return true;
}

BOOL func_40(Player plParam0) // Position - 0x1F63 Hash - 0x6E46BC72 ^0x6E46BC72
{
	return func_41(plParam0, 20);
}

BOOL func_41(Player plParam0, int iParam1) // Position - 0x1F73 Hash - 0x7CD5054C ^0x870BEA81
{
	return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}

Player func_42() // Position - 0x1F8B Hash - 0x478900E4 ^0x478900E4
{
	return -1;
}

void func_43() // Position - 0x1F94 Hash - 0xEB26B6A8 ^0x5D52FC48
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

void func_44() // Position - 0x1FC5 Hash - 0xCD8A4D28 ^0xCD8A4D28
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

BOOL func_45() // Position - 0x205A Hash - 0xD140D54A ^0xE638D98F
{
	if (Global_20383.f_1 == 1 || Global_20383.f_1 == 0)
		return true;

	return false;
}

BOOL func_46() // Position - 0x2081 Hash - 0x9A999369 ^0x4033F7BF
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

void func_47() // Position - 0x211A Hash - 0x98476CE1 ^0x250FEB7C
{
	if (func_76(14))
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
		Global_20383 = func_48();
	
		if (Global_20383 == 145)
			Global_20383 = 3;
	
		if (Global_78558)
			Global_20383 = 3;
	
		if (Global_20383 > 3)
			Global_20383 = 3;
	}

	return;
}

int func_48() // Position - 0x21BC Hash - 0x3C5423D7 ^0x3C5423D7
{
	func_49();
	return Global_113648.f_2365.f_539.f_4321;
}

void func_49() // Position - 0x21D5 Hash - 0xD1F2D853 ^0xF9F5FD4D
{
	int num;

	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (func_51(Global_113648.f_2365.f_539.f_4321) != ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			num = func_86(PLAYER::PLAYER_PED_ID());
		
			if (func_50(num) && !func_76(14) || Global_112599)
			{
				if (Global_113648.f_2365.f_539.f_4321 != num && func_50(Global_113648.f_2365.f_539.f_4321))
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

BOOL func_50(int iParam0) // Position - 0x22D2 Hash - 0x8907F004 ^0x8907F004
{
	return iParam0 < 3;
}

Hash func_51(int iParam0) // Position - 0x22DE Hash - 0xADCB9755 ^0xADCB9755
{
	if (func_50(iParam0))
		return func_52(iParam0);
	else
		iParam0 != 145;

	return 0;
}

Hash func_52(int iParam0) // Position - 0x2303 Hash - 0xE4CEEC2C ^0xE4CEEC2C
{
	return Global_2028[iParam0 /*29*/];
}

void func_53() // Position - 0x2312 Hash - 0xA5A75755 ^0x610A5F55
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

BOOL func_54(int iParam0, int iParam1) // Position - 0x2369 Hash - 0xA14C4D3F ^0xA6034F77
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

void func_55(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x23A1 Hash - 0xC6B752B2 ^0xC6B752B2
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

char* func_56(int iParam0) // Position - 0x23F7 Hash - 0x6F727E66 ^0xB694D4F5
{
	if (iParam0 == 0)
		return "OJTX_EXC_OFF";
	else if (iParam0 == 1)
		return "OJTX_TIE_OFF";
	else if (iParam0 == 2)
		return "OJTX_DL_OFF";
	else if (iParam0 == 3)
		return "OJTX_GB_OFF";
	else if (iParam0 == 4)
		return "OJTX_TB_OFF";
	else if (iParam0 == 5)
		return "OJTX_CI_OFF";
	else if (iParam0 == 6)
		return "OJTX_GN_OFF";
	else if (iParam0 == 7)
		return "OJTX_CC_OFF";
	else if (iParam0 == 8)
		return "OJTX_FC_OFF";
	else if (iParam0 == 9)
		return "OJTX_PRO_OFF";

	return "";
}

void func_57(char* sParam0, int iParam1) // Position - 0x24A0 Hash - 0xCBB0D91 ^0x21070E5C
{
	HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
	HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, false, true, iParam1);
	return;
}

int func_58(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x24B7 Hash - 0x384540C1 ^0x384540C1
{
	func_55(uParam0, 145, sParam1, iParam4, iParam5, iParam6);

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
	return func_37(sParam2, iParam3, false);
}

void func_59(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x2505 Hash - 0x6C235EE0 ^0x9E57F206
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

BOOL func_60() // Position - 0x25A0 Hash - 0x723E9112 ^0x5DDEA8FE
{
	int gameTimer;

	gameTimer = MISC::GET_GAME_TIMER();

	if (Global_21725 == 0)
		if (gameTimer - Global_22747 > 3000)
			if (AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING() == false)
				return true;
			else
				return false;
		else
			return false;

	return false;
}

float func_61(int* piParam0) // Position - 0x25DF Hash - 0x4CA081DF ^0xE7D9DC6
{
	if (func_65(piParam0))
		if (func_63(piParam0))
			return piParam0->f_2;
		else
			return func_62(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;

	return piParam0->f_1;
}

float func_62(BOOL bParam0) // Position - 0x261B Hash - 0xB0FB4432 ^0x9D798691
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

BOOL func_63(int* piParam0) // Position - 0x2673 Hash - 0x58F53CD ^0x58F53CD
{
	return IS_BIT_SET(*piParam0, 2);
}

void func_64(int* piParam0) // Position - 0x2680 Hash - 0x227D76A6 ^0x227D76A6
{
	if (!func_65(piParam0))
		func_79(piParam0);

	return;
}

BOOL func_65(int* piParam0) // Position - 0x2698 Hash - 0xA8A91C80 ^0xA8A91C80
{
	return IS_BIT_SET(*piParam0, 1);
}

BOOL func_66(char* sParam0) // Position - 0x26A5 Hash - 0xCD6A3595 ^0xB0E86AA0
{
	HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
	return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}

void func_67(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x26B8 Hash - 0x777A75A6 ^0x777A75A6
{
	func_68(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
	return;
}

void func_68(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x26D9 Hash - 0xB3442C6C ^0xE4189982
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
		func_31();
	}

	return;
}

int func_69(char* sParam0) // Position - 0x28AC Hash - 0x3411B367 ^0xD0D08AE8
{
	if (MISC::ARE_STRINGS_EQUAL(sParam0, &Global_112291))
		return 1;

	if (func_34(sParam0))
		return 0;

	return 2;
}

int func_70() // Position - 0x28D3 Hash - 0xEC3BFD4 ^0x51F8919A
{
	Vehicle vehiclePedIsIn;
	int num;
	int entityHealth;

	if (!func_72())
	{
		return 1;
	}
	else
	{
		vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		num = SYSTEM::ROUND(VEHICLE::GET_VEHICLE_ENGINE_HEALTH(vehiclePedIsIn));
		entityHealth = ENTITY::GET_ENTITY_HEALTH(vehiclePedIsIn);
	
		if (num < 100 || entityHealth < 100)
			return 2;
	
		if (!func_71(vehiclePedIsIn))
			return 2;
	
		if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
			return 3;
	}

	return 0;
}

BOOL func_71(Vehicle veParam0) // Position - 0x293F Hash - 0xD083DF13 ^0x1C9D970B
{
	int num;
	int num2;

	num = 0;

	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 0, false))
		num = num + 1;

	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 1, false))
		num = num + 1;

	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 4, false))
		num = num + 1;

	if (!VEHICLE::IS_VEHICLE_TYRE_BURST(veParam0, 5, false))
		num = num + 1;

	if (num < 2)
		return false;

	if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(veParam0)))
	{
		num2 = 0;
	
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 0))
			num2 = num2 + 1;
	
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 1))
			num2 = num2 + 1;
	
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 2))
			num2 = num2 + 1;
	
		if (!VEHICLE::IS_VEHICLE_DOOR_DAMAGED(veParam0, 3))
			num2 = num2 + 1;
	
		if (num2 < 2)
			return false;
	}

	return true;
}

BOOL func_72() // Position - 0x29FB Hash - 0x6B45DBC4 ^0x85A96272
{
	Vehicle vehiclePedIsIn;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			vehiclePedIsIn = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
		
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(vehiclePedIsIn, false))
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(vehiclePedIsIn, -1, false) == PLAYER::PLAYER_PED_ID())
					if (VEHICLE::IS_VEHICLE_MODEL(vehiclePedIsIn, func_22()))
						return true;
		}
	}

	return false;
}

void func_73() // Position - 0x2A52 Hash - 0x9B1893D3 ^0x938D21B5
{
	if (!func_84(Global_113648.f_19099, 8192))
	{
		if (func_72())
		{
			func_82(&(Global_113648.f_19099), 8192);
			func_75();
		}
	}
	else if (!func_72())
	{
		func_92(&(Global_113648.f_19099), 8192);
		func_74();
	}

	return;
}

void func_74() // Position - 0x2AA2 Hash - 0xBA79E7DA ^0x4FBF8C54
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, _("Off"), playersLastVehicle, "TAXI_SOUNDS", false, 0);

	return;
}

void func_75() // Position - 0x2ACB Hash - 0xBA79E7DA ^0x67FDF4B0
{
	Vehicle playersLastVehicle;

	playersLastVehicle = PLAYER::GET_PLAYERS_LAST_VEHICLE();

	if (VEHICLE::IS_VEHICLE_DRIVEABLE(playersLastVehicle, false))
		AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "Radio_On", playersLastVehicle, "TAXI_SOUNDS", false, 0);

	return;
}

BOOL func_76(int iParam0) // Position - 0x2AF4 Hash - 0x937D8816 ^0x937D8816
{
	return Global_43257 == iParam0;
}

BOOL func_77() // Position - 0x2B02 Hash - 0x1CB029D8 ^0x1CB029D8
{
	if (Global_43257 == 15)
		return false;

	return true;
}

BOOL func_78(BOOL bParam0) // Position - 0x2B17 Hash - 0x4917772F ^0x2EE32CC2
{
	if (Global_23131.f_130)
		return false;

	if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_CHARACTER_WHEEL) || !bParam0 && PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_CHARACTER_WHEEL))
		return true;

	if (MISC::IS_PC_VERSION())
	{
		if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL))
			if (!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 167) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 168) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 169))
				return true;
		else if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN))
			if (!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 166) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 168) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 169))
				return true;
		else if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR))
			if (!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 166) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 167) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 169))
				return true;
		else if (PAD::IS_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER))
			if (!GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 166) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 167) && !GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 168))
				return true;
	
		if (!bParam0)
			if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL))
				if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER))
					return true;
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN))
				if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER))
					return true;
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR))
				if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER))
					return true;
			else if (PAD::IS_DISABLED_CONTROL_JUST_RELEASED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MULTIPLAYER))
				if (!PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_MICHAEL) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_FRANKLIN) && !PAD::IS_DISABLED_CONTROL_PRESSED(PLAYER_CONTROL, INPUT_SELECT_CHARACTER_TREVOR))
					return true;
	}

	return false;
}

void func_79(int* piParam0) // Position - 0x2D09 Hash - 0x879BC8E8 ^0x879BC8E8
{
	func_80(piParam0, 0f);
	return;
}

void func_80(int* piParam0, float fParam1) // Position - 0x2D18 Hash - 0xED66BE55 ^0x9F6586C1
{
	piParam0->f_1 = func_62(IS_BIT_SET(*piParam0, 4)) - fParam1;
	MISC::SET_BIT(piParam0, 1);
	MISC::CLEAR_BIT(piParam0, 2);
	piParam0->f_2 = 0f;
	return;
}

void func_81(var uParam0) // Position - 0x2D43 Hash - 0x222E5426 ^0x9C4DD991
{
	int num;
	var unk;

	num = func_86(PLAYER::PLAYER_PED_ID());

	if (num == 0)
	{
		func_59(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
	}
	else if (num == 2)
	{
		func_59(uParam0, 0, PLAYER::PLAYER_PED_ID(), "TREVOR", 0, 1);
	}
	else if (num == 1)
	{
		func_59(uParam0, 0, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
	}
	else
	{
		func_59(uParam0, 0, PLAYER::PLAYER_PED_ID(), "MICHAEL", 0, 1);
		TEXT_LABEL_ASSIGN_STRING(&unk, "Invalid enum passed to Taxi dialogue is: ", 64);
		TEXT_LABEL_APPEND_INT(&unk, num, 64);
	}

	func_59(uParam0, 8, 0, "TaxiDispatch", 0, 1);
	return;
}

void func_82(int iParam0, int iParam1) // Position - 0x2DD0 Hash - 0xF55E891F ^0xF55E891F
{
	func_83(iParam0, iParam1);
	return;
}

void func_83(int iParam0, int iParam1) // Position - 0x2DE0 Hash - 0xF23F5A1A ^0xF23F5A1A
{
	*iParam0 = *iParam0 || iParam1;
	return;
}

BOOL func_84(int iParam0, int iParam1) // Position - 0x2DF1 Hash - 0x178D9C09 ^0x178D9C09
{
	return iParam0 && iParam1 != false;
}

void func_85() // Position - 0x2E00 Hash - 0xA245D28F ^0x30AFA127
{
	int i;

	if (func_84(Global_113648.f_19099, 2048))
	{
		for (i = 0; i <= 10 - 1; i = i + 1)
		{
			Global_113648.f_19099.f_1[0 /*2*/] = 0;
			Global_113648.f_19099.f_1[0 /*2*/].f_1 = 0;
		}
	}

	return;
}

int func_86(Ped pedParam0) // Position - 0x2E4A Hash - 0xAC4E9801 ^0xB379A75F
{
	int i;
	Hash entityModel;

	if (ENTITY::DOES_ENTITY_EXIST(pedParam0))
	{
		entityModel = ENTITY::GET_ENTITY_MODEL(pedParam0);
	
		for (i = 0; i <= 2; i = i + 1)
		{
			if (func_51(i) == entityModel)
				return i;
		}
	}

	return 145;
}

void func_87(var uParam0) // Position - 0x2E87 Hash - 0x4ECF353C ^0xF00161
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
	return;
}

BOOL func_88(int iParam0) // Position - 0x2E9D Hash - 0x3BAB94E9 ^0x3BAB94E9
{
	if (Global_43257 == 15)
		return false;

	if (func_28(iParam0))
		return false;

	return true;
}

BOOL func_89(int iParam0, int iParam1) // Position - 0x2EBF Hash - 0xDEE74A4E ^0xDEE74A4E
{
	BOOL flag;

	if (iParam0 == 11 || iParam0 == -1)
		return false;

	if (iParam1 < 0 || iParam1 >= 32)
		return false;

	flag = IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
	return flag;
}

int func_90(int iParam0) // Position - 0x2F09 Hash - 0xFCBFD2CC ^0x1DBFD43E
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

void func_91() // Position - 0x2F60 Hash - 0x3CAD4FBF ^0x984D0F4A
{
	if (func_84(Global_113648.f_19099, 4))
	{
		func_92(&(Global_113648.f_19099), 4);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(func_22(), false);
	}

	if (func_84(Global_113648.f_19099, 256))
	{
		func_92(&(Global_113648.f_19099), 256);
		func_6(&iLocal_108);
	}

	if (iLocal_98 != 0)
	{
		if (SCRIPT::IS_THREAD_ACTIVE(iLocal_98))
		{
			SCRIPT::TERMINATE_THREAD(iLocal_98);
			iLocal_98 = 0;
		}
	}

	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_99) != 0)
		SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_99);

	if (HUD::DOES_BLIP_EXIST(blLocal_105))
		HUD::REMOVE_BLIP(&blLocal_105);

	SCRIPT::TERMINATE_THIS_THREAD();
	return;
}

void func_92(int iParam0, int iParam1) // Position - 0x2FEC Hash - 0xF55E891F ^0xF55E891F
{
	func_93(iParam0, iParam1);
	return;
}

void func_93(int iParam0, int iParam1) // Position - 0x2FFC Hash - 0x9815F445 ^0x9815F445
{
	*iParam0 = *iParam0 - *iParam0 && iParam1;
	return;
}

