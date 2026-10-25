// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 146560990 FUN_146560990 body=52 status=ok
// SIG undefined FUN_146560990(void)

void FUN_146560990(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_140ceface();
  FUN_140893b6e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1465609c4 FUN_1465609c4 body=86 status=ok
// SIG undefined FUN_1465609c4(void)

longlong FUN_1465609c4(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28) + 0x68);
  lVar2 = (**(code **)(*plVar1 + 800))(plVar1,param_1 + 0x70,1);
  if (lVar2 != 0) {
    lVar3 = FUN_144a6c4d8();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
        == lVar3 + 0x30)) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 146560a1a FUN_146560a1a body=139 status=ok
// SIG undefined FUN_146560a1a(void)

void FUN_146560a1a(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0xc0);
  uVar1 = 0;
  if ((longlong)*(int *)(param_1 + 200) != 0) {
    lVar2 = (longlong)*(int *)(param_1 + 200) * 0x58;
    lVar3 = lVar3 + 8;
    do {
      FUN_1412391b4(param_1,*(undefined4 *)(lVar3 + -8),*(undefined4 *)(lVar3 + -4),lVar3);
      lVar3 = lVar3 + 0x58;
      lVar2 = lVar2 + -0x58;
    } while (lVar2 != 0);
    uVar1 = *(undefined4 *)(param_1 + 200);
    lVar3 = *(longlong *)(param_1 + 0xc0);
  }
  FUN_140cefbae(lVar3,uVar1);
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) == 0) {
    return;
  }
  FUN_148990022(param_1 + 0xc0);
  return;
}



// FUNCTION 146560aa6 FUN_146560aa6 body=66 status=ok
// SIG undefined FUN_146560aa6(void)

void FUN_146560aa6(longlong param_1)

{
  longlong lVar1;
  
  FUN_140cef0ca();
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_145797fa4(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 146560ae8 FUN_146560ae8 body=107 status=ok
// SIG undefined FUN_146560ae8(void)

void FUN_146560ae8(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  lVar1 = *(longlong *)(param_1 + 0x80);
  if (lVar1 != 0) {
    *(undefined8 *)(param_1 + 0x80) = 0;
    FUN_145797fa4(lVar1);
    FUN_1400020a8(lVar1);
  }
  *(byte *)(param_1 + 0x89) = *(byte *)(param_1 + 0x89) & 0xfc;
  FUN_140893b6e(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 146560b54 FUN_146560b54 body=29 status=ok
// SIG undefined FUN_146560b54(void)

undefined8 FUN_146560b54(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560b72 FUN_146560b72 body=29 status=ok
// SIG undefined FUN_146560b72(void)

undefined8 FUN_146560b72(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560b90 FUN_146560b90 body=118 status=ok
// SIG undefined FUN_146560b90(void)

void FUN_146560b90(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42b1a0;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar3;
  *puVar1 = &PTR_FUN_14b42b130;
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



// FUNCTION 146560c06 FUN_146560c06 body=132 status=ok
// SIG undefined FUN_146560c06(void)

void FUN_146560c06(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146560c8c FUN_146560c8c body=108 status=ok
// SIG undefined FUN_146560c8c(void)

void FUN_146560c8c(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x38,8);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2 >> 3;
    iVar3 = SUB164(auVar1 * ZEXT816(0x2492492492492493),8);
    iVar4 = 0x7fffffff;
    if ((int)param_2 <= iVar3) {
      iVar4 = iVar3;
    }
  }
  if (iVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar4,0x38,8);
  }
  return;
}



// FUNCTION 146560cf8 FUN_146560cf8 body=95 status=ok
// SIG undefined FUN_146560cf8(void)

void FUN_146560cf8(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 5,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 146560d58 FUN_146560d58 body=29 status=ok
// SIG undefined FUN_146560d58(void)

undefined8 FUN_146560d58(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146560d76 FUN_146560d76 body=132 status=ok
// SIG undefined FUN_146560d76(void)

void FUN_146560d76(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146560dfa FUN_146560dfa body=298 status=ok
// SIG undefined FUN_146560dfa(void)

longlong * FUN_146560dfa(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1446efa72(param_1,0,3,0x10);
  *(undefined4 *)(param_1 + 1) = 3;
  puVar3 = (undefined8 *)*param_1;
  uVar4 = *param_2;
  plVar5 = (longlong *)param_2[1];
  if (plVar5 == (longlong *)0x0) {
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b42c8b0;
    puVar3[3] = uVar4;
    puVar3[4] = 0;
    puVar3[5] = FUN_14615d0ae;
  }
  else {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    *puVar3 = &PTR_LAB_149e020b0;
    LOCK();
    UNLOCK();
    lVar7 = DAT_14c758608 + 1;
    lVar6 = DAT_14c758608 + 1;
    if (lVar7 == 0) {
      LOCK();
      UNLOCK();
      lVar7 = DAT_14c758608 + 2;
      lVar6 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar6;
    puVar3[2] = lVar7;
    *puVar3 = &PTR_FUN_14b42c8b0;
    puVar3[3] = uVar4;
    puVar3[4] = plVar5;
    LOCK();
    *(int *)((longlong)plVar5 + 0xc) = *(int *)((longlong)plVar5 + 0xc) + 1;
    UNLOCK();
    puVar3[5] = FUN_14615d0ae;
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
  return param_1;
}



// FUNCTION 146560f24 FUN_146560f24 body=66 status=ok
// SIG undefined FUN_146560f24(void)

undefined8 * FUN_146560f24(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42c8b0;
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



// FUNCTION 146560f66 FUN_146560f66 body=107 status=ok
// SIG undefined FUN_146560f66(void)

void FUN_146560f66(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x68,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x68)) {
      uVar2 = uVar1 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x68,8);
  }
  return;
}



// FUNCTION 146560fd2 FUN_146560fd2 body=132 status=ok
// SIG undefined FUN_146560fd2(void)

void FUN_146560fd2(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146561056 FUN_146561056 body=111 status=ok
// SIG undefined FUN_146561056(void)

void FUN_146561056(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1465610c6 FUN_1465610c6 body=68 status=ok
// SIG undefined FUN_1465610c6(void)

undefined8 * FUN_1465610c6(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42bb30;
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



// FUNCTION 14656110a FUN_14656110a body=118 status=ok
// SIG undefined FUN_14656110a(void)

void FUN_14656110a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42bb30;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146561180 FUN_146561180 body=132 status=ok
// SIG undefined FUN_146561180(void)

void FUN_146561180(longlong param_1,int param_2)

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



// FUNCTION 146561204 FUN_146561204 body=216 status=ok
// SIG undefined FUN_146561204(void)

undefined8 * FUN_146561204(longlong *param_1,undefined8 *param_2,longlong *param_3)

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



// FUNCTION 1465612de FUN_1465612de body=124 status=ok
// SIG undefined FUN_1465612de(void)

void FUN_1465612de(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    if (((int)param_2[1] != 0) && (param_2 = (longlong *)*param_2, param_2 != (longlong *)0x0)) {
      (**(code **)(*param_2 + 0x40))(param_2,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14656135c FUN_14656135c body=24 status=ok
// SIG undefined FUN_14656135c(void)

bool FUN_14656135c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146561374 FUN_146561374 body=29 status=ok
// SIG undefined FUN_146561374(void)

undefined8 FUN_146561374(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561392 FUN_146561392 body=66 status=ok
// SIG undefined FUN_146561392(void)

undefined8 * FUN_146561392(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42c010;
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



// FUNCTION 1465613d4 FUN_1465613d4 body=29 status=ok
// SIG undefined FUN_1465613d4(void)

undefined8 FUN_1465613d4(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465613fc FUN_1465613fc body=26 status=ok
// SIG undefined FUN_1465613fc(void)

bool FUN_1465613fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146561416 FUN_146561416 body=24 status=ok
// SIG undefined FUN_146561416(void)

bool FUN_146561416(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 14656142e FUN_14656142e body=26 status=ok
// SIG undefined FUN_14656142e(void)

bool FUN_14656142e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146561448 FUN_146561448 body=26 status=ok
// SIG undefined FUN_146561448(void)

bool FUN_146561448(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146561462 FUN_146561462 body=428 status=ok
// SIG undefined FUN_146561462(void)

longlong * FUN_146561462(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146561542:
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b42db70;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146561542;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_149e020b0;
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
    *puVar5 = &PTR_FUN_14b42db70;
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



// FUNCTION 14656160e FUN_14656160e body=175 status=ok
// SIG undefined FUN_14656160e(void)

undefined8 * FUN_14656160e(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *_Dst;
  byte bVar1;
  ushort uVar2;
  ulonglong uVar3;
  code *pcVar4;
  
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_14b42ccc0;
  FUN_140cfc4c2(param_1 + 5);
  _Dst = param_1 + 7;
  bVar1 = *(byte *)(param_3 + 4);
  uVar2 = *(ushort *)(param_3 + 3);
  *(ushort *)(param_1 + 10) = uVar2;
  if (uVar2 < 0x19) {
    uVar3 = (ulonglong)((uint)bVar1 * 0x120);
    pcVar4 = *(code **)((longlong)&DAT_14c9a85b8 + uVar3);
    if ((pcVar4 == (code *)0x0) &&
       (pcVar4 = *(code **)((longlong)&DAT_14c9a85b0 + uVar3), pcVar4 == (code *)0x0)) {
      memcpy(_Dst,param_3,(longlong)*(int *)((longlong)&DAT_14c9a8510 + uVar3));
    }
    else {
      (*pcVar4)(_Dst,param_3);
    }
  }
  else {
    *_Dst = *param_3;
    *param_3 = 0;
    *(undefined2 *)(param_3 + 3) = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_3 + 4);
  *(undefined1 *)(param_3 + 4) = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1465616be FUN_1465616be body=440 status=ok
// SIG undefined FUN_1465616be(void)

void FUN_1465616be(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  char *pcVar12;
  
  lVar4 = FUN_14479d2ce(*param_2 + 0x138);
  if ((lVar4 != 0) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    pcVar12 = *(char **)(param_1 + 8);
    pcVar1 = pcVar12 + (longlong)*(int *)(param_1 + 0x10) * 0x18;
    do {
      if ((longlong)*(int *)(pcVar12 + 0x10) != 0) {
        plVar10 = *(longlong **)(pcVar12 + 8);
        lVar11 = (longlong)*(int *)(pcVar12 + 0x10) * 0x18;
        do {
          lVar8 = plVar10[1];
          if (lVar8 == 0) {
            uVar6 = FUN_140e391b0();
            lVar8 = FUN_14477b664(uVar6);
            plVar10[1] = lVar8;
          }
          lVar7 = plVar10[2];
          if (lVar7 == 0) {
            if ((lVar8 != 0) && (*plVar10 != 0)) {
              plVar2 = *(longlong **)(lVar8 + 0xb8);
              if ((plVar2 == (longlong *)0x0) ||
                 (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
                plVar10[2] = 0;
              }
              else {
                uVar6 = (**(code **)(*plVar2 + 0x110))(plVar2);
                lVar7 = FUN_144aff482(uVar6,plVar10);
                plVar10[2] = lVar7;
                if (lVar7 != 0) goto LAB_146561738;
              }
            }
          }
          else {
LAB_146561738:
            puVar9 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar7 + 8) != (undefined4 *)0x0) {
              puVar9 = *(undefined4 **)(lVar7 + 8);
            }
            lVar5 = FUN_140d2f994(puVar9);
            lVar8 = *param_2;
            cVar3 = *pcVar12;
            if (lVar5 == *(longlong *)(lVar8 + 0x10)) {
              if (cVar3 == '\0') {
                FUN_1410b1524(lVar8,lVar7);
              }
              else if (cVar3 == '\x02') {
                FUN_143e3c7b4(lVar8,lVar7);
              }
              else if (cVar3 == '\x01') {
                FUN_14109b7da(lVar8,lVar7);
              }
            }
            else if (cVar3 == '\0') {
              FUN_1410b135e(lVar4,lVar7);
            }
            else if (cVar3 == '\x02') {
              FUN_148973f94(lVar4,lVar7);
            }
            else if (cVar3 == '\x01') {
              FUN_1457f0af6(lVar4,lVar7);
            }
          }
          plVar10 = plVar10 + 3;
          lVar11 = lVar11 + -0x18;
        } while (lVar11 != 0);
      }
      pcVar12 = pcVar12 + 0x18;
    } while (pcVar12 != pcVar1);
  }
  return;
}



// FUNCTION 146561876 FUN_146561876 body=224 status=ok
// SIG undefined FUN_146561876(void)

undefined8 * FUN_146561876(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xffffffffffffffff;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 2;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  param_1[0x21] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x27] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  FUN_14485c47a(param_1 + 0x27,param_3);
  param_1[0x28] = 0;
  return param_1;
}



// FUNCTION 146561956 FUN_146561956 body=74 status=ok
// SIG undefined FUN_146561956(void)

void FUN_146561956(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 0x135) = 1;
  uVar2 = (**(code **)(*param_1 + 0xa58))();
  cVar1 = (**(code **)(*param_1 + 0x3b8))(param_1);
  if ((char)uVar2 == cVar1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014656199d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3b0))(param_1,uVar2);
  return;
}



// FUNCTION 1465619a0 FUN_1465619a0 body=272 status=ok
// SIG undefined FUN_1465619a0(void)

void FUN_1465619a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 *local_a8;
  uint uStack_a0;
  uint uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_a8 = (undefined8 *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_37 = 0;
  uStack_30 = 0;
  uStack_2f = 0;
  local_b0 = DAT_14cb8c168;
  local_98 = 0;
  local_90 = 0;
  uStack_a0 = 1;
  uStack_9c = 0;
  FUN_1446f84a2(&local_a8,0);
  uVar1 = uStack_a0;
  *local_a8 = DAT_14cb8c170;
  lVar2 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar1);
  }
  uVar1 = uStack_a0;
  local_a8[lVar2] = DAT_14cb8c178;
  lVar2 = (longlong)(int)uStack_a0;
  uStack_a0 = uStack_a0 + 1;
  if (uStack_9c < uStack_a0) {
    FUN_1446f84a2(&local_a8,uVar1);
  }
  local_a8[lVar2] = DAT_14cb8c180;
  FUN_140ab6af6(param_2,&local_b0);
  FUN_14072ff4a(&local_b0);
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146561acc FUN_146561acc body=138 status=ok
// SIG undefined FUN_146561acc(void)

longlong * FUN_146561acc(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42d7e0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b258250;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146561b56 FUN_146561b56 body=29 status=ok
// SIG undefined FUN_146561b56(void)

undefined8 FUN_146561b56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561b74 FUN_146561b74 body=138 status=ok
// SIG undefined FUN_146561b74(void)

longlong * FUN_146561b74(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x48,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42d810;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b26be50;
  plVar3[7] = 0;
  plVar3[8] = 0;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146561bfe FUN_146561bfe body=29 status=ok
// SIG undefined FUN_146561bfe(void)

undefined8 FUN_146561bfe(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561c1c FUN_146561c1c body=146 status=ok
// SIG undefined FUN_146561c1c(void)

longlong * FUN_146561c1c(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x50,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14b42d840;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[6] = 0;
  plVar3[2] = (longlong)&PTR_FUN_14b277ac0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  plVar3[9] = 2;
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 146561cae FUN_146561cae body=29 status=ok
// SIG undefined FUN_146561cae(void)

undefined8 FUN_146561cae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561ccc FUN_146561ccc body=118 status=ok
// SIG undefined FUN_146561ccc(void)

void FUN_146561ccc(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42db70;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146561d42 FUN_146561d42 body=29 status=ok
// SIG undefined FUN_146561d42(void)

undefined8 FUN_146561d42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561d60 FUN_146561d60 body=118 status=ok
// SIG undefined FUN_146561d60(void)

void FUN_146561d60(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b42a950;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42dc00;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146561dd6 FUN_146561dd6 body=149 status=ok
// SIG undefined FUN_146561dd6(void)

undefined8 *
FUN_146561dd6(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_14b42de00;
  param_1[3] = *param_2;
  lVar1 = param_2[1];
  param_1[4] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[5] = 0;
  param_1[6] = 0;
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfc;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *param_1 = &PTR_FUN_14b42dde0;
  param_1[10] = 0;
  FUN_14485c47a(param_1 + 10,param_3);
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = param_4;
  return param_1;
}



// FUNCTION 146561e6c FUN_146561e6c body=29 status=ok
// SIG undefined FUN_146561e6c(void)

undefined8 FUN_146561e6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561e8a FUN_146561e8a body=29 status=ok
// SIG undefined FUN_146561e8a(void)

undefined8 FUN_146561e8a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146561ea8 FUN_146561ea8 body=423 status=ok
// SIG undefined FUN_146561ea8(void)

void FUN_146561ea8(longlong *param_1,longlong param_2,undefined8 *param_3)

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
  if ((int)param_1[1] != 4) {
    FUN_1446efa72(param_1,0,4,0x10);
    *(undefined4 *)(param_1 + 1) = 4;
  }
  puVar5 = (undefined8 *)*param_1;
  plVar6 = *(longlong **)(param_2 + 0x10);
  if (plVar6 == (longlong *)0x0) {
LAB_146561f7e:
    *puVar5 = &PTR_LAB_14b42a6d0;
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
    *puVar5 = &PTR_FUN_14b42e010;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = uVar4;
    *(undefined4 *)(puVar5 + 6) = uVar3;
  }
  else {
    iVar10 = (int)plVar6[1];
    do {
      if (iVar10 == 0) goto LAB_146561f7e;
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
    uVar7 = *(undefined8 *)(param_2 + 8);
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
    *puVar5 = &PTR_LAB_14b42a6d0;
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
    *puVar5 = &PTR_FUN_14b42e010;
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
                    /* WARNING: Could not recover jumptable at 0x000146562037. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x10))(plVar6);
        return;
      }
    }
  }
  return;
}



// FUNCTION 146562050 FUN_146562050 body=29 status=ok
// SIG undefined FUN_146562050(void)

undefined8 FUN_146562050(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14656206e FUN_14656206e body=29 status=ok
// SIG undefined FUN_14656206e(void)

bool FUN_14656206e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 14656208c FUN_14656208c body=26 status=ok
// SIG undefined FUN_14656208c(void)

bool FUN_14656208c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1465620a6 FUN_1465620a6 body=24 status=ok
// SIG undefined FUN_1465620a6(void)

bool FUN_1465620a6(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1465620be FUN_1465620be body=108 status=ok
// SIG undefined FUN_1465620be(void)

void FUN_1465620be(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x20) + lVar3) == param_2) {
        lVar3 = (lVar3 >> 4) * -0x71c71c71c71c71c7;
        uVar2 = (uint)lVar3;
        if ((int)uVar2 < 0) {
          return;
        }
        if (iVar1 <= (int)uVar2) {
          return;
        }
        *(undefined8 *)
         (*(longlong *)(param_1 + 0x20) + 0x30 + (ulonglong)(uVar2 & 0x7fffffff) * 0x90) = 0;
        FUN_14586327e(param_1,lVar3,0);
        return;
      }
      lVar3 = lVar3 + 0x90;
    } while ((longlong)iVar1 * 0x90 != lVar3);
  }
  return;
}



// FUNCTION 146562130 FUN_146562130 body=76 status=ok
// SIG undefined FUN_146562130(void)

undefined8 FUN_146562130(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_145834054(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000146562171. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 14656219e FUN_14656219e body=68 status=ok
// SIG undefined FUN_14656219e(void)

undefined8 * FUN_14656219e(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b42feb0;
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



// FUNCTION 1465621e2 FUN_1465621e2 body=118 status=ok
// SIG undefined FUN_1465621e2(void)

void FUN_1465621e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if ((int)param_2[1] != 4) {
    FUN_1446efa72(param_2,0,4,0x10);
    *(undefined4 *)(param_2 + 1) = 4;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8830;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42feb0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = uVar3;
  return;
}



// FUNCTION 146562258 FUN_146562258 body=85 status=ok
// SIG undefined FUN_146562258(void)

void FUN_146562258(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b42ff30;
  return;
}



// FUNCTION 1465622ae FUN_1465622ae body=29 status=ok
// SIG undefined FUN_1465622ae(void)

undefined8 FUN_1465622ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465622cc FUN_1465622cc body=146 status=ok
// SIG undefined FUN_1465622cc(void)

void FUN_1465622cc(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc30,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc30)) {
      uVar5 = uVar4 / 0xc30 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc30,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14656236a FUN_14656236a body=29 status=ok
// SIG undefined FUN_14656236a(void)

undefined8 FUN_14656236a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146562388 FUN_146562388 body=125 status=ok
// SIG undefined FUN_146562388(void)

undefined8 * FUN_146562388(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = param_3;
  local_20 = param_2;
  lVar1 = FUN_14479d2ce();
  if (lVar1 != 0) {
    uVar2 = FUN_140eca14a();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      goto LAB_1465623de;
    }
  }
  uVar2 = 0;
LAB_1465623de:
  *param_1 = uVar2;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146562406 FUN_146562406 body=31 status=ok
// SIG undefined FUN_146562406(void)

void FUN_146562406(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  FUN_140c4a7e8(uVar1,param_2,1);
  return;
}



// FUNCTION 14656242c FUN_14656242c body=239 status=ok
// SIG undefined FUN_14656242c(void)

void FUN_14656242c(longlong param_1)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined1 local_44;
  undefined1 local_3f;
  ushort local_3e;
  undefined1 local_3b;
  ushort local_3a;
  undefined1 local_37;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(char *)(*(longlong *)(param_1 + 0x138) + 0x230) == '\0') {
    plVar1 = (longlong *)FUN_1403cba6c(*(undefined8 *)(param_1 + 0x38));
    if (plVar1 != (longlong *)0x0) {
      local_4c = 0;
      local_44 = 0;
      local_3f = 0;
      local_3e = local_3e & 0xff;
      local_3b = 0;
      local_3a = local_3a & 0xff;
      local_37 = 0;
      local_34 = 0xffffffff;
      uStack_30 = 0;
      uStack_2c = 0xffffffff;
      uStack_28 = 0;
      local_24._0_2_ = (ushort)(byte)local_24;
      local_24 = local_24 & 0xffffff;
      FUN_14079976a(&local_34);
      local_3e = 0x101;
      local_3a = 0x100;
      local_24 = 0x1000101;
      (**(code **)(*plVar1 + 0xd78))(plVar1,&DAT_14cb8ce90,local_50);
      local_58 = *(undefined8 *)(param_1 + 0x160);
      local_68 = *(undefined4 *)(param_1 + 0x150);
      uStack_64 = *(undefined4 *)(param_1 + 0x154);
      uStack_60 = *(undefined4 *)(param_1 + 0x158);
      uStack_5c = *(undefined4 *)(param_1 + 0x15c);
      (**(code **)(*plVar1 + 0x6d0))(plVar1,&local_68,*(undefined8 *)(param_1 + 0x168),0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14656251c FUN_14656251c body=242 status=ok
// SIG undefined FUN_14656251c(void)

undefined4 * FUN_14656251c(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  longlong *plVar5;
  uint uVar6;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8ceb0 >> 0x10);
    uVar6 = (uint)DAT_14cb8ceb0 & 0xffff;
    plVar5 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_2[8];
    }
    iVar4 = *(int *)((longlong)plVar5 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8ceb0 >> 0x20) + ((uint)DAT_14cb8ceb0 << 0x10 | uVar6)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar4 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar4 * 0x38) == DAT_14cb8ceb0) {
          if (lVar1 + 8 != 0 && lVar1 != 0) {
            FUN_1405b801a(lVar1 + 8,&local_30,&DAT_14c8464e0);
            *(undefined8 *)(param_1 + 4) = local_20;
            *param_1 = local_30;
            param_1[1] = uStack_2c;
            param_1[2] = uStack_28;
            param_1[3] = uStack_24;
            uVar3 = 1;
            goto LAB_1465625e1;
          }
          break;
        }
        iVar4 = *(int *)(lVar1 + 0x30);
      } while (iVar4 != -1);
    }
  }
  uVar3 = 0;
LAB_1465625e1:
  *(undefined1 *)(param_1 + 6) = uVar3;
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 146562610 FUN_146562610 body=186 status=ok
// SIG undefined FUN_146562610(void)

undefined4 * FUN_146562610(undefined4 *param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  if ((int)param_2[1] != *(int *)((longlong)param_2 + 0x34)) {
    uVar2 = (uint)((ulonglong)DAT_14cb8d418 >> 0x10);
    uVar5 = (uint)DAT_14cb8d418 & 0xffff;
    plVar4 = param_2 + 7;
    if ((longlong *)param_2[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[8];
    }
    iVar6 = *(int *)((longlong)plVar4 +
                    (ulonglong)
                    ((int)param_2[9] - 1U &
                    (int)((ulonglong)DAT_14cb8d418 >> 0x20) + ((uint)DAT_14cb8d418 << 0x10 | uVar5)
                    + (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        lVar1 = *param_2 + (longlong)iVar6 * 0x38;
        if (*(longlong *)(*param_2 + (longlong)iVar6 * 0x38) == DAT_14cb8d418) {
          if (lVar1 + 8 == 0 || lVar1 == 0) goto LAB_14656269e;
          uVar7 = FUN_144a7b41a(lVar1 + 8,0);
          *param_1 = uVar7;
          uVar3 = 1;
          break;
        }
        iVar6 = *(int *)(lVar1 + 0x30);
        uVar3 = 0;
      } while (iVar6 != -1);
      goto LAB_1465626b0;
    }
  }
LAB_14656269e:
  uVar3 = 0;
LAB_1465626b0:
  *(undefined1 *)(param_1 + 1) = uVar3;
  return param_1;
}



// FUNCTION 1465626ca FUN_1465626ca body=65 status=ok
// SIG undefined FUN_1465626ca(void)

void FUN_1465626ca(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + -0x30);
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x9c) & 9) == 1)) {
    FUN_141062a52(lVar1,0);
    FUN_144907e2c(*(undefined8 *)(param_1 + -0x30),0,1,0);
    return;
  }
  return;
}



// FUNCTION 14656270c FUN_14656270c body=52 status=ok
// SIG undefined FUN_14656270c(void)

void FUN_14656270c(longlong param_1)

{
  FUN_140115e24();
  FUN_1402d7906(param_1 + 0x500,param_1 + 0x3d0);
  FUN_1407107b6(param_1 + 0x3d8,param_1);
  return;
}



// FUNCTION 146562762 FUN_146562762 body=40 status=ok
// SIG undefined FUN_146562762(void)

undefined8 FUN_146562762(undefined8 param_1,int param_2)

{
  FUN_145adf5da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14656278a FUN_14656278a body=29 status=ok
// SIG undefined FUN_14656278a(void)

undefined8 FUN_14656278a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465627a8 FUN_1465627a8 body=93 status=ok
// SIG undefined FUN_1465627a8(void)

void FUN_1465627a8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b432880;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b432810;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 146562806 FUN_146562806 body=29 status=ok
// SIG undefined FUN_146562806(void)

bool FUN_146562806(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146562824 FUN_146562824 body=26 status=ok
// SIG undefined FUN_146562824(void)

bool FUN_146562824(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 14656283e FUN_14656283e body=24 status=ok
// SIG undefined FUN_14656283e(void)

bool FUN_14656283e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146562856 FUN_146562856 body=132 status=ok
// SIG undefined FUN_146562856(void)

void FUN_146562856(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1465628da FUN_1465628da body=85 status=ok
// SIG undefined FUN_1465628da(void)

void FUN_1465628da(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b432a60;
  return;
}



// FUNCTION 146562930 FUN_146562930 body=29 status=ok
// SIG undefined FUN_146562930(void)

undefined8 FUN_146562930(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14656294e FUN_14656294e body=9 status=ok
// SIG undefined FUN_14656294e(void)

void FUN_14656294e(longlong param_1)

{
  FUN_140333e92(param_1 + 0x10);
  return;
}



// FUNCTION 146562958 FUN_146562958 body=29 status=ok
// SIG undefined FUN_146562958(void)

undefined8 FUN_146562958(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146562975 FUN_146562975 body=177 status=ok
// SIG undefined FUN_146562975(void)

undefined8 FUN_146562975(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_140efebc0();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146562a28 FUN_146562a28 body=132 status=ok
// SIG undefined FUN_146562a28(void)

void FUN_146562a28(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146562aac FUN_146562aac body=110 status=ok
// SIG undefined FUN_146562aac(void)

void FUN_146562aac(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40));
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}



// FUNCTION 146562b24 FUN_146562b24 body=93 status=ok
// SIG undefined FUN_146562b24(void)

void FUN_146562b24(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b433010;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146562b82 FUN_146562b82 body=93 status=ok
// SIG undefined FUN_146562b82(void)

void FUN_146562b82(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14b4330f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146562be0 FUN_146562be0 body=348 status=ok
// SIG undefined FUN_146562be0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146562be0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  longlong local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  iVar5 = 0;
  local_50 = lVar2;
  if (*(int *)(param_1 + 0x2a0) != 0) {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x2a0);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (local_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x30), plVar4 != (longlong *)0x0)) {
        *(undefined8 *)(lVar3 + 0x30) = 0;
        (**(code **)*plVar4)(plVar4,0);
        _DAT_14cb8d79c = _DAT_14cb8d79c + -1;
        *plVar4 = (longlong)DAT_14cb8d790;
        DAT_14cb8d790 = plVar4;
      }
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar5) || (local_70 != lVar2)) || (local_80 != plVar1));
  }
  FUN_140fa7ee4(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 146562d3e FUN_146562d3e body=85 status=ok
// SIG undefined FUN_146562d3e(void)

void FUN_146562d3e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_140e01ba8(&DAT_14cb8d7c0);
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[1] = 0;
  *puVar1 = &PTR_FUN_14b3e4ad0;
  puVar1[3] = 0x4348000044fa0000;
  puVar1[4] = 0x44bb800040400000;
  *(undefined4 *)(puVar1 + 5) = 0x44bbe000;
  return;
}



// FUNCTION 146562d94 FUN_146562d94 body=316 status=ok
// SIG undefined FUN_146562d94(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_146562d94(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_68;
  int iStack_64;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  uint local_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar1 = (longlong *)(param_1 + 0x278);
  lVar2 = param_1 + 0x288;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  uStack_40 = 0;
  uStack_50 = lVar2;
  if (*(int *)(param_1 + 0x2a0) == 0) {
    iVar5 = 0;
  }
  else {
    FUN_1449c0562(&local_58);
    iVar5 = *(int *)(param_1 + 0x2a0);
  }
  uStack_60 = CONCAT44(uStack_3c,uStack_40);
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_78 = (undefined4)local_58;
  uStack_74 = local_58._4_4_;
  uStack_70 = (undefined4)uStack_50;
  uStack_6c = uStack_50._4_4_;
  local_80 = plVar1;
  if ((iStack_44 != iVar5) || (uStack_50 != lVar2)) {
    do {
      lVar3 = *(longlong *)(*local_80 + 0x10 + (longlong)iStack_64 * 0x20);
      if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x30), plVar4 != (longlong *)0x0)) {
        *(undefined8 *)(lVar3 + 0x30) = 0;
        (**(code **)*plVar4)(plVar4,0);
        _DAT_14cb8d7cc = _DAT_14cb8d7cc + -1;
        *plVar4 = (longlong)DAT_14cb8d7c0;
        DAT_14cb8d7c0 = plVar4;
      }
      local_68 = local_68 & ~uStack_74;
      FUN_1449c0562(&local_78);
    } while (((iStack_64 != iVar5) || (CONCAT44(uStack_6c,uStack_70) != lVar2)) ||
            (local_80 != plVar1));
  }
  FUN_140fa7ee4(param_1);
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146562ed2 FUN_146562ed2 body=331 status=ok
// SIG undefined FUN_146562ed2(void)

void FUN_146562ed2(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined1 local_50 [4];
  undefined1 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_2 != (longlong *)0x0) && (0 < *(int *)(param_1 + 0x2e0))) {
    plVar2 = (longlong *)(**(code **)(*param_2 + 8))(param_2);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = FUN_144a6c4d8();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
          lVar3 + 0x30)) {
        uVar4 = FUN_140437988();
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar4);
        if (plVar2 != (longlong *)0x0) {
          uVar4 = FUN_140437988();
          plVar5 = (longlong *)FUN_144718840(plVar2,uVar4);
          if ((plVar2 != plVar5) && (plVar5 != (longlong *)0x0)) {
            uVar4 = (**(code **)(*plVar5 + 0x18))(plVar5);
            iVar1 = *(int *)(param_1 + 0x2e0);
            if ((longlong)iVar1 != 0) {
              lVar3 = *(longlong *)(param_1 + 0x2d8);
              lVar6 = 0;
              do {
                local_4c = 0;
                local_60 = *(undefined8 *)(lVar3 + 8 + lVar6);
                local_58 = 0xffffffff;
                local_70 = *(undefined8 *)(lVar3 + lVar6);
                local_68 = 0xffffffff;
                FUN_140f8b8f2(uVar4,&local_70,&local_60,local_50);
                lVar6 = lVar6 + 0x10;
              } while ((longlong)iVar1 * 0x10 != lVar6);
            }
          }
        }
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14656301e FUN_14656301e body=157 status=ok
// SIG undefined FUN_14656301e(void)

undefined4 FUN_14656301e(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined1 auStack_968 [40];
  longlong local_940;
  undefined1 local_938;
  undefined1 local_930 [1160];
  undefined1 local_4a8;
  undefined1 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_968;
  FUN_144a44f9a(local_930,param_1);
  local_4a8 = 0;
  local_28 = 0;
  local_940 = 0;
  if (*param_2 != 0) {
    local_940 = param_2[1];
  }
  local_938 = 0;
  FUN_140931e3c(param_1,&local_940,local_930);
  uVar1 = FUN_14136cc74(local_930,param_2);
  FUN_14023c33c(local_930);
  if ((local_20 ^ (ulonglong)auStack_968) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465630bc FUN_1465630bc body=113 status=ok
// SIG undefined FUN_1465630bc(void)

undefined4 * FUN_1465630bc(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar1 = 0;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0xffff;
  FUN_140fe4ff6(uVar1,param_1,&local_38);
  *param_2 = local_20;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14656312e FUN_14656312e body=283 status=ok
// SIG undefined FUN_14656312e(void)

ulonglong FUN_14656312e(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  ulonglong unaff_RBX;
  int iVar4;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  int iStack_5c;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  uint local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = (longlong *)(param_1 + 0x70);
  lVar2 = param_1 + 0x80;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = lVar2;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar4 = *(int *)(param_1 + 0x98);
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = plVar1;
  if ((iStack_3c == iVar4) && (uStack_48 == lVar2)) {
    unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
  }
  else {
    do {
      iVar3 = *(int *)(*local_78 + 0x10 + (longlong)iStack_5c * 0x30);
      unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),iVar3 < 1);
      if (0 < iVar3) break;
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != plVar1 || (CONCAT44(uStack_64,uStack_68) != lVar2 || iStack_5c != iVar4));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14656324a FUN_14656324a body=309 status=ok
// SIG undefined FUN_14656324a(void)

void FUN_14656324a(undefined8 param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    uVar3 = FUN_140ba0042();
    plVar4 = (longlong *)(**(code **)(*param_2 + 0x288))(param_2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      uVar3 = FUN_140ba0042();
      plVar5 = (longlong *)FUN_144718840(plVar4,uVar3);
      if ((plVar4 != plVar5) && (plVar5 != (longlong *)0x0)) {
        local_30 = (undefined8 *)0x0;
        local_28 = 0;
        FUN_1446efa72(&local_30,0,3,0x10);
        puVar1 = local_30;
        local_28 = 3;
        *local_30 = &PTR_LAB_14a541440;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar2 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar2 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar2;
        local_30[2] = lVar6;
        *local_30 = &PTR_FUN_14b434810;
        local_30[3] = 0;
        FUN_14485c47a(local_30 + 3,param_1);
        puVar1[4] = FUN_145d6a448;
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_30);
        FUN_1449db362(&local_30);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563380 FUN_146563380 body=128 status=ok
// SIG undefined FUN_146563380(void)

void FUN_146563380(longlong param_1,short *param_2)

{
  longlong lVar1;
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (-1 < *param_2) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0xffff;
    lVar1 = FUN_140b9fe48();
    if (lVar1 != 0) {
      local_39 = 1;
      FUN_1414ba756(param_1 + 0x40,&local_38,lVar1 + 0x2c);
    }
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563402 FUN_146563402 body=207 status=ok
// SIG undefined FUN_146563402(void)

void FUN_146563402(undefined8 param_1,short *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (-1 < *param_2) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_60 = 0xffff;
    lVar1 = FUN_140b9fe48();
    if (lVar1 != 0) {
      local_48 = DAT_14cb8dd00;
      local_50 = DAT_14cb8dcf8;
      FUN_1448075d0(local_40);
      uVar2 = FUN_144a8232a();
      local_80 = 0;
      local_88 = 0;
      FUN_141689c3a(lVar1,&local_78,uVar2,local_40);
      if (local_28 != 0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465634f4 FUN_1465634f4 body=85 status=ok
// SIG undefined FUN_1465634f4(void)

void FUN_1465634f4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434190;
  return;
}



// FUNCTION 14656354a FUN_14656354a body=29 status=ok
// SIG undefined FUN_14656354a(void)

undefined8 FUN_14656354a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146563568 FUN_146563568 body=132 status=ok
// SIG undefined FUN_146563568(void)

void FUN_146563568(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1465635ee FUN_1465635ee body=296 status=ok
// SIG undefined FUN_1465635ee(void)

undefined4 * FUN_1465635ee(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_145d6aa5e(param_1,local_48);
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  local_40[1] = 0;
  local_40[2] = 0;
  *(undefined8 *)((longlong)local_40 + 0x11) = 0;
  *(undefined8 *)((longlong)local_40 + 0x19) = 0;
  *(undefined4 *)(local_40 + 5) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x20) ^ (uint)uVar1;
  cVar3 = FUN_145d6a9aa(param_1,uVar8,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
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
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x2c) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 5) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_145d6ab4e(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563718 FUN_146563718 body=93 status=ok
// SIG undefined FUN_146563718(void)

void FUN_146563718(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a541440;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b434810;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146563776 FUN_146563776 body=132 status=ok
// SIG undefined FUN_146563776(void)

void FUN_146563776(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1465637fc FUN_1465637fc body=24 status=ok
// SIG undefined FUN_1465637fc(void)

bool FUN_1465637fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146563814 FUN_146563814 body=93 status=ok
// SIG undefined FUN_146563814(void)

void FUN_146563814(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3e9ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4348f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146563872 FUN_146563872 body=239 status=ok
// SIG undefined FUN_146563872(void)

undefined8 FUN_146563872(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1ca5b0;
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
  *local_30 = &PTR_FUN_14b435250;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_143e68a2e;
  FUN_14123f6f0(&DAT_14cb10980,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563962 FUN_146563962 body=239 status=ok
// SIG undefined FUN_146563962(void)

undefined8 FUN_146563962(undefined8 param_1,undefined8 param_2)

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
  *local_30 = &PTR_LAB_14a1c8660;
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
  *local_30 = &PTR_FUN_14b4352c0;
  local_30[3] = 0;
  FUN_14485c47a(local_30 + 3,param_2);
  puVar1[4] = FUN_1415bd476;
  FUN_140aa43ac(&DAT_14cb10a20,param_1,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563a52 FUN_146563a52 body=244 status=ok
// SIG undefined FUN_146563a52(void)

undefined8
FUN_146563a52(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined8 *local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = (undefined8 *)0x0;
  local_38 = 0;
  FUN_1446efa72(&local_40,0,3,0x10);
  puVar1 = local_40;
  local_38 = 3;
  *local_40 = &PTR_LAB_14ab18ff0;
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
  local_40[2] = lVar3;
  *local_40 = &PTR_FUN_14b435330;
  local_40[3] = 0;
  FUN_14485c47a(local_40 + 3,param_3);
  puVar1[4] = param_4;
  FUN_141332804(param_1,param_2,&local_40);
  FUN_1449db362(&local_40);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563b48 FUN_146563b48 body=194 status=ok
// SIG undefined FUN_146563b48(void)

undefined8 * FUN_146563b48(undefined8 *param_1)

{
  longlong lVar1;
  wchar_t *pwVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [32];
  undefined8 local_78 [9];
  undefined4 local_30;
  undefined2 local_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e028) {
    FUN_144b3d300(&DAT_14cb8e028);
    if (DAT_14cb8e028 == -1) {
      pwVar2 = L"OnDataLayerInstanceRuntimeStateChanged";
      puVar3 = local_78;
      for (lVar1 = 9; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar3 = *(undefined8 *)pwVar2;
        pwVar2 = pwVar2 + 4;
        puVar3 = puVar3 + 1;
      }
      local_2c = 0;
      local_30 = 0x640065;
      FUN_1446f470e(&DAT_14cb8e020,local_78,1);
      _Init_thread_footer(&DAT_14cb8e028);
    }
  }
  *param_1 = DAT_14cb8e020;
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563c0c FUN_146563c0c body=29 status=ok
// SIG undefined FUN_146563c0c(void)

bool FUN_146563c0c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 146563c2a FUN_146563c2a body=26 status=ok
// SIG undefined FUN_146563c2a(void)

bool FUN_146563c2a(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146563c44 FUN_146563c44 body=24 status=ok
// SIG undefined FUN_146563c44(void)

bool FUN_146563c44(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146563c5c FUN_146563c5c body=26 status=ok
// SIG undefined FUN_146563c5c(void)

bool FUN_146563c5c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 146563c76 FUN_146563c76 body=24 status=ok
// SIG undefined FUN_146563c76(void)

bool FUN_146563c76(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146563c8e FUN_146563c8e body=308 status=ok
// SIG undefined FUN_146563c8e(void)

void FUN_146563c8e(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
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
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      FUN_144760e21(*(undefined8 *)(lVar1 + 8 + lVar2 * 0x28),
                    *(undefined4 *)(lVar1 + 0x10 + lVar2 * 0x28));
      if (*(longlong *)(lVar1 + 8 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563dc4 FUN_146563dc4 body=24 status=ok
// SIG undefined FUN_146563dc4(void)

bool FUN_146563dc4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 146563ddc FUN_146563ddc body=192 status=ok
// SIG undefined FUN_146563ddc(void)

void FUN_146563ddc(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b435550;
  puVar1[3] = &DAT_14cb8e02c;
  puVar1[4] = FUN_1459cff8e;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146563e9e FUN_146563e9e body=93 status=ok
// SIG undefined FUN_146563e9e(void)

void FUN_146563e9e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b435550;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146563efc FUN_146563efc body=34 status=ok
// SIG undefined FUN_146563efc(void)

undefined8 FUN_146563efc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,8);
  }
  return param_1;
}



// FUNCTION 146563f1e FUN_146563f1e body=47 status=ok
// SIG undefined FUN_146563f1e(void)

longlong FUN_146563f1e(void)

{
  if (DAT_14cb8e030 == 0) {
    FUN_1409ce572(&DAT_14cb8e030,&PTR_FUN_14b4356b0);
  }
  return DAT_14cb8e030;
}



// FUNCTION 146563f4d FUN_146563f4d body=49 status=ok
// SIG undefined FUN_146563f4d(void)

longlong FUN_146563f4d(void)

{
  if (DAT_14cb8e060 == 0) {
    FUN_1409ce572(&DAT_14cb8e060,&PTR_FUN_14b435820);
  }
  return DAT_14cb8e060;
}



// FUNCTION 146563f7e FUN_146563f7e body=47 status=ok
// SIG undefined FUN_146563f7e(void)

longlong FUN_146563f7e(void)

{
  if (DAT_14cb8e080 == 0) {
    FUN_14086a14e(&DAT_14cb8e080,&PTR_FUN_14b435930);
  }
  return DAT_14cb8e080;
}



// FUNCTION 146563fae FUN_146563fae body=48 status=ok
// SIG undefined FUN_146563fae(void)

void FUN_146563fae(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000010;
  *puVar1 = &PTR_FUN_14b437cf0;
  return;
}



// FUNCTION 146563fde FUN_146563fde body=55 status=ok
// SIG undefined FUN_146563fde(void)

void FUN_146563fde(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb8e0a0 == 0) {
    uVar1 = FUN_145a251d7();
    DAT_14cb8e0a0 = FUN_140002ddd(FUN_146564015,uVar1,L"NamedInterfaceDef");
  }
  return;
}



// FUNCTION 146564015 FUN_146564015 body=47 status=ok
// SIG undefined FUN_146564015(void)

longlong FUN_146564015(void)

{
  if (DAT_14cb8e098 == 0) {
    FUN_14086a14e(&DAT_14cb8e098,&PTR_FUN_14b435a48);
  }
  return DAT_14cb8e098;
}



// FUNCTION 146564044 FUN_146564044 body=48 status=ok
// SIG undefined FUN_146564044(void)

void FUN_146564044(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b437e60;
  return;
}



// FUNCTION 146564074 FUN_146564074 body=58 status=ok
// SIG undefined FUN_146564074(void)

void FUN_146564074(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b435c40;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 2;
  return;
}



// FUNCTION 1465640ae FUN_1465640ae body=47 status=ok
// SIG undefined FUN_1465640ae(void)

longlong FUN_1465640ae(void)

{
  if (DAT_14cb8e0b8 == 0) {
    FUN_14073dd9a(&DAT_14cb8e0b8,&PTR_LAB_14b435bf8);
  }
  return DAT_14cb8e0b8;
}



// FUNCTION 1465640de FUN_1465640de body=39 status=ok
// SIG undefined FUN_1465640de(void)

void FUN_1465640de(longlong param_1)

{
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    FUN_1447f69b6(param_1 + 0x48);
  }
  switchD_143c3d4dc::caseD_1d(param_1);
  return;
}



// FUNCTION 146564106 FUN_146564106 body=108 status=ok
// SIG undefined FUN_146564106(void)

undefined * FUN_146564106(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb8e110) {
    FUN_144b3d300(&DAT_14cb8e110);
    if (DAT_14cb8e110 == -1) {
      FUN_145c8dbc0(&DAT_14cb8e0d0,0);
      atexit((_func_5014 *)&LAB_143e6b7b1);
      _Init_thread_footer(&DAT_14cb8e110);
    }
  }
  return &DAT_14cb8e0d0;
}



// FUNCTION 146564172 FUN_146564172 body=152 status=ok
// SIG undefined FUN_146564172(void)

bool FUN_146564172(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = **(longlong **)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_144a450dc(param_2,lVar1 + 8);
    lVar2 = *(longlong *)(param_1 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    local_38 = 0;
    uStack_30 = 0;
    FUN_144a450dc(lVar1 + 8,&local_38);
    FUN_1449db362(&local_38);
    if (lVar2 != 0) {
      FUN_1449db362(lVar2 + 8);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar1 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14656420c FUN_14656420c body=231 status=ok
// SIG undefined FUN_14656420c(void)

void FUN_14656420c(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b438770;
  local_28[3] = &DAT_14cb8e378;
  local_28[4] = FUN_145e2fb14;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1465642f4 FUN_1465642f4 body=47 status=ok
// SIG undefined FUN_1465642f4(void)

longlong FUN_1465642f4(void)

{
  if (DAT_14cb8e3c0 == 0) {
    FUN_14073dd9a(&DAT_14cb8e3c0,&PTR_LAB_14b4376c0);
  }
  return DAT_14cb8e3c0;
}



// FUNCTION 146564323 FUN_146564323 body=47 status=ok
// SIG undefined FUN_146564323(void)

longlong FUN_146564323(void)

{
  if (DAT_14cb8e3a0 == 0) {
    FUN_14000fc22(&DAT_14cb8e3a0,&PTR_FUN_14b4374e8);
  }
  return DAT_14cb8e3a0;
}



// FUNCTION 146564352 FUN_146564352 body=47 status=ok
// SIG undefined FUN_146564352(void)

longlong FUN_146564352(void)

{
  if (DAT_14cb8e3b0 == 0) {
    FUN_14000fc22(&DAT_14cb8e3b0,&PTR_FUN_14b437608);
  }
  return DAT_14cb8e3b0;
}



// FUNCTION 146564381 FUN_146564381 body=35 status=ok
// SIG undefined FUN_146564381(void)

void FUN_146564381(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b437700;
  return;
}



// FUNCTION 1465643aa FUN_1465643aa body=38 status=ok
// SIG undefined FUN_1465643aa(void)

void FUN_1465643aa(longlong param_1,longlong *param_2)

{
  if (*param_2 != 0) {
    FUN_14480f766(param_1 + 0x28);
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1465643d0 FUN_1465643d0 body=40 status=ok
// SIG undefined FUN_1465643d0(void)

undefined8 FUN_1465643d0(undefined8 param_1,int param_2)

{
  FUN_144760e82();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465643f8 FUN_1465643f8 body=29 status=ok
// SIG undefined FUN_1465643f8(void)

undefined8 FUN_1465643f8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146564416 FUN_146564416 body=29 status=ok
// SIG undefined FUN_146564416(void)

undefined8 FUN_146564416(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 146564434 FUN_146564434 body=132 status=ok
// SIG undefined FUN_146564434(void)

void FUN_146564434(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1465644b8 FUN_1465644b8 body=132 status=ok
// SIG undefined FUN_1465644b8(void)

void FUN_1465644b8(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 6,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 6)) {
      uVar5 = uVar3 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x40,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14656453e FUN_14656453e body=93 status=ok
// SIG undefined FUN_14656453e(void)

void FUN_14656453e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b438770;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14656459c FUN_14656459c body=29 status=ok
// SIG undefined FUN_14656459c(void)

undefined8 FUN_14656459c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465645b9 FUN_1465645b9 body=47 status=ok
// SIG undefined FUN_1465645b9(void)

longlong FUN_1465645b9(void)

{
  if (DAT_14cb8e548 == 0) {
    FUN_140f50038(&DAT_14cb8e548,&PTR_s__Script_CoherentRenderingPlugin_14b4394af_1_14b439490);
  }
  return DAT_14cb8e548;
}



// FUNCTION 1465645e8 FUN_1465645e8 body=47 status=ok
// SIG undefined FUN_1465645e8(void)

longlong FUN_1465645e8(void)

{
  if (DAT_14cb8e558 == 0) {
    FUN_1409ce572(&DAT_14cb8e558,&PTR_FUN_14b4395a0);
  }
  return DAT_14cb8e558;
}



// FUNCTION 146564617 FUN_146564617 body=63 status=ok
// SIG undefined FUN_146564617(void)

void FUN_146564617(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_144a0768c(puVar1,param_1);
  *puVar1 = &PTR_FUN_14b439840;
  *(undefined2 *)(puVar1 + 5) = 0x102;
  *(undefined1 *)((longlong)puVar1 + 0x2a) = 1;
  FUN_1400b22c2(puVar1 + 6,&DAT_149e02088);
  return;
}



// FUNCTION 146564656 FUN_146564656 body=47 status=ok
// SIG undefined FUN_146564656(void)

longlong FUN_146564656(void)

{
  if (DAT_14cb8e578 == 0) {
    FUN_14073dd9a(&DAT_14cb8e578,&PTR_LAB_14b4397f8);
  }
  return DAT_14cb8e578;
}



// FUNCTION 146564686 FUN_146564686 body=192 status=ok
// SIG undefined FUN_146564686(void)

void FUN_146564686(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 *local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1446efa72(&local_30,0,3,0x10);
  puVar1 = local_30;
  local_28 = 3;
  *local_30 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
  uVar2 = FUN_144a3f946();
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14b43b610;
  puVar1[3] = &DAT_14cb8e588;
  puVar1[4] = FUN_145bccf92;
  uVar2 = FUN_144a52528();
  local_48 = *param_1;
  uStack_44 = param_1[1];
  uStack_40 = param_1[2];
  uStack_3c = param_1[3];
  FUN_140da023c(uVar2,&local_48,&local_30);
  FUN_1449db362(&local_30);
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146564748 FUN_146564748 body=71 status=ok
// SIG undefined FUN_146564748(void)

void FUN_146564748(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14b43b0f0;
  FUN_1449db362(param_1 + 9);
  FUN_1449db362(param_1 + 7);
  FUN_1449db362(param_1 + 5);
  FUN_1449db362(param_1 + 3);
  FUN_1449db362(param_1 + 1);
  return;
}



// FUNCTION 146564790 FUN_146564790 body=217 status=ok
// SIG undefined FUN_146564790(void)

ulonglong FUN_146564790(ulonglong param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  undefined8 unaff_RBX;
  
  FUN_140596bca();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  if (DAT_14cb8fbb0 == DAT_14cb8fbdc) {
    iVar3 = -1;
  }
  else {
    uVar2 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    puVar5 = &DAT_14cb8fbe0;
    if (DAT_14cb8fbe8 != (undefined *)0x0) {
      puVar5 = DAT_14cb8fbe8;
    }
    iVar1 = *(int *)(puVar5 + (ulonglong)(DAT_14cb8fbf0 - 1U & (uVar2 >> 0x10 ^ uVar2)) * 4);
    while ((iVar3 = -1, iVar1 != -1 &&
           (iVar3 = iVar1, *(ulonglong *)(DAT_14cb8fba8 + (longlong)iVar1 * 0x10) != param_1))) {
      iVar1 = *(int *)((longlong)iVar1 * 0x10 + DAT_14cb8fba8 + 8);
    }
  }
  lVar4 = (longlong)iVar3 * 0x10 + DAT_14cb8fba8;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14cb8fbf8);
  return CONCAT71((int7)((ulonglong)unaff_RBX >> 8),lVar4 != 0 && iVar3 != -1) & 0xffffffff;
}



// FUNCTION 14656486a FUN_14656486a body=31 status=ok
// SIG undefined FUN_14656486a(void)

void FUN_14656486a(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_144a787a6();
  *(undefined4 *)(param_1 + 0x10) = param_3;
  *(undefined1 *)(param_1 + 0x70) = 3;
  return;
}



// FUNCTION 14656488a FUN_14656488a body=67 status=ok
// SIG undefined FUN_14656488a(void)

undefined8 * FUN_14656488a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b439840;
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465648ce FUN_1465648ce body=39 status=ok
// SIG undefined FUN_1465648ce(void)

IAllocator * FUN_1465648ce(IAllocator *param_1,int param_2)

{
  renoir::IAllocator::~IAllocator(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1465648f6 FUN_1465648f6 body=93 status=ok
// SIG undefined FUN_1465648f6(void)

void FUN_1465648f6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b43b610;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146564954 FUN_146564954 body=53 status=ok
// SIG undefined FUN_146564954(void)

void FUN_146564954(longlong *param_1)

{
  FUN_145b21998();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14656498a FUN_14656498a body=48 status=ok
// SIG undefined FUN_14656498a(void)

void FUN_14656498a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,4,4);
  }
  return;
}



// FUNCTION 1465649ba FUN_1465649ba body=63 status=ok
// SIG undefined FUN_1465649ba(void)

void FUN_1465649ba(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e3c08c(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14143ded0(param_1);
    return;
  }
  FUN_1489c1bdc(param_1);
  FUN_145e3c08c(param_1);
  return;
}



// FUNCTION 1465649fa FUN_1465649fa body=63 status=ok
// SIG undefined FUN_1465649fa(void)

void FUN_1465649fa(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145e3bf04(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_141482f92(param_1);
    return;
  }
  FUN_1489c1d20(param_1);
  FUN_145e3bf04(param_1);
  return;
}



// FUNCTION 146564a3a FUN_146564a3a body=63 status=ok
// SIG undefined FUN_146564a3a(void)

void FUN_146564a3a(longlong param_1)

{
  if (1 < *(int *)(param_1 + 0x48)) {
    FUN_145a1804a(param_1);
    *(undefined4 *)(param_1 + 0x48) = 1;
    FUN_14150fd72(param_1);
    return;
  }
  FUN_1489c1e64(param_1);
  FUN_145a1804a(param_1);
  return;
}



// FUNCTION 146564a7a FUN_146564a7a body=146 status=ok
// SIG undefined FUN_146564a7a(void)

void FUN_146564a7a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x98,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x98)) {
      uVar5 = uVar4 / 0x98 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x98,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146564b0e FUN_146564b0e body=132 status=ok
// SIG undefined FUN_146564b0e(void)

void FUN_146564b0e(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 5,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 5)) {
      uVar5 = uVar3 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146564b94 FUN_146564b94 body=132 status=ok
// SIG undefined FUN_146564b94(void)

void FUN_146564b94(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 4,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 4)) {
      uVar5 = uVar3 >> 4 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x10,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 146564c18 FUN_146564c18 body=147 status=ok
// SIG undefined FUN_146564c18(void)

void FUN_146564c18(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x30,8);
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



// FUNCTION 146564cac FUN_146564cac body=231 status=ok
// SIG undefined FUN_146564cac(void)

void FUN_146564cac(undefined4 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (undefined8 *)0x0;
  local_20 = 0;
  FUN_1446efa72(&local_28,0,3,0x10);
  local_20 = 3;
  *local_28 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
              ::vftable;
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
  local_28[2] = lVar3;
  *local_28 = &PTR_FUN_14b43c510;
  local_28[3] = &DAT_14cb901f4;
  local_28[4] = FUN_1489c45b4;
  uVar2 = FUN_144a52528();
  local_38 = *param_1;
  uStack_34 = param_1[1];
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  FUN_140da023c(uVar2,&local_38,&local_28);
  FUN_1449db362(&local_28);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 146564d94 FUN_146564d94 body=93 status=ok
// SIG undefined FUN_146564d94(void)

void FUN_146564d94(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b43c510;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 146564df1 FUN_146564df1 body=47 status=ok
// SIG undefined FUN_146564df1(void)

longlong FUN_146564df1(void)

{
  if (DAT_14cb90208 == 0) {
    FUN_14073dd9a(&DAT_14cb90208,&PTR_LAB_14b43c648);
  }
  return DAT_14cb90208;
}



// FUNCTION 146564e20 FUN_146564e20 body=55 status=ok
// SIG undefined FUN_146564e20(void)

void FUN_146564e20(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90220 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90220 = FUN_140002ddd(FUN_146564e57,uVar1,L"TextureAtlasMappingInfo");
  }
  return;
}



// FUNCTION 146564e57 FUN_146564e57 body=47 status=ok
// SIG undefined FUN_146564e57(void)

longlong FUN_146564e57(void)

{
  if (DAT_14cb90218 == 0) {
    FUN_14086a14e(&DAT_14cb90218,&PTR_FUN_14b43cbe0);
  }
  return DAT_14cb90218;
}



// FUNCTION 146564e86 FUN_146564e86 body=43 status=ok
// SIG undefined FUN_146564e86(void)

void FUN_146564e86(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000028;
  *puVar1 = &PTR_FUN_14b446380;
  return;
}



// FUNCTION 146564eb1 FUN_146564eb1 body=47 status=ok
// SIG undefined FUN_146564eb1(void)

longlong FUN_146564eb1(void)

{
  if (DAT_14cb90238 == 0) {
    FUN_14073dd9a(&DAT_14cb90238,&PTR_LAB_14b43ccf8);
  }
  return DAT_14cb90238;
}



// FUNCTION 146564ee0 FUN_146564ee0 body=47 status=ok
// SIG undefined FUN_146564ee0(void)

longlong FUN_146564ee0(void)

{
  if (DAT_14cb90248 == 0) {
    FUN_1409ce572(&DAT_14cb90248,&PTR_FUN_14b43d030);
  }
  return DAT_14cb90248;
}



// FUNCTION 146564f14 FUN_146564f14 body=47 status=ok
// SIG undefined FUN_146564f14(void)

longlong FUN_146564f14(void)

{
  if (DAT_14cb90268 == 0) {
    FUN_14073dd9a(&DAT_14cb90268,&PTR_LAB_14b43d4e8);
  }
  return DAT_14cb90268;
}



// FUNCTION 146564f44 FUN_146564f44 body=55 status=ok
// SIG undefined FUN_146564f44(void)

void FUN_146564f44(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90280 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90280 = FUN_140002ddd(FUN_146564f7b,uVar1,L"TextureAtlasMetaData");
  }
  return;
}



// FUNCTION 146564f7b FUN_146564f7b body=47 status=ok
// SIG undefined FUN_146564f7b(void)

longlong FUN_146564f7b(void)

{
  if (DAT_14cb90278 == 0) {
    FUN_14086a14e(&DAT_14cb90278,&PTR_FUN_14b43d900);
  }
  return DAT_14cb90278;
}



// FUNCTION 146564faa FUN_146564faa body=43 status=ok
// SIG undefined FUN_146564faa(void)

void FUN_146564faa(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x8000000b0;
  *puVar1 = &PTR_FUN_14b446550;
  return;
}



// FUNCTION 146564fd6 FUN_146564fd6 body=55 status=ok
// SIG undefined FUN_146564fd6(void)

void FUN_146564fd6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90298 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90298 = FUN_140002ddd(FUN_14656500d,uVar1,L"CohtmlSound");
  }
  return;
}



// FUNCTION 14656500d FUN_14656500d body=47 status=ok
// SIG undefined FUN_14656500d(void)

longlong FUN_14656500d(void)

{
  if (DAT_14cb90290 == 0) {
    FUN_14086a14e(&DAT_14cb90290,&PTR_FUN_14b43dac0);
  }
  return DAT_14cb90290;
}



// FUNCTION 14656503c FUN_14656503c body=43 status=ok
// SIG undefined FUN_14656503c(void)

void FUN_14656503c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000018;
  *puVar1 = &PTR_FUN_14b4466b0;
  return;
}



// FUNCTION 14656506d FUN_14656506d body=47 status=ok
// SIG undefined FUN_14656506d(void)

longlong FUN_14656506d(void)

{
  if (DAT_14cb902b0 == 0) {
    FUN_14073dd9a(&DAT_14cb902b0,&PTR_LAB_14b43dc48);
  }
  return DAT_14cb902b0;
}



// FUNCTION 14656509c FUN_14656509c body=47 status=ok
// SIG undefined FUN_14656509c(void)

longlong FUN_14656509c(void)

{
  if (DAT_14cb902c0 == 0) {
    FUN_1409ce572(&DAT_14cb902c0,&PTR_FUN_14b43dfd0);
  }
  return DAT_14cb902c0;
}



// FUNCTION 1465650cb FUN_1465650cb body=47 status=ok
// SIG undefined FUN_1465650cb(void)

longlong FUN_1465650cb(void)

{
  if (DAT_14cb902d8 == 0) {
    FUN_14000fc22(&DAT_14cb902d8,&PTR_FUN_14b43e060);
  }
  return DAT_14cb902d8;
}



// FUNCTION 1465650fa FUN_1465650fa body=47 status=ok
// SIG undefined FUN_1465650fa(void)

longlong FUN_1465650fa(void)

{
  if (DAT_14cb902e0 == 0) {
    FUN_14000fc22(&DAT_14cb902e0,&PTR_FUN_14b43e0b8);
  }
  return DAT_14cb902e0;
}



// FUNCTION 146565129 FUN_146565129 body=47 status=ok
// SIG undefined FUN_146565129(void)

longlong FUN_146565129(void)

{
  if (DAT_14cb902e8 == 0) {
    FUN_14000fc22(&DAT_14cb902e8,&PTR_FUN_14b43e1a0);
  }
  return DAT_14cb902e8;
}



// FUNCTION 146565158 FUN_146565158 body=47 status=ok
// SIG undefined FUN_146565158(void)

longlong FUN_146565158(void)

{
  if (DAT_14cb902f0 == 0) {
    FUN_14000fc22(&DAT_14cb902f0,&PTR_FUN_14b43e290);
  }
  return DAT_14cb902f0;
}



// FUNCTION 146565187 FUN_146565187 body=47 status=ok
// SIG undefined FUN_146565187(void)

longlong FUN_146565187(void)

{
  if (DAT_14cb902f8 == 0) {
    FUN_14000fc22(&DAT_14cb902f8,&PTR_FUN_14b43e328);
  }
  return DAT_14cb902f8;
}



// FUNCTION 1465651b6 FUN_1465651b6 body=47 status=ok
// SIG undefined FUN_1465651b6(void)

longlong FUN_1465651b6(void)

{
  if (DAT_14cb90300 == 0) {
    FUN_14000fc22(&DAT_14cb90300,&PTR_FUN_14b43e380);
  }
  return DAT_14cb90300;
}



// FUNCTION 1465651e5 FUN_1465651e5 body=47 status=ok
// SIG undefined FUN_1465651e5(void)

longlong FUN_1465651e5(void)

{
  if (DAT_14cb90308 == 0) {
    FUN_14000fc22(&DAT_14cb90308,&PTR_FUN_14b43e420);
  }
  return DAT_14cb90308;
}



// FUNCTION 146565214 FUN_146565214 body=47 status=ok
// SIG undefined FUN_146565214(void)

longlong FUN_146565214(void)

{
  if (DAT_14cb90310 == 0) {
    FUN_14000fc22(&DAT_14cb90310,&PTR_FUN_14b43e4b8);
  }
  return DAT_14cb90310;
}



// FUNCTION 146565243 FUN_146565243 body=47 status=ok
// SIG undefined FUN_146565243(void)

longlong FUN_146565243(void)

{
  if (DAT_14cb90318 == 0) {
    FUN_14000fc22(&DAT_14cb90318,&PTR_FUN_14b43e510);
  }
  return DAT_14cb90318;
}



// FUNCTION 146565272 FUN_146565272 body=47 status=ok
// SIG undefined FUN_146565272(void)

longlong FUN_146565272(void)

{
  if (DAT_14cb90320 == 0) {
    FUN_14000fc22(&DAT_14cb90320,&PTR_FUN_14b43e658);
  }
  return DAT_14cb90320;
}



// FUNCTION 1465652a1 FUN_1465652a1 body=47 status=ok
// SIG undefined FUN_1465652a1(void)

longlong FUN_1465652a1(void)

{
  if (DAT_14cb90328 == 0) {
    FUN_14000fc22(&DAT_14cb90328,&PTR_FUN_14b43e6f8);
  }
  return DAT_14cb90328;
}



// FUNCTION 1465652d0 FUN_1465652d0 body=47 status=ok
// SIG undefined FUN_1465652d0(void)

longlong FUN_1465652d0(void)

{
  if (DAT_14cb90330 == 0) {
    FUN_14000fc22(&DAT_14cb90330,&PTR_FUN_14b43e798);
  }
  return DAT_14cb90330;
}



// FUNCTION 1465652ff FUN_1465652ff body=47 status=ok
// SIG undefined FUN_1465652ff(void)

longlong FUN_1465652ff(void)

{
  if (DAT_14cb90338 == 0) {
    FUN_14000fc22(&DAT_14cb90338,&PTR_FUN_14b43e838);
  }
  return DAT_14cb90338;
}



// FUNCTION 14656532e FUN_14656532e body=47 status=ok
// SIG undefined FUN_14656532e(void)

longlong FUN_14656532e(void)

{
  if (DAT_14cb90340 == 0) {
    FUN_14000fc22(&DAT_14cb90340,&PTR_FUN_14b43e8b8);
  }
  return DAT_14cb90340;
}



// FUNCTION 14656535d FUN_14656535d body=47 status=ok
// SIG undefined FUN_14656535d(void)

longlong FUN_14656535d(void)

{
  if (DAT_14cb90348 == 0) {
    FUN_14000fc22(&DAT_14cb90348,&PTR_FUN_14b43e950);
  }
  return DAT_14cb90348;
}



// FUNCTION 14656538c FUN_14656538c body=47 status=ok
// SIG undefined FUN_14656538c(void)

longlong FUN_14656538c(void)

{
  if (DAT_14cb90350 == 0) {
    FUN_14000fc22(&DAT_14cb90350,&PTR_FUN_14b43e9e8);
  }
  return DAT_14cb90350;
}



// FUNCTION 1465653bb FUN_1465653bb body=47 status=ok
// SIG undefined FUN_1465653bb(void)

longlong FUN_1465653bb(void)

{
  if (DAT_14cb904b8 == 0) {
    FUN_14000fc22(&DAT_14cb904b8,&PTR_FUN_14b4422f0);
  }
  return DAT_14cb904b8;
}



// FUNCTION 1465653ea FUN_1465653ea body=47 status=ok
// SIG undefined FUN_1465653ea(void)

longlong FUN_1465653ea(void)

{
  if (DAT_14cb90358 == 0) {
    FUN_14000fc22(&DAT_14cb90358,&PTR_FUN_14b43ead8);
  }
  return DAT_14cb90358;
}



// FUNCTION 146565419 FUN_146565419 body=47 status=ok
// SIG undefined FUN_146565419(void)

longlong FUN_146565419(void)

{
  if (DAT_14cb90360 == 0) {
    FUN_14000fc22(&DAT_14cb90360,&PTR_FUN_14b43eb20);
  }
  return DAT_14cb90360;
}



// FUNCTION 146565448 FUN_146565448 body=47 status=ok
// SIG undefined FUN_146565448(void)

longlong FUN_146565448(void)

{
  if (DAT_14cb90368 == 0) {
    FUN_14000fc22(&DAT_14cb90368,&PTR_FUN_14b43eb80);
  }
  return DAT_14cb90368;
}



// FUNCTION 146565477 FUN_146565477 body=47 status=ok
// SIG undefined FUN_146565477(void)

longlong FUN_146565477(void)

{
  if (DAT_14cb90370 == 0) {
    FUN_14000fc22(&DAT_14cb90370,&PTR_FUN_14b43ec28);
  }
  return DAT_14cb90370;
}



// FUNCTION 1465654a6 FUN_1465654a6 body=47 status=ok
// SIG undefined FUN_1465654a6(void)

longlong FUN_1465654a6(void)

{
  if (DAT_14cb90378 == 0) {
    FUN_14000fc22(&DAT_14cb90378,&PTR_FUN_14b43ecd0);
  }
  return DAT_14cb90378;
}



// FUNCTION 1465654d5 FUN_1465654d5 body=47 status=ok
// SIG undefined FUN_1465654d5(void)

longlong FUN_1465654d5(void)

{
  if (DAT_14cb90380 == 0) {
    FUN_14000fc22(&DAT_14cb90380,&PTR_FUN_14b43edb8);
  }
  return DAT_14cb90380;
}



// FUNCTION 146565504 FUN_146565504 body=47 status=ok
// SIG undefined FUN_146565504(void)

longlong FUN_146565504(void)

{
  if (DAT_14cb90388 == 0) {
    FUN_14000fc22(&DAT_14cb90388,&PTR_FUN_14b43eea0);
  }
  return DAT_14cb90388;
}



// FUNCTION 146565533 FUN_146565533 body=47 status=ok
// SIG undefined FUN_146565533(void)

longlong FUN_146565533(void)

{
  if (DAT_14cb90390 == 0) {
    FUN_14000fc22(&DAT_14cb90390,&PTR_FUN_14b43ef60);
  }
  return DAT_14cb90390;
}



// FUNCTION 146565562 FUN_146565562 body=47 status=ok
// SIG undefined FUN_146565562(void)

longlong FUN_146565562(void)

{
  if (DAT_14cb90398 == 0) {
    FUN_14000fc22(&DAT_14cb90398,&PTR_FUN_14b43f038);
  }
  return DAT_14cb90398;
}



// FUNCTION 146565591 FUN_146565591 body=47 status=ok
// SIG undefined FUN_146565591(void)

longlong FUN_146565591(void)

{
  if (DAT_14cb903a0 == 0) {
    FUN_14000fc22(&DAT_14cb903a0,&PTR_FUN_14b43f0d8);
  }
  return DAT_14cb903a0;
}



// FUNCTION 1465655c0 FUN_1465655c0 body=47 status=ok
// SIG undefined FUN_1465655c0(void)

longlong FUN_1465655c0(void)

{
  if (DAT_14cb903a8 == 0) {
    FUN_14000fc22(&DAT_14cb903a8,&PTR_FUN_14b43f178);
  }
  return DAT_14cb903a8;
}



// FUNCTION 1465655ef FUN_1465655ef body=47 status=ok
// SIG undefined FUN_1465655ef(void)

longlong FUN_1465655ef(void)

{
  if (DAT_14cb903b0 == 0) {
    FUN_14000fc22(&DAT_14cb903b0,&PTR_FUN_14b43f1d0);
  }
  return DAT_14cb903b0;
}



// FUNCTION 14656561e FUN_14656561e body=47 status=ok
// SIG undefined FUN_14656561e(void)

longlong FUN_14656561e(void)

{
  if (DAT_14cb903b8 == 0) {
    FUN_14000fc22(&DAT_14cb903b8,&PTR_FUN_14b43f2c0);
  }
  return DAT_14cb903b8;
}



// FUNCTION 14656564d FUN_14656564d body=47 status=ok
// SIG undefined FUN_14656564d(void)

longlong FUN_14656564d(void)

{
  if (DAT_14cb903c0 == 0) {
    FUN_14000fc22(&DAT_14cb903c0,&PTR_FUN_14b43f368);
  }
  return DAT_14cb903c0;
}



// FUNCTION 14656567c FUN_14656567c body=47 status=ok
// SIG undefined FUN_14656567c(void)

longlong FUN_14656567c(void)

{
  if (DAT_14cb903c8 == 0) {
    FUN_14000fc22(&DAT_14cb903c8,&PTR_FUN_14b43f410);
  }
  return DAT_14cb903c8;
}



// FUNCTION 1465656ac FUN_1465656ac body=34 status=ok
// SIG undefined FUN_1465656ac(void)

void FUN_1465656ac(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14587e2f4();
  FUN_14069c8d6(uVar1,&PTR_s_AddPreloadedTexture_14b43f450,0x1f);
  return;
}



// FUNCTION 1465656de FUN_1465656de body=49 status=ok
// SIG undefined FUN_1465656de(void)

longlong FUN_1465656de(void)

{
  if (DAT_14cb90470 == 0) {
    FUN_14000fc22(&DAT_14cb90470,&PTR_FUN_14b441cc8);
  }
  return DAT_14cb90470;
}



// FUNCTION 14656570f FUN_14656570f body=49 status=ok
// SIG undefined FUN_14656570f(void)

longlong FUN_14656570f(void)

{
  if (DAT_14cb90478 == 0) {
    FUN_14000fc22(&DAT_14cb90478,&PTR_FUN_14b441d38);
  }
  return DAT_14cb90478;
}



// FUNCTION 146565740 FUN_146565740 body=49 status=ok
// SIG undefined FUN_146565740(void)

longlong FUN_146565740(void)

{
  if (DAT_14cb90480 == 0) {
    FUN_14000fc22(&DAT_14cb90480,&PTR_FUN_14b441da0);
  }
  return DAT_14cb90480;
}



// FUNCTION 146565771 FUN_146565771 body=49 status=ok
// SIG undefined FUN_146565771(void)

longlong FUN_146565771(void)

{
  if (DAT_14cb90488 == 0) {
    FUN_14000fc22(&DAT_14cb90488,&PTR_FUN_14b441e10);
  }
  return DAT_14cb90488;
}



// FUNCTION 1465657a2 FUN_1465657a2 body=49 status=ok
// SIG undefined FUN_1465657a2(void)

longlong FUN_1465657a2(void)

{
  if (DAT_14cb90490 == 0) {
    FUN_14000fc22(&DAT_14cb90490,&PTR_FUN_14b441e78);
  }
  return DAT_14cb90490;
}



// FUNCTION 1465657d3 FUN_1465657d3 body=49 status=ok
// SIG undefined FUN_1465657d3(void)

longlong FUN_1465657d3(void)

{
  if (DAT_14cb90498 == 0) {
    FUN_14000fc22(&DAT_14cb90498,&PTR_FUN_14b441f20);
  }
  return DAT_14cb90498;
}



// FUNCTION 146565804 FUN_146565804 body=49 status=ok
// SIG undefined FUN_146565804(void)

longlong FUN_146565804(void)

{
  if (DAT_14cb904a0 == 0) {
    FUN_14000fc22(&DAT_14cb904a0,&PTR_FUN_14b442008);
  }
  return DAT_14cb904a0;
}



// FUNCTION 146565835 FUN_146565835 body=47 status=ok
// SIG undefined FUN_146565835(void)

longlong FUN_146565835(void)

{
  if (DAT_14cb904a8 == 0) {
    FUN_14000fc22(&DAT_14cb904a8,&PTR_FUN_14b4420f8);
  }
  return DAT_14cb904a8;
}



// FUNCTION 146565864 FUN_146565864 body=47 status=ok
// SIG undefined FUN_146565864(void)

longlong FUN_146565864(void)

{
  if (DAT_14cb90528 == 0) {
    FUN_1409ce572(&DAT_14cb90528,&PTR_FUN_14b4434d0);
  }
  return DAT_14cb90528;
}



// FUNCTION 146565893 FUN_146565893 body=49 status=ok
// SIG undefined FUN_146565893(void)

longlong FUN_146565893(void)

{
  if (DAT_14cb90448 == 0) {
    FUN_14073dd9a(&DAT_14cb90448,&PTR_LAB_14b441240);
  }
  return DAT_14cb90448;
}



// FUNCTION 1465658c4 FUN_1465658c4 body=47 status=ok
// SIG undefined FUN_1465658c4(void)

longlong FUN_1465658c4(void)

{
  if (DAT_14cb903e8 == 0) {
    FUN_14000fc22(&DAT_14cb903e8,&PTR_FUN_14b440720);
  }
  return DAT_14cb903e8;
}



// FUNCTION 1465658f3 FUN_1465658f3 body=47 status=ok
// SIG undefined FUN_1465658f3(void)

longlong FUN_1465658f3(void)

{
  if (DAT_14cb903f0 == 0) {
    FUN_14000fc22(&DAT_14cb903f0,&PTR_FUN_14b440840);
  }
  return DAT_14cb903f0;
}



// FUNCTION 146565922 FUN_146565922 body=47 status=ok
// SIG undefined FUN_146565922(void)

longlong FUN_146565922(void)

{
  if (DAT_14cb903f8 == 0) {
    FUN_14000fc22(&DAT_14cb903f8,&PTR_FUN_14b440918);
  }
  return DAT_14cb903f8;
}



// FUNCTION 146565951 FUN_146565951 body=47 status=ok
// SIG undefined FUN_146565951(void)

longlong FUN_146565951(void)

{
  if (DAT_14cb90400 == 0) {
    FUN_14000fc22(&DAT_14cb90400,&PTR_FUN_14b4409f8);
  }
  return DAT_14cb90400;
}



// FUNCTION 146565980 FUN_146565980 body=47 status=ok
// SIG undefined FUN_146565980(void)

longlong FUN_146565980(void)

{
  if (DAT_14cb90408 == 0) {
    FUN_14000fc22(&DAT_14cb90408,&PTR_FUN_14b440ad0);
  }
  return DAT_14cb90408;
}



// FUNCTION 1465659af FUN_1465659af body=47 status=ok
// SIG undefined FUN_1465659af(void)

longlong FUN_1465659af(void)

{
  if (DAT_14cb90410 == 0) {
    FUN_14000fc22(&DAT_14cb90410,&PTR_FUN_14b440bb0);
  }
  return DAT_14cb90410;
}



// FUNCTION 1465659de FUN_1465659de body=47 status=ok
// SIG undefined FUN_1465659de(void)

longlong FUN_1465659de(void)

{
  if (DAT_14cb90418 == 0) {
    FUN_14000fc22(&DAT_14cb90418,&PTR_FUN_14b440c90);
  }
  return DAT_14cb90418;
}



// FUNCTION 146565a0d FUN_146565a0d body=47 status=ok
// SIG undefined FUN_146565a0d(void)

longlong FUN_146565a0d(void)

{
  if (DAT_14cb90420 == 0) {
    FUN_14000fc22(&DAT_14cb90420,&PTR_FUN_14b440d70);
  }
  return DAT_14cb90420;
}



// FUNCTION 146565a3c FUN_146565a3c body=47 status=ok
// SIG undefined FUN_146565a3c(void)

longlong FUN_146565a3c(void)

{
  if (DAT_14cb90428 == 0) {
    FUN_14000fc22(&DAT_14cb90428,&PTR_FUN_14b440e50);
  }
  return DAT_14cb90428;
}



// FUNCTION 146565a6b FUN_146565a6b body=47 status=ok
// SIG undefined FUN_146565a6b(void)

longlong FUN_146565a6b(void)

{
  if (DAT_14cb90430 == 0) {
    FUN_14000fc22(&DAT_14cb90430,&PTR_FUN_14b440f20);
  }
  return DAT_14cb90430;
}



// FUNCTION 146565a9a FUN_146565a9a body=47 status=ok
// SIG undefined FUN_146565a9a(void)

longlong FUN_146565a9a(void)

{
  if (DAT_14cb90438 == 0) {
    FUN_14000fc22(&DAT_14cb90438,&PTR_FUN_14b441038);
  }
  return DAT_14cb90438;
}



// FUNCTION 146565aca FUN_146565aca body=34 status=ok
// SIG undefined FUN_146565aca(void)

void FUN_146565aca(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a85a92();
  FUN_14069c8d6(uVar1,&PTR_s_AddArray_14b441080,0xb);
  return;
}



// FUNCTION 146565aec FUN_146565aec body=47 status=ok
// SIG undefined FUN_146565aec(void)

longlong FUN_146565aec(void)

{
  if (DAT_14cb90460 == 0) {
    FUN_14073dd9a(&DAT_14cb90460,&PTR_LAB_14b4416f8);
  }
  return DAT_14cb90460;
}



// FUNCTION 146565b1b FUN_146565b1b body=47 status=ok
// SIG undefined FUN_146565b1b(void)

longlong FUN_146565b1b(void)

{
  if (DAT_14cb904b0 == 0) {
    FUN_14000fc22(&DAT_14cb904b0,&PTR_FUN_14b442280);
  }
  return DAT_14cb904b0;
}



// FUNCTION 146565b4a FUN_146565b4a body=47 status=ok
// SIG undefined FUN_146565b4a(void)

longlong FUN_146565b4a(void)

{
  if (DAT_14cb904c0 == 0) {
    FUN_14000fc22(&DAT_14cb904c0,&PTR_FUN_14b442360);
  }
  return DAT_14cb904c0;
}



// FUNCTION 146565b79 FUN_146565b79 body=47 status=ok
// SIG undefined FUN_146565b79(void)

longlong FUN_146565b79(void)

{
  if (DAT_14cb904d0 == 0) {
    FUN_14073dd9a(&DAT_14cb904d0,&PTR_LAB_14b4423e8);
  }
  return DAT_14cb904d0;
}



// FUNCTION 146565ba8 FUN_146565ba8 body=55 status=ok
// SIG undefined FUN_146565ba8(void)

void FUN_146565ba8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb904e8 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb904e8 = FUN_140002ddd(FUN_146565bdf,uVar1,L"CohtmlPadding");
  }
  return;
}



// FUNCTION 146565bdf FUN_146565bdf body=47 status=ok
// SIG undefined FUN_146565bdf(void)

longlong FUN_146565bdf(void)

{
  if (DAT_14cb904e0 == 0) {
    FUN_14086a14e(&DAT_14cb904e0,&PTR_FUN_14b442860);
  }
  return DAT_14cb904e0;
}



// FUNCTION 146565c0e FUN_146565c0e body=43 status=ok
// SIG undefined FUN_146565c0e(void)

void FUN_146565c0e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x400000010;
  *puVar1 = &PTR_FUN_14b446890;
  return;
}



// FUNCTION 146565c39 FUN_146565c39 body=47 status=ok
// SIG undefined FUN_146565c39(void)

longlong FUN_146565c39(void)

{
  if (DAT_14cb90518 == 0) {
    FUN_14073dd9a(&DAT_14cb90518,&PTR_LAB_14b442c90);
  }
  return DAT_14cb90518;
}



// FUNCTION 146565c68 FUN_146565c68 body=47 status=ok
// SIG undefined FUN_146565c68(void)

longlong FUN_146565c68(void)

{
  if (DAT_14cb90500 == 0) {
    FUN_14000fc22(&DAT_14cb90500,&PTR_FUN_14b442928);
  }
  return DAT_14cb90500;
}



// FUNCTION 146565c97 FUN_146565c97 body=47 status=ok
// SIG undefined FUN_146565c97(void)

longlong FUN_146565c97(void)

{
  if (DAT_14cb90508 == 0) {
    FUN_14000fc22(&DAT_14cb90508,&PTR_FUN_14b442b78);
  }
  return DAT_14cb90508;
}



// FUNCTION 146565cc6 FUN_146565cc6 body=34 status=ok
// SIG undefined FUN_146565cc6(void)

void FUN_146565cc6(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_145a85b7e();
  FUN_14069c8d6(uVar1,&PTR_s_CalculateCohtmlPadding_14b442bc0,2);
  return;
}



// FUNCTION 146565ce8 FUN_146565ce8 body=55 status=ok
// SIG undefined FUN_146565ce8(void)

void FUN_146565ce8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb90558 == 0) {
    uVar1 = FUN_140f547d3();
    DAT_14cb90558 = FUN_140002ddd(FUN_146565d1f,uVar1,L"HudCompositorCachedMaterial");
  }
  return;
}



// FUNCTION 146565d1f FUN_146565d1f body=47 status=ok
// SIG undefined FUN_146565d1f(void)

longlong FUN_146565d1f(void)

{
  if (DAT_14cb90550 == 0) {
    FUN_14086a14e(&DAT_14cb90550,&PTR_FUN_14b4435f0);
  }
  return DAT_14cb90550;
}



// FUNCTION 146565d4e FUN_146565d4e body=43 status=ok
// SIG undefined FUN_146565d4e(void)

void FUN_146565d4e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14494321d(0x10);
  puVar1[1] = 0x800000050;
  *puVar1 = &PTR_FUN_14b446b00;
  return;
}



// FUNCTION 146565d79 FUN_146565d79 body=47 status=ok
// SIG undefined FUN_146565d79(void)

longlong FUN_146565d79(void)

{
  if (DAT_14cb90570 == 0) {
    FUN_14073dd9a(&DAT_14cb90570,&PTR_LAB_14b4438c8);
  }
  return DAT_14cb90570;
}



// FUNCTION 146565dad FUN_146565dad body=47 status=ok
// SIG undefined FUN_146565dad(void)

longlong FUN_146565dad(void)

{
  if (DAT_14cb90588 == 0) {
    FUN_14073dd9a(&DAT_14cb90588,&PTR_LAB_14b443da8);
  }
  return DAT_14cb90588;
}


