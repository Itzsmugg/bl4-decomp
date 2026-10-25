// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145eae572 FUN_145eae572 body=138 status=ok
// SIG undefined FUN_145eae572(void)

code * FUN_145eae572(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000037e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eae5fc;
}



// FUNCTION 145eae5fc FUN_145eae5fc body=144 status=ok
// SIG undefined FUN_145eae5fc(void)

code * FUN_145eae5fc(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000037d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462faa64;
}



// FUNCTION 145eae68c FUN_145eae68c body=292 status=ok
// SIG undefined FUN_145eae68c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eae68c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27aa0) {
    FUN_144b3d300(&DAT_14ca27aa0);
    if (DAT_14ca27aa0 == -1) {
      FUN_145eae8fa();
      FUN_145eae7b0();
      FUN_140db5666(&DAT_14ca279f8,0,&DAT_14ca27990,L"FVisualizeGBufferHintsPS",
                    L"/Engine/Private/PostProcessGBufferHints.usf",L"MainPS",3,1,FUN_14728c1f4,
                    FUN_14728c194,&LAB_14728c17c,&LAB_14728c178,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2b4b8);
      _DAT_14ca279f8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ec296d);
      _Init_thread_footer(&DAT_14ca27aa0);
    }
  }
  return &DAT_14ca279f8;
}



// FUNCTION 145eae7b0 FUN_145eae7b0 body=205 status=ok
// SIG undefined FUN_145eae7b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eae7b0(void)

{
  if ((DAT_14ca279f7 & 2) == 0) {
    DAT_14ca279f7 = DAT_14ca279f7 | 2;
    _DAT_14ca27998 = L"FVisualizeGBufferHintsPS";
    _DAT_14ca279b0 = FUN_146826540;
    _DAT_14ca279b8 = FUN_146825d77;
    _DAT_14ca279c0 = FUN_146825fd6;
    _DAT_14ca279c8 = FUN_1407e02ea;
    _DAT_14ca279d0 = FUN_146826273;
    _DAT_14ca279a8 = FUN_14728c148;
    _DAT_14ca279e8 = 0xffffffff000000e0;
    _DAT_14ca279f0 = 8;
    DAT_14ca279f4 = 0;
    _DAT_14ca279d8 = &LAB_14728c174;
    FUN_145eae87e();
    FUN_1407e00cc(&DAT_14ca27990);
    return;
  }
  return;
}



// FUNCTION 145eae87e FUN_145eae87e body=123 status=ok
// SIG undefined FUN_145eae87e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eae87e(void)

{
  _DAT_14ca2c240 = L"BASE";
  DAT_14ca2c26a = 4;
  _DAT_14ca2c248 = FUN_140b35ae4();
  _DAT_14ca2c250 = DAT_14ca279a0;
  _DAT_14ca2c258 = &LAB_14682652b;
  DAT_14ca279a0 = &DAT_14ca2c240;
  DAT_14ca279f5 = DAT_14ca279f5 + '\x01';
  _DAT_14ca2c260 = 0x100000000;
  if (*(char *)(_DAT_14ca2c248 + 100) != '\0') {
    DAT_14ca279f6 = DAT_14ca279f6 + '\x01';
  }
  return;
}



// FUNCTION 145eae8fa FUN_145eae8fa body=261 status=ok
// SIG undefined FUN_145eae8fa(void)

void FUN_145eae8fa(void)

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
              0x110) < DAT_14ca2b538) {
    FUN_144b3d300(&DAT_14ca2b538);
    if (DAT_14ca2b538 == -1) {
      FUN_145eaea00(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x15;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2b4b8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee0ee1);
      _Init_thread_footer(&DAT_14ca2b538);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaea00 FUN_145eaea00 body=226 status=ok
// SIG undefined FUN_145eaea00(void)

longlong * FUN_145eaea00(longlong *param_1)

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
  pcVar13 = FUN_1462fad1e;
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



// FUNCTION 145eaeae8 FUN_145eaeae8 body=138 status=ok
// SIG undefined FUN_145eaeae8(void)

code * FUN_145eaeae8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OriginalSceneColorTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa00000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147291edc;
}



// FUNCTION 145eaeb72 FUN_145eaeb72 body=144 status=ok
// SIG undefined FUN_145eaeb72(void)

code * FUN_145eaeb72(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000018;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fae2e;
}



// FUNCTION 145eaec02 FUN_145eaec02 body=292 status=ok
// SIG undefined FUN_145eaec02(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eaec02(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca27f58) {
    FUN_144b3d300(&DAT_14ca27f58);
    if (DAT_14ca27f58 == -1) {
      FUN_145eaee70();
      FUN_145eaed26();
      FUN_140db5666(&DAT_14ca27eb0,0,&DAT_14ca27e48,L"FGBufferPickingCS",
                    L"/Engine/Private/PostProcessGBufferHints.usf",L"MainCS",5,1,FUN_14728c81e,
                    FUN_14728c7be,FUN_1459b451c,&LAB_14728c7ba,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2bd08);
      _DAT_14ca27eb0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ed6878);
      _Init_thread_footer(&DAT_14ca27f58);
    }
  }
  return &DAT_14ca27eb0;
}



// FUNCTION 145eaed26 FUN_145eaed26 body=205 status=ok
// SIG undefined FUN_145eaed26(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaed26(void)

{
  if ((DAT_14ca27eaf & 2) == 0) {
    DAT_14ca27eaf = DAT_14ca27eaf | 2;
    _DAT_14ca27e50 = L"FGBufferPickingCS";
    _DAT_14ca27e68 = FUN_146826540;
    _DAT_14ca27e70 = FUN_146825d77;
    _DAT_14ca27e78 = FUN_146825fd6;
    _DAT_14ca27e80 = FUN_1407e02ea;
    _DAT_14ca27e88 = FUN_146826273;
    _DAT_14ca27e60 = FUN_14728c78a;
    _DAT_14ca27ea0 = 0xffffffff000000e0;
    _DAT_14ca27ea8 = 8;
    DAT_14ca27eac = 0;
    _DAT_14ca27e90 = &LAB_14728c7b6;
    FUN_145eaedf4();
    FUN_1407e00cc(&DAT_14ca27e48);
    return;
  }
  return;
}



// FUNCTION 145eaedf4 FUN_145eaedf4 body=123 status=ok
// SIG undefined FUN_145eaedf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaedf4(void)

{
  _DAT_14ca2c2d0 = L"BASE";
  DAT_14ca2c2fa = 4;
  _DAT_14ca2c2d8 = FUN_140b35ae4();
  _DAT_14ca2c2e0 = DAT_14ca27e58;
  _DAT_14ca2c2e8 = &LAB_14682652b;
  DAT_14ca27e58 = &DAT_14ca2c2d0;
  DAT_14ca27ead = DAT_14ca27ead + '\x01';
  _DAT_14ca2c2f0 = 0x100000000;
  if (*(char *)(_DAT_14ca2c2d8 + 100) != '\0') {
    DAT_14ca27eae = DAT_14ca27eae + '\x01';
  }
  return;
}



// FUNCTION 145eaee70 FUN_145eaee70 body=261 status=ok
// SIG undefined FUN_145eaee70(void)

void FUN_145eaee70(void)

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
              0x110) < DAT_14ca2bd88) {
    FUN_144b3d300(&DAT_14ca2bd88);
    if (DAT_14ca2bd88 == -1) {
      FUN_145eaef76(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x40;
      local_58 = 0xdd3;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca2bd08,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee435f);
      _Init_thread_footer(&DAT_14ca2bd88);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaef76 FUN_145eaef76 body=226 status=ok
// SIG undefined FUN_145eaef76(void)

longlong * FUN_145eaef76(longlong *param_1)

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
  pcVar13 = FUN_1462fb052;
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



// FUNCTION 145eaf05e FUN_145eaf05e body=138 status=ok
// SIG undefined FUN_145eaf05e(void)

undefined1 * FUN_145eaf05e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTexturesStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xdd4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eaf05a;
}



// FUNCTION 145eaf0e8 FUN_145eaf0e8 body=144 status=ok
// SIG undefined FUN_145eaf0e8(void)

code * FUN_145eaf0e8(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000dd5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eaf05e;
}



// FUNCTION 145eaf178 FUN_145eaf178 body=292 status=ok
// SIG undefined FUN_145eaf178(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eaf178(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2cbf0) {
    FUN_144b3d300(&DAT_14ca2cbf0);
    if (DAT_14ca2cbf0 == -1) {
      FUN_145eaf3e6();
      FUN_145eaf29c();
      FUN_140db5666(&DAT_14ca2cb48,0,&DAT_14ca2cae0,L"FMobileBloomSetupPS",
                    L"/Engine/Private/PostProcessMobile.usf",L"BloomPS_Mobile",3,0x20,FUN_1472956b8,
                    FUN_147295658,FUN_1411bbbde,&LAB_147295654,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca324e0);
      _DAT_14ca2cb48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ef8e24);
      _Init_thread_footer(&DAT_14ca2cbf0);
    }
  }
  return &DAT_14ca2cb48;
}



// FUNCTION 145eaf29c FUN_145eaf29c body=205 status=ok
// SIG undefined FUN_145eaf29c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaf29c(void)

{
  if ((DAT_14ca2cb47 & 2) == 0) {
    DAT_14ca2cb47 = DAT_14ca2cb47 | 2;
    _DAT_14ca2cae8 = L"FMobileBloomSetupPS";
    _DAT_14ca2cb00 = FUN_146826540;
    _DAT_14ca2cb08 = FUN_146825d77;
    _DAT_14ca2cb10 = FUN_146825fd6;
    _DAT_14ca2cb18 = FUN_1407e02ea;
    _DAT_14ca2cb20 = FUN_146826273;
    _DAT_14ca2caf8 = FUN_147295624;
    _DAT_14ca2cb38 = 0xffffffff000000e0;
    _DAT_14ca2cb40 = 8;
    DAT_14ca2cb44 = 0;
    _DAT_14ca2cb28 = &LAB_147295650;
    FUN_145eaf36a();
    FUN_1407e00cc(&DAT_14ca2cae0);
    return;
  }
  return;
}



// FUNCTION 145eaf36a FUN_145eaf36a body=123 status=ok
// SIG undefined FUN_145eaf36a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaf36a(void)

{
  _DAT_14ca343c8 = L"BASE";
  DAT_14ca343f2 = 4;
  _DAT_14ca343d0 = FUN_140b35ae4();
  _DAT_14ca343d8 = DAT_14ca2caf0;
  _DAT_14ca343e0 = &LAB_14682652b;
  DAT_14ca2caf0 = &DAT_14ca343c8;
  DAT_14ca2cb45 = DAT_14ca2cb45 + '\x01';
  _DAT_14ca343e8 = 0x100000000;
  if (*(char *)(_DAT_14ca343d0 + 100) != '\0') {
    DAT_14ca2cb46 = DAT_14ca2cb46 + '\x01';
  }
  return;
}



// FUNCTION 145eaf3e6 FUN_145eaf3e6 body=261 status=ok
// SIG undefined FUN_145eaf3e6(void)

void FUN_145eaf3e6(void)

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
              0x110) < DAT_14ca32560) {
    FUN_144b3d300(&DAT_14ca32560);
    if (DAT_14ca32560 == -1) {
      FUN_145eaf4ec(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0xda;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca324e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f13ea1);
      _Init_thread_footer(&DAT_14ca32560);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaf4ec FUN_145eaf4ec body=226 status=ok
// SIG undefined FUN_145eaf4ec(void)

longlong * FUN_145eaf4ec(longlong *param_1)

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
  pcVar13 = FUN_1462fbd50;
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



// FUNCTION 145eaf5d4 FUN_145eaf5d4 body=138 status=ok
// SIG undefined FUN_145eaf5d4(void)

code * FUN_145eaf5d4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SunShaftAndDofTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xd0000000e0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14729b6d4;
}



// FUNCTION 145eaf65e FUN_145eaf65e body=144 status=ok
// SIG undefined FUN_145eaf65e(void)

code * FUN_145eaf65e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14147abf6();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"EyeAdaptation";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FEyeAdaptationParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x30000000dd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462fbe60;
}



// FUNCTION 145eaf6ee FUN_145eaf6ee body=292 status=ok
// SIG undefined FUN_145eaf6ee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eaf6ee(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca387c0) {
    FUN_144b3d300(&DAT_14ca387c0);
    if (DAT_14ca387c0 == -1) {
      FUN_145eaf95c();
      FUN_145eaf812();
      FUN_140db5666(&DAT_14ca38718,0,&DAT_14ca386b0,L"FRayTracingAmbientOcclusionRGS",
                    L"/Engine/Private/RayTracing/RayTracingAmbientOcclusionRGS.usf",
                    L"AmbientOcclusionRGS",6,4,FUN_1472b14c4,FUN_1472b1480,&LAB_146300d84,
                    &LAB_1472b147c,&LAB_1472b1476,&LAB_1472b1456,0xe0,&DAT_14ca3e638);
      _DAT_14ca38718 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f64d97);
      _Init_thread_footer(&DAT_14ca387c0);
    }
  }
  return &DAT_14ca38718;
}



// FUNCTION 145eaf812 FUN_145eaf812 body=205 status=ok
// SIG undefined FUN_145eaf812(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaf812(void)

{
  if ((DAT_14ca38717 & 2) == 0) {
    DAT_14ca38717 = DAT_14ca38717 | 2;
    _DAT_14ca386b8 = L"FRayTracingAmbientOcclusionRGS";
    _DAT_14ca386d0 = FUN_146826540;
    _DAT_14ca386d8 = FUN_146825d77;
    _DAT_14ca386e0 = FUN_146825fd6;
    _DAT_14ca386e8 = FUN_1407e02ea;
    _DAT_14ca386f0 = FUN_146826273;
    _DAT_14ca386c8 = FUN_1472b1428;
    _DAT_14ca38708 = 0xffffffff000000e0;
    _DAT_14ca38710 = 8;
    DAT_14ca38714 = 0;
    _DAT_14ca386f8 = &LAB_1472b1452;
    FUN_145eaf8e0();
    FUN_1407e00cc(&DAT_14ca386b0);
    return;
  }
  return;
}



// FUNCTION 145eaf8e0 FUN_145eaf8e0 body=123 status=ok
// SIG undefined FUN_145eaf8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eaf8e0(void)

{
  _DAT_14ca3f3e0 = L"BASE";
  DAT_14ca3f40a = 4;
  _DAT_14ca3f3e8 = FUN_140b35ae4();
  _DAT_14ca3f3f0 = DAT_14ca386c0;
  _DAT_14ca3f3f8 = &LAB_14682652b;
  DAT_14ca386c0 = &DAT_14ca3f3e0;
  DAT_14ca38715 = DAT_14ca38715 + '\x01';
  _DAT_14ca3f400 = 0x100000000;
  if (*(char *)(_DAT_14ca3f3e8 + 100) != '\0') {
    DAT_14ca38716 = DAT_14ca38716 + '\x01';
  }
  return;
}



// FUNCTION 145eaf95c FUN_145eaf95c body=261 status=ok
// SIG undefined FUN_145eaf95c(void)

void FUN_145eaf95c(void)

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
              0x110) < DAT_14ca3e6b8) {
    FUN_144b3d300(&DAT_14ca3e6b8);
    if (DAT_14ca3e6b8 == -1) {
      FUN_145eafa62(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xb0;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e638,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f696);
      _Init_thread_footer(&DAT_14ca3e6b8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eafa62 FUN_145eafa62 body=226 status=ok
// SIG undefined FUN_145eafa62(void)

longlong * FUN_145eafa62(longlong *param_1)

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
  pcVar13 = FUN_146300eda;
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



// FUNCTION 145eafb4a FUN_145eafb4a body=138 status=ok
// SIG undefined FUN_145eafb4a(void)

code * FUN_145eafb4a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxRayDistance";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bbd9a;
}



// FUNCTION 145eafbd4 FUN_145eafbd4 body=144 status=ok
// SIG undefined FUN_145eafbd4(void)

code * FUN_145eafbd4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000006f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1472bbb72;
}



// FUNCTION 145eafc64 FUN_145eafc64 body=292 status=ok
// SIG undefined FUN_145eafc64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eafc64(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca388e8) {
    FUN_144b3d300(&DAT_14ca388e8);
    if (DAT_14ca388e8 == -1) {
      FUN_145eafed2();
      FUN_145eafd88();
      FUN_140db5666(&DAT_14ca38840,0,&DAT_14ca387d8,L"FRayTracingBarycentricsRGS",
                    L"/Engine/Private/RayTracing/RayTracingBarycentrics.usf",
                    L"RayTracingBarycentricsMainRGS",6,1,FUN_1472b16f6,FUN_1472b16b2,&LAB_146300d8c,
                    &LAB_1472b16ae,&LAB_1472b16a8,&LAB_1472b1688,0xe0,&DAT_14ca3e6c0);
      _DAT_14ca38840 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f6574a);
      _Init_thread_footer(&DAT_14ca388e8);
    }
  }
  return &DAT_14ca38840;
}



// FUNCTION 145eafd88 FUN_145eafd88 body=205 status=ok
// SIG undefined FUN_145eafd88(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eafd88(void)

{
  if ((DAT_14ca3883f & 2) == 0) {
    DAT_14ca3883f = DAT_14ca3883f | 2;
    _DAT_14ca387e0 = L"FRayTracingBarycentricsRGS";
    _DAT_14ca387f8 = FUN_146826540;
    _DAT_14ca38800 = FUN_146825d77;
    _DAT_14ca38808 = FUN_146825fd6;
    _DAT_14ca38810 = FUN_1407e02ea;
    _DAT_14ca38818 = FUN_146826273;
    _DAT_14ca387f0 = FUN_1472b165a;
    _DAT_14ca38830 = 0xffffffff000000e0;
    _DAT_14ca38838 = 8;
    DAT_14ca3883c = 0;
    _DAT_14ca38820 = &LAB_1472b1684;
    FUN_145eafe56();
    FUN_1407e00cc(&DAT_14ca387d8);
    return;
  }
  return;
}



// FUNCTION 145eafe56 FUN_145eafe56 body=123 status=ok
// SIG undefined FUN_145eafe56(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eafe56(void)

{
  _DAT_14ca3f410 = L"BASE";
  DAT_14ca3f43a = 4;
  _DAT_14ca3f418 = FUN_140b35ae4();
  _DAT_14ca3f420 = DAT_14ca387e8;
  _DAT_14ca3f428 = &LAB_14682652b;
  DAT_14ca387e8 = &DAT_14ca3f410;
  DAT_14ca3883d = DAT_14ca3883d + '\x01';
  _DAT_14ca3f430 = 0x100000000;
  if (*(char *)(_DAT_14ca3f418 + 100) != '\0') {
    DAT_14ca3883e = DAT_14ca3883e + '\x01';
  }
  return;
}



// FUNCTION 145eafed2 FUN_145eafed2 body=261 status=ok
// SIG undefined FUN_145eafed2(void)

void FUN_145eafed2(void)

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
              0x110) < DAT_14ca3e740) {
    FUN_144b3d300(&DAT_14ca3e740);
    if (DAT_14ca3e740 == -1) {
      FUN_145eaffd8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x1a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3e6c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f6a2);
      _Init_thread_footer(&DAT_14ca3e740);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eaffd8 FUN_145eaffd8 body=226 status=ok
// SIG undefined FUN_145eaffd8(void)

longlong * FUN_145eaffd8(longlong *param_1)

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
  pcVar13 = FUN_146301080;
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



// FUNCTION 145eb00c0 FUN_145eb00c0 body=138 status=ok
// SIG undefined FUN_145eb00c0(void)

code * FUN_145eb00c0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000001c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bbe1e;
}



// FUNCTION 145eb014a FUN_145eb014a body=144 status=ok
// SIG undefined FUN_145eb014a(void)

code * FUN_145eb014a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eb00c0;
}



// FUNCTION 145eb01da FUN_145eb01da body=292 status=ok
// SIG undefined FUN_145eb01da(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb01da(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca398b0) {
    FUN_144b3d300(&DAT_14ca398b0);
    if (DAT_14ca398b0 == -1) {
      FUN_145eb0448();
      FUN_145eb02fe();
      FUN_140db5666(&DAT_14ca39808,0,&DAT_14ca397a0,L"FRayTracingPickingRGS",
                    L"/Engine/Private/RayTracing/RayTracingDebugPicking.usf",
                    L"RayTracingDebugPickingRGS",6,1,FUN_1472b1fe2,FUN_1472b1f9e,&LAB_146300ddc,
                    &LAB_1472b1f9a,&LAB_1472b1f94,&LAB_1472b1f74,0xe0,&DAT_14ca3eb88);
      _DAT_14ca39808 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142f65bac);
      _Init_thread_footer(&DAT_14ca398b0);
    }
  }
  return &DAT_14ca39808;
}



// FUNCTION 145eb02fe FUN_145eb02fe body=205 status=ok
// SIG undefined FUN_145eb02fe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb02fe(void)

{
  if ((DAT_14ca39807 & 2) == 0) {
    DAT_14ca39807 = DAT_14ca39807 | 2;
    _DAT_14ca397a8 = L"FRayTracingPickingRGS";
    _DAT_14ca397c0 = FUN_146826540;
    _DAT_14ca397c8 = FUN_146825d77;
    _DAT_14ca397d0 = FUN_146825fd6;
    _DAT_14ca397d8 = FUN_1407e02ea;
    _DAT_14ca397e0 = FUN_146826273;
    _DAT_14ca397b8 = FUN_1472b1f46;
    _DAT_14ca397f8 = 0xffffffff000000e0;
    _DAT_14ca39800 = 8;
    DAT_14ca39804 = 0;
    _DAT_14ca397e8 = &LAB_1472b1f70;
    FUN_145eb03cc();
    FUN_1407e00cc(&DAT_14ca397a0);
    return;
  }
  return;
}



// FUNCTION 145eb03cc FUN_145eb03cc body=123 status=ok
// SIG undefined FUN_145eb03cc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb03cc(void)

{
  _DAT_14ca3f650 = L"BASE";
  DAT_14ca3f67a = 4;
  _DAT_14ca3f658 = FUN_140b35ae4();
  _DAT_14ca3f660 = DAT_14ca397b0;
  _DAT_14ca3f668 = &LAB_14682652b;
  DAT_14ca397b0 = &DAT_14ca3f650;
  DAT_14ca39805 = DAT_14ca39805 + '\x01';
  _DAT_14ca3f670 = 0x100000000;
  if (*(char *)(_DAT_14ca3f658 + 100) != '\0') {
    DAT_14ca39806 = DAT_14ca39806 + '\x01';
  }
  return;
}



// FUNCTION 145eb0448 FUN_145eb0448 body=261 status=ok
// SIG undefined FUN_145eb0448(void)

void FUN_145eb0448(void)

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
              0x110) < DAT_14ca3ec08) {
    FUN_144b3d300(&DAT_14ca3ec08);
    if (DAT_14ca3ec08 == -1) {
      FUN_145eb054e(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0x186;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca3eb88,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142f6f70e);
      _Init_thread_footer(&DAT_14ca3ec08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb054e FUN_145eb054e body=226 status=ok
// SIG undefined FUN_145eb054e(void)

longlong * FUN_145eb054e(longlong *param_1)

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
  pcVar13 = FUN_146301a58;
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



// FUNCTION 145eb0636 FUN_145eb0636 body=138 status=ok
// SIG undefined FUN_145eb0636(void)

code * FUN_145eb0636(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000018b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1472bcb8a;
}



// FUNCTION 145eb06c0 FUN_145eb06c0 body=144 status=ok
// SIG undefined FUN_145eb06c0(void)

code * FUN_145eb06c0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x300000018c;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eb0636;
}



// FUNCTION 145eb0750 FUN_145eb0750 body=292 status=ok
// SIG undefined FUN_145eb0750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb0750(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca45668) {
    FUN_144b3d300(&DAT_14ca45668);
    if (DAT_14ca45668 == -1) {
      FUN_145eb09be();
      FUN_145eb0874();
      FUN_140db5666(&DAT_14ca455c0,0,&DAT_14ca45558,L"FSceneCullingDebugRender_CS",
                    L"/Engine/Private/SceneCulling/SceneCullingDebugRender.usf",L"DebugRender",5,1,
                    FUN_1472d9aa2,FUN_1472d9a42,&LAB_146305b00,&LAB_1472d9a3e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca46d90);
      _DAT_14ca455c0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142fd904a);
      _Init_thread_footer(&DAT_14ca45668);
    }
  }
  return &DAT_14ca455c0;
}



// FUNCTION 145eb0874 FUN_145eb0874 body=205 status=ok
// SIG undefined FUN_145eb0874(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb0874(void)

{
  if ((DAT_14ca455bf & 2) == 0) {
    DAT_14ca455bf = DAT_14ca455bf | 2;
    _DAT_14ca45560 = L"FSceneCullingDebugRender_CS";
    _DAT_14ca45578 = FUN_146826540;
    _DAT_14ca45580 = FUN_146825d77;
    _DAT_14ca45588 = FUN_146825fd6;
    _DAT_14ca45590 = FUN_1407e02ea;
    _DAT_14ca45598 = FUN_146826273;
    _DAT_14ca45570 = FUN_1472d9a10;
    _DAT_14ca455b0 = 0xffffffff000000e0;
    _DAT_14ca455b8 = 8;
    DAT_14ca455bc = 0;
    _DAT_14ca455a0 = &LAB_1472d9a3a;
    FUN_145eb0942();
    FUN_1407e00cc(&DAT_14ca45558);
    return;
  }
  return;
}



// FUNCTION 145eb0942 FUN_145eb0942 body=123 status=ok
// SIG undefined FUN_145eb0942(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb0942(void)

{
  _DAT_14ca47140 = L"BASE";
  DAT_14ca4716a = 4;
  _DAT_14ca47148 = FUN_140b35ae4();
  _DAT_14ca47150 = DAT_14ca45568;
  _DAT_14ca47158 = &LAB_14682652b;
  DAT_14ca45568 = &DAT_14ca47140;
  DAT_14ca455bd = DAT_14ca455bd + '\x01';
  _DAT_14ca47160 = 0x100000000;
  if (*(char *)(_DAT_14ca47148 + 100) != '\0') {
    DAT_14ca455be = DAT_14ca455be + '\x01';
  }
  return;
}



// FUNCTION 145eb09be FUN_145eb09be body=261 status=ok
// SIG undefined FUN_145eb09be(void)

void FUN_145eb09be(void)

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
              0x110) < DAT_14ca46e10) {
    FUN_144b3d300(&DAT_14ca46e10);
    if (DAT_14ca46e10 == -1) {
      FUN_145eb0ac4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x67;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca46d90,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142fe9a39);
      _Init_thread_footer(&DAT_14ca46e10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb0ac4 FUN_145eb0ac4 body=226 status=ok
// SIG undefined FUN_145eb0ac4(void)

longlong * FUN_145eb0ac4(longlong *param_1)

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
  pcVar13 = FUN_146305e4c;
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



// FUNCTION 145eb0bac FUN_145eb0bac body=138 status=ok
// SIG undefined FUN_145eb0bac(void)

code * FUN_145eb0bac(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxCells";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x600000006a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb0c36;
}



// FUNCTION 145eb0c36 FUN_145eb0c36 body=144 status=ok
// SIG undefined FUN_145eb0c36(void)

code * FUN_145eb0c36(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145cda994();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"InstanceHierarchyParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FInstanceHierarchyParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000069;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_146305ed4;
}



// FUNCTION 145eb0cc6 FUN_145eb0cc6 body=292 status=ok
// SIG undefined FUN_145eb0cc6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb0cc6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5b8c8) {
    FUN_144b3d300(&DAT_14ca5b8c8);
    if (DAT_14ca5b8c8 == -1) {
      FUN_145eb0f34();
      FUN_145eb0dea();
      FUN_140db5666(&DAT_14ca5b820,0,&DAT_14ca5b7b8,L"FScreenSpaceShadowsBendCS",
                    L"/Engine/Private/ScreenSpaceShadows.usf",L"ScreenSpaceShadowsBendCS",5,3,
                    FUN_1473105f0,FUN_147310590,&LAB_14731058c,&LAB_147310588,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca5bbf0);
      _DAT_14ca5b820 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14307c9c9);
      _Init_thread_footer(&DAT_14ca5b8c8);
    }
  }
  return &DAT_14ca5b820;
}



// FUNCTION 145eb0dea FUN_145eb0dea body=205 status=ok
// SIG undefined FUN_145eb0dea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb0dea(void)

{
  if ((DAT_14ca5b81f & 2) == 0) {
    DAT_14ca5b81f = DAT_14ca5b81f | 2;
    _DAT_14ca5b7c0 = L"FScreenSpaceShadowsBendCS";
    _DAT_14ca5b7d8 = FUN_146826540;
    _DAT_14ca5b7e0 = FUN_146825d77;
    _DAT_14ca5b7e8 = FUN_146825fd6;
    _DAT_14ca5b7f0 = FUN_1407e02ea;
    _DAT_14ca5b7f8 = FUN_146826273;
    _DAT_14ca5b7d0 = FUN_14731055a;
    _DAT_14ca5b810 = 0xffffffff000000e0;
    _DAT_14ca5b818 = 8;
    DAT_14ca5b81c = 0;
    _DAT_14ca5b800 = &LAB_147310584;
    FUN_145eb0eb8();
    FUN_1407e00cc(&DAT_14ca5b7b8);
    return;
  }
  return;
}



// FUNCTION 145eb0eb8 FUN_145eb0eb8 body=123 status=ok
// SIG undefined FUN_145eb0eb8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb0eb8(void)

{
  _DAT_14ca5bd68 = L"BASE";
  DAT_14ca5bd92 = 4;
  _DAT_14ca5bd70 = FUN_140b35ae4();
  _DAT_14ca5bd78 = DAT_14ca5b7c8;
  _DAT_14ca5bd80 = &LAB_14682652b;
  DAT_14ca5b7c8 = &DAT_14ca5bd68;
  DAT_14ca5b81d = DAT_14ca5b81d + '\x01';
  _DAT_14ca5bd88 = 0x100000000;
  if (*(char *)(_DAT_14ca5bd70 + 100) != '\0') {
    DAT_14ca5b81e = DAT_14ca5b81e + '\x01';
  }
  return;
}



// FUNCTION 145eb0f34 FUN_145eb0f34 body=261 status=ok
// SIG undefined FUN_145eb0f34(void)

void FUN_145eb0f34(void)

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
              0x110) < DAT_14ca5bc70) {
    FUN_144b3d300(&DAT_14ca5bc70);
    if (DAT_14ca5bc70 == -1) {
      FUN_14158023c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x89;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca5bbf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14307f3fc);
      _Init_thread_footer(&DAT_14ca5bc70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb103e FUN_145eb103e body=138 status=ok
// SIG undefined FUN_145eb103e(void)

code * FUN_145eb103e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ContactShadowNonCastingIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x6800000093;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147313112;
}



// FUNCTION 145eb10c8 FUN_145eb10c8 body=144 status=ok
// SIG undefined FUN_145eb10c8(void)

code * FUN_145eb10c8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x400000008e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14731333a;
}



// FUNCTION 145eb1158 FUN_145eb1158 body=292 status=ok
// SIG undefined FUN_145eb1158(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb1158(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca5ff18) {
    FUN_144b3d300(&DAT_14ca5ff18);
    if (DAT_14ca5ff18 == -1) {
      FUN_145eb13c6();
      FUN_145eb127c();
      FUN_140db5666(&DAT_14ca5fe70,0,&DAT_14ca5fe08,L"FMaterialPrintInfoCS",
                    L"/Engine/Private/Substrate/SubstrateVisualize.usf",L"MaterialPrintInfoCS",5,1,
                    FUN_147320f9e,FUN_147320f3e,&LAB_1458bec80,&LAB_147320f3a,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca62658);
      _DAT_14ca5fe70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a8864);
      _Init_thread_footer(&DAT_14ca5ff18);
    }
  }
  return &DAT_14ca5fe70;
}



// FUNCTION 145eb127c FUN_145eb127c body=205 status=ok
// SIG undefined FUN_145eb127c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb127c(void)

{
  if ((DAT_14ca5fe6f & 2) == 0) {
    DAT_14ca5fe6f = DAT_14ca5fe6f | 2;
    _DAT_14ca5fe10 = L"FMaterialPrintInfoCS";
    _DAT_14ca5fe28 = FUN_146826540;
    _DAT_14ca5fe30 = FUN_146825d77;
    _DAT_14ca5fe38 = FUN_146825fd6;
    _DAT_14ca5fe40 = FUN_1407e02ea;
    _DAT_14ca5fe48 = FUN_146826273;
    _DAT_14ca5fe20 = FUN_147320f0c;
    _DAT_14ca5fe60 = 0xffffffff000000e0;
    _DAT_14ca5fe68 = 8;
    DAT_14ca5fe6c = 0;
    _DAT_14ca5fe50 = &LAB_147320f36;
    FUN_145eb134a();
    FUN_1407e00cc(&DAT_14ca5fe08);
    return;
  }
  return;
}



// FUNCTION 145eb134a FUN_145eb134a body=123 status=ok
// SIG undefined FUN_145eb134a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb134a(void)

{
  _DAT_14ca63328 = L"BASE";
  DAT_14ca63352 = 4;
  _DAT_14ca63330 = FUN_140b35ae4();
  _DAT_14ca63338 = DAT_14ca5fe18;
  _DAT_14ca63340 = &LAB_14682652b;
  DAT_14ca5fe18 = &DAT_14ca63328;
  DAT_14ca5fe6d = DAT_14ca5fe6d + '\x01';
  _DAT_14ca63348 = 0x100000000;
  if (*(char *)(_DAT_14ca63330 + 100) != '\0') {
    DAT_14ca5fe6e = DAT_14ca5fe6e + '\x01';
  }
  return;
}



// FUNCTION 145eb13c6 FUN_145eb13c6 body=261 status=ok
// SIG undefined FUN_145eb13c6(void)

void FUN_145eb13c6(void)

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
              0x110) < DAT_14ca626d8) {
    FUN_144b3d300(&DAT_14ca626d8);
    if (DAT_14ca626d8 == -1) {
      FUN_145eb14cc(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0xc0;
      local_58 = 0x30;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca62658,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bc0ec);
      _Init_thread_footer(&DAT_14ca626d8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb14cc FUN_145eb14cc body=226 status=ok
// SIG undefined FUN_145eb14cc(void)

longlong * FUN_145eb14cc(longlong *param_1)

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
  pcVar13 = FUN_14630e098;
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



// FUNCTION 145eb15b4 FUN_145eb15b4 body=138 status=ok
// SIG undefined FUN_145eb15b4(void)

code * FUN_145eb15b4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOverrideCursorPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000032;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147323fc8;
}



// FUNCTION 145eb163e FUN_145eb163e body=144 status=ok
// SIG undefined FUN_145eb163e(void)

code * FUN_145eb163e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630e240;
}



// FUNCTION 145eb16ce FUN_145eb16ce body=292 status=ok
// SIG undefined FUN_145eb16ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb16ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60040) {
    FUN_144b3d300(&DAT_14ca60040);
    if (DAT_14ca60040 == -1) {
      FUN_145eb193c();
      FUN_145eb17f2();
      FUN_140db5666(&DAT_14ca5ff98,0,&DAT_14ca5ff30,L"FVisualizeMaterialCountPS",
                    L"/Engine/Private/Substrate/SubstrateVisualize.usf",L"VisualizeMaterialPS",3,1,
                    FUN_147321064,FUN_147321004,&LAB_14630dca0,&LAB_147321000,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca626e0);
      _DAT_14ca5ff98 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a8870);
      _Init_thread_footer(&DAT_14ca60040);
    }
  }
  return &DAT_14ca5ff98;
}



// FUNCTION 145eb17f2 FUN_145eb17f2 body=205 status=ok
// SIG undefined FUN_145eb17f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb17f2(void)

{
  if ((DAT_14ca5ff97 & 2) == 0) {
    DAT_14ca5ff97 = DAT_14ca5ff97 | 2;
    _DAT_14ca5ff38 = L"FVisualizeMaterialCountPS";
    _DAT_14ca5ff50 = FUN_146826540;
    _DAT_14ca5ff58 = FUN_146825d77;
    _DAT_14ca5ff60 = FUN_146825fd6;
    _DAT_14ca5ff68 = FUN_1407e02ea;
    _DAT_14ca5ff70 = FUN_146826273;
    _DAT_14ca5ff48 = FUN_147320fd2;
    _DAT_14ca5ff88 = 0xffffffff000000e0;
    _DAT_14ca5ff90 = 8;
    DAT_14ca5ff94 = 0;
    _DAT_14ca5ff78 = &LAB_147320ffc;
    FUN_145eb18c0();
    FUN_1407e00cc(&DAT_14ca5ff30);
    return;
  }
  return;
}



// FUNCTION 145eb18c0 FUN_145eb18c0 body=123 status=ok
// SIG undefined FUN_145eb18c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb18c0(void)

{
  _DAT_14ca63358 = L"BASE";
  DAT_14ca63382 = 4;
  _DAT_14ca63360 = FUN_140b35ae4();
  _DAT_14ca63368 = DAT_14ca5ff40;
  _DAT_14ca63370 = &LAB_14682652b;
  DAT_14ca5ff40 = &DAT_14ca63358;
  DAT_14ca5ff95 = DAT_14ca5ff95 + '\x01';
  _DAT_14ca63378 = 0x100000000;
  if (*(char *)(_DAT_14ca63360 + 100) != '\0') {
    DAT_14ca5ff96 = DAT_14ca5ff96 + '\x01';
  }
  return;
}



// FUNCTION 145eb193c FUN_145eb193c body=261 status=ok
// SIG undefined FUN_145eb193c(void)

void FUN_145eb193c(void)

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
              0x110) < DAT_14ca62760) {
    FUN_144b3d300(&DAT_14ca62760);
    if (DAT_14ca62760 == -1) {
      FUN_145eb1a42(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x5c;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca626e0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bc0f8);
      _Init_thread_footer(&DAT_14ca62760);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb1a42 FUN_145eb1a42 body=226 status=ok
// SIG undefined FUN_145eb1a42(void)

longlong * FUN_145eb1a42(longlong *param_1)

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
  pcVar13 = FUN_14630e2ce;
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



// FUNCTION 145eb1b2a FUN_145eb1b2a body=138 status=ok
// SIG undefined FUN_145eb1b2a(void)

code * FUN_145eb1b2a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bOverrideCursorPosition";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000005f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14732404c;
}



// FUNCTION 145eb1bb4 FUN_145eb1bb4 body=144 status=ok
// SIG undefined FUN_145eb1bb4(void)

code * FUN_145eb1bb4(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_14630e476;
}



// FUNCTION 145eb1c44 FUN_145eb1c44 body=292 status=ok
// SIG undefined FUN_145eb1c44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb1c44(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca64b20) {
    FUN_144b3d300(&DAT_14ca64b20);
    if (DAT_14ca64b20 == -1) {
      FUN_145eb1eb2();
      FUN_145eb1d68();
      FUN_140db5666(&DAT_14ca64a78,0,&DAT_14ca64a10,L"FGeneratePageFlagsFromFroxelsCS",
                    L"/Engine/Private/VirtualShadowMaps/VirtualShadowMapPageMarking.usf",
                    L"GeneratePageFlagsFromFroxelsCS",5,2,FUN_14732b04c,FUN_14732afec,&LAB_14732afb4
                    ,&LAB_14732afb0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca67650);
      _DAT_14ca64a78 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430ce8b0);
      _Init_thread_footer(&DAT_14ca64b20);
    }
  }
  return &DAT_14ca64a78;
}



// FUNCTION 145eb1d68 FUN_145eb1d68 body=205 status=ok
// SIG undefined FUN_145eb1d68(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb1d68(void)

{
  if ((DAT_14ca64a77 & 2) == 0) {
    DAT_14ca64a77 = DAT_14ca64a77 | 2;
    _DAT_14ca64a18 = L"FGeneratePageFlagsFromFroxelsCS";
    _DAT_14ca64a30 = FUN_146826540;
    _DAT_14ca64a38 = FUN_146825d77;
    _DAT_14ca64a40 = FUN_146825fd6;
    _DAT_14ca64a48 = FUN_1407e02ea;
    _DAT_14ca64a50 = FUN_146826273;
    _DAT_14ca64a28 = FUN_14732af82;
    _DAT_14ca64a68 = 0xffffffff000000e0;
    _DAT_14ca64a70 = 8;
    DAT_14ca64a74 = 0;
    _DAT_14ca64a58 = &LAB_14732afac;
    FUN_145eb1e36();
    FUN_1407e00cc(&DAT_14ca64a10);
    return;
  }
  return;
}



// FUNCTION 145eb1e36 FUN_145eb1e36 body=123 status=ok
// SIG undefined FUN_145eb1e36(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb1e36(void)

{
  _DAT_14ca68b70 = L"BASE";
  DAT_14ca68b9a = 4;
  _DAT_14ca68b78 = FUN_140b35ae4();
  _DAT_14ca68b80 = DAT_14ca64a20;
  _DAT_14ca68b88 = &LAB_14682652b;
  DAT_14ca64a20 = &DAT_14ca68b70;
  DAT_14ca64a75 = DAT_14ca64a75 + '\x01';
  _DAT_14ca68b90 = 0x100000000;
  if (*(char *)(_DAT_14ca68b78 + 100) != '\0') {
    DAT_14ca64a76 = DAT_14ca64a76 + '\x01';
  }
  return;
}



// FUNCTION 145eb1eb2 FUN_145eb1eb2 body=261 status=ok
// SIG undefined FUN_145eb1eb2(void)

void FUN_145eb1eb2(void)

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
              0x110) < DAT_14ca676d0) {
    FUN_144b3d300(&DAT_14ca676d0);
    if (DAT_14ca676d0 == -1) {
      FUN_145eb1fb8(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x130;
      local_58 = 0x3c1;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca67650,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430e5433);
      _Init_thread_footer(&DAT_14ca676d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb1fb8 FUN_145eb1fb8 body=226 status=ok
// SIG undefined FUN_145eb1fb8(void)

longlong * FUN_145eb1fb8(longlong *param_1)

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
  pcVar13 = FUN_1463111e4;
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



// FUNCTION 145eb20a0 FUN_145eb20a0 body=138 status=ok
// SIG undefined FUN_145eb20a0(void)

code * FUN_145eb20a0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bShouldMarkLocaLights";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003c3;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631137c;
}



// FUNCTION 145eb212a FUN_145eb212a body=144 status=ok
// SIG undefined FUN_145eb212a(void)

code * FUN_145eb212a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"ShaderPrintStruct";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"ShaderPrint::FShaderParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000003c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145e01428;
}



// FUNCTION 145eb21ba FUN_145eb21ba body=290 status=ok
// SIG undefined FUN_145eb21ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb21ba(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb2bfa0) {
    FUN_144b3d300(&DAT_14cb2bfa0);
    if (DAT_14cb2bfa0 == -1) {
      uVar1 = FUN_145eb2426();
      FUN_145eb22dc();
      FUN_140db5666(&DAT_14cb2bef8,0,&DAT_14cb2be90,L"FNiagaraDispatchIndirectArgsGenCS",
                    L"/Plugin/FX/Niagara/Private/NiagaraDispatchIndirectArgsGen.usf",
                    L"IndirectArgsGenCS",5,1,FUN_148042ad8,FUN_148042a7e,&LAB_148042a7a,
                    &LAB_148042a76,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14cb2bef8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1438f5cd1);
      _Init_thread_footer(&DAT_14cb2bfa0);
    }
  }
  return &DAT_14cb2bef8;
}



// FUNCTION 145eb22dc FUN_145eb22dc body=206 status=ok
// SIG undefined FUN_145eb22dc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb22dc(void)

{
  if ((DAT_14cb2bef7 & 2) == 0) {
    DAT_14cb2bef7 = DAT_14cb2bef7 | 2;
    _DAT_14cb2be98 = L"FNiagaraDispatchIndirectArgsGenCS";
    _DAT_14cb2beb0 = FUN_146826540;
    _DAT_14cb2beb8 = FUN_146825d77;
    _DAT_14cb2bec0 = FUN_146825fd6;
    _DAT_14cb2bec8 = FUN_1407e02ea;
    _DAT_14cb2bed0 = FUN_146826273;
    _DAT_14cb2bea8 = FUN_148042a48;
    _DAT_14cb2bee8 = 0xffffffff000000e0;
    _DAT_14cb2bef0 = 8;
    DAT_14cb2bef4 = 0;
    _DAT_14cb2bed8 = &LAB_148042a72;
    FUN_145eb23aa();
    FUN_1407e00cc(&DAT_14cb2be90);
  }
  return &DAT_14cb2be90;
}



// FUNCTION 145eb23aa FUN_145eb23aa body=123 status=ok
// SIG undefined FUN_145eb23aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb23aa(void)

{
  _DAT_14cb2d230 = L"BASE";
  DAT_14cb2d25a = 4;
  _DAT_14cb2d238 = FUN_140b35ae4();
  _DAT_14cb2d240 = DAT_14cb2bea0;
  _DAT_14cb2d248 = &LAB_14682652b;
  DAT_14cb2bea0 = &DAT_14cb2d230;
  DAT_14cb2bef5 = DAT_14cb2bef5 + '\x01';
  _DAT_14cb2d250 = 0x100000000;
  if (*(char *)(_DAT_14cb2d238 + 100) != '\0') {
    DAT_14cb2bef6 = DAT_14cb2bef6 + '\x01';
  }
  return;
}



// FUNCTION 145eb2426 FUN_145eb2426 body=268 status=ok
// SIG undefined FUN_145eb2426(void)

undefined * FUN_145eb2426(void)

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
              0x110) < DAT_14cb2cdd8) {
    FUN_144b3d300(&DAT_14cb2cdd8);
    if (DAT_14cb2cdd8 == -1) {
      FUN_145eb2534(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x30;
      local_58 = 0x28;
      local_48 = local_20;
      FUN_140b49562(&DAT_14cb2cd58,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1438f6d17);
      _Init_thread_footer(&DAT_14cb2cdd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14cb2cd58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb2534 FUN_145eb2534 body=226 status=ok
// SIG undefined FUN_145eb2534(void)

longlong * FUN_145eb2534(longlong *param_1)

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
  pcVar13 = FUN_14645f6fa;
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



// FUNCTION 145eb261c FUN_145eb261c body=138 status=ok
// SIG undefined FUN_145eb261c(void)

code * FUN_145eb261c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxGroupsPerDimension";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x300000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14804368e;
}



// FUNCTION 145eb26a6 FUN_145eb26a6 body=138 status=ok
// SIG undefined FUN_145eb26a6(void)

code * FUN_145eb26a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InstanceCounts";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x200000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb261c;
}



// FUNCTION 145eb2736 FUN_145eb2736 body=470 status=ok
// SIG undefined FUN_145eb2736(void)

void FUN_145eb2736(longlong param_1,longlong *param_2)

{
  int iVar1;
  code *pcVar2;
  longlong lVar3;
  void *_Src;
  undefined4 uVar4;
  char cVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  longlong local_88 [2];
  void *local_78;
  ulonglong uStack_70;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,0);
  (**(code **)(*plVar6 + 0x238))(plVar6,&local_61);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,1);
  local_88[0] = 0;
  local_58 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_58,local_88);
  FUN_1409ee323(local_58,local_88[0],&local_78);
  local_88[0] = 0;
  local_88[1] = 0;
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,2);
  local_58 = 0;
  local_60 = 0;
  (**(code **)(*plVar6 + 0x1c8))(plVar6,&local_60,&local_58);
  FUN_1409ee323(local_60,local_58,local_88);
  plVar6 = (longlong *)(**(code **)(*param_2 + 8))(param_2,3);
  (**(code **)(*plVar6 + 0x220))(plVar6,&local_58);
  cVar5 = (**(code **)(*param_2 + 0x30))(param_2);
  _Src = local_78;
  if (cVar5 == '\0') {
    pcVar2 = *(code **)(param_1 + 0x10);
    iVar1 = *(int *)(param_1 + 0x18);
    lVar3 = *(longlong *)(param_1 + 8);
    uVar4 = (undefined4)local_58;
    local_98 = (void *)0x0;
    lVar7 = (longlong)(int)uStack_70;
    local_90 = (int)uStack_70;
    if (lVar7 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1446dd670(&local_98,uStack_70 & 0xffffffff,0);
      memcpy(local_98,_Src,lVar7 * 2);
    }
    local_a8 = uVar4;
    (*pcVar2)(iVar1 + lVar3,local_61,&local_98,local_88);
    (**(code **)(*param_2 + 0x20))(param_2);
  }
  if (local_88[0] != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb290e FUN_145eb290e body=1123 status=ok
// SIG undefined FUN_145eb290e(void)

void FUN_145eb290e(longlong param_1,char param_2,longlong *param_3,longlong *param_4,uint param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  longlong *plVar9;
  char cVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  wchar_t *_Str;
  size_t sVar15;
  longlong lVar16;
  ushort uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ushort uVar20;
  undefined1 auStack_248 [32];
  longlong local_228;
  undefined4 local_214;
  longlong local_210;
  int local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined1 *local_1f0;
  char local_1e8;
  longlong local_1e0 [32];
  undefined1 local_e0 [128];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_248;
  lVar12 = *(longlong *)(param_1 + 0x288);
  if (((lVar12 == 0) || (param_2 == '\0')) || (*(char *)(param_1 + 0x2b1) != '\0'))
  goto LAB_145eb2bf6;
  FUN_140056680(&local_200);
  iVar4 = (int)param_4[1];
  if (iVar4 == (int)local_1f8) {
    if (1 < iVar4) {
      lVar16 = 0;
      while( true ) {
        uVar17 = *(ushort *)(*param_4 + lVar16);
        uVar18 = (ulonglong)uVar17;
        uVar20 = *(ushort *)((longlong)local_200 + lVar16);
        if (uVar17 != uVar20) break;
        if (uVar17 == 0) goto LAB_145eb2a7a;
LAB_145eb29be:
        lVar16 = lVar16 + 2;
      }
      if ((uVar20 | uVar17) < 0x80) {
        uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
        uVar19 = (ulonglong)uVar20;
        uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
        if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar19]) goto LAB_145eb29be;
      }
      if (uVar17 != uVar20) goto LAB_145eb29ee;
    }
LAB_145eb2a7a:
    bVar8 = false;
LAB_145eb2a7c:
    if ((int)param_5 < 0) {
      bVar7 = false;
    }
    else {
      bVar7 = (int)param_5 < *(int *)(lVar12 + 0x140);
    }
    if (bVar8) goto LAB_145eb2a92;
  }
  else {
    if ((int)local_1f8 + iVar4 == 1) goto LAB_145eb2a7a;
LAB_145eb29ee:
    FUN_140056680(&local_210,L"dialog_popup_secondary_buttons_grid");
    iVar4 = (int)param_4[1];
    if (iVar4 == local_208) {
      bVar8 = true;
      if (1 < iVar4) {
        lVar16 = 0;
        while( true ) {
          uVar17 = *(ushort *)(*param_4 + lVar16);
          uVar18 = (ulonglong)uVar17;
          uVar20 = *(ushort *)(local_210 + lVar16);
          if (uVar17 != uVar20) break;
          if (uVar17 == 0) goto LAB_145eb2a7c;
LAB_145eb2a3f:
          lVar16 = lVar16 + 2;
        }
        if ((uVar20 | uVar17) < 0x80) {
          uVar17 = (ushort)(byte)(&DAT_149e05da0)[uVar18];
          uVar19 = (ulonglong)uVar20;
          uVar20 = (ushort)(byte)(&DAT_149e05da0)[uVar19];
          if ((&DAT_149e05da0)[uVar18] == (&DAT_149e05da0)[uVar19]) goto LAB_145eb2a3f;
        }
        if (uVar17 != uVar20) goto LAB_145eb2d50;
      }
      goto LAB_145eb2a7c;
    }
    bVar8 = true;
    if (local_208 + iVar4 == 1) goto LAB_145eb2a7c;
LAB_145eb2d50:
    bVar7 = false;
LAB_145eb2a92:
    if (local_210 != 0) {
      FUN_1400020a8();
    }
  }
  if (local_200 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if (((bVar7) && (lVar12 = FUN_140391552(param_1), lVar12 != 0)) &&
     (*(int *)(param_1 + 0x208) != 0)) {
    FUN_1448d5e3c(&local_200,param_1 + 0x208);
    plVar5 = (longlong *)local_200[0x2c];
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 4));
    plVar9 = local_1f8;
    if (local_1f8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_1f8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_1f8)(local_1f8);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar9 + 0x10))(plVar9);
        }
      }
    }
    if ((((longlong)(int)plVar5[1] != 0) &&
        (lVar16 = (longlong)(int)plVar5[1] * 200 + *plVar5, lVar16 != 200)) &&
       ((-1 < (int)param_5 && ((int)param_5 < *(int *)(lVar16 + -0x88))))) {
      lVar6 = *(longlong *)(*(longlong *)(lVar16 + -0x90) + 0x10 + (ulonglong)param_5 * 0x20);
      uVar3 = *(undefined1 *)(*(longlong *)(lVar16 + -0x90) + 0x18 + (ulonglong)param_5 * 0x20);
      lVar16 = param_1 + 0x30;
      lVar13 = FUN_14479d2ce(lVar16);
      if (lVar13 == 0) {
        uVar11 = 0;
      }
      else {
        uVar11 = FUN_141580320(lVar13,0);
      }
      if ((lVar6 != DAT_14cbe5978) ||
         ((*(char *)(param_1 + 0x2b2) == '\x01' && (*(char *)(param_1 + 0x2b3) == '\0')))) {
        if (lVar6 == DAT_14cbe5970) {
          cVar10 = FUN_144729dda(lVar16);
          if (cVar10 != '\0') {
            uVar14 = FUN_14479d2ce(lVar16);
            local_214 = 0;
            local_200 = local_1e0;
            local_1e8 = '\0';
            local_1f0 = local_e0;
            local_1f8 = local_200;
            _Str = (wchar_t *)FUN_140c7f682(param_1,L"FocusInput",&local_200);
            local_60 = 0;
            if (_Str == (wchar_t *)0x0) {
              local_58 = 0;
              local_50 = 0;
            }
            else {
              sVar15 = wcslen(_Str);
              FUN_1446fe5a4(local_e0,_Str,sVar15 & 0xffffffff,1);
            }
            FUN_140c7f7d4(uVar14,local_58,&local_214);
            if (local_60 != 0) {
              FUN_1400020a8();
            }
            if (local_1e8 == '\x01') {
              FUN_1400020a8(local_200);
            }
          }
        }
        else {
          uVar14 = FUN_14001cc68(0x40,0x10);
          local_228 = param_1 + 0x2b8;
          FUN_145eb2d72(uVar14,lVar6,uVar11,uVar3);
          FUN_14039144e(lVar12,uVar14);
          *(undefined1 *)(param_1 + 0x2b1) = 1;
        }
        *(undefined1 *)(param_1 + 0x2b0) = 1;
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 4));
  }
LAB_145eb2bf6:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_248) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eb2d72 FUN_145eb2d72 body=131 status=ok
// SIG undefined FUN_145eb2d72(void)

undefined8 *
FUN_145eb2d72(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4,
             undefined8 *param_5)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b9da6f0;
  param_1[4] = param_2;
  *(undefined4 *)(param_1 + 5) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x2c) = param_4;
  param_1[6] = 0;
  iVar1 = *(int *)(param_5 + 1);
  _Src = (void *)*param_5;
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145eb2df6 FUN_145eb2df6 body=284 status=ok
// SIG undefined FUN_145eb2df6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb2df6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca95080) {
    FUN_144b3d300(&DAT_14ca95080);
    if (DAT_14ca95080 == -1) {
      FUN_145eb2f12();
      FUN_140db5666(&DAT_14ca94fd8,0,&DAT_14ca94f70,L"FRayTracingValidateSceneBuildParamsCS",
                    L"/Engine/Private/RayTracing/RayTracingValidation.usf",
                    L"RayTracingValidateSceneBuildParamsCS",5,1,FUN_1474285e2,FUN_1474285ba,
                    FUN_14631eb4a,&LAB_1474285b6,&LAB_14712ac0c,&LAB_14712ac08,0x100,0);
      _DAT_14ca94fd8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1432024ae);
      _Init_thread_footer(&DAT_14ca95080);
    }
  }
  return &DAT_14ca94fd8;
}



// FUNCTION 145eb2f12 FUN_145eb2f12 body=210 status=ok
// SIG undefined FUN_145eb2f12(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb2f12(void)

{
  if ((DAT_14ca94fd7 & 2) == 0) {
    DAT_14ca94fd7 = DAT_14ca94fd7 | 2;
    _DAT_14ca94f78 = L"FRayTracingValidateSceneBuildParamsCS";
    _DAT_14ca94f90 = FUN_146826540;
    _DAT_14ca94f98 = FUN_146825d77;
    _DAT_14ca94fa0 = FUN_146825fd6;
    _DAT_14ca94fa8 = FUN_1407e02ea;
    _DAT_14ca94fb0 = FUN_146826273;
    _DAT_14ca94f88 = FUN_147428588;
    _DAT_14ca94fc8 = 0xffffffff00000100;
    _DAT_14ca94fd0 = 8;
    DAT_14ca94fd4 = 0;
    _DAT_14ca94fb8 = &LAB_1474285b2;
    FUN_145eb2fe4();
    FUN_145eb3152();
    FUN_1407e00cc(&DAT_14ca94f70);
    return;
  }
  return;
}



// FUNCTION 145eb2fe4 FUN_145eb2fe4 body=121 status=ok
// SIG undefined FUN_145eb2fe4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb2fe4(void)

{
  FUN_145eb305e();
  _DAT_14ca95d58 = L"InstanceBufferParam";
  DAT_14ca95d82 = FUN_140850cc5();
  _DAT_14ca95d60 = FUN_140fb78d0();
  _DAT_14ca95d70 = &LAB_14682652b;
  _DAT_14ca95d78 = 0x1000000e0;
  _DAT_14ca95d80 = 0;
  _DAT_14ca95d68 = DAT_14ca94f80;
  DAT_14ca94f80 = &DAT_14ca95d58;
  return;
}



// FUNCTION 145eb305e FUN_145eb305e body=121 status=ok
// SIG undefined FUN_145eb305e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb305e(void)

{
  FUN_145eb30d8();
  _DAT_14ca95d88 = L"InstanceBufferOffsetInBytesParam";
  DAT_14ca95db2 = FUN_140850cc5();
  _DAT_14ca95d90 = FUN_140ec6960();
  _DAT_14ca95da0 = &LAB_14682652b;
  _DAT_14ca95da8 = 0x1000000e4;
  _DAT_14ca95db0 = 0;
  _DAT_14ca95d98 = DAT_14ca94f80;
  DAT_14ca94f80 = &DAT_14ca95d88;
  return;
}



// FUNCTION 145eb30d8 FUN_145eb30d8 body=121 status=ok
// SIG undefined FUN_145eb30d8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb30d8(void)

{
  FUN_145eb31ce();
  _DAT_14ca95db8 = L"InstanceBufferStrideInBytesParam";
  DAT_14ca95de2 = FUN_140850cc5();
  _DAT_14ca95dc0 = FUN_140ec6960();
  _DAT_14ca95dd0 = &LAB_14682652b;
  _DAT_14ca95dd8 = 0x1000000ea;
  _DAT_14ca95de0 = 0;
  _DAT_14ca95dc8 = DAT_14ca94f80;
  DAT_14ca94f80 = &DAT_14ca95db8;
  return;
}



// FUNCTION 145eb3152 FUN_145eb3152 body=123 status=ok
// SIG undefined FUN_145eb3152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3152(void)

{
  _DAT_14ca96098 = L"BASE";
  DAT_14ca960c2 = 4;
  _DAT_14ca960a0 = FUN_140b35ae4();
  _DAT_14ca960a8 = DAT_14ca94f80;
  _DAT_14ca960b0 = &LAB_14682652b;
  DAT_14ca94f80 = &DAT_14ca96098;
  DAT_14ca94fd5 = DAT_14ca94fd5 + '\x01';
  _DAT_14ca960b8 = 0x100000000;
  if (*(char *)(_DAT_14ca960a0 + 100) != '\0') {
    DAT_14ca94fd6 = DAT_14ca94fd6 + '\x01';
  }
  return;
}



// FUNCTION 145eb31ce FUN_145eb31ce body=216 status=ok
// SIG undefined FUN_145eb31ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb31ce(void)

{
  _DAT_14ca95e18 = L"NumHitGroupsParam";
  DAT_14ca95e42 = FUN_140850cc5();
  _DAT_14ca95e20 = FUN_140ec6960();
  _DAT_14ca95e30 = &LAB_14682652b;
  _DAT_14ca95e38 = 0x1000000f6;
  _DAT_14ca95e40 = 0;
  _DAT_14ca95e28 = DAT_14ca94f80;
  DAT_14ca94f80 = &DAT_14ca95e18;
  _DAT_14ca95de8 = L"NumInstancesParam";
  DAT_14ca95e12 = FUN_140850cc5();
  _DAT_14ca95df0 = FUN_140ec6960();
  _DAT_14ca95e00 = &LAB_14682652b;
  _DAT_14ca95e08 = 0x1000000f0;
  _DAT_14ca95e10 = 0;
  _DAT_14ca95df8 = DAT_14ca94f80;
  DAT_14ca94f80 = &DAT_14ca95de8;
  return;
}



// FUNCTION 145eb32a6 FUN_145eb32a6 body=284 status=ok
// SIG undefined FUN_145eb32a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb32a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa2ef0) {
    FUN_144b3d300(&DAT_14caa2ef0);
    if (DAT_14caa2ef0 == -1) {
      FUN_145eb33c2();
      FUN_140db5666(&DAT_14caa2e48,0,&DAT_14caa2de0,L"FLandscapeLayersHeightmapMipsPS",
                    L"/Engine/Private/LandscapeLayersPS.usf",L"PSHeightmapMainMips",3,1,
                    FUN_14745e82e,FUN_14745e80c,&LAB_14632490c,&LAB_14745e808,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14caa2e48 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e058);
      _Init_thread_footer(&DAT_14caa2ef0);
    }
  }
  return &DAT_14caa2e48;
}



// FUNCTION 145eb33c2 FUN_145eb33c2 body=210 status=ok
// SIG undefined FUN_145eb33c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb33c2(void)

{
  if ((DAT_14caa2e47 & 2) == 0) {
    DAT_14caa2e47 = DAT_14caa2e47 | 2;
    _DAT_14caa2de8 = L"FLandscapeLayersHeightmapMipsPS";
    _DAT_14caa2e00 = FUN_146826540;
    _DAT_14caa2e08 = FUN_146825d77;
    _DAT_14caa2e10 = FUN_146825fd6;
    _DAT_14caa2e18 = FUN_1407e02ea;
    _DAT_14caa2e20 = FUN_146826273;
    _DAT_14caa2df8 = FUN_14745e7da;
    _DAT_14caa2e38 = 0xffffffff00000100;
    _DAT_14caa2e40 = 8;
    DAT_14caa2e44 = 0;
    _DAT_14caa2e28 = &LAB_14745e804;
    FUN_145eb3494();
    FUN_145eb3602();
    FUN_1407e00cc(&DAT_14caa2de0);
    return;
  }
  return;
}



// FUNCTION 145eb3494 FUN_145eb3494 body=121 status=ok
// SIG undefined FUN_145eb3494(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3494(void)

{
  FUN_145eb350e();
  _DAT_14caa4a40 = L"ReadTexture1Param";
  DAT_14caa4a6a = FUN_140850cc5();
  _DAT_14caa4a48 = FUN_140fb78d0();
  _DAT_14caa4a58 = &LAB_14682652b;
  _DAT_14caa4a60 = 0x1000000e0;
  _DAT_14caa4a68 = 0;
  _DAT_14caa4a50 = DAT_14caa2df0;
  DAT_14caa2df0 = &DAT_14caa4a40;
  return;
}



// FUNCTION 145eb350e FUN_145eb350e body=121 status=ok
// SIG undefined FUN_145eb350e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb350e(void)

{
  FUN_145eb3588();
  _DAT_14caa4a70 = L"ReadTexture1SamplerParam";
  DAT_14caa4a9a = FUN_140850cc5();
  _DAT_14caa4a78 = FUN_140fb78d0();
  _DAT_14caa4a88 = &LAB_14682652b;
  _DAT_14caa4a90 = 0x1000000e4;
  _DAT_14caa4a98 = 0;
  _DAT_14caa4a80 = DAT_14caa2df0;
  DAT_14caa2df0 = &DAT_14caa4a70;
  return;
}



// FUNCTION 145eb3588 FUN_145eb3588 body=121 status=ok
// SIG undefined FUN_145eb3588(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3588(void)

{
  FUN_145eb367e();
  _DAT_14caa4aa0 = L"CurrentMipSizeParam";
  DAT_14caa4aca = FUN_140850cc5();
  _DAT_14caa4aa8 = FUN_140ec6960();
  _DAT_14caa4ab8 = &LAB_14682652b;
  _DAT_14caa4ac0 = 0x1000000e8;
  _DAT_14caa4ac8 = 0;
  _DAT_14caa4ab0 = DAT_14caa2df0;
  DAT_14caa2df0 = &DAT_14caa4aa0;
  return;
}



// FUNCTION 145eb3602 FUN_145eb3602 body=123 status=ok
// SIG undefined FUN_145eb3602(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3602(void)

{
  _DAT_14caa58c8 = L"BASE";
  DAT_14caa58f2 = 4;
  _DAT_14caa58d0 = FUN_140b35ae4();
  _DAT_14caa58d8 = DAT_14caa2df0;
  _DAT_14caa58e0 = &LAB_14682652b;
  DAT_14caa2df0 = &DAT_14caa58c8;
  DAT_14caa2e45 = DAT_14caa2e45 + '\x01';
  _DAT_14caa58e8 = 0x100000000;
  if (*(char *)(_DAT_14caa58d0 + 100) != '\0') {
    DAT_14caa2e46 = DAT_14caa2e46 + '\x01';
  }
  return;
}



// FUNCTION 145eb367e FUN_145eb367e body=216 status=ok
// SIG undefined FUN_145eb367e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb367e(void)

{
  _DAT_14caa4b00 = L"CurrentMipComponentVertexCountParam";
  DAT_14caa4b2a = FUN_140850cc5();
  _DAT_14caa4b08 = FUN_140ec6960();
  _DAT_14caa4b18 = &LAB_14682652b;
  _DAT_14caa4b20 = 0x1000000f4;
  _DAT_14caa4b28 = 0;
  _DAT_14caa4b10 = DAT_14caa2df0;
  DAT_14caa2df0 = &DAT_14caa4b00;
  _DAT_14caa4ad0 = L"ParentMipSizeParam";
  DAT_14caa4afa = FUN_140850cc5();
  _DAT_14caa4ad8 = FUN_140ec6960();
  _DAT_14caa4ae8 = &LAB_14682652b;
  _DAT_14caa4af0 = 0x1000000ee;
  _DAT_14caa4af8 = 0;
  _DAT_14caa4ae0 = DAT_14caa2df0;
  DAT_14caa2df0 = &DAT_14caa4ad0;
  return;
}



// FUNCTION 145eb3756 FUN_145eb3756 body=284 status=ok
// SIG undefined FUN_145eb3756(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb3756(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa3140) {
    FUN_144b3d300(&DAT_14caa3140);
    if (DAT_14caa3140 == -1) {
      FUN_145eb3872();
      FUN_140db5666(&DAT_14caa3098,0,&DAT_14caa3030,L"FLandscapeLayersWeightmapMipsPS",
                    L"/Engine/Private/LandscapeLayersPS.usf",L"PSWeightmapMainMips",3,1,
                    FUN_14745e948,FUN_14745e926,&LAB_14632491c,&LAB_14745e922,&LAB_14712ac0c,
                    &LAB_14712ac08,0x100,0);
      _DAT_14caa3098 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14324e070);
      _Init_thread_footer(&DAT_14caa3140);
    }
  }
  return &DAT_14caa3098;
}



// FUNCTION 145eb3872 FUN_145eb3872 body=210 status=ok
// SIG undefined FUN_145eb3872(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3872(void)

{
  if ((DAT_14caa3097 & 2) == 0) {
    DAT_14caa3097 = DAT_14caa3097 | 2;
    _DAT_14caa3038 = L"FLandscapeLayersWeightmapMipsPS";
    _DAT_14caa3050 = FUN_146826540;
    _DAT_14caa3058 = FUN_146825d77;
    _DAT_14caa3060 = FUN_146825fd6;
    _DAT_14caa3068 = FUN_1407e02ea;
    _DAT_14caa3070 = FUN_146826273;
    _DAT_14caa3048 = FUN_14745e8f4;
    _DAT_14caa3088 = 0xffffffff00000100;
    _DAT_14caa3090 = 8;
    DAT_14caa3094 = 0;
    _DAT_14caa3078 = &LAB_14745e91e;
    FUN_145eb3944();
    FUN_145eb3ab2();
    FUN_1407e00cc(&DAT_14caa3030);
    return;
  }
  return;
}



// FUNCTION 145eb3944 FUN_145eb3944 body=121 status=ok
// SIG undefined FUN_145eb3944(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3944(void)

{
  FUN_145eb39be();
  _DAT_14caa4c80 = L"ReadTexture1Param";
  DAT_14caa4caa = FUN_140850cc5();
  _DAT_14caa4c88 = FUN_140fb78d0();
  _DAT_14caa4c98 = &LAB_14682652b;
  _DAT_14caa4ca0 = 0x1000000e0;
  _DAT_14caa4ca8 = 0;
  _DAT_14caa4c90 = DAT_14caa3040;
  DAT_14caa3040 = &DAT_14caa4c80;
  return;
}



// FUNCTION 145eb39be FUN_145eb39be body=121 status=ok
// SIG undefined FUN_145eb39be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb39be(void)

{
  FUN_145eb3a38();
  _DAT_14caa4cb0 = L"ReadTexture1SamplerParam";
  DAT_14caa4cda = FUN_140850cc5();
  _DAT_14caa4cb8 = FUN_140fb78d0();
  _DAT_14caa4cc8 = &LAB_14682652b;
  _DAT_14caa4cd0 = 0x1000000e4;
  _DAT_14caa4cd8 = 0;
  _DAT_14caa4cc0 = DAT_14caa3040;
  DAT_14caa3040 = &DAT_14caa4cb0;
  return;
}



// FUNCTION 145eb3a38 FUN_145eb3a38 body=121 status=ok
// SIG undefined FUN_145eb3a38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3a38(void)

{
  FUN_145eb3b2e();
  _DAT_14caa4ce0 = L"CurrentMipSizeParam";
  DAT_14caa4d0a = FUN_140850cc5();
  _DAT_14caa4ce8 = FUN_140ec6960();
  _DAT_14caa4cf8 = &LAB_14682652b;
  _DAT_14caa4d00 = 0x1000000e8;
  _DAT_14caa4d08 = 0;
  _DAT_14caa4cf0 = DAT_14caa3040;
  DAT_14caa3040 = &DAT_14caa4ce0;
  return;
}



// FUNCTION 145eb3ab2 FUN_145eb3ab2 body=123 status=ok
// SIG undefined FUN_145eb3ab2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3ab2(void)

{
  _DAT_14caa5928 = L"BASE";
  DAT_14caa5952 = 4;
  _DAT_14caa5930 = FUN_140b35ae4();
  _DAT_14caa5938 = DAT_14caa3040;
  _DAT_14caa5940 = &LAB_14682652b;
  DAT_14caa3040 = &DAT_14caa5928;
  DAT_14caa3095 = DAT_14caa3095 + '\x01';
  _DAT_14caa5948 = 0x100000000;
  if (*(char *)(_DAT_14caa5930 + 100) != '\0') {
    DAT_14caa3096 = DAT_14caa3096 + '\x01';
  }
  return;
}



// FUNCTION 145eb3b2e FUN_145eb3b2e body=216 status=ok
// SIG undefined FUN_145eb3b2e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3b2e(void)

{
  _DAT_14caa4d40 = L"CurrentMipComponentVertexCountParam";
  DAT_14caa4d6a = FUN_140850cc5();
  _DAT_14caa4d48 = FUN_140ec6960();
  _DAT_14caa4d58 = &LAB_14682652b;
  _DAT_14caa4d60 = 0x1000000f4;
  _DAT_14caa4d68 = 0;
  _DAT_14caa4d50 = DAT_14caa3040;
  DAT_14caa3040 = &DAT_14caa4d40;
  _DAT_14caa4d10 = L"ParentMipSizeParam";
  DAT_14caa4d3a = FUN_140850cc5();
  _DAT_14caa4d18 = FUN_140ec6960();
  _DAT_14caa4d28 = &LAB_14682652b;
  _DAT_14caa4d30 = 0x1000000ee;
  _DAT_14caa4d38 = 0;
  _DAT_14caa4d20 = DAT_14caa3040;
  DAT_14caa3040 = &DAT_14caa4d10;
  return;
}



// FUNCTION 145eb3c06 FUN_145eb3c06 body=284 status=ok
// SIG undefined FUN_145eb3c06(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb3c06(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf5d18) {
    FUN_144b3d300(&DAT_14caf5d18);
    if (DAT_14caf5d18 == -1) {
      FUN_145eb3d22();
      FUN_140db5666(&DAT_14caf5c70,0,&DAT_14caf5c08,L"FParticleSortKeyGenCS",
                    L"/Engine/Private/ParticleSortKeyGen.usf",L"GenerateParticleSortKeys",5,1,
                    FUN_147c2fab2,FUN_147c2fa8a,&LAB_147c2fa72,&LAB_147c2fa6e,&LAB_14712ac0c,
                    &LAB_14712ac08,0xf8,0);
      _DAT_14caf5c70 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1435eabce);
      _Init_thread_footer(&DAT_14caf5d18);
    }
  }
  return &DAT_14caf5c70;
}



// FUNCTION 145eb3d22 FUN_145eb3d22 body=210 status=ok
// SIG undefined FUN_145eb3d22(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3d22(void)

{
  if ((DAT_14caf5c6f & 2) == 0) {
    DAT_14caf5c6f = DAT_14caf5c6f | 2;
    _DAT_14caf5c10 = L"FParticleSortKeyGenCS";
    _DAT_14caf5c28 = FUN_146826540;
    _DAT_14caf5c30 = FUN_146825d77;
    _DAT_14caf5c38 = FUN_146825fd6;
    _DAT_14caf5c40 = FUN_1407e02ea;
    _DAT_14caf5c48 = FUN_146826273;
    _DAT_14caf5c20 = FUN_147c2fa40;
    _DAT_14caf5c60 = 0xffffffff000000f8;
    _DAT_14caf5c68 = 8;
    DAT_14caf5c6c = 0;
    _DAT_14caf5c50 = &LAB_147c2fa6a;
    FUN_145eb3df4();
    FUN_145eb3f62();
    FUN_1407e00cc(&DAT_14caf5c08);
    return;
  }
  return;
}



// FUNCTION 145eb3df4 FUN_145eb3df4 body=121 status=ok
// SIG undefined FUN_145eb3df4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3df4(void)

{
  FUN_145eb3e6e();
  _DAT_14caf5e90 = L"InParticleIndices";
  DAT_14caf5eba = FUN_140850cc5();
  _DAT_14caf5e98 = FUN_140fb78d0();
  _DAT_14caf5ea8 = &LAB_14682652b;
  _DAT_14caf5eb0 = 0x1000000e0;
  _DAT_14caf5eb8 = 0;
  _DAT_14caf5ea0 = DAT_14caf5c18;
  DAT_14caf5c18 = &DAT_14caf5e90;
  return;
}



// FUNCTION 145eb3e6e FUN_145eb3e6e body=121 status=ok
// SIG undefined FUN_145eb3e6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3e6e(void)

{
  FUN_145eb3ee8();
  _DAT_14caf5ec0 = L"PositionTexture";
  DAT_14caf5eea = FUN_140850cc5();
  _DAT_14caf5ec8 = FUN_140fb78d0();
  _DAT_14caf5ed8 = &LAB_14682652b;
  _DAT_14caf5ee0 = 0x1000000e4;
  _DAT_14caf5ee8 = 0;
  _DAT_14caf5ed0 = DAT_14caf5c18;
  DAT_14caf5c18 = &DAT_14caf5ec0;
  return;
}



// FUNCTION 145eb3ee8 FUN_145eb3ee8 body=121 status=ok
// SIG undefined FUN_145eb3ee8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3ee8(void)

{
  FUN_145eb3fde();
  _DAT_14caf5ef0 = L"PositionTextureSampler";
  DAT_14caf5f1a = FUN_140850cc5();
  _DAT_14caf5ef8 = FUN_140fb78d0();
  _DAT_14caf5f08 = &LAB_14682652b;
  _DAT_14caf5f10 = 0x1000000e8;
  _DAT_14caf5f18 = 0;
  _DAT_14caf5f00 = DAT_14caf5c18;
  DAT_14caf5c18 = &DAT_14caf5ef0;
  return;
}



// FUNCTION 145eb3f62 FUN_145eb3f62 body=123 status=ok
// SIG undefined FUN_145eb3f62(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3f62(void)

{
  _DAT_14caf5f88 = L"BASE";
  DAT_14caf5fb2 = 4;
  _DAT_14caf5f90 = FUN_140b35ae4();
  _DAT_14caf5f98 = DAT_14caf5c18;
  _DAT_14caf5fa0 = &LAB_14682652b;
  DAT_14caf5c18 = &DAT_14caf5f88;
  DAT_14caf5c6d = DAT_14caf5c6d + '\x01';
  _DAT_14caf5fa8 = 0x100000000;
  if (*(char *)(_DAT_14caf5f90 + 100) != '\0') {
    DAT_14caf5c6e = DAT_14caf5c6e + '\x01';
  }
  return;
}



// FUNCTION 145eb3fde FUN_145eb3fde body=216 status=ok
// SIG undefined FUN_145eb3fde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb3fde(void)

{
  _DAT_14caf5f50 = L"OutParticleIndices";
  DAT_14caf5f7a = FUN_140850cc5();
  _DAT_14caf5f58 = FUN_140fb78d0();
  _DAT_14caf5f68 = &LAB_14682652b;
  _DAT_14caf5f70 = 0x1000000f0;
  _DAT_14caf5f78 = 0;
  _DAT_14caf5f60 = DAT_14caf5c18;
  DAT_14caf5c18 = &DAT_14caf5f50;
  _DAT_14caf5f20 = L"OutKeys";
  DAT_14caf5f4a = FUN_140850cc5();
  _DAT_14caf5f28 = FUN_140fb78d0();
  _DAT_14caf5f38 = &LAB_14682652b;
  _DAT_14caf5f40 = 0x1000000ec;
  _DAT_14caf5f48 = 0;
  _DAT_14caf5f30 = DAT_14caf5c18;
  DAT_14caf5c18 = &DAT_14caf5f20;
  return;
}



// FUNCTION 145eb40b6 FUN_145eb40b6 body=63 status=ok
// SIG undefined FUN_145eb40b6(void)

undefined1 FUN_145eb40b6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_145eb40f6(param_2,param_3);
    param_3 = param_3 + 0x158;
    param_2 = param_2 + 0x158;
  }
  return 1;
}



// FUNCTION 145eb40f6 FUN_145eb40f6 body=349 status=ok
// SIG undefined FUN_145eb40f6(void)

longlong FUN_145eb40f6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  FUN_140cae46a();
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  FUN_140cae504(param_1 + 0x58,param_2 + 0x58);
  FUN_140cae59e(param_1 + 0xa8,param_2 + 0xa8);
  *(undefined8 *)(param_1 + 0x105) = *(undefined8 *)(param_2 + 0x105);
  uVar5 = *(undefined4 *)(param_2 + 0xfc);
  uVar6 = *(undefined4 *)(param_2 + 0x100);
  uVar7 = *(undefined4 *)(param_2 + 0x104);
  *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(param_2 + 0xf8);
  *(undefined4 *)(param_1 + 0xfc) = uVar5;
  *(undefined4 *)(param_1 + 0x100) = uVar6;
  *(undefined4 *)(param_1 + 0x104) = uVar7;
  lVar8 = *(longlong *)(param_2 + 0x110);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_14689c22e();
      lVar8 = *(longlong *)(param_2 + 0x110);
    }
  }
  *(longlong *)(param_1 + 0x110) = lVar8;
  FUN_145eb4254(param_1 + 0x118,param_2 + 0x118);
  FUN_145eb42b2(param_1 + 0x128,param_2 + 0x128);
  uVar3 = *(undefined8 *)(param_2 + 0x138);
  lVar8 = *(longlong *)(param_2 + 0x140);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x140);
  *(undefined8 *)(param_1 + 0x138) = uVar3;
  *(longlong *)(param_1 + 0x140) = lVar8;
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
  uVar3 = *(undefined8 *)(param_2 + 0x148);
  lVar8 = *(longlong *)(param_2 + 0x150);
  if (lVar8 != 0) {
    LOCK();
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
    UNLOCK();
  }
  plVar4 = *(longlong **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x148) = uVar3;
  *(longlong *)(param_1 + 0x150) = lVar8;
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
  return param_1;
}



// FUNCTION 145eb4254 FUN_145eb4254 body=93 status=ok
// SIG undefined FUN_145eb4254(void)

undefined8 * FUN_145eb4254(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14587d6dd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c63310(param_1,iVar1);
      FUN_148c6337f(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145eb42b2 FUN_145eb42b2 body=93 status=ok
// SIG undefined FUN_145eb42b2(void)

undefined8 * FUN_145eb42b2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14128eda1(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148c63424(param_1,iVar1);
      FUN_148c63486(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145eb4310 FUN_145eb4310 body=96 status=ok
// SIG undefined FUN_145eb4310(void)

void FUN_145eb4310(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  FUN_145eb4370();
  FUN_145eb4d6e(param_1);
  FUN_14583be3e(param_1);
  lVar2 = FUN_145839968(param_1);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(lVar2 + 0x358);
  }
  lVar2 = FUN_145839968(param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_144a87d0a(lVar2);
    *(undefined1 *)(param_1 + 0x1b0) = uVar1;
  }
  FUN_145eb4372(param_1);
  return;
}



// FUNCTION 145eb4370 FUN_145eb4370 body=1 status=ok
// SIG undefined FUN_145eb4370(void)

void FUN_145eb4370(void)

{
  return;
}



// FUNCTION 145eb4372 FUN_145eb4372 body=400 status=ok
// SIG undefined FUN_145eb4372(void)

void FUN_145eb4372(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [40];
  code *local_40;
  undefined4 local_38;
  undefined1 local_30 [8];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_14583bef4();
  if (lVar1 != 0) {
    local_40 = FUN_1459367ae;
    local_38 = 0;
    FUN_145eb47c2(lVar1 + 0x4b8,local_30,param_1,&local_40);
    local_40 = FUN_14583be18;
    local_38 = 0;
    FUN_145eb48b0(lVar1 + 0x1e0,local_30,param_1,&local_40);
    local_40 = FUN_145ca20ba;
    local_38 = 0;
    FUN_145eb499e(lVar1 + 0x2b8,local_30,param_1,&local_40);
  }
  lVar1 = FUN_145839968(param_1);
  if (lVar1 != 0) {
    local_40 = FUN_148da6f6c;
    local_38 = 0;
    FUN_145eb4a8c(lVar1 + 0x340,local_30,param_1,&local_40);
    local_40 = FUN_145839920;
    local_38 = 0;
    FUN_145eb4c80(lVar1 + 0x2a8,local_30,param_1,&local_40);
  }
  local_40 = FUN_145937270;
  local_38 = 0;
  FUN_145eb4504(local_30,param_1,&local_40);
  local_40 = FUN_145e24c64;
  local_38 = 0;
  FUN_145eb45ee(local_30,param_1,&local_40);
  local_40 = FUN_14595403c;
  local_38 = 0;
  FUN_145eb46d8(local_30,param_1,&local_40);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb4504 FUN_145eb4504 body=232 status=ok
// SIG undefined FUN_145eb4504(void)

undefined8 FUN_145eb4504(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b968eb0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14b98f7c0;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_14586eb8c(&DAT_14cb717f8,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb45ee FUN_145eb45ee body=232 status=ok
// SIG undefined FUN_145eb45ee(void)

undefined8 FUN_145eb45ee(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b972d50;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14b98f830;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_145ac3b52(&DAT_14cbd0b00,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb46d8 FUN_145eb46d8 body=232 status=ok
// SIG undefined FUN_145eb46d8(void)

undefined8 FUN_145eb46d8(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_3 + 1);
  uVar2 = *param_3;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  local_38 = 3;
  *local_40 = &PTR_LAB_14b961ce0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_40[2] = lVar4;
  *local_40 = &PTR_FUN_14b98f8a0;
  local_40[3] = param_2;
  local_40[4] = uVar2;
  *(undefined4 *)(local_40 + 5) = uVar1;
  FUN_14127be6a(&DAT_14cbd0b78,param_1,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb47c2 FUN_145eb47c2 body=237 status=ok
// SIG undefined FUN_145eb47c2(void)

undefined8
FUN_145eb47c2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b991aa0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b98f590;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14586ed62(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb48b0 FUN_145eb48b0 body=237 status=ok
// SIG undefined FUN_145eb48b0(void)

undefined8
FUN_145eb48b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b98f600;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_1448b6402(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb499e FUN_145eb499e body=237 status=ok
// SIG undefined FUN_145eb499e(void)

undefined8
FUN_145eb499e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_149e063e0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b98f670;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_14134bd86(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb4a8c FUN_145eb4a8c body=237 status=ok
// SIG undefined FUN_145eb4a8c(void)

undefined8
FUN_145eb4a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b991970;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b98f6e0;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_145eb4b7a(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb4b7a FUN_145eb4b7a body=216 status=ok
// SIG undefined FUN_145eb4b7a(void)

undefined8 * FUN_145eb4b7a(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 145eb4c80 FUN_145eb4c80 body=237 status=ok
// SIG undefined FUN_145eb4c80(void)

undefined8
FUN_145eb4c80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *(undefined4 *)(param_4 + 1);
  uVar2 = *param_4;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar3 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar3 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar3;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14b98f750;
  local_48[3] = param_3;
  local_48[4] = uVar2;
  *(undefined4 *)(local_48 + 5) = uVar1;
  FUN_141285884(param_1,param_2,&local_48);
  FUN_1449db362(&local_48);
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb4d6e FUN_145eb4d6e body=1022 status=ok
// SIG undefined FUN_145eb4d6e(void)

void FUN_145eb4d6e(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined2 **ppuVar8;
  undefined2 **ppuVar9;
  undefined2 *puVar10;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  longlong local_98;
  undefined1 local_90 [8];
  undefined2 *local_88;
  int local_80;
  undefined2 **local_78;
  longlong *plStack_70;
  longlong local_68;
  ulonglong uStack_60;
  undefined2 **local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)(param_1 + 0x1b8);
  FUN_145eb516e(plVar1);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (undefined2 **)0x0;
  plStack_70 = (longlong *)0x0;
  plVar4 = (longlong *)FUN_140a68038(1);
  if (plVar4 == (longlong *)0x0) {
    ppuVar9 = (undefined2 **)0x0;
  }
  else {
    (**(code **)(*plVar4 + 0x10))(plVar4,local_90);
    FUN_1400021e4(local_90,&local_88);
    puVar10 = local_88;
    if (local_80 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"GbxPresence.%s",puVar10);
    ppuVar9 = local_50;
    iVar7 = (int)local_48;
    local_78 = local_50;
    local_50 = (undefined2 **)0x0;
    plStack_70 = local_48;
    local_48 = (longlong *)0x0;
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    ppuVar8 = (undefined2 **)&DAT_149dfb77a;
    if (iVar7 != 0) {
      ppuVar8 = ppuVar9;
    }
    local_a8 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,ppuVar8,L"PlatformSpecificPresenceKeys",&local_68);
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_88);
    local_50 = &local_88;
    local_48 = &local_68;
    FUN_145eb51b2(plVar1,local_90);
  }
  local_50 = (undefined2 **)0x0;
  FUN_141164a58(param_1);
  plVar4 = (longlong *)FUN_1401e3228(&local_50);
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_98);
    if (*(int *)(param_1 + 0x1c0) != *(int *)(param_1 + 0x1ec)) {
      uVar2 = (uint)((ulonglong)local_98 >> 0x10);
      uVar6 = (uint)local_98 & 0xffff;
      lVar5 = param_1 + 0x1f0;
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        lVar5 = *(longlong *)(param_1 + 0x1f8);
      }
      iVar7 = *(int *)(lVar5 + (ulonglong)
                               (*(int *)(param_1 + 0x200) - 1U &
                               (int)((ulonglong)local_98 >> 0x20) + ((uint)local_98 << 0x10 | uVar6)
                               + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*plVar1 + (longlong)iVar7 * 0x20) == local_98) goto LAB_145eb506e;
          iVar7 = *(int *)((longlong)iVar7 * 0x20 + *plVar1 + 0x18);
        } while (iVar7 != -1);
      }
    }
    FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
    uVar3 = uStack_60 >> 0x20;
    uStack_60 = uStack_60 & 0xffffffff00000000;
    if ((int)uVar3 != 0) {
      FUN_1408be2c4(&local_68,0);
    }
    (**(code **)(*plVar4 + 0x10))(plVar4,local_90);
    FUN_1400021e4(local_90,&local_88);
    puVar10 = local_88;
    if (local_80 == 0) {
      puVar10 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_50,L"GbxPresence.%s",puVar10);
    if (ppuVar9 != (undefined2 **)0x0) {
      FUN_1400020a8(ppuVar9);
    }
    ppuVar9 = local_50;
    local_78 = local_50;
    local_50 = (undefined2 **)0x0;
    iVar7 = (int)local_48;
    plStack_70 = local_48;
    local_48 = (longlong *)0x0;
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (iVar7 == 0) {
      ppuVar9 = (undefined2 **)&DAT_149dfb77a;
    }
    local_a8 = &DAT_14c872ce8;
    FUN_14105aa76(DAT_14c872ce0,ppuVar9,L"PlatformSpecificPresenceKeys",&local_68);
    (**(code **)(*plVar4 + 0x10))(plVar4,&local_88);
    local_50 = &local_88;
    local_48 = &local_68;
    FUN_145eb51b2(plVar1,local_90);
  }
LAB_145eb506e:
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  uVar3 = uStack_60 >> 0x20;
  uStack_60 = uStack_60 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_1408be2c4(&local_68,0);
  }
  FUN_14020fad6(&local_78,L"GbxPresence.Discord");
  ppuVar9 = local_78;
  if ((int)plStack_70 == 0) {
    ppuVar9 = (undefined2 **)&DAT_149dfb77a;
  }
  local_a8 = &DAT_14c872ce8;
  FUN_14105aa76(DAT_14c872ce0,ppuVar9,L"PlatformSpecificPresenceKeys",&local_68);
  local_50 = (undefined2 **)(param_1 + 0x18);
  local_48 = &local_68;
  FUN_145eb5466(plVar1,&local_88);
  if (local_78 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  FUN_1447a1747(local_68,uStack_60 & 0xffffffff);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eb516e FUN_145eb516e body=67 status=ok
// SIG undefined FUN_145eb516e(void)

void FUN_145eb516e(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145eb5316(param_1);
    FUN_145db28f6(param_1,0);
    return;
  }
  FUN_145db28f6(param_1,0);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14141ce2a(param_1);
  return;
}



// FUNCTION 145eb51b2 FUN_145eb51b2 body=354 status=ok
// SIG undefined FUN_145eb51b2(void)

undefined4 * FUN_145eb51b2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459a256a(param_1,local_40);
  uVar1 = param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  FUN_145b063aa(local_38 + 1,0,uVar1);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1459a249c(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14141ce2a(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb5316 FUN_145eb5316 body=335 status=ok
// SIG undefined FUN_145eb5316(void)

void FUN_145eb5316(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145eb5466 FUN_145eb5466 body=358 status=ok
// SIG undefined FUN_145eb5466(void)

undefined4 * FUN_145eb5466(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1459a256a(param_1,local_40);
  uVar1 = param_3[1];
  *local_38 = *(undefined8 *)*param_3;
  FUN_145b063aa(local_38 + 1,0,uVar1);
  *(undefined4 *)(local_38 + 3) = 0xffffffff;
  local_44 = local_40[0];
  uVar1 = *local_38;
  uVar7 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar7 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar4 >> 4);
  local_58 = 0;
  cVar2 = FUN_1459a249c(param_1,uVar7,local_38);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_38 + 0x1c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_38 + 3) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14141ce2a(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb55ce FUN_145eb55ce body=292 status=ok
// SIG undefined FUN_145eb55ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb55ce(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9b7218) {
    FUN_144b3d300(&DAT_14c9b7218);
    if (DAT_14c9b7218 == -1) {
      FUN_145eb583c();
      FUN_145eb56f2();
      FUN_140db5666(&DAT_14c9b7170,0,&DAT_14c9b7108,L"FAmbientOcclusionCS",
                    L"/Engine/Private/PostProcessAmbientOcclusion.usf",L"MainCS",5,0x14,
                    FUN_14713513c,FUN_1471350dc,&LAB_142b8b90a,&LAB_142b8b906,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9b8690);
      _DAT_14c9b7170 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142b8b921);
      _Init_thread_footer(&DAT_14c9b7218);
    }
  }
  return &DAT_14c9b7170;
}



// FUNCTION 145eb56f2 FUN_145eb56f2 body=205 status=ok
// SIG undefined FUN_145eb56f2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb56f2(void)

{
  if ((DAT_14c9b716f & 2) == 0) {
    DAT_14c9b716f = DAT_14c9b716f | 2;
    _DAT_14c9b7110 = L"FAmbientOcclusionCS";
    _DAT_14c9b7128 = FUN_146826540;
    _DAT_14c9b7130 = FUN_146825d77;
    _DAT_14c9b7138 = FUN_146825fd6;
    _DAT_14c9b7140 = FUN_1407e02ea;
    _DAT_14c9b7148 = FUN_146826273;
    _DAT_14c9b7120 = FUN_1471350ae;
    _DAT_14c9b7160 = 0xffffffff000000e0;
    _DAT_14c9b7168 = 8;
    DAT_14c9b716c = 0;
    _DAT_14c9b7150 = &LAB_1471350d8;
    FUN_145eb57c0();
    FUN_1407e00cc(&DAT_14c9b7108);
    return;
  }
  return;
}



// FUNCTION 145eb57c0 FUN_145eb57c0 body=123 status=ok
// SIG undefined FUN_145eb57c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb57c0(void)

{
  _DAT_14c9c0110 = L"BASE";
  DAT_14c9c013a = 4;
  _DAT_14c9c0118 = FUN_140b35ae4();
  _DAT_14c9c0120 = DAT_14c9b7118;
  _DAT_14c9c0128 = &LAB_14682652b;
  DAT_14c9b7118 = &DAT_14c9c0110;
  DAT_14c9b716d = DAT_14c9b716d + '\x01';
  _DAT_14c9c0130 = 0x100000000;
  if (*(char *)(_DAT_14c9c0118 + 100) != '\0') {
    DAT_14c9b716e = DAT_14c9b716e + '\x01';
  }
  return;
}



// FUNCTION 145eb583c FUN_145eb583c body=261 status=ok
// SIG undefined FUN_145eb583c(void)

void FUN_145eb583c(void)

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
              0x110) < DAT_14c9b8710) {
    FUN_144b3d300(&DAT_14c9b8710);
    if (DAT_14c9b8710 == -1) {
      FUN_145eb5942(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1e0;
      local_58 = 0x2ea;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9b8690,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142b90919);
      _Init_thread_footer(&DAT_14c9b8710);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb5942 FUN_145eb5942 body=226 status=ok
// SIG undefined FUN_145eb5942(void)

longlong * FUN_145eb5942(longlong *param_1)

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
  pcVar13 = FUN_1462b8fd2;
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



// FUNCTION 145eb5a2a FUN_145eb5a2a body=140 status=ok
// SIG undefined FUN_145eb5a2a(void)

undefined1 * FUN_145eb5a2a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145dabed0();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"SharedParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FAmbientOcclusionParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2eb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9b8608;
  return &LAB_145eb5a26;
}



// FUNCTION 145eb5ab6 FUN_145eb5ab6 body=144 status=ok
// SIG undefined FUN_145eb5ab6(void)

code * FUN_145eb5ab6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1c0000002ec;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eb5a2a;
}



// FUNCTION 145eb5b46 FUN_145eb5b46 body=292 status=ok
// SIG undefined FUN_145eb5b46(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb5b46(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9d6bf8) {
    FUN_144b3d300(&DAT_14c9d6bf8);
    if (DAT_14c9d6bf8 == -1) {
      FUN_145eb5db4();
      FUN_145eb5c6a();
      FUN_140db5666(&DAT_14c9d6b50,0,&DAT_14c9d6ae8,L"FHairStrandsVoxelShadowMaskPS",
                    L"/Engine/Private/HairStrands/HairStrandsDeepShadowMask.usf",L"MainPS",3,2,
                    FUN_14717f114,FUN_14717f0b4,&LAB_1462ca3e6,&LAB_14717f0b0,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14c9da350);
      _DAT_14c9d6b50 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142c60d55);
      _Init_thread_footer(&DAT_14c9d6bf8);
    }
  }
  return &DAT_14c9d6b50;
}



// FUNCTION 145eb5c6a FUN_145eb5c6a body=205 status=ok
// SIG undefined FUN_145eb5c6a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb5c6a(void)

{
  if ((DAT_14c9d6b4f & 2) == 0) {
    DAT_14c9d6b4f = DAT_14c9d6b4f | 2;
    _DAT_14c9d6af0 = L"FHairStrandsVoxelShadowMaskPS";
    _DAT_14c9d6b08 = FUN_146826540;
    _DAT_14c9d6b10 = FUN_146825d77;
    _DAT_14c9d6b18 = FUN_146825fd6;
    _DAT_14c9d6b20 = FUN_1407e02ea;
    _DAT_14c9d6b28 = FUN_146826273;
    _DAT_14c9d6b00 = FUN_14717f082;
    _DAT_14c9d6b40 = 0xffffffff000000e0;
    _DAT_14c9d6b48 = 8;
    DAT_14c9d6b4c = 0;
    _DAT_14c9d6b30 = &LAB_14717f0ac;
    FUN_145eb5d38();
    FUN_1407e00cc(&DAT_14c9d6ae8);
    return;
  }
  return;
}



// FUNCTION 145eb5d38 FUN_145eb5d38 body=123 status=ok
// SIG undefined FUN_145eb5d38(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb5d38(void)

{
  _DAT_14c9db9d8 = L"BASE";
  DAT_14c9dba02 = 4;
  _DAT_14c9db9e0 = FUN_140b35ae4();
  _DAT_14c9db9e8 = DAT_14c9d6af8;
  _DAT_14c9db9f0 = &LAB_14682652b;
  DAT_14c9d6af8 = &DAT_14c9db9d8;
  DAT_14c9d6b4d = DAT_14c9d6b4d + '\x01';
  _DAT_14c9db9f8 = 0x100000000;
  if (*(char *)(_DAT_14c9db9e0 + 100) != '\0') {
    DAT_14c9d6b4e = DAT_14c9d6b4e + '\x01';
  }
  return;
}



// FUNCTION 145eb5db4 FUN_145eb5db4 body=261 status=ok
// SIG undefined FUN_145eb5db4(void)

void FUN_145eb5db4(void)

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
              0x110) < DAT_14c9da3d0) {
    FUN_144b3d300(&DAT_14c9da3d0);
    if (DAT_14c9da3d0 == -1) {
      FUN_1415803c2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x1b0;
      local_58 = 0x1bb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9da350,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142c707c5);
      _Init_thread_footer(&DAT_14c9da3d0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb5ebe FUN_145eb5ebe body=138 status=ok
// SIG undefined FUN_145eb5ebe(void)

code * FUN_145eb5ebe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Voxel_MacroGroupId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x34000001c0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_147189590;
}



// FUNCTION 145eb5f48 FUN_145eb5f48 body=146 status=ok
// SIG undefined FUN_145eb5f48(void)

code * FUN_145eb5f48(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_144a81af4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairStrands";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FHairStrandsViewUniformParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa0000001cd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9d5f38;
  return FUN_1462cb960;
}



// FUNCTION 145eb5fda FUN_145eb5fda body=205 status=ok
// SIG undefined FUN_145eb5fda(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb5fda(void)

{
  if ((DAT_14c9f30c7 & 2) == 0) {
    DAT_14c9f30c7 = DAT_14c9f30c7 | 2;
    _DAT_14c9f3068 = L"FLumenRadiosityConvertToSH";
    _DAT_14c9f3080 = FUN_146826540;
    _DAT_14c9f3088 = FUN_146825d77;
    _DAT_14c9f3090 = FUN_146825fd6;
    _DAT_14c9f3098 = FUN_1407e02ea;
    _DAT_14c9f30a0 = FUN_146826273;
    _DAT_14c9f3078 = FUN_1471ed6ac;
    _DAT_14c9f30b8 = 0xffffffff000000e0;
    _DAT_14c9f30c0 = 8;
    DAT_14c9f30c4 = 0;
    _DAT_14c9f30a8 = &LAB_1471ed6d6;
    FUN_145eb60a8();
    FUN_1407e00cc(&DAT_14c9f3060);
    return;
  }
  return;
}



// FUNCTION 145eb60a8 FUN_145eb60a8 body=123 status=ok
// SIG undefined FUN_145eb60a8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb60a8(void)

{
  _DAT_14c9f7ac0 = L"BASE";
  DAT_14c9f7aea = 4;
  _DAT_14c9f7ac8 = FUN_140b35ae4();
  _DAT_14c9f7ad0 = DAT_14c9f3070;
  _DAT_14c9f7ad8 = &LAB_14682652b;
  DAT_14c9f3070 = &DAT_14c9f7ac0;
  DAT_14c9f30c5 = DAT_14c9f30c5 + '\x01';
  _DAT_14c9f7ae0 = 0x100000000;
  if (*(char *)(_DAT_14c9f7ac8 + 100) != '\0') {
    DAT_14c9f30c6 = DAT_14c9f30c6 + '\x01';
  }
  return;
}



// FUNCTION 145eb6124 FUN_145eb6124 body=226 status=ok
// SIG undefined FUN_145eb6124(void)

longlong * FUN_145eb6124(longlong *param_1)

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
  pcVar13 = FUN_1462dc9dc;
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



// FUNCTION 145eb620c FUN_145eb620c body=144 status=ok
// SIG undefined FUN_145eb620c(void)

code * FUN_145eb620c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000001fd;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462dcaf4;
}



// FUNCTION 145eb629c FUN_145eb629c body=146 status=ok
// SIG undefined FUN_145eb629c(void)

code * FUN_145eb629c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145ced4ba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"RadiosityTexelTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FLumenRadiosityTexelTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000001ff;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14c9f6150;
  return FUN_1462dca64;
}



// FUNCTION 145eb632e FUN_145eb632e body=292 status=ok
// SIG undefined FUN_145eb632e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb632e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca090b0) {
    FUN_144b3d300(&DAT_14ca090b0);
    if (DAT_14ca090b0 == -1) {
      FUN_145eb659c();
      FUN_145eb6452();
      FUN_140db5666(&DAT_14ca09008,0,&DAT_14ca08fa0,L"FSoftwareRayTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsRayTracing.usf",
                    L"SoftwareRayTraceLightSamplesCS",5,4,FUN_147239836,FUN_1472397d6,&LAB_1472397b4
                    ,&LAB_14723979a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e420);
      _DAT_14ca09008 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de1599);
      _Init_thread_footer(&DAT_14ca090b0);
    }
  }
  return &DAT_14ca09008;
}



// FUNCTION 145eb6452 FUN_145eb6452 body=205 status=ok
// SIG undefined FUN_145eb6452(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb6452(void)

{
  if ((DAT_14ca09007 & 2) == 0) {
    DAT_14ca09007 = DAT_14ca09007 | 2;
    _DAT_14ca08fa8 = L"FSoftwareRayTraceLightSamplesCS";
    _DAT_14ca08fc0 = FUN_146826540;
    _DAT_14ca08fc8 = FUN_146825d77;
    _DAT_14ca08fd0 = FUN_146825fd6;
    _DAT_14ca08fd8 = FUN_1407e02ea;
    _DAT_14ca08fe0 = FUN_146826273;
    _DAT_14ca08fb8 = FUN_14723976c;
    _DAT_14ca08ff8 = 0xffffffff000000e0;
    _DAT_14ca09000 = 8;
    DAT_14ca09004 = 0;
    _DAT_14ca08fe8 = &LAB_147239796;
    FUN_145eb6520();
    FUN_1407e00cc(&DAT_14ca08fa0);
    return;
  }
  return;
}



// FUNCTION 145eb6520 FUN_145eb6520 body=123 status=ok
// SIG undefined FUN_145eb6520(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb6520(void)

{
  _DAT_14ca0eb50 = L"BASE";
  DAT_14ca0eb7a = 4;
  _DAT_14ca0eb58 = FUN_140b35ae4();
  _DAT_14ca0eb60 = DAT_14ca08fb0;
  _DAT_14ca0eb68 = &LAB_14682652b;
  DAT_14ca08fb0 = &DAT_14ca0eb50;
  DAT_14ca09005 = DAT_14ca09005 + '\x01';
  _DAT_14ca0eb70 = 0x100000000;
  if (*(char *)(_DAT_14ca0eb58 + 100) != '\0') {
    DAT_14ca09006 = DAT_14ca09006 + '\x01';
  }
  return;
}



// FUNCTION 145eb659c FUN_145eb659c body=261 status=ok
// SIG undefined FUN_145eb659c(void)

void FUN_145eb659c(void)

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
              0x110) < DAT_14ca0e4a0) {
    FUN_144b3d300(&DAT_14ca0e4a0);
    if (DAT_14ca0e4a0 == -1) {
      FUN_145eb66a2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 800;
      local_58 = 0x201;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e420,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deeba3);
      _Init_thread_footer(&DAT_14ca0e4a0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb66a2 FUN_145eb66a2 body=226 status=ok
// SIG undefined FUN_145eb66a2(void)

longlong * FUN_145eb66a2(longlong *param_1)

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
  pcVar13 = FUN_1462ed4d2;
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



// FUNCTION 145eb678a FUN_145eb678a body=138 status=ok
// SIG undefined FUN_145eb678a(void)

code * FUN_145eb678a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWLightSamples";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000205;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb6814;
}



// FUNCTION 145eb6814 FUN_145eb6814 body=146 status=ok
// SIG undefined FUN_145eb6814(void)

code * FUN_145eb6814(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145d50cba();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"HairVoxelTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"MegaLights::FHairVoxelTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2e000000204;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e288;
  return FUN_1462ed55a;
}



// FUNCTION 145eb68a6 FUN_145eb68a6 body=292 status=ok
// SIG undefined FUN_145eb68a6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb68a6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca091d8) {
    FUN_144b3d300(&DAT_14ca091d8);
    if (DAT_14ca091d8 == -1) {
      FUN_145eb6b14();
      FUN_145eb69ca();
      FUN_140db5666(&DAT_14ca09130,0,&DAT_14ca090c8,L"FVolumeSoftwareRayTraceLightSamplesCS",
                    L"/Engine/Private/MegaLights/MegaLightsVolumeRayTracing.usf",
                    L"VolumeSoftwareRayTraceLightSamplesCS",5,2,FUN_14723992a,FUN_1472398ca,
                    &LAB_1472398a8,&LAB_147239898,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca0e4a8)
      ;
      _DAT_14ca09130 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142de15a5);
      _Init_thread_footer(&DAT_14ca091d8);
    }
  }
  return &DAT_14ca09130;
}



// FUNCTION 145eb69ca FUN_145eb69ca body=205 status=ok
// SIG undefined FUN_145eb69ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb69ca(void)

{
  if ((DAT_14ca0912f & 2) == 0) {
    DAT_14ca0912f = DAT_14ca0912f | 2;
    _DAT_14ca090d0 = L"FVolumeSoftwareRayTraceLightSamplesCS";
    _DAT_14ca090e8 = FUN_146826540;
    _DAT_14ca090f0 = FUN_146825d77;
    _DAT_14ca090f8 = FUN_146825fd6;
    _DAT_14ca09100 = FUN_1407e02ea;
    _DAT_14ca09108 = FUN_146826273;
    _DAT_14ca090e0 = FUN_14723986a;
    _DAT_14ca09120 = 0xffffffff000000e0;
    _DAT_14ca09128 = 8;
    DAT_14ca0912c = 0;
    _DAT_14ca09110 = &LAB_147239894;
    FUN_145eb6a98();
    FUN_1407e00cc(&DAT_14ca090c8);
    return;
  }
  return;
}



// FUNCTION 145eb6a98 FUN_145eb6a98 body=123 status=ok
// SIG undefined FUN_145eb6a98(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb6a98(void)

{
  _DAT_14ca0eb80 = L"BASE";
  DAT_14ca0ebaa = 4;
  _DAT_14ca0eb88 = FUN_140b35ae4();
  _DAT_14ca0eb90 = DAT_14ca090d8;
  _DAT_14ca0eb98 = &LAB_14682652b;
  DAT_14ca090d8 = &DAT_14ca0eb80;
  DAT_14ca0912d = DAT_14ca0912d + '\x01';
  _DAT_14ca0eba0 = 0x100000000;
  if (*(char *)(_DAT_14ca0eb88 + 100) != '\0') {
    DAT_14ca0912e = DAT_14ca0912e + '\x01';
  }
  return;
}



// FUNCTION 145eb6b14 FUN_145eb6b14 body=261 status=ok
// SIG undefined FUN_145eb6b14(void)

void FUN_145eb6b14(void)

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
              0x110) < DAT_14ca0e528) {
    FUN_144b3d300(&DAT_14ca0e528);
    if (DAT_14ca0e528 == -1) {
      FUN_145eb6c1a(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x2f0;
      local_58 = 0x235;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca0e4a8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142deebaf);
      _Init_thread_footer(&DAT_14ca0e528);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb6c1a FUN_145eb6c1a body=226 status=ok
// SIG undefined FUN_145eb6c1a(void)

longlong * FUN_145eb6c1a(longlong *param_1)

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
  pcVar13 = FUN_1462ed674;
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



// FUNCTION 145eb6d02 FUN_145eb6d02 body=140 status=ok
// SIG undefined FUN_145eb6d02(void)

undefined1 * FUN_145eb6d02(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145c10b58();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"CompactedTraceParameters";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"MegaLights::FCompactedTraceParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x236;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca0e310;
  return &LAB_145eb6cfe;
}



// FUNCTION 145eb6d8e FUN_145eb6d8e body=144 status=ok
// SIG undefined FUN_145eb6d8e(void)

code * FUN_145eb6d8e(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_1414087ac();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"MegaLightsParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FMegaLightsParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000237;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eb6d02;
}



// FUNCTION 145eb6e1e FUN_145eb6e1e body=292 status=ok
// SIG undefined FUN_145eb6e1e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb6e1e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0440) {
    FUN_144b3d300(&DAT_14caa0440);
    if (DAT_14caa0440 == -1) {
      FUN_145eb7096();
      FUN_145eb6f42();
      FUN_140db5666(&DAT_14caa0398,0,&DAT_14caa0330,L"FScatterCopyCS",
                    L"/Engine/Private/ByteBuffer.usf",L"ScatterCopyCS",5,0x14,FUN_147442624,
                    FUN_1474425c4,&LAB_14323c0ba,&LAB_1474425c0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14caa0c78);
      _DAT_14caa0398 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c10c);
      _Init_thread_footer(&DAT_14caa0440);
    }
  }
  return &DAT_14caa0398;
}



// FUNCTION 145eb6f42 FUN_145eb6f42 body=205 status=ok
// SIG undefined FUN_145eb6f42(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb6f42(void)

{
  if ((DAT_14caa0397 & 2) == 0) {
    DAT_14caa0397 = DAT_14caa0397 | 2;
    _DAT_14caa0338 = L"FScatterCopyCS";
    _DAT_14caa0350 = FUN_146826540;
    _DAT_14caa0358 = FUN_146825d77;
    _DAT_14caa0360 = FUN_146825fd6;
    _DAT_14caa0368 = FUN_1407e02ea;
    _DAT_14caa0370 = FUN_146826273;
    _DAT_14caa0348 = FUN_147442592;
    _DAT_14caa0388 = 0xffffffff000000e0;
    _DAT_14caa0390 = 8;
    DAT_14caa0394 = 0;
    _DAT_14caa0378 = &LAB_1474425bc;
    FUN_145eb7010();
    FUN_1407e00cc(&DAT_14caa0330);
    return;
  }
  return;
}



// FUNCTION 145eb7010 FUN_145eb7010 body=133 status=ok
// SIG undefined FUN_145eb7010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb7010(void)

{
  _DAT_14caa10f0 = L"BASE";
  DAT_14caa111a = 4;
  FUN_145cdff64();
  _DAT_14caa1100 = DAT_14caa0340;
  _DAT_14caa10f8 = &DAT_14caa1028;
  _DAT_14caa1108 = &LAB_14682652b;
  DAT_14caa0340 = &DAT_14caa10f0;
  DAT_14caa0395 = DAT_14caa0395 + '\x01';
  _DAT_14caa1110 = 0x100000000;
  if (DAT_14caa108c != '\0') {
    DAT_14caa0396 = DAT_14caa0396 + '\x01';
  }
  return;
}



// FUNCTION 145eb7096 FUN_145eb7096 body=261 status=ok
// SIG undefined FUN_145eb7096(void)

void FUN_145eb7096(void)

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
              0x110) < DAT_14caa0cf8) {
    FUN_144b3d300(&DAT_14caa0cf8);
    if (DAT_14caa0cf8 == -1) {
      FUN_145eb719c(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x70;
      local_58 = 0x9a;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0c78,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323deff);
      _Init_thread_footer(&DAT_14caa0cf8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb719c FUN_145eb719c body=226 status=ok
// SIG undefined FUN_145eb719c(void)

longlong * FUN_145eb719c(longlong *param_1)

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
  pcVar13 = FUN_146320ff2;
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



// FUNCTION 145eb7284 FUN_145eb7284 body=136 status=ok
// SIG undefined FUN_145eb7284(void)

code * FUN_145eb7284(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"NumScatters";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000009c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14632107a;
}



// FUNCTION 145eb730c FUN_145eb730c body=138 status=ok
// SIG undefined FUN_145eb730c(void)

code * FUN_145eb730c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"UploadByteAddressBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"ByteAddressBuffer";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x480000009d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb7284;
}



// FUNCTION 145eb7396 FUN_145eb7396 body=154 status=ok
// SIG undefined FUN_145eb7396(void)

undefined8 * FUN_145eb7396(undefined8 param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_1400b465c();
  puVar2 = (undefined8 *)FUN_14001cc68(0x138,0x10);
  FUN_145eb7430(puVar2,uVar1,param_3);
  *puVar2 = &PTR_FUN_14b984f50;
  puVar2[0x20] = 0;
  *(undefined4 *)(puVar2 + 0x21) = 0;
  puVar2[0x1c] = 0;
  puVar2[0x1d] = 0;
  *(undefined8 *)((longlong)puVar2 + 0x10c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar2 + 0x114) = 0;
  puVar2[0x24] = 0;
  *(undefined4 *)(puVar2 + 0x25) = 0;
  *(undefined1 *)(puVar2 + 0x26) = 0;
  *param_2 = puVar2;
  return param_2;
}



// FUNCTION 145eb7430 FUN_145eb7430 body=195 status=ok
// SIG undefined FUN_145eb7430(void)

undefined8 * FUN_145eb7430(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  *param_1 = &PTR_FUN_14b4f3820;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1);
  *(undefined4 *)(param_1 + 2) = param_3;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x100000100000000;
  *(undefined1 *)((longlong)param_1 + 0x25) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x27) = 0;
  *(undefined8 *)((longlong)param_1 + 0x2f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0x13f800000;
  *(undefined1 *)((longlong)param_1 + 0x84) = 1;
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x16) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 2;
  return param_1;
}



// FUNCTION 145eb74f4 FUN_145eb74f4 body=53 status=ok
// SIG undefined FUN_145eb74f4(void)

void FUN_145eb74f4(longlong *param_1)

{
  FUN_145eb752a();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eb752a FUN_145eb752a body=345 status=ok
// SIG undefined FUN_145eb752a(void)

void FUN_145eb752a(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar2 = *(longlong *)(*local_70 + 8 + (longlong)iStack_54 * 0x28);
      if (lVar2 != 0) {
        local_48 = lVar2;
        FUN_1447a2442(&local_48);
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eb7684 FUN_145eb7684 body=53 status=ok
// SIG undefined FUN_145eb7684(void)

void FUN_145eb7684(longlong *param_1)

{
  FUN_145eb76ba();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eb76ba FUN_145eb76ba body=345 status=ok
// SIG undefined FUN_145eb76ba(void)

void FUN_145eb76ba(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined8 local_60;
  longlong *local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong *local_38;
  uint local_30;
  int iStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_40 = 0x100000000;
  local_30 = 0xffffffff;
  iStack_2c = 0;
  local_28 = 0;
  local_38 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_40);
  }
  local_60 = local_40;
  local_58 = local_38;
  local_50 = local_30;
  iStack_4c = iStack_2c;
  local_48 = local_28;
  local_44 = local_24;
  local_68 = param_1;
  if (iStack_2c < (int)local_38[3]) {
    do {
      if (*(longlong *)(*local_68 + (longlong)iStack_4c * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145eb7814 FUN_145eb7814 body=39 status=ok
// SIG undefined FUN_145eb7814(void)

void FUN_145eb7814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_145eb783c(param_3,param_2,param_4,param_5,param_6);
  return;
}



// FUNCTION 145eb783c FUN_145eb783c body=359 status=ok
// SIG undefined FUN_145eb783c(void)

ulonglong FUN_145eb783c(undefined8 *param_1,longlong *param_2)

{
  short *psVar1;
  void *_Src;
  int iVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  psVar1 = (short *)*param_2;
  if (*psVar1 == 0x22) {
    uVar4 = 0;
    lVar3 = FUN_1401e9420(psVar1,&local_38,0);
    if (lVar3 == 0) goto LAB_145eb791a;
    FUN_140db34f4(&local_38,0x22,0);
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x24) != 0) {
      FUN_1446dda88(param_1 + 3,0);
    }
  }
  else {
    FUN_14020fad6(&local_38,psVar1);
    iVar2 = (int)uStack_30 + -1;
    if ((int)uStack_30 == 0) {
      iVar2 = 0;
    }
    *param_2 = *param_2 + (longlong)iVar2 * 2;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (*(int *)((longlong)param_1 + 0x24) != 0) {
    FUN_1446dda88(param_1 + 3,0);
  }
  _Src = local_38;
  local_48 = (void *)0x0;
  lVar3 = (longlong)(int)uStack_30;
  local_40 = (int)uStack_30;
  if (lVar3 == 0) {
    local_3c = 0;
    _Size = 0;
  }
  else {
    FUN_1446dd670(&local_48,uStack_30 & 0xffffffff,0);
    _Size = lVar3 * 2;
    memcpy(local_48,_Src,_Size);
  }
  FUN_140001510(param_1,&local_48,0);
  uVar4 = CONCAT71((int7)(_Size >> 8),1);
LAB_145eb791a:
  if (local_38 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb79a4 FUN_145eb79a4 body=63 status=ok
// SIG undefined FUN_145eb79a4(void)

void FUN_145eb79a4(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145eb79e4(param_1);
    FUN_145934686(param_1);
    return;
  }
  FUN_145934686(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_147a4edda(param_1);
  return;
}



// FUNCTION 145eb79e4 FUN_145eb79e4 body=335 status=ok
// SIG undefined FUN_145eb79e4(void)

void FUN_145eb79e4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
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



// FUNCTION 145eb7b34 FUN_145eb7b34 body=63 status=ok
// SIG undefined FUN_145eb7b34(void)

void FUN_145eb7b34(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145eb7b74(param_1);
    FUN_145c4cc0e(param_1);
    return;
  }
  FUN_145c4cc0e(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_1489edcde(param_1);
  return;
}



// FUNCTION 145eb7b74 FUN_145eb7b74 body=335 status=ok
// SIG undefined FUN_145eb7b74(void)

void FUN_145eb7b74(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 145eb7cc4 FUN_145eb7cc4 body=53 status=ok
// SIG undefined FUN_145eb7cc4(void)

void FUN_145eb7cc4(longlong *param_1)

{
  FUN_145eb7cfa();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145eb7cfa FUN_145eb7cfa body=345 status=ok
// SIG undefined FUN_145eb7cfa(void)

void FUN_145eb7cfa(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  local_40 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      plVar4 = *(longlong **)(*local_70 + 0x10 + (longlong)iStack_54 * 0x20);
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar4 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar4)(plVar4);
          LOCK();
          piVar3 = (int *)((longlong)plVar4 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar4 + 0x10))(plVar4);
          }
        }
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb7e54 FUN_145eb7e54 body=63 status=ok
// SIG undefined FUN_145eb7e54(void)

void FUN_145eb7e54(longlong param_1)

{
  if (*(int *)(param_1 + 0x48) < 2) {
    FUN_145eb7e94(param_1);
    FUN_145a2803a(param_1);
    return;
  }
  FUN_145a2803a(param_1);
  *(undefined4 *)(param_1 + 0x48) = 1;
  FUN_14980edca(param_1);
  return;
}



// FUNCTION 145eb7e94 FUN_145eb7e94 body=335 status=ok
// SIG undefined FUN_145eb7e94(void)

void FUN_145eb7e94(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 145eb7ffe FUN_145eb7ffe body=50 status=ok
// SIG undefined FUN_145eb7ffe(void)

void FUN_145eb7ffe(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = (longlong *)FUN_14041a931();
  if (plVar1 != (longlong *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 0x10))(plVar1);
    FUN_1415806cc(uVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 145eb8030 FUN_145eb8030 body=290 status=ok
// SIG undefined FUN_145eb8030(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb8030(void)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca89810) {
    FUN_144b3d300(&DAT_14ca89810);
    if (DAT_14ca89810 == -1) {
      uVar1 = FUN_145eb82a6();
      FUN_145eb8152();
      FUN_140db5666(&DAT_14ca89768,0,&DAT_14ca89700,L"FCopyRectSrvPS",
                    L"/Engine/Private/ScreenPass.usf",L"CopyRectPS",3,1,FUN_1474197ec,FUN_147419792,
                    &LAB_14741978e,&LAB_14741978a,&LAB_14712ac0c,&LAB_14712ac08,0xe0,uVar1);
      _DAT_14ca89768 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f21e4);
      _Init_thread_footer(&DAT_14ca89810);
    }
  }
  return &DAT_14ca89768;
}



// FUNCTION 145eb8152 FUN_145eb8152 body=206 status=ok
// SIG undefined FUN_145eb8152(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb8152(void)

{
  if ((DAT_14ca89767 & 2) == 0) {
    DAT_14ca89767 = DAT_14ca89767 | 2;
    _DAT_14ca89708 = L"FCopyRectSrvPS";
    _DAT_14ca89720 = FUN_146826540;
    _DAT_14ca89728 = FUN_146825d77;
    _DAT_14ca89730 = FUN_146825fd6;
    _DAT_14ca89738 = FUN_1407e02ea;
    _DAT_14ca89740 = FUN_146826273;
    _DAT_14ca89718 = FUN_14741975a;
    _DAT_14ca89758 = 0xffffffff000000e0;
    _DAT_14ca89760 = 8;
    DAT_14ca89764 = 0;
    _DAT_14ca89748 = &LAB_147419786;
    FUN_145eb8220();
    FUN_1407e00cc(&DAT_14ca89700);
  }
  return &DAT_14ca89700;
}



// FUNCTION 145eb8220 FUN_145eb8220 body=133 status=ok
// SIG undefined FUN_145eb8220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb8220(void)

{
  _DAT_14ca93d10 = L"BASE";
  DAT_14ca93d3a = 4;
  FUN_140b35ae4();
  _DAT_14ca93d20 = DAT_14ca89710;
  _DAT_14ca93d18 = &DAT_14ca8c6c8;
  _DAT_14ca93d28 = &LAB_14682652b;
  DAT_14ca89710 = &DAT_14ca93d10;
  DAT_14ca89765 = DAT_14ca89765 + '\x01';
  _DAT_14ca93d30 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca89766 = DAT_14ca89766 + '\x01';
  }
  return;
}



// FUNCTION 145eb82a6 FUN_145eb82a6 body=268 status=ok
// SIG undefined FUN_145eb82a6(void)

undefined * FUN_145eb82a6(void)

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
              0x110) < DAT_14ca4c9c8) {
    FUN_144b3d300(&DAT_14ca4c9c8);
    if (DAT_14ca4c9c8 == -1) {
      FUN_145eb83b4(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x110;
      local_58 = 0xb0;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca4c948,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_143035962);
      _Init_thread_footer(&DAT_14ca4c9c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return &DAT_14ca4c948;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb83b4 FUN_145eb83b4 body=226 status=ok
// SIG undefined FUN_145eb83b4(void)

longlong * FUN_145eb83b4(longlong *param_1)

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
  pcVar13 = FUN_146306cec;
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



// FUNCTION 145eb849c FUN_145eb849c body=132 status=ok
// SIG undefined FUN_145eb849c(void)

undefined1 * FUN_145eb849c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_145eb8498;
}



// FUNCTION 145eb8520 FUN_145eb8520 body=138 status=ok
// SIG undefined FUN_145eb8520(void)

code * FUN_145eb8520(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"InputSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000b2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb849c;
}



// FUNCTION 145eb85aa FUN_145eb85aa body=292 status=ok
// SIG undefined FUN_145eb85aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb85aa(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8bd78) {
    FUN_144b3d300(&DAT_14ca8bd78);
    if (DAT_14ca8bd78 == -1) {
      FUN_145eb8822();
      FUN_145eb86ce();
      FUN_140db5666(&DAT_14ca8bcd0,0,&DAT_14ca8bc68,L"FGenerateMipsPS",
                    L"/Engine/Private/ComputeGenerateMips.usf",L"MainPS",3,1,FUN_14741bed0,
                    FUN_14741be70,&LAB_14741be6c,&LAB_14741be68,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca916c0);
      _DAT_14ca8bcd0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f2e27);
      _Init_thread_footer(&DAT_14ca8bd78);
    }
  }
  return &DAT_14ca8bcd0;
}



// FUNCTION 145eb86ce FUN_145eb86ce body=205 status=ok
// SIG undefined FUN_145eb86ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb86ce(void)

{
  if ((DAT_14ca8bccf & 2) == 0) {
    DAT_14ca8bccf = DAT_14ca8bccf | 2;
    _DAT_14ca8bc70 = L"FGenerateMipsPS";
    _DAT_14ca8bc88 = FUN_146826540;
    _DAT_14ca8bc90 = FUN_146825d77;
    _DAT_14ca8bc98 = FUN_146825fd6;
    _DAT_14ca8bca0 = FUN_1407e02ea;
    _DAT_14ca8bca8 = FUN_146826273;
    _DAT_14ca8bc80 = FUN_14741be38;
    _DAT_14ca8bcc0 = 0xffffffff000000e0;
    _DAT_14ca8bcc8 = 8;
    DAT_14ca8bccc = 0;
    _DAT_14ca8bcb0 = &LAB_14741be64;
    FUN_145eb879c();
    FUN_1407e00cc(&DAT_14ca8bc68);
    return;
  }
  return;
}



// FUNCTION 145eb879c FUN_145eb879c body=133 status=ok
// SIG undefined FUN_145eb879c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb879c(void)

{
  _DAT_14ca94310 = L"BASE";
  DAT_14ca9433a = 4;
  FUN_140b35ae4();
  _DAT_14ca94320 = DAT_14ca8bc78;
  _DAT_14ca94318 = &DAT_14ca8c6c8;
  _DAT_14ca94328 = &LAB_14682652b;
  DAT_14ca8bc78 = &DAT_14ca94310;
  DAT_14ca8bccd = DAT_14ca8bccd + '\x01';
  _DAT_14ca94330 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8bcce = DAT_14ca8bcce + '\x01';
  }
  return;
}



// FUNCTION 145eb8822 FUN_145eb8822 body=261 status=ok
// SIG undefined FUN_145eb8822(void)

void FUN_145eb8822(void)

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
              0x110) < DAT_14ca91740) {
    FUN_144b3d300(&DAT_14ca91740);
    if (DAT_14ca91740 == -1) {
      FUN_145eb8928(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x120;
      local_58 = 0x3d;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca916c0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f8c21);
      _Init_thread_footer(&DAT_14ca91740);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb8928 FUN_145eb8928 body=226 status=ok
// SIG undefined FUN_145eb8928(void)

longlong * FUN_145eb8928(longlong *param_1)

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
  pcVar13 = FUN_14631c60e;
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



// FUNCTION 145eb8a10 FUN_145eb8a10 body=138 status=ok
// SIG undefined FUN_145eb8a10(void)

code * FUN_145eb8a10(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"Level";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000003f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_14631c696;
}



// FUNCTION 145eb8a9a FUN_145eb8a9a body=138 status=ok
// SIG undefined FUN_145eb8a9a(void)

code * FUN_145eb8a9a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MipInSRV";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000040;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb8a10;
}



// FUNCTION 145eb8b24 FUN_145eb8b24 body=292 status=ok
// SIG undefined FUN_145eb8b24(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb8b24(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caa0318) {
    FUN_144b3d300(&DAT_14caa0318);
    if (DAT_14caa0318 == -1) {
      FUN_145eb8d9c();
      FUN_145eb8c48();
      FUN_140db5666(&DAT_14caa0270,0,&DAT_14caa0208,L"FMemcpyCS",L"/Engine/Private/ByteBuffer.usf",
                    L"MemcpyCS",5,0x14,FUN_14744255e,FUN_1474424fe,&LAB_14323c05c,&LAB_1474424fa,
                    &LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14caa0bf0);
      _DAT_14caa0270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_14323c0ae);
      _Init_thread_footer(&DAT_14caa0318);
    }
  }
  return &DAT_14caa0270;
}



// FUNCTION 145eb8c48 FUN_145eb8c48 body=205 status=ok
// SIG undefined FUN_145eb8c48(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb8c48(void)

{
  if ((DAT_14caa026f & 2) == 0) {
    DAT_14caa026f = DAT_14caa026f | 2;
    _DAT_14caa0210 = L"FMemcpyCS";
    _DAT_14caa0228 = FUN_146826540;
    _DAT_14caa0230 = FUN_146825d77;
    _DAT_14caa0238 = FUN_146825fd6;
    _DAT_14caa0240 = FUN_1407e02ea;
    _DAT_14caa0248 = FUN_146826273;
    _DAT_14caa0220 = FUN_1474424cc;
    _DAT_14caa0260 = 0xffffffff000000e0;
    _DAT_14caa0268 = 8;
    DAT_14caa026c = 0;
    _DAT_14caa0250 = &LAB_1474424f6;
    FUN_145eb8d16();
    FUN_1407e00cc(&DAT_14caa0208);
    return;
  }
  return;
}



// FUNCTION 145eb8d16 FUN_145eb8d16 body=133 status=ok
// SIG undefined FUN_145eb8d16(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb8d16(void)

{
  _DAT_14caa10c0 = L"BASE";
  DAT_14caa10ea = 4;
  FUN_145cdff64();
  _DAT_14caa10d0 = DAT_14caa0218;
  _DAT_14caa10c8 = &DAT_14caa1028;
  _DAT_14caa10d8 = &LAB_14682652b;
  DAT_14caa0218 = &DAT_14caa10c0;
  DAT_14caa026d = DAT_14caa026d + '\x01';
  _DAT_14caa10e0 = 0x100000000;
  if (DAT_14caa108c != '\0') {
    DAT_14caa026e = DAT_14caa026e + '\x01';
  }
  return;
}



// FUNCTION 145eb8d9c FUN_145eb8d9c body=261 status=ok
// SIG undefined FUN_145eb8d9c(void)

void FUN_145eb8d9c(void)

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
              0x110) < DAT_14caa0c70) {
    FUN_144b3d300(&DAT_14caa0c70);
    if (DAT_14caa0c70 == -1) {
      FUN_145eb8ea2(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x60;
      local_58 = 0x80;
      local_48 = local_20;
      FUN_140b49562(&DAT_14caa0bf0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_14323def3);
      _Init_thread_footer(&DAT_14caa0c70);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb8ea2 FUN_145eb8ea2 body=226 status=ok
// SIG undefined FUN_145eb8ea2(void)

longlong * FUN_145eb8ea2(longlong *param_1)

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
  pcVar13 = FUN_146320f6a;
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



// FUNCTION 145eb8f8a FUN_145eb8f8a body=138 status=ok
// SIG undefined FUN_145eb8f8a(void)

undefined1 * FUN_145eb8f8a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_145cdfd0a();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FByteBufferShader::FParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x81;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14caa0b68;
  return &LAB_145eb8f86;
}



// FUNCTION 145eb9014 FUN_145eb9014 body=138 status=ok
// SIG undefined FUN_145eb9014(void)

code * FUN_145eb9014(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Buffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4000000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 6;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_145eb8f8a;
}



// FUNCTION 145eb90a6 FUN_145eb90a6 body=287 status=ok
// SIG undefined FUN_145eb90a6(void)

undefined8 * FUN_145eb90a6(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [40];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar4 = FUN_14007ca06();
  FUN_145eb91c6(param_1,uVar4);
  *param_1 = &PTR_FUN_14beefe80;
  param_1[5] = &PTR_LAB_14bef0130;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb9) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  plVar5 = (longlong *)FUN_14001cc68(0x138,0x10);
  plVar5[1] = (longlong)&DAT_100000001;
  *plVar5 = (longlong)&PTR_FUN_14bef1470;
  plVar1 = plVar5 + 2;
  FUN_145eb92c2(plVar1);
  local_30 = plVar1;
  local_28 = plVar5;
  FUN_145eb9220(&local_30,plVar1);
  plVar3 = local_28;
  param_1[0x1b] = plVar1;
  param_1[0x1c] = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (local_28 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb91c6 FUN_145eb91c6 body=90 status=ok
// SIG undefined FUN_145eb91c6(void)

undefined8 * FUN_145eb91c6(undefined8 *param_1)

{
  FUN_144a0768c();
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *param_1 = &PTR_FUN_14a58bd20;
  param_1[5] = &PTR_LAB_14a58bfd0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 145eb9220 FUN_145eb9220 body=162 status=ok
// SIG undefined FUN_145eb9220(void)

void FUN_145eb9220(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (((*(longlong *)(param_2 + 8) != 0) && (*(longlong *)(param_2 + 0x10) != 0)) &&
     (0 < *(int *)(*(longlong *)(param_2 + 0x10) + 8))) {
    return;
  }
  plVar2 = *(longlong **)(param_1 + 8);
  if (plVar2 == (longlong *)0x0) {
    *(longlong *)(param_2 + 8) = param_2;
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      return;
    }
  }
  else {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    *(longlong *)(param_2 + 8) = param_2;
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_145eb925f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_145eb925f;
    }
  }
  LOCK();
  piVar1 = (int *)((longlong)plVar3 + 0xc);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
    (**(code **)(*plVar3 + 0x10))();
  }
  *(longlong **)(param_2 + 0x10) = plVar2;
  if (plVar2 == (longlong *)0x0) {
    return;
  }
LAB_145eb925f:
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
                    /* WARNING: Could not recover jumptable at 0x000145eb92be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 145eb92c2 FUN_145eb92c2 body=251 status=ok
// SIG undefined FUN_145eb92c2(void)

undefined8 * FUN_145eb92c2(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14bef11c8;
  FUN_1409e1656(param_1 + 3);
  *param_1 = &PTR_FUN_14beef5e8;
  param_1[3] = &PTR_FUN_14beef5f0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar1 = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 100) = DAT_14c967818;
  *(undefined8 *)((longlong)param_1 + 0x6c) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xf));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xf),4000);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x14));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x14),4000);
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  param_1[0x24] = 0;
  return param_1;
}



// FUNCTION 145eb93be FUN_145eb93be body=292 status=ok
// SIG undefined FUN_145eb93be(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb93be(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9c7318) {
    FUN_144b3d300(&DAT_14c9c7318);
    if (DAT_14c9c7318 == -1) {
      FUN_145eb962c();
      FUN_145eb94e2();
      FUN_140db5666(&DAT_14c9c7270,0,&DAT_14c9c7208,L"FShadowTileVS",
                    L"/Engine/Private/DistanceFieldShadowing.usf",L"ShadowTileVS",0,2,FUN_14714f760,
                    FUN_14714f700,&LAB_14714f6d6,&LAB_14714f6d2,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14c9c8d18);
      _DAT_14c9c7270 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142be017f);
      _Init_thread_footer(&DAT_14c9c7318);
    }
  }
  return &DAT_14c9c7270;
}



// FUNCTION 145eb94e2 FUN_145eb94e2 body=205 status=ok
// SIG undefined FUN_145eb94e2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb94e2(void)

{
  if ((DAT_14c9c726f & 2) == 0) {
    DAT_14c9c726f = DAT_14c9c726f | 2;
    _DAT_14c9c7210 = L"FShadowTileVS";
    _DAT_14c9c7228 = FUN_146826540;
    _DAT_14c9c7230 = FUN_146825d77;
    _DAT_14c9c7238 = FUN_146825fd6;
    _DAT_14c9c7240 = FUN_1407e02ea;
    _DAT_14c9c7248 = FUN_146826273;
    _DAT_14c9c7220 = FUN_14714f6a4;
    _DAT_14c9c7260 = 0xffffffff000000e0;
    _DAT_14c9c7268 = 8;
    DAT_14c9c726c = 0;
    _DAT_14c9c7250 = &LAB_14714f6ce;
    FUN_145eb95b0();
    FUN_1407e00cc(&DAT_14c9c7208);
    return;
  }
  return;
}



// FUNCTION 145eb95b0 FUN_145eb95b0 body=123 status=ok
// SIG undefined FUN_145eb95b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb95b0(void)

{
  _DAT_14c9c97a8 = L"BASE";
  DAT_14c9c97d2 = 4;
  _DAT_14c9c97b0 = FUN_140b35ae4();
  _DAT_14c9c97b8 = DAT_14c9c7218;
  _DAT_14c9c97c0 = &LAB_14682652b;
  DAT_14c9c7218 = &DAT_14c9c97a8;
  DAT_14c9c726d = DAT_14c9c726d + '\x01';
  _DAT_14c9c97c8 = 0x100000000;
  if (*(char *)(_DAT_14c9c97b0 + 100) != '\0') {
    DAT_14c9c726e = DAT_14c9c726e + '\x01';
  }
  return;
}



// FUNCTION 145eb962c FUN_145eb962c body=261 status=ok
// SIG undefined FUN_145eb962c(void)

void FUN_145eb962c(void)

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
              0x110) < DAT_14c9c8d98) {
    FUN_144b3d300(&DAT_14c9c8d98);
    if (DAT_14c9c8d98 == -1) {
      FUN_145eb9732(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x20;
      local_58 = 0x1bb;
      local_48 = local_20;
      FUN_140b49562(&DAT_14c9c8d18,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142be7772);
      _Init_thread_footer(&DAT_14c9c8d98);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb9732 FUN_145eb9732 body=226 status=ok
// SIG undefined FUN_145eb9732(void)

longlong * FUN_145eb9732(longlong *param_1)

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
  pcVar13 = FUN_1462c113e;
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



// FUNCTION 145eb981a FUN_145eb981a body=138 status=ok
// SIG undefined FUN_145eb981a(void)

undefined1 * FUN_145eb981a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_145eb9816;
}



// FUNCTION 145eb98a4 FUN_145eb98a4 body=292 status=ok
// SIG undefined FUN_145eb98a4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb98a4(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca01aa8) {
    FUN_144b3d300(&DAT_14ca01aa8);
    if (DAT_14ca01aa8 == -1) {
      FUN_145eb9b12();
      FUN_145eb99c8();
      FUN_140db5666(&DAT_14ca01a00,0,&DAT_14ca01998,L"FScreenProbeSetupVisualizeTracesCS",
                    L"/Engine/Private/Lumen/LumenScreenProbeTracing.usf",
                    L"ScreenProbeSetupVisualizeTraces",5,2,FUN_147221396,FUN_147221336,
                    &LAB_1462e7372,&LAB_147221332,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca05f00)
      ;
      _DAT_14ca01a00 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142db0a94);
      _Init_thread_footer(&DAT_14ca01aa8);
    }
  }
  return &DAT_14ca01a00;
}



// FUNCTION 145eb99c8 FUN_145eb99c8 body=205 status=ok
// SIG undefined FUN_145eb99c8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb99c8(void)

{
  if ((DAT_14ca019ff & 2) == 0) {
    DAT_14ca019ff = DAT_14ca019ff | 2;
    _DAT_14ca019a0 = L"FScreenProbeSetupVisualizeTracesCS";
    _DAT_14ca019b8 = FUN_146826540;
    _DAT_14ca019c0 = FUN_146825d77;
    _DAT_14ca019c8 = FUN_146825fd6;
    _DAT_14ca019d0 = FUN_1407e02ea;
    _DAT_14ca019d8 = FUN_146826273;
    _DAT_14ca019b0 = FUN_147221304;
    _DAT_14ca019f0 = 0xffffffff000000e0;
    _DAT_14ca019f8 = 8;
    DAT_14ca019fc = 0;
    _DAT_14ca019e0 = &LAB_14722132e;
    FUN_145eb9a96();
    FUN_1407e00cc(&DAT_14ca01998);
    return;
  }
  return;
}



// FUNCTION 145eb9a96 FUN_145eb9a96 body=123 status=ok
// SIG undefined FUN_145eb9a96(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb9a96(void)

{
  _DAT_14ca07958 = L"BASE";
  DAT_14ca07982 = 4;
  _DAT_14ca07960 = FUN_140b35ae4();
  _DAT_14ca07968 = DAT_14ca019a8;
  _DAT_14ca07970 = &LAB_14682652b;
  DAT_14ca019a8 = &DAT_14ca07958;
  DAT_14ca019fd = DAT_14ca019fd + '\x01';
  _DAT_14ca07978 = 0x100000000;
  if (*(char *)(_DAT_14ca07960 + 100) != '\0') {
    DAT_14ca019fe = DAT_14ca019fe + '\x01';
  }
  return;
}



// FUNCTION 145eb9b12 FUN_145eb9b12 body=261 status=ok
// SIG undefined FUN_145eb9b12(void)

void FUN_145eb9b12(void)

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
              0x110) < DAT_14ca05f80) {
    FUN_144b3d300(&DAT_14ca05f80);
    if (DAT_14ca05f80 == -1) {
      FUN_145eb9c18(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x180;
      local_58 = 0x205;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca05f00,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142dd3055);
      _Init_thread_footer(&DAT_14ca05f80);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eb9c18 FUN_145eb9c18 body=226 status=ok
// SIG undefined FUN_145eb9c18(void)

longlong * FUN_145eb9c18(longlong *param_1)

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
  pcVar13 = FUN_1462e8aa0;
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



// FUNCTION 145eb9d00 FUN_145eb9d00 body=144 status=ok
// SIG undefined FUN_145eb9d00(void)

code * FUN_145eb9d00(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000207;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_147229efa;
}



// FUNCTION 145eb9d90 FUN_145eb9d90 body=144 status=ok
// SIG undefined FUN_145eb9d90(void)

code * FUN_145eb9d90(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_141359544();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"ScreenProbeParameters";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenProbeParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x2000000208;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eb9d00;
}



// FUNCTION 145eb9e20 FUN_145eb9e20 body=292 status=ok
// SIG undefined FUN_145eb9e20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eb9e20(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca210d0) {
    FUN_144b3d300(&DAT_14ca210d0);
    if (DAT_14ca210d0 == -1) {
      FUN_145eba08e();
      FUN_145eb9f44();
      FUN_140db5666(&DAT_14ca21028,0,&DAT_14ca20fc0,L"FPlanarReflectionPS",
                    L"/Engine/Private/PlanarReflectionShaders.usf",L"PlanarReflectionPS",3,1,
                    FUN_14727835a,FUN_1472782fa,&LAB_1472782e2,&LAB_1472782de,&LAB_14712ac0c,
                    &LAB_14712ac08,0xe0,&DAT_14ca22ac8);
      _DAT_14ca21028 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142e88341);
      _Init_thread_footer(&DAT_14ca210d0);
    }
  }
  return &DAT_14ca21028;
}



// FUNCTION 145eb9f44 FUN_145eb9f44 body=205 status=ok
// SIG undefined FUN_145eb9f44(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eb9f44(void)

{
  if ((DAT_14ca21027 & 2) == 0) {
    DAT_14ca21027 = DAT_14ca21027 | 2;
    _DAT_14ca20fc8 = L"FPlanarReflectionPS";
    _DAT_14ca20fe0 = FUN_146826540;
    _DAT_14ca20fe8 = FUN_146825d77;
    _DAT_14ca20ff0 = FUN_146825fd6;
    _DAT_14ca20ff8 = FUN_1407e02ea;
    _DAT_14ca21000 = FUN_146826273;
    _DAT_14ca20fd8 = FUN_1472782ae;
    _DAT_14ca21018 = 0xffffffff000000e0;
    _DAT_14ca21020 = 8;
    DAT_14ca21024 = 0;
    _DAT_14ca21008 = &LAB_1472782da;
    FUN_145eba012();
    FUN_1407e00cc(&DAT_14ca20fc0);
    return;
  }
  return;
}



// FUNCTION 145eba012 FUN_145eba012 body=123 status=ok
// SIG undefined FUN_145eba012(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eba012(void)

{
  _DAT_14ca25238 = L"BASE";
  DAT_14ca25262 = 4;
  _DAT_14ca25240 = FUN_140b35ae4();
  _DAT_14ca25248 = DAT_14ca20fd0;
  _DAT_14ca25250 = &LAB_14682652b;
  DAT_14ca20fd0 = &DAT_14ca25238;
  DAT_14ca21025 = DAT_14ca21025 + '\x01';
  _DAT_14ca25258 = 0x100000000;
  if (*(char *)(_DAT_14ca25240 + 100) != '\0') {
    DAT_14ca21026 = DAT_14ca21026 + '\x01';
  }
  return;
}



// FUNCTION 145eba08e FUN_145eba08e body=261 status=ok
// SIG undefined FUN_145eba08e(void)

void FUN_145eba08e(void)

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
              0x110) < DAT_14ca22b48) {
    FUN_144b3d300(&DAT_14ca22b48);
    if (DAT_14ca22b48 == -1) {
      FUN_145eba194(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 400;
      local_58 = 0x303;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca22ac8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142e98f23);
      _Init_thread_footer(&DAT_14ca22b48);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eba194 FUN_145eba194 body=226 status=ok
// SIG undefined FUN_145eba194(void)

longlong * FUN_145eba194(longlong *param_1)

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
  pcVar13 = FUN_1462f7d7a;
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



// FUNCTION 145eba27c FUN_145eba27c body=144 status=ok
// SIG undefined FUN_145eba27c(void)

code * FUN_145eba27c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7000000307;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eba30c;
}



// FUNCTION 145eba30c FUN_145eba30c body=144 status=ok
// SIG undefined FUN_145eba30c(void)

code * FUN_145eba30c(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x6000000306;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1462f7e94;
}



// FUNCTION 145eba39c FUN_145eba39c body=292 status=ok
// SIG undefined FUN_145eba39c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eba39c(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca60290) {
    FUN_144b3d300(&DAT_14ca60290);
    if (DAT_14ca60290 == -1) {
      FUN_145eba60a();
      FUN_145eba4c0();
      FUN_140db5666(&DAT_14ca601e8,0,&DAT_14ca60180,L"FMaterialDebugSubstrateTreeCS",
                    L"/Engine/Private/Substrate/SubstrateVisualize.usf",
                    L"MaterialDebugSubstrateTreeCS",5,1,FUN_1473211f0,FUN_147321190,&LAB_14630dcbc,
                    &LAB_14732118c,&LAB_14712ac0c,&LAB_14712ac08,0xe0,&DAT_14ca627f0);
      _DAT_14ca601e8 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1430a8888);
      _Init_thread_footer(&DAT_14ca60290);
    }
  }
  return &DAT_14ca601e8;
}



// FUNCTION 145eba4c0 FUN_145eba4c0 body=205 status=ok
// SIG undefined FUN_145eba4c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eba4c0(void)

{
  if ((DAT_14ca601e7 & 2) == 0) {
    DAT_14ca601e7 = DAT_14ca601e7 | 2;
    _DAT_14ca60188 = L"FMaterialDebugSubstrateTreeCS";
    _DAT_14ca601a0 = FUN_146826540;
    _DAT_14ca601a8 = FUN_146825d77;
    _DAT_14ca601b0 = FUN_146825fd6;
    _DAT_14ca601b8 = FUN_1407e02ea;
    _DAT_14ca601c0 = FUN_146826273;
    _DAT_14ca60198 = FUN_14732115e;
    _DAT_14ca601d8 = 0xffffffff000000e0;
    _DAT_14ca601e0 = 8;
    DAT_14ca601e4 = 0;
    _DAT_14ca601c8 = &LAB_147321188;
    FUN_145eba58e();
    FUN_1407e00cc(&DAT_14ca60180);
    return;
  }
  return;
}



// FUNCTION 145eba58e FUN_145eba58e body=123 status=ok
// SIG undefined FUN_145eba58e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145eba58e(void)

{
  _DAT_14ca633b8 = L"BASE";
  DAT_14ca633e2 = 4;
  _DAT_14ca633c0 = FUN_140b35ae4();
  _DAT_14ca633c8 = DAT_14ca60190;
  _DAT_14ca633d0 = &LAB_14682652b;
  DAT_14ca60190 = &DAT_14ca633b8;
  DAT_14ca601e5 = DAT_14ca601e5 + '\x01';
  _DAT_14ca633d8 = 0x100000000;
  if (*(char *)(_DAT_14ca633c0 + 100) != '\0') {
    DAT_14ca601e6 = DAT_14ca601e6 + '\x01';
  }
  return;
}



// FUNCTION 145eba60a FUN_145eba60a body=261 status=ok
// SIG undefined FUN_145eba60a(void)

void FUN_145eba60a(void)

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
              0x110) < DAT_14ca62870) {
    FUN_144b3d300(&DAT_14ca62870);
    if (DAT_14ca62870 == -1) {
      FUN_145eba710(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x50;
      local_58 = 0xc4;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca627f0,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1430bc110);
      _Init_thread_footer(&DAT_14ca62870);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145eba710 FUN_145eba710 body=226 status=ok
// SIG undefined FUN_145eba710(void)

longlong * FUN_145eba710(longlong *param_1)

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
  pcVar13 = FUN_14630e73a;
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



// FUNCTION 145eba7f8 FUN_145eba7f8 body=144 status=ok
// SIG undefined FUN_145eba7f8(void)

code * FUN_145eba7f8(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000c6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_1473248e4;
}



// FUNCTION 145eba888 FUN_145eba888 body=144 status=ok
// SIG undefined FUN_145eba888(void)

code * FUN_145eba888(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x20000000c7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x13;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_145eba7f8;
}



// FUNCTION 145eba918 FUN_145eba918 body=292 status=ok
// SIG undefined FUN_145eba918(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_145eba918(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca8fc68) {
    FUN_144b3d300(&DAT_14ca8fc68);
    if (DAT_14ca8fc68 == -1) {
      FUN_145ebab90();
      FUN_145ebaa3c();
      FUN_140db5666(&DAT_14ca8fbc0,0,&DAT_14ca8fb58,L"FRGB10toYUVv210ConvertPS",
                    L"/Engine/Private/MediaShaders.usf",L"RGB10toYUVv210ConvertPS",3,1,FUN_147420c28
                    ,FUN_147420bc8,&LAB_147420bc4,&LAB_147420bc0,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca91ad8);
      _DAT_14ca8fbc0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_1431f8092);
      _Init_thread_footer(&DAT_14ca8fc68);
    }
  }
  return &DAT_14ca8fbc0;
}



// FUNCTION 145ebaa3c FUN_145ebaa3c body=205 status=ok
// SIG undefined FUN_145ebaa3c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebaa3c(void)

{
  if ((DAT_14ca8fbbf & 2) == 0) {
    DAT_14ca8fbbf = DAT_14ca8fbbf | 2;
    _DAT_14ca8fb60 = L"FRGB10toYUVv210ConvertPS";
    _DAT_14ca8fb78 = FUN_146826540;
    _DAT_14ca8fb80 = FUN_146825d77;
    _DAT_14ca8fb88 = FUN_146825fd6;
    _DAT_14ca8fb90 = FUN_1407e02ea;
    _DAT_14ca8fb98 = FUN_146826273;
    _DAT_14ca8fb70 = FUN_147420b90;
    _DAT_14ca8fbb0 = 0xffffffff000000e0;
    _DAT_14ca8fbb8 = 8;
    DAT_14ca8fbbc = 0;
    _DAT_14ca8fba0 = &LAB_147420bbc;
    FUN_145ebab0a();
    FUN_1407e00cc(&DAT_14ca8fb58);
    return;
  }
  return;
}



// FUNCTION 145ebab0a FUN_145ebab0a body=133 status=ok
// SIG undefined FUN_145ebab0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145ebab0a(void)

{
  _DAT_14ca949c8 = L"BASE";
  DAT_14ca949f2 = 4;
  FUN_140b35ae4();
  _DAT_14ca949d8 = DAT_14ca8fb68;
  _DAT_14ca949d0 = &DAT_14ca8c6c8;
  _DAT_14ca949e0 = &LAB_14682652b;
  DAT_14ca8fb68 = &DAT_14ca949c8;
  DAT_14ca8fbbd = DAT_14ca8fbbd + '\x01';
  _DAT_14ca949e8 = 0x100000000;
  if (DAT_14ca8c72c != '\0') {
    DAT_14ca8fbbe = DAT_14ca8fbbe + '\x01';
  }
  return;
}



// FUNCTION 145ebab90 FUN_145ebab90 body=261 status=ok
// SIG undefined FUN_145ebab90(void)

void FUN_145ebab90(void)

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
              0x110) < DAT_14ca91b58) {
    FUN_144b3d300(&DAT_14ca91b58);
    if (DAT_14ca91b58 == -1) {
      FUN_145ebac96(local_20);
      local_30 = 0;
      local_40 = 0;
      local_60 = "Unknown";
      local_70 = 0;
      uStack_68 = 0;
      local_78 = L"FParameters";
      local_38 = 0;
      local_50 = 0x170;
      local_58 = 0x2be;
      local_48 = local_20;
      FUN_140b49562(&DAT_14ca91ad8,0,1);
      if (local_20[0] != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_1431f9689);
      _Init_thread_footer(&DAT_14ca91b58);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145ebac96 FUN_145ebac96 body=226 status=ok
// SIG undefined FUN_145ebac96(void)

longlong * FUN_145ebac96(longlong *param_1)

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
  pcVar13 = FUN_14631dbbe;
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


