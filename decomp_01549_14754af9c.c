// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14754af9c FUN_14754af9c body=291 status=ok
// SIG undefined FUN_14754af9c(void)

void FUN_14754af9c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754afdb;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754afdb:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b01e;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754b01e:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754b0a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754b0c0 FUN_14754b0c0 body=29 status=ok
// SIG undefined FUN_14754b0c0(void)

undefined8 FUN_14754b0c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b0de FUN_14754b0de body=291 status=ok
// SIG undefined FUN_14754b0de(void)

void FUN_14754b0de(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b11d;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754b11d:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b160;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754b160:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754b1ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754b202 FUN_14754b202 body=29 status=ok
// SIG undefined FUN_14754b202(void)

undefined8 FUN_14754b202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b286 FUN_14754b286 body=31 status=ok
// SIG undefined FUN_14754b286(void)

undefined8 FUN_14754b286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b2a6 FUN_14754b2a6 body=29 status=ok
// SIG undefined FUN_14754b2a6(void)

undefined8 FUN_14754b2a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b31c FUN_14754b31c body=29 status=ok
// SIG undefined FUN_14754b31c(void)

undefined8 FUN_14754b31c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b33a FUN_14754b33a body=299 status=ok
// SIG undefined FUN_14754b33a(void)

void FUN_14754b33a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b379;
      plVar10 = plVar10 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14754b379:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar11 = *(longlong **)(lVar7 + 0x28);
    lVar9 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b3bc;
      plVar11 = plVar11 + 4;
      lVar9 = lVar9 + -0x20;
    } while (lVar9 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14754b3bc:
  lVar9 = *plVar10;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar8 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *plVar11);
    lVar7 = 0;
    do {
      puVar1 = (undefined4 *)(lVar9 + (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x10);
      uVar4 = puVar1[1];
      uVar5 = puVar1[2];
      uVar6 = puVar1[3];
      *puVar8 = *puVar1;
      puVar8[1] = uVar4;
      puVar8[2] = uVar5;
      puVar8[3] = uVar6;
      lVar7 = lVar7 + 1;
      puVar8 = puVar8 + 4;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar11 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754b44e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754b466 FUN_14754b466 body=29 status=ok
// SIG undefined FUN_14754b466(void)

undefined8 FUN_14754b466(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b4e8 FUN_14754b4e8 body=29 status=ok
// SIG undefined FUN_14754b4e8(void)

undefined8 FUN_14754b4e8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b506 FUN_14754b506 body=291 status=ok
// SIG undefined FUN_14754b506(void)

void FUN_14754b506(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b545;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754b545:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b588;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754b588:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754b612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754b62a FUN_14754b62a body=29 status=ok
// SIG undefined FUN_14754b62a(void)

undefined8 FUN_14754b62a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b64a FUN_14754b64a body=57 status=ok
// SIG undefined FUN_14754b64a(void)

void FUN_14754b64a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14754834a(param_2,param_3);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754b694 FUN_14754b694 body=53 status=ok
// SIG undefined FUN_14754b694(void)

void FUN_14754b694(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14754b6c9(param_2,param_3);
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754b6c9 FUN_14754b6c9 body=281 status=ok
// SIG undefined FUN_14754b6c9(void)

void FUN_14754b6c9(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab25e8 == 0) {
    uVar2 = FUN_140bd662f();
    DAT_14cab25e8 = FUN_140002ddd(FUN_14633bd0d,uVar2,L"MovieSceneTrackInstanceComponent");
  }
  lVar1 = DAT_14cab25e8;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754b7e4 FUN_14754b7e4 body=29 status=ok
// SIG undefined FUN_14754b7e4(void)

undefined8 FUN_14754b7e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b802 FUN_14754b802 body=309 status=ok
// SIG undefined FUN_14754b802(void)

void FUN_14754b802(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b843;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14754b843:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754b886;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754b886:
  lVar4 = *plVar5;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = (longlong)(int)param_2[1] * 0x10 + *plVar7;
    lVar6 = 0;
    do {
      FUN_14754834a(lVar3,(longlong)*(int *)(*param_4 + lVar6 * 4) * 0x10 + lVar4);
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754b91e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754b938 FUN_14754b938 body=29 status=ok
// SIG undefined FUN_14754b938(void)

undefined8 FUN_14754b938(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b9ca FUN_14754b9ca body=31 status=ok
// SIG undefined FUN_14754b9ca(void)

undefined8 FUN_14754b9ca(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754b9ea FUN_14754b9ea body=291 status=ok
// SIG undefined FUN_14754b9ea(void)

void FUN_14754b9ea(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ba29;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754ba29:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ba6c;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754ba6c:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754baf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754bb0e FUN_14754bb0e body=29 status=ok
// SIG undefined FUN_14754bb0e(void)

undefined8 FUN_14754bb0e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754bb80 FUN_14754bb80 body=31 status=ok
// SIG undefined FUN_14754bb80(void)

undefined8 FUN_14754bb80(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754bba0 FUN_14754bba0 body=29 status=ok
// SIG undefined FUN_14754bba0(void)

undefined8 FUN_14754bba0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754bc12 FUN_14754bc12 body=31 status=ok
// SIG undefined FUN_14754bc12(void)

undefined8 FUN_14754bc12(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754bc32 FUN_14754bc32 body=291 status=ok
// SIG undefined FUN_14754bc32(void)

void FUN_14754bc32(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754bc71;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754bc71:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754bcb4;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754bcb4:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754bd3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754bd56 FUN_14754bd56 body=29 status=ok
// SIG undefined FUN_14754bd56(void)

undefined8 FUN_14754bd56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754bdc8 FUN_14754bdc8 body=29 status=ok
// SIG undefined FUN_14754bdc8(void)

undefined8 FUN_14754bdc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754be3a FUN_14754be3a body=29 status=ok
// SIG undefined FUN_14754be3a(void)

undefined8 FUN_14754be3a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754becc FUN_14754becc body=31 status=ok
// SIG undefined FUN_14754becc(void)

undefined8 FUN_14754becc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754beec FUN_14754beec body=291 status=ok
// SIG undefined FUN_14754beec(void)

void FUN_14754beec(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754bf2b;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754bf2b:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754bf6e;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754bf6e:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754bff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754c010 FUN_14754c010 body=29 status=ok
// SIG undefined FUN_14754c010(void)

undefined8 FUN_14754c010(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c082 FUN_14754c082 body=31 status=ok
// SIG undefined FUN_14754c082(void)

undefined8 FUN_14754c082(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c0a2 FUN_14754c0a2 body=29 status=ok
// SIG undefined FUN_14754c0a2(void)

undefined8 FUN_14754c0a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c0c2 FUN_14754c0c2 body=164 status=ok
// SIG undefined FUN_14754c0c2(void)

void FUN_14754c0c2(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong lVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98 [10];
  byte local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (0 < param_4) {
    uVar2 = param_4 + 1;
    do {
      if (param_2 != param_3) {
        local_48 = *(byte *)(param_3 + 10);
        (*(code *)(&PTR_LAB_14a46cf50)[local_48])(local_98,param_3);
        puVar3 = local_98;
        puVar4 = param_2;
        for (lVar1 = 0xb; lVar1 != 0; lVar1 = lVar1 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar4 = puVar4 + 1;
        }
      }
      puVar3 = param_3 + 0xb;
      param_3 = param_3 + 0xc;
      param_2[0xb] = *puVar3;
      param_2 = param_2 + 0xc;
      uVar2 = uVar2 - 1;
    } while (1 < uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754c17a FUN_14754c17a body=29 status=ok
// SIG undefined FUN_14754c17a(void)

undefined8 FUN_14754c17a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c198 FUN_14754c198 body=406 status=ok
// SIG undefined FUN_14754c198(void)

void FUN_14754c198(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  void *_Dst;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a4;
  undefined1 local_a0 [80];
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar4 = *(longlong **)(param_3 + 0x28);
    lVar1 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar4 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c1ed;
      plVar4 = plVar4 + 4;
      lVar1 = lVar1 + -0x20;
    } while (lVar1 != 0);
  }
  plVar4 = (longlong *)0x0;
LAB_14754c1ed:
  local_a4 = *(int *)(param_3 + 0x14);
  if (local_a4 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar4 + 1));
  }
  LOCK();
  *(int *)(plVar4 + 3) = (int)plVar4[3] + 1;
  UNLOCK();
  lVar1 = *param_2;
  if (*(ushort *)(lVar1 + 0xc) != 0) {
    plVar3 = *(longlong **)(lVar1 + 0x28);
    lVar2 = (ulonglong)*(ushort *)(lVar1 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar3 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c231;
      plVar3 = plVar3 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  plVar3 = (longlong *)0x0;
LAB_14754c231:
  lVar2 = *plVar4;
  local_a8 = *(int *)(lVar1 + 0x14);
  if (local_a8 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
  }
  LOCK();
  *(int *)(plVar3 + 3) = (int)plVar3[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    _Dst = (void *)((longlong)(int)param_2[1] * 0x60 + *plVar3);
    lVar1 = 0;
    do {
      pvVar5 = (void *)((longlong)*(int *)(*param_4 + lVar1 * 4) * 0x60 + lVar2);
      if (_Dst != pvVar5) {
        local_50 = *(byte *)((longlong)pvVar5 + 0x50);
        (*(code *)(&PTR_LAB_14a46cf50)[local_50])(local_a0,pvVar5);
        memmove(_Dst,local_a0,0x58);
      }
      *(undefined8 *)((longlong)_Dst + 0x58) = *(undefined8 *)((longlong)pvVar5 + 0x58);
      lVar1 = lVar1 + 1;
      _Dst = (void *)((longlong)_Dst + 0x60);
    } while (lVar1 < (int)param_4[1]);
  }
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 3) = (int)plVar3[3] + -1;
    UNLOCK();
    if (local_a8 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar3 + 1));
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 3) = (int)plVar4[3] + -1;
    UNLOCK();
    if (local_a4 == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(plVar4 + 1));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754c330 FUN_14754c330 body=29 status=ok
// SIG undefined FUN_14754c330(void)

undefined8 FUN_14754c330(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c350 FUN_14754c350 body=93 status=ok
// SIG undefined FUN_14754c350(void)

void FUN_14754c350(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754c3be FUN_14754c3be body=31 status=ok
// SIG undefined FUN_14754c3be(void)

undefined8 FUN_14754c3be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c3de FUN_14754c3de body=29 status=ok
// SIG undefined FUN_14754c3de(void)

undefined8 FUN_14754c3de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c462 FUN_14754c462 body=31 status=ok
// SIG undefined FUN_14754c462(void)

undefined8 FUN_14754c462(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c482 FUN_14754c482 body=291 status=ok
// SIG undefined FUN_14754c482(void)

void FUN_14754c482(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c4c1;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754c4c1:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c504;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754c504:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754c58e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754c5a6 FUN_14754c5a6 body=29 status=ok
// SIG undefined FUN_14754c5a6(void)

undefined8 FUN_14754c5a6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c5dc FUN_14754c5dc body=57 status=ok
// SIG undefined FUN_14754c5dc(void)

void FUN_14754c5dc(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_147545218(param_2,param_3);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754c69c FUN_14754c69c body=59 status=ok
// SIG undefined FUN_14754c69c(void)

void FUN_14754c69c(longlong param_1,int param_2)

{
  short *psVar1;
  
  if (param_2 != 0) {
    psVar1 = (short *)(param_1 + 0xe);
    do {
      if (*psVar1 != 7) {
        if (*(longlong *)(psVar1 + -7) != 0) {
          thunk_FUN_1400020a8();
        }
        *psVar1 = 7;
      }
      psVar1 = psVar1 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14754c6da FUN_14754c6da body=29 status=ok
// SIG undefined FUN_14754c6da(void)

undefined8 FUN_14754c6da(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c6f8 FUN_14754c6f8 body=309 status=ok
// SIG undefined FUN_14754c6f8(void)

void FUN_14754c6f8(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c739;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14754c739:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c77c;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754c77c:
  lVar4 = *plVar5;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = (longlong)(int)param_2[1] * 0x10 + *plVar7;
    lVar6 = 0;
    do {
      FUN_147545218(lVar3,(longlong)*(int *)(*param_4 + lVar6 * 4) * 0x10 + lVar4);
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754c814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754c82e FUN_14754c82e body=29 status=ok
// SIG undefined FUN_14754c82e(void)

undefined8 FUN_14754c82e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c84e FUN_14754c84e body=93 status=ok
// SIG undefined FUN_14754c84e(void)

void FUN_14754c84e(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754c8be FUN_14754c8be body=31 status=ok
// SIG undefined FUN_14754c8be(void)

undefined8 FUN_14754c8be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c8de FUN_14754c8de body=29 status=ok
// SIG undefined FUN_14754c8de(void)

undefined8 FUN_14754c8de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c960 FUN_14754c960 body=31 status=ok
// SIG undefined FUN_14754c960(void)

undefined8 FUN_14754c960(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754c980 FUN_14754c980 body=290 status=ok
// SIG undefined FUN_14754c980(void)

void FUN_14754c980(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754c9bf;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754c9bf:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ca02;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754ca02:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)(int)lVar3 * 4 + lVar4 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ca8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754caa2 FUN_14754caa2 body=29 status=ok
// SIG undefined FUN_14754caa2(void)

undefined8 FUN_14754caa2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cb14 FUN_14754cb14 body=29 status=ok
// SIG undefined FUN_14754cb14(void)

undefined8 FUN_14754cb14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cb32 FUN_14754cb32 body=290 status=ok
// SIG undefined FUN_14754cb32(void)

void FUN_14754cb32(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754cb71;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754cb71:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754cbb4;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754cbb4:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined4 *)((longlong)(int)lVar3 * 4 + lVar4 + lVar6 * 4) =
           *(undefined4 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 4);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754cc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754cc54 FUN_14754cc54 body=29 status=ok
// SIG undefined FUN_14754cc54(void)

undefined8 FUN_14754cc54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754ccd8 FUN_14754ccd8 body=31 status=ok
// SIG undefined FUN_14754ccd8(void)

undefined8 FUN_14754ccd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754ccf8 FUN_14754ccf8 body=29 status=ok
// SIG undefined FUN_14754ccf8(void)

undefined8 FUN_14754ccf8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cd70 FUN_14754cd70 body=29 status=ok
// SIG undefined FUN_14754cd70(void)

undefined8 FUN_14754cd70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cd8e FUN_14754cd8e body=291 status=ok
// SIG undefined FUN_14754cd8e(void)

void FUN_14754cd8e(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754cdcd;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754cdcd:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754ce10;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754ce10:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ce9a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754ceb2 FUN_14754ceb2 body=29 status=ok
// SIG undefined FUN_14754ceb2(void)

undefined8 FUN_14754ceb2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cf28 FUN_14754cf28 body=29 status=ok
// SIG undefined FUN_14754cf28(void)

undefined8 FUN_14754cf28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754cf46 FUN_14754cf46 body=291 status=ok
// SIG undefined FUN_14754cf46(void)

void FUN_14754cf46(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754cf85;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754cf85:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754cfc8;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754cfc8:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined2 *)((longlong)(int)lVar3 * 2 + lVar4 + lVar6 * 2) =
           *(undefined2 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 2);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754d052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754d06a FUN_14754d06a body=29 status=ok
// SIG undefined FUN_14754d06a(void)

undefined8 FUN_14754d06a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d09a FUN_14754d09a body=121 status=ok
// SIG undefined FUN_14754d09a(void)

void FUN_14754d09a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  
  if (0 < param_4) {
    uVar6 = param_4 + 1;
    lVar7 = 0;
    do {
      uVar3 = *(undefined8 *)(param_3 + lVar7);
      lVar4 = *(longlong *)(param_3 + 8 + lVar7);
      if (lVar4 != 0) {
        LOCK();
        *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
        UNLOCK();
      }
      plVar5 = *(longlong **)(param_2 + 8 + lVar7);
      *(undefined8 *)(param_2 + lVar7) = uVar3;
      *(longlong *)(param_2 + 8 + lVar7) = lVar4;
      if (plVar5 != (longlong *)0x0) {
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
      lVar7 = lVar7 + 0x10;
      uVar6 = uVar6 - 1;
    } while (1 < uVar6);
  }
  return;
}



// FUNCTION 14754d126 FUN_14754d126 body=29 status=ok
// SIG undefined FUN_14754d126(void)

undefined8 FUN_14754d126(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d144 FUN_14754d144 body=371 status=ok
// SIG undefined FUN_14754d144(void)

void FUN_14754d144(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong *plVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d184;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14754d184:
  iVar3 = *(int *)(param_3 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar7 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d1c8;
      plVar10 = plVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14754d1c8:
  lVar8 = *plVar11;
  iVar4 = *(int *)(lVar7 + 0x14);
  if (iVar4 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    plVar12 = (longlong *)((longlong)(int)param_2[1] * 0x10 + *plVar10 + 8);
    lVar7 = 0;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x10;
      lVar5 = *(longlong *)(lVar8 + lVar9);
      lVar9 = *(longlong *)(lVar8 + 8 + lVar9);
      if (lVar9 != 0) {
        LOCK();
        *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
        UNLOCK();
      }
      plVar6 = (longlong *)*plVar12;
      plVar12[-1] = lVar5;
      *plVar12 = lVar9;
      if (plVar6 != (longlong *)0x0) {
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
      lVar7 = lVar7 + 1;
      plVar12 = plVar12 + 2;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar4 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754d29e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754d2b8 FUN_14754d2b8 body=29 status=ok
// SIG undefined FUN_14754d2b8(void)

undefined8 FUN_14754d2b8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d332 FUN_14754d332 body=31 status=ok
// SIG undefined FUN_14754d332(void)

undefined8 FUN_14754d332(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d352 FUN_14754d352 body=29 status=ok
// SIG undefined FUN_14754d352(void)

undefined8 FUN_14754d352(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d3cc FUN_14754d3cc body=31 status=ok
// SIG undefined FUN_14754d3cc(void)

undefined8 FUN_14754d3cc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d3ec FUN_14754d3ec body=286 status=ok
// SIG undefined FUN_14754d3ec(void)

void FUN_14754d3ec(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d42b;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754d42b:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d46e;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754d46e:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754d4f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754d50a FUN_14754d50a body=29 status=ok
// SIG undefined FUN_14754d50a(void)

undefined8 FUN_14754d50a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d546 FUN_14754d546 body=57 status=ok
// SIG undefined FUN_14754d546(void)

void FUN_14754d546(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_144a787a6(param_2,param_3);
      uVar1 = uVar1 - 1;
      param_2 = param_2 + 0x10;
      param_3 = param_3 + 0x10;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754d580 FUN_14754d580 body=111 status=ok
// SIG undefined FUN_14754d580(void)

void FUN_14754d580(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  uint uVar1;
  longlong lVar2;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    lVar2 = 0;
    do {
      *(undefined8 *)(param_2 + lVar2) = 0;
      *(undefined8 *)(param_2 + lVar2) = *(undefined8 *)(param_3 + lVar2);
      *(undefined8 *)(param_3 + lVar2) = 0;
      *(undefined4 *)(param_2 + 8 + lVar2) = *(undefined4 *)(param_3 + 8 + lVar2);
      *(undefined4 *)(param_2 + 0xc + lVar2) = *(undefined4 *)(param_3 + 0xc + lVar2);
      *(undefined8 *)(param_3 + 8 + lVar2) = 0;
      if (*(longlong *)(param_3 + lVar2) != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754d602 FUN_14754d602 body=31 status=ok
// SIG undefined FUN_14754d602(void)

undefined8 FUN_14754d602(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d622 FUN_14754d622 body=309 status=ok
// SIG undefined FUN_14754d622(void)

void FUN_14754d622(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar5 = *(longlong **)(param_3 + 0x28);
    lVar3 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar5 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d663;
      plVar5 = plVar5 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  plVar5 = (longlong *)0x0;
LAB_14754d663:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar5 + 1));
  }
  LOCK();
  *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
  UNLOCK();
  lVar3 = *param_2;
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    plVar7 = *(longlong **)(lVar3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754d6a6;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754d6a6:
  lVar4 = *plVar5;
  iVar2 = *(int *)(lVar3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = (longlong)(int)param_2[1] * 0x10 + *plVar7;
    lVar6 = 0;
    do {
      FUN_144a787a6(lVar3,(longlong)*(int *)(*param_4 + lVar6 * 4) * 0x10 + lVar4);
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar7 + 1));
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 3) = (int)plVar5[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754d73e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar5 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754d758 FUN_14754d758 body=29 status=ok
// SIG undefined FUN_14754d758(void)

undefined8 FUN_14754d758(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d778 FUN_14754d778 body=103 status=ok
// SIG undefined FUN_14754d778(void)

void FUN_14754d778(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      *(undefined8 *)(param_2 + 8 + lVar4) = *(undefined8 *)(param_3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754d7f0 FUN_14754d7f0 body=31 status=ok
// SIG undefined FUN_14754d7f0(void)

undefined8 FUN_14754d7f0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d810 FUN_14754d810 body=29 status=ok
// SIG undefined FUN_14754d810(void)

undefined8 FUN_14754d810(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754d830 FUN_14754d830 body=103 status=ok
// SIG undefined FUN_14754d830(void)

void FUN_14754d830(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      *(undefined4 *)(param_2 + 8 + lVar4) = *(undefined4 *)(param_3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754d898 FUN_14754d898 body=99 status=ok
// SIG undefined FUN_14754d898(void)

void FUN_14754d898(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      *(undefined4 *)(param_2 + 8 + lVar4) = *(undefined4 *)(param_3 + 8 + lVar4);
      lVar4 = lVar4 + 0x10;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754d90c FUN_14754d90c body=53 status=ok
// SIG undefined FUN_14754d90c(void)

void FUN_14754d90c(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14754d941(param_2,param_3);
      param_3 = param_3 + 0x10;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754d941 FUN_14754d941 body=281 status=ok
// SIG undefined FUN_14754d941(void)

void FUN_14754d941(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab2618 == 0) {
    uVar2 = FUN_140bd662f();
    DAT_14cab2618 = FUN_140002ddd(FUN_14633be39,uVar2,L"TrackInstanceInputComponent");
  }
  lVar1 = DAT_14cab2618;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754da5c FUN_14754da5c body=29 status=ok
// SIG undefined FUN_14754da5c(void)

undefined8 FUN_14754da5c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754da7a FUN_14754da7a body=360 status=ok
// SIG undefined FUN_14754da7a(void)

void FUN_14754da7a(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined4 *puVar10;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar9 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar9 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754daba;
      plVar9 = plVar9 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar9 = (longlong *)0x0;
LAB_14754daba:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar9 + 1));
  }
  LOCK();
  *(int *)(plVar9 + 3) = (int)plVar9[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754dafe;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754dafe:
  lVar6 = *plVar9;
  iVar3 = *(int *)(lVar5 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar10 = (undefined4 *)((longlong)(int)param_2[1] * 0x10 + *plVar8 + 8);
    lVar5 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar7 = (longlong)*(int *)(*param_4 + lVar5 * 4) * 0x10;
      plVar1 = (longlong *)(lVar6 + lVar7);
      lVar7 = *(longlong *)(lVar6 + lVar7);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *plVar1;
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)(puVar10 + -2) = lVar7;
      *puVar10 = (int)plVar1[1];
      lVar5 = lVar5 + 1;
      puVar10 = puVar10 + 4;
    } while (lVar5 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar9 + 3) = (int)plVar9[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754dbc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar9 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754dbe2 FUN_14754dbe2 body=29 status=ok
// SIG undefined FUN_14754dbe2(void)

undefined8 FUN_14754dbe2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754dc02 FUN_14754dc02 body=115 status=ok
// SIG undefined FUN_14754dc02(void)

void FUN_14754dc02(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  
  if (0 < param_4) {
    uVar8 = param_4 + 1;
    lVar9 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar7 = *(longlong *)(param_3 + lVar9);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar9);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar9);
      *plVar1 = lVar7;
      plVar1[1] = *(longlong *)(param_3 + 8 + lVar9);
      puVar2 = (undefined4 *)(param_3 + 0x10 + lVar9);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 2) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar3;
      *(undefined4 *)(plVar1 + 3) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar5;
      lVar9 = lVar9 + 0x20;
      uVar8 = uVar8 - 1;
    } while (1 < uVar8);
  }
  return;
}



// FUNCTION 14754dc76 FUN_14754dc76 body=113 status=ok
// SIG undefined FUN_14754dc76(void)

void FUN_14754dc76(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  
  if (0 < param_4) {
    uVar7 = param_4 + 1;
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar8);
      *(longlong *)(param_2 + lVar8) = lVar2;
      if ((lVar2 != 0 & bVar6) == 1) {
        FUN_1456cec3c();
        bVar6 = DAT_14c950c29;
      }
      lVar2 = param_3 + lVar8;
      lVar1 = param_2 + lVar8;
      *(undefined8 *)(lVar1 + 8) = *(undefined8 *)(lVar2 + 8);
      uVar3 = *(undefined4 *)(lVar2 + 0x14);
      uVar4 = *(undefined4 *)(lVar2 + 0x18);
      uVar5 = *(undefined4 *)(lVar2 + 0x1c);
      *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar2 + 0x10);
      *(undefined4 *)(lVar1 + 0x14) = uVar3;
      *(undefined4 *)(lVar1 + 0x18) = uVar4;
      *(undefined4 *)(lVar1 + 0x1c) = uVar5;
      lVar8 = lVar8 + 0x20;
      uVar7 = uVar7 - 1;
    } while (1 < uVar7);
  }
  return;
}



// FUNCTION 14754dcf8 FUN_14754dcf8 body=53 status=ok
// SIG undefined FUN_14754dcf8(void)

void FUN_14754dcf8(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      FUN_14754dd2d(param_2,param_3);
      param_3 = param_3 + 0x20;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754dd2d FUN_14754dd2d body=281 status=ok
// SIG undefined FUN_14754dd2d(void)

void FUN_14754dd2d(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_788 [32];
  undefined1 local_768;
  undefined4 local_760;
  undefined1 local_750 [1792];
  undefined1 *local_50;
  uint local_48;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_788;
  if (DAT_14cab2600 == 0) {
    uVar2 = FUN_140bd662f();
    DAT_14cab2600 = FUN_140002ddd(FUN_14633bda3,uVar2,L"MovieSceneEvaluationHookComponent");
  }
  lVar1 = DAT_14cab2600;
  uVar2 = FUN_144a810c6();
  local_760 = 2;
  local_768 = 1;
  FUN_140021b28(local_750,uVar2,lVar1,param_2);
  while (0 < (int)local_48) {
    puVar3 = local_50;
    if (local_50 == (undefined1 *)0x0) {
      puVar3 = local_750;
    }
    puVar4 = *(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18);
    if (*(undefined1 **)(puVar3 + (ulonglong)local_48 * 0xe0 + -0x18) == (undefined1 *)0x0) {
      puVar4 = puVar3 + (ulonglong)local_48 * 0xe0 + -0xd8;
    }
    (**(code **)(*param_1 + 0x88))
              (param_1,*(undefined8 *)
                        (puVar4 + (longlong)*(int *)(puVar3 + (ulonglong)local_48 * 0xe0 + -8) *
                                  0x18 + 8),0,0);
    FUN_140caedf2(local_750);
  }
  FUN_140021a7a(local_750);
  if ((local_28 ^ (ulonglong)auStack_788) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754de48 FUN_14754de48 body=29 status=ok
// SIG undefined FUN_14754de48(void)

undefined8 FUN_14754de48(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754de66 FUN_14754de66 body=370 status=ok
// SIG undefined FUN_14754de66(void)

void FUN_14754de66(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar11 = *(longlong **)(param_3 + 0x28);
    lVar7 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar11 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754dea6;
      plVar11 = plVar11 + 4;
      lVar7 = lVar7 + -0x20;
    } while (lVar7 != 0);
  }
  plVar11 = (longlong *)0x0;
LAB_14754dea6:
  iVar2 = *(int *)(param_3 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar11 + 1));
  }
  LOCK();
  *(int *)(plVar11 + 3) = (int)plVar11[3] + 1;
  UNLOCK();
  lVar7 = *param_2;
  if (*(ushort *)(lVar7 + 0xc) != 0) {
    plVar10 = *(longlong **)(lVar7 + 0x28);
    lVar8 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754deea;
      plVar10 = plVar10 + 4;
      lVar8 = lVar8 + -0x20;
    } while (lVar8 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14754deea:
  lVar8 = *plVar11;
  iVar3 = *(int *)(lVar7 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    puVar12 = (undefined4 *)((longlong)(int)param_2[1] * 0x20 + *plVar10 + 0x10);
    lVar7 = 0;
    bVar6 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar7 * 4) * 0x20;
      plVar1 = (longlong *)(lVar8 + lVar9);
      lVar9 = *(longlong *)(lVar8 + lVar9);
      if ((bVar6 & 1) != 0) {
        if (lVar9 == 0) {
          lVar9 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar9 = *plVar1;
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(puVar12 + -4) = lVar9;
      *(longlong *)(puVar12 + -2) = plVar1[1];
      uVar4 = *(undefined4 *)((longlong)plVar1 + 0x14);
      lVar9 = plVar1[3];
      uVar5 = *(undefined4 *)((longlong)plVar1 + 0x1c);
      *puVar12 = (int)plVar1[2];
      puVar12[1] = uVar4;
      puVar12[2] = (int)lVar9;
      puVar12[3] = uVar5;
      lVar7 = lVar7 + 1;
      puVar12 = puVar12 + 8;
    } while (lVar7 < (int)param_4[1]);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar3 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar10 + 1));
    }
  }
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar11 + 3) = (int)plVar11[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754dfbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar11 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754dfd8 FUN_14754dfd8 body=29 status=ok
// SIG undefined FUN_14754dfd8(void)

undefined8 FUN_14754dfd8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e046 FUN_14754e046 body=29 status=ok
// SIG undefined FUN_14754e046(void)

undefined8 FUN_14754e046(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e064 FUN_14754e064 body=286 status=ok
// SIG undefined FUN_14754e064(void)

void FUN_14754e064(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e0a3;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754e0a3:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e0e6;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754e0e6:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754e16b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754e182 FUN_14754e182 body=29 status=ok
// SIG undefined FUN_14754e182(void)

undefined8 FUN_14754e182(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e1b4 FUN_14754e1b4 body=93 status=ok
// SIG undefined FUN_14754e1b4(void)

void FUN_14754e1b4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + lVar4);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + lVar4);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar4) = lVar2;
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754e212 FUN_14754e212 body=91 status=ok
// SIG undefined FUN_14754e212(void)

void FUN_14754e212(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  
  if (0 < param_4) {
    uVar3 = param_4 + 1;
    lVar4 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_3 + lVar4);
      *(longlong *)(param_2 + lVar4) = lVar1;
      if ((lVar1 != 0 & bVar2) == 1) {
        FUN_1456cec3c();
        bVar2 = DAT_14c950c29;
      }
      lVar4 = lVar4 + 8;
      uVar3 = uVar3 - 1;
    } while (1 < uVar3);
  }
  return;
}



// FUNCTION 14754e27e FUN_14754e27e body=63 status=ok
// SIG undefined FUN_14754e27e(void)

void FUN_14754e27e(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  
  if (0 < param_4) {
    uVar1 = param_4 + 1;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,param_3,0,0);
      param_3 = param_3 + 8;
      uVar1 = uVar1 - 1;
    } while (1 < uVar1);
  }
  return;
}



// FUNCTION 14754e2be FUN_14754e2be body=29 status=ok
// SIG undefined FUN_14754e2be(void)

undefined8 FUN_14754e2be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e2dc FUN_14754e2dc body=334 status=ok
// SIG undefined FUN_14754e2dc(void)

void FUN_14754e2dc(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar10 = *(longlong **)(param_3 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar10 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e31c;
      plVar10 = plVar10 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar10 = (longlong *)0x0;
LAB_14754e31c:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar10 + 1));
  }
  LOCK();
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  UNLOCK();
  lVar5 = *param_2;
  if (*(ushort *)(lVar5 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar5 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar5 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e360;
      plVar8 = plVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754e360:
  lVar6 = *plVar10;
  iVar2 = *(int *)(lVar5 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar5 = *plVar8;
    lVar11 = 0;
    bVar4 = DAT_14c950c29;
    do {
      lVar9 = (longlong)*(int *)(*param_4 + lVar11 * 4);
      lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
      if ((bVar4 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(lVar6 + lVar9 * 8);
          bVar4 = DAT_14c950c29;
        }
      }
      *(longlong *)((longlong)(int)lVar3 * 8 + lVar5 + lVar11 * 8) = lVar7;
      lVar11 = lVar11 + 1;
    } while (lVar11 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 3) = (int)plVar10[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754e411. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar10 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754e42a FUN_14754e42a body=29 status=ok
// SIG undefined FUN_14754e42a(void)

undefined8 FUN_14754e42a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e4bc FUN_14754e4bc body=29 status=ok
// SIG undefined FUN_14754e4bc(void)

undefined8 FUN_14754e4bc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e4da FUN_14754e4da body=291 status=ok
// SIG undefined FUN_14754e4da(void)

void FUN_14754e4da(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e519;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754e519:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e55c;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754e55c:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754e5e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754e5fe FUN_14754e5fe body=29 status=ok
// SIG undefined FUN_14754e5fe(void)

undefined8 FUN_14754e5fe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e690 FUN_14754e690 body=29 status=ok
// SIG undefined FUN_14754e690(void)

undefined8 FUN_14754e690(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e6ae FUN_14754e6ae body=291 status=ok
// SIG undefined FUN_14754e6ae(void)

void FUN_14754e6ae(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e6ed;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754e6ed:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e730;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754e730:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined8 *)((longlong)(int)lVar3 * 8 + lVar4 + lVar6 * 8) =
           *(undefined8 *)(lVar5 + (longlong)*(int *)(*param_4 + lVar6 * 4) * 8);
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754e7ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754e7d2 FUN_14754e7d2 body=29 status=ok
// SIG undefined FUN_14754e7d2(void)

undefined8 FUN_14754e7d2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e85c FUN_14754e85c body=31 status=ok
// SIG undefined FUN_14754e85c(void)

undefined8 FUN_14754e85c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e87c FUN_14754e87c body=286 status=ok
// SIG undefined FUN_14754e87c(void)

void FUN_14754e87c(longlong param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  
  if (*(ushort *)(param_3 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_3 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e8bb;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_14754e8bb:
  iVar1 = *(int *)(param_3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  lVar4 = *param_2;
  if (*(ushort *)(lVar4 + 0xc) != 0) {
    plVar8 = *(longlong **)(lVar4 + 0x28);
    lVar5 = (ulonglong)*(ushort *)(lVar4 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == *(short *)(param_1 + 8)) goto LAB_14754e8fe;
      plVar8 = plVar8 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_14754e8fe:
  lVar5 = *plVar7;
  iVar2 = *(int *)(lVar4 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (0 < (int)param_4[1]) {
    lVar3 = param_2[1];
    lVar4 = *plVar8;
    lVar6 = 0;
    do {
      *(undefined1 *)((int)lVar3 + lVar4 + lVar6) =
           *(undefined1 *)(lVar5 + *(int *)(*param_4 + lVar6 * 4));
      lVar6 = lVar6 + 1;
    } while (lVar6 < (int)param_4[1]);
  }
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 3) = (int)plVar8[3] + -1;
    UNLOCK();
    if (iVar2 == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
    }
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar7 + 3) = (int)plVar7[3] + -1;
    UNLOCK();
    if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754e983. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(plVar7 + 1));
      return;
    }
  }
  return;
}



// FUNCTION 14754e99a FUN_14754e99a body=31 status=ok
// SIG undefined FUN_14754e99a(void)

undefined8 FUN_14754e99a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754e9ba FUN_14754e9ba body=114 status=ok
// SIG undefined FUN_14754e9ba(void)

void FUN_14754e9ba(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14754ea2c FUN_14754ea2c body=79 status=ok
// SIG undefined FUN_14754ea2c(void)

undefined8 * FUN_14754ea2c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a473c50;
  if (*(char *)(param_1 + 8) == '\x01') {
    *(undefined1 *)(param_1 + 8) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x2e) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x2e) = 0;
  }
  if (*(char *)((longlong)param_1 + 0x24) == '\x01') {
    *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  }
  if (*(char *)(param_1 + 3) == '\x01') {
    *(undefined1 *)(param_1 + 3) = 0;
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754ea8c FUN_14754ea8c body=167 status=ok
// SIG undefined FUN_14754ea8c(void)

void FUN_14754ea8c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 8);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754eb34 FUN_14754eb34 body=153 status=ok
// SIG undefined FUN_14754eb34(void)

void FUN_14754eb34(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ebbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14754ebce FUN_14754ebce body=198 status=ok
// SIG undefined FUN_14754ebce(void)

void FUN_14754ebce(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  ulonglong *local_40;
  undefined2 local_32;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_32 = *(undefined2 *)(param_1 + 2);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 4);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 6);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  local_32 = *(undefined2 *)(param_1 + 8);
  local_48 = &local_32;
  local_40 = &local_30;
  FUN_1447c44f6(param_2,&local_48);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754ec96 FUN_14754ec96 body=153 status=ok
// SIG undefined FUN_14754ec96(void)

void FUN_14754ec96(longlong param_1)

{
  int *piVar1;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x50) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x58) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x50) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x38) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x40) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x38) + 8));
    }
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x28) == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 0x20) + 8));
    }
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*(int *)(param_1 + 0x10) == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014754ed21. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*(longlong *)(param_1 + 8) + 8));
      return;
    }
  }
  return;
}



// FUNCTION 14754ed30 FUN_14754ed30 body=128 status=ok
// SIG undefined FUN_14754ed30(void)

void FUN_14754ed30(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cab2678;
  if (DAT_14cab26ac != 0) {
    *(int *)(DAT_14cab2678 + (longlong)DAT_14cab26a8 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cab26ac) {
    iVar4 = DAT_14cab26a8;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14cab26ac = DAT_14cab26ac + 1;
  puVar3 = &DAT_14cab2688;
  if (DAT_14cab2698 != (undefined *)0x0) {
    puVar3 = DAT_14cab2698;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cab26a8 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14754edb0 FUN_14754edb0 body=783 status=ok
// SIG undefined FUN_14754edb0(void)

void FUN_14754edb0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined1 auStack_388 [32];
  longlong local_368;
  longlong local_360;
  undefined4 local_358 [188];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (1 < (int)param_2) {
    memset(local_358,0,0x2f0);
    local_360 = (ulonglong)param_2 * 0x20 + param_1 + -0x20;
    local_368 = param_1;
    fVar22 = logf((float)(int)param_2);
    local_358[0] = (int)(longlong)(fVar22 + fVar22);
    plVar15 = &local_368;
    do {
      puVar9 = (undefined8 *)*plVar15;
      puVar16 = (undefined8 *)plVar15[1];
      iVar18 = (int)plVar15[2];
      iVar11 = (int)((ulonglong)((longlong)puVar16 - (longlong)puVar9) >> 5);
      puVar19 = puVar16;
      puVar20 = puVar9;
      if (iVar18 != 0) {
LAB_14754ee74:
        if (8 < (int)(iVar11 + 1U)) {
          uVar12 = (ulonglong)(iVar11 + 1U >> 1);
          uVar1 = puVar9[uVar12 * 4];
          uVar2 = (puVar9 + uVar12 * 4)[1];
          uVar3 = puVar9[uVar12 * 4 + 2];
          uVar4 = (puVar9 + uVar12 * 4 + 2)[1];
          uVar5 = *puVar9;
          uVar6 = puVar9[1];
          uVar7 = puVar9[3];
          puVar9[uVar12 * 4 + 2] = puVar9[2];
          (puVar9 + uVar12 * 4 + 2)[1] = uVar7;
          puVar9[uVar12 * 4] = uVar5;
          (puVar9 + uVar12 * 4)[1] = uVar6;
          puVar9[2] = uVar3;
          puVar9[3] = uVar4;
          *puVar9 = uVar1;
          puVar9[1] = uVar2;
          puVar13 = puVar16 + 4;
          puVar10 = puVar9;
          do {
            puVar8 = puVar10 + 4;
            puVar17 = puVar10 + 4;
            do {
              puVar10 = puVar17;
              puVar14 = puVar8;
              if (puVar16 < puVar10) break;
              puVar8 = puVar14 + 4;
              puVar17 = puVar10 + 4;
            } while (*(int *)(puVar10 + 3) <= *(int *)(puVar9 + 3));
            puVar8 = puVar13 + -8;
            do {
              puVar17 = puVar13;
              puVar21 = puVar8;
              puVar13 = puVar17 + -4;
              if (puVar13 <= puVar9) break;
              puVar8 = puVar21 + -4;
            } while (*(int *)(puVar9 + 3) <= *(int *)(puVar17 + -1));
            if (puVar13 < puVar10) goto LAB_14754ef5b;
            uVar1 = *puVar10;
            uVar2 = puVar10[1];
            uVar3 = puVar10[2];
            uVar4 = puVar10[3];
            uVar5 = *puVar13;
            uVar6 = puVar17[-3];
            uVar7 = puVar17[-1];
            puVar10[2] = puVar17[-2];
            puVar10[3] = uVar7;
            *puVar10 = uVar5;
            puVar10[1] = uVar6;
            puVar17[-2] = uVar3;
            puVar17[-1] = uVar4;
            *puVar13 = uVar1;
            puVar17[-3] = uVar2;
          } while( true );
        }
        for (; puVar20 = puVar9, puVar19 = puVar9, puVar9 < puVar16; puVar16 = puVar16 + -4) {
          while (puVar13 = puVar20, puVar19 = puVar19 + 4, puVar19 <= puVar16) {
            puVar20 = puVar19;
            if (*(int *)(puVar19 + 3) <= *(int *)(puVar13 + 3)) {
              puVar20 = puVar13;
            }
          }
          local_68 = *puVar13;
          uStack_60 = puVar13[1];
          local_58 = puVar13[2];
          uStack_50 = puVar13[3];
          uVar4 = local_68;
          uVar5 = uStack_60;
          uVar1 = *puVar16;
          uVar2 = puVar16[1];
          uVar3 = puVar16[3];
          puVar13[2] = puVar16[2];
          puVar13[3] = uVar3;
          *puVar13 = uVar1;
          puVar13[1] = uVar2;
          local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
          uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
          puVar16[2] = local_58;
          puVar16[3] = uStack_50;
          *(undefined4 *)puVar16 = (undefined4)local_68;
          *(undefined4 *)((longlong)puVar16 + 4) = local_68._4_4_;
          *(undefined4 *)(puVar16 + 1) = (undefined4)uStack_60;
          *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_60._4_4_;
          local_68 = uVar4;
          uStack_60 = uVar5;
        }
        goto LAB_14754f09e;
      }
LAB_14754f0b3:
      FUN_14754f0c0(puVar9);
LAB_14754f09e:
      plVar15 = plVar15 + -3;
    } while (&local_368 <= plVar15);
  }
  if ((local_40 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_14754ef5b:
  local_68 = *puVar9;
  uStack_60 = puVar9[1];
  local_58 = puVar9[2];
  uStack_50 = puVar9[3];
  uVar4 = local_68;
  uVar5 = uStack_60;
  uVar1 = *puVar13;
  uVar2 = puVar17[-3];
  uVar3 = puVar17[-1];
  puVar9[2] = puVar17[-2];
  puVar9[3] = uVar3;
  *puVar9 = uVar1;
  puVar9[1] = uVar2;
  local_68._4_4_ = (undefined4)((ulonglong)local_68 >> 0x20);
  uStack_60._4_4_ = (undefined4)((ulonglong)uStack_60 >> 0x20);
  puVar17[-2] = local_58;
  puVar17[-1] = uStack_50;
  *(undefined4 *)puVar13 = (undefined4)local_68;
  *(undefined4 *)((longlong)puVar17 + -0x1c) = local_68._4_4_;
  *(undefined4 *)(puVar17 + -3) = (undefined4)uStack_60;
  *(undefined4 *)((longlong)puVar17 + -0x14) = uStack_60._4_4_;
  iVar18 = iVar18 + -1;
  puVar17 = puVar17 + -8;
  local_68 = uVar4;
  uStack_60 = uVar5;
  if ((longlong)puVar21 - (longlong)puVar20 < (longlong)puVar19 - (longlong)puVar14) {
    if (puVar10 < puVar16) {
      *plVar15 = (longlong)puVar10;
      plVar15[1] = (longlong)puVar16;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar14 = puVar9;
    if (puVar13 <= puVar9 + 4) goto LAB_14754f09e;
  }
  else {
    if (puVar9 + 4 < puVar13) {
      *plVar15 = (longlong)puVar9;
      plVar15[1] = (longlong)puVar17;
      *(int *)(plVar15 + 2) = iVar18;
      plVar15 = plVar15 + 3;
    }
    puVar9 = puVar10;
    puVar17 = puVar16;
    puVar21 = puVar16;
    if (puVar16 <= puVar10) goto LAB_14754f09e;
  }
  iVar11 = (int)((ulonglong)((longlong)puVar21 - (longlong)puVar14) >> 5);
  puVar16 = puVar17;
  puVar19 = puVar21;
  puVar20 = puVar14;
  if (iVar18 == 0) goto LAB_14754f0b3;
  goto LAB_14754ee74;
}



// FUNCTION 14754f0c0 FUN_14754f0c0 body=588 status=ok
// SIG undefined FUN_14754f0c0(void)

void FUN_14754f0c0(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined8 *puVar15;
  bool bVar16;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    iVar9 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar14 = iVar9;
joined_r0x00014754f0f4:
    do {
      iVar12 = iVar9 * 2 + 1;
      if (iVar12 < (int)param_2) {
        iVar13 = iVar9 * 2 + 2;
        if ((iVar13 < (int)param_2) &&
           (*(int *)(param_1 + (longlong)iVar12 * 4 + 3) <=
            *(int *)(param_1 + (longlong)iVar13 * 4 + 3))) {
          iVar12 = iVar13;
        }
        if (*(int *)(param_1 + (longlong)iVar9 * 4 + 3) <
            *(int *)(param_1 + (longlong)iVar12 * 4 + 3)) {
          puVar15 = param_1 + (longlong)iVar9 * 4;
          puVar11 = param_1 + (longlong)iVar12 * 4;
          uVar2 = *puVar15;
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          uVar6 = *puVar11;
          uVar7 = puVar11[1];
          uVar8 = puVar11[3];
          puVar15[2] = puVar11[2];
          puVar15[3] = uVar8;
          *puVar15 = uVar6;
          puVar15[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)(puVar11 + 2) = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 0x14) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 3) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0x1c) = uStack_20._4_4_;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          iVar9 = iVar12;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
          goto joined_r0x00014754f0f4;
        }
      }
      bVar16 = iVar14 != 0;
      iVar9 = iVar14 + -1;
      iVar14 = iVar9;
    } while (bVar16);
    if (1 < (int)param_2) {
      uVar10 = (ulonglong)param_2 - 1;
      uVar2 = *param_1;
      uVar3 = param_1[1];
      uVar4 = param_1[2];
      uVar5 = param_1[3];
      uVar6 = param_1[uVar10 * 4];
      uVar7 = (param_1 + uVar10 * 4)[1];
      uVar8 = (param_1 + uVar10 * 4 + 2)[1];
      param_1[2] = param_1[uVar10 * 4 + 2];
      param_1[3] = uVar8;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_38._0_4_ = (undefined4)uVar2;
      local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_30._0_4_ = (undefined4)uVar3;
      uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_28._0_4_ = (undefined4)uVar4;
      local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar5;
      uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar11 = param_1 + uVar10 * 4 + 2;
      *(undefined4 *)puVar11 = (undefined4)local_28;
      *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
      puVar11 = param_1 + uVar10 * 4;
      *(undefined4 *)puVar11 = (undefined4)local_38;
      *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
      *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
      *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
      local_38 = uVar2;
      uStack_30 = uVar3;
      local_28 = uVar4;
      uStack_20 = uVar5;
      if (param_2 != 2) {
        do {
          iVar9 = 0;
          iVar12 = 1;
          iVar14 = 0;
          do {
            iVar9 = iVar9 + 2;
            iVar13 = iVar12;
            if (((longlong)iVar9 < (longlong)uVar10) &&
               (*(int *)(param_1 + (longlong)iVar12 * 4 + 3) <=
                *(int *)(param_1 + (longlong)iVar9 * 4 + 3))) {
              iVar13 = iVar9;
            }
            if (*(int *)(param_1 + (longlong)iVar13 * 4 + 3) <=
                *(int *)(param_1 + (longlong)iVar14 * 4 + 3)) break;
            puVar15 = param_1 + (longlong)iVar14 * 4;
            puVar11 = param_1 + (longlong)iVar13 * 4;
            uVar2 = *puVar15;
            uVar3 = puVar15[1];
            uVar4 = puVar15[2];
            uVar5 = puVar15[3];
            uVar6 = *puVar11;
            uVar7 = puVar11[1];
            uVar8 = puVar11[3];
            puVar15[2] = puVar11[2];
            puVar15[3] = uVar8;
            *puVar15 = uVar6;
            puVar15[1] = uVar7;
            puVar11[2] = uVar4;
            puVar11[3] = uVar5;
            *puVar11 = uVar2;
            puVar11[1] = uVar3;
            iVar9 = iVar13 * 2;
            iVar12 = iVar13 * 2 + 1;
            iVar14 = iVar13;
          } while ((longlong)iVar12 < (longlong)uVar10);
          uVar1 = uVar10 - 1;
          uVar2 = *param_1;
          uVar3 = param_1[1];
          uVar4 = param_1[2];
          uVar5 = param_1[3];
          uVar6 = param_1[uVar1 * 4];
          uVar7 = (param_1 + uVar1 * 4)[1];
          uVar8 = (param_1 + uVar1 * 4 + 2)[1];
          param_1[2] = param_1[uVar1 * 4 + 2];
          param_1[3] = uVar8;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_38._0_4_ = (undefined4)uVar2;
          local_38._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_30._0_4_ = (undefined4)uVar3;
          uStack_30._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_28._0_4_ = (undefined4)uVar4;
          local_28._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_20._0_4_ = (undefined4)uVar5;
          uStack_20._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar11 = param_1 + uVar1 * 4 + 2;
          *(undefined4 *)puVar11 = (undefined4)local_28;
          *(undefined4 *)((longlong)puVar11 + 4) = local_28._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_20;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_20._4_4_;
          puVar11 = param_1 + uVar1 * 4;
          *(undefined4 *)puVar11 = (undefined4)local_38;
          *(undefined4 *)((longlong)puVar11 + 4) = local_38._4_4_;
          *(undefined4 *)(puVar11 + 1) = (undefined4)uStack_30;
          *(undefined4 *)((longlong)puVar11 + 0xc) = uStack_30._4_4_;
          bVar16 = 2 < uVar10;
          uVar10 = uVar1;
          local_38 = uVar2;
          uStack_30 = uVar3;
          local_28 = uVar4;
          uStack_20 = uVar5;
        } while (bVar16);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14754f30e FUN_14754f30e body=116 status=ok
// SIG undefined FUN_14754f30e(void)

void FUN_14754f30e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x68 + 4) = uVar5;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14754f382 FUN_14754f382 body=100 status=ok
// SIG undefined FUN_14754f382(void)

longlong * FUN_14754f382(longlong *param_1,longlong *param_2,int param_3)

{
  int *piVar1;
  
  *param_1 = 0;
  param_1[2] = 0;
  if (param_3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(param_2 + 1));
  }
  LOCK();
  *(int *)(param_2 + 3) = (int)param_2[3] + 1;
  UNLOCK();
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
    }
  }
  *param_1 = (longlong)param_2;
  *(int *)(param_1 + 1) = param_3;
  param_1[2] = *param_2;
  return param_1;
}



// FUNCTION 14754f3e6 FUN_14754f3e6 body=114 status=ok
// SIG undefined FUN_14754f3e6(void)

void FUN_14754f3e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14754f458 FUN_14754f458 body=146 status=ok
// SIG undefined FUN_14754f458(void)

void FUN_14754f458(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754f4ec FUN_14754f4ec body=67 status=ok
// SIG undefined FUN_14754f4ec(void)

void FUN_14754f4ec(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_140a1b85a(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_140ade424(param_1);
    return;
  }
  FUN_14754f530(param_1);
  FUN_140a1b85a(param_1,0);
  return;
}



// FUNCTION 14754f530 FUN_14754f530 body=322 status=ok
// SIG undefined FUN_14754f530(void)

void FUN_14754f530(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 14754f674 FUN_14754f674 body=147 status=ok
// SIG undefined FUN_14754f674(void)

void FUN_14754f674(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc)) {
      uVar5 = uVar4 / 0xc & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14754f708 FUN_14754f708 body=114 status=ok
// SIG undefined FUN_14754f708(void)

void FUN_14754f708(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x14) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x14);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 14754f77a FUN_14754f77a body=413 status=ok
// SIG undefined FUN_14754f77a(void)

void FUN_14754f77a(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_14472eb64(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_144869a3c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x10 + lVar2 + -0xc);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -4;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 14754f918 FUN_14754f918 body=299 status=ok
// SIG undefined FUN_14754f918(void)

undefined4 * FUN_14754f918(longlong param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14055bba2(param_1,local_48);
  local_40[4] = param_3[4];
  uVar5 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = param_3[3];
  *local_40 = *param_3;
  local_40[1] = uVar5;
  local_40[2] = uVar4;
  local_40[3] = uVar1;
  local_40[5] = 0xffffffff;
  local_4c = local_48[0];
  uVar5 = local_40[1] ^ *local_40 ^ local_40[2];
  local_58 = 0;
  cVar2 = FUN_14055b156(param_1,uVar5,local_40);
  if (cVar2 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[6] = uVar5;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[5] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14055bd90(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754fa44 FUN_14754fa44 body=293 status=ok
// SIG undefined FUN_14754fa44(void)

undefined4 * FUN_14754fa44(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14078dfac(param_1,local_48);
  puVar1 = (undefined1 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  *(undefined1 *)(local_40 + 1) = *puVar1;
  local_40[2] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_14078df14(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar5) {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[3] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[2] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14078e188(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14754fb6a FUN_14754fb6a body=94 status=ok
// SIG undefined FUN_14754fb6a(void)

void FUN_14754fb6a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 2,2);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 1)) {
      uVar2 = uVar1 >> 1 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,2,2);
  }
  return;
}



// FUNCTION 14754fbc8 FUN_14754fbc8 body=59 status=ok
// SIG undefined FUN_14754fbc8(void)

void FUN_14754fbc8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14754fc04(param_1,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  if (iVar1 == *(int *)(param_1 + 0x2c)) {
    return;
  }
  *(int *)(param_1 + 0x2c) = iVar1;
  FUN_14009fed2(param_1,*(undefined4 *)(param_1 + 0x28),iVar1,2);
  return;
}



// FUNCTION 14754fc04 FUN_14754fc04 body=103 status=ok
// SIG undefined FUN_14754fc04(void)

ulonglong FUN_14754fc04(undefined8 param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  int iVar2;
  
  uVar1 = 0x10;
  if (0x10 < param_2) {
    iVar2 = param_3 - param_2;
    if (((longlong)iVar2 & 0x7fffffffffffe000U) == 0) {
      if (iVar2 < 0x41 || (int)(param_3 * 2) <= (int)(param_2 * 3)) {
        return (ulonglong)param_3;
      }
    }
    else if (iVar2 < 0x41) {
      return (ulonglong)param_3;
    }
    if ((int)param_2 < 1) {
      uVar1 = (ulonglong)param_2;
    }
    else {
      uVar1 = FUN_144a3809e(param_2 * 2,0);
      uVar1 = uVar1 >> 1;
    }
  }
  return uVar1;
}



// FUNCTION 14754fc6c FUN_14754fc6c body=64 status=ok
// SIG undefined FUN_14754fc6c(void)

void FUN_14754fc6c(void)

{
  if (DAT_14cab28d4 != 0) {
    DAT_14cab28d4 = 0;
    FUN_1446f8d3c(&DAT_14cab28c8,DAT_14cab28d0,0,4,2);
  }
  return;
}



// FUNCTION 14754fcac FUN_14754fcac body=76 status=ok
// SIG undefined FUN_14754fcac(void)

void FUN_14754fcac(longlong param_1,int param_2)

{
  longlong lVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar1 = param_1;
  }
  FUN_14009d440(lVar1,*(undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(int *)(param_1 + 0x4c) == param_2) {
    return;
  }
  FUN_14754fcfa(param_1,param_2);
  return;
}



// FUNCTION 14754fcfa FUN_14754fcfa body=101 status=ok
// SIG undefined FUN_14754fcfa(void)

void FUN_14754fcfa(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 4;
    if (4 < param_2) {
      uVar1 = FUN_144a3809e((longlong)(int)param_2 << 4,0);
      uVar2 = 0x7fffffff;
      if ((int)param_2 <= (int)(uVar1 >> 4)) {
        uVar2 = uVar1 >> 4 & 0xffffffff;
      }
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0x4c)) {
    *(int *)(param_1 + 0x4c) = (int)uVar2;
    FUN_14754fd60(param_1,*(undefined4 *)(param_1 + 0x48),uVar2,0x10);
    return;
  }
  return;
}



// FUNCTION 14754fd60 FUN_14754fd60 body=133 status=ok
// SIG undefined FUN_14754fd60(void)

void FUN_14754fd60(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,param_4);
  return;
}



// FUNCTION 14754fde6 FUN_14754fde6 body=31 status=ok
// SIG undefined FUN_14754fde6(void)

void FUN_14754fde6(longlong param_1)

{
  FUN_14588b8d6(param_1 + 0x60);
  FUN_14009d40c(param_1 + 0x10);
  return;
}



// FUNCTION 14754fe06 FUN_14754fe06 body=29 status=ok
// SIG undefined FUN_14754fe06(void)

undefined8 FUN_14754fe06(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14754fe3e FUN_14754fe3e body=93 status=ok
// SIG undefined FUN_14754fe3e(void)

void FUN_14754fe3e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4756e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14754fe9c FUN_14754fe9c body=93 status=ok
// SIG undefined FUN_14754fe9c(void)

void FUN_14754fe9c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a4756e0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14754fefa FUN_14754fefa body=126 status=ok
// SIG undefined FUN_14754fefa(void)

void FUN_14754fefa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a4756e0;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014754ff69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14754ff78 FUN_14754ff78 body=35 status=ok
// SIG undefined FUN_14754ff78(void)

void FUN_14754ff78(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014754ff97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14754ff9c FUN_14754ff9c body=114 status=ok
// SIG undefined FUN_14754ff9c(void)

void FUN_14754ff9c(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 14755000e FUN_14755000e body=48 status=ok
// SIG undefined FUN_14755000e(void)

void FUN_14755000e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x98,8);
  }
  return;
}



// FUNCTION 14755003e FUN_14755003e body=99 status=ok
// SIG undefined FUN_14755003e(void)

void FUN_14755003e(longlong *param_1,uint param_2)

{
  void *_Dst;
  int iVar1;
  
  _Dst = (void *)(*param_1 + (longlong)(int)param_2 * 0xa0);
  FUN_144adeafa((longlong)(int)param_2 * 0xa0 + *param_1 + 0x10);
  FUN_1449db362(_Dst);
  iVar1 = (int)param_1[1];
  if (~param_2 + iVar1 != 0) {
    memmove(_Dst,(void *)((longlong)_Dst + 0xa0),(longlong)(int)(~param_2 + iVar1) * 0xa0);
    iVar1 = (int)param_1[1];
  }
  *(int *)(param_1 + 1) = iVar1 + -1;
  return;
}



// FUNCTION 1475500a1 FUN_1475500a1 body=681 status=ok
// SIG undefined FUN_1475500a1(void)

void FUN_1475500a1(void *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  void *pvVar6;
  ulonglong uVar7;
  bool bVar8;
  undefined1 auStack_108 [32];
  undefined1 local_e8 [160];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    iVar4 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar1 = iVar4;
joined_r0x0001475500fa:
    do {
      iVar3 = iVar4 * 2 + 1;
      if (iVar3 < (int)param_2) {
        iVar2 = iVar4 * 2 + 2;
        if ((iVar2 < (int)param_2) &&
           (*(int *)((longlong)param_1 + (longlong)iVar3 * 0xa0 + 0x94) <=
            *(int *)((longlong)param_1 + (longlong)iVar2 * 0xa0 + 0x94))) {
          iVar3 = iVar2;
        }
        if (*(int *)((longlong)param_1 + (longlong)iVar4 * 0xa0 + 0x94) <
            *(int *)((longlong)param_1 + (longlong)iVar3 * 0xa0 + 0x94)) {
          pvVar6 = (void *)((longlong)iVar4 * 0xa0 + (longlong)param_1);
          pvVar5 = (void *)((longlong)iVar3 * 0xa0 + (longlong)param_1);
          memcpy(local_e8,pvVar6,0xa0);
          memcpy(pvVar6,pvVar5,0xa0);
          memcpy(pvVar5,local_e8,0xa0);
          iVar4 = iVar3;
          goto joined_r0x0001475500fa;
        }
      }
      bVar8 = iVar1 != 0;
      iVar4 = iVar1 + -1;
      iVar1 = iVar4;
    } while (bVar8);
    if (1 < (int)param_2) {
      pvVar5 = (void *)(((ulonglong)param_2 - 1) * 0xa0 + (longlong)param_1);
      memcpy(local_e8,param_1,0xa0);
      memcpy(param_1,pvVar5,0xa0);
      memcpy(pvVar5,local_e8,0xa0);
      if (param_2 != 2) {
        uVar7 = (ulonglong)param_2 - 1;
        do {
          iVar1 = 0;
          iVar3 = 1;
          iVar4 = 0;
          do {
            iVar1 = iVar1 + 2;
            iVar2 = iVar3;
            if (((longlong)iVar1 < (longlong)uVar7) &&
               (*(int *)((longlong)param_1 + (longlong)iVar3 * 0xa0 + 0x94) <=
                *(int *)((longlong)param_1 + (longlong)iVar1 * 0xa0 + 0x94))) {
              iVar2 = iVar1;
            }
            if (*(int *)((longlong)param_1 + (longlong)iVar2 * 0xa0 + 0x94) <=
                *(int *)((longlong)param_1 + (longlong)iVar4 * 0xa0 + 0x94)) break;
            pvVar6 = (void *)((longlong)iVar4 * 0xa0 + (longlong)param_1);
            pvVar5 = (void *)((longlong)iVar2 * 0xa0 + (longlong)param_1);
            memcpy(local_e8,pvVar6,0xa0);
            memcpy(pvVar6,pvVar5,0xa0);
            memcpy(pvVar5,local_e8,0xa0);
            iVar1 = iVar2 * 2;
            iVar3 = iVar2 * 2 + 1;
            iVar4 = iVar2;
          } while ((longlong)iVar3 < (longlong)uVar7);
          pvVar5 = (void *)((uVar7 - 1) * 0xa0 + (longlong)param_1);
          memcpy(local_e8,param_1,0xa0);
          memcpy(param_1,pvVar5,0xa0);
          memcpy(pvVar5,local_e8,0xa0);
          bVar8 = 2 < uVar7;
          uVar7 = uVar7 - 1;
        } while (bVar8);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755034c FUN_14755034c body=95 status=ok
// SIG undefined FUN_14755034c(void)

void FUN_14755034c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1475503ab FUN_1475503ab body=166 status=ok
// SIG undefined FUN_1475503ab(void)

void FUN_1475503ab(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  param_1 = param_1 + 0x38;
  do {
    *(undefined8 *)(param_1 + -0x38) = 0;
    *(undefined4 *)(param_1 + -0x30) = 0;
    FUN_14009d848(param_1 + -0x38,param_2);
    *(undefined8 *)(param_1 + -8) = *(undefined8 *)(param_2 + 0x30);
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    uVar3 = *(undefined4 *)(param_2 + 0x14);
    uVar4 = *(undefined4 *)(param_2 + 0x18);
    uVar5 = *(undefined4 *)(param_2 + 0x1c);
    uVar6 = *(undefined4 *)(param_2 + 0x24);
    uVar7 = *(undefined4 *)(param_2 + 0x28);
    uVar8 = *(undefined4 *)(param_2 + 0x2c);
    *(undefined4 *)(param_1 + -0x18) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)(param_1 + -0x14) = uVar6;
    *(undefined4 *)(param_1 + -0x10) = uVar7;
    *(undefined4 *)(param_1 + -0xc) = uVar8;
    *(undefined4 *)(param_1 + -0x28) = uVar2;
    *(undefined4 *)(param_1 + -0x24) = uVar3;
    *(undefined4 *)(param_1 + -0x20) = uVar4;
    *(undefined4 *)(param_1 + -0x1c) = uVar5;
    FUN_144a3f8b4(param_1,param_2 + 0x38);
    FUN_144b1f2a6(param_1 + 0x20,param_2 + 0x58);
    uVar1 = *(undefined8 *)(param_2 + 0x85);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x80);
    *(undefined8 *)(param_1 + 0x4d) = uVar1;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x90);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x98);
    param_2 = param_2 + 0xa0;
    param_1 = param_1 + 0xa0;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 147550452 FUN_147550452 body=29 status=ok
// SIG undefined FUN_147550452(void)

undefined8 FUN_147550452(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147550470 FUN_147550470 body=29 status=ok
// SIG undefined FUN_147550470(void)

undefined8 FUN_147550470(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755048e FUN_14755048e body=121 status=ok
// SIG undefined FUN_14755048e(void)

void FUN_14755048e(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar4 = *(longlong *)(*(longlong *)(*param_1 + 0x60) + (longlong)(int)param_1[1] * 8);
  lVar1 = *(longlong *)(lVar4 + 0x20);
  uVar5 = (ulonglong)*(uint *)*param_2;
  uVar3 = (ulonglong)((uint *)*param_2)[1];
  lVar2 = lVar1 + uVar3;
  if (uVar3 == 0xffffffff) {
    lVar2 = 0;
  }
  lVar1 = lVar1 + uVar5;
  if (uVar5 == 0xffffffff) {
    lVar1 = 0;
  }
  uVar3 = (ulonglong)*(ushort *)(lVar4 + 0xe);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x100);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(param_3 + 8);
      }
      *(undefined8 *)(lVar2 + uVar5 * 8) =
           *(undefined8 *)(lVar4 + 8 + (ulonglong)*(ushort *)(lVar1 + uVar5 * 4) * 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar3 != uVar5);
  }
  return;
}



// FUNCTION 147550508 FUN_147550508 body=1 status=ok
// SIG undefined FUN_147550508(void)

void FUN_147550508(void)

{
  return;
}



// FUNCTION 14755050a FUN_14755050a body=29 status=ok
// SIG undefined FUN_14755050a(void)

undefined8 FUN_14755050a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147550528 FUN_147550528 body=29 status=ok
// SIG undefined FUN_147550528(void)

undefined8 FUN_147550528(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14755055e FUN_14755055e body=186 status=ok
// SIG undefined FUN_14755055e(void)

void FUN_14755055e(short *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong *puVar5;
  longlong lVar6;
  
  lVar1 = param_3[1];
  FUN_1403f967c(param_3,2);
  uVar4 = *(ushort *)(param_2 + 0xc);
  puVar2 = *(ulonglong **)(param_2 + 0x28);
  if (uVar4 != 0) {
    lVar6 = (ulonglong)uVar4 << 5;
    puVar5 = puVar2;
    do {
      if (*(short *)((longlong)puVar5 + 0x1e) == *param_1) goto LAB_1475505af;
      puVar5 = puVar5 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar5 = (ulonglong *)0x0;
LAB_1475505af:
  lVar6 = *param_3;
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar5) {
    *(int *)(lVar6 + (longlong)(int)lVar1 * 4) = (int)*puVar5 - (int)*(ulonglong *)(param_2 + 0x20);
    lVar6 = *param_3;
    uVar4 = *(ushort *)(param_2 + 0xc);
    puVar2 = *(ulonglong **)(param_2 + 0x28);
  }
  if (uVar4 != 0) {
    lVar3 = (ulonglong)uVar4 << 5;
    do {
      if (*(short *)((longlong)puVar2 + 0x1e) == param_1[1]) goto LAB_1475505fb;
      puVar2 = puVar2 + 4;
      lVar3 = lVar3 + -0x20;
    } while (lVar3 != 0);
  }
  puVar2 = (ulonglong *)0x0;
LAB_1475505fb:
  if (*(ulonglong *)(param_2 + 0x20) <= *puVar2) {
    *(int *)(lVar6 + 4 + (longlong)(int)lVar1 * 4) =
         (int)*puVar2 - (int)*(ulonglong *)(param_2 + 0x20);
  }
  return;
}



// FUNCTION 147550618 FUN_147550618 body=79 status=ok
// SIG undefined FUN_147550618(void)

void FUN_147550618(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_140522b40(0xa8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_140522b40(param_1 + 0x15);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014755064e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 147550668 FUN_147550668 body=119 status=ok
// SIG undefined FUN_147550668(void)

undefined4 * FUN_147550668(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 1475506e0 FUN_1475506e0 body=183 status=ok
// SIG undefined FUN_1475506e0(void)

void FUN_1475506e0(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550798 FUN_147550798 body=125 status=ok
// SIG undefined FUN_147550798(void)

void FUN_147550798(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550816 FUN_147550816 body=344 status=ok
// SIG undefined FUN_147550816(void)

void FUN_147550816(longlong *param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_4[1]) goto LAB_147550851;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147550851:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_4) goto LAB_147550878;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147550878:
  lVar4 = *plVar8;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  local_70 = *plVar7;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(*param_1 + 0x100);
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) =
           *(undefined8 *)(lVar6 + (ulonglong)*(ushort *)(local_70 + uVar5 * 4) * 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  local_80 = plVar7;
  local_78 = iVar3;
  local_68 = plVar8;
  local_60 = param_3;
  local_58 = iVar2;
  local_50 = lVar4;
  FUN_147550970(&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147550970 FUN_147550970 body=108 status=ok
// SIG undefined FUN_147550970(void)

void FUN_147550970(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001475509ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475509dc FUN_1475509dc body=119 status=ok
// SIG undefined FUN_1475509dc(void)

undefined4 * FUN_1475509dc(undefined4 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  FUN_1403b8af8(param_1 + 4,param_3 + 4);
  *(undefined8 *)(param_1 + 0x24) = 0;
  FUN_1400abb7c(param_1 + 0x1c,param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = 0;
  FUN_1400abb7c(param_1 + 0x26,param_3 + 0x26);
  *(longlong *)(param_1 + 0x30) = param_2;
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x248);
  return param_1;
}



// FUNCTION 147550a54 FUN_147550a54 body=183 status=ok
// SIG undefined FUN_147550a54(void)

void FUN_147550a54(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550b0c FUN_147550b0c body=125 status=ok
// SIG undefined FUN_147550b0c(void)

void FUN_147550b0c(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 2),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550b8a FUN_147550b8a body=349 status=ok
// SIG undefined FUN_147550b8a(void)

void FUN_147550b8a(longlong *param_1,longlong param_2,undefined8 param_3,short *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  int local_78;
  longlong local_70;
  longlong *local_68;
  undefined8 local_60;
  int local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar8 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar8 + 0x1e) == param_4[1]) goto LAB_147550bc5;
      plVar8 = plVar8 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar8 = (longlong *)0x0;
LAB_147550bc5:
  iVar2 = *(int *)(param_2 + 0x14);
  if (iVar2 == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(plVar8 + 1));
  }
  LOCK();
  *(int *)(plVar8 + 3) = (int)plVar8[3] + 1;
  UNLOCK();
  if (*(ushort *)(param_2 + 0xc) != 0) {
    plVar7 = *(longlong **)(param_2 + 0x28);
    lVar4 = (ulonglong)*(ushort *)(param_2 + 0xc) << 5;
    do {
      if (*(short *)((longlong)plVar7 + 0x1e) == *param_4) goto LAB_147550bec;
      plVar7 = plVar7 + 4;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
  }
  plVar7 = (longlong *)0x0;
LAB_147550bec:
  lVar4 = *plVar8;
  iVar3 = *(int *)(param_2 + 0x14);
  if (iVar3 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(plVar7 + 1));
  }
  LOCK();
  *(int *)(plVar7 + 3) = (int)plVar7[3] + 1;
  UNLOCK();
  local_70 = *plVar7;
  uVar1 = *(ushort *)(param_2 + 0xe);
  if ((ulonglong)uVar1 != 0) {
    uVar5 = 0;
    do {
      lVar6 = *(longlong *)(*param_1 + 0x100);
      if (lVar6 == 0) {
        lVar6 = *param_1;
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) =
           *(undefined8 *)(lVar6 + 8 + (ulonglong)*(ushort *)(local_70 + uVar5 * 4) * 0x10);
      uVar5 = uVar5 + 1;
    } while (uVar1 != uVar5);
  }
  local_80 = plVar7;
  local_78 = iVar3;
  local_68 = plVar8;
  local_60 = param_3;
  local_58 = iVar2;
  local_50 = lVar4;
  FUN_147550ce8(&local_80);
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147550ce8 FUN_147550ce8 body=108 status=ok
// SIG undefined FUN_147550ce8(void)

void FUN_147550ce8(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[3];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[4]) {
      uVar3 = param_1[4];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[3] + 0x18) = *(int *)(param_1[3] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[5] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x000147550d46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 147550d54 FUN_147550d54 body=114 status=ok
// SIG undefined FUN_147550d54(void)

void FUN_147550d54(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 147550dc6 FUN_147550dc6 body=1 status=ok
// SIG undefined FUN_147550dc6(void)

void FUN_147550dc6(void)

{
  return;
}



// FUNCTION 147550dc8 FUN_147550dc8 body=29 status=ok
// SIG undefined FUN_147550dc8(void)

undefined8 FUN_147550dc8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147550de6 FUN_147550de6 body=255 status=ok
// SIG undefined FUN_147550de6(void)

void FUN_147550de6(undefined2 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  ulonglong *local_48;
  undefined2 local_3a;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_3a = 0xffff;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = *param_1;
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[1];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[2];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  local_3a = param_1[3];
  local_50 = &local_3a;
  local_48 = &local_38;
  FUN_147552f5e(param_2,param_3,&local_50);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550ee6 FUN_147550ee6 body=125 status=ok
// SIG undefined FUN_147550ee6(void)

void FUN_147550ee6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da764(param_3,&local_30);
  local_28 = *param_2;
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  FUN_1432da954(param_3,*(undefined2 *)(param_1 + 6),&local_28);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147550f64 FUN_147550f64 body=649 status=ok
// SIG undefined FUN_147550f64(void)

void FUN_147550f64(undefined8 param_1,longlong *param_2,undefined8 param_3,short *param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  int local_f0;
  int local_ec;
  longlong *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  int local_90;
  undefined8 local_88;
  undefined8 *local_80;
  int local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar9 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar9 + 0x1e) == param_4[3]) goto LAB_147550fb6;
      puVar9 = puVar9 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar9 = (undefined8 *)0x0;
LAB_147550fb6:
  local_ec = *(int *)(lVar3 + 0x14);
  local_d8 = param_3;
  if (local_ec == 1) {
    AcquireSRWLockExclusive((PSRWLOCK)(puVar9 + 1));
  }
  LOCK();
  *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar10 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar10 + 0x1e) == param_4[2]) goto LAB_147550ff2;
      puVar10 = puVar10 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar10 = (undefined8 *)0x0;
LAB_147550ff2:
  local_e0 = *puVar9;
  local_f0 = *(int *)(lVar3 + 0x14);
  if (local_f0 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar10 + 1));
  }
  LOCK();
  *(int *)(puVar10 + 3) = *(int *)(puVar10 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar7 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar7 + 0x1e) == param_4[1]) goto LAB_147551034;
      puVar7 = puVar7 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar7 = (undefined8 *)0x0;
LAB_147551034:
  uVar4 = *puVar10;
  iVar1 = *(int *)(lVar3 + 0x14);
  if (iVar1 == 1) {
    AcquireSRWLockShared((PSRWLOCK)(puVar7 + 1));
  }
  LOCK();
  *(int *)(puVar7 + 3) = *(int *)(puVar7 + 3) + 1;
  UNLOCK();
  lVar3 = *(longlong *)(*(longlong *)(*param_2 + 0x60) + (longlong)(int)param_2[1] * 8);
  if (*(ushort *)(lVar3 + 0xc) != 0) {
    puVar8 = *(undefined8 **)(lVar3 + 0x28);
    lVar6 = (ulonglong)*(ushort *)(lVar3 + 0xc) << 5;
    do {
      if (*(short *)((longlong)puVar8 + 0x1e) == *param_4) goto LAB_14755107f;
      puVar8 = puVar8 + 4;
      lVar6 = lVar6 + -0x20;
    } while (lVar6 != 0);
  }
  puVar8 = (undefined8 *)0x0;
LAB_14755107f:
  uVar5 = *puVar7;
  iVar2 = *(int *)(lVar3 + 0x14);
  local_d0 = param_1;
  if (iVar2 == 1) {
    local_e8 = param_2;
    AcquireSRWLockShared((PSRWLOCK)(puVar8 + 1));
    param_2 = local_e8;
  }
  LOCK();
  *(int *)(puVar8 + 3) = *(int *)(puVar8 + 3) + 1;
  UNLOCK();
  local_a0 = *puVar8;
  local_78 = local_f0;
  local_60 = local_d8;
  local_58 = local_ec;
  local_50 = local_e0;
  local_c8 = (undefined4)*param_2;
  uStack_c4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_c0 = (undefined4)param_2[1];
  uStack_bc = *(undefined4 *)((longlong)param_2 + 0xc);
  local_100 = local_e0;
  local_108 = uVar4;
  local_b0 = puVar8;
  local_a8 = iVar2;
  local_98 = puVar7;
  local_90 = iVar1;
  local_88 = uVar5;
  local_80 = puVar10;
  local_70 = uVar4;
  local_68 = puVar9;
  FUN_140f906d6(local_d0,&local_c8,local_a0,uVar5);
  FUN_1475511ee(&local_b0);
  if ((local_48 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475511ee FUN_1475511ee body=174 status=ok
// SIG undefined FUN_1475511ee(void)

void FUN_1475511ee(longlong *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = param_1[9];
  if (lVar2 != 0) {
    uVar3 = *(ulonglong *)(lVar2 + 0x10);
    if (*(ulonglong *)(lVar2 + 0x10) < (ulonglong)param_1[10]) {
      uVar3 = param_1[10];
    }
    *(ulonglong *)(lVar2 + 0x10) = uVar3;
    LOCK();
    *(int *)(param_1[9] + 0x18) = *(int *)(param_1[9] + 0x18) + -1;
    UNLOCK();
    if ((int)param_1[0xb] == 1) {
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1[9] + 8));
    }
  }
  if (param_1[6] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[6] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[7] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[6] + 8));
    }
  }
  if (param_1[3] != 0) {
    LOCK();
    piVar1 = (int *)(param_1[3] + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[4] == 1) {
      ReleaseSRWLockShared((PSRWLOCK)(param_1[3] + 8));
    }
  }
  if (*param_1 != 0) {
    LOCK();
    piVar1 = (int *)(*param_1 + 0x18);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((int)param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014755128e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared((PSRWLOCK)(*param_1 + 8));
      return;
    }
  }
  return;
}



// FUNCTION 1475512b6 FUN_1475512b6 body=29 status=ok
// SIG undefined FUN_1475512b6(void)

bool FUN_1475512b6(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1475512d4 FUN_1475512d4 body=26 status=ok
// SIG undefined FUN_1475512d4(void)

bool FUN_1475512d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1475512ee FUN_1475512ee body=93 status=ok
// SIG undefined FUN_1475512ee(void)

void FUN_1475512ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a475830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14755134c FUN_14755134c body=93 status=ok
// SIG undefined FUN_14755134c(void)

void FUN_14755134c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14a475830;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1475513aa FUN_1475513aa body=126 status=ok
// SIG undefined FUN_1475513aa(void)

void FUN_1475513aa(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14a475830;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147551419. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 147551428 FUN_147551428 body=35 status=ok
// SIG undefined FUN_147551428(void)

void FUN_147551428(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000147551447. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1);
  return;
}



// FUNCTION 14755144b FUN_14755144b body=1034 status=ok
// SIG undefined FUN_14755144b(void)

void FUN_14755144b(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  int iVar30;
  bool bVar31;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar21 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar28 = iVar21;
joined_r0x00014755148e:
    do {
      iVar20 = iVar21 * 2 + 1;
      if (iVar20 < (int)param_2) {
        iVar23 = iVar21 * 2 + 2;
        if (iVar23 < (int)param_2) {
          lVar25 = (longlong)iVar23;
          uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar20 * 0x40 + 0x2c);
          uVar3 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
          iVar30 = (int)uVar3;
          iVar19 = (int)uVar2;
          if ((iVar30 < iVar19) ||
             ((float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20) &&
              iVar30 == iVar19)) goto LAB_1475514fe;
        }
        else {
LAB_1475514fe:
          lVar25 = (longlong)iVar20;
          iVar23 = iVar20;
        }
        uVar2 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
        uVar3 = *(undefined8 *)((longlong)param_1 + (longlong)iVar21 * 0x40 + 0x2c);
        iVar20 = (int)uVar3;
        iVar19 = (int)uVar2;
        if ((iVar20 < iVar19) ||
           ((iVar20 == iVar19 &&
            ((float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20))))) {
          pauVar29 = (undefined1 (*) [16])(param_1 + (longlong)iVar21 * 8);
          pauVar26 = (undefined1 (*) [16])(param_1 + lVar25 * 8);
          local_78 = *(undefined8 *)*pauVar29;
          uStack_70 = *(undefined8 *)((longlong)*pauVar29 + 8);
          auVar17 = *pauVar29;
          local_68 = *(undefined8 *)pauVar29[1];
          uStack_60 = *(undefined8 *)((longlong)pauVar29[1] + 8);
          auVar18 = pauVar29[1];
          uVar2 = *(undefined8 *)pauVar29[2];
          uVar3 = *(undefined8 *)((longlong)pauVar29[2] + 8);
          uVar4 = *(undefined8 *)pauVar29[3];
          uVar5 = *(undefined8 *)((longlong)pauVar29[3] + 8);
          uVar6 = *(undefined8 *)*pauVar26;
          uVar7 = *(undefined8 *)((longlong)*pauVar26 + 8);
          uVar8 = *(undefined8 *)pauVar26[1];
          uVar9 = *(undefined8 *)((longlong)pauVar26[1] + 8);
          uVar10 = *(undefined8 *)pauVar26[2];
          uVar11 = *(undefined8 *)((longlong)pauVar26[2] + 8);
          uVar12 = *(undefined8 *)((longlong)pauVar26[3] + 8);
          *(undefined8 *)pauVar29[3] = *(undefined8 *)pauVar26[3];
          *(undefined8 *)((longlong)pauVar29[3] + 8) = uVar12;
          *(undefined8 *)pauVar29[2] = uVar10;
          *(undefined8 *)((longlong)pauVar29[2] + 8) = uVar11;
          *(undefined8 *)pauVar29[1] = uVar8;
          *(undefined8 *)((longlong)pauVar29[1] + 8) = uVar9;
          *(undefined8 *)*pauVar29 = uVar6;
          *(undefined8 *)((longlong)*pauVar29 + 8) = uVar7;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)pauVar26[3] = (undefined4)local_48;
          *(undefined4 *)((longlong)pauVar26[3] + 4) = local_48._4_4_;
          *(undefined4 *)((longlong)pauVar26[3] + 8) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)pauVar26[3] + 0xc) = uStack_40._4_4_;
          *(undefined4 *)pauVar26[2] = (undefined4)local_58;
          *(undefined4 *)((longlong)pauVar26[2] + 4) = local_58._4_4_;
          *(undefined4 *)((longlong)pauVar26[2] + 8) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)pauVar26[2] + 0xc) = uStack_50._4_4_;
          pauVar26[1] = auVar18;
          *pauVar26 = auVar17;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
          iVar21 = iVar23;
          goto joined_r0x00014755148e;
        }
      }
      bVar31 = iVar28 != 0;
      iVar21 = iVar28 + -1;
      iVar28 = iVar21;
    } while (bVar31);
    if (1 < (int)param_2) {
      uVar22 = (ulonglong)param_2 - 1;
      local_78 = *param_1;
      uStack_70 = param_1[1];
      local_68 = param_1[2];
      uStack_60 = param_1[3];
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      uVar4 = param_1[6];
      uVar5 = param_1[7];
      uVar6 = param_1[uVar22 * 8];
      uVar7 = (param_1 + uVar22 * 8)[1];
      uVar8 = param_1[uVar22 * 8 + 2];
      uVar9 = (param_1 + uVar22 * 8 + 2)[1];
      uVar10 = param_1[uVar22 * 8 + 4];
      uVar11 = (param_1 + uVar22 * 8 + 4)[1];
      uVar12 = (param_1 + uVar22 * 8 + 6)[1];
      param_1[6] = param_1[uVar22 * 8 + 6];
      param_1[7] = uVar12;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar24 = param_1 + uVar22 * 8 + 6;
      *(undefined4 *)puVar24 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar24 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_40._4_4_;
      puVar24 = param_1 + uVar22 * 8 + 4;
      *(undefined4 *)puVar24 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
      param_1[uVar22 * 8 + 2] = local_68;
      (param_1 + uVar22 * 8 + 2)[1] = uStack_60;
      param_1[uVar22 * 8] = local_78;
      (param_1 + uVar22 * 8)[1] = uStack_70;
      local_58 = uVar2;
      uStack_50 = uVar3;
      local_48 = uVar4;
      uStack_40 = uVar5;
      if (param_2 != 2) {
        do {
          iVar28 = 0;
          iVar21 = 1;
          iVar20 = 0;
          do {
            lVar25 = (longlong)(iVar28 + 2);
            if (lVar25 < (longlong)uVar22) {
              uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar21 * 0x40 + 0x2c);
              uVar3 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
              iVar23 = (int)uVar3;
              iVar19 = (int)uVar2;
              if ((iVar23 < iVar19) ||
                 (iVar30 = iVar28 + 2,
                 (float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20) &&
                 iVar23 == iVar19)) goto LAB_1475516d4;
            }
            else {
LAB_1475516d4:
              lVar25 = (longlong)iVar21;
              iVar30 = iVar21;
            }
            uVar2 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
            uVar3 = *(undefined8 *)((longlong)param_1 + (longlong)iVar20 * 0x40 + 0x2c);
            iVar28 = (int)uVar3;
            iVar21 = (int)uVar2;
            if ((iVar21 <= iVar28) &&
               ((iVar28 != iVar21 ||
                ((float)((ulonglong)uVar2 >> 0x20) <= (float)((ulonglong)uVar3 >> 0x20))))) break;
            puVar27 = param_1 + (longlong)iVar20 * 8;
            puVar24 = param_1 + lVar25 * 8;
            uVar2 = *puVar27;
            uVar3 = puVar27[1];
            uVar4 = puVar27[2];
            uVar5 = puVar27[3];
            uVar6 = puVar27[4];
            uVar7 = puVar27[5];
            uVar8 = puVar27[6];
            uVar9 = puVar27[7];
            uVar10 = *puVar24;
            uVar11 = puVar24[1];
            uVar12 = puVar24[2];
            uVar13 = puVar24[3];
            uVar14 = puVar24[4];
            uVar15 = puVar24[5];
            uVar16 = puVar24[7];
            puVar27[6] = puVar24[6];
            puVar27[7] = uVar16;
            puVar27[4] = uVar14;
            puVar27[5] = uVar15;
            puVar27[2] = uVar12;
            puVar27[3] = uVar13;
            *puVar27 = uVar10;
            puVar27[1] = uVar11;
            puVar24[6] = uVar8;
            puVar24[7] = uVar9;
            puVar24[4] = uVar6;
            puVar24[5] = uVar7;
            puVar24[2] = uVar4;
            puVar24[3] = uVar5;
            *puVar24 = uVar2;
            puVar24[1] = uVar3;
            iVar28 = iVar30 * 2;
            iVar21 = iVar30 * 2 + 1;
            iVar20 = iVar30;
          } while ((longlong)iVar21 < (longlong)uVar22);
          uVar1 = uVar22 - 1;
          local_78 = *param_1;
          uStack_70 = param_1[1];
          local_68 = param_1[2];
          uStack_60 = param_1[3];
          uVar2 = param_1[4];
          uVar3 = param_1[5];
          uVar4 = param_1[6];
          uVar5 = param_1[7];
          uVar6 = param_1[uVar1 * 8];
          uVar7 = (param_1 + uVar1 * 8)[1];
          uVar8 = param_1[uVar1 * 8 + 2];
          uVar9 = (param_1 + uVar1 * 8 + 2)[1];
          uVar10 = param_1[uVar1 * 8 + 4];
          uVar11 = (param_1 + uVar1 * 8 + 4)[1];
          uVar12 = (param_1 + uVar1 * 8 + 6)[1];
          param_1[6] = param_1[uVar1 * 8 + 6];
          param_1[7] = uVar12;
          param_1[4] = uVar10;
          param_1[5] = uVar11;
          param_1[2] = uVar8;
          param_1[3] = uVar9;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar24 = param_1 + uVar1 * 8 + 6;
          *(undefined4 *)puVar24 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar24 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_40._4_4_;
          puVar24 = param_1 + uVar1 * 8 + 4;
          *(undefined4 *)puVar24 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
          param_1[uVar1 * 8 + 2] = local_68;
          (param_1 + uVar1 * 8 + 2)[1] = uStack_60;
          param_1[uVar1 * 8] = local_78;
          (param_1 + uVar1 * 8)[1] = uStack_70;
          bVar31 = 2 < uVar22;
          uVar22 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
        } while (bVar31);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147551856 FUN_147551856 body=1170 status=ok
// SIG undefined FUN_147551856(void)

void FUN_147551856(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [12];
  undefined1 (*pauVar15) [16];
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  int iVar18;
  ulonglong uVar19;
  undefined1 (*pauVar20) [16];
  undefined1 (*pauVar21) [16];
  longlong *plVar22;
  undefined1 (*pauVar23) [16];
  undefined1 (*pauVar24) [16];
  int iVar25;
  undefined1 (*pauVar26) [16];
  undefined1 (*pauVar27) [16];
  int iVar28;
  undefined1 (*pauVar29) [16];
  float fVar30;
  undefined1 auStack_3a8 [32];
  longlong local_388;
  longlong local_380;
  undefined4 local_378 [188];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if (1 < (int)param_2) {
    memset(local_378,0,0x2f0);
    local_380 = (ulonglong)param_2 * 0x40 + param_1 + -0x40;
    local_388 = param_1;
    fVar30 = logf((float)(int)param_2);
    local_378[0] = (int)(longlong)(fVar30 + fVar30);
    plVar22 = &local_388;
    do {
      pauVar16 = (undefined1 (*) [16])*plVar22;
      pauVar23 = (undefined1 (*) [16])plVar22[1];
      iVar25 = (int)plVar22[2];
      iVar18 = (int)((ulonglong)((longlong)pauVar23 - (longlong)pauVar16) >> 6);
      pauVar26 = pauVar23;
      pauVar27 = pauVar16;
      if (iVar25 != 0) {
LAB_14755191e:
        if (8 < (int)(iVar18 + 1U)) {
          uVar19 = (ulonglong)(iVar18 + 1U >> 1);
          auVar14 = *(undefined1 (*) [12])pauVar16[uVar19 * 4];
          auVar13 = pauVar16[uVar19 * 4 + 1];
          uVar1 = *(undefined8 *)pauVar16[uVar19 * 4 + 2];
          uVar2 = *(undefined8 *)(pauVar16[uVar19 * 4 + 2] + 8);
          uVar3 = *(undefined8 *)pauVar16[uVar19 * 4 + 3];
          uVar4 = *(undefined8 *)(pauVar16[uVar19 * 4 + 3] + 8);
          uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(pauVar16[uVar19 * 4] + 8) >> 0x20);
          uVar5 = *(undefined8 *)*pauVar16;
          uVar6 = *(undefined8 *)(*pauVar16 + 8);
          uVar7 = *(undefined8 *)pauVar16[1];
          uVar8 = *(undefined8 *)(pauVar16[1] + 8);
          uVar9 = *(undefined8 *)pauVar16[2];
          uVar10 = *(undefined8 *)(pauVar16[2] + 8);
          uVar11 = *(undefined8 *)(pauVar16[3] + 8);
          *(undefined8 *)pauVar16[uVar19 * 4 + 3] = *(undefined8 *)pauVar16[3];
          *(undefined8 *)(pauVar16[uVar19 * 4 + 3] + 8) = uVar11;
          *(undefined8 *)pauVar16[uVar19 * 4 + 2] = uVar9;
          *(undefined8 *)(pauVar16[uVar19 * 4 + 2] + 8) = uVar10;
          *(undefined8 *)pauVar16[uVar19 * 4 + 1] = uVar7;
          *(undefined8 *)(pauVar16[uVar19 * 4 + 1] + 8) = uVar8;
          *(undefined8 *)pauVar16[uVar19 * 4] = uVar5;
          *(undefined8 *)(pauVar16[uVar19 * 4] + 8) = uVar6;
          auVar12._12_4_ = uStack_7c;
          auVar12._0_12_ = auVar14;
          *(undefined8 *)pauVar16[3] = uVar3;
          *(undefined8 *)(pauVar16[3] + 8) = uVar4;
          *(undefined8 *)pauVar16[2] = uVar1;
          *(undefined8 *)(pauVar16[2] + 8) = uVar2;
          pauVar16[1] = auVar13;
          *pauVar16 = auVar12;
          pauVar20 = pauVar23 + 4;
          pauVar17 = pauVar16;
          do {
            pauVar24 = pauVar17 + 4;
            pauVar15 = pauVar17 + 4;
            do {
              pauVar17 = pauVar15;
              pauVar21 = pauVar24;
              if (pauVar23 < pauVar17) break;
              iVar18 = (int)*(undefined8 *)(pauVar17[2] + 0xc);
              iVar28 = (int)*(undefined8 *)(pauVar16[2] + 0xc);
              if (iVar18 < iVar28) break;
              pauVar24 = pauVar21 + 4;
              pauVar15 = pauVar17 + 4;
            } while ((iVar18 != iVar28) ||
                    ((float)((ulonglong)*(undefined8 *)(pauVar16[2] + 0xc) >> 0x20) <=
                     (float)((ulonglong)*(undefined8 *)(pauVar17[2] + 0xc) >> 0x20)));
            pauVar24 = pauVar20 + -8;
            pauVar15 = pauVar20 + -4;
            do {
              pauVar20 = pauVar15;
              pauVar29 = pauVar24;
              if (pauVar20 <= pauVar16) break;
              iVar28 = (int)*(undefined8 *)(pauVar16[2] + 0xc);
              iVar18 = (int)*(undefined8 *)(pauVar20[2] + 0xc);
              if (iVar28 < iVar18) break;
              pauVar24 = pauVar29 + -4;
              pauVar15 = pauVar20 + -4;
            } while ((iVar28 != iVar18) ||
                    ((float)((ulonglong)*(undefined8 *)(pauVar20[2] + 0xc) >> 0x20) <=
                     (float)((ulonglong)*(undefined8 *)(pauVar16[2] + 0xc) >> 0x20)));
            if (pauVar20 < pauVar17) goto LAB_147551ace;
            auVar14 = *(undefined1 (*) [12])*pauVar17;
            auVar12 = pauVar17[1];
            uVar1 = *(undefined8 *)pauVar17[2];
            uVar2 = *(undefined8 *)(pauVar17[2] + 8);
            uVar3 = *(undefined8 *)pauVar17[3];
            uVar4 = *(undefined8 *)(pauVar17[3] + 8);
            uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*pauVar17 + 8) >> 0x20);
            uVar5 = *(undefined8 *)*pauVar20;
            uVar6 = *(undefined8 *)(*pauVar20 + 8);
            uVar7 = *(undefined8 *)pauVar20[1];
            uVar8 = *(undefined8 *)(pauVar20[1] + 8);
            uVar9 = *(undefined8 *)pauVar20[2];
            uVar10 = *(undefined8 *)(pauVar20[2] + 8);
            uVar11 = *(undefined8 *)(pauVar20[3] + 8);
            *(undefined8 *)pauVar17[3] = *(undefined8 *)pauVar20[3];
            *(undefined8 *)(pauVar17[3] + 8) = uVar11;
            *(undefined8 *)pauVar17[2] = uVar9;
            *(undefined8 *)(pauVar17[2] + 8) = uVar10;
            *(undefined8 *)pauVar17[1] = uVar7;
            *(undefined8 *)(pauVar17[1] + 8) = uVar8;
            *(undefined8 *)*pauVar17 = uVar5;
            *(undefined8 *)(*pauVar17 + 8) = uVar6;
            auVar13._12_4_ = uStack_7c;
            auVar13._0_12_ = auVar14;
            *(undefined8 *)pauVar20[3] = uVar3;
            *(undefined8 *)(pauVar20[3] + 8) = uVar4;
            *(undefined8 *)pauVar20[2] = uVar1;
            *(undefined8 *)(pauVar20[2] + 8) = uVar2;
            pauVar20[1] = auVar12;
            *pauVar20 = auVar13;
          } while( true );
        }
        for (; pauVar27 = pauVar16, pauVar26 = pauVar16, pauVar16 < pauVar23;
            pauVar23 = pauVar23 + -4) {
          while (pauVar26 = pauVar26 + 4, pauVar26 <= pauVar23) {
            iVar18 = (int)*(undefined8 *)(pauVar26[2] + 0xc);
            iVar25 = (int)*(undefined8 *)(pauVar27[2] + 0xc);
            if ((iVar18 < iVar25) ||
               ((float)((ulonglong)*(undefined8 *)(pauVar26[2] + 0xc) >> 0x20) <
                (float)((ulonglong)*(undefined8 *)(pauVar27[2] + 0xc) >> 0x20) && iVar18 == iVar25))
            {
              pauVar27 = pauVar26;
            }
          }
          auVar12 = pauVar27[1];
          local_68 = *(undefined8 *)pauVar27[2];
          uStack_60 = *(undefined8 *)(pauVar27[2] + 8);
          local_58 = *(undefined8 *)pauVar27[3];
          uStack_50 = *(undefined8 *)(pauVar27[3] + 8);
          local_78 = *(undefined8 *)pauVar27[1];
          uStack_70 = *(undefined8 *)(pauVar27[1] + 8);
          local_88 = (undefined4)*(undefined8 *)*pauVar27;
          uStack_84 = (undefined4)((ulonglong)*(undefined8 *)*pauVar27 >> 0x20);
          uStack_80 = (undefined4)*(undefined8 *)(*pauVar27 + 8);
          uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*pauVar27 + 8) >> 0x20);
          uVar1 = *(undefined8 *)*pauVar23;
          uVar2 = *(undefined8 *)(*pauVar23 + 8);
          uVar3 = *(undefined8 *)pauVar23[1];
          uVar4 = *(undefined8 *)(pauVar23[1] + 8);
          uVar5 = *(undefined8 *)pauVar23[2];
          uVar6 = *(undefined8 *)(pauVar23[2] + 8);
          uVar7 = *(undefined8 *)(pauVar23[3] + 8);
          *(undefined8 *)pauVar27[3] = *(undefined8 *)pauVar23[3];
          *(undefined8 *)(pauVar27[3] + 8) = uVar7;
          *(undefined8 *)pauVar27[2] = uVar5;
          *(undefined8 *)(pauVar27[2] + 8) = uVar6;
          *(undefined8 *)pauVar27[1] = uVar3;
          *(undefined8 *)(pauVar27[1] + 8) = uVar4;
          *(undefined8 *)*pauVar27 = uVar1;
          *(undefined8 *)(*pauVar27 + 8) = uVar2;
          *(undefined8 *)pauVar23[3] = local_58;
          *(undefined8 *)(pauVar23[3] + 8) = uStack_50;
          *(undefined8 *)pauVar23[2] = local_68;
          *(undefined8 *)(pauVar23[2] + 8) = uStack_60;
          pauVar23[1] = auVar12;
          *(undefined4 *)*pauVar23 = local_88;
          *(undefined4 *)(*pauVar23 + 4) = uStack_84;
          *(undefined4 *)(*pauVar23 + 8) = uStack_80;
          *(undefined4 *)(*pauVar23 + 0xc) = uStack_7c;
        }
        goto LAB_147551cc7;
      }
LAB_147551cdc:
      FUN_147551ce9(pauVar16);
LAB_147551cc7:
      plVar22 = plVar22 + -3;
    } while (&local_388 <= plVar22);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_147551ace:
  auVar12 = pauVar16[1];
  local_68 = *(undefined8 *)pauVar16[2];
  uStack_60 = *(undefined8 *)(pauVar16[2] + 8);
  local_58 = *(undefined8 *)pauVar16[3];
  uStack_50 = *(undefined8 *)(pauVar16[3] + 8);
  local_78 = *(undefined8 *)pauVar16[1];
  uStack_70 = *(undefined8 *)(pauVar16[1] + 8);
  local_88 = (undefined4)*(undefined8 *)*pauVar16;
  uStack_84 = (undefined4)((ulonglong)*(undefined8 *)*pauVar16 >> 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(*pauVar16 + 8);
  uStack_7c = (undefined4)((ulonglong)*(undefined8 *)(*pauVar16 + 8) >> 0x20);
  uVar1 = *(undefined8 *)*pauVar20;
  uVar2 = *(undefined8 *)(*pauVar20 + 8);
  uVar3 = *(undefined8 *)pauVar20[1];
  uVar4 = *(undefined8 *)(pauVar20[1] + 8);
  uVar5 = *(undefined8 *)pauVar20[2];
  uVar6 = *(undefined8 *)(pauVar20[2] + 8);
  uVar7 = *(undefined8 *)(pauVar20[3] + 8);
  *(undefined8 *)pauVar16[3] = *(undefined8 *)pauVar20[3];
  *(undefined8 *)(pauVar16[3] + 8) = uVar7;
  *(undefined8 *)pauVar16[2] = uVar5;
  *(undefined8 *)(pauVar16[2] + 8) = uVar6;
  *(undefined8 *)pauVar16[1] = uVar3;
  *(undefined8 *)(pauVar16[1] + 8) = uVar4;
  *(undefined8 *)*pauVar16 = uVar1;
  *(undefined8 *)(*pauVar16 + 8) = uVar2;
  *(undefined8 *)pauVar20[3] = local_58;
  *(undefined8 *)(pauVar20[3] + 8) = uStack_50;
  *(undefined8 *)pauVar20[2] = local_68;
  *(undefined8 *)(pauVar20[2] + 8) = uStack_60;
  pauVar20[1] = auVar12;
  *(undefined4 *)*pauVar20 = local_88;
  *(undefined4 *)(*pauVar20 + 4) = uStack_84;
  *(undefined4 *)(*pauVar20 + 8) = uStack_80;
  *(undefined4 *)(*pauVar20 + 0xc) = uStack_7c;
  iVar25 = iVar25 + -1;
  pauVar24 = pauVar20 + -4;
  if ((longlong)pauVar29 - (longlong)pauVar27 < (longlong)pauVar26 - (longlong)pauVar21) {
    if (pauVar17 < pauVar23) {
      *plVar22 = (longlong)pauVar17;
      plVar22[1] = (longlong)pauVar23;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    pauVar21 = pauVar16;
    if (pauVar20 <= pauVar16 + 4) goto LAB_147551cc7;
  }
  else {
    if (pauVar16 + 4 < pauVar20) {
      *plVar22 = (longlong)pauVar16;
      plVar22[1] = (longlong)pauVar24;
      *(int *)(plVar22 + 2) = iVar25;
      plVar22 = plVar22 + 3;
    }
    pauVar16 = pauVar17;
    pauVar24 = pauVar23;
    pauVar29 = pauVar23;
    if (pauVar23 <= pauVar17) goto LAB_147551cc7;
  }
  iVar18 = (int)((ulonglong)((longlong)pauVar29 - (longlong)pauVar21) >> 6);
  pauVar23 = pauVar24;
  pauVar26 = pauVar29;
  pauVar27 = pauVar21;
  if (iVar25 == 0) goto LAB_147551cdc;
  goto LAB_14755191e;
}



// FUNCTION 147551ce9 FUN_147551ce9 body=1034 status=ok
// SIG undefined FUN_147551ce9(void)

void FUN_147551ce9(undefined8 *param_1,uint param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int iVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 *puVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  int iVar28;
  undefined1 (*pauVar29) [16];
  int iVar30;
  bool bVar31;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 != 0) {
    iVar21 = (int)((param_2 - ((int)(param_2 - 2) >> 0x1f)) + -2) >> 1;
    iVar28 = iVar21;
joined_r0x000147551d2c:
    do {
      iVar20 = iVar21 * 2 + 1;
      if (iVar20 < (int)param_2) {
        iVar23 = iVar21 * 2 + 2;
        if (iVar23 < (int)param_2) {
          lVar25 = (longlong)iVar23;
          uVar2 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
          uVar3 = *(undefined8 *)((longlong)param_1 + (longlong)iVar20 * 0x40 + 0x2c);
          iVar30 = (int)uVar3;
          iVar19 = (int)uVar2;
          if ((iVar30 < iVar19) ||
             ((float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20) &&
              iVar30 == iVar19)) goto LAB_147551d9c;
        }
        else {
LAB_147551d9c:
          lVar25 = (longlong)iVar20;
          iVar23 = iVar20;
        }
        uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar21 * 0x40 + 0x2c);
        uVar3 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
        iVar20 = (int)uVar3;
        iVar19 = (int)uVar2;
        if ((iVar20 < iVar19) ||
           ((iVar20 == iVar19 &&
            ((float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20))))) {
          pauVar29 = (undefined1 (*) [16])(param_1 + (longlong)iVar21 * 8);
          pauVar26 = (undefined1 (*) [16])(param_1 + lVar25 * 8);
          local_78 = *(undefined8 *)*pauVar29;
          uStack_70 = *(undefined8 *)((longlong)*pauVar29 + 8);
          auVar17 = *pauVar29;
          local_68 = *(undefined8 *)pauVar29[1];
          uStack_60 = *(undefined8 *)((longlong)pauVar29[1] + 8);
          auVar18 = pauVar29[1];
          uVar2 = *(undefined8 *)pauVar29[2];
          uVar3 = *(undefined8 *)((longlong)pauVar29[2] + 8);
          uVar4 = *(undefined8 *)pauVar29[3];
          uVar5 = *(undefined8 *)((longlong)pauVar29[3] + 8);
          uVar6 = *(undefined8 *)*pauVar26;
          uVar7 = *(undefined8 *)((longlong)*pauVar26 + 8);
          uVar8 = *(undefined8 *)pauVar26[1];
          uVar9 = *(undefined8 *)((longlong)pauVar26[1] + 8);
          uVar10 = *(undefined8 *)pauVar26[2];
          uVar11 = *(undefined8 *)((longlong)pauVar26[2] + 8);
          uVar12 = *(undefined8 *)((longlong)pauVar26[3] + 8);
          *(undefined8 *)pauVar29[3] = *(undefined8 *)pauVar26[3];
          *(undefined8 *)((longlong)pauVar29[3] + 8) = uVar12;
          *(undefined8 *)pauVar29[2] = uVar10;
          *(undefined8 *)((longlong)pauVar29[2] + 8) = uVar11;
          *(undefined8 *)pauVar29[1] = uVar8;
          *(undefined8 *)((longlong)pauVar29[1] + 8) = uVar9;
          *(undefined8 *)*pauVar29 = uVar6;
          *(undefined8 *)((longlong)*pauVar29 + 8) = uVar7;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          *(undefined4 *)pauVar26[3] = (undefined4)local_48;
          *(undefined4 *)((longlong)pauVar26[3] + 4) = local_48._4_4_;
          *(undefined4 *)((longlong)pauVar26[3] + 8) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)pauVar26[3] + 0xc) = uStack_40._4_4_;
          *(undefined4 *)pauVar26[2] = (undefined4)local_58;
          *(undefined4 *)((longlong)pauVar26[2] + 4) = local_58._4_4_;
          *(undefined4 *)((longlong)pauVar26[2] + 8) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)pauVar26[2] + 0xc) = uStack_50._4_4_;
          pauVar26[1] = auVar18;
          *pauVar26 = auVar17;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
          iVar21 = iVar23;
          goto joined_r0x000147551d2c;
        }
      }
      bVar31 = iVar28 != 0;
      iVar21 = iVar28 + -1;
      iVar28 = iVar21;
    } while (bVar31);
    if (1 < (int)param_2) {
      uVar22 = (ulonglong)param_2 - 1;
      local_78 = *param_1;
      uStack_70 = param_1[1];
      local_68 = param_1[2];
      uStack_60 = param_1[3];
      uVar2 = param_1[4];
      uVar3 = param_1[5];
      uVar4 = param_1[6];
      uVar5 = param_1[7];
      uVar6 = param_1[uVar22 * 8];
      uVar7 = (param_1 + uVar22 * 8)[1];
      uVar8 = param_1[uVar22 * 8 + 2];
      uVar9 = (param_1 + uVar22 * 8 + 2)[1];
      uVar10 = param_1[uVar22 * 8 + 4];
      uVar11 = (param_1 + uVar22 * 8 + 4)[1];
      uVar12 = (param_1 + uVar22 * 8 + 6)[1];
      param_1[6] = param_1[uVar22 * 8 + 6];
      param_1[7] = uVar12;
      param_1[4] = uVar10;
      param_1[5] = uVar11;
      param_1[2] = uVar8;
      param_1[3] = uVar9;
      *param_1 = uVar6;
      param_1[1] = uVar7;
      local_58._0_4_ = (undefined4)uVar2;
      local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
      uStack_50._0_4_ = (undefined4)uVar3;
      uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      local_48._0_4_ = (undefined4)uVar4;
      local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar5;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
      puVar24 = param_1 + uVar22 * 8 + 6;
      *(undefined4 *)puVar24 = (undefined4)local_48;
      *(undefined4 *)((longlong)puVar24 + 4) = local_48._4_4_;
      *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_40;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_40._4_4_;
      puVar24 = param_1 + uVar22 * 8 + 4;
      *(undefined4 *)puVar24 = (undefined4)local_58;
      *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
      *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
      *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
      param_1[uVar22 * 8 + 2] = local_68;
      (param_1 + uVar22 * 8 + 2)[1] = uStack_60;
      param_1[uVar22 * 8] = local_78;
      (param_1 + uVar22 * 8)[1] = uStack_70;
      local_58 = uVar2;
      uStack_50 = uVar3;
      local_48 = uVar4;
      uStack_40 = uVar5;
      if (param_2 != 2) {
        do {
          iVar28 = 0;
          iVar21 = 1;
          iVar20 = 0;
          do {
            lVar25 = (longlong)(iVar28 + 2);
            if (lVar25 < (longlong)uVar22) {
              uVar2 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
              uVar3 = *(undefined8 *)((longlong)param_1 + (longlong)iVar21 * 0x40 + 0x2c);
              iVar23 = (int)uVar3;
              iVar19 = (int)uVar2;
              if ((iVar23 < iVar19) ||
                 (iVar30 = iVar28 + 2,
                 (float)((ulonglong)uVar3 >> 0x20) < (float)((ulonglong)uVar2 >> 0x20) &&
                 iVar23 == iVar19)) goto LAB_147551f72;
            }
            else {
LAB_147551f72:
              lVar25 = (longlong)iVar21;
              iVar30 = iVar21;
            }
            uVar2 = *(undefined8 *)((longlong)param_1 + (longlong)iVar20 * 0x40 + 0x2c);
            uVar3 = *(undefined8 *)((longlong)param_1 + lVar25 * 0x40 + 0x2c);
            iVar28 = (int)uVar3;
            iVar21 = (int)uVar2;
            if ((iVar21 <= iVar28) &&
               ((iVar28 != iVar21 ||
                ((float)((ulonglong)uVar2 >> 0x20) <= (float)((ulonglong)uVar3 >> 0x20))))) break;
            puVar27 = param_1 + (longlong)iVar20 * 8;
            puVar24 = param_1 + lVar25 * 8;
            uVar2 = *puVar27;
            uVar3 = puVar27[1];
            uVar4 = puVar27[2];
            uVar5 = puVar27[3];
            uVar6 = puVar27[4];
            uVar7 = puVar27[5];
            uVar8 = puVar27[6];
            uVar9 = puVar27[7];
            uVar10 = *puVar24;
            uVar11 = puVar24[1];
            uVar12 = puVar24[2];
            uVar13 = puVar24[3];
            uVar14 = puVar24[4];
            uVar15 = puVar24[5];
            uVar16 = puVar24[7];
            puVar27[6] = puVar24[6];
            puVar27[7] = uVar16;
            puVar27[4] = uVar14;
            puVar27[5] = uVar15;
            puVar27[2] = uVar12;
            puVar27[3] = uVar13;
            *puVar27 = uVar10;
            puVar27[1] = uVar11;
            puVar24[6] = uVar8;
            puVar24[7] = uVar9;
            puVar24[4] = uVar6;
            puVar24[5] = uVar7;
            puVar24[2] = uVar4;
            puVar24[3] = uVar5;
            *puVar24 = uVar2;
            puVar24[1] = uVar3;
            iVar28 = iVar30 * 2;
            iVar21 = iVar30 * 2 + 1;
            iVar20 = iVar30;
          } while ((longlong)iVar21 < (longlong)uVar22);
          uVar1 = uVar22 - 1;
          local_78 = *param_1;
          uStack_70 = param_1[1];
          local_68 = param_1[2];
          uStack_60 = param_1[3];
          uVar2 = param_1[4];
          uVar3 = param_1[5];
          uVar4 = param_1[6];
          uVar5 = param_1[7];
          uVar6 = param_1[uVar1 * 8];
          uVar7 = (param_1 + uVar1 * 8)[1];
          uVar8 = param_1[uVar1 * 8 + 2];
          uVar9 = (param_1 + uVar1 * 8 + 2)[1];
          uVar10 = param_1[uVar1 * 8 + 4];
          uVar11 = (param_1 + uVar1 * 8 + 4)[1];
          uVar12 = (param_1 + uVar1 * 8 + 6)[1];
          param_1[6] = param_1[uVar1 * 8 + 6];
          param_1[7] = uVar12;
          param_1[4] = uVar10;
          param_1[5] = uVar11;
          param_1[2] = uVar8;
          param_1[3] = uVar9;
          *param_1 = uVar6;
          param_1[1] = uVar7;
          local_58._0_4_ = (undefined4)uVar2;
          local_58._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
          uStack_50._0_4_ = (undefined4)uVar3;
          uStack_50._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_48._0_4_ = (undefined4)uVar4;
          local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_40._0_4_ = (undefined4)uVar5;
          uStack_40._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
          puVar24 = param_1 + uVar1 * 8 + 6;
          *(undefined4 *)puVar24 = (undefined4)local_48;
          *(undefined4 *)((longlong)puVar24 + 4) = local_48._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_40;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_40._4_4_;
          puVar24 = param_1 + uVar1 * 8 + 4;
          *(undefined4 *)puVar24 = (undefined4)local_58;
          *(undefined4 *)((longlong)puVar24 + 4) = local_58._4_4_;
          *(undefined4 *)(puVar24 + 1) = (undefined4)uStack_50;
          *(undefined4 *)((longlong)puVar24 + 0xc) = uStack_50._4_4_;
          param_1[uVar1 * 8 + 2] = local_68;
          (param_1 + uVar1 * 8 + 2)[1] = uStack_60;
          param_1[uVar1 * 8] = local_78;
          (param_1 + uVar1 * 8)[1] = uStack_70;
          bVar31 = 2 < uVar22;
          uVar22 = uVar1;
          local_58 = uVar2;
          uStack_50 = uVar3;
          local_48 = uVar4;
          uStack_40 = uVar5;
        } while (bVar31);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475520f4 FUN_1475520f4 body=46 status=ok
// SIG undefined FUN_1475520f4(void)

void FUN_1475520f4(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x58) = 0;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_147552140(param_1 + 0x10);
  return;
}



// FUNCTION 147552122 FUN_147552122 body=29 status=ok
// SIG undefined FUN_147552122(void)

undefined8 FUN_147552122(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147552140 FUN_147552140 body=52 status=ok
// SIG undefined FUN_147552140(void)

void FUN_147552140(longlong *param_1)

{
  FUN_147552174();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147552174 FUN_147552174 body=318 status=ok
// SIG undefined FUN_147552174(void)

void FUN_147552174(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
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
      puVar2 = *(undefined8 **)(*local_68 + 8 + (longlong)iStack_4c * 0x18);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      local_50 = local_50 & ~local_60._4_4_;
      FUN_1449c0562(&local_60);
    } while (iStack_4c < (int)local_58[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_144727cd0(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475522b4 FUN_1475522b4 body=119 status=ok
// SIG undefined FUN_1475522b4(void)

void FUN_1475522b4(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x88);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x10;
    if (0x10 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0x8c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x8c) = iVar5;
    FUN_14755232c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 14755232c FUN_14755232c body=141 status=ok
// SIG undefined FUN_14755232c(void)

void FUN_14755232c(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x11) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,8);
  return;
}



// FUNCTION 147552576 FUN_147552576 body=124 status=ok
// SIG undefined FUN_147552576(void)

undefined8 FUN_147552576(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 in_stack_00000028;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  longlong local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 == (longlong *)0x0) {
    uVar2 = 1;
  }
  else {
    local_18 = *(undefined8 *)(param_1 + 0x100);
    local_10 = *(longlong *)(param_1 + 0x108);
    if (local_10 != 0) {
      LOCK();
      *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
      UNLOCK();
    }
    local_20 = &local_18;
    local_28 = in_stack_00000028;
    uVar2 = (**(code **)(*plVar1 + 0x60))();
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475525f3 FUN_1475525f3 body=650 status=ok
// SIG undefined FUN_1475525f3(void)

void FUN_1475525f3(longlong *param_1,byte *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  byte bVar6;
  byte bVar7;
  longlong lVar8;
  float fVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auStack_98 [47];
  byte local_69;
  byte *local_68;
  longlong *local_60;
  ulonglong local_58;
  undefined2 local_50;
  byte local_4e;
  undefined2 local_4c;
  byte local_4a;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    bVar7 = *param_2;
    local_4a = param_2[3];
    local_4c = *(undefined2 *)(param_2 + 1);
    uVar13 = *(uint *)(param_2 + 4);
    fVar9 = *(float *)(param_2 + 8);
    local_68 = param_2;
    if (iVar4 < 1) {
      uVar14 = (ulonglong)uVar13;
    }
    else {
      lVar10 = 8;
      lVar8 = 0;
      local_60 = param_1;
      do {
        lVar12 = *param_1;
        uVar1 = *(uint *)(lVar12 + -8 + lVar10);
        fVar5 = *(float *)(lVar12 + -4 + lVar10);
        bVar6 = *(byte *)(lVar12 + lVar10) & 1;
        if (bVar7 == 2) {
LAB_147552672:
          iVar4 = (int)param_3[1];
          lVar12 = (longlong)iVar4;
          *(uint *)(param_3 + 1) = iVar4 + 1U;
          uVar14 = (ulonglong)uVar1;
          if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
            local_69 = bVar7;
            local_58 = (ulonglong)uVar1;
            FUN_1400a178c(param_3,iVar4);
            param_1 = local_60;
            uVar14 = local_58;
            bVar7 = local_69;
          }
          lVar2 = *param_3;
          *(byte *)(lVar2 + lVar12 * 0x18) = bVar7;
          *(undefined2 *)(lVar2 + 1 + lVar12 * 0x18) = local_4c;
          *(byte *)(lVar2 + 3 + lVar12 * 0x18) = local_4a;
          *(ulonglong *)(lVar2 + 4 + lVar12 * 0x18) = CONCAT44(fVar9,uVar13);
          *(byte *)(lVar2 + 0xc + lVar12 * 0x18) = bVar6;
          *(ulonglong *)(lVar2 + 0x10 + lVar12 * 0x18) = (ulonglong)(uint)fVar5 << 0x20 | uVar14;
          bVar7 = bVar6 ^ 1;
          iVar4 = (int)param_1[1];
          fVar9 = fVar5;
        }
        else {
          if (((int)uVar13 <= (int)uVar1) && ((uVar13 != uVar1 || (fVar9 <= fVar5)))) {
            if (uVar13 == uVar1) {
              if (((fVar9 == fVar5) && (!NAN(fVar9) && !NAN(fVar5))) && (bVar7 == 0 || bVar6 == 0))
              goto LAB_14755271f;
            }
            goto LAB_147552672;
          }
LAB_14755271f:
          uVar14 = (ulonglong)uVar13;
        }
        lVar8 = lVar8 + 1;
        lVar10 = lVar10 + 0xc;
        uVar13 = (uint)uVar14;
      } while (lVar8 < iVar4);
    }
    bVar6 = local_68[0xc];
    local_4e = local_68[0xf];
    local_50 = *(undefined2 *)(local_68 + 0xd);
    uVar3 = *(undefined8 *)(local_68 + 0x10);
    iVar4 = (int)uVar14;
    if (bVar6 != 2 && bVar7 != 2) {
      iVar11 = (int)uVar3;
      if ((iVar11 < iVar4) ||
         ((fVar5 = (float)((ulonglong)uVar3 >> 0x20), iVar4 == iVar11 && (fVar5 < fVar9))))
      goto LAB_14755280a;
      if (iVar4 == iVar11) {
        if (((fVar9 == fVar5) && (!NAN(fVar9) && !NAN(fVar5))) && (bVar6 == 0 || bVar7 == 0))
        goto LAB_14755280a;
      }
    }
    iVar4 = (int)param_3[1];
    lVar8 = (longlong)iVar4;
    *(uint *)(param_3 + 1) = iVar4 + 1U;
    if (*(uint *)((longlong)param_3 + 0xc) < iVar4 + 1U) {
      FUN_1400a178c(param_3,iVar4);
    }
    lVar10 = *param_3;
    *(byte *)(lVar10 + lVar8 * 0x18) = bVar7;
    *(undefined2 *)(lVar10 + 1 + lVar8 * 0x18) = local_4c;
    *(byte *)(lVar10 + 3 + lVar8 * 0x18) = local_4a;
    *(ulonglong *)(lVar10 + 4 + lVar8 * 0x18) = uVar14 & 0xffffffff | (ulonglong)(uint)fVar9 << 0x20
    ;
    *(byte *)(lVar10 + 0xc + lVar8 * 0x18) = bVar6;
    *(undefined2 *)(lVar10 + 0xd + lVar8 * 0x18) = local_50;
    *(byte *)(lVar10 + 0xf + lVar8 * 0x18) = local_4e;
    *(undefined8 *)(lVar10 + 0x10 + lVar8 * 0x18) = uVar3;
  }
LAB_14755280a:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14755287e FUN_14755287e body=56 status=ok
// SIG undefined FUN_14755287e(void)

undefined8 * FUN_14755287e(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x198,0x10);
  FUN_145765e50(uVar1,*(undefined4 *)(param_1 + 0x28));
  *param_2 = uVar1;
  return param_2;
}



// FUNCTION 1475528b6 FUN_1475528b6 body=450 status=ok
// SIG undefined FUN_1475528b6(void)

ulonglong FUN_1475528b6(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4,
                       undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == (longlong *)0x0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    local_40 = *param_6;
    local_38 = param_6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*param_4 + 0x2b8))(param_4,&local_40);
    if (cVar4 != '\0') {
      local_50 = *param_6;
      local_48 = param_6[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_98 = param_5;
      uVar5 = (**(code **)(*param_4 + 0x2b0))(param_4,&local_68,*param_3,&local_50);
      if (*(int *)(param_1 + 0x88) != *(int *)(param_1 + 0xb4)) {
        lVar6 = param_1 + 0xb8;
        if (*(longlong *)(param_1 + 0xc0) != 0) {
          lVar6 = *(longlong *)(param_1 + 0xc0);
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 200) - 1U & uVar5) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x80) + (longlong)iVar7 * 0x10) == uVar5) {
              if ((undefined1 *)(lVar6 + 4) != (undefined1 *)0x0 && lVar6 != 0) {
                uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar6 + 4));
                goto LAB_1475529b7;
              }
              break;
            }
            iVar7 = *(int *)(lVar6 + 8);
          } while (iVar7 != -1);
        }
      }
    }
    local_78 = *param_6;
    local_70 = param_6[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    uVar5 = FUN_147544a16(param_4,&local_88,*param_3,&local_78);
    uVar8 = (ulonglong)uVar5;
  }
LAB_1475529b7:
  plVar3 = (longlong *)param_6[1];
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
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147552a7a FUN_147552a7a body=28 status=ok
// SIG undefined FUN_147552a7a(void)

undefined8 FUN_147552a7a(undefined8 param_1,undefined8 param_2)

{
  FUN_14055b2f2(param_2,param_1);
  return param_2;
}



// FUNCTION 147552a96 FUN_147552a96 body=293 status=ok
// SIG undefined FUN_147552a96(void)

undefined8 *
FUN_147552a96(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1400a24f6(param_2,param_3,param_1);
  plVar2 = (longlong *)*param_4;
  if ((plVar2 != (longlong *)0x0) && ((char)plVar2[2] == '\x01')) {
    iVar1 = (int)plVar2[1];
    *(uint *)(plVar2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
      FUN_147563c88(plVar2,iVar1);
    }
    *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = *param_2;
  }
  if ((longlong)*(int *)(param_1 + 0x18) != 0) {
    puVar3 = *(undefined8 **)(param_1 + 0x10);
    lVar4 = (longlong)*(int *)(param_1 + 0x18) * 0x18;
    do {
      plVar2 = (longlong *)*param_4;
      if ((plVar2 != (longlong *)0x0) &&
         (((char)plVar2[2] == '\x01' || (0x1ffe < (uint)((ulonglong)*puVar3 >> 0x33))))) {
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_147563c88(plVar2,iVar1);
        }
        *(undefined8 *)(*plVar2 + (longlong)iVar1 * 8) = *param_2;
      }
      FUN_1475585fa(puVar3,&local_48,*param_2,param_4);
      *param_2 = local_48;
      puVar3 = puVar3 + 3;
      lVar4 = lVar4 + -0x18;
    } while (lVar4 != 0);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 147552bbc FUN_147552bbc body=110 status=ok
// SIG undefined FUN_147552bbc(void)

void FUN_147552bbc(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_147564866(param_1,iVar1);
    }
    FUN_147564f41((longlong)iVar1 * 0xc + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_147564f56(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 147552c2c FUN_147552c2c body=215 status=ok
// SIG undefined FUN_147552c2c(void)

void FUN_147552c2c(longlong *param_1,longlong *param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (*(int *)((longlong)param_1 + 0xec) != param_3) {
    if (*(int *)((longlong)param_1 + 0xec) == DAT_14cab2cd4) {
      lVar4 = FUN_14479d2ce(*param_2 + 0x20);
      FUN_14055c180((ulonglong)*(ushort *)(*param_2 + 0x30) * 0x128 +
                    *(longlong *)(*(longlong *)(lVar4 + 0x548) + 8),lVar4,0);
    }
    local_30 = *param_2;
    local_28 = param_2[1];
    if (local_28 != 0) {
      LOCK();
      *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
      UNLOCK();
    }
    (**(code **)(*param_1 + 0x38))(param_1,&local_30,1);
    *(int *)((longlong)param_1 + 0xec) = param_3;
  }
  plVar3 = (longlong *)param_2[1];
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
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147552d04 FUN_147552d04 body=55 status=ok
// SIG undefined FUN_147552d04(void)

void FUN_147552d04(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_2 + 8);
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
                    /* WARNING: Could not recover jumptable at 0x000147552d37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 147552d3c FUN_147552d3c body=26 status=ok
// SIG undefined FUN_147552d3c(void)

void FUN_147552d3c(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x800000000;
  return;
}



// FUNCTION 147552d56 FUN_147552d56 body=35 status=ok
// SIG undefined FUN_147552d56(void)

undefined8 FUN_147552d56(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  FUN_14055b2f2(param_2,param_1,(param_3 << 0x20) + 1);
  return param_2;
}



// FUNCTION 147552d7a FUN_147552d7a body=450 status=ok
// SIG undefined FUN_147552d7a(void)

ulonglong FUN_147552d7a(longlong param_1,undefined4 *param_2,undefined4 *param_3,longlong *param_4,
                       undefined8 param_5,undefined8 *param_6)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_4 == (longlong *)0x0) {
    uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    local_40 = *param_6;
    local_38 = param_6[1];
    if (local_38 != 0) {
      LOCK();
      *(int *)(local_38 + 8) = *(int *)(local_38 + 8) + 1;
      UNLOCK();
    }
    cVar4 = (**(code **)(*param_4 + 0x2b8))(param_4,&local_40);
    if (cVar4 != '\0') {
      local_50 = *param_6;
      local_48 = param_6[1];
      if (local_48 != 0) {
        LOCK();
        *(int *)(local_48 + 8) = *(int *)(local_48 + 8) + 1;
        UNLOCK();
      }
      local_68 = *param_2;
      uStack_64 = param_2[1];
      uStack_60 = param_2[2];
      uStack_5c = param_2[3];
      local_98 = param_5;
      uVar5 = (**(code **)(*param_4 + 0x2b0))(param_4,&local_68,*param_3,&local_50);
      if (*(int *)(param_1 + 0x150) != *(int *)(param_1 + 0x17c)) {
        lVar6 = param_1 + 0x180;
        if (*(longlong *)(param_1 + 0x188) != 0) {
          lVar6 = *(longlong *)(param_1 + 0x188);
        }
        iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 400) - 1U & uVar5) * 4);
        if (iVar7 != -1) {
          do {
            lVar6 = *(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 0x10;
            if (*(uint *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 0x10) == uVar5) {
              if ((undefined1 *)(lVar6 + 4) != (undefined1 *)0x0 && lVar6 != 0) {
                uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),*(undefined1 *)(lVar6 + 4));
                goto LAB_147552e7b;
              }
              break;
            }
            iVar7 = *(int *)(lVar6 + 8);
          } while (iVar7 != -1);
        }
      }
    }
    local_78 = *param_6;
    local_70 = param_6[1];
    if (local_70 != 0) {
      LOCK();
      *(int *)(local_70 + 8) = *(int *)(local_70 + 8) + 1;
      UNLOCK();
    }
    local_88 = *param_2;
    uStack_84 = param_2[1];
    uStack_80 = param_2[2];
    uStack_7c = param_2[3];
    uVar5 = FUN_147544a16(param_4,&local_88,*param_3,&local_78);
    uVar8 = (ulonglong)uVar5;
  }
LAB_147552e7b:
  plVar3 = (longlong *)param_6[1];
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
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 147552f3e FUN_147552f3e body=27 status=ok
// SIG undefined FUN_147552f3e(void)

longlong FUN_147552f3e(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x28);
  if ((lVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x34), uVar1 == 0xffffffff)) {
    return 0;
  }
  if (*(int *)(lVar2 + 0xe0) != *(int *)(lVar2 + 0x10c)) {
    lVar3 = lVar2 + 0x110;
    if (*(longlong *)(lVar2 + 0x118) != 0) {
      lVar3 = *(longlong *)(lVar2 + 0x118);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(lVar2 + 0x120) - 1U & uVar1) * 4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(lVar2 + 0xd8) + (longlong)iVar4 * 0x150;
        if (*(uint *)(*(longlong *)(lVar2 + 0xd8) + (longlong)iVar4 * 0x150) == uVar1) break;
        iVar4 = *(int *)(lVar3 + 0x148);
        lVar3 = 0;
      } while (iVar4 != -1);
      goto LAB_1400a383a;
    }
  }
  lVar3 = 0;
LAB_1400a383a:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147552f5e FUN_147552f5e body=157 status=ok
// SIG undefined FUN_147552f5e(void)

void FUN_147552f5e(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  short *psVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar5 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  if ((longlong)(int)param_1[9] != 0) {
    plVar6 = plVar5 + (longlong)(int)param_1[9] * 2;
    do {
      psVar3 = (short *)*param_3;
      if (psVar3 != (short *)param_3[1]) {
        do {
          if (*psVar3 == (short)plVar5[1]) {
            if (psVar3 != (short *)0x0) {
              iVar1 = *(int *)(param_2 + 0x28);
              *(uint *)(param_2 + 0x28) = iVar1 + 1U;
              if (*(uint *)(param_2 + 0x2c) < iVar1 + 1U) {
                FUN_14476a5c8(param_2,iVar1);
              }
              lVar4 = *(longlong *)(param_2 + 0x20);
              if (*(longlong *)(param_2 + 0x20) == 0) {
                lVar4 = param_2;
              }
              lVar2 = *plVar5;
              *(longlong *)(lVar4 + (longlong)iVar1 * 8) = lVar2;
              if (lVar2 != 0) {
                LOCK();
                *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
                UNLOCK();
              }
            }
            break;
          }
          psVar3 = psVar3 + 1;
        } while (psVar3 != (short *)param_3[1]);
      }
      plVar5 = plVar5 + 2;
    } while (plVar5 != plVar6);
  }
  return;
}



// FUNCTION 147552ffc FUN_147552ffc body=88 status=ok
// SIG undefined FUN_147552ffc(void)

void FUN_147552ffc(longlong param_1,undefined2 param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *param_3;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
    UNLOCK();
  }
  iVar1 = *(int *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
    FUN_1475646ac(param_1,iVar1);
  }
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  *(longlong *)(lVar3 + (longlong)iVar1 * 0x10) = lVar2;
  *(undefined2 *)(lVar3 + 8 + (longlong)iVar1 * 0x10) = param_2;
  return;
}



// FUNCTION 147553054 FUN_147553054 body=71 status=ok
// SIG undefined FUN_147553054(void)

void FUN_147553054(longlong *param_1)

{
  FUN_1405c4362(param_1[2],(int)param_1[3]);
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_1405c4362(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1475530a6 FUN_1475530a6 body=108 status=ok
// SIG undefined FUN_1475530a6(void)

void FUN_1475530a6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  if (param_2 != 0) {
    local_20 = 0;
    FUN_14485c47a(&local_20);
    local_28 = local_20;
  }
  FUN_14755b9c2(param_1,&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553114 FUN_147553114 body=53 status=ok
// SIG undefined FUN_147553114(void)

void FUN_147553114(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14479d2ce(param_1 + 0x28);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000147553135. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x180))(plVar1);
    return;
  }
  FUN_14475ec7e(param_1);
  return;
}



// FUNCTION 14755314e FUN_14755314e body=75 status=ok
// SIG undefined FUN_14755314e(void)

void FUN_14755314e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_14755319a(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755319a FUN_14755319a body=372 status=ok
// SIG undefined FUN_14755319a(void)

void FUN_14755319a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  switchD_143c3d4dc::caseD_21();
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    plVar1 = (longlong *)(param_1 + 0x40);
    lVar2 = param_1 + 0x50;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    iVar6 = 0;
    local_58 = lVar2;
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_1449c0562(&local_60);
      iVar6 = *(int *)(param_1 + 0x68);
    }
    local_80 = local_60;
    local_78 = local_58;
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    iVar4 = local_70._4_4_;
    local_88 = plVar1;
    if ((local_70._4_4_ != iVar6) || (local_70 = uVar5, local_58 != lVar2)) {
      do {
        local_70 = uVar5;
        lVar3 = *local_88;
        if (DAT_14cab2d68 == 0) {
          uVar5 = FUN_140bd662f();
          DAT_14cab2d68 = FUN_140002ddd(FUN_14633cf55,uVar5,L"MovieSceneTrackInstanceEntry");
        }
        FUN_14047320e(DAT_14cab2d68,param_2,(longlong)iVar4 * 0x10 + lVar3,0);
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar4 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_88 != plVar1 || (local_78 != lVar2 || local_70._4_4_ != iVar6));
    }
    FUN_14756592a(param_2,param_1 + 0x78);
  }
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553314 FUN_147553314 body=936 status=ok
// SIG undefined FUN_147553314(void)

void FUN_147553314(longlong param_1)

{
  uint *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  short sVar8;
  undefined2 uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_148 [45];
  char local_11b;
  short local_11a;
  int local_118;
  int local_114;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined8 uStack_f0;
  short *local_e0;
  undefined1 *local_d8;
  int local_d0;
  short local_c2;
  undefined1 local_c0 [32];
  undefined8 local_a0;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_f8 = 0;
  uStack_f0 = 0;
  lVar6 = FUN_14009d2a0();
  sVar8 = *(short *)(lVar6 + 0xfc);
  lVar6 = *(longlong *)(param_1 + 0x28);
  local_a0 = 0x10000000000;
  local_78 = 0x10000000000;
  local_70 = 0;
  uStack_68 = 0;
  local_d8 = local_c0;
  local_e0 = &local_c2;
  local_c2 = sVar8;
  FUN_1447c44f6();
  if (sVar8 != -1) {
    local_11b = *(char *)(lVar6 + 0x298);
    FUN_14150e78a(&local_e0,lVar6 + 0x28,local_c0);
    local_118 = *(int *)(lVar6 + 0x38);
    if (local_d0 != local_118) {
      lVar6 = param_1 + 200;
      local_11a = sVar8;
      local_108 = param_1;
      do {
        lVar7 = *(longlong *)(*(longlong *)(local_d8 + 0x60) + (longlong)local_d0 * 8);
        if (local_11b == '\0') {
          *(undefined4 *)(lVar7 + 0x14) = 0;
          local_110 = lVar7;
        }
        else {
          local_110 = 0;
        }
        if (*(ushort *)(lVar7 + 0xc) != 0) {
          plVar15 = *(longlong **)(lVar7 + 0x28);
          lVar11 = (ulonglong)*(ushort *)(lVar7 + 0xc) << 5;
          do {
            if (*(short *)((longlong)plVar15 + 0x1e) == sVar8) goto LAB_1475534f2;
            plVar15 = plVar15 + 4;
            lVar11 = lVar11 + -0x20;
          } while (lVar11 != 0);
        }
        plVar15 = (longlong *)0x0;
LAB_1475534f2:
        local_114 = *(int *)(lVar7 + 0x14);
        if (local_114 == 1) {
          AcquireSRWLockShared((PSRWLOCK)(plVar15 + 1));
        }
        LOCK();
        *(int *)(plVar15 + 3) = (int)plVar15[3] + 1;
        UNLOCK();
        uVar2 = *(ushort *)(lVar7 + 0xe);
        if (uVar2 != 0) {
          lVar11 = *plVar15;
          local_100 = *(longlong *)(lVar7 + 0x18);
          uVar12 = 0;
          do {
            lVar7 = *(longlong *)(lVar11 + uVar12 * 8);
            if ((DAT_14c950c29 == '\x01') && (lVar7 != 0)) {
              FUN_1456cec3c();
              iVar13 = *(int *)(lVar11 + 8 + uVar12 * 8);
              uVar9 = *(undefined2 *)(local_100 + uVar12);
LAB_147553555:
              if ((*(uint *)(lVar7 + 8) >> 0x1e & 1) != 0) goto LAB_147553594;
              uVar4 = *(uint *)(lVar7 + 0xc);
              if ((int)uVar4 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) >> 0x1c & 1) != 0) goto LAB_147553594;
            }
            else {
              iVar13 = *(int *)(lVar11 + 8 + uVar12 * 8);
              uVar9 = *(undefined2 *)(local_100 + uVar12);
              if (lVar7 != 0) goto LAB_147553555;
LAB_147553594:
              uVar3 = uStack_f0;
              lVar7 = (longlong)(int)uStack_f0;
              uVar4 = (int)uStack_f0 + 1;
              uStack_f0 = CONCAT44(uStack_f0._4_4_,uVar4);
              if (uStack_f0._4_4_ < uVar4) {
                FUN_1405e07ae(&local_f8,uVar3 & 0xffffffff);
              }
              lVar14 = local_108;
              *(undefined2 *)(local_f8 + lVar7 * 2) = uVar9;
              iVar10 = (iVar13 - *(int *)(local_108 + 0xe0)) + 1;
              if (0 < iVar10) {
                uVar5 = FUN_144a54ea4(lVar6,iVar10);
                FUN_1447c6044(lVar6,uVar5,iVar10,0);
              }
              lVar7 = *(longlong *)(lVar14 + 0xd8);
              if (*(longlong *)(lVar14 + 0xd8) == 0) {
                lVar7 = lVar6;
              }
              iVar10 = iVar13 + 0x1f;
              if (-1 < iVar13) {
                iVar10 = iVar13;
              }
              puVar1 = (uint *)(lVar7 + (longlong)(iVar10 >> 5) * 4);
              *puVar1 = *puVar1 | 1 << ((byte)iVar13 & 0x1f);
            }
            uVar12 = uVar12 + 2;
          } while ((uint)uVar2 * 2 != uVar12);
        }
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
          UNLOCK();
          if (local_114 == 1) {
            ReleaseSRWLockShared((PSRWLOCK)(plVar15 + 1));
          }
        }
        param_1 = local_108;
        sVar8 = local_11a;
        if (local_110 != 0) {
          *(undefined4 *)(local_110 + 0x14) = 1;
        }
        local_d0 = FUN_1403b8464(&local_e0,local_d0 + 1);
      } while (local_d0 != local_118);
    }
    if (local_e0 != (short *)0x0) {
      if (local_d8[0x270] == '\0') {
        *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
      }
      else {
        LOCK();
        *(int *)(local_d8 + 0x264) = *(int *)(local_d8 + 0x264) + -1;
        UNLOCK();
      }
    }
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  lVar7 = FUN_14009d2a0();
  lVar6 = local_f8;
  lVar11 = (longlong)(int)uStack_f0;
  if (lVar11 != 0) {
    lVar14 = 0;
    do {
      FUN_1405e0992(*(longlong *)(param_1 + 0x28) + 0x28,*(undefined2 *)(lVar6 + lVar14),
                    *(undefined2 *)(lVar7 + 0x11c),3);
      lVar14 = lVar14 + 2;
    } while (lVar11 * 2 != lVar14);
  }
  if (local_f8 != 0) {
    FUN_1400020a8(local_f8);
  }
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1475536be FUN_1475536be body=144 status=ok
// SIG undefined FUN_1475536be(void)

longlong FUN_1475536be(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar1 = param_1 + 0x50;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x48)) {
    FUN_1447b9e4a(lVar1,0);
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar7 = param_1;
    }
    iVar2 = *(int *)(param_1 + 0x48);
    if ((longlong)iVar2 != 0) {
      lVar6 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x78);
        *(uint *)(param_1 + 0x78) = iVar3 + 1U;
        if (*(uint *)(param_1 + 0x7c) < iVar3 + 1U) {
          FUN_14476a5c8(lVar1,iVar3);
        }
        lVar5 = *(longlong *)(param_1 + 0x70);
        if (*(longlong *)(param_1 + 0x70) == 0) {
          lVar5 = lVar1;
        }
        lVar4 = *(longlong *)(lVar7 + lVar6);
        *(longlong *)(lVar5 + (longlong)iVar3 * 8) = lVar4;
        if (lVar4 != 0) {
          LOCK();
          *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
          UNLOCK();
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar2 * 0x10 != lVar6);
    }
  }
  return lVar1;
}



// FUNCTION 147553805 FUN_147553805 body=107 status=ok
// SIG undefined FUN_147553805(void)

undefined8 * FUN_147553805(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cab2db0) {
    FUN_144b3d300(&DAT_14cab2db0);
    if (DAT_14cab2db0 == -1) {
      FUN_14633cd78(&DAT_14cab2da8);
      _Init_thread_footer(&DAT_14cab2db0);
    }
  }
  *param_1 = DAT_14cab2da8;
  return param_1;
}



// FUNCTION 147553876 FUN_147553876 body=40 status=ok
// SIG undefined FUN_147553876(void)

char FUN_147553876(byte *param_1)

{
  byte bVar1;
  
  bVar1 = *param_1;
  return (bVar1 >> 3 & 1) + (bVar1 >> 2 & 1) + (bVar1 & 1) + ((bVar1 >> 1 & 1) != 0) +
         ((bVar1 >> 4 & 1) != 0);
}



// FUNCTION 14755389e FUN_14755389e body=72 status=ok
// SIG undefined FUN_14755389e(void)

undefined8 * FUN_14755389e(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a477880;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return param_1;
}



// FUNCTION 1475538e6 FUN_1475538e6 body=33 status=ok
// SIG undefined FUN_1475538e6(void)

void FUN_1475538e6(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a477880;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000147553902. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 147553908 FUN_147553908 body=79 status=ok
// SIG undefined FUN_147553908(void)

undefined8 * FUN_147553908(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14a47d530;
  param_2[1] = uVar2;
  param_2[2] = plVar3;
  return param_2;
}



// FUNCTION 147553958 FUN_147553958 body=72 status=ok
// SIG undefined FUN_147553958(void)

undefined8 * FUN_147553958(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14a4778a0;
  param_1[1] = *param_2;
  lVar2 = param_2[1];
  param_1[2] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = (longlong *)param_2[1];
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar3 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
      }
    }
  }
  return param_1;
}



// FUNCTION 1475539a0 FUN_1475539a0 body=33 status=ok
// SIG undefined FUN_1475539a0(void)

void FUN_1475539a0(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14a4778a0;
  plVar2 = (longlong *)param_1[2];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001475539bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 1475539c2 FUN_1475539c2 body=79 status=ok
// SIG undefined FUN_1475539c2(void)

undefined8 * FUN_1475539c2(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar3 + 0xc) = *(int *)((longlong)plVar3 + 0xc) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
    }
  }
  *(byte *)(param_2 + 4) = *(byte *)(param_2 + 4) | 3;
  *param_2 = &PTR_FUN_14a47d540;
  param_2[1] = uVar2;
  param_2[2] = plVar3;
  return param_2;
}



// FUNCTION 147553a12 FUN_147553a12 body=14 status=ok
// SIG undefined FUN_147553a12(void)

void FUN_147553a12(undefined8 *param_1,undefined8 *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    *param_2 = *param_1;
  }
  return;
}



// FUNCTION 147553a20 FUN_147553a20 body=286 status=ok
// SIG undefined FUN_147553a20(void)

void FUN_147553a20(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined1 *puStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  puStack_30 = &DAT_100000018;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  puVar1 = *(undefined8 **)(param_2 + 0x38);
  local_3c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_3c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_3c);
  }
  puVar2 = &local_38;
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x28))(param_1,&local_48,puVar2,local_3c);
  *param_3 = local_48;
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553b40 FUN_147553b40 body=173 status=ok
// SIG undefined FUN_147553b40(void)

void FUN_147553b40(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  puStack_20 = &DAT_100000018;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x18))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553bee FUN_147553bee body=173 status=ok
// SIG undefined FUN_147553bee(void)

void FUN_147553bee(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *puStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  puStack_20 = &DAT_100000018;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  puVar1 = &local_28;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x20))(param_1,puVar1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553c9c FUN_147553c9c body=239 status=ok
// SIG undefined FUN_147553c9c(void)

void FUN_147553c9c(longlong *param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1c = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  local_20 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  (**(code **)(*param_1 + 0x10))(param_1,local_1c,local_20);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147553d90 FUN_147553d90 body=146 status=ok
// SIG undefined FUN_147553d90(void)

undefined8 * FUN_147553d90(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0x10000ea60;
  *param_1 = &PTR_FUN_14a4811d0;
  param_1[5] = param_3;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar2;
  *(undefined4 *)(param_1 + 9) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar4;
  param_1[10] = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  *(int *)(param_1 + 0xb) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 10,iVar1,0);
    memcpy((void *)param_1[10],_Src,(longlong)iVar1 * 2);
  }
  FUN_147553e22(param_1);
  return param_1;
}



// FUNCTION 147553e22 FUN_147553e22 body=100 status=ok
// SIG undefined FUN_147553e22(void)

void FUN_147553e22(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  lVar4 = FUN_140007850(param_1 + 0x40);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x10);
    uVar2 = FUN_1459e4204();
    cVar3 = FUN_144a7ff9e(uVar1,uVar2);
    if (cVar3 != '\0') {
      FUN_14485c47a(param_1 + 0x30,lVar4);
      uVar1 = FUN_1459e4204();
      uVar1 = FUN_144718840(lVar4,uVar1);
      *(undefined8 *)(param_1 + 0x38) = uVar1;
    }
  }
  return;
}



// FUNCTION 147553e86 FUN_147553e86 body=121 status=ok
// SIG undefined FUN_147553e86(void)

void FUN_147553e86(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_144a76f74(param_1 + 0x30,1,0);
  if (cVar1 != '\0') {
    FUN_147553e22(param_1);
  }
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147553ee1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))
              (*(longlong **)(param_1 + 0x38),param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 147553f00 FUN_147553f00 body=89 status=ok
// SIG undefined FUN_147553f00(void)

void FUN_147553f00(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144a76f74(param_1 + 0x30,1,0);
  if (cVar1 != '\0') {
    FUN_147553e22(param_1);
  }
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147553f43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x18))(*(longlong **)(param_1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 147553f5a FUN_147553f5a body=89 status=ok
// SIG undefined FUN_147553f5a(void)

void FUN_147553f5a(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_144a76f74(param_1 + 0x30,1,0);
  if (cVar1 != '\0') {
    FUN_147553e22(param_1);
  }
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000147553f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),param_2);
    return;
  }
  return;
}



// FUNCTION 147553fb4 FUN_147553fb4 body=114 status=ok
// SIG undefined FUN_147553fb4(void)

undefined8 *
FUN_147553fb4(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_144a76f74(param_1 + 0x30,1,0);
  if (cVar1 != '\0') {
    FUN_147553e22(param_1);
  }
  cVar1 = FUN_144729dda(param_1 + 0x30);
  if (cVar1 == '\0') {
    *param_2 = *param_3;
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x38) + 0x28))
              (*(longlong **)(param_1 + 0x38),param_2,param_3,param_4);
  }
  return param_2;
}



// FUNCTION 14755402a FUN_14755402a body=158 status=ok
// SIG undefined FUN_14755402a(void)

void FUN_14755402a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_140165676(&local_30);
  (**(code **)(*param_1 + 0x10))(param_1,uVar3,param_3);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475540da FUN_1475540da body=158 status=ok
// SIG undefined FUN_1475540da(void)

void FUN_1475540da(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_140165676(&local_30);
  (**(code **)(*param_1 + 0x20))(param_1,uVar3,param_3);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755418a FUN_14755418a body=158 status=ok
// SIG undefined FUN_14755418a(void)

void FUN_14755418a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_140165676(&local_30);
  (**(code **)(*param_1 + 0x30))(param_1,uVar3,param_3);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14755423a FUN_14755423a body=158 status=ok
// SIG undefined FUN_14755423a(void)

void FUN_14755423a(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *param_2;
  local_28 = param_2[1];
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  uVar3 = FUN_140165676(&local_30);
  (**(code **)(*param_1 + 0x40))(param_1,uVar3,param_3);
  puVar2 = (undefined8 *)param_2[1];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2);
      LOCK();
      piVar1 = (int *)((longlong)puVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475542ea FUN_1475542ea body=4 status=ok
// SIG undefined FUN_1475542ea(void)

undefined8 FUN_1475542ea(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 1475542ee FUN_1475542ee body=74 status=ok
// SIG undefined FUN_1475542ee(void)

undefined8 * FUN_1475542ee(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_144a78877(param_2 >> 0x20,param_3 >> 0x20);
  uVar2 = FUN_144a78877(param_2 & 0xffffffff,param_3 & 0xffffffff);
  *param_1 = CONCAT44(uVar1,uVar2);
  return param_1;
}



// FUNCTION 147554338 FUN_147554338 body=68 status=ok
// SIG undefined FUN_147554338(void)

undefined8 FUN_147554338(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_144729dda(param_1 + 0x14);
  if (cVar1 != '\0') {
    uVar2 = FUN_14479d2ce(param_1 + 0x14);
    uVar2 = FUN_140cf0978(uVar2,param_2);
    return uVar2;
  }
  return 0x3f800000;
}



// FUNCTION 147554388 FUN_147554388 body=143 status=ok
// SIG undefined FUN_147554388(void)

longlong FUN_147554388(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0x400000000;
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = 0x200000000;
  *(longlong *)(param_1 + 0xf0) = param_2;
  iVar2 = *(int *)(param_2 + 0xe8);
  *(uint *)(param_2 + 0xe8) = iVar2 + 1U;
  if (*(uint *)(param_2 + 0xec) < iVar2 + 1U) {
    FUN_147566132((longlong *)(param_2 + 0xe0),iVar2);
  }
  puVar1 = (undefined8 *)(*(longlong *)(param_2 + 0xe0) + (longlong)iVar2 * 0x10);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(int *)(param_1 + 0xf8) = iVar2;
  return param_1;
}



// FUNCTION 147554418 FUN_147554418 body=178 status=ok
// SIG undefined FUN_147554418(void)

void FUN_147554418(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x40);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    lVar3 = param_1;
  }
  if ((longlong)*(int *)(param_1 + 0x48) != 0) {
    lVar4 = 0;
    do {
      if (*(int *)(lVar3 + 0xc + lVar4) != -1) goto LAB_14755448b;
      lVar4 = lVar4 + 0x10;
    } while ((longlong)*(int *)(param_1 + 0x48) * 0x10 != lVar4);
  }
  lVar3 = *(longlong *)(param_1 + 0xf0);
  iVar2 = *(int *)(lVar3 + 0xe8);
  uVar1 = *(uint *)(param_1 + 0xf8);
  if (iVar2 == uVar1 + 1) {
    if (~uVar1 + iVar2 != 0) {
      memmove((void *)(*(longlong *)(lVar3 + 0xe0) + (longlong)(int)uVar1 * 0x10),
              (void *)((longlong)(int)uVar1 * 0x10 + *(longlong *)(lVar3 + 0xe0) + 0x10),
              (longlong)(int)(~uVar1 + iVar2) << 4);
      iVar2 = *(int *)(lVar3 + 0xe8);
    }
    *(int *)(lVar3 + 0xe8) = iVar2 + -1;
  }
LAB_14755448b:
  FUN_1475544ca(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1475544ca FUN_1475544ca body=62 status=ok
// SIG undefined FUN_1475544ca(void)

void FUN_1475544ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (*(longlong *)(param_1 + 0x90) == 0) {
    lVar1 = param_1;
  }
  FUN_1475661b7(lVar1,*(undefined4 *)(param_1 + 0x98));
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147554508 FUN_147554508 body=26 status=ok
// SIG undefined FUN_147554508(void)

longlong FUN_147554508(longlong param_1)

{
  return (longlong)*(int *)(param_1 + 0xf8) * 0x10 +
         *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0xe0);
}



// FUNCTION 147554522 FUN_147554522 body=7 status=ok
// SIG undefined FUN_147554522(void)

undefined4 FUN_147554522(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xf8);
}



// FUNCTION 14755452a FUN_14755452a body=172 status=ok
// SIG undefined FUN_14755452a(void)

int FUN_14755452a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 0;
  FUN_14485c47a(&local_30);
  local_28 = param_3;
  iVar1 = FUN_147561927(param_1,&local_30);
  if (iVar1 == -1) {
    iVar1 = *(int *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x4c) < iVar1 + 1U) {
      FUN_1475661f4(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    lVar3 = (longlong)iVar1 * 0x10;
    *(undefined4 *)(lVar2 + 8 + lVar3) = local_28;
    *(undefined8 *)(lVar2 + lVar3) = local_30;
    *(undefined4 *)(lVar2 + 0xc + lVar3) = 0xffffffff;
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475545d8 FUN_1475545d8 body=407 status=ok
// SIG undefined FUN_1475545d8(void)

/* WARNING: Removing unreachable block (ram,0x00014755473e) */
/* WARNING: Removing unreachable block (ram,0x000147554751) */

ulonglong FUN_1475545d8(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  cVar4 = FUN_147554770(param_2);
  uVar5 = 0xffffffff;
  if (cVar4 == '\0') {
    lVar6 = param_1 + 0x50;
    iVar2 = *(int *)(param_1 + 0xe8);
    lVar7 = *(longlong *)(param_1 + 0xe0);
    if (*(longlong *)(param_1 + 0xe0) == 0) {
      lVar7 = lVar6;
    }
    if (0 < (longlong)iVar2) {
      uVar5 = 0;
      do {
        cVar4 = FUN_1475619e2(lVar7,param_2);
        if (cVar4 != '\0') goto LAB_14755460b;
        uVar5 = uVar5 + 1;
        lVar7 = lVar7 + 0x48;
      } while ((longlong)iVar2 != uVar5);
    }
    FUN_1475376e2(&local_80,param_2);
    local_40 = 0xffffffff;
    uVar3 = *(uint *)(param_1 + 0xe8);
    uVar5 = (ulonglong)uVar3;
    lVar7 = (longlong)(int)uVar3;
    *(uint *)(param_1 + 0xe8) = uVar3 + 1;
    if (*(uint *)(param_1 + 0xec) < uVar3 + 1) {
      FUN_1475662e8(lVar6,uVar3);
    }
    if (*(longlong *)(param_1 + 0xe0) != 0) {
      lVar6 = *(longlong *)(param_1 + 0xe0);
    }
    *(undefined8 *)(lVar6 + lVar7 * 0x48) = local_80;
    puVar1 = (undefined4 *)(lVar6 + 8 + lVar7 * 0x48);
    *puVar1 = local_78;
    puVar1[1] = uStack_74;
    puVar1[2] = uStack_70;
    puVar1[3] = uStack_6c;
    *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x18 + lVar7 * 0x48) = local_68;
    local_68 = 0;
    *(undefined4 *)(lVar6 + 0x20 + lVar7 * 0x48) = (undefined4)local_60;
    *(undefined4 *)(lVar6 + 0x24 + lVar7 * 0x48) = local_60._4_4_;
    local_60 = 0;
    *(undefined8 *)(lVar6 + 0x28 + lVar7 * 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x28 + lVar7 * 0x48) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar6 + 0x30 + lVar7 * 0x48) = (undefined4)local_50;
    *(undefined4 *)(lVar6 + 0x34 + lVar7 * 0x48) = local_50._4_4_;
    local_50 = 0;
    *(undefined2 *)(lVar6 + 0x3c + lVar7 * 0x48) = local_44;
    *(undefined4 *)(lVar6 + 0x38 + lVar7 * 0x48) = local_48;
    *(undefined4 *)(lVar6 + 0x40 + lVar7 * 0x48) = local_40;
  }
LAB_14755460b:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147554770 FUN_147554770 body=131 status=ok
// SIG undefined FUN_147554770(void)

undefined4 FUN_147554770(void)

{
  undefined4 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  longlong lStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = 0;
  lStack_30 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0;
  local_20 = 0x80000000;
  local_1c = 0;
  uVar1 = FUN_1475619e2(0,&local_58);
  if (lStack_30 != 0) {
    FUN_1400020a8();
  }
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1475547f4 FUN_1475547f4 body=52 status=ok
// SIG undefined FUN_1475547f4(void)

void FUN_1475547f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14755452a(param_1,param_3,param_4);
  FUN_147554828(param_1,param_2,uVar1,param_5);
  return;
}


