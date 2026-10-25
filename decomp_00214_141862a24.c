// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141862a24 FUN_141862a24 body=50 status=ok
// SIG undefined FUN_141862a24(void)

undefined8 * FUN_141862a24(undefined8 *param_1)

{
  FUN_1405d6618();
  param_1[1] = &DAT_14cb6ffe0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_14b075650;
  return param_1;
}



// FUNCTION 141862a56 FUN_141862a56 body=40 status=ok
// SIG undefined FUN_141862a56(void)

void FUN_141862a56(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x400,param_1 + 0x390);
  return;
}



// FUNCTION 141862a84 FUN_141862a84 body=113 status=ok
// SIG undefined FUN_141862a84(void)

void FUN_141862a84(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar2 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar2 = DAT_14cb7bde0;
  *(undefined4 *)(puVar2 + 1) = DAT_14cb7bde8;
  bVar1 = *(byte *)(param_1 + 0x1b0);
  *(undefined1 *)((longlong)puVar2 + 0xc) = 1;
  *(uint *)(puVar2 + 3) = (uint)bVar1;
  puVar3 = &DAT_14cb7c580;
  if (bVar1 != 0) {
    puVar3 = &DAT_14cb7c588;
  }
  puVar2[2] = *puVar3;
  return;
}



// FUNCTION 141862af6 FUN_141862af6 body=262 status=ok
// SIG undefined FUN_141862af6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141862af6(longlong param_1,ulonglong *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  bool bVar4;
  undefined1 auStack_58 [32];
  uint local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar3 = ram0x00014cb7bde4;
  if ((ram0x00014cb7bde4 == DAT_14c948034) &&
     (uVar3 = DAT_14c948034, (int)DAT_14cb7bde0 != DAT_14c948030)) {
    FUN_14011791e(&local_38,(int)DAT_14cb7bde0,ram0x00014cb7bde4 >> 0x20);
    uVar3 = CONCAT44(uStack_34,local_38);
    unique0x1000011a = uVar3;
  }
  if (*param_2 == uVar3) {
    uVar1 = FUN_1407eda54(*param_3);
    *(undefined1 *)(param_1 + 0x1b0) = uVar1;
    goto LAB_141862b47;
  }
  if (*param_2 != DAT_14cb700c8) goto LAB_141862b47;
  local_38 = local_38 & 0xffffff00;
  uStack_34 = 0;
  uStack_30 = 0;
  local_2c = 0;
  FUN_144976b9c(&local_38,*param_3);
  if ((local_38 & 0xff) == 3) {
    bVar4 = CONCAT44(uStack_30,uStack_34) == 0;
LAB_141862ba3:
    uVar2 = (uint)!bVar4;
  }
  else {
    uVar2 = local_2c;
    if ((local_38 & 0xff) != 2) {
      if ((char)local_38 == '\x01') {
        bVar4 = local_2c == 0;
        goto LAB_141862ba3;
      }
      uVar2 = 0;
    }
  }
  *(uint *)(param_1 + 0x1c8) = uVar2;
LAB_141862b47:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141862bfe FUN_141862bfe body=40 status=ok
// SIG undefined FUN_141862bfe(void)

undefined8 FUN_141862bfe(undefined8 param_1,int param_2)

{
  FUN_14006e79a();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141862c26 FUN_141862c26 body=118 status=ok
// SIG undefined FUN_141862c26(void)

undefined8 FUN_141862c26(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = *param_2;
  FUN_1446dcdd4(local_38);
  if (DAT_14cb8da98 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_144815d88(DAT_14cb8da98,local_38);
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141862ca6 FUN_141862ca6 body=33 status=ok
// SIG undefined FUN_141862ca6(void)

void FUN_141862ca6(undefined8 param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  lVar1 = FUN_140161d51();
  *param_2 = *(undefined8 *)(lVar1 + 0x20);
  return;
}



// FUNCTION 141862cc8 FUN_141862cc8 body=73 status=ok
// SIG undefined FUN_141862cc8(void)

void FUN_141862cc8(longlong param_1)

{
  FUN_144760e21(*(undefined8 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x38));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141862d12 FUN_141862d12 body=550 status=ok
// SIG undefined FUN_141862d12(void)

void FUN_141862d12(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_48;
  int local_44;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1401b2056();
  lVar1 = FUN_1447210f0(param_1);
  lVar4 = DAT_14cb84f20;
  if ((lVar1 != 0) && (DAT_14cb84f20 != 0)) {
    FUN_1405f0c40(DAT_14cb84f20,&local_58,*(undefined8 *)(lVar1 + 0x18));
    FUN_1401533ba(&local_74,&local_58,1);
    FUN_1406f1bc8(param_1 + 0x4f0,&local_58);
    if ((local_48 == 0) || ((local_44 == 0 || (local_48 == DAT_14c948000)))) {
      local_78 = DAT_14c948620;
      local_80 = DAT_14c948618;
    }
    else if ((local_44 == 1) || (local_44 < 5)) {
      local_78 = DAT_14c948620;
      local_80 = DAT_14c948618;
    }
    else {
      local_78 = *(undefined4 *)(local_30 + 0x38);
      local_80 = *(undefined8 *)(local_30 + 0x30);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    local_90 = local_74;
    local_88 = local_6c;
    uVar2 = FUN_14015bf82();
    local_58 = local_80;
    local_50 = local_78;
    local_68 = local_90;
    local_60 = local_88;
    plVar3 = (longlong *)FUN_14050b224(lVar4,&local_68,&local_58,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
      lVar1 = FUN_14015bf82();
      if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
         (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
          lVar1 + 0x30)) {
        lVar4 = plVar3[10];
        if (*(longlong *)(param_1 + 0x4a8) != lVar4) {
          *(undefined8 *)(param_1 + 0x4b8) = 0;
          *(longlong *)(param_1 + 0x4a8) = lVar4;
          FUN_1487adcf0(param_1);
        }
        FUN_1405dc634(param_1 + 0x448,(ulonglong)*(ushort *)(plVar3 + 0x18) * 0x20 + DAT_14cb70c78);
        FUN_1405dc634(param_1 + 0x468,
                      (ulonglong)*(ushort *)((longlong)plVar3 + 0xc2) * 0x20 + DAT_14cb70c78);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141862f3a FUN_141862f3a body=77 status=ok
// SIG undefined FUN_141862f3a(void)

void FUN_141862f3a(longlong param_1,longlong *param_2)

{
  FUN_1402d084a();
  FUN_140528391(param_2,param_1 + 0x3d8);
  if ((*(byte *)((longlong)param_2 + 0x36) & 0x40) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141862f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x4d8);
  return;
}



// FUNCTION 141862f88 FUN_141862f88 body=87 status=ok
// SIG undefined FUN_141862f88(void)

void FUN_141862f88(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 1) {
    FUN_1406ba688(param_2,1);
  }
  puVar1 = (undefined8 *)FUN_1403f9e22(param_2);
  *puVar1 = DAT_14cb70c20;
  *(undefined4 *)(puVar1 + 1) = DAT_14cb70c28;
  FUN_144976b9c((longlong)puVar1 + 0xc,*(undefined8 *)(param_1 + 0x194));
  return;
}



// FUNCTION 141862fe0 FUN_141862fe0 body=176 status=ok
// SIG undefined FUN_141862fe0(void)

void FUN_141862fe0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_140115e24();
  for (lVar2 = param_1; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x20)) {
    if ((*(uint *)(lVar2 + 8) & 0x30) != 0) goto LAB_141863062;
  }
  if ((((*(uint *)(param_1 + 8) & 0x40) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) &&
     (*(longlong *)(param_1 + 0x498) == 0)) {
    plVar1 = (longlong *)(param_1 + 0x488);
    *(longlong **)(param_1 + 0x4a0) = &DAT_14cb70258;
    *(longlong *)(param_1 + 0x498) = param_1;
    lVar2 = DAT_14cb70258;
    while( true ) {
      *(longlong *)(param_1 + 0x488) = lVar2;
      LOCK();
      lVar3 = **(longlong **)(param_1 + 0x4a0);
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        **(longlong **)(param_1 + 0x4a0) = (longlong)plVar1;
        lVar3 = lVar2;
      }
      UNLOCK();
      if (bVar4) break;
      *(longlong *)(param_1 + 0x488) = lVar3;
      lVar2 = **(longlong **)(param_1 + 0x4a0);
    }
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
LAB_141863062:
  FUN_1402d7906(param_1 + 0x4f0,param_1 + 0x438);
  return;
}



// FUNCTION 141863090 FUN_141863090 body=64 status=ok
// SIG undefined FUN_141863090(void)

void FUN_141863090(longlong param_1)

{
  FUN_140996410(param_1 + 0x488,0);
  FUN_140872622(param_1);
  *(undefined8 *)(param_1 + 0x648) = 0;
  *(undefined8 *)(param_1 + 0x620) = 0;
  *(undefined8 *)(param_1 + 0x628) = 0;
  *(undefined8 *)(param_1 + 0x630) = 0;
  return;
}



// FUNCTION 1418630d0 FUN_1418630d0 body=76 status=ok
// SIG undefined FUN_1418630d0(void)

undefined8 FUN_1418630d0(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140cad1c2(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000141863111. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14186311c FUN_14186311c body=44 status=ok
// SIG undefined FUN_14186311c(void)

void FUN_14186311c(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 141863148 FUN_141863148 body=44 status=ok
// SIG undefined FUN_141863148(void)

void FUN_141863148(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 141863174 FUN_141863174 body=44 status=ok
// SIG undefined FUN_141863174(void)

void FUN_141863174(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_2 + 8))(param_2);
  FUN_1446e7478(param_3,param_2,uVar1,0);
  return;
}



// FUNCTION 1418631a0 FUN_1418631a0 body=107 status=ok
// SIG undefined FUN_1418631a0(void)

longlong FUN_1418631a0(longlong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  uVar1 = FUN_1406310f5(param_2);
  iVar2 = FUN_140631088((longlong *)(param_1 + 0x288),uVar1,param_2);
  if (iVar2 == -1) {
    lVar3 = 0;
  }
  else {
    lVar3 = (longlong)iVar2 * 0x30 + *(longlong *)(param_1 + 0x288);
  }
  lVar4 = lVar3 + 0x18;
  if (lVar3 == 0) {
    lVar4 = 0;
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x58));
  return lVar4;
}



// FUNCTION 14186320c FUN_14186320c body=251 status=ok
// SIG undefined FUN_14186320c(void)

longlong * FUN_14186320c(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  undefined4 uVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_1405d6618();
  param_1[4] = (longlong)&DAT_14cb6ffe0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = (longlong)&PTR_FUN_14b075650;
  FUN_1405d6618();
  param_1[8] = (longlong)&DAT_14cb6ffe0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = (longlong)&PTR_FUN_14b075650;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc1) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xe5) = 0;
  *(undefined1 *)((longlong)param_1 + 0xec) = 0;
  *(undefined1 *)((longlong)param_1 + 0xf1) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((longlong)param_1 + 0xfd) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0xffffffff;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 200);
  }
  *(undefined4 *)((longlong)param_1 + 0xbc) = uVar1;
  return param_1;
}



// FUNCTION 141863308 FUN_141863308 body=650 status=ok
// SIG undefined FUN_141863308(void)

void FUN_141863308(longlong param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0x124) != -1) {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(undefined8 *)(param_1 + 0x120) = 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_1447cd778(*(undefined8 *)(param_1 + 0x100),*(undefined4 *)(param_1 + 0x108));
    if (*(longlong *)(param_1 + 0x100) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  if (*(char *)(param_1 + 0xfd) == '\x01') {
    *(undefined1 *)(param_1 + 0xfd) = 0;
  }
  if (*(char *)(param_1 + 0xf8) == '\x01') {
    *(undefined1 *)(param_1 + 0xf8) = 0;
  }
  if (*(char *)(param_1 + 0xf1) == '\x01') {
    *(undefined1 *)(param_1 + 0xf1) = 0;
  }
  if (*(char *)(param_1 + 0xec) == '\x01') {
    *(undefined1 *)(param_1 + 0xec) = 0;
  }
  if (*(char *)(param_1 + 0xe5) == '\x01') {
    *(undefined1 *)(param_1 + 0xe5) = 0;
  }
  if (*(char *)(param_1 + 0xe0) == '\x01') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  if (*(char *)(param_1 + 0xd8) == '\x01') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 200) == '\x01') {
    *(undefined1 *)(param_1 + 200) = 0;
  }
  if (*(char *)(param_1 + 0xc1) == '\x01') {
    *(undefined1 *)(param_1 + 0xc1) = 0;
  }
  FUN_14029e95e(*(undefined8 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0));
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x80);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x98)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x98)) {
    FUN_1400020a8(*plVar1);
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x38) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x50) = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    FUN_140115c12(param_1 + 0x48,0);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_1400020a8();
  }
  *(undefined2 **)(param_1 + 0x18) = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    FUN_140115c12(param_1 + 0x28,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 141863592 FUN_141863592 body=59 status=ok
// SIG undefined FUN_141863592(void)

undefined8 FUN_141863592(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x2b8) != 0) {
    FUN_140bd4428(*(longlong *)(param_1 + 0x2b8),0,1);
    uVar1 = FUN_1447e736e(param_1 + 0x290);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1418635ce FUN_1418635ce body=103 status=ok
// SIG undefined FUN_1418635ce(void)

void FUN_1418635ce(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  FUN_1405f1eac();
  iVar1 = FUN_14487fd02(param_1);
  if (iVar1 == 3) {
    (**(code **)(*param_1 + 0x400))(param_1,0);
  }
  else {
    FUN_1407bebdc(param_1 + 0x74,param_1 + 0x73,param_1);
  }
  lVar2 = FUN_140944864(param_1 + 0x92);
  *(bool *)((longlong)param_1 + 0x489) = lVar2 != 0;
  if (lVar2 == 0) {
    *(undefined1 *)(param_1 + 0x91) = 1;
  }
  return;
}



// FUNCTION 141863636 FUN_141863636 body=124 status=ok
// SIG undefined FUN_141863636(void)

void FUN_141863636(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1401b2056();
  if (0 < *(int *)(param_1 + 0x4b0)) {
    plVar1 = *(longlong **)(param_1 + 0x4a8);
    if ((*(longlong *)(param_1 + 0x490) != *plVar1) || (*(int *)(param_1 + 0x498) != (int)plVar1[1])
       ) {
      *(longlong *)(param_1 + 0x490) = *plVar1;
      *(int *)(param_1 + 0x498) = (int)plVar1[1];
      *(undefined8 *)(param_1 + 0x4a0) = 0;
    }
    *(undefined4 *)(param_1 + 0x4b0) = 0;
    if (*(int *)(param_1 + 0x4b4) != 0) {
      FUN_1487b8060(param_1 + 0x4a8);
      return;
    }
  }
  return;
}



// FUNCTION 1418636b2 FUN_1418636b2 body=120 status=ok
// SIG undefined FUN_1418636b2(void)

void FUN_1418636b2(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_140872622();
  uVar1 = FUN_1447210f0(param_1);
  plVar2 = (longlong *)FUN_1406f625c(uVar1);
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x308))(plVar2,0);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 0x2c0))(plVar2);
      if (lVar3 != 0) {
        FUN_141135846(lVar3,param_1 + 0x478,param_1);
        *(undefined1 *)(param_1 + 0x4c0) = 0;
        *(undefined4 *)(param_1 + 0x4cc) = *(undefined4 *)(param_1 + 0x4c8);
      }
    }
  }
  return;
}



// FUNCTION 14186372a FUN_14186372a body=501 status=ok
// SIG undefined FUN_14186372a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14186372a(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  undefined4 local_98;
  longlong local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  longlong local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != (longlong *)0x0) {
    uVar2 = FUN_140427846();
    plVar3 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = FUN_140427846();
      plVar4 = (longlong *)FUN_144718840(plVar3,uVar2);
      if ((plVar3 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x10))(plVar4);
        if (lVar5 != 0) {
          *(undefined4 *)(param_1 + 0x78) = DAT_14cb88904._4_4_;
          *(undefined8 *)(param_1 + 0x70) = _DAT_14cb88900;
          FUN_1406f1bc8(lVar5,&local_a0);
          plVar3 = (longlong *)(param_1 + 0x80);
          if (*(byte *)(param_1 + 0xa0) == 0x1f) {
            puVar6 = (undefined8 *)*plVar3;
            *(undefined4 *)(puVar6 + 1) = local_98;
            *puVar6 = local_a0;
            FUN_1447715ec(puVar6 + 2);
          }
          else {
            pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 +
                               (ulonglong)((uint)*(byte *)(param_1 + 0xa0) * 0x120));
            if (pcVar1 != (code *)0x0) {
              plVar4 = plVar3;
              if (0x18 < *(ushort *)(param_1 + 0x98)) {
                plVar4 = (longlong *)*plVar3;
              }
              (*pcVar1)(plVar4);
            }
            if (0x18 < *(ushort *)(param_1 + 0x98)) {
              FUN_1400020a8(*plVar3);
            }
            local_48 = 0;
            local_58 = 0;
            uStack_50 = 0;
            local_40 = 0;
            uStack_38 = 0;
            local_68 = local_a0;
            local_60 = local_98;
            FUN_1447715ec(&local_58);
            *(undefined2 *)(param_1 + 0x98) = 0x38;
            puVar6 = (undefined8 *)FUN_14001cc68(0x38,0);
            *(undefined8 **)(param_1 + 0x80) = puVar6;
            puVar6[2] = 0;
            puVar6[3] = 0;
            *(undefined4 *)(puVar6 + 4) = 0;
            puVar6[5] = 0;
            puVar6[6] = 0;
            *(undefined4 *)(puVar6 + 1) = local_60;
            *puVar6 = local_68;
            FUN_1447715ec(puVar6 + 2,&local_58);
            *(undefined1 *)(param_1 + 0xa0) = 0x1f;
            if (local_40 != 0) {
              FUN_1400020a8();
            }
          }
          if (local_78 != 0) {
            FUN_1400020a8();
          }
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141863920 FUN_141863920 body=624 status=ok
// SIG undefined FUN_141863920(void)

void FUN_141863920(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  size_t sVar4;
  wchar_t *_Str;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  undefined8 local_120;
  longlong local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *plStack_100;
  undefined1 local_f8 [128];
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (((byte *)*param_3 == (byte *)0x0) || ((*(byte *)*param_3 & 3) == 0)) {
    FUN_14009b010(param_3,3,0);
  }
  local_108 = 0;
  plStack_100 = (longlong *)0x0;
  FUN_14009b010(&local_108,2,0);
  if ((longlong)*(int *)(param_1 + 0xa0) != 0) {
    lVar6 = (longlong)*(int *)(param_1 + 0xa0) << 6;
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x20);
    do {
      local_118 = 0;
      plStack_110 = (longlong *)0x0;
      FUN_14009b010(&local_118,3,0);
      if (*(int *)(puVar5 + -3) == 0) {
        _Str = L"";
LAB_141863a6d:
        local_78 = 0;
        sVar4 = wcslen(_Str);
        FUN_1449b853c(local_f8,_Str,sVar4 & 0xffffffff,1);
      }
      else {
        _Str = (wchar_t *)puVar5[-4];
        local_78 = 0;
        if (_Str != (wchar_t *)0x0) goto LAB_141863a6d;
        local_70 = 0;
        local_68 = 0;
      }
      local_120 = local_70;
      FUN_141863b92(&local_118,&DAT_14cb701c0);
      if (local_78 != 0) {
        FUN_1400020a8();
      }
      if ((((byte *)*puVar5 != (byte *)0x0) && ((*(byte *)*puVar5 & 3) != 0)) && (local_118 != 0)) {
        local_128 = 0;
        FUN_14014191c(local_118,&DAT_14cb701e8,puVar5,0);
      }
      local_128 = 0;
      FUN_140141db6(local_108,&local_118);
      plVar3 = plStack_110;
      if (plStack_110 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_110 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_110)(plStack_110);
          LOCK();
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
      puVar5 = puVar5 + 8;
      lVar6 = lVar6 + -0x40;
    } while (lVar6 != 0);
  }
  if (*param_3 != 0) {
    local_128 = 0;
    FUN_14014191c(*param_3,&DAT_14cb70198,&local_108,0);
  }
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*plStack_100)(plStack_100);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141863b92 FUN_141863b92 body=160 status=ok
// SIG undefined FUN_141863b92(void)

undefined8 FUN_141863b92(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [44];
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 *local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  pbVar1 = (byte *)*param_1;
  if ((pbVar1 == (byte *)0x0) || ((~*pbVar1 & 3) != 0)) {
    uVar3 = 0;
  }
  else {
    lVar2 = *(longlong *)(pbVar1 + 8);
    local_30 = &local_3c;
    local_3c = 1;
    local_38 = param_2;
    FUN_14049fede(lVar2 + 0x18,&local_24,&local_38,0);
    lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x28 + (longlong)local_24 * 0x40);
    if ((lVar2 != 0) && ((*(byte *)(lVar2 + 1) & 2) == 0)) {
      FUN_140126aca(lVar2,*param_3);
    }
    uVar3 = 1;
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141863c34 FUN_141863c34 body=329 status=ok
// SIG undefined FUN_141863c34(void)

int * FUN_141863c34(int *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = 0x41a00000;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0x41200000;
  param_1[7] = 1;
  param_1[8] = 1;
  param_1[9] = 3;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  FUN_1405d6618();
  *(undefined **)(param_1 + 0x12) = &DAT_14cb6ffe0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b075650;
  FUN_1405d6618();
  *(undefined **)(param_1 + 0x1a) = &DAT_14cb6ffe0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined ***)(param_1 + 0x18) = &PTR_FUN_14b075650;
  param_1[0x20] = 0;
  *(undefined2 **)(param_1 + 0x22) = &DAT_14a171d50;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0x3860a972;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined2 *)(param_1 + 0x54) = 1;
  *(undefined1 *)((longlong)param_1 + 0x152) = 0;
  param_1[0x58] = 0;
  *(undefined1 *)(param_1 + 0x57) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x59] = -1;
  DAT_14cb70bd0 = DAT_14cb70bd0 + 1;
  *param_1 = DAT_14cb70bd0;
  *(undefined **)(param_1 + 0x24) = &DAT_14cb70058;
  return param_1;
}



// FUNCTION 141863d7e FUN_141863d7e body=47 status=ok
// SIG undefined FUN_141863d7e(void)

void FUN_141863d7e(longlong param_1)

{
  FUN_1405f1eac();
  if (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141863d9f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0xa08))();
    return;
  }
  return;
}



// FUNCTION 141863dae FUN_141863dae body=47 status=ok
// SIG undefined FUN_141863dae(void)

void FUN_141863dae(longlong param_1)

{
  FUN_1403d8a98();
  if (*(longlong **)(param_1 + 0x3a0) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000141863dcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x3a0) + 0xa10))();
    return;
  }
  return;
}



// FUNCTION 141863dde FUN_141863dde body=211 status=ok
// SIG undefined FUN_141863dde(void)

undefined8 * FUN_141863dde(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 *_Dst;
  undefined8 *_Src;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  _Src = param_2 + 2;
  bVar1 = *(byte *)(param_2 + 6);
  uVar2 = *(ushort *)(param_2 + 5);
  *(ushort *)(param_1 + 5) = uVar2;
  _Dst = param_1 + 2;
  if (0x18 < uVar2) {
    _Dst = (undefined8 *)FUN_14001cc68(uVar2,0);
    param_1[2] = _Dst;
    _Src = (undefined8 *)*_Src;
  }
  pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + (ulonglong)((uint)bVar1 * 0x120));
  if (pcVar4 == (code *)0x0) {
    memcpy(_Dst,_Src,(longlong)*(int *)((longlong)&DAT_14c9a8510 + (ulonglong)((uint)bVar1 * 0x120))
          );
  }
  else {
    (*pcVar4)(_Dst,_Src);
  }
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[7] = 0;
  iVar3 = *(int *)(param_2 + 8);
  uVar5 = param_2[7];
  *(int *)(param_1 + 8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1409c7014(param_1 + 7,iVar3,0);
    FUN_1409c694a(param_1[7],uVar5,iVar3);
  }
  return param_1;
}



// FUNCTION 141863eb2 FUN_141863eb2 body=101 status=ok
// SIG undefined FUN_141863eb2(void)

void FUN_141863eb2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e55f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141863f18 FUN_141863f18 body=553 status=ok
// SIG undefined FUN_141863f18(void)

void FUN_141863f18(void *param_1,int param_2)

{
  ulonglong uVar1;
  byte bVar2;
  uint uVar3;
  void *_Src;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  uVar3 = *(uint *)((longlong)param_1 + 0x108);
  if ((int)uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar3);
  }
  if (uVar3 < 0x21) {
    *(undefined4 *)((longlong)param_1 + 0x10c) = 0x20;
    _Src = *(void **)((longlong)param_1 + 0x100);
joined_r0x0001418640b9:
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    uVar8 = 0;
  }
  else {
    lVar7 = (longlong)(int)uVar3;
    if (0x20 < *(uint *)((longlong)param_1 + 0x10c)) {
      lVar7 = lVar7 + ((ulonglong)(lVar7 * 3) >> 3) + 0x10;
    }
    uVar8 = lVar7 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar8 + 0xf;
        if (uVar8 < 0x7ff1) {
          uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar4 = 0x32;
            if (0x32 < bVar2) {
              uVar4 = (ulonglong)bVar2;
            }
            uVar5 = 0x32 - (ulonglong)bVar2;
            do {
              uVar8 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar5 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar5 & 0xffffffff] & 0xf) == 0) goto LAB_141863fa5;
              lVar7 = uVar4 + 1 + uVar5;
              uVar5 = uVar5 - 1;
            } while (lVar7 != 0x33);
          }
          uVar8 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar8 = (ulonglong)DAT_14c841df8;
          }
          uVar8 = -uVar8 & ((uVar1 & 0xfffffffffffffff0) + uVar8) - 1;
        }
      }
      else {
        uVar8 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar8,0);
      }
    }
LAB_141863fa5:
    uVar8 = uVar8 >> 3;
    uVar6 = (uint)uVar8;
    if ((int)uVar6 < (int)uVar3) {
      *(undefined4 *)((longlong)param_1 + 0x10c) = 0x7fffffff;
      uVar8 = 0x7fffffff;
      _Src = *(void **)((longlong)param_1 + 0x100);
    }
    else {
      *(uint *)((longlong)param_1 + 0x10c) = uVar6;
      _Src = *(void **)((longlong)param_1 + 0x100);
      if (uVar6 < 0x21) goto joined_r0x0001418640b9;
    }
    if (_Src == (void *)0x0) {
      FUN_1446efa72((longlong)param_1 + 0x100,0,uVar8,8);
      memmove(*(void **)((longlong)param_1 + 0x100),param_1,(longlong)param_2 << 3);
      return;
    }
  }
  FUN_1446efa72((longlong)param_1 + 0x100,param_2,uVar8,8);
  return;
}



// FUNCTION 141864142 FUN_141864142 body=275 status=ok
// SIG undefined FUN_141864142(void)

void FUN_141864142(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0xa0;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141864256 FUN_141864256 body=66 status=ok
// SIG undefined FUN_141864256(void)

undefined8 * FUN_141864256(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b3e5e30;
  plVar2 = (longlong *)param_1[4];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141864298 FUN_141864298 body=29 status=ok
// SIG undefined FUN_141864298(void)

undefined8 FUN_141864298(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418642b6 FUN_1418642b6 body=29 status=ok
// SIG undefined FUN_1418642b6(void)

undefined8 FUN_1418642b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418642d4 FUN_1418642d4 body=269 status=ok
// SIG undefined FUN_1418642d4(void)

void FUN_1418642d4(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418643e2 FUN_1418643e2 body=29 status=ok
// SIG undefined FUN_1418643e2(void)

undefined8 FUN_1418643e2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141864400 FUN_141864400 body=29 status=ok
// SIG undefined FUN_141864400(void)

undefined8 FUN_141864400(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186441e FUN_14186441e body=29 status=ok
// SIG undefined FUN_14186441e(void)

undefined8 FUN_14186441e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186443c FUN_14186443c body=100 status=ok
// SIG undefined FUN_14186443c(void)

longlong * FUN_14186443c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
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
  return param_1;
}



// FUNCTION 1418644a0 FUN_1418644a0 body=29 status=ok
// SIG undefined FUN_1418644a0(void)

undefined8 FUN_1418644a0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1418644be FUN_1418644be body=299 status=ok
// SIG undefined FUN_1418644be(void)

void FUN_1418644be(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  uint local_38 [6];
  longlong local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_144837e54(param_2,0);
  local_48 = DAT_14cb70d58;
  local_40 = DAT_14cb70d60;
  FUN_1448075d0(local_38);
  pbVar2 = *(byte **)(param_2 + 0x48);
  if (pbVar2 != (byte *)0x0) {
    if ((*pbVar2 & 2) == 0) {
      plVar3 = &DAT_14c9a1288;
    }
    else {
      plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
    }
    if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
      plVar5 = plVar3 + 8;
      if ((longlong *)plVar3[9] != (longlong *)0x0) {
        plVar5 = (longlong *)plVar3[9];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)plVar3[10] - 1U & local_38[0]) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = *plVar3 + (longlong)iVar6 * 0x40;
          if (*(uint *)(*plVar3 + (longlong)iVar6 * 0x40) == local_38[0]) {
            if ((((lVar1 != 0) &&
                 (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
            goto LAB_141864572;
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x38);
        } while (iVar6 != -1);
      }
    }
  }
  puVar4 = &DAT_14c9a1308;
LAB_141864572:
  if ((byte *)*puVar4 == (byte *)0x0) {
    bVar7 = false;
  }
  else {
    bVar7 = (*(byte *)*puVar4 & 3) != 0;
  }
  if (local_20 != 0) {
    FUN_1400020a8();
  }
  if (bVar7) {
    FUN_14015bf82();
  }
  else {
    FUN_1401ad114();
  }
  if ((local_10 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418645ea FUN_1418645ea body=317 status=ok
// SIG undefined FUN_1418645ea(void)

longlong FUN_1418645ea(undefined8 param_1)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar3 = (longlong *)FUN_14094fa22();
  lVar4 = plVar3[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    plVar3[1] = lVar4;
  }
  if (plVar3[2] == 0) {
    if ((lVar4 == 0) || (*plVar3 == 0)) goto LAB_1418646a3;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if (plVar1 != (longlong *)0x0) {
      cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
      if (cVar2 != '\0') {
        uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar4 = FUN_144aff482(uVar5,plVar3);
        plVar3[2] = lVar4;
        if (lVar4 == 0) goto LAB_1418646a3;
        goto LAB_14186460c;
      }
    }
    plVar3[2] = 0;
LAB_1418646a3:
    lVar4 = FUN_140e82300();
    return lVar4;
  }
LAB_14186460c:
  plVar3 = (longlong *)FUN_14094fa22(param_1);
  lVar4 = plVar3[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    plVar3[1] = lVar4;
  }
  lVar6 = plVar3[2];
  if (((lVar6 != 0) || (lVar6 = 0, lVar4 == 0)) || (*plVar3 == 0)) goto LAB_141864631;
  plVar1 = *(longlong **)(lVar4 + 0xb8);
  if (plVar1 == (longlong *)0x0) {
LAB_141864723:
    lVar6 = 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1);
    if (cVar2 == '\0') goto LAB_141864723;
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,plVar3);
  }
  plVar3[2] = lVar6;
LAB_141864631:
  return lVar6 + 0x30;
}



// FUNCTION 141864728 FUN_141864728 body=153 status=ok
// SIG undefined FUN_141864728(void)

ulonglong FUN_141864728(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong unaff_RBX;
  
  plVar3 = (longlong *)FUN_14094fa22();
  lVar4 = plVar3[1];
  if (lVar4 == 0) {
    uVar5 = FUN_1406ef318();
    lVar4 = FUN_14477b664(uVar5);
    plVar3[1] = lVar4;
  }
  lVar6 = plVar3[2];
  if (lVar6 == 0) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
    if ((lVar4 == 0) || (*plVar3 == 0)) goto LAB_14186474c;
    plVar1 = *(longlong **)(lVar4 + 0xb8);
    if ((plVar1 == (longlong *)0x0) ||
       (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
      plVar3[2] = 0;
      goto LAB_14186474c;
    }
    uVar5 = (**(code **)(*plVar1 + 0x110))(plVar1);
    lVar6 = FUN_144aff482(uVar5,plVar3);
    plVar3[2] = lVar6;
    if (lVar6 == 0) goto LAB_14186474c;
  }
  unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),*(undefined1 *)(lVar6 + 0x48));
LAB_14186474c:
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 1418647c2 FUN_1418647c2 body=126 status=ok
// SIG undefined FUN_1418647c2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1418647c2(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb71008) {
    FUN_144b3d300(&DAT_14cb71008);
    if (DAT_14cb71008 == -1) {
      DAT_14cb70ff8 = 0;
      _DAT_14cb71000 = 0;
      atexit(FUN_143c963b1);
      _Init_thread_footer(&DAT_14cb71008);
    }
  }
  puVar1 = &DAT_14cb70ff8;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar1 = (undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x38);
  }
  return puVar1;
}



// FUNCTION 141864840 FUN_141864840 body=275 status=ok
// SIG undefined FUN_141864840(void)

ulonglong * FUN_141864840(ulonglong *param_1,ulonglong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar4 = *param_2;
  if (uVar4 == 0) {
LAB_14186491a:
    param_1[1] = 0;
    return param_1;
  }
  lVar3 = FUN_1402d2740();
  if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x38) < *(int *)(lVar3 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) goto LAB_14186491a;
  param_1[1] = uVar4;
  uVar4 = *param_2;
  if ((uVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(uVar4);
  }
  else if (uVar4 == 0) {
    uVar5 = 0;
    uVar4 = 0;
    goto LAB_1418648d7;
  }
  uVar5 = *(uint *)(uVar4 + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar3 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar3 = 0;
  }
  uVar4 = (ulonglong)*(uint *)(lVar3 + 0x10);
  if (*(uint *)(lVar3 + 0x10) == 0) {
    LOCK();
    iVar1 = DAT_14c964868 + 1;
    UNLOCK();
    uVar6 = DAT_14c964868 + 1;
    bVar7 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar7) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar6);
    }
    LOCK();
    uVar2 = *(uint *)(lVar3 + 0x10);
    bVar7 = uVar2 == 0;
    if (bVar7) {
      *(uint *)(lVar3 + 0x10) = uVar6;
      uVar2 = 0;
    }
    UNLOCK();
    if (bVar7) {
      uVar2 = uVar6;
    }
    uVar4 = (ulonglong)uVar2;
  }
LAB_1418648d7:
  *param_1 = (ulonglong)uVar5 | uVar4 << 0x20;
  return param_1;
}



// FUNCTION 141864954 FUN_141864954 body=203 status=ok
// SIG undefined FUN_141864954(void)

void FUN_141864954(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_2 = *param_1;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    *(undefined1 *)(param_2 + 4) = 0;
    break;
  case 1:
    *(undefined1 *)(param_2 + 4) = 1;
    uVar6 = param_1[3];
    *(undefined8 *)((longlong)param_2 + 0x24) = param_1[2];
    *(undefined8 *)((longlong)param_2 + 0x2c) = uVar6;
    break;
  case 2:
    *(undefined1 *)(param_2 + 4) = 2;
    *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 2);
    break;
  case 3:
    *(undefined1 *)(param_2 + 4) = 3;
    uVar6 = param_1[3];
    param_2[8] = param_1[2];
    param_2[9] = uVar6;
    break;
  case 4:
    *(undefined1 *)(param_2 + 4) = 4;
    param_2[10] = param_1[2];
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x1c);
    uVar4 = *(undefined4 *)(param_1 + 4);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x24);
    *(undefined4 *)(param_2 + 0xb) = *(undefined4 *)(param_1 + 3);
    *(undefined4 *)((longlong)param_2 + 0x5c) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(undefined4 *)((longlong)param_2 + 100) = uVar5;
    puVar1 = param_2 + 0xd;
    if (puVar1 != param_1 + 5) {
      iVar2 = *(int *)(param_1 + 6);
      _Src = (void *)param_1[5];
      *(int *)(param_2 + 0xe) = iVar2;
      if (iVar2 == 0 && *(int *)((longlong)param_2 + 0x74) == 0) {
        *(undefined4 *)((longlong)param_2 + 0x74) = 0;
      }
      else {
        FUN_1446dd670(puVar1,iVar2);
        if (iVar2 != 0) {
          memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 141864a20 FUN_141864a20 body=204 status=ok
// SIG undefined FUN_141864a20(void)

longlong * FUN_141864a20(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar4[1] = (longlong)&DAT_100000001;
  *plVar4 = (longlong)&PTR_FUN_14b3e7550;
  plVar1 = plVar4 + 2;
  plVar4[3] = (longlong)&DAT_14cb71050;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined1 *)(plVar4 + 6) = 0;
  plVar4[2] = (longlong)&DAT_14b08e0e0;
  plVar4[7] = 0;
  plVar4[8] = 0;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (plVar1 != (longlong *)0x0) {
    (**(code **)*plVar1)(plVar1);
  }
  *param_1 = (longlong)plVar1;
  param_1[1] = (longlong)plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    LOCK();
    plVar1 = plVar4 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
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
  return param_1;
}



// FUNCTION 141864aec FUN_141864aec body=279 status=ok
// SIG undefined FUN_141864aec(void)

ulonglong FUN_141864aec(longlong *param_1,undefined8 param_2,uint *param_3)

{
  longlong lVar1;
  ushort uVar2;
  code *pcVar3;
  char cVar4;
  longlong *plVar5;
  int iVar6;
  undefined7 uVar8;
  ulonglong uVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x1004) != 0) &&
     (((pcVar3 = *(code **)(*param_1 + 0x2d0),
       pcVar3 == (code *)&LAB_142b3183c || pcVar3 == (code *)&LAB_144b088e6 ||
       (cVar4 = (*pcVar3)(param_1), cVar4 != '\0')) &&
      ((*(byte *)((longlong)param_1 + 0x155) & 1) == 0)))) {
    uVar8 = (undefined7)((ulonglong)param_3 >> 8);
    if ((int)param_1[0x2e] != *(int *)((longlong)param_1 + 0x19c)) {
      plVar5 = param_1 + 0x34;
      if ((longlong *)param_1[0x35] != (longlong *)0x0) {
        plVar5 = (longlong *)param_1[0x35];
      }
      iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[0x36] - 1U & *param_3) * 4);
      if (iVar6 != -1) {
        do {
          lVar1 = param_1[0x2d] + (longlong)iVar6 * 0x38;
          if (*(uint *)(param_1[0x2d] + (longlong)iVar6 * 0x38) == *param_3) {
            if ((lVar1 != 0) && ((ushort *)(lVar1 + 0x28) != (ushort *)0x0)) {
              uVar2 = *(ushort *)(lVar1 + 0x28);
              uVar7 = CONCAT71(uVar8,1);
              if ((-1 < (short)uVar2) && ((int)(short)uVar2 < (int)param_1[0x2c])) {
                FUN_1401d5310(param_2,(ulonglong)uVar2 * 0x10 + param_1[0x2b]);
              }
              goto LAB_141864bb3;
            }
            break;
          }
          iVar6 = *(int *)(lVar1 + 0x30);
        } while (iVar6 != -1);
      }
    }
    if (*(char *)((longlong)param_1 + 0x156) != '\0') {
      uVar7 = CONCAT71(uVar8,1);
      goto LAB_141864bb3;
    }
  }
  uVar7 = 0;
LAB_141864bb3:
  return uVar7 & 0xffffffff;
}



// FUNCTION 141864c04 FUN_141864c04 body=37 status=ok
// SIG undefined FUN_141864c04(void)

bool FUN_141864c04(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x2b8))();
  if (lVar1 == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)(lVar1 + 0x178) == '\x03';
  }
  return bVar2;
}



// FUNCTION 141864c34 FUN_141864c34 body=147 status=ok
// SIG undefined FUN_141864c34(void)

void FUN_141864c34(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x10c8) + 0x20))(param_1 + 0x10c8);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2);
    }
    lVar2 = (**(code **)(*(longlong *)(param_1 + 0x1118) + 0x20))(param_1 + 0x1118);
    if (lVar2 != 0) {
      lVar3 = 0x18;
      do {
        (**(code **)(*(longlong *)(lVar2 + lVar3) + 0x30))(lVar2 + lVar3,param_2);
        lVar3 = lVar3 + 0x138;
      } while (lVar3 != 0x3c0);
    }
  }
  return;
}



// FUNCTION 141864cc8 FUN_141864cc8 body=136 status=ok
// SIG undefined FUN_141864cc8(void)

undefined8 FUN_141864cc8(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1405f85e0(param_1 + 0x12f0);
  uVar1 = 1;
  if (1 < (byte)(*(char *)(param_1 + 0x13f1) - 3U)) {
    lVar2 = *(longlong *)(param_1 + 0x11e8);
    if (lVar2 != 0) {
      if ((longlong)*(int *)(lVar2 + 0x14b8) < 1) {
        lVar2 = lVar2 + 0x1418;
      }
      else {
        lVar3 = lVar2 + 0x1430;
        if (*(longlong *)(lVar2 + 0x14b0) != 0) {
          lVar3 = *(longlong *)(lVar2 + 0x14b0);
        }
        lVar2 = lVar3 + (longlong)*(int *)(lVar2 + 0x14b8) * 0x20 + -0x20;
      }
      lVar2 = *(longlong *)(lVar2 + 8);
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0x30) != '\0') {
          return 1;
        }
        if (*(char *)(lVar2 + 0x31) != '\0') {
          return 1;
        }
        if (*(int *)(lVar2 + 0x6c) != 2) {
          return 1;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 141864d50 FUN_141864d50 body=455 status=ok
// SIG undefined FUN_141864d50(void)

void FUN_141864d50(longlong param_1,undefined8 *param_2,float param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  double dVar9;
  double *pdVar10;
  uint uVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  
  dVar9 = (double)(DAT_14c707940 ^ (ulonglong)auStack_e8);
  local_50 = dVar9;
  if ((param_3 == 0.0) && (!NAN(param_3))) {
    lVar1 = *(longlong *)(param_1 + 0x1c8);
    if (lVar1 == 0) {
      uVar13 = SUB84(DAT_14c8464f8,0);
      uVar14 = (undefined4)((ulonglong)DAT_14c8464f8 >> 0x20);
      uVar15 = SUB84(DAT_14c846508,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c846508 >> 0x20);
    }
    else {
      dVar4 = *(double *)(lVar1 + 0x240);
      dVar5 = *(double *)(lVar1 + 0x248);
      dVar6 = *(double *)(lVar1 + 0x250);
      dVar7 = *(double *)(lVar1 + 600);
      pdVar10 = *(double **)(lVar1 + 0x228);
      lVar12 = param_1;
      local_88 = dVar4;
      uStack_80 = dVar5;
      local_78 = dVar6;
      uStack_70 = dVar7;
      if (pdVar10 == (double *)0x0) {
        lVar12 = 0x40;
        pdVar10 = (double *)FUN_14001cc68(0x40,0x10);
        dVar9 = DAT_14c8463d8;
        *pdVar10 = DAT_14c8463d0;
        pdVar10[1] = dVar9;
        dVar9 = DAT_14c8463e8;
        pdVar10[2] = DAT_14c8463e0;
        pdVar10[3] = dVar9;
        dVar9 = DAT_14c846500;
        pdVar10[4] = DAT_14c8464f8;
        pdVar10[5] = dVar9;
        dVar9 = DAT_14c846508;
        pdVar10[6] = DAT_14c846508;
        *(double **)(lVar1 + 0x228) = pdVar10;
      }
      auVar2._8_4_ = (int)-(ulonglong)(dVar5 != pdVar10[1]);
      auVar2._0_8_ = -(ulonglong)(dVar4 != *pdVar10);
      auVar2._12_4_ = (int)(-(ulonglong)(dVar5 != pdVar10[1]) >> 0x20);
      iVar8 = movmskpd(SUB84(dVar9,0),auVar2);
      auVar3._8_4_ = (int)-(ulonglong)(dVar7 != pdVar10[3]);
      auVar3._0_8_ = -(ulonglong)(dVar6 != pdVar10[2]);
      auVar3._12_4_ = (int)(-(ulonglong)(dVar7 != pdVar10[3]) >> 0x20);
      uVar11 = movmskpd((int)lVar12,auVar3);
      if ((uVar11 & 0x3fffffff) != 0 || iVar8 != 0) {
        *(undefined4 *)(pdVar10 + 2) = (undefined4)local_78;
        *(undefined4 *)((longlong)pdVar10 + 0x14) = local_78._4_4_;
        *(undefined4 *)(pdVar10 + 3) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)pdVar10 + 0x1c) = uStack_70._4_4_;
        *(undefined4 *)pdVar10 = (undefined4)local_88;
        *(undefined4 *)((longlong)pdVar10 + 4) = local_88._4_4_;
        *(undefined4 *)(pdVar10 + 1) = (undefined4)uStack_80;
        *(undefined4 *)((longlong)pdVar10 + 0xc) = uStack_80._4_4_;
        FUN_1448052ee(&local_88,&local_68);
        pdVar10[6] = local_58;
        pdVar10[4] = local_68;
        pdVar10[5] = dStack_60;
      }
      uVar13 = SUB84(pdVar10[4],0);
      uVar14 = (undefined4)((ulonglong)pdVar10[4] >> 0x20);
      uVar15 = SUB84(pdVar10[6],0);
      uVar16 = (undefined4)((ulonglong)pdVar10[6] >> 0x20);
    }
    *param_2 = CONCAT44(uVar14,uVar13);
    param_2[2] = CONCAT44(uVar16,uVar15);
    local_98 = param_2[2];
    local_a8 = *(undefined4 *)param_2;
    uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_a0 = *(undefined4 *)(param_2 + 1);
    uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
    if (*(longlong *)(param_1 + 0x1c8) != 0) {
      local_b8 = 0;
      local_c0 = 0;
      local_c8 = 0;
      FUN_1407fd932(*(longlong *)(param_1 + 0x1c8),&DAT_14c8464e0,&local_a8,1);
    }
  }
  if (((ulonglong)local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141864f18 FUN_141864f18 body=84 status=ok
// SIG undefined FUN_141864f18(void)

void FUN_141864f18(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) | 8;
  *(undefined4 *)(param_1 + 0x554) = 0;
  lVar1 = *(longlong *)(param_1 + 0x11e8);
  if (lVar1 != 0) {
    lVar2 = FUN_1447210f0();
    if (lVar2 == 0) {
      fVar3 = 0.0;
    }
    else {
      lVar2 = FUN_1447210f0(param_1);
      fVar3 = (float)*(double *)(lVar2 + 0x6d0);
    }
    *(float *)(lVar1 + 0x2bd4) = fVar3;
  }
  return;
}



// FUNCTION 141864f6c FUN_141864f6c body=385 status=ok
// SIG undefined FUN_141864f6c(void)

void FUN_141864f6c(longlong *param_1,undefined4 param_2)

{
  uint uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  lVar3 = FUN_1447210f0();
  if ((char)param_1[0x2f] == '\x03') {
    pcVar2 = *(code **)(*param_1 + 0x5e8);
    if (pcVar2 == FUN_140972dde) {
      lVar4 = param_1[0x76];
      if (lVar4 == 0) {
        pcVar2 = *(code **)(*param_1 + 0x5f8);
        if (pcVar2 == FUN_144784df4) {
          if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
            if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
              return;
            }
            uVar1 = *(uint *)(param_1 + 0xeb6);
            if ((int)uVar1 < 0) {
              return;
            }
            if (DAT_14c9647dc <= (int)uVar1) {
              return;
            }
            plVar5 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (plVar5 == (longlong *)0x0) {
              return;
            }
            if ((int)plVar5[2] != *(int *)((longlong)param_1 + 0x75b4)) {
              return;
            }
            if ((*(uint *)(plVar5 + 1) & 0x10200000) != 0) {
              return;
            }
            if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
              lVar4 = *plVar5;
            }
            else {
              lVar4 = 0;
            }
            lVar4 = lVar4 + 0x110;
          }
          else {
            lVar4 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
          }
          if (lVar4 == 0) {
            return;
          }
          lVar4 = *(longlong *)(lVar4 + 0x20);
        }
        else {
          lVar4 = (*pcVar2)(param_1);
        }
        if (lVar4 == 0) {
          return;
        }
        lVar4 = *(longlong *)(lVar4 + 0x3b0);
      }
    }
    else {
      lVar4 = (*pcVar2)(param_1);
    }
    if (((lVar3 != 0) && (lVar4 != 0)) && (*(longlong *)(lVar3 + 0x170) != 0)) {
      lVar4 = FUN_1411531be();
      plVar5 = *(longlong **)(lVar3 + 0x170);
      if (((plVar5 != (longlong *)0x0) && (lVar4 != 0)) &&
         ((lVar3 = plVar5[2], lVar3 != 0 &&
          ((*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
            lVar4 + 0x30)))))) {
                    /* WARNING: Could not recover jumptable at 0x0001418650c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar5 + 0x920))(plVar5,param_1,param_2);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418650ee FUN_1418650ee body=184 status=ok
// SIG undefined FUN_1418650ee(void)

undefined1 FUN_1418650ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x11e8);
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 0x3170) == 0) {
      if (*(char *)(lVar2 + 0x34b0) != '\x01') {
        return 0;
      }
      lVar3 = lVar2 + 0x3210;
    }
    else {
      lVar3 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
    }
    lVar1 = FUN_140153468(lVar3);
    if (((lVar1 != 0) && ((*(byte *)(lVar3 + 0x298) & 2) == 0)) &&
       (*(longlong *)(lVar2 + 0x110) != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x11e8);
      if (*(longlong *)(lVar2 + 0x3170) == 0) {
        if (*(char *)(lVar2 + 0x34b0) != '\x01') {
          return 0;
        }
        lVar2 = lVar2 + 0x3210;
        if (lVar2 == 0) {
          return 0;
        }
      }
      else {
        lVar2 = *(longlong *)(lVar2 + 0x3170) + 0xd8;
      }
      lVar2 = FUN_140153468(lVar2);
      if (lVar2 != 0) {
        if (*(char *)(lVar2 + 0xfc) != '\0') {
          return 1;
        }
        return *(undefined1 *)(lVar2 + 0xfd);
      }
    }
  }
  return 0;
}



// FUNCTION 1418651a6 FUN_1418651a6 body=32 status=ok
// SIG undefined FUN_1418651a6(void)

void FUN_1418651a6(undefined8 param_1,undefined4 param_2)

{
  FUN_14035b7a0();
  FUN_14035e9a8(param_1,param_2);
  return;
}



// FUNCTION 1418651c6 FUN_1418651c6 body=159 status=ok
// SIG undefined FUN_1418651c6(void)

void FUN_1418651c6(longlong param_1,longlong param_2)

{
  undefined1 auStack_78 [40];
  undefined1 local_50 [8];
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(char *)(param_1 + -0x6f8) == '\x03') && (*(char *)(param_1 + 0x297d) == '\x02')) {
    FUN_1403fa066(param_2 + 0x20,local_48,0);
    FUN_1447325ac(local_48,local_50,1);
    FUN_140bfca4e(param_1 + 0x2970,&DAT_14cb246b0,local_50,0);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141865266 FUN_141865266 body=167 status=ok
// SIG undefined FUN_141865266(void)

void FUN_141865266(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [24];
  undefined1 local_70 [24];
  longlong local_58;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(uint *)(param_1 + -0x10a0) & 0x10) == 0) {
    FUN_1406c9d00(param_1 + 0x248,local_88);
    FUN_14031575e(local_70,local_88);
    FUN_14042b1ec(param_2,local_70,1);
    if (local_28 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))();
      }
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186530e FUN_14186530e body=508 status=ok
// SIG undefined FUN_14186530e(void)

longlong * FUN_14186530e(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (**(code **)(*param_1 + 0x18))();
  if (lVar6 == 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
  }
  else {
    FUN_1400bbfc4(&local_68,lVar6);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    uVar4 = *(uint *)(lVar6 + 0xc);
    if (cVar3 != '\0') {
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) goto LAB_1418653a9;
    }
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      if (*(int *)(lVar6 + 0x10) == 0) {
        *(int *)(lVar6 + 0x10) = iVar8;
      }
      UNLOCK();
    }
  }
LAB_1418653a9:
  bVar10 = false;
  if ((*(longlong *)(param_2 + 8) == local_68) &&
     (bVar10 = false, *(longlong *)(param_2 + 0x10) == local_60)) {
    iVar5 = *(int *)(param_2 + 0x20);
    if (iVar5 == local_50) {
      bVar10 = true;
      if (iVar5 < 2) goto LAB_1418653b7;
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar6);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(local_58 + lVar6);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14186542c;
          }
          iVar5 = uVar4 - uVar9;
          goto LAB_14186547d;
        }
        if (uVar1 == 0) break;
LAB_14186542c:
        lVar6 = lVar6 + 2;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = local_50 + iVar5 + -1;
    }
LAB_14186547d:
    bVar10 = iVar5 == 0;
  }
LAB_1418653b7:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  plVar7 = (longlong *)0x0;
  if (bVar10) {
    plVar7 = param_1 + 0x68;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 141865538 FUN_141865538 body=627 status=ok
// SIG undefined FUN_141865538(void)

void FUN_141865538(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  double dVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined *puVar7;
  uint *puVar8;
  uint uVar9;
  undefined1 auStack_58 [32];
  double local_38;
  double dStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)(param_1 + -0x1100);
  plVar5 = (longlong *)FUN_14494e0ba(plVar1);
  if ((plVar5 == (longlong *)0x0) &&
     (plVar5 = (longlong *)(**(code **)(*plVar1 + 0x5d0))(), plVar5 == (longlong *)0x0)) {
    local_28 = DAT_14c846508;
    local_38 = DAT_14c8464f8;
    dStack_30 = DAT_14c846500;
  }
  else {
    (**(code **)(*plVar5 + 0x680))(plVar5,&local_38);
  }
  dVar3 = (dStack_30 * 65536.0) / 360.0;
  dVar3 = dVar3 + dVar3 + 0.5;
  sVar4 = (short)((ulonglong)(longlong)ROUND(dVar3) >> 1);
  if (*(short *)(param_1 + 0x8c8) != sVar4) {
    *(short *)(param_1 + 0x8c8) = sVar4;
    uVar2 = *(ulonglong *)(param_1 + -0x10d8);
    if (uVar2 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(SUB84(dVar3,0),plVar1,uVar2,0x1e);
    }
    else {
      uVar9 = (uint)uVar2;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
        puVar7 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar7 = DAT_14c998080;
        }
        if ((*(uint *)(puVar7 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
          lVar6 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
          puVar8 = *(uint **)(lVar6 + 0x18);
          if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
            puVar8 = (uint *)(lVar6 + 8);
          }
          *puVar8 = *puVar8 | 0x40000000;
          *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
        }
      }
    }
  }
  dVar3 = (local_38 * 65536.0) / 360.0;
  dVar3 = dVar3 + dVar3 + 0.5;
  sVar4 = (short)((ulonglong)(longlong)ROUND(dVar3) >> 1);
  if (*(short *)(param_1 + 0x8ca) != sVar4) {
    *(short *)(param_1 + 0x8ca) = sVar4;
    uVar2 = *(ulonglong *)(param_1 + -0x10d8);
    if (uVar2 < 0xffffffff00000000) {
      plVar5 = DAT_14c9980d0;
      if (DAT_14c9980d8 == 0) {
        plVar5 = (longlong *)0x0;
      }
      (**(code **)(*plVar5 + 0x58))(SUB84(dVar3,0),plVar1,uVar2,0x1f);
    }
    else {
      uVar9 = (uint)uVar2;
      if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
        puVar7 = &DAT_14c998070;
        if (DAT_14c998080 != (undefined *)0x0) {
          puVar7 = DAT_14c998080;
        }
        if ((*(uint *)(puVar7 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
          lVar6 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
          puVar8 = *(uint **)(lVar6 + 0x18);
          if (*(uint **)(lVar6 + 0x18) == (uint *)0x0) {
            puVar8 = (uint *)(lVar6 + 8);
          }
          *puVar8 = *puVar8 | 0x80000000;
          *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) | 1;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418657ac FUN_1418657ac body=71 status=ok
// SIG undefined FUN_1418657ac(void)

undefined8 * FUN_1418657ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = *param_2;
  uVar1 = FUN_14477b664(param_2[1]);
  uVar1 = FUN_14477b664(uVar1);
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  return param_1;
}



// FUNCTION 1418657f4 FUN_1418657f4 body=255 status=ok
// SIG undefined FUN_1418657f4(void)

longlong FUN_1418657f4(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 0x3910);
  if (lVar4 != 0) {
    lVar4 = (**(code **)(*(longlong *)(lVar4 + 0x28) + 0x10))(lVar4 + 0x28);
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(lVar4 + 0x148);
      local_30 = lVar1;
      uVar5 = FUN_14477b664(*(undefined8 *)(lVar4 + 0x150));
      local_28 = FUN_14477b664(uVar5);
      lVar4 = *(longlong *)(lVar4 + 0x158);
      if (local_28 == 0) {
        uVar5 = FUN_14043db3a();
        local_28 = FUN_14477b664(uVar5);
      }
      if (lVar4 != 0) goto LAB_141865866;
      local_20 = 0;
      lVar4 = 0;
      if ((lVar1 == 0) || (local_28 == 0)) goto LAB_141865866;
      plVar2 = *(longlong **)(local_28 + 0xb8);
      if (plVar2 != (longlong *)0x0) {
        cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2);
        if (cVar3 != '\0') {
          uVar5 = (**(code **)(*plVar2 + 0x110))(plVar2);
          lVar4 = FUN_144aff482(uVar5,&local_30);
          goto LAB_141865866;
        }
      }
    }
  }
  lVar4 = 0;
LAB_141865866:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141865924 FUN_141865924 body=48 status=ok
// SIG undefined FUN_141865924(void)

undefined1 FUN_141865924(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 0x32b8) != 0) &&
     (lVar1 = FUN_14025708c(*(longlong *)(param_1 + 0x32b8),DAT_14c9abbf0), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x362);
  }
  return 0;
}



// FUNCTION 141865954 FUN_141865954 body=99 status=ok
// SIG undefined FUN_141865954(void)

void FUN_141865954(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-6] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418659b8 FUN_1418659b8 body=202 status=ok
// SIG undefined FUN_1418659b8(void)

longlong * FUN_1418659b8(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = 0xffffffff;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_24,4);
    }
    else {
      thunk_FUN_14572512c(param_1,&local_24);
    }
  }
  else {
    local_24 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((int)local_24 < 0) || (*(int *)(param_1[0x14] + 0x20) <= (int)local_24)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(*(longlong *)(param_1[0x14] + 0x18) + (ulonglong)local_24 * 8);
    if ((DAT_14c950c29 == '\x01') && (lVar3 != 0)) {
      FUN_1456cec3c(lVar3);
    }
  }
  *param_2 = lVar3;
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141865a84 FUN_141865a84 body=192 status=ok
// SIG undefined FUN_141865a84(void)

longlong * FUN_141865a84(longlong *param_1,ulonglong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0xffffffff;
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_1c,4);
      uVar3 = local_1c;
    }
    else {
      thunk_FUN_14572512c(param_1,&local_1c);
      uVar3 = local_1c;
    }
  }
  else {
    uVar3 = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (((int)uVar3 < 0) || (*(int *)(param_1[0x14] + 0x30) <= (int)uVar3)) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    uVar5 = *(ulonglong *)(*(longlong *)(param_1[0x14] + 0x28) + (ulonglong)uVar3 * 8);
    uVar4 = uVar5 & 0xffffffff00000000;
    uVar5 = uVar5 & 0xffffffff;
  }
  *param_2 = uVar4 | uVar5;
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 141865b46 FUN_141865b46 body=29 status=ok
// SIG undefined FUN_141865b46(void)

undefined8 FUN_141865b46(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141865b64 FUN_141865b64 body=29 status=ok
// SIG undefined FUN_141865b64(void)

undefined8 FUN_141865b64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141865b82 FUN_141865b82 body=29 status=ok
// SIG undefined FUN_141865b82(void)

undefined8 FUN_141865b82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141865ba0 FUN_141865ba0 body=603 status=ok
// SIG undefined FUN_141865ba0(void)

void FUN_141865ba0(longlong *param_1)

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
        lVar13 = (longlong)iVar7 * 0x68;
        uVar2 = *(undefined8 *)(lVar14 + lVar13);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 100 + lVar13) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x60 + lVar13) =
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
            if (iVar3 - lVar14 == lVar13) goto LAB_141865d99;
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
LAB_141865d99:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141865dfc FUN_141865dfc body=204 status=ok
// SIG undefined FUN_141865dfc(void)

uint * FUN_141865dfc(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((param_2 == (longlong *)0x0) || (lVar4 = (**(code **)(*param_2 + 8))(param_2), lVar4 == 0)) {
    *param_1 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)(lVar4 + 0xc);
    *param_1 = uVar3;
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar5 = DAT_14c964868 + 1;
      bVar6 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar6) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar5);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar6 = uVar3 == 0;
      if (bVar6) {
        *(uint *)(lVar4 + 0x10) = uVar5;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar6) {
        uVar3 = uVar5;
      }
    }
  }
  param_1[1] = uVar3;
  cVar2 = FUN_14493c216(param_1,0);
  if (cVar2 == '\0') {
    *(longlong **)(param_1 + 2) = param_2;
  }
  return param_1;
}



// FUNCTION 141865ec8 FUN_141865ec8 body=29 status=ok
// SIG undefined FUN_141865ec8(void)

undefined8 FUN_141865ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141865ee6 FUN_141865ee6 body=126 status=ok
// SIG undefined FUN_141865ee6(void)

void FUN_141865ee6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e74e0;
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x18);
  puVar1[3] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *puVar1 = &PTR_FUN_14b3e7470;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141865f64 FUN_141865f64 body=29 status=ok
// SIG undefined FUN_141865f64(void)

undefined8 FUN_141865f64(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141865f82 FUN_141865f82 body=370 status=ok
// SIG undefined FUN_141865f82(void)

void FUN_141865f82(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14186600b;
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
LAB_14186600b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 1418660f4 FUN_1418660f4 body=353 status=ok
// SIG undefined FUN_1418660f4(void)

void FUN_1418660f4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141866179;
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
LAB_141866179:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141866256 FUN_141866256 body=101 status=ok
// SIG undefined FUN_141866256(void)

void FUN_141866256(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e7880;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e7810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418662bc FUN_1418662bc body=147 status=ok
// SIG undefined FUN_1418662bc(void)

void FUN_1418662bc(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e8000);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b4049a0);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  FUN_140a6acaa(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141866350 FUN_141866350 body=102 status=ok
// SIG undefined FUN_141866350(void)

void FUN_141866350(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140a0f7b0();
  local_28 = 0x4897a06a;
  uStack_24 = 0xa30b4775;
  uStack_20 = 0xb8d91478;
  uStack_1c = 0x70e6004a;
  FUN_1448a256a(param_1);
  local_38 = 0xb63c4382;
  uStack_34 = 0xb3c04540;
  uStack_30 = 0xb088406f;
  uStack_2c = 0x79a4f26f;
  FUN_1448a256a(param_1);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418663b8 FUN_1418663b8 body=331 status=ok
// SIG undefined FUN_1418663b8(void)

void FUN_1418663b8(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(param_1 + 0x40);
  if (lVar2 == 0) goto LAB_1418664df;
  if (*(int *)(param_1 + 0x4c) == 0) {
LAB_1418664fd:
    plVar6 = (longlong *)0x0;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x48);
    plVar6 = (longlong *)0x0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(int *)(puVar5 + 2) != *(int *)(param_1 + 0x4c) ||
          ((*(uint *)(puVar5 + 1) & 0x10200000) != 0)))) goto LAB_1418664fd;
      plVar6 = (longlong *)*puVar5;
    }
  }
  *(undefined4 *)((longlong)plVar6 + 0x39c) = *(undefined4 *)(lVar2 + 0x250);
  *(undefined4 *)((longlong)plVar6 + 0x54c) = *(undefined4 *)(lVar2 + 0x254);
  lVar3 = plVar6[0x85];
  if (lVar3 != 0) {
    local_28 = *(undefined8 *)(lVar3 + 0x1c0);
    local_38 = *(undefined8 *)(lVar3 + 0x1b0);
    uStack_30 = *(undefined8 *)(lVar3 + 0x1b8);
    local_58 = *(undefined4 *)(lVar3 + 0x198);
    uStack_54 = *(undefined4 *)(lVar3 + 0x19c);
    uStack_50 = *(undefined4 *)(lVar3 + 0x1a0);
    uStack_4c = *(undefined4 *)(lVar3 + 0x1a4);
    local_48 = *(undefined8 *)(lVar3 + 0x1a8);
    (**(code **)(*plVar6 + 0x7b0))(plVar6);
  }
  lVar3 = (**(code **)(*plVar6 + 0x638))(plVar6);
  if (lVar3 != 0) {
    lVar4 = FUN_140f27e30();
    if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8)
        == lVar4 + 0x30)) {
      *(undefined4 *)(lVar3 + 800) = *(undefined4 *)(lVar2 + 0x260);
    }
  }
LAB_1418664df:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141866504 FUN_141866504 body=1014 status=ok
// SIG undefined FUN_141866504(void)

void FUN_141866504(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  longlong *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar5 = FUN_14035606c(param_1 + 0x1e0);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  pvStack_a0 = (void *)0x0;
  local_98 = 0;
  if (lVar5 == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_a8 = 0;
  }
  else {
    FUN_1400bbfc4(&local_68,lVar5);
    uStack_b0 = CONCAT44(uStack_64,local_68);
    local_a8 = CONCAT44(uStack_5c,uStack_60);
    if (pvStack_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    pvStack_a0 = local_58;
    local_98 = CONCAT44(uStack_4c,uStack_50);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    uVar7 = *(uint *)(lVar5 + 0xc);
    if (cVar3 != '\0') {
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
        local_b8 = 0;
        goto LAB_1418665e2;
      }
    }
    local_b8 = CONCAT44(local_b8._4_4_,uVar7);
    if ((int)uVar7 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    iVar4 = *(int *)(lVar5 + 0x10);
    if (*(int *)(lVar5 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      iVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar6);
      }
      LOCK();
      iVar4 = *(int *)(lVar5 + 0x10);
      bVar9 = iVar4 == 0;
      if (bVar9) {
        *(int *)(lVar5 + 0x10) = iVar6;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar9) {
        iVar4 = iVar6;
      }
    }
    local_b8 = CONCAT44(iVar4,(undefined4)local_b8);
  }
LAB_1418665e2:
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_70 = (longlong *)0x0;
  if (uStack_b0 == 0) {
    local_68 = *(undefined4 *)(param_1 + 0x1e8);
    uStack_64 = *(undefined4 *)(param_1 + 0x1ec);
    uStack_60 = *(undefined4 *)(param_1 + 0x1f0);
    uStack_5c = *(undefined4 *)(param_1 + 500);
    local_58 = (void *)0x0;
    uStack_50 = *(uint *)(param_1 + 0x200);
    lVar5 = (longlong)(int)uStack_50;
    pvVar2 = *(void **)(param_1 + 0x1f8);
    if (lVar5 == 0) {
      uStack_4c = 0;
      uVar7 = 0;
    }
    else {
      FUN_1446dd670(&local_58,uStack_50,0);
      memcpy(local_58,pvVar2,lVar5 * 2);
      uVar7 = uStack_50;
    }
    pvVar2 = local_58;
    local_b8 = 0;
    uStack_b0 = CONCAT44(uStack_64,local_68);
    local_a8 = CONCAT44(uStack_5c,uStack_60);
    local_98 = CONCAT44(local_98._4_4_,uVar7);
    if (local_98._4_4_ == 0 && uVar7 == 0) {
      local_98 = (ulonglong)uVar7;
    }
    else {
      FUN_1446dd670(&pvStack_a0,uVar7);
      if (uVar7 != 0) {
        memcpy(pvStack_a0,pvVar2,(longlong)(int)uVar7 * 2);
      }
    }
    if (local_58 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_14042b1ec(param_2,&local_b8,1);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (pvStack_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0x210) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x208);
    lVar8 = (longlong)*(int *)(param_1 + 0x210) * 0x28;
    do {
      FUN_14579c524(&local_b8,lVar5);
      FUN_14042b1ec(param_2,&local_b8,1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x330) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x328);
    lVar8 = (longlong)*(int *)(param_1 + 0x330) * 0x28;
    do {
      FUN_140d2594c(&local_b8,lVar5);
      FUN_14042b1ec(param_2,&local_b8,1);
      if (local_70 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_70 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_70 + 0x10))();
        }
      }
      if (pvStack_a0 != (void *)0x0) {
        FUN_1400020a8();
      }
      lVar5 = lVar5 + 0x28;
      lVar8 = lVar8 + -0x28;
    } while (lVar8 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418668fc FUN_1418668fc body=48 status=ok
// SIG undefined FUN_1418668fc(void)

void FUN_1418668fc(longlong param_1,undefined8 param_2)

{
  FUN_140608954(param_2,param_1 + 0x3a0);
  FUN_14094f414(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 14186692c FUN_14186692c body=313 status=ok
// SIG undefined FUN_14186692c(void)

void FUN_14186692c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38 [3];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != 0) {
    if (DAT_14cb5b388 == 0) {
      local_50 = local_38;
      local_38[0] = FUN_141864c34;
      local_40 = FUN_14081d0ea;
      local_48 = &LAB_146431698;
      local_58 = &LAB_1486775cb;
      local_60 = &LAB_1464cee35;
      local_68 = &DAT_149e063b2;
      local_70 = 0;
      local_78 = 0x10000005;
      local_80 = 0x10;
      local_88 = 0x3a20;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    }
    if (((*(int *)(DAT_14cb5b388 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) == DAT_14cb5b388 + 0x30)) &&
       (*(char *)(param_2 + 0x178) == '\x03')) {
      FUN_1403629b4(param_2,local_38,param_1);
      FUN_14035d9aa(param_2,local_38);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141866a66 FUN_141866a66 body=340 status=ok
// SIG undefined FUN_141866a66(void)

void FUN_141866a66(longlong *param_1,code *param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_28 = param_2;
  uVar3 = FUN_14477b072(param_1,DAT_14cac9ae0);
  (**(code **)(*param_1 + 0x248))(param_1,uVar3,&local_28);
  if (param_2 != (code *)0x0) {
    if (DAT_14cacf818 == 0) {
      local_28 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1463b216c;
      local_48 = &LAB_1479977e3;
      local_50 = &LAB_1463b2171;
      local_58 = &DAT_149e063b2;
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x750;
      local_40 = &local_28;
      FUN_14081cfa3(L"/Script/Engine",L"Character",&DAT_14cacf818,FUN_1463b214a);
    }
    if ((*(int *)(DAT_14cacf818 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cacf818 + 0x38) * 8) == DAT_14cacf818 + 0x30)) {
      cVar2 = FUN_1449ce97a(param_2);
      if (cVar2 != '\0') {
        plVar1 = param_1 + 0x389;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if (((int)*plVar1 == 0) && ((char)param_1[0x36a] == '\x03')) {
          *(undefined1 *)(param_1 + 0x36a) = 0;
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141866bbc FUN_141866bbc body=352 status=ok
// SIG undefined FUN_141866bbc(void)

void FUN_141866bbc(longlong param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  float fVar7;
  double dVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  uint local_48 [6];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140850e3c();
  if (*(char *)(param_2 + 0x10) == '\0') {
    local_50 = DAT_14cb71478;
    local_58 = DAT_14cb71470;
    FUN_1448075d0(local_48);
    pbVar2 = (byte *)*param_3;
    if (pbVar2 != (byte *)0x0) {
      if ((*pbVar2 & 2) == 0) {
        plVar3 = &DAT_14c9a1288;
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(pbVar2 + 8) + 0x18);
      }
      if ((int)plVar3[2] != *(int *)((longlong)plVar3 + 0x3c)) {
        plVar6 = plVar3 + 8;
        if ((longlong *)plVar3[9] != (longlong *)0x0) {
          plVar6 = (longlong *)plVar3[9];
        }
        iVar5 = *(int *)((longlong)plVar6 + (ulonglong)((int)plVar3[10] - 1U & local_48[0]) * 4);
        if (iVar5 != -1) {
          do {
            lVar1 = *plVar3 + (longlong)iVar5 * 0x40;
            if (*(uint *)(*plVar3 + (longlong)iVar5 * 0x40) == local_48[0]) {
              if ((((lVar1 != 0) &&
                   (puVar4 = (undefined8 *)(lVar1 + 0x28), puVar4 != (undefined8 *)0x0)) &&
                  ((byte *)*puVar4 != (byte *)0x0)) && ((*(byte *)*puVar4 & 0x40) == 0))
              goto LAB_141866c7c;
              break;
            }
            iVar5 = *(int *)(lVar1 + 0x38);
          } while (iVar5 != -1);
        }
      }
    }
    puVar4 = &DAT_14c9a1308;
LAB_141866c7c:
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    pbVar2 = (byte *)*puVar4;
    if ((pbVar2 != (byte *)0x0) && ((*pbVar2 & 3) != 0)) {
      fVar7 = (float)FUN_142b20b5c(pbVar2,0x437a0000);
      *(float *)(param_1 + 0x3e0) = fVar7;
      *(float *)(param_1 + 0x3d8) = fVar7;
      dVar8 = (double)fVar7;
      *(double *)(param_1 + 0x3c0) = dVar8;
      *(double *)(param_1 + 0x3c8) = dVar8;
      *(double *)(param_1 + 0x3d0) = dVar8;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141866d1e FUN_141866d1e body=20 status=ok
// SIG undefined FUN_141866d1e(void)

undefined4 FUN_141866d1e(void)

{
  longlong lVar1;
  
  lVar1 = FUN_14092c0b8();
  return *(undefined4 *)(lVar1 + 0xbc);
}



// FUNCTION 141866d32 FUN_141866d32 body=213 status=ok
// SIG undefined FUN_141866d32(void)

void FUN_141866d32(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
    *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 2;
    FUN_1406ca06e(param_1);
  }
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0)) {
    lVar5 = (**(code **)(*(longlong *)(param_1 + 0x398) + 0x10))(param_1 + 0x398);
    if (lVar5 != 0) {
      lVar5 = FUN_140849bbe(lVar5);
      if (lVar5 != 0) {
        local_48 = *(undefined8 *)(lVar5 + 0x1c0);
        local_58 = *(undefined8 *)(lVar5 + 0x1b0);
        uStack_50 = *(undefined8 *)(lVar5 + 0x1b8);
        uVar1 = *(undefined4 *)(lVar5 + 0x198);
        uVar2 = *(undefined4 *)(lVar5 + 0x19c);
        uVar3 = *(undefined4 *)(lVar5 + 0x1a0);
        uVar4 = *(undefined4 *)(lVar5 + 0x1a4);
        *(undefined8 *)(&DAT_000018f8 + param_1) = *(undefined8 *)(lVar5 + 0x1a8);
        *(undefined4 *)(param_1 + 0x18e8) = uVar1;
        *(undefined4 *)(param_1 + 0x18ec) = uVar2;
        *(undefined4 *)(param_1 + 0x18f0) = uVar3;
        *(undefined4 *)(param_1 + 0x18f4) = uVar4;
        FUN_144a7484c(&local_58,&local_38);
        *(undefined8 *)(param_1 + 0x1910) = local_28;
        *(undefined8 *)(param_1 + 0x1918) = uStack_20;
        *(undefined4 *)(param_1 + 0x1900) = local_38;
        *(undefined4 *)(param_1 + 0x1904) = uStack_34;
        *(undefined4 *)(param_1 + 0x1908) = uStack_30;
        *(undefined4 *)(param_1 + 0x190c) = uStack_2c;
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141866e08 FUN_141866e08 body=340 status=ok
// SIG undefined FUN_141866e08(void)

void FUN_141866e08(longlong *param_1)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((char)param_1[0x2e6] != '\0') goto LAB_141866f50;
  *(undefined1 *)(param_1 + 0x2e6) = 1;
  uVar1 = *(uint *)((longlong)param_1 + 0x16d4);
  iVar2 = (int)param_1[0x2db];
  if (uVar1 == 0) {
    if (iVar2 != 0) goto LAB_141866e51;
    lVar4 = param_1[0x2d];
  }
  else if (iVar2 == 0) {
LAB_141866f27:
    lVar4 = 0;
  }
  else {
LAB_141866e51:
    lVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      plVar3 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((plVar3 == (longlong *)0x0) ||
         (((int)plVar3[2] != iVar2 || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))))
      goto LAB_141866f27;
      lVar4 = *plVar3;
    }
  }
  if (lVar4 == 0 && (char)param_1[0x2df] != '\x02') {
LAB_141866f50:
    if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  if ((char)param_1[0x2df] != '\x02') {
    plVar3 = param_1 + 0x2c8;
    if (param_1[0x309] == 0) goto LAB_141866edc;
    if (param_1[0x2d] == lVar4) {
      plVar3 = (longlong *)(param_1[0x309] + 0x6f1);
      goto LAB_141866edc;
    }
  }
  plVar3 = (longlong *)((longlong)param_1 + 0x16d2);
LAB_141866edc:
  if ((char)param_1[0x2c8] != (char)*plVar3) {
    (**(code **)(*param_1 + 0x6e0))(param_1);
  }
  local_20 = lVar4;
  FUN_1447cd2ec(param_1 + 0x2be);
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
}



// FUNCTION 141866f6e FUN_141866f6e body=202 status=ok
// SIG undefined FUN_141866f6e(void)

void FUN_141866f6e(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 0x1730) = 0;
  uVar1 = *(uint *)(param_1 + 0x16d4);
  iVar2 = *(int *)(param_1 + 0x16d8);
  if (uVar1 == 0) {
    if (iVar2 == 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x168);
      goto LAB_141866fe0;
    }
LAB_141866fa6:
    uVar4 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_141866fe0;
    puVar3 = (undefined8 *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((puVar3 != (undefined8 *)0x0) &&
       ((*(int *)(puVar3 + 2) == iVar2 && ((*(uint *)(puVar3 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar3;
      goto LAB_141866fe0;
    }
  }
  else if (iVar2 != 0) goto LAB_141866fa6;
  uVar4 = 0;
LAB_141866fe0:
  FUN_1400da9ba(param_1 + 0x1628,uVar4);
  local_20 = uVar4;
  FUN_1447cd2ec(param_1 + 0x1618);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186703a FUN_14186703a body=40 status=ok
// SIG undefined FUN_14186703a(void)

void FUN_14186703a(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x410,param_1 + 0x408);
  return;
}



// FUNCTION 141867068 FUN_141867068 body=390 status=ok
// SIG undefined FUN_141867068(void)

void FUN_141867068(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  iVar5 = *(int *)(param_1 + 0xcf4);
  *(int *)(param_1 + 0xcf4) = iVar5 + 1;
  uVar6 = (ulonglong)*(int *)(param_1 + 0xce8);
  if ((longlong)uVar6 < 1) {
    *(int *)(param_1 + 0xcf4) = iVar5;
  }
  else {
    plVar1 = (longlong *)(param_1 + 0xce0);
    bVar8 = false;
    do {
      lVar10 = uVar6 * 0x10 + -8;
      uVar11 = uVar6;
      while (((*(int *)(*plVar1 + lVar10) != 0 &&
              (plVar2 = *(longlong **)(*plVar1 + -8 + lVar10), plVar2 != (longlong *)0x0)) &&
             (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
        lVar10 = lVar10 + -0x10;
        bVar3 = uVar11 < 2;
        uVar11 = uVar11 - 1;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0xcf4) + -1;
          *(int *)(param_1 + 0xcf4) = iVar5;
          if (bVar8) goto LAB_14186714d;
          goto LAB_1418670fe;
        }
      }
      uVar6 = uVar11 - 1;
      bVar8 = true;
    } while (1 < uVar11);
    iVar5 = *(int *)(param_1 + 0xcf4) + -1;
    *(int *)(param_1 + 0xcf4) = iVar5;
LAB_14186714d:
    if (iVar5 < 1) {
      iVar5 = *(int *)(param_1 + 0xce8);
      iVar7 = iVar5;
      if (0 < iVar5) {
        iVar9 = 0;
        do {
          if (((*(int *)(*plVar1 + 8 + (longlong)iVar9 * 0x10) == 0) ||
              (plVar2 = *(longlong **)(*plVar1 + (longlong)iVar9 * 0x10), plVar2 == (longlong *)0x0)
              ) || (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
            FUN_14005b288(plVar1,iVar9);
            FUN_14005b248(plVar1);
          }
          else {
            iVar9 = iVar9 + 1;
          }
          iVar7 = *(int *)(param_1 + 0xce8);
        } while (iVar9 < iVar7);
      }
      iVar9 = 2;
      if (2 < iVar7 * 2) {
        iVar9 = iVar7 * 2;
      }
      *(int *)(param_1 + 0xcf0) = iVar9;
      if ((iVar9 < iVar5) && (*(int *)(param_1 + 0xcec) != iVar7)) {
        FUN_14045812c(plVar1);
      }
    }
  }
LAB_1418670fe:
  plVar1 = *(longlong **)(param_1 + 0x448);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014186712c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x6a0))(plVar1,param_2);
  return;
}



// FUNCTION 1418671ee FUN_1418671ee body=77 status=ok
// SIG undefined FUN_1418671ee(void)

void FUN_1418671ee(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x280);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(plVar1 + 1) >> 0x1e & 1) == 0)) {
    uVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1);
    FUN_14105a17e(plVar1,param_2,param_3,uVar2,1);
  }
  return;
}



// FUNCTION 14186723c FUN_14186723c body=206 status=ok
// SIG undefined FUN_14186723c(void)

void FUN_14186723c(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 *param_5,undefined1 param_6)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 *local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + -0x518) != 0) {
    lVar3 = FUN_140183ac4();
    plVar1 = *(longlong **)(param_1 + -0x518);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_38 = *(undefined8 *)(param_5 + 4);
      local_58 = &local_48;
      local_48 = *param_5;
      uStack_44 = param_5[1];
      uStack_40 = param_5[2];
      uStack_3c = param_5[3];
      local_50 = param_6;
      (**(code **)(*plVar1 + 0x8a0))(plVar1,param_2,param_3,param_4);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186730c FUN_14186730c body=116 status=ok
// SIG undefined FUN_14186730c(void)

void FUN_14186730c(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + -0x518) != 0) {
    lVar3 = FUN_140183ac4();
    plVar1 = *(longlong **)(param_1 + -0x518);
    if ((((plVar1 != (longlong *)0x0) && (lVar3 != 0)) && (lVar2 = plVar1[2], lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
                    /* WARNING: Could not recover jumptable at 0x000141867374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x8a8))(plVar1,param_2,param_3);
      return;
    }
  }
  return;
}



// FUNCTION 141867380 FUN_141867380 body=106 status=ok
// SIG undefined FUN_141867380(void)

longlong FUN_141867380(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + -0x518) != 0) {
    lVar3 = FUN_140183ac4();
    lVar1 = *(longlong *)(param_1 + -0x518);
    if (lVar1 != 0) {
      if (lVar3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 == 0) {
        return 0;
      }
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
         (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        if (*(longlong *)(lVar1 + 0x39e0) != 0) {
          return *(longlong *)(lVar1 + 0x39e0) + 0x48;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 1418673ea FUN_1418673ea body=361 status=ok
// SIG undefined FUN_1418673ea(void)

void FUN_1418673ea(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14039bfee(param_1 + -0x990,param_2,param_2 + 1);
  lVar2 = *(longlong *)(param_1 + -0x560);
  if (lVar2 != 0) {
    if (DAT_14cae9568 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1417de738;
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
      lVar2 = *(longlong *)(param_1 + -0x560);
      if (lVar2 == 0) goto LAB_141867482;
    }
    if ((((DAT_14cae9568 != 0) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
        (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar1 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8) ==
        DAT_14cae9568 + 0x30)) {
      *param_2 = (int)((double)*param_2 * *(double *)(lVar2 + 0x90));
      param_2[1] = (int)((double)param_2[1] * *(double *)(lVar2 + 0x98));
    }
  }
LAB_141867482:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141867554 FUN_141867554 body=279 status=ok
// SIG undefined FUN_141867554(void)

void * FUN_141867554(longlong param_1,void *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  void *_Src;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  if (*(longlong **)(param_1 + -0x548) == (longlong *)0x0) {
    FUN_1400e6e60(param_2);
  }
  else {
    _Src = (void *)(**(code **)(**(longlong **)(param_1 + -0x548) + 0x670))();
    memcpy(param_2,_Src,0x98);
    cVar1 = *(char *)((longlong)_Src + 0x9c);
    *(char *)((longlong)param_2 + 0x9c) = cVar1;
    if (cVar1 == '\x01') {
      *(undefined4 *)((longlong)param_2 + 0x98) = *(undefined4 *)((longlong)_Src + 0x98);
    }
    *(undefined4 *)((longlong)param_2 + 0xa8) = *(undefined4 *)((longlong)_Src + 0xa8);
    *(undefined8 *)((longlong)param_2 + 0xa0) = *(undefined8 *)((longlong)_Src + 0xa0);
    FUN_144903306((longlong)param_2 + 0xb0,(longlong)_Src + 0xb0);
    uVar2 = *(undefined8 *)((longlong)_Src + 0x978);
    uVar3 = *(undefined8 *)((longlong)_Src + 0x980);
    uVar4 = *(undefined8 *)((longlong)_Src + 0x988);
    *(undefined8 *)((longlong)param_2 + 0x970) = *(undefined8 *)((longlong)_Src + 0x970);
    *(undefined8 *)((longlong)param_2 + 0x978) = uVar2;
    *(undefined8 *)((longlong)param_2 + 0x980) = uVar3;
    *(undefined8 *)((longlong)param_2 + 0x988) = uVar4;
    cVar1 = *(char *)((longlong)_Src + 0x9f0);
    *(char *)((longlong)param_2 + 0x9f0) = cVar1;
    if (cVar1 == '\x01') {
      puVar6 = (undefined8 *)((longlong)_Src + 0x990);
      puVar7 = (undefined8 *)((longlong)param_2 + 0x990);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    *(undefined8 *)((longlong)param_2 + 0xa20) = *(undefined8 *)((longlong)_Src + 0xa20);
    uVar2 = *(undefined8 *)((longlong)_Src + 0xa00);
    uVar3 = *(undefined8 *)((longlong)_Src + 0xa08);
    uVar4 = *(undefined8 *)((longlong)_Src + 0xa18);
    *(undefined8 *)((longlong)param_2 + 0xa10) = *(undefined8 *)((longlong)_Src + 0xa10);
    *(undefined8 *)((longlong)param_2 + 0xa18) = uVar4;
    *(undefined8 *)((longlong)param_2 + 0xa00) = uVar2;
    *(undefined8 *)((longlong)param_2 + 0xa08) = uVar3;
  }
  return param_2;
}



// FUNCTION 14186766c FUN_14186766c body=31 status=ok
// SIG undefined FUN_14186766c(void)

undefined1 FUN_14186766c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xc30) != 0) {
    FUN_1411a610c();
  }
  return 1;
}



// FUNCTION 14186768c FUN_14186768c body=26 status=ok
// SIG undefined FUN_14186768c(void)

void FUN_14186768c(undefined8 param_1)

{
  FUN_1407fb560();
  FUN_1405211a0(param_1);
  return;
}



// FUNCTION 1418676a6 FUN_1418676a6 body=48 status=ok
// SIG undefined FUN_1418676a6(void)

void FUN_1418676a6(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e8688);
  FUN_1402d084a(param_1,param_2);
  return;
}



// FUNCTION 1418676d6 FUN_1418676d6 body=38 status=ok
// SIG undefined FUN_1418676d6(void)

void FUN_1418676d6(longlong param_1)

{
  FUN_1401b2056();
  FUN_140491244(param_1 + 0x988);
  FUN_1406c9b82(param_1);
  return;
}



// FUNCTION 1418676fc FUN_1418676fc body=75 status=ok
// SIG undefined FUN_1418676fc(void)

byte FUN_1418676fc(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = FUN_1447b4afa();
  bVar2 = FUN_14009cabe(param_1 + 0x638,param_2,param_3,param_4,1000);
  return bVar2 | bVar1;
}



// FUNCTION 141867748 FUN_141867748 body=505 status=ok
// SIG undefined FUN_141867748(void)

longlong * FUN_141867748(longlong *param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar6 = (**(code **)(*param_1 + 0x18))();
  if (lVar6 == 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
  }
  else {
    FUN_1400bbfc4(&local_68,lVar6);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    uVar4 = *(uint *)(lVar6 + 0xc);
    if (cVar3 != '\0') {
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar6 = 0;
      }
      if ((*(uint *)(lVar6 + 8) & 0x8400000) != 0) goto LAB_1418677e3;
    }
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      iVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar8);
      }
      LOCK();
      if (*(int *)(lVar6 + 0x10) == 0) {
        *(int *)(lVar6 + 0x10) = iVar8;
      }
      UNLOCK();
    }
  }
LAB_1418677e3:
  bVar10 = false;
  if ((*(longlong *)(param_2 + 8) == local_68) &&
     (bVar10 = false, *(longlong *)(param_2 + 0x10) == local_60)) {
    iVar5 = *(int *)(param_2 + 0x20);
    if (iVar5 == local_50) {
      bVar10 = true;
      if (iVar5 < 2) goto LAB_1418677f1;
      lVar6 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar6);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(local_58 + lVar6);
        uVar9 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_141867873;
          }
          iVar5 = uVar4 - uVar9;
          goto LAB_1418678c4;
        }
        if (uVar1 == 0) break;
LAB_141867873:
        lVar6 = lVar6 + 2;
      }
      iVar5 = 0;
    }
    else {
      iVar5 = local_50 + iVar5 + -1;
    }
LAB_1418678c4:
    bVar10 = iVar5 == 0;
  }
LAB_1418677f1:
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  plVar7 = (longlong *)0x0;
  if (bVar10) {
    plVar7 = param_1 + 0x40;
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar7;
}



// FUNCTION 141867942 FUN_141867942 body=229 status=ok
// SIG undefined FUN_141867942(void)

void FUN_141867942(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x6e8);
  if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 200) != 0)) {
    lVar4 = *(longlong *)(lVar3 + 0xc0);
    lVar3 = (longlong)*(int *)(lVar3 + 200) * 0x28;
    do {
      lVar2 = FUN_145971716(lVar4);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_145971692(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -0x28;
    } while (lVar3 != 0);
  }
  if ((longlong)*(int *)(param_1 + 0x288) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x280);
    lVar4 = (longlong)*(int *)(param_1 + 0x288) * 0x28;
    do {
      lVar2 = FUN_145971716(lVar3);
      if (lVar2 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_145971692(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
      }
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -0x28;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 141867a28 FUN_141867a28 body=292 status=ok
// SIG undefined FUN_141867a28(void)

ulonglong FUN_141867a28(longlong param_1)

{
  char cVar1;
  undefined2 *puVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  longlong local_48 [3];
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar5 = 0xffffffff;
  if ((*(byte *)(param_1 + -0x3b8) & 2) != 0) {
    plVar6 = (longlong *)(param_1 + -0x418);
    cVar1 = (**(code **)(*plVar6 + 0x1f8))(plVar6);
    if (cVar1 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0;
      uVar5 = 0;
      FUN_1401031ac(plVar6,0);
      FUN_14094a6a4(&local_30,local_48);
      iVar3 = local_28 + -1;
      if (local_28 == 0) {
        iVar3 = 0;
      }
      if (0 < iVar3) {
        puVar2 = &DAT_149dfb77a;
        if (local_28 != 0) {
          puVar2 = local_30;
        }
        lVar7 = 0;
        uVar5 = 0;
        do {
          uVar4 = ((uint)(0x19 < (ushort)puVar2[lVar7] - 0x61) * 0x20 + (uint)(ushort)puVar2[lVar7])
                  - 0x20;
          uVar8 = (uint)(uVar5 >> 8) ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(((uint)uVar5 ^ uVar4) & 0xff) * 4);
          uVar5 = (ulonglong)
                  (uVar8 >> 8 ^
                  *(uint *)(&DAT_14c75d150 + (ulonglong)(uVar8 & 0xff ^ uVar4 >> 8 & 0xff) * 4));
          lVar7 = lVar7 + 1;
        } while (iVar3 != (int)lVar7);
      }
      if (local_30 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141867b6a FUN_141867b6a body=74 status=ok
// SIG undefined FUN_141867b6a(void)

undefined8 FUN_141867b6a(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *(undefined8 *)(param_1 + -0x440);
  FUN_1400021e4();
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141867bb6 FUN_141867bb6 body=53 status=ok
// SIG undefined FUN_141867bb6(void)

undefined8 FUN_141867bb6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140427846();
  if (lVar1 != param_2) {
    uVar2 = switchD_143c3d4dc::caseD_57(param_1,param_2);
    return uVar2;
  }
  return *(undefined8 *)(param_1 + 0x3a0);
}



// FUNCTION 141867bec FUN_141867bec body=65 status=ok
// SIG undefined FUN_141867bec(void)

void FUN_141867bec(longlong param_1)

{
  longlong lVar1;
  
  FUN_140115e24();
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      FUN_14071049e(param_1 + 0x3e0,param_1);
      return;
    }
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x20);
  }
  return;
}



// FUNCTION 141867c2e FUN_141867c2e body=29 status=ok
// SIG undefined FUN_141867c2e(void)

undefined8 FUN_141867c2e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141867c4c FUN_141867c4c body=101 status=ok
// SIG undefined FUN_141867c4c(void)

void FUN_141867c4c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9590;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141867cb2 FUN_141867cb2 body=29 status=ok
// SIG undefined FUN_141867cb2(void)

undefined8 FUN_141867cb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141867cd0 FUN_141867cd0 body=101 status=ok
// SIG undefined FUN_141867cd0(void)

void FUN_141867cd0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ac8da20;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3e9620;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 141867d36 FUN_141867d36 body=93 status=ok
// SIG undefined FUN_141867d36(void)

void FUN_141867d36(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9700;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b3e9690;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 141867d94 FUN_141867d94 body=29 status=ok
// SIG undefined FUN_141867d94(void)

undefined8 FUN_141867d94(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141867db2 FUN_141867db2 body=441 status=ok
// SIG undefined FUN_141867db2(void)

undefined8 FUN_141867db2(longlong param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  uint uVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar4 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar11 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar11) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar4 = *(uint *)(lVar10 + 0x10);
      bVar11 = uVar4 == 0;
      if (bVar11) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar4 = 0;
      }
      UNLOCK();
      if (bVar11) {
        uVar4 = uVar9;
      }
    }
    local_38 = CONCAT44(uVar4,uVar1);
    iVar3 = FUN_1409a82f2((longlong *)(param_1 + 0x58),uVar1 ^ uVar4);
    if (iVar3 != -1) {
      lVar10 = *(longlong *)(param_1 + 0x58);
      lVar7 = lVar10 + (longlong)iVar3 * 0x90;
      uVar6 = 0;
      if ((lVar7 == 0) ||
         (pcVar8 = (char *)(lVar10 + (longlong)iVar3 * 0x90 + 8), pcVar8 == (char *)0x0))
      goto LAB_141867ef6;
      if ((*pcVar8 == '\x01') && (*(int *)(lVar7 + 0x30) != 0)) {
        uVar1 = *(uint *)(lVar7 + 0x2c);
        uVar6 = 0;
        if (((int)uVar1 < 0) || (uVar6 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_141867ef6;
        plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar5 != (longlong *)0x0) &&
           (((((int)plVar5[2] == *(int *)(lVar7 + 0x30) &&
              ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) &&
             (plVar5 = (longlong *)*plVar5, plVar5 != (longlong *)0x0)) &&
            ((*(char *)(lVar7 + 10) != '\0' ||
             (plVar5 = (longlong *)(**(code **)(*plVar5 + 0x9f8))(plVar5), plVar5 != (longlong *)0x0
             )))))) {
          cVar2 = FUN_1402b80e4(plVar5,param_2);
          if (cVar2 == '\0') {
            uVar6 = FUN_14096b0e8(plVar5,param_2);
          }
          else {
            uVar6 = 1;
          }
          goto LAB_141867ef6;
        }
      }
    }
  }
  uVar6 = 0;
LAB_141867ef6:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 141867f6c FUN_141867f6c body=187 status=ok
// SIG undefined FUN_141867f6c(void)

void FUN_141867f6c(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x2b8))();
  FUN_140bbc088(param_1,param_2,param_3,param_4,param_5);
  if ((param_2 != (longlong *)0x0) && (param_1[6] != 0)) {
    lVar1 = param_1[7];
    iVar2 = FUN_144909502(param_2);
    if ((char)lVar1 == '\x01') {
      if (iVar2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x000141867fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0xb90))(param_2,iVar2,*(code **)(*param_2 + 0xb90));
        return;
      }
    }
    else if (iVar2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x000141868015. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xb88))(param_2,iVar2,0,*(code **)(*param_2 + 0xb88));
      return;
    }
  }
  return;
}



// FUNCTION 141868028 FUN_141868028 body=175 status=ok
// SIG undefined FUN_141868028(void)

void FUN_141868028(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  longlong lVar1;
  int iVar2;
  
  (**(code **)(*param_1 + 0x2d8))();
  FUN_140bc0c12(param_1,param_2,param_3,param_4,param_5);
  if ((param_2 != (longlong *)0x0) && (param_1[6] != 0)) {
    lVar1 = param_1[7];
    iVar2 = FUN_144909502(param_2);
    if ((char)lVar1 == '\x01') {
      if (iVar2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001418680a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_2 + 0xb88))(param_2,iVar2,0,*(code **)(*param_2 + 0xb88));
        return;
      }
    }
    else if (iVar2 != -1) {
                    /* WARNING: Could not recover jumptable at 0x0001418680c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0xb90))(param_2,iVar2,*(code **)(*param_2 + 0xb90));
      return;
    }
  }
  return;
}



// FUNCTION 1418680d8 FUN_1418680d8 body=329 status=ok
// SIG undefined FUN_1418680d8(void)

void FUN_1418680d8(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  lVar7 = *param_2;
  if ((lVar7 != 0) && (lVar5 = *(longlong *)(lVar7 + 0x130), lVar5 != 0)) {
    lVar6 = FUN_140890cca();
    lVar5 = *(longlong *)(lVar5 + 0x10);
    if ((*(int *)(lVar6 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30)) goto LAB_141868133;
  }
  lVar7 = 0;
LAB_141868133:
  *(longlong *)(param_1 + 0xf0) = lVar7;
  uVar2 = *(uint *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x70);
  plVar1 = (longlong *)(param_1 + 0x128);
  iVar4 = *(int *)(param_1 + 0x130);
  if (iVar4 < iVar3) {
    *(int *)(param_1 + 0x130) = iVar3;
    if ((uint)(*(int *)(param_1 + 0x134) - iVar4) < (uint)(iVar3 - iVar4)) {
      FUN_14475e4ac(plVar1);
    }
    memset((void *)((longlong)iVar4 * 4 + *plVar1),0,(longlong)(iVar3 - iVar4) << 2);
  }
  else {
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar3 < iVar4) {
      *(int *)(param_1 + 0x130) = iVar3;
      FUN_1401fef06(plVar1);
    }
  }
  FUN_140320438(param_1 + 0x18,param_2);
  if (0 < (int)uVar2) {
    lVar7 = 0;
    do {
      FUN_140320438(*(longlong *)(param_1 + 0x28) + lVar7,param_2);
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)uVar2 << 4 != lVar7);
    FUN_144a62104(param_1,*(undefined8 *)(*param_2 + 0x6a0),*(undefined8 *)(*param_2 + 0x140));
    return;
  }
  return;
}



// FUNCTION 141868222 FUN_141868222 body=397 status=ok
// SIG undefined FUN_141868222(void)

longlong FUN_141868222(longlong param_1,longlong param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    uVar2 = *(uint *)(lVar8 + 0x10);
    if (*(uint *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar3 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar3;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar2 = *(uint *)(lVar8 + 0x10);
      bVar9 = uVar2 == 0;
      if (bVar9) {
        *(uint *)(lVar8 + 0x10) = uVar6;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar2 = uVar6;
      }
    }
  }
  if (*(int *)(param_1 + 0xa8) != *(int *)(param_1 + 0xd4)) {
    lVar8 = param_1 + 0xd8;
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar8 = *(longlong *)(param_1 + 0xe0);
    }
    iVar3 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0xe8) - 1U & (uVar2 ^ uVar5)) * 4);
    if (iVar3 != -1) {
      lVar8 = *(longlong *)(param_1 + 0xa0);
      lVar4 = 0;
      do {
        lVar7 = (longlong)iVar3 * 0x230;
        local_40 = *(undefined8 *)(lVar8 + lVar7);
        local_48 = CONCAT44(uVar2,uVar5);
        cVar1 = FUN_144717174(&local_40,&local_48);
        lVar8 = *(longlong *)(param_1 + 0xa0);
        if (cVar1 != '\0') {
          lVar4 = lVar8 + lVar7;
          break;
        }
        iVar3 = *(int *)(lVar8 + 0x228 + lVar7);
      } while (iVar3 != -1);
      goto LAB_141868317;
    }
  }
  lVar4 = 0;
LAB_141868317:
  lVar8 = lVar4 + 8;
  if (lVar4 == 0) {
    lVar8 = 0;
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1418683b0 FUN_1418683b0 body=129 status=ok
// SIG undefined FUN_1418683b0(void)

void FUN_1418683b0(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((*(char *)(param_1 + 0x140) == '\x01') && (*(longlong *)(param_1 + 0x18) != 0)) {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)((longlong)param_2 + 0x14);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar1;
    plVar2 = *(longlong **)(param_1 + 0x18);
    if (*(code **)(*plVar2 + 0x30) != FUN_1447d4948) {
                    /* WARNING: Could not recover jumptable at 0x0001418683f5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
      return;
    }
    FUN_1447d4948(plVar2,param_2);
    return;
  }
  lVar3 = *(longlong *)(*param_2 + 0x6a0);
  FUN_14018c8cc(param_2 + 4,lVar3);
  param_2[0x10] = lVar3 + 0xb0;
  return;
}



// FUNCTION 141868432 FUN_141868432 body=741 status=ok
// SIG undefined FUN_141868432(void)

void FUN_141868432(longlong param_1,undefined8 param_2)

{
  float fVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  double local_90;
  double local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  longlong local_70;
  longlong local_68;
  undefined1 local_60;
  undefined1 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(param_1 + 0x130);
  if (lVar7 != 0) {
    if ((*(longlong *)(param_1 + 0x1e0) != 0) && ((longlong)*(int *)(lVar7 + 0xbe8) != 0)) {
      lVar3 = *(longlong *)(lVar7 + 0xbe0);
      lVar4 = (longlong)*(int *)(lVar7 + 0xbe8) * 0x58 + lVar3;
      do {
        if ((longlong)*(int *)(lVar3 + 0x50) != 0) {
          lVar6 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar3 + 0x48) + lVar6) == *(longlong *)(param_1 + 0x1e0)
               ) {
              if (((lVar3 != 0) && (-1 < *(int *)(lVar3 + 4))) &&
                 (*(int *)(lVar3 + 4) < *(int *)(param_1 + 0x28))) {
                uStack_74 = CONCAT31(uStack_74._1_3_,*(undefined1 *)(param_1 + 0x13c));
                local_78 = *(undefined4 *)(param_1 + 0x138);
                local_70 = *(longlong *)(param_1 + 0x140);
                if ((local_70 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                local_68 = *(longlong *)(param_1 + 0x148);
                if ((local_68 != 0 & DAT_14c950c29) == 1) {
                  FUN_1456cec3c();
                }
                local_60 = *(undefined1 *)(param_1 + 0x150);
                local_58 = 1;
                FUN_1403201ee(param_1,*(undefined4 *)(lVar3 + 4));
                lVar7 = *(longlong *)(param_1 + 0x130);
              }
              goto LAB_14186854c;
            }
            lVar6 = lVar6 + 8;
          } while ((longlong)*(int *)(lVar3 + 0x50) * 8 != lVar6);
        }
        lVar3 = lVar3 + 0x58;
      } while (lVar3 != lVar4);
LAB_14186854c:
      if (lVar7 == 0) goto LAB_14186862b;
    }
    fVar1 = *(float *)(lVar7 + 0xbd8);
    if ((longlong)*(int *)(param_1 + 0x1c0) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x1b8);
      lVar7 = (longlong)*(int *)(param_1 + 0x1c0) << 8;
      do {
        lVar3 = (**(code **)(*plVar5 + 0x198))(plVar5);
        if (lVar3 != 0) {
          lVar4 = FUN_1402576f0();
          if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar4 + 0x38) * 8) == lVar4 + 0x30)) {
            (**(code **)(*plVar5 + 0x1e8))(plVar5,fVar1);
            (**(code **)(*plVar5 + 0x1f0))(plVar5,*(undefined4 *)(lVar3 + 0x1f8));
          }
        }
        plVar5 = plVar5 + 0x20;
        lVar7 = lVar7 + -0x100;
      } while (lVar7 != 0);
    }
    bVar2 = true;
    if ((*(char *)(param_1 + 0x1ae) != '\0') &&
       (fVar1 < *(float *)(param_1 + 0x1b0) || fVar1 == *(float *)(param_1 + 0x1b0))) {
      bVar2 = *(float *)(param_1 + 0x1d8) <= fVar1 && fVar1 != *(float *)(param_1 + 0x1d8);
    }
    if ((longlong)*(int *)(param_1 + 0x1d0) != 0) {
      plVar5 = *(longlong **)(param_1 + 0x1c8);
      lVar7 = (longlong)*(int *)(param_1 + 0x1d0) * 0x108;
      do {
        fVar8 = fVar1;
        if (!bVar2) {
          (**(code **)(*plVar5 + 0x1a0))(plVar5,&local_78);
          fVar8 = (float)(double)CONCAT44(uStack_74,local_78);
        }
        local_88 = (double)*(float *)(*(longlong *)(param_1 + 0x130) + 0xbdc);
        local_90 = (double)fVar8;
        local_80 = 0;
        (**(code **)(*plVar5 + 0x1e8))(plVar5,&local_90);
        plVar5 = plVar5 + 0x21;
        lVar7 = lVar7 + -0x108;
      } while (lVar7 != 0);
    }
    *(float *)(param_1 + 0x1d8) = fVar1;
  }
LAB_14186862b:
  FUN_14491269a(param_1,param_2);
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141868718 FUN_141868718 body=89 status=ok
// SIG undefined FUN_141868718(void)

void FUN_141868718(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1 + 0xe0;
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    lVar3 = *(longlong *)(param_1 + 0xf0);
  }
  iVar1 = *(int *)(param_1 + 0xf8);
  if ((longlong)iVar1 != 0) {
    lVar4 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + lVar4);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 141868772 FUN_141868772 body=113 status=ok
// SIG undefined FUN_141868772(void)

void FUN_141868772(longlong param_1)

{
  undefined4 uVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14066f62c();
  uVar1 = FUN_14025bbd2(param_1 + 0x140,param_1 + 0x29c);
  *(undefined4 *)(param_1 + 0x298) = uVar1;
  QueryPerformanceCounter(&local_20);
  *(DWORD *)(param_1 + 0x29c) = local_20.s.LowPart;
  *(DWORD *)(param_1 + 0x2a0) = local_20.s.LowPart;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418687f0 FUN_1418687f0 body=4673 status=ok
// SIG undefined FUN_1418687f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1418687f0(longlong param_1,longlong *param_2,longlong *param_3)

{
  double *pdVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  byte bVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int *piVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  double dVar22;
  double dVar23;
  double dVar27;
  double dVar28;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar29;
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar37;
  float fVar38;
  float fVar39;
  double dVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  double dVar49;
  undefined1 auVar50 [16];
  undefined1 auStack_2c8 [40];
  double local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  undefined1 local_158 [16];
  double local_148;
  double local_140;
  double local_138;
  double local_128;
  double local_120;
  double local_118;
  undefined1 local_108 [16];
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_2c8;
  if ((*(byte *)(param_1 + 0x188) & 0xe) == 0) goto LAB_1418694e5;
  uVar19 = *(uint *)(param_1 + 0xe0);
  if ((int)uVar19 < 0) {
    iVar18 = -1;
    if ((((~uVar19 & 0x7fffffff) != 0) && (uVar19 = (int)(uVar19 * 2) >> 1, -1 < (int)uVar19)) &&
       ((int)uVar19 < *(int *)(param_2[6] + 0x88))) {
      piVar15 = (int *)((ulonglong)uVar19 * 4 + *(longlong *)(param_2[6] + 0x80));
      goto LAB_14186889d;
    }
  }
  else {
    piVar15 = (int *)(param_1 + 0xe4);
LAB_14186889d:
    iVar18 = *piVar15;
  }
  if (*(char *)(param_2[7] + (longlong)iVar18) == '\0') {
    FUN_1447d5d8e(param_2 + 4,iVar18);
  }
  auVar50 = _DAT_149934d80;
  lVar6 = *param_2;
  lVar16 = param_2[4];
  lVar20 = (longlong)iVar18 * 0x60;
  pdVar1 = (double *)(lVar16 + lVar20);
  auVar35 = *(undefined1 (*) [16])(lVar6 + 0x50);
  dVar29 = auVar35._0_8_;
  dVar34 = auVar35._8_8_;
  dVar46 = SUB168(*(undefined1 (*) [16])(lVar6 + 0x60),0);
  auVar30 = *(undefined1 (*) [16])(lVar16 + 0x40 + lVar20);
  dVar23 = auVar30._0_8_;
  dVar28 = auVar30._8_8_;
  auVar41 = *(undefined1 (*) [16])(lVar16 + 0x50 + lVar20);
  dVar45 = auVar41._0_8_;
  auVar35 = minpd(auVar30,auVar35);
  auVar41 = minpd(auVar41,*(undefined1 (*) [16])(lVar6 + 0x60));
  auVar30._8_8_ = -(ulonglong)(auVar35._8_8_ < 0.0);
  auVar30._0_8_ = -(ulonglong)(auVar35._0_8_ < 0.0);
  iVar17 = movmskpd((int)lVar16,auVar30);
  auVar35._8_8_ = -(ulonglong)(auVar41._8_8_ < 0.0);
  auVar35._0_8_ = -(ulonglong)(auVar41._0_8_ < 0.0);
  uVar19 = movmskpd((int)lVar20,auVar35);
  if ((uVar19 & 0x3fffffff) == 0 && iVar17 == 0) {
    dVar48 = *pdVar1;
    dVar8 = pdVar1[1];
    dVar9 = pdVar1[2];
    dVar37 = pdVar1[3];
    dVar10 = *(double *)(lVar6 + 0x10);
    dVar11 = *(double *)(lVar6 + 0x18);
    dVar12 = *(double *)(lVar6 + 0x20);
    dVar45 = *(double *)(lVar6 + 0x28);
    dVar23 = *(double *)(lVar6 + 0x28);
    dVar28 = *(double *)(lVar6 + 0x10);
    dVar22 = *(double *)(lVar6 + 0x10);
    dVar27 = *(double *)(lVar6 + 0x18);
    dVar49 = *(double *)(lVar6 + 0x18);
    dVar47 = *(double *)(lVar6 + 0x20);
    dVar40 = *(double *)(lVar6 + 0x20);
    local_168 = dVar8 * dVar47 * -1.0 + dVar9 * dVar27 + dVar37 * dVar28 * 1.0 + dVar48 * dVar45;
    dStack_160 = dVar48 * dVar40 * 1.0 + dVar37 * dVar49 + dVar9 * dVar22 * -1.0 + dVar8 * dVar23;
    local_158._0_8_ =
         dVar37 * dVar47 * 1.0 + ((dVar28 * dVar8 * 1.0 + dVar9 * dVar45) - dVar48 * dVar27);
    local_158._8_8_ =
         dVar9 * dVar40 * -1.0 + ((dVar22 * dVar48 * -1.0 + dVar37 * dVar23) - dVar8 * dVar49);
    dVar29 = dVar29 * pdVar1[4];
    dVar34 = dVar34 * pdVar1[5];
    dVar46 = dVar46 * pdVar1[6];
    dVar22 = dVar34 * dVar10 - dVar11 * dVar29;
    dVar27 = dVar46 * dVar11 - dVar12 * dVar34;
    dVar28 = dVar29 * dVar12 - dVar10 * dVar46;
    dVar27 = dVar27 + dVar27;
    dVar28 = dVar28 + dVar28;
    dVar22 = dVar22 + dVar22;
    local_108._0_8_ =
         (dVar22 * dVar11 - dVar12 * dVar28) + dVar45 * dVar27 + dVar29 + *(double *)(lVar6 + 0x30);
    local_108._8_8_ =
         (dVar27 * dVar12 - dVar22 * dVar10) + dVar23 * dVar28 + dVar34 + *(double *)(lVar6 + 0x38);
    local_f8 = (dVar28 * dVar10 - dVar11 * dVar27) + dVar45 * dVar22 + dVar46 +
               *(double *)(lVar6 + 0x40);
  }
  else {
    dVar48 = *(double *)(lVar6 + 0x10);
    dVar8 = *(double *)(lVar6 + 0x18);
    dVar9 = *(double *)(lVar6 + 0x20);
    dVar37 = dVar8 + dVar8;
    dVar27 = dVar9 + dVar9;
    dVar22 = dVar48 * (dVar48 + dVar48);
    dStack_1c0 = (DAT_149934d80._8_8_ - (dVar9 * dVar27 + dVar22)) * dVar34;
    local_198 = (1.0 - (dVar22 + dVar8 * dVar37)) * dVar46;
    dVar47 = *(double *)(lVar6 + 0x10) * dVar27;
    dVar22 = *(double *)(lVar6 + 0x28);
    dVar49 = dVar27 * dVar22;
    dVar40 = (dVar48 + dVar48) * *(double *)(lVar6 + 0x28);
    dVar22 = dVar37 * dVar22;
    local_1c8 = (dVar37 * dVar48 - dVar49) * dVar34;
    dStack_1a0 = (dVar27 * dVar8 - dVar40) * dVar46;
    dVar49 = (dVar37 * dVar48 + dVar49) * dVar29;
    local_1b8 = (dVar27 * dVar8 + dVar40) * dVar34;
    local_1a8 = (dVar22 + dVar47) * dVar46;
    local_1d8 = (dVar47 - dVar22) * dVar29;
    local_1e8._8_4_ = SUB84(dVar49,0);
    local_1e8._0_8_ = ((double)DAT_149934d80 - (dVar9 * dVar27 + dVar8 * dVar37)) * dVar29;
    local_1e8._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
    dStack_1d0 = 0.0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = *(undefined8 *)(lVar6 + 0x30);
    uStack_180 = *(undefined8 *)(lVar6 + 0x38);
    local_178 = *(undefined8 *)(lVar6 + 0x40);
    uStack_170 = 0x3ff0000000000000;
    dVar48 = *pdVar1;
    dVar8 = pdVar1[1];
    dVar9 = pdVar1[2];
    dVar37 = dVar8 + dVar8;
    dVar27 = dVar9 + dVar9;
    dVar47 = dVar48 * (dVar48 + dVar48);
    dVar22 = pdVar1[3];
    dVar49 = dVar27 * dVar22;
    dVar40 = (dVar48 + dVar48) * pdVar1[3];
    dVar22 = dVar37 * dVar22;
    local_248 = (dVar37 * dVar48 - dVar49) * dVar28;
    dStack_220 = (dVar27 * dVar8 - dVar40) * dVar45;
    local_268 = ((double)DAT_149934d80 - (dVar9 * dVar27 + dVar8 * dVar37)) * dVar23;
    dStack_240 = (DAT_149934d80._8_8_ - (dVar9 * dVar27 + dVar47)) * dVar28;
    dStack_260 = (dVar37 * dVar48 + dVar49) * dVar23;
    local_238 = (dVar27 * dVar8 + dVar40) * dVar28;
    local_228 = (dVar22 + *pdVar1 * dVar27) * dVar45;
    local_258 = (*pdVar1 * dVar27 - dVar22) * dVar23;
    uStack_250 = 0;
    uStack_230 = 0;
    local_218 = (1.0 - (dVar47 + dVar8 * dVar37)) * dVar45;
    uStack_210 = 0;
    local_208 = pdVar1[4];
    dStack_200 = pdVar1[5];
    local_1f8 = pdVar1[6];
    uStack_1f0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_168);
    FUN_144a1c686(&local_168,0x3e45798ee0000000);
    auVar41._8_8_ = -(ulonglong)(0.0 <= dVar34 * dVar28);
    auVar41._0_8_ = -(ulonglong)(0.0 <= dVar29 * dVar23);
    auVar35 = blendvpd(_DAT_149936790,auVar50,auVar41);
    uVar21 = -(ulonglong)(0.0 <= dVar46 * dVar45);
    dVar29 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
    dVar46 = auVar35._0_8_;
    dStack_160 = dStack_160 * dVar46;
    local_168 = local_168 * dVar46;
    local_158._0_8_ = (double)local_158._0_8_ * dVar46;
    dVar46 = auVar35._8_8_;
    local_138 = local_138 * dVar46;
    local_140 = local_140 * dVar46;
    local_148 = dVar46 * local_148;
    local_118 = local_118 * dVar29;
    local_120 = local_120 * dVar29;
    local_128 = dVar29 * local_128;
    FUN_14481fd10(&local_288,&local_168);
    dVar29 = local_278 * local_278 + local_288 * local_288;
    dVar46 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar42._0_8_ = dVar29 + dVar46;
    auVar42._8_8_ = dVar29 + dVar46;
    auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
    auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
    auVar35 = sqrtpd(auVar42,auVar42);
    auVar35 = divpd(auVar50,auVar35);
    auVar50._0_8_ = auVar35._0_8_ * local_278;
    auVar50._8_8_ = auVar35._8_8_ * dStack_270;
    local_168 = (double)((ulonglong)(local_288 * auVar35._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
    dStack_160 = (double)((ulonglong)(dStack_280 * auVar35._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
    local_158 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar50,auVar26);
  }
  *(undefined8 *)(param_1 + 0x100) = *(undefined8 *)(param_1 + 0x118);
  *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x128);
  *(undefined1 (*) [16])(param_1 + 0x118) = local_108;
  *(double *)(param_1 + 0x128) = local_f8;
  dVar29 = *(double *)(param_1 + 0x100);
  uVar43 = SUB84(dVar29,0);
  uVar44 = (undefined4)((ulonglong)dVar29 >> 0x20);
  dVar46 = local_108._0_8_;
  dVar23 = local_108._8_8_;
  if ((((dVar29 - DAT_14caddeb0 != 0.0) || (NAN(dVar29 - DAT_14caddeb0))) ||
      ((dVar29 = *(double *)(param_1 + 0x108) - _DAT_14caddeb8, dVar29 != 0.0 ||
       ((NAN(dVar29) || (dVar29 = *(double *)(param_1 + 0x110) - DAT_14caddec0, dVar29 != 0.0))))))
     || (NAN(dVar29))) {
    dVar45 = *(double *)(param_1 + 0x108);
    dVar29 = *(double *)(param_1 + 0x110);
    dVar34 = *(double *)(param_1 + 0xf0);
    dVar28 = *(double *)(param_1 + 0xf8);
    dVar22 = *(double *)(param_1 + 0xe8);
  }
  else {
    *(undefined1 (*) [16])(param_1 + 0x100) = local_108;
    *(double *)(param_1 + 0x110) = local_f8;
    uVar43 = local_108._0_4_;
    uVar44 = local_108._4_4_;
    dVar45 = dVar23;
    dVar29 = local_f8;
    dVar34 = dVar23;
    dVar28 = local_f8;
    dVar22 = dVar46;
  }
  dVar29 = local_f8 - dVar29;
  dVar48 = (double)*(float *)(param_1 + 0x16c);
  dVar47 = DAT_14c846300 * dVar48;
  dVar49 = DAT_14c8462f8 * dVar48;
  dVar27 = (double)*(float *)(param_1 + 0x160);
  dVar40 = (double)*(float *)(param_1 + 0x168);
  dVar48 = (dVar48 * DAT_14c8462f0 * dVar27 + *(double *)(param_1 + 0x130)) * dVar40;
  *(double *)(param_1 + 0x130) = dVar48;
  dVar49 = (dVar49 * dVar27 + *(double *)(param_1 + 0x138)) * dVar40;
  *(double *)(param_1 + 0x138) = dVar49;
  dVar40 = (dVar47 * dVar27 + *(double *)(param_1 + 0x140)) * dVar40;
  *(double *)(param_1 + 0x140) = dVar40;
  dVar28 = dVar40 * dVar27 +
           (double)(~-(ulonglong)(-dVar29 < dVar29) & (ulonglong)-dVar29) + dVar29 + dVar28;
  dVar45 = dVar49 * dVar27 + (dVar23 - dVar45) + 0.0 + dVar34;
  dVar29 = dVar27 * dVar48 + (dVar46 - (double)CONCAT44(uVar44,uVar43)) + 0.0 + dVar22;
  *(double *)(param_1 + 0xe8) = dVar29;
  *(double *)(param_1 + 0xf0) = dVar45;
  *(double *)(param_1 + 0xf8) = dVar28;
  dVar34 = dVar28 - local_f8;
  if (0.0 < dVar34) {
    dVar45 = dVar45 - dVar23;
    dVar29 = dVar29 - dVar46;
  }
  else {
    *(undefined1 (*) [16])(param_1 + 0xe8) = local_108;
    *(double *)(param_1 + 0xf8) = local_f8;
    dVar29 = (double)-*(float *)(param_1 + 0x170);
    *(double *)(param_1 + 0x130) = dVar48 * dVar29;
    *(double *)(param_1 + 0x138) = dVar49 * dVar29;
    *(double *)(param_1 + 0x140) = dVar40 * dVar29;
    dVar45 = DAT_14c8464e8;
    dVar34 = DAT_14c8464f0;
    dVar29 = DAT_14c8464e0;
    dVar28 = local_f8;
  }
  bVar5 = *(byte *)(param_1 + 0x188);
  if ((bVar5 & 2) == 0) {
    *(double *)(param_1 + 0xe8) = dVar46;
  }
  if ((bVar5 & 4) == 0) {
    *(double *)(param_1 + 0xf0) = dVar23;
  }
  if ((bVar5 & 8) == 0) {
    *(double *)(param_1 + 0xf8) = local_f8;
    dVar28 = local_f8;
  }
  if ((bVar5 & 1) != 0) {
    dVar22 = dVar34 * dVar34 + dVar29 * dVar29 + dVar45 * dVar45;
    fVar3 = *(float *)(param_1 + 0x164);
    if ((double)(fVar3 * fVar3) <= dVar22) {
      if (((dVar22 != 1.0) || (dVar49 = dVar45, dVar28 = dVar34, dVar27 = dVar29, NAN(dVar22))) &&
         (dVar49 = DAT_14c8464e8, dVar28 = DAT_14c8464f0, dVar27 = DAT_14c8464e0,
         9.99999993922529e-09 <= dVar22)) {
        dVar22 = 1.0 / SQRT(dVar22);
        dVar49 = dVar45 * dVar22;
        dVar28 = dVar34 * dVar22;
        dVar27 = dVar29 * dVar22;
      }
      dVar29 = (double)fVar3;
      dVar28 = dVar28 * dVar29 + local_f8;
      *(double *)(param_1 + 0xe8) = dVar46 + dVar27 * dVar29;
      *(double *)(param_1 + 0xf0) = dVar23 + dVar49 * dVar29;
      *(double *)(param_1 + 0xf8) = dVar28;
    }
  }
  lVar6 = *param_2;
  dVar45 = *(double *)(param_1 + 0xe8) - *(double *)(lVar6 + 0x30);
  dVar34 = *(double *)(param_1 + 0xf0) - *(double *)(lVar6 + 0x38);
  dVar28 = dVar28 - *(double *)(lVar6 + 0x40);
  dVar23 = *(double *)(lVar6 + 0x10);
  auVar35 = *(undefined1 (*) [16])(lVar6 + 0x50);
  dVar29 = *(double *)(lVar6 + 0x20) * -1.0;
  dVar46 = *(double *)(lVar6 + 0x28) * 1.0;
  dVar49 = -dVar23;
  dVar40 = -*(double *)(lVar6 + 0x18);
  dVar27 = dVar45 * dVar29 - dVar49 * dVar28;
  dVar22 = dVar34 * dVar49 - dVar45 * dVar40;
  dVar47 = dVar28 * dVar40 - dVar34 * dVar29;
  dVar47 = dVar47 + dVar47;
  dVar27 = dVar27 + dVar27;
  dVar22 = dVar22 + dVar22;
  auVar30 = divpd(_DAT_149934d80,auVar35);
  auVar31._0_8_ =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(*(double *)(lVar6 + 0x60))) &
               (ulonglong)(1.0 / *(double *)(lVar6 + 0x60))) *
       (dVar46 * dVar22 + dVar28 + (dVar27 * dVar49 - dVar47 * dVar40));
  auVar31._8_8_ = 0;
  *(double *)(param_1 + 0x148) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._0_8_)) & auVar30._0_8_) *
       ((dVar22 * dVar40 - dVar27 * dVar29) + dVar46 * dVar47 + dVar45);
  *(double *)(param_1 + 0x150) =
       (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar35._8_8_)) & auVar30._8_8_) *
       (dVar23 * dVar22 + dVar29 * dVar47 + dVar46 * dVar27 + dVar34);
  *(double *)(param_1 + 0x158) = auVar31._0_8_;
  FUN_1448052ee(&local_168,&local_268);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = dStack_260;
  auVar35 = divpd(auVar7 << 0x40,_DAT_1499387d0);
  auVar35 = roundpd(auVar35,auVar35,3);
  auVar30 = roundpd(auVar31,ZEXT816(0),3);
  dVar29 = (0.0 - auVar35._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar28 = (dStack_260 - auVar35._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar22 = (0.0 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar27 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar46 = sin(dVar29);
  dVar23 = sin(dVar28);
  dVar45 = sin(dVar22);
  sin(dVar27);
  dVar34 = cos(dVar29);
  dVar28 = cos(dVar28);
  dVar22 = cos(dVar22);
  cos(dVar27);
  dVar29 = local_168;
  dVar27 = -(dVar28 * dVar46 * dVar45) + dVar23 * dVar34 * dVar22;
  dVar49 = dVar23 * dVar46 * dVar45 + dVar28 * dVar34 * dVar22;
  dVar40 = dVar46 * dVar23 * dVar22 - dVar34 * dVar28 * dVar45;
  dVar34 = -(dVar46 * dVar28 * dVar22) - dVar34 * dVar23 * dVar45;
  uVar4 = local_158._0_8_;
  uVar13 = local_158._8_8_;
  dVar46 = dVar49 * (double)local_158._8_8_ +
           (double)local_158._0_8_ * dVar27 + dVar34 * dStack_160 + local_168 * dVar40;
  uVar21 = -(ulonglong)(0.0 <= dVar46);
  dVar45 = (double)(~uVar21 & 0xbff0000000000000 | uVar21 & 0x3ff0000000000000);
  dVar46 = dVar46 * dVar45;
  dVar23 = 1.0 - (double)*(float *)(param_1 + 0x174);
  dVar45 = dVar45 * (double)*(float *)(param_1 + 0x174);
  uVar43 = SUB84(dStack_160,0);
  uVar44 = (int)((ulonglong)dStack_160 >> 0x20);
  if (dVar46 < 0.9999) {
    dVar28 = dVar46;
    if (1.0 <= dVar46) {
      dVar28 = 1.0;
    }
    local_298 = dStack_160;
    uStack_290 = 0;
    local_2a0 = acos((double)(-(ulonglong)(dVar46 < -1.0) & 0xbff0000000000000 |
                             ~-(ulonglong)(dVar46 < -1.0) & (ulonglong)dVar28));
    dVar46 = sin(local_2a0);
    dVar23 = sin(dVar23 * local_2a0);
    dVar23 = dVar23 * (1.0 / dVar46);
    dVar45 = sin(dVar45 * local_2a0);
    dVar45 = dVar45 * (1.0 / dVar46);
    uVar43 = (undefined4)local_298;
    uVar44 = local_298._4_4_;
  }
  auVar35 = _DAT_149934d80;
  dVar22 = (double)uVar13 * dVar23 + dVar49 * dVar45;
  dVar28 = (double)uVar4 * dVar23 + dVar27 * dVar45;
  dVar46 = (double)CONCAT44(uVar44,uVar43) * dVar23 + dVar34 * dVar45;
  dVar29 = dVar29 * dVar23 + dVar45 * dVar40;
  dVar23 = dVar28 * dVar28 + dVar29 * dVar29;
  dVar45 = dVar22 * dVar22 + dVar46 * dVar46;
  auVar32._0_8_ = dVar23 + dVar45;
  auVar32._8_8_ = dVar23 + dVar45;
  auVar24._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_);
  auVar24._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_);
  auVar30 = sqrtpd(auVar32,auVar32);
  auVar30 = divpd(_DAT_149934d80,auVar30);
  auVar36._0_8_ = auVar30._0_8_ * dVar28;
  auVar36._8_8_ = auVar30._8_8_ * dVar22;
  dVar28 = (double)((ulonglong)(dVar29 * auVar30._0_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar32._0_8_));
  dVar22 = (double)((ulonglong)(dVar46 * auVar30._8_8_) &
                   -(ulonglong)(9.99999993922529e-09 <= auVar32._8_8_));
  auVar30 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar36,auVar24);
  lVar6 = *param_2;
  dVar27 = *(double *)(lVar6 + 0x20) * -1.0;
  dVar49 = *(double *)(lVar6 + 0x28) * 1.0;
  dVar40 = auVar30._0_8_;
  dVar47 = auVar30._8_8_;
  dVar46 = *(double *)(lVar6 + 0x10);
  dVar29 = *(double *)(lVar6 + 0x10);
  dVar45 = *(double *)(lVar6 + 0x18);
  dVar23 = *(double *)(lVar6 + 0x18);
  dVar34 = dVar28 * dVar27 * 1.0 + ((dVar49 * dVar22 - dVar29 * dVar40 * -1.0) - dVar47 * dVar23);
  local_1d8 = dVar47 * dVar27 * 1.0 + dVar28 * dVar45 + (dVar49 * dVar40 - dVar46 * dVar22 * 1.0);
  dStack_1d0 = dVar40 * dVar27 * -1.0 + dVar22 * dVar23 + (dVar49 * dVar47 - dVar29 * dVar28 * -1.0)
  ;
  local_1e8._8_4_ = SUB84(dVar34,0);
  local_1e8._0_8_ =
       dVar22 * dVar27 * -1.0 + ((dVar49 * dVar28 - dVar46 * dVar47 * 1.0) - dVar40 * dVar45);
  local_1e8._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
  FUN_1448052ee(local_1e8,&local_288);
  fVar38 = *(float *)(param_1 + 0x178) + *(float *)(param_1 + 0x17c);
  fVar3 = (float)local_288;
  if (fVar38 <= (float)local_288) {
    fVar3 = fVar38;
  }
  fVar38 = *(float *)(param_1 + 0x178) - *(float *)(param_1 + 0x17c);
  if (fVar3 <= fVar38) {
    fVar3 = fVar38;
  }
  fVar39 = *(float *)(param_1 + 0x180) + *(float *)(param_1 + 0x184);
  fVar38 = (float)local_278;
  if (fVar39 <= (float)local_278) {
    fVar38 = fVar39;
  }
  fVar39 = *(float *)(param_1 + 0x180) - *(float *)(param_1 + 0x184);
  if (fVar38 <= fVar39) {
    fVar38 = fVar39;
  }
  auVar33._8_4_ = SUB84(dStack_280,0);
  auVar33._0_8_ = (double)fVar3;
  auVar33._12_4_ = (int)((ulonglong)dStack_280 >> 0x20);
  auVar30 = divpd(auVar33,_DAT_1499387d0);
  auVar25._0_8_ = (double)fVar38 / 360.0;
  auVar25._8_8_ = 0;
  auVar41 = roundpd(auVar30,auVar30,3);
  auVar30 = roundpd(auVar25,auVar25,3);
  dVar45 = ((double)fVar3 - auVar41._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar34 = (dStack_280 - auVar41._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar28 = ((double)fVar38 - auVar30._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
  dVar22 = (0.0 - auVar30._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
  dVar29 = sin(dVar45);
  dVar46 = sin(dVar34);
  dVar23 = sin(dVar28);
  sin(dVar22);
  dVar45 = cos(dVar45);
  dVar34 = cos(dVar34);
  dVar28 = cos(dVar28);
  cos(dVar22);
  uVar13 = *(undefined8 *)(param_1 + 0x148);
  uVar14 = *(undefined8 *)(param_1 + 0x150);
  uVar4 = *(undefined8 *)(param_1 + 0x158);
  iVar17 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar17 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar17 + 1U) {
    FUN_1400c28ea(param_3,iVar17);
  }
  lVar6 = *param_3;
  lVar16 = (longlong)iVar17 * 0x70;
  *(int *)(lVar6 + lVar16) = iVar18;
  pdVar1 = (double *)(lVar6 + 0x10 + lVar16);
  *pdVar1 = dVar29 * dVar46 * dVar28 - dVar45 * dVar34 * dVar23;
  pdVar1[1] = -(dVar29 * dVar34 * dVar28) - dVar45 * dVar46 * dVar23;
  pdVar1 = (double *)(lVar6 + 0x20 + lVar16);
  *pdVar1 = -(dVar34 * dVar29 * dVar23) + dVar46 * dVar45 * dVar28;
  pdVar1[1] = dVar46 * dVar29 * dVar23 + dVar34 * dVar45 * dVar28;
  puVar2 = (undefined8 *)(lVar6 + 0x30 + lVar16);
  *puVar2 = uVar13;
  puVar2[1] = uVar14;
  puVar2 = (undefined8 *)(lVar6 + 0x40 + lVar16);
  *puVar2 = uVar4;
  puVar2[1] = 0;
  *(undefined1 (*) [16])(lVar6 + 0x50 + lVar16) = auVar35;
  puVar2 = (undefined8 *)(lVar6 + 0x60 + lVar16);
  *puVar2 = 0x3ff0000000000000;
  puVar2[1] = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
LAB_1418694e5:
  if ((local_e0 ^ (ulonglong)auStack_2c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141869a32 FUN_141869a32 body=1529 status=ok
// SIG undefined FUN_141869a32(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141869a32(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined4 *puVar11;
  double *pdVar12;
  undefined8 *puVar13;
  undefined4 *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_238 [32];
  uint local_218;
  undefined8 local_208 [12];
  double local_1a8 [2];
  undefined1 local_198 [16];
  double local_188;
  double dStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  undefined8 uStack_150;
  undefined4 local_13c [27];
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_238;
  lVar6 = param_2[6];
  uVar3 = *(uint *)(param_1 + 0xe8);
  if ((int)uVar3 < 0) {
    iVar7 = -1;
    if ((((~uVar3 & 0x7fffffff) != 0) && (uVar3 = (int)(uVar3 * 2) >> 1, -1 < (int)uVar3)) &&
       ((int)uVar3 < *(int *)(lVar6 + 0x88))) {
      piVar4 = (int *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar6 + 0x80));
      goto LAB_141869ac7;
    }
  }
  else {
    piVar4 = (int *)(param_1 + 0xec);
LAB_141869ac7:
    iVar7 = *piVar4;
  }
  plVar1 = param_2 + 4;
  if (*(char *)(param_2[7] + (longlong)iVar7) == '\0') {
    FUN_1447d5d8e(plVar1,iVar7);
  }
  pdVar10 = (double *)((longlong)iVar7 * 0x60 + param_2[4]);
  pdVar12 = local_1a8;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar12 = *pdVar10;
    pdVar10 = pdVar10 + 1;
    pdVar12 = pdVar12 + 1;
  }
  puVar9 = (undefined8 *)(*param_2 + 0x10);
  puVar13 = local_208;
  for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar13 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar13 = puVar13 + 1;
  }
  if (*(char *)(param_1 + 0x2e8) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0x2e9);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    if (*(char *)(param_1 + 0x2e8) == '\x02') {
      local_158 = local_158 * *(double *)(param_1 + 0x440);
      dStack_160 = dStack_160 * *(double *)(param_1 + 0x438);
      local_168 = local_168 * *(double *)(param_1 + 0x430);
    }
    else {
      local_168 = *(double *)(param_1 + 0x430);
      dStack_160 = *(double *)(param_1 + 0x438);
      local_158 = *(double *)(param_1 + 0x440);
    }
    uStack_150 = 0;
    local_218 = (uint)*(byte *)(param_1 + 0x2e9);
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  if (*(char *)(param_1 + 0x1f0) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0x1f1);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    auVar2 = *(undefined1 (*) [16])(param_1 + 0x418);
    auVar22 = divpd(auVar2,_DAT_1499387d0);
    auVar23._8_8_ = 0;
    auVar23._0_8_ = *(double *)(param_1 + 0x428);
    auVar23 = divpd(auVar23,_DAT_1499387d0);
    auVar22 = roundpd(auVar22,auVar22,3);
    auVar23 = roundpd(auVar23,auVar23,3);
    dVar24 = (auVar2._0_8_ - auVar22._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
    dVar26 = (auVar2._8_8_ - auVar22._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar20 = (*(double *)(param_1 + 0x428) - auVar23._0_8_ * (double)DAT_1499387d0) *
             0.008726646259971648;
    dVar21 = (0.0 - auVar23._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
    dVar15 = sin(dVar24);
    dVar16 = sin(dVar26);
    dVar17 = sin(dVar20);
    sin(dVar21);
    dVar18 = cos(dVar24);
    dVar19 = cos(dVar26);
    dVar20 = cos(dVar20);
    cos(dVar21);
    dVar24 = -(dVar19 * dVar15 * dVar17) + dVar16 * dVar18 * dVar20;
    dVar26 = dVar16 * dVar15 * dVar17 + dVar19 * dVar18 * dVar20;
    dVar21 = dVar15 * dVar16 * dVar20 - dVar18 * dVar19 * dVar17;
    dVar20 = -(dVar15 * dVar19 * dVar20) - dVar18 * dVar16 * dVar17;
    if (*(char *)(param_1 + 0x1f0) == '\x02') {
      dVar18 = dVar20 * local_1a8[0];
      dVar19 = dVar20 * local_1a8[1];
      dVar17 = dVar21 * (double)local_198._0_8_;
      dVar15 = dVar21 * local_1a8[1];
      dVar16 = dVar21 * local_1a8[0];
      dVar25 = (double)local_198._0_8_ * dVar24;
      dVar21 = local_1a8[1] * dVar24 * -1.0 +
               (double)local_198._0_8_ * dVar20 +
               dVar21 * (double)local_198._8_8_ * 1.0 + dVar26 * local_1a8[0];
      dVar20 = local_1a8[0] * dVar24 * 1.0 +
               (double)local_198._8_8_ * dVar20 + dVar17 * -1.0 + dVar26 * local_1a8[1];
      dVar24 = (double)local_198._8_8_ * dVar24 * 1.0 +
               ((dVar15 * 1.0 + dVar26 * (double)local_198._0_8_) - dVar18);
      dVar26 = dVar25 * -1.0 + ((dVar16 * -1.0 + dVar26 * (double)local_198._8_8_) - dVar19);
    }
    local_198._8_4_ = SUB84(dVar26,0);
    local_198._0_8_ = dVar24;
    local_198._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
    local_218 = (uint)*(byte *)(param_1 + 0x1f1);
    local_1a8[0] = dVar21;
    local_1a8[1] = dVar20;
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  if (*(char *)(param_1 + 0xfc) != '\0') {
    local_218 = (uint)*(byte *)(param_1 + 0xfd);
    FUN_14045e902(local_208,plVar1,local_1a8,iVar7);
    dVar26 = *(double *)(param_1 + 0x400);
    dVar20 = *(double *)(param_1 + 0x408);
    dVar24 = *(double *)(param_1 + 0x410);
    dVar21 = 0.0;
    if (*(char *)(param_1 + 0xfc) == '\x02') {
      dVar26 = dVar26 + local_188;
      dVar20 = dVar20 + dStack_180;
      dVar24 = dVar24 + local_178;
      dVar21 = dStack_170 + 0.0;
    }
    local_218 = (uint)*(byte *)(param_1 + 0xfd);
    local_188 = dVar26;
    dStack_180 = dVar20;
    local_178 = dVar24;
    dStack_170 = dVar21;
    FUN_14045df82(local_208,plVar1,local_1a8,iVar7);
  }
  uVar3 = *(uint *)(param_1 + 0xe8);
  if ((int)uVar3 < 0) {
    uVar8 = 0xffffffff;
    if ((((~uVar3 & 0x7fffffff) == 0) || (uVar3 = (int)(uVar3 * 2) >> 1, (int)uVar3 < 0)) ||
       (*(int *)(lVar6 + 0x88) <= (int)uVar3)) goto LAB_141869d87;
    puVar14 = (undefined4 *)((ulonglong)uVar3 * 4 + *(longlong *)(lVar6 + 0x80));
  }
  else {
    puVar14 = (undefined4 *)(param_1 + 0xec);
  }
  uVar8 = *puVar14;
LAB_141869d87:
  pdVar10 = local_1a8;
  puVar14 = local_13c + 3;
  for (lVar6 = 0x18; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar14 = *(undefined4 *)pdVar10;
    pdVar10 = (double *)((longlong)pdVar10 + 4);
    puVar14 = puVar14 + 1;
  }
  iVar7 = (int)param_3[1];
  *(uint *)(param_3 + 1) = iVar7 + 1U;
  if (*(uint *)((longlong)param_3 + 0xc) < iVar7 + 1U) {
    FUN_1400c28ea(param_3,iVar7);
  }
  puVar14 = (undefined4 *)(*param_3 + (longlong)iVar7 * 0x70);
  *puVar14 = uVar8;
  puVar11 = local_13c;
  for (lVar6 = 0x1b; puVar14 = puVar14 + 1, lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar14 = *puVar11;
    puVar11 = puVar11 + 1;
  }
  if ((local_d0 ^ (ulonglong)auStack_238) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186a038 FUN_14186a038 body=103 status=ok
// SIG undefined FUN_14186a038(void)

void FUN_14186a038(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))
                  ((longlong)*(int *)(param_1 + 0x30) + *(longlong *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014186a09b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014186a07f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))((longlong)*(int *)(param_1 + 0x30));
  return;
}



// FUNCTION 14186a0a0 FUN_14186a0a0 body=199 status=ok
// SIG undefined FUN_14186a0a0(void)

undefined8 * FUN_14186a0a0(undefined8 *param_1,int param_2)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b3ec898;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b3ec8a0;
  puVar1 = TlsGetValue(DAT_14c763874);
  if (puVar1 == param_1) {
    TlsSetValue(DAT_14c763874,(LPVOID)0x0);
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186a168 FUN_14186a168 body=558 status=ok
// SIG undefined FUN_14186a168(void)

void FUN_14186a168(longlong *param_1)

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
        lVar10 = (longlong)iVar6 * 0x230;
        uVar13 = (longlong)
                 (int)((uint)((ulonglong)*(undefined8 *)(lVar11 + lVar10) >> 0x20) ^
                      (uint)*(undefined8 *)(lVar11 + lVar10)) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x22c + lVar10) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x228 + lVar10) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_14186a351;
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
LAB_14186a351:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186a398 FUN_14186a398 body=446 status=ok
// SIG undefined FUN_14186a398(void)

void FUN_14186a398(undefined8 *param_1,uint param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  DWORD DVar3;
  uint uVar4;
  DWORD dwTlsIndex;
  DWORD DVar5;
  LPVOID lpTlsValue;
  void *_Dst;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_78 [32];
  void *local_58;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar4 = *(uint *)(param_1 + 1);
  if ((int)uVar4 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar6 = 4;
    if (4 < uVar4) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar6 = uVar4 + (int)((ulonglong)((longlong)(int)uVar4 * 3) >> 3) + 0x10;
  }
  uVar7 = 0x7fffffff;
  if ((int)uVar4 <= (int)uVar6) {
    uVar7 = uVar6;
  }
  *(uint *)((longlong)param_1 + 0xc) = uVar7;
  if (uVar7 != 0) {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_146815189(uVar7,8);
    }
    local_58 = (void *)*param_1;
    dwTlsIndex = DAT_14c7585d0;
    if (DAT_14c7585d0 == 0xffffffff) {
      dwTlsIndex = TlsAlloc();
      DVar5 = 0xffffffff;
      LOCK();
      bVar10 = DAT_14c7585d0 != 0xffffffff;
      DVar3 = dwTlsIndex;
      if (bVar10) {
        DVar5 = DAT_14c7585d0;
        DVar3 = DAT_14c7585d0;
      }
      DAT_14c7585d0 = DVar3;
      UNLOCK();
      if (bVar10) {
        TlsFree(dwTlsIndex);
        dwTlsIndex = DVar5;
      }
    }
    lpTlsValue = TlsGetValue(dwTlsIndex);
    if (lpTlsValue == (LPVOID)0x0) {
      lpTlsValue = (LPVOID)FUN_140036a08(&local_49);
      FUN_140fddf04(lpTlsValue);
      TlsSetValue(dwTlsIndex,lpTlsValue);
    }
    puVar2 = (ulonglong *)((longlong)lpTlsValue + 0x10);
    uVar4 = uVar7 * 8;
    uVar8 = (ulonglong)(uVar4 < 0x10) << 3 | 0xfffffffffffffff0;
    uVar6 = (uint)(uVar4 >= 0x10) * 8;
    lVar1 = (ulonglong)uVar6 + 7;
    _Dst = (void *)(*(longlong *)((longlong)lpTlsValue + 0x10) + lVar1 & uVar8);
    uVar9 = (longlong)_Dst + (longlong)(int)uVar4;
    if (*(ulonglong *)((longlong)lpTlsValue + 0x18) < uVar9) {
      FUN_140023dd8(puVar2,uVar6 + 8 + uVar4);
      _Dst = (void *)(lVar1 + *puVar2 & uVar8);
      uVar9 = (longlong)(int)uVar4 + (longlong)_Dst;
    }
    *puVar2 = uVar9;
    *param_1 = _Dst;
    if (param_2 != 0 && local_58 != (void *)0x0) {
      if ((int)uVar7 < (int)param_2) {
        param_2 = uVar7;
      }
      memcpy(_Dst,local_58,(longlong)(int)param_2 << 3);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14186a558 FUN_14186a558 body=1504 status=ok
// SIG undefined FUN_14186a558(void)

longlong * FUN_14186a558(longlong param_1)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  float local_9c;
  longlong *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar5 = (longlong *)FUN_141183036();
  uVar3 = local_80;
  if (plVar5 != (longlong *)0x0) {
    iVar4 = *(int *)(param_1 + 0xf8);
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar6 = 0;
      iVar12 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0xf0);
      if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0xe0);
      }
      uVar15 = *puVar10;
      if (uVar15 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_14186a6e9;
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 < iVar4) {
      uVar15 = 0xffffffff;
      do {
        (**(code **)(*plVar5 + 0xa08))
                  (plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0xd0) + (longlong)iVar6 * 0x14),
                   *(undefined4 *)(*(longlong *)(param_1 + 0xd0) + 8 + (longlong)iVar6 * 0x14));
        uVar15 = ~(uint)uVar16 & uVar15;
        puVar10 = *(uint **)(param_1 + 0xf0);
        if (*(uint **)(param_1 + 0xf0) == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0xe0);
        }
        iVar4 = *(int *)(param_1 + 0xf8);
        iVar6 = (int)uVar14;
        lVar13 = (longlong)iVar6;
        uVar7 = puVar10[lVar13] & uVar15;
        if (uVar7 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar11 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar10[lVar13 + lVar11 + 1];
            if (uVar7 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar9 - lVar13 == lVar11) goto LAB_14186a6e9;
          }
          uVar14 = (ulonglong)(iVar6 + (int)lVar11 + 1);
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar4);
    }
LAB_14186a6e9:
    iVar4 = *(int *)(param_1 + 0x148);
    if (iVar4 == 0) {
      uVar16 = 1;
      uVar14 = 0;
      iVar6 = 0;
      iVar12 = 0;
    }
    else {
      puVar10 = *(uint **)(param_1 + 0x140);
      if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 0x130);
      }
      uVar15 = *puVar10;
      if (uVar15 == 0) {
        iVar6 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar6 = iVar4 + -1;
        }
        uVar14 = 0;
        uVar16 = (ulonglong)(uint)(iVar6 >> 5);
        if (iVar6 >> 5 < 1) {
          uVar16 = uVar14;
        }
        iVar12 = 0;
        do {
          if (uVar16 == uVar14) goto LAB_14186a83a;
          iVar12 = iVar12 + 0x20;
          uVar15 = puVar10[uVar14 + 1];
          uVar14 = uVar14 + 1;
        } while (uVar15 == 0);
      }
      else {
        uVar14 = 0;
        iVar12 = 0;
      }
      uVar16 = (ulonglong)(-uVar15 & uVar15);
      uVar1 = uVar16 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      if (iVar4 <= iVar6) {
        iVar6 = iVar4;
      }
    }
    if (iVar6 < iVar4) {
      uVar15 = 0xffffffff;
      do {
        (**(code **)(*plVar5 + 0x9f8))
                  (plVar5,*(undefined8 *)(*(longlong *)(param_1 + 0x120) + (longlong)iVar6 * 0x14),
                   *(undefined1 *)(*(longlong *)(param_1 + 0x120) + 8 + (longlong)iVar6 * 0x14));
        uVar15 = ~(uint)uVar16 & uVar15;
        puVar10 = *(uint **)(param_1 + 0x140);
        if (*(uint **)(param_1 + 0x140) == (uint *)0x0) {
          puVar10 = (uint *)(param_1 + 0x130);
        }
        iVar4 = *(int *)(param_1 + 0x148);
        iVar6 = (int)uVar14;
        lVar13 = (longlong)iVar6;
        uVar7 = puVar10[lVar13] & uVar15;
        if (uVar7 == 0) {
          iVar8 = iVar4 + 0x1e;
          if (-1 < iVar4 + -1) {
            iVar8 = iVar4 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar9 = iVar8;
          if (iVar8 < iVar6) {
            iVar9 = iVar6;
          }
          if (iVar8 <= iVar6) break;
          lVar11 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar7 = puVar10[lVar13 + lVar11 + 1];
            if (uVar7 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar9 - lVar13 == lVar11) goto LAB_14186a83a;
          }
          uVar14 = (ulonglong)(iVar6 + (int)lVar11 + 1);
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar7 & uVar7);
        uVar1 = uVar16 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar6 = (iVar12 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar4);
    }
LAB_14186a83a:
    local_68 = param_1 + 0x180;
    local_70 = 0x100000000;
    local_60._0_4_ = 0xffffffff;
    local_60._4_4_ = 0;
    local_58 = 0;
    if (*(int *)(param_1 + 0x198) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80._0_4_ = (uint)local_60;
    local_80._4_4_ = local_60._4_4_;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_98 = (longlong *)(param_1 + 0x170);
    if (local_60._4_4_ < *(int *)(local_68 + 0x18)) {
      do {
        lVar13 = *local_98;
        lVar11 = (longlong)local_80._4_4_ * 0x14;
        local_a8 = (&DAT_14c758c60)[*(byte *)(lVar13 + 10 + lVar11)];
        local_a4 = (&DAT_14c758c60)[*(byte *)(lVar13 + 9 + lVar11)];
        local_a0 = (&DAT_14c758c60)[*(byte *)(lVar13 + 8 + lVar11)];
        local_9c = (float)*(byte *)(lVar13 + 0xb + lVar11) * 0.003921569;
        (**(code **)(*plVar5 + 0xa18))(plVar5,*(undefined8 *)(*local_98 + lVar11),&local_a8);
        local_80._0_4_ = (uint)local_80 & ~local_90._4_4_;
        FUN_1449c0562(&local_90);
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
    local_68 = param_1 + 0x1d0;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if (*(int *)(param_1 + 0x1e8) != 0) {
      FUN_1449c0562(&local_70);
    }
    local_80 = local_60;
    uVar3 = local_80;
    local_78 = local_58;
    local_74 = local_54;
    local_90 = local_70;
    local_88 = local_68;
    local_80._4_4_ = (int)((ulonglong)local_60 >> 0x20);
    local_98 = (longlong *)(param_1 + 0x1c0);
    if (local_80._4_4_ < *(int *)(local_68 + 0x18)) {
      iVar4 = local_80._4_4_;
      local_80 = uVar3;
      do {
        lVar13 = (longlong)iVar4 * 0x28;
        puVar2 = (undefined4 *)(*local_98 + 8 + lVar13);
        local_c8 = *puVar2;
        uStack_c4 = puVar2[1];
        uStack_c0 = puVar2[2];
        uStack_bc = puVar2[3];
        local_b8 = *(undefined8 *)(*local_98 + 0x18 + lVar13);
        (**(code **)(*plVar5 + 0xa10))(plVar5,*(undefined8 *)(*local_98 + lVar13),&local_c8);
        local_80 = CONCAT44(local_80._4_4_,(uint)local_80 & ~local_90._4_4_);
        FUN_1449c0562(&local_90);
        iVar4 = local_80._4_4_;
        uVar3 = local_80;
      } while (local_80._4_4_ < *(int *)(local_88 + 0x18));
    }
  }
  local_80 = uVar3;
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186ab3a FUN_14186ab3a body=991 status=ok
// SIG undefined FUN_14186ab3a(void)

double * FUN_14186ab3a(longlong param_1,double *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_c8 [40];
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    pfVar5 = &local_a0;
    FUN_1448729ea(param_1 + 0x10,pfVar5,param_4);
    if (local_80 == 3) {
      uVar3 = 3;
      fVar6 = local_a0;
    }
    else {
      pfVar4 = &local_78;
      FUN_1400b56fe(pfVar4,&local_a0,3);
      fVar6 = 0.0;
      if (local_58 != 0) {
        fVar6 = local_78;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar4 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar4);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      uVar3 = (uint)local_80;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar5 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar2)(pfVar5);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    pfVar5 = &local_a0;
    FUN_1448729ea(param_1 + 0x60,pfVar5,param_4);
    if (local_80 == 3) {
      uVar3 = 3;
      fVar7 = local_a0;
    }
    else {
      pfVar4 = &local_78;
      FUN_1400b56fe(pfVar4,&local_a0,3);
      fVar7 = 0.0;
      if (local_58 != 0) {
        fVar7 = local_78;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar4 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar4);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      uVar3 = (uint)local_80;
    }
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar3 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_88) {
        pfVar5 = (float *)CONCAT44(uStack_9c,local_a0);
      }
      (*pcVar2)(pfVar5);
    }
    if (0x18 < local_88) {
      FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
    }
    dVar8 = (double)fVar7;
    dVar9 = (double)fVar6;
  }
  else {
    if (iVar1 == 2) {
      pfVar5 = &local_78;
      FUN_1448729ea(param_1 + 0x10,pfVar5,param_4);
      fVar6 = (float)FUN_144a7b41a(pfVar5,0);
      pfVar4 = &local_a0;
      FUN_1448729ea(param_1 + 0x60,pfVar4,param_4);
      fVar7 = (float)FUN_144a7b41a(pfVar4,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_88) {
          pfVar4 = (float *)CONCAT44(uStack_9c,local_a0);
        }
        (*pcVar2)(pfVar4);
      }
      if (0x18 < local_88) {
        FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar5 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar5);
      }
      fVar6 = fVar6 * fVar7;
    }
    else {
      dVar8 = 0.0;
      dVar9 = 0.0;
      if (iVar1 != 1) goto LAB_14186ac29;
      pfVar5 = &local_78;
      FUN_1448729ea(param_1 + 0x10,pfVar5,param_4);
      fVar6 = (float)FUN_144a7b41a(pfVar5,0);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          pfVar5 = (float *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(pfVar5);
      }
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    dVar8 = (double)fVar6;
    dVar9 = dVar8;
  }
LAB_14186ac29:
  *(undefined2 *)(param_2 + 3) = 0x18;
  *param_2 = dVar9;
  param_2[1] = dVar8;
  param_2[2] = 0.0;
  *(undefined1 *)(param_2 + 4) = 4;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186af1a FUN_14186af1a body=26 status=ok
// SIG undefined FUN_14186af1a(void)

void FUN_14186af1a(undefined8 param_1)

{
  FUN_144802206();
  FUN_144803e4a(param_1);
  return;
}



// FUNCTION 14186af34 FUN_14186af34 body=26 status=ok
// SIG undefined FUN_14186af34(void)

void FUN_14186af34(undefined8 param_1)

{
  FUN_1400cad74();
  FUN_1400cae04(param_1);
  return;
}



// FUNCTION 14186af4e FUN_14186af4e body=1294 status=ok
// SIG undefined FUN_14186af4e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14186af4e(longlong param_1)

{
  double *pdVar1;
  float fVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar15;
  undefined1 auVar14 [16];
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  double dVar20;
  undefined1 auVar21 [16];
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ulonglong local_a0;
  
  dVar12 = DAT_14c8463e8;
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_1 + 0x5a8) != '\0') goto LAB_14186afb7;
  fVar2 = *(float *)(param_1 + 0x2a4);
  pdVar1 = (double *)(param_1 + 0x510);
  if (*(char *)(param_1 + 0x530) == '\0') {
    lVar3 = *(longlong *)(param_1 + 0xd0);
    if (lVar3 == 0) {
      if (pdVar1 == &DAT_14c8463d0) goto LAB_14186b193;
      *(double *)(param_1 + 0x520) = DAT_14c8463e0;
      *(double *)(param_1 + 0x528) = dVar12;
      dVar12 = DAT_14c8463d8;
      *pdVar1 = DAT_14c8463d0;
      *(double *)(param_1 + 0x518) = dVar12;
    }
    else {
      pdVar8 = (double *)FUN_1447c6d68(lVar3);
      dVar4 = *(double *)(lVar3 + 0x450);
      dVar5 = *(double *)(lVar3 + 0x458);
      dVar6 = *(double *)(lVar3 + 0x460);
      dVar7 = *(double *)(lVar3 + 0x468);
      dVar10 = pdVar8[3];
      dVar12 = pdVar8[3];
      dVar13 = pdVar8[1];
      dVar11 = pdVar8[1];
      dVar20 = pdVar8[2];
      dVar17 = pdVar8[2];
      dVar9 = dVar5 * dVar20 * -1.0 + dVar6 * dVar13 + *pdVar8 * dVar7 * 1.0 + dVar10 * dVar4;
      dVar15 = dVar4 * dVar17 * 1.0 + dVar7 * dVar11 + *pdVar8 * dVar6 * -1.0 + dVar12 * dVar5;
      dVar16 = (dVar7 * dVar20 * 1.0 + ((*pdVar8 * dVar5 * 1.0 + dVar10 * dVar6) - dVar13 * dVar4))
               * -1.0;
      dVar17 = (dVar6 * dVar17 * -1.0 + ((*pdVar8 * dVar4 * -1.0 + dVar12 * dVar7) - dVar11 * dVar5)
               ) * 1.0;
      dVar10 = *(double *)(param_1 + 0x3c0);
      dVar13 = *(double *)(param_1 + 0x3c8);
      dVar11 = *(double *)(param_1 + 0x3d0);
      dVar20 = *(double *)(param_1 + 0x3d8);
      dVar12 = dVar11 * dVar16 * -1.0 + dVar15 * dVar13 + (dVar17 * dVar20 - dVar9 * dVar10 * -1.0);
      *(double *)(param_1 + 0x510) =
           dVar13 * dVar16 * -1.0 + ((dVar10 * dVar17 - dVar20 * dVar9 * 1.0) - dVar11 * dVar15);
      *(double *)(param_1 + 0x518) =
           dVar10 * dVar16 * 1.0 + ((dVar13 * dVar17 - dVar11 * dVar9 * -1.0) - dVar20 * dVar15);
      auVar19._8_4_ = SUB84(dVar12,0);
      auVar19._0_8_ =
           dVar20 * dVar16 * 1.0 + dVar15 * dVar10 + (dVar17 * dVar11 - dVar9 * dVar13 * 1.0);
      auVar19._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      *(undefined1 (*) [16])(param_1 + 0x520) = auVar19;
    }
    *(undefined1 *)(param_1 + 0x530) = 1;
  }
LAB_14186b193:
  if (fVar2 < 1e-08) {
    local_c8._8_8_ = DAT_14c8463e8;
    local_c8._0_8_ = DAT_14c8463e0;
    local_d8 = DAT_14c8463d0;
    dStack_d0 = DAT_14c8463d8;
  }
  else if (1.0 < fVar2) {
    local_d8 = *pdVar1;
    dStack_d0 = *(double *)(param_1 + 0x518);
    local_c8 = *(undefined1 (*) [16])(param_1 + 0x520);
  }
  else {
    dVar12 = *(double *)(param_1 + 0x510);
    dVar10 = *(double *)(param_1 + 0x518);
    uVar22 = SUB84(dVar10,0);
    uVar23 = (undefined4)((ulonglong)dVar10 >> 0x20);
    dVar13 = *(double *)(param_1 + 0x520);
    uVar24 = SUB84(dVar13,0);
    uVar25 = (undefined4)((ulonglong)dVar13 >> 0x20);
    dVar11 = *(double *)(param_1 + 0x528);
    uVar26 = SUB84(dVar11,0);
    uVar27 = (undefined4)((ulonglong)dVar11 >> 0x20);
    dVar10 = DAT_14c8463e8 * dVar11 +
             DAT_14c8463e0 * dVar13 + DAT_14c8463d0 * dVar12 + DAT_14c8463d8 * dVar10;
    dVar11 = dVar10 * (double)(&DAT_149931160)[0.0 <= dVar10];
    dVar13 = 1.0 - (double)fVar2;
    dVar10 = (double)(&DAT_149931160)[0.0 <= dVar10] * (double)fVar2;
    if (dVar11 < 0.9999) {
      dVar12 = dVar11;
      if (1.0 <= dVar11) {
        dVar12 = 1.0;
      }
      dVar12 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                            ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar12));
      dVar11 = sin(dVar12);
      dVar13 = sin(dVar13 * dVar12);
      dVar13 = dVar13 * (1.0 / dVar11);
      dVar10 = sin(dVar10 * dVar12);
      dVar10 = dVar10 * (1.0 / dVar11);
      uVar26 = (undefined4)*(undefined8 *)(param_1 + 0x528);
      uVar27 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x528) >> 0x20);
      uVar24 = (undefined4)*(undefined8 *)(param_1 + 0x520);
      uVar25 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x520) >> 0x20);
      dVar12 = *(double *)(param_1 + 0x510);
      uVar22 = (undefined4)*(undefined8 *)(param_1 + 0x518);
      uVar23 = (undefined4)((ulonglong)*(undefined8 *)(param_1 + 0x518) >> 0x20);
    }
    dVar17 = DAT_14c8463e8 * dVar13 + (double)CONCAT44(uVar27,uVar26) * dVar10;
    dVar20 = DAT_14c8463e0 * dVar13 + (double)CONCAT44(uVar25,uVar24) * dVar10;
    dVar11 = DAT_14c8463d8 * dVar13 + (double)CONCAT44(uVar23,uVar22) * dVar10;
    dVar12 = DAT_14c8463d0 * dVar13 + dVar12 * dVar10;
    dVar10 = dVar20 * dVar20 + dVar12 * dVar12;
    dVar13 = dVar17 * dVar17 + dVar11 * dVar11;
    auVar18._0_8_ = dVar10 + dVar13;
    auVar18._8_8_ = dVar10 + dVar13;
    auVar14._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_);
    auVar14._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_);
    auVar19 = sqrtpd(auVar18,auVar18);
    auVar19 = divpd(_DAT_149934d80,auVar19);
    auVar21._0_8_ = auVar19._0_8_ * dVar20;
    auVar21._8_8_ = auVar19._8_8_ * dVar17;
    local_d8 = (double)((ulonglong)(dVar12 * auVar19._0_8_) &
                       -(ulonglong)(9.99999993922529e-09 <= auVar18._0_8_));
    dStack_d0 = (double)((ulonglong)(dVar11 * auVar19._8_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar18._8_8_));
    local_c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar21,auVar14);
  }
  FUN_1448052ee(&local_d8,&local_b8);
  *(undefined8 *)(param_1 + 0x5a0) = local_a8;
  *(undefined8 *)(param_1 + 0x590) = local_b8;
  *(undefined8 *)(param_1 + 0x598) = uStack_b0;
  *(undefined1 *)(param_1 + 0x5a8) = 1;
LAB_14186afb7:
  if ((local_a0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return (undefined8 *)(param_1 + 0x590);
}



// FUNCTION 14186b45e FUN_14186b45e body=143 status=ok
// SIG undefined FUN_14186b45e(void)

undefined8 * FUN_14186b45e(void)

{
  undefined8 *_Dst;
  
  _Dst = (undefined8 *)FUN_14001cc68(0xb40);
  memset(_Dst,0,0xb40);
  FUN_140b1ac70(_Dst);
  *_Dst = &PTR_FUN_14b0e7650;
  _Dst[0x161] = 0;
  *(undefined4 *)(_Dst + 0x162) = 0;
  _Dst[0x15a] = 0;
  _Dst[0x15b] = 0;
  _Dst[0x15c] = 0;
  _Dst[0x15d] = 0;
  _Dst[0x15e] = 0;
  *(undefined8 *)((longlong)_Dst + 0xb14) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Dst + 0xb1c) = 0;
  _Dst[0x165] = 0;
  *(undefined4 *)(_Dst + 0x166) = 0;
  return _Dst;
}



// FUNCTION 14186b4ee FUN_14186b4ee body=242 status=ok
// SIG undefined FUN_14186b4ee(void)

void * FUN_14186b4ee(void *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  memset(param_1,0,0x220);
  plVar3 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a442840;
  InitializeSRWLock((PSRWLOCK)(plVar3 + 2));
  if (plVar3 == (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0x28) = 0x10;
    plVar4 = *(longlong **)((longlong)param_1 + 0x30);
    if (plVar4 == (longlong *)0x0) {
      return param_1;
    }
    *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  }
  else {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
    *(PSRWLOCK *)((longlong)param_1 + 0x28) = (PSRWLOCK)(plVar3 + 2);
    plVar4 = *(longlong **)((longlong)param_1 + 0x30);
    if (plVar3 == plVar4) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar3)(plVar3);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
      goto LAB_14186b55b;
    }
    *(longlong **)((longlong)param_1 + 0x30) = plVar3;
    if (plVar4 == (longlong *)0x0) goto LAB_14186b55b;
  }
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
  if (plVar3 == (longlong *)0x0) {
    return param_1;
  }
LAB_14186b55b:
  LOCK();
  plVar4 = plVar3 + 1;
  *(int *)plVar4 = (int)*plVar4 + -1;
  UNLOCK();
  if ((int)*plVar4 == 0) {
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  return param_1;
}



// FUNCTION 14186b5e0 FUN_14186b5e0 body=1929 status=ok
// SIG undefined FUN_14186b5e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14186b5e0(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  bool bVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  double dVar29;
  undefined8 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  undefined8 uVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar44;
  double dVar45;
  
  lVar4 = *(longlong *)(param_1 + 0x110);
  puVar17 = (undefined8 *)(lVar4 + 0x10);
  puVar19 = (undefined8 *)(param_1 + 0x410);
  for (lVar14 = 0xc; lVar14 != 0; lVar14 = lVar14 + -1) {
    *puVar19 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar19 = puVar19 + 1;
  }
  auVar2 = *(undefined1 (*) [16])(param_1 + 0x450);
  auVar3 = *(undefined1 (*) [16])(param_1 + 0x460);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_));
  auVar40._8_4_ = (int)lVar14;
  auVar40._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_));
  auVar40._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  iVar13 = movmskpd(0,auVar40);
  lVar14 = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._8_8_));
  auVar43._8_4_ = (int)lVar14;
  auVar43._0_8_ = -(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_));
  auVar43._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
  uVar15 = movmskpd((int)param_2,auVar43);
  uVar25 = (undefined4)DAT_14c8464c0;
  uVar26 = DAT_14c8464c0._4_4_;
  uVar27 = (undefined4)DAT_14c8464c8;
  uVar28 = DAT_14c8464c8._4_4_;
  uVar32 = (undefined4)DAT_14c846480;
  uVar34 = DAT_14c846480._4_4_;
  uVar35 = (undefined4)DAT_14c846488;
  uVar36 = DAT_14c846488._4_4_;
  dVar6 = DAT_14c846490;
  dVar7 = DAT_14c846498;
  dVar29 = DAT_14c8464d0;
  uVar30 = uRam000000014c8464d8;
  dVar39 = DAT_14c8464a0;
  dVar41 = DAT_14c8464a8;
  dVar37 = DAT_14c8464b0;
  uVar38 = DAT_14c8464b8;
  if ((uVar15 & 0x3fffffff) != 0 || iVar13 != 0) {
    auVar43 = divpd(_DAT_149934d80,auVar2);
    auVar40 = divpd(ZEXT816(0x3ff0000000000000),auVar3);
    dVar39 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._0_8_)) & auVar43._0_8_);
    dVar41 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar2._8_8_)) & auVar43._8_8_);
    dVar29 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar3._0_8_)) & auVar40._0_8_);
    dVar12 = *(double *)(param_1 + 0x410);
    dVar6 = *(double *)(param_1 + 0x420) * -1.0;
    dVar7 = *(double *)(param_1 + 0x428) * 1.0;
    dVar37 = -dVar12;
    dVar8 = -*(double *)(param_1 + 0x418);
    dVar9 = *(double *)(param_1 + 0x430) * dVar39;
    dVar10 = *(double *)(param_1 + 0x438) * dVar41;
    dVar11 = *(double *)(param_1 + 0x440) * dVar29;
    dVar42 = dVar10 * dVar37 - dVar8 * dVar9;
    dVar44 = dVar11 * dVar8 - dVar6 * dVar10;
    dVar45 = dVar9 * dVar6 - dVar37 * dVar11;
    dVar44 = dVar44 + dVar44;
    dVar45 = dVar45 + dVar45;
    dVar42 = dVar42 + dVar42;
    uVar25 = SUB84(dVar39,0);
    uVar26 = (int)((ulonglong)dVar39 >> 0x20);
    uVar27 = SUB84(dVar41,0);
    uVar28 = (int)((ulonglong)dVar41 >> 0x20);
    uVar32 = SUB84(dVar12,0);
    uVar34 = (int)((ulonglong)dVar37 >> 0x20);
    uVar35 = SUB84(*(double *)(param_1 + 0x418),0);
    uVar36 = (int)((ulonglong)dVar8 >> 0x20);
    uVar30 = 0;
    dVar39 = 0.0 - ((dVar42 * dVar8 - dVar45 * dVar6) + dVar7 * dVar44 + dVar9);
    dVar41 = 0.0 - (dVar42 * dVar12 + dVar6 * dVar44 + dVar7 * dVar45 + dVar10);
    dVar37 = 0.0 - (dVar7 * dVar42 + dVar11 + (dVar45 * dVar37 - dVar44 * dVar8));
    uVar38 = 0;
  }
  *(undefined4 *)(param_1 + 0x470) = uVar32;
  *(undefined4 *)(param_1 + 0x474) = uVar34;
  *(undefined4 *)(param_1 + 0x478) = uVar35;
  *(undefined4 *)(param_1 + 0x47c) = uVar36;
  auVar2._8_4_ = SUB84(dVar7,0);
  auVar2._0_8_ = dVar6;
  auVar2._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
  *(undefined1 (*) [16])(param_1 + 0x480) = auVar2;
  *(double *)(param_1 + 0x490) = dVar39;
  *(double *)(param_1 + 0x498) = dVar41;
  *(double *)(param_1 + 0x4a0) = dVar37;
  *(undefined8 *)(param_1 + 0x4a8) = uVar38;
  *(undefined4 *)(param_1 + 0x4b0) = uVar25;
  *(undefined4 *)(param_1 + 0x4b4) = uVar26;
  *(undefined4 *)(param_1 + 0x4b8) = uVar27;
  *(undefined4 *)(param_1 + 0x4bc) = uVar28;
  *(double *)(param_1 + 0x4c0) = dVar29;
  *(undefined8 *)(param_1 + 0x4c8) = uVar30;
  *(undefined4 *)(param_1 + 0x4d4) = *(undefined4 *)(lVar4 + 0x158);
  uVar30 = *(undefined8 *)(param_1 + 0x3f0);
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_144716af1(*(undefined8 *)(param_2 + 0x68));
    *(undefined1 *)(param_2 + 0x78) = 1;
  }
  uVar15 = *(uint *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x68);
  iVar13 = (int)uVar30;
  iVar20 = (int)((ulonglong)uVar30 >> 0x20);
  if ((int)uVar15 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar21 = (ulonglong)uVar15;
    uVar23 = uVar15;
    do {
      uVar21 = uVar21 >> 1;
      uVar22 = (uint)uVar21 + (int)uVar16;
      uVar30 = *(undefined8 *)(lVar4 + (ulonglong)uVar22 * 0x10);
      iVar18 = (int)uVar30 - iVar13;
      if (iVar18 == 0) {
        iVar18 = (int)((ulonglong)uVar30 >> 0x20) - iVar20;
      }
      if (iVar18 < 0) {
        uVar16 = (ulonglong)(uVar22 + (uVar23 & 1));
      }
      bVar5 = 1 < uVar23;
      uVar23 = (uint)uVar21;
    } while (bVar5);
  }
  fVar24 = 0.0;
  if ((int)uVar16 < (int)uVar15) {
    lVar14 = lVar4 + uVar16 * 0x10;
    uVar30 = *(undefined8 *)(lVar4 + uVar16 * 0x10);
    iVar13 = iVar13 - (int)uVar30;
    if (iVar13 == 0) {
      iVar13 = iVar20 - (int)((ulonglong)uVar30 >> 0x20);
    }
    if ((lVar14 != 0) && (-1 < iVar13)) {
      fVar24 = *(float *)(lVar14 + 8) * 0.017453292;
    }
  }
  fVar24 = (float)(longlong)
                  (fVar24 * 0.15915494 + *(float *)(&DAT_14a184448 + (ulonglong)(fVar24 < 0.0) * 4))
           * -6.2831855 + fVar24;
  if (1.5707964 < fVar24) {
    fVar31 = 3.1415927;
LAB_14186bd29:
    fVar24 = fVar31 - fVar24;
    fVar31 = -1.0;
  }
  else {
    if (fVar24 < -1.5707964) {
      fVar31 = -3.1415927;
      goto LAB_14186bd29;
    }
    fVar31 = 1.0;
  }
  fVar33 = fVar24 * fVar24;
  *(double *)(param_1 + 0x590) =
       (double)(-(((((fVar33 * -2.3889859e-08 + 2.7525562e-06) * fVar33 + -0.00019840874) * fVar33 +
                   0.008333331) * fVar33 + -0.16666667) * fVar33 + 1.0) * fVar24);
  *(undefined8 *)(param_1 + 0x598) = 0;
  *(double *)(param_1 + 0x5a0) =
       (double)((((((fVar33 * -2.6051615e-07 + 2.4760495e-05) * fVar33 + -0.0013888378) * fVar33 +
                  0.041666638) * fVar33 + -0.5) * fVar33 + 1.0) * fVar31);
  uVar30 = *(undefined8 *)(param_1 + 0x3f8);
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_144716af1(*(undefined8 *)(param_2 + 0x68));
    *(undefined1 *)(param_2 + 0x78) = 1;
  }
  uVar15 = *(uint *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x68);
  iVar13 = (int)uVar30;
  iVar20 = (int)((ulonglong)uVar30 >> 0x20);
  if ((int)uVar15 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar21 = (ulonglong)uVar15;
    uVar23 = uVar15;
    do {
      uVar21 = uVar21 >> 1;
      uVar22 = (uint)uVar21 + (int)uVar16;
      uVar30 = *(undefined8 *)(lVar4 + (ulonglong)uVar22 * 0x10);
      iVar18 = (int)uVar30 - iVar13;
      if (iVar18 == 0) {
        iVar18 = (int)((ulonglong)uVar30 >> 0x20) - iVar20;
      }
      if (iVar18 < 0) {
        uVar16 = (ulonglong)(uVar22 + (uVar23 & 1));
      }
      bVar5 = 1 < uVar23;
      uVar23 = (uint)uVar21;
    } while (bVar5);
  }
  fVar24 = 0.0;
  if ((int)uVar16 < (int)uVar15) {
    lVar14 = lVar4 + uVar16 * 0x10;
    uVar30 = *(undefined8 *)(lVar4 + uVar16 * 0x10);
    iVar13 = iVar13 - (int)uVar30;
    if (iVar13 == 0) {
      iVar13 = iVar20 - (int)((ulonglong)uVar30 >> 0x20);
    }
    if ((lVar14 != 0) && (-1 < iVar13)) {
      fVar24 = *(float *)(lVar14 + 8);
    }
  }
  *(float *)(param_1 + 0x5a8) = 1.0 - fVar24;
  uVar30 = *(undefined8 *)(param_1 + 0x400);
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_144716af1(*(undefined8 *)(param_2 + 0x68));
    *(undefined1 *)(param_2 + 0x78) = 1;
  }
  uVar15 = *(uint *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x68);
  iVar13 = (int)uVar30;
  iVar20 = (int)((ulonglong)uVar30 >> 0x20);
  if ((int)uVar15 < 1) {
    uVar16 = 0;
  }
  else {
    uVar16 = 0;
    uVar21 = (ulonglong)uVar15;
    uVar23 = uVar15;
    do {
      uVar21 = uVar21 >> 1;
      uVar22 = (uint)uVar21 + (int)uVar16;
      uVar30 = *(undefined8 *)(lVar4 + (ulonglong)uVar22 * 0x10);
      iVar18 = (int)uVar30 - iVar13;
      if (iVar18 == 0) {
        iVar18 = (int)((ulonglong)uVar30 >> 0x20) - iVar20;
      }
      if (iVar18 < 0) {
        uVar16 = (ulonglong)(uVar22 + (uVar23 & 1));
      }
      bVar5 = 1 < uVar23;
      uVar23 = (uint)uVar21;
    } while (bVar5);
  }
  if ((int)uVar16 < (int)uVar15) {
    lVar14 = lVar4 + uVar16 * 0x10;
    uVar30 = *(undefined8 *)(lVar4 + uVar16 * 0x10);
    iVar13 = iVar13 - (int)uVar30;
    if (iVar13 == 0) {
      iVar13 = iVar20 - (int)((ulonglong)uVar30 >> 0x20);
    }
    if ((lVar14 == 0) || (iVar13 < 0)) goto LAB_14186bb50;
    *(undefined1 *)(param_1 + 0x5ac) = 1;
    uVar25 = *(undefined4 *)(lVar14 + 8);
  }
  else {
LAB_14186bb50:
    *(undefined1 *)(param_1 + 0x5ac) = 0;
    uVar25 = 0;
  }
  *(undefined4 *)(param_1 + 0x5b0) = uVar25;
  uVar30 = *(undefined8 *)(param_1 + 0x408);
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_144716af1(*(undefined8 *)(param_2 + 0x68));
    *(undefined1 *)(param_2 + 0x78) = 1;
  }
  uVar15 = *(uint *)(param_2 + 0x70);
  lVar4 = *(longlong *)(param_2 + 0x68);
  iVar13 = (int)uVar30;
  iVar20 = (int)((ulonglong)uVar30 >> 0x20);
  if ((int)uVar15 < 1) {
    uVar23 = 0;
  }
  else {
    uVar23 = 0;
    uVar22 = uVar15;
    do {
      uVar1 = (uVar22 >> 1) + uVar23;
      uVar30 = *(undefined8 *)(lVar4 + (ulonglong)uVar1 * 0x10);
      iVar18 = (int)uVar30 - iVar13;
      if (iVar18 == 0) {
        iVar18 = (int)((ulonglong)uVar30 >> 0x20) - iVar20;
      }
      if (iVar18 < 0) {
        uVar23 = uVar1 + (uVar22 & 1);
      }
      bVar5 = 1 < uVar22;
      uVar22 = uVar22 >> 1;
    } while (bVar5);
  }
  if ((int)uVar23 < (int)uVar15) {
    lVar14 = lVar4 + (ulonglong)uVar23 * 0x10;
    uVar30 = *(undefined8 *)(lVar4 + (ulonglong)uVar23 * 0x10);
    iVar13 = iVar13 - (int)uVar30;
    if (iVar13 == 0) {
      iVar13 = iVar20 - (int)((ulonglong)uVar30 >> 0x20);
    }
    if ((lVar14 != 0) && (-1 < iVar13)) {
      *(undefined1 *)(param_1 + 0x5b4) = 1;
      uVar25 = *(undefined4 *)(lVar14 + 8);
      goto LAB_14186bc0d;
    }
  }
  *(undefined1 *)(param_1 + 0x5b4) = 0;
  uVar25 = 0;
LAB_14186bc0d:
  *(undefined4 *)(param_1 + 0x5b8) = uVar25;
  return;
}



// FUNCTION 14186bd6a FUN_14186bd6a body=333 status=ok
// SIG undefined FUN_14186bd6a(void)

void FUN_14186bd6a(longlong *param_1)

{
  float fVar1;
  char cVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined1 local_11;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1[2] + 0xd5) & 4) != 0) {
    local_28 = 0;
    uStack_20 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar2 = FUN_1400439fc(param_1,0,&local_11);
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x268))(param_1);
  }
  fVar1 = *(float *)((longlong)param_1 + 0xac);
  if (0.0 <= fVar1) {
    *(float *)((longlong)param_1 + 0xb4) = (fVar1 + fVar1) / (fVar1 + 1.0) + -1.0;
    *(undefined4 *)((longlong)param_1 + 0xac) = 0xbf800000;
  }
  fVar1 = *(float *)(param_1 + 0x16);
  if (0.0 <= fVar1) {
    *(float *)(param_1 + 0x17) = (fVar1 + fVar1) / (fVar1 + 1.0) + -1.0;
    *(undefined4 *)(param_1 + 0x16) = 0xbf800000;
  }
  fVar1 = *(float *)((longlong)param_1 + 0x9c);
  if (0.0 <= fVar1) {
    *(uint *)(param_1 + 0x14) = ~-(uint)(ABS(fVar1) <= 1e-08) & (uint)(1.0 / fVar1);
    *(undefined4 *)((longlong)param_1 + 0x9c) = 0xbf800000;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186beb8 FUN_14186beb8 body=206 status=ok
// SIG undefined FUN_14186beb8(void)

void FUN_14186beb8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_140a87838();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_14186bf07;
  }
  lVar3 = 0;
LAB_14186bf07:
  *(longlong *)(param_1 + 0x350) = lVar3;
  if (*(longlong *)(param_1 + 0x250) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0x130) + 0x1a0))
              (param_1 + 0x130,*(undefined8 *)(param_1 + 600));
  }
  else {
    *(longlong *)(param_1 + 0x1a8) = *(longlong *)(param_1 + 0x250);
  }
  if (*(longlong *)(param_1 + 0x268) == 0) {
    (**(code **)(*(longlong *)(param_1 + 0x1b8) + 0x1a0))
              (param_1 + 0x1b8,*(undefined8 *)(param_1 + 0x270));
  }
  else {
    *(longlong *)(param_1 + 0x230) = *(longlong *)(param_1 + 0x268);
  }
  FUN_14066f62c(param_1,param_2);
  return;
}



// FUNCTION 14186bf86 FUN_14186bf86 body=2227 status=ok
// SIG undefined FUN_14186bf86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14186bf86(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  undefined1 auVar6 [16];
  code *pcVar7;
  code ***pppcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  double dVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong *plVar20;
  longlong *plVar21;
  longlong lVar22;
  undefined4 uVar23;
  float fVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar37;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar38 [16];
  undefined1 auStack_168 [32];
  double local_148;
  undefined1 **ppuStack_140;
  double local_138;
  double dStack_130;
  code *local_128;
  double *pdStack_120;
  double local_118;
  double dStack_110;
  code *local_108;
  code ***pppcStack_100;
  undefined1 local_f8 [16];
  undefined8 local_e8;
  undefined8 *local_e0;
  longlong *local_d8;
  undefined1 *local_d0;
  undefined8 **local_c8;
  longlong local_c0;
  code **local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (*(char *)(param_1 + 0x30c) == '\x01') {
    *(undefined1 *)(param_1 + 0x30c) = 0;
  }
  if (*(char *)(param_1 + 0x314) == '\x01') {
    *(undefined1 *)(param_1 + 0x314) = 0;
  }
  if (*(char *)(param_1 + 0x340) == '\x01') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  lVar17 = DAT_14c9647c8;
  iVar18 = *(int *)(param_1 + 0x35c);
  if (((iVar18 != 0) && (uVar15 = *(uint *)(param_1 + 0x358), -1 < (int)uVar15)) &&
     ((int)uVar15 < DAT_14c9647dc)) {
    plVar21 = (longlong *)
              ((ulonglong)((uVar15 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar15 >> 0x10) * 8));
    if ((((plVar21 != (longlong *)0x0) && ((int)plVar21[2] == iVar18)) &&
        (((*(uint *)(plVar21 + 1) & 0x10200000) == 0 &&
         ((plVar21 = (longlong *)*plVar21, plVar21 != (longlong *)0x0 &&
          (lVar22 = plVar21[0x23d], lVar22 != 0)))))) &&
       (lVar1 = *(longlong *)(param_2 + 0x20), lVar1 != 0)) {
      if ((undefined8 *)(lVar22 + 0x3b28) != (undefined8 *)(param_1 + 0x300)) {
        *(undefined4 *)(param_1 + 0x308) = *(undefined4 *)(lVar22 + 0x3b30);
        *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(lVar22 + 0x3b28);
        *(undefined1 *)(param_1 + 0x30c) = 1;
      }
      if (*(char *)(param_1 + 0x308) == '\x01') {
        plVar20 = (longlong *)
                  ((ulonglong)((uVar15 & 0xffff) * 0x18) +
                  *(longlong *)(lVar17 + (ulonglong)(uVar15 >> 0x10) * 8));
        if (((plVar20 == (longlong *)0x0) || ((int)plVar20[2] != iVar18)) ||
           ((*(uint *)(plVar20 + 1) & 0x10200000) != 0)) {
          lVar17 = 0;
        }
        else {
          lVar17 = *plVar20;
        }
        if (*(code **)(*(longlong *)(&DAT_00001100 + lVar17) + 0x10) == (code *)&LAB_144944cea) {
          dVar16 = (double)(lVar17 + 0x1808);
        }
        else {
          dVar16 = (double)(**(code **)(*(longlong *)(&DAT_00001100 + lVar17) + 0x10))
                                     (&DAT_00001100 + lVar17);
        }
        local_e8 = DAT_14cb72618;
        local_e0 = &local_e8;
        local_d8 = &local_c0;
        local_c0 = 0;
        local_c8 = &local_e0;
        local_d0 = &LAB_143cbcae0;
        if (*(longlong *)((longlong)dVar16 + 0x40) != 0) {
          pdStack_120 = &local_148;
          ppuStack_140 = &local_d0;
          local_b8 = &local_128;
          local_128 = FUN_143cbca2e;
          pppcStack_100 = &local_b8;
          local_108 = FUN_1487df56e;
          local_148 = dVar16;
          FUN_1447c5ba2();
          lVar17 = local_c0;
          if (local_c0 != 0) {
            lVar22 = *(longlong *)(lVar22 + 0x110);
            pcVar7 = *(code **)(lVar22 + 0x240);
            pppcVar8 = *(code ****)(lVar22 + 0x248);
            dVar16 = *(double *)*(undefined1 (*) [16])(lVar22 + 0x250);
            dVar5 = *(double *)(lVar22 + 600);
            local_f8 = *(undefined1 (*) [16])(lVar22 + 0x250);
            fVar24 = *(float *)(local_c0 + 0x2a4);
            if (1e-08 <= fVar24) {
              if (1.0 < fVar24) {
                local_f8 = *(undefined1 (*) [16])(local_c0 + 0x3d0);
                pcVar7 = *(code **)(local_c0 + 0x3c0);
                pppcVar8 = *(code ****)(local_c0 + 0x3c8);
              }
              else {
                dVar30 = *(double *)(local_c0 + 0x3c0);
                dVar28 = *(double *)(local_c0 + 0x3c8);
                dVar37 = *(double *)(local_c0 + 0x3d0);
                dVar27 = *(double *)(local_c0 + 0x3d8);
                dVar25 = dVar5 * dVar27 +
                         dVar16 * dVar37 + (double)pcVar7 * dVar30 + (double)pppcVar8 * dVar28;
                dVar26 = dVar25 * (double)(&DAT_149931160)[0.0 <= dVar25];
                dVar29 = 1.0 - (double)fVar24;
                dVar25 = (double)(&DAT_149931160)[0.0 <= dVar25] * (double)fVar24;
                if (dVar26 < 0.9999) {
                  dVar27 = dVar26;
                  if (1.0 <= dVar26) {
                    dVar27 = 1.0;
                  }
                  dVar27 = acos((double)(-(ulonglong)(dVar26 < -1.0) & 0xbff0000000000000 |
                                        ~-(ulonglong)(dVar26 < -1.0) & (ulonglong)dVar27));
                  dVar28 = sin(dVar27);
                  dVar29 = sin(dVar29 * dVar27);
                  dVar29 = dVar29 * (1.0 / dVar28);
                  dVar25 = sin(dVar25 * dVar27);
                  dVar25 = dVar25 * (1.0 / dVar28);
                  dVar27 = *(double *)(lVar17 + 0x3d8);
                  dVar37 = *(double *)(lVar17 + 0x3d0);
                  dVar30 = *(double *)(lVar17 + 0x3c0);
                  dVar28 = *(double *)(lVar17 + 0x3c8);
                }
                dVar26 = dVar29 * dVar5 + dVar27 * dVar25;
                dVar16 = dVar16 * dVar29 + dVar37 * dVar25;
                dVar27 = (double)pppcVar8 * dVar29 + dVar28 * dVar25;
                dVar5 = (double)pcVar7 * dVar29 + dVar30 * dVar25;
                dVar28 = dVar16 * dVar16 + dVar5 * dVar5;
                dVar37 = dVar26 * dVar26 + dVar27 * dVar27;
                auVar33._0_8_ = dVar28 + dVar37;
                auVar33._8_8_ = dVar28 + dVar37;
                auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_);
                auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_);
                auVar35 = sqrtpd(auVar33,auVar33);
                auVar35 = divpd(_DAT_149934d80,auVar35);
                auVar38._0_8_ = auVar35._0_8_ * dVar16;
                auVar38._8_8_ = auVar35._8_8_ * dVar26;
                local_f8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar38,auVar31);
                pcVar7 = (code *)((ulonglong)(dVar5 * auVar35._0_8_) &
                                 -(ulonglong)(9.99999993922529e-09 <= auVar33._0_8_));
                pppcVar8 = (code ***)
                           ((ulonglong)(dVar27 * auVar35._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar33._8_8_));
              }
            }
            pppcStack_100 = pppcVar8;
            local_108 = pcVar7;
            uVar23 = FUN_1447cb614(&local_108);
            *(undefined4 *)(param_1 + 0x310) = uVar23;
            *(undefined1 *)(param_1 + 0x314) = 1;
            uVar23 = (**(code **)(*plVar21 + 2000))(plVar21,&local_128);
            lVar22 = -(ulonglong)
                      (9.999999747378752e-05 <
                      ABS(*(double *)(param_1 + 0x2c8) - (double)pdStack_120));
            auVar4._8_4_ = (int)lVar22;
            auVar4._0_8_ = -(ulonglong)
                            (9.999999747378752e-05 <
                            ABS(*(double *)(param_1 + 0x2c0) - (double)local_128));
            auVar4._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
            uVar15 = movmskpd(uVar23,auVar4);
            lVar22 = -(ulonglong)
                      (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d8) - dStack_110));
            auVar35._8_4_ = (int)lVar22;
            auVar35._0_8_ =
                 -(ulonglong)(9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d0) - local_118))
            ;
            auVar35._12_4_ = (int)((ulonglong)lVar22 >> 0x20);
            iVar18 = movmskpd((int)plVar21,auVar35);
            uVar19 = iVar18 << 2 | uVar15;
            if (uVar19 != 0) {
              auVar34._8_8_ =
                   -(ulonglong)
                    (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2c8) + (double)pdStack_120)
                    );
              auVar34._0_8_ =
                   -(ulonglong)
                    (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2c0) + (double)local_128));
              iVar18 = movmskpd(uVar15,auVar34);
              auVar36._8_8_ =
                   -(ulonglong)
                    (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d8) + dStack_110));
              auVar36._0_8_ =
                   -(ulonglong)
                    (9.999999747378752e-05 < ABS(*(double *)(param_1 + 0x2d0) + local_118));
              uVar15 = movmskpd(uVar19,auVar36);
              if ((uVar15 & 0x3fffffff) != 0 || iVar18 != 0) {
                *(double *)(param_1 + 0x2d0) = local_118;
                *(double *)(param_1 + 0x2d8) = dStack_110;
                *(code **)(param_1 + 0x2c0) = local_128;
                *(double **)(param_1 + 0x2c8) = pdStack_120;
                *(ulonglong *)(param_1 + 0x2e0) =
                     *(ulonglong *)(param_1 + 0x2c0) ^ 0x8000000000000000;
                *(ulonglong *)(param_1 + 0x2e8) =
                     *(ulonglong *)(param_1 + 0x2c8) ^ 0x8000000000000000;
                *(double *)(param_1 + 0x2f0) = *(double *)(param_1 + 0x2d0) * -1.0;
                *(double *)(param_1 + 0x2f8) = *(double *)(param_1 + 0x2d8) * 1.0;
              }
            }
            dVar26 = *(double *)(lVar1 + 0x240);
            dVar9 = *(double *)(lVar1 + 0x248);
            dVar10 = *(double *)(lVar1 + 0x250);
            dVar11 = *(double *)(lVar1 + 600);
            dVar16 = *(double *)(param_1 + 0x2f8);
            dVar5 = *(double *)(param_1 + 0x2f8);
            dVar28 = *(double *)(param_1 + 0x2e0);
            dVar27 = *(double *)(param_1 + 0x2e0);
            dVar30 = *(double *)(param_1 + 0x2e8);
            dVar37 = *(double *)(param_1 + 0x2e8);
            dVar25 = *(double *)(param_1 + 0x2f0);
            dVar29 = *(double *)(param_1 + 0x2f0);
            local_148 = dVar9 * dVar25 * -1.0 +
                        dVar10 * dVar30 + dVar11 * dVar28 * 1.0 + dVar26 * dVar16;
            ppuStack_140 = (undefined1 **)
                           (dVar26 * dVar29 * 1.0 +
                           dVar11 * dVar37 + dVar10 * dVar27 * -1.0 + dVar9 * dVar5);
            local_138 = dVar11 * dVar25 * 1.0 +
                        ((dVar28 * dVar9 * 1.0 + dVar16 * dVar10) - dVar26 * dVar30);
            dStack_130 = dVar10 * dVar29 * -1.0 +
                         ((dVar27 * dVar26 * -1.0 + dVar5 * dVar11) - dVar9 * dVar37);
            fVar24 = (float)FUN_1447cb614();
            fVar24 = *(float *)(param_1 + 0x310) - fVar24;
            auVar32._0_12_ = ZEXT812(0x38d1b717);
            auVar32._12_4_ = 0;
            if (0.0001 < ABS(fVar24)) {
              dVar16 = (double)fVar24;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = dVar16;
              auVar31 = divpd(auVar6 << 0x40,_DAT_1499387d0);
              auVar31 = roundpd(auVar31,auVar31,3);
              auVar33 = roundpd(auVar32,ZEXT816(0),3);
              dVar27 = (0.0 - auVar31._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar28 = (dVar16 - auVar31._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar16 = (0.0 - auVar33._0_8_ * (double)DAT_1499387d0) * 0.008726646259971648;
              dVar5 = (0.0 - auVar33._8_8_ * DAT_1499387d0._8_8_) * 0.008726646259971648;
              dVar37 = sin(dVar27);
              dVar30 = sin(dVar28);
              dVar25 = sin(dVar16);
              sin(dVar5);
              dVar27 = cos(dVar27);
              dVar28 = cos(dVar28);
              dVar29 = cos(dVar16);
              cos(dVar5);
              dVar5 = dVar30 * dVar37 * dVar25 + dVar28 * dVar27 * dVar29;
              dVar16 = -(dVar37 * dVar28 * dVar29) - dVar27 * dVar30 * dVar25;
              auVar2._8_4_ = SUB84(dVar16,0);
              auVar2._0_8_ = dVar37 * dVar30 * dVar29 - dVar27 * dVar28 * dVar25;
              auVar2._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
              *(undefined1 (*) [16])(param_1 + 800) = auVar2;
              auVar3._8_4_ = SUB84(dVar5,0);
              auVar3._0_8_ = -(dVar28 * dVar37 * dVar25) + dVar30 * dVar27 * dVar29;
              auVar3._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
              *(undefined1 (*) [16])(param_1 + 0x330) = auVar3;
              *(undefined1 *)(param_1 + 0x340) = 1;
              if ((undefined8 *)(lVar17 + 0x490) != (undefined8 *)(param_1 + 800)) {
                uVar12 = *(undefined8 *)(param_1 + 800);
                uVar13 = *(undefined8 *)(param_1 + 0x328);
                uVar14 = *(undefined8 *)(param_1 + 0x338);
                *(undefined8 *)(lVar17 + 0x4a0) = *(undefined8 *)(param_1 + 0x330);
                *(undefined8 *)(lVar17 + 0x4a8) = uVar14;
                *(undefined8 *)(lVar17 + 0x490) = uVar12;
                *(undefined8 *)(lVar17 + 0x498) = uVar13;
                *(undefined1 *)(lVar17 + 0x4b0) = 1;
              }
            }
          }
        }
      }
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14186c83a FUN_14186c83a body=981 status=ok
// SIG undefined FUN_14186c83a(void)

void FUN_14186c83a(longlong param_1,undefined8 param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [5];
  undefined1 auStack_83 [11];
  double local_78;
  double dStack_70;
  undefined1 local_68;
  ulonglong local_60;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((*(char *)(param_1 + 0x30c) == '\x01') && (*(char *)(param_1 + 0x308) == '\x01')) {
    if (*(char *)(param_1 + 0x314) == '\x01') {
      fVar16 = *(float *)(param_1 + 0x310);
    }
    else {
      lVar14 = *(longlong *)(param_1 + 0x350);
      dVar10 = *(double *)(lVar14 + 0x10);
      dVar11 = *(double *)(lVar14 + 0x18);
      dVar12 = *(double *)(lVar14 + 0x20);
      dVar13 = *(double *)(lVar14 + 0x28);
      dVar1 = *(double *)(param_1 + 0x2f8);
      dVar2 = *(double *)(param_1 + 0x2f8);
      dVar3 = *(double *)(param_1 + 0x2e0);
      dVar4 = *(double *)(param_1 + 0x2e0);
      dVar5 = *(double *)(param_1 + 0x2e8);
      dVar6 = *(double *)(param_1 + 0x2e8);
      dVar7 = *(double *)(param_1 + 0x2f0);
      dVar8 = *(double *)(param_1 + 0x2f0);
      dVar9 = dVar10 * dVar8 * 1.0 + dVar13 * dVar6 + dVar12 * dVar4 * -1.0 + dVar11 * dVar2;
      local_78 = dVar13 * dVar7 * 1.0 + ((dVar3 * dVar11 * 1.0 + dVar1 * dVar12) - dVar10 * dVar5);
      dStack_70 = dVar12 * dVar8 * -1.0 +
                  ((dVar4 * dVar10 * -1.0 + dVar2 * dVar13) - dVar11 * dVar6);
      unique0x100000ae = SUB84(dVar9,0);
      _local_88 = dVar11 * dVar7 * -1.0 + dVar12 * dVar5 + dVar13 * dVar3 * 1.0 + dVar10 * dVar1;
      unique0x100000b2 = (int)((ulonglong)dVar9 >> 0x20);
      fVar16 = (float)FUN_1447cb614();
    }
    fVar16 = fVar16 - *(float *)(param_1 + 0x300);
    if (180.0 < fVar16) {
      fVar16 = fVar16 + -360.0;
    }
    else if (fVar16 < -180.0) {
      fVar16 = fVar16 + 360.0;
    }
    fVar15 = *(float *)(param_1 + 0x304) - *(float *)(param_1 + 0x300);
    if (180.0 < fVar15) {
      fVar15 = fVar15 + -360.0;
    }
    else if (fVar15 < -180.0) {
      fVar15 = fVar15 + 360.0;
    }
    if (fVar15 <= 0.0) {
      local_88[4] = *(undefined1 *)(param_1 + 0x2a4);
      local_88._0_4_ = *(undefined4 *)(param_1 + 0x2a0);
      auStack_83._3_8_ = *(longlong *)(param_1 + 0x2a8);
      if ((*(longlong *)(param_1 + 0x2a8) != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_78 = *(double *)(param_1 + 0x2b0);
      if ((local_78 != 0.0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      dStack_70 = (double)CONCAT71(dStack_70._1_7_,*(undefined1 *)(param_1 + 0x2b8));
      local_68 = 1;
      FUN_1403201ee(param_1,1);
      lVar14 = 0x130;
    }
    else {
      local_88[4] = *(undefined1 *)(param_1 + 0x2a4);
      local_88._0_4_ = *(undefined4 *)(param_1 + 0x2a0);
      auStack_83._3_8_ = *(longlong *)(param_1 + 0x2a8);
      if ((*(longlong *)(param_1 + 0x2a8) != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      local_78 = *(double *)(param_1 + 0x2b0);
      if ((local_78 != 0.0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c();
      }
      dStack_70 = (double)CONCAT71(dStack_70._1_7_,*(undefined1 *)(param_1 + 0x2b8));
      local_68 = 1;
      FUN_1403201ee(param_1,2);
      lVar14 = 0x1b8;
    }
    fVar15 = (float)(**(code **)(*(longlong *)(param_1 + lVar14) + 0x108))(param_1 + lVar14);
    (**(code **)(*(longlong *)(param_1 + lVar14) + 0x1a8))
              (param_1 + lVar14,(ABS(fVar16) / 90.0) * fVar15);
  }
  else {
    local_88[4] = *(undefined1 *)(param_1 + 0x284);
    local_88._0_4_ = *(undefined4 *)(param_1 + 0x280);
    auStack_83._3_8_ = *(longlong *)(param_1 + 0x288);
    if ((*(longlong *)(param_1 + 0x288) != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    local_78 = *(double *)(param_1 + 0x290);
    if ((local_78 != 0.0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c();
    }
    dStack_70 = (double)CONCAT71(dStack_70._1_7_,*(undefined1 *)(param_1 + 0x298));
    local_68 = 1;
    FUN_1403201ee(param_1,0);
  }
  FUN_14491269a(param_1,param_2);
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186cc10 FUN_14186cc10 body=265 status=ok
// SIG undefined FUN_14186cc10(void)

void FUN_14186cc10(longlong param_1,longlong param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double *pdVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  FUN_1447e0816();
  if ((((*(char *)(param_1 + 0x30c) == '\x01') && (*(char *)(param_1 + 0x308) == '\x01')) &&
      (*(char *)(param_1 + 0x340) == '\x01')) && (0 < *(int *)(param_2 + 0x28))) {
    pdVar9 = *(double **)(param_2 + 0x20);
    dVar10 = *pdVar9;
    dVar11 = pdVar9[1];
    dVar12 = pdVar9[2];
    dVar13 = pdVar9[3];
    dVar1 = *(double *)(param_1 + 0x338);
    dVar2 = *(double *)(param_1 + 0x338);
    dVar3 = *(double *)(param_1 + 800);
    dVar4 = *(double *)(param_1 + 800);
    dVar5 = *(double *)(param_1 + 0x328);
    dVar6 = *(double *)(param_1 + 0x328);
    dVar7 = *(double *)(param_1 + 0x330);
    dVar8 = *(double *)(param_1 + 0x330);
    *pdVar9 = dVar11 * dVar7 * -1.0 + dVar12 * dVar5 + dVar13 * dVar3 * 1.0 + dVar10 * dVar1;
    pdVar9[1] = dVar10 * dVar8 * 1.0 + dVar13 * dVar6 + dVar12 * dVar4 * -1.0 + dVar11 * dVar2;
    pdVar9[2] = dVar13 * dVar7 * 1.0 + ((dVar3 * dVar11 * 1.0 + dVar1 * dVar12) - dVar10 * dVar5);
    pdVar9[3] = dVar12 * dVar8 * -1.0 + ((dVar4 * dVar10 * -1.0 + dVar2 * dVar13) - dVar11 * dVar6);
  }
  return;
}



// FUNCTION 14186cd1a FUN_14186cd1a body=154 status=ok
// SIG undefined FUN_14186cd1a(void)

void FUN_14186cd1a(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) goto LAB_14186cd93;
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0xa8);
  if (plVar1 == (longlong *)0x0) {
LAB_14186cdb1:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_1407725cc();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 == 0) goto LAB_14186cdb1;
    uVar2 = FUN_1407725cc();
    lVar4 = FUN_144718840(lVar3,uVar2);
    if (lVar3 == lVar4) goto LAB_14186cdb1;
  }
  FUN_1407eff2c(&local_28,lVar4);
  *(undefined4 *)(param_1 + 0x150) = local_28;
  *(undefined4 *)(param_1 + 0x154) = uStack_24;
  *(undefined4 *)(param_1 + 0x158) = uStack_20;
  *(undefined4 *)(param_1 + 0x15c) = uStack_1c;
LAB_14186cd93:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186cdb6 FUN_14186cdb6 body=253 status=ok
// SIG undefined FUN_14186cdb6(void)

void FUN_14186cdb6(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *param_2;
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x130), lVar2 != 0)) {
    lVar3 = FUN_140a87838();
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      param_1[0x27] = lVar4;
      lVar4 = (**(code **)(*param_1 + 0x200))(param_1);
      if (lVar4 != 0) {
        lVar2 = param_1[0x27];
        iVar1 = *(int *)(lVar2 + 0x940);
        *(uint *)(lVar2 + 0x940) = iVar1 + 1U;
        if (*(uint *)(lVar2 + 0x944) < iVar1 + 1U) {
          FUN_140890db0((longlong *)(lVar2 + 0x938),iVar1);
        }
        lVar2 = *(longlong *)(lVar2 + 0x938);
        *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = param_1 + 0x25;
        *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      }
      FUN_1408d84e8(param_1,param_2);
      FUN_140320438(param_1 + 0xf,param_2);
      return;
    }
  }
  param_1[0x27] = 0;
  return;
}



// FUNCTION 14186ceb4 FUN_14186ceb4 body=154 status=ok
// SIG undefined FUN_14186ceb4(void)

void FUN_14186ceb4(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_3 == 0) goto LAB_14186cf2d;
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x20) + 0xa8);
  if (plVar1 == (longlong *)0x0) {
LAB_14186cf4b:
    lVar4 = 0;
  }
  else {
    uVar2 = FUN_1407725cc();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 == 0) goto LAB_14186cf4b;
    uVar2 = FUN_1407725cc();
    lVar4 = FUN_144718840(lVar3,uVar2);
    if (lVar3 == lVar4) goto LAB_14186cf4b;
  }
  FUN_1407eff2c(&local_28,lVar4);
  *(undefined4 *)(param_1 + 0x110) = local_28;
  *(undefined4 *)(param_1 + 0x114) = uStack_24;
  *(undefined4 *)(param_1 + 0x118) = uStack_20;
  *(undefined4 *)(param_1 + 0x11c) = uStack_1c;
LAB_14186cf2d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186cf50 FUN_14186cf50 body=108 status=ok
// SIG undefined FUN_14186cf50(void)

void FUN_14186cf50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  FUN_140320438(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined1 *)(param_1 + 0x93) = 0;
  lVar3 = *param_2;
  if ((lVar3 != 0) && (lVar1 = *(longlong *)(lVar3 + 0x130), lVar1 != 0)) {
    lVar2 = FUN_140a87838();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
        lVar2 + 0x30)) goto LAB_14186cfa9;
  }
  lVar3 = 0;
LAB_14186cfa9:
  *(longlong *)(param_1 + 0x108) = lVar3;
  return;
}



// FUNCTION 14186cfbc FUN_14186cfbc body=81 status=ok
// SIG undefined FUN_14186cfbc(void)

void FUN_14186cfbc(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_14019c9f2(param_1 + 0xe4);
  if ((longlong)*(int *)(param_1 + 0x100) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xf8);
    lVar1 = (longlong)*(int *)(param_1 + 0x100) * 0x24;
    do {
      FUN_14019c9f2(lVar2,param_2);
      lVar2 = lVar2 + 0x24;
      lVar1 = lVar1 + -0x24;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14186d00e FUN_14186d00e body=826 status=ok
// SIG undefined FUN_14186d00e(void)

void FUN_14186d00e(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 **local_40;
  code *local_38;
  longlong **local_30;
  code **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar7 = *(longlong **)(param_1 + 0x118);
  if ((((plVar7 != (longlong *)0x0) && (*(int *)(param_1 + 0x114) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x110), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar9 != 0) && (*(int *)(lVar9 + 0x10) == *(int *)(param_1 + 0x114))) &&
       ((*(uint *)(lVar9 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar7 + 0x10) == (code *)&LAB_144944cea) {
        plVar7 = plVar7 + 0xe1;
      }
      else {
        plVar7 = (longlong *)(**(code **)(*plVar7 + 0x10))(plVar7);
      }
      local_78 = *(undefined8 *)(param_1 + 0xd8);
      local_70 = &local_78;
      local_68 = &local_50;
      local_50 = 0;
      local_58 = &local_70;
      local_60 = &LAB_143cbcae0;
      if (plVar7[8] != 0) {
        local_30 = &local_48;
        local_40 = &local_60;
        local_28 = &local_38;
        local_38 = FUN_143cbca2e;
        local_18 = &local_28;
        local_20 = FUN_1487df56e;
        local_48 = plVar7;
        FUN_1447c5ba2();
        if ((local_50 != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
          *(undefined1 *)(param_1 + 0x150) = 1;
          *(undefined4 *)(param_1 + 0x120) = *(undefined4 *)(local_50 + 0x2a4);
          uVar6 = *(undefined8 *)(local_50 + 0x3c8);
          uVar2 = *(undefined4 *)(local_50 + 0x3d0);
          uVar3 = *(undefined4 *)(local_50 + 0x3d4);
          uVar4 = *(undefined4 *)(local_50 + 0x3d8);
          uVar5 = *(undefined4 *)(local_50 + 0x3dc);
          *(undefined8 *)(param_1 + 0x130) = *(undefined8 *)(local_50 + 0x3c0);
          *(undefined8 *)(param_1 + 0x138) = uVar6;
          *(undefined4 *)(param_1 + 0x140) = uVar2;
          *(undefined4 *)(param_1 + 0x144) = uVar3;
          *(undefined4 *)(param_1 + 0x148) = uVar4;
          *(undefined4 *)(param_1 + 0x14c) = uVar5;
          *(undefined4 *)(param_1 + 0x160) = *(undefined4 *)(local_50 + 0x330);
          if (local_50 + 0x330 == param_1 + 0x160) {
            *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(local_50 + 0x378);
            uVar2 = *(undefined4 *)(local_50 + 0x36c);
            uVar3 = *(undefined4 *)(local_50 + 0x370);
            uVar4 = *(undefined4 *)(local_50 + 0x374);
            *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(local_50 + 0x368);
            *(undefined4 *)(param_1 + 0x19c) = uVar2;
            *(undefined4 *)(param_1 + 0x1a0) = uVar3;
            *(undefined4 *)(param_1 + 0x1a4) = uVar4;
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
          }
          if (*(char *)(local_50 + 0x338) == '\x01') {
            *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)(local_50 + 0x334);
            uVar8 = 1;
LAB_14186d1d8:
            *(undefined1 *)(param_1 + 0x168) = uVar8;
          }
          else if (*(char *)(param_1 + 0x168) == '\x01') {
            uVar8 = 0;
            goto LAB_14186d1d8;
          }
          if (*(char *)(local_50 + 0x340) == '\x01') {
            *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(local_50 + 0x33c);
            *(undefined1 *)(param_1 + 0x170) = 1;
          }
          else if (*(char *)(param_1 + 0x170) == '\x01') {
            *(undefined1 *)(param_1 + 0x170) = 0;
          }
          if (*(char *)(local_50 + 0x360) == '\x01') {
            *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(local_50 + 0x358);
            uVar6 = *(undefined8 *)(local_50 + 0x350);
            *(undefined8 *)(param_1 + 0x178) = *(undefined8 *)(local_50 + 0x348);
            *(undefined8 *)(param_1 + 0x180) = uVar6;
            *(undefined1 *)(param_1 + 400) = 1;
          }
          else if (*(char *)(param_1 + 400) == '\x01') {
            *(undefined1 *)(param_1 + 400) = 0;
          }
          *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(local_50 + 0x378);
          uVar2 = *(undefined4 *)(local_50 + 0x36c);
          uVar3 = *(undefined4 *)(local_50 + 0x370);
          uVar4 = *(undefined4 *)(local_50 + 0x374);
          *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(local_50 + 0x368);
          *(undefined4 *)(param_1 + 0x19c) = uVar2;
          *(undefined4 *)(param_1 + 0x1a0) = uVar3;
          *(undefined4 *)(param_1 + 0x1a4) = uVar4;
          if (*(char *)(local_50 + 0x3a0) == '\x01') {
            uVar2 = *(undefined4 *)(local_50 + 0x380);
            uVar3 = *(undefined4 *)(local_50 + 900);
            uVar4 = *(undefined4 *)(local_50 + 0x388);
            uVar5 = *(undefined4 *)(local_50 + 0x38c);
            uVar6 = *(undefined8 *)(local_50 + 0x398);
            *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)(local_50 + 0x390);
            *(undefined8 *)(param_1 + 0x1c8) = uVar6;
            *(undefined4 *)(param_1 + 0x1b0) = uVar2;
            *(undefined4 *)(param_1 + 0x1b4) = uVar3;
            *(undefined4 *)(param_1 + 0x1b8) = uVar4;
            *(undefined4 *)(param_1 + 0x1bc) = uVar5;
            *(undefined1 *)(param_1 + 0x1d0) = 1;
          }
          else if (*(char *)(param_1 + 0x1d0) == '\x01') {
            *(undefined1 *)(param_1 + 0x1d0) = 0;
          }
          goto LAB_14186d25e;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x150) = 0;
LAB_14186d25e:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186d34e FUN_14186d34e body=448 status=ok
// SIG undefined FUN_14186d34e(void)

void FUN_14186d34e(longlong param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 *local_70;
  longlong *local_68;
  undefined1 *local_60;
  undefined8 **local_58;
  longlong local_50;
  longlong *local_48;
  undefined1 **local_40;
  code *local_38;
  longlong **local_30;
  code **local_28;
  code *local_20;
  undefined8 **local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar9 = *(longlong **)(param_1 + 0x118);
  if ((((plVar9 != (longlong *)0x0) && (*(int *)(param_1 + 0x114) != 0)) &&
      (uVar1 = *(uint *)(param_1 + 0x110), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar10 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar10 != 0) && (*(int *)(lVar10 + 0x10) == *(int *)(param_1 + 0x114))) &&
       ((*(uint *)(lVar10 + 8) & 0x10200000) == 0)) {
      if (*(code **)(*plVar9 + 0x10) == (code *)&LAB_144944cea) {
        plVar9 = plVar9 + 0xe1;
      }
      else {
        plVar9 = (longlong *)(**(code **)(*plVar9 + 0x10))(plVar9);
      }
      local_78 = *(undefined8 *)(param_1 + 0xd8);
      local_70 = &local_78;
      local_68 = &local_50;
      local_50 = 0;
      local_58 = &local_70;
      local_60 = &LAB_143cbcae0;
      if (plVar9[8] != 0) {
        local_30 = &local_48;
        local_40 = &local_60;
        local_28 = &local_38;
        local_38 = FUN_143cbca2e;
        local_18 = &local_28;
        local_20 = FUN_1487df56e;
        local_48 = plVar9;
        FUN_1447c5ba2();
        if ((local_50 != 0) && (*(longlong *)(param_1 + 0x108) != 0)) {
          *(undefined1 *)(param_1 + 0x120) = 1;
          *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(local_50 + 0x2a4);
          uVar2 = *(undefined4 *)(local_50 + 0x3c4);
          uVar3 = *(undefined4 *)(local_50 + 0x3c8);
          uVar4 = *(undefined4 *)(local_50 + 0x3cc);
          uVar5 = *(undefined4 *)(local_50 + 0x3d0);
          uVar6 = *(undefined4 *)(local_50 + 0x3d4);
          uVar7 = *(undefined4 *)(local_50 + 0x3d8);
          uVar8 = *(undefined4 *)(local_50 + 0x3dc);
          *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(local_50 + 0x3c0);
          *(undefined4 *)(param_1 + 0x134) = uVar2;
          *(undefined4 *)(param_1 + 0x138) = uVar3;
          *(undefined4 *)(param_1 + 0x13c) = uVar4;
          *(undefined4 *)(param_1 + 0x140) = uVar5;
          *(undefined4 *)(param_1 + 0x144) = uVar6;
          *(undefined4 *)(param_1 + 0x148) = uVar7;
          *(undefined4 *)(param_1 + 0x14c) = uVar8;
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x120) = 0;
  if ((local_10 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14186d510 FUN_14186d510 body=148 status=ok
// SIG undefined FUN_14186d510(void)

void FUN_14186d510(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 *local_38;
  undefined1 **local_30;
  code *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400bc96c(param_1 + 0x7c0);
  if (*(char *)(param_1 + 0x7e9) == '\x02') {
    *(undefined1 *)(param_1 + 0x7e9) = 1;
  }
  local_38 = &local_48;
  local_30 = &local_40;
  local_40 = &LAB_143cba6ec;
  local_20 = &local_30;
  local_28 = FUN_14061a336;
  local_48 = param_2;
  FUN_1448fef12(param_1,3);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186d5a6 FUN_14186d5a6 body=377 status=ok
// SIG undefined FUN_14186d5a6(void)

undefined8 FUN_14186d5a6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  
  FUN_1456ca734(param_3,param_2,param_1 + 0x400);
  plVar8 = (longlong *)(param_1 + 0x7f0);
  if (*(longlong **)(param_1 + 0x800) != (longlong *)0x0) {
    plVar8 = *(longlong **)(param_1 + 0x800);
  }
  if ((longlong)*(int *)(param_1 + 0x808) != 0) {
    plVar7 = plVar8 + (longlong)*(int *)(param_1 + 0x808) * 2;
    do {
      plVar2 = (longlong *)plVar8[1];
      if (plVar2 != (longlong *)0x0) {
        iVar6 = (int)plVar2[1];
        do {
          if (iVar6 == 0) goto LAB_14186d6a3;
          LOCK();
          iVar4 = (int)plVar2[1];
          bVar9 = iVar6 == iVar4;
          if (bVar9) {
            *(int *)(plVar2 + 1) = iVar6 + 1;
            iVar4 = iVar6;
          }
          iVar6 = iVar4;
          UNLOCK();
        } while (!bVar9);
        plVar3 = (longlong *)*plVar8;
        if ((plVar3 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*plVar3 + 0x10))(plVar3), cVar5 != '\0')) {
          (**(code **)(*plVar3 + 8))(plVar3,param_2,param_1);
        }
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_14186d6a3:
      plVar8 = plVar8 + 2;
    } while (plVar8 != plVar7);
  }
  if (*(char *)(param_1 + 0x4e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e0) = 0;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    *(undefined1 *)(param_1 + 0x508) = 0;
  }
  if (*(char *)(param_1 + 0x530) == '\x01') {
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_1 + 0x558) == '\x01') {
    *(undefined1 *)(param_1 + 0x558) = 0;
  }
  if (*(char *)(param_1 + 0x580) == '\x01') {
    *(undefined1 *)(param_1 + 0x580) = 0;
  }
  if (*(char *)(param_1 + 0x5a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
  }
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  return param_2;
}



// FUNCTION 14186d720 FUN_14186d720 body=376 status=ok
// SIG undefined FUN_14186d720(void)

void FUN_14186d720(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar3;
  double dVar5;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar2;
  double dVar4;
  double dVar6;
  double dVar8;
  
  if (*(char *)(param_1 + 0x4e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e0) = 0;
  }
  if (*(char *)(param_1 + 0x508) == '\x01') {
    *(undefined1 *)(param_1 + 0x508) = 0;
  }
  if (*(char *)(param_1 + 0x530) == '\x01') {
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_1 + 0x558) == '\x01') {
    *(undefined1 *)(param_1 + 0x558) = 0;
  }
  if (*(char *)(param_1 + 0x580) == '\x01') {
    *(undefined1 *)(param_1 + 0x580) = 0;
  }
  if (*(char *)(param_1 + 0x5a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
  }
  if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
  dVar9 = *param_2;
  dVar10 = param_2[1];
  dVar11 = param_2[2];
  dVar12 = param_2[3];
  dVar1 = *(double *)(param_1 + 0x3f8);
  dVar2 = *(double *)(param_1 + 0x3f8);
  dVar3 = *(double *)(param_1 + 1000);
  dVar4 = *(double *)(param_1 + 1000);
  dVar5 = *(double *)(param_1 + 0x3e0);
  dVar6 = *(double *)(param_1 + 0x3e0);
  dVar7 = *(double *)(param_1 + 0x3f0);
  dVar8 = *(double *)(param_1 + 0x3f0);
  *(double *)(param_1 + 0x3e0) =
       dVar10 * dVar7 * -1.0 + dVar11 * dVar3 + dVar5 * dVar12 * 1.0 + dVar1 * dVar9;
  *(double *)(param_1 + 1000) =
       dVar9 * dVar8 * 1.0 + dVar12 * dVar4 + dVar6 * dVar11 * -1.0 + dVar2 * dVar10;
  *(double *)(param_1 + 0x3f0) =
       dVar12 * dVar7 * 1.0 + ((dVar5 * dVar10 * 1.0 + dVar1 * dVar11) - dVar3 * dVar9);
  *(double *)(param_1 + 0x3f8) =
       dVar11 * dVar8 * -1.0 + ((dVar6 * dVar9 * -1.0 + dVar2 * dVar12) - dVar4 * dVar10);
  FUN_1447c6720();
  return;
}



// FUNCTION 14186d898 FUN_14186d898 body=48 status=ok
// SIG undefined FUN_14186d898(void)

void FUN_14186d898(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3ed9e0);
  FUN_1406f8a8a(param_1,param_2);
  return;
}



// FUNCTION 14186d8c8 FUN_14186d8c8 body=52 status=ok
// SIG undefined FUN_14186d8c8(void)

void FUN_14186d8c8(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_1448332aa(param_2,&DAT_14b3ed9e0);
  if ((iVar1 < 0) && ((*(byte *)(param_2 + 0x28) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)(param_1 + 0x38);
  }
  return;
}



// FUNCTION 14186d8fc FUN_14186d8fc body=1483 status=ok
// SIG undefined FUN_14186d8fc(void)

int * FUN_14186d8fc(longlong *param_1,int *param_2,uint param_3,undefined8 *param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte bVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  int iVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_14482b872(param_1,iVar19);
    }
    iVar21 = (int)param_1[5];
    if (iVar21 == 0) {
      iVar5 = -1;
    }
    else {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar8 = param_1 + 2;
    iVar10 = iVar21 + 1;
    iVar14 = iVar21 + 0x1f;
    if (-1 < iVar21) {
      iVar14 = iVar21;
    }
    if (iVar14 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar10;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar21) {
        if (iVar21 + 0x20U < 0xa0) {
          iVar10 = 0x80;
          iVar5 = iVar21;
        }
        else {
          uVar13 = iVar21 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar12 = 4;
            if (4 < uVar13) {
              uVar12 = uVar13;
            }
          }
          else {
            uVar12 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar7 = FUN_144a3809e(uVar12 << 2,0);
          iVar5 = (int)(uVar7 >> 2);
          iVar10 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar10 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar10;
        FUN_1446efbd8(plVar8,iVar5);
        iVar10 = (int)param_1[5] + 1;
      }
      iVar5 = iVar10 + 0x1f;
      if (-1 < iVar10) {
        iVar5 = iVar10;
      }
      *(int *)(param_1 + 5) = iVar10;
      if (iVar10 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar8;
        }
        bVar9 = -(char)(iVar10 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar5 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar6 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar21 & 0x1f;
    puVar1 = (uint *)((longlong)plVar8 + (longlong)(iVar14 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar6 = (longlong)iVar19;
    iVar21 = *(int *)(*param_1 + 4 + lVar6 * 0x18);
    *(int *)(param_1 + 6) = iVar21;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar21 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  puVar11 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar11 = puVar1;
  }
  iVar21 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar21 = iVar19;
  }
  puVar11[iVar21 >> 5] = puVar11[iVar21 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  uVar13 = 1;
  plVar8 = (longlong *)(*param_1 + lVar6 * 0x18);
  lVar6 = *(longlong *)*param_4;
  *plVar8 = lVar6;
  plVar8[1] = 0;
  *(undefined4 *)(plVar8 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar12) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar21 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & param_3) * 4);
    if (iVar21 != -1) {
      do {
        plVar16 = (longlong *)(*param_1 + (longlong)iVar21 * 0x18);
        if (*plVar16 == lVar6) {
          uVar3 = *(undefined4 *)((longlong)plVar8 + 4);
          lVar6 = plVar8[1];
          uVar4 = *(undefined4 *)((longlong)plVar8 + 0xc);
          *(int *)plVar16 = (int)*plVar8;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar3;
          *(int *)(plVar16 + 1) = (int)lVar6;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar4;
          FUN_1487d76bc(param_1,iVar19);
          goto LAB_14186dd79;
        }
        iVar21 = (int)plVar16[2];
      } while (iVar21 != -1);
    }
  }
  if (3 < uVar12) {
    uVar7 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
    lVar6 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar13 = 1 << ((byte)lVar6 & 0x1f);
  }
  if (((int)uVar12 < 1) || ((int)uVar13 <= (int)param_1[9])) {
    param_3 = (int)param_1[9] - 1U & param_3;
    *(uint *)((longlong)plVar8 + 0x14) = param_3;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(plVar8 + 2) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)param_3) * 4) =
         iVar19;
    goto LAB_14186dd79;
  }
  *(uint *)(param_1 + 9) = uVar13;
  plVar8 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar8,0,0,4);
    uVar13 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar13 == 1) {
    if (*plVar8 != 0) {
      FUN_1446efa72(plVar8,0,0,4);
    }
LAB_14186da54:
    uVar12 = 0;
    do {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar16;
      }
      *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar12) * 4) =
           0xffffffff;
      uVar12 = uVar12 + 1;
    } while (uVar13 != uVar12);
  }
  else {
    if (uVar13 == 0) goto LAB_14186dd79;
    FUN_1446efa72(plVar8,0,uVar13,4);
    if (0 < (int)uVar13) goto LAB_14186da54;
  }
  iVar21 = (int)param_1[5];
  if (iVar21 == 0) {
    uVar7 = 0;
    uVar17 = 1;
    iVar5 = 0;
    iVar10 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar13 = *puVar11;
    if (uVar13 == 0) {
      iVar5 = iVar21 + 0x1e;
      if (-1 < iVar21 + -1) {
        iVar5 = iVar21 + -1;
      }
      uVar7 = 0;
      uVar17 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar17 = uVar7;
      }
      iVar10 = 0;
      do {
        if (uVar17 == uVar7) goto LAB_14186dd79;
        iVar10 = iVar10 + 0x20;
        uVar13 = puVar11[uVar7 + 1];
        uVar7 = uVar7 + 1;
      } while (uVar13 == 0);
    }
    else {
      uVar7 = 0;
      iVar10 = 0;
    }
    uVar17 = (ulonglong)(-uVar13 & uVar13);
    uVar22 = uVar17 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar22 != 0) {
      for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar21 <= iVar5) {
      iVar5 = iVar21;
    }
  }
  if (iVar5 < iVar21) {
    uVar13 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar20 = (longlong)iVar5;
      uVar2 = *(undefined8 *)(lVar6 + lVar20 * 0x18);
      uVar12 = (uint)((ulonglong)uVar2 >> 0x10);
      uVar18 = (uint)uVar2 & 0xffff;
      uVar22 = (longlong)
               (int)(((uint)uVar2 << 0x10 | uVar18) + (int)((ulonglong)uVar2 >> 0x20) +
                     (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar18 >> 4)) &
               (longlong)(int)param_1[9] - 1U;
      iVar21 = (int)uVar22;
      *(int *)(lVar6 + 0x14 + lVar20 * 0x18) = iVar21;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar16;
      }
      *(undefined4 *)(lVar6 + 0x10 + lVar20 * 0x18) =
           *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar22) * 4);
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = plVar16;
      }
      *(int *)((longlong)plVar8 + ((longlong)iVar21 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar13 = ~(uint)uVar17 & uVar13;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar21 = (int)param_1[5];
      iVar5 = (int)uVar7;
      lVar6 = (longlong)iVar5;
      uVar12 = puVar11[lVar6] & uVar13;
      if (uVar12 == 0) {
        iVar14 = iVar21 + 0x1e;
        if (-1 < iVar21 + -1) {
          iVar14 = iVar21 + -1;
        }
        iVar14 = iVar14 >> 5;
        iVar15 = iVar14;
        if (iVar14 < iVar5) {
          iVar15 = iVar5;
        }
        if (iVar14 <= iVar5) break;
        lVar20 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar12 = puVar11[lVar6 + lVar20 + 1];
          if (uVar12 != 0) break;
          lVar20 = lVar20 + 1;
          if (iVar15 - lVar6 == lVar20) goto LAB_14186dd79;
        }
        uVar7 = (ulonglong)(iVar5 + (int)lVar20 + 1);
        uVar13 = 0xffffffff;
      }
      uVar17 = (ulonglong)(-uVar12 & uVar12);
      uVar22 = uVar17 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = (iVar10 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar21);
  }
LAB_14186dd79:
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 14186dec8 FUN_14186dec8 body=142 status=ok
// SIG undefined FUN_14186dec8(void)

void FUN_14186dec8(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0xffffffffffffc00U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 4,8);
      uVar3 = uVar3 >> 4;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x10,8);
    }
  }
  return;
}



// FUNCTION 14186df56 FUN_14186df56 body=217 status=ok
// SIG undefined FUN_14186df56(void)

undefined8 FUN_14186df56(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = (ulonglong)param_2 * 0x30;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (param_2 < 0x2ab) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar3 >> 4]];
      }
      else {
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar3;
  uVar2 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar3 / 0x30)) {
    uVar4 = uVar3 / 0x30 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar2 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x30,8);
  }
  return uVar2;
}



// FUNCTION 14186e030 FUN_14186e030 body=113 status=ok
// SIG undefined FUN_14186e030(void)

void FUN_14186e030(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14cb62b20 == 0) {
    uVar2 = FUN_140325e72();
    DAT_14cb62b20 = FUN_140002ddd(FUN_1464fa00b,uVar2,L"GbxRotationChannel");
  }
  cVar1 = FUN_1448093f4(param_2,DAT_14cb62b20);
  if (cVar1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)*param_1;
                    /* WARNING: Could not recover jumptable at 0x00014186e06f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(((undefined8 *)*param_1)[1],param_2,param_3,UNRECOVERED_JUMPTABLE);
    return;
  }
  return;
}



// FUNCTION 14186e0a2 FUN_14186e0a2 body=3521 status=ok
// SIG undefined FUN_14186e0a2(void)

ulonglong FUN_14186e0a2(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  int *piVar11;
  ulonglong unaff_RBP;
  ulonglong uVar12;
  longlong lVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  bool bVar18;
  undefined4 uVar19;
  int iVar20;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_120;
  undefined4 local_118;
  undefined8 local_110;
  wchar_t *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  code **local_f0;
  code *local_e8;
  code *local_e0;
  int local_d0;
  undefined4 uStack_cc;
  ushort local_b8;
  byte local_b0;
  code *local_a8 [2];
  longlong *local_98;
  int local_80;
  int local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_148;
  lVar9 = *(longlong *)(param_1 + 0x40);
  lVar10 = *(longlong *)(param_1 + 0x48);
  if (((((lVar9 != 0) && (*(int *)(lVar9 + 0x4c) != 0)) &&
       (uVar5 = *(uint *)(lVar9 + 0x48), -1 < (int)uVar5)) &&
      (((int)uVar5 < DAT_14c9647dc &&
       (plVar7 = (longlong *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0)))) &&
     (((int)plVar7[2] == *(int *)(lVar9 + 0x4c) &&
      (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar9 = *plVar7, lVar9 != 0)))))) {
    if (DAT_14cac9ca8 == 0) {
      local_f0 = local_a8;
      local_a8[0] = FUN_141030f22;
      local_e0 = FUN_14081d0ea;
      local_e8 = FUN_14081d0ea;
      local_f8 = &LAB_1478c0a72;
      local_100 = &LAB_1417b2375;
      local_108 = L"Engine";
      local_110 = 0x1000000000;
      local_118 = 0x10000004;
      local_120 = 8;
      local_128 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar9 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) goto LAB_14186e17a;
  }
  lVar9 = 0;
LAB_14186e17a:
  if (*(char *)(lVar10 + 0x70) == '\x01') {
    cVar4 = *(char *)(param_1 + 0x50);
  }
  else {
    local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
    local_80 = 0;
    FUN_1456bb102(local_a8,lVar9);
    piVar11 = &local_78;
    FUN_1447c3578(lVar10 + 0x38,piVar11,local_a8);
    uVar5 = FUN_144a7fca4(piVar11);
    unaff_RBP = (ulonglong)uVar5;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar2 != (code *)0x0) {
      if (0x18 < local_60) {
        piVar11 = (int *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar2)(piVar11);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    FUN_144a5ac3a(local_a8);
    cVar4 = (char)uVar5;
  }
  if (cVar4 == '\0') {
    uVar12 = 0;
  }
  else {
    bVar3 = *(byte *)(lVar10 + 0x250);
    if ((bVar3 & 1) != 0) {
      uVar1 = *(undefined1 *)(lVar10 + 0x71);
      *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | 0x40;
      *(undefined1 *)(param_2 + 8) = uVar1;
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 2) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_d0;
      FUN_1447c3578(lVar10 + 0x78,piVar11,local_a8);
      if (local_b0 == 3) {
        iVar20 = local_d0;
        bVar3 = 3;
      }
      else {
        piVar14 = &local_78;
        FUN_1400b56fe(piVar14,&local_d0,3);
        iVar20 = 0;
        if (local_58 != 0) {
          iVar20 = local_78;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_60) {
            piVar14 = (int *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar2)(piVar14);
        }
        bVar3 = local_b0;
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
          bVar3 = local_b0;
        }
      }
      *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | 0x80;
      *(int *)(param_2 + 0xc) = iVar20;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_b8) {
          piVar11 = (int *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      lVar13 = DAT_14c9a3da0;
      if ((longlong)local_80 != 0) {
        lVar15 = (longlong)local_80 + -1;
        lVar16 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
        if (*(longlong *)(lVar13 + lVar16) != 0) {
          FUN_1400020a8();
        }
        lVar13 = DAT_14c9a3da0;
        iVar20 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
        }
        *(undefined4 *)(lVar13 + lVar16) = 0xffffffff;
        iVar6 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar6 = DAT_14c9a3dd0;
        }
        *(int *)(lVar13 + 4 + lVar16) = iVar6;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar8 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar8 = DAT_14c9a3dc0;
        }
        iVar6 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar6 = iVar20;
        }
        bVar3 = (byte)lVar15 & 0x1f;
        DAT_14c9a3dd0 = iVar20;
        *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_80 = 0;
      }
      if (((char)local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
        LOCK();
        piVar11 = (int *)((longlong)local_98 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 4) != 0) {
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 1;
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar10 + 0xb0);
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 8) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_78;
      FUN_1447c3578(lVar10 + 0xb8,piVar11,local_a8);
      uVar19 = FUN_144a7ecd0(piVar11);
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 2;
      *(undefined4 *)(param_2 + 0x18) = uVar19;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          piVar11 = (int *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      FUN_144a5ac3a(local_a8);
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 0x10) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_78;
      FUN_1447c3578(lVar10 + 0xf0,piVar11,local_a8);
      uVar19 = FUN_144a7ecd0(piVar11);
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 4;
      *(undefined4 *)(param_2 + 0x1c) = uVar19;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          piVar11 = (int *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      FUN_144a5ac3a(local_a8);
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 0x20) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_78;
      FUN_1447c3578(lVar10 + 0x128,piVar11,local_a8);
      uVar19 = FUN_144a7ecd0(piVar11);
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 8;
      *(undefined4 *)(param_2 + 0x20) = uVar19;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          piVar11 = (int *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      FUN_144a5ac3a(local_a8);
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((bVar3 & 0x40) != 0) {
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x10;
      *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(lVar10 + 0x160);
      bVar3 = *(byte *)(lVar10 + 0x250);
    }
    if ((char)bVar3 < '\0') {
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x20;
      *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(lVar10 + 0x168);
    }
    bVar3 = *(byte *)(lVar10 + 0x251);
    if ((bVar3 & 1) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_78;
      FUN_1447c3578(lVar10 + 0x170,piVar11,local_a8);
      cVar4 = FUN_144a7fca4(piVar11);
      *(byte *)(param_2 + 0x35) = *(byte *)(param_2 + 0x35) | 0x80;
      *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xfd | cVar4 * '\x02';
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          piVar11 = (int *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      FUN_144a5ac3a(local_a8);
      bVar3 = *(byte *)(lVar10 + 0x251);
    }
    if ((bVar3 & 2) != 0) {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_78;
      FUN_1447c3578(lVar10 + 0x1a8,piVar11,local_a8);
      cVar4 = FUN_144a7fca4(piVar11);
      *(byte *)(param_2 + 0x36) = *(byte *)(param_2 + 0x36) | 1;
      *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) & 0xfb | cVar4 << 2;
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_60) {
          piVar11 = (int *)CONCAT44(uStack_74,local_78);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_60) {
        FUN_1400020a8(CONCAT44(uStack_74,local_78));
      }
      FUN_144a5ac3a(local_a8);
    }
    if (*(char *)(lVar10 + 0x208) != '\0') {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_d0;
      FUN_1447c3578(lVar10 + 0x1e0,piVar11,local_a8);
      if (local_b0 == 1) {
        bVar17 = local_d0 != 0;
        bVar3 = 1;
      }
      else {
        piVar14 = &local_78;
        FUN_1400b56fe(piVar14,&local_d0,1);
        bVar17 = local_58 != 0;
        bVar18 = local_78 != 0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_60) {
            piVar14 = (int *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar2)(piVar14);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
        }
        bVar17 = bVar17 && bVar18;
        bVar3 = local_b0;
      }
      unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar17);
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_b8) {
          piVar11 = (int *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      lVar13 = DAT_14c9a3da0;
      if ((longlong)local_80 != 0) {
        lVar15 = (longlong)local_80 + -1;
        lVar16 = lVar15 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar16),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar16));
        if (*(longlong *)(lVar13 + lVar16) != 0) {
          FUN_1400020a8();
        }
        lVar13 = DAT_14c9a3da0;
        iVar20 = (int)lVar15;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
        }
        *(undefined4 *)(lVar13 + lVar16) = 0xffffffff;
        iVar6 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar6 = DAT_14c9a3dd0;
        }
        *(int *)(lVar13 + 4 + lVar16) = iVar6;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar8 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar8 = DAT_14c9a3dc0;
        }
        iVar6 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar6 = iVar20;
        }
        bVar3 = (byte)lVar15 & 0x1f;
        DAT_14c9a3dd0 = iVar20;
        *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_80 = 0;
      }
      if (((char)local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
        LOCK();
        piVar11 = (int *)((longlong)local_98 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      if (bVar17 != false) {
        *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | 0x10;
      }
    }
    uVar12 = CONCAT71((int7)(unaff_RBP >> 8),1);
    if (*(char *)(lVar10 + 0x240) != '\0') {
      local_a8[0] = (code *)((ulonglong)local_a8[0] & 0xffffffffffffff00);
      local_80 = 0;
      FUN_1456bb102(local_a8,lVar9);
      piVar11 = &local_d0;
      FUN_1447c3578(lVar10 + 0x218,piVar11,local_a8);
      if (local_b0 == 1) {
        bVar17 = local_d0 != 0;
        uVar5 = 1;
      }
      else {
        piVar14 = &local_78;
        FUN_1400b56fe(piVar14,&local_d0,1);
        bVar17 = local_78 != 0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
        if (pcVar2 != (code *)0x0) {
          if (0x18 < local_60) {
            piVar14 = (int *)CONCAT44(uStack_74,local_78);
          }
          (*pcVar2)(piVar14);
        }
        if (0x18 < local_60) {
          FUN_1400020a8(CONCAT44(uStack_74,local_78));
        }
        bVar17 = local_58 != 0 && bVar17;
        uVar5 = (uint)local_b0;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar5 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (0x18 < local_b8) {
          piVar11 = (int *)CONCAT44(uStack_cc,local_d0);
        }
        (*pcVar2)(piVar11);
      }
      if (0x18 < local_b8) {
        FUN_1400020a8(CONCAT44(uStack_cc,local_d0));
      }
      lVar9 = DAT_14c9a3da0;
      if ((longlong)local_80 != 0) {
        lVar13 = (longlong)local_80 + -1;
        lVar10 = lVar13 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar10),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar10));
        if (*(longlong *)(lVar9 + lVar10) != 0) {
          FUN_1400020a8();
        }
        lVar9 = DAT_14c9a3da0;
        iVar20 = (int)lVar13;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar20;
        }
        *(undefined4 *)(lVar9 + lVar10) = 0xffffffff;
        iVar6 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar6 = DAT_14c9a3dd0;
        }
        *(int *)(lVar9 + 4 + lVar10) = iVar6;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar8 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar8 = DAT_14c9a3dc0;
        }
        iVar6 = iVar20 + 0x1f;
        if (-1 < iVar20) {
          iVar6 = iVar20;
        }
        bVar3 = (byte)lVar13 & 0x1f;
        DAT_14c9a3dd0 = iVar20;
        *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) =
             *(uint *)(puVar8 + (longlong)(iVar6 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_80 = 0;
      }
      if (((char)local_a8[0] == '\x03') && (local_98 != (longlong *)0x0)) {
        LOCK();
        piVar11 = (int *)((longlong)local_98 + 0xc);
        *piVar11 = *piVar11 + -1;
        UNLOCK();
        if (*piVar11 == 0) {
          (**(code **)(*local_98 + 0x10))();
        }
      }
      if (bVar17) {
        *(byte *)(param_2 + 0x34) = *(byte *)(param_2 + 0x34) | 0x20;
      }
    }
  }
  if ((local_50 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return uVar12 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186ee64 FUN_14186ee64 body=128 status=ok
// SIG undefined FUN_14186ee64(void)

void FUN_14186ee64(undefined8 param_1,longlong *param_2)

{
  undefined1 auStack_1c8 [32];
  undefined **local_1a8;
  longlong *local_1a0;
  undefined ***local_198;
  undefined8 **local_190;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3ee41c);
  local_190 = &local_198;
  local_1a8 = &PTR_FUN_149e37810;
  local_198 = &local_1a8;
  local_1a0 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((local_18 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186eee6 FUN_14186eee6 body=112 status=ok
// SIG undefined FUN_14186eee6(void)

void FUN_14186eee6(longlong param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14097663c();
  local_28 = 0x5c8a4e31;
  uStack_24 = 0xe61e4d36;
  uStack_20 = 0xad60351c;
  uStack_1c = 0xc9d0106a;
  iVar2 = FUN_1448a256a(param_1);
  if (iVar2 < 0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      uVar1 = 2;
    }
    else {
      if (*(char *)(param_1 + 0x30) != '\x02') goto LAB_14186ef1d;
      *(undefined1 *)(param_1 + 0x30) = 1;
      uVar1 = 1;
    }
    *(undefined1 *)(param_1 + 0x31) = uVar1;
  }
LAB_14186ef1d:
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186ef58 FUN_14186ef58 body=96 status=ok
// SIG undefined FUN_14186ef58(void)

void FUN_14186ef58(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  (**(code **)(*param_1 + 0x2b8))();
  FUN_140bbc088(param_1,param_2,param_3,param_4,param_5);
  FUN_140fc5bf8(param_1,param_2,param_3,1);
  return;
}



// FUNCTION 14186efb8 FUN_14186efb8 body=76 status=ok
// SIG undefined FUN_14186efb8(void)

void FUN_14186efb8(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_140fc5bf8();
  (**(code **)(*param_1 + 0x2d8))(param_1,param_2,param_3,0);
  FUN_140bc0c12(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14186f004 FUN_14186f004 body=89 status=ok
// SIG undefined FUN_14186f004(void)

void FUN_14186f004(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined1 **local_18;
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &local_9;
  local_18 = &local_30;
  local_20 = &LAB_143cbcb5c;
  local_28 = param_3;
  local_9 = param_2;
  FUN_1400b7536();
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186f05e FUN_14186f05e body=35 status=ok
// SIG undefined FUN_14186f05e(void)

longlong FUN_14186f05e(longlong param_1)

{
  if (*(byte *)(param_1 + 0x40) < 6) {
    *(undefined1 *)(param_1 + 0x40) = 0xff;
  }
  FUN_140219b74(param_1);
  return param_1;
}



// FUNCTION 14186f088 FUN_14186f088 body=394 status=ok
// SIG undefined FUN_14186f088(void)

void FUN_14186f088(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x48);
  uVar2 = FUN_14085b07e(lVar1 + 0x38);
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  uVar2 = FUN_14085b07e(lVar1 + 0x58);
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  fVar3 = *(float *)(lVar1 + 0x6c) - *(float *)(lVar1 + 0x70);
  fVar4 = *(float *)(lVar1 + 0x48) - *(float *)(lVar1 + 0x4c);
  fVar5 = fVar4;
  if (fVar4 <= fVar3) {
    fVar5 = fVar3;
    fVar3 = fVar4;
  }
  fVar4 = fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (fVar4 - fVar3) * 0.5;
  fVar4 = (fVar3 + fVar4) - fVar4;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar3 = (fVar5 - fVar4) * 0.5;
  *(float *)(param_1 + 0x74) = fVar4 + fVar3;
  *(float *)(param_1 + 0x78) = fVar3;
  fVar3 = *(float *)(lVar1 + 0x48) + *(float *)(lVar1 + 0x4c);
  fVar4 = *(float *)(lVar1 + 0x6c) + *(float *)(lVar1 + 0x70);
  fVar5 = fVar4;
  if (fVar4 <= fVar3) {
    fVar5 = fVar3;
    fVar3 = fVar4;
  }
  fVar4 = fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (fVar4 - fVar3) * 0.5;
  fVar4 = (fVar3 + fVar4) - fVar4;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar3 = (fVar5 - fVar4) * 0.5;
  *(float *)(param_1 + 0x7c) = fVar4 + fVar3;
  *(float *)(param_1 + 0x80) = fVar3;
  fVar3 = *(float *)(lVar1 + 0x74) - *(float *)(lVar1 + 0x78);
  fVar4 = *(float *)(lVar1 + 0x50) - *(float *)(lVar1 + 0x54);
  fVar5 = fVar4;
  if (fVar4 <= fVar3) {
    fVar5 = fVar3;
    fVar3 = fVar4;
  }
  fVar4 = fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (fVar4 - fVar3) * 0.5;
  fVar4 = (fVar3 + fVar4) - fVar4;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar3 = (fVar5 - fVar4) * 0.5;
  *(float *)(param_1 + 0x84) = fVar4 + fVar3;
  *(float *)(param_1 + 0x88) = fVar3;
  fVar3 = *(float *)(lVar1 + 0x50) + *(float *)(lVar1 + 0x54);
  fVar4 = *(float *)(lVar1 + 0x74) + *(float *)(lVar1 + 0x78);
  fVar5 = fVar4;
  if (fVar4 <= fVar3) {
    fVar5 = fVar3;
    fVar3 = fVar4;
  }
  fVar4 = fVar3;
  if (fVar3 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar4 = (fVar4 - fVar3) * 0.5;
  fVar4 = (fVar3 + fVar4) - fVar4;
  if (fVar5 <= fVar4) {
    fVar4 = fVar5;
  }
  fVar3 = (fVar5 - fVar4) * 0.5;
  *(float *)(param_1 + 0x8c) = fVar4 + fVar3;
  *(float *)(param_1 + 0x90) = fVar3;
  return;
}



// FUNCTION 14186f212 FUN_14186f212 body=533 status=ok
// SIG undefined FUN_14186f212(void)

void FUN_14186f212(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
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
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  *(byte *)(param_1 + 2) = *(byte *)(param_1 + 2) & 0xfe;
  *(undefined4 *)(param_1 + 3) = 0xfffffffe;
  *(undefined4 *)(param_1 + 4) = 0xfffffffe;
  *(undefined1 *)((longlong)param_1 + 0x3c) = 0;
  uVar3 = FUN_14477dc2a();
  FUN_14477dadc(uVar3,param_2);
  *(undefined1 *)(param_1 + 8) = 1;
  uVar3 = FUN_14477dc2a(param_1);
  FUN_14477dadc(uVar3,param_2);
  if (param_1[0x10] != 0) {
    lVar4 = (**(code **)(*param_1 + 0x1f8))(param_1);
    if (lVar4 != 0) {
      FUN_1448830cc(param_1[0x10] + 0x8e8,param_1 + 0xf,lVar4);
    }
  }
  lVar4 = *param_2;
  if ((lVar4 != 0) && (lVar2 = *(longlong *)(lVar4 + 0x130), lVar2 != 0)) {
    if (DAT_14c9a51d8 == 0) {
      local_50 = &local_30;
      local_30 = FUN_1433d5220;
      local_40 = FUN_142b32f24;
      local_48 = &LAB_1462ac436;
      local_58 = &LAB_1470c7d1d;
      local_60 = &LAB_1462ac43b;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000008;
      local_80 = 0x10;
      local_88 = 0x560;
      FUN_14081cfa3(L"/Script/GbxEngine",L"GbxEngineAnimInstance",&DAT_14c9a51d8,FUN_1462ac40e);
    }
    lVar2 = *(longlong *)(lVar2 + 0x10);
    if ((*(int *)(DAT_14c9a51d8 + 0x38) <= *(int *)(lVar2 + 0x38)) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(DAT_14c9a51d8 + 0x38) * 8) ==
        DAT_14c9a51d8 + 0x30)) {
      param_1[0x10] = lVar4;
      lVar4 = (**(code **)(*param_1 + 0x1f8))(param_1);
      if (lVar4 != 0) {
        lVar2 = param_1[0x10];
        iVar1 = *(int *)(lVar2 + 0x940);
        *(uint *)(lVar2 + 0x940) = iVar1 + 1U;
        if (*(uint *)(lVar2 + 0x944) < iVar1 + 1U) {
          FUN_140890db0((longlong *)(lVar2 + 0x938),iVar1);
        }
        lVar2 = *(longlong *)(lVar2 + 0x938);
        *(longlong **)(lVar2 + (longlong)iVar1 * 0x10) = param_1 + 0xf;
        *(longlong *)(lVar2 + 8 + (longlong)iVar1 * 0x10) = lVar4;
      }
      goto LAB_14186f347;
    }
  }
  param_1[0x10] = 0;
LAB_14186f347:
  if ((local_28 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14186f428 FUN_14186f428 body=149 status=ok
// SIG undefined FUN_14186f428(void)

void FUN_14186f428(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  bool bVar5;
  
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    lVar3 = FUN_14072d4de(param_1);
    if (lVar3 == 0) {
      bVar5 = false;
    }
    else {
      bVar5 = *(int *)(lVar3 + 0x70) != 0;
    }
    pbVar1 = *(byte **)(param_1 + 0x60);
    if ((pbVar1 == (byte *)0x0) || ((*pbVar1 & 1) == 0)) {
      *(bool *)(param_1 + 0x4b) = bVar5;
    }
    else {
      cVar4 = *(char *)(param_1 + 0x4b);
      if (bVar5 != (cVar4 != '\0')) {
        uVar2 = *(undefined8 *)(pbVar1 + 0x28);
        FUN_1402eb48e(uVar2,param_1 + 0x40);
        *(bool *)(param_1 + 0x4b) = bVar5;
        FUN_1402eb97e(uVar2,param_1 + 0x40);
        cVar4 = *(char *)(param_1 + 0x4b);
      }
      if (cVar4 == '\0') {
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0x24) = 0xbf800000;
      }
    }
  }
  FUN_1401c3ca6(param_1);
  return;
}



// FUNCTION 14186f4be FUN_14186f4be body=43 status=ok
// SIG undefined FUN_14186f4be(void)

undefined8 FUN_14186f4be(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_144904448(param_1 + 0x68);
  if ((cVar2 == '\0') || (lVar1 = *(longlong *)(param_1 + 0x60), lVar1 == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)lVar1 >> 8),*(undefined1 *)(lVar1 + 0x21));
  }
  return uVar3;
}



// FUNCTION 14186f4ea FUN_14186f4ea body=40 status=ok
// SIG undefined FUN_14186f4ea(void)

undefined8 FUN_14186f4ea(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186f512 FUN_14186f512 body=40 status=ok
// SIG undefined FUN_14186f512(void)

undefined8 FUN_14186f512(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186f53a FUN_14186f53a body=40 status=ok
// SIG undefined FUN_14186f53a(void)

undefined8 FUN_14186f53a(undefined8 param_1,int param_2)

{
  FUN_1403ecb9e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186f568 FUN_14186f568 body=124 status=ok
// SIG undefined FUN_14186f568(void)

undefined8 * FUN_14186f568(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[0xc];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14186f5e4 FUN_14186f5e4 body=240 status=ok
// SIG undefined FUN_14186f5e4(void)

void FUN_14186f5e4(undefined4 *param_1,undefined4 *param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  lVar1 = *param_3;
  if (*(longlong *)(param_1 + 4) != lVar1) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  *(longlong *)(param_1 + 4) = lVar1;
  if (*(longlong *)(param_1 + 6) != param_3[1]) {
    *(undefined8 *)(param_1 + 8) = 0;
  }
  uVar6 = FUN_14477b664();
  uVar6 = FUN_14477b664(uVar6);
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(longlong *)(param_1 + 8) = param_3[2];
  FUN_1405b70a4(param_1 + 10,param_3 + 3);
  *(longlong *)(param_1 + 0xe) = param_3[5];
  param_1[0x28] = 1;
  if (param_1[0x48] != 2) {
    FUN_1446efa72(param_1 + 0x46,0,2,0x10);
    param_1[0x48] = 2;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x46);
  *puVar2 = &PTR_LAB_14b3f01a0;
  LOCK();
  UNLOCK();
  lVar7 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar7 == 0) {
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  puVar2[2] = lVar7;
  *puVar2 = &PTR_FUN_14b3f02f0;
  puVar2[3] = param_1;
  return;
}



// FUNCTION 14186f6d4 FUN_14186f6d4 body=165 status=ok
// SIG undefined FUN_14186f6d4(void)

undefined8 FUN_14186f6d4(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  int local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = (**(code **)(*(longlong *)(param_1 + -0x38) + 0x180))(param_1 + -0x38);
  if (lVar1 == 0) {
    FUN_140056680(&local_28,&DAT_149e01fe8);
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    FUN_1400021e4(&local_18,&local_28);
  }
  puVar2 = local_28;
  if (local_20 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"OpportunisticAudio_%s",puVar2);
  if (local_28 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14186f77a FUN_14186f77a body=255 status=ok
// SIG undefined FUN_14186f77a(void)

undefined8 * FUN_14186f77a(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
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
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0x3ff00000;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0x3ff0000000000000;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 3;
  param_1[0x21] = 0;
  param_1[0x22] = 0x400000000;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_1446efa72(param_1 + 0x23,0,2,0x10);
  *(undefined4 *)(param_1 + 0x24) = 2;
  puVar1 = (undefined8 *)param_1[0x23];
  *puVar1 = &PTR_LAB_14b3f01a0;
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
  puVar1[2] = lVar3;
  *puVar1 = &PTR_FUN_14b3f0130;
  puVar1[3] = param_1;
  return param_1;
}



// FUNCTION 14186f87a FUN_14186f87a body=2445 status=ok
// SIG undefined FUN_14186f87a(void)

void FUN_14186f87a(longlong *param_1)

{
  ushort uVar1;
  undefined8 *_Dst;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  void *_Dst_00;
  longlong lVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong uVar18;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined4 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined2 *local_138;
  undefined1 *local_130;
  undefined1 *local_128;
  undefined1 **local_120;
  undefined1 *local_118;
  code *local_110;
  longlong local_108;
  longlong *local_100;
  ulonglong local_f8;
  undefined1 *local_f0;
  ulonglong local_e8;
  longlong local_e0;
  longlong local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_51;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (((((*(int *)((longlong)param_1 + 0x2c) != 0) &&
        (uVar12 = *(uint *)(param_1 + 5), -1 < (int)uVar12)) && ((int)uVar12 < DAT_14c9647dc)) &&
      ((plVar13 = (longlong *)
                  ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
       plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x2c))))) &&
     ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar13 + 1) & 0x10200000) == 0) {
      lVar6 = *plVar13;
    }
    else {
      lVar6 = 0;
    }
    iVar4 = FUN_14490d72a(lVar6);
    if ((iVar4 != 3) && (plVar13 = *(longlong **)(lVar6 + 0x1f0), plVar13 != (longlong *)0x0)) {
      if (DAT_14cb5e538 == 0) {
        local_120 = &local_d0;
        local_d0 = &LAB_1417c5d06;
        local_110 = FUN_14081d0ea;
        local_118 = &LAB_1417ad04a;
        local_128 = &LAB_1486a7af7;
        local_130 = &LAB_1464e1631;
        local_138 = &DAT_149e063b2;
        local_140 = 0;
        local_148 = 0x1000000c;
        local_150 = 8;
        local_158 = 0x420;
        FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameInstance",&DAT_14cb5e538,&DAT_1486a7af6);
        plVar13 = *(longlong **)(lVar6 + 0x1f0);
        if (plVar13 == (longlong *)0x0) goto LAB_14186f9f6;
      }
      if (((((((DAT_14cb5e538 != 0) && (lVar6 = plVar13[2], lVar6 != 0)) &&
             (*(int *)(DAT_14cb5e538 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
            (((*(longlong *)
                (*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5e538 + 0x38) * 8) ==
               DAT_14cb5e538 + 0x30 &&
              (cVar2 = (**(code **)(*plVar13 + 0x498))(), (byte)(cVar2 - 6U) < 3)) &&
             (((**(code **)(*param_1 + 0x2c0))(param_1,&local_f0), local_f0 != (undefined1 *)0x0 &&
              ((*(int *)((longlong)param_1 + 0x2c) != 0 &&
               (uVar12 = *(uint *)(param_1 + 5), -1 < (int)uVar12)))))))) &&
           ((int)uVar12 < DAT_14c9647dc)) &&
          (((plVar13 = (longlong *)
                       ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
            plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)((longlong)param_1 + 0x2c)))
           && ((*(uint *)(plVar13 + 1) & 0x10200000) == 0)))) &&
         (((*plVar13 != 0 && (lVar6 = FUN_140115352(), lVar6 != 0)) &&
          ((int)param_1[8] != *(int *)((longlong)param_1 + 0x6c))))) {
        uVar12 = (uint)((ulonglong)local_f0 >> 0x10);
        uVar11 = (uint)local_f0 & 0xffff;
        plVar13 = (longlong *)param_1[0xf];
        if ((longlong *)param_1[0xf] == (longlong *)0x0) {
          plVar13 = param_1 + 0xe;
        }
        iVar4 = *(int *)((longlong)plVar13 +
                        (ulonglong)
                        ((int)param_1[0x10] - 1U &
                        (int)((ulonglong)local_f0 >> 0x20) + ((uint)local_f0 << 0x10 | uVar11) +
                        (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4)) * 4);
        if (iVar4 != -1) {
          do {
            if (*(undefined1 **)(param_1[7] + (longlong)iVar4 * 0x20) == local_f0) {
              local_d0 = local_f0;
              local_c8 = 0;
              uStack_c0 = 0;
              cVar2 = FUN_14043d6f8();
              if (cVar2 != '\0') {
                if ((int)param_1[8] == *(int *)((longlong)param_1 + 0x6c)) goto LAB_14186fad6;
                uVar12 = (uint)((ulonglong)local_f0 >> 0x10);
                uVar11 = (uint)local_f0 & 0xffff;
                plVar13 = param_1 + 0xe;
                if ((longlong *)param_1[0xf] != (longlong *)0x0) {
                  plVar13 = (longlong *)param_1[0xf];
                }
                iVar4 = *(int *)((longlong)plVar13 +
                                (ulonglong)
                                ((int)param_1[0x10] - 1U &
                                (int)((ulonglong)local_f0 >> 0x20) +
                                ((uint)local_f0 << 0x10 | uVar11) +
                                (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar11 >> 4)) * 4);
                if (iVar4 == -1) goto LAB_14186fad6;
                goto LAB_14186fcc6;
              }
              break;
            }
            iVar4 = *(int *)((longlong)iVar4 * 0x20 + param_1[7] + 0x18);
          } while (iVar4 != -1);
        }
      }
    }
  }
  goto LAB_14186f9f6;
  while (iVar4 = *(int *)(lVar6 + 0x18), iVar4 != -1) {
LAB_14186fcc6:
    lVar6 = param_1[7] + (longlong)iVar4 * 0x20;
    if (*(undefined1 **)(param_1[7] + (longlong)iVar4 * 0x20) == local_f0) goto LAB_14186fad8;
  }
LAB_14186fad6:
  lVar6 = 0;
LAB_14186fad8:
  lVar6 = *(longlong *)(lVar6 + 8);
  if ((((*(int *)(lVar6 + 0x154) == 0) || (uVar12 = *(uint *)(lVar6 + 0x150), (int)uVar12 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar12 ||
       ((((plVar13 = (longlong *)
                     ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
          plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(lVar6 + 0x154))) ||
         ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)) ||
        (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || (*plVar13 == 0)))))))) ||
     (lVar7 = FUN_140115352(), lVar7 == 0)) goto LAB_14186f9f6;
  local_100 = (longlong *)(lVar6 + 0x28);
  iVar4 = *(int *)(lVar6 + 0x30);
  local_108 = lVar6;
  if (0 < iVar4) {
    lVar6 = *local_100;
    uVar8 = *(undefined8 *)(lVar7 + 0x48);
    uVar18 = 0;
    bVar17 = false;
    do {
      lVar15 = uVar18 * -4;
      while (bVar3 = FUN_1406ee510(uVar8,*(undefined4 *)(lVar6 + uVar18 * 4)), (bVar3 & 0xfd) == 1)
      {
        uVar18 = uVar18 + 1;
        lVar15 = lVar15 + -4;
        if ((longlong)iVar4 <= (longlong)uVar18) {
          lVar6 = local_108;
          if (!bVar17) goto LAB_14186fd01;
          goto LAB_14186fcf3;
        }
      }
      _Dst_00 = (void *)(lVar6 - lVar15);
      local_f8 = ~uVar18;
      do {
        if (iVar4 + -1 != (int)uVar18) {
          iVar10 = (int)local_f8 + iVar4;
          if (0 < iVar10) {
            iVar10 = 1;
          }
          memmove(_Dst_00,(void *)(lVar6 + (longlong)(iVar4 - iVar10) * 4),(longlong)iVar10 << 2);
          iVar4 = *(int *)(local_108 + 0x30);
        }
        iVar4 = iVar4 + -1;
        *(int *)(local_108 + 0x30) = iVar4;
        if ((longlong)iVar4 <= (longlong)uVar18) goto LAB_14186fcf3;
        lVar6 = *local_100;
        _Dst_00 = (void *)(lVar6 - lVar15);
        uVar8 = *(undefined8 *)(lVar7 + 0x48);
        bVar3 = FUN_1406ee510(uVar8,*(undefined4 *)(lVar6 + uVar18 * 4));
      } while ((bVar3 & 0xfd) != 1);
      uVar18 = uVar18 + 1;
      bVar17 = true;
    } while ((longlong)uVar18 < (longlong)iVar4);
LAB_14186fcf3:
    lVar6 = local_108;
    FUN_14479f406(local_100);
    iVar4 = *(int *)(lVar6 + 0x30);
  }
LAB_14186fd01:
  if (iVar4 != 0) goto LAB_14186f9f6;
  uVar1 = *(ushort *)(lVar6 + 0x48);
  uVar18 = 0;
  if ((int)(uint)uVar1 < (int)*(uint *)(lVar6 + 0x40)) {
    uVar12 = uVar1 + 1;
    *(short *)(lVar6 + 0x48) = (short)uVar12;
    uVar14 = (ulonglong)uVar12;
    if (*(uint *)(lVar6 + 0x40) <= (uVar12 & 0xffff)) {
      uVar14 = uVar18;
    }
    bVar3 = *(byte *)(*(longlong *)(lVar6 + 0x38) + (ulonglong)uVar1);
    *(short *)(lVar6 + 0x48) = (short)uVar14;
    if ((int)(uint)bVar3 < *(int *)(lVar6 + 0x148)) {
      lVar7 = lVar6 + 0x60;
      if (*(longlong *)(lVar6 + 0x140) != 0) {
        lVar7 = *(longlong *)(lVar6 + 0x140);
      }
      plVar13 = (longlong *)((ulonglong)bVar3 * 0x20 + lVar7);
      lVar6 = FUN_1449e3f1e();
      if (((lVar6 != 0) && (*(longlong *)(lVar6 + 0x428) != 0)) &&
         ((iVar4 = (int)plVar13[3], *(int *)(*(longlong *)(lVar6 + 0x428) + 0x90) <= iVar4 ||
          ((iVar4 != 0 && ((int)plVar13[1] == 0)))))) {
        _Dst = (undefined8 *)plVar13[2];
        uVar8 = *_Dst;
        if (iVar4 + -1 == 0) {
          iVar4 = 0;
        }
        else {
          memmove(_Dst,_Dst + 1,(longlong)(iVar4 + -1) << 3);
          iVar4 = (int)plVar13[3] + -1;
        }
        *(int *)(plVar13 + 3) = iVar4;
        iVar4 = (int)plVar13[1];
        *(uint *)(plVar13 + 1) = iVar4 + 1U;
        if (*(uint *)((longlong)plVar13 + 0xc) < iVar4 + 1U) {
          FUN_1446f84a2(plVar13,iVar4);
        }
        *(undefined8 *)(*plVar13 + (longlong)iVar4 * 8) = uVar8;
      }
      iVar4 = (int)plVar13[1];
      if (0 < iVar4) {
        uVar12 = rand();
        uVar12 = (uint)((float)iVar4 * ((float)(uVar12 & 0x7fff) / 32767.0));
        if (-1 < (int)uVar12) {
          uVar11 = iVar4 - 1U;
          if (uVar12 < iVar4 - 1U) {
            uVar11 = uVar12;
          }
          if ((int)uVar11 < (int)plVar13[1]) {
            uVar14 = (ulonglong)uVar11;
            uVar18 = *(ulonglong *)(*plVar13 + uVar14 * 8);
            iVar4 = (int)plVar13[3];
            *(uint *)(plVar13 + 3) = iVar4 + 1U;
            if (*(uint *)((longlong)plVar13 + 0x1c) < iVar4 + 1U) {
              FUN_1446f84a2(plVar13 + 2,iVar4);
            }
            *(ulonglong *)(plVar13[2] + (longlong)iVar4 * 8) = uVar18;
            iVar4 = (int)plVar13[1];
            if (~uVar11 + iVar4 != 0) {
              memmove((void *)(*plVar13 + uVar14 * 8),(void *)(*plVar13 + uVar14 * 8 + 8),
                      (longlong)(int)(~uVar11 + iVar4) << 3);
              iVar4 = (int)plVar13[1];
            }
            *(int *)(plVar13 + 1) = iVar4 + -1;
            lVar6 = local_108;
            goto LAB_14186fe70;
          }
        }
      }
      uVar18 = 0;
      lVar6 = local_108;
    }
  }
LAB_14186fe70:
  local_e8 = uVar18;
  uVar8 = FUN_141519560();
  local_e0 = FUN_14477b664(uVar8);
  local_d8 = 0;
  if (((local_e0 != 0 && uVar18 != 0) &&
      (plVar13 = *(longlong **)(local_e0 + 0xb8), plVar13 != (longlong *)0x0)) &&
     (cVar2 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar2 != '\0')) {
    uVar8 = (**(code **)(*plVar13 + 0x110))(plVar13);
    local_d8 = FUN_144aff482(uVar8,&local_e8);
    if (local_d8 != 0) {
      lVar7 = lVar6;
      lVar15 = local_d8;
      if (local_e0 == 0) {
        uVar8 = FUN_141519560();
        local_e0 = FUN_14477b664(uVar8);
        lVar15 = local_d8;
        if (((local_d8 == 0) && (lVar15 = 0, lVar7 = local_108, local_e0 != 0)) && (local_e8 != 0))
        {
          plVar13 = *(longlong **)(local_e0 + 0xb8);
          if ((plVar13 == (longlong *)0x0) ||
             (cVar2 = (**(code **)(*plVar13 + 0x108))(plVar13), cVar2 == '\0')) {
            lVar15 = 0;
            lVar7 = local_108;
            local_d8 = lVar15;
          }
          else {
            uVar8 = (**(code **)(*plVar13 + 0x110))(plVar13);
            lVar15 = FUN_144aff482(uVar8,&local_e8);
            lVar7 = local_108;
            local_d8 = lVar15;
          }
        }
      }
      lVar6 = lVar7;
      if (((((*(int *)(lVar7 + 0x154) != 0) && (uVar12 = *(uint *)(lVar7 + 0x150), -1 < (int)uVar12)
            ) && ((int)uVar12 < DAT_14c9647dc)) &&
          ((plVar13 = (longlong *)
                      ((ulonglong)((uVar12 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8)),
           plVar13 != (longlong *)0x0 && ((int)plVar13[2] == *(int *)(lVar7 + 0x154))))) &&
         ((((*(uint *)(plVar13 + 1) & 0x10200000) == 0 &&
           ((*plVar13 != 0 && (lVar9 = FUN_140115352(), lVar15 != 0)))) && (lVar9 != 0)))) {
        local_d0 = (undefined1 *)((ulonglong)local_d0 & 0xffffffff00000000);
        local_c8 = 0;
        uStack_c0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_9c = 0;
        uStack_98 = 0;
        uStack_94 = 0;
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        local_58 = 0xffffffff;
        local_54 = 0;
        local_52 = 1;
        local_51 = 0;
        local_70 = *(undefined8 *)(lVar7 + 0x10);
        uVar8 = FUN_14477b664(*(undefined8 *)(lVar7 + 0x18));
        local_68 = FUN_14477b664(uVar8);
        plVar13 = local_100;
        local_60 = *(undefined8 *)(lVar7 + 0x20);
        if ((longlong)*(int *)(lVar15 + 0x20) != 0) {
          lVar16 = *(longlong *)(lVar15 + 0x18);
          lVar15 = (longlong)*(int *)(lVar15 + 0x20) * 0x18;
          do {
            uVar5 = FUN_141001a8e(lVar9,lVar16,lVar7 + 0x158,&local_d0);
            iVar4 = *(int *)(lVar6 + 0x30);
            *(uint *)(lVar6 + 0x30) = iVar4 + 1U;
            if (*(uint *)(lVar6 + 0x34) < iVar4 + 1U) {
              FUN_1446f48e2(plVar13,iVar4);
            }
            *(undefined4 *)(*plVar13 + (longlong)iVar4 * 4) = uVar5;
            lVar16 = lVar16 + 0x18;
            lVar15 = lVar15 + -0x18;
            lVar6 = local_108;
          } while (lVar15 != 0);
        }
      }
    }
  }
  if (*(int *)(lVar6 + 0x30) == 0) {
    uVar18 = 0;
  }
  *(ulonglong *)(lVar6 + 0x164) = uVar18;
LAB_14186f9f6:
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141870208 FUN_141870208 body=90 status=ok
// SIG undefined FUN_141870208(void)

void FUN_141870208(longlong param_1,char param_2)

{
  undefined8 *puVar1;
  
  if ((param_2 != '\0') && (*(longlong *)(param_1 + 0x68) == 0)) {
    puVar1 = (undefined8 *)FUN_14001cc68(0x58,0x10);
    puVar1[6] = 0;
    puVar1[7] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    *(undefined8 *)((longlong)puVar1 + 0x34) = 0xffffffff00000080;
    *(undefined8 **)(param_1 + 0x68) = puVar1;
  }
  return;
}



// FUNCTION 141870262 FUN_141870262 body=111 status=ok
// SIG undefined FUN_141870262(void)

void FUN_141870262(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if ((*(longlong *)(param_1 + 0x58) != 0) && (*(longlong *)(param_1 + 0x50) != 0)) {
    FUN_140ccfb62();
    *(undefined8 *)(param_1 + 0x50) = 0;
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  plVar3 = *(longlong **)(param_1 + 0x60);
  if (plVar3 != (longlong *)0x0) {
    *(undefined8 *)(param_1 + 0x60) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x0001418702b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1418702d2 FUN_1418702d2 body=353 status=ok
// SIG undefined FUN_1418702d2(void)

void FUN_1418702d2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141870357;
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
LAB_141870357:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141870434 FUN_141870434 body=29 status=ok
// SIG undefined FUN_141870434(void)

undefined8 FUN_141870434(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141870452 FUN_141870452 body=48 status=ok
// SIG undefined FUN_141870452(void)

void FUN_141870452(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 141870482 FUN_141870482 body=306 status=ok
// SIG undefined FUN_141870482(void)

void FUN_141870482(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_1418704e4;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_1418704e4:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 1418705b4 FUN_1418705b4 body=49 status=ok
// SIG undefined FUN_1418705b4(void)

void FUN_1418705b4(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x20);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 6;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1418705e6 FUN_1418705e6 body=275 status=ok
// SIG undefined FUN_1418705e6(void)

void FUN_1418705e6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1418706fa FUN_1418706fa body=142 status=ok
// SIG undefined FUN_1418706fa(void)

void FUN_1418706fa(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((((longlong)(int)(iVar2 - uVar1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 << 3,8);
      uVar3 = uVar3 >> 3;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,8,8);
    }
  }
  return;
}



// FUNCTION 141870788 FUN_141870788 body=158 status=ok
// SIG undefined FUN_141870788(void)

void FUN_141870788(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x30)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x30,8);
      uVar3 = uVar3 / 0x30;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x30,8);
    }
  }
  return;
}



// FUNCTION 141870826 FUN_141870826 body=653 status=ok
// SIG undefined FUN_141870826(void)

int FUN_141870826(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  longlong lVar15;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        lVar15 = (longlong)iVar14 * 0x30;
        plVar8 = (longlong *)(lVar9 + lVar15);
        if (*(longlong *)(lVar9 + 8 + lVar15) == 0) {
          uVar12 = FUN_145cd7f46();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_145cd7f46();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_14187091e;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_14187091e:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_141870986;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_141870986:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x28 + lVar15);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 141870ab4 FUN_141870ab4 body=29 status=ok
// SIG undefined FUN_141870ab4(void)

undefined8 FUN_141870ab4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141870ad2 FUN_141870ad2 body=812 status=ok
// SIG undefined FUN_141870ad2(void)

void FUN_141870ad2(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  undefined1 auStack_98 [36];
  int local_74;
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar15 = *(uint *)(param_1 + 9);
  if (uVar15 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar15,4);
    if (0 < (int)uVar15) {
      uVar5 = 0;
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar15 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar16 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar16 = local_68 >> 0x20;
    }
    iVar18 = (int)local_68;
    uVar15 = (uint)local_58;
    iVar8 = local_58._4_4_;
    iVar17 = local_50;
    plVar9 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_70 = plVar9;
        lVar14 = *param_1;
        lVar11 = *(longlong *)(lVar14 + 8 + (longlong)iVar8 * 0x30);
        local_74 = iVar17;
        if (lVar11 == 0) {
          lVar11 = FUN_145cd7f46();
        }
        puVar12 = (undefined8 *)(lVar14 + (longlong)iVar8 * 0x30);
        uVar3 = *puVar12;
        uVar6 = FUN_14477b664(lVar11);
        uVar5 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
        uVar7 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar7 = uVar7 >> 0x10 ^ uVar7;
        uVar5 = (uint)((ulonglong)uVar3 >> 0x10);
        uVar10 = (uint)uVar3 & 0xffff;
        uVar5 = uVar7 >> 0xd ^
                (((uint)uVar3 << 0x10 | uVar10) + (int)((ulonglong)uVar3 >> 0x20) +
                 (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar10 >> 4)) - uVar7;
        uVar10 = uVar5 << 8 ^ (-0x61c88647 - uVar7) - uVar5;
        uVar13 = uVar10 >> 0xd ^ (uVar7 - uVar5) - uVar10;
        uVar5 = uVar13 >> 0xc ^ (uVar5 - uVar10) - uVar13;
        uVar7 = uVar5 << 0x10 ^ (uVar10 - uVar13) - uVar5;
        uVar10 = uVar7 >> 5 ^ (uVar13 - uVar5) - uVar7;
        uVar13 = uVar10 >> 3 ^ (uVar5 - uVar7) - uVar10;
        uVar5 = uVar13 << 10 ^ (uVar7 - uVar10) - uVar13;
        uVar6 = (longlong)(int)(uVar5 >> 0xf ^ uVar10 - (uVar13 + uVar5)) &
                (longlong)(int)param_1[9] - 1U;
        iVar17 = (int)uVar6;
        *(int *)((longlong)puVar12 + 0x2c) = iVar17;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(puVar12 + 5) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar6) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar17 & (longlong)(int)param_1[9] - 1U) * 4) = iVar8
        ;
        uVar15 = uVar15 & ~(uint)uVar16;
        plVar9 = (longlong *)local_70[2];
        if ((longlong *)local_70[2] == (longlong *)0x0) {
          plVar9 = local_70;
        }
        iVar2 = (int)local_70[3];
        lVar14 = (longlong)iVar18;
        uVar5 = *(uint *)((longlong)plVar9 + lVar14 * 4) & uVar15;
        iVar17 = local_74;
        if (uVar5 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          iVar8 = iVar8 >> 5;
          iVar4 = iVar8;
          if (iVar8 < iVar18) {
            iVar4 = iVar18;
          }
          if (iVar8 <= iVar18) break;
          lVar11 = 0;
          while( true ) {
            iVar17 = iVar17 + 0x20;
            uVar5 = *(uint *)((longlong)plVar9 + lVar11 * 4 + lVar14 * 4 + 4);
            if (uVar5 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar4 - lVar14 == lVar11) goto LAB_141870dc1;
          }
          iVar18 = iVar18 + (int)lVar11 + 1;
          uVar15 = 0xffffffff;
        }
        uVar16 = (ulonglong)(-uVar5 & uVar5);
        uVar6 = uVar16 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar6 != 0) {
          for (; uVar6 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar8 = (iVar17 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        plVar9 = local_70;
      } while (iVar8 < iVar2);
    }
  }
LAB_141870dc1:
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141870e00 FUN_141870e00 body=29 status=ok
// SIG undefined FUN_141870e00(void)

undefined8 FUN_141870e00(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 141870e1e FUN_141870e1e body=269 status=ok
// SIG undefined FUN_141870e1e(void)

void FUN_141870e1e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 141870f2c FUN_141870f2c body=325 status=ok
// SIG undefined FUN_141870f2c(void)

longlong FUN_141870f2c(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar6 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
LAB_141871050:
      lVar4 = FUN_14001cc68(200,0);
      return lVar4;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar4 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3 | *(uint *)(lVar4 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar4 + uVar7 * 0x18 + 0x10) = 0;
      lVar4 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar6 & 0x3ffffff);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_141871050;
    }
    uVar2 = *param_1;
    uVar6 = (uint)uVar2;
  } while( true );
}



// FUNCTION 141871072 FUN_141871072 body=581 status=ok
// SIG undefined FUN_141871072(void)

ulonglong FUN_141871072(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  uVar3 = FUN_14493c560();
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)((uVar3 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_2;
  do {
    while( true ) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 0x40);
        if ((uVar2 & 0x3ffffff) == 0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          puVar7 = (ulonglong *)
                   ((ulonglong)(((uint)uVar2 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)uVar2 & 0x3ffffff) >> 0xe) * 8)
                   );
        }
        uVar5 = *puVar7;
      } while (*(ulonglong *)(param_1 + 0x40) != uVar2);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar2 == *(ulonglong *)(param_1 + 0x40)) {
        *(ulonglong *)(param_1 + 0x40) = uVar4 | (uint)uVar5 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *puVar7;
    if (uVar5 == uVar1) {
      *puVar7 = uVar4 | uVar3;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14274643a();
  }
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 == uVar4) {
    *(ulonglong *)(param_1 + 0x40) = uVar5 | uVar3;
    uVar4 = uVar2;
  }
  UNLOCK();
  return uVar4;
}



// FUNCTION 1418712b8 FUN_1418712b8 body=325 status=ok
// SIG undefined FUN_1418712b8(void)

longlong FUN_1418712b8(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar2 = *param_1;
  uVar6 = (uint)uVar2;
  do {
    if ((uVar2 & 0x3ffffff) == 0) {
LAB_1418713dc:
      lVar4 = FUN_14001cc68(0x130,0);
      return lVar4;
    }
    uVar3 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
    if (uVar3 >> 0x1a < uVar2 >> 0x1a) {
      FUN_14274643a();
    }
    uVar5 = (ulonglong)((uVar6 & 0x3ffffff) >> 0xe);
    uVar7 = (ulonglong)((uint)uVar2 & 0x3fff);
    lVar4 = *(longlong *)(&DAT_14c833b00 + uVar5 * 8);
    LOCK();
    uVar1 = *param_1;
    if (uVar2 == uVar1) {
      *param_1 = uVar3 | *(uint *)(lVar4 + 0x10 + uVar7 * 0x18);
    }
    UNLOCK();
    if (uVar2 == uVar1) {
      *(undefined4 *)(lVar4 + uVar7 * 0x18 + 0x10) = 0;
      lVar4 = *(longlong *)
               (*(longlong *)(&DAT_14c833b00 + uVar5 * 8) + 8 + (ulonglong)(uVar6 & 0x3fff) * 0x18);
      FUN_1447d080c(uVar6 & 0x3ffffff);
      if (lVar4 != 0) {
        return lVar4;
      }
      goto LAB_1418713dc;
    }
    uVar2 = *param_1;
    uVar6 = (uint)uVar2;
  } while( true );
}



// FUNCTION 1418713fe FUN_1418713fe body=581 status=ok
// SIG undefined FUN_1418713fe(void)

ulonglong FUN_1418713fe(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  
  uVar3 = FUN_14493c560();
  if (uVar3 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = (ulonglong)((uVar3 & 0x3fff) * 0x18) +
            *(longlong *)(&DAT_14c833b00 + (ulonglong)(uVar3 >> 0xe) * 8);
  }
  *(undefined8 *)(lVar6 + 8) = param_2;
  do {
    while( true ) {
      do {
        uVar2 = *(ulonglong *)(param_1 + 0x40);
        if ((uVar2 & 0x3ffffff) == 0) {
          puVar7 = (ulonglong *)0x0;
        }
        else {
          puVar7 = (ulonglong *)
                   ((ulonglong)(((uint)uVar2 & 0x3fff) * 0x18) +
                   *(longlong *)(&DAT_14c833b00 + (ulonglong)(((uint)uVar2 & 0x3ffffff) >> 0xe) * 8)
                   );
        }
        uVar5 = *puVar7;
      } while (*(ulonglong *)(param_1 + 0x40) != uVar2);
      if ((uVar5 & 0x3ffffff) == 0) break;
      uVar4 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
      if (uVar4 >> 0x1a < uVar2 >> 0x1a) {
        FUN_14274643a();
      }
      LOCK();
      if (uVar2 == *(ulonglong *)(param_1 + 0x40)) {
        *(ulonglong *)(param_1 + 0x40) = uVar4 | (uint)uVar5 & 0x3ffffff;
      }
      UNLOCK();
    }
    uVar4 = (uVar5 & 0xfffffffffc000000) + 0x4000000;
    if (uVar4 >> 0x1a < uVar5 >> 0x1a) {
      FUN_14274643a();
    }
    LOCK();
    uVar1 = *puVar7;
    if (uVar5 == uVar1) {
      *puVar7 = uVar4 | uVar3;
    }
    UNLOCK();
  } while (uVar5 != uVar1);
  uVar5 = (uVar2 & 0xfffffffffc000000) + 0x4000000;
  if (uVar5 >> 0x1a < uVar2 >> 0x1a) {
    FUN_14274643a();
  }
  LOCK();
  uVar4 = *(ulonglong *)(param_1 + 0x40);
  if (uVar2 == uVar4) {
    *(ulonglong *)(param_1 + 0x40) = uVar5 | uVar3;
    uVar4 = uVar2;
  }
  UNLOCK();
  return uVar4;
}



// FUNCTION 141871644 FUN_141871644 body=118 status=ok
// SIG undefined FUN_141871644(void)

void FUN_141871644(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f06a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1418716ba FUN_1418716ba body=166 status=ok
// SIG undefined FUN_1418716ba(void)

undefined1 *
FUN_1418716ba(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14018b740();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_14018b740();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if (plVar1 != plVar3) {
        *(undefined8 *)(param_2 + 0x30) = 0;
        *(undefined8 *)(param_2 + 0x38) = 0x100000000;
        if (plVar3 == (longlong *)0x0) {
          return param_2;
        }
        *(undefined4 *)(param_2 + 0x38) = 1;
        *(undefined4 *)(param_2 + 0x28) = 0;
        *param_2 = 1;
        uVar2 = (**(code **)(*plVar3 + 8))(plVar3);
        *(undefined8 *)(param_2 + 8) = uVar2;
        return param_2;
      }
    }
  }
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
  return param_2;
}



// FUNCTION 141871760 FUN_141871760 body=659 status=ok
// SIG undefined FUN_141871760(void)

longlong FUN_141871760(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  wchar_t *local_90;
  undefined4 local_88;
  code *local_80;
  undefined1 *local_78;
  undefined2 **local_70;
  undefined4 local_64;
  undefined8 local_60;
  undefined2 *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FUN_1447262c2(param_4);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14018b740();
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = FUN_14018b740();
      plVar3 = (longlong *)FUN_144718840(plVar1,uVar2);
      if ((plVar1 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x48 + (ulonglong)*(byte *)(param_1 + 0x30) * 8))(plVar3);
        if (lVar4 != 0) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            local_4c = 0xffffffff;
            local_48 = *(undefined8 *)(param_1 + 8);
            FUN_140c386b6(lVar4 + 0x10,param_2,&local_4c,param_4);
            goto LAB_14187182d;
          }
          local_64 = 0xffffffff;
          local_60 = *(undefined8 *)(param_1 + 8);
          pwVar5 = (wchar_t *)FUN_140007850(param_1 + 0x10);
          if (pwVar5 == (wchar_t *)0x0) {
LAB_1418719ec:
            pwVar5 = (wchar_t *)0x0;
          }
          else {
            if (DAT_14c948fa0 == 0) {
              local_58 = &DAT_1427db2a2;
              lVar6 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
              DAT_14c948fa0 = lVar6;
              FUN_1446f470e(&local_4c,L"ScriptStruct",1);
              local_78 = &LAB_1468915ce;
              local_80 = FUN_1427dc742;
              local_90 = L"Engine";
              local_88 = 199;
              local_98 = 0x10;
              local_a0 = CONCAT44(local_a0._4_4_,0x10000020);
              local_a8 = (wchar_t *)CONCAT44(local_a8._4_4_,8);
              local_70 = &local_58;
              FUN_14574b4b2(lVar6);
              DAT_14c948fa0 = lVar6;
              uVar2 = FUN_1446f8646();
              lVar6 = DAT_14c948fa0;
              uVar7 = FUN_1449e2fb2();
              local_a8 = L"ScriptStruct";
              FUN_14574b446(uVar7,lVar6,uVar2,L"/Script/CoreUObject");
            }
            if ((*(int *)(*(longlong *)(pwVar5 + 8) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(pwVar5 + 8) + 0x30) +
                 (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30))
            goto LAB_1418719ec;
          }
          lVar6 = FUN_1409448ee(lVar4 + 0x10);
          if (lVar6 != 0) {
            local_4c = 0xffffffff;
            local_48 = *(undefined8 *)(lVar4 + 0x28);
            local_a8 = pwVar5;
            local_a0 = param_4;
            FUN_140c38a48(lVar6,param_2,&local_4c,&local_64);
            goto LAB_14187182d;
          }
        }
      }
    }
  }
  *(undefined2 *)(param_2 + 0x18) = 0;
  *(undefined1 *)(param_2 + 0x20) = 0;
LAB_14187182d:
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1418719f4 FUN_1418719f4 body=283 status=ok
// SIG undefined FUN_1418719f4(void)

undefined8 FUN_1418719f4(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = (longlong *)FUN_1447262c2(param_4);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = FUN_1401b0f18();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_1401b0f18();
      plVar4 = (longlong *)FUN_144718840(plVar2,uVar3);
      if ((plVar2 != plVar4) && (plVar4 != (longlong *)0x0)) {
        lVar5 = (**(code **)(*plVar4 + 0x28))(plVar4);
        if ((longlong)*(int *)(param_1 + 0x10) != 0) {
          plVar2 = *(longlong **)(param_1 + 8);
          plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x10) * 0xb;
          do {
            lVar1 = *plVar2;
            if (lVar1 != 0) {
              if (*(int *)(lVar5 + 0x80) != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0x78) + lVar6) == lVar1)
                  goto LAB_141871ae9;
                  lVar6 = lVar6 + 8;
                } while ((longlong)*(int *)(lVar5 + 0x80) << 3 != lVar6);
              }
              if (*(int *)(lVar5 + 0x90) != 0) {
                lVar6 = 0;
                do {
                  if (*(longlong *)(*(longlong *)(lVar5 + 0x88) + lVar6) == lVar1)
                  goto LAB_141871ae9;
                  lVar6 = lVar6 + 8;
                } while ((longlong)*(int *)(lVar5 + 0x90) << 3 != lVar6);
              }
            }
            plVar2 = plVar2 + 0xb;
          } while (plVar2 != plVar4);
        }
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x18);
LAB_141871af0:
  FUN_1448729ea(plVar2,param_2,param_4);
  return param_2;
LAB_141871ae9:
  plVar2 = plVar2 + 1;
  goto LAB_141871af0;
}



// FUNCTION 141871b10 FUN_141871b10 body=176 status=ok
// SIG undefined FUN_141871b10(void)

longlong * FUN_141871b10(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined4 local_38;
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = FUN_14008ea28();
  local_30 = *param_3;
  local_28 = *(undefined4 *)(param_3 + 1);
  local_40 = *param_2;
  local_38 = *(undefined4 *)(param_2 + 1);
  plVar2 = (longlong *)FUN_14050b224(param_1,&local_40,&local_30,uVar1);
  if (plVar2 != (longlong *)0x0) {
    lVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14008ea28();
    if ((lVar4 != 0) && (*(int *)(lVar4 + 0x38) <= *(int *)(lVar3 + 0x38))) {
      plVar5 = (longlong *)0x0;
      if (*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
          lVar4 + 0x30) {
        plVar5 = plVar2;
      }
      goto LAB_141871b9e;
    }
  }
  plVar5 = (longlong *)0x0;
LAB_141871b9e:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141871bc2 FUN_141871bc2 body=2536 status=ok
// SIG undefined FUN_141871bc2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141871bc2(longlong param_1,float param_2,longlong param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  double *pdVar15;
  longlong lVar16;
  ulonglong uVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  double dVar24;
  undefined1 auStack_2b8 [32];
  undefined8 *local_298;
  undefined8 *local_290;
  undefined8 *local_288;
  undefined8 *local_280;
  undefined8 *local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined4 local_1c4;
  undefined4 local_198;
  undefined4 local_168;
  float local_164;
  undefined1 local_158 [8];
  int iStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined1 local_118 [24];
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined2 local_ef;
  undefined1 local_ed;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined2 local_e9;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  longlong local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  if ((*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) != 0) &&
     (lVar12 = FUN_1447210f0(), lVar12 != 0)) {
    FUN_1406a84ce(param_3,&local_130,local_118);
    bVar9 = *(byte *)(param_1 + 0x20);
    if ((bVar9 & 1) == 0) {
      lVar13 = *(longlong *)(param_3 + 0x28);
      pdVar15 = (double *)(lVar13 + 200);
    }
    else {
      pdVar15 = (double *)(param_3 + 0x30);
      lVar13 = *(longlong *)(param_3 + 0x28);
    }
    local_148 = *pdVar15;
    dStack_140 = pdVar15[1];
    local_138 = (double)*(float *)(param_1 + 0x1c) + pdVar15[2];
    lVar13 = *(longlong *)(lVar13 + 0xe0);
    local_dc = 0;
    local_f8 = 0;
    local_d8 = 0x101;
    local_b0 = 0;
    local_a8 = 0x800000000;
    local_90 = 0;
    local_88 = 0x400000000;
    local_f0 = 1;
    local_e4 = 0;
    local_100 = DAT_14cb74580;
    local_ef = 1;
    local_ed = 0;
    local_e0 = 0;
    local_ec = 0;
    local_ea = 0;
    if (lVar13 != 0) {
      local_88 = 0x400000001;
      local_a0 = *(undefined4 *)(lVar13 + 0xc);
      local_f8 = *(undefined8 *)(lVar13 + 0x18);
    }
    local_e9 = 0x101;
    if ((bVar9 & 2) != 0) {
      local_268 = 0;
      uStack_260 = 0;
      FUN_14490f2e4(lVar13,&local_268,1,0);
      FUN_140c5bf3a(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xe0),&local_268,1);
      lVar13 = (longlong)(int)uStack_260;
      if (lVar13 != 0) {
        lVar16 = 0;
        do {
          FUN_144a85a22(&local_100);
          lVar16 = lVar16 + 8;
        } while (lVar13 * 8 != lVar16);
      }
      if (local_268 != 0) {
        FUN_1400020a8(local_268);
      }
      bVar9 = *(byte *)(param_1 + 0x20);
    }
    if (((((bVar9 & 4) != 0) &&
         (lVar13 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) + 0x1c8),
         lVar13 != 0)) && (lVar13 = *(longlong *)(lVar13 + 0x120), lVar13 != 0)) &&
       (*(longlong *)(lVar13 + 0xa8) != 0)) {
      FUN_144a85a22(&local_100);
      bVar9 = *(byte *)(param_1 + 0x20);
    }
    if ((bVar9 & 8) == 0) {
      memset(&local_268,0,0x100);
      local_198 = 0xffffffff;
      local_268 = CONCAT44(0x3f800000,(undefined4)local_268);
      local_1c4 = 0xffffffff;
      if (*(float *)(param_1 + 0x18) <= 0.0) {
        local_288 = (undefined8 *)&DAT_14cad0f10;
        local_290 = &local_100;
        local_298 = (undefined8 *)CONCAT44(local_298._4_4_,4);
        cVar10 = FUN_1400b50cc(lVar12,&local_268,&local_148,&local_130);
      }
      else {
        local_288 = (undefined8 *)local_158;
        local_158._4_4_ = *(float *)(param_1 + 0x18);
        local_158._0_4_ = 2;
        local_278 = (undefined8 *)&DAT_14cad0f10;
        local_280 = &local_100;
        local_298 = &DAT_14c8463d0;
        local_290 = (undefined8 *)CONCAT44(local_290._4_4_,4);
        cVar10 = FUN_14021655c(lVar12,&local_268,&local_148,&local_130);
      }
      if (cVar10 != '\0') {
        *(double *)(param_3 + 0x70) = (local_258 - local_130) + *(double *)(param_3 + 0x70);
        *(double *)(param_3 + 0x78) = (dStack_250 - local_128) + *(double *)(param_3 + 0x78);
        *(double *)(param_3 + 0x80) = (local_248 - local_120) + *(double *)(param_3 + 0x80);
        *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | 4;
      }
    }
    else {
      local_258 = _DAT_14cad0ee0;
      dStack_250 = dRam000000014cad0ee8;
      local_268 = _DAT_14cad0ed0;
      uStack_260 = _DAT_14cad0ed8;
      lVar13 = 0;
      do {
        bVar1 = *(char *)((longlong)&local_268 + lVar13) == '\x02';
        bVar2 = *(char *)((longlong)&local_268 + lVar13 + 1) == '\x02';
        bVar3 = *(char *)((longlong)&local_268 + lVar13 + 2) == '\x02';
        bVar4 = *(char *)((longlong)&local_268 + lVar13 + 3) == '\x02';
        bVar5 = *(char *)((longlong)&local_268 + lVar13 + 4) == '\x02';
        bVar6 = *(char *)((longlong)&local_268 + lVar13 + 5) == '\x02';
        bVar7 = *(char *)((longlong)&local_268 + lVar13 + 6) == '\x02';
        bVar8 = *(char *)((longlong)&local_268 + lVar13 + 7) == '\x02';
        if ((bool)(~bVar1 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13) = 2;
        }
        if ((bool)(~bVar2 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 1) = 2;
        }
        if ((bool)(~bVar3 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 2) = 2;
        }
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 3) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 4) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 5) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 6) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)((longlong)&local_268 + lVar13 + 7) = 2;
        }
        if ((bool)(~bVar1 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13) = 2;
        }
        if ((bool)(~bVar2 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 1) = 2;
        }
        if ((bool)(~bVar3 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 2) = 2;
        }
        if ((bool)(~bVar4 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 3) = 2;
        }
        if ((bool)(~bVar5 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 4) = 2;
        }
        if ((bool)(~bVar6 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 5) = 2;
        }
        if ((bool)(~bVar7 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 6) = 2;
        }
        if ((bool)(~bVar8 & 1)) {
          *(undefined1 *)((longlong)&uStack_260 + lVar13 + 7) = 2;
        }
        lVar13 = lVar13 + 0x10;
      } while (lVar13 != 0x20);
      iVar11 = *(int *)(param_1 + 0x30);
      if ((longlong)iVar11 != 0) {
        lVar13 = *(longlong *)(param_1 + 0x28);
        lVar16 = 0;
        do {
          uVar17 = (ulonglong)*(byte *)(lVar13 + lVar16);
          if ((uVar17 < 0x20) && (*(char *)((longlong)&local_268 + uVar17) != '\x01')) {
            *(undefined1 *)((longlong)&local_268 + uVar17) = 1;
          }
          lVar16 = lVar16 + 1;
        } while (iVar11 != lVar16);
      }
      _local_158 = (undefined1  [16])0x0;
      if (*(float *)(param_1 + 0x18) <= 0.0) {
        local_288 = &local_268;
        local_290 = &local_100;
        local_298 = (undefined8 *)CONCAT44(local_298._4_4_,4);
        FUN_1401e24ee(lVar12,local_158,&local_148,&local_130);
      }
      else {
        local_288 = (undefined8 *)&local_168;
        local_168 = 2;
        local_278 = &local_268;
        local_280 = &local_100;
        local_298 = &DAT_14c8463d0;
        local_290 = (undefined8 *)CONCAT44(local_290._4_4_,4);
        local_164 = *(float *)(param_1 + 0x18);
        FUN_14038e76e(lVar12,local_158,&local_148,&local_130);
      }
      if (0 < (longlong)iStack_150) {
        lVar13 = (longlong)iStack_150 * 0x100;
        bVar9 = *(byte *)((longlong)local_158 + -0x53 + lVar13);
        lVar12 = (longlong)local_158 + 0xd8;
        do {
          if ((*(byte *)(lVar12 + -0x2b) & 1) != 0) {
            dVar19 = *(double *)(lVar12 + -200);
            dVar20 = *(double *)(lVar12 + -0xc0);
            dVar18 = *(double *)(lVar12 + -0xb8);
            cVar10 = '\x02';
            goto LAB_141872337;
          }
          plVar14 = (longlong *)FUN_14479d2ce(lVar12);
          if ((plVar14 != (longlong *)0x0) &&
             (iVar11 = (**(code **)(*plVar14 + 0x578))(plVar14,4), iVar11 == 2)) {
            dVar19 = *(double *)(lVar12 + -200);
            dVar20 = *(double *)(lVar12 + -0xc0);
            dVar18 = *(double *)(lVar12 + -0xb8);
            cVar10 = '\x02';
            if ((bVar9 & 1) != 0) goto LAB_141872337;
            if (*(char *)(param_1 + 0x40) == '\0') {
              fVar22 = *(float *)(param_1 + 0x44) + param_2;
              *(float *)(param_1 + 0x44) = fVar22;
              if (*(float *)(param_1 + 0x38) <= fVar22) {
                *(undefined4 *)(param_1 + 0x44) = 0;
                *(undefined1 *)(param_1 + 0x40) = 1;
                goto LAB_141872457;
              }
              fVar22 = *(float *)(param_1 + 0x48);
            }
            else {
LAB_141872457:
              fVar22 = 1.0;
              fVar23 = 1.0 - *(float *)(param_1 + 0x48);
              if (1e-08 <= fVar23 * fVar23) {
                param_2 = param_2 * *(float *)(param_1 + 0x3c);
                if (param_2 <= fVar23) {
                  fVar23 = param_2;
                }
                if (fVar23 <= -param_2) {
                  fVar23 = -param_2;
                }
                fVar22 = *(float *)(param_1 + 0x48) + fVar23;
              }
              *(float *)(param_1 + 0x48) = fVar22;
            }
            dVar24 = (double)fVar22;
            dVar18 = ((dVar18 - local_120) * dVar24 + local_120) - local_120;
            dVar20 = ((dVar20 - local_128) * dVar24 + local_128) - local_128;
            dVar19 = ((dVar19 - local_130) * dVar24 + local_130) - local_130;
            fVar22 = (float)SQRT((local_138 - local_120) * (local_138 - local_120) +
                                 (local_148 - local_130) * (local_148 - local_130) +
                                 (dStack_140 - local_128) * (dStack_140 - local_128));
            *(uint *)(param_1 + 0x4c) =
                 -(uint)(0.0 < fVar22) &
                 (uint)((float)SQRT(dVar18 * dVar18 + dVar19 * dVar19 + dVar20 * dVar20) / fVar22);
            cVar10 = '\x01';
            goto LAB_1418723c0;
          }
          lVar12 = lVar12 + 0x100;
          lVar13 = lVar13 + -0x100;
        } while (lVar13 != 0);
      }
      dVar19 = (double)*(float *)(param_1 + 0x4c);
      dVar18 = (local_138 - local_120) * dVar19 + local_120;
      dVar20 = (dStack_140 - local_128) * dVar19 + local_128;
      dVar19 = (local_148 - local_130) * dVar19 + local_130;
      cVar10 = '\0';
LAB_141872337:
      dVar18 = dVar18 - local_120;
      dVar20 = dVar20 - local_128;
      dVar19 = dVar19 - local_130;
      fVar22 = *(float *)(param_1 + 0x4c);
      if (ABS(fVar22) <= 1e-08) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined8 *)(param_1 + 0x44) = 0;
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
      else {
        fVar21 = 0.0;
        fVar23 = 0.0 - fVar22;
        if (1e-08 <= fVar23 * fVar23) {
          param_2 = param_2 * *(float *)(param_1 + 0x3c);
          if (param_2 <= fVar23) {
            fVar23 = param_2;
          }
          if (fVar23 <= -param_2) {
            fVar23 = -param_2;
          }
          fVar21 = fVar22 + fVar23;
        }
        *(float *)(param_1 + 0x4c) = fVar21;
      }
LAB_1418723c0:
      *(double *)(param_3 + 0x70) = dVar19 + *(double *)(param_3 + 0x70);
      *(double *)(param_3 + 0x78) = dVar20 + *(double *)(param_3 + 0x78);
      *(double *)(param_3 + 0x80) = dVar18 + *(double *)(param_3 + 0x80);
      if (cVar10 != '\0') {
        *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | 4;
      }
      if (local_158 != (undefined1  [8])0x0) {
        FUN_1400020a8();
      }
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (local_b0 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_2b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418725ac FUN_1418725ac body=1072 status=ok
// SIG undefined FUN_1418725ac(void)

void FUN_1418725ac(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 *local_240;
  undefined4 *local_238;
  undefined8 *local_230;
  undefined1 *local_228;
  undefined4 local_218;
  float local_214;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  double local_1e8;
  undefined4 local_164;
  undefined4 local_138;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  double local_e0;
  undefined1 local_d8 [24];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined2 local_af;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined2 local_a9;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined4 local_9c;
  undefined2 local_98;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_268;
  if ((*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) != 0) &&
     (lVar3 = FUN_1447210f0(), lVar3 != 0)) {
    FUN_1406a84ce(param_3,&local_f0,local_d8);
    if (*(char *)(param_1 + 0x18) == '\x01') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_ec,local_f0);
      *(ulonglong *)(param_1 + 0x28) = CONCAT44(uStack_e4,uStack_e8);
      *(double *)(param_1 + 0x30) = local_e0;
    }
    local_f8 = *(undefined8 *)(param_1 + 0x30);
    local_108 = *(undefined4 *)(param_1 + 0x20);
    uStack_104 = *(undefined4 *)(param_1 + 0x24);
    uStack_100 = *(undefined4 *)(param_1 + 0x28);
    uStack_fc = *(undefined4 *)(param_1 + 0x2c);
    lVar4 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0);
    local_9c = 0;
    local_b8 = 0;
    local_98 = 0x101;
    local_70 = 0;
    local_68 = 0x800000000;
    local_50 = 0;
    local_48 = 0x400000000;
    local_b0 = 1;
    local_a4 = 0;
    local_c0 = DAT_14cb74610;
    local_af = 1;
    local_ad = 0;
    local_a0 = 0;
    local_ac = 0;
    local_aa = 0;
    if (lVar4 != 0) {
      local_60 = *(undefined4 *)(lVar4 + 0xc);
      local_48 = 0x400000001;
      local_b8 = *(undefined8 *)(lVar4 + 0x18);
    }
    local_a9 = 0x101;
    bVar1 = *(byte *)(param_1 + 0x3c);
    if ((bVar1 & 1) != 0) {
      local_208 = 0;
      uStack_200 = 0;
      FUN_14490f2e4(lVar4,&local_208,0x400000001,0);
      FUN_140c5bf3a(*(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xe0),&local_208,1);
      lVar4 = (longlong)(int)uStack_200;
      if (lVar4 != 0) {
        lVar5 = 0;
        do {
          FUN_144a85a22(&local_c0);
          lVar5 = lVar5 + 8;
        } while (lVar4 * 8 != lVar5);
      }
      if (local_208 != 0) {
        FUN_1400020a8(local_208);
      }
      bVar1 = *(byte *)(param_1 + 0x3c);
    }
    if (((((bVar1 & 2) != 0) &&
         (lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_3 + 0x28) + 0xe0) + 0x1c8),
         lVar4 != 0)) && (lVar4 = *(longlong *)(lVar4 + 0x120), lVar4 != 0)) &&
       (*(longlong *)(lVar4 + 0xa8) != 0)) {
      FUN_144a85a22(&local_c0);
    }
    memset(&local_208,0,0x100);
    local_138 = 0xffffffff;
    local_208 = CONCAT44(0x3f800000,(undefined4)local_208);
    local_164 = 0xffffffff;
    if (*(float *)(param_1 + 0x38) <= 0.0) {
      local_238 = (undefined4 *)&DAT_14cad0f10;
      local_240 = &local_c0;
      local_248 = (undefined8 *)CONCAT44(local_248._4_4_,4);
      cVar2 = FUN_1400b50cc(lVar3,&local_208,&local_108,&local_f0);
    }
    else {
      local_238 = &local_218;
      local_218 = 2;
      local_228 = &DAT_14cad0f10;
      local_230 = &local_c0;
      local_248 = &DAT_14c8463d0;
      local_240 = (undefined8 *)CONCAT44(local_240._4_4_,4);
      local_214 = *(float *)(param_1 + 0x38);
      cVar2 = FUN_14021655c(lVar3,&local_208,&local_108,&local_f0);
    }
    if (cVar2 != '\0') {
      *(double *)(param_3 + 0x70) =
           (local_1f8 - (double)CONCAT44(uStack_ec,local_f0)) + *(double *)(param_3 + 0x70);
      *(double *)(param_3 + 0x78) =
           (local_1f0 - (double)CONCAT44(uStack_e4,uStack_e8)) + *(double *)(param_3 + 0x78);
      *(double *)(param_3 + 0x80) = (local_1e8 - local_e0) + *(double *)(param_3 + 0x80);
      *(byte *)(param_3 + 0x14c) = *(byte *)(param_3 + 0x14c) | 4;
    }
    FUN_1406a84ce(param_3,&local_f0,local_d8);
    *(double *)(param_1 + 0x30) = local_e0;
    *(undefined4 *)(param_1 + 0x20) = local_f0;
    *(undefined4 *)(param_1 + 0x24) = uStack_ec;
    *(undefined4 *)(param_1 + 0x28) = uStack_e8;
    *(undefined4 *)(param_1 + 0x2c) = uStack_e4;
    if (local_50 != 0) {
      FUN_1400020a8();
    }
    if (local_70 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_268) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418729de FUN_1418729de body=164 status=ok
// SIG undefined FUN_1418729de(void)

void FUN_1418729de(longlong param_1,undefined8 param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 auStack_58 [32];
  undefined1 local_38 [24];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  bVar1 = *(byte *)(param_1 + 0x19);
  if ((bVar1 & 2) != 0) {
    if ((bVar1 & 1) != 0) {
      *(byte *)(param_1 + 0x19) = bVar1 & 0xfd;
      lVar2 = *(longlong *)(param_3 + 0x28);
      uVar3 = *(undefined4 *)(lVar2 + 0xb4);
      uVar4 = *(undefined4 *)(lVar2 + 0xb8);
      uVar5 = *(undefined4 *)(lVar2 + 0xbc);
      *(undefined4 *)(param_3 + 0x48) = *(undefined4 *)(lVar2 + 0xb0);
      *(undefined4 *)(param_3 + 0x4c) = uVar3;
      *(undefined4 *)(param_3 + 0x50) = uVar4;
      *(undefined4 *)(param_3 + 0x54) = uVar5;
      *(undefined8 *)(param_3 + 0x58) = *(undefined8 *)(lVar2 + 0xc0);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    *(byte *)(param_1 + 0x19) = bVar1 & 0xfc;
  }
  FUN_1405e7386(param_1,param_3);
  FUN_1405e77ae(param_1,local_38,param_3);
  FUN_1405e84a8(param_1,param_3,local_38);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141872a86 FUN_141872a86 body=597 status=ok
// SIG undefined FUN_141872a86(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141872a86(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  double dVar2;
  undefined1 auVar3 [16];
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar26;
  double dVar27;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [16];
  double local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar13 = *(longlong *)(param_1 + 0x1c);
  if (lVar13 == 0) {
    lVar13 = *(longlong *)(*(longlong *)(param_3 + 0x28) + 0xf8);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xf0);
  if ((plVar1 != (longlong *)0x0) && (lVar13 != 0)) {
    cVar7 = (**(code **)(*plVar1 + 0x4c8))(plVar1,lVar13);
    if (cVar7 != '\0') {
      plVar1 = *(longlong **)(*(longlong *)(param_3 + 0x28) + 0xf0);
      (**(code **)(*plVar1 + 0x4a8))(plVar1,&local_b8,lVar13,2);
      bVar8 = *(byte *)(param_1 + 0x18);
      if ((bVar8 & 1) != 0) {
        *(double *)(param_3 + 0xc0) = local_98 + *(double *)(param_3 + 0xc0);
        *(double *)(param_3 + 200) = local_90 + *(double *)(param_3 + 200);
        *(double *)(param_3 + 0xd0) = local_88 + *(double *)(param_3 + 0xd0);
        bVar8 = *(byte *)(param_1 + 0x18);
      }
      if ((bVar8 & 2) != 0) {
        puVar12 = &local_58;
        local_58 = local_b8;
        uStack_50 = uStack_b0;
        local_48 = local_a8;
        uStack_40 = uStack_a0;
        uVar9 = FUN_1448052ee(puVar12,local_d8);
        dVar6 = (double)DAT_1499387d0;
        dVar2 = DAT_1499387d0._8_8_;
        auVar14 = divpd(local_d8,_DAT_1499387d0);
        auVar20._8_8_ = 0;
        auVar20._0_8_ = local_c8;
        auVar21 = divpd(auVar20,_DAT_1499387d0);
        auVar14 = roundpd(auVar14,auVar14,3);
        auVar21 = roundpd(auVar21,auVar21,3);
        dVar4 = local_d8._0_8_ - auVar14._0_8_ * dVar6;
        dVar5 = local_d8._8_8_ - auVar14._8_8_ * dVar2;
        dVar26 = local_c8 - auVar21._0_8_ * dVar6;
        dVar27 = 0.0 - auVar21._8_8_ * dVar2;
        auVar24._0_8_ = dVar4 + dVar6;
        auVar24._8_8_ = dVar5 + dVar2;
        auVar23._0_8_ = dVar6 + dVar26;
        auVar23._8_8_ = dVar2 + dVar27;
        auVar15._8_8_ = -(ulonglong)(0.0 <= dVar5);
        auVar15._0_8_ = -(ulonglong)(0.0 <= dVar4);
        auVar25._8_4_ = SUB84(dVar5,0);
        auVar25._0_8_ = dVar4;
        auVar25._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
        auVar21 = blendvpd(auVar24,auVar25,auVar15);
        auVar16._8_8_ = -(ulonglong)(0.0 <= dVar27);
        auVar16._0_8_ = -(ulonglong)(0.0 <= dVar26);
        auVar14._8_8_ = dVar27;
        auVar14._0_8_ = dVar26;
        auVar14 = blendvpd(auVar23,auVar14,auVar16);
        dVar6 = auVar21._8_8_ + -360.0;
        auVar17._8_8_ = -(ulonglong)(180.0 < auVar21._8_8_);
        auVar17._0_8_ = -(ulonglong)(180.0 < auVar21._0_8_);
        auVar3._8_4_ = SUB84(dVar6,0);
        auVar3._0_8_ = auVar21._0_8_ + -360.0;
        auVar3._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
        auVar25 = blendvpd(auVar21,auVar3,auVar17);
        auVar18._8_8_ = -(ulonglong)(180.0 < auVar14._8_8_);
        auVar18._0_8_ = -(ulonglong)(180.0 < auVar14._0_8_);
        auVar21._8_8_ = auVar14._8_8_ + -360.0;
        auVar21._0_8_ = auVar14._0_8_ + -360.0;
        auVar14 = blendvpd(auVar14,auVar21,auVar18);
        auVar22._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._8_8_));
        auVar22._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar25._0_8_));
        iVar10 = movmskpd(uVar9,auVar22);
        auVar19._8_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar14._8_8_));
        auVar19._0_8_ = -(ulonglong)(9.999999747378752e-05 < ABS(auVar14._0_8_));
        uVar11 = movmskpd((int)puVar12,auVar19);
        if ((uVar11 & 0x3fffffff) != 0 || iVar10 != 0) {
          *(double *)(param_3 + 0xd8) = local_d8._0_8_ + *(double *)(param_3 + 0xd8);
          *(double *)(param_3 + 0xe0) = local_d8._8_8_ + *(double *)(param_3 + 0xe0);
          *(double *)(param_3 + 0xe8) = local_c8 + *(double *)(param_3 + 0xe8);
        }
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141872cdc FUN_141872cdc body=311 status=ok
// SIG undefined FUN_141872cdc(void)

void FUN_141872cdc(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = FUN_1447e736e(param_1 + 0xa0);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x20;
  }
  else {
    lVar1 = FUN_1447e736e(param_1 + 0xa0);
    lVar1 = lVar1 + 0x30;
  }
  lVar2 = FUN_1447e736e(param_1 + 0x150);
  if (lVar2 == 0) {
    param_1 = param_1 + 0xd0;
  }
  else {
    param_1 = FUN_1447e736e(param_1 + 0x150);
    param_1 = param_1 + 0x30;
  }
  if ((lVar1 != 0) && (param_1 != 0)) {
    FUN_144719204((int)*(undefined8 *)(param_3 + 0x48),0x4076800000000000);
    fVar3 = (float)FUN_1448c9f94(lVar1);
    fVar4 = (float)FUN_1448c9f94(param_1);
    *(float *)(param_3 + 0x60) = fVar4 * fVar3 + *(float *)(param_3 + 0x60);
  }
  return;
}



// FUNCTION 141872e14 FUN_141872e14 body=714 status=ok
// SIG undefined FUN_141872e14(void)

void FUN_141872e14(longlong param_1,float param_2,longlong param_3)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined2 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  undefined1 *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  lVar5 = *(longlong *)(param_3 + 0x28);
  lVar4 = *(longlong *)(lVar5 + 0xe0);
  if (lVar4 == 0) goto LAB_141872f1e;
  if (DAT_14cb5b388 == 0) {
    local_50 = &local_38;
    local_38 = FUN_141864c34;
    local_40 = FUN_14081d0ea;
    local_48 = &LAB_146431698;
    local_58 = &LAB_1486775cb;
    local_60 = &LAB_1464cee35;
    local_68 = &DAT_149e063b2;
    local_70 = 0;
    local_78 = 0x10000005;
    local_80 = 0x10;
    local_88 = 0x3a20;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxCharacter",&DAT_14cb5b388,FUN_1464cee0e);
    lVar4 = *(longlong *)(lVar5 + 0xe0);
    if (lVar4 == 0) goto LAB_141872f1e;
  }
  if ((((DAT_14cb5b388 == 0) || (lVar5 = *(longlong *)(lVar4 + 0x10), lVar5 == 0)) ||
      (*(int *)(lVar5 + 0x38) < *(int *)(DAT_14cb5b388 + 0x38))) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb5b388 + 0x38) * 8) !=
      DAT_14cb5b388 + 0x30)) goto LAB_141872f1e;
  if (*(longlong *)(lVar4 + 0x11e8) == 0) {
LAB_141872ecc:
    *(undefined1 *)(param_1 + 0xe0) = 0;
LAB_141872ecf:
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (0.0001 < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0xdc) = *(float *)(param_1 + 0xdc) - param_2 / *(float *)(param_1 + 0x24)
      ;
    }
  }
  else {
    uVar2 = *(uint *)(*(longlong *)(lVar4 + 0x11e8) + 0x36a8);
    pcVar1 = (char *)(param_1 + 0xe0);
    if ((uVar2 & 4) == 0) {
      if ((((uVar2 & 1) == 0) || (*pcVar1 == '\0')) ||
         (lVar5 = *(longlong *)(lVar4 + 0x430), lVar5 == 0)) goto LAB_141872ecc;
      cVar3 = (**(code **)(*(longlong *)(lVar5 + 0x178) + 0xd8))(lVar5 + 0x178);
      *pcVar1 = cVar3;
      if (cVar3 != '\0') goto LAB_141872f9d;
      goto LAB_141872ecf;
    }
    *pcVar1 = '\x01';
LAB_141872f9d:
    fVar6 = *(float *)(param_1 + 0xd8) + param_2;
    *(float *)(param_1 + 0xd8) = fVar6;
    if ((*(float *)(param_1 + 0x1c) <= fVar6) && (0.0001 < *(float *)(param_1 + 0x20))) {
      *(float *)(param_1 + 0xdc) = param_2 / *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0xdc)
      ;
    }
  }
  fVar6 = *(float *)(param_1 + 0xdc);
  if (1.0 <= fVar6) {
    fVar6 = 1.0;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0xdc) = fVar6;
LAB_141872f1e:
  lVar4 = FUN_1447e736e(param_1 + 0xb0);
  lVar5 = param_1;
  if (lVar4 != 0) {
    lVar5 = FUN_1447e736e(param_1 + 0xb0);
  }
  fVar6 = (float)FUN_1448c9f94(lVar5 + 0x30,*(undefined4 *)(param_1 + 0xdc),0);
  *(float *)(param_3 + 0x60) =
       ((*(float *)(param_1 + 0x18) + -1.0) * fVar6 + 1.0) * *(float *)(param_3 + 0x60);
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418730e0 FUN_1418730e0 body=672 status=ok
// SIG undefined FUN_1418730e0(void)

void FUN_1418730e0(longlong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  longlong lVar10;
  double dVar11;
  double *pdVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined1 auStack_c8 [40];
  undefined1 local_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  ulonglong local_50;
  longlong *plVar15;
  
  bVar7 = DAT_14c950c29;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == 0 || DAT_14c950c29 != 1) {
    *(longlong *)(param_1 + 0xe0) = param_2;
    *(undefined1 *)(param_1 + 0x118) = 1;
    if (param_2 != 0) goto LAB_141873146;
LAB_141873354:
    if ((bVar7 & 1) != 0) {
      if (*(longlong *)(param_1 + 0xe8) == 0) {
        *(undefined8 *)(param_1 + 0xe0) = 0;
        goto LAB_141873281;
      }
      FUN_1456cec3c();
    }
    plVar15 = *(longlong **)(param_1 + 0xe8);
    *(longlong **)(param_1 + 0xe0) = plVar15;
    if (plVar15 == (longlong *)0x0) goto LAB_141873281;
  }
  else {
    FUN_1456cec3c(param_2);
    *(longlong *)(param_1 + 0xe0) = param_2;
    *(undefined1 *)(param_1 + 0x118) = 1;
LAB_141873146:
    uVar9 = FUN_140086810();
    lVar10 = FUN_144718840(param_2,uVar9);
    if (lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_50 ^ (ulonglong)auStack_c8);
    }
    plVar15 = *(longlong **)(param_1 + 0xe0);
    bVar7 = DAT_14c950c29;
    if (plVar15 == (longlong *)0x0) goto LAB_141873354;
  }
  (**(code **)(*plVar15 + 0x588))(plVar15,(undefined4 *)(param_1 + 0x50),local_a0);
  uVar13 = SUB84(plVar15,0);
  dVar11 = *(double *)(param_1 + 0xe0);
  lVar10 = *(longlong *)((longlong)dVar11 + 0x1c8);
  if (lVar10 == 0) {
    local_58 = DAT_14c846508;
    local_68 = (undefined4)DAT_14c8464f8;
    uStack_64 = DAT_14c8464f8._4_4_;
    uStack_60 = (undefined4)DAT_14c846500;
    uStack_5c = DAT_14c846500._4_4_;
  }
  else {
    dVar3 = *(double *)(lVar10 + 0x240);
    dVar4 = *(double *)(lVar10 + 0x248);
    dVar5 = *(double *)(lVar10 + 0x250);
    dVar6 = *(double *)(lVar10 + 600);
    pdVar12 = *(double **)(lVar10 + 0x228);
    local_88 = dVar3;
    uStack_80 = dVar4;
    local_78 = dVar5;
    uStack_70 = dVar6;
    if (pdVar12 == (double *)0x0) {
      uVar13 = 0x40;
      pdVar12 = (double *)FUN_14001cc68(0x40,0x10);
      dVar11 = DAT_14c8463d8;
      *pdVar12 = DAT_14c8463d0;
      pdVar12[1] = dVar11;
      dVar11 = DAT_14c8463e8;
      pdVar12[2] = DAT_14c8463e0;
      pdVar12[3] = dVar11;
      dVar11 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
      pdVar12[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
      pdVar12[5] = dVar11;
      dVar11 = DAT_14c846508;
      pdVar12[6] = DAT_14c846508;
      *(double **)(lVar10 + 0x228) = pdVar12;
    }
    auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar12[1]);
    auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar12);
    auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar12[1]) >> 0x20);
    iVar8 = movmskpd(SUB84(dVar11,0),auVar1);
    auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar12[3]);
    auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar12[2]);
    auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar12[3]) >> 0x20);
    uVar14 = movmskpd(uVar13,auVar2);
    if ((uVar14 & 0x3fffffff) != 0 || iVar8 != 0) {
      *(undefined4 *)(pdVar12 + 2) = (undefined4)local_78;
      *(undefined4 *)((longlong)pdVar12 + 0x14) = local_78._4_4_;
      *(undefined4 *)(pdVar12 + 3) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)pdVar12 + 0x1c) = uStack_70._4_4_;
      *(undefined4 *)pdVar12 = (undefined4)local_88;
      *(undefined4 *)((longlong)pdVar12 + 4) = local_88._4_4_;
      *(undefined4 *)(pdVar12 + 1) = (undefined4)uStack_80;
      *(undefined4 *)((longlong)pdVar12 + 0xc) = uStack_80._4_4_;
      FUN_1448052ee(&local_88,&local_68);
      pdVar12[6] = local_58;
      pdVar12[4] = (double)CONCAT44(uStack_64,local_68);
      pdVar12[5] = (double)CONCAT44(uStack_5c,uStack_60);
    }
    local_58 = pdVar12[6];
    local_68 = *(undefined4 *)(pdVar12 + 4);
    uStack_64 = *(undefined4 *)((longlong)pdVar12 + 0x24);
    uStack_60 = *(undefined4 *)(pdVar12 + 5);
    uStack_5c = *(undefined4 *)((longlong)pdVar12 + 0x2c);
  }
  *(double *)(param_1 + 0xc0) = local_58;
  *(ulonglong *)(param_1 + 0xb0) = CONCAT44(uStack_64,local_68);
  *(ulonglong *)(param_1 + 0xb8) = CONCAT44(uStack_5c,uStack_60);
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0x80) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 200) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined8 *)(param_1 + 0xd8) = *(undefined8 *)(param_1 + 0x60);
LAB_141873281:
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1418733ae FUN_1418733ae body=130 status=ok
// SIG undefined FUN_1418733ae(void)

void FUN_1418733ae(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *(undefined4 *)(param_1 + 0xa74) = 0;
  *(undefined1 *)(param_1 + 0xa78) = 0;
  plVar3 = *(longlong **)(param_1 + 0xa80);
  if (plVar3 != (longlong *)0x0) {
    *(char *)(param_1 + 0xa90) = (char)plVar3[2];
    (**(code **)(*plVar3 + 0x20))();
    *(undefined8 *)(param_1 + 0xa80) = 0;
    plVar3 = *(longlong **)(param_1 + 0xa88);
    if (plVar3 != (longlong *)0x0) {
      *(undefined8 *)(param_1 + 0xa88) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x00014187342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14187343c FUN_14187343c body=778 status=ok
// SIG undefined FUN_14187343c(void)

void FUN_14187343c(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  
  *(int *)(param_2 + 0x40) = *(int *)(param_2 + 0x40) + 1;
  iVar3 = (int)param_1[0x54];
  if (iVar3 == 0) {
    uVar20 = 1;
    uVar19 = 0;
    iVar6 = 0;
    iVar16 = 0;
  }
  else {
    puVar7 = (uint *)param_1[0x53];
    if ((uint *)param_1[0x53] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x51);
    }
    uVar21 = *puVar7;
    if (uVar21 == 0) {
      iVar6 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar6 = iVar3 + -1;
      }
      uVar19 = 0;
      uVar20 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar20 = uVar19;
      }
      iVar16 = 0;
      do {
        if (uVar20 == uVar19) goto LAB_14187367e;
        iVar16 = iVar16 + 0x20;
        uVar21 = puVar7[uVar19 + 1];
        uVar19 = uVar19 + 1;
      } while (uVar21 == 0);
    }
    else {
      uVar19 = 0;
      iVar16 = 0;
    }
    uVar20 = (ulonglong)(-uVar21 & uVar21);
    uVar1 = uVar20 * 2 + 1;
    lVar17 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    iVar6 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar6) {
      iVar6 = iVar3;
    }
  }
  if (iVar6 != iVar3) {
    uVar21 = 0xffffffff;
    do {
      lVar17 = *(longlong *)(param_1[0x4f] + 0x10 + (longlong)iVar6 * 0x20);
      if ((lVar17 != 0) && (lVar17 != param_2)) {
        pbVar5 = *(byte **)(lVar17 + 0x48);
        puVar12 = &DAT_14c9a1308;
        if (pbVar5 != (byte *)0x0) {
          plVar14 = &DAT_14c9a1288;
          if ((*pbVar5 & 2) != 0) {
            plVar14 = (longlong *)(*(longlong *)(pbVar5 + 8) + 0x18);
          }
          puVar12 = &DAT_14c9a1308;
          if ((int)plVar14[2] != *(int *)((longlong)plVar14 + 0x3c)) {
            plVar11 = plVar14 + 8;
            if ((longlong *)plVar14[9] != (longlong *)0x0) {
              plVar11 = (longlong *)plVar14[9];
            }
            iVar6 = *(int *)((longlong)plVar11 +
                            (ulonglong)((int)plVar14[10] - 1U & *(uint *)(param_1 + 0x5a)) * 4);
            puVar12 = &DAT_14c9a1308;
            if (iVar6 != -1) {
              do {
                lVar18 = *plVar14 + (longlong)iVar6 * 0x40;
                if (*(uint *)(*plVar14 + (longlong)iVar6 * 0x40) == *(uint *)(param_1 + 0x5a)) {
                  puVar12 = &DAT_14c9a1308;
                  if (lVar18 == 0) goto LAB_1418735bb;
                  puVar15 = (undefined8 *)(lVar18 + 0x28);
                  puVar12 = &DAT_14c9a1308;
                  if ((puVar15 == (undefined8 *)0x0) ||
                     (((byte *)*puVar15 != (byte *)0x0 &&
                      (puVar12 = puVar15, (*(byte *)*puVar15 & 0x40) == 0)))) goto LAB_1418735bb;
                  break;
                }
                iVar6 = *(int *)(lVar18 + 0x38);
              } while (iVar6 != -1);
              puVar12 = &DAT_14c9a1308;
            }
          }
        }
LAB_1418735bb:
        if (((byte *)*puVar12 != (byte *)0x0) &&
           (bVar2 = *(byte *)*puVar12, (bVar2 & 0x68) == 0 && (bVar2 & 3) != 0)) {
          uVar8 = FUN_140625082(puVar12,&DAT_14c9a12e0);
          lVar18 = FUN_144837648(param_1,uVar8,1);
          if (lVar18 == param_2) {
            (**(code **)(*param_1 + 0x420))(param_1,lVar17);
          }
        }
      }
      uVar21 = uVar21 & ~(uint)uVar20;
      puVar7 = (uint *)param_1[0x53];
      if ((uint *)param_1[0x53] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x51);
      }
      iVar4 = (int)param_1[0x54];
      iVar6 = (int)uVar19;
      lVar17 = (longlong)iVar6;
      uVar13 = puVar7[lVar17] & uVar21;
      if (uVar13 == 0) {
        iVar9 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar9 = iVar4 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar16 = iVar16 + 0x20;
        iVar10 = iVar9;
        if (iVar9 < iVar6) {
          iVar10 = iVar6;
        }
        if (iVar6 < iVar9) {
          lVar18 = 0;
          do {
            uVar13 = puVar7[lVar17 + lVar18 + 1];
            if (uVar13 != 0) {
              uVar19 = (ulonglong)(iVar6 + (int)lVar18 + 1);
              uVar21 = 0xffffffff;
              goto LAB_14187364f;
            }
            iVar16 = iVar16 + 0x20;
            lVar18 = lVar18 + 1;
          } while (iVar10 - lVar17 != lVar18);
          uVar21 = 0xffffffff;
          iVar6 = iVar10;
        }
        uVar19 = (ulonglong)(iVar6 + 1);
        iVar6 = iVar4;
      }
      else {
LAB_14187364f:
        uVar20 = (ulonglong)(-uVar13 & uVar13);
        uVar1 = uVar20 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar6 = (iVar16 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar4 <= iVar6) {
          iVar6 = iVar4;
        }
      }
    } while (iVar6 != iVar3);
  }
LAB_14187367e:
  if (*(char *)((longlong)param_1 + 0xc9) != '\x01') {
    return;
  }
  FUN_140ed1266(param_1,param_2);
  return;
}



// FUNCTION 141873746 FUN_141873746 body=231 status=ok
// SIG undefined FUN_141873746(void)

longlong FUN_141873746(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *plStack_60;
  longlong local_58 [3];
  longlong local_40;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58[0] = 0;
  local_58[1] = 0;
  cVar4 = (**(code **)(*param_1 + 0x418))();
  if (cVar4 != '\0') {
    local_68 = 0;
    plStack_60 = (longlong *)0x0;
    cVar4 = FUN_1446e9750(param_1,&local_68,local_58,0);
    lVar5 = 0;
    if (cVar4 != '\0') {
      FUN_1411ef135(&local_40,&local_68,param_1,0);
      lVar5 = 0;
      if (local_38 != '\0') {
        lVar5 = local_40;
      }
    }
    plVar3 = plStack_60;
    if (plStack_60 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_60 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_60)(plStack_60);
        LOCK();
        piVar2 = (int *)((longlong)plVar3 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar3 + 0x10))(plVar3);
        }
      }
    }
    if (lVar5 != 0) goto LAB_1418737df;
  }
  lVar5 = FUN_141263a76();
LAB_1418737df:
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187382e FUN_14187382e body=90 status=ok
// SIG undefined FUN_14187382e(void)

void FUN_14187382e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  uStack_10 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_48 = 0;
  local_38 = param_2;
  local_20 = param_3;
  FUN_141263782(0,&local_38,&local_20);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14187388a FUN_14187388a body=22 status=ok
// SIG undefined FUN_14187388a(void)

undefined8 FUN_14187388a(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb758b8;
  if (DAT_14cb758b8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb758b8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb758b8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb758b8[0x3a] <= *(int *)((longlong)DAT_14cb758b8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb758b8 + 0x300))(DAT_14cb758b8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1418738a0 FUN_1418738a0 body=70 status=ok
// SIG undefined FUN_1418738a0(void)

void FUN_1418738a0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined1 local_14 [4];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  FUN_140beced4(param_1,param_2,local_14,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18);
}



// FUNCTION 1418738ee FUN_1418738ee body=67 status=ok
// SIG undefined FUN_1418738ee(void)

void FUN_1418738ee(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3f1f44);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e8688);
  FUN_1402d084a(param_1,param_2);
  return;
}



// FUNCTION 141873932 FUN_141873932 body=408 status=ok
// SIG undefined FUN_141873932(void)

longlong * FUN_141873932(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [40];
  undefined1 local_80 [24];
  longlong local_68;
  longlong *local_38;
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb75ed8 != 0) goto LAB_14187395d;
  uVar4 = FUN_14129fedc();
  FUN_14042b5a6(local_80,uVar4);
  FUN_1413e5462(&local_30,local_80);
  plVar1 = local_28;
  plVar5 = DAT_14cb75ee0;
  DAT_14cb75ed8 = local_30;
  if (local_28 == (longlong *)0x0) {
    if (DAT_14cb75ee0 != (longlong *)0x0) {
      DAT_14cb75ee0 = (longlong *)0x0;
LAB_141873a4d:
      LOCK();
      plVar1 = plVar5 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
joined_r0x000141873a78:
        if (iVar3 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
  }
  else {
    LOCK();
    *(int *)(local_28 + 1) = (int)local_28[1] + 1;
    plVar5 = DAT_14cb75ee0;
    UNLOCK();
    if (local_28 == DAT_14cb75ee0) {
      LOCK();
      plVar5 = local_28 + 1;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)*plVar5 == 0) {
        (**(code **)*local_28)(local_28);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2;
        UNLOCK();
        plVar5 = plVar1;
        goto joined_r0x000141873a78;
      }
    }
    else {
      DAT_14cb75ee0 = local_28;
      if (plVar5 != (longlong *)0x0) goto LAB_141873a4d;
    }
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar5 = local_28 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar2 = (int *)((longlong)local_28 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if (local_38 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)local_38 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  if (local_68 != 0) {
    FUN_1400020a8();
  }
LAB_14187395d:
  *param_2 = DAT_14cb75ed8;
  plVar5 = DAT_14cb75ee0;
  param_2[1] = (longlong)DAT_14cb75ee0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar5 + 1;
    *(int *)plVar5 = (int)*plVar5 + 1;
    UNLOCK();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141873acc FUN_141873acc body=353 status=ok
// SIG undefined FUN_141873acc(void)

void FUN_141873acc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141873b53;
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
LAB_141873b53:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141873c2e FUN_141873c2e body=353 status=ok
// SIG undefined FUN_141873c2e(void)

void FUN_141873c2e(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141873cb3;
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
LAB_141873cb3:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 141873d90 FUN_141873d90 body=587 status=ok
// SIG undefined FUN_141873d90(void)

void FUN_141873d90(longlong *param_1)

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
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
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
            if (iVar2 - lVar11 == lVar10) goto LAB_141873f96;
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
LAB_141873f96:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141873fdc FUN_141873fdc body=353 status=ok
// SIG undefined FUN_141873fdc(void)

void FUN_141873fdc(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_141874063;
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
LAB_141874063:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14187413e FUN_14187413e body=272 status=ok
// SIG undefined FUN_14187413e(void)

void FUN_14187413e(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar3 = (longlong)(int)uVar2;
    }
    else {
      lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = lVar3 * 0x30;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x30)) {
      uVar5 = uVar4 / 0x30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14187424e FUN_14187424e body=29 status=ok
// SIG undefined FUN_14187424e(void)

undefined8 FUN_14187424e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14187426c FUN_14187426c body=269 status=ok
// SIG undefined FUN_14187426c(void)

void FUN_14187426c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      uVar4 = (ulonglong)(int)uVar2;
    }
    else {
      uVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = uVar4 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar3 < 0x7ff1) {
          uVar3 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 & 0xfffffffffffffff]]
          ;
        }
        else {
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar4 & (uVar3 + uVar4) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
    uVar4 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar4 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,param_2,uVar4,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14187437a FUN_14187437a body=122 status=ok
// SIG undefined FUN_14187437a(void)

void FUN_14187437a(longlong *param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  void *_Dst;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar3 = *param_1;
  plVar4 = *(longlong **)(lVar3 + 0x20 + (longlong)(int)param_2 * 0x28);
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
  iVar5 = (int)param_1[1];
  if (~param_2 + iVar5 != 0) {
    _Dst = (void *)(lVar3 + (longlong)(int)param_2 * 0x28);
    memmove(_Dst,(void *)((longlong)_Dst + 0x28),(longlong)(int)(~param_2 + iVar5) * 0x28);
    iVar5 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar5 + -1;
  return;
}



// FUNCTION 1418743f4 FUN_1418743f4 body=158 status=ok
// SIG undefined FUN_1418743f4(void)

void FUN_1418743f4(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x28)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x28,8);
      uVar3 = uVar3 / 0x28;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x28,8);
    }
  }
  return;
}



// FUNCTION 141874492 FUN_141874492 body=370 status=ok
// SIG undefined FUN_141874492(void)

void FUN_141874492(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x28;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14187451b;
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
LAB_14187451b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x28)) {
    uVar7 = uVar5 / 0x28 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x28,8);
  return;
}



// FUNCTION 141874604 FUN_141874604 body=284 status=ok
// SIG undefined FUN_141874604(void)

undefined8 FUN_141874604(longlong param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14187471a;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14187471a;
    }
    FUN_140192332(param_1 + 0x18,&local_30,0);
  }
  else {
LAB_14187471a:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1418746c7;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2);
      uVar6 = 1;
      goto LAB_1418746c7;
    }
  }
  uVar6 = 0;
LAB_1418746c7:
  if ((local_30 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141874722 FUN_141874722 body=30 status=ok
// SIG undefined FUN_141874722(void)

void FUN_141874722(longlong param_1,int param_2)

{
  if (*(int *)(&DAT_00002bb0 + param_1) == param_2) {
    return;
  }
  *(int *)(&DAT_00002bb0 + param_1) = param_2;
  FUN_144a62f0c(param_1,*(undefined8 *)(param_1 + 0x38),10);
  return;
}



// FUNCTION 141874740 FUN_141874740 body=106 status=ok
// SIG undefined FUN_141874740(void)

float FUN_141874740(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  char cVar2;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  cVar2 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xe0))(plVar1);
  if (((param_2 != 0) && ((*(byte *)(param_2 + 0xa0) & 0x40) != 0)) &&
     ((cVar2 != '\0' || (cVar2 = (**(code **)(*plVar1 + 0xd8))(plVar1), cVar2 != '\0')))) {
    param_3 = param_3 * *(float *)(param_1 + 0x1ce0);
  }
  return param_3;
}



// FUNCTION 1418747aa FUN_1418747aa body=901 status=ok
// SIG undefined FUN_1418747aa(void)

void FUN_1418747aa(longlong *param_1,float param_2)

{
  uint *puVar1;
  code *pcVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 ***pppuVar7;
  float fVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  undefined4 unaff_XMM7_Db;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  double local_a8;
  undefined4 local_90;
  undefined8 **local_88;
  double local_80;
  undefined8 local_78;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  cVar4 = (**(code **)(*param_1 + 0xeb8))();
  if (cVar4 == '\0') goto LAB_1418747f6;
  cVar4 = FUN_1401787de(param_1);
  if (cVar4 == '\0') goto LAB_1418747f6;
  *(undefined1 *)(param_1 + 0x81f) = 1;
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] == '\x01') {
      plVar6 = param_1 + 0x642;
      goto LAB_14187485e;
    }
    lVar5 = 0;
LAB_141874890:
    plVar6 = (longlong *)0x0;
    if ((char)param_1[0x696] != '\0') {
      plVar6 = param_1 + 0x642;
    }
  }
  else {
    plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
LAB_14187485e:
    lVar5 = FUN_140153468(plVar6);
    if (param_1[0x62e] == 0) goto LAB_141874890;
    plVar6 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  if ((lVar5 == 0) || (plVar6 == (longlong *)0x0)) goto LAB_1418747f6;
  if ((longlong *)param_1[0x39d] != (longlong *)0x0) {
    cVar4 = (**(code **)(*(longlong *)param_1[0x39d] + 0x700))();
    if (cVar4 != '\0') {
      puVar1 = (uint *)(plVar6 + 0x29);
      FUN_14880efe6(param_1,&local_b8,puVar1);
      plVar6[0x2b] = (longlong)local_a8;
      plVar6[0x29] = CONCAT44(uStack_b4,local_b8);
      plVar6[0x2a] = CONCAT44(uStack_ac,uStack_b0);
      if ((*(float *)(plVar6 + 0x49) == 0.0) && (!NAN(*(float *)(plVar6 + 0x49)))) {
        FUN_14880f230(param_1,&local_b8);
        local_d8 = (double)CONCAT44(uStack_b4,local_b8);
        uStack_d0 = (double)CONCAT44(uStack_ac,uStack_b0);
        dVar13 = local_d8 * local_d8 + uStack_d0 * uStack_d0;
        if ((dVar13 != 1.0) || (NAN(dVar13))) {
          if (9.99999993922529e-09 <= dVar13) {
            uStack_d0 = uStack_d0 * (1.0 / SQRT(dVar13));
            local_d8 = local_d8 * (1.0 / SQRT(dVar13));
            goto LAB_141874a08;
          }
          local_c8 = DAT_14c8464f0;
          uVar9 = (uint)DAT_14c8464e0;
          uVar10 = DAT_14c8464e0._4_4_;
          uVar11 = (undefined4)DAT_14c8464e8;
          uVar12 = DAT_14c8464e8._4_4_;
LAB_1418749e8:
          local_d8 = (double)CONCAT44(uVar10,uVar9);
          uStack_d0 = (double)CONCAT44(uVar12,uVar11);
        }
        else {
          if ((local_a8 == 0.0) && (!NAN(local_a8))) {
            local_c8 = local_a8;
            uVar9 = local_b8;
            uVar10 = uStack_b4;
            uVar11 = uStack_b0;
            uVar12 = uStack_ac;
            goto LAB_1418749e8;
          }
LAB_141874a08:
          local_c8 = 0.0;
        }
        FUN_144a79a9c(&local_d8,&local_b8);
        dVar13 = (double)CONCAT44(uStack_ac,uStack_b0);
        FUN_144a79a9c(puVar1,&local_b8);
        dVar3 = (double)CONCAT44(uStack_ac,uStack_b0);
        local_b8 = local_b8 & 0xffffff00;
        local_90 = 0;
        FUN_1456bb102(&local_b8,param_1[0x15]);
        FUN_1448729ea(lVar5 + 0x7a0,&local_88,&local_b8);
        fVar8 = (float)FUN_144a7ecd0(&local_88);
        fVar8 = (float)FUN_1407b5b68((float)dVar3,CONCAT44(unaff_XMM7_Db,(float)dVar13),
                                     param_2 * fVar8);
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
        if (pcVar2 != (code *)0x0) {
          pppuVar7 = &local_88;
          if (0x18 < local_70) {
            pppuVar7 = (undefined8 ***)local_88;
          }
          (*pcVar2)(pppuVar7);
        }
        if (0x18 < local_70) {
          FUN_1400020a8(local_88);
        }
        FUN_144a5ac3a(&local_b8);
        local_80 = (double)fVar8;
        local_88 = (undefined8 ***)0x0;
        local_78 = 0;
        FUN_144a76660(&local_88,&local_b8);
        plVar6[0x2b] = (longlong)local_a8;
        *puVar1 = local_b8;
        *(undefined4 *)((longlong)plVar6 + 0x14c) = uStack_b4;
        *(undefined4 *)(plVar6 + 0x2a) = uStack_b0;
        *(undefined4 *)((longlong)plVar6 + 0x154) = uStack_ac;
      }
    }
  }
  fVar8 = (float)FUN_143cf5b0a(plVar6,(int)plVar6[10]);
  dVar13 = (double)fVar8;
  plVar6[0x37] = (longlong)(dVar13 * (double)plVar6[0x29]);
  plVar6[0x38] = (longlong)((double)plVar6[0x2a] * dVar13);
  plVar6[0x39] = (longlong)((double)plVar6[0x2b] * dVar13);
LAB_1418747f6:
  if ((local_60 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141874b30 FUN_141874b30 body=229 status=ok
// SIG undefined FUN_141874b30(void)

void FUN_141874b30(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x600))();
  if (cVar1 == '\0') {
    return;
  }
  FUN_1402e1ec6(param_1 + 0x75c);
  FUN_1402e1608(param_1 + 0x75c,param_2);
  if (param_1[0x62e] == 0) {
    if ((char)param_1[0x696] != '\x01') goto LAB_141874b7d;
    plVar3 = param_1 + 0x642;
  }
  else {
    plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
  }
  lVar2 = FUN_140153468(plVar3);
  if (((lVar2 != 0) && ((*(byte *)(plVar3 + 0x53) & 2) == 0)) && (param_1[0x22] != 0)) {
    if (param_1[0x62e] == 0) {
      if ((char)param_1[0x696] != '\x01') goto LAB_141874b7d;
      plVar3 = param_1 + 0x642;
    }
    else {
      plVar3 = (longlong *)(param_1[0x62e] + 0xd8);
    }
    FUN_1404f4fe8(plVar3,param_2);
  }
LAB_141874b7d:
  if ((param_1[0x2a3] != 0) && ((char)param_1[0x359] != '\x01')) {
    return;
  }
  FUN_1406ae93c(param_1,param_2);
  return;
}



// FUNCTION 141874c16 FUN_141874c16 body=196 status=ok
// SIG undefined FUN_141874c16(void)

undefined8 FUN_141874c16(longlong param_1)

{
  char cVar1;
  longlong in_RAX;
  undefined7 uVar5;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar6;
  ulonglong uVar2;
  
  if (*(longlong *)(param_1 + 0x3170) == 0) {
    if (*(char *)(param_1 + 0x34b0) == '\x01') {
      lVar3 = param_1 + 0x3210;
      goto LAB_141874c53;
    }
LAB_141874c35:
    cVar1 = *(char *)(param_1 + 0x349);
    uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
    if (-1 < cVar1) {
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x178) + 0xd0))(param_1 + 0x178);
      if ((char)uVar4 != '\0') goto LAB_141874cac;
      cVar1 = *(char *)(param_1 + 0x349);
      uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
    }
    uVar2 = CONCAT71(uVar5,cVar1) & 0xffffffffffffff40;
    uVar4 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 6);
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x3170) + 0xd8;
LAB_141874c53:
    lVar3 = FUN_140153468(lVar3);
    in_RAX = lVar3;
    if (lVar3 == 0) goto LAB_141874c35;
    if (*(longlong *)(param_1 + 0x3170) == 0) {
      if (*(char *)(param_1 + 0x34b0) != '\x01') goto LAB_141874c35;
      lVar6 = param_1 + 0x3210;
    }
    else {
      lVar6 = *(longlong *)(param_1 + 0x3170) + 0xd8;
    }
    in_RAX = FUN_140153468(lVar6);
    if (((in_RAX == 0) || ((*(byte *)(lVar6 + 0x298) & 2) != 0)) ||
       (*(char *)(lVar3 + 0x558) == '\0')) goto LAB_141874c35;
LAB_141874cac:
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 141874cda FUN_141874cda body=329 status=ok
// SIG undefined FUN_141874cda(void)

void FUN_141874cda(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined *puVar4;
  uint *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  cVar1 = *(char *)(param_1 + 0x3190);
  *(undefined1 *)(param_1 + 0x3190) = *param_2;
  *(undefined8 *)(param_1 + 0x3198) = *(undefined8 *)(param_2 + 8);
  FUN_1403ed422(&DAT_000031a0 + param_1,param_2 + 0x10);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_2 + 0x28);
    }
  }
  *(longlong *)(param_1 + 0x31b8) = lVar3;
  puVar7 = (undefined8 *)(param_2 + 0x30);
  puVar8 = (undefined8 *)(param_1 + 0x31c0);
  for (lVar3 = 9; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  *(undefined1 *)(param_1 + 0x3208) = param_2[0x78];
  *(char *)(param_1 + 0x3190) = cVar1 + '\x01';
  uVar2 = *(ulonglong *)(param_1 + 0x38);
  if (uVar2 < 0xffffffff00000000) {
    plVar6 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar6 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x000141874e12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x58))(plVar6,param_1,uVar2,0xd);
    return;
  }
  uVar9 = (uint)uVar2;
  if ((-1 < (int)uVar9) && ((int)uVar9 < DAT_14c998088)) {
    puVar4 = &DAT_14c998070;
    if (DAT_14c998080 != (undefined *)0x0) {
      puVar4 = DAT_14c998080;
    }
    if ((*(uint *)(puVar4 + ((uint)(uVar2 >> 3) & 0xffffffc)) >> (uVar9 & 0x1f) & 1) != 0) {
      lVar3 = DAT_14c998060 + (ulonglong)(uVar9 & 0x7fffffff) * 0x68;
      puVar5 = *(uint **)(lVar3 + 0x18);
      if (*(uint **)(lVar3 + 0x18) == (uint *)0x0) {
        puVar5 = (uint *)(lVar3 + 8);
      }
      *puVar5 = *puVar5 | 0x2000;
      *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) | 1;
    }
  }
  return;
}



// FUNCTION 141874e24 FUN_141874e24 body=60 status=ok
// SIG undefined FUN_141874e24(void)

undefined4 FUN_141874e24(longlong param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  
  if ((*(longlong *)(&DAT_00001ce8 + param_1) != 0) && (cVar1 = FUN_1449ce79a(), cVar1 != '\0')) {
    uVar2 = *(uint *)(param_1 + 0x3630) | *(uint *)(param_1 + 0x362c);
    return CONCAT31((int3)(uVar2 >> 8),(uVar2 & param_2) != 0);
  }
  return 0;
}



// FUNCTION 141874e60 FUN_141874e60 body=394 status=ok
// SIG undefined FUN_141874e60(void)

void FUN_141874e60(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 **ppuVar3;
  ulonglong uVar4;
  undefined1 ***pppuVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  undefined8 **local_90;
  undefined1 **local_88;
  undefined1 **local_80;
  undefined1 local_71;
  undefined1 **local_70;
  undefined1 ***local_68;
  undefined1 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar7 = *(longlong *)(&DAT_00001ce8 + param_1);
  if (lVar7 != 0) {
    if (*(code **)(*(longlong *)(&DAT_00001100 + lVar7) + 0x10) == (code *)&LAB_144944cea) {
      lVar7 = lVar7 + 0x1808;
    }
    else {
      lVar7 = (**(code **)(*(longlong *)(&DAT_00001100 + lVar7) + 0x10))(&DAT_00001100 + lVar7);
    }
    if (param_2 == '\0') {
      local_88 = &local_98;
      local_98 = (undefined1 *)CONCAT71(local_98._1_7_,4);
      local_68 = &local_88;
      pppuVar5 = &local_70;
      ppuVar3 = (undefined1 **)&LAB_143cbcb7a;
    }
    else {
      if (param_1 == 0) {
        uVar6 = 0;
        uVar4 = 0;
      }
      else {
        uVar6 = *(uint *)(param_1 + 0xc);
        if ((int)uVar6 < DAT_14c9647dc) {
          lVar9 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
        }
        else {
          lVar9 = 0;
        }
        uVar4 = (ulonglong)*(uint *)(lVar9 + 0x10);
        if (*(uint *)(lVar9 + 0x10) == 0) {
          LOCK();
          iVar1 = DAT_14c964868 + 1;
          UNLOCK();
          uVar8 = DAT_14c964868 + 1;
          bVar10 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar1;
          if (bVar10) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,uVar8);
          }
          LOCK();
          uVar2 = *(uint *)(lVar9 + 0x10);
          bVar10 = uVar2 == 0;
          if (bVar10) {
            *(uint *)(lVar9 + 0x10) = uVar8;
            uVar2 = 0;
          }
          UNLOCK();
          if (bVar10) {
            uVar2 = uVar8;
          }
          uVar4 = (ulonglong)uVar2;
        }
      }
      local_70 = (undefined1 **)((ulonglong)uVar6 | uVar4 << 0x20);
      local_90 = &local_70;
      local_30 = 4;
      local_98 = &local_71;
      local_71 = 4;
      local_80 = &local_98;
      pppuVar5 = &local_88;
      ppuVar3 = (undefined1 **)&LAB_143cbcb5c;
    }
    *pppuVar5 = ppuVar3;
    FUN_1400b7536(lVar7);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141874fec FUN_141874fec body=139 status=ok
// SIG undefined FUN_141874fec(void)

undefined8 FUN_141874fec(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  float fVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  
  if (((*(int *)(param_1 + 0x524) != 0) && (uVar1 = *(uint *)(param_1 + 0x520), -1 < (int)uVar1)) &&
     ((int)uVar1 < DAT_14c9647dc)) {
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x524))) &&
       (((*(uint *)(plVar2 + 1) & 0x10200000) == 0 && (*plVar2 != 0)))) {
      fVar3 = 0.0;
      uVar5 = 0;
      if (*(char *)(*plVar2 + 0x1640) != '\0') goto LAB_14187504d;
    }
  }
  fVar3 = 0.0;
  uVar5 = 0;
  if ((*(float *)(param_1 + 0x1a8) != 0.0) || (NAN(*(float *)(param_1 + 0x1a8)))) {
    uVar4 = FUN_144800006(param_1);
    uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
    fVar3 = (float)uVar4 * *(float *)(param_1 + 0x1a8);
  }
LAB_14187504d:
  return CONCAT44(uVar5,fVar3);
}



// FUNCTION 141875078 FUN_141875078 body=764 status=ok
// SIG undefined FUN_141875078(void)

void FUN_141875078(longlong param_1,double *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double *pdVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_68 [32];
  double local_48;
  double local_40;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((((*(int *)(param_1 + 0x524) != 0) && (uVar1 = *(uint *)(param_1 + 0x520), -1 < (int)uVar1))
      && ((int)uVar1 < DAT_14c9647dc)) &&
     (((plVar5 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar5 != (longlong *)0x0 && ((int)plVar5[2] == *(int *)(param_1 + 0x524))) &&
      (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 && (lVar2 = *plVar5, lVar2 != 0)))))) {
    if (*(char *)(lVar2 + 0x17a8) == '\x01') {
      lVar3 = *(longlong *)(lVar2 + 0x1c8);
      if (lVar3 == 0) {
        pdVar4 = &DAT_14c8464e0;
        dVar6 = DAT_14c8464f0;
      }
      else {
        pdVar4 = (double *)(lVar3 + 0x260);
        dVar6 = *(double *)(lVar3 + 0x270);
      }
      dVar10 = *(double *)(lVar2 + 0x17e0) - pdVar4[1];
      dVar8 = *(double *)(lVar2 + 0x17d8) - *pdVar4;
      dVar6 = *(double *)(lVar2 + 0x17e8) - dVar6;
      dVar12 = dVar6 * dVar6 + dVar8 * dVar8 + dVar10 * dVar10;
      if (((dVar12 != 1.0) || (dVar13 = dVar6, dVar7 = dVar8, dVar9 = dVar10, NAN(dVar12))) &&
         (dVar13 = DAT_14c8464f0, dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar12)) {
        dVar12 = 1.0 / SQRT(dVar12);
        dVar13 = dVar6 * dVar12;
        dVar7 = dVar8 * dVar12;
        dVar9 = dVar10 * dVar12;
      }
      dVar6 = (double)*(float *)(lVar2 + 0x164c);
      *param_2 = dVar7 * dVar6;
      param_2[1] = dVar9 * dVar6;
      param_2[2] = dVar13 * dVar6;
    }
    else {
      dVar6 = *param_2;
      dVar8 = param_2[1];
      if (((9.999999747378752e-05 < ABS(dVar6)) || (9.999999747378752e-05 < ABS(dVar8))) ||
         (9.999999747378752e-05 < ABS(param_2[2]))) {
        dVar10 = param_2[2];
        dVar13 = dVar10 * dVar10 + dVar6 * dVar6 + dVar8 * dVar8;
        dVar12 = (double)*(float *)(lVar2 + 0x164c);
        if (SQRT(dVar13) < dVar12) {
          if (((dVar13 != 1.0) || (dVar7 = dVar6, dVar9 = dVar8, dVar11 = dVar10, NAN(dVar13))) &&
             (dVar7 = DAT_14c8464e0, dVar9 = DAT_14c8464e8, dVar11 = DAT_14c8464f0,
             9.99999993922529e-09 <= dVar13)) {
            dVar13 = 1.0 / SQRT(dVar13);
            dVar7 = dVar6 * dVar13;
            dVar9 = dVar8 * dVar13;
            dVar11 = dVar10 * dVar13;
          }
          *param_2 = dVar7 * dVar12;
          param_2[1] = dVar9 * dVar12;
          param_2[2] = dVar11 * dVar12;
        }
      }
      else {
        FUN_1461e0392(lVar2,&local_48);
        dVar6 = (double)*(float *)(lVar2 + 0x164c);
        *param_2 = dVar6 * local_48;
        param_2[1] = local_40 * dVar6;
        param_2[2] = local_38 * dVar6;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141875376 FUN_141875376 body=31 status=ok
// SIG undefined FUN_141875376(void)

void FUN_141875376(longlong *param_1)

{
  FUN_14058337a();
                    /* WARNING: Could not recover jumptable at 0x00014187538e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xcf0))(param_1);
  return;
}



// FUNCTION 141875396 FUN_141875396 body=272 status=ok
// SIG undefined FUN_141875396(void)

void FUN_141875396(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_1[0x16];
  if ((lVar3 == 0) && (lVar3 = FUN_1448abda6(param_1), lVar3 == 0)) {
LAB_14187546c:
    *(undefined1 *)((longlong)param_1 + 0x117c) = 0;
    *(byte *)((longlong)param_1 + 0x8a1) = *(byte *)((longlong)param_1 + 0x8a1) | 0x10;
    FUN_1406c4f64(param_1);
    FUN_14085b656(param_1,1);
    (**(code **)(*param_1 + 0xb20))(param_1);
    FUN_1448c6f34(param_1);
    return;
  }
  if (((*(longlong *)(lVar3 + 0x30) == 0) ||
      (((lVar4 = *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x2b0), lVar4 == 0 ||
        (*(longlong *)(lVar4 + 0x588) == 0)) ||
       (*(double *)(lVar3 + 0x6d0) < *(double *)(lVar3 + 0x708))))) &&
     (((*(byte *)(lVar3 + 0x154) & 0x40) == 0 || (iVar2 = FUN_14490d72a(lVar3), iVar2 != 3)))) {
    if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
      lVar4 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar4);
        if (*(longlong *)(lVar1 + 0x360) == lVar3) {
          if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x278) & 1) != 0)) {
            return;
          }
          break;
        }
        lVar4 = lVar4 + 8;
      } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar4);
    }
    if ((*(char *)(lVar3 + 0x152) != '\x03') || (-1 < *(char *)(lVar3 + 0x155))) goto LAB_14187546c;
  }
  return;
}



// FUNCTION 1418754a6 FUN_1418754a6 body=1782 status=ok
// SIG undefined FUN_1418754a6(void)

undefined1 (*) [16] FUN_1418754a6(longlong param_1,undefined1 (*param_2) [16],double *param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_118;
  iVar1 = *(int *)(param_1 + 0x640);
  if (iVar1 == 0) {
    dVar24 = *(double *)(param_1 + 0x658);
    dVar17 = *(double *)(param_1 + 0x648);
    dVar19 = *(double *)(param_1 + 0x650);
    dVar12 = (dVar24 + dVar24) * 0.5;
    dVar18 = (dVar19 + dVar19) * 0.5;
    dVar16 = (dVar17 + dVar17) * 0.5;
    dVar24 = dVar12 - dVar24;
    dVar19 = dVar18 - dVar19;
    dVar17 = dVar16 - dVar17;
    dVar9 = dVar12 * dVar12 + dVar16 * dVar16 + dVar18 * dVar18;
    local_f8._8_8_ = 0;
    local_f8._0_8_ = dVar9;
    dVar26 = *param_3;
    dVar20 = param_3[1];
    dVar11 = param_3[2];
    dVar22 = param_3[8];
    dVar2 = param_3[9];
    dVar3 = param_3[10];
    dVar15 = dVar20 + dVar20;
    dVar14 = dVar11 + dVar11;
    dVar21 = dVar26 * (dVar26 + dVar26);
    dVar6 = (1.0 - (dVar11 * dVar14 + dVar20 * dVar15)) * dVar22;
    dVar7 = (1.0 - (dVar11 * dVar14 + dVar21)) * dVar2;
    dVar13 = (1.0 - (dVar21 + dVar20 * dVar15)) * dVar3;
    dVar11 = param_3[3];
    dVar23 = dVar14 * dVar11;
    dVar25 = (dVar26 + dVar26) * param_3[3];
    dVar11 = dVar15 * dVar11;
    dVar21 = (dVar15 * dVar26 + dVar23) * dVar22;
    dVar8 = (dVar14 * dVar20 + dVar25) * dVar2;
    dVar10 = (dVar11 + *param_3 * dVar14) * dVar3;
    dVar22 = (*param_3 * dVar14 - dVar11) * dVar22;
    dVar2 = (dVar15 * dVar26 - dVar23) * dVar2;
    dVar3 = (dVar14 * dVar20 - dVar25) * dVar3;
    dVar23 = ABS(dVar12 * dVar10) + ABS(dVar18 * dVar2) + ABS(dVar16 * dVar6);
    dVar25 = ABS(dVar12 * dVar3) + ABS(dVar18 * dVar7) + ABS(dVar16 * dVar21);
    dVar26 = ABS(dVar13 * dVar12) + ABS(dVar8 * dVar18) + ABS(dVar22 * dVar16);
    dVar11 = dVar10 * dVar10 + dVar2 * dVar2 + dVar6 * dVar6;
    dVar15 = dVar3 * dVar3 + dVar7 * dVar7 + dVar21 * dVar21;
    dVar14 = dVar13 * dVar13 + dVar8 * dVar8 + dVar22 * dVar22;
    if (dVar11 <= dVar15) {
      dVar11 = dVar15;
    }
    if (dVar11 <= dVar14) {
      dVar11 = dVar14;
    }
    dVar15 = param_3[4];
    dVar7 = dVar24 * dVar3 + dVar19 * dVar7 + dVar17 * dVar21 + param_3[5];
    dVar3 = param_3[6];
    if (dVar11 < 0.0) {
      dVar11 = sqrt(dVar11);
    }
    else {
      dVar11 = SQRT(dVar11);
    }
    dVar11 = SQRT(dVar9) * dVar11;
    dVar21 = SQRT(dVar25 * dVar25 + dVar26 * dVar26 + dVar23 * dVar23);
    if (dVar21 <= dVar11) {
      dVar11 = dVar21;
    }
    auVar4._8_4_ = SUB84(dVar7,0);
    auVar4._0_8_ = dVar24 * dVar10 + dVar19 * dVar2 + dVar17 * dVar6 + dVar15;
    auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    *param_2 = auVar4;
    *(double *)param_2[1] = dVar24 * dVar13 + dVar19 * dVar8 + dVar17 * dVar22 + dVar3;
    *(double *)(param_2[1] + 8) = dVar23;
    *(double *)param_2[2] = dVar25;
    *(double *)(param_2[2] + 8) = dVar26;
    *(double *)param_2[3] = dVar11;
  }
  else if (iVar1 == 1) {
    dVar17 = (double)*(float *)(param_1 + 0x664);
    local_f8._8_4_ = in_XMM0_Dc;
    local_f8._0_8_ = dVar17;
    local_f8._12_4_ = in_XMM0_Dd;
    dVar19 = (double)*(float *)(param_1 + 0x668);
    dVar21 = *param_3;
    dVar8 = param_3[1];
    dVar24 = param_3[2];
    dVar14 = param_3[8];
    dVar11 = param_3[9];
    dVar2 = param_3[10];
    dVar9 = dVar8 + dVar8;
    dVar3 = dVar24 + dVar24;
    dVar15 = dVar21 * (dVar21 + dVar21);
    dVar25 = (1.0 - (dVar24 * dVar3 + dVar8 * dVar9)) * dVar14;
    dVar26 = (1.0 - (dVar24 * dVar3 + dVar15)) * dVar11;
    dVar23 = (1.0 - (dVar15 + dVar8 * dVar9)) * dVar2;
    dVar24 = param_3[3];
    dVar15 = dVar3 * dVar24;
    dVar6 = (dVar21 + dVar21) * param_3[3];
    dVar24 = dVar9 * dVar24;
    dVar20 = (dVar9 * dVar21 + dVar15) * dVar14;
    dVar22 = (dVar3 * dVar8 + dVar6) * dVar11;
    dVar7 = (dVar24 + *param_3 * dVar3) * dVar2;
    dVar14 = (*param_3 * dVar3 - dVar24) * dVar14;
    dVar11 = (dVar9 * dVar21 - dVar15) * dVar11;
    dVar2 = (dVar3 * dVar8 - dVar6) * dVar2;
    dVar15 = DAT_14c8464e0 * dVar25;
    dVar9 = DAT_14c8464e8 * dVar11;
    dVar6 = DAT_14c8464f0 * dVar7;
    dVar12 = ABS(dVar17 * dVar7) + ABS(dVar19 * dVar11) + ABS(dVar19 * dVar25);
    dVar13 = ABS(dVar17 * dVar2) + ABS(dVar19 * dVar26) + ABS(dVar19 * dVar20);
    dVar10 = ABS(dVar23 * dVar17) + ABS(dVar22 * dVar19) + ABS(dVar14 * dVar19);
    dVar21 = DAT_14c8464e0 * dVar14;
    dVar8 = DAT_14c8464e8 * dVar22;
    dVar3 = DAT_14c8464f0 * dVar23;
    dVar24 = dVar7 * dVar7 + dVar11 * dVar11 + dVar25 * dVar25;
    dVar19 = dVar2 * dVar2 + dVar26 * dVar26 + dVar20 * dVar20;
    dVar11 = dVar23 * dVar23 + dVar22 * dVar22 + dVar14 * dVar14;
    if (dVar24 <= dVar19) {
      dVar24 = dVar19;
    }
    if (dVar24 <= dVar11) {
      dVar24 = dVar11;
    }
    dVar11 = param_3[4];
    dVar2 = DAT_14c8464f0 * dVar2 + DAT_14c8464e8 * dVar26 + DAT_14c8464e0 * dVar20 + param_3[5];
    dVar19 = param_3[6];
    if (dVar24 < 0.0) {
      dVar24 = sqrt(dVar24);
    }
    else {
      dVar24 = SQRT(dVar24);
    }
    dVar14 = SQRT(dVar13 * dVar13 + dVar10 * dVar10 + dVar12 * dVar12);
    dVar7 = dVar24 * dVar17;
    if (dVar14 <= dVar24 * dVar17) {
      dVar7 = dVar14;
    }
    auVar5._8_4_ = SUB84(dVar2,0);
    auVar5._0_8_ = dVar6 + dVar9 + dVar15 + dVar11;
    auVar5._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    *param_2 = auVar5;
    *(double *)param_2[1] = dVar3 + dVar8 + dVar21 + dVar19;
    *(double *)(param_2[1] + 8) = dVar12;
    *(double *)param_2[2] = dVar13;
    *(double *)(param_2[2] + 8) = dVar10;
    *(double *)param_2[3] = dVar7;
  }
  else {
    if (iVar1 == 2) {
      local_b8 = (double)*(float *)(param_1 + 0x660);
    }
    else {
      local_b8 = 1.0;
    }
    dStack_e0 = DAT_14c8464e8;
    local_e8 = DAT_14c8464e0;
    local_d8 = DAT_14c8464f0;
    local_d0 = local_b8;
    local_c8 = local_b8;
    local_c0 = local_b8;
    FUN_144a80a4c(&local_e8,param_2);
  }
  if ((local_b0 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 141875ba4 FUN_141875ba4 body=103 status=ok
// SIG undefined FUN_141875ba4(void)

void FUN_141875ba4(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  
  if ((~*(byte *)(param_1 + 0x9c) & 3) != 0) goto LAB_141875bfe;
  bVar2 = *(byte *)(param_1 + 0x9d);
  if ((bVar2 & 1) != 0) {
    if (*(longlong *)(param_1 + 0xb0) != 0) goto LAB_141875bfe;
    lVar1 = FUN_1448abda6(param_1);
    if (lVar1 != 0) goto LAB_141875bfe;
    bVar2 = *(byte *)(param_1 + 0x9d);
  }
  *(byte *)(param_1 + 0x9d) = bVar2 | 1;
  FUN_1401057d4(param_1);
  FUN_14010586c(&DAT_14cad0140,param_1);
LAB_141875bfe:
  FUN_1447ec8c2(param_1);
  return;
}



// FUNCTION 141875c0c FUN_141875c0c body=38 status=ok
// SIG undefined FUN_141875c0c(void)

void FUN_141875c0c(longlong *param_1)

{
  FUN_140456554();
  (**(code **)(*param_1 + 0xcf0))(param_1);
  FUN_1447ec8c2(param_1);
  return;
}



// FUNCTION 141875c32 FUN_141875c32 body=163 status=ok
// SIG undefined FUN_141875c32(void)

void FUN_141875c32(longlong *param_1,undefined8 param_2,uint param_3)

{
  longlong lVar1;
  char cVar2;
  longlong *plVar3;
  int iVar4;
  
  cVar2 = (**(code **)(*param_1 + 0xbf0))();
  if ((cVar2 != '\0') && ((int)param_1[0x2e0] != *(int *)((longlong)param_1 + 0x172c))) {
    plVar3 = param_1 + 0x2e6;
    if ((longlong *)param_1[0x2e7] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[0x2e7];
    }
    iVar4 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[0x2e8] - 1U & param_3) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = param_1[0x2df] + (longlong)iVar4 * 0x30;
        if (*(uint *)(param_1[0x2df] + (longlong)iVar4 * 0x30) == param_3) {
          if (lVar1 == 0) {
            return;
          }
          if (lVar1 == -8) {
            return;
          }
          FUN_144a2d64e(param_2,lVar1 + 0x18);
          return;
        }
        iVar4 = *(int *)(lVar1 + 0x28);
      } while (iVar4 != -1);
    }
  }
  return;
}



// FUNCTION 141875cd6 FUN_141875cd6 body=592 status=ok
// SIG undefined FUN_141875cd6(void)

void FUN_141875cd6(longlong *param_1,double *param_2,undefined8 param_3)

{
  double dVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  float fVar10;
  undefined1 auStack_b8 [40];
  double *local_90;
  undefined8 *local_88;
  float local_80;
  code *local_78;
  double **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  double local_58;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = param_3;
  cVar3 = (**(code **)(*param_1 + 0x480))(param_1,param_3);
  if (cVar3 != '\0') {
    lVar4 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
    if (*(int *)(lVar4 + 0x18) != *(int *)(lVar4 + 0x44)) {
      uVar2 = (uint)((ulonglong)DAT_14c9abbf0 >> 0x10);
      uVar9 = (uint)DAT_14c9abbf0 & 0xffff;
      lVar8 = lVar4 + 0x48;
      if (*(longlong *)(lVar4 + 0x50) != 0) {
        lVar8 = *(longlong *)(lVar4 + 0x50);
      }
      iVar7 = *(int *)(lVar8 + (ulonglong)
                               (*(int *)(lVar4 + 0x58) - 1U &
                               (int)((ulonglong)DAT_14c9abbf0 >> 0x20) +
                               ((uint)DAT_14c9abbf0 << 0x10 | uVar9) +
                               (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar9 >> 4)) * 4);
      if (iVar7 != -1) {
        do {
          if (*(longlong *)(*(longlong *)(lVar4 + 0x10) + (longlong)iVar7 * 0x460) == DAT_14c9abbf0)
          goto LAB_141875dd2;
          iVar7 = *(int *)((longlong)iVar7 * 0x460 + *(longlong *)(lVar4 + 0x10) + 0x450);
        } while (iVar7 != -1);
      }
    }
    local_58 = param_2[2];
    local_68 = *(undefined4 *)param_2;
    uStack_64 = *(undefined4 *)((longlong)param_2 + 4);
    uStack_60 = *(undefined4 *)(param_2 + 1);
    uStack_5c = *(undefined4 *)((longlong)param_2 + 0xc);
    FUN_140f47f24(param_1,&local_68,param_3,0);
  }
LAB_141875dd2:
  lVar4 = DAT_14c9abbe8;
  if (DAT_14c9abbe8 == 0) {
    plVar6 = (longlong *)FUN_145a10a92();
    lVar4 = plVar6[0x22];
    if (plVar6[0x22] == 0) {
      (**(code **)(*plVar6 + 1000))(plVar6);
      lVar4 = plVar6[0x22];
    }
  }
  DAT_14c9abbe8 = lVar4;
  lVar8 = DAT_14c9abbe8;
  lVar4 = param_1[0x16];
  if (lVar4 == 0) {
    lVar4 = FUN_1448abda6(param_1);
  }
  if (*(char *)(lVar8 + 0x3c) == '\x01') {
    fVar10 = 1.0 / (float)*(int *)(lVar8 + 0x40);
  }
  else {
    fVar10 = 1.0;
    if (lVar4 != 0) {
      fVar10 = 1.0;
      if (1e-08 < *(float *)(lVar4 + 0x6f4)) {
        fVar10 = *(float *)(lVar4 + 0x6f4);
      }
    }
    dVar1 = (double)(1.0 / fVar10);
    *param_2 = *param_2 * dVar1;
    param_2[1] = param_2[1] * dVar1;
    param_2[2] = dVar1 * param_2[2];
  }
  uVar5 = (**(code **)(param_1[0x247] + 0x10))(param_1 + 0x247);
  local_70 = &local_90;
  local_88 = &local_48;
  local_78 = FUN_143ce919c;
  local_90 = param_2;
  local_80 = fVar10;
  FUN_1408d6bd2(uVar5,DAT_14c9abbf8);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 141875f28 FUN_141875f28 body=81 status=ok
// SIG undefined FUN_141875f28(void)

void FUN_141875f28(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x18))(param_1 + 0x1238);
  lVar2 = FUN_140256918(uVar1,DAT_14c9abbf0);
  if ((lVar2 != 0) && (1e-08 < *(float *)(param_1 + 0x4ac))) {
    return;
  }
  FUN_140849ce4(param_1);
  return;
}



// FUNCTION 141875f7a FUN_141875f7a body=135 status=ok
// SIG undefined FUN_141875f7a(void)

void FUN_141875f7a(longlong param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((0 < param_2) && (*(int *)(param_1 + 0x870) != param_2)) {
    plVar1 = (longlong *)(param_1 + 0x868);
    FUN_1409b4a4a(plVar1,param_2);
    do {
      iVar3 = *(int *)(param_1 + 0x870);
      lVar5 = (longlong)iVar3;
      *(uint *)(param_1 + 0x870) = iVar3 + 1U;
      if (*(uint *)(param_1 + 0x874) < iVar3 + 1U) {
        FUN_147a159a6(plVar1,iVar3);
      }
      lVar4 = *plVar1;
      puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5 * 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2 = (undefined8 *)(lVar4 + lVar5 * 0x28);
      *puVar2 = 0;
      puVar2[1] = 0;
      *(undefined8 *)(lVar4 + 0x20 + lVar5 * 0x28) = 0;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 141876002 FUN_141876002 body=101 status=ok
// SIG undefined FUN_141876002(void)

void FUN_141876002(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e6310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b3f4e90;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}


