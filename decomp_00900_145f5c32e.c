// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145f5c32e FUN_145f5c32e body=138 status=ok
// SIG undefined FUN_145f5c32e(void)

code * FUN_145f5c32e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UITextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000038;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147510c44;
}



// FUNCTION 145f5c3b8 FUN_145f5c3b8 body=292 status=ok
// SIG undefined FUN_145f5c3b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5c3b8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5080) {
    FUN_144b3d300(&DAT_14caf5080);
    if (DAT_14caf5080 == -1) {
      FUN_145f5c626();
      FUN_145f5c4dc();
      FUN_140db5666(&DAT_14caf4fd8,0,&DAT_14caf4f70,L"FParticleBoundsCS",
                    L"/Engine/Private/ParticleBoundsShader.usf",L"ComputeParticleBounds",5,1,
                    FUN_147c10164,FUN_147c10104,&LAB_147c100ec,&LAB_147c100e8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14caf5510);
      _DAT_14caf4fd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435d2a9f);
      _Init_thread_footer(&DAT_14caf5080);
    }
  }
  return &DAT_14caf4fd8;
}



// FUNCTION 145f5c4dc FUN_145f5c4dc body=205 status=ok
// SIG undefined FUN_145f5c4dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5c4dc(void)

{
  if ((DAT_14caf4fd7 & 2) == 0) {
    DAT_14caf4fd7 = DAT_14caf4fd7 | 2;
    _DAT_14caf4f78 = L"FParticleBoundsCS";
    _DAT_14caf4f90 = FUN_146826540;
    _DAT_14caf4f98 = FUN_146825d77;
    _DAT_14caf4fa0 = FUN_146825fd6;
    _DAT_14caf4fa8 = FUN_1407e02ea;
    _DAT_14caf4fb0 = FUN_146826273;
    _DAT_14caf4f88 = FUN_147c100ba;
    _DAT_14caf4fc8 = 0xffffffff000000e0;
    _DAT_14caf4fd0 = 8;
    DAT_14caf4fd4 = 0;
    _DAT_14caf4fb8 = &LAB_147c100e4;
    FUN_145f5c5aa();
    FUN_1407e00cc(&DAT_14caf4f70);
    return;
  }
  return;
}



// FUNCTION 145f5c5aa FUN_145f5c5aa body=123 status=ok
// SIG undefined FUN_145f5c5aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5c5aa(void)

{
  _DAT_14caf5968 = L"BASE";
  DAT_14caf5992 = 4;
  _DAT_14caf5970 = FUN_140b35ae4();
  _DAT_14caf5978 = DAT_14caf4f80;
  _DAT_14caf5980 = &LAB_14682652b;
  DAT_14caf4f80 = &DAT_14caf5968;
  DAT_14caf4fd5 = DAT_14caf4fd5 + '\x01';
  _DAT_14caf5988 = 0x100000000;
  if (*(char *)(_DAT_14caf5970 + 100) != '\0') {
    DAT_14caf4fd6 = DAT_14caf4fd6 + '\x01';
  }
  return;
}



// FUNCTION 145f5c626 FUN_145f5c626 body=261 status=ok
// SIG undefined FUN_145f5c626(void)

void FUN_145f5c626(void)

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
              0x110) < DAT_14caf5590) {
    FUN_144b3d300(&DAT_14caf5590);
    if (DAT_14caf5590 == -1) {
      FUN_145f5c72c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0x8af;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf5510,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435df550);
      _Init_thread_footer(&DAT_14caf5590);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5c72c FUN_145f5c72c body=226 status=ok
// SIG undefined FUN_145f5c72c(void)

longlong * FUN_145f5c72c(longlong *param_1)

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
  pcVar13 = FUN_145e08512;
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



// FUNCTION 145f5c810 FUN_145f5c810 body=138 status=ok
// SIG undefined FUN_145f5c810(void)

code * FUN_145f5c810(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PositionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000008b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c23266;
}



// FUNCTION 145f5c89a FUN_145f5c89a body=138 status=ok
// SIG undefined FUN_145f5c89a(void)

code * FUN_145f5c89a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TextureSizeY";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000008b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147c232f0;
}



// FUNCTION 145f5c924 FUN_145f5c924 body=138 status=ok
// SIG undefined FUN_145f5c924(void)

code * FUN_145f5c924(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutBounds";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000008b3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 7;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1463f03d6;
}



// FUNCTION 145f5c9ae FUN_145f5c9ae body=292 status=ok
// SIG undefined FUN_145f5c9ae(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5c9ae(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2d860) {
    FUN_144b3d300(&DAT_14cb2d860);
    if (DAT_14cb2d860 == -1) {
      FUN_145f5cc1c();
      FUN_145f5cad2();
      FUN_140db5666(&DAT_14cb2d7b8,0,&DAT_14cb2d750,L"FNiagaraRayMarchGlobalSdfCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraRayMarchingShaders.usf",
                    L"NiagaraRayMarchGlobalSdfCS",5,1,FUN_14804b7b8,FUN_14804b758,FUN_14646068e,
                    &LAB_14804b754,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cb332c0);
      _DAT_14cb2d7b8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f7cad);
      _Init_thread_footer(&DAT_14cb2d860);
    }
  }
  return &DAT_14cb2d7b8;
}



// FUNCTION 145f5cad2 FUN_145f5cad2 body=205 status=ok
// SIG undefined FUN_145f5cad2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5cad2(void)

{
  if ((DAT_14cb2d7b7 & 2) == 0) {
    DAT_14cb2d7b7 = DAT_14cb2d7b7 | 2;
    _DAT_14cb2d758 = L"FNiagaraRayMarchGlobalSdfCS";
    _DAT_14cb2d770 = FUN_146826540;
    _DAT_14cb2d778 = FUN_146825d77;
    _DAT_14cb2d780 = FUN_146825fd6;
    _DAT_14cb2d788 = FUN_1407e02ea;
    _DAT_14cb2d790 = FUN_146826273;
    _DAT_14cb2d768 = FUN_14804b726;
    _DAT_14cb2d7a8 = 0xffffffff000000e0;
    _DAT_14cb2d7b0 = 8;
    DAT_14cb2d7b4 = 0;
    _DAT_14cb2d798 = &LAB_14804b750;
    FUN_145f5cba0();
    FUN_1407e00cc(&DAT_14cb2d750);
    return;
  }
  return;
}



// FUNCTION 145f5cba0 FUN_145f5cba0 body=123 status=ok
// SIG undefined FUN_145f5cba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5cba0(void)

{
  _DAT_14cb35270 = L"BASE";
  DAT_14cb3529a = 4;
  _DAT_14cb35278 = FUN_140b35ae4();
  _DAT_14cb35280 = DAT_14cb2d760;
  _DAT_14cb35288 = &LAB_14682652b;
  DAT_14cb2d760 = &DAT_14cb35270;
  DAT_14cb2d7b5 = DAT_14cb2d7b5 + '\x01';
  _DAT_14cb35290 = 0x100000000;
  if (*(char *)(_DAT_14cb35278 + 100) != '\0') {
    DAT_14cb2d7b6 = DAT_14cb2d7b6 + '\x01';
  }
  return;
}



// FUNCTION 145f5cc1c FUN_145f5cc1c body=261 status=ok
// SIG undefined FUN_145f5cc1c(void)

void FUN_145f5cc1c(void)

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
              0x110) < DAT_14cb33340) {
    FUN_144b3d300(&DAT_14cb33340);
    if (DAT_14cb33340 == -1) {
      FUN_145f5cd22(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x260;
      local_58 = 0x3d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb332c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb670);
      _Init_thread_footer(&DAT_14cb33340);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5cd22 FUN_145f5cd22 body=226 status=ok
// SIG undefined FUN_145f5cd22(void)

longlong * FUN_145f5cd22(longlong *param_1)

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
  pcVar13 = FUN_146460e6c;
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



// FUNCTION 145f5ce06 FUN_145f5ce06 body=138 status=ok
// SIG undefined FUN_145f5ce06(void)

code * FUN_145f5ce06(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TracesOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_146460ef4;
}



// FUNCTION 145f5ce90 FUN_145f5ce90 body=138 status=ok
// SIG undefined FUN_145f5ce90(void)

code * FUN_145f5ce90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804ef42;
}



// FUNCTION 145f5cf1a FUN_145f5cf1a body=138 status=ok
// SIG undefined FUN_145f5cf1a(void)

code * FUN_145f5cf1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TraceCountsOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x25400000045;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5ce06;
}



// FUNCTION 145f5cfa4 FUN_145f5cfa4 body=206 status=ok
// SIG undefined FUN_145f5cfa4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5cfa4(void)

{
  if ((DAT_14cb2f3e7 & 2) == 0) {
    DAT_14cb2f3e7 = DAT_14cb2f3e7 | 2;
    _DAT_14cb2f388 = L"FNiagaraRibbonCreateIndexBufferParamsCS";
    _DAT_14cb2f3a0 = FUN_146826540;
    _DAT_14cb2f3a8 = FUN_146825d77;
    _DAT_14cb2f3b0 = FUN_146825fd6;
    _DAT_14cb2f3b8 = FUN_1407e02ea;
    _DAT_14cb2f3c0 = FUN_146826273;
    _DAT_14cb2f398 = FUN_14804d8b2;
    _DAT_14cb2f3d8 = 0xffffffff000000e0;
    _DAT_14cb2f3e0 = 8;
    DAT_14cb2f3e4 = 0;
    _DAT_14cb2f3c8 = &LAB_14804d8dc;
    FUN_145f5d072();
    FUN_1407e00cc(&DAT_14cb2f380);
  }
  return &DAT_14cb2f380;
}



// FUNCTION 145f5d072 FUN_145f5d072 body=123 status=ok
// SIG undefined FUN_145f5d072(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5d072(void)

{
  _DAT_14cb356f0 = L"BASE";
  DAT_14cb3571a = 4;
  _DAT_14cb356f8 = FUN_140b35ae4();
  _DAT_14cb35700 = DAT_14cb2f390;
  _DAT_14cb35708 = &LAB_14682652b;
  DAT_14cb2f390 = &DAT_14cb356f0;
  DAT_14cb2f3e5 = DAT_14cb2f3e5 + '\x01';
  _DAT_14cb35710 = 0x100000000;
  if (*(char *)(_DAT_14cb356f8 + 100) != '\0') {
    DAT_14cb2f3e6 = DAT_14cb2f3e6 + '\x01';
  }
  return;
}



// FUNCTION 145f5d0ee FUN_145f5d0ee body=138 status=ok
// SIG undefined FUN_145f5d0ee(void)

code * FUN_145f5d0ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GNiagaraRibbonTessellationAngle";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x54000000f2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464621ac;
}



// FUNCTION 145f5d178 FUN_145f5d178 body=138 status=ok
// SIG undefined FUN_145f5d178(void)

code * FUN_145f5d178(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmitterParticleCountsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint32>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805253e;
}



// FUNCTION 145f5d202 FUN_145f5d202 body=138 status=ok
// SIG undefined FUN_145f5d202(void)

code * FUN_145f5d202(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000000ea;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14805228c;
}



// FUNCTION 145f5d28c FUN_145f5d28c body=292 status=ok
// SIG undefined FUN_145f5d28c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5d28c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb48190) {
    FUN_144b3d300(&DAT_14cb48190);
    if (DAT_14cb48190 == -1) {
      FUN_145f5d4fa();
      FUN_145f5d3b0();
      FUN_140db5666(&DAT_14cb480e8,0,&DAT_14cb48080,L"FWaterQuadTreeTraverseCS",
                    L"/Plugin/Water/Private/WaterQuadTreeDraws.usf",L"MainCS",5,2,FUN_1483fcbfe,
                    FUN_1483fcb9e,&LAB_1483fcb9a,&LAB_1483fcb96,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cb48da8);
      _DAT_14cb480e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143b3bd01);
      _Init_thread_footer(&DAT_14cb48190);
    }
  }
  return &DAT_14cb480e8;
}



// FUNCTION 145f5d3b0 FUN_145f5d3b0 body=205 status=ok
// SIG undefined FUN_145f5d3b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5d3b0(void)

{
  if ((DAT_14cb480e7 & 2) == 0) {
    DAT_14cb480e7 = DAT_14cb480e7 | 2;
    _DAT_14cb48088 = L"FWaterQuadTreeTraverseCS";
    _DAT_14cb480a0 = FUN_146826540;
    _DAT_14cb480a8 = FUN_146825d77;
    _DAT_14cb480b0 = FUN_146825fd6;
    _DAT_14cb480b8 = FUN_1407e02ea;
    _DAT_14cb480c0 = FUN_146826273;
    _DAT_14cb48098 = FUN_1483fcb68;
    _DAT_14cb480d8 = 0xffffffff000000e0;
    _DAT_14cb480e0 = 8;
    DAT_14cb480e4 = 0;
    _DAT_14cb480c8 = &LAB_1483fcb92;
    FUN_145f5d47e();
    FUN_1407e00cc(&DAT_14cb48080);
    return;
  }
  return;
}



// FUNCTION 145f5d47e FUN_145f5d47e body=123 status=ok
// SIG undefined FUN_145f5d47e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5d47e(void)

{
  _DAT_14cb492e8 = L"BASE";
  DAT_14cb49312 = 4;
  _DAT_14cb492f0 = FUN_140b35ae4();
  _DAT_14cb492f8 = DAT_14cb48090;
  _DAT_14cb49300 = &LAB_14682652b;
  DAT_14cb48090 = &DAT_14cb492e8;
  DAT_14cb480e5 = DAT_14cb480e5 + '\x01';
  _DAT_14cb49308 = 0x100000000;
  if (*(char *)(_DAT_14cb492f0 + 100) != '\0') {
    DAT_14cb480e6 = DAT_14cb480e6 + '\x01';
  }
  return;
}



// FUNCTION 145f5d4fa FUN_145f5d4fa body=261 status=ok
// SIG undefined FUN_145f5d4fa(void)

void FUN_145f5d4fa(void)

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
              0x110) < DAT_14cb48e28) {
    FUN_144b3d300(&DAT_14cb48e28);
    if (DAT_14cb48e28 == -1) {
      FUN_14159e85a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0xcb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb48da8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143b3d201);
      _Init_thread_footer(&DAT_14cb48e28);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5d600 FUN_145f5d600 body=138 status=ok
// SIG undefined FUN_145f5d600(void)

code * FUN_145f5d600(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionQueryArgs";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14840068a;
}



// FUNCTION 145f5d68a FUN_145f5d68a body=138 status=ok
// SIG undefined FUN_145f5d68a(void)

code * FUN_145f5d68a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"QuadTreeResolutionX";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9c000000db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400126;
}



// FUNCTION 145f5d714 FUN_145f5d714 body=138 status=ok
// SIG undefined FUN_145f5d714(void)

code * FUN_145f5d714(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OcclusionQueryBoxes";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000ce;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_148400714;
}



// FUNCTION 145f5d79e FUN_145f5d79e body=292 status=ok
// SIG undefined FUN_145f5d79e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5d79e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb51798) {
    FUN_144b3d300(&DAT_14cb51798);
    if (DAT_14cb51798 == -1) {
      FUN_145f5da0c();
      FUN_145f5d8c2();
      FUN_140db5666(&DAT_14cb516f0,0,&DAT_14cb51688,L"FGBufferResolvePS",
                    L"/Plugin/DLSS/Private/GBufferResolve.usf",L"GBufferResolvePixelShader",3,0x10,
                    FUN_1485f19e0,FUN_1485f1980,&LAB_1457ff518,&LAB_1485f197c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb51960);
      _DAT_14cb516f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143bf7e0c);
      _Init_thread_footer(&DAT_14cb51798);
    }
  }
  return &DAT_14cb516f0;
}



// FUNCTION 145f5d8c2 FUN_145f5d8c2 body=205 status=ok
// SIG undefined FUN_145f5d8c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5d8c2(void)

{
  if ((DAT_14cb516ef & 2) == 0) {
    DAT_14cb516ef = DAT_14cb516ef | 2;
    _DAT_14cb51690 = L"FGBufferResolvePS";
    _DAT_14cb516a8 = FUN_146826540;
    _DAT_14cb516b0 = FUN_146825d77;
    _DAT_14cb516b8 = FUN_146825fd6;
    _DAT_14cb516c0 = FUN_1407e02ea;
    _DAT_14cb516c8 = FUN_146826273;
    _DAT_14cb516a0 = FUN_1485f194e;
    _DAT_14cb516e0 = 0xffffffff000000e0;
    _DAT_14cb516e8 = 8;
    DAT_14cb516ec = 0;
    _DAT_14cb516d0 = &LAB_1485f1978;
    FUN_145f5d990();
    FUN_1407e00cc(&DAT_14cb51688);
    return;
  }
  return;
}



// FUNCTION 145f5d990 FUN_145f5d990 body=123 status=ok
// SIG undefined FUN_145f5d990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5d990(void)

{
  _DAT_14cb51aa0 = L"BASE";
  DAT_14cb51aca = 4;
  _DAT_14cb51aa8 = FUN_140b35ae4();
  _DAT_14cb51ab0 = DAT_14cb51698;
  _DAT_14cb51ab8 = &LAB_14682652b;
  DAT_14cb51698 = &DAT_14cb51aa0;
  DAT_14cb516ed = DAT_14cb516ed + '\x01';
  _DAT_14cb51ac0 = 0x100000000;
  if (*(char *)(_DAT_14cb51aa8 + 100) != '\0') {
    DAT_14cb516ee = DAT_14cb516ee + '\x01';
  }
  return;
}



// FUNCTION 145f5da0c FUN_145f5da0c body=261 status=ok
// SIG undefined FUN_145f5da0c(void)

void FUN_145f5da0c(void)

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
              0x110) < DAT_14cb519e0) {
    FUN_144b3d300(&DAT_14cb519e0);
    if (DAT_14cb519e0 == -1) {
      FUN_145f5db12(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x250;
      local_58 = 0x46;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb51960,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf92a8);
      _Init_thread_footer(&DAT_14cb519e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5db12 FUN_145f5db12 body=226 status=ok
// SIG undefined FUN_145f5db12(void)

longlong * FUN_145f5db12(longlong *param_1)

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
  pcVar13 = FUN_1464a6cea;
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



// FUNCTION 145f5dbf6 FUN_145f5dbf6 body=138 status=ok
// SIG undefined FUN_145f5dbf6(void)

code * FUN_145f5dbf6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionHitDistance";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1485f1cb6;
}



// FUNCTION 145f5dc80 FUN_145f5dc80 body=138 status=ok
// SIG undefined FUN_145f5dc80(void)

code * FUN_145f5dc80(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreIntegratedGF";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a6f1a;
}



// FUNCTION 145f5dd0a FUN_145f5dd0a body=138 status=ok
// SIG undefined FUN_145f5dd0a(void)

code * FUN_145f5dd0a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PassthroughDiffuse";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000004f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1464a6dfa;
}



// FUNCTION 145f5dd94 FUN_145f5dd94 body=205 status=ok
// SIG undefined FUN_145f5dd94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5dd94(void)

{
  if ((DAT_14cb51817 & 2) == 0) {
    DAT_14cb51817 = DAT_14cb51817 | 2;
    _DAT_14cb517b8 = L"FVelocityCombineCS";
    _DAT_14cb517d0 = FUN_146826540;
    _DAT_14cb517d8 = FUN_146825d77;
    _DAT_14cb517e0 = FUN_146825fd6;
    _DAT_14cb517e8 = FUN_1407e02ea;
    _DAT_14cb517f0 = FUN_146826273;
    _DAT_14cb517c8 = FUN_1485f1a9e;
    _DAT_14cb51808 = 0xffffffff000000e0;
    _DAT_14cb51810 = 8;
    DAT_14cb51814 = 0;
    _DAT_14cb517f8 = &LAB_1485f1ac8;
    FUN_145f5de62();
    FUN_1407e00cc(&DAT_14cb517b0);
    return;
  }
  return;
}



// FUNCTION 145f5de62 FUN_145f5de62 body=123 status=ok
// SIG undefined FUN_145f5de62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5de62(void)

{
  _DAT_14cb51ad0 = L"BASE";
  DAT_14cb51afa = 4;
  _DAT_14cb51ad8 = FUN_140b35ae4();
  _DAT_14cb51ae0 = DAT_14cb517c0;
  _DAT_14cb51ae8 = &LAB_14682652b;
  DAT_14cb517c0 = &DAT_14cb51ad0;
  DAT_14cb51815 = DAT_14cb51815 + '\x01';
  _DAT_14cb51af0 = 0x100000000;
  if (*(char *)(_DAT_14cb51ad8 + 100) != '\0') {
    DAT_14cb51816 = DAT_14cb51816 + '\x01';
  }
  return;
}



// FUNCTION 145f5dede FUN_145f5dede body=226 status=ok
// SIG undefined FUN_145f5dede(void)

longlong * FUN_145f5dede(longlong *param_1)

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
  pcVar13 = FUN_1464a7034;
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



// FUNCTION 145f5dfc2 FUN_145f5dfc2 body=138 status=ok
// SIG undefined FUN_145f5dfc2(void)

code * FUN_145f5dfc2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000003d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5e0d6;
}



// FUNCTION 145f5e04c FUN_145f5e04c body=138 status=ok
// SIG undefined FUN_145f5e04c(void)

code * FUN_145f5e04c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DepthTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x880000003e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5dfc2;
}



// FUNCTION 145f5e0d6 FUN_145f5e0d6 body=144 status=ok
// SIG undefined FUN_145f5e0d6(void)

code * FUN_145f5e0d6(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14123be74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Velocity";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000003b;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1485f1ee2;
}



// FUNCTION 145f5e166 FUN_145f5e166 body=292 status=ok
// SIG undefined FUN_145f5e166(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5e166(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8a20) {
    FUN_144b3d300(&DAT_14cbf8a20);
    if (DAT_14cbf8a20 == -1) {
      FUN_145f5e3d4();
      FUN_145f5e28a();
      FUN_140db5666(&DAT_14cbf8978,0,&DAT_14cbf8910,L"FDrawDebugCardGuidesCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_149083c3a,
                    FUN_149083bda,FUN_14667abf6,&LAB_149083bd6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf8f38);
      _DAT_14cbf8978 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421c76);
      _Init_thread_footer(&DAT_14cbf8a20);
    }
  }
  return &DAT_14cbf8978;
}



// FUNCTION 145f5e28a FUN_145f5e28a body=205 status=ok
// SIG undefined FUN_145f5e28a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5e28a(void)

{
  if ((DAT_14cbf8977 & 2) == 0) {
    DAT_14cbf8977 = DAT_14cbf8977 | 2;
    _DAT_14cbf8918 = L"FDrawDebugCardGuidesCS";
    _DAT_14cbf8930 = FUN_146826540;
    _DAT_14cbf8938 = FUN_146825d77;
    _DAT_14cbf8940 = FUN_146825fd6;
    _DAT_14cbf8948 = FUN_1407e02ea;
    _DAT_14cbf8950 = FUN_146826273;
    _DAT_14cbf8928 = FUN_149083ba8;
    _DAT_14cbf8968 = 0xffffffff000000e0;
    _DAT_14cbf8970 = 8;
    DAT_14cbf8974 = 0;
    _DAT_14cbf8958 = &LAB_149083bd2;
    FUN_145f5e358();
    FUN_1407e00cc(&DAT_14cbf8910);
    return;
  }
  return;
}



// FUNCTION 145f5e358 FUN_145f5e358 body=123 status=ok
// SIG undefined FUN_145f5e358(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5e358(void)

{
  _DAT_14cbf91d8 = L"BASE";
  DAT_14cbf9202 = 4;
  _DAT_14cbf91e0 = FUN_140b35ae4();
  _DAT_14cbf91e8 = DAT_14cbf8920;
  _DAT_14cbf91f0 = &LAB_14682652b;
  DAT_14cbf8920 = &DAT_14cbf91d8;
  DAT_14cbf8975 = DAT_14cbf8975 + '\x01';
  _DAT_14cbf91f8 = 0x100000000;
  if (*(char *)(_DAT_14cbf91e0 + 100) != '\0') {
    DAT_14cbf8976 = DAT_14cbf8976 + '\x01';
  }
  return;
}



// FUNCTION 145f5e3d4 FUN_145f5e3d4 body=261 status=ok
// SIG undefined FUN_145f5e3d4(void)

void FUN_145f5e3d4(void)

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
              0x110) < DAT_14cbf8fb8) {
    FUN_144b3d300(&DAT_14cbf8fb8);
    if (DAT_14cbf8fb8 == -1) {
      FUN_14159eb64(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x216;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8f38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275ca);
      _Init_thread_footer(&DAT_14cbf8fb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5e4da FUN_145f5e4da body=138 status=ok
// SIG undefined FUN_145f5e4da(void)

code * FUN_145f5e4da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimRestPosition";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000228;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086cc8;
}



// FUNCTION 145f5e564 FUN_145f5e564 body=138 status=ok
// SIG undefined FUN_145f5e564(void)

code * FUN_145f5e564(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenDeformedOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000021f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149086ef0;
}



// FUNCTION 145f5e5ee FUN_145f5e5ee body=138 status=ok
// SIG undefined FUN_145f5e5ee(void)

code * FUN_145f5e5ee(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimDeformedPosition";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc000000229;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5e4da;
}



// FUNCTION 145f5e678 FUN_145f5e678 body=292 status=ok
// SIG undefined FUN_145f5e678(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5e678(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf8b48) {
    FUN_144b3d300(&DAT_14cbf8b48);
    if (DAT_14cbf8b48 == -1) {
      FUN_145f5e8e6();
      FUN_145f5e79c();
      FUN_140db5666(&DAT_14cbf8aa0,0,&DAT_14cbf8a38,L"FHairDebugPrintInstanceCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_149083d00,
                    FUN_149083ca0,FUN_14667ac3e,&LAB_149083c9c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbf8fc0);
      _DAT_14cbf8aa0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144421c82);
      _Init_thread_footer(&DAT_14cbf8b48);
    }
  }
  return &DAT_14cbf8aa0;
}



// FUNCTION 145f5e79c FUN_145f5e79c body=205 status=ok
// SIG undefined FUN_145f5e79c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5e79c(void)

{
  if ((DAT_14cbf8a9f & 2) == 0) {
    DAT_14cbf8a9f = DAT_14cbf8a9f | 2;
    _DAT_14cbf8a40 = L"FHairDebugPrintInstanceCS";
    _DAT_14cbf8a58 = FUN_146826540;
    _DAT_14cbf8a60 = FUN_146825d77;
    _DAT_14cbf8a68 = FUN_146825fd6;
    _DAT_14cbf8a70 = FUN_1407e02ea;
    _DAT_14cbf8a78 = FUN_146826273;
    _DAT_14cbf8a50 = FUN_149083c6e;
    _DAT_14cbf8a90 = 0xffffffff000000e0;
    _DAT_14cbf8a98 = 8;
    DAT_14cbf8a9c = 0;
    _DAT_14cbf8a80 = &LAB_149083c98;
    FUN_145f5e86a();
    FUN_1407e00cc(&DAT_14cbf8a38);
    return;
  }
  return;
}



// FUNCTION 145f5e86a FUN_145f5e86a body=123 status=ok
// SIG undefined FUN_145f5e86a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5e86a(void)

{
  _DAT_14cbf9208 = L"BASE";
  DAT_14cbf9232 = 4;
  _DAT_14cbf9210 = FUN_140b35ae4();
  _DAT_14cbf9218 = DAT_14cbf8a48;
  _DAT_14cbf9220 = &LAB_14682652b;
  DAT_14cbf8a48 = &DAT_14cbf9208;
  DAT_14cbf8a9d = DAT_14cbf8a9d + '\x01';
  _DAT_14cbf9228 = 0x100000000;
  if (*(char *)(_DAT_14cbf9210 + 100) != '\0') {
    DAT_14cbf8a9e = DAT_14cbf8a9e + '\x01';
  }
  return;
}



// FUNCTION 145f5e8e6 FUN_145f5e8e6 body=261 status=ok
// SIG undefined FUN_145f5e8e6(void)

void FUN_145f5e8e6(void)

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
              0x110) < DAT_14cbf9040) {
    FUN_144b3d300(&DAT_14cbf9040);
    if (DAT_14cbf9040 == -1) {
      FUN_145f5e9ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x2df;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbf8fc0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444275d6);
      _Init_thread_footer(&DAT_14cbf9040);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5e9ec FUN_145f5e9ec body=226 status=ok
// SIG undefined FUN_145f5e9ec(void)

longlong * FUN_145f5e9ec(longlong *param_1)

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
  pcVar13 = FUN_14667b5a2;
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



// FUNCTION 145f5ead0 FUN_145f5ead0 body=138 status=ok
// SIG undefined FUN_145f5ead0(void)

code * FUN_145f5ead0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount_CardsOrMeshesShadowView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x14000002e5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f5ebe4;
}



// FUNCTION 145f5eb5a FUN_145f5eb5a body=138 status=ok
// SIG undefined FUN_145f5eb5a(void)

code * FUN_145f5eb5a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount_StrandsPrimaryView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000002e2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14908745c;
}



// FUNCTION 145f5ebe4 FUN_145f5ebe4 body=138 status=ok
// SIG undefined FUN_145f5ebe4(void)

code * FUN_145f5ebe4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCount_CardsOrMeshesPrimaryView";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000002e4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490873d2;
}



// FUNCTION 145f5ec6e FUN_145f5ec6e body=292 status=ok
// SIG undefined FUN_145f5ec6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5ec6e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbf9e78) {
    FUN_144b3d300(&DAT_14cbf9e78);
    if (DAT_14cbf9e78 == -1) {
      FUN_145f5eedc();
      FUN_145f5ed92();
      FUN_140db5666(&DAT_14cbf9dd0,0,&DAT_14cbf9d68,L"FHairStrandsTextureCS",
                    L"/Engine/Private/HairStrands/HairStrandsTexturesGeneration.usf",L"MainCS",5,1,
                    FUN_14909292c,FUN_1490928cc,&LAB_14667bd2a,&LAB_1490928c8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfa348);
      _DAT_14cbf9dd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144436bac);
      _Init_thread_footer(&DAT_14cbf9e78);
    }
  }
  return &DAT_14cbf9dd0;
}



// FUNCTION 145f5ed92 FUN_145f5ed92 body=205 status=ok
// SIG undefined FUN_145f5ed92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5ed92(void)

{
  if ((DAT_14cbf9dcf & 2) == 0) {
    DAT_14cbf9dcf = DAT_14cbf9dcf | 2;
    _DAT_14cbf9d70 = L"FHairStrandsTextureCS";
    _DAT_14cbf9d88 = FUN_146826540;
    _DAT_14cbf9d90 = FUN_146825d77;
    _DAT_14cbf9d98 = FUN_146825fd6;
    _DAT_14cbf9da0 = FUN_1407e02ea;
    _DAT_14cbf9da8 = FUN_146826273;
    _DAT_14cbf9d80 = FUN_14909289a;
    _DAT_14cbf9dc0 = 0xffffffff000000e0;
    _DAT_14cbf9dc8 = 8;
    DAT_14cbf9dcc = 0;
    _DAT_14cbf9db0 = &LAB_1490928c4;
    FUN_145f5ee60();
    FUN_1407e00cc(&DAT_14cbf9d68);
    return;
  }
  return;
}



// FUNCTION 145f5ee60 FUN_145f5ee60 body=123 status=ok
// SIG undefined FUN_145f5ee60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5ee60(void)

{
  _DAT_14cbfa5a8 = L"BASE";
  DAT_14cbfa5d2 = 4;
  _DAT_14cbfa5b0 = FUN_140b35ae4();
  _DAT_14cbfa5b8 = DAT_14cbf9d78;
  _DAT_14cbfa5c0 = &LAB_14682652b;
  DAT_14cbf9d78 = &DAT_14cbfa5a8;
  DAT_14cbf9dcd = DAT_14cbf9dcd + '\x01';
  _DAT_14cbfa5c8 = 0x100000000;
  if (*(char *)(_DAT_14cbfa5b0 + 100) != '\0') {
    DAT_14cbf9dce = DAT_14cbf9dce + '\x01';
  }
  return;
}



// FUNCTION 145f5eedc FUN_145f5eedc body=261 status=ok
// SIG undefined FUN_145f5eedc(void)

void FUN_145f5eedc(void)

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
              0x110) < DAT_14cbfa3c8) {
    FUN_144b3d300(&DAT_14cbfa3c8);
    if (DAT_14cbfa3c8 == -1) {
      FUN_14159ec48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x280;
      local_58 = 0x2e8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfa348,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444396e9);
      _Init_thread_footer(&DAT_14cbfa3c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5efe2 FUN_145f5efe2 body=138 status=ok
// SIG undefined FUN_145f5efe2(void)

code * FUN_145f5efe2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BitangentTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x26000000309;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095f22;
}



// FUNCTION 145f5f06c FUN_145f5f06c body=138 status=ok
// SIG undefined FUN_145f5f06c(void)

code * FUN_145f5f06c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_Size";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20c000002f9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490963fc;
}



// FUNCTION 145f5f0f6 FUN_145f5f0f6 body=138 status=ok
// SIG undefined FUN_145f5f0f6(void)

code * FUN_145f5f0f6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x24800000305;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_149095fac;
}



// FUNCTION 145f5f180 FUN_145f5f180 body=292 status=ok
// SIG undefined FUN_145f5f180(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5f180(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb070) {
    FUN_144b3d300(&DAT_14cbfb070);
    if (DAT_14cbfb070 == -1) {
      FUN_145f5f3ee();
      FUN_145f5f2a4();
      FUN_140db5666(&DAT_14cbfafc8,0,&DAT_14cbfaf60,L"FHairInterpolationCS",
                    L"/Engine/Private/HairStrands/HairStrandsInterpolation.usf",L"MainCS",5,0x100,
                    FUN_14909a2e4,FUN_14909a284,&LAB_141905d5e,&LAB_14443f11c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcb00);
      _DAT_14cbfafc8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443f11f);
      _Init_thread_footer(&DAT_14cbfb070);
    }
  }
  return &DAT_14cbfafc8;
}



// FUNCTION 145f5f2a4 FUN_145f5f2a4 body=205 status=ok
// SIG undefined FUN_145f5f2a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5f2a4(void)

{
  if ((DAT_14cbfafc7 & 2) == 0) {
    DAT_14cbfafc7 = DAT_14cbfafc7 | 2;
    _DAT_14cbfaf68 = L"FHairInterpolationCS";
    _DAT_14cbfaf80 = FUN_146826540;
    _DAT_14cbfaf88 = FUN_146825d77;
    _DAT_14cbfaf90 = FUN_146825fd6;
    _DAT_14cbfaf98 = FUN_1407e02ea;
    _DAT_14cbfafa0 = FUN_146826273;
    _DAT_14cbfaf78 = FUN_14909a256;
    _DAT_14cbfafb8 = 0xffffffff000000e0;
    _DAT_14cbfafc0 = 8;
    DAT_14cbfafc4 = 0;
    _DAT_14cbfafa8 = &LAB_14909a280;
    FUN_145f5f372();
    FUN_1407e00cc(&DAT_14cbfaf60);
    return;
  }
  return;
}



// FUNCTION 145f5f372 FUN_145f5f372 body=123 status=ok
// SIG undefined FUN_145f5f372(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5f372(void)

{
  _DAT_14cbfd648 = L"BASE";
  DAT_14cbfd672 = 4;
  _DAT_14cbfd650 = FUN_140b35ae4();
  _DAT_14cbfd658 = DAT_14cbfaf70;
  _DAT_14cbfd660 = &LAB_14682652b;
  DAT_14cbfaf70 = &DAT_14cbfd648;
  DAT_14cbfafc5 = DAT_14cbfafc5 + '\x01';
  _DAT_14cbfd668 = 0x100000000;
  if (*(char *)(_DAT_14cbfd650 + 100) != '\0') {
    DAT_14cbfafc6 = DAT_14cbfafc6 + '\x01';
  }
  return;
}



// FUNCTION 145f5f3ee FUN_145f5f3ee body=261 status=ok
// SIG undefined FUN_145f5f3ee(void)

void FUN_145f5f3ee(void)

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
              0x110) < DAT_14cbfcb80) {
    FUN_144b3d300(&DAT_14cbfcb80);
    if (DAT_14cbfcb80 == -1) {
      FUN_14159ed2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x1ee;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcb00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449442);
      _Init_thread_footer(&DAT_14cbfcb80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5f4f4 FUN_145f5f4f4 body=138 status=ok
// SIG undefined FUN_145f5f4f4(void)

code * FUN_145f5f4f4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SimRestPosePositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc800000202;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a8e06;
}



// FUNCTION 145f5f57e FUN_145f5f57e body=138 status=ok
// SIG undefined FUN_145f5f57e(void)

code * FUN_145f5f57e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrandsVFTODO_CullingIndirectBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x13800000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a878e;
}



// FUNCTION 145f5f608 FUN_145f5f608 body=138 status=ok
// SIG undefined FUN_145f5f608(void)

code * FUN_145f5f608(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenRestPosePositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb0000001fe;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a8f1a;
}



// FUNCTION 145f5f692 FUN_145f5f692 body=292 status=ok
// SIG undefined FUN_145f5f692(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5f692(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb2c0) {
    FUN_144b3d300(&DAT_14cbfb2c0);
    if (DAT_14cbfb2c0 == -1) {
      FUN_145f5f900();
      FUN_145f5f7b6();
      FUN_140db5666(&DAT_14cbfb218,0,&DAT_14cbfb1b0,L"FHairClusterAABBCS",
                    L"/Engine/Private/HairStrands/HairStrandsClusterCulling.usf",
                    L"ClusterAABBEvaluationCS",5,2,FUN_14909a698,FUN_14909a638,&LAB_14667c8b6,
                    &LAB_14909a634,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cbfcc10);
      _DAT_14cbfb218 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14443fd16);
      _Init_thread_footer(&DAT_14cbfb2c0);
    }
  }
  return &DAT_14cbfb218;
}



// FUNCTION 145f5f7b6 FUN_145f5f7b6 body=205 status=ok
// SIG undefined FUN_145f5f7b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5f7b6(void)

{
  if ((DAT_14cbfb217 & 2) == 0) {
    DAT_14cbfb217 = DAT_14cbfb217 | 2;
    _DAT_14cbfb1b8 = L"FHairClusterAABBCS";
    _DAT_14cbfb1d0 = FUN_146826540;
    _DAT_14cbfb1d8 = FUN_146825d77;
    _DAT_14cbfb1e0 = FUN_146825fd6;
    _DAT_14cbfb1e8 = FUN_1407e02ea;
    _DAT_14cbfb1f0 = FUN_146826273;
    _DAT_14cbfb1c8 = FUN_14909a606;
    _DAT_14cbfb208 = 0xffffffff000000e0;
    _DAT_14cbfb210 = 8;
    DAT_14cbfb214 = 0;
    _DAT_14cbfb1f8 = &LAB_14909a630;
    FUN_145f5f884();
    FUN_1407e00cc(&DAT_14cbfb1b0);
    return;
  }
  return;
}



// FUNCTION 145f5f884 FUN_145f5f884 body=123 status=ok
// SIG undefined FUN_145f5f884(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5f884(void)

{
  _DAT_14cbfd6a8 = L"BASE";
  DAT_14cbfd6d2 = 4;
  _DAT_14cbfd6b0 = FUN_140b35ae4();
  _DAT_14cbfd6b8 = DAT_14cbfb1c0;
  _DAT_14cbfd6c0 = &LAB_14682652b;
  DAT_14cbfb1c0 = &DAT_14cbfd6a8;
  DAT_14cbfb215 = DAT_14cbfb215 + '\x01';
  _DAT_14cbfd6c8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd6b0 + 100) != '\0') {
    DAT_14cbfb216 = DAT_14cbfb216 + '\x01';
  }
  return;
}



// FUNCTION 145f5f900 FUN_145f5f900 body=261 status=ok
// SIG undefined FUN_145f5f900(void)

void FUN_145f5f900(void)

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
              0x110) < DAT_14cbfcc90) {
    FUN_144b3d300(&DAT_14cbfcc90);
    if (DAT_14cbfcc90 == -1) {
      FUN_14159ee10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x343;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcc10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444945a);
      _Init_thread_footer(&DAT_14cbfcc90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5fa06 FUN_145f5fa06 body=138 status=ok
// SIG undefined FUN_145f5fa06(void)

code * FUN_145f5fa06(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x340000034a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9960;
}



// FUNCTION 145f5fa90 FUN_145f5fa90 body=138 status=ok
// SIG undefined FUN_145f5fa90(void)

code * FUN_145f5fa90(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClusterOffset";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2c00000348;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a99ea;
}



// FUNCTION 145f5fb1a FUN_145f5fb1a body=138 status=ok
// SIG undefined FUN_145f5fb1a(void)

code * FUN_145f5fb1a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToTranslatedWorldMatrix";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000034d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a984c;
}



// FUNCTION 145f5fba4 FUN_145f5fba4 body=292 status=ok
// SIG undefined FUN_145f5fba4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f5fba4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb3e8) {
    FUN_144b3d300(&DAT_14cbfb3e8);
    if (DAT_14cbfb3e8 == -1) {
      FUN_145f5fe12();
      FUN_145f5fcc8();
      FUN_140db5666(&DAT_14cbfb340,0,&DAT_14cbfb2d8,L"FHairCardsDeformationCS",
                    L"/Engine/Private/HairStrands/HairCardsDeformation.usf",L"MainCS",5,2,
                    FUN_14909a810,FUN_14909a7b0,&LAB_14667c8c0,&LAB_14909a7ac,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cbfcc98);
      _DAT_14cbfb340 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144440583);
      _Init_thread_footer(&DAT_14cbfb3e8);
    }
  }
  return &DAT_14cbfb340;
}



// FUNCTION 145f5fcc8 FUN_145f5fcc8 body=205 status=ok
// SIG undefined FUN_145f5fcc8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5fcc8(void)

{
  if ((DAT_14cbfb33f & 2) == 0) {
    DAT_14cbfb33f = DAT_14cbfb33f | 2;
    _DAT_14cbfb2e0 = L"FHairCardsDeformationCS";
    _DAT_14cbfb2f8 = FUN_146826540;
    _DAT_14cbfb300 = FUN_146825d77;
    _DAT_14cbfb308 = FUN_146825fd6;
    _DAT_14cbfb310 = FUN_1407e02ea;
    _DAT_14cbfb318 = FUN_146826273;
    _DAT_14cbfb2f0 = FUN_14909a77e;
    _DAT_14cbfb330 = 0xffffffff000000e0;
    _DAT_14cbfb338 = 8;
    DAT_14cbfb33c = 0;
    _DAT_14cbfb320 = &LAB_14909a7a8;
    FUN_145f5fd96();
    FUN_1407e00cc(&DAT_14cbfb2d8);
    return;
  }
  return;
}



// FUNCTION 145f5fd96 FUN_145f5fd96 body=123 status=ok
// SIG undefined FUN_145f5fd96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f5fd96(void)

{
  _DAT_14cbfd6d8 = L"BASE";
  DAT_14cbfd702 = 4;
  _DAT_14cbfd6e0 = FUN_140b35ae4();
  _DAT_14cbfd6e8 = DAT_14cbfb2e8;
  _DAT_14cbfd6f0 = &LAB_14682652b;
  DAT_14cbfb2e8 = &DAT_14cbfd6d8;
  DAT_14cbfb33d = DAT_14cbfb33d + '\x01';
  _DAT_14cbfd6f8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd6e0 + 100) != '\0') {
    DAT_14cbfb33e = DAT_14cbfb33e + '\x01';
  }
  return;
}



// FUNCTION 145f5fe12 FUN_145f5fe12 body=261 status=ok
// SIG undefined FUN_145f5fe12(void)

void FUN_145f5fe12(void)

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
              0x110) < DAT_14cbfcd18) {
    FUN_144b3d300(&DAT_14cbfcd18);
    if (DAT_14cbfcd18 == -1) {
      FUN_14159eef4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x100;
      local_58 = 0x3b3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcc98,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144449466);
      _Init_thread_footer(&DAT_14cbfcd18);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f5ff18 FUN_145f5ff18 body=138 status=ok
// SIG undefined FUN_145f5ff18(void)

code * FUN_145f5ff18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"GuideRestPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000003b9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aa0f0;
}



// FUNCTION 145f5ffa2 FUN_145f5ffa2 body=138 status=ok
// SIG undefined FUN_145f5ffa2(void)

code * FUN_145f5ffa2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CardsDeformedPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc8000003c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490a9c16;
}



// FUNCTION 145f6002c FUN_145f6002c body=138 status=ok
// SIG undefined FUN_145f6002c(void)

code * FUN_145f6002c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LocalToWorld";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000003b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000004;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490aa28e;
}



// FUNCTION 145f600b6 FUN_145f600b6 body=292 status=ok
// SIG undefined FUN_145f600b6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f600b6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfb9d0) {
    FUN_144b3d300(&DAT_14cbfb9d0);
    if (DAT_14cbfb9d0 == -1) {
      FUN_145f60324();
      FUN_145f601da();
      FUN_140db5666(&DAT_14cbfb928,0,&DAT_14cbfb8c0,L"FHairUpdateMeshTriangleCS",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainCS",5,4,FUN_14909bb7c,
                    FUN_14909bb1c,&LAB_14667c8ec,&LAB_14909bb18,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbfcf40);
      _DAT_14cbfb928 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1444429c8);
      _Init_thread_footer(&DAT_14cbfb9d0);
    }
  }
  return &DAT_14cbfb928;
}



// FUNCTION 145f601da FUN_145f601da body=205 status=ok
// SIG undefined FUN_145f601da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f601da(void)

{
  if ((DAT_14cbfb927 & 2) == 0) {
    DAT_14cbfb927 = DAT_14cbfb927 | 2;
    _DAT_14cbfb8c8 = L"FHairUpdateMeshTriangleCS";
    _DAT_14cbfb8e0 = FUN_146826540;
    _DAT_14cbfb8e8 = FUN_146825d77;
    _DAT_14cbfb8f0 = FUN_146825fd6;
    _DAT_14cbfb8f8 = FUN_1407e02ea;
    _DAT_14cbfb900 = FUN_146826273;
    _DAT_14cbfb8d8 = FUN_14909baea;
    _DAT_14cbfb918 = 0xffffffff000000e0;
    _DAT_14cbfb920 = 8;
    DAT_14cbfb924 = 0;
    _DAT_14cbfb908 = &LAB_14909bb14;
    FUN_145f602a8();
    FUN_1407e00cc(&DAT_14cbfb8c0);
    return;
  }
  return;
}



// FUNCTION 145f602a8 FUN_145f602a8 body=123 status=ok
// SIG undefined FUN_145f602a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f602a8(void)

{
  _DAT_14cbfd908 = L"BASE";
  DAT_14cbfd932 = 4;
  _DAT_14cbfd910 = FUN_140b35ae4();
  _DAT_14cbfd918 = DAT_14cbfb8d0;
  _DAT_14cbfd920 = &LAB_14682652b;
  DAT_14cbfb8d0 = &DAT_14cbfd908;
  DAT_14cbfb925 = DAT_14cbfb925 + '\x01';
  _DAT_14cbfd928 = 0x100000000;
  if (*(char *)(_DAT_14cbfd910 + 100) != '\0') {
    DAT_14cbfb926 = DAT_14cbfb926 + '\x01';
  }
  return;
}



// FUNCTION 145f60324 FUN_145f60324 body=261 status=ok
// SIG undefined FUN_145f60324(void)

void FUN_145f60324(void)

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
              0x110) < DAT_14cbfcfc0) {
    FUN_144b3d300(&DAT_14cbfcfc0);
    if (DAT_14cbfcfc0 == -1) {
      FUN_145f6042a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xb2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfcf40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444494a2);
      _Init_thread_footer(&DAT_14cbfcfc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6042a FUN_145f6042a body=226 status=ok
// SIG undefined FUN_145f6042a(void)

longlong * FUN_145f6042a(longlong *param_1)

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
  pcVar13 = FUN_14667dc7e;
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



// FUNCTION 145f6050e FUN_145f6050e body=138 status=ok
// SIG undefined FUN_145f6050e(void)

code * FUN_145f6050e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxUniqueTriangleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ab61a;
}



// FUNCTION 145f60598 FUN_145f60598 body=138 status=ok
// SIG undefined FUN_145f60598(void)

code * FUN_145f60598(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshTangentBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667dd06;
}



// FUNCTION 145f60622 FUN_145f60622 body=138 status=ok
// SIG undefined FUN_145f60622(void)

code * FUN_145f60622(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RDGMeshPositionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000b7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ab590;
}



// FUNCTION 145f606ac FUN_145f606ac body=292 status=ok
// SIG undefined FUN_145f606ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f606ac(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfbc20) {
    FUN_144b3d300(&DAT_14cbfbc20);
    if (DAT_14cbfbc20 == -1) {
      FUN_145f6091a();
      FUN_145f607d0();
      FUN_140db5666(&DAT_14cbfbb78,0,&DAT_14cbfbb10,L"FHairInitMeshSamplesCS",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainCS",5,2,FUN_14909bd08,
                    FUN_14909bca8,&LAB_14667c908,&LAB_14909bca4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbfd050);
      _DAT_14cbfbb78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14444382f);
      _Init_thread_footer(&DAT_14cbfbc20);
    }
  }
  return &DAT_14cbfbb78;
}



// FUNCTION 145f607d0 FUN_145f607d0 body=205 status=ok
// SIG undefined FUN_145f607d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f607d0(void)

{
  if ((DAT_14cbfbb77 & 2) == 0) {
    DAT_14cbfbb77 = DAT_14cbfbb77 | 2;
    _DAT_14cbfbb18 = L"FHairInitMeshSamplesCS";
    _DAT_14cbfbb30 = FUN_146826540;
    _DAT_14cbfbb38 = FUN_146825d77;
    _DAT_14cbfbb40 = FUN_146825fd6;
    _DAT_14cbfbb48 = FUN_1407e02ea;
    _DAT_14cbfbb50 = FUN_146826273;
    _DAT_14cbfbb28 = FUN_14909bc76;
    _DAT_14cbfbb68 = 0xffffffff000000e0;
    _DAT_14cbfbb70 = 8;
    DAT_14cbfbb74 = 0;
    _DAT_14cbfbb58 = &LAB_14909bca0;
    FUN_145f6089e();
    FUN_1407e00cc(&DAT_14cbfbb10);
    return;
  }
  return;
}



// FUNCTION 145f6089e FUN_145f6089e body=123 status=ok
// SIG undefined FUN_145f6089e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6089e(void)

{
  _DAT_14cbfd968 = L"BASE";
  DAT_14cbfd992 = 4;
  _DAT_14cbfd970 = FUN_140b35ae4();
  _DAT_14cbfd978 = DAT_14cbfbb20;
  _DAT_14cbfd980 = &LAB_14682652b;
  DAT_14cbfbb20 = &DAT_14cbfd968;
  DAT_14cbfbb75 = DAT_14cbfbb75 + '\x01';
  _DAT_14cbfd988 = 0x100000000;
  if (*(char *)(_DAT_14cbfd970 + 100) != '\0') {
    DAT_14cbfbb76 = DAT_14cbfbb76 + '\x01';
  }
  return;
}



// FUNCTION 145f6091a FUN_145f6091a body=261 status=ok
// SIG undefined FUN_145f6091a(void)

void FUN_145f6091a(void)

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
              0x110) < DAT_14cbfd0d0) {
    FUN_144b3d300(&DAT_14cbfd0d0);
    if (DAT_14cbfd0d0 == -1) {
      FUN_145f60a20(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x20e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd050,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499b1);
      _Init_thread_footer(&DAT_14cbfd0d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f60a20 FUN_145f60a20 body=226 status=ok
// SIG undefined FUN_145f60a20(void)

longlong * FUN_145f60a20(longlong *param_1)

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
  pcVar13 = FUN_14667de16;
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



// FUNCTION 145f60b04 FUN_145f60b04 body=138 status=ok
// SIG undefined FUN_145f60b04(void)

code * FUN_145f60b04(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxSampleCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000210;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490abefe;
}



// FUNCTION 145f60b8e FUN_145f60b8e body=138 status=ok
// SIG undefined FUN_145f60b8e(void)

code * FUN_145f60b8e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxVertexCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000211;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f60b04;
}



// FUNCTION 145f60c18 FUN_145f60c18 body=138 status=ok
// SIG undefined FUN_145f60c18(void)

code * FUN_145f60c18(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MeshPositionBuffer0";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000213;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f60b8e;
}



// FUNCTION 145f60ca2 FUN_145f60ca2 body=292 status=ok
// SIG undefined FUN_145f60ca2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f60ca2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfbd48) {
    FUN_144b3d300(&DAT_14cbfbd48);
    if (DAT_14cbfbd48 == -1) {
      FUN_145f60f10();
      FUN_145f60dc6();
      FUN_140db5666(&DAT_14cbfbca0,0,&DAT_14cbfbc38,L"FHairUpdateMeshSamplesCS",
                    L"/Engine/Private/HairStrands/HairStrandsMesh.usf",L"MainCS",5,1,FUN_14909be80,
                    FUN_14909be20,&LAB_14667c916,&LAB_14909be1c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14cbfd0d8);
      _DAT_14cbfbca0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144443d65);
      _Init_thread_footer(&DAT_14cbfbd48);
    }
  }
  return &DAT_14cbfbca0;
}



// FUNCTION 145f60dc6 FUN_145f60dc6 body=205 status=ok
// SIG undefined FUN_145f60dc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f60dc6(void)

{
  if ((DAT_14cbfbc9f & 2) == 0) {
    DAT_14cbfbc9f = DAT_14cbfbc9f | 2;
    _DAT_14cbfbc40 = L"FHairUpdateMeshSamplesCS";
    _DAT_14cbfbc58 = FUN_146826540;
    _DAT_14cbfbc60 = FUN_146825d77;
    _DAT_14cbfbc68 = FUN_146825fd6;
    _DAT_14cbfbc70 = FUN_1407e02ea;
    _DAT_14cbfbc78 = FUN_146826273;
    _DAT_14cbfbc50 = FUN_14909bdee;
    _DAT_14cbfbc90 = 0xffffffff000000e0;
    _DAT_14cbfbc98 = 8;
    DAT_14cbfbc9c = 0;
    _DAT_14cbfbc80 = &LAB_14909be18;
    FUN_145f60e94();
    FUN_1407e00cc(&DAT_14cbfbc38);
    return;
  }
  return;
}



// FUNCTION 145f60e94 FUN_145f60e94 body=123 status=ok
// SIG undefined FUN_145f60e94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f60e94(void)

{
  _DAT_14cbfd998 = L"BASE";
  DAT_14cbfd9c2 = 4;
  _DAT_14cbfd9a0 = FUN_140b35ae4();
  _DAT_14cbfd9a8 = DAT_14cbfbc48;
  _DAT_14cbfd9b0 = &LAB_14682652b;
  DAT_14cbfbc48 = &DAT_14cbfd998;
  DAT_14cbfbc9d = DAT_14cbfbc9d + '\x01';
  _DAT_14cbfd9b8 = 0x100000000;
  if (*(char *)(_DAT_14cbfd9a0 + 100) != '\0') {
    DAT_14cbfbc9e = DAT_14cbfbc9e + '\x01';
  }
  return;
}



// FUNCTION 145f60f10 FUN_145f60f10 body=261 status=ok
// SIG undefined FUN_145f60f10(void)

void FUN_145f60f10(void)

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
              0x110) < DAT_14cbfd158) {
    FUN_144b3d300(&DAT_14cbfd158);
    if (DAT_14cbfd158 == -1) {
      FUN_145f61016(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x288;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd0d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1444499bd);
      _Init_thread_footer(&DAT_14cbfd158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f61016 FUN_145f61016 body=226 status=ok
// SIG undefined FUN_145f61016(void)

longlong * FUN_145f61016(longlong *param_1)

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
  pcVar13 = FUN_14667df26;
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



// FUNCTION 145f610fa FUN_145f610fa body=138 status=ok
// SIG undefined FUN_145f610fa(void)

code * FUN_145f610fa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SampleDeformedPositionsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000028d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6120e;
}



// FUNCTION 145f61184 FUN_145f61184 body=138 status=ok
// SIG undefined FUN_145f61184(void)

code * FUN_145f61184(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InterpolationWeightsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000028b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14667dfae;
}



// FUNCTION 145f6120e FUN_145f6120e body=138 status=ok
// SIG undefined FUN_145f6120e(void)

code * FUN_145f6120e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SampleRestPositionsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000028c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61184;
}



// FUNCTION 145f61298 FUN_145f61298 body=292 status=ok
// SIG undefined FUN_145f61298(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f61298(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbfc840) {
    FUN_144b3d300(&DAT_14cbfc840);
    if (DAT_14cbfc840 == -1) {
      FUN_145f61506();
      FUN_145f613bc();
      FUN_140db5666(&DAT_14cbfc798,0,&DAT_14cbfc730,L"FInterpolateGroomGuidesCS",
                    L"/Plugin/Runtime/HairStrands/Private/NiagaraInterpolateGroomGuides.usf",
                    L"MainCS",5,2,FUN_14909faac,FUN_14909fa4c,&LAB_14667cc4c,&LAB_14909fa48,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14cbfd498);
      _DAT_14cbfc798 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_144446fce);
      _Init_thread_footer(&DAT_14cbfc840);
    }
  }
  return &DAT_14cbfc798;
}



// FUNCTION 145f613bc FUN_145f613bc body=205 status=ok
// SIG undefined FUN_145f613bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f613bc(void)

{
  if ((DAT_14cbfc797 & 2) == 0) {
    DAT_14cbfc797 = DAT_14cbfc797 | 2;
    _DAT_14cbfc738 = L"FInterpolateGroomGuidesCS";
    _DAT_14cbfc750 = FUN_146826540;
    _DAT_14cbfc758 = FUN_146825d77;
    _DAT_14cbfc760 = FUN_146825fd6;
    _DAT_14cbfc768 = FUN_1407e02ea;
    _DAT_14cbfc770 = FUN_146826273;
    _DAT_14cbfc748 = FUN_14909fa1a;
    _DAT_14cbfc788 = 0xffffffff000000e0;
    _DAT_14cbfc790 = 8;
    DAT_14cbfc794 = 0;
    _DAT_14cbfc778 = &LAB_14909fa44;
    FUN_145f6148a();
    FUN_1407e00cc(&DAT_14cbfc730);
    return;
  }
  return;
}



// FUNCTION 145f6148a FUN_145f6148a body=123 status=ok
// SIG undefined FUN_145f6148a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6148a(void)

{
  _DAT_14cbfdae0 = L"BASE";
  DAT_14cbfdb0a = 4;
  _DAT_14cbfdae8 = FUN_140b35ae4();
  _DAT_14cbfdaf0 = DAT_14cbfc740;
  _DAT_14cbfdaf8 = &LAB_14682652b;
  DAT_14cbfc740 = &DAT_14cbfdae0;
  DAT_14cbfc795 = DAT_14cbfc795 + '\x01';
  _DAT_14cbfdb00 = 0x100000000;
  if (*(char *)(_DAT_14cbfdae8 + 100) != '\0') {
    DAT_14cbfc796 = DAT_14cbfc796 + '\x01';
  }
  return;
}



// FUNCTION 145f61506 FUN_145f61506 body=261 status=ok
// SIG undefined FUN_145f61506(void)

void FUN_145f61506(void)

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
              0x110) < DAT_14cbfd518) {
    FUN_144b3d300(&DAT_14cbfd518);
    if (DAT_14cbfd518 == -1) {
      FUN_14159efd8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x392;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cbfd498,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14444a1e7);
      _Init_thread_footer(&DAT_14cbfd518);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6160c FUN_145f6160c body=138 status=ok
// SIG undefined FUN_145f6160c(void)

code * FUN_145f6160c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DeformedPositionOffset";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000039c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f61720;
}



// FUNCTION 145f61696 FUN_145f61696 body=138 status=ok
// SIG undefined FUN_145f61696(void)

code * FUN_145f61696(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"StrandsSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000003a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ad0f6;
}



// FUNCTION 145f61720 FUN_145f61720 body=138 status=ok
// SIG undefined FUN_145f61720(void)

code * FUN_145f61720(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"CurvesOffsetsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000039b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1490ad20a;
}



// FUNCTION 145f617aa FUN_145f617aa body=292 status=ok
// SIG undefined FUN_145f617aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f617aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cc29330) {
    FUN_144b3d300(&DAT_14cc29330);
    if (DAT_14cc29330 == -1) {
      FUN_145f61a18();
      FUN_145f618ce();
      FUN_140db5666(&DAT_14cc29288,0,&DAT_14cc29220,L"FFXFSR3CreateReactiveMaskCS",
                    L"/Plugin/FSR3/Private/PostProcessFFX_FSR3CreateReactiveMask.usf",L"MainCS",5,1,
                    FUN_14981ad66,FUN_14981ad06,&LAB_14981acee,&LAB_14981acea,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cc2a580);
      _DAT_14cc29288 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14464fbe0);
      _Init_thread_footer(&DAT_14cc29330);
    }
  }
  return &DAT_14cc29288;
}



// FUNCTION 145f618ce FUN_145f618ce body=205 status=ok
// SIG undefined FUN_145f618ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f618ce(void)

{
  if ((DAT_14cc29287 & 2) == 0) {
    DAT_14cc29287 = DAT_14cc29287 | 2;
    _DAT_14cc29228 = L"FFXFSR3CreateReactiveMaskCS";
    _DAT_14cc29240 = FUN_146826540;
    _DAT_14cc29248 = FUN_146825d77;
    _DAT_14cc29250 = FUN_146825fd6;
    _DAT_14cc29258 = FUN_1407e02ea;
    _DAT_14cc29260 = FUN_146826273;
    _DAT_14cc29238 = FUN_14981acbc;
    _DAT_14cc29278 = 0xffffffff000000e0;
    _DAT_14cc29280 = 8;
    DAT_14cc29284 = 0;
    _DAT_14cc29268 = &LAB_14981ace6;
    FUN_145f6199c();
    FUN_1407e00cc(&DAT_14cc29220);
    return;
  }
  return;
}



// FUNCTION 145f6199c FUN_145f6199c body=123 status=ok
// SIG undefined FUN_145f6199c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6199c(void)

{
  _DAT_14cc2a878 = L"BASE";
  DAT_14cc2a8a2 = 4;
  _DAT_14cc2a880 = FUN_140b35ae4();
  _DAT_14cc2a888 = DAT_14cc29230;
  _DAT_14cc2a890 = &LAB_14682652b;
  DAT_14cc29230 = &DAT_14cc2a878;
  DAT_14cc29285 = DAT_14cc29285 + '\x01';
  _DAT_14cc2a898 = 0x100000000;
  if (*(char *)(_DAT_14cc2a880 + 100) != '\0') {
    DAT_14cc29286 = DAT_14cc29286 + '\x01';
  }
  return;
}



// FUNCTION 145f61a18 FUN_145f61a18 body=261 status=ok
// SIG undefined FUN_145f61a18(void)

void FUN_145f61a18(void)

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
              0x110) < DAT_14cc2a600) {
    FUN_144b3d300(&DAT_14cc2a600);
    if (DAT_14cc2a600 == -1) {
      FUN_14159f0bc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0x7a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cc2a580,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_144656129);
      _Init_thread_footer(&DAT_14cc2a600);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f61b1e FUN_145f61b1e body=138 status=ok
// SIG undefined FUN_145f61b1e(void)

code * FUN_145f61b1e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskReflectionLumaBias";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb800000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981eb3a;
}



// FUNCTION 145f61ba8 FUN_145f61ba8 body=138 status=ok
// SIG undefined FUN_145f61ba8(void)

code * FUN_145f61ba8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskPreDOFTranslucencyScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcc00000095;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e912;
}



// FUNCTION 145f61c32 FUN_145f61c32 body=138 status=ok
// SIG undefined FUN_145f61c32(void)

code * FUN_145f61c32(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReactiveMaskTranslucencyMaxDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd400000097;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14981e888;
}



// FUNCTION 145f61cbc FUN_145f61cbc body=226 status=ok
// SIG undefined FUN_145f61cbc(void)

longlong * FUN_145f61cbc(longlong *param_1)

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
  pcVar13 = FUN_145ef2fb0;
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



// FUNCTION 145f61da0 FUN_145f61da0 body=138 status=ok
// SIG undefined FUN_145f61da0(void)

undefined1 * FUN_145f61da0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x922;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_14726d27e;
}



// FUNCTION 145f61e2a FUN_145f61e2a body=144 status=ok
// SIG undefined FUN_145f61e2a(void)

code * FUN_145f61e2a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000923;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f61da0;
}



// FUNCTION 145f61eba FUN_145f61eba body=144 status=ok
// SIG undefined FUN_145f61eba(void)

code * FUN_145f61eba(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1403b2516();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CardPass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLumenCardPassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000927;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f4e02;
}



// FUNCTION 145f61f4a FUN_145f61f4a body=226 status=ok
// SIG undefined FUN_145f61f4a(void)

longlong * FUN_145f61f4a(longlong *param_1)

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
  pcVar13 = FUN_146304bc0;
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



// FUNCTION 145f6202e FUN_145f6202e body=138 status=ok
// SIG undefined FUN_145f6202e(void)

undefined1 * FUN_145f6202e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1411f35ea();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"View";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FViewShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x135;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1472ce68e;
}



// FUNCTION 145f620b8 FUN_145f620b8 body=144 status=ok
// SIG undefined FUN_145f620b8(void)

code * FUN_145f620b8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1413d6116();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceCullingDrawParams";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceCullingDrawParams";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000136;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f6202e;
}



// FUNCTION 145f62148 FUN_145f62148 body=144 status=ok
// SIG undefined FUN_145f62148(void)

code * FUN_145f62148(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144886e74();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"BasePass";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FOpaqueBasePassUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000137;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f620b8;
}



// FUNCTION 145f621d8 FUN_145f621d8 body=138 status=ok
// SIG undefined FUN_145f621d8(void)

undefined1 * FUN_145f621d8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145f62262();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"ParticleSimVisualizeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FParticleSimVisualizeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7be;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caf4bd8;
  return &LAB_145f949c2;
}



// FUNCTION 145f62262 FUN_145f62262 body=278 status=ok
// SIG undefined FUN_145f62262(void)

undefined * FUN_145f62262(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined *local_70;
  undefined8 local_68;
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
  FUN_144a71728();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf4c58) {
    FUN_144b3d300(&DAT_14caf4c58);
    if (DAT_14caf4c58 == -1) {
      FUN_145f6237a(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = &DAT_14aa01e82;
      local_78 = L"FParticleSimVisualizeParameters";
      local_50 = 0x10;
      local_58 = 0x7ac;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caf4bd8,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1435d2a40);
      _Init_thread_footer(&DAT_14caf4c58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14caf4bd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6237a FUN_145f6237a body=232 status=ok
// SIG undefined FUN_145f6237a(void)

longlong * FUN_145f6237a(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  longlong lVar13;
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
  pcVar12 = FUN_1463f01c2;
  do {
    pcVar12 = (code *)(*pcVar12)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar12 != (code *)0x0);
  lVar13 = (longlong)(int)param_1[1];
  if (1 < lVar13) {
    lVar4 = *param_1;
    lVar14 = lVar13 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar5 = *(undefined8 *)(lVar4 + lVar15);
      uVar6 = ((undefined8 *)(lVar4 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar7 = *(undefined8 *)(lVar4 + lVar14);
      uVar8 = ((undefined8 *)(lVar4 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      uVar9 = *puVar2;
      uVar10 = puVar2[1];
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      uVar11 = puVar2[1];
      puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar11;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar15);
      *puVar2 = uVar9;
      puVar2[1] = uVar10;
      *(undefined8 *)(lVar4 + lVar15) = uVar7;
      ((undefined8 *)(lVar4 + lVar15))[1] = uVar8;
      local_48._0_4_ = (undefined4)uVar5;
      local_48._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar6;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar4 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar5;
      uStack_40 = uVar6;
    } while ((lVar13 * 8 & 0xfffffffffffffff0U) * 3 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 145f62468 FUN_145f62468 body=186 status=ok
// SIG undefined FUN_145f62468(void)

undefined8 * FUN_145f62468(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  code *local_48;
  undefined4 local_40;
  undefined1 local_38 [16];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 != 0) {
    lVar1 = FUN_144a2f878();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      local_48 = FUN_148deecfe;
      local_40 = 0;
      FUN_145f62626(local_38,param_1);
      FUN_145f62524(param_3 + 0x6e88,param_2,local_38);
      FUN_1449db362(local_38);
      goto LAB_145f624f6;
    }
  }
  *param_2 = 0;
LAB_145f624f6:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f62524 FUN_145f62524 body=216 status=ok
// SIG undefined FUN_145f62524(void)

undefined8 * FUN_145f62524(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) {
    cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))();
    if (cVar4 != '\0') {
      FUN_14474d06a(param_1,1);
      uVar5 = 0;
      if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_30);
        uVar5 = local_30;
      }
      *param_2 = uVar5;
      iVar1 = (int)param_1[1];
      *(uint *)(param_1 + 1) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
        FUN_1447a71f6(param_1,iVar1);
      }
      lVar3 = *param_1;
      lVar6 = (longlong)iVar1 * 0x10;
      *(undefined8 *)(lVar3 + lVar6) = 0;
      *(undefined4 *)(lVar3 + 8 + lVar6) = 0;
      *(longlong *)(lVar3 + lVar6) = *param_3;
      *param_3 = 0;
      *(int *)(lVar3 + 8 + lVar6) = (int)param_3[1];
      *(undefined4 *)(param_3 + 1) = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f62626 FUN_145f62626 body=428 status=ok
// SIG undefined FUN_145f62626(void)

longlong * FUN_145f62626(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  
  uVar3 = *(undefined4 *)(param_3 + 1);
  uVar4 = *param_3;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,4,0x10);
  *(undefined4 *)(param_1 + 1) = 4;
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x48);
  if (plVar6 == (longlong *)0x0) {
LAB_145f62706:
    *puVar5 = &PTR_LAB_14b99d700;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d690;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_145f62706;
      LOCK();
      iVar8 = (int)plVar6[1];
      bVar12 = iVar10 == iVar8;
      if (bVar12) {
        *(int *)(plVar6 + 1) = iVar10 + 1;
        iVar8 = iVar10;
      }
      iVar10 = iVar8;
      UNLOCK();
    } while (!bVar12);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b99d700;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    puVar5[2] = lVar11;
    *puVar5 = &PTR_FUN_14b99d690;
    puVar5[3] = uVar7;
    puVar5[4] = plVar6;
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    *(undefined4 *)(puVar5 + 6) = uVar3;
    puVar5[5] = uVar4;
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    LOCK();
    plVar1 = plVar6 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  return param_1;
}



// FUNCTION 145f627d2 FUN_145f627d2 body=292 status=ok
// SIG undefined FUN_145f627d2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f627d2(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d9250) {
    FUN_144b3d300(&DAT_14c9d9250);
    if (DAT_14c9d9250 == -1) {
      FUN_145f62a40();
      FUN_145f628f6();
      FUN_140db5666(&DAT_14c9d91a8,0,&DAT_14c9d9140,L"FVisiblityRasterComputeBinningCS",
                    L"/Engine/Private/HairStrands/HairStrandsVisibilityRasterCompute.usf",
                    L"BinningCS",5,4,FUN_1471852f6,FUN_147185296,&LAB_1462ca47c,&LAB_147185292,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9daf20);
      _DAT_14c9d91a8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c6618d);
      _Init_thread_footer(&DAT_14c9d9250);
    }
  }
  return &DAT_14c9d91a8;
}



// FUNCTION 145f628f6 FUN_145f628f6 body=205 status=ok
// SIG undefined FUN_145f628f6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f628f6(void)

{
  if ((DAT_14c9d91a7 & 2) == 0) {
    DAT_14c9d91a7 = DAT_14c9d91a7 | 2;
    _DAT_14c9d9148 = L"FVisiblityRasterComputeBinningCS";
    _DAT_14c9d9160 = FUN_146826540;
    _DAT_14c9d9168 = FUN_146825d77;
    _DAT_14c9d9170 = FUN_146825fd6;
    _DAT_14c9d9178 = FUN_1407e02ea;
    _DAT_14c9d9180 = FUN_146826273;
    _DAT_14c9d9158 = FUN_147185264;
    _DAT_14c9d9198 = 0xffffffff000000e0;
    _DAT_14c9d91a0 = 8;
    DAT_14c9d91a4 = 0;
    _DAT_14c9d9188 = &LAB_14718528e;
    FUN_145f629c4();
    FUN_1407e00cc(&DAT_14c9d9140);
    return;
  }
  return;
}



// FUNCTION 145f629c4 FUN_145f629c4 body=123 status=ok
// SIG undefined FUN_145f629c4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f629c4(void)

{
  _DAT_14c9dc248 = L"BASE";
  DAT_14c9dc272 = 4;
  _DAT_14c9dc250 = FUN_140b35ae4();
  _DAT_14c9dc258 = DAT_14c9d9150;
  _DAT_14c9dc260 = &LAB_14682652b;
  DAT_14c9d9150 = &DAT_14c9dc248;
  DAT_14c9d91a5 = DAT_14c9d91a5 + '\x01';
  _DAT_14c9dc268 = 0x100000000;
  if (*(char *)(_DAT_14c9dc250 + 100) != '\0') {
    DAT_14c9d91a6 = DAT_14c9d91a6 + '\x01';
  }
  return;
}



// FUNCTION 145f62a40 FUN_145f62a40 body=261 status=ok
// SIG undefined FUN_145f62a40(void)

void FUN_145f62a40(void)

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
              0x110) < DAT_14c9dafa0) {
    FUN_144b3d300(&DAT_14c9dafa0);
    if (DAT_14c9dafa0 == -1) {
      FUN_14159f1a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x280;
      local_58 = 0xce2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9daf20,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c71d69);
      _Init_thread_footer(&DAT_14c9dafa0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f62b46 FUN_145f62b46 body=138 status=ok
// SIG undefined FUN_145f62b46(void)

code * FUN_145f62b46(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutVisTilePrims";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x21000000ce9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718e528;
}



// FUNCTION 145f62bd0 FUN_145f62bd0 body=138 status=ok
// SIG undefined FUN_145f62bd0(void)

code * FUN_145f62bd0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairMaterialId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6400000ce5;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14718e63c;
}



// FUNCTION 145f62c5a FUN_145f62c5a body=140 status=ok
// SIG undefined FUN_145f62c5a(void)

undefined1 * FUN_145f62c5a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cabc08();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FRasterComputeCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xce3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9dae10;
  return &LAB_14718e6c6;
}



// FUNCTION 145f62ce6 FUN_145f62ce6 body=292 status=ok
// SIG undefined FUN_145f62ce6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f62ce6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9dcfd8) {
    FUN_144b3d300(&DAT_14c9dcfd8);
    if (DAT_14c9dcfd8 == -1) {
      FUN_145f62f54();
      FUN_145f62e0a();
      FUN_140db5666(&DAT_14c9dcf30,0,&DAT_14c9dcec8,L"FVoxelIndPageClearCS",
                    L"/Engine/Private/HairStrands/HairStrandsVoxelRasterCompute.usf",
                    L"VoxelIndPageClearCS",5,1,FUN_147198b86,FUN_147198b26,&LAB_1462ce34c,
                    &LAB_147198b22,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9e0290);
      _DAT_14c9dcf30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c86228);
      _Init_thread_footer(&DAT_14c9dcfd8);
    }
  }
  return &DAT_14c9dcf30;
}



// FUNCTION 145f62e0a FUN_145f62e0a body=205 status=ok
// SIG undefined FUN_145f62e0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f62e0a(void)

{
  if ((DAT_14c9dcf2f & 2) == 0) {
    DAT_14c9dcf2f = DAT_14c9dcf2f | 2;
    _DAT_14c9dced0 = L"FVoxelIndPageClearCS";
    _DAT_14c9dcee8 = FUN_146826540;
    _DAT_14c9dcef0 = FUN_146825d77;
    _DAT_14c9dcef8 = FUN_146825fd6;
    _DAT_14c9dcf00 = FUN_1407e02ea;
    _DAT_14c9dcf08 = FUN_146826273;
    _DAT_14c9dcee0 = FUN_147198af4;
    _DAT_14c9dcf20 = 0xffffffff000000e0;
    _DAT_14c9dcf28 = 8;
    DAT_14c9dcf2c = 0;
    _DAT_14c9dcf10 = &LAB_147198b1e;
    FUN_145f62ed8();
    FUN_1407e00cc(&DAT_14c9dcec8);
    return;
  }
  return;
}



// FUNCTION 145f62ed8 FUN_145f62ed8 body=123 status=ok
// SIG undefined FUN_145f62ed8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f62ed8(void)

{
  _DAT_14c9e15a0 = L"BASE";
  DAT_14c9e15ca = 4;
  _DAT_14c9e15a8 = FUN_140b35ae4();
  _DAT_14c9e15b0 = DAT_14c9dced8;
  _DAT_14c9e15b8 = &LAB_14682652b;
  DAT_14c9dced8 = &DAT_14c9e15a0;
  DAT_14c9dcf2d = DAT_14c9dcf2d + '\x01';
  _DAT_14c9e15c0 = 0x100000000;
  if (*(char *)(_DAT_14c9e15a8 + 100) != '\0') {
    DAT_14c9dcf2e = DAT_14c9dcf2e + '\x01';
  }
  return;
}



// FUNCTION 145f62f54 FUN_145f62f54 body=261 status=ok
// SIG undefined FUN_145f62f54(void)

void FUN_145f62f54(void)

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
              0x110) < DAT_14c9e0310) {
    FUN_144b3d300(&DAT_14c9e0310);
    if (DAT_14c9e0310 == -1) {
      FUN_145f6305a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x199;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9e0290,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c9e6ef);
      _Init_thread_footer(&DAT_14c9e0310);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6305a FUN_145f6305a body=226 status=ok
// SIG undefined FUN_145f6305a(void)

longlong * FUN_145f6305a(longlong *param_1)

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
  pcVar13 = FUN_1462ceca8;
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



// FUNCTION 145f6313e FUN_145f6313e body=138 status=ok
// SIG undefined FUN_145f6313e(void)

code * FUN_145f6313e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PageIndexGlobalCounter";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd00000019b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f63252;
}



// FUNCTION 145f631c8 FUN_145f631c8 body=138 status=ok
// SIG undefined FUN_145f631c8(void)

code * FUN_145f631c8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutPageTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd80000019c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6313e;
}



// FUNCTION 145f63252 FUN_145f63252 body=140 status=ok
// SIG undefined FUN_145f63252(void)

undefined1 * FUN_145f63252(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145a321e4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"VirtualVoxelParams";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsVoxelCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9dfed8;
  return &LAB_1471a1f0c;
}



// FUNCTION 145f632de FUN_145f632de body=205 status=ok
// SIG undefined FUN_145f632de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f632de(void)

{
  if ((DAT_14c9f40ff & 2) == 0) {
    DAT_14c9f40ff = DAT_14c9f40ff | 2;
    _DAT_14c9f40a0 = L"FLumenReflectionResolveCS";
    _DAT_14c9f40b8 = FUN_146826540;
    _DAT_14c9f40c0 = FUN_146825d77;
    _DAT_14c9f40c8 = FUN_146825fd6;
    _DAT_14c9f40d0 = FUN_1407e02ea;
    _DAT_14c9f40d8 = FUN_146826273;
    _DAT_14c9f40b0 = FUN_1471ef618;
    _DAT_14c9f40f0 = 0xffffffff000000e0;
    _DAT_14c9f40f8 = 8;
    DAT_14c9f40fc = 0;
    _DAT_14c9f40e0 = &LAB_1471ef642;
    FUN_145f633ac();
    FUN_1407e00cc(&DAT_14c9f4098);
    return;
  }
  return;
}



// FUNCTION 145f633ac FUN_145f633ac body=123 status=ok
// SIG undefined FUN_145f633ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f633ac(void)

{
  _DAT_14c9f7d58 = L"BASE";
  DAT_14c9f7d82 = 4;
  _DAT_14c9f7d60 = FUN_140b35ae4();
  _DAT_14c9f7d68 = DAT_14c9f40a8;
  _DAT_14c9f7d70 = &LAB_14682652b;
  DAT_14c9f40a8 = &DAT_14c9f7d58;
  DAT_14c9f40fd = DAT_14c9f40fd + '\x01';
  _DAT_14c9f7d78 = 0x100000000;
  if (*(char *)(_DAT_14c9f7d60 + 100) != '\0') {
    DAT_14c9f40fe = DAT_14c9f40fe + '\x01';
  }
  return;
}



// FUNCTION 145f63428 FUN_145f63428 body=138 status=ok
// SIG undefined FUN_145f63428(void)

code * FUN_145f63428(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumSpatialReconstructionSamples";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000020c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f634b2;
}



// FUNCTION 145f634b2 FUN_145f634b2 body=138 status=ok
// SIG undefined FUN_145f634b2(void)

code * FUN_145f634b2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWSpecularIndirectDepth";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2DArray<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000020b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471f85de;
}



// FUNCTION 145f6353c FUN_145f6353c body=146 status=ok
// SIG undefined FUN_145f6353c(void)

code * FUN_145f6353c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c7627c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"FrontLayerTranslucencyGBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenFrontLayerTranslucencyGBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a000000217;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6948;
  return FUN_1462de3a2;
}



// FUNCTION 145f635ce FUN_145f635ce body=292 status=ok
// SIG undefined FUN_145f635ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f635ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9f70) {
    FUN_144b3d300(&DAT_14c9f9f70);
    if (DAT_14c9f9f70 == -1) {
      FUN_145f6383c();
      FUN_145f636f2();
      FUN_140db5666(&DAT_14c9f9ec8,0,&DAT_14c9f9e60,L"FLumenSceneShadeLightSamplesCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLightingStochastic.usf",
                    L"ShadeLightSamplesCS",5,2,FUN_147205c3c,FUN_147205bdc,&LAB_1462e16c6,
                    &LAB_147205bd8,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fe558);
      _DAT_14c9f9ec8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d6950b);
      _Init_thread_footer(&DAT_14c9f9f70);
    }
  }
  return &DAT_14c9f9ec8;
}



// FUNCTION 145f636f2 FUN_145f636f2 body=205 status=ok
// SIG undefined FUN_145f636f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f636f2(void)

{
  if ((DAT_14c9f9ec7 & 2) == 0) {
    DAT_14c9f9ec7 = DAT_14c9f9ec7 | 2;
    _DAT_14c9f9e68 = L"FLumenSceneShadeLightSamplesCS";
    _DAT_14c9f9e80 = FUN_146826540;
    _DAT_14c9f9e88 = FUN_146825d77;
    _DAT_14c9f9e90 = FUN_146825fd6;
    _DAT_14c9f9e98 = FUN_1407e02ea;
    _DAT_14c9f9ea0 = FUN_146826273;
    _DAT_14c9f9e78 = FUN_147205baa;
    _DAT_14c9f9eb8 = 0xffffffff000000e0;
    _DAT_14c9f9ec0 = 8;
    DAT_14c9f9ec4 = 0;
    _DAT_14c9f9ea8 = &LAB_147205bd4;
    FUN_145f637c0();
    FUN_1407e00cc(&DAT_14c9f9e60);
    return;
  }
  return;
}



// FUNCTION 145f637c0 FUN_145f637c0 body=123 status=ok
// SIG undefined FUN_145f637c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f637c0(void)

{
  _DAT_14c9ffe88 = L"BASE";
  DAT_14c9ffeb2 = 4;
  _DAT_14c9ffe90 = FUN_140b35ae4();
  _DAT_14c9ffe98 = DAT_14c9f9e70;
  _DAT_14c9ffea0 = &LAB_14682652b;
  DAT_14c9f9e70 = &DAT_14c9ffe88;
  DAT_14c9f9ec5 = DAT_14c9f9ec5 + '\x01';
  _DAT_14c9ffea8 = 0x100000000;
  if (*(char *)(_DAT_14c9ffe90 + 100) != '\0') {
    DAT_14c9f9ec6 = DAT_14c9f9ec6 + '\x01';
  }
  return;
}



// FUNCTION 145f6383c FUN_145f6383c body=261 status=ok
// SIG undefined FUN_145f6383c(void)

void FUN_145f6383c(void)

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
              0x110) < DAT_14c9fe5d8) {
    FUN_144b3d300(&DAT_14c9fe5d8);
    if (DAT_14c9fe5d8 == -1) {
      FUN_14159f58e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x164;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fe558,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d993cb);
      _Init_thread_footer(&DAT_14c9fe5d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f63942 FUN_145f63942 body=132 status=ok
// SIG undefined FUN_145f63942(void)

undefined1 * FUN_145f63942(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DummyZeroForFixingShaderCompilerBug";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x165;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_14720eb38;
}



// FUNCTION 145f639c6 FUN_145f639c6 body=138 status=ok
// SIG undefined FUN_145f639c6(void)

code * FUN_145f639c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EmissiveAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000171;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14720e65e;
}



// FUNCTION 145f63a50 FUN_145f63a50 body=146 status=ok
// SIG undefined FUN_145f63a50(void)

code * FUN_145f63a50(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x500000016c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fbc20;
  return FUN_1462e3870;
}



// FUNCTION 145f63ae2 FUN_145f63ae2 body=205 status=ok
// SIG undefined FUN_145f63ae2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f63ae2(void)

{
  if ((DAT_14c9fbb5f & 2) == 0) {
    DAT_14c9fbb5f = DAT_14c9fbb5f | 2;
    _DAT_14c9fbb00 = L"FResampleLightingHistoryToCardCaptureAtlasCS";
    _DAT_14c9fbb18 = FUN_146826540;
    _DAT_14c9fbb20 = FUN_146825d77;
    _DAT_14c9fbb28 = FUN_146825fd6;
    _DAT_14c9fbb30 = FUN_1407e02ea;
    _DAT_14c9fbb38 = FUN_146826273;
    _DAT_14c9fbb10 = FUN_1472082d4;
    _DAT_14c9fbb50 = 0xffffffff000000e0;
    _DAT_14c9fbb58 = 8;
    DAT_14c9fbb5c = 0;
    _DAT_14c9fbb40 = &LAB_1472082fe;
    FUN_145f63bb0();
    FUN_1407e00cc(&DAT_14c9fbaf8);
    return;
  }
  return;
}



// FUNCTION 145f63bb0 FUN_145f63bb0 body=123 status=ok
// SIG undefined FUN_145f63bb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f63bb0(void)

{
  _DAT_14ca00298 = L"BASE";
  DAT_14ca002c2 = 4;
  _DAT_14ca002a0 = FUN_140b35ae4();
  _DAT_14ca002a8 = DAT_14c9fbb08;
  _DAT_14ca002b0 = &LAB_14682652b;
  DAT_14c9fbb08 = &DAT_14ca00298;
  DAT_14c9fbb5d = DAT_14c9fbb5d + '\x01';
  _DAT_14ca002b8 = 0x100000000;
  if (*(char *)(_DAT_14ca002a0 + 100) != '\0') {
    DAT_14c9fbb5e = DAT_14c9fbb5e + '\x01';
  }
  return;
}



// FUNCTION 145f63c2c FUN_145f63c2c body=226 status=ok
// SIG undefined FUN_145f63c2c(void)

longlong * FUN_145f63c2c(longlong *param_1)

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
  pcVar13 = FUN_1462e5040;
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



// FUNCTION 145f63d10 FUN_145f63d10 body=138 status=ok
// SIG undefined FUN_145f63d10(void)

code * FUN_145f63d10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWDirectLightingCardCaptureAtlas";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000063e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f63d9a;
}



// FUNCTION 145f63d9a FUN_145f63d9a body=138 status=ok
// SIG undefined FUN_145f63d9a(void)

code * FUN_145f63d9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TileShadowDownsampleFactorAtlasForResampling";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000063d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147215fec;
}



// FUNCTION 145f63e24 FUN_145f63e24 body=146 status=ok
// SIG undefined FUN_145f63e24(void)

code * FUN_145f63e24(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1449a4512();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"LumenCardScene";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenCardScene";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000639;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9fbc20;
  return FUN_1462e5150;
}



// FUNCTION 145f63eb6 FUN_145f63eb6 body=205 status=ok
// SIG undefined FUN_145f63eb6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f63eb6(void)

{
  if ((DAT_14ca5d0f7 & 2) == 0) {
    DAT_14ca5d0f7 = DAT_14ca5d0f7 | 2;
    _DAT_14ca5d098 = L"FRenderDistantSkyLightLutCS";
    _DAT_14ca5d0b0 = FUN_146826540;
    _DAT_14ca5d0b8 = FUN_146825d77;
    _DAT_14ca5d0c0 = FUN_146825fd6;
    _DAT_14ca5d0c8 = FUN_1407e02ea;
    _DAT_14ca5d0d0 = FUN_146826273;
    _DAT_14ca5d0a8 = FUN_147315e2c;
    _DAT_14ca5d0e8 = 0xffffffff000000e0;
    _DAT_14ca5d0f0 = 8;
    DAT_14ca5d0f4 = 0;
    _DAT_14ca5d0d8 = &LAB_147315e56;
    FUN_145f63f84();
    FUN_1407e00cc(&DAT_14ca5d090);
    return;
  }
  return;
}



// FUNCTION 145f63f84 FUN_145f63f84 body=123 status=ok
// SIG undefined FUN_145f63f84(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f63f84(void)

{
  _DAT_14ca5fa30 = L"BASE";
  DAT_14ca5fa5a = 4;
  _DAT_14ca5fa38 = FUN_140b35ae4();
  _DAT_14ca5fa40 = DAT_14ca5d0a0;
  _DAT_14ca5fa48 = &LAB_14682652b;
  DAT_14ca5d0a0 = &DAT_14ca5fa30;
  DAT_14ca5d0f5 = DAT_14ca5d0f5 + '\x01';
  _DAT_14ca5fa50 = 0x100000000;
  if (*(char *)(_DAT_14ca5fa38 + 100) != '\0') {
    DAT_14ca5d0f6 = DAT_14ca5d0f6 + '\x01';
  }
  return;
}



// FUNCTION 145f64000 FUN_145f64000 body=226 status=ok
// SIG undefined FUN_145f64000(void)

longlong * FUN_145f64000(longlong *param_1)

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
  pcVar13 = FUN_14630bd0e;
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



// FUNCTION 145f640e4 FUN_145f640e4 body=138 status=ok
// SIG undefined FUN_145f640e4(void)

code * FUN_145f640e4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"TransmittanceLutTextureSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000035f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f6416e;
}



// FUNCTION 145f6416e FUN_145f6416e body=138 status=ok
// SIG undefined FUN_145f6416e(void)

code * FUN_145f6416e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MultiScatteredLuminanceLutTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D<float3>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x380000035e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14731ad02;
}



// FUNCTION 145f641f8 FUN_145f641f8 body=146 status=ok
// SIG undefined FUN_145f641f8(void)

code * FUN_145f641f8(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a8c09c();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SkyAtmosphere";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FSkyAtmosphereInternalCommonParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000035a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca5cb58;
  return FUN_14630be1e;
}



// FUNCTION 145f64296 FUN_145f64296 body=278 status=ok
// SIG undefined FUN_145f64296(void)

undefined8 * FUN_145f64296(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412292fa();
  *param_1 = &PTR_FUN_14a4ef9b0;
  param_1[8] = &PTR_FUN_14a4efc90;
  lVar1 = FUN_145f643ae();
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(lVar1 + 0xc);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(lVar1 + 0x14);
  if ((*(uint *)(param_1 + 1) & 0x10) != 0) {
    local_18 = param_1[2];
    if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_20 = FUN_14099c56c();
    if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_20);
    }
    FUN_140909372(&local_20,&local_18);
    local_28 = param_1[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_1413336e6();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f643ae FUN_145f643ae body=108 status=ok
// SIG undefined FUN_145f643ae(void)

longlong FUN_145f643ae(void)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  
  if (DAT_14cab6a88 == 0) {
    lVar2 = FUN_14001cc68(0xa0,0x10);
    FUN_145f6441a(lVar2);
    lVar1 = DAT_14cab6a88;
    if ((DAT_14cab6a88 != lVar2) && (bVar3 = DAT_14cab6a88 != 0, DAT_14cab6a88 = lVar2, bVar3)) {
      FUN_1476c5348(lVar1);
      FUN_1400020a8(lVar1);
    }
  }
  return DAT_14cab6a88;
}



// FUNCTION 145f6441a FUN_145f6441a body=1478 status=ok
// SIG undefined FUN_145f6441a(void)

undefined4 * FUN_145f6441a(undefined4 *param_1)

{
  undefined ***pppuVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  undefined ****ppppuVar10;
  undefined1 auStack_148 [40];
  undefined **local_120;
  longlong local_118;
  longlong *local_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  longlong *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined2 local_b8 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined ***local_90;
  undefined4 local_88;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  *param_1 = 0xffffffff;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 5) = 0xffffffffffffffff;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_14a5074b0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0x100000000;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14a5074c0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0x100000000;
  plVar2 = (longlong *)FUN_14009d2a0();
  uVar3 = FUN_145d77b9e();
  FUN_1400abbfa(uVar3,&local_90,0,2);
  *(undefined2 *)param_1 = local_90._0_2_;
  local_90 = (undefined ***)0x0;
  local_88._0_1_ = 1;
  FUN_14159fc0c(uVar3,local_b8,&local_90);
  *(undefined2 *)((longlong)param_1 + 2) = local_b8[0];
  FUN_1400abbfa(uVar3,&local_90,0,2);
  *(undefined2 *)(param_1 + 3) = local_90._0_2_;
  local_90 = (undefined ***)0x0;
  local_88._0_1_ = 1;
  FUN_14159fd5c(uVar3,local_b8,&local_90);
  *(undefined2 *)((longlong)param_1 + 0xe) = local_b8[0];
  local_90 = (undefined ***)0x0;
  local_88._0_1_ = 6;
  FUN_14159fabe(uVar3,local_b8,&local_90);
  *(undefined2 *)(param_1 + 6) = local_b8[0];
  local_90 = (undefined ***)0x0;
  local_88 = CONCAT31(local_88._1_3_,4);
  FUN_14159feac(uVar3,local_b8,&local_90);
  *(undefined2 *)((longlong)param_1 + 0x1a) = local_b8[0];
  local_50 = local_50 | 3;
  local_88 = CONCAT22(local_b8[0],*(undefined2 *)(param_1 + 6));
  local_90 = (undefined ***)&PTR_FUN_14a5074d0;
  FUN_1400abcac(uVar3,&local_90);
  if ((local_50 & 1) != 0) {
    ppppuVar10 = &local_90;
    if ((local_50 & 2) == 0) {
      ppppuVar10 = (undefined ****)local_90;
    }
    local_50 = local_50 & 0xfe;
    (*(code *)**ppppuVar10)(ppppuVar10,0);
    if ((local_50 & 2) == 0) {
      FUN_1400020a8(local_90);
    }
  }
  lVar4 = FUN_14038fb82();
  FUN_1446ddc76(&local_98,"RenderOpacity",1);
  uVar3 = FUN_140de7a58();
  iVar6 = *(int *)(lVar4 + 0x7c0);
  lVar7 = (longlong)iVar6;
  *(uint *)(lVar4 + 0x7c0) = iVar6 + 1U;
  if (*(uint *)(lVar4 + 0x7c4) < iVar6 + 1U) {
    FUN_145d7b6d4(lVar4 + 0x678,iVar6);
  }
  lVar8 = lVar4 + 0x678;
  if (*(longlong *)(lVar4 + 0x7b8) != 0) {
    lVar8 = *(longlong *)(lVar4 + 0x7b8);
  }
  *(undefined8 *)(lVar8 + lVar7 * 0x28) = uVar3;
  *(undefined8 *)(lVar8 + 8 + lVar7 * 0x28) = local_98;
  *(undefined2 *)(lVar8 + 0x10 + lVar7 * 0x28) = 0xffff;
  *(undefined1 **)(lVar8 + 0x18 + lVar7 * 0x28) = &LAB_14332d79d;
  *(undefined1 **)(lVar8 + 0x20 + lVar7 * 0x28) = &LAB_14332d798;
  FUN_1446ddc76(&local_a0,"RenderTransform",1);
  uVar3 = FUN_140de7a58();
  iVar6 = param_1[0x26];
  lVar4 = (longlong)iVar6;
  param_1[0x26] = iVar6 + 1U;
  if ((uint)param_1[0x27] < iVar6 + 1U) {
    FUN_1476e0dd4(param_1 + 0x1a,iVar6);
  }
  local_120 = (undefined **)(param_1 + 0x18);
  puVar9 = param_1 + 0x1a;
  if (*(undefined4 **)(param_1 + 0x24) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_1 + 0x24);
  }
  *(undefined8 *)(puVar9 + lVar4 * 10) = uVar3;
  *(undefined8 *)(puVar9 + lVar4 * 10 + 2) = local_a0;
  *(undefined2 *)(puVar9 + lVar4 * 10 + 4) = 0xffff;
  *(undefined1 **)(puVar9 + lVar4 * 10 + 6) = &LAB_14332d7d4;
  *(undefined1 **)(puVar9 + lVar4 * 10 + 8) = &LAB_14332d7a2;
  FUN_1446ddc76(&local_a8,"LayoutData.Offsets",1);
  uVar3 = FUN_1458f09fa();
  iVar6 = param_1[0x16];
  lVar4 = (longlong)iVar6;
  param_1[0x16] = iVar6 + 1U;
  if ((uint)param_1[0x17] < iVar6 + 1U) {
    FUN_1476e0eec(param_1 + 10,iVar6);
  }
  puVar9 = param_1 + 10;
  if (*(undefined4 **)(param_1 + 0x14) != (undefined4 *)0x0) {
    puVar9 = *(undefined4 **)(param_1 + 0x14);
  }
  *(undefined8 *)(puVar9 + lVar4 * 10) = uVar3;
  *(undefined8 *)(puVar9 + lVar4 * 10 + 2) = local_a8;
  *(undefined2 *)(puVar9 + lVar4 * 10 + 4) = 0xffff;
  *(code **)(puVar9 + lVar4 * 10 + 6) = FUN_1476c5208;
  *(code **)(puVar9 + lVar4 * 10 + 8) = FUN_1476c5273;
  FUN_145f64ee8(plVar2,param_1);
  local_e8 = (longlong)(int)param_1[2] * 0x58 + *plVar2;
  local_e0 = plVar2;
  FUN_145f649e2(&local_e8,local_d8,*(undefined2 *)((longlong)plVar2 + 0xbc));
  FUN_145f64ac2(local_d8,local_c8,*(undefined2 *)((longlong)plVar2 + 0xbe));
  FUN_145f64b38(local_c8,local_b8,(short)plVar2[0x18]);
  FUN_145f64bae(local_b8,&local_90,*(undefined2 *)((longlong)plVar2 + 0xc2));
  pppuVar5 = (undefined ***)FUN_14099c56c();
  pppuVar1 = local_90;
  local_90[5] = (undefined **)pppuVar5;
  *local_90 = (undefined **)(param_1 + 8);
  iVar6 = DAT_14cab3268 + 1;
  DAT_14cab3268 = iVar6;
  FUN_14110eec6(local_90 + 6);
  *(byte *)(pppuVar1 + 10) = *(byte *)(pppuVar1 + 10) | 3;
  pppuVar1[6] = &PTR_FUN_14a508310;
  *(int *)(pppuVar1 + 7) = iVar6;
  FUN_145f64f7e(plVar2,param_1 + 3);
  local_118 = (longlong)(int)param_1[5] * 0x58 + *plVar2;
  local_110 = plVar2;
  FUN_145f64a52(&local_118,local_108,*(undefined2 *)((longlong)plVar2 + 0xbc));
  FUN_145f64c24(local_108,local_f8,*(undefined2 *)((longlong)plVar2 + 0xbe));
  FUN_145f64c9a(local_f8,&local_e8,(short)plVar2[0x18]);
  FUN_145f64d10(&local_e8,local_d8,*(undefined2 *)((longlong)plVar2 + 0xc2));
  FUN_145f64d86(local_d8,local_c8,*(undefined2 *)((longlong)plVar2 + 0xc4));
  FUN_145f64dfc(local_c8,local_b8,*(undefined2 *)((longlong)plVar2 + 0xc6));
  FUN_145f64e72(local_b8,&local_90,(short)plVar2[0x19]);
  pppuVar5 = (undefined ***)FUN_14099c56c();
  pppuVar1 = local_90;
  local_90[5] = (undefined **)pppuVar5;
  *local_90 = local_120;
  iVar6 = DAT_14cab3268 + 1;
  DAT_14cab3268 = iVar6;
  FUN_14110eec6(local_90 + 6);
  *(byte *)(pppuVar1 + 10) = *(byte *)(pppuVar1 + 10) | 3;
  pppuVar1[6] = &PTR_FUN_14a5084e0;
  *(int *)(pppuVar1 + 7) = iVar6;
  if ((local_48 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f649e2 FUN_145f649e2 body=111 status=ok
// SIG undefined FUN_145f649e2(void)

longlong * FUN_145f649e2(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64a52 FUN_145f64a52 body=111 status=ok
// SIG undefined FUN_145f64a52(void)

longlong * FUN_145f64a52(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64ac2 FUN_145f64ac2 body=117 status=ok
// SIG undefined FUN_145f64ac2(void)

longlong * FUN_145f64ac2(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x80000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64b38 FUN_145f64b38 body=117 status=ok
// SIG undefined FUN_145f64b38(void)

longlong * FUN_145f64b38(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x100000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64bae FUN_145f64bae body=117 status=ok
// SIG undefined FUN_145f64bae(void)

longlong * FUN_145f64bae(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x180000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64c24 FUN_145f64c24 body=117 status=ok
// SIG undefined FUN_145f64c24(void)

longlong * FUN_145f64c24(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x80000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64c9a FUN_145f64c9a body=117 status=ok
// SIG undefined FUN_145f64c9a(void)

longlong * FUN_145f64c9a(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x100000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64d10 FUN_145f64d10 body=117 status=ok
// SIG undefined FUN_145f64d10(void)

longlong * FUN_145f64d10(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x180000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64d86 FUN_145f64d86 body=117 status=ok
// SIG undefined FUN_145f64d86(void)

longlong * FUN_145f64d86(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x200000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64dfc FUN_145f64dfc body=117 status=ok
// SIG undefined FUN_145f64dfc(void)

longlong * FUN_145f64dfc(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x280000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64e72 FUN_145f64e72 body=117 status=ok
// SIG undefined FUN_145f64e72(void)

longlong * FUN_145f64e72(longlong *param_1,longlong *param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x18);
  *(uint *)(lVar3 + 0x18) = iVar2 + 1U;
  if (*(uint *)(lVar3 + 0x1c) < iVar2 + 1U) {
    FUN_145d77ba6((longlong *)(lVar3 + 0x10),iVar2);
  }
  *(uint *)(*(longlong *)(lVar3 + 0x10) + (longlong)iVar2 * 4) = param_3 & 0xffff | 0x300000;
  puVar1 = (uint *)(*param_1 + 0xc);
  *puVar1 = *puVar1 | 1 << (*(byte *)(*param_1 + 0x12) & 0x1f);
  *(short *)(*param_1 + 0x12) = *(short *)(*param_1 + 0x12) + 1;
  lVar3 = param_1[1];
  *param_2 = *param_1;
  param_2[1] = lVar3;
  return param_2;
}



// FUNCTION 145f64ee8 FUN_145f64ee8 body=150 status=ok
// SIG undefined FUN_145f64ee8(void)

void FUN_145f64ee8(longlong *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar3 = (int)param_1[1];
  lVar4 = param_1[3];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_145d79b66(param_1);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x58 + *param_1);
  *puVar5 = 0;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *(short *)(puVar5 + 2) = (short)(int)lVar4;
  *(undefined2 *)((longlong)puVar5 + 0x12) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x14) = uVar1;
  *(undefined2 *)((longlong)puVar5 + 0x16) = uVar2;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xfc | 2;
  FUN_14110eec6();
  *(int *)(param_2 + 4) = iVar3;
  return;
}



// FUNCTION 145f64f7e FUN_145f64f7e body=150 status=ok
// SIG undefined FUN_145f64f7e(void)

void FUN_145f64f7e(longlong *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  iVar3 = (int)param_1[1];
  lVar4 = param_1[3];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *(uint *)(param_1 + 1) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar3 + 1U) {
    FUN_145d79b66(param_1);
  }
  puVar5 = (undefined8 *)((longlong)iVar3 * 0x58 + *param_1);
  *puVar5 = 0;
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *(short *)(puVar5 + 2) = (short)(int)lVar4;
  *(undefined2 *)((longlong)puVar5 + 0x12) = 0;
  *(undefined2 *)((longlong)puVar5 + 0x14) = uVar1;
  *(undefined2 *)((longlong)puVar5 + 0x16) = uVar2;
  puVar5[3] = 0;
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar5[5] = 0;
  *(byte *)(puVar5 + 10) = *(byte *)(puVar5 + 10) & 0xfc | 2;
  FUN_14110eec6();
  *(int *)(param_2 + 4) = iVar3;
  return;
}



// FUNCTION 145f65020 FUN_145f65020 body=206 status=ok
// SIG undefined FUN_145f65020(void)

undefined8 * FUN_145f65020(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14aa0f610;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"ClusterUnion",1);
  uVar1 = FUN_144a7b636();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[0x72] = lVar2;
  FUN_14092e51e(param_1,lVar2);
  *(undefined1 *)(param_1 + 0xd) = 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) | 8;
  FUN_1405ba932(param_1,1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f650fa FUN_145f650fa body=206 status=ok
// SIG undefined FUN_145f650fa(void)

undefined8 * FUN_145f650fa(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14b222120;
  param_1[0x72] = &PTR_LAB_14b222760;
  param_1[0x73] = &PTR_LAB_14b222800;
  FUN_1412d7af2(param_1 + 0x74);
  FUN_1446f470e(&local_20,L"SceneComp",1);
  uVar1 = FUN_144a799b0();
  local_30 = 0;
  local_38 = 1;
  lVar2 = FUN_14048696c(param_1,local_20,uVar1,uVar1);
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(lVar2);
  }
  param_1[0x39] = lVar2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6537e FUN_145f6537e body=53 status=ok
// SIG undefined FUN_145f6537e(void)

void FUN_145f6537e(longlong *param_1)

{
  FUN_145f653b4();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145f653b4 FUN_145f653b4 body=382 status=ok
// SIG undefined FUN_145f653b4(void)

void FUN_145f653b4(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_148bfd248(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145f65534 FUN_145f65534 body=88 status=ok
// SIG undefined FUN_145f65534(void)

void FUN_145f65534(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145f6558e(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6558e FUN_145f6558e body=83 status=ok
// SIG undefined FUN_145f6558e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145f6558e(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  uVar1 = _DAT_14cbcf42c;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb8) == 0)) {
    *param_2 = _DAT_14cbcf424;
    param_2[1] = uVar1;
  }
  else {
    FUN_145f655e2(*(longlong *)(lVar2 + 0xb8),param_2,(int)param_1[0x1c]);
  }
  return param_2;
}



// FUNCTION 145f655e2 FUN_145f655e2 body=46 status=ok
// SIG undefined FUN_145f655e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145f655e2(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_14588001a(param_1,param_3);
  uVar2 = _DAT_14cbe45fc;
  uVar3 = _DAT_14cbe4600;
  uVar4 = _DAT_14cbe4604;
  uVar5 = _DAT_14cbe4608;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x2c);
    uVar3 = *(undefined4 *)(lVar1 + 0x30);
    uVar4 = *(undefined4 *)(lVar1 + 0x34);
    uVar5 = *(undefined4 *)(lVar1 + 0x38);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return param_2;
}



// FUNCTION 145f65610 FUN_145f65610 body=88 status=ok
// SIG undefined FUN_145f65610(void)

void FUN_145f65610(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_145f6566a(param_1,&local_28);
  *param_3 = local_28;
  param_3[1] = uStack_24;
  param_3[2] = uStack_20;
  param_3[3] = uStack_1c;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f6566a FUN_145f6566a body=83 status=ok
// SIG undefined FUN_145f6566a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_145f6566a(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_1400f6e0c(uVar1);
  uVar1 = _DAT_14cbcf414;
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0xb8) == 0)) {
    *param_2 = _DAT_14cbcf40c;
    param_2[1] = uVar1;
  }
  else {
    FUN_145f656be(*(longlong *)(lVar2 + 0xb8),param_2,(int)param_1[0x1c]);
  }
  return param_2;
}



// FUNCTION 145f656be FUN_145f656be body=46 status=ok
// SIG undefined FUN_145f656be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_145f656be(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  lVar1 = FUN_14588001a(param_1,param_3);
  uVar2 = _DAT_14cbe45e4;
  uVar3 = _DAT_14cbe45e8;
  uVar4 = _DAT_14cbe45ec;
  uVar5 = _DAT_14cbe45f0;
  if (lVar1 != 0) {
    uVar2 = *(undefined4 *)(lVar1 + 0x14);
    uVar3 = *(undefined4 *)(lVar1 + 0x18);
    uVar4 = *(undefined4 *)(lVar1 + 0x1c);
    uVar5 = *(undefined4 *)(lVar1 + 0x20);
  }
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar5;
  return param_2;
}



// FUNCTION 145f656f4 FUN_145f656f4 body=210 status=ok
// SIG undefined FUN_145f656f4(void)

undefined8 * FUN_145f656f4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_1458de9a4();
  *param_1 = &PTR_FUN_14bda2f40;
  param_1[5] = &PTR_FUN_14bda32f0;
  param_1[0x13] = &PTR_FUN_14bda3310;
  param_1[0x16] = &PTR_FUN_14bda3340;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  uVar3 = DAT_14c8464e8._4_4_;
  uVar2 = (undefined4)DAT_14c8464e8;
  uVar1 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x29) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = uVar1;
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x154) = uVar3;
  param_1[0x2b] = DAT_14c8464f0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3ff0000000000000;
  param_1[0x33] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  FUN_141300fc0(param_1 + 0x34);
  return param_1;
}



// FUNCTION 145f657c6 FUN_145f657c6 body=205 status=ok
// SIG undefined FUN_145f657c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f657c6(void)

{
  if ((DAT_14c9c5a2f & 2) == 0) {
    DAT_14c9c5a2f = DAT_14c9c5a2f | 2;
    _DAT_14c9c59d0 = L"FComputeDistanceFieldNormalPS";
    _DAT_14c9c59e8 = FUN_146826540;
    _DAT_14c9c59f0 = FUN_146825d77;
    _DAT_14c9c59f8 = FUN_146825fd6;
    _DAT_14c9c5a00 = FUN_1407e02ea;
    _DAT_14c9c5a08 = FUN_146826273;
    _DAT_14c9c59e0 = FUN_14714e6ac;
    _DAT_14c9c5a20 = 0xffffffff000000e0;
    _DAT_14c9c5a28 = 8;
    DAT_14c9c5a2c = 0;
    _DAT_14c9c5a10 = &LAB_14714e6d6;
    FUN_145f65894();
    FUN_1407e00cc(&DAT_14c9c59c8);
    return;
  }
  return;
}



// FUNCTION 145f65894 FUN_145f65894 body=123 status=ok
// SIG undefined FUN_145f65894(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f65894(void)

{
  _DAT_14c9c9390 = L"BASE";
  DAT_14c9c93ba = 4;
  _DAT_14c9c9398 = FUN_140b35ae4();
  _DAT_14c9c93a0 = DAT_14c9c59d8;
  _DAT_14c9c93a8 = &LAB_14682652b;
  DAT_14c9c59d8 = &DAT_14c9c9390;
  DAT_14c9c5a2d = DAT_14c9c5a2d + '\x01';
  _DAT_14c9c93b0 = 0x100000000;
  if (*(char *)(_DAT_14c9c9398 + 100) != '\0') {
    DAT_14c9c5a2e = DAT_14c9c5a2e + '\x01';
  }
  return;
}



// FUNCTION 145f65910 FUN_145f65910 body=226 status=ok
// SIG undefined FUN_145f65910(void)

longlong * FUN_145f65910(longlong *param_1)

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
  pcVar13 = FUN_1462be356;
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



// FUNCTION 145f659f4 FUN_145f659f4 body=136 status=ok
// SIG undefined FUN_145f659f4(void)

undefined1 * FUN_145f659f4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x152;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_1471510ae;
}



// FUNCTION 145f65a7c FUN_145f65a7c body=144 status=ok
// SIG undefined FUN_145f65a7c(void)

code * FUN_145f65a7c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000154;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462be4e8;
}



// FUNCTION 145f65b0c FUN_145f65b0c body=144 status=ok
// SIG undefined FUN_145f65b0c(void)

code * FUN_145f65b0c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145aa7ee0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"AOParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FAOParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x3000000155;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f65a7c;
}



// FUNCTION 145f65b9c FUN_145f65b9c body=292 status=ok
// SIG undefined FUN_145f65b9c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f65b9c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6108) {
    FUN_144b3d300(&DAT_14c9c6108);
    if (DAT_14c9c6108 == -1) {
      FUN_145f65e0a();
      FUN_145f65cc0();
      FUN_140db5666(&DAT_14c9c6060,0,&DAT_14c9c5ff8,L"FDistanceFieldAOUpsamplePS",
                    L"/Engine/Private/DistanceFieldLightingPost.usf",L"AOUpsamplePS",3,2,
                    FUN_14714ebce,FUN_14714eb6e,FUN_1462bdc14,&LAB_14714eb6a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8278);
      _DAT_14c9c6060 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bd6257);
      _Init_thread_footer(&DAT_14c9c6108);
    }
  }
  return &DAT_14c9c6060;
}



// FUNCTION 145f65cc0 FUN_145f65cc0 body=205 status=ok
// SIG undefined FUN_145f65cc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f65cc0(void)

{
  if ((DAT_14c9c605f & 2) == 0) {
    DAT_14c9c605f = DAT_14c9c605f | 2;
    _DAT_14c9c6000 = L"FDistanceFieldAOUpsamplePS";
    _DAT_14c9c6018 = FUN_146826540;
    _DAT_14c9c6020 = FUN_146825d77;
    _DAT_14c9c6028 = FUN_146825fd6;
    _DAT_14c9c6030 = FUN_1407e02ea;
    _DAT_14c9c6038 = FUN_146826273;
    _DAT_14c9c6010 = FUN_14714eb3c;
    _DAT_14c9c6050 = 0xffffffff000000e0;
    _DAT_14c9c6058 = 8;
    DAT_14c9c605c = 0;
    _DAT_14c9c6040 = &LAB_14714eb66;
    FUN_145f65d8e();
    FUN_1407e00cc(&DAT_14c9c5ff8);
    return;
  }
  return;
}



// FUNCTION 145f65d8e FUN_145f65d8e body=123 status=ok
// SIG undefined FUN_145f65d8e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f65d8e(void)

{
  _DAT_14c9c9480 = L"BASE";
  DAT_14c9c94aa = 4;
  _DAT_14c9c9488 = FUN_140b35ae4();
  _DAT_14c9c9490 = DAT_14c9c6008;
  _DAT_14c9c9498 = &LAB_14682652b;
  DAT_14c9c6008 = &DAT_14c9c9480;
  DAT_14c9c605d = DAT_14c9c605d + '\x01';
  _DAT_14c9c94a0 = 0x100000000;
  if (*(char *)(_DAT_14c9c9488 + 100) != '\0') {
    DAT_14c9c605e = DAT_14c9c605e + '\x01';
  }
  return;
}



// FUNCTION 145f65e0a FUN_145f65e0a body=261 status=ok
// SIG undefined FUN_145f65e0a(void)

void FUN_145f65e0a(void)

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
              0x110) < DAT_14c9c82f8) {
    FUN_144b3d300(&DAT_14c9c82f8);
    if (DAT_14c9c82f8 == -1) {
      FUN_145f65f10(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x160;
      local_58 = 0x218;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8278,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be765e);
      _Init_thread_footer(&DAT_14c9c82f8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f65f10 FUN_145f65f10 body=226 status=ok
// SIG undefined FUN_145f65f10(void)

longlong * FUN_145f65f10(longlong *param_1)

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
  pcVar13 = FUN_1462bebfa;
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



// FUNCTION 145f65ff4 FUN_145f65ff4 body=138 status=ok
// SIG undefined FUN_145f65ff4(void)

code * FUN_145f65ff4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MinIndirectDiffuseOcclusion";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000021c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145df6a1c;
}



// FUNCTION 145f6607e FUN_145f6607e body=138 status=ok
// SIG undefined FUN_145f6607e(void)

code * FUN_145f6607e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DistanceFieldAOBentNormal";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000021d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 10;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f65ff4;
}



// FUNCTION 145f66108 FUN_145f66108 body=142 status=ok
// SIG undefined FUN_145f66108(void)

code * FUN_145f66108(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000021a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462bed0a;
}



// FUNCTION 145f66196 FUN_145f66196 body=205 status=ok
// SIG undefined FUN_145f66196(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f66196(void)

{
  if ((DAT_14c9c6ca7 & 2) == 0) {
    DAT_14c9c6ca7 = DAT_14c9c6ca7 | 2;
    _DAT_14c9c6c48 = L"FCullObjectsForShadowCS";
    _DAT_14c9c6c60 = FUN_146826540;
    _DAT_14c9c6c68 = FUN_146825d77;
    _DAT_14c9c6c70 = FUN_146825fd6;
    _DAT_14c9c6c78 = FUN_1407e02ea;
    _DAT_14c9c6c80 = FUN_146826273;
    _DAT_14c9c6c58 = FUN_14714f232;
    _DAT_14c9c6c98 = 0xffffffff000000e0;
    _DAT_14c9c6ca0 = 8;
    DAT_14c9c6ca4 = 0;
    _DAT_14c9c6c88 = &LAB_14714f25c;
    FUN_145f66264();
    FUN_1407e00cc(&DAT_14c9c6c40);
    return;
  }
  return;
}



// FUNCTION 145f66264 FUN_145f66264 body=123 status=ok
// SIG undefined FUN_145f66264(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f66264(void)

{
  _DAT_14c9c96b8 = L"BASE";
  DAT_14c9c96e2 = 4;
  _DAT_14c9c96c0 = FUN_140b35ae4();
  _DAT_14c9c96c8 = DAT_14c9c6c50;
  _DAT_14c9c96d0 = &LAB_14682652b;
  DAT_14c9c6c50 = &DAT_14c9c96b8;
  DAT_14c9c6ca5 = DAT_14c9c6ca5 + '\x01';
  _DAT_14c9c96d8 = 0x100000000;
  if (*(char *)(_DAT_14c9c96c0 + 100) != '\0') {
    DAT_14c9c6ca6 = DAT_14c9c6ca6 + '\x01';
  }
  return;
}



// FUNCTION 145f662e0 FUN_145f662e0 body=226 status=ok
// SIG undefined FUN_145f662e0(void)

longlong * FUN_145f662e0(longlong *param_1)

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
  pcVar13 = FUN_1462c05c2;
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



// FUNCTION 145f663c4 FUN_145f663c4 body=136 status=ok
// SIG undefined FUN_145f663c4(void)

code * FUN_145f663c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumShadowHullPlanes";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xc0000000b1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147153006;
}



// FUNCTION 145f6644c FUN_145f6644c body=144 status=ok
// SIG undefined FUN_145f6644c(void)

code * FUN_145f6644c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a22220();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"CulledObjectBufferParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FDistanceFieldCulledObjectBufferParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x50000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c064a;
}



// FUNCTION 145f664dc FUN_145f664dc body=144 status=ok
// SIG undefined FUN_145f664dc(void)

code * FUN_145f664dc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_144a2c9be();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"Substrate";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSubstrateGlobalUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c06da;
}



// FUNCTION 145f6656c FUN_145f6656c body=292 status=ok
// SIG undefined FUN_145f6656c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f6656c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9cb1e0) {
    FUN_144b3d300(&DAT_14c9cb1e0);
    if (DAT_14c9cb1e0 == -1) {
      FUN_145f667da();
      FUN_145f66690();
      FUN_140db5666(&DAT_14c9cb138,0,&DAT_14c9cb0d0,L"FPostProcessKuwaharaCalculateKernelSizeCS",
                    L"/Engine/Private/Gearbox/PostProcessKuwaharaCalculateKernelSize.usf",L"MainCS",
                    5,2,FUN_14715a184,FUN_14715a124,&LAB_14715a120,&LAB_14715a11c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ce0d8);
      _DAT_14c9cb138 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c000e3);
      _Init_thread_footer(&DAT_14c9cb1e0);
    }
  }
  return &DAT_14c9cb138;
}



// FUNCTION 145f66690 FUN_145f66690 body=205 status=ok
// SIG undefined FUN_145f66690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f66690(void)

{
  if ((DAT_14c9cb137 & 2) == 0) {
    DAT_14c9cb137 = DAT_14c9cb137 | 2;
    _DAT_14c9cb0d8 = L"FPostProcessKuwaharaCalculateKernelSizeCS";
    _DAT_14c9cb0f0 = FUN_146826540;
    _DAT_14c9cb0f8 = FUN_146825d77;
    _DAT_14c9cb100 = FUN_146825fd6;
    _DAT_14c9cb108 = FUN_1407e02ea;
    _DAT_14c9cb110 = FUN_146826273;
    _DAT_14c9cb0e8 = FUN_14715a0ee;
    _DAT_14c9cb128 = 0xffffffff000000e0;
    _DAT_14c9cb130 = 8;
    DAT_14c9cb134 = 0;
    _DAT_14c9cb118 = &LAB_14715a118;
    FUN_145f6675e();
    FUN_1407e00cc(&DAT_14c9cb0d0);
    return;
  }
  return;
}



// FUNCTION 145f6675e FUN_145f6675e body=123 status=ok
// SIG undefined FUN_145f6675e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6675e(void)

{
  _DAT_14c9cf2b0 = L"BASE";
  DAT_14c9cf2da = 4;
  _DAT_14c9cf2b8 = FUN_140b35ae4();
  _DAT_14c9cf2c0 = DAT_14c9cb0e0;
  _DAT_14c9cf2c8 = &LAB_14682652b;
  DAT_14c9cb0e0 = &DAT_14c9cf2b0;
  DAT_14c9cb135 = DAT_14c9cb135 + '\x01';
  _DAT_14c9cf2d0 = 0x100000000;
  if (*(char *)(_DAT_14c9cf2b8 + 100) != '\0') {
    DAT_14c9cb136 = DAT_14c9cb136 + '\x01';
  }
  return;
}



// FUNCTION 145f667da FUN_145f667da body=261 status=ok
// SIG undefined FUN_145f667da(void)

void FUN_145f667da(void)

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
              0x110) < DAT_14c9ce158) {
    FUN_144b3d300(&DAT_14c9ce158);
    if (DAT_14c9ce158 == -1) {
      FUN_145f668e0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FPostProcessKuwaharaCalculateKernelSizeParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x88;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ce0d8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c1d827);
      _Init_thread_footer(&DAT_14c9ce158);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f668e0 FUN_145f668e0 body=226 status=ok
// SIG undefined FUN_145f668e0(void)

longlong * FUN_145f668e0(longlong *param_1)

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
  pcVar13 = FUN_1462c355a;
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



// FUNCTION 145f669c4 FUN_145f669c4 body=136 status=ok
// SIG undefined FUN_145f669c4(void)

code * FUN_145f669c4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorToDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x5000000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715f2d6;
}



// FUNCTION 145f66a4c FUN_145f66a4c body=138 status=ok
// SIG undefined FUN_145f66a4c(void)

code * FUN_145f66a4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x300000008d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14715f3ea;
}



// FUNCTION 145f66ad6 FUN_145f66ad6 body=144 status=ok
// SIG undefined FUN_145f66ad6(void)

code * FUN_145f66ad6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000008a;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c35e2;
}



// FUNCTION 145f66b66 FUN_145f66b66 body=292 status=ok
// SIG undefined FUN_145f66b66(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f66b66(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0278) {
    FUN_144b3d300(&DAT_14c9d0278);
    if (DAT_14c9d0278 == -1) {
      FUN_145f66dd4();
      FUN_145f66c8a();
      FUN_140db5666(&DAT_14c9d01d0,0,&DAT_14c9d0168,L"FHairHoldoutPS",
                    L"/Engine/Private/HairStrands/HairStrandsComposition.usf",L"HoldoutPS",3,1,
                    FUN_14716a602,FUN_14716a5a2,FUN_1462c5c24,&LAB_14716a59e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9d39d0);
      _DAT_14c9d01d0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c32a01);
      _Init_thread_footer(&DAT_14c9d0278);
    }
  }
  return &DAT_14c9d01d0;
}



// FUNCTION 145f66c8a FUN_145f66c8a body=205 status=ok
// SIG undefined FUN_145f66c8a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f66c8a(void)

{
  if ((DAT_14c9d01cf & 2) == 0) {
    DAT_14c9d01cf = DAT_14c9d01cf | 2;
    _DAT_14c9d0170 = L"FHairHoldoutPS";
    _DAT_14c9d0188 = FUN_146826540;
    _DAT_14c9d0190 = FUN_146825d77;
    _DAT_14c9d0198 = FUN_146825fd6;
    _DAT_14c9d01a0 = FUN_1407e02ea;
    _DAT_14c9d01a8 = FUN_146826273;
    _DAT_14c9d0180 = FUN_14716a56e;
    _DAT_14c9d01c0 = 0xffffffff000000e0;
    _DAT_14c9d01c8 = 8;
    DAT_14c9d01cc = 0;
    _DAT_14c9d01b0 = &LAB_14716a59a;
    FUN_145f66d58();
    FUN_1407e00cc(&DAT_14c9d0168);
    return;
  }
  return;
}



// FUNCTION 145f66d58 FUN_145f66d58 body=123 status=ok
// SIG undefined FUN_145f66d58(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f66d58(void)

{
  _DAT_14c9d4cc8 = L"BASE";
  DAT_14c9d4cf2 = 4;
  _DAT_14c9d4cd0 = FUN_140b35ae4();
  _DAT_14c9d4cd8 = DAT_14c9d0178;
  _DAT_14c9d4ce0 = &LAB_14682652b;
  DAT_14c9d0178 = &DAT_14c9d4cc8;
  DAT_14c9d01cd = DAT_14c9d01cd + '\x01';
  _DAT_14c9d4ce8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4cd0 + 100) != '\0') {
    DAT_14c9d01ce = DAT_14c9d01ce + '\x01';
  }
  return;
}



// FUNCTION 145f66dd4 FUN_145f66dd4 body=261 status=ok
// SIG undefined FUN_145f66dd4(void)

void FUN_145f66dd4(void)

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
              0x110) < DAT_14c9d3a50) {
    FUN_144b3d300(&DAT_14c9d3a50);
    if (DAT_14c9d3a50 == -1) {
      FUN_145f66eda(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0xbc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d39d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c46dc5);
      _Init_thread_footer(&DAT_14c9d3a50);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f66eda FUN_145f66eda body=226 status=ok
// SIG undefined FUN_145f66eda(void)

longlong * FUN_145f66eda(longlong *param_1)

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
  pcVar13 = FUN_1462c65b8;
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



// FUNCTION 145f66fbe FUN_145f66fbe body=136 status=ok
// SIG undefined FUN_145f66fbe(void)

code * FUN_145f66fbe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PassType";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145f67046;
}



// FUNCTION 145f67046 FUN_145f67046 body=138 status=ok
// SIG undefined FUN_145f67046(void)

code * FUN_145f67046(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bComposeDofDepth";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48000000c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14716e976;
}



// FUNCTION 145f670d0 FUN_145f670d0 body=144 status=ok
// SIG undefined FUN_145f670d0(void)

code * FUN_145f670d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145a1e9b2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"TileData";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FHairStrandsTilePassVS::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000be;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462c6760;
}



// FUNCTION 145f67160 FUN_145f67160 body=292 status=ok
// SIG undefined FUN_145f67160(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f67160(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d09f0) {
    FUN_144b3d300(&DAT_14c9d09f0);
    if (DAT_14c9d09f0 == -1) {
      FUN_145f673ce();
      FUN_145f67284();
      FUN_140db5666(&DAT_14c9d0948,0,&DAT_14c9d08e0,L"FHairDebugPrintCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14716b226,
                    FUN_14716b1c6,&LAB_14595f252,&LAB_14716b1c2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d3d00);
      _DAT_14c9d0948 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33ac1);
      _Init_thread_footer(&DAT_14c9d09f0);
    }
  }
  return &DAT_14c9d0948;
}



// FUNCTION 145f67284 FUN_145f67284 body=205 status=ok
// SIG undefined FUN_145f67284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f67284(void)

{
  if ((DAT_14c9d0947 & 2) == 0) {
    DAT_14c9d0947 = DAT_14c9d0947 | 2;
    _DAT_14c9d08e8 = L"FHairDebugPrintCS";
    _DAT_14c9d0900 = FUN_146826540;
    _DAT_14c9d0908 = FUN_146825d77;
    _DAT_14c9d0910 = FUN_146825fd6;
    _DAT_14c9d0918 = FUN_1407e02ea;
    _DAT_14c9d0920 = FUN_146826273;
    _DAT_14c9d08f8 = FUN_14716b192;
    _DAT_14c9d0938 = 0xffffffff000000e0;
    _DAT_14c9d0940 = 8;
    DAT_14c9d0944 = 0;
    _DAT_14c9d0928 = &LAB_14716b1be;
    FUN_145f67352();
    FUN_1407e00cc(&DAT_14c9d08e0);
    return;
  }
  return;
}



// FUNCTION 145f67352 FUN_145f67352 body=123 status=ok
// SIG undefined FUN_145f67352(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f67352(void)

{
  _DAT_14c9d4de8 = L"BASE";
  DAT_14c9d4e12 = 4;
  _DAT_14c9d4df0 = FUN_140b35ae4();
  _DAT_14c9d4df8 = DAT_14c9d08f0;
  _DAT_14c9d4e00 = &LAB_14682652b;
  DAT_14c9d08f0 = &DAT_14c9d4de8;
  DAT_14c9d0945 = DAT_14c9d0945 + '\x01';
  _DAT_14c9d4e08 = 0x100000000;
  if (*(char *)(_DAT_14c9d4df0 + 100) != '\0') {
    DAT_14c9d0946 = DAT_14c9d0946 + '\x01';
  }
  return;
}



// FUNCTION 145f673ce FUN_145f673ce body=261 status=ok
// SIG undefined FUN_145f673ce(void)

void FUN_145f673ce(void)

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
              0x110) < DAT_14c9d3d80) {
    FUN_144b3d300(&DAT_14c9d3d80);
    if (DAT_14c9d3d80 == -1) {
      FUN_1415a0448(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0xc2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9d3d00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c49477);
      _Init_thread_footer(&DAT_14c9d3d80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145f674d4 FUN_145f674d4 body=136 status=ok
// SIG undefined FUN_145f674d4(void)

code * FUN_145f674d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LinearSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x68000000d3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471702ec;
}



// FUNCTION 145f6755c FUN_145f6755c body=138 status=ok
// SIG undefined FUN_145f6755c(void)

code * FUN_145f6755c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HairInstanceDataBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000cb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471706b2;
}



// FUNCTION 145f675e6 FUN_145f675e6 body=144 status=ok
// SIG undefined FUN_145f675e6(void)

code * FUN_145f675e6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70000000d4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145f674d4;
}



// FUNCTION 145f67676 FUN_145f67676 body=292 status=ok
// SIG undefined FUN_145f67676(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145f67676(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d0e90) {
    FUN_144b3d300(&DAT_14c9d0e90);
    if (DAT_14c9d0e90 == -1) {
      FUN_145f678e4();
      FUN_145f6779a();
      FUN_140db5666(&DAT_14c9d0de8,0,&DAT_14c9d0d80,L"FDeepShadowInfoCS",
                    L"/Engine/Private/HairStrands/HairStrandsDebug.usf",L"MainCS",5,1,FUN_14716b69e,
                    FUN_14716b63e,&LAB_14595f30e,&LAB_14716b63a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9d3f20);
      _DAT_14c9d0de8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c33af1);
      _Init_thread_footer(&DAT_14c9d0e90);
    }
  }
  return &DAT_14c9d0de8;
}



// FUNCTION 145f6779a FUN_145f6779a body=205 status=ok
// SIG undefined FUN_145f6779a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f6779a(void)

{
  if ((DAT_14c9d0de7 & 2) == 0) {
    DAT_14c9d0de7 = DAT_14c9d0de7 | 2;
    _DAT_14c9d0d88 = L"FDeepShadowInfoCS";
    _DAT_14c9d0da0 = FUN_146826540;
    _DAT_14c9d0da8 = FUN_146825d77;
    _DAT_14c9d0db0 = FUN_146825fd6;
    _DAT_14c9d0db8 = FUN_1407e02ea;
    _DAT_14c9d0dc0 = FUN_146826273;
    _DAT_14c9d0d98 = FUN_14716b60a;
    _DAT_14c9d0dd8 = 0xffffffff000000e0;
    _DAT_14c9d0de0 = 8;
    DAT_14c9d0de4 = 0;
    _DAT_14c9d0dc8 = &LAB_14716b636;
    FUN_145f67868();
    FUN_1407e00cc(&DAT_14c9d0d80);
    return;
  }
  return;
}



// FUNCTION 145f67868 FUN_145f67868 body=123 status=ok
// SIG undefined FUN_145f67868(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145f67868(void)

{
  _DAT_14c9d4ea8 = L"BASE";
  DAT_14c9d4ed2 = 4;
  _DAT_14c9d4eb0 = FUN_140b35ae4();
  _DAT_14c9d4eb8 = DAT_14c9d0d90;
  _DAT_14c9d4ec0 = &LAB_14682652b;
  DAT_14c9d0d90 = &DAT_14c9d4ea8;
  DAT_14c9d0de5 = DAT_14c9d0de5 + '\x01';
  _DAT_14c9d4ec8 = 0x100000000;
  if (*(char *)(_DAT_14c9d4eb0 + 100) != '\0') {
    DAT_14c9d0de6 = DAT_14c9d0de6 + '\x01';
  }
  return;
}


