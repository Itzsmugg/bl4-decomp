// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f3a1ee FUN_145f3a1ee body=138 status=ok
// SIG undefined FUN_145f3a1ee(void)

code * FUN_145f3a1ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterInfoTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000b8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146488576;
}



// FUNCTION 145f3a278 FUN_145f3a278 body=138 status=ok
// SIG undefined FUN_145f3a278(void)

undefined1 * FUN_145f3a278(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1483fedb8;
}



// FUNCTION 145f3a302 FUN_145f3a302 body=292 status=ok
// SIG undefined FUN_145f3a302(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3a302(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48880) {
    FUN_144b3d300(&DAT_14cb48880);
    if (DAT_14cb48880 == -1) {
      FUN_145f3a570();
      FUN_145f3a426();
      FUN_140db5666(&DAT_14cb487d8,0,&DAT_14cb48770,L"FWaterQuadTreeDebugCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fd0e0,
                    FUN_1483fd080,&LAB_1483fd056,&LAB_1483fd052,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb490d8);
      _DAT_14cb487d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd49);
      _Init_thread_footer(&DAT_14cb48880);
    }
  }
  return &DAT_14cb487d8;
}



// FUNCTION 145f3a426 FUN_145f3a426 body=205 status=ok
// SIG undefined FUN_145f3a426(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3a426(void)

{
  if ((DAT_14cb487d7 & 2) == 0) {
    DAT_14cb487d7 = DAT_14cb487d7 | 2;
    _DAT_14cb48778 = L"FWaterQuadTreeDebugCS";
    _DAT_14cb48790 = FUN_146826540;
    _DAT_14cb48798 = FUN_146825d77;
    _DAT_14cb487a0 = FUN_146825fd6;
    _DAT_14cb487a8 = FUN_1407e02ea;
    _DAT_14cb487b0 = FUN_146826273;
    _DAT_14cb48788 = FUN_1483fd024;
    _DAT_14cb487c8 = 0xffffffff000000e0;
    _DAT_14cb487d0 = 8;
    DAT_14cb487d4 = 0;
    _DAT_14cb487b8 = &LAB_1483fd04e;
    FUN_145f3a4f4();
    FUN_1407e00cc(&DAT_14cb48770);
    return;
  }
  return;
}



// FUNCTION 145f3a4f4 FUN_145f3a4f4 body=123 status=ok
// SIG undefined FUN_145f3a4f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3a4f4(void)

{
  _DAT_14cb49408 = L"BASE";
  DAT_14cb49432 = 4;
  _DAT_14cb49410 = FUN_140b35ae4();
  _DAT_14cb49418 = DAT_14cb48780;
  _DAT_14cb49420 = &LAB_14682652b;
  DAT_14cb48780 = &DAT_14cb49408;
  DAT_14cb487d5 = DAT_14cb487d5 + '\x01';
  _DAT_14cb49428 = 0x100000000;
  if (*(char *)(_DAT_14cb49410 + 100) != '\0') {
    DAT_14cb487d6 = DAT_14cb487d6 + '\x01';
  }
  return;
}



// FUNCTION 145f3a570 FUN_145f3a570 body=261 status=ok
// SIG undefined FUN_145f3a570(void)

void FUN_145f3a570(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb49158) {
    FUN_144b3d300(&DAT_14cb49158);
    if (DAT_14cb49158 == -1) {
      FUN_145f3a676(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x18b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb490d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d249);
      _Init_thread_footer(&DAT_14cb49158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3a676 FUN_145f3a676 body=226 status=ok
// SIG undefined FUN_145f3a676(void)

longlong * FUN_145f3a676(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146488f70;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3a75a FUN_145f3a75a body=136 status=ok
// SIG undefined FUN_145f3a75a(void)

code * FUN_145f3a75a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionResults";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000191;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1484019ee;
}



// FUNCTION 145f3a7e2 FUN_145f3a7e2 body=138 status=ok
// SIG undefined FUN_145f3a7e2(void)

code * FUN_145f3a7e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"WaterZBoundsTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000018e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148401b02;
}



// FUNCTION 145f3a86c FUN_145f3a86c body=138 status=ok
// SIG undefined FUN_145f3a86c(void)

undefined1 * FUN_145f3a86c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x18c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_148401b8c;
}



// FUNCTION 145f3a8f6 FUN_145f3a8f6 body=292 status=ok
// SIG undefined FUN_145f3a8f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3a8f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8580) {
    FUN_144b3d300(&DAT_14cbf8580);
    if (DAT_14cbf8580 == -1) {
      FUN_145f3ab64();
      FUN_145f3aa1a();
      FUN_140db5666(&DAT_14cbf84d8,0,&DAT_14cbf8470,L"FHairProjectionHairDebugCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,2,FUN_149083870,
                    FUN_149083810,FUN_14667ab10,&LAB_14908380c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf8d18);
      _DAT_14cbf84d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421527);
      _Init_thread_footer(&DAT_14cbf8580);
    }
  }
  return &DAT_14cbf84d8;
}



// FUNCTION 145f3aa1a FUN_145f3aa1a body=205 status=ok
// SIG undefined FUN_145f3aa1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3aa1a(void)

{
  if ((DAT_14cbf84d7 & 2) == 0) {
    DAT_14cbf84d7 = DAT_14cbf84d7 | 2;
    _DAT_14cbf8478 = L"FHairProjectionHairDebugCS";
    _DAT_14cbf8490 = FUN_146826540;
    _DAT_14cbf8498 = FUN_146825d77;
    _DAT_14cbf84a0 = FUN_146825fd6;
    _DAT_14cbf84a8 = FUN_1407e02ea;
    _DAT_14cbf84b0 = FUN_146826273;
    _DAT_14cbf8488 = FUN_1490837de;
    _DAT_14cbf84c8 = 0xffffffff000000e0;
    _DAT_14cbf84d0 = 8;
    DAT_14cbf84d4 = 0;
    _DAT_14cbf84b8 = &LAB_149083808;
    FUN_145f3aae8();
    FUN_1407e00cc(&DAT_14cbf8470);
    return;
  }
  return;
}



// FUNCTION 145f3aae8 FUN_145f3aae8 body=123 status=ok
// SIG undefined FUN_145f3aae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3aae8(void)

{
  _DAT_14cbf9118 = L"BASE";
  DAT_14cbf9142 = 4;
  _DAT_14cbf9120 = FUN_140b35ae4();
  _DAT_14cbf9128 = DAT_14cbf8480;
  _DAT_14cbf9130 = &LAB_14682652b;
  DAT_14cbf8480 = &DAT_14cbf9118;
  DAT_14cbf84d5 = DAT_14cbf84d5 + '\x01';
  _DAT_14cbf9138 = 0x100000000;
  if (*(char *)(_DAT_14cbf9120 + 100) != '\0') {
    DAT_14cbf84d6 = DAT_14cbf84d6 + '\x01';
  }
  return;
}



// FUNCTION 145f3ab64 FUN_145f3ab64 body=261 status=ok
// SIG undefined FUN_145f3ab64(void)

void FUN_145f3ab64(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8d98) {
    FUN_144b3d300(&DAT_14cbf8d98);
    if (DAT_14cbf8d98 == -1) {
      FUN_14159ae5a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x52;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8d18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14442759a);
      _Init_thread_footer(&DAT_14cbf8d98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3ac6a FUN_145f3ac6a body=136 status=ok
// SIG undefined FUN_145f3ac6a(void)

code * FUN_145f3ac6a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRootCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490863a0;
}



// FUNCTION 145f3acf2 FUN_145f3acf2 body=138 status=ok
// SIG undefined FUN_145f3acf2(void)

code * FUN_145f3acf2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RootLocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000056;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086316;
}



// FUNCTION 145f3ad7c FUN_145f3ad7c body=138 status=ok
// SIG undefined FUN_145f3ad7c(void)

code * FUN_145f3ad7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Render_HairDeformedFrames";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6c0000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149085f50;
}



// FUNCTION 145f3ae06 FUN_145f3ae06 body=292 status=ok
// SIG undefined FUN_145f3ae06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3ae06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9b00) {
    FUN_144b3d300(&DAT_14cbf9b00);
    if (DAT_14cbf9b00 == -1) {
      FUN_145f3b074();
      FUN_145f3af2a();
      FUN_140db5666(&DAT_14cbf9a58,0,&DAT_14cbf99f0,L"FHairStrandTextureDilationCS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainCS",5,1,
                    FUN_1490926da,FUN_14909267a,&LAB_14667bd00,&LAB_149092676,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa1b0);
      _DAT_14cbf9a58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436b88);
      _Init_thread_footer(&DAT_14cbf9b00);
    }
  }
  return &DAT_14cbf9a58;
}



// FUNCTION 145f3af2a FUN_145f3af2a body=205 status=ok
// SIG undefined FUN_145f3af2a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3af2a(void)

{
  if ((DAT_14cbf9a57 & 2) == 0) {
    DAT_14cbf9a57 = DAT_14cbf9a57 | 2;
    _DAT_14cbf99f8 = L"FHairStrandTextureDilationCS";
    _DAT_14cbf9a10 = FUN_146826540;
    _DAT_14cbf9a18 = FUN_146825d77;
    _DAT_14cbf9a20 = FUN_146825fd6;
    _DAT_14cbf9a28 = FUN_1407e02ea;
    _DAT_14cbf9a30 = FUN_146826273;
    _DAT_14cbf9a08 = FUN_149092648;
    _DAT_14cbf9a48 = 0xffffffff000000e0;
    _DAT_14cbf9a50 = 8;
    DAT_14cbf9a54 = 0;
    _DAT_14cbf9a38 = &LAB_149092672;
    FUN_145f3aff8();
    FUN_1407e00cc(&DAT_14cbf99f0);
    return;
  }
  return;
}



// FUNCTION 145f3aff8 FUN_145f3aff8 body=123 status=ok
// SIG undefined FUN_145f3aff8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3aff8(void)

{
  _DAT_14cbfa518 = L"BASE";
  DAT_14cbfa542 = 4;
  _DAT_14cbfa520 = FUN_140b35ae4();
  _DAT_14cbfa528 = DAT_14cbf9a00;
  _DAT_14cbfa530 = &LAB_14682652b;
  DAT_14cbf9a00 = &DAT_14cbfa518;
  DAT_14cbf9a55 = DAT_14cbf9a55 + '\x01';
  _DAT_14cbfa538 = 0x100000000;
  if (*(char *)(_DAT_14cbfa520 + 100) != '\0') {
    DAT_14cbf9a56 = DAT_14cbf9a56 + '\x01';
  }
  return;
}



// FUNCTION 145f3b074 FUN_145f3b074 body=261 status=ok
// SIG undefined FUN_145f3b074(void)

void FUN_145f3b074(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfa230) {
    FUN_144b3d300(&DAT_14cbfa230);
    if (DAT_14cbfa230 == -1) {
      FUN_145f3b17a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x241;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa1b0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396c5);
      _Init_thread_footer(&DAT_14cbfa230);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3b17a FUN_145f3b17a body=226 status=ok
// SIG undefined FUN_145f3b17a(void)

longlong * FUN_145f3b17a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667c252;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3b25e FUN_145f3b25e body=136 status=ok
// SIG undefined FUN_145f3b25e(void)

code * FUN_145f3b25e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000247;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490957a4;
}



// FUNCTION 145f3b2e6 FUN_145f3b2e6 body=138 status=ok
// SIG undefined FUN_145f3b2e6(void)

code * FUN_145f3b2e6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalTriangleMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000249;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3b370;
}



// FUNCTION 145f3b370 FUN_145f3b370 body=138 status=ok
// SIG undefined FUN_145f3b370(void)

code * FUN_145f3b370(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000248;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3b25e;
}



// FUNCTION 145f3b3fa FUN_145f3b3fa body=292 status=ok
// SIG undefined FUN_145f3b3fa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3b3fa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfab18) {
    FUN_144b3d300(&DAT_14cbfab18);
    if (DAT_14cbfab18 == -1) {
      FUN_145f3b668();
      FUN_145f3b51e();
      FUN_140db5666(&DAT_14cbfaa70,0,&DAT_14cbfaa08,L"FHairClusterCullArgsCS",
                    L"/Engine/Private/HairStrands/HairStrandsClusterCulling.usf",L"Main",5,1,
                    FUN_149097a06,FUN_1490979a6,&LAB_14667c7ae,&LAB_1490979a2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfc8e0);
      _DAT_14cbfaa70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443dcda);
      _Init_thread_footer(&DAT_14cbfab18);
    }
  }
  return &DAT_14cbfaa70;
}



// FUNCTION 145f3b51e FUN_145f3b51e body=205 status=ok
// SIG undefined FUN_145f3b51e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3b51e(void)

{
  if ((DAT_14cbfaa6f & 2) == 0) {
    DAT_14cbfaa6f = DAT_14cbfaa6f | 2;
    _DAT_14cbfaa10 = L"FHairClusterCullArgsCS";
    _DAT_14cbfaa28 = FUN_146826540;
    _DAT_14cbfaa30 = FUN_146825d77;
    _DAT_14cbfaa38 = FUN_146825fd6;
    _DAT_14cbfaa40 = FUN_1407e02ea;
    _DAT_14cbfaa48 = FUN_146826273;
    _DAT_14cbfaa20 = FUN_149097974;
    _DAT_14cbfaa60 = 0xffffffff000000e0;
    _DAT_14cbfaa68 = 8;
    DAT_14cbfaa6c = 0;
    _DAT_14cbfaa50 = &LAB_14909799e;
    FUN_145f3b5ec();
    FUN_1407e00cc(&DAT_14cbfaa08);
    return;
  }
  return;
}



// FUNCTION 145f3b5ec FUN_145f3b5ec body=123 status=ok
// SIG undefined FUN_145f3b5ec(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3b5ec(void)

{
  _DAT_14cbfd588 = L"BASE";
  DAT_14cbfd5b2 = 4;
  _DAT_14cbfd590 = FUN_140b35ae4();
  _DAT_14cbfd598 = DAT_14cbfaa18;
  _DAT_14cbfd5a0 = &LAB_14682652b;
  DAT_14cbfaa18 = &DAT_14cbfd588;
  DAT_14cbfaa6d = DAT_14cbfaa6d + '\x01';
  _DAT_14cbfd5a8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd590 + 100) != '\0') {
    DAT_14cbfaa6e = DAT_14cbfaa6e + '\x01';
  }
  return;
}



// FUNCTION 145f3b668 FUN_145f3b668 body=261 status=ok
// SIG undefined FUN_145f3b668(void)

void FUN_145f3b668(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfc960) {
    FUN_144b3d300(&DAT_14cbfc960);
    if (DAT_14cbfc960 == -1) {
      FUN_145f3b76e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x41;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfc8e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449412);
      _Init_thread_footer(&DAT_14cbfc960);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3b76e FUN_145f3b76e body=226 status=ok
// SIG undefined FUN_145f3b76e(void)

longlong * FUN_145f3b76e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667d034;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3b852 FUN_145f3b852 body=136 status=ok
// SIG undefined FUN_145f3b852(void)

code * FUN_145f3b852(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterGroupIndex";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7a1a;
}



// FUNCTION 145f3b8da FUN_145f3b8da body=138 status=ok
// SIG undefined FUN_145f3b8da(void)

code * FUN_145f3b8da(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDrawArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a7990;
}



// FUNCTION 145f3b964 FUN_145f3b964 body=138 status=ok
// SIG undefined FUN_145f3b964(void)

code * FUN_145f3b964(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWIndirectDispatchArgsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000046;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3b8da;
}



// FUNCTION 145f3b9ee FUN_145f3b9ee body=292 status=ok
// SIG undefined FUN_145f3b9ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3b9ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfc0c0) {
    FUN_144b3d300(&DAT_14cbfc0c0);
    if (DAT_14cbfc0c0 == -1) {
      FUN_145f3bc5c();
      FUN_145f3bb12();
      FUN_140db5666(&DAT_14cbfc018,0,&DAT_14cbfbfb0,L"FGenerateMipCS",
                    L"/Engine/Private/HairStrands/HairStrandsFollicleMask.usf",L"MainCS",5,1,
                    FUN_14909c184,FUN_14909c124,&LAB_14667c940,&LAB_14909c120,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfd2f8);
      _DAT_14cbfc018 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144444753);
      _Init_thread_footer(&DAT_14cbfc0c0);
    }
  }
  return &DAT_14cbfc018;
}



// FUNCTION 145f3bb12 FUN_145f3bb12 body=205 status=ok
// SIG undefined FUN_145f3bb12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3bb12(void)

{
  if ((DAT_14cbfc017 & 2) == 0) {
    DAT_14cbfc017 = DAT_14cbfc017 | 2;
    _DAT_14cbfbfb8 = L"FGenerateMipCS";
    _DAT_14cbfbfd0 = FUN_146826540;
    _DAT_14cbfbfd8 = FUN_146825d77;
    _DAT_14cbfbfe0 = FUN_146825fd6;
    _DAT_14cbfbfe8 = FUN_1407e02ea;
    _DAT_14cbfbff0 = FUN_146826273;
    _DAT_14cbfbfc8 = FUN_14909c0f2;
    _DAT_14cbfc008 = 0xffffffff000000e0;
    _DAT_14cbfc010 = 8;
    DAT_14cbfc014 = 0;
    _DAT_14cbfbff8 = &LAB_14909c11c;
    FUN_145f3bbe0();
    FUN_1407e00cc(&DAT_14cbfbfb0);
    return;
  }
  return;
}



// FUNCTION 145f3bbe0 FUN_145f3bbe0 body=123 status=ok
// SIG undefined FUN_145f3bbe0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3bbe0(void)

{
  _DAT_14cbfda28 = L"BASE";
  DAT_14cbfda52 = 4;
  _DAT_14cbfda30 = FUN_140b35ae4();
  _DAT_14cbfda38 = DAT_14cbfbfc0;
  _DAT_14cbfda40 = &LAB_14682652b;
  DAT_14cbfbfc0 = &DAT_14cbfda28;
  DAT_14cbfc015 = DAT_14cbfc015 + '\x01';
  _DAT_14cbfda48 = 0x100000000;
  if (*(char *)(_DAT_14cbfda30 + 100) != '\0') {
    DAT_14cbfc016 = DAT_14cbfc016 + '\x01';
  }
  return;
}



// FUNCTION 145f3bc5c FUN_145f3bc5c body=261 status=ok
// SIG undefined FUN_145f3bc5c(void)

void FUN_145f3bc5c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfd378) {
    FUN_144b3d300(&DAT_14cbfd378);
    if (DAT_14cbfd378 == -1) {
      FUN_145f3bd62(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x3c2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd2f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449f6f);
      _Init_thread_footer(&DAT_14cbfd378);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3bd62 FUN_145f3bd62 body=226 status=ok
// SIG undefined FUN_145f3bd62(void)

longlong * FUN_145f3bd62(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_14667e1ca;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3be46 FUN_145f3be46 body=136 status=ok
// SIG undefined FUN_145f3be46(void)

code * FUN_145f3be46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SourceMip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000003c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ac3f2;
}



// FUNCTION 145f3bece FUN_145f3bece body=138 status=ok
// SIG undefined FUN_145f3bece(void)

code * FUN_145f3bece(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TargetMip";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000003c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3be46;
}



// FUNCTION 145f3bf58 FUN_145f3bf58 body=138 status=ok
// SIG undefined FUN_145f3bf58(void)

code * FUN_145f3bf58(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3bece;
}



// FUNCTION 145f3bfe2 FUN_145f3bfe2 body=292 status=ok
// SIG undefined FUN_145f3bfe2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3bfe2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2ad18) {
    FUN_144b3d300(&DAT_14cc2ad18);
    if (DAT_14cc2ad18 == -1) {
      FUN_145f3c250();
      FUN_145f3c106();
      FUN_140db5666(&DAT_14cc2ac70,0,&DAT_14cc2ac08,L"FFXFIConvertVelocityCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FSR3ConvertVelocity.usf",L"MainCS",5,1,
                    FUN_149827862,FUN_149827802,&LAB_1498277ea,&LAB_1498277e6,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2c720);
      _DAT_14cc2ac70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14465b898);
      _Init_thread_footer(&DAT_14cc2ad18);
    }
  }
  return &DAT_14cc2ac70;
}



// FUNCTION 145f3c106 FUN_145f3c106 body=205 status=ok
// SIG undefined FUN_145f3c106(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3c106(void)

{
  if ((DAT_14cc2ac6f & 2) == 0) {
    DAT_14cc2ac6f = DAT_14cc2ac6f | 2;
    _DAT_14cc2ac10 = L"FFXFIConvertVelocityCS";
    _DAT_14cc2ac28 = FUN_146826540;
    _DAT_14cc2ac30 = FUN_146825d77;
    _DAT_14cc2ac38 = FUN_146825fd6;
    _DAT_14cc2ac40 = FUN_1407e02ea;
    _DAT_14cc2ac48 = FUN_146826273;
    _DAT_14cc2ac20 = FUN_1498277b8;
    _DAT_14cc2ac60 = 0xffffffff000000e0;
    _DAT_14cc2ac68 = 8;
    DAT_14cc2ac6c = 0;
    _DAT_14cc2ac50 = &LAB_1498277e2;
    FUN_145f3c1d4();
    FUN_1407e00cc(&DAT_14cc2ac08);
    return;
  }
  return;
}



// FUNCTION 145f3c1d4 FUN_145f3c1d4 body=123 status=ok
// SIG undefined FUN_145f3c1d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3c1d4(void)

{
  _DAT_14cc2ca60 = L"BASE";
  DAT_14cc2ca8a = 4;
  _DAT_14cc2ca68 = FUN_140b35ae4();
  _DAT_14cc2ca70 = DAT_14cc2ac18;
  _DAT_14cc2ca78 = &LAB_14682652b;
  DAT_14cc2ac18 = &DAT_14cc2ca60;
  DAT_14cc2ac6d = DAT_14cc2ac6d + '\x01';
  _DAT_14cc2ca80 = 0x100000000;
  if (*(char *)(_DAT_14cc2ca68 + 100) != '\0') {
    DAT_14cc2ac6e = DAT_14cc2ac6e + '\x01';
  }
  return;
}



// FUNCTION 145f3c250 FUN_145f3c250 body=261 status=ok
// SIG undefined FUN_145f3c250(void)

void FUN_145f3c250(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc2c7a0) {
    FUN_144b3d300(&DAT_14cc2c7a0);
    if (DAT_14cc2c7a0 == -1) {
      FUN_145f3c356(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 100;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2c720,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14465da6d);
      _Init_thread_footer(&DAT_14cc2c7a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3c356 FUN_145f3c356 body=226 status=ok
// SIG undefined FUN_145f3c356(void)

longlong * FUN_145f3c356(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_146762dd2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3c43a FUN_145f3c43a body=130 status=ok
// SIG undefined FUN_145f3c43a(void)

undefined1 * FUN_145f3c43a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTexture";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x65;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14982b230;
}



// FUNCTION 145f3c4bc FUN_145f3c4bc body=138 status=ok
// SIG undefined FUN_145f3c4bc(void)

code * FUN_145f3c4bc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3c43a;
}



// FUNCTION 145f3c546 FUN_145f3c546 body=144 status=ok
// SIG undefined FUN_145f3c546(void)

code * FUN_145f3c546(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000068;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14982b1a6;
}



// FUNCTION 145f3c5d6 FUN_145f3c5d6 body=259 status=ok
// SIG undefined FUN_145f3c5d6(void)

ulonglong FUN_145f3c5d6(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  bool bVar9;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar7 = (int)plVar3[1];
    do {
      if (iVar7 == 0) goto LAB_145f3c6a4;
      LOCK();
      iVar6 = (int)plVar3[1];
      bVar9 = iVar7 == iVar6;
      if (bVar9) {
        *(int *)(plVar3 + 1) = iVar7 + 1;
        iVar6 = iVar7;
      }
      iVar7 = iVar6;
      UNLOCK();
    } while (!bVar9);
    lVar4 = *(longlong *)(param_1 + 0x18);
    if (lVar4 != 0) {
      iVar7 = *(int *)(param_1 + 0x30);
      pcVar5 = *(code **)(param_1 + 0x28);
      local_30 = *param_3;
      local_28 = param_3[1];
      if (local_28 != 0) {
        LOCK();
        *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
        UNLOCK();
      }
      (*pcVar5)(lVar4 + iVar7,param_2,&local_30);
      LOCK();
      plVar1 = plVar3 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_145f3c657;
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
LAB_145f3c6a4:
  uVar8 = 0;
LAB_145f3c657:
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 145f3c6da FUN_145f3c6da body=66 status=ok
// SIG undefined FUN_145f3c6da(void)

void FUN_145f3c6da(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(bool *)(param_1 + 0x68) = param_4 == 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  plVar3 = *(longlong **)(param_3 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145f3c718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 145f3c71c FUN_145f3c71c body=96 status=ok
// SIG undefined FUN_145f3c71c(void)

ulonglong FUN_145f3c71c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145f3c76d:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_145f3c76d;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
    }
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 145f3c77c FUN_145f3c77c body=9 status=ok
// SIG undefined FUN_145f3c77c(void)

void FUN_145f3c77c(longlong param_1)

{
  FUN_145f3c786(param_1 + 0x10);
  return;
}



// FUNCTION 145f3c786 FUN_145f3c786 body=121 status=ok
// SIG undefined FUN_145f3c786(void)

void FUN_145f3c786(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  FUN_1449db362(param_1 + 0x10);
  plVar3 = *(longlong **)(param_1 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000145f3c7fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 145f3c800 FUN_145f3c800 body=132 status=ok
// SIG undefined FUN_145f3c800(void)

void FUN_145f3c800(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 145f3c886 thunk_FUN_15751969b body=5 status=ok
// SIG undefined thunk_FUN_15751969b(void)

void thunk_FUN_15751969b(void)

{
  return;
}



// FUNCTION 145f3cab6 FUN_145f3cab6 body=118 status=ok
// SIG undefined FUN_145f3cab6(void)

longlong * FUN_145f3cab6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x3a0);
  if ((((lVar2 == 0) || (lVar1 = FUN_140c13176(), lVar1 == 0)) ||
      (*(int *)(lVar2 + 0x38) < *(int *)(lVar1 + 0x38))) ||
     ((*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) !=
       lVar1 + 0x30 || (lVar2 = *(longlong *)(param_1 + 0x3a0), lVar2 == 0)))) {
    lVar2 = FUN_140c13176();
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return param_2;
    }
  }
  else {
    *param_2 = lVar2;
  }
  if (DAT_14c950c29 != '\0') {
    FUN_1456cec3c(lVar2);
  }
  return param_2;
}



// FUNCTION 145f3cb2c FUN_145f3cb2c body=162 status=ok
// SIG undefined FUN_145f3cb2c(void)

void FUN_145f3cb2c(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar7 = uVar5 * 0x10 + -8;
    uVar8 = uVar5;
    while (((*(int *)(*param_1 + lVar7) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar7), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_145f3cbb9;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_145f3cbb9:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 145f3cbce FUN_145f3cbce body=292 status=ok
// SIG undefined FUN_145f3cbce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3cbce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b66e0) {
    FUN_144b3d300(&DAT_14c9b66e0);
    if (DAT_14c9b66e0 == -1) {
      FUN_145f3ce3c();
      FUN_145f3ccf2();
      FUN_140db5666(&DAT_14c9b6638,0,&DAT_14c9b65d0,L"FCapsuleShadowingCS",
                    L"/Engine/Private/CapsuleShadowShaders.usf",L"CapsuleShadowingCS",5,0xf,
                    FUN_1471343bc,FUN_14713435c,&LAB_142b80e26,&LAB_142b80e22,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b80c0);
      _DAT_14c9b6638 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b80e29);
      _Init_thread_footer(&DAT_14c9b66e0);
    }
  }
  return &DAT_14c9b6638;
}



// FUNCTION 145f3ccf2 FUN_145f3ccf2 body=205 status=ok
// SIG undefined FUN_145f3ccf2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3ccf2(void)

{
  if ((DAT_14c9b6637 & 2) == 0) {
    DAT_14c9b6637 = DAT_14c9b6637 | 2;
    _DAT_14c9b65d8 = L"FCapsuleShadowingCS";
    _DAT_14c9b65f0 = FUN_146826540;
    _DAT_14c9b65f8 = FUN_146825d77;
    _DAT_14c9b6600 = FUN_146825fd6;
    _DAT_14c9b6608 = FUN_1407e02ea;
    _DAT_14c9b6610 = FUN_146826273;
    _DAT_14c9b65e8 = FUN_14713432e;
    _DAT_14c9b6628 = 0xffffffff000000e0;
    _DAT_14c9b6630 = 8;
    DAT_14c9b6634 = 0;
    _DAT_14c9b6618 = &LAB_147134358;
    FUN_145f3cdc0();
    FUN_1407e00cc(&DAT_14c9b65d0);
    return;
  }
  return;
}



// FUNCTION 145f3cdc0 FUN_145f3cdc0 body=123 status=ok
// SIG undefined FUN_145f3cdc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3cdc0(void)

{
  _DAT_14c9bfee0 = L"BASE";
  DAT_14c9bff0a = 4;
  _DAT_14c9bfee8 = FUN_140b35ae4();
  _DAT_14c9bfef0 = DAT_14c9b65e0;
  _DAT_14c9bfef8 = &LAB_14682652b;
  DAT_14c9b65e0 = &DAT_14c9bfee0;
  DAT_14c9b6635 = DAT_14c9b6635 + '\x01';
  _DAT_14c9bff00 = 0x100000000;
  if (*(char *)(_DAT_14c9bfee8 + 100) != '\0') {
    DAT_14c9b6636 = DAT_14c9b6636 + '\x01';
  }
  return;
}



// FUNCTION 145f3ce3c FUN_145f3ce3c body=261 status=ok
// SIG undefined FUN_145f3ce3c(void)

void FUN_145f3ce3c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b8140) {
    FUN_144b3d300(&DAT_14c9b8140);
    if (DAT_14c9b8140 == -1) {
      FUN_14159b2bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0xc3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b80c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b8f69e);
      _Init_thread_footer(&DAT_14c9b8140);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3cf42 FUN_145f3cf42 body=138 status=ok
// SIG undefined FUN_145f3cf42(void)

code * FUN_145f3cf42(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CosFadeStartAngle";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147138fae;
}



// FUNCTION 145f3cfcc FUN_145f3cfcc body=138 status=ok
// SIG undefined FUN_145f3cfcc(void)

code * FUN_145f3cfcc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LightAngleAndNormalThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x90000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471391d6;
}



// FUNCTION 145f3d056 FUN_145f3d056 body=138 status=ok
// SIG undefined FUN_145f3d056(void)

code * FUN_145f3d056(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScissorRectMinAndSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713914c;
}



// FUNCTION 145f3d0e0 FUN_145f3d0e0 body=205 status=ok
// SIG undefined FUN_145f3d0e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3d0e0(void)

{
  if ((DAT_14c9b6df7 & 2) == 0) {
    DAT_14c9b6df7 = DAT_14c9b6df7 | 2;
    _DAT_14c9b6d98 = L"FAmbientOcclusionSetupPS";
    _DAT_14c9b6db0 = FUN_146826540;
    _DAT_14c9b6db8 = FUN_146825d77;
    _DAT_14c9b6dc0 = FUN_146825fd6;
    _DAT_14c9b6dc8 = FUN_1407e02ea;
    _DAT_14c9b6dd0 = FUN_146826273;
    _DAT_14c9b6da8 = FUN_147134d62;
    _DAT_14c9b6de8 = 0xffffffff000000e0;
    _DAT_14c9b6df0 = 8;
    DAT_14c9b6df4 = 0;
    _DAT_14c9b6dd8 = &LAB_147134d8c;
    FUN_145f3d1ae();
    FUN_1407e00cc(&DAT_14c9b6d90);
    return;
  }
  return;
}



// FUNCTION 145f3d1ae FUN_145f3d1ae body=123 status=ok
// SIG undefined FUN_145f3d1ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3d1ae(void)

{
  _DAT_14c9c0080 = L"BASE";
  DAT_14c9c00aa = 4;
  _DAT_14c9c0088 = FUN_140b35ae4();
  _DAT_14c9c0090 = DAT_14c9b6da0;
  _DAT_14c9c0098 = &LAB_14682652b;
  DAT_14c9b6da0 = &DAT_14c9c0080;
  DAT_14c9b6df5 = DAT_14c9b6df5 + '\x01';
  _DAT_14c9c00a0 = 0x100000000;
  if (*(char *)(_DAT_14c9c0088 + 100) != '\0') {
    DAT_14c9b6df6 = DAT_14c9b6df6 + '\x01';
  }
  return;
}



// FUNCTION 145f3d22a FUN_145f3d22a body=226 status=ok
// SIG undefined FUN_145f3d22a(void)

longlong * FUN_145f3d22a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462b8950;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3d30e FUN_145f3d30e body=138 status=ok
// SIG undefined FUN_145f3d30e(void)

undefined1 * FUN_145f3d30e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x208;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14713aaaa;
}



// FUNCTION 145f3d398 FUN_145f3d398 body=138 status=ok
// SIG undefined FUN_145f3d398(void)

code * FUN_145f3d398(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"InputExtentInverse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1580000020e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14713a548;
}



// FUNCTION 145f3d422 FUN_145f3d422 body=144 status=ok
// SIG undefined FUN_145f3d422(void)

code * FUN_145f3d422(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14482e3b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000209;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f3d30e;
}



// FUNCTION 145f3d4b2 FUN_145f3d4b2 body=292 status=ok
// SIG undefined FUN_145f3d4b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3d4b2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c14f8) {
    FUN_144b3d300(&DAT_14c9c14f8);
    if (DAT_14c9c14f8 == -1) {
      FUN_145f3d720();
      FUN_145f3d5d6();
      FUN_140db5666(&DAT_14c9c1450,0,&DAT_14c9c13e8,L"FPostProcessEdgeDetectionPSApplyFalse",
                    L"/Engine/Private/PostProcessEdgeDetection.usf",L"PixelShaderMainCombine",3,1,
                    FUN_147144820,FUN_1471447c0,&LAB_1471447a8,&LAB_1471447a4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c3fe8);
      _DAT_14c9c1450 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba19ff);
      _Init_thread_footer(&DAT_14c9c14f8);
    }
  }
  return &DAT_14c9c1450;
}



// FUNCTION 145f3d5d6 FUN_145f3d5d6 body=205 status=ok
// SIG undefined FUN_145f3d5d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3d5d6(void)

{
  if ((DAT_14c9c144f & 2) == 0) {
    DAT_14c9c144f = DAT_14c9c144f | 2;
    _DAT_14c9c13f0 = L"FPostProcessEdgeDetectionPSApplyFalse";
    _DAT_14c9c1408 = FUN_146826540;
    _DAT_14c9c1410 = FUN_146825d77;
    _DAT_14c9c1418 = FUN_146825fd6;
    _DAT_14c9c1420 = FUN_1407e02ea;
    _DAT_14c9c1428 = FUN_146826273;
    _DAT_14c9c1400 = FUN_147144776;
    _DAT_14c9c1440 = 0xffffffff000000e0;
    _DAT_14c9c1448 = 8;
    DAT_14c9c144c = 0;
    _DAT_14c9c1430 = &LAB_1471447a0;
    FUN_145f3d6a4();
    FUN_1407e00cc(&DAT_14c9c13e8);
    return;
  }
  return;
}



// FUNCTION 145f3d6a4 FUN_145f3d6a4 body=123 status=ok
// SIG undefined FUN_145f3d6a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3d6a4(void)

{
  _DAT_14c9c3fb8 = L"BASE";
  DAT_14c9c3fe2 = 4;
  _DAT_14c9c3fc0 = FUN_140b35ae4();
  _DAT_14c9c3fc8 = DAT_14c9c13f8;
  _DAT_14c9c3fd0 = &LAB_14682652b;
  DAT_14c9c13f8 = &DAT_14c9c3fb8;
  DAT_14c9c144d = DAT_14c9c144d + '\x01';
  _DAT_14c9c3fd8 = 0x100000000;
  if (*(char *)(_DAT_14c9c3fc0 + 100) != '\0') {
    DAT_14c9c144e = DAT_14c9c144e + '\x01';
  }
  return;
}



// FUNCTION 145f3d720 FUN_145f3d720 body=261 status=ok
// SIG undefined FUN_145f3d720(void)

void FUN_145f3d720(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c4068) {
    FUN_144b3d300(&DAT_14c9c4068);
    if (DAT_14c9c4068 == -1) {
      FUN_145f3d826(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3fe8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc29fb);
      _Init_thread_footer(&DAT_14c9c4068);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3d826 FUN_145f3d826 body=226 status=ok
// SIG undefined FUN_145f3d826(void)

longlong * FUN_145f3d826(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bcbae;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3d90a FUN_145f3d90a body=138 status=ok
// SIG undefined FUN_145f3d90a(void)

undefined1 * FUN_145f3d90a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xc5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147149ef2;
}



// FUNCTION 145f3d994 FUN_145f3d994 body=138 status=ok
// SIG undefined FUN_145f3d994(void)

code * FUN_145f3d994(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeApplyParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000ca;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147149d54;
}



// FUNCTION 145f3da1e FUN_145f3da1e body=138 status=ok
// SIG undefined FUN_145f3da1e(void)

code * FUN_145f3da1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"EdgeDerivativeParameters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3d994;
}



// FUNCTION 145f3daa8 FUN_145f3daa8 body=292 status=ok
// SIG undefined FUN_145f3daa8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3daa8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c2478) {
    FUN_144b3d300(&DAT_14c9c2478);
    if (DAT_14c9c2478 == -1) {
      FUN_145f3dd16();
      FUN_145f3dbcc();
      FUN_140db5666(&DAT_14c9c23d0,0,&DAT_14c9c2368,L"FStampDeferredDebugProbePS",
                    L"/Engine/Private/DebugProbes.usf",L"MainPS",3,6,FUN_147145c62,FUN_147145c02,
                    &LAB_147145be6,&LAB_147145be2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c3ac8)
      ;
      _DAT_14c9c23d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ba965c);
      _Init_thread_footer(&DAT_14c9c2478);
    }
  }
  return &DAT_14c9c23d0;
}



// FUNCTION 145f3dbcc FUN_145f3dbcc body=205 status=ok
// SIG undefined FUN_145f3dbcc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3dbcc(void)

{
  if ((DAT_14c9c23cf & 2) == 0) {
    DAT_14c9c23cf = DAT_14c9c23cf | 2;
    _DAT_14c9c2370 = L"FStampDeferredDebugProbePS";
    _DAT_14c9c2388 = FUN_146826540;
    _DAT_14c9c2390 = FUN_146825d77;
    _DAT_14c9c2398 = FUN_146825fd6;
    _DAT_14c9c23a0 = FUN_1407e02ea;
    _DAT_14c9c23a8 = FUN_146826273;
    _DAT_14c9c2380 = FUN_147145bb4;
    _DAT_14c9c23c0 = 0xffffffff000000e0;
    _DAT_14c9c23c8 = 8;
    DAT_14c9c23cc = 0;
    _DAT_14c9c23b0 = &LAB_147145bde;
    FUN_145f3dc9a();
    FUN_1407e00cc(&DAT_14c9c2368);
    return;
  }
  return;
}



// FUNCTION 145f3dc9a FUN_145f3dc9a body=123 status=ok
// SIG undefined FUN_145f3dc9a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3dc9a(void)

{
  _DAT_14c9c4330 = L"BASE";
  DAT_14c9c435a = 4;
  _DAT_14c9c4338 = FUN_140b35ae4();
  _DAT_14c9c4340 = DAT_14c9c2378;
  _DAT_14c9c4348 = &LAB_14682652b;
  DAT_14c9c2378 = &DAT_14c9c4330;
  DAT_14c9c23cd = DAT_14c9c23cd + '\x01';
  _DAT_14c9c4350 = 0x100000000;
  if (*(char *)(_DAT_14c9c4338 + 100) != '\0') {
    DAT_14c9c23ce = DAT_14c9c23ce + '\x01';
  }
  return;
}



// FUNCTION 145f3dd16 FUN_145f3dd16 body=261 status=ok
// SIG undefined FUN_145f3dd16(void)

void FUN_145f3dd16(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c3b48) {
    FUN_144b3d300(&DAT_14c9c3b48);
    if (DAT_14c9c3b48 == -1) {
      FUN_145f3de1c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x33;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c3ac8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142bc247a);
      _Init_thread_footer(&DAT_14c9c3b48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3de1c FUN_145f3de1c body=226 status=ok
// SIG undefined FUN_145f3de1c(void)

longlong * FUN_145f3de1c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bc766;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3df00 FUN_145f3df00 body=138 status=ok
// SIG undefined FUN_145f3df00(void)

undefined1 * FUN_145f3df00(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x34;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147149182;
}



// FUNCTION 145f3df8a FUN_145f3df8a body=138 status=ok
// SIG undefined FUN_145f3df8a(void)

code * FUN_145f3df8a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DebugProbesMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000039;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bc7ee;
}



// FUNCTION 145f3e014 FUN_145f3e014 body=138 status=ok
// SIG undefined FUN_145f3e014(void)

code * FUN_145f3e014(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bRoughDiffuse";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c00000037;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bc87e;
}



// FUNCTION 145f3e09e FUN_145f3e09e body=292 status=ok
// SIG undefined FUN_145f3e09e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3e09e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5308) {
    FUN_144b3d300(&DAT_14c9c5308);
    if (DAT_14c9c5308 == -1) {
      FUN_145f3e30c();
      FUN_145f3e1c2();
      FUN_140db5666(&DAT_14c9c5260,0,&DAT_14c9c51f8,L"FDitheredTransitionStencilCS",
                    L"/Engine/Private/DitheredTransitionStencil.usf",L"MainCS",5,1,FUN_14714dccc,
                    FUN_14714dc6c,&LAB_14714dc54,&LAB_14714dc50,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9c7dd8);
      _DAT_14c9c5260 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bcb4cc);
      _Init_thread_footer(&DAT_14c9c5308);
    }
  }
  return &DAT_14c9c5260;
}



// FUNCTION 145f3e1c2 FUN_145f3e1c2 body=205 status=ok
// SIG undefined FUN_145f3e1c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3e1c2(void)

{
  if ((DAT_14c9c525f & 2) == 0) {
    DAT_14c9c525f = DAT_14c9c525f | 2;
    _DAT_14c9c5200 = L"FDitheredTransitionStencilCS";
    _DAT_14c9c5218 = FUN_146826540;
    _DAT_14c9c5220 = FUN_146825d77;
    _DAT_14c9c5228 = FUN_146825fd6;
    _DAT_14c9c5230 = FUN_1407e02ea;
    _DAT_14c9c5238 = FUN_146826273;
    _DAT_14c9c5210 = FUN_14714dc22;
    _DAT_14c9c5250 = 0xffffffff000000e0;
    _DAT_14c9c5258 = 8;
    DAT_14c9c525c = 0;
    _DAT_14c9c5240 = &LAB_14714dc4c;
    FUN_145f3e290();
    FUN_1407e00cc(&DAT_14c9c51f8);
    return;
  }
  return;
}



// FUNCTION 145f3e290 FUN_145f3e290 body=123 status=ok
// SIG undefined FUN_145f3e290(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3e290(void)

{
  _DAT_14c9c92a8 = L"BASE";
  DAT_14c9c92d2 = 4;
  _DAT_14c9c92b0 = FUN_140b35ae4();
  _DAT_14c9c92b8 = DAT_14c9c5208;
  _DAT_14c9c92c0 = &LAB_14682652b;
  DAT_14c9c5208 = &DAT_14c9c92a8;
  DAT_14c9c525d = DAT_14c9c525d + '\x01';
  _DAT_14c9c92c8 = 0x100000000;
  if (*(char *)(_DAT_14c9c92b0 + 100) != '\0') {
    DAT_14c9c525e = DAT_14c9c525e + '\x01';
  }
  return;
}



// FUNCTION 145f3e30c FUN_145f3e30c body=261 status=ok
// SIG undefined FUN_145f3e30c(void)

void FUN_145f3e30c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7e58) {
    FUN_144b3d300(&DAT_14c9c7e58);
    if (DAT_14c9c7e58 == -1) {
      FUN_145f3e412(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1be;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c7dd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be54cd);
      _Init_thread_footer(&DAT_14c9c7e58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3e412 FUN_145f3e412 body=226 status=ok
// SIG undefined FUN_145f3e412(void)

longlong * FUN_145f3e412(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462be09e;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3e4f6 FUN_145f3e4f6 body=138 status=ok
// SIG undefined FUN_145f3e4f6(void)

undefined1 * FUN_145f3e4f6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147150fae;
}



// FUNCTION 145f3e580 FUN_145f3e580 body=138 status=ok
// SIG undefined FUN_145f3e580(void)

code * FUN_145f3e580(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DitheredTransitionFactor";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000001c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3e60a;
}



// FUNCTION 145f3e60a FUN_145f3e60a body=138 status=ok
// SIG undefined FUN_145f3e60a(void)

code * FUN_145f3e60a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"StencilOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000001c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3e4f6;
}



// FUNCTION 145f3e694 FUN_145f3e694 body=205 status=ok
// SIG undefined FUN_145f3e694(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3e694(void)

{
  if ((DAT_14c9c695f & 2) == 0) {
    DAT_14c9c695f = DAT_14c9c695f | 2;
    _DAT_14c9c6900 = L"FConeTraceScreenGridGlobalOcclusionCS";
    _DAT_14c9c6918 = FUN_146826540;
    _DAT_14c9c6920 = FUN_146825d77;
    _DAT_14c9c6928 = FUN_146825fd6;
    _DAT_14c9c6930 = FUN_1407e02ea;
    _DAT_14c9c6938 = FUN_146826273;
    _DAT_14c9c6910 = FUN_14714f0a6;
    _DAT_14c9c6950 = 0xffffffff000000e0;
    _DAT_14c9c6958 = 8;
    DAT_14c9c695c = 0;
    _DAT_14c9c6940 = &LAB_14714f0d0;
    FUN_145f3e762();
    FUN_1407e00cc(&DAT_14c9c68f8);
    return;
  }
  return;
}



// FUNCTION 145f3e762 FUN_145f3e762 body=123 status=ok
// SIG undefined FUN_145f3e762(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3e762(void)

{
  _DAT_14c9c9658 = L"BASE";
  DAT_14c9c9682 = 4;
  _DAT_14c9c9660 = FUN_140b35ae4();
  _DAT_14c9c9668 = DAT_14c9c6908;
  _DAT_14c9c9670 = &LAB_14682652b;
  DAT_14c9c6908 = &DAT_14c9c9658;
  DAT_14c9c695d = DAT_14c9c695d + '\x01';
  _DAT_14c9c9678 = 0x100000000;
  if (*(char *)(_DAT_14c9c9660 + 100) != '\0') {
    DAT_14c9c695e = DAT_14c9c695e + '\x01';
  }
  return;
}



// FUNCTION 145f3e7de FUN_145f3e7de body=226 status=ok
// SIG undefined FUN_145f3e7de(void)

longlong * FUN_145f3e7de(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462bff10;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3e8c2 FUN_145f3e8c2 body=138 status=ok
// SIG undefined FUN_145f3e8c2(void)

code * FUN_145f3e8c2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileListGroupSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x430000000c8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462bff98;
}



// FUNCTION 145f3e94c FUN_145f3e94c body=138 status=ok
// SIG undefined FUN_145f3e94c(void)

undefined1 * FUN_145f3e94c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xbe;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147152e60;
}



// FUNCTION 145f3e9d6 FUN_145f3e9d6 body=144 status=ok
// SIG undefined FUN_145f3e9d6(void)

code * FUN_145f3e9d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ccd60c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AOSampleParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAOSampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x370000000c5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c8740;
  return FUN_1462c0028;
}



// FUNCTION 145f3ea66 FUN_145f3ea66 body=205 status=ok
// SIG undefined FUN_145f3ea66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3ea66(void)

{
  if ((DAT_14c9c6a87 & 2) == 0) {
    DAT_14c9c6a87 = DAT_14c9c6a87 | 2;
    _DAT_14c9c6a28 = L"FCombineConeVisibilityCS";
    _DAT_14c9c6a40 = FUN_146826540;
    _DAT_14c9c6a48 = FUN_146825d77;
    _DAT_14c9c6a50 = FUN_146825fd6;
    _DAT_14c9c6a58 = FUN_1407e02ea;
    _DAT_14c9c6a60 = FUN_146826273;
    _DAT_14c9c6a38 = FUN_14714f16c;
    _DAT_14c9c6a78 = 0xffffffff000000e0;
    _DAT_14c9c6a80 = 8;
    DAT_14c9c6a84 = 0;
    _DAT_14c9c6a68 = &LAB_14714f196;
    FUN_145f3eb34();
    FUN_1407e00cc(&DAT_14c9c6a20);
    return;
  }
  return;
}



// FUNCTION 145f3eb34 FUN_145f3eb34 body=123 status=ok
// SIG undefined FUN_145f3eb34(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3eb34(void)

{
  _DAT_14c9c9688 = L"BASE";
  DAT_14c9c96b2 = 4;
  _DAT_14c9c9690 = FUN_140b35ae4();
  _DAT_14c9c9698 = DAT_14c9c6a30;
  _DAT_14c9c96a0 = &LAB_14682652b;
  DAT_14c9c6a30 = &DAT_14c9c9688;
  DAT_14c9c6a85 = DAT_14c9c6a85 + '\x01';
  _DAT_14c9c96a8 = 0x100000000;
  if (*(char *)(_DAT_14c9c9690 + 100) != '\0') {
    DAT_14c9c6a86 = DAT_14c9c6a86 + '\x01';
  }
  return;
}



// FUNCTION 145f3ebb0 FUN_145f3ebb0 body=226 status=ok
// SIG undefined FUN_145f3ebb0(void)

longlong * FUN_145f3ebb0(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c038c;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3ec94 FUN_145f3ec94 body=138 status=ok
// SIG undefined FUN_145f3ec94(void)

code * FUN_145f3ec94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ConeBufferMax";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf8000000f1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3ed1e;
}



// FUNCTION 145f3ed1e FUN_145f3ed1e body=138 status=ok
// SIG undefined FUN_145f3ed1e(void)

code * FUN_145f3ed1e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWDistanceFieldBentNormal";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf0000000f0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c0414;
}



// FUNCTION 145f3eda8 FUN_145f3eda8 body=144 status=ok
// SIG undefined FUN_145f3eda8(void)

code * FUN_145f3eda8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cdb8fa();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ScreenGridParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FScreenGridParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000ee;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9c87c8;
  return FUN_1462c04a6;
}



// FUNCTION 145f3ee38 FUN_145f3ee38 body=292 status=ok
// SIG undefined FUN_145f3ee38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3ee38(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c79d0) {
    FUN_144b3d300(&DAT_14c9c79d0);
    if (DAT_14c9c79d0 == -1) {
      FUN_145f3f0a6();
      FUN_145f3ef5c();
      FUN_140db5666(&DAT_14c9c7928,0,&DAT_14c9c78c0,L"FCopyDistanceFieldIndirectionAtlasCS",
                    L"/Engine/Private/DistanceFieldStreaming.usf",
                    L"CopyDistanceFieldIndirectionAtlasCS",5,1,FUN_14714fb56,FUN_14714faf6,
                    &LAB_1462bdce8,&LAB_14714faf2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c8fc0)
      ;
      _DAT_14c9c7928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be43a3);
      _Init_thread_footer(&DAT_14c9c79d0);
    }
  }
  return &DAT_14c9c7928;
}



// FUNCTION 145f3ef5c FUN_145f3ef5c body=205 status=ok
// SIG undefined FUN_145f3ef5c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3ef5c(void)

{
  if ((DAT_14c9c7927 & 2) == 0) {
    DAT_14c9c7927 = DAT_14c9c7927 | 2;
    _DAT_14c9c78c8 = L"FCopyDistanceFieldIndirectionAtlasCS";
    _DAT_14c9c78e0 = FUN_146826540;
    _DAT_14c9c78e8 = FUN_146825d77;
    _DAT_14c9c78f0 = FUN_146825fd6;
    _DAT_14c9c78f8 = FUN_1407e02ea;
    _DAT_14c9c7900 = FUN_146826273;
    _DAT_14c9c78d8 = FUN_14714fac4;
    _DAT_14c9c7918 = 0xffffffff000000e0;
    _DAT_14c9c7920 = 8;
    DAT_14c9c7924 = 0;
    _DAT_14c9c7908 = &LAB_14714faee;
    FUN_145f3f02a();
    FUN_1407e00cc(&DAT_14c9c78c0);
    return;
  }
  return;
}



// FUNCTION 145f3f02a FUN_145f3f02a body=123 status=ok
// SIG undefined FUN_145f3f02a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3f02a(void)

{
  _DAT_14c9c99a8 = L"BASE";
  DAT_14c9c99d2 = 4;
  _DAT_14c9c99b0 = FUN_140b35ae4();
  _DAT_14c9c99b8 = DAT_14c9c78d0;
  _DAT_14c9c99c0 = &LAB_14682652b;
  DAT_14c9c78d0 = &DAT_14c9c99a8;
  DAT_14c9c7925 = DAT_14c9c7925 + '\x01';
  _DAT_14c9c99c8 = 0x100000000;
  if (*(char *)(_DAT_14c9c99b0 + 100) != '\0') {
    DAT_14c9c7926 = DAT_14c9c7926 + '\x01';
  }
  return;
}



// FUNCTION 145f3f0a6 FUN_145f3f0a6 body=261 status=ok
// SIG undefined FUN_145f3f0a6(void)

void FUN_145f3f0a6(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c9040) {
    FUN_144b3d300(&DAT_14c9c9040);
    if (DAT_14c9c9040 == -1) {
      FUN_145f3f1ac(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xd2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8fc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be77ae);
      _Init_thread_footer(&DAT_14c9c9040);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3f1ac FUN_145f3f1ac body=226 status=ok
// SIG undefined FUN_145f3f1ac(void)

longlong * FUN_145f3f1ac(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c13ec;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3f290 FUN_145f3f290 body=138 status=ok
// SIG undefined FUN_145f3f290(void)

code * FUN_145f3f290(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SrcPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000d6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3f31a;
}



// FUNCTION 145f3f31a FUN_145f3f31a body=138 status=ok
// SIG undefined FUN_145f3f31a(void)

code * FUN_145f3f31a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IndirectionDimensions";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000d5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c1474;
}



// FUNCTION 145f3f3a4 FUN_145f3f3a4 body=138 status=ok
// SIG undefined FUN_145f3f3a4(void)

code * FUN_145f3f3a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DstPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000d7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3f290;
}



// FUNCTION 145f3f42e FUN_145f3f42e body=292 status=ok
// SIG undefined FUN_145f3f42e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3f42e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c9fa0) {
    FUN_144b3d300(&DAT_14c9c9fa0);
    if (DAT_14c9c9fa0 == -1) {
      FUN_145f3f69c();
      FUN_145f3f552();
      FUN_140db5666(&DAT_14c9c9ef8,0,&DAT_14c9c9e90,L"FVisualizeDistanceFieldUpsamplePS",
                    L"/Engine/Private/DistanceFieldVisualization.usf",
                    L"VisualizeDistanceFieldUpsamplePS",3,1,FUN_1471578e4,FUN_147157884,
                    &LAB_1462c1fa6,&LAB_147157880,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9cdc10)
      ;
      _DAT_14c9c9ef8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bf7b3e);
      _Init_thread_footer(&DAT_14c9c9fa0);
    }
  }
  return &DAT_14c9c9ef8;
}



// FUNCTION 145f3f552 FUN_145f3f552 body=205 status=ok
// SIG undefined FUN_145f3f552(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3f552(void)

{
  if ((DAT_14c9c9ef7 & 2) == 0) {
    DAT_14c9c9ef7 = DAT_14c9c9ef7 | 2;
    _DAT_14c9c9e98 = L"FVisualizeDistanceFieldUpsamplePS";
    _DAT_14c9c9eb0 = FUN_146826540;
    _DAT_14c9c9eb8 = FUN_146825d77;
    _DAT_14c9c9ec0 = FUN_146825fd6;
    _DAT_14c9c9ec8 = FUN_1407e02ea;
    _DAT_14c9c9ed0 = FUN_146826273;
    _DAT_14c9c9ea8 = FUN_147157852;
    _DAT_14c9c9ee8 = 0xffffffff000000e0;
    _DAT_14c9c9ef0 = 8;
    DAT_14c9c9ef4 = 0;
    _DAT_14c9c9ed8 = &LAB_14715787c;
    FUN_145f3f620();
    FUN_1407e00cc(&DAT_14c9c9e90);
    return;
  }
  return;
}



// FUNCTION 145f3f620 FUN_145f3f620 body=123 status=ok
// SIG undefined FUN_145f3f620(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3f620(void)

{
  _DAT_14c9ceed8 = L"BASE";
  DAT_14c9cef02 = 4;
  _DAT_14c9ceee0 = FUN_140b35ae4();
  _DAT_14c9ceee8 = DAT_14c9c9ea0;
  _DAT_14c9ceef0 = &LAB_14682652b;
  DAT_14c9c9ea0 = &DAT_14c9ceed8;
  DAT_14c9c9ef5 = DAT_14c9c9ef5 + '\x01';
  _DAT_14c9ceef8 = 0x100000000;
  if (*(char *)(_DAT_14c9ceee0 + 100) != '\0') {
    DAT_14c9c9ef6 = DAT_14c9c9ef6 + '\x01';
  }
  return;
}



// FUNCTION 145f3f69c FUN_145f3f69c body=261 status=ok
// SIG undefined FUN_145f3f69c(void)

void FUN_145f3f69c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cdc90) {
    FUN_144b3d300(&DAT_14c9cdc90);
    if (DAT_14c9cdc90 == -1) {
      FUN_145f3f7a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x55;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cdc10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1c953);
      _Init_thread_footer(&DAT_14c9cdc90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3f7a2 FUN_145f3f7a2 body=226 status=ok
// SIG undefined FUN_145f3f7a2(void)

longlong * FUN_145f3f7a2(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c2770;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3f886 FUN_145f3f886 body=138 status=ok
// SIG undefined FUN_145f3f886(void)

undefined1 * FUN_145f3f886(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x56;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14715c28a;
}



// FUNCTION 145f3f910 FUN_145f3f910 body=138 status=ok
// SIG undefined FUN_145f3f910(void)

code * FUN_145f3f910(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeDistanceFieldTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000057;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3f886;
}



// FUNCTION 145f3f99a FUN_145f3f99a body=138 status=ok
// SIG undefined FUN_145f3f99a(void)

code * FUN_145f3f99a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisualizeDistanceFieldSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000058;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3f910;
}



// FUNCTION 145f3fa24 FUN_145f3fa24 body=292 status=ok
// SIG undefined FUN_145f3fa24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f3fa24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb308) {
    FUN_144b3d300(&DAT_14c9cb308);
    if (DAT_14c9cb308 == -1) {
      FUN_145f3fc92();
      FUN_145f3fb48();
      FUN_140db5666(&DAT_14c9cb260,0,&DAT_14c9cb1f8,
                    L"FPostProcessKuwaharaCalculateMeanAndVarianceCS",
                    L"/Engine/Private/Gearbox/PostProcessKuwaharaCalculateMeanAndVariance.usf",
                    L"MainCS",5,2,FUN_14715a304,FUN_14715a2a4,&LAB_14715a29c,&LAB_14715a298,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ce160);
      _DAT_14c9cb260 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c000ef);
      _Init_thread_footer(&DAT_14c9cb308);
    }
  }
  return &DAT_14c9cb260;
}



// FUNCTION 145f3fb48 FUN_145f3fb48 body=205 status=ok
// SIG undefined FUN_145f3fb48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3fb48(void)

{
  if ((DAT_14c9cb25f & 2) == 0) {
    DAT_14c9cb25f = DAT_14c9cb25f | 2;
    _DAT_14c9cb200 = L"FPostProcessKuwaharaCalculateMeanAndVarianceCS";
    _DAT_14c9cb218 = FUN_146826540;
    _DAT_14c9cb220 = FUN_146825d77;
    _DAT_14c9cb228 = FUN_146825fd6;
    _DAT_14c9cb230 = FUN_1407e02ea;
    _DAT_14c9cb238 = FUN_146826273;
    _DAT_14c9cb210 = FUN_14715a26a;
    _DAT_14c9cb250 = 0xffffffff000000e0;
    _DAT_14c9cb258 = 8;
    DAT_14c9cb25c = 0;
    _DAT_14c9cb240 = &LAB_14715a294;
    FUN_145f3fc16();
    FUN_1407e00cc(&DAT_14c9cb1f8);
    return;
  }
  return;
}



// FUNCTION 145f3fc16 FUN_145f3fc16 body=123 status=ok
// SIG undefined FUN_145f3fc16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3fc16(void)

{
  _DAT_14c9cf2e0 = L"BASE";
  DAT_14c9cf30a = 4;
  _DAT_14c9cf2e8 = FUN_140b35ae4();
  _DAT_14c9cf2f0 = DAT_14c9cb208;
  _DAT_14c9cf2f8 = &LAB_14682652b;
  DAT_14c9cb208 = &DAT_14c9cf2e0;
  DAT_14c9cb25d = DAT_14c9cb25d + '\x01';
  _DAT_14c9cf300 = 0x100000000;
  if (*(char *)(_DAT_14c9cf2e8 + 100) != '\0') {
    DAT_14c9cb25e = DAT_14c9cb25e + '\x01';
  }
  return;
}



// FUNCTION 145f3fc92 FUN_145f3fc92 body=261 status=ok
// SIG undefined FUN_145f3fc92(void)

void FUN_145f3fc92(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ce1e0) {
    FUN_144b3d300(&DAT_14c9ce1e0);
    if (DAT_14c9ce1e0 == -1) {
      FUN_14159ba12(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0xda;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce160,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1d833);
      _Init_thread_footer(&DAT_14c9ce1e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f3fd98 FUN_145f3fd98 body=138 status=ok
// SIG undefined FUN_145f3fd98(void)

code * FUN_145f3fd98(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutVarianceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x98000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715f952;
}



// FUNCTION 145f3fe22 FUN_145f3fe22 body=138 status=ok
// SIG undefined FUN_145f3fe22(void)

code * FUN_145f3fe22(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"KernelDiffLimitRatio";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe8000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715f502;
}



// FUNCTION 145f3feac FUN_145f3feac body=138 status=ok
// SIG undefined FUN_145f3feac(void)

code * FUN_145f3feac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HistoryWeight";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xec000000eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f3fe22;
}



// FUNCTION 145f3ff36 FUN_145f3ff36 body=205 status=ok
// SIG undefined FUN_145f3ff36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f3ff36(void)

{
  if ((DAT_14c9cc067 & 2) == 0) {
    DAT_14c9cc067 = DAT_14c9cc067 | 2;
    _DAT_14c9cc008 = L"FCullObjectsToClipmapCS";
    _DAT_14c9cc020 = FUN_146826540;
    _DAT_14c9cc028 = FUN_146825d77;
    _DAT_14c9cc030 = FUN_146825fd6;
    _DAT_14c9cc038 = FUN_1407e02ea;
    _DAT_14c9cc040 = FUN_146826273;
    _DAT_14c9cc018 = FUN_14715aa5e;
    _DAT_14c9cc058 = 0xffffffff000000e0;
    _DAT_14c9cc060 = 8;
    DAT_14c9cc064 = 0;
    _DAT_14c9cc048 = &LAB_14715aa88;
    FUN_145f40004();
    FUN_1407e00cc(&DAT_14c9cc000);
    return;
  }
  return;
}



// FUNCTION 145f40004 FUN_145f40004 body=123 status=ok
// SIG undefined FUN_145f40004(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f40004(void)

{
  _DAT_14c9cf4c0 = L"BASE";
  DAT_14c9cf4ea = 4;
  _DAT_14c9cf4c8 = FUN_140b35ae4();
  _DAT_14c9cf4d0 = DAT_14c9cc010;
  _DAT_14c9cf4d8 = &LAB_14682652b;
  DAT_14c9cc010 = &DAT_14c9cf4c0;
  DAT_14c9cc065 = DAT_14c9cc065 + '\x01';
  _DAT_14c9cf4e0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf4c8 + 100) != '\0') {
    DAT_14c9cc066 = DAT_14c9cc066 + '\x01';
  }
  return;
}



// FUNCTION 145f40080 FUN_145f40080 body=226 status=ok
// SIG undefined FUN_145f40080(void)

longlong * FUN_145f40080(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c41a2;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f40164 FUN_145f40164 body=138 status=ok
// SIG undefined FUN_145f40164(void)

code * FUN_145f40164(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ObjectIndexBufferStride";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x120000005e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147162a24;
}



// FUNCTION 145f401ee FUN_145f401ee body=138 status=ok
// SIG undefined FUN_145f401ee(void)

code * FUN_145f401ee(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWObjectIndexNumBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000005d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147162bc2;
}



// FUNCTION 145f40278 FUN_145f40278 body=144 status=ok
// SIG undefined FUN_145f40278(void)

code * FUN_145f40278(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1401d6c66();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldAtlasParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldAtlasParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000005dc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c42b2;
}



// FUNCTION 145f40308 FUN_145f40308 body=205 status=ok
// SIG undefined FUN_145f40308(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f40308(void)

{
  if ((DAT_14c9cc507 & 2) == 0) {
    DAT_14c9cc507 = DAT_14c9cc507 | 2;
    _DAT_14c9cc4a8 = L"FCompositeObjectsIntoObjectGridPagesCS";
    _DAT_14c9cc4c0 = FUN_146826540;
    _DAT_14c9cc4c8 = FUN_146825d77;
    _DAT_14c9cc4d0 = FUN_146825fd6;
    _DAT_14c9cc4d8 = FUN_1407e02ea;
    _DAT_14c9cc4e0 = FUN_146826273;
    _DAT_14c9cc4b8 = FUN_14715ad76;
    _DAT_14c9cc4f8 = 0xffffffff000000e0;
    _DAT_14c9cc500 = 8;
    DAT_14c9cc504 = 0;
    _DAT_14c9cc4e8 = &LAB_14715ada0;
    FUN_145f403d6();
    FUN_1407e00cc(&DAT_14c9cc4a0);
    return;
  }
  return;
}



// FUNCTION 145f403d6 FUN_145f403d6 body=123 status=ok
// SIG undefined FUN_145f403d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f403d6(void)

{
  _DAT_14c9cf580 = L"BASE";
  DAT_14c9cf5aa = 4;
  _DAT_14c9cf588 = FUN_140b35ae4();
  _DAT_14c9cf590 = DAT_14c9cc4b0;
  _DAT_14c9cf598 = &LAB_14682652b;
  DAT_14c9cc4b0 = &DAT_14c9cf580;
  DAT_14c9cc505 = DAT_14c9cc505 + '\x01';
  _DAT_14c9cf5a0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf588 + 100) != '\0') {
    DAT_14c9cc506 = DAT_14c9cc506 + '\x01';
  }
  return;
}



// FUNCTION 145f40452 FUN_145f40452 body=226 status=ok
// SIG undefined FUN_145f40452(void)

longlong * FUN_145f40452(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c467a;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f40536 FUN_145f40536 body=138 status=ok
// SIG undefined FUN_145f40536(void)

code * FUN_145f40536(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CullGridObjectArray";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2200000068f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147163822;
}



// FUNCTION 145f405c0 FUN_145f405c0 body=138 status=ok
// SIG undefined FUN_145f405c0(void)

code * FUN_145f405c0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParentPageTableLayerTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture3D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000689;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147164036;
}



// FUNCTION 145f4064a FUN_145f4064a body=144 status=ok
// SIG undefined FUN_145f4064a(void)

code * FUN_145f4064a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1401d6c66();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"DistanceFieldAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldAtlasParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x600000068b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c4812;
}



// FUNCTION 145f406da FUN_145f406da body=292 status=ok
// SIG undefined FUN_145f406da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f406da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cd018) {
    FUN_144b3d300(&DAT_14c9cd018);
    if (DAT_14c9cd018 == -1) {
      FUN_145f40948();
      FUN_145f407fe();
      FUN_140db5666(&DAT_14c9ccf70,0,&DAT_14c9ccf08,L"FGlobalDistanceFieldDebugCS",
                    L"/Engine/Private/DistanceField/GlobalDistanceFieldDebug.usf",
                    L"GlobalDistanceFieldDebugCS",5,1,FUN_14715b4f2,FUN_14715b492,FUN_1457e4394,
                    &LAB_14715b48e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9cee20);
      _DAT_14c9ccf70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c03ea0);
      _Init_thread_footer(&DAT_14c9cd018);
    }
  }
  return &DAT_14c9ccf70;
}



// FUNCTION 145f407fe FUN_145f407fe body=205 status=ok
// SIG undefined FUN_145f407fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f407fe(void)

{
  if ((DAT_14c9ccf6f & 2) == 0) {
    DAT_14c9ccf6f = DAT_14c9ccf6f | 2;
    _DAT_14c9ccf10 = L"FGlobalDistanceFieldDebugCS";
    _DAT_14c9ccf28 = FUN_146826540;
    _DAT_14c9ccf30 = FUN_146825d77;
    _DAT_14c9ccf38 = FUN_146825fd6;
    _DAT_14c9ccf40 = FUN_1407e02ea;
    _DAT_14c9ccf48 = FUN_146826273;
    _DAT_14c9ccf20 = FUN_14715b460;
    _DAT_14c9ccf60 = 0xffffffff000000e0;
    _DAT_14c9ccf68 = 8;
    DAT_14c9ccf6c = 0;
    _DAT_14c9ccf50 = &LAB_14715b48a;
    FUN_145f408cc();
    FUN_1407e00cc(&DAT_14c9ccf08);
    return;
  }
  return;
}



// FUNCTION 145f408cc FUN_145f408cc body=123 status=ok
// SIG undefined FUN_145f408cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f408cc(void)

{
  _DAT_14c9cf730 = L"BASE";
  DAT_14c9cf75a = 4;
  _DAT_14c9cf738 = FUN_140b35ae4();
  _DAT_14c9cf740 = DAT_14c9ccf18;
  _DAT_14c9cf748 = &LAB_14682652b;
  DAT_14c9ccf18 = &DAT_14c9cf730;
  DAT_14c9ccf6d = DAT_14c9ccf6d + '\x01';
  _DAT_14c9cf750 = 0x100000000;
  if (*(char *)(_DAT_14c9cf738 + 100) != '\0') {
    DAT_14c9ccf6e = DAT_14c9ccf6e + '\x01';
  }
  return;
}



// FUNCTION 145f40948 FUN_145f40948 body=261 status=ok
// SIG undefined FUN_145f40948(void)

void FUN_145f40948(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ceea0) {
    FUN_144b3d300(&DAT_14c9ceea0);
    if (DAT_14c9ceea0 == -1) {
      FUN_145f40a4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x811;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9cee20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1e2b8);
      _Init_thread_footer(&DAT_14c9ceea0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f40a4e FUN_145f40a4e body=226 status=ok
// SIG undefined FUN_145f40a4e(void)

longlong * FUN_145f40a4e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c51cc;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f40b32 FUN_145f40b32 body=138 status=ok
// SIG undefined FUN_145f40b32(void)

code * FUN_145f40b32(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"GlobalDistanceFieldPageFreeListAllocatorBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000813;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f40c46;
}



// FUNCTION 145f40bbc FUN_145f40bbc body=138 status=ok
// SIG undefined FUN_145f40bbc(void)

code * FUN_145f40bbc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PageStatsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000814;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f40b32;
}



// FUNCTION 145f40c46 FUN_145f40c46 body=138 status=ok
// SIG undefined FUN_145f40c46(void)

undefined1 * FUN_145f40c46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14117f524();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x812;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_147165d46;
}



// FUNCTION 145f40cd0 FUN_145f40cd0 body=292 status=ok
// SIG undefined FUN_145f40cd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f40cd0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cfff8) {
    FUN_144b3d300(&DAT_14c9cfff8);
    if (DAT_14c9cfff8 == -1) {
      FUN_145f40f3e();
      FUN_145f40df4();
      FUN_140db5666(&DAT_14c9cff50,0,&DAT_14c9cfee8,L"FGPUSceneDebugRenderCS",
                    L"/Engine/Private/GPUSceneDebugRender.usf",L"GPUSceneDebugRenderCS",5,1,
                    FUN_147169db2,FUN_147169d52,FUN_1462c5bc8,&LAB_147169d4e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d3838);
      _DAT_14c9cff50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c31971);
      _Init_thread_footer(&DAT_14c9cfff8);
    }
  }
  return &DAT_14c9cff50;
}



// FUNCTION 145f40df4 FUN_145f40df4 body=205 status=ok
// SIG undefined FUN_145f40df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f40df4(void)

{
  if ((DAT_14c9cff4f & 2) == 0) {
    DAT_14c9cff4f = DAT_14c9cff4f | 2;
    _DAT_14c9cfef0 = L"FGPUSceneDebugRenderCS";
    _DAT_14c9cff08 = FUN_146826540;
    _DAT_14c9cff10 = FUN_146825d77;
    _DAT_14c9cff18 = FUN_146825fd6;
    _DAT_14c9cff20 = FUN_1407e02ea;
    _DAT_14c9cff28 = FUN_146826273;
    _DAT_14c9cff00 = FUN_147169d1e;
    _DAT_14c9cff40 = 0xffffffff000000e0;
    _DAT_14c9cff48 = 8;
    DAT_14c9cff4c = 0;
    _DAT_14c9cff30 = &LAB_147169d4a;
    FUN_145f40ec2();
    FUN_1407e00cc(&DAT_14c9cfee8);
    return;
  }
  return;
}



// FUNCTION 145f40ec2 FUN_145f40ec2 body=123 status=ok
// SIG undefined FUN_145f40ec2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f40ec2(void)

{
  _DAT_14c9d4c68 = L"BASE";
  DAT_14c9d4c92 = 4;
  _DAT_14c9d4c70 = FUN_140b35ae4();
  _DAT_14c9d4c78 = DAT_14c9cfef8;
  _DAT_14c9d4c80 = &LAB_14682652b;
  DAT_14c9cfef8 = &DAT_14c9d4c68;
  DAT_14c9cff4d = DAT_14c9cff4d + '\x01';
  _DAT_14c9d4c88 = 0x100000000;
  if (*(char *)(_DAT_14c9d4c70 + 100) != '\0') {
    DAT_14c9cff4e = DAT_14c9cff4e + '\x01';
  }
  return;
}



// FUNCTION 145f40f3e FUN_145f40f3e body=261 status=ok
// SIG undefined FUN_145f40f3e(void)

void FUN_145f40f3e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d38b8) {
    FUN_144b3d300(&DAT_14c9d38b8);
    if (DAT_14c9d38b8 == -1) {
      FUN_145f41044(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x779;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3838,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46d95);
      _Init_thread_footer(&DAT_14c9d38b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f41044 FUN_145f41044 body=226 status=ok
// SIG undefined FUN_145f41044(void)

longlong * FUN_145f41044(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c6280;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f41128 FUN_145f41128 body=138 status=ok
// SIG undefined FUN_145f41128(void)

undefined1 * FUN_145f41128(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a75e54();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Scene";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x77a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14716e6c2;
}



// FUNCTION 145f411b2 FUN_145f411b2 body=138 status=ok
// SIG undefined FUN_145f411b2(void)

code * FUN_145f411b2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PickingRayEnd";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000784;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716e386;
}



// FUNCTION 145f4123c FUN_145f4123c body=138 status=ok
// SIG undefined FUN_145f4123c(void)

code * FUN_145f4123c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bDrawAll";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000077c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c6390;
}



// FUNCTION 145f412c6 FUN_145f412c6 body=292 status=ok
// SIG undefined FUN_145f412c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f412c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1208) {
    FUN_144b3d300(&DAT_14c9d1208);
    if (DAT_14c9d1208 == -1) {
      FUN_145f41534();
      FUN_145f413ea();
      FUN_140db5666(&DAT_14c9d1160,0,&DAT_14c9d10f8,L"FHairStrandsPlotBSDFPS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainPS",3,1,FUN_14716b9f8,
                    FUN_14716b998,&LAB_1462c5dde,&LAB_14716b994,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d40b8);
      _DAT_14c9d1160 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33b15);
      _Init_thread_footer(&DAT_14c9d1208);
    }
  }
  return &DAT_14c9d1160;
}



// FUNCTION 145f413ea FUN_145f413ea body=205 status=ok
// SIG undefined FUN_145f413ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f413ea(void)

{
  if ((DAT_14c9d115f & 2) == 0) {
    DAT_14c9d115f = DAT_14c9d115f | 2;
    _DAT_14c9d1100 = L"FHairStrandsPlotBSDFPS";
    _DAT_14c9d1118 = FUN_146826540;
    _DAT_14c9d1120 = FUN_146825d77;
    _DAT_14c9d1128 = FUN_146825fd6;
    _DAT_14c9d1130 = FUN_1407e02ea;
    _DAT_14c9d1138 = FUN_146826273;
    _DAT_14c9d1110 = FUN_14716b964;
    _DAT_14c9d1150 = 0xffffffff000000e0;
    _DAT_14c9d1158 = 8;
    DAT_14c9d115c = 0;
    _DAT_14c9d1140 = &LAB_14716b990;
    FUN_145f414b8();
    FUN_1407e00cc(&DAT_14c9d10f8);
    return;
  }
  return;
}



// FUNCTION 145f414b8 FUN_145f414b8 body=123 status=ok
// SIG undefined FUN_145f414b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f414b8(void)

{
  _DAT_14c9d4f38 = L"BASE";
  DAT_14c9d4f62 = 4;
  _DAT_14c9d4f40 = FUN_140b35ae4();
  _DAT_14c9d4f48 = DAT_14c9d1108;
  _DAT_14c9d4f50 = &LAB_14682652b;
  DAT_14c9d1108 = &DAT_14c9d4f38;
  DAT_14c9d115d = DAT_14c9d115d + '\x01';
  _DAT_14c9d4f58 = 0x100000000;
  if (*(char *)(_DAT_14c9d4f40 + 100) != '\0') {
    DAT_14c9d115e = DAT_14c9d115e + '\x01';
  }
  return;
}



// FUNCTION 145f41534 FUN_145f41534 body=261 status=ok
// SIG undefined FUN_145f41534(void)

void FUN_145f41534(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4138) {
    FUN_144b3d300(&DAT_14c9d4138);
    if (DAT_14c9d4138 == -1) {
      FUN_145f4163a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x387;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d40b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494cb);
      _Init_thread_footer(&DAT_14c9d4138);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4163a FUN_145f4163a body=226 status=ok
// SIG undefined FUN_145f4163a(void)

longlong * FUN_145f4163a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c7a98;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4171e FUN_145f4171e body=138 status=ok
// SIG undefined FUN_145f4171e(void)

code * FUN_145f4171e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MaxResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000038b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171bc2;
}



// FUNCTION 145f417a8 FUN_145f417a8 body=138 status=ok
// SIG undefined FUN_145f417a8(void)

code * FUN_145f417a8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Exposure";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c0000038f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147171b38;
}



// FUNCTION 145f41832 FUN_145f41832 body=138 status=ok
// SIG undefined FUN_145f41832(void)

code * FUN_145f41832(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Roughness";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x240000038d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c7b20;
}



// FUNCTION 145f418bc FUN_145f418bc body=292 status=ok
// SIG undefined FUN_145f418bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f418bc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1458) {
    FUN_144b3d300(&DAT_14c9d1458);
    if (DAT_14c9d1458 == -1) {
      FUN_145f41b2a();
      FUN_145f419e0();
      FUN_140db5666(&DAT_14c9d13b0,0,&DAT_14c9d1348,L"FHairVisibilityDebugPPLLCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"VisibilityDebugPPLLCS",5,1
                    ,FUN_14716bc34,FUN_14716bbd4,FUN_1462c5dfa,&LAB_14716bbd0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4250);
      _DAT_14c9d13b0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33b2d);
      _Init_thread_footer(&DAT_14c9d1458);
    }
  }
  return &DAT_14c9d13b0;
}



// FUNCTION 145f419e0 FUN_145f419e0 body=205 status=ok
// SIG undefined FUN_145f419e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f419e0(void)

{
  if ((DAT_14c9d13af & 2) == 0) {
    DAT_14c9d13af = DAT_14c9d13af | 2;
    _DAT_14c9d1350 = L"FHairVisibilityDebugPPLLCS";
    _DAT_14c9d1368 = FUN_146826540;
    _DAT_14c9d1370 = FUN_146825d77;
    _DAT_14c9d1378 = FUN_146825fd6;
    _DAT_14c9d1380 = FUN_1407e02ea;
    _DAT_14c9d1388 = FUN_146826273;
    _DAT_14c9d1360 = FUN_14716bba0;
    _DAT_14c9d13a0 = 0xffffffff000000e0;
    _DAT_14c9d13a8 = 8;
    DAT_14c9d13ac = 0;
    _DAT_14c9d1390 = &LAB_14716bbcc;
    FUN_145f41aae();
    FUN_1407e00cc(&DAT_14c9d1348);
    return;
  }
  return;
}



// FUNCTION 145f41aae FUN_145f41aae body=123 status=ok
// SIG undefined FUN_145f41aae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f41aae(void)

{
  _DAT_14c9d4f98 = L"BASE";
  DAT_14c9d4fc2 = 4;
  _DAT_14c9d4fa0 = FUN_140b35ae4();
  _DAT_14c9d4fa8 = DAT_14c9d1358;
  _DAT_14c9d4fb0 = &LAB_14682652b;
  DAT_14c9d1358 = &DAT_14c9d4f98;
  DAT_14c9d13ad = DAT_14c9d13ad + '\x01';
  _DAT_14c9d4fb8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4fa0 + 100) != '\0') {
    DAT_14c9d13ae = DAT_14c9d13ae + '\x01';
  }
  return;
}



// FUNCTION 145f41b2a FUN_145f41b2a body=261 status=ok
// SIG undefined FUN_145f41b2a(void)

void FUN_145f41b2a(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d42d0) {
    FUN_144b3d300(&DAT_14c9d42d0);
    if (DAT_14c9d42d0 == -1) {
      FUN_145f41c30(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x441;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4250,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c494ef);
      _Init_thread_footer(&DAT_14c9d42d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f41c30 FUN_145f41c30 body=226 status=ok
// SIG undefined FUN_145f41c30(void)

longlong * FUN_145f41c30(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c7d40;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f41d14 FUN_145f41d14 body=138 status=ok
// SIG undefined FUN_145f41d14(void)

undefined1 * FUN_145f41d14(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1447e4f80();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ViewUniformBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewUniformShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x442;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471721b2;
}



// FUNCTION 145f41d9e FUN_145f41d9e body=138 status=ok
// SIG undefined FUN_145f41d9e(void)

code * FUN_145f41d9e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PPLLNodeIndex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000446;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c7dce;
}



// FUNCTION 145f41e28 FUN_145f41e28 body=138 status=ok
// SIG undefined FUN_145f41e28(void)

code * FUN_145f41e28(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"PPLLMaxTotalListElementCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1400000444;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147172128;
}



// FUNCTION 145f41eb2 FUN_145f41eb2 body=292 status=ok
// SIG undefined FUN_145f41eb2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f41eb2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1a10) {
    FUN_144b3d300(&DAT_14c9d1a10);
    if (DAT_14c9d1a10 == -1) {
      FUN_145f42120();
      FUN_145f41fd6();
      FUN_140db5666(&DAT_14c9d1968,0,&DAT_14c9d1900,L"FHairEnvironmentAO",
                    L"/Engine/Private/HairStrands/HairStrandsEnvironmentAO.usf",L"MainPS",3,2,
                    FUN_14716c176,FUN_14716c116,FUN_1462c5ee4,&LAB_14716c112,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d44f8);
      _DAT_14c9d1968 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c38ecf);
      _Init_thread_footer(&DAT_14c9d1a10);
    }
  }
  return &DAT_14c9d1968;
}



// FUNCTION 145f41fd6 FUN_145f41fd6 body=205 status=ok
// SIG undefined FUN_145f41fd6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f41fd6(void)

{
  if ((DAT_14c9d1967 & 2) == 0) {
    DAT_14c9d1967 = DAT_14c9d1967 | 2;
    _DAT_14c9d1908 = L"FHairEnvironmentAO";
    _DAT_14c9d1920 = FUN_146826540;
    _DAT_14c9d1928 = FUN_146825d77;
    _DAT_14c9d1930 = FUN_146825fd6;
    _DAT_14c9d1938 = FUN_1407e02ea;
    _DAT_14c9d1940 = FUN_146826273;
    _DAT_14c9d1918 = FUN_14716c0e2;
    _DAT_14c9d1958 = 0xffffffff000000e0;
    _DAT_14c9d1960 = 8;
    DAT_14c9d1964 = 0;
    _DAT_14c9d1948 = &LAB_14716c10e;
    FUN_145f420a4();
    FUN_1407e00cc(&DAT_14c9d1900);
    return;
  }
  return;
}



// FUNCTION 145f420a4 FUN_145f420a4 body=123 status=ok
// SIG undefined FUN_145f420a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f420a4(void)

{
  _DAT_14c9d5058 = L"BASE";
  DAT_14c9d5082 = 4;
  _DAT_14c9d5060 = FUN_140b35ae4();
  _DAT_14c9d5068 = DAT_14c9d1910;
  _DAT_14c9d5070 = &LAB_14682652b;
  DAT_14c9d1910 = &DAT_14c9d5058;
  DAT_14c9d1965 = DAT_14c9d1965 + '\x01';
  _DAT_14c9d5078 = 0x100000000;
  if (*(char *)(_DAT_14c9d5060 + 100) != '\0') {
    DAT_14c9d1966 = DAT_14c9d1966 + '\x01';
  }
  return;
}



// FUNCTION 145f42120 FUN_145f42120 body=261 status=ok
// SIG undefined FUN_145f42120(void)

void FUN_145f42120(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4578) {
    FUN_144b3d300(&DAT_14c9d4578);
    if (DAT_14c9d4578 == -1) {
      FUN_145f42226(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x71;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d44f8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6e7);
      _Init_thread_footer(&DAT_14c9d4578);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f42226 FUN_145f42226 body=226 status=ok
// SIG undefined FUN_145f42226(void)

longlong * FUN_145f42226(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c8226;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4230a FUN_145f4230a body=138 status=ok
// SIG undefined FUN_145f4230a(void)

code * FUN_145f4230a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AO_Intensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc00000076;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147174d72;
}



// FUNCTION 145f42394 FUN_145f42394 body=138 status=ok
// SIG undefined FUN_145f42394(void)

code * FUN_145f42394(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"AO_SampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000077;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4230a;
}



// FUNCTION 145f4241e FUN_145f4241e body=138 status=ok
// SIG undefined FUN_145f4241e(void)

code * FUN_145f4241e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Output_InvResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000007a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147174c5e;
}



// FUNCTION 145f424a8 FUN_145f424a8 body=292 status=ok
// SIG undefined FUN_145f424a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f424a8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1b38) {
    FUN_144b3d300(&DAT_14c9d1b38);
    if (DAT_14c9d1b38 == -1) {
      FUN_145f42716();
      FUN_145f425cc();
      FUN_140db5666(&DAT_14c9d1a90,0,&DAT_14c9d1a28,L"FHairEnvironmentLightingPS",
                    L"/Engine/Private/HairStrands/HairStrandsEnvironmentLighting.usf",L"MainPS",3,
                    0x20,FUN_14716c294,FUN_14716c234,FUN_1410a8420,&LAB_14716c230,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4580);
      _DAT_14c9d1a90 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c38edb);
      _Init_thread_footer(&DAT_14c9d1b38);
    }
  }
  return &DAT_14c9d1a90;
}



// FUNCTION 145f425cc FUN_145f425cc body=205 status=ok
// SIG undefined FUN_145f425cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f425cc(void)

{
  if ((DAT_14c9d1a8f & 2) == 0) {
    DAT_14c9d1a8f = DAT_14c9d1a8f | 2;
    _DAT_14c9d1a30 = L"FHairEnvironmentLightingPS";
    _DAT_14c9d1a48 = FUN_146826540;
    _DAT_14c9d1a50 = FUN_146825d77;
    _DAT_14c9d1a58 = FUN_146825fd6;
    _DAT_14c9d1a60 = FUN_1407e02ea;
    _DAT_14c9d1a68 = FUN_146826273;
    _DAT_14c9d1a40 = FUN_14716c200;
    _DAT_14c9d1a80 = 0xffffffff000000e0;
    _DAT_14c9d1a88 = 8;
    DAT_14c9d1a8c = 0;
    _DAT_14c9d1a70 = &LAB_14716c22c;
    FUN_145f4269a();
    FUN_1407e00cc(&DAT_14c9d1a28);
    return;
  }
  return;
}



// FUNCTION 145f4269a FUN_145f4269a body=123 status=ok
// SIG undefined FUN_145f4269a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4269a(void)

{
  _DAT_14c9d5088 = L"BASE";
  DAT_14c9d50b2 = 4;
  _DAT_14c9d5090 = FUN_140b35ae4();
  _DAT_14c9d5098 = DAT_14c9d1a38;
  _DAT_14c9d50a0 = &LAB_14682652b;
  DAT_14c9d1a38 = &DAT_14c9d5088;
  DAT_14c9d1a8d = DAT_14c9d1a8d + '\x01';
  _DAT_14c9d50a8 = 0x100000000;
  if (*(char *)(_DAT_14c9d5090 + 100) != '\0') {
    DAT_14c9d1a8e = DAT_14c9d1a8e + '\x01';
  }
  return;
}



// FUNCTION 145f42716 FUN_145f42716 body=261 status=ok
// SIG undefined FUN_145f42716(void)

void FUN_145f42716(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4600) {
    FUN_144b3d300(&DAT_14c9d4600);
    if (DAT_14c9d4600 == -1) {
      FUN_14159bf42(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x440;
      local_58 = 0xf2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4d6f3);
      _Init_thread_footer(&DAT_14c9d4600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4281c FUN_145f4281c body=138 status=ok
// SIG undefined FUN_145f4281c(void)

code * FUN_145f4281c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bScreenTrace";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x27c00000102;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147175472;
}



// FUNCTION 145f428a6 FUN_145f428a6 body=138 status=ok
// SIG undefined FUN_145f428a6(void)

code * FUN_145f428a6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairEnergyLUTTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c80000010e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147174f98;
}



// FUNCTION 145f42930 FUN_145f42930 body=138 status=ok
// SIG undefined FUN_145f42930(void)

code * FUN_145f42930(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MultipleScatterSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x268000000fc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c89f2;
}



// FUNCTION 145f429ba FUN_145f429ba body=292 status=ok
// SIG undefined FUN_145f429ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f429ba(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d1d88) {
    FUN_144b3d300(&DAT_14c9d1d88);
    if (DAT_14c9d1d88 == -1) {
      FUN_145f42c28();
      FUN_145f42ade();
      FUN_140db5666(&DAT_14c9d1ce0,0,&DAT_14c9d1c78,L"FHairCullSegmentCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardCulling.usf",L"CSMain",5,1,
                    FUN_14716c4d0,FUN_14716c470,&LAB_1462c5f50,&LAB_14716c46c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4718);
      _DAT_14c9d1ce0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39e86);
      _Init_thread_footer(&DAT_14c9d1d88);
    }
  }
  return &DAT_14c9d1ce0;
}



// FUNCTION 145f42ade FUN_145f42ade body=205 status=ok
// SIG undefined FUN_145f42ade(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f42ade(void)

{
  if ((DAT_14c9d1cdf & 2) == 0) {
    DAT_14c9d1cdf = DAT_14c9d1cdf | 2;
    _DAT_14c9d1c80 = L"FHairCullSegmentCS";
    _DAT_14c9d1c98 = FUN_146826540;
    _DAT_14c9d1ca0 = FUN_146825d77;
    _DAT_14c9d1ca8 = FUN_146825fd6;
    _DAT_14c9d1cb0 = FUN_1407e02ea;
    _DAT_14c9d1cb8 = FUN_146826273;
    _DAT_14c9d1c90 = FUN_14716c43c;
    _DAT_14c9d1cd0 = 0xffffffff000000e0;
    _DAT_14c9d1cd8 = 8;
    DAT_14c9d1cdc = 0;
    _DAT_14c9d1cc0 = &LAB_14716c468;
    FUN_145f42bac();
    FUN_1407e00cc(&DAT_14c9d1c78);
    return;
  }
  return;
}



// FUNCTION 145f42bac FUN_145f42bac body=123 status=ok
// SIG undefined FUN_145f42bac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f42bac(void)

{
  _DAT_14c9d50e8 = L"BASE";
  DAT_14c9d5112 = 4;
  _DAT_14c9d50f0 = FUN_140b35ae4();
  _DAT_14c9d50f8 = DAT_14c9d1c88;
  _DAT_14c9d5100 = &LAB_14682652b;
  DAT_14c9d1c88 = &DAT_14c9d50e8;
  DAT_14c9d1cdd = DAT_14c9d1cdd + '\x01';
  _DAT_14c9d5108 = 0x100000000;
  if (*(char *)(_DAT_14c9d50f0 + 100) != '\0') {
    DAT_14c9d1cde = DAT_14c9d1cde + '\x01';
  }
  return;
}



// FUNCTION 145f42c28 FUN_145f42c28 body=261 status=ok
// SIG undefined FUN_145f42c28(void)

void FUN_145f42c28(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4798) {
    FUN_144b3d300(&DAT_14c9d4798);
    if (DAT_14c9d4798 == -1) {
      FUN_145f42d2e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x2a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4718,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e276);
      _Init_thread_footer(&DAT_14c9d4798);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f42d2e FUN_145f42d2e body=226 status=ok
// SIG undefined FUN_145f42d2e(void)

longlong * FUN_145f42d2e(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c8eda;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f42e12 FUN_145f42e12 body=138 status=ok
// SIG undefined FUN_145f42e12(void)

code * FUN_145f42e12(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWCoord";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1d000000033;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f42f26;
}



// FUNCTION 145f42e9c FUN_145f42e9c body=138 status=ok
// SIG undefined FUN_145f42e9c(void)

code * FUN_145f42e9c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CurveCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471768e0;
}



// FUNCTION 145f42f26 FUN_145f42f26 body=138 status=ok
// SIG undefined FUN_145f42f26(void)

code * FUN_145f42f26(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RWHairVis";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<FPackedHairVis>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1c800000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c8f62;
}



// FUNCTION 145f42fb0 FUN_145f42fb0 body=292 status=ok
// SIG undefined FUN_145f42fb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f42fb0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2228) {
    FUN_144b3d300(&DAT_14c9d2228);
    if (DAT_14c9d2228 == -1) {
      FUN_145f4321e();
      FUN_145f430d4();
      FUN_140db5666(&DAT_14c9d2180,0,&DAT_14c9d2118,L"FHairStrandsForwardRasterRasterizeCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardRaster.usf",L"RasterCS",5,2,
                    FUN_14716c96c,FUN_14716c90c,&LAB_1462c5f68,&LAB_14716c8fc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d49c0);
      _DAT_14c9d2180 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39eb6);
      _Init_thread_footer(&DAT_14c9d2228);
    }
  }
  return &DAT_14c9d2180;
}



// FUNCTION 145f430d4 FUN_145f430d4 body=205 status=ok
// SIG undefined FUN_145f430d4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f430d4(void)

{
  if ((DAT_14c9d217f & 2) == 0) {
    DAT_14c9d217f = DAT_14c9d217f | 2;
    _DAT_14c9d2120 = L"FHairStrandsForwardRasterRasterizeCS";
    _DAT_14c9d2138 = FUN_146826540;
    _DAT_14c9d2140 = FUN_146825d77;
    _DAT_14c9d2148 = FUN_146825fd6;
    _DAT_14c9d2150 = FUN_1407e02ea;
    _DAT_14c9d2158 = FUN_146826273;
    _DAT_14c9d2130 = FUN_14716c8cc;
    _DAT_14c9d2170 = 0xffffffff000000e0;
    _DAT_14c9d2178 = 8;
    DAT_14c9d217c = 0;
    _DAT_14c9d2160 = &LAB_14716c8f8;
    FUN_145f431a2();
    FUN_1407e00cc(&DAT_14c9d2118);
    return;
  }
  return;
}



// FUNCTION 145f431a2 FUN_145f431a2 body=123 status=ok
// SIG undefined FUN_145f431a2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f431a2(void)

{
  _DAT_14c9d51a8 = L"BASE";
  DAT_14c9d51d2 = 4;
  _DAT_14c9d51b0 = FUN_140b35ae4();
  _DAT_14c9d51b8 = DAT_14c9d2128;
  _DAT_14c9d51c0 = &LAB_14682652b;
  DAT_14c9d2128 = &DAT_14c9d51a8;
  DAT_14c9d217d = DAT_14c9d217d + '\x01';
  _DAT_14c9d51c8 = 0x100000000;
  if (*(char *)(_DAT_14c9d51b0 + 100) != '\0') {
    DAT_14c9d217e = DAT_14c9d217e + '\x01';
  }
  return;
}



// FUNCTION 145f4321e FUN_145f4321e body=261 status=ok
// SIG undefined FUN_145f4321e(void)

void FUN_145f4321e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4a40) {
    FUN_144b3d300(&DAT_14c9d4a40);
    if (DAT_14c9d4a40 == -1) {
      FUN_14159c026(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0xdd;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d49c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e2fa);
      _Init_thread_footer(&DAT_14c9d4a40);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f43324 FUN_145f43324 body=138 status=ok
// SIG undefined FUN_145f43324(void)

code * FUN_145f43324(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleVelocityBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000000e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177ab0;
}



// FUNCTION 145f433ae FUN_145f433ae body=138 status=ok
// SIG undefined FUN_145f433ae(void)

code * FUN_145f433ae(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SampleLightingViewportResolution";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x50000000df;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9ac4;
}



// FUNCTION 145f43438 FUN_145f43438 body=138 status=ok
// SIG undefined FUN_145f43438(void)

code * FUN_145f43438(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VisTilePrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177a26;
}



// FUNCTION 145f434c2 FUN_145f434c2 body=292 status=ok
// SIG undefined FUN_145f434c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f434c2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d2350) {
    FUN_144b3d300(&DAT_14c9d2350);
    if (DAT_14c9d2350 == -1) {
      FUN_145f43730();
      FUN_145f435e6();
      FUN_140db5666(&DAT_14c9d22a8,0,&DAT_14c9d2240,L"FHairStrandsForwardRasterDebugCS",
                    L"/Engine/Private/HairStrands/HairStrandsForwardRaster.usf",L"MainCS",5,1,
                    FUN_14716ca8a,FUN_14716ca2a,&LAB_1462c5f70,&LAB_14716ca26,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d4a48);
      _DAT_14c9d22a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c39ec2);
      _Init_thread_footer(&DAT_14c9d2350);
    }
  }
  return &DAT_14c9d22a8;
}



// FUNCTION 145f435e6 FUN_145f435e6 body=205 status=ok
// SIG undefined FUN_145f435e6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f435e6(void)

{
  if ((DAT_14c9d22a7 & 2) == 0) {
    DAT_14c9d22a7 = DAT_14c9d22a7 | 2;
    _DAT_14c9d2248 = L"FHairStrandsForwardRasterDebugCS";
    _DAT_14c9d2260 = FUN_146826540;
    _DAT_14c9d2268 = FUN_146825d77;
    _DAT_14c9d2270 = FUN_146825fd6;
    _DAT_14c9d2278 = FUN_1407e02ea;
    _DAT_14c9d2280 = FUN_146826273;
    _DAT_14c9d2258 = FUN_14716c9f6;
    _DAT_14c9d2298 = 0xffffffff000000e0;
    _DAT_14c9d22a0 = 8;
    DAT_14c9d22a4 = 0;
    _DAT_14c9d2288 = &LAB_14716ca22;
    FUN_145f436b4();
    FUN_1407e00cc(&DAT_14c9d2240);
    return;
  }
  return;
}



// FUNCTION 145f436b4 FUN_145f436b4 body=123 status=ok
// SIG undefined FUN_145f436b4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f436b4(void)

{
  _DAT_14c9d51d8 = L"BASE";
  DAT_14c9d5202 = 4;
  _DAT_14c9d51e0 = FUN_140b35ae4();
  _DAT_14c9d51e8 = DAT_14c9d2250;
  _DAT_14c9d51f0 = &LAB_14682652b;
  DAT_14c9d2250 = &DAT_14c9d51d8;
  DAT_14c9d22a5 = DAT_14c9d22a5 + '\x01';
  _DAT_14c9d51f8 = 0x100000000;
  if (*(char *)(_DAT_14c9d51e0 + 100) != '\0') {
    DAT_14c9d22a6 = DAT_14c9d22a6 + '\x01';
  }
  return;
}



// FUNCTION 145f43730 FUN_145f43730 body=261 status=ok
// SIG undefined FUN_145f43730(void)

void FUN_145f43730(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d4ac8) {
    FUN_144b3d300(&DAT_14c9d4ac8);
    if (DAT_14c9d4ac8 == -1) {
      FUN_145f43836(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x113;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d4a48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c4e306);
      _Init_thread_footer(&DAT_14c9d4ac8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f43836 FUN_145f43836 body=226 status=ok
// SIG undefined FUN_145f43836(void)

longlong * FUN_145f43836(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462c9b50;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f4391a FUN_145f4391a body=138 status=ok
// SIG undefined FUN_145f4391a(void)

code * FUN_145f4391a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CPUAllocatedCompactedTileCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000117;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147177cdc;
}



// FUNCTION 145f439a4 FUN_145f439a4 body=138 status=ok
// SIG undefined FUN_145f439a4(void)

code * FUN_145f439a4(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedVisTileArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000011c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462c9c6e;
}



// FUNCTION 145f43a2e FUN_145f43a2e body=138 status=ok
// SIG undefined FUN_145f43a2e(void)

code * FUN_145f43a2e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairCountTexture_ForDebug";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6000000118;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f4391a;
}



// FUNCTION 145f43ab8 FUN_145f43ab8 body=292 status=ok
// SIG undefined FUN_145f43ab8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f43ab8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6208) {
    FUN_144b3d300(&DAT_14c9d6208);
    if (DAT_14c9d6208 == -1) {
      FUN_145f43d26();
      FUN_145f43bdc();
      FUN_140db5666(&DAT_14c9d6160,0,&DAT_14c9d60f8,L"FHairStrandsTileGenerationPassCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityTile.usf",L"TileMainCS",5,4,
                    FUN_14717ea24,FUN_14717e9c4,&LAB_14580d454,&LAB_14717e9c0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d9f98);
      _DAT_14c9d6160 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c5ea3b);
      _Init_thread_footer(&DAT_14c9d6208);
    }
  }
  return &DAT_14c9d6160;
}



// FUNCTION 145f43bdc FUN_145f43bdc body=205 status=ok
// SIG undefined FUN_145f43bdc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f43bdc(void)

{
  if ((DAT_14c9d615f & 2) == 0) {
    DAT_14c9d615f = DAT_14c9d615f | 2;
    _DAT_14c9d6100 = L"FHairStrandsTileGenerationPassCS";
    _DAT_14c9d6118 = FUN_146826540;
    _DAT_14c9d6120 = FUN_146825d77;
    _DAT_14c9d6128 = FUN_146825fd6;
    _DAT_14c9d6130 = FUN_1407e02ea;
    _DAT_14c9d6138 = FUN_146826273;
    _DAT_14c9d6110 = FUN_14717e992;
    _DAT_14c9d6150 = 0xffffffff000000e0;
    _DAT_14c9d6158 = 8;
    DAT_14c9d615c = 0;
    _DAT_14c9d6140 = &LAB_14717e9bc;
    FUN_145f43caa();
    FUN_1407e00cc(&DAT_14c9d60f8);
    return;
  }
  return;
}



// FUNCTION 145f43caa FUN_145f43caa body=123 status=ok
// SIG undefined FUN_145f43caa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f43caa(void)

{
  _DAT_14c9db858 = L"BASE";
  DAT_14c9db882 = 4;
  _DAT_14c9db860 = FUN_140b35ae4();
  _DAT_14c9db868 = DAT_14c9d6108;
  _DAT_14c9db870 = &LAB_14682652b;
  DAT_14c9d6108 = &DAT_14c9db858;
  DAT_14c9d615d = DAT_14c9d615d + '\x01';
  _DAT_14c9db878 = 0x100000000;
  if (*(char *)(_DAT_14c9db860 + 100) != '\0') {
    DAT_14c9d615e = DAT_14c9d615e + '\x01';
  }
  return;
}



// FUNCTION 145f43d26 FUN_145f43d26 body=261 status=ok
// SIG undefined FUN_145f43d26(void)

void FUN_145f43d26(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da018) {
    FUN_144b3d300(&DAT_14c9da018);
    if (DAT_14c9da018 == -1) {
      FUN_145f43e2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x85;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d9f98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c6fadf);
      _Init_thread_footer(&DAT_14c9da018);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f43e2c FUN_145f43e2c body=226 status=ok
// SIG undefined FUN_145f43e2c(void)

longlong * FUN_145f43e2c(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462caaa6;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f43f10 FUN_145f43f10 body=138 status=ok
// SIG undefined FUN_145f43f10(void)

code * FUN_145f43f10(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileOtherBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147187630;
}



// FUNCTION 145f43f9a FUN_145f43f9a body=138 status=ok
// SIG undefined FUN_145f43f9a(void)

code * FUN_145f43f9a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"IntCoverageThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147187858;
}



// FUNCTION 145f44024 FUN_145f44024 body=138 status=ok
// SIG undefined FUN_145f44024(void)

code * FUN_145f44024(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"bForceOutputAllTiles";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000088;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471878e2;
}



// FUNCTION 145f440ae FUN_145f440ae body=292 status=ok
// SIG undefined FUN_145f440ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f440ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6ad0) {
    FUN_144b3d300(&DAT_14c9d6ad0);
    if (DAT_14c9d6ad0 == -1) {
      FUN_145f4431c();
      FUN_145f441d2();
      FUN_140db5666(&DAT_14c9d6a28,0,&DAT_14c9d69c0,L"FHairStrandsDeepShadowTransmittanceMaskCS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepTransmittanceMask.usf",L"MainCS",5,
                    2,FUN_14717f04e,FUN_14717efee,&LAB_1462ca3dc,&LAB_14717efea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da2c8);
      _DAT_14c9d6a28 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60d49);
      _Init_thread_footer(&DAT_14c9d6ad0);
    }
  }
  return &DAT_14c9d6a28;
}



// FUNCTION 145f441d2 FUN_145f441d2 body=205 status=ok
// SIG undefined FUN_145f441d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f441d2(void)

{
  if ((DAT_14c9d6a27 & 2) == 0) {
    DAT_14c9d6a27 = DAT_14c9d6a27 | 2;
    _DAT_14c9d69c8 = L"FHairStrandsDeepShadowTransmittanceMaskCS";
    _DAT_14c9d69e0 = FUN_146826540;
    _DAT_14c9d69e8 = FUN_146825d77;
    _DAT_14c9d69f0 = FUN_146825fd6;
    _DAT_14c9d69f8 = FUN_1407e02ea;
    _DAT_14c9d6a00 = FUN_146826273;
    _DAT_14c9d69d8 = FUN_14717efbc;
    _DAT_14c9d6a18 = 0xffffffff000000e0;
    _DAT_14c9d6a20 = 8;
    DAT_14c9d6a24 = 0;
    _DAT_14c9d6a08 = &LAB_14717efe6;
    FUN_145f442a0();
    FUN_1407e00cc(&DAT_14c9d69c0);
    return;
  }
  return;
}



// FUNCTION 145f442a0 FUN_145f442a0 body=123 status=ok
// SIG undefined FUN_145f442a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f442a0(void)

{
  _DAT_14c9db9a8 = L"BASE";
  DAT_14c9db9d2 = 4;
  _DAT_14c9db9b0 = FUN_140b35ae4();
  _DAT_14c9db9b8 = DAT_14c9d69d0;
  _DAT_14c9db9c0 = &LAB_14682652b;
  DAT_14c9d69d0 = &DAT_14c9db9a8;
  DAT_14c9d6a25 = DAT_14c9d6a25 + '\x01';
  _DAT_14c9db9c8 = 0x100000000;
  if (*(char *)(_DAT_14c9db9b0 + 100) != '\0') {
    DAT_14c9d6a26 = DAT_14c9d6a26 + '\x01';
  }
  return;
}



// FUNCTION 145f4431c FUN_145f4431c body=261 status=ok
// SIG undefined FUN_145f4431c(void)

void FUN_145f4431c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da348) {
    FUN_144b3d300(&DAT_14c9da348);
    if (DAT_14c9da348 == -1) {
      FUN_14159c10a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x13e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da2c8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c707b9);
      _Init_thread_footer(&DAT_14c9da348);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f44422 FUN_145f44422 body=138 status=ok
// SIG undefined FUN_145f44422(void)

code * FUN_145f44422(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeepShadow_FrontDepthTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000151;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f44536;
}



// FUNCTION 145f444ac FUN_145f444ac body=138 status=ok
// SIG undefined FUN_145f444ac(void)

code * FUN_145f444ac(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"DeepShadow_DebugMode";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe00000014d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147188c62;
}



// FUNCTION 145f44536 FUN_145f44536 body=138 status=ok
// SIG undefined FUN_145f44536(void)

code * FUN_145f44536(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RayMarchMaskTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13000000150;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147188bd8;
}



// FUNCTION 145f445c0 FUN_145f445c0 body=292 status=ok
// SIG undefined FUN_145f445c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f445c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d7a90) {
    FUN_144b3d300(&DAT_14c9d7a90);
    if (DAT_14c9d7a90 == -1) {
      FUN_145f4482e();
      FUN_145f446e4();
      FUN_140db5666(&DAT_14c9d79e8,0,&DAT_14c9d7980,L"FHairVelocityCS",
                    L"/Engine/Private/HairStrands/HairStrandsVelocity.usf",L"MainCS",5,8,
                    FUN_147181d9e,FUN_147181d3e,&LAB_14176438c,&LAB_147181d3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da8c0);
      _DAT_14c9d79e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66063);
      _Init_thread_footer(&DAT_14c9d7a90);
    }
  }
  return &DAT_14c9d79e8;
}



// FUNCTION 145f446e4 FUN_145f446e4 body=205 status=ok
// SIG undefined FUN_145f446e4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f446e4(void)

{
  if ((DAT_14c9d79e7 & 2) == 0) {
    DAT_14c9d79e7 = DAT_14c9d79e7 | 2;
    _DAT_14c9d7988 = L"FHairVelocityCS";
    _DAT_14c9d79a0 = FUN_146826540;
    _DAT_14c9d79a8 = FUN_146825d77;
    _DAT_14c9d79b0 = FUN_146825fd6;
    _DAT_14c9d79b8 = FUN_1407e02ea;
    _DAT_14c9d79c0 = FUN_146826273;
    _DAT_14c9d7998 = FUN_147181d0c;
    _DAT_14c9d79d8 = 0xffffffff000000e0;
    _DAT_14c9d79e0 = 8;
    DAT_14c9d79e4 = 0;
    _DAT_14c9d79c8 = &LAB_147181d36;
    FUN_145f447b2();
    FUN_1407e00cc(&DAT_14c9d7980);
    return;
  }
  return;
}



// FUNCTION 145f447b2 FUN_145f447b2 body=123 status=ok
// SIG undefined FUN_145f447b2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f447b2(void)

{
  _DAT_14c9dbb88 = L"BASE";
  DAT_14c9dbbb2 = 4;
  _DAT_14c9dbb90 = FUN_140b35ae4();
  _DAT_14c9dbb98 = DAT_14c9d7990;
  _DAT_14c9dbba0 = &LAB_14682652b;
  DAT_14c9d7990 = &DAT_14c9dbb88;
  DAT_14c9d79e5 = DAT_14c9d79e5 + '\x01';
  _DAT_14c9dbba8 = 0x100000000;
  if (*(char *)(_DAT_14c9dbb90 + 100) != '\0') {
    DAT_14c9d79e6 = DAT_14c9d79e6 + '\x01';
  }
  return;
}



// FUNCTION 145f4482e FUN_145f4482e body=261 status=ok
// SIG undefined FUN_145f4482e(void)

void FUN_145f4482e(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9da940) {
    FUN_144b3d300(&DAT_14c9da940);
    if (DAT_14c9da940 == -1) {
      FUN_14159c1ee(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x4d5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da8c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71cd9);
      _Init_thread_footer(&DAT_14c9da940);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f44934 FUN_145f44934 body=138 status=ok
// SIG undefined FUN_145f44934(void)

code * FUN_145f44934(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VelocityThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000004d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718bde4;
}



// FUNCTION 145f449be FUN_145f449be body=138 status=ok
// SIG undefined FUN_145f449be(void)

code * FUN_145f449be(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileCountXY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60000004e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cc3b6;
}



// FUNCTION 145f44a48 FUN_145f44a48 body=138 status=ok
// SIG undefined FUN_145f44a48(void)

code * FUN_145f44a48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000004e6;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cc32e;
}



// FUNCTION 145f44ad2 FUN_145f44ad2 body=292 status=ok
// SIG undefined FUN_145f44ad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f44ad2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8910) {
    FUN_144b3d300(&DAT_14c9d8910);
    if (DAT_14c9d8910 == -1) {
      FUN_145f44d40();
      FUN_145f44bf6();
      FUN_140db5666(&DAT_14c9d8868,0,&DAT_14c9d8800,L"FHairVisibilityControlPointIdCompactionCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityCompaction.usf",L"MainCS",5,
                    0x20,FUN_1471845d2,FUN_147184572,&LAB_141764bbe,&LAB_142c6612a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9daa58);
      _DAT_14c9d8868 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c6612d);
      _Init_thread_footer(&DAT_14c9d8910);
    }
  }
  return &DAT_14c9d8868;
}



// FUNCTION 145f44bf6 FUN_145f44bf6 body=205 status=ok
// SIG undefined FUN_145f44bf6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f44bf6(void)

{
  if ((DAT_14c9d8867 & 2) == 0) {
    DAT_14c9d8867 = DAT_14c9d8867 | 2;
    _DAT_14c9d8808 = L"FHairVisibilityControlPointIdCompactionCS";
    _DAT_14c9d8820 = FUN_146826540;
    _DAT_14c9d8828 = FUN_146825d77;
    _DAT_14c9d8830 = FUN_146825fd6;
    _DAT_14c9d8838 = FUN_1407e02ea;
    _DAT_14c9d8840 = FUN_146826273;
    _DAT_14c9d8818 = FUN_147184544;
    _DAT_14c9d8858 = 0xffffffff000000e0;
    _DAT_14c9d8860 = 8;
    DAT_14c9d8864 = 0;
    _DAT_14c9d8848 = &LAB_14718456e;
    FUN_145f44cc4();
    FUN_1407e00cc(&DAT_14c9d8800);
    return;
  }
  return;
}



// FUNCTION 145f44cc4 FUN_145f44cc4 body=123 status=ok
// SIG undefined FUN_145f44cc4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f44cc4(void)

{
  _DAT_14c9dc0c8 = L"BASE";
  DAT_14c9dc0f2 = 4;
  _DAT_14c9dc0d0 = FUN_140b35ae4();
  _DAT_14c9dc0d8 = DAT_14c9d8810;
  _DAT_14c9dc0e0 = &LAB_14682652b;
  DAT_14c9d8810 = &DAT_14c9dc0c8;
  DAT_14c9d8865 = DAT_14c9d8865 + '\x01';
  _DAT_14c9dc0e8 = 0x100000000;
  if (*(char *)(_DAT_14c9dc0d0 + 100) != '\0') {
    DAT_14c9d8866 = DAT_14c9d8866 + '\x01';
  }
  return;
}



// FUNCTION 145f44d40 FUN_145f44d40 body=261 status=ok
// SIG undefined FUN_145f44d40(void)

void FUN_145f44d40(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9daad8) {
    FUN_144b3d300(&DAT_14c9daad8);
    if (DAT_14c9daad8 == -1) {
      FUN_14159c2d2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 2000;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9daa58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71cfd);
      _Init_thread_footer(&DAT_14c9daad8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f44e46 FUN_145f44e46 body=138 status=ok
// SIG undefined FUN_145f44e46(void)

code * FUN_145f44e46(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompactNodeCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000007eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718c340;
}



// FUNCTION 145f44ed0 FUN_145f44ed0 body=138 status=ok
// SIG undefined FUN_145f44ed0(void)

code * FUN_145f44ed0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb8000007f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1462cc6f6;
}



// FUNCTION 145f44f5a FUN_145f44f5a body=138 status=ok
// SIG undefined FUN_145f44f5a(void)

code * FUN_145f44f5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"MSAA_VelocityTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x58000007e1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718c5f2;
}



// FUNCTION 145f44fe4 FUN_145f44fe4 body=292 status=ok
// SIG undefined FUN_145f44fe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f44fe4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d8a38) {
    FUN_144b3d300(&DAT_14c9d8a38);
    if (DAT_14c9d8a38 == -1) {
      FUN_145f45252();
      FUN_145f45108();
      FUN_140db5666(&DAT_14c9d8990,0,&DAT_14c9d8928,L"FHairVisibilityCompactionComputeRasterCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityCompactionComputeRaster.usf",
                    L"MainCS",5,8,FUN_147184698,FUN_147184638,&LAB_141764c08,&LAB_147184634,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9daae0);
      _DAT_14c9d8990 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66139);
      _Init_thread_footer(&DAT_14c9d8a38);
    }
  }
  return &DAT_14c9d8990;
}



// FUNCTION 145f45108 FUN_145f45108 body=205 status=ok
// SIG undefined FUN_145f45108(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f45108(void)

{
  if ((DAT_14c9d898f & 2) == 0) {
    DAT_14c9d898f = DAT_14c9d898f | 2;
    _DAT_14c9d8930 = L"FHairVisibilityCompactionComputeRasterCS";
    _DAT_14c9d8948 = FUN_146826540;
    _DAT_14c9d8950 = FUN_146825d77;
    _DAT_14c9d8958 = FUN_146825fd6;
    _DAT_14c9d8960 = FUN_1407e02ea;
    _DAT_14c9d8968 = FUN_146826273;
    _DAT_14c9d8940 = FUN_147184606;
    _DAT_14c9d8980 = 0xffffffff000000e0;
    _DAT_14c9d8988 = 8;
    DAT_14c9d898c = 0;
    _DAT_14c9d8970 = &LAB_147184630;
    FUN_145f451d6();
    FUN_1407e00cc(&DAT_14c9d8928);
    return;
  }
  return;
}



// FUNCTION 145f451d6 FUN_145f451d6 body=123 status=ok
// SIG undefined FUN_145f451d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f451d6(void)

{
  _DAT_14c9dc0f8 = L"BASE";
  DAT_14c9dc122 = 4;
  _DAT_14c9dc100 = FUN_140b35ae4();
  _DAT_14c9dc108 = DAT_14c9d8938;
  _DAT_14c9dc110 = &LAB_14682652b;
  DAT_14c9d8938 = &DAT_14c9dc0f8;
  DAT_14c9d898d = DAT_14c9d898d + '\x01';
  _DAT_14c9dc118 = 0x100000000;
  if (*(char *)(_DAT_14c9dc100 + 100) != '\0') {
    DAT_14c9d898e = DAT_14c9d898e + '\x01';
  }
  return;
}



// FUNCTION 145f45252 FUN_145f45252 body=261 status=ok
// SIG undefined FUN_145f45252(void)

void FUN_145f45252(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined4 local_50;
  longlong *local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  longlong local_20 [2];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dab60) {
    FUN_144b3d300(&DAT_14c9dab60);
    if (DAT_14c9dab60 == -1) {
      FUN_14159c3b6(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x887;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9daae0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d09);
      _Init_thread_footer(&DAT_14c9dab60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f45358 FUN_145f45358 body=138 status=ok
// SIG undefined FUN_145f45358(void)

code * FUN_145f45358(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"TileSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000088f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718d02e;
}



// FUNCTION 145f453e2 FUN_145f453e2 body=138 status=ok
// SIG undefined FUN_145f453e2(void)

code * FUN_145f453e2(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompactNodeIndex";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4800000896;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718ce06;
}



// FUNCTION 145f4546c FUN_145f4546c body=138 status=ok
// SIG undefined FUN_145f4546c(void)

code * FUN_145f4546c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"OutCompactNodeVis";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5800000898;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718cd7c;
}



// FUNCTION 145f454f6 FUN_145f454f6 body=292 status=ok
// SIG undefined FUN_145f454f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f454f6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9128) {
    FUN_144b3d300(&DAT_14c9d9128);
    if (DAT_14c9d9128 == -1) {
      FUN_145f45764();
      FUN_145f4561a();
      FUN_140db5666(&DAT_14c9d9080,0,&DAT_14c9d9018,L"FVisiblityRasterClassificationCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterClassification.usf",
                    L"CSMain",5,2,FUN_147185230,FUN_1471851d0,&LAB_1462ca472,&LAB_1471851cc,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9dae98);
      _DAT_14c9d9080 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c66181);
      _Init_thread_footer(&DAT_14c9d9128);
    }
  }
  return &DAT_14c9d9080;
}



// FUNCTION 145f4561a FUN_145f4561a body=205 status=ok
// SIG undefined FUN_145f4561a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f4561a(void)

{
  if ((DAT_14c9d907f & 2) == 0) {
    DAT_14c9d907f = DAT_14c9d907f | 2;
    _DAT_14c9d9020 = L"FVisiblityRasterClassificationCS";
    _DAT_14c9d9038 = FUN_146826540;
    _DAT_14c9d9040 = FUN_146825d77;
    _DAT_14c9d9048 = FUN_146825fd6;
    _DAT_14c9d9050 = FUN_1407e02ea;
    _DAT_14c9d9058 = FUN_146826273;
    _DAT_14c9d9030 = FUN_14718519e;
    _DAT_14c9d9070 = 0xffffffff000000e0;
    _DAT_14c9d9078 = 8;
    DAT_14c9d907c = 0;
    _DAT_14c9d9060 = &LAB_1471851c8;
    FUN_145f456e8();
    FUN_1407e00cc(&DAT_14c9d9018);
    return;
  }
  return;
}


