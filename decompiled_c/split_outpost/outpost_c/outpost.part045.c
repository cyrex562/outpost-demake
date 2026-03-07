/*
 * Source: outpost.c
 * Chunk: 45/117
 * Original lines: 50583-51778
 * Boundaries: top-level declarations/definitions only
 */




// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __stdcall16far UI_Panel_OnPaint_Movie_Dispatcher_742e(long param_1)
{
  int in_AX;
  
  UI_Component_OnPaint_Handler_Logic_Movie_or_Cleanup(param_1);
  if (PTR_DAT_1050_0000_1050_4254 == NULL)
  {
    media_play_from_resource_id_shorthand
              ((void *)_p_UIPanelContainer,(int)((ulong)_p_UIPanelContainer >> 0x10));
    if (in_AX != 0x0)
    {
      PTR_DAT_1050_0000_1050_4254 = (undefined *)0x1;
    }
  }
  return;
}



// Constructor for UI Control Type 34 (0x22). Initializes base class with resource ID
// 0xBC and state 0xD5.

long __stdcall16far
UI_Control_Type34_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x220000,0xd500bc,param_2,param_3);
  *param_1 = 0xb42a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 54 (0x36). Initializes base class with resource ID
// 0xBD and state 0xCD.

long __stdcall16far
UI_Control_Type54_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x360000,0xcd00bd,param_2,param_3);
  *param_1 = 0x96ea;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 55 (0x37). Initializes base class with resource ID
// 0xBE and state 0x83.

long __stdcall16far
UI_Control_Type55_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x370000,0x8300be,param_2,param_3);
  *param_1 = 0xa9ce;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 56 (0x38). Initializes base class with resource ID
// 0xBF.

long __stdcall16far
UI_Control_Type56_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x380000,0xbf,param_2,param_3);
  *param_1 = 0xbcb2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 58 (0x3A). Initializes base class with resource ID
// 0xC0 and state 0x85.

long __stdcall16far
UI_Control_Type58_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x3a0000,0x8500c0,param_2,param_3);
  *param_1 = 0x9f72;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 59 (0x3B). Initializes base class with 482ms timer
// (0x1E2), resource ID 0xC1 and state 0x86.

long __stdcall16far
UI_Control_Type59_ctor_init_timer1E2
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x3b01e2,0x8600c1,param_2,param_3);
  *param_1 = 0xb256;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 60 (0x3C). Initializes base class with resource ID
// 0xC2 and state 0x87.

long __stdcall16far
UI_Control_Type60_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x3c0000,0x8700c2,param_2,param_3);
  *param_1 = 0x9516;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 61 (0x3D). Initializes base class with resource ID
// 0xC3 and state 0x88.

long __stdcall16far
UI_Control_Type61_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x3d0000,0x8800c3,param_2,param_3);
  *param_1 = 0xa7fa;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 62 (0x3E). Initializes base class with resource ID
// 0xC4.

long __stdcall16far
UI_Control_Type62_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x3e0000,0xc4,param_2,param_3);
  *param_1 = 0xbade;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 63 (0x3F). Initializes base class with resource ID
// 0xC5.

long __stdcall16far
UI_Control_Type63_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x3f0000,0xc5,param_2,param_3);
  *param_1 = 0x9d02;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 64 (0x40). Initializes base class with resource ID
// 0xC6.

long __stdcall16far
UI_Control_Type64_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x400000,0xc6,param_2,param_3);
  *param_1 = 0xafe6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 65 (0x41). Initializes base class with resource ID
// 199 (0xC7) and state 0x8D.

long __stdcall16far
UI_Control_Type65_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x410000,0x8d00c7,param_2,param_3);
  *param_1 = 0xc2ca;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 66 (0x42). Initializes base class with resource ID
// 200 (0xC8).

long __stdcall16far
UI_Control_Type66_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x420000,0xc8,param_2,param_3);
  *param_1 = 0xa58a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 67 (0x43). Initializes base class with resource ID
// 0xC9.

long __stdcall16far
UI_Control_Type67_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x430000,0xc9,param_2,param_3);
  *param_1 = 0xb86e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 68 (0x44). Initializes base class with resource ID
// 0xCC.

long __stdcall16far
UI_Control_Type68_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x440000,0xcc,param_2,param_3);
  *param_1 = 0x9b2e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 69 (0x45). Initializes base class with resource ID
// 0xCD.

long __stdcall16far
UI_Control_Type69_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x450000,0xcd,param_2,param_3);
  *param_1 = 0xae12;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 70 (0x46). Initializes base class with resource ID
// 0xD1 and state 0x92.

long __stdcall16far
UI_Control_Type70_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x460000,0x9200d1,param_2,param_3);
  *param_1 = 0xc0f6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 71 (0x47). Initializes base class with resource ID
// 0xD2.

long __stdcall16far
UI_Control_Type71_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x470000,0xd2,param_2,param_3);
  *param_1 = 0xa3b6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 72 (0x48). Initializes base class with resource ID
// 0xD5.

long __stdcall16far
UI_Control_Type72_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x480000,0xd5,param_2,param_3);
  *param_1 = 0xacda;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 73 (0x49). Initializes base class with resource ID
// 0xD6.

long __stdcall16far
UI_Control_Type73_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x490000,0xd6,param_2,param_3);
  *param_1 = 0xbfbe;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 74 (0x4A). Initializes base class with 500ms timer,
// resource ID 0xD7 and state 0x98.

long __stdcall16far
UI_Control_Type74_ctor_init_timer500
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4a01f4,0x9800d7,param_2,param_3);
  *param_1 = 0xa1e2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 75 (0x4B). Initializes base class with resource ID
// 0xD8 and state 0x99.

long __stdcall16far
UI_Control_Type75_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4b0000,0x9900d8,param_2,param_3);
  *param_1 = 0xb4c6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 76 (0x4C). Initializes base class with resource ID
// 0xD9 and state 0xEE.

long __stdcall16far
UI_Control_Type76_ctor_init_stateEE
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4c0000,0xee00d9,param_2,param_3);
  *param_1 = 0x9786;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 77 (0x4D). Initializes base class with resource ID
// 0xDA and state 0x9C.

long __stdcall16far
UI_Control_Type77_ctor_init_state9C
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4d0000,0x9c00da,param_2,param_3);
  *param_1 = 0xaa6a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 78 (0x4E). Initializes base class with resource ID
// 0xDB and state 0x9D.

long __stdcall16far
UI_Control_Type78_ctor_init_state9D
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4e0000,0x9d00db,param_2,param_3);
  *param_1 = 0xbd4e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 79 (0x4F). Initializes base class with resource ID
// 0xDC and state 0x9E.

long __stdcall16far
UI_Control_Type79_ctor_init_state9E
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x4f0000,0x9e00dc,param_2,param_3);
  *param_1 = 0xa00e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 80 (0x50). Initializes base class with resource ID
// 0xDD.

long __stdcall16far
UI_Control_Type80_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x500000,0xdd,param_2,param_3);
  *param_1 = 0xb2f2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 81 (0x51). Initializes base class with 473ms timer
// (0x1D9) and resource ID 0xDE.

long __stdcall16far
UI_Control_Type81_ctor_init_timer1D9
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5101d9,0xde,param_2,param_3);
  *param_1 = 0x95b2;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 82 (0x52). Initializes base class with resource ID
// 0xDF.

long __stdcall16far
UI_Control_Type82_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x520000,0xdf,param_2,param_3);
  *param_1 = 0xa896;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 83 (0x53). Initializes base class with resource ID
// 0xE0.

long __stdcall16far
UI_Control_Type83_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x530000,0xe0,param_2,param_3);
  *param_1 = 0xbb7a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 85 (0x55). Initializes base class with 484ms timer
// (0x1E4) and resource ID 0xE2.

long __stdcall16far
UI_Control_Type85_ctor_init_timer1E4
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5501e4,0xe2,param_2,param_3);
  *param_1 = 0xb082;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 86 (0x56). Initializes base class with 484ms timer
// (0x1E4) and resource ID 0xE3.

long __stdcall16far
UI_Control_Type86_ctor_init_timer1E4
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5601e4,0xe3,param_2,param_3);
  *param_1 = 0xc366;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 87 (0x57). Initializes base class with 474ms timer
// (0x1DA) and resource ID 0xE4.

long __stdcall16far
UI_Control_Type87_ctor_init_timer1DA
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5701da,0xe4,param_2,param_3);
  *param_1 = 0xa626;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 88 (0x58). Initializes base class with 472ms timer
// (0x1D8) and resource ID 0xE5.

long __stdcall16far
UI_Control_Type88_ctor_init_timer1D8
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5801d8,0xe5,param_2,param_3);
  *param_1 = 0xb90a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 89 (0x59). Initializes base class with resource ID
// 0xE6.

long __stdcall16far
UI_Control_Type89_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x590000,0xe6,param_2,param_3);
  *param_1 = 0x9bca;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 90 (0x5A). Initializes base class with 495ms timer
// (0x1EF) and resource ID 0xE7.

long __stdcall16far
UI_Control_Type90_ctor_init_timer1EF
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5a01ef,0xe7,param_2,param_3);
  *param_1 = 0xaeae;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 91 (0x5B). Initializes base class with resource ID
// 0xE8.

long __stdcall16far
UI_Control_Type91_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5b0000,0xe8,param_2,param_3);
  *param_1 = 0xc192;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 92 (0x5C). Initializes base class with resource ID
// 0xEA.

long __stdcall16far
UI_Control_Type92_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5c0000,0xea,param_2,param_3);
  *param_1 = 0xb736;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 93 (0x5D). Initializes base class with resource ID
// 0xEB.

long __stdcall16far
UI_Control_Type93_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5d0000,0xeb,param_2,param_3);
  *param_1 = 0x99f6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 94 (0x5E). Initializes base class with 486ms timer
// (0x1E6), resource ID 0xEC, and state 0xEE.

long __stdcall16far
UI_Control_Type94_ctor_init_timer1E6_stateEE
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x5e01e6,0xee00ec,param_2,param_3);
  *param_1 = 0xba42;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 95 (0x5F). Initializes base class with 474ms timer
// (0x1DA) and resource ID 0xED.

long __stdcall16far
UI_Control_Type95_ctor_init_timer1DA
          (undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x5f01da,0xed,param_2,param_3);
  *param_1 = 0x9ed6;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 96 (0x60). Initializes base class with resource ID
// 0xEE.

long __stdcall16far
UI_Control_Type96_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x600000,0xee,param_2,param_3);
  *param_1 = 0xb1ba;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 97 (0x61). Initializes base class with resource ID
// 0xEF.

long __stdcall16far
UI_Control_Type97_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic(param_1,0x6101f0,0xef,param_2,param_3);
  *param_1 = 0x947a;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



// Constructor for UI Control Type 98 (0x62). Initializes base class with resource ID
// 0xF0 and state 0xCC.

long __stdcall16far
UI_Control_Type98_ctor_init(undefined2 *param_1,undefined2 param_2,undefined4 param_3)
{
  UI_DanBrotherton_Window_Base_ctor_init_logic
            (param_1,0x6201f7,0xcc00f0,param_2,param_3);
  *param_1 = 0xa75e;
  ((undefined2 *)param_1)[0x1] = 0x1018;
  return (long)param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7DA6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7DEE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7E36_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7E7E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7EC6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F0E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F56_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7F9E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_7FE6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_802E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8076_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_80BE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8106_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_814E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8196_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_81DE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8226_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_826E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_82B6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_82FE_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_8346_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_838E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_83D6_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}



undefined2 * __stdcall16far
UI_Control_Subclass_841E_dtor_Scalar_Deleting(undefined2 *param_1,byte param_2)
{
  undefined2 *ptr;
  undefined2 uVar1;
  
  ptr = (undefined2 *)param_1;
  uVar1 = (undefined2)((ulong)param_1 >> 0x10);
  UI_Control_Sub_dtor_logic(ptr + 0x69);
  *param_1 = 0x380a;
  ptr[0x1] = 0x1008;
  *param_1 = (char *)s_1_1050_389a;
  ptr[0x1] = 0x1008;
  if ((param_2 & 0x1) != 0x0)
  {
    free_if_not_null(ptr);
  }
  return param_1;
}
