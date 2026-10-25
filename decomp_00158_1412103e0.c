// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1412103e0 FUN_1412103e0 body=826 status=ok
// SIG undefined FUN_1412103e0(void)

undefined8 * FUN_1412103e0(longlong param_1,undefined8 *param_2)

{
  undefined8 *_Dst;
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined ***pppuVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined ***local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined ***local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar5 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    puVar1 = (undefined4 *)(lVar5 + 0xc7c);
    uVar4 = *puVar1;
    pbVar2 = (byte *)(lVar5 + 0xc80);
    bVar3 = *pbVar2;
    if ((bVar3 & 1) != 0) {
      *pbVar2 = 0;
      *puVar1 = 0xffffffff;
    }
    puVar6 = (undefined8 *)FUN_14001cc68(0x170);
    puVar6[1] = &DAT_100000001;
    *puVar6 = &PTR_FUN_14b41bb50;
    _Dst = puVar6 + 2;
    memset(_Dst,0,0x160);
    FUN_141210884(_Dst);
    puVar6[2] = &PTR_FUN_14b00bf00;
    *(undefined1 *)(puVar6 + 0x2d) = 0;
    *param_2 = _Dst;
    param_2[1] = puVar6;
    if ((bVar3 & 1) != 0) {
      *puVar1 = uVar4;
      *pbVar2 = 1;
    }
    local_c8 = puVar6[0xc];
    uStack_80 = puVar6[0xd];
    local_b8 = (undefined ***)puVar6[0xe];
    uStack_70 = puVar6[0xf];
    local_68 = (undefined **)puVar6[0x10];
    uStack_60 = puVar6[0x11];
    local_58 = puVar6[0x12];
    uStack_50 = puVar6[0x13];
    local_78 = local_b8;
    uVar7 = uStack_70;
    local_88 = local_c8;
    uVar9 = uStack_80;
    puVar6[0x12] = local_98;
    puVar6[0x13] = uStack_90;
    puVar6[0x10] = &PTR_LAB_14b97dfc0;
    puVar6[0x11] = FUN_1441aea2c;
    puVar6[0xe] = 0;
    puVar6[0xf] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[0xc] = FUN_148d8a794;
    puVar6[0xd] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    local_98 = local_58;
    uStack_90 = uStack_50;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    uStack_80 = uVar9;
    uStack_70 = uVar7;
    if (local_c8 != 0) {
      pppuVar11 = local_b8;
      if (local_b8 == (undefined ***)0x0) {
        pppuVar11 = &local_a8;
      }
      (*(code *)(*pppuVar11)[2])();
    }
    uVar9 = *(undefined8 *)(param_1 + 0xd0);
    uVar7 = FUN_14477b664(*(undefined8 *)(param_1 + 0xd8));
    uVar8 = FUN_14477b664(uVar7);
    uVar7 = *(undefined8 *)(param_1 + 0xe0);
    local_b8 = (undefined ***)0x0;
    local_a8 = &PTR_FUN_14b97e000;
    uStack_a0 = uVar9;
    uVar9 = FUN_14477b664(uVar8);
    uVar10 = FUN_14477b664(uVar9);
    local_c8 = puVar6[0x14];
    uStack_80 = puVar6[0x15];
    local_78 = (undefined ***)puVar6[0x16];
    uStack_70 = puVar6[0x17];
    local_68 = (undefined **)puVar6[0x18];
    uStack_60 = puVar6[0x19];
    local_58 = puVar6[0x1a];
    uStack_50 = puVar6[0x1b];
    uVar8 = uStack_70;
    local_88 = local_c8;
    uVar9 = uStack_80;
    puVar6[0x1a] = uVar10;
    puVar6[0x1b] = uVar7;
    puVar6[0x18] = local_a8;
    puVar6[0x19] = uStack_a0;
    puVar6[0x16] = local_b8;
    puVar6[0x17] = CONCAT44(uStack_ac,uStack_b0);
    puVar6[0x14] = FUN_1441aea4c;
    puVar6[0x15] = CONCAT44(uStack_bc,uStack_c0);
    uStack_80._4_4_ = (undefined4)((ulonglong)uStack_80 >> 0x20);
    uStack_70._4_4_ = (undefined4)((ulonglong)uStack_70 >> 0x20);
    uStack_c0 = (undefined4)uStack_80;
    uStack_bc = uStack_80._4_4_;
    local_98 = local_58;
    uStack_90 = uStack_50;
    local_a8 = local_68;
    uStack_a0 = uStack_60;
    uStack_b0 = (undefined4)uStack_70;
    uStack_ac = uStack_70._4_4_;
    local_b8 = local_78;
    uStack_80 = uVar9;
    uStack_70 = uVar8;
    if (local_c8 != 0) {
      pppuVar11 = &local_a8;
      if (local_78 != (undefined ***)0x0) {
        pppuVar11 = local_78;
      }
      (*(code *)(*pppuVar11)[2])(pppuVar11);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_e8);
  }
  FUN_141210720(param_1,param_2);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210720 FUN_141210720 body=356 status=ok
// SIG undefined FUN_141210720(void)

undefined8 * FUN_141210720(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  puVar1 = (undefined4 *)(lVar6 + 0xc7c);
  uVar4 = *puVar1;
  pbVar2 = (byte *)(lVar6 + 0xc80);
  bVar3 = *pbVar2;
  if ((bVar3 & 1) != 0) {
    *pbVar2 = 0;
    *puVar1 = 0xffffffff;
  }
  puVar7 = (undefined8 *)FUN_14001cc68(0x170);
  puVar7[1] = &DAT_100000001;
  *puVar7 = &PTR_FUN_14b41bb50;
  memset(puVar7 + 2,0,0x160);
  puVar7[8] = 0;
  puVar7[9] = 0;
  *(undefined4 *)(puVar7 + 10) = 0;
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0;
  puVar7[0x1f] = 0;
  *(undefined8 *)((longlong)puVar7 + 0xfd) = 0;
  *(undefined8 *)((longlong)puVar7 + 0x105) = 0;
  *(undefined2 *)(puVar7 + 0x26) = 4;
  *(undefined4 *)(puVar7 + 0x23) = 1;
  *(undefined1 *)(puVar7 + 0x27) = 2;
  *(byte *)(puVar7 + 0x28) = (byte)~DAT_14c9a8754 >> 4 & 2;
  puVar7[0x2b] = 0;
  puVar7[0x2c] = 0;
  puVar7[0x29] = 0;
  puVar7[0x2a] = 0;
  puVar7[2] = &PTR_FUN_14b00bf00;
  *param_2 = puVar7 + 2;
  param_2[1] = puVar7;
  if ((bVar3 & 1) != 0) {
    *puVar1 = uVar4;
    *pbVar2 = 1;
  }
  *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(param_1 + 0x90);
  iVar5 = *(int *)(param_1 + 0xa0);
  if ((*(longlong *)(param_1 + 0x98) != 0) || (iVar5 != 0)) {
    puVar7[6] = *(longlong *)(param_1 + 0x98);
    *(int *)(puVar7 + 7) = iVar5;
    puVar7[8] = 0;
  }
  *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(param_1 + 0xb8);
  puVar7[9] = *(undefined8 *)(param_1 + 0xb0);
  return param_2;
}



// FUNCTION 141210884 FUN_141210884 body=151 status=ok
// SIG undefined FUN_141210884(void)

void FUN_141210884(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14afff0c0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x20] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined8 *)((longlong)param_1 + 0xed) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf5) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined4 *)(param_1 + 0x21) = 1;
  *(undefined1 *)(param_1 + 0x25) = 2;
  *(byte *)(param_1 + 0x26) = (byte)~DAT_14c9a8754 >> 4 & 2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return;
}



// FUNCTION 14121091c FUN_14121091c body=84 status=ok
// SIG undefined FUN_14121091c(void)

void FUN_14121091c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*param_3 != 0) {
    local_18 = param_3[2];
    local_28 = (undefined4)*param_3;
    uStack_24 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_20 = (undefined4)param_3[1];
    uStack_1c = *(undefined4 *)((longlong)param_3 + 0xc);
    FUN_141210972(&local_28,param_1 + 8);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210972 FUN_141210972 body=336 status=ok
// SIG undefined FUN_141210972(void)

void FUN_141210972(longlong *param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  FUN_140c37182(param_2,*param_1,(int)param_1[1]);
  FUN_140c3721a(param_2 + 0x18,*param_1,(int)param_1[1]);
  lVar3 = *param_1;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_2 + 0x30)) goto LAB_1412109ca;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_1412109ca:
  lVar7 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar3 = *plVar8;
  lVar7 = (longlong)(int)lVar7 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined8 *)(lVar3 + 0x10 + lVar7) = *(undefined8 *)(param_2 + 0x44);
  uVar4 = *(undefined4 *)(param_2 + 0x38);
  uVar5 = *(undefined4 *)(param_2 + 0x3c);
  uVar6 = *(undefined4 *)(param_2 + 0x40);
  puVar1 = (undefined4 *)(lVar3 + lVar7);
  *puVar1 = *(undefined4 *)(param_2 + 0x34);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if (*(char *)(param_2 + 0x4c) == '\x01') {
    *(undefined1 *)(param_2 + 0x4c) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  lVar3 = *param_1;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_2 + 0x50)) goto LAB_141210a4f;
      plVar8 = plVar8 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_141210a4f:
  lVar7 = param_1[1];
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  lVar3 = *plVar8;
  lVar7 = (longlong)(int)lVar7 * (ulonglong)*(byte *)((longlong)plVar8 + 0x1c);
  *(undefined8 *)(lVar3 + 0x10 + lVar7) = *(undefined8 *)(param_2 + 100);
  uVar4 = *(undefined4 *)(param_2 + 0x58);
  uVar5 = *(undefined4 *)(param_2 + 0x5c);
  uVar6 = *(undefined4 *)(param_2 + 0x60);
  puVar1 = (undefined4 *)(lVar3 + lVar7);
  *puVar1 = *(undefined4 *)(param_2 + 0x54);
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  if (*(char *)(param_2 + 0x6c) == '\x01') {
    *(undefined1 *)(param_2 + 0x6c) = 0;
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000141210aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 141210ac2 FUN_141210ac2 body=221 status=ok
// SIG undefined FUN_141210ac2(void)

longlong FUN_141210ac2(void)

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
  if (DAT_14caa1ad8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147451fa1;
    local_40 = &LAB_140f0bc5f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/Landscape",L"LandscapeLayerInfoObject",&DAT_14caa1ad8,&DAT_147451fa0);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14caa1ad8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210ba0 FUN_141210ba0 body=221 status=ok
// SIG undefined FUN_141210ba0(void)

longlong FUN_141210ba0(void)

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
  if (DAT_14cac8140 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1478a584d;
    local_40 = FUN_1463962a0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/Engine",L"SoundEffectSourcePresetChain",&DAT_14cac8140,&DAT_1478a584c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac8140;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210c7e FUN_141210c7e body=221 status=ok
// SIG undefined FUN_141210c7e(void)

longlong FUN_141210c7e(void)

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
  if (DAT_14cada498 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a996d5;
    local_40 = &LAB_145da1df2;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0xa0;
    FUN_14081cfa3(L"/Script/Engine",L"ForceFeedbackEffect",&DAT_14cada498,&DAT_147a996d4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cada498;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210d5c FUN_141210d5c body=221 status=ok
// SIG undefined FUN_141210d5c(void)

longlong FUN_141210d5c(void)

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
  if (DAT_14cb36288 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148063691;
    local_40 = FUN_146466207;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Niagara",L"NiagaraDataChannelAsset",&DAT_14cb36288,&DAT_148063690);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb36288;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210e3a FUN_141210e3a body=221 status=ok
// SIG undefined FUN_141210e3a(void)

longlong FUN_141210e3a(void)

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
  if (DAT_14cb4b728 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484446b5;
    local_40 = &LAB_14648ecf3;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveGizmo",&DAT_14cb4b728,
                  &DAT_1484446b4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b728;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210f18 FUN_141210f18 body=221 status=ok
// SIG undefined FUN_141210f18(void)

longlong FUN_141210f18(void)

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
  if (DAT_14cb4abb8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148411b1d;
    local_40 = FUN_14648b69e;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"GizmoComponentAxisSource",&DAT_14cb4abb8,
                  &DAT_148411b1c);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4abb8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141210ff6 FUN_141210ff6 body=221 status=ok
// SIG undefined FUN_141210ff6(void)

longlong FUN_141210ff6(void)

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
  if (DAT_14cbf2530 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148f27307;
    local_40 = FUN_146660afe;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/SequencerScripting",L"MovieSceneScriptingChannel",&DAT_14cbf2530,
                  &DAT_148f27306);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf2530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412110d4 FUN_1412110d4 body=314 status=ok
// SIG undefined FUN_1412110d4(void)

void FUN_1412110d4(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b6c3ef0;
  FUN_140bcae4d(param_1[0x1c],*(undefined4 *)(param_1 + 0x1d));
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x1a],*(undefined4 *)(param_1 + 0x1b));
  if (param_1[0x1a] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140bcae4d(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_140bcae4d(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14121120e FUN_14121120e body=277 status=ok
// SIG undefined FUN_14121120e(void)

undefined8 FUN_14121120e(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14121131d;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14121131d;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14121131d:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1412112cb;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28));
      uVar6 = 1;
      goto LAB_1412112cb;
    }
  }
  uVar6 = 0;
LAB_1412112cb:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141211324 FUN_141211324 body=836 status=ok
// SIG undefined FUN_141211324(void)

void FUN_141211324(longlong param_1)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  bool bVar8;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined2 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  undefined1 *local_68;
  code *local_60;
  undefined8 local_50;
  code *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar3 = *(longlong *)(param_1 + 0x20);
  if (lVar3 == 0) {
LAB_141211381:
    if (*(longlong *)(param_1 + 200) == 0) goto LAB_1412114e7;
LAB_141211396:
    lVar3 = 0;
LAB_141211398:
    *(undefined8 *)(param_1 + 200) = 0;
  }
  else {
    if (DAT_14cba8288 == 0) {
      local_70 = &local_48;
      local_48 = FUN_141864c34;
      local_60 = FUN_14081d0ea;
      local_68 = &LAB_1464cee30;
      local_78 = &LAB_148bfac22;
      local_80 = &LAB_140f21842;
      local_88 = &DAT_149e063b2;
      local_90 = 0;
      local_98 = 0x10000004;
      local_a0 = 0x10;
      local_a8 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(DAT_14cba8288 + 0x38)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) != DAT_14cba8288 + 0x30)) goto LAB_141211381;
    lVar3 = FUN_140fe12e2(param_1,lVar3);
    if (*(longlong *)(param_1 + 200) != 0) {
      if (lVar3 == 0) goto LAB_141211396;
      FUN_14480f766(lVar3 + 0x750);
      goto LAB_141211398;
    }
  }
  if (lVar3 == 0) goto LAB_1412114e7;
  local_48 = (code *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  pcVar2 = local_48;
  local_40 = 3;
  *(undefined ***)local_48 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_48 + 0x10) = lVar4;
  *(undefined ***)local_48 = &PTR_FUN_14b9b5bc0;
  *(undefined8 *)(local_48 + 0x18) = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar5 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar8 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar8) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar7 + 0x10);
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(lVar7 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar8) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)(pcVar2 + 0x1c) = iVar5;
  *(undefined1 **)(pcVar2 + 0x20) = &LAB_14428788a;
  *(undefined4 *)(pcVar2 + 0x28) = 0;
  FUN_1448b6402(lVar3 + 0x750,&local_50,&local_48);
  if (local_40 == 0) {
LAB_1412114ce:
    if (local_48 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (code *)0x0) {
    (*(code *)**(undefined8 **)local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1412114ce;
  }
  *(undefined8 *)(param_1 + 200) = local_50;
LAB_1412114e7:
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14121166a FUN_14121166a body=307 status=ok
// SIG undefined FUN_14121166a(void)

void FUN_14121166a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
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
  cVar2 = FUN_1466454cc(param_1);
  if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412117b0 FUN_1412117b0 body=162 status=ok
// SIG undefined FUN_1412117b0(void)

void FUN_1412117b0(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  
  FUN_141211852(param_1 + 0x1c0);
  FUN_141211852(param_1 + 0x188);
  lVar4 = 0x150;
  do {
    *(undefined ***)(param_1 + lVar4) = &PTR_FUN_14aa581e0;
    lVar3 = *(longlong *)(param_1 + 0x28 + lVar4);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    lVar3 = *(longlong *)(param_1 + 0x20 + lVar4);
    if (lVar3 != 0) {
      LOCK();
      puVar1 = (uint *)(lVar3 + 8);
      uVar2 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar2 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    if (*(longlong *)(param_1 + 8 + lVar4) != 0) {
      FUN_1400020a8();
    }
    lVar4 = lVar4 + -0x38;
  } while (lVar4 != 0);
  FUN_141211852(param_1);
  return;
}



// FUNCTION 141211852 FUN_141211852 body=115 status=ok
// SIG undefined FUN_141211852(void)

void FUN_141211852(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14aa581e0;
  if (param_1[5] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[5] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[4] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[4] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1412118c6 FUN_1412118c6 body=68 status=ok
// SIG undefined FUN_1412118c6(void)

void FUN_1412118c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14ada62e0;
  FUN_14032cada(param_1,0);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_14646f270(param_1 + 5);
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14121190a thunk_FUN_14006e5d0 body=5 status=ok
// SIG undefined thunk_FUN_14006e5d0(void)

void thunk_FUN_14006e5d0(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a85ebb0;
  param_1[5] = &PTR_FUN_14a85f5b0;
  param_1[6] = &PTR_LAB_14a85f5f0;
  param_1[0x55] = &PTR_FUN_14a85f640;
  param_1[0x56] = &PTR_FUN_14a85f6c0;
  param_1[0x57] = &PTR_FUN_14a85f6d0;
  FUN_144760e21(param_1[0xc1],*(undefined4 *)(param_1 + 0xc2));
  if (param_1[0xc1] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xbe],*(undefined4 *)(param_1 + 0xbf));
  if (param_1[0xbe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xbc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xba] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0xb6];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_144760d56(param_1 + 0x82);
  if (param_1[0x80] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x7c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x72] != 0) {
    FUN_1400020a8();
  }
  if (*(char *)(param_1 + 0x6f) == '\x01') {
    *(undefined1 *)(param_1 + 0x6f) = 0;
  }
  if (param_1[0x6a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x68] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e));
  FUN_14006e79a(param_1);
  return;
}



// FUNCTION 141211910 FUN_141211910 body=174 status=ok
// SIG undefined FUN_141211910(void)

void FUN_141211910(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b4214d0;
  FUN_1458272d4();
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
    if (puVar4 == (undefined8 *)0x0) goto LAB_141211993;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_141211993:
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001412119ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1412119c6 FUN_1412119c6 body=640 status=ok
// SIG undefined FUN_1412119c6(void)

undefined8 * FUN_1412119c6(undefined8 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_1410279c6();
  *param_1 = &PTR_FUN_14b53da70;
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
  param_1[0x13] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x14) = 0;
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
  param_1[0x15] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0x16) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  lVar4 = FUN_140932b6e();
  plVar1 = *(longlong **)(lVar4 + 0x50);
  plVar2 = (longlong *)*plVar1;
  plVar3 = (longlong *)param_1[0x13];
  if (plVar3 != plVar2) {
    param_1[0x13] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x14) = (int)plVar1[1];
  lVar4 = FUN_140932b6e();
  plVar1 = *(longlong **)(lVar4 + 0x58);
  plVar2 = (longlong *)*plVar1;
  plVar3 = (longlong *)param_1[0x15];
  if (plVar3 != plVar2) {
    param_1[0x15] = plVar2;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(int *)(param_1 + 0x16) = (int)plVar1[1];
  return param_1;
}



// FUNCTION 141211c46 FUN_141211c46 body=368 status=ok
// SIG undefined FUN_141211c46(void)

undefined8 * FUN_141211c46(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141211dc4 FUN_141211dc4 body=375 status=ok
// SIG undefined FUN_141211dc4(void)

undefined8 * FUN_141211dc4(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141211f5e FUN_141211f5e body=158 status=ok
// SIG undefined FUN_141211f5e(void)

void FUN_141211f5e(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((*(byte *)(param_1 + 0xd8) & 1) != 0) {
    FUN_141131c98(param_1);
  }
  if ((*(longlong *)(param_1 + 0x30) != 0) &&
     (*(char *)(*(longlong *)(param_1 + 0x30) + 0x178) == '\x03')) {
    uVar1 = FUN_141211ffe(param_1 + 0xb0);
    FUN_141212034(uVar1,local_18,param_1,thunk_FUN_141131d4c);
    uVar1 = FUN_141211ffe(param_1 + 0xbc);
    FUN_141212034(uVar1,local_18,param_1,thunk_FUN_141131d4c);
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141211ffe FUN_141211ffe body=54 status=ok
// SIG undefined FUN_141211ffe(void)

longlong FUN_141211ffe(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    FUN_1402a453c();
    iVar1 = *param_1;
  }
  return (longlong)iVar1 * 0x88 + DAT_14c9a3d60 + -0x18;
}



// FUNCTION 141212034 FUN_141212034 body=765 status=ok
// SIG undefined FUN_141212034(void)

undefined8 * FUN_141212034(longlong *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar2 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_14a1c8700;
  LOCK();
  UNLOCK();
  lVar6 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar6 == 0) {
    LOCK();
    UNLOCK();
    lVar6 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_58[2] = lVar6;
  *local_58 = (longlong)&PTR_FUN_14b9e11e0;
  local_58[3] = 0;
  iVar8 = 0;
  if (param_3 != 0) {
    uVar1 = *(uint *)(param_3 + 0xc);
    *(uint *)(local_58 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    iVar8 = *(int *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar4 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar4);
      }
      LOCK();
      iVar8 = *(int *)(lVar9 + 0x10);
      bVar10 = iVar8 == 0;
      if (bVar10) {
        *(int *)(lVar9 + 0x10) = iVar4;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar10) {
        iVar8 = iVar4;
      }
    }
  }
  *(int *)((longlong)plVar2 + 0x1c) = iVar8;
  plVar2[4] = param_4;
  *param_2 = 0;
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar3 = (**(code **)(*local_58 + 0x30))(), cVar3 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_1412121e0;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_1412121ca;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar8 = (int)param_1[1];
      iVar4 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar4;
      if (iVar4 <= iVar8) {
        iVar4 = iVar8;
        if (0 < iVar8) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar3 = (**(code **)(*plVar2 + 0x28))(), cVar3 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar4 = (int)param_1[1];
          } while (iVar7 < iVar4);
        }
        iVar7 = 2;
        if (2 < iVar4 * 2) {
          iVar7 = iVar4 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar8) && (*(int *)((longlong)param_1 + 0xc) != iVar4)) {
          FUN_14045812c();
        }
      }
    }
    uVar5 = 0;
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,&local_48);
      uVar5 = local_48;
    }
    *param_2 = uVar5;
    iVar8 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar8 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar8 + 1U) {
      FUN_1447a71f6(param_1,iVar8);
    }
    lVar9 = *param_1;
    lVar6 = (longlong)iVar8 * 0x10;
    *(undefined8 *)(lVar9 + lVar6) = 0;
    *(undefined4 *)(lVar9 + 8 + lVar6) = 0;
    *(longlong **)(lVar9 + lVar6) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar9 + 8 + lVar6) = local_50;
LAB_1412121ca:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_1412121e0:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141212332 FUN_141212332 body=220 status=ok
// SIG undefined FUN_141212332(void)

void FUN_141212332(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = *(longlong **)(param_1 + 0xe10);
  if (plVar5 != (longlong *)0x0) {
    lVar2 = (**(code **)(*plVar5 + 8))();
    lVar3 = FUN_14121240e();
    if ((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38))) {
      plVar6 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30) {
        plVar6 = plVar5;
      }
      goto LAB_141212385;
    }
  }
  plVar6 = (longlong *)0x0;
LAB_141212385:
  *(longlong **)(param_1 + 0x2c70) = plVar6;
  if ((*(char *)(param_1 + 0x178) == '\x03') &&
     (plVar5 = *(longlong **)(param_1 + 0x1b0), plVar5 != (longlong *)0x0)) {
    uVar4 = FUN_14018b740();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_14018b740();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        uVar1 = (**(code **)(*plVar6 + 0x28))(plVar6);
        (**(code **)(*(longlong *)(param_1 + 0x3f0) + 0x20))(param_1 + 0x3f0,uVar1);
      }
    }
  }
  FUN_141212448(param_1);
  return;
}



// FUNCTION 14121240e FUN_14121240e body=57 status=ok
// SIG undefined FUN_14121240e(void)

void FUN_14121240e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba9da8 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba9da8 = FUN_140002ddd(FUN_1465d5fae,uVar1,L"OakDroneDef");
  }
  return;
}



// FUNCTION 141212448 FUN_141212448 body=3952 status=ok
// SIG undefined FUN_141212448(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_141212448(code ******param_1)

{
  int *piVar1;
  longlong *plVar2;
  code ****ppppcVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  code *****pppppcVar15;
  code ******ppppppcVar16;
  longlong *plVar17;
  code *******pppppppcVar18;
  code *****pppppcVar19;
  bool bVar20;
  undefined4 uVar21;
  float fVar22;
  undefined1 auStack_328 [32];
  undefined2 *local_308;
  undefined2 local_2f8;
  undefined2 uStack_2f6;
  undefined4 uStack_2f4;
  code *******local_2f0;
  code *****local_2e8;
  ushort local_2d8;
  byte local_2d0;
  ulonglong local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  ulonglong local_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  byte local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_1c0;
  undefined4 local_198;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_328;
  pppppcVar19 = param_1[0x1c2];
  if (pppppcVar19 != (code *****)0x0) {
    lVar10 = (*(code *)(*pppppcVar19)[1])();
    lVar11 = FUN_1412133c2();
    if ((lVar11 != 0) && (*(int *)(lVar11 + 0x38) <= *(int *)(lVar10 + 0x38))) {
      pppppcVar15 = (code *****)0x0;
      if (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30) {
        pppppcVar15 = pppppcVar19;
      }
      goto LAB_1412124be;
    }
  }
  pppppcVar15 = (code *****)0x0;
LAB_1412124be:
  param_1[0x309] = pppppcVar15;
  FUN_14029a11a(param_1);
  FUN_1409b534c(param_1 + 0x3e2,param_1 + 0x2aa);
  pppppcVar19 = param_1[0x309];
  if (pppppcVar19 != (code *****)0x0) {
    if (*(char *)(param_1 + 0x2f) == '\x03') {
      *(undefined1 *)(param_1 + 0x2c8) = *(undefined1 *)((longlong)pppppcVar19 + 0x6f1);
      *(undefined1 *)((longlong)param_1 + 0x1642) = *(undefined1 *)((longlong)pppppcVar19 + 0x6f2);
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0xed,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)((longlong)param_1 + 0x164c));
      *(undefined4 *)((longlong)param_1 + 0x164c) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0xf4,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)(param_1 + 0x2ca));
      *(undefined4 *)(param_1 + 0x2ca) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0xe6,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)(param_1 + 0x2c9));
      *(undefined4 *)(param_1 + 0x2c9) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0xdf,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)((longlong)param_1 + 0x1644));
      *(undefined4 *)((longlong)param_1 + 0x1644) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0x123,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)(param_1 + 0x2d9));
      *(undefined4 *)(param_1 + 0x2d9) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0x12a,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)((longlong)param_1 + 0x16cc));
      *(undefined4 *)((longlong)param_1 + 0x16cc) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      *(undefined1 *)(param_1 + 0x2da) = *(undefined1 *)(pppppcVar19 + 0x131);
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0x102,&local_2f0,&local_2c8);
      FUN_141213494(&local_2f0,&local_2f8,(longlong)param_1 + 0x165c);
      *(ulonglong *)((longlong)param_1 + 0x165c) =
           CONCAT44(uStack_2f4,CONCAT22(uStack_2f6,local_2f8));
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0x109,&local_2f0,&local_2c8);
      FUN_141213494(&local_2f0,&local_2f8,(longlong)param_1 + 0x1664);
      *(ulonglong *)((longlong)param_1 + 0x1664) =
           CONCAT44(uStack_2f4,CONCAT22(uStack_2f6,local_2f8));
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      *(undefined1 *)((longlong)param_1 + 0x166c) = *(undefined1 *)(pppppcVar19 + 0x110);
      *(undefined1 *)(param_1 + 0x2d8) = *(undefined1 *)(pppppcVar19 + 0x11b);
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0x11c,&local_2f0,&local_2c8);
      uVar21 = FUN_144a7b41a(&local_2f0,*(undefined4 *)((longlong)param_1 + 0x16c4));
      *(undefined4 *)((longlong)param_1 + 0x16c4) = uVar21;
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      pppppcVar19 = param_1[0x309];
      local_2c8 = local_2c8 & 0xffffffffffffff00;
      local_2a0 = local_2a0 & 0xffffffff00000000;
      FUN_1456bb102(&local_2c8,param_1);
      FUN_1447c3578(pppppcVar19 + 0xfb,&local_2f0,&local_2c8);
      FUN_141213494(&local_2f0,&local_2f8,(longlong)param_1 + 0x1654);
      *(ulonglong *)((longlong)param_1 + 0x1654) =
           CONCAT44(uStack_2f4,CONCAT22(uStack_2f6,local_2f8));
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
      if (pcVar4 != (code *)0x0) {
        pppppppcVar18 = (code *******)&local_2f0;
        if (0x18 < local_2d8) {
          pppppppcVar18 = local_2f0;
        }
        (*pcVar4)(pppppppcVar18);
      }
      if (0x18 < local_2d8) {
        FUN_1400020a8(local_2f0);
      }
      FUN_144a5ac3a(&local_2c8);
      FUN_145841832(param_1 + 0x2ed,param_1,param_1[0x309]);
      pppppcVar19 = param_1[0x309];
    }
    param_1[0x2ce] = (code *****)pppppcVar19[0x111];
    uVar21 = *(undefined4 *)((longlong)pppppcVar19 + 0x894);
    uVar5 = *(undefined4 *)(pppppcVar19 + 0x113);
    uVar6 = *(undefined4 *)((longlong)pppppcVar19 + 0x89c);
    *(undefined4 *)(param_1 + 0x2cf) = *(undefined4 *)(pppppcVar19 + 0x112);
    *(undefined4 *)((longlong)param_1 + 0x167c) = uVar21;
    *(undefined4 *)(param_1 + 0x2d0) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x1684) = uVar6;
    ppppppcVar16 = param_1 + 0x2d1;
    if (ppppppcVar16 != (code ******)(pppppcVar19 + 0x114)) {
      iVar9 = *(int *)(pppppcVar19 + 0x115);
      ppppcVar3 = pppppcVar19[0x114];
      *(int *)(param_1 + 0x2d2) = iVar9;
      if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x1694) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1694) = 0;
      }
      else {
        FUN_1446dd670(ppppppcVar16,iVar9);
        if (iVar9 != 0) {
          memcpy(*ppppppcVar16,ppppcVar3,(longlong)iVar9 * 2);
        }
      }
    }
    pppppcVar19 = param_1[0x309];
    param_1[0x2d3] = (code *****)pppppcVar19[0x116];
    uVar21 = *(undefined4 *)((longlong)pppppcVar19 + 0x8bc);
    uVar5 = *(undefined4 *)(pppppcVar19 + 0x118);
    uVar6 = *(undefined4 *)((longlong)pppppcVar19 + 0x8c4);
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(pppppcVar19 + 0x117);
    *(undefined4 *)((longlong)param_1 + 0x16a4) = uVar21;
    *(undefined4 *)(param_1 + 0x2d5) = uVar5;
    *(undefined4 *)((longlong)param_1 + 0x16ac) = uVar6;
    ppppppcVar16 = param_1 + 0x2d6;
    if (ppppppcVar16 != (code ******)(pppppcVar19 + 0x119)) {
      iVar9 = *(int *)(pppppcVar19 + 0x11a);
      ppppcVar3 = pppppcVar19[0x119];
      *(int *)(param_1 + 0x2d7) = iVar9;
      if (iVar9 == 0 && *(int *)((longlong)param_1 + 0x16bc) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x16bc) = 0;
      }
      else {
        FUN_1446dd670(ppppppcVar16,iVar9);
        if (iVar9 != 0) {
          memcpy(*ppppppcVar16,ppppcVar3,(longlong)iVar9 * 2);
        }
      }
    }
    pppppcVar19 = param_1[0x309];
    *(undefined1 *)(param_1 + 0x3bf) = *(undefined1 *)(pppppcVar19 + 0x18b);
    *(undefined1 *)((longlong)param_1 + 0x1df9) = *(undefined1 *)((longlong)pppppcVar19 + 0xc59);
    *(undefined1 *)((longlong)param_1 + 0x16d1) = *(undefined1 *)((longlong)pppppcVar19 + 0x98a);
    *(undefined1 *)((longlong)param_1 + 0x16d2) = *(undefined1 *)((longlong)pppppcVar19 + 0x989);
    uVar12 = FUN_1447210f0(param_1);
    uVar13 = (*(code *)param_1[0x2ac][2])(param_1 + 0x2ac);
    FUN_140c889d4(uVar12,uVar13);
    FUN_140355e00(param_1 + 0x585,param_1);
    ppppppcVar16 = param_1;
    if (*(char *)(param_1 + 0x2f) == '\x03') {
      for (; ppppppcVar16 != (code ******)0x0; ppppppcVar16 = (code ******)ppppppcVar16[4]) {
        if (((ulonglong)ppppppcVar16[1] & 0x30) != 0) goto LAB_141212684;
      }
      uVar12 = FUN_140356e36(param_1[0x309] + 0x191);
      FUN_1412133ba(param_1 + 0x39a,uVar12);
      pppppcVar19 = param_1[0x309];
      if (*(char *)((longlong)pppppcVar19 + 0xc04) == '\x01') {
        local_2c8 = local_2c8 & 0xffffffffffffff00;
        local_2a0 = local_2a0 & 0xffffffff00000000;
        FUN_1456bb102(&local_2c8,param_1);
        FUN_1448729ea(pppppcVar19 + 0x181,&local_2f0,&local_2c8);
        fVar22 = (float)FUN_144a7b41a(&local_2f0,0);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_2d0 * 0x120));
        if (pcVar4 != (code *)0x0) {
          pppppppcVar18 = (code *******)&local_2f0;
          if (0x18 < local_2d8) {
            pppppppcVar18 = local_2f0;
          }
          (*pcVar4)(pppppppcVar18);
        }
        if (0x18 < local_2d8) {
          FUN_1400020a8(local_2f0);
        }
        FUN_144a5ac3a(&local_2c8);
        if (0.0 < fVar22) {
          uVar12 = FUN_1401b4c98(param_1);
          local_2f0 = (code *******)0x0;
          local_2e8 = (code *****)((ulonglong)local_2e8 & 0xffffffff00000000);
          FUN_1446efa72(&local_2f0,0,3,0x10);
          pppppppcVar18 = local_2f0;
          local_2e8 = (code *****)CONCAT44(local_2e8._4_4_,3);
          *local_2f0 = (code ******)&PTR_LAB_14a1c8830;
          LOCK();
          UNLOCK();
          ppppppcVar16 = (code ******)(DAT_14c758608 + 1);
          lVar10 = DAT_14c758608 + 1;
          if (ppppppcVar16 == (code ******)0x0) {
            LOCK();
            UNLOCK();
            ppppppcVar16 = (code ******)(DAT_14c758608 + 2);
            lVar10 = DAT_14c758608 + 2;
          }
          DAT_14c758608 = lVar10;
          local_2f0[2] = ppppppcVar16;
          *local_2f0 = (code ******)&PTR_FUN_14b3e8f10;
          local_2f0[3] = (code ******)0x0;
          FUN_14485c47a(local_2f0 + 3,param_1);
          pppppppcVar18[4] = param_1;
          local_2c8 = 0;
          uStack_2c0 = (longlong *)((ulonglong)uStack_2c0._4_4_ << 0x20);
          FUN_14487d8d8(&local_2c8,&local_2f0);
          local_288 = 1;
          local_308 = &local_2f8;
          local_2f8 = 0;
          uStack_2f4 = 0xbf800000;
          FUN_1406f4044(uVar12,param_1 + 0x307,&local_2c8,fVar22);
          (*(code *)(&PTR_LAB_14a1c87a0)[local_288])(&local_2c8);
          FUN_1449db362(&local_2f0);
        }
        else {
          FUN_1458d7bec(param_1,*(undefined1 *)((longlong)param_1[0x309] + 0xc04));
        }
      }
      if (*(char *)((longlong)param_1[0x309] + 0xc02) == '\x01') {
        FUN_1412138f0(param_1,param_1[0x36],param_1 + 0x303,param_1 + 0x302);
      }
    }
LAB_141212684:
    FUN_1412133fc(param_1);
    FUN_141213548(param_1);
    lVar10 = FUN_1407a0dc0(param_1 + 0x2d3);
    if (lVar10 != 0) {
      uVar12 = FUN_1447210f0(param_1);
      FUN_1409e0c66(&local_2c8,uVar12);
      if (uStack_2c0 != (longlong *)0x0) {
        iVar9 = (int)uStack_2c0[1];
        do {
          if (iVar9 == 0) {
            plVar17 = (longlong *)0x0;
            break;
          }
          LOCK();
          iVar8 = (int)uStack_2c0[1];
          bVar20 = iVar9 == iVar8;
          if (bVar20) {
            *(int *)(uStack_2c0 + 1) = iVar9 + 1;
            iVar8 = iVar9;
          }
          iVar9 = iVar8;
          UNLOCK();
          plVar17 = uStack_2c0;
        } while (!bVar20);
        LOCK();
        piVar1 = (int *)((longlong)uStack_2c0 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*uStack_2c0 + 0x10))();
        }
        uVar7 = local_2c8;
        if (plVar17 != (longlong *)0x0) {
          if (local_2c8 != 0) {
            local_2a0 = 0;
            local_298 = 0;
            local_2c8 = 0;
            uStack_2c0 = (longlong *)0x0;
            local_2b8 = 0;
            local_294 = 0xffffffff00000080;
            local_28c = 0;
            local_280 = 0;
            local_278 = 0;
            local_250 = 0;
            local_248 = 0;
            local_270 = 0;
            uStack_268 = 0;
            local_244 = 0xffffffff00000080;
            local_23c = 0;
            local_230 = 0;
            local_228 = 0;
            local_220 = 0;
            local_218 = 0xffffffff00000000;
            local_1f0 = 0;
            local_1e8 = 0;
            local_210 = 0;
            uStack_208 = 0;
            local_1e4 = 0xffffffff00000080;
            local_1dc = 0;
            local_1d0 = 0;
            local_1c8 = 0;
            local_1c0 = 0;
            local_198 = 0;
            local_170 = 0;
            local_168 = 0x200000000;
            local_158 = 0;
            local_150 = 0;
            uStack_14c = 0x20;
            uStack_148 = 0xffffffff;
            uStack_144 = 0;
            local_138 = 0;
            local_130 = 0;
            local_108 = 0;
            local_100 = 0x200000000;
            local_f0 = 0;
            local_e8 = 0;
            uStack_e4 = 0x20;
            uStack_e0 = 0xffffffff;
            uStack_dc = 0;
            local_d0 = 0;
            local_c8 = 0;
            local_a0 = 0;
            local_98 = 0x200000000;
            local_88 = 0;
            local_80 = 0;
            uStack_7c = 0x20;
            uStack_78 = 0xffffffff;
            uStack_74 = 0;
            local_68 = 0;
            local_60 = 0;
            local_58 = 0;
            uVar14 = FUN_1407a0dc0(param_1 + 0x2d3);
            if ((uVar14 != 0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c(uVar14);
            }
            local_2c8 = uVar14;
            FUN_140ff15b2(&local_2c8);
            local_308 = (undefined2 *)CONCAT71(local_308._1_7_,1);
            FUN_140a41f04(uVar7,&local_2f0,param_1,&local_2c8);
            pppppcVar19 = local_2e8;
            if ((code ********)(param_1 + 0x311) != &local_2f0) {
              param_1[0x311] = (code *****)local_2f0;
              local_2f0 = (code *******)0x0;
              pppppcVar15 = param_1[0x312];
              if (local_2e8 != pppppcVar15) {
                local_2e8 = (code *****)0x0;
                param_1[0x312] = pppppcVar19;
                if (pppppcVar15 != (code *****)0x0) {
                  LOCK();
                  pppppcVar19 = pppppcVar15 + 1;
                  *(int *)pppppcVar19 = *(int *)pppppcVar19 + -1;
                  UNLOCK();
                  if (*(int *)pppppcVar19 == 0) {
                    (*(code *)**pppppcVar15)(pppppcVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)pppppcVar15 + 0xc);
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (*piVar1 == 0) {
                      (*(code *)(*pppppcVar15)[2])(pppppcVar15);
                    }
                  }
                }
              }
            }
            pppppcVar19 = local_2e8;
            if (local_2e8 != (code *****)0x0) {
              LOCK();
              pppppcVar15 = local_2e8 + 1;
              *(int *)pppppcVar15 = *(int *)pppppcVar15 + -1;
              UNLOCK();
              if (*(int *)pppppcVar15 == 0) {
                (*(code *)**local_2e8)(local_2e8);
                LOCK();
                piVar1 = (int *)((longlong)pppppcVar19 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (*(code *)(*pppppcVar19)[2])(pppppcVar19);
                }
              }
            }
            ppppppcVar16 = (code ******)param_1[0x311];
            if (ppppppcVar16 != (code ******)0x0) {
              local_2f0 = (code *******)FUN_140f31438;
              local_2e8 = (code *****)((ulonglong)local_2e8 & 0xffffffff00000000);
              FUN_145841732(ppppppcVar16 + 0x26,&local_2f8,param_1);
            }
            FUN_14076ba26(&local_2c8);
          }
          LOCK();
          plVar2 = plVar17 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar17)(plVar17);
            LOCK();
            piVar1 = (int *)((longlong)plVar17 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar17 + 0x10))(plVar17);
            }
          }
        }
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_328) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412133ba FUN_1412133ba body=8 status=ok
// SIG undefined FUN_1412133ba(void)

void FUN_1412133ba(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x120) = param_2;
  return;
}



// FUNCTION 1412133c2 FUN_1412133c2 body=57 status=ok
// SIG undefined FUN_1412133c2(void)

void FUN_1412133c2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5d960 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5d960 = FUN_140002ddd(FUN_1464dd328,uVar1,L"GbxDroneDef");
  }
  return;
}



// FUNCTION 1412133fc FUN_1412133fc body=152 status=ok
// SIG undefined FUN_1412133fc(void)

void FUN_1412133fc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  
  if (((((*(int *)(param_1 + 0x1854) != 0) && (uVar1 = *(uint *)(param_1 + 0x1850), -1 < (int)uVar1)
        ) && ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar4 != (longlong *)0x0 && ((int)plVar4[2] == *(int *)(param_1 + 0x1854))))) &&
     (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && (lVar2 = *plVar4, lVar2 != 0)))) {
    if (*(char *)(param_1 + 0x1640) == '\0') {
      cVar3 = '\x01';
    }
    else {
      cVar3 = *(char *)(param_1 + 0x1844);
      if ((*(char *)(param_1 + 0x1640) == '\x03') &&
         (cVar3 = '\x01', *(char *)(param_1 + 0x16d1) == '\0')) {
        cVar3 = *(char *)(param_1 + 0x1844);
      }
    }
    *(byte *)(lVar2 + 0x180) = *(byte *)(lVar2 + 0x180) & 0xbf | cVar3 << 6;
  }
  return;
}



// FUNCTION 141213494 FUN_141213494 body=178 status=ok
// SIG undefined FUN_141213494(void)

longlong * FUN_141213494(longlong *param_1,longlong *param_2,longlong *param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\v') {
    *param_2 = *param_1;
  }
  else {
    FUN_1400b56fe(local_48,param_1,0xb);
    pppuVar2 = (undefined8 ***)local_48[0];
    if (local_28 == 0) {
      pppuVar2 = (undefined8 ***)*param_3;
    }
    *param_2 = (longlong)pppuVar2;
    pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
    if (pcVar1 != (code *)0x0) {
      pppuVar2 = local_48;
      if (0x18 < local_30) {
        pppuVar2 = (undefined8 ***)local_48[0];
      }
      (*pcVar1)(pppuVar2);
    }
    if (0x18 < local_30) {
      FUN_1400020a8(local_48[0]);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141213548 FUN_141213548 body=935 status=ok
// SIG undefined FUN_141213548(void)

void FUN_141213548(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_2e8 [32];
  undefined1 local_2c8;
  undefined1 local_2c0 [8];
  code *local_2b8;
  longlong *local_2b0;
  longlong local_2a8;
  longlong *plStack_2a0;
  undefined8 local_298;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_224;
  undefined4 local_21c;
  undefined8 local_210;
  undefined4 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1c4;
  undefined4 local_1bc;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0;
  undefined4 local_178;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2e8;
  if ((*(char *)(param_1 + 0x178) == '\x03') && (*(char *)(param_1 + 0x16c0) == '\x01')) {
    uVar8 = FUN_1447210f0(param_1);
    FUN_1409e0c66(&local_2a8,uVar8);
    if (plStack_2a0 != (longlong *)0x0) {
      iVar7 = (int)plStack_2a0[1];
      do {
        if (iVar7 == 0) {
          plVar10 = (longlong *)0x0;
          break;
        }
        LOCK();
        iVar6 = (int)plStack_2a0[1];
        bVar11 = iVar7 == iVar6;
        if (bVar11) {
          *(int *)(plStack_2a0 + 1) = iVar7 + 1;
          iVar6 = iVar7;
        }
        iVar7 = iVar6;
        UNLOCK();
        plVar10 = plStack_2a0;
      } while (!bVar11);
      LOCK();
      piVar1 = (int *)((longlong)plStack_2a0 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plStack_2a0 + 0x10))();
      }
      lVar5 = local_2a8;
      if (plVar10 != (longlong *)0x0) {
        if (local_2a8 != 0) {
          local_280 = 0;
          local_278 = 0;
          local_2a8 = 0;
          plStack_2a0 = (longlong *)0x0;
          local_298 = 0;
          local_274 = 0xffffffff00000080;
          local_26c = 0;
          local_260 = 0;
          local_258 = 0;
          local_230 = 0;
          local_228 = 0;
          local_250 = 0;
          uStack_248 = 0;
          local_224 = 0xffffffff00000080;
          local_21c = 0;
          local_210 = 0;
          local_208 = 0;
          local_200 = 0;
          local_1f8 = 0xffffffff00000000;
          local_1d0 = 0;
          local_1c8 = 0;
          local_1f0 = 0;
          uStack_1e8 = 0;
          local_1c4 = 0xffffffff00000080;
          local_1bc = 0;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a0 = 0;
          local_178 = 0;
          local_150 = 0;
          local_148 = 0x200000000;
          local_138 = 0;
          local_130 = 0;
          uStack_12c = 0x20;
          uStack_128 = 0xffffffff;
          uStack_124 = 0;
          local_118 = 0;
          local_110 = 0;
          local_e8 = 0;
          local_e0 = 0x200000000;
          local_d0 = 0;
          local_c8 = 0;
          uStack_c4 = 0x20;
          uStack_c0 = 0xffffffff;
          uStack_bc = 0;
          local_b0 = 0;
          local_a8 = 0;
          local_80 = 0;
          local_78 = 0x200000000;
          local_68 = 0;
          local_60 = 0;
          uStack_5c = 0x20;
          uStack_58 = 0xffffffff;
          uStack_54 = 0;
          local_48 = 0;
          local_40 = 0;
          local_38 = 0;
          lVar9 = FUN_1407a0dc0(param_1 + 0x1670);
          if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c(lVar9);
          }
          local_2a8 = lVar9;
          FUN_140ff15b2(&local_2a8);
          local_2c8 = 1;
          FUN_140a41f04(lVar5,&local_2b8,param_1,&local_2a8);
          plVar2 = local_2b0;
          if ((code **)(param_1 + 0x1858) != &local_2b8) {
            *(code **)(param_1 + 0x1858) = local_2b8;
            local_2b8 = (code *)0x0;
            plVar3 = *(longlong **)(&DAT_00001860 + param_1);
            if (local_2b0 != plVar3) {
              local_2b0 = (longlong *)0x0;
              *(longlong **)(&DAT_00001860 + param_1) = plVar2;
              if (plVar3 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar3 + 1;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)*plVar2 == 0) {
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
          plVar2 = local_2b0;
          if (local_2b0 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_2b0 + 1;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)*plVar3 == 0) {
              (**(code **)*local_2b0)(local_2b0);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar2 + 0x10))(plVar2);
              }
            }
          }
          pcVar4 = *(code **)(param_1 + 0x1858);
          if (pcVar4 != (code *)0x0) {
            local_2b8 = FUN_140f3157a;
            local_2b0 = (longlong *)((ulonglong)local_2b0 & 0xffffffff00000000);
            FUN_145841732(pcVar4 + 0x130,local_2c0,param_1);
          }
          FUN_14076ba26(&local_2a8);
        }
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar1 = (int *)((longlong)plVar10 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_2e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412138f0 FUN_1412138f0 body=1897 status=ok
// SIG undefined FUN_1412138f0(void)

void FUN_1412138f0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  code *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) goto LAB_141213cdf;
  if (DAT_14cb56270 == 0) {
    local_80 = &local_60;
    local_60 = FUN_1449e2820;
    local_70 = FUN_14081d0ea;
    local_78 = FUN_1427b09ee;
    local_88 = &LAB_148630fef;
    local_90 = FUN_1464b6a91;
    local_98 = L"Engine";
    local_a0 = 0;
    local_a8 = 0x10004001;
    local_b0 = 8;
    local_b8 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DamageableInterface",&DAT_14cb56270,&DAT_148630fee);
  }
  plVar6 = (longlong *)FUN_144718840(param_2,DAT_14cb56270);
  if ((plVar6 != (longlong *)0x0) && (lVar7 = (**(code **)(*plVar6 + 0x20))(plVar6), lVar7 != 0)) {
    local_60 = (code *)0x0;
    local_58 = 0;
    FUN_1446efa72(&local_60,0,3,0x10);
    pcVar3 = local_60;
    local_58 = 3;
    *(undefined ***)local_60 = &PTR_LAB_14b3e9ef0;
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
    *(longlong *)(local_60 + 0x10) = lVar8;
    *(undefined ***)local_60 = &PTR_FUN_14b3e9060;
    *(longlong *)(local_60 + 0x18) = 0;
    iVar9 = 0;
    if (param_1 != 0) {
      uVar1 = *(uint *)(param_1 + 0xc);
      *(uint *)(local_60 + 0x18) = uVar1;
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar12 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar12 = 0;
      }
      iVar9 = *(int *)(lVar12 + 0x10);
      if (*(int *)(lVar12 + 0x10) == 0) {
        LOCK();
        iVar9 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar13 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar9;
        if (bVar13) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).")
          ;
        }
        LOCK();
        iVar9 = *(int *)(lVar12 + 0x10);
        bVar13 = iVar9 == 0;
        if (bVar13) {
          *(int *)(lVar12 + 0x10) = iVar5;
          iVar9 = 0;
        }
        UNLOCK();
        if (bVar13) {
          iVar9 = iVar5;
        }
      }
    }
    *(int *)(pcVar3 + 0x1c) = iVar9;
    *(undefined1 **)(pcVar3 + 0x20) = &LAB_14588f1d2;
    *(undefined4 *)(pcVar3 + 0x28) = 0;
    if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
       (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
      if (local_58 == 0) {
        uVar11 = 0;
        goto LAB_141213b1f;
      }
      if (local_60 != (code *)0x0) {
        uVar11 = 0;
        (*(code *)**(undefined8 **)local_60)(local_60,0);
        FUN_1446efa72(&local_60,0,0,0x10);
        goto LAB_141213b0f;
      }
      uVar11 = 0;
    }
    else {
      plVar6 = (longlong *)(lVar7 + 400);
      if (*(int *)(lVar7 + 0x1a4) < 1) {
        iVar9 = *(int *)(lVar7 + 0x198);
        iVar5 = *(int *)(lVar7 + 0x1a0) + -1;
        *(int *)(lVar7 + 0x1a0) = iVar5;
        if (iVar5 <= iVar9) {
          iVar5 = iVar9;
          if (0 < iVar9) {
            iVar10 = 0;
            do {
              if (((*(int *)(*plVar6 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                  (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar10 * 0x10),
                  plVar2 == (longlong *)0x0)) ||
                 (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
                FUN_14005b288(plVar6,iVar10);
                FUN_14005b248(plVar6);
              }
              else {
                iVar10 = iVar10 + 1;
              }
              iVar5 = *(int *)(lVar7 + 0x198);
            } while (iVar10 < iVar5);
          }
          iVar10 = 2;
          if (2 < iVar5 * 2) {
            iVar10 = iVar5 * 2;
          }
          *(int *)(lVar7 + 0x1a0) = iVar10;
          if ((iVar10 < iVar9) && (*(int *)(lVar7 + 0x19c) != iVar5)) {
            FUN_14045812c();
          }
        }
      }
      uVar11 = 0;
      if ((local_58 != 0) && (local_60 != (code *)0x0)) {
        (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
        uVar11 = local_50;
      }
      iVar9 = *(int *)(lVar7 + 0x198);
      *(uint *)(lVar7 + 0x198) = iVar9 + 1U;
      if (*(uint *)(lVar7 + 0x19c) < iVar9 + 1U) {
        FUN_1447a71f6(plVar6,iVar9);
      }
      lVar7 = *plVar6;
      lVar12 = (longlong)iVar9 * 0x10;
      *(undefined8 *)(lVar7 + lVar12) = 0;
      *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
      *(code **)(lVar7 + lVar12) = local_60;
      local_60 = (code *)0x0;
      *(int *)(lVar7 + 8 + lVar12) = local_58;
LAB_141213b0f:
      local_58 = 0;
LAB_141213b1f:
      if (local_60 != (code *)0x0) {
        FUN_1400020a8();
      }
    }
    *param_3 = uVar11;
  }
  local_60 = (code *)0x0;
  local_58 = 0;
  FUN_1446efa72(&local_60,0,3,0x10);
  pcVar3 = local_60;
  local_58 = 3;
  *(undefined ***)local_60 = &PTR_LAB_14a3a3510;
  LOCK();
  UNLOCK();
  lVar12 = DAT_14c758608 + 1;
  lVar7 = DAT_14c758608 + 1;
  if (lVar12 == 0) {
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 2;
    lVar7 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar7;
  *(longlong *)(local_60 + 0x10) = lVar12;
  *(undefined ***)local_60 = &PTR_FUN_14b3e90d0;
  *(longlong *)(local_60 + 0x18) = 0;
  iVar9 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_60 + 0x18) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar7 = 0;
    }
    iVar9 = *(int *)(lVar7 + 0x10);
    if (*(int *)(lVar7 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar9 = *(int *)(lVar7 + 0x10);
      bVar13 = iVar9 == 0;
      if (bVar13) {
        *(int *)(lVar7 + 0x10) = iVar5;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar13) {
        iVar9 = iVar5;
      }
    }
  }
  *(int *)(pcVar3 + 0x1c) = iVar9;
  *(undefined1 **)(pcVar3 + 0x20) = &LAB_145c09e24;
  *(undefined4 *)(pcVar3 + 0x28) = 0;
  if (((local_58 == 0) || (local_60 == (code *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)local_60 + 0x30))(), cVar4 == '\0')) {
    if (local_58 == 0) {
      uVar11 = 0;
      goto LAB_141213cd3;
    }
    if (local_60 != (code *)0x0) {
      uVar11 = 0;
      (*(code *)**(undefined8 **)local_60)(local_60,0);
      FUN_1446efa72(&local_60,0,0,0x10);
      goto LAB_141213cc3;
    }
    uVar11 = 0;
  }
  else {
    plVar6 = (longlong *)(param_2 + 0x2b8);
    if (*(int *)(param_2 + 0x2cc) < 1) {
      iVar9 = *(int *)(param_2 + 0x2c0);
      iVar5 = *(int *)(param_2 + 0x2c8) + -1;
      *(int *)(param_2 + 0x2c8) = iVar5;
      if (iVar5 <= iVar9) {
        iVar5 = iVar9;
        if (0 < iVar9) {
          iVar10 = 0;
          do {
            if (((*(int *)(*plVar6 + 8 + (longlong)iVar10 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*plVar6 + (longlong)iVar10 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar6,iVar10);
              FUN_14005b248(plVar6);
            }
            else {
              iVar10 = iVar10 + 1;
            }
            iVar5 = *(int *)(param_2 + 0x2c0);
          } while (iVar10 < iVar5);
        }
        iVar10 = 2;
        if (2 < iVar5 * 2) {
          iVar10 = iVar5 * 2;
        }
        *(int *)(param_2 + 0x2c8) = iVar10;
        if ((iVar10 < iVar9) && (*(int *)(param_2 + 0x2c4) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar11 = 0;
    if ((local_58 != 0) && (local_60 != (code *)0x0)) {
      (**(code **)(*(longlong *)local_60 + 0x38))(local_60,&local_50);
      uVar11 = local_50;
    }
    iVar9 = *(int *)(param_2 + 0x2c0);
    *(uint *)(param_2 + 0x2c0) = iVar9 + 1U;
    if (*(uint *)(param_2 + 0x2c4) < iVar9 + 1U) {
      FUN_1447a71f6(plVar6,iVar9);
    }
    lVar7 = *plVar6;
    lVar12 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar7 + lVar12) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar12) = 0;
    *(code **)(lVar7 + lVar12) = local_60;
    local_60 = (code *)0x0;
    *(int *)(lVar7 + 8 + lVar12) = local_58;
LAB_141213cc3:
    local_58 = 0;
LAB_141213cd3:
    if (local_60 != (code *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_4 = uVar11;
LAB_141213cdf:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14121405a FUN_14121405a body=85 status=ok
// SIG undefined FUN_14121405a(void)

undefined8
FUN_14121405a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_4;
  uStack_24 = param_4[1];
  uStack_20 = param_4[2];
  uStack_1c = param_4[3];
  local_18 = *(undefined8 *)(param_4 + 4);
  FUN_1412140b0(param_1,param_2,param_3,&local_28);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412140b0 FUN_1412140b0 body=367 status=ok
// SIG undefined FUN_1412140b0(void)

double * FUN_1412140b0(double *param_1,longlong *param_2,undefined8 param_3,double *param_4)

{
  longlong *plVar1;
  double dVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (longlong *)0x0) {
    param_1[2] = DAT_14c8464f0;
    dVar2 = DAT_14c8464e8;
    *param_1 = DAT_14c8464e0;
    param_1[1] = dVar2;
  }
  else {
    lVar3 = (**(code **)(*param_2 + 0x5d8))(param_2);
    if ((lVar3 == 0) || (plVar1 = *(longlong **)(lVar3 + 0x448), plVar1 == (longlong *)0x0)) {
      FUN_14030a482(param_3,param_1,param_2,0);
    }
    else {
      param_1[2] = DAT_14c8464f0;
      dVar2 = DAT_14c8464e8;
      *param_1 = DAT_14c8464e0;
      param_1[1] = dVar2;
      if ((*param_4 == 0.0) && (!NAN(*param_4))) {
        if ((param_4[1] == 0.0) && (!NAN(param_4[1]))) {
          if ((param_4[2] == 0.0) && (!NAN(param_4[2]))) {
            FUN_14030a482(param_3,param_1,param_2,1);
            if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
              FUN_144d8e3a0();
            }
            return param_1;
          }
        }
      }
      (**(code **)(*plVar1 + 0x730))(plVar1,&local_48);
      (**(code **)(*plVar1 + 0x728))(plVar1,local_78);
      FUN_1401c9a0e(local_78,&local_60,param_4);
      *param_1 = local_48 + local_60;
      param_1[1] = local_40 + local_58;
      param_1[2] = local_38 + local_50;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
}



// FUNCTION 141214220 FUN_141214220 body=182 status=ok
// SIG undefined FUN_141214220(void)

void FUN_141214220(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong local_68 [2];
  undefined8 local_58 [7];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x40), lVar3 != 0)) &&
     (lVar2 = *(longlong *)(param_2 + 0x38), lVar2 != 0)) {
    local_68[0] = *param_3;
    local_58[0] = 0;
    if (local_68[0] != 0) {
      plVar1 = param_3 + 4;
      if ((longlong *)param_3[2] != (longlong *)0x0) {
        plVar1 = (longlong *)param_3[2];
      }
      (**(code **)*plVar1)(plVar1,local_58);
      lVar2 = *(longlong *)(param_2 + 0x38);
      lVar3 = *(longlong *)(param_2 + 0x40);
    }
    FUN_1412142d7(param_1,lVar2,lVar3,local_68);
  }
  if (*param_3 != 0) {
    plVar1 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar1 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412142d7 FUN_1412142d7 body=1797 status=ok
// SIG undefined FUN_1412142d7(void)

void FUN_1412142d7(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  char *pcVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  char local_89;
  longlong local_88;
  int local_80 [2];
  longlong local_78;
  char *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) goto LAB_141214941;
  local_88 = 0;
  local_80[0] = FUN_144830b78(local_80,&DAT_14cb42160);
  lVar11 = local_78;
  iVar1 = *(int *)(param_3 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(param_3 + 0x30);
    lVar9 = 0;
    do {
      lVar8 = *(longlong *)(lVar10 + lVar9);
      if (((lVar8 != 0) && (lVar8 == lVar11)) &&
         (plVar5 = (longlong *)FUN_1412149de(param_3), plVar5 != (longlong *)0x0)) {
        local_80[0] = (int)plVar5[1];
        local_88 = *plVar5;
        break;
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)iVar1 * 8 != lVar9);
  }
  local_89 = '\x01';
  pcVar2 = *(char **)(param_2 + 0xd8);
  local_b0 = param_2;
  if ((pcVar2[0x348] != '\0') && ((longlong)*(int *)(pcVar2 + 0x2a8) != 0)) {
    lVar11 = *(longlong *)(pcVar2 + 0x2a0);
    lVar10 = *(longlong *)(pcVar2 + 0x388);
    local_a0 = (longlong)*(int *)(pcVar2 + 0x2a8) * 0x58 + lVar11;
    local_b8 = (longlong)*(int *)(pcVar2 + 0x390);
    lVar9 = local_b8 * 0x50;
    do {
      if ((int)local_b8 != 0) {
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar10 + 8 + lVar8) == *(longlong *)(lVar11 + 8)) &&
             ((*(longlong *)(lVar10 + 0x40 + lVar8) == local_78 ||
              (((local_88 != 0 && (plVar5 = (longlong *)FUN_144741050(local_80), *plVar5 != 0)) &&
               ((*(longlong *)(lVar10 + 0x20 + lVar8) == local_88 &&
                (*(int *)(lVar10 + 0x28 + lVar8) == local_80[0])))))))) {
            pcVar3 = (code *)*param_4;
            plVar5 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar5 = param_4 + 4;
            }
            local_70 = pcVar2;
            uVar6 = (**(code **)(*plVar5 + 8))();
            cVar4 = (*pcVar3)(uVar6,&local_70,lVar11);
            if (cVar4 == '\0') goto LAB_14121457b;
          }
          lVar8 = lVar8 + 0x50;
        } while (lVar9 != lVar8);
      }
      lVar11 = lVar11 + 0x58;
    } while (lVar11 != local_a0);
    if (local_89 == '\0') goto LAB_141214580;
  }
  pcVar2 = *(char **)(local_b0 + 0xe0);
  if ((pcVar2[0x348] != '\0') && ((longlong)*(int *)(pcVar2 + 0x2a8) != 0)) {
    lVar11 = *(longlong *)(pcVar2 + 0x2a0);
    lVar10 = *(longlong *)(pcVar2 + 0x388);
    local_a0 = (longlong)*(int *)(pcVar2 + 0x2a8) * 0x58 + lVar11;
    local_b8 = (longlong)*(int *)(pcVar2 + 0x390);
    lVar9 = local_b8 * 0x50;
    do {
      if ((int)local_b8 != 0) {
        lVar8 = 0;
        do {
          if ((*(longlong *)(lVar10 + 8 + lVar8) == *(longlong *)(lVar11 + 8)) &&
             ((*(longlong *)(lVar10 + 0x40 + lVar8) == local_78 ||
              ((((local_88 != 0 && (plVar5 = (longlong *)FUN_144741050(local_80), *plVar5 != 0)) &&
                (*(longlong *)(lVar10 + 0x20 + lVar8) == local_88)) &&
               (*(int *)(lVar10 + 0x28 + lVar8) == local_80[0])))))) {
            pcVar3 = (code *)*param_4;
            plVar5 = (longlong *)param_4[2];
            if ((longlong *)param_4[2] == (longlong *)0x0) {
              plVar5 = param_4 + 4;
            }
            local_70 = pcVar2;
            uVar6 = (**(code **)(*plVar5 + 8))();
            cVar4 = (*pcVar3)(uVar6,&local_70,lVar11);
            if (cVar4 == '\0') goto LAB_14121457b;
          }
          lVar8 = lVar8 + 0x50;
        } while (lVar9 != lVar8);
      }
      lVar11 = lVar11 + 0x58;
    } while (lVar11 != local_a0);
  }
LAB_141214580:
  if ((longlong)*(int *)(local_b0 + 0xc0) != 0) {
    lVar11 = *(longlong *)(local_b0 + 0xb8);
    local_98 = lVar11 + (longlong)*(int *)(local_b0 + 0xc0) * 0x48;
    plVar5 = param_4 + 4;
LAB_1412145ad:
    if ((*(char *)(lVar11 + 0x20) == '\x01') && (local_b8 = FUN_14040f60c(lVar11), local_b8 != 0)) {
      local_70 = &local_89;
      local_68 = &local_78;
      local_60 = &local_88;
      local_a0 = lVar11;
      local_58 = param_4;
      if (local_89 != '\0') {
        lVar11 = *(longlong *)(local_b8 + 0x118);
        if ((*(char *)(lVar11 + 0x348) != '\0') && ((longlong)*(int *)(lVar11 + 0x2a8) != 0)) {
          lVar10 = *(longlong *)(lVar11 + 0x2a0);
          lVar9 = *(longlong *)(lVar11 + 0x388);
          local_a8 = (longlong)*(int *)(lVar11 + 0x2a8) * 0x58 + lVar10;
          local_b0 = (longlong)*(int *)(lVar11 + 0x390);
          lVar8 = local_b0 * 0x50;
          do {
            if ((int)local_b0 != 0) {
              lVar12 = 0;
              do {
                if ((*(longlong *)(lVar9 + 8 + lVar12) == *(longlong *)(lVar10 + 8)) &&
                   ((*(longlong *)(lVar9 + 0x40 + lVar12) == local_78 ||
                    ((((local_88 != 0 &&
                       (plVar7 = (longlong *)FUN_144741050(local_80), *plVar7 != 0)) &&
                      (*(longlong *)(lVar9 + 0x20 + lVar12) == local_88)) &&
                     (*(int *)(lVar9 + 0x28 + lVar12) == local_80[0])))))) {
                  pcVar3 = (code *)*param_4;
                  plVar7 = (longlong *)param_4[2];
                  if ((longlong *)param_4[2] == (longlong *)0x0) {
                    plVar7 = plVar5;
                  }
                  local_50 = lVar11;
                  uVar6 = (**(code **)(*plVar7 + 8))();
                  cVar4 = (*pcVar3)(uVar6,&local_50,lVar10);
                  if (cVar4 == '\0') goto LAB_141214917;
                }
                lVar12 = lVar12 + 0x50;
              } while (lVar8 != lVar12);
            }
            lVar10 = lVar10 + 0x58;
          } while (lVar10 != local_a8);
          if (local_89 == '\0') goto LAB_14121491c;
        }
        lVar11 = *(longlong *)(local_b8 + 0xf0);
        cVar4 = '\x01';
        if ((*(char *)(lVar11 + 0x348) != '\0') && ((longlong)*(int *)(lVar11 + 0x2a8) != 0)) {
          lVar10 = *(longlong *)(lVar11 + 0x2a0);
          lVar9 = *(longlong *)(lVar11 + 0x388);
          local_a8 = (longlong)*(int *)(lVar11 + 0x2a8) * 0x58 + lVar10;
          local_b0 = (longlong)*(int *)(lVar11 + 0x390);
          lVar8 = local_b0 * 0x50;
          do {
            if ((int)local_b0 != 0) {
              lVar12 = 0;
              do {
                if ((*(longlong *)(lVar9 + 8 + lVar12) == *(longlong *)(lVar10 + 8)) &&
                   ((*(longlong *)(lVar9 + 0x40 + lVar12) == local_78 ||
                    (((local_88 != 0 && (plVar7 = (longlong *)FUN_144741050(local_80), *plVar7 != 0)
                      ) && ((*(longlong *)(lVar9 + 0x20 + lVar12) == local_88 &&
                            (*(int *)(lVar9 + 0x28 + lVar12) == local_80[0])))))))) {
                  pcVar3 = (code *)*param_4;
                  plVar7 = (longlong *)param_4[2];
                  if ((longlong *)param_4[2] == (longlong *)0x0) {
                    plVar7 = plVar5;
                  }
                  local_50 = lVar11;
                  uVar6 = (**(code **)(*plVar7 + 8))();
                  cVar4 = (*pcVar3)(uVar6,&local_50,lVar10);
                  if (cVar4 == '\0') goto LAB_141214917;
                }
                lVar12 = lVar12 + 0x50;
              } while (lVar8 != lVar12);
            }
            lVar10 = lVar10 + 0x58;
            cVar4 = local_89;
          } while (lVar10 != local_a8);
        }
        lVar11 = *(longlong *)(local_b8 + 0x268);
        if ((((lVar11 != 0) && (cVar4 != '\0')) && (*(char *)(lVar11 + 0x348) != '\0')) &&
           ((longlong)*(int *)(lVar11 + 0x2a8) != 0)) {
          lVar10 = *(longlong *)(lVar11 + 0x2a0);
          lVar9 = *(longlong *)(lVar11 + 0x388);
          local_a8 = (longlong)*(int *)(lVar11 + 0x2a8) * 0x58 + lVar10;
          local_b0 = (longlong)*(int *)(lVar11 + 0x390);
          lVar8 = local_b0 * 0x50;
          do {
            if ((int)local_b0 != 0) {
              lVar12 = 0;
              do {
                if ((*(longlong *)(lVar9 + 8 + lVar12) == *(longlong *)(lVar10 + 8)) &&
                   ((*(longlong *)(lVar9 + 0x40 + lVar12) == local_78 ||
                    (((local_88 != 0 && (plVar7 = (longlong *)FUN_144741050(local_80), *plVar7 != 0)
                      ) && ((*(longlong *)(lVar9 + 0x20 + lVar12) == local_88 &&
                            (*(int *)(lVar9 + 0x28 + lVar12) == local_80[0])))))))) {
                  pcVar3 = (code *)*param_4;
                  plVar7 = (longlong *)param_4[2];
                  if ((longlong *)param_4[2] == (longlong *)0x0) {
                    plVar7 = plVar5;
                  }
                  local_50 = lVar11;
                  uVar6 = (**(code **)(*plVar7 + 8))();
                  cVar4 = (*pcVar3)(uVar6,&local_50,lVar10);
                  if (cVar4 == '\0') goto LAB_141214917;
                }
                lVar12 = lVar12 + 0x50;
              } while (lVar8 != lVar12);
            }
            lVar10 = lVar10 + 0x58;
          } while (lVar10 != local_a8);
        }
      }
      goto LAB_14121491c;
    }
    goto LAB_141214932;
  }
LAB_141214941:
  if (*param_4 != 0) {
    plVar5 = param_4 + 4;
    if ((longlong *)param_4[2] != (longlong *)0x0) {
      plVar5 = (longlong *)param_4[2];
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14121457b:
  local_89 = '\0';
  goto LAB_141214580;
LAB_141214917:
  local_89 = '\0';
LAB_14121491c:
  lVar11 = local_a0;
  iVar1 = *(int *)(local_b8 + 0x88);
  if ((longlong)iVar1 != 0) {
    lVar10 = *(longlong *)(local_b8 + 0x80);
    lVar9 = 0;
    do {
      FUN_143939c32(&local_70,*(undefined8 *)(lVar10 + lVar9));
      lVar9 = lVar9 + 0x58;
    } while ((longlong)iVar1 * 0x58 - lVar9 != 0);
  }
LAB_141214932:
  lVar11 = lVar11 + 0x48;
  if (lVar11 == local_98) goto LAB_141214941;
  goto LAB_1412145ad;
}



// FUNCTION 1412149de FUN_1412149de body=106 status=ok
// SIG undefined FUN_1412149de(void)

longlong FUN_1412149de(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x38) << 3;
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(param_1 + 0x30) + lVar3 * 8) == param_2) {
        if ((int)lVar3 == -1) {
          return 0;
        }
        lVar1 = FUN_143aa3fee();
        if (lVar1 == 0) {
          return 0;
        }
        plVar2 = (longlong *)FUN_144741050(lVar1 + 8);
        if ((short)plVar2[1] == 1) {
          lVar3 = *plVar2;
        }
        else {
          lVar3 = 0;
        }
        if (lVar3 != *(longlong *)(param_2 + 0x10)) {
          return 0;
        }
        return lVar1;
      }
      lVar3 = lVar3 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  return 0;
}



// FUNCTION 141214a48 FUN_141214a48 body=268 status=ok
// SIG undefined FUN_141214a48(void)

int FUN_141214a48(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = (int)param_1[1];
  lVar7 = (longlong)iVar6;
  if (lVar7 == 0) {
    iVar6 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar13 = 0;
    bVar11 = *plVar1 == *(longlong *)*param_2;
    iVar3 = 0;
    do {
      lVar9 = (longlong)iVar3;
      iVar12 = iVar3 + 1;
      if (iVar3 + 1 < iVar6) {
        iVar12 = iVar6;
      }
      plVar8 = plVar1 + lVar9 * 2 + 2;
      iVar4 = iVar3;
      lVar10 = lVar9;
      do {
        lVar10 = lVar10 + 1;
        iVar5 = iVar12;
        if (lVar7 <= lVar10) break;
        lVar2 = *plVar8;
        iVar4 = iVar4 + 1;
        plVar8 = plVar8 + 2;
        iVar5 = iVar4;
      } while (bVar11 == (lVar2 == *(longlong *)*param_2));
      iVar12 = iVar5 - iVar3;
      if (bVar11 == false) {
        if (iVar13 != iVar3) {
          memmove(plVar1 + (longlong)iVar13 * 2,plVar1 + lVar9 * 2,(longlong)iVar12 << 4);
        }
        iVar13 = iVar13 + iVar12;
      }
      else {
        FUN_141214b54(plVar1 + lVar9 * 2,iVar12);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar3 = iVar5;
    } while (lVar10 < lVar7);
    *(int *)(param_1 + 1) = iVar13;
    iVar6 = iVar6 - iVar13;
  }
  return iVar6;
}



// FUNCTION 141214b54 FUN_141214b54 body=75 status=ok
// SIG undefined FUN_141214b54(void)

void FUN_141214b54(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  if (param_2 != 0) {
    plVar4 = (longlong *)(param_1 + 8);
    do {
      plVar3 = (longlong *)*plVar4;
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
      plVar4 = plVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141214ba0 FUN_141214ba0 body=624 status=ok
// SIG undefined FUN_141214ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_141214ba0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 uVar9;
  longlong *plVar10;
  bool bVar11;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar8 = *(longlong **)(param_1 + 0x10);
  if (plVar8 == (longlong *)0x0) {
LAB_141214d03:
    uVar9 = 0;
    plVar8 = (longlong *)0x0;
  }
  else {
    iVar5 = (int)plVar8[1];
    do {
      if (iVar5 == 0) goto LAB_141214d03;
      LOCK();
      iVar4 = (int)plVar8[1];
      bVar11 = iVar5 == iVar4;
      if (bVar11) {
        *(int *)(plVar8 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar11);
    uVar9 = *(undefined8 *)(param_1 + 8);
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  plVar6 = (longlong *)FUN_14001cc68(0x140,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b97d3c0;
  plVar1 = plVar6 + 2;
  uVar3 = *(undefined1 *)(param_3 + 0x24);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_48 = uVar9;
  local_40 = plVar8;
  FUN_141214e12(plVar1,&local_48,uVar3);
  plVar10 = local_40;
  plVar6[2] = (longlong)&PTR_FUN_14b7bd210;
  plVar6[0x26] = 0;
  plVar6[0x27] = 0;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar7 = local_40 + 1;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)*plVar7 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
  if (((plVar6[3] == 0) || (plVar6[4] == 0)) || (*(int *)(plVar6[4] + 8) < 1)) {
    if (plVar6 == (longlong *)0x0) {
      _DAT_00000018 = 0x10;
      plVar10 = (longlong *)&DAT_00000020;
      plVar7 = _DAT_00000020;
      if (_DAT_00000020 != (longlong *)0x0) {
LAB_141214dad:
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        *plVar10 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_141214cae;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar6;
      goto LAB_141214cc9;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[3] = (longlong)plVar1;
    if ((longlong *)plVar6[4] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[4] != (longlong *)0x0) {
        plVar10 = plVar6 + 4;
        plVar7 = (longlong *)plVar6[4];
        goto LAB_141214dad;
      }
      plVar6[4] = (longlong)plVar6;
    }
LAB_141214cae:
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
  }
  else {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_141214cc9;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
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
LAB_141214cc9:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar8 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141214e12 FUN_141214e12 body=224 status=ok
// SIG undefined FUN_141214e12(void)

void FUN_141214e12(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_14b35c300;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar2 = DAT_14c8464e8;
  param_1[0xd] = DAT_14c8464e0;
  param_1[0xe] = uVar2;
  param_1[0xf] = DAT_14c8464f0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_14cb7bd70;
  *(undefined8 *)((longlong)param_1 + 0xb4) = DAT_14cb7bd68;
  param_1[0x18] = DAT_14cb7bd80;
  *(undefined4 *)(param_1 + 0x19) = DAT_14cb7bd88;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined8 *)((longlong)param_1 + 0xf9) = 0;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0;
  param_1[0x23] = 2;
  return;
}



// FUNCTION 141214efa FUN_141214efa body=824 status=ok
// SIG undefined FUN_141214efa(void)

undefined8 FUN_141214efa(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  uint local_40 [6];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar3 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar3,0);
  local_48 = DAT_14cb24578;
  local_50 = DAT_14cb24570;
  local_58 = param_1;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_40[0]) {
            if ((((lVar1 != 0) &&
                 (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
                ((byte *)*puVar5 != (byte *)0x0)) && ((*(byte *)*puVar5 & 0x40) == 0))
            goto LAB_141214fc7;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_141214fc7:
  FUN_141215234(&local_58,puVar5,2);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_48 = DAT_14cb24590;
  local_50 = DAT_14cb24588;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_40[0]) {
            if (((lVar1 != 0) &&
                (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
               (((byte *)*puVar5 != (byte *)0x0 && ((*(byte *)*puVar5 & 0x40) == 0))))
            goto LAB_14121507b;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_14121507b:
  FUN_141215234(&local_58,puVar5,0);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  local_48 = DAT_14cb245a8;
  local_50 = DAT_14cb245a0;
  FUN_1448075d0(local_40);
  pbVar2 = (byte *)*param_2;
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar4 = &DAT_14c9a1288;
    }
    else {
      plVar4 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar4[2] != *(int *)((longlong)plVar4 + 0x3c)) {
      plVar6 = plVar4 + 8;
      if ((longlong *)plVar4[9] != (longlong *)0x0) {
        plVar6 = (longlong *)plVar4[9];
      }
      iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar4[10] - 1U & local_40[0]) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *plVar4 + (longlong)iVar7 * 0x40;
          if (*(uint *)(*plVar4 + (longlong)iVar7 * 0x40) == local_40[0]) {
            if (((lVar1 != 0) &&
                (puVar5 = (undefined8 *)(lVar1 + 0x28), puVar5 != (undefined8 *)0x0)) &&
               (((byte *)*puVar5 != (byte *)0x0 && ((*(byte *)*puVar5 & 0x40) == 0))))
            goto LAB_14121512c;
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x38);
        } while (iVar7 != -1);
      }
    }
  }
  puVar5 = &DAT_14c9a1308;
LAB_14121512c:
  FUN_141215234(&local_58,puVar5,1);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return 1;
}



// FUNCTION 141215234 FUN_141215234 body=613 status=ok
// SIG undefined FUN_141215234(void)

void FUN_141215234(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  uint uVar1;
  byte *pbVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c9;
  longlong local_c8;
  undefined1 local_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined8 *local_b0;
  undefined1 *local_a8;
  undefined1 local_9c [4];
  undefined8 *local_98;
  undefined4 local_90;
  longlong local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  pbVar2 = (byte *)*param_2;
  if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 0x6b) == 2)) {
    lVar3 = *param_1;
    local_c8 = 0;
    local_c0 = 0;
    uVar1 = *(uint *)(*(undefined8 **)(pbVar2 + 8) + 2);
    uVar4 = **(undefined8 **)(pbVar2 + 8);
    local_b8 = uVar1;
    if (uVar1 == 0) {
      local_b4 = 0;
      uVar9 = 0;
    }
    else {
      FUN_145de92b4(&local_c8,uVar1,0);
      FUN_14709b573(local_c8,uVar4,uVar1);
      uVar9 = (ulonglong)local_b8;
      if (0 < (int)local_b8) {
        lVar10 = 0;
        lVar11 = 0;
        do {
          lVar8 = local_c8;
          local_90 = DAT_14cb21030;
          local_98 = DAT_14cb21028;
          FUN_1448075d0(&local_70,&local_98);
          puVar7 = &local_70;
          if (*(longlong *)(lVar8 + lVar10) != 0) {
            puVar7 = (undefined8 *)FUN_140625092(*(longlong *)(lVar8 + lVar10),&local_70);
          }
          FUN_1447a97f4(&local_98,puVar7);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          local_b0 = DAT_14cb21028;
          local_a8 = (undefined1 *)CONCAT44(local_a8._4_4_,DAT_14cb21030);
          FUN_1448075d0(&local_70,&local_b0);
          iVar5 = (int)local_98;
          iVar6 = (int)local_70;
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          if (iVar5 != iVar6) {
            local_c9 = param_3;
            if (DAT_14c947fe0 == 0) {
              lVar8 = FUN_14001cc68(0x140,0x10);
              FUN_1456b2032(lVar8);
              DAT_14c947fe0 = lVar8;
            }
            FUN_140045924(DAT_14c947fe0,&local_d8,&local_98,1);
            local_70 = local_d8;
            local_68 = 0xf;
            local_60 = 0;
            local_a8 = &local_c9;
            local_b0 = &local_70;
            FUN_146159b16(lVar3 + 0x38,local_9c,&local_b0);
          }
          if (local_80 != 0) {
            FUN_1400020a8();
          }
          lVar11 = lVar11 + 1;
          uVar9 = (ulonglong)(int)local_b8;
          lVar10 = lVar10 + 0x10;
        } while (lVar11 < (longlong)uVar9);
      }
    }
    FUN_14474dad8(local_c8,uVar9);
    if (local_c8 != 0) {
      FUN_14005b77c(local_c0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14121549a FUN_14121549a body=669 status=ok
// SIG undefined FUN_14121549a(void)

void FUN_14121549a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  undefined8 *puVar7;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_2c);
            goto LAB_141215584;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_2c,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_2c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_2c,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_2c);
  }
LAB_141215584:
  iVar5 = local_2c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  cVar6 = (**(code **)(*param_1 + 0x480))(param_1,local_2c != 0);
  if (cVar6 == '\0') {
    FUN_1468998ea(L"ServerClearCurrentInteractable_Validate");
  }
  else {
    (**(code **)(*param_1 + 0x488))(param_1,iVar5 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121574a FUN_14121574a body=312 status=ok
// SIG undefined FUN_14121574a(void)

void FUN_14121574a(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  longlong *plVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((param_1[0x15] == 0) || (*(char *)(param_1[0x15] + 0x178) != '\x03')) goto LAB_141215794;
  if ((param_1[0x27] == 0) || (cVar1 = FUN_144729dda(param_1 + 0x26), cVar1 == '\0')) {
    plVar2 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)param_1[0x27];
  }
  if ((plVar2 == param_2) || ((param_2 != (longlong *)0x0 && (param_1[0x27] != 0))))
  goto LAB_141215794;
  if (param_2 == (longlong *)0x0) {
    local_38 = 0;
LAB_141215833:
    local_30 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)FUN_148e0511a(param_1);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar1 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar1 == '\0')) goto LAB_141215794;
    local_30 = param_2;
    local_38 = (**(code **)(*param_2 + 8))(param_2);
    if ((local_38 == 0) || (DAT_14c950c29 == '\0')) {
      if (local_38 == 0) goto LAB_141215833;
    }
    else {
      FUN_1456cec3c(local_38);
    }
  }
  cVar1 = FUN_148e04e1a(param_1);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x478))(param_1,&local_38,param_3,param_4);
  }
  FUN_148cb9ef8(param_1,&local_38,param_3,param_4);
LAB_141215794:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141215884 FUN_141215884 body=228 status=ok
// SIG undefined FUN_141215884(void)

longlong FUN_141215884(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbc0170 == 0) {
    local_30 = &local_10;
    local_10 = FUN_14096c2dc;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1465aab14;
    local_38 = &LAB_148cb4bfb;
    local_40 = FUN_1418d361c;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x2920;
    FUN_14081cfa3(L"/Script/OakGame",L"SoloTravelStationObject",&DAT_14cbc0170,FUN_146615caa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbc0170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141215969 FUN_141215969 body=132 status=ok
// SIG undefined FUN_141215969(void)

void FUN_141215969(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_38 [32];
  undefined2 *local_18;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_1463fde68(&local_18,param_1,param_2,param_3);
  puVar2 = &DAT_149dfb77a;
  if (DAT_14c872ad0 != 0) {
    puVar2 = DAT_14c872ac8;
  }
  puVar1 = &DAT_149dfb77a;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FUN_14166158f(puVar1,puVar2,0x1000000,0);
  if (local_18 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412159ee FUN_1412159ee body=271 status=ok
// SIG undefined FUN_1412159ee(void)

bool FUN_1412159ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x43d8) == 0) {
    return false;
  }
  lVar3 = *(longlong *)(param_1 + 0x43d8) + 0x20;
  lVar1 = FUN_14485c28e(lVar3);
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_14485c28e(lVar3);
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar2 = FUN_140153468(lVar3);
  if (lVar2 == 0) {
    return false;
  }
  if ((*(byte *)(lVar3 + 0x298) & 2) != 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x110) == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      return false;
    }
    lVar3 = param_1 + 0x3210;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(lVar3);
  if (lVar1 == 0) {
    return false;
  }
  if (lVar3 == 0) {
    return false;
  }
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) != '\x01') {
      lVar3 = 0;
      goto LAB_141215acf;
    }
    param_1 = param_1 + 0x3210;
  }
  else {
    param_1 = *(longlong *)(param_1 + 0x3170) + 0xd8;
  }
  lVar3 = FUN_140153468(param_1);
LAB_141215acf:
  return lVar3 == lVar1;
}



// FUNCTION 141215afe FUN_141215afe body=36 status=ok
// SIG undefined FUN_141215afe(void)

undefined8 FUN_141215afe(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"%llu",*(undefined8 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 141215b22 FUN_141215b22 body=100 status=ok
// SIG undefined FUN_141215b22(void)

void FUN_141215b22(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b438dd0;
    FUN_141215b86(param_1[6],*(undefined4 *)(param_1 + 7));
    if (param_1[6] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 141215b86 FUN_141215b86 body=40 status=ok
// SIG undefined FUN_141215b86(void)

void FUN_141215b86(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1489bd2dc(param_1);
    param_1 = param_1 + 0x38;
  }
  return;
}



// FUNCTION 141215bae FUN_141215bae body=299 status=ok
// SIG undefined FUN_141215bae(void)

void FUN_141215bae(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  int *piVar5;
  
  if (param_3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x30);
    piVar5 = (int *)(param_2 + 0x38);
    do {
      puVar4[-6] = &PTR_FUN_14b438dd0;
      puVar4[-5] = 0;
      iVar1 = piVar5[-10];
      pvVar2 = *(void **)(piVar5 + -0xc);
      *(int *)(puVar4 + -4) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + -0x1c) = 0;
      }
      else {
        FUN_1446dd670(puVar4 + -5,iVar1,0);
        memcpy((void *)puVar4[-5],pvVar2,(longlong)iVar1 * 2);
      }
      puVar4[-3] = 0;
      iVar1 = piVar5[-6];
      pvVar2 = *(void **)(piVar5 + -8);
      *(int *)(puVar4 + -2) = iVar1;
      if ((longlong)iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + -0xc) = 0;
      }
      else {
        FUN_1446dd670(puVar4 + -3,iVar1,0);
        memcpy((void *)puVar4[-3],pvVar2,(longlong)iVar1 * 2);
      }
      *(int *)(puVar4 + -1) = piVar5[-4];
      *puVar4 = 0;
      iVar1 = *piVar5;
      uVar3 = *(undefined8 *)(piVar5 + -2);
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        FUN_148fba74a(puVar4,iVar1,0);
        FUN_148fba7b9(*puVar4,uVar3);
      }
      puVar4 = puVar4 + 8;
      piVar5 = piVar5 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141215cda FUN_141215cda body=196 status=ok
// SIG undefined FUN_141215cda(void)

void FUN_141215cda(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((longlong)(int)param_1[1] == 0) {
    plVar3 = (longlong *)0x0;
  }
  else {
    plVar2 = (longlong *)*param_1;
    lVar4 = (longlong)(int)param_1[1] * 0x18;
    do {
      plVar3 = plVar2;
      if (*plVar2 == param_2) break;
      plVar2 = plVar2 + 3;
      lVar4 = lVar4 + -0x18;
      plVar3 = (longlong *)0x0;
    } while (lVar4 != 0);
  }
  if ((longlong)*(int *)(param_3 + 1) != 0) {
    plVar2 = (longlong *)*param_3;
    lVar4 = (longlong)*(int *)(param_3 + 1) << 4;
    do {
      if (*plVar2 != 0) {
        if (plVar3 == (longlong *)0x0) {
          iVar1 = (int)param_1[1];
          *(uint *)(param_1 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
            FUN_141499410(param_1,iVar1);
          }
          plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x18);
          *plVar3 = param_2;
          plVar3[1] = 0;
          plVar3[2] = 0;
        }
        FUN_141215d9e(plVar3 + 1,plVar2);
      }
      plVar2 = plVar2 + 2;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 141215d9e FUN_141215d9e body=131 status=ok
// SIG undefined FUN_141215d9e(void)

ulonglong FUN_141215d9e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  uVar5 = (ulonglong)iVar2;
  if (uVar5 != 0) {
    lVar6 = 0;
    iVar4 = 0;
    do {
      if ((*(longlong *)(lVar3 + lVar6) == *param_2) &&
         (*(longlong *)(lVar3 + 8 + lVar6) == param_2[1])) {
        if (iVar4 != 1) {
          uVar5 = (ulonglong)(uint)-iVar4;
          goto LAB_141215e02;
        }
        break;
      }
      iVar4 = iVar4 + -1;
      lVar6 = lVar6 + 0x10;
    } while (uVar5 << 4 != lVar6);
  }
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_1401d5364(param_1,iVar2);
    lVar3 = *param_1;
  }
  lVar6 = param_2[1];
  plVar1 = (longlong *)(lVar3 + uVar5 * 0x10);
  *plVar1 = *param_2;
  plVar1[1] = lVar6;
LAB_141215e02:
  return uVar5 & 0xffffffff;
}



// FUNCTION 141215e22 FUN_141215e22 body=10 status=ok
// SIG undefined FUN_141215e22(void)

undefined8 * FUN_141215e22(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 141215e2c FUN_141215e2c body=428 status=ok
// SIG undefined FUN_141215e2c(void)

void FUN_141215e2c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_141215fea(param_1 + 0x40,param_1);
  FUN_141215fea(param_1 + 0x1b8,param_1);
  FUN_1412163f0(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab63ac);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x330) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x338);
  if (local_28 == plVar3) {
LAB_141215f4f:
    plVar3 = local_28;
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
  else {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x338) = plVar1;
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
      goto LAB_141215f4f;
    }
  }
  FUN_1412167f8(*(longlong *)(param_1 + 0x28) + 0x430,&local_30,DAT_14cab63b0);
  plVar1 = local_28;
  *(undefined8 *)(param_1 + 0x340) = local_30;
  local_30 = 0;
  plVar3 = *(longlong **)(param_1 + 0x348);
  if (local_28 != plVar3) {
    local_28 = (longlong *)0x0;
    *(longlong **)(param_1 + 0x348) = plVar1;
    if (plVar3 == (longlong *)0x0) goto LAB_141215f0e;
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
  plVar3 = local_28;
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
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
LAB_141215f0e:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141215fea FUN_141215fea body=1028 status=ok
// SIG undefined FUN_141215fea(void)

void FUN_141215fea(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined8 *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(char *)(param_1 + 0x168) != '\0') goto LAB_141216265;
  *(undefined1 *)(param_1 + 0x168) = 1;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x170) = 0;
    iVar3 = 0;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0xc);
    *(uint *)(param_1 + 0x170) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar3 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar3 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar3 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar3 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar3 = iVar5;
      }
    }
  }
  *(int *)(param_1 + 0x174) = iVar3;
  lVar6 = *(longlong *)(param_2 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a4d7700;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a4d84b0;
  local_48[3] = param_1;
  local_48[4] = FUN_140cda74c;
  FUN_1409960cc(lVar6 + 0x658,local_50,&local_48);
  if (local_40 == 0) {
LAB_14121610a:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_14121610a;
  }
  lVar6 = *(longlong *)(param_2 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a4d7700;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a4d84b0;
  local_48[3] = param_1;
  local_48[4] = FUN_140cdaae8;
  FUN_1409960cc(lVar6 + 0x670,local_50,&local_48);
  if (local_40 == 0) {
LAB_1412161ab:
    if (local_48 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_48 != (undefined8 *)0x0) {
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
    goto LAB_1412161ab;
  }
  lVar6 = *(longlong *)(param_2 + 0x28);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  local_40 = 3;
  *local_48 = &PTR_LAB_14a481140;
  LOCK();
  UNLOCK();
  lVar4 = DAT_14c758608 + 1;
  lVar2 = DAT_14c758608 + 1;
  if (lVar4 == 0) {
    LOCK();
    UNLOCK();
    lVar4 = DAT_14c758608 + 2;
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  local_48[2] = lVar4;
  *local_48 = &PTR_FUN_14a4d8520;
  local_48[3] = param_1;
  local_48[4] = FUN_140fd0e00;
  FUN_140996264(lVar6 + 0x688,local_50,&local_48);
  if (local_40 != 0) {
    if (local_48 == (undefined8 *)0x0) goto LAB_141216265;
    (**(code **)*local_48)(local_48,0);
    FUN_1446efa72(&local_48,0,0,0x10);
    local_40 = 0;
  }
  if (local_48 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_141216265:
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412163f0 FUN_1412163f0 body=1004 status=ok
// SIG undefined FUN_1412163f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412163f0(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0xf0);
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = (ulonglong)uVar2;
    do {
      uVar11 = (int)(uVar10 >> 1) + (int)uVar8;
      uVar9 = (uint)uVar10;
      if (*(uint *)(lVar3 + (ulonglong)uVar11 * 0x18) < param_3) {
        uVar8 = (ulonglong)(uVar11 + (uVar9 & 1));
      }
      uVar10 = uVar10 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar8 < (int)uVar2) && (*(uint *)(lVar3 + uVar8 * 0x18) <= param_3)) {
    lVar3 = lVar3 + uVar8 * 0x18;
    plVar6 = (longlong *)(lVar3 + 8);
    if (plVar6 == (longlong *)0x0) goto LAB_14121645d;
    lVar5 = *plVar6;
    plVar6 = *(longlong **)(lVar3 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_14121645f;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    lVar5 = *param_2;
  }
  else {
LAB_14121645d:
    lVar5 = 0;
LAB_14121645f:
    *param_2 = lVar5;
    param_2[1] = 0;
  }
  if (lVar5 != 0) goto LAB_1412165ec;
  plVar6 = (longlong *)FUN_14001cc68(0xe8);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4d8330;
  memset(plVar6 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  plVar6[0x13] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  *(undefined8 *)((longlong)plVar6 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar6 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xcc) = 0xffffffff00000000;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar13 = plVar6 + 2;
  *plVar13 = (longlong)&PTR_FUN_14a4d8350;
  if (plVar13 == (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) goto LAB_1412166a5;
LAB_141216553:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar6 == plVar13) {
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      param_2[1] = (longlong)plVar6;
      if (plVar13 != (longlong *)0x0) {
        bVar4 = false;
        goto LAB_14121670d;
      }
    }
LAB_141216575:
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar13;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar12 = plVar6 + 4;
          plVar7 = (longlong *)plVar6[4];
          goto LAB_14121668d;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_141216548:
      LOCK();
      plVar12 = plVar6 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_141216553;
    }
    _DAT_00000018 = 0x10;
    plVar12 = (longlong *)&DAT_00000020;
    plVar7 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_14121668d:
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *plVar12 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) goto LAB_141216548;
    }
LAB_1412166a5:
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar13 != (longlong *)0x0) {
      param_2[1] = (longlong)plVar6;
      bVar4 = true;
LAB_14121670d:
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      if (!bVar4) goto LAB_141216575;
    }
  }
  plVar6 = (longlong *)*param_2;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3,param_1);
  plVar13 = (longlong *)param_2[1];
  if (plVar13 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_50 = plVar13;
  }
  local_58 = plVar6;
  local_44 = param_3;
  FUN_140dd6482(param_1 + 0xe8,&local_44,&local_58);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar13 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1412165ec:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1412167de FUN_1412167de body=25 status=ok
// SIG undefined FUN_1412167de(void)

void FUN_1412167de(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 1412167f8 FUN_1412167f8 body=1004 status=ok
// SIG undefined FUN_1412167f8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_1412167f8(longlong param_1,longlong *param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  uint local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *(uint *)(param_1 + 0xf0);
  lVar3 = *(longlong *)(param_1 + 0xe8);
  uVar8 = 0;
  if (0 < (int)uVar2) {
    uVar10 = (ulonglong)uVar2;
    do {
      uVar11 = (int)(uVar10 >> 1) + (int)uVar8;
      uVar9 = (uint)uVar10;
      if (*(uint *)(lVar3 + (ulonglong)uVar11 * 0x18) < param_3) {
        uVar8 = (ulonglong)(uVar11 + (uVar9 & 1));
      }
      uVar10 = uVar10 >> 1;
    } while (1 < uVar9);
  }
  if (((int)uVar8 < (int)uVar2) && (*(uint *)(lVar3 + uVar8 * 0x18) <= param_3)) {
    lVar3 = lVar3 + uVar8 * 0x18;
    plVar6 = (longlong *)(lVar3 + 8);
    if (plVar6 == (longlong *)0x0) goto LAB_141216865;
    lVar5 = *plVar6;
    plVar6 = *(longlong **)(lVar3 + 0x10);
    if (plVar6 == (longlong *)0x0) goto LAB_141216867;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = lVar5;
    param_2[1] = (longlong)plVar6;
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    lVar5 = *param_2;
  }
  else {
LAB_141216865:
    lVar5 = 0;
LAB_141216867:
    *param_2 = lVar5;
    param_2[1] = 0;
  }
  if (lVar5 != 0) goto LAB_1412169f4;
  plVar6 = (longlong *)FUN_14001cc68(0xe8);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14a4d83f0;
  memset(plVar6 + 3,0,0xc0);
  *(undefined8 *)((longlong)plVar6 + 0x54) = 0xffffffff00000080;
  plVar6[0x13] = 0;
  plVar6[0xf] = 0;
  plVar6[0x10] = 0;
  *(undefined8 *)((longlong)plVar6 + 0xa4) = 0xffffffff00000080;
  *(undefined8 *)((longlong)plVar6 + 0xac) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xb4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xbc) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xc4) = 0;
  *(undefined8 *)((longlong)plVar6 + 0xcc) = 0xffffffff00000000;
  plVar6[0x1b] = 0;
  plVar6[0x1c] = 0;
  plVar13 = plVar6 + 2;
  *plVar13 = (longlong)&PTR_FUN_14a4d8410;
  if (plVar13 == (longlong *)0x0) {
    if (plVar6 == (longlong *)0x0) goto LAB_141216aad;
LAB_14121695b:
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar6 == plVar13) {
      LOCK();
      plVar13 = plVar6 + 1;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)*plVar13 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    else {
      param_2[1] = (longlong)plVar6;
      if (plVar13 != (longlong *)0x0) {
        bVar4 = false;
        goto LAB_141216b15;
      }
    }
LAB_14121697d:
    LOCK();
    plVar13 = plVar6 + 1;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)*plVar13 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  else {
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      plVar6[3] = (longlong)plVar13;
      if ((longlong *)plVar6[4] != plVar6) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        if ((longlong *)plVar6[4] != (longlong *)0x0) {
          plVar12 = plVar6 + 4;
          plVar7 = (longlong *)plVar6[4];
          goto LAB_141216a95;
        }
        plVar6[4] = (longlong)plVar6;
      }
LAB_141216950:
      LOCK();
      plVar12 = plVar6 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
      goto LAB_14121695b;
    }
    _DAT_00000018 = 0x10;
    plVar12 = (longlong *)&DAT_00000020;
    plVar7 = _DAT_00000020;
    if (_DAT_00000020 != (longlong *)0x0) {
LAB_141216a95:
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))();
      }
      *plVar12 = (longlong)plVar6;
      if (plVar6 != (longlong *)0x0) goto LAB_141216950;
    }
LAB_141216aad:
    *param_2 = (longlong)plVar13;
    plVar13 = (longlong *)param_2[1];
    if (plVar13 != (longlong *)0x0) {
      param_2[1] = (longlong)plVar6;
      bVar4 = true;
LAB_141216b15:
      LOCK();
      plVar12 = plVar13 + 1;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)*plVar12 == 0) {
        (**(code **)*plVar13)(plVar13);
        LOCK();
        piVar1 = (int *)((longlong)plVar13 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar13 + 0x10))(plVar13);
        }
      }
      if (!bVar4) goto LAB_14121697d;
    }
  }
  plVar6 = (longlong *)*param_2;
  (**(code **)(*plVar6 + 0x10))(plVar6,param_3,param_1);
  plVar13 = (longlong *)param_2[1];
  if (plVar13 == (longlong *)0x0) {
    local_50 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    local_50 = plVar13;
  }
  local_58 = plVar6;
  local_44 = param_3;
  FUN_140dd6482(param_1 + 0xe8,&local_44,&local_58);
  plVar6 = local_50;
  if (local_50 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_50 + 1;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)*plVar12 == 0) {
      (**(code **)*local_50)(local_50);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar13 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
LAB_1412169f4:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 141216be6 FUN_141216be6 body=25 status=ok
// SIG undefined FUN_141216be6(void)

void FUN_141216be6(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xb0) = param_3;
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  FUN_140dd6aee(param_1 + 200);
  return;
}



// FUNCTION 141216c00 FUN_141216c00 body=645 status=ok
// SIG undefined FUN_141216c00(void)

void FUN_141216c00(undefined8 param_1,undefined8 *param_2)

{
  short *psVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  wchar_t *local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_145842fde();
  if ((longlong)*(int *)(param_2 + 1) != 0) {
    psVar1 = (short *)*param_2;
    lVar3 = (longlong)*(int *)(param_2 + 1) * 0x18;
    do {
      if (*psVar1 == 0x10) {
        if (psVar1 != (short *)0x0) {
          psVar1[2] = 0;
          psVar1[3] = 0;
        }
        break;
      }
      psVar1 = psVar1 + 0xc;
      lVar3 = lVar3 + -0x18;
    } while (lVar3 != 0);
  }
  local_48 = 0;
  local_58 = 1;
  local_50 = 1;
  local_78 = L"StableIndex";
  puStack_70 = &DAT_10000001c;
  FUN_140c2c993(&local_78,param_2);
  local_68 = 0;
  puStack_70 = (undefined1 *)((ulonglong)puStack_70 & 0xffffffffffffff00);
  local_78 = (wchar_t *)0x4;
  FUN_1446f470e(&local_80,L"ReplicatedCharacterDef",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_80);
  FUN_140f1fa23(uVar2,param_2,&local_78);
  FUN_1446f470e(&local_78,L"SeamlessTravelTransferRepKey",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar2,param_2,&local_78);
  FUN_1446f470e(&local_78,L"PlatformUniqueId",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar2,param_2,&local_78);
  FUN_1446f470e(&local_78,L"bIsInRealtimeGameplay",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar2,param_2,&local_78);
  FUN_1446f470e(&local_78,L"ActiveCharGuid",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar2,param_2,&local_78);
  FUN_1446f470e(&local_78,L"PlayerGroupState",1);
  uVar2 = FUN_140082f10();
  FUN_140082f10();
  uVar2 = FUN_140f1fabf(uVar2,local_78);
  local_68 = 0;
  local_78 = (wchar_t *)0x0;
  puStack_70 = (undefined1 *)0x0;
  FUN_140f1fa23(uVar2,param_2,&local_78);
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141216e86 FUN_141216e86 body=415 status=ok
// SIG undefined FUN_141216e86(void)

void FUN_141216e86(int param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xcb0);
  if ((int)uVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xcb4) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141216f33;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141216f33:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  *(int *)(lVar4 + 0xcb4) = (int)uVar7;
  FUN_1446f8d3c(lVar4 + 0xca8,param_1,uVar7,8,8);
  return;
}



// FUNCTION 141217026 FUN_141217026 body=265 status=ok
// SIG undefined FUN_141217026(void)

void FUN_141217026(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78 [16];
  longlong *local_68;
  undefined4 local_60;
  longlong local_58 [2];
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14101eafe();
  FUN_1400021e4(param_1 + 0x98,local_58);
  FUN_141217130(local_48,local_58);
  FUN_1458433a4(param_2,local_48);
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0xa8) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    lVar2 = (longlong)*(int *)(param_1 + 0xa8) * 0x18;
    do {
      local_68 = *(longlong **)(lVar1 + 8);
      if (local_68 != (longlong *)0x0) {
        (**(code **)(*local_68 + 8))();
      }
      local_60 = *(undefined4 *)(lVar1 + 0x10);
      FUN_1400021e4(lVar1,local_58);
      FUN_141217130(local_78,local_58);
      FUN_14100d696(param_2,local_78,&local_68);
      if (local_58[0] != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 0x18;
      lVar2 = lVar2 + -0x18;
    } while (lVar2 != 0);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141217130 FUN_141217130 body=174 status=ok
// SIG undefined FUN_141217130(void)

undefined8 * FUN_141217130(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined2 *_Src;
  uint uVar7;
  
  _Src = (undefined2 *)*param_2;
  iVar2 = *(int *)(param_2 + 1);
  uVar6 = (longlong)iVar2 * 2;
  do {
    if (uVar6 == 0) goto LAB_1412171a4;
    uVar1 = uVar6 - 2;
    lVar3 = uVar6 - 2;
    uVar6 = uVar1;
  } while (*(short *)((longlong)_Src + lVar3) != 0x3a);
  iVar4 = (int)(uVar1 >> 1);
  if (iVar4 == -1) {
LAB_1412171a4:
    *param_1 = 0;
    *(int *)(param_1 + 1) = iVar2;
    if (iVar2 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar2,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar2 * 2);
    }
  }
  else {
    uVar5 = iVar4 + 1;
    uVar7 = iVar2 - 1;
    if (iVar2 == 0) {
      _Src = &DAT_149dfb77a;
      uVar7 = 0;
    }
    if ((int)uVar7 <= (int)uVar5) {
      uVar5 = uVar7;
    }
    uVar6 = (ulonglong)uVar5;
    if ((int)uVar5 < 1) {
      uVar6 = 0;
    }
    FUN_14006620a(param_1,_Src + uVar6,uVar7 - (int)uVar6);
  }
  return param_1;
}



// FUNCTION 1412171de FUN_1412171de body=31 status=ok
// SIG undefined FUN_1412171de(void)

void FUN_1412171de(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x30))();
  FUN_14053c012(lVar1 + 0x60,param_3);
  return;
}



// FUNCTION 1412171fe FUN_1412171fe body=58 status=ok
// SIG undefined FUN_1412171fe(void)

void FUN_1412171fe(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b222ae0;
  param_1[1] = 0;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x49) = 0;
  *(undefined8 *)((longlong)param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0xffffffff;
  return;
}



// FUNCTION 141217238 FUN_141217238 body=65 status=ok
// SIG undefined FUN_141217238(void)

undefined8
FUN_141217238(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x180))();
  lVar2 = FUN_14121727a(uVar1);
  if (lVar2 != 0) {
    uVar1 = FUN_1412172ac(lVar2,param_4,param_5);
    return uVar1;
  }
  return 0;
}



// FUNCTION 14121727a FUN_14121727a body=50 status=ok
// SIG undefined FUN_14121727a(void)

undefined8 FUN_14121727a(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140149a73(param_1,0);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_1401499e8(lVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001412172a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1412172ac FUN_1412172ac body=1466 status=ok
// SIG undefined FUN_1412172ac(void)

undefined8 FUN_1412172ac(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  wchar_t *pwVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  double dVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  size_t sVar13;
  wchar_t *pwVar14;
  undefined2 *puVar15;
  undefined2 *puVar16;
  uint uVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_3e8 [32];
  undefined2 *local_3c8;
  double local_3c0;
  undefined2 *local_3b8;
  undefined2 *local_3b0;
  undefined2 *local_3a8;
  undefined1 local_3a0 [8];
  undefined2 *local_398;
  longlong *plStack_390;
  undefined1 local_380 [8];
  undefined2 *local_378;
  int local_370;
  undefined2 *local_368;
  int local_360;
  longlong *local_358;
  undefined8 local_350;
  wchar_t *local_348;
  undefined8 local_340;
  uint local_338;
  undefined4 local_334;
  undefined2 *local_330;
  int local_328;
  longlong local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  wchar_t *local_298;
  wchar_t *pwStack_290;
  undefined1 *local_288;
  uint local_280;
  undefined4 local_27c;
  wchar_t local_278 [256];
  undefined1 local_78 [8];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_3e8;
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar17 = *(uint *)(param_1 + 0x10);
    uVar10 = 0;
    if (((int)uVar17 < 0) || (DAT_14c9647dc <= (int)uVar17)) goto LAB_1412174a7;
    plVar8 = (longlong *)
             ((ulonglong)((uVar17 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar17 >> 0x10) * 8));
    if ((plVar8 != (longlong *)0x0) &&
       (((int)plVar8[2] == *(int *)(param_1 + 0x14) && ((*(uint *)(plVar8 + 1) & 0x10200000) == 0)))
       ) {
      if ((*(uint *)(plVar8 + 1) & 0x10200000) == 0) {
        lVar11 = *plVar8;
      }
      else {
        lVar11 = 0;
      }
      if ((*(longlong *)(lVar11 + 0x30) != 0) &&
         (lVar11 = *(longlong *)(*(longlong *)(lVar11 + 0x30) + 0x360), lVar11 != 0)) {
        local_298 = (wchar_t *)0x0;
        pwStack_290 = (wchar_t *)0x0;
        FUN_14009b010(&local_298,2,0);
        if (param_3 != &DAT_14c9a1308) {
          if (pwStack_290 != (wchar_t *)0x0) {
            LOCK();
            *(int *)((longlong)pwStack_290 + 8) = (int)*(longlong *)((longlong)pwStack_290 + 8) + 1;
            UNLOCK();
          }
          plVar8 = (longlong *)param_3[1];
          *param_3 = local_298;
          param_3[1] = pwStack_290;
          if (plVar8 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar8 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar8)(plVar8);
              LOCK();
              piVar4 = (int *)((longlong)plVar8 + 0xc);
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (*piVar4 == 0) {
                (**(code **)(*plVar8 + 0x10))(plVar8);
              }
            }
          }
        }
        pwVar2 = pwStack_290;
        if (pwStack_290 != (wchar_t *)0x0) {
          LOCK();
          plVar8 = (longlong *)((longlong)pwStack_290 + 8);
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (*(code *)**(undefined8 **)pwStack_290)(pwStack_290);
            LOCK();
            piVar4 = (int *)((longlong)pwVar2 + 0xc);
            *piVar4 = *piVar4 + -1;
            UNLOCK();
            if (*piVar4 == 0) {
              (**(code **)(*(longlong *)pwVar2 + 0x10))(pwVar2);
            }
          }
        }
        plVar8 = *(longlong **)(lVar11 + 0x178);
        if (plVar8 == (longlong *)0x0) {
          fVar19 = 0.0;
        }
        else {
          dVar6 = (double)(**(code **)(*plVar8 + 0x640))();
          fVar19 = (float)dVar6;
        }
        plVar8 = (longlong *)(param_1 + 0x18);
        pwVar2 = (wchar_t *)(param_1 + 0x28);
        local_298 = (wchar_t *)&DAT_100000000;
        local_288 = &DAT_ffffffff;
        local_280 = 0;
        uVar17 = 0;
        pwStack_290 = pwVar2;
        if (*(int *)(param_1 + 0x40) != 0) {
          FUN_1449c0562(&local_298);
          uVar17 = *(uint *)(param_1 + 0x40);
        }
        local_340 = local_288;
        puVar7 = local_340;
        local_338 = local_280;
        local_334 = local_27c;
        local_350 = local_298;
        local_348 = pwStack_290;
        local_340._4_4_ = (uint)((ulonglong)local_288 >> 0x20);
        uVar9 = (ulonglong)local_340._4_4_;
        bVar18 = local_340._4_4_ != uVar17;
        local_358 = plVar8;
        local_340 = puVar7;
        if ((bVar18) || (pwStack_290 != pwVar2)) {
          do {
            lVar11 = *local_358;
            lVar12 = (longlong)(int)uVar9 * 0x90;
            if (*(char *)(lVar11 + 0x5d + lVar12) == '\x01') {
              lVar5 = lVar11 + lVar12;
              fVar20 = *(float *)(lVar5 + 0x58) - (fVar19 - *(float *)(lVar5 + 0x80));
              if (0.0 < fVar20) {
                local_298 = local_278;
                local_288 = local_78;
                local_280 = local_280 & 0xffffff00;
                pwStack_290 = local_298;
                FUN_140b126e4(lVar11 + lVar12 + 0x10,&local_368);
                FUN_140c540b4(&local_368,L"registry.",9,1);
                pwVar14 = L"no_object";
                if (*(char *)(lVar5 + 0x5c) == '\x01') {
                  pwVar14 = L"object";
                }
                FUN_140056680(&local_378,pwVar14);
                local_3a8 = &DAT_149dfb77a;
                if (local_370 != 0) {
                  local_3a8 = local_378;
                }
                FUN_1403a0728(lVar5 + 0x48,local_380);
                FUN_1400021e4(local_380,&local_330);
                local_3b0 = &DAT_149dfb77a;
                if (local_328 != 0) {
                  local_3b0 = local_330;
                }
                FUN_1403a0728(lVar5 + 0x60,local_3a0);
                FUN_1400021e4(local_3a0,&local_398);
                puVar15 = &DAT_149dfb77a;
                if ((int)plStack_390 != 0) {
                  puVar15 = local_398;
                }
                puVar16 = &DAT_149dfb77a;
                if (local_360 != 0) {
                  puVar16 = local_368;
                }
                local_3c0 = (double)fVar20;
                local_3b8 = local_3a8;
                local_3c8 = local_3b0;
                FUN_140212e80(&local_298,L"%ls %ls %ls %.2f %ls",puVar16,puVar15);
                if (local_398 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_330 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                local_398 = (undefined2 *)0x0;
                plStack_390 = (longlong *)0x0;
                FUN_14009b010(&local_398,1,0);
                pwVar14 = local_298;
                *pwStack_290 = L'\0';
                local_2b0 = 0;
                if (local_298 == (wchar_t *)0x0) {
                  local_2a8 = 0;
                  local_2a0 = 0;
                }
                else {
                  sVar13 = wcslen(local_298);
                  FUN_1449b853c(&local_330,pwVar14,sVar13 & 0xffffffff,1);
                }
                FUN_1417381b0(&local_398,local_2a8);
                if (local_2b0 != 0) {
                  FUN_1400020a8();
                }
                FUN_14173818c(param_3,&local_398,0);
                plVar1 = plStack_390;
                if (plStack_390 != (longlong *)0x0) {
                  LOCK();
                  plVar3 = plStack_390 + 1;
                  *(int *)plVar3 = (int)*plVar3 + -1;
                  UNLOCK();
                  if ((int)*plVar3 == 0) {
                    (**(code **)*plStack_390)(plStack_390);
                    LOCK();
                    piVar4 = (int *)((longlong)plVar1 + 0xc);
                    *piVar4 = *piVar4 + -1;
                    UNLOCK();
                    if (*piVar4 == 0) {
                      (**(code **)(*plVar1 + 0x10))(plVar1);
                    }
                  }
                }
                if (local_378 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if (local_368 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                }
                if ((char)local_280 == '\x01') {
                  FUN_1400020a8(local_298);
                }
              }
            }
            local_340 = (undefined1 *)CONCAT44(local_340._4_4_,(uint)local_340 & ~local_350._4_4_);
            FUN_1449c0562(&local_350);
            uVar9 = (ulonglong)local_340._4_4_;
          } while (((local_340._4_4_ != uVar17) || (local_348 != pwVar2)) || (local_358 != plVar8));
        }
        uVar10 = CONCAT71((int7)(uVar9 >> 8),1);
        goto LAB_1412174a7;
      }
    }
  }
  uVar10 = 0;
LAB_1412174a7:
  if ((local_70 ^ (ulonglong)auStack_3e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10;
}



// FUNCTION 141217868 FUN_141217868 body=2746 status=ok
// SIG undefined FUN_141217868(void)

void FUN_141217868(longlong param_1,undefined8 param_2,longlong *param_3)

{
  int *piVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  code *pcVar15;
  bool bVar16;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  wchar_t *local_1a8;
  code *local_1a0;
  undefined1 *local_198;
  code **local_190;
  code *local_188;
  code *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  undefined2 local_168;
  undefined4 uStack_166;
  undefined2 uStack_162;
  undefined2 local_160;
  undefined2 uStack_15e;
  undefined2 uStack_15c;
  longlong local_158;
  int local_150;
  code *local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined1 local_130 [48];
  longlong local_100;
  undefined8 local_f8;
  longlong local_f0;
  longlong lStack_e8;
  longlong local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined **local_70;
  undefined *local_68;
  longlong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  if (((*(byte *)(param_1 + -0x37e) & 4) == 0) || (*(longlong *)(param_1 + 0xa30) == 0))
  goto LAB_141217df1;
  plVar7 = (longlong *)(**(code **)(*param_3 + 0x100))(param_3);
  if (plVar7 == (longlong *)0x0) {
LAB_141217e25:
    plVar7 = (longlong *)(**(code **)(*param_3 + 0x108))(param_3);
    if (plVar7 != (longlong *)0x0) {
      if (DAT_14cb223d8 == 0) {
        local_190 = &local_148;
        local_148 = FUN_1449e2820;
        local_180 = FUN_14081d0ea;
        local_188 = FUN_1427b09ee;
        local_198 = &LAB_147f29feb;
        local_1a0 = FUN_1464384fe;
        local_1a8 = L"Engine";
        local_1b0 = 0;
        local_1b8 = 0x10004001;
        local_1c0 = 8;
        local_1c8 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
      }
      plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
      if (plVar7 != (longlong *)0x0) {
        if (DAT_14cb223d8 == 0) {
          local_190 = &local_148;
          local_148 = FUN_1449e2820;
          local_180 = FUN_14081d0ea;
          local_188 = FUN_1427b09ee;
          local_198 = &LAB_147f29feb;
          local_1a0 = FUN_1464384fe;
          local_1a8 = L"Engine";
          local_1b0 = 0;
          local_1b8 = 0x10004001;
          local_1c0 = 8;
          local_1c8 = 0x28;
          FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
        }
        plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
        lVar9 = 0;
        if ((plVar7 != plVar8) && (plVar8 != (longlong *)0x0)) {
          lVar9 = (**(code **)(*plVar8 + 0x10))();
        }
        goto LAB_141217930;
      }
    }
    lVar9 = 0;
  }
  else {
    if (DAT_14cb223d8 == 0) {
      local_190 = &local_148;
      local_148 = FUN_1449e2820;
      local_180 = FUN_14081d0ea;
      local_188 = FUN_1427b09ee;
      local_198 = &LAB_147f29feb;
      local_1a0 = FUN_1464384fe;
      local_1a8 = L"Engine";
      local_1b0 = 0;
      local_1b8 = 0x10004001;
      local_1c0 = 8;
      local_1c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar7 = (longlong *)(**(code **)(*plVar7 + 0x288))(plVar7,DAT_14cb223d8);
    if (plVar7 == (longlong *)0x0) goto LAB_141217e25;
    if (DAT_14cb223d8 == 0) {
      local_190 = &local_148;
      local_148 = FUN_1449e2820;
      local_180 = FUN_14081d0ea;
      local_188 = FUN_1427b09ee;
      local_198 = &LAB_147f29feb;
      local_1a0 = FUN_1464384fe;
      local_1a8 = L"Engine";
      local_1b0 = 0;
      local_1b8 = 0x10004001;
      local_1c0 = 8;
      local_1c8 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTeam",&DAT_14cb223d8,&DAT_147f29fea);
    }
    plVar8 = (longlong *)FUN_144718840(plVar7,DAT_14cb223d8);
    if (((plVar7 == plVar8) || (plVar8 == (longlong *)0x0)) ||
       (lVar9 = (**(code **)(*plVar8 + 0x10))(plVar8), lVar9 == 0)) goto LAB_141217e25;
  }
LAB_141217930:
  iVar5 = 1;
  if ((*(longlong *)(param_1 + 2000) != 0) &&
     ((*(short *)(param_1 + 0x7d8) < 0 || (*(longlong *)(param_1 + 0x7e0) != 0)))) {
    iVar5 = FUN_1412183a4(param_1 + 0x7b0,lVar9);
  }
  lVar9 = *(longlong *)(param_1 + -0x230);
  if (lVar9 == 0) {
    bVar16 = false;
  }
  else {
    lVar10 = (**(code **)(*param_3 + 0x108))(param_3);
    bVar16 = lVar9 == lVar10;
  }
  if ((*(byte *)(*(longlong *)(param_1 + 0xa30) + 800) & 1) != 0) {
    lVar9 = (**(code **)(*param_3 + 0x10))(param_3);
    if ((iVar5 == 0) && (*(char *)(lVar9 + 0x278) != '\0')) {
      lVar10 = (**(code **)(*param_3 + 0x10))(param_3);
      lVar9 = *(longlong *)(param_1 + 0xa30);
      if (bVar16 == true && (*(byte *)(lVar10 + 0x250) & 8) != 0) {
        lVar10 = lVar10 + 0x250;
        lVar9 = lVar9 + 0x350;
        iVar5 = 0;
        bVar16 = true;
      }
      else {
        iVar5 = 0;
LAB_1412179c4:
        lVar10 = lVar9 + 0x328;
        lVar9 = 0;
      }
      cVar4 = FUN_141218324(lVar10,iVar5,bVar16,lVar9);
      if (cVar4 == '\0') goto LAB_141217df1;
    }
    else {
      lVar9 = *(longlong *)(param_1 + 0xa30);
      if ((*(byte *)(lVar9 + 800) & 1) != 0) goto LAB_1412179c4;
    }
  }
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0xa30) + 0x370);
  if ((plVar7 != (longlong *)0x0) &&
     (cVar4 = (**(code **)(*plVar7 + 0x18))(plVar7,param_3,0), cVar4 == '\0')) goto LAB_141217df1;
  pcVar15 = (code *)0x0;
  local_148 = (code *)0x0;
  local_140 = 0x3002;
  local_138 = 0;
  local_100 = 0;
  local_f8 = 0x200000000;
  local_f0 = 0;
  lStack_e8 = 0;
  local_e0 = 0;
  local_d8 = (undefined4)DAT_14c8464e0;
  uStack_d4 = DAT_14c8464e0._4_4_;
  uStack_d0 = (undefined4)DAT_14c8464e8;
  uStack_cc = DAT_14c8464e8._4_4_;
  local_c8 = DAT_14c8464f0;
  local_c0 = (undefined4)DAT_14c8464e0;
  uStack_bc = DAT_14c8464e0._4_4_;
  uStack_b8 = (undefined4)DAT_14c8464e8;
  uStack_b4 = DAT_14c8464e8._4_4_;
  local_b0 = DAT_14c8464f0;
  local_a8 = (undefined4)DAT_14c8464e0;
  uStack_a4 = DAT_14c8464e0._4_4_;
  uStack_a0 = (undefined4)DAT_14c8464e8;
  uStack_9c = DAT_14c8464e8._4_4_;
  local_98 = DAT_14c8464f0;
  local_80 = DAT_14c8464f0;
  local_90 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  uStack_88 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  local_78 = 0;
  FUN_1405c5fa2();
  local_68 = &DAT_14cb769e8;
  local_60 = 0;
  uStack_58 = 0;
  local_70 = &PTR_FUN_14b0394b0;
  lVar9 = (**(code **)(*param_3 + 0xe0))(param_3);
  if (lVar9 != 0) {
    puVar14 = &DAT_14c9485f0;
    if (*(undefined4 **)(lVar9 + 8) != (undefined4 *)0x0) {
      puVar14 = *(undefined4 **)(lVar9 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar9 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar9);
      DAT_14c947fe0 = lVar9;
    }
    FUN_140045924(DAT_14c947fe0,&local_178,puVar14,1);
    pcVar15 = (code *)CONCAT44(uStack_174,local_178);
  }
  if (local_148 != pcVar15) {
    local_138 = 0;
  }
  local_148 = pcVar15;
  puVar11 = (undefined1 *)(**(code **)(*param_3 + 0xd8))(param_3);
  if (local_130 != puVar11) {
    puVar13 = *(undefined1 **)(puVar11 + 0x30);
    if (*(undefined1 **)(puVar11 + 0x30) == (undefined1 *)0x0) {
      puVar13 = puVar11;
    }
    FUN_1400709d4(local_130,puVar13,*(undefined4 *)(puVar11 + 0x38),local_f8._4_4_);
  }
  lVar9 = (**(code **)(*param_3 + 0x110))(param_3);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  local_f0 = lVar9;
  lVar9 = (**(code **)(*param_3 + 0x100))(param_3);
  if ((lVar9 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar9);
  }
  lStack_e8 = lVar9;
  lVar9 = (**(code **)(*param_3 + 0xa8))(param_3);
  if (*(int *)(lVar9 + 0xdc) == 0) {
LAB_141217f87:
    lVar10 = 0;
  }
  else {
    uVar6 = *(uint *)(lVar9 + 0xd8);
    lVar10 = 0;
    if ((-1 < (int)uVar6) && ((int)uVar6 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar6 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         (((int)plVar7[2] != *(int *)(lVar9 + 0xdc) || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)))
         ) goto LAB_141217f87;
      lVar10 = *plVar7;
      if ((lVar10 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(lVar10);
      }
    }
  }
  local_e0 = lVar10;
  (**(code **)(*param_3 + 0xb0))(param_3,&local_178);
  local_d8 = local_178;
  uStack_d4 = uStack_174;
  uStack_d0 = uStack_170;
  (**(code **)(*param_3 + 0xb8))(param_3,&local_178);
  local_c0 = local_178;
  uStack_bc = uStack_174;
  uStack_b8 = uStack_170;
  (**(code **)(*param_3 + 200))(param_3,&local_178);
  local_a8 = local_178;
  uStack_a4 = uStack_174;
  uStack_a0 = uStack_170;
  lVar9 = (**(code **)(*param_3 + 0xe8))(param_3);
  (*(code *)local_70[4])(&local_70,0);
  local_68 = *(undefined **)(lVar9 + 8);
  FUN_1406022fe(&local_60,lVar9 + 0x10);
  cVar4 = (**(code **)(*param_3 + 0x30))(param_3);
  if (cVar4 != '\0') {
    puVar12 = (undefined8 *)(**(code **)(*param_3 + 0x18))(param_3);
    local_178 = *(undefined4 *)puVar12;
    uStack_174 = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_170 = *(undefined4 *)(puVar12 + 1);
    uStack_166 = *(undefined4 *)((longlong)puVar12 + 0x12);
    uStack_16c = (undefined2)*(undefined4 *)((longlong)puVar12 + 0xc);
    uStack_16a = (undefined2)*(undefined4 *)((longlong)puVar12 + 0xe);
    local_168 = (undefined2)((uint)*(undefined4 *)((longlong)puVar12 + 0xe) >> 0x10);
    uStack_162 = (undefined2)*(undefined4 *)((longlong)puVar12 + 0x16);
    local_160 = (undefined2)((uint)*(undefined4 *)((longlong)puVar12 + 0x16) >> 0x10);
    uStack_15e = (undefined2)*(undefined4 *)((longlong)puVar12 + 0x1a);
    uStack_15c = (undefined2)((uint)*(undefined4 *)((longlong)puVar12 + 0x1a) >> 0x10);
    local_158 = 0;
    iVar5 = *(int *)(puVar12 + 5);
    uVar2 = puVar12[4];
    local_150 = iVar5;
    if (iVar5 == 0) {
      local_80 = CONCAT26(uStack_162,CONCAT42(uStack_166,local_168));
      local_78 = CONCAT22(uStack_15e,local_160);
      local_90 = *puVar12;
      uStack_88 = puVar12[1];
    }
    else {
      FUN_144723f1e(&local_158,iVar5,0);
      FUN_144723ff3(local_158,uVar2,iVar5);
      local_80 = CONCAT26(uStack_162,CONCAT42(uStack_166,local_168));
      local_90 = CONCAT44(uStack_174,local_178);
      uStack_88 = CONCAT26(uStack_16a,CONCAT24(uStack_16c,uStack_170));
      local_78 = CONCAT22(uStack_15e,local_160);
      if (local_158 != 0) {
        FUN_1400020a8();
      }
    }
  }
  FUN_141218473(param_1 + 0x9a8,&local_148);
  uVar6 = *(int *)(param_1 + 0xda4) + 1;
  *(short *)(param_1 + 0xda4) = (short)uVar6;
  if (*(longlong *)(param_1 + 0x540) == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa30) + 0x308) == 0) {
LAB_141217ec3:
      if ((int)(uVar6 & 0xffff) < *(int *)(param_1 + 0xafc)) goto LAB_141217d9b;
    }
    else {
      FUN_148946fe0(*(longlong *)(param_1 + 0xa30) + 0x308,&local_178);
      cVar4 = (**(code **)(*(longlong *)CONCAT44(uStack_174,local_178) + 0x18))
                        ((longlong *)CONCAT44(uStack_174,local_178),param_3,0);
      plVar7 = (longlong *)CONCAT26(uStack_16a,CONCAT24(uStack_16c,uStack_170));
      if (plVar7 != (longlong *)0x0) {
        LOCK();
        plVar8 = plVar7 + 1;
        *(int *)plVar8 = (int)*plVar8 + -1;
        UNLOCK();
        if ((int)*plVar8 == 0) {
          (**(code **)*plVar7)(plVar7);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      if (cVar4 == '\0') {
        uVar6 = (uint)*(ushort *)(param_1 + 0xda4);
        goto LAB_141217ec3;
      }
    }
    (**(code **)(*(longlong *)(param_1 + -0x3e0) + 0x650))((longlong *)(param_1 + -0x3e0),param_3);
  }
LAB_141217d9b:
  local_70 = (undefined **)&DAT_14a171d50;
  uVar3 = uStack_58 >> 0x20;
  uStack_58 = uStack_58 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    FUN_140115c12(&local_60,0);
  }
  local_68 = (undefined *)0x0;
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_100 != 0) {
    FUN_1400020a8();
  }
LAB_141217df1:
  if ((local_50 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141218324 FUN_141218324 body=128 status=ok
// SIG undefined FUN_141218324(void)

uint FUN_141218324(uint *param_1,int param_2,char param_3,longlong param_4)

{
  char cVar1;
  bool bVar2;
  
  if (param_2 == 2) {
    return (byte)*param_1 & 0xffffff01;
  }
  if (param_2 == 0) {
    if (param_3 == '\x01' && (*param_1 & 8) != 0) {
      cVar1 = FUN_1449ede12(param_1 + 2);
      if ((cVar1 == '\0') &&
         ((param_4 == 0 || (cVar1 = FUN_1405d595e(param_1 + 2,param_4), cVar1 == '\0')))) {
        bVar2 = (*param_1 & 0x10) == 0;
      }
      else {
        bVar2 = (bool)(((byte)*param_1 & 0x10) >> 4);
      }
      return (uint)bVar2;
    }
    return (*param_1 & 4) >> 2;
  }
  if (param_2 == 1) {
    return (uint)(((byte)*param_1 & 2) >> 1);
  }
  return 1;
}



// FUNCTION 1412183a4 FUN_1412183a4 body=206 status=ok
// SIG undefined FUN_1412183a4(void)

undefined8 FUN_1412183a4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == 0) {
    plVar4 = *(longlong **)(param_1 + 0x18);
  }
  else {
    plVar1 = *(longlong **)(param_2 + 0x18);
    if ((plVar1 != (longlong *)0x0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(plVar1);
    }
    plVar4 = *(longlong **)(param_1 + 0x18);
    if (plVar4 == plVar1) {
      uVar2 = 1;
      goto LAB_141218424;
    }
  }
  if (plVar4 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x180))();
  }
  if (param_2 == 0) {
    local_30 = 0;
    uVar3 = 0xffff;
    local_38 = 0;
    local_28 = 0;
  }
  else {
    local_38 = *(undefined8 *)(param_2 + 0x20);
    uVar3 = *(undefined2 *)(param_2 + 0x28);
    local_28 = *(undefined8 *)(param_2 + 0x30);
  }
  local_30 = CONCAT62(local_30._2_6_,uVar3);
  uVar2 = FUN_1448618b0(param_1 + 0x20,&local_38,uVar2);
LAB_141218424:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141218473 FUN_141218473 body=755 status=ok
// SIG undefined FUN_141218473(void)

void FUN_141218473(undefined8 param_1,longlong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined1 auStack_178 [32];
  longlong local_158;
  int local_150;
  undefined8 local_148;
  undefined1 local_140 [48];
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  longlong lStack_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined *local_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_150 = 0x3002;
  local_148 = 0;
  local_110 = 0;
  local_108 = 0x200000000;
  local_100 = 0;
  lStack_f8 = 0;
  local_f0 = 0;
  local_e8._0_4_ = (undefined4)DAT_14c8464e0;
  local_e8._4_4_ = DAT_14c8464e0._4_4_;
  uStack_e0 = (undefined4)DAT_14c8464e8;
  uStack_dc = DAT_14c8464e8._4_4_;
  local_d8 = DAT_14c8464f0;
  local_d0 = (undefined4)DAT_14c8464e0;
  uStack_cc = DAT_14c8464e0._4_4_;
  uStack_c8 = (undefined4)DAT_14c8464e8;
  uStack_c4 = DAT_14c8464e8._4_4_;
  local_c0 = DAT_14c8464f0;
  local_b8 = (undefined4)DAT_14c8464e0;
  uStack_b4 = DAT_14c8464e0._4_4_;
  uStack_b0 = (undefined4)DAT_14c8464e8;
  uStack_ac = DAT_14c8464e8._4_4_;
  local_a8 = DAT_14c8464f0;
  local_90 = DAT_14c8464f0;
  local_a0 = (undefined4)DAT_14c8464e0;
  uStack_9c = DAT_14c8464e0._4_4_;
  uStack_98 = (undefined4)DAT_14c8464e8;
  uStack_94 = DAT_14c8464e8._4_4_;
  local_88 = 0;
  FUN_1405c5fa2();
  local_78 = &DAT_14cb769e8;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = &PTR_FUN_14b0394b0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x3002)) {
    local_148 = 0;
    local_158 = *param_2;
    local_150 = (int)param_2[1];
  }
  if (&local_158 != param_2) {
    plVar4 = param_2 + 3;
    if ((longlong *)param_2[9] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[9];
    }
    FUN_1400709d4(local_140,plVar4,(int)param_2[10],2);
  }
  lVar3 = param_2[0xb];
  if (DAT_14c950c29 == 1) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[0xb];
    }
  }
  lVar2 = param_2[0xc];
  local_100 = lVar3;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = param_2[0xc];
    }
  }
  lVar3 = param_2[0xd];
  lStack_f8 = lVar2;
  if ((DAT_14c950c29 & 1) != 0) {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = param_2[0xd];
    }
  }
  plVar4 = param_2 + 0xe;
  plVar5 = &local_e8;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *plVar5 = *plVar4;
    plVar4 = plVar4 + 1;
    plVar5 = plVar5 + 1;
  }
  local_88 = (undefined4)param_2[0x1a];
  local_f0 = lVar3;
  (*(code *)local_80[4])(&local_80,0);
  local_78 = (undefined *)param_2[0x1c];
  FUN_1406022fe(&local_70,param_2 + 0x1d);
  FUN_1447cd2ec(param_1,&local_158);
  local_80 = (undefined **)&DAT_14a171d50;
  uVar1 = uStack_68 >> 0x20;
  uStack_68 = uStack_68 & 0xffffffff00000000;
  if ((int)uVar1 != 0) {
    FUN_140115c12(&local_70,0);
  }
  local_78 = (undefined *)0x0;
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_110 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141218768 FUN_141218768 body=57 status=ok
// SIG undefined FUN_141218768(void)

void FUN_141218768(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbc0810 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbc0810 = FUN_140002ddd(FUN_146617770,uVar1,L"VaultCardDef");
  }
  return;
}



// FUNCTION 1412187a2 FUN_1412187a2 body=307 status=ok
// SIG undefined FUN_1412187a2(void)

byte FUN_1412187a2(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
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
  lVar2 = FUN_1400d7050(param_1 + 0x30);
  lVar3 = 0;
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1459f2e4c;
      local_48 = &LAB_148c39de3;
      local_50 = &LAB_1457a9eb2;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    lVar3 = DAT_14cbadd90;
    if (((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (lVar3 = DAT_14cbadd90 + 0x30,
        *(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == lVar3)) &&
       (*(char *)(lVar2 + 0x32b8) == '\x01')) {
      bVar1 = FUN_14125be1e(lVar2,param_2);
      bVar4 = 1;
      goto LAB_141218812;
    }
  }
  bVar1 = (byte)lVar3;
  bVar4 = 0;
LAB_141218812:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return bVar1 & bVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412188d6 FUN_1412188d6 body=867 status=ok
// SIG undefined FUN_1412188d6(void)

undefined8 FUN_1412188d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 uVar11;
  byte bVar12;
  undefined **ppuVar13;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  code *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar8 = FUN_1400d7050(param_1 + 0x30);
  if (lVar8 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_60 = &local_48;
      local_48 = FUN_141030f22;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1459f2e4c;
      local_68 = &LAB_148c39de3;
      local_70 = &LAB_1457a9eb2;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
       (lVar9 = DAT_14cbadd90 + 0x30,
       *(longlong *)
        (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
        (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == lVar9)) {
      if (*(longlong *)(lVar8 + 0x3db8) == 0) {
LAB_141218bfc:
        bVar12 = 0;
      }
      else {
        plVar10 = (longlong *)FUN_141218c3a();
        lVar9 = 0;
        if (plVar10 == (longlong *)0x0) goto LAB_141218bfc;
        if (param_2[1] == 0) {
          uVar11 = FUN_141218768();
          lVar8 = FUN_14477b664(uVar11);
          param_2[1] = lVar8;
        }
        lVar8 = plVar10[1];
        if (lVar8 == 0) {
          lVar8 = FUN_141218768();
        }
        lVar1 = *plVar10;
        lVar8 = FUN_14477b664(lVar8);
        iVar7 = 0;
        iVar6 = 0;
        if ((lVar8 != 0) && (plVar10 = *(longlong **)(lVar8 + 0xb8), plVar10 != (longlong *)0x0)) {
          lVar9 = *plVar10;
          pcVar2 = *(code **)(lVar9 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar2)(plVar10);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_1412189f0;
            lVar9 = *plVar10;
          }
          pcVar2 = *(code **)(lVar9 + 0x110);
          if (pcVar2 == (code *)&LAB_144783426) {
            ppuVar13 = &PTR_PTR_14c763408;
          }
          else if (pcVar2 == (code *)&LAB_144783432) {
            ppuVar13 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar13 = (undefined **)(*pcVar2)(plVar10);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_1412189f0:
        lVar3 = *param_2;
        lVar4 = param_2[1];
        if ((lVar4 != 0) && (plVar10 = *(longlong **)(lVar4 + 0xb8), plVar10 != (longlong *)0x0)) {
          lVar9 = *plVar10;
          pcVar2 = *(code **)(lVar9 + 0x108);
          if (pcVar2 != (code *)&LAB_14478342e && pcVar2 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar2)(plVar10);
            if (cVar5 == '\0') goto LAB_141218a57;
            lVar9 = *plVar10;
          }
          pcVar2 = *(code **)(lVar9 + 0x110);
          if (pcVar2 == (code *)&LAB_144783426) {
            ppuVar13 = &PTR_PTR_14c763408;
          }
          else if (pcVar2 == (code *)&LAB_144783432) {
            ppuVar13 = &PTR_PTR_14c75f798;
          }
          else {
            ppuVar13 = (undefined **)(*pcVar2)(plVar10);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_141218a57:
        lVar9 = 0;
        bVar12 = 1;
        if ((iVar7 == iVar6) && (lVar3 == lVar1)) {
          bVar12 = 1;
          if (lVar4 == lVar8) {
LAB_141218b10:
            lVar9 = CONCAT71((int7)((ulonglong)lVar9 >> 8),1);
          }
          else {
            lVar9 = 0;
            if ((lVar8 != 0) && (lVar4 != 0)) {
              iVar6 = *(int *)(lVar8 + 0x38);
              iVar7 = *(int *)(lVar4 + 0x38);
              lVar9 = (longlong)iVar7;
              if ((iVar6 <= iVar7) &&
                 (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar8 + 0x30))
              goto LAB_141218b10;
              if (iVar6 < iVar7) {
                lVar9 = 0;
              }
              else {
                lVar9 = CONCAT71((int7)(int3)((uint)iVar7 >> 8),
                                 *(longlong *)(*(longlong *)(lVar8 + 0x30) + lVar9 * 8) ==
                                 lVar4 + 0x30);
              }
            }
          }
        }
      }
      uVar11 = CONCAT71((int7)((ulonglong)lVar9 >> 8),(byte)lVar9 & bVar12);
      goto LAB_141218a6a;
    }
  }
  uVar11 = 0;
LAB_141218a6a:
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141218c3a FUN_141218c3a body=258 status=ok
// SIG undefined FUN_141218c3a(void)

longlong FUN_141218c3a(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar7 = *(longlong *)(param_1 + 0x90);
  if (lVar7 == 0) {
    uVar4 = FUN_141218768();
    lVar7 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x90) = lVar7;
  }
  lVar5 = *(longlong *)(param_1 + 0x98);
  if (lVar5 == 0) {
    if (lVar7 == 0) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x88) == 0) {
      return 0;
    }
    plVar1 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      *(undefined8 *)(param_1 + 0x98) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x88));
    *(longlong *)(param_1 + 0x98) = lVar5;
    if (lVar5 == 0) {
      return 0;
    }
  }
  if ((longlong)*(int *)(param_1 + 0x80) == 0) {
    return 0;
  }
  lVar7 = *(longlong *)(param_1 + 0x78);
  lVar6 = (longlong)*(int *)(param_1 + 0x80) * 0xe8;
  do {
    lVar3 = FUN_140e44844(lVar7);
    if (lVar3 == lVar5) {
      return lVar7;
    }
    lVar7 = lVar7 + 0xe8;
    lVar6 = lVar6 + -0xe8;
  } while (lVar6 != 0);
  return 0;
}



// FUNCTION 141218d3c FUN_141218d3c body=33 status=ok
// SIG undefined FUN_141218d3c(void)

undefined1 * FUN_141218d3c(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xf00000d0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return param_1;
}



// FUNCTION 141218d5e FUN_141218d5e body=386 status=ok
// SIG undefined FUN_141218d5e(void)

void FUN_141218d5e(longlong *param_1)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar3 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar3 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    uVar4 = FUN_14118da1c();
    DAT_14c8442b8 = FUN_14054d46e(uVar4,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  bVar2 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_141218e14;
    bVar2 = DAT_14c8442b8 & 1;
  }
  if ((bVar2 == 0) && (pcVar1 = (char *)param_1[10], pcVar1 != (char *)0x0)) {
    if (pcVar1[0x200] == '\x01') {
      FUN_14109c082(pcVar1);
    }
    if (*pcVar1 == '\x01') {
      FUN_1474b5c38(pcVar1 + 8,param_1);
    }
    if (pcVar1[1] == '\x01') {
      FUN_141218ee2(*(undefined8 *)(pcVar1 + 0x1f8),param_1);
    }
    pcVar1[0x200] = '\x01';
  }
LAB_141218e14:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141218ee2 FUN_141218ee2 body=1345 status=ok
// SIG undefined FUN_141218ee2(void)

void FUN_141218ee2(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong lVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint uVar12;
  undefined2 *puVar13;
  undefined ***pppuVar14;
  uint *puVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined1 auStack_98 [32];
  undefined2 **local_78;
  undefined8 local_70;
  undefined2 *local_68;
  int local_60;
  undefined ***local_58;
  undefined **local_48;
  longlong local_40;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (DAT_14c760e34 == 0) goto LAB_141219087;
  lVar8 = (ulonglong)DAT_14ca85550 * 0x3c;
  if (((((*(byte *)((longlong)&DAT_14ca814d8 + lVar8 + 3) & 0x10) == 0) ||
       (((&DAT_14ca814c8)[(ulonglong)DAT_14ca85550 * 0xf] & 0x20000000) == 0)) ||
      ((*(uint *)(&DAT_14ca814cc + lVar8) & 8) == 0)) || (*(int *)(param_1 + 0x70) == 0))
  goto LAB_141219087;
  local_70 = *(undefined8 *)(param_2 + 0x18);
  FUN_1400021e4(&local_70,&local_68);
  puVar13 = local_68;
  if (local_60 == 0) {
    puVar13 = &DAT_149dfb77a;
  }
  iVar5 = FUN_144a1ccda(puVar13,0);
  *(uint *)(param_1 + 0xc4) = iVar5 + (uint)(iVar5 == 0);
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar5 = *(int *)(lVar8 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar5 != 2) {
      if (iVar5 != 1) goto LAB_141218fc1;
      DVar6 = FUN_140ad26c0();
      DVar7 = GetCurrentThreadId();
      if (DVar6 == DVar7) goto LAB_141218fc6;
      goto LAB_141218fee;
    }
  }
  else {
LAB_141218fc1:
    if (iVar5 != 0x10) {
LAB_141218fee:
      if (DAT_14ca9a438 == '\0') {
        if ((DAT_14c86a9f8 != '\x01') || (iVar5 = *(int *)(lVar8 + 0xc60), iVar5 == 2))
        goto LAB_141218fc6;
        if (iVar5 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          if (DVar6 == DVar7) goto LAB_141218fc6;
        }
      }
      if (DAT_14ca9a43c == 0) {
        puVar2 = (undefined8 *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x308);
        puVar10 = (uint *)*puVar2;
        if (puVar10 != (uint *)0x0) goto LAB_141219148;
        while( true ) {
          uVar12 = *(uint *)(*(longlong *)
                              ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                            0x318);
          if ((uVar12 & 1) == 0) {
            *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x318) = uVar12 | 1;
            __tlregdtor(&LAB_143679e2b);
          }
          lVar8 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          puVar9 = *(undefined4 **)(lVar8 + 0x310);
          *(undefined8 *)(lVar8 + 0x310) = 0;
          if (puVar9 == (undefined4 *)0x0) {
            puVar9 = _aligned_malloc(0x10000,0x10000);
          }
          *puVar9 = 0xffffffff;
          *(undefined4 **)(puVar9 + 0x10) = puVar9 + 0x16;
          puVar9[0x12] = 0;
          *puVar2 = puVar9;
          FUN_140217a48(puVar2);
          puVar10 = (uint *)*puVar2;
LAB_141219148:
          puVar17 = (undefined8 *)(*(longlong *)(puVar10 + 0x10) + 7U & 0xfffffffffffffff8);
          puVar15 = (uint *)(puVar17 + 0x16);
          uVar12 = puVar10[0x12];
          if (puVar15 <= puVar10 + 0x4000) break;
          while( true ) {
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x4000;
            LOCK();
            uVar3 = *puVar10;
            *puVar10 = *puVar10 + uVar12 + 1;
            UNLOCK();
            if ((uVar3 ^ uVar12) != 0xffffffff) break;
            puVar10 = (uint *)*puVar2;
            *puVar10 = 0xffffffff;
            *(uint **)(puVar10 + 0x10) = puVar10 + 0x16;
            puVar10[0x12] = 0;
            *puVar2 = puVar10;
            puVar17 = (undefined8 *)((longlong)puVar10 + 0x5fU & 0xfffffffffffffff8);
            puVar15 = (uint *)(puVar17 + 0x16);
            uVar12 = 0;
            if (puVar15 <= puVar10 + 0x4000) {
              uVar12 = 1;
              goto LAB_1412191c8;
            }
          }
        }
        uVar12 = uVar12 + 1;
LAB_1412191c8:
        *(uint **)(puVar10 + 0x10) = puVar15;
        puVar10[0x12] = uVar12;
        iVar5 = 0;
        FUN_1447247dc(puVar17,0);
        *puVar17 = &PTR_FUN_14aa68798;
        puVar17[0x15] = param_1;
        if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
          uVar12 = DAT_14c7585c8 >> 10 & 3;
          if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar12 < 2) {
            uVar16 = (ulonglong)(byte)(&DAT_149e38edc)[uVar12];
            iVar5 = 0;
          }
          else {
            uVar16 = 2;
          }
        }
        else {
          iVar5 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                  *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
          uVar16 = 5;
        }
        if (*(code **)(puVar17[0xe] + 0x18) != FUN_144713626) {
          (**(code **)(puVar17[0xe] + 0x18))(puVar17 + 0xe,puVar17 + 9);
        }
        puVar17[0xe] = LowLevelTasks::
                       TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                       TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                       ::vftable;
        puVar17[9] = puVar17;
        puVar17[10] = puVar17;
        lVar8 = *(longlong *)
                 (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x2b8);
        if (lVar8 == 0) {
          uVar4 = 1;
          if ((char)uVar16 != '\x06') {
            uVar4 = uVar16;
          }
          uVar16 = uVar4;
          uVar11 = 0;
        }
        else {
          if ((char)uVar16 == '\x06') {
            uVar16 = *(ulonglong *)(lVar8 + 0x38) >> 0x3b;
          }
          uVar11 = *(undefined8 *)(lVar8 + 0x30);
        }
        puVar17[0xf] = uVar11;
        puVar17[0x10] = uVar16 << 0x3b | 0xc00000527800b400;
        *(int *)((longlong)puVar17 + 0x1c) = iVar5;
        if (puVar17 == (undefined8 *)0x0) {
          local_68 = (undefined2 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(0);
        }
        else {
          LOCK();
          *(int *)(puVar17 + 1) = *(int *)(puVar17 + 1) + 1;
          UNLOCK();
          local_68 = (undefined2 *)CONCAT71(local_68._1_7_,1);
          FUN_1447439e4(puVar17);
          LOCK();
          piVar1 = (int *)(puVar17 + 1);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)*puVar17)(puVar17,1);
          }
        }
      }
      else {
        local_58 = (undefined ***)0x0;
        local_48 = &PTR_LAB_14aa68750;
        local_68 = (undefined2 *)&LAB_14367c7e0;
        local_78 = &local_68;
        local_40 = param_1;
        FUN_14005a792(&DAT_14ca9a440,L"InitNaniteResources",&DAT_14cb001e0);
        if (local_68 != (undefined2 *)0x0) {
          pppuVar14 = local_58;
          if (local_58 == (undefined ***)0x0) {
            pppuVar14 = &local_48;
          }
          (*(code *)(*pppuVar14)[2])();
        }
      }
      goto LAB_141219087;
    }
  }
LAB_141218fc6:
  FUN_14366d410(param_1);
LAB_141219087:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141219424 FUN_141219424 body=757 status=ok
// SIG undefined FUN_141219424(void)

longlong * FUN_141219424(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  lVar3 = (longlong)*(int *)(param_1 + 0x9f8);
  local_90 = param_2;
  if (lVar3 != 0) {
    puVar14 = *(undefined8 **)(param_1 + 0x9f0);
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar12 = *(longlong *)((longlong)puVar14 + lVar6 + 8);
      if (lVar12 != 0) {
        iVar7 = (iVar7 + *(int *)(lVar12 + 0x80)) - *(int *)(lVar12 + 0xac);
      }
      lVar6 = lVar6 + 0x80;
    } while (lVar3 * 0x80 != lVar6);
    if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar7);
    }
    puVar15 = puVar14 + lVar3 * 0x10;
    if (iVar7 != 0) {
      FUN_145843ebc(param_2);
      if ((longlong)*(int *)(param_1 + 0x9f8) == 0) goto LAB_141219691;
      puVar14 = *(undefined8 **)(param_1 + 0x9f0);
      puVar15 = puVar14 + (longlong)*(int *)(param_1 + 0x9f8) * 0x10;
    }
    do {
      local_70 = puVar15;
      lVar3 = puVar14[1];
      local_78 = puVar14;
      if (lVar3 != 0) {
        local_88 = lVar3 + 0x88;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        local_50 = 0;
        local_60 = local_88;
        if (*(int *)(lVar3 + 0xa0) == 0) {
          uVar11 = 1;
          local_58._0_4_ = 0xffffffff;
          iVar7 = 0;
          local_58._4_4_ = 0;
          uVar16 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          uVar16 = local_68 & 0xffffffff;
          uVar11 = local_68 >> 0x20;
          iVar7 = *(int *)(lVar3 + 0xa0);
        }
        lVar6 = local_60;
        uVar9 = (uint)local_58;
        iVar4 = local_58._4_4_;
        iVar10 = local_50;
        if (local_58._4_4_ != iVar7 || local_60 != local_88) {
          do {
            local_80 = lVar3;
            local_94 = iVar7;
            iVar7 = (int)uVar16;
            lVar3 = *(longlong *)(local_80 + 0x78);
            if (*(char *)(lVar3 + 0xbc + (longlong)iVar4 * 0x180) == '\x01') {
              iVar2 = (int)local_90[1];
              *(uint *)(local_90 + 1) = iVar2 + 1U;
              if (*(uint *)((longlong)local_90 + 0xc) < iVar2 + 1U) {
                FUN_148d747da(local_90,iVar2);
              }
              puVar15 = (undefined8 *)(lVar3 + (longlong)iVar4 * 0x180);
              puVar14 = (undefined8 *)(*local_90 + (longlong)iVar2 * 0x18);
              FUN_14121971b(puVar14);
              *puVar14 = *puVar15;
              puVar14[1] = puVar15[3];
              puVar14[2] = *local_78;
            }
            uVar9 = uVar9 & ~(uint)uVar11;
            lVar3 = *(longlong *)(lVar6 + 0x10);
            if (*(longlong *)(lVar6 + 0x10) == 0) {
              lVar3 = lVar6;
            }
            iVar2 = *(int *)(lVar6 + 0x18);
            lVar12 = (longlong)iVar7;
            uVar8 = *(uint *)(lVar3 + lVar12 * 4) & uVar9;
            if (uVar8 == 0) {
              iVar4 = iVar2 + 0x1e;
              if (-1 < iVar2 + -1) {
                iVar4 = iVar2 + -1;
              }
              iVar4 = iVar4 >> 5;
              iVar10 = iVar10 + 0x20;
              iVar5 = iVar4;
              if (iVar4 < iVar7) {
                iVar5 = iVar7;
              }
              if (iVar7 < iVar4) {
                lVar13 = 0;
                do {
                  uVar8 = *(uint *)(lVar3 + lVar12 * 4 + 4 + lVar13 * 4);
                  if (uVar8 != 0) {
                    uVar16 = (ulonglong)(iVar7 + (int)lVar13 + 1);
                    uVar9 = 0xffffffff;
                    goto LAB_14121963e;
                  }
                  iVar10 = iVar10 + 0x20;
                  lVar13 = lVar13 + 1;
                } while (iVar5 - lVar12 != lVar13);
                uVar9 = 0xffffffff;
                iVar7 = iVar5;
              }
              uVar16 = (ulonglong)(iVar7 + 1);
              iVar4 = iVar2;
            }
            else {
LAB_14121963e:
              uVar11 = (ulonglong)(-uVar8 & uVar8);
              uVar1 = uVar11 * 2 + 1;
              lVar3 = 0x3f;
              if (uVar1 != 0) {
                for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
                }
              }
              iVar4 = (iVar10 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
              if (iVar2 <= iVar4) {
                iVar4 = iVar2;
              }
            }
            iVar7 = local_94;
            lVar3 = local_80;
          } while ((iVar4 != local_94) || (lVar6 != local_88));
        }
      }
      puVar14 = local_78 + 0x10;
      puVar15 = local_70;
    } while (puVar14 != local_70);
  }
LAB_141219691:
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_90;
}



// FUNCTION 14121971b FUN_14121971b body=15 status=ok
// SIG undefined FUN_14121971b(void)

void FUN_14121971b(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 14121972a FUN_14121972a body=665 status=ok
// SIG undefined FUN_14121972a(void)

void FUN_14121972a(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar5 = (longlong *)(param_1 + -0x11b0);
  if (plVar5 != (longlong *)0x0) {
    if (DAT_14cb1c498 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = FUN_1427b09ee;
      local_58 = &LAB_147e36893;
      local_60 = FUN_146420564;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10004001;
      local_80 = 8;
      local_88 = 0x28;
      FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
    }
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,DAT_14cb1c498);
    if (plVar5 != (longlong *)0x0) {
      if (DAT_14cb1c498 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_1427b09ee;
        local_58 = &LAB_147e36893;
        local_60 = FUN_146420564;
        local_68 = L"Engine";
        local_70 = 0;
        local_78 = 0x10004001;
        local_80 = 8;
        local_88 = 0x28;
        FUN_14081cfa3(L"/Script/GbxNav",L"GbxStanceUser",&DAT_14cb1c498,&DAT_147e36892);
      }
      plVar2 = (longlong *)FUN_144718840(plVar5,DAT_14cb1c498);
      if (plVar5 != plVar2) goto LAB_1412197a3;
    }
  }
  plVar2 = (longlong *)0x0;
LAB_1412197a3:
  lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
  lVar3 = *(longlong *)(lVar3 + 0x140);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0xc0) != 0)) {
    lVar6 = *(longlong *)(lVar3 + 0xb8);
    lVar3 = (longlong)*(int *)(lVar3 + 0xc0) * 0x28;
    do {
      lVar4 = FUN_1412199c4(lVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_1412199c4(lVar6);
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_140e42b06(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar4;
        if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar4);
        }
      }
      lVar6 = lVar6 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412199c4 FUN_1412199c4 body=246 status=ok
// SIG undefined FUN_1412199c4(void)

longlong FUN_1412199c4(uint *param_1)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar5 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar5 == (longlong *)0x0 || (*(uint *)(plVar5 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 || (lVar4 = *plVar5, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar3 = FUN_141219aba();
  if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
      lVar3 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 141219aba FUN_141219aba body=228 status=ok
// SIG undefined FUN_141219aba(void)

longlong FUN_141219aba(void)

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
  if (DAT_14c9a4648 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_1470bc49f;
    local_40 = FUN_14173ae93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x80;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxAnimSet",&DAT_14c9a4648,&DAT_1470bc49e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a4648;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141219ba0 FUN_141219ba0 body=60 status=ok
// SIG undefined FUN_141219ba0(void)

undefined8 * FUN_141219ba0(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a520560;
  param_1[5] = &PTR_LAB_14a520880;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  return param_1;
}



// FUNCTION 141219bdc FUN_141219bdc body=478 status=ok
// SIG undefined FUN_141219bdc(void)

void FUN_141219bdc(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_141219d13;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_141219d13:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141219dbc FUN_141219dbc body=354 status=ok
// SIG undefined FUN_141219dbc(void)

void FUN_141219dbc(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdf850;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 0xc0 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x130 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0xc0 + lVar1) = &PTR_FUN_14a177080;
    if (*(longlong *)(param_1 + 0x118 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x110 + lVar1) = 0;
    if (*(longlong *)(param_1 + 0x108 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0xd0 + lVar1) = 0;
    if (*(int *)(param_1 + 0xd4 + lVar1) != 0) {
      FUN_14472eb64(param_1 + 200 + lVar1,0);
    }
    *(undefined8 *)(param_1 + 0xf8 + lVar1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf0 + lVar1) = 0;
    if (0x80 < *(uint *)(param_1 + 0xf4 + lVar1)) {
      *(undefined4 *)(param_1 + 0xf4 + lVar1) = 0x80;
      FUN_1446efbd8(param_1 + 0xd8 + lVar1);
    }
    if (*(longlong *)(param_1 + 0xe8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 200 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  return;
}



// FUNCTION 141219f1e FUN_141219f1e body=74 status=ok
// SIG undefined FUN_141219f1e(void)

void FUN_141219f1e(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdfb50;
  if (*(longlong *)(param_1 + 0x458) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0x248;
  do {
    FUN_140b623da(param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1d8);
  return;
}



// FUNCTION 141219f68 FUN_141219f68 body=354 status=ok
// SIG undefined FUN_141219f68(void)

void FUN_141219f68(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdf9d0;
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    *(undefined ***)(param_1 + 0xc0 + lVar1) = &PTR_FUN_14a46be50;
    if (*(longlong *)(param_1 + 0x128 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0xc0 + lVar1) = &PTR_FUN_14a177080;
    if (*(longlong *)(param_1 + 0x118 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x110 + lVar1) = 0;
    if (*(longlong *)(param_1 + 0x108 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0xd0 + lVar1) = 0;
    if (*(int *)(param_1 + 0xd4 + lVar1) != 0) {
      FUN_14472eb64(param_1 + 200 + lVar1,0);
    }
    *(undefined8 *)(param_1 + 0xf8 + lVar1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xf0 + lVar1) = 0;
    if (0x80 < *(uint *)(param_1 + 0xf4 + lVar1)) {
      *(undefined4 *)(param_1 + 0xf4 + lVar1) = 0x80;
      FUN_1446efbd8(param_1 + 0xd8 + lVar1);
    }
    if (*(longlong *)(param_1 + 0xe8 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 200 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  return;
}



// FUNCTION 14121a0ca FUN_14121a0ca body=481 status=ok
// SIG undefined FUN_14121a0ca(void)

void FUN_14121a0ca(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = plVar1;
  if ((int)param_1[5] == 0) {
    uVar15 = 1;
    local_58._4_4_ = 0;
    uVar14 = 0xffffffff;
    iVar16 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar15 = local_68 >> 0x20;
    uVar14 = (uint)local_58;
    iVar16 = (int)local_68;
  }
  plVar7 = local_60;
  iVar9 = local_58._4_4_;
  iVar12 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      plVar10 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar9 * 0x20);
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        plVar2 = plVar10 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*plVar10)(plVar10);
          LOCK();
          piVar3 = (int *)((longlong)plVar10 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar10 + 0x10))(plVar10);
          }
        }
      }
      uVar14 = uVar14 & ~(uint)uVar15;
      plVar10 = (longlong *)plVar7[2];
      if ((longlong *)plVar7[2] == (longlong *)0x0) {
        plVar10 = plVar7;
      }
      iVar5 = (int)plVar7[3];
      lVar13 = (longlong)iVar16;
      uVar8 = *(uint *)((longlong)plVar10 + lVar13 * 4) & uVar14;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar6 = iVar9;
        if (iVar9 < iVar16) {
          iVar6 = iVar16;
        }
        if (iVar9 <= iVar16) break;
        lVar11 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar8 = *(uint *)((longlong)plVar10 + lVar11 * 4 + lVar13 * 4 + 4);
          if (uVar8 != 0) break;
          lVar11 = lVar11 + 1;
          if (iVar6 - lVar13 == lVar11) goto LAB_14121a201;
        }
        iVar16 = iVar16 + (int)lVar11 + 1;
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar9 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
    } while (iVar9 < iVar5);
  }
LAB_14121a201:
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
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121a2ac FUN_14121a2ac body=57 status=ok
// SIG undefined FUN_14121a2ac(void)

void FUN_14121a2ac(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdf7a0;
  lVar1 = 0x270;
  do {
    FUN_140b623da(param_1 + lVar1);
    lVar1 = lVar1 + -0x210;
  } while (lVar1 != -0x1b0);
  return;
}



// FUNCTION 14121a2e6 FUN_14121a2e6 body=417 status=ok
// SIG undefined FUN_14121a2e6(void)

void FUN_14121a2e6(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14afdf6f0;
  lVar1 = 0;
  do {
    *(undefined **)(param_1 + 0x100 + lVar1) = &DAT_14a176f00;
    if (*(longlong *)(param_1 + 0x170 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined ***)(param_1 + 0x100 + lVar1) = &PTR_FUN_14a177080;
    if (*(longlong *)(param_1 + 0x158 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x150 + lVar1) = 0;
    if (*(longlong *)(param_1 + 0x148 + lVar1) != 0) {
      FUN_1400020a8();
    }
    *(undefined4 *)(param_1 + 0x110 + lVar1) = 0;
    if (*(int *)(param_1 + 0x114 + lVar1) != 0) {
      FUN_14472eb64(param_1 + 0x108 + lVar1,0);
    }
    *(undefined8 *)(param_1 + 0x138 + lVar1) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x130 + lVar1) = 0;
    if (0x80 < *(uint *)(param_1 + 0x134 + lVar1)) {
      *(undefined4 *)(param_1 + 0x134 + lVar1) = 0x80;
      FUN_1446efbd8(param_1 + 0x118 + lVar1);
    }
    if (*(longlong *)(param_1 + 0x128 + lVar1) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x108 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x90;
  } while (lVar1 != -0x120);
  FUN_144760e21(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14121a488 FUN_14121a488 body=48 status=ok
// SIG undefined FUN_14121a488(void)

void FUN_14121a488(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4047d8);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 14121a4b8 FUN_14121a4b8 body=327 status=ok
// SIG undefined FUN_14121a4b8(void)

undefined8
FUN_14121a4b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined2 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_98 [32];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)FUN_14121a6ae();
  lVar2 = plVar1[0x22];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar2 = plVar1[0x22];
    if (lVar2 == 0) goto LAB_14121a52a;
  }
  FUN_14121a636(lVar2,&local_58,param_3);
  lVar2 = local_58;
  lVar5 = (longlong)local_50;
  iVar3 = 0;
  if (lVar5 != 0) {
    lVar6 = 0;
    do {
      puVar4 = &DAT_149dfb77a;
      if (*(int *)(lVar2 + 8 + lVar6) != 0) {
        puVar4 = *(undefined2 **)(lVar2 + lVar6);
      }
      FUN_140056680(local_78,puVar4);
      FUN_14121a600(param_1,local_68,local_78,param_4);
      if (local_68[0] != 0) {
        FUN_1400020a8();
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
      lVar6 = lVar6 + 0x10;
      iVar3 = local_50;
    } while (lVar5 * 0x10 != lVar6);
  }
  FUN_1447a1747(local_58,iVar3);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
LAB_14121a52a:
  FUN_14121a600(param_1,param_2,param_3,param_4);
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14121a600 FUN_14121a600 body=54 status=ok
// SIG undefined FUN_14121a600(void)

undefined8 FUN_14121a600(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x430) == 0) {
    FUN_140056680(param_2,&DAT_149dfb77a);
  }
  else {
    FUN_14121a794(*(longlong *)(param_1 + 0x430),param_2);
  }
  return param_2;
}



// FUNCTION 14121a636 FUN_14121a636 body=120 status=ok
// SIG undefined FUN_14121a636(void)

undefined8 * FUN_14121a636(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_1 + 0x40) * 0x30;
    lVar2 = *(longlong *)(param_1 + 0x38) + 0x10;
    do {
      iVar1 = *(int *)(lVar2 + -8);
      if (iVar1 == *(int *)(param_3 + 1)) {
        if (1 < iVar1) {
          iVar1 = FUN_144a80a00(*(undefined8 *)(lVar2 + -0x10),*param_3);
          if (iVar1 != 0) goto LAB_14121a675;
        }
LAB_14121a6a1:
        FUN_140b7fa3a(param_2,lVar2);
      }
      else if (*(int *)(param_3 + 1) + iVar1 == 1) goto LAB_14121a6a1;
LAB_14121a675:
      lVar2 = lVar2 + 0x30;
      lVar3 = lVar3 + -0x30;
    } while (lVar3 != 0);
  }
  return param_2;
}



// FUNCTION 14121a6ae FUN_14121a6ae body=228 status=ok
// SIG undefined FUN_14121a6ae(void)

longlong FUN_14121a6ae(void)

{
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined2 *local_48;
  code *local_40;
  undefined1 *local_38;
  code **local_30;
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb5c180 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140eca530;
    local_38 = &LAB_148685056;
    local_40 = FUN_1464d46a1;
    local_48 = &DAT_149e063b2;
    local_50 = 0;
    local_58 = 0x10000006;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxConsoleCommands",&DAT_14cb5c180,FUN_1464d467a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb5c180;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121a794 FUN_14121a794 body=711 status=ok
// SIG undefined FUN_14121a794(void)

longlong * FUN_14121a794(longlong *param_1,longlong *param_2,undefined8 *param_3,char param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  wchar_t *_Dest;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  int iVar7;
  wchar_t *_Source;
  int iVar8;
  undefined1 auStack_c8 [44];
  undefined4 local_9c;
  undefined ***local_98;
  longlong *local_90;
  wchar_t *local_88;
  int local_80;
  wchar_t *local_78;
  undefined **local_70;
  undefined2 local_68;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_1 != (longlong *)0x0) {
    lVar3 = FUN_140496b24();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(param_1[2] + 0x38)) &&
        (*(longlong *)(*(longlong *)(param_1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)) && (param_1[0x13] != 0)) {
      local_9c = (undefined4)CONCAT71((int7)((ulonglong)(lVar3 + 0x30) >> 8),param_1[6] == 0);
      goto LAB_14121a7f6;
    }
  }
  local_9c = 0;
LAB_14121a7f6:
  local_90 = param_2;
  if (*(longlong *)(DAT_14cb0d2b0 + 0xc20) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0xc20) + 0x40);
    if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  FUN_140056680(&local_60,&DAT_149dfb77a);
  local_68 = 0;
  local_70 = &PTR_FUN_14a8bce60;
  local_50 = lVar3;
  if (param_4 == '\x01' && lVar3 == 0) {
    local_98 = (undefined ***)FUN_144a82cde();
  }
  else {
    local_98 = &local_70;
  }
  iVar7 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar7 = 0;
  }
  lVar3 = (longlong)iVar7 * 2 + 2;
  _Dest = (wchar_t *)FUN_14001cc68(lVar3,0);
  uVar4 = FUN_14001cc68(lVar3,0);
  puVar6 = &DAT_149dfb77a;
  iVar8 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar8 = 0;
  }
  else {
    puVar6 = (undefined2 *)*param_3;
  }
  if (iVar7 < iVar8) {
    iVar8 = iVar7;
  }
  if (iVar8 < 1) {
    iVar8 = 0;
  }
  local_78 = _Dest;
  FUN_14006620a(&local_88,puVar6,iVar8);
  _Source = L"";
  if (local_80 != 0) {
    _Source = local_88;
  }
  wcscpy(_Dest,_Source);
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  cVar2 = FUN_14121aa5c(&local_78,uVar4,iVar7 + 1,0);
  if (cVar2 != '\0') {
    do {
      if (((char)local_9c != '\0') || (param_1[6] != 0)) {
        uVar5 = (**(code **)(*param_1 + 0x180))(param_1);
        cVar2 = (**(code **)(param_1[5] + 8))(param_1 + 5,uVar5,uVar4,local_98);
        if (cVar2 == '\0') {
          FUN_140047918(&local_70,L"Command not recognized: %s",uVar4);
        }
      }
      cVar2 = FUN_14121aa5c(&local_78,uVar4,iVar7 + 1,0);
    } while (cVar2 != '\0');
  }
  FUN_1400020a8(_Dest);
  FUN_1400020a8(uVar4);
  plVar1 = local_90;
  if (param_4 == '\0') {
    *local_90 = local_60;
    *(undefined4 *)(local_90 + 1) = local_58;
    *(undefined4 *)((longlong)local_90 + 0xc) = local_54;
  }
  else {
    FUN_140056680(local_90,&DAT_149dfb77a);
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar1;
}



// FUNCTION 14121aa5c FUN_14121aa5c body=267 status=ok
// SIG undefined FUN_14121aa5c(void)

undefined8 FUN_14121aa5c(undefined8 *param_1,ushort *param_2,int param_3,byte param_4)

{
  byte bVar1;
  uint7 uVar2;
  bool bVar3;
  byte bVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  *param_2 = 0;
  bVar1 = 0;
  uVar2 = 0;
  bVar4 = 0;
LAB_14121aa73:
  bVar3 = false;
  puVar7 = (ushort *)*param_1;
  do {
    puVar6 = puVar7 + 1;
    uVar5 = *puVar7;
    if (((uVar5 < 0xe) && ((0x2401U >> (uVar5 & 0x1f) & 1) != 0)) || (param_3 < 2)) {
      if (param_4 == 0) {
LAB_14121aae5:
        while (((uVar5 == 10 || (uVar5 == 0x7c)) || (uVar5 == 0xd))) {
          *param_1 = puVar6;
          uVar5 = *puVar6;
          puVar6 = puVar6 + 1;
        }
      }
      else {
        if (uVar5 == 0xd) {
          *param_1 = puVar6;
          uVar5 = *puVar6;
          puVar7 = puVar6;
        }
        if (uVar5 == 10) {
          *param_1 = puVar7 + 1;
        }
      }
      *param_2 = 0;
      return CONCAT71(uVar2,bVar1 | *(short *)*param_1 != 0);
    }
    if ((~(bVar4 | param_4) & uVar5 == 0x2f) == 0) {
      if ((bVar4 == 0 && (param_4 & 1) == 0) && uVar5 == 0x7c) goto LAB_14121aae5;
      bVar4 = bVar4 ^ uVar5 == 0x22;
    }
    else {
      bVar3 = (bool)(bVar3 | *puVar6 == 0x2f);
      bVar4 = 0;
    }
    if (!bVar3) break;
    *param_1 = puVar6;
    param_3 = param_3 + -1;
    bVar1 = 1;
    bVar3 = true;
    puVar7 = puVar6;
  } while( true );
  *param_1 = puVar6;
  uVar5 = *puVar7;
  *param_2 = uVar5;
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
  uVar2 = (uint7)(byte)(uVar5 >> 8);
  bVar1 = 1;
  goto LAB_14121aa73;
}



// FUNCTION 14121ab67 FUN_14121ab67 body=41 status=ok
// SIG undefined FUN_14121ab67(void)

void FUN_14121ab67(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14121ab90(param_1);
    param_1 = param_1 + 0x308;
  }
  return;
}



// FUNCTION 14121ab90 FUN_14121ab90 body=470 status=ok
// SIG undefined FUN_14121ab90(void)

void FUN_14121ab90(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x2f0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0x2b8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2b8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x2a0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x2a0) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x240) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  plVar3 = *(longlong **)(param_1 + 0x1b0);
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
  plVar3 = *(longlong **)(param_1 + 0x1a0);
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
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x160) != 0) {
    FUN_1400020a8();
  }
  FUN_1410d3d66(*(undefined8 *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x150));
  if (*(longlong *)(param_1 + 0x148) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong **)(param_1 + 0xf8) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xf8) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xe0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
  }
  if (*(longlong **)(param_1 + 200) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 200) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0xb0) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x10))();
  }
  if (*(longlong **)(param_1 + 0x90) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14121ad66 FUN_14121ad66 body=60 status=ok
// SIG undefined FUN_14121ad66(void)

void FUN_14121ad66(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_14121ada2(param_1,param_2);
    param_1 = param_1 + 0x308;
    param_2 = param_2 + 0x308;
  }
  return;
}



// FUNCTION 14121ada2 FUN_14121ada2 body=1959 status=ok
// SIG undefined FUN_14121ada2(void)

undefined8 * FUN_14121ada2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  FUN_1447715ec();
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar4 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar5 = *(undefined4 *)(param_2 + 7);
  uVar6 = *(undefined4 *)((longlong)param_2 + 0x3c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar4;
  *(undefined4 *)(param_1 + 7) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar6;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)((longlong)param_2 + 0x44);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)((longlong)param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0xb);
    pvVar2 = (void *)param_2[10];
    *(int *)(param_1 + 0xb) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 10,iVar1,0);
      memcpy((void *)param_1[10],pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
    iVar1 = *(int *)(param_2 + 0xe);
    pvVar2 = (void *)param_2[0xd];
    *(int *)(param_1 + 0xe) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0xd,iVar1,0);
      memcpy((void *)param_1[0xd],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)param_2 + 0x84);
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  FUN_140dd90de(param_1 + 0x12,param_2 + 0x12);
  param_1[0x15] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  FUN_140dd90de(param_1 + 0x16,param_2 + 0x16);
  FUN_140dd90de(param_1 + 0x19,param_2 + 0x19);
  FUN_140dd90de(param_1 + 0x1c,param_2 + 0x1c);
  FUN_140dd90de(param_1 + 0x1f,param_2 + 0x1f);
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x24) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x124) = *(undefined4 *)((longlong)param_2 + 0x124);
  *(undefined1 *)(param_1 + 0x25) = 0;
  *(undefined4 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined4 *)((longlong)param_1 + 300) = *(undefined4 *)((longlong)param_2 + 300);
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x134);
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x27);
  *(undefined4 *)((longlong)param_1 + 0x13c) = *(undefined4 *)((longlong)param_2 + 0x13c);
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_2 + 0x144);
  param_1[0x29] = 0;
  iVar1 = *(int *)(param_2 + 0x2a);
  uVar3 = param_2[0x29];
  *(int *)(param_1 + 0x2a) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  }
  else {
    FUN_141590714(param_1 + 0x29,iVar1,0);
    FUN_14159085b(param_1[0x29],uVar3,iVar1);
  }
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x2d);
    pvVar2 = (void *)param_2[0x2c];
    *(int *)(param_1 + 0x2d) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x16c) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x2c,iVar1,0);
      memcpy((void *)param_1[0x2c],pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x2e) = *(undefined4 *)(param_2 + 0x2e);
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    *(undefined4 *)(param_1 + 0x31) = 0;
    iVar1 = *(int *)(param_2 + 0x30);
    pvVar2 = (void *)param_2[0x2f];
    *(int *)(param_1 + 0x30) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x184) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x2f,iVar1,0);
      memcpy((void *)param_1[0x2f],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x31) = *(undefined4 *)(param_2 + 0x31);
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)(param_2 + 0x32);
  *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_2 + 0x194);
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1cc) = 0;
  FUN_1410d422e(param_1 + 0x33,param_2 + 0x33);
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x3a);
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)(param_2 + 0x3b);
  *(undefined4 *)((longlong)param_1 + 0x1dc) = *(undefined4 *)((longlong)param_2 + 0x1dc);
  *(undefined1 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(param_2 + 0x3c);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x1e4);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(param_2 + 0x3d);
  *(undefined4 *)((longlong)param_1 + 0x1ec) = *(undefined4 *)((longlong)param_2 + 0x1ec);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  *(undefined4 *)((longlong)param_1 + 500) = 0;
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x3e);
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)((longlong)param_2 + 500);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  *(undefined1 *)(param_1 + 0x3f) = *(undefined1 *)(param_2 + 0x3f);
  *(undefined4 *)((longlong)param_1 + 0x1fc) = *(undefined4 *)((longlong)param_2 + 0x1fc);
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x204) = *(undefined4 *)((longlong)param_2 + 0x204);
  param_1[0x41] = 0;
  iVar1 = *(int *)(param_2 + 0x42);
  pvVar2 = (void *)param_2[0x41];
  *(int *)(param_1 + 0x42) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0x41,iVar1,0);
    memcpy((void *)param_1[0x41],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x43] = param_2[0x43];
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  FUN_1447715ec(param_1 + 0x45,param_2 + 0x45);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_2 + 0x4a);
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  FUN_1447715ec(param_1 + 0x4b,param_2 + 0x4b);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0;
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(param_2 + 0x51);
  *(undefined4 *)((longlong)param_1 + 0x28c) = *(undefined4 *)((longlong)param_2 + 0x28c);
  *(undefined1 *)(param_1 + 0x52) = 0;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0;
  *(undefined1 *)(param_1 + 0x52) = *(undefined1 *)(param_2 + 0x52);
  *(undefined4 *)((longlong)param_1 + 0x294) = *(undefined4 *)((longlong)param_2 + 0x294);
  *(undefined1 *)(param_1 + 0x53) = 0;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0;
  *(undefined1 *)(param_1 + 0x53) = *(undefined1 *)(param_2 + 0x53);
  *(undefined4 *)((longlong)param_1 + 0x29c) = *(undefined4 *)((longlong)param_2 + 0x29c);
  FUN_140dd90de(param_1 + 0x54,param_2 + 0x54);
  FUN_140dd90de(param_1 + 0x57,param_2 + 0x57);
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5a] = param_2[0x5a];
  *(undefined4 *)(param_1 + 0x5b) = *(undefined4 *)(param_2 + 0x5b);
  param_1[0x5c] = 0;
  *(undefined4 *)(param_1 + 0x5d) = 0;
  param_1[0x5c] = param_2[0x5c];
  *(undefined4 *)(param_1 + 0x5d) = *(undefined4 *)(param_2 + 0x5d);
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x5f);
    pvVar2 = (void *)param_2[0x5e];
    *(int *)(param_1 + 0x5f) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2fc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x5e,iVar1,0);
      memcpy((void *)param_1[0x5e],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return param_1;
}



// FUNCTION 14121b54a FUN_14121b54a body=626 status=ok
// SIG undefined FUN_14121b54a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14121b54a(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  
  plVar8 = (longlong *)*param_3;
  lVar9 = *plVar8;
  if (lVar9 == 0) {
LAB_14121b6f4:
    lVar9 = 0;
LAB_14121b6f7:
    plVar8 = (longlong *)0x0;
  }
  else {
    uVar5 = FUN_14121b7bc();
    cVar4 = FUN_1448093f4(lVar9,uVar5);
    if (cVar4 == '\0') goto LAB_14121b6f4;
    lVar9 = *plVar8;
    plVar8 = (longlong *)plVar8[1];
    if (plVar8 == (longlong *)0x0) goto LAB_14121b6f7;
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  lVar3 = param_3[1];
  plVar6 = (longlong *)FUN_14001cc68(0xd8,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b42e730;
  plVar6[7] = 0;
  plVar6[8] = 0;
  *(undefined1 *)((longlong)plVar6 + 0x1c) = 0;
  plVar6[4] = 0;
  plVar6[5] = 0;
  plVar6[6] = 2;
  plVar6[2] = (longlong)&PTR_LAB_14b42f4f0;
  plVar6[9] = *(longlong *)(lVar3 + 8);
  lVar3 = *(longlong *)(lVar3 + 0x10);
  plVar6[10] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  plVar1 = plVar6 + 2;
  plVar6[0xd] = 0;
  plVar6[0xe] = 0;
  plVar6[0xb] = 0;
  plVar6[0xc] = 0;
  *(byte *)(plVar6 + 0xf) = *(byte *)(plVar6 + 0xf) & 0xf0;
  plVar6[2] = (longlong)&PTR_FUN_14b42e840;
  plVar6[0x10] = lVar9;
  plVar6[0x11] = (longlong)plVar8;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  plVar6[0x14] = 0;
  plVar6[0x15] = 0;
  plVar6[0x12] = 0;
  plVar6[0x13] = 0;
  *(undefined1 *)(plVar6 + 0x17) = 0;
  *(undefined1 *)(plVar6 + 0x18) = 0;
  plVar6[2] = (longlong)&PTR_FUN_14b42e750;
  plVar6[0x16] = (longlong)&PTR_FUN_14b42e820;
  plVar6[0x19] = 0;
  *(byte *)(plVar6 + 0x1a) = *(byte *)(plVar6 + 0x1a) & 0xfc;
  if ((plVar1 == (longlong *)0x0) ||
     (((plVar6[7] != 0 && (plVar6[8] != 0)) && (0 < *(int *)(plVar6[8] + 8))))) {
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
    if (plVar6 == (longlong *)0x0) goto LAB_14121b6d6;
  }
  else {
    if (plVar6 == (longlong *)0x0) {
      _DAT_00000038 = 0x10;
      plVar10 = (longlong *)&DAT_00000040;
      plVar7 = _DAT_00000040;
      if (_DAT_00000040 != (longlong *)0x0) {
LAB_14121b758:
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))();
        }
        *plVar10 = (longlong)plVar6;
        if (plVar6 != (longlong *)0x0) goto LAB_14121b6bb;
      }
      *param_2 = (longlong)plVar1;
      param_2[1] = (longlong)plVar6;
      goto LAB_14121b6d6;
    }
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    plVar6[7] = (longlong)plVar1;
    if ((longlong *)plVar6[8] != plVar6) {
      LOCK();
      *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
      UNLOCK();
      if ((longlong *)plVar6[8] != (longlong *)0x0) {
        plVar10 = plVar6 + 8;
        plVar7 = (longlong *)plVar6[8];
        goto LAB_14121b758;
      }
      plVar6[8] = (longlong)plVar6;
    }
LAB_14121b6bb:
    LOCK();
    plVar10 = plVar6 + 1;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)*plVar10 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
    *param_2 = (longlong)plVar1;
    param_2[1] = (longlong)plVar6;
  }
  LOCK();
  *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
  UNLOCK();
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
LAB_14121b6d6:
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
    }
  }
  return param_2;
}



// FUNCTION 14121b7bc FUN_14121b7bc body=57 status=ok
// SIG undefined FUN_14121b7bc(void)

void FUN_14121b7bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb66868 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb66868 = FUN_140002ddd(FUN_146510122,uVar1,L"GbxStatusEffectAspectData_AttributeEffect");
  }
  return;
}



// FUNCTION 14121b7fe FUN_14121b7fe body=189 status=ok
// SIG undefined FUN_14121b7fe(void)

undefined8 * FUN_14121b7fe(undefined8 *param_1)

{
  undefined1 auStack_58 [46];
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 *local_28;
  undefined1 *local_20;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14121b8bc();
  *param_1 = &PTR_FUN_14b65d4b0;
  param_1[6] = &PTR_FUN_14b65d7a0;
  param_1[0x9e] = 0;
  *(undefined4 *)(param_1 + 0x9f) = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa2] = 0;
  *(undefined4 *)(param_1 + 0xa3) = 0;
  local_20 = &local_29;
  local_29 = 3;
  local_28 = &local_2a;
  local_2a = 2;
  FUN_14121b98e(param_1 + 0x9a,local_14,&local_28,0);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121b8bc FUN_14121b8bc body=210 status=ok
// SIG undefined FUN_14121b8bc(void)

undefined8 * FUN_14121b8bc(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2c9340;
  param_1[6] = &PTR_FUN_14b2c9630;
  FUN_1406d2124(param_1 + 0x1b);
  FUN_1406d2124(param_1 + 0x45);
  FUN_1406d2124(param_1 + 0x6f);
  *(undefined4 *)(param_1 + 0x99) = 0x3dcccccd;
  *(undefined1 *)((longlong)param_1 + 0x4cc) = 0;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x2d) = 0x101;
    *(undefined1 *)(lVar1 + 0x2b) = 1;
  }
  return param_1;
}



// FUNCTION 14121b98e FUN_14121b98e body=1395 status=ok
// SIG undefined FUN_14121b98e(void)

int * FUN_14121b98e(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  byte *pbVar1;
  ulonglong uVar2;
  uint *puVar3;
  byte *pbVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  byte bVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  int iVar20;
  longlong lVar21;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1447cc1b4(param_1,iVar19);
    }
    iVar20 = (int)param_1[5];
    if (iVar20 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar11 = iVar20 + 1;
    iVar15 = iVar20 + 0x1f;
    if (-1 < iVar20) {
      iVar15 = iVar20;
    }
    if (iVar15 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar20) {
        if (iVar20 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar6 = iVar20;
        }
        else {
          uVar14 = iVar20 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar13 = 4;
            if (4 < uVar14) {
              uVar13 = uVar14;
            }
          }
          else {
            uVar13 = (uVar14 * 3 >> 3) + uVar14 + 0x10;
          }
          uVar8 = FUN_144a3809e(uVar13 << 2,0);
          iVar6 = (int)(uVar8 >> 2);
          iVar11 = -0x20;
          if ((int)uVar14 <= iVar6) {
            iVar11 = iVar6 << 5;
          }
          iVar6 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar9,iVar6);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar6 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar6 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar10 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar6 >> 5) * 4) << (bVar10 & 0x1f)) >>
             (bVar10 & 0x1f);
      }
    }
    lVar7 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar10 = (byte)iVar20 & 0x1f;
    puVar3 = (uint *)((longlong)plVar9 + (longlong)(iVar15 >> 5) * 4);
    *puVar3 = *puVar3 & (-2 << bVar10 | 0xfffffffeU >> 0x20 - bVar10);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar7 = (longlong)iVar19;
    iVar20 = *(int *)(*param_1 + 4 + lVar7 * 0xc);
    *(int *)(param_1 + 6) = iVar20;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar20 * 0xc) = 0xffffffff;
    }
  }
  puVar3 = (uint *)(param_1 + 2);
  puVar12 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar12 = puVar3;
  }
  iVar20 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar20 = iVar19;
  }
  puVar12[iVar20 >> 5] = puVar12[iVar20 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  pbVar1 = (byte *)(*param_1 + lVar7 * 0xc);
  pbVar4 = (byte *)param_3[1];
  bVar10 = *(byte *)*param_3;
  *pbVar1 = bVar10;
  pbVar1[1] = *pbVar4;
  pbVar1[4] = 0xff;
  pbVar1[5] = 0xff;
  pbVar1[6] = 0xff;
  pbVar1[7] = 0xff;
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) == 1) ||
     ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34))) {
LAB_14121ba99:
    cVar5 = '\0';
  }
  else {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar20 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & (uint)bVar10) * 4);
    if (iVar20 == -1) goto LAB_14121ba99;
    do {
      pbVar4 = (byte *)(*param_1 + (longlong)iVar20 * 0xc);
      if (*pbVar4 == bVar10) {
        *(undefined2 *)pbVar4 = *(undefined2 *)pbVar1;
        FUN_148e2133a(param_1,iVar19);
        cVar5 = '\x01';
        iVar19 = iVar20;
        break;
      }
      iVar20 = *(int *)(pbVar4 + 4);
      cVar5 = '\0';
    } while (iVar20 != -1);
  }
  if (param_4 != (char *)0x0) {
    *param_4 = cVar5;
  }
  if (cVar5 != '\0') goto LAB_14121bca2;
  uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar14 = 1;
  if (3 < uVar13) {
    uVar8 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
    lVar7 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    uVar14 = 1 << ((byte)lVar7 & 0x1f);
  }
  if (((int)uVar13 < 1) || ((int)uVar14 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & (uint)bVar10;
    *(uint *)(pbVar1 + 8) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(pbVar1 + 4) =
         *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4) = iVar19;
    goto LAB_14121bca2;
  }
  *(uint *)(param_1 + 9) = uVar14;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar14 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar14 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_14121bafc:
    uVar13 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar13) * 4) =
           0xffffffff;
      uVar13 = uVar13 + 1;
    } while (uVar14 != uVar13);
  }
  else {
    if (uVar14 == 0) goto LAB_14121bca2;
    FUN_1446efa72(plVar9,0,uVar14,4);
    if (0 < (int)uVar14) goto LAB_14121bafc;
  }
  iVar20 = (int)param_1[5];
  if (iVar20 == 0) {
    uVar8 = 0;
    uVar18 = 1;
    iVar6 = 0;
    iVar11 = 0;
  }
  else {
    puVar12 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar12 = puVar3;
    }
    uVar14 = *puVar12;
    if (uVar14 == 0) {
      iVar6 = iVar20 + 0x1e;
      if (-1 < iVar20 + -1) {
        iVar6 = iVar20 + -1;
      }
      uVar8 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar8;
      }
      iVar11 = 0;
      do {
        if (uVar18 == uVar8) goto LAB_14121bca2;
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar12[uVar8 + 1];
        uVar8 = uVar8 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar8 = 0;
      iVar11 = 0;
    }
    uVar18 = (ulonglong)(-uVar14 & uVar14);
    uVar2 = uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    if (iVar20 <= iVar6) {
      iVar6 = iVar20;
    }
  }
  if (iVar6 < iVar20) {
    uVar14 = 0xffffffff;
    do {
      lVar7 = *param_1;
      lVar21 = (longlong)iVar6;
      uVar13 = (int)param_1[9] - 1U & (uint)*(byte *)(lVar7 + lVar21 * 0xc);
      *(uint *)(lVar7 + 8 + lVar21 * 0xc) = uVar13;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)(lVar7 + 4 + lVar21 * 0xc) =
           *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar13) * 4) = iVar6;
      uVar14 = ~(uint)uVar18 & uVar14;
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puVar3;
      }
      iVar20 = (int)param_1[5];
      iVar6 = (int)uVar8;
      lVar7 = (longlong)iVar6;
      uVar13 = puVar12[lVar7] & uVar14;
      if (uVar13 == 0) {
        iVar15 = iVar20 + 0x1e;
        if (-1 < iVar20 + -1) {
          iVar15 = iVar20 + -1;
        }
        iVar15 = iVar15 >> 5;
        iVar16 = iVar15;
        if (iVar15 < iVar6) {
          iVar16 = iVar6;
        }
        if (iVar15 <= iVar6) break;
        lVar21 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar13 = puVar12[lVar7 + lVar21 + 1];
          if (uVar13 != 0) break;
          lVar21 = lVar21 + 1;
          if (iVar16 - lVar7 == lVar21) goto LAB_14121bca2;
        }
        uVar8 = (ulonglong)(iVar6 + (int)lVar21 + 1);
        uVar14 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar13 & uVar13);
      uVar2 = uVar18 * 2 + 1;
      lVar7 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = (iVar11 - ((uint)lVar7 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar20);
  }
LAB_14121bca2:
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 14121bf02 FUN_14121bf02 body=228 status=ok
// SIG undefined FUN_14121bf02(void)

longlong FUN_14121bf02(void)

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
  if (DAT_14cabfc58 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459d4a5e;
    local_38 = &LAB_147861681;
    local_40 = FUN_146372278;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/Engine",L"DistributionFloat",&DAT_14cabfc58,&DAT_147861680);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabfc58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121bfe8 FUN_14121bfe8 body=228 status=ok
// SIG undefined FUN_14121bfe8(void)

longlong FUN_14121bfe8(void)

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
  if (DAT_14cb1ee38 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_147eb0a5f;
    local_40 = FUN_146429434;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x50;
    FUN_14081cfa3(L"/Script/AIModule",L"BlackboardData",&DAT_14cb1ee38,&DAT_147eb0a5e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1ee38;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c0ce FUN_14121c0ce body=228 status=ok
// SIG undefined FUN_14121c0ce(void)

longlong FUN_14121c0ce(void)

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
  if (DAT_14cb28aa8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146454fa6;
    local_38 = &LAB_147fc0a89;
    local_40 = FUN_145b01711;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xe8;
    FUN_14081cfa3(L"/Script/TemplateSequence",L"CameraAnimationSequence",&DAT_14cb28aa8,
                  &DAT_147fc0a88);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb28aa8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c1b4 FUN_14121c1b4 body=228 status=ok
// SIG undefined FUN_14121c1b4(void)

longlong FUN_14121c1b4(void)

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
  if (DAT_14cb45880 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14635838e;
    local_38 = &LAB_148235c9b;
    local_40 = &LAB_146482458;
    local_48 = L"CommonUI";
    local_50 = 0;
    local_58 = 0x10000002;
    local_60 = 0x10;
    local_68 = 0x350;
    FUN_14081cfa3(L"/Script/CommonUI",L"CommonTextBlock",&DAT_14cb45880,FUN_146482436);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb45880;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c29a FUN_14121c29a body=228 status=ok
// SIG undefined FUN_14121c29a(void)

longlong FUN_14121c29a(void)

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
  if (DAT_14cb4ca08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1464937d6;
    local_38 = &LAB_1484ddd25;
    local_40 = FUN_145c8c4ef;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x148;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"MeshElementsVisualizer",&DAT_14cb4ca08,
                  &DAT_1484ddd24);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4ca08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c380 FUN_14121c380 body=228 status=ok
// SIG undefined FUN_14121c380(void)

longlong FUN_14121c380(void)

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
  if (DAT_14cb4cc30 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145859cec;
    local_38 = &LAB_1484f0d37;
    local_40 = &LAB_145df1012;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 0x10;
    local_68 = 0xf0;
    FUN_14081cfa3(L"/Script/ModelingComponents",L"ConstructionPlaneMechanic",&DAT_14cb4cc30,
                  &DAT_1484f0d36);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4cc30;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c466 FUN_14121c466 body=228 status=ok
// SIG undefined FUN_14121c466(void)

longlong FUN_14121c466(void)

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
  if (DAT_14cbf3b50 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e62b54;
    local_38 = &LAB_148f71d33;
    local_40 = &LAB_145ef40e0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0xb8;
    FUN_14081cfa3(L"/Script/MeshModelingTools",L"NewMeshMaterialProperties",&DAT_14cbf3b50,
                  &DAT_148f71d32);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf3b50;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121c54c FUN_14121c54c body=64 status=ok
// SIG undefined FUN_14121c54c(void)

void FUN_14121c54c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14121c58c FUN_14121c58c body=197 status=ok
// SIG undefined FUN_14121c58c(void)

void FUN_14121c58c(undefined8 param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403d8a98();
  if (((param_2 == 3) && (lVar5 = FUN_1447210f0(param_1), lVar5 != 0)) &&
     (FUN_1408b794c(&local_28,lVar5), local_20 != (longlong *)0x0)) {
    iVar4 = (int)local_20[1];
    do {
      if (iVar4 == 0) {
        plVar6 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar3 = (int)local_20[1];
      bVar7 = iVar4 == iVar3;
      if (bVar7) {
        *(int *)(local_20 + 1) = iVar4 + 1;
        iVar3 = iVar4;
      }
      iVar4 = iVar3;
      UNLOCK();
      plVar6 = local_20;
    } while (!bVar7);
    LOCK();
    piVar1 = (int *)((longlong)local_20 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_20 + 0x10))();
    }
    if (plVar6 != (longlong *)0x0) {
      if (local_28 != 0) {
        FUN_14121c652(local_28,param_1);
      }
      LOCK();
      plVar2 = plVar6 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14121c652 FUN_14121c652 body=1315 status=ok
// SIG undefined FUN_14121c652(void)

void FUN_14121c652(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_108 [46];
  byte local_da;
  byte local_d9;
  int local_d8;
  int local_d4;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined8 local_a8;
  uint local_a0;
  int local_9c;
  undefined8 local_98;
  undefined4 local_90;
  byte local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_9c = 0;
  if (param_2 == 0) {
    local_a0 = 0;
    iVar8 = 0;
  }
  else {
    local_a0 = *(uint *)(param_2 + 0xc);
    if ((int)local_a0 < DAT_14c9647dc) {
      lVar13 = (ulonglong)((local_a0 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_a0 >> 0x10) * 8);
    }
    else {
      lVar13 = 0;
    }
    iVar8 = *(int *)(lVar13 + 0x10);
    if (*(int *)(lVar13 + 0x10) == 0) {
      LOCK();
      iVar8 = DAT_14c964868 + 1;
      UNLOCK();
      iVar15 = DAT_14c964868 + 1;
      bVar19 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar8;
      if (bVar19) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar15);
      }
      LOCK();
      iVar8 = *(int *)(lVar13 + 0x10);
      bVar19 = iVar8 == 0;
      if (bVar19) {
        *(int *)(lVar13 + 0x10) = iVar15;
        iVar8 = 0;
      }
      UNLOCK();
      if (bVar19) {
        iVar8 = iVar15;
      }
    }
  }
  iVar15 = *(int *)(param_1 + 0x58);
  lVar13 = (longlong)iVar15;
  local_9c = iVar8;
  if (lVar13 != 0) {
    lVar18 = *(longlong *)(param_1 + 0x50);
    local_d0 = param_1;
    bVar6 = FUN_140af4aee(lVar18,&local_a0);
    local_c0 = lVar18 + 8;
    iVar8 = 0;
    iVar12 = 0;
    local_c8 = lVar18;
    do {
      local_d9 = bVar6;
      local_da = local_d9 ^ 1;
      lVar18 = (longlong)iVar12;
      iVar14 = iVar12 + 1;
      if (iVar12 + 1 < iVar15) {
        iVar14 = iVar15;
      }
      lVar17 = local_c0 + lVar18 * 8;
      bVar6 = local_d9 & 1;
      lVar9 = lVar18;
      local_d8 = iVar8;
      local_d4 = iVar12;
      do {
        lVar9 = lVar9 + 1;
        iVar8 = iVar14;
        if (lVar13 <= lVar9) break;
        bVar7 = FUN_140af4aee(lVar17,&local_a0);
        iVar12 = iVar12 + 1;
        lVar17 = lVar17 + 8;
        iVar8 = iVar12;
      } while (bVar6 == bVar7);
      iVar12 = iVar8;
      iVar8 = local_d8;
      bVar6 = local_da;
      if ((local_d9 & 1) == 0) {
        iVar14 = iVar12 - local_d4;
        if (local_d8 != local_d4) {
          memmove((void *)(local_c8 + (longlong)local_d8 * 8),(void *)(local_c8 + lVar18 * 8),
                  (longlong)iVar14 << 3);
        }
        iVar8 = iVar8 + iVar14;
      }
      param_1 = local_d0;
    } while (lVar9 < lVar13);
    *(int *)(local_d0 + 0x58) = iVar8;
    if ((((((iVar8 < iVar15) && (*(int *)(local_d0 + 0xc) != 0)) &&
          (uVar3 = *(uint *)(local_d0 + 8), -1 < (int)uVar3)) &&
         (((int)uVar3 < DAT_14c9647dc &&
          (plVar11 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar11 != (longlong *)0x0)))) &&
        (((int)plVar11[2] == *(int *)(local_d0 + 0xc) &&
         (((*(uint *)(plVar11 + 1) & 0x10200000) == 0 && (lVar13 = *plVar11, lVar13 != 0)))))) &&
       (*(longlong *)(local_d0 + 0x68) == 0)) {
      if (*(longlong *)(lVar13 + 0x1f0) == 0) {
        puVar16 = (undefined8 *)(lVar13 + 0x458);
      }
      else {
        puVar16 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
      }
      uVar5 = *puVar16;
      local_b8 = (undefined8 *)0x0;
      local_b0 = 0;
      FUN_1446efa72(&local_b8,0,3,0x10);
      local_b0 = 3;
      plVar11 = *(longlong **)(param_1 + 0x18);
      if (plVar11 == (longlong *)0x0) {
LAB_14121ca7b:
        *local_b8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar18 == 0) {
          LOCK();
          UNLOCK();
          lVar18 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_b8[2] = lVar18;
        *local_b8 = &PTR_FUN_14b9e1dc0;
        local_b8[3] = 0;
        local_b8[4] = 0;
        local_b8[5] = local_d0;
        param_1 = local_d0;
      }
      else {
        iVar8 = (int)plVar11[1];
        do {
          if (iVar8 == 0) goto LAB_14121ca7b;
          LOCK();
          iVar15 = (int)plVar11[1];
          bVar19 = iVar8 == iVar15;
          if (bVar19) {
            *(int *)(plVar11 + 1) = iVar8 + 1;
            iVar15 = iVar8;
          }
          iVar8 = iVar15;
          UNLOCK();
        } while (!bVar19);
        uVar4 = *(undefined8 *)(param_1 + 0x10);
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
        UNLOCK();
        *local_b8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar18 = DAT_14c758608 + 1;
        lVar13 = DAT_14c758608 + 1;
        if (lVar18 == 0) {
          LOCK();
          UNLOCK();
          lVar18 = DAT_14c758608 + 2;
          lVar13 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar13;
        local_b8[2] = lVar18;
        *local_b8 = &PTR_FUN_14b9e1dc0;
        local_b8[3] = uVar4;
        local_b8[4] = plVar11;
        LOCK();
        *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
        UNLOCK();
        local_b8[5] = param_1;
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        LOCK();
        plVar1 = plVar11 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar11)(plVar11);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
      }
      local_98 = 0;
      local_90 = 0;
      FUN_14487d8d8(&local_98,&local_b8);
      local_58 = 1;
      FUN_14016fdb0(uVar5,&local_a8,&local_98);
      (*(code *)(&PTR_LAB_14a1c87a0)[local_58])(&local_98);
      *(undefined8 *)(param_1 + 0x68) = local_a8;
      if (local_b0 == 0) {
LAB_14121c979:
        if (local_b8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
      else if (local_b8 != (undefined8 *)0x0) {
        (**(code **)*local_b8)(local_b8,0);
        FUN_1446efa72(&local_b8,0,0,0x10);
        local_b0 = 0;
        goto LAB_14121c979;
      }
      iVar8 = *(int *)(param_1 + 0x58);
    }
    if (iVar8 != 0) goto LAB_14121c814;
  }
  if ((*(longlong *)(param_1 + 0x60) != 0) && (lVar13 = FUN_14479d2ce(param_1 + 8), lVar13 != 0)) {
    puVar16 = (undefined8 *)(param_1 + 0x60);
    if (*(longlong *)(lVar13 + 0x1f0) == 0) {
      puVar10 = (undefined8 *)(lVar13 + 0x458);
    }
    else {
      puVar10 = (undefined8 *)(*(longlong *)(lVar13 + 0x1f0) + 0xf0);
    }
    uVar5 = *puVar10;
    lVar13 = FUN_144a61814(uVar5,puVar16);
    if (lVar13 != 0) {
      FUN_1405a424c(uVar5,*puVar16);
    }
    *puVar16 = 0;
  }
LAB_14121c814:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14121cb76 FUN_14121cb76 body=101 status=ok
// SIG undefined FUN_14121cb76(void)

void FUN_14121cb76(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
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
    if (param_1[2] != 0) {
      FUN_1400020a8();
    }
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14121cbdb FUN_14121cbdb body=55 status=ok
// SIG undefined FUN_14121cbdb(void)

void FUN_14121cbdb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x108);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x23;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14121cc12 FUN_14121cc12 body=51 status=ok
// SIG undefined FUN_14121cc12(void)

void FUN_14121cc12(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x48);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xb;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14121cc46 FUN_14121cc46 body=212 status=ok
// SIG undefined FUN_14121cc46(void)

void FUN_14121cc46(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d2953a(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14121f934 FUN_14121f934 body=2089 status=ok
// SIG undefined FUN_14121f934(void)

void FUN_14121f934(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                  double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  double *pdVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  
  plVar4 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x58);
  if (plVar4 == (longlong *)0x0) {
LAB_1412200ff:
    *param_9 = 0;
  }
  else {
    cVar2 = *(char *)(*(longlong *)(param_2 + 0x88) + 0x60);
    if (cVar2 == '\x01') {
      uVar15 = (uint)*(byte *)(*plVar4 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar2 == '\x02') {
      uVar15 = (uint)*(short *)(*plVar4 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar2 != '\x03') goto LAB_1412200ff;
      uVar15 = *(uint *)(*plVar4 + 4 + (longlong)param_5 * 8);
    }
    uVar16 = 0x20;
    if ((int)uVar15 < 0x20) {
      uVar16 = (ulonglong)uVar15;
    }
    *param_9 = (uint)uVar16;
    if (0 < (int)uVar15) {
      lVar13 = (longlong)param_5;
      pdVar14 = (double *)(param_7 + 0x10);
      lVar10 = 0;
      do {
        lVar18 = *(longlong *)(param_2 + 0x88);
        plVar4 = *(longlong **)(lVar18 + 0x58);
        uVar15 = 0xffffffff;
        if (plVar4 != (longlong *)0x0) {
          cVar2 = *(char *)(lVar18 + 0x60);
          if (cVar2 == '\x01') {
            uVar15 = (uint)*(byte *)(plVar4[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar4 + lVar13 * 2) + lVar10) * 3);
          }
          else if (cVar2 == '\x02') {
            uVar15 = (uint)*(short *)(plVar4[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar4 + lVar13 * 4) + (int)lVar10)
                                     * 6);
          }
          else if (cVar2 == '\x03') {
            uVar15 = *(uint *)(plVar4[2] + 4 + (*(int *)(*plVar4 + lVar13 * 8) + lVar10) * 0xc);
          }
        }
        lVar18 = *(longlong *)(lVar18 + 0x30);
        lVar17 = (longlong)(int)uVar15;
        dVar21 = (double)*(float *)(lVar18 + 8 + lVar17 * 0xc) * *(double *)(param_2 + 0x30);
        dVar22 = (double)*(float *)(lVar18 + 4 + lVar17 * 0xc) * *(double *)(param_2 + 0x28);
        dVar28 = (double)*(float *)(lVar18 + lVar17 * 0xc) * *(double *)(param_2 + 0x20);
        dVar32 = *param_3;
        dVar29 = param_3[1];
        dVar30 = param_3[2];
        dVar27 = param_3[3];
        dVar24 = param_3[3];
        dVar33 = dVar28 * dVar30 - dVar32 * dVar21;
        dVar23 = dVar22 * dVar32 - dVar29 * dVar28;
        dVar26 = dVar21 * dVar29 - dVar30 * dVar22;
        dVar26 = dVar26 + dVar26;
        dVar33 = dVar33 + dVar33;
        dVar23 = dVar23 + dVar23;
        dVar25 = param_3[5];
        dVar31 = param_3[6];
        pdVar14[-2] = (dVar23 * dVar29 - dVar33 * dVar30) + dVar27 * dVar26 + dVar28 + param_3[4];
        pdVar14[-1] = (dVar30 * dVar26 - dVar32 * dVar23) + dVar24 * dVar33 + dVar22 + dVar25;
        *pdVar14 = dVar23 * dVar27 + dVar21 + (dVar33 * dVar32 - dVar26 * dVar29) + dVar31;
        lVar10 = lVar10 + 1;
        uVar16 = (ulonglong)(int)*param_9;
        pdVar14 = pdVar14 + 3;
      } while (lVar10 < (longlong)uVar16);
    }
    if (1 < (uint)uVar16) {
      lVar10 = (longlong)param_4;
      sVar3 = *(short *)(DAT_14c992a40 + 2 + lVar10 * 4);
      if (0 < sVar3) {
        dVar24 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
        lVar13 = (longlong)
                 *(short *)(DAT_14c992a50 + -4 +
                           ((longlong)*(short *)(DAT_14c992a40 + lVar10 * 4) + (longlong)(int)sVar3)
                           * 6);
        dVar27 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
        dVar31 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
        iVar12 = 0;
        dVar24 = dVar24 * *(double *)(DAT_14c992a20 + lVar13 * 0x18) * 0.5 +
                 dVar24 * 0.5 + *(double *)(param_1 + 0x20);
        dVar27 = dVar27 * *(double *)(DAT_14c992a20 + 8 + lVar13 * 0x18) * 0.5 +
                 dVar27 * 0.5 + *(double *)(param_1 + 0x28);
        dVar31 = dVar31 * *(double *)(DAT_14c992a20 + 0x10 + lVar13 * 0x18) * 0.5 +
                 dVar31 * 0.5 + *(double *)(param_1 + 0x30);
        do {
          lVar13 = param_8;
          lVar18 = (longlong)
                   *(short *)(DAT_14c992a50 + 2 +
                             ((longlong)iVar12 + (longlong)*(short *)(DAT_14c992a40 + lVar10 * 4)) *
                             6);
          dVar32 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
          dVar28 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
          dVar25 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
          dVar21 = dVar32 * *(double *)(DAT_14c992a20 + 0x10 + lVar18 * 0x18) * 0.5 +
                   dVar32 * 0.5 + *(double *)(param_1 + 0x30);
          dVar29 = dVar28 * *(double *)(DAT_14c992a20 + 8 + lVar18 * 0x18) * 0.5 +
                   dVar28 * 0.5 + *(double *)(param_1 + 0x28);
          dVar32 = dVar25 * *(double *)(DAT_14c992a20 + lVar18 * 0x18) * 0.5 +
                   dVar25 * 0.5 + *(double *)(param_1 + 0x20);
          dVar25 = *param_6 * (dVar27 - dVar29) - (dVar24 - dVar32) * param_6[1];
          dVar24 = (dVar24 - dVar32) * param_6[2] - (dVar31 - dVar21) * *param_6;
          dVar28 = param_6[1] * (dVar31 - dVar21) - (dVar27 - dVar29) * param_6[2];
          dVar22 = dVar25 * dVar25 + dVar28 * dVar28 + dVar24 * dVar24;
          dVar30 = SQRT(dVar22);
          dVar27 = 0.0;
          dVar31 = 0.0;
          if (9.999999747378752e-05 <= dVar22) {
            dVar31 = dVar25 / dVar30;
            dVar27 = dVar24 / dVar30;
          }
          dVar22 = (double)(-(ulonglong)(dVar22 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                           ~-(ulonglong)(dVar22 < 9.999999747378752e-05) &
                           (ulonglong)(dVar28 / dVar30));
          dVar23 = dVar21 * dVar31 + dVar32 * dVar22 + dVar29 * dVar27;
          dVar30 = dVar23 * 9.99999993922529e-09 + dVar23;
          uVar11 = (ulonglong)((int)uVar16 - 1);
          dVar24 = *(double *)(param_7 + 0x10 + uVar11 * 0x18);
          dVar25 = *(double *)(param_7 + uVar11 * 0x18);
          uVar34 = SUB84(dVar25,0);
          uVar35 = (undefined4)((ulonglong)dVar25 >> 0x20);
          dVar28 = *(double *)(param_7 + 8 + uVar11 * 0x18);
          uVar11 = uVar16 & 0xffffffff;
          uVar16 = 0;
          lVar18 = 0;
          dVar25 = dVar24 * dVar31 + dVar22 * dVar25 + dVar28 * dVar27;
          do {
            dVar6 = (double)CONCAT44(uVar35,uVar34);
            uVar15 = (uint)uVar16;
            dVar26 = *(double *)(param_7 + lVar18);
            dVar33 = *(double *)(param_7 + 8 + lVar18);
            dVar1 = *(double *)(param_7 + 0x10 + lVar18);
            dVar5 = dVar1 * dVar31 + dVar26 * dVar22 + dVar27 * dVar33;
            if (dVar30 < dVar5) {
              if (dVar25 < dVar30) {
                dVar7 = dVar24;
                dVar8 = dVar6;
                dVar9 = dVar28;
                if (9.99999993922529e-09 <= ABS(dVar5 - dVar25)) {
                  dVar25 = (dVar23 - dVar25) / (dVar5 - dVar25);
                  dVar7 = dVar24 + (dVar1 - dVar24) * dVar25;
                  dVar8 = (double)CONCAT44(uVar35,uVar34) +
                          (dVar26 - (double)CONCAT44(uVar35,uVar34)) * dVar25;
                  dVar9 = dVar28 + (dVar33 - dVar28) * dVar25;
                }
                goto LAB_14121fead;
              }
            }
            else {
              dVar7 = dVar1;
              dVar8 = dVar26;
              dVar9 = dVar33;
              if (dVar30 < dVar25) {
                if (9.99999993922529e-09 <= ABS(dVar5 - dVar25)) {
                  dVar25 = (dVar23 - dVar25) / (dVar5 - dVar25);
                  dVar24 = dVar24 + (dVar1 - dVar24) * dVar25;
                  dVar28 = dVar28 + (dVar33 - dVar28) * dVar25;
                  dVar6 = (double)CONCAT44(uVar35,uVar34) +
                          (dVar26 - (double)CONCAT44(uVar35,uVar34)) * dVar25;
                }
                *(double *)(lVar13 + uVar16 * 0x18) = dVar6;
                *(double *)(lVar13 + 8 + uVar16 * 0x18) = dVar28;
                *(double *)(lVar13 + 0x10 + uVar16 * 0x18) = dVar24;
                if (0x1e < uVar15) {
                  uVar16 = 0x20;
                  break;
                }
                uVar15 = uVar15 + 1;
              }
LAB_14121fead:
              uVar19 = (ulonglong)uVar15;
              uVar16 = (ulonglong)(uVar15 + 1);
              *(double *)(lVar13 + uVar19 * 0x18) = dVar8;
              *(double *)(lVar13 + 8 + uVar19 * 0x18) = dVar9;
              *(double *)(lVar13 + 0x10 + uVar19 * 0x18) = dVar7;
            }
            if (0x1f < (uint)uVar16) break;
            uVar34 = SUB84(dVar26,0);
            uVar35 = (undefined4)((ulonglong)dVar26 >> 0x20);
            bVar20 = uVar11 * 0x18 + -0x18 != lVar18;
            lVar18 = lVar18 + 0x18;
            dVar28 = dVar33;
            dVar24 = dVar1;
            dVar25 = dVar5;
          } while (bVar20);
          *param_9 = (uint)uVar16;
          iVar12 = iVar12 + 1;
        } while ((iVar12 < sVar3) &&
                (param_8 = param_7, param_7 = lVar13, dVar24 = dVar32, dVar27 = dVar29,
                dVar31 = dVar21, 1 < (uint)uVar16));
      }
    }
  }
  return;
}



// FUNCTION 14122015e FUN_14122015e body=224 status=ok
// SIG undefined FUN_14122015e(void)

undefined8 FUN_14122015e(longlong param_1,longlong *param_2)

{
  int iVar1;
  void *_Src;
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(longlong *)(param_1 + -0x3770) == 0) {
    if ((longlong *)(param_1 + 0x44a0) != param_2) {
      iVar1 = *(int *)(param_1 + 0x44a8);
      _Src = *(void **)(param_1 + 0x44a0);
      *(int *)(param_2 + 1) = iVar1;
      if (iVar1 == 0 && *(int *)((longlong)param_2 + 0xc) == 0) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(param_2,iVar1);
        if (iVar1 != 0) {
          memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
        }
      }
    }
  }
  else {
    FUN_141220240(*(longlong *)(param_1 + -0x3770),&local_30);
    if (&local_30 == param_2) {
      if (local_30 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_2 != 0) {
        FUN_1400020a8();
      }
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_24;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141220240 FUN_141220240 body=112 status=ok
// SIG undefined FUN_141220240(void)

undefined8 * FUN_141220240(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*(char *)((longlong)param_1 + 0x39a) < '\0') {
    (**(code **)(*param_1 + 0x698))(param_1,param_2);
  }
  else {
    *param_2 = 0;
    iVar1 = (int)param_1[0x86];
    _Src = (void *)param_1[0x85];
    *(int *)(param_2 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar1,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
    }
  }
  return param_2;
}



// FUNCTION 1412202b0 FUN_1412202b0 body=40 status=ok
// SIG undefined FUN_1412202b0(void)

undefined8 * FUN_1412202b0(undefined8 *param_1)

{
  FUN_1400841f8();
  *param_1 = &PTR_FUN_14aed64b0;
  param_1[5] = 0;
  return param_1;
}



// FUNCTION 1412202d8 FUN_1412202d8 body=130 status=ok
// SIG undefined FUN_1412202d8(void)

void FUN_1412202d8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar4 = (longlong)(int)param_2[1] * 0x10;
  lVar5 = (longlong)*(int *)(*(longlong *)(*param_2 + 0x1b8) + 8 + lVar4);
  if (lVar5 != 0) {
    lVar4 = *(longlong *)(*(longlong *)(*param_2 + 0x1b8) + lVar4);
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar4 + lVar6);
      if (plVar1[1] == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(plVar1[1] + 0x18);
      }
      if ((iVar3 == *(int *)(param_1 + 0x18)) &&
         (cVar2 = (**(code **)(*plVar1 + 0x20))(plVar1), cVar2 == '\0')) {
        (**(code **)(*plVar1 + 0x18))(plVar1,1);
      }
      lVar6 = lVar6 + 8;
    } while (lVar5 * 8 != lVar6);
  }
  return;
}



// FUNCTION 14122035a FUN_14122035a body=861 status=ok
// SIG undefined FUN_14122035a(void)

void FUN_14122035a(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c947f70) {
    FUN_144b3d300(&DAT_14c947f70);
    if (DAT_14c947f70 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_141710108;
      local_70 = 0x1000000000000000;
      local_78 = 0x8001;
      FUN_14000176a(&DAT_14c947f20,L"FGbxDefPtrProperty",0);
      atexit(FUN_1427b4857);
      _Init_thread_footer(&DAT_14c947f70);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_38);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_38 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_38);
    }
  }
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_68 = FUN_1446ddbd2();
      local_60 = FUN_1409e12a0;
      local_70 = 0;
      local_78 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_40);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_40);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_40 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_40);
    }
  }
  uVar2 = local_40;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_58 = local_38;
  uVar4 = FUN_14477b664(uStack_30);
  local_50 = FUN_14477b664(uVar4);
  local_48 = local_28;
  FUN_1412206b8(param_1,&local_58,uVar2);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412206b8 FUN_1412206b8 body=125 status=ok
// SIG undefined FUN_1412206b8(void)

void FUN_1412206b8(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_28 = param_3;
  if (lVar1 != 0) {
    local_40 = *param_2;
    uVar2 = FUN_14477b664(param_2[1]);
    local_38 = FUN_14477b664(uVar2);
    local_30 = param_2[2];
    FUN_141220736(lVar1,&local_40,&local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141220736 FUN_141220736 body=456 status=ok
// SIG undefined FUN_141220736(void)

void FUN_141220736(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  longlong lVar14;
  
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    lVar14 = FUN_145cd93aa();
  }
  uVar2 = *param_2;
  uVar9 = FUN_14477b664(lVar14);
  uVar7 = ((uint)(uVar9 >> 0x14) & 0xffff ^ (uint)(uVar9 >> 4)) * -0x7a143595;
  uVar10 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar11 = (uint)uVar2 & 0xffff;
  uVar7 = uVar10 >> 0xd ^
          (((uint)uVar2 << 0x10 | uVar11) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar11 >> 4)) - uVar10;
  uVar11 = uVar7 << 8 ^ (-0x61c88647 - uVar10) - uVar7;
  uVar12 = uVar11 >> 0xd ^ (uVar10 - uVar7) - uVar11;
  uVar7 = uVar12 >> 0xc ^ (uVar7 - uVar11) - uVar12;
  uVar10 = uVar7 << 0x10 ^ (uVar11 - uVar12) - uVar7;
  uVar12 = uVar10 >> 5 ^ (uVar12 - uVar7) - uVar10;
  uVar11 = uVar12 >> 3 ^ (uVar7 - uVar10) - uVar12;
  uVar7 = uVar11 << 10 ^ (uVar10 - uVar12) - uVar11;
  iVar8 = FUN_1412208fe((longlong *)(param_1 + 0x198),uVar7 >> 0xf ^ uVar12 - (uVar11 + uVar7),
                        param_2);
  if (iVar8 != -1) {
    lVar3 = *(longlong *)(param_1 + 0x198);
    lVar14 = lVar3 + (longlong)iVar8 * 0x48;
    if (((lVar14 != 0) &&
        (plVar13 = (longlong *)(lVar3 + (longlong)iVar8 * 0x48 + 0x18), plVar13 != (longlong *)0x0))
       && (lVar14 = (longlong)*(int *)(lVar14 + 0x20), 0 < lVar14)) {
      uVar9 = lVar14 + 1;
      lVar14 = lVar14 * 0x10 + -8;
      do {
        lVar3 = *plVar13;
        plVar4 = *(longlong **)(lVar3 + -8 + lVar14);
        plVar5 = *(longlong **)(lVar3 + lVar14);
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
          UNLOCK();
        }
        cVar6 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (cVar6 != '\0') {
          FUN_14584584c(plVar4,param_3);
        }
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar4 = plVar5 + 1;
          *(int *)plVar4 = (int)*plVar4 + -1;
          UNLOCK();
          if ((int)*plVar4 == 0) {
            (**(code **)*plVar5)(plVar5);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
          }
        }
        uVar9 = uVar9 - 1;
        lVar14 = lVar14 + -0x10;
      } while (1 < uVar9);
    }
  }
  return;
}



// FUNCTION 1412208fe FUN_1412208fe body=652 status=ok
// SIG undefined FUN_1412208fe(void)

int FUN_1412208fe(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined **ppuVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar10 = *param_1;
      do {
        plVar9 = (longlong *)(lVar10 + (longlong)iVar1 * 0x48);
        if (plVar9[1] == 0) {
          uVar13 = FUN_145cd93aa();
          lVar10 = FUN_14477b664(uVar13);
          plVar9[1] = lVar10;
        }
        lVar10 = param_3[1];
        if (lVar10 == 0) {
          lVar10 = FUN_145cd93aa();
        }
        lVar2 = *param_3;
        lVar10 = FUN_14477b664(lVar10);
        iVar7 = 0;
        if ((lVar10 != 0) && (plVar3 = *(longlong **)(lVar10 + 0xb8), plVar3 != (longlong *)0x0)) {
          lVar11 = *plVar3;
          pcVar4 = *(code **)(lVar11 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar4)(plVar3);
            iVar7 = 0;
            if (cVar6 == '\0') goto LAB_141220a02;
            lVar11 = *plVar3;
          }
          pcVar4 = *(code **)(lVar11 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar4)(plVar3);
          }
          iVar7 = FUN_144aff48c(ppuVar14);
        }
LAB_141220a02:
        lVar11 = *plVar9;
        lVar5 = plVar9[1];
        iVar8 = 0;
        if ((lVar5 != 0) &&
           (plVar9 = *(longlong **)(lVar5 + 0xb8), iVar8 = 0, plVar9 != (longlong *)0x0)) {
          lVar12 = *plVar9;
          pcVar4 = *(code **)(lVar12 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar6 = (*pcVar4)(plVar9);
            if (cVar6 == '\0') goto LAB_141220a6a;
            lVar12 = *plVar9;
          }
          pcVar4 = *(code **)(lVar12 + 0x110);
          ppuVar14 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar14 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar14 = (undefined **)(*pcVar4)(plVar9);
          }
          iVar8 = FUN_144aff48c(ppuVar14);
        }
LAB_141220a6a:
        if ((iVar8 == iVar7) && (lVar11 == lVar2)) {
          if (lVar5 == lVar10) {
            return iVar1;
          }
          if ((lVar10 != 0) && (lVar5 != 0)) {
            iVar7 = *(int *)(lVar10 + 0x38);
            iVar8 = *(int *)(lVar5 + 0x38);
            if ((iVar7 <= iVar8) &&
               (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar7 * 8) == lVar10 + 0x30))
            {
              return iVar1;
            }
            if ((iVar8 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar8 * 8) == lVar5 + 0x30))
            {
              return iVar1;
            }
          }
        }
        lVar10 = *param_1;
        iVar1 = *(int *)(lVar10 + 0x40 + (longlong)iVar1 * 0x48);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 141220b8a FUN_141220b8a body=151 status=ok
// SIG undefined FUN_141220b8a(void)

void FUN_141220b8a(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(char *)(param_1 + 8) == '\x01') {
    plVar4 = &DAT_14ca9a3d8;
    if (*(char *)(param_1 + 9) != '\0') {
      plVar4 = &DAT_14ca9a3c8;
    }
    lVar1 = *plVar4;
    iVar2 = (int)plVar4[1];
    uVar3 = 0xffffffff;
    if ((longlong)iVar2 != 0) {
      lVar6 = (longlong)iVar2 << 3;
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar1 + lVar5 * 8) == param_1) {
          uVar3 = (uint)lVar5;
          break;
        }
        lVar5 = lVar5 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    if (~uVar3 + iVar2 != 0) {
      memmove((void *)(lVar1 + (longlong)(int)uVar3 * 8),
              (void *)(lVar1 + (longlong)(int)uVar3 * 8 + 8),(longlong)(int)(~uVar3 + iVar2) << 3);
      iVar2 = (int)plVar4[1];
    }
    *(int *)(plVar4 + 1) = iVar2 + -1;
    FUN_145845aaa(plVar4);
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 141220c22 FUN_141220c22 body=10 status=ok
// SIG undefined FUN_141220c22(void)

void FUN_141220c22(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000141220c25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x638))();
  return;
}



// FUNCTION 141220c42 FUN_141220c42 body=710 status=ok
// SIG undefined FUN_141220c42(void)

void FUN_141220c42(longlong param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong *local_50;
  int local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((*(longlong **)(param_1 + 0x438) != (longlong *)0x0) && (*(int *)(param_1 + 0x434) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x430), -1 < (int)uVar1)) &&
     ((((int)uVar1 < DAT_14c9647dc &&
       (lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 != 0)) &&
      ((*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x434) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)))))) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x438) + 0x98))();
    FUN_1401073f6(uVar2,param_1);
  }
  lVar7 = *(longlong *)(param_1 + 0xa8);
  if (lVar7 == 0) goto LAB_141220e7d;
  local_50 = (longlong *)0x0;
  local_48 = 0;
  FUN_1446efa72(&local_50,0,3,0x10);
  plVar4 = local_50;
  local_48 = 3;
  *local_50 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_50[2] = lVar3;
  *local_50 = (longlong)&PTR_FUN_14b4aa1d0;
  local_50[3] = 0;
  iVar5 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_50 + 3) = uVar1;
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar5 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar5 = *(int *)(lVar8 + 0x10);
      bVar9 = iVar5 == 0;
      if (bVar9) {
        *(int *)(lVar8 + 0x10) = iVar6;
        iVar5 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar5 = iVar6;
      }
    }
  }
  *(int *)((longlong)plVar4 + 0x1c) = iVar5;
  plVar4[4] = (longlong)FUN_143ec336c;
  *(undefined4 *)(plVar4 + 5) = 0;
  if ((*(byte *)(lVar7 + 0x348) & 0x10) == 0) {
    local_40 = (undefined8 *)0x0;
    local_38 = 0;
    FUN_14009d848(&local_40,&local_50);
    FUN_1448b6402(lVar7 + 0x350,local_58,&local_40);
    if (local_38 != 0) {
      if (local_40 == (undefined8 *)0x0) goto LAB_141220e3c;
      (**(code **)*local_40)(local_40,0);
      FUN_1446efa72(&local_40,0,0,0x10);
      local_38 = 0;
    }
    if (local_40 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    plVar4 = local_50;
    if (local_48 == 0) {
      plVar4 = (longlong *)0x0;
    }
    (**(code **)(*plVar4 + 0x58))();
  }
LAB_141220e3c:
  if (local_48 != 0) {
    if (local_50 == (longlong *)0x0) goto LAB_141220e7d;
    (**(code **)*local_50)(local_50,0);
    FUN_1446efa72(&local_50,0,0,0x10);
    local_48 = 0;
  }
  if (local_50 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_141220e7d:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141220f0a FUN_141220f0a body=140 status=ok
// SIG undefined FUN_141220f0a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_141220f0a(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_3 = 0;
  plVar1 = param_1;
  if ((_DAT_1499d77c0 != *param_2) && (_DAT_14997ebb8 != *param_2)) {
    if (_DAT_1499d7750 != *param_2) {
      return 0x80004002;
    }
    plVar1 = param_1 + 1;
  }
  *param_3 = (longlong)plVar1;
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 0x80004002;
  }
  else {
    (**(code **)(*param_1 + 8))();
    uVar2 = 0x80004002;
    if (*param_3 != 0) {
      uVar2 = 0;
    }
  }
                    /* WARNING: Read-only address (ram,0x00014997ebb8) is written */
                    /* WARNING: Read-only address (ram,0x0001499d7750) is written */
                    /* WARNING: Read-only address (ram,0x0001499d77c0) is written */
  return uVar2;
}



// FUNCTION 141220f96 FUN_141220f96 body=9 status=ok
// SIG undefined FUN_141220f96(void)

void FUN_141220f96(longlong param_1)

{
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}



// FUNCTION 141220fa0 FUN_141220fa0 body=96 status=ok
// SIG undefined FUN_141220fa0(void)

void FUN_141220fa0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_141221002();
  lVar1 = (**(code **)(*param_1 + 0x5f8))(param_1);
  if (lVar1 != 0) {
    local_20 = lVar1;
    FUN_140bfeb58(param_2);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141221002 FUN_141221002 body=256 status=ok
// SIG undefined FUN_141221002(void)

void FUN_141221002(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *(longlong *)(param_1 + 0x3d0);
  FUN_140bfeb58(param_2);
  if (*(longlong *)(param_1 + 0xa08) != 0) {
    local_40 = *(longlong *)(param_1 + 0xa08);
    FUN_140bfeb58(param_2);
    lVar4 = (longlong)*(int *)(*(longlong *)(param_1 + 0xa08) + 0x1c0);
    if (lVar4 != 0) {
      plVar6 = *(longlong **)(*(longlong *)(param_1 + 0xa08) + 0x1b8);
      plVar1 = plVar6 + lVar4;
      do {
        lVar4 = *plVar6;
        lVar3 = *param_2;
        iVar2 = (int)param_2[1];
        lVar7 = (longlong)iVar2;
        if (lVar7 != 0) {
          uVar5 = 0;
          do {
            if (*(longlong *)(lVar3 + uVar5) == lVar4) {
              if ((~uVar5 & 0x7fffffff8) != 0) goto LAB_1412210ba;
              break;
            }
            uVar5 = uVar5 + 8;
          } while (lVar7 * 8 - uVar5 != 0);
        }
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1447d05f2(param_2,iVar2);
          lVar3 = *param_2;
        }
        *(longlong *)(lVar3 + lVar7 * 8) = lVar4;
LAB_1412210ba:
        plVar6 = plVar6 + 1;
      } while (plVar6 != plVar1);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141221104 FUN_141221104 body=114 status=ok
// SIG undefined FUN_141221104(void)

void FUN_141221104(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = FUN_1447210f0(param_2);
  lVar2 = FUN_141221176(uVar1);
  if ((lVar2 != 0) && ((longlong)*(int *)(param_1 + 0x80) != 0)) {
    lVar4 = *(longlong *)(param_1 + 0x78);
    lVar5 = (longlong)*(int *)(param_1 + 0x80) * 0x18;
    do {
      lVar3 = FUN_140d1732e(lVar2,lVar4);
      if (lVar3 == param_2 && lVar3 != 0) {
        *(undefined1 *)(lVar4 + 0x10) = 1;
      }
      lVar4 = lVar4 + 0x18;
      lVar5 = lVar5 + -0x18;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 141221176 FUN_141221176 body=32 status=ok
// SIG undefined FUN_141221176(void)

undefined8 FUN_141221176(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_1400f6f32(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0x68);
  }
  return 0;
}



// FUNCTION 141221196 FUN_141221196 body=890 status=ok
// SIG undefined FUN_141221196(void)

void FUN_141221196(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar14 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar14;
    if ((int)param_1[0x54] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar12 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar5 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar8 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar12) || (local_78 = lVar5, plStack_60 != plVar14)) {
      do {
        local_78 = lVar5;
        lVar5 = *(longlong *)(*local_90 + 0x10 + (longlong)iVar8 * 0x20);
        if (lVar5 != 0) {
          plVar10 = (longlong *)(*local_90 + (longlong)iVar8 * 0x20 + 0x10);
          FUN_144837e54(lVar5,0);
          cVar4 = FUN_140dddae6(*plVar10 + 0x48);
          if ((cVar4 != '\0') &&
             (plVar10 = *(longlong **)(*plVar10 + 0x30), plVar10 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
            lVar6 = FUN_141221512();
            if ((lVar6 != 0) &&
               ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8)
                 == lVar6 + 0x30)))) {
              (*(code *)*local_98)(local_98[1],plVar10);
            }
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        lVar5 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar14 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar13 = 1;
      uVar11 = 0xffffffff;
      iVar12 = 0;
      iVar15 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar13 = (ulonglong)local_90 >> 0x20;
      iVar12 = (int)param_1[0x3e];
      iVar8 = (int)local_90;
      uVar11 = (uint)uStack_80;
      iVar7 = uStack_80._4_4_;
      iVar15 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar7 != iVar12 || local_88 != local_a0) {
      do {
        local_a4 = iVar12;
        plVar14 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar7 * 0x20);
        if (plVar14 != (longlong *)0x0) {
          lVar5 = (**(code **)(*plVar14 + 8))(plVar14);
          lVar6 = FUN_141221512();
          if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
              lVar6 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar14);
          }
        }
        uVar11 = uVar11 & ~(uint)uVar13;
        plVar14 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar14 = plVar1;
        }
        iVar12 = (int)plVar1[3];
        lVar5 = (longlong)iVar8;
        uVar9 = *(uint *)((longlong)plVar14 + lVar5 * 4) & uVar11;
        if (uVar9 == 0) {
          iVar7 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar7 = iVar12 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar15 = iVar15 + 0x20;
          iVar3 = iVar7;
          if (iVar7 < iVar8) {
            iVar3 = iVar8;
          }
          if (iVar8 < iVar7) {
            lVar6 = 0;
            do {
              uVar9 = *(uint *)((longlong)plVar14 + lVar6 * 4 + lVar5 * 4 + 4);
              if (uVar9 != 0) {
                iVar8 = iVar8 + (int)lVar6 + 1;
                uVar11 = 0xffffffff;
                goto LAB_14122131c;
              }
              iVar15 = iVar15 + 0x20;
              lVar6 = lVar6 + 1;
            } while (iVar3 - lVar5 != lVar6);
            uVar11 = 0xffffffff;
            iVar8 = iVar3;
          }
          iVar8 = iVar8 + 1;
          iVar7 = iVar12;
        }
        else {
LAB_14122131c:
          uVar13 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar13 * 2 + 1;
          lVar5 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = (iVar15 - ((uint)lVar5 ^ 0x3f)) + 0x3e;
          if (iVar12 <= iVar7) {
            iVar7 = iVar12;
          }
        }
        iVar12 = local_a4;
      } while (iVar7 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141221512 FUN_141221512 body=57 status=ok
// SIG undefined FUN_141221512(void)

void FUN_141221512(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba12a0 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba12a0 = FUN_140002ddd(FUN_1465ae608,uVar1,L"GbxChallengeListDef");
  }
  return;
}



// FUNCTION 14122154b FUN_14122154b body=288 status=ok
// SIG undefined FUN_14122154b(void)

void FUN_14122154b(longlong *param_1)

{
  undefined2 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)*param_1;
  FUN_140553f2a(puVar2,param_1);
  *puVar2 = &PTR_FUN_14a4ca940;
  *(undefined4 *)(puVar2 + 7) = 4;
  *(undefined1 *)((longlong)puVar2 + 0x32) = 0xc;
  if ((*(uint *)(puVar2 + 1) & 0x10) != 0) {
    local_28 = puVar2[2];
    if ((local_28 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    local_30 = FUN_14588a226();
    if ((local_30 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(local_30);
    }
    FUN_140909372(&local_30,&local_28);
    lVar3 = FUN_14009d2a0();
    uVar1 = *(undefined2 *)(lVar3 + 0x140);
    local_38 = puVar2[2];
    if ((local_38 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c();
    }
    FUN_14118c742(&local_38,uVar1);
    lVar4 = -0x12;
    do {
      FUN_145845be0(*(undefined2 *)(lVar3 + 0xa2 + lVar4),*(undefined2 *)(lVar3 + 0xb6 + lVar4),
                    *(undefined2 *)(lVar3 + 0xce + lVar4));
      lVar4 = lVar4 + 2;
    } while (lVar4 != 0);
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122166c FUN_14122166c body=350 status=ok
// SIG undefined FUN_14122166c(void)

void FUN_14122166c(longlong *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *param_1;
  if (lVar3 != 0) {
    if (DAT_14cab2770 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_14081d0ea;
      local_48 = &LAB_1475472e1;
      local_50 = &LAB_14633c0b5;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000000;
      local_70 = 8;
      local_78 = 0x40;
      FUN_14081cfa3(L"/Script/MovieScene",L"MovieSceneEntitySystem",&DAT_14cab2770,&DAT_1475472e0);
      if (DAT_14cab2770 == 0) goto LAB_1412217c4;
    }
    if ((*(int *)(DAT_14cab2770 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cab2770 + 0x38) * 8) ==
        DAT_14cab2770 + 0x30)) {
      lVar3 = *param_1;
      goto LAB_1412216c8;
    }
  }
LAB_1412217c4:
  lVar3 = 0;
LAB_1412216c8:
  uVar1 = FUN_1409095b8(&DAT_14cab2788,lVar3);
  uVar2 = FUN_14118c89c(param_2);
  FUN_1447ba426(&DAT_14cab2870,uVar1,uVar2);
  FUN_1447ba426(&DAT_14cab2838,uVar2,uVar1);
  DAT_14cab2900 = DAT_14cab2900 + 1;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412217cc FUN_1412217cc body=228 status=ok
// SIG undefined FUN_1412217cc(void)

longlong FUN_1412217cc(void)

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
  if (DAT_14cab5a20 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1432d0f4c;
    local_38 = &LAB_147655e6f;
    local_40 = FUN_14122154b;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x40;
    FUN_14081cfa3(L"/Script/MovieSceneTracks",L"DoubleChannelEvaluatorSystem",&DAT_14cab5a20,
                  &DAT_147655e6e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cab5a20;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412218b2 FUN_1412218b2 body=119 status=ok
// SIG undefined FUN_1412218b2(void)

void FUN_1412218b2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b0be080;
  FUN_140160f86(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141221946 FUN_141221946 body=143 status=ok
// SIG undefined FUN_141221946(void)

undefined8 FUN_141221946(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  cVar1 = FUN_1412219d5();
  if (cVar1 == '\0') {
    plVar2 = (longlong *)FUN_140e92164();
  }
  else {
    puVar5 = (undefined8 *)FUN_1400dbadc();
    plVar2 = (longlong *)*puVar5;
    if (plVar2 == (longlong *)0x0) {
      plVar2 = (longlong *)FUN_140e92164();
      *puVar5 = plVar2;
    }
  }
  lVar3 = (**(code **)(*plVar2 + 0x80))(plVar2,param_2);
  if (lVar3 < 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    lVar4 = (**(code **)(*plVar2 + 0xf8))(plVar2,param_2,0);
    if (lVar4 != 0) {
      *param_3 = lVar4;
      *param_4 = lVar3;
      uVar6 = 1;
    }
  }
  return uVar6;
}



// FUNCTION 1412219d5 FUN_1412219d5 body=91 status=ok
// SIG undefined FUN_1412219d5(void)

undefined8 FUN_1412219d5(void)

{
  byte bVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)DAT_14c7590c0;
  if (DAT_14c7590c0 == 0xffffffff) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    bVar1 = FUN_14054d46e(&DAT_14c846b20,L"ZenPak");
    uVar2 = (ulonglong)bVar1;
    DAT_14c7590c0 = (uint)bVar1;
  }
  return CONCAT71((int7)(uVar2 >> 8),(int)uVar2 == 1);
}



// FUNCTION 141221a30 FUN_141221a30 body=228 status=ok
// SIG undefined FUN_141221a30(void)

longlong FUN_141221a30(void)

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
  if (DAT_14cac7d90 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14637e182;
    local_38 = &LAB_1478a3819;
    local_40 = &LAB_1459b9cb0;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x4d0;
    FUN_14081cfa3(L"/Script/Engine",L"SkyLightComponent",&DAT_14cac7d90,FUN_146395906);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cac7d90;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141221b16 FUN_141221b16 body=228 status=ok
// SIG undefined FUN_141221b16(void)

longlong FUN_141221b16(void)

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
  if (DAT_14cbabe08 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1459c2cb0;
    local_38 = &LAB_148c2872f;
    local_40 = FUN_1459cb18d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x38;
    FUN_14081cfa3(L"/Script/OakGame",L"OakLevelSequenceEcho4Object",&DAT_14cbabe08,&DAT_148c2872e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbabe08;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141221bfc FUN_141221bfc body=1157 status=ok
// SIG undefined FUN_141221bfc(void)

undefined2 * FUN_141221bfc(undefined2 *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0x8000000000;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_141222082(param_1 + 0x1c);
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x9c) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x8c) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa4) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xac) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xc2) = 0x80;
  *(undefined8 *)(param_1 + 0xc6) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0;
  *(undefined8 *)(param_1 + 0xe0) = 0x8000000000;
  *(undefined8 *)(param_1 + 0xcc) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 0xe4) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0;
  *(undefined8 *)(param_1 + 0xec) = 0;
  FUN_1458464c2(param_1 + 0xf0);
  *(undefined8 *)(param_1 + 0x144) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0x8000000000;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x15c) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  FUN_141222082(param_1 + 0x164);
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1d4) = 0;
  FUN_141222082(param_1 + 0x1e8);
  *(undefined8 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x268) = 0;
  *(undefined8 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 600) = 0;
  *(undefined8 *)(param_1 + 0x26a) = 0xffffffff00000080;
  *(undefined8 *)(param_1 + 0x28c) = 0;
  *(undefined8 *)(param_1 + 0x290) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x26e) = 0;
  *(undefined8 *)(param_1 + 0x272) = 0;
  *(undefined8 *)(param_1 + 0x276) = 0;
  *(undefined8 *)(param_1 + 0x27a) = 0;
  *(undefined8 *)(param_1 + 0x27c) = 0;
  *(undefined8 *)(param_1 + 0x280) = 0;
  *(undefined8 *)(param_1 + 0x2a4) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x294) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0;
  FUN_141222082(param_1 + 0x2ac);
  *(undefined8 *)(param_1 + 0x334) = 0;
  *(undefined8 *)(param_1 + 0x338) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x318) = 0;
  *(undefined8 *)(param_1 + 0x31c) = 0;
  *(undefined8 *)(param_1 + 800) = 0;
  *(undefined8 *)(param_1 + 0x324) = 0;
  *(undefined8 *)(param_1 + 0x328) = 0;
  FUN_141222082(param_1 + 0x33c);
  *(undefined8 *)(param_1 + 0x3cc) = 0;
  *(undefined8 *)(param_1 + 0x3d0) = 0x8000000000;
  *(undefined8 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x3ac) = 0;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined8 *)(param_1 + 0x3b4) = 0;
  *(undefined8 *)(param_1 + 0x3b8) = 0;
  *(undefined8 *)(param_1 + 0x3bc) = 0;
  *(undefined8 *)(param_1 + 0x3c0) = 0;
  memset(param_1 + 0x3d4,0,200);
  FUN_145846424(param_1 + 0x438);
  FUN_145846528();
  *(undefined8 *)(param_1 + 0x46c) = 0;
  *(undefined8 *)(param_1 + 0x470) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x474) = 0;
  *(undefined8 *)(param_1 + 0x478) = 0x3f80000000000000;
  param_1[0x47c] = 0;
  *(undefined1 *)(param_1 + 0x47e) = 0;
  *(undefined8 *)(param_1 + 0x480) = 0;
  *(undefined4 *)(param_1 + 0x484) = 0;
  *(undefined8 *)(param_1 + 0x498) = 0;
  *(undefined4 *)(param_1 + 0x49c) = 0;
  *(undefined8 *)(param_1 + 0x488) = 0;
  *(undefined8 *)(param_1 + 0x48c) = 0;
  *(undefined8 *)(param_1 + 0x49e) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x4a2) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b4) = 0;
  *(undefined8 *)(param_1 + 0x4c6) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x4ca) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined4 *)(param_1 + 0x4ec) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4dc) = 0;
  *(undefined8 *)(param_1 + 0x4ee) = 0xffffffff00000080;
  *(undefined4 *)(param_1 + 0x4f2) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined4 *)(param_1 + 0x4fc) = 0;
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x504) = 0;
  *(undefined4 *)(param_1 + 0x508) = 0x3f800000;
  param_1[0x50a] = 0;
  *(undefined1 **)(param_1 + 0x50c) = &DAT_100000001;
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(undefined8 *)(param_1 + 0x512) = 0;
  *(undefined8 *)(param_1 + 0x558) = 0;
  *(undefined8 *)(param_1 + 0x55c) = 0x40000000000;
  *(undefined4 *)(param_1 + 0x560) = 0;
  *(undefined8 *)(param_1 + 0x562) = DAT_14c967818;
  *(undefined8 *)(param_1 + 0x590) = 0;
  *(undefined4 *)(param_1 + 0x594) = 0;
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x56c) = 0;
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(undefined8 *)(param_1 + 0x59c) = 0;
  *(undefined8 *)(param_1 + 0x5a0) = 0;
  lVar2 = 0xb58;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x10) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0xc98);
  lVar2 = 0xc98;
  do {
    *(undefined8 *)((longlong)param_1 + lVar2 + -0x10) = 0;
    *(undefined4 *)((longlong)param_1 + lVar2 + -8) = 0;
    *(undefined8 *)((longlong)param_1 + lVar2) = 0;
    ((undefined8 *)((longlong)param_1 + lVar2))[1] = 0;
    *(undefined8 *)((longlong)param_1 + lVar2 + 0x10) = 0;
    lVar2 = lVar2 + 0x28;
  } while (lVar2 != 0xdd8);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9f5cf8) {
    FUN_144b3d300(&DAT_14c9f5cf8);
    if (DAT_14c9f5cf8 == -1) {
      if (DAT_14c8407a8 == (longlong *)0x0) {
        FUN_1414b00ea();
      }
      plVar3 = (longlong *)
               (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.MeshCardRepresentation",1);
      if (plVar3 == (longlong *)0x0) {
        DAT_14c9f5cf0 = (int *)0x0;
      }
      else {
        DAT_14c9f5cf0 = (int *)(**(code **)(*plVar3 + 0x68))(plVar3);
      }
      _Init_thread_footer(&DAT_14c9f5cf8);
    }
  }
  bVar4 = false;
  cVar1 = FUN_144880847(param_2,0);
  if (cVar1 != '\0') {
    if (*DAT_14c9f5cf0 == 0) {
      bVar4 = false;
    }
    else {
      bVar4 = param_3 != 4;
    }
  }
  *(bool *)(param_1 + 0x486) = bVar4;
  return param_1;
}



// FUNCTION 141222082 FUN_141222082 body=50 status=ok
// SIG undefined FUN_141222082(void)

void FUN_141222082(undefined8 *param_1,undefined1 param_2)

{
  param_1[0xc] = 0;
  param_1[0xd] = 0xa00000000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0xa00000000;
  *(undefined1 *)(param_1 + 0x1a) = param_2;
  return;
}



// FUNCTION 1412220b4 FUN_1412220b4 body=900 status=ok
// SIG undefined FUN_1412220b4(void)

void FUN_1412220b4(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar7 = FUN_1403ca227();
  lVar8 = FUN_140963a30(lVar7 + 0x2e8);
  if ((((lVar8 == 0) ||
       (((*(longlong *)(param_1 + 0x32b8) != 0 &&
         (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x32b8) + 0xae8), lVar8 != 0)) &&
        (lVar8 = FUN_141222460(lVar8,&DAT_14cb8d430), lVar8 != 0)))) ||
      (((lVar8 = (**(code **)(*(longlong *)(param_1 + 0x3c20) + 0x10))(param_1 + 0x3c20),
        *(char *)(param_1 + 0x5d30) != '\0' || (*(char *)(param_1 + 0x73eb) != '\0')) ||
       ((*(byte *)(param_1 + 0x550) & 2) != 0)))) ||
     (((lVar3 = *(longlong *)(&DAT_00006850 + param_1), lVar3 == 0 ||
       (cVar5 = (**(code **)(*(longlong *)(lVar3 + 0x178) + 0xe0))(lVar3 + 0x178), cVar5 == '\0'))
      || ((cVar5 = (**(code **)(*(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x178) + 0xd8
                               ))(*(longlong *)(&DAT_00006850 + param_1) + 0x178), cVar5 != '\0' ||
          ((lVar3 = *(longlong *)(&DAT_00006850 + param_1), (&DAT_00001100)[lVar3] == '\n' &&
           (*(longlong *)(lVar3 + 0x110) != 0)))))))) goto LAB_141222381;
  if (*(longlong *)(lVar3 + 0x3170) == 0) {
    if ((*(char *)(lVar3 + 0x34b0) == '\x01') && (lVar12 = lVar3 + 0x3210, lVar12 != 0))
    goto LAB_1412223b1;
  }
  else {
    lVar12 = *(longlong *)(lVar3 + 0x3170) + 0xd8;
LAB_1412223b1:
    lVar11 = FUN_140153468(lVar12);
    if ((lVar11 != 0) &&
       (((*(byte *)(lVar12 + 0x298) & 2) == 0 && (*(longlong *)(lVar3 + 0x110) != 0))))
    goto LAB_141222381;
  }
  cVar5 = (**(code **)(*(longlong *)(*(longlong *)(&DAT_00006850 + param_1) + 0x178) + 0xe8))
                    (*(longlong *)(&DAT_00006850 + param_1) + 0x178);
  if ((cVar5 == '\0') &&
     (((cVar5 = (**(code **)(*(longlong *)(param_1 + 0x3b48) + 0x60))(param_1 + 0x3b48),
       cVar5 == '\0' &&
       (((lVar8 == 0 || (*(longlong *)(lVar8 + 0x20) == 0)) &&
        (cVar5 = FUN_144729dda(param_1 + 0x17f8), cVar5 == '\0')))) &&
      (*(char *)(param_1 + 0x67f8) == '\0')))) {
    uVar9 = (**(code **)(*(longlong *)(param_1 + 0x10e0) + 0x50))(param_1 + 0x10e0);
    local_68 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_60 = 0x8000000000;
    local_58 = 0xffffffff;
    uVar10 = FUN_140963a30(lVar7 + 0x2e8);
    local_a8 = &local_88;
    FUN_14122243a(uVar9,&local_98,uVar10,1);
    plVar1 = local_90;
    if ((undefined8 *)(param_1 + 0x67e8) != &local_98) {
      *(undefined8 *)(param_1 + 0x67e8) = local_98;
      local_98 = 0;
      plVar4 = *(longlong **)(param_1 + 0x67f0);
      if (local_90 != plVar4) {
        local_90 = (longlong *)0x0;
        *(longlong **)(param_1 + 0x67f0) = plVar1;
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
      }
    }
    plVar1 = local_90;
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_90 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    uStack_40 = uStack_40 & 0xffffffff00000000;
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    FUN_140333f4e(&local_88);
    if (*(char *)(param_1 + 0x178) == '\x03') {
      iVar6 = 1;
      if (0 < *(int *)(param_1 + 0x67e0)) {
        iVar6 = *(int *)(param_1 + 0x67e0) + 1;
      }
      *(int *)(param_1 + 0x67e0) = iVar6;
      FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x28),0x3a);
    }
  }
LAB_141222381:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122243a FUN_14122243a body=37 status=ok
// SIG undefined FUN_14122243a(void)

undefined8 FUN_14122243a(undefined8 param_1,undefined8 param_2)

{
  FUN_14096dfee();
  return param_2;
}



// FUNCTION 141222460 FUN_141222460 body=514 status=ok
// SIG undefined FUN_141222460(void)

undefined8 FUN_141222460(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  code *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    if (DAT_14cad2858 == 0) {
      local_40 = &local_28;
      local_28 = FUN_144a7958c;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146395584;
      local_48 = &LAB_147a0ba80;
      local_50 = &LAB_14575ccce;
      local_58 = L"Engine";
      local_60 = 0x40000000000;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1180;
      FUN_14081cfa3(L"/Script/Engine",L"SkeletalMeshComponent",&DAT_14cad2858,FUN_1463bcebe);
    }
    lVar4 = *(longlong *)(lVar4 + 0x10);
    iVar6 = *(int *)(DAT_14cad2858 + 0x38);
    if ((iVar6 <= *(int *)(lVar4 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == DAT_14cad2858 + 0x30)) {
      FUN_14036294a(param_1[4],CONCAT71((int7)(int3)((uint)iVar6 >> 8),1),1);
    }
  }
  lVar4 = param_1[0x7c];
  if (lVar4 == 0) {
    lVar4 = (**(code **)(*param_1 + 0x350))(param_1);
    param_1[0x7c] = lVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
  }
  if (*(int *)(lVar4 + 0x800) != *(int *)(lVar4 + 0x82c)) {
    lVar2 = *param_2;
    uVar3 = (uint)((ulonglong)lVar2 >> 0x10);
    uVar8 = (uint)lVar2 & 0xffff;
    lVar7 = lVar4 + 0x830;
    if (*(longlong *)(lVar4 + 0x838) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0x838);
    }
    iVar6 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0x840) - 1U &
                             (int)((ulonglong)lVar2 >> 0x20) + ((uint)lVar2 << 0x10 | uVar8) +
                             (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(lVar4 + 0x7f8) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar2) {
          if (plVar1 == (longlong *)0x0) {
            return 0;
          }
          if ((longlong *)plVar1[1] == (longlong *)0x0) {
            return 0;
          }
                    /* WARNING: Could not recover jumptable at 0x000141222659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar5 = (**(code **)(*(longlong *)plVar1[1] + 0x120))();
          return uVar5;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 141222664 FUN_141222664 body=1047 status=ok
// SIG undefined FUN_141222664(void)

void FUN_141222664(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined1 local_28;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uStack_18 = 0;
  uStack_14 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_58 = (undefined *)FUN_1446ddbd2();
      local_50 = FUN_1468d96f0;
      local_60 = 0;
      local_68 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_18 = (undefined4)uVar2;
      uStack_14 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_18);
    }
  }
  local_1c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_50 = FUN_1408a629c;
      local_58 = &DAT_14c9520b8;
      local_60 = 0;
      local_68 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_1c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_1c = (undefined4)uVar2;
      uStack_18 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_1c);
    }
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0x3f800000;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_48);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_48);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_48 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_48);
    }
  }
  puVar4 = &local_48;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar4 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_141222a7c(CONCAT44(uStack_14,uStack_18),local_1c,puVar4);
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141222a7c FUN_141222a7c body=208 status=ok
// SIG undefined FUN_141222a7c(void)

void FUN_141222a7c(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_40;
  undefined8 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1 == (longlong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*param_1 + 0x180))(param_1);
  }
  FUN_141222b64(&local_40,uVar2);
  if (local_40 != 0) {
    local_44 = 0;
    local_4c = 0;
    local_58 = param_3;
    local_50 = param_2;
    FUN_14122315c(local_40,param_1,1);
  }
  if (local_38 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(local_38 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar1 = (int *)((longlong)local_38 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141222b64 FUN_141222b64 body=1465 status=ok
// SIG undefined FUN_141222b64(void)

longlong * FUN_141222b64(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong *plVar16;
  undefined *puVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  longlong *plVar25;
  bool bVar26;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
LAB_141222df7:
    *param_1 = 0;
    param_1[1] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_88);
  }
  uVar22 = *(uint *)(param_2 + 0xc);
  if ((int)uVar22 < DAT_14c9647dc) {
    lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8);
  }
  else {
    lVar24 = 0;
  }
  uVar15 = *(uint *)(lVar24 + 0x10);
  if (uVar15 == 0) {
    LOCK();
    iVar21 = DAT_14c964868 + 1;
    UNLOCK();
    uVar19 = DAT_14c964868 + 1;
    bVar26 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar21;
    if (bVar26) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar19);
    }
    LOCK();
    uVar15 = *(uint *)(lVar24 + 0x10);
    bVar26 = uVar15 == 0;
    if (bVar26) {
      *(uint *)(lVar24 + 0x10) = uVar19;
      uVar15 = 0;
    }
    UNLOCK();
    if (bVar26) {
      uVar15 = uVar19;
    }
    if (uVar15 == 0) goto LAB_141222df7;
  }
  if (((((int)uVar22 < 0) || (DAT_14c9647dc <= (int)uVar22)) ||
      (lVar24 = (ulonglong)((uVar22 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8), lVar24 == 0)) ||
     ((*(uint *)(lVar24 + 0x10) != uVar15 || ((*(uint *)(lVar24 + 8) & 0x10200000) != 0))))
  goto LAB_141222df7;
  lVar24 = CONCAT44(uVar15,uVar22);
  uVar22 = uVar22 ^ uVar15;
  iVar21 = DAT_14cb85780;
  if (DAT_14cb85780 != DAT_14cb857ac) {
    puVar17 = &DAT_14cb857b0;
    if (DAT_14cb857b8 != (undefined *)0x0) {
      puVar17 = DAT_14cb857b8;
    }
    iVar13 = *(int *)(puVar17 + (ulonglong)(DAT_14cb857c0 - 1U & uVar22) * 4);
    iVar21 = DAT_14cb857ac;
    if (iVar13 != -1) {
      do {
        lVar23 = (longlong)iVar13 * 0x20;
        local_58 = *(longlong *)(DAT_14cb85778 + lVar23);
        local_60 = lVar24;
        cVar12 = FUN_141223124(&local_58,&local_60);
        iVar21 = DAT_14cb857ac;
        if (cVar12 != '\0') {
          if (DAT_14cb85778 + lVar23 != 0) {
            lVar23 = DAT_14cb85778 + lVar23;
            goto LAB_141222cb3;
          }
          break;
        }
        iVar13 = *(int *)(DAT_14cb85778 + 0x18 + lVar23);
      } while (iVar13 != -1);
    }
  }
  iVar14 = DAT_14cb857a8;
  iVar13 = DAT_14cb85780;
  if (iVar21 == 0) {
    iVar21 = DAT_14cb85780 + 1;
    bVar26 = DAT_14cb85784 == DAT_14cb85780;
    DAT_14cb85780 = iVar21;
    if (bVar26) {
      FUN_1447711aa(&DAT_14cb85778,iVar13);
    }
    lVar23 = (longlong)iVar13;
    iVar21 = FUN_144a54ea4(&DAT_14cb85788,1);
    puVar17 = DAT_14cb85798;
    if (DAT_14cb85798 == (undefined *)0x0) {
      puVar17 = &DAT_14cb85788;
    }
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    bVar6 = (byte)iVar21 & 0x1f;
    *(uint *)(puVar17 + (longlong)(iVar14 >> 5) * 4) =
         *(uint *)(puVar17 + (longlong)(iVar14 >> 5) * 4) &
         (-2 << bVar6 | 0xfffffffeU >> 0x20 - bVar6);
  }
  else {
    lVar23 = (longlong)DAT_14cb857a8;
    DAT_14cb857a8 = *(int *)(DAT_14cb85778 + 4 + lVar23 * 0x20);
    DAT_14cb857ac = iVar21 + -1;
    iVar13 = iVar14;
    if (DAT_14cb857ac != 0) {
      *(undefined4 *)(DAT_14cb85778 + (longlong)DAT_14cb857a8 * 0x20) = 0xffffffff;
    }
  }
  puVar17 = &DAT_14cb85788;
  if (DAT_14cb85798 != (undefined *)0x0) {
    puVar17 = DAT_14cb85798;
  }
  iVar21 = iVar13 + 0x1f;
  if (-1 < iVar13) {
    iVar21 = iVar13;
  }
  *(uint *)(puVar17 + (longlong)(iVar21 >> 5) * 4) =
       *(uint *)(puVar17 + (longlong)(iVar21 >> 5) * 4) | 1 << ((byte)iVar13 & 0x1f);
  lVar11 = DAT_14cb85778;
  iVar21 = 1;
  lVar23 = lVar23 * 0x20;
  puVar3 = (undefined4 *)(DAT_14cb85778 + lVar23);
  *(longlong *)(DAT_14cb85778 + lVar23) = lVar24;
  puVar5 = (undefined8 *)(lVar11 + 8 + lVar23);
  *puVar5 = 0;
  puVar5[1] = 0;
  *(undefined4 *)(lVar11 + 0x18 + lVar23) = 0xffffffff;
  if (DAT_14cb85780 - DAT_14cb857ac == 1) {
    uVar15 = 1;
LAB_141222ed6:
    if (((int)uVar15 < 1) || (iVar21 <= DAT_14cb857c0)) {
      uVar22 = DAT_14cb857c0 - 1U & uVar22;
      puVar3[7] = uVar22;
      puVar17 = DAT_14cb857b8;
      if (DAT_14cb857b8 == (undefined *)0x0) {
        puVar17 = &DAT_14cb857b0;
      }
      puVar3[6] = *(undefined4 *)
                   (puVar17 + ((longlong)DAT_14cb857c0 - 1U & (longlong)(int)uVar22) * 4);
      puVar17 = DAT_14cb857b8;
      if (DAT_14cb857b8 == (undefined *)0x0) {
        puVar17 = &DAT_14cb857b0;
      }
      *(int *)(puVar17 + ((longlong)DAT_14cb857c0 - 1U & (longlong)(int)uVar22) * 4) = iVar13;
    }
    else {
      DAT_14cb857c0 = iVar21;
      FUN_145846b0a();
    }
  }
  else {
    local_58 = lVar24;
    iVar14 = FUN_1488f02ac(uVar22);
    if (iVar14 == -1) {
      uVar15 = DAT_14cb85780 - DAT_14cb857ac;
      if (3 < uVar15) {
        uVar18 = (ulonglong)(uVar15 & 0xfffffffe) + 0xf;
        lVar23 = 0x3f;
        if (uVar18 != 0) {
          for (; uVar18 >> lVar23 == 0; lVar23 = lVar23 + -1) {
          }
        }
        iVar21 = 1 << ((byte)lVar23 & 0x1f);
      }
      goto LAB_141222ed6;
    }
    puVar4 = (undefined4 *)(DAT_14cb85778 + (longlong)iVar14 * 0x20);
    plVar25 = *(longlong **)(DAT_14cb85778 + 0x10 + (longlong)iVar14 * 0x20);
    if (plVar25 != (longlong *)0x0) {
      LOCK();
      plVar16 = plVar25 + 1;
      *(int *)plVar16 = (int)*plVar16 + -1;
      UNLOCK();
      if ((int)*plVar16 == 0) {
        (**(code **)*plVar25)(plVar25);
        LOCK();
        piVar2 = (int *)((longlong)plVar25 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar25 + 0x10))(plVar25);
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
    FUN_140f21592(iVar13);
  }
  lVar23 = DAT_14cb85778 + (longlong)iVar13 * 0x20;
LAB_141222cb3:
  plVar25 = (longlong *)(lVar23 + 8);
  if (*plVar25 != 0) goto LAB_141222cb9;
  plVar16 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar16[1] = (longlong)&DAT_100000001;
  *plVar16 = (longlong)&PTR_FUN_14b416940;
  plVar16[2] = 0;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar16[5] = 0;
  FUN_1409e1656(plVar16 + 2);
  plVar16[2] = (longlong)&PTR_FUN_14b416960;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar16[5] = 0;
  if (plVar16 == (longlong *)0x0) {
    *plVar25 = 0x10;
    plVar20 = *(longlong **)(lVar23 + 0x10);
    if (plVar20 != (longlong *)0x0) {
      *(undefined8 *)(lVar23 + 0x10) = 0;
LAB_141222fe6:
      LOCK();
      plVar1 = plVar20 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
      if (plVar16 != (longlong *)0x0) goto LAB_141222d80;
    }
  }
  else {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    *plVar25 = (longlong)(plVar16 + 2);
    plVar20 = *(longlong **)(lVar23 + 0x10);
    if (plVar16 == plVar20) {
      LOCK();
      plVar20 = plVar16 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*plVar16)(plVar16);
        LOCK();
        piVar2 = (int *)((longlong)plVar16 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar16 + 0x10))(plVar16);
        }
      }
    }
    else {
      *(longlong **)(lVar23 + 0x10) = plVar16;
      if (plVar20 != (longlong *)0x0) goto LAB_141222fe6;
    }
LAB_141222d80:
    LOCK();
    plVar20 = plVar16 + 1;
    *(int *)plVar20 = (int)*plVar20 + -1;
    UNLOCK();
    if ((int)*plVar20 == 0) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar2 = (int *)((longlong)plVar16 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
      }
    }
  }
  *(longlong *)(*plVar25 + 8) = lVar24;
  if (DAT_14cb85770 == 0) {
    FUN_14576a192(&DAT_14cb10a20,&local_58,FUN_140f212ca);
    DAT_14cb85770 = local_58;
  }
LAB_141222cb9:
  *param_1 = *plVar25;
  lVar24 = *(longlong *)(lVar23 + 0x10);
  param_1[1] = lVar24;
  if (lVar24 != 0) {
    LOCK();
    *(int *)(lVar24 + 8) = *(int *)(lVar24 + 8) + 1;
    UNLOCK();
  }
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141223124 FUN_141223124 body=55 status=ok
// SIG undefined FUN_141223124(void)

ulonglong FUN_141223124(int *param_1,int *param_2)

{
  char cVar1;
  ulonglong uVar2;
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    return CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1);
  }
  cVar1 = FUN_144729dda();
  if (cVar1 == '\0') {
    uVar2 = FUN_144729dda(param_2);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 14122315c FUN_14122315c body=1752 status=ok
// SIG undefined FUN_14122315c(void)

void FUN_14122315c(longlong *param_1,longlong param_2,undefined1 param_3,undefined4 *param_4,
                  undefined8 *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  float fVar18;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  code *local_a8;
  code *local_a0;
  longlong *local_90;
  undefined4 *local_88;
  longlong *local_80;
  int local_78;
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined5 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(float *)(param_5 + 2) <= 0.0) goto LAB_14122339c;
  plVar10 = (longlong *)FUN_14001cc68(0x68,0x10);
  plVar10[1] = (longlong)&DAT_100000001;
  *plVar10 = (longlong)&PTR_FUN_14b4169b0;
  plVar15 = plVar10 + 2;
  plVar10[8] = 0;
  plVar10[9] = 0;
  plVar10[2] = 0;
  plVar10[3] = 0;
  plVar10[4] = 0;
  plVar10[5] = 0;
  plVar10[6] = 0;
  plVar10[7] = 0;
  plVar10[10] = 0;
  *(undefined4 *)(plVar10 + 8) = 0x3f800000;
  *(undefined4 *)(plVar10 + 0xb) = 0x3f800000;
  *(undefined4 *)((longlong)plVar10 + 0x5c) = 0x3f800000;
  *(undefined4 *)(plVar10 + 0xc) = 0x3f800000;
  *(undefined4 *)((longlong)plVar10 + 100) = 0x3f800000;
  if (param_2 != 0) {
    if (DAT_14cac9ca8 == 0) {
      local_b0 = &local_68;
      local_68 = FUN_141030f22;
      local_a0 = FUN_14081d0ea;
      local_a8 = FUN_14081d0ea;
      local_b8 = &LAB_1478c0a72;
      local_c0 = &LAB_1417b2375;
      local_c8 = L"Engine";
      local_d0 = 0x1000000000;
      local_d8 = 0x10000004;
      local_e0 = 8;
      local_e8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)plVar10 + 0xc) = *(int *)((longlong)plVar10 + 0xc) + 1;
        UNLOCK();
      }
      uStack_58 = (undefined5)((ulonglong)*(undefined8 *)((longlong)param_5 + 0xd) >> 0x18);
      local_68 = (code *)*param_5;
      uStack_60 = *(undefined4 *)(param_5 + 1);
      uStack_5c = *(undefined4 *)((longlong)param_5 + 0xc);
      lVar12 = param_5[3];
      local_90 = plVar15;
      local_88 = param_4;
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      uVar2 = *(undefined1 *)(param_5 + 4);
      local_80 = (longlong *)0x0;
      local_78 = 0;
      FUN_1446efa72(&local_80,0,6,0x10);
      plVar15 = local_80;
      local_78 = 6;
      *local_80 = (longlong)&PTR_LAB_14a915ec0;
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 1;
      lVar16 = DAT_14c758608 + 1;
      if (lVar11 == 0) {
        LOCK();
        UNLOCK();
        lVar11 = DAT_14c758608 + 2;
        lVar16 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar16;
      local_80[2] = lVar11;
      *local_80 = (longlong)&PTR_FUN_14b4169d0;
      local_80[3] = (longlong)local_90;
      local_80[4] = (longlong)plVar10;
      *(undefined4 *)(local_80 + 5) = (undefined4)local_68;
      *(undefined4 *)((longlong)local_80 + 0x2c) = local_68._4_4_;
      *(undefined4 *)(local_80 + 6) = uStack_60;
      *(undefined4 *)((longlong)local_80 + 0x34) = uStack_5c;
      *(ulonglong *)((longlong)local_80 + 0x35) = CONCAT53(uStack_58,uStack_5c._1_3_);
      local_80[8] = lVar12;
      if ((lVar12 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar12);
      }
      param_4 = local_88;
      *(undefined1 *)(plVar15 + 9) = uVar2;
      *(undefined1 *)(plVar15 + 10) = param_3;
      if (((local_78 == 0) || (local_80 == (longlong *)0x0)) ||
         (cVar8 = (**(code **)(*local_80 + 0x30))(), cVar8 == '\0')) {
        param_4 = local_88;
        if (local_78 == 0) goto LAB_14122365a;
        if (local_80 != (longlong *)0x0) {
          (**(code **)*local_80)(local_80,0);
          FUN_1446efa72(&local_80,0,0,0x10);
          goto LAB_141223647;
        }
      }
      else {
        plVar15 = (longlong *)(param_2 + 0x300);
        if (*(int *)(param_2 + 0x314) < 1) {
          iVar9 = *(int *)(param_2 + 0x308);
          iVar14 = *(int *)(param_2 + 0x310) + -1;
          *(int *)(param_2 + 0x310) = iVar14;
          if (iVar14 <= iVar9) {
            iVar14 = iVar9;
            if (0 < iVar9) {
              iVar13 = 0;
              do {
                if (((*(int *)(*plVar15 + 8 + (longlong)iVar13 * 0x10) == 0) ||
                    (plVar4 = *(longlong **)(*plVar15 + (longlong)iVar13 * 0x10),
                    plVar4 == (longlong *)0x0)) ||
                   (cVar8 = (**(code **)(*plVar4 + 0x28))(), cVar8 != '\0')) {
                  FUN_14005b288(plVar15,iVar13);
                  FUN_14005b248(plVar15);
                }
                else {
                  iVar13 = iVar13 + 1;
                }
                iVar14 = *(int *)(param_2 + 0x308);
              } while (iVar13 < iVar14);
            }
            param_4 = local_88;
            iVar13 = 2;
            if (2 < iVar14 * 2) {
              iVar13 = iVar14 * 2;
            }
            *(int *)(param_2 + 0x310) = iVar13;
            if ((iVar13 < iVar9) && (*(int *)(param_2 + 0x30c) != iVar14)) {
              FUN_14045812c();
            }
          }
        }
        if ((local_78 != 0) && (local_80 != (longlong *)0x0)) {
          (**(code **)(*local_80 + 0x38))(local_80,local_70);
        }
        iVar9 = *(int *)(param_2 + 0x308);
        *(uint *)(param_2 + 0x308) = iVar9 + 1U;
        if (*(uint *)(param_2 + 0x30c) < iVar9 + 1U) {
          FUN_1447a71f6(plVar15,iVar9);
        }
        lVar12 = *plVar15;
        lVar16 = (longlong)iVar9 * 0x10;
        *(undefined8 *)(lVar12 + lVar16) = 0;
        *(undefined4 *)(lVar12 + 8 + lVar16) = 0;
        *(longlong **)(lVar12 + lVar16) = local_80;
        local_80 = (longlong *)0x0;
        *(int *)(lVar12 + 8 + lVar16) = local_78;
LAB_141223647:
        local_78 = 0;
LAB_14122365a:
        if (local_80 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      plVar15 = local_90;
      if (plVar10 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar10 + 0x10))(plVar10);
          plVar15 = local_90;
        }
      }
    }
  }
  plVar4 = param_1 + 2;
  iVar9 = (int)param_1[3];
  *(uint *)(param_1 + 3) = iVar9 + 1U;
  if (*(uint *)((longlong)param_1 + 0x1c) < iVar9 + 1U) {
    local_90 = param_1;
    FUN_14189bfee(plVar4,iVar9);
    param_1 = local_90;
  }
  lVar12 = *plVar4;
  *(longlong **)(lVar12 + (longlong)iVar9 * 0x10) = plVar15;
  *(longlong **)(lVar12 + 8 + (longlong)iVar9 * 0x10) = plVar10;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)plVar10 + 0x3d) = *(undefined8 *)((longlong)param_5 + 0xd);
  uVar5 = *(undefined4 *)((longlong)param_5 + 4);
  uVar6 = *(undefined4 *)(param_5 + 1);
  uVar7 = *(undefined4 *)((longlong)param_5 + 0xc);
  *(undefined4 *)(plVar10 + 6) = *(undefined4 *)param_5;
  *(undefined4 *)((longlong)plVar10 + 0x34) = uVar5;
  *(undefined4 *)(plVar10 + 7) = uVar6;
  *(undefined4 *)((longlong)plVar10 + 0x3c) = uVar7;
  lVar12 = param_5[3];
  if (DAT_14c950c29 == 1) {
    if (lVar12 == 0) {
      lVar12 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar12 = param_5[3];
    }
  }
  plVar10[9] = lVar12;
  *(undefined1 *)(plVar10 + 10) = *(undefined1 *)(param_5 + 4);
  fVar18 = 0.0;
  if (((((*(int *)((longlong)param_1 + 0xc) != 0) &&
        (uVar3 = *(uint *)(param_1 + 1), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) &&
      ((plVar15 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar15 != (longlong *)0x0 && ((int)plVar15[2] == *(int *)((longlong)param_1 + 0xc))))) &&
     (((*(uint *)(plVar15 + 1) & 0x10200000) == 0 && (*plVar15 != 0)))) {
    fVar18 = (float)*(double *)(*plVar15 + 0x6d0);
  }
  *(float *)((longlong)plVar10 + 0x14) = fVar18;
  uVar5 = param_4[1];
  uVar6 = param_4[2];
  uVar7 = param_4[3];
  *(undefined4 *)(plVar10 + 0xb) = *param_4;
  *(undefined4 *)((longlong)plVar10 + 0x5c) = uVar5;
  *(undefined4 *)(plVar10 + 0xc) = uVar6;
  *(undefined4 *)((longlong)plVar10 + 100) = uVar7;
  *(undefined1 *)(plVar10 + 2) = param_3;
  if (param_2 == 0) {
    *(undefined4 *)(plVar10 + 3) = 0;
    iVar9 = 0;
  }
  else {
    uVar3 = *(uint *)(param_2 + 0xc);
    *(uint *)(plVar10 + 3) = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    iVar9 = *(int *)(lVar12 + 0x10);
    if (*(int *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar14 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar14);
      }
      LOCK();
      iVar9 = *(int *)(lVar12 + 0x10);
      bVar17 = iVar9 == 0;
      if (bVar17) {
        *(int *)(lVar12 + 0x10) = iVar14;
        iVar9 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar9 = iVar14;
      }
    }
  }
  *(int *)((longlong)plVar10 + 0x1c) = iVar9;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar10 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar10 + 0x10))(plVar10);
      }
    }
  }
LAB_14122339c:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141223836 FUN_141223836 body=37 status=ok
// SIG undefined FUN_141223836(void)

void FUN_141223836(longlong param_1,longlong *param_2)

{
  (**(code **)(param_1 + 0x10))((longlong)*(int *)(param_1 + 0x18) + *(longlong *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x000141223857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x20))(param_2);
  return;
}



// FUNCTION 14122385c FUN_14122385c body=180 status=ok
// SIG undefined FUN_14122385c(void)

void FUN_14122385c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x288);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(lVar2 + 0xe8) < 2) {
    return;
  }
  if (*(char *)(lVar2 + 0xc0) == '\0') {
    if (*(int *)(lVar2 + 0xc4) != 0) goto LAB_14122388d;
    iVar3 = 1;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0xc4) + 1;
  }
  *(undefined1 *)(lVar2 + 0xc0) = 0;
  *(int *)(lVar2 + 0xc4) = iVar3;
LAB_14122388d:
  do {
    iVar1 = *(int *)(lVar2 + 0xfc);
    iVar3 = iVar1 + 1;
    *(int *)(lVar2 + 0xfc) = iVar3;
    iVar4 = *(int *)(lVar2 + 0xf8) + 1;
    *(int *)(lVar2 + 0xf8) = iVar4;
    if ((*(int *)(lVar2 + 0xe8) <= iVar4) && ((iVar4 != 0 || (iVar4 = 0, iVar3 == 0)))) {
      *(undefined4 *)(lVar2 + 0xf8) = 0;
      *(int *)(lVar2 + 0xfc) = iVar1 + 2;
      iVar4 = 0;
    }
    FUN_141223910(param_1,iVar4);
  } while ((*(char *)(lVar2 + 0xe0) == '\0') && (*(char *)(lVar2 + 0xb8) != '\0'));
  return;
}



// FUNCTION 141223910 FUN_141223910 body=1985 status=ok
// SIG undefined FUN_141223910(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141223910(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  undefined4 uVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  void *pvVar11;
  ushort *puVar12;
  undefined1 auStack_98 [40];
  longlong local_70 [2];
  LARGE_INTEGER local_60;
  longlong *local_58;
  longlong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar8 = *(longlong *)(param_1 + 0x288);
  if (lVar8 != 0) {
    FUN_1448d5e3c(&local_60,param_1 + 0x208);
    plVar9 = *(longlong **)(local_60.QuadPart + 0x300);
    SRWLock = (PSRWLOCK)(plVar9 + 9);
    AcquireSRWLockShared(SRWLock);
    if (local_58 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_58 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_58)(local_58);
        LOCK();
        piVar2 = (int *)((longlong)local_58 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_58 + 0x10))(local_58);
        }
      }
    }
    if ((-1 < (int)param_2) && ((int)param_2 < *(int *)(lVar8 + 0xe8))) {
      uVar5 = *(undefined4 *)(param_1 + 0x298);
      *(int *)(lVar8 + 0x104) = *(int *)(lVar8 + 0x104) + 1;
      *(undefined4 *)(lVar8 + 0x100) = uVar5;
      lVar10 = *plVar9;
      lVar4 = lVar10 + (ulonglong)param_2 * 0x168;
      puVar3 = (undefined8 *)(lVar8 + 0x108);
      *(int *)(lVar8 + 0x118) = *(int *)(lVar8 + 0x118) + 1;
      if (puVar3 != (undefined8 *)(lVar10 + (ulonglong)param_2 * 0x168 + 0x20)) {
        iVar7 = *(int *)(lVar4 + 0x28);
        pvVar11 = *(void **)(lVar4 + 0x20);
        *(int *)(lVar8 + 0x110) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x114) == 0) {
          *(undefined4 *)(lVar8 + 0x114) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x120);
      *(int *)(lVar8 + 0x130) = *(int *)(lVar8 + 0x130) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x38)) {
        iVar7 = *(int *)(lVar4 + 0x40);
        pvVar11 = *(void **)(lVar4 + 0x38);
        *(int *)(lVar8 + 0x128) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 300) == 0) {
          *(undefined4 *)(lVar8 + 300) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x138);
      *(int *)(lVar8 + 0x148) = *(int *)(lVar8 + 0x148) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x50)) {
        iVar7 = *(int *)(lVar4 + 0x58);
        pvVar11 = *(void **)(lVar4 + 0x50);
        *(int *)(lVar8 + 0x140) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x144) == 0) {
          *(undefined4 *)(lVar8 + 0x144) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x170);
      *(int *)(lVar8 + 0x180) = *(int *)(lVar8 + 0x180) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x68)) {
        iVar7 = *(int *)(lVar4 + 0x70);
        pvVar11 = *(void **)(lVar4 + 0x68);
        *(int *)(lVar8 + 0x178) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x17c) == 0) {
          *(undefined4 *)(lVar8 + 0x17c) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x150);
      *(int *)(lVar8 + 0x160) = *(int *)(lVar8 + 0x160) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x80)) {
        iVar7 = *(int *)(lVar4 + 0x88);
        pvVar11 = *(void **)(lVar4 + 0x80);
        *(int *)(lVar8 + 0x158) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x15c) == 0) {
          *(undefined4 *)(lVar8 + 0x15c) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x188);
      *(int *)(lVar8 + 0x198) = *(int *)(lVar8 + 0x198) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x98)) {
        iVar7 = *(int *)(lVar4 + 0xa0);
        pvVar11 = *(void **)(lVar4 + 0x98);
        *(int *)(lVar8 + 400) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x194) == 0) {
          *(undefined4 *)(lVar8 + 0x194) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      iVar7 = *(int *)(lVar4 + 0x88);
      *(int *)(lVar8 + 0x16c) = *(int *)(lVar8 + 0x16c) + 1;
      *(bool *)(lVar8 + 0x168) = 1 < iVar7;
      puVar3 = (undefined8 *)(lVar8 + 0x200);
      *(int *)(lVar8 + 0x210) = *(int *)(lVar8 + 0x210) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x108)) {
        iVar7 = *(int *)(lVar4 + 0x110);
        pvVar11 = *(void **)(lVar4 + 0x108);
        *(int *)(lVar8 + 0x208) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x20c) == 0) {
          *(undefined4 *)(lVar8 + 0x20c) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x218);
      *(int *)(lVar8 + 0x228) = *(int *)(lVar8 + 0x228) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x120)) {
        iVar7 = *(int *)(lVar4 + 0x128);
        pvVar11 = *(void **)(lVar4 + 0x120);
        *(int *)(lVar8 + 0x220) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x224) == 0) {
          *(undefined4 *)(lVar8 + 0x224) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x230);
      *(int *)(lVar8 + 0x240) = *(int *)(lVar8 + 0x240) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0x138)) {
        iVar7 = *(int *)(lVar4 + 0x140);
        pvVar11 = *(void **)(lVar4 + 0x138);
        *(int *)(lVar8 + 0x238) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x23c) == 0) {
          *(undefined4 *)(lVar8 + 0x23c) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      uVar5 = *(undefined4 *)(lVar4 + 0x150);
      *(int *)(lVar8 + 0x104) = *(int *)(lVar8 + 0x104) + 1;
      *(undefined4 *)(lVar8 + 0x100) = uVar5;
      puVar3 = (undefined8 *)(lVar8 + 0x1d0);
      *(int *)(lVar8 + 0x1e0) = *(int *)(lVar8 + 0x1e0) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0xd8)) {
        iVar7 = *(int *)(lVar4 + 0xe0);
        pvVar11 = *(void **)(lVar4 + 0xd8);
        *(int *)(lVar8 + 0x1d8) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 0x1dc) == 0) {
          *(undefined4 *)(lVar8 + 0x1dc) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      puVar3 = (undefined8 *)(lVar8 + 0x1e8);
      *(int *)(lVar8 + 0x1f8) = *(int *)(lVar8 + 0x1f8) + 1;
      if (puVar3 != (undefined8 *)(lVar4 + 0xf0)) {
        iVar7 = *(int *)(lVar4 + 0xf8);
        pvVar11 = *(void **)(lVar4 + 0xf0);
        *(int *)(lVar8 + 0x1f0) = iVar7;
        if (iVar7 == 0 && *(int *)(lVar8 + 500) == 0) {
          *(undefined4 *)(lVar8 + 500) = 0;
        }
        else {
          FUN_1446dd670(puVar3,iVar7);
          if (iVar7 != 0) {
            memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      uVar6 = *(undefined1 *)(lVar4 + 1);
      *(int *)(lVar8 + 0xe4) = *(int *)(lVar8 + 0xe4) + 1;
      *(undefined1 *)(lVar8 + 0xe0) = uVar6;
      if (*(char *)(lVar4 + 1) == '\x01') {
        *(int *)(lVar8 + 0x1b0) = *(int *)(lVar8 + 0x1b0) + 1;
        FUN_1400b22c2(local_70,"ViewDetailsText");
        FUN_14000bbd8(&local_60,local_70,0);
        FUN_140ac6a88(&local_60,lVar8 + 0x1a0);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
        puVar3 = (undefined8 *)(lVar8 + 0x1b8);
        *(int *)(lVar8 + 0x1c8) = *(int *)(lVar8 + 0x1c8) + 1;
        if (puVar3 != (undefined8 *)(lVar4 + 0xb0)) {
          iVar7 = *(int *)(lVar4 + 0xb8);
          pvVar11 = *(void **)(lVar4 + 0xb0);
          *(int *)(lVar8 + 0x1c0) = iVar7;
          if (iVar7 == 0 && *(int *)(lVar8 + 0x1c4) == 0) {
            *(undefined4 *)(lVar8 + 0x1c4) = 0;
          }
          else {
            FUN_1446dd670(puVar3,iVar7);
            if (iVar7 != 0) {
              memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
            }
          }
        }
      }
      else {
        puVar3 = (undefined8 *)(lVar8 + 0x1a0);
        *(int *)(lVar8 + 0x1b0) = *(int *)(lVar8 + 0x1b0) + 1;
        if (puVar3 != (undefined8 *)(lVar4 + 0xb0)) {
          iVar7 = *(int *)(lVar4 + 0xb8);
          pvVar11 = *(void **)(lVar4 + 0xb0);
          *(int *)(lVar8 + 0x1a8) = iVar7;
          if (iVar7 == 0 && *(int *)(lVar8 + 0x1ac) == 0) {
            *(undefined4 *)(lVar8 + 0x1ac) = 0;
          }
          else {
            FUN_1446dd670(puVar3,iVar7);
            if (iVar7 != 0) {
              memcpy((void *)*puVar3,pvVar11,(longlong)iVar7 * 2);
            }
          }
        }
        *(int *)(lVar8 + 0x1c8) = *(int *)(lVar8 + 0x1c8) + 1;
        FUN_1400b22c2(local_70,"ViewInBrowser");
        FUN_14000bbd8(&local_60,local_70,0);
        FUN_140ac6a88(&local_60,lVar8 + 0x1b8);
        if (local_48 != 0) {
          FUN_1400020a8();
        }
        if (local_70[0] != 0) {
          FUN_1400020a8();
        }
      }
      puVar12 = *(ushort **)(lVar8 + 0x80);
      if (puVar12 != (ushort *)0x0) {
        *puVar12 = *puVar12 | (ushort)(1L << (*(byte *)(lVar8 + 0x78) & 0x3f));
      }
      QueryPerformanceCounter(&local_60);
      _DAT_14cbe0578 = (double)local_60.QuadPart * DAT_14c83f420 + 16777216.0;
    }
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_38 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412240d2 FUN_1412240d2 body=489 status=ok
// SIG undefined FUN_1412240d2(void)

undefined8 *
FUN_1412240d2(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong *local_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_5;
  plVar4 = (longlong *)FUN_14001cc68(0x290);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14a5406a0;
  plVar1 = plVar4 + 2;
  memset(plVar1,0,0x280);
  FUN_140a55f88(plVar1);
  plVar4[0x4f] = (longlong)&PTR_LAB_149e668b0;
  *(undefined2 *)(plVar4 + 0x50) = 0;
  FUN_1405bceb4(plVar4 + 0x4f);
  plVar4[2] = (longlong)&PTR_FUN_14a544bd0;
  plVar4[0x4f] = (longlong)&PTR_FUN_14a544e10;
  plVar4[0x51] = 0;
  local_50 = plVar1;
  local_48 = plVar4;
  FUN_1412242bc(&local_50,plVar1);
  plVar1 = local_48;
  if (local_48 == (longlong *)0x0) {
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (plVar4 == (longlong *)0x0) goto LAB_1412241e0;
    param_1[1] = 0;
LAB_14122424d:
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 != 0) goto LAB_1412241e0;
    (**(code **)*plVar4)(plVar4);
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
    plVar1 = plVar4;
  }
  else {
    LOCK();
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
    UNLOCK();
    *param_1 = local_50;
    plVar4 = (longlong *)param_1[1];
    if (local_48 != plVar4) {
      param_1[1] = local_48;
      if (plVar4 == (longlong *)0x0) goto LAB_1412241e0;
      goto LAB_14122424d;
    }
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 != 0) goto LAB_1412241e0;
    (**(code **)*local_48)(local_48);
    LOCK();
    piVar2 = (int *)((longlong)plVar1 + 0xc);
    *piVar2 = *piVar2 + -1;
    iVar3 = *piVar2;
    UNLOCK();
  }
  if (iVar3 == 0) {
    (**(code **)(*plVar1 + 0x10))(plVar1);
  }
LAB_1412241e0:
  plVar1 = local_48;
  if (local_48 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_48 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_48)(local_48);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
    }
  }
  local_58 = 0x280;
  FUN_140a52e78(*param_1,param_2,param_3,param_4);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412242bc FUN_1412242bc body=162 status=ok
// SIG undefined FUN_1412242bc(void)

void FUN_1412242bc(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_1412242fb;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_1412242fb;
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
LAB_1412242fb:
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
                    /* WARNING: Could not recover jumptable at 0x00014122435a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14122435e FUN_14122435e body=95 status=ok
// SIG undefined FUN_14122435e(void)

void FUN_14122435e(longlong param_1)

{
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x118));
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc7be(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc892(param_1);
  return;
}



// FUNCTION 1412243be FUN_1412243be body=104 status=ok
// SIG undefined FUN_1412243be(void)

void FUN_1412243be(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f6ab80;
  do {
    lVar1 = FUN_1401c2c9e(param_1 + 3);
  } while (lVar1 != 0);
  do {
    lVar1 = FUN_1401c2c9e(param_1 + 3);
  } while (lVar1 != 0);
  FUN_1447d080c((uint)param_1[3] & 0x3ffffff);
  FUN_141224426(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141224426 FUN_141224426 body=47 status=ok
// SIG undefined FUN_141224426(void)

void FUN_141224426(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 != 0) {
    lVar1 = 0;
    do {
      if (*(longlong *)(param_1 + lVar1 * 8) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + 1;
    } while (param_2 != (int)lVar1);
  }
  return;
}



// FUNCTION 141224456 FUN_141224456 body=123 status=ok
// SIG undefined FUN_141224456(void)

void FUN_141224456(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      puVar3 = *(undefined8 **)(lVar2 + lVar4);
      if (puVar3 != (undefined8 *)0x0) {
        (**(code **)*puVar3)(puVar3,1);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) < 0) {
    FUN_146ea15c4(param_1 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001412244bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x20));
  return;
}



// FUNCTION 1412244d2 FUN_1412244d2 body=421 status=ok
// SIG undefined FUN_1412244d2(void)

void FUN_1412244d2(undefined8 *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *param_1 = &PTR_LAB_149f52980;
  FUN_14017eb66(param_1 + 0xe,0);
  iVar2 = *(int *)(param_1 + 0x29);
  if ((longlong)iVar2 != 0) {
    lVar3 = param_1[0x28];
    lVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(lVar3 + lVar5);
      if (puVar4 != (undefined8 *)0x0) {
        (**(code **)*puVar4)(puVar4,1);
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar2 * 8 != lVar5);
  }
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  lVar3 = param_1[0x43];
  if (lVar3 != 0) {
    TlsFree(*(DWORD *)(lVar3 + 8));
    FUN_1400020a8(lVar3);
  }
  puVar4 = (undefined8 *)param_1[0x3c];
  if (puVar4 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar4 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  puVar4 = (undefined8 *)param_1[0x39];
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
  lVar3 = param_1[0x38];
  if (lVar3 != 0) {
    FUN_14605db3c(lVar3);
    FUN_1400020a8(lVar3);
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  FUN_146286366(param_1[0x27]);
  lVar3 = param_1[0x26];
  if (lVar3 != 0) {
    FUN_145949646(lVar3);
    FUN_1400020a8(lVar3);
  }
  FUN_1413d5a76(param_1 + 0xe);
  FUN_14062c814(param_1);
  return;
}



// FUNCTION 141224678 FUN_141224678 body=60 status=ok
// SIG undefined FUN_141224678(void)

void FUN_141224678(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1408bc6a2(param_1);
  return;
}



// FUNCTION 1412246b4 FUN_1412246b4 body=60 status=ok
// SIG undefined FUN_1412246b4(void)

void FUN_1412246b4(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_1412246f0(param_1);
  return;
}



// FUNCTION 1412246f0 FUN_1412246f0 body=55 status=ok
// SIG undefined FUN_1412246f0(void)

void FUN_1412246f0(longlong *param_1)

{
  FUN_14122479c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141224728 FUN_141224728 body=60 status=ok
// SIG undefined FUN_141224728(void)

void FUN_141224728(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_141224764(param_1);
  return;
}



// FUNCTION 141224764 FUN_141224764 body=55 status=ok
// SIG undefined FUN_141224764(void)

void FUN_141224764(longlong *param_1)

{
  FUN_141224818(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14122479c FUN_14122479c body=123 status=ok
// SIG undefined FUN_14122479c(void)

void FUN_14122479c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141224818 FUN_141224818 body=123 status=ok
// SIG undefined FUN_141224818(void)

void FUN_141224818(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (((int)uVar2 <= *(int *)(param_1 + 0x2c)) && (*(int *)(param_1 + 0x2c) < 0x81)) {
    return;
  }
  uVar1 = 0x80;
  if (0x80 < (int)uVar2) {
    uVar1 = uVar2;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_1446efbd8(param_1 + 0x10,0);
  return;
}



// FUNCTION 141224894 FUN_141224894 body=112 status=ok
// SIG undefined FUN_141224894(void)

void FUN_141224894(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_149f6b540;
  FUN_140081195(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149f48bf0;
  if (0 < *(int *)(param_1 + 2)) {
    lVar1 = 0;
    do {
      *(undefined8 *)(param_1[1] + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 2));
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 141224904 FUN_141224904 body=97 status=ok
// SIG undefined FUN_141224904(void)

undefined8 * FUN_141224904(undefined8 *param_1)

{
  void *_Dst;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  _Dst = (void *)FUN_14001cc68(0x400);
  memset(_Dst,0,0x400);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_141224966(param_1 + 1,0);
  *(void **)param_1[1] = _Dst;
  return param_1;
}



// FUNCTION 141224966 FUN_141224966 body=353 status=ok
// SIG undefined FUN_141224966(void)

void FUN_141224966(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1412249eb;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_1412249eb:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141224ac8 FUN_141224ac8 body=156 status=ok
// SIG undefined FUN_141224ac8(void)

undefined1 (*) [16] FUN_141224ac8(undefined1 (*param_1) [16])

{
  undefined4 *puVar1;
  void *_Dst;
  longlong lVar2;
  
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  _Dst = (void *)FUN_14001cc68(0x6800);
  memset(_Dst,0,0x6800);
  lVar2 = 0x14;
  do {
    *(undefined4 *)((longlong)_Dst + lVar2 + -0x14) = 0xffffffff;
    *(undefined1 *)((longlong)_Dst + lVar2 + -0x10) = 0;
    *(undefined8 *)((longlong)_Dst + lVar2 + -0xc) = 0;
    *(undefined4 *)((longlong)_Dst + lVar2 + -4) = 0;
    puVar1 = (undefined4 *)((longlong)_Dst + lVar2);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1 = (undefined4 *)((longlong)_Dst + lVar2 + 0x10);
    *puVar1 = 0xffffffff;
    puVar1[1] = 0xffffffff;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    lVar2 = lVar2 + 0x34;
  } while (lVar2 != 0x6814);
  *(undefined4 *)param_1[1] = 1;
  FUN_1458483b0(*param_1 + 8,0);
  **(undefined8 **)(*param_1 + 8) = _Dst;
  return param_1;
}



// FUNCTION 141224b64 FUN_141224b64 body=325 status=ok
// SIG undefined FUN_141224b64(void)

undefined8 * FUN_141224b64(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 2) = 1;
  FUN_1411b3bbe(param_1 + 1,0);
  *(void **)param_1[1] = pvVar1;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 5) = 1;
  FUN_1411b3bbe(param_1 + 4,0);
  *(void **)param_1[4] = pvVar1;
  param_1[8] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 8) = 1;
  FUN_1411b3bbe(param_1 + 7,0);
  *(void **)param_1[7] = pvVar1;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  pvVar1 = (void *)FUN_14001cc68(0x800);
  memset(pvVar1,0,0x800);
  *(undefined4 *)(param_1 + 0xc) = 1;
  FUN_1411b3bbe(param_1 + 0xb,0);
  *(void **)param_1[0xb] = pvVar1;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  return param_1;
}



// FUNCTION 141224caa FUN_141224caa body=143 status=ok
// SIG undefined FUN_141224caa(void)

undefined8 * FUN_141224caa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b5eab00;
  plVar1 = param_1 + 0xf;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x13) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x12)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x12)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141224d42 FUN_141224d42 body=372 status=ok
// SIG undefined FUN_141224d42(void)

undefined8 * FUN_141224d42(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x1c) = 0x101;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = &PTR_FUN_14a1a0a00;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0;
  param_1[0xb] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0xe) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0xffffffff;
  *param_1 = &PTR_FUN_14ac88ea0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  param_1[0x10] = &PTR_FUN_14a1a0a60;
  param_1[0x15] = DAT_14c8464f0;
  uVar1 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_1[0x13] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_1[0x14] = uVar1;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  param_1[0x1b] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_1[0x19] = DAT_14c8464f8;
  param_1[0x1a] = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x21] = DAT_14c8464f0;
  uVar4 = DAT_14c8464e8._4_4_;
  uVar3 = (undefined4)DAT_14c8464e8;
  uVar2 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x1f) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x104) = uVar4;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = 0;
  *(undefined1 *)(param_1 + 0x25) = 0;
  param_1[0x23] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x26) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x27] = &PTR_FUN_14a1a0a40;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  FUN_140ef4e54(param_1 + 0x2c);
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 141224eb6 FUN_141224eb6 body=435 status=ok
// SIG undefined FUN_141224eb6(void)

void FUN_141224eb6(longlong param_1,undefined1 param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong *plVar9;
  byte bVar10;
  
  if (*(longlong *)(param_1 + 0x598) != 0) {
    *(undefined1 *)(param_1 + 0x5be) = param_2;
    if (((((*(int *)(param_1 + 0x388) != 0) && (uVar1 = *(uint *)(param_1 + 900), -1 < (int)uVar1))
         && ((int)uVar1 < DAT_14c9647dc)) &&
        ((puVar7 = (undefined8 *)
                   ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
         puVar7 != (undefined8 *)0x0 && (*(int *)(puVar7 + 2) == *(int *)(param_1 + 0x388))))) &&
       ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(puVar7 + 1) & 0x10200000) == 0) {
        plVar9 = (longlong *)*puVar7;
      }
      else {
        plVar9 = (longlong *)0x0;
      }
      AcquireSRWLockShared((PSRWLOCK)(plVar9 + 10));
      if ((longlong)(int)plVar9[9] == 0) {
        bVar10 = 0;
      }
      else {
        lVar8 = 0;
        bVar10 = 0;
        do {
          if ((bVar10 & 1) == 0) {
            bVar10 = *(byte *)(*(longlong *)(plVar9[8] + lVar8) + 0x5be);
          }
          else {
            bVar10 = 1;
          }
          lVar8 = lVar8 + 8;
        } while ((longlong)(int)plVar9[9] * 8 != lVar8);
      }
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 10));
      if (*(byte *)(plVar9 + 0x2c) != bVar10) {
        cVar3 = FUN_144729dda(plVar9 + 0x19);
        if (((cVar3 != '\0') && (lVar8 = FUN_14479d2ce(plVar9 + 0x19), lVar8 != 0)) &&
           ((lVar8 = FUN_1458485da(lVar8), lVar8 != 0 &&
            (((*(longlong *)(lVar8 + 0x30) != 0 &&
              (lVar8 = *(longlong *)(*(longlong *)(lVar8 + 0x30) + 0x48), lVar8 != 0)) &&
             (plVar9[0x18] != 0)))))) {
          lVar4 = FUN_1449db7f2();
          lVar6 = plVar9[0x18];
          if (((lVar6 != 0) && (lVar4 != 0)) &&
             ((lVar2 = *(longlong *)(lVar6 + 0x10), lVar2 != 0 &&
              ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar2 + 0x38) &&
               (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
                lVar4 + 0x30)))))) {
            uVar5 = (**(code **)(*plVar9 + 0x180))(plVar9);
            lVar6 = FUN_140334a94(lVar6,uVar5);
            if (lVar6 != 0) {
              FUN_14584864e(lVar8,lVar6,bVar10);
              *(byte *)(plVar9 + 0x2c) = bVar10;
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 14122506a FUN_14122506a body=393 status=ok
// SIG undefined FUN_14122506a(void)

longlong FUN_14122506a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x430), lVar3 != 0)) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_28;
      local_28 = FUN_1417de738;
      local_30 = &LAB_145893408;
      local_38 = &LAB_1458cbbd2;
      local_48 = &LAB_147ba21f1;
      local_50 = &LAB_1463e9233;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x1000000c;
      local_70 = 8;
      local_78 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar3 = *(longlong *)(param_2 + 0x430);
      if (lVar3 == 0) goto LAB_1412251be;
    }
    lVar2 = 0;
    if ((DAT_14cae9568 == 0) || (lVar1 = *(longlong *)(lVar3 + 0x10), lVar1 == 0))
    goto LAB_1412251c0;
    if ((*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       ((*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
         == DAT_14cae9568 + 0x30 && ((longlong)*(int *)(param_1 + 0x20) != 0)))) {
      lVar4 = (longlong)*(int *)(param_1 + 0x20) * 0x70;
      lVar1 = *(longlong *)(param_1 + 0x18);
      do {
        lVar2 = lVar1;
        lVar1 = FUN_140059518(lVar2 + 8);
        if (lVar1 == lVar3) break;
        lVar1 = lVar2 + 0x70;
        lVar2 = 0;
        lVar4 = lVar4 + -0x70;
      } while (lVar4 != 0);
      goto LAB_1412251c0;
    }
  }
LAB_1412251be:
  lVar2 = 0;
LAB_1412251c0:
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 1412251f4 FUN_1412251f4 body=208 status=ok
// SIG undefined FUN_1412251f4(void)

undefined8 * FUN_1412251f4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1412252c6();
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_1446f470e(&local_30,puVar2,1);
  FUN_141225340(&DAT_14c948040,&local_28,local_30);
  if (local_28 == 0) {
    *param_1 = 0;
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
  }
  else {
    FUN_1400021e4(&local_28,param_1);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412252c6 FUN_1412252c6 body=122 status=ok
// SIG undefined FUN_1412252c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1412252c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c948090) {
    FUN_144b3d300(&DAT_14c948090);
    if (DAT_14c948090 == -1) {
      DAT_14c948040 = 0;
      DAT_14c948050 = 0;
      _DAT_14c948080 = 0;
      DAT_14c948088 = 0;
      atexit((_func_5014 *)&LAB_1427b4d93);
      _Init_thread_footer(&DAT_14c948090);
    }
  }
  return &DAT_14c948040;
}



// FUNCTION 141225340 FUN_141225340 body=323 status=ok
// SIG undefined FUN_141225340(void)

undefined8 FUN_141225340(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  longlong lVar4;
  void *_Src;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar7 = (longlong *)param_1[8];
  if (plVar7 == (longlong *)0x0) {
    pcVar3 = (code *)*param_1;
    if (pcVar3 != (code *)0x0) {
      plVar7 = param_1 + 4;
      if ((longlong *)param_1[2] != (longlong *)0x0) {
        plVar7 = (longlong *)param_1[2];
      }
      uVar5 = (**(code **)(*plVar7 + 8))();
      (*pcVar3)(uVar5,param_1);
      plVar7 = (longlong *)param_1[8];
      if (plVar7 != (longlong *)0x0) goto LAB_14122539d;
    }
    lVar6 = FUN_140d5712e();
    lVar4 = *(longlong *)(lVar6 + 0x28);
    plVar7 = *(longlong **)(lVar6 + 0x30);
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
      UNLOCK();
    }
    local_48 = (void *)0x0;
    local_40 = *(int *)(lVar4 + 0x30);
    lVar6 = (longlong)local_40;
    _Src = *(void **)(lVar4 + 0x28);
    if (lVar6 == 0) {
      local_3c = 0;
    }
    else {
      FUN_1446dd670(&local_48,local_40,0);
      memcpy(local_48,_Src,lVar6 * 2);
    }
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    FUN_14686f5ea();
    if (local_48 != (void *)0x0) {
      FUN_1400020a8();
    }
    if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
LAB_14122539d:
  (**(code **)(*plVar7 + 0x18))(plVar7,param_2,param_3);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_68);
}



// FUNCTION 141225484 FUN_141225484 body=944 status=ok
// SIG undefined FUN_141225484(void)

bool FUN_141225484(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_b8 [36];
  int local_94;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte *local_70;
  byte local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_94 = *(int *)(*param_2 + 0x60);
  if (local_94 != 0) {
    local_70 = &local_61;
    local_61 = 0;
    local_78 = param_1;
    if (0 < (int)param_2[0xe]) {
      lVar6 = 0;
      lVar9 = 0;
      do {
        FUN_143d9de1c(&local_78,param_2[0xd] + lVar6);
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 0x40;
      } while (lVar9 < (int)param_2[0xe]);
    }
    lVar6 = DAT_14cb0d2b0;
    if (((local_61 & 1) == 0) && (DAT_14cb0d2b0 != 0)) {
      uVar5 = FUN_1409231c6(param_2);
      lVar6 = FUN_141225936(lVar6,uVar5);
      if (lVar6 != 0) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x110) < DAT_14cb81cb8) &&
           (FUN_144b3d300(&DAT_14cb81cb8), DAT_14cb81cb8 == -1)) {
          FUN_1446ddc76(&DAT_14cb81cb0,"PlayerContext",1);
          _Init_thread_footer(&DAT_14cb81cb8);
        }
        if (local_94 == 1) {
          lVar6 = *(longlong *)(lVar6 + 0x178);
          if ((lVar6 != 0) && (iVar2 = *(int *)(lVar6 + 0x3b0), (longlong)iVar2 != 0)) {
            local_90 = *(longlong *)(lVar6 + 0x3a8);
            lVar6 = 0;
            do {
              if (*(longlong *)(local_90 + lVar6) != 0) {
                uVar3 = *(uint *)(*(longlong *)(local_90 + lVar6) + 0xc);
                if ((int)uVar3 < DAT_14c9647dc) {
                  lVar9 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
                }
                else {
                  lVar9 = 0;
                }
                iVar8 = *(int *)(lVar9 + 0x10);
                if (*(int *)(lVar9 + 0x10) == 0) {
                  LOCK();
                  iVar4 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar8 = DAT_14c964868 + 1;
                  bVar12 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar4;
                  if (bVar12) {
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar8);
                  }
                  LOCK();
                  iVar4 = *(int *)(lVar9 + 0x10);
                  bVar12 = iVar4 == 0;
                  if (bVar12) {
                    *(int *)(lVar9 + 0x10) = iVar8;
                    iVar4 = 0;
                  }
                  UNLOCK();
                  if (!bVar12) {
                    iVar8 = iVar4;
                  }
                }
                uVar5 = DAT_14cb81cb0;
                if ((*(longlong *)(*param_2 + 0x3c) != 0) &&
                   ((char)param_2[1] <= *(char *)(*param_2 + 0x38))) {
                  iVar4 = (int)param_2[0xe];
                  *(uint *)(param_2 + 0xe) = iVar4 + 1U;
                  if (*(uint *)((longlong)param_2 + 0x74) < iVar4 + 1U) {
                    FUN_141225836(param_2 + 0xd,iVar4);
                  }
                  lVar9 = param_2[0xd];
                  lVar10 = (longlong)iVar4 * 0x40;
                  *(undefined8 *)(lVar9 + lVar10) = uVar5;
                  *(ulonglong *)(lVar9 + 8 + lVar10) = CONCAT44(iVar8,uVar3);
                  puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(lVar9 + 0x20 + lVar10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  puVar1 = (undefined8 *)(lVar9 + 0x30 + lVar10);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  FUN_1404eec70(0,0);
                }
              }
              lVar6 = lVar6 + 8;
            } while ((longlong)iVar2 * 8 != lVar6);
          }
        }
        else if (local_94 == 4) {
          if (*(longlong *)(lVar6 + 0x178) != 0) {
            lVar9 = FUN_14041aabe();
            lVar6 = *(longlong *)(lVar6 + 0x178);
            if (((((lVar6 != 0) && (lVar9 != 0)) &&
                 (lVar10 = *(longlong *)(lVar6 + 0x10), lVar10 != 0)) &&
                ((*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38) &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8)
                  == lVar9 + 0x30)))) && (*(longlong *)(lVar6 + 0x488) != 0)) {
              local_80 = 0;
              FUN_14485c47a(&local_80);
              FUN_1404eedce(param_2,&DAT_14cb81cb0,local_80);
            }
          }
        }
        else {
          plVar7 = (longlong *)FUN_140161992(DAT_14cb0d2b0,lVar6);
          if ((longlong)(int)plVar7[1] != 0) {
            plVar11 = (longlong *)*plVar7;
            plVar7 = plVar11 + (int)plVar7[1];
            do {
              if (*plVar11 != 0) {
                local_88 = 0;
                FUN_14485c47a(&local_88);
                FUN_1404eedce(param_2,&DAT_14cb81cb0,local_88);
                if (local_94 == 3) break;
              }
              plVar11 = plVar11 + 1;
            } while (plVar11 != plVar7);
          }
        }
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return local_94 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225836 FUN_141225836 body=255 status=ok
// SIG undefined FUN_141225836(void)

void FUN_141225836(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar3 & (uVar4 + uVar3) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141225936 FUN_141225936 body=98 status=ok
// SIG undefined FUN_141225936(void)

longlong FUN_141225936(longlong param_1,longlong param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong)*(int *)(param_1 + 0x1150) == 0) {
    return 0;
  }
  lVar3 = 0;
  lVar2 = 0;
  do {
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x1148) + lVar3);
    if ((param_2 != 0) && (*(longlong *)(pcVar1 + 0x360) == param_2)) {
      if (*pcVar1 != '\x01') {
        return 0;
      }
      return *(longlong *)(pcVar1 + 0x360);
    }
    if (lVar2 == 0) {
      if (*pcVar1 == '\x01') {
        lVar2 = *(longlong *)(pcVar1 + 0x360);
      }
      else {
        lVar2 = 0;
      }
    }
    lVar3 = lVar3 + 8;
  } while ((longlong)*(int *)(param_1 + 0x1150) * 8 != lVar3);
  return lVar2;
}



// FUNCTION 141225998 FUN_141225998 body=221 status=ok
// SIG undefined FUN_141225998(void)

longlong FUN_141225998(void)

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
  if (DAT_14cb1a6c0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147e1ae7f;
    local_40 = FUN_1464186b8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/GbxSpawn",L"SpawnEncounterEvent",&DAT_14cb1a6c0,&DAT_147e1ae7e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb1a6c0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225a76 FUN_141225a76 body=221 status=ok
// SIG undefined FUN_141225a76(void)

longlong FUN_141225a76(void)

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
  if (DAT_14cb4b818 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148445e69;
    local_40 = &LAB_14648ee93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x98;
    FUN_14081cfa3(L"/Script/InteractiveToolsFramework",L"InteractiveTool",&DAT_14cb4b818,
                  &DAT_148445e68);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4b818;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225b54 FUN_141225b54 body=221 status=ok
// SIG undefined FUN_141225b54(void)

longlong FUN_141225b54(void)

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
  if (DAT_14cb4c280 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1484b8431;
    local_40 = FUN_1464921dd;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000008;
    local_60 = 8;
    local_68 = 0x48;
    FUN_14081cfa3(L"/Script/GeometryFramework",L"DynamicMeshPool",&DAT_14cb4c280,FUN_1464921b6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb4c280;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225c32 FUN_141225c32 body=221 status=ok
// SIG undefined FUN_141225c32(void)

longlong FUN_141225c32(void)

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
  if (DAT_14cb56ed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_14863c631;
    local_40 = FUN_1464ba7d8;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"DialogFunctionImplementation",&DAT_14cb56ed0,&DAT_14863c630);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb56ed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225d10 FUN_141225d10 body=221 status=ok
// SIG undefined FUN_141225d10(void)

longlong FUN_141225d10(void)

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
  if (DAT_14cb9dba0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_148b61fb9;
    local_40 = &LAB_145dae28f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x138;
    FUN_14081cfa3(L"/Script/GbxUIUMG",L"GbxUIUMGIndicatorDescriptor",&DAT_14cb9dba0,FUN_14659f2d2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9dba0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225dee FUN_141225dee body=221 status=ok
// SIG undefined FUN_141225dee(void)

longlong FUN_141225dee(void)

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
  if (DAT_14cbf7bf0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1490730dd;
    local_40 = &LAB_145dbe2f7;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 0x10;
    local_68 = 0xc0;
    FUN_14081cfa3(L"/Script/HairStrandsCore",L"GroomBindingAsset",&DAT_14cbf7bf0,FUN_146679bd6);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbf7bf0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225ed2 FUN_141225ed2 body=221 status=ok
// SIG undefined FUN_141225ed2(void)

longlong FUN_141225ed2(void)

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
  if (DAT_14cc309e8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1498a07bf;
    local_40 = FUN_14676da94;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/DatasmithContent",L"DatasmithObjectTemplate",&DAT_14cc309e8,
                  &DAT_1498a07be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cc309e8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141225fb0 FUN_141225fb0 body=47 status=ok
// SIG undefined FUN_141225fb0(void)

void FUN_141225fb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b366bf0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x14) = DAT_14cb86b60;
  return;
}



// FUNCTION 141225fe0 FUN_141225fe0 body=234 status=ok
// SIG undefined FUN_141225fe0(void)

longlong FUN_141225fe0(void)

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
  if (DAT_14cabf530 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_145a51fce;
    local_38 = &LAB_14785cf47;
    local_40 = &LAB_14636fc14;
    local_48 = L"Engine";
    local_50 = 0x80000000000;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0xb0;
    FUN_14081cfa3(L"/Script/Engine",L"Blueprint",&DAT_14cabf530,&DAT_14785cf46);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cabf530;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412260cc FUN_1412260cc body=202 status=ok
// SIG undefined FUN_1412260cc(void)

void FUN_1412260cc(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if (param_1[0x7f] != 0) {
    FUN_145848c04();
    FUN_140c7cbb8(param_1 + 0x13c,param_1);
    FUN_14036b79c(param_1 + 0xab,param_1);
    cVar2 = FUN_141226196(param_1);
    if (cVar2 != '\0') {
      FUN_1405e47c6(param_1,0);
      FUN_145849606(param_1);
      FUN_145848fdc(param_1);
      FUN_1458492c0(param_1);
      (**(code **)(*param_1 + 0x690))(param_1);
      (**(code **)(*param_1 + 0x698))(param_1);
      FUN_1405bab3a(param_1,0);
      FUN_1405d0f74(param_1);
      FUN_145848bfc(param_1 + 0x84);
      if (((int)param_1[0x87] != 0) &&
         (plVar1 = (longlong *)param_1[0x86], plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000141226193. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x60))(plVar1,param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 141226196 FUN_141226196 body=105 status=ok
// SIG undefined FUN_141226196(void)

undefined8 FUN_141226196(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x18))(param_1 + 0x3a8);
  if ((lVar1 != 0) &&
     (lVar1 = (**(code **)(*(longlong *)(lVar1 + 0x50) + 0x10))(lVar1 + 0x50), lVar1 != 0)) {
    *(undefined8 *)(param_1 + 0x860) = *(undefined8 *)(param_1 + 0x3f8);
    FUN_14015c456(param_1 + 0x640,lVar1);
    FUN_14078a0a0(param_1 + 0x3a8,0);
    return 1;
  }
  return 0;
}



// FUNCTION 141226200 FUN_141226200 body=342 status=ok
// SIG undefined FUN_141226200(void)

void FUN_141226200(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  longlong local_30;
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(undefined4 *)(param_2 + 200) = 0;
  if (*(int *)(param_2 + 0xcc) < 0) {
    FUN_1488b45e6(param_2,0);
  }
  if (DAT_14cad3688 == 0) {
    local_50 = &local_28;
    local_28 = FUN_144b223ce;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_1417963e0;
    local_58 = &LAB_147a2f4c9;
    local_60 = &LAB_1400ea6f8;
    local_68 = L"Engine";
    local_70 = 0x200000000000;
    local_78 = 0x10000004;
    local_80 = 0x10;
    local_88 = 0x720;
    FUN_14081cfa3(L"/Script/Engine",L"StaticMeshComponent",&DAT_14cad3688,FUN_1463bfdc8);
  }
  local_30 = DAT_14cad3688;
  if ((DAT_14cad3688 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_141226358(param_1,&local_30,param_3,param_2);
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141226358 FUN_141226358 body=719 status=ok
// SIG undefined FUN_141226358(void)

void FUN_141226358(undefined8 param_1,longlong *param_2,char param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  wchar_t *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  code **local_70;
  code *local_68;
  code *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar2 = *param_2;
  if (lVar2 == 0) {
    if (DAT_14cad00c8 == 0) {
LAB_1412264e1:
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      lVar2 = 0;
    }
    else {
      lVar2 = 0;
    }
LAB_1412263c3:
    lVar1 = *param_2;
    if (lVar2 == DAT_14cad00c8) {
      if (param_3 == '\0') {
        local_48 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b48d8(param_1,&local_48,param_4);
      }
      else {
        local_40 = lVar1;
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_1456cec3c();
        }
        FUN_1488b4654(param_1,&local_40,param_4);
      }
      goto LAB_141226401;
    }
  }
  else {
    if (DAT_14cad00c8 == 0) {
      local_70 = &local_38;
      local_38 = FUN_144a7958c;
      local_60 = FUN_14081d0ea;
      local_68 = FUN_14081d0ea;
      local_78 = &LAB_1479b7a0c;
      local_80 = &LAB_1463b464e;
      local_88 = L"Engine";
      local_90 = 0;
      local_98 = 0x10000005;
      local_a0 = 8;
      local_a8 = 0x110;
      FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
      if (DAT_14cad00c8 == 0) goto LAB_1412264e1;
    }
    if ((*(int *)(DAT_14cad00c8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) ==
        DAT_14cad00c8 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_1412263c3;
    }
    lVar1 = *param_2;
  }
  if (param_3 == '\0') {
    local_58 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_141226628(param_1,&local_58,param_4);
  }
  else {
    local_50 = lVar1;
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    FUN_1488b4a2a(param_1,&local_50,param_4);
  }
LAB_141226401:
  if ((local_30 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141226628 FUN_141226628 body=925 status=ok
// SIG undefined FUN_141226628(void)

void FUN_141226628(longlong param_1,longlong *param_2,longlong param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  uint *local_68;
  longlong local_60;
  longlong *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar12 = (uint *)(param_1 + 0x250);
  iVar2 = *(int *)(param_1 + 0x268);
  local_58 = param_2;
  if (iVar2 == 0) {
    uVar10 = 1;
    uVar13 = 0;
    iVar4 = 0;
    iVar9 = 0;
  }
  else {
    puVar5 = *(uint **)(param_1 + 0x260);
    if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
      puVar5 = puVar12;
    }
    uVar15 = *puVar5;
    if (uVar15 == 0) {
      iVar4 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar4 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar10 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar10 = uVar13;
      }
      iVar9 = 0;
      do {
        if (uVar10 == uVar13) goto LAB_141226856;
        iVar9 = iVar9 + 0x20;
        uVar15 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar13 = 0;
      iVar9 = 0;
    }
    uVar10 = (ulonglong)(-uVar15 & uVar15);
    uVar1 = uVar10 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar4) {
      iVar4 = iVar2;
    }
  }
  if (iVar4 != iVar2) {
    uVar15 = 0xffffffff;
    do {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0x240) + (longlong)iVar4 * 0x10);
      if (lVar11 != 0) {
        lVar14 = *local_58;
        if ((lVar14 != 0 & DAT_14c950c29) == 1) {
          local_68 = puVar12;
          local_60 = param_3;
          FUN_1456cec3c(lVar14);
          puVar12 = local_68;
          param_3 = local_60;
LAB_141226733:
          if (DAT_14cad00c8 == 0) {
            local_80 = &local_50;
            local_50 = FUN_144a7958c;
            local_70 = FUN_14081d0ea;
            local_78 = FUN_14081d0ea;
            local_88 = &LAB_1479b7a0c;
            local_90 = &LAB_1463b464e;
            local_98 = L"Engine";
            local_a0 = 0;
            local_a8 = 0x10000005;
            local_b0 = 8;
            local_b8 = 0x110;
            local_68 = puVar12;
            local_60 = param_3;
            FUN_14081cfa3(L"/Script/Engine",L"ActorComponent",&DAT_14cad00c8,FUN_1463b462c);
            puVar12 = local_68;
            param_3 = local_60;
            if (DAT_14cad00c8 == 0) goto LAB_141226940;
          }
          if (*(int *)(lVar14 + 0x38) < *(int *)(DAT_14cad00c8 + 0x38)) goto LAB_141226940;
          if (*(longlong *)
               (*(longlong *)(lVar14 + 0x30) + (longlong)*(int *)(DAT_14cad00c8 + 0x38) * 8) !=
              DAT_14cad00c8 + 0x30) {
            lVar14 = 0;
          }
        }
        else {
          if (lVar14 != 0) goto LAB_141226733;
LAB_141226940:
          lVar14 = 0;
        }
        if ((*(int *)(lVar14 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar14 + 0x38) * 8) == lVar14 + 0x30)) {
          iVar4 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar4 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar4 + 1U) {
            local_68 = puVar12;
            local_60 = param_3;
            FUN_14819711e(param_3,iVar4);
            puVar12 = local_68;
            param_3 = local_60;
          }
          lVar14 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar14 = param_3;
          }
          *(longlong *)(lVar14 + (longlong)iVar4 * 8) = lVar11;
        }
      }
      uVar15 = uVar15 & ~(uint)uVar10;
      puVar5 = *(uint **)(param_1 + 0x260);
      if (*(uint **)(param_1 + 0x260) == (uint *)0x0) {
        puVar5 = puVar12;
      }
      iVar3 = *(int *)(param_1 + 0x268);
      iVar4 = (int)uVar13;
      lVar11 = (longlong)iVar4;
      uVar8 = puVar5[lVar11] & uVar15;
      if (uVar8 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar4) {
          iVar7 = iVar4;
        }
        if (iVar4 < iVar6) {
          lVar14 = 0;
          do {
            uVar8 = puVar5[lVar11 + lVar14 + 1];
            if (uVar8 != 0) {
              uVar13 = (ulonglong)(iVar4 + (int)lVar14 + 1);
              uVar15 = 0xffffffff;
              goto LAB_14122682a;
            }
            iVar9 = iVar9 + 0x20;
            lVar14 = lVar14 + 1;
          } while (iVar7 - lVar11 != lVar14);
          uVar15 = 0xffffffff;
          iVar4 = iVar7;
        }
        uVar13 = (ulonglong)(iVar4 + 1);
        iVar4 = iVar3;
      }
      else {
LAB_14122682a:
        uVar10 = (ulonglong)(-uVar8 & uVar8);
        uVar1 = uVar10 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar4 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar4) {
          iVar4 = iVar3;
        }
      }
    } while (iVar4 != iVar2);
  }
LAB_141226856:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412269c6 FUN_1412269c6 body=85 status=ok
// SIG undefined FUN_1412269c6(void)

void FUN_1412269c6(longlong param_1,undefined4 *param_2)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (*(longlong *)(param_1 + 0x1c8) != 0) {
    local_18 = *(undefined8 *)(param_2 + 4);
    local_28 = *param_2;
    uStack_24 = param_2[1];
    uStack_20 = param_2[2];
    uStack_1c = param_2[3];
    FUN_141226a1c(*(longlong *)(param_1 + 0x1c8),&local_28);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141226a1c FUN_141226a1c body=297 status=ok
// SIG undefined FUN_141226a1c(void)

void FUN_141226a1c(longlong *param_1,double *param_2)

{
  longlong *plVar1;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  undefined1 local_98 [64];
  double local_58;
  double dStack_50;
  double local_48;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = *param_2;
  local_a8 = param_2[1];
  local_a0 = param_2[2];
  plVar1 = (longlong *)param_1[0x24];
  if ((plVar1 != (longlong *)0x0) && ((*(byte *)(param_1 + 0x3f) & 0x10) == 0)) {
    (**(code **)(*plVar1 + 0x4a8))(plVar1,local_98,param_1[0x25],0);
    local_a0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_48)) &
                       (ulonglong)(1.0 / local_48)) * param_2[2];
    local_a8 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(dStack_50)) &
                       (ulonglong)(1.0 / dStack_50)) * param_2[1];
    local_b0 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(local_58)) &
                       (ulonglong)(1.0 / local_58)) * *param_2;
  }
  (**(code **)(*param_1 + 0x478))(param_1);
  if ((local_30 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141226b46 FUN_141226b46 body=3708 status=ok
// SIG undefined FUN_141226b46(void)

void FUN_141226b46(longlong *param_1,uint *param_2,ulonglong param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  int iVar17;
  ulonglong uVar18;
  uint uVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong *plVar22;
  int iVar23;
  longlong lVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_1c8 [40];
  uint *local_1a0;
  ulonglong local_198;
  undefined8 *local_190;
  longlong *local_188;
  uint *local_180;
  uint *local_178;
  longlong local_170;
  longlong local_168;
  int local_160;
  uint *local_158;
  undefined8 uStack_150;
  undefined8 *local_148;
  ulonglong uStack_140;
  uint *local_138;
  undefined8 uStack_130;
  longlong local_128;
  ulonglong uStack_120;
  uint *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_78;
  undefined4 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_118 = (uint *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  uStack_120 = 0;
  local_1a0 = param_2;
  local_198 = param_3;
  local_188 = param_1;
  if ((longlong)(int)param_2[6] != 0) {
    plVar20 = *(longlong **)(param_2 + 4);
    plVar22 = plVar20 + (int)param_2[6];
    do {
      plVar4 = (longlong *)*plVar20;
      if (plVar4 != (longlong *)0x0) {
        local_98 = 0;
        local_90 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_8c = 0xffffffff00000080;
        local_84 = 0;
        local_78 = 0;
        local_70 = 0;
        FUN_140535930(&local_b8,local_198);
        (**(code **)(*plVar4 + 0x2a0))(plVar4,&local_138,&local_b8,&local_128);
        puVar10 = local_138;
        lVar14 = (longlong)(int)uStack_130;
        if (lVar14 != 0) {
          lVar24 = 0;
          do {
            local_148 = *(undefined8 **)((longlong)puVar10 + lVar24);
            if ((local_148 != (undefined8 *)0x0) && (DAT_14c950c29 != '\0')) {
              FUN_1456cec3c();
            }
            FUN_140e42a48(&local_118,&local_148);
            lVar24 = lVar24 + 8;
          } while (lVar14 * 8 != lVar24);
        }
        if (local_138 != (uint *)0x0) {
          FUN_1400020a8(local_138);
        }
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar22);
  }
  puVar10 = local_1a0;
  local_138 = (uint *)0x0;
  uStack_130 = 0;
  local_148 = (undefined8 *)0x0;
  uStack_140 = 0;
  local_158 = (uint *)0x0;
  uStack_150 = 0;
  uVar19 = local_1a0[0x4a];
  if ((longlong)(int)uVar19 != 0) {
    lVar14 = *(longlong *)(local_1a0 + 0x48);
    lVar24 = 0;
    do {
      plVar22 = *(longlong **)(lVar14 + 8 + lVar24);
      if (((((plVar22 != (longlong *)0x0) && (iVar23 = *(int *)(lVar14 + 4 + lVar24), iVar23 != 0))
           && (uVar9 = *(uint *)(lVar14 + lVar24), -1 < (int)uVar9)) &&
          (((int)uVar9 < DAT_14c9647dc &&
           (lVar21 = (ulonglong)((uVar9 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar9 >> 0x10) * 8), lVar21 != 0))))
         && ((*(int *)(lVar21 + 0x10) == iVar23 && ((*(uint *)(lVar21 + 8) & 0x10200000) == 0)))) {
        (**(code **)(*plVar22 + 0x10))(plVar22,&local_138);
      }
      lVar24 = lVar24 + 0x10;
    } while ((longlong)(int)uVar19 * 0x10 != lVar24);
    if ((longlong)(int)puVar10[0x4a] != 0) {
      puVar11 = *(uint **)(local_1a0 + 0x48);
      local_180 = puVar11 + (longlong)(int)puVar10[0x4a] * 4;
      do {
        if ((((*(longlong *)(puVar11 + 2) != 0) && (puVar11[1] != 0)) &&
            ((uVar19 = *puVar11, -1 < (int)uVar19 &&
             ((((int)uVar19 < DAT_14c9647dc &&
               (lVar14 = (ulonglong)((uVar19 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar19 >> 0x10) * 8), lVar14 != 0
               )) && (*(uint *)(lVar14 + 0x10) == puVar11[1])))))) &&
           ((*(uint *)(lVar14 + 8) & 0x10200000) == 0)) {
          bVar26 = (longlong)uStack_140 < 0;
          uStack_140 = uStack_140 & 0xffffffff00000000;
          if (bVar26) {
            FUN_1470d9a66(&local_148);
          }
          (**(code **)(**(longlong **)(puVar11 + 2) + 0x18))(*(longlong **)(puVar11 + 2),&local_148)
          ;
          if ((longlong)(int)uStack_140 != 0) {
            local_190 = local_148 + (int)uStack_140;
            puVar16 = local_148;
            do {
              plVar22 = (longlong *)*puVar16;
              local_e8 = 0;
              local_e0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              local_dc = 0xffffffff00000080;
              local_d4 = 0;
              local_c8 = 0;
              local_c0 = 0;
              FUN_140535930(&local_108,local_198);
              (**(code **)(*plVar22 + 0x2a0))(plVar22,&local_168,&local_108,&local_128);
              lVar14 = local_168;
              lVar24 = (longlong)local_160;
              if (lVar24 != 0) {
                lVar21 = 0;
                do {
                  local_170 = *(longlong *)(lVar14 + lVar21);
                  if ((local_170 != 0) && (DAT_14c950c29 != '\0')) {
                    FUN_1456cec3c();
                  }
                  FUN_140e42a48(&local_158,&local_170);
                  lVar21 = lVar21 + 8;
                } while (lVar24 * 8 != lVar21);
              }
              if (local_168 != 0) {
                FUN_1400020a8(local_168);
              }
              puVar16 = puVar16 + 1;
            } while (puVar16 != local_190);
          }
        }
        puVar11 = puVar11 + 4;
      } while (puVar11 != local_180);
    }
  }
  plVar22 = local_188;
  if ((longlong)(int)local_1a0[2] != 0) {
    puVar10 = *(uint **)local_1a0;
    local_178 = puVar10 + (longlong)(int)local_1a0[2] * 4;
    do {
      local_1a0 = puVar10;
      if (((char)*puVar10 == '\x01') && (uVar15 = *(ulonglong *)(puVar10 + 2), uVar15 != 0)) {
        puVar10 = (uint *)(uVar15 + 0x40);
        uVar19 = *(uint *)(uVar15 + 0x58);
        puVar16 = (undefined8 *)(ulonglong)uVar19;
        if (uVar19 == 0) {
          uVar18 = 1;
          iVar23 = 0;
          uVar25 = 0;
          uVar9 = 0;
        }
        else {
          puVar11 = *(uint **)(uVar15 + 0x50);
          if (*(uint **)(uVar15 + 0x50) == (uint *)0x0) {
            puVar11 = puVar10;
          }
          uVar9 = *puVar11;
          if (uVar9 == 0) {
            iVar23 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar23 = uVar19 - 1;
            }
            uVar25 = 0;
            uVar18 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar18 = uVar25;
            }
            iVar23 = 0;
            do {
              if (uVar18 == uVar25) goto LAB_141227025;
              iVar23 = iVar23 + 0x20;
              uVar9 = puVar11[uVar25 + 1];
              uVar25 = uVar25 + 1;
            } while (uVar9 == 0);
          }
          else {
            iVar23 = 0;
            uVar25 = 0;
          }
          uVar18 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar18 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar9) {
            uVar9 = uVar19;
          }
        }
        if (uVar9 != uVar19) {
          uVar19 = 0xffffffff;
          local_198 = uVar15;
          local_190 = puVar16;
          local_180 = puVar10;
          do {
            lVar14 = *(longlong *)(uVar15 + 0x30);
            if (*(longlong *)(lVar14 + 0x10 + (longlong)(int)uVar9 * 0x48) != 0) {
              iVar17 = (int)plVar22[1];
              *(uint *)(plVar22 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)plVar22 + 0xc) < iVar17 + 1U) {
                FUN_1406f071e(plVar22,iVar17);
                plVar22 = local_188;
              }
              lVar14 = lVar14 + (longlong)(int)uVar9 * 0x48;
              lVar24 = *plVar22;
              lVar21 = (longlong)iVar17 * 0x20;
              uVar6 = *(undefined4 *)(lVar14 + 0x14);
              uVar7 = *(undefined4 *)(lVar14 + 0x18);
              uVar8 = *(undefined4 *)(lVar14 + 0x1c);
              puVar1 = (undefined4 *)(lVar24 + lVar21);
              *puVar1 = *(undefined4 *)(lVar14 + 0x10);
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              *(undefined8 *)(lVar24 + 0x10 + lVar21) = 0;
              iVar17 = *(int *)(lVar14 + 0x28);
              pvVar5 = *(void **)(lVar14 + 0x20);
              *(int *)(lVar24 + 0x18 + lVar21) = iVar17;
              if ((longlong)iVar17 == 0) {
                *(undefined4 *)(lVar24 + lVar21 + 0x1c) = 0;
                puVar16 = local_190;
                puVar10 = local_180;
                uVar15 = local_198;
              }
              else {
                puVar16 = (undefined8 *)(lVar21 + lVar24 + 0x10);
                FUN_1446dd670(puVar16,iVar17,0);
                memcpy((void *)*puVar16,pvVar5,(longlong)iVar17 * 2);
                puVar16 = local_190;
                puVar10 = local_180;
                plVar22 = local_188;
                uVar15 = local_198;
              }
            }
            uVar19 = uVar19 & ~(uint)uVar18;
            puVar11 = *(uint **)(uVar15 + 0x50);
            if (*(uint **)(uVar15 + 0x50) == (uint *)0x0) {
              puVar11 = puVar10;
            }
            uVar3 = *(uint *)(uVar15 + 0x58);
            iVar17 = (int)uVar25;
            lVar14 = (longlong)iVar17;
            uVar9 = puVar11[lVar14] & uVar19;
            if (uVar9 == 0) {
              iVar13 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar13 = uVar3 - 1;
              }
              iVar13 = iVar13 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar12 = iVar13;
              if (iVar13 < iVar17) {
                iVar12 = iVar17;
              }
              if (iVar17 < iVar13) {
                lVar24 = 0;
                do {
                  uVar9 = puVar11[lVar14 + lVar24 + 1];
                  if (uVar9 != 0) {
                    uVar25 = (ulonglong)(iVar17 + (int)lVar24 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_141227183;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar12 - lVar14 != lVar24);
                uVar19 = 0xffffffff;
                iVar17 = iVar12;
              }
              uVar25 = (ulonglong)(iVar17 + 1);
              plVar22 = local_188;
              uVar9 = uVar3;
            }
            else {
LAB_141227183:
              uVar18 = (ulonglong)(-uVar9 & uVar9);
              uVar2 = uVar18 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar9) {
                uVar9 = uVar3;
              }
            }
          } while (uVar9 != (uint)puVar16);
        }
      }
LAB_141227025:
      puVar10 = local_1a0 + 4;
    } while (puVar10 != local_178);
  }
  if ((longlong)(int)uStack_110 != 0) {
    local_1a0 = local_118 + (longlong)(int)uStack_110 * 2;
    puVar10 = local_118;
    do {
      puVar16 = *(undefined8 **)puVar10;
      local_180 = puVar10;
      if (puVar16 != (undefined8 *)0x0) {
        puVar10 = (uint *)(puVar16 + 8);
        uVar19 = *(uint *)(puVar16 + 0xb);
        uVar15 = (ulonglong)uVar19;
        if (uVar19 == 0) {
          uVar25 = 1;
          uVar18 = 0;
          iVar23 = 0;
          uVar9 = 0;
        }
        else {
          puVar11 = (uint *)puVar16[10];
          if ((uint *)puVar16[10] == (uint *)0x0) {
            puVar11 = puVar10;
          }
          uVar9 = *puVar11;
          if (uVar9 == 0) {
            iVar23 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar23 = uVar19 - 1;
            }
            uVar18 = 0;
            uVar25 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar25 = uVar18;
            }
            iVar23 = 0;
            do {
              if (uVar25 == uVar18) goto LAB_14122729c;
              iVar23 = iVar23 + 0x20;
              uVar9 = puVar11[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar18 = 0;
            iVar23 = 0;
          }
          uVar25 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar25 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar9) {
            uVar9 = uVar19;
          }
        }
        if (uVar9 != uVar19) {
          uVar19 = 0xffffffff;
          local_198 = uVar15;
          local_190 = puVar16;
          do {
            lVar14 = puVar16[6];
            if (*(longlong *)(lVar14 + 0x10 + (longlong)(int)uVar9 * 0x48) != 0) {
              iVar17 = (int)plVar22[1];
              *(uint *)(plVar22 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)plVar22 + 0xc) < iVar17 + 1U) {
                FUN_1406f071e(plVar22,iVar17);
                plVar22 = local_188;
              }
              lVar14 = lVar14 + (longlong)(int)uVar9 * 0x48;
              lVar24 = *plVar22;
              lVar21 = (longlong)iVar17 * 0x20;
              uVar6 = *(undefined4 *)(lVar14 + 0x14);
              uVar7 = *(undefined4 *)(lVar14 + 0x18);
              uVar8 = *(undefined4 *)(lVar14 + 0x1c);
              puVar1 = (undefined4 *)(lVar24 + lVar21);
              *puVar1 = *(undefined4 *)(lVar14 + 0x10);
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              *(undefined8 *)(lVar24 + 0x10 + lVar21) = 0;
              iVar17 = *(int *)(lVar14 + 0x28);
              pvVar5 = *(void **)(lVar14 + 0x20);
              *(int *)(lVar24 + 0x18 + lVar21) = iVar17;
              if ((longlong)iVar17 == 0) {
                *(undefined4 *)(lVar24 + lVar21 + 0x1c) = 0;
                uVar15 = local_198;
                puVar16 = local_190;
              }
              else {
                puVar16 = (undefined8 *)(lVar21 + lVar24 + 0x10);
                FUN_1446dd670(puVar16,iVar17,0);
                memcpy((void *)*puVar16,pvVar5,(longlong)iVar17 * 2);
                uVar15 = local_198;
                plVar22 = local_188;
                puVar16 = local_190;
              }
            }
            uVar19 = uVar19 & ~(uint)uVar25;
            puVar11 = (uint *)puVar16[10];
            if ((uint *)puVar16[10] == (uint *)0x0) {
              puVar11 = puVar10;
            }
            uVar3 = *(uint *)(puVar16 + 0xb);
            iVar17 = (int)uVar18;
            lVar14 = (longlong)iVar17;
            uVar9 = puVar11[lVar14] & uVar19;
            if (uVar9 == 0) {
              iVar13 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar13 = uVar3 - 1;
              }
              iVar13 = iVar13 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar12 = iVar13;
              if (iVar13 < iVar17) {
                iVar12 = iVar17;
              }
              if (iVar17 < iVar13) {
                lVar24 = 0;
                do {
                  uVar9 = puVar11[lVar14 + lVar24 + 1];
                  if (uVar9 != 0) {
                    uVar18 = (ulonglong)(iVar17 + (int)lVar24 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_1412273f3;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar12 - lVar14 != lVar24);
                uVar19 = 0xffffffff;
                iVar17 = iVar12;
              }
              uVar18 = (ulonglong)(iVar17 + 1);
              plVar22 = local_188;
              uVar9 = uVar3;
            }
            else {
LAB_1412273f3:
              uVar25 = (ulonglong)(-uVar9 & uVar9);
              uVar2 = uVar25 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar9) {
                uVar9 = uVar3;
              }
            }
          } while (uVar9 != (uint)uVar15);
        }
      }
LAB_14122729c:
      puVar10 = local_180 + 2;
    } while (puVar10 != local_1a0);
  }
  if ((longlong)(int)uStack_130 != 0) {
    local_1a0 = local_138 + (longlong)(int)uStack_130 * 2;
    puVar10 = local_138;
    do {
      puVar16 = *(undefined8 **)puVar10;
      local_180 = puVar10;
      if (puVar16 != (undefined8 *)0x0) {
        puVar10 = (uint *)(puVar16 + 8);
        uVar19 = *(uint *)(puVar16 + 0xb);
        uVar15 = (ulonglong)uVar19;
        if (uVar19 == 0) {
          uVar25 = 1;
          uVar18 = 0;
          iVar23 = 0;
          uVar9 = 0;
        }
        else {
          puVar11 = (uint *)puVar16[10];
          if ((uint *)puVar16[10] == (uint *)0x0) {
            puVar11 = puVar10;
          }
          uVar9 = *puVar11;
          if (uVar9 == 0) {
            iVar23 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar23 = uVar19 - 1;
            }
            uVar18 = 0;
            uVar25 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar25 = uVar18;
            }
            iVar23 = 0;
            do {
              if (uVar25 == uVar18) goto LAB_14122750a;
              iVar23 = iVar23 + 0x20;
              uVar9 = puVar11[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar18 = 0;
            iVar23 = 0;
          }
          uVar25 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar25 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar9) {
            uVar9 = uVar19;
          }
        }
        if (uVar9 != uVar19) {
          uVar19 = 0xffffffff;
          local_198 = uVar15;
          local_190 = puVar16;
          do {
            lVar14 = puVar16[6];
            if (*(longlong *)(lVar14 + 0x10 + (longlong)(int)uVar9 * 0x48) != 0) {
              iVar17 = (int)plVar22[1];
              *(uint *)(plVar22 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)plVar22 + 0xc) < iVar17 + 1U) {
                FUN_1406f071e(plVar22,iVar17);
                plVar22 = local_188;
              }
              lVar14 = lVar14 + (longlong)(int)uVar9 * 0x48;
              lVar24 = *plVar22;
              lVar21 = (longlong)iVar17 * 0x20;
              uVar6 = *(undefined4 *)(lVar14 + 0x14);
              uVar7 = *(undefined4 *)(lVar14 + 0x18);
              uVar8 = *(undefined4 *)(lVar14 + 0x1c);
              puVar1 = (undefined4 *)(lVar24 + lVar21);
              *puVar1 = *(undefined4 *)(lVar14 + 0x10);
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              *(undefined8 *)(lVar24 + 0x10 + lVar21) = 0;
              iVar17 = *(int *)(lVar14 + 0x28);
              pvVar5 = *(void **)(lVar14 + 0x20);
              *(int *)(lVar24 + 0x18 + lVar21) = iVar17;
              if ((longlong)iVar17 == 0) {
                *(undefined4 *)(lVar24 + lVar21 + 0x1c) = 0;
                uVar15 = local_198;
                puVar16 = local_190;
              }
              else {
                puVar16 = (undefined8 *)(lVar21 + lVar24 + 0x10);
                FUN_1446dd670(puVar16,iVar17,0);
                memcpy((void *)*puVar16,pvVar5,(longlong)iVar17 * 2);
                uVar15 = local_198;
                plVar22 = local_188;
                puVar16 = local_190;
              }
            }
            uVar19 = uVar19 & ~(uint)uVar25;
            puVar11 = (uint *)puVar16[10];
            if ((uint *)puVar16[10] == (uint *)0x0) {
              puVar11 = puVar10;
            }
            uVar3 = *(uint *)(puVar16 + 0xb);
            iVar17 = (int)uVar18;
            lVar14 = (longlong)iVar17;
            uVar9 = puVar11[lVar14] & uVar19;
            if (uVar9 == 0) {
              iVar13 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar13 = uVar3 - 1;
              }
              iVar13 = iVar13 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar12 = iVar13;
              if (iVar13 < iVar17) {
                iVar12 = iVar17;
              }
              if (iVar17 < iVar13) {
                lVar24 = 0;
                do {
                  uVar9 = puVar11[lVar14 + lVar24 + 1];
                  if (uVar9 != 0) {
                    uVar18 = (ulonglong)(iVar17 + (int)lVar24 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_141227661;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar12 - lVar14 != lVar24);
                uVar19 = 0xffffffff;
                iVar17 = iVar12;
              }
              uVar18 = (ulonglong)(iVar17 + 1);
              plVar22 = local_188;
              uVar9 = uVar3;
            }
            else {
LAB_141227661:
              uVar25 = (ulonglong)(-uVar9 & uVar9);
              uVar2 = uVar25 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar9) {
                uVar9 = uVar3;
              }
            }
          } while (uVar9 != (uint)uVar15);
        }
      }
LAB_14122750a:
      puVar10 = local_180 + 2;
    } while (puVar10 != local_1a0);
  }
  if ((longlong)(int)uStack_150 != 0) {
    local_1a0 = local_158 + (longlong)(int)uStack_150 * 2;
    puVar10 = local_158;
    do {
      puVar16 = *(undefined8 **)puVar10;
      local_180 = puVar10;
      if (puVar16 != (undefined8 *)0x0) {
        puVar10 = (uint *)(puVar16 + 8);
        uVar19 = *(uint *)(puVar16 + 0xb);
        uVar15 = (ulonglong)uVar19;
        if (uVar19 == 0) {
          uVar25 = 1;
          uVar18 = 0;
          iVar23 = 0;
          uVar9 = 0;
        }
        else {
          puVar11 = (uint *)puVar16[10];
          if ((uint *)puVar16[10] == (uint *)0x0) {
            puVar11 = puVar10;
          }
          uVar9 = *puVar11;
          if (uVar9 == 0) {
            iVar23 = uVar19 + 0x1e;
            if (-1 < (int)(uVar19 - 1)) {
              iVar23 = uVar19 - 1;
            }
            uVar18 = 0;
            uVar25 = (ulonglong)(uint)(iVar23 >> 5);
            if (iVar23 >> 5 < 1) {
              uVar25 = uVar18;
            }
            iVar23 = 0;
            do {
              if (uVar25 == uVar18) goto LAB_14122776e;
              iVar23 = iVar23 + 0x20;
              uVar9 = puVar11[uVar18 + 1];
              uVar18 = uVar18 + 1;
            } while (uVar9 == 0);
          }
          else {
            uVar18 = 0;
            iVar23 = 0;
          }
          uVar25 = (ulonglong)(-uVar9 & uVar9);
          uVar2 = uVar25 * 2 + 1;
          lVar14 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
            }
          }
          uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
          if ((int)uVar19 <= (int)uVar9) {
            uVar9 = uVar19;
          }
        }
        if (uVar9 != uVar19) {
          uVar19 = 0xffffffff;
          local_198 = uVar15;
          local_190 = puVar16;
          do {
            lVar14 = puVar16[6];
            if (*(longlong *)(lVar14 + 0x10 + (longlong)(int)uVar9 * 0x48) != 0) {
              iVar17 = (int)plVar22[1];
              *(uint *)(plVar22 + 1) = iVar17 + 1U;
              if (*(uint *)((longlong)plVar22 + 0xc) < iVar17 + 1U) {
                FUN_1406f071e(plVar22,iVar17);
                plVar22 = local_188;
              }
              lVar14 = lVar14 + (longlong)(int)uVar9 * 0x48;
              lVar24 = *plVar22;
              lVar21 = (longlong)iVar17 * 0x20;
              uVar6 = *(undefined4 *)(lVar14 + 0x14);
              uVar7 = *(undefined4 *)(lVar14 + 0x18);
              uVar8 = *(undefined4 *)(lVar14 + 0x1c);
              puVar1 = (undefined4 *)(lVar24 + lVar21);
              *puVar1 = *(undefined4 *)(lVar14 + 0x10);
              puVar1[1] = uVar6;
              puVar1[2] = uVar7;
              puVar1[3] = uVar8;
              *(undefined8 *)(lVar24 + 0x10 + lVar21) = 0;
              iVar17 = *(int *)(lVar14 + 0x28);
              pvVar5 = *(void **)(lVar14 + 0x20);
              *(int *)(lVar24 + 0x18 + lVar21) = iVar17;
              if ((longlong)iVar17 == 0) {
                *(undefined4 *)(lVar24 + lVar21 + 0x1c) = 0;
                uVar15 = local_198;
                puVar16 = local_190;
              }
              else {
                puVar16 = (undefined8 *)(lVar21 + lVar24 + 0x10);
                FUN_1446dd670(puVar16,iVar17,0);
                memcpy((void *)*puVar16,pvVar5,(longlong)iVar17 * 2);
                uVar15 = local_198;
                plVar22 = local_188;
                puVar16 = local_190;
              }
            }
            uVar19 = uVar19 & ~(uint)uVar25;
            puVar11 = (uint *)puVar16[10];
            if ((uint *)puVar16[10] == (uint *)0x0) {
              puVar11 = puVar10;
            }
            uVar3 = *(uint *)(puVar16 + 0xb);
            iVar17 = (int)uVar18;
            lVar14 = (longlong)iVar17;
            uVar9 = puVar11[lVar14] & uVar19;
            if (uVar9 == 0) {
              iVar13 = uVar3 + 0x1e;
              if (-1 < (int)(uVar3 - 1)) {
                iVar13 = uVar3 - 1;
              }
              iVar13 = iVar13 >> 5;
              iVar23 = iVar23 + 0x20;
              iVar12 = iVar13;
              if (iVar13 < iVar17) {
                iVar12 = iVar17;
              }
              if (iVar17 < iVar13) {
                lVar24 = 0;
                do {
                  uVar9 = puVar11[lVar14 + lVar24 + 1];
                  if (uVar9 != 0) {
                    uVar18 = (ulonglong)(iVar17 + (int)lVar24 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_1412278c5;
                  }
                  iVar23 = iVar23 + 0x20;
                  lVar24 = lVar24 + 1;
                } while (iVar12 - lVar14 != lVar24);
                uVar19 = 0xffffffff;
                iVar17 = iVar12;
              }
              uVar18 = (ulonglong)(iVar17 + 1);
              plVar22 = local_188;
              uVar9 = uVar3;
            }
            else {
LAB_1412278c5:
              uVar25 = (ulonglong)(-uVar9 & uVar9);
              uVar2 = uVar25 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar2 != 0) {
                for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              uVar9 = (iVar23 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
              if ((int)uVar3 <= (int)uVar9) {
                uVar9 = uVar3;
              }
            }
          } while (uVar9 != (uint)uVar15);
        }
      }
LAB_14122776e:
      puVar10 = local_180 + 2;
    } while (puVar10 != local_1a0);
  }
  if (local_158 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_148 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if (local_138 != (uint *)0x0) {
    FUN_1400020a8();
  }
  FUN_1403c4669(local_128,uStack_120 & 0xffffffff);
  if (local_128 != 0) {
    FUN_1400020a8();
  }
  if (local_118 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412279c4 FUN_1412279c4 body=352 status=ok
// SIG undefined FUN_1412279c4(void)

void FUN_1412279c4(longlong param_1)

{
  longlong *plVar1;
  byte bVar2;
  ushort uVar3;
  longlong lVar4;
  int *piVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined2 *local_68;
  int local_60;
  longlong *local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar4 = FUN_141227b26();
  if (lVar4 != 0) {
    local_58 = (longlong *)0x0;
    uStack_50 = 0;
    FUN_14584a3de(lVar4,&local_58);
    if ((longlong)(int)uStack_50 != 0) {
      plVar1 = local_58 + (int)uStack_50;
      plVar8 = local_58;
      local_70 = param_1;
LAB_141227a3d:
      lVar4 = *plVar8;
      piVar5 = *(int **)(lVar4 + 8);
      if (piVar5 == (int *)0x0) {
        piVar5 = &DAT_14c9485f0;
      }
      if (((*piVar5 != 0) && (piVar5[1] != 0)) && (*piVar5 != DAT_14c948000)) {
        FUN_140baf24c(lVar4,&local_68);
        puVar6 = local_68;
        if (local_60 == 0) {
          puVar6 = &DAT_149dfb77a;
        }
        lVar7 = 0;
        do {
          uVar3 = puVar6[lVar7];
          bVar2 = (&DAT_14b9b0308)[lVar7];
          iVar9 = (uint)uVar3 - (uint)bVar2;
          if (iVar9 == 0) {
            iVar9 = 0;
            if (uVar3 == 0) goto LAB_141227ab7;
          }
          else {
            if (0x7f < ((uint)bVar2 | (uint)uVar3)) goto LAB_141227ab7;
            if ((&DAT_149e05da0)[uVar3] != (&DAT_149e05da0)[bVar2]) goto code_r0x000141227ab4;
          }
          lVar7 = lVar7 + 1;
        } while( true );
      }
      goto LAB_141227ac6;
    }
LAB_141227af0:
    if (local_58 != (longlong *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
code_r0x000141227ab4:
  iVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3] - (uint)(byte)(&DAT_149e05da0)[bVar2];
LAB_141227ab7:
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar9 == 0) {
    *(longlong *)(local_70 + 0x18) = lVar4;
    goto LAB_141227af0;
  }
LAB_141227ac6:
  plVar8 = plVar8 + 1;
  if (plVar8 == plVar1) goto LAB_141227af0;
  goto LAB_141227a3d;
}



// FUNCTION 141227b26 FUN_141227b26 body=8 status=ok
// SIG undefined FUN_141227b26(void)

undefined8 FUN_141227b26(void)

{
  return DAT_14cb849c0;
}



// FUNCTION 141227b2e FUN_141227b2e body=881 status=ok
// SIG undefined FUN_141227b2e(void)

void FUN_141227b2e(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [36];
  int local_a4;
  longlong *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = param_2;
  cVar5 = (**(code **)(*param_1 + 0x300))();
  if (cVar5 == '\0') {
    plVar1 = param_1 + 0x4f;
    plVar13 = param_1 + 0x51;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar13;
    if ((int)param_1[0x54] == 0) {
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar11 = (int)param_1[0x54];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar6 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar9 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar11) || (local_78 = lVar6, plStack_60 != plVar13)) {
      do {
        local_78 = lVar6;
        lVar6 = *local_90;
        lVar7 = *(longlong *)(lVar6 + 0x10 + (longlong)iVar9 * 0x20);
        if ((lVar7 != 0) &&
           ((cVar5 = FUN_140dddae6(lVar7 + 0x48), cVar5 != '\0' &&
            (plVar3 = *(longlong **)(*(longlong *)(lVar6 + (longlong)iVar9 * 0x20 + 0x10) + 0x30),
            plVar3 != (longlong *)0x0)))) {
          lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar7 = FUN_141227ea0();
          if ((lVar7 != 0) &&
             ((*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38) &&
              (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
               lVar7 + 0x30)))) {
            (*(code *)*local_98)(local_98[1],plVar3);
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar9 = local_78._4_4_;
        lVar6 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar13 || local_78._4_4_ != iVar11));
    }
  }
  else {
    local_a0 = param_1 + 0x3b;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_a0;
    if ((int)param_1[0x3e] == 0) {
      uVar15 = 1;
      uVar12 = 0xffffffff;
      iVar11 = 0;
      iVar14 = 0;
      iVar8 = 0;
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar15 = (ulonglong)local_90 >> 0x20;
      iVar11 = (int)param_1[0x3e];
      iVar9 = (int)local_90;
      uVar12 = (uint)uStack_80;
      iVar8 = uStack_80._4_4_;
      iVar14 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar8 != iVar11 || local_88 != local_a0) {
      do {
        local_a4 = iVar11;
        plVar13 = *(longlong **)(param_1[0x39] + 0x10 + (longlong)iVar8 * 0x20);
        if (plVar13 != (longlong *)0x0) {
          lVar6 = (**(code **)(*plVar13 + 8))(plVar13);
          lVar7 = FUN_141227ea0();
          if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
              lVar7 + 0x30)) {
            (*(code *)*local_98)(local_98[1],plVar13);
          }
        }
        uVar12 = uVar12 & ~(uint)uVar15;
        plVar13 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar13 = plVar1;
        }
        iVar11 = (int)plVar1[3];
        lVar6 = (longlong)iVar9;
        uVar10 = *(uint *)((longlong)plVar13 + lVar6 * 4) & uVar12;
        if (uVar10 == 0) {
          iVar8 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar8 = iVar11 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar14 = iVar14 + 0x20;
          iVar4 = iVar8;
          if (iVar8 < iVar9) {
            iVar4 = iVar9;
          }
          if (iVar9 < iVar8) {
            lVar7 = 0;
            do {
              uVar10 = *(uint *)((longlong)plVar13 + lVar7 * 4 + lVar6 * 4 + 4);
              if (uVar10 != 0) {
                iVar9 = iVar9 + (int)lVar7 + 1;
                uVar12 = 0xffffffff;
                goto LAB_141227cb2;
              }
              iVar14 = iVar14 + 0x20;
              lVar7 = lVar7 + 1;
            } while (iVar4 - lVar6 != lVar7);
            uVar12 = 0xffffffff;
            iVar9 = iVar4;
          }
          iVar9 = iVar9 + 1;
          iVar8 = iVar11;
        }
        else {
LAB_141227cb2:
          uVar15 = (ulonglong)(-uVar10 & uVar10);
          uVar2 = uVar15 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar8 = (iVar14 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar11 <= iVar8) {
            iVar8 = iVar11;
          }
        }
        iVar11 = local_a4;
      } while (iVar8 != local_a4 || plVar1 != local_a0);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141227ea0 FUN_141227ea0 body=57 status=ok
// SIG undefined FUN_141227ea0(void)

void FUN_141227ea0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a4b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a4b8 = FUN_140002ddd(FUN_146526256,uVar1,L"InventoryRarityDef");
  }
  return;
}



// FUNCTION 141227eda FUN_141227eda body=67 status=ok
// SIG undefined FUN_141227eda(void)

void FUN_141227eda(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  (**(code **)*param_1)(((undefined8 *)*param_1)[1],&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141227f1e FUN_141227f1e body=228 status=ok
// SIG undefined FUN_141227f1e(void)

longlong FUN_141227f1e(void)

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
  if (DAT_14cb9a100 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_146591bb0;
    local_38 = &LAB_148af40bf;
    local_40 = FUN_146591cae;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x198;
    FUN_14081cfa3(L"/Script/GameSettings",L"GameSettingValueDiscreteDynamic_Enum",&DAT_14cb9a100,
                  &DAT_148af40be);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9a100;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141228004 FUN_141228004 body=1161 status=ok
// SIG undefined FUN_141228004(void)

void FUN_141228004(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined1 *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  undefined1 local_31;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_1468d96f0;
      local_50 = 0;
      local_58 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_1412280ef;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_1412280ef:
  local_31 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_140a4831c;
      local_58 = 0x1000000008001;
      local_50 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
    }
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    plVar1 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar1[3];
    if ((*(byte *)((longlong)plVar1 + 0x39) & 1) == 0) {
      lVar2 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar1 + 0x44) + lVar2;
      *(longlong *)(param_2 + 0x40) = lVar2;
      pcVar3 = *(code **)(*plVar1 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar1 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar3)(plVar1);
          if (cVar5 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_31);
            goto LAB_1412281b8;
          }
        }
        _Src = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_31) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_31,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_31,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar1[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_31,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_31,lVar2);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar6;
        puVar6 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_31);
  }
LAB_1412281b8:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x638))(param_1,local_30,local_31);
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122848e FUN_14122848e body=266 status=ok
// SIG undefined FUN_14122848e(void)

void FUN_14122848e(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)FUN_14122859a();
  if (plVar1 == (longlong *)0x0) goto LAB_14122855e;
  lVar2 = (**(code **)(*plVar1 + 0x180))(plVar1);
  if (lVar2 != 0) {
    lVar3 = FUN_1412285d0();
    if ((lVar3 == 0) || (DAT_14c950c29 == '\0')) {
      if (lVar3 != 0) goto LAB_1412284fd;
LAB_141228581:
      lVar5 = 0;
    }
    else {
      FUN_1456cec3c(lVar3);
LAB_1412284fd:
      lVar4 = FUN_1412285d0();
      if ((lVar4 == 0) || (*(int *)(lVar3 + 0x38) < *(int *)(lVar4 + 0x38))) goto LAB_141228581;
      lVar5 = 0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        lVar5 = lVar3;
      }
    }
    lVar2 = FUN_1448a6f9c(lVar2 + 0x870,lVar5);
    if (lVar2 != 0) {
      local_40 = param_2;
      local_38 = param_3;
      FUN_1447cd2ec(lVar2 + 0x30);
    }
  }
  local_40 = param_2;
  local_38 = param_3;
  FUN_1447cd2ec(plVar1 + 5);
LAB_14122855e:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122859a FUN_14122859a body=53 status=ok
// SIG undefined FUN_14122859a(void)

undefined8 FUN_14122859a(longlong param_1)

{
  longlong lVar1;
  
  if ((((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) &&
      ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) && (lVar1 = FUN_14043f728(), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xd0);
  }
  return 0;
}



// FUNCTION 1412285d0 FUN_1412285d0 body=228 status=ok
// SIG undefined FUN_1412285d0(void)

longlong FUN_1412285d0(void)

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
  if (DAT_14cb11190 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_141737a50;
    local_38 = &LAB_147db6411;
    local_40 = FUN_14640fefb;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/Engine",L"DataLayerSubsystem",&DAT_14cb11190,FUN_14640fed4);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb11190;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1412286b6 FUN_1412286b6 body=502 status=ok
// SIG undefined FUN_1412286b6(void)

void FUN_1412286b6(longlong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  ulonglong uVar4;
  longlong lVar5;
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
  code *local_50;
  code *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (((((param_3 & 1) != 0) && (*(char *)(param_1 + 0x30) != '\0')) && (param_2 != 0)) &&
     (*(char *)(param_2 + 0x178) == '\x03')) {
    if (DAT_14cb939a8 == 0) {
      local_60 = &local_40;
      local_40 = FUN_140940982;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_146522c26;
      local_68 = &LAB_148a0db91;
      local_70 = &LAB_146572ba7;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 8;
      local_98 = 0xdd8;
      FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
    }
    if (((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30)) &&
       (uVar2 = *(uint *)(param_2 + 0xbf0), (char)uVar2 != '\0')) {
      uVar4 = 0;
      do {
        if ((longlong)*(int *)(param_1 + 200) != 0) {
          puVar3 = *(uint **)(param_1 + 0xc0);
          lVar5 = (longlong)*(int *)(param_1 + 200) * 0x18;
          do {
            if ((*puVar3 & 1 << ((byte)uVar4 & 0x1f)) != 0) {
              if ((((int)(uint)uVar4 < (int)uVar2) && (puVar3 != (uint *)0x0)) &&
                 (lVar5 = *(longlong *)(*(longlong *)(param_2 + 0xbe8) + 8 + uVar4 * 0x88),
                 lVar5 != 0)) {
                if ((int)uVar2 <= (int)((uint)uVar4 & 0xff)) {
                  lVar5 = 0;
                }
                iVar1 = *(int *)(lVar5 + 0xd8);
                *(uint *)(lVar5 + 0xd8) = iVar1 + 1U;
                if (*(uint *)(lVar5 + 0xdc) < iVar1 + 1U) {
                  FUN_1412288ae((longlong *)(lVar5 + 0xd0),iVar1);
                }
                *(longlong *)(*(longlong *)(lVar5 + 0xd0) + (longlong)iVar1 * 8) = param_1;
                uVar2 = *(uint *)(param_2 + 0xbf0);
              }
              break;
            }
            puVar3 = puVar3 + 6;
            lVar5 = lVar5 + -0x18;
          } while (lVar5 != 0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uVar2 & 0xff));
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1412288ae FUN_1412288ae body=353 status=ok
// SIG undefined FUN_1412288ae(void)

void FUN_1412288ae(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141228933;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_141228933:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141228a10 FUN_141228a10 body=2086 status=ok
// SIG undefined FUN_141228a10(void)

void FUN_141228a10(longlong *param_1)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_118 [32];
  undefined2 *local_f8;
  undefined1 local_f0;
  code *local_e8;
  ulonglong uStack_e0;
  undefined2 local_d0;
  undefined2 uStack_ce;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  byte local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_141229268(param_1,1);
  (**(code **)(*param_1 + 0x850))(param_1,1);
  if ((char)param_1[0x103] == '\0') {
    (**(code **)(*param_1 + 0x698))(param_1,param_1[0x36]);
  }
  if (*(char *)((longlong)param_1 + 0xd45) != '\x01') {
    if ((((param_1[0x163] == 0) || ((longlong *)param_1[0x164] == (longlong *)0x0)) ||
        (cVar5 = (**(code **)(*(longlong *)param_1[0x164] + 0x68))(), cVar5 == '\0')) &&
       (-1 < (char)param_1[0xc])) {
      if (*(char *)((longlong)param_1 + 0xd45) == '\x02') {
        fVar18 = 0.0;
        uVar6 = DAT_14cb94e20;
      }
      else {
        if (*(char *)((longlong)param_1 + 0xd45) == '\x01') goto LAB_141228fa4;
        fVar18 = *(float *)((longlong)param_1 + 0xb6c);
        uVar6 = DAT_14cb94e00;
        if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
          fVar17 = (float)(**(code **)(*(longlong *)param_1[0x164] + 0x40))();
          fVar18 = fVar18 * fVar17;
          puVar10 = &DAT_14cb94e00;
          if (*(char *)((longlong)param_1 + 0xd45) == '\x02') {
            puVar10 = &DAT_14cb94e20;
          }
          uVar6 = *puVar10;
        }
      }
      local_f0 = 0;
      local_f8 = (undefined2 *)((ulonglong)local_f8 & 0xffffffffffffff00);
      cVar5 = FUN_140dd024a(param_1,uVar6);
      *(char *)((longlong)param_1 + 0xb91) = cVar5;
      if (((cVar5 != '\0') && (param_1[0x167] != 0)) &&
         (((longlong *)param_1[0x168] != (longlong *)0x0 &&
          (plVar8 = (longlong *)(**(code **)(*(longlong *)param_1[0x168] + 8))(),
          plVar8 != (longlong *)0x0)))) {
        uVar6 = FUN_1407ca880();
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar6);
        if (plVar8 != (longlong *)0x0) {
          uVar6 = FUN_1407ca880();
          plVar9 = (longlong *)FUN_144718840(plVar8,uVar6);
          if (((plVar8 != plVar9) && (plVar9 != (longlong *)0x0)) &&
             (lVar14 = (**(code **)(*plVar9 + 0x50))(plVar9), lVar14 != 0)) {
            FUN_140dc01da(lVar14,&local_c8,*(undefined1 *)((longlong)param_1 + 0xb91));
            plVar8 = local_c8;
            if (local_c8 != (longlong *)0x0) {
              local_e8 = FUN_140f93b48;
              uStack_e0 = uStack_e0 & 0xffffffff00000000;
              FUN_14126b498(local_c8 + 3,&local_d0);
              param_1[0x171] = CONCAT44(uStack_cc,CONCAT22(uStack_ce,local_d0));
              if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
                lVar14 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
                if ((int)(uint)*(byte *)((longlong)param_1 + 0xd44) < *(int *)(lVar14 + 0xa8)) {
                  lVar7 = (ulonglong)*(byte *)((longlong)param_1 + 0xd44) * 0x170;
                  lVar13 = (longlong)*(int *)(*(longlong *)(lVar14 + 0xa0) + 0x90 + lVar7);
                  if (lVar13 != 0) {
                    lVar7 = *(longlong *)(lVar14 + 0xa0) + lVar7;
                    plVar9 = *(longlong **)(lVar7 + 0x88);
                    if (plVar9 == (longlong *)0x0) {
                      plVar9 = (longlong *)(lVar7 + 0x78);
                    }
                    local_e8 = (code *)0x0;
                    uStack_e0 = 0;
                    (**(code **)(*plVar8 + 0x38))(plVar8);
                    plVar8 = plVar9 + lVar13;
                    do {
                      if ((longlong)(int)uStack_e0 != 0) {
                        lVar14 = 0;
                        do {
                          if (*(longlong *)(local_e8 + lVar14) == *plVar9) goto LAB_141228f03;
                          lVar14 = lVar14 + 8;
                        } while ((longlong)(int)uStack_e0 * 8 != lVar14);
                      }
                      FUN_140dd0426(param_1,plVar9);
LAB_141228f03:
                      plVar9 = plVar9 + 1;
                    } while (plVar9 != plVar8);
                    if (param_1[0x163] == 0) {
                      plVar8 = (longlong *)0x0;
                    }
                    else {
                      plVar8 = (longlong *)param_1[0x164];
                    }
                    uVar6 = (**(code **)(*plVar8 + 0x18))();
                    FUN_140ee9d92(uVar6,*(undefined1 *)((longlong)param_1 + 0xd44));
                    if (local_e8 != (code *)0x0) {
                      FUN_1400020a8();
                    }
                  }
                }
              }
              if (fVar18 <= 0.0) {
                fVar18 = (float)(**(code **)(*local_c8 + 0x28))();
              }
            }
            plVar8 = (longlong *)CONCAT44(uStack_bc,local_c0);
            if (plVar8 != (longlong *)0x0) {
              LOCK();
              plVar9 = plVar8 + 1;
              *(int *)plVar9 = (int)*plVar9 + -1;
              UNLOCK();
              if ((int)*plVar9 == 0) {
                (**(code **)*plVar8)(plVar8);
                LOCK();
                piVar1 = (int *)((longlong)plVar8 + 0xc);
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (*piVar1 == 0) {
                  (**(code **)(*plVar8 + 0x10))(plVar8);
                }
              }
            }
          }
        }
      }
      if (fVar18 <= 0.01) {
        fVar18 = 0.01;
      }
      bVar2 = *(byte *)(param_1 + 0x17b);
      if (((bVar2 == 0) || ((int)param_1[0x17e] <= (int)(uint)bVar2)) ||
         ((lVar14 = *(longlong *)
                     (param_1[0x17d] + 8 + (ulonglong)bVar2 * 0x80 + (ulonglong)(uint)bVar2 * 8),
          lVar14 == 0 || ((*(byte *)(*(longlong *)(lVar14 + 0xa0) + 0x31) & 8) == 0)))) {
        uVar6 = FUN_1401b4c98(param_1);
        fVar17 = *(float *)((longlong)param_1 + 0x74);
        uVar16 = -(uint)(0.0001 < fVar17);
        local_e8 = (code *)0x0;
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        FUN_1446efa72(&local_e8,0,3,0x10);
        pcVar4 = local_e8;
        uStack_e0._0_4_ = 3;
        *(undefined ***)local_e8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        *(longlong *)(local_e8 + 0x10) = lVar7;
        *(undefined ***)local_e8 = &PTR_FUN_14b4ab980;
        *(undefined8 *)(local_e8 + 0x18) = 0;
        iVar11 = 0;
        if (param_1 != (longlong *)0x0) {
          uVar3 = *(uint *)((longlong)param_1 + 0xc);
          *(uint *)(local_e8 + 0x18) = uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar14 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar14 = 0;
          }
          iVar11 = *(int *)(lVar14 + 0x10);
          if (*(int *)(lVar14 + 0x10) == 0) {
            LOCK();
            iVar11 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar11;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar11 = *(int *)(lVar14 + 0x10);
            bVar15 = iVar11 == 0;
            if (bVar15) {
              *(int *)(lVar14 + 0x10) = iVar12;
              iVar11 = 0;
            }
            UNLOCK();
            if (bVar15) {
              iVar11 = iVar12;
            }
          }
        }
        *(int *)(pcVar4 + 0x1c) = iVar11;
        *(code **)(pcVar4 + 0x20) = FUN_140ebdd2e;
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        FUN_14487d8d8(&local_c8,&local_e8);
        local_88 = 1;
        local_f8 = &local_d0;
        local_d0 = 0;
        uStack_cc = 0xbf800000;
        FUN_1406f4044(uVar6,param_1 + 0x16f,&local_c8,
                      fVar18 * (float)(~uVar16 & 0x3f800000 | (uint)(1.0 / fVar17) & uVar16));
        (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
        if ((int)uStack_e0 != 0) {
          if (local_e8 == (code *)0x0) goto LAB_141228cd3;
          (*(code *)**(undefined8 **)local_e8)(local_e8,0);
          FUN_1446efa72(&local_e8,0,0,0x10);
          uStack_e0._0_4_ = 0;
        }
        if (local_e8 != (code *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        *(byte *)(param_1 + 0x172) = *(byte *)(param_1 + 0x172) & 0x3f | 0x40;
        uVar6 = FUN_140231a4a(param_1[0x7e]);
        FUN_140b35a56(uVar6,&local_c8);
        if ((local_c8 != (longlong *)0x0) &&
           (fVar18 = fVar18 - *(float *)(local_c8 + 0x21), fVar18 <= 0.01)) {
          fVar18 = 0.01;
        }
        plVar8 = (longlong *)CONCAT44(uStack_bc,local_c0);
        if (plVar8 != (longlong *)0x0) {
          LOCK();
          plVar9 = plVar8 + 1;
          *(int *)plVar9 = (int)*plVar9 + -1;
          UNLOCK();
          if ((int)*plVar9 == 0) {
            (**(code **)*plVar8)(plVar8);
            LOCK();
            piVar1 = (int *)((longlong)plVar8 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
        uVar6 = FUN_1401b4c98(param_1);
        fVar17 = *(float *)((longlong)param_1 + 0x74);
        uVar16 = -(uint)(0.0001 < fVar17);
        local_e8 = (code *)0x0;
        uStack_e0 = uStack_e0 & 0xffffffff00000000;
        FUN_1446efa72(&local_e8,0,3,0x10);
        pcVar4 = local_e8;
        uStack_e0._0_4_ = 3;
        *(undefined ***)local_e8 = &PTR_LAB_14a1c8830;
        LOCK();
        UNLOCK();
        lVar7 = DAT_14c758608 + 1;
        lVar14 = DAT_14c758608 + 1;
        if (lVar7 == 0) {
          LOCK();
          UNLOCK();
          lVar7 = DAT_14c758608 + 2;
          lVar14 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar14;
        *(longlong *)(local_e8 + 0x10) = lVar7;
        *(undefined ***)local_e8 = &PTR_FUN_14b4ab980;
        *(undefined8 *)(local_e8 + 0x18) = 0;
        FUN_14485c47a(local_e8 + 0x18,param_1);
        *(undefined4 *)(pcVar4 + 0x28) = 0;
        *(code **)(pcVar4 + 0x20) = FUN_148a1f8fa;
        local_c8 = (longlong *)0x0;
        local_c0 = 0;
        FUN_14487d8d8(&local_c8,&local_e8);
        local_88 = 1;
        local_f8 = &local_d0;
        local_d0 = 0;
        uStack_cc = 0xbf800000;
        FUN_1406f4044(uVar6,param_1 + 0x16f,&local_c8,
                      fVar18 * (float)(~uVar16 & 0x3f800000 | (uint)(1.0 / fVar17) & uVar16));
        (*(code *)(&PTR_LAB_14a1c87a0)[local_88])(&local_c8);
        FUN_1449db362(&local_e8);
      }
LAB_141228cd3:
      if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    *(undefined1 *)((longlong)param_1 + 0xd45) = 1;
  }
LAB_141228fa4:
  if ((param_1[0x163] != 0) && ((longlong *)param_1[0x164] != (longlong *)0x0)) {
    uVar6 = (**(code **)(*(longlong *)param_1[0x164] + 0x18))();
    FUN_140ee959c(uVar6,*(undefined1 *)((longlong)param_1 + 0xd44));
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_118);
}



// FUNCTION 141229268 FUN_141229268 body=145 status=ok
// SIG undefined FUN_141229268(void)

void FUN_141229268(longlong param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = *(int *)(param_1 + 0xd70);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd68);
    lVar5 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar5);
      if ((plVar3 != (longlong *)0x0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(plVar3);
LAB_1412292a8:
        lVar4 = FUN_1403e5dae();
        if ((*(int *)(lVar4 + 0x38) <= *(int *)(plVar3[2] + 0x38)) &&
           (*(longlong *)(*(longlong *)(plVar3[2] + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)) {
          (**(code **)(*plVar3 + 0x3a0))(plVar3,param_2);
        }
      }
      else if (plVar3 != (longlong *)0x0) goto LAB_1412292a8;
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1412292fa FUN_1412292fa body=74 status=ok
// SIG undefined FUN_1412292fa(void)

undefined8 * FUN_1412292fa(undefined8 *param_1)

{
  uint uVar1;
  
  FUN_140553f2a();
  *param_1 = &PTR_FUN_14a4da7f0;
  param_1[8] = &PTR_FUN_14a4daad0;
  param_1[9] = 0;
  param_1[10] = 0xffffffffffffffff;
  *(undefined1 *)((longlong)param_1 + 0x32) = 8;
  uVar1 = FUN_1408bae02();
  *(uint *)(param_1 + 7) = uVar1 | 0x10;
  return param_1;
}



// FUNCTION 141229344 FUN_141229344 body=5216 status=ok
// SIG undefined FUN_141229344(void)

undefined1 *
FUN_141229344(longlong *param_1,undefined1 *param_2,undefined1 *param_3,undefined ***param_4)

{
  undefined **ppuVar1;
  int *piVar2;
  undefined **ppuVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined **ppuVar11;
  char cVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  longlong lVar16;
  undefined ***pppuVar17;
  longlong **pplVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  undefined1 auStack_808 [32];
  undefined ***local_7e8;
  undefined4 local_7e0;
  longlong *local_7d0;
  longlong *local_7c8;
  undefined **local_7c0;
  undefined1 *local_7b8;
  undefined8 local_7b0;
  undefined **local_7a8;
  undefined **local_7a0;
  longlong local_798;
  ulonglong local_790;
  undefined8 local_788;
  longlong *plStack_780;
  undefined **local_778;
  undefined **ppuStack_770;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined1 local_758 [8];
  undefined ***local_750;
  undefined **local_748;
  undefined **ppuStack_740;
  undefined **local_738;
  undefined **ppuStack_730;
  longlong local_720;
  longlong *local_718;
  undefined **local_710;
  undefined **local_708;
  undefined **ppuStack_700;
  undefined **local_6f8;
  undefined **local_6f0;
  undefined **ppuStack_6e8;
  undefined **local_6e0;
  undefined **ppuStack_6d8;
  undefined **local_6d0;
  undefined **local_6c8;
  undefined **local_6c0;
  undefined **ppuStack_6b8;
  undefined3 uStack_6b0;
  undefined5 local_6ad;
  undefined3 uStack_6a8;
  undefined8 uStack_6a5;
  undefined8 uStack_698;
  undefined4 uStack_690;
  undefined4 uStack_68c;
  undefined3 uStack_688;
  undefined8 uStack_685;
  undefined **local_678;
  undefined **ppuStack_670;
  undefined **ppuStack_668;
  undefined3 uStack_660;
  undefined5 local_65d;
  undefined3 uStack_658;
  undefined8 uStack_655;
  undefined **local_648;
  undefined **ppuStack_640;
  undefined **local_630;
  undefined8 local_628;
  undefined **ppuStack_620;
  undefined8 *local_618;
  undefined **local_610;
  undefined **ppuStack_608;
  undefined4 local_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  undefined **local_5f0;
  undefined **local_5e8;
  undefined **local_5e0;
  undefined4 uStack_5d8;
  undefined4 uStack_5d4;
  undefined4 uStack_5d0;
  undefined4 uStack_5cc;
  undefined3 uStack_5c8;
  undefined8 uStack_5c5;
  undefined4 local_580;
  undefined1 local_57c;
  undefined **local_578;
  undefined **appuStack_570 [36];
  undefined ***local_450;
  int local_448;
  undefined1 local_440;
  undefined8 local_438;
  longlong *local_430;
  longlong local_428;
  undefined4 local_420;
  undefined8 local_410;
  longlong *local_408 [36];
  longlong **local_2e8;
  int local_2e0;
  undefined1 local_2d8;
  undefined8 local_2d0;
  longlong *local_2c8;
  longlong local_2c0;
  int local_2b8;
  undefined4 local_2b4;
  char local_2b0 [8];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_290;
  undefined1 local_288 [136];
  undefined4 local_200;
  undefined1 local_1fc;
  undefined **local_1f8;
  undefined8 uStack_1f0;
  undefined **ppuStack_1e8;
  undefined ***pppuStack_1e0;
  undefined **local_1d8;
  undefined **ppuStack_1d0;
  undefined **local_1c8;
  undefined **ppuStack_1c0;
  undefined **local_1b8;
  undefined **local_1b0;
  undefined **ppuStack_1a8;
  undefined **local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined3 uStack_190;
  undefined8 uStack_18d;
  undefined8 local_178;
  longlong *local_170;
  longlong *local_140;
  longlong *local_138;
  undefined **local_130;
  undefined **local_128;
  char local_120;
  char local_118;
  undefined7 uStack_117;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_f8;
  undefined1 local_f0 [136];
  undefined4 local_68;
  undefined1 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_808;
  *(int *)(param_1 + 199) = (int)param_1[199] + 1;
  local_7d0 = param_1;
  if (*(int *)(param_3 + 0x130) < 1) {
    local_6f8 = param_4[3];
    local_708 = param_4[1];
    ppuStack_700 = param_4[2];
    local_710 = &PTR_FUN_149eda650;
    local_6f0 = param_4[4];
    ppuStack_6e8 = param_4[5];
    local_6e0 = param_4[6];
    ppuStack_6d8 = param_4[7];
    local_6d0 = param_4[8];
    local_6c8 = param_4[9];
    local_6c0 = param_4[10];
    if (local_6c0 != (undefined **)0x0) {
      LOCK();
      *(int *)(local_6c0 + 1) = *(int *)(local_6c0 + 1) + 1;
      UNLOCK();
    }
    ppuStack_6b8 = param_4[0xb];
    uStack_6a5 = *(undefined8 *)((longlong)param_4 + 0x6b);
    uStack_6a8 = (undefined3)((ulonglong)*(undefined8 *)((longlong)param_4 + 99) >> 0x28);
    uStack_6b0 = SUB83(param_4[0xc],0);
    local_6ad = (undefined5)((ulonglong)param_4[0xc] >> 0x18);
  }
  else {
    puVar19 = param_3 + 8;
    if (*(undefined1 **)(param_3 + 0x128) != (undefined1 *)0x0) {
      puVar19 = *(undefined1 **)(param_3 + 0x128);
    }
    local_410 = *(undefined8 *)(puVar19 + 0x38);
    plVar20 = *(longlong **)(puVar19 + 0x40);
    if (plVar20 == (longlong *)0x0) {
      local_408[0] = (longlong *)0x0;
      FUN_1403d09a4(param_1,&local_710,param_4);
    }
    else {
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar20 + 1) = (int)plVar20[1] + 1;
      UNLOCK();
      local_408[0] = plVar20;
      FUN_1403d09a4(param_1,&local_710,param_4);
      if (plVar20 != (longlong *)0x0) {
        LOCK();
        plVar23 = plVar20 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*plVar20)(plVar20);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      LOCK();
      plVar23 = plVar20 + 1;
      *(int *)plVar23 = (int)*plVar23 + -1;
      UNLOCK();
      if ((int)*plVar23 == 0) {
        (**(code **)*plVar20)(plVar20);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
  }
  plVar20 = local_7d0;
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
  iVar8 = *(int *)((longlong)param_4 + 0xc);
  if (((longlong)iVar8 < 0) || ((int)plVar20[99] <= iVar8)) {
LAB_14122a132:
    FUN_141370954(plVar20,&local_720,iVar8,0);
  }
  else {
    lVar16 = (longlong)iVar8 * 0x10;
    lVar21 = *(longlong *)(plVar20[0x62] + lVar16);
    plVar23 = *(longlong **)(plVar20[0x62] + 8 + lVar16);
    if (plVar23 == (longlong *)0x0) {
      if (lVar21 == 0) goto LAB_14122a132;
      local_718 = (longlong *)0x0;
      local_720 = lVar21;
    }
    else {
      LOCK();
      *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
      UNLOCK();
      if (lVar21 != 0) {
        LOCK();
        *(int *)(plVar23 + 1) = (int)plVar23[1] + 1;
        UNLOCK();
        local_720 = lVar21;
        local_718 = plVar23;
      }
      LOCK();
      plVar4 = plVar23 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar23)(plVar23);
        LOCK();
        piVar2 = (int *)((longlong)plVar23 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar23 + 0x10))(plVar23);
        }
      }
      if (lVar21 == 0) goto LAB_14122a132;
    }
  }
  plVar20 = *(longlong **)(local_720 + 0x1e8);
  if (plVar20 == (longlong *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = (**(code **)(*plVar20 + 8))(plVar20,param_4);
  }
  local_410 = CONCAT71(local_410._1_7_,*param_3);
  local_2e8 = (longlong **)0x0;
  puVar19 = param_3 + 8;
  if (*(undefined1 **)(param_3 + 0x128) != (undefined1 *)0x0) {
    puVar19 = *(undefined1 **)(param_3 + 0x128);
  }
  FUN_1401bb78c(local_408,puVar19,*(undefined4 *)(param_3 + 0x130),0);
  local_2d8 = param_3[0x138];
  local_2d0 = *(undefined8 *)(param_3 + 0x140);
  local_2c8 = *(longlong **)(param_3 + 0x148);
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_2c8 + 1) = (int)local_2c8[1] + 1;
    UNLOCK();
  }
  local_2c0 = 0;
  iVar8 = *(int *)(param_3 + 0x158);
  uVar10 = *(undefined8 *)(param_3 + 0x150);
  local_2b8 = iVar8;
  if (iVar8 == 0) {
    local_2b4 = 0;
  }
  else {
    FUN_1401bb8da(&local_2c0,iVar8,0);
    FUN_1401bb89d(local_2c0,uVar10,iVar8);
  }
  lVar21 = local_720;
  uVar9 = *(undefined4 *)(param_4 + 0xb);
  cVar12 = FUN_1408025c4(local_720);
  plVar20 = local_7d0;
  if (cVar12 == '\0') {
    local_7b8 = (undefined1 *)CONCAT44(local_7b8._4_4_,uVar15);
    if (local_2e0 < 1) {
      uVar15 = *(undefined4 *)(lVar21 + 0x18);
      FUN_1401b43e8(local_7d0,&local_118);
      local_7e8 = (undefined ***)((ulonglong)local_7e8 & 0xffffffffffffff00);
      local_7e0 = uVar15;
      (**(code **)(*plVar20 + 0x108))(plVar20,&local_578,param_4[4],&local_118);
      local_410 = CONCAT71(local_410._1_7_,local_578._0_1_);
      FUN_1400e223c(local_408,appuStack_570);
      plVar23 = local_2c8;
      plVar20 = local_430;
      local_2d8 = local_440;
      local_2d0 = local_438;
      local_438 = 0;
      if (local_430 != local_2c8) {
        local_430 = (longlong *)0x0;
        local_2c8 = plVar20;
        if (plVar23 != (longlong *)0x0) {
          LOCK();
          plVar20 = plVar23 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
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
      }
      FUN_1400e21ec(&local_2c0,&local_428);
      FUN_1447fa2ac(local_428,local_420);
      if (local_428 != 0) {
        FUN_1400020a8();
      }
      plVar20 = local_430;
      if (local_430 != (longlong *)0x0) {
        LOCK();
        plVar23 = local_430 + 1;
        *(int *)plVar23 = (int)*plVar23 + -1;
        UNLOCK();
        if ((int)*plVar23 == 0) {
          (**(code **)*local_430)(local_430);
          LOCK();
          piVar2 = (int *)((longlong)plVar20 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar20 + 0x10))(plVar20);
          }
        }
      }
      pppuVar17 = appuStack_570;
      if (local_450 != (undefined ***)0x0) {
        pppuVar17 = local_450;
      }
      FUN_1447157bd(pppuVar17,local_448);
      if (local_450 != (undefined ***)0x0) {
        FUN_1400020a8();
      }
      FUN_1401b439d(CONCAT71(uStack_117,local_118));
      if (CONCAT71(uStack_117,local_118) != 0) {
        FUN_1400020a8();
      }
    }
    if ((char)local_7b8 == '\0') {
      local_7c8 = (longlong *)0x0;
      local_7b0 = 0;
    }
    else {
      if (DAT_14c75ef41 == '\x01') {
        FUN_1403cd6b2(local_7d0,&local_410,param_4,1);
      }
      local_7b0 = *(undefined8 *)(local_720 + 0x1e8);
      local_7c8 = *(longlong **)(local_720 + 0x1f0);
      if (local_7c8 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
        UNLOCK();
      }
      FUN_145e0f546(local_720);
    }
    local_678 = local_708;
    ppuStack_670 = ppuStack_700;
    local_778 = local_6f0;
    ppuStack_770 = ppuStack_6e8;
    local_768 = local_6e0;
    uStack_760 = ppuStack_6d8;
    local_7a0 = local_6d0;
    local_7a8 = local_6c8;
    local_7c0 = local_6c0;
    if (local_6c0 != (undefined **)0x0) {
      LOCK();
      *(int *)(local_6c0 + 1) = *(int *)(local_6c0 + 1) + 1;
      UNLOCK();
    }
    uStack_688 = uStack_6a8;
    uStack_685 = uStack_6a5;
    uStack_698 = ppuStack_6b8;
    uStack_690 = (undefined4)CONCAT53(local_6ad,uStack_6b0);
    uStack_68c = (undefined4)((uint5)local_6ad >> 8);
    uVar22 = (ulonglong)local_2e0;
    local_2b0[0] = '\0';
    local_290 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    memset(local_288,0,0x88);
    local_200 = 0x20702;
    local_1fc = 0;
    if (0 < (longlong)uVar22) {
      lVar21 = uVar22 * 0x48 + -8;
      lVar16 = uVar22 * 0x14 + -4;
      do {
        cVar12 = *(char *)(local_2c0 + lVar16);
        if (cVar12 == '\x01') {
          local_578 = *(undefined ***)(local_2c0 + lVar16 + -0x10);
          appuStack_570[0] = *(undefined ***)(local_2c0 + lVar16 + -8);
        }
        pplVar18 = local_2e8;
        if (local_2e8 == (longlong **)0x0) {
          pplVar18 = local_408;
        }
        puVar5 = (undefined8 *)((longlong)pplVar18 + lVar21 + -0x40);
        puVar6 = (undefined8 *)((longlong)pplVar18 + lVar21 + -0x30);
        puVar7 = (undefined8 *)((longlong)pplVar18 + lVar21 + -0x20);
        local_1f8 = (undefined **)*puVar5;
        uStack_1f0 = (undefined **)puVar5[1];
        ppuStack_1e8 = (undefined **)*puVar6;
        pppuStack_1e0 = (undefined ***)puVar6[1];
        local_1d8 = (undefined **)*puVar7;
        ppuStack_1d0 = (undefined **)puVar7[1];
        local_1c8 = *(undefined ***)((longlong)pplVar18 + lVar21 + -0x10);
        ppuStack_1c0 = *(undefined ***)((longlong)pplVar18 + lVar21 + -8);
        local_1b8 = *(undefined ***)((longlong)pplVar18 + lVar21);
        if (local_1b8 != (undefined **)0x0) {
          LOCK();
          *(int *)(local_1b8 + 1) = *(int *)(local_1b8 + 1) + 1;
          UNLOCK();
        }
        local_1a0 = (undefined **)CONCAT71(local_1a0._1_7_,cVar12);
        if (cVar12 == '\0') {
          local_610 = local_778;
          ppuStack_608 = ppuStack_770;
          if (local_7c0 != (undefined **)0x0) {
            LOCK();
            *(int *)(local_7c0 + 1) = *(int *)(local_7c0 + 1) + 1;
            UNLOCK();
          }
        }
        else {
          local_1b0 = local_578;
          ppuStack_1a8 = appuStack_570[0];
          local_610 = local_578;
          ppuStack_608 = appuStack_570[0];
          if (local_7c0 != (undefined **)0x0) {
            LOCK();
            *(int *)(local_7c0 + 1) = *(int *)(local_7c0 + 1) + 1;
            UNLOCK();
          }
        }
        uStack_5c8 = uStack_688;
        local_618 = &local_410;
        uStack_5c5 = uStack_685;
        uStack_5cc = uStack_68c;
        uStack_5d0 = uStack_690;
        uStack_5d4 = uStack_698._4_4_;
        uStack_5d8 = (undefined4)uStack_698;
        local_5e8 = local_7a8;
        local_5f0 = local_7a0;
        uStack_5f4 = uStack_760._4_4_;
        uStack_5f8 = (undefined4)uStack_760;
        uStack_5fc = local_768._4_4_;
        local_600 = (undefined4)local_768;
        ppuStack_620 = ppuStack_670;
        local_628 = local_678;
        local_5e0 = local_7c0;
        local_630 = &PTR_FUN_149eda650;
        local_798 = lVar16;
        local_790 = uVar22;
        if ((char)local_7b8 == '\0') {
          local_118 = '\0';
          local_f8 = 0;
          local_110 = 0;
          uStack_108 = 0;
          memset(local_f0,0,0x88);
          local_68 = 0x20702;
          local_64 = 0;
          if ((byte)uStack_5cc == 1) {
            (**(code **)(*ppuStack_1c0 + 0xf8))(ppuStack_1c0,&local_578,&local_1f8,&local_630);
            FUN_1403d4924(&local_118,&local_578);
            FUN_14493db24(&local_578);
          }
          if ((((byte)uStack_5cc & 1) == 0) ||
             ((local_118 == '\0' && ((char)local_7d0[0x9d] == '\x01')))) {
            (**(code **)(*ppuStack_1c0 + 0x68))(ppuStack_1c0,&local_578,&local_1f8,&local_630);
            FUN_1403d4924(&local_118,&local_578);
            FUN_14493db24(&local_578);
          }
        }
        else {
          local_178 = local_7b0;
          local_170 = local_7c8;
          if (local_7c8 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
            UNLOCK();
          }
          FUN_1403d061a(&local_578,&local_630,&local_178);
          (**(code **)(*ppuStack_1c0 + 0xd8))(ppuStack_1c0,&local_118,&local_1f8,&local_578);
          FUN_1469ac82c(&local_578);
        }
        FUN_1402c173a(&local_118,&ppuStack_1c0);
        FUN_1402c17c2(local_2b0,&local_118);
        FUN_14493db24(&local_118);
        local_7e0 = local_628._4_4_;
        local_7e8 = &local_630;
        FUN_1402c1d72(local_7d0,&local_410,local_2b0,&local_410);
        ppuVar3 = local_5e0;
        local_630 = &PTR_FUN_149eda650;
        if (local_5e0 != (undefined **)0x0) {
          LOCK();
          ppuVar1 = local_5e0 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*local_5e0)(local_5e0);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
            }
          }
        }
        ppuVar3 = local_1b8;
        lVar16 = local_798;
        if ((char)local_1a0 == '\x01') {
          local_1a0 = (undefined **)((ulonglong)local_1a0 & 0xffffffffffffff00);
        }
        if (local_1b8 != (undefined **)0x0) {
          LOCK();
          ppuVar1 = local_1b8 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*local_1b8)(local_1b8);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
            }
          }
        }
        if (local_790 < 2) break;
        lVar21 = lVar21 + -0x48;
        lVar16 = lVar16 + -0x14;
        uVar22 = local_790 - 1;
      } while (local_2b0[0] == '\0');
    }
    ppuVar3 = local_7c0;
    if (local_7c0 != (undefined **)0x0) {
      LOCK();
      ppuVar1 = local_7c0 + 1;
      *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
      UNLOCK();
      if (*(int *)ppuVar1 == 0) {
        (**(code **)*local_7c0)(local_7c0);
        LOCK();
        piVar2 = (int *)((longlong)ppuVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
        }
      }
    }
    FUN_1403d4924(param_2,local_2b0);
    FUN_14493db24(local_2b0);
    plVar20 = local_7c8;
    uVar14 = *param_2;
    local_788 = local_7b0;
    plStack_780 = local_7c8;
    plVar23 = local_7d0;
    if (local_7c8 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_7c8 + 1) = (int)local_7c8[1] + 1;
      UNLOCK();
      local_7e8 = (undefined ***)CONCAT71(local_7e8._1_7_,uVar14);
      FUN_14122a7a6(local_720,param_4,&local_410,&local_788);
      FUN_1447fa21a(&local_410);
      plVar4 = local_7c8;
      plVar23 = local_7d0;
      LOCK();
      plVar20 = plVar20 + 1;
      *(int *)plVar20 = (int)*plVar20 + -1;
      UNLOCK();
      if ((int)*plVar20 == 0) {
        (**(code **)*local_7c8)(local_7c8);
        LOCK();
        piVar2 = (int *)((longlong)plVar4 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*local_7c8 + 0x10))();
        }
      }
      goto LAB_1412299d6;
    }
  }
  else {
    local_7e8 = param_4;
    FUN_1403d06e2(lVar21,&local_578,uVar9,0);
    iVar8 = local_448;
    ppuVar11 = local_6c0;
    ppuVar1 = local_6c8;
    ppuVar3 = local_6d0;
    if (0 < local_448) {
      local_648 = local_708;
      ppuStack_640 = ppuStack_700;
      local_748 = local_6f0;
      ppuStack_740 = ppuStack_6e8;
      local_738 = local_6e0;
      ppuStack_730 = ppuStack_6d8;
      if (local_6c0 != (undefined **)0x0) {
        LOCK();
        *(int *)(local_6c0 + 1) = *(int *)(local_6c0 + 1) + 1;
        UNLOCK();
      }
      uStack_658 = uStack_6a8;
      uStack_655 = uStack_6a5;
      ppuStack_668 = ppuStack_6b8;
      uStack_660 = uStack_6b0;
      local_65d = local_6ad;
      local_758[0] = 0;
      local_630 = (undefined **)((ulonglong)local_630 & 0xffffffffffffff00);
      local_610 = (undefined **)((ulonglong)local_610 & 0xffffffffffffff00);
      local_628 = (undefined **)0x0;
      ppuStack_620 = (undefined **)0x0;
      local_7b8 = param_2;
      local_750 = &local_578;
      memset(&ppuStack_608,0,0x88);
      local_580 = 0x20702;
      local_57c = 0;
      if (0 < iVar8) {
        FUN_1403d08d6(local_758);
        plVar20 = local_7d0;
        uStack_194 = (undefined4)((uint5)local_65d >> 8);
        if (local_120 == '\x01') {
          local_1d8 = local_130;
          ppuStack_1d0 = local_128;
          if (ppuVar11 != (undefined **)0x0) {
            LOCK();
            *(int *)(ppuVar11 + 1) = *(int *)(ppuVar11 + 1) + 1;
            UNLOCK();
          }
          uStack_198 = (undefined4)CONCAT53(local_65d,uStack_660);
        }
        else {
          local_1d8 = local_748;
          ppuStack_1d0 = ppuStack_740;
          if (ppuVar11 != (undefined **)0x0) {
            LOCK();
            *(int *)(ppuVar11 + 1) = *(int *)(ppuVar11 + 1) + 1;
            UNLOCK();
          }
          uStack_198 = (undefined4)CONCAT53(local_65d,uStack_660);
        }
        uStack_18d = uStack_655;
        uStack_190 = uStack_658;
        local_1a0 = ppuStack_668;
        ppuStack_1a8 = ppuVar11;
        local_1b0 = ppuVar1;
        local_1b8 = ppuVar3;
        ppuStack_1c0 = ppuStack_730;
        local_1c8 = local_738;
        ppuStack_1e8 = ppuStack_640;
        uStack_1f0 = local_648;
        local_1f8 = &PTR_FUN_149eda650;
        local_2b0[0] = '\0';
        local_290 = 0;
        local_2a8 = 0;
        uStack_2a0 = 0;
        pppuStack_1e0 = &local_578;
        memset(local_288,0,0x88);
        local_200 = 0x20702;
        local_1fc = 0;
        if ((byte)uStack_194 == 1) {
          (**(code **)(*local_140 + 0xf8))(local_140,&local_118,&local_178,&local_1f8);
          FUN_1403d4924(local_2b0,&local_118);
          FUN_14493db24(&local_118);
        }
        if ((((byte)uStack_194 & 1) == 0) ||
           ((plVar20 = local_7d0, bVar13 = (byte)uStack_194, local_2b0[0] == '\0' &&
            ((char)local_7d0[0x9d] == '\x01')))) {
          (**(code **)(*local_140 + 0x68))(local_140,&local_118,&local_178,&local_1f8);
          FUN_1403d4924(local_2b0,&local_118);
          FUN_14493db24(&local_118);
          bVar13 = (byte)uStack_194;
        }
        if (((bVar13 & 1) != 0) &&
           ((*(char *)((longlong)plVar20 + 0x4c3) != '\x01' ||
            (((char)plVar20[0x98] == '\0' && (*(char *)((longlong)plVar20 + 0x4c1) == '\0')))))) {
          (**(code **)(*local_140 + 0x80))(local_140,&local_1f8);
        }
        FUN_1402c173a(local_2b0,&local_140);
        FUN_1402c17c2(&local_630,local_2b0);
        FUN_14493db24(local_2b0);
        local_7e8 = &local_1f8;
        local_7e0 = uStack_1f0._4_4_;
        FUN_1402c1d72(plVar20,&local_578,&local_630,&local_578);
        ppuVar3 = ppuStack_1a8;
        local_1f8 = &PTR_FUN_149eda650;
        if (ppuStack_1a8 != (undefined **)0x0) {
          LOCK();
          ppuVar1 = ppuStack_1a8 + 1;
          *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
          UNLOCK();
          if (*(int *)ppuVar1 == 0) {
            (**(code **)*ppuStack_1a8)(ppuStack_1a8);
            LOCK();
            piVar2 = (int *)((longlong)ppuVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
            }
          }
        }
        if (local_120 == '\x01') {
          local_120 = '\0';
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar20 = local_138 + 1;
          *(int *)plVar20 = (int)*plVar20 + -1;
          UNLOCK();
          if ((int)*plVar20 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar2 = (int *)((longlong)local_138 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_138 + 0x10))(local_138);
            }
          }
        }
        local_758[0] = 1;
      }
      if (ppuVar11 != (undefined **)0x0) {
        LOCK();
        ppuVar3 = ppuVar11 + 1;
        *(int *)ppuVar3 = *(int *)ppuVar3 + -1;
        UNLOCK();
        if (*(int *)ppuVar3 == 0) {
          (**(code **)*ppuVar11)(ppuVar11);
          LOCK();
          piVar2 = (int *)((longlong)ppuVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*ppuVar11 + 0x10))(ppuVar11);
          }
        }
      }
      param_2 = local_7b8;
      FUN_1403d4924(local_7b8,&local_630);
      FUN_14493db24(&local_630);
    }
    FUN_1447fa2ac(local_428,local_420);
    if (local_428 != 0) {
      FUN_1400020a8();
    }
    plVar20 = local_430;
    plVar23 = local_7d0;
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_430 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar2 = (int *)((longlong)plVar20 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar20 + 0x10))(plVar20);
        }
      }
    }
    pppuVar17 = local_450;
    if (local_450 == (undefined ***)0x0) {
      pppuVar17 = appuStack_570;
    }
    FUN_1447157bd(pppuVar17,local_448);
    if (local_450 != (undefined ***)0x0) {
      FUN_1400020a8();
    }
    uVar14 = *param_2;
    local_788 = 0;
    plStack_780 = (longlong *)0x0;
  }
  local_7e8 = (undefined ***)CONCAT71(local_7e8._1_7_,uVar14);
  FUN_14122a7a6(local_720,param_4,&local_410,&local_788);
  FUN_1447fa2ac(local_2c0,local_2b8);
  if (local_2c0 != 0) {
    FUN_1400020a8();
  }
  plVar20 = local_2c8;
  if (local_2c8 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_2c8 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_2c8)(local_2c8);
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  pplVar18 = local_408;
  if (local_2e8 != (longlong **)0x0) {
    pplVar18 = local_2e8;
  }
  FUN_1447157bd(pplVar18,local_2e0);
  if (local_2e8 != (longlong **)0x0) {
    FUN_1400020a8();
  }
LAB_1412299d6:
  plVar20 = local_718;
  if (local_718 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_718 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_718)(local_718);
      LOCK();
      piVar2 = (int *)((longlong)plVar20 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar20 + 0x10))(plVar20);
      }
    }
  }
  ppuVar3 = local_6c0;
  local_710 = &PTR_FUN_149eda650;
  if (local_6c0 != (undefined **)0x0) {
    LOCK();
    ppuVar1 = local_6c0 + 1;
    *(int *)ppuVar1 = *(int *)ppuVar1 + -1;
    UNLOCK();
    if (*(int *)ppuVar1 == 0) {
      (**(code **)*local_6c0)(local_6c0);
      LOCK();
      piVar2 = (int *)((longlong)ppuVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*ppuVar3 + 0x10))(ppuVar3);
      }
    }
  }
  *(int *)(plVar23 + 199) = (int)plVar23[199] + -1;
  if ((local_60 ^ (ulonglong)auStack_808) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14122a7a6 FUN_14122a7a6 body=1173 status=ok
// SIG undefined FUN_14122a7a6(void)

void FUN_14122a7a6(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  undefined **local_c0;
  double local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined3 uStack_58;
  undefined4 uStack_55;
  undefined4 uStack_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *(uint *)(param_2 + 0x58);
  local_d0 = param_3;
  if (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc)) {
    lVar12 = *(longlong *)(param_1 + 0x1d8);
    if (*(longlong *)(param_1 + 0x1d8) == 0) {
      lVar12 = param_1 + 0x1d0;
    }
    iVar7 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x1e0) - 1U & uVar3) * 4);
    if (iVar7 != -1) {
      plVar2 = (longlong *)(param_1 + 0x198);
      do {
        lVar12 = *plVar2 + (longlong)iVar7 * 0x58;
        if (*(uint *)(*plVar2 + (longlong)iVar7 * 0x58) == uVar3) {
          if ((lVar12 != 0) && (lVar12 != -8)) {
            lVar4 = *(longlong *)(param_2 + 0x40);
            plVar5 = *(longlong **)(param_2 + 0x50);
            if (plVar5 == (longlong *)0x0) {
              lVar12 = *(longlong *)(lVar12 + 0x30);
            }
            else {
              LOCK();
              *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
              UNLOCK();
              local_c8 = *(longlong *)(lVar12 + 0x30);
              LOCK();
              plVar1 = plVar5 + 1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              lVar12 = local_c8;
              if ((int)*plVar1 == 0) {
                (**(code **)*plVar5)(plVar5);
                LOCK();
                piVar11 = (int *)((longlong)plVar5 + 0xc);
                *piVar11 = *piVar11 + -1;
                UNLOCK();
                lVar12 = local_c8;
                if (*piVar11 == 0) {
                  (**(code **)(*plVar5 + 0x10))(plVar5);
                  lVar12 = local_c8;
                }
              }
            }
            if ((lVar12 == lVar4) && (*(int *)(param_1 + 0x1a0) != *(int *)(param_1 + 0x1cc))) {
              lVar12 = param_1 + 0x1d0;
              if (*(longlong *)(param_1 + 0x1d8) != 0) {
                lVar12 = *(longlong *)(param_1 + 0x1d8);
              }
              iVar7 = *(int *)(lVar12 + ((longlong)*(int *)(param_1 + 0x1e0) - 1U &
                                        (longlong)(int)uVar3) * 4);
              if (iVar7 != -1) {
                lVar4 = *plVar2;
                goto LAB_14122aad0;
              }
            }
          }
          break;
        }
        iVar7 = *(int *)(lVar12 + 0x50);
      } while (iVar7 != -1);
    }
  }
  goto LAB_14122a859;
  while (iVar7 = *(int *)(lVar8 + 0x50), iVar7 != -1) {
LAB_14122aad0:
    lVar9 = (longlong)iVar7 * 0x58;
    lVar8 = lVar4 + lVar9;
    if (*(uint *)(lVar4 + lVar9) == uVar3) {
      iVar10 = *(int *)(lVar12 + (longlong)*(int *)(lVar8 + 0x54) * 4);
      if (iVar10 == iVar7) {
        piVar11 = (int *)((longlong)*(int *)(lVar8 + 0x54) * 4 + lVar12);
      }
      else {
        do {
          piVar11 = (int *)(lVar4 + (longlong)iVar10 * 0x58 + 0x50);
          iVar10 = *piVar11;
        } while (iVar10 != iVar7);
      }
      *piVar11 = *(int *)(lVar8 + 0x50);
      lVar9 = *plVar2 + lVar9;
      plVar5 = *(longlong **)(lVar9 + 0x40);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar5 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar11 = (int *)((longlong)plVar5 + 0xc);
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (*piVar11 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      plVar5 = *(longlong **)(lVar9 + 0x20);
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        piVar11 = (int *)((longlong)plVar5 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*plVar5 + 0x10))();
        }
      }
      FUN_1447de57f(*(longlong *)(lVar9 + 8),*(undefined4 *)(lVar9 + 0x10));
      if (*(longlong *)(lVar9 + 8) != 0) {
        FUN_1400020a8();
      }
      FUN_140cbeb72(plVar2,iVar7);
      break;
    }
  }
LAB_14122a859:
  cVar6 = FUN_1408025c4(param_1,uVar3);
  if (cVar6 == '\0') {
    if (((*(char *)(param_2 + 100) == '\x01') &&
        (cVar6 = FUN_1414dd3b0(DAT_14c98e618), cVar6 == '\0')) &&
       (lVar12 = (longlong)*(int *)(local_d0 + 0x130), 0 < lVar12)) {
      lVar4 = local_d0 + 8;
      uVar13 = lVar12 + 1;
      lVar12 = lVar12 * 0x48 + -0x10;
      do {
        lVar8 = *(longlong *)(local_d0 + 0x128);
        if (*(longlong *)(local_d0 + 0x128) == 0) {
          lVar8 = lVar4;
        }
        (**(code **)(**(longlong **)(lVar8 + lVar12) + 0x80))
                  (*(longlong **)(lVar8 + lVar12),param_2);
        uVar13 = uVar13 - 1;
        lVar12 = lVar12 + -0x48;
      } while (1 < uVar13);
    }
    plVar2 = (longlong *)*param_4;
    if ((plVar2 != (longlong *)0x0) &&
       (cVar6 = (**(code **)(*plVar2 + 8))(plVar2,param_2), cVar6 != '\0')) {
      local_b8 = *(double *)(param_2 + 8);
      uStack_b0 = *(undefined8 *)(param_2 + 0x10);
      local_c0 = &PTR_FUN_149eda650;
      local_a0 = *(undefined8 *)(param_2 + 0x20);
      uStack_98 = *(undefined8 *)(param_2 + 0x28);
      local_90 = *(undefined8 *)(param_2 + 0x30);
      uStack_88 = *(undefined8 *)(param_2 + 0x38);
      local_80 = *(undefined8 *)(param_2 + 0x40);
      local_78 = *(undefined8 *)(param_2 + 0x48);
      local_70 = *(longlong **)(param_2 + 0x50);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        *(int *)(local_70 + 1) = (int)local_70[1] + 1;
        UNLOCK();
      }
      uStack_68 = *(undefined4 *)(param_2 + 0x58);
      uStack_64 = *(undefined4 *)(param_2 + 0x5c);
      uStack_60 = *(undefined4 *)(param_2 + 0x60);
      uStack_5c = *(undefined4 *)(param_2 + 100);
      uStack_55 = *(undefined4 *)(param_2 + 0x6b);
      uStack_51 = *(undefined4 *)(param_2 + 0x6f);
      uStack_58 = (undefined3)((uint)*(undefined4 *)(param_2 + 0x67) >> 8);
      local_a8 = local_d0;
      (**(code **)(*(longlong *)*param_4 + 0x10))((longlong *)*param_4,param_5,&local_c0);
      FUN_140d9616e(param_1 + 0x208,uVar3);
      plVar2 = local_70;
      local_c0 = &PTR_FUN_149eda650;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar5 = local_70 + 1;
        *(int *)plVar5 = (int)*plVar5 + -1;
        UNLOCK();
        if ((int)*plVar5 == 0) {
          (**(code **)*local_70)(local_70);
          LOCK();
          piVar11 = (int *)((longlong)plVar2 + 0xc);
          *piVar11 = *piVar11 + -1;
          UNLOCK();
          if (*piVar11 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
    }
  }
  if (*(char *)(param_2 + 100) == '\x01') {
    local_b8 = (double)*(float *)(param_2 + 0x24);
    local_c0 = (undefined **)(double)*(float *)(param_2 + 0x20);
    FUN_1469a4e7c(param_1 + 0x2e8,uVar3);
    FUN_140d95e8c(param_1,uVar3);
    FUN_1469e66a8(param_1 + 0xa8,uVar3);
    FUN_1469e66a8(param_1 + 0xf8,uVar3);
    FUN_140d9616e(param_1 + 0x208,uVar3);
  }
  plVar2 = (longlong *)param_4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar11 = (int *)((longlong)plVar2 + 0xc);
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (*piVar11 == 0) {
        (**(code **)(*plVar2 + 0x10))(plVar2);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122ac3c FUN_14122ac3c body=755 status=ok
// SIG undefined FUN_14122ac3c(void)

undefined8 * FUN_14122ac3c(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined2 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  code **local_60;
  undefined1 *local_58;
  code *local_50;
  longlong *local_48;
  longlong *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_40 = (longlong *)FUN_14001cc68(0x88,0x10);
  local_40[1] = (longlong)&DAT_100000001;
  *local_40 = (longlong)&PTR_FUN_14b9a2be0;
  local_48 = local_40 + 2;
  local_40[3] = 0;
  local_40[4] = 0;
  local_40[2] = (longlong)&PTR_FUN_14b430d90;
  *(undefined1 *)((longlong)local_40 + 0x2c) = 0;
  *(undefined1 *)(local_40 + 6) = 0;
  local_40[7] = 0;
  local_40[8] = *(longlong *)(param_3 + 8);
  lVar5 = *(longlong *)(param_3 + 0x10);
  local_40[9] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  *(undefined8 *)((longlong)local_40 + 0x5c) = 0;
  *(undefined8 *)((longlong)local_40 + 100) = 0;
  local_40[10] = 0;
  local_40[0xb] = 0;
  *(undefined1 *)(local_40 + 6) = 1;
  local_40[2] = (longlong)&PTR_FUN_14b9a2c00;
  *(undefined1 *)(local_40 + 0xe) = 0;
  local_40[0xf] = 0;
  local_40[0x10] = 0;
  *(undefined4 *)(local_40 + 5) = 1;
  *(undefined1 *)((longlong)local_40 + 0x2c) = 1;
  FUN_14122af30();
  lVar5 = FUN_140eb4c46(*(undefined8 *)(param_3 + 8));
  if (lVar5 != 0) {
    if (DAT_14cba8288 == 0) {
      local_60 = &local_38;
      local_38 = FUN_141864c34;
      local_50 = FUN_14081d0ea;
      local_58 = &LAB_1464cee30;
      local_68 = &LAB_148bfac22;
      local_70 = &LAB_140f21842;
      local_78 = &DAT_149e063b2;
      local_80 = 0;
      local_88 = 0x10000004;
      local_90 = 0x10;
      local_98 = 0x9cd0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
    }
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      uVar3 = *(uint *)(lVar5 + 0xc);
      *(uint *)(local_48 + 0xe) = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      plVar7 = local_48 + 0xe;
      iVar4 = *(int *)(lVar5 + 0x10);
      if (*(int *)(lVar5 + 0x10) == 0) {
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
        iVar4 = *(int *)(lVar5 + 0x10);
        bVar8 = iVar4 == 0;
        if (bVar8) {
          *(int *)(lVar5 + 0x10) = iVar6;
          iVar4 = 0;
        }
        UNLOCK();
        if (bVar8) {
          iVar4 = iVar6;
        }
      }
      goto LAB_14122ad8b;
    }
  }
  *(undefined4 *)(local_48 + 0xe) = 0;
  plVar7 = local_48 + 0xe;
  iVar4 = 0;
LAB_14122ad8b:
  *(int *)((longlong)plVar7 + 4) = iVar4;
  *(undefined1 *)(local_48 + 0xc) = *(undefined1 *)(param_1 + 0x30);
  lVar5 = FUN_1405faa04(param_1 + 0x38);
  plVar7 = local_40;
  local_48[0xd] = lVar5;
  *param_2 = local_48;
  param_2[1] = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    UNLOCK();
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar7 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14122af30 FUN_14122af30 body=162 status=ok
// SIG undefined FUN_14122af30(void)

void FUN_14122af30(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_14122af6f;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_14122af6f;
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
LAB_14122af6f:
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
                    /* WARNING: Could not recover jumptable at 0x00014122afce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 14122afd2 FUN_14122afd2 body=2160 status=ok
// SIG undefined FUN_14122afd2(void)

void FUN_14122afd2(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  longlong *plVar6;
  int iVar7;
  byte *pbVar8;
  undefined1 *puVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  code *local_80;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_5d;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = (undefined1  [16])0x0;
  local_38 = 0;
  *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_48);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,local_48);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,local_48);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      local_48._0_8_ = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      local_48._8_8_ = 0;
    }
    else {
      (*pcVar4)(uVar3,param_2,local_48);
    }
  }
  puVar5 = *(undefined1 **)*(undefined1 (*) [16])(param_2 + 0x38);
  puVar9 = local_48;
  if (puVar5 != (undefined1 *)0x0) {
    puVar9 = puVar5;
  }
  uStack_50 = 0;
  uStack_49 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951cc8) && (FUN_144b3d300(&DAT_14c951cc8), DAT_14c951cc8 == -1)) {
    local_88 = (undefined1 *)FUN_1446ddbd2();
    local_80 = FUN_1468d96f0;
    local_90 = 0;
    local_98 = 0x4008001;
    FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
    atexit(FUN_14281144d);
    _Init_thread_footer(&DAT_14c951cc8);
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_50);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_50);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_50);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      uStack_50 = (undefined7)uVar3;
      uStack_49 = (undefined1)((ulonglong)uVar3 >> 0x38);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_50);
    }
  }
  uStack_54 = uStack_54 & 0xffffff;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9496d8) && (FUN_144b3d300(&DAT_14c9496d8), DAT_14c9496d8 == -1)) {
    local_88 = (undefined1 *)FUN_1446ddbd2();
    local_80 = FUN_140a4831c;
    local_98 = 0x1000000008001;
    local_90 = 0;
    FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
    atexit(FUN_1427e14fe);
    _Init_thread_footer(&DAT_14c9496d8);
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,(longlong)&uStack_54 + 3);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,(longlong)&uStack_54 + 3);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,(longlong)&uStack_54 + 3);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      uStack_54._3_1_ = (undefined1)uVar3;
      uStack_50 = (undefined7)((ulonglong)uVar3 >> 8);
    }
    else {
      (*pcVar4)(uVar3,param_2,(longlong)&uStack_54 + 3);
    }
  }
  uStack_58 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c9523c8) && (FUN_144b3d300(&DAT_14c9523c8), DAT_14c9523c8 == -1)) {
    FUN_14475b26a();
    local_80 = FUN_1408a629c;
    local_88 = &DAT_14c9520b8;
    local_90 = 0;
    local_98 = 0x1008101;
    FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
    atexit(FUN_14281708e);
    _Init_thread_footer(&DAT_14c9523c8);
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&uStack_58);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&uStack_58);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&uStack_58);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      uStack_58 = (undefined4)uVar3;
      uStack_54 = (uint)((ulonglong)uVar3 >> 0x20);
    }
    else {
      (*pcVar4)(uVar3,param_2,&uStack_58);
    }
  }
  iStack_5c = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c951d20) && (FUN_144b3d300(&DAT_14c951d20), DAT_14c951d20 == -1)) {
    local_88 = (undefined1 *)FUN_1446ddbd2();
    local_80 = FUN_14067a048;
    local_90 = 0;
    local_98 = 0x28001;
    FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
    atexit(FUN_142811fe5);
    _Init_thread_footer(&DAT_14c951d20);
  }
  pbVar8 = *(byte **)(param_2 + 0x20);
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&iStack_5c);
LAB_14122b2f9:
    pbVar8 = *(byte **)(param_2 + 0x20);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&iStack_5c);
      goto LAB_14122b2f9;
    }
    if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&iStack_5c);
      goto LAB_14122b2f9;
    }
    if (pcVar4 != (code *)&LAB_1428293cc) {
      (*pcVar4)(uVar3,param_2,&iStack_5c);
      goto LAB_14122b2f9;
    }
    uVar3 = *(undefined8 *)(pbVar8 + 1);
    pbVar8 = pbVar8 + 9;
    *(byte **)(param_2 + 0x20) = pbVar8;
    iStack_5c = (int)uVar3;
    uStack_58 = (undefined4)((ulonglong)uVar3 >> 0x20);
  }
  iVar7 = iStack_5c;
  local_5d = 0;
  *(undefined1 (*) [16])(param_2 + 0x38) = (undefined1  [16])0x0;
  if (pbVar8 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_5d);
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar8 + 1;
    pcVar4 = (code *)(&DAT_14c962c70)[*pbVar8];
    if (pcVar4 == FUN_14002ddda) {
      FUN_14002ddda(uVar3,param_2,&local_5d);
    }
    else if (pcVar4 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar3,param_2,&local_5d);
    }
    else if (pcVar4 == (code *)&LAB_1428293cc) {
      uVar3 = *(undefined8 *)(pbVar8 + 1);
      *(byte **)(param_2 + 0x20) = pbVar8 + 9;
      local_5d = (undefined1)uVar3;
      iStack_5c = (int)((ulonglong)uVar3 >> 8);
      uStack_58._0_3_ = (undefined3)((ulonglong)uVar3 >> 0x28);
    }
    else {
      (*pcVar4)(uVar3,param_2,&local_5d);
    }
  }
  local_88 = &local_5d;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_88 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_90 = CONCAT71(local_90._1_7_,iVar7 != 0);
  local_98 = CONCAT44(local_98._4_4_,uStack_58);
  FUN_14122b844(&local_70,puVar9,CONCAT17(uStack_49,uStack_50),uStack_54._3_1_);
  plVar1 = local_68;
  *param_3 = local_70;
  local_70 = 0;
  plVar6 = (longlong *)param_3[1];
  if (local_68 != plVar6) {
    local_68 = (longlong *)0x0;
    param_3[1] = plVar1;
    if (plVar6 == (longlong *)0x0) goto LAB_14122b3f8;
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
  plVar6 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
LAB_14122b3f8:
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14122b844 FUN_14122b844 body=814 status=ok
// SIG undefined FUN_14122b844(void)

longlong *
FUN_14122b844(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
             undefined4 param_5,undefined1 param_6,undefined8 param_7)

{
  int *piVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined1 local_c0;
  undefined1 *local_b8;
  undefined1 local_a1;
  char local_a0 [16];
  longlong *local_90;
  int local_78;
  char local_70;
  undefined8 local_68;
  longlong *local_60;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a0[0] = '\0';
  local_78 = 0;
  FUN_1456bb102(local_a0,param_3);
  local_70 = '\0';
  local_48 = 0;
  lVar6 = param_2[1];
  if (lVar6 == 0) {
    uVar5 = FUN_14016979c();
    lVar6 = FUN_14477b664(uVar5);
    param_2[1] = lVar6;
  }
  lVar7 = param_2[2];
  if (((lVar7 != 0) || (lVar7 = 0, lVar6 == 0)) || (*param_2 == 0)) goto LAB_14122b918;
  plVar2 = *(longlong **)(lVar6 + 0xb8);
  if (plVar2 == (longlong *)0x0) {
LAB_14122bb6c:
    lVar7 = 0;
  }
  else {
    cVar4 = (**(code **)(*plVar2 + 0x108))(plVar2);
    if (cVar4 == '\0') goto LAB_14122bb6c;
    uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar7 = FUN_144aff482(uVar5,param_2);
  }
  param_2[2] = lVar7;
LAB_14122b918:
  local_b8 = &local_a1;
  local_c0 = param_6;
  local_c8 = param_5;
  FUN_140c40077(param_1,lVar7,local_a0,param_4);
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_48 != 0) {
    lVar12 = (longlong)local_48 + -1;
    lVar7 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar6 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar7) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar9 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar9 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_48 = 0;
  }
  if (local_70 != '\0') {
    if (local_70 == '\x01') {
      local_68 = 0;
    }
    else if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_60 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_60 + 0x10))();
      }
    }
    local_70 = '\0';
  }
  lVar6 = DAT_14c9a3da0;
  if ((longlong)local_78 != 0) {
    lVar12 = (longlong)local_78 + -1;
    lVar7 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar7),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar7))
    ;
    if (*(longlong *)(lVar6 + lVar7) != 0) {
      FUN_1400020a8();
    }
    lVar6 = DAT_14c9a3da0;
    iVar11 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar11;
    }
    *(undefined4 *)(lVar6 + lVar7) = 0xffffffff;
    iVar9 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar9 = DAT_14c9a3dd0;
    }
    *(int *)(lVar6 + 4 + lVar7) = iVar9;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar10 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar10 = DAT_14c9a3dc0;
    }
    iVar9 = iVar11 + 0x1f;
    if (-1 < iVar11) {
      iVar9 = iVar11;
    }
    bVar3 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar11;
    *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) =
         *(uint *)(puVar10 + (longlong)(iVar9 >> 5) * 4) &
         (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
    local_78 = 0;
  }
  if ((local_a0[0] == '\x03') && (local_90 != (longlong *)0x0)) {
    LOCK();
    piVar1 = (int *)((longlong)local_90 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_90 + 0x10))();
    }
  }
  if (*param_1 == 0) {
    bVar8 = true;
  }
  else {
    bVar8 = *(int *)(*param_1 + 0x20) < 1;
  }
  *(bool *)param_7 = bVar8;
  if ((local_40 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122bb74 FUN_14122bb74 body=242 status=ok
// SIG undefined FUN_14122bb74(void)

void FUN_14122bb74(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  bool bVar8;
  ulonglong uVar9;
  
  if (param_2 != (longlong *)0x0) {
    lVar5 = (**(code **)(*param_2 + 8))(param_2);
    lVar6 = FUN_14122bc66();
    if (((lVar6 != 0) && (*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) {
      iVar1 = *(int *)(param_1 + 0x3a4);
      *(int *)(param_1 + 0x3a4) = iVar1 + 1;
      uVar7 = (ulonglong)*(int *)(param_1 + 0x398);
      if (0 < (longlong)uVar7) {
        bVar8 = false;
        do {
          lVar5 = uVar7 * 0x10 + -8;
          uVar9 = uVar7;
          while (((lVar6 = *(longlong *)(param_1 + 0x390), *(int *)(lVar6 + lVar5) != 0 &&
                  (plVar2 = *(longlong **)(lVar6 + -8 + lVar5), plVar2 != (longlong *)0x0)) &&
                 (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
            lVar5 = lVar5 + -0x10;
            bVar3 = uVar9 < 2;
            uVar9 = uVar9 - 1;
            if (bVar3) {
              *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + -1;
              if (!bVar8) {
                return;
              }
              goto LAB_14122bc50;
            }
          }
          uVar7 = uVar9 - 1;
          bVar8 = true;
        } while (1 < uVar9);
        *(int *)(param_1 + 0x3a4) = *(int *)(param_1 + 0x3a4) + -1;
LAB_14122bc50:
        FUN_14474d06a((longlong *)(param_1 + 0x390),0);
        return;
      }
      *(int *)(param_1 + 0x3a4) = iVar1;
    }
  }
  return;
}



// FUNCTION 14122bc66 FUN_14122bc66 body=57 status=ok
// SIG undefined FUN_14122bc66(void)

void FUN_14122bc66(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb665d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb665d0 = FUN_140002ddd(FUN_14650ee93,uVar1,L"GbxStandInSceneDef");
  }
  return;
}



// FUNCTION 14122bca0 FUN_14122bca0 body=95 status=ok
// SIG undefined FUN_14122bca0(void)

void FUN_14122bca0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(float *)(*(longlong *)(param_1 + 0x20) + 0x178) <= 0.0) {
      return;
    }
    cVar1 = FUN_14584a7f7(param_1 + 0x20,*(undefined8 *)(param_1 + 0x30));
    if (cVar1 != '\0') {
      FUN_14584a896(param_1,param_2);
      return;
    }
  }
  FUN_14584a8fc(param_1,param_2);
  return;
}



// FUNCTION 14122bd00 FUN_14122bd00 body=93 status=ok
// SIG undefined FUN_14122bd00(void)

void FUN_14122bd00(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (param_2 != -1) {
    lVar2 = *(longlong *)(param_1 + 0x58);
    iVar1 = *(int *)(param_1 + 0x60);
    lVar4 = (longlong)iVar1;
    if (lVar4 != 0) {
      lVar3 = 0;
      do {
        if (*(int *)(lVar2 + lVar3) == param_2) {
          return;
        }
        lVar3 = lVar3 + 4;
      } while (lVar4 * 4 - lVar3 != 0);
    }
    *(uint *)(param_1 + 0x60) = iVar1 + 1U;
    if (*(uint *)(param_1 + 100) < iVar1 + 1U) {
      FUN_1446f48e2((longlong *)(param_1 + 0x58),iVar1);
      lVar2 = *(longlong *)(param_1 + 0x58);
    }
    *(int *)(lVar2 + lVar4 * 4) = param_2;
  }
  return;
}



// FUNCTION 14122bd5e FUN_14122bd5e body=130 status=ok
// SIG undefined FUN_14122bd5e(void)

ulonglong FUN_14122bd5e(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  longlong local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 200))();
  uVar3 = 0xffffffff;
  if ((longlong)(int)uStack_20 != 0) {
    lVar1 = (longlong)(int)uStack_20 << 3;
    uVar2 = 0;
    do {
      if (*(longlong *)(local_28 + uVar2 * 8) == param_2) {
        uVar3 = uVar2 & 0xffffffff;
        break;
      }
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + -8;
    } while (lVar1 != 0);
  }
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14122bde2 FUN_14122bde2 body=45 status=ok
// SIG undefined FUN_14122bde2(void)

undefined8 FUN_14122bde2(undefined8 param_1,int param_2)

{
  FUN_14122be10();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb48);
  }
  return param_1;
}



// FUNCTION 14122be10 FUN_14122be10 body=1290 status=ok
// SIG undefined FUN_14122be10(void)

void FUN_14122be10(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0d3210;
  plVar1 = param_1 + 0x162;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x166) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x165)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x165)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x15b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x15f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x153;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x157) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x156)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x156)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x14b;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x14f) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x14e)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x14e)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x144;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x148) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x147)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x147)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x13c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x140) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x13f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x13f)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x135;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x139) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x138)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x138)) {
    FUN_1400020a8(*plVar1);
  }
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 300;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x130) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x12f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x12f)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0xda] = 0;
  FUN_14076ba36(param_1 + 0xdb);
  param_1[0x8b] = 0;
  FUN_14076ba36(param_1 + 0x8c);
  param_1[0x3c] = 0;
  FUN_14076ba36(param_1 + 0x3d);
  plVar1 = param_1 + 0x35;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x39) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x38)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x38)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
  *param_1 = &PTR_FUN_14ac3d210;
  plVar1 = param_1 + 8;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xc) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xb)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xb)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  return;
}



// FUNCTION 14122c31a FUN_14122c31a body=125 status=ok
// SIG undefined FUN_14122c31a(void)

void FUN_14122c31a(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a1701c0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_14064e7da(param_1 + 4);
  *param_1 = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 3) = 0;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    FUN_140115c12(param_1 + 2,0);
  }
  param_1[1] = 0;
  if (param_1[2] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14122c398 FUN_14122c398 body=74 status=ok
// SIG undefined FUN_14122c398(void)

void FUN_14122c398(void *param_1)

{
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
    if (*(void **)((longlong)param_1 + 0x20) != (void *)0x0) {
      memmove(param_1,*(void **)((longlong)param_1 + 0x20),
              (longlong)*(int *)((longlong)param_1 + 0x28) << 3);
      FUN_1446efa72((longlong)param_1 + 0x20,0,0,8);
      return;
    }
  }
  return;
}



// FUNCTION 14122c3e2 FUN_14122c3e2 body=857 status=ok
// SIG undefined FUN_14122c3e2(void)

void FUN_14122c3e2(longlong param_1,longlong *param_2)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong *local_80;
  void *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_60 = param_1 + 0x228;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_88 = param_1;
  local_80 = param_2;
  if (*(int *)(param_1 + 0x240) == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562();
    uVar12 = local_68 >> 0x20;
  }
  lVar10 = local_60;
  lVar8 = local_88;
  iVar13 = (int)local_68;
  uVar15 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar9 = local_50;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    do {
      uVar1 = uStack_70;
      lVar11 = *(longlong *)(lVar8 + 0x218);
      lVar14 = (longlong)(int)(uint)uStack_70;
      uVar5 = (uint)uStack_70 + 1;
      uStack_70 = CONCAT44(uStack_70._4_4_,uVar5);
      if (uStack_70._4_4_ < uVar5) {
        FUN_14122c862(&local_78,uVar1 & 0xffffffff);
        lVar8 = local_88;
      }
      *(undefined8 *)((longlong)local_78 + lVar14 * 8) =
           *(undefined8 *)(lVar11 + (longlong)iVar6 * 0x18 + 8);
      uVar15 = uVar15 & ~(uint)uVar12;
      lVar11 = *(longlong *)(lVar10 + 0x10);
      if (*(longlong *)(lVar10 + 0x10) == 0) {
        lVar11 = lVar10;
      }
      iVar2 = *(int *)(lVar10 + 0x18);
      lVar14 = (longlong)iVar13;
      uVar5 = *(uint *)(lVar11 + lVar14 * 4) & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar4 = iVar6;
        if (iVar6 < iVar13) {
          iVar4 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar7 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)(lVar11 + lVar14 * 4 + 4 + lVar7 * 4);
          if (uVar5 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar4 - lVar14 == lVar7) goto LAB_14122c565;
        }
        iVar13 = iVar13 + (int)lVar7 + 1;
        uVar15 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14122c565:
  local_60 = lVar8 + 0x40;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  if (*(int *)(lVar8 + 0x58) == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
    lVar8 = local_88;
  }
  lVar10 = local_60;
  if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
    iVar13 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar6 = local_58._4_4_;
    iVar9 = local_50;
    do {
      plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x30) + 8 + (longlong)iVar6 * 0x20);
      (**(code **)(*plVar3 + 8))(plVar3,&local_78);
      uVar15 = ~(uint)uVar12 & uVar15;
      lVar8 = *(longlong *)(lVar10 + 0x10);
      if (*(longlong *)(lVar10 + 0x10) == 0) {
        lVar8 = lVar10;
      }
      iVar2 = *(int *)(lVar10 + 0x18);
      lVar11 = (longlong)iVar13;
      uVar5 = *(uint *)(lVar8 + lVar11 * 4) & uVar15;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar4 = iVar6;
        if (iVar6 < iVar13) {
          iVar4 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar14 = 0;
        while( true ) {
          iVar9 = iVar9 + 0x20;
          uVar5 = *(uint *)(lVar8 + lVar11 * 4 + 4 + lVar14 * 4);
          if (uVar5 != 0) break;
          lVar14 = lVar14 + 1;
          if (iVar4 - lVar11 == lVar14) goto LAB_14122c6a7;
        }
        iVar13 = iVar13 + (int)lVar14 + 1;
        uVar15 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar9 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
      lVar8 = local_88;
    } while (iVar6 < iVar2);
  }
LAB_14122c6a7:
  plVar3 = local_80;
  lVar10 = (longlong)(int)(uint)uStack_70;
  if (lVar10 != 0) {
    iVar13 = (int)local_80[1];
    *(uint *)(local_80 + 1) = iVar13 + (uint)uStack_70;
    if ((uint)(*(int *)((longlong)local_80 + 0xc) - iVar13) < (uint)uStack_70) {
      FUN_14122c862(local_80,iVar13);
    }
    memcpy((void *)((longlong)iVar13 * 8 + *plVar3),local_78,lVar10 << 3);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14122c73c FUN_14122c73c body=107 status=ok
// SIG undefined FUN_14122c73c(void)

void FUN_14122c73c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  return;
}



// FUNCTION 14122c7a8 FUN_14122c7a8 body=186 status=ok
// SIG undefined FUN_14122c7a8(void)

void FUN_14122c7a8(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  return;
}



// FUNCTION 14122c862 FUN_14122c862 body=353 status=ok
// SIG undefined FUN_14122c862(void)

void FUN_14122c862(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    uVar3 = 4;
    if (4 < uVar2) {
      uVar3 = uVar2;
    }
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar5 + 0xf;
      if (uVar5 < 0x7ff1) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
      }
      else {
        if ((uVar7 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
          uVar6 = 0x32;
          if (0x32 < bVar1) {
            uVar6 = (ulonglong)bVar1;
          }
          uVar8 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14122c8e9;
            lVar4 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar4 != 0x33);
        }
        uVar5 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar5 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar5 & ((uVar7 & 0xfffffffffffffff0) + uVar5) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
    }
  }
LAB_14122c8e9:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14122c9c4 FUN_14122c9c4 body=598 status=ok
// SIG undefined FUN_14122c9c4(void)

void FUN_14122c9c4(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x10;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0xc0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x170;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x220;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x2d0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x380;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x430;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x4e0;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x590;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x650;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x700;
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_14122c862(param_2,iVar1);
  }
  *(longlong *)(*param_2 + (longlong)iVar1 * 8) = param_1 + 0x7b0;
  return;
}


