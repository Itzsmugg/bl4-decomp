// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14159d75c FUN_14159d75c body=226 status=ok
// SIG undefined FUN_14159d75c(void)

longlong * FUN_14159d75c(longlong *param_1)

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
  pcVar13 = FUN_1462f79b0;
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



// FUNCTION 14159d840 FUN_14159d840 body=226 status=ok
// SIG undefined FUN_14159d840(void)

longlong * FUN_14159d840(longlong *param_1)

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
  pcVar13 = FUN_1462fd242;
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



// FUNCTION 14159d924 FUN_14159d924 body=289 status=ok
// SIG undefined FUN_14159d924(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159d924(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2f730) {
    FUN_144b3d300(&DAT_14ca2f730);
    if (DAT_14ca2f730 == -1) {
      FUN_14159da46();
      FUN_145f56a82();
      FUN_140db5666(&DAT_14ca2f688,0,&DAT_14ca2f620,L"FPostProcessRadialBlurCS",
                    L"/Engine/Private/PostProcessRadialBlur.usf",L"Main",5,1,FUN_147299322,
                    FUN_1472992c2,&LAB_1472992aa,&LAB_1472992a6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca33788);
      _DAT_14ca2f688 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f05327);
      _Init_thread_footer(&DAT_14ca2f730);
    }
  }
  return &DAT_14ca2f688;
}



// FUNCTION 14159da46 FUN_14159da46 body=258 status=ok
// SIG undefined FUN_14159da46(void)

void FUN_14159da46(void)

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
              0x110) < DAT_14ca33808) {
    FUN_144b3d300(&DAT_14ca33808);
    if (DAT_14ca33808 == -1) {
      FUN_145f56bcc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FRadialBlurParameterCSParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0xc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33788,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f14051);
      _Init_thread_footer(&DAT_14ca33808);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159db4a FUN_14159db4a body=289 status=ok
// SIG undefined FUN_14159db4a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159db4a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca303a8) {
    FUN_144b3d300(&DAT_14ca303a8);
    if (DAT_14ca303a8 == -1) {
      FUN_14159dc6c();
      FUN_145f56e54();
      FUN_140db5666(&DAT_14ca30300,0,&DAT_14ca30298,L"FSubsurfaceRecombinePS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"SubsurfaceRecombinePS",3,0x30,
                    FUN_147299eda,FUN_147299e7a,&LAB_142f060d4,&LAB_147299e76,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33d60);
      _DAT_14ca30300 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f060eb);
      _Init_thread_footer(&DAT_14ca303a8);
    }
  }
  return &DAT_14ca30300;
}



// FUNCTION 14159dc6c FUN_14159dc6c body=258 status=ok
// SIG undefined FUN_14159dc6c(void)

void FUN_14159dc6c(void)

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
              0x110) < DAT_14ca33de0) {
    FUN_144b3d300(&DAT_14ca33de0);
    if (DAT_14ca33de0 == -1) {
      FUN_145f56f9e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2a0;
      local_58 = 0x34c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33d60,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140d5);
      _Init_thread_footer(&DAT_14ca33de0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159dd70 FUN_14159dd70 body=289 status=ok
// SIG undefined FUN_14159dd70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159dd70(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca304d0) {
    FUN_144b3d300(&DAT_14ca304d0);
    if (DAT_14ca304d0 == -1) {
      FUN_14159de92();
      FUN_145f57226();
      FUN_140db5666(&DAT_14ca30428,0,&DAT_14ca303c0,L"FSubsurfaceRecombineCopyPS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"SubsurfaceRecombineCopyPS",3,1,
                    FUN_14729a010,FUN_147299fb0,&LAB_147299f98,&LAB_147299f94,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33de8);
      _DAT_14ca30428 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f060f7);
      _Init_thread_footer(&DAT_14ca304d0);
    }
  }
  return &DAT_14ca30428;
}



// FUNCTION 14159de92 FUN_14159de92 body=258 status=ok
// SIG undefined FUN_14159de92(void)

void FUN_14159de92(void)

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
              0x110) < DAT_14ca33e68) {
    FUN_144b3d300(&DAT_14ca33e68);
    if (DAT_14ca33e68 == -1) {
      FUN_145f57370(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x210;
      local_58 = 0x3b2;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33de8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140ed);
      _Init_thread_footer(&DAT_14ca33e68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159df96 FUN_14159df96 body=226 status=ok
// SIG undefined FUN_14159df96(void)

longlong * FUN_14159df96(longlong *param_1)

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
  pcVar13 = FUN_14630008e;
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



// FUNCTION 14159e07a FUN_14159e07a body=226 status=ok
// SIG undefined FUN_14159e07a(void)

longlong * FUN_14159e07a(longlong *param_1)

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
  pcVar13 = FUN_1463021d6;
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



// FUNCTION 14159e15e FUN_14159e15e body=289 status=ok
// SIG undefined FUN_14159e15e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159e15e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca67018) {
    FUN_144b3d300(&DAT_14ca67018);
    if (DAT_14ca67018 == -1) {
      FUN_14159e280();
      FUN_145f5afcc();
      FUN_140db5666(&DAT_14ca66f70,0,&DAT_14ca66f08,L"FVirtualShadowMapProjectionCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapProjection.usf",
                    L"VirtualShadowMapProjection",5,0x240,FUN_14732d0d2,FUN_14732d072,&LAB_1430e4d12
                    ,&LAB_1430e4cf6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca68860);
      _DAT_14ca66f70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430e4d89);
      _Init_thread_footer(&DAT_14ca67018);
    }
  }
  return &DAT_14ca66f70;
}



// FUNCTION 14159e280 FUN_14159e280 body=258 status=ok
// SIG undefined FUN_14159e280(void)

void FUN_14159e280(void)

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
              0x110) < DAT_14ca688e0) {
    FUN_144b3d300(&DAT_14ca688e0);
    if (DAT_14ca688e0 == -1) {
      FUN_14159e384(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x97;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca68860,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6c2b);
      _Init_thread_footer(&DAT_14ca688e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159e384 FUN_14159e384 body=226 status=ok
// SIG undefined FUN_14159e384(void)

longlong * FUN_14159e384(longlong *param_1)

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
  pcVar13 = FUN_14631333a;
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



// FUNCTION 14159e468 FUN_14159e468 body=226 status=ok
// SIG undefined FUN_14159e468(void)

longlong * FUN_14159e468(longlong *param_1)

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
  pcVar13 = FUN_1463148da;
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



// FUNCTION 14159e54c FUN_14159e54c body=287 status=ok
// SIG undefined FUN_14159e54c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159e54c(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f490) {
    FUN_144b3d300(&DAT_14cb2f490);
    if (DAT_14cb2f490 == -1) {
      uVar1 = FUN_14159e66c();
      FUN_145f5cfa4();
      FUN_140db5666(&DAT_14cb2f3e8,0,&DAT_14cb2f380,L"FNiagaraRibbonCreateIndexBufferParamsCS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonInitializeIndices.usf",
                    L"InitializeIndices",5,4,FUN_14804d942,FUN_14804d8e8,&LAB_14804d8e4,
                    &LAB_14804d8e0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2f3e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa1cf);
      _Init_thread_footer(&DAT_14cb2f490);
    }
  }
  return &DAT_14cb2f3e8;
}



// FUNCTION 14159e66c FUN_14159e66c body=265 status=ok
// SIG undefined FUN_14159e66c(void)

undefined * FUN_14159e66c(void)

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
              0x110) < DAT_14cb33e68) {
    FUN_144b3d300(&DAT_14cb33e68);
    if (DAT_14cb33e68 == -1) {
      FUN_14159e776(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraRibbonInitializeIndices";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0xdc;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33de8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb76c);
      _Init_thread_footer(&DAT_14cb33e68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33de8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159e776 FUN_14159e776 body=226 status=ok
// SIG undefined FUN_14159e776(void)

longlong * FUN_14159e776(longlong *param_1)

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
  pcVar13 = FUN_146462124;
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



// FUNCTION 14159e85a FUN_14159e85a body=226 status=ok
// SIG undefined FUN_14159e85a(void)

longlong * FUN_14159e85a(longlong *param_1)

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
  pcVar13 = FUN_146488a20;
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



// FUNCTION 14159e93e FUN_14159e93e body=289 status=ok
// SIG undefined FUN_14159e93e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159e93e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb518c0) {
    FUN_144b3d300(&DAT_14cb518c0);
    if (DAT_14cb518c0 == -1) {
      FUN_14159ea60();
      FUN_145f5dd94();
      FUN_140db5666(&DAT_14cb51818,0,&DAT_14cb517b0,L"FVelocityCombineCS",
                    L"/Plugin/DLSS/Private/VelocityCombine.usf",L"VelocityCombineMain",5,4,
                    FUN_1485f1b6e,FUN_1485f1b0e,&LAB_1485f1ad0,&LAB_1485f1acc,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cb519e8);
      _DAT_14cb51818 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143bf8bb8);
      _Init_thread_footer(&DAT_14cb518c0);
    }
  }
  return &DAT_14cb51818;
}



// FUNCTION 14159ea60 FUN_14159ea60 body=258 status=ok
// SIG undefined FUN_14159ea60(void)

void FUN_14159ea60(void)

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
              0x110) < DAT_14cb51a68) {
    FUN_144b3d300(&DAT_14cb51a68);
    if (DAT_14cb51a68 == -1) {
      FUN_145f5dede(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x140;
      local_58 = 0x37;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb519e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143bf92b4);
      _Init_thread_footer(&DAT_14cb51a68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159eb64 FUN_14159eb64 body=226 status=ok
// SIG undefined FUN_14159eb64(void)

longlong * FUN_14159eb64(longlong *param_1)

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
  pcVar13 = FUN_14667b402;
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



// FUNCTION 14159ec48 FUN_14159ec48 body=226 status=ok
// SIG undefined FUN_14159ec48(void)

longlong * FUN_14159ec48(longlong *param_1)

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
  pcVar13 = FUN_14667c472;
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



// FUNCTION 14159ed2c FUN_14159ed2c body=226 status=ok
// SIG undefined FUN_14159ed2c(void)

longlong * FUN_14159ed2c(longlong *param_1)

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
  pcVar13 = FUN_14667d3e6;
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



// FUNCTION 14159ee10 FUN_14159ee10 body=226 status=ok
// SIG undefined FUN_14159ee10(void)

longlong * FUN_14159ee10(longlong *param_1)

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
  pcVar13 = FUN_14667d720;
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



// FUNCTION 14159eef4 FUN_14159eef4 body=226 status=ok
// SIG undefined FUN_14159eef4(void)

longlong * FUN_14159eef4(longlong *param_1)

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
  pcVar13 = FUN_14667d8ba;
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



// FUNCTION 14159efd8 FUN_14159efd8 body=226 status=ok
// SIG undefined FUN_14159efd8(void)

longlong * FUN_14159efd8(longlong *param_1)

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
  pcVar13 = FUN_14667e4d2;
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



// FUNCTION 14159f0bc FUN_14159f0bc body=226 status=ok
// SIG undefined FUN_14159f0bc(void)

longlong * FUN_14159f0bc(longlong *param_1)

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
  pcVar13 = FUN_146762312;
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



// FUNCTION 14159f1a0 FUN_14159f1a0 body=226 status=ok
// SIG undefined FUN_14159f1a0(void)

longlong * FUN_14159f1a0(longlong *param_1)

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
  pcVar13 = FUN_1462cd1c2;
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



// FUNCTION 14159f284 FUN_14159f284 body=289 status=ok
// SIG undefined FUN_14159f284(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159f284(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f41a8) {
    FUN_144b3d300(&DAT_14c9f41a8);
    if (DAT_14c9f41a8 == -1) {
      FUN_14159f3a6();
      FUN_145f632de();
      FUN_140db5666(&DAT_14c9f4100,0,&DAT_14c9f4098,L"FLumenReflectionResolveCS",
                    L"/Engine/Private/Lumen/LumenReflectionResolve.usf",L"LumenReflectionResolveCS",
                    5,0x20,FUN_1471ef6a6,FUN_1471ef646,FUN_141768ff6,&LAB_142d3fdda,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f6ae0);
      _DAT_14c9f4100 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d3fdf5);
      _Init_thread_footer(&DAT_14c9f41a8);
    }
  }
  return &DAT_14c9f4100;
}



// FUNCTION 14159f3a6 FUN_14159f3a6 body=258 status=ok
// SIG undefined FUN_14159f3a6(void)

void FUN_14159f3a6(void)

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
              0x110) < DAT_14c9f6b60) {
    FUN_144b3d300(&DAT_14c9f6b60);
    if (DAT_14c9f6b60 == -1) {
      FUN_14159f4aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x209;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6ae0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d58d49);
      _Init_thread_footer(&DAT_14c9f6b60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159f4aa FUN_14159f4aa body=226 status=ok
// SIG undefined FUN_14159f4aa(void)

longlong * FUN_14159f4aa(longlong *param_1)

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
  pcVar13 = FUN_1462de284;
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



// FUNCTION 14159f58e FUN_14159f58e body=226 status=ok
// SIG undefined FUN_14159f58e(void)

longlong * FUN_14159f58e(longlong *param_1)

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
  pcVar13 = FUN_1462e375a;
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



// FUNCTION 14159f672 FUN_14159f672 body=289 status=ok
// SIG undefined FUN_14159f672(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159f672(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fbc08) {
    FUN_144b3d300(&DAT_14c9fbc08);
    if (DAT_14c9fbc08 == -1) {
      FUN_14159f794();
      FUN_145f63ae2();
      FUN_140db5666(&DAT_14c9fbb60,0,&DAT_14c9fbaf8,L"FResampleLightingHistoryToCardCaptureAtlasCS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",
                    L"ResampleLightingHistoryToCardCaptureAtlasCS",5,1,FUN_147208366,FUN_147208306,
                    &LAB_1462e1770,&LAB_147208302,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9feee8)
      ;
      _DAT_14c9fbb60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d806de);
      _Init_thread_footer(&DAT_14c9fbc08);
    }
  }
  return &DAT_14c9fbb60;
}



// FUNCTION 14159f794 FUN_14159f794 body=258 status=ok
// SIG undefined FUN_14159f794(void)

void FUN_14159f794(void)

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
              0x110) < DAT_14c9fef68) {
    FUN_144b3d300(&DAT_14c9fef68);
    if (DAT_14c9fef68 == -1) {
      FUN_145f63c2c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x80;
      local_58 = 0x637;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9feee8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c61d);
      _Init_thread_footer(&DAT_14c9fef68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159f898 FUN_14159f898 body=289 status=ok
// SIG undefined FUN_14159f898(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159f898(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d1a0) {
    FUN_144b3d300(&DAT_14ca5d1a0);
    if (DAT_14ca5d1a0 == -1) {
      FUN_14159f9ba();
      FUN_145f63eb6();
      FUN_140db5666(&DAT_14ca5d0f8,0,&DAT_14ca5d090,L"FRenderDistantSkyLightLutCS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderDistantSkyLightLutCS",5,2,
                    FUN_147315ec2,FUN_147315e62,&LAB_147315e5e,&LAB_147315e5a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5ee30);
      _DAT_14ca5d0f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430914e1);
      _Init_thread_footer(&DAT_14ca5d1a0);
    }
  }
  return &DAT_14ca5d0f8;
}



// FUNCTION 14159f9ba FUN_14159f9ba body=258 status=ok
// SIG undefined FUN_14159f9ba(void)

void FUN_14159f9ba(void)

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
              0x110) < DAT_14ca5eeb0) {
    FUN_144b3d300(&DAT_14ca5eeb0);
    if (DAT_14ca5eeb0 == -1) {
      FUN_145f64000(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x358;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ee30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e827);
      _Init_thread_footer(&DAT_14ca5eeb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159fabe FUN_14159fabe body=333 status=ok
// SIG undefined FUN_14159fabe(void)

undefined2 * FUN_14159fabe(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  lVar1 = *param_3;
  local_76 = (lVar1 != 0) << 6 |
             (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a508240;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a508210;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a508270;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159fc0c FUN_14159fc0c body=335 status=ok
// SIG undefined FUN_14159fc0c(void)

undefined2 * FUN_14159fc0c(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x820;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a508140;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a508110;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a508170;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159fd5c FUN_14159fd5c body=335 status=ok
// SIG undefined FUN_14159fd5c(void)

undefined2 * FUN_14159fd5c(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x838;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a5081c0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a508190;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a5081f0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159feac FUN_14159feac body=335 status=ok
// SIG undefined FUN_14159feac(void)

undefined2 * FUN_14159feac(undefined8 param_1,undefined2 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined ****ppppuVar2;
  undefined1 auStack_a8 [38];
  undefined2 local_82;
  undefined8 *local_80;
  undefined2 local_78;
  byte local_76;
  undefined ***local_70 [8];
  byte local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = 0x810;
  lVar1 = *param_3;
  local_76 = (*(byte *)(param_3 + 1) & 0xc) << 2 | *(byte *)(param_3 + 1) * '\b' & 8 |
             (lVar1 != 0) << 6 | 6;
  if (lVar1 == 0) {
    local_80 = (undefined8 *)FUN_14001cc68(8,0x10);
    *local_80 = &PTR_FUN_14a5082c0;
  }
  else {
    local_80 = (undefined8 *)FUN_14001cc68(0x10,0x10);
    *local_80 = &PTR_FUN_14a508290;
    local_80[1] = lVar1;
  }
  FUN_14179cdc4(param_1,&local_82);
  *param_2 = local_82;
  if ((*(byte *)(param_3 + 1) & 2) != 0) {
    local_30 = 0xff;
    local_70[0] = (undefined ***)&PTR_FUN_14a5082f0;
    FUN_1400abcac(param_1,local_70);
    if ((local_30 & 1) != 0) {
      ppppuVar2 = local_70;
      if ((local_30 & 2) == 0) {
        ppppuVar2 = (undefined ****)local_70[0];
      }
      local_30 = local_30 & 0xfe;
      (*(code *)**ppppuVar2)(ppppuVar2,0);
      if ((local_30 & 2) == 0) {
        FUN_1400020a8(local_70[0]);
      }
    }
  }
  if (local_80 != (undefined8 *)0x0) {
    (**(code **)*local_80)(local_80,1);
  }
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14159fffc FUN_14159fffc body=289 status=ok
// SIG undefined FUN_14159fffc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_14159fffc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c5ad8) {
    FUN_144b3d300(&DAT_14c9c5ad8);
    if (DAT_14c9c5ad8 == -1) {
      FUN_1415a011e();
      FUN_145f657c6();
      FUN_140db5666(&DAT_14c9c5a30,0,&DAT_14c9c59c8,L"FComputeDistanceFieldNormalPS",
                    L"/Engine/Private/DistanceFieldScreenGridLighting.usf",
                    L"ComputeDistanceFieldNormalPS",3,1,FUN_14714e73e,FUN_14714e6de,FUN_1462bdb10,
                    &LAB_14714e6da,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c7f48);
      _DAT_14c9c5a30 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bcedcd);
      _Init_thread_footer(&DAT_14c9c5ad8);
    }
  }
  return &DAT_14c9c5a30;
}



// FUNCTION 1415a011e FUN_1415a011e body=258 status=ok
// SIG undefined FUN_1415a011e(void)

void FUN_1415a011e(void)

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
              0x110) < DAT_14c9c7fc8) {
    FUN_144b3d300(&DAT_14c9c7fc8);
    if (DAT_14c9c7fc8 == -1) {
      FUN_145f65910(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x151;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c7f48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be760a);
      _Init_thread_footer(&DAT_14c9c7fc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a0222 FUN_1415a0222 body=289 status=ok
// SIG undefined FUN_1415a0222(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a0222(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c6d50) {
    FUN_144b3d300(&DAT_14c9c6d50);
    if (DAT_14c9c6d50 == -1) {
      FUN_1415a0344();
      FUN_145f66196();
      FUN_140db5666(&DAT_14c9c6ca8,0,&DAT_14c9c6c40,L"FCullObjectsForShadowCS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"CullObjectsForShadowCS",5,2,
                    FUN_14714f2dc,FUN_14714f27c,&LAB_14714f264,&LAB_14714f260,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c89e8);
      _DAT_14c9c6ca8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be00f1);
      _Init_thread_footer(&DAT_14c9c6d50);
    }
  }
  return &DAT_14c9c6ca8;
}



// FUNCTION 1415a0344 FUN_1415a0344 body=258 status=ok
// SIG undefined FUN_1415a0344(void)

void FUN_1415a0344(void)

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
              0x110) < DAT_14c9c8a68) {
    FUN_144b3d300(&DAT_14c9c8a68);
    if (DAT_14c9c8a68 == -1) {
      FUN_145f662e0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0xaa;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c89e8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be771e);
      _Init_thread_footer(&DAT_14c9c8a68);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a0448 FUN_1415a0448 body=226 status=ok
// SIG undefined FUN_1415a0448(void)

longlong * FUN_1415a0448(longlong *param_1)

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
  pcVar13 = FUN_1462c6e74;
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



// FUNCTION 1415a052c FUN_1415a052c body=226 status=ok
// SIG undefined FUN_1415a052c(void)

longlong * FUN_1415a052c(longlong *param_1)

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
  pcVar13 = FUN_1462d0528;
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



// FUNCTION 1415a0610 FUN_1415a0610 body=289 status=ok
// SIG undefined FUN_1415a0610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a0610(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd380) {
    FUN_144b3d300(&DAT_14c9fd380);
    if (DAT_14c9fd380 == -1) {
      FUN_1415a0732();
      FUN_145f6b156();
      FUN_140db5666(&DAT_14c9fd2d8,0,&DAT_14c9fd270,L"FScreenProbeTileClassificationMarkCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"ScreenProbeTileClassificationMarkCS",5,4,FUN_1472092a8,FUN_147209248,
                    FUN_1462e17f2,&LAB_147209244,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff768);
      _DAT_14c9fd2d8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd3e);
      _Init_thread_footer(&DAT_14c9fd380);
    }
  }
  return &DAT_14c9fd2d8;
}



// FUNCTION 1415a0732 FUN_1415a0732 body=258 status=ok
// SIG undefined FUN_1415a0732(void)

void FUN_1415a0732(void)

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
              0x110) < DAT_14c9ff7e8) {
    FUN_144b3d300(&DAT_14c9ff7e8);
    if (DAT_14c9ff7e8 == -1) {
      FUN_145f6b2a0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x336;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff768,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6dd);
      _Init_thread_footer(&DAT_14c9ff7e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a0836 FUN_1415a0836 body=226 status=ok
// SIG undefined FUN_1415a0836(void)

longlong * FUN_1415a0836(longlong *param_1)

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
  pcVar13 = FUN_1462fccec;
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



// FUNCTION 1415a091a FUN_1415a091a body=226 status=ok
// SIG undefined FUN_1415a091a(void)

longlong * FUN_1415a091a(longlong *param_1)

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
  pcVar13 = FUN_146301446;
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



// FUNCTION 1415a09fe FUN_1415a09fe body=289 status=ok
// SIG undefined FUN_1415a09fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a09fe(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca65210) {
    FUN_144b3d300(&DAT_14ca65210);
    if (DAT_14ca65210 == -1) {
      FUN_1415a0b20();
      FUN_145f6e334();
      FUN_140db5666(&DAT_14ca65168,0,&DAT_14ca65100,L"FAllocateNewPageMappingsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPhysicalPageManagement.usf",
                    L"AllocateNewPageMappingsCS",5,2,FUN_14732b762,FUN_14732b702,&LAB_14732b6ca,
                    &LAB_14732b6c6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67a90);
      _DAT_14ca65168 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce8f8);
      _Init_thread_footer(&DAT_14ca65210);
    }
  }
  return &DAT_14ca65168;
}



// FUNCTION 1415a0b20 FUN_1415a0b20 body=258 status=ok
// SIG undefined FUN_1415a0b20(void)

void FUN_1415a0b20(void)

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
              0x110) < DAT_14ca67b10) {
    FUN_144b3d300(&DAT_14ca67b10);
    if (DAT_14ca67b10 == -1) {
      FUN_145f6e47e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x4e4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67a90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5493);
      _Init_thread_footer(&DAT_14ca67b10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a0c24 FUN_1415a0c24 body=287 status=ok
// SIG undefined FUN_1415a0c24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a0c24(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2f368) {
    FUN_144b3d300(&DAT_14cb2f368);
    if (DAT_14cb2f368 == -1) {
      uVar1 = FUN_1415a0d44();
      FUN_145f6ed04();
      FUN_140db5666(&DAT_14cb2f2c0,0,&DAT_14cb2f258,L"FNiagaraRibbonUVParamCalculationCS",
                    L"/Plugin/FX/Niagara/Private/Ribbons/NiagaraRibbonRibbonUVParamCalculation.usf",
                    L"GenerateRibbonUVParams",5,0x10,FUN_14804d87e,FUN_14804d824,&LAB_1438fa1c0,
                    &LAB_1438fa1bc,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2f2c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438fa1c3);
      _Init_thread_footer(&DAT_14cb2f368);
    }
  }
  return &DAT_14cb2f2c0;
}



// FUNCTION 1415a0d44 FUN_1415a0d44 body=265 status=ok
// SIG undefined FUN_1415a0d44(void)

undefined * FUN_1415a0d44(void)

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
              0x110) < DAT_14cb33d58) {
    FUN_144b3d300(&DAT_14cb33d58);
    if (DAT_14cb33d58 == -1) {
      FUN_145f6ee4e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNiagaraRibbonVertexFinalizationParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0xc5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb33cd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438fb754);
      _Init_thread_footer(&DAT_14cb33d58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb33cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a0e4e FUN_1415a0e4e body=226 status=ok
// SIG undefined FUN_1415a0e4e(void)

longlong * FUN_1415a0e4e(longlong *param_1)

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
  pcVar13 = FUN_1464626a0;
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



// FUNCTION 1415a0f32 FUN_1415a0f32 body=226 status=ok
// SIG undefined FUN_1415a0f32(void)

longlong * FUN_1415a0f32(longlong *param_1)

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
  pcVar13 = FUN_1462bbe48;
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



// FUNCTION 1415a1016 FUN_1415a1016 body=289 status=ok
// SIG undefined FUN_1415a1016(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a1016(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c68e0) {
    FUN_144b3d300(&DAT_14c9c68e0);
    if (DAT_14c9c68e0 == -1) {
      FUN_1415a1138();
      FUN_145f70cf4();
      FUN_140db5666(&DAT_14c9c6838,0,&DAT_14c9c67d0,L"FConeTraceScreenGridObjectOcclusionCS",
                    L"/Engine/Private/DistanceFieldScreenGridLighting.usf",
                    L"ConeTraceObjectOcclusionCS",5,4,FUN_14714f072,FUN_14714f012,FUN_1457b10d8,
                    &LAB_14714f00e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9c86b8);
      _DAT_14c9c6838 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142bdf88a);
      _Init_thread_footer(&DAT_14c9c68e0);
    }
  }
  return &DAT_14c9c6838;
}



// FUNCTION 1415a1138 FUN_1415a1138 body=258 status=ok
// SIG undefined FUN_1415a1138(void)

void FUN_1415a1138(void)

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
              0x110) < DAT_14c9c8738) {
    FUN_144b3d300(&DAT_14c9c8738);
    if (DAT_14c9c8738 == -1) {
      FUN_145f70e3e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x4d0;
      local_58 = 0x90;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c86b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be76ca);
      _Init_thread_footer(&DAT_14c9c8738);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a123c FUN_1415a123c body=226 status=ok
// SIG undefined FUN_1415a123c(void)

longlong * FUN_1415a123c(longlong *param_1)

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
  pcVar13 = FUN_1462cb120;
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



// FUNCTION 1415a1320 FUN_1415a1320 body=226 status=ok
// SIG undefined FUN_1415a1320(void)

longlong * FUN_1415a1320(longlong *param_1)

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
  pcVar13 = FUN_1462d0a2c;
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



// FUNCTION 1415a1404 FUN_1415a1404 body=289 status=ok
// SIG undefined FUN_1415a1404(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a1404(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f48d0) {
    FUN_144b3d300(&DAT_14c9f48d0);
    if (DAT_14c9f48d0 == -1) {
      FUN_1415a1526();
      FUN_145f726f4();
      FUN_140db5666(&DAT_14c9f4828,0,&DAT_14c9f47c0,L"FReflectionTraceScreenTexturesCS",
                    L"/Engine/Private/Lumen/LumenReflectionTracing.usf",
                    L"ReflectionTraceScreenTexturesCS",5,8,FUN_1471efa96,FUN_1471efa36,FUN_1417690bc
                    ,&LAB_1471efa32,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9f6e10);
      _DAT_14c9f4828 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d4a407);
      _Init_thread_footer(&DAT_14c9f48d0);
    }
  }
  return &DAT_14c9f4828;
}



// FUNCTION 1415a1526 FUN_1415a1526 body=258 status=ok
// SIG undefined FUN_1415a1526(void)

void FUN_1415a1526(void)

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
              0x110) < DAT_14c9f6e90) {
    FUN_144b3d300(&DAT_14c9f6e90);
    if (DAT_14c9f6e90 == -1) {
      FUN_145f7283e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x3a0;
      local_58 = 0xeb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f6e10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d595d9);
      _Init_thread_footer(&DAT_14c9f6e90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a162a FUN_1415a162a body=226 status=ok
// SIG undefined FUN_1415a162a(void)

longlong * FUN_1415a162a(longlong *param_1)

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
  pcVar13 = FUN_1462e087a;
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



// FUNCTION 1415a170e FUN_1415a170e body=289 status=ok
// SIG undefined FUN_1415a170e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a170e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fd008) {
    FUN_144b3d300(&DAT_14c9fd008);
    if (DAT_14c9fd008 == -1) {
      FUN_1415a1830();
      FUN_145f73bdc();
      FUN_140db5666(&DAT_14c9fcf60,0,&DAT_14c9fcef8,L"FMarkRadianceProbesUsedByScreenProbesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeGather.usf",
                    L"MarkRadianceProbesUsedByScreenProbesCS",5,1,FUN_147209056,FUN_147208ff6,
                    &LAB_1462e17d4,&LAB_147208ff2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff5d0)
      ;
      _DAT_14c9fcf60 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d8cd1a);
      _Init_thread_footer(&DAT_14c9fd008);
    }
  }
  return &DAT_14c9fcf60;
}



// FUNCTION 1415a1830 FUN_1415a1830 body=258 status=ok
// SIG undefined FUN_1415a1830(void)

void FUN_1415a1830(void)

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
              0x110) < DAT_14c9ff650) {
    FUN_144b3d300(&DAT_14c9ff650);
    if (DAT_14c9ff650 == -1) {
      FUN_145f73d26(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x2ce;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff5d0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c6b9);
      _Init_thread_footer(&DAT_14c9ff650);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a1934 FUN_1415a1934 body=226 status=ok
// SIG undefined FUN_1415a1934(void)

longlong * FUN_1415a1934(longlong *param_1)

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
  pcVar13 = FUN_1462f47b6;
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



// FUNCTION 1415a1a18 FUN_1415a1a18 body=226 status=ok
// SIG undefined FUN_1415a1a18(void)

longlong * FUN_1415a1a18(longlong *param_1)

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
  pcVar13 = FUN_146303af6;
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



// FUNCTION 1415a1afc FUN_1415a1afc body=289 status=ok
// SIG undefined FUN_1415a1afc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a1afc(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d2c8) {
    FUN_144b3d300(&DAT_14ca5d2c8);
    if (DAT_14ca5d2c8 == -1) {
      FUN_1415a1c1e();
      FUN_145f761d4();
      FUN_140db5666(&DAT_14ca5d220,0,&DAT_14ca5d1b8,L"FRenderSkyViewLutCS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderSkyViewLutCS",5,0x10,FUN_147315f84,
                    FUN_147315f24,&LAB_1430914f2,&LAB_1430914ee,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca5eeb8);
      _DAT_14ca5d220 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430914f5);
      _Init_thread_footer(&DAT_14ca5d2c8);
    }
  }
  return &DAT_14ca5d220;
}



// FUNCTION 1415a1c1e FUN_1415a1c1e body=258 status=ok
// SIG undefined FUN_1415a1c1e(void)

void FUN_1415a1c1e(void)

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
              0x110) < DAT_14ca5ef38) {
    FUN_144b3d300(&DAT_14ca5ef38);
    if (DAT_14ca5ef38 == -1) {
      FUN_1415a1d22(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x37f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5eeb8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e833);
      _Init_thread_footer(&DAT_14ca5ef38);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a1d22 FUN_1415a1d22 body=226 status=ok
// SIG undefined FUN_1415a1d22(void)

longlong * FUN_1415a1d22(longlong *param_1)

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
  pcVar13 = FUN_14630beaa;
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



// FUNCTION 1415a1e06 FUN_1415a1e06 body=289 status=ok
// SIG undefined FUN_1415a1e06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a1e06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5d3f0) {
    FUN_144b3d300(&DAT_14ca5d3f0);
    if (DAT_14ca5d3f0 == -1) {
      FUN_1415a1f28();
      FUN_145f764c8();
      FUN_140db5666(&DAT_14ca5d348,0,&DAT_14ca5d2e0,L"FRenderCameraAerialPerspectiveVolumeCS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"RenderCameraAerialPerspectiveVolumeCS",5,
                    0x20,FUN_147316046,FUN_147315fe6,&LAB_143091506,&LAB_143091502,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5ef40);
      _DAT_14ca5d348 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143091509);
      _Init_thread_footer(&DAT_14ca5d3f0);
    }
  }
  return &DAT_14ca5d348;
}



// FUNCTION 1415a1f28 FUN_1415a1f28 body=258 status=ok
// SIG undefined FUN_1415a1f28(void)

void FUN_1415a1f28(void)

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
              0x110) < DAT_14ca5efc0) {
    FUN_144b3d300(&DAT_14ca5efc0);
    if (DAT_14ca5efc0 == -1) {
      FUN_1415a202c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xf0;
      local_58 = 0x3b8;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ef40,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e83f);
      _Init_thread_footer(&DAT_14ca5efc0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a202c FUN_1415a202c body=226 status=ok
// SIG undefined FUN_1415a202c(void)

longlong * FUN_1415a202c(longlong *param_1)

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
  pcVar13 = FUN_14630c288;
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



// FUNCTION 1415a2110 FUN_1415a2110 body=226 status=ok
// SIG undefined FUN_1415a2110(void)

longlong * FUN_1415a2110(longlong *param_1)

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
  pcVar13 = FUN_14630e504;
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



// FUNCTION 1415a21f4 FUN_1415a21f4 body=289 status=ok
// SIG undefined FUN_1415a21f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a21f4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0690) {
    FUN_144b3d300(&DAT_14caa0690);
    if (DAT_14caa0690 == -1) {
      FUN_1415a2316();
      FUN_145f778cc();
      FUN_140db5666(&DAT_14caa05e8,0,&DAT_14caa0580,L"FRDGMemcpyCS",
                    L"/Engine/Private/ByteBuffer.usf",L"MemcpyCS",5,0x14,FUN_1474427a8,FUN_147442748
                    ,&LAB_14323c184,&LAB_14323c180,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa0d88
                   );
      _DAT_14caa05e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c1db);
      _Init_thread_footer(&DAT_14caa0690);
    }
  }
  return &DAT_14caa05e8;
}



// FUNCTION 1415a2316 FUN_1415a2316 body=258 status=ok
// SIG undefined FUN_1415a2316(void)

void FUN_1415a2316(void)

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
              0x110) < DAT_14caa0e08) {
    FUN_144b3d300(&DAT_14caa0e08);
    if (DAT_14caa0e08 == -1) {
      FUN_145f77a20(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x103;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0d88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323df17);
      _Init_thread_footer(&DAT_14caa0e08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a2419 FUN_1415a2419 body=169 status=ok
// SIG undefined FUN_1415a2419(void)

bool FUN_1415a2419(void)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca813a8) {
    FUN_144b3d300(&DAT_14ca813a8);
    if (DAT_14ca813a8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      DAT_14ca813a0 =
           (longlong *)
           (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.gbx.pso.KeepAliveCount",1);
      _Init_thread_footer(&DAT_14ca813a8);
    }
  }
  bVar1 = false;
  if ((DAT_14ca84df4 == 0x10de) && (DAT_14ca813a0 != (longlong *)0x0)) {
    iVar2 = (**(code **)(*DAT_14ca813a0 + 0xb0))();
    bVar1 = 0 < iVar2;
  }
  return bVar1;
}



// FUNCTION 1415a24c2 FUN_1415a24c2 body=548 status=ok
// SIG undefined FUN_1415a24c2(void)

void FUN_1415a24c2(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  longlong *plVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_74 = param_2;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar8 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar8 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      plVar12 = *(longlong **)(lVar10 + 0x30 + (longlong)iVar6 * 0x58);
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x10))();
      }
      plVar12 = (longlong *)(lVar10 + (longlong)iVar6 * 0x58);
      if ((longlong *)plVar12[4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar12[4] + 0x10))();
      }
      if ((longlong *)plVar12[2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar12[2] + 0x10))();
      }
      if (*plVar12 != 0) {
        FUN_1400020a8();
      }
      uVar11 = uVar11 & ~(uint)uVar8;
      plVar12 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar12 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar12 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)((longlong)plVar12 + lVar7 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar3 - lVar10 == lVar7) goto LAB_1415a2626;
        }
        iVar13 = iVar13 + (int)lVar7 + 1;
        uVar11 = 0xffffffff;
      }
      uVar8 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar8 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415a2626:
  iVar13 = local_74;
  if (local_74 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(local_74);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != local_74) {
    FUN_140e91948(param_1,local_74);
  }
  param_1[6] = 0xffffffff;
  uVar11 = iVar13 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar11) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar5 = uVar11;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a26e8 FUN_1415a26e8 body=734 status=ok
// SIG undefined FUN_1415a26e8(void)

void FUN_1415a26e8(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar2 = (int)param_1[0x22];
  do {
    switch(iVar2) {
    case 0:
      iVar2 = 1;
      if ((char)param_1[3] == '\x01') {
        lVar4 = (**(code **)(*(longlong *)param_1[6] + 0x180))();
        if ((((lVar4 != 0) && (*(longlong *)(lVar4 + 0x1f0) != 0)) &&
            (plVar3 = (longlong *)FUN_1459a1b72(), plVar3 != (longlong *)0x0)) &&
           ((lVar4 = (**(code **)(*plVar3 + 0x2b8))(plVar3), lVar4 != 0 &&
            (*(int *)(lVar4 + 0xd8) != 0)))) {
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
        }
        goto LAB_1415a2791;
      }
      break;
    case 1:
      if ((((byte)((char)param_1[0x25] - 3U) < 3) && (cVar1 = FUN_145d53b76(param_1), cVar1 == '\0')
          ) && ((lVar4 = (**(code **)(*(longlong *)param_1[6] + 0x180))(), lVar4 == 0 ||
                (iVar2 = FUN_14490d72a(lVar4), iVar2 != 3)))) {
        (**(code **)(*(longlong *)param_1[6] + 0x378))();
      }
LAB_1415a2791:
      iVar2 = (int)param_1[0x22] + 1;
      break;
    case 2:
      goto switchD_1415a2720_caseD_2;
    case 3:
      iVar2 = 4;
      if (param_1[10] != 0) {
        (**(code **)(*param_1 + 0x80))(param_1);
        lVar4 = param_1[10];
        local_40 = (undefined8 *)0x0;
        local_38 = 0;
        FUN_1446efa72(&local_40,0,3,0x10);
        local_38 = 3;
        *local_40 = &PTR_LAB_149e06450;
        LOCK();
        UNLOCK();
        lVar5 = DAT_14c758608 + 1;
        lVar6 = DAT_14c758608 + 1;
        if (lVar5 == 0) {
          LOCK();
          UNLOCK();
          lVar5 = DAT_14c758608 + 2;
          lVar6 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar6;
        local_40[2] = lVar5;
        *local_40 = &PTR_FUN_14b4e99c0;
        local_40[3] = param_1;
        local_40[4] = FUN_145a057e8;
        *(undefined4 *)(local_40 + 5) = 0;
        FUN_143f45458(lVar4,&local_40);
        goto switchD_1415a2720_default;
      }
      break;
    case 4:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_68);
    default:
      goto switchD_1415a2720_default;
    }
    *(int *)(param_1 + 0x22) = iVar2;
  } while( true );
switchD_1415a2720_caseD_2:
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  local_28 = 3;
  *local_30 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar4 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar4 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar4;
  local_30[2] = lVar6;
  *local_30 = &PTR_FUN_14b4e99c0;
  local_30[3] = param_1;
  local_30[4] = FUN_145a05856;
  *(undefined4 *)(local_30 + 5) = 0;
  FUN_145dd0ba6(param_1,param_1,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto switchD_1415a2720_default;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
switchD_1415a2720_default:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415a29ea FUN_1415a29ea body=226 status=ok
// SIG undefined FUN_1415a29ea(void)

longlong * FUN_1415a29ea(longlong *param_1)

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
  pcVar13 = FUN_1462b992a;
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



// FUNCTION 1415a2ace FUN_1415a2ace body=289 status=ok
// SIG undefined FUN_1415a2ace(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a2ace(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f9210) {
    FUN_144b3d300(&DAT_14c9f9210);
    if (DAT_14c9f9210 == -1) {
      FUN_1415a2bf0();
      FUN_145f7a420();
      FUN_140db5666(&DAT_14c9f9168,0,&DAT_14c9f9100,L"FLumenCardBatchDirectLightingCS",
                    L"/Engine/Private/Lumen/LumenSceneDirectLighting.usf",
                    L"LumenCardBatchDirectLightingCS",5,8,FUN_147204f2c,FUN_147204ecc,&LAB_14176b3d4
                    ,&LAB_147204e9e,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9fdcd8);
      _DAT_14c9f9168 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d68e5e);
      _Init_thread_footer(&DAT_14c9f9210);
    }
  }
  return &DAT_14c9f9168;
}



// FUNCTION 1415a2bf0 FUN_1415a2bf0 body=258 status=ok
// SIG undefined FUN_1415a2bf0(void)

void FUN_1415a2bf0(void)

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
              0x110) < DAT_14c9fdd58) {
    FUN_144b3d300(&DAT_14c9fdd58);
    if (DAT_14c9fdd58 == -1) {
      FUN_145f7a56a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xd0;
      local_58 = 0x274;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fdcd8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9930b);
      _Init_thread_footer(&DAT_14c9fdd58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a2cf4 FUN_1415a2cf4 body=289 status=ok
// SIG undefined FUN_1415a2cf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a2cf4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca02f80) {
    FUN_144b3d300(&DAT_14ca02f80);
    if (DAT_14ca02f80 == -1) {
      FUN_1415a2e16();
      FUN_145f7a7fa();
      FUN_140db5666(&DAT_14ca02ed8,0,&DAT_14ca02e70,L"FTranslucencyVolumeTraceVoxelsCS",
                    L"/Engine/Private/Lumen/LumenTranslucencyVolumeLighting.usf",
                    L"TranslucencyVolumeTraceVoxelsCS",5,0x10,FUN_1472227ee,FUN_14722278e,
                    &LAB_14176e174,&LAB_142dbe7b4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06560)
      ;
      _DAT_14ca02ed8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbe7b7);
      _Init_thread_footer(&DAT_14ca02f80);
    }
  }
  return &DAT_14ca02ed8;
}



// FUNCTION 1415a2e16 FUN_1415a2e16 body=258 status=ok
// SIG undefined FUN_1415a2e16(void)

void FUN_1415a2e16(void)

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
              0x110) < DAT_14ca065e0) {
    FUN_144b3d300(&DAT_14ca065e0);
    if (DAT_14ca065e0 == -1) {
      FUN_145f7a944(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x350;
      local_58 = 0x1c5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06560,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a37);
      _Init_thread_footer(&DAT_14ca065e0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a2f1a FUN_1415a2f1a body=289 status=ok
// SIG undefined FUN_1415a2f1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a2f1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca031d0) {
    FUN_144b3d300(&DAT_14ca031d0);
    if (DAT_14ca031d0 == -1) {
      FUN_1415a303c();
      FUN_145f7abd4();
      FUN_140db5666(&DAT_14ca03128,0,&DAT_14ca030c0,L"FTranslucencyVolumeIntegrateCS",
                    L"/Engine/Private/Lumen/LumenTranslucencyVolumeLighting.usf",
                    L"TranslucencyVolumeIntegrateCS",5,2,FUN_14722297a,FUN_14722291a,&LAB_1462e7410,
                    &LAB_147222916,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca06670);
      _DAT_14ca03128 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142dbe7cf);
      _Init_thread_footer(&DAT_14ca031d0);
    }
  }
  return &DAT_14ca03128;
}



// FUNCTION 1415a303c FUN_1415a303c body=258 status=ok
// SIG undefined FUN_1415a303c(void)

void FUN_1415a303c(void)

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
              0x110) < DAT_14ca066f0) {
    FUN_144b3d300(&DAT_14ca066f0);
    if (DAT_14ca066f0 == -1) {
      FUN_145f7ad1e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x220;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06670,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3a4f);
      _Init_thread_footer(&DAT_14ca066f0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a3140 FUN_1415a3140 body=258 status=ok
// SIG undefined FUN_1415a3140(void)

void FUN_1415a3140(void)

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
              0x110) < DAT_14ca06118) {
    FUN_144b3d300(&DAT_14ca06118);
    if (DAT_14ca06118 == -1) {
      FUN_1456e620e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x41;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca06098,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd33f3);
      _Init_thread_footer(&DAT_14ca06118);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a3244 FUN_1415a3244 body=289 status=ok
// SIG undefined FUN_1415a3244(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a3244(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca30030) {
    FUN_144b3d300(&DAT_14ca30030);
    if (DAT_14ca30030 == -1) {
      FUN_1415a3366();
      FUN_145f7c2f4();
      FUN_140db5666(&DAT_14ca2ff88,0,&DAT_14ca2ff20,L"FSubsurfaceIndirectDispatchSetupCS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"SetupIndirectCS",5,0x10,
                    FUN_147299a4a,FUN_1472999ea,&LAB_142f06080,&LAB_142f0607c,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33bc8);
      _DAT_14ca2ff88 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06097);
      _Init_thread_footer(&DAT_14ca30030);
    }
  }
  return &DAT_14ca2ff88;
}



// FUNCTION 1415a3366 FUN_1415a3366 body=258 status=ok
// SIG undefined FUN_1415a3366(void)

void FUN_1415a3366(void)

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
              0x110) < DAT_14ca33c48) {
    FUN_144b3d300(&DAT_14ca33c48);
    if (DAT_14ca33c48 == -1) {
      FUN_145f7c43e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x213;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33bc8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f140b1);
      _Init_thread_footer(&DAT_14ca33c48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a346a FUN_1415a346a body=226 status=ok
// SIG undefined FUN_1415a346a(void)

longlong * FUN_1415a346a(longlong *param_1)

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
  pcVar13 = FUN_1464633dc;
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



// FUNCTION 1415a354e FUN_1415a354e body=226 status=ok
// SIG undefined FUN_1415a354e(void)

longlong * FUN_1415a354e(longlong *param_1)

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
  pcVar13 = FUN_1462f458e;
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



// FUNCTION 1415a3632 FUN_1415a3632 body=226 status=ok
// SIG undefined FUN_1415a3632(void)

longlong * FUN_1415a3632(longlong *param_1)

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
  pcVar13 = FUN_146300950;
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



// FUNCTION 1415a3716 FUN_1415a3716 body=317 status=ok
// SIG undefined FUN_1415a3716(void)

void FUN_1415a3716(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_40 = &local_20;
        local_20 = FUN_141864c34;
        local_30 = FUN_14081d0ea;
        local_38 = &LAB_1464cee30;
        local_48 = &LAB_148bfac22;
        local_50 = &LAB_140f21842;
        local_58 = &DAT_149e063b2;
        local_60 = 0;
        local_68 = 0x10000004;
        local_70 = 0x10;
        local_78 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
        FUN_1449ce79a(lVar1);
      }
    }
    FUN_1410bb0cc(param_1);
    FUN_144287890(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a3866 FUN_1415a3866 body=504 status=ok
// SIG undefined FUN_1415a3866(void)

void FUN_1415a3866(longlong *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar11 = 0;
    uVar14 = 1;
    iVar12 = 0;
    iVar7 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = puVar1;
    }
    uVar15 = *puVar8;
    if (uVar15 == 0) {
      iVar12 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar12 = iVar3 + -1;
      }
      uVar11 = 0;
      uVar9 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar9 = uVar11;
      }
      iVar12 = 0;
      do {
        if (uVar9 == uVar11) goto LAB_1415a3894;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar8[uVar11 + 1];
        uVar11 = uVar11 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar11 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar9 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar9 != 0) {
      for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar7) {
      iVar7 = iVar3;
    }
  }
  if (iVar7 < iVar3) {
    uVar15 = 0xffffffff;
    do {
      plVar2 = *(longlong **)(*param_1 + 8 + (longlong)iVar7 * 0x20);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))();
        iVar3 = (int)param_1[5];
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar7 = (int)uVar11;
      lVar13 = (longlong)iVar7;
      uVar4 = puVar8[lVar13] & uVar15;
      if (uVar4 == 0) {
        iVar5 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar5 = iVar3 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar7) {
          iVar6 = iVar7;
        }
        if (iVar5 <= iVar7) break;
        lVar10 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar4 = puVar8[lVar13 + lVar10 + 1];
          if (uVar4 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar6 - lVar13 == lVar10) goto LAB_1415a3894;
        }
        uVar11 = (ulonglong)(iVar7 + (int)lVar10 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar4 & uVar4);
      uVar9 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar7 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar3);
  }
LAB_1415a3894:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(puVar1,0);
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1415a3a5e FUN_1415a3a5e body=722 status=ok
// SIG undefined FUN_1415a3a5e(void)

void FUN_1415a3a5e(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  FUN_14312348e(param_1,1);
  lVar3 = 0;
  do {
    lVar1 = *(longlong *)(param_1 + 0x10 + lVar3 * 8);
    if (lVar1 != 0) {
      FUN_140414380(lVar1,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x10);
  iVar2 = *(int *)(param_1 + 0x98);
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x90) + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_140414380(lVar1,0);
        iVar2 = *(int *)(param_1 + 0x98);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x430) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x428) = 0;
  if (*(longlong *)(param_1 + 0x420) != 0) {
    FUN_1400020a8();
  }
  FUN_145a00152(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x3d8) = 0;
  if (*(longlong *)(param_1 + 0x3d0) != 0) {
    FUN_1400020a8();
  }
  FUN_145a00152(param_1 + 0x390);
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1400020a8();
  }
  FUN_145a00152(param_1 + 0x340);
  FUN_146316d98(param_1 + 0x2d0);
  if (*(longlong *)(param_1 + 0x2c0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2b0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FUN_1400020a8();
  }
  *(undefined ***)(param_1 + 0x290) = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x298),1);
  *(undefined ***)(param_1 + 0x280) = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x288),1);
  *(undefined ***)(param_1 + 0x270) = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x278),1);
  *(undefined ***)(param_1 + 0x260) = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,*(undefined8 *)(param_1 + 0x268),1);
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    FUN_1400020a8();
  }
  FUN_145d11128(param_1 + 0x188);
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  FUN_145d111b8(param_1 + 0x128);
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  FUN_145de6584(param_1 + 0xa0);
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
  }
  lVar3 = 0x88;
  do {
    lVar1 = *(longlong *)(param_1 + lVar3);
    if (lVar1 != 0) {
      FUN_14083e62c(lVar1);
      FUN_1400020a8(lVar1);
    }
    lVar3 = lVar3 + -8;
  } while (lVar3 != 8);
  return;
}



// FUNCTION 1415a3d30 FUN_1415a3d30 body=1061 status=ok
// SIG undefined FUN_1415a3d30(void)

void FUN_1415a3d30(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b3fdda0;
  FUN_145aec406();
  *(undefined4 *)(param_1 + 0x8a) = 0;
  if (param_1[0x89] != 0) {
    FUN_1400020a8();
  }
  FUN_143d3ead8(param_1 + 0x81);
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x81] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  FUN_14654e252(param_1 + 0x76);
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x74] != 0) {
    FUN_1400020a8();
  }
  FUN_14654e288(param_1 + 0x6c);
  *(undefined4 *)(param_1 + 0x6a) = 0;
  if (param_1[0x69] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x62) = 0;
  if (*(int *)((longlong)param_1 + 0x314) != 0) {
    FUN_1447a08a2(param_1 + 0x61,0);
  }
  param_1[0x67] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x334)) {
    *(undefined4 *)((longlong)param_1 + 0x334) = 0x80;
    FUN_1446efbd8(param_1 + 99,0);
  }
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x61] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x57] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x54] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x52] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x50] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x4d) = 0;
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_140c1ca5e(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0x43) = 0;
  if (param_1[0x42] != 0) {
    FUN_1400020a8();
  }
  FUN_145906e66(param_1 + 0x3a);
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x37) = 0;
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  FUN_14654e2be(param_1 + 0x2e);
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x25],*(undefined4 *)(param_1 + 0x26));
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x22],*(undefined4 *)(param_1 + 0x23));
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1f],*(undefined4 *)(param_1 + 0x20));
  if (param_1[0x1f] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x19],*(undefined4 *)(param_1 + 0x1a));
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x13],*(undefined4 *)(param_1 + 0x14));
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x10],*(undefined4 *)(param_1 + 0x11));
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415a4156 FUN_1415a4156 body=226 status=ok
// SIG undefined FUN_1415a4156(void)

longlong * FUN_1415a4156(longlong *param_1)

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
  pcVar13 = FUN_14630261c;
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



// FUNCTION 1415a423a FUN_1415a423a body=258 status=ok
// SIG undefined FUN_1415a423a(void)

void FUN_1415a423a(void)

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
              0x110) < DAT_14ca57298) {
    FUN_144b3d300(&DAT_14ca57298);
    if (DAT_14ca57298 == -1) {
      FUN_145f853ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FShadowDepthPassParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0x411;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca57218,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143066e0b);
      _Init_thread_footer(&DAT_14ca57298);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a433e FUN_1415a433e body=277 status=ok
// SIG undefined FUN_1415a433e(void)

void FUN_1415a433e(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeae60,local_58,local_54,&local_50);
  local_50 = L"Coordinates";
  local_48 = 0xb;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Coordinates";
  local_48 = 0xb;
  FUN_140208c1e(&DAT_14caeae70,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a4454 FUN_1415a4454 body=277 status=ok
// SIG undefined FUN_1415a4454(void)

void FUN_1415a4454(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Constants";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Constants";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeacb0,local_58,local_54,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeacc0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a456a FUN_1415a456a body=277 status=ok
// SIG undefined FUN_1415a456a(void)

void FUN_1415a456a(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Constants";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Constants";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeacd8,local_58,local_54,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caeace8,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a4680 FUN_1415a4680 body=277 status=ok
// SIG undefined FUN_1415a4680(void)

void FUN_1415a4680(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Constants";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Constants";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caead00,local_58,local_54,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Vectors";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caead10,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a4796 FUN_1415a4796 body=277 status=ok
// SIG undefined FUN_1415a4796(void)

void FUN_1415a4796(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Particles";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Particles";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeb2c0,local_58,local_54,&local_50);
  local_50 = L"Coordinates";
  local_48 = 0xb;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Coordinates";
  local_48 = 0xb;
  FUN_140208c1e(&DAT_14caeb2d0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a48ac FUN_1415a48ac body=28 status=ok
// SIG undefined FUN_1415a48ac(void)

undefined8 * FUN_1415a48ac(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  FUN_140942716(param_2);
  return param_2;
}



// FUNCTION 1415a48c8 FUN_1415a48c8 body=1045 status=ok
// SIG undefined FUN_1415a48c8(void)

void FUN_1415a48c8(longlong param_1)

{
  int *piVar1;
  code **ppcVar2;
  ushort uVar3;
  ushort uVar4;
  void *pvVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  bool bVar14;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [16];
  ulonglong local_70;
  longlong local_68;
  longlong *local_60;
  code *local_58;
  int local_50;
  uint local_4c;
  ulonglong local_48;
  
  lVar6 = DAT_14cb259f8;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb259f8 != 0) {
    ppcVar2 = (code **)(param_1 + 0x4c8);
    if (*(uint *)(param_1 + 0x4d0) < 2) {
      FUN_148dae0c0(&local_58);
      if (ppcVar2 == &local_58) {
        if (local_58 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x4c8) != 0) {
          FUN_1400020a8();
        }
        *(code **)(param_1 + 0x4c8) = local_58;
        local_58 = (code *)0x0;
        *(int *)(param_1 + 0x4d0) = local_50;
        *(uint *)(param_1 + 0x4d4) = local_4c;
      }
    }
    uVar10 = FUN_140d5712e();
    local_58 = (code *)&DAT_14acb7de8;
    local_50 = 5;
    local_4c = local_4c & 0xffffff00;
    uVar8 = FUN_14001a6c0(&local_58,1);
    local_70 = (ulonglong)uVar8;
    FUN_140d570d8(uVar10,&local_68);
    FUN_140d5725a(&local_58,local_68 + 0x28);
    iVar9 = *(int *)(param_1 + 0x4d0);
    if (iVar9 == local_50) {
      bVar14 = true;
      if (1 < iVar9) {
        lVar12 = 0;
        while( true ) {
          uVar3 = *(ushort *)(*ppcVar2 + lVar12);
          uVar8 = (uint)uVar3;
          uVar4 = *(ushort *)(local_58 + lVar12);
          uVar13 = (uint)uVar4;
          if (uVar3 != uVar4) {
            if ((uVar4 | uVar3) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              uVar13 = (uint)(byte)(&DAT_149e05da0)[uVar4];
              if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar4]) goto LAB_1415a49a4;
            }
            iVar9 = uVar8 - uVar13;
            goto LAB_1415a49df;
          }
          if (uVar3 == 0) break;
LAB_1415a49a4:
          lVar12 = lVar12 + 2;
        }
        iVar9 = 0;
LAB_1415a49df:
        bVar14 = iVar9 == 0;
      }
    }
    else {
      bVar14 = local_50 + iVar9 == 1;
    }
    if (local_58 != (code *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_60 + 1;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)*plVar11 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))(local_60);
        }
      }
    }
    if (!bVar14) {
      plVar11 = (longlong *)FUN_140d57cf8();
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0xd0))(plVar11,*(undefined8 *)(param_1 + 0x4e0));
      }
      *(undefined8 *)(param_1 + 0x4e0) = 0;
      plVar11 = (longlong *)FUN_140d57cf8();
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x58))(plVar11,*(undefined8 *)(param_1 + 0x4e8));
      }
      *(undefined8 *)(param_1 + 0x4e8) = 0;
      cVar7 = FUN_140d577ec(ppcVar2);
      if (cVar7 == '\0') {
        plVar11 = (longlong *)FUN_140d57cf8();
        if (plVar11 != (longlong *)0x0) {
          cVar7 = (**(code **)(*plVar11 + 0x60))(plVar11);
          if (cVar7 != '\0') {
            FUN_148dae156(param_1,&local_68);
            if (local_68 != 0) {
              local_58 = (code *)0x0;
              local_50 = *(int *)(param_1 + 0x4d0);
              lVar12 = (longlong)local_50;
              pvVar5 = *(void **)(param_1 + 0x4c8);
              if (lVar12 == 0) {
                local_4c = 0;
              }
              else {
                FUN_1446dd670(&local_58,local_50,0);
                memcpy(local_58,pvVar5,lVar12 * 2);
              }
              FUN_1438a4b4a(lVar6,&local_58);
              if ((local_4c != 0xffffffff) && (local_58 != (code *)0x0)) {
                FUN_1400020a8();
              }
              cVar7 = (**(code **)(*plVar11 + 0x68))(plVar11,local_68);
              if (cVar7 == '\0') {
                cVar7 = (**(code **)(*plVar11 + 0x70))(plVar11,local_68);
                if (cVar7 == '\0') {
                  FUN_1441dffc4(param_1);
                  goto LAB_1415a4b7e;
                }
              }
              if (*(longlong *)(param_1 + 0x4e0) == 0) {
                local_58 = FUN_1441dfe7e;
                local_50 = 0;
                FUN_148dae1be(local_80,param_1);
                (**(code **)(*plVar11 + 200))(plVar11,&local_58,local_80);
                *(code **)(param_1 + 0x4e0) = local_58;
              }
              (**(code **)(*plVar11 + 0xa0))(plVar11,local_68,1);
              FUN_148dae26c(param_1);
            }
          }
        }
      }
      else {
        local_58 = (code *)0x0;
        local_50 = *(int *)(param_1 + 0x4d0);
        lVar12 = (longlong)local_50;
        pvVar5 = *(void **)(param_1 + 0x4c8);
        if (lVar12 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_50,0);
          memcpy(local_58,pvVar5,lVar12 * 2);
        }
        FUN_1438a4b4a(lVar6,&local_58);
        if ((local_4c != 0xffffffff) && (local_58 != (code *)0x0)) {
          FUN_1400020a8();
        }
      }
    }
  }
LAB_1415a4b7e:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a4cde FUN_1415a4cde body=289 status=ok
// SIG undefined FUN_1415a4cde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a4cde(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fbdc8) {
    FUN_144b3d300(&DAT_14c9fbdc8);
    if (DAT_14c9fbdc8 == -1) {
      FUN_1415a4e00();
      FUN_145f8a932();
      FUN_140db5666(&DAT_14c9fbd20,0,&DAT_14c9fbcb8,L"FClearLumenCardCapturePS",
                    L"/Engine/Private/Lumen/LumenSceneLighting.usf",L"ClearLumenCardCapturePS",3,1,
                    FUN_14720842c,FUN_1472083cc,&LAB_1462e177a,&LAB_1472083c8,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9fef70);
      _DAT_14c9fbd20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d811dd);
      _Init_thread_footer(&DAT_14c9fbdc8);
    }
  }
  return &DAT_14c9fbd20;
}



// FUNCTION 1415a4e00 FUN_1415a4e00 body=260 status=ok
// SIG undefined FUN_1415a4e00(void)

void FUN_1415a4e00(void)

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
              0x110) < DAT_14c9feff0) {
    FUN_144b3d300(&DAT_14c9feff0);
    if (DAT_14c9feff0 == -1) {
      FUN_145f8aa7c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x827;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9fef70,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c629);
      _Init_thread_footer(&DAT_14c9feff0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a4f06 FUN_1415a4f06 body=139 status=ok
// SIG undefined FUN_1415a4f06(void)

void FUN_1415a4f06(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < *(int *)(param_1 + 0x210)) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x208) + lVar3 * 8) + 0x10))();
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x210));
  }
  if (0 < *(int *)(param_1 + 0x220)) {
    lVar3 = 0;
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x218) + lVar3 * 8);
      lVar2 = lVar1 + 0x20;
      if (lVar1 == 0) {
        lVar2 = 0;
      }
      FUN_140414380(lVar2,0);
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x220));
  }
  FUN_145f8b266(param_1 + 0x98);
  FUN_145f8b244(*(undefined8 *)(param_1 + 0x260),0);
  return;
}



// FUNCTION 1415a4f92 FUN_1415a4f92 body=2238 status=ok
// SIG undefined FUN_1415a4f92(void)

void FUN_1415a4f92(longlong param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  DWORD DVar8;
  int iVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined4 uVar16;
  uint *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  int *piVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_e8 [32];
  code **local_c8;
  DWORD local_b4;
  undefined4 local_b0;
  DWORD local_ac;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  code *local_88;
  undefined8 uStack_80;
  longlong *local_78;
  undefined8 uStack_70;
  longlong local_68 [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  iVar9 = *(int *)(param_1 + 0x318);
  iVar3 = *(int *)(param_1 + 0x328);
  if (iVar9 == 0 && iVar3 == 0) goto LAB_1415a5363;
  lVar20 = *(longlong *)(param_1 + 0x310);
  *(undefined8 *)(param_1 + 0x310) = 0;
  uVar16 = *(undefined4 *)(param_1 + 0x31c);
  local_a0 = CONCAT44(uVar16,iVar9);
  *(undefined8 *)(param_1 + 0x318) = 0;
  lVar5 = *(longlong *)(param_1 + 800);
  *(undefined8 *)(param_1 + 800) = 0;
  DVar8 = *(DWORD *)(param_1 + 0x32c);
  local_90 = CONCAT44(DVar8,iVar3);
  *(undefined8 *)(param_1 + 0x328) = 0;
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar4 = *(int *)(lVar19 + 0xc60);
  local_a8 = lVar20;
  local_98 = lVar5;
  if (DAT_14c86a9fc == 0) {
    if (iVar4 != 2) {
      local_b4 = DVar8;
      local_b0 = uVar16;
      if (iVar4 == 1) {
        local_ac = FUN_140ad26c0();
        DVar8 = GetCurrentThreadId();
        bVar23 = local_ac == DVar8;
      }
      else {
        bVar23 = iVar4 == 0x10;
      }
      DVar8 = local_b4;
      uVar16 = local_b0;
      if (!bVar23) goto LAB_1415a5153;
    }
LAB_1415a5058:
    if (iVar9 != 0) {
      lVar19 = 0;
      do {
        lVar6 = *(longlong *)(lVar20 + lVar19);
        if (lVar6 != 0) {
          FUN_1469546e6(lVar6);
          FUN_1400020a8(lVar6);
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar9 * 8 != lVar19);
    }
    if (iVar3 != 0) {
      lVar20 = 0;
      do {
        lVar19 = *(longlong *)(lVar5 + lVar20);
        if (lVar19 != 0) {
          FUN_1402bc997(*(undefined8 *)(lVar19 + 0x1e8),*(undefined4 *)(lVar19 + 0x1f0));
          if (*(longlong *)(lVar19 + 0x1e8) != 0) {
            FUN_1400020a8();
          }
          if (*(longlong *)(lVar19 + 0x1d8) != 0) {
            FUN_1400020a8();
          }
          FUN_1402bc9e4(*(undefined8 *)(lVar19 + 0x38),*(undefined4 *)(lVar19 + 0x40));
          if (*(longlong *)(lVar19 + 0x38) != 0) {
            FUN_1400020a8();
          }
          FUN_1402bc960(lVar19);
          FUN_1400020a8(lVar19);
        }
        lVar20 = lVar20 + 8;
      } while ((longlong)iVar3 * 8 != lVar20);
    }
  }
  else {
    if (iVar4 == 0x10) goto LAB_1415a5058;
LAB_1415a5153:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 == '\x01') && (iVar4 = *(int *)(lVar19 + 0xc60), iVar4 != 2)) {
        if (iVar4 == 1) {
          local_b0 = uVar16;
          local_b4 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          uVar16 = local_b0;
          if (local_b4 == DVar10) goto LAB_1415a5755;
        }
        goto LAB_1415a5184;
      }
LAB_1415a5755:
      if (iVar9 != 0) {
        lVar19 = 0;
        do {
          lVar6 = *(longlong *)(lVar20 + lVar19);
          if (lVar6 != 0) {
            FUN_1469546e6(lVar6);
            FUN_1400020a8(lVar6);
          }
          lVar19 = lVar19 + 8;
        } while ((longlong)iVar9 * 8 != lVar19);
      }
      if (iVar3 != 0) {
        lVar20 = 0;
        do {
          lVar19 = *(longlong *)(lVar5 + lVar20);
          if (lVar19 != 0) {
            FUN_1402bc997(*(undefined8 *)(lVar19 + 0x1e8),*(undefined4 *)(lVar19 + 0x1f0));
            if (*(longlong *)(lVar19 + 0x1e8) != 0) {
              FUN_1400020a8();
            }
            if (*(longlong *)(lVar19 + 0x1d8) != 0) {
              FUN_1400020a8();
            }
            FUN_1402bc9e4(*(undefined8 *)(lVar19 + 0x38),*(undefined4 *)(lVar19 + 0x40));
            if (*(longlong *)(lVar19 + 0x38) != 0) {
              FUN_1400020a8();
            }
            FUN_1402bc960(lVar19);
            FUN_1400020a8(lVar19);
          }
          lVar20 = lVar20 + 8;
        } while ((longlong)iVar3 * 8 != lVar20);
      }
    }
    else {
LAB_1415a5184:
      if (DAT_14ca9a43c == 0) {
        puVar1 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar1;
        if (puVar12 != (uint *)0x0) goto LAB_1415a5436;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_1432c7d5e);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar1 = puVar11;
          FUN_140217a48(puVar1);
          puVar12 = (uint *)*puVar1;
LAB_1415a5436:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar17 = (uint *)(puVar18 + 0x19);
          uVar14 = puVar12[0x12];
          if (puVar17 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar2 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar2 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar1;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar1 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar17 = (uint *)(puVar18 + 0x19);
            uVar14 = 0;
            if (puVar17 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1415a54b6;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1415a54b6:
        *(uint **)(puVar12 + 0x10) = puVar17;
        puVar12[0x12] = uVar14;
        iVar9 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a452658;
        puVar18[0x15] = local_a8;
        local_a8 = 0;
        *(undefined4 *)(puVar18 + 0x16) = (undefined4)local_a0;
        *(undefined4 *)((longlong)puVar18 + 0xb4) = local_a0._4_4_;
        local_a0 = 0;
        puVar18[0x17] = local_98;
        local_98 = 0;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)local_90;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = local_90._4_4_;
        local_90 = 0;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar22 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
          }
          else {
            uVar22 = 2;
          }
        }
        else {
          iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar22 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar7 = 1;
          if ((char)uVar22 != '\x06') {
            uVar7 = uVar22;
          }
          uVar22 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar22 == '\x06') {
            uVar22 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar22 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar9;
        if (puVar18 == (undefined8 *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar21 = (int *)(puVar18 + 1);
          *piVar21 = *piVar21 + -1;
          UNLOCK();
          if (*piVar21 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14a452610;
        local_a8 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_90 = 0;
        local_78[1] = lVar20;
        *(int *)(local_78 + 2) = iVar9;
        *(undefined4 *)((longlong)local_78 + 0x14) = uVar16;
        local_78[3] = lVar5;
        *(int *)(local_78 + 4) = iVar3;
        *(DWORD *)((longlong)local_78 + 0x24) = DVar8;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88 = FUN_1432cb7c0;
        }
        local_c8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"SlateDeferredDelete",&DAT_14cab0e8c);
        if (local_88 != (code *)0x0) {
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = local_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
    }
  }
  FUN_141534984(&local_98);
  FUN_1415349e8(&local_a8);
  local_78 = (longlong *)0x0;
  uStack_70 = 0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  lVar20 = *(longlong *)(param_1 + 0x310);
  if (lVar20 != 0) {
    piVar21 = (int *)((lVar20 + -8) - (ulonglong)*(uint *)(lVar20 + -8));
    LOCK();
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      if (*(longlong *)(piVar21 + 0x10) - (longlong)piVar21 == 0x10000) {
        lVar20 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar20 = FUN_145bdc178();
        }
        FUN_140028df4(lVar20,piVar21);
      }
      else {
        FUN_144705e74(piVar21);
      }
    }
  }
  *(code **)(param_1 + 0x310) = local_88;
  local_88 = (code *)0x0;
  *(undefined4 *)(param_1 + 0x318) = (undefined4)uStack_80;
  *(undefined4 *)(param_1 + 0x31c) = uStack_80._4_4_;
  uStack_80 = 0;
  lVar20 = *(longlong *)(param_1 + 800);
  if (lVar20 != 0) {
    piVar21 = (int *)((lVar20 + -8) - (ulonglong)*(uint *)(lVar20 + -8));
    LOCK();
    *piVar21 = *piVar21 + -1;
    UNLOCK();
    if (*piVar21 == 0) {
      if (*(longlong *)(piVar21 + 0x10) - (longlong)piVar21 == 0x10000) {
        lVar20 = DAT_14c872d30;
        if (DAT_14c872d30 == 0) {
          lVar20 = FUN_145bdc178();
        }
        FUN_140028df4(lVar20,piVar21);
      }
      else {
        FUN_144705e74(piVar21);
      }
    }
  }
  *(longlong **)(param_1 + 800) = local_78;
  local_78 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x328) = (undefined4)uStack_70;
  *(undefined4 *)(param_1 + 0x32c) = uStack_70._4_4_;
  uStack_70 = 0;
  FUN_141534984(&local_78);
  FUN_1415349e8(&local_88);
LAB_1415a5363:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a5852 FUN_1415a5852 body=289 status=ok
// SIG undefined FUN_1415a5852(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a5852(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7440) {
    FUN_144b3d300(&DAT_14c9c7440);
    if (DAT_14c9c7440 == -1) {
      FUN_1415a5974();
      FUN_145f8bef0();
      FUN_140db5666(&DAT_14c9c7398,0,&DAT_14c9c7330,L"FComputeCulledObjectStartOffsetCS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"ComputeCulledTilesStartOffsetCS"
                    ,5,1,FUN_14714f83e,FUN_14714f7de,&LAB_14714f7c6,&LAB_14714f7c2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9c8da0);
      _DAT_14c9c7398 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be018b);
      _Init_thread_footer(&DAT_14c9c7440);
    }
  }
  return &DAT_14c9c7398;
}



// FUNCTION 1415a5974 FUN_1415a5974 body=258 status=ok
// SIG undefined FUN_1415a5974(void)

void FUN_1415a5974(void)

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
              0x110) < DAT_14c9c8e20) {
    FUN_144b3d300(&DAT_14c9c8e20);
    if (DAT_14c9c8e20 == -1) {
      FUN_145f8c03a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x1e1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8da0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be777e);
      _Init_thread_footer(&DAT_14c9c8e20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a5a78 FUN_1415a5a78 body=289 status=ok
// SIG undefined FUN_1415a5a78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a5a78(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9ee868) {
    FUN_144b3d300(&DAT_14c9ee868);
    if (DAT_14c9ee868 == -1) {
      FUN_1415a5b9a();
      FUN_145f8c128();
      FUN_140db5666(&DAT_14c9ee7c0,0,&DAT_14c9ee758,L"FClearProbeIndirectionCS",
                    L"/Engine/Private/Lumen/LumenRadianceCache.usf",L"ClearProbeIndirectionCS",5,1,
                    FUN_1471df452,FUN_1471df3f2,&LAB_1462d730e,&LAB_1471df3ee,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9f0ab0);
      _DAT_14c9ee7c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d26049);
      _Init_thread_footer(&DAT_14c9ee868);
    }
  }
  return &DAT_14c9ee7c0;
}



// FUNCTION 1415a5b9a FUN_1415a5b9a body=258 status=ok
// SIG undefined FUN_1415a5b9a(void)

void FUN_1415a5b9a(void)

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
              0x110) < DAT_14c9f0b30) {
    FUN_144b3d300(&DAT_14c9f0b30);
    if (DAT_14c9f0b30 == -1) {
      FUN_145f8c272(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x12a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9f0ab0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d262fb);
      _Init_thread_footer(&DAT_14c9f0b30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a5c9e FUN_1415a5c9e body=289 status=ok
// SIG undefined FUN_1415a5c9e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a5c9e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01290) {
    FUN_144b3d300(&DAT_14ca01290);
    if (DAT_14ca01290 == -1) {
      FUN_1415a5dc0();
      FUN_145f8c360();
      FUN_140db5666(&DAT_14ca011e8,0,&DAT_14ca01180,L"FClearTracesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",L"ClearTracesCS",5,1,
                    FUN_147220e38,FUN_147220dd8,&LAB_1462e7328,&LAB_147220dd4,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca05b48);
      _DAT_14ca011e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db08c8);
      _Init_thread_footer(&DAT_14ca01290);
    }
  }
  return &DAT_14ca011e8;
}



// FUNCTION 1415a5dc0 FUN_1415a5dc0 body=258 status=ok
// SIG undefined FUN_1415a5dc0(void)

void FUN_1415a5dc0(void)

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
              0x110) < DAT_14ca05bc8) {
    FUN_144b3d300(&DAT_14ca05bc8);
    if (DAT_14ca05bc8 == -1) {
      FUN_145f8c4aa(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x8b;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05b48,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3001);
      _Init_thread_footer(&DAT_14ca05bc8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a5ec4 FUN_1415a5ec4 body=289 status=ok
// SIG undefined FUN_1415a5ec4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a5ec4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2fcb8) {
    FUN_144b3d300(&DAT_14ca2fcb8);
    if (DAT_14ca2fcb8 == -1) {
      FUN_1415a5fe6();
      FUN_145f8c598();
      FUN_140db5666(&DAT_14ca2fc10,0,&DAT_14ca2fba8,L"FSubsurfaceInitValueBufferCS",
                    L"/Engine/Private/PostProcessSubsurface.usf",L"InitValueBufferCS",5,1,
                    FUN_1472996c4,FUN_147299664,&LAB_14729964c,&LAB_147299648,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca33a30);
      _DAT_14ca2fc10 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f06058);
      _Init_thread_footer(&DAT_14ca2fcb8);
    }
  }
  return &DAT_14ca2fc10;
}



// FUNCTION 1415a5fe6 FUN_1415a5fe6 body=258 status=ok
// SIG undefined FUN_1415a5fe6(void)

void FUN_1415a5fe6(void)

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
              0x110) < DAT_14ca33ab0) {
    FUN_144b3d300(&DAT_14ca33ab0);
    if (DAT_14ca33ab0 == -1) {
      FUN_145f8c6e2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1c5;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca33a30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f1408d);
      _Init_thread_footer(&DAT_14ca33ab0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a60ea FUN_1415a60ea body=289 status=ok
// SIG undefined FUN_1415a60ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a60ea(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca43068) {
    FUN_144b3d300(&DAT_14ca43068);
    if (DAT_14ca43068 == -1) {
      FUN_1415a620c();
      FUN_145f8c7d0();
      FUN_140db5666(&DAT_14ca42fc0,0,&DAT_14ca42f58,L"FRenderRealTimeReflectionHeightFogVS",
                    L"/Engine/Private/ReflectionEnvironmentShaders.usf",
                    L"RenderRealTimeReflectionHeightFogVS",0,1,FUN_1472c751e,FUN_1472c74be,
                    &LAB_1472c74ba,&LAB_1472c74b6,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca44298)
      ;
      _DAT_14ca42fc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f8f525);
      _Init_thread_footer(&DAT_14ca43068);
    }
  }
  return &DAT_14ca42fc0;
}



// FUNCTION 1415a620c FUN_1415a620c body=258 status=ok
// SIG undefined FUN_1415a620c(void)

void FUN_1415a620c(void)

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
              0x110) < DAT_14ca44318) {
    FUN_144b3d300(&DAT_14ca44318);
    if (DAT_14ca44318 == -1) {
      FUN_145f8c91a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0xd0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44298,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fb2573);
      _Init_thread_footer(&DAT_14ca44318);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a6310 FUN_1415a6310 body=289 status=ok
// SIG undefined FUN_1415a6310(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a6310(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5cd00) {
    FUN_144b3d300(&DAT_14ca5cd00);
    if (DAT_14ca5cd00 == -1) {
      FUN_1415a6432();
      FUN_145f8ca08();
      FUN_140db5666(&DAT_14ca5cc58,0,&DAT_14ca5cbf0,L"FRenderSkyAtmosphereVS",
                    L"/Engine/Private/SkyAtmosphere.usf",L"SkyAtmosphereVS",0,1,FUN_147315b9e,
                    FUN_147315b3e,&LAB_147315b26,&LAB_147315b22,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca5ec10);
      _DAT_14ca5cc58 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430913a5);
      _Init_thread_footer(&DAT_14ca5cd00);
    }
  }
  return &DAT_14ca5cc58;
}



// FUNCTION 1415a6432 FUN_1415a6432 body=258 status=ok
// SIG undefined FUN_1415a6432(void)

void FUN_1415a6432(void)

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
              0x110) < DAT_14ca5ec90) {
    FUN_144b3d300(&DAT_14ca5ec90);
    if (DAT_14ca5ec90 == -1) {
      FUN_145f8cb52(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x286;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5ec10,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14309e7f7);
      _Init_thread_footer(&DAT_14ca5ec90);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a6536 FUN_1415a6536 body=289 status=ok
// SIG undefined FUN_1415a6536(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a6536(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caff998) {
    FUN_144b3d300(&DAT_14caff998);
    if (DAT_14caff998 == -1) {
      FUN_1415a6658();
      FUN_145f8cc40();
      FUN_140db5666(&DAT_14caff8f0,0,&DAT_14caff888,L"FClearStreamingRequestCount_CS",
                    L"/Engine/Private/Nanite/NaniteStreaming.usf",L"ClearStreamingRequestCount",5,1,
                    FUN_147ccc806,FUN_147ccc7a6,&LAB_1463fc732,&LAB_147ccc7a2,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14cafff38);
      _DAT_14caff8f0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14366cd0d);
      _Init_thread_footer(&DAT_14caff998);
    }
  }
  return &DAT_14caff8f0;
}



// FUNCTION 1415a6658 FUN_1415a6658 body=258 status=ok
// SIG undefined FUN_1415a6658(void)

void FUN_1415a6658(void)

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
              0x110) < DAT_14cafffb8) {
    FUN_144b3d300(&DAT_14cafffb8);
    if (DAT_14cafffb8 == -1) {
      FUN_145f8cd8a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x1a6;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cafff38,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1436798ae);
      _Init_thread_footer(&DAT_14cafffb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a675c FUN_1415a675c body=4440 status=ok
// SIG undefined FUN_1415a675c(void)

void FUN_1415a675c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  ushort *puVar9;
  void *pvVar10;
  char cVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  void **ppvVar16;
  undefined8 *puVar17;
  undefined1 uVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 auStack_168 [40];
  longlong local_140;
  PSRWLOCK local_138;
  void *local_130;
  void *local_128;
  int local_120;
  undefined4 local_11c;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined4 local_e0;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  lVar5 = *(longlong *)(param_1 + 0x288);
  if ((lVar5 == 0) || (*(int *)(param_1 + 0x208) == 0)) goto LAB_1415a67fd;
  lVar4 = param_1 + 0x208;
  FUN_1448d5e3c(&local_f8,lVar4);
  plVar6 = (longlong *)local_f8[0x2c];
  AcquireSRWLockShared((PSRWLOCK)(plVar6 + 4));
  plVar7 = local_f0;
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_f0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  if (*(int *)(lVar5 + 0xac) != (int)plVar6[3]) {
    *(int *)(lVar5 + 0xac) = (int)plVar6[3];
    if (((longlong)(int)plVar6[1] != 0) &&
       (lVar21 = (longlong)(int)plVar6[1] * 200 + *plVar6, lVar21 != 200)) {
      *(undefined1 *)(lVar5 + 0x1d8) = *(undefined1 *)(lVar21 + -0x51);
      FUN_1410e88ee(lVar5 + 0xb0,lVar21 + -0xc0);
      iVar13 = *(int *)(lVar5 + 0xcc);
      local_140 = lVar21;
      if (*(int *)(lVar21 + -0x98) < 2) {
        if (*(char *)(lVar5 + 200) == '\0') {
          if (iVar13 == 0) {
            iVar13 = 0;
            goto LAB_1415a6f45;
          }
        }
        else {
LAB_1415a6f45:
          *(undefined1 *)(lVar5 + 200) = 0;
          *(int *)(lVar5 + 0xcc) = iVar13 + 1;
        }
        FUN_140c12dec(lVar5 + 0xd0,&DAT_149e02088);
      }
      else {
        if ((*(char *)(lVar5 + 200) == '\0') || (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
          *(undefined1 *)(lVar5 + 200) = 1;
          *(int *)(lVar5 + 0xcc) = iVar13 + 1;
        }
        FUN_1449a0272(lVar5 + 0xd0,lVar21 + -0xa0);
      }
      FUN_1410e88ee(lVar5 + 0xe8,local_140 + -0xb0);
      cVar11 = FUN_144a7c5f6(lVar5 + 0xe8);
      iVar13 = *(int *)(lVar5 + 0x104);
      if (cVar11 == '\0') {
        uVar12 = 1;
        uVar18 = 1;
        if (*(char *)(lVar5 + 0x100) == '\0') goto LAB_1415a71b4;
LAB_1415a68ed:
        uVar12 = uVar18;
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a71b4;
        }
      }
      else {
        uVar12 = 0;
        uVar18 = 0;
        if (*(char *)(lVar5 + 0x100) == '\0') goto LAB_1415a68ed;
LAB_1415a71b4:
        *(undefined1 *)(lVar5 + 0x100) = uVar12;
        *(int *)(lVar5 + 0x104) = iVar13 + 1;
      }
      local_138 = (PSRWLOCK)(lVar5 + 0x138);
      iVar13 = *(int *)(lVar5 + 0x144);
      FUN_14071621b(*(undefined8 *)(lVar5 + 0x138),*(undefined4 *)(lVar5 + 0x140));
      *(undefined4 *)(lVar5 + 0x140) = 0;
      if ((iVar13 < 0) && (*(int *)(lVar5 + 0x144) != 0)) {
        FUN_14574681c(local_138,0);
      }
      if (0 < *(int *)(local_140 + -0x88)) {
        lVar20 = 0;
        uVar22 = 0;
        lVar21 = local_140;
        do {
          FUN_1415a78b6(&local_f8);
          plVar1 = local_e8;
          lVar21 = *(longlong *)(lVar21 + -0x90);
          plVar7 = *(longlong **)(lVar21 + lVar20);
          if (local_e8 != plVar7) {
            local_e8 = plVar7;
            if (plVar7 != (longlong *)0x0) {
              (**(code **)(*plVar7 + 8))();
            }
            if (plVar1 != (longlong *)0x0) {
              (**(code **)(*plVar1 + 0x10))(plVar1);
            }
          }
          local_e0 = *(undefined4 *)(lVar21 + 8 + lVar20);
          iVar13 = *(int *)(lVar5 + 0x140);
          *(uint *)(lVar5 + 0x140) = iVar13 + 1U;
          if (*(uint *)(lVar5 + 0x144) < iVar13 + 1U) {
            FUN_1407cce00(local_138,iVar13);
          }
          FUN_140716340((PVOID)((longlong)iVar13 * 0xb0 + (longlong)local_138->Ptr),&local_f8);
          lVar21 = local_140;
          if ((*(longlong *)(local_140 + -0x60) ==
               *(longlong *)(*(longlong *)(local_140 + -0x90) + 0x10 + lVar20)) &&
             (*(int *)(lVar5 + 0x14c) == 0 || uVar22 != *(uint *)(lVar5 + 0x148))) {
            *(int *)(lVar5 + 0x148) = (int)uVar22;
            *(int *)(lVar5 + 0x14c) = *(int *)(lVar5 + 0x14c) + 1;
          }
          FUN_140716244(&local_f8);
          uVar22 = uVar22 + 1;
          lVar20 = lVar20 + 0x20;
        } while ((longlong)uVar22 < (longlong)*(int *)(lVar21 + -0x88));
      }
      if (*(int *)(lVar5 + 0x140) == 2) {
        iVar13 = *(int *)(lVar5 + 0x1bc);
        if ((*(char *)(lVar5 + 0x1b8) == '\0') || (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
          *(undefined1 *)(lVar5 + 0x1b8) = 1;
LAB_1415a6a84:
          *(int *)(lVar5 + 0x1bc) = iVar13 + 1;
        }
LAB_1415a6a8c:
        iVar13 = *(int *)(lVar5 + 0x19c);
        if (*(char *)(lVar5 + 0x198) == '\0') {
          if (iVar13 != 0) goto LAB_1415a6ab0;
          iVar13 = 0;
        }
        *(undefined1 *)(lVar5 + 0x198) = 0;
        *(int *)(lVar5 + 0x19c) = iVar13 + 1;
      }
      else {
        iVar13 = *(int *)(lVar5 + 0x1bc);
        if (*(int *)(lVar5 + 0x140) < 4) {
          if ((*(char *)(lVar5 + 0x1b8) != '\0') || (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
            *(undefined1 *)(lVar5 + 0x1b8) = 0;
            goto LAB_1415a6a84;
          }
          goto LAB_1415a6a8c;
        }
        if (*(char *)(lVar5 + 0x1b8) == '\0') {
          if (iVar13 == 0) {
            iVar13 = 0;
            goto LAB_1415a75d1;
          }
        }
        else {
LAB_1415a75d1:
          *(undefined1 *)(lVar5 + 0x1b8) = 0;
          *(int *)(lVar5 + 0x1bc) = iVar13 + 1;
        }
        iVar13 = *(int *)(lVar5 + 0x19c);
        if (*(char *)(lVar5 + 0x198) == '\0') {
LAB_1415a6def:
          *(undefined1 *)(lVar5 + 0x198) = 1;
          *(int *)(lVar5 + 0x19c) = iVar13 + 1;
        }
        else if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6def;
        }
        local_138 = (PSRWLOCK)(lVar5 + 0x1a8);
        iVar13 = *(int *)(lVar5 + 0x1b4);
        FUN_14071621b(*(undefined8 *)(lVar5 + 0x1a8),*(undefined4 *)(lVar5 + 0x1b0));
        *(undefined4 *)(lVar5 + 0x1b0) = 0;
        if ((iVar13 < 0) && (*(int *)(lVar5 + 0x1b4) != 0)) {
          FUN_14574681c(local_138,0);
        }
        if (0 < *(int *)(local_140 + -0x88)) {
          lVar20 = 0;
          uVar22 = 0;
          lVar21 = local_140;
          do {
            FUN_1415a78b6(&local_f8);
            plVar1 = local_e8;
            lVar21 = *(longlong *)(lVar21 + -0x90);
            plVar7 = *(longlong **)(lVar21 + lVar20);
            if (local_e8 != plVar7) {
              local_e8 = plVar7;
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 8))();
              }
              if (plVar1 != (longlong *)0x0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
              }
            }
            local_e0 = *(undefined4 *)(lVar21 + 8 + lVar20);
            iVar13 = *(int *)(lVar5 + 0x1b0);
            *(uint *)(lVar5 + 0x1b0) = iVar13 + 1U;
            if (*(uint *)(lVar5 + 0x1b4) < iVar13 + 1U) {
              FUN_1407cce00(local_138,iVar13);
            }
            FUN_140716340((PVOID)((longlong)iVar13 * 0xb0 + (longlong)local_138->Ptr),&local_f8);
            lVar21 = local_140;
            if ((*(longlong *)(local_140 + -0x60) ==
                 *(longlong *)(*(longlong *)(local_140 + -0x90) + 0x10 + lVar20)) &&
               ((uVar22 != *(uint *)(lVar5 + 0x148) || (*(int *)(lVar5 + 0x14c) == 0)))) {
              *(int *)(lVar5 + 0x148) = (int)uVar22;
              *(int *)(lVar5 + 0x14c) = *(int *)(lVar5 + 0x14c) + 1;
            }
            FUN_140716244(&local_f8);
            uVar22 = uVar22 + 1;
            lVar20 = lVar20 + 0x20;
          } while ((longlong)uVar22 < (longlong)*(int *)(lVar21 + -0x88));
        }
      }
LAB_1415a6ab0:
      iVar13 = *(int *)(lVar5 + 0x17c);
      if (*(char *)(lVar5 + 0x178) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6d4a;
        }
      }
      else {
LAB_1415a6d4a:
        *(undefined1 *)(lVar5 + 0x178) = 0;
        *(int *)(lVar5 + 0x17c) = iVar13 + 1;
      }
      iVar13 = *(int *)(lVar5 + 0x174);
      if (*(char *)(lVar5 + 0x170) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6d60;
        }
      }
      else {
LAB_1415a6d60:
        *(undefined1 *)(lVar5 + 0x170) = 0;
        *(int *)(lVar5 + 0x174) = iVar13 + 1;
      }
      iVar13 = *(int *)(lVar5 + 0x10c);
      if (*(char *)(lVar5 + 0x108) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6d76;
        }
      }
      else {
LAB_1415a6d76:
        *(undefined1 *)(lVar5 + 0x108) = 0;
        *(int *)(lVar5 + 0x10c) = iVar13 + 1;
      }
      iVar13 = *(int *)(lVar5 + 0x1a4);
      if (*(char *)(lVar5 + 0x1a0) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6d8c;
        }
      }
      else {
LAB_1415a6d8c:
        *(undefined1 *)(lVar5 + 0x1a0) = 0;
        *(int *)(lVar5 + 0x1a4) = iVar13 + 1;
      }
      iVar13 = *(int *)(lVar5 + 0x134);
      if (*(char *)(lVar5 + 0x130) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6da2;
        }
      }
      else {
LAB_1415a6da2:
        *(undefined1 *)(lVar5 + 0x130) = 0;
        *(int *)(lVar5 + 0x134) = iVar13 + 1;
      }
      iVar13 = *(int *)(lVar5 + 300);
      if (*(char *)(lVar5 + 0x128) == '\0') {
        if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a6db8;
        }
      }
      else {
LAB_1415a6db8:
        *(undefined1 *)(lVar5 + 0x128) = 0;
        *(int *)(lVar5 + 300) = iVar13 + 1;
      }
      lVar21 = lVar5 + 0x1c0;
      FUN_145f8d037(*(undefined8 *)(lVar5 + 0x1c0),*(undefined4 *)(lVar5 + 0x1c8));
      *(undefined4 *)(lVar5 + 0x1c8) = 0;
      if (*(int *)(lVar5 + 0x1cc) != 0) {
        FUN_148efbd32(lVar21);
      }
      *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
      puVar17 = (undefined8 *)(param_1 + 0x2b8);
      *(undefined4 *)(param_1 + 0x2c0) = 0;
      if (*(int *)(param_1 + 0x2c4) < 0) {
        FUN_1446f8c06(puVar17,0);
      }
      if ((undefined2 *)*puVar17 != (undefined2 *)0x0) {
        *(undefined2 *)*puVar17 = 0;
      }
      *(undefined4 *)(param_1 + 0x2d0) = 0;
      if (*(int *)(param_1 + 0x2d4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x2c8),0);
      }
      puVar8 = *(undefined2 **)(param_1 + 0x2c8);
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
      *(undefined4 *)(param_1 + 0x2e0) = 0;
      if (*(int *)(param_1 + 0x2e4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x2d8),0);
      }
      puVar8 = *(undefined2 **)(param_1 + 0x2d8);
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
      *(undefined4 *)(param_1 + 0x2f0) = 0;
      if (*(int *)(param_1 + 0x2f4) < 0) {
        FUN_1446f8c06((undefined8 *)(param_1 + 0x2e8),0);
      }
      lVar20 = local_140;
      puVar8 = *(undefined2 **)(param_1 + 0x2e8);
      if (puVar8 != (undefined2 *)0x0) {
        *puVar8 = 0;
      }
      switch(*(undefined1 *)(local_140 + -0x52)) {
      case 1:
        iVar13 = *(int *)(lVar5 + 0x17c);
        if (*(char *)(lVar5 + 0x178) != '\0') {
          if (iVar13 != 0) break;
          iVar13 = 0;
        }
        *(undefined1 *)(lVar5 + 0x178) = 1;
        *(int *)(lVar5 + 0x17c) = iVar13 + 1;
        break;
      case 2:
        iVar13 = *(int *)(lVar5 + 0x174);
        if (*(char *)(lVar5 + 0x170) != '\0') {
          if (iVar13 != 0) break;
          iVar13 = 0;
        }
        *(undefined1 *)(lVar5 + 0x170) = 1;
        *(int *)(lVar5 + 0x174) = iVar13 + 1;
        break;
      case 3:
        iVar13 = *(int *)(lVar5 + 0x10c);
        if ((*(char *)(lVar5 + 0x108) == '\0') || (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
          *(undefined1 *)(lVar5 + 0x108) = 1;
          *(int *)(lVar5 + 0x10c) = iVar13 + 1;
        }
        FUN_1410e88ee(lVar5 + 0x110,local_140 + -0x50);
        *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
        puVar15 = (undefined8 *)FUN_148efbd62(lVar21);
        FUN_144a787a6(puVar15,lVar20 + -0x40);
        *(undefined1 *)((longlong)puVar15 + 0x24) = *(undefined1 *)(lVar20 + -0x53);
        iVar13 = *(int *)(puVar15 + 1) + -1;
        if (*(int *)(puVar15 + 1) == 0) {
          iVar13 = 0;
        }
        FUN_1402980a2(puVar17,*puVar15,iVar13);
        break;
      case 5:
        iVar13 = *(int *)(lVar5 + 0x134);
        if (*(char *)(lVar5 + 0x130) == '\0') {
LAB_1415a72c2:
          *(undefined1 *)(lVar5 + 0x130) = 1;
          *(int *)(lVar5 + 0x134) = iVar13 + 1;
        }
        else if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a72c2;
        }
        FUN_1410e88ee(lVar5 + 0x110,local_140 + -0x50);
        pcVar3 = (char *)(lVar20 + -0x53);
        iVar13 = *(int *)(lVar5 + 0x1a4);
        lVar20 = local_140;
        if (*pcVar3 == *(char *)(lVar5 + 0x1a0)) {
          if (iVar13 != 0) break;
          iVar13 = 0;
        }
        *(char *)(lVar5 + 0x1a0) = *pcVar3;
        *(int *)(lVar5 + 0x1a4) = iVar13 + 1;
        break;
      case 6:
        iVar13 = *(int *)(lVar5 + 300);
        if ((*(char *)(lVar5 + 0x128) == '\0') || (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
          *(undefined1 *)(lVar5 + 0x128) = 1;
          *(int *)(lVar5 + 300) = iVar13 + 1;
        }
        FUN_1410e88ee(lVar5 + 0x110,local_140 + -0x50);
        iVar13 = *(int *)(lVar5 + 0x1a4);
        if ((*(char *)(lVar20 + -0x53) != *(char *)(lVar5 + 0x1a0)) ||
           (bVar23 = iVar13 == 0, iVar13 = 0, bVar23)) {
          *(char *)(lVar5 + 0x1a0) = *(char *)(lVar20 + -0x53);
          *(int *)(lVar5 + 0x1a4) = iVar13 + 1;
        }
        FUN_1448d5e3c(&local_f8,lVar4);
        lVar20 = local_f8[0x86];
        local_138 = (PSRWLOCK)(lVar20 + 0xf0);
        AcquireSRWLockShared(local_138);
        plVar7 = local_f0;
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_f0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_f0)(local_f0);
            LOCK();
            piVar2 = (int *)((longlong)plVar7 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (*(int *)(lVar20 + 0xd8) < 1) {
          FUN_1410d1eba(&local_f8,&DAT_14cbe58f8);
          puVar17 = (undefined8 *)FUN_1447a1f4a(&local_f8);
          local_108 = (void *)0x0;
          local_100 = *(int *)(puVar17 + 1);
          lVar19 = (longlong)local_100;
          pvVar10 = (void *)*puVar17;
          if (lVar19 == 0) {
            local_fc = 0;
          }
          else {
            FUN_1446dd670(&local_108,local_100,0);
            memcpy(local_108,pvVar10,lVar19 * 2);
          }
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
        else {
          FUN_140002266(&local_108,L"%02d");
        }
        if (*(int *)(lVar20 + 0xdc) < 1) {
          FUN_1410d1eba(&local_f8,&DAT_14cbe5920);
          puVar17 = (undefined8 *)FUN_1447a1f4a(&local_f8);
          local_118 = (void *)0x0;
          local_110 = *(int *)(puVar17 + 1);
          lVar19 = (longlong)local_110;
          pvVar10 = (void *)*puVar17;
          if (lVar19 == 0) {
            local_10c = 0;
          }
          else {
            FUN_1446dd670(&local_118,local_110,0);
            memcpy(local_118,pvVar10,lVar19 * 2);
          }
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
        else {
          FUN_140002266(&local_118,L"%02d");
        }
        if (*(int *)(lVar20 + 0xe0) < 1) {
          FUN_1410d1eba(&local_f8,&DAT_14cbe5948);
          puVar17 = (undefined8 *)FUN_1447a1f4a(&local_f8);
          local_128 = (void *)0x0;
          local_120 = *(int *)(puVar17 + 1);
          lVar20 = (longlong)local_120;
          pvVar10 = (void *)*puVar17;
          if (lVar20 == 0) {
            local_11c = 0;
          }
          else {
            FUN_1446dd670(&local_128,local_120,0);
            memcpy(local_128,pvVar10,lVar20 * 2);
          }
          if (local_f8 != (longlong *)0x0) {
            (**(code **)(*local_f8 + 0x10))();
          }
        }
        else {
          FUN_140002266(&local_128,L"%04d");
        }
        *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
        ppvVar16 = (void **)FUN_148efbd62(lVar21);
        iVar13 = local_100;
        pvVar10 = local_108;
        *(undefined1 *)((longlong)ppvVar16 + 0x24) = *(undefined1 *)(local_140 + -0x53);
        if (ppvVar16 != &local_108) {
          lVar20 = (longlong)local_100;
          *(int *)(ppvVar16 + 1) = local_100;
          if (local_100 == 0 && *(int *)((longlong)ppvVar16 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar16 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(ppvVar16,local_100);
            if (iVar13 != 0) {
              memcpy(*ppvVar16,pvVar10,lVar20 * 2);
            }
          }
        }
        iVar13 = *(int *)(ppvVar16 + 1) + -1;
        if (*(int *)(ppvVar16 + 1) == 0) {
          iVar13 = 0;
        }
        FUN_1402980a2(ppvVar16 + 2,*ppvVar16,iVar13);
        *(undefined1 *)((longlong)ppvVar16 + 0x25) = 1;
        *(undefined4 *)(ppvVar16 + 4) = 2;
        *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
        ppvVar16 = (void **)FUN_148efbd62(lVar21);
        iVar13 = local_110;
        *(undefined1 *)((longlong)ppvVar16 + 0x24) = *(undefined1 *)(local_140 + -0x53);
        if (ppvVar16 != &local_118) {
          lVar20 = (longlong)local_110;
          local_130 = local_118;
          *(int *)(ppvVar16 + 1) = local_110;
          if (local_110 == 0 && *(int *)((longlong)ppvVar16 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar16 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(ppvVar16,local_110);
            if (iVar13 != 0) {
              memcpy(*ppvVar16,local_130,lVar20 * 2);
            }
          }
        }
        iVar13 = *(int *)(ppvVar16 + 1) + -1;
        if (*(int *)(ppvVar16 + 1) == 0) {
          iVar13 = 0;
        }
        FUN_1402980a2(ppvVar16 + 2,*ppvVar16,iVar13);
        *(undefined1 *)((longlong)ppvVar16 + 0x25) = 1;
        *(undefined4 *)(ppvVar16 + 4) = 2;
        *(int *)(lVar5 + 0x1d0) = *(int *)(lVar5 + 0x1d0) + 1;
        ppvVar16 = (void **)FUN_148efbd62(lVar21);
        iVar13 = local_120;
        pvVar10 = local_128;
        *(undefined1 *)((longlong)ppvVar16 + 0x24) = *(undefined1 *)(local_140 + -0x53);
        if (ppvVar16 != &local_128) {
          lVar21 = (longlong)local_120;
          *(int *)(ppvVar16 + 1) = local_120;
          if (local_120 == 0 && *(int *)((longlong)ppvVar16 + 0xc) == 0) {
            *(undefined4 *)((longlong)ppvVar16 + 0xc) = 0;
          }
          else {
            FUN_1446dd670(ppvVar16,local_120);
            if (iVar13 != 0) {
              memcpy(*ppvVar16,pvVar10,lVar21 * 2);
            }
          }
        }
        iVar13 = *(int *)(ppvVar16 + 1) + -1;
        if (*(int *)(ppvVar16 + 1) == 0) {
          iVar13 = 0;
        }
        FUN_1402980a2(ppvVar16 + 2,*ppvVar16,iVar13);
        *(undefined1 *)((longlong)ppvVar16 + 0x25) = 1;
        *(undefined4 *)(ppvVar16 + 4) = 4;
        if (local_128 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_118 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_108 != (void *)0x0) {
          FUN_1400020a8();
        }
        ReleaseSRWLockShared(local_138);
        lVar20 = local_140;
      }
      iVar13 = *(int *)(lVar5 + 0x154);
      if (*(char *)(lVar20 + -0x30) == '\x01') {
        if (*(char *)(lVar5 + 0x150) == '\0') {
LAB_1415a7106:
          *(undefined1 *)(lVar5 + 0x150) = 1;
          *(int *)(lVar5 + 0x154) = iVar13 + 1;
        }
        else if (iVar13 == 0) {
          iVar13 = 0;
          goto LAB_1415a7106;
        }
        *(undefined1 *)(param_1 + 0x2b4) = 1;
        lVar21 = local_140 + -0x28;
      }
      else {
        if (*(char *)(lVar5 + 0x150) == '\0') {
          if (iVar13 == 0) {
            iVar13 = 0;
            goto LAB_1415a6f5b;
          }
        }
        else {
LAB_1415a6f5b:
          *(undefined1 *)(lVar5 + 0x150) = 0;
          *(int *)(lVar5 + 0x154) = iVar13 + 1;
        }
        lVar21 = FUN_140e82300();
      }
      FUN_1410e88ee(lVar5 + 0x158,lVar21);
      iVar13 = *(int *)(local_140 + -0x18);
      iVar14 = *(int *)(lVar5 + 0x184);
      if (iVar13 < 1) {
        if (*(char *)(lVar5 + 0x180) != '\0') {
          iVar14 = iVar14 + 1;
LAB_1415a6f74:
          *(undefined1 *)(lVar5 + 0x180) = 0;
          lVar21 = 0x184;
          goto LAB_1415a6f80;
        }
        if (iVar14 == 0) {
          iVar14 = 1;
          goto LAB_1415a6f74;
        }
      }
      else {
        if (*(char *)(lVar5 + 0x180) == '\0') {
          iVar14 = iVar14 + 1;
LAB_1415a7564:
          *(undefined1 *)(lVar5 + 0x180) = 1;
          *(int *)(lVar5 + 0x184) = iVar14;
          iVar13 = *(int *)(local_140 + -0x18);
        }
        else if (iVar14 == 0) {
          iVar14 = 1;
          goto LAB_1415a7564;
        }
        if (iVar13 == *(int *)(lVar5 + 0x188)) {
          if (*(int *)(lVar5 + 0x18c) != 0) goto LAB_1415a6cd9;
          iVar14 = 1;
        }
        else {
          iVar14 = *(int *)(lVar5 + 0x18c) + 1;
        }
        *(int *)(lVar5 + 0x188) = iVar13;
        lVar21 = 0x18c;
LAB_1415a6f80:
        *(int *)(lVar5 + lVar21) = iVar14;
      }
LAB_1415a6cd9:
      iVar13 = *(int *)(lVar5 + 0x194);
      if (*(char *)(local_140 + -0xc) == '\x01') {
        if (*(char *)(lVar5 + 400) == '\0') {
          iVar13 = iVar13 + 1;
        }
        else {
          if (iVar13 != 0) goto LAB_1415a6d04;
          iVar13 = 1;
        }
        uVar18 = 1;
LAB_1415a6f90:
        *(undefined1 *)(lVar5 + 400) = uVar18;
        *(int *)(lVar5 + 0x194) = iVar13;
      }
      else {
        if (*(char *)(lVar5 + 400) != '\0') {
          iVar13 = iVar13 + 1;
LAB_1415a6f8e:
          uVar18 = 0;
          goto LAB_1415a6f90;
        }
        if (iVar13 == 0) {
          iVar13 = 1;
          goto LAB_1415a6f8e;
        }
      }
LAB_1415a6d04:
      if (*(char *)(lVar5 + 0x130) == '\x01') {
        FUN_148ef14ca(param_1);
      }
      if (*(char *)(lVar5 + 0x128) == '\x01') {
        FUN_148ef1d1e(param_1);
        FUN_148ef1e6a(param_1);
        FUN_148ef1fb6(param_1);
        FUN_148ef17f2(param_1);
      }
      *(undefined1 *)(param_1 + 0x2b1) = 0;
      puVar9 = *(ushort **)(lVar5 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
  }
  if (*(char *)(lVar5 + 0x130) == '\x01') {
    FUN_1448d5e3c(&local_f8,lVar4);
    lVar4 = local_f8[0x86];
    SRWLock = (PSRWLOCK)(lVar4 + 0xf0);
    AcquireSRWLockShared(SRWLock);
    if (local_f0 != (longlong *)0x0) {
      LOCK();
      plVar7 = local_f0 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
        (**(code **)*local_f0)(local_f0);
        LOCK();
        piVar2 = (int *)((longlong)local_f0 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_f0 + 0x10))(local_f0);
        }
      }
    }
    iVar13 = *(int *)(lVar4 + 0xe8);
    if (*(int *)(lVar5 + 0x2e0) != iVar13) {
      *(int *)(lVar5 + 0x2e0) = iVar13;
      FUN_148ef14ca(param_1);
      puVar9 = *(ushort **)(lVar5 + 0x80);
      if (puVar9 != (ushort *)0x0) {
        *puVar9 = *puVar9 | (ushort)(1L << (*(byte *)(lVar5 + 0x78) & 0x3f));
      }
    }
    ReleaseSRWLockShared(SRWLock);
  }
  ReleaseSRWLockShared((PSRWLOCK)(plVar6 + 4));
LAB_1415a67fd:
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a78b6 FUN_1415a78b6 body=783 status=ok
// SIG undefined FUN_1415a78b6(void)

undefined8 * FUN_1415a78b6(undefined8 *param_1)

{
  longlong *plVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[2] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[4] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
      DAT_14c844840[1] = 0;
      *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
      DAT_14c844840[2] = -1;
      DAT_14c844840[3] = 0;
      DAT_14c844840[4] = 0;
      DAT_14c844840[5] = 0;
      if (DAT_14c844840 != (longlong *)0x0) {
        LOCK();
        *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
        UNLOCK();
      }
      DAT_14c844848 = 0;
      atexit(FUN_142760bef);
      _Init_thread_footer(&DAT_14c844850);
    }
  }
  plVar1 = DAT_14c844840;
  param_1[6] = DAT_14c844840;
  if (plVar1 != (longlong *)0x0) {
    if (*(code **)(*plVar1 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar1 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 7) = 0;
  FUN_140056680(param_1 + 8,&DAT_149dfb77a);
  FUN_140056680(param_1 + 10,&DAT_149dfb77a);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 1415a7bc6 FUN_1415a7bc6 body=392 status=ok
// SIG undefined FUN_1415a7bc6(void)

void FUN_1415a7bc6(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(char *)((longlong)param_1 + 0xca) == '\0') {
    if (((char)param_1[0x24] == '\0') && (DAT_14c868883 == '\x01')) {
      uVar4 = FUN_1448c2e86();
      FUN_145ae8b1a(&local_68);
      FUN_145ae8b92(uVar4,&local_60,local_68);
      if (0 < local_58) {
        lVar6 = 0;
        do {
          plVar3 = *(longlong **)(local_60 + lVar6 * 8);
          (**(code **)(*plVar3 + 0x48))(plVar3,&local_78,param_1 + 3);
          local_88 = local_78;
          local_80 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_70 + 1) = (int)local_70[1] + 1;
            UNLOCK();
          }
          (**(code **)(*param_1 + 0x130))(param_1,&local_88);
          plVar3 = local_70;
          if (local_70 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_70 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*local_70)(local_70);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          lVar6 = lVar6 + 1;
        } while ((int)lVar6 < local_58);
      }
      *(undefined1 *)(param_1 + 0x24) = 1;
      if (local_60 != 0) {
        FUN_1400020a8();
      }
    }
    if ((*(char *)((longlong)param_1 + 0xcb) == '\x01') && (0 < (int)param_1[0x23])) {
      lVar6 = 0;
      iVar5 = 0;
      do {
        (**(code **)(**(longlong **)(param_1[0x22] + lVar6) + 8))
                  (*(longlong **)(param_1[0x22] + lVar6),param_2);
        (**(code **)(**(longlong **)(param_1[0x22] + lVar6) + 0x10))();
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 0x10;
      } while (iVar5 < (int)param_1[0x23]);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a7d50 FUN_1415a7d50 body=967 status=ok
// SIG undefined FUN_1415a7d50(void)

void FUN_1415a7d50(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  byte bVar5;
  undefined4 uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  longlong local_98;
  longlong *local_90;
  undefined8 *local_88;
  int local_80;
  undefined8 **local_78;
  longlong *local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*(uint *)(param_1 + 0x54) & 0xfffffffb) != 0) {
    local_58 = *(longlong **)*param_2;
    local_50 = (longlong *)((undefined8 *)*param_2)[1];
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
    }
    uVar6 = (**(code **)(*local_58 + 0x40))();
    iVar7 = FUN_140b6c20e(param_1 + 0x5a0,uVar6,&local_58);
    plVar3 = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_50 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_50)(local_50);
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (iVar7 == -1) {
      uVar2 = *(undefined8 *)*param_2;
      local_90 = (longlong *)((undefined8 *)*param_2)[1];
      if (local_90 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_90 + 1) = (int)local_90[1] + 1;
        UNLOCK();
      }
      if ((longlong)*(int *)(param_1 + 0x600) == 0) {
        uVar8 = 0;
      }
      else {
        local_98 = param_1 + 0x5f8;
        puVar11 = *(undefined8 **)(param_1 + 0x5f8);
        puVar12 = puVar11 + (longlong)*(int *)(param_1 + 0x600) * 2;
        uVar8 = 0;
        do {
          local_68 = (undefined8 *)*puVar11;
          local_60 = (longlong *)puVar11[1];
          if (local_60 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_60 + 1) = (int)local_60[1] + 1;
            UNLOCK();
          }
          bVar5 = (**(code **)*local_68)(local_68,uVar2);
          if (bVar5 != 0) {
            local_78 = &local_68;
            FUN_1460d2ee2(local_98,&local_78);
            if (((*(longlong *)(param_1 + 0x608) == 0) || (*(longlong *)(param_1 + 0x610) == 0)) ||
               (*(int *)(*(longlong *)(param_1 + 0x610) + 8) < 1)) {
              uVar8 = FUN_1401cb356();
              local_88 = (undefined8 *)0x0;
              local_80 = 0;
              FUN_1446efa72(&local_88,0,3,0x10);
              local_80 = 3;
              *local_88 = &PTR_LAB_149e02020;
              LOCK();
              UNLOCK();
              lVar10 = DAT_14c758608 + 1;
              lVar9 = DAT_14c758608 + 1;
              if (lVar10 == 0) {
                LOCK();
                UNLOCK();
                lVar10 = DAT_14c758608 + 2;
                lVar9 = DAT_14c758608 + 2;
              }
              DAT_14c758608 = lVar9;
              local_88[2] = lVar10;
              *local_88 = &PTR_FUN_14b4f5c80;
              local_88[3] = param_1;
              local_88[4] = FUN_140f9d43a;
              local_a8 = 0;
              FUN_1405f67fc(uVar8,&local_78,&local_88,
                            L"FGbxSocialParty_TickClearInitialRoomOccupants");
              *(undefined8 ***)(param_1 + 0x608) = local_78;
              local_78 = (undefined8 **)0x0;
              plVar3 = *(longlong **)(param_1 + 0x610);
              *(longlong **)(param_1 + 0x610) = local_70;
              local_70 = (longlong *)0x0;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                piVar1 = (int *)((longlong)plVar3 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar3 + 0x10))();
                }
                if (local_70 != (longlong *)0x0) {
                  LOCK();
                  piVar1 = (int *)((longlong)local_70 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*local_70 + 0x10))();
                  }
                }
              }
              if (local_80 != 0) {
                if (local_88 == (undefined8 *)0x0) goto LAB_1415a8048;
                (**(code **)*local_88)(local_88,0);
                FUN_1446efa72(&local_88,0,0,0x10);
                local_80 = 0;
              }
              if (local_88 != (undefined8 *)0x0) {
                FUN_1400020a8();
              }
            }
            else {
              *(undefined4 *)(param_1 + 0x618) = 0x40a00000;
            }
LAB_1415a8048:
            uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
          }
          plVar3 = local_60;
          if (local_60 != (longlong *)0x0) {
            LOCK();
            plVar4 = local_60 + 1;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)*plVar4 == 0) {
              (**(code **)*local_60)(local_60);
              LOCK();
              piVar1 = (int *)((longlong)plVar3 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar3 + 0x10))(plVar3);
              }
            }
          }
          puVar11 = puVar11 + 2;
        } while ((bVar5 | puVar11 == puVar12) != 1);
      }
      plVar3 = local_90;
      if (((((*(char *)(param_1 + 0x21) == '\x01') && (*(longlong *)(param_1 + 0x38) != 0)) &&
           ((lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x30), lVar9 != 0 &&
            ((lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 != 0 &&
             (*(longlong *)(lVar9 + 0x1f0) != 0)))))) && (lVar9 = FUN_140cb14ac(), lVar9 != 0)) &&
         (*(longlong *)(lVar9 + 0x30) != 0)) {
        FUN_146584400(*(longlong *)(lVar9 + 0x30),param_2);
      }
      if ((*(int *)(param_1 + 0x4e8) != 0) &&
         (plVar4 = *(longlong **)(param_1 + 0x4e0), plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_2,uVar8 & 0xffffff01);
      }
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar3 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plVar3)(plVar3);
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415a8118 FUN_1415a8118 body=289 status=ok
// SIG undefined FUN_1415a8118(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a8118(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9e9828) {
    FUN_144b3d300(&DAT_14c9e9828);
    if (DAT_14c9e9828 == -1) {
      FUN_145f8dbee();
      FUN_145f8daa4();
      FUN_140db5666(&DAT_14c9e9780,0,&DAT_14c9e9718,L"FDeferredLightHairVS",
                    L"/Engine/Private/DeferredLightVertexShaders.usf",L"HairVertexMain",0,1,
                    FUN_1471d2c1c,FUN_1471d2bbc,&LAB_1471d2ba4,&LAB_1471d2ba0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9ea7a0);
      _DAT_14c9e9780 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ce8686);
      _Init_thread_footer(&DAT_14c9e9828);
    }
  }
  return &DAT_14c9e9780;
}



// FUNCTION 1415a823a FUN_1415a823a body=258 status=ok
// SIG undefined FUN_1415a823a(void)

void FUN_1415a823a(void)

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
              0x110) < DAT_14ca18010) {
    FUN_144b3d300(&DAT_14ca18010);
    if (DAT_14ca18010 == -1) {
      FUN_145f8dde2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x494;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17f90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e276b7);
      _Init_thread_footer(&DAT_14ca18010);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a833e FUN_1415a833e body=10 status=ok
// SIG undefined FUN_1415a833e(void)

void FUN_1415a833e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001415a8341. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))();
  return;
}



// FUNCTION 1415a8348 FUN_1415a8348 body=164 status=ok
// SIG undefined FUN_1415a8348(void)

void FUN_1415a8348(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebb98,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a83ee FUN_1415a83ee body=59 status=ok
// SIG undefined FUN_1415a83ee(void)

undefined8 * FUN_1415a83ee(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0xf50) == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    *(undefined4 *)(param_2 + 2) = 0xffffffff;
  }
  else {
    FUN_1479733cc(param_2,*(longlong *)(param_1 + 0xf50) + 0x90);
  }
  return param_2;
}



// FUNCTION 1415a842a FUN_1415a842a body=258 status=ok
// SIG undefined FUN_1415a842a(void)

void FUN_1415a842a(void)

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
              0x110) < DAT_14ca46c00) {
    FUN_144b3d300(&DAT_14ca46c00);
    if (DAT_14ca46c00 == -1) {
      FUN_145f8f94e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x131;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46b80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe8f21);
      _Init_thread_footer(&DAT_14ca46c00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a852e FUN_1415a852e body=545 status=ok
// SIG undefined FUN_1415a852e(void)

void FUN_1415a852e(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5,undefined4 param_6,undefined1 param_7)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 unaff_RBP;
  undefined4 uVar3;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  code **local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  code *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_1 != 0) {
    if (DAT_14cba8288 == 0) {
      local_c0 = &local_90;
      local_90 = FUN_141864c34;
      local_b0 = FUN_14081d0ea;
      local_b8 = &LAB_1464cee30;
      local_c8 = &LAB_148bfac22;
      local_d0 = &LAB_140f21842;
      local_d8 = &DAT_149e063b2;
      local_e0 = 0;
      local_e8 = 0x10000004;
      local_f0 = 0x10;
      local_f8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      local_90 = (code *)((ulonglong)local_90 & 0xffffffffffffff00);
      local_68[0] = 0;
      FUN_1456bb102(&local_90,param_1);
      uVar3 = FUN_140a8b8c6(param_2,&local_90);
      local_f0 = CONCAT31(local_f0._1_3_,param_7);
      local_f8 = param_6;
      FUN_1418e8158(&local_a8,param_1,param_4,uVar3);
      FUN_1448173f8(local_68);
      if (((char)local_90 == '\x03') &&
         (plVar2 = (longlong *)CONCAT44(uStack_7c,uStack_80), plVar2 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      local_90 = (code *)CONCAT44(local_90._4_4_,param_4);
      local_88 = local_a8;
      uStack_84 = uStack_a4;
      uStack_80 = uStack_a0;
      uStack_7c = uStack_9c;
      local_78 = local_98;
      local_70 = 0;
      FUN_140e26dfa(param_1 + 0x7c78,param_3,
                    CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_5) & 0xffffffff);
    }
  }
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a8750 FUN_1415a8750 body=162 status=ok
// SIG undefined FUN_1415a8750(void)

void FUN_1415a8750(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == (longlong *)0x0) {
    return;
  }
  if (((*param_2 != 0) && (param_2[1] != 0)) && (0 < *(int *)(param_2[1] + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *param_2 = (longlong)param_2;
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *param_2 = (longlong)param_2;
    if ((longlong *)param_2[1] == plVar2) goto LAB_1415a87c6;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 == (longlong *)0x0) {
      param_2[1] = (longlong)plVar2;
      goto LAB_1415a87c6;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  param_2[1] = (longlong)plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_1415a87c6:
  LOCK();
  plVar3 = plVar2 + 1;
  *(int *)plVar3 = (int)*plVar3 + -1;
  UNLOCK();
  if ((int)*plVar3 == 0) {
    (**(code **)*plVar2)(plVar2);
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415a87e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 1415a87f2 FUN_1415a87f2 body=926 status=ok
// SIG undefined FUN_1415a87f2(void)

undefined8 *
FUN_1415a87f2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined2 *local_68;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *param_1 = &PTR_LAB_14b4ef310;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 4) = 0;
  FUN_140056680(param_1 + 5,L"GBXPARTY ");
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = param_3;
  *(undefined1 *)(param_1 + 10) = param_6;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x24] = *param_5;
  lVar3 = param_5[1];
  param_1[0x25] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0x41a00000;
  param_1[0x72] = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined8 *)((longlong)param_1 + 0x39c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  param_1[0x76] = 0;
  *(undefined4 *)(param_1 + 0x77) = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0xffffffff;
  param_1[0x89] = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0;
  param_1[0x8d] = 0;
  *(undefined4 *)(param_1 + 0x8e) = 0;
  param_1[0x91] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  FUN_1400021e4(param_1 + 9,&local_68);
  puVar6 = local_68;
  if (local_60 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_58,L"GbxParty_%s",puVar6);
  uVar5 = FUN_1413da074(&local_58);
  param_1[8] = uVar5;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1400021e4(param_1 + 9,&local_68);
  puVar6 = local_68;
  if (local_60 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  local_78 = param_4;
  FUN_140002266(&local_58,L"%s_%d_%d ",puVar6,4);
  if (param_1 + 5 == &local_58) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    param_1[5] = local_58;
    local_58 = 0;
    *(undefined4 *)(param_1 + 6) = (undefined4)local_50;
    *(undefined4 *)((longlong)param_1 + 0x34) = local_50._4_4_;
    local_50 = 0;
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1412fabe8(param_1 + 0x7a,&DAT_14cb97680);
  plVar4 = (longlong *)param_5[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1415a8b92 FUN_1415a8b92 body=132 status=ok
// SIG undefined FUN_1415a8b92(void)

void FUN_1415a8b92(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (0 < (int)param_1[4]) {
    lVar4 = 0;
    do {
      lVar2 = *param_1;
      plVar3 = *(longlong **)(lVar2 + lVar4 * 8);
      if (plVar3 != (longlong *)0x0) {
        do {
          plVar3 = (longlong *)*plVar3;
          FUN_1400020a8();
        } while (plVar3 != (longlong *)0x0);
        lVar2 = *param_1;
      }
      *(undefined8 *)(lVar2 + lVar4 * 8) = 0;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)param_1[4]);
  }
  puVar1 = (undefined8 *)param_1[2];
  while (puVar1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar1;
    FUN_1400020a8();
  }
  param_1[2] = 0;
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1415a8c16 FUN_1415a8c16 body=289 status=ok
// SIG undefined FUN_1415a8c16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a8c16(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8cb18) {
    FUN_144b3d300(&DAT_14ca8cb18);
    if (DAT_14ca8cb18 == -1) {
      FUN_1415a8d38();
      FUN_145f96f8c();
      FUN_140db5666(&DAT_14ca8ca70,0,&DAT_14ca8ca08,L"FClearMessageBufferCS",
                    L"/Engine/Private/GPUMessaging.usf",L"ClearMessageBuffer",5,1,FUN_14741ce3c,
                    FUN_14741cddc,&LAB_14741cdd8,&LAB_14741cdd4,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91910);
      _DAT_14ca8ca70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f5fc3);
      _Init_thread_footer(&DAT_14ca8cb18);
    }
  }
  return &DAT_14ca8ca70;
}



// FUNCTION 1415a8d38 FUN_1415a8d38 body=258 status=ok
// SIG undefined FUN_1415a8d38(void)

void FUN_1415a8d38(void)

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
              0x110) < DAT_14ca91990) {
    FUN_144b3d300(&DAT_14ca91990);
    if (DAT_14ca91990 == -1) {
      FUN_145f970e0(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x10;
      local_58 = 0x13;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91910,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f90f7);
      _Init_thread_footer(&DAT_14ca91990);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a8e3c FUN_1415a8e3c body=28 status=ok
// SIG undefined FUN_1415a8e3c(void)

void FUN_1415a8e3c(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_2 = *param_3;
  uVar1 = *(undefined8 *)(param_1 + 0x168);
  param_2[1] = *(undefined8 *)(param_1 + 0x160);
  param_2[2] = uVar1;
  param_2[3] = 0;
  param_2[4] = 0;
  return;
}



// FUNCTION 1415a8e58 FUN_1415a8e58 body=22 status=ok
// SIG undefined FUN_1415a8e58(void)

undefined8 * FUN_1415a8e58(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1415a8e6e FUN_1415a8e6e body=1392 status=ok
// SIG undefined FUN_1415a8e6e(void)

void FUN_1415a8e6e(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [40];
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_98 = DAT_14cbcf3c4;
  local_90 = DAT_14cbcf3cc;
  FUN_1448075d0(&local_88);
  uVar6 = FUN_144a06846(param_2,&local_88);
  uVar4 = FUN_1410c4486(uVar6,*(undefined1 *)(param_1 + 0x430));
  *(undefined1 *)(param_1 + 0x430) = uVar4;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  local_a8 = DAT_14cbcf3d0;
  local_a0 = DAT_14cbcf3d8;
  FUN_1448075d0(&local_88);
  uVar6 = FUN_144a06846(param_2,&local_88);
  uVar4 = FUN_1410c4486(uVar6,*(undefined1 *)(param_1 + 0x431));
  *(undefined1 *)(param_1 + 0x431) = uVar4;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  plVar7 = (longlong *)FUN_1415a93e0(*param_2);
  local_b8 = DAT_14cbcf3dc;
  local_b0 = DAT_14cbcf3e4;
  FUN_1448075d0(&local_88);
  local_d0 = param_2;
  if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
    plVar8 = plVar7 + 8;
    if ((longlong *)plVar7[9] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar7[9];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_88) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = *plVar7 + (longlong)iVar9 * 0x40;
        if (*(uint *)(*plVar7 + (longlong)iVar9 * 0x40) == (uint)local_88) {
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (((lVar1 == 0) || (pbVar3 = *(byte **)(lVar1 + 0x28), pbVar3 == (byte *)0x0)) ||
             ((*pbVar3 & 3) != 2)) goto LAB_1415a913e;
          plVar7 = (longlong *)(param_1 + 0x438);
          FUN_140ee6e62(plVar7,*(undefined4 *)(*(longlong *)(pbVar3 + 8) + 0x10));
          lVar11 = 0;
          lVar10 = 0;
          goto LAB_1415a9037;
        }
        iVar9 = *(int *)(lVar1 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_1415a913e:
  plVar7 = (longlong *)FUN_1415a93e0(*local_d0);
  local_c8 = DAT_14cbcf3e8;
  local_c0 = DAT_14cbcf3f0;
  FUN_1448075d0(&local_88);
  if ((int)plVar7[2] != *(int *)((longlong)plVar7 + 0x3c)) {
    plVar8 = plVar7 + 8;
    if ((longlong *)plVar7[9] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar7[9];
    }
    iVar9 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar7[10] - 1U & (uint)local_88) * 4);
    if (iVar9 != -1) {
      do {
        lVar1 = *plVar7 + (longlong)iVar9 * 0x40;
        if (*(uint *)(*plVar7 + (longlong)iVar9 * 0x40) == (uint)local_88) {
          if (local_70 != 0) {
            FUN_1400020a8();
          }
          if (((lVar1 == 0) || (pbVar3 = *(byte **)(lVar1 + 0x28), pbVar3 == (byte *)0x0)) ||
             ((*pbVar3 & 3) != 2)) goto LAB_1415a93a2;
          plVar7 = (longlong *)(param_1 + 0x448);
          FUN_145f9776a(plVar7,*(undefined4 *)(*(longlong *)(pbVar3 + 8) + 0x10));
          lVar11 = 0;
          lVar10 = 0;
          goto LAB_1415a921c;
        }
        iVar9 = *(int *)(lVar1 + 0x38);
      } while (iVar9 != -1);
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
LAB_1415a93a2:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_1415a9037:
  pbVar3 = *(byte **)(lVar1 + 0x28);
  if (pbVar3 == (byte *)0x0) {
    if (DAT_14c9a1280 <= lVar10) goto LAB_1415a913e;
    if ((**(byte **)(DAT_14c9a1270 + lVar11) & 3) == 1) {
      plVar8 = &DAT_14c9a1270;
      goto LAB_1415a9088;
    }
  }
  else {
    if ((*pbVar3 & 2) == 0) {
      if (DAT_14c9a1280 <= lVar10) goto LAB_1415a913e;
      plVar8 = &DAT_14c9a1270;
    }
    else {
      if (*(int *)(*(longlong *)(pbVar3 + 8) + 0x10) <= lVar10) goto LAB_1415a913e;
      plVar8 = *(longlong **)(pbVar3 + 8);
    }
    if ((**(byte **)(*plVar8 + lVar11) & 3) == 1) {
      plVar8 = &DAT_14c9a1270;
      if ((pbVar3 != (byte *)0x0) && (plVar8 = &DAT_14c9a1270, (*pbVar3 & 2) != 0)) {
        plVar8 = *(longlong **)(pbVar3 + 8);
      }
LAB_1415a9088:
      if ((**(byte **)(*plVar8 + lVar11) & 3) == 1) {
        uVar6 = *(undefined8 *)(*(byte **)(*plVar8 + lVar11) + 8);
      }
      else {
        uVar6 = 0;
      }
      FUN_1446ddc76(&local_88,uVar6,1);
      iVar9 = *(int *)(param_1 + 0x440);
      uVar5 = iVar9 + 1;
      *(uint *)(param_1 + 0x440) = uVar5;
      if (*(uint *)(param_1 + 0x444) < uVar5) {
        FUN_1446f84a2(plVar7);
      }
      *(undefined8 *)(*plVar7 + (longlong)iVar9 * 8) = local_88;
    }
  }
  lVar10 = lVar10 + 1;
  lVar11 = lVar11 + 0x10;
  goto LAB_1415a9037;
LAB_1415a921c:
  pbVar3 = *(byte **)(lVar1 + 0x28);
  if (pbVar3 == (byte *)0x0) {
    if (DAT_14c9a1280 <= lVar10) goto LAB_1415a93a2;
    if ((**(byte **)(DAT_14c9a1270 + lVar11) & 3) == 1) {
      plVar8 = &DAT_14c9a1270;
      goto LAB_1415a9270;
    }
  }
  else {
    if ((*pbVar3 & 2) == 0) {
      if (DAT_14c9a1280 <= lVar10) goto LAB_1415a93a2;
      plVar8 = &DAT_14c9a1270;
    }
    else {
      if (*(int *)(*(longlong *)(pbVar3 + 8) + 0x10) <= lVar10) goto LAB_1415a93a2;
      plVar8 = *(longlong **)(pbVar3 + 8);
    }
    if ((**(byte **)(*plVar8 + lVar11) & 3) == 1) {
      plVar8 = &DAT_14c9a1270;
      if ((pbVar3 != (byte *)0x0) && (plVar8 = &DAT_14c9a1270, (*pbVar3 & 2) != 0)) {
        plVar8 = *(longlong **)(pbVar3 + 8);
      }
LAB_1415a9270:
      if ((**(byte **)(*plVar8 + lVar11) & 3) == 1) {
        uVar6 = *(undefined8 *)(*(byte **)(*plVar8 + lVar11) + 8);
      }
      else {
        uVar6 = 0;
      }
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_70 = 0;
      uStack_68 = 0;
      FUN_1446ddda2(&local_88,uVar6,0);
      iVar9 = *(int *)(param_1 + 0x450);
      *(uint *)(param_1 + 0x450) = iVar9 + 1U;
      if (*(uint *)(param_1 + 0x454) < iVar9 + 1U) {
        FUN_14014a81a(plVar7,iVar9);
      }
      puVar2 = (undefined8 *)(*plVar7 + (longlong)iVar9 * 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      FUN_1404e49fa();
      if (local_70 != 0) {
        FUN_1400020a8();
      }
    }
  }
  lVar10 = lVar10 + 1;
  lVar11 = lVar11 + 0x10;
  goto LAB_1415a921c;
}



// FUNCTION 1415a93e0 FUN_1415a93e0 body=22 status=ok
// SIG undefined FUN_1415a93e0(void)

undefined8 * FUN_1415a93e0(byte *param_1)

{
  if ((*param_1 & 2) != 0) {
    return (undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
  }
  return &DAT_14c9a1288;
}



// FUNCTION 1415a93f6 FUN_1415a93f6 body=10 status=ok
// SIG undefined FUN_1415a93f6(void)

void FUN_1415a93f6(undefined8 param_1)

{
  FUN_1447458da(param_1,0xffffffff);
  return;
}



// FUNCTION 1415a9400 FUN_1415a9400 body=258 status=ok
// SIG undefined FUN_1415a9400(void)

void FUN_1415a9400(void)

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
              0x110) < DAT_14ca71bb0) {
    FUN_144b3d300(&DAT_14ca71bb0);
    if (DAT_14ca71bb0 == -1) {
      FUN_1415a9504(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xa0;
      local_58 = 0x4a3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca71b30,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143130d93);
      _Init_thread_footer(&DAT_14ca71bb0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a9504 FUN_1415a9504 body=226 status=ok
// SIG undefined FUN_1415a9504(void)

longlong * FUN_1415a9504(longlong *param_1)

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
  pcVar13 = FUN_146318778;
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



// FUNCTION 1415a95e8 FUN_1415a95e8 body=289 status=ok
// SIG undefined FUN_1415a95e8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a95e8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8bfc8) {
    FUN_144b3d300(&DAT_14ca8bfc8);
    if (DAT_14ca8bfc8 == -1) {
      FUN_144a91c3e();
      FUN_145f98a74();
      FUN_140db5666(&DAT_14ca8bf20,0,&DAT_14ca8beb8,L"FGenerateMipsIndirectCS",
                    L"/Engine/Private/ComputeGenerateMips.usf",L"MainCS",5,4,FUN_14741c114,
                    FUN_14741c0b4,&LAB_14741c0b0,&LAB_14741c0ac,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca917d0);
      _DAT_14ca8bf20 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2e3f);
      _Init_thread_footer(&DAT_14ca8bfc8);
    }
  }
  return &DAT_14ca8bf20;
}



// FUNCTION 1415a970a FUN_1415a970a body=325 status=ok
// SIG undefined FUN_1415a970a(void)

void FUN_1415a970a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415a9850 FUN_1415a9850 body=287 status=ok
// SIG undefined FUN_1415a9850(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a9850(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca856f8) {
    FUN_144b3d300(&DAT_14ca856f8);
    if (DAT_14ca856f8 == -1) {
      uVar1 = FUN_1415a9970();
      FUN_145f990f4();
      FUN_140db5666(&DAT_14ca85650,0,&DAT_14ca855e8,L"FBinkDrawVS",L"/Engine/Private/Bink.usf",
                    L"BinkDrawVS",0,1,FUN_147415064,FUN_14741500a,&LAB_147415006,&LAB_147415002,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca85650 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b4e);
      _Init_thread_footer(&DAT_14ca856f8);
    }
  }
  return &DAT_14ca85650;
}



// FUNCTION 1415a9970 FUN_1415a9970 body=265 status=ok
// SIG undefined FUN_1415a9970(void)

undefined * FUN_1415a9970(void)

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
              0x110) < DAT_14ca90f20) {
    FUN_144b3d300(&DAT_14ca90f20);
    if (DAT_14ca90f20 == -1) {
      FUN_145f99248(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x3f;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca90ea0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8752);
      _Init_thread_footer(&DAT_14ca90f20);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca90ea0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a9a7a FUN_1415a9a7a body=287 status=ok
// SIG undefined FUN_1415a9a7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a9a7a(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85820) {
    FUN_144b3d300(&DAT_14ca85820);
    if (DAT_14ca85820 == -1) {
      uVar1 = FUN_1415a9b9a();
      FUN_145f99336();
      FUN_140db5666(&DAT_14ca85778,0,&DAT_14ca85710,L"FBinkDrawYCbCrPS",L"/Engine/Private/Bink.usf",
                    L"BinkDrawYCbCr",3,4,FUN_147415180,FUN_147415126,&LAB_147415122,&LAB_14741511e,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca85778 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b5a);
      _Init_thread_footer(&DAT_14ca85820);
    }
  }
  return &DAT_14ca85778;
}



// FUNCTION 1415a9b9a FUN_1415a9b9a body=265 status=ok
// SIG undefined FUN_1415a9b9a(void)

undefined * FUN_1415a9b9a(void)

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
              0x110) < DAT_14ca91030) {
    FUN_144b3d300(&DAT_14ca91030);
    if (DAT_14ca91030 == -1) {
      FUN_145f9948a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1f0;
      local_58 = 0x57;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca90fb0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f876a);
      _Init_thread_footer(&DAT_14ca91030);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca90fb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a9ca4 FUN_1415a9ca4 body=289 status=ok
// SIG undefined FUN_1415a9ca4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415a9ca4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9fc1f8) {
    FUN_144b3d300(&DAT_14c9fc1f8);
    if (DAT_14c9fc1f8 == -1) {
      FUN_1415a9dc6();
      FUN_145f999e4();
      FUN_140db5666(&DAT_14c9fc150,0,&DAT_14c9fc0e8,L"FScreenProbeFilterGatherTracesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeFiltering.usf",
                    L"ScreenProbeFilterGatherTracesCS",5,1,FUN_14720867e,FUN_14720861e,
                    &LAB_1462e1798,&LAB_14720861a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14c9ff108)
      ;
      _DAT_14c9fc150 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142d878e3);
      _Init_thread_footer(&DAT_14c9fc1f8);
    }
  }
  return &DAT_14c9fc150;
}



// FUNCTION 1415a9dc6 FUN_1415a9dc6 body=258 status=ok
// SIG undefined FUN_1415a9dc6(void)

void FUN_1415a9dc6(void)

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
              0x110) < DAT_14c9ff188) {
    FUN_144b3d300(&DAT_14c9ff188);
    if (DAT_14c9ff188 == -1) {
      FUN_145f99b2e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0xc0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9ff108,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142d9c64d);
      _Init_thread_footer(&DAT_14c9ff188);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415a9eca FUN_1415a9eca body=226 status=ok
// SIG undefined FUN_1415a9eca(void)

longlong * FUN_1415a9eca(longlong *param_1)

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
  pcVar13 = FUN_146307284;
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



// FUNCTION 1415a9fae FUN_1415a9fae body=130 status=ok
// SIG undefined FUN_1415a9fae(void)

uint FUN_1415a9fae(longlong param_1,int param_2)

{
  DWORD DVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x58);
  if ((DAT_14c86a9f8 == '\x01') &&
     (uVar2 = *(uint *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     uVar2 != 2)) {
    if (uVar2 != 1) {
      return uVar2;
    }
    DVar1 = FUN_140ad26c0();
    uVar2 = GetCurrentThreadId();
    if (DVar1 != uVar2) {
      return uVar2;
    }
  }
  if (*(int *)(param_1 + 0x5c) != param_2) {
    uVar2 = FUN_140055b91(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28));
    *(undefined4 *)(param_1 + 0x28) = 0;
    if (*(int *)(param_1 + 0x2c) != 0) {
      uVar2 = FUN_145f9a05a(param_1 + 0x20,0);
    }
    *(int *)(param_1 + 0x5c) = param_2;
  }
  return uVar2;
}



// FUNCTION 1415aa030 FUN_1415aa030 body=277 status=ok
// SIG undefined FUN_1415aa030(void)

void FUN_1415aa030(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Texture";
  local_48 = 7;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Texture";
  local_48 = 7;
  FUN_140208c1e(&DAT_14caebe38,local_58,local_54,&local_50);
  local_50 = L"Functions";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Functions";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caebe48,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415aa146 FUN_1415aa146 body=93 status=ok
// SIG undefined FUN_1415aa146(void)

void FUN_1415aa146(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((puVar3 != (undefined8 *)0x0) && (*(uint *)(puVar3 + 2) == param_1[1])) &&
       ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar3 + 1) & 0x10200000) == 0) {
        uVar2 = *puVar3;
      }
      else {
        uVar2 = 0;
      }
      FUN_14434a2e8(uVar2,0xc61c4000);
      return;
    }
  }
  return;
}



// FUNCTION 1415aa1a4 FUN_1415aa1a4 body=287 status=ok
// SIG undefined FUN_1415aa1a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415aa1a4(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca85948) {
    FUN_144b3d300(&DAT_14ca85948);
    if (DAT_14ca85948 == -1) {
      uVar1 = FUN_145f9aba8();
      FUN_145f9aa54();
      FUN_140db5666(&DAT_14ca858a0,0,&DAT_14ca85838,L"FBinkDrawICtCpPS",L"/Engine/Private/Bink.usf",
                    L"BinkDrawICtCp",3,8,FUN_14741529c,FUN_147415242,&LAB_14741523e,&LAB_14741523a,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca858a0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f0b66);
      _Init_thread_footer(&DAT_14ca85948);
    }
  }
  return &DAT_14ca858a0;
}



// FUNCTION 1415aa2c4 FUN_1415aa2c4 body=226 status=ok
// SIG undefined FUN_1415aa2c4(void)

longlong * FUN_1415aa2c4(longlong *param_1)

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
  pcVar13 = FUN_1462f2014;
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



// FUNCTION 1415aa3a8 FUN_1415aa3a8 body=258 status=ok
// SIG undefined FUN_1415aa3a8(void)

void FUN_1415aa3a8(void)

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
              0x110) < DAT_14ca1bf00) {
    FUN_144b3d300(&DAT_14ca1bf00);
    if (DAT_14ca1bf00 == -1) {
      FUN_145f9af48(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FNaniteShadingPassParameters";
      local_38 = 0;
      local_50 = 0x90;
      local_58 = 0x1a4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca1be80,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e5e891);
      _Init_thread_footer(&DAT_14ca1bf00);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415aa4ac FUN_1415aa4ac body=218 status=ok
// SIG undefined FUN_1415aa4ac(void)

void FUN_1415aa4ac(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4e7980;
  param_1[4] = &PTR_FUN_14b4e79a8;
  FUN_143f2b7ce();
  if (param_1[7] != 0) {
    if (param_1[0xe] != 0) {
      FUN_14480f766(param_1[7] + 0x70);
      param_1[0xe] = 0;
    }
    if (param_1[0xf] != 0) {
      FUN_14480f766(param_1[7] + 0xb8);
      param_1[0xf] = 0;
    }
  }
  if (param_1[0x11] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x11] = 0;
  }
  plVar1 = param_1 + 8;
  if (*(int *)(param_1 + 9) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1415aa571;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 9) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1415aa571:
  FUN_1457f3dec(param_1);
  return;
}



// FUNCTION 1415aa586 FUN_1415aa586 body=53 status=ok
// SIG undefined FUN_1415aa586(void)

undefined8 FUN_1415aa586(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  if ((*(longlong *)(param_1 + 8) == 0) || (*(char *)(param_1 + 0x11) == '\0')) {
    uVar1 = 0;
  }
  else {
    FUN_144a8b5fe(param_1 + 0x18,*param_2);
    FUN_14130e120(param_1);
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 1415aa5bc FUN_1415aa5bc body=988 status=ok
// SIG undefined FUN_1415aa5bc(void)

void FUN_1415aa5bc(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  int iVar9;
  undefined1 *puVar10;
  wchar_t *pwVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60 [16];
  undefined8 *local_50;
  int local_48;
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  do {
    cVar2 = *(char *)(param_1 + 0x418);
    *(char *)(param_1 + 0x418) = cVar2 + '\x01';
    if (cVar2 != '\0') {
      if (cVar2 == '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
      }
      if (cVar2 == '\x03') {
        DAT_14c83bd06 = DAT_14c872bd8;
        DAT_14c872bd8 = 1;
        goto LAB_1415aa8c2;
      }
      if (cVar2 != '\x01') goto LAB_1415aa8c2;
      FUN_1457cd276(param_1,1,0);
      *(undefined1 *)(param_1 + 0x419) = 1;
      uVar7 = FUN_1401cb356();
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar5 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_149e02020;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar12 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar12 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar12;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14b4035d0;
      local_50[3] = 0;
      iVar6 = 0;
      if (param_1 != 0) {
        uVar3 = *(uint *)(param_1 + 0xc);
        *(uint *)(local_50 + 3) = uVar3;
        if ((int)uVar3 < DAT_14c9647dc) {
          lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
        }
        else {
          lVar12 = 0;
        }
        iVar6 = *(int *)(lVar12 + 0x10);
        if (*(int *)(lVar12 + 0x10) == 0) {
          LOCK();
          iVar6 = DAT_14c964868 + 1;
          UNLOCK();
          iVar9 = DAT_14c964868 + 1;
          bVar13 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar6;
          if (bVar13) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar9);
          }
          LOCK();
          iVar6 = *(int *)(lVar12 + 0x10);
          bVar13 = iVar6 == 0;
          if (bVar13) {
            *(int *)(lVar12 + 0x10) = iVar9;
            iVar6 = 0;
          }
          UNLOCK();
          if (bVar13) {
            iVar6 = iVar9;
          }
        }
      }
      *(int *)((longlong)puVar5 + 0x1c) = iVar6;
      puVar5[4] = FUN_14030be2a;
      *(undefined4 *)(puVar5 + 5) = 0;
      local_68 = 0x3dcccccd;
      pwVar11 = L"UGbxGameInstance.DelayedGameExit.SavingProfiles";
      puVar10 = local_60;
      goto LAB_1415aa6f3;
    }
  } while (((*(longlong *)(param_1 + 0x30) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x360) == 0)) ||
          (iVar6 = FUN_14490d72a(), iVar6 != 3));
  uVar7 = FUN_1401cb356();
  local_50 = (undefined8 *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  puVar5 = local_50;
  local_48 = 3;
  *local_50 = &PTR_LAB_149e02020;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar12 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar12 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar12;
  local_50[2] = lVar8;
  *local_50 = &PTR_FUN_14b4035d0;
  local_50[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar3 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar6 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar9 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar9);
      }
      LOCK();
      iVar6 = *(int *)(lVar12 + 0x10);
      bVar13 = iVar6 == 0;
      if (bVar13) {
        *(int *)(lVar12 + 0x10) = iVar9;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar6 = iVar9;
      }
    }
  }
  *(int *)((longlong)puVar5 + 0x1c) = iVar6;
  puVar5[4] = FUN_14030be2a;
  *(undefined4 *)(puVar5 + 5) = 0;
  local_68 = 0x40000000;
  pwVar11 = L"UGbxGameInstance.DelayedGameExit.WaitingForReplication";
  puVar10 = local_40;
LAB_1415aa6f3:
  FUN_1405f67fc(uVar7,puVar10,&local_50,pwVar11);
  plVar4 = *(longlong **)(puVar10 + 8);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))();
    }
  }
  if (local_48 != 0) {
    if (local_50 == (undefined8 *)0x0) goto LAB_1415aa8c2;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_1415aa8c2:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415aa9b0 FUN_1415aa9b0 body=258 status=ok
// SIG undefined FUN_1415aa9b0(void)

void FUN_1415aa9b0(void)

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
              0x110) < DAT_14ca68528) {
    FUN_144b3d300(&DAT_14ca68528);
    if (DAT_14ca68528 == -1) {
      FUN_145f9c02e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FVirtualShadowDepthPassParameters";
      local_38 = 0;
      local_50 = 0x1a0;
      local_58 = 0xa84;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca684a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e6bd7);
      _Init_thread_footer(&DAT_14ca68528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415aaab4 FUN_1415aaab4 body=1573 status=ok
// SIG undefined FUN_1415aaab4(void)

void FUN_1415aaab4(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  double dVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  byte bVar12;
  undefined *puVar13;
  uint *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  float fVar20;
  double dVar21;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (longlong *)0x0) goto LAB_1415aac85;
  bVar7 = *(byte *)((longlong)param_1 + 0x111) & 0xfe;
  *(byte *)((longlong)param_1 + 0x111) = bVar7;
  if ((param_1[0x1c] != 0) &&
     (bVar12 = *(byte *)(param_1[0x1c] + 0x180) & 1,
     *(byte *)((longlong)param_1 + 0x111) = bVar7 | bVar12, bVar12 == 0)) {
    pcVar5 = *(code **)(*param_2 + 0x5e8);
    if (pcVar5 == FUN_140972dde) {
      if (param_2[0x76] != 0) goto LAB_1415aabdf;
      pcVar5 = *(code **)(*param_2 + 0x5f8);
      if (pcVar5 == FUN_144784df4) {
        if (*(code **)(param_2[0x784] + 0x18) == (code *)&LAB_144904684) {
          if ((((*(int *)((longlong)param_2 + 0x75b4) != 0) &&
               (uVar18 = *(uint *)(param_2 + 0xeb6), -1 < (int)uVar18)) &&
              ((int)uVar18 < DAT_14c9647dc)) &&
             (((plVar15 = (longlong *)
                          ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
               plVar15 != (longlong *)0x0 &&
               ((int)plVar15[2] == *(int *)((longlong)param_2 + 0x75b4))) &&
              ((*(uint *)(plVar15 + 1) & 0x10200000) == 0)))) {
            if ((*(uint *)(plVar15 + 1) & 0x10200000) == 0) {
              lVar11 = *plVar15;
            }
            else {
              lVar11 = 0;
            }
            lVar11 = lVar11 + 0x110;
            goto LAB_1415aad5d;
          }
        }
        else {
          lVar11 = (**(code **)(param_2[0x784] + 0x18))();
LAB_1415aad5d:
          if (lVar11 != 0) {
            lVar11 = *(longlong *)(lVar11 + 0x20);
            goto LAB_1415aad6a;
          }
        }
      }
      else {
        lVar11 = (*pcVar5)();
LAB_1415aad6a:
        if (lVar11 != 0) {
          lVar11 = *(longlong *)(lVar11 + 0x3b0);
          goto LAB_1415aad7a;
        }
      }
    }
    else {
      lVar11 = (*pcVar5)();
LAB_1415aad7a:
      if (lVar11 != 0) goto LAB_1415aabdf;
    }
    *(byte *)((longlong)param_1 + 0x111) =
         *(byte *)((longlong)param_1 + 0x111) & 0xfe | *(byte *)(param_1[0x1c] + 0x180) >> 1 & 1;
  }
LAB_1415aabdf:
  plVar15 = (longlong *)param_1[6];
  if ((*(byte *)(param_1 + 0x25) & 4) != 0) {
    puVar14 = (uint *)(param_1 + 0x27);
    if (((*(int *)((longlong)param_1 + 0x13c) != 0) && (uVar18 = *puVar14, -1 < (int)uVar18)) &&
       (((int)uVar18 < DAT_14c9647dc &&
        ((((plVar16 = (longlong *)
                      ((ulonglong)((uVar18 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8)),
           plVar16 != (longlong *)0x0 && ((int)plVar16[2] == *(int *)((longlong)param_1 + 0x13c)))
          && ((*(uint *)(plVar16 + 1) & 0x10200000) == 0)) && (*plVar16 != 0)))))) {
      FUN_140457ffc((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + *plVar16 + 0x25d0,param_1);
      param_1[0x27] = 0;
    }
    lVar11 = param_2[0x78];
    if (lVar11 == 0) {
LAB_1415aac55:
      *puVar14 = 0;
      iVar8 = 0;
    }
    else {
      lVar9 = FUN_144a5dd5e();
      if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x38) < *(int *)(lVar9 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar9 + 0x38) * 8) != lVar9 + 0x30)) goto LAB_1415aac55;
      uVar18 = *(uint *)(lVar11 + 0xc);
      *puVar14 = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar8 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar8 = DAT_14c964868 + 1;
        UNLOCK();
        iVar17 = DAT_14c964868 + 1;
        bVar19 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar8;
        if (bVar19) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar17);
        }
        LOCK();
        iVar8 = *(int *)(lVar11 + 0x10);
        bVar19 = iVar8 == 0;
        if (bVar19) {
          *(int *)(lVar11 + 0x10) = iVar17;
          iVar8 = 0;
        }
        UNLOCK();
        if (bVar19) {
          iVar8 = iVar17;
        }
      }
    }
    *(int *)((longlong)param_1 + 0x13c) = iVar8;
    if ((*(longlong *)(param_1[6] + 0xd60) != DAT_14cb95120) &&
       (lVar11 = FUN_14479d2ce(), lVar11 != 0)) {
      FUN_1411775e8((ulonglong)*(byte *)(param_1 + 0x22) * 0x40 + lVar11 + 0x25d0,&local_50,param_1,
                    FUN_140c71290);
    }
  }
  if ((char)plVar15[0x2f] != '\x03') goto LAB_1415aac85;
  if (((((int)param_1[0x27] == 0) && (*(int *)((longlong)param_1 + 0x13c) == 0)) &&
      ((int)param_1[0x21] == 0)) &&
     (iVar8 = *(int *)((longlong)param_1 + 0x104) - (int)param_1[0x20], iVar8 != 0)) {
    *(int *)(param_1 + 0x21) = iVar8;
    uVar6 = param_1[7];
    if (uVar6 < 0xffffffff00000000) {
      plVar16 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar16 = (longlong *)0x0;
      }
      (**(code **)(*plVar16 + 0x58))(plVar16,param_1,uVar6,3);
    }
    else {
      uVar18 = (uint)uVar6;
      if ((-1 < (int)uVar18) && ((int)uVar18 < DAT_14c998088)) {
        puVar13 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar13 = DAT_14c998080;
        }
        if ((*(uint *)(puVar13 + ((uint)(uVar6 >> 3) & 0xffffffc)) >> (uVar18 & 0x1f) & 1) != 0) {
          lVar11 = DAT_14c998060 + (ulonglong)(uVar18 & 0x7fffffff) * 0x68;
          puVar14 = *(uint **)(lVar11 + 0x18);
          if (*(uint **)(lVar11 + 0x18) == (uint *)0x0) {
            puVar14 = (uint *)(lVar11 + 8);
          }
          *puVar14 = *puVar14 | 8;
          *(byte *)(lVar11 + 0x60) = *(byte *)(lVar11 + 0x60) | 1;
        }
      }
    }
  }
  dVar21 = (double)param_1[0x11];
  if (dVar21 <= 0.0) {
    if (*(int *)((longlong)plVar15 + 0xb4c) != -1) {
      uVar10 = (**(code **)(*param_1 + 0x180))(param_1);
      FUN_1456be14a(&local_50,uVar10);
      if (local_48 != (longlong *)0x0) {
        iVar8 = (int)local_48[1];
        do {
          if (iVar8 == 0) {
            plVar16 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar17 = (int)local_48[1];
          bVar19 = iVar8 == iVar17;
          if (bVar19) {
            *(int *)(local_48 + 1) = iVar8 + 1;
            iVar17 = iVar8;
          }
          iVar8 = iVar17;
          UNLOCK();
          plVar16 = local_48;
        } while (!bVar19);
        LOCK();
        piVar1 = (int *)((longlong)local_48 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_48 + 0x10))();
        }
        if (plVar16 != (longlong *)0x0) {
          if (local_50 != 0) {
            FUN_145f9dce0(local_50,&local_50,*(undefined4 *)((longlong)plVar15 + 0xb4c),
                          (char)param_1[0x12]);
            if (local_50 != 0) {
              param_1[0x11] = *(longlong *)(local_50 + 8);
              uVar4 = *(undefined4 *)(local_50 + 0x10);
              *(undefined4 *)((longlong)param_1 + 0x11c) = uVar4;
              *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(local_50 + 0x14);
              *(undefined4 *)(param_1 + 0x20) = uVar4;
              if (0.0 < *(float *)(local_50 + 0x18)) {
                FUN_148a195b6(param_1);
              }
            }
            if (local_48 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_48 + 1;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)*plVar2 == 0) {
                (**(code **)*local_48)(local_48);
                LOCK();
                piVar1 = (int *)((longlong)local_48 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*local_48 + 0x10))(local_48);
                }
              }
            }
          }
          LOCK();
          plVar2 = plVar16 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar16)(plVar16);
            LOCK();
            piVar1 = (int *)((longlong)plVar16 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar16 + 0x10))(plVar16);
            }
          }
        }
      }
    }
    dVar21 = (double)param_1[0x11];
  }
  if (0.0 < dVar21) {
    if (*(int *)((longlong)param_1 + 0x94) == 2) goto LAB_1415aac85;
    lVar11 = (**(code **)(*param_1 + 0x180))(param_1);
    dVar21 = *(double *)(lVar11 + 0x6d0);
    dVar3 = (double)param_1[0x11];
    fVar20 = (float)(**(code **)(*plVar15 + 0x818))(plVar15);
    if (dVar21 - dVar3 < (double)fVar20) goto LAB_1415aac85;
  }
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
LAB_1415aac85:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ab0da FUN_1415ab0da body=883 status=ok
// SIG undefined FUN_1415ab0da(void)

int * FUN_1415ab0da(longlong *param_1,int *param_2,undefined8 *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  longlong *plVar13;
  ulonglong uVar14;
  byte bVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  longlong *plVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar21 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar21 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar21) {
      FUN_1447711aa(param_1,iVar21);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar13 = param_1 + 2;
    iVar16 = iVar12 + 1;
    iVar20 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar20 = iVar12;
    }
    if (iVar20 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar16;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar16 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar17 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar22 = 4;
            if (4 < uVar17) {
              uVar22 = uVar17;
            }
          }
          else {
            uVar22 = (uVar17 * 3 >> 3) + uVar17 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar22 << 2,0);
          iVar11 = (int)(uVar14 >> 2);
          iVar16 = -0x20;
          if ((int)uVar17 <= iVar11) {
            iVar16 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar16;
        FUN_1446efbd8(plVar13,iVar11);
        iVar16 = (int)param_1[5] + 1;
      }
      iVar11 = iVar16 + 0x1f;
      if (-1 < iVar16) {
        iVar11 = iVar16;
      }
      *(int *)(param_1 + 5) = iVar16;
      if (iVar16 % 0x20 != 0) {
        plVar19 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar19 = plVar13;
        }
        bVar15 = -(char)(iVar16 % 0x20);
        *(uint *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar19 + (longlong)(iVar11 >> 5) * 4) << (bVar15 & 0x1f)) >>
             (bVar15 & 0x1f);
      }
    }
    lVar18 = (longlong)iVar21;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[4];
    }
    bVar15 = (byte)iVar12 & 0x1f;
    puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar20 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar15 | 0xfffffffeU >> 0x20 - bVar15);
  }
  else {
    iVar21 = (int)param_1[6];
    lVar18 = (longlong)iVar21;
    iVar12 = *(int *)(*param_1 + 4 + lVar18 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  plVar13 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar13 = (longlong *)param_1[4];
  }
  iVar12 = iVar21 + 0x1f;
  if (-1 < iVar21) {
    iVar12 = iVar21;
  }
  puVar2 = (uint *)((longlong)plVar13 + (longlong)(iVar12 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar21 & 0x1f);
  iVar12 = 1;
  lVar5 = *param_1;
  lVar18 = lVar18 * 0x20;
  puVar3 = (undefined4 *)(lVar5 + lVar18);
  puVar6 = (undefined8 *)param_3[1];
  *(undefined8 *)(lVar5 + lVar18) = *(undefined8 *)*param_3;
  *(undefined8 *)(lVar5 + 8 + lVar18) = *puVar6;
  *(undefined8 *)(lVar5 + 0x10 + lVar18) = puVar6[1];
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(lVar5 + 0x18 + lVar18) = 0xffffffff;
  lVar18 = *(longlong *)(lVar5 + lVar18);
  uVar17 = (uint)((ulonglong)lVar18 >> 0x10);
  uVar22 = (uint)lVar18 & 0xffff;
  uVar17 = ((uint)lVar18 << 0x10 | uVar22) + (int)((ulonglong)lVar18 >> 0x20) +
           (uVar17 << 0x13 | uVar17 & 0xffff) + (uVar22 >> 4);
  uVar22 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar22 != 0) && (uVar22 != 1)) {
    plVar13 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar13 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar13 + (ulonglong)((int)param_1[9] - 1U & uVar17) * 4);
    if (iVar11 != -1) {
      do {
        puVar4 = (undefined4 *)(*param_1 + (longlong)iVar11 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar11 * 0x20) == lVar18) {
          plVar13 = *(longlong **)(puVar4 + 4);
          if (plVar13 != (longlong *)0x0) {
            LOCK();
            plVar19 = plVar13 + 1;
            *(int *)plVar19 = (int)*plVar19 + -1;
            UNLOCK();
            if ((int)*plVar19 == 0) {
              (**(code **)*plVar13)(plVar13);
              LOCK();
              piVar1 = (int *)((longlong)plVar13 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar13 + 0x10))(plVar13);
              }
            }
          }
          uVar7 = *puVar3;
          uVar8 = puVar3[1];
          uVar9 = puVar3[2];
          uVar10 = puVar3[3];
          *(undefined8 *)(puVar4 + 4) = *(undefined8 *)(puVar3 + 4);
          *puVar4 = uVar7;
          puVar4[1] = uVar8;
          puVar4[2] = uVar9;
          puVar4[3] = uVar10;
          FUN_14860b354(param_1,iVar21);
          iVar21 = iVar11;
          goto LAB_1415ab2d1;
        }
        iVar11 = puVar4[6];
      } while (iVar11 != -1);
    }
  }
  if (3 < uVar22) {
    uVar14 = (ulonglong)(uVar22 & 0xfffffffe) + 0xf;
    lVar18 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar18 == 0; lVar18 = lVar18 + -1) {
      }
    }
    iVar12 = 1 << ((byte)lVar18 & 0x1f);
  }
  if (((int)uVar22 < 1) || (iVar12 <= (int)param_1[9])) {
    uVar17 = (int)param_1[9] - 1U & uVar17;
    puVar3[7] = uVar17;
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    puVar3[6] = *(undefined4 *)
                 ((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar17) * 4) =
         iVar21;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    FUN_1415ab44e(param_1);
  }
LAB_1415ab2d1:
  *param_2 = iVar21;
  return param_2;
}



// FUNCTION 1415ab44e FUN_1415ab44e body=601 status=ok
// SIG undefined FUN_1415ab44e(void)

void FUN_1415ab44e(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x20;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x1c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x18 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1415ab65a;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1415ab65a:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ab6a8 FUN_1415ab6a8 body=294 status=ok
// SIG undefined FUN_1415ab6a8(void)

void FUN_1415ab6a8(longlong param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x180);
  if (param_2 != '\0') {
    if (*(int *)(lVar3 + 0x58) != 3) {
      FUN_1446efa72((longlong *)(lVar3 + 0x50),0,3,0x10);
      *(undefined4 *)(lVar3 + 0x58) = 3;
    }
    puVar4 = *(undefined8 **)(lVar3 + 0x50);
    *puVar4 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 1;
    lVar3 = DAT_14c758608 + 1;
    if (lVar6 == 0) {
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 2;
      lVar3 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar3;
    puVar4[2] = lVar6;
    *puVar4 = &PTR_FUN_14b4f7400;
    puVar4[3] = param_1;
    puVar4[4] = FUN_148aaf348;
    FUN_143f48f4e(param_1);
    return;
  }
  if (lVar3 != 0) {
    *(undefined8 *)(param_1 + 0x180) = 0;
    plVar5 = *(longlong **)(param_1 + 0x188);
    if (plVar5 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0x188) = 0;
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  if (*(int *)(param_1 + 0x158) != 0) {
    *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x158);
    *(undefined4 *)(param_1 + 0x158) = 0;
    FUN_143f48db6(param_1);
    return;
  }
  return;
}



// FUNCTION 1415ab7ce FUN_1415ab7ce body=498 status=ok
// SIG undefined FUN_1415ab7ce(void)

void FUN_1415ab7ce(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  longlong *local_40;
  int local_38;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar5 = *(int *)(param_1 + 0x150);
  while (iVar5 == 1) {
    lVar2 = *(longlong *)(param_1 + 0x180);
    if (lVar2 != 0) {
      local_30 = (undefined8 *)0x0;
      local_28 = 0;
      FUN_1446efa72(&local_30,0,3,0x10);
      local_28 = 3;
      *local_30 = &PTR_LAB_149e06450;
      LOCK();
      UNLOCK();
      lVar6 = DAT_14c758608 + 1;
      lVar4 = DAT_14c758608 + 1;
      if (lVar6 == 0) {
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 2;
        lVar4 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar4;
      local_30[2] = lVar6;
      *local_30 = &PTR_FUN_14b4f7390;
      local_30[3] = param_1;
      local_30[4] = FUN_145f9f658;
      FUN_1459564ca(lVar2,&local_30);
      goto LAB_1415ab903;
    }
    *(undefined4 *)(param_1 + 0x150) = 2;
    iVar5 = 2;
  }
  if (iVar5 == 2) {
    *(undefined4 *)(param_1 + 0x154) = 0;
    if (*(int *)(param_1 + 0x158) != 0) {
      *(int *)(param_1 + 0x154) = *(int *)(param_1 + 0x158);
      *(undefined4 *)(param_1 + 0x158) = 0;
      FUN_143f48db6(param_1);
    }
    plVar1 = (longlong *)(param_1 + 0x198);
    local_40 = (longlong *)0x0;
    local_38 = 0;
    FUN_14009d848(&local_40,plVar1);
    if ((*(int *)(param_1 + 0x1a0) != 0) &&
       (puVar3 = (undefined8 *)*plVar1, puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)(puVar3,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x1a0) = 0;
    }
    if (local_40 != (longlong *)0x0 && local_38 != 0) {
      (**(code **)(*local_40 + 0x60))();
    }
    if (local_38 != 0) {
      if (local_40 == (longlong *)0x0) goto LAB_1415ab903;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1415ab903:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ab9c2 FUN_1415ab9c2 body=93 status=ok
// SIG undefined FUN_1415ab9c2(void)

longlong FUN_1415ab9c2(longlong param_1)

{
  FUN_140056680(param_1,L"/Game/UI/Materials");
  FUN_140056680(param_1 + 0x10,L"MPC_UIColors");
  FUN_140056680(param_1 + 0x20,L"/Game/UI/Materials/Palette");
  FUN_140056680(param_1 + 0x30,L"MF_UI_Color");
  FUN_140056680(param_1 + 0x40,&DAT_14b56c95e);
  return param_1;
}



// FUNCTION 1415aba20 FUN_1415aba20 body=224 status=ok
// SIG undefined FUN_1415aba20(void)

void FUN_1415aba20(longlong param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar2 = (longlong *)FUN_14594c5c0();
  lVar3 = plVar2[0x22];
  if (lVar3 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar3 = plVar2[0x22];
  }
  lVar3 = FUN_14656ddfc(lVar3 + 0x68);
  uVar4 = FUN_1400b465c(param_1);
  if (lVar3 == 0) {
    lVar3 = FUN_148a000d2();
  }
  else {
    lVar3 = FUN_14656de93(uVar4,lVar3);
  }
  if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(param_1 + 0x30) = lVar3;
    if (lVar3 == 0) {
      return;
    }
  }
  else {
    FUN_1456cec3c(lVar3);
    *(longlong *)(param_1 + 0x30) = lVar3;
  }
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  FUN_1447f71cc(lVar3,0x40000000);
  plVar2 = *(longlong **)(param_1 + 0x30);
  uVar4 = FUN_1400b465c(param_1);
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x2a0);
                    /* WARNING: Could not recover jumptable at 0x0001415abaef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar2,uVar4,UNRECOVERED_JUMPTABLE);
  return;
}



// FUNCTION 1415abb00 FUN_1415abb00 body=164 status=ok
// SIG undefined FUN_1415abb00(void)

void FUN_1415abb00(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caebb20,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415abba6 FUN_1415abba6 body=226 status=ok
// SIG undefined FUN_1415abba6(void)

longlong * FUN_1415abba6(longlong *param_1)

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
  pcVar13 = FUN_1463f466e;
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



// FUNCTION 1415abc8a FUN_1415abc8a body=155 status=ok
// SIG undefined FUN_1415abc8a(void)

void FUN_1415abc8a(longlong param_1)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x368));
  iVar2 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar2 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x1f0);
    plVar4 = *(longlong **)(param_1 + 0x230);
    lVar7 = 0;
    do {
      if (*(char *)(lVar3 + 8 + lVar7) == 'e') {
        lVar5 = *(longlong *)(lVar3 + lVar7);
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x138) + 2 + lVar5);
        if ((int)(uint)uVar1 < (int)plVar4[1]) {
          lVar6 = *(longlong *)(*(longlong *)(*plVar4 + (ulonglong)uVar1 * 8) + 0x18);
          if (lVar6 != 0) {
            FUN_1490d96ea(lVar6,*(undefined2 *)(*(longlong *)(param_1 + 0x138) + 4 + lVar5));
          }
        }
      }
      lVar7 = lVar7 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x0001415abd12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x368));
  return;
}



// FUNCTION 1415abd26 FUN_1415abd26 body=288 status=ok
// SIG undefined FUN_1415abd26(void)

void FUN_1415abd26(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141157eea(&local_30,*(longlong *)(param_1 + 0x1e8),
                *(undefined1 *)(*(longlong *)(param_1 + 0x1e8) + 0xa8));
  if ((longlong *)(param_1 + 0x1f0) == &local_30) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x1f0) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 0x1f0) = local_30;
    local_30 = 0;
    *(undefined4 *)(param_1 + 0x1f8) = local_28;
    *(undefined4 *)(param_1 + 0x1fc) = local_24;
  }
  iVar3 = *(int *)(param_1 + 0x1f8);
  if (0 < iVar3) {
    lVar4 = 8;
    lVar5 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1f0);
      if (*(char *)(lVar1 + lVar4) == 'D') {
        lVar1 = *(longlong *)(lVar1 + -8 + lVar4);
        lVar2 = **(longlong **)(param_1 + 0x1e8);
        if (((*(char *)(lVar2 + 2 + lVar1) != '\x02') && (*(char *)(lVar2 + 8 + lVar1) != '\x02'))
           || (*(int *)(param_1 + 0x2d0) != 0)) {
          *(undefined1 *)(lVar2 + lVar1) = 0x44;
          *(undefined4 *)(lVar2 + 0xe + lVar1) = 0x40000;
          iVar3 = *(int *)(param_1 + 0x1f8);
        }
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x10;
    } while (lVar5 < iVar3);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415abe48 FUN_1415abe48 body=1329 status=ok
// SIG undefined FUN_1415abe48(void)

void FUN_1415abe48(longlong param_1)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined ***pppuVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  wchar_t *pwVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_258;
  undefined8 local_250;
  wchar_t *local_248;
  code *local_240;
  undefined1 *local_238;
  code **local_230;
  code *local_228;
  code *local_220;
  wchar_t *local_218;
  int local_210;
  undefined ***local_208;
  undefined **local_1f8;
  longlong local_1f0;
  code *local_1d8;
  undefined1 uStack_1d0;
  undefined1 uStack_1cf;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [64];
  longlong local_158;
  undefined4 local_150;
  code *local_148;
  undefined8 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  longlong local_c8;
  undefined4 local_c0;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_288;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x368));
  lVar4 = *(longlong *)(param_1 + 0x230);
  if (*(int *)(lVar4 + 8) != *(int *)(*(longlong *)(param_1 + 0x218) + 8)) {
    *(undefined4 *)(lVar4 + 8) = 0;
    if (*(int *)(lVar4 + 0xc) < 0) {
      FUN_1490ef3a2();
    }
    FUN_145dae38a(*(undefined8 *)(param_1 + 0x230),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8));
    lVar4 = *(longlong *)(param_1 + 0x248);
    *(undefined4 *)(lVar4 + 8) = 0;
    if (*(int *)(lVar4 + 0xc) < 0) {
      FUN_1490ef3d2();
    }
    FUN_145dae484(*(undefined8 *)(param_1 + 0x248),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x218) + 8));
    local_148 = (code *)0x0;
    local_138 = (longlong *)0x0;
    local_e8 = 0;
    local_e0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_dc = 0xffffffff00000080;
    local_d4 = 0;
    local_c8 = 0;
    local_c0 = 0;
    lVar4 = FUN_141409182();
    if (DAT_14c951858 == 0) {
      local_230 = &local_1d8;
      local_1d8 = FUN_1449e2820;
      local_220 = FUN_14081d0ea;
      local_228 = FUN_14081d0ea;
      local_238 = &LAB_1468c5283;
      local_240 = FUN_142809da0;
      local_248 = L"Engine";
      local_250 = 0x400000000;
      local_258 = 0x10000000;
      local_260 = 8;
      local_268 = 0x50;
      FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
    }
    lVar12 = *(longlong *)(param_1 + 0x20);
    if (lVar12 != 0) {
      do {
        if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x38) < *(int *)(lVar4 + 0x38)) ||
           (lVar11 = lVar12,
           *(longlong *)
            (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar4 + 0x38) * 8) != lVar4 + 0x30)) {
          lVar11 = 0;
        }
      } while ((lVar11 == 0) && (lVar12 = *(longlong *)(lVar12 + 0x20), lVar12 != 0));
      if (lVar11 != 0) {
        local_208 = (undefined ***)0x0;
        local_1f8 = &PTR_LAB_14bad55e0;
        local_218 = 
        L"譈\xe909嵊Ӑ赈鄅暎䠇䊉䠐䆋䠈䊉䠘䊍쌘赈ࡁ쳃譈䠁䂋ㄘ䣒\xe0ff䡖\xec83䠠캉튅ࡴ襈\xe8f1夢﮹襈䣰쒃帠쳃譈！쌀荈䣬譈鼅⦱䠈\xe031襈⑄䱀ɣ譈䠁咍⠤襈䰂咍〤襉ࡒ赈㬕"
        ;
        local_1f0 = lVar11;
        FUN_1490da752(&local_1d8);
        pcVar5 = local_148;
        plVar8 = (longlong *)CONCAT44(uStack_1c4,local_1c8);
        local_148 = local_1d8;
        local_1d8 = pcVar5;
        uStack_1d0 = SUB81(uStack_140,0);
        uStack_1cf = (undefined1)((ulonglong)uStack_140 >> 8);
        uStack_1ce = (undefined2)((ulonglong)uStack_140 >> 0x10);
        uStack_1cc = uStack_13c;
        local_1c8 = (undefined4)local_138;
        uStack_1c4 = local_138._4_4_;
        uStack_1c0 = uStack_130;
        uStack_1bc = uStack_12c;
        local_1b8 = local_128;
        uStack_1b4 = uStack_124;
        uStack_1b0 = uStack_120;
        uStack_1ac = uStack_11c;
        local_1a8 = local_118;
        uStack_1a4 = uStack_114;
        uStack_1a0 = uStack_110;
        uStack_19c = uStack_10c;
        local_138 = plVar8;
        FUN_14613f54a(&local_108,local_198);
        local_150 = 0;
        if (local_158 != 0) {
          FUN_1400020a8();
        }
        FUN_140ba05b6(local_198);
        if (local_1d8 != (code *)0x0) {
          plVar8 = (longlong *)CONCAT44(uStack_1c4,local_1c8);
          if ((longlong *)CONCAT44(uStack_1c4,local_1c8) == (longlong *)0x0) {
            plVar8 = (longlong *)&local_1b8;
          }
          (**(code **)(*plVar8 + 0x10))();
        }
        if (local_218 != (wchar_t *)0x0) {
          pppuVar7 = local_208;
          if (local_208 == (undefined ***)0x0) {
            pppuVar7 = &local_1f8;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
    }
    plVar8 = *(longlong **)(param_1 + 0x218);
    if (0 < (int)plVar8[1]) {
      lVar4 = 0;
      lVar12 = 0;
      do {
        FUN_1400021e4(*plVar8 + lVar4,&local_218);
        pcVar5 = (code *)FUN_14001a7b2();
        pwVar10 = L"";
        if (local_210 != 0) {
          pwVar10 = local_218;
        }
        uStack_1d0 = (code)0x1;
        uStack_1cf = 1;
        local_1d8 = pcVar5;
        AcquireSRWLockExclusive((PSRWLOCK)(pcVar5 + 0x3a0));
        LOCK();
        pcVar1 = local_1d8 + 0x3ac;
        iVar2 = *(int *)pcVar1;
        *(int *)pcVar1 = *(int *)pcVar1 + 1;
        UNLOCK();
        if (iVar2 == 0) {
          LOCK();
          local_1d8[0x3a8] = uStack_1d0;
          UNLOCK();
        }
        puVar6 = (undefined8 *)FUN_14001aed4(pcVar5,pwVar10,&local_148);
        FUN_1409be446(&local_1d8);
        pwVar10 = local_218;
        if (puVar6 != (undefined8 *)0x0) {
          *(undefined8 **)(**(longlong **)(param_1 + 0x230) + lVar12 * 8) = puVar6;
          *(undefined8 *)(**(longlong **)(param_1 + 0x248) + lVar12 * 8) = puVar6[3];
          iVar2 = *(int *)(puVar6 + 1);
          if (local_210 == iVar2) {
            if ((1 < local_210) && (iVar3 = wcscmp(local_218,(wchar_t *)*puVar6), iVar3 != 0)) {
LAB_1415ac103:
              puVar9 = &DAT_149dfb77a;
              if (iVar2 != 0) {
                puVar9 = (undefined2 *)*puVar6;
              }
              FUN_1446f470e(&local_1d8,puVar9,1);
              *(code **)(*plVar8 + lVar12 * 8) = local_1d8;
              pwVar10 = local_218;
            }
          }
          else if (local_210 + iVar2 != 1) goto LAB_1415ac103;
        }
        if (pwVar10 != (wchar_t *)0x0) {
          FUN_1400020a8(pwVar10);
        }
        lVar12 = lVar12 + 1;
        lVar4 = lVar4 + 8;
      } while (lVar12 < (int)plVar8[1]);
    }
    local_c0 = 0;
    if (local_c8 != 0) {
      FUN_1400020a8();
    }
    FUN_140ba05b6(&local_108);
    if (local_148 != (code *)0x0) {
      plVar8 = local_138;
      if (local_138 == (longlong *)0x0) {
        plVar8 = (longlong *)&local_128;
      }
      (**(code **)(*plVar8 + 0x10))();
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x368));
  if ((local_70 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415ac37a FUN_1415ac37a body=244 status=ok
// SIG undefined FUN_1415ac37a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415ac37a(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar3 = true;
  fVar4 = 1.0;
  fVar6 = 1.0;
  fVar5 = fVar4;
  do {
    fVar5 = fVar5 * 0.5;
    if (bVar3) {
      fVar4 = fVar4 + fVar4;
    }
    fVar7 = fVar5 + 1.0;
    if ((fVar7 == 1.0) && (!NAN(fVar7))) break;
    bVar3 = (bool)(bVar3 ^ 1);
    bVar1 = NAN(fVar6);
    bVar2 = fVar7 != fVar6;
    fVar6 = fVar7;
  } while ((bVar2) || (NAN(fVar7) || bVar1));
  DAT_14c992010 = fVar4 + 1.0;
  _DAT_14c992014 = (fVar5 * 8.0 + 3.0) * fVar5;
  DAT_14c992018 = (fVar5 * 16.0 + 3.0) * fVar5;
  DAT_14c99201c = (fVar5 * 12.0 + 2.0) * fVar5;
  _DAT_14c992020 = (fVar5 * 64.0 + 9.0) * fVar5 * fVar5;
  return;
}



// FUNCTION 1415ac46e FUN_1415ac46e body=421 status=ok
// SIG undefined FUN_1415ac46e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415ac46e(void)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  bVar3 = true;
  dVar5 = 1.0;
  dVar4 = 1.0;
  dVar6 = 1.0;
  do {
    dVar4 = dVar4 * 0.5;
    if (bVar3) {
      dVar5 = dVar5 + dVar5;
    }
    dVar7 = dVar4 + 1.0;
    if ((dVar7 == 1.0) && (!NAN(dVar7))) break;
    bVar3 = (bool)(bVar3 ^ 1);
    bVar1 = NAN(dVar6);
    bVar2 = dVar7 != dVar6;
    dVar6 = dVar7;
  } while ((bVar2) || (NAN(dVar7) || bVar1));
  DAT_14c992028 = dVar5 + 1.0;
  _DAT_14c992030 = (dVar4 * 8.0 + 3.0) * dVar4;
  DAT_14c992038 = (dVar4 * 16.0 + 3.0) * dVar4;
  DAT_14c992040 = (dVar4 * 12.0 + 2.0) * dVar4;
  _DAT_14c992048 = (dVar4 * 64.0 + 9.0) * dVar4 * dVar4;
  DAT_14c992050 = (dVar4 * 56.0 + 7.0) * dVar4;
  DAT_14c992058 = (dVar4 * 28.0 + 3.0) * dVar4;
  _DAT_14c992060 = (dVar4 * 288.0 + 26.0) * dVar4 * dVar4;
  DAT_14c992068 = (dVar4 * 96.0 + 10.0) * dVar4;
  DAT_14c992070 = (dVar4 * 48.0 + 4.0) * dVar4;
  _DAT_14c992078 = (dVar4 * 576.0 + 44.0) * dVar4 * dVar4;
  return;
}



// FUNCTION 1415ac614 FUN_1415ac614 body=265 status=ok
// SIG undefined FUN_1415ac614(void)

undefined * FUN_1415ac614(void)

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
              0x110) < DAT_14c9c0560) {
    FUN_144b3d300(&DAT_14c9c0560);
    if (DAT_14c9c0560 == -1) {
      FUN_145fa15fe(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDeferredDecalPassParameters";
      local_38 = 0;
      local_50 = 0x1c0;
      local_58 = 0x4a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c04e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b91938);
      _Init_thread_footer(&DAT_14c9c0560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14c9c04e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ac71e thunk_FUN_1415ac724 body=5 status=ok
// SIG undefined thunk_FUN_1415ac724(void)

undefined8 * thunk_FUN_1415ac724(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99cf80) {
    FUN_144b3d300(&DAT_14c99cf80);
    if (DAT_14c99cf80 == -1) {
      FUN_145fca862();
      DAT_14c99cf78 = &DAT_14c99cf20;
      atexit(FUN_142ac287c);
      _Init_thread_footer(&DAT_14c99cf80);
    }
  }
  return DAT_14c99cf78;
}



// FUNCTION 1415ac724 FUN_1415ac724 body=115 status=ok
// SIG undefined FUN_1415ac724(void)

undefined8 * FUN_1415ac724(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c99cf80) {
    FUN_144b3d300(&DAT_14c99cf80);
    if (DAT_14c99cf80 == -1) {
      FUN_145fca862();
      DAT_14c99cf78 = &DAT_14c99cf20;
      atexit(FUN_142ac287c);
      _Init_thread_footer(&DAT_14c99cf80);
    }
  }
  return DAT_14c99cf78;
}



// FUNCTION 1415ac798 FUN_1415ac798 body=262 status=ok
// SIG undefined FUN_1415ac798(void)

void FUN_1415ac798(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    lVar3 = *param_2;
    uVar1 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_1[9] - 1U &
                    (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                    (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x30) == lVar3) goto LAB_1415ac84b;
        iVar6 = *(int *)((longlong)iVar6 * 0x30 + *param_1 + 0x28);
      } while (iVar6 != -1);
    }
  }
  local_48 = param_2;
  local_40 = param_3;
  FUN_1415ac986(param_1,local_24,&local_48,0);
LAB_1415ac84b:
  lVar2 = FUN_1415ac8a0();
  lVar3 = *(longlong *)(lVar2 + 0x110);
  if (lVar3 == 0) {
    FUN_140aa6c08(lVar2);
    lVar3 = *(longlong *)(lVar2 + 0x110);
  }
  FUN_1415acd92(lVar3,&local_48,param_2,param_3);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ac8a0 FUN_1415ac8a0 body=228 status=ok
// SIG undefined FUN_1415ac8a0(void)

longlong FUN_1415ac8a0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99d1a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_146fd5ebb;
    local_40 = &LAB_145dd7d24;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/DataflowCore",L"DataflowSettings",&DAT_14c99d1a8,&DAT_146fd5eba);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99d1a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ac986 FUN_1415ac986 body=366 status=ok
// SIG undefined FUN_1415ac986(void)

undefined4 *
FUN_1415ac986(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1415acba4(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[6];
  uVar9 = puVar1[7];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = uVar6;
  *(undefined4 *)((longlong)local_40 + 0x1c) = uVar7;
  *(undefined4 *)(local_40 + 4) = uVar8;
  *(undefined4 *)((longlong)local_40 + 0x24) = uVar9;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar15 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar15 = ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar15 << 0x13 | uVar15 & 0xffff) + (uVar12 >> 4);
  local_58 = param_4;
  cVar10 = FUN_1415acaf6(param_1,uVar15,local_40);
  if (cVar10 == '\0') {
    uVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar12 < 4) {
      iVar13 = 1;
    }
    else {
      uVar11 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar11 != 0) {
        for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar12 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar15 = *(int *)(param_1 + 0x48) - 1U & uVar15;
      *(uint *)((longlong)local_40 + 0x2c) = uVar15;
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4);
      lVar14 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar14 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar14 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar15) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1415acf34(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415acaf6 FUN_1415acaf6 body=174 status=ok
// SIG undefined FUN_1415acaf6(void)

void FUN_1415acaf6(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 uVar10;
  longlong *plVar11;
  int iVar12;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar11 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar11 = (longlong *)param_1[8];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar12 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar12 * 0x30);
        if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == *param_3) {
          lVar6 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar7 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar8 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar9 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          *(longlong *)(puVar1 + 8) = param_3[4];
          puVar1[4] = (int)lVar8;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar9;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar6;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar7;
          puVar1[3] = uVar3;
          FUN_146fd439a((int)lVar6,*param_4,1);
          *param_4 = iVar12;
          uVar10 = 1;
          break;
        }
        iVar12 = puVar1[10];
        uVar10 = 0;
      } while (iVar12 != -1);
      goto LAB_1415acb64;
    }
  }
  uVar10 = 0;
LAB_1415acb64:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar10;
  }
  return;
}



// FUNCTION 1415acba4 FUN_1415acba4 body=493 status=ok
// SIG undefined FUN_1415acba4(void)

int * FUN_1415acba4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar11) {
      FUN_145faae12(param_1,iVar11);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar2 = iVar6 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar2 = iVar6;
        }
        else {
          uVar13 = iVar6 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar13) {
              uVar7 = uVar13;
            }
          }
          else {
            uVar7 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar4 = FUN_144a3809e(uVar7 << 2,0);
          iVar2 = (int)(uVar4 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar2) {
            iVar8 = iVar2 << 5;
          }
          iVar2 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar2);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar2 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar2 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar5 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar2 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    lVar3 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar5 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar5 | 0xfffffffeU >> 0x20 - bVar5);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar3 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x30);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x30) = 0xffffffff;
    }
  }
  plVar9 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar9 = (longlong *)param_1[4];
  }
  iVar6 = iVar11 + 0x1f;
  if (-1 < iVar11) {
    iVar6 = iVar11;
  }
  puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  *param_2 = iVar11;
  *(longlong *)(param_2 + 2) = lVar3 * 0x30 + *param_1;
  return param_2;
}



// FUNCTION 1415acd92 FUN_1415acd92 body=416 status=ok
// SIG undefined FUN_1415acd92(void)

undefined4 *
FUN_1415acd92(longlong param_1,undefined4 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_34 [4];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)(param_1 + 0x88);
  iVar12 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xbc);
  if (iVar12 != iVar2) {
    lVar11 = *param_3;
    uVar3 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar14 = (uint)lVar11 & 0xffff;
    lVar13 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar13 = *(longlong *)(param_1 + 200);
    }
    iVar15 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar14) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar15 != -1) {
      do {
        if (*(longlong *)(*plVar1 + (longlong)iVar15 * 0x30) == lVar11) goto LAB_1415ace7e;
        iVar15 = *(int *)((longlong)iVar15 * 0x30 + *plVar1 + 0x28);
      } while (iVar15 != -1);
    }
  }
  local_48 = param_3;
  local_40 = param_4;
  FUN_1415ac986(plVar1,local_34,&local_48,0);
  lVar11 = *param_3;
  iVar12 = *(int *)(param_1 + 0x90);
  iVar2 = *(int *)(param_1 + 0xbc);
LAB_1415ace7e:
  if (iVar12 != iVar2) {
    uVar3 = (uint)((ulonglong)lVar11 >> 0x10);
    uVar14 = (uint)lVar11 & 0xffff;
    lVar13 = param_1 + 0xc0;
    if (*(longlong *)(param_1 + 200) != 0) {
      lVar13 = *(longlong *)(param_1 + 200);
    }
    iVar12 = *(int *)(lVar13 + (ulonglong)
                               (*(int *)(param_1 + 0xd0) - 1U &
                               (int)((ulonglong)lVar11 >> 0x20) + ((uint)lVar11 << 0x10 | uVar14) +
                               (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4)) * 4);
    if (iVar12 != -1) {
      do {
        lVar13 = *plVar1 + (longlong)iVar12 * 0x30;
        if (*(longlong *)(*plVar1 + (longlong)iVar12 * 0x30) == lVar11) goto LAB_1415acef2;
        iVar12 = *(int *)(lVar13 + 0x28);
      } while (iVar12 != -1);
    }
  }
  lVar13 = 0;
LAB_1415acef2:
  uVar4 = *(undefined4 *)(lVar13 + 8);
  uVar5 = *(undefined4 *)(lVar13 + 0xc);
  uVar6 = *(undefined4 *)(lVar13 + 0x10);
  uVar7 = *(undefined4 *)(lVar13 + 0x14);
  uVar8 = *(undefined4 *)(lVar13 + 0x1c);
  uVar9 = *(undefined4 *)(lVar13 + 0x20);
  uVar10 = *(undefined4 *)(lVar13 + 0x24);
  param_2[4] = *(undefined4 *)(lVar13 + 0x18);
  param_2[5] = uVar8;
  param_2[6] = uVar9;
  param_2[7] = uVar10;
  *param_2 = uVar4;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar7;
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415acf34 FUN_1415acf34 body=598 status=ok
// SIG undefined FUN_1415acf34(void)

void FUN_1415acf34(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7 * 0x30;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x2c + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x28 + lVar13) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_1415ad141;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_1415ad141:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ad18c FUN_1415ad18c body=226 status=ok
// SIG undefined FUN_1415ad18c(void)

longlong * FUN_1415ad18c(longlong *param_1)

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
  pcVar13 = FUN_1462d58ac;
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



// FUNCTION 1415ad270 FUN_1415ad270 body=258 status=ok
// SIG undefined FUN_1415ad270(void)

void FUN_1415ad270(void)

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
              0x110) < DAT_14ca44c08) {
    FUN_144b3d300(&DAT_14ca44c08);
    if (DAT_14ca44c08 == -1) {
      FUN_145fcb318(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FDrawTileMeshPassParameters";
      local_38 = 0;
      local_50 = 0x1d0;
      local_58 = 0x9e;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca44b88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fc03a8);
      _Init_thread_footer(&DAT_14ca44c08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ad374 FUN_1415ad374 body=226 status=ok
// SIG undefined FUN_1415ad374(void)

longlong * FUN_1415ad374(longlong *param_1)

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
  pcVar13 = FUN_1463efcfa;
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



// FUNCTION 1415ad458 FUN_1415ad458 body=226 status=ok
// SIG undefined FUN_1415ad458(void)

longlong * FUN_1415ad458(longlong *param_1)

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
  pcVar13 = FUN_1463fe82e;
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



// FUNCTION 1415ad53c FUN_1415ad53c body=226 status=ok
// SIG undefined FUN_1415ad53c(void)

longlong * FUN_1415ad53c(longlong *param_1)

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
  pcVar13 = FUN_146405c82;
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



// FUNCTION 1415ad620 FUN_1415ad620 body=517 status=ok
// SIG undefined FUN_1415ad620(void)

void FUN_1415ad620(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar9 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar9 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar12 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar10 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar11 = *param_1 + (longlong)iVar6 * 0x238;
      FUN_140c3ad3e((longlong)iVar6 * 0x238 + *param_1 + 0x130);
      FUN_140c3ad3e(lVar11 + 0x38);
      if (*(longlong *)(lVar11 + 0x28) != 0) {
        FUN_1400020a8();
      }
      uVar12 = uVar12 & ~(uint)uVar9;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar12;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar8 * 4 + lVar11 * 4 + 4);
          if (uVar5 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar3 - lVar11 == lVar8) goto LAB_1415ad796;
        }
        iVar13 = iVar13 + (int)lVar8 + 1;
        uVar12 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_1415ad796:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_145fcdb4e(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar12 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar12) ||
     (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
    uVar5 = 0x80;
    if (0x80 < (int)uVar12) {
      uVar5 = uVar12;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar5;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ad828 FUN_1415ad828 body=194 status=ok
// SIG undefined FUN_1415ad828(void)

void FUN_1415ad828(longlong param_1,int *param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int *_Dst;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (0 < iVar1) {
    lVar7 = 0;
    bVar4 = false;
    iVar3 = iVar1;
    do {
      lVar2 = *(longlong *)(param_1 + 8);
      lVar7 = (longlong)(int)lVar7;
      _Dst = (int *)(lVar7 * 0x20 + lVar2);
      while (*_Dst != *param_2) {
        lVar7 = lVar7 + 1;
        _Dst = _Dst + 8;
        if (iVar3 <= lVar7) {
          if (bVar4) goto LAB_1415ad884;
          goto LAB_1415ad88f;
        }
      }
      iVar5 = (iVar3 + -1) - (int)lVar7;
      if (iVar5 != 0) {
        iVar6 = 1;
        if (iVar5 < 1) {
          iVar6 = iVar5;
        }
        memmove(_Dst,(void *)(lVar2 + (longlong)(iVar3 - iVar6) * 0x20),(longlong)iVar6 << 5);
        iVar3 = *(int *)(param_1 + 0x10);
      }
      iVar3 = iVar3 + -1;
      *(int *)(param_1 + 0x10) = iVar3;
      bVar4 = true;
    } while ((int)lVar7 < iVar3);
LAB_1415ad884:
    FUN_145fcdbc2((longlong *)(param_1 + 8));
    iVar3 = *(int *)(param_1 + 0x10);
LAB_1415ad88f:
    if (iVar3 < iVar1) {
      FUN_1457ed93e(param_1 + -0x58);
      return;
    }
  }
  return;
}



// FUNCTION 1415ad8ea FUN_1415ad8ea body=225 status=ok
// SIG undefined FUN_1415ad8ea(void)

void FUN_1415ad8ea(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_48 [37];
  undefined1 local_23;
  undefined1 local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  cVar1 = (**(code **)(*param_1 + 0x6c8))();
  if (cVar1 != '\0') {
    if (*(char *)((longlong)param_1 + 0x32b9) == '\0') {
      lVar2 = param_1[0x47b];
      iVar3 = (int)param_1[0x47c];
    }
    else {
      iVar3 = 0x6000;
      lVar2 = 0;
    }
    FUN_1441ffbe0(param_1);
    if (((lVar2 != param_1[0x47b]) || (iVar3 != (int)param_1[0x47c])) &&
       ((param_1[0x47e] != lVar2 || ((int)param_1[0x47f] != iVar3)))) {
      param_1[0x47e] = lVar2;
      *(int *)(param_1 + 0x47f) = iVar3;
      param_1[0x480] = 0;
    }
    local_21 = 0;
    local_23 = 0;
    FUN_14572e6ac(param_1);
    cVar1 = (**(code **)(*param_1 + 0x6c8))(param_1);
    if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415ad9dc FUN_1415ad9dc body=226 status=ok
// SIG undefined FUN_1415ad9dc(void)

longlong * FUN_1415ad9dc(longlong *param_1)

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
  pcVar13 = FUN_14667cd7e;
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



// FUNCTION 1415adac0 FUN_1415adac0 body=310 status=ok
// SIG undefined FUN_1415adac0(void)

void FUN_1415adac0(longlong param_1,undefined8 param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  uStack_50 = 0;
  iVar6 = 0x1b0;
  FUN_14499148c(&local_58,0x1b0);
  do {
    uVar3 = uStack_50;
    lVar5 = (longlong)(int)uStack_50;
    uVar4 = (int)uStack_50 + 1;
    uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
    if (uStack_50._4_4_ < uVar4) {
      FUN_1449e2712(&local_58,uVar3 & 0xffffffff);
    }
    puVar2 = (undefined8 *)(local_58 + lVar5 * 0x10);
    *puVar2 = 0;
    puVar2[1] = 0;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  local_70 = local_58;
  local_68 = (int)uStack_50;
  FUN_1415adbf7(&local_60,param_2,L"FStencilConeVertexBuffer");
  plVar7 = (longlong *)(param_1 + 0x10);
  if (plVar7 != &local_60) {
    lVar5 = *plVar7;
    *plVar7 = local_60;
    local_60 = 0;
    if (lVar5 == 0) goto LAB_1415adb71;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (local_60 != 0) {
    LOCK();
    puVar1 = (uint *)(local_60 + 8);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar4 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
LAB_1415adb71:
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415adbf7 FUN_1415adbf7 body=379 status=ok
// SIG undefined FUN_1415adbf7(void)

longlong * FUN_1415adbf7(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined8 *local_a0;
  undefined **local_90;
  undefined8 local_88;
  uint local_80;
  uint local_74 [3];
  undefined8 local_68;
  undefined ***local_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 uStack_4c;
  uint local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_88 = *param_4;
  local_60 = &local_90;
  local_90 = &PTR_FUN_14a249130;
  local_80 = *(int *)(param_4 + 1) << 4;
  local_68 = 0;
  local_58 = 1;
  local_54 = 0;
  uStack_4c = 0;
  local_44 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_40 = 0;
  local_3c = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_74[1] = 0;
  local_74[2] = 0x4001;
  local_74[0] = local_80;
  local_38 = param_3;
  if (local_80 == 0) {
    FUN_14570b4be(param_2,&local_68,0x4001,0);
  }
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_14002049c(param_2,1);
    local_a0 = &local_68;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
    FUN_14002049c(param_2,0);
  }
  else {
    local_a0 = &local_68;
    local_a8 = 0x78;
    (**(code **)(*DAT_14ca83900 + 0x150))(DAT_14ca83900,param_1,param_2,local_74);
    *(undefined4 *)(*param_1 + 0x18) = 0x78;
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415add74 FUN_1415add74 body=380 status=ok
// SIG undefined FUN_1415add74(void)

void FUN_1415add74(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = &PTR_FUN_14a8950a0;
  local_38 = param_1[10];
  if (local_38 != 0) {
    local_30 = &local_38;
    FUN_1414aded0(param_1 + 2);
    puVar1 = (undefined8 *)param_1[10];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    param_1[10] = 0;
  }
  local_38 = param_1[9];
  puVar1 = param_1 + 2;
  local_30 = &local_38;
  FUN_1414aded0(puVar1);
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    FUN_1458f4240(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[9] = 0;
  local_38 = param_1[8];
  local_30 = &local_38;
  FUN_1414aded0(puVar1);
  puVar3 = (undefined8 *)param_1[8];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[8] = 0;
  local_38 = param_1[7];
  local_30 = &local_38;
  FUN_1414aded0(puVar1);
  puVar3 = (undefined8 *)param_1[7];
  if (puVar3 != (undefined8 *)0x0) {
    (**(code **)*puVar3)(puVar3,1);
  }
  param_1[7] = 0;
  local_38 = param_1[6];
  local_30 = &local_38;
  FUN_1414aded0(puVar1);
  lVar2 = param_1[6];
  if (lVar2 != 0) {
    FUN_145d14a64(lVar2);
    FUN_1400020a8(lVar2);
  }
  param_1[6] = 0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415adef2 FUN_1415adef2 body=667 status=ok
// SIG undefined FUN_1415adef2(void)

void FUN_1415adef2(longlong param_1,longlong param_2)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((*(int *)(param_1 + 0xc) != 0) && (uVar2 = *(uint *)(param_1 + 8), -1 < (int)uVar2)) &&
     ((int)uVar2 < DAT_14c9647dc)) {
    plVar4 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0xc))) &&
       ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar4;
      }
      else {
        lVar3 = 0;
      }
      if (lVar3 == param_2) {
        if ((*(longlong *)(param_1 + 0x200) != 0) &&
           ((*(byte *)(*(longlong *)(param_1 + 0x200) + 0xa0) & 1) == 0)) {
          FUN_14009fd82(DAT_14c82b500,param_1 + 0x200,0xff);
        }
        FUN_1411aa8f0(param_1);
        FUN_145844196(param_1 + 0x30);
        *(undefined8 *)(param_1 + 0x238) = 0;
        plVar4 = *(longlong **)(param_1 + 600);
        *(undefined8 *)(param_1 + 0x250) = 0;
        *(undefined8 *)(param_1 + 600) = 0;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar4 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar4 + 0x10))();
          }
        }
        *(undefined4 *)(param_1 + 0x210) = 0;
        if (*(int *)(param_1 + 0x214) != 0) {
          FUN_1464adaa2(param_1 + 0x208);
        }
        *(undefined4 *)(param_1 + 0x220) = 0;
        if (*(int *)(param_1 + 0x224) != 0) {
          FUN_143c30a2a(param_1 + 0x218);
        }
        *(undefined4 *)(param_1 + 0x440) = 0;
        if (*(int *)(param_1 + 0x444) != 0) {
          FUN_14860a51c(param_1 + 0x438);
        }
        FUN_145777871(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x1d8));
        *(undefined4 *)(param_1 + 0x1d8) = 0;
        if (*(int *)(param_1 + 0x1dc) != 0) {
          FUN_1464adad2(param_1 + 0x1d0);
        }
        *(undefined4 *)(param_1 + 0x1e8) = 0;
        if (*(int *)(param_1 + 0x1ec) != 0) {
          FUN_147bf1112(param_1 + 0x1e0,0);
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
        if (*(int *)(param_1 + 0x3c4) != 0) {
          FUN_1447a8aa0(param_1 + 0x3b8,0);
        }
        FUN_1459a2e1a(param_1 + 0x368);
        FUN_14571d7ac(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0x428) = 0;
        if (*(int *)(param_1 + 0x42c) != 0) {
          FUN_14012d2da(param_1 + 0x420,0);
        }
        FUN_14594efa0(param_1 + 0x448);
        FUN_1458e5170(param_1 + 0x498);
        *(undefined4 *)(param_1 + 0x4f0) = 0;
        if (*(int *)(param_1 + 0x4f4) != 0) {
          FUN_1464adb02(param_1 + 0x4e8);
        }
        *(undefined4 *)(param_1 + 0x500) = 0;
        if (*(int *)(param_1 + 0x504) != 0) {
          FUN_14860a726(param_1 + 0x4f8);
        }
        if (*(char *)(param_1 + 0x51c) == '\x01') {
          if (*(char *)(param_1 + 0x518) == '\x01') {
            *(undefined1 *)(param_1 + 0x518) = 0;
          }
          *(undefined1 *)(param_1 + 0x51c) = 0;
        }
        *(undefined1 *)(param_1 + 0x1fe) = 0;
        *(undefined2 *)(param_1 + 0x1fc) = 0;
        *(undefined8 *)(param_1 + 0x240) = 0;
        *(undefined4 *)(param_1 + 0x248) = 0xbf800000;
        *(undefined8 *)(param_1 + 0x430) = 0;
        *(undefined1 *)(param_1 + 0x3c8) = 1;
        *(undefined8 *)(param_1 + 0x288) = 0;
      }
    }
  }
  return;
}



// FUNCTION 1415ae18e FUN_1415ae18e body=496 status=ok
// SIG undefined FUN_1415ae18e(void)

void FUN_1415ae18e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    uVar14 = 1;
    uVar16 = 0;
    iVar12 = 0;
    iVar8 = 0;
  }
  else {
    puVar9 = *(uint **)(param_1 + 0x28);
    if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
      puVar9 = (uint *)(param_1 + 0x18);
    }
    uVar15 = *puVar9;
    if (uVar15 == 0) {
      iVar12 = iVar1 + 0x1e;
      if (-1 < iVar1 + -1) {
        iVar12 = iVar1 + -1;
      }
      uVar16 = 0;
      uVar10 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar10 = uVar16;
      }
      iVar12 = 0;
      do {
        if (uVar10 == uVar16) goto LAB_1415ae30c;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar9[uVar16 + 1];
        uVar16 = uVar16 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar16 = 0;
      iVar12 = 0;
    }
    uVar14 = (ulonglong)(-uVar15 & uVar15);
    uVar10 = uVar14 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    if (iVar1 <= iVar8) {
      iVar8 = iVar1;
    }
  }
  if (iVar8 < iVar1) {
    uVar15 = 0xffffffff;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 8) + (longlong)iVar8 * 0x28);
      cVar3 = (**(code **)(*plVar2 + 0x28))(plVar2);
      if (cVar3 != '\0') {
        puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2);
        (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x80))
                  (*(longlong **)(param_1 + 0xb8),*puVar4);
      }
      uVar15 = uVar15 & ~(uint)uVar14;
      puVar9 = *(uint **)(param_1 + 0x28);
      if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
        puVar9 = (uint *)(param_1 + 0x18);
      }
      iVar1 = *(int *)(param_1 + 0x30);
      iVar8 = (int)uVar16;
      lVar13 = (longlong)iVar8;
      uVar5 = puVar9[lVar13] & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar1 + 0x1e;
        if (-1 < iVar1 + -1) {
          iVar6 = iVar1 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar8) {
          iVar7 = iVar8;
        }
        if (iVar6 <= iVar8) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar5 = puVar9[lVar13 + lVar11 + 1];
          if (uVar5 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar7 - lVar13 == lVar11) goto LAB_1415ae30c;
        }
        uVar16 = (ulonglong)(iVar8 + (int)lVar11 + 1);
        uVar15 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar10 = uVar14 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar10 != 0) {
        for (; uVar10 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar8 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar1);
  }
LAB_1415ae30c:
  if ((*(longlong *)(param_1 + 0xb8) != 0) && (0 < *(int *)(param_1 + 0x60))) {
    lVar13 = 0;
    do {
      (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x88))
                (*(longlong **)(param_1 + 0xb8),
                 *(undefined4 *)(*(longlong *)(param_1 + 0x58) + lVar13 * 4));
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)(param_1 + 0x60));
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 100) != 0) {
    FUN_14480809c(param_1 + 0x58,0);
  }
  FUN_145cb7016((longlong *)(param_1 + 8));
  return;
}



// FUNCTION 1415ae37e FUN_1415ae37e body=191 status=ok
// SIG undefined FUN_1415ae37e(void)

void FUN_1415ae37e(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac74710;
  param_1[5] = &PTR_FUN_14ac75110;
  param_1[6] = &PTR_LAB_14ac75150;
  param_1[0x55] = &PTR_FUN_14ac751a0;
  param_1[0x56] = &PTR_FUN_14ac75220;
  param_1[0x57] = &PTR_FUN_14ac75230;
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (param_1[0x123] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a322(param_1 + 0x11b);
  param_1[0xcc] = 0;
  FUN_14076ba36(param_1 + 0xcd);
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  FUN_147f3a534(param_1 + 0xc4);
  FUN_14006e5d0(param_1);
  return;
}



// FUNCTION 1415ae43e FUN_1415ae43e body=57 status=ok
// SIG undefined FUN_1415ae43e(void)

void FUN_1415ae43e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb58858 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb58858 = FUN_140002ddd(FUN_1464c29de,uVar1,L"GbxActorPartDef_Niagara");
  }
  return;
}



// FUNCTION 1415ae478 FUN_1415ae478 body=1437 status=ok
// SIG undefined FUN_1415ae478(void)

bool FUN_1415ae478(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  void *_Src;
  int iVar3;
  char cVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong *local_c8;
  undefined4 local_c0;
  longlong *local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined2 *local_80;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_1415aea16(*param_2,(int)param_2[1]);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    FUN_148fb35ae(param_2);
  }
  iVar8 = 0;
  local_f0 = param_1;
  do {
    FUN_140002266(&local_80,L"Achievement_%d_Id",iVar8);
    local_e8 = (void *)0x0;
    uStack_e0 = 0;
    puVar10 = &DAT_149dfb77a;
    if (local_78 != 0) {
      puVar10 = local_80;
    }
    puVar6 = &DAT_149dfb77a;
    if (*(int *)(param_1 + 0x18) != 0) {
      puVar6 = *(undefined2 **)(param_1 + 0x10);
    }
    local_f8 = param_1;
    cVar4 = FUN_1449da20c(DAT_14c872ce0,puVar6,puVar10,&local_e8);
    if (cVar4 == '\0') {
      FUN_140056680(&local_70,&DAT_149dfb77a);
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      local_70 = (undefined4)local_e8;
      uStack_6c = local_e8._4_4_;
      iStack_68 = (int)uStack_e0;
      uStack_64 = uStack_e0._4_4_;
    }
    if (local_80 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar3 = iStack_68;
    if (1 < iStack_68) {
      uStack_d0 = 0;
      local_e8 = (void *)0x0;
      uStack_e0 = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      local_c8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_c0 = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      local_b8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_b0 = 0;
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x110) < DAT_14c844850) {
        FUN_144b3d300(&DAT_14c844850);
        if (DAT_14c844850 == -1) {
          DAT_14c844840 = (longlong *)FUN_14001cc68(0x30,0x10);
          DAT_14c844840[1] = 0;
          *DAT_14c844840 = (longlong)&PTR_FUN_149e19310;
          DAT_14c844840[2] = -1;
          DAT_14c844840[3] = 0;
          DAT_14c844840[4] = 0;
          DAT_14c844840[5] = 0;
          if (DAT_14c844840 != (longlong *)0x0) {
            LOCK();
            *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
            UNLOCK();
          }
          DAT_14c844848 = 0;
          atexit(FUN_142760bef);
          _Init_thread_footer(&DAT_14c844850);
        }
      }
      local_a8 = DAT_14c844840;
      if (DAT_14c844840 != (longlong *)0x0) {
        if (*(code **)(*DAT_14c844840 + 8) == FUN_144907e24) {
          LOCK();
          *(int *)(DAT_14c844840 + 1) = (int)DAT_14c844840[1] + 1;
          UNLOCK();
        }
        else {
          (**(code **)(*DAT_14c844840 + 8))();
        }
      }
      local_a0 = 0;
      uStack_90 = 0;
      iVar9 = iStack_68 + -1;
      if (iStack_68 == 0) {
        iVar9 = 0;
      }
      FUN_1402980a2(&local_e8,CONCAT44(uStack_6c,local_70),iVar9);
      local_d8 = 0;
      local_88 = 0;
      iVar9 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar9 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar9 + 1U) {
        FUN_145fd0bfc(param_2,iVar9);
      }
      _Src = local_e8;
      lVar2 = *param_2;
      lVar5 = (longlong)iVar9 * 0x68;
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      *(undefined8 *)(lVar2 + lVar5) = 0;
      lVar7 = (longlong)(int)uStack_e0;
      *(int *)(lVar2 + 8 + lVar5) = (int)uStack_e0;
      if (lVar7 == 0) {
        *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uStack_e0 & 0xffffffff,0);
        memcpy((void *)*puVar1,_Src,lVar7 * 2);
      }
      *(undefined4 *)(puVar1 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)puVar1 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(puVar1 + 3) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)puVar1 + 0x1c) = uStack_d0._4_4_;
      puVar1[4] = local_c8;
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 8))();
      }
      *(undefined4 *)(puVar1 + 5) = local_c0;
      puVar1[6] = local_b8;
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 8))();
      }
      param_1 = local_f0;
      *(undefined4 *)(puVar1 + 7) = local_b0;
      puVar1[8] = local_a8;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 8))();
      }
      *(undefined4 *)(puVar1 + 9) = local_a0;
      *(undefined4 *)(puVar1 + 10) = local_98;
      *(undefined4 *)((longlong)puVar1 + 0x54) = uStack_94;
      *(undefined4 *)(puVar1 + 0xb) = (undefined4)uStack_90;
      *(undefined4 *)((longlong)puVar1 + 0x5c) = uStack_90._4_4_;
      *(undefined1 *)(puVar1 + 0xc) = local_88;
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x10))();
      }
      if (local_b8 != (longlong *)0x0) {
        (**(code **)(*local_b8 + 0x10))();
      }
      if (local_c8 != (longlong *)0x0) {
        (**(code **)(*local_c8 + 0x10))();
      }
      if (local_e8 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    if (CONCAT44(uStack_6c,local_70) != 0) {
      FUN_1400020a8();
    }
    iVar8 = iVar8 + 1;
  } while (1 < iVar3);
  if ((local_60 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return iVar8 != 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415aea16 FUN_1415aea16 body=92 status=ok
// SIG undefined FUN_1415aea16(void)

void FUN_1415aea16(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x10))();
      }
      if ((longlong *)plVar1[-2] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-2] + 0x10))();
      }
      if ((longlong *)plVar1[-4] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[-4] + 0x10))();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xd;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1415aea72 FUN_1415aea72 body=437 status=ok
// SIG undefined FUN_1415aea72(void)

void FUN_1415aea72(longlong param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  bool bVar9;
  
  if (((param_1 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) &&
     (lVar5 = FUN_1447210f0(), lVar5 != 0)) {
    if (*(longlong *)(lVar5 + 0x1f0) == 0) {
      lVar5 = lVar5 + 0x460;
    }
    else {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x1f0) + 0xf8);
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x30,0x10);
    *puVar6 = &PTR_FUN_14ac88b40;
    *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(puVar6 + 1) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar4 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar7 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar7);
      }
      LOCK();
      iVar4 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar7;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar7;
      }
    }
    *(int *)((longlong)puVar6 + 0xc) = iVar4;
    iVar4 = param_3[1];
    iVar7 = param_3[2];
    iVar3 = param_3[3];
    *(int *)(puVar6 + 2) = *param_3;
    *(int *)((longlong)puVar6 + 0x14) = iVar4;
    *(int *)(puVar6 + 3) = iVar7;
    *(int *)((longlong)puVar6 + 0x1c) = iVar3;
    lVar8 = *(longlong *)(param_3 + 4);
    puVar6[4] = lVar8;
    if ((lVar8 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar8);
      lVar8 = *(longlong *)(param_3 + 4);
    }
    puVar6[5] = param_2;
    FUN_140b1330e(lVar5,lVar8,param_3[1],puVar6);
    return;
  }
  if (((*param_3 != -1) && (plVar2 = *(longlong **)(param_3 + 4), plVar2 != (longlong *)0x0)) &&
     (lVar5 = FUN_1400796d0(plVar2[2],*(undefined8 *)(param_3 + 2),1), lVar5 != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001415aebad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x248))(plVar2,lVar5,param_3,*(code **)(*plVar2 + 0x248));
    return;
  }
  return;
}



// FUNCTION 1415aec28 FUN_1415aec28 body=598 status=ok
// SIG undefined FUN_1415aec28(void)

void FUN_1415aec28(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b7606a0;
  param_1[0xa6] = &PTR_FUN_14b760e60;
  param_1[0xa7] = &PTR_FUN_14b760ea0;
  if (param_1[0x197] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x196];
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x30))(plVar3,1);
  }
  if (param_1[0x194] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x172);
  if (param_1[0x170] != 0) {
    FUN_1400020a8();
  }
  FUN_1409def00(param_1 + 0x14e);
  FUN_145c97d1a(param_1 + 0xd5);
  FUN_1465ac9aa(param_1 + 0xcb);
  plVar3 = param_1 + 0xc9;
  if (*(int *)(param_1 + 0xca) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415aed1f;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0xca) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415aed1f:
  plVar3 = (longlong *)param_1[200];
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
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb9],*(undefined4 *)(param_1 + 0xba));
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xb8];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))();
    }
  }
  FUN_144760e21(param_1[0xb4],*(undefined4 *)(param_1 + 0xb5));
  if (param_1[0xb4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xb1],*(undefined4 *)(param_1 + 0xb2));
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xae],*(undefined4 *)(param_1 + 0xaf));
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xab],*(undefined4 *)(param_1 + 0xac));
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xa8],*(undefined4 *)(param_1 + 0xa9));
  if (param_1[0xa8] != 0) {
    FUN_1400020a8();
  }
  FUN_1458825c2(param_1);
  return;
}



// FUNCTION 1415aee7e FUN_1415aee7e body=101 status=ok
// SIG undefined FUN_1415aee7e(void)

undefined * FUN_1415aee7e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcbc28) {
    FUN_144b3d300(&DAT_14cbcbc28);
    if (DAT_14cbcbc28 == -1) {
      FUN_145fd2ac0();
      atexit((_func_5014 *)&LAB_14417d713);
      _Init_thread_footer(&DAT_14cbcbc28);
    }
  }
  return &DAT_14cbcbb90;
}



// FUNCTION 1415aeee4 FUN_1415aeee4 body=101 status=ok
// SIG undefined FUN_1415aeee4(void)

undefined * FUN_1415aeee4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbcc788) {
    FUN_144b3d300(&DAT_14cbcc788);
    if (DAT_14cbcc788 == -1) {
      FUN_145fd2b44();
      atexit((_func_5014 *)&LAB_144183a74);
      _Init_thread_footer(&DAT_14cbcc788);
    }
  }
  return &DAT_14cbcc6f0;
}



// FUNCTION 1415aef4a FUN_1415aef4a body=496 status=ok
// SIG undefined FUN_1415aef4a(void)

void FUN_1415aef4a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_70;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)((longlong)plVar10 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_58 = param_1 + 2;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = param_1;
    if (local_70._4_4_ < (int)local_58[3]) {
      iVar7 = local_70._4_4_;
      local_70 = uVar5;
      do {
        lVar3 = *local_88;
        lVar12 = (longlong)iVar7 * 0x68;
        lVar4 = *(longlong *)(lVar3 + 0x10 + lVar12);
        uVar5 = *(undefined8 *)(lVar4 + 0x40);
        uVar6 = *(undefined8 *)(lVar4 + 0x48);
        iVar8 = FUN_144a78877((uint)((ulonglong)uVar5 >> 0x20) ^ (uint)uVar5,
                              (int)((ulonglong)uVar6 >> 0x20) * 0x17 + (int)uVar6);
        uVar9 = (longlong)iVar8 & (longlong)(int)param_1[9] - 1U;
        iVar8 = (int)uVar9;
        *(int *)(lVar3 + 100 + lVar12) = iVar8;
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x60 + lVar12) =
             *(undefined4 *)((longlong)plVar10 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar10 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar10 = plVar1;
        }
        *(int *)((longlong)plVar10 + ((longlong)iVar8 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar7 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < (int)local_78[3]);
    }
  }
  local_70 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415af13c FUN_1415af13c body=1463 status=ok
// SIG undefined FUN_1415af13c(void)

void FUN_1415af13c(longlong param_1,undefined8 param_2,char param_3,uint param_4,longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int *piVar14;
  undefined1 auStack_e8 [32];
  undefined2 *local_c8;
  undefined2 local_c0 [2];
  undefined4 local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  byte local_78;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (((param_5 != 0) && (param_3 == '\0')) && ((longlong)*(int *)(param_1 + 0x60) != 0)) {
    puVar12 = (undefined8 *)(*(longlong *)(param_1 + 0x58) + 0x80);
    lVar13 = (longlong)*(int *)(param_1 + 0x60) * 0x88;
    do {
      cVar6 = FUN_140e8a950(puVar12 + -0xf,param_5);
      if (cVar6 != '\0') {
        if (puVar12 + -0x10 != (undefined8 *)0x0) {
          FUN_1402815f4(param_1,&local_b8);
          puVar4 = *(undefined8 **)(local_b8 + 0x1e0);
          AcquireSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
          plVar2 = uStack_b0;
          *(int *)(puVar4 + 5) = *(int *)(puVar4 + 5) + 1;
          if (uStack_b0 != (longlong *)0x0) {
            LOCK();
            plVar1 = uStack_b0 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*uStack_b0)(uStack_b0);
              LOCK();
              piVar14 = (int *)((longlong)plVar2 + 0xc);
              *piVar14 = *piVar14 + -1;
              UNLOCK();
              if (*piVar14 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          iVar7 = *(int *)(puVar12 + -0xe);
          piVar14 = (int *)*puVar4;
          *(int *)(puVar4 + 2) = *(int *)(puVar4 + 2) + 2;
          if ((longlong)*(int *)(puVar4 + 1) == 0) goto LAB_1415af402;
          lVar13 = (longlong)*(int *)(puVar4 + 1) * 0xd8;
          goto LAB_1415af23a;
        }
        break;
      }
      puVar12 = puVar12 + 0x11;
      lVar13 = lVar13 + -0x88;
    } while (lVar13 != 0);
  }
  goto LAB_1415af40b;
  while( true ) {
    piVar14 = piVar14 + 0x36;
    lVar13 = lVar13 + -0xd8;
    if (lVar13 == 0) break;
LAB_1415af23a:
    if (*piVar14 == iVar7) {
      if (piVar14 == (int *)0x0) break;
      iVar7 = piVar14[0x1f];
      if ((char)piVar14[0x1e] == '\0') {
        if (iVar7 == 0) {
          iVar7 = 0;
          goto LAB_1415af26c;
        }
      }
      else {
LAB_1415af26c:
        *(undefined1 *)(piVar14 + 0x1e) = 0;
        iVar7 = iVar7 + 1;
        piVar14[0x1f] = iVar7;
      }
      iVar10 = piVar14[0x2b];
      if (((float)piVar14[0x2a] != 0.0) || (NAN((float)piVar14[0x2a]))) {
LAB_1415af295:
        piVar14[0x2a] = 0;
        piVar14[0x2b] = iVar10 + 1;
      }
      else if (iVar10 == 0) {
        iVar10 = 0;
        goto LAB_1415af295;
      }
      if (9 < (byte)param_4) break;
      if ((param_4 & 0xff) == 2) {
        FUN_141178df0(piVar14);
        if ((char)piVar14[0x26] == '\0') {
          iVar7 = piVar14[0x27] + 1;
LAB_1415af2df:
          *(undefined1 *)(piVar14 + 0x26) = 1;
          piVar14[0x27] = iVar7;
        }
        else if (piVar14[0x27] == 0) {
          iVar7 = 1;
          goto LAB_1415af2df;
        }
        if ((char)piVar14[0x20] == '\0') {
          if (piVar14[0x21] == 0) {
            iVar7 = 1;
            goto LAB_1415af630;
          }
        }
        else {
          iVar7 = piVar14[0x21] + 1;
LAB_1415af630:
          *(undefined1 *)(piVar14 + 0x20) = 0;
          piVar14[0x21] = iVar7;
        }
        lVar13 = FUN_1400f3ad8(param_1 + 0x44);
        if (lVar13 == 0) break;
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) break;
        uVar9 = FUN_1401b4c98(lVar13);
        lVar8 = FUN_144a61814(uVar9,puVar12);
        if (lVar8 != 0) {
          FUN_1405a424c(uVar9,*puVar12);
        }
        *puVar12 = 0;
        uStack_b0 = (longlong *)0x0;
        local_b8 = param_1;
        FUN_14485c47a(&uStack_b0,param_5);
        FUN_1415af6f4(puVar12 + -2,param_1,&local_b8);
        uVar9 = FUN_1401b4c98(lVar13);
        uVar3 = *(undefined4 *)(param_1 + 0xa0);
        local_b8 = 0;
        uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
        FUN_14487d8d8(&local_b8,puVar12 + -2);
        local_78 = 1;
        local_c8 = local_c0;
        local_c0[0] = 0;
        local_bc = 0xbf800000;
        FUN_1406f4044(uVar9,puVar12,&local_b8,uVar3);
      }
      else {
        if ((0x202U >> (param_4 & 0x1f) & 1) == 0) {
          if ((0x178U >> (param_4 & 0x1f) & 1) != 0) {
            *(undefined1 *)(piVar14 + 0x1e) = 1;
            piVar14[0x1f] = iVar7 + 1;
          }
          break;
        }
        FUN_141178df0(piVar14);
        if ((char)piVar14[0x22] == '\0') {
          iVar7 = piVar14[0x23] + 1;
LAB_1415af46e:
          *(undefined1 *)(piVar14 + 0x22) = 1;
          piVar14[0x23] = iVar7;
        }
        else if (piVar14[0x23] == 0) {
          iVar7 = 1;
          goto LAB_1415af46e;
        }
        if ((char)piVar14[0x20] == '\0') {
          if (piVar14[0x21] == 0) {
            iVar7 = 1;
            goto LAB_1415af494;
          }
        }
        else {
          iVar7 = piVar14[0x21] + 1;
LAB_1415af494:
          *(undefined1 *)(piVar14 + 0x20) = 0;
          piVar14[0x21] = iVar7;
        }
        lVar13 = FUN_1400f3ad8(param_1 + 0x44);
        if (lVar13 == 0) break;
        lVar8 = FUN_144a5dd5e();
        if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar8 + 0x38) * 8) != lVar8 + 0x30)) break;
        FUN_141178e82(puVar12 + -0x10,piVar14);
        uVar9 = FUN_1401b4c98(lVar13);
        lVar8 = FUN_144a61814(uVar9,puVar12);
        if (lVar8 != 0) {
          FUN_1405a424c(uVar9,*puVar12);
        }
        *puVar12 = 0;
        plVar2 = puVar12 + -2;
        uStack_b0 = (longlong *)0x0;
        local_b8 = param_1;
        FUN_14485c47a(&uStack_b0,param_5);
        if (*(int *)(puVar12 + -1) != 3) {
          FUN_1446efa72(plVar2,0,3,0x10);
          *(undefined4 *)(puVar12 + -1) = 3;
        }
        puVar5 = (undefined8 *)*plVar2;
        *puVar5 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 1;
        lVar8 = DAT_14c758608 + 1;
        if (lVar11 == 0) {
          LOCK();
          UNLOCK();
          lVar11 = DAT_14c758608 + 2;
          lVar8 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar8;
        puVar5[2] = lVar11;
        *puVar5 = &PTR_FUN_14b9a8fa0;
        puVar5[3] = 0;
        FUN_14485c47a(puVar5 + 3,param_1);
        *(undefined4 *)(puVar5 + 4) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar5 + 0x24) = local_b8._4_4_;
        *(undefined4 *)(puVar5 + 5) = (undefined4)uStack_b0;
        *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_b0._4_4_;
        uVar9 = FUN_1401b4c98(lVar13);
        uVar3 = *(undefined4 *)(param_1 + 0xa0);
        local_b8 = 0;
        uStack_b0 = (longlong *)((ulonglong)uStack_b0 & 0xffffffff00000000);
        FUN_14487d8d8(&local_b8,plVar2);
        local_78 = 1;
        local_c8 = local_c0;
        local_c0[0] = 0;
        local_bc = 0xbf800000;
        FUN_1406f4044(uVar9,puVar12,&local_b8,uVar3);
      }
      (*(code *)(&PTR_LAB_14a1c87a0)[local_78])(&local_b8);
      break;
    }
  }
LAB_1415af402:
  ReleaseSRWLockExclusive((PSRWLOCK)(puVar4 + 6));
LAB_1415af40b:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415af6f4 FUN_1415af6f4 body=282 status=ok
// SIG undefined FUN_1415af6f4(void)

void FUN_1415af6f4(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  
  if ((int)param_1[1] != 3) {
    FUN_1446efa72(param_1,0,3,0x10);
    *(undefined4 *)(param_1 + 1) = 3;
  }
  puVar2 = (undefined8 *)*param_1;
  *puVar2 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar5 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar5 == 0) {
    LOCK();
    UNLOCK();
    lVar5 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  puVar2[2] = lVar5;
  *puVar2 = &PTR_FUN_14b9a9010;
  puVar2[3] = 0;
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(puVar2 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar4 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar4 = iVar6;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  uVar3 = param_3[1];
  puVar2[4] = *param_3;
  puVar2[5] = uVar3;
  return;
}



// FUNCTION 1415af80e FUN_1415af80e body=333 status=ok
// SIG undefined FUN_1415af80e(void)

/* WARNING: Removing unreachable block (ram,0x0001415af94e) */
/* WARNING: Removing unreachable block (ram,0x0001415af955) */

void FUN_1415af80e(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58;
  undefined4 uStack_57;
  undefined4 uStack_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140056680(&local_88);
  FUN_140056680(&local_78,param_3);
  uStack_64 = param_5;
  uStack_60 = (undefined4)param_6;
  uStack_5c = (undefined4)((ulonglong)param_6 >> 0x20);
  local_58 = (undefined1)param_8;
  uStack_57 = (undefined4)((ulonglong)param_8 >> 8);
  uStack_53 = CONCAT13(param_7,(int3)((ulonglong)param_8 >> 0x28));
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  local_68 = param_4;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_145fd6254(param_1,iVar2);
  }
  lVar3 = *param_1;
  lVar4 = (longlong)iVar2 * 0x40;
  *(undefined8 *)(lVar3 + lVar4) = 0;
  *(undefined8 *)(lVar3 + lVar4) = local_88;
  *(undefined4 *)(lVar3 + 8 + lVar4) = (undefined4)local_80;
  *(undefined4 *)(lVar3 + 0xc + lVar4) = local_80._4_4_;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = 0;
  *(undefined8 *)(lVar3 + 0x10 + lVar4) = local_78;
  *(undefined4 *)(lVar3 + 0x18 + lVar4) = (undefined4)local_70;
  *(undefined4 *)(lVar3 + 0x1c + lVar4) = local_70._4_4_;
  puVar1 = (undefined4 *)(lVar3 + 0x29 + lVar4);
  *puVar1 = CONCAT13((undefined1)uStack_5c,uStack_60._1_3_);
  puVar1[1] = CONCAT13(local_58,uStack_5c._1_3_);
  puVar1[2] = uStack_57;
  puVar1[3] = uStack_53;
  puVar1 = (undefined4 *)(lVar3 + 0x20 + lVar4);
  *puVar1 = local_68;
  puVar1[1] = uStack_64;
  puVar1[2] = uStack_60;
  puVar1[3] = uStack_5c;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415af95c FUN_1415af95c body=192 status=ok
// SIG undefined FUN_1415af95c(void)

longlong FUN_1415af95c(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0xb0) == '\x01') {
    *(undefined1 *)(param_1 + 0xb0) = 0;
  }
  FUN_14017d40e(param_1 + 0x58);
  FUN_14017d442(param_1 + 0x38);
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar4 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar4 + 8);
      LOCK();
      uVar2 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar2 >> 0x1e & 1) == 0) {
        bVar3 = *(byte *)(lVar4 + 0xd);
        plVar5 = (longlong *)FUN_14001cc68(0x10,8);
        plVar5[1] = lVar4;
        plVar7 = DAT_14ca843c0;
        plVar6 = DAT_14ca843c8;
        if ((bVar3 & 2) == 0) {
          do {
            *plVar5 = (longlong)plVar7;
            LOCK();
            bVar8 = plVar7 != DAT_14ca843c0;
            plVar6 = plVar5;
            if (bVar8) {
              plVar7 = DAT_14ca843c0;
              plVar6 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar6;
            UNLOCK();
          } while (bVar8);
        }
        else {
          do {
            *plVar5 = (longlong)plVar6;
            LOCK();
            bVar8 = plVar6 != DAT_14ca843c8;
            plVar7 = plVar5;
            if (bVar8) {
              plVar6 = DAT_14ca843c8;
              plVar7 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar7;
            UNLOCK();
          } while (bVar8);
        }
      }
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1415afa1c FUN_1415afa1c body=423 status=ok
// SIG undefined FUN_1415afa1c(void)

undefined * FUN_1415afa1c(void)

{
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  wchar_t *local_70;
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
  if (DAT_14c846b14 == '\x01') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c926f30) {
      FUN_144b3d300(&DAT_14c926f30);
      if (DAT_14c926f30 == -1) {
        FUN_1413288e0(&DAT_14c926ca8);
        atexit(FUN_1427ac032);
        _Init_thread_footer(&DAT_14c926f30);
      }
    }
    if (*(code **)(DAT_14c926ca8 + 0x28) != (code *)&LAB_144aff468) {
      (**(code **)(DAT_14c926ca8 + 0x28))(&DAT_14c926ca8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca6dd30) {
    FUN_144b3d300(&DAT_14ca6dd30);
    if (DAT_14ca6dd30 == -1) {
      FUN_145fd6568(local_20);
      local_30 = 0;
      local_38 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_68 = 0;
      local_70 = L"EtcParameters";
      local_78 = L"FEtcParameters";
      local_50 = 0x180;
      local_58 = 0x3a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca6dcb0,1,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143120071);
      _Init_thread_footer(&DAT_14ca6dd30);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca6dcb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415afbc4 FUN_1415afbc4 body=277 status=ok
// SIG undefined FUN_1415afbc4(void)

void FUN_1415afbc4(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeadf0,local_58,local_54,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeae00,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415afcda FUN_1415afcda body=277 status=ok
// SIG undefined FUN_1415afcda(void)

void FUN_1415afcda(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeb280,local_58,local_54,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeb290,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415afdf0 FUN_1415afdf0 body=2629 status=ok
// SIG undefined FUN_1415afdf0(void)

undefined8 * FUN_1415afdf0(longlong param_1)

{
  ulonglong *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  char cVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  longlong *plVar22;
  longlong *plVar23;
  bool bVar24;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  longlong *local_80;
  int local_74;
  ulonglong *local_70;
  longlong *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar11 = (undefined8 *)FUN_14001cc68(0x720,0x10);
  FUN_1406ff4f8(puVar11,param_1,0);
  *puVar11 = &PTR_FUN_14a890910;
  *(undefined4 *)(puVar11 + 0x54) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x2a4) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x2a6) = 0;
  puVar11[0x53] = &PTR_FUN_14aa69e90;
  *(undefined4 *)(puVar11 + 0x56) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x2b4) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x2b6) = 0;
  puVar11[0x57] = 0;
  puVar11[0x55] = &PTR_FUN_14aa6dba0;
  *(undefined4 *)(puVar11 + 0x59) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x2cc) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x2ce) = 0;
  puVar11[0x5a] = 0;
  puVar11[0x58] = &DAT_14aa6dc00;
  puVar11[0x5b] = 0;
  puVar11[0x5c] = 0;
  puVar11[0x5d] = 0;
  puVar11[0x5e] = 0;
  puVar11[0x5f] = 0;
  puVar11[0x60] = 0;
  puVar11[0x62] = 0;
  *(undefined2 *)(puVar11 + 99) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x31a) = 1;
  *(undefined4 *)(puVar11 + 0x65) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x32c) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x32e) = 0;
  puVar11[0x66] = 0;
  puVar11[100] = &PTR_FUN_14aa50910;
  puVar11[0x67] = 0;
  puVar11[0x68] = 0;
  puVar11[0x69] = 0;
  puVar11[0x6a] = 0;
  *(undefined1 *)(puVar11 + 0x6b) = 1;
  *(undefined4 *)(puVar11 + 0x6d) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x36c) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x36e) = 0;
  puVar11[0x6e] = 0;
  puVar11[0x6c] = &PTR_FUN_14aa61a50;
  puVar11[0x6f] = 0;
  puVar11[0x70] = 0;
  puVar11[0x71] = 0;
  puVar11[0x72] = 0;
  *(undefined1 *)(puVar11 + 0x73) = 1;
  *(undefined4 *)(puVar11 + 0x75) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x3ac) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x3ae) = 0;
  puVar11[0x76] = 0;
  puVar11[0x74] = &PTR_FUN_14a83cdc0;
  puVar11[0x77] = 0;
  puVar11[0x78] = 0;
  uVar5 = *(undefined1 *)(puVar11[0x42] + 8);
  *(undefined4 *)(puVar11 + 0x7a) = 0xffffffff;
  *(undefined1 *)((longlong)puVar11 + 0x3d4) = uVar5;
  *(undefined2 *)((longlong)puVar11 + 0x3d5) = 1;
  puVar11[0x8b] = 0;
  puVar11[0x8c] = 0x800000000;
  puVar11[0x91] = 0;
  puVar11[0x92] = 0x200000000;
  puVar11[0x99] = 0;
  puVar11[0x9a] = 0x300000000;
  puVar11[0x9d] = 0;
  puVar11[0x9b] = 0;
  puVar11[0x9c] = 0;
  *(undefined4 *)(puVar11 + 0x9e) = 0x1ffffff;
  puVar11[0x79] = &PTR_FUN_14a1ca480;
  *(undefined4 *)(puVar11 + 0xad) = 0;
  puVar11[0x9f] = 0;
  puVar11[0xa0] = 0;
  puVar11[0xa1] = 0;
  puVar11[0xa2] = 0;
  puVar11[0xa3] = 0;
  puVar11[0xa4] = 0;
  *(undefined4 *)((longlong)puVar11 + 0x56c) = 4;
  puVar11[0xb4] = 0;
  puVar11[0xb5] = 0;
  puVar11[0xb2] = 0;
  puVar11[0xb3] = 0;
  puVar11[0xb0] = 0;
  puVar11[0xb1] = 0;
  puVar11[0xae] = 0;
  puVar11[0xaf] = 0;
  *(undefined4 *)(puVar11 + 0xb6) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x5b4) = 0xff;
  *(undefined1 *)((longlong)puVar11 + 0x5b6) = 0;
  puVar11[0xbb] = 0;
  puVar11[0xb9] = 0;
  puVar11[0xba] = 0;
  puVar11[0xb7] = 0;
  puVar11[0xb8] = 0;
  *(undefined4 *)(puVar11 + 0xbc) = 0xffffffff;
  *(undefined1 *)((longlong)puVar11 + 0x5e4) = 0;
  puVar11[0xbd] = 0;
  puVar11[0xbe] = 0;
  *(undefined4 *)(puVar11 + 0xbf) = *(undefined4 *)(param_1 + 0x644);
  puVar11[0xc0] = 0;
  puVar11[0xc3] = *(undefined8 *)(param_1 + 0x638);
  puVar11[0xc4] = 0;
  puVar11[0xc5] = 0;
  plVar13 = *(longlong **)(param_1 + 0x620);
  puVar11[0xc6] = plVar13;
  if (plVar13 != (longlong *)0x0) {
    (**(code **)(*plVar13 + 8))();
  }
  *(undefined4 *)(puVar11 + 199) = *(undefined4 *)(param_1 + 0x628);
  fVar3 = *(float *)(param_1 + 0x650);
  fVar4 = *(float *)(param_1 + 0x654);
  *(float *)(puVar11 + 200) = *(float *)(param_1 + 0x648) * fVar3 * fVar4;
  *(float *)((longlong)puVar11 + 0x644) = fVar3 * *(float *)(param_1 + 0x64c) * fVar4;
  *(undefined4 *)(puVar11 + 0xc9) = *(undefined4 *)(param_1 + 0x658);
  *(undefined4 *)((longlong)puVar11 + 0x64c) = *(undefined4 *)(param_1 + 0x65c);
  *(undefined1 *)(puVar11 + 0xca) = *(undefined1 *)(param_1 + 0x640);
  *(undefined1 *)((longlong)puVar11 + 0x651) = *(undefined1 *)(param_1 + 0x641);
  *(byte *)((longlong)puVar11 + 0x652) = *(byte *)(param_1 + 0x660) & 1;
  *(undefined4 *)(puVar11 + 0xcc) = 0xffffffff;
  *(undefined2 *)((longlong)puVar11 + 0x664) = 0x105;
  *(undefined1 *)((longlong)puVar11 + 0x666) = 0;
  puVar11[0xcb] = &PTR_FUN_14a3d4720;
  puVar11[0xce] = 0;
  puVar11[0xcf] = 0;
  puVar11[0xcd] = &PTR_FUN_14a3d4750;
  *(undefined1 *)(puVar11 + 0xd0) = 0;
  puVar11[0xd1] = 0xffffffffffffffff;
  puVar11[0xd2] = 0;
  puVar11[0xd3] = 0;
  *(undefined8 *)((longlong)puVar11 + 0x69e) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6a6) = 0;
  *(undefined1 *)((longlong)puVar11 + 0x6ae) = 1;
  puVar11[0xdd] = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6af) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6b7) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6bf) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6c7) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6cf) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6d7) = 0;
  *(undefined8 *)((longlong)puVar11 + 0x6dc) = 0;
  *(undefined4 *)(puVar11 + 0xde) = 0xffffffff;
  *(undefined1 *)((longlong)puVar11 + 0x6f4) = 0xff;
  puVar11[0xdf] = 0xffffffff00000000;
  *(undefined4 *)(puVar11 + 0xe0) = 0xffffffff;
  puVar11[0xe1] = 0;
  puVar11[0xe2] = 0;
  *(undefined4 *)(puVar11 + 2) = 0x3f800000;
  *(undefined4 *)((longlong)puVar11 + 0x14) = 0;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(undefined4 *)((longlong)puVar11 + 0x1c) = 0x3f800000;
  if (*(longlong **)(param_1 + 0x630) == (longlong *)0x0) {
LAB_1415b05e4:
    FUN_14003fbd6();
    plVar13 = DAT_14caea080;
  }
  else {
    local_a8 = 0;
    uStack_a0 = 0;
    lVar12 = (**(code **)(**(longlong **)(param_1 + 0x630) + 0x2c0))();
    if ((1 < *(byte *)(lVar12 + 0x128)) ||
       (plVar13 = *(longlong **)(param_1 + 0x630),
       *(longlong **)(param_1 + 0x630) == (longlong *)0x0)) goto LAB_1415b05e4;
  }
  puVar11[0xc2] = plVar13;
  local_b8 = 0;
  uStack_b0 = 0;
  plVar13 = (longlong *)(**(code **)(*plVar13 + 0x2c0))();
  uVar6 = *(undefined4 *)(puVar11[0x42] + 8);
  uVar14 = (**(code **)(*plVar13 + 0x2b0))(plVar13);
  FUN_14582fb3e(plVar13,&local_70,uVar14,uVar6);
  puVar11[0xc0] = puVar11[0xc0] | (ulonglong)local_70;
  bVar9 = (byte)((ulonglong)local_70 >> 0x10);
  if (bVar9 <= *(byte *)((longlong)puVar11 + 0x602)) {
    bVar9 = *(byte *)((longlong)puVar11 + 0x602);
  }
  *(byte *)((longlong)puVar11 + 0x602) = bVar9;
  lVar12 = DAT_14cad3738;
  uVar18 = puVar11[0xc3];
  if (((uVar18 == 0) || (*(char *)(uVar18 + 0x30) != '\0')) || (DAT_14cad3738 == 0))
  goto LAB_1415b04d5;
  uVar7 = puVar11[0xc2];
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_14cad3738 + 0x10);
  EnterCriticalSection(lpCriticalSection);
  plVar13 = (longlong *)(lVar12 + 0x48);
  if (*(int *)(lVar12 + 0x50) != *(int *)(lVar12 + 0x7c)) {
    uVar10 = ((uint)(uVar18 >> 0x14) & 0xffff ^ (uint)(uVar18 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    uVar15 = ((uint)(uVar7 >> 0x14) & 0xffff ^ (uint)(uVar7 >> 4)) * -0x7a143595;
    uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
    uVar15 = uVar10 >> 0xd ^ (uVar15 >> 0x10 ^ uVar15) - uVar10;
    uVar19 = uVar15 << 8 ^ (-0x61c88647 - uVar10) - uVar15;
    uVar21 = uVar19 >> 0xd ^ (uVar10 - uVar15) - uVar19;
    uVar10 = uVar21 >> 0xc ^ (uVar15 - uVar19) - uVar21;
    uVar15 = uVar10 << 0x10 ^ (uVar19 - uVar21) - uVar10;
    uVar19 = uVar15 >> 5 ^ (uVar21 - uVar10) - uVar15;
    uVar21 = uVar19 >> 3 ^ (uVar10 - uVar15) - uVar19;
    uVar10 = uVar21 << 10 ^ (uVar15 - uVar19) - uVar21;
    lVar17 = lVar12 + 0x80;
    if (*(longlong *)(lVar12 + 0x88) != 0) {
      lVar17 = *(longlong *)(lVar12 + 0x88);
    }
    iVar16 = *(int *)(lVar17 + (ulonglong)
                               (*(int *)(lVar12 + 0x90) - 1U &
                               (uVar10 >> 0xf ^ uVar19 - (uVar21 + uVar10))) * 4);
    if (iVar16 != -1) {
      do {
        puVar1 = (ulonglong *)(*plVar13 + (longlong)iVar16 * 0x28);
        if ((*puVar1 == uVar7) && (*(ulonglong *)(*plVar13 + 8 + (longlong)iVar16 * 0x28) == uVar18)
           ) {
          if (puVar1 != (ulonglong *)0x0) {
            uVar20 = puVar1[2];
            plVar22 = (longlong *)puVar1[3];
            if (plVar22 != (longlong *)0x0) {
              LOCK();
              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
              UNLOCK();
            }
            plVar23 = plVar22;
            if (uVar20 == 0) goto LAB_1415b0604;
            goto LAB_1415b0478;
          }
          break;
        }
        iVar16 = (int)puVar1[4];
      } while (iVar16 != -1);
    }
  }
  plVar23 = (longlong *)0x0;
LAB_1415b0604:
  lVar12 = FUN_14001cc68(0x28,0x10);
  FUN_145fd9488(lVar12,uVar7,uVar18);
  local_88 = lVar12;
  local_80 = (longlong *)FUN_14001cc68(0x18,0x10);
  local_80[1] = (longlong)&DAT_100000001;
  *local_80 = (longlong)&PTR_FUN_14a899340;
  local_80[2] = lVar12;
  local_70 = &local_98;
  local_98 = uVar7;
  local_90 = uVar18;
  local_68 = &local_88;
  FUN_145fd914c(plVar13,&local_74);
  uVar20 = *(ulonglong *)(*plVar13 + 0x10 + (longlong)local_74 * 0x28);
  plVar22 = *(longlong **)(*plVar13 + 0x18 + (longlong)local_74 * 0x28);
  if (plVar22 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
  }
  if (plVar23 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar23 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar23)(plVar23);
      LOCK();
      piVar2 = (int *)((longlong)plVar23 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar23 + 0x10))(plVar23);
      }
    }
  }
  plVar13 = local_80;
  if (local_80 != (longlong *)0x0) {
    LOCK();
    plVar23 = local_80 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*local_80)(local_80);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
  }
LAB_1415b0478:
  if (plVar22 == (longlong *)0x0) {
    LeaveCriticalSection(lpCriticalSection);
    puVar11[0xc4] = uVar20;
    plVar13 = (longlong *)puVar11[0xc5];
    if (plVar13 == (longlong *)0x0) goto LAB_1415b04d5;
    puVar11[0xc5] = 0;
LAB_1415b073b:
    LOCK();
    plVar23 = plVar13 + 1;
    *(int *)plVar23 = (int)*plVar23 + -1;
    UNLOCK();
    if ((int)*plVar23 == 0) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
LAB_1415b0799:
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    if (plVar22 == (longlong *)0x0) goto LAB_1415b04d5;
  }
  else {
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar22 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar22)(plVar22);
      LOCK();
      piVar2 = (int *)((longlong)plVar22 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar22 + 0x10))(plVar22);
      }
    }
    LeaveCriticalSection(lpCriticalSection);
    LOCK();
    *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
    UNLOCK();
    puVar11[0xc4] = uVar20;
    plVar13 = (longlong *)puVar11[0xc5];
    if (plVar22 == plVar13) {
      LOCK();
      plVar13 = plVar22 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar22)(plVar22);
        LOCK();
        piVar2 = (int *)((longlong)plVar22 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        plVar13 = plVar22;
        if (*piVar2 == 0) goto LAB_1415b0799;
      }
    }
    else {
      puVar11[0xc5] = plVar22;
      if (plVar13 != (longlong *)0x0) goto LAB_1415b073b;
    }
  }
  LOCK();
  plVar13 = plVar22 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar22)(plVar22);
    LOCK();
    piVar2 = (int *)((longlong)plVar22 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar22 + 0x10))(plVar22);
    }
  }
LAB_1415b04d5:
  *(byte *)((longlong)puVar11 + 0x76) = *(byte *)((longlong)puVar11 + 0x76) & 0xdf;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar13 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1);
    if (plVar13 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar13 + 0x68))(plVar13);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar12 = DAT_14ca97068;
  bVar24 = true;
  cVar8 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar18 = 0;
      cVar8 = '\x02';
    }
    else {
      bVar9 = FUN_144a61b4f();
      uVar18 = (ulonglong)(bVar9 ^ 1);
      cVar8 = DAT_14ca96da8;
    }
    bVar24 = *(int *)(lVar12 + uVar18 * 4) != 0;
  }
  *(char *)(puVar11 + 0xe3) = cVar8 != '\0' & bVar24;
  *(undefined1 *)((longlong)puVar11 + 0x71a) = 1;
  *(byte *)((longlong)puVar11 + 0x719) = *(byte *)((longlong)puVar11 + 0x605) >> 5 & 1;
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 1415b0836 FUN_1415b0836 body=2042 status=ok
// SIG undefined FUN_1415b0836(void)

void FUN_1415b0836(longlong *param_1,longlong *param_2,longlong param_3,uint param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  longlong lVar4;
  byte bVar5;
  code *pcVar6;
  ulonglong uVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  uint uVar14;
  longlong *plVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  longlong lVar19;
  longlong lVar20;
  undefined1 auStack_e8 [32];
  code **local_c8;
  undefined8 local_b8;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88;
  uint local_80;
  uint local_7c;
  longlong *local_78;
  longlong local_68 [5];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (param_3 != 0) {
    FUN_1400337aa(param_3);
  }
  plVar15 = param_1 + 0x3e;
  iVar8 = (int)param_1[0x3f];
  lVar20 = (longlong)iVar8;
  if (0 < lVar20) {
    puVar12 = (uint *)*plVar15;
    lVar19 = lVar20;
    do {
      if (((*param_2 == *(longlong *)puVar12) && (puVar12[3] == *(uint *)((longlong)param_2 + 0xc)))
         && ((char)puVar12[2] == (char)param_2[1])) {
        if (puVar12 != (uint *)0x0) {
          if ((*(longlong *)(puVar12 + 4) != param_3) || (puVar12[6] != param_4))
          goto LAB_1415b090b;
          goto LAB_1415b0bd5;
        }
        break;
      }
      puVar12 = puVar12 + 0xc;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  *(uint *)(param_1 + 0x3f) = iVar8 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1fc) < iVar8 + 1U) {
    FUN_1463eac36(plVar15,iVar8);
  }
  lVar19 = *plVar15;
  lVar20 = lVar20 * 0x30;
  puVar12 = (uint *)(lVar19 + lVar20);
  *(undefined8 *)(lVar19 + lVar20) = 0;
  *(undefined1 *)(lVar19 + 8 + lVar20) = 2;
  *(undefined4 *)(lVar19 + 0xc + lVar20) = 0xffffffff;
  puVar2 = (undefined8 *)(lVar19 + 0x10 + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2 = (undefined8 *)(lVar19 + 0x1c + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
  lVar4 = param_2[1];
  *(longlong *)(lVar19 + lVar20) = *param_2;
  ((longlong *)(lVar19 + lVar20))[1] = lVar4;
  puVar2 = (undefined8 *)(lVar19 + 0x1c + lVar20);
  *puVar2 = 0;
  puVar2[1] = 0;
LAB_1415b090b:
  if ((param_3 == 0) || (DAT_14c950c29 == '\0')) {
    *(longlong *)(puVar12 + 4) = param_3;
    puVar12[6] = param_4;
    if (param_3 != 0) goto LAB_1415b092a;
  }
  else {
    FUN_1456cec3c(param_3);
    *(longlong *)(puVar12 + 4) = param_3;
    puVar12[6] = param_4;
LAB_1415b092a:
    FUN_1406555d4(param_3,param_1,1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar5 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_1415b0bd5;
    bVar5 = DAT_14c8442b8 & 1;
  }
  if (bVar5 != 0) goto LAB_1415b0bd5;
  LOCK();
  *(uint *)(param_1 + 0x5b) = *(uint *)(param_1 + 0x5b) | 2;
  UNLOCK();
  local_98 = 0;
  uStack_90 = 0;
  lVar20 = (**(code **)(*param_1 + 0x2c0))(param_1);
  if (((lVar20 != 0) && (*(byte *)(lVar20 + 0x128) - 6 < 0xfffffffe)) &&
     (-1 < *(char *)(lVar20 + 0x1c0))) {
    if (DAT_14cad8310 == (longlong *)0x0) {
      FUN_1446f470e(&local_88,L"Renderer",1);
      pcVar6 = local_88;
      uVar13 = FUN_144a52528();
      DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar13,pcVar6);
    }
    (**(code **)(*DAT_14cad8310 + 0x1f8))();
  }
  lVar20 = param_1[0x49];
  lVar19 = *(longlong *)(puVar12 + 4);
  if (lVar19 == 0) {
LAB_1415b0a0b:
    uStack_a0 = 0;
  }
  else {
    uVar14 = puVar12[6];
    if (((longlong)(int)uVar14 < 0) || (*(int *)(lVar19 + 0x50) <= (int)uVar14)) goto LAB_1415b0a0b;
    uStack_a0 = *(undefined8 *)(*(longlong *)(lVar19 + 0x48) + (longlong)(int)uVar14 * 8);
  }
  uStack_b0 = *puVar12;
  uStack_ac = puVar12[1];
  uStack_a8 = puVar12[2];
  uStack_a4 = puVar12[3];
  lVar19 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar8 = *(int *)(lVar19 + 0xc60);
  local_b8 = lVar20;
  if (DAT_14c86a9fc == 0) {
    if (iVar8 != 2) {
      if (iVar8 != 1) goto LAB_1415b0a49;
      DVar9 = FUN_140ad26c0();
      DVar10 = GetCurrentThreadId();
      if (DVar9 == DVar10) goto LAB_1415b0a52;
      goto LAB_1415b0b0a;
    }
  }
  else {
LAB_1415b0a49:
    if (iVar8 != 0x10) {
LAB_1415b0b0a:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar8 = *(int *)(lVar19 + 0xc60), iVar8 == 2))
        goto LAB_1415b0a52;
        if (iVar8 == 1) {
          DVar9 = FUN_140ad26c0();
          DVar10 = GetCurrentThreadId();
          if (DVar9 == DVar10) goto LAB_1415b0a52;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar12 = (uint *)*puVar2;
        if (puVar12 != (uint *)0x0) goto LAB_1415b0ca2;
        while( true ) {
          uVar14 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar14 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar14 | 1;
            __tlregdtor(&LAB_143574684);
          }
          lVar20 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar11 = *(undefined4 **)(lVar20 + 0x310);
          *(undefined8 *)(lVar20 + 0x310) = 0;
          if (puVar11 == (undefined4 *)0x0) {
            puVar11 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar11 = 0xffffffff;
          *(undefined4 **)(puVar11 + 0x10) = puVar11 + 0x16;
          puVar11[0x12] = 0;
          *puVar2 = puVar11;
          FUN_140217a48(puVar2);
          puVar12 = (uint *)*puVar2;
LAB_1415b0ca2:
          puVar18 = (undefined8 *)(*(longlong *)(puVar12 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar16 = (uint *)(puVar18 + 0x19);
          uVar14 = puVar12[0x12];
          if (puVar16 <= puVar12 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x4000;
            LOCK();
            uVar3 = *puVar12;
            *puVar12 = *puVar12 + uVar14 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar14) != 0xffffffff) break;
            puVar12 = (uint *)*puVar2;
            *puVar12 = 0xffffffff;
            *(uint **)(puVar12 + 0x10) = puVar12 + 0x16;
            puVar12[0x12] = 0;
            *puVar2 = puVar12;
            puVar18 = (undefined8 *)((longlong)puVar12 + 0x5fU & 0xfffffffffffffff8);
            puVar16 = (uint *)(puVar18 + 0x19);
            uVar14 = 0;
            if (puVar16 <= puVar12 + 0x4000) {
              uVar14 = 1;
              goto LAB_1415b0d22;
            }
          }
        }
        uVar14 = uVar14 + 1;
LAB_1415b0d22:
        *(uint **)(puVar12 + 0x10) = puVar16;
        puVar12[0x12] = uVar14;
        iVar8 = 0;
        FUN_1447247dc(puVar18,0);
        *puVar18 = &PTR_FUN_14a9d49d0;
        *(undefined4 *)(puVar18 + 0x15) = (undefined4)local_b8;
        *(undefined4 *)((longlong)puVar18 + 0xac) = local_b8._4_4_;
        *(uint *)(puVar18 + 0x16) = uStack_b0;
        *(uint *)((longlong)puVar18 + 0xb4) = uStack_ac;
        *(uint *)(puVar18 + 0x17) = uStack_a8;
        *(uint *)((longlong)puVar18 + 0xbc) = uStack_a4;
        *(undefined4 *)(puVar18 + 0x18) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)puVar18 + 0xc4) = uStack_a0._4_4_;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar14 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar14 < 2) {
            uVar17 = (ulonglong)(byte)(&DAT_149e38edc)[uVar14];
            iVar8 = 0;
          }
          else {
            uVar17 = 2;
          }
        }
        else {
          iVar8 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar17 = 5;
        }
        if (*(code **)(puVar18[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar18[0xe] + 0x18))(puVar18 + 0xe,puVar18 + 9);
        }
        puVar18[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar18[9] = puVar18;
        puVar18[10] = puVar18;
        lVar20 = *(longlong *)
                  (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x2b8);
        if (lVar20 == 0) {
          uVar7 = 1;
          if ((char)uVar17 != '\x06') {
            uVar7 = uVar17;
          }
          uVar17 = uVar7;
          uVar13 = 0;
        }
        else {
          if ((char)uVar17 == '\x06') {
            uVar17 = *(ulonglong *)(lVar20 + 0x38) >> 0x3b;
          }
          uVar13 = *(undefined8 *)(lVar20 + 0x30);
        }
        puVar18[0xf] = uVar13;
        puVar18[0x10] = uVar17 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar18 + 0x1c) = iVar8;
        if (puVar18 == (undefined8 *)0x0) {
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar18 + 1) = *(int *)(puVar18 + 1) + 1;
          UNLOCK();
          local_88 = (code *)CONCAT71(local_88._1_7_,1);
          FUN_1447439e4(puVar18);
          LOCK();
          piVar1 = (int *)(puVar18 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar18)(puVar18,1);
          }
        }
      }
      else {
        local_88 = (code *)0x0;
        local_78 = (longlong *)FUN_14001cc68(0x28,8);
        *local_78 = (longlong)&PTR_LAB_14a9d49b0;
        *(uint *)(local_78 + 3) = uStack_a8;
        *(uint *)((longlong)local_78 + 0x1c) = uStack_a4;
        *(undefined4 *)(local_78 + 4) = (undefined4)uStack_a0;
        *(undefined4 *)((longlong)local_78 + 0x24) = uStack_a0._4_4_;
        *(undefined4 *)(local_78 + 1) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_78 + 0xc) = local_b8._4_4_;
        *(uint *)(local_78 + 2) = uStack_b0;
        *(uint *)((longlong)local_78 + 0x14) = uStack_ac;
        if (local_78 + 1 != (longlong *)0x0) {
          local_88 = FUN_1463eacca;
        }
        local_c8 = &local_88;
        FUN_14005a792(&DAT_14ca9a440,L"SetMIParameterValue",&DAT_14caec374);
        if (local_88 != (code *)0x0) {
          plVar15 = local_78;
          if (local_78 == (longlong *)0x0) {
            plVar15 = local_68;
          }
          (**(code **)(*plVar15 + 0x10))();
        }
      }
      goto LAB_1415b0bd5;
    }
  }
LAB_1415b0a52:
  local_88 = (code *)(ulonglong)uStack_b0;
  local_80 = uStack_ac;
  local_7c = uStack_a4;
  local_78 = (longlong *)CONCAT71(local_78._1_7_,(undefined1)uStack_a8);
  FUN_1408ec8a8(lVar20,&local_88,&uStack_a0);
  FUN_14006fee2(lVar20,&DAT_14ca85100,0);
LAB_1415b0bd5:
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b1072 FUN_1415b1072 body=191 status=ok
// SIG undefined FUN_1415b1072(void)

undefined4 * FUN_1415b1072(undefined4 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [40];
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c760dd0 == -1) {
    FUN_145fdab76(local_30,L"GPUMessage::FParameters",
                  L".\\Runtime/RenderCore/Private/GPUMessaging.cpp",0xb);
    DAT_14c760dd0 = FUN_145d12cf0(local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((DAT_14c760dd0 < *(int *)(param_2 + 0x130)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x128) + (longlong)DAT_14c760dd0 * 8),
     lVar1 != 0)) {
    puVar5 = (undefined4 *)(lVar1 + 0x10);
  }
  else {
    puVar5 = (undefined4 *)0x0;
  }
  uVar2 = puVar5[1];
  uVar3 = puVar5[2];
  uVar4 = puVar5[3];
  *param_1 = *puVar5;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b1132 FUN_1415b1132 body=223 status=ok
// SIG undefined FUN_1415b1132(void)

undefined8 * FUN_1415b1132(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined1 local_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140312256();
  *param_1 = &PTR_FUN_14a3ef750;
  param_1[0x72] = 0;
  FUN_1446f470e(&local_20,L"FieldSystemComponent",1);
  uVar2 = FUN_14595739c();
  local_30 = 0;
  local_38 = 1;
  lVar3 = FUN_14048696c(param_1,local_20,uVar2,uVar2);
  if (lVar3 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar3);
  }
  bVar1 = DAT_14c950c29;
  param_1[0x72] = lVar3;
  if ((lVar3 != 0) && ((bVar1 & 1) != 0)) {
    FUN_1456cec3c(lVar3);
    lVar3 = param_1[0x72];
  }
  param_1[0x39] = lVar3;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b1212 FUN_1415b1212 body=1716 status=ok
// SIG undefined FUN_1415b1212(void)

undefined8 * FUN_1415b1212(longlong param_1,undefined8 *param_2,char *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  undefined8 *puVar11;
  longlong lVar12;
  int *piVar13;
  int *piVar14;
  ulonglong uVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  longlong *local_120;
  char *local_118;
  undefined1 local_10c [12];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  int local_e4;
  undefined4 uStack_e0;
  int local_dc;
  int local_d8 [2];
  int local_d0;
  int local_cc [2];
  int local_c4;
  int local_c0 [2];
  int local_b8;
  int local_b4 [2];
  int local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_98 [2];
  longlong local_90;
  longlong local_80;
  undefined8 local_70;
  int local_68 [4];
  int *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_128 = param_2;
  cVar7 = FUN_1401146b0(param_3);
  local_118 = param_3;
  if (cVar7 == '\0') {
    FUN_144928b90(&local_a8,1);
    FUN_144a659ac(param_3 + 0x10,&local_e4,1);
    if (local_e4 == 0) {
      local_68[0] = DAT_14cb7bba0;
      local_70 = DAT_14cb7bb98;
    }
    else {
      local_68[0] = local_dc;
      local_70 = CONCAT44(uStack_e0,local_e4);
    }
    FUN_144928d62(local_98,1,&local_70);
    local_f0 = DAT_14cb7bd68;
    local_e8 = DAT_14cb7bd70;
    FUN_14013eb2c(&local_a8);
    local_f8 = DAT_14cb7bd88;
    local_100 = DAT_14cb7bd80;
    FUN_14013eb54(&local_a8);
    FUN_144a659ac(param_3 + 0x10,local_10c,2);
    FUN_144928d62(local_98,4,local_10c);
    if ((char)local_a8 == '\x01') {
      FUN_1447a97f4(&local_70,local_98);
      if (0 < local_70._4_4_) {
        lVar12 = 0;
        uVar15 = 0;
        iVar8 = local_70._4_4_;
        iVar10 = DAT_14c948000;
        do {
          bVar16 = (int)local_70 != 0;
          bVar17 = (int)local_70 != iVar10;
          piVar13 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (bVar17 && bVar16) {
            piVar14 = local_68;
            if (0 < local_4c) {
              piVar14 = local_58;
            }
            if (1 < iVar8) {
              piVar14 = local_58;
            }
            piVar13 = (int *)((longlong)piVar14 + lVar12 + 8);
            piVar14 = (int *)((longlong)piVar14 + lVar12);
          }
          if ((*piVar14 == DAT_14cb7beb0) && (*piVar13 == DAT_14cb7beb8)) {
LAB_1415b1531:
            FUN_1402b5374(&local_70,uVar15 & 0xffffffff,0);
            iVar8 = local_70._4_4_;
            iVar10 = DAT_14c948000;
          }
          else {
            piVar13 = &DAT_14c948620;
            piVar14 = (int *)&DAT_14c948618;
            if (bVar17 && bVar16) {
              piVar14 = local_68;
              if (0 < local_4c) {
                piVar14 = local_58;
              }
              if (1 < iVar8) {
                piVar14 = local_58;
              }
              piVar13 = (int *)((longlong)piVar14 + lVar12 + 8);
              piVar14 = (int *)((longlong)piVar14 + lVar12);
            }
            if ((*piVar14 == DAT_14cb7bec8) && (*piVar13 == DAT_14cb7bed0)) goto LAB_1415b1531;
            piVar13 = &DAT_14c948620;
            piVar14 = (int *)&DAT_14c948618;
            if (bVar17 && bVar16) {
              piVar14 = local_68;
              if (0 < local_4c) {
                piVar14 = local_58;
              }
              if (1 < iVar8) {
                piVar14 = local_58;
              }
              piVar13 = (int *)((longlong)piVar14 + lVar12 + 8);
              piVar14 = (int *)((longlong)piVar14 + lVar12);
            }
            if ((*piVar14 == DAT_14cb7bee0) && (*piVar13 == DAT_14cb7bee8)) goto LAB_1415b1531;
            piVar13 = &DAT_14c948620;
            piVar14 = (int *)&DAT_14c948618;
            if (bVar17 && bVar16) {
              piVar14 = local_68;
              if (0 < local_4c) {
                piVar14 = local_58;
              }
              if (1 < iVar8) {
                piVar14 = local_58;
              }
              piVar13 = (int *)((longlong)piVar14 + lVar12 + 8);
              piVar14 = (int *)((longlong)piVar14 + lVar12);
            }
            if ((*piVar14 == DAT_14cb7bef8) && (*piVar13 == DAT_14cb7bf00)) goto LAB_1415b1531;
            piVar13 = &DAT_14c948620;
            piVar14 = (int *)&DAT_14c948618;
            if (bVar17 && bVar16) {
              piVar14 = local_68;
              if (0 < local_4c) {
                piVar14 = local_58;
              }
              if (1 < iVar8) {
                piVar14 = local_58;
              }
              piVar13 = (int *)((longlong)piVar14 + lVar12 + 8);
              piVar14 = (int *)((longlong)piVar14 + lVar12);
            }
            if ((*piVar14 == DAT_14cb7bf10) && (*piVar13 == DAT_14cb7bf18)) goto LAB_1415b1531;
          }
          uVar15 = uVar15 + 1;
          lVar12 = lVar12 + 0xc;
        } while ((longlong)uVar15 < (longlong)iVar8);
      }
      local_98[0] = (int)local_70;
      if (local_58 != (int *)0x0) {
        FUN_1400020a8();
      }
    }
    iVar8 = FUN_1402b3efe((longlong *)(param_1 + 0x148),local_98[0],&local_a8);
    puVar11 = local_128;
    if (iVar8 != -1) {
      lVar12 = *(longlong *)(param_1 + 0x148);
      if ((lVar12 + (longlong)iVar8 * 0x48 != 0) &&
         (piVar14 = (int *)(lVar12 + (longlong)iVar8 * 0x48 + 0x38), piVar14 != (int *)0x0)) {
        lVar12 = *(longlong *)(param_1 + 0x78);
        lVar9 = (longlong)*piVar14 * 0x280;
        puVar1 = (undefined8 *)(lVar12 + 0x210 + lVar9);
        uVar2 = puVar1[1];
        *local_128 = *puVar1;
        local_128[1] = uVar2;
        local_128[2] = *(undefined8 *)(lVar12 + 0x220 + lVar9);
        if (local_80 != 0) {
          FUN_1400020a8();
        }
        goto LAB_1415b15e2;
      }
    }
    if (local_80 != 0) {
      FUN_1400020a8();
    }
  }
  local_120 = (longlong *)(param_1 + 0x148);
  if (*local_118 == '\x01') {
    FUN_1447a97f4(&local_a8,local_118 + 0x10);
    if (0 < local_a4) {
      iVar8 = 0;
      do {
        FUN_144a7c8fe(&local_a8,&local_70,iVar8,1);
        if (((((((int)local_70 == DAT_14cb7beb0) && (local_68[0] == DAT_14cb7beb8)) ||
              ((FUN_144a7c8fe(&local_a8,local_b4,iVar8,1), local_b4[0] == DAT_14cb7bec8 &&
               (local_ac == DAT_14cb7bed0)))) ||
             ((FUN_144a7c8fe(&local_a8,local_c0,iVar8,1), local_c0[0] == DAT_14cb7bee0 &&
              (local_b8 == DAT_14cb7bee8)))) ||
            ((FUN_144a7c8fe(&local_a8,local_cc,iVar8,1), local_cc[0] == DAT_14cb7bef8 &&
             (local_c4 == DAT_14cb7bf00)))) ||
           ((FUN_144a7c8fe(&local_a8,local_d8,iVar8,1), local_d8[0] == DAT_14cb7bf10 &&
            (local_d0 == DAT_14cb7bf18)))) {
          FUN_1402b5374(&local_a8,iVar8,0);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_a4);
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_a8 = *(undefined4 *)(local_118 + 0x10);
  }
  plVar6 = local_120;
  iVar8 = FUN_1402b3efe(local_120,local_a8,local_118);
  puVar11 = local_128;
  if (iVar8 != -1) {
    if ((*plVar6 + (longlong)iVar8 * 0x48 != 0) &&
       (piVar14 = (int *)(*plVar6 + (longlong)iVar8 * 0x48 + 0x38), piVar14 != (int *)0x0)) {
      lVar12 = *(longlong *)(param_1 + 0x78);
      lVar9 = (longlong)*piVar14 * 0x280;
      puVar1 = (undefined8 *)(lVar12 + 0x210 + lVar9);
      uVar2 = puVar1[1];
      *local_128 = *puVar1;
      local_128[1] = uVar2;
      local_128[2] = *(undefined8 *)(lVar12 + 0x220 + lVar9);
      goto LAB_1415b15e2;
    }
  }
  local_128[2] = DAT_14c8464f0;
  uVar5 = DAT_14c8464e8._4_4_;
  uVar4 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)local_128 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)local_128 + 4) = uVar3;
  *(undefined4 *)(local_128 + 1) = uVar4;
  *(undefined4 *)((longlong)local_128 + 0xc) = uVar5;
LAB_1415b15e2:
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return puVar11;
}



// FUNCTION 1415b18c8 FUN_1415b18c8 body=307 status=ok
// SIG undefined FUN_1415b18c8(void)

void FUN_1415b18c8(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(char *)(param_1 + 0xc9) == '\x01') {
    plVar1 = (longlong *)(param_1 + 0x278);
    lVar2 = param_1 + 0x288;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    iVar5 = 0;
    local_48 = lVar2;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      FUN_1449c0562(&local_50);
      iVar5 = *(int *)(param_1 + 0x2a0);
    }
    local_70 = local_50;
    local_68 = local_48;
    local_60 = local_40;
    uVar3 = local_60;
    local_58 = local_38;
    local_54 = local_34;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = plVar1;
    if ((local_60._4_4_ != iVar5) || (local_60 = local_40, local_48 != lVar2)) {
      do {
        local_60 = uVar3;
        if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar4 * 0x20) != 0) {
          FUN_140ed1266(param_1);
        }
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar3 = local_60;
      } while (((local_60._4_4_ != iVar5) || (local_68 != lVar2)) || (local_78 != plVar1));
    }
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b19fc FUN_1415b19fc body=376 status=ok
// SIG undefined FUN_1415b19fc(void)

undefined8 * FUN_1415b19fc(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if (((longlong *)*param_3 != (longlong *)0x0 && (int)param_3[1] != 0) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar6 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar6 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar6 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar6);
              FUN_14005b248(param_1);
            }
            else {
              iVar6 = iVar6 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar6 < iVar5);
        }
        iVar6 = 2;
        if (2 < iVar5 * 2) {
          iVar6 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar6;
        if ((iVar6 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c(param_1);
        }
      }
    }
    plVar2 = (longlong *)*param_3;
    if (plVar2 == (longlong *)0x0 || (int)param_3[1] == 0) {
      local_38 = 0;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
    }
    *param_2 = local_38;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar7 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar7) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong *)(lVar3 + lVar7) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar7) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1415b1b76 FUN_1415b1b76 body=199 status=ok
// SIG undefined FUN_1415b1b76(void)

void FUN_1415b1b76(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  if (*(longlong *)(param_1 + 0x4a8) != 0) {
    FUN_1400020a8();
  }
  FUN_1459c441c(param_1 + 0x468);
  FUN_1418d3311(*(undefined8 *)(param_1 + 0x440),*(undefined4 *)(param_1 + 0x448));
  if (*(longlong *)(param_1 + 0x440) != 0) {
    FUN_1400020a8();
  }
  FUN_1418d3311(*(undefined8 *)(param_1 + 0x428),*(undefined4 *)(param_1 + 0x430));
  if (*(longlong *)(param_1 + 0x428) != 0) {
    FUN_1400020a8();
  }
  FUN_148ca88bf(*(undefined8 *)(param_1 + 0x410),*(undefined4 *)(param_1 + 0x418));
  if (*(longlong *)(param_1 + 0x410) != 0) {
    FUN_1400020a8();
  }
  FUN_148ca81ce(param_1 + 0x3c8);
  if (*(longlong *)(param_1 + 0x3b8) != 0) {
    FUN_1400020a8();
  }
  FUN_1412d6bec(param_1);
  return;
}



// FUNCTION 1415b1c3e FUN_1415b1c3e body=169 status=ok
// SIG undefined FUN_1415b1c3e(void)

void FUN_1415b1c3e(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b429680;
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_FUN_14b421610;
  plVar3 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1415b1cbc;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_1415b1cbc:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001415b1cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1415b1ce8 FUN_1415b1ce8 body=148 status=ok
// SIG undefined FUN_1415b1ce8(void)

undefined4 FUN_1415b1ce8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(int *)(lVar2 + 0x1d8) != *(int *)(lVar2 + 0x204)) {
    uVar1 = *(uint *)(param_1 + 0x30);
    lVar3 = lVar2 + 0x208;
    if (*(longlong *)(lVar2 + 0x210) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x210);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x218) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      lVar2 = *(longlong *)(lVar2 + 0x1d0);
      iVar5 = iVar4;
      do {
        if (*(uint *)(lVar2 + (longlong)iVar5 * 0x20) == uVar1) goto LAB_1415b1d5f;
        iVar5 = *(int *)((longlong)iVar5 * 0x20 + lVar2 + 0x18);
      } while (iVar5 != -1);
    }
  }
  return 2;
  while (iVar4 = *(int *)(lVar3 + 0x18), iVar4 != -1) {
LAB_1415b1d5f:
    lVar3 = lVar2 + (longlong)iVar4 * 0x20;
    if (*(uint *)(lVar2 + (longlong)iVar4 * 0x20) == uVar1) goto LAB_1415b1d74;
  }
  lVar3 = 0;
LAB_1415b1d74:
  return *(undefined4 *)(*(longlong *)(lVar3 + 8) + 0x28);
}



// FUNCTION 1415b1d7c FUN_1415b1d7c body=164 status=ok
// SIG undefined FUN_1415b1d7c(void)

void FUN_1415b1d7c(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpressionMaterialXFractal3D";
  local_38 = 0x24;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"MaterialX";
  local_38 = 9;
  FUN_140208c1e(&DAT_14cc13940,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b1e22 FUN_1415b1e22 body=195 status=ok
// SIG undefined FUN_1415b1e22(void)

undefined8 * FUN_1415b1e22(undefined8 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  bool bVar5;
  
  param_1[4] = 0;
  param_1[5] = 0x8000000000;
  param_1[6] = 0xffffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 2;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 10) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar3 = 0;
    }
    iVar2 = *(int *)(lVar3 + 0x10);
    if (*(int *)(lVar3 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar5 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar5) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar2 = *(int *)(lVar3 + 0x10);
      bVar5 = iVar2 == 0;
      if (bVar5) {
        *(int *)(lVar3 + 0x10) = iVar4;
        iVar2 = 0;
      }
      UNLOCK();
      if (bVar5) {
        iVar2 = iVar4;
      }
    }
    *(int *)((longlong)param_1 + 0x54) = iVar2;
  }
  return param_1;
}



// FUNCTION 1415b1ee6 FUN_1415b1ee6 body=281 status=ok
// SIG undefined FUN_1415b1ee6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1415b1ee6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cae1e50) {
    FUN_144b3d300(&DAT_14cae1e50);
    if (DAT_14cae1e50 == -1) {
      FUN_145fe4092();
      FUN_140db5666(&DAT_14cae1da8,0,&DAT_14cae1d40,L"FRadixSortUpsweepCS",
                    L"/Engine/Private/RadixSortShaders.usf",L"RadixSort_Upsweep",5,1,FUN_147addad4,
                    FUN_147addaac,&LAB_147addaa8,&LAB_147addaa4,&LAB_14712ac0c,&LAB_14712ac08,0xf0,0
                   );
      _DAT_14cae1da8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_143519d99);
      _Init_thread_footer(&DAT_14cae1e50);
    }
  }
  return &DAT_14cae1da8;
}



// FUNCTION 1415b2000 FUN_1415b2000 body=277 status=ok
// SIG undefined FUN_1415b2000(void)

void FUN_1415b2000(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeaff0,local_58,local_54,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeb000,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b2116 FUN_1415b2116 body=277 status=ok
// SIG undefined FUN_1415b2116(void)

void FUN_1415b2116(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeadc8,local_58,local_54,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeadd8,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b222c FUN_1415b222c body=277 status=ok
// SIG undefined FUN_1415b222c(void)

void FUN_1415b222c(void)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [4];
  undefined1 local_54 [4];
  wchar_t *local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = L"Math";
  local_48 = 4;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"Math";
  local_48 = 4;
  FUN_140208c1e(&DAT_14caeada0,local_58,local_54,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_1446e940c(local_54,&local_50);
  local_50 = L"MaterialExpression";
  local_48 = 0x12;
  FUN_1446e940c(local_58,&local_50);
  local_50 = L"VectorOps";
  local_48 = 9;
  FUN_140208c1e(&DAT_14caeadb0,local_58,local_54,&local_50);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b2342 FUN_1415b2342 body=135 status=ok
// SIG undefined FUN_1415b2342(void)

void * FUN_1415b2342(void)

{
  void *_Dst;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0ae30) {
    FUN_144b3d300(&DAT_14cb0ae30);
    if (DAT_14cb0ae30 == -1) {
      _Dst = (void *)FUN_14001cc68(0xc0);
      memset(_Dst,0,0xc0);
      FUN_145fe4cfa(_Dst);
      DAT_14cb0ae28 = _Dst;
      _Init_thread_footer(&DAT_14cb0ae30);
    }
  }
  return DAT_14cb0ae28;
}



// FUNCTION 1415b23ca FUN_1415b23ca body=661 status=ok
// SIG undefined FUN_1415b23ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1415b23ca(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b76b090;
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_1440470a0(param_1 + 0x7d);
  FUN_1459a1734(param_1[0x7b],*(undefined4 *)(param_1 + 0x7c));
  if (param_1[0x7b] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_1459a1582(param_1 + 0x71);
  if (param_1[0x6e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5e] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x56) = 0;
  if (param_1[0x55] != 0) {
    FUN_1400020a8();
  }
  FUN_145ec8b04(param_1 + 0x4d);
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cdf02(param_1 + 0x42);
  *(undefined4 *)(param_1 + 0x3b) = 0;
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  FUN_1459cdf02(param_1 + 0x32);
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x29) = 0;
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_145ff1636(param_1 + 0x20);
  param_1[0x1c] = &PTR_FUN_14b6e2428;
  FUN_1458ce261(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  FUN_1465db598(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_1465db56f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (puVar1 = (undefined8 *)param_1[1], puVar1 != (undefined8 *)0x0)) {
    if (puVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *puVar1 = DAT_14c9a0ea0;
    DAT_14c9a0ea0 = puVar1;
                    /* WARNING: Could not recover jumptable at 0x0001415b2647. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 1415b2660 FUN_1415b2660 body=769 status=ok
// SIG undefined FUN_1415b2660(void)

void FUN_1415b2660(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  longlong local_40;
  longlong local_38;
  code *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x1020))();
  if (((*(byte *)(param_1 + 0x84) & 2) == 0) ||
     (cVar5 = (**(code **)(*param_1 + 0x6c8))(param_1), cVar5 == '\0')) goto LAB_1415b27aa;
  if ((param_1[0x73] != 0) && ((*(byte *)(param_1[0x73] + 0x39a) & 8) != 0)) {
    lVar6 = param_1[0x86];
    if (lVar6 == 0) goto LAB_1415b27aa;
    if (DAT_14cae9568 == 0) {
      local_60 = &local_30;
      local_30 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = param_1[0x86];
      if (lVar6 == 0) goto LAB_1415b27aa;
    }
    if ((((DAT_14cae9568 == 0) || (lVar4 = *(longlong *)(lVar6 + 0x10), lVar4 == 0)) ||
        (*(int *)(lVar4 + 0x38) < *(int *)(DAT_14cae9568 + 0x38))) ||
       ((*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         != DAT_14cae9568 + 0x30 || (*(char *)(lVar6 + 0x2b0) != '\0')))) goto LAB_1415b27aa;
  }
  lVar6 = FUN_1447210f0(param_1);
  if (lVar6 == 0) goto LAB_1415b27aa;
  if (param_1[0x157] == 0) {
    local_28 = (longlong *)FUN_1456c1abe();
    local_30 = (code *)(local_28 + 2);
    FUN_1456c1a1c(&local_30);
    plVar1 = local_28;
    if (local_28 == (longlong *)0x0) {
      param_1[0x157] = (longlong)local_30;
      plVar8 = (longlong *)param_1[0x158];
      if (plVar8 != (longlong *)0x0) {
        param_1[0x158] = 0;
LAB_1415b283e:
        LOCK();
        plVar1 = plVar8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar8)(plVar8);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
joined_r0x0001415b2869:
          if (iVar3 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      LOCK();
      *(int *)(local_28 + 1) = (int)local_28[1] + 1;
      UNLOCK();
      param_1[0x157] = (longlong)local_30;
      plVar8 = (longlong *)param_1[0x158];
      if (local_28 == plVar8) {
        LOCK();
        plVar8 = local_28 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*local_28)(local_28);
          LOCK();
          piVar2 = (int *)((longlong)plVar1 + 0xc);
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2;
          UNLOCK();
          plVar8 = plVar1;
          goto joined_r0x0001415b2869;
        }
      }
      else {
        param_1[0x158] = (longlong)local_28;
        if (plVar8 != (longlong *)0x0) goto LAB_1415b283e;
      }
    }
    plVar1 = local_28;
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_28 + 1;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)*plVar8 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    *(longlong **)(param_1[0x157] + 0xf0) = param_1;
  }
  lVar6 = DAT_14cb259f8;
  if (DAT_14cb259f8 != 0) {
    FUN_1400b22c2(&local_30,"PlayerController");
    uVar7 = FUN_1447210f0(param_1);
    local_40 = param_1[0x157];
    local_38 = param_1[0x158];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    FUN_1456c1c2a(lVar6,&local_40,uVar7,&local_30);
    if (local_30 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1415b27aa:
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b2962 FUN_1415b2962 body=116 status=ok
// SIG undefined FUN_1415b2962(void)

PRTL_CRITICAL_SECTION_DEBUG FUN_1415b2962(LPCRITICAL_SECTION param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  PRTL_CRITICAL_SECTION_DEBUG p_Var3;
  
  if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
    EnterCriticalSection(param_1);
    if (param_1[1].DebugInfo == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      p_Var3 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_145fecdc0();
      uVar1 = DAT_14c760d98;
      uVar2 = FUN_1415b29d6();
      (*(code *)**(undefined8 **)p_Var3)(p_Var3,uVar2,0x80000,uVar1,L"PSOPrecompilePool");
      LOCK();
      param_1[1].DebugInfo = p_Var3;
      UNLOCK();
    }
    if (param_1 != (LPCRITICAL_SECTION)0x0) {
      LeaveCriticalSection(param_1);
    }
  }
  return param_1[1].DebugInfo;
}



// FUNCTION 1415b29d6 FUN_1415b29d6 body=327 status=ok
// SIG undefined FUN_1415b29d6(void)

int FUN_1415b29d6(void)

{
  int iVar1;
  undefined1 auStack_108 [32];
  int *local_e8;
  undefined1 *local_e0;
  undefined1 local_c9;
  int local_c8;
  undefined1 local_c4 [7];
  undefined1 local_bd;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 local_b0 [136];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_108;
  iVar1 = DAT_14ca80818;
  if (DAT_14ca80818 < 1) {
    if (0 < DAT_14c760d8c) {
      if (DAT_14c8c27ac < 1) {
        memset(local_b0,0,0x82);
        local_b4 = 0;
        local_b8 = 0;
        local_bc = 0;
        FUN_140e55932(local_b0,&local_b4,&local_b8,&local_bc);
        iVar1 = local_bc;
        local_e0 = &local_c9;
        local_e8 = &local_c8;
        FUN_1457b80ec(local_b8,local_bc,&local_bd,local_c4);
        DAT_14c8c27ac = iVar1;
        if ((0 < local_c8) && (local_c8 <= iVar1)) {
          DAT_14c8c27ac = local_c8;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_108);
    }
    iVar1 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar1;
}



// FUNCTION 1415b2b20 FUN_1415b2b20 body=81 status=ok
// SIG undefined FUN_1415b2b20(void)

void FUN_1415b2b20(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (*param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = (longlong)*(int *)(*param_2 + 0xd4);
    lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar2 * 8);
    if (lVar1 == 0) {
      lVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar2,1);
    }
  }
  FUN_1462c9eba(param_1,param_2,lVar1);
  return;
}



// FUNCTION 1415b2b71 FUN_1415b2b71 body=232 status=ok
// SIG undefined FUN_1415b2b71(void)

void FUN_1415b2b71(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    lVar5 = (longlong)*(int *)(*param_2 + 0xd4);
    uVar1 = *(ulonglong *)(*(longlong *)(*(longlong *)(param_2[1] + 8) + 0x50) + lVar5 * 8);
    if (uVar1 == 0) {
      uVar1 = FUN_1400bafc2(*(longlong *)(param_2[1] + 8),lVar5,1);
    }
  }
  uVar2 = FUN_140029432(param_1,uVar1,0);
  param_1[0x37] = uVar1;
  puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar3 + 3;
  if ((undefined8 *)param_1[1] < puVar4) {
    FUN_140023dd8(param_1,0x20);
    puVar3 = (undefined8 *)(*param_1 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar3 + 3;
  }
  *param_1 = (ulonglong)puVar4;
  *(int *)(param_1 + 0xc) = (int)param_1[0xc] + 1;
  *(undefined8 **)param_1[6] = puVar3;
  param_1[6] = (ulonglong)(puVar3 + 1);
  puVar3[1] = 0;
  *puVar3 = &PTR_LAB_14a37d340;
  puVar3[2] = uVar2;
  FUN_14480864a(param_1,uVar1,*param_2,param_3,param_4);
  return;
}



// FUNCTION 1415b2c5a FUN_1415b2c5a body=594 status=ok
// SIG undefined FUN_1415b2c5a(void)

void FUN_1415b2c5a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 auStack_548 [32];
  undefined4 local_528 [2];
  longlong local_520;
  undefined8 uStack_518;
  undefined4 local_510;
  longlong local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined1 local_4f0 [608];
  undefined4 local_290 [2];
  longlong local_288;
  undefined8 uStack_280;
  undefined4 local_278;
  longlong local_270;
  undefined8 uStack_268;
  undefined4 local_f8;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_548;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c874a20) && (FUN_144b3d300(&DAT_14c874a20), DAT_14c874a20 == -1)) {
    FUN_145762954(&DAT_14c874628);
    DAT_14c874a18 = 1;
    atexit(FUN_14278de47);
    _Init_thread_footer(&DAT_14c874a20);
  }
  FUN_1446f470e(&local_4f8,L"VivoxCore",1);
  lVar2 = FUN_1402c9134(&DAT_14c874628,local_4f8,local_290,1);
  lVar3 = lVar2 + -0x10;
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  *(longlong *)(param_1 + 0x10) = lVar3;
  if ((lVar3 == 0) || (lVar3 = FUN_141535576(), lVar3 == 0)) {
    local_290[0] = 2;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    local_270 = 0;
    uStack_268 = 0;
    plVar4 = (longlong *)*param_2;
    lVar3 = local_288;
    if ((plVar4 != (longlong *)0x0 && (int)param_2[1] != 0) &&
       ((**(code **)(*plVar4 + 0x60))(plVar4,local_290), lVar3 = local_288, local_270 != 0)) {
      FUN_1400020a8();
      lVar3 = local_288;
    }
  }
  else {
    FUN_148aea56c(local_290);
    local_f8 = 3;
    plVar4 = (longlong *)FUN_141535576(*(undefined8 *)(param_1 + 0x10));
    memcpy(local_4f0,local_290,0x260);
    iVar1 = (**(code **)(*plVar4 + 8))(plVar4,local_4f0);
    if (iVar1 == 0) {
      FUN_14598cdca(param_1);
      local_528[0] = 0;
      iVar1 = (int)param_2[1];
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      local_528[0] = 2;
      iVar1 = (int)param_2[1];
    }
    uStack_500 = 0;
    local_508 = 0;
    local_510 = 0;
    uStack_518 = 0;
    local_520 = 0;
    param_2 = (longlong *)*param_2;
    lVar3 = local_520;
    if ((param_2 != (longlong *)0x0 && iVar1 != 0) &&
       ((**(code **)(*param_2 + 0x60))(param_2,local_528), lVar3 = local_520, local_508 != 0)) {
      FUN_1400020a8();
      lVar3 = local_520;
    }
  }
  if (lVar3 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_548) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b2eae FUN_1415b2eae body=832 status=ok
// SIG undefined FUN_1415b2eae(void)

longlong FUN_1415b2eae(longlong *param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  byte bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  
  iVar14 = (int)param_1[1];
  iVar7 = *(int *)((longlong)param_1 + 0x34);
  if (iVar14 != iVar7) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar11 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar11 != -1) {
      do {
        lVar16 = *param_1 + (longlong)iVar11 * 0x10;
        if (*(int *)(*param_1 + (longlong)iVar11 * 0x10) == *param_3) {
          if (lVar16 != 0) goto LAB_1415b3066;
          break;
        }
        iVar11 = *(int *)(lVar16 + 8);
      } while (iVar11 != -1);
    }
  }
  if (iVar7 == 0) {
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_144869a3c(param_1,iVar14);
    }
    iVar7 = (int)param_1[5];
    if (iVar7 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar7 + 0x1e;
      if (-1 < iVar7 + -1) {
        iVar11 = iVar7 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar5 = param_1 + 2;
    iVar9 = iVar7 + 1;
    iVar13 = iVar7 + 0x1f;
    if (-1 < iVar7) {
      iVar13 = iVar7;
    }
    if (iVar13 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar7) {
        if (iVar7 + 0x20U < 0xa0) {
          iVar9 = 0x80;
          iVar11 = iVar7;
        }
        else {
          uVar15 = iVar7 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar8 = 4;
            if (4 < uVar15) {
              uVar8 = uVar15;
            }
          }
          else {
            uVar8 = (uVar15 * 3 >> 3) + uVar15 + 0x10;
          }
          uVar10 = FUN_144a3809e(uVar8 << 2,0);
          iVar11 = (int)(uVar10 >> 2);
          iVar9 = -0x20;
          if ((int)uVar15 <= iVar11) {
            iVar9 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar5,iVar11);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar11 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar11 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar12 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar12 = plVar5;
        }
        bVar6 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar12 + (longlong)(iVar11 >> 5) * 4) << (bVar6 & 0x1f)) >>
             (bVar6 & 0x1f);
      }
    }
    lVar16 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[4];
    }
    bVar6 = (byte)iVar7 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar13 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar16 = (longlong)iVar14;
    iVar11 = *(int *)(*param_1 + 4 + lVar16 * 0x10);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar7 + -1;
    if (iVar7 + -1 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar7 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  iVar11 = 1;
  lVar4 = *param_1;
  lVar16 = lVar16 * 0x10;
  puVar2 = (undefined8 *)(lVar4 + lVar16);
  iVar7 = *param_3;
  *(int *)(lVar4 + lVar16) = iVar7;
  *(undefined8 *)(lVar4 + 4 + lVar16) = 0xffffffff00000000;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if ((uVar15 != 0) && (uVar15 != 1)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar9 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar9 != -1) {
      do {
        puVar3 = (undefined8 *)(*param_1 + (longlong)iVar9 * 0x10);
        if (*(int *)(*param_1 + (longlong)iVar9 * 0x10) == iVar7) {
          *puVar3 = *puVar2;
          FUN_143d3475e(param_1,iVar14);
          goto LAB_1415b3055;
        }
        iVar9 = *(int *)(puVar3 + 1);
      } while (iVar9 != -1);
    }
  }
  if (3 < uVar15) {
    uVar10 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
    lVar16 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar11 = 1 << ((byte)lVar16 & 0x1f);
  }
  if (((int)uVar15 < 1) || (iVar11 <= (int)param_1[9])) {
    param_2 = (int)param_1[9] - 1U & param_2;
    *(uint *)((longlong)puVar2 + 0xc) = param_2;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_2) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar11;
    FUN_1415b31ee(param_1);
  }
LAB_1415b3055:
  lVar16 = *param_1 + (longlong)iVar14 * 0x10;
LAB_1415b3066:
  return lVar16 + 4;
}



// FUNCTION 1415b31ee FUN_1415b31ee body=543 status=ok
// SIG undefined FUN_1415b31ee(void)

void FUN_1415b31ee(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6 * 0x10;
        uVar13 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar11 + lVar10);
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0xc + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 8 + lVar10) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_1415b33c4;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_1415b33c4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b340e FUN_1415b340e body=1088 status=ok
// SIG undefined FUN_1415b340e(void)

void FUN_1415b340e(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  undefined1 *puVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  bool bVar22;
  undefined1 auStack_98 [32];
  char *local_78;
  int local_70;
  int local_6c;
  undefined1 local_68 [16];
  undefined1 *local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_2 == '\x01') {
    FUN_1447a97f4(&local_70,param_2 + 0x10);
    if (0 < local_6c) {
      lVar18 = 0;
      uVar20 = 0;
      iVar4 = local_6c;
      iVar7 = DAT_14c948000;
      do {
        bVar21 = local_70 != 0;
        bVar22 = local_70 != iVar7;
        piVar13 = &DAT_14c948620;
        piVar14 = (int *)&DAT_14c948618;
        if (bVar22 && bVar21) {
          puVar15 = local_68;
          if (0 < local_4c) {
            puVar15 = local_58;
          }
          if (1 < iVar4) {
            puVar15 = local_58;
          }
          piVar13 = (int *)(puVar15 + lVar18 + 8);
          piVar14 = (int *)(puVar15 + lVar18);
        }
        if ((*piVar14 == DAT_14cb7beb0) && (*piVar13 == DAT_14cb7beb8)) {
LAB_1415b35f3:
          FUN_1402b5374(&local_70,uVar20 & 0xffffffff,0);
          iVar4 = local_6c;
          iVar7 = DAT_14c948000;
        }
        else {
          piVar13 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar15 = local_68;
            if (0 < local_4c) {
              puVar15 = local_58;
            }
            if (1 < iVar4) {
              puVar15 = local_58;
            }
            piVar13 = (int *)(puVar15 + lVar18 + 8);
            piVar14 = (int *)(puVar15 + lVar18);
          }
          if ((*piVar14 == DAT_14cb7bec8) && (*piVar13 == DAT_14cb7bed0)) goto LAB_1415b35f3;
          piVar13 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar15 = local_68;
            if (0 < local_4c) {
              puVar15 = local_58;
            }
            if (1 < iVar4) {
              puVar15 = local_58;
            }
            piVar13 = (int *)(puVar15 + lVar18 + 8);
            piVar14 = (int *)(puVar15 + lVar18);
          }
          if ((*piVar14 == DAT_14cb7bee0) && (*piVar13 == DAT_14cb7bee8)) goto LAB_1415b35f3;
          piVar13 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar15 = local_68;
            if (0 < local_4c) {
              puVar15 = local_58;
            }
            if (1 < iVar4) {
              puVar15 = local_58;
            }
            piVar13 = (int *)(puVar15 + lVar18 + 8);
            piVar14 = (int *)(puVar15 + lVar18);
          }
          if ((*piVar14 == DAT_14cb7bef8) && (*piVar13 == DAT_14cb7bf00)) goto LAB_1415b35f3;
          piVar13 = &DAT_14c948620;
          piVar14 = (int *)&DAT_14c948618;
          if (bVar22 && bVar21) {
            puVar15 = local_68;
            if (0 < local_4c) {
              puVar15 = local_58;
            }
            if (1 < iVar4) {
              puVar15 = local_58;
            }
            piVar13 = (int *)(puVar15 + lVar18 + 8);
            piVar14 = (int *)(puVar15 + lVar18);
          }
          if ((*piVar14 == DAT_14cb7bf10) && (*piVar13 == DAT_14cb7bf18)) goto LAB_1415b35f3;
        }
        uVar20 = uVar20 + 1;
        lVar18 = lVar18 + 0xc;
      } while ((longlong)uVar20 < (longlong)iVar4);
    }
    if (local_58 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    local_70 = *(int *)(param_2 + 0x10);
  }
  local_78 = param_2;
  iVar4 = FUN_1413e5a1e((longlong *)(param_1 + 0x30),local_70,param_2);
  if ((iVar4 != -1) &&
     (lVar18 = (longlong)iVar4 * 0xe8 + *(longlong *)(param_1 + 0x30),
     lVar18 != -0x38 && lVar18 != 0)) {
    iVar4 = *(int *)(lVar18 + 0xa8);
    if (iVar4 == 0) {
      uVar19 = 1;
      uVar20 = 0;
      iVar11 = 0;
      iVar7 = 0;
    }
    else {
      puVar5 = *(uint **)(lVar18 + 0xa0);
      if (*(uint **)(lVar18 + 0xa0) == (uint *)0x0) {
        puVar5 = (uint *)(lVar18 + 0x90);
      }
      uVar12 = *puVar5;
      if (uVar12 == 0) {
        iVar7 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar7 = iVar4 + -1;
        }
        uVar20 = 0;
        uVar19 = (ulonglong)(uint)(iVar7 >> 5);
        if (iVar7 >> 5 < 1) {
          uVar19 = uVar20;
        }
        iVar11 = 0;
        do {
          if (uVar19 == uVar20) goto LAB_1415b3703;
          iVar11 = iVar11 + 0x20;
          uVar12 = puVar5[uVar20 + 1];
          uVar20 = uVar20 + 1;
        } while (uVar12 == 0);
      }
      else {
        uVar20 = 0;
        iVar11 = 0;
      }
      uVar19 = (ulonglong)(-uVar12 & uVar12);
      uVar1 = uVar19 * 2 + 1;
      lVar16 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      iVar7 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar7) {
        iVar7 = iVar4;
      }
    }
    if (iVar7 != iVar4) {
      local_78 = local_78 + 0x38;
      uVar12 = 0xffffffff;
      bVar3 = DAT_14c950c29;
      iVar6 = iVar4;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar18 + 0x80) + (longlong)iVar7 * 0x10);
        if (((bVar3 & 1) == 0) || (plVar2 == (longlong *)0x0)) {
          if (plVar2 != (longlong *)0x0) goto LAB_1415b3763;
        }
        else {
          FUN_1456cec3c(plVar2);
LAB_1415b3763:
          (**(code **)(*plVar2 + 0x478))(plVar2,local_78);
          iVar6 = *(int *)(lVar18 + 0xa8);
          bVar3 = DAT_14c950c29;
        }
        uVar12 = uVar12 & ~(uint)uVar19;
        puVar5 = *(uint **)(lVar18 + 0xa0);
        if (*(uint **)(lVar18 + 0xa0) == (uint *)0x0) {
          puVar5 = (uint *)(lVar18 + 0x90);
        }
        iVar7 = (int)uVar20;
        lVar16 = (longlong)iVar7;
        uVar8 = puVar5[lVar16] & uVar12;
        if (uVar8 == 0) {
          iVar9 = iVar6 + 0x1e;
          if (-1 < iVar6 + -1) {
            iVar9 = iVar6 + -1;
          }
          iVar9 = iVar9 >> 5;
          iVar11 = iVar11 + 0x20;
          iVar10 = iVar9;
          if (iVar9 < iVar7) {
            iVar10 = iVar7;
          }
          if (iVar7 < iVar9) {
            lVar17 = 0;
            do {
              uVar8 = puVar5[lVar16 + lVar17 + 1];
              if (uVar8 != 0) {
                uVar20 = (ulonglong)(iVar7 + (int)lVar17 + 1);
                uVar12 = 0xffffffff;
                goto LAB_1415b37f7;
              }
              iVar11 = iVar11 + 0x20;
              lVar17 = lVar17 + 1;
            } while (iVar10 - lVar16 != lVar17);
            uVar12 = 0xffffffff;
            iVar7 = iVar10;
          }
          uVar20 = (ulonglong)(iVar7 + 1);
          iVar7 = iVar6;
        }
        else {
LAB_1415b37f7:
          uVar19 = (ulonglong)(-uVar8 & uVar8);
          uVar1 = uVar19 * 2 + 1;
          lVar16 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
            }
          }
          iVar7 = (iVar11 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
          if (iVar6 <= iVar7) {
            iVar7 = iVar6;
          }
        }
      } while (iVar7 != iVar4);
    }
  }
LAB_1415b3703:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1415b3850 FUN_1415b3850 body=258 status=ok
// SIG undefined FUN_1415b3850(void)

void FUN_1415b3850(void)

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
              0x110) < DAT_14ca17790) {
    FUN_144b3d300(&DAT_14ca17790);
    if (DAT_14ca17790 == -1) {
      FUN_1415b3954(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x150;
      local_58 = 0x2b0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca17710,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e275eb);
      _Init_thread_footer(&DAT_14ca17790);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1415b3954 FUN_1415b3954 body=226 status=ok
// SIG undefined FUN_1415b3954(void)

longlong * FUN_1415b3954(longlong *param_1)

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
  pcVar13 = FUN_145bea23c;
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



// FUNCTION 1415b3a38 FUN_1415b3a38 body=95 status=ok
// SIG undefined FUN_1415b3a38(void)

void FUN_1415b3a38(longlong param_1)

{
  if ((DAT_14cb0d2b0 != 0) && (*(char *)(param_1 + 0x231) == '\0')) {
    FUN_1458e058e();
    FUN_1447f69b6(&DAT_14caa8420);
    *(undefined1 *)(param_1 + 0x231) = 1;
    FUN_14575aa7a(param_1);
    FUN_14327338a(param_1);
    FUN_145d0ba40();
    FUN_1447f69b6(&DAT_14caa8400);
    return;
  }
  return;
}



// FUNCTION 1415b3a98 FUN_1415b3a98 body=164 status=ok
// SIG undefined FUN_1415b3a98(void)

void FUN_1415b3a98(void)

{
  undefined1 auStack_68 [32];
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  wchar_t *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = L"Utility";
  local_38 = 7;
  FUN_1446e940c(local_44,&local_40);
  local_40 = L"MaterialExpression";
  local_38 = 0x12;
  FUN_1446e940c(local_48,&local_40);
  local_40 = L"Utility";
  local_38 = 7;
  FUN_140208c1e(&DAT_14caeb468,local_48,local_44,&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


