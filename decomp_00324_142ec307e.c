// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142ec307e FUN_142ec307e body=576 status=ok
// SIG undefined FUN_142ec307e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ec307e(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2bb58) {
    FUN_144b3d300(&DAT_14ca2bb58);
    if (DAT_14ca2bb58 == -1) {
      FUN_142ee2862();
      if ((DAT_14ca2bc4f & 2) == 0) {
        DAT_14ca2bc4f = DAT_14ca2bc4f | 2;
        _DAT_14ca2bbf0 = L"FHistogramAtomicConvertCS";
        _DAT_14ca2bc08 = FUN_146826540;
        _DAT_14ca2bc10 = FUN_146825d77;
        _DAT_14ca2bc18 = FUN_146825fd6;
        _DAT_14ca2bc20 = FUN_1407e02ea;
        _DAT_14ca2bc28 = FUN_146826273;
        _DAT_14ca2bc00 = FUN_142ee2cd8;
        _DAT_14ca2bc40 = 0xffffffff000000e0;
        _DAT_14ca2bc48 = 8;
        DAT_14ca2bc4c = 0;
        _DAT_14ca2bc30 = &LAB_142ee2d04;
        _DAT_14ca2bc50 = L"BASE";
        DAT_14ca2bc7a = 4;
        _DAT_14ca2bc58 = FUN_140b35ae4();
        _DAT_14ca2bc60 = DAT_14ca2bbf8;
        _DAT_14ca2bc68 = &LAB_14682652b;
        DAT_14ca2bbf8 = &DAT_14ca2bc50;
        DAT_14ca2bc4d = DAT_14ca2bc4d + '\x01';
        _DAT_14ca2bc70 = 0x100000000;
        if (*(char *)(_DAT_14ca2bc58 + 100) != '\0') {
          DAT_14ca2bc4e = DAT_14ca2bc4e + '\x01';
        }
        FUN_1407e00cc(&DAT_14ca2bbe8);
      }
      FUN_140db5666(&DAT_14ca2bab0,0,&DAT_14ca2bbe8,L"FHistogramAtomicConvertCS",
                    L"/Engine/Private/Histogram.usf",L"HistogramConvertCS",5,1,FUN_142ee27cc,
                    FUN_142ee276c,&LAB_142ee2754,&LAB_142ee2750,&LAB_14712ac0c,&LAB_14712ac08,0xe0,
                    &DAT_14ca2bb60);
      _DAT_14ca2bab0 = FGlobalShaderType::vftable;
      atexit((_func_5014 *)&LAB_142ee2856);
      _Init_thread_footer(&DAT_14ca2bb58);
    }
  }
  return &DAT_14ca2bab0;
}



// FUNCTION 142ec32be FUN_142ec32be body=137 status=ok
// SIG undefined FUN_142ec32be(void)

undefined4 * FUN_142ec32be(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *param_3;
  bVar2 = param_3[1];
  bVar3 = param_3[2];
  bVar4 = param_3[3];
  FUN_142ec29be();
  FUN_1448e935e(param_1,&local_38,&DAT_14ca2b540,
                (uint)bVar1 + (uint)bVar2 * 2 + (uint)bVar3 * 4 + (uint)bVar4 * 8);
  FUN_142ec29be();
  *param_2 = local_38;
  param_2[1] = uStack_34;
  param_2[2] = uStack_30;
  param_2[3] = uStack_2c;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ec3348 FUN_142ec3348 body=47 status=ok
// SIG undefined FUN_142ec3348(void)

void FUN_142ec3348(void)

{
  DAT_14ca27b10 = &PTR_FUN_14a2bb0c0;
  FUN_144725486(&DAT_14ca27b10);
  FUN_1462fb1fc(&DAT_14ca27b10);
  return;
}



// FUNCTION 142ec338f FUN_142ec338f body=1094 status=ok
// SIG undefined FUN_142ec338f(void)

void FUN_142ec338f(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 uVar14;
  undefined1 auStack_f8 [32];
  wchar_t *local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  longlong *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong local_60;
  undefined *local_58;
  undefined1 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  puVar11 = (undefined8 *)*param_4;
  local_c0 = param_3;
  local_a8 = param_1;
  if (puVar11 != (undefined8 *)0x0) {
    local_c8 = param_4[1];
    local_d0 = param_4[2];
    if (local_d0 != local_c8) {
      uVar14 = (undefined1)param_4[3];
      goto LAB_142ec3440;
    }
  }
  local_80 = param_4[4];
  local_78 = param_4[5];
  local_70 = param_4[6];
  local_d8 = L"HMD Distortion";
  FUN_143017cc0(&local_68,param_2,&local_80,2);
  local_c8 = local_60;
  local_d0 = (longlong)local_58;
  puVar11 = local_68;
  uVar14 = local_50;
LAB_142ec3440:
  puVar1 = (ulonglong *)(param_2 + 0x70);
  puVar12 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar8 = puVar12 + 0x26;
  if (*(undefined8 **)(param_2 + 0x78) < puVar8) {
    FUN_140023dd8(puVar1,0x140);
    puVar12 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar8 = puVar12 + 0x26;
  }
  *puVar1 = (ulonglong)puVar8;
  *puVar12 = &PTR_FUN_14a2bb120;
  local_b8 = puVar12 + 2;
  *(undefined1 (*) [16])(puVar12 + 2) = (undefined1  [16])0x0;
  lVar9 = 0x42;
  do {
    *(undefined1 (*) [16])((longlong)puVar12 + lVar9 + -0x12) = (undefined1  [16])0x0;
    *(undefined4 *)((longlong)puVar12 + lVar9 + -2) = 0xffff0000;
    lVar9 = lVar9 + 0x18;
  } while (lVar9 != 0x102);
  *(undefined4 *)((longlong)puVar12 + 0x104) = 0;
  *(undefined1 (*) [16])(puVar12 + 0x1e) = (undefined1  [16])0x0;
  *(undefined2 *)(puVar12 + 0x20) = 0;
  *(undefined4 *)(puVar12 + 0x21) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x10c) = 0xffffffff;
  *(undefined4 *)(puVar12 + 0x22) = 0xffffffff;
  *(undefined4 *)((longlong)puVar12 + 0x114) = 0xffffffff;
  *(undefined4 *)(puVar12 + 0x23) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x11c) = 0;
  puVar12[0x24] = 0;
  iVar2 = *(int *)(param_2 + 0xa0);
  *(uint *)(param_2 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_2 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x98) + (longlong)iVar2 * 8) = puVar12;
  puVar12[6] = puVar11;
  puVar12[7] = 0;
  *(undefined1 *)(puVar12 + 8) = uVar14;
  *(undefined1 *)((longlong)puVar12 + 0x41) = 0;
  *(undefined2 *)((longlong)puVar12 + 0x42) = 0xffff;
  puVar12[2] = param_4[4];
  puVar12[3] = DAT_14ca2c398;
  local_b0 = puVar11;
  plVar10 = (longlong *)(**(code **)(**(longlong **)(DAT_14cb0d2b0 + 0xfe0) + 0x120))();
  lVar9 = local_c0;
  local_68 = *(undefined8 **)(param_2 + 0x18);
  local_60 = local_c0;
  (**(code **)(*plVar10 + 0x80))(plVar10,&local_68,&local_90,&local_a0);
  *(float *)(puVar12 + 4) = (float)local_90;
  *(float *)((longlong)puVar12 + 0x24) = (float)local_88;
  *(float *)(puVar12 + 5) = (float)local_a0;
  *(float *)((longlong)puVar12 + 0x2c) = (float)local_98;
  uVar3 = *(undefined8 *)(lVar9 + 0x13818);
  FUN_146095c46();
  FUN_1448e935e(uVar3,&local_68,&DAT_14ca27cb8,0);
  FUN_146095c46();
  lVar7 = local_60;
  puVar8 = local_68;
  uVar3 = *(undefined8 *)(lVar9 + 0x13818);
  FUN_145dd4eec();
  FUN_1448e935e(uVar3,&local_68,&DAT_14ca27b90,0);
  FUN_145dd4eec();
  lVar9 = local_60;
  puVar12 = local_68;
  FUN_145dd5010();
  FUN_140069376(param_2);
  puVar13 = (undefined8 *)(*(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar11 = puVar13 + 0x40;
  if (*(undefined8 **)(param_2 + 0x78) < puVar11) {
    FUN_140023dd8(puVar1,0x208);
    puVar13 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar11 = puVar13 + 0x40;
  }
  puVar6 = local_b8;
  *puVar1 = (ulonglong)puVar11;
  local_68 = local_b8;
  local_60 = DAT_14ca2bcc8;
  if (DAT_14ca2bcc8 != 0) {
    LOCK();
    *(int *)(DAT_14ca2bcc8 + 8) = *(int *)(DAT_14ca2bcc8 + 8) + 1;
    UNLOCK();
  }
  local_58 = &DAT_14ca2bc80;
  local_d8 = (wchar_t *)((ulonglong)local_d8 & 0xffffffffffffff00);
  FUN_140068f1a(puVar13,&local_90,&local_68,1);
  lVar5 = local_c8;
  lVar4 = local_d0;
  *puVar13 = &PTR_FUN_14a2bb130;
  puVar13[0x37] = puVar8;
  puVar13[0x38] = lVar7;
  puVar13[0x39] = puVar12;
  puVar13[0x3a] = lVar9;
  puVar13[0x3b] = puVar6;
  puVar13[0x3c] = local_c8;
  puVar13[0x3d] = local_d0;
  puVar13[0x3e] = local_c0;
  puVar13[0x3f] = plVar10;
  iVar2 = *(int *)(param_2 + 0x170);
  *(uint *)(param_2 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_2 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_2 + 0x168) + (longlong)iVar2 * 8) = puVar13;
  *(int *)((longlong)puVar13 + 0x2c) = *(int *)(param_2 + 0x170) + -1;
  FUN_140069100(param_2,puVar13);
  *local_a8 = (longlong)local_b0;
  local_a8[1] = lVar5;
  local_a8[2] = lVar4;
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ec37d6 FUN_142ec37d6 body=69 status=ok
// SIG undefined FUN_142ec37d6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec37d6(void)

{
  _DAT_14ca27d78 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec3818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27d80,1);
  return;
}



// FUNCTION 142ec381b FUN_142ec381b body=69 status=ok
// SIG undefined FUN_142ec381b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec381b(void)

{
  _DAT_14ca27d90 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec385d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27d98,1);
  return;
}



// FUNCTION 142ec3860 FUN_142ec3860 body=69 status=ok
// SIG undefined FUN_142ec3860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec3860(void)

{
  _DAT_14ca27da8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec38a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27db0,1);
  return;
}



// FUNCTION 142ec38a5 FUN_142ec38a5 body=69 status=ok
// SIG undefined FUN_142ec38a5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec38a5(void)

{
  _DAT_14ca27dc0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec38e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27dc8,1);
  return;
}



// FUNCTION 142ec38ea FUN_142ec38ea body=69 status=ok
// SIG undefined FUN_142ec38ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec38ea(void)

{
  _DAT_14ca27dd8 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec392c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27de0,1);
  return;
}



// FUNCTION 142ec392f FUN_142ec392f body=69 status=ok
// SIG undefined FUN_142ec392f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec392f(void)

{
  _DAT_14ca27df0 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec3971. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27df8,1);
  return;
}



// FUNCTION 142ec3974 FUN_142ec3974 body=69 status=ok
// SIG undefined FUN_142ec3974(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec3974(void)

{
  _DAT_14ca27e08 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec39b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27e10,1);
  return;
}



// FUNCTION 142ec39b9 FUN_142ec39b9 body=69 status=ok
// SIG undefined FUN_142ec39b9(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ec39b9(void)

{
  _DAT_14ca27e20 = FAutoConsoleObject::vftable;
  if (DAT_14c8407a8 == (longlong *)0x0) {
    FUN_1414b00ea();
  }
                    /* WARNING: Could not recover jumptable at 0x000142ec39fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_14c8407a8 + 0xc0))(DAT_14c8407a8,DAT_14ca27e28,1);
  return;
}



// FUNCTION 142ec39fe FUN_142ec39fe body=1600 status=ok
// SIG undefined FUN_142ec39fe(void)

undefined8 * FUN_142ec39fe(undefined8 *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int *piVar1;
  char *pcVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 **local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  int local_f8;
  int local_f4;
  float local_f0;
  float local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulonglong local_98;
  longlong *plStack_90;
  undefined8 *local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 local_68;
  undefined1 *local_64;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined2 local_55;
  undefined1 local_53;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  plVar6 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x188);
  lVar9 = (**(code **)(*plVar6 + 8))(plVar6);
  local_98 = 0;
  plStack_90 = (longlong *)0x0;
  local_100 = DAT_14c967818;
  fVar16 = *(float *)(*(longlong *)(param_3 + 8) + 0x110);
  fVar15 = (float)(*(int *)(param_3 + 0x4e4) - *(int *)(param_3 + 0x4dc)) * fVar16 *
           *(float *)(param_3 + 0x45c);
  fVar16 = (float)(*(int *)(param_3 + 0x4e0) - *(int *)(param_3 + 0x4d8)) * fVar16 *
           *(float *)(param_3 + 0x45c);
  local_f4 = -((int)ROUND(-0.5 - (fVar15 + fVar15)) >> 1);
  local_f8 = -((int)ROUND(-0.5 - (fVar16 + fVar16)) >> 1);
  local_ec = (float)*(double *)(param_3 + 0x125a8);
  local_f0 = (float)*(double *)(param_3 + 0x125a0);
  local_e8 = *(undefined4 *)(param_3 + 0x13694);
  local_e0 = *(undefined8 *)(param_4 + 8);
  local_d8 = *(undefined8 *)(param_4 + 0x10);
  local_d0 = *(undefined8 *)(param_4 + 0x18);
  local_c8 = *(undefined8 *)(param_4 + 0x20);
  local_c0 = *(undefined8 *)(param_4 + 0x28);
  local_b8 = *(undefined8 *)(param_4 + 0x30);
  local_b0 = *(undefined8 *)(param_4 + 0x50);
  local_a8 = *(undefined8 *)(param_4 + 0x58);
  local_a0 = *(undefined8 *)(param_4 + 0x60);
  local_70 = DAT_14ca85098;
  uStack_80 = DAT_14ca85088;
  uStack_7c = DAT_14ca8508c;
  uStack_78 = DAT_14ca85090;
  uStack_74 = DAT_14ca85094;
  uStack_6c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  local_56 = 0;
  local_88 = (undefined8 *)&DAT_00020008;
  local_55 = 1;
  local_5c = 0x10001;
  local_58 = 0x101;
  local_68 = 0;
  local_53 = 0xff;
  local_64 = &DAT_100000001;
  uVar13 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
  uVar10 = uVar13 + 0x120;
  if (*(ulonglong *)(param_2 + 0x78) < uVar10) {
    FUN_140023dd8((longlong *)(param_2 + 0x70),0x128);
    uVar13 = *(longlong *)(param_2 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar10 = uVar13 + 0x120;
  }
  *(ulonglong *)(param_2 + 0x70) = uVar10;
  FUN_1456bbb8c(uVar13,L"EyeAdaptationTexture",&local_88,0);
  iVar5 = *(int *)(param_2 + 0x180);
  *(uint *)(param_2 + 0x180) = iVar5 + 1U;
  if (*(uint *)(param_2 + 0x184) < iVar5 + 1U) {
    FUN_14472c0f6(param_2 + 0x178,iVar5);
  }
  *(ulonglong *)(*(longlong *)(param_2 + 0x178) + (longlong)iVar5 * 8) = uVar13;
  *(int *)(uVar13 + 0x9c) = *(int *)(param_2 + 0x180) + -1;
  plVar7 = *(longlong **)(param_3 + 0x30d8);
  if ((plVar7 == (longlong *)0x0) || ((*(byte *)(plVar7 + 1) & 2) == 0)) {
    local_88 = (undefined8 *)&DAT_3f8000003f800000;
    uStack_80 = 0x3f800000;
    uStack_7c = 0x3f800000;
    local_128 = (undefined8 *)CONCAT44(local_128._4_4_,1);
    local_120 = &local_88;
    uVar11 = FUN_1449cc94d(param_2,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar7 + 0x80) == (code *)&LAB_144b15db6) {
      local_88 = (undefined8 *)plVar7[(ulonglong)*(uint *)(plVar7 + 0xcd) + 0xd1];
    }
    else {
      local_88 = (undefined8 *)(**(code **)(*plVar7 + 0x80))();
    }
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_88 + 1) = *(int *)(local_88 + 1) + 1;
      UNLOCK();
    }
    uVar11 = FUN_144735dd8(param_2,&local_88,1);
    if (local_88 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_88 + 1);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)*local_88)(local_88,1);
      }
    }
  }
  FUN_142ebad78(param_2,*(undefined8 *)(param_3 + 0x13818),uVar11,uVar13);
  local_98 = uVar13;
  if (((*(longlong **)(param_3 + 0x132a8) != (longlong *)0x0) &&
      (lVar12 = (**(code **)(**(longlong **)(param_3 + 0x132a8) + 0x20))(), lVar12 == lVar9)) &&
     (plVar7 = *(longlong **)(param_3 + 0x132a8), plVar7 != (longlong *)0x0)) {
    plStack_90 = plVar7;
    (**(code **)(*plVar7 + 8))();
  }
  local_128 = &local_100;
  (**(code **)(*plVar6 + 0x10))(plVar6,&local_88,param_2,param_3);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0x11] = 0;
  FUN_1448a0832(&local_118,param_2,&local_88);
  *param_1 = local_118;
  param_1[1] = local_110;
  param_1[2] = local_108;
  if ((*(byte *)(param_3 + 0x125b0) & 1) == 0) {
    plVar7 = (longlong *)CONCAT44(uStack_6c,local_70);
    plVar6 = *(longlong **)(*(longlong *)(param_3 + 0x3108) + 0x13d8);
    if (plVar6 != plVar7) {
      *(longlong **)(*(longlong *)(param_3 + 0x3108) + 0x13d8) = plVar7;
      if (plVar7 != (longlong *)0x0) {
        (**(code **)(*plVar7 + 8))();
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  puVar8 = local_88;
  if ((*(byte *)(param_3 + 0x125b0) & 1) == 0) {
    lVar9 = *(longlong *)(param_3 + 0x3108);
    plVar6 = *(longlong **)(lVar9 + 0x1310);
    if (plVar6 != (longlong *)0x0) {
      *(undefined8 *)(lVar9 + 0x1310) = 0;
      (**(code **)(*plVar6 + 0x38))();
    }
    bVar4 = *(byte *)((longlong)puVar8 + 0x24);
    *(byte *)((longlong)puVar8 + 0x24) = bVar4 | 2;
    *(undefined1 *)((longlong)puVar8 + 0x26) = 1;
    iVar5 = *(int *)(param_2 + 0x1c0);
    *(uint *)(param_2 + 0x1c0) = iVar5 + 1U;
    if (*(uint *)(param_2 + 0x1c4) < iVar5 + 1U) {
      FUN_14017e38e((longlong *)(param_2 + 0x1b8),iVar5);
    }
    lVar12 = *(longlong *)(param_2 + 0x1b8);
    *(undefined8 **)(lVar12 + (longlong)iVar5 * 0x10) = puVar8;
    *(undefined8 **)(lVar12 + 8 + (longlong)iVar5 * 0x10) = (undefined8 *)(lVar9 + 0x1310);
    if ((bVar4 & 2) == 0) {
      pcVar2 = (char *)(param_2 + 0x4a8);
      LOCK();
      bVar14 = *(char *)(param_2 + 0x4a8) == '\0';
      if (bVar14) {
        *(char *)(param_2 + 0x4a8) = '\x01';
      }
      UNLOCK();
      if (!bVar14) {
        FUN_1447d2058();
      }
      iVar5 = *(int *)(param_2 + 0x4b8);
      *(uint *)(param_2 + 0x4b8) = iVar5 + 1U;
      if (*(uint *)(param_2 + 0x4bc) < iVar5 + 1U) {
        FUN_1447f2dbc((longlong *)(param_2 + 0x4b0),iVar5);
      }
      lVar12 = *(longlong *)(param_2 + 0x4b0);
      *(undefined8 *)(lVar12 + (longlong)iVar5 * 0x10) = 2;
      *(undefined8 **)(lVar12 + 8 + (longlong)iVar5 * 0x10) = puVar8;
      LOCK();
      cVar3 = *pcVar2;
      if (cVar3 == '\x01') {
        *pcVar2 = '\0';
      }
      UNLOCK();
      if (cVar3 != '\x01') {
        FUN_14008cdb0(pcVar2);
      }
    }
    *(ulonglong *)(lVar9 + 0x1328) = CONCAT44(uStack_7c,uStack_80);
    *(ulonglong *)(lVar9 + 0x1330) = CONCAT44(uStack_74,uStack_78);
    *(undefined8 *)(lVar9 + 0x1320) = *(undefined8 *)((longlong)local_88 + 0x84);
  }
  if ((longlong *)CONCAT44(uStack_6c,local_70) != (longlong *)0x0) {
    (**(code **)(*(longlong *)CONCAT44(uStack_6c,local_70) + 0x10))();
  }
  if (plStack_90 != (longlong *)0x0) {
    (**(code **)(*plStack_90 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 142ec403f FUN_142ec403f body=54108 status=FAIL
// SIG undefined FUN_142ec403f(void)
/* DECOMPILE FAILED */

// FUNCTION 142ed139c FUN_142ed139c body=792 status=ok
// SIG undefined FUN_142ed139c(void)

undefined8 * FUN_142ed139c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined8 *)((longlong)param_2 + 9) = 0;
  *(undefined8 *)((longlong)param_2 + 0x11) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  uVar6 = 0;
  memset(param_2 + 6,0,0xe0);
  param_2[0x23] = 0;
  param_2[0x24] = 0;
  param_2[0x25] = 0;
  param_2[0x26] = 0;
  param_2[0x27] = 0;
  param_2[0x28] = 0;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  param_2[0x2c] = 0;
  param_2[0x2d] = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  param_2[0x30] = 0;
  *(undefined8 *)((longlong)param_2 + 0x182) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18a) = 0;
  param_2[0x33] = 0;
  param_2[0x34] = 0;
  *(undefined1 *)(param_2 + 0x35) = 1;
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 1;
  param_2[0x38] = 0;
  param_2[0x39] = 0xffffffff00000001;
  *(undefined4 *)(param_2 + 0x22) = 0;
  *(undefined1 *)((longlong)param_2 + 0x114) = 0;
  local_80 = *param_3;
  local_78 = param_3[1];
  local_70 = param_3[2];
  FUN_1448a0832(&local_68,*param_1);
  param_2[4] = local_68;
  param_2[5] = local_60;
  param_2[6] = local_58;
  lVar1 = param_1[1];
  if (*(char *)(lVar1 + 0x60) == '\x01') {
    uVar6 = param_3[1];
    puVar5 = (undefined1 *)param_3[2];
    param_2[0x23] = *(undefined8 *)(lVar1 + 0x40);
    param_2[0x24] = uVar6;
    param_2[0x25] = puVar5;
    param_2[0x26] = *(undefined8 *)(lVar1 + 0x38);
    param_2[0x27] = uVar6;
    param_2[0x28] = puVar5;
    param_2[0x29] = *(undefined8 *)(lVar1 + 0x48);
    param_2[0x2a] = uVar6;
    param_2[0x2b] = puVar5;
    param_2[0x2c] = *(undefined8 *)(lVar1 + 0x50);
    param_2[0x2d] = uVar6;
    param_2[0x2e] = puVar5;
    param_2[0x2f] = *(undefined8 *)(lVar1 + 0x58);
    param_2[0x30] = uVar6;
    param_2[0x31] = puVar5;
  }
  else {
    puVar5 = &DAT_100000001;
  }
  lVar1 = param_1[2];
  if ((*(int *)(lVar1 + 4) < *(int *)(lVar1 + 0xc)) &&
     (*(int *)(lVar1 + 8) < *(int *)(lVar1 + 0x10))) {
    uVar6 = *(undefined8 *)(lVar1 + 4);
    puVar5 = *(undefined1 **)(lVar1 + 0xc);
  }
  uVar4 = *param_1;
  if ((*(longlong *)(lVar1 + 0x18) == 0) || (local_98 = *(longlong *)(lVar1 + 0x20), local_98 == 0))
  {
    local_98 = FUN_14476842e(uVar4,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
    uVar4 = *param_1;
  }
  local_90 = uVar6;
  local_88 = puVar5;
  FUN_1448a0832(&local_68,uVar4);
  param_2[7] = local_68;
  param_2[8] = local_60;
  param_2[9] = local_58;
  puVar2 = (undefined8 *)param_1[3];
  local_b0 = *puVar2;
  local_a8 = puVar2[1];
  local_a0 = puVar2[2];
  FUN_1448a0832(&local_68,*param_1);
  param_2[0x10] = local_68;
  param_2[0x11] = local_60;
  param_2[0x12] = local_58;
  uVar6 = *(undefined8 *)param_1[1];
  param_2[0x36] = 0;
  *(undefined1 *)(param_2 + 0x37) = 1;
  FUN_14482e3b2();
  cVar3 = '\x02';
  if (DAT_14cb02cf9 != '\x03') {
    cVar3 = DAT_14cb02cf9;
  }
  param_2[0x34] = uVar6;
  *(char *)(param_2 + 0x35) = cVar3;
  param_2[0x33] = *(undefined8 *)param_1[4];
  *(undefined1 *)((longlong)param_2 + 0x191) = *(undefined1 *)(param_1[1] + 0x68);
  param_2[0x38] = param_1[5];
  if ((local_50 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed16b6 FUN_142ed16b6 body=453 status=ok
// SIG undefined FUN_142ed16b6(void)

undefined8 * FUN_142ed16b6(longlong *param_1,undefined8 *param_2,uint param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_298;
  lVar6 = (ulonglong)param_3 * 0x10;
  uVar2 = *param_4;
  if (*(int *)(*param_1 + 0x50 + lVar6) != 0) {
    lVar6 = *param_1 + lVar6;
    local_240 = param_4[1];
    local_238 = param_4[2];
    local_268 = param_2;
    local_248 = *param_4;
    FUN_142ed139c(param_1[1],&local_218);
    uVar2 = *param_4;
    param_2 = local_268;
    if (0 < *(int *)(lVar6 + 0x50)) {
      uVar3 = param_4[1];
      uVar5 = param_4[2];
      lVar8 = 8;
      lVar7 = 0;
      do {
        local_260 = uVar2;
        local_258 = uVar3;
        local_250 = uVar5;
        FUN_1448a0832(&local_230,param_1[2],&local_260);
        local_1f8 = local_230;
        local_1f0 = local_228;
        uStack_1ec = uStack_224;
        uStack_1e8 = uStack_220;
        uStack_1e4 = uStack_21c;
        puVar1 = (undefined8 *)*param_1;
        if ((*(uint *)((longlong)puVar1 + 0x27c) == param_3) &&
           ((longlong)*(int *)(puVar1 + (ulonglong)param_3 * 2 + 10) + -1 <= lVar7)) {
          local_218 = *puVar1;
          local_210 = puVar1[1];
          local_208 = puVar1[2];
          local_200 = *(undefined1 *)(puVar1 + 3);
        }
        if (*(int *)(*(longlong *)(lVar6 + 0x48) + lVar8) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = *(longlong **)(*(longlong *)(lVar6 + 0x48) + -8 + lVar8);
        }
        local_278 = &local_218;
        (**(code **)(*plVar4 + 0x58))(local_228,&local_230,param_1[2],param_1[3]);
        *param_4 = local_230;
        uVar3 = CONCAT44(uStack_224,local_228);
        param_4[1] = uVar3;
        uVar5 = CONCAT44(uStack_21c,uStack_220);
        param_4[2] = uVar5;
        lVar7 = lVar7 + 1;
        lVar8 = lVar8 + 0x10;
        uVar2 = local_230;
        param_2 = local_268;
      } while (lVar7 < *(int *)(lVar6 + 0x50));
    }
  }
  *param_2 = uVar2;
  param_2[1] = param_4[1];
  param_2[2] = param_4[2];
  if ((local_48 ^ (ulonglong)auStack_298) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 142ed187c FUN_142ed187c body=4942 status=ok
// SIG undefined FUN_142ed187c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ed187c(longlong param_1,longlong param_2,longlong *param_3,wchar_t *param_4)

{
  ulonglong *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  char cVar18;
  undefined4 uVar19;
  undefined8 **ppuVar20;
  undefined8 *puVar21;
  ulonglong uVar22;
  char cVar23;
  undefined8 *puVar24;
  int iVar25;
  bool bVar26;
  float fVar27;
  undefined1 auStack_5e8 [32];
  wchar_t *local_5c8;
  wchar_t *local_5c0;
  undefined4 local_5b8;
  undefined4 local_5b0;
  code *local_5a8;
  code *local_5a0;
  undefined1 *local_598;
  undefined1 *local_590;
  undefined1 *local_588;
  undefined1 *local_580;
  undefined4 local_578;
  undefined8 local_570;
  char local_55d;
  undefined4 local_55c;
  longlong local_558;
  longlong local_550;
  longlong local_548;
  undefined8 local_540;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined4 local_51c;
  longlong local_518;
  longlong local_510;
  undefined8 local_508;
  undefined8 *local_500;
  ulonglong *local_4f8;
  undefined8 *local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  char local_4a0;
  undefined1 local_498 [111];
  undefined1 local_429;
  undefined8 *local_428;
  undefined4 local_420;
  undefined8 local_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  longlong local_3e8;
  undefined8 *local_3e0;
  longlong lStack_3d8;
  undefined *local_3d0;
  undefined4 local_3c8;
  int local_3c4;
  undefined4 local_3c0;
  undefined4 local_3b9;
  undefined3 uStack_3b5;
  undefined4 local_3b2;
  undefined3 uStack_3ae;
  undefined2 local_3ab;
  undefined1 local_3a9;
  undefined8 local_3a8;
  undefined1 uStack_3a0;
  undefined7 local_39f;
  undefined1 uStack_398;
  undefined8 uStack_397;
  undefined8 *local_388;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 local_298;
  undefined1 local_294;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined2 uStack_228;
  undefined6 uStack_226;
  undefined2 uStack_220;
  undefined8 uStack_21e;
  undefined8 local_210;
  longlong local_208;
  char local_200;
  undefined8 local_1f8;
  undefined1 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  uint local_1cc;
  undefined8 *local_168;
  undefined8 local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined8 local_14c;
  int local_144;
  int local_140;
  undefined4 local_13c;
  undefined1 local_138;
  undefined1 local_137;
  undefined1 local_136;
  char local_135;
  undefined2 local_134;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_5e8;
  uVar4 = *(undefined8 *)(param_2 + 0x30f8);
  uVar5 = *(undefined8 *)(param_2 + 0x3100);
  FUN_1448e94e7(local_498,param_1,*param_3);
  FUN_143017e66(&local_4b8,param_3[1],param_2);
  uVar3 = **(undefined8 **)(*param_3 + 0x40);
  uVar14 = (**(code **)(**(longlong **)(*(longlong *)(param_2 + 8) + 0x30) + 0x48))();
  local_528 = CONCAT71(local_528._1_7_,uVar14);
  FUN_14034d887();
  uStack_398 = 0;
  uStack_397 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_39f = 0;
  memset(&uStack_378,0,0xe0);
  local_290 = 0;
  uStack_288 = 0;
  local_280 = 0;
  uStack_278 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_260 = 0;
  uStack_258 = 0;
  local_250 = 0;
  uStack_248 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  uStack_226 = 0;
  uStack_220 = 0;
  uStack_21e = 0;
  local_210 = 0;
  local_1e8 = 0;
  local_1e0 = 0xffffffff00000001;
  local_298 = 0;
  local_294 = 0;
  local_4d0 = uVar3;
  local_4c8 = uVar4;
  uStack_4c0 = uVar5;
  FUN_1448a0832(&local_168,param_1);
  local_388 = local_168;
  local_380 = (undefined4)local_160;
  uStack_37c = local_160._4_4_;
  uStack_378 = uStack_158;
  uStack_374 = uStack_154;
  lVar16 = *param_3;
  local_1f8 = 0;
  local_1f0 = 1;
  FUN_14482e3b2();
  local_200 = DAT_14cb02cf9;
  if (DAT_14cb02cf9 == '\x03') {
    local_200 = '\x02';
  }
  local_5c8 = param_4;
  local_208 = lVar16;
  FUN_142ef5063(&local_168,param_1,param_2,&local_3a8);
  lVar16 = CONCAT44(local_160._4_4_,(undefined4)local_160);
  lVar6 = CONCAT44(uStack_154,uStack_158);
  local_558 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)((longlong)local_168 + 0x84);
  local_500 = local_168;
  local_3f8 = uVar3;
  local_3f0 = lVar16;
  local_3e8 = lVar6;
  if (local_4a8 == local_4b0 || local_4b8 == 0) {
    local_550 = CONCAT71(local_550._1_7_,*(undefined1 *)((longlong)local_168 + 0x92));
    local_538 = CONCAT62(local_538._2_6_,*(undefined2 *)((longlong)local_168 + 0x94));
    local_540 = CONCAT44(local_540._4_4_,*(undefined4 *)((longlong)local_168 + 0x8c));
    local_548 = CONCAT71(local_548._1_7_,*(undefined1 *)(local_168 + 0x12));
    local_530 = *(undefined8 *)((longlong)local_168 + 0x7c);
    uVar19 = 2;
    if ((char)local_528 != '\0') {
      uVar19 = DAT_14ca84f4c;
    }
    puVar21 = (undefined8 *)
              (local_168[0xc] & 0xfffffffff7fdeffc | DAT_14ca4aec0 |
               (ulonglong)*(byte *)(param_2 + 0x13820) << 0x11 | 1);
    FUN_14728adc4(&local_1d8);
    local_135 = ((local_1cc & 0xfffffffe) == 8) * '\t' + '\x01';
    if (2 < local_1cc - 7) {
      local_135 = (char)uVar19;
    }
    cVar23 = (&DAT_00001de6)[param_2];
    local_136 = (undefined1)local_550;
    local_134 = (undefined2)local_538;
    local_13c = (undefined4)local_540;
    local_138 = (undefined1)local_548;
    local_137 = 1;
    local_160._0_4_ = 1;
    local_144 = DAT_14ca84e40;
    if ((int)uVar3 < DAT_14ca84e40) {
      local_144 = (int)uVar3;
    }
    local_160._4_4_ = 0;
    uStack_158 = 0;
    uStack_154 = 0;
    uStack_150 = 0;
    if (local_144 < 2) {
      local_144 = 1;
    }
    iVar25 = (int)((ulonglong)uVar3 >> 0x20);
    local_140 = DAT_14ca84e40;
    if (iVar25 < DAT_14ca84e40) {
      local_140 = iVar25;
    }
    local_14c = local_530;
    if (local_140 < 2) {
      local_140 = 1;
    }
    uVar22 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
    uVar15 = uVar22 + 0x120;
    local_168 = puVar21;
    if (*(ulonglong *)(param_1 + 0x78) < uVar15) {
      FUN_140023dd8((longlong *)(param_1 + 0x70),0x128);
      uVar22 = *(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8;
      uVar15 = uVar22 + 0x120;
    }
    *(ulonglong *)(param_1 + 0x70) = uVar15;
    FUN_1456bbb8c(uVar22,L"DeviceEncodingOnly",&local_168,0);
    iVar25 = *(int *)(param_1 + 0x180);
    *(uint *)(param_1 + 0x180) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0x184) < iVar25 + 1U) {
      FUN_14472c0f6(param_1 + 0x178,iVar25);
    }
    local_55d = cVar23 * '\x02';
    *(ulonglong *)(*(longlong *)(param_1 + 0x178) + (longlong)iVar25 * 8) = uVar22;
    *(int *)(uVar22 + 0x9c) = *(int *)(param_1 + 0x180) + -1;
    local_4a8 = lVar6;
    local_4b0 = lVar16;
  }
  else {
    local_55d = local_4a0;
    uVar22 = local_4b8;
  }
  local_410 = *(undefined8 *)(uVar22 + 0x84);
  local_528 = DAT_14c9c0de0;
  local_408 = local_4b0;
  local_400 = local_4a8;
  lVar16 = FUN_1447e4f80();
  cVar23 = *(char *)(lVar16 + 0x41);
  if (cVar23 == '\x03') {
    cVar23 = '\x02';
  }
  local_4e0 = *(undefined8 *)(param_2 + 0x18);
  lVar16 = FUN_14155e106();
  cVar18 = *(char *)(lVar16 + 0x41);
  if (cVar18 == '\x03') {
    cVar18 = '\x02';
  }
  local_4e8 = DAT_14cb05388;
  FUN_14728adc4(&local_168,local_558);
  local_420 = (undefined4)local_160;
  local_428 = local_168;
  local_558 = CONCAT44(local_558._4_4_,local_160._4_4_);
  local_4d8 = CONCAT44(uStack_154,uStack_158);
  FUN_144a2c7c2(&local_1d8,&local_3f8);
  puVar21 = &local_1d8;
  puVar17 = &local_160;
  for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar17 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar17 = puVar17 + 1;
  }
  FUN_144a2c7c2(&local_1d8,&local_410);
  uVar13 = DAT_14ca952f8;
  uVar12 = DAT_14ca952f4;
  uVar11 = DAT_14ca952f0;
  uVar10 = DAT_14ca952ec;
  uVar9 = DAT_14ca952e8;
  uVar8 = DAT_14ca952bc;
  uVar7 = DAT_14ca952b8;
  uVar2 = DAT_14ca952b4;
  uVar19 = DAT_14ca952b0;
  local_51c = DAT_14ca952c0;
  local_55c = DAT_14ca952c4;
  local_518 = CONCAT44(local_518._4_4_,DAT_14ca952c8);
  local_510 = CONCAT44(local_510._4_4_,DAT_14ca952cc);
  local_508 = CONCAT44(local_508._4_4_,DAT_14ca952d0);
  local_550 = CONCAT44(local_550._4_4_,DAT_14ca952d4);
  local_548 = CONCAT44(local_548._4_4_,DAT_14ca952d8);
  local_540 = CONCAT44(local_540._4_4_,DAT_14ca952dc);
  local_538 = CONCAT44(local_538._4_4_,DAT_14ca952e0);
  local_530 = CONCAT44(local_530._4_4_,DAT_14ca952e4);
  fVar27 = DAT_14ca952fc;
  if (1.0 <= DAT_14ca952fc) {
    fVar27 = 1.0;
  }
  if (fVar27 <= 0.0) {
    fVar27 = 0.0;
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar21 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  local_4f8 = puVar1;
  if (((*(byte *)(uVar22 + 0x62) & 2) == 0) || ((*(byte *)(param_2 + 0x13820) & 1) == 0)) {
    puVar17 = puVar21 + 0x54;
    if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
      FUN_140023dd8(puVar1,0x2b0);
      puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar21 + 0x54;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar17;
    *puVar21 = &PTR_FUN_14a2bab78;
    local_4f0 = puVar21 + 2;
    FUN_14729323c();
    iVar25 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar25 + 1U) {
      FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar25);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar25 * 8) = puVar21;
    puVar21[2] = local_4e0;
    *(char *)(puVar21 + 3) = cVar23;
    *(undefined4 *)((longlong)puVar21 + 0x19) = local_3b2;
    *(uint *)((longlong)puVar21 + 0x1c) = CONCAT31(uStack_3ae,local_3b2._3_1_);
    puVar21[4] = local_4e8;
    *(char *)(puVar21 + 5) = cVar18;
    *(undefined4 *)((longlong)puVar21 + 0x29) = local_3b9;
    *(uint *)((longlong)puVar21 + 0x2c) = CONCAT31(uStack_3b5,local_3b9._3_1_);
    puVar21[6] = local_428;
    *(undefined4 *)(puVar21 + 7) = local_420;
    iVar25 = (int)local_558;
    *(int *)((longlong)puVar21 + 0x3c) = (int)local_558;
    puVar21[8] = local_4d8;
    ppuVar20 = &local_168;
    puVar17 = puVar21 + 9;
    for (lVar16 = 0xf; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar17 = *ppuVar20;
      ppuVar20 = ppuVar20 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar17 = &local_1d8;
    puVar24 = puVar21 + 0x18;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar24 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar24 = puVar24 + 1;
    }
    *(undefined4 *)(puVar21 + 0x26) = uVar19;
    *(undefined4 *)((longlong)puVar21 + 0x134) = uVar2;
    *(undefined4 *)(puVar21 + 0x27) = uVar7;
    *(undefined4 *)((longlong)puVar21 + 0x13c) = uVar8;
    *(undefined4 *)(puVar21 + 0x28) = local_51c;
    *(undefined4 *)((longlong)puVar21 + 0x144) = local_55c;
    *(undefined4 *)(puVar21 + 0x29) = (undefined4)local_518;
    *(undefined4 *)((longlong)puVar21 + 0x14c) = (undefined4)local_510;
    *(undefined4 *)(puVar21 + 0x2a) = (undefined4)local_508;
    *(undefined4 *)((longlong)puVar21 + 0x154) = (undefined4)local_550;
    *(undefined4 *)(puVar21 + 0x2b) = (undefined4)local_548;
    *(undefined4 *)((longlong)puVar21 + 0x15c) = (undefined4)local_540;
    *(undefined4 *)(puVar21 + 0x2c) = (undefined4)local_538;
    *(undefined4 *)((longlong)puVar21 + 0x164) = (undefined4)local_530;
    *(undefined4 *)(puVar21 + 0x2d) = uVar9;
    *(undefined4 *)((longlong)puVar21 + 0x16c) = uVar10;
    *(undefined4 *)(puVar21 + 0x2e) = uVar11;
    *(undefined4 *)((longlong)puVar21 + 0x174) = uVar12;
    *(undefined4 *)(puVar21 + 0x2f) = uVar13;
    *(float *)((longlong)puVar21 + 0x17c) = fVar27;
    puVar21[0x30] = local_500;
    puVar21[0x31] = local_528;
    *(undefined4 *)(puVar21 + 0x32) = 0x43200000;
    puVar21[0x34] = uVar22;
    puVar21[0x35] = 0;
    *(char *)(puVar21 + 0x36) = local_55d;
    *(undefined1 *)((longlong)puVar21 + 0x1b1) = 0;
    *(undefined2 *)((longlong)puVar21 + 0x1b2) = 0xffff;
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_580 = &LAB_14712ac08;
        local_588 = &LAB_14712ac0c;
        local_590 = &LAB_1472e3912;
        local_598 = &LAB_1472e3916;
        local_5a0 = FUN_1472e391a;
        local_5a8 = FUN_1472e3942;
        local_5c0 = L"ScreenPassVS";
        local_5c8 = L"/Engine/Private/ScreenPass.usf";
        local_570 = 0;
        local_578 = 0xe0;
        local_5b0 = 1;
        local_5b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    FUN_1448e935e(uVar3,&local_3e0,&DAT_14ca4b6d8,0);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14ca4b780) {
      FUN_144b3d300(&DAT_14ca4b780);
      if (DAT_14ca4b780 == -1) {
        FUN_145e1a792();
        local_580 = &LAB_14712ac08;
        local_588 = &LAB_14712ac0c;
        local_590 = &LAB_1472e3912;
        local_598 = &LAB_1472e3916;
        local_5a0 = FUN_1472e391a;
        local_5a8 = FUN_1472e3942;
        local_5c0 = L"ScreenPassVS";
        local_5c8 = L"/Engine/Private/ScreenPass.usf";
        local_570 = 0;
        local_578 = 0xe0;
        local_5b0 = 1;
        local_5b8 = 0;
        FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
        _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
        atexit((_func_5014 *)&LAB_1430179ee);
        _Init_thread_footer(&DAT_14ca4b780);
      }
    }
    local_500 = local_3e0;
    local_558 = lStack_3d8;
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145dd0028();
    FUN_1448e935e(uVar3,&local_3e0,&DAT_14ca26bc0,iVar25 == 0);
    FUN_145dd0028();
    lVar16 = lStack_3d8;
    puVar17 = local_3e0;
    local_528 = DAT_14c9f8378;
    local_530 = DAT_14c9c0d98;
    local_538 = DAT_14ca94df8;
    local_55c = *(undefined4 *)(param_2 + 0x3090);
    uVar19 = *(undefined4 *)(param_2 + 0x1dd4);
    uVar2 = *(undefined4 *)(param_2 + 0x3094);
    uVar14 = (&DAT_00001de6)[param_2];
    local_540 = local_410;
    local_548 = local_408;
    local_550 = local_400;
    local_508 = local_3f8;
    local_510 = local_3f0;
    local_518 = local_3e8;
    FUN_145dd0296();
    FUN_140069376(param_1);
    puVar1 = local_4f8;
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar21 = puVar24 + 0x4b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar21) {
      FUN_140023dd8(local_4f8,0x260);
      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar21 = puVar24 + 0x4b;
    }
    *local_4f8 = (ulonglong)puVar21;
    local_3e0 = local_4f0;
    lStack_3d8 = DAT_14ca297c0;
    if (DAT_14ca297c0 != 0) {
      LOCK();
      *(int *)(DAT_14ca297c0 + 8) = *(int *)(DAT_14ca297c0 + 8) + 1;
      UNLOCK();
    }
    local_3d0 = &DAT_14ca29778;
    local_5c8 = (wchar_t *)CONCAT71(local_5c8._1_7_,2);
    FUN_140068f1a(puVar24,&local_429,&local_3e0,1);
    *puVar24 = &PTR_FUN_14a2bab80;
    *(undefined4 *)(puVar24 + 0x37) = local_55c;
    *(undefined4 *)((longlong)puVar24 + 0x1bc) = uVar19;
    *(undefined4 *)(puVar24 + 0x38) = uVar2;
    *(undefined1 *)((longlong)puVar24 + 0x1c4) = uVar14;
    *(undefined2 *)((longlong)puVar24 + 0x1c5) = local_3ab;
    *(undefined1 *)((longlong)puVar24 + 0x1c7) = local_3a9;
    puVar24[0x39] = local_540;
    puVar24[0x3a] = local_548;
    puVar24[0x3b] = local_550;
    puVar24[0x3c] = local_508;
    puVar24[0x3d] = local_510;
    puVar24[0x3e] = local_518;
    puVar24[0x3f] = local_500;
    puVar24[0x40] = local_558;
    puVar24[0x41] = puVar17;
    puVar24[0x42] = lVar16;
    puVar24[0x43] = local_528;
    puVar24[0x44] = local_530;
    puVar24[0x45] = local_538;
    *(undefined1 *)(puVar24 + 0x46) = 0;
    *(uint *)((longlong)puVar24 + 0x234) = CONCAT31((undefined3)local_3c4,local_3c8._3_1_);
    *(int *)((longlong)puVar24 + 0x231) = local_3c8;
    puVar24[0x47] = puVar17;
    puVar24[0x48] = lVar16;
    puVar24[0x49] = local_4f0;
    *(undefined1 *)(puVar24 + 0x4a) = 2;
    iVar25 = *(int *)(param_1 + 0x170);
    *(uint *)(param_1 + 0x170) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0x174) < iVar25 + 1U) {
      FUN_14470e57a(param_1 + 0x168,iVar25);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar25 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
    FUN_140069100(param_1,puVar24);
  }
  else {
    puVar17 = puVar21 + 0x36;
    if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
      FUN_140023dd8(puVar1,0x1c0);
      puVar21 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
      puVar17 = puVar21 + 0x36;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar17;
    *puVar21 = &PTR_FUN_14a2bab58;
    puVar21[2] = 0;
    *(undefined1 *)(puVar21 + 3) = 1;
    puVar21[4] = 0;
    *(undefined1 *)(puVar21 + 5) = 1;
    puVar21[0x26] = 0;
    puVar21[0x27] = 0x3f80000000000000;
    puVar21[0x28] = 0;
    puVar21[0x29] = 0x3f80000000000000;
    puVar21[0x2a] = 0;
    puVar21[0x2b] = 0x3f80000000000000;
    puVar21[0x2c] = 0;
    puVar21[0x2d] = 0x3f80000000000000;
    puVar21[0x34] = 0;
    puVar21[0x30] = 0;
    puVar21[0x31] = 0;
    iVar25 = *(int *)(param_1 + 0xa0);
    *(uint *)(param_1 + 0xa0) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0xa4) < iVar25 + 1U) {
      FUN_1448cfae8(param_1 + 0x98,iVar25);
    }
    puVar1 = local_4f8;
    *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar25 * 8) = puVar21;
    puVar21[2] = local_4e0;
    *(char *)(puVar21 + 3) = cVar23;
    puVar21[4] = local_4e8;
    *(char *)(puVar21 + 5) = cVar18;
    puVar21[6] = local_428;
    *(undefined4 *)(puVar21 + 7) = local_420;
    *(int *)((longlong)puVar21 + 0x3c) = (int)local_558;
    puVar21[8] = local_4d8;
    ppuVar20 = &local_168;
    puVar17 = puVar21 + 9;
    for (lVar16 = 0xf; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar17 = *ppuVar20;
      ppuVar20 = ppuVar20 + 1;
      puVar17 = puVar17 + 1;
    }
    puVar17 = &local_1d8;
    puVar24 = puVar21 + 0x18;
    for (lVar16 = 0xe; lVar16 != 0; lVar16 = lVar16 + -1) {
      *puVar24 = *puVar17;
      puVar17 = puVar17 + 1;
      puVar24 = puVar24 + 1;
    }
    *(undefined4 *)(puVar21 + 0x26) = uVar19;
    *(undefined4 *)((longlong)puVar21 + 0x134) = uVar2;
    *(undefined4 *)(puVar21 + 0x27) = uVar7;
    *(undefined4 *)((longlong)puVar21 + 0x13c) = uVar8;
    *(undefined4 *)(puVar21 + 0x28) = local_51c;
    *(undefined4 *)((longlong)puVar21 + 0x144) = local_55c;
    *(undefined4 *)(puVar21 + 0x29) = (undefined4)local_518;
    *(undefined4 *)((longlong)puVar21 + 0x14c) = (undefined4)local_510;
    *(undefined4 *)(puVar21 + 0x2a) = (undefined4)local_508;
    *(undefined4 *)((longlong)puVar21 + 0x154) = (undefined4)local_550;
    *(undefined4 *)(puVar21 + 0x2b) = (undefined4)local_548;
    *(undefined4 *)((longlong)puVar21 + 0x15c) = (undefined4)local_540;
    *(undefined4 *)(puVar21 + 0x2c) = (undefined4)local_538;
    *(undefined4 *)((longlong)puVar21 + 0x164) = (undefined4)local_530;
    *(undefined4 *)(puVar21 + 0x2d) = uVar9;
    *(undefined4 *)((longlong)puVar21 + 0x16c) = uVar10;
    *(undefined4 *)(puVar21 + 0x2e) = uVar11;
    *(undefined4 *)((longlong)puVar21 + 0x174) = uVar12;
    *(undefined4 *)(puVar21 + 0x2f) = uVar13;
    *(float *)((longlong)puVar21 + 0x17c) = fVar27;
    puVar21[0x30] = local_500;
    puVar21[0x31] = local_528;
    *(undefined4 *)(puVar21 + 0x32) = 0x43200000;
    uVar14 = *(undefined1 *)(uVar22 + 0x94);
    puVar24 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar17 = puVar24 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar17) {
      FUN_140023dd8(local_4f8,0x50);
      puVar24 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar17 = puVar24 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar17;
    puVar24[1] = *(undefined8 *)(uVar22 + 8);
    puVar24[2] = 0;
    *(undefined1 *)(puVar24 + 3) = 0;
    *(undefined8 *)((longlong)puVar24 + 0x1c) = 0xffffffffffffffff;
    *(undefined1 *)(puVar24 + 5) = 0;
    *puVar24 = &PTR_FUN_14a1fb948;
    *(undefined1 *)(puVar24 + 6) = uVar14;
    *(undefined1 *)(puVar24 + 7) = 0;
    *(undefined4 *)((longlong)puVar24 + 0x31) = 0;
    *(undefined2 *)((longlong)puVar24 + 0x35) = 0;
    puVar24[8] = uVar22;
    iVar25 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar25 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar25 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar25);
    }
    bVar26 = (int)local_558 == 0;
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar25 * 8) = puVar24;
    *(int *)((longlong)puVar24 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar21[0x34] = puVar24;
    uVar3 = *(undefined8 *)(param_2 + 0x13818);
    FUN_145ee2b68();
    FUN_1448e935e(uVar3,&local_3e0,&DAT_14ca26ce8,bVar26);
    FUN_145ee2b68();
    iVar25 = (local_400._4_4_ - local_408._4_4_) + 7;
    local_3c4 = (local_400._4_4_ - local_408._4_4_) + 0xe;
    if (-1 < iVar25) {
      local_3c4 = iVar25;
    }
    local_3c4 = local_3c4 >> 3;
    iVar25 = ((int)local_400 - (int)local_408) + 7;
    local_3c8 = ((int)local_400 - (int)local_408) + 0xe;
    if (-1 < iVar25) {
      local_3c8 = iVar25;
    }
    local_3c8 = local_3c8 >> 3;
    local_5c8 = (wchar_t *)&local_3c8;
    local_3c0 = 1;
    FUN_14728b1b0(param_1,&local_3b2,&local_3e0,puVar21 + 2);
  }
  if ((local_f0 ^ (ulonglong)auStack_5e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed2bcb FUN_142ed2bcb body=14900 status=ok
// SIG undefined FUN_142ed2bcb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ed2bcb(longlong param_1,undefined8 *param_2,longlong param_3,undefined4 param_4,
                  undefined8 param_5,longlong *param_6)

{
  char *pcVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  uint5 uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  wchar_t wVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined2 uVar16;
  char cVar17;
  byte bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  int *piVar25;
  byte *pbVar26;
  longlong **pplVar27;
  longlong *plVar28;
  longlong *plVar29;
  undefined4 uVar30;
  int iVar31;
  longlong lVar32;
  bool bVar33;
  undefined8 *puVar34;
  longlong *plVar35;
  byte bVar36;
  longlong *plVar37;
  longlong *plVar38;
  undefined1 uVar39;
  longlong *plVar40;
  longlong *plVar41;
  longlong *plVar42;
  longlong *plVar43;
  longlong lVar44;
  int iVar45;
  ulonglong uVar46;
  byte bVar47;
  undefined4 uVar48;
  undefined8 *puVar49;
  uint uVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auStack_8c8 [32];
  wchar_t *local_8a8;
  longlong **local_8a0;
  undefined4 local_898;
  undefined4 local_890;
  code *local_888;
  code *local_880;
  undefined1 *local_878;
  undefined1 *local_870;
  undefined1 *local_868;
  undefined1 *local_860;
  undefined4 local_858;
  undefined8 local_850;
  byte local_846;
  byte local_845;
  byte local_844;
  byte local_843;
  byte local_842;
  undefined1 local_841;
  longlong local_840;
  undefined4 local_834;
  longlong *local_830;
  longlong *local_828;
  longlong *local_820;
  uint local_814;
  longlong *local_810;
  longlong *local_808;
  longlong *local_800;
  longlong *local_7f8;
  longlong *local_7f0;
  int local_7e4;
  undefined4 local_7e0;
  uint local_7dc;
  longlong *local_7d8;
  longlong *local_7d0;
  longlong *local_7c8;
  undefined8 *local_7c0;
  longlong *local_7b8;
  longlong *local_7b0;
  undefined1 *local_7a8;
  ulonglong local_7a0;
  longlong *local_798;
  undefined8 *local_790;
  longlong local_788;
  undefined8 local_780;
  undefined8 *local_778;
  undefined1 *local_770;
  undefined8 local_768;
  longlong *local_760;
  longlong *local_758;
  longlong *local_750;
  longlong *local_748;
  longlong *local_740;
  longlong *local_738;
  longlong *local_730;
  undefined8 local_728;
  undefined4 local_71c;
  undefined4 local_718;
  uint local_714;
  longlong *local_710;
  longlong *local_708;
  longlong local_700;
  longlong *local_6f8;
  longlong *local_6f0;
  longlong *local_6e8;
  undefined8 local_6e0;
  longlong *local_6d8;
  longlong *local_6d0;
  longlong *local_6c8;
  undefined4 local_6c0;
  undefined4 local_6bc;
  undefined4 local_6b8;
  undefined1 local_6b4;
  longlong *local_6b0;
  undefined4 local_6a8;
  undefined4 uStack_6a4;
  undefined4 uStack_6a0;
  undefined4 uStack_69c;
  longlong *local_698;
  undefined8 local_690;
  undefined8 uStack_688;
  byte local_680;
  undefined4 local_678;
  undefined4 uStack_674;
  undefined4 uStack_670;
  undefined4 uStack_66c;
  undefined8 local_668;
  longlong *local_660;
  longlong *local_658;
  longlong *local_650;
  wchar_t local_648 [12];
  longlong *local_630 [3];
  longlong *local_618;
  undefined4 local_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  longlong *local_600;
  longlong *local_5f8;
  longlong *plStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  longlong *local_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong *local_5b8;
  longlong *local_5b0;
  longlong *plStack_5a8;
  longlong *local_5a0;
  undefined4 local_598;
  undefined4 uStack_594;
  undefined4 uStack_590;
  undefined4 uStack_58c;
  longlong local_588;
  longlong local_580;
  undefined4 local_578;
  longlong *local_570;
  longlong **local_568;
  undefined8 *local_560;
  byte *local_558;
  longlong **local_550;
  byte local_541;
  longlong *local_540;
  undefined8 local_538;
  undefined8 uStack_530;
  undefined8 local_528;
  longlong *local_520;
  longlong *local_518;
  longlong *local_510;
  longlong *local_508;
  longlong *plStack_500;
  undefined1 local_4f8 [32];
  longlong *local_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  byte local_4c0;
  undefined8 local_4b8;
  longlong *local_4b0;
  longlong *plStack_4a8;
  byte local_4a0 [8];
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  longlong *plStack_480;
  undefined8 local_478;
  longlong *plStack_470;
  undefined8 local_468;
  longlong *plStack_460;
  longlong *local_458;
  longlong *plStack_450;
  longlong *local_448;
  longlong *plStack_440;
  undefined1 local_438;
  char local_437;
  undefined8 local_408;
  undefined4 uStack_400;
  undefined1 uStack_3fc;
  wchar_t wStack_3fb;
  undefined1 uStack_3f9;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  byte bStack_3f0;
  undefined1 uStack_3ef;
  undefined2 uStack_3ee;
  undefined4 uStack_3ec;
  undefined4 uStack_3e8;
  int iStack_3e4;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  longlong *local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  longlong *local_3a8;
  undefined4 local_3a0;
  undefined4 uStack_39c;
  undefined4 uStack_398;
  undefined4 uStack_394;
  uint uStack_390;
  longlong *local_388;
  longlong *plStack_380;
  undefined8 *local_378;
  longlong *plStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined4 local_330;
  longlong *local_328;
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  longlong local_2d8;
  int local_2d0;
  longlong *local_2c8;
  undefined1 *puStack_2c0;
  undefined8 uStack_2b8;
  byte local_2b0;
  char local_2a8 [7];
  bool bStack_2a1;
  bool bStack_2a0;
  byte bStack_29f;
  bool bStack_29e;
  bool bStack_29d;
  char cStack_29c;
  undefined1 uStack_29b;
  undefined1 uStack_29a;
  byte bStack_299;
  bool bStack_298;
  undefined1 uStack_297;
  bool bStack_296;
  undefined1 local_290 [8];
  int local_288 [36];
  int local_1f8;
  int local_1d8;
  int local_1c8;
  int local_198;
  int local_188;
  undefined8 local_170;
  int local_168 [2];
  undefined8 local_160;
  longlong local_158 [19];
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_8c8;
  plVar43 = *(longlong **)(param_3 + 0x30f8);
  plVar41 = *(longlong **)(param_3 + 0x3100);
  local_7c0 = param_2;
  FUN_143017e66(&local_4d8,param_6[1]);
  FUN_143017e66(local_4f8,param_6[2],param_3);
  lVar32 = *(longlong *)(*param_6 + 0x40);
  local_510 = *(longlong **)(lVar32 + 0x10);
  local_528 = *(undefined8 *)(lVar32 + 0x38);
  plVar28 = *(longlong **)(lVar32 + 0x60);
  local_520 = plVar43;
  local_518 = plVar41;
  local_508 = plVar43;
  plStack_500 = plVar41;
  local_738 = (longlong *)FUN_14476842e(param_1,&DAT_14ca63b30,L"BlackAlphaOneDummy",2);
  if (local_738 == (longlong *)0x0) {
    local_708 = (longlong *)0x0;
  }
  else {
    local_708 = *(longlong **)((longlong)local_738 + 0x84);
  }
  local_540 = (longlong *)**(undefined8 **)(*param_6 + 0x40);
  local_6e0 = (*(undefined8 **)(*param_6 + 0x40))[0x12];
  local_538 = plVar43;
  uStack_530 = plVar41;
  FUN_1414998c8(local_158,param_3);
  plVar42 = *(longlong **)(param_3 + 0x30d8);
  local_6d8 = plVar41;
  local_6d0 = plVar43;
  local_6c8 = plVar28;
  if ((plVar42 == (longlong *)0x0) || ((*(byte *)(plVar42 + 1) & 2) == 0)) {
    local_8a0 = &local_2c8;
    local_2c8 = (longlong *)&DAT_3f8000003f800000;
    puStack_2c0 = &DAT_3f8000003f800000;
    local_8a8 = (wchar_t *)CONCAT44(local_8a8._4_4_,1);
    local_740 = (longlong *)FUN_1449cc94d(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10);
  }
  else {
    if (*(code **)(*plVar42 + 0x80) == (code *)&LAB_144b15db6) {
      local_2c8 = (longlong *)plVar42[(ulonglong)*(uint *)(plVar42 + 0xcd) + 0xd1];
    }
    else {
      local_2c8 = (longlong *)(**(code **)(*plVar42 + 0x80))();
    }
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
      UNLOCK();
    }
    local_740 = (longlong *)FUN_144735dd8(param_1,&local_2c8,1);
    if (local_2c8 != (longlong *)0x0) {
      LOCK();
      plVar43 = local_2c8 + 1;
      *(int *)plVar43 = (int)*plVar43 + -1;
      UNLOCK();
      if ((int)*plVar43 == 0) {
        (**(code **)*local_2c8)();
      }
    }
  }
  local_2c8 = local_4d8;
  puStack_2c0 = (undefined1 *)local_4d0;
  uStack_2b8 = uStack_4c8;
  local_2b0 = local_4c0;
  _local_2a8 = 0;
  bStack_2a0 = false;
  bStack_29f = 0;
  bStack_29e = false;
  bStack_29d = false;
  cStack_29c = 0;
  uStack_29b = 0;
  uStack_29a = 0;
  bStack_299 = 0;
  bStack_298 = false;
  uStack_297 = 0;
  bStack_296 = false;
  uVar50 = 0;
  memset(local_290,0,0x130);
  local_160 = 0x1300000013;
  uVar23 = FUN_140347e80(param_3);
  if (*(longlong *)(param_3 + 0x3108) != 0) {
    if (((*(byte *)(*(longlong *)(param_3 + 8) + 0x49) & 0x10) == 0) ||
       (*(int *)(DAT_14ca2c888 + 4) != 1)) {
      uVar50 = 0;
    }
    else {
      uVar50 = (uint)DAT_14c760e14;
    }
  }
  if (*(char *)(param_3 + 0x30c8) == '\0') {
    uVar22 = *(uint *)(*(longlong *)(param_3 + 8) + 0x48);
    if (*(int *)(param_3 + 0x3090) < 3) {
      bVar47 = DAT_14c760e14;
      if ((uVar22 & 1) == 0) goto LAB_142ed2e7d;
    }
    else {
      bVar47 = (byte)uVar22 & 1;
    }
  }
  else {
LAB_142ed2e7d:
    bVar47 = 0;
  }
  if (((DAT_14ca84dfc == '\x01') &&
      (*(longlong *)
        (&DAT_14ca814b0 +
        (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0x3c) ==
       DAT_14ca838f8)) &&
     ((*(byte *)(&DAT_14ca814c8 +
                (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) *
                0xf) & 1) != 0)) {
    uVar22 = FUN_1400b0b91(1,8);
    local_541 = 1 < uVar22;
  }
  else {
    local_541 = false;
  }
  if (*(float *)(param_3 + 0x2b6c) <= 0.0) {
    bVar36 = 0;
  }
  else {
    bVar36 = (*(byte *)(*(longlong *)(param_3 + 8) + 0x4d) & 8) >> 3;
  }
  bVar5 = *(byte *)(param_3 + 0x2544);
  bVar18 = 1;
  local_7dc = uVar50;
  if (DAT_14c760e14 == 0) {
    bVar6 = *(byte *)(param_6[1] + 0x60);
    bVar18 = FUN_147cef5fa();
    bVar18 = bVar18 & (bVar6 & 0x10) == 0;
  }
  if ((*(int *)(param_3 + 0x3024) != 0) ||
     (((bVar33 = true, *(int *)(param_3 + 0x4d8) == *(int *)(param_3 + 0x30f8) &&
       (*(int *)(param_3 + 0x4dc) == *(int *)(param_3 + 0x30fc))) &&
      ((*(int *)(param_3 + 0x4e0) == *(int *)(param_3 + 0x3100) &&
       (*(int *)(param_3 + 0x4e4) == *(int *)(param_3 + 0x3104))))))) {
    bVar33 = *(longlong *)(param_3 + 0x13860) != 0 && *(longlong *)(param_3 + 0x13858) != 0;
  }
  local_845 = (bVar5 & 1) == 0 & bVar36;
  lVar32 = *(longlong *)(*(longlong *)(param_3 + 8) + 400);
  cStack_29c = *(longlong *)(param_3 + 0x2f68) != 0;
  uStack_29b = 0;
  local_840 = param_1;
  bStack_29f = bVar18;
  uStack_29a = FUN_142fe7364();
  lVar44 = local_840;
  bStack_299 = lVar32 != 0 | bVar33;
  bStack_298 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x198) != 0;
  uStack_297 = 0;
  bStack_296 = (~*(uint *)(*(longlong *)(param_3 + 8) + 0x58) & 0x3000000) == 0;
  local_588 = local_840;
  local_580 = param_3;
  local_578 = param_4;
  local_570 = param_6;
  local_568 = &local_540;
  local_560 = &local_528;
  local_558 = &local_541;
  local_550 = &local_2c8;
  if (bVar47 == 0) {
    bStack_29e = false;
    bStack_29d = false;
    bStack_2a0 = false;
    _local_2a8 = 0;
    piVar25 = local_288;
    plVar35 = (longlong *)0x0;
    lVar32 = 0;
    do {
      uVar30 = (undefined4)lVar32;
      if (local_2a8[lVar32] == '\x01') {
        local_160 = CONCAT44(uVar30,uVar30);
      }
      if (0 < *piVar25) {
        local_160 = CONCAT44(uVar30,(undefined4)local_160);
      }
      lVar32 = lVar32 + 1;
      piVar25 = piVar25 + 4;
    } while (lVar32 != 0x13);
    plVar43 = (longlong *)0x0;
    plVar37 = (longlong *)0x0;
  }
  else {
    local_846 = *(byte *)(param_3 + 0x13810);
    fVar2 = *(float *)(param_3 + 0x2814);
    local_843 = 0.0 < fVar2;
    local_844 = (int)uVar23 == 1 & (byte)local_7dc;
    if ((int)uVar23 == 0 && (byte)local_7dc == 1) {
      uVar30 = (undefined4)
               CONCAT71((int7)((ulonglong)uVar23 >> 8),
                        *(float *)(param_3 + 0x29b8) <= *(float *)(param_3 + 0x29bc) &&
                        *(float *)(param_3 + 0x29bc) != *(float *)(param_3 + 0x29b8));
    }
    else {
      uVar30 = 0;
    }
    iVar20 = *(int *)(param_3 + 0x3020);
    cVar17 = FUN_14724d5af(param_3);
    iVar45 = *(int *)(param_3 + 0x815c);
    lVar32 = 0;
    FUN_142ef74c4(&local_328,param_3,0);
    piVar25 = local_288;
    local_842 = local_844 | (byte)uVar30;
    _local_2a8 = CONCAT17(0 < iVar45,
                          CONCAT16(0.0 < fVar2 | local_846,
                                   CONCAT15((char)local_7dc,
                                            CONCAT14(local_843,
                                                     CONCAT13(bVar36,CONCAT12((local_846 | local_845
                                                                              | local_842) & 1 |
                                                                              0.0 < fVar2,
                                                                              CONCAT11(bVar36 | 
                                                  local_846,cVar17)))))));
    bStack_2a0 = iVar20 == 2;
    bStack_29e = local_2d0 != 0;
    bStack_29d = *(int *)(param_3 + 0x3020) == 1;
    do {
      uVar48 = (undefined4)lVar32;
      if (local_2a8[lVar32] == '\x01') {
        local_160 = CONCAT44(uVar48,uVar48);
      }
      if (0 < *piVar25) {
        local_160 = CONCAT44(uVar48,(undefined4)local_160);
      }
      lVar32 = lVar32 + 1;
      piVar25 = piVar25 + 4;
    } while (lVar32 != 0x13);
    local_834 = uVar30;
    if (cVar17 != '\0') {
      local_8a8 = (wchar_t *)&local_498;
      local_498 = local_540;
      uStack_490 = local_538;
      uStack_488 = uStack_530;
      FUN_142df5110(&local_5e8,lVar44,local_7c0,param_3);
      local_408 = (wchar_t *)local_540;
      uStack_400 = SUB84(local_538,0);
      uStack_3fc = (undefined1)((ulonglong)local_538 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)local_538 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)local_538 >> 0x38);
      uStack_3f8 = SUB84(uStack_530,0);
      uStack_3f4 = (undefined4)((ulonglong)uStack_530 >> 0x20);
      bStack_3f0 = (byte)local_5e8;
      uStack_3ef = (undefined1)((ulonglong)local_5e8 >> 8);
      uStack_3ee = (undefined2)((ulonglong)local_5e8 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)local_5e8 >> 0x20);
      uStack_3e8 = (undefined4)uStack_5e0;
      iStack_3e4 = uStack_5e0._4_4_;
      uStack_3e0 = uStack_5d8;
      FUN_142df55b5(&local_4b8,lVar44,param_3);
      local_540 = local_4b8;
      local_538 = local_4b0;
      uStack_530 = plStack_4a8;
    }
    FUN_142ed6600(&local_588,2);
    plVar28 = (longlong *)0x0;
    plVar43 = (longlong *)0x0;
    plVar41 = (longlong *)0x0;
    if (local_2a8[1] == '\x01') {
      cVar17 = FUN_14743049a(*(undefined2 *)
                              (&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2));
      bVar47 = local_846;
      if ((DAT_14ca964f0 & 1) != 0) {
        plVar28 = (longlong *)(ulonglong)DAT_14c760e14;
      }
      uVar39 = 1;
      if (cVar17 != '\0') {
        uVar39 = (char)plVar28;
      }
      local_478 = (longlong *)
                  CONCAT71(CONCAT43(local_478._4_4_,CONCAT12(local_541,CONCAT11(uVar39,bVar36))),
                           local_846);
      local_498 = local_540;
      uStack_490 = local_538;
      uStack_488 = uStack_530;
      plStack_480 = (longlong *)*param_6;
      FUN_142efa77f(&local_408,lVar44,param_3);
      if ((local_541 & bVar47) == 1) {
        local_540 = (longlong *)
                    CONCAT44(uStack_3ec,CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)));
        local_538 = (longlong *)CONCAT44(iStack_3e4,uStack_3e8);
        uStack_530 = uStack_3e0;
        local_541 = 0;
      }
      plVar43 = (longlong *)
                CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
      plVar41 = (longlong *)CONCAT44(uStack_3f4,uStack_3f8);
      plVar28 = (longlong *)local_408;
    }
    plVar35 = local_468;
    local_7c8 = (longlong *)0x0;
    local_728 = 0;
    local_730 = (longlong *)0x0;
    plVar42 = (longlong *)0x0;
    local_7b0 = (longlong *)0x0;
    local_710 = (longlong *)0x0;
    local_6e8 = (longlong *)0x0;
    plVar37 = (longlong *)0x0;
    local_6f0 = (longlong *)0x0;
    if (local_2a8[2] == '\x01') {
      local_8a8 = (wchar_t *)&local_498;
      local_468._0_2_ = (ushort)local_843;
      local_468._0_3_ = CONCAT12(local_845,(ushort)local_468);
      local_468._4_4_ = SUB84(plVar35,4);
      local_468 = (longlong *)
                  (CONCAT44(local_468._4_4_,CONCAT13(local_842,(undefined3)local_468)) &
                  0xffffffff01ffffff);
      plVar42 = local_468;
      local_468._0_5_ = CONCAT14(local_541,(undefined4)local_468);
      local_468._0_2_ = CONCAT11(local_846,(char)plVar42);
      local_498 = local_540;
      uStack_490 = local_538;
      uStack_488 = uStack_530;
      plStack_480 = plVar28;
      local_478 = plVar43;
      plStack_470 = plVar41;
      FUN_142ef8e30(&local_408,lVar44,param_3,local_158);
      local_7b0 = (longlong *)local_408;
      local_728 = CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
      local_730 = (longlong *)CONCAT44(uStack_3f4,uStack_3f8);
      local_7c8 = (longlong *)
                  CONCAT44(uStack_3ec,CONCAT22(uStack_3ee,CONCAT11(uStack_3ef,bStack_3f0)));
      plVar42 = (longlong *)CONCAT44(iStack_3e4,uStack_3e8);
      local_710 = uStack_3e0;
      local_6e8 = local_3d0;
      plVar37 = uStack_3d8;
      local_6f0 = uStack_3c8;
    }
    plVar35 = uStack_3d8;
    uVar30 = local_834;
    if (local_2a8[3] == '\x01') {
      local_830 = plVar28;
      if (local_845 == 0) {
        fVar2 = *(float *)(DAT_14ca27da0 + 4);
        fVar54 = *(float *)(param_3 + 0x2b74);
        if (fVar2 <= *(float *)(param_3 + 0x2b74)) {
          fVar54 = fVar2;
        }
        fVar53 = *(float *)(param_3 + 0x2b70);
        if (fVar2 <= *(float *)(param_3 + 0x2b70)) {
          fVar53 = fVar2;
        }
        fVar2 = *(float *)(DAT_14ca27d88 + 4);
        if ((0.01 <= fVar54) || (fVar2 <= fVar53)) {
          if ((0.01 <= fVar54) || (fVar2 <= fVar53)) {
            local_7b8 = (longlong *)CONCAT71(local_7b8._1_7_,0.01 <= fVar54);
            local_7e0 = CONCAT31(local_7e0._1_3_,fVar2 <= fVar53);
            local_7a8 = (undefined1 *)local_540[0xc];
            local_808 = (longlong *)
                        CONCAT62(local_808._2_6_,*(undefined2 *)((longlong)local_540 + 0x8e));
            local_828 = (longlong *)CONCAT71(local_828._1_7_,(char)local_540[0x12]);
            iVar20 = (int)*(undefined8 *)((longlong)local_540 + 0x84);
            iVar21 = iVar20 + 3;
            iVar45 = (int)((ulonglong)*(undefined8 *)((longlong)local_540 + 0x84) >> 0x20);
            iVar31 = iVar45 + 3;
            iVar45 = iVar45 + 6;
            if (-1 < iVar31) {
              iVar45 = iVar31;
            }
            iVar45 = iVar45 >> 2;
            iVar20 = iVar20 + 6;
            if (-1 < iVar21) {
              iVar20 = iVar21;
            }
            iVar20 = iVar20 >> 2;
            iVar21 = (int)((ulonglong)uStack_530 >> 0x20);
            uVar22 = iVar21 + 3;
            uVar50 = iVar21 + 6;
            if (-1 < (int)uVar22) {
              uVar50 = uVar22;
            }
            local_810 = (longlong *)(ulonglong)uVar50;
            uVar22 = (int)uStack_530 + 3;
            local_758 = uStack_530;
            uVar50 = (int)uStack_530 + 6;
            if (-1 < (int)uVar22) {
              uVar50 = uVar22;
            }
            local_800 = (longlong *)(ulonglong)uVar50;
            local_6f8 = local_538;
            local_7d0 = (longlong *)(ulonglong)((int)local_538 + 3);
            if (-1 < (int)local_538) {
              local_7d0 = (longlong *)((ulonglong)local_538 & 0xffffffff);
            }
            iVar21 = (int)((ulonglong)local_538 >> 0x20);
            iVar31 = iVar21 + 3;
            if (-1 < (longlong)local_538) {
              iVar31 = iVar21;
            }
            uStack_400 = (undefined4)local_540[0xd];
            uVar30 = *(undefined4 *)((longlong)local_540 + 0x6c);
            uVar48 = (undefined4)local_540[0xe];
            uVar3 = *(undefined4 *)((longlong)local_540 + 0x74);
            uVar4 = (undefined4)local_540[0xf];
            uStack_3e8 = (undefined4)local_540[0x10];
            local_760 = local_540;
            uStack_3ec = *(undefined4 *)((longlong)local_540 + 0x7c);
            local_7a0 = CONCAT71(local_7a0._1_7_,*(byte *)((longlong)local_540 + 0x92));
            uStack_3d8._0_3_ = (uint3)*(byte *)((longlong)local_540 + 0x92) << 0x10;
            uStack_3d8._0_4_ = CONCAT13(10,(int3)uStack_3d8);
            local_7e4 = CONCAT31(local_7e4._1_3_,*(undefined1 *)((longlong)local_540 + 0x94));
            uStack_3d8._0_5_ =
                 CONCAT14(*(undefined1 *)((longlong)local_540 + 0x94),(undefined4)uStack_3d8);
            local_798 = (longlong *)
                        CONCAT62(local_798._2_6_,*(undefined2 *)((longlong)local_540 + 0x8c));
            local_814 = CONCAT31(local_814._1_3_,*(undefined1 *)((longlong)local_540 + 0x91));
            uVar10 = (uint5)(undefined5)uStack_3d8 >> 0x10;
            uStack_3d8._0_2_ =
                 CONCAT11(*(undefined1 *)((longlong)local_540 + 0x91),(char)local_540[0x12]);
            local_778 = (undefined8 *)CONCAT44(local_778._4_4_,uStack_400);
            uStack_3fc = (undefined1)uVar30;
            uVar39 = uStack_3fc;
            wStack_3fb = (wchar_t)((uint)uVar30 >> 8);
            wVar13 = wStack_3fb;
            uStack_3f9 = (undefined1)((uint)uVar30 >> 0x18);
            uVar14 = uStack_3f9;
            bStack_3f0 = (byte)uVar4;
            bVar47 = bStack_3f0;
            uStack_3ef = (undefined1)((uint)uVar4 >> 8);
            uVar15 = uStack_3ef;
            uStack_3ee = (undefined2)((uint)uVar4 >> 0x10);
            uVar16 = uStack_3ee;
            local_780 = CONCAT44(local_780._4_4_,uStack_3e8);
            local_770 = (undefined1 *)
                        CONCAT71(local_770._1_7_,*(undefined1 *)((longlong)local_540 + 0x95));
            uStack_3d8._6_2_ = SUB82(plVar35,6);
            uStack_3d8._0_6_ =
                 CONCAT15(*(undefined1 *)((longlong)local_540 + 0x95),
                          CONCAT32((int3)uVar10,(undefined2)uStack_3d8));
            iStack_3e4 = DAT_14ca84e40;
            if (iVar20 < DAT_14ca84e40) {
              iStack_3e4 = iVar20;
            }
            if (iStack_3e4 < 2) {
              iStack_3e4 = 1;
            }
            local_768 = CONCAT44(local_768._4_4_,uStack_3ec);
            iVar21 = DAT_14ca84e40;
            if (iVar45 < DAT_14ca84e40) {
              iVar21 = iVar45;
            }
            if (iVar21 < 2) {
              iVar21 = 1;
            }
            uStack_3e0 = (longlong *)CONCAT44(*(undefined4 *)((longlong)local_540 + 0x8c),iVar21);
            plVar38 = (longlong *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            plVar35 = (longlong *)(lVar44 + 0x70);
            plVar28 = plVar38 + 0x24;
            local_820 = plVar37;
            local_7f8 = plVar42;
            local_7f0 = plVar35;
            local_750 = plVar41;
            local_748 = plVar43;
            local_408 = (wchar_t *)local_7a8;
            uStack_3f8 = uVar48;
            uStack_3f4 = uVar3;
            if (*(longlong **)(lVar44 + 0x78) < plVar28) {
              FUN_140023dd8(plVar35,0x128);
              plVar38 = (longlong *)(*plVar35 + 7U & 0xfffffffffffffff8);
              plVar28 = plVar38 + 0x24;
            }
            local_788 = lVar44 + 0x178;
            *(longlong **)(lVar44 + 0x70) = plVar28;
            local_790 = (undefined8 *)0x0;
            FUN_1456bbb8c(plVar38,L"DOFSetup0",&local_408,0);
            iVar21 = *(int *)(lVar44 + 0x180);
            *(uint *)(lVar44 + 0x180) = iVar21 + 1U;
            if (*(uint *)(lVar44 + 0x184) < iVar21 + 1U) {
              FUN_14472c0f6(local_788,iVar21);
            }
            uVar23 = uStack_3d8;
            plVar43 = local_7f0;
            uVar46 = (ulonglong)(uint)((int)local_810 >> 2);
            local_800 = (longlong *)(ulonglong)(uint)((int)local_800 >> 2);
            local_7d0 = (longlong *)(ulonglong)(uint)((int)local_7d0 >> 2);
            *(longlong **)(*(longlong *)(lVar44 + 0x178) + (longlong)iVar21 * 8) = plVar38;
            *(int *)((longlong)plVar38 + 0x9c) = *(int *)(lVar44 + 0x180) + -1;
            local_714 = -(uint)(fVar2 <= fVar53 && 0.01 <= fVar54);
            local_7d8 = plVar38;
            if ((local_714 & 1) == 0) {
              local_814 = 0;
              local_7a0 = 0;
              local_7a8 = (undefined1 *)((ulonglong)local_7a8 & 0xffffffff00000000);
              local_810 = (longlong *)0x0;
              plVar41 = (longlong *)0x0;
              local_798 = plVar38;
            }
            else {
              uStack_3d8._0_3_ = (uint3)(byte)local_7a0 << 0x10;
              local_408 = (wchar_t *)local_7a8;
              uStack_3d8._0_4_ = CONCAT13(10,(int3)uStack_3d8);
              uStack_3d8._0_5_ = CONCAT14((undefined1)local_7e4,(undefined4)uStack_3d8);
              uStack_3e0 = (longlong *)(((ulonglong)local_798 & 0xffff) << 0x20);
              uStack_3e0 = (longlong *)CONCAT26(local_808._0_2_,(undefined6)uStack_3e0);
              uVar10 = (uint5)(undefined5)uStack_3d8 >> 0x10;
              uStack_3d8._0_2_ = CONCAT11((undefined1)local_814,local_828._0_1_);
              uStack_400 = local_778._0_4_;
              uStack_3e8 = (undefined4)local_780;
              if (DAT_14ca84e40 <= iVar20) {
                iVar20 = DAT_14ca84e40;
              }
              iStack_3e4 = iVar20;
              if (iVar20 < 2) {
                iStack_3e4 = 1;
              }
              uStack_3d8._6_2_ = SUB82(uVar23,6);
              uStack_3d8._0_6_ =
                   CONCAT15(local_770._0_1_,CONCAT32((int3)uVar10,(undefined2)uStack_3d8));
              iVar20 = DAT_14ca84e40;
              if (iVar45 < DAT_14ca84e40) {
                iVar20 = iVar45;
              }
              uStack_3ec = (undefined4)local_768;
              if (iVar20 < 2) {
                iVar20 = 1;
              }
              uStack_3e0 = (longlong *)CONCAT44(uStack_3e0._4_4_,iVar20);
              plVar41 = (longlong *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
              plVar28 = plVar41 + 0x24;
              uStack_3fc = uVar39;
              wStack_3fb = wVar13;
              uStack_3f9 = uVar14;
              uStack_3f8 = uVar48;
              uStack_3f4 = uVar3;
              bStack_3f0 = bVar47;
              uStack_3ef = uVar15;
              uStack_3ee = uVar16;
              if (*(longlong **)(lVar44 + 0x78) < plVar28) {
                FUN_140023dd8(local_7f0,0x128);
                plVar41 = (longlong *)(*plVar43 + 7U & 0xfffffffffffffff8);
                plVar28 = plVar41 + 0x24;
              }
              *(longlong **)(lVar44 + 0x70) = plVar28;
              FUN_1456bbb8c(plVar41,L"DOFSetup1",&local_408,0);
              iVar20 = *(int *)(lVar44 + 0x180);
              *(uint *)(lVar44 + 0x180) = iVar20 + 1U;
              if (*(uint *)(lVar44 + 0x184) < iVar20 + 1U) {
                FUN_14472c0f6(local_788,iVar20);
              }
              *(longlong **)(*(longlong *)(lVar44 + 0x178) + (longlong)iVar20 * 8) = plVar41;
              iVar20 = *(int *)(lVar44 + 0x180) + -1;
              *(int *)((longlong)plVar41 + 0x9c) = iVar20;
              local_810 = (longlong *)CONCAT71((uint7)(uint3)((uint)iVar20 >> 8),2);
              local_814 = (uint)local_7d0;
              local_7a8 = (undefined1 *)CONCAT44(local_7a8._4_4_,(int)local_800);
              local_7a0 = uVar46;
              local_798 = plVar41;
              local_790 = (undefined8 *)(ulonglong)(uint)(iVar31 >> 2);
            }
            fVar51 = 0.0;
            if (0.0 <= *(float *)(param_3 + 0x2b80)) {
              fVar51 = *(float *)(param_3 + 0x2b80);
            }
            iVar20 = 0;
            if (fVar2 <= fVar53) {
              iVar20 = (fVar51 < 200.0) + 1;
            }
            uVar23 = *(undefined8 *)(param_3 + 0x13818);
            local_7e4 = (uint)(0.01 <= fVar54) * 3;
            iVar20 = iVar20 + local_7e4;
            FUN_145f32760();
            FUN_1448e935e(uVar23,&local_408,&DAT_14ca26e10,iVar20);
            FUN_145f32760();
            plVar43 = local_7f0;
            local_770 = (undefined1 *)local_408;
            local_768 = CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
            puVar49 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar24 = puVar49 + 0x2c;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar24) {
              FUN_140023dd8(local_7f0,0x170);
              puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
              puVar24 = puVar49 + 0x2c;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar24;
            *puVar49 = &PTR_FUN_14a2bab98;
            local_778 = puVar49 + 2;
            FUN_147293302();
            plVar43 = local_830;
            local_828 = (longlong *)(lVar44 + 0x98);
            iVar20 = *(int *)(lVar44 + 0xa0);
            *(uint *)(lVar44 + 0xa0) = iVar20 + 1U;
            if (*(uint *)(lVar44 + 0xa4) < iVar20 + 1U) {
              FUN_1448cfae8(local_828,iVar20);
            }
            plVar42 = local_760;
            plVar28 = local_7d8;
            local_808 = (longlong *)((ulonglong)(uint)(iVar31 >> 2) << 0x20);
            *(undefined8 **)(*local_828 + (longlong)iVar20 * 8) = puVar49;
            puVar49[0xc] = local_7d8;
            puVar49[0xd] = 0;
            *(undefined4 *)(puVar49 + 0xe) = 0xffff0002;
            puVar49[0xf] = plVar41;
            puVar49[0x10] = 0;
            *(char *)(puVar49 + 0x11) = (char)local_810;
            *(undefined1 *)((longlong)puVar49 + 0x89) = 0;
            *(undefined2 *)((longlong)puVar49 + 0x8a) = 0xffff;
            fVar52 = *(float *)(param_3 + 0x2b80) / 100.0;
            fVar52 = fVar52 + fVar52;
            fVar51 = 0.0;
            if (0.0 <= fVar52) {
              fVar51 = fVar52;
            }
            uVar50 = -(uint)(0.0 < *(float *)(param_3 + 0x2b7c));
            *(uint *)(puVar49 + 2) =
                 ~uVar50 & 0x4cbebc20 | (uint)*(float *)(param_3 + 0x2b7c) & uVar50;
            *(undefined4 *)((longlong)puVar49 + 0x14) = 0x41200000;
            *(float *)(puVar49 + 3) = (0.5 - fVar51) * 10.0;
            *(undefined4 *)((longlong)puVar49 + 0x1c) = 0;
            lVar32 = local_760[0x11];
            iVar20 = *(int *)((longlong)local_760 + 0x84);
            *(float *)(puVar49 + 4) = (float)iVar20;
            *(float *)((longlong)puVar49 + 0x24) = (float)(int)lVar32;
            *(float *)(puVar49 + 5) = 1.0 / (float)iVar20;
            *(float *)((longlong)puVar49 + 0x2c) = 1.0 / (float)(int)lVar32;
            lVar32 = FUN_1447e4f80();
            cVar17 = '\x02';
            if (*(char *)(lVar32 + 0x41) != '\x03') {
              cVar17 = *(char *)(lVar32 + 0x41);
            }
            puVar49[6] = *(undefined8 *)(param_3 + 0x18);
            *(char *)(puVar49 + 7) = cVar17;
            puVar49[8] = plVar42;
            uVar23 = DAT_14ca2c3b0;
            puVar49[9] = DAT_14ca2c3b0;
            puVar49[10] = plVar43;
            puVar49[0xb] = uVar23;
            local_760 = *(longlong **)((longlong)plVar42 + 0x84);
            local_780 = *(undefined8 *)((longlong)plVar28 + 0x84);
            local_700 = (longlong)*(int *)(param_3 + 0x3090);
            local_718 = *(undefined4 *)(param_3 + 0x1dd4);
            local_71c = *(undefined4 *)(param_3 + 0x3094);
            local_841 = (&DAT_00001de6)[param_3];
            uVar23 = *(undefined8 *)
                      (&DAT_14ca8c1f0 + (ulonglong)*(ushort *)(&DAT_14ca85070 + local_700 * 2) * 8);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_860 = &LAB_14712ac08;
              local_868 = &LAB_14712ac0c;
              local_870 = &LAB_1472e3912;
              local_878 = &LAB_1472e3916;
              local_880 = FUN_1472e391a;
              local_888 = FUN_1472e3942;
              local_8a0 = (longlong **)0x14a2f5d42;
              local_8a8 = L"/Engine/Private/ScreenPass.usf";
              local_850 = 0;
              local_858 = 0xe0;
              local_890 = 1;
              local_898 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            local_808 = (longlong *)((longlong)local_808 + (longlong)local_7d0);
            local_810 = (longlong *)((uVar46 << 0x20) + (longlong)local_800);
            FUN_1448e935e(uVar23,&local_408,&DAT_14ca4b6d8,0);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_860 = &LAB_14712ac08;
              local_868 = &LAB_14712ac0c;
              local_870 = &LAB_1472e3912;
              local_878 = &LAB_1472e3916;
              local_880 = FUN_1472e391a;
              local_888 = FUN_1472e3942;
              local_8a0 = (longlong **)0x14a2f5d42;
              local_8a8 = L"/Engine/Private/ScreenPass.usf";
              local_850 = 0;
              local_858 = 0xe0;
              local_890 = 1;
              local_898 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            puVar12 = (undefined1 *)local_408;
            uVar23 = DAT_14c9c0d98;
            puVar9 = (undefined1 *)
                     CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
            local_800 = DAT_14c9c0d50;
            FUN_145f329ce();
            puVar11 = local_770;
            puVar24 = local_778;
            local_408 = (wchar_t *)0x0;
            uStack_400 = 0;
            uStack_3fc = 0;
            wStack_3fb = 0;
            uStack_3f9 = 0;
            FUN_1448f70da(local_770,&DAT_14ca29a20,local_778,&local_408);
            plVar41 = local_808;
            plVar43 = local_810;
            local_408 = (wchar_t *)CONCAT44(local_718,(int)local_700);
            uStack_400 = local_71c;
            uStack_3fc = local_841;
            wStack_3fb = (wchar_t)local_498;
            uStack_3f9 = local_498._2_1_;
            uStack_3f8 = (undefined4)local_780;
            uStack_3f4 = (undefined4)((ulonglong)local_780 >> 0x20);
            bStack_3f0 = (byte)local_808;
            uStack_3ef = (undefined1)((ulonglong)local_808 >> 8);
            uStack_3ee = (undefined2)((ulonglong)local_808 >> 0x10);
            uStack_3ec = (undefined4)((ulonglong)local_808 >> 0x20);
            uStack_3e8 = SUB84(local_810,0);
            iStack_3e4 = (int)((ulonglong)local_810 >> 0x20);
            uStack_3e0 = local_760;
            uStack_3d8 = local_6f8;
            local_3d0 = local_758;
            uStack_3c8 = (longlong *)puVar12;
            local_3b8 = (longlong *)puVar11;
            uStack_3b0 = (longlong *)local_768;
            local_3a8 = local_800;
            local_3a0 = (undefined4)uVar23;
            uStack_39c = (undefined4)((ulonglong)uVar23 >> 0x20);
            uStack_398 = (undefined4)DAT_14ca94df8;
            uStack_394 = (undefined4)((ulonglong)DAT_14ca94df8 >> 0x20);
            uStack_390 = uStack_390 & 0xffffff00;
            local_388 = (longlong *)puVar11;
            plStack_380 = (longlong *)local_768;
            local_378 = puVar24;
            plStack_370 = (longlong *)((ulonglong)plStack_370 & 0xffffffffffffff00);
            local_3c0 = (longlong *)puVar9;
            FUN_145f329ce();
            FUN_147293408(lVar44,&local_5e8,puVar24,&local_408);
            uStack_5c0 = (longlong *)((ulonglong)local_7a8 & 0xffffffff | local_7a0 << 0x20);
            local_5c8 = (longlong *)((ulonglong)local_814 | (longlong)local_790 << 0x20);
            if ((local_714 & 1) == 0) {
              uStack_5c0 = plVar43;
              local_5c8 = plVar41;
            }
            local_5e8 = local_7d8;
            uStack_5e0 = plVar41;
            uStack_5d8 = plVar43;
            local_5d0 = local_798;
            plVar43 = (longlong *)0x0;
            plVar41 = (longlong *)0x0;
            plVar28 = (longlong *)0x0;
            if (0.01 <= fVar54) {
              uStack_3e0 = (longlong *)0x0;
              uStack_3d8 = (longlong *)0x0;
              local_3d0 = (longlong *)0x0;
              uStack_3b0._0_5_ = (uint5)(uint)uStack_3b0;
              local_408 = L"FarDOFBlurX";
              uStack_400 = 0x4a2ba67e;
              uStack_3fc = 1;
              wStack_3fb = 0;
              uStack_3f9 = 0;
              FUN_1448a0832(&local_498,lVar44,&local_5e8);
              uStack_3f8 = SUB84(local_498,0);
              uStack_3f4 = (undefined4)((ulonglong)local_498 >> 0x20);
              bStack_3f0 = (byte)uStack_490;
              uStack_3ef = (undefined1)((ulonglong)uStack_490 >> 8);
              uStack_3ee = (undefined2)((ulonglong)uStack_490 >> 0x10);
              uStack_3ec = (undefined4)((ulonglong)uStack_490 >> 0x20);
              uStack_3e8 = SUB84(uStack_488,0);
              iStack_3e4 = (int)((ulonglong)uStack_488 >> 0x20);
              uStack_3c8 = (longlong *)&DAT_3f8000003f800000;
              local_3c0 = (longlong *)&DAT_3f8000003f800000;
              local_3b8 = (longlong *)DAT_14c84635c;
              uStack_3b0 = (longlong *)CONCAT44(uStack_3b0._4_4_,fVar54);
              FUN_1448a0359(&local_498,lVar44,param_3,&local_408);
              plVar43 = uStack_490;
              plVar41 = uStack_488;
              plVar28 = local_498;
            }
            plStack_460 = (longlong *)0x0;
            local_458 = (longlong *)0x0;
            plVar42 = (longlong *)0x0;
            if (fVar2 <= fVar53) {
              uStack_3e0 = (longlong *)0x0;
              uStack_3d8 = (longlong *)0x0;
              local_3d0 = (longlong *)0x0;
              uStack_3b0._0_5_ = (uint5)(uint)uStack_3b0;
              local_408 = L"NearDOFBlurX";
              uStack_400 = 0x4a2ba696;
              uStack_3fc = 1;
              wStack_3fb = 0;
              uStack_3f9 = 0;
              FUN_1448a0832(&local_498,lVar44,&local_5d0);
              uStack_3f8 = SUB84(local_498,0);
              uStack_3f4 = (undefined4)((ulonglong)local_498 >> 0x20);
              bStack_3f0 = (byte)uStack_490;
              uStack_3ef = (undefined1)((ulonglong)uStack_490 >> 8);
              uStack_3ee = (undefined2)((ulonglong)uStack_490 >> 0x10);
              uStack_3ec = (undefined4)((ulonglong)uStack_490 >> 0x20);
              uStack_3e8 = SUB84(uStack_488,0);
              iStack_3e4 = (int)((ulonglong)uStack_488 >> 0x20);
              uStack_3c8 = (longlong *)&DAT_3f8000003f800000;
              local_3c0 = (longlong *)&DAT_3f8000003f800000;
              local_3b8 = (longlong *)DAT_14c84635c;
              uStack_3b0 = (longlong *)CONCAT44(uStack_3b0._4_4_,fVar53);
              FUN_1448a0359(&local_498,lVar44,param_3,&local_408);
              plStack_460 = uStack_490;
              local_458 = uStack_488;
              plVar42 = local_498;
            }
            plVar29 = uStack_3d8;
            plVar38 = local_540;
            plVar37 = local_7f0;
            plVar35 = local_830;
            local_438 = local_7b8._0_1_;
            cVar17 = (char)local_7e0;
            local_437 = (char)local_7e0;
            local_498 = local_540;
            local_800 = local_538;
            uStack_490 = local_538;
            local_7d0 = uStack_530;
            uStack_488 = uStack_530;
            plStack_450 = local_830;
            local_448 = local_748;
            plStack_440 = local_750;
            uStack_400 = (undefined4)local_540[0xd];
            uVar30 = *(undefined4 *)((longlong)local_540 + 0x6c);
            uStack_3f8 = (undefined4)local_540[0xe];
            uStack_3f4 = *(undefined4 *)((longlong)local_540 + 0x74);
            uVar48 = (undefined4)local_540[0xf];
            local_408 = (wchar_t *)((local_540[0xc] & 0xfffffffff7fdeffcU) + 1);
            uStack_3d8._0_3_ = (uint3)*(byte *)((longlong)local_540 + 0x92) << 0x10;
            uStack_3d8._0_4_ = CONCAT13(0x1a,(int3)uStack_3d8);
            uStack_3d8._6_2_ = SUB82(plVar29,6);
            uStack_3d8._0_6_ =
                 CONCAT24(*(undefined2 *)((longlong)local_540 + 0x94),(undefined4)uStack_3d8);
            uStack_3d8._0_2_ = CONCAT11(1,(char)local_540[0x12]);
            uStack_3fc = (undefined1)uVar30;
            wStack_3fb = (wchar_t)((uint)uVar30 >> 8);
            uStack_3f9 = (undefined1)((uint)uVar30 >> 0x18);
            bStack_3f0 = (byte)uVar48;
            uStack_3ef = (undefined1)((uint)uVar48 >> 8);
            uStack_3ee = (undefined2)((uint)uVar48 >> 0x10);
            iVar20 = (int)*(undefined8 *)((longlong)local_540 + 0x84);
            iStack_3e4 = DAT_14ca84e40;
            if (iVar20 < DAT_14ca84e40) {
              iStack_3e4 = iVar20;
            }
            if (iStack_3e4 < 2) {
              iStack_3e4 = 1;
            }
            iVar45 = (int)((ulonglong)*(undefined8 *)((longlong)local_540 + 0x84) >> 0x20);
            iVar20 = DAT_14ca84e40;
            if (iVar45 < DAT_14ca84e40) {
              iVar20 = iVar45;
            }
            uStack_3ec = (undefined4)*(undefined8 *)((longlong)local_540 + 0x7c);
            uStack_3e8 = (undefined4)
                         ((ulonglong)*(undefined8 *)((longlong)local_540 + 0x7c) >> 0x20);
            if (iVar20 < 2) {
              iVar20 = 1;
            }
            uStack_3e0 = (longlong *)CONCAT44(*(undefined4 *)((longlong)local_540 + 0x8c),iVar20);
            plVar40 = (longlong *)(*(longlong *)(lVar44 + 0x70) + 7U & 0xfffffffffffffff8);
            plVar29 = plVar40 + 0x24;
            local_7d8 = plVar42;
            local_7b8 = plVar41;
            plStack_480 = plVar28;
            local_478 = plVar43;
            plStack_470 = plVar41;
            local_468 = plVar42;
            if (*(longlong **)(lVar44 + 0x78) < plVar29) {
              FUN_140023dd8(local_7f0,0x128);
              plVar40 = (longlong *)(*plVar37 + 7U & 0xfffffffffffffff8);
              plVar29 = plVar40 + 0x24;
            }
            *(longlong **)(lVar44 + 0x70) = plVar29;
            FUN_1456bbb8c(plVar40,L"DofRecombine",&local_408,0);
            iVar20 = *(int *)(lVar44 + 0x180);
            *(uint *)(lVar44 + 0x180) = iVar20 + 1U;
            if (*(uint *)(lVar44 + 0x184) < iVar20 + 1U) {
              FUN_14472c0f6(local_788,iVar20);
            }
            *(longlong **)(*(longlong *)(lVar44 + 0x178) + (longlong)iVar20 * 8) = plVar40;
            *(int *)((longlong)plVar40 + 0x9c) = *(int *)(lVar44 + 0x180) + -1;
            uVar23 = *(undefined8 *)(param_3 + 0x13818);
            cVar19 = (char)local_7e4;
            FUN_145f32d54();
            FUN_1448e935e(uVar23,&local_408,&DAT_14ca26f38,cVar19 + cVar17);
            FUN_145f32d54();
            plVar43 = local_7f0;
            local_810 = (longlong *)local_408;
            local_808 = (longlong *)
                        CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
            iVar20 = *(int *)(param_3 + 0x30f8);
            iVar45 = *(int *)(param_3 + 0x30fc);
            iVar21 = *(int *)((longlong)plVar38 + 0x84);
            lVar32 = plVar38[0x11];
            uVar50 = *(uint *)(param_3 + 0x3100);
            uVar22 = *(uint *)(param_3 + 0x3104);
            puVar49 = (undefined8 *)(*(longlong *)(lVar44 + 0x70) + 0xfU & 0xfffffffffffffff0);
            puVar24 = puVar49 + 0x30;
            if (*(undefined8 **)(lVar44 + 0x78) < puVar24) {
              FUN_140023dd8(local_7f0,400);
              puVar49 = (undefined8 *)(*plVar43 + 0xfU & 0xfffffffffffffff0);
              puVar24 = puVar49 + 0x30;
            }
            *(undefined8 **)(lVar44 + 0x70) = puVar24;
            *puVar49 = &PTR_FUN_14a2babb8;
            local_790 = puVar49 + 2;
            FUN_1472936e8();
            iVar31 = *(int *)(lVar44 + 0xa0);
            *(uint *)(lVar44 + 0xa0) = iVar31 + 1U;
            if (*(uint *)(lVar44 + 0xa4) < iVar31 + 1U) {
              FUN_1448cfae8(local_828,iVar31);
            }
            *(undefined8 **)(*local_828 + (longlong)iVar31 * 8) = puVar49;
            puVar49[0x10] = plVar40;
            puVar49[0x11] = 0;
            *(undefined4 *)(puVar49 + 0x12) = 0xffff0002;
            *(float *)(puVar49 + 2) = ((float)(int)(iVar20 + 1U & 0xfffffffe) + 3.0) / (float)iVar21
            ;
            *(float *)((longlong)puVar49 + 0x14) =
                 ((float)(int)(iVar45 + 1U & 0xfffffffe) + 3.0) / (float)(int)lVar32;
            *(float *)(puVar49 + 3) = ((float)(int)(uVar50 & 0xfffffffe) + -3.0) / (float)iVar21;
            *(float *)((longlong)puVar49 + 0x1c) =
                 ((float)(int)(uVar22 & 0xfffffffe) + -3.0) / (float)(int)lVar32;
            lVar32 = plVar38[0x11];
            pplVar27 = (longlong **)&local_468;
            iVar20 = *(int *)((longlong)plVar38 + 0x84);
            *(float *)(puVar49 + 4) = (float)iVar20;
            *(float *)((longlong)puVar49 + 0x24) = (float)(int)lVar32;
            *(float *)(puVar49 + 5) = 1.0 / (float)iVar20;
            *(float *)((longlong)puVar49 + 0x2c) = 1.0 / (float)(int)lVar32;
            lVar32 = FUN_1447e4f80();
            cVar17 = '\x02';
            if (*(char *)(lVar32 + 0x41) != '\x03') {
              cVar17 = *(char *)(lVar32 + 0x41);
            }
            puVar49[6] = *(undefined8 *)(param_3 + 0x18);
            *(char *)(puVar49 + 7) = cVar17;
            puVar49[8] = local_498;
            uVar23 = DAT_14c9c0de0;
            puVar49[9] = DAT_14c9c0de0;
            puVar49[10] = plStack_480;
            puVar49[0xb] = uVar23;
            puVar49[0xc] = local_7d8;
            puVar49[0xd] = uVar23;
            puVar49[0xe] = plVar35;
            puVar49[0xf] = DAT_14ca2c3b0;
            if (plStack_480 != (longlong *)0x0) {
              if ((int)((ulonglong)local_7b8 >> 0x20) != local_478._4_4_ ||
                  (int)local_7b8 != (int)local_478) {
                pplVar27 = &plStack_480;
              }
              local_7d8 = *pplVar27;
            }
            local_828 = pplVar27[1];
            local_7f0 = *(longlong **)((longlong)local_7d8 + 0x84);
            local_748 = *(longlong **)((longlong)local_498 + 0x84);
            iVar20 = *(int *)(param_3 + 0x3090);
            local_750 = (longlong *)CONCAT44(local_750._4_4_,*(undefined4 *)(param_3 + 0x1dd4));
            local_7e0 = *(undefined4 *)(param_3 + 0x3094);
            local_7b8 = (longlong *)CONCAT71(local_7b8._1_7_,(&DAT_00001de6)[param_3]);
            uVar23 = *(undefined8 *)
                      (&DAT_14ca8c1f0 +
                      (ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)iVar20 * 2) * 8);
            local_7d8 = pplVar27[2];
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_860 = &LAB_14712ac08;
              local_868 = &LAB_14712ac0c;
              local_870 = &LAB_1472e3912;
              local_878 = &LAB_1472e3916;
              local_880 = FUN_1472e391a;
              local_888 = FUN_1472e3942;
              local_8a0 = (longlong **)0x14a2f5d42;
              local_8a8 = L"/Engine/Private/ScreenPass.usf";
              local_850 = 0;
              local_858 = 0xe0;
              local_890 = 1;
              local_898 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            local_830 = plVar40;
            FUN_1448e935e(uVar23,&local_408,&DAT_14ca4b6d8,0);
            if ((*(int *)(*(longlong *)
                           ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x110
                         ) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1))
            {
              FUN_145e1a792();
              local_860 = &LAB_14712ac08;
              local_868 = &LAB_14712ac0c;
              local_870 = &LAB_1472e3912;
              local_878 = &LAB_1472e3916;
              local_880 = FUN_1472e391a;
              local_888 = FUN_1472e3942;
              local_8a0 = (longlong **)0x14a2f5d42;
              local_8a8 = L"/Engine/Private/ScreenPass.usf";
              local_850 = 0;
              local_858 = 0xe0;
              local_890 = 1;
              local_898 = 0;
              FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
              _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
              atexit((_func_5014 *)&LAB_1430179ee);
              _Init_thread_footer(&DAT_14ca4b780);
            }
            plVar35 = (longlong *)local_408;
            uVar23 = DAT_14c9c0d98;
            plVar43 = (longlong *)
                      CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
            local_758 = DAT_14c9c0d50;
            FUN_145f32fc2();
            puVar24 = local_790;
            plVar41 = local_810;
            local_408 = (wchar_t *)0x0;
            uStack_400 = 0;
            uStack_3fc = 0;
            wStack_3fb = 0;
            uStack_3f9 = 0;
            FUN_1448f70da(local_810,&DAT_14ca29aa8,local_790,&local_408);
            plVar42 = local_7d0;
            plVar28 = local_800;
            local_408 = (wchar_t *)CONCAT44(local_750._0_4_,iVar20);
            uStack_400 = local_7e0;
            uStack_3fc = local_7b8._0_1_;
            wStack_3fb = (undefined2)local_4b8;
            uStack_3f9 = local_4b8._2_1_;
            uStack_3f8 = SUB84(local_748,0);
            uStack_3f4 = (undefined4)((ulonglong)local_748 >> 0x20);
            bStack_3f0 = (byte)local_800;
            uStack_3ef = (undefined1)((ulonglong)local_800 >> 8);
            uStack_3ee = (undefined2)((ulonglong)local_800 >> 0x10);
            uStack_3ec = (undefined4)((ulonglong)local_800 >> 0x20);
            uStack_3e8 = SUB84(local_7d0,0);
            iStack_3e4 = (int)((ulonglong)local_7d0 >> 0x20);
            uStack_3e0 = local_7f0;
            uStack_3d8 = local_828;
            local_3d0 = local_7d8;
            uStack_3c8 = plVar35;
            local_3b8 = plVar41;
            uStack_3b0 = local_808;
            local_3a8 = local_758;
            local_3a0 = (undefined4)uVar23;
            uStack_39c = (undefined4)((ulonglong)uVar23 >> 0x20);
            uStack_398 = (undefined4)DAT_14ca94df8;
            uStack_394 = (undefined4)((ulonglong)DAT_14ca94df8 >> 0x20);
            uStack_390 = uStack_390 & 0xffffff00;
            local_388 = plVar41;
            plStack_380 = local_808;
            local_378 = puVar24;
            plStack_370 = (longlong *)((ulonglong)plStack_370 & 0xffffffffffffff00);
            local_3c0 = plVar43;
            FUN_145f32fc2();
            FUN_14729379e(lVar44,&local_5a0,puVar24,&local_408);
            local_540 = local_830;
            local_538 = plVar28;
            uStack_530 = plVar42;
            plVar37 = local_820;
            plVar42 = local_7f8;
            uVar30 = local_834;
          }
        }
      }
      else {
        local_4a0[0] = local_846;
        local_7f8 = plVar42;
        local_4b8 = local_7c8;
        local_4b0 = plVar42;
        plStack_4a8 = local_710;
        FUN_142efce98(&local_5a0,lVar44,param_3);
        local_3c0 = (longlong *)CONCAT71(local_3c0._1_7_,local_846);
        uStack_3d8 = local_5a0;
        local_3d0 = (longlong *)CONCAT44(uStack_594,local_598);
        uStack_3c8 = (longlong *)CONCAT44(uStack_58c,uStack_590);
        local_408 = (wchar_t *)local_540;
        uStack_400 = (undefined4)local_538;
        uStack_3fc = (undefined1)((ulonglong)local_538 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)local_538 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)local_538 >> 0x38);
        uStack_3f8 = (undefined4)uStack_530;
        uStack_3f4 = uStack_530._4_4_;
        bStack_3f0 = (byte)plVar28;
        uStack_3ef = (undefined1)((ulonglong)plVar28 >> 8);
        uStack_3ee = (undefined2)((ulonglong)plVar28 >> 0x10);
        uStack_3ec = (undefined4)((ulonglong)plVar28 >> 0x20);
        uStack_3e8 = SUB84(plVar43,0);
        iStack_3e4 = (int)((ulonglong)plVar43 >> 0x20);
        uStack_3e0 = plVar41;
        FUN_142efc80c(&local_5b8,lVar44,param_3);
        local_5e8 = local_5b8;
        uStack_5e0 = local_5b0;
        uStack_5d8 = plStack_5a8;
        local_5d0 = local_5a0;
        local_5c8 = (longlong *)CONCAT44(uStack_594,local_598);
        uStack_5c0 = (longlong *)CONCAT44(uStack_58c,uStack_590);
        FUN_142efd4ad(&local_600,lVar44,param_3);
        uVar30 = local_834;
        plStack_480 = local_600;
        local_478 = local_5f8;
        plStack_470 = plStack_5f0;
        local_498 = local_540;
        uStack_490 = local_538;
        uStack_488 = uStack_530;
        local_468 = local_830;
        plStack_460 = plVar43;
        local_458 = plVar41;
        FUN_142efdab8(&local_618,lVar44,param_3);
        local_540 = local_618;
        local_538 = (longlong *)CONCAT44(uStack_60c,local_610);
        uStack_530 = (longlong *)CONCAT44(uStack_604,uStack_608);
        plVar42 = local_7f8;
      }
    }
    plVar43 = (longlong *)0x0;
    local_830 = (longlong *)0x0;
    plVar41 = (longlong *)0x0;
    plVar28 = local_7c8;
    if (local_2a8[4] == '\x01') {
      local_448 = (longlong *)0x0;
      plStack_440 = (longlong *)0x0;
      local_458 = (longlong *)0x0;
      plStack_450 = (longlong *)0x0;
      local_468 = (longlong *)0x0;
      plStack_460 = (longlong *)0x0;
      local_478 = (longlong *)0x0;
      plStack_470 = (longlong *)0x0;
      uStack_488 = (longlong *)0x0;
      plStack_480 = (longlong *)0x0;
      local_498 = (longlong *)0x0;
      uStack_490 = (longlong *)0x0;
      lVar32 = 0;
      local_820 = plVar37;
      local_7f8 = plVar42;
      do {
        bStack_3f0 = 0xc3;
        uStack_3ef = 0xf5;
        uStack_3ee = 0x4028;
        local_408 = (wchar_t *)local_7b0;
        if (lVar32 != 0) {
          local_408 = *(wchar_t **)((longlong)&local_4b0 + lVar32);
        }
        pbVar26 = local_4a0 + lVar32 + -8;
        if (lVar32 == 0) {
          pbVar26 = (byte *)&local_728;
        }
        uVar23 = *(undefined8 *)pbVar26;
        uStack_400 = (undefined4)uVar23;
        uStack_3fc = (undefined1)((ulonglong)uVar23 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)uVar23 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)uVar23 >> 0x38);
        pplVar27 = (longlong **)(local_4a0 + lVar32);
        if (lVar32 == 0) {
          pplVar27 = &local_730;
        }
        uStack_3f8 = SUB84(*pplVar27,0);
        uStack_3f4 = (undefined4)((ulonglong)*pplVar27 >> 0x20);
        FUN_142ef9861(&local_5e8,lVar44,param_3,&local_408);
        *(longlong **)((longlong)&local_498 + lVar32) = local_5e8;
        *(undefined4 *)((longlong)&uStack_490 + lVar32) = (undefined4)uStack_5e0;
        *(undefined4 *)((longlong)&uStack_490 + lVar32 + 4) = uStack_5e0._4_4_;
        *(undefined4 *)((longlong)&uStack_488 + lVar32) = (undefined4)uStack_5d8;
        *(undefined4 *)((longlong)&uStack_488 + lVar32 + 4) = uStack_5d8._4_4_;
        lVar32 = lVar32 + 0x18;
      } while (lVar32 != 0x60);
      fVar2 = *(float *)(param_3 + 0x2814);
      local_408 = (wchar_t *)local_468;
      uStack_400 = SUB84(plStack_460,0);
      uStack_3fc = (undefined1)((ulonglong)plStack_460 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)plStack_460 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)plStack_460 >> 0x38);
      uStack_3f8 = SUB84(local_458,0);
      uStack_3f4 = (undefined4)((ulonglong)local_458 >> 0x20);
      bStack_3f0 = (byte)plStack_450;
      uStack_3ef = (undefined1)((ulonglong)plStack_450 >> 8);
      uStack_3ee = (undefined2)((ulonglong)plStack_450 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)plStack_450 >> 0x20);
      uStack_3e8 = SUB84(local_448,0);
      iStack_3e4 = (int)((ulonglong)local_448 >> 0x20);
      uStack_3e0 = plStack_440;
      uStack_3d8 = (longlong *)0x3ff51eb860000000;
      local_3d0 = (longlong *)0x3ff51eb860000000;
      uStack_3c8 = (longlong *)
                   CONCAT44(*(float *)(param_3 + 0x286c) * fVar2,
                            *(float *)(param_3 + 0x2868) * fVar2);
      local_3c0 = (longlong *)CONCAT44(fVar2 * 0.0,*(float *)(param_3 + 0x2870) * fVar2);
      local_3b8 = (longlong *)
                  CONCAT44(*(float *)(&DAT_0000287c + param_3) * fVar2,
                           *(float *)(param_3 + 0x2878) * fVar2);
      uStack_3b0 = (longlong *)CONCAT44(fVar2 * 0.0,fVar2 * *(float *)(param_3 + 0x2880));
      FUN_142ef9f58(&local_5e8,lVar44,param_3,&local_408);
      fVar2 = *(float *)(param_3 + 0x2814);
      local_408 = (wchar_t *)plStack_480;
      uStack_400 = SUB84(local_478,0);
      uStack_3fc = (undefined1)((ulonglong)local_478 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)local_478 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)local_478 >> 0x38);
      uStack_3f8 = SUB84(plStack_470,0);
      uStack_3f4 = (undefined4)((ulonglong)plStack_470 >> 0x20);
      bStack_3f0 = (byte)local_5e8;
      uStack_3ef = (undefined1)((ulonglong)local_5e8 >> 8);
      uStack_3ee = (undefined2)((ulonglong)local_5e8 >> 0x10);
      uStack_3ec = local_5e8._4_4_;
      uStack_3e8 = (undefined4)uStack_5e0;
      iStack_3e4 = uStack_5e0._4_4_;
      uStack_3e0 = uStack_5d8;
      uStack_3d8 = (longlong *)0x3ff51eb860000000;
      local_3d0 = (longlong *)0x3ff51eb860000000;
      uStack_3c8 = (longlong *)
                   CONCAT44(*(float *)(param_3 + 0x285c) * fVar2,
                            *(float *)(param_3 + 0x2858) * fVar2);
      local_3c0 = (longlong *)CONCAT44(fVar2 * 0.0,*(float *)(param_3 + 0x2860) * fVar2);
      local_3b8 = (longlong *)&DAT_3f8000003f800000;
      uStack_3b0 = (longlong *)0x3f800000;
      FUN_142ef9f58(&local_5e8,lVar44,param_3,&local_408);
      fVar2 = *(float *)(param_3 + 0x2814);
      local_408 = (wchar_t *)local_498;
      uStack_400 = SUB84(uStack_490,0);
      uStack_3fc = (undefined1)((ulonglong)uStack_490 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)uStack_490 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)uStack_490 >> 0x38);
      uStack_3f8 = SUB84(uStack_488,0);
      uStack_3f4 = (undefined4)((ulonglong)uStack_488 >> 0x20);
      bStack_3f0 = (byte)local_5e8;
      uStack_3ef = (undefined1)((ulonglong)local_5e8 >> 8);
      uStack_3ee = (undefined2)((ulonglong)local_5e8 >> 0x10);
      uStack_3ec = local_5e8._4_4_;
      uStack_3e8 = (undefined4)uStack_5e0;
      iStack_3e4 = uStack_5e0._4_4_;
      uStack_3e0 = uStack_5d8;
      uStack_3d8 = (longlong *)0x3ff51eb860000000;
      local_3d0 = (longlong *)0x3ff51eb860000000;
      uStack_3c8 = (longlong *)
                   CONCAT44(*(float *)(param_3 + 0x284c) * fVar2 * 0.5,
                            *(float *)(param_3 + 0x2848) * fVar2 * 0.5);
      local_3c0 = (longlong *)CONCAT44(fVar2 * 0.0 * 0.5,*(float *)(param_3 + 0x2850) * fVar2 * 0.5)
      ;
      local_3b8 = (longlong *)&DAT_3f8000003f800000;
      uStack_3b0 = (longlong *)0x3f800000;
      FUN_142ef9f58(&local_5e8,lVar44,param_3,&local_408);
      plVar28 = uStack_5d8;
      plVar43 = uStack_5e0;
      plVar41 = local_5e8;
      cVar17 = FUN_142ef031e(param_3);
      if (cVar17 == '\0') {
        local_830 = plVar28;
        plVar37 = local_820;
        plVar42 = local_7f8;
        plVar28 = local_7c8;
        uVar30 = local_834;
      }
      else {
        uVar50 = 3;
        if ((int)*(uint *)(DAT_14ca2c5f8 + 4) < 3) {
          uVar50 = *(uint *)(DAT_14ca2c5f8 + 4);
        }
        uVar22 = 0;
        if (0 < (int)uVar50) {
          uVar22 = uVar50;
        }
        FUN_1448a0832(local_630,lVar44,&local_498);
        FUN_1448a0832(local_648,lVar44,&local_498 + (ulonglong)(uVar22 ^ 3) * 3);
        local_660 = plVar41;
        local_658 = plVar43;
        local_650 = plVar28;
        local_8a8 = local_648;
        local_8a0 = local_630;
        FUN_142ef0399(&local_408,lVar44,param_3);
        plVar43 = (longlong *)
                  CONCAT17(uStack_3f9,CONCAT25(wStack_3fb,CONCAT14(uStack_3fc,uStack_400)));
        local_830 = (longlong *)CONCAT44(uStack_3f4,uStack_3f8);
        plVar37 = local_820;
        plVar42 = local_7f8;
        plVar41 = (longlong *)local_408;
        plVar28 = local_7c8;
        uVar30 = local_834;
      }
    }
    local_7c8 = plVar43;
    if (local_2a8[5] == '\x01') {
      local_408 = (wchar_t *)0x0;
      uStack_400 = 0;
      uStack_3fc = 0;
      wStack_3fb = 0;
      uStack_3f9 = 0;
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      bStack_3f0 = local_844;
      uVar39 = (undefined1)uVar30;
      local_820 = plVar41;
      uStack_3ef = uVar39;
      if ((*(longlong *)(param_3 + 0x13650) == 0) ||
         (local_408 = (wchar_t *)FUN_14473c272(lVar44,param_3 + 0x13650,0),
         local_408 == (wchar_t *)0x0)) {
LAB_142ed45b1:
        uStack_400 = SUB84(local_6e8,0);
        uStack_3fc = (undefined1)((ulonglong)local_6e8 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)local_6e8 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)local_6e8 >> 0x38);
        uStack_3f8 = SUB84(local_6f0,0);
        uStack_3f4 = (undefined4)((ulonglong)local_6f0 >> 0x20);
        local_408 = (wchar_t *)plVar37;
      }
      else {
        lVar32 = *(longlong *)((longlong)local_408 + 0x84);
        uStack_400 = 0;
        uStack_3fc = 0;
        wStack_3fb = 0;
        uStack_3f9 = 0;
        uStack_3f8 = (undefined4)lVar32;
        uStack_3f4 = (undefined4)((ulonglong)lVar32 >> 0x20);
        if (lVar32 == 0) goto LAB_142ed45b1;
      }
      local_498 = (longlong *)FUN_142efe03b(lVar44,param_3,local_158,&local_408);
      uStack_488._0_2_ = CONCAT11(uVar39,local_844);
      uStack_490 = local_740;
      FUN_142efe7b1(lVar44,param_3,local_158);
      plVar41 = local_820;
      if ((((local_842 & 1) != 0) && (lVar32 = *(longlong *)(param_3 + 0x3108), lVar32 != 0)) &&
         ((*(byte *)(param_3 + 0x125b0) & 1) == 0)) {
        plVar43 = *(longlong **)(lVar32 + 0x1780);
        local_7f8 = plVar42;
        if (plVar43 != (longlong *)0x0) {
          *(undefined8 *)(lVar32 + 0x1780) = 0;
          (**(code **)(*plVar43 + 0x38))();
        }
        bVar47 = *(byte *)((longlong)plVar37 + 0x24);
        *(byte *)((longlong)plVar37 + 0x24) = bVar47 | 2;
        *(undefined1 *)((longlong)plVar37 + 0x26) = 1;
        iVar20 = *(int *)(lVar44 + 0x1c0);
        *(uint *)(lVar44 + 0x1c0) = iVar20 + 1U;
        if (*(uint *)(lVar44 + 0x1c4) < iVar20 + 1U) {
          FUN_14017e38e((longlong *)(lVar44 + 0x1b8),iVar20);
        }
        plVar42 = local_7f8;
        lVar7 = *(longlong *)(lVar44 + 0x1b8);
        *(longlong **)(lVar7 + (longlong)iVar20 * 0x10) = plVar37;
        *(undefined8 **)(lVar7 + 8 + (longlong)iVar20 * 0x10) = (undefined8 *)(lVar32 + 0x1780);
        plVar41 = local_820;
        if ((bVar47 & 2) == 0) {
          pcVar1 = (char *)(lVar44 + 0x4a8);
          LOCK();
          bVar33 = *(char *)(lVar44 + 0x4a8) == '\0';
          if (bVar33) {
            *(char *)(lVar44 + 0x4a8) = '\x01';
          }
          UNLOCK();
          if (!bVar33) {
            FUN_1447d2058();
          }
          iVar20 = *(int *)(lVar44 + 0x4b8);
          *(uint *)(lVar44 + 0x4b8) = iVar20 + 1U;
          if (*(uint *)(lVar44 + 0x4bc) < iVar20 + 1U) {
            FUN_1447f2dbc((longlong *)(lVar44 + 0x4b0),iVar20);
          }
          plVar41 = local_820;
          lVar32 = *(longlong *)(lVar44 + 0x4b0);
          *(undefined8 *)(lVar32 + (longlong)iVar20 * 0x10) = 2;
          *(longlong **)(lVar32 + 8 + (longlong)iVar20 * 0x10) = plVar37;
          LOCK();
          cVar17 = *pcVar1;
          if (cVar17 == '\x01') {
            *pcVar1 = '\0';
          }
          UNLOCK();
          if (cVar17 != '\x01') {
            FUN_14008cdb0(pcVar1);
          }
        }
      }
    }
    plVar43 = (longlong *)0x0;
    plVar35 = (longlong *)0x0;
    plVar37 = (longlong *)0x0;
    if (local_2a8[6] == '\x01') {
      local_408 = (wchar_t *)(longlong *)0x0;
      plVar43 = (longlong *)0x0;
      plVar35 = (longlong *)0x0;
      if (local_846 != 0) {
        uStack_400 = SUB84(plVar42,0);
        uStack_3fc = (undefined1)((ulonglong)plVar42 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)plVar42 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)plVar42 >> 0x38);
        uStack_3f8 = SUB84(local_710,0);
        uStack_3f4 = (undefined4)((ulonglong)local_710 >> 0x20);
        bStack_3f0 = local_845;
        local_408 = (wchar_t *)plVar28;
        FUN_142efb2cd(&local_498,lVar44,param_3);
        local_5e8 = local_498;
        uStack_5e0 = uStack_490;
        uStack_5d8 = uStack_488;
        FUN_142efb893(&local_4b8,lVar44,param_3);
        local_408 = (wchar_t *)local_4b8;
        plVar43 = local_4b0;
        plVar35 = plStack_4a8;
      }
      bStack_3f0 = (byte)local_7b0;
      uStack_3ef = (undefined1)((ulonglong)local_7b0 >> 8);
      uStack_3ee = (undefined2)((ulonglong)local_7b0 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)local_7b0 >> 0x20);
      uStack_3e8 = (undefined4)local_728;
      iStack_3e4 = (int)((ulonglong)local_728 >> 0x20);
      uStack_3e0 = local_730;
      local_3d0 = local_7c8;
      uStack_3c8 = local_830;
      uStack_400 = SUB84(plVar43,0);
      uStack_3fc = (undefined1)((ulonglong)plVar43 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)plVar43 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)plVar43 >> 0x38);
      uStack_3f8 = SUB84(plVar35,0);
      uStack_3f4 = (undefined4)((ulonglong)plVar35 >> 0x20);
      local_3c0._0_2_ = CONCAT11(local_846,local_843);
      uStack_3d8 = plVar41;
      FUN_142efbe49(&local_498,lVar44,param_3);
      plVar43 = uStack_490;
      plVar35 = local_498;
      plVar37 = uStack_488;
    }
    if (bStack_2a1 == true) {
      local_408 = (wchar_t *)local_540;
      uStack_400 = SUB84(local_538,0);
      uStack_3fc = (undefined1)((ulonglong)local_538 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)local_538 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)local_538 >> 0x38);
      uStack_3f8 = SUB84(uStack_530,0);
      uStack_3f4 = (undefined4)((ulonglong)uStack_530 >> 0x20);
      bStack_3f0 = (byte)local_6e0;
      uStack_3ef = (undefined1)((ulonglong)local_6e0 >> 8);
      uStack_3ee = (undefined2)((ulonglong)local_6e0 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)local_6e0 >> 0x20);
      uStack_3e8 = SUB84(local_6d0,0);
      iStack_3e4 = (int)((ulonglong)local_6d0 >> 0x20);
      uStack_3e0 = local_6d8;
      uStack_3d8 = local_510;
      local_3d0 = local_508;
      uStack_3c8 = plStack_500;
      local_3c0 = (longlong *)CONCAT71(local_3c0._1_7_,(char)param_6[3]);
      FUN_142df6ef8(lVar44,local_7c0,param_3);
    }
    FUN_142ed6600(&local_588,1);
    if (bStack_2a0 == true) {
      cVar17 = FUN_1401431b7();
      local_408 = (wchar_t *)((ulonglong)local_408 & 0xff00000000000000);
      local_3a0 = 0xf;
      uStack_39c = 0;
      uStack_398 = 0;
      uStack_394 = 0;
      uStack_390 = 0;
      local_388 = (longlong *)0x0;
      plStack_380 = (longlong *)0x0;
      local_378 = (undefined8 *)0x0;
      plStack_370 = (longlong *)0x0;
      local_368 = 0;
      uStack_360 = 0;
      local_358 = 0;
      uStack_350 = 0;
      local_348 = 0;
      uStack_340 = 0;
      local_338 = 0;
      local_330 = 0x3f800000;
      uStack_3e0 = *(longlong **)(param_3 + 0x30f8);
      uStack_3d8 = *(longlong **)(param_3 + 0x3100);
      uStack_400 = SUB84(local_540,0);
      uStack_3fc = (undefined1)((ulonglong)local_540 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)local_540 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)local_540 >> 0x38);
      uStack_3f8 = SUB84(uStack_3e0,0);
      uStack_3f4 = (undefined4)((ulonglong)uStack_3e0 >> 0x20);
      bStack_3f0 = (byte)uStack_3d8;
      uStack_3ef = (undefined1)((ulonglong)uStack_3d8 >> 8);
      uStack_3ee = (undefined2)((ulonglong)uStack_3d8 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)uStack_3d8 >> 0x20);
      uStack_3e8 = SUB84(local_510,0);
      iStack_3e4 = (int)((ulonglong)local_510 >> 0x20);
      local_3d0 = local_510;
      uStack_3c8 = uStack_3e0;
      local_3c0 = uStack_3d8;
      local_3b8 = local_6c8;
      uStack_3b0 = uStack_3e0;
      local_3a8 = uStack_3d8;
      if (cVar17 == '\x03') {
        FUN_142ec39fe(&local_498,lVar44,param_3,&local_408);
LAB_142ed4c47:
        lVar44 = local_840;
        plVar28 = uStack_488;
        plVar42 = uStack_490;
        if (local_498 == (longlong *)0x0) {
          plVar41 = (longlong *)0x0;
        }
        else {
          plVar41 = (longlong *)local_498[7];
        }
      }
      else {
        plVar41 = (longlong *)0x0;
        plVar28 = (longlong *)0x0;
        plVar42 = (longlong *)0x0;
        if (cVar17 == '\x01') {
          FUN_142f2e65c(&local_498,lVar44,param_3,&local_408);
          goto LAB_142ed4c47;
        }
      }
      local_540 = plVar41;
      local_538 = plVar42;
      uStack_530 = plVar28;
    }
    else if (((DAT_14ca12f3c != 0) &&
             (cVar17 = FUN_14044417b(param_3), plVar41 = local_540, cVar17 != '\0')) &&
            ((DAT_14c760824 != 0.0 && ((*(byte *)(param_3 + 0x125b0) & 1) == 0)))) {
      puVar49 = *(undefined8 **)(param_3 + 0x3108);
      puVar24 = puVar49 + 0x262;
      plVar28 = (longlong *)puVar49[0x262];
      if (plVar28 != (longlong *)0x0) {
        *puVar24 = 0;
        (**(code **)(*plVar28 + 0x38))();
      }
      bVar47 = *(byte *)((longlong)plVar41 + 0x24);
      *(byte *)((longlong)plVar41 + 0x24) = bVar47 | 2;
      *(undefined1 *)((longlong)plVar41 + 0x26) = 1;
      plVar28 = (longlong *)(lVar44 + 0x1b8);
      iVar20 = *(int *)(lVar44 + 0x1c0);
      *(uint *)(lVar44 + 0x1c0) = iVar20 + 1U;
      if (*(uint *)(lVar44 + 0x1c4) < iVar20 + 1U) {
        local_7c0 = puVar24;
        local_7b0 = plVar28;
        FUN_14017e38e(plVar28,iVar20);
        plVar28 = local_7b0;
        puVar24 = local_7c0;
      }
      lVar44 = local_840;
      lVar32 = *plVar28;
      *(longlong **)(lVar32 + (longlong)iVar20 * 0x10) = plVar41;
      *(undefined8 **)(lVar32 + 8 + (longlong)iVar20 * 0x10) = puVar24;
      if ((bVar47 & 2) == 0) {
        pcVar1 = (char *)(local_840 + 0x4a8);
        LOCK();
        bVar33 = *(char *)(local_840 + 0x4a8) == '\0';
        if (bVar33) {
          *(char *)(local_840 + 0x4a8) = '\x01';
        }
        UNLOCK();
        local_7c0 = puVar49;
        if (!bVar33) {
          FUN_1447d2058();
        }
        iVar20 = *(int *)(lVar44 + 0x4b8);
        *(uint *)(lVar44 + 0x4b8) = iVar20 + 1U;
        if (*(uint *)(lVar44 + 0x4bc) < iVar20 + 1U) {
          FUN_1447f2dbc((longlong *)(lVar44 + 0x4b0),iVar20);
        }
        puVar49 = local_7c0;
        lVar32 = *(longlong *)(lVar44 + 0x4b0);
        *(undefined8 *)(lVar32 + (longlong)iVar20 * 0x10) = 2;
        *(longlong **)(lVar32 + 8 + (longlong)iVar20 * 0x10) = plVar41;
        LOCK();
        cVar17 = *pcVar1;
        if (cVar17 == '\x01') {
          *pcVar1 = '\0';
        }
        UNLOCK();
        if (cVar17 != '\x01') {
          FUN_14008cdb0(pcVar1);
        }
      }
      local_408 = (wchar_t *)0x200000000;
      uVar23 = *(undefined8 *)(param_3 + 0x30f8);
      uVar8 = *(undefined8 *)(param_3 + 0x3100);
      local_3c0 = (longlong *)0x0;
      uStack_3d8 = (longlong *)0x0;
      local_3d0 = (longlong *)0x0;
      uStack_3c8 = local_540;
      uStack_3e0 = (longlong *)CONCAT44(uStack_3e0._4_4_,1);
      uStack_400 = (undefined4)uVar23;
      uStack_3fc = (undefined1)((ulonglong)uVar23 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)uVar23 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)uVar23 >> 0x38);
      uStack_3f8 = (undefined4)uVar8;
      uStack_3f4 = (undefined4)((ulonglong)uVar8 >> 0x20);
      bStack_3f0 = (byte)uVar23;
      uStack_3ef = (undefined1)((ulonglong)uVar23 >> 8);
      uStack_3ee = (undefined2)((ulonglong)uVar23 >> 0x10);
      uStack_3ec = (undefined4)((ulonglong)uVar23 >> 0x20);
      puVar49[0x265] = uVar23;
      puVar49[0x266] = uVar8;
      uStack_3e8 = uStack_3f8;
      iStack_3e4 = uStack_3f4;
      FUN_142f2d6a2(&local_408,&local_498);
      puVar49[0x264] = local_498;
      lVar44 = local_840;
    }
    if (local_2d8 != 0) {
      FUN_1400020a8();
    }
  }
  if (bStack_29f == 1) {
    FUN_142ef74c4(&local_498,param_3,3);
    lVar32 = local_840;
    bVar47 = DAT_14c760e14;
    if ((int)plStack_440 == 0) {
      plVar28 = local_708;
      plVar41 = (longlong *)0x0;
      if (plVar37 != plVar43 && plVar35 != (longlong *)0x0) {
        plVar28 = plVar37;
        plVar41 = plVar43;
        local_738 = plVar35;
      }
      if (*(uint *)(param_3 + 0x1dd0) < 2 && DAT_14c760e14 == 1) {
        puVar24 = (undefined8 *)FUN_142eb67bd(local_840);
      }
      else {
        lVar44 = *(longlong *)(param_3 + 0x30d8);
        if (((((lVar44 == 0) || (*(char *)(lVar44 + 0x6b8) != '\x01')) ||
             (local_408 = *(wchar_t **)(lVar44 + 0x6b0), local_408 == (wchar_t *)0x0)) &&
            (((lVar44 = *(longlong *)(**(longlong **)(*(longlong *)(param_3 + 8) + 8) + 0x30d8),
              lVar44 == 0 || (*(char *)(lVar44 + 0x6b8) != '\x01')) ||
             (local_408 = *(wchar_t **)(lVar44 + 0x6b0), local_408 == (wchar_t *)0x0)))) ||
           ((**(code **)(*(longlong *)local_408 + 0x30))(), local_408 == (wchar_t *)0x0)) {
          puVar24 = (undefined8 *)0x0;
        }
        else {
          puVar24 = (undefined8 *)FUN_14473c272(lVar32,&local_408,0);
          if (local_408 != (wchar_t *)0x0) {
            (**(code **)(*(longlong *)local_408 + 0x38))();
          }
        }
      }
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      bStack_3f0 = 0;
      local_408 = (wchar_t *)0x0;
      uStack_400 = 0;
      uStack_3fc = 0;
      wStack_3fb = 0;
      uStack_3f9 = 0;
      memset(&uStack_3e8,0,0x84);
      if ((local_160._4_4_ == 9) && (local_1f8 < 1)) {
        local_408 = (wchar_t *)local_2c8;
        uStack_400 = SUB84(puStack_2c0,0);
        uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
        uStack_3f8 = (undefined4)uStack_2b8;
        uStack_3f4 = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
        bStack_3f0 = local_2b0;
        if (local_2c8 != (longlong *)0x0) {
          bVar33 = *(int *)(param_3 + 0x3024) == 2;
          puVar49 = (undefined8 *)(param_3 + 0x4e0);
          if (bVar33) {
            puVar49 = (undefined8 *)(param_3 + 0x3100);
          }
          puVar34 = (undefined8 *)(param_3 + 0x4d8);
          if (bVar33) {
            puVar34 = (undefined8 *)(param_3 + 0x30f8);
          }
          uVar23 = *puVar34;
          bStack_3f0 = (**(longlong **)(*(longlong *)(param_3 + 8) + 8) == param_3) + 1;
          uStack_400 = (undefined4)uVar23;
          uStack_3fc = (undefined1)((ulonglong)uVar23 >> 0x20);
          wStack_3fb = (wchar_t)((ulonglong)uVar23 >> 0x28);
          uStack_3f9 = (undefined1)((ulonglong)uVar23 >> 0x38);
          uStack_3f8 = (undefined4)*puVar49;
          uStack_3f4 = (undefined4)((ulonglong)*puVar49 >> 0x20);
        }
      }
      FUN_1448a0832(&local_328,local_840,&local_540);
      uStack_3e8 = SUB84(local_328,0);
      iStack_3e4 = (int)((ulonglong)local_328 >> 0x20);
      uStack_3e0 = (longlong *)CONCAT44(uStack_31c,local_320);
      uStack_3d8 = (longlong *)CONCAT44(uStack_314,uStack_318);
      local_3d0 = local_738;
      plStack_380 = local_158;
      bVar33 = true;
      lVar44 = local_840;
      uStack_3c8 = plVar41;
      local_3c0 = plVar28;
      local_378 = puVar24;
      if (((*(int *)(param_3 + 0x3020) != 1) &&
          (cVar17 = (**(code **)(*DAT_14ca27dc8 + 0xa8))(), lVar44 = local_840, cVar17 == '\0')) &&
         (local_845 == 0)) {
        if ((&DAT_14ca814b8)
            [(ulonglong)*(ushort *)(&DAT_14ca85070 + (longlong)*(int *)(param_3 + 0x3090) * 2) * 0xf
            ] == 1) {
          iVar20 = FUN_1467b7d4e();
          bVar33 = 0 < iVar20;
        }
        else {
          bVar33 = false;
        }
      }
      local_368 = CONCAT44(local_368._4_4_,CONCAT13(local_541,(uint3)CONCAT11(bVar47,bVar33))) ^
                  0x100;
      plStack_370 = (longlong *)0x0;
      if ((char)local_7dc != '\0') {
        plStack_370 = local_740;
      }
      FUN_142f0be69(&local_328,lVar44,param_3);
      local_540 = local_328;
      local_538 = (longlong *)CONCAT44(uStack_31c,local_320);
      uStack_530 = (longlong *)CONCAT44(uStack_314,uStack_318);
    }
    else {
      FUN_142ed6600(&local_588,3);
      lVar44 = local_840;
    }
    local_541 = 0;
    if (local_448 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*(char *)(param_3 + 0x30c8) == '\0') {
    uVar50 = *(uint *)(*(longlong *)(param_3 + 8) + 0x48);
    if (*(int *)(param_3 + 0x3090) < 3) {
      if (((uVar50 & 1) == 0) || (DAT_14c760e14 != 1)) goto LAB_142ed3437;
    }
    else if ((uVar50 & 1) == 0) goto LAB_142ed3437;
    if (bStack_29e == true) {
      FUN_142ed6600(&local_588,0);
    }
    if (bStack_29d == true) {
      uStack_3f8 = 0;
      uStack_3f4 = 0;
      bStack_3f0 = 0;
      local_408 = (wchar_t *)0x0;
      uStack_400 = 0;
      uStack_3fc = 0;
      wStack_3fb = 0;
      uStack_3f9 = 0;
      if ((local_160._4_4_ == 0xb) && (local_1d8 < 1)) {
        local_408 = (wchar_t *)local_2c8;
        uStack_400 = SUB84(puStack_2c0,0);
        uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
        wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
        uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
        uStack_3f8 = (undefined4)uStack_2b8;
        uStack_3f4 = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
        bStack_3f0 = local_2b0;
      }
      uStack_3e8 = SUB84(local_540,0);
      iStack_3e4 = (int)((ulonglong)local_540 >> 0x20);
      uStack_3e0 = local_538;
      uStack_3d8 = uStack_530;
      iVar20 = 5;
      if (*(int *)(DAT_14ca25748 + 4) < 5) {
        iVar20 = *(int *)(DAT_14ca25748 + 4);
      }
      iVar45 = 0;
      if (0 < iVar20) {
        iVar45 = iVar20;
      }
      local_3d0 = (longlong *)
                  (CONCAT44((int)((ulonglong)local_3d0 >> 0x20),iVar45) & 0xffffff00ffffffff);
      FUN_142eb2d63(&local_498,lVar44,param_3);
      local_540 = local_498;
      local_538 = uStack_490;
      uStack_530 = uStack_488;
    }
  }
LAB_142ed3437:
  if (cStack_29c == '\x01') {
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    bStack_3f0 = 0;
    local_408 = (wchar_t *)0x0;
    uStack_400 = 0;
    uStack_3fc = 0;
    wStack_3fb = 0;
    uStack_3f9 = 0;
    uStack_3e8 = SUB84(local_540,0);
    iStack_3e4 = (int)((ulonglong)local_540 >> 0x20);
    uStack_3e0 = local_538;
    uStack_3d8 = uStack_530;
    param_6 = (longlong *)*param_6;
    uStack_3c8 = (longlong *)0x0;
    local_3c0 = (longlong *)CONCAT71(local_3c0._1_7_,1);
    FUN_144a890ae();
    cVar17 = '\x02';
    if (DAT_14cb02d91 != '\x03') {
      cVar17 = DAT_14cb02d91;
    }
    uStack_3b0 = (longlong *)CONCAT71(uStack_3b0._1_7_,cVar17);
    local_3a8 = *(longlong **)(param_3 + 0x2f58);
    local_3a0 = (undefined4)*(undefined8 *)(param_3 + 0x2f60);
    uStack_39c = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x2f60) >> 0x20);
    uStack_398 = (undefined4)*(undefined8 *)(param_3 + 0x2f68);
    uStack_394 = (undefined4)((ulonglong)*(undefined8 *)(param_3 + 0x2f68) >> 0x20);
    if ((local_160._4_4_ == 0xc) && (local_1c8 < 1)) {
      local_408 = (wchar_t *)local_2c8;
      uStack_400 = puStack_2c0._0_4_;
      uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
      uStack_3f8 = (undefined4)uStack_2b8;
      uStack_3f4 = uStack_2b8._4_4_;
    }
    bStack_3f0 = (**(longlong **)(*(longlong *)(param_3 + 8) + 8) == param_3) + 1;
    local_3b8 = param_6;
    FUN_142ef839b(&local_498,lVar44,param_3);
    local_540 = local_498;
    local_538 = uStack_490;
    uStack_530 = uStack_488;
  }
  if (bStack_299 == 1) {
    local_408 = (wchar_t *)0x0;
    uStack_400 = 0;
    uStack_3fc = 0;
    wStack_3fb = 0;
    uStack_3f9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    if ((local_160._4_4_ == 0xf) && (local_198 < 1)) {
      local_408 = (wchar_t *)local_2c8;
      uStack_400 = SUB84(puStack_2c0,0);
      uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
      uStack_3f8 = (undefined4)uStack_2b8;
      uStack_3f4 = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
    }
    local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,1);
    uStack_3e8 = SUB84(local_540,0);
    iStack_3e4 = (int)((ulonglong)local_540 >> 0x20);
    uStack_3e0 = local_538;
    uStack_3d8 = uStack_530;
    bStack_3f0 = (**(longlong **)(*(longlong *)(param_3 + 8) + 8) == param_3) + 1;
    plVar43 = *(longlong **)(*(longlong *)(param_3 + 8) + 400);
    if (plVar43 == (longlong *)0x0) {
      local_678 = *(undefined4 *)(param_3 + 0x13858);
      uStack_674 = *(undefined4 *)(param_3 + 0x1385c);
      uStack_670 = *(undefined4 *)(param_3 + 0x13860);
      uStack_66c = *(undefined4 *)(param_3 + 0x13864);
      local_8a0 = (longlong **)&local_678;
      local_668 = *(undefined8 *)(param_3 + 0x13868);
      local_8a8 = (wchar_t *)CONCAT71(local_8a8._1_7_,1);
      FUN_142f26416(&local_498,lVar44,param_3,&local_408);
    }
    else {
      local_8a8 = (wchar_t *)&local_408;
      (**(code **)(*plVar43 + 0x18))(plVar43,&local_498,lVar44,param_3);
    }
    local_540 = local_498;
    local_538 = uStack_490;
    uStack_530 = uStack_488;
  }
  if (bStack_298 == true) {
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    bStack_3f0 = 0;
    local_408 = (wchar_t *)0x0;
    uStack_400 = 0;
    uStack_3fc = 0;
    wStack_3fb = 0;
    uStack_3f9 = 0;
    if ((local_160._4_4_ == 0x10) && (local_188 < 1)) {
      local_408 = (wchar_t *)local_2c8;
      uStack_400 = SUB84(puStack_2c0,0);
      uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
      uStack_3f8 = (undefined4)uStack_2b8;
      uStack_3f4 = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
      bStack_3f0 = local_2b0;
    }
    uStack_3e8 = SUB84(local_540,0);
    iStack_3e4 = (int)((ulonglong)local_540 >> 0x20);
    uStack_3e0 = local_538;
    uStack_3d8 = uStack_530;
    local_3d0 = (longlong *)CONCAT44(local_3d0._4_4_,2);
    plVar43 = *(longlong **)(*(longlong *)(param_3 + 8) + 0x198);
    if (plVar43 != (longlong *)0x0) {
      local_8a8 = (wchar_t *)&local_408;
      (**(code **)(*plVar43 + 0x18))(plVar43,&local_498,lVar44,param_3);
      local_540 = local_498;
      local_538 = uStack_490;
      uStack_530 = uStack_488;
    }
  }
  if (*(char *)(param_3 + 0x13870) == '\x01') {
    FUN_1472ebc9d(lVar44,param_3,&local_540,&local_510);
  }
  if (bStack_296 != false) {
    local_408 = (wchar_t *)0x0;
    uStack_400 = 0;
    uStack_3fc = 0;
    wStack_3fb = 0;
    uStack_3f9 = 0;
    uStack_3f8 = 0;
    uStack_3f4 = 0;
    if ((local_160._4_4_ == 0x12) && (local_168[0] < 1)) {
      local_408 = (wchar_t *)local_2c8;
      uStack_400 = SUB84(puStack_2c0,0);
      uStack_3fc = (undefined1)((ulonglong)puStack_2c0 >> 0x20);
      wStack_3fb = (wchar_t)((ulonglong)puStack_2c0 >> 0x28);
      uStack_3f9 = (undefined1)((ulonglong)puStack_2c0 >> 0x38);
      uStack_3f8 = (undefined4)uStack_2b8;
      uStack_3f4 = (undefined4)((ulonglong)uStack_2b8 >> 0x20);
    }
    uStack_3e8 = SUB84(local_540,0);
    iStack_3e4 = (int)((ulonglong)local_540 >> 0x20);
    uStack_3e0 = local_538;
    uStack_3d8 = uStack_530;
    bStack_3f0 = (**(longlong **)(*(longlong *)(param_3 + 8) + 8) == param_3) + 1;
    FUN_14728c4c2(&local_498,lVar44,param_3);
    local_540 = local_498;
    local_538 = uStack_490;
    uStack_530 = uStack_488;
  }
  if (local_540 != local_4d8) {
    uVar50 = 2;
    if (*(char *)(param_3 + 0x23f5) == '\0') {
      uVar50 = *(byte *)(param_3 + 0x3099) >> 1 & 1;
    }
    local_698 = local_4d8;
    local_690 = local_4d0;
    uStack_688 = uStack_4c8;
    local_680 = local_4c0;
    local_6a8 = (undefined4)local_538;
    uStack_6a4 = local_538._4_4_;
    uStack_6a0 = (undefined4)uStack_530;
    uStack_69c = uStack_530._4_4_;
    local_6c0 = *(undefined4 *)(param_3 + 0x3090);
    local_6bc = *(undefined4 *)(param_3 + 0x1dd4);
    local_6b8 = *(undefined4 *)(param_3 + 0x3094);
    local_6b4 = (&DAT_00001de6)[param_3];
    local_8a8 = (wchar_t *)CONCAT44(local_8a8._4_4_,uVar50);
    local_6b0 = local_540;
    FUN_14301884d(lVar44);
  }
  lVar32 = -0x130;
  puVar24 = &local_170;
  do {
    FUN_144ab4a84(*puVar24,*(undefined4 *)(puVar24 + 1));
    FUN_142eee752(puVar24);
    puVar24 = puVar24 + -2;
    lVar32 = lVar32 + 0x10;
  } while (lVar32 != 0);
  if ((local_c0 ^ (ulonglong)auStack_8c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ed6600 FUN_142ed6600 body=631 status=ok
// SIG undefined FUN_142ed6600(void)

void FUN_142ed6600(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  undefined4 local_2a8;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  longlong local_218;
  int local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined7 uStack_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined2 uStack_88;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined8 uStack_7e;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  char local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined1 local_3f;
  undefined2 local_3e;
  undefined4 local_3c;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uStack_1f8 = 0;
  uStack_1f7 = 0;
  uStack_1f0 = 0;
  local_208 = 0;
  local_200 = 0;
  uStack_1ff = 0;
  memset(&uStack_1d8,0,0xe0);
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_86 = 0;
  uStack_80 = 0;
  uStack_7e = 0;
  local_48 = 0;
  local_40 = 1;
  local_3e = 0;
  local_3c = 0xffffffff;
  local_f8 = 0;
  local_f4 = 0;
  if (param_2 == 3) {
    puVar2 = (undefined8 *)param_1[7];
    if ((*(char *)((longlong)puVar2 + 0x29) != '\x01') || (*(int *)((longlong)puVar2 + 0x16c) != 9))
    goto LAB_142ed672a;
    iVar1 = *(int *)(puVar2 + 0x1a);
  }
  else {
    if (((param_2 != 0) ||
        (puVar2 = (undefined8 *)param_1[7], *(char *)((longlong)puVar2 + 0x2a) != '\x01')) ||
       (*(int *)((longlong)puVar2 + 0x16c) != 10)) goto LAB_142ed672a;
    iVar1 = *(int *)(puVar2 + 0x1c);
  }
  if (iVar1 < 1) {
    local_208 = *puVar2;
    local_200 = (undefined1)puVar2[1];
    uStack_1ff = (undefined7)((ulonglong)puVar2[1] >> 8);
    uStack_1f8 = (undefined1)puVar2[2];
    uStack_1f7 = (undefined7)((ulonglong)puVar2[2] >> 8);
    uStack_1f0 = *(undefined1 *)(puVar2 + 3);
  }
LAB_142ed672a:
  puVar2 = (undefined8 *)param_1[4];
  local_280 = *puVar2;
  local_278 = puVar2[1];
  local_270 = puVar2[2];
  FUN_1448a0832(&local_268,*param_1);
  local_1e8 = local_268;
  local_1e0 = local_260;
  uStack_1dc = uStack_25c;
  uStack_1d8 = uStack_258;
  uStack_1d4 = uStack_254;
  local_70 = *(undefined8 *)param_1[5];
  local_3f = *(undefined1 *)param_1[6];
  uVar3 = *(undefined8 *)param_1[3];
  local_68 = 0;
  local_60 = 1;
  FUN_144a890ae();
  local_50 = '\x02';
  if (DAT_14cb02d91 != '\x03') {
    local_50 = DAT_14cb02d91;
  }
  local_58 = uVar3;
  FUN_142ef74c4(&local_268,param_1[1],param_2);
  if (local_210 != 0) {
    local_2b8 = &local_208;
    local_2a8 = 0;
    local_2b0 = &local_268;
    FUN_142ef78c8(&local_298,*param_1,param_1[1],*(undefined4 *)(param_1 + 2));
    puVar2 = (undefined8 *)param_1[4];
    *puVar2 = local_298;
    puVar2[1] = local_290;
    puVar2[2] = local_288;
    *(undefined1 *)param_1[6] = 0;
  }
  if (local_218 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_2d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed6884 FUN_142ed6884 body=731 status=ok
// SIG undefined FUN_142ed6884(void)

void FUN_142ed6884(undefined8 param_1,longlong param_2,longlong *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  longlong local_300;
  undefined4 local_2f4;
  undefined8 local_2f0;
  longlong local_2e8;
  longlong *local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined1 uStack_288;
  undefined8 uStack_287;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 local_188;
  undefined1 local_184;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined8 uStack_10e;
  undefined8 local_100;
  longlong lStack_f8;
  char local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_c0 [80];
  longlong local_70;
  int local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_300 = param_2;
  local_2f4 = param_4;
  local_2f0 = param_1;
  if (0 < (int)param_3[1]) {
    local_2e8 = *(longlong *)(param_2 + 0x198);
    lVar5 = 0;
    uVar6 = 0;
    local_2e0 = param_3;
    do {
      lVar3 = local_2e8;
      lVar1 = *local_2e0;
      local_2d8 = *(undefined8 *)(lVar1 + 0x30f8 + lVar5);
      uVar4 = *(undefined8 *)(lVar1 + 0x3100 + lVar5);
      uVar7 = **(undefined8 **)(local_2e8 + 0x40);
      local_2d0 = (*(undefined8 **)(local_2e8 + 0x40))[0xd];
      FUN_142ef74c4(local_c0,lVar1 + lVar5,7);
      if (local_68 != 0) {
        local_298 = 0;
        uStack_290 = 0;
        uStack_28f = 0;
        uStack_288 = 0;
        uStack_287 = 0;
        memset(&local_278,0,0xf0);
        uVar2 = local_2f0;
        local_180 = 0;
        uStack_178 = 0;
        local_170 = 0;
        uStack_168 = 0;
        local_160 = 0;
        uStack_158 = 0;
        local_150 = 0;
        uStack_148 = 0;
        local_140 = 0;
        uStack_138 = 0;
        local_130 = 0;
        uStack_128 = 0;
        local_120 = 0;
        uStack_118 = 0;
        uStack_116 = 0;
        uStack_110 = 0;
        uStack_10e = 0;
        local_100 = 0;
        lStack_f8 = 0;
        local_f0 = 1;
        local_e8 = 0;
        local_e0 = 1;
        local_d8 = 0;
        local_d0 = 0xffffffff00000001;
        local_188 = 0;
        local_184 = 0;
        local_2c0 = local_2d8;
        local_2c8 = uVar7;
        local_2b8 = uVar4;
        FUN_1448a0832(&local_2b0,local_2f0,&local_2c8);
        local_278 = local_2b0;
        local_270 = local_2a8;
        uStack_26c = uStack_2a4;
        uStack_268 = uStack_2a0;
        uStack_264 = uStack_29c;
        FUN_14482e3b2();
        local_f0 = DAT_14cb02cf9;
        if (DAT_14cb02cf9 == '\x03') {
          local_f0 = '\x02';
        }
        local_e8 = 0;
        local_e0 = 1;
        local_100 = local_2d0;
        local_308 = 0;
        local_310 = local_c0;
        local_318 = &local_298;
        lStack_f8 = lVar3;
        FUN_142ef78c8(&local_2b0,uVar2,lVar1 + lVar5,uVar6 & 0xffffffff);
        uVar7 = local_2b0;
      }
      *(undefined8 *)(local_300 + 0x1b0) = uVar7;
      *(undefined8 *)(local_300 + 0x1b8) = uVar7;
      if (local_70 != 0) {
        FUN_1400020a8();
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x13c10;
    } while ((longlong)uVar6 < (longlong)(int)local_2e0[1]);
  }
  lVar5 = local_300;
  uVar4 = FUN_1448e2c77(local_2f0,local_300,local_2f4,*(undefined4 *)(local_300 + 0x1a8));
  *(undefined8 *)(lVar5 + 0x198) = uVar4;
  if ((local_60 ^ (ulonglong)auStack_338) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed6c2c FUN_142ed6c2c body=481 status=ok
// SIG undefined FUN_142ed6c2c(void)

void FUN_142ed6c2c(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14728dc84(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed6e0e FUN_142ed6e0e body=232 status=ok
// SIG undefined FUN_142ed6e0e(void)

void FUN_142ed6e0e(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ed6ef6 FUN_142ed6ef6 body=81 status=ok
// SIG undefined FUN_142ed6ef6(void)

void FUN_142ed6ef6(undefined8 param_1,longlong *param_2)

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
  FUN_14728dd27(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ed6f48 FUN_142ed6f48 body=38 status=ok
// SIG undefined FUN_142ed6f48(void)

undefined8 FUN_142ed6f48(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed6f6e FUN_142ed6f6e body=1430 status=ok
// SIG undefined FUN_142ed6f6e(void)

void FUN_142ed6f6e(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145ee2406();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca283c0);
  local_168 = *(undefined8 *)(param_1 + 0x1b8);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c0);
  local_198 = (float)(*(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4));
  local_1a0 = (float)(*(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0));
  local_190 = *(undefined8 *)(param_1 + 0x1f0);
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_188 = local_190;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed7506 FUN_142ed7506 body=38 status=ok
// SIG undefined FUN_142ed7506(void)

undefined8 FUN_142ed7506(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed752c FUN_142ed752c body=1430 status=ok
// SIG undefined FUN_142ed752c(void)

void FUN_142ed752c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined1 auStack_1d8 [32];
  undefined8 local_1b8;
  float local_1b0;
  float local_1a8;
  float local_1a0;
  float local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 *local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 0x11;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x90);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 0x11;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  puVar11[1] = 0;
  *puVar11 = &PTR_FUN_14a1fb978;
  puVar11[3] = 0;
  *(int *)(puVar11 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x24) = 8;
  }
  else {
    puVar6 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar6 = uStack_150;
    }
    FUN_1446fe144(puVar11 + 2,(int)local_148,0);
    puVar9 = (undefined8 *)puVar11[3];
    if ((undefined8 *)puVar11[3] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 2;
    }
    memcpy(puVar9,puVar6,(longlong)(int)local_148);
  }
  puVar11[0xd] = 0;
  puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar11 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar11 + 0x74) = 8;
  }
  else {
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = &uStack_140;
    }
    FUN_1446fe1b8(puVar11 + 5,iStack_f8,0);
    puVar9 = (undefined8 *)puVar11[0xd];
    if ((undefined8 *)puVar11[0xd] == (undefined8 *)0x0) {
      puVar9 = puVar11 + 5;
    }
    memcpy(puVar9,puVar6,(longlong)iStack_f8 << 3);
    puVar6 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar11 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar11 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar11 + 0x84) = (undefined4)uStack_e4;
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar6);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1ec);
  iVar2 = *(int *)(param_1 + 0x1e8);
  iVar3 = *(int *)(param_1 + 0x1e4);
  iVar4 = *(int *)(param_1 + 0x1e0);
  puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar6 = puVar11 + 5;
  if ((undefined8 *)param_2[1] < puVar6) {
    FUN_140023dd8(param_2,0x30);
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 5;
  }
  *param_2 = (ulonglong)puVar6;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar11;
  param_2[6] = (ulonglong)(puVar11 + 1);
  lVar7 = 0;
  puVar11[1] = 0;
  *puVar11 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar11 + 2) = (float)iVar4;
  *(float *)((longlong)puVar11 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar11 + 3) = 0;
  *(float *)((longlong)puVar11 + 0x1c) = (float)iVar2;
  *(float *)(puVar11 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar11 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  FUN_144b0e33a(param_2,&local_158);
  local_128 = DAT_14c9c0d50;
  uStack_120 = DAT_14c9c0db0;
  local_118 = DAT_14c9c0d98;
  local_158 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1c0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8) + 0xd4);
    lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar10 * 8);
    if (lVar7 == 0) {
      lVar7 = FUN_1400bafc2(lVar8,lVar10,1);
    }
  }
  uStack_150 = (undefined8 *)lVar7;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  local_100 = 0;
  local_148 = lVar8;
  lVar7 = FUN_140028f18(param_2);
  if ((lVar7 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar6 = puVar11 + 4;
    if ((undefined8 *)param_2[1] < puVar6) {
      FUN_140023dd8(param_2,0x28);
      puVar11 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar6 = puVar11 + 4;
    }
    *param_2 = (ulonglong)puVar6;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar11;
    param_2[6] = (ulonglong)(puVar11 + 1);
    puVar11[1] = 0;
    *puVar11 = &PTR_LAB_14a37d348;
    puVar11[2] = lVar7;
    *(undefined4 *)(puVar11 + 3) = 0;
    *(undefined1 *)((longlong)puVar11 + 0x1c) = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x1d8);
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar8 = 0;
  }
  else {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar10 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x50) + lVar10 * 8);
    if (lVar8 == 0) {
      lVar8 = FUN_1400bafc2(lVar7,lVar10,1);
    }
  }
  FUN_145ee28ee();
  local_1b8 = uVar5;
  FUN_1449cc26b(param_2,lVar8,*(undefined8 *)(param_1 + 0x1c8),&DAT_14ca28448);
  local_168 = *(undefined8 *)(param_1 + 0x1b8);
  local_180 = &local_168;
  local_160 = *(undefined8 *)(param_1 + 0x1c0);
  local_198 = (float)(*(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4));
  local_1a0 = (float)(*(int *)(param_1 + 0x1e8) - *(int *)(param_1 + 0x1e0));
  local_190 = *(undefined8 *)(param_1 + 0x1f0);
  local_1a8 = (float)*(int *)(param_1 + 0x1e4);
  local_1b0 = (float)*(int *)(param_1 + 0x1e0);
  local_170 = 1;
  local_178 = 1;
  local_1b8 = CONCAT44(local_1b8._4_4_,(float)(int)((ulonglong)local_190 >> 0x20));
  local_188 = local_190;
  FUN_140094833(param_2,0,0,(float)(int)local_190);
  if ((local_80 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed7ac4 FUN_142ed7ac4 body=481 status=ok
// SIG undefined FUN_142ed7ac4(void)

void FUN_142ed7ac4(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14728e1a0(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed7ca6 FUN_142ed7ca6 body=232 status=ok
// SIG undefined FUN_142ed7ca6(void)

void FUN_142ed7ca6(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ed7d8e FUN_142ed7d8e body=81 status=ok
// SIG undefined FUN_142ed7d8e(void)

void FUN_142ed7d8e(undefined8 param_1,longlong *param_2)

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
  FUN_14728e243(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ed7de0 FUN_142ed7de0 body=481 status=ok
// SIG undefined FUN_142ed7de0(void)

void FUN_142ed7de0(longlong param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  undefined8 *_Dst;
  undefined8 *puVar2;
  undefined1 *_Src;
  undefined1 auStack_e8 [32];
  undefined8 *local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_144b1c6fa(param_1 + 0x10,&local_c0);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar1 = puVar2 + 0x11;
  if ((undefined8 *)param_2[1] < puVar1) {
    FUN_140023dd8(param_2,0x90);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar1 = puVar2 + 0x11;
  }
  *param_2 = (ulonglong)puVar1;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_FUN_14a1fb978;
  puVar2[3] = 0;
  *(int *)(puVar2 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x24) = 8;
  }
  else {
    puVar1 = (undefined8 *)CONCAT44(uStack_b4,local_b8);
    if ((undefined8 *)CONCAT44(uStack_b4,local_b8) == (undefined8 *)0x0) {
      puVar1 = &local_c0;
    }
    FUN_1446fe144(puVar2 + 2,local_b0,0);
    _Dst = (undefined8 *)puVar2[3];
    if ((undefined8 *)puVar2[3] == (undefined8 *)0x0) {
      _Dst = puVar2 + 2;
    }
    memcpy(_Dst,puVar1,(longlong)local_b0);
  }
  puVar2[0xd] = 0;
  *(int *)(puVar2 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar2 + 0x74) = 8;
  }
  else {
    _Src = local_68;
    if (local_68 == (undefined1 *)0x0) {
      _Src = local_a8;
    }
    FUN_1446fe1b8(puVar2 + 5,local_60,0);
    puVar1 = (undefined8 *)puVar2[0xd];
    if ((undefined8 *)puVar2[0xd] == (undefined8 *)0x0) {
      puVar1 = puVar2 + 5;
    }
    memcpy(puVar1,_Src,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar2 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar2 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar2 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar2 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (CONCAT44(uStack_b4,local_b8) != 0) {
    FUN_1400020a8();
  }
  local_b8 = *(undefined4 *)(param_1 + 0x1e0);
  local_c0 = *(undefined8 *)(param_1 + 0x1d8);
  local_c8 = &local_c0;
  FUN_14728e580(param_2,param_1 + 0x1c8,*(undefined8 *)(param_1 + 0x1b8),
                *(undefined8 *)(param_1 + 0x1c0));
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ed7fc2 FUN_142ed7fc2 body=232 status=ok
// SIG undefined FUN_142ed7fc2(void)

void FUN_142ed7fc2(ulonglong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

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



// FUNCTION 142ed80aa FUN_142ed80aa body=81 status=ok
// SIG undefined FUN_142ed80aa(void)

void FUN_142ed80aa(undefined8 param_1,longlong *param_2)

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
  FUN_14728e623(param_1,param_2,lVar1);
  return;
}



// FUNCTION 142ed80fb FUN_142ed80fb body=4402 status=ok
// SIG undefined FUN_142ed80fb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ed80fb(longlong param_1,longlong param_2,undefined8 *param_3,byte param_4,byte param_5,
                  undefined8 *param_6)

{
  float fVar1;
  double dVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  ulonglong *puVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  undefined8 *puVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float _X;
  float fVar34;
  float fVar35;
  undefined1 auStack_558 [32];
  wchar_t *local_538;
  undefined1 local_530 [16];
  char *local_520;
  code *local_518;
  code *local_510;
  undefined8 **local_508;
  undefined1 *local_500;
  undefined1 *local_4f8;
  undefined1 *local_4f0;
  undefined4 local_4e8;
  undefined8 local_4e0;
  ulonglong *local_4d0;
  ulonglong *local_4c8;
  undefined8 *local_4c0;
  longlong local_4b8;
  undefined8 *local_4b0;
  longlong local_4a8;
  longlong local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  ulonglong local_488;
  undefined8 local_480;
  ulonglong local_478;
  undefined1 local_469;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  ulonglong local_448;
  ulonglong local_440;
  undefined8 local_438;
  undefined8 uStack_3d4;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  float local_398;
  float local_394;
  float local_390;
  float local_38c;
  float local_388;
  float local_384;
  float local_380;
  float local_37c;
  undefined1 local_378 [112];
  undefined8 local_308 [12];
  undefined8 uStack_2a4;
  undefined8 *local_298;
  longlong local_290;
  undefined *local_288;
  char local_280;
  undefined1 local_278 [2] [16];
  undefined8 local_258 [38];
  undefined8 local_128;
  float local_120;
  float local_11c;
  int local_118;
  undefined4 local_114;
  undefined1 local_110 [16];
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_558;
  uVar8 = param_3[1];
  local_478 = param_3[2];
  local_480 = param_3[3];
  local_4c0 = (undefined8 *)(ulonglong)param_4;
  iVar23 = param_4 + 1;
  uVar10 = (longlong)(int)((int)((ulonglong)local_480 >> 0x20) + (uint)param_4) / (longlong)iVar23;
  uVar22 = (longlong)(int)((int)local_480 + (uint)param_4) / (longlong)iVar23;
  uVar24 = uVar22 & 0xffffffff;
  if ((int)uVar22 < 2) {
    uVar24 = 1;
  }
  uVar22 = uVar10 & 0xffffffff;
  if ((int)uVar10 < 2) {
    uVar22 = 1;
  }
  uVar24 = uVar24 | uVar22 << 0x20;
  uVar21 = (longlong)((ulonglong)(uint)((int)local_478 >> 0x1f) << 0x20 | local_478 & 0xffffffff) /
           (longlong)iVar23 & 0xffffffffU |
           (longlong)((ulonglong)(uint)((longlong)local_478 >> 0x3f) << 0x20 | local_478 >> 0x20) /
           (longlong)iVar23 << 0x20;
  local_488 = uVar8 >> 0x20;
  uVar10 = (longlong)(int)((int)(uVar8 >> 0x20) + (uint)param_4) / (longlong)iVar23;
  iVar11 = (int)uVar8;
  uVar22 = (longlong)(int)((uint)param_4 + iVar11) / (longlong)iVar23;
  uVar25 = uVar22 & 0xffffffff;
  if ((int)uVar22 < 2) {
    uVar25 = 1;
  }
  uVar22 = 1;
  if (1 < (int)uVar10) {
    uVar22 = uVar10 & 0xffffffff;
  }
  uVar25 = uVar25 | uVar22 << 0x20;
  local_4a8 = param_1;
  local_450 = uVar25;
  local_448 = uVar21;
  local_440 = uVar24;
  if ((((param_4 == 0 && *(int *)(DAT_14ca25900 + 4) != 0) && (DAT_14ca84e1e == '\x01')) &&
      (local_4a0 = param_3[7], local_4a0 != 0)) &&
     ((*(int *)(param_3 + 9) != *(int *)(param_3 + 8) ||
      (*(int *)((longlong)param_3 + 0x4c) != *(int *)((longlong)param_3 + 0x44))))) {
    if (*(char *)(local_4a0 + 0x91) == '\x01') {
      fVar35 = (float)((double)*(float *)(param_2 + 0x2b00) * *(double *)(param_2 + 0x880) +
                       *(double *)(param_2 + 0x860) * 0.0 + *(double *)(param_2 + 0x840) * 0.0 +
                      *(double *)(param_2 + 0x8a0)) /
               (float)((double)*(float *)(param_2 + 0x2b00) * *(double *)(param_2 + 0x888) +
                       *(double *)(param_2 + 0x868) * 0.0 + *(double *)(param_2 + 0x848) * 0.0 +
                      *(double *)(param_2 + 0x8a8));
      local_4d0 = (ulonglong *)(param_1 + 0x70);
      puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
      puVar19 = puVar26 + 0x22;
      if (*(undefined8 **)(param_1 + 0x78) < puVar19) {
        FUN_140023dd8(local_4d0,0x120);
        puVar26 = (undefined8 *)(*local_4d0 + 0xf & 0xfffffffffffffff0);
        puVar19 = puVar26 + 0x22;
      }
      fVar28 = 1.0;
      if (fVar35 <= 1.0) {
        fVar28 = fVar35;
      }
      *local_4d0 = (ulonglong)puVar19;
      *puVar26 = &PTR_FUN_14a1fbd30;
      local_4b0 = puVar26 + 2;
      lVar17 = 0x22;
      do {
        puVar19 = (undefined8 *)((longlong)puVar26 + lVar17 + -0x12);
        *puVar19 = 0;
        puVar19[1] = 0;
        *(undefined4 *)((longlong)puVar26 + lVar17 + -2) = 0xffff0000;
        lVar17 = lVar17 + 0x18;
      } while (lVar17 != 0xe2);
      *(undefined4 *)((longlong)puVar26 + 0xe4) = 0;
      puVar26[0x1a] = 0;
      puVar26[0x1b] = 0;
      *(undefined2 *)(puVar26 + 0x1c) = 0;
      *(undefined4 *)(puVar26 + 0x1d) = 0xffffffff;
      *(undefined4 *)((longlong)puVar26 + 0xec) = 0xffffffff;
      *(undefined4 *)(puVar26 + 0x1e) = 0xffffffff;
      *(undefined4 *)((longlong)puVar26 + 0xf4) = 0xffffffff;
      *(undefined4 *)(puVar26 + 0x1f) = 0;
      *(undefined2 *)((longlong)puVar26 + 0xfc) = 0;
      puVar26[0x20] = 0;
      puVar20 = (ulonglong *)(param_1 + 0x98);
      iVar23 = *(int *)(param_1 + 0xa0);
      *(uint *)(param_1 + 0xa0) = iVar23 + 1U;
      lVar17 = (longlong)iVar23;
      if (*(uint *)(param_1 + 0xa4) < iVar23 + 1U) {
        local_4c8 = puVar20;
        local_4b8 = (longlong)iVar23;
        FUN_1448cfae8(puVar20);
        puVar20 = local_4c8;
        lVar17 = local_4b8;
      }
      *(undefined8 **)(*puVar20 + lVar17 * 8) = puVar26;
      uVar3 = *(undefined1 *)(param_6 + 3);
      puVar26[2] = *param_6;
      puVar26[3] = 0;
      *(undefined1 *)(puVar26 + 4) = uVar3;
      *(undefined1 *)((longlong)puVar26 + 0x21) = 0;
      *(undefined2 *)((longlong)puVar26 + 0x22) = 0xffff;
      puVar26[0x1a] = local_4a0;
      puVar26[0x1b] = 0;
      *(undefined2 *)(puVar26 + 0x1c) = 0x101;
      *(undefined4 *)((longlong)puVar26 + 0xe4) = 0x21;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c9c1080) && (FUN_144b3d300(&DAT_14c9c1080), DAT_14c9c1080 == -1))
      {
        FUN_145fddb1e(&local_298);
        local_4f0 = (undefined1 *)((ulonglong)local_4f0 & 0xffffffffffffff00);
        local_500 = (undefined1 *)((ulonglong)local_500 & 0xffffffffffffff00);
        local_520 = "Unknown";
        local_530 = (undefined1  [16])0x0;
        local_538 = L"FRenderTargetParameters";
        local_4f8 = (undefined1 *)0x0;
        local_510 = (code *)CONCAT44(local_510._4_4_,0x100);
        local_518 = (code *)CONCAT44(local_518._4_4_,0x7af);
        local_508 = &local_298;
        FUN_140b49562(&DAT_14c9c1000,0,1);
        if (local_298 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
        atexit((_func_5014 *)&LAB_142ed996f);
        _Init_thread_footer(&DAT_14c9c1080);
        param_1 = local_4a8;
      }
      FUN_140069376(param_1);
      puVar26 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
      puVar19 = puVar26 + 0x3b;
      if (*(undefined8 **)(param_1 + 0x78) < puVar19) {
        FUN_140023dd8(local_4d0,0x1e0);
        puVar26 = (undefined8 *)(*local_4d0 + 7 & 0xfffffffffffffff8);
        puVar19 = puVar26 + 0x3b;
      }
      *local_4d0 = (ulonglong)puVar19;
      local_298 = local_4b0;
      local_290 = DAT_14c9c1048;
      if (DAT_14c9c1048 != 0) {
        LOCK();
        *(int *)(DAT_14c9c1048 + 8) = *(int *)(DAT_14c9c1048 + 8) + 1;
        UNLOCK();
      }
      local_288 = &DAT_14c9c1000;
      local_538 = (wchar_t *)((ulonglong)local_538 & 0xffffffffffffff00);
      FUN_140068f1a(puVar26,&local_3c8,&local_298,1);
      *puVar26 = &PTR_FUN_14a2b8870;
      puVar26[0x37] = uVar25;
      puVar26[0x38] = uVar21;
      puVar26[0x39] = uVar24;
      *(float *)(puVar26 + 0x3a) = fVar28;
      iVar23 = *(int *)(param_1 + 0x170);
      *(uint *)(param_1 + 0x170) = iVar23 + 1U;
      if (*(uint *)(param_1 + 0x174) < iVar23 + 1U) {
        FUN_14470e57a(param_1 + 0x168,iVar23);
      }
      local_4b0 = (undefined8 *)CONCAT44(local_4b0._4_4_,fVar28);
      *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar23 * 8) = puVar26;
      *(int *)((longlong)puVar26 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
      FUN_140069100(param_1,puVar26);
      *(undefined1 *)(param_6 + 3) = 1;
      local_4d0 = (ulonglong *)
                  CONCAT44(local_4d0._4_4_,(int)CONCAT71((int7)((ulonglong)param_6 >> 8),1));
      goto LAB_142ed82b9;
    }
  }
  else {
    local_4a0 = param_3[7];
  }
  local_4b0 = (undefined8 *)((ulonglong)local_4b0 & 0xffffffff00000000);
  local_4d0 = (ulonglong *)((ulonglong)local_4d0 & 0xffffffff00000000);
LAB_142ed82b9:
  local_4c8 = param_3 + 1;
  local_278[0] = (undefined1  [16])0x0;
  lVar17 = 0x4c;
  do {
    *(undefined8 *)((longlong)&uStack_2a4 + lVar17) = 0;
    *(undefined8 *)(&stack0xfffffffffffffd64 + lVar17) = 0x3f80000000000000;
    lVar17 = lVar17 + 0x10;
  } while (lVar17 != 0x9c);
  local_128 = 0;
  local_110 = (undefined1  [16])0x0;
  lVar17 = FUN_1447e4f80();
  cVar14 = *(char *)(lVar17 + 0x41);
  if (*(char *)(lVar17 + 0x41) == '\x03') {
    cVar14 = '\x02';
  }
  local_298 = *(undefined8 **)(param_2 + 0x18);
  local_290 = CONCAT71(local_290._1_7_,cVar14);
  uVar9 = *param_3;
  lVar17 = FUN_144a890ae();
  local_280 = *(char *)(lVar17 + 0x41);
  if (local_280 == '\x03') {
    local_280 = '\x02';
  }
  local_468 = param_3[4];
  local_460 = param_3[5];
  local_458 = param_3[6];
  local_538 = (wchar_t *)((ulonglong)local_538 & 0xffffffff00000000);
  local_288 = (undefined *)uVar9;
  FUN_147134c9a(local_278,param_2,&local_468,param_3[1]);
  lVar17 = (**(code **)(*DAT_14ca63b58 + 0x10))();
  uVar9 = *(undefined8 *)(lVar17 + 0x2c);
  iVar15 = ((int)uVar9 * iVar11) / (int)local_450;
  local_4b8 = CONCAT44(local_4b8._4_4_,local_450._4_4_);
  fVar35 = *(float *)(param_2 + 11000);
  uVar4 = *(uint *)(param_2 + 0x2afc);
  _X = (float)((longlong)*(int *)(param_3 + 1) / (longlong)iVar11 & 0xffffffff);
  fVar28 = logf(_X);
  powf(*(float *)(param_2 + 0x2b1c),fVar28 * 1.442695);
  fVar28 = logf(_X);
  fVar29 = powf(*(float *)(param_2 + 0x2b1c),fVar28 * 1.442695);
  iVar23 = *(int *)(param_2 + 0x4e0);
  iVar5 = *(int *)(param_2 + 0x4d8);
  iVar6 = *(int *)(param_2 + 0x4e4);
  iVar7 = *(int *)(param_2 + 0x4dc);
  dVar2 = *(double *)(param_2 + 0x830);
  fVar28 = *(float *)(param_2 + 0x2af4);
  fVar1 = *(float *)(param_2 + 0x2b04);
  fVar30 = 0.0;
  fVar31 = 0.0;
  if (*(longlong **)(param_2 + 0x10) != (longlong *)0x0) {
    uVar16 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x68))();
    fVar30 = 1.0 / (float)iVar15;
    fVar31 = (float)(uVar16 & 7) * 7.52 * fVar30;
    fVar30 = fVar30 * (float)(uVar16 & 7) * 2.48;
  }
  lVar17 = local_4a8;
  local_498 = CONCAT44(local_498._4_4_,fVar31);
  fVar32 = *(float *)(DAT_14c9b6c68 + 4);
  fVar33 = *(float *)(param_2 + 0x2b08);
  lVar18 = 0xc;
  do {
    *(undefined8 *)((longlong)&uStack_3d4 + lVar18) = 0;
    *(undefined8 *)(&stack0xfffffffffffffc34 + lVar18) = 0x3f80000000000000;
    lVar18 = lVar18 + 0x10;
  } while (lVar18 != 0x5c);
  if (fVar33 <= 0.0001) {
    fVar33 = 0.0001;
  }
  fVar34 = 1.0;
  if (100.0 <= fVar32) {
    fVar32 = 100.0;
  }
  local_3a0 = 0;
  bVar27 = (uVar4 & 1) == 0;
  if (bVar27) {
    fVar35 = fVar35 / 400.0;
  }
  local_490 = CONCAT44(local_490._4_4_,fVar30);
  local_380 = fVar32;
  if (fVar32 <= 0.0) {
    local_380 = 0.0;
  }
  local_3b0 = fVar29 * 0.25 * fVar35;
  local_3ac = (float)(iVar23 - iVar5) / (float)(iVar6 - iVar7);
  local_38c = (float)dVar2;
  fVar35 = 1.0;
  if (1.0 <= fVar1) {
    fVar35 = fVar1;
  }
  local_388 = 1.0 / fVar35;
  if (1.0 <= fVar28) {
    fVar28 = 1.0;
  }
  local_390 = fVar28;
  if (fVar28 <= 0.0) {
    local_390 = 0.0;
  }
  if (!bVar27) {
    local_3a0 = 0x3f800000;
  }
  local_3c8 = (undefined8 *)
              CONCAT44(*(float *)(param_2 + 0x2b10) / 1000.0,*(undefined4 *)(param_2 + 0x2b0c));
  uStack_3c0 = CONCAT44(*(undefined4 *)(param_2 + 0x2af0),1.0 / fVar33);
  local_3b8 = (undefined *)
              CONCAT44((float)(int)local_488 /
                       (float)(((int)((ulonglong)uVar9 >> 0x20) * (int)local_488) / (int)local_4b8),
                       (float)iVar11 / (float)iVar15);
  local_39c = *(undefined4 *)(param_2 + 0x2b18);
  local_3a4 = *(float *)(param_2 + 0x2b20) / _X;
  local_37c = *(float *)(param_2 + 0x2b00);
  local_384 = -(local_37c - fVar35) * local_388;
  local_3a8 = _X;
  local_398 = fVar30;
  local_394 = fVar31;
  FUN_144a2c7c2(local_378,&local_450);
  FUN_144a2c7c2(&local_438,local_4c8);
  puVar19 = &local_438;
  puVar26 = local_308;
  for (lVar18 = 0xe; lVar18 != 0; lVar18 = lVar18 + -1) {
    *puVar26 = *puVar19;
    puVar19 = puVar19 + 1;
    puVar26 = puVar26 + 1;
  }
  memcpy(local_258,&local_3c8,0x130);
  local_128 = DAT_14c9c0d80;
  local_118 = (int)local_4c0 * 0x800000 + 0x3f800000;
  local_11c = 1.0;
  local_114 = 0xbf000000;
  if ((char)local_4c0 == '\0') {
    local_114 = 0;
  }
  else {
    local_11c = 1.0 / (float)(int)(local_450 >> 0x20);
    fVar34 = 1.0 / (float)(int)local_450;
  }
  local_120 = fVar34;
  local_110._0_8_ = FUN_14476842e(lVar17,&DAT_14ca63b58,L"SSAORandomization",0);
  local_110._8_8_ = DAT_14c9c0eb8;
  puVar20 = (ulonglong *)(lVar17 + 0x70);
  puVar26 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar19 = puVar26 + 0x56;
  if (*(undefined8 **)(lVar17 + 0x78) < puVar19) {
    FUN_140023dd8(puVar20,0x2c0);
    puVar26 = (undefined8 *)(*puVar20 + 0xf & 0xfffffffffffffff0);
    puVar19 = puVar26 + 0x56;
  }
  *(undefined8 **)(lVar17 + 0x70) = puVar19;
  *puVar26 = &PTR_FUN_14a2b88d0;
  local_4c0 = puVar26 + 2;
  local_4c8 = puVar20;
  FUN_14728e79a();
  iVar23 = *(int *)(lVar17 + 0xa0);
  *(uint *)(lVar17 + 0xa0) = iVar23 + 1U;
  uVar12 = local_4b0._0_4_;
  if (*(uint *)(lVar17 + 0xa4) < iVar23 + 1U) {
    FUN_1448cfae8((longlong *)(lVar17 + 0x98),iVar23);
  }
  *(undefined8 **)(*(longlong *)(lVar17 + 0x98) + (longlong)iVar23 * 8) = puVar26;
  memcpy(local_4c0,&local_298,0x198);
  uVar3 = *(undefined1 *)(param_6 + 3);
  puVar26[0x36] = *param_6;
  puVar26[0x37] = 0;
  *(undefined1 *)(puVar26 + 0x38) = uVar3;
  *(undefined1 *)((longlong)puVar26 + 0x1c1) = 0;
  *(undefined2 *)((longlong)puVar26 + 0x1c2) = 0xffff;
  if ((char)local_4d0 != '\0') {
    puVar26[0x4e] = local_4a0;
    puVar26[0x4f] = 0;
    *(undefined2 *)(puVar26 + 0x50) = 0x101;
    *(undefined4 *)((longlong)puVar26 + 0x284) = 0x21;
  }
  iVar23 = 3;
  if (*(int *)(DAT_14ca258d0 + 4) < 3) {
    iVar23 = *(int *)(DAT_14ca258d0 + 4);
  }
  uVar9 = *(undefined8 *)(param_2 + 0x13818);
  FUN_145e43890();
  FUN_1448e935e(uVar9,&local_3c8,&DAT_14ca25f78,(param_5 - 1 | 4) + iVar23);
  FUN_145e43890();
  uVar13 = local_3c8;
  local_4b8 = uStack_3c0;
  uVar9 = *(undefined8 *)(param_2 + 0x13818);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_4f0 = &LAB_14712ac08;
    local_4f8 = &LAB_14712ac0c;
    local_500 = &LAB_1472e3912;
    local_508 = (undefined8 **)&LAB_1472e3916;
    local_510 = FUN_1472e391a;
    local_518 = FUN_1472e3942;
    local_538 = L"/Engine/Private/ScreenPass.usf";
    local_4e0 = 0;
    local_4e8 = 0xe0;
    local_520 = (char *)CONCAT44(local_520._4_4_,1);
    local_530._0_12_ = ZEXT812(0x14a2f5d42);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_488 = uVar8;
  FUN_1448e935e(uVar9,&local_3c8,&DAT_14ca4b6d8,0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca4b780) && (FUN_144b3d300(&DAT_14ca4b780), DAT_14ca4b780 == -1)) {
    FUN_145e1a792();
    local_4f0 = &LAB_14712ac08;
    local_4f8 = &LAB_14712ac0c;
    local_500 = &LAB_1472e3912;
    local_508 = (undefined8 **)&LAB_1472e3916;
    local_510 = FUN_1472e391a;
    local_518 = FUN_1472e3942;
    local_538 = L"/Engine/Private/ScreenPass.usf";
    local_4e0 = 0;
    local_4e8 = 0xe0;
    local_520 = (char *)CONCAT44(local_520._4_4_,1);
    local_530._0_12_ = ZEXT812(0x14a2f5d42);
    FUN_140db5666(&DAT_14ca4b6d8,0,&DAT_14ca4b670,L"FScreenPassVS");
    _DAT_14ca4b6d8 = FGlobalShaderType::vftable;
    atexit((_func_5014 *)&LAB_1430179ee);
    _Init_thread_footer(&DAT_14ca4b780);
  }
  local_498 = local_3c8;
  local_490 = uStack_3c0;
  FUN_145e43afe();
  local_3c8 = (undefined8 *)0x0;
  uStack_3c0 = 0;
  FUN_1448f70da(uVar13,&DAT_14ca284d0,local_4c0,&local_3c8);
  uVar22 = local_440;
  uVar10 = local_448;
  uVar8 = local_450;
  FUN_145e43afe();
  lVar17 = local_4a8;
  FUN_140069376(local_4a8);
  puVar20 = local_4c8;
  puVar26 = (undefined8 *)(*(longlong *)(lVar17 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar19 = puVar26 + 0x44;
  if (*(undefined8 **)(lVar17 + 0x78) < puVar19) {
    FUN_140023dd8(local_4c8,0x228);
    puVar26 = (undefined8 *)(*puVar20 + 7 & 0xfffffffffffffff8);
    puVar19 = puVar26 + 0x44;
  }
  *puVar20 = (ulonglong)puVar19;
  local_3c8 = local_4c0;
  uStack_3c0 = DAT_14ca28518;
  if (DAT_14ca28518 != 0) {
    LOCK();
    *(int *)(DAT_14ca28518 + 8) = *(int *)(DAT_14ca28518 + 8) + 1;
    UNLOCK();
  }
  local_3b8 = &DAT_14ca284d0;
  local_538 = (wchar_t *)((ulonglong)local_538 & 0xffffffffffffff00);
  FUN_140068f1a(puVar26,&local_469,&local_3c8,1);
  lVar17 = local_4a8;
  *puVar26 = &PTR_FUN_14a2b88e0;
  puVar26[0x37] = param_2;
  puVar26[0x38] = uVar8;
  puVar26[0x39] = uVar10;
  puVar26[0x3a] = uVar22;
  puVar26[0x3b] = local_488;
  puVar26[0x3c] = local_478;
  puVar26[0x3d] = local_480;
  puVar26[0x3e] = local_498;
  puVar26[0x3f] = local_490;
  puVar26[0x40] = uVar13;
  puVar26[0x41] = local_4b8;
  puVar26[0x42] = local_4c0;
  *(char *)(puVar26 + 0x43) = (char)local_4d0;
  *(undefined2 *)((longlong)puVar26 + 0x219) = (undefined2)local_438;
  *(undefined1 *)((longlong)puVar26 + 0x21b) = local_438._2_1_;
  *(undefined4 *)((longlong)puVar26 + 0x21c) = uVar12;
  iVar23 = *(int *)(local_4a8 + 0x170);
  *(uint *)(local_4a8 + 0x170) = iVar23 + 1U;
  if (*(uint *)(local_4a8 + 0x174) < iVar23 + 1U) {
    FUN_14470e57a(local_4a8 + 0x168,iVar23);
  }
  *(undefined8 **)(*(longlong *)(lVar17 + 0x168) + (longlong)iVar23 * 8) = puVar26;
  *(int *)((longlong)puVar26 + 0x2c) = *(int *)(lVar17 + 0x170) + -1;
  FUN_140069100(lVar17,puVar26);
  if ((local_f0 ^ (ulonglong)auStack_558) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ed922e FUN_142ed922e body=38 status=ok
// SIG undefined FUN_142ed922e(void)

undefined8 FUN_142ed922e(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed9254 FUN_142ed9254 body=1415 status=ok
// SIG undefined FUN_142ed9254(void)

/* WARNING: Removing unreachable block (ram,0x000142ed94a6) */
/* WARNING: Removing unreachable block (ram,0x000142ed94ae) */
/* WARNING: Removing unreachable block (ram,0x000142ed94b2) */
/* WARNING: Removing unreachable block (ram,0x000142ed9596) */
/* WARNING: Removing unreachable block (ram,0x000142ed959e) */
/* WARNING: Removing unreachable block (ram,0x000142ed95a2) */
/* WARNING: Removing unreachable block (ram,0x000142ed9688) */
/* WARNING: Removing unreachable block (ram,0x000142ed9690) */
/* WARNING: Removing unreachable block (ram,0x000142ed9694) */

void FUN_142ed9254(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8;
  undefined4 local_2b0;
  undefined1 local_2a8;
  undefined4 local_2a0;
  undefined8 *local_298;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 *local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined **local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined **local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  code *local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 *local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  FUN_144b1c6fa(param_1 + 0x10,&local_108);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = (int)local_f8;
  if ((longlong)(int)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = uStack_100;
    if (uStack_100 == (undefined8 *)0x0) {
      puVar14 = &local_108;
    }
    FUN_1446fe144(puVar16 + 2,(int)local_f8,0);
    puVar15 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar15 = puVar16 + 2;
    }
    memcpy(puVar15,puVar14,(longlong)(int)local_f8);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_a8;
  if ((longlong)local_a8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_b0;
    if (local_b0 == (undefined8 *)0x0) {
      puVar14 = &uStack_f0;
    }
    FUN_1446fe1b8(puVar16 + 5,local_a8,0);
    puVar15 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar15 = puVar16 + 5;
    }
    memcpy(puVar15,puVar14,(longlong)local_a8 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_a0;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_9c;
  *(undefined4 *)(puVar16 + 0x10) = uStack_98;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_94;
  if (local_b0 != (undefined8 *)0x0) {
    FUN_1400020a8(local_b0);
  }
  if (uStack_100 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  uVar13 = uStack_110;
  uVar12 = local_118;
  uVar11 = uStack_130;
  uVar10 = uStack_140;
  uVar9 = uStack_150;
  uVar8 = local_158;
  uVar7 = uStack_170;
  uVar6 = uStack_180;
  uVar5 = uStack_1a0;
  local_188 = (code *)0x0;
  local_178 = 0;
  local_148 = (code *)0x0;
  local_138 = 0;
  uStack_25c = uStack_1a0._4_4_;
  local_f8 = 0;
  local_108 = 0;
  local_1b8 = 0;
  local_1c8 = &LAB_147142692;
  local_1a8 = &PTR_LAB_14a1f7970;
  uStack_1a0 = &LAB_142ed97dc;
  uStack_260 = (int)uVar5;
  local_258 = (undefined4)local_198;
  uStack_254 = local_198._4_4_;
  uStack_250 = (undefined4)uStack_190;
  uStack_24c = uStack_190._4_4_;
  uStack_160 = *(undefined4 *)(param_1 + 0x1d0);
  local_d8 = local_158;
  uStack_d0 = uStack_150;
  local_e8 = local_168;
  local_f8 = 0;
  uStack_f0 = uStack_170;
  local_108 = 0;
  uStack_100 = (undefined8 *)uStack_180;
  local_158 = local_198;
  uStack_150 = uStack_190;
  local_168 = &PTR_LAB_14a2b8890;
  uStack_15c = uStack_25c;
  local_178 = 0;
  uStack_170 = uStack_1b0;
  local_188 = FUN_142ed97e4;
  uStack_180 = uStack_1c0;
  local_d8._0_4_ = (undefined4)uVar8;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar9;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_258 = (undefined4)local_d8;
  uStack_254 = local_d8._4_4_;
  uStack_250 = (undefined4)uStack_d0;
  uStack_24c = uStack_d0._4_4_;
  local_d8 = local_118;
  uStack_d0 = uStack_110;
  local_e8 = local_128;
  local_f8 = 0;
  uStack_f0 = uStack_130;
  local_108 = 0;
  uStack_100 = (undefined8 *)uStack_140;
  local_118 = uVar8;
  uStack_110 = uVar9;
  local_128 = &PTR_LAB_14a2b88b0;
  uStack_120 = uStack_160;
  local_138 = 0;
  uStack_130 = uVar7;
  local_148 = FUN_142ed98aa;
  uStack_140 = uVar6;
  uStack_100._0_4_ = (undefined4)uVar10;
  uStack_100._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_f0._0_4_ = (undefined4)uVar11;
  uStack_f0._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_d8._0_4_ = (undefined4)uVar12;
  local_d8._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_d0._0_4_ = (undefined4)uVar13;
  uStack_d0._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_258 = (undefined4)local_d8;
  uStack_254 = local_d8._4_4_;
  uStack_250 = (undefined4)uStack_d0;
  uStack_24c = uStack_d0._4_4_;
  local_f8 = 0;
  local_108 = 0;
  local_128 = &PTR_LAB_14a2b88b0;
  local_138 = 0;
  local_148 = FUN_142ed98aa;
  local_168 = &PTR_LAB_14a2b8890;
  local_178 = 0;
  local_188 = FUN_142ed97e4;
  uStack_1a0 = &LAB_142ed97dc;
  local_1a8 = &PTR_LAB_14a1f7970;
  local_1b8 = 0;
  local_1c8 = &LAB_147142692;
  uStack_26c = uStack_f0._4_4_;
  uStack_270 = (undefined4)uStack_f0;
  local_278 = 0;
  uStack_27c = uStack_100._4_4_;
  uStack_280 = (undefined4)uStack_100;
  local_288 = 0;
  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar2 = *(int *)(param_1 + 0x1c8);
  iVar3 = *(int *)(param_1 + 0x1c0);
  iVar4 = *(int *)(param_1 + 0x1c4);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar16 + 5;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)iVar3;
  *(float *)((longlong)puVar16 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)iVar2;
  *(float *)(puVar16 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  FUN_14714256e(&local_288,&local_1c8);
  FUN_14714256e(&local_108,&local_288);
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_2b8 = 0;
  local_298 = &local_108;
  FUN_147415a65(param_2,1,1,&DAT_149e1e2f8);
  FUN_14714261e(&local_288);
  FUN_14714261e(&local_1c8);
  if ((local_48 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ed97e4 FUN_142ed97e4 body=128 status=ok
// SIG undefined FUN_142ed97e4(void)

void FUN_142ed97e4(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fbb10;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar1;
  return;
}



// FUNCTION 142ed988c FUN_142ed988c body=29 status=ok
// SIG undefined FUN_142ed988c(void)

undefined8 FUN_142ed988c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed98aa FUN_142ed98aa body=128 status=ok
// SIG undefined FUN_142ed98aa(void)

void FUN_142ed98aa(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fbb10;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 142ed9952 FUN_142ed9952 body=29 status=ok
// SIG undefined FUN_142ed9952(void)

undefined8 FUN_142ed9952(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed997c FUN_142ed997c body=38 status=ok
// SIG undefined FUN_142ed997c(void)

undefined8 FUN_142ed997c(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ed99a2 FUN_142ed99a2 body=1746 status=ok
// SIG undefined FUN_142ed99a2(void)

void FUN_142ed99a2(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  float local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined5 uStack_d4;
  undefined3 uStack_cf;
  undefined5 uStack_cc;
  undefined8 uStack_c7;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_a0;
  undefined8 local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_144b1c6fa(param_1 + 0x10,&local_168);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_158;
  if ((longlong)(int)local_158 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar4 = &local_168;
    if (uStack_160 != (undefined8 *)0x0) {
      puVar4 = uStack_160;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_158,0);
    puVar8 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar8 = puVar12 + 2;
    }
    memcpy(puVar8,puVar4,(longlong)(int)local_158);
  }
  puVar12[0xd] = 0;
  puVar4 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  *(int *)(puVar12 + 0xe) = iStack_108;
  if ((longlong)iStack_108 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar4 == (undefined8 *)0x0) {
      puVar4 = &uStack_150;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_108,0);
    puVar8 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar8 = puVar12 + 5;
    }
    memcpy(puVar8,puVar4,(longlong)iStack_108 << 3);
    puVar4 = (undefined8 *)CONCAT44(uStack_10c,local_110);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_104._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_fc;
  *(undefined4 *)(puVar12 + 0x10) = uStack_fc._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_f4;
  if (puVar4 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar4);
  }
  if (uStack_160 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  local_190 = *(undefined8 *)(param_1 + 0x1c8);
  iVar11 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x1d0) >> 0x20);
  iVar13 = (int)*(undefined8 *)(param_1 + 0x1d0);
  iVar10 = (int)((ulonglong)local_190 >> 0x20);
  local_188 = *(undefined8 *)(param_1 + 0x1e0);
  iVar7 = (int)local_190;
  uVar2 = *(undefined8 *)(param_1 + 0x1e8);
  local_180 = *(undefined8 *)(param_1 + 0x1d8);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar4 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar4) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar4;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  lVar5 = 0;
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar7;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar10;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar13;
  *(float *)(puVar12 + 4) = (float)iVar11;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_118 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = (undefined8 *)0x0;
  uStack_10c = 0;
  iStack_108 = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  uStack_f4 = 0;
  local_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  uStack_cf = 0;
  uStack_cc = 0;
  uStack_c7 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_a0 = 1;
  local_98 = 0;
  FUN_144b0e33a(param_2,&local_168);
  local_138 = DAT_14c9c0d50;
  uStack_130 = DAT_14c9c0db0;
  local_128 = DAT_14c9c0d98;
  local_168 = DAT_14ca94df8;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xd4);
    lVar5 = *(longlong *)(*(longlong *)(lVar6 + 0x50) + lVar9 * 8);
    if (lVar5 == 0) {
      lVar5 = FUN_1400bafc2(lVar6,lVar9,1);
    }
  }
  uStack_160 = (undefined8 *)lVar5;
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  local_110 = 0;
  local_a8._0_6_ = CONCAT15(*(undefined1 *)(param_1 + 0x218),(undefined5)local_a8);
  local_158 = lVar6;
  lVar5 = FUN_140028f18(param_2);
  if ((lVar5 != 0) && ((local_a0 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_148;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_140._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_158;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_150._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_168;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_168._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_160;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_160._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar5;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x210);
  if (*(longlong *)(param_1 + 0x200) == 0) {
    lVar6 = 0;
  }
  else {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x208) + 8);
    lVar9 = (longlong)*(int *)(*(longlong *)(param_1 + 0x200) + 0xd4);
    lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x50) + lVar9 * 8);
    if (lVar6 == 0) {
      lVar6 = FUN_1400bafc2(lVar5,lVar9,1);
    }
  }
  iVar11 = iVar11 - iVar10;
  iVar13 = iVar13 - (int)local_190;
  FUN_145e43afe();
  local_1e8 = uVar3;
  FUN_1449cc26b(param_2,lVar6,*(undefined8 *)(param_1 + 0x200),&DAT_14ca284d0);
  if (*(char *)(param_1 + 0x218) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x21c);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 3;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x20);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar12 + 3;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fbb10;
    *(undefined4 *)(puVar12 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar12 + 0x14) = 0x3f800000;
  }
  local_178 = *(undefined8 *)(param_1 + 0x1f0);
  local_1b0 = &local_178;
  local_170 = *(undefined8 *)(param_1 + 0x1f8);
  iVar7 = (int)((ulonglong)local_188 >> 0x20);
  local_1c8 = (float)((int)((ulonglong)uVar2 >> 0x20) - iVar7);
  local_1d0 = (float)((int)uVar2 - (int)local_188);
  local_1d8 = (float)iVar7;
  local_1e0 = (float)(int)local_188;
  local_1c0 = CONCAT44(iVar11,iVar13);
  local_1a0 = 1;
  local_1a8 = 1;
  local_1b8 = local_180;
  local_1e8 = CONCAT44(local_1e8._4_4_,(float)iVar11);
  FUN_140094833(param_2,0,0,(float)iVar13);
  if (*(char *)(param_1 + 0x218) == '\x01') {
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar4 = puVar12 + 3;
    if ((undefined8 *)param_2[1] < puVar4) {
      FUN_140023dd8(param_2,0x20);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar12 + 3;
    }
    *param_2 = (ulonglong)puVar4;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fbb10;
    puVar12[2] = 0x3f80000000000000;
  }
  if ((local_90 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eda076 FUN_142eda076 body=38 status=ok
// SIG undefined FUN_142eda076(void)

undefined8 FUN_142eda076(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eda09c FUN_142eda09c body=1461 status=ok
// SIG undefined FUN_142eda09c(void)

/* WARNING: Removing unreachable block (ram,0x000142eda3aa) */
/* WARNING: Removing unreachable block (ram,0x000142eda3b2) */
/* WARNING: Removing unreachable block (ram,0x000142eda3b6) */
/* WARNING: Removing unreachable block (ram,0x000142eda49a) */
/* WARNING: Removing unreachable block (ram,0x000142eda4a2) */
/* WARNING: Removing unreachable block (ram,0x000142eda4a6) */
/* WARNING: Removing unreachable block (ram,0x000142eda58c) */
/* WARNING: Removing unreachable block (ram,0x000142eda594) */
/* WARNING: Removing unreachable block (ram,0x000142eda598) */

void FUN_142eda09c(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined1 auStack_328 [32];
  undefined1 local_308;
  undefined4 local_300;
  undefined1 local_2f8;
  undefined4 local_2f0;
  undefined8 *local_2e8;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined8 local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined1 *local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  code *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined **local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined **local_178;
  undefined4 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 *local_100;
  int local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_328;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar16 + 0x11;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x90);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar16 + 0x11;
  }
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_FUN_14a1fb978;
  puVar16[3] = 0;
  *(int *)(puVar16 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x24) = 8;
  }
  else {
    puVar14 = uStack_150;
    if (uStack_150 == (undefined8 *)0x0) {
      puVar14 = &local_158;
    }
    FUN_1446fe144(puVar16 + 2,(int)local_148,0);
    puVar15 = (undefined8 *)puVar16[3];
    if ((undefined8 *)puVar16[3] == (undefined8 *)0x0) {
      puVar15 = puVar16 + 2;
    }
    memcpy(puVar15,puVar14,(longlong)(int)local_148);
  }
  puVar16[0xd] = 0;
  *(int *)(puVar16 + 0xe) = local_f8;
  if ((longlong)local_f8 == 0) {
    *(undefined4 *)((longlong)puVar16 + 0x74) = 8;
  }
  else {
    puVar14 = local_100;
    if (local_100 == (undefined8 *)0x0) {
      puVar14 = &uStack_140;
    }
    FUN_1446fe1b8(puVar16 + 5,local_f8,0);
    puVar15 = (undefined8 *)puVar16[0xd];
    if ((undefined8 *)puVar16[0xd] == (undefined8 *)0x0) {
      puVar15 = puVar16 + 5;
    }
    memcpy(puVar15,puVar14,(longlong)local_f8 << 3);
  }
  *(undefined4 *)(puVar16 + 0xf) = local_f0;
  *(undefined4 *)((longlong)puVar16 + 0x7c) = uStack_ec;
  *(undefined4 *)(puVar16 + 0x10) = uStack_e8;
  *(undefined4 *)((longlong)puVar16 + 0x84) = uStack_e4;
  if (local_100 != (undefined8 *)0x0) {
    FUN_1400020a8(local_100);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar1 = *(int *)(param_1 + 0x1cc);
  iVar2 = *(int *)(param_1 + 0x1c8);
  iVar3 = *(int *)(param_1 + 0x1c4);
  iVar4 = *(int *)(param_1 + 0x1c0);
  puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar14 = puVar16 + 5;
  if ((undefined8 *)param_2[1] < puVar14) {
    FUN_140023dd8(param_2,0x30);
    puVar16 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar14 = puVar16 + 5;
  }
  uVar13 = uStack_160;
  uVar12 = local_168;
  uVar11 = uStack_180;
  uVar10 = uStack_190;
  uVar9 = uStack_1a0;
  uVar8 = local_1a8;
  uVar7 = uStack_1c0;
  uVar6 = uStack_1d0;
  uVar5 = uStack_1f0;
  *param_2 = (ulonglong)puVar14;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar16;
  param_2[6] = (ulonglong)(puVar16 + 1);
  puVar16[1] = 0;
  *puVar16 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar16 + 2) = (float)iVar4;
  *(float *)((longlong)puVar16 + 0x14) = (float)iVar3;
  *(undefined4 *)(puVar16 + 3) = 0;
  *(float *)((longlong)puVar16 + 0x1c) = (float)iVar2;
  *(float *)(puVar16 + 4) = (float)iVar1;
  *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
  local_1d8 = (code *)0x0;
  local_1c8 = 0;
  local_198 = (code *)0x0;
  local_188 = 0;
  uStack_2ac = uStack_1f0._4_4_;
  local_148 = 0;
  local_158 = 0;
  local_208 = 0;
  local_218 = &LAB_147142692;
  local_1f8 = &PTR_LAB_14a1f7970;
  uStack_1f0 = &LAB_142eda652;
  uStack_2b0 = (int)uVar5;
  local_2a8 = (undefined4)local_1e8;
  uStack_2a4 = local_1e8._4_4_;
  uStack_2a0 = (undefined4)uStack_1e0;
  uStack_29c = uStack_1e0._4_4_;
  uStack_1b0 = *(undefined4 *)(param_1 + 0x1d0);
  local_128 = local_1a8;
  uStack_120 = uStack_1a0;
  local_138 = local_1b8;
  local_148 = 0;
  uStack_140 = uStack_1c0;
  local_158 = 0;
  uStack_150 = (undefined8 *)uStack_1d0;
  local_1a8 = local_1e8;
  uStack_1a0 = uStack_1e0;
  local_1b8 = &PTR_LAB_14a2b8920;
  uStack_1ac = uStack_2ac;
  local_1c8 = 0;
  uStack_1c0 = uStack_200;
  local_1d8 = FUN_142eda65a;
  uStack_1d0 = uStack_210;
  local_128._0_4_ = (undefined4)uVar8;
  local_128._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
  uStack_120._0_4_ = (undefined4)uVar9;
  uStack_120._4_4_ = (undefined4)((ulonglong)uVar9 >> 0x20);
  local_2a8 = (undefined4)local_128;
  uStack_2a4 = local_128._4_4_;
  uStack_2a0 = (undefined4)uStack_120;
  uStack_29c = uStack_120._4_4_;
  local_128 = local_168;
  uStack_120 = uStack_160;
  local_138 = local_178;
  local_148 = 0;
  uStack_140 = uStack_180;
  local_158 = 0;
  uStack_150 = (undefined8 *)uStack_190;
  local_168 = uVar8;
  uStack_160 = uVar9;
  local_178 = &PTR_LAB_14a2b8940;
  uStack_170 = uStack_1b0;
  local_188 = 0;
  uStack_180 = uVar7;
  local_198 = FUN_142eda720;
  uStack_190 = uVar6;
  uStack_150._0_4_ = (undefined4)uVar10;
  uStack_150._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  uStack_140._0_4_ = (undefined4)uVar11;
  uStack_140._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
  local_128._0_4_ = (undefined4)uVar12;
  local_128._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
  uStack_120._0_4_ = (undefined4)uVar13;
  uStack_120._4_4_ = (undefined4)((ulonglong)uVar13 >> 0x20);
  local_2a8 = (undefined4)local_128;
  uStack_2a4 = local_128._4_4_;
  uStack_2a0 = (undefined4)uStack_120;
  uStack_29c = uStack_120._4_4_;
  local_148 = 0;
  local_158 = 0;
  local_178 = &PTR_LAB_14a2b8940;
  local_188 = 0;
  local_198 = FUN_142eda720;
  local_1b8 = &PTR_LAB_14a2b8920;
  local_1c8 = 0;
  local_1d8 = FUN_142eda65a;
  uStack_1f0 = &LAB_142eda652;
  local_1f8 = &PTR_LAB_14a1f7970;
  local_208 = 0;
  local_218 = &LAB_147142692;
  uStack_2bc = uStack_140._4_4_;
  uStack_2c0 = (undefined4)uStack_140;
  local_2c8 = 0;
  uStack_2cc = uStack_150._4_4_;
  uStack_2d0 = (undefined4)uStack_150;
  local_2d8 = 0;
  FUN_14714256e(&local_2d8,&local_218);
  FUN_14714256e(&local_158,&local_2d8);
  local_2f0 = 0;
  local_2f8 = 0;
  local_300 = 0;
  local_308 = 0;
  local_2e8 = &local_158;
  FUN_147415a65(param_2,1,1,&DAT_149e1e2f8);
  FUN_14714261e(&local_2d8);
  FUN_14714261e(&local_218);
  if ((local_90 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142eda65a FUN_142eda65a body=128 status=ok
// SIG undefined FUN_142eda65a(void)

void FUN_142eda65a(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fbb10;
  *(undefined4 *)(puVar2 + 2) = 0;
  *(undefined4 *)((longlong)puVar2 + 0x14) = uVar1;
  return;
}



// FUNCTION 142eda702 FUN_142eda702 body=29 status=ok
// SIG undefined FUN_142eda702(void)

undefined8 FUN_142eda702(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eda720 FUN_142eda720 body=128 status=ok
// SIG undefined FUN_142eda720(void)

void FUN_142eda720(undefined4 *param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fbb10;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar2 + 0x14) = 0x3f800000;
  return;
}



// FUNCTION 142eda7c8 FUN_142eda7c8 body=29 status=ok
// SIG undefined FUN_142eda7c8(void)

undefined8 FUN_142eda7c8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eda7e6 FUN_142eda7e6 body=38 status=ok
// SIG undefined FUN_142eda7e6(void)

undefined8 FUN_142eda7e6(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142eda80c FUN_142eda80c body=1568 status=ok
// SIG undefined FUN_142eda80c(void)

void FUN_142eda80c(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined5 uStack_c4;
  undefined3 uStack_bf;
  undefined5 uStack_bc;
  undefined8 uStack_b7;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_198;
  FUN_144b1c6fa(param_1 + 0x10,&local_158);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 0x11;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x90);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 0x11;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb978;
  puVar12[3] = 0;
  *(int *)(puVar12 + 4) = (int)local_148;
  if ((longlong)(int)local_148 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x24) = 8;
  }
  else {
    puVar7 = &local_158;
    if (uStack_150 != (undefined8 *)0x0) {
      puVar7 = uStack_150;
    }
    FUN_1446fe144(puVar12 + 2,(int)local_148,0);
    puVar10 = (undefined8 *)puVar12[3];
    if ((undefined8 *)puVar12[3] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 2;
    }
    memcpy(puVar10,puVar7,(longlong)(int)local_148);
  }
  puVar12[0xd] = 0;
  puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  *(int *)(puVar12 + 0xe) = iStack_f8;
  if ((longlong)iStack_f8 == 0) {
    *(undefined4 *)((longlong)puVar12 + 0x74) = 8;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      puVar7 = &uStack_140;
    }
    FUN_1446fe1b8(puVar12 + 5,iStack_f8,0);
    puVar10 = (undefined8 *)puVar12[0xd];
    if ((undefined8 *)puVar12[0xd] == (undefined8 *)0x0) {
      puVar10 = puVar12 + 5;
    }
    memcpy(puVar10,puVar7,(longlong)iStack_f8 << 3);
    puVar7 = (undefined8 *)CONCAT44(uStack_fc,local_100);
  }
  *(undefined4 *)(puVar12 + 0xf) = uStack_f4._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x7c) = (undefined4)uStack_ec;
  *(undefined4 *)(puVar12 + 0x10) = uStack_ec._4_4_;
  *(undefined4 *)((longlong)puVar12 + 0x84) = (undefined4)uStack_e4;
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8(puVar7);
  }
  if (uStack_150 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  iVar2 = *(int *)(param_1 + 0x1dc);
  iVar3 = *(int *)(param_1 + 0x1d8);
  iVar4 = *(int *)(param_1 + 0x1d4);
  iVar5 = *(int *)(param_1 + 0x1d0);
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1e7fc8;
  *(float *)(puVar12 + 2) = (float)iVar5;
  *(float *)((longlong)puVar12 + 0x14) = (float)iVar4;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(float *)((longlong)puVar12 + 0x1c) = (float)iVar3;
  *(float *)(puVar12 + 4) = (float)iVar2;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 0x3f800000;
  local_108 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = (undefined8 *)0x0;
  uStack_fc = 0;
  iStack_f8 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e4 = 0;
  local_dc = 0;
  uStack_d4 = 0;
  local_cc = 0;
  uStack_c4 = 0;
  uStack_bf = 0;
  uStack_bc = 0;
  uStack_b7 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  local_168 = *(undefined8 *)(param_1 + 0x1f0);
  local_160 = *(undefined8 *)(param_1 + 0x1f8);
  FUN_1431f82c2(param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x1c0) + 0x13818),&local_168,
                &local_158);
  local_98._0_6_ = CONCAT15(*(undefined1 *)(param_1 + 0x200),(undefined5)local_98);
  lVar8 = FUN_140028f18(param_2,&local_158);
  if ((lVar8 != 0) && ((local_90 & 0x10000000) == 0)) {
    *(undefined4 *)(param_2 + 0x35) = (undefined4)local_138;
    *(undefined4 *)((longlong)param_2 + 0x1ac) = local_138._4_4_;
    *(undefined4 *)(param_2 + 0x36) = (undefined4)uStack_130;
    *(undefined4 *)((longlong)param_2 + 0x1b4) = uStack_130._4_4_;
    *(int *)(param_2 + 0x33) = (int)local_148;
    *(undefined4 *)((longlong)param_2 + 0x19c) = local_148._4_4_;
    *(undefined4 *)(param_2 + 0x34) = (undefined4)uStack_140;
    *(undefined4 *)((longlong)param_2 + 0x1a4) = uStack_140._4_4_;
    *(undefined4 *)(param_2 + 0x31) = (undefined4)local_158;
    *(undefined4 *)((longlong)param_2 + 0x18c) = local_158._4_4_;
    *(undefined4 *)(param_2 + 0x32) = (undefined4)uStack_150;
    *(undefined4 *)((longlong)param_2 + 0x194) = uStack_150._4_4_;
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 4;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x28);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 4;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a37d348;
    puVar12[2] = lVar8;
    *(undefined4 *)(puVar12 + 3) = 0;
    *(undefined1 *)((longlong)puVar12 + 0x1c) = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  if (*(longlong *)(param_1 + 0x1f0) == 0) {
    lVar9 = 0;
  }
  else {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x1f8) + 8);
    lVar11 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1f0) + 0xd4);
    lVar9 = *(longlong *)(*(longlong *)(lVar8 + 0x50) + lVar11 * 8);
    if (lVar9 == 0) {
      lVar9 = FUN_1400bafc2(lVar8,lVar11,1);
    }
  }
  FUN_145e6b32c();
  local_178 = uVar6;
  FUN_1449cc26b(param_2,lVar9,*(undefined8 *)(param_1 + 0x1f0),&DAT_14ca28668);
  if (*(char *)(param_1 + 0x200) == '\x01') {
    uVar1 = *(undefined4 *)(param_1 + 0x204);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 3;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x20);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 3;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fbb10;
    *(undefined4 *)(puVar12 + 2) = uVar1;
    *(undefined4 *)((longlong)puVar12 + 0x14) = 0x3f800000;
  }
  uVar6 = DAT_14ca89240;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 5;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x30);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 5;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_LAB_14a1fb5a8;
  *(undefined4 *)(puVar12 + 2) = 0;
  puVar12[3] = uVar6;
  *(undefined4 *)(puVar12 + 4) = 0;
  uVar6 = DAT_14ca89258;
  puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar7 = puVar12 + 6;
  if ((undefined8 *)param_2[1] < puVar7) {
    FUN_140023dd8(param_2,0x38);
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 6;
  }
  *param_2 = (ulonglong)puVar7;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar12;
  param_2[6] = (ulonglong)(puVar12 + 1);
  puVar12[1] = 0;
  *puVar12 = &PTR_FUN_14a1fb5b0;
  puVar12[2] = uVar6;
  *(undefined4 *)(puVar12 + 3) = 0;
  *(undefined4 *)((longlong)puVar12 + 0x1c) = 0;
  *(undefined4 *)(puVar12 + 4) = 3;
  *(undefined4 *)((longlong)puVar12 + 0x24) = 6;
  puVar12[5] = &DAT_100000001;
  if (*(char *)(param_1 + 0x200) == '\x01') {
    puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar7 = puVar12 + 3;
    if ((undefined8 *)param_2[1] < puVar7) {
      FUN_140023dd8(param_2,0x20);
      puVar12 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar7 = puVar12 + 3;
    }
    *param_2 = (ulonglong)puVar7;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar12;
    param_2[6] = (ulonglong)(puVar12 + 1);
    puVar12[1] = 0;
    *puVar12 = &PTR_LAB_14a1fbb10;
    puVar12[2] = 0x3f80000000000000;
  }
  if ((local_80 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edae4a FUN_142edae4a body=96 status=ok
// SIG undefined FUN_142edae4a(void)

undefined8 FUN_142edae4a(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edaf40();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca287e0,1);
  return uVar3;
}



// FUNCTION 142edaeaa FUN_142edaeaa body=138 status=ok
// SIG undefined FUN_142edaeaa(void)

void * FUN_142edaeaa(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edaf40 FUN_142edaf40 body=445 status=ok
// SIG undefined FUN_142edaf40(void)

void FUN_142edaf40(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca28860) {
    FUN_144b3d300(&DAT_14ca28860);
    if (DAT_14ca28860 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edb10a;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x2a0;
      local_88 = 0x4b;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca287e0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edb0fe);
      _Init_thread_footer(&DAT_14ca28860);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edb10a FUN_142edb10a body=136 status=ok
// SIG undefined FUN_142edb10a(void)

code * FUN_142edb10a(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a00000004e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb192;
}



// FUNCTION 142edb192 FUN_142edb192 body=136 status=ok
// SIG undefined FUN_142edb192(void)

code * FUN_142edb192(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SvPositionToInputTextureUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1900000004d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb21a;
}



// FUNCTION 142edb21a FUN_142edb21a body=138 status=ok
// SIG undefined FUN_142edb21a(void)

undefined1 * FUN_142edb21a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142edb2a4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomSetup";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FBloomSetupParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28868;
  return &LAB_142edb462;
}



// FUNCTION 142edb2a4 FUN_142edb2a4 body=445 status=ok
// SIG undefined FUN_142edb2a4(void)

void FUN_142edb2a4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca288e8) {
    FUN_144b3d300(&DAT_14ca288e8);
    if (DAT_14ca288e8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edb472;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FBloomSetupParameters";
      local_68 = 0;
      local_80 = 400;
      local_88 = 0x1c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca28868,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edb465);
      _Init_thread_footer(&DAT_14ca288e8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edb472 FUN_142edb472 body=136 status=ok
// SIG undefined FUN_142edb472(void)

code * FUN_142edb472(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BloomThreshold";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb4fa;
}



// FUNCTION 142edb4fa FUN_142edb4fa body=142 status=ok
// SIG undefined FUN_142edb4fa(void)

code * FUN_142edb4fa(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142edb588;
}



// FUNCTION 142edb588 FUN_142edb588 body=136 status=ok
// SIG undefined FUN_142edb588(void)

code * FUN_142edb588(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xe000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb61c;
}



// FUNCTION 142edb61c FUN_142edb61c body=142 status=ok
// SIG undefined FUN_142edb61c(void)

code * FUN_142edb61c(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_145d44362();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"LocalExposure";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FLocalExposureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xb000000025;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142edb6aa;
}



// FUNCTION 142edb6aa FUN_142edb6aa body=136 status=ok
// SIG undefined FUN_142edb6aa(void)

code * FUN_142edb6aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlurredLogLumSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa800000024;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb73e;
}



// FUNCTION 142edb73e FUN_142edb73e body=136 status=ok
// SIG undefined FUN_142edb73e(void)

code * FUN_142edb73e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BlurredLogLum";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xa000000023;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb7c6;
}



// FUNCTION 142edb7c6 FUN_142edb7c6 body=136 status=ok
// SIG undefined FUN_142edb7c6(void)

code * FUN_142edb7c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumBilateralGridSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9800000022;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb84e;
}



// FUNCTION 142edb84e FUN_142edb84e body=136 status=ok
// SIG undefined FUN_142edb84e(void)

code * FUN_142edb84e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LumBilateralGrid";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000021;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb8d6;
}



// FUNCTION 142edb8d6 FUN_142edb8d6 body=136 status=ok
// SIG undefined FUN_142edb8d6(void)

code * FUN_142edb8d6(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000020;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb95e;
}



// FUNCTION 142edb95e FUN_142edb95e body=136 status=ok
// SIG undefined FUN_142edb95e(void)

code * FUN_142edb95e(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000001f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edb9e6;
}



// FUNCTION 142edb9e6 FUN_142edb9e6 body=142 status=ok
// SIG undefined FUN_142edb9e6(void)

code * FUN_142edb9e6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x100000001e;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142edba74;
}



// FUNCTION 142edba74 FUN_142edba74 body=136 status=ok
// SIG undefined FUN_142edba74(void)

undefined1 * FUN_142edba74(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1d;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142edbafc;
}



// FUNCTION 142edbb00 FUN_142edbb00 body=44 status=ok
// SIG undefined FUN_142edbb00(void)

void FUN_142edbb00(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edbb4c FUN_142edbb4c body=96 status=ok
// SIG undefined FUN_142edbb4c(void)

undefined8 FUN_142edbb4c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edbc42();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca28a38,1);
  return uVar3;
}



// FUNCTION 142edbbac FUN_142edbbac body=138 status=ok
// SIG undefined FUN_142edbbac(void)

void * FUN_142edbbac(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edbc42 FUN_142edbc42 body=445 status=ok
// SIG undefined FUN_142edbc42(void)

void FUN_142edbc42(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca28ab8) {
    FUN_144b3d300(&DAT_14ca28ab8);
    if (DAT_14ca28ab8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edbe0c;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x1a0;
      local_88 = 99;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca28a38,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edbe00);
      _Init_thread_footer(&DAT_14ca28ab8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edbe0c FUN_142edbe0c body=136 status=ok
// SIG undefined FUN_142edbe0c(void)

code * FUN_142edbe0c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RWOutputTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x19000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edbe94;
}



// FUNCTION 142edbe94 FUN_142edbe94 body=138 status=ok
// SIG undefined FUN_142edbe94(void)

undefined1 * FUN_142edbe94(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142edb2a4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"BloomSetup";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FBloomSetupParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 100;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca28868;
  return &LAB_142edbf1e;
}



// FUNCTION 142edbf22 FUN_142edbf22 body=44 status=ok
// SIG undefined FUN_142edbf22(void)

void FUN_142edbf22(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edbfb2 FUN_142edbfb2 body=228 status=ok
// SIG undefined FUN_142edbfb2(void)

undefined8 * FUN_142edbfb2(undefined8 *param_1)

{
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0x3f80000000000000;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0x3f80000000000000;
  param_1[0x14] = 0;
  param_1[0x15] = 0x3f80000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0x3f80000000000000;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0x3f80000000000000;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0x3f80000000000000;
  param_1[0x20] = 0;
  param_1[0x21] = 0x3f80000000000000;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3f80000000000000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3f80000000000000;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3f80000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0x3f80000000000000;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0x3f80000000000000;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0x3f80000000000000;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x3f80000000000000;
  param_1[0x30] = 0;
  param_1[0x31] = 0x3f80000000000000;
  param_1[0x32] = 0;
  param_1[0x33] = 0x3f80000000000000;
  param_1[0x34] = 0;
  param_1[0x35] = 0x3f80000000000000;
  param_1[0x36] = 0;
  param_1[0x37] = 0x3f80000000000000;
  param_1[0x38] = 0;
  param_1[0x39] = 0x3f80000000000000;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0x3f80000000000000;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0x3f80000000000000;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3f80000000000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0x3f80000000000000;
  param_1[0x42] = 0;
  param_1[0x43] = 0x3f80000000000000;
  param_1[0x44] = 0;
  param_1[0x45] = 0x3f80000000000000;
  return param_1;
}



// FUNCTION 142edc096 FUN_142edc096 body=48 status=ok
// SIG undefined FUN_142edc096(void)

void FUN_142edc096(void)

{
  if (DAT_14ca29740 != 0) {
    FUN_1400020a8();
  }
  if (DAT_14ca296b8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 142edc122 FUN_142edc122 body=96 status=ok
// SIG undefined FUN_142edc122(void)

undefined8 FUN_142edc122(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edc218();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca29be0,1);
  return uVar3;
}



// FUNCTION 142edc182 FUN_142edc182 body=138 status=ok
// SIG undefined FUN_142edc182(void)

void * FUN_142edc182(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edc218 FUN_142edc218 body=445 status=ok
// SIG undefined FUN_142edc218(void)

void FUN_142edc218(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29c60) {
    FUN_144b3d300(&DAT_14ca29c60);
    if (DAT_14ca29c60 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edc3e2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x200;
      local_88 = 0x32;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca29be0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc3d6);
      _Init_thread_footer(&DAT_14ca29c60);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edc3e2 FUN_142edc3e2 body=136 status=ok
// SIG undefined FUN_142edc3e2(void)

code * FUN_142edc3e2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000034;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edc46a;
}



// FUNCTION 142edc46a FUN_142edc46a body=138 status=ok
// SIG undefined FUN_142edc46a(void)

undefined1 * FUN_142edc46a(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142edc4f4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDownsampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x33;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29c68;
  return &LAB_142edc6b2;
}



// FUNCTION 142edc4f4 FUN_142edc4f4 body=445 status=ok
// SIG undefined FUN_142edc4f4(void)

void FUN_142edc4f4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29ce8) {
    FUN_144b3d300(&DAT_14ca29ce8);
    if (DAT_14ca29ce8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edc6c2;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FDownsampleParameters";
      local_68 = 0;
      local_80 = 0x100;
      local_88 = 0xe;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca29c68,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edc6b5);
      _Init_thread_footer(&DAT_14ca29ce8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edc6c2 FUN_142edc6c2 body=136 status=ok
// SIG undefined FUN_142edc6c2(void)

code * FUN_142edc6c2(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf800000013;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edc74a;
}



// FUNCTION 142edc74a FUN_142edc74a body=136 status=ok
// SIG undefined FUN_142edc74a(void)

code * FUN_142edc74a(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xf000000012;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edc7d2;
}



// FUNCTION 142edc7d2 FUN_142edc7d2 body=142 status=ok
// SIG undefined FUN_142edc7d2(void)

code * FUN_142edc7d2(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Output";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000011;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142edc860;
}



// FUNCTION 142edc860 FUN_142edc860 body=142 status=ok
// SIG undefined FUN_142edc860(void)

code * FUN_142edc860(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000010;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142edc8ee;
}



// FUNCTION 142edc8ee FUN_142edc8ee body=136 status=ok
// SIG undefined FUN_142edc8ee(void)

undefined1 * FUN_142edc8ee(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xf;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142edc976;
}



// FUNCTION 142edc97a FUN_142edc97a body=44 status=ok
// SIG undefined FUN_142edc97a(void)

void FUN_142edc97a(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edc9c6 FUN_142edc9c6 body=96 status=ok
// SIG undefined FUN_142edc9c6(void)

undefined8 FUN_142edc9c6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edcabc();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca29e38,1);
  return uVar3;
}



// FUNCTION 142edca26 FUN_142edca26 body=138 status=ok
// SIG undefined FUN_142edca26(void)

void * FUN_142edca26(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edcabc FUN_142edcabc body=445 status=ok
// SIG undefined FUN_142edcabc(void)

void FUN_142edcabc(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca29eb8) {
    FUN_144b3d300(&DAT_14ca29eb8);
    if (DAT_14ca29eb8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edcc86;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x120;
      local_88 = 0x47;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca29e38,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edcc7a);
      _Init_thread_footer(&DAT_14ca29eb8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edcc86 FUN_142edcc86 body=136 status=ok
// SIG undefined FUN_142edcc86(void)

code * FUN_142edcc86(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"OutComputeTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1100000004a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edcd0e;
}



// FUNCTION 142edcd0e FUN_142edcd0e body=136 status=ok
// SIG undefined FUN_142edcd0e(void)

code * FUN_142edcd0e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DispatchThreadIdToInputUV";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000049;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x400000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edcd96;
}



// FUNCTION 142edcd96 FUN_142edcd96 body=138 status=ok
// SIG undefined FUN_142edcd96(void)

undefined1 * FUN_142edcd96(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_142edc4f4();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar3 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar3) = L"Common";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"FDownsampleParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x48;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined **)(lVar2 + 0x28 + lVar3) = &DAT_14ca29c68;
  return &LAB_142edce20;
}



// FUNCTION 142edce24 FUN_142edce24 body=44 status=ok
// SIG undefined FUN_142edce24(void)

void FUN_142edce24(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edceb6 FUN_142edceb6 body=96 status=ok
// SIG undefined FUN_142edceb6(void)

undefined8 FUN_142edceb6(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edcfac();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2a348,1);
  return uVar3;
}



// FUNCTION 142edcf16 FUN_142edcf16 body=138 status=ok
// SIG undefined FUN_142edcf16(void)

void * FUN_142edcf16(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edcfac FUN_142edcfac body=445 status=ok
// SIG undefined FUN_142edcfac(void)

void FUN_142edcfac(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a3c8) {
    FUN_144b3d300(&DAT_14ca2a3c8);
    if (DAT_14ca2a3c8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edd176;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0x41;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2a348,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edd16a);
      _Init_thread_footer(&DAT_14ca2a3c8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edd176 FUN_142edd176 body=136 status=ok
// SIG undefined FUN_142edd176(void)

code * FUN_142edd176(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelCenterCoordOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000044;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd1fe;
}



// FUNCTION 142edd1fe FUN_142edd1fe body=136 status=ok
// SIG undefined FUN_142edd1fe(void)

code * FUN_142edd1fe(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000043;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd286;
}



// FUNCTION 142edd286 FUN_142edd286 body=130 status=ok
// SIG undefined FUN_142edd286(void)

undefined1 * FUN_142edd286(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x42;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edd308;
}



// FUNCTION 142edd30c FUN_142edd30c body=44 status=ok
// SIG undefined FUN_142edd30c(void)

void FUN_142edd30c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edd356 FUN_142edd356 body=96 status=ok
// SIG undefined FUN_142edd356(void)

undefined8 FUN_142edd356(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edd44c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2a518,1);
  return uVar3;
}



// FUNCTION 142edd3b6 FUN_142edd3b6 body=138 status=ok
// SIG undefined FUN_142edd3b6(void)

void * FUN_142edd3b6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edd44c FUN_142edd44c body=445 status=ok
// SIG undefined FUN_142edd44c(void)

void FUN_142edd44c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a598) {
    FUN_144b3d300(&DAT_14ca2a598);
    if (DAT_14ca2a598 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edd616;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0x4e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2a518,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edd60a);
      _Init_thread_footer(&DAT_14ca2a598);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edd616 FUN_142edd616 body=136 status=ok
// SIG undefined FUN_142edd616(void)

code * FUN_142edd616(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000055;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd69e;
}



// FUNCTION 142edd69e FUN_142edd69e body=136 status=ok
// SIG undefined FUN_142edd69e(void)

code * FUN_142edd69e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000054;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd726;
}



// FUNCTION 142edd726 FUN_142edd726 body=136 status=ok
// SIG undefined FUN_142edd726(void)

code * FUN_142edd726(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelCenterCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000053;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd7ae;
}



// FUNCTION 142edd7ae FUN_142edd7ae body=136 status=ok
// SIG undefined FUN_142edd7ae(void)

code * FUN_142edd7ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000052;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd836;
}



// FUNCTION 142edd836 FUN_142edd836 body=136 status=ok
// SIG undefined FUN_142edd836(void)

code * FUN_142edd836(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000051;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd8be;
}



// FUNCTION 142edd8be FUN_142edd8be body=136 status=ok
// SIG undefined FUN_142edd8be(void)

code * FUN_142edd8be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyGroupGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000050;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edd946;
}



// FUNCTION 142edd946 FUN_142edd946 body=130 status=ok
// SIG undefined FUN_142edd946(void)

undefined1 * FUN_142edd946(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewTexelRadiusInKernelTexels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x4f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edd9c8;
}



// FUNCTION 142edd9cc FUN_142edd9cc body=44 status=ok
// SIG undefined FUN_142edd9cc(void)

void FUN_142edd9cc(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edda16 FUN_142edda16 body=96 status=ok
// SIG undefined FUN_142edda16(void)

undefined8 FUN_142edda16(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142eddb0c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2a6e8,1);
  return uVar3;
}



// FUNCTION 142edda76 FUN_142edda76 body=138 status=ok
// SIG undefined FUN_142edda76(void)

void * FUN_142edda76(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142eddb0c FUN_142eddb0c body=445 status=ok
// SIG undefined FUN_142eddb0c(void)

void FUN_142eddb0c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a768) {
    FUN_144b3d300(&DAT_14ca2a768);
    if (DAT_14ca2a768 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142eddcd6;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x40;
      local_88 = 0x5f;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2a6e8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142eddcca);
      _Init_thread_footer(&DAT_14ca2a768);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142eddcd6 FUN_142eddcd6 body=136 status=ok
// SIG undefined FUN_142eddcd6(void)

code * FUN_142eddcd6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x3000000067;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142eddd5e;
}



// FUNCTION 142eddd5e FUN_142eddd5e body=136 status=ok
// SIG undefined FUN_142eddd5e(void)

code * FUN_142eddd5e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2800000066;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142eddde6;
}



// FUNCTION 142eddde6 FUN_142eddde6 body=136 status=ok
// SIG undefined FUN_142eddde6(void)

code * FUN_142eddde6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScatterDispersionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000065;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edde6e;
}



// FUNCTION 142edde6e FUN_142edde6e body=136 status=ok
// SIG undefined FUN_142edde6e(void)

code * FUN_142edde6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelCenterCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000064;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142eddef6;
}



// FUNCTION 142eddef6 FUN_142eddef6 body=136 status=ok
// SIG undefined FUN_142eddef6(void)

code * FUN_142eddef6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000063;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142eddf7e;
}



// FUNCTION 142eddf7e FUN_142eddf7e body=136 status=ok
// SIG undefined FUN_142eddf7e(void)

code * FUN_142eddf7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000062;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede006;
}



// FUNCTION 142ede006 FUN_142ede006 body=136 status=ok
// SIG undefined FUN_142ede006(void)

code * FUN_142ede006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyGroupGridSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000061;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede08e;
}



// FUNCTION 142ede08e FUN_142ede08e body=130 status=ok
// SIG undefined FUN_142ede08e(void)

undefined1 * FUN_142ede08e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ViewTexelRadiusInKernelTexels";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x60;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ede110;
}



// FUNCTION 142ede114 FUN_142ede114 body=44 status=ok
// SIG undefined FUN_142ede114(void)

void FUN_142ede114(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ede15e FUN_142ede15e body=96 status=ok
// SIG undefined FUN_142ede15e(void)

undefined8 FUN_142ede15e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ede254();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2a8b8,1);
  return uVar3;
}



// FUNCTION 142ede1be FUN_142ede1be body=138 status=ok
// SIG undefined FUN_142ede1be(void)

void * FUN_142ede1be(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ede254 FUN_142ede254 body=445 status=ok
// SIG undefined FUN_142ede254(void)

void FUN_142ede254(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2a938) {
    FUN_144b3d300(&DAT_14ca2a938);
    if (DAT_14ca2a938 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ede41e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x10;
      local_88 = 0x71;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2a8b8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ede412);
      _Init_thread_footer(&DAT_14ca2a938);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ede41e FUN_142ede41e body=136 status=ok
// SIG undefined FUN_142ede41e(void)

code * FUN_142ede41e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000074;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede4a6;
}



// FUNCTION 142ede4a6 FUN_142ede4a6 body=136 status=ok
// SIG undefined FUN_142ede4a6(void)

code * FUN_142ede4a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x400000073;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede52e;
}



// FUNCTION 142ede52e FUN_142ede52e body=130 status=ok
// SIG undefined FUN_142ede52e(void)

undefined1 * FUN_142ede52e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SurveyReduceOp";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x72;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ede5b0;
}



// FUNCTION 142ede5b4 FUN_142ede5b4 body=44 status=ok
// SIG undefined FUN_142ede5b4(void)

void FUN_142ede5b4(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ede5fe FUN_142ede5fe body=96 status=ok
// SIG undefined FUN_142ede5fe(void)

undefined8 FUN_142ede5fe(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ede6f4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2aa88,1);
  return uVar3;
}



// FUNCTION 142ede65e FUN_142ede65e body=138 status=ok
// SIG undefined FUN_142ede65e(void)

void * FUN_142ede65e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ede6f4 FUN_142ede6f4 body=445 status=ok
// SIG undefined FUN_142ede6f4(void)

void FUN_142ede6f4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ab08) {
    FUN_144b3d300(&DAT_14ca2ab08);
    if (DAT_14ca2ab08 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ede8be;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0x7e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2aa88,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ede8b2);
      _Init_thread_footer(&DAT_14ca2ab08);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ede8be FUN_142ede8be body=136 status=ok
// SIG undefined FUN_142ede8be(void)

code * FUN_142ede8be(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDispersionOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede946;
}



// FUNCTION 142ede946 FUN_142ede946 body=136 status=ok
// SIG undefined FUN_142ede946(void)

code * FUN_142ede946(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScatterDispersionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ede9ce;
}



// FUNCTION 142ede9ce FUN_142ede9ce body=136 status=ok
// SIG undefined FUN_142ede9ce(void)

code * FUN_142ede9ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDispersionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edea56;
}



// FUNCTION 142edea56 FUN_142edea56 body=136 status=ok
// SIG undefined FUN_142edea56(void)

code * FUN_142edea56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDispersionTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x800000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edeade;
}



// FUNCTION 142edeade FUN_142edeade body=130 status=ok
// SIG undefined FUN_142edeade(void)

undefined1 * FUN_142edeade(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PassId";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edeb60;
}



// FUNCTION 142edeb64 FUN_142edeb64 body=44 status=ok
// SIG undefined FUN_142edeb64(void)

void FUN_142edeb64(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edebae FUN_142edebae body=96 status=ok
// SIG undefined FUN_142edebae(void)

undefined8 FUN_142edebae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edeca4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2ac58,1);
  return uVar3;
}



// FUNCTION 142edec0e FUN_142edec0e body=138 status=ok
// SIG undefined FUN_142edec0e(void)

void * FUN_142edec0e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edeca4 FUN_142edeca4 body=445 status=ok
// SIG undefined FUN_142edeca4(void)

void FUN_142edeca4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2acd8) {
    FUN_144b3d300(&DAT_14ca2acd8);
    if (DAT_14ca2acd8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edee6e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x30;
      local_88 = 0x8d;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2ac58,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edee62);
      _Init_thread_footer(&DAT_14ca2acd8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edee6e FUN_142edee6e body=136 status=ok
// SIG undefined FUN_142edee6e(void)

code * FUN_142edee6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelConstantsOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x2000000092;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edeef6;
}



// FUNCTION 142edeef6 FUN_142edeef6 body=136 status=ok
// SIG undefined FUN_142edeef6(void)

code * FUN_142edeef6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDispersionTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1800000091;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edef7e;
}



// FUNCTION 142edef7e FUN_142edef7e body=136 status=ok
// SIG undefined FUN_142edef7e(void)

code * FUN_142edef7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"MaxScatterDispersionBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1000000090;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf006;
}



// FUNCTION 142edf006 FUN_142edf006 body=136 status=ok
// SIG undefined FUN_142edf006(void)

code * FUN_142edf006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelCenterEnergyBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000008f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf08e;
}



// FUNCTION 142edf08e FUN_142edf08e body=130 status=ok
// SIG undefined FUN_142edf08e(void)

undefined1 * FUN_142edf08e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelCenterCoordBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edf110;
}



// FUNCTION 142edf114 FUN_142edf114 body=44 status=ok
// SIG undefined FUN_142edf114(void)

void FUN_142edf114(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edf15e FUN_142edf15e body=96 status=ok
// SIG undefined FUN_142edf15e(void)

undefined8 FUN_142edf15e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edf254();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2ae28,1);
  return uVar3;
}



// FUNCTION 142edf1be FUN_142edf1be body=138 status=ok
// SIG undefined FUN_142edf1be(void)

void * FUN_142edf1be(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edf254 FUN_142edf254 body=445 status=ok
// SIG undefined FUN_142edf254(void)

void FUN_142edf254(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2aea8) {
    FUN_144b3d300(&DAT_14ca2aea8);
    if (DAT_14ca2aea8 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edf41e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0x9c;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2ae28,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edf412);
      _Init_thread_footer(&DAT_14ca2aea8);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edf41e FUN_142edf41e body=136 status=ok
// SIG undefined FUN_142edf41e(void)

code * FUN_142edf41e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ClampedKernelSpatialOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000a0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf4a6;
}



// FUNCTION 142edf4a6 FUN_142edf4a6 body=136 status=ok
// SIG undefined FUN_142edf4a6(void)

code * FUN_142edf4a6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelConstantsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x100000009f;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf52e;
}



// FUNCTION 142edf52e FUN_142edf52e body=136 status=ok
// SIG undefined FUN_142edf52e(void)

code * FUN_142edf52e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000009e;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf5b6;
}



// FUNCTION 142edf5b6 FUN_142edf5b6 body=130 status=ok
// SIG undefined FUN_142edf5b6(void)

undefined1 * FUN_142edf5b6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"bProcessAlpha";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edf638;
}



// FUNCTION 142edf63c FUN_142edf63c body=44 status=ok
// SIG undefined FUN_142edf63c(void)

void FUN_142edf63c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edf686 FUN_142edf686 body=96 status=ok
// SIG undefined FUN_142edf686(void)

undefined8 FUN_142edf686(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edf77c();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2aff8,1);
  return uVar3;
}



// FUNCTION 142edf6e6 FUN_142edf6e6 body=138 status=ok
// SIG undefined FUN_142edf6e6(void)

void * FUN_142edf6e6(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edf77c FUN_142edf77c body=445 status=ok
// SIG undefined FUN_142edf77c(void)

void FUN_142edf77c(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b078) {
    FUN_144b3d300(&DAT_14ca2b078);
    if (DAT_14ca2b078 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edf946;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0xaa;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2aff8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edf93a);
      _Init_thread_footer(&DAT_14ca2b078);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edf946 FUN_142edf946 body=136 status=ok
// SIG undefined FUN_142edf946(void)

code * FUN_142edf946(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DownsampleKernelSpatialOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edf9ce;
}



// FUNCTION 142edf9ce FUN_142edf9ce body=136 status=ok
// SIG undefined FUN_142edf9ce(void)

code * FUN_142edf9ce(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000ad;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edfa56;
}



// FUNCTION 142edfa56 FUN_142edfa56 body=136 status=ok
// SIG undefined FUN_142edfa56(void)

code * FUN_142edfa56(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edfade;
}



// FUNCTION 142edfade FUN_142edfade body=130 status=ok
// SIG undefined FUN_142edfade(void)

undefined1 * FUN_142edfade(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTextureSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142edfb60;
}



// FUNCTION 142edfb64 FUN_142edfb64 body=44 status=ok
// SIG undefined FUN_142edfb64(void)

void FUN_142edfb64(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142edfbae FUN_142edfbae body=96 status=ok
// SIG undefined FUN_142edfbae(void)

undefined8 FUN_142edfbae(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142edfca4();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2b1c8,1);
  return uVar3;
}



// FUNCTION 142edfc0e FUN_142edfc0e body=138 status=ok
// SIG undefined FUN_142edfc0e(void)

void * FUN_142edfc0e(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142edfca4 FUN_142edfca4 body=445 status=ok
// SIG undefined FUN_142edfca4(void)

void FUN_142edfca4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b248) {
    FUN_144b3d300(&DAT_14ca2b248);
    if (DAT_14ca2b248 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142edfe6e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x50;
      local_88 = 0xb8;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2b1c8,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142edfe62);
      _Init_thread_footer(&DAT_14ca2b248);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142edfe6e FUN_142edfe6e body=136 status=ok
// SIG undefined FUN_142edfe6e(void)

code * FUN_142edfe6e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x40000000c4;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edfef6;
}



// FUNCTION 142edfef6 FUN_142edfef6 body=136 status=ok
// SIG undefined FUN_142edfef6(void)

code * FUN_142edfef6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x38000000c2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142edff7e;
}



// FUNCTION 142edff7e FUN_142edff7e body=136 status=ok
// SIG undefined FUN_142edff7e(void)

code * FUN_142edff7e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SrcTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x30000000c1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee0006;
}



// FUNCTION 142ee0006 FUN_142ee0006 body=136 status=ok
// SIG undefined FUN_142ee0006(void)

code * FUN_142ee0006(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelConstantsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x28000000bf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee008e;
}



// FUNCTION 142ee008e FUN_142ee008e body=136 status=ok
// SIG undefined FUN_142ee008e(void)

code * FUN_142ee008e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSupportScale";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x20000000bd;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee0116;
}



// FUNCTION 142ee0116 FUN_142ee0116 body=136 status=ok
// SIG undefined FUN_142ee0116(void)

code * FUN_142ee0116(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstBufferExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000bc;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee019e;
}



// FUNCTION 142ee019e FUN_142ee019e body=136 status=ok
// SIG undefined FUN_142ee019e(void)

code * FUN_142ee019e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelSpatialTextureInvSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000bb;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee0226;
}



// FUNCTION 142ee0226 FUN_142ee0226 body=136 status=ok
// SIG undefined FUN_142ee0226(void)

code * FUN_142ee0226(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ImageExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000ba;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee02ae;
}



// FUNCTION 142ee02ae FUN_142ee02ae body=130 status=ok
// SIG undefined FUN_142ee02ae(void)

undefined1 * FUN_142ee02ae(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DstExtent";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xb9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ee0330;
}



// FUNCTION 142ee0334 FUN_142ee0334 body=44 status=ok
// SIG undefined FUN_142ee0334(void)

void FUN_142ee0334(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee037e FUN_142ee037e body=96 status=ok
// SIG undefined FUN_142ee037e(void)

undefined8 FUN_142ee037e(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ee0474();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2b398,1);
  return uVar3;
}



// FUNCTION 142ee03de FUN_142ee03de body=138 status=ok
// SIG undefined FUN_142ee03de(void)

void * FUN_142ee03de(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ee0474 FUN_142ee0474 body=445 status=ok
// SIG undefined FUN_142ee0474(void)

void FUN_142ee0474(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b418) {
    FUN_144b3d300(&DAT_14ca2b418);
    if (DAT_14ca2b418 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ee063e;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x20;
      local_88 = 0xce;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2b398,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee0632);
      _Init_thread_footer(&DAT_14ca2b418);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee063e FUN_142ee063e body=136 status=ok
// SIG undefined FUN_142ee063e(void)

code * FUN_142ee063e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"FFTMulitplyOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x18000000d2;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee06c6;
}



// FUNCTION 142ee06c6 FUN_142ee06c6 body=136 status=ok
// SIG undefined FUN_142ee06c6(void)

code * FUN_142ee06c6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"SceneColorApplyOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWStructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x10000000d1;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x12;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee074e;
}



// FUNCTION 142ee074e FUN_142ee074e body=136 status=ok
// SIG undefined FUN_142ee074e(void)

code * FUN_142ee074e(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"KernelConstantsBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<uint>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000d0;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee07d6;
}



// FUNCTION 142ee07d6 FUN_142ee07d6 body=130 status=ok
// SIG undefined FUN_142ee07d6(void)

undefined1 * FUN_142ee07d6(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ScatterDispersionIntensity";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0xcf;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 4;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return &LAB_142ee0858;
}



// FUNCTION 142ee085c FUN_142ee085c body=44 status=ok
// SIG undefined FUN_142ee085c(void)

void FUN_142ee085c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee088c FUN_142ee088c body=29 status=ok
// SIG undefined FUN_142ee088c(void)

undefined8 FUN_142ee088c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee08aa FUN_142ee08aa body=38 status=ok
// SIG undefined FUN_142ee08aa(void)

undefined8 FUN_142ee08aa(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee08d0 FUN_142ee08d0 body=219 status=ok
// SIG undefined FUN_142ee08d0(void)

void FUN_142ee08d0(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_142ee09d2(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 142ee09ac FUN_142ee09ac body=38 status=ok
// SIG undefined FUN_142ee09ac(void)

undefined8 FUN_142ee09ac(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee09d2 FUN_142ee09d2 body=1294 status=ok
// SIG undefined FUN_142ee09d2(void)

void FUN_142ee09d2(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ee0f94 FUN_142ee0f94 body=96 status=ok
// SIG undefined FUN_142ee0f94(void)

undefined8 FUN_142ee0f94(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ee108a();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2b5f0,1);
  return uVar3;
}



// FUNCTION 142ee0ff4 FUN_142ee0ff4 body=138 status=ok
// SIG undefined FUN_142ee0ff4(void)

void * FUN_142ee0ff4(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ee108a FUN_142ee108a body=445 status=ok
// SIG undefined FUN_142ee108a(void)

void FUN_142ee108a(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b670) {
    FUN_144b3d300(&DAT_14ca2b670);
    if (DAT_14ca2b670 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ee1254;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x140;
      local_88 = 0x24;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2b5f0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee1248);
      _Init_thread_footer(&DAT_14ca2b670);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee1254 FUN_142ee1254 body=136 status=ok
// SIG undefined FUN_142ee1254(void)

code * FUN_142ee1254(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ThreadGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1380000002d;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee12dc;
}



// FUNCTION 142ee12dc FUN_142ee12dc body=136 status=ok
// SIG undefined FUN_142ee12dc(void)

code * FUN_142ee12dc(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1300000002c;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1364;
}



// FUNCTION 142ee1364 FUN_142ee1364 body=136 status=ok
// SIG undefined FUN_142ee1364(void)

code * FUN_142ee1364(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"BilateralGridRWTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture3D<float2>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1280000002b;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee13ec;
}



// FUNCTION 142ee13ec FUN_142ee13ec body=136 status=ok
// SIG undefined FUN_142ee13ec(void)

code * FUN_142ee13ec(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramRWTexture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1200000002a;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1474;
}



// FUNCTION 142ee1474 FUN_142ee1474 body=136 status=ok
// SIG undefined FUN_142ee1474(void)

code * FUN_142ee1474(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11800000029;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee14fc;
}



// FUNCTION 142ee14fc FUN_142ee14fc body=136 status=ok
// SIG undefined FUN_142ee14fc(void)

code * FUN_142ee14fc(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x11000000028;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1584;
}



// FUNCTION 142ee1584 FUN_142ee1584 body=142 status=ok
// SIG undefined FUN_142ee1584(void)

code * FUN_142ee1584(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x8000000027;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142ee1612;
}



// FUNCTION 142ee1612 FUN_142ee1612 body=142 status=ok
// SIG undefined FUN_142ee1612(void)

code * FUN_142ee1612(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x1000000026;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142ee16a0;
}



// FUNCTION 142ee16a0 FUN_142ee16a0 body=136 status=ok
// SIG undefined FUN_142ee16a0(void)

undefined1 * FUN_142ee16a0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x25;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142ee1728;
}



// FUNCTION 142ee172c FUN_142ee172c body=44 status=ok
// SIG undefined FUN_142ee172c(void)

void FUN_142ee172c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee1778 FUN_142ee1778 body=96 status=ok
// SIG undefined FUN_142ee1778(void)

undefined8 FUN_142ee1778(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ee186e();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2b7c0,1);
  return uVar3;
}



// FUNCTION 142ee17d8 FUN_142ee17d8 body=138 status=ok
// SIG undefined FUN_142ee17d8(void)

void * FUN_142ee17d8(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ee186e FUN_142ee186e body=445 status=ok
// SIG undefined FUN_142ee186e(void)

void FUN_142ee186e(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2b840) {
    FUN_144b3d300(&DAT_14ca2b840);
    if (DAT_14ca2b840 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ee1a38;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 400;
      local_88 = 0x7e;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2b7c0,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee1a2c);
      _Init_thread_footer(&DAT_14ca2b840);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee1a38 FUN_142ee1a38 body=136 status=ok
// SIG undefined FUN_142ee1a38(void)

code * FUN_142ee1a38(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"RenderTargets";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x9000000084;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x17;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1ac0;
}



// FUNCTION 142ee1ac0 FUN_142ee1ac0 body=136 status=ok
// SIG undefined FUN_142ee1ac0(void)

code * FUN_142ee1ac0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"LoopSize";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8800000083;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 3;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1b48;
}



// FUNCTION 142ee1b48 FUN_142ee1b48 body=136 status=ok
// SIG undefined FUN_142ee1b48(void)

code * FUN_142ee1b48(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x8000000082;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1bd0;
}



// FUNCTION 142ee1bd0 FUN_142ee1bd0 body=136 status=ok
// SIG undefined FUN_142ee1bd0(void)

code * FUN_142ee1bd0(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7800000081;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1c58;
}



// FUNCTION 142ee1c58 FUN_142ee1c58 body=136 status=ok
// SIG undefined FUN_142ee1c58(void)

code * FUN_142ee1c58(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x7000000080;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee1ce0;
}



// FUNCTION 142ee1ce0 FUN_142ee1ce0 body=136 status=ok
// SIG undefined FUN_142ee1ce0(void)

undefined1 * FUN_142ee1ce0(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x7f;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142ee1d68;
}



// FUNCTION 142ee1d6c FUN_142ee1d6c body=44 status=ok
// SIG undefined FUN_142ee1d6c(void)

void FUN_142ee1d6c(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee1dea FUN_142ee1dea body=96 status=ok
// SIG undefined FUN_142ee1dea(void)

undefined8 FUN_142ee1dea(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ee1ee0();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2b990,1);
  return uVar3;
}



// FUNCTION 142ee1e4a FUN_142ee1e4a body=138 status=ok
// SIG undefined FUN_142ee1e4a(void)

void * FUN_142ee1e4a(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ee1ee0 FUN_142ee1ee0 body=445 status=ok
// SIG undefined FUN_142ee1ee0(void)

void FUN_142ee1ee0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2ba10) {
    FUN_144b3d300(&DAT_14ca2ba10);
    if (DAT_14ca2ba10 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ee20aa;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x1b0;
      local_88 = 0xa2;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2b990,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee209e);
      _Init_thread_footer(&DAT_14ca2ba10);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee20aa FUN_142ee20aa body=136 status=ok
// SIG undefined FUN_142ee20aa(void)

code * FUN_142ee20aa(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"PreIntegratedGFSampler";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"SamplerState";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a8000000af;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 8;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2132;
}



// FUNCTION 142ee2132 FUN_142ee2132 body=136 status=ok
// SIG undefined FUN_142ee2132(void)

code * FUN_142ee2132(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x1a0000000ae;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 5;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee21ba;
}



// FUNCTION 142ee21ba FUN_142ee21ba body=136 status=ok
// SIG undefined FUN_142ee21ba(void)

code * FUN_142ee21ba(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"DebugOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x198000000ac;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2242;
}



// FUNCTION 142ee2242 FUN_142ee2242 body=136 status=ok
// SIG undefined FUN_142ee2242(void)

code * FUN_142ee2242(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramScatter32Output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x190000000ab;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee22ca;
}



// FUNCTION 142ee22ca FUN_142ee22ca body=136 status=ok
// SIG undefined FUN_142ee22ca(void)

code * FUN_142ee22ca(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramScatter64Output";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x188000000aa;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2352;
}



// FUNCTION 142ee2352 FUN_142ee2352 body=136 status=ok
// SIG undefined FUN_142ee2352(void)

code * FUN_142ee2352(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"ThreadGroupCount";
  *(undefined2 **)(lVar2 + 8 + lVar3) = &DAT_149dfb77a;
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x180000000a9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 2;
  *(undefined8 *)(lVar2 + 0x1c + lVar3) = 0x200000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee23da;
}



// FUNCTION 142ee23da FUN_142ee23da body=136 status=ok
// SIG undefined FUN_142ee23da(void)

code * FUN_142ee23da(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x178000000a8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2462;
}



// FUNCTION 142ee2462 FUN_142ee2462 body=136 status=ok
// SIG undefined FUN_142ee2462(void)

code * FUN_142ee2462(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x170000000a7;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xc;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee24ea;
}



// FUNCTION 142ee24ea FUN_142ee24ea body=142 status=ok
// SIG undefined FUN_142ee24ea(void)

code * FUN_142ee24ea(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xe0000000a6;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142ee2578;
}



// FUNCTION 142ee2578 FUN_142ee2578 body=142 status=ok
// SIG undefined FUN_142ee2578(void)

code * FUN_142ee2578(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x70000000a5;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142ee2606;
}



// FUNCTION 142ee2606 FUN_142ee2606 body=142 status=ok
// SIG undefined FUN_142ee2606(void)

code * FUN_142ee2606(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  uVar3 = FUN_14127a7f2();
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_2,iVar1);
  }
  lVar2 = *param_2;
  lVar4 = (longlong)iVar1 * 0x30;
  *(wchar_t **)(lVar2 + lVar4) = L"SceneTextures";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FSceneTextureParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0x10000000a4;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x15;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return FUN_142ee2694;
}



// FUNCTION 142ee2694 FUN_142ee2694 body=136 status=ok
// SIG undefined FUN_142ee2694(void)

undefined1 * FUN_142ee2694(undefined8 param_1,longlong *param_2)

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
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xa3;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x16;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142ee271c;
}



// FUNCTION 142ee2720 FUN_142ee2720 body=44 status=ok
// SIG undefined FUN_142ee2720(void)

void FUN_142ee2720(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee276c FUN_142ee276c body=96 status=ok
// SIG undefined FUN_142ee276c(void)

undefined8 FUN_142ee276c(longlong param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_14001cc68(0xe0,0x10);
  FUN_147432e9e(uVar3,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + 0x6c);
  FUN_142ee2862();
  FUN_147440c52(uVar3,uVar3,uVar1,uVar2,&DAT_14ca2bb60,1);
  return uVar3;
}



// FUNCTION 142ee27cc FUN_142ee27cc body=138 status=ok
// SIG undefined FUN_142ee27cc(void)

void * FUN_142ee27cc(void)

{
  void *_Dst;
  
  _Dst = (void *)FUN_14001cc68(0xe0);
  memset(_Dst,0,0xe0);
  *(undefined2 *)((longlong)_Dst + 0x54) = 0xffff;
  *(undefined8 *)((longlong)_Dst + 0x58) = 0;
  *(undefined8 *)((longlong)_Dst + 0x60) = 0;
  *(undefined8 *)((longlong)_Dst + 0x68) = 0;
  *(undefined8 *)((longlong)_Dst + 0x70) = 0;
  *(undefined8 *)((longlong)_Dst + 0x78) = 0;
  *(undefined8 *)((longlong)_Dst + 0x80) = 0;
  *(undefined8 *)((longlong)_Dst + 0x88) = 0;
  *(undefined8 *)((longlong)_Dst + 0x90) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb0) = 0;
  *(undefined8 *)((longlong)_Dst + 0xb8) = 0;
  *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
  *(undefined8 *)((longlong)_Dst + 200) = 0;
  *(uint *)((longlong)_Dst + 0xd0) =
       (uint)*(ushort *)(&DAT_14ca85070 + (longlong)DAT_14c760db4 * 2) << 4;
  *(undefined4 *)((longlong)_Dst + 0xd4) = 0xffffffff;
  return _Dst;
}



// FUNCTION 142ee2862 FUN_142ee2862 body=445 status=ok
// SIG undefined FUN_142ee2862(void)

void FUN_142ee2862(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  char *local_90;
  undefined4 local_88;
  undefined4 local_80;
  longlong *local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14ca2bbe0) {
    FUN_144b3d300(&DAT_14ca2bbe0);
    if (DAT_14ca2bbe0 == -1) {
      uVar11 = 0;
      local_58 = 0;
      uStack_50 = 0;
      pcVar8 = FUN_142ee2a2c;
      do {
        pcVar8 = (code *)(*pcVar8)(uVar11,&local_58);
        uVar11 = extraout_XMM0_Da;
      } while (pcVar8 != (code *)0x0);
      if (1 < (longlong)(int)(uint)uStack_50) {
        lVar9 = (longlong)(int)(uint)uStack_50 * 0x30;
        lVar10 = 0;
        do {
          lVar9 = lVar9 + -0x30;
          local_48 = *(undefined8 *)(local_58 + lVar10);
          uStack_40 = ((undefined8 *)(local_58 + lVar10))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          local_38 = *puVar1;
          uStack_30 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar10);
          local_28 = *puVar1;
          uStack_20 = puVar1[1];
          uVar3 = *(undefined8 *)(local_58 + lVar9);
          uVar4 = ((undefined8 *)(local_58 + lVar9))[1];
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          uVar7 = puVar1[1];
          puVar2 = (undefined8 *)(local_58 + 0x20 + lVar10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar10);
          *puVar1 = uVar5;
          puVar1[1] = uVar6;
          *(undefined8 *)(local_58 + lVar10) = uVar3;
          ((undefined8 *)(local_58 + lVar10))[1] = uVar4;
          puVar1 = (undefined8 *)(local_58 + 0x20 + lVar9);
          *puVar1 = local_28;
          puVar1[1] = uStack_20;
          puVar1 = (undefined8 *)(local_58 + 0x10 + lVar9);
          *puVar1 = local_38;
          puVar1[1] = uStack_30;
          *(undefined8 *)(local_58 + lVar9) = local_48;
          ((undefined8 *)(local_58 + lVar9))[1] = uStack_40;
          lVar10 = lVar10 + 0x30;
        } while ((ulonglong)((uint)uStack_50 >> 1) * 0x30 != lVar10);
      }
      local_60 = 0;
      local_70 = 0;
      local_90 = "Unknown";
      local_a0 = 0;
      uStack_98 = 0;
      local_a8 = L"FParameters";
      local_68 = 0;
      local_80 = 0x90;
      local_88 = 0xd6;
      local_78 = &local_58;
      FUN_140b49562(&DAT_14ca2bb60,0,1);
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      atexit((_func_5014 *)&LAB_142ee2a20);
      _Init_thread_footer(&DAT_14ca2bbe0);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee2a2c FUN_142ee2a2c body=136 status=ok
// SIG undefined FUN_142ee2a2c(void)

code * FUN_142ee2a2c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramOutput";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"RWTexture2D<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x88000000db;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0xe;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2ab4;
}



// FUNCTION 142ee2ab4 FUN_142ee2ab4 body=136 status=ok
// SIG undefined FUN_142ee2ab4(void)

code * FUN_142ee2ab4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramScatter32Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x80000000da;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2b3c;
}



// FUNCTION 142ee2b3c FUN_142ee2b3c body=136 status=ok
// SIG undefined FUN_142ee2b3c(void)

code * FUN_142ee2b3c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"HistogramScatter64Texture";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"Texture2D";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x78000000d9;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 9;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2bc4;
}



// FUNCTION 142ee2bc4 FUN_142ee2bc4 body=136 status=ok
// SIG undefined FUN_142ee2bc4(void)

code * FUN_142ee2bc4(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar3) = L"EyeAdaptationBuffer";
  *(wchar_t **)(lVar2 + 8 + lVar3) = L"StructuredBuffer<float4>";
  *(undefined8 *)(lVar2 + 0x10 + lVar3) = 0x70000000d8;
  *(undefined2 *)(lVar2 + 0x18 + lVar3) = 0x11;
  *(undefined1 **)(lVar2 + 0x1c + lVar3) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  return FUN_142ee2c4c;
}



// FUNCTION 142ee2c4c FUN_142ee2c4c body=136 status=ok
// SIG undefined FUN_142ee2c4c(void)

undefined1 * FUN_142ee2c4c(undefined8 param_1,longlong *param_2)

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
  *(wchar_t **)(lVar2 + lVar4) = L"Input";
  *(wchar_t **)(lVar2 + 8 + lVar4) = L"FScreenPassTextureViewportParameters";
  *(undefined8 *)(lVar2 + 0x10 + lVar4) = 0xd7;
  *(undefined2 *)(lVar2 + 0x18 + lVar4) = 0x14;
  *(undefined1 **)(lVar2 + 0x1c + lVar4) = &DAT_100000001;
  *(undefined4 *)(lVar2 + 0x24 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar4) = uVar3;
  return &LAB_142ee2cd4;
}



// FUNCTION 142ee2cd8 FUN_142ee2cd8 body=44 status=ok
// SIG undefined FUN_142ee2cd8(void)

void FUN_142ee2cd8(void *param_1,undefined4 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\0') {
    FUN_14743b140(param_1);
  }
  memset(param_1,CONCAT31((int3)((uint)param_2 >> 8),0xfe),0xe0);
  return;
}



// FUNCTION 142ee2d08 FUN_142ee2d08 body=29 status=ok
// SIG undefined FUN_142ee2d08(void)

undefined8 FUN_142ee2d08(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee2d26 FUN_142ee2d26 body=38 status=ok
// SIG undefined FUN_142ee2d26(void)

undefined8 FUN_142ee2d26(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee2d4c FUN_142ee2d4c body=1294 status=ok
// SIG undefined FUN_142ee2d4c(void)

void FUN_142ee2d4c(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ee325c FUN_142ee325c body=29 status=ok
// SIG undefined FUN_142ee325c(void)

undefined8 FUN_142ee325c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee327a FUN_142ee327a body=38 status=ok
// SIG undefined FUN_142ee327a(void)

undefined8 FUN_142ee327a(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 142ee32a0 FUN_142ee32a0 body=1294 status=ok
// SIG undefined FUN_142ee32a0(void)

void FUN_142ee32a0(longlong param_1,ulonglong *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  void *_Src;
  uint uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  void *pvVar13;
  ulonglong *puVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  ulonglong *local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar12 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 2;
    }
    memcpy(puVar12,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar12 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar12 = puVar18 + 5;
    }
    memcpy(puVar12,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1d8);
  uVar3 = *(undefined4 *)(param_1 + 0x1dc);
  uVar6 = *(undefined8 *)(param_1 + 0x1b8);
  uVar7 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar9 = 0;
  }
  else {
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar9 = *(ulonglong *)(*(longlong *)(lVar11 + 0x50) + lVar15 * 8);
    if (uVar9 == 0) {
      uVar9 = FUN_1400bafc2(lVar11,lVar15,1);
    }
  }
  uVar10 = FUN_140029432(param_2,uVar9,0);
  param_2[0x37] = uVar9;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar10;
  local_d8 = uVar7;
  FUN_14480864a(param_2,uVar9,*(undefined8 *)(param_1 + 0x1c8),uVar6);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar12 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar12) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar12 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar12;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar2;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar3;
  *(undefined4 *)(puVar18 + 3) = local_c8._0_4_;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar11 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar11 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar11 == 0) {
      lVar11 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  if (DAT_14ca8507b == '\x01') {
    puVar14 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar14,0);
    }
    lVar15 = *(longlong *)(param_1 + 0x1c8);
    uVar9 = *(ulonglong *)(lVar15 + 0x10);
    uVar19 = lVar15 + 0x10 + ((longlong)uVar9 >> 0x18);
    if ((uVar9 & 1) == 0) {
      uVar19 = uVar9;
    }
    iVar4 = *(int *)(lVar15 + 0x18);
    if ((longlong)iVar4 != 0) {
      lVar15 = 0;
      do {
        uVar8 = (uint)*(byte *)(uVar19 + 3 + lVar15);
        if ((uVar8 < 0x13) && ((0x44080U >> (uVar8 & 0x1f) & 1) != 0)) {
          bVar1 = *(byte *)(uVar19 + 2 + lVar15);
          iVar5 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar5 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar5 + 1U) {
            local_c8 = puVar14;
            FUN_1447477d8(puVar14,iVar5);
            puVar14 = local_c8;
          }
          uVar9 = *puVar14;
          *(ushort *)(uVar9 + (longlong)iVar5 * 4) = (ushort)bVar1;
          *(undefined1 *)(uVar9 + 2 + (longlong)iVar5 * 4) = 1;
        }
        lVar15 = lVar15 + 4;
      } while ((longlong)iVar4 * 4 != lVar15);
    }
    uVar9 = param_2[0x13];
    lVar15 = (longlong)(int)uVar9;
    if (0 < lVar15) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar14;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar12 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar12) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar12 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar12;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar13 = (void *)((longlong)_Dst + lVar15 * 4);
        _Size = lVar15 * 4;
        if ((void *)param_2[1] < pvVar13) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar13 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar13;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = lVar11;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar9;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar14,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 142ee37af FUN_142ee37af body=464 status=ok
// SIG undefined FUN_142ee37af(void)

void FUN_142ee37af(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulonglong *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined8 unaff_RBP;
  undefined8 *puVar6;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  longlong lStack_50;
  undefined *local_48;
  ulonglong local_40;
  undefined6 uVar5;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  lStack_50 = 0;
  FUN_1448f70da(*param_3,&DAT_14ca2b5f0,param_4);
  local_68 = *(undefined4 *)param_3;
  uStack_64 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_60 = *(undefined4 *)(param_3 + 1);
  uStack_5c = *(undefined4 *)((longlong)param_3 + 0xc);
  local_78 = *param_5;
  local_70 = *(undefined4 *)(param_5 + 1);
  FUN_140069376(param_1);
  uVar5 = (undefined6)((ulonglong)unaff_RBP >> 0x10);
  uVar4 = (undefined4)CONCAT62(uVar5,2);
  if ((((0 < DAT_14c760ddc) && (DAT_14ca84e23 == '\x01')) && (DAT_14c760ddc == 2)) &&
     ((DAT_14ca84e6a != '\0' && ((DAT_14ca84e99 & 1) == 0)))) {
    uVar4 = (undefined4)CONCAT62(uVar5,4);
  }
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar6 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar3 = puVar6 + 0x3d;
  if (*(undefined8 **)(param_1 + 0x78) < puVar3) {
    FUN_140023dd8(puVar1,0x1f0);
    puVar6 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar6 + 0x3d;
  }
  *puVar1 = (ulonglong)puVar3;
  lStack_50 = DAT_14ca2b638;
  if (DAT_14ca2b638 != 0) {
    LOCK();
    *(int *)(DAT_14ca2b638 + 8) = *(int *)(DAT_14ca2b638 + 8) + 1;
    UNLOCK();
  }
  local_48 = &DAT_14ca2b5f0;
  local_88 = 2;
  local_58 = param_4;
  FUN_140068f1a(puVar6,param_2,&local_58,uVar4);
  *puVar6 = &PTR_FUN_14a2ba5a0;
  puVar6[0x37] = &DAT_14ca2b5f0;
  puVar6[0x38] = param_4;
  *(undefined4 *)(puVar6 + 0x39) = local_68;
  *(undefined4 *)((longlong)puVar6 + 0x1cc) = uStack_64;
  *(undefined4 *)(puVar6 + 0x3a) = uStack_60;
  *(undefined4 *)((longlong)puVar6 + 0x1d4) = uStack_5c;
  *(undefined4 *)(puVar6 + 0x3c) = local_70;
  puVar6[0x3b] = local_78;
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar6;
  *(int *)((longlong)puVar6 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar6);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 142ee3980 FUN_142ee3980 body=38 status=ok
// SIG undefined FUN_142ee3980(void)

undefined8 FUN_142ee3980(undefined8 param_1,int param_2)

{
  FUN_140022960();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}


