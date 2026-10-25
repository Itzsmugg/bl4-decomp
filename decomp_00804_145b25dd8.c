// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 145b25dd8 FUN_145b25dd8 body=40 status=ok
// SIG undefined FUN_145b25dd8(void)

undefined8 FUN_145b25dd8(undefined8 param_1,int param_2)

{
  FUN_145b25e00();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b25e00 FUN_145b25e00 body=140 status=ok
// SIG undefined FUN_145b25e00(void)

void FUN_145b25e00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ac13c00;
  if (param_1[0x19] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  FUN_145b25e8e(param_1 + 0xf);
  FUN_145b25ec3(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b25e8e FUN_145b25e8e body=53 status=ok
// SIG undefined FUN_145b25e8e(void)

void FUN_145b25e8e(longlong *param_1)

{
  FUN_145b25f02();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b25ec3 FUN_145b25ec3 body=63 status=ok
// SIG undefined FUN_145b25ec3(void)

void FUN_145b25ec3(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 145b25f02 FUN_145b25f02 body=90 status=ok
// SIG undefined FUN_145b25f02(void)

void FUN_145b25f02(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140549ad6(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145b25f5c FUN_145b25f5c body=100 status=ok
// SIG undefined FUN_145b25f5c(void)

void FUN_145b25f5c(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b25fc0(param_2);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x39) == '\x01') {
      FUN_148a18caa(lVar1,*(undefined1 *)(param_1 + 0x3b));
    }
    if ((*(char *)(param_1 + 0x38) == '\x01') &&
       (*(char *)(lVar1 + 0x48) != *(char *)(param_1 + 0x3a))) {
      *(char *)(lVar1 + 0x48) = *(char *)(param_1 + 0x3a);
      FUN_140c6f3ae(lVar1,1);
    }
    if (*(char *)(param_1 + 0x3c) == '\x01') {
      FUN_140c6f3ae(lVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 145b25fc0 FUN_145b25fc0 body=176 status=ok
// SIG undefined FUN_145b25fc0(void)

undefined8 FUN_145b25fc0(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*param_1 == 0) {
    return 0;
  }
  lVar3 = *(longlong *)(*param_1 + 0x38);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    uVar1 = FUN_141262f1a();
    plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
    if (plVar2 != (longlong *)0x0) goto LAB_145b25ff3;
    lVar3 = *(longlong *)(*param_1 + 0x38);
  }
  lVar3 = *(longlong *)(lVar3 + 0x1b0);
  if (lVar3 == 0) {
    return 0;
  }
  uVar1 = FUN_141262f1a();
  plVar2 = (longlong *)FUN_144718840(lVar3,uVar1);
  if (plVar2 == (longlong *)0x0) {
    return 0;
  }
LAB_145b25ff3:
  lVar3 = (**(code **)(*plVar2 + 0x18))(plVar2);
  if (*(int *)(lVar3 + 0xa8) < 1) {
    return 0;
  }
  lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0xa0) + 0x20);
  if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
    FUN_1456cec3c(lVar3);
  }
  else if (lVar3 == 0) {
    return 0;
  }
  uVar1 = FUN_145b26070(lVar3);
  return uVar1;
}



// FUNCTION 145b26070 FUN_145b26070 body=109 status=ok
// SIG undefined FUN_145b26070(void)

void FUN_145b26070(longlong param_1)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = *(undefined1 *)(param_1 + 0xbd8);
  local_20 = FUN_141402fec();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  FUN_1448a09a2(param_1,&local_20,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b260e6 FUN_145b260e6 body=202 status=ok
// SIG undefined FUN_145b260e6(void)

undefined8 * FUN_145b260e6(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  FUN_145b261b0();
  *param_1 = &PTR_FUN_14bd6ef70;
  param_1[5] = &PTR_FUN_14bd6f340;
  param_1[0x13] = &PTR_FUN_14bd6f360;
  param_1[0x1d] = &PTR_FUN_14bd6f390;
  param_1[0x1e] = &PTR_FUN_14bd6f3a0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  lVar2 = 0x198;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x48) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x40) = 0xffffffff00000000;
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x28) = 0;
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + -0x20);
    *puVar1 = 0x8000000000;
    puVar1[1] = 0xffffffff;
    *(undefined8 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x238);
  return param_1;
}



// FUNCTION 145b261b0 FUN_145b261b0 body=99 status=ok
// SIG undefined FUN_145b261b0(void)

undefined8 * FUN_145b261b0(undefined8 *param_1)

{
  FUN_140fe66fa();
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *param_1 = &PTR_FUN_14aef8dc0;
  param_1[5] = &PTR_FUN_14aef9190;
  param_1[0x13] = &PTR_FUN_14aef91b0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return param_1;
}



// FUNCTION 145b26214 FUN_145b26214 body=174 status=ok
// SIG undefined FUN_145b26214(void)

void FUN_145b26214(void)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c990050) {
    FUN_144b3d300(&DAT_14c990050);
    if (DAT_14c990050 == -1) {
      FUN_1446ddc76(local_18,"SBackgroundBlur",1);
      FUN_145b262c4(&DAT_14c990018);
      atexit(FUN_142903a3e);
      _Init_thread_footer(&DAT_14c990050);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b262c4 FUN_145b262c4 body=130 status=ok
// SIG undefined FUN_145b262c4(void)

undefined8 * FUN_145b262c4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  param_1[4] = 0;
  param_1[5] = 0x100000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = param_3;
  uVar1 = FUN_140a56032();
  FUN_145b26348(local_28,param_1,uVar1);
  (*param_4)(local_28);
  FUN_140a5f69a(local_28);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b26348 FUN_145b26348 body=60 status=ok
// SIG undefined FUN_145b26348(void)

longlong * FUN_145b26348(longlong *param_1,longlong param_2,longlong param_3)

{
  *param_1 = param_2;
  FUN_140a594ea(param_2,param_3);
  FUN_140a59548(param_2 + 0x10,param_3 + 0x10);
  return param_1;
}



// FUNCTION 145b26384 FUN_145b26384 body=306 status=ok
// SIG undefined FUN_145b26384(void)

void FUN_145b26384(undefined8 param_1)

{
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_60,"BlurStrength",1);
  local_88 = local_58;
  FUN_14134b99c(param_1,local_70,local_60,0x278);
  FUN_1449db362(&local_50);
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_78,"BlurRadius",1);
  local_88 = local_58;
  FUN_14134b99c(param_1,local_70,local_78,0x27c);
  FUN_1449db362(&local_50);
  local_58[0] = 2;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_80,"CornerRadius",1);
  local_88 = local_58;
  FUN_14134b99c(param_1,local_70,local_80,0x290);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b264b8 FUN_145b264b8 body=485 status=ok
// SIG undefined FUN_145b264b8(void)

void FUN_145b264b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 *local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined8 local_50;
  undefined8 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58[0] = 0x81;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_60,"StretchDirection",1);
  local_a8 = local_58;
  FUN_14134b99c(param_1,local_70,local_60,0x268);
  FUN_1449db362(&local_50);
  local_58[0] = 0x81;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_78,"UserSpecifiedScale",1);
  local_a8 = local_58;
  FUN_14134b99c(param_1,local_70,local_78,0x270);
  FUN_1449db362(&local_50);
  local_58[0] = 0x81;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_80,"IgnoreInheritedScale",1);
  local_a8 = local_58;
  FUN_14134b99c(param_1,local_70,local_80,0x274);
  FUN_1449db362(&local_50);
  local_58[0] = 0x81;
  local_50 = 0;
  uStack_48 = 0;
  FUN_1446ddc76(&local_88,"Stretch",1);
  local_a8 = local_58;
  FUN_14134b99c(param_1,local_70,local_88,0x26c);
  local_98 = (undefined8 *)0x0;
  local_90 = 0;
  FUN_1446efa72(&local_98,0,2,0x10);
  puVar1 = local_98;
  local_90 = 2;
  *local_98 = &PTR_LAB_149ef0aa0;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_149f19320;
  FUN_14134bb3c(local_70,&local_98);
  FUN_1449db362(&local_50);
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2669e FUN_145b2669e body=226 status=ok
// SIG undefined FUN_145b2669e(void)

longlong * FUN_145b2669e(longlong *param_1)

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
  pcVar13 = FUN_1462d3f0c;
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



// FUNCTION 145b26782 FUN_145b26782 body=136 status=ok
// SIG undefined FUN_145b26782(void)

code * FUN_145b26782(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightBlendDestinationCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x280000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6ed8;
}



// FUNCTION 145b2680a FUN_145b2680a body=138 status=ok
// SIG undefined FUN_145b2680a(void)

code * FUN_145b2680a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SkyLightCubemap";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"TextureCube";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000001b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6fec;
}



// FUNCTION 145b26894 FUN_145b26894 body=138 status=ok
// SIG undefined FUN_145b26894(void)

code * FUN_145b26894(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ReflectionCubemapSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_1471c6e4e;
}



// FUNCTION 145b2691e FUN_145b2691e body=64 status=ok
// SIG undefined FUN_145b2691e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145b2691e(void)

{
  _DAT_14c87e458 = 0;
  if (DAT_14c87e450 != 0) {
    FUN_1400020a8();
  }
  FUN_145b2695e();
  if (DAT_14c87d790 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b2695e FUN_145b2695e body=61 status=ok
// SIG undefined FUN_145b2695e(void)

void FUN_145b2695e(void)

{
  FUN_145b2699c(&DAT_14c87d7a0);
  if (DAT_14c87e3b8 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14c87e3a0 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b2699c FUN_145b2699c body=107 status=ok
// SIG undefined FUN_145b2699c(void)

void FUN_145b2699c(longlong param_1)

{
  *(undefined4 *)(param_1 + 0xc08) = 0;
  if (*(int *)(param_1 + 0xc0c) != 0) {
    FUN_145bfd66e(param_1,0);
  }
  *(undefined8 *)(param_1 + 0xc28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc20) = 0;
  if (0x40 < *(uint *)(param_1 + 0xc24)) {
    *(undefined4 *)(param_1 + 0xc24) = 0x40;
    FUN_1401cad60(param_1 + 0xc10,0);
    return;
  }
  return;
}



// FUNCTION 145b26a08 FUN_145b26a08 body=81 status=ok
// SIG undefined FUN_145b26a08(void)

undefined1 FUN_145b26a08(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
    do {
      FUN_145b26a5a(param_2 + -0x10,param_3 + -0x10);
      FUN_14054c6c4(param_2,param_3);
      *(undefined1 *)(param_2 + 0x10) = *(undefined1 *)(param_3 + 0x10);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 145b26a5a FUN_145b26a5a body=93 status=ok
// SIG undefined FUN_145b26a5a(void)

undefined8 * FUN_145b26a5a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1457e62fb(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_148696190(param_1,iVar1);
      FUN_1486961ff(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145b26ab8 FUN_145b26ab8 body=103 status=ok
// SIG undefined FUN_145b26ab8(void)

ulonglong FUN_145b26ab8(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145b26b02:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145b26b02;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145b26b2e FUN_145b26b2e body=156 status=ok
// SIG undefined FUN_145b26b2e(void)

undefined8 FUN_145b26b2e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [40];
  undefined1 local_90 [104];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*(longlong *)(param_1 + 0x518) != 0) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x518) + 0x90), lVar1 != 0)) {
    FUN_145b26bcc(lVar1,param_2,param_3);
  }
  FUN_145ad1184(local_90,param_2);
  uVar2 = FUN_141671146(param_1,local_90,param_3);
  FUN_141238aee(param_2);
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b26bcc FUN_145b26bcc body=17 status=ok
// SIG undefined FUN_145b26bcc(void)

void FUN_145b26bcc(longlong param_1)

{
  if (*(char *)(param_1 + 0xb8) != '\x01') {
    return;
  }
  FUN_143f547cc(param_1,2);
  return;
}



// FUNCTION 145b26bde FUN_145b26bde body=40 status=ok
// SIG undefined FUN_145b26bde(void)

undefined8 FUN_145b26bde(undefined8 param_1,int param_2)

{
  FUN_145b26c06();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b26c06 FUN_145b26c06 body=87 status=ok
// SIG undefined FUN_145b26c06(void)

void FUN_145b26c06(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14bd21aa0;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_145b26c5e(param_1 + 0x10);
  FUN_1401f9f5c(param_1 + 0xe);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b26c5e FUN_145b26c5e body=60 status=ok
// SIG undefined FUN_145b26c5e(void)

void FUN_145b26c5e(longlong *param_1)

{
  FUN_145b26c9a(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b26c9a FUN_145b26c9a body=45 status=ok
// SIG undefined FUN_145b26c9a(void)

void FUN_145b26c9a(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145b26cc8 FUN_145b26cc8 body=72 status=ok
// SIG undefined FUN_145b26cc8(void)

void FUN_145b26cc8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a4993b0;
  FUN_145b26d46();
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xb));
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_145b26d10(param_1 + 1);
  return;
}



// FUNCTION 145b26d10 FUN_145b26d10 body=53 status=ok
// SIG undefined FUN_145b26d10(void)

void FUN_145b26d10(longlong *param_1)

{
  FUN_145b26df6();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 145b26d46 FUN_145b26d46 body=111 status=ok
// SIG undefined FUN_145b26d46(void)

void FUN_145b26d46(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x3c);
  FUN_145b26db6(param_1 + 8);
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x58));
  if (iVar1 <= iVar2) {
    return;
  }
  FUN_140f93338(&DAT_14c9647b8,param_1);
  return;
}



// FUNCTION 145b26db6 FUN_145b26db6 body=63 status=ok
// SIG undefined FUN_145b26db6(void)

void FUN_145b26db6(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145b26df6(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140f970f4(param_1);
    return;
  }
  FUN_1475901da(param_1);
  FUN_145b26df6(param_1);
  return;
}



// FUNCTION 145b26df6 FUN_145b26df6 body=88 status=ok
// SIG undefined FUN_145b26df6(void)

void FUN_145b26df6(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14494313c(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(uint *)(param_1 + 0x2c) < 0x81) {
    return;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0x80;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 145b26e4e FUN_145b26e4e body=68 status=ok
// SIG undefined FUN_145b26e4e(void)

void FUN_145b26e4e(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1414c84c6();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 145b26e92 FUN_145b26e92 body=35 status=ok
// SIG undefined FUN_145b26e92(void)

void FUN_145b26e92(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_145b26eb6(param_2);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000145b26ea7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x38))();
    return;
  }
  FUN_145b2700e();
  return;
}



// FUNCTION 145b26eb6 FUN_145b26eb6 body=191 status=ok
// SIG undefined FUN_145b26eb6(void)

longlong FUN_145b26eb6(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_145b26f76();
  lVar3 = *param_1;
  if (DAT_14cbd8f18 != DAT_14cbd8f44) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cbd8f48;
    if (DAT_14cbd8f50 != (undefined *)0x0) {
      puVar7 = DAT_14cbd8f50;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cbd8f58 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cbd8f10 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cbd8f08;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 145b26f76 FUN_145b26f76 body=152 status=ok
// SIG undefined FUN_145b26f76(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145b26f76(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbd8f60) {
    FUN_144b3d300(&DAT_14cbd8f60);
    if (DAT_14cbd8f60 == -1) {
      DAT_14cbd8f30 = 0;
      DAT_14cbd8f38 = 0;
      DAT_14cbd8f10 = 0;
      _DAT_14cbd8f18 = 0;
      _DAT_14cbd8f3c = 0xffffffff00000080;
      DAT_14cbd8f44 = 0;
      DAT_14cbd8f50 = 0;
      DAT_14cbd8f58 = 0;
      atexit(FUN_1442afdd3);
      _Init_thread_footer(&DAT_14cbd8f60);
      return;
    }
  }
  return;
}



// FUNCTION 145b2700e FUN_145b2700e body=164 status=ok
// SIG undefined FUN_145b2700e(void)

undefined8 * FUN_145b2700e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14134bfd4(&DAT_14cbd8f68);
  memset(puVar1 + 1,0,0xb0);
  *puVar1 = &PTR_FUN_14a171dc0;
  FUN_144a319ae(puVar1 + 1);
  *puVar1 = &PTR_FUN_14b8590b0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  puVar1[0x11] = 0;
  *(undefined4 *)(puVar1 + 0x12) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x9c) = 0;
  puVar1[0x15] = 0;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  return puVar1;
}



// FUNCTION 145b270b2 FUN_145b270b2 body=154 status=ok
// SIG undefined FUN_145b270b2(void)

bool FUN_145b270b2(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_30,0);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2714e FUN_145b2714e body=58 status=ok
// SIG undefined FUN_145b2714e(void)

void FUN_145b2714e(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1406f625c(param_2);
  if (plVar1 == param_1) {
                    /* WARNING: Could not recover jumptable at 0x000145b2717d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x348))(param_1,param_2);
    return;
  }
  return;
}



// FUNCTION 145b27188 FUN_145b27188 body=175 status=ok
// SIG undefined FUN_145b27188(void)

bool FUN_145b27188(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_140192332(param_1 + 0x18,&local_40,0);
    lVar3 = local_40;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3,param_4);
  }
  if ((lVar3 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(lVar3);
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b27238 FUN_145b27238 body=346 status=ok
// SIG undefined FUN_145b27238(void)

void FUN_145b27238(longlong param_1,undefined8 param_2,byte *param_3,char *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [128];
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (*param_4 == '\x04') {
    if (*(char *)(param_1 + 0x8c8) == '\x01') {
      FUN_148d954e8(local_b8,param_1 + 0x840);
      if (*(char *)(param_1 + 0x8c8) == '\x01') {
        FUN_148d94d7e(param_1 + 0x840);
        *(undefined1 *)(param_1 + 0x8c8) = 0;
      }
      local_38 = 0;
      FUN_148d94e6c(param_1,local_b8);
      FUN_148d94d7e(local_b8);
    }
  }
  else if (((*param_4 == '\x05') && (*param_3 < 5)) && ((longlong)*(int *)(param_1 + 0x700) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x6f8);
    lVar5 = (longlong)*(int *)(param_1 + 0x700) * 0x1a0;
    do {
      if (*(char *)(lVar4 + 0x199) == '\0') {
        if ((&DAT_149fc1b6e)[*(byte *)(lVar4 + 0x18)] == '\x01') {
          if ((*(longlong **)(lVar4 + 8) != (longlong *)0x0) &&
             (cVar1 = (**(code **)(**(longlong **)(lVar4 + 8) + 0x28))(), cVar1 != '\0')) {
LAB_145b2735b:
            uVar2 = FUN_14127b0d4(lVar4);
            lVar3 = FUN_14127ae7a(param_2,uVar2);
            if (lVar3 != 0) {
              FUN_1441c4c58(param_1,lVar4,*(undefined4 *)(lVar3 + 0xe0));
            }
          }
        }
        else if ((*(uint *)(lVar4 + 8) & 0xffffff) != 0) goto LAB_145b2735b;
      }
      lVar4 = lVar4 + 0x1a0;
      lVar5 = lVar5 + -0x1a0;
    } while (lVar5 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 145b27394 FUN_145b27394 body=40 status=ok
// SIG undefined FUN_145b27394(void)

undefined8 FUN_145b27394(undefined8 param_1,int param_2)

{
  FUN_145b273bc();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b273bc FUN_145b273bc body=59 status=ok
// SIG undefined FUN_145b273bc(void)

void FUN_145b273bc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a6ffef0;
  FUN_145b273f7(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 145b273f7 FUN_145b273f7 body=56 status=ok
// SIG undefined FUN_145b273f7(void)

void FUN_145b273f7(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14788f48e(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 145b2745a FUN_145b2745a body=103 status=ok
// SIG undefined FUN_145b2745a(void)

ulonglong FUN_145b2745a(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_145b274a4:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_145b274a4;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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
  return uVar7 & 0xffffffff;
}



// FUNCTION 145b274d6 FUN_145b274d6 body=146 status=ok
// SIG undefined FUN_145b274d6(void)

undefined8 * FUN_145b274d6(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar1 = FUN_14007ca06();
  FUN_140fabcfe(param_1,uVar1);
  *param_1 = &PTR_FUN_14b6b1f20;
  *(undefined4 *)(param_1 + 0x16) = 0x101030;
  param_1[0x17] = "thumbnail_scene";
  *(undefined1 *)(param_1 + 0x70) = 1;
  FUN_1400b22c2(local_28,"UI.Thumbnail Scenes");
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b27574 FUN_145b27574 body=1215 status=ok
// SIG undefined FUN_145b27574(void)

undefined8 * FUN_145b27574(undefined8 *param_1)

{
  int iVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_145b27a34();
  *param_1 = &PTR_FUN_14bb60420;
  param_1[5] = &PTR_FUN_14bb608a0;
  param_1[0x4f] = &PTR_FUN_14bb608e0;
  param_1[0x50] = &PTR_FUN_14bb60900;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 2;
  *(undefined4 *)((longlong)param_1 + 0x2a4) = 2000;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x66] = 0;
  *(undefined4 *)(param_1 + 0x67) = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  *(undefined8 *)((longlong)param_1 + 0x33c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x344) = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  FUN_145b27bd0(param_1 + 0x6e);
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined4 *)(param_1 + 0xb7) = 2;
  *(undefined8 *)((longlong)param_1 + 0x5bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5d4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5dc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5e4) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5f4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x614) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x61c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x624) = 0;
  *(undefined8 *)((longlong)param_1 + 0x62c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x634) = 0;
  *(undefined8 *)((longlong)param_1 + 0x63c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x644) = 0x200000000;
  param_1[0xd0] = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x664) = 0;
  *(undefined8 *)((longlong)param_1 + 0x64c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x654) = 0;
  *(undefined8 *)((longlong)param_1 + 0x68c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x694) = 0;
  param_1[0xd4] = 0;
  *(undefined4 *)(param_1 + 0xd5) = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6dc) = 0xffffffff00000080;
  param_1[0xe4] = 0;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x72c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x734) = 0;
  param_1[0xe8] = 0;
  *(undefined4 *)(param_1 + 0xe9) = 0;
  *(undefined4 *)(param_1 + 0xea) = 0xffffffff;
  param_1[0xf1] = 0;
  *(undefined4 *)(param_1 + 0xf2) = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined8 *)((longlong)param_1 + 0x794) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x79c) = 0;
  param_1[0xf5] = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  param_1[0xf7] = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined2 *)(param_1 + 0xf9) = 0x101;
  *(undefined8 *)((longlong)param_1 + 0x804) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7ca) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7d2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7e5) = 0;
  param_1[0xfc] = 0;
  *(undefined1 *)(param_1 + 0x100) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 2;
  *(undefined4 *)((longlong)param_1 + 0x834) = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0;
  *(undefined8 *)((longlong)param_1 + 0x82c) = 0;
  *(undefined4 *)(param_1 + 0x107) = 2;
  *(undefined4 *)((longlong)param_1 + 0x84c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x83c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x844) = 0;
  *(undefined4 *)(param_1 + 0x10a) = 2;
  *(undefined4 *)((longlong)param_1 + 0x864) = 0;
  *(undefined8 *)((longlong)param_1 + 0x854) = 0;
  *(undefined8 *)((longlong)param_1 + 0x85c) = 0;
  *(undefined4 *)(param_1 + 0x10d) = 2;
  *(undefined4 *)((longlong)param_1 + 0x87c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x86c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x874) = 0;
  param_1[0x110] = 2;
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x114) = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  param_1[0x11d] = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8f4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x8fc) = 0;
  param_1[0x121] = 0;
  *(undefined4 *)(param_1 + 0x122) = 0;
  param_1[0x123] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  param_1[299] = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  param_1[0x127] = 0;
  param_1[0x128] = 0;
  *(undefined8 *)((longlong)param_1 + 0x964) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0;
  param_1[0x12f] = 0;
  *(undefined4 *)(param_1 + 0x130) = 0;
  param_1[0x135] = 0;
  *(undefined4 *)(param_1 + 0x136) = 0;
  param_1[0x131] = 0;
  param_1[0x132] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x9bc) = 0;
  param_1[0x139] = 0;
  *(undefined4 *)(param_1 + 0x13a) = 0;
  param_1[0x13f] = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  *(undefined8 *)((longlong)param_1 + 0xa04) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xa0c) = 0;
  param_1[0x143] = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x145) = 0x3f800000;
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  FUN_140056680(param_1 + 0x14a,L"Module");
  param_1[0x14c] = 0;
  param_1[0x14d] = 0;
  param_1[0x14e] = 0;
  param_1[0x14f] = 0;
  param_1[0x150] = 0;
  param_1[0x151] = 0;
  param_1[0x152] = 0;
  param_1[0x153] = 0;
  param_1[0x154] = 0;
  param_1[0x155] = 0;
  param_1[0x156] = 0;
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  param_1[0x159] = 0;
  FUN_1446f57c6(&DAT_14cc07488,&local_48);
  iVar1 = *(int *)(param_1 + 0x32);
  *(uint *)(param_1 + 0x32) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x194) < iVar1 + 1U) {
    FUN_1446f84a2(param_1 + 0x31,iVar1);
  }
  *(undefined8 *)(param_1[0x31] + (longlong)iVar1 * 8) = local_48;
  param_1[0x2a] = param_1 + 0x6e;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b27a34 FUN_145b27a34 body=411 status=ok
// SIG undefined FUN_145b27a34(void)

undefined8 * FUN_145b27a34(undefined8 *param_1)

{
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14bb39e40;
  param_1[5] = &PTR_FUN_14bb3a1c0;
  *(undefined4 *)(param_1 + 6) = 0x800;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x54) = 1;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x24] = 0;
  *(undefined4 *)(param_1 + 0x25) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *(undefined8 *)((longlong)param_1 + 300) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = &PTR_FUN_14bad5cb0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = &PTR_FUN_14bad5cb8;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0xffffffff00000080;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  *(undefined4 *)(param_1 + 0x41) = 2;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x44) = 2;
  *(undefined8 *)((longlong)param_1 + 0x231) = 0;
  *(undefined8 *)((longlong)param_1 + 0x224) = 0;
  *(undefined8 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x244) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x4a));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x4a),4000);
  return param_1;
}



// FUNCTION 145b27bd0 FUN_145b27bd0 body=418 status=ok
// SIG undefined FUN_145b27bd0(void)

undefined8 * FUN_145b27bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_14bad5cc0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 4;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  if (DAT_14cc00940 == 0) {
    uVar1 = FUN_1408ed7fc();
    DAT_14cc00940 = FUN_140002ddd(FUN_141905ec2,uVar1,L"RigVMExecuteContext");
  }
  FUN_1446e6d0e(param_1 + 0x16,DAT_14cc00940);
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1dc) = 0;
  param_1[0x3c] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 2;
  *(undefined8 *)((longlong)param_1 + 0x204) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined8 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  FUN_1401f9ba6(param_1);
  *(undefined8 **)(param_1[0x18] + 0x50) = param_1 + 0x21;
  return param_1;
}



// FUNCTION 145b27d72 FUN_145b27d72 body=40 status=ok
// SIG undefined FUN_145b27d72(void)

undefined8 FUN_145b27d72(undefined8 param_1,int param_2)

{
  FUN_145b27d9a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 145b27d9a FUN_145b27d9a body=57 status=ok
// SIG undefined FUN_145b27d9a(void)

void FUN_145b27d9a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b156bf0;
  FUN_1447cd778(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 145b27dde FUN_145b27dde body=280 status=ok
// SIG undefined FUN_145b27dde(void)

undefined8 * FUN_145b27dde(undefined8 *param_1)

{
  FUN_14596f8c0();
  *param_1 = &PTR_FUN_14b58dcd0;
  param_1[5] = &PTR_LAB_14b58e070;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  *(undefined1 *)(param_1 + 0x6e) = 1;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  *(undefined8 *)((longlong)param_1 + 0x381) = 0;
  *(undefined8 *)((longlong)param_1 + 0x389) = 0;
  *(undefined8 *)((longlong)param_1 + 0x394) = 0;
  *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x75) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x76) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  param_1[0x78] = 0;
  *(undefined4 *)((longlong)param_1 + 0x3cc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7b) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x3dc) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  param_1[0x7d] = 0;
  *(undefined1 *)(param_1 + 0x7e) = 0;
  param_1[0x7f] = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((longlong)param_1 + 0x424) = 0;
  *(undefined8 *)((longlong)param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x86) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x88] = 0;
  *(undefined1 *)(param_1 + 0x89) = 0;
  param_1[0x8a] = 0;
  FUN_144a5dc74(param_1 + 0x8b);
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  return param_1;
}



// FUNCTION 145b27ef6 FUN_145b27ef6 body=142 status=ok
// SIG undefined FUN_145b27ef6(void)

bool FUN_145b27ef6(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_30);
    lVar3 = local_30;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b27f86 FUN_145b27f86 body=184 status=ok
// SIG undefined FUN_145b27f86(void)

void FUN_145b27f86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != 0) {
    bVar2 = *(byte *)(param_1 + 0x28);
    if (((*(char *)(param_2 + 0x154) < '\0') && ((bVar2 & 1) == 0)) && (DAT_14cc2d223 == '\0')) {
      bVar2 = FUN_145b280f4();
      *(byte *)(param_1 + 0x28) = bVar2;
    }
    if (((bVar2 & 1) != 0) && (lVar1 = *(longlong *)(param_2 + 0x1f0), lVar1 != 0)) {
      lVar3 = FUN_1403ca142();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) {
        FUN_145b285fe(lVar1 + 0x2a8,&local_28,param_1);
        *(undefined8 *)(param_1 + 0xa8) = local_28;
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b28040 FUN_145b28040 body=179 status=ok
// SIG undefined FUN_145b28040(void)

void FUN_145b28040(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x28) == '\x01') && (lVar1 = *(longlong *)(param_2 + 0x1f0), lVar1 != 0))
  {
    lVar3 = FUN_1403ca142();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 && (*(longlong *)(param_1 + 0xa8) != 0)))) {
      FUN_14480f766(lVar1 + 0x2a8);
    }
  }
  if ((((*(char *)(param_1 + 0x28) == '\x01') && (DAT_14c872bd8 == '\x01')) &&
      (*(undefined1 *)(param_1 + 0x28) = 0, DAT_14cc2d220 == '\x01')) &&
     (((DAT_14cc2d201 & 1) != 0 && (DAT_14cc2d223 == '\x01')))) {
    if (DAT_14cc2d221 == '\x01') {
      iVar2 = (*DAT_14cc2d218)();
      if (iVar2 == 0) {
        DAT_14cc2d221 = '\0';
      }
    }
    DAT_14cc2d223 = '\0';
  }
  return;
}



// FUNCTION 145b280f4 FUN_145b280f4 body=217 status=ok
// SIG undefined FUN_145b280f4(void)

ulonglong FUN_145b280f4(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  bool bVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14cc2d223 == '\0') {
    FUN_1400b22c2(&local_78,"Borderlands 4");
    local_68 = local_78;
    uStack_64 = uStack_74;
    uStack_60 = uStack_70;
    uStack_5c = uStack_6c;
    FUN_1400b22c2(&local_78,
                  "Borderlands 4 brings intense action, badass Vault Hunters, and billions of wild and deadly weapons to an all-new planet ruled by a ruthless tyrant."
                 );
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    FUN_1400b22c2(&local_78,"2K Games");
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    FUN_1400b22c2(&local_78,"https://borderlands.2k.com/borderlands-4/");
    local_38 = local_78;
    uStack_34 = uStack_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    local_28 = 2;
    iVar1 = FUN_145b2821a(&local_68);
    bVar2 = iVar1 == 0;
    FUN_145b281ce(&local_68);
  }
  else {
    bVar2 = true;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),bVar2) & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b281ce FUN_145b281ce body=75 status=ok
// SIG undefined FUN_145b281ce(void)

void FUN_145b281ce(longlong *param_1)

{
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 145b2821a FUN_145b2821a body=648 status=ok
// SIG undefined FUN_145b2821a(void)

int FUN_145b2821a(undefined8 *param_1)

{
  int iVar1;
  size_t sVar2;
  wchar_t *_Str;
  wchar_t ***pppwVar3;
  wchar_t *pwVar4;
  undefined1 auStack_ef8 [32];
  wchar_t **local_ed8;
  undefined8 uStack_ed0;
  undefined8 local_ec8;
  ulonglong uStack_ec0;
  wchar_t **local_eb8;
  undefined8 uStack_eb0;
  undefined8 local_ea8;
  ulonglong uStack_ea0;
  wchar_t **local_e98;
  undefined8 uStack_e90;
  undefined8 local_e88;
  ulonglong uStack_e80;
  wchar_t **local_e78;
  undefined8 uStack_e70;
  undefined8 local_e68;
  ulonglong uStack_e60;
  wchar_t local_e58 [256];
  wchar_t local_c58 [1024];
  wchar_t local_458 [256];
  wchar_t local_258 [256];
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_ef8;
  iVar1 = -1;
  if (((DAT_14cc2d220 == '\x01') && ((DAT_14cc2d201 & 1) != 0)) && (DAT_14cc2d223 == '\0')) {
    memset(local_e58,0,0xe08);
    local_58 = 0x3f;
    _Str = L"";
    pwVar4 = L"";
    if (*(int *)(param_1 + 1) != 0) {
      pwVar4 = (wchar_t *)*param_1;
    }
    local_e68 = 0;
    uStack_e60 = 0;
    local_e78 = (wchar_t **)0x0;
    uStack_e70 = 0;
    sVar2 = wcslen(pwVar4);
    FUN_145b284a4(&local_e78,pwVar4,sVar2);
    pppwVar3 = &local_e78;
    if (7 < uStack_e60) {
      pppwVar3 = (wchar_t ***)local_e78;
    }
    wcscpy_s(local_e58,0x100,(wchar_t *)pppwVar3);
    pwVar4 = L"";
    if (*(int *)(param_1 + 3) != 0) {
      pwVar4 = (wchar_t *)param_1[2];
    }
    local_e88 = 0;
    uStack_e80 = 0;
    local_e98 = (wchar_t **)0x0;
    uStack_e90 = 0;
    sVar2 = wcslen(pwVar4);
    FUN_145b284a4(&local_e98,pwVar4,sVar2);
    pppwVar3 = &local_e98;
    if (7 < uStack_e80) {
      pppwVar3 = (wchar_t ***)local_e98;
    }
    wcscpy_s(local_c58,0x400,(wchar_t *)pppwVar3);
    pwVar4 = L"";
    if (*(int *)(param_1 + 5) != 0) {
      pwVar4 = (wchar_t *)param_1[4];
    }
    local_ea8 = 0;
    uStack_ea0 = 0;
    local_eb8 = (wchar_t **)0x0;
    uStack_eb0 = 0;
    sVar2 = wcslen(pwVar4);
    FUN_145b284a4(&local_eb8,pwVar4,sVar2);
    pppwVar3 = &local_eb8;
    if (7 < uStack_ea0) {
      pppwVar3 = (wchar_t ***)local_eb8;
    }
    wcscpy_s(local_458,0x100,(wchar_t *)pppwVar3);
    if (*(int *)(param_1 + 7) != 0) {
      _Str = (wchar_t *)param_1[6];
    }
    local_ec8 = 0;
    uStack_ec0 = 0;
    local_ed8 = (wchar_t **)0x0;
    uStack_ed0 = 0;
    sVar2 = wcslen(_Str);
    FUN_145b284a4(&local_ed8,_Str,sVar2);
    pppwVar3 = &local_ed8;
    if (7 < uStack_ec0) {
      pppwVar3 = (wchar_t ***)local_ed8;
    }
    wcscpy_s(local_258,0x100,(wchar_t *)pppwVar3);
    local_54 = *(undefined4 *)(param_1 + 8);
    iVar1 = FUN_145b285a0(local_e58);
    if (iVar1 == 0) {
      DAT_14cc2d223 = '\x01';
    }
    if (7 < uStack_ec0) {
      FUN_14600850e(&local_ed8,local_ed8);
    }
    if (7 < uStack_ea0) {
      FUN_14600850e(&local_eb8,local_eb8);
    }
    if (7 < uStack_e80) {
      FUN_14600850e(&local_e98,local_e98);
    }
    if (7 < uStack_e60) {
      FUN_14600850e(&local_e78,local_e78);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_ef8) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b284a4 FUN_145b284a4 body=187 status=ok
// SIG undefined FUN_145b284a4(void)

void FUN_145b284a4(undefined8 *param_1,void *param_2,ulonglong param_3)

{
  void *_Dst;
  undefined2 *puVar1;
  ulonglong uVar2;
  
  if (param_3 < 0x7fffffffffffffff) {
    if (param_3 < 8) {
      param_1[2] = param_3;
      param_1[3] = 7;
      memcpy(param_1,param_2,param_3 * 2);
      puVar1 = (undefined2 *)((longlong)param_1 + param_3 * 2);
    }
    else {
      param_1[3] = 7;
      uVar2 = 10;
      if (10 < (param_3 | 7)) {
        uVar2 = param_3 | 7;
      }
      if (0x7ffffffffffffffd < uVar2) {
        uVar2 = 0x7ffffffffffffffe;
      }
      _Dst = (void *)FUN_145b28560(param_1,uVar2 + 1);
      *param_1 = _Dst;
      param_1[2] = param_3;
      param_1[3] = uVar2;
      memcpy(_Dst,param_2,param_3 * 2);
      puVar1 = (undefined2 *)((longlong)_Dst + param_3 * 2);
    }
    *puVar1 = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_146eb22ad();
}



// FUNCTION 145b28560 FUN_145b28560 body=63 status=ok
// SIG undefined FUN_145b28560(void)

undefined8 FUN_145b28560(undefined8 param_1,ulonglong param_2)

{
  undefined8 uVar1;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_14694ac37();
  }
  if (param_2 < 0x800) {
    if (param_2 != 0) {
      uVar1 = FUN_14001cc68(param_2 * 2,0x10);
      return uVar1;
    }
    return 0;
  }
  uVar1 = FUN_140c1ca1d(param_2 * 2);
  return uVar1;
}



// FUNCTION 145b285a0 FUN_145b285a0 body=93 status=ok
// SIG undefined FUN_145b285a0(void)

undefined8 FUN_145b285a0(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  if (DAT_14cc2d220 == '\0') {
    if ((DAT_14cc2d221 & 1) != 0) {
      return 0x80004005;
    }
    uVar2 = FUN_1460081e8();
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    DAT_14cc2d220 = '\x01';
    bVar1 = DAT_14cc2d221;
  }
  else {
    bVar1 = DAT_14cc2d221 & 1;
  }
  if (bVar1 == 0) {
    uVar2 = (*DAT_14cc2d208)(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    DAT_14cc2d221 = 1;
  }
  return 0;
}



// FUNCTION 145b285fe FUN_145b285fe body=244 status=ok
// SIG undefined FUN_145b285fe(void)

undefined8 FUN_145b285fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  puVar1 = local_38;
  local_30 = 3;
  *local_38 = &PTR_LAB_14b3e62a0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_38[2] = lVar3;
  *local_38 = &PTR_FUN_14beaf380;
  local_38[3] = 0;
  FUN_14485c47a(local_38 + 3,param_3);
  puVar1[4] = FUN_145fdc526;
  FUN_141285884(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b286fe FUN_145b286fe body=438 status=ok
// SIG undefined FUN_145b286fe(void)

undefined8 * FUN_145b286fe(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_144a0768c();
  *param_1 = &PTR_FUN_14aaeb430;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  FUN_145b288b6(param_1 + 0x15);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb0dd00) {
    FUN_144b3d300(&DAT_14cb0dd00);
    if (DAT_14cb0dd00 == -1) {
      FUN_1414c86da();
      atexit(FUN_14376f7e8);
      _Init_thread_footer(&DAT_14cb0dd00);
    }
  }
  *(undefined4 *)(param_1 + 7) = 0xff7f7f7f;
  param_1[10] = 0x3ff0000000000000;
  param_1[0xb] = 0x3ff0000000000000;
  param_1[0xc] = 0x3ff0000000000000;
  param_1[0xd] = 0x3ff0000000000000;
  lVar3 = DAT_14cb0dcb0;
  if (DAT_14c950c29 == 1) {
    if (DAT_14cb0dcb0 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = DAT_14cb0dcb0;
    }
  }
  bVar2 = DAT_14c950c29;
  param_1[0xe] = lVar3;
  lVar3 = DAT_14cb0dce0;
  if ((bVar2 & 1) != 0) {
    if (DAT_14cb0dce0 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = DAT_14cb0dce0;
    }
  }
  param_1[0xf] = lVar3;
  uVar1 = DAT_14c8463d8;
  param_1[0x6e] = DAT_14c8463d0;
  param_1[0x6f] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x70] = DAT_14c8463e0;
  param_1[0x71] = uVar1;
  puVar4 = &DAT_14c846400;
  puVar5 = param_1 + 0x5e;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  FUN_14578778c(param_1);
  FUN_145b289a2(local_28,param_1);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b288b6 FUN_145b288b6 body=234 status=ok
// SIG undefined FUN_145b288b6(void)

undefined8 * FUN_145b288b6(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_140e82300();
  local_28 = 0;
  uStack_20 = 0;
  FUN_140114c18(param_1,&local_28,&DAT_149e1e2f8);
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  *param_1 = &PTR_FUN_14aaeb7f0;
  plVar1 = (longlong *)*plVar3;
  param_1[0x41] = plVar1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  *(int *)(param_1 + 0x42) = (int)plVar3[1];
  uVar2 = DAT_14c84635c;
  param_1[0x43] = DAT_14c84635c;
  param_1[0x44] = 0;
  param_1[0x45] = uVar2;
  param_1[0x46] = 0;
  param_1[0x13] = 0x3ff0000000000000;
  param_1[0x14] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined4 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b289a2 FUN_145b289a2 body=239 status=ok
// SIG undefined FUN_145b289a2(void)

undefined8 FUN_145b289a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_30[2] = lVar3;
  *local_30 = &PTR_FUN_14aaf9310;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_14578778c;
  FUN_1448b6402(&DAT_14c8672b0,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b28a92 FUN_145b28a92 body=5585 status=ok
// SIG undefined FUN_145b28a92(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_145b28a92(void)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_58 [36];
  undefined1 local_34 [4];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3efb8) {
    FUN_144b3d300(&DAT_14cb3efb8);
    if (DAT_14cb3efb8 == -1) {
      uVar5 = FUN_144a7a812();
      DAT_14cb3efb0 = thunk_FUN_140277b32(uVar5,0,L"/Script/CoreUObject",0);
      _Init_thread_footer(&DAT_14cb3efb8);
    }
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb3efc8) {
    FUN_144b3d300(&DAT_14cb3efc8);
    if (DAT_14cb3efc8 == -1) {
      uVar5 = FUN_144a7a812();
      DAT_14cb3efc0 = thunk_FUN_140277b32(uVar5,0,L"/Script/Niagara",0);
      _Init_thread_footer(&DAT_14cb3efc8);
    }
  }
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed10 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraParameterMap",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed18 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraID",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed20 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraRandInfo",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed28 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraNumeric",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb41330 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraFloat",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb420c8 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraBool",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb420c0 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraInt32",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed30 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraMatrix",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed40 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraWildcard",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb413d0 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraPosition",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed48 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraHalf",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed50 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraHalfVector2",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed58 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraHalfVector3",0);
  uVar5 = DAT_14cb3efc0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed60 = thunk_FUN_140277b32(uVar6,uVar5,L"NiagaraHalfVector4",0);
  uVar5 = DAT_14cb3efb0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb41338 = thunk_FUN_140277b32(uVar6,uVar5,L"Vector2f",0);
  uVar5 = DAT_14cb3efb0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb41340 = thunk_FUN_140277b32(uVar6,uVar5,L"Vector3f",0);
  uVar5 = DAT_14cb3efb0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb41348 = thunk_FUN_140277b32(uVar6,uVar5,L"Vector4f",0);
  uVar5 = DAT_14cb3efb0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb3ed38 = thunk_FUN_140277b32(uVar6,uVar5,L"LinearColor",0);
  uVar5 = DAT_14cb3efb0;
  uVar6 = FUN_1446f4bba();
  DAT_14cb41350 = thunk_FUN_140277b32(uVar6,uVar5,L"Quat4f",0);
  DAT_14cb3ed68 = FUN_1446f8646();
  DAT_14cb3ed70 = FUN_1402d2740();
  DAT_14cb3ed78 = FUN_144a7937e();
  DAT_14cb3ed80 = FUN_140f1f190();
  lVar7 = DAT_14cb3ed10;
  if ((DAT_14cb3ed10 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(DAT_14cb3ed10);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed18;
  DAT_14cb3edc0 = lVar7;
  _DAT_14cb3edc8 = 0xffffffff00000002;
  if ((DAT_14cb3ed18 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed18);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed20;
  DAT_14cb421a0 = lVar8;
  _DAT_14cb421a8 = 0xffffffff00000002;
  if ((DAT_14cb3ed20 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed20);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed28;
  _DAT_14cb3edd0 = lVar7;
  _DAT_14cb3edd8 = 0xffffffff00000002;
  if ((DAT_14cb3ed28 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed28);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb41330;
  _DAT_14cb3ede0 = lVar8;
  if ((DAT_14cb41330 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41330);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb420c8;
  DAT_14cb420f0 = lVar7;
  DAT_14cb420f8 = 0xffffffff00000002;
  if ((DAT_14cb420c8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb420c8);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb420c0;
  DAT_14cb420e0 = lVar8;
  DAT_14cb420e8 = 0xffffffff00000002;
  if ((DAT_14cb420c0 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb420c0);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb41338;
  DAT_14cb420d0 = lVar7;
  _DAT_14cb420d8 = 0xffffffff00000002;
  if ((DAT_14cb41338 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41338);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb41340;
  DAT_14cb42110 = lVar8;
  DAT_14cb42118 = 0xffffffff00000002;
  if ((DAT_14cb41340 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41340);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb41348;
  DAT_14cb42140 = lVar7;
  DAT_14cb42148 = 0xffffffff00000002;
  if ((DAT_14cb41348 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41348);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed38;
  DAT_14cb42160 = lVar8;
  DAT_14cb42168 = 0xffffffff00000002;
  if ((DAT_14cb3ed38 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed38);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb413d0;
  DAT_14cb42180 = lVar7;
  DAT_14cb42188 = 0xffffffff00000002;
  if ((DAT_14cb413d0 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb413d0);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb41350;
  DAT_14cb42130 = lVar8;
  _DAT_14cb42138 = 0xffffffff00000002;
  if ((DAT_14cb41350 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41350);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed30;
  DAT_14cb42190 = lVar7;
  _DAT_14cb42198 = 0xffffffff00000002;
  if ((DAT_14cb3ed30 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed30);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed40;
  DAT_14cb41370 = lVar8;
  _DAT_14cb41378 = 0xffffffff00000002;
  if ((DAT_14cb3ed40 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed40);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed48;
  _DAT_14cb3edf0 = lVar7;
  if ((DAT_14cb3ed48 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed48);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed50;
  DAT_14cb42100 = lVar8;
  _DAT_14cb42108 = 0xffffffff00000002;
  if ((DAT_14cb3ed50 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed50);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed58;
  DAT_14cb42120 = lVar7;
  _DAT_14cb42128 = 0xffffffff00000002;
  if ((DAT_14cb3ed58 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed58);
  }
  FUN_140c6c286(lVar8,0);
  if (DAT_14c950c29 == 1 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed60;
  DAT_14cb42150 = lVar8;
  _DAT_14cb42158 = 0xffffffff00000002;
  if ((DAT_14cb3ed60 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed60);
  }
  FUN_140c6c286(lVar7,0);
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed68;
  DAT_14cb42170 = lVar7;
  _DAT_14cb42178 = 0xffffffff00000002;
  if (DAT_14cb3ed68 != 0 && (~DAT_14c950c29 & 1) == 0) {
    FUN_1456cec3c(DAT_14cb3ed68);
  }
  if ((~DAT_14c950c29 & 1) == 0 && lVar8 != 0) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed70;
  DAT_14cb41380 = lVar8;
  _DAT_14cb41388 = 0xffffffff00000001;
  if ((DAT_14cb3ed70 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed70);
  }
  if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar7);
  }
  lVar8 = DAT_14cb3ed78;
  _DAT_14cb41390 = lVar7;
  _DAT_14cb41398 = 0xffffffff00000001;
  if ((DAT_14cb3ed78 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed78);
  }
  if ((lVar8 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar8);
  }
  lVar7 = DAT_14cb3ed80;
  DAT_14cb413b0 = lVar8;
  _DAT_14cb413b8 = 0xffffffff00000001;
  if ((DAT_14cb3ed80 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed80);
  }
  if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar7);
  }
  DAT_14cb413c0 = lVar7;
  _DAT_14cb413c8 = 0xffffffff00000001;
  lVar7 = FUN_1406d0862();
  if (lVar7 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar7);
  }
  if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar7);
  }
  _DAT_14cb413a8 = 0xffffffff00000001;
  _DAT_14cb413a0 = lVar7;
  lVar7 = FUN_14110c9fe();
  if (lVar7 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar7);
  }
  if ((lVar7 != 0) && ((DAT_14c950c29 & 1) != 0)) {
    FUN_1456cec3c(lVar7);
  }
  _DAT_14cb41368 = 0xffffffff00000001;
  _DAT_14cb41360 = lVar7;
  if (DAT_14cb3e728 == 0) {
    uVar5 = FUN_140aec9fd();
    DAT_14cb3e728 = FUN_140002ddd(FUN_146474ac7,uVar5,L"NiagaraCollisionEventPayload");
  }
  lVar7 = DAT_14cb3e728;
  if ((DAT_14cb3e728 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(DAT_14cb3e728);
  }
  FUN_140c6c286(lVar7,0);
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  _DAT_14cb3efa0 = lVar7;
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb3ed28);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb41330);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb420c0);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb41338);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb41340);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb41348);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb3ed38);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb413d0);
  FUN_145b2a064(&DAT_14cb3ee00,&local_30,&DAT_14cb41350);
  local_30 = DAT_14cb41330;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb41338;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb41340;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb41348;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb3ed38;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb413d0;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb41350;
  FUN_145b2a2fe(&DAT_14cb3eeb0,local_34,&local_30);
  local_30 = DAT_14cb420c0;
  FUN_145b2a2fe(&DAT_14cb3ef00,local_34,&local_30);
  local_30 = DAT_14cb420c8;
  FUN_145b2a2fe(&DAT_14cb3ef50,local_34,&local_30);
  lVar7 = DAT_14cb420c0;
  if ((DAT_14cb420c0 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(DAT_14cb420c0);
  }
  FUN_140c6c286(lVar7,0);
  iVar3 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,iVar3);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb41330;
  if ((DAT_14cb41330 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41330);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb41338;
  if ((DAT_14cb41338 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41338);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb41340;
  if ((DAT_14cb41340 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41340);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb41348;
  if ((DAT_14cb41348 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41348);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb3ed38;
  if ((DAT_14cb3ed38 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb3ed38);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb413d0;
  if ((DAT_14cb413d0 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb413d0);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if (DAT_14c950c29 == 1 && lVar7 != 0) {
    FUN_1456cec3c(lVar7);
  }
  bVar2 = DAT_14c950c29;
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  lVar7 = DAT_14cb41350;
  if ((DAT_14cb41350 != 0) && ((bVar2 & 1) != 0)) {
    FUN_1456cec3c(DAT_14cb41350);
  }
  FUN_140c6c286(lVar7,0);
  uVar4 = DAT_14cb3ee58;
  lVar8 = (longlong)(int)DAT_14cb3ee58;
  DAT_14cb3ee58 = DAT_14cb3ee58 + 1;
  if (DAT_14cb3ee5c < DAT_14cb3ee58) {
    FUN_140c6c92a(&DAT_14cb3ee50,uVar4);
  }
  lVar1 = DAT_14cb3ee50 + lVar8 * 0x10;
  *(longlong *)(DAT_14cb3ee50 + lVar8 * 0x10) = lVar7;
  if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
    FUN_1456cec3c(lVar7);
  }
  *(undefined8 *)(lVar1 + 8) = 0xffffffff00000002;
  FUN_145b2a064(&DAT_14cb3ee60,&local_30,&DAT_14cb420c8);
  FUN_145b2a064(&DAT_14cb3ee60,&local_30,&DAT_14cb420c0);
  FUN_145b2a064(&DAT_14cb3ee60,&local_30,&DAT_14cb41330);
  FUN_145b2a064(&DAT_14cb3ee60,&local_30,&DAT_14cb3ed48);
  _DAT_14cb3ed88 = FUN_145b2a5ba();
  _DAT_14cb3ed90 = FUN_145b2a5f3();
  DAT_14cb41328 = FUN_1414c8733();
  _DAT_14cb3eda0 = FUN_145b2a62c();
  DAT_14cb3ed98 = FUN_145b2a665();
  DAT_14cb3eda8 = FUN_145b2a69e();
  DAT_14cb3edb0 = FUN_145b2a6d7();
  DAT_14cb3edb8 = FUN_145b2a710();
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2a064 FUN_145b2a064 body=300 status=ok
// SIG undefined FUN_145b2a064(void)

undefined4 * FUN_145b2a064(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b2a20e(param_1,local_48);
  uVar5 = *param_3;
  *local_40 = uVar5;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar3 = ((uint)(uVar5 >> 0x14) & 0xffff ^ (uint)(uVar5 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  cVar2 = FUN_145b2a192(param_1,uVar3,local_40,&local_4c);
  uVar1 = local_4c;
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar5 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar5 != 0) {
        for (; uVar5 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0xc) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1414c8954(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2a192 FUN_145b2a192 body=124 status=ok
// SIG undefined FUN_145b2a192(void)

undefined8 FUN_145b2a192(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x10) == *param_3) {
          *plVar1 = *param_3;
          FUN_1481cdf50(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = (int)plVar1[1];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 145b2a20e FUN_145b2a20e body=239 status=ok
// SIG undefined FUN_145b2a20e(void)

int * FUN_145b2a20e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145b2a2fe FUN_145b2a2fe body=319 status=ok
// SIG undefined FUN_145b2a2fe(void)

undefined4 * FUN_145b2a2fe(longlong param_1,undefined4 *param_2,ulonglong *param_3)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145b2a4d4(param_1,local_48);
  uVar3 = *param_3;
  *local_40 = uVar3;
  *(undefined4 *)(local_40 + 1) = 0xffffffff;
  local_4c = local_48[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_58 = 0;
  cVar1 = FUN_145b2a43e(param_1,uVar2,local_40);
  if (cVar1 == '\0') {
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
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_40 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_1414c876c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2a43e FUN_145b2a43e body=149 status=ok
// SIG undefined FUN_145b2a43e(void)

void FUN_145b2a43e(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1468bc7be(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_145b2a4a8;
    }
  }
  uVar1 = 0;
LAB_145b2a4a8:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 145b2a4d4 FUN_145b2a4d4 body=230 status=ok
// SIG undefined FUN_145b2a4d4(void)

int * FUN_145b2a4d4(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 145b2a5ba FUN_145b2a5ba body=57 status=ok
// SIG undefined FUN_145b2a5ba(void)

void FUN_145b2a5ba(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c78 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c78 = FUN_14171c317(FUN_14647b394,uVar1,L"ENiagaraCoordinateSpace");
  }
  return;
}



// FUNCTION 145b2a5f3 FUN_145b2a5f3 body=57 status=ok
// SIG undefined FUN_145b2a5f3(void)

void FUN_145b2a5f3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43ca8 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43ca8 = FUN_14171c317(FUN_14647b3f2,uVar1,L"ENiagaraOrientationAxis");
  }
  return;
}



// FUNCTION 145b2a62c FUN_145b2a62c body=57 status=ok
// SIG undefined FUN_145b2a62c(void)

void FUN_145b2a62c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb43c30 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb43c30 = FUN_14171c317(FUN_14647b303,uVar1,L"ENiagaraExecutionStateSource");
  }
  return;
}



// FUNCTION 145b2a665 FUN_145b2a665 body=57 status=ok
// SIG undefined FUN_145b2a665(void)

void FUN_145b2a665(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35d10 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35d10 = FUN_14171c317(FUN_146464465,uVar1,L"ENiagaraSimTarget");
  }
  return;
}



// FUNCTION 145b2a69e FUN_145b2a69e body=57 status=ok
// SIG undefined FUN_145b2a69e(void)

void FUN_145b2a69e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f38 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f38 = FUN_14171c317(FUN_146464e38,uVar1,L"ENiagaraCompileUsageStaticSwitch");
  }
  return;
}



// FUNCTION 145b2a6d7 FUN_145b2a6d7 body=57 status=ok
// SIG undefined FUN_145b2a6d7(void)

void FUN_145b2a6d7(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb35f50 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb35f50 = FUN_14171c317(FUN_146464e67,uVar1,L"ENiagaraScriptContextStaticSwitch");
  }
  return;
}



// FUNCTION 145b2a710 FUN_145b2a710 body=57 status=ok
// SIG undefined FUN_145b2a710(void)

void FUN_145b2a710(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb36088 == 0) {
    uVar1 = FUN_140aec9fd();
    DAT_14cb36088 = FUN_14171c317(FUN_146465322,uVar1,L"ENiagaraFunctionDebugState");
  }
  return;
}



// FUNCTION 145b2a74a FUN_145b2a74a body=93 status=ok
// SIG undefined FUN_145b2a74a(void)

undefined8 * FUN_145b2a74a(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145da38cf(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145b2aa02(param_1,iVar1);
      FUN_145b2a7a7(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 145b2a7a7 FUN_145b2a7a7 body=60 status=ok
// SIG undefined FUN_145b2a7a7(void)

void FUN_145b2a7a7(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_145b2a7e4(param_1,param_2);
    param_1 = param_1 + 0xb0;
    param_2 = param_2 + 0xb0;
  }
  return;
}



// FUNCTION 145b2a7e4 FUN_145b2a7e4 body=444 status=ok
// SIG undefined FUN_145b2a7e4(void)

undefined8 * FUN_145b2a7e4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 2);
  }
  FUN_1447a97f4(param_1 + 4,param_2 + 4);
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  uVar3 = param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_145b2a9a0(param_1 + 9,iVar1,0);
    FUN_1414c8b3b(param_1[9],uVar3,iVar1);
  }
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  pvVar2 = (void *)param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xc,iVar1,0);
    memcpy((void *)param_1[0xc],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xe] = param_2[0xe];
  FUN_1447a97f4(param_1 + 0xf,param_2 + 0xf);
  param_1[0x14] = 0;
  iVar1 = *(int *)(param_2 + 0x15);
  pvVar2 = (void *)param_2[0x14];
  *(int *)(param_1 + 0x15) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x14,iVar1,0);
    memcpy((void *)param_1[0x14],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 145b2a9a0 FUN_145b2a9a0 body=98 status=ok
// SIG undefined FUN_145b2a9a0(void)

void FUN_145b2a9a0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,8);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145b2aa02 FUN_145b2aa02 body=114 status=ok
// SIG undefined FUN_145b2aa02(void)

void FUN_145b2aa02(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xb0,8);
    iVar2 = (int)(uVar1 / 0xb0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xb0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 145b2aa7a FUN_145b2aa7a body=227 status=ok
// SIG undefined FUN_145b2aa7a(void)

longlong FUN_145b2aa7a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c927910 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462713b0;
    local_38 = &LAB_146856a59;
    local_40 = FUN_1462713b5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"VerseEnum",&DAT_14c927910,&DAT_146856a58);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c927910;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ab64 FUN_145b2ab64 body=227 status=ok
// SIG undefined FUN_145b2ab64(void)

longlong FUN_145b2ab64(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined2 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined2 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c927958 == 0) {
    local_30 = &local_10;
    local_10 = &DAT_1427db2a2;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146271292;
    local_38 = &LAB_146856a69;
    local_40 = FUN_145a1f191;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/CoreUObject",L"VerseStruct",&DAT_14c927958,&DAT_146856a68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c927958;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ac4e FUN_145b2ac4e body=227 status=ok
// SIG undefined FUN_145b2ac4e(void)

longlong FUN_145b2ac4e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9494b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_1462713b0;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146898e01;
    local_40 = FUN_146273682;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"EnumCookedMetaData",&DAT_14c9494b8,&DAT_146898e00);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9494b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ad38 FUN_145b2ad38 body=227 status=ok
// SIG undefined FUN_145b2ad38(void)

longlong FUN_145b2ad38(void)

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
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9494d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146271292;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146898e05;
    local_40 = &LAB_145cb7cf3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/CoreUObject",L"StructCookedMetaData",&DAT_14c9494d0,&DAT_146898e04);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9494d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ae22 FUN_145b2ae22 body=227 status=ok
// SIG undefined FUN_145b2ae22(void)

longlong FUN_145b2ae22(void)

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
  code *local_28;
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9494e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = &LAB_146272d4c;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_146898e09;
    local_40 = &LAB_145dcd36b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ClassCookedMetaData",&DAT_14c9494e8,&DAT_146898e08);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9494e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2af0c FUN_145b2af0c body=227 status=ok
// SIG undefined FUN_145b2af0c(void)

longlong FUN_145b2af0c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952558 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e41d8;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e41f5;
    local_40 = FUN_1462755b1;
    local_48 = L"Engine";
    local_50 = 0x200000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ArrayProperty",&DAT_14c952558,&DAT_1468e41fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952558;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2aff6 FUN_145b2aff6 body=227 status=ok
// SIG undefined FUN_145b2aff6(void)

longlong FUN_145b2aff6(void)

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
  if (DAT_14c952588 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e4417;
    local_40 = &LAB_145c281cd;
    local_48 = L"Engine";
    local_50 = 0x20000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"BoolProperty",&DAT_14c952588,&DAT_1468e441c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952588;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b0e0 FUN_145b2b0e0 body=227 status=ok
// SIG undefined FUN_145b2b0e0(void)

longlong FUN_145b2b0e0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9525a0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e4466;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e4483;
    local_40 = FUN_146275661;
    local_48 = L"Engine";
    local_50 = 0x40;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ByteProperty",&DAT_14c9525a0,&DAT_1468e4488);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9525a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b1ca FUN_145b2b1ca body=227 status=ok
// SIG undefined FUN_145b2b1ca(void)

longlong FUN_145b2b1ca(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9525b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1468e4520;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a6259c;
    local_38 = &LAB_1468e4562;
    local_40 = FUN_14627569b;
    local_48 = L"Engine";
    local_50 = 0x400;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/CoreUObject",L"ClassProperty",&DAT_14c9525b8,&DAT_1468e4568);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9525b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b2b4 FUN_145b2b2b4 body=227 status=ok
// SIG undefined FUN_145b2b2b4(void)

longlong FUN_145b2b2b4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9525d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e4598;
    local_40 = FUN_1462756d9;
    local_48 = L"Engine";
    local_50 = 0x800000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"DelegateProperty",&DAT_14c9525d0,&DAT_1468e459e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9525d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b39e FUN_145b2b39e body=227 status=ok
// SIG undefined FUN_145b2b39e(void)

longlong FUN_145b2b39e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952600 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e45a5;
    local_40 = FUN_1462757c1;
    local_48 = L"Engine";
    local_50 = 0x100;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"FloatProperty",&DAT_14c952600,&DAT_1468e45aa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952600;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b488 FUN_145b2b488 body=227 status=ok
// SIG undefined FUN_145b2b488(void)

longlong FUN_145b2b488(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952618 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e45ab;
    local_40 = FUN_146275835;
    local_48 = L"Engine";
    local_50 = 0x80;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"IntProperty",&DAT_14c952618,&DAT_1468e45b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952618;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b572 FUN_145b2b572 body=227 status=ok
// SIG undefined FUN_145b2b572(void)

longlong FUN_145b2b572(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e45b1;
    local_40 = FUN_1462758a9;
    local_48 = L"Engine";
    local_50 = 2;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Int8Property",&DAT_14c952630,&DAT_1468e45b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b65c FUN_145b2b65c body=227 status=ok
// SIG undefined FUN_145b2b65c(void)

longlong FUN_145b2b65c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e45bd;
    local_40 = FUN_146275991;
    local_48 = L"Engine";
    local_50 = 0x400000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Int64Property",&DAT_14c952660,&DAT_1468e45c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b746 FUN_145b2b746 body=227 status=ok
// SIG undefined FUN_145b2b746(void)

longlong FUN_145b2b746(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952678 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e464a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e4667;
    local_40 = FUN_1462759c9;
    local_48 = L"Engine";
    local_50 = 0x1000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"InterfaceProperty",&DAT_14c952678,&DAT_1468e466c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952678;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b830 FUN_145b2b830 body=227 status=ok
// SIG undefined FUN_145b2b830(void)

longlong FUN_145b2b830(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952690 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_142817f9a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145956e0c;
    local_38 = &LAB_1468e466d;
    local_40 = FUN_1462759fd;
    local_48 = L"Engine";
    local_50 = 0x10000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"LazyObjectProperty",&DAT_14c952690,&DAT_1468e4672);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952690;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2b91a FUN_145b2b91a body=227 status=ok
// SIG undefined FUN_145b2b91a(void)

longlong FUN_145b2b91a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952708 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e473d;
    local_40 = FUN_146275b47;
    local_48 = L"Engine";
    local_50 = 0x2000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"NameProperty",&DAT_14c952708,&DAT_1468e4742);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952708;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ba04 FUN_145b2ba04 body=227 status=ok
// SIG undefined FUN_145b2ba04(void)

longlong FUN_145b2ba04(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e48cf;
    local_40 = FUN_146275cc8;
    local_48 = L"Engine";
    local_50 = 0x4000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"StrProperty",&DAT_14c952798,&DAT_1468e48d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2baee FUN_145b2baee body=227 status=ok
// SIG undefined FUN_145b2baee(void)

longlong FUN_145b2baee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9527c0 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e49b8;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e49d5;
    local_40 = FUN_146275cfa;
    local_48 = L"Engine";
    local_50 = 0x100000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"StructProperty",&DAT_14c9527c0,&DAT_1468e49da);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9527c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2bbd8 FUN_145b2bbd8 body=227 status=ok
// SIG undefined FUN_145b2bbd8(void)

longlong FUN_145b2bbd8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9527d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e49db;
    local_40 = FUN_146275d70;
    local_48 = L"Engine";
    local_50 = 0x40000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"UInt16Property",&DAT_14c9527d8,&DAT_1468e49e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9527d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2bcc2 FUN_145b2bcc2 body=227 status=ok
// SIG undefined FUN_145b2bcc2(void)

longlong FUN_145b2bcc2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9527f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e49e1;
    local_40 = FUN_146275de4;
    local_48 = L"Engine";
    local_50 = 0x800;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"UInt32Property",&DAT_14c9527f0,&DAT_1468e49e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9527f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2bdac FUN_145b2bdac body=227 status=ok
// SIG undefined FUN_145b2bdac(void)

longlong FUN_145b2bdac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14588a048;
    local_38 = &LAB_1468e49e7;
    local_40 = FUN_146275e58;
    local_48 = L"Engine";
    local_50 = 0x200;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"UInt64Property",&DAT_14c952808,&DAT_1468e49ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2be96 FUN_145b2be96 body=227 status=ok
// SIG undefined FUN_145b2be96(void)

longlong FUN_145b2be96(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952820 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_142817f9a;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145956e0c;
    local_38 = &LAB_1468e49ed;
    local_40 = FUN_146275e8a;
    local_48 = L"Engine";
    local_50 = 0x8000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/CoreUObject",L"WeakObjectProperty",&DAT_14c952820,&DAT_1468e49f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2bf80 FUN_145b2bf80 body=227 status=ok
// SIG undefined FUN_145b2bf80(void)

longlong FUN_145b2bf80(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952838 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e49f3;
    local_40 = FUN_146275f00;
    local_48 = L"Engine";
    local_50 = 0x40000000;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/CoreUObject",L"TextProperty",&DAT_14c952838,&DAT_1468e49f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952838;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c06a FUN_145b2c06a body=227 status=ok
// SIG undefined FUN_145b2c06a(void)

longlong FUN_145b2c06a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a62774;
    local_38 = &LAB_1468e4a05;
    local_40 = FUN_146275f78;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/CoreUObject",L"MulticastInlineDelegatePropertyWrapper",&DAT_14c952880,
                  &DAT_1468e4a0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c154 FUN_145b2c154 body=227 status=ok
// SIG undefined FUN_145b2c154(void)

longlong FUN_145b2c154(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  undefined1 **local_30;
  undefined1 *local_28;
  code *local_20;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c952898 == 0) {
    local_30 = &local_10;
    local_10 = &LAB_1468e4a80;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123557e;
    local_38 = &LAB_1468e4a9d;
    local_40 = FUN_146275f9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/CoreUObject",L"GameDataHandleProperty",&DAT_14c952898,&DAT_1468e4aa2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c952898;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c23e FUN_145b2c23e body=227 status=ok
// SIG undefined FUN_145b2c23e(void)

longlong FUN_145b2c23e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ebf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207d1;
    local_40 = FUN_14627fb93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Slate",L"ButtonWidgetStyle",&DAT_14c98ebf8,&DAT_146a207d0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ebf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c328 FUN_145b2c328 body=227 status=ok
// SIG undefined FUN_145b2c328(void)

longlong FUN_145b2c328(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207d5;
    local_40 = FUN_14627fbfb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x980;
    FUN_14081cfa3(L"/Script/Slate",L"CheckBoxWidgetStyle",&DAT_14c98ec10,&DAT_146a207d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c412 FUN_145b2c412 body=227 status=ok
// SIG undefined FUN_145b2c412(void)

longlong FUN_145b2c412(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207d9;
    local_40 = FUN_14627fc63;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x5d0;
    FUN_14081cfa3(L"/Script/Slate",L"ComboBoxWidgetStyle",&DAT_14c98ec28,&DAT_146a207d8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c4fc FUN_145b2c4fc body=227 status=ok
// SIG undefined FUN_145b2c4fc(void)

longlong FUN_145b2c4fc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207dd;
    local_40 = FUN_14627fccb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x570;
    FUN_14081cfa3(L"/Script/Slate",L"ComboButtonWidgetStyle",&DAT_14c98ec40,&DAT_146a207dc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c5e6 FUN_145b2c5e6 body=227 status=ok
// SIG undefined FUN_145b2c5e6(void)

longlong FUN_145b2c5e6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207e1;
    local_40 = FUN_14627fd33;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xcb0;
    FUN_14081cfa3(L"/Script/Slate",L"EditableTextBoxWidgetStyle",&DAT_14c98ec58,&DAT_146a207e0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c6d0 FUN_145b2c6d0 body=227 status=ok
// SIG undefined FUN_145b2c6d0(void)

longlong FUN_145b2c6d0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec70 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207e5;
    local_40 = FUN_14627fd9b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x2c0;
    FUN_14081cfa3(L"/Script/Slate",L"EditableTextWidgetStyle",&DAT_14c98ec70,&DAT_146a207e4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec70;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c7ba FUN_145b2c7ba body=227 status=ok
// SIG undefined FUN_145b2c7ba(void)

longlong FUN_145b2c7ba(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ec88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207e9;
    local_40 = FUN_14627fe03;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x260;
    FUN_14081cfa3(L"/Script/Slate",L"ProgressWidgetStyle",&DAT_14c98ec88,&DAT_146a207e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ec88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c8a4 FUN_145b2c8a4 body=227 status=ok
// SIG undefined FUN_145b2c8a4(void)

longlong FUN_145b2c8a4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98eca0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207ed;
    local_40 = FUN_14627fe6b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x680;
    FUN_14081cfa3(L"/Script/Slate",L"ScrollBarWidgetStyle",&DAT_14c98eca0,&DAT_146a207ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98eca0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2c98e FUN_145b2c98e body=227 status=ok
// SIG undefined FUN_145b2c98e(void)

longlong FUN_145b2c98e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ecb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207f1;
    local_40 = FUN_14627fed3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 800;
    FUN_14081cfa3(L"/Script/Slate",L"ScrollBoxWidgetStyle",&DAT_14c98ecb8,&DAT_146a207f0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ecb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ca78 FUN_145b2ca78 body=227 status=ok
// SIG undefined FUN_145b2ca78(void)

longlong FUN_145b2ca78(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ecd0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207f5;
    local_40 = FUN_14627ff3b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x550;
    FUN_14081cfa3(L"/Script/Slate",L"SpinBoxWidgetStyle",&DAT_14c98ecd0,&DAT_146a207f4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ecd0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2cb62 FUN_145b2cb62 body=227 status=ok
// SIG undefined FUN_145b2cb62(void)

longlong FUN_145b2cb62(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c98ece8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458596b0;
    local_38 = &LAB_146a207f9;
    local_40 = FUN_14627ffa3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x310;
    FUN_14081cfa3(L"/Script/Slate",L"TextBlockWidgetStyle",&DAT_14c98ece8,&DAT_146a207f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c98ece8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2cc4c FUN_145b2cc4c body=227 status=ok
// SIG undefined FUN_145b2cc4c(void)

longlong FUN_145b2cc4c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9983d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985b4c;
    local_38 = &LAB_146f03ca3;
    local_40 = FUN_1462898c1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizerConfig",&DAT_14c9983d8,
                  &DAT_146f03ca2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9983d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2cd36 FUN_145b2cd36 body=227 status=ok
// SIG undefined FUN_145b2cd36(void)

longlong FUN_145b2cd36(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9983f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e282e;
    local_38 = &LAB_146f03ca7;
    local_40 = FUN_145931fa8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/IrisCore",L"FieldOfViewNetObjectPrioritizer",&DAT_14c9983f0,
                  &DAT_146f03ca6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9983f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ce20 FUN_145b2ce20 body=227 status=ok
// SIG undefined FUN_145b2ce20(void)

longlong FUN_145b2ce20(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998408 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949cbe;
    local_38 = &LAB_146f03cab;
    local_40 = FUN_1462899c3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"FilterOutNetObjectFilterConfig",&DAT_14c998408,
                  &DAT_146f03caa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998408;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2cf0a FUN_145b2cf0a body=227 status=ok
// SIG undefined FUN_145b2cf0a(void)

longlong FUN_145b2cf0a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998420 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949da2;
    local_38 = &LAB_146f03caf;
    local_40 = FUN_146289a46;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/IrisCore",L"FilterOutNetObjectFilter",&DAT_14c998420,&DAT_146f03cae);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998420;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2cff4 FUN_145b2cff4 body=227 status=ok
// SIG undefined FUN_145b2cff4(void)

longlong FUN_145b2cff4(void)

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
  if (DAT_14c998630 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985c30;
    local_38 = &LAB_146f03cc3;
    local_40 = &LAB_145a5ed28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectBlobHandler",&DAT_14c998630,&DAT_146f03cc2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d0de FUN_145b2d0de body=227 status=ok
// SIG undefined FUN_145b2d0de(void)

longlong FUN_145b2d0de(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949cbe;
    local_38 = &LAB_146f03cc7;
    local_40 = FUN_14628a517;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectConnectionFilterConfig",&DAT_14c998648,
                  &DAT_146f03cc6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d1c8 FUN_145b2d1c8 body=227 status=ok
// SIG undefined FUN_145b2d1c8(void)

longlong FUN_145b2d1c8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998660 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949da2;
    local_38 = &LAB_146f03ccb;
    local_40 = FUN_14628a56f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xa8;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectConnectionFilter",&DAT_14c998660,&DAT_146f03cca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998660;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d2b2 FUN_145b2d2b2 body=227 status=ok
// SIG undefined FUN_145b2d2b2(void)

longlong FUN_145b2d2b2(void)

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
  if (DAT_14c9986a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d316e;
    local_38 = &LAB_146f03cd9;
    local_40 = &LAB_145c046ee;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectCountLimiter",&DAT_14c9986a8,&DAT_146f03cd8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9986a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d39c FUN_145b2d39c body=227 status=ok
// SIG undefined FUN_145b2d39c(void)

longlong FUN_145b2d39c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998750 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949cbe;
    local_38 = &LAB_146f03ced;
    local_40 = FUN_14628a8c1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectGridFilterConfig",&DAT_14c998750,&DAT_146f03cec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998750;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d486 FUN_145b2d486 body=227 status=ok
// SIG undefined FUN_145b2d486(void)

longlong FUN_145b2d486(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998780 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a62d02;
    local_38 = &LAB_146f03cfb;
    local_40 = FUN_14628a965;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x160;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetObjectGridWorldLocFilter",&DAT_14c998780,&DAT_146f03cfa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998780;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d570 FUN_145b2d570 body=227 status=ok
// SIG undefined FUN_145b2d570(void)

longlong FUN_145b2d570(void)

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
  if (DAT_14c9987f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985c30;
    local_38 = &LAB_146f03d0b;
    local_40 = &LAB_145ad40e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetRPCHandler",&DAT_14c9987f8,&DAT_146f03d0a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9987f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d65a FUN_145b2d65a body=227 status=ok
// SIG undefined FUN_145b2d65a(void)

longlong FUN_145b2d65a(void)

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
  if (DAT_14c998870 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985a68;
    local_38 = &LAB_146f03d0f;
    local_40 = &LAB_145a22987;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x78;
    FUN_14081cfa3(L"/Script/IrisCore",L"NetTokenDataStream",&DAT_14c998870,&DAT_146f03d0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d744 FUN_145b2d744 body=227 status=ok
// SIG undefined FUN_145b2d744(void)

longlong FUN_145b2d744(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949cbe;
    local_38 = &LAB_146f03d13;
    local_40 = FUN_14628ad44;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/IrisCore",L"NopNetObjectFilterConfig",&DAT_14c998888,&DAT_146f03d12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d82e FUN_145b2d82e body=227 status=ok
// SIG undefined FUN_145b2d82e(void)

longlong FUN_145b2d82e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9988a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145949da2;
    local_38 = &LAB_146f03d17;
    local_40 = FUN_14628ad96;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/IrisCore",L"NopNetObjectFilter",&DAT_14c9988a0,&DAT_146f03d16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9988a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2d918 FUN_145b2d918 body=227 status=ok
// SIG undefined FUN_145b2d918(void)

longlong FUN_145b2d918(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998a80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a51356;
    local_38 = &LAB_146f07991;
    local_40 = FUN_14628c192;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/IrisCore",L"PartialNetObjectAttachmentHandlerConfig",&DAT_14c998a80,
                  &DAT_146f07990);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998a80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2da02 FUN_145b2da02 body=227 status=ok
// SIG undefined FUN_145b2da02(void)

longlong FUN_145b2da02(void)

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
  if (DAT_14c998a98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a62eda;
    local_38 = &LAB_146f07995;
    local_40 = &LAB_145b03f45;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x150;
    FUN_14081cfa3(L"/Script/IrisCore",L"PartialNetObjectAttachmentHandler",&DAT_14c998a98,
                  &DAT_146f07994);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998a98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2daec FUN_145b2daec body=227 status=ok
// SIG undefined FUN_145b2daec(void)

longlong FUN_145b2daec(void)

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
  if (DAT_14c998b40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985a68;
    local_38 = &LAB_146f0799d;
    local_40 = &LAB_14591ed5b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/IrisCore",L"ReplicationDataStream",&DAT_14c998b40,&DAT_146f0799c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998b40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2dbd6 FUN_145b2dbd6 body=227 status=ok
// SIG undefined FUN_145b2dbd6(void)

longlong FUN_145b2dbd6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998cc0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a62fc6;
    local_38 = &LAB_146f079bf;
    local_40 = FUN_14628cc4e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x1000000c;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizerConfig",
                  &DAT_14c998cc0,&DAT_146f079be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998cc0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2dcc0 FUN_145b2dcc0 body=227 status=ok
// SIG undefined FUN_145b2dcc0(void)

longlong FUN_145b2dcc0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c998cd8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a630b2;
    local_38 = &LAB_146f079c3;
    local_40 = FUN_145c53ca9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/IrisCore",L"SphereWithOwnerBoostNetObjectPrioritizer",&DAT_14c998cd8,
                  &DAT_146f079c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c998cd8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ddaa FUN_145b2ddaa body=227 status=ok
// SIG undefined FUN_145b2ddaa(void)

longlong FUN_145b2ddaa(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99c7a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145985df8;
    local_38 = &LAB_146fa848d;
    local_40 = FUN_14628fba4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2f0;
    FUN_14081cfa3(L"/Script/SkeletalMeshDescription",L"SkeletalMeshDescription",&DAT_14c99c7a8,
                  &DAT_146fa848c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99c7a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2de94 FUN_145b2de94 body=227 status=ok
// SIG undefined FUN_145b2de94(void)

longlong FUN_145b2de94(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99e798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e6014;
    local_38 = &LAB_147043d2b;
    local_40 = FUN_146296e8e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/AudioExtensions",L"DummyEndpointSettings",&DAT_14c99e798,&DAT_147043d2a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99e798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2df7e FUN_145b2df7e body=227 status=ok
// SIG undefined FUN_145b2df7e(void)

longlong FUN_145b2df7e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c99ed00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a5151e;
    local_38 = &LAB_147047ab3;
    local_40 = FUN_146297eaf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/TypedElementFramework",L"Test_PingPongBetweenPhaseFactory",
                  &DAT_14c99ed00,&DAT_147047ab2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c99ed00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e068 FUN_145b2e068 body=227 status=ok
// SIG undefined FUN_145b2e068(void)

longlong FUN_145b2e068(void)

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
  if (DAT_14c9a06b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14585d82e;
    local_38 = &LAB_147088ff9;
    local_40 = &LAB_145a2c688;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x2d0;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreTestFlat",&DAT_14c9a06b8,&DAT_147088ff8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a06b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e152 FUN_145b2e152 body=227 status=ok
// SIG undefined FUN_145b2e152(void)

longlong FUN_145b2e152(void)

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
  if (DAT_14c9a06d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e2cca;
    local_38 = &LAB_147088ffd;
    local_40 = &LAB_145a2c6be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreTestMix",&DAT_14c9a06d0,&DAT_147088ffc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a06d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e23c FUN_145b2e23c body=227 status=ok
// SIG undefined FUN_145b2e23c(void)

longlong FUN_145b2e23c(void)

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
  if (DAT_14c9a06e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14124759c;
    local_38 = &LAB_147089001;
    local_40 = &LAB_145a2c6f4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x340;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusConfigStoreTestPath",&DAT_14c9a06e8,&DAT_147089000);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a06e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e326 FUN_145b2e326 body=227 status=ok
// SIG undefined FUN_145b2e326(void)

longlong FUN_145b2e326(void)

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
  if (DAT_14c9a0798 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147089025;
    local_40 = &LAB_14591ed96;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x88;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusDataLayerSubsystem",&DAT_14c9a0798,&DAT_147089024);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0798;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e410 FUN_145b2e410 body=227 status=ok
// SIG undefined FUN_145b2e410(void)

longlong FUN_145b2e410(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a0a60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14708d1ff;
    local_40 = FUN_1462a25f6;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxNexus",L"NexusStyleSettings",&DAT_14c9a0a60,&DAT_14708d1fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a0a60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e4fa FUN_145b2e4fa body=227 status=ok
// SIG undefined FUN_145b2e4fa(void)

longlong FUN_145b2e4fa(void)

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
  if (DAT_14c9a2c28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14586263a;
    local_38 = &LAB_1470ac047;
    local_40 = &LAB_145bfdec8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsProviderCSV",&DAT_14c9a2c28,&DAT_1470ac046);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2c28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e5e4 FUN_145b2e5e4 body=227 status=ok
// SIG undefined FUN_145b2e5e4(void)

longlong FUN_145b2e5e4(void)

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
  if (DAT_14c9a2c40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14586263a;
    local_38 = &LAB_1470ac053;
    local_40 = &LAB_145c9d6de;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsProviderLog",&DAT_14c9a2c40,&DAT_1470ac052);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2c40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e6ce FUN_145b2e6ce body=227 status=ok
// SIG undefined FUN_145b2e6ce(void)

longlong FUN_145b2e6ce(void)

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
  if (DAT_14c9a2c58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14586263a;
    local_38 = &LAB_1470ac057;
    local_40 = &LAB_145ad41ac;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/GbxCore",L"GbxAnalyticsProviderDebug",&DAT_14c9a2c58,&DAT_1470ac056);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a2c58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e7b8 FUN_145b2e7b8 body=227 status=ok
// SIG undefined FUN_145b2e7b8(void)

longlong FUN_145b2e7b8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a45d0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_1470bc495;
    local_40 = FUN_14173ae26;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxAnimNotify_SetActorState",&DAT_14c9a45d0,&DAT_1470bc494)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a45d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e8a2 FUN_145b2e8a2 body=227 status=ok
// SIG undefined FUN_145b2e8a2(void)

longlong FUN_145b2e8a2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a4f98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a63462;
    local_38 = &LAB_1470c7a7d;
    local_40 = FUN_145cbc7ea;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxConstructEditorNexusObject",&DAT_14c9a4f98,
                  &DAT_1470c7a7c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4f98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2e98c FUN_145b2e98c body=227 status=ok
// SIG undefined FUN_145b2e98c(void)

longlong FUN_145b2e98c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5460 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470cc75d;
    local_40 = FUN_1462ad540;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxGraphNodeSettingsProvider",&DAT_14c9a5460,&DAT_1470cc75c
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5460;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ea76 FUN_145b2ea76 body=227 status=ok
// SIG undefined FUN_145b2ea76(void)

longlong FUN_145b2ea76(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a55a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1434b5846;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a64322;
    local_38 = &LAB_1470cc769;
    local_40 = FUN_1410fecc3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x240;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxMirrorDataTable",&DAT_14c9a55a8,&DAT_1470cc768);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a55a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2eb60 FUN_145b2eb60 body=227 status=ok
// SIG undefined FUN_145b2eb60(void)

longlong FUN_145b2eb60(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a58f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462aee9c;
    local_38 = &LAB_1470d1d6f;
    local_40 = FUN_1462aef30;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxBPSceneComponentResolver",&DAT_14c9a58f0,&DAT_1470d1d6e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a58f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ec4a FUN_145b2ec4a body=227 status=ok
// SIG undefined FUN_145b2ec4a(void)

longlong FUN_145b2ec4a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462aee9c;
    local_38 = &LAB_1470d1d73;
    local_40 = FUN_1462aef53;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxSceneComponentResolver_RootComponent",&DAT_14c9a5908,
                  &DAT_1470d1d72);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ed34 FUN_145b2ed34 body=227 status=ok
// SIG undefined FUN_145b2ed34(void)

longlong FUN_145b2ed34(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462aee9c;
    local_38 = &LAB_1470d1d77;
    local_40 = FUN_1462aefa5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxSceneComponentResolver_SkeletalMesh",&DAT_14c9a5920,
                  &DAT_1470d1d76);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ee1e FUN_145b2ee1e body=227 status=ok
// SIG undefined FUN_145b2ee1e(void)

longlong FUN_145b2ee1e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a5b20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b34458;
    local_38 = &LAB_1470d1da9;
    local_40 = FUN_1462af818;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxWorldBreadcrumbUserData",&DAT_14c9a5b20,&DAT_1470d1da8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a5b20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ef08 FUN_145b2ef08 body=227 status=ok
// SIG undefined FUN_145b2ef08(void)

longlong FUN_145b2ef08(void)

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
  if (DAT_14c9ab2a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_1470f4c0b;
    local_40 = &LAB_14582ca28;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"AnimNotify_ForwardDynamics",&DAT_14c9ab2a8,&DAT_1470f4c0a)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab2a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2eff2 FUN_145b2eff2 body=227 status=ok
// SIG undefined FUN_145b2eff2(void)

longlong FUN_145b2eff2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab2c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_1470f4c1b;
    local_40 = FUN_1462b1ec3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"AnimNotifyState_ForwardDynamics",&DAT_14c9ab2c0,
                  &DAT_1470f4c1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab2c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f0dc FUN_145b2f0dc body=227 status=ok
// SIG undefined FUN_145b2f0dc(void)

longlong FUN_145b2f0dc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab2d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4ce0c;
    local_38 = &LAB_1470f4c1f;
    local_40 = &LAB_145fcaf7b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6b0;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DCollisionRenderComponent",&DAT_14c9ab2d8,&DAT_1470f4c1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab2d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f1c6 FUN_145b2f1c6 body=227 status=ok
// SIG undefined FUN_145b2f1c6(void)

longlong FUN_145b2f1c6(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9ab2f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1470f4c23;
    local_40 = &LAB_145ccfb95;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f8;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"DCollisionRenderActor",&DAT_14c9ab2f0,&DAT_1470f4c22);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab2f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f2b0 FUN_145b2f2b0 body=227 status=ok
// SIG undefined FUN_145b2f2b0(void)

longlong FUN_145b2f2b0(void)

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
  if (DAT_14c9ab8d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1470f99a5;
    local_40 = &LAB_145c077d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/GbxPhysics",L"MinDoFStateMatchingAsset",&DAT_14c9ab8d8,&DAT_1470f99a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ab8d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f39a FUN_145b2f39a body=227 status=ok
// SIG undefined FUN_145b2f39a(void)

longlong FUN_145b2f39a(void)

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
  if (DAT_14c9ac428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141117124;
    local_38 = &LAB_14712abcb;
    local_40 = &LAB_146007bde;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Renderer",L"SparseVolumeTextureViewer",&DAT_14c9ac428,&DAT_14712abca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9ac428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f484 FUN_145b2f484 body=227 status=ok
// SIG undefined FUN_145b2f484(void)

longlong FUN_145b2f484(void)

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
  if (DAT_14caa13e0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e61e2;
    local_38 = &LAB_1474458fd;
    local_40 = &LAB_145cb02d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x4d8;
    FUN_14081cfa3(L"/Script/Foliage",L"FoliageType_Actor",&DAT_14caa13e0,&DAT_1474458fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa13e0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f56e FUN_145b2f56e body=227 status=ok
// SIG undefined FUN_145b2f56e(void)

longlong FUN_145b2f56e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1428 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140a4a3dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e3252;
    local_38 = &LAB_14744591f;
    local_40 = FUN_1417914d9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3f0;
    FUN_14081cfa3(L"/Script/Foliage",L"InstancedFoliageActor",&DAT_14caa1428,&DAT_14744591e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1428;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f658 FUN_145b2f658 body=227 status=ok
// SIG undefined FUN_145b2f658(void)

longlong FUN_145b2f658(void)

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
  if (DAT_14caa15a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140fe7df2;
    local_38 = &LAB_14744a241;
    local_40 = &LAB_145c80c38;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x460;
    FUN_14081cfa3(L"/Script/Foliage",L"ProceduralFoliageBlockingVolume",&DAT_14caa15a0,
                  &DAT_14744a240);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa15a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f742 FUN_145b2f742 body=227 status=ok
// SIG undefined FUN_145b2f742(void)

longlong FUN_145b2f742(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1698 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_14744f0e3;
    local_40 = FUN_1463221bc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeBrushRenderCallAdapter_GlobalMergeLegacySupport",
                  &DAT_14caa1698,&DAT_14744f0e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1698;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f82c FUN_145b2f82c body=227 status=ok
// SIG undefined FUN_145b2f82c(void)

longlong FUN_145b2f82c(void)

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
  if (DAT_14caa1868 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145892f94;
    local_38 = &LAB_14744f8b9;
    local_40 = &LAB_1459be180;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeLODStreamingProxy_DEPRECATED",&DAT_14caa1868,
                  &DAT_14744f8b8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1868;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2f916 FUN_145b2f916 body=227 status=ok
// SIG undefined FUN_145b2f916(void)

longlong FUN_145b2f916(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa18f0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e3516;
    local_38 = &LAB_14744fd0f;
    local_40 = FUN_146322bd4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeEditLayer",&DAT_14caa18f0,&DAT_14744fd0e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa18f0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2fa00 FUN_145b2fa00 body=227 status=ok
// SIG undefined FUN_145b2fa00(void)

longlong FUN_145b2fa00(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1908 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594a216;
    local_38 = &LAB_14744fd13;
    local_40 = FUN_146322c39;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeEditLayerProcedural",&DAT_14caa1908,&DAT_14744fd12
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1908;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2faea FUN_145b2faea body=227 status=ok
// SIG undefined FUN_145b2faea(void)

longlong FUN_145b2faea(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1920 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e3516;
    local_38 = &LAB_14744fd17;
    local_40 = FUN_146322c93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeEditLayerSplines",&DAT_14caa1920,&DAT_14744fd16);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1920;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2fbd4 FUN_145b2fbd4 body=227 status=ok
// SIG undefined FUN_145b2fbd4(void)

longlong FUN_145b2fbd4(void)

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
  if (DAT_14caa19b0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_14744fd2f;
    local_40 = &LAB_1458d69d7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeEditResourcesSubsystem",&DAT_14caa19b0,
                  &DAT_14744fd2e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa19b0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2fcbe FUN_145b2fcbe body=227 status=ok
// SIG undefined FUN_145b2fcbe(void)

longlong FUN_145b2fcbe(void)

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
  if (DAT_14caa1a28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a651e2;
    local_38 = &LAB_14744fd33;
    local_40 = &LAB_146118cdc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3e0;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeGizmoActiveActor",&DAT_14caa1a28,&DAT_14744fd32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1a28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2fda8 FUN_145b2fda8 body=227 status=ok
// SIG undefined FUN_145b2fda8(void)

longlong FUN_145b2fda8(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1b30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = &LAB_14587d9ba;
    local_28 = &LAB_14632357c;
    local_38 = &LAB_147451fc9;
    local_40 = &LAB_145d14794;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x730;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeMeshCollisionComponent",&DAT_14caa1b30,
                  &DAT_147451fc8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1b30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2fe92 FUN_145b2fe92 body=227 status=ok
// SIG undefined FUN_145b2fe92(void)

longlong FUN_145b2fe92(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1b48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147452019;
    local_40 = &LAB_1460dacbb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeMeshProxyActor",&DAT_14caa1b48,&DAT_147452018);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1b48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b2ff7c FUN_145b2ff7c body=227 status=ok
// SIG undefined FUN_145b2ff7c(void)

longlong FUN_145b2ff7c(void)

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
  if (DAT_14caa1b90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_147452021;
    local_40 = &LAB_145d70889;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSettings",&DAT_14caa1b90,&DAT_147452020);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1b90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30066 FUN_145b30066 body=227 status=ok
// SIG undefined FUN_145b30066(void)

longlong FUN_145b30066(void)

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
  if (DAT_14caa1d00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123569a;
    local_38 = &LAB_1474521e3;
    local_40 = &LAB_145c60b0b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeGrassOutput",&DAT_14caa1d00,
                  &DAT_1474521e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1d00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30150 FUN_145b30150 body=227 status=ok
// SIG undefined FUN_145b30150(void)

longlong FUN_145b30150(void)

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
  if (DAT_14caa1d48 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_1474521e7;
    local_40 = &LAB_145d1c953;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerBlend",&DAT_14caa1d48,
                  &DAT_1474521e6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1d48;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3023a FUN_145b3023a body=227 status=ok
// SIG undefined FUN_145b3023a(void)

longlong FUN_145b3023a(void)

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
  if (DAT_14caa1d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_14745225f;
    local_40 = &LAB_145d09120;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerCoords",&DAT_14caa1d90,
                  &DAT_14745225e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30324 FUN_145b30324 body=227 status=ok
// SIG undefined FUN_145b30324(void)

longlong FUN_145b30324(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa1dc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_1474533fd;
    local_40 = &LAB_146112c88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Landscape",L"ControlPointMeshActor",&DAT_14caa1dc8,&DAT_1474533fc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1dc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3040e FUN_145b3040e body=227 status=ok
// SIG undefined FUN_145b3040e(void)

longlong FUN_145b3040e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa6368 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14594a2fa;
    local_38 = &LAB_147461b49;
    local_40 = FUN_14595f40c;
    local_48 = L"Editor";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeHLODBuilder",&DAT_14caa6368,&DAT_147461b48);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa6368;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b304f8 FUN_145b304f8 body=227 status=ok
// SIG undefined FUN_145b304f8(void)

longlong FUN_145b304f8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa73f8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_14746e09b;
    local_40 = FUN_140d2fae9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a8;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSplineActor",&DAT_14caa73f8,&DAT_14746e09a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa73f8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b305e2 FUN_145b305e2 body=227 status=ok
// SIG undefined FUN_145b305e2(void)

longlong FUN_145b305e2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7410 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145920864;
    local_38 = &LAB_14746e139;
    local_40 = FUN_14632615d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x3a0;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeSplineMeshesActor",&DAT_14caa7410,&DAT_14746e138);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7410;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b306cc FUN_145b306cc body=227 status=ok
// SIG undefined FUN_145b306cc(void)

longlong FUN_145b306cc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7b00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1463267c8;
    local_38 = &LAB_1474732e9;
    local_40 = FUN_145c10e52;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeTextureStorageProviderFactory",&DAT_14caa7b00,
                  &DAT_1474732e8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7b00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b307b6 FUN_145b307b6 body=227 status=ok
// SIG undefined FUN_145b307b6(void)

longlong FUN_145b307b6(void)

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
  if (DAT_14caa7b58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_14747439f;
    local_40 = &LAB_145d1f678;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSample",&DAT_14caa7b58,
                  &DAT_14747439e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7b58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b308a0 FUN_145b308a0 body=227 status=ok
// SIG undefined FUN_145b308a0(void)

longlong FUN_145b308a0(void)

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
  if (DAT_14caa7b88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147474425;
    local_40 = &LAB_145dbd0c0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerSwitch",&DAT_14caa7b88,
                  &DAT_147474424);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7b88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3098a FUN_145b3098a body=227 status=ok
// SIG undefined FUN_145b3098a(void)

longlong FUN_145b3098a(void)

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
  if (DAT_14caa7bb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_14747464d;
    local_40 = &LAB_145e036be;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeLayerWeight",&DAT_14caa7bb8,
                  &DAT_14747464c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7bb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30a74 FUN_145b30a74 body=227 status=ok
// SIG undefined FUN_145b30a74(void)

longlong FUN_145b30a74(void)

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
  if (DAT_14caa7c00 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14123569a;
    local_38 = &LAB_147474733;
    local_40 = &LAB_145d1c9db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapePhysicalMaterialOutput",
                  &DAT_14caa7c00,&DAT_147474732);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7c00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30b5e FUN_145b30b5e body=227 status=ok
// SIG undefined FUN_145b30b5e(void)

longlong FUN_145b30b5e(void)

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
  if (DAT_14caa7c30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140d4fe26;
    local_38 = &LAB_147474737;
    local_40 = &LAB_145d0919f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000010;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Landscape",L"MaterialExpressionLandscapeVisibilityMask",&DAT_14caa7c30,
                  &DAT_147474736);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7c30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30c48 FUN_145b30c48 body=227 status=ok
// SIG undefined FUN_145b30c48(void)

longlong FUN_145b30c48(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7ec8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_14747977b;
    local_40 = FUN_1463277f1;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyTagsMatch",
                  &DAT_14caa7ec8,&DAT_14747977a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7ec8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30d32 FUN_145b30d32 body=227 status=ok
// SIG undefined FUN_145b30d32(void)

longlong FUN_145b30d32(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7ee0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_14747977f;
    local_40 = FUN_14632784e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllTagsMatch",
                  &DAT_14caa7ee0,&DAT_14747977e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7ee0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30e1c FUN_145b30e1c body=227 status=ok
// SIG undefined FUN_145b30e1c(void)

longlong FUN_145b30e1c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7ef8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_147479783;
    local_40 = FUN_1463278ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoTagsMatch",
                  &DAT_14caa7ef8,&DAT_147479782);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7ef8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30f06 FUN_145b30f06 body=227 status=ok
// SIG undefined FUN_145b30f06(void)

longlong FUN_145b30f06(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7f10 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_147479787;
    local_40 = FUN_146327908;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AnyExprMatch",
                  &DAT_14caa7f10,&DAT_147479786);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7f10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b30ff0 FUN_145b30ff0 body=227 status=ok
// SIG undefined FUN_145b30ff0(void)

longlong FUN_145b30ff0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7f28 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_14747978b;
    local_40 = FUN_146327961;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_AllExprMatch",
                  &DAT_14caa7f28,&DAT_14747978a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7f28;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b310da FUN_145b310da body=227 status=ok
// SIG undefined FUN_145b310da(void)

longlong FUN_145b310da(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa7f40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145850cd6;
    local_38 = &LAB_14747978f;
    local_40 = FUN_1463279ba;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/GameplayTags",L"EditableGameplayTagQueryExpression_NoExprMatch",
                  &DAT_14caa7f40,&DAT_14747978e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa7f40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b311c4 FUN_145b311c4 body=227 status=ok
// SIG undefined FUN_145b311c4(void)

longlong FUN_145b311c4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa84d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14747bca7;
    local_40 = FUN_1463283a3;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/GameplayTags",L"GameplayTagsDeveloperSettings",&DAT_14caa84d8,
                  &DAT_14747bca6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa84d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b312ae FUN_145b312ae body=227 status=ok
// SIG undefined FUN_145b312ae(void)

longlong FUN_145b312ae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8640 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1459816fa;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a6567e;
    local_38 = &LAB_14747eaff;
    local_40 = FUN_146328b66;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/DataflowEngine",L"DataflowSkeletalContent",&DAT_14caa8640,&DAT_14747eafe
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8640;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31398 FUN_145b31398 body=227 status=ok
// SIG undefined FUN_145b31398(void)

longlong FUN_145b31398(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146328fb8;
    local_38 = &LAB_1474804f3;
    local_40 = FUN_146328fbd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowCollisionObjectInterface",&DAT_14caa8718,
                  &DAT_1474804f2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31482 FUN_145b31482 body=227 status=ok
// SIG undefined FUN_145b31482(void)

longlong FUN_145b31482(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8748 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146328fb8;
    local_38 = &LAB_1474804f7;
    local_40 = FUN_1463290d6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowConstraintObjectInterface",&DAT_14caa8748,
                  &DAT_1474804f6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8748;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3156c FUN_145b3156c body=227 status=ok
// SIG undefined FUN_145b3156c(void)

longlong FUN_145b3156c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8760 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1474804fb;
    local_40 = FUN_146329128;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowGeometryCachable",&DAT_14caa8760,
                  &DAT_1474804fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31656 FUN_145b31656 body=227 status=ok
// SIG undefined FUN_145b31656(void)

longlong FUN_145b31656(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8790 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146328fb8;
    local_38 = &LAB_1474804ff;
    local_40 = FUN_146329210;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/DataflowSimulation",L"DataflowPhysicsObjectInterface",&DAT_14caa8790,
                  &DAT_1474804fe);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8790;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31740 FUN_145b31740 body=227 status=ok
// SIG undefined FUN_145b31740(void)

longlong FUN_145b31740(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa89e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_1474898c3;
    local_40 = FUN_14632a09d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosDebugDrawSubsystem",&DAT_14caa89e8,
                  &DAT_1474898c2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa89e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3182a FUN_145b3182a body=227 status=ok
// SIG undefined FUN_145b3182a(void)

longlong FUN_145b3182a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa8bf8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_14748ac2f;
    local_40 = FUN_14632a948;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x60;
    FUN_14081cfa3(L"/Script/ChaosSolverEngine",L"ChaosSolverSettings",&DAT_14caa8bf8,&DAT_14748ac2e)
    ;
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa8bf8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31914 FUN_145b31914 body=227 status=ok
// SIG undefined FUN_145b31914(void)

longlong FUN_145b31914(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa9098 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147494493;
    local_40 = FUN_14632c7d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GeometryCollectionEngine",L"GeometryCollectionCustomDataInterface",
                  &DAT_14caa9098,&DAT_147494492);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa9098;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b319fe FUN_145b319fe body=227 status=ok
// SIG undefined FUN_145b319fe(void)

longlong FUN_145b319fe(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caaadb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14105c5ba;
    local_38 = &LAB_1474db581;
    local_40 = FUN_146332538;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotify",&DAT_14caaadb0,
                  &DAT_1474db580);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caaadb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31ae8 FUN_145b31ae8 body=227 status=ok
// SIG undefined FUN_145b31ae8(void)

longlong FUN_145b31ae8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caaadc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141116c3a;
    local_38 = &LAB_1474db585;
    local_40 = FUN_146332596;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/AnimGraphRuntime",L"AnimNotify_PlayMontageNotifyWindow",&DAT_14caaadc8,
                  &DAT_1474db584);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caaadc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31bd2 FUN_145b31bd2 body=227 status=ok
// SIG undefined FUN_145b31bd2(void)

longlong FUN_145b31bd2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caabc40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633649e;
    local_38 = &LAB_14750bc3d;
    local_40 = FUN_1463364a3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/SlateRHIRenderer",L"SlatePostBufferBlur",&DAT_14caabc40,&DAT_14750bc3c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caabc40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31cbc FUN_145b31cbc body=227 status=ok
// SIG undefined FUN_145b31cbc(void)

longlong FUN_145b31cbc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab1888 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459e3d62;
    local_38 = &LAB_14751703d;
    local_40 = FUN_146337faf;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/TimeManagement",L"GenlockedFixedRateCustomTimeStep",&DAT_14cab1888,
                  &DAT_14751703c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1888;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31da6 FUN_145b31da6 body=227 status=ok
// SIG undefined FUN_145b31da6(void)

longlong FUN_145b31da6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab18a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458e648e;
    local_38 = &LAB_1475172f9;
    local_40 = FUN_1459e1583;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/TimeManagement",L"GenlockedTimecodeProvider",&DAT_14cab18a0,
                  &DAT_1475172f8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab18a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31e90 FUN_145b31e90 body=227 status=ok
// SIG undefined FUN_145b31e90(void)

longlong FUN_145b31e90(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab1e60 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_147520301;
    local_40 = FUN_14633977d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneKeyProxy",&DAT_14cab1e60,&DAT_147520300);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1e60;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b31f7a FUN_145b31f7a body=227 status=ok
// SIG undefined FUN_145b31f7a(void)

longlong FUN_145b31f7a(void)

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
  if (DAT_14cab1ef0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145957656;
    local_38 = &LAB_147520309;
    local_40 = &LAB_145f109e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x1b0;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieScenePlayRateCurve",&DAT_14cab1ef0,&DAT_147520308);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab1ef0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32064 FUN_145b32064 body=227 status=ok
// SIG undefined FUN_145b32064(void)

longlong FUN_145b32064(void)

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
  if (DAT_14cab20d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145957656;
    local_38 = &LAB_147523233;
    local_40 = &LAB_1459a1db6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTimeWarpCurve",&DAT_14cab20d8,&DAT_147523232);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab20d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3214e FUN_145b3214e body=227 status=ok
// SIG undefined FUN_145b3214e(void)

longlong FUN_145b3214e(void)

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
  if (DAT_14cab2108 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_147523241;
    local_40 = &LAB_145c7b6db;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTimeWarpSection",&DAT_14cab2108,&DAT_147523240);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2108;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32238 FUN_145b32238 body=227 status=ok
// SIG undefined FUN_145b32238(void)

longlong FUN_145b32238(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab2d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147553311;
    local_40 = FUN_14633d222;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneTrackInstanceSystem",&DAT_14cab2d90,
                  &DAT_147553310);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab2d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32322 FUN_145b32322 body=227 status=ok
// SIG undefined FUN_145b32322(void)

longlong FUN_145b32322(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3e40 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_14758504d;
    local_40 = FUN_146342fec;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x100;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBindingLifetimeSection",&DAT_14cab3e40,
                  &DAT_14758504c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3e40;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3240c FUN_145b3240c body=227 status=ok
// SIG undefined FUN_145b3240c(void)

longlong FUN_145b3240c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3e88 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146343054;
    local_38 = &LAB_14758547b;
    local_40 = FUN_140aec372;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x210;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSpawnSection",&DAT_14cab3e88,&DAT_14758547a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3e88;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b324f6 FUN_145b324f6 body=227 status=ok
// SIG undefined FUN_145b324f6(void)

longlong FUN_145b324f6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_147586acd;
    local_40 = FUN_146343322;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneTrack",&DAT_14cab3f08,&DAT_147586acc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b325e0 FUN_145b325e0 body=227 status=ok
// SIG undefined FUN_145b325e0(void)

longlong FUN_145b325e0(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_147586ad9;
    local_40 = FUN_14634338c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xf8;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneSection",&DAT_14cab3f20,&DAT_147586ad8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b326ca FUN_145b326ca body=227 status=ok
// SIG undefined FUN_145b326ca(void)

longlong FUN_145b326ca(void)

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
  if (DAT_14cab3f38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146340e96;
    local_38 = &LAB_147586add;
    local_40 = &LAB_145ec16fc;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneSequence",&DAT_14cab3f38,&DAT_147586adc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b327b4 FUN_145b327b4 body=227 status=ok
// SIG undefined FUN_145b327b4(void)

longlong FUN_145b327b4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14634340e;
    local_38 = &LAB_147586ae1;
    local_40 = FUN_146343413;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneSubTrack",&DAT_14cab3f50,&DAT_147586ae0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3289e FUN_145b3289e body=227 status=ok
// SIG undefined FUN_145b3289e(void)

longlong FUN_145b3289e(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f68 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146343276;
    local_38 = &LAB_147586ae5;
    local_40 = FUN_1463434cd;
    local_48 = L"EditorPerProjectUserSettings";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x7e0;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneSubSection",&DAT_14cab3f68,&DAT_147586ae4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f68;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32988 FUN_145b32988 body=227 status=ok
// SIG undefined FUN_145b32988(void)

longlong FUN_145b32988(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f80 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_147586ae9;
    local_40 = FUN_14634352d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x108;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneEvalHookTrack",&DAT_14cab3f80,&DAT_147586ae8
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f80;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32a72 FUN_145b32a72 body=227 status=ok
// SIG undefined FUN_145b32a72(void)

longlong FUN_145b32a72(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3f98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458bb92c;
    local_38 = &LAB_147586aed;
    local_40 = FUN_146343589;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/MovieScene",L"TestMovieSceneEvalHookSection",&DAT_14cab3f98,
                  &DAT_147586aec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3f98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32b5c FUN_145b32b5c body=227 status=ok
// SIG undefined FUN_145b32b5c(void)

longlong FUN_145b32b5c(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3fb0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_14758707f;
    local_40 = FUN_14634361d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x110;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneBindingLifetimeTrack",&DAT_14cab3fb0,
                  &DAT_14758707e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3fb0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32c46 FUN_145b32c46 body=227 status=ok
// SIG undefined FUN_145b32c46(void)

longlong FUN_145b32c46(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab3fc8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14633a98e;
    local_38 = &LAB_147587eab;
    local_40 = FUN_14179fda4;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneSpawnTrack",&DAT_14cab3fc8,&DAT_147587eaa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab3fc8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32d30 FUN_145b32d30 body=227 status=ok
// SIG undefined FUN_145b32d30(void)

longlong FUN_145b32d30(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4090 == 0) {
    local_30 = &local_10;
    local_10 = FUN_141030f22;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b4754c;
    local_38 = &LAB_147591e45;
    local_40 = FUN_146343dc6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x398;
    FUN_14081cfa3(L"/Script/Constraints",L"ConstraintsActor",&DAT_14cab4090,&DAT_147591e44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4090;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32e1a FUN_145b32e1a body=227 status=ok
// SIG undefined FUN_145b32e1a(void)

longlong FUN_145b32e1a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4358 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458989b8;
    local_38 = &LAB_147596a13;
    local_40 = FUN_146344502;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableTranslationConstraint",&DAT_14cab4358,
                  &DAT_147596a12);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4358;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32f04 FUN_145b32f04 body=227 status=ok
// SIG undefined FUN_145b32f04(void)

longlong FUN_145b32f04(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4370 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458989b8;
    local_38 = &LAB_147596a17;
    local_40 = FUN_14634458e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableRotationConstraint",&DAT_14cab4370,&DAT_147596a16
                 );
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4370;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b32fee FUN_145b32fee body=227 status=ok
// SIG undefined FUN_145b32fee(void)

longlong FUN_145b32fee(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4388 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458989b8;
    local_38 = &LAB_147596a1b;
    local_40 = FUN_14634461a;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xd8;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableScaleConstraint",&DAT_14cab4388,&DAT_147596a1a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4388;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b330d8 FUN_145b330d8 body=227 status=ok
// SIG undefined FUN_145b330d8(void)

longlong FUN_145b330d8(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab43a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458989b8;
    local_38 = &LAB_147596a1f;
    local_40 = FUN_1463446a6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0x130;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableParentConstraint",&DAT_14cab43a0,&DAT_147596a1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab43a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b331c2 FUN_145b331c2 body=227 status=ok
// SIG undefined FUN_145b331c2(void)

longlong FUN_145b331c2(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab43b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458989b8;
    local_38 = &LAB_147596a2b;
    local_40 = FUN_14634473f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 200;
    FUN_14081cfa3(L"/Script/Constraints",L"TickableLookAtConstraint",&DAT_14cab43b8,&DAT_147596a2a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab43b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b332ac FUN_145b332ac body=227 status=ok
// SIG undefined FUN_145b332ac(void)

longlong FUN_145b332ac(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587daac;
    local_38 = &LAB_1475a1f4f;
    local_40 = FUN_14591518e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneDirectorBlueprintCondition",&DAT_14cab4648
                  ,&DAT_1475a1f4e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33396 FUN_145b33396 body=227 status=ok
// SIG undefined FUN_145b33396(void)

longlong FUN_145b33396(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab46a0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587daac;
    local_38 = &LAB_1475a1f57;
    local_40 = FUN_146345127;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x70;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScenePlatformCondition",&DAT_14cab46a0,
                  &DAT_1475a1f56);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab46a0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33480 FUN_145b33480 body=227 status=ok
// SIG undefined FUN_145b33480(void)

longlong FUN_145b33480(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab46b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145990436;
    local_38 = &LAB_1475a1f5b;
    local_40 = FUN_1458c8b15;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneReplaceableActorBinding",&DAT_14cab46b8,
                  &DAT_1475a1f5a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab46b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3356a FUN_145b3356a body=227 status=ok
// SIG undefined FUN_145b3356a(void)

longlong FUN_145b3356a(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4718 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145990436;
    local_38 = &LAB_1475a21a5;
    local_40 = FUN_1463452c2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneReplaceableDirectorBlueprintBinding",
                  &DAT_14cab4718,&DAT_1475a21a4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4718;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33654 FUN_145b33654 body=227 status=ok
// SIG undefined FUN_145b33654(void)

longlong FUN_145b33654(void)

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
  if (DAT_14cab4730 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14120a94e;
    local_38 = &LAB_1475a21a9;
    local_40 = &LAB_146123d1d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneRotatorPropertySystem",&DAT_14cab4730,
                  &DAT_1475a21a8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4730;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b3373e FUN_145b3373e body=227 status=ok
// SIG undefined FUN_145b3373e(void)

longlong FUN_145b3373e(void)

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
  if (DAT_14cab4748 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14179c8d4;
    local_38 = &LAB_1475a21ad;
    local_40 = &LAB_145b24a46;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x448;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneRotatorSection",&DAT_14cab4748,
                  &DAT_1475a21ac);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4748;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33828 FUN_145b33828 body=227 status=ok
// SIG undefined FUN_145b33828(void)

longlong FUN_145b33828(void)

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
  if (DAT_14cab4760 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1417a00b8;
    local_38 = &LAB_1475a21b1;
    local_40 = &LAB_145b086ab;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x128;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneRotatorTrack",&DAT_14cab4760,
                  &DAT_1475a21b0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4760;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33912 FUN_145b33912 body=227 status=ok
// SIG undefined FUN_145b33912(void)

longlong FUN_145b33912(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab47c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14587daac;
    local_38 = &LAB_1475a21b5;
    local_40 = FUN_14634543d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneScalabilityCondition",&DAT_14cab47c0,
                  &DAT_1475a21b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab47c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b339fc FUN_145b339fc body=227 status=ok
// SIG undefined FUN_145b339fc(void)

longlong FUN_145b339fc(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4808 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1458f06e0;
    local_38 = &LAB_1475a21c7;
    local_40 = FUN_146345522;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x58;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneSpawnableDirectorBlueprintBinding",
                  &DAT_14cab4808,&DAT_1475a21c6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4808;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33ae6 FUN_145b33ae6 body=227 status=ok
// SIG undefined FUN_145b33ae6(void)

longlong FUN_145b33ae6(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4820 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146340e96;
    local_38 = &LAB_1475a21cb;
    local_40 = FUN_14634558d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneTestSequence",&DAT_14cab4820,
                  &DAT_1475a21ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4820;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33bd0 FUN_145b33bd0 body=227 status=ok
// SIG undefined FUN_145b33bd0(void)

longlong FUN_145b33bd0(void)

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
  if (DAT_14cab48a8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145957742;
    local_38 = &LAB_1475a3ad1;
    local_40 = &LAB_14582bef9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneDoublePerlinNoiseChannelContainer",
                  &DAT_14cab48a8,&DAT_1475a3ad0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab48a8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33cba FUN_145b33cba body=227 status=ok
// SIG undefined FUN_145b33cba(void)

longlong FUN_145b33cba(void)

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
  if (DAT_14cab4938 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145957742;
    local_38 = &LAB_1475a46cd;
    local_40 = &LAB_145ccfc17;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieSceneFloatPerlinNoiseChannelContainer",
                  &DAT_14cab4938,&DAT_1475a46cc);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4938;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 145b33da4 FUN_145b33da4 body=227 status=ok
// SIG undefined FUN_145b33da4(void)

longlong FUN_145b33da4(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  wchar_t *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cab4bb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459907e4;
    local_38 = &LAB_1475b9b45;
    local_40 = FUN_1417a0aca;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x140;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"MovieScene3DAttachSection",&DAT_14cab4bb8,
                  &DAT_1475b9b44);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab4bb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


