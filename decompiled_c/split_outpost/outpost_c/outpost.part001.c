/*
 * Source: outpost.c
 * Chunk: 1/117
 * Original lines: 1-1180
 * Boundaries: top-level declarations/definitions only
 */

#include "outpost.h"


dword g_HeapContext;
u16 g_AllocatorFlag1;
string s_HeapVersion;
pointer p_AllocStrategyCode;
pointer p_CurrentHeapContext;
u16 p_LastAllocatedBlock;
byte g_AllocFlags;
string s_NewFailedMsg;
pointer p_SmallBlockFreeList;
pointer p_FreeBlockListHead;
undefined DAT_1050_0000;
pointer g_AllocatedBlock_Offset;
pointer g_AllocatedBlock_Segment;
undefined *PTR_DAT_1050_0000_1050_5f3a;
undefined *PTR_DAT_1050_0000_1050_5f36;
undefined *PTR_DAT_1050_0000_1050_5f3e;
pointer p_AllocHook_Default;
pointer p_AllocHook_HighPriority;
pointer p_AllocHook_Critical;
undefined _SHI_INVOKEERRORHANDLER1;
pointer p_GlobalPoolList_Offset;
pointer p_GlobalPoolList_Segment;
pointer p_GlobalPoolDescriptor;
undefined2 _SHI_INVOKEERRORHANDLER1+1;
undefined DAT_1050_1000;
TerminatedCString s_554.bmp_1050_1f77;
pointer p_ErrorHandlerCallback_Segment;
pointer g_HeapRefCount;
TerminatedCString s_199.flc_1050_1c36;
TerminatedCString s_242.flc_1050_1c76;
pointer g_HeapPoolCount;
TerminatedCString s_1034a.bmp_1050_1de7;
pointer g_TaskDI;
undefined *PTR_DAT_1050_0000_1050_5f7e;
pointer g_TaskBX;
pointer g_TaskES;
u16 u16_1050_5f82;
pointer g_TaskDX;
u8 u8_1050_5f87;
pointer g_WinVersion;
undefined *PTR_DAT_1050_0000_1050_5fbc;
pointer g_DosVersion;
undefined *PTR_DAT_1050_0000_1050_5fba;
undefined *PTR_DAT_1050_0000_1050_5fb8;
string s_tile2.bmp_1050_1538;
pointer p_EnvSegment_Base;
pointer p_EnvOffset_Base;
pointer g_TaskStackPointer;
pointer g_TaskSI;
string s__C_FILE_INFO=_1050_5f5c;
pointer PTR_DAT_1050_0000_1050_5f7e;
byte g_LowLevelHandleTable;
pointer PTR_DAT_1050_0000_1050_6202;
pointer g_EnvString_Offset;
pointer g_EnvString_Segment;
pointer p_RuntimeInit_Callback;
undefined PTR_DAT_1050_0000_1050_5fc9;
string s_You_may_not_run_a_turn._The_game_1050_00df;
pointer PTR_DAT_1050_0000_1050_5fd2;
undefined *PTR_DAT_1050_0000_1050_5fd4;
undefined *PTR_DAT_1050_0000_1050_5fc4;
undefined *PTR_DAT_1050_5fc6_1050_5fc2;
string s_New_failed_in_Op::Op->DialogHand_1050_0073;
TerminatedCString s_fem15.wav_1050_263a;
TerminatedCString s_fem37.wav_1050_2716;
TerminatedCString s_fem54.wav_1050_27c0;
TerminatedCString s_<<NMSG>>_1050_63f6;
pointer p_SystemIO_Active;
undefined *PTR_DAT_1050_1000_1050_6066;
undefined PTR_DAT_1050_0000_1050_5f88;
undefined *PTR_DAT_1050_0000_1050_5f78;
int ___EXPORTEDSTUB+1;
undefined ___EXPORTEDSTUB;
TerminatedCString s_\_1050_5fea;
TerminatedCString s_\_1050_5fec;
u16 g_MaxFileHandles;
pointer p_StdOut_Handle;
dword p_StdErr_Handle;
pointer g_FileModeDefault;
pointer g_ActiveFileCount;
pointer p_StdOut_Buffer;
pointer p_StdErr_Buffer;
pointer p_GlobalHandleTable_End;
void *PTR_s_add16.wav_1050_2bdc_1050_30a4;
undefined *PTR_DAT_1050_0000_1050_6064;
u8 u8_1050_6061;
undefined *PTR_DAT_1050_0000_1050_5f7a;
undefined *PTR_s_ed_in_Op_Op_1050_0028_1050_5f8e;
TerminatedCString s_180.flc_1050_1bfe;
TerminatedCString s_A_1050_4202;
string s_ABNORMAL_PROGRAM_TERMINATION_1050_6544;
undefined PTR_DAT_1050_0000_1050_68b2;
undefined *PTR_DAT_1050_0000_1050_68ae;
undefined *PTR_DAT_1050_0000_1050_68b0;
pointer PTR_DAT_1050_0000_1050_68a8;
undefined *PTR_DAT_1050_0000_1050_68aa;
undefined *PTR_DAT_1050_0000_1050_68ac;
undefined u16_1050_5f82;
undefined *PTR_DAT_1050_0000_1050_5f88;
pointer p_GlobalAllocHook_Callback;
pointer p_GlobalAllocHook_Segment;
pointer p_GlobalHandleTable_Base;
pointer p_GlobalHandleTable_Segment;
pointer g_GlobalHandleTable_Size;
pointer g_TimezoneInitialized;
u16 u16_1050_61d2;
pointer g_DSTName_Offset;
u16 g_TimezoneOffset_Low;
pointer g_TimezoneOffset_High;
pointer g_TimezoneName_Offset;
pointer g_TimezoneName_Segment;
dword g_MonthDaysLookupTable;
dword p_StrtokNextToken;
u16 g_RNG_Seed;
pointer g_RNG_Next_Val;
undefined PTR_DAT_1050_0000_1050_0298;
pointer p_SimulatorGlobalState;
pointer p_ResourceManager;
pointer p_GlobalResourceManager;
pointer p_UISubDialogTable;
pointer p_UIMainWindow;
pointer p_UIPanelContainer;
undefined *PTR_DAT_1050_0000_1050_038c;
pointer g_ParentHWND;
undefined *PTR_DAT_1050_0000_1050_02ec;
TerminatedCString s_572.bmp_1050_2007;
TerminatedCString s_0_1050_389e;
TerminatedCString s_Op_1050_00d4;
string s_Outpost_1050_00d7;
TerminatedCString s_1_1050_389a;
undefined *PTR_DAT_1050_0000_1050_4fe8;
pointer p_SimulatorWorldContext;
pointer p_Pool_Type1_Event;
pointer p_Pool_Type2_Component;
pointer p_Pool_Type3_Sprite;
pointer p_Pool_Type4_Timer;
pointer p_Pool_Type5_Entity;
string s_OPPOPMENU_1050_0150;
undefined PTR_DAT_1050_0000_1050_0388;
pointer g_LastFileErrorMsgID;
pointer p_GlobalPaletteObject;
TerminatedCString s_0.76_1050_3aa0;
TerminatedCString s_18.2_1050_3aa5;
TerminatedCString s_0.020_1050_3ab0;
TerminatedCString s_0.000_1050_3b46;
string s_SOLDefaultWindowClass_1050_01fe;
void *PTR_s_92.76_1050_3a8d_1050_3cfc;
string s_SCInternalPutBldg2_site:0x%08lx._1050_5099;
undefined *PTR_DAT_1050_0000_1050_576a;
undefined *PTR_DAT_1050_0000_1050_038e;
undefined *PTR_DAT_1050_0000_1050_0390;
undefined PTR_DAT_1050_0000_1050_0392;
pointer p_Pool_Type6_Node;
string s_%s_%d_1050_573a;
TerminatedCString s_%s_%s!_1050_5bc0;
undefined *PTR_DAT_1050_0000_1050_02a2;
string s_MciSoundWindow_1050_02bd;
string s_MciSound_registerClass_failed_1050_02cc;
u16 u16_1050_02ee;
undefined PTR_DAT_1050_0000_1050_02f0;
TerminatedCString s_MONO2_1050_02f4;
TerminatedCString s__1050_02fa;
string s_DanBrotherton_1050_0302;
undefined *PTR_DAT_1050_0000_1050_0312;
void *PTR_s_SC%03d_1050_0314_1050_031c;
pointer p_SimulatorObjectLibrary;
pointer p_SimulatorTurnManager;
undefined *PTR_g_AllocFlags_1050_0334;
void *PTR_s_dcbSC_1050_0336_1050_033c;
string s_SOLChildPar_1050_0358;
string s_MicroSpinControl_1050_0370;
undefined PTR_p_CurrentHeapContext_1050_0368;
u32 u32_1050_0364;
undefined PTR_DAT_1050_0000_1050_0382;
undefined *PTR_DAT_1050_0000_1050_0388;
undefined *PTR_DAT_1050_0000_1050_038a;
undefined *PTR_DAT_1050_0000_1050_0398;
undefined *PTR_DAT_1050_0000_1050_039a;
undefined *PTR_DAT_1050_0000_1050_039c;
undefined *PTR_DAT_1050_0000_1050_4232;
pointer p_StringPropertyTable;
TerminatedCString s_%s_#%02ld_1050_0cea;
TerminatedCString s_%s_#%02ld_1050_0cf4;
pointer g_ModeVersion_13AE;
undefined PTR_DAT_1050_0000_1050_0df6;
pointer PTR_DAT_1050_0000_1050_038c;
u16 u16_1050_0e28;
undefined *PTR_DAT_1050_0000_1050_0e30;
undefined *PTR_DAT_1050_0000_1050_0ea8;
undefined *PTR_DAT_1050_0000_1050_0e38;
undefined *PTR_DAT_1050_0000_1050_0e40;
undefined *PTR_DAT_1050_0000_1050_0e48;
u16 u16_1050_0e58;
u16 u16_1050_0e60;
undefined *PTR_DAT_1050_0000_1050_0e70;
TerminatedCString s_648.bmp_1050_1919;
u16 g_ReportFilter_0ECC;
TerminatedCString s_35.flc_1050_1b2a;
TerminatedCString s_330.flc_1050_1cfe;
TerminatedCString s_573.bmp_1050_200f;
undefined *PTR_DAT_1050_0000_1050_0ed2;
string s_add16.wav_1050_2bdc;
TerminatedCString s_add39.wav_1050_2cc2;
TerminatedCString s_6.0_1050_3b3d;
TerminatedCString s_40.33_1050_3b5c;
undefined *PTR_DAT_1050_0000_1050_11de;
void *PTR_s_0.000_1050_3bbb_1050_3e2c;
undefined *PTR_DAT_1050_0000_1050_3960;
void *PTR_s_M3_1050_3bc1_1050_3e36;
string s_SCForceMorale_%s_for_colony_%08l_1050_5024;
TerminatedCString s_on_1050_13c4;
TerminatedCString s_off_1050_13c8;
string s_general_1050_13b0;
TerminatedCString s_rez_1050_13c0;
TerminatedCString s_anims_1050_13cc;
string s_music_1050_13d2;
string s_sound_1050_13d8;
string s_falseMap_1050_13de;
string s_movies_1050_13e8;
string s_turns_1050_1466;
string s_turnsDlgStatus_1050_146c;
string s_savePath_1050_147c;
string s_aiName_1050_1486;
string s_playerName_1050_148e;
void *PTR_s_unknown_1050_13fa_1050_1446;
string s_windows_1050_13b8;
undefined *PTR_DAT_1050_0000_1050_14ce;
undefined DAT_1050_63f0;
TerminatedCString s_559.bmp_1050_1f9f;
TerminatedCString s_560.bmp_1050_1fa7;
void *PTR_DAT_1050_24ea_1050_2526;
TerminatedCString s_.wav_1050_14ba;
TerminatedCString s_.mid_1050_14c0;
void *PTR_DAT_1050_25b6_1050_2e34;
TerminatedCString s_male_1050_14c6;
void *PTR_DAT_1050_2482_1050_24be;
pointer p_MapContext_5740;
undefined DAT_1050_63f2;
TerminatedCString s_%lu_1050_381f;
pointer PTR_DAT_1048_0000_1048_3820;
ulong ULONG_1050_358c;
ulong ULONG_1050_362e;
u16 u16_1050_368e;
u16 u16_1050_3706;
ulong ULONG_1050_379c;
ulong ULONG_1050_37ac;
ulong ULONG_1050_37b6;
undefined *PTR_s_NewFailedMsg_1050_393f;
TerminatedCString s__1050_3941;
undefined *PTR_DAT_1050_0000_1050_50ca;
undefined PTR_DAT_1050_0000_1050_3962;
TerminatedCString s_582.bmp_1050_1871;
TerminatedCString s_589.bmp_1050_18a9;
TerminatedCString s_561.bmp_1050_1faf;
TerminatedCString s_568.bmp_1050_1fe7;
undefined DAT_1050_63f4;
void *PTR_s_3.65_1050_39b1_1050_3c1e;
TerminatedCString s_556a.bmp_1050_21e5;
u16 u16_1050_4216;
void *PTR_s_!_1050_41da_1050_421c;
void *PTR_s_A_1050_4202_1050_4220;
void *PTR_DAT_1050_41aa_1050_4228;
TerminatedCString s_fem130.wav_1050_2ad6;
string s_fem132.wav_1050_2aec;
string s_%ld_%s_1050_4150;
string s_%ld_%s_1050_4157;
string s_%ld_%s_1050_415e;
string s_%ld_%s_1050_4165;
undefined *PTR_DAT_1050_0000_1050_416c;
undefined *PTR_DAT_1050_0000_1050_416e;
undefined *PTR_DAT_1050_0000_1050_4170;
string s_SCInternalPutBldg_site:0x%08lx._b_1050_5046;
u16 u16_1050_422e;
u16 u16_1050_422c;
undefined DAT_1050_4172;
undefined DAT_1050_419a;
undefined DAT_1050_5830;
string s_Alloc:%s_1050_5a5b;
undefined *PTR_p_LastAllocatedBlock_1050_4240;
pointer PTR_DAT_1050_0000_1050_5e1a;
TerminatedCString s_%d_1050_4242;
TerminatedCString s_%d_1050_4245;
undefined *PTR_DAT_1050_0000_1050_4254;
string s_VrMode_1050_4260;
string s_PLNTICON_1050_4267;
TerminatedCString s_512.bmp_1050_1e77;
TerminatedCString s_218.bmp_1050_2516;
TerminatedCString s_fem36.wav_1050_270c;
TerminatedCString s_fem51.wav_1050_27a2;
TerminatedCString s_fem74.wav_1050_2888;
string s_VrMode_1050_4286;
string s_New_failed_in_Op::Op->Simulator_1050_0110;
string s_SITEICON_1050_428d;
string s_VrMode_1050_42ca;
string s_OpAccel_1050_43e8;
undefined *PTR_DAT_1050_0000_1050_5a68;
undefined *PTR_DAT_1050_0000_1050_5a6a;
undefined *PTR_DAT_1050_0000_1050_5f0c;
undefined *PTR_DAT_1050_0000_1050_5f0e;
undefined *PTR_DAT_1050_0000_1050_5f16;
undefined *PTR_DAT_1050_0000_1050_5f18;
string s_New_failed_in_Op::Op->Simulator_1050_0130;
string s_OpWnd::getKid->Unknown_target_mo_1050_01a3;
string s_Unsupported_FileStructType_in_Op_1050_01ca;
string s_TILEMENU_1050_43f0;
undefined *PTR_DAT_1050_0000_1050_50cc;
TerminatedCString s_575.bmp_1050_201f;
TerminatedCString s_VrMode2_1050_4404;
string s_TILEICON_1050_440c;
undefined PTR_DAT_1050_0000_1050_441e;
TerminatedCString s_576.bmp_1050_2027;
string s_VrMode_1050_4422;
void *PTR_DAT_1050_4172_1050_4212;
void *PTR_s_O_1050_41b2_1050_4218;
void *PTR_DAT_1050_419a_1050_4224;
undefined *PTR_DAT_1050_0000_1050_4e74;
undefined PTR_DAT_1050_0000_1050_4e70;
undefined PTR_DAT_1048_0000_1048_4230;
undefined *PTR_DAT_1048_0000_1048_4234;
TerminatedCString s_dib_1050_4234;
undefined PTR_DAT_1050_0000_1050_4e74;
undefined *PTR_DAT_1050_0000_1050_4e78;
string s_bidLRoadConst_1050_4e7a;
string s_bidRRoadConst_1050_4e88;
string s_bidXRoadConst_1050_4e96;
pointer PTR_DAT_1050_0000_1050_5b80;
TerminatedCString s_480.bmp_1050_1721;
undefined *PTR_DAT_1050_0000_1050_4fbc;
pointer PTR_DAT_1050_0000_1050_4fbc;
TerminatedCString s_42.flc_1050_1b54;
TerminatedCString s_526.bmp_1050_1ee7;
string s_fem16.wav_1050_2644;
TerminatedCString s_fem48.wav_1050_2784;
TerminatedCString s_fem123.wav_1050_2a89;
TerminatedCString s_add5.wav_1050_2b73;
undefined *PTR_DAT_1050_0000_1050_574c;
TerminatedCString s_%_1050_446a;
string s_SCInternalPutBldg2_site:0x%08lx._1050_506f;
undefined DAT_1050_581c;
string s_mineToSmelter->no_mines_1050_59df;
string s_thisLo_1050_5bec;
string s_static_1050_5d8b;
TerminatedCString str_1050_5e6f;
string s_New_failed_in_Op::Op->DialogCtr_1050_0053;
string s_SCAddSpew_1050_4fd2;
string s_SCConstruct_1050_4fdc;
string s_SCEndSim_1050_4fea;
string s_SCEvent_1050_4ff4;
string s_SCFactory_1050_5002;
string s_SCFillResources_1050_500c;
TerminatedCString s_SCPop_1050_50f0;
string s_SCPrelimAlloc_1050_50f6;
string s_SCProdSched_1050_5104;
string s_SCPower_1050_5110;
string s_SCRchSched_1050_5118;
string s_SCSetup_1050_5124;
string s_SCStarve_1050_5156;
undefined *PTR_DAT_1050_0000_1050_65e4;
undefined PTR_DAT_1050_0000_1050_5166;
undefined *PTR_DAT_1050_0000_1050_5166;
undefined *PTR_DAT_1050_0000_1050_5168;
TerminatedCString s_462.bmp_1050_1620;
void *PTR_s_463.bmp_1050_1628_1050_17ba;
TerminatedCString s_638.bmp_1050_1a11;
TerminatedCString s_288.flc_1050_1cb6;
TerminatedCString s_579.bmp_1050_203f;
TerminatedCString s_fem92.wav_1050_293c;
void *PTR_s_add51.wav_1050_2d3a_1050_3130;
TerminatedCString s_G1_1050_3af2;
u16 u16_1050_518c;
string s_procLo_1050_5bd0;
undefined *PTR_DAT_1050_0000_1050_574a;
undefined *PTR_DAT_1050_0000_1050_5a66;
undefined *PTR_DAT_1050_0000_1050_5750;
undefined PTR_DAT_1050_0000_1050_5752;
string s_simres.out_1050_5758;
void *PTR_DAT_1050_57c4_1050_580e;
undefined *PTR_DAT_1050_0000_1050_5812;
u16 UNK_0000_0006;
undefined2 UNK_0000_000a;
pointer PTR_DAT_1050_0000_1050_5812;
string s_SCAiInput_1050_5972;
string s_SCKillColony_1050_5990;
string s_SCKillRebelColony_1050_599e;
string s_SCMines_1050_59c6;
string s_SCMorale_1050_59ce;
TerminatedCString s_198.flc_1050_1c2e;
string s_SCMove_1050_59d8;
TerminatedCString s_fem110.wav_1050_29fa;
string s_SCRoboMove_1050_59f8;
undefined PTR_DAT_1050_0000_1050_5a68;
TerminatedCString s_%s_1050_5a6c;
undefined *PTR_DAT_1050_0000_1050_5ef8;
undefined *PTR_DAT_1050_0000_1050_5b64;
undefined *PTR_DAT_1050_0000_1050_5b66;
undefined *PTR_DAT_1050_0000_1050_5b68;
undefined *PTR_DAT_1050_0000_1050_5b6a;
undefined PTR_DAT_1050_0000_1050_5b78;
undefined PTR_DAT_1050_0000_1050_5b6c;
undefined PTR_DAT_1050_0000_1050_5b70;
undefined PTR_DAT_1050_0000_1050_5b74;
undefined *PTR_DAT_1050_0000_1050_5b82;
undefined *PTR_DAT_1050_0000_1050_5b80;
undefined *PTR_DAT_1050_0000_1050_5bca;
undefined *PTR_DAT_1050_0000_1050_5bcc;
undefined *PTR_DAT_1050_0000_1050_5bce;
undefined PTR_DAT_1050_0000_1050_5bcc;
string s_procHi_1050_5bd7;
string s_thisLo_1050_5bde;
string s_thisHi_1050_5be5;
string s_thisHi_1050_5bf3;
TerminatedCString s_hfont_1050_5bfa;
TerminatedCString s_hfont_1050_5c00;
undefined PTR_DAT_1050_0000_1050_5cd0;
string s_overflow_on_node_%d_1050_11ca;
TerminatedCString s_202.flc_1050_1c46;
TerminatedCString s_%s%s_1050_5cda;
TerminatedCString s_%s%s_1050_5cdf;
TerminatedCString s_alarm-m_1050_2377;
string s_Rebel_1050_4ffc;
TerminatedCString s_hfont_1050_5ced;
TerminatedCString s_fem94.wav_1050_2950;
undefined PTR_DAT_1050_0000_1050_5cf8;
TerminatedCString s_add74.wav_1050_2e20;
pointer PTR_DAT_1050_0000_1050_5d04;
u16 u16_1050_5d06;
undefined *PTR_DAT_1050_0000_1050_5f10;
string s_Null_Ptr_1050_38f3;
TerminatedCString s_%ld_1050_5d3c;
undefined PTR_DAT_1050_0000_1050_5efe;
string s_thisLo_1050_5db1;
string s_thisHi_1050_5db8;
string s_procLo_1050_5dbf;
string s_procHi_1050_5dc6;
TerminatedCString s_hfont_1050_5de9;
undefined PTR_DAT_1050_0000_1050_5df0;
undefined *PTR_DAT_1050_0000_1050_5df8;
dword DWORD_1050_5df4;
TerminatedCString s_hfont_1050_5dfa;
undefined DWORD_1050_5df4;
TerminatedCString s_hfont_1050_5e09;
TerminatedCString s_hfont_1050_5e0f;
undefined PTR_DAT_1050_0000_1050_5e18;
undefined *PTR_DAT_1050_0000_1050_5e16;
string s_thisLo_1050_5e1c;
string s_thisHi_1050_5e23;
string s_procLo_1050_5e2a;
string s_procHi_1050_5e31;
TerminatedCString s_IsDlg_1050_5e38;
string s_thisLo_1050_5e68;
string s_procLo_1050_5e76;
string s_procHi_1050_5e7d;
string s_thisLo_1050_5e84;
string s_thisHi_1050_5e8b;
TerminatedCString s_IsDlg_1050_5e92;
string s_OPButton_1050_5ece;
u32 u32_1050_5ec2;
u32 u32_1050_5ebe;
u16 u16_1050_5eca;
undefined *PTR_DAT_1050_0000_1050_5ecc;
undefined *PTR_p_CurrentHeapContext_1050_5ec6;
u16 u16_1050_5ec8;
pointer PTR_DAT_1050_0000_1050_5ed8;
undefined PTR_DAT_1050_0000_1050_5edc;
undefined *PTR_DAT_1050_0000_1050_5ee0;
undefined *PTR_DAT_1050_0000_1050_5ee2;
undefined *PTR_DAT_1050_0000_1050_5eda;
pointer PTR_DAT_1050_0000_1050_5ee0;
undefined *PTR_DAT_1050_0000_1050_5ee8;
undefined *PTR_DAT_1050_0000_1050_5eea;
undefined *PTR_DAT_1050_0000_1050_5eec;
undefined *PTR_DAT_1050_0000_1050_5eee;
undefined PTR_DAT_1050_0000_1050_5ef0;
TerminatedCString s_%ld_1050_5ef4;
undefined PTR_DAT_1050_0000_1050_5efa;
undefined *PTR_DAT_1050_0000_1050_5f02;
undefined PTR_DAT_1050_0000_1050_5f04;
undefined PTR_DAT_1050_0000_1050_5f08;
undefined PTR_DAT_1050_0000_1050_5f0c;
undefined PTR_DAT_1050_0000_1050_5f16;
TerminatedCString string_1050_5f12;

// Title:  Outpost is Copyright 1994, Sierra On-Line, Inc. All Rights Reserved.
// Format: New Executable (NE) Windows
// CRC:    00000000
// 
// Program Entry Point (CS:IP):   0001:2300
// Initial Stack Pointer (SS:SP): 000b:0000
// Auto Data Segment Index:       000b
// Initial Heap Size:             1000
// Initial Stack Size:            2800
// Minimum Code Swap Size:        0000
// 
// Linker Version:  5.60
// Target OS:       Windows
// Windows Version: 3.10
// 
// Program Flags:     2a
//         80286
//         Multi Data
//         Protected Mode
// Application Flags: 03
//         Windows P.M. API
// Other Flags:       08
// 

void __cdecl16near memcpy_words_near(void)
{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 *in_AX;
  uint uVar3;
  uint in_DX;
  undefined2 *in_BX;
  
                // Segment:    1
                // Offset:     00000a20
                // Length:     55b7
                // Min Alloc:  55b7
                // Flags:      0d50
                //     Code
                //     Moveable
                //     Preload
                //     Impure (Non-shareable)
                // 
  for (uVar3 = in_DX >> 0x1; uVar3 != 0x0; uVar3 -= 0x1)
  {
    puVar2 = in_BX;
    in_BX = in_BX + 0x1;
    puVar1 = in_AX;
    in_AX = in_AX + 0x1;
    *puVar2 = *puVar1;
  }
  return;
}



long __stdcall16far heap_validate_and_sweep(u32 param_1)
{
  long lVar1;
  u16 local_6;
  u16 local_4;
  
  if (*(int *)((int)param_1 + 0x14) != -0x4153)
  {
    invoke_error_handler();
    return -0x1;
  }
  lVar1 = heap_sweep_free_lists((dword *)&g_HeapContext);
  return lVar1;
}



// AI Note: Performs an indirect call through [in_BX + 0x32], likely a heap-specific
// cleanup or notification callback. References heap context at g_HeapContext
// (1050:1050).

long __cdecl16near heap_sweep_free_lists(void *heap_ctx)
{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_BX;
  int unaff_SI;
  dword *block_descriptor;
  int iStack_e;
  int iStack_c;
  int iStack_a;
  uint uStack_8;
  
  block_descriptor = (dword *)&g_HeapContext;
  uVar1 = *(uint *)(in_BX + 0x1e);
  iVar2 = *(int *)(in_BX + 0x20);
  uStack_8 = 0x0;
  do
  {
    iStack_a = *(int *)(uStack_8 * 0x2 + in_BX);
    if ((iStack_a != 0x0) && (uStack_8 != 0x3))
    {
      iStack_e = 0x0;
      do
      {
        iStack_c = *(int *)(iStack_a + 0x4);
        if (*(int *)((int)*(undefined4 *)(iStack_a + 0x8) + 0xa) == 0x0)
        {
          iVar3 = heap_try_release_block(block_descriptor,unaff_SI);
          if (iVar3 == 0x0) goto LAB_1000_00f9;
          if (iStack_c == iStack_a)
          {
            iStack_c = 0x0;
          }
        }
        else if (iStack_e == 0x0)
        {
          iStack_e = iStack_a;
        }
        iStack_a = iStack_c;
      } while (iStack_c != iStack_e);
    }
    uStack_8 += 0x1;
  } while (uStack_8 < 0x5);
  if (*(int *)(in_BX + 0x32) != 0x0)
  {
    (*(code *)*(undefined2 *)(in_BX + 0x32))();
  }
LAB_1000_00f9:
  return CONCAT22((iVar2 - *(int *)(in_BX + 0x20)) -
                  (uint)(uVar1 < *(uint *)(in_BX + 0x1e)),
                  uVar1 - *(uint *)(in_BX + 0x1e));
}



// AI Note: Reserves bytes in the heap context. Initializes heap context far pointer to
// g_HeapContext (1050:1050). Uses g_HeapStatus (1050:5f30) and references s_HeapVersion
// (1050:0012).

long __stdcall16far
heap_reserve_bytes(int param_1,uint param_2,uint param_3,undefined4 param_4)
{
  undefined2 uVar1;
  bool bVar2;
  long lVar3;
  dword *heap_ctx;
  uint bucket_index;
  uint uStack_6;
  
  uStack_6 = 0x0;
  bucket_index = 0x0;
  uVar1 = (undefined2)((ulong)param_4 >> 0x10);
  if (*(int *)((int)param_4 + 0x14) != -0x4153)
  {
code_r0x10000128:
    invoke_error_handler();
    return -0x1;
  }
  g_AllocatorFlag1 = 0x1;
  if (param_1 == 0x1)
  {
    if (*(int *)((int)param_4 + 0x18) == 0x0) goto code_r0x10000128;
  }
  else if ((param_1 != 0x2) && (param_1 != 0x4))
  {
    g_AllocatorFlag1 = 0x1;
    return -0x1;
  }
  heap_ctx = (dword *)&g_HeapContext;
  while ((uStack_6 <= param_3 &&
         (((uStack_6 < param_3 || (bucket_index < param_2)) &&
          (lVar3 = heap_alloc_block((ulong)*(uint *)((char *)s_HeapVersion + 0x8),
                                    heap_ctx,bucket_index), lVar3 != 0x0)))))
  {
    bVar2 = CARRY2(bucket_index,*(uint *)((char *)s_HeapVersion + 0x8));
    bucket_index += *(uint *)((char *)s_HeapVersion + 0x8);
    uStack_6 += bVar2;
  }
  return CONCAT22(uStack_6,bucket_index);
}



// AI Note: Extends the heap free list. Performs memory block queries and uses
// g_HeapContext (1050:1050) for allocations. Implements 16-bit far pointer logic for
// segment-relative addressing.

int __cdecl16near heap_extend_free_list(void *heap_ctx)
{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  void *in_BX;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  uint uStack_e;
  uint uStack_c;
  int iStack_a;
  uint uStack_6;
  int iStack_4;
  
  uStack_e = 0x0;
  if (*(int *)((int)in_BX + 0x40) == 0x0 && *(int *)((int)in_BX + 0x3e) == 0x0)
  {
    uVar4 = (int)in_BX + 0x36;
    lVar7 = query_global_memory_block(in_BX);
    lVar8 = lVar7;
  }
  else
  {
    lVar7 = query_global_memory_block(in_BX);
    uVar4 = (uint)lVar7;
    if (((int)((ulong)lVar7 >> 0x10) != 0x0) || (0xffef < uVar4))
    {
      invoke_error_handler();
      return 0x0;
    }
    if (0x1fff < uVar4)
    {
      uVar4 = 0x2000;
    }
    while( true )
    {
      lVar8 = lVar7 + (ulong)uVar4;
      if (((int)((ulong)lVar8 >> 0x10) != 0x0) || (0xfff0 < (uint)lVar8))
      {
        lVar8 = 0xfff0;
      }
      iVar2 = heap_try_alloc_block
                        (*(uint *)((int)in_BX + 0x16) | 0x1000,
                         CONCAT22(in_BX,(int)((ulong)lVar8 >> 0x10)),
                         (dword *)&g_HeapContext);
      iStack_4 = (int)((ulong)lVar7 >> 0x10);
      uStack_6 = (uint)lVar7;
      if (iVar2 != 0x0) break;
      uVar4 >>= 0x1;
      if (uVar4 < 0xc)
      {
        uVar4 *= 0x2;
        invoke_error_handler();
        if (iVar2 == 0x0)
        {
          return (uint)(*(int *)((int)in_BX + 0xa) != 0x0);
        }
        lVar7 = query_global_memory_block(in_BX);
      }
    }
    lVar6 = div_u32_u32_standard
                      (CONCAT22(iStack_4 - (uint)(uStack_6 < 0x42),uStack_6 - 0x42),0xc)
    ;
    uVar4 = (int)in_BX + (int)lVar6 * 0xc + 0x42;
  }
  puVar1 = (uint *)((int)in_BX + 0x1e);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 - (uint)lVar7;
  *(int *)((int)in_BX + 0x20) =
       (*(int *)((int)in_BX + 0x20) - (int)((ulong)lVar7 >> 0x10)) -
       (uint)(uVar3 < (uint)lVar7);
  if (uVar4 != 0x0)
  {
    uVar10 = 0x0;
    uVar9 = 0xc;
    lVar8 = query_global_memory_block(in_BX);
    lVar7 = div_u32_u32_standard
                      (CONCAT22((int)((ulong)lVar8 >> 0x10) - (uint)((uint)lVar8 < 0x42)
                                ,(uint)lVar8 - 0x42),CONCAT22(uVar10,uVar9));
    uStack_e = (int)in_BX + (int)lVar7 * 0xc + 0x36;
  }
  iStack_a = (int)((ulong)lVar8 >> 0x10);
  uStack_c = (uint)lVar8;
  puVar1 = (uint *)((int)in_BX + 0x1e);
  uVar3 = *puVar1;
  *puVar1 = *puVar1 + uStack_c;
  *(int *)((int)in_BX + 0x20) =
       *(int *)((int)in_BX + 0x20) + iStack_a + (uint)CARRY2(uVar3,uStack_c);
  uVar3 = *(uint *)((int)in_BX + 0xa);
  do
  {
    uVar5 = uVar4;
    *(uint *)(uVar5 + 0x4) = uVar3;
    uVar3 = uVar5;
    uVar4 = uVar5 + 0xc;
  } while (uVar5 < uStack_e);
  *(uint *)((int)in_BX + 0xa) = uVar5;
  return 0x1;
}



// AI Note: Pops a block from the global free list and moves it to a bucket list
// (circularly linked). Calls heap_extend_free_list (1000:01b0) if the global free list
// is exhausted. Facilitates size-specific block distribution.

void * __cdecl16near heap_pop_free_list_to_bucket(void *heap_ctx,int bucket_index)
{
  void *pvVar1;
  int in_AX;
  int iVar2;
  int in_BX;
  void *unaff_SI;
  int *piVar3;
  
  if ((*(int *)(in_BX + 0xa) == 0x0) &&
     (iVar2 = heap_extend_free_list(unaff_SI), iVar2 == 0x0))
  {
    return NULL;
  }
  pvVar1 = (void *)*(int *)(in_BX + 0xa);
  *(undefined2 *)(in_BX + 0xa) = *(undefined2 *)((int)pvVar1 + 0x4);
  piVar3 = (int *)(in_AX * 0x2 + in_BX);
  if (*piVar3 == 0x0)
  {
    *(int *)((int)pvVar1 + 0x6) = (int)pvVar1;
    *(int *)((int)pvVar1 + 0x4) = (int)pvVar1;
  }
  else
  {
    iVar2 = *piVar3;
    *(int *)((int)pvVar1 + 0x6) = iVar2;
    *(undefined2 *)((int)pvVar1 + 0x4) = *(undefined2 *)(iVar2 + 0x4);
    *(int *)(*(int *)(iVar2 + 0x4) + 0x6) = (int)pvVar1;
    *(int *)(iVar2 + 0x4) = (int)pvVar1;
  }
  *piVar3 = (int)pvVar1;
  return pvVar1;
}



// AI Note: Unlinks a block from its bucket list and pushes it to the global free list
// (in_BX + 10). Performs circularly linked list node removal and global list insertion.
// Reverse of heap_pop_free_list_to_bucket (1000:0308).

void __cdecl16near
heap_push_bucket_to_free_list(void *heap_ctx,void *block_descriptor,int bucket_index)
{
  int in_AX;
  int in_DX;
  int in_BX;
  int *piVar1;
  
  if (*(int *)(in_AX + 0x4) == in_AX)
  {
    *(undefined2 *)(in_BX + in_DX * 0x2) = 0x0;
  }
  else
  {
    *(undefined2 *)(*(int *)(in_AX + 0x6) + 0x4) = *(undefined2 *)(in_AX + 0x4);
    *(undefined2 *)(*(int *)(in_AX + 0x4) + 0x6) = *(undefined2 *)(in_AX + 0x6);
    piVar1 = (int *)(in_DX * 0x2 + in_BX);
    if (*piVar1 == in_AX)
    {
      *piVar1 = *(int *)(in_AX + 0x4);
    }
  }
  *(undefined2 *)(in_AX + 0x4) = *(undefined2 *)(in_BX + 0xa);
  *(int *)(in_BX + 0xa) = in_AX;
  return;
}



// AI Note: Allocates a heap block. Initializes global pointers in segment 1050:
// p_AllocStrategyCode (1050:000c), p_CurrentHeapContext (1050:0002),
// p_LastAllocatedBlock (1050:0004), and g_AllocFlags (1050:000a). Dispatches to
// strategy-specific initialization routines (1000:05b4, etc.).

long heap_alloc_block(long size,void *heap_ctx,int bucket_index)
{
  uint *puVar1;
  uint in_AX;
  uint uVar2;
  void *ptr;
  uint *puVar3;
  byte in_DL;
  uint uVar4;
  void *in_BX;
  long lVar5;
  dword *block_ptr;
  void *heap_ctx_00;
  uint uStack_14;
  
  uVar2 = (uint)size + 0xfff & 0xf000;
  uVar4 = size._2_2_ + (uint)(0xf000 < (uint)size) + *(int *)((int)in_BX + 0x20) +
          (uint)CARRY2(uVar2,*(uint *)((int)in_BX + 0x1e));
  if ((uVar4 < *(uint *)((int)in_BX + 0x28)) ||
     ((uVar4 <= *(uint *)((int)in_BX + 0x28) &&
      (uVar2 + *(uint *)((int)in_BX + 0x1e) <= *(uint *)((int)in_BX + 0x26)))))
  {
    if (in_AX == 0x3)
    {
      uStack_14 = (uint)((byte)(-(uint)((in_DL & 0x1) != 0x0) >> 0x8) & 0x1 | 0x20) <<
                  0x8;
    }
    else
    {
      uStack_14 = 0x1000;
    }
    lVar5 = CONCAT22(in_BX,size._2_2_);
    ptr = (void *)(*(uint *)((int)in_BX + 0x16) | uStack_14);
    heap_set_alloc_params((int)ptr,lVar5);
    if (uVar4 != 0x0 || ptr != NULL)
    {
      heap_ctx_00 = (void *)((ulong)lVar5 >> 0x10);
      puVar3 = heap_pop_free_list_to_bucket(heap_ctx_00,in_AX);
      if (puVar3 != NULL)
      {
        puVar3[0x4] = (uint)ptr;
        puVar3[0x5] = uVar4;
        block_ptr = (dword *)&g_HeapContext;
        *(undefined **)&p_AllocStrategyCode = (undefined *)(in_AX | 0xcad0);
        *NULL = in_BX;
        *(undefined **)&p_CurrentHeapContext = (undefined *)(dword *)&g_HeapContext;
        *(u16 *)&p_LastAllocatedBlock = (u16)puVar3;
        *(undefined2 *)0x6 = (dword *)&g_HeapContext;
        ((byte *)&g_AllocFlags)[0x0] = 0x0;
        ((byte *)&g_AllocFlags)[0x1] = 0x0;
        lVar5 = query_global_memory_block(ptr);
        if (in_AX == 0x1)
        {
          uVar2 = heap_init_strategy1(in_BX);
        }
        else if (in_AX == 0x3)
        {
          uVar2 = heap_alloc_strategy3(block_ptr,(int)heap_ctx_00);
        }
        else
        {
          uVar2 = heap_alloc_strategy2(block_ptr,(int)heap_ctx_00);
        }
        *puVar3 = uVar2;
        puVar3[0x1] = 0x8000;
        size._0_2_ = (uint)lVar5;
        size._2_2_ = (int)((ulong)lVar5 >> 0x10);
        puVar1 = (uint *)((int)heap_ctx_00 + 0x1e);
        uVar2 = *puVar1;
        *puVar1 = *puVar1 + (uint)size;
        *(int *)((int)heap_ctx_00 + 0x20) =
             *(int *)((int)heap_ctx_00 + 0x20) + size._2_2_ +
             (uint)CARRY2(uVar2,(uint)size);
        return CONCAT22(uVar4,ptr);
      }
      heap_free_block(ptr);
    }
  }
  else
  {
    invoke_error_handler();
  }
  return 0x0;
}



// AI Note: Attempts to release a heap block. References g_HeapContext (1050:1050) and
// s_HeapVersion (1050:0012). Uses s_NewFailedMsg (1050:0020) for error reporting.
// Implements boundary checks before calling heap_push_bucket_to_free_list (1000:0368).

int __cdecl16near heap_try_release_block(void *block_descriptor,int bucket_index)
{
  uint *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int in_AX;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *in_BX;
  long lVar8;
  undefined2 uVar9;
  
  iVar2 = *in_BX;
  iVar3 = in_BX[0x1];
  lVar8 = query_global_memory_block(in_BX);
  iVar6 = (int)((ulong)lVar8 >> 0x10);
  uVar5 = (uint)lVar8;
  uVar9 = 0x1050;
  if (in_AX != 0x0)
  {
    uVar7 = (*(int *)(iVar2 + 0x20) - iVar6) - (uint)(*(uint *)(iVar2 + 0x1e) < uVar5);
    if ((uVar7 <= *(uint *)(iVar2 + 0x24)) &&
       ((uVar7 < *(uint *)(iVar2 + 0x24) ||
        (*(uint *)(iVar2 + 0x1e) - uVar5 < *(uint *)(iVar2 + 0x22)))))
    {
      bVar4 = false;
      goto LAB_1000_0595;
    }
  }
  heap_push_bucket_to_free_list((dword *)&g_HeapContext,in_BX,in_AX);
  puVar1 = (uint *)((char *)s_HeapVersion + 0xc);
  uVar7 = *puVar1;
  *puVar1 = *puVar1 - uVar5;
  *(int *)s_NewFailedMsg = (*(int *)s_NewFailedMsg - iVar6) - (uint)(uVar7 < uVar5);
  bVar4 = true;
LAB_1000_0595:
  if (bVar4)
  {
    in_BX[0x6] = 0x0;
    heap_free_block(in_BX);
    return 0x1;
  }
  return 0x0;
}



// AI Note: Initialization routine for heap allocation strategy 3. Sets internal control
// fields (flags, offsets) within the heap structure. Called by heap_alloc_block
// (1000:03c6).

int __cdecl16near heap_alloc_strategy3(void *block_ptr,int flags)
{
  byte in_AL;
  int in_BX;
  
  *(undefined2 *)(in_BX + 0xa) = 0x1;
  *(undefined2 *)(in_BX + 0x8) = 0x668;
  *(byte *)(in_BX + 0x13) = -((in_AL & 0x2) != 0x0) & 0x2;
  *(undefined2 *)(in_BX + 0x10) = 0x0;
  *(undefined2 *)(in_BX + 0xe) = 0x0;
  return 0x0;
}



// AI Note: Allocation routine for large blocks. Retries allocation after calling
// heap_sweep_free_lists (1000:0052) if initial attempt fails. Implements alignment
// (0xF000 mask) and boundary checks before invoking heap_alloc_block (1000:03c6).

long heap_alloc_large(long size,void *heap_ctx)
{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int in_BX;
  void *unaff_SI;
  int unaff_DI;
  long lVar5;
  
  iVar2 = (int)size;
  uVar1 = (int)size + 0x14;
  size += 0x14;
  do
  {
    lVar5 = heap_alloc_block(CONCAT22(size._2_2_,uVar1),unaff_SI,unaff_DI);
    if (lVar5 != 0x0)
    {
      return CONCAT22((int)((ulong)lVar5 >> 0x10),(int)lVar5 + 0x14);
    }
    lVar5 = heap_sweep_free_lists(unaff_SI);
    uVar3 = iVar2 + 0x1013U & 0xf000;
    uVar4 = size._2_2_ + (uint)(0xf000 < uVar1) + *(int *)(in_BX + 0x20) +
            (uint)CARRY2(uVar3,*(uint *)(in_BX + 0x1e));
  } while (((uVar4 <= *(uint *)(in_BX + 0x28)) &&
           ((uVar4 < *(uint *)(in_BX + 0x28) ||
            (uVar3 + *(uint *)(in_BX + 0x1e) <= *(uint *)(in_BX + 0x26))))) &&
          ((uVar3 = (uint)((ulong)lVar5 >> 0x10) | (uint)lVar5, uVar3 != 0x0 ||
           (invoke_error_handler(), uVar3 != 0x0))));
  return 0x0;
}



// AI Note: Attempts to resize a heap block. Uses g_HeapContext (1050:1050) and calls
// heap_try_alloc_block (1000:14f2) or heap_alloc_raw_block (1000:1408). Implements
// error handling and block descriptor updates after successful reallocation.

int heap_try_resize_block(uint param_1,int *param_2)
{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint in_AX;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  int in_DX;
  uint uVar11;
  uint uVar12;
  int *in_BX;
  long lVar13;
  long lVar14;
  
  iVar3 = *in_BX;
  iVar4 = in_BX[0x1];
  lVar13 = query_global_memory_block(in_BX);
  iVar9 = in_DX + (uint)(0xffeb < in_AX);
  uVar6 = -(uint)((param_1 & 0x1) != 0x0) & 0x100 |
          -(uint)((param_1 & 0x4) != 0x0) & 0x400 |
          *(uint *)((int)*(undefined4 *)in_BX + 0x16);
  if (param_2._2_2_ == 0x0 && (int *)param_2 == NULL)
  {
    iVar9 = heap_try_alloc_block
                      (uVar6 | 0x2000,CONCAT22(in_BX,iVar9),(dword *)&g_HeapContext);
    if (iVar9 == 0x0)
    {
      return 0x0;
    }
  }
  else
  {
    iVar5 = in_BX[0x2];
    uVar10 = in_BX[0x3];
    uVar12 = uVar10;
    do
    {
      uVar11 = uVar12;
      piVar7 = (int *)heap_alloc_raw_block
                                (uVar6 | 0x2000,in_AX + 0x14,CONCAT22(in_BX,iVar9),
                                 (dword *)&g_HeapContext);
      uVar12 = uVar11 | (uint)piVar7;
      if (uVar12 != 0x0) break;
      piVar8 = piVar7;
      invoke_error_handler();
    } while (piVar8 != NULL);
    if (uVar11 == 0x0 && piVar7 == NULL)
    {
      ((int *)param_2)[0x1] = 0x0;
      *param_2 = 0x0;
      return 0x0;
    }
    *(undefined2 *)(iVar5 + 0x8) = piVar7;
    *(uint *)(iVar5 + 0xa) = uVar11;
    *param_2 = (int)(piVar7 + 0xa);
    ((int *)param_2)[0x1] = uVar11;
    in_BX = piVar7;
  }
  lVar14 = query_global_memory_block(in_BX);
  uVar10 = (uint)(lVar14 - lVar13);
  puVar1 = (uint *)(iVar3 + 0x1e);
  uVar6 = *puVar1;
  *puVar1 = *puVar1 + uVar10;
  piVar2 = (int *)(iVar3 + 0x20);
  *piVar2 = *piVar2 + (int)((ulong)(lVar14 - lVar13) >> 0x10) +
            (uint)CARRY2(uVar6,uVar10);
  return 0x1;
}



// AI Note: Initialization routine for heap allocation strategy 1. Sets internal bucket
// offsets and flags. Calls heap_init_free_lists (1000:07ac) to prepare the initial
// state.

int heap_init_strategy1(void *heap_ctx)
{
  int in_AX;
  int in_BX;
  int unaff_BP;
  void *unaff_SI;
  
  *(undefined2 *)(in_BX + 0xe) = 0x0;
  *(int *)(in_BX + 0x10) = in_BX + 0x14;
  *(undefined2 *)(in_BX + 0x8) = 0x9a0;
  heap_init_free_lists(unaff_SI,in_AX,unaff_BP);
  return 0x1;
}



// AI Note: Initializes a chain of free blocks within a memory segment. Partitions a
// large block into smaller units of size 'block_size' and links them together. Used
// during heap initialization.

void __cdecl16near heap_init_free_lists(void *heap_ctx,int block_size,int total_size)
{
  undefined2 *puVar1;
  uint in_AX;
  int iVar2;
  int in_DX;
  int in_BX;
  uint uVar3;
  
  puVar1 = (undefined2 *)*(undefined2 *)(in_BX + 0x10);
  *(undefined2 *)(in_BX + 0xe) = puVar1;
  uVar3 = in_DX + (in_BX - (int)puVar1);
  iVar2 = (int)puVar1 + (uVar3 - uVar3 % in_AX);
  *(int *)(in_BX + 0x10) = iVar2;
  while (puVar1 < (undefined2 *)(iVar2 - in_AX))
  {
    *puVar1 = (undefined2 *)((int)puVar1 + in_AX);
    puVar1 = (undefined2 *)((int)puVar1 + in_AX);
  }
  *puVar1 = 0x0;
  return;
}
