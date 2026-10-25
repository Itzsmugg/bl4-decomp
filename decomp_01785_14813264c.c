// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14813264c FUN_14813264c body=123 status=ok
// SIG undefined FUN_14813264c(void)

void FUN_14813264c(longlong *param_1,int param_2)

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
  FUN_14812f412(*param_1 + lVar2 + 8);
  FUN_1481322fa(param_1,param_2);
  return;
}



// FUNCTION 1481326e6 FUN_1481326e6 body=12 status=ok
// SIG undefined FUN_1481326e6(void)

void FUN_1481326e6(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001481326ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1481326f2 FUN_1481326f2 body=29 status=ok
// SIG undefined FUN_1481326f2(void)

undefined8 FUN_1481326f2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148132710 FUN_148132710 body=117 status=ok
// SIG undefined FUN_148132710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148132710(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481325e6(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481325e6(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813277b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 14813278c FUN_14813278c body=251 status=ok
// SIG undefined FUN_14813278c(void)

void FUN_14813278c(longlong param_1,char *param_2,longlong *param_3)

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
            FUN_143a17aea(lVar3 + 8,&DAT_14ca85100);
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



// FUNCTION 148132896 FUN_148132896 body=221 status=ok
// SIG undefined FUN_148132896(void)

void FUN_148132896(longlong param_1,longlong param_2)

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



// FUNCTION 148132974 FUN_148132974 body=54 status=ok
// SIG undefined FUN_148132974(void)

void FUN_148132974(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_148133448(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001481329a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 148132a20 FUN_148132a20 body=109 status=ok
// SIG undefined FUN_148132a20(void)

undefined8 *
FUN_148132a20(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    lVar2 = (longlong)param_4[1] + *(longlong *)(param_3 + 0x48);
    lVar1 = (longlong)param_5 * 0x10;
    FUN_1407c8b48(param_2,L"%f, %f, %f, %f",(double)*(float *)(lVar1 + lVar2),
                  (double)*(float *)(lVar1 + 4 + lVar2),(double)*(float *)(lVar1 + 8 + lVar2),
                  (double)*(float *)(lVar1 + 0xc + lVar2));
  }
  return param_2;
}



// FUNCTION 148132a8e FUN_148132a8e body=35 status=ok
// SIG undefined FUN_148132a8e(void)

undefined8 FUN_148132a8e(longlong param_1,longlong param_2)

{
  FUN_146bff298(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 148132ada FUN_148132ada body=144 status=ok
// SIG undefined FUN_148132ada(void)

void FUN_148132ada(longlong param_1,undefined8 *param_2,char *param_3)

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
    FUN_146bff298(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148132b45. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 148132c12 FUN_148132c12 body=159 status=ok
// SIG undefined FUN_148132c12(void)

void FUN_148132c12(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a1795c(param_1);
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



// FUNCTION 148132cb2 FUN_148132cb2 body=191 status=ok
// SIG undefined FUN_148132cb2(void)

undefined8 *
FUN_148132cb2(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
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
  FUN_148132d72(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adbdf80;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 148132d72 FUN_148132d72 body=144 status=ok
// SIG undefined FUN_148132d72(void)

undefined8 *
FUN_148132d72(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac00;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adbdfa0;
  FUN_148132e6e(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148132e04 FUN_148132e04 body=105 status=ok
// SIG undefined FUN_148132e04(void)

undefined8 * FUN_148132e04(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbdfa0;
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



// FUNCTION 148132e6e FUN_148132e6e body=258 status=ok
// SIG undefined FUN_148132e6e(void)

void FUN_148132e6e(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 148132f70 FUN_148132f70 body=105 status=ok
// SIG undefined FUN_148132f70(void)

undefined8 * FUN_148132f70(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbdfa0;
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



// FUNCTION 148132fda FUN_148132fda body=214 status=ok
// SIG undefined FUN_148132fda(void)

void FUN_148132fda(longlong param_1,undefined8 param_2)

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
  local_48 = &PTR_LAB_14adbdfc0;
  local_68 = FUN_1481330b2;
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



// FUNCTION 1481330b2 FUN_1481330b2 body=62 status=ok
// SIG undefined FUN_1481330b2(void)

void FUN_1481330b2(undefined8 param_1,undefined4 *param_2)

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
  FUN_148133142();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148133124 FUN_148133124 body=29 status=ok
// SIG undefined FUN_148133124(void)

undefined8 FUN_148133124(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148133142 FUN_148133142 body=297 status=ok
// SIG undefined FUN_148133142(void)

void FUN_148133142(undefined8 *param_1,longlong *param_2)

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
    uVar6 = 0;
    iVar4 = 0;
    pvVar7 = (void *)0x0;
  }
  else {
    uStack_90._4_4_ = 0;
    FUN_1449e2712(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 4);
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
  *local_78 = &PTR_LAB_14adbdfe0;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_14813326c;
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



// FUNCTION 14813326c FUN_14813326c body=52 status=ok
// SIG undefined FUN_14813326c(void)

void FUN_14813326c(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_148133302(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 1481332aa FUN_1481332aa body=29 status=ok
// SIG undefined FUN_1481332aa(void)

void FUN_1481332aa(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481332c8 FUN_1481332c8 body=57 status=ok
// SIG undefined FUN_1481332c8(void)

undefined8 * FUN_1481332c8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbdfe0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148133302 FUN_148133302 body=216 status=ok
// SIG undefined FUN_148133302(void)

void FUN_148133302(longlong param_1,longlong param_2,undefined8 param_3)

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
            FUN_146bff298(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_146bff298(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481333d3. Too many branches */
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



// FUNCTION 1481333da FUN_1481333da body=109 status=ok
// SIG undefined FUN_1481333da(void)

undefined8 * FUN_1481333da(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_146bff298(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_14499148c(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 148133448 FUN_148133448 body=1301 status=ok
// SIG undefined FUN_148133448(void)

void FUN_148133448(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
    ppuVar2 = &PTR_FUN_14adbe000;
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
    ppuVar2 = &PTR_FUN_14adbe070;
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
    ppuVar2 = &PTR_FUN_14adbe0e0;
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
    ppuVar2 = &PTR_FUN_14adbe150;
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
    ppuVar2 = &PTR_FUN_14adbe1c0;
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
    ppuVar2 = &PTR_FUN_14adbe230;
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
    ppuVar2 = &PTR_FUN_14adbe2a0;
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
    ppuVar2 = &PTR_FUN_14adbe310;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_1481334f7;
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
    ppuVar2 = &PTR_FUN_14adbe380;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_1481334f7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813395e FUN_14813395e body=29 status=ok
// SIG undefined FUN_14813395e(void)

undefined8 FUN_14813395e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148133990 FUN_148133990 body=93 status=ok
// SIG undefined FUN_148133990(void)

void FUN_148133990(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481339ee FUN_1481339ee body=93 status=ok
// SIG undefined FUN_1481339ee(void)

void FUN_1481339ee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe000;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148133a4c FUN_148133a4c body=126 status=ok
// SIG undefined FUN_148133a4c(void)

void FUN_148133a4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe000;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148133abb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148133ad4 FUN_148133ad4 body=20 status=ok
// SIG undefined FUN_148133ad4(void)

undefined1 FUN_148133ad4(longlong param_1)

{
  FUN_148133ae8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148133ae8 FUN_148133ae8 body=240 status=ok
// SIG undefined FUN_148133ae8(void)

void FUN_148133ae8(longlong param_1,char *param_2)

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
  FUN_148133bda(local_38);
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
      goto LAB_148133b52;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148133b52:
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



// FUNCTION 148133bda FUN_148133bda body=148 status=ok
// SIG undefined FUN_148133bda(void)

void FUN_148133bda(int *param_1,char *param_2)

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



// FUNCTION 148133c6e FUN_148133c6e body=29 status=ok
// SIG undefined FUN_148133c6e(void)

undefined8 FUN_148133c6e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148133ca0 FUN_148133ca0 body=93 status=ok
// SIG undefined FUN_148133ca0(void)

void FUN_148133ca0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148133cfe FUN_148133cfe body=93 status=ok
// SIG undefined FUN_148133cfe(void)

void FUN_148133cfe(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe070;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148133d5c FUN_148133d5c body=126 status=ok
// SIG undefined FUN_148133d5c(void)

void FUN_148133d5c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe070;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148133dcb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148133de4 FUN_148133de4 body=20 status=ok
// SIG undefined FUN_148133de4(void)

undefined1 FUN_148133de4(longlong param_1)

{
  FUN_148133df8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148133df8 FUN_148133df8 body=312 status=ok
// SIG undefined FUN_148133df8(void)

void FUN_148133df8(longlong param_1,char *param_2)

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
  FUN_148133bda(local_38);
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
      goto LAB_148133e7c;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_148133e7c:
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



// FUNCTION 148133f32 FUN_148133f32 body=29 status=ok
// SIG undefined FUN_148133f32(void)

undefined8 FUN_148133f32(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148133f64 FUN_148133f64 body=93 status=ok
// SIG undefined FUN_148133f64(void)

void FUN_148133f64(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148133fc2 FUN_148133fc2 body=93 status=ok
// SIG undefined FUN_148133fc2(void)

void FUN_148133fc2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe0e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134020 FUN_148134020 body=126 status=ok
// SIG undefined FUN_148134020(void)

void FUN_148134020(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe0e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813408f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481340a8 FUN_1481340a8 body=20 status=ok
// SIG undefined FUN_1481340a8(void)

undefined1 FUN_1481340a8(longlong param_1)

{
  FUN_1481340bc(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481340bc FUN_1481340bc body=242 status=ok
// SIG undefined FUN_1481340bc(void)

void FUN_1481340bc(longlong param_1,char *param_2)

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
  FUN_148133bda(local_38);
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
      goto LAB_148134126;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_148134126:
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



// FUNCTION 1481341b0 FUN_1481341b0 body=29 status=ok
// SIG undefined FUN_1481341b0(void)

undefined8 FUN_1481341b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481341e2 FUN_1481341e2 body=93 status=ok
// SIG undefined FUN_1481341e2(void)

void FUN_1481341e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134240 FUN_148134240 body=93 status=ok
// SIG undefined FUN_148134240(void)

void FUN_148134240(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe150;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813429e FUN_14813429e body=126 status=ok
// SIG undefined FUN_14813429e(void)

void FUN_14813429e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe150;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813430d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148134326 FUN_148134326 body=20 status=ok
// SIG undefined FUN_148134326(void)

undefined1 FUN_148134326(longlong param_1)

{
  FUN_14813433a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813433a FUN_14813433a body=610 status=ok
// SIG undefined FUN_14813433a(void)

void FUN_14813433a(longlong param_1,char *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  uint uVar11;
  int *piVar12;
  longlong *plVar13;
  PSRWLOCK SRWLock;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_148133bda(local_38);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_68,param_2);
  lVar10 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      plVar13 = (longlong *)(local_30 + 0x10);
      goto LAB_1481343ee;
    }
  }
  plVar13 = (longlong *)(lVar10 + 0x50);
LAB_1481343ee:
  piVar1 = (int *)(param_2 + 0x3c);
  piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar12 = piVar1;
  }
  if ((int)plVar13[1] < 1) {
    if (0 < *piVar12) {
      iVar14 = 0;
      do {
        puVar3 = local_98 + local_90;
        *local_98 = 0;
        puVar4 = local_88 + local_80;
        *local_88 = 0;
        puVar5 = local_78 + local_70;
        *local_78 = 0;
        puVar6 = local_68 + local_60;
        *local_68 = 0;
        iVar14 = iVar14 + 1;
        piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar12 = piVar1;
        }
        local_98 = puVar3;
        local_88 = puVar4;
        local_78 = puVar5;
        local_68 = puVar6;
      } while (iVar14 < *piVar12);
    }
  }
  else if (0 < *piVar12) {
    uVar11 = (int)plVar13[1] - 1;
    iVar14 = 0;
    do {
      puVar2 = local_58 + local_48;
      uVar15 = *local_58;
      if ((int)uVar11 <= (int)*local_58) {
        uVar15 = uVar11;
      }
      uVar16 = (ulonglong)uVar15;
      if ((int)uVar15 < 1) {
        uVar16 = 0;
      }
      lVar10 = *plVar13;
      lVar17 = uVar16 * 0x10;
      uVar7 = *(undefined4 *)(lVar10 + 4 + lVar17);
      uVar8 = *(undefined4 *)(lVar10 + 8 + lVar17);
      uVar9 = *(undefined4 *)(lVar10 + 0xc + lVar17);
      puVar3 = local_98 + local_90;
      *local_98 = *(undefined4 *)(lVar10 + lVar17);
      puVar4 = local_88 + local_80;
      *local_88 = uVar7;
      puVar5 = local_78 + local_70;
      *local_78 = uVar8;
      puVar6 = local_68 + local_60;
      *local_68 = uVar9;
      iVar14 = iVar14 + 1;
      piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar12 = piVar1;
      }
      local_98 = puVar3;
      local_88 = puVar4;
      local_78 = puVar5;
      local_68 = puVar6;
      local_58 = puVar2;
    } while (iVar14 < *piVar12);
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14813459e FUN_14813459e body=29 status=ok
// SIG undefined FUN_14813459e(void)

undefined8 FUN_14813459e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481345d0 FUN_1481345d0 body=93 status=ok
// SIG undefined FUN_1481345d0(void)

void FUN_1481345d0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813462e FUN_14813462e body=93 status=ok
// SIG undefined FUN_14813462e(void)

void FUN_14813462e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe1c0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813468c FUN_14813468c body=126 status=ok
// SIG undefined FUN_14813468c(void)

void FUN_14813468c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe1c0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481346fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148134714 FUN_148134714 body=20 status=ok
// SIG undefined FUN_148134714(void)

undefined1 FUN_148134714(longlong param_1)

{
  FUN_148134728(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148134728 FUN_148134728 body=187 status=ok
// SIG undefined FUN_148134728(void)

void FUN_148134728(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_148133bda(local_38);
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
      FUN_146bff298(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_14499148c(pcVar2,0);
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



// FUNCTION 1481347e4 FUN_1481347e4 body=29 status=ok
// SIG undefined FUN_1481347e4(void)

undefined8 FUN_1481347e4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148134816 FUN_148134816 body=93 status=ok
// SIG undefined FUN_148134816(void)

void FUN_148134816(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134874 FUN_148134874 body=93 status=ok
// SIG undefined FUN_148134874(void)

void FUN_148134874(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe230;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481348d2 FUN_1481348d2 body=126 status=ok
// SIG undefined FUN_1481348d2(void)

void FUN_1481348d2(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe230;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148134941. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813495a FUN_14813495a body=20 status=ok
// SIG undefined FUN_14813495a(void)

undefined1 FUN_14813495a(longlong param_1)

{
  FUN_14813496e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813496e FUN_14813496e body=282 status=ok
// SIG undefined FUN_14813496e(void)

void FUN_14813496e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong *plVar6;
  PSRWLOCK SRWLock;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148133bda(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar4 = local_38;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar6 = (longlong *)(lVar5 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_146bff298(pcVar4 + 0x10,lVar5 + 0x50);
    }
    plVar6 = (longlong *)(pcVar4 + 0x10);
  }
  iVar1 = (int)plVar6[1];
  iVar2 = *local_58;
  local_58 = local_58 + local_48;
  FUN_140330574(plVar6,iVar2,1);
  if (iVar1 < iVar2) {
    lVar5 = (longlong)iVar2 - (longlong)iVar1;
    lVar7 = (longlong)iVar1 << 4;
    do {
      lVar3 = *plVar6;
      *(undefined8 *)(lVar3 + lVar7) = 0;
      ((undefined8 *)(lVar3 + lVar7))[1] = 0;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
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



// FUNCTION 148134a8a FUN_148134a8a body=29 status=ok
// SIG undefined FUN_148134a8a(void)

undefined8 FUN_148134a8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148134abc FUN_148134abc body=93 status=ok
// SIG undefined FUN_148134abc(void)

void FUN_148134abc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134b1a FUN_148134b1a body=93 status=ok
// SIG undefined FUN_148134b1a(void)

void FUN_148134b1a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe2a0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134b78 FUN_148134b78 body=126 status=ok
// SIG undefined FUN_148134b78(void)

void FUN_148134b78(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe2a0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148134be7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148134c00 FUN_148134c00 body=20 status=ok
// SIG undefined FUN_148134c00(void)

undefined1 FUN_148134c00(longlong param_1)

{
  FUN_148134c14(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148134c14 FUN_148134c14 body=635 status=ok
// SIG undefined FUN_148134c14(void)

void FUN_148134c14(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 *local_e0;
  undefined8 uStack_d8;
  int local_d0;
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
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148133bda(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_e8 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  FUN_144a98dce(&local_f8,param_2);
  local_d0 = 0;
  local_e0 = (undefined4 *)0x0;
  uStack_d8 = 0;
  FUN_144a98dce(&local_e0,param_2);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98dce(&local_c8,param_2);
  local_a0 = 0;
  local_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  FUN_144a98dce(&local_b0,param_2);
  pcVar11 = local_58;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar17 = (longlong *)(lVar15 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
      FUN_146bff298(pcVar11 + 0x10,lVar15 + 0x50);
    }
    plVar17 = (longlong *)(pcVar11 + 0x10);
  }
  bVar12 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar15 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar13 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar10 = *local_98;
      puVar2 = local_b0 + local_a0;
      uVar7 = *local_b0;
      puVar3 = local_c8 + local_b8;
      uVar8 = *local_c8;
      puVar4 = local_e0 + local_d0;
      uVar9 = *local_e0;
      puVar5 = local_f8 + local_e8;
      piVar6 = local_78 + local_68;
      if ((-1 < (int)uVar10 && *local_78 == 0) && ((int)uVar10 < (int)plVar17[1])) {
        lVar15 = *plVar17;
        lVar16 = (ulonglong)uVar10 * 0x10;
        *(undefined4 *)(lVar15 + lVar16) = *local_f8;
        *(undefined4 *)(lVar15 + 4 + lVar16) = uVar9;
        *(undefined4 *)(lVar15 + 8 + lVar16) = uVar8;
        *(undefined4 *)(lVar15 + 0xc + lVar16) = uVar7;
        bVar12 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar14 = (byte *)(lVar15 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
      local_f8 = puVar5;
      local_e0 = puVar4;
      local_c8 = puVar3;
      local_b0 = puVar2;
      local_98 = puVar1;
      local_78 = piVar6;
    } while (iVar13 < *(int *)pbVar14);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148134e90 FUN_148134e90 body=29 status=ok
// SIG undefined FUN_148134e90(void)

undefined8 FUN_148134e90(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148134ec2 FUN_148134ec2 body=93 status=ok
// SIG undefined FUN_148134ec2(void)

void FUN_148134ec2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134f20 FUN_148134f20 body=93 status=ok
// SIG undefined FUN_148134f20(void)

void FUN_148134f20(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe310;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148134f7e FUN_148134f7e body=126 status=ok
// SIG undefined FUN_148134f7e(void)

void FUN_148134f7e(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe310;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148134fed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148135006 FUN_148135006 body=20 status=ok
// SIG undefined FUN_148135006(void)

undefined1 FUN_148135006(longlong param_1)

{
  FUN_14813501a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813501a FUN_14813501a body=666 status=ok
// SIG undefined FUN_14813501a(void)

void FUN_14813501a(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar12;
  longlong lVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 *local_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined1 local_a0 [8];
  char *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_148133bda(local_a0);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  local_108 = 0;
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  FUN_144a98dce(&local_118,param_2);
  local_f0 = 0;
  local_100 = (undefined4 *)0x0;
  uStack_f8 = 0;
  FUN_144a98dce(&local_100,param_2);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_2);
  local_c0 = 0;
  local_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_144a98dce(&local_d0,param_2);
  pcVar10 = local_98;
  lVar13 = *(longlong *)(param_1 + 0x10);
  iVar15 = 0x7fffffff;
  if (0 < *(int *)(lVar13 + 0x4c)) {
    iVar15 = *(int *)(lVar13 + 0x4c);
  }
  if (local_98 == (char *)0x0) {
    plVar17 = (longlong *)(lVar13 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_98 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar10 == '\0') {
      *pcVar10 = '\x01';
      FUN_146bff298(pcVar10 + 0x10,lVar13 + 0x50);
    }
    plVar17 = (longlong *)(pcVar10 + 0x10);
  }
  bVar12 = *param_2;
  lVar13 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar13 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar16 = 0;
    do {
      piVar1 = local_b8 + local_a8;
      iVar9 = *local_b8;
      puVar2 = local_d0 + local_c0;
      uVar5 = *local_d0;
      puVar3 = local_e8 + local_d8;
      uVar6 = *local_e8;
      puVar4 = local_100 + local_f0;
      uVar7 = *local_100;
      puVar11 = local_118 + local_108;
      local_100 = puVar4;
      local_e8 = puVar3;
      local_d0 = puVar2;
      local_b8 = piVar1;
      if (iVar9 == 0) {
        iVar9 = (int)plVar17[1];
        if (iVar9 < iVar15) {
          uVar8 = *local_118;
          *(uint *)(plVar17 + 1) = iVar9 + 1U;
          local_118 = puVar11;
          if (*(uint *)((longlong)plVar17 + 0xc) < iVar9 + 1U) {
            FUN_1449e2712(plVar17,iVar9);
          }
          lVar13 = *plVar17;
          lVar18 = (longlong)iVar9 * 0x10;
          *(undefined4 *)(lVar13 + lVar18) = uVar8;
          *(undefined4 *)(lVar13 + 4 + lVar18) = uVar7;
          *(undefined4 *)(lVar13 + 8 + lVar18) = uVar6;
          *(undefined4 *)(lVar13 + 0xc + lVar18) = uVar5;
          bVar12 = *param_2;
          lVar13 = *(longlong *)(param_2 + 0x80);
          puVar11 = local_118;
        }
      }
      local_118 = puVar11;
      iVar16 = iVar16 + 1;
      pbVar14 = (byte *)(lVar13 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
    } while (iVar16 < *(int *)pbVar14);
  }
  local_98[1] = local_98[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1481352b6 FUN_1481352b6 body=29 status=ok
// SIG undefined FUN_1481352b6(void)

undefined8 FUN_1481352b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481352e8 FUN_1481352e8 body=93 status=ok
// SIG undefined FUN_1481352e8(void)

void FUN_1481352e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148135346 FUN_148135346 body=93 status=ok
// SIG undefined FUN_148135346(void)

void FUN_148135346(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe380;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481353a4 FUN_1481353a4 body=126 status=ok
// SIG undefined FUN_1481353a4(void)

void FUN_1481353a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe380;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148135413. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813542c FUN_14813542c body=20 status=ok
// SIG undefined FUN_14813542c(void)

undefined1 FUN_14813542c(longlong param_1)

{
  FUN_148135440(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148135440 FUN_148135440 body=760 status=ok
// SIG undefined FUN_148135440(void)

void FUN_148135440(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  PSRWLOCK SRWLock;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_90 [8];
  char *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_148133bda(local_90);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_144a76d88(&local_a8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_140126e42(&local_f8,param_2);
  pcVar7 = local_88;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_88 == (char *)0x0) {
    plVar11 = (longlong *)(lVar6 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_88 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
      FUN_146bff298(pcVar7 + 0x10,lVar6 + 0x50);
    }
    plVar11 = (longlong *)(pcVar7 + 0x10);
  }
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar10 = 0;
    do {
      if (*local_a8 == 0) {
        iVar5 = (int)plVar11[1];
        if ((longlong)iVar5 == 0) goto LAB_14813556e;
        lVar6 = *plVar11;
        lVar9 = (longlong)iVar5 * 0x10;
        uVar1 = *(undefined4 *)(lVar6 + -0x10 + lVar9);
        uVar2 = *(undefined4 *)(lVar6 + -0xc + lVar9);
        uVar3 = *(undefined4 *)(lVar6 + -8 + lVar9);
        uVar4 = *(undefined4 *)(lVar6 + -4 + lVar9);
        *(int *)(plVar11 + 1) = iVar5 + -1;
        local_a8 = local_a8 + local_98;
        FUN_146c4da92(plVar11);
        *local_e8 = uVar1;
        *local_d8 = uVar2;
        *local_c8 = uVar3;
        *local_b8 = uVar4;
        *local_f8 = 0xffffffff;
        local_f8 = local_f8 + local_f0;
        local_e8 = local_e8 + local_e0;
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_c0;
        local_b8 = local_b8 + local_b0;
      }
      else {
LAB_14813556e:
        *local_e8 = 0;
        *local_d8 = 0;
        *local_c8 = 0;
        *local_b8 = 0;
        *local_f8 = 0;
        local_f8 = local_f8 + local_f0;
        local_e8 = local_e8 + local_e0;
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_c0;
        local_b8 = local_b8 + local_b0;
        local_a8 = local_a8 + local_98;
      }
      iVar10 = iVar10 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
    } while (iVar10 < *piVar8);
  }
  local_88[1] = local_88[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14813573a FUN_14813573a body=958 status=ok
// SIG undefined FUN_14813573a(void)

void FUN_14813573a(longlong *param_1,undefined8 param_2)

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
            local_198 = &PTR_LAB_14adbe3f0;
            local_1b8 = FUN_148135afa;
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



// FUNCTION 148135afa FUN_148135afa body=62 status=ok
// SIG undefined FUN_148135afa(void)

void FUN_148135afa(undefined8 param_1,undefined4 *param_2)

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
  FUN_148135b8a();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148135b6c FUN_148135b6c body=29 status=ok
// SIG undefined FUN_148135b6c(void)

undefined8 FUN_148135b6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148135b8a FUN_148135b8a body=191 status=ok
// SIG undefined FUN_148135b8a(void)

void FUN_148135b8a(undefined8 *param_1,longlong *param_2)

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
    FUN_1449e2712(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 4);
    local_40 = (int)uStack_30 << 4;
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



// FUNCTION 148135c5a FUN_148135c5a body=29 status=ok
// SIG undefined FUN_148135c5a(void)

void FUN_148135c5a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148135c78 FUN_148135c78 body=29 status=ok
// SIG undefined FUN_148135c78(void)

undefined8 FUN_148135c78(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148135c96 FUN_148135c96 body=105 status=ok
// SIG undefined FUN_148135c96(void)

void FUN_148135c96(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_14813573a(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_14813573a(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148135cf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148135d00 FUN_148135d00 body=239 status=ok
// SIG undefined FUN_148135d00(void)

void FUN_148135d00(longlong *param_1)

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
            FUN_143a17aea(lVar4 + 8);
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



// FUNCTION 148135e00 FUN_148135e00 body=29 status=ok
// SIG undefined FUN_148135e00(void)

void FUN_148135e00(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148135e1e FUN_148135e1e body=29 status=ok
// SIG undefined FUN_148135e1e(void)

undefined8 FUN_148135e1e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148135e3c FUN_148135e3c body=105 status=ok
// SIG undefined FUN_148135e3c(void)

void FUN_148135e3c(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148135d00(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148135d00(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148135e9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148135ea6 FUN_148135ea6 body=306 status=ok
// SIG undefined FUN_148135ea6(void)

undefined4 * FUN_148135ea6(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_148135fda(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (int)((ulonglong)uVar2 >> 0x20) * 0x17 + (int)uVar2;
  cVar4 = FUN_1481360c0(param_1,uVar9,local_40,&local_4c);
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
      FUN_1481361b2(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148135fda FUN_148135fda body=230 status=ok
// SIG undefined FUN_148135fda(void)

int * FUN_148135fda(longlong *param_1,int *param_2)

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



// FUNCTION 1481360c0 FUN_1481360c0 body=128 status=ok
// SIG undefined FUN_1481360c0(void)

undefined8 FUN_1481360c0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148136140((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 148136140 FUN_148136140 body=114 status=ok
// SIG undefined FUN_148136140(void)

void FUN_148136140(longlong *param_1,int param_2)

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



// FUNCTION 1481361b2 FUN_1481361b2 body=447 status=ok
// SIG undefined FUN_1481361b2(void)

void FUN_1481361b2(longlong *param_1)

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



// FUNCTION 148136372 FUN_148136372 body=34 status=ok
// SIG undefined FUN_148136372(void)

ulonglong FUN_148136372(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = FUN_1406f014a(*param_3);
  *(undefined1 *)*param_1 = uVar1;
  return CONCAT71((int7)((ulonglong)*param_1 >> 8),*(undefined1 *)*param_1) ^ 1;
}



// FUNCTION 1481363be FUN_1481363be body=29 status=ok
// SIG undefined FUN_1481363be(void)

undefined8 FUN_1481363be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481363dc FUN_1481363dc body=180 status=ok
// SIG undefined FUN_1481363dc(void)

void FUN_1481363dc(longlong *param_1,undefined8 param_2)

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
  FUN_148136492(lVar2 + 0x70,&local_2c);
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



// FUNCTION 148136492 FUN_148136492 body=374 status=ok
// SIG undefined FUN_148136492(void)

undefined4 * FUN_148136492(longlong param_1,undefined4 *param_2,undefined8 *param_3)

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
  FUN_14813660a(param_1,local_88);
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
  FUN_148132c12(&local_78);
  *(undefined4 *)(local_80 + 7) = 0xffffffff;
  local_78 = CONCAT44(local_78._4_4_,local_88[0]);
  uVar7 = (int)((ulonglong)*local_80 >> 0x20) * 0x17 + (int)*local_80;
  cVar2 = FUN_1481366f0(param_1,uVar7,local_80,&local_78);
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
      FUN_148136810(param_1);
    }
  }
  *param_2 = uVar1;
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813660a FUN_14813660a body=229 status=ok
// SIG undefined FUN_14813660a(void)

int * FUN_14813660a(longlong *param_1,int *param_2)

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



// FUNCTION 1481366f0 FUN_1481366f0 body=174 status=ok
// SIG undefined FUN_1481366f0(void)

undefined8 FUN_1481366f0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

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
          FUN_148132c12(puVar1 + 2);
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
          FUN_14813679e(param_1,*param_4);
          *param_4 = iVar15;
          return 1;
        }
        iVar15 = puVar1[0xe];
      } while (iVar15 != -1);
    }
  }
  return 0;
}



// FUNCTION 14813679e FUN_14813679e body=114 status=ok
// SIG undefined FUN_14813679e(void)

void FUN_14813679e(longlong *param_1,int param_2)

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



// FUNCTION 148136810 FUN_148136810 body=450 status=ok
// SIG undefined FUN_148136810(void)

void FUN_148136810(longlong *param_1)

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



// FUNCTION 1481369e4 FUN_1481369e4 body=29 status=ok
// SIG undefined FUN_1481369e4(void)

void FUN_1481369e4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 148136a02 FUN_148136a02 body=29 status=ok
// SIG undefined FUN_148136a02(void)

undefined8 FUN_148136a02(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148136a20 FUN_148136a20 body=105 status=ok
// SIG undefined FUN_148136a20(void)

void FUN_148136a20(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481363dc(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481363dc(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148136a7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148136a8a FUN_148136a8a body=102 status=ok
// SIG undefined FUN_148136a8a(void)

void FUN_148136a8a(longlong *param_1,longlong param_2)

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
          FUN_148136af0(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x40 + *param_1 + 0x38);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148136af0 FUN_148136af0 body=123 status=ok
// SIG undefined FUN_148136af0(void)

void FUN_148136af0(longlong *param_1,int param_2)

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
  FUN_148132c12(*param_1 + lVar2 + 8);
  FUN_14813679e(param_1,param_2);
  return;
}



// FUNCTION 148136b8a FUN_148136b8a body=12 status=ok
// SIG undefined FUN_148136b8a(void)

void FUN_148136b8a(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148136b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 148136b96 FUN_148136b96 body=29 status=ok
// SIG undefined FUN_148136b96(void)

undefined8 FUN_148136b96(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148136bb4 FUN_148136bb4 body=117 status=ok
// SIG undefined FUN_148136bb4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148136bb4(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148136a8a(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148136a8a(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148136c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148136c2a FUN_148136c2a body=102 status=ok
// SIG undefined FUN_148136c2a(void)

void FUN_148136c2a(longlong *param_1,longlong param_2)

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
          FUN_148136c90(param_1,iVar1);
          return;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x18 + 0x10);
      } while (iVar1 != -1);
    }
  }
  return;
}



// FUNCTION 148136c90 FUN_148136c90 body=87 status=ok
// SIG undefined FUN_148136c90(void)

void FUN_148136c90(longlong *param_1,int param_2)

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
  FUN_148136140();
  return;
}



// FUNCTION 148136ce8 FUN_148136ce8 body=221 status=ok
// SIG undefined FUN_148136ce8(void)

void FUN_148136ce8(longlong param_1,longlong param_2)

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



// FUNCTION 148136e3c FUN_148136e3c body=109 status=ok
// SIG undefined FUN_148136e3c(void)

undefined8 *
FUN_148136e3c(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    lVar2 = (longlong)param_4[1] + *(longlong *)(param_3 + 0x48);
    lVar1 = (longlong)param_5 * 0x10;
    FUN_1407c8b48(param_2,L"%f, %f, %f, %f",(double)*(float *)(lVar1 + lVar2),
                  (double)*(float *)(lVar1 + 4 + lVar2),(double)*(float *)(lVar1 + 8 + lVar2),
                  (double)*(float *)(lVar1 + 0xc + lVar2));
  }
  return param_2;
}



// FUNCTION 148136ecc FUN_148136ecc body=191 status=ok
// SIG undefined FUN_148136ecc(void)

undefined8 *
FUN_148136ecc(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
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
  FUN_148136f8c(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adbe600;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 148136f8c FUN_148136f8c body=144 status=ok
// SIG undefined FUN_148136f8c(void)

undefined8 *
FUN_148136f8c(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac10;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adbe620;
  FUN_148137088(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813701e FUN_14813701e body=105 status=ok
// SIG undefined FUN_14813701e(void)

undefined8 * FUN_14813701e(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbe620;
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



// FUNCTION 148137088 FUN_148137088 body=258 status=ok
// SIG undefined FUN_148137088(void)

void FUN_148137088(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14813718a FUN_14813718a body=105 status=ok
// SIG undefined FUN_14813718a(void)

undefined8 * FUN_14813718a(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbe620;
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



// FUNCTION 1481371f4 FUN_1481371f4 body=214 status=ok
// SIG undefined FUN_1481371f4(void)

void FUN_1481371f4(longlong param_1,undefined8 param_2)

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
  local_48 = &PTR_LAB_14adbe640;
  local_68 = FUN_1481372cc;
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



// FUNCTION 1481372cc FUN_1481372cc body=62 status=ok
// SIG undefined FUN_1481372cc(void)

void FUN_1481372cc(undefined8 param_1,undefined4 *param_2)

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
  FUN_14813735c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813733e FUN_14813733e body=29 status=ok
// SIG undefined FUN_14813733e(void)

undefined8 FUN_14813733e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813735c FUN_14813735c body=297 status=ok
// SIG undefined FUN_14813735c(void)

void FUN_14813735c(undefined8 *param_1,longlong *param_2)

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
    FUN_1467ff840(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 4);
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
  *local_78 = &PTR_LAB_14adbe660;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_148137486;
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



// FUNCTION 148137486 FUN_148137486 body=52 status=ok
// SIG undefined FUN_148137486(void)

void FUN_148137486(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14813751c(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 1481374c4 FUN_1481374c4 body=29 status=ok
// SIG undefined FUN_1481374c4(void)

void FUN_1481374c4(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481374e2 FUN_1481374e2 body=57 status=ok
// SIG undefined FUN_1481374e2(void)

undefined8 * FUN_1481374e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbe660;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813751c FUN_14813751c body=216 status=ok
// SIG undefined FUN_14813751c(void)

void FUN_14813751c(longlong param_1,longlong param_2,undefined8 param_3)

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
            FUN_14479f9aa(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_14479f9aa(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001481375ed. Too many branches */
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



// FUNCTION 1481375f4 FUN_1481375f4 body=107 status=ok
// SIG undefined FUN_1481375f4(void)

undefined8 * FUN_1481375f4(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_14479f9aa(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_144750f90(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 148137670 FUN_148137670 body=93 status=ok
// SIG undefined FUN_148137670(void)

void FUN_148137670(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481376ce FUN_1481376ce body=93 status=ok
// SIG undefined FUN_1481376ce(void)

void FUN_1481376ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe680;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813772c FUN_14813772c body=126 status=ok
// SIG undefined FUN_14813772c(void)

void FUN_14813772c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe680;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813779b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481377aa FUN_1481377aa body=20 status=ok
// SIG undefined FUN_1481377aa(void)

undefined1 FUN_1481377aa(longlong param_1)

{
  FUN_14053be7c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481377be FUN_1481377be body=29 status=ok
// SIG undefined FUN_1481377be(void)

undefined8 FUN_1481377be(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481377f0 FUN_1481377f0 body=93 status=ok
// SIG undefined FUN_1481377f0(void)

void FUN_1481377f0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe6f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813784e FUN_14813784e body=93 status=ok
// SIG undefined FUN_14813784e(void)

void FUN_14813784e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe6f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481378ac FUN_1481378ac body=126 status=ok
// SIG undefined FUN_1481378ac(void)

void FUN_1481378ac(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe6f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813791b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148137934 FUN_148137934 body=20 status=ok
// SIG undefined FUN_148137934(void)

undefined1 FUN_148137934(longlong param_1)

{
  FUN_148137948(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148137948 FUN_148137948 body=312 status=ok
// SIG undefined FUN_148137948(void)

void FUN_148137948(longlong param_1,char *param_2)

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
  FUN_14031deac(local_38);
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
      goto LAB_1481379cc;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_1481379cc:
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



// FUNCTION 148137a82 FUN_148137a82 body=29 status=ok
// SIG undefined FUN_148137a82(void)

undefined8 FUN_148137a82(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148137ab4 FUN_148137ab4 body=93 status=ok
// SIG undefined FUN_148137ab4(void)

void FUN_148137ab4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137b12 FUN_148137b12 body=93 status=ok
// SIG undefined FUN_148137b12(void)

void FUN_148137b12(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe760;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137b70 FUN_148137b70 body=126 status=ok
// SIG undefined FUN_148137b70(void)

void FUN_148137b70(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe760;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148137bdf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148137bf8 FUN_148137bf8 body=20 status=ok
// SIG undefined FUN_148137bf8(void)

undefined1 FUN_148137bf8(longlong param_1)

{
  FUN_148137c0c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148137c0c FUN_148137c0c body=242 status=ok
// SIG undefined FUN_148137c0c(void)

void FUN_148137c0c(longlong param_1,char *param_2)

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
  FUN_14031deac(local_38);
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
      goto LAB_148137c76;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_148137c76:
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



// FUNCTION 148137d10 FUN_148137d10 body=93 status=ok
// SIG undefined FUN_148137d10(void)

void FUN_148137d10(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137d6e FUN_148137d6e body=93 status=ok
// SIG undefined FUN_148137d6e(void)

void FUN_148137d6e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe7d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137dcc FUN_148137dcc body=126 status=ok
// SIG undefined FUN_148137dcc(void)

void FUN_148137dcc(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe7d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148137e3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148137e4a FUN_148137e4a body=20 status=ok
// SIG undefined FUN_148137e4a(void)

undefined1 FUN_148137e4a(longlong param_1)

{
  FUN_14031d91e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148137e5e FUN_148137e5e body=29 status=ok
// SIG undefined FUN_148137e5e(void)

undefined8 FUN_148137e5e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148137e90 FUN_148137e90 body=93 status=ok
// SIG undefined FUN_148137e90(void)

void FUN_148137e90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137eee FUN_148137eee body=93 status=ok
// SIG undefined FUN_148137eee(void)

void FUN_148137eee(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe840;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148137f4c FUN_148137f4c body=126 status=ok
// SIG undefined FUN_148137f4c(void)

void FUN_148137f4c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe840;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148137fbb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148137fd4 FUN_148137fd4 body=20 status=ok
// SIG undefined FUN_148137fd4(void)

undefined1 FUN_148137fd4(longlong param_1)

{
  FUN_148137fe8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148137fe8 FUN_148137fe8 body=185 status=ok
// SIG undefined FUN_148137fe8(void)

void FUN_148137fe8(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14031deac(local_38);
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
      FUN_14479f9aa(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_144750f90(pcVar2,0);
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



// FUNCTION 1481380a2 FUN_1481380a2 body=29 status=ok
// SIG undefined FUN_1481380a2(void)

undefined8 FUN_1481380a2(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481380d4 FUN_1481380d4 body=93 status=ok
// SIG undefined FUN_1481380d4(void)

void FUN_1481380d4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe8b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148138132 FUN_148138132 body=93 status=ok
// SIG undefined FUN_148138132(void)

void FUN_148138132(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe8b0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148138190 FUN_148138190 body=126 status=ok
// SIG undefined FUN_148138190(void)

void FUN_148138190(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe8b0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001481381ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148138218 FUN_148138218 body=20 status=ok
// SIG undefined FUN_148138218(void)

undefined1 FUN_148138218(longlong param_1)

{
  FUN_14813822c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813822c FUN_14813822c body=270 status=ok
// SIG undefined FUN_14813822c(void)

void FUN_14813822c(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  PSRWLOCK SRWLock;
  longlong *plVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 uStack_50;
  int local_48;
  undefined1 local_40 [8];
  char *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14031deac(local_40);
  local_58 = (int *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  pcVar4 = local_38;
  lVar5 = *(longlong *)(param_1 + 0x10);
  if (local_38 == (char *)0x0) {
    plVar6 = (longlong *)(lVar5 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_38 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar4 == '\0') {
      *pcVar4 = '\x01';
      FUN_14479f9aa(pcVar4 + 0x10,lVar5 + 0x50);
    }
    plVar6 = (longlong *)(pcVar4 + 0x10);
  }
  iVar2 = (int)plVar6[1];
  iVar3 = *local_58;
  local_58 = local_58 + local_48;
  FUN_14735c9c0(plVar6,iVar3,1);
  if (iVar2 < iVar3) {
    lVar5 = (longlong)iVar3 - (longlong)iVar2;
    lVar7 = (longlong)iVar2 << 4;
    do {
      puVar1 = (undefined4 *)(*plVar6 + lVar7);
      *puVar1 = 0x3f800000;
      puVar1[1] = 0x3f800000;
      puVar1[2] = 0x3f800000;
      puVar1[3] = 0x3f800000;
      lVar7 = lVar7 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
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



// FUNCTION 14813833c FUN_14813833c body=29 status=ok
// SIG undefined FUN_14813833c(void)

undefined8 FUN_14813833c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813836e FUN_14813836e body=93 status=ok
// SIG undefined FUN_14813836e(void)

void FUN_14813836e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481383cc FUN_1481383cc body=93 status=ok
// SIG undefined FUN_1481383cc(void)

void FUN_1481383cc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe920;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813842a FUN_14813842a body=126 status=ok
// SIG undefined FUN_14813842a(void)

void FUN_14813842a(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe920;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148138499. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481384b2 FUN_1481384b2 body=20 status=ok
// SIG undefined FUN_1481384b2(void)

undefined1 FUN_1481384b2(longlong param_1)

{
  FUN_1481384c6(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481384c6 FUN_1481384c6 body=626 status=ok
// SIG undefined FUN_1481384c6(void)

void FUN_1481384c6(longlong param_1,byte *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char *pcVar11;
  byte bVar12;
  int iVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined8 uStack_f0;
  int local_e8;
  undefined4 *local_e0;
  undefined8 uStack_d8;
  int local_d0;
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
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14031deac(local_60);
  local_68 = 0;
  local_78 = (int *)0x0;
  uStack_70 = 0;
  FUN_144a76d88(&local_78,param_2);
  local_88 = 0;
  local_98 = (uint *)0x0;
  uStack_90 = 0;
  FUN_144a98d08(&local_98,param_2);
  local_e8 = 0;
  local_f8 = (undefined4 *)0x0;
  uStack_f0 = 0;
  FUN_144a98dce(&local_f8,param_2);
  local_d0 = 0;
  local_e0 = (undefined4 *)0x0;
  uStack_d8 = 0;
  FUN_144a98dce(&local_e0,param_2);
  local_b8 = 0;
  local_c8 = (undefined4 *)0x0;
  uStack_c0 = 0;
  FUN_144a98dce(&local_c8,param_2);
  local_a0 = 0;
  local_b0 = (undefined4 *)0x0;
  uStack_a8 = 0;
  FUN_144a98dce(&local_b0,param_2);
  pcVar11 = local_58;
  lVar15 = *(longlong *)(param_1 + 0x10);
  if (local_58 == (char *)0x0) {
    plVar17 = (longlong *)(lVar15 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_58 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar11 == '\0') {
      *pcVar11 = '\x01';
      FUN_14479f9aa(pcVar11 + 0x10,lVar15 + 0x50);
    }
    plVar17 = (longlong *)(pcVar11 + 0x10);
  }
  bVar12 = *param_2;
  lVar15 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar15 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar13 = 0;
    do {
      puVar1 = local_98 + local_88;
      uVar10 = *local_98;
      puVar2 = local_b0 + local_a0;
      uVar7 = *local_b0;
      puVar3 = local_c8 + local_b8;
      uVar8 = *local_c8;
      puVar4 = local_e0 + local_d0;
      uVar9 = *local_e0;
      puVar5 = local_f8 + local_e8;
      piVar6 = local_78 + local_68;
      if ((-1 < (int)uVar10 && *local_78 == 0) && ((int)uVar10 < (int)plVar17[1])) {
        lVar15 = *plVar17;
        lVar16 = (ulonglong)uVar10 * 0x10;
        *(undefined4 *)(lVar15 + lVar16) = *local_f8;
        *(undefined4 *)(lVar15 + 4 + lVar16) = uVar9;
        *(undefined4 *)(lVar15 + 8 + lVar16) = uVar8;
        *(undefined4 *)(lVar15 + 0xc + lVar16) = uVar7;
        bVar12 = *param_2;
        lVar15 = *(longlong *)(param_2 + 0x80);
      }
      iVar13 = iVar13 + 1;
      pbVar14 = (byte *)(lVar15 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
      local_f8 = puVar5;
      local_e0 = puVar4;
      local_c8 = puVar3;
      local_b0 = puVar2;
      local_98 = puVar1;
      local_78 = piVar6;
    } while (iVar13 < *(int *)pbVar14);
  }
  local_58[1] = local_58[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_50 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813873a FUN_14813873a body=29 status=ok
// SIG undefined FUN_14813873a(void)

undefined8 FUN_14813873a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813876c FUN_14813876c body=93 status=ok
// SIG undefined FUN_14813876c(void)

void FUN_14813876c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1481387ca FUN_1481387ca body=93 status=ok
// SIG undefined FUN_1481387ca(void)

void FUN_1481387ca(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbe990;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148138828 FUN_148138828 body=126 status=ok
// SIG undefined FUN_148138828(void)

void FUN_148138828(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbe990;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148138897. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1481388b0 FUN_1481388b0 body=20 status=ok
// SIG undefined FUN_1481388b0(void)

undefined1 FUN_1481388b0(longlong param_1)

{
  FUN_1481388c4(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1481388c4 FUN_1481388c4 body=659 status=ok
// SIG undefined FUN_1481388c4(void)

void FUN_1481388c4(longlong param_1,byte *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 *puVar11;
  byte bVar12;
  longlong lVar13;
  byte *pbVar14;
  PSRWLOCK SRWLock;
  int iVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_138 [32];
  undefined4 *local_118;
  undefined8 uStack_110;
  int local_108;
  undefined4 *local_100;
  undefined8 uStack_f8;
  int local_f0;
  undefined4 *local_e8;
  undefined8 uStack_e0;
  int local_d8;
  undefined4 *local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int *local_b8;
  undefined8 uStack_b0;
  int local_a8;
  undefined1 local_a0 [8];
  char *local_98;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_138;
  FUN_14031deac(local_a0);
  local_a8 = 0;
  local_b8 = (int *)0x0;
  uStack_b0 = 0;
  FUN_144a76d88(&local_b8,param_2);
  local_108 = 0;
  local_118 = (undefined4 *)0x0;
  uStack_110 = 0;
  FUN_144a98dce(&local_118,param_2);
  local_f0 = 0;
  local_100 = (undefined4 *)0x0;
  uStack_f8 = 0;
  FUN_144a98dce(&local_100,param_2);
  local_d8 = 0;
  local_e8 = (undefined4 *)0x0;
  uStack_e0 = 0;
  FUN_144a98dce(&local_e8,param_2);
  local_c0 = 0;
  local_d0 = (undefined4 *)0x0;
  uStack_c8 = 0;
  FUN_144a98dce(&local_d0,param_2);
  pcVar10 = local_98;
  lVar13 = *(longlong *)(param_1 + 0x10);
  iVar15 = 0x7fffffff;
  if (0 < *(int *)(lVar13 + 0x4c)) {
    iVar15 = *(int *)(lVar13 + 0x4c);
  }
  if (local_98 == (char *)0x0) {
    plVar17 = (longlong *)(lVar13 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_98 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar10 == '\0') {
      *pcVar10 = '\x01';
      FUN_14479f9aa(pcVar10 + 0x10,lVar13 + 0x50);
    }
    plVar17 = (longlong *)(pcVar10 + 0x10);
  }
  bVar12 = *param_2;
  lVar13 = *(longlong *)(param_2 + 0x80);
  pbVar14 = (byte *)(lVar13 + 0x40);
  if (bVar12 != 0) {
    pbVar14 = param_2 + 0x3c;
  }
  if (0 < *(int *)pbVar14) {
    iVar16 = 0;
    do {
      piVar1 = local_b8 + local_a8;
      iVar9 = *local_b8;
      puVar2 = local_d0 + local_c0;
      uVar5 = *local_d0;
      puVar3 = local_e8 + local_d8;
      uVar6 = *local_e8;
      puVar4 = local_100 + local_f0;
      uVar7 = *local_100;
      puVar11 = local_118 + local_108;
      local_100 = puVar4;
      local_e8 = puVar3;
      local_d0 = puVar2;
      local_b8 = piVar1;
      if (iVar9 == 0) {
        iVar9 = (int)plVar17[1];
        if (iVar9 < iVar15) {
          uVar8 = *local_118;
          *(uint *)(plVar17 + 1) = iVar9 + 1U;
          local_118 = puVar11;
          if (*(uint *)((longlong)plVar17 + 0xc) < iVar9 + 1U) {
            FUN_1467ff840(plVar17,iVar9);
          }
          lVar13 = *plVar17;
          lVar18 = (longlong)iVar9 * 0x10;
          *(undefined4 *)(lVar13 + lVar18) = uVar8;
          *(undefined4 *)(lVar13 + 4 + lVar18) = uVar7;
          *(undefined4 *)(lVar13 + 8 + lVar18) = uVar6;
          *(undefined4 *)(lVar13 + 0xc + lVar18) = uVar5;
          bVar12 = *param_2;
          lVar13 = *(longlong *)(param_2 + 0x80);
          puVar11 = local_118;
        }
      }
      local_118 = puVar11;
      iVar16 = iVar16 + 1;
      pbVar14 = (byte *)(lVar13 + 0x40);
      if ((bVar12 & 1) != 0) {
        pbVar14 = param_2 + 0x3c;
      }
    } while (iVar16 < *(int *)pbVar14);
  }
  local_98[1] = local_98[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_90 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148138b58 FUN_148138b58 body=29 status=ok
// SIG undefined FUN_148138b58(void)

undefined8 FUN_148138b58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148138b8a FUN_148138b8a body=93 status=ok
// SIG undefined FUN_148138b8a(void)

void FUN_148138b8a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbea00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148138be8 FUN_148138be8 body=93 status=ok
// SIG undefined FUN_148138be8(void)

void FUN_148138be8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbea00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 148138c46 FUN_148138c46 body=126 status=ok
// SIG undefined FUN_148138c46(void)

void FUN_148138c46(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbea00;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148138cb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 148138cce FUN_148138cce body=20 status=ok
// SIG undefined FUN_148138cce(void)

undefined1 FUN_148138cce(longlong param_1)

{
  FUN_148138ce2(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 148138ce2 FUN_148138ce2 body=760 status=ok
// SIG undefined FUN_148138ce2(void)

void FUN_148138ce2(longlong param_1,char *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  int *piVar8;
  longlong lVar9;
  PSRWLOCK SRWLock;
  int iVar10;
  longlong *plVar11;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  int local_f0;
  undefined4 *local_e8;
  int local_e0;
  undefined4 *local_d8;
  int local_d0;
  undefined4 *local_c8;
  int local_c0;
  undefined4 *local_b8;
  int local_b0;
  int *local_a8;
  undefined8 uStack_a0;
  int local_98;
  undefined1 local_90 [8];
  char *local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  FUN_14031deac(local_90);
  local_a8 = (int *)0x0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_144a76d88(&local_a8,param_2);
  FUN_144a76c20(&local_e8,param_2);
  FUN_144a76c20(&local_d8,param_2);
  FUN_144a76c20(&local_c8,param_2);
  FUN_144a76c20(&local_b8,param_2);
  FUN_140126e42(&local_f8,param_2);
  pcVar7 = local_88;
  lVar6 = *(longlong *)(param_1 + 0x10);
  if (local_88 == (char *)0x0) {
    plVar11 = (longlong *)(lVar6 + 0x50);
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_88 + 8);
    AcquireSRWLockExclusive(SRWLock);
    if (*pcVar7 == '\0') {
      *pcVar7 = '\x01';
      FUN_14479f9aa(pcVar7 + 0x10,lVar6 + 0x50);
    }
    plVar11 = (longlong *)(pcVar7 + 0x10);
  }
  piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar8 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar8) {
    iVar10 = 0;
    do {
      if (*local_a8 == 0) {
        iVar5 = (int)plVar11[1];
        if ((longlong)iVar5 == 0) goto LAB_148138e23;
        lVar6 = *plVar11;
        lVar9 = (longlong)iVar5 * 0x10;
        uVar1 = *(undefined4 *)(lVar6 + -0x10 + lVar9);
        uVar2 = *(undefined4 *)(lVar6 + -0xc + lVar9);
        uVar3 = *(undefined4 *)(lVar6 + -8 + lVar9);
        uVar4 = *(undefined4 *)(lVar6 + -4 + lVar9);
        *(int *)(plVar11 + 1) = iVar5 + -1;
        local_a8 = local_a8 + local_98;
        FUN_1469885b8(plVar11);
        *local_e8 = uVar1;
        *local_d8 = uVar2;
        *local_c8 = uVar3;
        *local_b8 = uVar4;
        *local_f8 = 0xffffffff;
        local_f8 = local_f8 + local_f0;
        local_e8 = local_e8 + local_e0;
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_c0;
        local_b8 = local_b8 + local_b0;
      }
      else {
LAB_148138e23:
        *local_e8 = 0x3f800000;
        *local_d8 = 0x3f800000;
        *local_c8 = 0x3f800000;
        *local_b8 = 0x3f800000;
        *local_f8 = 0;
        local_f8 = local_f8 + local_f0;
        local_e8 = local_e8 + local_e0;
        local_d8 = local_d8 + local_d0;
        local_c8 = local_c8 + local_c0;
        local_b8 = local_b8 + local_b0;
        local_a8 = local_a8 + local_98;
      }
      iVar10 = iVar10 + 1;
      piVar8 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar8 = (int *)(param_2 + 0x3c);
      }
    } while (iVar10 < *piVar8);
  }
  local_88[1] = local_88[1] | *(byte *)(param_1 + 0x18);
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockExclusive(SRWLock);
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 148138fdc FUN_148138fdc body=958 status=ok
// SIG undefined FUN_148138fdc(void)

void FUN_148138fdc(longlong *param_1,undefined8 param_2)

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
            local_198 = &PTR_LAB_14adbea70;
            local_1b8 = FUN_14813939c;
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



// FUNCTION 14813939c FUN_14813939c body=62 status=ok
// SIG undefined FUN_14813939c(void)

void FUN_14813939c(undefined8 param_1,undefined4 *param_2)

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
  FUN_14813942c();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813940e FUN_14813940e body=29 status=ok
// SIG undefined FUN_14813940e(void)

undefined8 FUN_14813940e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813942c FUN_14813942c body=191 status=ok
// SIG undefined FUN_14813942c(void)

void FUN_14813942c(undefined8 *param_1,longlong *param_2)

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
    FUN_1467ff840(&local_38,0);
    memcpy(local_38,*(void **)*param_2,(longlong)*(int *)param_1[1] << 4);
    local_40 = (int)uStack_30 << 4;
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



// FUNCTION 1481394fc FUN_1481394fc body=29 status=ok
// SIG undefined FUN_1481394fc(void)

void FUN_1481394fc(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813951a FUN_14813951a body=29 status=ok
// SIG undefined FUN_14813951a(void)

undefined8 FUN_14813951a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 148139538 FUN_148139538 body=105 status=ok
// SIG undefined FUN_148139538(void)

void FUN_148139538(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148138fdc(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148138fdc(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148139597. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481395a2 FUN_1481395a2 body=239 status=ok
// SIG undefined FUN_1481395a2(void)

void FUN_1481395a2(longlong *param_1)

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
            FUN_140eb6350(lVar4 + 8);
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



// FUNCTION 1481396a2 FUN_1481396a2 body=29 status=ok
// SIG undefined FUN_1481396a2(void)

void FUN_1481396a2(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 1481396c0 FUN_1481396c0 body=29 status=ok
// SIG undefined FUN_1481396c0(void)

undefined8 FUN_1481396c0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1481396de FUN_1481396de body=105 status=ok
// SIG undefined FUN_1481396de(void)

void FUN_1481396de(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1481395a2(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1481395a2(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014813973d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148139748 FUN_148139748 body=180 status=ok
// SIG undefined FUN_148139748(void)

void FUN_148139748(longlong *param_1,undefined8 param_2)

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
  FUN_1409314f8(lVar2 + 0x70,&local_2c);
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



// FUNCTION 148139802 FUN_148139802 body=105 status=ok
// SIG undefined FUN_148139802(void)

void FUN_148139802(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_148139748(0xa8,&DAT_14ca85100);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_148139748(param_1 + 0x15,&DAT_14ca85100);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000148139845. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 148139870 FUN_148139870 body=117 status=ok
// SIG undefined FUN_148139870(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_148139870(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1406e33ee(_DAT_000000a8 + 0x70,_DAT_000000b0);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1406e33ee(param_1[0x15] + 0x70,param_1[0x16]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001481398b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1481398ec FUN_1481398ec body=251 status=ok
// SIG undefined FUN_1481398ec(void)

void FUN_1481398ec(longlong param_1,char *param_2,longlong *param_3)

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
            FUN_143a1c09e(lVar3 + 8,&DAT_14ca85100);
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



// FUNCTION 1481399f6 FUN_1481399f6 body=221 status=ok
// SIG undefined FUN_1481399f6(void)

void FUN_1481399f6(longlong param_1,longlong param_2)

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



// FUNCTION 148139ad4 FUN_148139ad4 body=54 status=ok
// SIG undefined FUN_148139ad4(void)

void FUN_148139ad4(undefined8 param_1,undefined1 param_2,undefined8 param_3,longlong *param_4)

{
  FUN_14813a5aa(param_1,param_2,param_4);
  if ((longlong *)*param_4 == (longlong *)0x0 || (int)param_4[1] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000148139b06. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)*param_4 + 0x30))();
  return;
}



// FUNCTION 148139b80 FUN_148139b80 body=109 status=ok
// SIG undefined FUN_148139b80(void)

undefined8 *
FUN_148139b80(undefined8 param_1,undefined8 *param_2,longlong param_3,int *param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_5 < *param_4) {
    lVar2 = (longlong)param_4[1] + *(longlong *)(param_3 + 0x48);
    lVar1 = (longlong)param_5 * 0x10;
    FUN_1407c8b48(param_2,L"%f, %f, %f, %f",(double)*(float *)(lVar1 + lVar2),
                  (double)*(float *)(lVar1 + 4 + lVar2),(double)*(float *)(lVar1 + 8 + lVar2),
                  (double)*(float *)(lVar1 + 0xc + lVar2));
  }
  return param_2;
}



// FUNCTION 148139bee FUN_148139bee body=35 status=ok
// SIG undefined FUN_148139bee(void)

undefined8 FUN_148139bee(longlong param_1,longlong param_2)

{
  FUN_14785c646(*(longlong *)(param_2 + 0x10) + 0x50,*(longlong *)(param_1 + 0x10) + 0x50);
  return 1;
}



// FUNCTION 148139c3a FUN_148139c3a body=144 status=ok
// SIG undefined FUN_148139c3a(void)

void FUN_148139c3a(longlong param_1,undefined8 *param_2,char *param_3)

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
    FUN_14785c646(param_2 + 1,pcVar2);
    param_3[1] = '\0';
    if (SRWLock != (PSRWLOCK)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148139ca5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockShared(SRWLock);
      return;
    }
  }
  return;
}



// FUNCTION 148139d72 FUN_148139d72 body=159 status=ok
// SIG undefined FUN_148139d72(void)

void FUN_148139d72(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  if (*(int *)((longlong)param_1 + 0x2c) != -1) {
    FUN_1400ee60a(*param_1 + 0x38,(longlong)param_1 + 0x2c);
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0xffffffff;
  }
  FUN_143a1bf10(param_1);
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



// FUNCTION 148139e12 FUN_148139e12 body=191 status=ok
// SIG undefined FUN_148139e12(void)

undefined8 *
FUN_148139e12(longlong *param_1,ulonglong *param_2,undefined8 param_3,undefined2 *param_4,
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
  FUN_148139ed2(puVar5,param_3,uVar4,uVar1,param_5);
  *puVar5 = &PTR_FUN_14adbec60;
  iVar2 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
    FUN_14470e57a(param_1,iVar2);
  }
  *(undefined8 **)(*param_1 + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = (int)param_1[1] + -1;
  return puVar5;
}



// FUNCTION 148139ed2 FUN_148139ed2 body=144 status=ok
// SIG undefined FUN_148139ed2(void)

undefined8 *
FUN_148139ed2(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined *local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = &DAT_14cb3ac20;
  local_28 = *(longlong *)(param_3 + 0x48);
  if (local_28 != 0) {
    LOCK();
    *(int *)(local_28 + 8) = *(int *)(local_28 + 8) + 1;
    UNLOCK();
  }
  local_38 = 0;
  local_20 = param_3;
  FUN_140068f1a(param_1,param_2,&local_30);
  *param_1 = &PTR_FUN_14adbec80;
  FUN_148139fce(param_1 + 0x37,param_5);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 148139f64 FUN_148139f64 body=105 status=ok
// SIG undefined FUN_148139f64(void)

undefined8 * FUN_148139f64(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbec80;
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



// FUNCTION 148139fce FUN_148139fce body=258 status=ok
// SIG undefined FUN_148139fce(void)

void FUN_148139fce(undefined8 *param_1,undefined8 *param_2)

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



// FUNCTION 14813a0d0 FUN_14813a0d0 body=105 status=ok
// SIG undefined FUN_14813a0d0(void)

undefined8 * FUN_14813a0d0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14adbec80;
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



// FUNCTION 14813a13a FUN_14813a13a body=214 status=ok
// SIG undefined FUN_14813a13a(void)

void FUN_14813a13a(longlong param_1,undefined8 param_2)

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
  local_48 = &PTR_LAB_14adbeca0;
  local_68 = FUN_14813a212;
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



// FUNCTION 14813a212 FUN_14813a212 body=62 status=ok
// SIG undefined FUN_14813a212(void)

void FUN_14813a212(undefined8 param_1,undefined4 *param_2)

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
  FUN_14813a2a2();
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813a284 FUN_14813a284 body=29 status=ok
// SIG undefined FUN_14813a284(void)

undefined8 FUN_14813a284(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813a2a2 FUN_14813a2a2 body=297 status=ok
// SIG undefined FUN_14813a2a2(void)

void FUN_14813a2a2(undefined8 *param_1,longlong *param_2)

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
    FUN_146ed4f5e(&local_98,0);
    memcpy(local_98,*(void **)(*param_2 + 0x10),lVar5 << 4);
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
  *local_78 = &PTR_LAB_14adbecc0;
  local_78[1] = uVar1;
  local_78[2] = pvVar7;
  *(int *)(local_78 + 3) = iVar4;
  *(undefined4 *)((longlong)local_78 + 0x1c) = uVar6;
  local_78[4] = uVar2;
  local_78[5] = uVar3;
  if (local_78 + 1 != (undefined8 *)0x0) {
    local_88[0] = FUN_14813a3cc;
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



// FUNCTION 14813a3cc FUN_14813a3cc body=52 status=ok
// SIG undefined FUN_14813a3cc(void)

void FUN_14813a3cc(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 3);
  if (lVar1 == 0) {
    return;
  }
  FUN_14813a462(param_1[4],*param_1,param_1 + 1);
  return;
}



// FUNCTION 14813a40a FUN_14813a40a body=29 status=ok
// SIG undefined FUN_14813a40a(void)

void FUN_14813a40a(longlong *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1,0);
  FUN_1400020a8(param_1);
  return;
}



// FUNCTION 14813a428 FUN_14813a428 body=57 status=ok
// SIG undefined FUN_14813a428(void)

undefined8 * FUN_14813a428(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14adbecc0;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813a462 FUN_14813a462 body=216 status=ok
// SIG undefined FUN_14813a462(void)

void FUN_14813a462(longlong param_1,longlong param_2,undefined8 param_3)

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
            FUN_14785c646(pcVar2 + 0x10,lVar4 + 0x50);
          }
          FUN_14785c646(pcVar2 + 0x10,param_3);
          pcVar2[1] = pcVar2[1] | *(byte *)(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00014813a533. Too many branches */
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



// FUNCTION 14813a53a FUN_14813a53a body=111 status=ok
// SIG undefined FUN_14813a53a(void)

undefined8 * FUN_14813a53a(undefined8 *param_1,longlong param_2,char *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  if (param_3 != (char *)0x0) {
    *param_1 = (PSRWLOCK)(param_3 + 8);
    AcquireSRWLockExclusive((PSRWLOCK)(param_3 + 8));
    if (*param_3 == '\x01') {
      FUN_14785c646(param_2 + 0x50,param_3 + 0x10);
    }
    *param_3 = '\0';
    param_3[0x18] = '\0';
    param_3[0x19] = '\0';
    param_3[0x1a] = '\0';
    param_3[0x1b] = '\0';
    if (*(int *)(param_3 + 0x1c) != 0) {
      FUN_146ed5086(param_3 + 0x10,0);
    }
  }
  param_1[1] = param_2 + 0x50;
  return param_1;
}



// FUNCTION 14813a5aa FUN_14813a5aa body=1301 status=ok
// SIG undefined FUN_14813a5aa(void)

void FUN_14813a5aa(undefined8 param_1,longlong *param_2,undefined8 param_3)

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
    ppuVar2 = &PTR_FUN_14adbece0;
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
    ppuVar2 = &PTR_FUN_14adbed50;
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
    ppuVar2 = &PTR_FUN_14adbedc0;
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
    ppuVar2 = &PTR_FUN_14adbee30;
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
    ppuVar2 = &PTR_FUN_14adbeea0;
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
    ppuVar2 = &PTR_FUN_14adbef10;
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
    ppuVar2 = &PTR_FUN_14adbef80;
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
    ppuVar2 = &PTR_FUN_14adbeff0;
  }
  else {
    if (lVar1 != DAT_14cb3aaa8) goto LAB_14813a659;
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
    ppuVar2 = &PTR_FUN_14adbf060;
  }
  local_28 = 2;
  *local_30 = ppuVar2;
  local_30[3] = param_1;
  FUN_144a450dc(param_3,&local_30);
  FUN_1449db362(&local_30);
LAB_14813a659:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14813aac0 FUN_14813aac0 body=29 status=ok
// SIG undefined FUN_14813aac0(void)

undefined8 FUN_14813aac0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813aaf2 FUN_14813aaf2 body=93 status=ok
// SIG undefined FUN_14813aaf2(void)

void FUN_14813aaf2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbece0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813ab50 FUN_14813ab50 body=93 status=ok
// SIG undefined FUN_14813ab50(void)

void FUN_14813ab50(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbece0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813abae FUN_14813abae body=126 status=ok
// SIG undefined FUN_14813abae(void)

void FUN_14813abae(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbece0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813ac1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813ac36 FUN_14813ac36 body=20 status=ok
// SIG undefined FUN_14813ac36(void)

undefined1 FUN_14813ac36(longlong param_1)

{
  FUN_14813ac4a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813ac4a FUN_14813ac4a body=240 status=ok
// SIG undefined FUN_14813ac4a(void)

void FUN_14813ac4a(longlong param_1,char *param_2)

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
  FUN_14813ad3c(local_38);
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
      goto LAB_14813acb4;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14813acb4:
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



// FUNCTION 14813ad3c FUN_14813ad3c body=148 status=ok
// SIG undefined FUN_14813ad3c(void)

void FUN_14813ad3c(int *param_1,char *param_2)

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



// FUNCTION 14813add0 FUN_14813add0 body=29 status=ok
// SIG undefined FUN_14813add0(void)

undefined8 FUN_14813add0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813ae02 FUN_14813ae02 body=93 status=ok
// SIG undefined FUN_14813ae02(void)

void FUN_14813ae02(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbed50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813ae60 FUN_14813ae60 body=93 status=ok
// SIG undefined FUN_14813ae60(void)

void FUN_14813ae60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbed50;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813aebe FUN_14813aebe body=126 status=ok
// SIG undefined FUN_14813aebe(void)

void FUN_14813aebe(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbed50;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813af2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813af46 FUN_14813af46 body=20 status=ok
// SIG undefined FUN_14813af46(void)

undefined1 FUN_14813af46(longlong param_1)

{
  FUN_14813af5a(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813af5a FUN_14813af5a body=312 status=ok
// SIG undefined FUN_14813af5a(void)

void FUN_14813af5a(longlong param_1,char *param_2)

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
  FUN_14813ad3c(local_38);
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
      goto LAB_14813afde;
    }
  }
  local_30 = (char *)(lVar3 + 0x50);
LAB_14813afde:
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



// FUNCTION 14813b094 FUN_14813b094 body=29 status=ok
// SIG undefined FUN_14813b094(void)

undefined8 FUN_14813b094(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813b0c6 FUN_14813b0c6 body=93 status=ok
// SIG undefined FUN_14813b0c6(void)

void FUN_14813b0c6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbedc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b124 FUN_14813b124 body=93 status=ok
// SIG undefined FUN_14813b124(void)

void FUN_14813b124(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbedc0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b182 FUN_14813b182 body=126 status=ok
// SIG undefined FUN_14813b182(void)

void FUN_14813b182(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbedc0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813b1f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813b20a FUN_14813b20a body=20 status=ok
// SIG undefined FUN_14813b20a(void)

undefined1 FUN_14813b20a(longlong param_1)

{
  FUN_14813b21e(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813b21e FUN_14813b21e body=242 status=ok
// SIG undefined FUN_14813b21e(void)

void FUN_14813b21e(longlong param_1,char *param_2)

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
  FUN_14813ad3c(local_38);
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
      goto LAB_14813b288;
    }
  }
  local_30 = (char *)(lVar2 + 0x50);
LAB_14813b288:
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



// FUNCTION 14813b312 FUN_14813b312 body=29 status=ok
// SIG undefined FUN_14813b312(void)

undefined8 FUN_14813b312(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813b344 FUN_14813b344 body=93 status=ok
// SIG undefined FUN_14813b344(void)

void FUN_14813b344(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbee30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b3a2 FUN_14813b3a2 body=93 status=ok
// SIG undefined FUN_14813b3a2(void)

void FUN_14813b3a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbee30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b400 FUN_14813b400 body=126 status=ok
// SIG undefined FUN_14813b400(void)

void FUN_14813b400(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbee30;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813b46f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813b488 FUN_14813b488 body=20 status=ok
// SIG undefined FUN_14813b488(void)

undefined1 FUN_14813b488(longlong param_1)

{
  FUN_14813b49c(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813b49c FUN_14813b49c body=672 status=ok
// SIG undefined FUN_14813b49c(void)

void FUN_14813b49c(longlong param_1,char *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  uint uVar11;
  int *piVar12;
  longlong *plVar13;
  PSRWLOCK SRWLock;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  int local_90;
  undefined4 *local_88;
  int local_80;
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
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14813ad3c(local_38);
  local_58 = (uint *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_144a98d08(&local_58,param_2);
  FUN_144a76c20(&local_98,param_2);
  FUN_144a76c20(&local_88,param_2);
  FUN_144a76c20(&local_78,param_2);
  FUN_144a76c20(&local_68,param_2);
  lVar9 = *(longlong *)(param_1 + 0x10);
  if (local_30 == (char *)0x0) {
    SRWLock = (PSRWLOCK)0x0;
  }
  else {
    SRWLock = (PSRWLOCK)(local_30 + 8);
    AcquireSRWLockShared(SRWLock);
    if (*local_30 == '\x01') {
      plVar13 = (longlong *)(local_30 + 0x10);
      goto LAB_14813b550;
    }
  }
  plVar13 = (longlong *)(lVar9 + 0x50);
LAB_14813b550:
  uVar10 = DAT_14c84634c;
  uVar8 = DAT_14c846348;
  uVar7 = DAT_14c846344;
  uVar6 = DAT_14c84633c._4_4_;
  if ((int)plVar13[1] < 1) {
    piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar12 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar12) {
      iVar14 = 0;
      do {
        puVar2 = local_98 + local_90;
        *local_98 = uVar6;
        puVar3 = local_88 + local_80;
        *local_88 = uVar7;
        puVar4 = local_78 + local_70;
        *local_78 = uVar8;
        puVar5 = local_68 + local_60;
        *local_68 = uVar10;
        iVar14 = iVar14 + 1;
        piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar12 = (int *)(param_2 + 0x3c);
        }
        local_98 = puVar2;
        local_88 = puVar3;
        local_78 = puVar4;
        local_68 = puVar5;
      } while (iVar14 < *piVar12);
    }
  }
  else {
    piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
    if (*param_2 != '\0') {
      piVar12 = (int *)(param_2 + 0x3c);
    }
    if (0 < *piVar12) {
      uVar11 = (int)plVar13[1] - 1;
      iVar14 = 0;
      do {
        puVar1 = local_58 + local_48;
        uVar15 = *local_58;
        if ((int)uVar11 <= (int)*local_58) {
          uVar15 = uVar11;
        }
        if ((int)uVar15 < 1) {
          uVar15 = 0;
        }
        lVar9 = *plVar13;
        lVar16 = (ulonglong)uVar15 * 0x10;
        uVar6 = *(undefined4 *)(lVar9 + 4 + lVar16);
        uVar7 = *(undefined4 *)(lVar9 + 8 + lVar16);
        uVar8 = *(undefined4 *)(lVar9 + 0xc + lVar16);
        puVar2 = local_98 + local_90;
        *local_98 = *(undefined4 *)(lVar9 + lVar16);
        puVar3 = local_88 + local_80;
        *local_88 = uVar6;
        puVar4 = local_78 + local_70;
        *local_78 = uVar7;
        puVar5 = local_68 + local_60;
        *local_68 = uVar8;
        iVar14 = iVar14 + 1;
        piVar12 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
        if (*param_2 != '\0') {
          piVar12 = (int *)(param_2 + 0x3c);
        }
        local_98 = puVar2;
        local_88 = puVar3;
        local_78 = puVar4;
        local_68 = puVar5;
        local_58 = puVar1;
      } while (iVar14 < *piVar12);
    }
  }
  if (SRWLock != (PSRWLOCK)0x0) {
    ReleaseSRWLockShared(SRWLock);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14813b73e FUN_14813b73e body=29 status=ok
// SIG undefined FUN_14813b73e(void)

undefined8 FUN_14813b73e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813b770 FUN_14813b770 body=93 status=ok
// SIG undefined FUN_14813b770(void)

void FUN_14813b770(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbeea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b7ce FUN_14813b7ce body=93 status=ok
// SIG undefined FUN_14813b7ce(void)

void FUN_14813b7ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbeea0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14813b82c FUN_14813b82c body=126 status=ok
// SIG undefined FUN_14813b82c(void)

void FUN_14813b82c(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14adbeea0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014813b89b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14813b8b4 FUN_14813b8b4 body=20 status=ok
// SIG undefined FUN_14813b8b4(void)

undefined1 FUN_14813b8b4(longlong param_1)

{
  FUN_14813b8c8(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14813b8c8 FUN_14813b8c8 body=189 status=ok
// SIG undefined FUN_14813b8c8(void)

void FUN_14813b8c8(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  PSRWLOCK SRWLock;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  char *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_14813ad3c(local_38);
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
      FUN_14785c646(pcVar2 + 0x10,lVar1 + 0x50);
    }
    pcVar2 = pcVar2 + 0x10;
  }
  pcVar2[8] = '\0';
  pcVar2[9] = '\0';
  pcVar2[10] = '\0';
  pcVar2[0xb] = '\0';
  if (*(int *)(pcVar2 + 0xc) < 0) {
    FUN_146ed5086(pcVar2,0);
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



// FUNCTION 14813b986 FUN_14813b986 body=29 status=ok
// SIG undefined FUN_14813b986(void)

undefined8 FUN_14813b986(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14813b9b8 FUN_14813b9b8 body=93 status=ok
// SIG undefined FUN_14813b9b8(void)

void FUN_14813b9b8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14ad81180;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14adbef10;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}


