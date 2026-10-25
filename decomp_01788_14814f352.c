// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14814f352 FUN_14814f352 body=102 status=ok
// SIG undefined FUN_14814f352(void)

void FUN_14814f352(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_14814f3b8(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 14814f3b8 FUN_14814f3b8 body=87 status=ok
// SIG undefined FUN_14814f3b8(void)

void FUN_14814f3b8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_14814e868();
  return;
}



// FUNCTION 14814f416 FUN_14814f416 body=251 status=ok
// SIG undefined FUN_14814f416(void)

void FUN_14814f416(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == '\x01') && (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4))) {
    lVar1 = *param_3;
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if (lVar3 + 8 != 0 && lVar3 != 0) {
            local_20 = *(undefined8 *)(param_2 + 8);
            local_18 = *(undefined4 *)(param_2 + 0x10);
            FUN_143a29728(lVar3 + 8,&DAT_14ca85100);
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if (*(longlong *)(param_2 + 8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814f520 FUN_14814f520 body=221 status=ok
// SIG undefined FUN_14814f520(void)

void FUN_14814f520(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_38 [36];
  undefined4 local_14;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40;
        if (*(longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x40) == lVar1) {
          if ((lVar3 + 8U & 0xfffffffffffffff7) != 0) {
            local_14 = *(undefined4 *)(lVar3 + 0x30);
            local_10 = &DAT_100000001;
            FUN_143a5e2ca(param_2,&local_14,*(undefined4 *)(lVar3 + 0x34));
          }
          break;
        }
        iVar2 = *(int *)(lVar3 + 0x38);
      } while (iVar2 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14814f5fe FUN_14814f5fe body=54 status=ok
// SIG undefined FUN_14814f5fe(void)

void FUN_14814f5fe(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_14815014e(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014814f630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 14814f650 FUN_14814f650 body=66 status=ok
// SIG undefined FUN_14814f650(void)

undefined8 *
FUN_14814f650(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  longlong lVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    lVar1 = (longlong)param_4[1] + *(longlong *)(param_3 + 0x48);
    FUN_1407c8b48(param_2,L"%d, %d",*(undefined4 *)(lVar1 + (longlong)param_5 * 8),
                  *(undefined4 *)(lVar1 + 4 + (longlong)param_5 * 8));
  }
  return param_2;
}



// FUNCTION 14814f692 FUN_14814f692 body=35 status=ok
// SIG undefined FUN_14814f692(void)

undefined8 FUN_14814f692(longlong param_1,longlong param_2)

{
  FUN_148150064(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 14814f6de FUN_14814f6de body=144 status=ok
// SIG undefined FUN_14814f6de(void)

void FUN_14814f6de(longlong param_1,undefined8 *param_2,char *param_3)

{
  longlong lVar1;
  PSRWLOCK SRWLock;
  char *pcVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  if (param_3[1] == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (param_3 == (char *)0x0) {
      pcVar2 = (char *)(lVar1 + 0x50);
      SRWLock = (PSRWLOCK)0x0;
    }
    else {
      SRWLock = (PSRWLOCK)(param_3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*param_3 == '\x01') {
        pcVar2 = param_3 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar1 + 0x50);
      }
    }
    *(undefined1 *)param_2 = 1;
    FUN_148150064(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014814f749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 14814f816 FUN_14814f816 body=159 status=ok
// SIG undefined FUN_14814f816(void)

void FUN_14814f816(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a2959a(param_1);
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[2] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[2] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[1] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[1] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
      return;
    }
  }
  return;
}



// FUNCTION 14814f8b6 FUN_14814f8b6 body=191 status=ok
// SIG undefined FUN_14814f8b6(void)

undefined8 *
FUN_14814f8b6(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
             undefined8 param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar5 + 0x5b;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x2e0);
    puVar5 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar5 + 0x5b;
  }
  *param_2 = (ulonglong)puVar3;
  uVar1 = *param_4;
  uVar4 = FUN_144a8221e();
  FUN_14814f976(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adc0da0;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 14814f976 FUN_14814f976 body=144 status=ok
// SIG undefined FUN_14814f976(void)

undefined8 *
FUN_14814f976(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac70;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adc0dc0;
  FUN_14814fa72(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814fa08 FUN_14814fa08 body=105 status=ok
// SIG undefined FUN_14814fa08(void)

undefined8 * FUN_14814fa08(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0dc0;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814fa72 FUN_14814fa72 body=258 status=ok
// SIG undefined FUN_14814fa72(void)

void FUN_14814fa72(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 5) = *(undefined4 *)(param_2 + lVar7 * 7 + 5);
    param_1[lVar7 * 7 + 4] = param_2[lVar7 * 7 + 4];
    uVar3 = (param_2 + lVar7 * 7 + 6)[1];
    param_1[lVar7 * 7 + 6] = param_2[lVar7 * 7 + 6];
    (param_1 + lVar7 * 7 + 6)[1] = uVar3;
    param_1[lVar7 * 7 + 8] = param_2[lVar7 * 7 + 8];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 10);
    *(char *)(param_1 + lVar7 * 7 + 10) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 9] = param_2[lVar7 * 7 + 9];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  bVar6 = false;
  lVar7 = 0;
  do {
    *(undefined4 *)(param_1 + lVar7 * 7 + 0x13) = *(undefined4 *)(param_2 + lVar7 * 7 + 0x13);
    param_1[lVar7 * 7 + 0x12] = param_2[lVar7 * 7 + 0x12];
    uVar3 = (param_2 + lVar7 * 7 + 0x14)[1];
    param_1[lVar7 * 7 + 0x14] = param_2[lVar7 * 7 + 0x14];
    (param_1 + lVar7 * 7 + 0x14)[1] = uVar3;
    param_1[lVar7 * 7 + 0x16] = param_2[lVar7 * 7 + 0x16];
    cVar1 = *(char *)(param_2 + lVar7 * 7 + 0x18);
    *(char *)(param_1 + lVar7 * 7 + 0x18) = cVar1;
    if (cVar1 == '\x01') {
      param_1[lVar7 * 7 + 0x17] = param_2[lVar7 * 7 + 0x17];
    }
    lVar7 = 1;
    bVar2 = !bVar6;
    bVar6 = true;
  } while (bVar2);
  uVar3 = param_2[0x20];
  uVar4 = param_2[0x21];
  uVar5 = param_2[0x23];
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = uVar5;
  param_1[0x20] = uVar3;
  param_1[0x21] = uVar4;
  return;
}



// FUNCTION 14814fb74 FUN_14814fb74 body=105 status=ok
// SIG undefined FUN_14814fb74(void)

undefined8 * FUN_14814fb74(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adc0dc0;
  lVar1 = 0x2b0;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x240);
  lVar1 = 0x240;
  do {
    if (*(char *)((longlong)param_1 + lVar1) == '\x01') {
      *(undefined1 *)((longlong)param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + -0x38;
  } while (lVar1 != 0x1d0);
  FUN_140022960(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814fbde FUN_14814fbde body=214 status=ok
// SIG undefined FUN_14814fbde(void)

void FUN_14814fbde(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_b8 [32];
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  longlong local_78;
  undefined4 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = param_1 + 0x20;
  local_70 = 2;
  FUN_144760590(param_2,&local_78,0);
  local_40 = *(undefined4 *)(param_1 + 0x100);
  uStack_3c = *(undefined4 *)(param_1 + 0x104);
  uStack_38 = *(undefined4 *)(param_1 + 0x108);
  uStack_34 = *(undefined4 *)(param_1 + 0x10c);
  local_30 = *(undefined8 *)(param_1 + 0x110);
  local_58 = 0;
  local_48 = &PTR_LAB_14adc0de0;
  local_68 = FUN_14814fcb6;
  local_80 = 2;
  local_88 = param_1;
  FUN_1481c8e40(*(undefined8 *)(param_1 + 0x118),param_2);
  local_98 = param_1 + 0x90;
  local_90 = 2;
  FUN_144760590(param_2,&local_98,0);
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814fcb6 FUN_14814fcb6 body=62 status=ok
// SIG undefined FUN_14814fcb6(void)

void FUN_14814fcb6(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_14814fd46();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814fd28 FUN_14814fd28 body=29 status=ok
// SIG undefined FUN_14814fd28(void)

undefined8 FUN_14814fd28(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814fd46 FUN_14814fd46 body=297 status=ok
// SIG undefined FUN_14814fd46(void)

void FUN_14814fd46(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined1 auStack_b8 [32];
  void *local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uStack_90._0_4_ = **(int **)*param_2;
  lVar5 = (longlong)(int)uStack_90;
  local_98 = (void *)0x0;
  if (lVar5 < 1) {
    pvVar7 = (void *)0x0;
    iVar4 = 0;
    uVar6 = 0;
  }
  else {
    uStack_90._4_4_ = 0;
    FUN_14814fe70(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 3);
    pvVar7 = local_98;
    iVar4 = (int)uStack_90;
    uVar6 = uStack_90._4_4_;
  }
  uVar1 = *param_1;
  local_98 = (void *)0x0;
  uStack_90 = 0;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  local_88[0] = (code *)0x0;
  local_78 = (undefined8 *)FUN_14001cc68(0x30,8);
  *local_78 = &PTR_LAB_14adc0e00;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_14814fef6;
  }
  FUN_1407461b0(1,local_88);
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14814fe70 FUN_14814fe70 body=132 status=ok
// SIG undefined FUN_14814fe70(void)

void FUN_14814fe70(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14814fef6 FUN_14814fef6 body=52 status=ok
// SIG undefined FUN_14814fef6(void)

void FUN_14814fef6(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14814ff8c(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 14814ff34 FUN_14814ff34 body=29 status=ok
// SIG undefined FUN_14814ff34(void)

void FUN_14814ff34(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14814ff52 FUN_14814ff52 body=57 status=ok
// SIG undefined FUN_14814ff52(void)

undefined8 * FUN_14814ff52(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adc0e00;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14814ff8c FUN_14814ff8c body=216 status=ok
// SIG undefined FUN_14814ff8c(void)

void FUN_14814ff8c(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  char *pcVar2;
  int iVar3;
  longlong lVar4;
  
  if (*(int *)(param_1 + 0x28) != *(int *)(param_1 + 0x54)) {
    lVar4 = param_1 + 0x58;
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x60);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x68) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar3 * 0x18);
        if (*plVar1 == param_2) {
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          pcVar2 = (char *)plVar1[1];
          if (pcVar2 == (char *)0x0) {
            return;
          }
          lVar4 = *(longlong *)(param_1 + 0x10);
          AcquireSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          if (*pcVar2 == '\0') {
            *pcVar2 = '\x01';
            FUN_148150064(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_148150064(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014815005d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ReleaseSRWLockExclusive((PSRWLOCK)(pcVar2 + 8));
          return;
        }
        iVar3 = (int)plVar1[2];
      } while (iVar3 != -1);
    }
  }
  return;
}



// FUNCTION 148150064 FUN_148150064 body=88 status=ok
// SIG undefined FUN_148150064(void)

undefined8 * FUN_148150064(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1481500ec(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 3);
      }
    }
  }
  return param_1;
}



// FUNCTION 1481500bc FUN_1481500bc body=48 status=ok
// SIG undefined FUN_1481500bc(void)

void FUN_1481500bc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,4);
  }
  return;
}



// FUNCTION 1481500ec FUN_1481500ec body=98 status=ok
// SIG undefined FUN_1481500ec(void)

void FUN_1481500ec(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 3,4);
    iVar1 = (int)(uVar2 >> 3);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,8,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14815014e FUN_14815014e body=1301 status=ok
// SIG undefined FUN_14815014e(void)

void FUN_14815014e(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined **ppuVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *param_2;
  if (lVar1 == DAT_14cb3aa68) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc0e20;
  }
  else if (lVar1 == DAT_14cb3aa70) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc0e90;
  }
  else if (lVar1 == DAT_14cb3aa78) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc0f00;
  }
  else if (lVar1 == DAT_14cb3aa80) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc0f70;
  }
  else if (lVar1 == DAT_14cb3aa88) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc0fe0;
  }
  else if (lVar1 == DAT_14cb3aa90) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc1050;
  }
  else if (lVar1 == DAT_14cb3aa98) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc10c0;
  }
  else if (lVar1 == DAT_14cb3aaa0) {
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc1130;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_1481501fd;
    local_30 = (undefined8 *)0x0;
    local_28 = 0;
    FUN_1446efa72(&local_30,0,2,0x10);
    *local_30 = &PTR_LAB_14ad81180;
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 1;
    lVar1 = DAT_14c758608 + 1;
    if (lVar3 == 0) {
      LOCK();
      UNLOCK();
      lVar3 = DAT_14c758608 + 2;
      lVar1 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar1;
    local_30[2] = lVar3;
    ppuVar2 = &PTR_FUN_14adc11a0;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_1481501fd:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148150664 FUN_148150664 body=29 status=ok
// SIG undefined FUN_148150664(void)

undefined8 FUN_148150664(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148150696 FUN_148150696 body=93 status=ok
// SIG undefined FUN_148150696(void)

void FUN_148150696(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481506f4 FUN_1481506f4 body=93 status=ok
// SIG undefined FUN_1481506f4(void)

void FUN_1481506f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0e20;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150752 FUN_148150752 body=126 status=ok
// SIG undefined FUN_148150752(void)

void FUN_148150752(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0e20;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481507c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481507da FUN_1481507da body=20 status=ok
// SIG undefined FUN_1481507da(void)

undefined1 FUN_1481507da(longlong param_1)

{
  FUN_1481507ee(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481507ee FUN_1481507ee body=240 status=ok
// SIG undefined FUN_1481507ee(void)

void FUN_1481507ee(longlong param_1,char *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481508e0(local_38);
  FUN_144a76cd4(&local_48);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_148150858;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148150858:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    uVar2 = *(undefined4 *)(local_30 + 8);
    iVar5 = 0;
    do {
      puVar1 = local_48 + local_40;
      *local_48 = uVar2;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
      local_48 = puVar1;
    } while (iVar5 < *piVar4);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481508e0 FUN_1481508e0 body=148 status=ok
// SIG undefined FUN_1481508e0(void)

void FUN_1481508e0(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 148150974 FUN_148150974 body=29 status=ok
// SIG undefined FUN_148150974(void)

undefined8 FUN_148150974(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481509a6 FUN_1481509a6 body=93 status=ok
// SIG undefined FUN_1481509a6(void)

void FUN_1481509a6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150a04 FUN_148150a04 body=93 status=ok
// SIG undefined FUN_148150a04(void)

void FUN_148150a04(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0e90;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150a62 FUN_148150a62 body=126 status=ok
// SIG undefined FUN_148150a62(void)

void FUN_148150a62(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0e90;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148150ad1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148150aea FUN_148150aea body=20 status=ok
// SIG undefined FUN_148150aea(void)

undefined1 FUN_148150aea(longlong param_1)

{
  FUN_148150afe(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148150afe FUN_148150afe body=312 status=ok
// SIG undefined FUN_148150afe(void)

void FUN_148150afe(longlong param_1,char *param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  PSRWLOCK SRWLock;
  int *piVar6;
  undefined1 auStack_88 [32];
  int *local_68;
  int local_60;
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1481508e0(local_38);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_140126e42(&local_68);
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_148150b82;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148150b82:
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    iVar2 = *(int *)(local_30 + 8);
    iVar5 = 0;
    do {
      piVar4 = local_58 + local_48;
      piVar1 = local_68 + local_60;
      *local_68 = -(uint)(*local_58 < iVar2 && -1 < *local_58);
      iVar5 = iVar5 + 1;
      piVar6 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar6 = (int *)(param_2 + 0x3c);
      }
      local_68 = piVar1;
      local_58 = piVar4;
    } while (iVar5 < *piVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148150c38 FUN_148150c38 body=29 status=ok
// SIG undefined FUN_148150c38(void)

undefined8 FUN_148150c38(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148150c6a FUN_148150c6a body=93 status=ok
// SIG undefined FUN_148150c6a(void)

void FUN_148150c6a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150cc8 FUN_148150cc8 body=93 status=ok
// SIG undefined FUN_148150cc8(void)

void FUN_148150cc8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0f00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150d26 FUN_148150d26 body=126 status=ok
// SIG undefined FUN_148150d26(void)

void FUN_148150d26(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0f00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148150d95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148150dae FUN_148150dae body=20 status=ok
// SIG undefined FUN_148150dae(void)

undefined1 FUN_148150dae(longlong param_1)

{
  FUN_148150dc2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148150dc2 FUN_148150dc2 body=242 status=ok
// SIG undefined FUN_148150dc2(void)

void FUN_148150dc2(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  PSRWLOCK SRWLock;
  int *piVar5;
  undefined1 auStack_68 [32];
  int *local_48;
  int local_40;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1481508e0(local_38);
  FUN_144a76cd4(&local_48);
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      local_30 = local_30 + 0x10;
      goto LAB_148150e2c;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_148150e2c:
  piVar3 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar3 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar3) {
    iVar1 = *(int *)(local_30 + 8);
    iVar4 = 0;
    do {
      piVar3 = local_48 + local_40;
      *local_48 = iVar1 + -1;
      iVar4 = iVar4 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
      local_48 = piVar3;
    } while (iVar4 < *piVar5);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148150eb6 FUN_148150eb6 body=29 status=ok
// SIG undefined FUN_148150eb6(void)

undefined8 FUN_148150eb6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148150ee8 FUN_148150ee8 body=93 status=ok
// SIG undefined FUN_148150ee8(void)

void FUN_148150ee8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150f46 FUN_148150f46 body=93 status=ok
// SIG undefined FUN_148150f46(void)

void FUN_148150f46(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0f70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148150fa4 FUN_148150fa4 body=126 status=ok
// SIG undefined FUN_148150fa4(void)

void FUN_148150fa4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0f70;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148151013. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14815102c FUN_14815102c body=20 status=ok
// SIG undefined FUN_14815102c(void)

undefined1 FUN_14815102c(longlong param_1)

{
  FUN_148151040(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148151040 FUN_148151040 body=449 status=ok
// SIG undefined FUN_148151040(void)

void FUN_148151040(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  PSRWLOCK SRWLock;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  int local_70;
  undefined4 *local_68;
  int local_60;
  uint *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1481508e0(local_38);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_144a76cd4(&local_78,param_2);
  FUN_144a76cd4(&local_68,param_2);
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      plVar9 = (longlong *)(local_30 + 0x10);
      goto LAB_1481510d1;
    }
  }
  plVar9 = (longlong *)(lVar5 + 0x50);
LAB_1481510d1:
  piVar1 = (int *)(param_2 + 0x3c);
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = piVar1;
  }
  if ((int)plVar9[1] < 1) {
    if (0 < *piVar8) {
      iVar10 = 0;
      do {
        puVar3 = local_78 + local_70;
        *local_78 = 0xffffffff;
        puVar4 = local_68 + local_60;
        *local_68 = 0xffffffff;
        iVar10 = iVar10 + 1;
        piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar8 = piVar1;
        }
        local_78 = puVar3;
        local_68 = puVar4;
      } while (iVar10 < *piVar8);
    }
  }
  else if (0 < *piVar8) {
    uVar7 = (int)plVar9[1] - 1;
    iVar10 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar11 = *local_58;
      if ((int)uVar7 <= (int)*local_58) {
        uVar11 = uVar7;
      }
      uVar12 = (ulonglong)uVar11;
      if ((int)uVar11 < 1) {
        uVar12 = 0;
      }
      uVar6 = *(undefined8 *)(*plVar9 + uVar12 * 8);
      puVar3 = local_78 + local_70;
      *local_78 = (int)uVar6;
      puVar4 = local_68 + local_60;
      *local_68 = (int)((ulonglong)uVar6 >> 0x20);
      iVar10 = iVar10 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = piVar1;
      }
      local_78 = puVar3;
      local_68 = puVar4;
      local_58 = puVar2;
    } while (iVar10 < *piVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148151202 FUN_148151202 body=29 status=ok
// SIG undefined FUN_148151202(void)

undefined8 FUN_148151202(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148151234 FUN_148151234 body=93 status=ok
// SIG undefined FUN_148151234(void)

void FUN_148151234(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151292 FUN_148151292 body=93 status=ok
// SIG undefined FUN_148151292(void)

void FUN_148151292(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc0fe0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481512f0 FUN_1481512f0 body=126 status=ok
// SIG undefined FUN_1481512f0(void)

void FUN_1481512f0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc0fe0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014815135f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148151378 FUN_148151378 body=20 status=ok
// SIG undefined FUN_148151378(void)

undefined1 FUN_148151378(longlong param_1)

{
  FUN_14815138c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14815138c FUN_14815138c body=187 status=ok
// SIG undefined FUN_14815138c(void)

void FUN_14815138c(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1481508e0(local_38);
  pcVar2 = local_30;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    pcVar2 = (char *)(lVar1 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar2 == '\0') {
      *pcVar2 = '\x01';
      FUN_148150064(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_1481500bc(pcVar2);
  }
  local_30[1] = local_30[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148151448 FUN_148151448 body=29 status=ok
// SIG undefined FUN_148151448(void)

undefined8 FUN_148151448(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14815147a FUN_14815147a body=93 status=ok
// SIG undefined FUN_14815147a(void)

void FUN_14815147a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481514d8 FUN_1481514d8 body=93 status=ok
// SIG undefined FUN_1481514d8(void)

void FUN_1481514d8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1050;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151536 FUN_148151536 body=126 status=ok
// SIG undefined FUN_148151536(void)

void FUN_148151536(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc1050;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481515a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481515be FUN_1481515be body=20 status=ok
// SIG undefined FUN_1481515be(void)

undefined1 FUN_1481515be(longlong param_1)

{
  FUN_1481515d2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481515d2 FUN_1481515d2 body=255 status=ok
// SIG undefined FUN_1481515d2(void)

void FUN_1481515d2(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1481508e0(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar3 = local_38;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar4 = (longlong *)(lVar2 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x01';
      FUN_148150064(pcVar3 + 0x10,lVar2 + 0x50);
    }
    plVar4 = (longlong *)(pcVar3 + 0x10);
  }
  lVar2 = plVar4[1];
  lVar5 = (longlong)(int)lVar2;
  iVar1 = *local_58;
  local_58 = local_58 + local_48;
  FUN_1481516d2(plVar4,iVar1);
  if ((int)lVar2 < iVar1) {
    do {
      *(undefined8 *)(*plVar4 + lVar5 * 8) = 0xffffffffffffffff;
      lVar5 = lVar5 + 1;
    } while (iVar1 != lVar5);
  }
  local_38[1] = local_38[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481516d2 FUN_1481516d2 body=71 status=ok
// SIG undefined FUN_1481516d2(void)

void FUN_1481516d2(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14814fe70();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_14815171a();
      return;
    }
  }
  return;
}



// FUNCTION 14815171a FUN_14815171a body=62 status=ok
// SIG undefined FUN_14815171a(void)

void FUN_14815171a(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148151758(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,4);
  }
  return;
}



// FUNCTION 148151758 FUN_148151758 body=93 status=ok
// SIG undefined FUN_148151758(void)

ulonglong FUN_148151758(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x1ffffffffffff800U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,4);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 1481517b6 FUN_1481517b6 body=29 status=ok
// SIG undefined FUN_1481517b6(void)

undefined8 FUN_1481517b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481517e8 FUN_1481517e8 body=93 status=ok
// SIG undefined FUN_1481517e8(void)

void FUN_1481517e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc10c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151846 FUN_148151846 body=93 status=ok
// SIG undefined FUN_148151846(void)

void FUN_148151846(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc10c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481518a4 FUN_1481518a4 body=126 status=ok
// SIG undefined FUN_1481518a4(void)

void FUN_1481518a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc10c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148151913. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14815192c FUN_14815192c body=20 status=ok
// SIG undefined FUN_14815192c(void)

undefined1 FUN_14815192c(longlong param_1)

{
  FUN_148151940(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148151940 FUN_148151940 body=508 status=ok
// SIG undefined FUN_148151940(void)

void FUN_148151940(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  int iVar8;
  byte *pbVar9;
  PSRWLOCK SRWLock;
  longlong lVar10;
  longlong *plVar11;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  undefined4 *local_b0;
  undefined8 uStack_a8;
  int local_a0;
  uint *local_98;
  undefined8 uStack_90;
  int local_88;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_60 [8];
  char *local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481508e0(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_2);
  local_a0 = 0;
  local_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  FUN_144a98d08(&local_b0,param_2);
  pcVar6 = local_58;
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar11 = (longlong *)(lVar10 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
      FUN_148150064(pcVar6 + 0x10,lVar10 + 0x50);
    }
    plVar11 = (longlong *)(pcVar6 + 0x10);
  }
  bVar7 = *param_2;
  lVar10 = *(longlong *)(param_2 + 0x80);
  pbVar9 = (byte *)(lVar10 + 0x40);
  if (bVar7 != 0) {
    pbVar9 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar9) {
    iVar8 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar5 = *local_98;
      puVar2 = local_b0 + local_a0;
      puVar3 = local_c8 + local_b8;
      piVar4 = local_78 + local_68;
      if ((-1 < (int)uVar5 && *local_78 == 0) && ((int)uVar5 < (int)plVar11[1])) {
        *(ulonglong *)(*plVar11 + (ulonglong)uVar5 * 8) = CONCAT44(*local_b0,*local_c8);
        bVar7 = *param_2;
        lVar10 = *(longlong *)(param_2 + 0x80);
      }
      iVar8 = iVar8 + 1;
      pbVar9 = (byte *)(lVar10 + 0x40);
      if ((bVar7 & 1) != 0) {
        pbVar9 = param_2 + 0x3c;
      }
      local_c8 = puVar3;
      local_b0 = puVar2;
      local_98 = puVar1;
      local_78 = piVar4;
    } while (iVar8 < *(int *)pbVar9);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148151b3e FUN_148151b3e body=29 status=ok
// SIG undefined FUN_148151b3e(void)

undefined8 FUN_148151b3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148151b70 FUN_148151b70 body=93 status=ok
// SIG undefined FUN_148151b70(void)

void FUN_148151b70(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151bce FUN_148151bce body=93 status=ok
// SIG undefined FUN_148151bce(void)

void FUN_148151bce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1130;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151c2c FUN_148151c2c body=126 status=ok
// SIG undefined FUN_148151c2c(void)

void FUN_148151c2c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc1130;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148151c9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148151cb4 FUN_148151cb4 body=20 status=ok
// SIG undefined FUN_148151cb4(void)

undefined1 FUN_148151cb4(longlong param_1)

{
  FUN_148151cc8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148151cc8 FUN_148151cc8 body=511 status=ok
// SIG undefined FUN_148151cc8(void)

void FUN_148151cc8(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  byte bVar8;
  longlong lVar9;
  byte *pbVar10;
  int iVar11;
  PSRWLOCK SRWLock;
  int iVar12;
  longlong *plVar13;
  undefined1 auStack_e8 [32];
  PSRWLOCK local_c8;
  longlong local_c0;
  undefined4 *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined4 *local_a0;
  undefined8 uStack_98;
  int local_90;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  char *local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1481508e0(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_a8 = 0;
  local_b8 = (undefined4 *)0x0;
  uStack_b0 = 0;
  FUN_144a98d08(&local_b8,param_2);
  local_90 = 0;
  local_a0 = (undefined4 *)0x0;
  uStack_98 = 0;
  FUN_144a98d08(&local_a0,param_2);
  pcVar6 = local_68;
  lVar9 = *(longlong *)(param_1 + 0x10);
  iVar11 = 0x7fffffff;
  if (0 < *(int *)(lVar9 + 0x4c)) {
    iVar11 = *(int *)(lVar9 + 0x4c);
  }
  local_c0 = param_1;
  if (local_68 == (char *)0x0) {
    plVar13 = (longlong *)(lVar9 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_68 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar6 == '\0') {
      *pcVar6 = '\x01';
      FUN_148150064(pcVar6 + 0x10,lVar9 + 0x50);
    }
    plVar13 = (longlong *)(pcVar6 + 0x10);
  }
  bVar8 = *param_2;
  lVar9 = *(longlong *)(param_2 + 0x80);
  pbVar10 = (byte *)(lVar9 + 0x40);
  if (bVar8 != 0) {
    pbVar10 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar10) {
    iVar12 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar3 = *local_88;
      puVar2 = local_a0 + local_90;
      uVar4 = *local_a0;
      puVar7 = local_b8 + local_a8;
      local_a0 = puVar2;
      local_88 = piVar1;
      if (iVar3 == 0) {
        iVar3 = (int)plVar13[1];
        if (iVar3 < iVar11) {
          uVar5 = *local_b8;
          *(uint *)(plVar13 + 1) = iVar3 + 1U;
          local_b8 = puVar7;
          if (*(uint *)((longlong)plVar13 + 0xc) < iVar3 + 1U) {
            local_c8 = SRWLock;
            FUN_14814fe70(plVar13,iVar3);
            SRWLock = local_c8;
          }
          *(ulonglong *)(*plVar13 + (longlong)iVar3 * 8) = CONCAT44(uVar4,uVar5);
          bVar8 = *param_2;
          lVar9 = *(longlong *)(param_2 + 0x80);
          puVar7 = local_b8;
        }
      }
      local_b8 = puVar7;
      iVar12 = iVar12 + 1;
      pbVar10 = (byte *)(lVar9 + 0x40);
      if ((bVar8 & 1) != 0) {
        pbVar10 = param_2 + 0x3c;
      }
    } while (iVar12 < *(int *)pbVar10);
  }
  local_68[1] = local_68[1] | *(byte *)(local_c0 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148151ec8 FUN_148151ec8 body=29 status=ok
// SIG undefined FUN_148151ec8(void)

undefined8 FUN_148151ec8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148151efa FUN_148151efa body=93 status=ok
// SIG undefined FUN_148151efa(void)

void FUN_148151efa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc11a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151f58 FUN_148151f58 body=93 status=ok
// SIG undefined FUN_148151f58(void)

void FUN_148151f58(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc11a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148151fb6 FUN_148151fb6 body=126 status=ok
// SIG undefined FUN_148151fb6(void)

void FUN_148151fb6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14ad81180;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc11a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148152025. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14815203e FUN_14815203e body=20 status=ok
// SIG undefined FUN_14815203e(void)

undefined1 FUN_14815203e(longlong param_1)

{
  FUN_148152052(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148152052 FUN_148152052 body=540 status=ok
// SIG undefined FUN_148152052(void)

void FUN_148152052(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  int *piVar5;
  PSRWLOCK SRWLock;
  int iVar6;
  longlong *plVar7;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  int local_a0;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
  int *local_78;
  undefined8 uStack_70;
  int local_68;
  undefined1 local_58 [8];
  char *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1481508e0(local_58);
  local_78 = (int *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_144a76d88(&local_78,param_2);
  FUN_144a76cd4(&local_98,param_2);
  FUN_144a76cd4(&local_88,param_2);
  FUN_140126e42(&local_a8,param_2);
  pcVar4 = local_50;
  lVar2 = *(longlong *)(param_1 + 0x10);
  if (local_50 == (char *)0x0) {
    plVar7 = (longlong *)(lVar2 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_50 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_148150064(pcVar4 + 0x10,lVar2 + 0x50);
    }
    plVar7 = (longlong *)(pcVar4 + 0x10);
  }
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar6 = 0;
    do {
      if (*local_78 == 0) {
        iVar1 = (int)plVar7[1];
        if ((longlong)iVar1 == 0) goto LAB_14815213f;
        uVar3 = *(undefined8 *)(*plVar7 + -8 + (longlong)iVar1 * 8);
        *(int *)(plVar7 + 1) = iVar1 + -1;
        local_78 = local_78 + local_68;
        FUN_14815171a(plVar7);
        *local_98 = (int)uVar3;
        *local_88 = (int)((ulonglong)uVar3 >> 0x20);
        *local_a8 = 0xffffffff;
        local_a8 = local_a8 + local_a0;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
      }
      else {
LAB_14815213f:
        *local_98 = 0xffffffff;
        *local_88 = 0xffffffff;
        *local_a8 = 0;
        local_a8 = local_a8 + local_a0;
        local_98 = local_98 + local_90;
        local_88 = local_88 + local_80;
        local_78 = local_78 + local_68;
      }
      iVar6 = iVar6 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar6 < *piVar5);
  }
  local_50[1] = local_50[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148152270 FUN_148152270 body=958 status=ok
// SIG undefined FUN_148152270(void)

void FUN_148152270(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined1 auStack_208 [32];
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined8 *local_1c8;
  undefined4 local_1c0;
  code *local_1b8;
  undefined8 local_1a8;
  undefined **local_198;
  longlong local_190;
  undefined4 *local_188;
  undefined1 local_180;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined1 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined1 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined1 local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  undefined1 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  int local_64;
  undefined8 local_60;
  int local_58;
  undefined4 local_54;
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  lVar4 = *param_1;
  if (*(int *)(lVar4 + 0x78) != *(int *)(lVar4 + 0xa4)) {
    lVar1 = param_1[1];
    lVar7 = lVar4 + 0xa8;
    if (*(longlong *)(lVar4 + 0xb0) != 0) {
      lVar7 = *(longlong *)(lVar4 + 0xb0);
    }
    iVar5 = *(int *)(lVar7 + (ulonglong)
                             (*(int *)(lVar4 + 0xb8) - 1U &
                             (int)lVar1 + (int)((ulonglong)lVar1 >> 0x20) * 0x17) * 4);
    if (iVar5 != -1) {
      do {
        lVar7 = *(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar4 + 0x70) + (longlong)iVar5 * 0x40) == lVar1) {
          if (((lVar7 + 8U & 0xfffffffffffffff7) != 0) &&
             (iVar5 = *(int *)(lVar7 + 0x28), iVar5 != 0)) {
            lVar4 = param_1[2];
            iVar3 = (int)param_1[3];
            if (*(int *)(lVar4 + 0x40) <= iVar3) {
              FUN_1481287aa(lVar4 + 0x38,(iVar3 - *(int *)(lVar4 + 0x40)) + 1);
              lVar4 = param_1[2];
              iVar3 = (int)param_1[3];
              iVar5 = *(int *)(lVar7 + 0x28);
            }
            puVar8 = (undefined4 *)((longlong)iVar3 * 8 + *(longlong *)(lVar4 + 0x38));
            local_50 = 0;
            local_44 = 2;
            local_80 = 0;
            local_74 = 2;
            local_100 = 0;
            local_f4 = 2;
            iVar3 = *(int *)(lVar7 + 0x34);
            uVar6 = 1;
            local_48 = 1;
            local_160 = *(undefined8 *)(lVar7 + 0x10);
            local_68 = 0;
            local_150 = 0x400;
            if (iVar3 == -1) {
              local_150 = 0x10;
            }
            local_78 = 1;
            local_f0 = 0xffffffffffffffff;
            local_e8 = 0xffffffff;
            local_d8 = 2;
            local_d0 = 0x80;
            local_c0 = 0;
            local_f8 = 1;
            local_170 = 0xffffffffffffffff;
            local_168 = 0xffffffff;
            local_158 = 2;
            local_154 = 0x80;
            local_14c = 0;
            local_140 = 0;
            if (iVar3 != -1) {
              lVar4 = param_1[4];
              local_58 = iVar3 << 2;
              local_48 = 2;
              local_60 = *(undefined8 *)(lVar4 + 0x58);
              local_54 = 4;
              local_78 = 2;
              local_128 = *(undefined8 *)(lVar4 + 0x60);
              local_b8 = 0xffffffffffffffff;
              local_b0 = 0xffffffff;
              local_a0 = 3;
              local_9c = 0x80000000f0;
              local_94 = 0;
              local_88 = 0;
              local_f8 = 2;
              local_138 = 0xffffffffffffffff;
              local_130 = 0xffffffff;
              local_120 = 3;
              local_11c = 0xf000000080;
              local_114 = 0;
              local_108 = 0;
              uVar6 = 2;
              local_a8 = local_128;
            }
            else {
              *puVar8 = *(undefined4 *)(lVar7 + 0x30);
              lVar4 = param_1[4];
            }
            uVar2 = *(undefined8 *)(lVar4 + 0x28);
            local_1c8 = &local_f0;
            local_1c0 = uVar6;
            local_e0 = local_160;
            local_d4 = local_150;
            local_70 = local_160;
            local_64 = iVar5;
            FUN_144760590(param_2,&local_1c8,0);
            local_190 = param_1[2];
            local_180 = *(int *)(lVar7 + 0x34) == -1;
            local_1a8 = 0;
            local_198 = &PTR_LAB_14adc1210;
            local_1b8 = FUN_148152630;
            local_1d8 = &local_70;
            local_1d0 = uVar6;
            local_188 = puVar8;
            FUN_1481c8e40(uVar2,param_2);
            local_1e8 = &local_170;
            local_1e0 = uVar6;
            FUN_144760590(param_2,&local_1e8,0);
            FUN_143a96774(uVar2,param_2);
            FUN_148128c50(&local_170);
            FUN_148128c50(&local_f0);
            if (local_50 != 0) {
              FUN_1400020a8();
            }
          }
          break;
        }
        iVar5 = *(int *)(lVar7 + 0x38);
      } while (iVar5 != -1);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148152630 FUN_148152630 body=62 status=ok
// SIG undefined FUN_148152630(void)

void FUN_148152630(undefined8 param_1,undefined4 *param_2)

{
  undefined1 auStack_38 [32];
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FUN_1481526c0();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481526a2 FUN_1481526a2 body=29 status=ok
// SIG undefined FUN_1481526a2(void)

undefined8 FUN_1481526a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481526c0 FUN_1481526c0 body=191 status=ok
// SIG undefined FUN_1481526c0(void)

void FUN_1481526c0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  void *local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined4 *)param_1[1] = **(undefined4 **)(*param_2 + 0x10);
  }
  if (0 < (int)*(uint *)param_1[1]) {
    local_38 = (void *)0x0;
    uStack_30 = (ulonglong)*(uint *)param_1[1];
    FUN_14814fe70(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 3);
    local_40 = (int)uStack_30 << 3;
    local_48 = local_38;
    uVar1 = FUN_148119ae4(*param_1);
    *(undefined4 *)(param_1[1] + 4) = uVar1;
    if (local_38 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148152790 FUN_148152790 body=29 status=ok
// SIG undefined FUN_148152790(void)

void FUN_148152790(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481527ae FUN_1481527ae body=29 status=ok
// SIG undefined FUN_1481527ae(void)

undefined8 FUN_1481527ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481527cc FUN_1481527cc body=105 status=ok
// SIG undefined FUN_1481527cc(void)

void FUN_1481527cc(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148152270(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148152270(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014815282b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148152836 FUN_148152836 body=239 status=ok
// SIG undefined FUN_148152836(void)

void FUN_148152836(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_38 [32];
  longlong local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 0x78) != *(int *)(lVar1 + 0xa4)) {
    lVar2 = param_1[1];
    lVar4 = lVar1 + 0xa8;
    if (*(longlong *)(lVar1 + 0xb0) != 0) {
      lVar4 = *(longlong *)(lVar1 + 0xb0);
    }
    iVar3 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(lVar1 + 0xb8) - 1U &
                             (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
    if (iVar3 != -1) {
      do {
        lVar4 = *(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40;
        if (*(longlong *)(*(longlong *)(lVar1 + 0x70) + (longlong)iVar3 * 0x40) == lVar2) {
          if (lVar4 + 8 != 0 && lVar4 != 0) {
            lVar1 = *(longlong *)(param_1[2] + 0x38);
            local_18 = (longlong)*(int *)(lVar1 + 4 + (longlong)(int)param_1[3] * 8) +
                       *(longlong *)(param_1[2] + 0x48);
            local_10 = *(undefined4 *)(lVar1 + (longlong)(int)param_1[3] * 8);
            FUN_143a29728(lVar4 + 8);
          }
          break;
        }
        iVar3 = *(int *)(lVar4 + 0x38);
      } while (iVar3 != -1);
    }
  }
  if ((local_8 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148152936 FUN_148152936 body=29 status=ok
// SIG undefined FUN_148152936(void)

void FUN_148152936(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148152954 FUN_148152954 body=29 status=ok
// SIG undefined FUN_148152954(void)

undefined8 FUN_148152954(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148152972 FUN_148152972 body=105 status=ok
// SIG undefined FUN_148152972(void)

void FUN_148152972(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148152836(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148152836(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481529d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148152a0c FUN_148152a0c body=306 status=ok
// SIG undefined FUN_148152a0c(void)

undefined4 * FUN_148152a0c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148152b40(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_148152c26(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_148152d18(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148152b40 FUN_148152b40 body=230 status=ok
// SIG undefined FUN_148152b40(void)

int * FUN_148152b40(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14482b872(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 148152c26 FUN_148152c26 body=128 status=ok
// SIG undefined FUN_148152c26(void)

undefined8 FUN_148152c26(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_148152ca6((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148152ca6 FUN_148152ca6 body=114 status=ok
// SIG undefined FUN_148152ca6(void)

void FUN_148152ca6(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 148152d18 FUN_148152d18 body=447 status=ok
// SIG undefined FUN_148152d18(void)

void FUN_148152d18(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar10 = (longlong)((int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148152ed8 FUN_148152ed8 body=34 status=ok
// SIG undefined FUN_148152ed8(void)

ulonglong FUN_148152ed8(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 148152f24 FUN_148152f24 body=29 status=ok
// SIG undefined FUN_148152f24(void)

undefined8 FUN_148152f24(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148152f42 FUN_148152f42 body=180 status=ok
// SIG undefined FUN_148152f42(void)

void FUN_148152f42(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong *local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_38 = param_1 + 1;
  FUN_148152ff8(lVar2 + 0x70,&local_2c);
  lVar2 = *(longlong *)(lVar2 + 0x70);
  lVar6 = (longlong)local_2c * 0x40;
  cVar1 = *(char *)((longlong)param_1 + 0x1c);
  lVar4 = param_1[3];
  lVar3 = param_1[2];
  *(longlong *)(lVar2 + 8 + lVar6) = lVar3;
  *(undefined8 *)(lVar2 + 0x2c + lVar6) = 0xffffffff00000000;
  *(undefined4 *)(lVar2 + 0x34 + lVar6) = 0xffffffff;
  if (cVar1 == '\x01') {
    *(int *)(lVar2 + lVar6 + 0x2c) = (int)lVar4;
    uVar5 = FUN_1481c88ee(lVar3 + 0x38,param_2);
    *(undefined4 *)(lVar2 + lVar6 + 0x34) = uVar5;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148152ff8 FUN_148152ff8 body=374 status=ok
// SIG undefined FUN_148152ff8(void)

undefined4 * FUN_148152ff8(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_148153170(param_1,local_88);
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  local_50 = 0xffffffffffffffff;
  *local_80 = *(undefined8 *)*param_3;
  local_80[1] = 0;
  local_80[2] = 0;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[5] = 0;
  local_80[6] = 0xffffffffffffffff;
  FUN_14814f816(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_148153256(param_1,uVar7,local_80,&local_78);
  uVar1 = (undefined4)local_78;
  if (cVar2 == '\0') {
    uVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar3) {
      uVar4 = (ulonglong)(uVar3 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar3 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_80 + 0x3c) = uVar7;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_80 + 7) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = (undefined4)local_78;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_148153376(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148153170 FUN_148153170 body=229 status=ok
// SIG undefined FUN_148153170(void)

int * FUN_148153170(longlong *param_1,int *param_2)

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
      FUN_1406cd6a8(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x40);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x40) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x40 + *param_1;
  return param_2;
}



// FUNCTION 148153256 FUN_148153256 body=174 status=ok
// SIG undefined FUN_148153256(void)

undefined8 FUN_148153256(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    iVar15 = *(int *)((longlong)plVar14 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar15 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar15 * 0x40);
        if (*(longlong *)(*param_1 + (longlong)iVar15 * 0x40) == *param_3) {
          FUN_14814f816(puVar1 + 2);
          lVar8 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar9 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          lVar10 = param_3[2];
          uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
          lVar11 = param_3[3];
          uVar5 = *(undefined4 *)((longlong)param_3 + 0x1c);
          lVar12 = param_3[4];
          uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
          lVar13 = param_3[5];
          uVar7 = *(undefined4 *)((longlong)param_3 + 0x2c);
          *(longlong *)(puVar1 + 0xc) = param_3[6];
          puVar1[8] = (int)lVar12;
          puVar1[9] = uVar6;
          puVar1[10] = (int)lVar13;
          puVar1[0xb] = uVar7;
          puVar1[4] = (int)lVar10;
          puVar1[5] = uVar4;
          puVar1[6] = (int)lVar11;
          puVar1[7] = uVar5;
          *puVar1 = (int)lVar8;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar9;
          puVar1[3] = uVar3;
          FUN_148153304(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 148153304 FUN_148153304 body=114 status=ok
// SIG undefined FUN_148153304(void)

void FUN_148153304(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x40) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x40 + 4) = uVar4;
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



// FUNCTION 148153376 FUN_148153376 body=450 status=ok
// SIG undefined FUN_148153376(void)

void FUN_148153376(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x40;
        uVar10 = (longlong)
                 ((int)((ulonglong)*(undefined8 *)(lVar3 + lVar7) >> 0x20) * 0x17 +
                 (int)*(undefined8 *)(lVar3 + lVar7)) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x3c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x38 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14815354a FUN_14815354a body=29 status=ok
// SIG undefined FUN_14815354a(void)

void FUN_14815354a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148153568 FUN_148153568 body=29 status=ok
// SIG undefined FUN_148153568(void)

undefined8 FUN_148153568(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148153586 FUN_148153586 body=105 status=ok
// SIG undefined FUN_148153586(void)

void FUN_148153586(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148152f42(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148152f42(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481535e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481535f0 FUN_1481535f0 body=102 status=ok
// SIG undefined FUN_1481535f0(void)

void FUN_1481535f0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x40) == param_2) {
          FUN_148153656(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148153656 FUN_148153656 body=123 status=ok
// SIG undefined FUN_148153656(void)

void FUN_148153656(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x40;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar6 = (longlong)*(int *)(lVar1 + 0x3c + lVar2);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar1 + 0x38 + lVar6 * 0x40);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar1 + lVar6 * 0x40 + 0x38);
  }
  *puVar3 = *(undefined4 *)(lVar1 + lVar2 + 0x38);
  FUN_14814f816(*param_1 + lVar2 + 8);
  FUN_148153304(param_1,param_2);
  return;
}



// FUNCTION 1481536f0 FUN_1481536f0 body=12 status=ok
// SIG undefined FUN_1481536f0(void)

void FUN_1481536f0(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001481536f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1481536fc FUN_1481536fc body=29 status=ok
// SIG undefined FUN_1481536fc(void)

undefined8 FUN_1481536fc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14815371a FUN_14815371a body=117 status=ok
// SIG undefined FUN_14815371a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14815371a(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481535f0(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481535f0(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148153785. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148153790 FUN_148153790 body=102 status=ok
// SIG undefined FUN_148153790(void)

void FUN_148153790(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 +
                    ((longlong)((int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2) &
                    (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x18) == param_2) {
          FUN_1481537f6(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 1481537f6 FUN_1481537f6 body=87 status=ok
// SIG undefined FUN_1481537f6(void)

void FUN_1481537f6(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x18;
  lVar6 = (longlong)*(int *)(lVar1 + 0x14);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x10 + lVar6 * 0x18);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x18 + 0x10);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x10);
  FUN_148152ca6();
  return;
}



// FUNCTION 14815384e FUN_14815384e body=429 status=ok
// SIG undefined FUN_14815384e(void)

void FUN_14815384e(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_144a12820(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x20);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      puVar1 = *(undefined1 **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      *puVar1 = 0;
      puVar1[1] = puVar1[1] | *(byte *)(param_1 + 0x18);
      *(undefined4 *)(puVar1 + 0x18) = 0;
      if (*(int *)(puVar1 + 0x1c) != 0) {
        FUN_14482f6fa(puVar1 + 0x10,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  FUN_144a84024(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
  memcpy(*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),(void *)*param_2,
         (longlong)*(int *)(param_2 + 1) << 2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148153a1a FUN_148153a1a body=515 status=ok
// SIG undefined FUN_148153a1a(void)

void FUN_148153a1a(longlong param_1,longlong *param_2)

{
  double dVar1;
  undefined1 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_146c50912(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar5 = param_2[1];
    if (0 < (longlong)(int)lVar5) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar8 = 0;
      do {
        dVar1 = *(double *)(lVar3 + 8 + lVar8 * 2);
        *(float *)(lVar4 + lVar8) = (float)*(double *)(lVar3 + lVar8 * 2);
        *(float *)(lVar4 + 4 + lVar8) = (float)dVar1;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar6 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar7 = local_70._4_4_;
      local_70 = uVar6;
      do {
        puVar2 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar7 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar2 + 8));
        *puVar2 = 0;
        puVar2[1] = puVar2[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar2 + 0x18) = 0;
        if (*(int *)(puVar2 + 0x1c) != 0) {
          FUN_14171ef34(puVar2 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar2 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar7 = local_70._4_4_;
        uVar6 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar6;
    FUN_1407524e2(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar5 = param_2[1];
    if (0 < (longlong)(int)lVar5) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar8 = 0;
      do {
        dVar1 = *(double *)(lVar3 + 8 + lVar8 * 2);
        *(float *)(lVar4 + lVar8) = (float)*(double *)(lVar3 + lVar8 * 2);
        *(float *)(lVar4 + 4 + lVar8) = (float)dVar1;
        lVar8 = lVar8 + 8;
      } while ((longlong)(int)lVar5 * 8 != lVar8);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148153c1e FUN_148153c1e body=560 status=ok
// SIG undefined FUN_148153c1e(void)

void FUN_148153c1e(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_146bfab7c(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar6 = param_2[1];
    if (0 < (longlong)(int)lVar6) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar9 = 0;
      do {
        dVar1 = *(double *)(lVar3 + 0x10 + lVar9 * 2);
        dVar2 = *(double *)(lVar3 + 8 + lVar9 * 2);
        *(float *)(lVar4 + lVar9) = (float)*(double *)(lVar3 + lVar9 * 2);
        *(float *)(lVar4 + 4 + lVar9) = (float)dVar2;
        *(float *)(lVar4 + 8 + lVar9) = (float)dVar1;
        lVar9 = lVar9 + 0xc;
      } while ((longlong)(int)lVar6 * 0xc != lVar9);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar7 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar8 = local_70._4_4_;
      local_70 = uVar7;
      do {
        puVar5 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar8 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 8));
        *puVar5 = 0;
        puVar5[1] = puVar5[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar5 + 0x18) = 0;
        if (*(int *)(puVar5 + 0x1c) != 0) {
          FUN_140678446(puVar5 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar8 = local_70._4_4_;
        uVar7 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar7;
    FUN_146bca1c8(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar6 = param_2[1];
    if (0 < (longlong)(int)lVar6) {
      lVar3 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar9 = 0;
      do {
        dVar1 = *(double *)(lVar3 + 0x10 + lVar9 * 2);
        dVar2 = *(double *)(lVar3 + 8 + lVar9 * 2);
        *(float *)(lVar4 + lVar9) = (float)*(double *)(lVar3 + lVar9 * 2);
        *(float *)(lVar4 + 4 + lVar9) = (float)dVar2;
        *(float *)(lVar4 + 8 + lVar9) = (float)dVar1;
        lVar9 = lVar9 + 0xc;
      } while ((longlong)(int)lVar6 * 0xc != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148153e50 FUN_148153e50 body=498 status=ok
// SIG undefined FUN_148153e50(void)

void FUN_148153e50(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_14811e196(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar4 = param_2[1];
    if (0 < (longlong)(int)lVar4) {
      lVar1 = *param_2;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar2 + 8 + lVar7) = *(undefined4 *)(lVar1 + 8 + lVar7);
        *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
        lVar7 = lVar7 + 0xc;
      } while ((longlong)(int)lVar4 * 0xc != lVar7);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        puVar3 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar6 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 8));
        *puVar3 = 0;
        puVar3[1] = puVar3[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar3 + 0x18) = 0;
        if (*(int *)(puVar3 + 0x1c) != 0) {
          FUN_14812fcda(puVar3 + 0x10);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar5;
    FUN_148154044(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar4 = param_2[1];
    if (0 < (longlong)(int)lVar4) {
      lVar1 = *param_2;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar7 = 0;
      do {
        *(undefined4 *)(lVar2 + 8 + lVar7) = *(undefined4 *)(lVar1 + 8 + lVar7);
        *(undefined8 *)(lVar2 + lVar7) = *(undefined8 *)(lVar1 + lVar7);
        lVar7 = lVar7 + 0xc;
      } while ((longlong)(int)lVar4 * 0xc != lVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148154044 FUN_148154044 body=71 status=ok
// SIG undefined FUN_148154044(void)

void FUN_148154044(longlong param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 8) = param_2;
    if ((uint)(*(int *)(param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_14812fa6a();
      return;
    }
  }
  else {
    if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(param_2);
    }
    if (param_2 < iVar1) {
      *(int *)(param_1 + 8) = param_2;
      FUN_148131660();
      return;
    }
  }
  return;
}



// FUNCTION 14815408c FUN_14815408c body=590 status=ok
// SIG undefined FUN_14815408c(void)

void FUN_14815408c(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_140330574(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar7 = param_2[1];
    if (0 < (longlong)(int)lVar7) {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar10 = 0;
      do {
        dVar1 = *(double *)(lVar4 + 0x18 + lVar10 * 2);
        dVar2 = *(double *)(lVar4 + 0x10 + lVar10 * 2);
        dVar3 = *(double *)(lVar4 + 8 + lVar10 * 2);
        *(float *)(lVar5 + lVar10) = (float)*(double *)(lVar4 + lVar10 * 2);
        *(float *)(lVar5 + 4 + lVar10) = (float)dVar3;
        *(float *)(lVar5 + 8 + lVar10) = (float)dVar2;
        *(float *)(lVar5 + 0xc + lVar10) = (float)dVar1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar10);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar8 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar9 = local_70._4_4_;
      local_70 = uVar8;
      do {
        puVar6 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar9 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar6 + 8));
        *puVar6 = 0;
        puVar6[1] = puVar6[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar6 + 0x18) = 0;
        if (*(int *)(puVar6 + 0x1c) != 0) {
          FUN_14499148c(puVar6 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar6 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar8 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar8;
    FUN_14056a44c(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar7 = param_2[1];
    if (0 < (longlong)(int)lVar7) {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar10 = 0;
      do {
        dVar1 = *(double *)(lVar4 + 0x18 + lVar10 * 2);
        dVar2 = *(double *)(lVar4 + 0x10 + lVar10 * 2);
        dVar3 = *(double *)(lVar4 + 8 + lVar10 * 2);
        *(float *)(lVar5 + lVar10) = (float)*(double *)(lVar4 + lVar10 * 2);
        *(float *)(lVar5 + 4 + lVar10) = (float)dVar3;
        *(float *)(lVar5 + 8 + lVar10) = (float)dVar2;
        *(float *)(lVar5 + 0xc + lVar10) = (float)dVar1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481542dc FUN_1481542dc body=433 status=ok
// SIG undefined FUN_1481542dc(void)

void FUN_1481542dc(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_14735c9c0(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x20);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      puVar1 = *(undefined1 **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      *puVar1 = 0;
      puVar1[1] = puVar1[1] | *(byte *)(param_1 + 0x18);
      *(undefined4 *)(puVar1 + 0x18) = 0;
      if (*(int *)(puVar1 + 0x1c) != 0) {
        FUN_144750f90(puVar1 + 0x10,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  FUN_140a4b95e(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
  memcpy(*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),(void *)*param_2,
         (longlong)*(int *)(param_2 + 1) << 4);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481544ac FUN_1481544ac body=598 status=ok
// SIG undefined FUN_1481544ac(void)

void FUN_1481544ac(longlong param_1,longlong *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  longlong lVar10;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_14813bc2a(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar7 = param_2[1];
    if (0 < (longlong)(int)lVar7) {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar10 = 0;
      do {
        dVar1 = *(double *)(lVar4 + 0x18 + lVar10 * 2);
        dVar2 = *(double *)(lVar4 + 0x10 + lVar10 * 2);
        dVar3 = *(double *)(lVar4 + 8 + lVar10 * 2);
        *(float *)(lVar5 + lVar10) = (float)*(double *)(lVar4 + lVar10 * 2);
        *(float *)(lVar5 + 4 + lVar10) = (float)dVar3;
        *(float *)(lVar5 + 8 + lVar10) = (float)dVar2;
        *(float *)(lVar5 + 0xc + lVar10) = (float)dVar1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar10);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar8 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar9 = local_70._4_4_;
      local_70 = uVar8;
      do {
        puVar6 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar9 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar6 + 8));
        *puVar6 = 0;
        puVar6[1] = puVar6[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar6 + 0x18) = 0;
        if (*(int *)(puVar6 + 0x1c) != 0) {
          FUN_146ed5086(puVar6 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar6 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar9 = local_70._4_4_;
        uVar8 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar8;
    FUN_146ed4ee8(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar7 = param_2[1];
    if (0 < (longlong)(int)lVar7) {
      lVar4 = *param_2;
      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar10 = 0;
      do {
        dVar1 = *(double *)(lVar4 + 0x18 + lVar10 * 2);
        dVar2 = *(double *)(lVar4 + 0x10 + lVar10 * 2);
        dVar3 = *(double *)(lVar4 + 8 + lVar10 * 2);
        *(float *)(lVar5 + lVar10) = (float)*(double *)(lVar4 + lVar10 * 2);
        *(float *)(lVar5 + 4 + lVar10) = (float)dVar3;
        *(float *)(lVar5 + 8 + lVar10) = (float)dVar2;
        *(float *)(lVar5 + 0xc + lVar10) = (float)dVar1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar7 * 0x10 != lVar10);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148154704 FUN_148154704 body=596 status=ok
// SIG undefined FUN_148154704(void)

void FUN_148154704(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_140491ce0(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1],1);
    lVar6 = param_2[1];
    if (0 < (longlong)(int)lVar6) {
      lVar8 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar9 = 0;
      do {
        FUN_144a928e2(&local_88,lVar8);
        puVar1 = (undefined4 *)(lVar4 + lVar9);
        *puVar1 = (undefined4)local_88;
        puVar1[1] = local_88._4_4_;
        puVar1[2] = (undefined4)uStack_80;
        puVar1[3] = uStack_80._4_4_;
        plVar2 = (longlong *)(lVar4 + 0x10 + lVar9);
        *plVar2 = local_78;
        plVar2[1] = uStack_70;
        puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar9);
        *puVar3 = CONCAT44(uStack_64,local_68);
        puVar3[1] = uStack_60;
        puVar3 = (undefined8 *)(lVar4 + 0x30 + lVar9);
        *puVar3 = local_58;
        puVar3[1] = uStack_50;
        lVar9 = lVar9 + 0x40;
        lVar8 = lVar8 + 0x80;
      } while ((longlong)(int)lVar6 * 0x40 != lVar9);
    }
  }
  else {
    local_a0 = param_1 + 0x30;
    local_a8 = 0x100000000;
    local_98 = 0xffffffff;
    local_90 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_a8);
    }
    uStack_70 = local_98;
    lVar6 = uStack_70;
    local_68 = local_90;
    uStack_64 = local_8c;
    uStack_80 = local_a8;
    local_78 = local_a0;
    uStack_70._4_4_ = (int)((ulonglong)local_98 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (uStack_70._4_4_ < *(int *)(local_a0 + 0x18)) {
      iVar7 = uStack_70._4_4_;
      uStack_70 = lVar6;
      do {
        puVar5 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar7 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar5 + 8));
        *puVar5 = 0;
        puVar5[1] = puVar5[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar5 + 0x18) = 0;
        if (*(int *)(puVar5 + 0x1c) != 0) {
          FUN_14491ce3c(puVar5 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar5 + 8));
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_80._4_4_);
        FUN_1449c0562(&uStack_80);
        iVar7 = uStack_70._4_4_;
        lVar6 = uStack_70;
      } while (uStack_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    uStack_70 = lVar6;
    FUN_14815495a(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1],1);
    lVar6 = param_2[1];
    if (0 < (longlong)(int)lVar6) {
      lVar8 = *param_2;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar9 = 0;
      do {
        FUN_144a928e2(&local_88,lVar8);
        puVar1 = (undefined4 *)(lVar4 + lVar9);
        *puVar1 = (undefined4)local_88;
        puVar1[1] = local_88._4_4_;
        puVar1[2] = (undefined4)uStack_80;
        puVar1[3] = uStack_80._4_4_;
        plVar2 = (longlong *)(lVar4 + 0x10 + lVar9);
        *plVar2 = local_78;
        plVar2[1] = uStack_70;
        puVar3 = (undefined8 *)(lVar4 + 0x20 + lVar9);
        *puVar3 = CONCAT44(uStack_64,local_68);
        puVar3[1] = uStack_60;
        puVar3 = (undefined8 *)(lVar4 + 0x30 + lVar9);
        *puVar3 = local_58;
        puVar3[1] = uStack_50;
        lVar9 = lVar9 + 0x40;
        lVar8 = lVar8 + 0x80;
      } while ((longlong)(int)lVar6 * 0x40 != lVar9);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14815495a FUN_14815495a body=115 status=ok
// SIG undefined FUN_14815495a(void)

void FUN_14815495a(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140491d2e(param_1,iVar1);
    }
    FUN_147d1eed2((longlong)iVar1 * 0x40 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_146faaad4(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1481549ce FUN_1481549ce body=429 status=ok
// SIG undefined FUN_1481549ce(void)

void FUN_1481549ce(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_144a127d2(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x20);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      puVar1 = *(undefined1 **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      *puVar1 = 0;
      puVar1[1] = puVar1[1] | *(byte *)(param_1 + 0x18);
      *(undefined4 *)(puVar1 + 0x18) = 0;
      if (*(int *)(puVar1 + 0x1c) != 0) {
        FUN_14481578e(puVar1 + 0x10,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  FUN_144a1a59e(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
  memcpy(*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),(void *)*param_2,
         (longlong)*(int *)(param_2 + 1) << 2);
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148154b9a FUN_148154b9a body=460 status=ok
// SIG undefined FUN_148154b9a(void)

void FUN_148154b9a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
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
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_140393c76(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar4 = param_2[1];
    if (0 < (longlong)(int)lVar4) {
      lVar1 = *param_2;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar7 = 0;
      do {
        *(undefined1 *)(lVar2 + lVar7) = *(undefined1 *)(lVar1 + lVar7 * 4);
        lVar7 = lVar7 + 1;
      } while ((int)lVar4 != lVar7);
    }
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) != 0) {
      FUN_1449c0562(&local_60);
    }
    local_70 = local_50;
    uVar5 = local_70;
    local_68 = local_48;
    local_64 = local_44;
    local_80 = local_60;
    local_78 = local_58;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_88 = (longlong *)(param_1 + 0x20);
    if (local_70._4_4_ < *(int *)(local_58 + 0x18)) {
      iVar6 = local_70._4_4_;
      local_70 = uVar5;
      do {
        puVar3 = *(undefined1 **)(*local_88 + 8 + (longlong)iVar6 * 0x18);
        AcquireSRWLockExclusive((PSRWLOCK)(puVar3 + 8));
        *puVar3 = 0;
        puVar3[1] = puVar3[1] | *(byte *)(param_1 + 0x18);
        *(undefined4 *)(puVar3 + 0x18) = 0;
        if (*(int *)(puVar3 + 0x1c) != 0) {
          FUN_144893a1c(puVar3 + 0x10,0);
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(puVar3 + 8));
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~local_80._4_4_);
        FUN_1449c0562(&local_80);
        iVar6 = local_70._4_4_;
        uVar5 = local_70;
      } while (local_70._4_4_ < *(int *)(local_78 + 0x18));
    }
    local_70 = uVar5;
    FUN_144a5eaa2(*(longlong *)(param_1 + 0x10) + 0x50,(int)param_2[1]);
    lVar4 = param_2[1];
    if (0 < (longlong)(int)lVar4) {
      lVar1 = *param_2;
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x50);
      lVar7 = 0;
      do {
        *(undefined1 *)(lVar2 + lVar7) = *(undefined1 *)(lVar1 + lVar7 * 4);
        lVar7 = lVar7 + 1;
      } while ((int)lVar4 != lVar7);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148154d68 FUN_148154d68 body=421 status=ok
// SIG undefined FUN_148154d68(void)

void FUN_148154d68(longlong param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  longlong local_58;
  uint local_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    FUN_144aa2a62(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_a8);
  }
  local_58 = param_1 + 0x30;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  iStack_4c = 0;
  local_48 = 0;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_1449c0562(&local_60);
  }
  local_70 = local_50;
  iStack_6c = iStack_4c;
  local_68 = local_48;
  local_64 = local_44;
  local_80 = local_60;
  local_78 = local_58;
  local_88 = (longlong *)(param_1 + 0x20);
  if (iStack_4c < *(int *)(local_58 + 0x18)) {
    do {
      puVar1 = *(undefined1 **)(*local_88 + 8 + (longlong)iStack_6c * 0x18);
      AcquireSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      *puVar1 = 0;
      puVar1[1] = puVar1[1] | *(byte *)(param_1 + 0x18);
      *(undefined4 *)(puVar1 + 0x18) = 0;
      if (*(int *)(puVar1 + 0x1c) != 0) {
        FUN_14475e67c(puVar1 + 0x10,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(puVar1 + 8));
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
  }
  FUN_1448c4dd6(*(longlong *)(param_1 + 0x10) + 0x50,*(undefined4 *)(param_2 + 1),1);
  memcpy(*(void **)(*(longlong *)(param_1 + 0x10) + 0x50),(void *)*param_2,
         (longlong)*(int *)(param_2 + 1));
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148154f2c FUN_148154f2c body=275 status=ok
// SIG undefined FUN_148154f2c(void)

undefined8 * FUN_148154f2c(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar3;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar1 = (longlong)local_38._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar1 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        pcVar2 = pcVar2 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar3 + 0x50);
      }
      goto LAB_148154f5c;
    }
  }
  pcVar2 = (char *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148154f5c:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a84024(param_2,*(undefined4 *)(pcVar2 + 8),1);
  memcpy((void *)*param_2,*(void **)pcVar2,(longlong)*(int *)(pcVar2 + 8) << 2);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155040 FUN_148155040 body=323 status=ok
// SIG undefined FUN_148155040(void)

longlong * FUN_148155040(longlong param_1,longlong *param_2)

{
  float fVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  PSRWLOCK SRWLock;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar6;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar6 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar4 = (longlong)local_38._4_4_;
    }
    lVar6 = *(longlong *)(param_1 + 0x10);
    pcVar3 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar4 * 0x18);
    if (pcVar3 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar3 == '\x01') {
        plVar5 = (longlong *)(pcVar3 + 0x10);
      }
      else {
        plVar5 = (longlong *)(lVar6 + 0x50);
      }
      goto LAB_148155074;
    }
  }
  plVar5 = (longlong *)(lVar6 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148155074:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1407feed2(param_2,(int)plVar5[1]);
  lVar4 = plVar5[1];
  if (0 < (longlong)(int)lVar4) {
    lVar6 = *plVar5;
    lVar2 = *param_2;
    lVar7 = 0;
    do {
      fVar1 = *(float *)(lVar6 + 4 + lVar7);
      *(double *)(lVar2 + lVar7 * 2) = (double)*(float *)(lVar6 + lVar7);
      *(double *)(lVar2 + 8 + lVar7 * 2) = (double)fVar1;
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155184 FUN_148155184 body=344 status=ok
// SIG undefined FUN_148155184(void)

longlong * FUN_148155184(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  PSRWLOCK SRWLock;
  longlong lVar8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar7;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar5 = (longlong)local_38._4_4_;
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    pcVar4 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar5 * 0x18);
    if (pcVar4 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar4 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar4 == '\x01') {
        plVar6 = (longlong *)(pcVar4 + 0x10);
      }
      else {
        plVar6 = (longlong *)(lVar7 + 0x50);
      }
      goto LAB_1481551b8;
    }
  }
  plVar6 = (longlong *)(lVar7 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_1481551b8:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14051b394(param_2,(int)plVar6[1]);
  lVar5 = plVar6[1];
  if (0 < (longlong)(int)lVar5) {
    lVar7 = *plVar6;
    lVar3 = *param_2;
    lVar8 = 0;
    do {
      fVar1 = *(float *)(lVar7 + 8 + lVar8);
      fVar2 = *(float *)(lVar7 + 4 + lVar8);
      *(double *)(lVar3 + lVar8 * 2) = (double)*(float *)(lVar7 + lVar8);
      *(double *)(lVar3 + 8 + lVar8 * 2) = (double)fVar2;
      *(double *)(lVar3 + 0x10 + lVar8 * 2) = (double)fVar1;
      lVar8 = lVar8 + 0xc;
    } while ((longlong)(int)lVar5 * 0xc != lVar8);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481552de FUN_1481552de body=302 status=ok
// SIG undefined FUN_1481552de(void)

longlong * FUN_1481552de(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  PSRWLOCK SRWLock;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar3 = (longlong)local_38._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        plVar4 = (longlong *)(pcVar2 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_14815530e;
    }
  }
  plVar4 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_14815530e:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_148154044(param_2,(int)plVar4[1]);
  lVar3 = plVar4[1];
  if (0 < (longlong)(int)lVar3) {
    lVar5 = *plVar4;
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar1 + 8 + lVar6) = *(undefined4 *)(lVar5 + 8 + lVar6);
      *(undefined8 *)(lVar1 + lVar6) = *(undefined8 *)(lVar5 + lVar6);
      lVar6 = lVar6 + 0xc;
    } while ((longlong)(int)lVar3 * 0xc != lVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815540e FUN_14815540e body=350 status=ok
// SIG undefined FUN_14815540e(void)

longlong * FUN_14815540e(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  PSRWLOCK SRWLock;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar8 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar6 = (longlong)local_38._4_4_;
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
    pcVar5 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar6 * 0x18);
    if (pcVar5 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar5 == '\x01') {
        plVar7 = (longlong *)(pcVar5 + 0x10);
      }
      else {
        plVar7 = (longlong *)(lVar8 + 0x50);
      }
      goto LAB_148155442;
    }
  }
  plVar7 = (longlong *)(lVar8 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148155442:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_14815556e(param_2,(int)plVar7[1]);
  lVar6 = plVar7[1];
  if (0 < (longlong)(int)lVar6) {
    lVar8 = *plVar7;
    lVar4 = *param_2;
    lVar9 = 0;
    do {
      fVar1 = *(float *)(lVar8 + 0xc + lVar9);
      fVar2 = *(float *)(lVar8 + 8 + lVar9);
      fVar3 = *(float *)(lVar8 + 4 + lVar9);
      *(double *)(lVar4 + lVar9 * 2) = (double)*(float *)(lVar8 + lVar9);
      *(double *)(lVar4 + 8 + lVar9 * 2) = (double)fVar3;
      *(double *)(lVar4 + 0x10 + lVar9 * 2) = (double)fVar2;
      *(double *)(lVar4 + 0x18 + lVar9 * 2) = (double)fVar1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar9);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815556e FUN_14815556e body=150 status=ok
// SIG undefined FUN_14815556e(void)

void FUN_14815556e(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    uVar3 = param_2 - iVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < uVar3) {
      FUN_147ca659c(param_1,iVar1);
    }
    puVar2 = (undefined8 *)((longlong)iVar1 * 0x20 + *param_1);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0x3ff0000000000000;
      puVar2 = puVar2 + 4;
    }
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_148155606(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148155606 FUN_148155606 body=62 status=ok
// SIG undefined FUN_148155606(void)

void FUN_148155606(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_148155644(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x20,0x10);
  }
  return;
}



// FUNCTION 148155644 FUN_148155644 body=93 status=ok
// SIG undefined FUN_148155644(void)

ulonglong FUN_148155644(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0x7fffffffffffe00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 5,0x10);
      uVar1 = uVar1 >> 5;
    }
  }
  return uVar1;
}



// FUNCTION 1481556a2 FUN_1481556a2 body=275 status=ok
// SIG undefined FUN_1481556a2(void)

undefined8 * FUN_1481556a2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar3;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar1 = (longlong)local_38._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar1 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        pcVar2 = pcVar2 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar3 + 0x50);
      }
      goto LAB_1481556d2;
    }
  }
  pcVar2 = (char *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_1481556d2:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_140a4b95e(param_2,*(undefined4 *)(pcVar2 + 8),1);
  memcpy((void *)*param_2,*(void **)pcVar2,(longlong)*(int *)(pcVar2 + 8) << 4);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481557b6 FUN_1481557b6 body=350 status=ok
// SIG undefined FUN_1481557b6(void)

longlong * FUN_1481557b6(longlong param_1,longlong *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  longlong *plVar7;
  PSRWLOCK SRWLock;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar8;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar8 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar6 = (longlong)local_38._4_4_;
    }
    lVar8 = *(longlong *)(param_1 + 0x10);
    pcVar5 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar6 * 0x18);
    if (pcVar5 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar5 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar5 == '\x01') {
        plVar7 = (longlong *)(pcVar5 + 0x10);
      }
      else {
        plVar7 = (longlong *)(lVar8 + 0x50);
      }
      goto LAB_1481557ea;
    }
  }
  plVar7 = (longlong *)(lVar8 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_1481557ea:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_148155916(param_2,(int)plVar7[1]);
  lVar6 = plVar7[1];
  if (0 < (longlong)(int)lVar6) {
    lVar8 = *plVar7;
    lVar4 = *param_2;
    lVar9 = 0;
    do {
      fVar1 = *(float *)(lVar8 + 0xc + lVar9);
      fVar2 = *(float *)(lVar8 + 8 + lVar9);
      fVar3 = *(float *)(lVar8 + 4 + lVar9);
      *(double *)(lVar4 + lVar9 * 2) = (double)*(float *)(lVar8 + lVar9);
      *(double *)(lVar4 + 8 + lVar9 * 2) = (double)fVar3;
      *(double *)(lVar4 + 0x10 + lVar9 * 2) = (double)fVar2;
      *(double *)(lVar4 + 0x18 + lVar9 * 2) = (double)fVar1;
      lVar9 = lVar9 + 0x10;
    } while ((longlong)(int)lVar6 * 0x10 != lVar9);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155916 FUN_148155916 body=109 status=ok
// SIG undefined FUN_148155916(void)

void FUN_148155916(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140e16be0(param_1,iVar1);
    }
    FUN_148155984((longlong)iVar1 * 0x20 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1457ef6ee(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 148155984 FUN_148155984 body=1 status=ok
// SIG undefined FUN_148155984(void)

void FUN_148155984(void)

{
  return;
}



// FUNCTION 148155986 FUN_148155986 body=362 status=ok
// SIG undefined FUN_148155986(void)

longlong * FUN_148155986(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar8;
  PSRWLOCK SRWLock;
  undefined1 auStack_f8 [40];
  longlong *local_d0;
  longlong local_c8 [2];
  undefined8 local_b8;
  int iStack_b4;
  undefined4 local_b0;
  ulonglong local_48;
  longlong lVar7;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_d0 = param_2;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar7 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_c8[1] = param_1 + 0x30;
    local_c8[0] = 0x100000000;
    local_b8 = 0xffffffff;
    local_b0 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(local_c8);
      lVar3 = (longlong)iStack_b4;
    }
    lVar7 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        plVar6 = (longlong *)(pcVar2 + 0x10);
      }
      else {
        plVar6 = (longlong *)(lVar7 + 0x50);
      }
      goto LAB_1481559ca;
    }
  }
  plVar6 = (longlong *)(lVar7 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_1481559ca:
  *local_d0 = 0;
  local_d0[1] = 0;
  FUN_14796186c(local_d0,(int)plVar6[1],1);
  lVar3 = plVar6[1];
  if (0 < (longlong)(int)lVar3) {
    lVar7 = *plVar6;
    lVar1 = *local_d0;
    lVar5 = 0;
    do {
      FUN_144b10ee8(local_c8,lVar5 + lVar7);
      plVar6 = local_c8;
      plVar8 = (longlong *)(lVar5 * 2 + lVar1);
      for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
        *plVar8 = *plVar6;
        plVar6 = plVar6 + 1;
        plVar8 = plVar8 + 1;
      }
      lVar5 = lVar5 + 0x40;
    } while ((longlong)(int)lVar3 * 0x40 != lVar5);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return local_d0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155af2 FUN_148155af2 body=275 status=ok
// SIG undefined FUN_148155af2(void)

undefined8 * FUN_148155af2(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar3;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar1 = (longlong)local_38._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar1 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        pcVar2 = pcVar2 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar3 + 0x50);
      }
      goto LAB_148155b22;
    }
  }
  pcVar2 = (char *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148155b22:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a1a59e(param_2,*(undefined4 *)(pcVar2 + 8),1);
  memcpy((void *)*param_2,*(void **)pcVar2,(longlong)*(int *)(pcVar2 + 8) << 2);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155c06 FUN_148155c06 body=291 status=ok
// SIG undefined FUN_148155c06(void)

longlong * FUN_148155c06(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  PSRWLOCK SRWLock;
  longlong lVar6;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar3 = (longlong)local_38._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        plVar4 = (longlong *)(pcVar2 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_148155c36;
    }
  }
  plVar4 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148155c36:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_144a1a59e(param_2,(int)plVar4[1]);
  lVar3 = plVar4[1];
  if (0 < (longlong)(int)lVar3) {
    lVar5 = *plVar4;
    lVar1 = *param_2;
    lVar6 = 0;
    do {
      *(uint *)(lVar1 + lVar6 * 4) = (uint)*(byte *)(lVar5 + lVar6);
      lVar6 = lVar6 + 1;
    } while ((int)lVar3 != lVar6);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155d2a FUN_148155d2a body=271 status=ok
// SIG undefined FUN_148155d2a(void)

undefined8 * FUN_148155d2a(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar3;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar1 = (longlong)local_38._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar1 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        pcVar2 = pcVar2 + 0x10;
      }
      else {
        pcVar2 = (char *)(lVar3 + 0x50);
      }
      goto LAB_148155d5a;
    }
  }
  pcVar2 = (char *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148155d5a:
  *param_2 = 0;
  param_2[1] = 0;
  FUN_1448c4dd6(param_2,*(undefined4 *)(pcVar2 + 8),1);
  memcpy((void *)*param_2,*(void **)pcVar2,(longlong)*(int *)(pcVar2 + 8));
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155e3a FUN_148155e3a body=321 status=ok
// SIG undefined FUN_148155e3a(void)

void FUN_148155e3a(longlong param_1,int param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    local_58 = (longlong *)(param_1 + 0x30);
    local_60 = (PSRWLOCK)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      lVar3 = (longlong)local_50._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_148127078(&local_60,*(undefined8 *)(param_1 + 0x10),lVar3);
  plVar2 = local_58;
  if ((param_2 < 0) || ((int)local_58[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148155f46;
    iVar1 = (int)local_58[1];
    *(int *)(local_58 + 1) = param_2 + 1;
    uVar4 = (param_2 + 1) - iVar1;
    if ((uint)(*(int *)((longlong)local_58 + 0xc) - iVar1) < uVar4) {
      FUN_14475e4ac(local_58);
    }
    memset((void *)((longlong)iVar1 * 4 + *plVar2),0,(longlong)(int)uVar4 << 2);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  *(undefined4 *)(*local_58 + (longlong)param_2 * 4) = *param_3;
LAB_148155f46:
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148155f7c FUN_148155f7c body=280 status=ok
// SIG undefined FUN_148155f7c(void)

void FUN_148155f7c(longlong param_1,int param_2,double *param_3,char param_4)

{
  double dVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar2 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar2 = (longlong)local_40._4_4_;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
  }
  FUN_148129ade(&local_50,*(undefined8 *)(param_1 + 0x10),lVar2);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148156050;
    FUN_146eb5330(local_48,(param_2 - (int)local_48[1]) + 1);
  }
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | *(byte *)(param_1 + 0x18);
  }
  dVar1 = param_3[1];
  lVar2 = *local_48;
  *(float *)(lVar2 + (longlong)param_2 * 8) = (float)*param_3;
  *(float *)(lVar2 + 4 + (longlong)param_2 * 8) = (float)dVar1;
LAB_148156050:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156096 FUN_148156096 body=298 status=ok
// SIG undefined FUN_148156096(void)

void FUN_148156096(longlong param_1,int param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar3 = (longlong)local_40._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_14812cde8(&local_50,*(undefined8 *)(param_1 + 0x10),lVar3);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148156179;
    FUN_146c9778a(local_48,(param_2 - (int)local_48[1]) + 1);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  dVar1 = param_3[2];
  lVar3 = *local_48;
  dVar2 = param_3[1];
  lVar4 = (longlong)param_2;
  *(float *)(lVar3 + lVar4 * 0xc) = (float)*param_3;
  *(float *)(lVar3 + 4 + lVar4 * 0xc) = (float)dVar2;
  *(float *)(lVar3 + 8 + lVar4 * 0xc) = (float)dVar1;
LAB_148156179:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481561c2 FUN_1481561c2 body=292 status=ok
// SIG undefined FUN_1481561c2(void)

void FUN_1481561c2(longlong param_1,int param_2,undefined8 *param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar2 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar2 = (longlong)local_40._4_4_;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
  }
  FUN_14812fc6c(&local_50,*(undefined8 *)(param_1 + 0x10),lVar2);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_1481562ae;
    lVar1 = local_48[1];
    *(int *)(local_48 + 1) = param_2 + 1;
    if ((uint)(*(int *)((longlong)local_48 + 0xc) - (int)lVar1) < (uint)((param_2 + 1) - (int)lVar1)
       ) {
      FUN_14812fa6a();
    }
  }
  if (lVar2 != 0) {
    *(byte *)(lVar2 + 1) = *(byte *)(lVar2 + 1) | *(byte *)(param_1 + 0x18);
  }
  lVar2 = *local_48;
  *(undefined4 *)(lVar2 + 8 + (longlong)param_2 * 0xc) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar2 + (longlong)param_2 * 0xc) = *param_3;
LAB_1481562ae:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481562e8 FUN_1481562e8 body=309 status=ok
// SIG undefined FUN_1481562e8(void)

void FUN_1481562e8(longlong param_1,int param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar4 = (longlong)local_40._4_4_;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4 * 0x18);
  }
  FUN_1481333da(&local_50,*(undefined8 *)(param_1 + 0x10),lVar4);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_1481563d6;
    FUN_146eb4cd0(local_48,(param_2 - (int)local_48[1]) + 1);
  }
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | *(byte *)(param_1 + 0x18);
  }
  dVar1 = param_3[3];
  lVar4 = *local_48;
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  lVar5 = (longlong)param_2 * 0x10;
  *(float *)(lVar4 + lVar5) = (float)*param_3;
  *(float *)(lVar4 + 4 + lVar5) = (float)dVar3;
  *(float *)(lVar4 + 8 + lVar5) = (float)dVar2;
  *(float *)(lVar4 + 0xc + lVar5) = (float)dVar1;
LAB_1481563d6:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815641e FUN_14815641e body=271 status=ok
// SIG undefined FUN_14815641e(void)

void FUN_14815641e(longlong param_1,int param_2,undefined4 *param_3,char param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar5 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar5 = (longlong)local_40._4_4_;
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar5 * 0x18);
  }
  FUN_1481375f4(&local_50,*(undefined8 *)(param_1 + 0x10),lVar5);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_1481564e9;
    FUN_146c98046(local_48,(param_2 - (int)local_48[1]) + 1);
  }
  if (lVar5 != 0) {
    *(byte *)(lVar5 + 1) = *(byte *)(lVar5 + 1) | *(byte *)(param_1 + 0x18);
  }
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  puVar1 = (undefined4 *)(*local_48 + (longlong)param_2 * 0x10);
  *puVar1 = *param_3;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
LAB_1481564e9:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815652e FUN_14815652e body=309 status=ok
// SIG undefined FUN_14815652e(void)

void FUN_14815652e(longlong param_1,int param_2,double *param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [40];
  PSRWLOCK local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = 0;
  }
  else {
    local_48 = (longlong *)(param_1 + 0x30);
    local_50 = (PSRWLOCK)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar4 = (longlong)local_40._4_4_;
    }
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar4 * 0x18);
  }
  FUN_14813a53a(&local_50,*(undefined8 *)(param_1 + 0x10),lVar4);
  if ((param_2 < 0) || ((int)local_48[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_14815661c;
    FUN_146ed50e6(local_48,(param_2 - (int)local_48[1]) + 1);
  }
  if (lVar4 != 0) {
    *(byte *)(lVar4 + 1) = *(byte *)(lVar4 + 1) | *(byte *)(param_1 + 0x18);
  }
  dVar1 = param_3[3];
  lVar4 = *local_48;
  dVar2 = param_3[2];
  dVar3 = param_3[1];
  lVar5 = (longlong)param_2 * 0x10;
  *(float *)(lVar4 + lVar5) = (float)*param_3;
  *(float *)(lVar4 + 4 + lVar5) = (float)dVar3;
  *(float *)(lVar4 + 8 + lVar5) = (float)dVar2;
  *(float *)(lVar4 + 0xc + lVar5) = (float)dVar1;
LAB_14815661c:
  if (local_50 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_50);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156664 FUN_148156664 body=327 status=ok
// SIG undefined FUN_148156664(void)

void FUN_148156664(longlong param_1,int param_2,undefined8 param_3,char param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_a8 [32];
  PSRWLOCK local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    uStack_70 = param_1 + 0x30;
    local_78 = 0x100000000;
    local_68 = 0xffffffff;
    uStack_60 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_78);
      lVar3 = (longlong)local_68._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_14813ebd8(&local_88,*(undefined8 *)(param_1 + 0x10),lVar3);
  if ((param_2 < 0) || ((int)local_80[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148156761;
    FUN_1481567ac(local_80,(param_2 - (int)local_80[1]) + 1);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  lVar3 = *local_80;
  lVar4 = (longlong)param_2 * 0x40;
  FUN_144a928e2(&local_78,param_3);
  puVar1 = (undefined4 *)(lVar3 + lVar4);
  *puVar1 = (undefined4)local_78;
  puVar1[1] = local_78._4_4_;
  puVar1[2] = (undefined4)uStack_70;
  puVar1[3] = uStack_70._4_4_;
  puVar2 = (undefined8 *)(lVar3 + 0x10 + lVar4);
  *puVar2 = local_68;
  puVar2[1] = CONCAT44(uStack_5c,uStack_60);
  puVar2 = (undefined8 *)(lVar3 + 0x20 + lVar4);
  *puVar2 = local_58;
  puVar2[1] = uStack_50;
  puVar2 = (undefined8 *)(lVar3 + 0x30 + lVar4);
  *puVar2 = local_48;
  puVar2[1] = uStack_40;
LAB_148156761:
  if (local_88 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481567ac FUN_1481567ac body=68 status=ok
// SIG undefined FUN_1481567ac(void)

int FUN_1481567ac(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_140491d2e(param_1,iVar1);
  }
  FUN_147d1eed2((longlong)iVar1 * 0x40 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 1481567f0 FUN_1481567f0 body=321 status=ok
// SIG undefined FUN_1481567f0(void)

void FUN_1481567f0(longlong param_1,int param_2,undefined4 *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    local_58 = (longlong *)(param_1 + 0x30);
    local_60 = (PSRWLOCK)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      lVar3 = (longlong)local_50._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_148143ba4(&local_60,*(undefined8 *)(param_1 + 0x10),lVar3);
  plVar2 = local_58;
  if ((param_2 < 0) || ((int)local_58[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_1481568fc;
    iVar1 = (int)local_58[1];
    *(int *)(local_58 + 1) = param_2 + 1;
    uVar4 = (param_2 + 1) - iVar1;
    if ((uint)(*(int *)((longlong)local_58 + 0xc) - iVar1) < uVar4) {
      FUN_1446f48e2(local_58);
    }
    memset((void *)((longlong)iVar1 * 4 + *plVar2),0,(longlong)(int)uVar4 << 2);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  *(undefined4 *)(*local_58 + (longlong)param_2 * 4) = *param_3;
LAB_1481568fc:
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156932 FUN_148156932 body=313 status=ok
// SIG undefined FUN_148156932(void)

void FUN_148156932(longlong param_1,int param_2,undefined1 *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    local_58 = (longlong *)(param_1 + 0x30);
    local_60 = (PSRWLOCK)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      lVar3 = (longlong)local_50._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_148147ce8(&local_60,*(undefined8 *)(param_1 + 0x10),lVar3);
  plVar2 = local_58;
  if ((param_2 < 0) || ((int)local_58[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148156a36;
    iVar1 = (int)local_58[1];
    *(int *)(local_58 + 1) = param_2 + 1;
    uVar4 = (param_2 + 1) - iVar1;
    if ((uint)(*(int *)((longlong)local_58 + 0xc) - iVar1) < uVar4) {
      FUN_1447403be(local_58);
    }
    memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar4);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  *(undefined1 *)(*local_58 + (longlong)param_2) = *param_3;
LAB_148156a36:
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156a6c FUN_148156a6c body=313 status=ok
// SIG undefined FUN_148156a6c(void)

void FUN_148156a6c(longlong param_1,int param_2,undefined1 *param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  undefined1 auStack_88 [40];
  PSRWLOCK local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = 0;
  }
  else {
    local_58 = (longlong *)(param_1 + 0x30);
    local_60 = (PSRWLOCK)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      lVar3 = (longlong)local_50._4_4_;
    }
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
  }
  FUN_14814be30(&local_60,*(undefined8 *)(param_1 + 0x10),lVar3);
  plVar2 = local_58;
  if ((param_2 < 0) || ((int)local_58[1] <= param_2)) {
    if (param_4 == '\0') goto LAB_148156b70;
    iVar1 = (int)local_58[1];
    *(int *)(local_58 + 1) = param_2 + 1;
    uVar4 = (param_2 + 1) - iVar1;
    if ((uint)(*(int *)((longlong)local_58 + 0xc) - iVar1) < uVar4) {
      FUN_1401c3474(local_58);
    }
    memset((void *)((longlong)iVar1 + *plVar2),0,(longlong)(int)uVar4);
  }
  if (lVar3 != 0) {
    *(byte *)(lVar3 + 1) = *(byte *)(lVar3 + 1) | *(byte *)(param_1 + 0x18);
  }
  *(undefined1 *)(*local_58 + (longlong)param_2) = *param_3;
LAB_148156b70:
  if (local_60 != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(local_60);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156ba6 FUN_148156ba6 body=268 status=ok
// SIG undefined FUN_148156ba6(void)

undefined4 FUN_148156ba6(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  PSRWLOCK SRWLock;
  undefined4 uVar5;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  longlong lVar4;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_58 = param_1 + 0x30;
    local_60 = 0x100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      lVar2 = (longlong)local_50._4_4_;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar3 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar3 = (longlong *)(lVar4 + 0x50);
      }
      goto LAB_148156bda;
    }
  }
  plVar3 = (longlong *)(lVar4 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148156bda:
  if ((param_2 < 0) || (uVar5 = 0, (int)plVar3[1] <= param_2)) {
    uVar5 = *(undefined4 *)(*plVar3 + (longlong)param_2 * 4);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156cb4 FUN_148156cb4 body=323 status=ok
// SIG undefined FUN_148156cb4(void)

double * FUN_148156cb4(longlong param_1,double *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  float fVar5;
  float fVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined4 local_58;
  ulonglong local_50;
  longlong lVar4;
  
  fVar6 = DAT_14c84635c._4_4_;
  fVar5 = (float)DAT_14c84635c;
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_68 = param_1 + 0x30;
    local_70 = 0x100000000;
    local_60 = 0xffffffff;
    local_58 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_70);
      lVar2 = (longlong)local_60._4_4_;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar3 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar3 = (longlong *)(lVar4 + 0x50);
      }
      goto LAB_148156d03;
    }
  }
  plVar3 = (longlong *)(lVar4 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148156d03:
  if ((param_3 < 0) || ((int)plVar3[1] <= param_3)) {
    fVar5 = *(float *)(*plVar3 + (longlong)param_3 * 8);
    fVar6 = *(float *)(*plVar3 + 4 + (longlong)param_3 * 8);
  }
  *param_2 = (double)fVar5;
  param_2[1] = (double)fVar6;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156df8 FUN_148156df8 body=375 status=ok
// SIG undefined FUN_148156df8(void)

double * FUN_148156df8(longlong param_1,double *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_a8 [40];
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined4 local_68;
  ulonglong local_60;
  
  fVar7 = DAT_14c846338;
  fVar5 = DAT_14c846330._4_4_;
  fVar6 = (float)DAT_14c846330;
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_78 = param_1 + 0x30;
    local_80 = 0x100000000;
    local_70 = 0xffffffff;
    local_68 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_80);
      lVar2 = (longlong)local_70._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar4 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar3 + 0x50);
      }
      goto LAB_148156e5d;
    }
  }
  plVar4 = (longlong *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148156e5d:
  if ((param_3 < 0) || ((int)plVar4[1] <= param_3)) {
    lVar2 = *plVar4;
    lVar3 = (longlong)param_3;
    fVar6 = *(float *)(lVar2 + lVar3 * 0xc);
    fVar5 = *(float *)(lVar2 + 4 + lVar3 * 0xc);
    fVar7 = *(float *)(lVar2 + 8 + lVar3 * 0xc);
  }
  *param_2 = (double)fVar6;
  param_2[1] = (double)fVar5;
  param_2[2] = (double)fVar7;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_60 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148156f70 FUN_148156f70 body=317 status=ok
// SIG undefined FUN_148156f70(void)

undefined8 * FUN_148156f70(longlong param_1,undefined8 *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  PSRWLOCK SRWLock;
  longlong *plVar3;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  longlong lVar4;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = DAT_14c846338;
  local_60 = DAT_14c846330;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_48 = param_1 + 0x30;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar2 = (longlong)local_40._4_4_;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar3 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar3 = (longlong *)(lVar4 + 0x50);
      }
      goto LAB_148156fbb;
    }
  }
  plVar3 = (longlong *)(lVar4 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148156fbb:
  if ((param_3 < 0) || ((int)plVar3[1] <= param_3)) {
    local_58 = *(undefined4 *)(*plVar3 + 8 + (longlong)param_3 * 0xc);
    local_60 = *(undefined8 *)(*plVar3 + (longlong)param_3 * 0xc);
  }
  *(undefined4 *)(param_2 + 1) = local_58;
  *param_2 = local_60;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481570ae FUN_1481570ae body=333 status=ok
// SIG undefined FUN_1481570ae(void)

double * FUN_1481570ae(longlong param_1,double *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
LAB_1481570e1:
    plVar4 = (longlong *)(lVar3 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    local_48 = param_1 + 0x30;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar2 = (longlong)local_40._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 == (char *)0x0) goto LAB_1481570e1;
    SRWLock = (PSRWLOCK)(pcVar1 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*pcVar1 == '\x01') {
      plVar4 = (longlong *)(pcVar1 + 0x10);
    }
    else {
      plVar4 = (longlong *)(lVar3 + 0x50);
    }
  }
  if (-1 < param_3) {
    dVar5 = 0.0;
    dVar6 = 0.0;
    dVar8 = 0.0;
    dVar7 = 0.0;
    if (param_3 < (int)plVar4[1]) goto LAB_14815712a;
  }
  lVar2 = *plVar4;
  lVar3 = (longlong)param_3 * 0x10;
  dVar7 = (double)*(float *)(lVar2 + lVar3);
  dVar5 = (double)*(float *)(lVar2 + 0xc + lVar3);
  dVar6 = (double)*(float *)(lVar2 + 8 + lVar3);
  dVar8 = (double)*(float *)(lVar2 + 4 + lVar3);
LAB_14815712a:
  *param_2 = dVar7;
  param_2[1] = dVar8;
  param_2[2] = dVar6;
  param_2[3] = dVar5;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481571fc FUN_1481571fc body=292 status=ok
// SIG undefined FUN_1481571fc(void)

undefined4 * FUN_1481571fc(longlong param_1,undefined4 *param_2,int param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  longlong lVar5;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = &DAT_3f8000003f800000;
  uStack_60 = &DAT_3f8000003f800000;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_48 = param_1 + 0x30;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      lVar3 = (longlong)local_40._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar2 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar3 * 0x18);
    if (pcVar2 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar2 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar2 == '\x01') {
        plVar4 = (longlong *)(pcVar2 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_14815723d;
    }
  }
  plVar4 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_14815723d:
  if ((param_3 < 0) || ((int)plVar4[1] <= param_3)) {
    puVar1 = (undefined8 *)(*plVar4 + (longlong)param_3 * 0x10);
    local_68 = (undefined1 *)*puVar1;
    uStack_60 = (undefined1 *)puVar1[1];
  }
  *param_2 = (undefined4)local_68;
  param_2[1] = local_68._4_4_;
  param_2[2] = (undefined4)uStack_60;
  param_2[3] = uStack_60._4_4_;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148157322 FUN_148157322 body=419 status=ok
// SIG undefined FUN_148157322(void)

double * FUN_148157322(longlong param_1,double *param_2,int param_3)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_b8 [40];
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined4 local_78;
  ulonglong local_70;
  
  fVar8 = DAT_14c84634c;
  fVar7 = DAT_14c846348;
  fVar5 = DAT_14c846344;
  fVar6 = DAT_14c84633c._4_4_;
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar3 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_88 = param_1 + 0x30;
    local_90 = 0x100000000;
    local_80 = 0xffffffff;
    local_78 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      lVar2 = (longlong)local_80._4_4_;
    }
    lVar3 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar4 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar3 + 0x50);
      }
      goto LAB_148157399;
    }
  }
  plVar4 = (longlong *)(lVar3 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148157399:
  if ((param_3 < 0) || ((int)plVar4[1] <= param_3)) {
    lVar2 = *plVar4;
    lVar3 = (longlong)param_3 * 0x10;
    fVar6 = *(float *)(lVar2 + lVar3);
    fVar5 = *(float *)(lVar2 + 4 + lVar3);
    fVar7 = *(float *)(lVar2 + 8 + lVar3);
    fVar8 = *(float *)(lVar2 + 0xc + lVar3);
  }
  *param_2 = (double)fVar6;
  param_2[1] = (double)fVar5;
  param_2[2] = (double)fVar7;
  param_2[3] = (double)fVar8;
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_70 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481574c6 FUN_1481574c6 body=379 status=ok
// SIG undefined FUN_1481574c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1481574c6(longlong param_1,undefined8 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  char *pcVar3;
  longlong lVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  longlong *plVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = _DAT_14c846280;
  uStack_40 = _DAT_14c846288;
  local_58 = _DAT_14c846270;
  uStack_50 = _DAT_14c846278;
  local_68 = _DAT_14c846260;
  uStack_60 = _DAT_14c846268;
  local_78 = DAT_14c846250;
  uStack_74 = DAT_14c846254;
  uStack_70 = (undefined4)DAT_14c846258;
  uStack_6c = DAT_14c846258._4_4_;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_90 = param_1 + 0x30;
    local_98 = 0x100000000;
    local_88 = 0xffffffff;
    local_80 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_98);
      lVar4 = (longlong)local_88._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar3 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar4 * 0x18);
    if (pcVar3 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar3 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar3 == '\x01') {
        plVar6 = (longlong *)(pcVar3 + 0x10);
      }
      else {
        plVar6 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_148157535;
    }
  }
  plVar6 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148157535:
  if ((param_3 < 0) || ((int)plVar6[1] <= param_3)) {
    lVar4 = *plVar6;
    lVar5 = (longlong)param_3 * 0x40;
    puVar1 = (undefined4 *)(lVar4 + lVar5);
    local_78 = *puVar1;
    uStack_74 = puVar1[1];
    uStack_70 = puVar1[2];
    uStack_6c = puVar1[3];
    puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar5);
    local_68 = *puVar2;
    uStack_60 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + 0x20 + lVar5);
    local_58 = *puVar2;
    uStack_50 = puVar2[1];
    puVar2 = (undefined8 *)(lVar4 + 0x30 + lVar5);
    local_48 = *puVar2;
    uStack_40 = puVar2[1];
  }
  FUN_144b10ee8(param_2,&local_78);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148157642 FUN_148157642 body=254 status=ok
// SIG undefined FUN_148157642(void)

undefined4 FUN_148157642(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined4 uVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar2 = (longlong)local_38._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar4 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_148157671;
    }
  }
  plVar4 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148157671:
  if ((param_2 < 0) || (uVar3 = 0, (int)plVar4[1] <= param_2)) {
    uVar3 = *(undefined4 *)(*plVar4 + (longlong)param_2 * 4);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148157742 FUN_148157742 body=255 status=ok
// SIG undefined FUN_148157742(void)

undefined1 FUN_148157742(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined1 uVar3;
  PSRWLOCK SRWLock;
  longlong *plVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar5;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar5 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar2 = (longlong)local_38._4_4_;
    }
    lVar5 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar4 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar4 = (longlong *)(lVar5 + 0x50);
      }
      goto LAB_148157771;
    }
  }
  plVar4 = (longlong *)(lVar5 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148157771:
  if ((param_2 < 0) || (uVar3 = 0, (int)plVar4[1] <= param_2)) {
    uVar3 = *(undefined1 *)(*plVar4 + (longlong)param_2);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148157842 FUN_148157842 body=257 status=ok
// SIG undefined FUN_148157842(void)

undefined1 FUN_148157842(longlong param_1,int param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar5;
  PSRWLOCK SRWLock;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  longlong lVar4;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(int *)(param_1 + 0x28) == *(int *)(param_1 + 0x54)) {
    lVar4 = *(longlong *)(param_1 + 0x10);
  }
  else {
    local_40 = param_1 + 0x30;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0x48) == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1449c0562(&local_48);
      lVar2 = (longlong)local_38._4_4_;
    }
    lVar4 = *(longlong *)(param_1 + 0x10);
    pcVar1 = *(char **)(*(longlong *)(param_1 + 0x20) + 8 + lVar2 * 0x18);
    if (pcVar1 != (char *)0x0) {
      SRWLock = (PSRWLOCK)(pcVar1 + 8);
      AcquireSRWLockShared(SRWLock);
      if (*pcVar1 == '\x01') {
        plVar3 = (longlong *)(pcVar1 + 0x10);
      }
      else {
        plVar3 = (longlong *)(lVar4 + 0x50);
      }
      goto LAB_148157871;
    }
  }
  plVar3 = (longlong *)(lVar4 + 0x50);
  SRWLock = (PSRWLOCK)0x0;
LAB_148157871:
  if ((param_2 < 0) || ((int)plVar3[1] <= param_2)) {
    uVar5 = *(undefined1 *)(*plVar3 + (longlong)param_2);
  }
  else {
    uVar5 = 0;
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148157944 FUN_148157944 body=67 status=ok
// SIG undefined FUN_148157944(void)

void FUN_148157944(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_1459d2dfe(param_1,0);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_148157acc(param_1);
    return;
  }
  FUN_148157988(param_1);
  FUN_1459d2dfe(param_1,0);
  return;
}



// FUNCTION 148157988 FUN_148157988 body=322 status=ok
// SIG undefined FUN_148157988(void)

void FUN_148157988(longlong *param_1)

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



// FUNCTION 148157acc FUN_148157acc body=422 status=ok
// SIG undefined FUN_148157acc(void)

void FUN_148157acc(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar7 = (longlong)iVar5 * 0x20;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x1c + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar7) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148157c74 FUN_148157c74 body=202 status=ok
// SIG undefined FUN_148157c74(void)

LPCRITICAL_SECTION FUN_148157c74(LPCRITICAL_SECTION param_1,_LIST_ENTRY *param_2,undefined8 param_3)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  _LIST_ENTRY *p_Var3;
  
  InitializeCriticalSection(param_1);
  SetCriticalSectionSpinCount(param_1,4000);
  param_1[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
  param_1[1].LockCount = 0;
  EnterCriticalSection(param_1);
  if (param_1[1].LockCount != 3) {
    FUN_1446efa72(param_1 + 1,0,3,0x10);
    param_1[1].LockCount = 3;
  }
  p_Var1 = param_1[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a57d310;
  LOCK();
  UNLOCK();
  p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 1);
  lVar2 = DAT_14c758608 + 1;
  if (p_Var3 == (_LIST_ENTRY *)0x0) {
    LOCK();
    UNLOCK();
    p_Var3 = (_LIST_ENTRY *)(DAT_14c758608 + 2);
    lVar2 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar2;
  (p_Var1->ProcessLocksList).Flink = p_Var3;
  *(undefined ***)p_Var1 = &PTR_FUN_14adc1330;
  (p_Var1->ProcessLocksList).Blink = param_2;
  p_Var1->EntryCount = (int)param_3;
  p_Var1->ContentionCount = (int)((ulonglong)param_3 >> 0x20);
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
  }
  return param_1;
}



// FUNCTION 148157d3e FUN_148157d3e body=29 status=ok
// SIG undefined FUN_148157d3e(void)

undefined8 FUN_148157d3e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148157d78 FUN_148157d78 body=93 status=ok
// SIG undefined FUN_148157d78(void)

void FUN_148157d78(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a57d310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148157dd6 FUN_148157dd6 body=93 status=ok
// SIG undefined FUN_148157dd6(void)

void FUN_148157dd6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a57d310;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adc1330;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 148157e34 FUN_148157e34 body=126 status=ok
// SIG undefined FUN_148157e34(void)

void FUN_148157e34(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14a57d310;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14adc1330;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148157ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148157ec0 FUN_148157ec0 body=21 status=ok
// SIG undefined FUN_148157ec0(void)

undefined8 FUN_148157ec0(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148157ed6 FUN_148157ed6 body=62 status=ok
// SIG undefined FUN_148157ed6(void)

void FUN_148157ed6(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14adc1ae0;
  FUN_145be9032(param_1 + 0x30);
  plVar2 = *(longlong **)(param_1 + 0x20);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148157f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 148157f14 FUN_148157f14 body=29 status=ok
// SIG undefined FUN_148157f14(void)

undefined8 FUN_148157f14(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148157f32 FUN_148157f32 body=167 status=ok
// SIG undefined FUN_148157f32(void)

void FUN_148157f32(longlong param_1,longlong param_2)

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
    if (*(longlong **)(param_2 + 0x10) == plVar2) goto LAB_148157fad;
    LOCK();
    *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
    UNLOCK();
    plVar3 = *(longlong **)(param_2 + 0x10);
    if (plVar3 == (longlong *)0x0) {
      *(longlong **)(param_2 + 0x10) = plVar2;
      goto LAB_148157fad;
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
LAB_148157fad:
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
                    /* WARNING: Could not recover jumptable at 0x000148157fcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x10))(plVar2);
      return;
    }
  }
  return;
}



// FUNCTION 148157fda FUN_148157fda body=318 status=ok
// SIG undefined FUN_148157fda(void)

undefined4 * FUN_148157fda(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_44;
  undefined4 local_40 [2];
  uint *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14815811a(param_1,local_40);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_38 = uVar4;
  *(undefined8 *)(local_38 + 2) = *puVar1;
  lVar7 = puVar1[1];
  *(longlong *)(local_38 + 4) = lVar7;
  if (lVar7 != 0) {
    LOCK();
    *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
    UNLOCK();
    uVar4 = *local_38;
  }
  local_38[6] = 0xffffffff;
  local_44 = local_40[0];
  local_58 = 0;
  cVar2 = FUN_148158200(param_1,uVar4,local_38);
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
      local_38[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_38[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_44;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_148157acc(param_1);
    }
  }
  *param_2 = local_44;
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815811a FUN_14815811a body=229 status=ok
// SIG undefined FUN_14815811a(void)

int * FUN_14815811a(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 148158200 FUN_148158200 body=219 status=ok
// SIG undefined FUN_148158200(void)

void FUN_148158200(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  longlong *plVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  longlong *plVar9;
  int iVar10;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar10 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar10 != -1) {
      do {
        piVar3 = (int *)(*param_1 + (longlong)iVar10 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar10 * 0x20) == *param_3) {
          plVar9 = *(longlong **)(piVar3 + 4);
          if (plVar9 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar9 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar9)(plVar9);
              LOCK();
              piVar2 = (int *)((longlong)plVar9 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar9 + 0x10))(plVar9);
              }
            }
          }
          iVar4 = *param_3;
          iVar5 = param_3[1];
          iVar6 = param_3[2];
          iVar7 = param_3[3];
          *(undefined8 *)(piVar3 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar3 = iVar4;
          piVar3[1] = iVar5;
          piVar3[2] = iVar6;
          piVar3[3] = iVar7;
          FUN_1481582dc(param_1,*param_4,1);
          *param_4 = iVar10;
          uVar8 = 1;
          goto LAB_148158274;
        }
        iVar10 = piVar3[6];
      } while (iVar10 != -1);
    }
  }
  uVar8 = 0;
LAB_148158274:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar8;
  }
  return;
}



// FUNCTION 1481582dc FUN_1481582dc body=138 status=ok
// SIG undefined FUN_1481582dc(void)

void FUN_1481582dc(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 *puVar7;
  
  if (param_3 != 0) {
    lVar2 = *param_1;
    puVar7 = (undefined4 *)((longlong)param_2 * 0x20 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *puVar7 = uVar4;
      *(int *)(param_1 + 6) = param_2;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      plVar5 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      iVar6 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar6 = param_2;
      }
      bVar3 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 148158366 FUN_148158366 body=103 status=ok
// SIG undefined FUN_148158366(void)

undefined8 FUN_148158366(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x20) == param_2) {
          FUN_1481583ce(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + *param_1 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 1481583ce FUN_1481583ce body=96 status=ok
// SIG undefined FUN_1481583ce(void)

void FUN_1481583ce(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_14815842e(param_1,param_2,1);
  return;
}



// FUNCTION 14815842e FUN_14815842e body=117 status=ok
// SIG undefined FUN_14815842e(void)

void FUN_14815842e(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_3 != 0) {
    plVar5 = (longlong *)((longlong)param_2 * 0x20 + *param_1 + 0x10);
    iVar4 = param_3;
    do {
      plVar3 = (longlong *)*plVar5;
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
      plVar5 = plVar5 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_1481582dc(param_1,param_2,param_3);
  return;
}



// FUNCTION 1481584a8 FUN_1481584a8 body=465 status=ok
// SIG undefined FUN_1481584a8(void)

void FUN_1481584a8(longlong param_1,uint param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong *local_70;
  uint local_64;
  uint *local_60;
  longlong **local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = param_2;
  if (*(char *)(param_1 + 0x110) == '\x01') {
    uVar3 = FUN_145ef8526();
    lVar4 = FUN_147973140(uVar3,param_2);
    if (lVar4 != 0) {
      fVar8 = (float)*(int *)(lVar4 + 0x74) * (*(float *)(param_1 + 0x118) / 1000.0);
      plVar5 = (longlong *)FUN_14001cc68(0x60,0x10);
      plVar5[1] = (longlong)&DAT_100000001;
      *plVar5 = (longlong)&PTR_FUN_14adc1ac0;
      lVar4 = *(longlong *)(param_1 + 0x108);
      plVar5[3] = 0;
      plVar5[4] = 0;
      plVar5[2] = (longlong)&PTR_FUN_14adc1ae0;
      *(undefined4 *)(plVar5 + 5) = 0;
      *(undefined4 *)((longlong)plVar5 + 0x2c) = 0;
      FUN_14703854a(param_1 + 0x60,plVar5 + 6,
                    ((int)ROUND(fVar8 + fVar8 + -0.5) << 2 | 4U) - 1 & 0xfffffff8,0x3f800000);
      *(uint *)(plVar5 + 9) = param_2;
      plVar5[10] = lVar4;
      *(undefined1 *)(plVar5 + 0xb) = 0;
      local_78 = plVar5 + 2;
      local_70 = plVar5;
      FUN_148157f32(&local_78,plVar5 + 2);
      local_60 = &local_64;
      local_58 = &local_78;
      FUN_14816dbfa((longlong *)(param_1 + 0x10),local_4c);
      plVar5 = local_70;
      if (local_70 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_70 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_70)();
          LOCK();
          piVar2 = (int *)((longlong)plVar5 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar5 + 0x10))();
          }
        }
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
        lVar4 = param_1 + 0x48;
        if (*(longlong *)(param_1 + 0x50) != 0) {
          lVar4 = *(longlong *)(param_1 + 0x50);
        }
        iVar6 = *(int *)(lVar4 + (ulonglong)(*(int *)(param_1 + 0x58) - 1U & local_64) * 4);
        if (iVar6 != -1) {
          lVar4 = *(longlong *)(param_1 + 0x10);
          do {
            lVar7 = lVar4 + (longlong)iVar6 * 0x20;
            if (*(uint *)(lVar4 + (longlong)iVar6 * 0x20) == local_64) goto LAB_14815864e;
            iVar6 = *(int *)(lVar7 + 0x18);
          } while (iVar6 != -1);
        }
      }
      lVar7 = 0;
LAB_14815864e:
      FUN_14811efce(*(undefined8 *)(lVar7 + 8));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481586d6 FUN_1481586d6 body=114 status=ok
// SIG undefined FUN_1481586d6(void)

void FUN_1481586d6(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145ef8526();
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14adcbe40;
    local_58 = FUN_143a3b3a6;
    local_30 = param_1;
    FUN_14797347e(lVar1);
  }
  *(undefined1 *)(param_1 + 0x110) = 1;
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815874a FUN_14815874a body=137 status=ok
// SIG undefined FUN_14815874a(void)

void FUN_14815874a(longlong param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  undefined1 *local_58;
  undefined8 local_48;
  undefined **local_38;
  longlong local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = FUN_145ef8526();
  if (lVar1 != 0) {
    local_48 = 0;
    local_38 = &PTR_LAB_14adcbe60;
    local_58 = &LAB_143a3b59c;
    local_30 = param_1;
    FUN_14797347e(lVar1);
  }
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x44)) {
    FUN_148157988(param_1 + 0x10);
    FUN_14816dd3a(param_1 + 0x10);
  }
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481587d4 FUN_1481587d4 body=163 status=ok
// SIG undefined FUN_1481587d4(void)

float FUN_1481587d4(longlong param_1,float param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  if (param_5 == 0 || param_4 == 0) {
    return 0.0;
  }
  if (1.0 <= param_2) {
    param_2 = 1.0;
  }
  if (param_5 <= param_3) {
    param_3 = param_5;
  }
  iVar3 = 0;
  if (0 < param_3) {
    iVar3 = param_3;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  param_2 = (float)(param_4 / param_5) * param_2;
  iVar2 = (int)ROUND(param_2 + param_2 + -0.5) >> 1;
  fVar1 = *(float *)(*(longlong *)(param_1 + 0x160) + (longlong)(iVar2 * param_5 + iVar3) * 4);
  iVar2 = (uint)(iVar2 < param_4) + iVar2;
  return (*(float *)(*(longlong *)(param_1 + 0x160) + (longlong)(param_5 * iVar2 + iVar3) * 4) -
         fVar1) * ((float)iVar2 - param_2) + fVar1;
}



// FUNCTION 148158878 FUN_148158878 body=324 status=ok
// SIG undefined FUN_148158878(void)

void FUN_148158878(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined4 *local_68;
  undefined8 uStack_60;
  int local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar3 = FUN_1481589be(*(undefined8 *)(param_1 + 0x28));
  iVar5 = 0;
  local_58 = 0;
  local_68 = (undefined4 *)0x0;
  uStack_60 = 0;
  FUN_144a98dce(&local_68,param_2);
  local_78 = 0;
  local_88 = (undefined4 *)0x0;
  uStack_80 = 0;
  FUN_144a98d08(&local_88,param_2);
  FUN_144a76c20(&local_98,param_2);
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x158);
  piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar4 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar4) {
    do {
      puVar2 = local_98;
      local_a8 = uVar1;
      uVar6 = FUN_1481587d4(*(undefined8 *)(param_1 + 0x28),*local_68,*local_88,uVar3);
      *puVar2 = uVar6;
      local_68 = local_68 + local_58;
      local_88 = local_88 + local_78;
      local_98 = local_98 + local_90;
      iVar5 = iVar5 + 1;
      piVar4 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar4 = (int *)(param_2 + 0x3c);
      }
    } while (iVar5 < *piVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481589be FUN_1481589be body=847 status=ok
// SIG undefined FUN_1481589be(void)

undefined4 FUN_1481589be(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [40];
  LPCRITICAL_SECTION local_b0;
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  longlong *plStack_98;
  uint local_90;
  int iStack_8c;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong *plStack_78;
  uint local_70;
  int iStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_b0 = (LPCRITICAL_SECTION)(param_1 + 0x180);
  EnterCriticalSection(local_b0);
  plVar1 = (longlong *)(param_1 + 0x10);
  plVar2 = (longlong *)(param_1 + 0x20);
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  uStack_68 = 0;
  plStack_78 = plVar2;
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_80);
    iVar5 = *(int *)(param_1 + 0x38);
  }
  uStack_88 = CONCAT44(uStack_64,uStack_68);
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_a0 = (float)local_80;
  fStack_9c = local_80._4_4_;
  plStack_98 = plStack_78;
  local_a8 = plVar1;
  if ((iStack_6c != iVar5) || (plStack_78 != plVar2)) {
    do {
      lVar3 = *local_a8;
      lVar8 = (longlong)iStack_8c;
      iVar4 = FUN_14811f0ae(*(undefined8 *)(lVar3 + 8 + lVar8 * 0x20));
      fVar11 = (float)FUN_14811f0a6(*(undefined8 *)(lVar3 + 8 + lVar8 * 0x20));
      if (iVar4 != 0) {
        uVar6 = 0;
        if (1e-08 < ABS(fVar11)) {
          LOCK();
          *(int *)(param_1 + 0x158) = iVar4;
          UNLOCK();
          fVar12 = (*(float *)(param_1 + 0x118) / 1000.0) * fVar11;
          uVar7 = ((int)ROUND(fVar12 + fVar12 + -0.5) >> 1) + 3U & 0xfffffffc;
          uVar10 = iVar4 * uVar7;
          plVar1 = (longlong *)(param_1 + 0x120);
          if (*(uint *)(param_1 + 0x128) != uVar10) {
            iVar5 = *(int *)(param_1 + 300);
            iVar9 = 0;
            if (iVar5 < 0) {
              *(undefined4 *)(param_1 + 0x128) = 0;
              FUN_1470345fa(plVar1);
              iVar9 = *(int *)(param_1 + 0x128);
              iVar5 = *(int *)(param_1 + 300);
            }
            *(uint *)(param_1 + 0x128) = iVar9 + uVar10;
            if ((uint)(iVar5 - iVar9) < uVar10) {
              FUN_145ca0cd4(plVar1);
            }
            memset((void *)((longlong)iVar9 * 4 + *plVar1),0,(longlong)(int)uVar10 << 2);
          }
          iVar5 = FUN_147038998(param_1 + 0x60);
          if ((int)uVar10 <= iVar5) {
            FUN_1470386d8(param_1 + 0x60,*plVar1,uVar10,1);
          }
          fStack_9c = fVar11 * ((float)*(int *)(param_1 + 0x114) / (float)(int)uVar7);
          local_a8 = (longlong *)CONCAT71(local_a8._1_7_,4);
          local_a8 = (longlong *)CONCAT44(iVar4,(undefined4)local_a8);
          local_a0 = fVar11;
          plStack_98 = plVar1;
          uVar7 = FUN_147064ca1();
          lVar3 = param_1 + 0x130;
          iVar5 = *(int *)(param_1 + 0x13c);
          iVar9 = 0;
          if (iVar5 < 0) {
            *(undefined4 *)(param_1 + 0x138) = 0;
            FUN_1470345fa(lVar3);
            iVar9 = *(int *)(param_1 + 0x138);
            iVar5 = *(int *)(param_1 + 0x13c);
          }
          *(uint *)(param_1 + 0x138) = iVar9 + uVar7;
          if ((uint)(iVar5 - iVar9) < uVar7) {
            FUN_145ca0cd4(lVar3);
          }
          memset((void *)((longlong)iVar9 * 4 + *(longlong *)(param_1 + 0x130)),0,
                 (longlong)(int)uVar7 << 2);
          local_70 = 0;
          plStack_78 = (longlong *)0x0;
          local_80 = lVar3;
          FUN_142afad51(&local_a8);
          FUN_14702fd0c(lVar3,*(int *)(param_1 + 0x114) * iVar4,1);
          memcpy(*(void **)(param_1 + 0x160),*(void **)(param_1 + 0x130),
                 (longlong)*(int *)(param_1 + 0x168));
          uVar6 = *(undefined4 *)(param_1 + 0x114);
        }
        goto LAB_148158a72;
      }
      local_90 = local_90 & ~(uint)fStack_9c;
      FUN_1449c0562(&local_a0);
    } while (local_a8 != plVar1 || (plStack_98 != plVar2 || iStack_8c != iVar5));
  }
  uVar6 = 0;
LAB_148158a72:
  LeaveCriticalSection(local_b0);
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148158d34 FUN_148158d34 body=202 status=ok
// SIG undefined FUN_148158d34(void)

void FUN_148158d34(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca670;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148158e00 FUN_148158e00 body=202 status=ok
// SIG undefined FUN_148158e00(void)

void FUN_148158e00(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca6e0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148158eee FUN_148158eee body=92 status=ok
// SIG undefined FUN_148158eee(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148158eee(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x48);
  FUN_143a2c92e(lVar1);
  uVar4 = *(int *)(param_2 + 0x50) + 0xfU & 0xfffffff0;
  FUN_14816df0a();
  *(uint *)(param_2 + 0x50) = uVar4 + _DAT_14cb3baac;
  lVar2 = *(longlong *)(param_2 + 0x38);
  *(undefined4 *)(lVar2 + (ulonglong)uVar4) = *(undefined4 *)(lVar1 + 0x158);
  lVar3 = *(longlong *)(lVar1 + 0x148);
  if (*(longlong *)(lVar1 + 0x148) == 0) {
    lVar3 = DAT_14cb427b0;
  }
  *(longlong *)(lVar2 + 8 + (ulonglong)uVar4) = lVar3;
  return;
}



// FUNCTION 148158f4a FUN_148158f4a body=77 status=ok
// SIG undefined FUN_148158f4a(void)

void FUN_148158f4a(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_1400bb2d8();
  FUN_143a2c3d6(*(undefined8 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x40),
                *(undefined4 *)(param_1 + 0x44));
  lVar1 = *(longlong *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  if (*(char *)(lVar1 + 0x110) == '\x01') {
    FUN_14815874a(lVar1);
  }
  *(undefined8 *)(lVar1 + 0x108) = uVar2;
  FUN_1481586d6(lVar1);
  return;
}



// FUNCTION 148158f98 FUN_148158f98 body=164 status=ok
// SIG undefined FUN_148158f98(void)

undefined4 FUN_148158f98(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b6d530();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (lVar3 = param_2,
       *(longlong *)
        (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
       == lVar2 + 0x30)) goto LAB_148158fac;
  }
  lVar3 = 0;
LAB_148158fac:
  cVar1 = FUN_1481192e4(param_1,param_2);
  if (cVar1 != '\0') {
    lVar2 = *(longlong *)(param_1 + 0x38);
    if ((lVar2 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar2);
    }
    if ((*(longlong *)(lVar3 + 0x38) == lVar2) &&
       (*(int *)(lVar3 + 0x40) == *(int *)(param_1 + 0x40))) {
      return CONCAT31((int3)((uint)*(int *)(lVar3 + 0x40) >> 8),
                      ABS(*(float *)(lVar3 + 0x44) - *(float *)(param_1 + 0x44)) <= 1e-08);
    }
  }
  return 0;
}



// FUNCTION 14815903c FUN_14815903c body=166 status=ok
// SIG undefined FUN_14815903c(void)

undefined8 FUN_14815903c(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = FUN_145b6d530();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (DAT_14c950c29 == '\x01') {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_14689c22e();
          lVar2 = *(longlong *)(param_1 + 0x38);
        }
      }
      *(longlong *)(param_2 + 0x38) = lVar2;
      *(undefined4 *)(param_2 + 0x40) = *(undefined4 *)(param_1 + 0x40);
      *(undefined4 *)(param_2 + 0x44) = *(undefined4 *)(param_1 + 0x44);
      FUN_143a2c3d6(*(undefined8 *)(param_2 + 0x28),*(undefined4 *)(param_1 + 0x40));
      lVar2 = *(longlong *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      if (*(char *)(lVar2 + 0x110) == '\x01') {
        FUN_14815874a(lVar2);
      }
      *(undefined8 *)(lVar2 + 0x108) = uVar1;
      FUN_1481586d6(lVar2);
    }
  }
  return 1;
}



// FUNCTION 14815910e FUN_14815910e body=126 status=ok
// SIG undefined FUN_14815910e(void)

undefined8 FUN_14815910e(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_14815918c(param_2);
  fVar1 = *(float *)(param_3 + 0x14);
  fVar2 = *(float *)(param_3 + 0x10);
  *(double *)(param_2 + 200) = (double)*(float *)(param_3 + 0xc) * 65536.0;
  *(double *)(param_2 + 0xd0) = (double)fVar2 * 65536.0;
  *(double *)(param_2 + 0xd8) = (double)fVar1 * 65536.0;
  if (*(char *)(param_1 + 0x80) == '\x01') {
    *(undefined4 *)(param_2 + 0xe0) = *(undefined4 *)(param_1 + 0x84);
  }
  *(undefined1 *)(param_2 + 0xe4) = *(undefined1 *)(param_1 + 0x88);
  return 1;
}



// FUNCTION 14815918c FUN_14815918c body=362 status=ok
// SIG undefined FUN_14815918c(void)

undefined8 * FUN_14815918c(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)FUN_14001cc68(0x48,0x10);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 7) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x3c) = 0x3f800000;
  *(undefined4 *)(puVar4 + 8) = 0x3f800000;
  *(undefined4 *)((longlong)puVar4 + 0x44) = 0xffffffff;
  param_1[1] = puVar4;
  *param_1 = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x30,0x10);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  puVar4[2] = 0;
  uVar3 = FUN_144830b78(puVar4 + 3,&DAT_14cb42160);
  *(undefined4 *)(puVar4 + 3) = uVar3;
  puVar4[4] = 0;
  puVar4[5] = 0;
  param_1[3] = puVar4;
  param_1[2] = puVar4;
  puVar4 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[4] = 0;
  puVar4[6] = 0;
  param_1[5] = puVar4;
  param_1[4] = puVar4;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined8 *)((longlong)param_1 + 0x34) = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_1 + 100) = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar1 = (undefined4)DAT_14c8464e8;
  uVar3 = DAT_14c8464e0._4_4_;
  *(undefined4 *)(param_1 + 0x19) = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar2;
  param_1[0x1b] = DAT_14c8464f0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xe4) = 1;
  *(undefined1 *)((longlong)param_1 + 0xe6) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0xffffffff;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar3 = FUN_144830b78(param_1 + 0x20,&DAT_14cb42160);
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return param_1;
}



// FUNCTION 1481592f6 FUN_1481592f6 body=92 status=ok
// SIG undefined FUN_1481592f6(void)

void FUN_1481592f6(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((longlong)*(int *)(param_2 + 0x40) != 0) {
    lVar3 = (longlong)*(int *)(param_2 + 0x40) * 0xc;
    lVar4 = *(longlong *)(param_2 + 0x38) + 4;
    do {
      cVar1 = FUN_144729dda(lVar4);
      if (cVar1 != '\0') {
        plVar2 = (longlong *)FUN_14479d2ce(lVar4);
        (**(code **)(*plVar2 + 0x600))(plVar2);
      }
      lVar4 = lVar4 + 0xc;
      lVar3 = lVar3 + -0xc;
    } while (lVar3 != 0);
  }
  FUN_148159352(param_2);
  return;
}



// FUNCTION 148159352 FUN_148159352 body=141 status=ok
// SIG undefined FUN_148159352(void)

void FUN_148159352(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc0) = 0;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  FUN_1481693b4(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_148169326(param_1 + 0x20);
  FUN_148169374(param_1 + 0x10);
  while (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 8) = **(undefined8 **)(param_1 + 8);
    FUN_1400020a8();
  }
  return;
}



// FUNCTION 1481593e0 FUN_1481593e0 body=610 status=ok
// SIG undefined FUN_1481593e0(void)

ulonglong FUN_1481593e0(longlong param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  undefined1 uVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 unaff_RBP;
  ulonglong uVar9;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar9 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),1);
  if (param_2 == 0) goto LAB_1481595ac;
  if ((*(longlong *)(param_1 + 0x60) != 0) &&
     (plVar5 = (longlong *)FUN_144741050(param_1 + 0x68), *plVar5 != 0)) {
    uVar1 = *(uint *)(param_2 + 0xe8);
    if (((ulonglong)uVar1 == 0xffffffff) ||
       (((int)uVar1 < 0 || (*(int *)(*(longlong *)(param_2 + 0xf0) + 0x48) <= (int)uVar1)))) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined8 *)
               (*(longlong *)(*(longlong *)(param_2 + 0xf0) + 0x40) + (ulonglong)uVar1 * 8);
    }
    cVar4 = FUN_148159644(param_2 + 0x60,uVar8);
    if (cVar4 == '\0') goto LAB_1481595ac;
  }
  if (((*(longlong *)(param_1 + 0x38) == 0) || (param_3 == 0)) ||
     ((*(uint *)(*(longlong *)(param_1 + 0x38) + 8) & 0x40000000) != 0)) {
    *(undefined2 *)(param_2 + 0xe5) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x50) = 0;
    *(undefined8 *)(param_2 + 0x58) = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
  }
  else {
    lVar6 = FUN_14479d2ce(param_2 + 0x48);
    lVar7 = *(longlong *)(param_1 + 0x38);
    if (lVar7 != lVar6) {
      if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
        FUN_14689c22e(lVar7);
      }
      local_48 = 0;
      FUN_14485c47a(&local_48,lVar7);
      *(undefined8 *)(param_2 + 0x48) = local_48;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x300))();
      *(undefined1 *)(param_2 + 0xe6) = uVar2;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar7);
    }
    local_48 = 0;
    FUN_14485c47a(&local_48,lVar7);
    *(undefined8 *)(param_2 + 0x50) = local_48;
    lVar7 = *(longlong *)(param_1 + 0x48);
    if ((lVar7 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar7);
    }
    local_48 = 0;
    FUN_14485c47a(&local_48,lVar7);
    *(undefined8 *)(param_2 + 0x58) = local_48;
    bVar3 = 1;
    if (*(char *)(param_1 + 0x89) == '\0') {
      bVar3 = *(byte *)(param_2 + 0xe6) ^ 1;
    }
    *(byte *)(param_2 + 0xe5) = bVar3;
    if ((*(longlong *)(param_1 + 0x60) != 0) &&
       (plVar5 = (longlong *)FUN_144741050(param_1 + 0x68), *plVar5 != 0)) {
      lVar7 = FUN_1404e5848(param_2 + 0xe8,param_3 + 0x1e8,(longlong *)(param_1 + 0x60));
      if (lVar7 == 0) {
LAB_148159573:
        lVar7 = 0;
      }
      else {
        lVar6 = FUN_145b10978();
        if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) goto LAB_148159573;
      }
      FUN_14485c47a(param_2 + 0x60,lVar7);
    }
  }
  FUN_1406fa324(param_2 + 0x68,param_1 + 0x50);
  uVar9 = 0;
LAB_1481595ac:
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9 & 0xffffffff;
}



// FUNCTION 148159644 FUN_148159644 body=118 status=ok
// SIG undefined FUN_148159644(void)

ulonglong FUN_148159644(int *param_1)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 0;
  FUN_14485c47a(&local_20);
  if ((*param_1 != (int)local_20) ||
     (uVar2 = CONCAT71((uint7)(uint3)((uint)*param_1 >> 8),1), param_1[1] != local_20._4_4_)) {
    cVar1 = FUN_144729dda(param_1);
    if (cVar1 == '\0') {
      uVar2 = FUN_144729dda(&local_20);
      uVar2 = uVar2 ^ 1;
    }
    else {
      uVar2 = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481596bb FUN_1481596bb body=526 status=ok
// SIG undefined FUN_1481596bb(void)

undefined8 * FUN_1481596bb(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 *_Dst;
  
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined8 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
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
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *param_1 = *param_2;
  puVar1 = param_2 + 1;
  plVar5 = (longlong *)FUN_144741050(puVar1);
  lVar2 = DAT_14cb420e0;
  if ((DAT_14cb420e0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(DAT_14cb420e0);
  }
  if ((((*plVar5 == lVar2) && ((short)plVar5[1] == (short)DAT_14cb420e8)) &&
      (*(char *)((longlong)plVar5 + 10) == DAT_14cb420e8._2_1_)) &&
     (iVar4 = *(int *)(param_2 + 3), 0 < iVar4)) {
    uVar6 = FUN_144741050(puVar1);
    iVar3 = FUN_144a81174(uVar6);
    if (iVar4 == iVar3) {
      *(bool *)((longlong)param_1 + 0xc) = *(int *)param_2[2] != 0;
      return param_1;
    }
  }
  plVar5 = (longlong *)FUN_144741050(puVar1);
  lVar2 = DAT_14cb420d0;
  if ((DAT_14cb420d0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(DAT_14cb420d0);
  }
  if (((*plVar5 == lVar2) && ((short)plVar5[1] == DAT_14cb420d8)) &&
     ((*(char *)((longlong)plVar5 + 10) == DAT_14cb420da &&
      (iVar4 = *(int *)(param_2 + 3), 0 < iVar4)))) {
    uVar6 = FUN_144741050(puVar1);
    iVar3 = FUN_144a81174(uVar6);
    if (iVar4 == iVar3) {
      _Dst = param_1 + 2;
      goto LAB_1481598a5;
    }
  }
  plVar5 = (longlong *)FUN_144741050(puVar1);
  lVar2 = DAT_14cb420f0;
  if ((DAT_14cb420f0 != 0 & DAT_14c950c29) == 1) {
    FUN_14689c22e(DAT_14cb420f0);
  }
  if (*plVar5 != lVar2) {
    return param_1;
  }
  if ((short)plVar5[1] != (short)DAT_14cb420f8) {
    return param_1;
  }
  if (*(char *)((longlong)plVar5 + 10) != DAT_14cb420f8._2_1_) {
    return param_1;
  }
  iVar4 = *(int *)(param_2 + 3);
  if (iVar4 < 1) {
    return param_1;
  }
  uVar6 = FUN_144741050(puVar1);
  iVar3 = FUN_144a81174(uVar6);
  if (iVar4 != iVar3) {
    return param_1;
  }
  _Dst = param_1 + 1;
LAB_1481598a5:
  uVar6 = FUN_144741050(puVar1);
  iVar4 = FUN_144a81174(uVar6);
  memcpy(_Dst,(void *)param_2[2],(longlong)iVar4);
  return param_1;
}



// FUNCTION 1481598ca FUN_1481598ca body=297 status=ok
// SIG undefined FUN_1481598ca(void)

/* WARNING: Removing unreachable block (ram,0x0001481599ed) */

bool FUN_1481598ca(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_14816e316(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_68 = 0xffffffff;
    uVar4 = FUN_144830b78(&local_58,&DAT_14cb42160);
    local_58 = CONCAT44(local_58._4_4_,uVar4);
    uStack_50 = 0;
    local_48 = 0;
    lVar3 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(lVar3 + 8) = (undefined4)local_68;
    *(undefined8 *)(lVar3 + 0x10) = uStack_60;
    *(undefined4 *)(lVar3 + 0x18) = uVar4;
    if ((longlong *)(lVar3 + 8) != &local_68) {
      if (*(longlong *)(lVar3 + 0x20) != 0) {
        FUN_1400020a8();
      }
      *(undefined8 *)(lVar3 + 0x20) = uStack_50;
      *(undefined4 *)(lVar3 + 0x28) = (undefined4)local_48;
      *(undefined4 *)(lVar3 + 0x2c) = local_48._4_4_;
    }
    uStack_50 = 0;
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        FUN_1400020a8();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1481599f4 FUN_1481599f4 body=107 status=ok
// SIG undefined FUN_1481599f4(void)

bool FUN_1481599f4(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    uVar14 = *(undefined8 *)(lVar1 + 8);
    uVar15 = *(undefined8 *)(lVar1 + 0x10);
    uVar3 = *(undefined4 *)(lVar1 + 0x18);
    uVar4 = *(undefined4 *)(lVar1 + 0x1c);
    uVar5 = *(undefined4 *)(lVar1 + 0x20);
    uVar6 = *(undefined4 *)(lVar1 + 0x24);
    uVar7 = *(undefined4 *)(lVar1 + 0x28);
    uVar8 = *(undefined4 *)(lVar1 + 0x2c);
    uVar9 = *(undefined4 *)(lVar1 + 0x30);
    uVar10 = *(undefined4 *)(lVar1 + 0x34);
    uVar11 = *(undefined4 *)(lVar1 + 0x3c);
    uVar12 = *(undefined4 *)(lVar1 + 0x40);
    uVar13 = *(undefined4 *)(lVar1 + 0x44);
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(lVar1 + 0x38);
    *(undefined4 *)((longlong)param_2 + 0x34) = uVar11;
    *(undefined4 *)(param_2 + 7) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar13;
    *(undefined4 *)(param_2 + 4) = uVar7;
    *(undefined4 *)((longlong)param_2 + 0x24) = uVar8;
    *(undefined4 *)(param_2 + 5) = uVar9;
    *(undefined4 *)((longlong)param_2 + 0x2c) = uVar10;
    *(undefined4 *)(param_2 + 2) = uVar3;
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar4;
    *(undefined4 *)(param_2 + 3) = uVar5;
    *(undefined4 *)((longlong)param_2 + 0x1c) = uVar6;
    *param_2 = uVar14;
    param_2[1] = uVar15;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined4 *)(lVar1 + 0x38) = 0x3f800000;
    *(undefined4 *)(lVar1 + 0x3c) = 0x3f800000;
    *(undefined4 *)(lVar1 + 0x40) = 0x3f800000;
    *(undefined4 *)(lVar1 + 0x44) = 0xffffffff;
    if (lVar2 != 0) {
      FUN_1400020a8(lVar2);
    }
  }
  return lVar1 != 0;
}



// FUNCTION 148159a5f FUN_148159a5f body=148 status=ok
// SIG undefined FUN_148159a5f(void)

undefined8 FUN_148159a5f(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_68;
  longlong *local_58;
  longlong local_48 [6];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  uVar1 = FUN_1459d5184();
  FUN_144a5c54a(local_a8,uVar1);
  local_a0 = param_1;
  uVar1 = FUN_1402710dd(local_a8);
  if (local_68 != 0) {
    if (local_58 == (longlong *)0x0) {
      local_58 = local_48;
    }
    (**(code **)(*local_58 + 0x10))();
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148159af4 FUN_148159af4 body=437 status=ok
// SIG undefined FUN_148159af4(void)

bool FUN_148159af4(longlong param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  undefined8 uVar17;
  longlong *plVar18;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  longlong *local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 10);
    uVar7 = *(undefined8 *)(param_2 + 0xc);
    uVar8 = *(undefined8 *)(param_2 + 0xe);
    uVar9 = *(undefined8 *)(param_2 + 0x10);
    uVar10 = *(undefined8 *)(param_2 + 0x12);
    uVar11 = *(undefined8 *)(lVar1 + 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
    uVar14 = *(undefined8 *)(lVar1 + 0x38);
    uVar15 = *(undefined8 *)(lVar1 + 0x40);
    uVar16 = *(undefined8 *)(lVar1 + 0x48);
    uVar17 = *(undefined8 *)(lVar1 + 0x58);
    *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(lVar1 + 0x50);
    *(undefined8 *)(param_2 + 0x12) = uVar17;
    *(undefined8 *)(param_2 + 0xc) = uVar15;
    *(undefined8 *)(param_2 + 0xe) = uVar16;
    *(undefined8 *)(param_2 + 8) = uVar13;
    *(undefined8 *)(param_2 + 10) = uVar14;
    *(undefined8 *)(param_2 + 4) = uVar11;
    *(undefined8 *)(param_2 + 6) = uVar12;
    *(undefined8 *)(lVar1 + 0x50) = uVar9;
    *(undefined8 *)(lVar1 + 0x58) = uVar10;
    *(undefined8 *)(lVar1 + 0x40) = uVar7;
    *(undefined8 *)(lVar1 + 0x48) = uVar8;
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
    *(undefined8 *)(lVar1 + 0x38) = uVar6;
    *(undefined8 *)(lVar1 + 0x20) = uVar3;
    *(undefined8 *)(lVar1 + 0x28) = uVar4;
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_a8 = 0;
    uStack_a0 = 0;
    *(undefined4 *)(lVar1 + 0x10) = 0;
    local_98 = *(longlong *)(lVar1 + 0x20);
    uStack_90 = *(undefined8 *)(lVar1 + 0x28);
    local_88 = *(longlong **)(lVar1 + 0x30);
    uStack_80 = *(undefined8 *)(lVar1 + 0x38);
    local_38 = *(longlong *)(lVar1 + 0x40);
    uStack_30 = *(undefined8 *)(lVar1 + 0x48);
    local_28 = *(undefined8 *)(lVar1 + 0x50);
    uStack_20 = *(undefined8 *)(lVar1 + 0x58);
    local_48 = local_88;
    uStack_40 = uStack_80;
    local_58 = local_98;
    uStack_50 = uStack_90;
    *(undefined8 *)(lVar1 + 0x50) = 0;
    *(undefined8 *)(lVar1 + 0x58) = 0;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x28) = 0;
    local_68 = local_28;
    uStack_60 = uStack_20;
    local_78 = local_38;
    uStack_70 = uStack_30;
    if (local_98 != 0) {
      plVar18 = local_88;
      if (local_88 == (longlong *)0x0) {
        plVar18 = &local_78;
      }
      (**(code **)(*plVar18 + 0x10))();
    }
    if (lVar2 != 0) {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        plVar18 = (longlong *)(lVar2 + 0x40);
        if (*(longlong **)(lVar2 + 0x30) != (longlong *)0x0) {
          plVar18 = *(longlong **)(lVar2 + 0x30);
        }
        (**(code **)(*plVar18 + 0x10))();
      }
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148159caa FUN_148159caa body=183 status=ok
// SIG undefined FUN_148159caa(void)

undefined4 FUN_148159caa(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_1481192e4();
  if (cVar2 != '\0') {
    lVar1 = *(longlong *)(param_1 + 0x38);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_14689c22e(lVar1);
    }
    if (*(longlong *)(param_2 + 0x38) == lVar1) {
      lVar1 = *(longlong *)(param_1 + 0x40);
      if ((lVar1 != 0 & DAT_14c950c29) == 1) {
        FUN_14689c22e(lVar1);
      }
      if (*(longlong *)(param_2 + 0x40) == lVar1) {
        lVar1 = *(longlong *)(param_1 + 0x48);
        if ((lVar1 != 0 & DAT_14c950c29) == 1) {
          FUN_14689c22e(lVar1);
        }
        if ((((*(longlong *)(param_2 + 0x48) == lVar1) &&
             (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_2 + 0x60))) &&
            (*(int *)(param_1 + 0x68) == *(int *)(param_2 + 0x68))) &&
           (*(char *)(param_2 + 0x80) == *(char *)(param_1 + 0x80))) {
          return CONCAT31((int3)((uint)*(int *)(param_2 + 0x84) >> 8),
                          *(int *)(param_2 + 0x84) == *(int *)(param_1 + 0x84));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 148159d62 FUN_148159d62 body=202 status=ok
// SIG undefined FUN_148159d62(void)

void FUN_148159d62(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca750;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148159e2e FUN_148159e2e body=202 status=ok
// SIG undefined FUN_148159e2e(void)

void FUN_148159e2e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca7c0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148159efa FUN_148159efa body=202 status=ok
// SIG undefined FUN_148159efa(void)

void FUN_148159efa(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca830;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148159fc6 FUN_148159fc6 body=202 status=ok
// SIG undefined FUN_148159fc6(void)

void FUN_148159fc6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca8a0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a092 FUN_14815a092 body=202 status=ok
// SIG undefined FUN_14815a092(void)

void FUN_14815a092(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca910;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a15e FUN_14815a15e body=202 status=ok
// SIG undefined FUN_14815a15e(void)

void FUN_14815a15e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca980;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a22a FUN_14815a22a body=202 status=ok
// SIG undefined FUN_14815a22a(void)

void FUN_14815a22a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adca9f0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a2f6 FUN_14815a2f6 body=202 status=ok
// SIG undefined FUN_14815a2f6(void)

void FUN_14815a2f6(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcaa60;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a3c2 FUN_14815a3c2 body=202 status=ok
// SIG undefined FUN_14815a3c2(void)

void FUN_14815a3c2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcaad0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a48e FUN_14815a48e body=202 status=ok
// SIG undefined FUN_14815a48e(void)

void FUN_14815a48e(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcab40;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a55a FUN_14815a55a body=202 status=ok
// SIG undefined FUN_14815a55a(void)

void FUN_14815a55a(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcabb0;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a626 FUN_14815a626 body=202 status=ok
// SIG undefined FUN_14815a626(void)

void FUN_14815a626(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcac20;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a6f2 FUN_14815a6f2 body=202 status=ok
// SIG undefined FUN_14815a6f2(void)

void FUN_14815a6f2(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,2,0x10);
  local_28 = 2;
  *local_30 = &PTR_LAB_14ad81180;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_30[2] = lVar2;
  *local_30 = &PTR_FUN_14adcac90;
  local_30[3] = param_1;
  FUN_144a450dc(param_2,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815a7be FUN_14815a7be body=741 status=ok
// SIG undefined FUN_14815a7be(void)

/* WARNING: Removing unreachable block (ram,0x00014815aa0f) */
/* WARNING: Removing unreachable block (ram,0x00014815aa22) */
/* WARNING: Removing unreachable block (ram,0x00014815aa26) */

void FUN_14815a7be(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  byte bVar10;
  byte *pbVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_1c8 [32];
  int *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  uint *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (uint *)0x0;
  uStack_180 = 0;
  FUN_144a98d08(&local_188,param_2);
  local_198 = 0;
  local_1a8 = (int *)0x0;
  uStack_1a0 = 0;
  FUN_144a76d88(&local_1a8,param_2);
  bVar10 = *param_2;
  lVar13 = *(longlong *)(param_2 + 0x80);
  pbVar11 = (byte *)(lVar13 + 0x40);
  if (bVar10 != 0) {
    pbVar11 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar11) {
    iVar14 = 0;
    do {
      uVar9 = uStack_c0;
      ppuVar8 = local_c8;
      piVar1 = local_168 + local_158;
      iVar4 = *local_168;
      puVar2 = local_188 + local_178;
      uVar5 = *local_188;
      piVar3 = local_1a8 + local_198;
      iVar6 = *local_1a8;
      local_1a8 = piVar3;
      local_188 = puVar2;
      local_168 = piVar1;
      if ((-1 < (int)uVar5 && 0 < iVar4) && ((int)uVar5 < *(int *)(local_140 + 0x70))) {
        uVar7 = *(undefined8 *)(*(longlong *)(local_140 + 0x68) + (ulonglong)uVar5 * 8);
        local_f8[0] = iVar4;
        local_108 = CONCAT31(local_108._1_3_,iVar6 != 0);
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_78 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_98 = 0;
        uStack_94 = 0;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        local_a8 = 0;
        uStack_a4 = 0;
        local_d8 = (longlong *)0x0;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_e8 = FUN_143a3bb8e;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_c8 = &PTR_LAB_14adcbff0;
        uStack_c0 = uVar7;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_108 = local_78;
        uStack_104 = uStack_74;
        uStack_100 = uStack_70;
        uStack_fc = uStack_6c;
        local_118 = ppuVar8;
        uStack_110 = uVar9;
        uStack_94 = 0;
        local_98 = 0;
        uStack_a4 = 0;
        local_a8 = 0;
        local_c8 = &PTR_LAB_14adcbff0;
        local_d8 = (longlong *)0x0;
        local_e8 = FUN_143a3bb8e;
        uStack_11c = uStack_8c;
        uStack_120 = uStack_90;
        local_128 = 0;
        uStack_12c = uStack_9c;
        uStack_130 = uStack_a0;
        local_138 = 0;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (code *)0x0) {
          plVar12 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar12 = &local_c8;
          }
          (**(code **)(*plVar12 + 0x10))();
        }
        bVar10 = *param_2;
        lVar13 = *(longlong *)(param_2 + 0x80);
      }
      iVar14 = iVar14 + 1;
      pbVar11 = (byte *)(lVar13 + 0x40);
      if ((bVar10 & 1) != 0) {
        pbVar11 = param_2 + 0x3c;
      }
    } while (iVar14 < *(int *)pbVar11);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815aaa4 FUN_14815aaa4 body=148 status=ok
// SIG undefined FUN_14815aaa4(void)

void FUN_14815aaa4(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (*param_2 == '\x01') {
    iVar5 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar5 + 1;
    iVar5 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar5 * 8);
    *param_1 = iVar5;
    plVar6 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar5 = *piVar3;
    lVar7 = 0;
    if (iVar5 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar5;
        iVar5 = piVar3[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (iVar5 <= (int)uVar4);
    }
    iVar5 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar7 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar5;
    plVar6 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar6 + (longlong)iVar5 * 8);
  return;
}



// FUNCTION 14815ab38 FUN_14815ab38 body=107 status=ok
// SIG undefined FUN_14815ab38(void)

void FUN_14815ab38(undefined8 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_14001cc68(0x60,0x10);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 2) = *param_2;
  lVar1 = *(longlong *)(param_2 + 4);
  puVar2[4] = lVar1;
  puVar2[6] = 0;
  if (lVar1 != 0) {
    puVar3 = (undefined8 *)(param_2 + 0xc);
    if (*(undefined8 **)(param_2 + 8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_2 + 8);
    }
    (**(code **)*puVar3)(puVar3,puVar2 + 6);
  }
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    puVar3 = (undefined8 *)*param_1;
    *param_1 = puVar2;
    UNLOCK();
    LOCK();
    *puVar3 = puVar2;
    UNLOCK();
  }
  return;
}



// FUNCTION 14815aba4 FUN_14815aba4 body=735 status=ok
// SIG undefined FUN_14815aba4(void)

/* WARNING: Removing unreachable block (ram,0x00014815adef) */
/* WARNING: Removing unreachable block (ram,0x00014815ae02) */
/* WARNING: Removing unreachable block (ram,0x00014815ae06) */

void FUN_14815aba4(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  uint *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (uint *)0x0;
  uStack_180 = 0;
  FUN_144a98d08(&local_188,param_2);
  local_198 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  FUN_144a98d08(&local_1a8,param_2);
  bVar9 = *param_2;
  lVar12 = *(longlong *)(param_2 + 0x80);
  pbVar10 = (byte *)(lVar12 + 0x40);
  if (bVar9 != 0) {
    pbVar10 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar10) {
    iVar13 = 0;
    do {
      uVar7 = uStack_c0;
      ppuVar6 = local_c8;
      piVar1 = local_168 + local_158;
      iVar3 = *local_168;
      puVar2 = local_188 + local_178;
      uVar4 = *local_188;
      puVar8 = local_1a8 + local_198;
      local_188 = puVar2;
      local_168 = piVar1;
      if ((-1 < (int)uVar4 && 0 < iVar3) && ((int)uVar4 < *(int *)(local_140 + 0x70))) {
        uVar5 = *(undefined8 *)(*(longlong *)(local_140 + 0x68) + (ulonglong)uVar4 * 8);
        local_f8[0] = iVar3;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_108 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_78 = (undefined4)local_b8;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_98 = 0;
        uStack_94 = 0;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        local_a8 = 0;
        uStack_a4 = 0;
        local_d8 = (longlong *)0x0;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_e8 = FUN_143a3bc2a;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_c8 = &PTR_LAB_14adcc010;
        uStack_c0 = uVar5;
        local_b8 = CONCAT44(uStack_104,*local_1a8);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        uStack_104 = uStack_74;
        uStack_100 = uStack_70;
        uStack_fc = uStack_6c;
        local_118 = ppuVar6;
        uStack_110 = uVar7;
        local_78 = local_108;
        uStack_94 = 0;
        local_98 = 0;
        uStack_a4 = 0;
        local_a8 = 0;
        local_c8 = &PTR_LAB_14adcc010;
        local_d8 = (longlong *)0x0;
        local_e8 = FUN_143a3bc2a;
        uStack_11c = uStack_8c;
        uStack_120 = uStack_90;
        local_128 = 0;
        uStack_12c = uStack_9c;
        uStack_130 = uStack_a0;
        local_138 = 0;
        local_1a8 = puVar8;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (code *)0x0) {
          plVar11 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar11 = &local_c8;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        bVar9 = *param_2;
        lVar12 = *(longlong *)(param_2 + 0x80);
        puVar8 = local_1a8;
      }
      local_1a8 = puVar8;
      iVar13 = iVar13 + 1;
      pbVar10 = (byte *)(lVar12 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar10 = param_2 + 0x3c;
      }
    } while (iVar13 < *(int *)pbVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815ae84 FUN_14815ae84 body=739 status=ok
// SIG undefined FUN_14815ae84(void)

/* WARNING: Removing unreachable block (ram,0x00014815b0d3) */
/* WARNING: Removing unreachable block (ram,0x00014815b0e6) */
/* WARNING: Removing unreachable block (ram,0x00014815b0ea) */

void FUN_14815ae84(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte *pbVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_1c8 [32];
  undefined4 *local_1a8;
  undefined8 uStack_1a0;
  int local_198;
  uint *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (uint *)0x0;
  uStack_180 = 0;
  FUN_144a98d08(&local_188,param_2);
  local_198 = 0;
  local_1a8 = (undefined4 *)0x0;
  uStack_1a0 = 0;
  FUN_144a98dce(&local_1a8,param_2);
  bVar9 = *param_2;
  lVar12 = *(longlong *)(param_2 + 0x80);
  pbVar10 = (byte *)(lVar12 + 0x40);
  if (bVar9 != 0) {
    pbVar10 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar10) {
    iVar13 = 0;
    do {
      uVar7 = uStack_c0;
      ppuVar6 = local_c8;
      piVar1 = local_168 + local_158;
      iVar3 = *local_168;
      puVar2 = local_188 + local_178;
      uVar4 = *local_188;
      puVar8 = local_1a8 + local_198;
      local_188 = puVar2;
      local_168 = piVar1;
      if ((-1 < (int)uVar4 && 0 < iVar3) && ((int)uVar4 < *(int *)(local_140 + 0x70))) {
        uVar5 = *(undefined8 *)(*(longlong *)(local_140 + 0x68) + (ulonglong)uVar4 * 8);
        local_f8[0] = iVar3;
        local_88 = (undefined4)local_c8;
        uStack_84 = local_c8._4_4_;
        uStack_80 = (undefined4)uStack_c0;
        uStack_7c = uStack_c0._4_4_;
        local_108 = (undefined4)local_b8;
        uStack_74 = local_b8._4_4_;
        uStack_70 = (undefined4)uStack_b0;
        uStack_6c = uStack_b0._4_4_;
        local_78 = (undefined4)local_b8;
        uStack_90 = (undefined4)uStack_d0;
        uStack_8c = uStack_d0._4_4_;
        local_98 = 0;
        uStack_94 = 0;
        uStack_a0 = (undefined4)uStack_e0;
        uStack_9c = uStack_e0._4_4_;
        local_a8 = 0;
        uStack_a4 = 0;
        local_d8 = (longlong *)0x0;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_e8 = FUN_143a3bcc6;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_c8 = &PTR_LAB_14adcc030;
        uStack_c0 = uVar5;
        local_b8 = CONCAT44(uStack_104,*local_1a8);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        uStack_104 = uStack_74;
        uStack_100 = uStack_70;
        uStack_fc = uStack_6c;
        local_118 = ppuVar6;
        uStack_110 = uVar7;
        local_78 = local_108;
        uStack_94 = 0;
        local_98 = 0;
        uStack_a4 = 0;
        local_a8 = 0;
        local_c8 = &PTR_LAB_14adcc030;
        local_d8 = (longlong *)0x0;
        local_e8 = FUN_143a3bcc6;
        uStack_11c = uStack_8c;
        uStack_120 = uStack_90;
        local_128 = 0;
        uStack_12c = uStack_9c;
        uStack_130 = uStack_a0;
        local_138 = 0;
        local_1a8 = puVar8;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (code *)0x0) {
          plVar11 = local_d8;
          if (local_d8 == (longlong *)0x0) {
            plVar11 = &local_c8;
          }
          (**(code **)(*plVar11 + 0x10))();
        }
        bVar9 = *param_2;
        lVar12 = *(longlong *)(param_2 + 0x80);
        puVar8 = local_1a8;
      }
      local_1a8 = puVar8;
      iVar13 = iVar13 + 1;
      pbVar10 = (byte *)(lVar12 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar10 = param_2 + 0x3c;
      }
    } while (iVar13 < *(int *)pbVar10);
  }
  if ((local_60 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815b168 FUN_14815b168 body=781 status=ok
// SIG undefined FUN_14815b168(void)

/* WARNING: Removing unreachable block (ram,0x00014815b3d4) */

void FUN_14815b168(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int *piVar9;
  byte bVar10;
  undefined8 *puVar11;
  longlong lVar12;
  byte *pbVar13;
  int iVar14;
  undefined4 uVar15;
  size_t _Size;
  int iVar16;
  undefined1 auStack_158 [40];
  int local_130 [2];
  undefined8 local_128;
  undefined4 local_120;
  void *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100 [2];
  int *local_f8;
  ulonglong uStack_f0;
  int *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14815aaa4(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (int *)0x0;
  uStack_e0 = 0;
  FUN_144a76d88(&local_e8,param_2);
  bVar10 = *param_2;
  lVar12 = *(longlong *)(param_2 + 0x80);
  pbVar13 = (byte *)(lVar12 + 0x40);
  if (bVar10 != 0) {
    pbVar13 = param_2 + 0x3c;
  }
  iVar14 = *(int *)pbVar13;
  if (0 < iVar14) {
    iVar16 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar14 = *local_88;
      piVar2 = local_a8 + local_98;
      iVar5 = *local_a8;
      piVar3 = local_c8 + local_b8;
      iVar6 = *local_c8;
      piVar9 = local_e8 + local_d8;
      local_c8 = piVar3;
      local_a8 = piVar2;
      local_88 = piVar1;
      if ((-1 < (longlong)iVar6) && (iVar6 < *(int *)(local_68 + 0x70))) {
        iVar7 = *local_e8;
        local_108 = *(undefined8 *)(*(longlong *)(local_68 + 0x68) + (longlong)iVar6 * 8);
        local_e8 = piVar9;
        local_100[0] = FUN_144830b78(local_100,&DAT_14cb420e0);
        local_f8 = (int *)0x0;
        uStack_f0 = 0;
        FUN_140121138(&local_108);
        lVar12 = local_68;
        piVar1 = local_f8;
        *local_f8 = -(uint)(iVar7 != 0);
        if (iVar14 == 0) {
          if (-1 < iVar5) {
            local_120 = local_100[0];
            local_128 = local_108;
            local_118 = (void *)0x0;
            _Size = (size_t)(int)uStack_f0;
            local_110._0_4_ = (int)uStack_f0;
            local_130[0] = iVar5;
            if (_Size == 0) {
              uVar15 = 0;
              iVar14 = 0;
            }
            else {
              FUN_1447a127e(&local_118,uStack_f0 & 0xffffffff,0);
              memcpy(local_118,piVar1,_Size);
              iVar14 = (int)local_110;
              uVar15 = local_110._4_4_;
            }
            pvVar8 = local_118;
            iVar5 = local_130[0];
            puVar11 = (undefined8 *)FUN_14001cc68(0x30);
            *puVar11 = 0;
            *(int *)(puVar11 + 1) = iVar5;
            puVar11[2] = local_128;
            *(undefined4 *)(puVar11 + 3) = local_120;
            puVar11[4] = pvVar8;
            local_118 = (void *)0x0;
            *(int *)(puVar11 + 5) = iVar14;
            *(undefined4 *)((longlong)puVar11 + 0x2c) = uVar15;
            local_110 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              LOCK();
              puVar4 = *(undefined8 **)(lVar12 + 0x10);
              *(undefined8 **)(lVar12 + 0x10) = puVar11;
              UNLOCK();
              LOCK();
              *puVar4 = puVar11;
              UNLOCK();
            }
          }
        }
        else {
          FUN_14816eca2(local_68 + 0x78,local_130,&local_108);
        }
        if (local_f8 != (int *)0x0) {
          FUN_1400020a8();
        }
        bVar10 = *param_2;
        lVar12 = *(longlong *)(param_2 + 0x80);
        piVar9 = local_e8;
      }
      local_e8 = piVar9;
      iVar16 = iVar16 + 1;
      pbVar13 = (byte *)(lVar12 + 0x40);
      if ((bVar10 & 1) != 0) {
        pbVar13 = param_2 + 0x3c;
      }
      iVar14 = *(int *)pbVar13;
    } while (iVar16 < iVar14);
  }
  *(int *)(local_68 + 0x34) = iVar14;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815b476 FUN_14815b476 body=786 status=ok
// SIG undefined FUN_14815b476(void)

/* WARNING: Removing unreachable block (ram,0x00014815b6e7) */

void FUN_14815b476(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  size_t _Size;
  undefined4 uVar14;
  int iVar15;
  undefined1 auStack_158 [32];
  int local_138 [2];
  undefined8 local_130;
  undefined4 local_128;
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  void *local_100;
  ulonglong uStack_f8;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14815aaa4(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98d08(&local_e8,param_2);
  bVar9 = *param_2;
  lVar11 = *(longlong *)(param_2 + 0x80);
  pbVar12 = (byte *)(lVar11 + 0x40);
  if (bVar9 != 0) {
    pbVar12 = param_2 + 0x3c;
  }
  iVar13 = *(int *)pbVar12;
  if (0 < iVar13) {
    iVar15 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar13 = *local_88;
      piVar2 = local_a8 + local_98;
      iVar6 = *local_a8;
      piVar3 = local_c8 + local_b8;
      iVar7 = *local_c8;
      puVar4 = local_e8 + local_d8;
      local_ec = *local_e8;
      local_e8 = puVar4;
      local_c8 = piVar3;
      local_a8 = piVar2;
      local_88 = piVar1;
      if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(local_68 + 0x70))) {
        local_110 = *(undefined8 *)(*(longlong *)(local_68 + 0x68) + (longlong)iVar7 * 8);
        local_108[0] = FUN_144830b78(local_108,&DAT_14cb420d0);
        local_100 = (void *)0x0;
        uStack_f8 = 0;
        FUN_140121138(&local_110);
        memcpy(local_100,&local_ec,(longlong)(int)uStack_f8);
        lVar11 = local_68;
        pvVar8 = local_100;
        if (iVar13 == 0) {
          if (-1 < iVar6) {
            local_128 = local_108[0];
            local_130 = local_110;
            local_120 = (void *)0x0;
            _Size = (size_t)(int)uStack_f8;
            local_118._0_4_ = (int)uStack_f8;
            local_138[0] = iVar6;
            if (_Size == 0) {
              uVar14 = 0;
              iVar13 = 0;
            }
            else {
              FUN_1447a127e(&local_120,uStack_f8 & 0xffffffff,0);
              memcpy(local_120,pvVar8,_Size);
              iVar13 = (int)local_118;
              uVar14 = local_118._4_4_;
            }
            pvVar8 = local_120;
            iVar6 = local_138[0];
            puVar10 = (undefined8 *)FUN_14001cc68(0x30);
            *puVar10 = 0;
            *(int *)(puVar10 + 1) = iVar6;
            puVar10[2] = local_130;
            *(undefined4 *)(puVar10 + 3) = local_128;
            puVar10[4] = pvVar8;
            local_120 = (void *)0x0;
            *(int *)(puVar10 + 5) = iVar13;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar14;
            local_118 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              LOCK();
              puVar5 = *(undefined8 **)(lVar11 + 0x10);
              *(undefined8 **)(lVar11 + 0x10) = puVar10;
              UNLOCK();
              LOCK();
              *puVar5 = puVar10;
              UNLOCK();
            }
          }
        }
        else {
          FUN_14816eca2(local_68 + 0x78,local_138,&local_110);
        }
        if (local_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        bVar9 = *param_2;
        lVar11 = *(longlong *)(param_2 + 0x80);
      }
      iVar15 = iVar15 + 1;
      pbVar12 = (byte *)(lVar11 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar12 = param_2 + 0x3c;
      }
      iVar13 = *(int *)pbVar12;
    } while (iVar15 < iVar13);
  }
  *(int *)(local_68 + 0x34) = iVar13;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815b78a FUN_14815b78a body=789 status=ok
// SIG undefined FUN_14815b78a(void)

/* WARNING: Removing unreachable block (ram,0x00014815b9fe) */

void FUN_14815b78a(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  byte bVar9;
  undefined8 *puVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  size_t _Size;
  undefined4 uVar14;
  int iVar15;
  undefined1 auStack_158 [32];
  int local_138 [2];
  undefined8 local_130;
  undefined4 local_128;
  void *local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined4 local_108 [2];
  void *local_100;
  ulonglong uStack_f8;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  int *local_c8;
  undefined8 uStack_c0;
  int local_b8;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  int *local_88;
  undefined8 uStack_80;
  int local_78;
  undefined1 local_70 [8];
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_158;
  FUN_14815aaa4(local_70);
  local_78 = 0;
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_144a76d88(&local_88,param_2);
  local_98 = 0;
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  FUN_144a98d08(&local_a8,param_2);
  local_b8 = 0;
  local_c8 = (int *)0x0;
  uStack_c0 = 0;
  FUN_144a98d08(&local_c8,param_2);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_2);
  bVar9 = *param_2;
  lVar11 = *(longlong *)(param_2 + 0x80);
  pbVar12 = (byte *)(lVar11 + 0x40);
  if (bVar9 != 0) {
    pbVar12 = param_2 + 0x3c;
  }
  iVar13 = *(int *)pbVar12;
  if (0 < iVar13) {
    iVar15 = 0;
    do {
      piVar1 = local_88 + local_78;
      iVar13 = *local_88;
      piVar2 = local_a8 + local_98;
      iVar6 = *local_a8;
      piVar3 = local_c8 + local_b8;
      iVar7 = *local_c8;
      puVar4 = local_e8 + local_d8;
      local_ec = *local_e8;
      local_e8 = puVar4;
      local_c8 = piVar3;
      local_a8 = piVar2;
      local_88 = piVar1;
      if ((-1 < (longlong)iVar7) && (iVar7 < *(int *)(local_68 + 0x70))) {
        local_110 = *(undefined8 *)(*(longlong *)(local_68 + 0x68) + (longlong)iVar7 * 8);
        local_108[0] = FUN_144830b78(local_108,&DAT_14cb420f0);
        local_100 = (void *)0x0;
        uStack_f8 = 0;
        FUN_140121138(&local_110);
        memcpy(local_100,&local_ec,(longlong)(int)uStack_f8);
        lVar11 = local_68;
        pvVar8 = local_100;
        if (iVar13 == 0) {
          if (-1 < iVar6) {
            local_128 = local_108[0];
            local_130 = local_110;
            local_120 = (void *)0x0;
            _Size = (size_t)(int)uStack_f8;
            local_118._0_4_ = (int)uStack_f8;
            local_138[0] = iVar6;
            if (_Size == 0) {
              uVar14 = 0;
              iVar13 = 0;
            }
            else {
              FUN_1447a127e(&local_120,uStack_f8 & 0xffffffff,0);
              memcpy(local_120,pvVar8,_Size);
              iVar13 = (int)local_118;
              uVar14 = local_118._4_4_;
            }
            pvVar8 = local_120;
            iVar6 = local_138[0];
            puVar10 = (undefined8 *)FUN_14001cc68(0x30);
            *puVar10 = 0;
            *(int *)(puVar10 + 1) = iVar6;
            puVar10[2] = local_130;
            *(undefined4 *)(puVar10 + 3) = local_128;
            puVar10[4] = pvVar8;
            local_120 = (void *)0x0;
            *(int *)(puVar10 + 5) = iVar13;
            *(undefined4 *)((longlong)puVar10 + 0x2c) = uVar14;
            local_118 = 0;
            if (puVar10 != (undefined8 *)0x0) {
              LOCK();
              puVar5 = *(undefined8 **)(lVar11 + 0x10);
              *(undefined8 **)(lVar11 + 0x10) = puVar10;
              UNLOCK();
              LOCK();
              *puVar5 = puVar10;
              UNLOCK();
            }
          }
        }
        else {
          FUN_14816eca2(local_68 + 0x78,local_138,&local_110);
        }
        if (local_100 != (void *)0x0) {
          FUN_1400020a8();
        }
        bVar9 = *param_2;
        lVar11 = *(longlong *)(param_2 + 0x80);
      }
      iVar15 = iVar15 + 1;
      pbVar12 = (byte *)(lVar11 + 0x40);
      if ((bVar9 & 1) != 0) {
        pbVar12 = param_2 + 0x3c;
      }
      iVar13 = *(int *)pbVar12;
    } while (iVar15 < iVar13);
  }
  *(int *)(local_68 + 0x34) = iVar13;
  if ((local_60 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815baa0 FUN_14815baa0 body=627 status=ok
// SIG undefined FUN_14815baa0(void)

/* WARNING: Removing unreachable block (ram,0x00014815bc7a) */
/* WARNING: Removing unreachable block (ram,0x00014815bc8d) */
/* WARNING: Removing unreachable block (ram,0x00014815bc91) */

void FUN_14815baa0(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  bVar13 = *param_2;
  lVar14 = *(longlong *)(param_2 + 0x80);
  pbVar16 = (byte *)(lVar14 + 0x40);
  if (bVar13 != 0) {
    pbVar16 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar17 = 0;
    do {
      uVar11 = uStack_b0;
      uVar10 = local_b8;
      uVar9 = uStack_bc;
      uVar8 = uStack_c0;
      ppuVar7 = local_c8;
      uVar6 = uStack_d0;
      uVar5 = uStack_e0;
      uVar4 = uStack_10c;
      piVar1 = local_168 + local_158;
      iVar2 = *local_168;
      puVar12 = local_188 + local_178;
      local_168 = piVar1;
      if (0 < iVar2) {
        uVar3 = *local_188;
        local_f8[0] = iVar2;
        uStack_80 = CONCAT44(uStack_bc,uStack_c0);
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_c8;
        local_98 = 0;
        uStack_90 = uStack_d0;
        local_a8 = 0;
        uStack_a0 = uStack_e0;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_c8 = &PTR_LAB_14adcc050;
        uStack_c0 = uVar3;
        uStack_bc = uStack_10c;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_d8 = (undefined ***)0x0;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = FUN_143a3bd64;
        uStack_a0._0_4_ = (undefined4)uVar5;
        uStack_130 = (undefined4)uStack_a0;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_12c = uStack_a0._4_4_;
        uStack_90._0_4_ = (undefined4)uVar6;
        uStack_120 = (undefined4)uStack_90;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_11c = uStack_90._4_4_;
        local_78._0_4_ = (undefined4)uVar10;
        local_108 = (undefined4)local_78;
        local_78._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_104 = local_78._4_4_;
        uStack_70._0_4_ = (undefined4)uVar11;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_118 = ppuVar7;
        uStack_110 = uVar8;
        uStack_10c = uVar9;
        uStack_70 = uVar11;
        local_78 = uVar10;
        local_88 = ppuVar7;
        uStack_90 = uVar6;
        local_98 = 0;
        uStack_a0 = uVar5;
        local_a8 = 0;
        uStack_bc = uVar4;
        local_c8 = &PTR_LAB_14adcc050;
        local_d8 = (undefined ***)0x0;
        local_e8 = FUN_143a3bd64;
        local_128 = 0;
        local_138 = 0;
        local_188 = local_188 + local_178;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (code *)0x0) {
          pppuVar15 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar15 = &local_c8;
          }
          (*(code *)(*pppuVar15)[2])();
        }
        bVar13 = *param_2;
        lVar14 = *(longlong *)(param_2 + 0x80);
        puVar12 = local_188;
      }
      local_188 = puVar12;
      iVar17 = iVar17 + 1;
      pbVar16 = (byte *)(lVar14 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar16 = param_2 + 0x3c;
      }
    } while (iVar17 < *(int *)pbVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815bd14 FUN_14815bd14 body=627 status=ok
// SIG undefined FUN_14815bd14(void)

/* WARNING: Removing unreachable block (ram,0x00014815beee) */
/* WARNING: Removing unreachable block (ram,0x00014815bf01) */
/* WARNING: Removing unreachable block (ram,0x00014815bf05) */

void FUN_14815bd14(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined4 *puVar12;
  byte bVar13;
  longlong lVar14;
  undefined ***pppuVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 auStack_1a8 [32];
  undefined4 *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  code *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (undefined4 *)0x0;
  uStack_180 = 0;
  FUN_144a98dce(&local_188,param_2);
  bVar13 = *param_2;
  lVar14 = *(longlong *)(param_2 + 0x80);
  pbVar16 = (byte *)(lVar14 + 0x40);
  if (bVar13 != 0) {
    pbVar16 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar16) {
    iVar17 = 0;
    do {
      uVar11 = uStack_b0;
      uVar10 = local_b8;
      uVar9 = uStack_bc;
      uVar8 = uStack_c0;
      ppuVar7 = local_c8;
      uVar6 = uStack_d0;
      uVar5 = uStack_e0;
      uVar4 = uStack_10c;
      piVar1 = local_168 + local_158;
      iVar2 = *local_168;
      puVar12 = local_188 + local_178;
      local_168 = piVar1;
      if (0 < iVar2) {
        uVar3 = *local_188;
        local_f8[0] = iVar2;
        uStack_80 = CONCAT44(uStack_bc,uStack_c0);
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_c8;
        local_98 = 0;
        uStack_90 = uStack_d0;
        local_a8 = 0;
        uStack_a0 = uStack_e0;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_c8 = &PTR_LAB_14adcc070;
        uStack_c0 = uVar3;
        uStack_bc = uStack_10c;
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_d8 = (undefined ***)0x0;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        local_e8 = FUN_143a3bdee;
        uStack_a0._0_4_ = (undefined4)uVar5;
        uStack_130 = (undefined4)uStack_a0;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
        uStack_12c = uStack_a0._4_4_;
        uStack_90._0_4_ = (undefined4)uVar6;
        uStack_120 = (undefined4)uStack_90;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_11c = uStack_90._4_4_;
        local_78._0_4_ = (undefined4)uVar10;
        local_108 = (undefined4)local_78;
        local_78._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_104 = local_78._4_4_;
        uStack_70._0_4_ = (undefined4)uVar11;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_118 = ppuVar7;
        uStack_110 = uVar8;
        uStack_10c = uVar9;
        uStack_70 = uVar11;
        local_78 = uVar10;
        local_88 = ppuVar7;
        uStack_90 = uVar6;
        local_98 = 0;
        uStack_a0 = uVar5;
        local_a8 = 0;
        uStack_bc = uVar4;
        local_c8 = &PTR_LAB_14adcc070;
        local_d8 = (undefined ***)0x0;
        local_e8 = FUN_143a3bdee;
        local_128 = 0;
        local_138 = 0;
        local_188 = local_188 + local_178;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (code *)0x0) {
          pppuVar15 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar15 = &local_c8;
          }
          (*(code *)(*pppuVar15)[2])();
        }
        bVar13 = *param_2;
        lVar14 = *(longlong *)(param_2 + 0x80);
        puVar12 = local_188;
      }
      local_188 = puVar12;
      iVar17 = iVar17 + 1;
      pbVar16 = (byte *)(lVar14 + 0x40);
      if ((bVar13 & 1) != 0) {
        pbVar16 = param_2 + 0x3c;
      }
    } while (iVar17 < *(int *)pbVar16);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815bf88 FUN_14815bf88 body=779 status=ok
// SIG undefined FUN_14815bf88(void)

/* WARNING: Removing unreachable block (ram,0x00014815c1ff) */
/* WARNING: Removing unreachable block (ram,0x00014815c212) */
/* WARNING: Removing unreachable block (ram,0x00014815c216) */

void FUN_14815bf88(undefined8 param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  int *piVar5;
  undefined ***pppuVar6;
  int iVar7;
  undefined1 auStack_1d8 [36];
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 *local_190 [2];
  int local_180;
  undefined4 *local_178;
  int local_168;
  undefined4 *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  FUN_14815aaa4(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar5 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar5) {
    iVar7 = 0;
    do {
      iVar1 = *local_148;
      local_1ac = *local_160;
      local_1b0 = *local_178;
      local_1b4 = *local_190[0];
      local_190[0] = local_190[0] + local_180;
      local_178 = local_178 + local_168;
      local_160 = local_160 + local_150;
      local_148 = local_148 + local_138;
      FUN_144b38fe4(local_120 + 200,&local_1a8,&local_1b4);
      ppuVar4 = local_a8;
      uVar3 = uStack_b0;
      uVar2 = uStack_c0;
      if (0 < iVar1) {
        local_d8[0] = iVar1;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = uStack_1a0;
        uStack_90 = local_198;
        local_a8 = &PTR_LAB_14adcc090;
        uStack_a0 = local_1a8;
        local_b8 = (undefined ***)0x0;
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        local_c8 = FUN_143a3be78;
        uStack_80._0_4_ = (undefined4)uVar2;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar3;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_f8 = ppuVar4;
        local_68 = ppuVar4;
        uStack_70 = uVar3;
        local_78 = 0;
        uStack_80 = uVar2;
        local_88 = 0;
        local_a8 = &PTR_LAB_14adcc090;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_143a3be78;
        local_108 = 0;
        local_118 = 0;
        FUN_14815ab38(local_120 + 0x20,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar6 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar6 = &local_a8;
          }
          (*(code *)(*pppuVar6)[2])();
        }
      }
      iVar7 = iVar7 + 1;
      piVar5 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar5 = (int *)(param_2 + 0x3c);
      }
    } while (iVar7 < *piVar5);
  }
  if ((local_48 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815c294 FUN_14815c294 body=703 status=ok
// SIG undefined FUN_14815c294(void)

/* WARNING: Removing unreachable block (ram,0x00014815c4bf) */
/* WARNING: Removing unreachable block (ram,0x00014815c4d2) */
/* WARNING: Removing unreachable block (ram,0x00014815c4d6) */

void FUN_14815c294(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 *puVar13;
  byte bVar14;
  longlong lVar15;
  undefined ***pppuVar16;
  byte *pbVar17;
  int iVar18;
  undefined1 auStack_1b8 [40];
  undefined4 *local_190 [2];
  int local_180;
  undefined4 *local_178;
  int local_168;
  undefined4 *local_160;
  int local_150;
  int *local_148;
  undefined8 uStack_140;
  int local_138;
  undefined1 local_128 [8];
  longlong local_120;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8 [4];
  code *local_c8;
  undefined8 uStack_c0;
  undefined ***local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_14815aaa4(local_128);
  local_148 = (int *)0x0;
  uStack_140 = 0;
  local_138 = 0;
  FUN_144a98d08(&local_148,param_2);
  FUN_1448a432c(local_190,param_2);
  bVar14 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar17 = (byte *)(lVar15 + 0x40);
  if (bVar14 != 0) {
    pbVar17 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar17) {
    iVar18 = 0;
    do {
      uVar12 = uStack_90;
      uVar11 = local_98;
      uVar10 = uStack_a0;
      ppuVar9 = local_a8;
      uVar8 = uStack_b0;
      uVar7 = uStack_c0;
      piVar1 = local_148 + local_138;
      iVar6 = *local_148;
      puVar2 = local_160 + local_150;
      uVar4 = *local_160;
      puVar3 = local_178 + local_168;
      uVar5 = *local_178;
      puVar13 = local_190[0] + local_180;
      local_178 = puVar3;
      local_160 = puVar2;
      local_148 = piVar1;
      if (0 < iVar6) {
        local_d8[0] = iVar6;
        local_58 = local_98;
        uStack_50 = uStack_90;
        local_68 = local_a8;
        uStack_60 = uStack_a0;
        local_78 = 0;
        uStack_70 = uStack_b0;
        local_88 = 0;
        uStack_80 = uStack_c0;
        local_98 = CONCAT44(uStack_e4,uVar4);
        uStack_90 = CONCAT44(uStack_dc,uStack_e0);
        local_a8 = &PTR_LAB_14adcc0b0;
        uStack_a0 = CONCAT44(uVar5,*local_190[0]);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_143a3bf44;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        uStack_80._0_4_ = (undefined4)uVar7;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        uStack_70._0_4_ = (undefined4)uVar8;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        uStack_60._0_4_ = (undefined4)uVar10;
        uStack_f0 = (undefined4)uStack_60;
        uStack_60._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
        uStack_ec = uStack_60._4_4_;
        local_58._0_4_ = (undefined4)uVar11;
        local_e8 = (undefined4)local_58;
        local_58._4_4_ = (undefined4)((ulonglong)uVar11 >> 0x20);
        uStack_e4 = local_58._4_4_;
        uStack_50._0_4_ = (undefined4)uVar12;
        uStack_e0 = (undefined4)uStack_50;
        uStack_50._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
        uStack_dc = uStack_50._4_4_;
        local_f8 = ppuVar9;
        uStack_50 = uVar12;
        local_58 = uVar11;
        uStack_60 = uVar10;
        local_68 = ppuVar9;
        uStack_70 = uVar8;
        local_78 = 0;
        uStack_80 = uVar7;
        local_88 = 0;
        local_a8 = &PTR_LAB_14adcc0b0;
        local_b8 = (undefined ***)0x0;
        local_c8 = FUN_143a3bf44;
        local_108 = 0;
        local_118 = 0;
        local_190[0] = local_190[0] + local_180;
        FUN_14815ab38(local_120 + 0x20,local_d8);
        if (local_c8 != (code *)0x0) {
          pppuVar16 = local_b8;
          if (local_b8 == (undefined ***)0x0) {
            pppuVar16 = &local_a8;
          }
          (*(code *)(*pppuVar16)[2])();
        }
        bVar14 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
        puVar13 = local_190[0];
      }
      local_190[0] = puVar13;
      iVar18 = iVar18 + 1;
      pbVar17 = (byte *)(lVar15 + 0x40);
      if ((bVar14 & 1) != 0) {
        pbVar17 = param_2 + 0x3c;
      }
    } while (iVar18 < *(int *)pbVar17);
  }
  if ((local_48 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815c554 FUN_14815c554 body=627 status=ok
// SIG undefined FUN_14815c554(void)

/* WARNING: Removing unreachable block (ram,0x00014815c72e) */
/* WARNING: Removing unreachable block (ram,0x00014815c741) */
/* WARNING: Removing unreachable block (ram,0x00014815c745) */

void FUN_14815c554(undefined8 param_1,byte *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  byte bVar10;
  longlong lVar11;
  undefined ***pppuVar12;
  byte *pbVar13;
  int iVar14;
  undefined1 auStack_1a8 [32];
  int *local_188;
  undefined8 uStack_180;
  int local_178;
  int *local_168;
  undefined8 uStack_160;
  int local_158;
  undefined1 local_148 [8];
  longlong local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined **local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  int local_f8 [4];
  undefined1 *local_e8;
  undefined8 uStack_e0;
  undefined ***local_d8;
  undefined8 uStack_d0;
  undefined **local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  FUN_14815aaa4(local_148);
  local_158 = 0;
  local_168 = (int *)0x0;
  uStack_160 = 0;
  FUN_144a98d08(&local_168,param_2);
  local_178 = 0;
  local_188 = (int *)0x0;
  uStack_180 = 0;
  FUN_144a76d88(&local_188,param_2);
  bVar10 = *param_2;
  lVar11 = *(longlong *)(param_2 + 0x80);
  pbVar13 = (byte *)(lVar11 + 0x40);
  if (bVar10 != 0) {
    pbVar13 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar13) {
    iVar14 = 0;
    do {
      uVar8 = uStack_b0;
      uVar7 = local_b8;
      uVar6 = uStack_c0;
      ppuVar5 = local_c8;
      uVar4 = uStack_d0;
      uVar3 = uStack_e0;
      piVar1 = local_168 + local_158;
      iVar2 = *local_168;
      piVar9 = local_188 + local_178;
      local_168 = piVar1;
      if (0 < iVar2) {
        uStack_110 = CONCAT31(uStack_110._1_3_,*local_188 != 0);
        local_f8[0] = iVar2;
        local_78 = local_b8;
        uStack_70 = uStack_b0;
        local_88 = local_c8;
        uStack_80 = uStack_c0;
        local_98 = 0;
        uStack_90 = uStack_d0;
        local_a8 = 0;
        uStack_a0 = uStack_e0;
        local_b8 = CONCAT44(uStack_104,local_108);
        uStack_b0 = CONCAT44(uStack_fc,uStack_100);
        local_c8 = &PTR_LAB_14adcc0d0;
        uStack_c0 = CONCAT44(uStack_10c,uStack_110);
        uStack_d0 = CONCAT44(uStack_11c,uStack_120);
        local_d8 = (undefined ***)0x0;
        local_e8 = &LAB_143a3c01c;
        uStack_e0 = CONCAT44(uStack_12c,uStack_130);
        uStack_a0._0_4_ = (undefined4)uVar3;
        uStack_130 = (undefined4)uStack_a0;
        uStack_a0._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
        uStack_12c = uStack_a0._4_4_;
        uStack_90._0_4_ = (undefined4)uVar4;
        uStack_120 = (undefined4)uStack_90;
        uStack_90._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_11c = uStack_90._4_4_;
        uStack_80._0_4_ = (undefined4)uVar6;
        uStack_110 = (undefined4)uStack_80;
        uStack_80._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
        uStack_10c = uStack_80._4_4_;
        local_78._0_4_ = (undefined4)uVar7;
        local_108 = (undefined4)local_78;
        local_78._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_104 = local_78._4_4_;
        uStack_70._0_4_ = (undefined4)uVar8;
        uStack_100 = (undefined4)uStack_70;
        uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_fc = uStack_70._4_4_;
        local_118 = ppuVar5;
        uStack_70 = uVar8;
        local_78 = uVar7;
        uStack_80 = uVar6;
        local_88 = ppuVar5;
        uStack_90 = uVar4;
        local_98 = 0;
        uStack_a0 = uVar3;
        local_a8 = 0;
        local_c8 = &PTR_LAB_14adcc0d0;
        local_d8 = (undefined ***)0x0;
        local_e8 = &LAB_143a3c01c;
        local_128 = 0;
        local_138 = 0;
        local_188 = local_188 + local_178;
        FUN_14815ab38(local_140 + 0x20,local_f8);
        if (local_e8 != (undefined1 *)0x0) {
          pppuVar12 = local_d8;
          if (local_d8 == (undefined ***)0x0) {
            pppuVar12 = &local_c8;
          }
          (*(code *)(*pppuVar12)[2])();
        }
        bVar10 = *param_2;
        lVar11 = *(longlong *)(param_2 + 0x80);
        piVar9 = local_188;
      }
      local_188 = piVar9;
      iVar14 = iVar14 + 1;
      pbVar13 = (byte *)(lVar11 + 0x40);
      if ((bVar10 & 1) != 0) {
        pbVar13 = param_2 + 0x3c;
      }
    } while (iVar14 < *(int *)pbVar13);
  }
  if ((local_60 ^ (ulonglong)auStack_1a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815c7c8 FUN_14815c7c8 body=1107 status=ok
// SIG undefined FUN_14815c7c8(void)

void FUN_14815c7c8(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined8 *puVar22;
  int iVar23;
  undefined4 uVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  char cVar27;
  int iVar28;
  int *piVar29;
  undefined8 *puVar30;
  int *piVar31;
  byte bVar32;
  int iVar33;
  undefined1 auStack_248 [32];
  int *local_228;
  int local_220;
  undefined4 *local_218;
  undefined8 uStack_210;
  int local_208;
  undefined4 *local_1f8;
  undefined8 uStack_1f0;
  int local_1e8;
  undefined4 *local_1d8;
  undefined8 uStack_1d0;
  int local_1c8;
  undefined4 *local_1b8;
  undefined8 uStack_1b0;
  int local_1a8;
  float *local_198;
  undefined8 uStack_190;
  int local_188;
  float *local_178;
  undefined8 uStack_170;
  int local_168;
  float *local_158;
  undefined8 uStack_150;
  int local_148;
  float *local_140 [2];
  int local_130;
  float *local_128;
  int local_118;
  float *local_110;
  int local_100;
  int *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined1 local_e0 [8];
  undefined8 *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_248;
  FUN_14815aaa4(local_e0);
  local_e8 = 0;
  local_f8 = (int *)0x0;
  uStack_f0 = 0;
  FUN_144a76d88(&local_f8,param_2);
  FUN_1405f76c0(local_140,param_2);
  local_148 = 0;
  local_158 = (float *)0x0;
  uStack_150 = 0;
  FUN_144a98dce(&local_158,param_2);
  local_168 = 0;
  local_178 = (float *)0x0;
  uStack_170 = 0;
  FUN_144a98dce(&local_178,param_2);
  local_188 = 0;
  local_198 = (float *)0x0;
  uStack_190 = 0;
  FUN_144a98dce(&local_198,param_2);
  local_1a8 = 0;
  local_1b8 = (undefined4 *)0x0;
  uStack_1b0 = 0;
  FUN_144a98dce(&local_1b8,param_2);
  local_1c8 = 0;
  local_1d8 = (undefined4 *)0x0;
  uStack_1d0 = 0;
  FUN_144a98dce(&local_1d8,param_2);
  local_1e8 = 0;
  local_1f8 = (undefined4 *)0x0;
  uStack_1f0 = 0;
  FUN_144a98dce(&local_1f8,param_2);
  local_208 = 0;
  local_218 = (undefined4 *)0x0;
  uStack_210 = 0;
  FUN_144a98d08(&local_218,param_2);
  FUN_140126e42(&local_228,param_2);
  cVar27 = FUN_144729dda(local_d8 + 9);
  bVar32 = 1;
  if (cVar27 != '\0') {
    bVar32 = *(byte *)((longlong)local_d8 + 0xe5) ^ 1;
  }
  piVar29 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar29 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar29) {
    iVar33 = 0;
    do {
      puVar25 = local_d8;
      piVar29 = local_f8 + local_e8;
      iVar23 = *local_f8;
      pfVar1 = local_110 + local_100;
      fVar10 = *local_110;
      pfVar2 = local_128 + local_118;
      fVar11 = *local_128;
      pfVar3 = local_140[0] + local_130;
      fVar12 = *local_140[0];
      dVar19 = (double)local_d8[0x1b];
      dVar20 = (double)local_d8[0x19];
      dVar21 = (double)local_d8[0x1a];
      pfVar4 = local_198 + local_188;
      fVar13 = *local_198;
      pfVar5 = local_178 + local_168;
      fVar14 = *local_178;
      pfVar6 = local_158 + local_148;
      fVar15 = *local_158;
      puVar7 = local_1b8 + local_1a8;
      uVar16 = *local_1b8;
      puVar8 = local_1d8 + local_1c8;
      uVar17 = *local_1d8;
      puVar9 = local_1f8 + local_1e8;
      uVar18 = *local_1f8;
      iVar28 = 0;
      puVar26 = local_218 + local_208;
      local_1f8 = puVar9;
      local_1d8 = puVar8;
      local_1b8 = puVar7;
      local_198 = pfVar4;
      local_178 = pfVar5;
      local_158 = pfVar6;
      local_140[0] = pfVar3;
      local_128 = pfVar2;
      local_110 = pfVar1;
      local_f8 = piVar29;
      if (iVar23 != 0 && bVar32 == 0) {
        uVar24 = *local_218;
        local_218 = local_218 + local_208;
        puVar30 = (undefined8 *)FUN_14001cc68(0x48,0x10);
        *puVar30 = 0;
        puVar30[1] = dVar20 + (double)fVar12;
        puVar30[2] = dVar21 + (double)fVar11;
        puVar30[3] = dVar19 + (double)fVar10;
        puVar30[4] = (double)fVar15;
        puVar30[5] = (double)fVar14;
        puVar30[6] = (double)fVar13;
        *(undefined4 *)(puVar30 + 7) = uVar16;
        *(undefined4 *)((longlong)puVar30 + 0x3c) = uVar17;
        *(undefined4 *)(puVar30 + 8) = uVar18;
        *(undefined4 *)((longlong)puVar30 + 0x44) = uVar24;
        if (puVar30 != (undefined8 *)0x0) {
          LOCK();
          puVar22 = (undefined8 *)*puVar25;
          *puVar25 = puVar30;
          UNLOCK();
          LOCK();
          *puVar22 = puVar30;
          UNLOCK();
        }
        iVar28 = -(uint)(puVar30 != (undefined8 *)0x0);
        puVar26 = local_218;
      }
      local_218 = puVar26;
      piVar29 = local_228 + local_220;
      *local_228 = iVar28;
      iVar33 = iVar33 + 1;
      piVar31 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar31 = (int *)(param_2 + 0x3c);
      }
      local_228 = piVar29;
    } while (iVar33 < *piVar31);
  }
  if ((local_d0 ^ (ulonglong)auStack_248) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815cc1c FUN_14815cc1c body=1878 status=ok
// SIG undefined FUN_14815cc1c(void)

/* WARNING: Removing unreachable block (ram,0x00014815d291) */
/* WARNING: Removing unreachable block (ram,0x00014815d2a4) */
/* WARNING: Removing unreachable block (ram,0x00014815d2a8) */

void FUN_14815cc1c(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  undefined4 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  int *piVar25;
  undefined ***pppuVar26;
  int iVar27;
  int iVar28;
  undefined1 auStack_398 [44];
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined **local_350;
  int *local_348;
  int local_340;
  undefined4 *local_338;
  undefined8 uStack_330;
  int local_328;
  undefined4 *local_318;
  undefined8 uStack_310;
  int local_308;
  undefined4 *local_2f8;
  undefined8 uStack_2f0;
  int local_2e8;
  undefined4 *local_2d8;
  undefined8 uStack_2d0;
  int local_2c8;
  undefined4 *local_2b8;
  undefined8 uStack_2b0;
  int local_2a8;
  float *local_298 [2];
  int local_288;
  float *local_280;
  int local_270;
  float *local_268;
  int local_258;
  undefined4 *local_250 [2];
  int local_240;
  undefined4 *local_238;
  int local_228;
  undefined4 *local_220;
  int local_210;
  int *local_208;
  undefined8 uStack_200;
  int local_1f8;
  int *local_1e8;
  undefined8 uStack_1e0;
  int local_1d8;
  undefined1 local_1c8 [8];
  longlong local_1c0;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined **local_1a0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined ***local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined **local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int local_158 [4];
  code *local_148;
  undefined8 uStack_140;
  undefined ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  code *local_108;
  undefined8 uStack_100;
  undefined ***local_f8;
  undefined8 uStack_f0;
  undefined **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c0;
  
  local_c0 = DAT_14c707940 ^ (ulonglong)auStack_398;
  FUN_14815aaa4(local_1c8);
  local_1d8 = 0;
  local_1e8 = (int *)0x0;
  uStack_1e0 = 0;
  FUN_144a76d88(&local_1e8,param_2);
  local_1f8 = 0;
  local_208 = (int *)0x0;
  uStack_200 = 0;
  FUN_144a98d08(&local_208,param_2);
  FUN_1448a432c(local_250,param_2);
  FUN_1448a432c(local_298,param_2);
  local_2a8 = 0;
  local_2b8 = (undefined4 *)0x0;
  uStack_2b0 = 0;
  FUN_144a98dce(&local_2b8,param_2);
  local_2c8 = 0;
  local_2d8 = (undefined4 *)0x0;
  uStack_2d0 = 0;
  FUN_144a98dce(&local_2d8,param_2);
  local_2e8 = 0;
  local_2f8 = (undefined4 *)0x0;
  uStack_2f0 = 0;
  FUN_144a98dce(&local_2f8,param_2);
  local_308 = 0;
  local_318 = (undefined4 *)0x0;
  uStack_310 = 0;
  FUN_144a98dce(&local_318,param_2);
  local_328 = 0;
  local_338 = (undefined4 *)0x0;
  uStack_330 = 0;
  FUN_144a98dce(&local_338,param_2);
  FUN_144a76cd4(&local_348,param_2);
  piVar25 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar25 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar25) {
    iVar27 = 0;
    do {
      iVar16 = *local_1e8;
      iVar28 = *local_208;
      local_364 = *local_220;
      local_368 = *local_238;
      local_36c = *local_250[0];
      local_250[0] = local_250[0] + local_240;
      local_238 = local_238 + local_228;
      local_220 = local_220 + local_210;
      local_208 = local_208 + local_1f8;
      local_1e8 = local_1e8 + local_1d8;
      FUN_144b38fe4(local_1c0 + 200,&local_360,&local_36c);
      uVar24 = uStack_110;
      uVar23 = local_118;
      uVar22 = uStack_120;
      ppuVar21 = local_128;
      uVar20 = uStack_130;
      uVar19 = uStack_140;
      pfVar1 = local_268 + local_258;
      fVar9 = *local_268;
      pfVar2 = local_280 + local_270;
      pfVar3 = local_298[0] + local_288;
      fVar10 = *local_280;
      fVar11 = *local_298[0];
      puVar4 = local_2b8 + local_2a8;
      uVar12 = *local_2b8;
      puVar5 = local_2d8 + local_2c8;
      uVar13 = *local_2d8;
      puVar6 = local_2f8 + local_2e8;
      uVar14 = *local_2f8;
      puVar7 = local_318 + local_308;
      uVar15 = *local_318;
      puVar8 = local_338 + local_328;
      uVar17 = *local_338;
      local_158[0] = 0;
      local_148 = (code *)0x0;
      local_138 = (undefined ***)0x0;
      local_338 = puVar8;
      local_318 = puVar7;
      local_2f8 = puVar6;
      local_2d8 = puVar5;
      local_2b8 = puVar4;
      local_298[0] = pfVar3;
      local_280 = pfVar2;
      local_268 = pfVar1;
      if (iVar16 == 0) {
        if (0 < iVar28) {
          local_158[0] = iVar28;
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          local_e8 = local_128;
          uStack_e0 = uStack_120;
          local_f8 = (undefined ***)0x0;
          uStack_f0 = uStack_130;
          local_108 = (code *)0x0;
          uStack_100 = uStack_140;
          local_118 = CONCAT44(uStack_164,local_168);
          uStack_110 = CONCAT44(uStack_15c,uStack_160);
          local_128 = &PTR_LAB_14adcc110;
          uStack_120 = CONCAT44(uVar17,iVar28);
          uStack_130 = CONCAT44(uStack_17c,uStack_180);
          local_138 = (undefined ***)0x0;
          uStack_140 = CONCAT44(uStack_18c,uStack_190);
          local_148 = FUN_143a3c5ec;
          uStack_100._0_4_ = (undefined4)uVar19;
          uStack_190 = (undefined4)uStack_100;
          uStack_100._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
          uStack_18c = uStack_100._4_4_;
          uStack_f0._0_4_ = (undefined4)uVar20;
          uStack_180 = (undefined4)uStack_f0;
          uStack_f0._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
          uStack_17c = uStack_f0._4_4_;
          uStack_e0._0_4_ = (undefined4)uVar22;
          uStack_170 = (undefined4)uStack_e0;
          uStack_e0._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
          uStack_16c = uStack_e0._4_4_;
          local_d8._0_4_ = (undefined4)uVar23;
          local_168 = (undefined4)local_d8;
          local_d8._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
          uStack_164 = local_d8._4_4_;
          uStack_d0._0_4_ = (undefined4)uVar24;
          uStack_160 = (undefined4)uStack_d0;
          uStack_d0._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
          uStack_15c = uStack_d0._4_4_;
          local_178 = ppuVar21;
          uStack_d0 = uVar24;
          local_d8 = uVar23;
          uStack_e0 = uVar22;
          local_e8 = ppuVar21;
          uStack_f0 = uVar20;
          local_f8 = (undefined ***)0x0;
          uStack_100 = uVar19;
          local_108 = (code *)0x0;
          local_128 = &PTR_LAB_14adcc110;
          local_138 = (undefined ***)0x0;
          local_148 = FUN_143a3c5ec;
          local_188 = (undefined ***)0x0;
          local_198 = (code *)0x0;
          FUN_14815ab38(local_1c0 + 0x20,local_158);
        }
        *local_348 = 0;
        local_348 = local_348 + local_340;
      }
      else {
        local_158[0] = iVar28;
        if (iVar28 < 1) {
          LOCK();
          piVar25 = (int *)(local_1c0 + 0x30);
          iVar28 = *piVar25;
          *piVar25 = *piVar25 + 1;
          UNLOCK();
          iVar28 = iVar28 + 1;
          local_1a0 = local_350;
          local_1b0 = local_360;
          uStack_1ac = uStack_35c;
          uStack_1a8 = uStack_358;
          uStack_1a4 = uStack_354;
          local_198 = (code *)0x0;
          local_188 = (undefined ***)0x0;
          local_158[0] = iVar28;
          pppuVar26 = (undefined ***)FUN_14001cc68(0x50,8);
          uVar24 = uStack_110;
          uVar23 = local_118;
          uVar22 = uStack_120;
          ppuVar21 = local_128;
          uVar20 = uStack_130;
          local_188 = local_138;
          uVar19 = uStack_140;
          pcVar18 = local_148;
          *pppuVar26 = &PTR_FUN_14adcc0f0;
          *(int *)(pppuVar26 + 1) = iVar28;
          pppuVar26[3] = (undefined **)CONCAT44(uStack_1a4,uStack_1a8);
          pppuVar26[4] = local_1a0;
          *(ulonglong *)((longlong)pppuVar26 + 0xc) = CONCAT44(local_1b0,uStack_1b4);
          *(ulonglong *)((longlong)pppuVar26 + 0x14) = CONCAT44(uStack_1a8,uStack_1ac);
          pppuVar26[5] = (undefined **)(double)fVar11;
          pppuVar26[6] = (undefined **)(double)fVar10;
          pppuVar26[7] = (undefined **)(double)fVar9;
          *(undefined4 *)(pppuVar26 + 8) = uVar12;
          *(undefined4 *)((longlong)pppuVar26 + 0x44) = uVar13;
          *(undefined4 *)(pppuVar26 + 9) = uVar14;
          *(undefined4 *)((longlong)pppuVar26 + 0x4c) = uVar15;
          if (pppuVar26 + 1 != (undefined ***)0x0) {
            local_198 = FUN_143a3c076;
          }
          local_d8 = local_118;
          uStack_d0 = uStack_110;
          local_e8 = local_128;
          uStack_e0 = uStack_120;
          local_f8 = local_138;
          uStack_f0 = uStack_130;
          local_108 = local_148;
          uStack_100 = uStack_140;
          local_118 = CONCAT44(uStack_164,local_168);
          uStack_110 = CONCAT44(uStack_15c,uStack_160);
          local_128 = local_178;
          uStack_120 = CONCAT44(uStack_16c,uStack_170);
          local_138 = pppuVar26;
          uStack_130 = CONCAT44(uStack_17c,uStack_180);
          local_148 = local_198;
          uStack_140 = CONCAT44(uStack_18c,uStack_190);
          uStack_100._0_4_ = (undefined4)uVar19;
          uStack_100._4_4_ = (undefined4)((ulonglong)uVar19 >> 0x20);
          uStack_f0._0_4_ = (undefined4)uVar20;
          uStack_f0._4_4_ = (undefined4)((ulonglong)uVar20 >> 0x20);
          uStack_e0._0_4_ = (undefined4)uVar22;
          uStack_e0._4_4_ = (undefined4)((ulonglong)uVar22 >> 0x20);
          local_d8._0_4_ = (undefined4)uVar23;
          local_d8._4_4_ = (undefined4)((ulonglong)uVar23 >> 0x20);
          uStack_d0._0_4_ = (undefined4)uVar24;
          uStack_d0._4_4_ = (undefined4)((ulonglong)uVar24 >> 0x20);
          local_168 = (undefined4)local_d8;
          uStack_164 = local_d8._4_4_;
          uStack_160 = (undefined4)uStack_d0;
          uStack_15c = uStack_d0._4_4_;
          local_178 = ppuVar21;
          uStack_170 = (undefined4)uStack_e0;
          uStack_16c = uStack_e0._4_4_;
          uStack_180 = (undefined4)uStack_f0;
          uStack_17c = uStack_f0._4_4_;
          local_198 = pcVar18;
          uStack_190 = (undefined4)uStack_100;
          uStack_18c = uStack_100._4_4_;
          uStack_100 = uVar19;
          uStack_f0 = uVar20;
          uStack_e0 = uVar22;
          local_d8 = uVar23;
          uStack_d0 = uVar24;
          if (pcVar18 != (code *)0x0) {
            pppuVar26 = local_188;
            if (local_188 == (undefined ***)0x0) {
              pppuVar26 = &local_178;
            }
            (*(code *)(*pppuVar26)[2])();
          }
        }
        FUN_14815ab38(local_1c0 + 0x20,local_158);
        *local_348 = iVar28;
        local_348 = local_348 + local_340;
      }
      if (local_148 != (code *)0x0) {
        pppuVar26 = local_138;
        if (local_138 == (undefined ***)0x0) {
          pppuVar26 = &local_128;
        }
        (*(code *)(*pppuVar26)[2])();
      }
      iVar27 = iVar27 + 1;
      piVar25 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar25 = (int *)(param_2 + 0x3c);
      }
    } while (iVar27 < *piVar25);
  }
  if ((local_c0 ^ (ulonglong)auStack_398) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14815d374 FUN_14815d374 body=238 status=ok
// SIG undefined FUN_14815d374(void)

undefined8 FUN_14815d374(longlong param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_2 == 0) || (*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10))) {
    uVar2 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x38);
    if (DAT_14c950c29 == 1) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + 0x38);
      }
    }
    bVar1 = DAT_14c950c29;
    *(longlong *)(param_2 + 0x38) = lVar3;
    lVar3 = *(longlong *)(param_1 + 0x40);
    if ((bVar1 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + 0x40);
        bVar1 = DAT_14c950c29;
      }
    }
    *(longlong *)(param_2 + 0x40) = lVar3;
    lVar3 = *(longlong *)(param_1 + 0x48);
    if ((bVar1 & 1) != 0) {
      if (lVar3 == 0) {
        lVar3 = 0;
      }
      else {
        FUN_14689c22e();
        lVar3 = *(longlong *)(param_1 + 0x48);
      }
    }
    *(longlong *)(param_2 + 0x48) = lVar3;
    *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(param_1 + 0x60);
    *(undefined4 *)(param_2 + 0x68) = *(undefined4 *)(param_1 + 0x68);
    FUN_1447a122a(param_2 + 0x70,param_1 + 0x70);
    *(undefined1 *)(param_2 + 0x80) = *(undefined1 *)(param_1 + 0x80);
    *(undefined4 *)(param_2 + 0x84) = *(undefined4 *)(param_1 + 0x84);
    FUN_1406fa324(param_2 + 0x50,param_1 + 0x50);
    *(undefined1 *)(param_2 + 0x88) = *(undefined1 *)(param_1 + 0x88);
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14815d466 FUN_14815d466 body=193 status=ok
// SIG undefined FUN_14815d466(void)

undefined8 * FUN_14815d466(undefined8 *param_1)

{
  FUN_14811f144();
  *param_1 = &PTR_FUN_14adc3850;
  param_1[0x25] = 0;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0x3f80000000000000;
  memset(param_1 + 0x29,0,0xbc);
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x41));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x41),4000);
  FUN_14815d528(param_1,2,0x473b8000);
  FUN_14815d5e0(param_1,0x425c0000,0x461c4000,0x200);
  *(undefined4 *)((longlong)param_1 + 0x134) = 0xc2700000;
  return param_1;
}



// FUNCTION 14815d528 FUN_14815d528 body=183 status=ok
// SIG undefined FUN_14815d528(void)

void FUN_14815d528(longlong param_1,int param_2,float param_3)

{
  undefined4 uVar1;
  
  if ((*(float *)(param_1 + 0x13c) != param_3) || (NAN(*(float *)(param_1 + 0x13c)) || NAN(param_3))
     ) {
    FUN_143a2e1dc(param_1,*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300),param_3,
                  *(undefined4 *)(param_1 + 0x130));
  }
  if (*(int *)(param_1 + 0x138) != param_2) {
    FUN_14815d8e4(param_1,param_2,*(undefined4 *)(param_1 + 0x130));
  }
  if (((*(float *)(param_1 + 0x13c) != param_3) ||
      (NAN(*(float *)(param_1 + 0x13c)) || NAN(param_3))) || (*(int *)(param_1 + 0x138) != param_2))
  {
    uVar1 = 0;
    if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
      uVar1 = (**(code **)(**(longlong **)(param_1 + 0x178) + 8))();
    }
    FUN_14815d9ba(param_1,param_2,uVar1);
  }
  *(int *)(param_1 + 0x138) = param_2;
  *(float *)(param_1 + 0x13c) = param_3;
  return;
}



// FUNCTION 14815d5e0 FUN_14815d5e0 body=273 status=ok
// SIG undefined FUN_14815d5e0(void)

void FUN_14815d5e0(longlong param_1,float param_2,float param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  if (param_2 <= 20.0) {
    param_2 = 20.0;
  }
  if (20000.0 <= param_3) {
    param_3 = 20000.0;
  }
  fVar4 = param_2;
  if (param_2 <= param_3) {
    fVar4 = param_3;
  }
  iVar1 = 0x4000;
  if (param_4 < 0x4000) {
    iVar1 = param_4;
  }
  iVar3 = 1;
  if (1 < iVar1) {
    iVar3 = iVar1;
  }
  if (iVar3 == *(int *)(param_1 + 0x130)) {
    if ((param_2 == *(float *)(param_1 + 0x128)) &&
       (!NAN(param_2) && !NAN(*(float *)(param_1 + 0x128)))) {
      if ((fVar4 == *(float *)(param_1 + 300)) && (!NAN(fVar4) && !NAN(*(float *)(param_1 + 300))))
      goto LAB_14815d69f;
    }
  }
  else {
    FUN_14815d8e4(param_1,*(undefined4 *)(param_1 + 0x138),iVar3);
  }
  iVar2 = 0;
  iVar1 = 0;
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x178) + 8))();
  }
  FUN_143a2e1dc(param_1,param_2,fVar4,*(undefined4 *)(param_1 + 0x13c),iVar3);
  if (*(longlong **)(param_1 + 0x178) != (longlong *)0x0) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x178) + 8))();
  }
  if (iVar2 != iVar1) {
    FUN_14815d9ba(param_1,*(undefined4 *)(param_1 + 0x138),iVar2);
  }
LAB_14815d69f:
  *(float *)(param_1 + 0x128) = param_2;
  *(float *)(param_1 + 300) = fVar4;
  LOCK();
  *(int *)(param_1 + 0x130) = iVar3;
  UNLOCK();
  return;
}



// FUNCTION 14815d6f2 FUN_14815d6f2 body=318 status=ok
// SIG undefined FUN_14815d6f2(void)

void FUN_14815d6f2(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14adc3850;
  FUN_14011fb0c(param_1 + 0x3e);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x41));
  FUN_140038ae8(param_1 + 0x3e);
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
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
  puVar1 = (undefined8 *)param_1[0x2f];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  puVar1 = (undefined8 *)param_1[0x2e];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_147034bb0(param_1[0x2c],*(undefined4 *)(param_1 + 0x2d));
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  lVar2 = param_1[0x2b];
  if (lVar2 != 0) {
    if (*(longlong *)(lVar2 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar2);
  }
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_1459d2cc0(param_1);
  return;
}



// FUNCTION 14815d830 FUN_14815d830 body=180 status=ok
// SIG undefined FUN_14815d830(void)

float FUN_14815d830(longlong param_1,float param_2,int param_3)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 < *(int *)(param_1 + 0x168)) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x160) + 8 + (longlong)param_3 * 0x10);
    if (0 < iVar2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      uVar4 = iVar2 - 1;
      param_2 = (float)iVar2 * param_2;
      uVar5 = (int)ROUND(param_2 + param_2 + -0.5) >> 1;
      if ((int)uVar4 <= (int)uVar5) {
        uVar5 = uVar4;
      }
      if ((int)uVar5 < 1) {
        uVar5 = 0;
      }
      uVar6 = -((int)ROUND(-0.5 - (param_2 + param_2)) >> 1);
      if ((int)uVar4 <= (int)uVar6) {
        uVar6 = uVar4;
      }
      if ((int)uVar6 < 1) {
        uVar6 = 0;
      }
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x160) + (longlong)param_3 * 0x10);
      fVar1 = *(float *)(lVar3 + (ulonglong)uVar5 * 4);
      return (*(float *)(lVar3 + (ulonglong)uVar6 * 4) - fVar1) * (param_2 - (float)(int)uVar5) +
             fVar1;
    }
  }
  return 0.0;
}



// FUNCTION 14815d8e4 FUN_14815d8e4 body=214 status=ok
// SIG undefined FUN_14815d8e4(void)

void FUN_14815d8e4(longlong param_1,uint param_2,uint param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)(param_1 + 0x160);
  iVar6 = param_2 - *(int *)(param_1 + 0x168);
  if (iVar6 != 0 && *(int *)(param_1 + 0x168) <= (int)param_2) {
    do {
      iVar4 = *(int *)(param_1 + 0x168);
      *(uint *)(param_1 + 0x168) = iVar4 + 1U;
      if (*(uint *)(param_1 + 0x16c) < iVar4 + 1U) {
        FUN_1470343d0(plVar1,iVar4);
      }
      puVar2 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x10);
      *puVar2 = 0;
      puVar2[1] = 0;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (0 < (int)param_2) {
    lVar7 = 0;
    do {
      lVar5 = *plVar1;
      lVar3 = lVar5 + lVar7;
      *(undefined4 *)(lVar5 + 8 + lVar7) = 0;
      if (*(int *)(lVar5 + 0xc + lVar7) < 0) {
        FUN_1470345fa(lVar3,0);
      }
      if ((0 < (int)param_3) &&
         (iVar6 = *(int *)(lVar3 + 8), *(uint *)(lVar3 + 8) = iVar6 + param_3,
         (uint)(*(int *)(lVar3 + 0xc) - iVar6) < param_3)) {
        FUN_145ca0cd4(lVar3);
      }
      lVar7 = lVar7 + 0x10;
    } while ((ulonglong)param_2 << 4 != lVar7);
  }
  return;
}



// FUNCTION 14815d9ba FUN_14815d9ba body=274 status=ok
// SIG undefined FUN_14815d9ba(void)

void FUN_14815d9ba(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = 1;
  if (1 < (int)param_3) {
    uVar5 = param_3;
  }
  if (0x3ff < (int)uVar5) {
    uVar5 = 0x400;
  }
  iVar2 = *(int *)(param_1 + 0x1ec);
  iVar4 = 0;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    FUN_1470345fa(param_1 + 0x1e0,0);
    iVar4 = *(int *)(param_1 + 0x1e8);
    iVar2 = *(int *)(param_1 + 0x1ec);
  }
  *(uint *)(param_1 + 0x1e8) = iVar4 + uVar5;
  if ((uint)(iVar2 - iVar4) < uVar5) {
    FUN_145ca0cd4(param_1 + 0x1e0);
  }
  FUN_14702dcbe(*(undefined8 *)(param_1 + 0x1e0),uVar5,1,1);
  iVar2 = 1;
  if (1 < param_2) {
    iVar2 = param_2;
  }
  uVar6 = iVar2 * uVar5 >> 1;
  puVar3 = (uint *)FUN_14001cc68(0x20,0x10);
  *puVar3 = iVar2 * uVar5;
  puVar3[1] = uVar6 + (uVar6 == 0);
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  lVar1 = *(longlong *)(param_1 + 0x158);
  *(uint **)(param_1 + 0x158) = puVar3;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar1);
    return;
  }
  return;
}


