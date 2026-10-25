// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14988d594 FUN_14988d594 body=123 status=ok
// SIG undefined FUN_14988d594(void)

void FUN_14988d594(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bece8d0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14988d610 FUN_14988d610 body=21 status=ok
// SIG undefined FUN_14988d610(void)

undefined8 FUN_14988d610(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14988d626 FUN_14988d626 body=132 status=ok
// SIG undefined FUN_14988d626(void)

void FUN_14988d626(longlong param_1,int param_2)

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



// FUNCTION 14988d6ac FUN_14988d6ac body=114 status=ok
// SIG undefined FUN_14988d6ac(void)

void FUN_14988d6ac(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x80) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x80 + 4) = uVar4;
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



// FUNCTION 14988d71e FUN_14988d71e body=191 status=ok
// SIG undefined FUN_14988d71e(void)

longlong FUN_14988d71e(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xc0;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0xc0) == *param_3) {
          if (lVar3 != 0) goto LAB_14988d7c0;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0xb8);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_14988d7de(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xc0 + *param_1;
LAB_14988d7c0:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 14988d7de FUN_14988d7de body=281 status=ok
// SIG undefined FUN_14988d7de(void)

undefined4 * FUN_14988d7de(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14988c6de(param_1,local_48);
  FUN_14988d8f8(param_4,local_40);
  *(undefined4 *)(local_40 + 0xb8) = 0xffffffff;
  cVar1 = FUN_14988c7cc(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0xbc) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0xb8) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_14988c8de(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988d8f8 FUN_14988d8f8 body=255 status=ok
// SIG undefined FUN_14988d8f8(void)

void FUN_14988d8f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)((longlong)param_2 + 0x13) = 0;
  *(undefined2 *)((longlong)param_2 + 0x11) = 0;
  *(undefined2 *)((longlong)param_2 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x29) = 0;
  *(undefined1 *)((longlong)param_2 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_2 + 0x99) = 0;
  *(undefined4 *)((longlong)param_2 + 0x9c) = 0;
  *(undefined2 *)((longlong)param_2 + 0xa1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xa3) = 0;
  param_2[8] = DAT_14c846520;
  uVar1 = DAT_14c846518;
  param_2[6] = DAT_14c846510;
  param_2[7] = uVar1;
  param_2[0xb] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[9] = DAT_14c8464e0;
  param_2[10] = uVar1;
  param_2[0xe] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_2[0xc] = DAT_14c8464e0;
  param_2[0xd] = uVar1;
  param_2[0x11] = DAT_14c846508;
  uVar1 = DAT_14c846500;
  param_2[0xf] = DAT_14c8464f8;
  param_2[0x10] = uVar1;
  *param_2 = *(undefined8 *)*param_1;
  param_2[1] = 0x3f80000000000001;
  *(undefined1 *)(param_2 + 2) = 0;
  *(undefined8 *)((longlong)param_2 + 0x14) = 0x3f800000;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  param_2[0x12] = &DAT_3f8000003f800000;
  *(undefined1 *)(param_2 + 0x13) = 1;
  *(undefined1 *)(param_2 + 0x14) = 0;
  *(undefined8 *)((longlong)param_2 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xac) = 0x437a000041700000;
  *(undefined4 *)((longlong)param_2 + 0xb4) = 0x3f800000;
  return;
}



// FUNCTION 14988d9f8 FUN_14988d9f8 body=139 status=ok
// SIG undefined FUN_14988d9f8(void)

void FUN_14988d9f8(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (DAT_14c872d28 == (longlong *)0x0) {
    uVar2 = 0xc;
  }
  else if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
    uVar2 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - DAT_14c841e01];
  }
  else {
    uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,0xc,4);
  }
  iVar1 = (int)(uVar2 >> 2);
  iVar3 = 0x7fffffff;
  if (2 < iVar1) {
    iVar3 = iVar1;
  }
  FUN_1446f8d3c(param_1,0,iVar3,4,4);
  *(int *)(param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 14988da84 FUN_14988da84 body=48 status=ok
// SIG undefined FUN_14988da84(void)

void FUN_14988da84(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x280,0x10);
  }
  return;
}



// FUNCTION 14988dab4 FUN_14988dab4 body=48 status=ok
// SIG undefined FUN_14988dab4(void)

void FUN_14988dab4(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x2b0,0x10);
  }
  return;
}



// FUNCTION 14988dae4 FUN_14988dae4 body=201 status=ok
// SIG undefined FUN_14988dae4(void)

undefined8 * FUN_14988dae4(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  FUN_14988a7ea();
  *param_1 = &PTR_FUN_14becce70;
  uVar2 = *(undefined4 *)(param_2 + 0x3c);
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  uVar4 = *(undefined4 *)(param_2 + 0x44);
  uVar5 = *(undefined4 *)(param_2 + 0x44);
  uVar6 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar8 = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 9) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 10) = uVar8;
  FUN_14988dc42(param_1 + 0xc,param_2 + 0x60);
  FUN_14988dcd4(param_1 + 0x32,param_2 + 400);
  param_1[0x4c] = *(undefined8 *)(param_2 + 0x260);
  *(undefined4 *)(param_1 + 0x4d) = *(undefined4 *)(param_2 + 0x268);
  param_1[0x4e] = 0;
  iVar1 = *(int *)(param_2 + 0x278);
  _Src = *(void **)(param_2 + 0x270);
  *(int *)(param_1 + 0x4f) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x4e,iVar1,0);
    memcpy((void *)param_1[0x4e],_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14988dbae FUN_14988dbae body=147 status=ok
// SIG undefined FUN_14988dbae(void)

void FUN_14988dbae(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x280,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x280)) {
      uVar5 = uVar4 / 0x280 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x280,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14988dc42 FUN_14988dc42 body=146 status=ok
// SIG undefined FUN_14988dc42(void)

longlong FUN_14988dc42(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  FUN_14988dd4c();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  _Src = *(void **)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_144756262((undefined8 *)(param_1 + 0xc0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 * 0x60);
  }
  puVar3 = (undefined8 *)(param_2 + 0xd0);
  puVar4 = (undefined8 *)(param_1 + 0xd0);
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return param_1;
}



// FUNCTION 14988dcd4 FUN_14988dcd4 body=119 status=ok
// SIG undefined FUN_14988dcd4(void)

longlong FUN_14988dcd4(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  FUN_14988dd4c();
  *(undefined8 *)(param_1 + 0xc0) = 0;
  iVar1 = *(int *)(param_2 + 200);
  _Src = *(void **)(param_2 + 0xc0);
  *(int *)(param_1 + 200) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xcc) = 0;
  }
  else {
    FUN_144a06ca8((undefined8 *)(param_1 + 0xc0),iVar1,0);
    memcpy(*(void **)(param_1 + 0xc0),_Src,(longlong)iVar1 << 2);
  }
  return param_1;
}



// FUNCTION 14988dd4c FUN_14988dd4c body=419 status=ok
// SIG undefined FUN_14988dd4c(void)

undefined8 * FUN_14988dd4c(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_144756262(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144756262(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_144756262(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 0x60);
  }
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447c510a(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1 << 2);
  }
  param_1[8] = 0;
  iVar1 = *(int *)(param_2 + 9);
  pvVar2 = (void *)param_2[8];
  *(int *)(param_1 + 9) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 8,iVar1,0);
    memcpy((void *)param_1[8],pvVar2,(longlong)iVar1 << 2);
  }
  puVar4 = param_2 + 10;
  puVar5 = param_1 + 10;
  for (lVar3 = 0xe; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return param_1;
}



// FUNCTION 14988def0 FUN_14988def0 body=146 status=ok
// SIG undefined FUN_14988def0(void)

void FUN_14988def0(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x2b0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x2b0)) {
      uVar5 = uVar4 / 0x2b0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x2b0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14988df84 FUN_14988df84 body=89 status=ok
// SIG undefined FUN_14988df84(void)

void FUN_14988df84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 * 8,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 3)) {
    uVar3 = uVar1 >> 3 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 14988dfde FUN_14988dfde body=95 status=ok
// SIG undefined FUN_14988dfde(void)

void FUN_14988dfde(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14988e03e FUN_14988e03e body=132 status=ok
// SIG undefined FUN_14988e03e(void)

void FUN_14988e03e(longlong param_1,int param_2)

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



// FUNCTION 14988e0c4 FUN_14988e0c4 body=147 status=ok
// SIG undefined FUN_14988e0c4(void)

void FUN_14988e0c4(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xa0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xa0)) {
      uVar5 = uVar4 / 0xa0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xa0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14988e226 FUN_14988e226 body=68 status=ok
// SIG undefined FUN_14988e226(void)

void FUN_14988e226(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14988e26a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405b3ec2(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14988e26a FUN_14988e26a body=322 status=ok
// SIG undefined FUN_14988e26a(void)

void FUN_14988e26a(longlong *param_1)

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



// FUNCTION 14988e3ae FUN_14988e3ae body=335 status=ok
// SIG undefined FUN_14988e3ae(void)

undefined4 * FUN_14988e3ae(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_14988e4fe(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)((longlong)local_40 + 0xc) = uVar3;
  *(undefined4 *)(local_40 + 2) = uVar4;
  *(undefined4 *)((longlong)local_40 + 0x14) = uVar5;
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  uVar11 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar7 = (uint)uVar2 & 0xffff;
  uVar11 = ((uint)uVar2 << 0x10 | uVar7) + (int)((ulonglong)uVar2 >> 0x20) +
           (uVar11 << 0x13 | uVar11 & 0xffff) + (uVar7 >> 4);
  cVar6 = FUN_14988e5e4(param_1,uVar11,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar6 == '\0') {
    uVar7 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar9 = 1;
    if (3 < uVar7) {
      uVar8 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar9 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar9 <= *(int *)(param_1 + 0x48))) {
      uVar11 = *(int *)(param_1 + 0x48) - 1U & uVar11;
      *(uint *)((longlong)local_40 + 0x1c) = uVar11;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar11) * 4) = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar9;
      FUN_14988e6e0(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988e4fe FUN_14988e4fe body=229 status=ok
// SIG undefined FUN_14988e4fe(void)

int * FUN_14988e4fe(longlong *param_1,int *param_2)

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
      FUN_1405b363e(param_1,iVar6);
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



// FUNCTION 14988e5e4 FUN_14988e5e4 body=137 status=ok
// SIG undefined FUN_14988e5e4(void)

undefined8 FUN_14988e5e4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        puVar1 = (undefined4 *)(*param_1 + (longlong)iVar7 * 0x20);
        if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x20) == *param_3) {
          lVar4 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar5 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(longlong *)(puVar1 + 4) = param_3[2];
          *puVar1 = (int)lVar4;
          puVar1[1] = uVar2;
          puVar1[2] = (int)lVar5;
          puVar1[3] = uVar3;
          FUN_14988e66e((int)lVar4,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = puVar1[6];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 14988e66e FUN_14988e66e body=114 status=ok
// SIG undefined FUN_14988e66e(void)

void FUN_14988e66e(longlong *param_1,int param_2)

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



// FUNCTION 14988e6e0 FUN_14988e6e0 body=476 status=ok
// SIG undefined FUN_14988e6e0(void)

void FUN_14988e6e0(longlong *param_1)

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
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
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



// FUNCTION 14988e8be FUN_14988e8be body=95 status=ok
// SIG undefined FUN_14988e8be(void)

void FUN_14988e8be(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 14988e91e FUN_14988e91e body=132 status=ok
// SIG undefined FUN_14988e91e(void)

void FUN_14988e91e(longlong param_1,int param_2)

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



// FUNCTION 14988e9a4 FUN_14988e9a4 body=62 status=ok
// SIG undefined FUN_14988e9a4(void)

void FUN_14988e9a4(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14988e9e2(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14988e9e2 FUN_14988e9e2 body=93 status=ok
// SIG undefined FUN_14988e9e2(void)

ulonglong FUN_14988e9e2(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14988ea40 FUN_14988ea40 body=62 status=ok
// SIG undefined FUN_14988ea40(void)

void FUN_14988ea40(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14988ea7e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,8,8);
  }
  return;
}



// FUNCTION 14988ea7e FUN_14988ea7e body=93 status=ok
// SIG undefined FUN_14988ea7e(void)

ulonglong FUN_14988ea7e(uint param_1,uint param_2)

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
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 3,8);
      uVar1 = uVar1 >> 3;
    }
  }
  return uVar1;
}



// FUNCTION 14988eadc FUN_14988eadc body=48 status=ok
// SIG undefined FUN_14988eadc(void)

void FUN_14988eadc(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x68,8);
  }
  return;
}



// FUNCTION 14988eb0c FUN_14988eb0c body=143 status=ok
// SIG undefined FUN_14988eb0c(void)

void FUN_14988eb0c(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x68,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x68)) {
      uVar5 = uVar4 / 0x68 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x68,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 14988eb9c FUN_14988eb9c body=352 status=ok
// SIG undefined FUN_14988eb9c(void)

undefined4 * FUN_14988eb9c(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  void *_Src;
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
  FUN_14988ecfe(param_1,local_48);
  _Src = (void *)param_3[1];
  uVar1 = *(undefined8 *)*param_3;
  *local_40 = uVar1;
  memcpy(local_40 + 2,_Src,0xa0);
  *(undefined4 *)(local_40 + 0x16) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar4 = (uint)uVar1 & 0xffff;
  uVar8 = ((uint)uVar1 << 0x10 | uVar4) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar4 >> 4);
  cVar3 = FUN_14988edee(param_1,uVar8,local_40,&local_4c);
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
      *(uint *)((longlong)local_40 + 0xb4) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x16) =
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
      FUN_14988ef00(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14988ecfe FUN_14988ecfe body=240 status=ok
// SIG undefined FUN_14988ecfe(void)

int * FUN_14988ecfe(longlong *param_1,int *param_2)

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
      FUN_1457dd3c4(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xc0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xc0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xc0 + *param_1;
  return param_2;
}



// FUNCTION 14988edee FUN_14988edee body=152 status=ok
// SIG undefined FUN_14988edee(void)

undefined8 FUN_14988edee(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xc0);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0xc0) == *param_3) {
          memmove(_Dst,param_3,0xb0);
          FUN_14988ee86(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0xb0);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 14988ee86 FUN_14988ee86 body=122 status=ok
// SIG undefined FUN_14988ee86(void)

void FUN_14988ee86(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xc0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xc0 + 4) = uVar4;
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



// FUNCTION 14988ef00 FUN_14988ef00 body=483 status=ok
// SIG undefined FUN_14988ef00(void)

void FUN_14988ef00(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xc0;
        uVar4 = *(undefined8 *)(lVar3 + lVar7);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0xb4 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0xb0 + lVar7) =
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



// FUNCTION 14988f128 FUN_14988f128 body=4168 status=ok
// SIG undefined FUN_14988f128(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14988f128(int *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  longlong lVar14;
  double *pdVar15;
  int iVar16;
  longlong lVar17;
  longlong lVar18;
  double *pdVar19;
  uint uVar20;
  uint uVar21;
  double *pdVar22;
  longlong lVar23;
  ulonglong uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar36;
  undefined1 auVar35 [16];
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar45;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  double dVar48;
  float fVar49;
  double dVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  double dVar55;
  double dVar56;
  double dVar57;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar63;
  float fVar64;
  undefined1 auVar65 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  undefined1 auVar69 [16];
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  double dVar74;
  double dVar75;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [16];
  double local_2a8;
  undefined8 uStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  undefined1 local_258 [16];
  double local_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2d8;
  uVar20 = param_1[1];
  if (((int)uVar20 < (int)param_2[1] && -1 < (int)uVar20) &&
     (iVar3 = *param_1, iVar3 < (int)param_2[1] && -1 < iVar3)) {
    lVar14 = *param_3;
    lVar17 = (ulonglong)uVar20 * 0x60;
    pdVar22 = (double *)(lVar14 + 0x20 + lVar17);
    dVar45 = *pdVar22;
    dVar32 = pdVar22[1];
    bVar2 = *(byte *)(param_1 + 0x1c);
    if ((bVar2 & 1) == 0) {
      pdVar22 = (double *)0x0;
    }
    else {
      fVar37 = (float)*(double *)(param_1 + 0x1e);
      fVar31 = (float)(dVar45 - *(double *)(param_1 + 0xc));
      fVar49 = -fVar37;
      pdVar22 = (double *)(ulonglong)-(uint)(fVar37 < fVar31 || fVar31 < fVar49);
      if (fVar37 <= fVar31) {
        fVar31 = fVar37;
      }
      if (fVar31 <= fVar49) {
        fVar31 = fVar49;
      }
      dVar45 = (double)fVar31;
    }
    if ((bVar2 & 2) != 0) {
      fVar37 = (float)*(double *)(param_1 + 0x20);
      fVar31 = (float)(dVar32 - *(double *)(param_1 + 0xe));
      fVar49 = -fVar37;
      pdVar22 = (double *)(ulonglong)-(uint)(fVar37 < fVar31 || fVar31 < fVar49);
      if (fVar37 <= fVar31) {
        fVar31 = fVar37;
      }
      if (fVar31 <= fVar49) {
        fVar31 = fVar49;
      }
      dVar32 = (double)fVar31;
    }
    dVar74 = *(double *)(lVar14 + 0x30 + lVar17);
    dVar46 = *(double *)(lVar14 + lVar17);
    dVar50 = ((double *)(lVar14 + lVar17))[1];
    pdVar15 = (double *)(lVar14 + 0x10 + lVar17);
    dVar67 = *pdVar15;
    dVar55 = pdVar15[1];
    auVar65 = *(undefined1 (*) [16])(lVar14 + 0x40 + lVar17);
    dVar36 = auVar65._0_8_;
    dVar57 = auVar65._8_8_;
    auVar61 = *(undefined1 (*) [16])(lVar14 + 0x50 + lVar17);
    dVar39 = auVar61._0_8_;
    if ((bVar2 & 4) == 0) {
      if (((ulonglong)pdVar22 & 1) == 0) goto LAB_14988ff49;
    }
    else {
      fVar49 = (float)*(double *)(param_1 + 0x22);
      fVar64 = (float)(dVar74 - *(double *)(param_1 + 0x10));
      fVar37 = -fVar49;
      fVar31 = fVar64;
      if (fVar49 <= fVar64) {
        fVar31 = fVar49;
      }
      if (fVar31 <= fVar37) {
        fVar31 = fVar37;
      }
      dVar74 = (double)fVar31;
      if ((fVar37 <= fVar64) && (fVar64 <= fVar49)) goto LAB_14988ff49;
    }
    lVar14 = lVar14 + lVar17;
    *(double *)(lVar14 + 0x20) = dVar45;
    *(double *)(lVar14 + 0x28) = dVar32;
    *(double *)(lVar14 + 0x30) = dVar74;
    *(undefined8 *)(lVar14 + 0x38) = 0;
    lVar14 = *param_2;
    lVar23 = (longlong)param_1[1] * 0x130 + lVar14;
    lVar17 = (longlong)*param_1 * 0x130 + lVar14;
    pdVar15 = (double *)(lVar17 + 0x10);
    auVar33 = *(undefined1 (*) [16])(lVar17 + 0x50);
    dVar40 = auVar33._0_8_;
    dVar47 = auVar33._8_8_;
    auVar27 = *(undefined1 (*) [16])(lVar17 + 0x60);
    dVar41 = auVar27._0_8_;
    auVar65 = minpd(auVar65,auVar33);
    auVar69 = minpd(auVar61,auVar27);
    auVar33._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
    iVar16 = movmskpd((int)lVar14,auVar33);
    auVar65._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
    auVar65._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
    uVar20 = movmskpd(CONCAT31((int3)((uint)iVar3 >> 8),bVar2),auVar65);
    local_2b8 = auVar61;
    if ((uVar20 & 0x3fffffff) == 0 && iVar16 == 0) {
      dVar11 = *pdVar15;
      dVar66 = *(double *)(lVar17 + 0x18);
      dVar56 = *(double *)(lVar17 + 0x28);
      dVar68 = *(double *)(lVar17 + 0x28);
      dVar75 = *(double *)(lVar17 + 0x18);
      dVar63 = *(double *)(lVar17 + 0x18);
      dVar12 = *(double *)(lVar17 + 0x20);
      dVar13 = *(double *)(lVar17 + 0x28);
      dVar38 = *(double *)(lVar17 + 0x20);
      dVar48 = *(double *)(lVar17 + 0x20);
      dVar8 = dVar50 * dVar38 * -1.0 + dVar67 * dVar75 + dVar55 * *pdVar15 * 1.0 + dVar46 * dVar56;
      dVar9 = dVar46 * dVar48 * 1.0 + dVar55 * dVar63 + dVar67 * *pdVar15 * -1.0 + dVar50 * dVar68;
      auVar69._0_8_ =
           dVar55 * dVar38 * 1.0 + ((*pdVar15 * dVar50 * 1.0 + dVar67 * dVar56) - dVar46 * dVar75);
      auVar69._8_8_ =
           dVar67 * dVar48 * -1.0 + ((*pdVar15 * dVar46 * -1.0 + dVar55 * dVar68) - dVar50 * dVar63)
      ;
      dVar45 = dVar45 * dVar40;
      dVar32 = dVar32 * dVar47;
      dVar74 = dVar74 * dVar41;
      dVar75 = auVar27._8_8_ * 0.0;
      dVar67 = dVar32 * dVar11 - dVar45 * dVar66;
      dVar63 = dVar74 * dVar66 - dVar32 * dVar12;
      dVar46 = dVar45 * dVar12 - dVar74 * dVar11;
      dVar50 = dVar75 * dVar13 - dVar75 * dVar13;
      dVar63 = dVar63 + dVar63;
      dVar46 = dVar46 + dVar46;
      dVar67 = dVar67 + dVar67;
      dVar50 = dVar50 + dVar50;
      dVar45 = (dVar67 * dVar66 - dVar12 * dVar46) + dVar56 * dVar63 + dVar45 +
               *(double *)(lVar17 + 0x30);
      dVar55 = (dVar63 * dVar12 - dVar67 * dVar11) + dVar68 * dVar46 + dVar32 +
               *(double *)(lVar17 + 0x38);
      dVar32 = (dVar46 * dVar11 - dVar66 * dVar63) + dVar56 * dVar67 + dVar74 +
               *(double *)(lVar17 + 0x40);
      dVar74 = (dVar50 * dVar13 - dVar50 * dVar13) + dVar68 * dVar50 + dVar75 +
               *(double *)(lVar17 + 0x48);
      pdVar15 = (double *)0x0;
    }
    else {
      dVar8 = *pdVar15;
      dVar9 = *(double *)(lVar17 + 0x18);
      dVar11 = *(double *)(lVar17 + 0x20);
      dVar63 = dVar9 + dVar9;
      dVar75 = dVar11 + dVar11;
      dVar66 = dVar8 * (dVar8 + dVar8);
      uStack_2a0 = 0;
      dVar56 = *(double *)(lVar17 + 0x28);
      dVar38 = dVar75 * dVar56;
      dVar48 = (dVar8 + dVar8) * *(double *)(lVar17 + 0x28);
      dVar56 = dVar63 * dVar56;
      local_1a8 = (1.0 - (dVar66 + dVar9 * dVar63)) * dVar41;
      local_1d8 = (dVar63 * dVar8 - dVar38) * dVar47;
      dVar68 = (dVar75 * dVar9 - dVar48) * dVar41;
      local_1f8 = (1.0 - (dVar11 * dVar75 + dVar9 * dVar63)) * dVar40;
      dStack_1d0 = (1.0 - (dVar11 * dVar75 + dVar66)) * dVar47;
      dStack_1f0 = (dVar63 * dVar8 + dVar38) * dVar40;
      local_1c8 = (dVar75 * dVar9 + dVar48) * dVar47;
      local_1e8 = (*pdVar15 * dVar75 - dVar56) * dVar40;
      pdVar22 = &local_1f8;
      uStack_1e0 = 0;
      uStack_1c0 = 0;
      local_1b8._8_4_ = SUB84(dVar68,0);
      local_1b8._0_8_ = (dVar56 + *pdVar15 * dVar75) * dVar41;
      local_1b8._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
      uStack_1a0 = 0;
      local_198 = *(undefined8 *)(lVar17 + 0x30);
      uStack_190 = *(undefined8 *)(lVar17 + 0x38);
      local_188 = *(undefined8 *)(lVar17 + 0x40);
      uStack_180 = 0x3ff0000000000000;
      dVar63 = dVar50 + dVar50;
      dVar56 = dVar67 + dVar67;
      dVar38 = dVar46 * (dVar46 + dVar46);
      local_228 = (1.0 - (dVar38 + dVar50 * dVar63)) * dVar39;
      dVar68 = (dVar46 + dVar46) * dVar55;
      dVar75 = (dVar56 * dVar50 - dVar68) * dVar39;
      local_278 = (1.0 - (dVar67 * dVar56 + dVar50 * dVar63)) * dVar36;
      dVar67 = (1.0 - (dVar67 * dVar56 + dVar38)) * dVar57;
      dStack_270 = (dVar63 * dVar46 + dVar56 * dVar55) * dVar36;
      local_248 = (dVar56 * dVar50 + dVar68) * dVar57;
      local_268 = (dVar46 * dVar56 - dVar63 * dVar55) * dVar36;
      uStack_260 = 0;
      local_258._8_4_ = SUB84(dVar67,0);
      local_258._0_8_ = (dVar63 * dVar46 - dVar56 * dVar55) * dVar57;
      local_258._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
      uStack_240 = 0;
      local_238._8_4_ = SUB84(dVar75,0);
      local_238._0_8_ = (dVar63 * dVar55 + dVar46 * dVar56) * dVar39;
      local_238._12_4_ = (int)((ulonglong)dVar75 >> 0x20);
      uStack_220 = 0;
      uStack_200 = 0x3ff0000000000000;
      pdVar15 = &local_178;
      local_2a8 = dVar74;
      local_218 = dVar45;
      dStack_210 = dVar32;
      local_208 = dVar74;
      FUN_1447fea8d(pdVar15);
      FUN_144a1c686(pdVar15,0x3e45798ee0000000);
      auVar65 = _DAT_149934d80;
      auVar25._8_8_ = -(ulonglong)(0.0 <= dVar57 * dVar47);
      auVar25._0_8_ = -(ulonglong)(0.0 <= dVar36 * dVar40);
      auVar33 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar25);
      uVar24 = -(ulonglong)(0.0 <= dVar39 * dVar41);
      dVar32 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
      dVar45 = auVar33._0_8_;
      local_168 = local_168 * dVar45;
      local_170 = local_170 * dVar45;
      local_178 = local_178 * dVar45;
      dVar45 = auVar33._8_8_;
      local_148 = local_148 * dVar45;
      local_150 = local_150 * dVar45;
      local_158 = dVar45 * local_158;
      local_128 = local_128 * dVar32;
      local_130 = local_130 * dVar32;
      local_138 = dVar32 * local_138;
      FUN_14481fd10(&local_298);
      dVar32 = local_288 * local_288 + local_298 * local_298;
      dVar45 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
      auVar42._0_8_ = dVar32 + dVar45;
      auVar42._8_8_ = dVar32 + dVar45;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_);
      auVar33 = sqrtpd(auVar42,auVar42);
      auVar65 = divpd(auVar65,auVar33);
      auVar51._0_8_ = auVar65._0_8_ * local_288;
      auVar51._8_8_ = auVar65._8_8_ * dStack_280;
      dVar8 = (double)((ulonglong)(local_298 * auVar65._0_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar42._0_8_));
      dVar9 = (double)((ulonglong)(dStack_290 * auVar65._8_8_) &
                      -(ulonglong)(9.99999993922529e-09 <= auVar42._8_8_));
      auVar69 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar51,auVar26);
      dVar74 = 0.0;
      dVar32 = local_108;
      dVar45 = local_118;
      dVar55 = dStack_110;
    }
    *(double *)(lVar23 + 0x30) = dVar45;
    *(double *)(lVar23 + 0x38) = dVar55;
    *(double *)(lVar23 + 0x40) = dVar32;
    *(double *)(lVar23 + 0x48) = dVar74;
    auVar6._8_4_ = SUB84(dVar57 * dVar47,0);
    auVar6._0_8_ = dVar36 * dVar40;
    auVar6._12_4_ = (int)((ulonglong)(dVar57 * dVar47) >> 0x20);
    *(undefined1 (*) [16])(lVar23 + 0x50) = auVar6;
    *(double *)(lVar23 + 0x60) = dVar39 * dVar41;
    *(double *)(lVar23 + 0x68) = auVar61._8_8_ * auVar27._8_8_;
    dVar36 = auVar69._0_8_;
    dVar39 = auVar69._8_8_;
    dVar32 = dVar36 * dVar36 + dVar8 * dVar8;
    dVar45 = dVar39 * dVar39 + dVar9 * dVar9;
    auVar34._0_8_ = dVar32 + dVar45;
    auVar34._8_8_ = dVar32 + dVar45;
    auVar27._8_8_ = -(ulonglong)(1e-08 <= auVar34._8_8_);
    auVar27._0_8_ = -(ulonglong)(1e-08 <= auVar34._0_8_);
    auVar65 = sqrtpd(auVar34,auVar34);
    uVar70 = (undefined4)DAT_149934d80;
    uVar71 = DAT_149934d80._4_4_;
    uVar72 = DAT_149934d80._8_4_;
    uVar73 = DAT_149934d80._12_4_;
    auVar33 = divpd(_DAT_149934d80,auVar65);
    auVar43._0_8_ = auVar33._0_8_ * dVar36;
    auVar43._8_8_ = auVar33._8_8_ * dVar39;
    uVar24 = (ulonglong)(dVar9 * auVar33._8_8_) & -(ulonglong)(1e-08 <= auVar34._8_8_);
    auVar65 = blendvpd(_DAT_149935300,auVar43,auVar27);
    auVar61._8_4_ = (int)uVar24;
    auVar61._0_8_ = (ulonglong)(dVar8 * auVar33._0_8_) & -(ulonglong)(1e-08 <= auVar34._0_8_);
    auVar61._12_4_ = (int)(uVar24 >> 0x20);
    *(undefined1 (*) [16])(lVar23 + 0x10) = auVar61;
    *(undefined1 (*) [16])(lVar23 + 0x20) = auVar65;
    lVar14 = (longlong)param_1[1];
    if (param_1[1] + 1 < (int)param_2[1]) {
      lVar17 = lVar14 + 1;
      lVar23 = lVar14 * 0x60 + 0xb0;
      lVar14 = lVar14 * 0x130 + 400;
      do {
        lVar4 = *param_2;
        lVar5 = *param_3;
        lVar18 = (longlong)*(int *)(lVar4 + -0x60 + lVar14) * 0x130 + lVar4;
        pdVar19 = (double *)(lVar18 + 0x10);
        auVar65 = *(undefined1 (*) [16])(lVar18 + 0x50);
        dVar32 = auVar65._0_8_;
        dVar36 = auVar65._8_8_;
        auVar61 = *(undefined1 (*) [16])(lVar18 + 0x60);
        dVar45 = auVar61._0_8_;
        auVar33 = *(undefined1 (*) [16])(lVar5 + -0x10 + lVar23);
        auVar27 = *(undefined1 (*) [16])(lVar5 + lVar23);
        auVar65 = minpd(auVar33,auVar65);
        auVar69 = minpd(auVar27,auVar61);
        auVar44._8_8_ = -(ulonglong)(auVar65._8_8_ < 0.0);
        auVar44._0_8_ = -(ulonglong)(auVar65._0_8_ < 0.0);
        uVar20 = movmskpd((int)pdVar15,auVar44);
        pdVar15 = (double *)(ulonglong)uVar20;
        auVar52._8_8_ = -(ulonglong)(auVar69._8_8_ < 0.0);
        auVar52._0_8_ = -(ulonglong)(auVar69._0_8_ < 0.0);
        uVar21 = movmskpd((int)pdVar22,auVar52);
        if ((uVar21 & 0x3fffffff) == 0 && uVar20 == 0) {
          pdVar22 = (double *)(lVar5 + -0x50 + lVar23);
          dVar55 = *pdVar22;
          dVar40 = pdVar22[1];
          pdVar22 = (double *)(lVar5 + -0x40 + lVar23);
          dVar41 = *pdVar22;
          dVar47 = pdVar22[1];
          dVar56 = *pdVar19;
          dVar68 = *(double *)(lVar18 + 0x18);
          dVar63 = *(double *)(lVar18 + 0x20);
          dVar75 = *(double *)(lVar18 + 0x28);
          dVar39 = *(double *)(lVar18 + 0x28);
          dVar57 = *(double *)(lVar18 + 0x28);
          dVar46 = *(double *)(lVar18 + 0x18);
          dVar74 = *(double *)(lVar18 + 0x18);
          dVar67 = *(double *)(lVar18 + 0x20);
          dVar50 = *(double *)(lVar18 + 0x20);
          dVar38 = dVar40 * dVar67 * -1.0 +
                   dVar41 * dVar46 + dVar47 * *pdVar19 * 1.0 + dVar55 * dVar39;
          dVar48 = dVar55 * dVar50 * 1.0 +
                   dVar47 * dVar74 + dVar41 * *pdVar19 * -1.0 + dVar40 * dVar57;
          auVar54._0_8_ =
               dVar47 * dVar67 * 1.0 +
               ((*pdVar19 * dVar40 * 1.0 + dVar41 * dVar39) - dVar55 * dVar46);
          auVar54._8_8_ =
               dVar41 * dVar50 * -1.0 +
               ((*pdVar19 * dVar55 * -1.0 + dVar47 * dVar57) - dVar40 * dVar74);
          pdVar22 = (double *)(lVar5 + -0x30 + lVar23);
          dVar74 = *pdVar22 * dVar32;
          dVar46 = pdVar22[1] * dVar36;
          pdVar22 = (double *)(lVar5 + -0x20 + lVar23);
          dVar50 = *pdVar22 * dVar45;
          dVar67 = pdVar22[1] * auVar61._8_8_;
          dVar55 = dVar46 * dVar56 - dVar68 * dVar74;
          dVar40 = dVar50 * dVar68 - dVar63 * dVar46;
          dVar41 = dVar74 * dVar63 - dVar56 * dVar50;
          dVar47 = dVar67 * dVar75 - dVar75 * dVar67;
          dVar40 = dVar40 + dVar40;
          dVar41 = dVar41 + dVar41;
          dVar55 = dVar55 + dVar55;
          dVar47 = dVar47 + dVar47;
          uVar70 = 0;
          uVar71 = 0x3ff00000;
          uVar72 = 0;
          uVar73 = 0x3ff00000;
          dVar74 = (dVar55 * dVar68 - dVar63 * dVar41) + dVar39 * dVar40 + dVar74 +
                   *(double *)(lVar18 + 0x30);
          dVar46 = (dVar40 * dVar63 - dVar55 * dVar56) + dVar57 * dVar41 + dVar46 +
                   *(double *)(lVar18 + 0x38);
          dVar39 = (dVar41 * dVar56 - dVar68 * dVar40) + dVar39 * dVar55 + dVar50 +
                   *(double *)(lVar18 + 0x40);
          dVar57 = (dVar47 * dVar75 - dVar47 * dVar75) + dVar57 * dVar47 + dVar67 +
                   *(double *)(lVar18 + 0x48);
          pdVar22 = (double *)0x0;
        }
        else {
          dVar57 = *pdVar19;
          dVar74 = *(double *)(lVar18 + 0x18);
          dVar39 = *(double *)(lVar18 + 0x20);
          dVar46 = dVar74 + dVar74;
          dVar50 = dVar39 + dVar39;
          dVar67 = dVar57 * (dVar57 + dVar57);
          local_1f8 = ((double)CONCAT44(uVar71,uVar70) - (dVar39 * dVar50 + dVar74 * dVar46)) *
                      dVar32;
          dStack_1d0 = ((double)CONCAT44(uVar73,uVar72) - (dVar39 * dVar50 + dVar67)) * dVar36;
          local_1a8 = (1.0 - (dVar67 + dVar74 * dVar46)) * dVar45;
          dVar39 = *(double *)(lVar18 + 0x28);
          dVar67 = dVar50 * dVar39;
          dVar55 = (dVar57 + dVar57) * *(double *)(lVar18 + 0x28);
          dVar39 = dVar46 * dVar39;
          dStack_1f0 = (dVar46 * dVar57 + dVar67) * dVar32;
          local_1c8 = (dVar50 * dVar74 + dVar55) * dVar36;
          local_1d8 = (dVar46 * dVar57 - dVar67) * dVar36;
          local_1e8 = (*pdVar19 * dVar50 - dVar39) * dVar32;
          uStack_1e0 = 0;
          uStack_1c0 = 0;
          local_1b8._8_8_ = (dVar50 * dVar74 - dVar55) * dVar45;
          local_1b8._0_8_ = (dVar39 + *pdVar19 * dVar50) * dVar45;
          uStack_1a0 = 0;
          local_198 = *(undefined8 *)(lVar18 + 0x30);
          uStack_190 = *(undefined8 *)(lVar18 + 0x38);
          local_188 = *(undefined8 *)(lVar18 + 0x40);
          uStack_180 = 0x3ff0000000000000;
          pdVar22 = (double *)(lVar5 + -0x50 + lVar23);
          dVar74 = *pdVar22;
          dVar46 = pdVar22[1];
          dVar50 = *(double *)(lVar5 + -0x40 + lVar23);
          pdVar22 = (double *)(lVar5 + -0x10 + lVar23);
          local_268 = *pdVar22;
          dVar67 = pdVar22[1];
          dVar55 = *(double *)(lVar5 + lVar23);
          dVar56 = dVar46 + dVar46;
          dVar40 = dVar50 + dVar50;
          dVar68 = dVar74 * (dVar74 + dVar74);
          local_278 = ((double)CONCAT44(uVar71,uVar70) - (dVar50 * dVar40 + dVar46 * dVar56)) *
                      local_268;
          local_228 = (1.0 - (dVar68 + dVar46 * dVar56)) * dVar55;
          dVar57 = *(double *)(lVar5 + -0x50 + lVar23) * dVar40;
          pdVar22 = (double *)(lVar5 + -0x38 + lVar23);
          dVar39 = *pdVar22;
          dVar41 = dVar40 * dVar39;
          dVar47 = (dVar74 + dVar74) * *pdVar22;
          dVar39 = dVar56 * dVar39;
          dStack_270 = (dVar56 * dVar74 + dVar41) * local_268;
          local_248 = (dVar40 * dVar46 + dVar47) * dVar67;
          local_268 = (dVar57 - dVar39) * local_268;
          uStack_260 = 0;
          local_258._8_8_ = ((double)CONCAT44(uVar73,uVar72) - (dVar50 * dVar40 + dVar68)) * dVar67;
          local_258._0_8_ = (dVar56 * dVar74 - dVar41) * dVar67;
          uStack_240 = 0;
          local_238._8_8_ = (dVar40 * dVar46 - dVar47) * dVar55;
          local_238._0_8_ = (dVar39 + dVar57) * dVar55;
          uStack_220 = 0;
          pdVar22 = (double *)(lVar5 + -0x30 + lVar23);
          local_218 = *pdVar22;
          dStack_210 = pdVar22[1];
          local_208 = *(double *)(lVar5 + -0x20 + lVar23);
          uStack_200 = 0x3ff0000000000000;
          pdVar22 = &local_1f8;
          FUN_1447fea8d(&local_178,&local_278);
          FUN_144a1c686(&local_178,0x3e45798ee0000000);
          auVar28._8_8_ = -(ulonglong)(0.0 <= auVar33._8_8_ * dVar36);
          auVar28._0_8_ = -(ulonglong)(0.0 <= auVar33._0_8_ * dVar32);
          auVar10._4_4_ = uVar71;
          auVar10._0_4_ = uVar70;
          auVar10._8_4_ = uVar72;
          auVar10._12_4_ = uVar73;
          auVar65 = blendvpd(_DAT_149936790,auVar10,auVar28);
          uVar24 = -(ulonglong)(0.0 <= auVar27._0_8_ * dVar45);
          dVar39 = (double)(~uVar24 & 0xbff0000000000000 | uVar24 & 0x3ff0000000000000);
          dVar57 = auVar65._0_8_;
          local_168 = local_168 * dVar57;
          local_170 = local_170 * dVar57;
          local_178 = local_178 * dVar57;
          dVar57 = auVar65._8_8_;
          local_148 = local_148 * dVar57;
          local_150 = local_150 * dVar57;
          local_158 = dVar57 * local_158;
          local_128 = local_128 * dVar39;
          local_130 = local_130 * dVar39;
          local_138 = dVar39 * local_138;
          pdVar15 = &local_178;
          FUN_14481fd10(&local_298);
          dVar39 = local_288 * local_288 + local_298 * local_298;
          dVar57 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
          auVar53._0_8_ = dVar39 + dVar57;
          auVar53._8_8_ = dVar39 + dVar57;
          auVar29._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_);
          auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_);
          auVar65 = sqrtpd(auVar53,auVar53);
          auVar58._4_4_ = uVar71;
          auVar58._0_4_ = uVar70;
          auVar58._12_4_ = uVar73;
          auVar58._8_4_ = uVar72;
          auVar65 = divpd(auVar58,auVar65);
          auVar59._0_8_ = auVar65._0_8_ * local_288;
          auVar59._8_8_ = auVar65._8_8_ * dStack_280;
          dVar38 = (double)((ulonglong)(local_298 * auVar65._0_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar53._0_8_));
          dVar48 = (double)((ulonglong)(dStack_290 * auVar65._8_8_) &
                           -(ulonglong)(9.99999993922529e-09 <= auVar53._8_8_));
          auVar54 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar59,auVar29);
          dVar57 = 0.0;
          dVar74 = local_118;
          dVar46 = dStack_110;
          dVar39 = local_108;
        }
        auVar7._8_4_ = SUB84(dVar46,0);
        auVar7._0_8_ = dVar74;
        auVar7._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        *(undefined1 (*) [16])(lVar4 + -0x30 + lVar14) = auVar7;
        pdVar19 = (double *)(lVar4 + -0x20 + lVar14);
        *pdVar19 = dVar39;
        pdVar19[1] = dVar57;
        pdVar19 = (double *)(lVar4 + -0x10 + lVar14);
        *pdVar19 = auVar33._0_8_ * dVar32;
        pdVar19[1] = auVar33._8_8_ * dVar36;
        dVar39 = auVar54._0_8_;
        dVar57 = auVar54._8_8_;
        dVar32 = dVar39 * dVar39 + dVar38 * dVar38;
        dVar36 = dVar57 * dVar57 + dVar48 * dVar48;
        auVar35._0_8_ = dVar32 + dVar36;
        auVar35._8_8_ = dVar32 + dVar36;
        *(double *)(lVar4 + lVar14) = auVar27._0_8_ * dVar45;
        ((double *)(lVar4 + lVar14))[1] = auVar27._8_8_ * auVar61._8_8_;
        auVar30._8_8_ = -(ulonglong)(1e-08 <= auVar35._8_8_);
        auVar30._0_8_ = -(ulonglong)(1e-08 <= auVar35._0_8_);
        auVar65 = sqrtpd(auVar35,auVar35);
        auVar60._4_4_ = uVar71;
        auVar60._0_4_ = uVar70;
        auVar60._12_4_ = uVar73;
        auVar60._8_4_ = uVar72;
        auVar61 = divpd(auVar60,auVar65);
        auVar62._0_8_ = auVar61._0_8_ * dVar39;
        auVar62._8_8_ = auVar61._8_8_ * dVar57;
        auVar65 = blendvpd(_DAT_149935300,auVar62,auVar30);
        puVar1 = (ulonglong *)(lVar4 + -0x50 + lVar14);
        *puVar1 = (ulonglong)(dVar38 * auVar61._0_8_) & -(ulonglong)(1e-08 <= auVar35._0_8_);
        puVar1[1] = (ulonglong)(dVar48 * auVar61._8_8_) & -(ulonglong)(1e-08 <= auVar35._8_8_);
        *(undefined1 (*) [16])(lVar4 + -0x40 + lVar14) = auVar65;
        lVar17 = lVar17 + 1;
        lVar23 = lVar23 + 0x60;
        lVar14 = lVar14 + 0x130;
      } while (lVar17 < (int)param_2[1]);
    }
  }
LAB_14988ff49:
  if ((local_f0 ^ (ulonglong)auStack_2d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149890172 FUN_149890172 body=4917 status=ok
// SIG undefined FUN_149890172(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149890172(int *param_1,longlong *param_2,longlong *param_3)

{
  ulonglong *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  double *pdVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  double *pdVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 *puVar21;
  uint uVar22;
  double *pdVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar41;
  undefined1 auVar36 [16];
  double dVar42;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  double dVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar51;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  double dVar52;
  double dVar59;
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar60;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  double dVar65;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar66;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar74;
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  double dVar75;
  double dVar76;
  undefined1 auVar77 [16];
  double dVar78;
  undefined1 auVar79 [16];
  double dVar80;
  undefined1 auStack_348 [32];
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  ulonglong *local_2f8;
  undefined1 *local_2f0;
  char *local_2e8;
  char local_2d9;
  ulonglong local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  undefined1 local_208 [16];
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_348;
  uVar20 = param_1[1];
  if (((int)uVar20 < (int)param_2[1] && -1 < (int)uVar20) &&
     (iVar15 = *param_1, pdVar23 = (double *)CONCAT71((int7)((ulonglong)param_3 >> 8),-1 < iVar15),
     iVar15 < (int)param_2[1] && -1 < iVar15)) {
    lVar14 = *param_3;
    lVar16 = (ulonglong)uVar20 * 0x60;
    dVar34 = *(double *)(lVar14 + lVar16);
    dVar42 = ((double *)(lVar14 + lVar16))[1];
    pdVar13 = (double *)(lVar14 + 0x10 + lVar16);
    dVar60 = *pdVar13;
    dVar71 = pdVar13[1];
    dVar52 = *(double *)(param_1 + 8) * -1.0;
    dVar59 = *(double *)(param_1 + 10) * 1.0;
    auVar46._8_8_ = dVar52;
    auVar46._0_8_ = dVar52;
    dVar35 = *(double *)(param_1 + 4);
    dVar43 = *(double *)(param_1 + 4);
    dVar33 = *(double *)(param_1 + 6);
    dVar41 = *(double *)(param_1 + 6);
    dVar80 = dVar42 * dVar52 * -1.0 + ((dVar34 * dVar59 - dVar71 * dVar35 * 1.0) - dVar60 * dVar33);
    dVar78 = dVar34 * dVar52 * 1.0 + ((dVar42 * dVar59 - dVar60 * dVar43 * -1.0) - dVar71 * dVar41);
    dVar45 = dVar71 * dVar52 * 1.0 + dVar34 * dVar33 + (dVar60 * dVar59 - dVar42 * dVar35 * 1.0);
    dVar66 = dVar60 * dVar52 * -1.0 + dVar42 * dVar41 + (dVar71 * dVar59 - dVar34 * dVar43 * -1.0);
    dVar68 = dVar45 * dVar45 + dVar80 * dVar80;
    dVar74 = dVar66 * dVar66 + dVar78 * dVar78;
    auVar72._0_8_ = dVar68 + dVar74;
    auVar72._8_8_ = dVar68 + dVar74;
    auVar36._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar72._8_8_);
    auVar36._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar72._0_8_);
    auVar73 = sqrtpd(auVar72,auVar72);
    auVar73 = divpd(_DAT_149934d80,auVar73);
    auVar55._0_8_ = auVar73._0_8_ * dVar45;
    auVar55._8_8_ = auVar73._8_8_ * dVar66;
    local_2a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar55,auVar36);
    pdVar13 = (double *)(lVar14 + 0x20 + lVar16);
    local_318 = *pdVar13;
    dStack_310 = pdVar13[1];
    pdVar13 = (double *)(lVar14 + 0x30 + lVar16);
    dVar45 = *pdVar13;
    dVar66 = pdVar13[1];
    uVar25 = (ulonglong)(dVar78 * auVar73._8_8_) &
             -(ulonglong)(9.99999993922529e-09 <= auVar72._8_8_);
    pdVar13 = (double *)(lVar14 + 0x40 + lVar16);
    local_328 = *pdVar13;
    dStack_320 = pdVar13[1];
    local_2f0 = local_2b8;
    pdVar13 = (double *)(lVar14 + 0x50 + lVar16);
    local_308 = *pdVar13;
    dStack_300 = pdVar13[1];
    local_2b8._8_4_ = (int)uVar25;
    local_2b8._0_8_ =
         (ulonglong)(dVar80 * auVar73._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar72._0_8_);
    local_2b8._12_4_ = (int)(uVar25 >> 0x20);
    dVar80 = *(double *)(param_1 + 0xc);
    dVar78 = *(double *)(param_1 + 0xe);
    dVar68 = *(double *)(param_1 + 0x10);
    dVar74 = *(double *)(param_1 + 0x12);
    dVar75 = dVar78 * dVar52 * -1.0 + ((dVar59 * dVar80 - dVar35 * dVar74 * 1.0) - dVar33 * dVar68);
    dVar76 = dVar80 * dVar52 * 1.0 + ((dVar59 * dVar78 - dVar43 * dVar68 * -1.0) - dVar41 * dVar74);
    dVar35 = dVar74 * dVar52 * 1.0 + dVar33 * dVar80 + (dVar59 * dVar68 - dVar35 * dVar78 * 1.0);
    dVar43 = dVar68 * dVar52 * -1.0 + dVar41 * dVar78 + (dVar59 * dVar74 - dVar43 * dVar80 * -1.0);
    dVar33 = dVar35 * dVar35 + dVar75 * dVar75;
    dVar41 = dVar43 * dVar43 + dVar76 * dVar76;
    auVar61._0_8_ = dVar33 + dVar41;
    auVar61._8_8_ = dVar33 + dVar41;
    auVar73._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
    auVar73._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
    auVar36 = sqrtpd(auVar61,auVar61);
    auVar36 = divpd(_DAT_149934d80,auVar36);
    auVar79._0_8_ = auVar36._0_8_ * dVar35;
    auVar79._8_8_ = auVar36._8_8_ * dVar43;
    local_2c8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar79,auVar73);
    local_2d8 = (ulonglong)(dVar75 * auVar36._0_8_) &
                -(ulonglong)(9.99999993922529e-09 <= auVar61._0_8_);
    uStack_2d0 = (ulonglong)(dVar76 * auVar36._8_8_) &
                 -(ulonglong)(9.99999993922529e-09 <= auVar61._8_8_);
    local_2f8 = &local_2d8;
    local_2e8 = &local_2d9;
    local_2d9 = '\0';
    bVar12 = *(byte *)(param_1 + 0x24);
    puVar21 = local_2f0;
    if ((bVar12 & 1) != 0) {
      auVar47._4_12_ = auVar46._4_12_;
      auVar47._0_4_ = (float)*(double *)(param_1 + 0x26);
      puVar21 = &DAT_00000001;
      FUN_144672c96(&local_2f8,1,auVar47._0_8_);
      bVar12 = *(byte *)(param_1 + 0x24);
    }
    uVar19 = SUB84(puVar21,0);
    if ((bVar12 & 2) != 0) {
      uVar19 = 2;
      FUN_144672c96(&local_2f8,2,(float)*(double *)(param_1 + 0x28));
      bVar12 = *(byte *)(param_1 + 0x24);
    }
    auVar36 = _DAT_149934d80;
    if ((bVar12 & 4) != 0) {
      uVar19 = 3;
      FUN_144672c96(&local_2f8,3,(float)*(double *)(param_1 + 0x2a));
    }
    dVar41 = dStack_300;
    dVar33 = local_308;
    dVar43 = dStack_320;
    dVar35 = local_328;
    if (local_2d9 == '\x01') {
      dVar78 = *(double *)(param_1 + 10);
      dVar80 = *(double *)(param_1 + 10);
      dVar68 = *(double *)(param_1 + 6);
      dVar74 = *(double *)(param_1 + 6);
      dVar52 = *(double *)(param_1 + 4);
      dVar59 = *(double *)(param_1 + 4);
      dVar76 = *(double *)(param_1 + 8);
      dVar75 = *(double *)(param_1 + 8);
      dVar44 = (double)local_2b8._8_8_ * dVar76 * -1.0 +
               (double)local_2a8._0_8_ * dVar68 +
               dVar52 * (double)local_2a8._8_8_ * 1.0 + dVar78 * (double)local_2b8._0_8_;
      dVar51 = (double)local_2b8._0_8_ * dVar75 * 1.0 +
               (double)local_2a8._8_8_ * dVar74 +
               dVar59 * (double)local_2a8._0_8_ * -1.0 + dVar80 * (double)local_2b8._8_8_;
      dVar78 = (double)local_2a8._8_8_ * dVar76 * 1.0 +
               ((dVar52 * (double)local_2b8._8_8_ * 1.0 + dVar78 * (double)local_2a8._0_8_) -
               dVar68 * (double)local_2b8._0_8_);
      dVar80 = (double)local_2a8._0_8_ * dVar75 * -1.0 +
               ((dVar59 * (double)local_2b8._0_8_ * -1.0 + dVar80 * (double)local_2a8._8_8_) -
               dVar74 * (double)local_2b8._8_8_);
      if (dVar71 * dVar80 + dVar78 * dVar60 + dVar42 * dVar51 + dVar44 * dVar34 < 0.0) {
        dVar44 = -dVar44;
        dVar51 = -dVar51;
        dVar78 = -dVar78;
        dVar80 = -dVar80;
      }
      auVar10._8_8_ = dStack_320;
      auVar10._0_8_ = local_328;
      dVar34 = dVar78 * dVar78 + dVar44 * dVar44;
      dVar42 = dVar80 * dVar80 + dVar51 * dVar51;
      auVar37._0_8_ = dVar34 + dVar42;
      auVar37._8_8_ = dVar34 + dVar42;
      auVar26._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_);
      auVar26._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_);
      auVar73 = sqrtpd(auVar37,auVar37);
      auVar73 = divpd(auVar36,auVar73);
      auVar53._0_8_ = auVar73._0_8_ * dVar78;
      auVar53._8_8_ = auVar73._8_8_ * dVar80;
      local_2b8._8_8_ =
           (ulonglong)(dVar51 * auVar73._8_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar37._8_8_)
      ;
      local_2b8._0_8_ =
           (ulonglong)(dVar44 * auVar73._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar37._0_8_)
      ;
      local_2a8 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar53,auVar26);
      lVar14 = *param_3;
      lVar16 = (longlong)param_1[1] * 0x60;
      *(double *)(lVar14 + lVar16) = dVar44;
      ((double *)(lVar14 + lVar16))[1] = dVar51;
      pdVar13 = (double *)(lVar14 + 0x10 + lVar16);
      *pdVar13 = dVar78;
      pdVar13[1] = dVar80;
      pdVar13 = (double *)(lVar14 + 0x20 + lVar16);
      *pdVar13 = local_318;
      pdVar13[1] = dStack_310;
      pdVar13 = (double *)(lVar14 + 0x30 + lVar16);
      *pdVar13 = dVar45;
      pdVar13[1] = dVar66;
      *(undefined1 (*) [16])(lVar14 + 0x40 + lVar16) = auVar10;
      auVar11._8_8_ = dStack_300;
      auVar11._0_8_ = local_308;
      *(undefined1 (*) [16])(lVar14 + 0x50 + lVar16) = auVar11;
      auVar46 = _DAT_149934d80;
      lVar14 = *param_2;
      lVar24 = (longlong)param_1[1] * 0x130 + lVar14;
      lVar16 = (longlong)*param_1 * 0x130 + lVar14;
      pdVar13 = (double *)(lVar16 + 0x10);
      auVar73 = *(undefined1 (*) [16])(lVar16 + 0x50);
      dVar34 = auVar73._0_8_;
      dVar60 = auVar73._8_8_;
      auVar61 = *(undefined1 (*) [16])(lVar16 + 0x60);
      dVar42 = auVar61._0_8_;
      dVar71 = auVar61._8_8_;
      auVar73 = minpd(auVar10,auVar73);
      auVar61 = minpd(auVar11,auVar61);
      auVar38._8_8_ = -(ulonglong)(auVar73._8_8_ < 0.0);
      auVar38._0_8_ = -(ulonglong)(auVar73._0_8_ < 0.0);
      iVar15 = movmskpd((int)lVar14,auVar38);
      auVar62._8_8_ = -(ulonglong)(auVar61._8_8_ < 0.0);
      auVar62._0_8_ = -(ulonglong)(auVar61._0_8_ < 0.0);
      uVar20 = movmskpd(uVar19,auVar62);
      if ((uVar20 & 0x3fffffff) == 0 && iVar15 == 0) {
        dVar8 = *pdVar13;
        dVar9 = *(double *)(lVar16 + 0x18);
        dVar67 = *(double *)(lVar16 + 0x20);
        dVar69 = *(double *)(lVar16 + 0x28);
        dVar68 = *(double *)(lVar16 + 0x28);
        dVar74 = *(double *)(lVar16 + 0x28);
        dVar52 = *(double *)(lVar16 + 0x18);
        dVar59 = *(double *)(lVar16 + 0x18);
        dVar76 = *(double *)(lVar16 + 0x20);
        dVar75 = *(double *)(lVar16 + 0x20);
        dVar70 = dVar51 * dVar76 * -1.0 +
                 dVar78 * dVar52 + dVar80 * *pdVar13 * 1.0 + dVar44 * dVar68;
        dVar65 = dVar44 * dVar75 * 1.0 +
                 dVar80 * dVar59 + dVar78 * *pdVar13 * -1.0 + dVar51 * dVar74;
        auVar77._0_8_ =
             dVar80 * dVar76 * 1.0 + ((*pdVar13 * dVar51 * 1.0 + dVar78 * dVar68) - dVar44 * dVar52)
        ;
        auVar77._8_8_ =
             dVar78 * dVar75 * -1.0 +
             ((*pdVar13 * dVar44 * -1.0 + dVar80 * dVar74) - dVar51 * dVar59);
        dVar80 = local_318 * dVar34;
        dVar78 = dStack_310 * dVar60;
        dVar45 = dVar45 * dVar42;
        dVar66 = dVar66 * dVar71;
        dVar75 = dVar78 * dVar8 - dVar80 * dVar9;
        dVar76 = dVar45 * dVar9 - dVar78 * dVar67;
        dVar52 = dVar80 * dVar67 - dVar45 * dVar8;
        dVar59 = dVar66 * dVar69 - dVar66 * dVar69;
        dVar76 = dVar76 + dVar76;
        dVar52 = dVar52 + dVar52;
        dVar75 = dVar75 + dVar75;
        dVar59 = dVar59 + dVar59;
        dVar80 = (dVar75 * dVar9 - dVar67 * dVar52) + dVar68 * dVar76 + dVar80 +
                 *(double *)(lVar16 + 0x30);
        dVar78 = (dVar76 * dVar67 - dVar75 * dVar8) + dVar74 * dVar52 + dVar78 +
                 *(double *)(lVar16 + 0x38);
        dVar45 = (dVar52 * dVar8 - dVar9 * dVar76) + dVar68 * dVar75 + dVar45 +
                 *(double *)(lVar16 + 0x40);
        dVar66 = (dVar59 * dVar69 - dVar59 * dVar69) + dVar74 * dVar59 + dVar66 +
                 *(double *)(lVar16 + 0x48);
        pdVar13 = (double *)0x0;
      }
      else {
        dVar8 = *pdVar13;
        dVar9 = *(double *)(lVar16 + 0x18);
        dVar68 = *(double *)(lVar16 + 0x20);
        dVar67 = dVar9 + dVar9;
        dVar74 = dVar68 + dVar68;
        dVar69 = dVar8 * (dVar8 + dVar8);
        dVar66 = *(double *)(lVar16 + 0x28);
        dVar52 = dVar74 * dVar66;
        dVar75 = (dVar8 + dVar8) * *(double *)(lVar16 + 0x28);
        dVar66 = dVar67 * dVar66;
        dVar70 = local_308 * dVar42;
        local_1a8 = (1.0 - (dVar69 + dVar9 * dVar67)) * dVar42;
        local_1b8 = (dVar66 + *pdVar13 * dVar74) * dVar42;
        dStack_1b0 = (dVar74 * dVar9 - dVar75) * dVar42;
        dVar59 = local_328 * dVar34;
        dVar76 = dStack_320 * dVar60;
        local_1f8 = (auVar36._0_8_ - (dVar68 * dVar74 + dVar9 * dVar67)) * dVar34;
        dVar68 = (auVar36._8_8_ - (dVar68 * dVar74 + dVar69)) * dVar60;
        dStack_1f0 = (dVar67 * dVar8 + dVar52) * dVar34;
        local_1c8 = (dVar74 * dVar9 + dVar75) * dVar60;
        local_1e8 = (*pdVar13 * dVar74 - dVar66) * dVar34;
        pdVar23 = &local_1f8;
        uStack_1e0 = 0;
        local_1d8._8_4_ = SUB84(dVar68,0);
        local_1d8._0_8_ = (dVar67 * dVar8 - dVar52) * dVar60;
        local_1d8._12_4_ = (int)((ulonglong)dVar68 >> 0x20);
        uStack_1c0 = 0;
        uStack_1a0 = 0;
        local_198 = *(undefined8 *)(lVar16 + 0x30);
        uStack_190 = *(undefined8 *)(lVar16 + 0x38);
        local_188 = *(undefined8 *)(lVar16 + 0x40);
        uStack_180 = 0x3ff0000000000000;
        dVar74 = dVar51 + dVar51;
        dVar66 = dVar78 + dVar78;
        dVar52 = dVar44 * (dVar44 + dVar44);
        local_228 = (1.0 - (dVar52 + dVar51 * dVar74)) * local_308;
        dVar68 = (dVar44 + dVar44) * dVar80;
        local_238 = (dVar74 * dVar80 + dVar44 * dVar66) * local_308;
        local_258 = (dVar74 * dVar44 - dVar66 * dVar80) * dStack_320;
        dStack_230 = (dVar66 * dVar51 - dVar68) * local_308;
        local_278 = ((double)DAT_149934d80 - (dVar78 * dVar66 + dVar51 * dVar74)) * local_328;
        dStack_250 = (DAT_149934d80._8_8_ - (dVar78 * dVar66 + dVar52)) * dStack_320;
        dStack_270 = (dVar74 * dVar44 + dVar66 * dVar80) * local_328;
        local_248 = (dVar66 * dVar51 + dVar68) * dStack_320;
        local_268 = (dVar44 * dVar66 - dVar74 * dVar80) * local_328;
        uStack_260 = 0;
        uStack_240 = 0;
        uStack_220 = 0;
        local_218 = local_318;
        dStack_210 = dStack_310;
        local_208._8_4_ = 0;
        local_208._0_8_ = dVar45;
        local_208._12_4_ = 0x3ff00000;
        pdVar13 = &local_178;
        local_328 = dVar70;
        dStack_320 = dStack_300 * dVar71;
        FUN_1447fea8d(pdVar13);
        FUN_144a1c686(pdVar13,0x3e45798ee0000000);
        auVar27._8_8_ = -(ulonglong)(0.0 <= dVar76);
        auVar27._0_8_ = -(ulonglong)(0.0 <= dVar59);
        auVar36 = blendvpd(_DAT_149936790,auVar46,auVar27);
        uVar25 = -(ulonglong)(0.0 <= dVar70);
        dVar45 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
        dVar66 = auVar36._0_8_;
        local_168 = local_168 * dVar66;
        local_170 = local_170 * dVar66;
        local_178 = local_178 * dVar66;
        dVar66 = auVar36._8_8_;
        local_148 = local_148 * dVar66;
        local_150 = local_150 * dVar66;
        local_158 = dVar66 * local_158;
        local_128 = local_128 * dVar45;
        local_130 = local_130 * dVar45;
        local_138 = dVar45 * local_138;
        FUN_14481fd10(&local_298);
        dVar45 = local_288 * local_288 + local_298 * local_298;
        dVar66 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
        auVar48._0_8_ = dVar45 + dVar66;
        auVar48._8_8_ = dVar45 + dVar66;
        auVar28._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_);
        auVar28._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_);
        auVar36 = sqrtpd(auVar48,auVar48);
        auVar36 = divpd(auVar46,auVar36);
        auVar54._0_8_ = auVar36._0_8_ * local_288;
        auVar54._8_8_ = auVar36._8_8_ * dStack_280;
        dVar70 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar48._0_8_));
        dVar65 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar48._8_8_));
        auVar77 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar28);
        dVar66 = 0.0;
        dVar80 = local_118;
        dVar78 = dStack_110;
        dVar45 = local_108;
      }
      *(double *)(lVar24 + 0x30) = dVar80;
      *(double *)(lVar24 + 0x38) = dVar78;
      *(double *)(lVar24 + 0x40) = dVar45;
      *(double *)(lVar24 + 0x48) = dVar66;
      auVar6._8_4_ = SUB84(dVar43 * dVar60,0);
      auVar6._0_8_ = dVar35 * dVar34;
      auVar6._12_4_ = (int)((ulonglong)(dVar43 * dVar60) >> 0x20);
      *(undefined1 (*) [16])(lVar24 + 0x50) = auVar6;
      auVar4._8_4_ = SUB84(dVar41 * dVar71,0);
      auVar4._0_8_ = dVar33 * dVar42;
      auVar4._12_4_ = (int)((ulonglong)(dVar41 * dVar71) >> 0x20);
      *(undefined1 (*) [16])(lVar24 + 0x60) = auVar4;
      dVar33 = auVar77._0_8_;
      dVar41 = auVar77._8_8_;
      dVar35 = dVar33 * dVar33 + dVar70 * dVar70;
      dVar43 = dVar41 * dVar41 + dVar65 * dVar65;
      auVar39._0_8_ = dVar35 + dVar43;
      auVar39._8_8_ = dVar35 + dVar43;
      auVar29._8_8_ = -(ulonglong)(1e-08 <= auVar39._8_8_);
      auVar29._0_8_ = -(ulonglong)(1e-08 <= auVar39._0_8_);
      auVar36 = sqrtpd(auVar39,auVar39);
      auVar73 = divpd(auVar46,auVar36);
      auVar49._0_8_ = auVar73._0_8_ * dVar33;
      auVar49._8_8_ = auVar73._8_8_ * dVar41;
      auVar36 = blendvpd(_DAT_149935300,auVar49,auVar29);
      *(ulonglong *)(lVar24 + 0x10) =
           (ulonglong)(dVar70 * auVar73._0_8_) & -(ulonglong)(1e-08 <= auVar39._0_8_);
      *(ulonglong *)(lVar24 + 0x18) =
           (ulonglong)(dVar65 * auVar73._8_8_) & -(ulonglong)(1e-08 <= auVar39._8_8_);
      *(undefined1 (*) [16])(lVar24 + 0x20) = auVar36;
      lVar14 = (longlong)param_1[1];
      if (param_1[1] + 1 < (int)param_2[1]) {
        lVar16 = lVar14 + 1;
        lVar24 = lVar14 * 0x60 + 0xb0;
        lVar14 = lVar14 * 0x130 + 400;
        do {
          lVar2 = *param_2;
          lVar3 = *param_3;
          lVar17 = (longlong)*(int *)(lVar2 + -0x60 + lVar14) * 0x130 + lVar2;
          pdVar18 = (double *)(lVar17 + 0x10);
          auVar36 = *(undefined1 (*) [16])(lVar17 + 0x50);
          dVar35 = auVar36._0_8_;
          dVar33 = auVar36._8_8_;
          auVar73 = *(undefined1 (*) [16])(lVar17 + 0x60);
          dVar43 = auVar73._0_8_;
          auVar61 = *(undefined1 (*) [16])(lVar3 + -0x10 + lVar24);
          auVar72 = *(undefined1 (*) [16])(lVar3 + lVar24);
          auVar36 = minpd(auVar61,auVar36);
          auVar55 = minpd(auVar72,auVar73);
          auVar50._8_8_ = -(ulonglong)(auVar36._8_8_ < 0.0);
          auVar50._0_8_ = -(ulonglong)(auVar36._0_8_ < 0.0);
          uVar20 = movmskpd((int)pdVar13,auVar50);
          pdVar13 = (double *)(ulonglong)uVar20;
          auVar56._8_8_ = -(ulonglong)(auVar55._8_8_ < 0.0);
          auVar56._0_8_ = -(ulonglong)(auVar55._0_8_ < 0.0);
          uVar22 = movmskpd((int)pdVar23,auVar56);
          if ((uVar22 & 0x3fffffff) == 0 && uVar20 == 0) {
            pdVar23 = (double *)(lVar3 + -0x50 + lVar24);
            dVar42 = *pdVar23;
            dVar60 = pdVar23[1];
            pdVar23 = (double *)(lVar3 + -0x40 + lVar24);
            dVar71 = *pdVar23;
            dVar68 = pdVar23[1];
            dVar74 = *pdVar18;
            dVar52 = *(double *)(lVar17 + 0x18);
            dVar59 = *(double *)(lVar17 + 0x20);
            dVar75 = *(double *)(lVar17 + 0x28);
            dVar41 = *(double *)(lVar17 + 0x28);
            dVar45 = *(double *)(lVar17 + 0x28);
            dVar66 = *(double *)(lVar17 + 0x18);
            dVar80 = *(double *)(lVar17 + 0x18);
            dVar78 = *(double *)(lVar17 + 0x20);
            dVar34 = *(double *)(lVar17 + 0x20);
            dVar76 = dVar60 * dVar78 * -1.0 +
                     dVar71 * dVar66 + dVar68 * *pdVar18 * 1.0 + dVar42 * dVar41;
            dVar44 = dVar42 * dVar34 * 1.0 +
                     dVar68 * dVar80 + dVar71 * *pdVar18 * -1.0 + dVar60 * dVar45;
            auVar58._0_8_ =
                 dVar68 * dVar78 * 1.0 +
                 ((*pdVar18 * dVar60 * 1.0 + dVar71 * dVar41) - dVar42 * dVar66);
            auVar58._8_8_ =
                 dVar71 * dVar34 * -1.0 +
                 ((*pdVar18 * dVar42 * -1.0 + dVar68 * dVar45) - dVar60 * dVar80);
            pdVar23 = (double *)(lVar3 + -0x30 + lVar24);
            dVar34 = *pdVar23 * dVar35;
            dVar60 = pdVar23[1] * dVar33;
            pdVar23 = (double *)(lVar3 + -0x20 + lVar24);
            dVar71 = *pdVar23 * dVar43;
            dVar68 = pdVar23[1] * auVar73._8_8_;
            dVar66 = dVar60 * dVar74 - dVar52 * dVar34;
            dVar78 = dVar71 * dVar52 - dVar59 * dVar60;
            dVar42 = dVar34 * dVar59 - dVar74 * dVar71;
            dVar80 = dVar68 * dVar75 - dVar75 * dVar68;
            dVar78 = dVar78 + dVar78;
            dVar42 = dVar42 + dVar42;
            dVar66 = dVar66 + dVar66;
            dVar80 = dVar80 + dVar80;
            dVar34 = (dVar66 * dVar52 - dVar59 * dVar42) + dVar41 * dVar78 + dVar34 +
                     *(double *)(lVar17 + 0x30);
            dVar60 = (dVar78 * dVar59 - dVar66 * dVar74) + dVar45 * dVar42 + dVar60 +
                     *(double *)(lVar17 + 0x38);
            dVar41 = (dVar42 * dVar74 - dVar52 * dVar78) + dVar41 * dVar66 + dVar71 +
                     *(double *)(lVar17 + 0x40);
            dVar45 = (dVar80 * dVar75 - dVar80 * dVar75) + dVar45 * dVar80 + dVar68 +
                     *(double *)(lVar17 + 0x48);
            pdVar23 = (double *)0x0;
            auVar46 = _DAT_149934d80;
          }
          else {
            dVar45 = *pdVar18;
            dVar66 = *(double *)(lVar17 + 0x18);
            dVar80 = *(double *)(lVar17 + 0x20);
            dVar78 = dVar66 + dVar66;
            dVar34 = dVar80 + dVar80;
            dVar71 = dVar45 * (dVar45 + dVar45);
            local_1f8 = (auVar46._0_8_ - (dVar80 * dVar34 + dVar66 * dVar78)) * dVar35;
            local_1a8 = (1.0 - (dVar71 + dVar66 * dVar78)) * dVar43;
            dVar41 = *(double *)(lVar17 + 0x28);
            dVar42 = dVar34 * dVar41;
            dVar60 = (dVar45 + dVar45) * *(double *)(lVar17 + 0x28);
            dVar41 = dVar78 * dVar41;
            dStack_1f0 = (dVar78 * dVar45 + dVar42) * dVar35;
            local_1c8 = (dVar34 * dVar66 + dVar60) * dVar33;
            local_1b8 = (dVar41 + *pdVar18 * dVar34) * dVar43;
            dStack_1b0 = (dVar34 * dVar66 - dVar60) * dVar43;
            local_1e8 = (*pdVar18 * dVar34 - dVar41) * dVar35;
            uStack_1e0 = 0;
            local_1d8._8_8_ = (auVar46._8_8_ - (dVar80 * dVar34 + dVar71)) * dVar33;
            local_1d8._0_8_ = (dVar78 * dVar45 - dVar42) * dVar33;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)(lVar17 + 0x30);
            uStack_190 = *(undefined8 *)(lVar17 + 0x38);
            local_188 = *(undefined8 *)(lVar17 + 0x40);
            uStack_180 = 0x3ff0000000000000;
            pdVar23 = (double *)(lVar3 + -0x50 + lVar24);
            dVar66 = *pdVar23;
            dVar80 = pdVar23[1];
            dVar41 = *(double *)(lVar3 + -0x40 + lVar24);
            pdVar23 = (double *)(lVar3 + -0x10 + lVar24);
            local_268 = *pdVar23;
            local_258 = pdVar23[1];
            dStack_230 = *(double *)(lVar3 + lVar24);
            dVar60 = dVar80 + dVar80;
            dVar78 = dVar41 + dVar41;
            dVar45 = dVar66 * (dVar66 + dVar66);
            local_278 = (auVar46._0_8_ - (dVar41 * dVar78 + dVar80 * dVar60)) * local_268;
            dStack_250 = (auVar46._8_8_ - (dVar41 * dVar78 + dVar45)) * local_258;
            local_228 = (1.0 - (dVar45 + dVar80 * dVar60)) * dStack_230;
            dVar45 = *(double *)(lVar3 + -0x50 + lVar24) * dVar78;
            pdVar23 = (double *)(lVar3 + -0x38 + lVar24);
            dVar41 = *pdVar23;
            dVar34 = dVar78 * dVar41;
            dVar42 = (dVar66 + dVar66) * *pdVar23;
            dVar41 = dVar60 * dVar41;
            dStack_270 = (dVar60 * dVar66 + dVar34) * local_268;
            local_248 = (dVar78 * dVar80 + dVar42) * local_258;
            local_238 = (dVar41 + dVar45) * dStack_230;
            local_268 = (dVar45 - dVar41) * local_268;
            local_258 = (dVar60 * dVar66 - dVar34) * local_258;
            dStack_230 = (dVar78 * dVar80 - dVar42) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            pdVar23 = (double *)(lVar3 + -0x30 + lVar24);
            local_218 = *pdVar23;
            dStack_210 = pdVar23[1];
            local_208._8_8_ = 0x3ff0000000000000;
            local_208._0_8_ = *(undefined8 *)(lVar3 + -0x20 + lVar24);
            pdVar23 = &local_1f8;
            FUN_1447fea8d(&local_178,&local_278);
            FUN_144a1c686(&local_178,0x3e45798ee0000000);
            auVar30._8_8_ = -(ulonglong)(0.0 <= auVar61._8_8_ * dVar33);
            auVar30._0_8_ = -(ulonglong)(0.0 <= auVar61._0_8_ * dVar35);
            auVar36 = blendvpd(_DAT_149936790,auVar46,auVar30);
            uVar25 = -(ulonglong)(0.0 <= auVar72._0_8_ * dVar43);
            dVar41 = (double)(~uVar25 & 0xbff0000000000000 | uVar25 & 0x3ff0000000000000);
            dVar45 = auVar36._0_8_;
            local_168 = local_168 * dVar45;
            local_170 = local_170 * dVar45;
            local_178 = local_178 * dVar45;
            dVar45 = auVar36._8_8_;
            local_148 = local_148 * dVar45;
            local_150 = local_150 * dVar45;
            local_158 = dVar45 * local_158;
            local_128 = local_128 * dVar41;
            local_130 = local_130 * dVar41;
            local_138 = dVar41 * local_138;
            pdVar13 = &local_178;
            FUN_14481fd10(&local_298);
            dVar41 = local_288 * local_288 + local_298 * local_298;
            dVar45 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar57._0_8_ = dVar41 + dVar45;
            auVar57._8_8_ = dVar41 + dVar45;
            auVar31._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
            auVar31._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
            auVar36 = sqrtpd(auVar57,auVar57);
            auVar36 = divpd(auVar46,auVar36);
            auVar63._0_8_ = auVar36._0_8_ * local_288;
            auVar63._8_8_ = auVar36._8_8_ * dStack_280;
            dVar76 = (double)((ulonglong)(local_298 * auVar36._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
            dVar44 = (double)((ulonglong)(dStack_290 * auVar36._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
            auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar63,auVar31);
            dVar45 = 0.0;
            dVar34 = local_118;
            dVar60 = dStack_110;
            dVar41 = local_108;
          }
          dVar66 = auVar72._8_8_ * auVar73._8_8_;
          auVar7._8_4_ = SUB84(dVar60,0);
          auVar7._0_8_ = dVar34;
          auVar7._12_4_ = (int)((ulonglong)dVar60 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + -0x30 + lVar14) = auVar7;
          pdVar18 = (double *)(lVar2 + -0x20 + lVar14);
          *pdVar18 = dVar41;
          pdVar18[1] = dVar45;
          pdVar18 = (double *)(lVar2 + -0x10 + lVar14);
          *pdVar18 = auVar61._0_8_ * dVar35;
          pdVar18[1] = auVar61._8_8_ * dVar33;
          dVar41 = auVar58._0_8_;
          dVar45 = auVar58._8_8_;
          dVar35 = dVar41 * dVar41 + dVar76 * dVar76;
          dVar33 = dVar45 * dVar45 + dVar44 * dVar44;
          auVar40._0_8_ = dVar35 + dVar33;
          auVar40._8_8_ = dVar35 + dVar33;
          auVar5._8_4_ = SUB84(dVar66,0);
          auVar5._0_8_ = auVar72._0_8_ * dVar43;
          auVar5._12_4_ = (int)((ulonglong)dVar66 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + lVar14) = auVar5;
          auVar32._8_8_ = -(ulonglong)(1e-08 <= auVar40._8_8_);
          auVar32._0_8_ = -(ulonglong)(1e-08 <= auVar40._0_8_);
          auVar36 = sqrtpd(auVar40,auVar40);
          auVar73 = divpd(auVar46,auVar36);
          auVar64._0_8_ = auVar73._0_8_ * dVar41;
          auVar64._8_8_ = auVar73._8_8_ * dVar45;
          auVar36 = blendvpd(_DAT_149935300,auVar64,auVar32);
          puVar1 = (ulonglong *)(lVar2 + -0x50 + lVar14);
          *puVar1 = (ulonglong)(dVar76 * auVar73._0_8_) & -(ulonglong)(1e-08 <= auVar40._0_8_);
          puVar1[1] = (ulonglong)(dVar44 * auVar73._8_8_) & -(ulonglong)(1e-08 <= auVar40._8_8_);
          *(undefined1 (*) [16])(lVar2 + -0x40 + lVar14) = auVar36;
          lVar16 = lVar16 + 1;
          lVar24 = lVar24 + 0x60;
          lVar14 = lVar14 + 0x130;
        } while (lVar16 < (int)param_2[1]);
      }
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_348) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498914a8 FUN_1498914a8 body=621 status=ok
// SIG undefined FUN_1498914a8(void)

undefined1 (*) [16]
FUN_1498914a8(longlong param_1,undefined1 (*param_2) [16],double *param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined1 auStack_f8 [32];
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1449437a2(param_4,&local_d8);
  local_98 = *(double *)(param_1 + 0x10) * local_98;
  dStack_90 = *(double *)(param_1 + 0x18) * dStack_90;
  local_88 = *(double *)(param_1 + 0x20) * local_88;
  dVar10 = dStack_90 * local_d8 - local_98 * dStack_d0;
  dVar11 = local_88 * dStack_d0 - dStack_90 * local_c8;
  dVar12 = local_98 * local_c8 - local_d8 * local_88;
  dVar11 = dVar11 + dVar11;
  dVar12 = dVar12 + dVar12;
  dVar10 = dVar10 + dVar10;
  dVar6 = (((dVar10 * dStack_d0 - dVar12 * local_c8) + dStack_c0 * dVar11 + local_98) * 100.0 +
          local_b8) * param_3[8];
  dVar7 = (((local_c8 * dVar11 - local_d8 * dVar10) + dStack_c0 * dVar12 + dStack_90) * 100.0 +
          local_b0) * param_3[9];
  dVar8 = ((dVar10 * dStack_c0 + local_88 + (dVar12 * local_d8 - dVar11 * dStack_d0)) * 100.0 +
          local_a8) * param_3[10];
  dVar3 = *param_3;
  dVar4 = param_3[1];
  dVar5 = param_3[2];
  dVar12 = param_3[3];
  dVar10 = dVar7 * dVar3 - dVar4 * dVar6;
  dVar9 = dVar8 * dVar4 - dVar5 * dVar7;
  dVar11 = dVar6 * dVar5 - dVar3 * dVar8;
  dVar9 = dVar9 + dVar9;
  dVar11 = dVar11 + dVar11;
  dVar10 = dVar10 + dVar10;
  dVar2 = (dVar5 * dVar9 - dVar3 * dVar10) + param_3[3] * dVar11 + dVar7 + param_3[5];
  dVar7 = param_3[6];
  auVar1._8_4_ = SUB84(dVar2,0);
  auVar1._0_8_ = (dVar10 * dVar4 - dVar11 * dVar5) + dVar12 * dVar9 + dVar6 + param_3[4];
  auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *param_2 = auVar1;
  *(double *)param_2[1] = dVar10 * dVar12 + dVar8 + (dVar11 * dVar3 - dVar9 * dVar4) + dVar7;
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149891716 FUN_149891716 body=3375 status=ok
// SIG undefined FUN_149891716(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149891716(uint *param_1,longlong *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  double dVar4;
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  double *pdVar14;
  undefined1 (*pauVar15) [16];
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  double *pdVar20;
  uint uVar21;
  double *pdVar23;
  undefined1 (*pauVar24) [16];
  uint uVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  double dVar35;
  double dVar37;
  undefined1 auVar36 [16];
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar44 [16];
  double dVar47;
  double dVar48;
  double dVar49;
  double dVar59;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  double dVar60;
  double dVar61;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  double dVar62;
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined4 uVar74;
  undefined4 uVar75;
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_418 [32];
  double *local_3f8;
  undefined1 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  double local_3b8 [4];
  double local_398;
  double dStack_390;
  double local_388;
  double local_358 [12];
  double local_2f8 [12];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178 [4];
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double *pdVar22;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_418;
  uVar21 = *param_1;
  iVar13 = (int)param_2[1];
  if ((((int)uVar21 < iVar13 && -1 < (int)uVar21) &&
      (uVar25 = param_1[1], (int)uVar25 < iVar13 && -1 < (int)uVar25)) &&
     (uVar1 = param_1[2], (int)uVar1 < iVar13 && -1 < (int)uVar1)) {
    lVar17 = *param_2;
    pdVar23 = (double *)(lVar17 + (ulonglong)uVar25 * 0x130 + 0x10);
    pdVar22 = local_2f8;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar22 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar22 = pdVar22 + 1;
    }
    pdVar23 = (double *)(lVar17 + (ulonglong)uVar21 * 0x130 + 0x10);
    pdVar22 = local_358;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar22 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar22 = pdVar22 + 1;
    }
    pdVar23 = (double *)(lVar17 + (ulonglong)uVar1 * 0x130 + 0x10);
    pdVar22 = local_3b8;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar22 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar22 = pdVar22 + 1;
    }
    if ((char)param_1[3] == '\x01') {
      FUN_1498914a8(param_1,&local_3d8,local_2f8,local_358);
    }
    else {
      local_3c8 = *(undefined8 *)(param_1 + 8);
      local_3d8 = *(undefined8 *)(param_1 + 4);
      uStack_3d0 = *(undefined8 *)(param_1 + 6);
    }
    local_3f8 = local_178;
    local_178[0] = local_398;
    local_178[1] = dStack_390;
    local_178[2] = local_388;
    local_3e0 = 0x3ff0000000000000;
    local_3e8 = 0x3ff0000000000000;
    local_3f0 = 0;
    FUN_1402e32a3(local_2f8,local_358,local_3b8,&local_3d8);
    lVar16 = (longlong)(int)param_1[1];
    lVar17 = (longlong)*(int *)(*param_2 + lVar16 * 0x130);
    if (lVar17 == -1) {
      puVar26 = &DAT_14c846480;
    }
    else {
      puVar26 = (undefined8 *)(*param_2 + lVar17 * 0x130 + 0x10);
    }
    FUN_1449437a2(local_2f8,local_178,puVar26);
    pdVar23 = local_178;
    pdVar22 = (double *)(lVar16 * 0x60 + *param_3);
    for (lVar17 = 0xc; auVar41 = _DAT_149935300, auVar42 = _DAT_149934d80, lVar17 != 0;
        lVar17 = lVar17 + -1) {
      *pdVar22 = *pdVar23;
      pdVar23 = pdVar23 + 1;
      pdVar22 = pdVar22 + 1;
    }
    lVar17 = *param_3;
    lVar18 = lVar16 * 0x60;
    dVar35 = *(double *)(lVar17 + lVar18);
    dVar4 = ((double *)(lVar17 + lVar18))[1];
    pdVar23 = (double *)(lVar17 + 0x10 + lVar18);
    dVar37 = *pdVar23;
    dVar38 = pdVar23[1];
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar64._0_8_ = dVar47 + dVar59;
    auVar64._8_8_ = dVar47 + dVar59;
    auVar40._8_8_ = -(ulonglong)(1e-08 <= auVar64._8_8_);
    auVar40._0_8_ = -(ulonglong)(1e-08 <= auVar64._0_8_);
    auVar50 = sqrtpd(auVar64,auVar64);
    uVar74 = (undefined4)DAT_149934d80;
    uVar75 = DAT_149934d80._4_4_;
    uVar76 = DAT_149934d80._8_4_;
    uVar77 = DAT_149934d80._12_4_;
    auVar50 = divpd(_DAT_149934d80,auVar50);
    auVar63._0_8_ = auVar50._0_8_ * dVar37;
    auVar63._8_8_ = auVar50._8_8_ * dVar38;
    auVar40 = blendvpd(_DAT_149935300,auVar63,auVar40);
    *(ulonglong *)(lVar17 + lVar18) =
         (ulonglong)(dVar35 * auVar50._0_8_) & -(ulonglong)(1e-08 <= auVar64._0_8_);
    ((ulonglong *)(lVar17 + lVar18))[1] =
         (ulonglong)(dVar4 * auVar50._8_8_) & -(ulonglong)(1e-08 <= auVar64._8_8_);
    *(undefined1 (*) [16])(lVar17 + 0x10 + lVar18) = auVar40;
    pdVar23 = (double *)(*param_2 + 0x10 + lVar16 * 0x130);
    pdVar22 = local_2f8;
    pdVar20 = pdVar23;
    for (lVar17 = 0xc; lVar17 != 0; lVar17 = lVar17 + -1) {
      *pdVar20 = *pdVar22;
      pdVar22 = pdVar22 + 1;
      pdVar20 = pdVar20 + 1;
    }
    dVar35 = *pdVar23;
    dVar4 = pdVar23[1];
    dVar37 = pdVar23[2];
    dVar38 = pdVar23[3];
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar51._0_8_ = dVar47 + dVar59;
    auVar51._8_8_ = dVar47 + dVar59;
    auVar50._8_8_ = -(ulonglong)(1e-08 <= auVar51._8_8_);
    auVar50._0_8_ = -(ulonglong)(1e-08 <= auVar51._0_8_);
    auVar40 = sqrtpd(auVar51,auVar51);
    auVar64 = divpd(auVar42,auVar40);
    auVar65._0_8_ = auVar64._0_8_ * dVar37;
    auVar65._8_8_ = auVar64._8_8_ * dVar38;
    auVar40 = blendvpd(auVar41,auVar65,auVar50);
    *pdVar23 = (double)((ulonglong)(dVar35 * auVar64._0_8_) & -(ulonglong)(1e-08 <= auVar51._0_8_));
    pdVar23[1] = (double)((ulonglong)(dVar4 * auVar64._8_8_) & -(ulonglong)(1e-08 <= auVar51._8_8_))
    ;
    *(undefined1 (*) [16])(pdVar23 + 2) = auVar40;
    uVar21 = *param_1;
    pdVar23 = local_358;
    FUN_1449437a2(pdVar23,local_178);
    lVar17 = (longlong)(int)uVar21 * 0x60;
    pdVar22 = local_178;
    pdVar20 = (double *)(*param_3 + lVar17);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar20 = *pdVar22;
      pdVar22 = pdVar22 + 1;
      pdVar20 = pdVar20 + 1;
    }
    lVar16 = *param_3;
    dVar35 = *(double *)(lVar16 + lVar17);
    dVar4 = ((double *)(lVar16 + lVar17))[1];
    pdVar22 = (double *)(lVar16 + 0x10 + lVar17);
    dVar37 = *pdVar22;
    dVar38 = pdVar22[1];
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar52._0_8_ = dVar47 + dVar59;
    auVar52._8_8_ = dVar47 + dVar59;
    auVar28._8_8_ = -(ulonglong)(1e-08 <= auVar52._8_8_);
    auVar28._0_8_ = -(ulonglong)(1e-08 <= auVar52._0_8_);
    auVar40 = sqrtpd(auVar52,auVar52);
    auVar64 = divpd(auVar42,auVar40);
    auVar66._0_8_ = auVar64._0_8_ * dVar37;
    auVar66._8_8_ = auVar64._8_8_ * dVar38;
    auVar40 = blendvpd(auVar41,auVar66,auVar28);
    *(ulonglong *)(lVar16 + lVar17) =
         (ulonglong)(dVar35 * auVar64._0_8_) & -(ulonglong)(1e-08 <= auVar52._0_8_);
    ((ulonglong *)(lVar16 + lVar17))[1] =
         (ulonglong)(dVar4 * auVar64._8_8_) & -(ulonglong)(1e-08 <= auVar52._8_8_);
    *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) = auVar40;
    lVar17 = *param_2 + (longlong)(int)uVar21 * 0x130;
    pdVar14 = (double *)(lVar17 + 0x10);
    pdVar22 = pdVar23;
    pdVar20 = pdVar14;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar20 = *pdVar22;
      pdVar22 = pdVar22 + 1;
      pdVar20 = pdVar20 + 1;
    }
    dVar35 = *pdVar14;
    dVar4 = *(double *)(lVar17 + 0x18);
    dVar37 = *(double *)(lVar17 + 0x20);
    dVar38 = *(double *)(lVar17 + 0x28);
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar53._0_8_ = dVar47 + dVar59;
    auVar53._8_8_ = dVar47 + dVar59;
    auVar29._8_8_ = -(ulonglong)(1e-08 <= auVar53._8_8_);
    auVar29._0_8_ = -(ulonglong)(1e-08 <= auVar53._0_8_);
    auVar40 = sqrtpd(auVar53,auVar53);
    auVar64 = divpd(auVar42,auVar40);
    auVar67._0_8_ = auVar64._0_8_ * dVar37;
    auVar67._8_8_ = auVar64._8_8_ * dVar38;
    auVar40 = blendvpd(auVar41,auVar67,auVar29);
    *pdVar14 = (double)((ulonglong)(dVar35 * auVar64._0_8_) & -(ulonglong)(1e-08 <= auVar53._0_8_));
    *(ulonglong *)(lVar17 + 0x18) =
         (ulonglong)(dVar4 * auVar64._8_8_) & -(ulonglong)(1e-08 <= auVar53._8_8_);
    *(undefined1 (*) [16])(lVar17 + 0x20) = auVar40;
    uVar21 = param_1[2];
    FUN_1449437a2(local_3b8,local_178);
    lVar17 = (longlong)(int)uVar21 * 0x60;
    pdVar22 = local_178;
    pdVar20 = (double *)(*param_3 + lVar17);
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *pdVar20 = *pdVar22;
      pdVar22 = pdVar22 + 1;
      pdVar20 = pdVar20 + 1;
    }
    lVar16 = *param_3;
    dVar35 = *(double *)(lVar16 + lVar17);
    dVar4 = ((double *)(lVar16 + lVar17))[1];
    pdVar22 = (double *)(lVar16 + 0x10 + lVar17);
    dVar37 = *pdVar22;
    dVar38 = pdVar22[1];
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar54._0_8_ = dVar47 + dVar59;
    auVar54._8_8_ = dVar47 + dVar59;
    auVar30._8_8_ = -(ulonglong)(1e-08 <= auVar54._8_8_);
    auVar30._0_8_ = -(ulonglong)(1e-08 <= auVar54._0_8_);
    auVar40 = sqrtpd(auVar54,auVar54);
    auVar64 = divpd(auVar42,auVar40);
    auVar68._0_8_ = auVar64._0_8_ * dVar37;
    auVar68._8_8_ = auVar64._8_8_ * dVar38;
    auVar40 = blendvpd(auVar41,auVar68,auVar30);
    *(ulonglong *)(lVar16 + lVar17) =
         (ulonglong)(dVar35 * auVar64._0_8_) & -(ulonglong)(1e-08 <= auVar54._0_8_);
    ((ulonglong *)(lVar16 + lVar17))[1] =
         (ulonglong)(dVar4 * auVar64._8_8_) & -(ulonglong)(1e-08 <= auVar54._8_8_);
    *(undefined1 (*) [16])(lVar16 + 0x10 + lVar17) = auVar40;
    lVar17 = *param_2 + (longlong)(int)uVar21 * 0x130;
    pauVar15 = (undefined1 (*) [16])(lVar17 + 0x10);
    pdVar22 = local_3b8;
    pauVar24 = pauVar15;
    for (lVar16 = 0xc; lVar16 != 0; lVar16 = lVar16 + -1) {
      *(double *)*pauVar24 = *pdVar22;
      pdVar22 = pdVar22 + 1;
      pauVar24 = (undefined1 (*) [16])(*pauVar24 + 8);
    }
    dVar35 = *(double *)*pauVar15;
    dVar4 = *(double *)(lVar17 + 0x18);
    dVar37 = *(double *)(lVar17 + 0x20);
    dVar38 = *(double *)(lVar17 + 0x28);
    dVar47 = dVar37 * dVar37 + dVar35 * dVar35;
    dVar59 = dVar38 * dVar38 + dVar4 * dVar4;
    auVar55._0_8_ = dVar47 + dVar59;
    auVar55._8_8_ = dVar47 + dVar59;
    auVar31._8_8_ = -(ulonglong)(1e-08 <= auVar55._8_8_);
    auVar31._0_8_ = -(ulonglong)(1e-08 <= auVar55._0_8_);
    auVar40 = sqrtpd(auVar55,auVar55);
    auVar40 = divpd(auVar42,auVar40);
    auVar69._0_8_ = auVar40._0_8_ * dVar37;
    auVar69._8_8_ = auVar40._8_8_ * dVar38;
    auVar42._0_8_ = (ulonglong)(dVar35 * auVar40._0_8_) & -(ulonglong)(1e-08 <= auVar55._0_8_);
    auVar42._8_8_ = (ulonglong)(dVar4 * auVar40._8_8_) & -(ulonglong)(1e-08 <= auVar55._8_8_);
    auVar41 = blendvpd(auVar41,auVar69,auVar31);
    *pauVar15 = auVar42;
    *(undefined1 (*) [16])(lVar17 + 0x20) = auVar41;
    lVar17 = (longlong)(int)param_1[1];
    uVar21 = param_1[1] + 1;
    pdVar22 = (double *)(ulonglong)uVar21;
    iVar13 = (int)param_2[1];
    if ((int)uVar21 < iVar13) {
      lVar16 = lVar17 + 1;
      lVar18 = lVar17 * 0x60 + 0xb0;
      lVar17 = lVar17 * 0x130 + 400;
      do {
        if (((uint)lVar16 != *param_1) && ((uint)lVar16 != param_1[2])) {
          lVar2 = *param_2;
          lVar3 = *param_3;
          lVar19 = (longlong)*(int *)(lVar2 + -0x60 + lVar17) * 0x130 + lVar2;
          pdVar20 = (double *)(lVar19 + 0x10);
          auVar42 = *(undefined1 (*) [16])(lVar19 + 0x50);
          dVar35 = auVar42._0_8_;
          dVar37 = auVar42._8_8_;
          auVar41 = *(undefined1 (*) [16])(lVar19 + 0x60);
          dVar4 = auVar41._0_8_;
          auVar40 = *(undefined1 (*) [16])(lVar3 + -0x10 + lVar18);
          auVar64 = *(undefined1 (*) [16])(lVar3 + lVar18);
          auVar42 = minpd(auVar40,auVar42);
          auVar50 = minpd(auVar64,auVar41);
          auVar43._8_8_ = -(ulonglong)(auVar42._8_8_ < 0.0);
          auVar43._0_8_ = -(ulonglong)(auVar42._0_8_ < 0.0);
          uVar21 = movmskpd((int)pdVar22,auVar43);
          pdVar22 = (double *)(ulonglong)uVar21;
          auVar56._8_8_ = -(ulonglong)(auVar50._8_8_ < 0.0);
          auVar56._0_8_ = -(ulonglong)(auVar50._0_8_ < 0.0);
          uVar25 = movmskpd((int)pdVar23,auVar56);
          if ((uVar25 & 0x3fffffff) == 0 && uVar21 == 0) {
            pdVar23 = (double *)(lVar3 + -0x50 + lVar18);
            dVar60 = *pdVar23;
            dVar61 = pdVar23[1];
            pdVar23 = (double *)(lVar3 + -0x40 + lVar18);
            dVar6 = *pdVar23;
            dVar62 = pdVar23[1];
            dVar9 = *pdVar20;
            dVar10 = *(double *)(lVar19 + 0x18);
            dVar11 = *(double *)(lVar19 + 0x20);
            dVar12 = *(double *)(lVar19 + 0x28);
            dVar38 = *(double *)(lVar19 + 0x28);
            dVar47 = *(double *)(lVar19 + 0x28);
            dVar59 = *(double *)(lVar19 + 0x18);
            dVar49 = *(double *)(lVar19 + 0x18);
            dVar45 = *(double *)(lVar19 + 0x20);
            dVar48 = *(double *)(lVar19 + 0x20);
            dVar39 = dVar61 * dVar45 * -1.0 +
                     dVar6 * dVar59 + dVar62 * *pdVar20 * 1.0 + dVar60 * dVar38;
            dVar46 = dVar60 * dVar48 * 1.0 +
                     dVar62 * dVar49 + dVar6 * *pdVar20 * -1.0 + dVar61 * dVar47;
            auVar58._0_8_ =
                 dVar62 * dVar45 * 1.0 +
                 ((*pdVar20 * dVar61 * 1.0 + dVar6 * dVar38) - dVar60 * dVar59);
            auVar58._8_8_ =
                 dVar6 * dVar48 * -1.0 +
                 ((*pdVar20 * dVar60 * -1.0 + dVar62 * dVar47) - dVar61 * dVar49);
            pdVar23 = (double *)(lVar3 + -0x30 + lVar18);
            dVar60 = *pdVar23 * dVar35;
            dVar61 = pdVar23[1] * dVar37;
            pdVar23 = (double *)(lVar3 + -0x20 + lVar18);
            dVar45 = *pdVar23 * dVar4;
            dVar48 = pdVar23[1] * auVar41._8_8_;
            dVar59 = dVar61 * dVar9 - dVar10 * dVar60;
            dVar6 = dVar45 * dVar10 - dVar11 * dVar61;
            dVar62 = dVar60 * dVar11 - dVar9 * dVar45;
            dVar49 = dVar48 * dVar12 - dVar12 * dVar48;
            dVar6 = dVar6 + dVar6;
            dVar62 = dVar62 + dVar62;
            dVar59 = dVar59 + dVar59;
            dVar49 = dVar49 + dVar49;
            uVar74 = 0;
            uVar75 = 0x3ff00000;
            uVar76 = 0;
            uVar77 = 0x3ff00000;
            dVar60 = (dVar59 * dVar10 - dVar11 * dVar62) + dVar38 * dVar6 + dVar60 +
                     *(double *)(lVar19 + 0x30);
            dVar61 = (dVar6 * dVar11 - dVar59 * dVar9) + dVar47 * dVar62 + dVar61 +
                     *(double *)(lVar19 + 0x38);
            dVar38 = (dVar62 * dVar9 - dVar10 * dVar6) + dVar38 * dVar59 + dVar45 +
                     *(double *)(lVar19 + 0x40);
            dVar47 = (dVar49 * dVar12 - dVar49 * dVar12) + dVar47 * dVar49 + dVar48 +
                     *(double *)(lVar19 + 0x48);
            pdVar23 = (double *)0x0;
          }
          else {
            dVar47 = *pdVar20;
            dVar59 = *(double *)(lVar19 + 0x18);
            dVar49 = *(double *)(lVar19 + 0x20);
            dVar45 = dVar59 + dVar59;
            dVar48 = dVar49 + dVar49;
            dVar38 = dVar47 * (dVar47 + dVar47);
            local_1f8 = ((double)CONCAT44(uVar75,uVar74) - (dVar49 * dVar48 + dVar59 * dVar45)) *
                        dVar35;
            dStack_1d0 = ((double)CONCAT44(uVar77,uVar76) - (dVar49 * dVar48 + dVar38)) * dVar37;
            local_1a8 = (1.0 - (dVar38 + dVar59 * dVar45)) * dVar4;
            dVar38 = *(double *)(lVar19 + 0x28);
            dVar49 = dVar48 * dVar38;
            dVar60 = (dVar47 + dVar47) * *(double *)(lVar19 + 0x28);
            dVar38 = dVar45 * dVar38;
            dStack_1f0 = (dVar45 * dVar47 + dVar49) * dVar35;
            local_1c8 = (dVar48 * dVar59 + dVar60) * dVar37;
            local_1b8 = (dVar38 + *pdVar20 * dVar48) * dVar4;
            local_1d8 = (dVar45 * dVar47 - dVar49) * dVar37;
            dStack_1b0 = (dVar48 * dVar59 - dVar60) * dVar4;
            local_1e8 = (*pdVar20 * dVar48 - dVar38) * dVar35;
            uStack_1e0 = 0;
            uStack_1c0 = 0;
            uStack_1a0 = 0;
            local_198 = *(undefined8 *)(lVar19 + 0x30);
            uStack_190 = *(undefined8 *)(lVar19 + 0x38);
            local_188 = *(undefined8 *)(lVar19 + 0x40);
            uStack_180 = 0x3ff0000000000000;
            pdVar23 = (double *)(lVar3 + -0x50 + lVar18);
            dVar59 = *pdVar23;
            dVar49 = pdVar23[1];
            dVar47 = *(double *)(lVar3 + -0x40 + lVar18);
            pdVar23 = (double *)(lVar3 + -0x10 + lVar18);
            local_268 = *pdVar23;
            local_258 = pdVar23[1];
            dStack_230 = *(double *)(lVar3 + lVar18);
            dVar61 = dVar49 + dVar49;
            dVar45 = dVar47 + dVar47;
            dVar38 = dVar59 * (dVar59 + dVar59);
            local_278 = ((double)CONCAT44(uVar75,uVar74) - (dVar47 * dVar45 + dVar49 * dVar61)) *
                        local_268;
            dStack_250 = ((double)CONCAT44(uVar77,uVar76) - (dVar47 * dVar45 + dVar38)) * local_258;
            local_228 = (1.0 - (dVar38 + dVar49 * dVar61)) * dStack_230;
            dVar47 = *(double *)(lVar3 + -0x50 + lVar18) * dVar45;
            pdVar23 = (double *)(lVar3 + -0x38 + lVar18);
            dVar38 = *pdVar23;
            dVar48 = dVar45 * dVar38;
            dVar60 = (dVar59 + dVar59) * *pdVar23;
            dVar38 = dVar61 * dVar38;
            dStack_270 = (dVar61 * dVar59 + dVar48) * local_268;
            local_248 = (dVar45 * dVar49 + dVar60) * local_258;
            local_238 = (dVar38 + dVar47) * dStack_230;
            local_268 = (dVar47 - dVar38) * local_268;
            local_258 = (dVar61 * dVar59 - dVar48) * local_258;
            dStack_230 = (dVar45 * dVar49 - dVar60) * dStack_230;
            uStack_260 = 0;
            uStack_240 = 0;
            uStack_220 = 0;
            puVar26 = (undefined8 *)(lVar3 + -0x30 + lVar18);
            local_218 = *puVar26;
            uStack_210 = puVar26[1];
            local_208 = *(undefined8 *)(lVar3 + -0x20 + lVar18);
            uStack_200 = 0x3ff0000000000000;
            pdVar23 = &local_1f8;
            FUN_1447fea8d(local_178,&local_278);
            FUN_144a1c686(local_178,0x3e45798ee0000000);
            auVar32._8_8_ = -(ulonglong)(0.0 <= auVar40._8_8_ * dVar37);
            auVar32._0_8_ = -(ulonglong)(0.0 <= auVar40._0_8_ * dVar35);
            auVar7._4_4_ = uVar75;
            auVar7._0_4_ = uVar74;
            auVar7._8_4_ = uVar76;
            auVar7._12_4_ = uVar77;
            auVar42 = blendvpd(_DAT_149936790,auVar7,auVar32);
            uVar27 = -(ulonglong)(0.0 <= auVar64._0_8_ * dVar4);
            dVar38 = (double)(~uVar27 & 0xbff0000000000000 | uVar27 & 0x3ff0000000000000);
            dVar47 = auVar42._0_8_;
            local_178[2] = local_178[2] * dVar47;
            local_178[1] = local_178[1] * dVar47;
            local_178[0] = local_178[0] * dVar47;
            dVar47 = auVar42._8_8_;
            local_148 = local_148 * dVar47;
            local_150 = local_150 * dVar47;
            local_158 = dVar47 * local_158;
            local_128 = local_128 * dVar38;
            local_130 = local_130 * dVar38;
            local_138 = dVar38 * local_138;
            pdVar22 = local_178;
            FUN_14481fd10(&local_298);
            dVar38 = local_288 * local_288 + local_298 * local_298;
            dVar47 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
            auVar57._0_8_ = dVar38 + dVar47;
            auVar57._8_8_ = dVar38 + dVar47;
            auVar33._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_);
            auVar33._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_);
            auVar42 = sqrtpd(auVar57,auVar57);
            auVar70._4_4_ = uVar75;
            auVar70._0_4_ = uVar74;
            auVar70._12_4_ = uVar77;
            auVar70._8_4_ = uVar76;
            auVar42 = divpd(auVar70,auVar42);
            auVar71._0_8_ = auVar42._0_8_ * local_288;
            auVar71._8_8_ = auVar42._8_8_ * dStack_280;
            dVar39 = (double)((ulonglong)(local_298 * auVar42._0_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._0_8_));
            dVar46 = (double)((ulonglong)(dStack_290 * auVar42._8_8_) &
                             -(ulonglong)(9.99999993922529e-09 <= auVar57._8_8_));
            auVar58 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar71,auVar33);
            dVar47 = 0.0;
            dVar38 = local_108;
            dVar60 = local_118;
            dVar61 = dStack_110;
          }
          dVar59 = auVar64._8_8_ * auVar41._8_8_;
          dVar37 = auVar40._8_8_ * dVar37;
          auVar5._8_4_ = SUB84(dVar61,0);
          auVar5._0_8_ = dVar60;
          auVar5._12_4_ = (int)((ulonglong)dVar61 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + -0x30 + lVar17) = auVar5;
          pdVar20 = (double *)(lVar2 + -0x20 + lVar17);
          *pdVar20 = dVar38;
          pdVar20[1] = dVar47;
          auVar41._8_4_ = SUB84(dVar37,0);
          auVar41._0_8_ = auVar40._0_8_ * dVar35;
          auVar41._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + -0x10 + lVar17) = auVar41;
          dVar38 = auVar58._0_8_;
          dVar47 = auVar58._8_8_;
          dVar35 = dVar38 * dVar38 + dVar39 * dVar39;
          dVar37 = dVar47 * dVar47 + dVar46 * dVar46;
          auVar36._0_8_ = dVar35 + dVar37;
          auVar36._8_8_ = dVar35 + dVar37;
          auVar8._8_4_ = SUB84(dVar59,0);
          auVar8._0_8_ = auVar64._0_8_ * dVar4;
          auVar8._12_4_ = (int)((ulonglong)dVar59 >> 0x20);
          *(undefined1 (*) [16])(lVar2 + lVar17) = auVar8;
          auVar34._8_8_ = -(ulonglong)(1e-08 <= auVar36._8_8_);
          auVar34._0_8_ = -(ulonglong)(1e-08 <= auVar36._0_8_);
          auVar42 = sqrtpd(auVar36,auVar36);
          auVar72._4_4_ = uVar75;
          auVar72._0_4_ = uVar74;
          auVar72._12_4_ = uVar77;
          auVar72._8_4_ = uVar76;
          auVar41 = divpd(auVar72,auVar42);
          auVar73._0_8_ = auVar41._0_8_ * dVar38;
          auVar73._8_8_ = auVar41._8_8_ * dVar47;
          auVar42 = blendvpd(_DAT_149935300,auVar73,auVar34);
          auVar44._0_8_ = (ulonglong)(dVar39 * auVar41._0_8_) & -(ulonglong)(1e-08 <= auVar36._0_8_)
          ;
          auVar44._8_8_ = (ulonglong)(dVar46 * auVar41._8_8_) & -(ulonglong)(1e-08 <= auVar36._8_8_)
          ;
          *(undefined1 (*) [16])(lVar2 + -0x50 + lVar17) = auVar44;
          *(undefined1 (*) [16])(lVar2 + -0x40 + lVar17) = auVar42;
          iVar13 = (int)param_2[1];
        }
        lVar16 = lVar16 + 1;
        lVar18 = lVar18 + 0x60;
        lVar17 = lVar17 + 0x130;
      } while (lVar16 < iVar13);
    }
  }
  if ((local_f0 ^ (ulonglong)auStack_418) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149892446 FUN_149892446 body=542 status=ok
// SIG undefined FUN_149892446(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149892446(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar18;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong local_98 [3];
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_2 != (longlong *)0x0) {
    local_98[0] = 0;
    local_98[1] = 0;
    FUN_140ee84a4(local_98,(int)param_1[1],1);
    auVar7 = _DAT_149935300;
    auVar6 = _DAT_149934d80;
    if (0 < (int)param_1[1]) {
      lVar13 = 0x10;
      lVar10 = 0;
      lVar14 = 0;
      do {
        lVar9 = *param_1;
        lVar8 = (longlong)*(int *)(lVar9 + -0x10 + lVar13);
        if (lVar8 == -1) {
          pplVar11 = (longlong **)(lVar9 + lVar13);
          puVar12 = (undefined8 *)(local_98[0] + lVar10);
          lVar8 = 0xc;
          lVar9 = local_98[0];
        }
        else {
          FUN_1449437a2(lVar9 + lVar13,&local_f8,lVar9 + lVar8 * 0x130 + 0x10);
          lVar8 = 0xc;
          lVar9 = local_98[0];
          pplVar11 = &local_f8;
          puVar12 = (undefined8 *)(local_98[0] + lVar10);
        }
        for (; lVar8 != 0; lVar8 = lVar8 + -1) {
          *puVar12 = *pplVar11;
          pplVar11 = pplVar11 + 1;
          puVar12 = puVar12 + 1;
        }
        dVar2 = *(double *)(lVar9 + lVar10);
        dVar3 = ((double *)(lVar9 + lVar10))[1];
        pdVar1 = (double *)(lVar9 + 0x10 + lVar10);
        dVar4 = *pdVar1;
        dVar5 = pdVar1[1];
        dVar15 = dVar4 * dVar4 + dVar2 * dVar2;
        dVar18 = dVar5 * dVar5 + dVar3 * dVar3;
        auVar16._0_8_ = dVar15 + dVar18;
        auVar16._8_8_ = dVar15 + dVar18;
        auVar17 = sqrtpd(auVar16,auVar16);
        auVar19 = divpd(auVar6,auVar17);
        auVar20._0_8_ = auVar19._0_8_ * dVar4;
        auVar20._8_8_ = auVar19._8_8_ * dVar5;
        auVar17._8_8_ = -(ulonglong)(1e-08 <= auVar16._8_8_);
        auVar17._0_8_ = -(ulonglong)(1e-08 <= auVar16._0_8_);
        auVar17 = blendvpd(auVar7,auVar20,auVar17);
        *(ulonglong *)(lVar9 + lVar10) =
             (ulonglong)(dVar2 * auVar19._0_8_) & -(ulonglong)(1e-08 <= auVar16._0_8_);
        ((ulonglong *)(lVar9 + lVar10))[1] =
             (ulonglong)(dVar3 * auVar19._8_8_) & -(ulonglong)(1e-08 <= auVar16._8_8_);
        *(undefined1 (*) [16])(lVar9 + 0x10 + lVar10) = auVar17;
        lVar14 = lVar14 + 1;
        lVar10 = lVar10 + 0x60;
        lVar13 = lVar13 + 0x130;
      } while (lVar14 < (int)param_1[1]);
    }
    if (0 < (int)param_2[1]) {
      lVar10 = 0;
      lVar13 = 0;
      do {
        local_f8 = param_1;
        local_f0 = local_98;
        (*(code *)(&PTR_LAB_14bed0ab0)[*(byte *)(*param_2 + 0xb0 + lVar10)])
                  (&local_f8,*param_2 + lVar10);
        lVar13 = lVar13 + 1;
        lVar10 = lVar10 + 0xc0;
      } while (lVar13 < (int)param_2[1]);
    }
    if (local_98[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_80 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149892665 FUN_149892665 body=3085 status=ok
// SIG undefined FUN_149892665(void)

void FUN_149892665(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  longlong *param_5,longlong *param_6)

{
  byte *pbVar1;
  longlong lVar2;
  double *pdVar3;
  ulonglong *puVar4;
  double dVar5;
  double dVar7;
  double dVar8;
  uint uVar10;
  undefined4 uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  undefined7 uVar18;
  longlong lVar19;
  byte bVar20;
  uint *puVar21;
  bool bVar22;
  ulonglong uVar23;
  float fVar24;
  float fVar25;
  double dVar26;
  double dVar27;
  double dVar30;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar33;
  float fVar34;
  undefined1 auStack_2f8 [47];
  byte local_2c9;
  longlong *local_2c8;
  undefined8 local_2c0;
  int local_2b4;
  longlong *local_2b0;
  int local_2a8;
  uint local_2a4;
  longlong local_2a0;
  longlong *local_298;
  longlong *local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  uint uStack_270;
  undefined4 uStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double local_1f0;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  uint uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_188;
  double local_180;
  double local_178;
  double local_170;
  byte local_168;
  double local_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  ulonglong local_f0;
  double dVar6;
  double dVar9;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) < 0) {
    FUN_14989962a(param_2);
  }
  if ((int)param_1[1] < 1) {
LAB_149892ac9:
    if ((local_f0 ^ (ulonglong)auStack_2f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  local_298 = param_6 + 7;
  fVar33 = 1.0;
  lVar19 = 0;
LAB_14989276e:
  lVar14 = *param_1;
  lVar15 = lVar19 * 0xa0;
  if ((((*(char *)(lVar14 + 0xc + lVar15) == '\x01') &&
       (pbVar1 = (byte *)(lVar14 + lVar15), (uint)*(ushort *)(pbVar1 + 6) < DAT_14c87eb08 + 1U)) &&
      (lVar13 = *(longlong *)(pbVar1 + 4), lVar13 != 0)) &&
     ((bVar20 = *pbVar1, bVar20 != 0 && ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34))))) {
    uVar10 = (uint)((ulonglong)lVar13 >> 0x10);
    uVar16 = (uint)lVar13 & 0xffff;
    plVar12 = (longlong *)param_6[8];
    if ((longlong *)param_6[8] == (longlong *)0x0) {
      plVar12 = local_298;
    }
    iVar17 = *(int *)((longlong)plVar12 +
                     (ulonglong)
                     ((int)param_6[9] - 1U &
                     (uint)bVar20 +
                     ((int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar16) +
                      (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4)) * 10) * 4);
    if (iVar17 != -1) {
      do {
        lVar2 = *param_6 + (longlong)iVar17 * 0x18;
        if ((*(longlong *)(lVar2 + 4) == lVar13) &&
           (*(byte *)(*param_6 + (longlong)iVar17 * 0x18) == bVar20)) {
          if ((int *)(lVar2 + 0xc) != (int *)0x0 && lVar2 != 0) {
            local_2b4 = *(int *)(lVar2 + 0xc);
            local_2a0 = (longlong)local_2b4;
            if (((pbVar1[0x40] != 1) ||
                (((bVar20 = pbVar1[0x48], bVar20 == 0 && (pbVar1[0x49] == 0)) && (pbVar1[0x4a] == 0)
                 ))) || (uVar10 = *(uint *)(*param_4 + local_2a0 * 0x130), uVar10 == 0xffffffff))
            goto LAB_149892920;
            if ((int)param_5[1] == *(int *)((longlong)param_5 + 0x34)) {
              puVar21 = (uint *)0x0;
              goto LAB_149892ba3;
            }
            plVar12 = param_5 + 7;
            if ((longlong *)param_5[8] != (longlong *)0x0) {
              plVar12 = (longlong *)param_5[8];
            }
            uVar16 = *(uint *)((longlong)plVar12 + (ulonglong)((int)param_5[9] - 1U & uVar10) * 4);
            if (uVar16 == 0xffffffff) goto LAB_149892f64;
            goto LAB_149892aa7;
          }
          break;
        }
        iVar17 = *(int *)(lVar2 + 0x10);
      } while (iVar17 != -1);
    }
  }
  goto LAB_1498927ae;
  while (uVar16 = puVar21[4], uVar16 != 0xffffffff) {
LAB_149892aa7:
    puVar21 = (uint *)(*param_5 + (longlong)(int)uVar16 * 0x18);
    if (*puVar21 == uVar10) goto LAB_149892ba3;
  }
LAB_149892f64:
  puVar21 = (uint *)0x0;
LAB_149892ba3:
  dVar5 = 0.0;
  dVar6 = 0.0;
  if (bVar20 != 2) {
    dVar6 = *(double *)(pbVar1 + 0x50) * 0.017453292519943295;
  }
  dVar7 = 0.0;
  if (pbVar1[0x49] != 2) {
    dVar7 = *(double *)(pbVar1 + 0x58) * 0.017453292519943295;
  }
  if (pbVar1[0x4a] != 2) {
    dVar5 = *(double *)(pbVar1 + 0x60) * 0.017453292519943295;
  }
  uVar23 = CONCAT71((int7)(int3)((uint)local_2b4 >> 8),local_2c9) & 0xfffffffffffffff8;
  uVar18 = (undefined7)(uVar23 >> 8);
  bVar20 = (pbVar1[0x4a] != 0) << 2 | (pbVar1[0x49] != 0) * '\x02' | (byte)uVar23 | bVar20 != 0;
  uStack_270 = *(uint *)(pbVar1 + 8);
  local_278 = *(longlong *)pbVar1;
  local_2c8 = param_4;
  local_2c0 = param_3;
  local_2b0 = param_2;
  uVar11 = FUN_140813180(param_3,&local_278);
  FUN_14486750c(param_3,&local_218,uVar11,CONCAT71(uVar18,1));
  uStack_270 = puVar21[3];
  local_278 = *(longlong *)(puVar21 + 1);
  uVar11 = FUN_140813180(param_3,&local_278);
  FUN_14486750c(param_3,&local_158,uVar11,1);
  FUN_1449437a2(&local_218,&local_278,&local_158);
  FUN_144a7484c(*param_1 + lVar15 + 0x88,&local_218);
  local_1f0 = uStack_200;
  local_1f8 = local_208;
  dVar26 = uStack_210;
  dVar27 = local_218;
  param_2 = local_2b0;
  dStack_140 = local_208;
  dStack_138 = uStack_200;
  dStack_150 = local_218;
  dStack_148 = uStack_210;
  local_218 = (double)CONCAT44(local_2b4,uVar10);
  uStack_210 = local_158;
  local_208 = dVar27;
  uStack_200 = dVar26;
  local_1e8 = (undefined4)local_278;
  uStack_1e4 = local_278._4_4_;
  uStack_1e0 = uStack_270;
  uStack_1dc = uStack_26c;
  local_1d8 = local_268;
  uStack_1d0 = uStack_260;
  local_1c8 = local_258;
  uStack_1c0 = uStack_250;
  local_1b8 = local_248;
  uStack_1b0 = uStack_240;
  local_1a8 = local_238;
  uStack_1a0 = uStack_230;
  local_198 = local_228;
  uStack_190 = uStack_220;
  local_168 = 0;
  iVar17 = (int)local_2b0[1];
  *(uint *)(local_2b0 + 1) = iVar17 + 1U;
  local_2c9 = bVar20;
  local_188 = bVar20;
  local_180 = dVar6;
  local_178 = dVar7;
  local_170 = dVar5;
  if (*(uint *)((longlong)local_2b0 + 0xc) < iVar17 + 1U) {
    FUN_14989965a(local_2b0,iVar17);
  }
  param_4 = local_2c8;
  lVar14 = *param_2;
  *(byte *)(lVar14 + 0xb0 + (longlong)iVar17 * 0xc0) = local_168;
  (*(code *)(&PTR_FUN_14bed1140)[local_168])(lVar14 + (longlong)iVar17 * 0xc0,&local_218);
  lVar14 = *param_1;
  param_3 = local_2c0;
LAB_149892920:
  fVar34 = 0.0;
  if ((*(char *)(lVar14 + 0x68 + lVar15) != '\0') &&
     (iVar17 = *(int *)(*param_4 + local_2a0 * 0x130), iVar17 != -1)) {
    local_288 = *(undefined8 *)pbVar1;
    local_280 = *(undefined4 *)(pbVar1 + 8);
    local_2a8 = iVar17;
    FUN_14449fd62(param_3,&local_278,&local_288,0);
    if (0 < (longlong)(int)uStack_270) {
      local_290 = (longlong *)param_6[8];
      if ((longlong *)param_6[8] == (longlong *)0x0) {
        local_290 = local_298;
      }
      local_2a4 = (int)param_6[9] - 1;
      lVar14 = 0;
      do {
        local_2c8 = param_4;
        local_2c0 = param_3;
        local_2b0 = param_2;
        if ((int)param_6[1] != *(int *)((longlong)param_6 + 0x34)) {
          lVar13 = *(longlong *)(local_278 + 4 + lVar14 * 0xc);
          uVar10 = (uint)((ulonglong)lVar13 >> 0x10);
          uVar16 = (uint)lVar13 & 0xffff;
          bVar20 = *(byte *)(local_278 + lVar14 * 0xc);
          iVar17 = *(int *)((longlong)local_290 +
                           (ulonglong)
                           ((uint)bVar20 +
                            ((int)((ulonglong)lVar13 >> 0x20) + ((uint)lVar13 << 0x10 | uVar16) +
                             (uVar10 << 0x13 | uVar10 & 0xffff) + (uVar16 >> 4)) * 10 & local_2a4) *
                           4);
          while (iVar17 != -1) {
            lVar2 = *param_6 + (longlong)iVar17 * 0x18;
            if ((*(longlong *)(lVar2 + 4) == lVar13) &&
               (*(byte *)(*param_6 + (longlong)iVar17 * 0x18) == bVar20)) {
              if ((undefined4 *)(lVar2 + 0xc) != (undefined4 *)0x0 && lVar2 != 0) {
                lVar14 = *param_1;
                bVar22 = *(char *)(lVar14 + 0x69 + lVar15) == '\0';
                dVar5 = *(double *)(lVar14 + 0x70 + lVar15);
                dVar6 = *(double *)(lVar14 + 0x78 + lVar15);
                dVar7 = *(double *)(lVar14 + 0x80 + lVar15);
                local_1f8 = dVar7;
                local_208 = dVar5;
                uStack_200 = dVar6;
                if (bVar22) {
                  dVar27 = dVar7 * dVar7 + dVar5 * dVar5 + dVar6 * dVar6;
                  if (((dVar27 != 1.0) || (NAN(dVar27))) &&
                     (local_1f8 = DAT_14c8464f0, local_208 = DAT_14c8464e0,
                     uStack_200 = DAT_14c8464e8, 9.99999993922529e-09 <= dVar27)) {
                    dVar27 = 1.0 / SQRT(dVar27);
                    local_1f8 = dVar7 * dVar27;
                    local_208 = dVar5 * dVar27;
                    uStack_200 = dVar6 * dVar27;
                  }
                }
                local_218 = (double)CONCAT44(local_2a8,local_2b4);
                uStack_210._0_5_ = CONCAT14(bVar22,*(undefined4 *)(lVar2 + 0xc));
                local_168 = 2;
                iVar17 = (int)param_2[1];
                *(uint *)(param_2 + 1) = iVar17 + 1U;
                if (*(uint *)((longlong)param_2 + 0xc) < iVar17 + 1U) {
                  FUN_14989965a(param_2,iVar17);
                }
                lVar14 = *param_2;
                *(byte *)(lVar14 + 0xb0 + (longlong)iVar17 * 0xc0) = local_168;
                (*(code *)(&PTR_FUN_14bed1140)[local_168])
                          (lVar14 + (longlong)iVar17 * 0xc0,&local_218);
                goto LAB_149892f26;
              }
              break;
            }
            iVar17 = *(int *)(lVar2 + 0x10);
          }
        }
        lVar14 = lVar14 + 1;
      } while (lVar14 != (int)uStack_270);
    }
LAB_149892f26:
    if (local_278 != 0) {
      FUN_1400020a8();
    }
    lVar14 = *param_1;
  }
  FUN_144a7484c(lVar14 + lVar15 + 0x88,&local_218);
  lVar14 = *param_4;
  lVar13 = local_2a0 * 0x130;
  pdVar3 = (double *)(lVar14 + 0x128 + lVar13);
  dVar5 = *pdVar3;
  dVar6 = *pdVar3;
  pdVar3 = (double *)(lVar14 + 0x110 + lVar13);
  dVar27 = *pdVar3;
  dVar7 = *pdVar3;
  pdVar3 = (double *)(lVar14 + 0x118 + lVar13);
  dVar30 = *pdVar3;
  dVar26 = *pdVar3;
  pdVar3 = (double *)(lVar14 + 0x120 + lVar13);
  dVar8 = *pdVar3;
  dVar9 = *pdVar3;
  pdVar3 = (double *)(lVar14 + 0x110 + lVar13);
  *pdVar3 = uStack_210 * dVar8 * -1.0 +
            local_208 * dVar30 + uStack_200 * dVar27 * 1.0 + local_218 * dVar5;
  pdVar3[1] = local_218 * dVar9 * 1.0 +
              uStack_200 * dVar26 + local_208 * dVar7 * -1.0 + uStack_210 * dVar6;
  pdVar3 = (double *)(lVar14 + 0x120 + lVar13);
  *pdVar3 = uStack_200 * dVar8 * 1.0 +
            ((dVar27 * uStack_210 * 1.0 + dVar5 * local_208) - local_218 * dVar30);
  pdVar3[1] = local_208 * dVar9 * -1.0 +
              ((dVar7 * local_218 * -1.0 + dVar6 * uStack_200) - uStack_210 * dVar26);
  lVar14 = *param_4;
  pdVar3 = (double *)(lVar14 + 0x110 + lVar13);
  dVar5 = *pdVar3;
  dVar6 = pdVar3[1];
  pdVar3 = (double *)(lVar14 + 0x120 + lVar13);
  dVar7 = *pdVar3;
  dVar27 = pdVar3[1];
  dVar26 = dVar7 * dVar7 + dVar5 * dVar5;
  dVar30 = dVar27 * dVar27 + dVar6 * dVar6;
  auVar28._0_8_ = dVar26 + dVar30;
  auVar28._8_8_ = dVar26 + dVar30;
  uVar23 = -(ulonglong)(9.99999993922529e-09 <= auVar28._8_8_);
  auVar29 = sqrtpd(auVar28,auVar28);
  auVar31._8_8_ = 0x3ff0000000000000;
  auVar31._0_8_ = 0x3ff0000000000000;
  auVar29 = divpd(auVar31,auVar29);
  auVar32._0_8_ = auVar29._0_8_ * dVar7;
  auVar32._8_8_ = auVar29._8_8_ * dVar27;
  puVar4 = (ulonglong *)(lVar14 + 0x110 + lVar13);
  *puVar4 = (ulonglong)(dVar5 * auVar29._0_8_) & -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_)
  ;
  puVar4[1] = (ulonglong)(dVar6 * auVar29._8_8_) & uVar23;
  auVar29._8_4_ = (int)uVar23;
  auVar29._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar28._0_8_);
  auVar29._12_4_ = (int)(uVar23 >> 0x20);
  auVar29 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar32,auVar29);
  *(undefined1 (*) [16])(lVar14 + 0x120 + lVar13) = auVar29;
  lVar14 = *param_4 + lVar13;
  if (*(int *)(*param_4 + 0x104 + lVar13) < 0) {
    *(undefined4 *)(lVar14 + 0x100) = 0;
    FUN_149897304(lVar14 + 0xf8);
  }
  else {
    *(undefined4 *)(lVar14 + 0x100) = 0;
  }
  lVar14 = *param_1;
  if (*(char *)(lVar14 + 0xd + lVar15) == '\x01') {
    local_208 = (double)DAT_14c8462e8;
    local_218 = (double)DAT_14c8462d8;
    uStack_210 = (double)DAT_14c8462e0;
    lVar15 = lVar19 * 0xa0;
    fVar24 = (float)*(double *)(lVar14 + 0x28 + lVar15);
    if (1.0 <= fVar24) {
      fVar24 = fVar33;
    }
    if (fVar24 <= 0.0) {
      fVar24 = fVar34;
    }
    fVar25 = (float)*(double *)(lVar14 + 0x10 + lVar15);
    if (1.0 <= fVar25) {
      fVar25 = fVar33;
    }
    if (fVar25 <= 0.0) {
      fVar25 = fVar34;
    }
    uStack_200 = (double)CONCAT44(fVar24,fVar25);
    FUN_149893274(*param_4 + lVar13,&local_218);
    local_208 = (double)DAT_14c8462a0;
    local_218 = (double)DAT_14c846290;
    uStack_210 = (double)DAT_14c846298;
    fVar24 = (float)*(double *)(*param_1 + 0x30 + lVar15);
    if (1.0 <= fVar24) {
      fVar24 = fVar33;
    }
    if (fVar24 <= 0.0) {
      fVar24 = fVar34;
    }
    fVar25 = (float)*(double *)(*param_1 + 0x18 + lVar15);
    if (1.0 <= fVar25) {
      fVar25 = fVar33;
    }
    if (fVar25 <= 0.0) {
      fVar25 = fVar34;
    }
    uStack_200 = (double)CONCAT44(fVar24,fVar25);
    FUN_149893274(*param_4 + lVar13,&local_218);
    local_208 = DAT_14c8462d0;
    local_218 = DAT_14c8462c0;
    uStack_210 = DAT_14c8462c8;
    fVar24 = (float)*(double *)(*param_1 + 0x38 + lVar15);
    if (1.0 <= fVar24) {
      fVar24 = fVar33;
    }
    if (fVar24 <= 0.0) {
      fVar24 = fVar34;
    }
    fVar25 = (float)*(double *)(*param_1 + 0x20 + lVar15);
    if (1.0 <= fVar25) {
      fVar25 = fVar33;
    }
    if (fVar25 <= 0.0) {
      fVar25 = fVar34;
    }
    uStack_200 = (double)CONCAT44(fVar24,fVar25);
    FUN_149893274(lVar13 + *param_4,&local_218);
  }
LAB_1498927ae:
  lVar19 = lVar19 + 1;
  if ((int)param_1[1] <= lVar19) goto LAB_149892ac9;
  goto LAB_14989276e;
}



// FUNCTION 149893274 FUN_149893274 body=152 status=ok
// SIG undefined FUN_149893274(void)

void FUN_149893274(longlong param_1,double *param_2)

{
  double *pdVar1;
  int iVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (((9.999999747378752e-05 < ABS(*param_2)) || (9.999999747378752e-05 < ABS(param_2[1]))) ||
     (9.999999747378752e-05 < ABS(param_2[2]))) {
    iVar2 = *(int *)(param_1 + 0x100);
    *(uint *)(param_1 + 0x100) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x104) < iVar2 + 1U) {
      FUN_149897334((longlong *)(param_1 + 0xf8),iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0xf8);
    dVar4 = *param_2;
    dVar5 = param_2[1];
    dVar6 = param_2[3];
    pdVar1 = (double *)(lVar3 + 0x10 + (longlong)iVar2 * 0x20);
    *pdVar1 = param_2[2];
    pdVar1[1] = dVar6;
    pdVar1 = (double *)(lVar3 + (longlong)iVar2 * 0x20);
    *pdVar1 = dVar4;
    pdVar1[1] = dVar5;
  }
  return;
}



// FUNCTION 149893314 FUN_149893314 body=1974 status=ok
// SIG undefined FUN_149893314(void)

void FUN_149893314(undefined8 param_1,longlong *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_f8 [40];
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  ulonglong local_b0;
  double dVar3;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (0 < (int)param_2[1]) {
    lVar14 = 0;
    lVar15 = 0;
    do {
      lVar6 = *param_2;
      if ((longlong)*(int *)(lVar6 + lVar14) == -1) {
        pdVar1 = (double *)(lVar6 + 0x110 + lVar14);
        dVar7 = *pdVar1;
        dVar8 = pdVar1[1];
        pdVar1 = (double *)(lVar6 + 0x120 + lVar14);
        dVar2 = *pdVar1;
        dVar3 = pdVar1[1];
      }
      else {
        lVar13 = (longlong)*(int *)(lVar6 + lVar14) * 0x130;
        pdVar1 = (double *)(lVar6 + 0x110 + lVar14);
        dVar9 = *pdVar1;
        dVar10 = pdVar1[1];
        pdVar1 = (double *)(lVar6 + 0x120 + lVar14);
        dVar11 = *pdVar1;
        dVar12 = pdVar1[1];
        pdVar1 = (double *)(lVar6 + 0x28 + lVar13);
        dVar2 = *pdVar1;
        dVar3 = *pdVar1;
        pdVar1 = (double *)(lVar6 + 0x18 + lVar13);
        dVar4 = *pdVar1;
        dVar16 = *pdVar1;
        pdVar1 = (double *)(lVar6 + 0x10 + lVar13);
        dVar17 = *pdVar1;
        dVar18 = *pdVar1;
        pdVar1 = (double *)(lVar6 + 0x20 + lVar13);
        dVar5 = *pdVar1;
        dVar19 = *pdVar1;
        dVar7 = dVar10 * dVar5 * -1.0 + dVar11 * dVar4 + dVar17 * dVar12 * 1.0 + dVar2 * dVar9;
        dVar8 = dVar9 * dVar19 * 1.0 + dVar12 * dVar16 + dVar18 * dVar11 * -1.0 + dVar3 * dVar10;
        dVar2 = dVar12 * dVar5 * 1.0 + ((dVar17 * dVar10 * 1.0 + dVar2 * dVar11) - dVar4 * dVar9);
        dVar3 = dVar11 * dVar19 * -1.0 +
                ((dVar18 * dVar9 * -1.0 + dVar3 * dVar12) - dVar16 * dVar10);
      }
      if (*(int *)(lVar6 + 0x100 + lVar14) == 3) {
        dVar18 = dVar8 * DAT_14c8462e8 - DAT_14c8462e0 * dVar2;
        dVar18 = dVar18 + dVar18;
        dVar4 = dVar7 * DAT_14c8462e0 - DAT_14c8462d8 * dVar8;
        dVar4 = dVar4 + dVar4;
        dVar19 = dVar3 * dVar4 + DAT_14c8462e8;
        dVar16 = dVar2 * DAT_14c8462d8 - DAT_14c8462e8 * dVar7;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar3 * dVar16 + DAT_14c8462e0;
        pdVar1 = *(double **)(lVar6 + 0xf8 + lVar14);
        *pdVar1 = (dVar8 * dVar4 - dVar16 * dVar2) + dVar3 * dVar18 + DAT_14c8462d8;
        pdVar1[1] = (dVar2 * dVar18 - dVar4 * dVar7) + dVar17;
        pdVar1[2] = (dVar7 * dVar16 - dVar18 * dVar8) + dVar19;
        dVar18 = dVar8 * DAT_14c8462a0 - DAT_14c846298 * dVar2;
        dVar18 = dVar18 + dVar18;
        dVar4 = dVar7 * DAT_14c846298 - DAT_14c846290 * dVar8;
        dVar4 = dVar4 + dVar4;
        dVar19 = dVar3 * dVar4 + DAT_14c8462a0;
        dVar16 = dVar2 * DAT_14c846290 - DAT_14c8462a0 * dVar7;
        dVar16 = dVar16 + dVar16;
        dVar17 = dVar3 * dVar16 + DAT_14c846298;
        lVar6 = *(longlong *)(*param_2 + 0xf8 + lVar14);
        *(double *)(lVar6 + 0x20) =
             (dVar8 * dVar4 - dVar16 * dVar2) + dVar3 * dVar18 + DAT_14c846290;
        *(double *)(lVar6 + 0x28) = (dVar2 * dVar18 - dVar4 * dVar7) + dVar17;
        *(double *)(lVar6 + 0x30) = (dVar7 * dVar16 - dVar18 * dVar8) + dVar19;
        dVar18 = dVar8 * DAT_14c8462d0 - DAT_14c8462c8 * dVar2;
        dVar18 = dVar18 + dVar18;
        dVar16 = dVar7 * DAT_14c8462c8 - DAT_14c8462c0 * dVar8;
        dVar16 = dVar16 + dVar16;
        dVar4 = dVar3 * dVar16 + DAT_14c8462d0;
        dVar17 = dVar2 * DAT_14c8462c0 - DAT_14c8462d0 * dVar7;
        dVar17 = dVar17 + dVar17;
        dVar19 = dVar3 * dVar17 + DAT_14c8462c8;
        lVar6 = *(longlong *)(*param_2 + 0xf8 + lVar14);
        *(double *)(lVar6 + 0x40) =
             (dVar8 * dVar16 - dVar17 * dVar2) + dVar3 * dVar18 + DAT_14c8462c0;
        *(double *)(lVar6 + 0x48) = (dVar2 * dVar18 - dVar16 * dVar7) + dVar19;
        *(double *)(lVar6 + 0x50) = (dVar7 * dVar17 - dVar18 * dVar8) + dVar4;
      }
      else {
        if (*(int *)(lVar6 + 0x104 + lVar14) < 0) {
          *(undefined4 *)(lVar6 + lVar14 + 0x100) = 0;
          FUN_149897304();
        }
        else {
          *(undefined4 *)(lVar6 + 0x100 + lVar14) = 0;
        }
        dVar17 = dVar8 * DAT_14c8462e8 - DAT_14c8462e0 * dVar2;
        dVar17 = dVar17 + dVar17;
        dVar4 = dVar7 * DAT_14c8462e0 - DAT_14c8462d8 * dVar8;
        dVar4 = dVar4 + dVar4;
        dVar16 = dVar2 * DAT_14c8462d8 - DAT_14c8462e8 * dVar7;
        dVar16 = dVar16 + dVar16;
        local_c0 = (dVar7 * dVar16 - dVar17 * dVar8) + dVar3 * dVar4 + DAT_14c8462e8;
        local_c8 = (dVar2 * dVar17 - dVar4 * dVar7) + dVar3 * dVar16 + DAT_14c8462e0;
        local_d0 = (dVar8 * dVar4 - dVar16 * dVar2) + dVar3 * dVar17 + DAT_14c8462d8;
        local_b8 = 0x3f800000;
        FUN_149893274(*param_2 + lVar14,&local_d0);
        dVar17 = dVar8 * DAT_14c8462a0 - DAT_14c846298 * dVar2;
        dVar17 = dVar17 + dVar17;
        dVar4 = dVar7 * DAT_14c846298 - DAT_14c846290 * dVar8;
        dVar4 = dVar4 + dVar4;
        dVar16 = dVar2 * DAT_14c846290 - DAT_14c8462a0 * dVar7;
        dVar16 = dVar16 + dVar16;
        local_c0 = (dVar7 * dVar16 - dVar17 * dVar8) + dVar3 * dVar4 + DAT_14c8462a0;
        local_c8 = (dVar2 * dVar17 - dVar4 * dVar7) + dVar3 * dVar16 + DAT_14c846298;
        local_d0 = (dVar8 * dVar4 - dVar16 * dVar2) + dVar3 * dVar17 + DAT_14c846290;
        local_b8 = 0x3f800000;
        FUN_149893274(*param_2 + lVar14,&local_d0);
        dVar17 = dVar8 * DAT_14c8462d0 - DAT_14c8462c8 * dVar2;
        dVar17 = dVar17 + dVar17;
        dVar4 = dVar7 * DAT_14c8462c8 - DAT_14c8462c0 * dVar8;
        dVar4 = dVar4 + dVar4;
        dVar16 = dVar2 * DAT_14c8462c0 - DAT_14c8462d0 * dVar7;
        dVar16 = dVar16 + dVar16;
        local_c0 = (dVar7 * dVar16 - dVar17 * dVar8) + dVar3 * dVar4 + DAT_14c8462d0;
        local_c8 = (dVar2 * dVar17 - dVar4 * dVar7) + dVar3 * dVar16 + DAT_14c8462c8;
        local_d0 = (dVar8 * dVar4 - dVar16 * dVar2) + dVar3 * dVar17 + DAT_14c8462c0;
        local_b8 = 0x3f800000;
        FUN_149893274(*param_2 + lVar14,&local_d0);
      }
      lVar15 = lVar15 + 1;
      lVar14 = lVar14 + 0x130;
    } while (lVar15 < (int)param_2[1]);
  }
  if ((local_b0 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149893acb FUN_149893acb body=372 status=ok
// SIG undefined FUN_149893acb(void)

bool FUN_149893acb(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar1 = *param_1;
  if (((9.999999747378752e-05 < ABS(dVar1)) || (9.999999747378752e-05 < ABS(param_1[1]))) ||
     (9.999999747378752e-05 < ABS(param_1[2]))) {
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar4 = param_2[2];
    if (((9.999999747378752e-05 < ABS(dVar2)) || (9.999999747378752e-05 < ABS(dVar3))) ||
       (9.999999747378752e-05 < ABS(dVar4))) {
      dVar8 = 1.0 / SQRT(dVar4 * dVar4 + dVar2 * dVar2 + dVar3 * dVar3);
      dVar5 = param_1[1];
      dVar6 = param_1[2];
      dVar7 = 1.0 / SQRT(dVar6 * dVar6 + dVar1 * dVar1 + dVar5 * dVar5);
      return 1e-08 < ABS(ABS((float)(dVar7 * dVar1 * dVar8 * dVar2 + dVar5 * dVar7 * dVar3 * dVar8 +
                                    dVar6 * dVar7 * dVar4 * dVar8)) + -1.0);
    }
  }
  return false;
}



// FUNCTION 149893c3f FUN_149893c3f body=286 status=ok
// SIG undefined FUN_149893c3f(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_149893c3f(double *param_1,double *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar9;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar10 [16];
  
  dVar6 = param_2[3];
  dVar3 = dVar6;
  if (1.0 <= dVar6) {
    dVar3 = 1.0;
  }
  dVar1 = acos((double)(~-(ulonglong)(dVar6 < -1.0) & (ulonglong)dVar3 |
                       -(ulonglong)(dVar6 < -1.0) & 0xbff0000000000000));
  dVar6 = *param_2;
  dVar3 = param_2[1];
  dVar4 = param_2[2];
  dVar5 = dVar4 * dVar4 + dVar6 * dVar6;
  dVar9 = dVar3 * dVar3 + 0.0;
  auVar7._0_8_ = dVar5 + dVar9;
  auVar7._8_8_ = dVar5 + dVar9;
  auVar2._8_8_ = -(ulonglong)(1e-08 <= auVar7._8_8_);
  auVar2._0_8_ = -(ulonglong)(1e-08 <= auVar7._0_8_);
  auVar8 = sqrtpd(auVar7,auVar7);
  auVar10 = divpd(_DAT_149934d80,auVar8);
  auVar8._8_8_ = dVar3 * auVar10._8_8_;
  auVar8._0_8_ = dVar6 * auVar10._0_8_;
  auVar8 = blendvpd(ZEXT816(0x3ff0000000000000),auVar8,auVar2);
  dVar6 = auVar8._0_8_;
  if ((-(ulonglong)(1e-08 <= auVar7._0_8_) & 1) == 0) {
    dVar4 = 0.0;
  }
  else {
    dVar4 = dVar4 * auVar10._0_8_;
  }
  dVar3 = auVar8._8_8_;
  dVar5 = dVar4 * dVar4 + dVar6 * dVar6 + dVar3 * dVar3;
  if (9.99999993922529e-09 < dVar5) {
    dVar5 = 1.0 / SQRT(dVar5);
    dVar6 = dVar6 * dVar5;
    dVar3 = dVar3 * dVar5;
    dVar4 = dVar4 * dVar5;
  }
  dVar1 = (double)(float)(dVar1 + dVar1);
  *param_1 = dVar6 * dVar1;
  param_1[1] = dVar3 * dVar1;
  param_1[2] = dVar4 * dVar1;
  return param_1;
}



// FUNCTION 149893d5d FUN_149893d5d body=522 status=ok
// SIG undefined FUN_149893d5d(void)

undefined8 FUN_149893d5d(undefined8 param_1,char *param_2,char *param_3,longlong *param_4)

{
  bool bVar1;
  byte bVar2;
  ulonglong uVar3;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_88 [36];
  char local_64;
  undefined2 local_63;
  char local_61;
  ulonglong local_60;
  char local_58;
  undefined2 local_57;
  char local_55;
  ulonglong local_54;
  undefined2 local_4c;
  char local_4a;
  ulonglong local_48;
  char *pcVar4;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *(undefined4 *)(param_4 + 1) = 0;
  if (*(int *)((longlong)param_4 + 0xc) < 0) {
    FUN_14920a7da(param_4,0);
  }
  cVar5 = *param_3;
  local_4a = param_3[3];
  local_4c = *(undefined2 *)(param_3 + 1);
  uVar7 = *(ulonglong *)(param_3 + 4);
  uVar3 = uVar7 >> 0x10 & 0xffff;
  bVar1 = (uint)uVar3 < DAT_14c87eb08 + 1U;
  uVar3 = CONCAT71((int7)(uVar3 >> 8),bVar1);
  bVar8 = uVar7 != 0;
  bVar9 = cVar5 != '\0';
  if ((bVar8 && bVar9) && bVar1) {
    while ((uVar7 != *(ulonglong *)(param_2 + 4) || (cVar5 != *param_2))) {
      uVar6 = *(uint *)(param_4 + 1);
      *(uint *)(param_4 + 1) = uVar6 + 1;
      if (*(uint *)((longlong)param_4 + 0xc) < uVar6 + 1) {
        FUN_149192788(param_4,(ulonglong)uVar6);
      }
      memmove((void *)(*param_4 + 0xc),(void *)*param_4,(ulonglong)uVar6 * 0xc);
      pcVar4 = (char *)*param_4;
      *pcVar4 = cVar5;
      pcVar4[3] = local_4a;
      *(undefined2 *)(pcVar4 + 1) = local_4c;
      *(ulonglong *)(pcVar4 + 4) = uVar7;
      local_61 = local_4a;
      local_63 = local_4c;
      local_64 = cVar5;
      local_60 = uVar7;
      FUN_1408130c0(param_1,&local_58,&local_64);
      local_4c = local_57;
      local_4a = local_55;
      uVar6 = (uint)(local_54 >> 0x10) & 0xffff;
      uVar3 = (ulonglong)CONCAT11((char)((ushort)local_57 >> 8),uVar6 < DAT_14c87eb08 + 1U);
      bVar9 = local_58 != '\0';
      bVar8 = local_54 != 0;
      uVar7 = local_54;
      cVar5 = local_58;
      if (((local_54 == 0) || (DAT_14c87eb08 + 1U <= uVar6)) || (local_58 == '\0'))
      goto LAB_149893ed5;
    }
    uVar3 = CONCAT71((int7)(uVar3 >> 8),1);
    bVar8 = true;
    bVar9 = true;
  }
LAB_149893ed5:
  bVar2 = (byte)uVar3 & bVar8 & bVar9;
  pcVar4 = (char *)CONCAT71((int7)(uVar3 >> 8),bVar2);
  uVar6 = *(uint *)(param_4 + 1);
  if (bVar2 == 1) {
    *(uint *)(param_4 + 1) = uVar6 + 1;
    if (*(uint *)((longlong)param_4 + 0xc) < uVar6 + 1) {
      FUN_149192788(param_4,(ulonglong)uVar6);
    }
    memmove((void *)(*param_4 + 0xc),(void *)*param_4,(ulonglong)uVar6 * 0xc);
    pcVar4 = (char *)*param_4;
    *pcVar4 = cVar5;
    pcVar4[3] = local_4a;
    *(undefined2 *)(pcVar4 + 1) = local_4c;
    *(ulonglong *)(pcVar4 + 4) = uVar7;
    uVar6 = *(uint *)(param_4 + 1);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)pcVar4 >> 8),0 < (int)uVar6);
}



// FUNCTION 149893f6b FUN_149893f6b body=126 status=ok
// SIG undefined FUN_149893f6b(void)

int FUN_149893f6b(longlong *param_1)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((longlong)(int)param_1[1] < 1) {
    iVar3 = 0;
  }
  else {
    lVar4 = 0;
    iVar3 = 0;
    do {
      lVar5 = (longlong)*(int *)(*param_1 + 0x100 + lVar4 * 0x130);
      if (0 < lVar5) {
        lVar2 = *(longlong *)(lVar4 * 0x130 + *param_1 + 0xf8);
        lVar5 = lVar5 * 0x20;
        lVar6 = 0;
        do {
          pfVar1 = (float *)(lVar2 + 0x18 + lVar6);
          iVar3 = iVar3 + (uint)(*pfVar1 <= 1.0 && *pfVar1 != 1.0);
          lVar6 = lVar6 + 0x20;
        } while (lVar5 != lVar6);
        lVar6 = 0;
        do {
          pfVar1 = (float *)(lVar2 + 0x1c + lVar6);
          iVar3 = iVar3 + (uint)(*pfVar1 <= 1.0 && *pfVar1 != 1.0);
          lVar6 = lVar6 + 0x20;
        } while (lVar5 != lVar6);
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 != (int)param_1[1]);
  }
  return iVar3;
}



// FUNCTION 149893fe9 FUN_149893fe9 body=253 status=ok
// SIG undefined FUN_149893fe9(void)

int FUN_149893fe9(longlong *param_1)

{
  int iVar1;
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_58 = local_38;
  local_50 = local_30;
  iVar1 = 0;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    iVar1 = 0;
    do {
      iVar1 = (uint)*(byte *)(*local_60 + 0x30 + (longlong)iStack_44 * 0xa0) +
              (uint)*(byte *)(*local_60 + 0x10 + (longlong)iStack_44 * 0xa0) + iVar1;
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
    iVar1 = iVar1 * 3;
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498940e7 FUN_1498940e7 body=239 status=ok
// SIG undefined FUN_1498940e7(void)

double * FUN_1498940e7(double *param_1,longlong param_2,longlong param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  double local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  dVar6 = *(double *)(param_3 + 0x40) - *(double *)(param_2 + 0x40);
  dVar4 = *(double *)(param_3 + 0x30) - *(double *)(param_2 + 0x30);
  dVar5 = *(double *)(param_3 + 0x38) - *(double *)(param_2 + 0x38);
  local_58._8_4_ = SUB84(dVar5,0);
  local_58._0_8_ = dVar4;
  local_58._12_4_ = (int)((ulonglong)dVar5 >> 0x20);
  local_48 = dVar6;
  cVar7 = FUN_149893acb(param_4);
  if (cVar7 != '\0') {
    dVar1 = *param_4;
    dVar2 = param_4[1];
    dVar3 = param_4[2];
    *param_1 = dVar2 * dVar6 - dVar5 * dVar3;
    param_1[1] = dVar4 * dVar3 - dVar6 * dVar1;
    param_1[2] = dVar1 * dVar5 - dVar4 * dVar2;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  param_1[2] = DAT_14c8464f0;
  dVar4 = DAT_14c8464e8;
  *param_1 = DAT_14c8464e0;
  param_1[1] = dVar4;
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1498941d7 FUN_1498941d7 body=75 status=ok
// SIG undefined FUN_1498941d7(void)

void FUN_1498941d7(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_149893fe9(param_3);
  iVar2 = FUN_149893f6b(param_2);
  if ((*(longlong *)(param_1 + 8) == (longlong)iVar1) &&
     (*(longlong *)(param_1 + 0x10) == (longlong)iVar2)) {
    return;
  }
  FUN_1475090be(param_1,(longlong)iVar1,(longlong)iVar2);
  return;
}



// FUNCTION 149894222 FUN_149894222 body=507 status=ok
// SIG undefined FUN_149894222(void)

ulonglong FUN_149894222(longlong *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  bool bVar7;
  ulonglong uVar8;
  longlong lVar9;
  int *piVar10;
  int iVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  undefined1 local_b9;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong *local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_1498941d7(param_3,param_1,param_2);
  local_78 = param_5;
  bVar3 = 0 < *(longlong *)(param_3 + 8);
  bVar4 = 0 < *(longlong *)(param_3 + 0x10);
  bVar7 = bVar4 && bVar3;
  uVar8 = CONCAT71((int7)((ulonglong)param_3 >> 8),bVar7);
  local_88 = param_1;
  local_80 = param_4;
  local_70 = param_3;
  if (bVar4 && bVar3) {
    local_60 = param_2 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    local_b9 = bVar7;
    local_b8 = param_4;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_98 = local_58;
    uVar5 = local_98;
    local_90 = local_50;
    local_8c = local_4c;
    local_a8 = local_68;
    local_a0 = local_60;
    local_98._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_b0 = param_2;
    if (local_98._4_4_ < (int)local_60[3]) {
      iVar11 = 0;
      iVar6 = local_98._4_4_;
      local_98 = uVar5;
      do {
        lVar2 = *local_b0;
        uVar8 = (longlong)iVar6 * 0xa0;
        piVar1 = (int *)(uVar8 + lVar2);
        piVar10 = piVar1 + 4;
        lVar9 = (longlong)*piVar1 * 0x130 + *param_1;
        if ((char)*piVar10 == '\x01') {
          local_c8 = lVar9;
          FUN_1446732ca(&local_88,iVar11 * 3,1,piVar10);
          iVar11 = iVar11 + 1;
        }
        if (*(char *)(lVar2 + 0x30 + uVar8) == '\x01') {
          local_c8 = lVar9;
          FUN_1446732ca(&local_88,iVar11 * 3,0,piVar10);
          iVar11 = iVar11 + 1;
        }
        local_98 = CONCAT44(local_98._4_4_,(uint)local_98 & ~local_a8._4_4_);
        FUN_1449c0562(&local_a8);
        iVar6 = local_98._4_4_;
        uVar5 = local_98;
      } while (local_98._4_4_ < (int)local_a0[3]);
    }
    local_98 = uVar5;
    uVar8 = CONCAT71((int7)(uVar8 >> 8),local_b9);
    param_4 = local_b8;
  }
  FUN_1449db362(param_4);
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return uVar8 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989441e FUN_14989441e body=1216 status=ok
// SIG undefined FUN_14989441e(void)

ulonglong FUN_14989441e(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 *param_5,float *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  double dVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8;
  float *local_1a0;
  longlong *local_190;
  undefined8 local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  longlong local_168 [4];
  longlong local_148 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  longlong local_108 [3];
  double local_f0;
  longlong *local_e8;
  double local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  longlong *local_d0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  float local_a0;
  undefined8 *local_98;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  local_108[0] = 0;
  local_108[1] = 0;
  local_108[2] = 0;
  local_190 = param_2;
  local_188 = param_4;
  local_d0 = param_3;
  FUN_14989984e(local_108,&local_d0);
  FUN_1498998b1(local_108,&local_d0);
  local_118 = (longlong *)0x0;
  local_128 = 0;
  uStack_120 = 0;
  lVar9 = (longlong)(int)param_3[1];
  FUN_1475090be(&local_128,lVar9,lVar9);
  local_c8 = (longlong *)uStack_120;
  plStack_c0 = local_118;
  FUN_14190e80f(&local_128,&local_d0);
  fVar11 = *param_6;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_d0 = param_3;
  local_c8 = local_108;
  FUN_149899944(local_148,&local_d0);
  FUN_1498999b0(local_148,&local_d0);
  local_a0 = fVar11 * fVar11;
  local_b0 = (undefined4)uStack_120;
  uStack_ac = uStack_120._4_4_;
  uStack_a8 = (undefined4)local_118;
  uStack_a4 = local_118._4_4_;
  local_c8 = local_148;
  local_98 = &local_128;
  FUN_14989a42b(local_148,&local_d0,&local_f0);
  fVar11 = (float)FUN_14190e8d0(local_148);
  uVar2 = local_188;
  plVar6 = local_190;
  if (1e-08 < ABS(fVar11)) {
    local_168[0] = 0;
    local_168[1] = 0;
    local_168[2] = 0;
    local_d0 = local_148;
    FUN_14989a576(local_168,&local_d0);
    FUN_14989a5da(local_168,&local_d0);
    local_180 = 0;
    if (0 < lVar9) {
      local_180 = FUN_141729e88(lVar9);
    }
    local_170 = 1;
    local_e8 = plVar6 + 2;
    local_f0 = 2.12199579096527e-314;
    local_e0 = 2.12199579047121e-314;
    local_d8 = 0;
    local_178 = lVar9;
    if ((int)plVar6[5] != 0) {
      FUN_1449c0562(&local_f0);
    }
    local_b8 = local_e0;
    dVar3 = local_b8;
    local_b0 = local_d8;
    uStack_ac = local_d4;
    local_c8 = (longlong *)local_f0;
    plStack_c0 = local_e8;
    local_d0 = plVar6;
    local_b8._4_4_ = (int)((ulonglong)local_e0 >> 0x20);
    if (local_b8._4_4_ < (int)local_e8[3]) {
      iVar8 = 0;
      iVar4 = local_b8._4_4_;
      local_b8 = dVar3;
      do {
        lVar9 = *local_d0;
        piVar1 = (int *)(lVar9 + (longlong)iVar4 * 0xa0);
        piVar7 = piVar1 + 4;
        lVar10 = (longlong)*piVar1;
        if ((char)*piVar7 == '\x01') {
          if (*(int *)(param_5 + 1) == 0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)*param_5;
          }
          local_1a0 = param_6;
          local_1a8 = 1;
          (**(code **)(*plVar6 + 0x58))(plVar6,&local_f0,lVar10 * 0x130 + *param_1,piVar7);
          lVar5 = (longlong)(iVar8 * 3);
          *(float *)(local_180 + lVar5 * 4) = (float)local_f0;
          *(float *)(local_180 + 4 + lVar5 * 4) = (float)(double)local_e8;
          *(float *)(local_180 + 8 + lVar5 * 4) = (float)local_e0;
          iVar8 = iVar8 + 1;
        }
        if (*(char *)(lVar9 + 0x30 + (longlong)iVar4 * 0xa0) == '\x01') {
          if (*(int *)(param_5 + 1) == 0) {
            plVar6 = (longlong *)0x0;
          }
          else {
            plVar6 = (longlong *)*param_5;
          }
          local_1a0 = param_6;
          local_1a8 = 0;
          (**(code **)(*plVar6 + 0x58))(plVar6,&local_f0,lVar10 * 0x130 + *param_1,piVar7);
          lVar9 = (longlong)(iVar8 * 3);
          *(float *)(local_180 + lVar9 * 4) = (float)local_f0;
          *(float *)(local_180 + 4 + lVar9 * 4) = (float)(double)local_e8;
          *(float *)(local_180 + 8 + lVar9 * 4) = (float)local_e0;
          iVar8 = iVar8 + 1;
        }
        local_b8 = (double)CONCAT44(local_b8._4_4_,(uint)local_b8 & ~local_c8._4_4_);
        FUN_1449c0562(&local_c8);
        iVar4 = local_b8._4_4_;
        dVar3 = local_b8;
      } while (local_b8._4_4_ < (int)plStack_c0[3]);
    }
    local_b8 = dVar3;
    local_d0 = local_108;
    local_c8 = local_168;
    plStack_c0 = &local_180;
    FUN_14989ab8a(uVar2);
    FUN_1400020a8(local_180);
    FUN_1400020a8(local_168[0]);
  }
  FUN_1400020a8(local_148[0]);
  FUN_1400020a8(local_128);
  FUN_1400020a8(local_108[0]);
  FUN_1449db362(param_5);
  if ((local_80 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),1e-08 < ABS(fVar11)) & 0xffffffff;
}



// FUNCTION 1498948df FUN_1498948df body=1281 status=ok
// SIG undefined FUN_1498948df(void)

ulonglong FUN_1498948df(longlong *param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                       undefined8 *param_5,undefined8 param_6)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_170;
  longlong *local_168;
  undefined8 uStack_160;
  longlong *local_158;
  longlong lStack_150;
  longlong local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128 [4];
  undefined8 local_108;
  longlong **pplStack_100;
  longlong *local_f8;
  undefined1 local_e1;
  longlong *local_e0;
  undefined8 local_d8;
  longlong **local_d0;
  undefined8 uStack_c8;
  float local_c0;
  undefined4 local_bc;
  undefined8 *local_b8;
  longlong *local_a8;
  double local_a0;
  longlong *local_98;
  longlong *local_90;
  float local_88;
  undefined4 local_84;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_108 = 0;
  pplStack_100 = (longlong **)0x0;
  lVar7 = 0;
  local_f8 = (longlong *)0x0;
  local_170 = param_4;
  local_e0 = param_3;
  FUN_14989984e(&local_108,&local_e0);
  FUN_1498998b1(&local_108,&local_e0);
  lVar5 = (longlong)(int)param_3[1];
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_e0 = param_3;
  local_d8 = (longlong **)&local_108;
  FUN_149899944(local_128,&local_e0);
  FUN_1498999b0(local_128,&local_e0);
  local_140 = 0;
  if (0 < lVar5) {
    local_140 = FUN_141729e88(lVar5);
  }
  local_130 = 1;
  local_98 = param_2 + 2;
  local_a0 = 2.12199579096527e-314;
  local_90 = (longlong *)&DAT_ffffffff;
  local_88 = 0.0;
  local_138 = lVar5;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_a0);
  }
  uStack_c8 = local_90;
  plVar4 = uStack_c8;
  local_c0 = local_88;
  local_bc = local_84;
  local_d8 = (longlong **)local_a0;
  local_d0 = (longlong **)local_98;
  uStack_c8._4_4_ = (int)((ulonglong)local_90 >> 0x20);
  if (uStack_c8._4_4_ < (int)local_98[3]) {
    iVar8 = 0;
    iVar2 = uStack_c8._4_4_;
    local_e0 = param_2;
    uStack_c8 = plVar4;
    do {
      lVar5 = *local_e0;
      lVar7 = (longlong)iVar2 * 0xa0;
      piVar1 = (int *)(lVar5 + lVar7);
      piVar6 = piVar1 + 4;
      lVar9 = (longlong)*piVar1;
      if ((char)*piVar6 == '\x01') {
        if (*(int *)(param_5 + 1) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)*param_5;
        }
        local_180 = param_6;
        local_188 = 1;
        (**(code **)(*plVar4 + 0x58))(plVar4,&local_a0,lVar9 * 0x130 + *param_1,piVar6);
        lVar3 = (longlong)(iVar8 * 3);
        *(float *)(local_140 + lVar3 * 4) = (float)local_a0;
        *(float *)(local_140 + 4 + lVar3 * 4) = (float)(double)local_98;
        *(float *)(local_140 + 8 + lVar3 * 4) = (float)(double)local_90;
        iVar8 = iVar8 + 1;
      }
      if (*(char *)(lVar5 + 0x30 + lVar7) == '\x01') {
        if (*(int *)(param_5 + 1) == 0) {
          plVar4 = (longlong *)0x0;
        }
        else {
          plVar4 = (longlong *)*param_5;
        }
        local_180 = param_6;
        local_188 = 0;
        (**(code **)(*plVar4 + 0x58))(plVar4,&local_a0,lVar9 * 0x130 + *param_1,piVar6);
        lVar5 = (longlong)(iVar8 * 3);
        *(float *)(local_140 + lVar5 * 4) = (float)local_a0;
        *(float *)(local_140 + 4 + lVar5 * 4) = (float)(double)local_98;
        *(float *)(local_140 + 8 + lVar5 * 4) = (float)(double)local_90;
        iVar8 = iVar8 + 1;
      }
      uStack_c8 = (longlong *)CONCAT44(uStack_c8._4_4_,(uint)uStack_c8 & ~local_d8._4_4_);
      FUN_1449c0562(&local_d8);
      iVar2 = uStack_c8._4_4_;
      plVar4 = uStack_c8;
    } while (uStack_c8._4_4_ < (int)local_d0[3]);
  }
  uStack_c8 = plVar4;
  local_e0 = local_128;
  local_158 = (longlong *)0x0;
  lStack_150 = 0;
  local_d8 = (longlong **)&local_140;
  FUN_14989b986(&local_158,&local_e0);
  FUN_14989b9fc(&local_158,&local_e0);
  local_168 = (longlong *)0x0;
  uStack_160 = 0;
  FUN_14989be48(&local_168,&local_140);
  FUN_14989beaf(&local_168,&local_140,&local_e0);
  local_d8 = &local_158;
  local_d0 = &local_158;
  if (lStack_150 == 0) {
    fVar11 = 0.0;
    fVar10 = 0.0;
  }
  else {
    local_98 = local_158;
    local_90 = local_158;
    fVar11 = (float)FUN_146dddfe8(&local_a0,&local_e1,&local_e0);
    fVar10 = 0.0;
    local_d8 = &local_168;
    local_d0 = &local_158;
    if (lStack_150 != 0) {
      local_98 = local_168;
      local_90 = local_158;
      fVar10 = (float)FUN_146dddfe8(&local_a0,&local_e1,&local_e0);
    }
  }
  if (1e-08 < ABS(fVar11)) {
    local_c0 = fVar10 / fVar11;
    local_d0 = pplStack_100;
    uStack_c8 = local_f8;
    local_b8 = &local_108;
    local_a8 = &local_140;
    FUN_14989bfb2(local_170);
  }
  FUN_1400020a8(local_168);
  FUN_1400020a8(local_158);
  FUN_1400020a8(local_140);
  FUN_1400020a8(local_128[0]);
  FUN_1400020a8(local_108);
  FUN_1449db362(param_5);
  if ((local_80 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT71((int7)((ulonglong)lVar7 >> 8),1e-08 < ABS(fVar11)) & 0xffffffff;
}



// FUNCTION 149894de2 FUN_149894de2 body=432 status=ok
// SIG undefined FUN_149894de2(void)

double * FUN_149894de2(undefined8 param_1,double *param_2,longlong param_3,char param_4,uint param_5
                      ,undefined8 param_6,char param_7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double *pdVar5;
  float fVar6;
  undefined1 auStack_88 [40];
  double local_60;
  double local_58;
  double local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 == '\0') {
    pdVar5 = (double *)((ulonglong)param_5 * 0x20 + *(longlong *)(param_3 + 0xf8));
    if (*(int *)(param_3 + 0x100) <= (int)param_5) {
      pdVar5 = (double *)&DAT_14c8462d8;
    }
    if ((int)param_5 < 0) {
      pdVar5 = (double *)&DAT_14c8462d8;
    }
    local_38 = pdVar5[2];
    local_48 = *(undefined4 *)pdVar5;
    uStack_44 = *(undefined4 *)((longlong)pdVar5 + 4);
    uStack_40 = *(undefined4 *)(pdVar5 + 1);
    uStack_3c = *(undefined4 *)((longlong)pdVar5 + 0xc);
    fVar6 = (1.0 - *(float *)(*(longlong *)(param_3 + 0xf8) + 0x1c + (longlong)(int)param_5 * 0x20))
            * *(float *)(param_3 + 0xd4);
    if (param_7 == '\0') {
      dVar1 = (double)fVar6;
      local_50 = local_38 * dVar1;
      local_58 = pdVar5[1] * dVar1;
      dVar1 = dVar1 * *pdVar5;
    }
    else {
      FUN_1498940e7(&local_60,param_3,param_6,&local_48);
      dVar1 = (double)fVar6;
      local_50 = local_50 * dVar1;
      local_58 = local_58 * dVar1;
      dVar1 = dVar1 * local_60;
    }
  }
  else {
    if (param_7 == '\0') {
      param_2[2] = DAT_14c8464f0;
      uVar4 = DAT_14c8464e8._4_4_;
      uVar3 = (undefined4)DAT_14c8464e8;
      uVar2 = DAT_14c8464e0._4_4_;
      *(undefined4 *)param_2 = (undefined4)DAT_14c8464e0;
      *(undefined4 *)((longlong)param_2 + 4) = uVar2;
      *(undefined4 *)(param_2 + 1) = uVar3;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_88);
    }
    pdVar5 = (double *)((ulonglong)param_5 * 0x20 + *(longlong *)(param_3 + 0xf8));
    if (*(int *)(param_3 + 0x100) <= (int)param_5) {
      pdVar5 = (double *)&DAT_14c8462d8;
    }
    if ((int)param_5 < 0) {
      pdVar5 = (double *)&DAT_14c8462d8;
    }
    dVar1 = (double)((1.0 - *(float *)(*(longlong *)(param_3 + 0xf8) + 0x18 +
                                      (longlong)(int)param_5 * 0x20)) * *(float *)(param_3 + 0xd0));
    local_50 = pdVar5[2] * dVar1;
    local_58 = pdVar5[1] * dVar1;
    dVar1 = dVar1 * *pdVar5;
  }
  *param_2 = dVar1;
  param_2[1] = local_58;
  param_2[2] = local_50;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149894f96 FUN_149894f96 body=507 status=ok
// SIG undefined FUN_149894f96(void)

double * FUN_149894f96(undefined8 param_1,double *param_2,longlong param_3,longlong param_4,
                      char param_5,longlong param_6)

{
  double dVar1;
  double dVar2;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_98 [32];
  double local_78;
  double dStack_70;
  undefined1 local_68 [16];
  ulonglong local_50;
  double dVar3;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_5 == '\0') {
    dVar4 = *(double *)(param_3 + 0x10);
    dVar5 = *(double *)(param_3 + 0x18);
    dVar7 = *(double *)(param_3 + 0x20) * -1.0;
    dVar8 = *(double *)(param_3 + 0x28) * 1.0;
    dVar9 = *(double *)(param_4 + 0x48);
    dVar6 = *(double *)(param_4 + 0x48);
    dVar10 = *(double *)(param_4 + 0x30);
    dVar12 = *(double *)(param_4 + 0x30);
    dVar13 = *(double *)(param_4 + 0x38);
    dVar1 = *(double *)(param_4 + 0x38);
    dVar2 = *(double *)(param_4 + 0x40);
    dVar3 = *(double *)(param_4 + 0x40);
    local_78 = (dVar7 * dVar13 + (dVar8 * dVar10 * 1.0 - dVar9 * dVar4)) - dVar5 * dVar2 * -1.0;
    dStack_70 = (dVar8 * dVar1 + (dVar7 * dVar12 * -1.0 - dVar6 * dVar5)) - dVar4 * dVar3 * 1.0;
    dVar6 = dVar7 * dVar3 * -1.0 + dVar5 * dVar1 + (dVar8 * dVar6 - dVar12 * dVar4 * -1.0);
    local_68._8_4_ = SUB84(dVar6,0);
    local_68._0_8_ = dVar8 * dVar2 * 1.0 + dVar4 * dVar13 + (dVar7 * dVar9 - dVar10 * dVar5 * 1.0);
    local_68._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
    FUN_149893c3f(param_2);
  }
  else {
    dVar6 = *(double *)(param_4 + 0x18) - *(double *)(param_3 + 0x40);
    dVar9 = *(double *)(param_4 + 0x10) - *(double *)(param_3 + 0x38);
    dVar10 = *(double *)(param_4 + 8) - *(double *)(param_3 + 0x30);
    *param_2 = dVar10;
    param_2[1] = dVar9;
    param_2[2] = dVar6;
    if ((*(byte *)(param_6 + 5) & 1) != 0) {
      fVar11 = *(float *)(param_4 + 0x5c) * *(float *)(param_4 + 0x60) + *(float *)(param_4 + 100);
      dVar12 = dVar6 * dVar6 + dVar10 * dVar10 + dVar9 * dVar9;
      if ((double)(fVar11 * fVar11) < dVar12) {
        dVar13 = 1.0 / SQRT(dVar12);
        dVar12 = (double)fVar11;
        dVar6 = dVar6 * dVar13 * dVar12;
        dVar9 = dVar9 * dVar13 * dVar12;
        dVar10 = dVar10 * dVar13 * dVar12;
      }
      *param_2 = dVar10;
      param_2[1] = dVar9;
      param_2[2] = dVar6;
    }
  }
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149895192 FUN_149895192 body=617 status=ok
// SIG undefined FUN_149895192(void)

undefined1 (*) [16]
FUN_149895192(longlong param_1,undefined1 (*param_2) [16],longlong param_3,int *param_4)

{
  float *pfVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  undefined1 auVar14 [16];
  double dVar15;
  double dVar16;
  undefined8 uVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  double dVar22;
  double dVar23;
  
  uVar17 = DAT_14c8463d8;
  *(undefined8 *)*param_2 = DAT_14c8463d0;
  *(undefined8 *)(*param_2 + 8) = uVar17;
  uVar17 = DAT_14c8463e8;
  *(undefined8 *)param_2[1] = DAT_14c8463e0;
  *(undefined8 *)(param_2[1] + 8) = uVar17;
  dVar15 = *(double *)*param_2;
  dVar16 = *(double *)(*param_2 + 8);
  iVar18 = *(int *)(param_3 + 0x100);
  if (0 < iVar18) {
    dVar7 = *(double *)param_2[1];
    dVar8 = *(double *)(param_2[1] + 8);
    lVar21 = 0;
    lVar20 = 0;
    do {
      lVar5 = *(longlong *)(param_3 + 0xf8);
      pfVar1 = (float *)(lVar5 + 0x1c + lVar21);
      if (*pfVar1 <= 1.0 && *pfVar1 != 1.0) {
        iVar18 = *param_4;
        *param_4 = iVar18 + 1;
        pdVar19 = (double *)(*(longlong *)(param_3 + 0xf8) + lVar21);
        if (*(int *)(param_3 + 0x100) <= lVar20) {
          pdVar19 = (double *)&DAT_14c8462d8;
        }
        dVar2 = *pdVar19;
        dVar3 = pdVar19[1];
        dVar4 = pdVar19[2];
        dVar10 = (double)((1.0 - *(float *)(lVar5 + 0x1c + lVar21)) *
                         *(float *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar18 * 4)) * 0.5;
        dVar6 = sin(dVar10);
        dVar10 = cos(dVar10);
        dVar2 = dVar2 * dVar6;
        dVar3 = dVar3 * dVar6;
        dVar4 = dVar4 * dVar6;
        dVar9 = dVar15 * dVar4;
        dVar22 = dVar15 * dVar3;
        dVar23 = dVar15 * dVar2;
        dVar12 = dVar16 * dVar2;
        dVar13 = dVar16 * dVar3;
        dVar6 = dVar4 * dVar7;
        dVar15 = dVar3 * dVar7 * -1.0 + dVar4 * dVar16 + dVar15 * dVar10 * 1.0 + dVar8 * dVar2;
        dVar16 = dVar2 * dVar7 * 1.0 + dVar10 * dVar16 + dVar9 * -1.0 + dVar8 * dVar3;
        dVar7 = dVar10 * dVar7 * 1.0 + ((dVar22 * 1.0 + dVar8 * dVar4) - dVar12);
        dVar8 = dVar6 * -1.0 + ((dVar23 * -1.0 + dVar8 * dVar10) - dVar13);
        iVar18 = *(int *)(param_3 + 0x100);
      }
      lVar20 = lVar20 + 1;
      lVar21 = lVar21 + 0x20;
    } while (lVar20 < iVar18);
    auVar14._8_4_ = SUB84(dVar8,0);
    auVar14._0_8_ = dVar7;
    auVar14._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
    param_2[1] = auVar14;
  }
  auVar11._8_4_ = SUB84(dVar16,0);
  auVar11._0_8_ = dVar15;
  auVar11._12_4_ = (int)((ulonglong)dVar16 >> 0x20);
  *param_2 = auVar11;
  return param_2;
}



// FUNCTION 1498953fc FUN_1498953fc body=236 status=ok
// SIG undefined FUN_1498953fc(void)

void FUN_1498953fc(longlong param_1,double *param_2,longlong param_3,int *param_4)

{
  double dVar1;
  longlong lVar2;
  double dVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar1 = DAT_14c8464e8;
  *param_2 = DAT_14c8464e0;
  param_2[1] = dVar1;
  param_2[2] = DAT_14c8464f0;
  dVar1 = *param_2;
  iVar6 = *(int *)(param_3 + 0x100);
  if (0 < iVar6) {
    dVar7 = param_2[1];
    dVar8 = param_2[2];
    lVar4 = 0x18;
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(param_3 + 0xf8);
      if (*(float *)(lVar2 + lVar4) <= 1.0 && *(float *)(lVar2 + lVar4) != 1.0) {
        iVar6 = *param_4;
        *param_4 = iVar6 + 1;
        dVar9 = (double)*(float *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar6 * 4);
        dVar3 = (double)(1.0 - *(float *)(lVar2 + lVar4));
        dVar8 = dVar8 + *(double *)(lVar2 + -8 + lVar4) * dVar9 * dVar3;
        dVar7 = dVar7 + *(double *)(lVar2 + -0x10 + lVar4) * dVar9 * dVar3;
        dVar1 = dVar1 + dVar9 * *(double *)(lVar2 + -0x18 + lVar4) * dVar3;
        iVar6 = *(int *)(param_3 + 0x100);
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar5 < iVar6);
    param_2[2] = dVar8;
    param_2[1] = dVar7;
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1498954e8 FUN_1498954e8 body=367 status=ok
// SIG undefined FUN_1498954e8(void)

undefined8 FUN_1498954e8(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_a8 [32];
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (0 < (int)param_2[1]) {
    lVar3 = 0x70;
    lVar6 = 0;
    do {
      puVar7 = (undefined8 *)(*param_2 + lVar3 + -0x60);
      puVar8 = (undefined8 *)(*param_2 + lVar3);
      for (lVar5 = 0xc; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar8 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar8 = puVar8 + 1;
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + 0x130;
    } while (lVar6 < (int)param_2[1]);
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3);
  local_50 = 0;
  local_48 = 0;
  FUN_149897f9a(&local_50,param_1 + 7);
  plVar1 = param_1 + 1;
  local_88 = param_4;
  cVar2 = FUN_149894222(param_2,param_3,plVar1,&local_50);
  if (cVar2 != '\0') {
    local_80 = param_4;
    if (*(char *)((longlong)param_4 + 4) == '\0') {
      local_60 = 0;
      local_58 = 0;
      FUN_14989801e(&local_60,param_1 + 9);
      local_88 = &local_60;
      cVar2 = FUN_1498948df(param_2,param_3,plVar1,param_1 + 4);
    }
    else {
      local_70 = 0;
      local_68 = 0;
      FUN_14989801e(&local_70,param_1 + 9);
      local_88 = &local_70;
      cVar2 = FUN_14989441e(param_2,param_3,plVar1,param_1 + 4);
    }
    if (cVar2 != '\0') {
      FUN_149895658(param_1,param_2);
      uVar4 = 1;
      goto LAB_149895595;
    }
  }
  uVar4 = 0;
LAB_149895595:
  if ((local_40 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149895658 FUN_149895658 body=3100 status=ok
// SIG undefined FUN_149895658(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149895658(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  uint uVar13;
  int iVar15;
  uint uVar16;
  double *pdVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  double dVar28;
  double dVar32;
  double dVar33;
  undefined1 auVar29 [16];
  double dVar34;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar35;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar41;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  double dVar42;
  undefined1 auVar40 [16];
  double dVar43;
  double dVar44;
  double dVar52;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar53;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  double dVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  double dVar67;
  undefined4 uVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  undefined4 uVar75;
  undefined1 auStack_338 [44];
  int local_30c;
  longlong local_308;
  longlong local_300;
  longlong local_2f8;
  longlong local_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2ac;
  longlong local_2a8 [2];
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  undefined8 uStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  ulonglong local_f0;
  double *pdVar14;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2a8[0] = 0;
  local_2a8[1] = 0;
  FUN_140ee84a4(local_2a8,(int)param_2[1],1);
  auVar58 = _DAT_149935300;
  auVar47 = _DAT_149934d80;
  if (0 < (int)param_2[1]) {
    lVar20 = 0x10;
    lVar18 = 0;
    uVar68 = (undefined4)DAT_149934d80;
    uVar69 = DAT_149934d80._4_4_;
    uVar70 = DAT_149934d80._8_4_;
    uVar71 = DAT_149934d80._12_4_;
    lVar19 = 0;
    do {
      lVar11 = *param_2;
      lVar10 = (longlong)*(int *)(lVar11 + -0x10 + lVar20);
      if (lVar10 == -1) {
        pdVar17 = (double *)(lVar11 + lVar20);
        pdVar12 = (double *)(local_2a8[0] + lVar18);
        lVar10 = 0xc;
        lVar11 = local_2a8[0];
      }
      else {
        FUN_1449437a2(lVar11 + lVar20,&local_178,lVar11 + lVar10 * 0x130 + 0x10);
        lVar10 = 0xc;
        lVar11 = local_2a8[0];
        pdVar17 = &local_178;
        pdVar12 = (double *)(local_2a8[0] + lVar18);
      }
      for (; lVar10 != 0; lVar10 = lVar10 + -1) {
        *pdVar12 = *pdVar17;
        pdVar17 = pdVar17 + 1;
        pdVar12 = pdVar12 + 1;
      }
      dVar28 = *(double *)(lVar11 + lVar18);
      dVar33 = ((double *)(lVar11 + lVar18))[1];
      pdVar12 = (double *)(lVar11 + 0x10 + lVar18);
      dVar34 = *pdVar12;
      dVar41 = pdVar12[1];
      dVar43 = dVar34 * dVar34 + dVar28 * dVar28;
      dVar52 = dVar41 * dVar41 + dVar33 * dVar33;
      auVar48._0_8_ = dVar43 + dVar52;
      auVar48._8_8_ = dVar43 + dVar52;
      auVar37._8_8_ = -(ulonglong)(1e-08 <= auVar48._8_8_);
      auVar37._0_8_ = -(ulonglong)(1e-08 <= auVar48._0_8_);
      auVar45 = sqrtpd(auVar48,auVar48);
      auVar55 = divpd(auVar47,auVar45);
      auVar56._0_8_ = auVar55._0_8_ * dVar34;
      auVar56._8_8_ = auVar55._8_8_ * dVar41;
      auVar37 = blendvpd(auVar58,auVar56,auVar37);
      auVar45._0_8_ = (ulonglong)(dVar28 * auVar55._0_8_) & -(ulonglong)(1e-08 <= auVar48._0_8_);
      auVar45._8_8_ = (ulonglong)(dVar33 * auVar55._8_8_) & -(ulonglong)(1e-08 <= auVar48._8_8_);
      *(undefined1 (*) [16])(lVar11 + lVar18) = auVar45;
      *(undefined1 (*) [16])(lVar11 + 0x10 + lVar18) = auVar37;
      lVar19 = lVar19 + 1;
      lVar18 = lVar18 + 0x60;
      lVar20 = lVar20 + 0x130;
    } while (lVar19 < (int)param_2[1]);
    local_2ac = 0;
    if (0 < (int)param_2[1]) {
      iVar15 = 1;
      lVar20 = 0xb0;
      lVar19 = 400;
      local_2e8 = 0;
      uStack_2e0 = 0x3ff0000000000000;
      lVar18 = 0;
      local_2f8 = param_1;
      do {
        lVar10 = local_2f8;
        lVar11 = *param_2;
        lVar21 = lVar18 * 0x130;
        pdVar12 = (double *)(lVar11 + 0x10 + lVar21);
        dVar41 = *pdVar12;
        dVar43 = pdVar12[1];
        pdVar12 = (double *)(lVar11 + 0x20 + lVar21);
        dVar52 = *pdVar12;
        dVar44 = pdVar12[1];
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar21);
        local_2d8 = *puVar1;
        uStack_2d0 = puVar1[1];
        dVar28 = *(double *)(lVar11 + 0x40 + lVar21);
        dVar33 = *(double *)(lVar11 + 0x38 + lVar21);
        dVar34 = *(double *)(lVar11 + 0x30 + lVar21);
        puVar1 = (undefined8 *)(lVar11 + 0x60 + lVar21);
        local_2c8 = *puVar1;
        uStack_2c0 = puVar1[1];
        local_308 = lVar19;
        local_300 = lVar20;
        FUN_1498953fc(local_2f8,&local_178,lVar11 + lVar21,&local_2ac);
        dVar28 = dVar28 + local_168;
        dVar33 = dVar33 + local_170;
        dVar34 = dVar34 + local_178;
        pdVar17 = (double *)(*param_2 + lVar21);
        pdVar14 = &local_178;
        FUN_149895192(lVar10,&local_178,pdVar17,&local_2ac);
        auVar37 = _DAT_149935300;
        uVar72 = (undefined4)DAT_149935300;
        uVar73 = DAT_149935300._4_4_;
        uVar74 = DAT_149935300._8_4_;
        uVar75 = DAT_149935300._12_4_;
        dVar27 = dVar43 * local_168 * -1.0 +
                 dVar52 * local_170 + dVar44 * local_178 * 1.0 + dVar41 * local_160;
        dVar32 = dVar41 * local_168 * 1.0 +
                 dVar44 * local_170 + dVar52 * local_178 * -1.0 + dVar43 * local_160;
        dVar35 = dVar44 * local_168 * 1.0 +
                 ((local_178 * dVar43 * 1.0 + local_160 * dVar52) - dVar41 * local_170);
        dVar41 = dVar52 * local_168 * -1.0 +
                 ((local_178 * dVar41 * -1.0 + local_160 * dVar44) - dVar43 * local_170);
        dVar43 = dVar35 * dVar35 + dVar27 * dVar27;
        dVar52 = dVar41 * dVar41 + dVar32 * dVar32;
        auVar46._0_8_ = dVar43 + dVar52;
        auVar46._8_8_ = dVar43 + dVar52;
        auVar55._8_8_ = -(ulonglong)(1e-08 <= auVar46._8_8_);
        auVar55._0_8_ = -(ulonglong)(1e-08 <= auVar46._0_8_);
        auVar47 = sqrtpd(auVar46,auVar46);
        auVar57._4_4_ = uVar69;
        auVar57._0_4_ = uVar68;
        auVar57._12_4_ = uVar71;
        auVar57._8_4_ = uVar70;
        auVar58 = divpd(auVar57,auVar47);
        auVar59._0_8_ = auVar58._0_8_ * dVar35;
        auVar59._8_8_ = auVar58._8_8_ * dVar41;
        auVar47._8_4_ = SUB84(dVar33,0);
        auVar47._0_8_ = dVar34;
        auVar47._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
        *(undefined1 (*) [16])(lVar11 + 0x30 + lVar21) = auVar47;
        pdVar12 = (double *)(lVar11 + 0x40 + lVar21);
        *pdVar12 = dVar28;
        pdVar12[1] = 0.0;
        puVar1 = (undefined8 *)(lVar11 + 0x50 + lVar21);
        *puVar1 = local_2d8;
        puVar1[1] = uStack_2d0;
        puVar1 = (undefined8 *)(lVar11 + 0x60 + lVar21);
        *puVar1 = local_2c8;
        puVar1[1] = uStack_2c0;
        dVar28 = (double)((ulonglong)(dVar27 * auVar58._0_8_) & -(ulonglong)(1e-08 <= auVar46._0_8_)
                         );
        dVar33 = (double)((ulonglong)(dVar32 * auVar58._8_8_) & -(ulonglong)(1e-08 <= auVar46._8_8_)
                         );
        auVar38._0_8_ = dVar28 * dVar28;
        auVar38._8_8_ = dVar33 * dVar33;
        auVar58._8_8_ = uStack_2e0;
        auVar58._0_8_ = local_2e8;
        auVar47 = blendvpd(auVar58,auVar59,auVar55);
        dVar34 = auVar47._0_8_;
        dVar41 = auVar47._8_8_;
        dVar43 = dVar34 * dVar34 + auVar38._0_8_;
        dVar52 = dVar41 * dVar41 + auVar38._8_8_;
        auVar60._0_8_ = dVar43 + dVar52;
        auVar60._8_8_ = dVar43 + dVar52;
        auVar23._8_8_ = -(ulonglong)(1e-08 <= auVar60._8_8_);
        auVar23._0_8_ = -(ulonglong)(1e-08 <= auVar60._0_8_);
        auVar47 = sqrtpd(auVar38,auVar60);
        auVar61._4_4_ = uVar69;
        auVar61._0_4_ = uVar68;
        auVar61._12_4_ = uVar71;
        auVar61._8_4_ = uVar70;
        auVar47 = divpd(auVar61,auVar47);
        auVar62._0_8_ = auVar47._0_8_ * dVar34;
        auVar62._8_8_ = auVar47._8_8_ * dVar41;
        auVar29._0_8_ = (ulonglong)(dVar28 * auVar47._0_8_) & -(ulonglong)(1e-08 <= auVar60._0_8_);
        auVar29._8_8_ = (ulonglong)(dVar33 * auVar47._8_8_) & -(ulonglong)(1e-08 <= auVar60._8_8_);
        auVar47 = blendvpd(auVar37,auVar62,auVar23);
        *(undefined1 (*) [16])(lVar11 + 0x10 + lVar21) = auVar29;
        *(undefined1 (*) [16])(lVar11 + 0x20 + lVar21) = auVar47;
        local_2f0 = lVar18 + 1;
        lVar11 = (longlong)(int)param_2[1];
        lVar18 = local_300;
        lVar19 = local_308;
        local_30c = iVar15;
        if (local_2f0 < lVar11) {
          do {
            lVar20 = *param_2;
            lVar11 = (longlong)*(int *)(lVar20 + -0x60 + lVar19) * 0x130 + lVar20;
            pdVar12 = (double *)(lVar11 + 0x10);
            auVar47 = *(undefined1 (*) [16])(lVar11 + 0x50);
            dVar28 = auVar47._0_8_;
            dVar34 = auVar47._8_8_;
            auVar58 = *(undefined1 (*) [16])(lVar11 + 0x60);
            dVar33 = auVar58._0_8_;
            auVar37 = *(undefined1 (*) [16])(local_2a8[0] + -0x10 + lVar18);
            auVar45 = *(undefined1 (*) [16])(local_2a8[0] + lVar18);
            auVar47 = minpd(auVar37,auVar47);
            auVar48 = minpd(auVar45,auVar58);
            auVar39._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
            auVar39._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
            uVar13 = movmskpd((int)pdVar14,auVar39);
            pdVar14 = (double *)(ulonglong)uVar13;
            auVar49._8_8_ = -(ulonglong)(auVar48._8_8_ < 0.0);
            auVar49._0_8_ = -(ulonglong)(auVar48._0_8_ < 0.0);
            uVar16 = movmskpd((int)pdVar17,auVar49);
            if ((uVar16 & 0x3fffffff) == 0 && uVar13 == 0) {
              pdVar17 = (double *)(local_2a8[0] + -0x50 + lVar18);
              dVar35 = *pdVar17;
              dVar53 = pdVar17[1];
              pdVar17 = (double *)(local_2a8[0] + -0x40 + lVar18);
              dVar54 = *pdVar17;
              dVar67 = pdVar17[1];
              dVar6 = *pdVar12;
              dVar7 = *(double *)(lVar11 + 0x18);
              dVar8 = *(double *)(lVar11 + 0x20);
              dVar9 = *(double *)(lVar11 + 0x28);
              dVar41 = *(double *)(lVar11 + 0x28);
              dVar43 = *(double *)(lVar11 + 0x28);
              dVar52 = *(double *)(lVar11 + 0x18);
              dVar44 = *(double *)(lVar11 + 0x18);
              dVar27 = *(double *)(lVar11 + 0x20);
              dVar32 = *(double *)(lVar11 + 0x20);
              dVar36 = dVar53 * dVar27 * -1.0 +
                       dVar54 * dVar52 + dVar67 * *pdVar12 * 1.0 + dVar35 * dVar41;
              dVar42 = dVar35 * dVar32 * 1.0 +
                       dVar67 * dVar44 + dVar54 * *pdVar12 * -1.0 + dVar53 * dVar43;
              auVar51._0_8_ =
                   dVar67 * dVar27 * 1.0 +
                   ((*pdVar12 * dVar53 * 1.0 + dVar54 * dVar41) - dVar35 * dVar52);
              auVar51._8_8_ =
                   dVar54 * dVar32 * -1.0 +
                   ((*pdVar12 * dVar35 * -1.0 + dVar67 * dVar43) - dVar53 * dVar44);
              pdVar12 = (double *)(local_2a8[0] + -0x30 + lVar18);
              dVar27 = *pdVar12 * dVar28;
              dVar32 = pdVar12[1] * dVar34;
              pdVar12 = (double *)(local_2a8[0] + -0x20 + lVar18);
              dVar52 = *pdVar12 * dVar33;
              dVar44 = pdVar12[1] * auVar58._8_8_;
              dVar35 = dVar32 * dVar6 - dVar7 * dVar27;
              dVar67 = dVar52 * dVar7 - dVar8 * dVar32;
              dVar54 = dVar27 * dVar8 - dVar6 * dVar52;
              dVar53 = dVar44 * dVar9 - dVar9 * dVar44;
              dVar67 = dVar67 + dVar67;
              dVar54 = dVar54 + dVar54;
              dVar35 = dVar35 + dVar35;
              dVar53 = dVar53 + dVar53;
              uVar72 = 0;
              uVar73 = 0;
              uVar74 = 0;
              uVar75 = 0x3ff00000;
              uVar68 = 0;
              uVar69 = 0x3ff00000;
              uVar70 = 0;
              uVar71 = 0x3ff00000;
              dVar27 = (dVar35 * dVar7 - dVar8 * dVar54) + dVar41 * dVar67 + dVar27 +
                       *(double *)(lVar11 + 0x30);
              dVar32 = (dVar67 * dVar8 - dVar35 * dVar6) + dVar43 * dVar54 + dVar32 +
                       *(double *)(lVar11 + 0x38);
              dVar41 = (dVar54 * dVar6 - dVar7 * dVar67) + dVar41 * dVar35 + dVar52 +
                       *(double *)(lVar11 + 0x40);
              dVar43 = (dVar53 * dVar9 - dVar53 * dVar9) + dVar43 * dVar53 + dVar44 +
                       *(double *)(lVar11 + 0x48);
              pdVar17 = (double *)0x0;
            }
            else {
              dVar43 = *pdVar12;
              dVar52 = *(double *)(lVar11 + 0x18);
              dVar44 = *(double *)(lVar11 + 0x20);
              dVar27 = dVar52 + dVar52;
              dVar32 = dVar44 + dVar44;
              dVar41 = dVar43 * (dVar43 + dVar43);
              local_1f8 = ((double)CONCAT44(uVar69,uVar68) - (dVar44 * dVar32 + dVar52 * dVar27)) *
                          dVar28;
              dStack_1d0 = ((double)CONCAT44(uVar71,uVar70) - (dVar44 * dVar32 + dVar41)) * dVar34;
              local_1a8 = (1.0 - (dVar41 + dVar52 * dVar27)) * dVar33;
              dVar41 = *(double *)(lVar11 + 0x28);
              dVar44 = dVar32 * dVar41;
              dVar35 = (dVar43 + dVar43) * *(double *)(lVar11 + 0x28);
              dVar41 = dVar27 * dVar41;
              dStack_1f0 = (dVar27 * dVar43 + dVar44) * dVar28;
              local_1c8 = (dVar32 * dVar52 + dVar35) * dVar34;
              local_1b8 = (dVar41 + *pdVar12 * dVar32) * dVar33;
              local_1d8 = (dVar27 * dVar43 - dVar44) * dVar34;
              dStack_1b0 = (dVar32 * dVar52 - dVar35) * dVar33;
              local_1e8 = (*pdVar12 * dVar32 - dVar41) * dVar28;
              uStack_1e0 = 0;
              uStack_1c0 = 0;
              uStack_1a0 = 0;
              local_198 = *(undefined8 *)(lVar11 + 0x30);
              uStack_190 = *(undefined8 *)(lVar11 + 0x38);
              local_188 = *(undefined8 *)(lVar11 + 0x40);
              uStack_180 = 0x3ff0000000000000;
              pdVar12 = (double *)(local_2a8[0] + -0x50 + lVar18);
              dVar52 = *pdVar12;
              dVar44 = pdVar12[1];
              dVar43 = *(double *)(local_2a8[0] + -0x40 + lVar18);
              pdVar12 = (double *)(local_2a8[0] + -0x10 + lVar18);
              local_268 = *pdVar12;
              local_258 = pdVar12[1];
              dStack_230 = *(double *)(local_2a8[0] + lVar18);
              dVar53 = dVar44 + dVar44;
              dVar27 = dVar43 + dVar43;
              dVar41 = dVar52 * (dVar52 + dVar52);
              local_278 = ((double)CONCAT44(uVar69,uVar68) - (dVar43 * dVar27 + dVar44 * dVar53)) *
                          local_268;
              dStack_250 = ((double)CONCAT44(uVar71,uVar70) - (dVar43 * dVar27 + dVar41)) *
                           local_258;
              local_228 = (1.0 - (dVar41 + dVar44 * dVar53)) * dStack_230;
              dVar43 = *(double *)(local_2a8[0] + -0x50 + lVar18) * dVar27;
              pdVar12 = (double *)(local_2a8[0] + -0x38 + lVar18);
              dVar41 = *pdVar12;
              dVar32 = dVar27 * dVar41;
              dVar35 = (dVar52 + dVar52) * *pdVar12;
              dVar41 = dVar53 * dVar41;
              dStack_270 = (dVar53 * dVar52 + dVar32) * local_268;
              local_248 = (dVar27 * dVar44 + dVar35) * local_258;
              local_238 = (dVar41 + dVar43) * dStack_230;
              local_268 = (dVar43 - dVar41) * local_268;
              local_258 = (dVar53 * dVar52 - dVar32) * local_258;
              dStack_230 = (dVar27 * dVar44 - dVar35) * dStack_230;
              uStack_260 = 0;
              uStack_240 = 0;
              uStack_220 = 0;
              puVar1 = (undefined8 *)(local_2a8[0] + -0x30 + lVar18);
              local_218 = *puVar1;
              uStack_210 = puVar1[1];
              local_208 = *(undefined8 *)(local_2a8[0] + -0x20 + lVar18);
              uStack_200 = 0x3ff0000000000000;
              pdVar17 = &local_1f8;
              FUN_1447fea8d(&local_178,&local_278);
              FUN_144a1c686(&local_178,0x3e45798ee0000000);
              auVar24._8_8_ = -(ulonglong)(0.0 <= auVar37._8_8_ * dVar34);
              auVar24._0_8_ = -(ulonglong)(0.0 <= auVar37._0_8_ * dVar28);
              auVar5._4_4_ = uVar69;
              auVar5._0_4_ = uVar68;
              auVar5._8_4_ = uVar70;
              auVar5._12_4_ = uVar71;
              auVar47 = blendvpd(_DAT_149936790,auVar5,auVar24);
              uVar22 = -(ulonglong)(0.0 <= auVar45._0_8_ * dVar33);
              dVar41 = (double)(~uVar22 & 0xbff0000000000000 | uVar22 & 0x3ff0000000000000);
              dVar43 = auVar47._0_8_;
              local_168 = local_168 * dVar43;
              local_170 = local_170 * dVar43;
              local_178 = local_178 * dVar43;
              dVar43 = auVar47._8_8_;
              local_148 = local_148 * dVar43;
              local_150 = local_150 * dVar43;
              local_158 = dVar43 * local_158;
              local_128 = local_128 * dVar41;
              local_130 = local_130 * dVar41;
              local_138 = dVar41 * local_138;
              pdVar14 = &local_178;
              FUN_14481fd10(&local_298);
              dVar41 = local_288 * local_288 + local_298 * local_298;
              dVar43 = dStack_280 * dStack_280 + dStack_290 * dStack_290;
              auVar50._0_8_ = dVar41 + dVar43;
              auVar50._8_8_ = dVar41 + dVar43;
              auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_);
              auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_);
              auVar47 = sqrtpd(auVar50,auVar50);
              auVar63._4_4_ = uVar69;
              auVar63._0_4_ = uVar68;
              auVar63._12_4_ = uVar71;
              auVar63._8_4_ = uVar70;
              auVar47 = divpd(auVar63,auVar47);
              auVar64._0_8_ = auVar47._0_8_ * local_288;
              auVar64._8_8_ = auVar47._8_8_ * dStack_280;
              dVar36 = (double)((ulonglong)(local_298 * auVar47._0_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar50._0_8_));
              dVar42 = (double)((ulonglong)(dStack_290 * auVar47._8_8_) &
                               -(ulonglong)(9.99999993922529e-09 <= auVar50._8_8_));
              auVar51 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar64,auVar25);
              dVar43 = 0.0;
              dVar41 = local_108;
              dVar27 = local_118;
              dVar32 = dStack_110;
            }
            dVar52 = auVar45._8_8_ * auVar58._8_8_;
            dVar34 = auVar37._8_8_ * dVar34;
            pdVar12 = (double *)(lVar20 + -0x30 + lVar19);
            *pdVar12 = dVar27;
            pdVar12[1] = dVar32;
            pdVar12 = (double *)(lVar20 + -0x20 + lVar19);
            *pdVar12 = dVar41;
            pdVar12[1] = dVar43;
            auVar3._8_4_ = SUB84(dVar34,0);
            auVar3._0_8_ = auVar37._0_8_ * dVar28;
            auVar3._12_4_ = (int)((ulonglong)dVar34 >> 0x20);
            *(undefined1 (*) [16])(lVar20 + -0x10 + lVar19) = auVar3;
            dVar41 = auVar51._0_8_;
            dVar43 = auVar51._8_8_;
            dVar28 = dVar41 * dVar41 + dVar36 * dVar36;
            dVar34 = dVar43 * dVar43 + dVar42 * dVar42;
            auVar30._0_8_ = dVar28 + dVar34;
            auVar30._8_8_ = dVar28 + dVar34;
            auVar4._8_4_ = SUB84(dVar52,0);
            auVar4._0_8_ = auVar45._0_8_ * dVar33;
            auVar4._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
            *(undefined1 (*) [16])(lVar20 + lVar19) = auVar4;
            auVar26._8_8_ = -(ulonglong)(1e-08 <= auVar30._8_8_);
            auVar26._0_8_ = -(ulonglong)(1e-08 <= auVar30._0_8_);
            auVar47 = sqrtpd(auVar30,auVar30);
            auVar65._4_4_ = uVar69;
            auVar65._0_4_ = uVar68;
            auVar65._12_4_ = uVar71;
            auVar65._8_4_ = uVar70;
            auVar58 = divpd(auVar65,auVar47);
            auVar66._0_8_ = auVar58._0_8_ * dVar41;
            auVar66._8_8_ = auVar58._8_8_ * dVar43;
            auVar31._4_4_ = uVar73;
            auVar31._0_4_ = uVar72;
            auVar31._12_4_ = uVar75;
            auVar31._8_4_ = uVar74;
            auVar47 = blendvpd(auVar31,auVar66,auVar26);
            auVar40._0_8_ =
                 (ulonglong)(dVar36 * auVar58._0_8_) & -(ulonglong)(1e-08 <= auVar30._0_8_);
            auVar40._8_8_ =
                 (ulonglong)(dVar42 * auVar58._8_8_) & -(ulonglong)(1e-08 <= auVar30._8_8_);
            *(undefined1 (*) [16])(lVar20 + -0x50 + lVar19) = auVar40;
            *(undefined1 (*) [16])(lVar20 + -0x40 + lVar19) = auVar47;
            lVar11 = (longlong)(int)param_2[1];
            iVar15 = iVar15 + 1;
            lVar18 = lVar18 + 0x60;
            lVar19 = lVar19 + 0x130;
          } while (iVar15 < (int)param_2[1]);
        }
        iVar15 = local_30c + 1;
        lVar20 = local_300 + 0x60;
        lVar19 = local_308 + 0x130;
        param_1 = local_2f8;
        lVar18 = local_2f0;
      } while (local_2f0 < lVar11);
    }
  }
  if ((*(int *)(param_1 + 0x60) != 0) &&
     (plVar2 = *(longlong **)(param_1 + 0x58), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,param_2);
  }
  if (local_2a8[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 149896276 FUN_149896276 body=1385 status=ok
// SIG undefined FUN_149896276(void)

void FUN_149896276(longlong *param_1,longlong *param_2,undefined8 param_3,longlong param_4,
                  int param_5,undefined4 param_6,longlong *param_7)

{
  undefined4 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  int iVar14;
  undefined1 auStack_188 [32];
  undefined1 local_168;
  longlong local_160;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  int local_134;
  longlong *local_130;
  longlong *local_128;
  undefined8 local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong *local_100;
  longlong *local_f8;
  undefined2 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  longlong local_c8 [2];
  undefined1 local_b8 [16];
  undefined8 local_a8;
  int local_a0;
  undefined8 local_9c;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_188;
  local_a8 = 0;
  local_a0 = 0;
  local_c8[0] = 0;
  local_c8[1] = 0;
  local_9c = 0xffffffff00000080;
  local_94 = 0;
  local_88 = 0;
  local_80 = 0;
  FUN_149897504(local_c8,param_3);
  local_150 = param_2;
  (**(code **)(*param_1 + 8))(param_1,param_2,local_c8);
  local_148 = param_4;
  uVar6 = local_110;
  if ((*(byte *)(param_4 + 5) & 2) != 0) {
    uStack_e0 = local_b8;
    local_e8 = 0x100000000;
    local_d8 = 0xffffffff;
    local_d0 = 0;
    if (local_a0 != 0) {
      FUN_1449c0562(&local_e8);
    }
    local_120 = local_e8;
    local_118 = uStack_e0;
    local_110 = local_d8;
    uVar6 = local_110;
    local_108 = local_d0;
    local_104 = local_cc;
    local_128 = local_c8;
    local_f0 = 0;
    local_110._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    local_100 = local_128;
    local_f8 = local_128;
    if (local_110._4_4_ < *(int *)(uStack_e0 + 0x18)) {
      iVar14 = local_110._4_4_;
      local_110 = uVar6;
      do {
        *(float *)(*local_128 + 0x74 + (longlong)iVar14 * 0xa0) =
             *(float *)(*local_128 + 0x6c + (longlong)iVar14 * 0xa0) * 10.0;
        local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
        FUN_1449c0562(&local_120);
        iVar14 = local_110._4_4_;
      } while (local_110._4_4_ < *(int *)(local_118 + 0x18));
      uVar6 = local_110;
      if (((local_f0 & 1) != 0) && (local_f0._1_1_ == '\x01')) {
        FUN_149899434(local_f8,(int)local_f8[1] - *(int *)((longlong)local_f8 + 0x34));
        uVar6 = local_110;
      }
    }
  }
  local_110 = uVar6;
  if (0 < param_5) {
    iVar14 = 0;
    local_130 = param_1;
    do {
      cVar7 = FUN_1498954e8(param_1,local_150,local_c8,local_148);
      if (cVar7 != '\0') {
        if (param_7 != (longlong *)0x0) {
          iVar8 = (int)param_7[1];
          *(uint *)(param_7 + 1) = iVar8 + 1U;
          if (*(uint *)((longlong)param_7 + 0xc) < iVar8 + 1U) {
            FUN_14989cece(param_7,iVar8);
          }
          lVar3 = *param_7;
          lVar13 = (longlong)iVar8 * 0x30;
          puVar11 = (undefined8 *)(lVar3 + 0x20 + lVar13);
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11 = (undefined8 *)(lVar3 + 0x10 + lVar13);
          *puVar11 = 0;
          puVar11[1] = 0;
          *(undefined8 *)(lVar3 + lVar13) = 0;
          ((undefined8 *)(lVar3 + lVar13))[1] = 0;
          FUN_1498967e0(*param_7 + lVar13,local_150);
          lVar3 = *param_7;
          *(undefined4 *)(lVar3 + 0x18 + lVar13) = 0;
          if (*(int *)(lVar3 + 0x1c + lVar13) < 0) {
            FUN_1401a2688(lVar3 + lVar13 + 0x10,0);
          }
          lVar3 = *param_7;
          local_140 = (longlong)iVar8 * 0x30;
          *(undefined4 *)(lVar3 + 0x28 + local_140) = 0;
          if (*(int *)(lVar3 + 0x2c + local_140) < 0) {
            FUN_1447a8aa0(local_140 + lVar3 + 0x20,0);
          }
          local_e8 = 0x100000000;
          uStack_e0 = local_b8;
          local_d8 = 0xffffffff;
          local_d0 = 0;
          if (local_a0 != 0) {
            FUN_1449c0562(&local_e8);
          }
          local_110 = local_d8;
          uVar6 = local_110;
          local_108 = local_d0;
          local_104 = local_cc;
          local_120 = local_e8;
          local_118 = uStack_e0;
          local_110._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
          bVar5 = local_110._4_4_ < *(int *)(uStack_e0 + 0x18);
          param_1 = local_130;
          iVar8 = local_110._4_4_;
          local_134 = iVar14;
          local_128 = local_c8;
          local_110 = uVar6;
          if (bVar5) {
            do {
              lVar3 = *local_128;
              lVar13 = (longlong)iVar8 * 0xa0;
              if (*(char *)(lVar3 + 0x10 + lVar13) == '\x01') {
                iVar14 = *(int *)(lVar3 + lVar13);
                lVar4 = *local_150;
                plVar2 = (longlong *)(*param_7 + 0x10 + local_140);
                iVar8 = (int)plVar2[1];
                *(uint *)(plVar2 + 1) = iVar8 + 1U;
                if (*(uint *)((longlong)plVar2 + 0xc) < iVar8 + 1U) {
                  FUN_144a2c682(plVar2,iVar8);
                }
                lVar9 = (longlong)iVar14 * 0x130;
                puVar11 = (undefined8 *)(lVar9 + lVar4 + 0x70);
                puVar12 = (undefined8 *)((longlong)iVar8 * 0x60 + *plVar2);
                for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
                  *puVar12 = *puVar11;
                  puVar11 = puVar11 + 1;
                  puVar12 = puVar12 + 1;
                }
                plVar2 = (longlong *)(*param_7 + 0x20 + local_140);
                local_160 = local_148;
                local_168 = 1;
                FUN_149894f96(local_140,&local_e8,lVar9 + lVar4,lVar3 + lVar13 + 0x10);
                iVar14 = (int)plVar2[1];
                *(uint *)(plVar2 + 1) = iVar14 + 1U;
                if (*(uint *)((longlong)plVar2 + 0xc) < iVar14 + 1U) {
                  FUN_1403e3958(plVar2,iVar14);
                }
                lVar3 = *plVar2;
                *(undefined8 *)(lVar3 + 0x10 + (longlong)iVar14 * 0x18) = local_d8;
                puVar1 = (undefined4 *)(lVar3 + (longlong)iVar14 * 0x18);
                *puVar1 = (undefined4)local_e8;
                puVar1[1] = local_e8._4_4_;
                puVar1[2] = (undefined4)uStack_e0;
                puVar1[3] = uStack_e0._4_4_;
                iVar14 = local_134;
              }
              local_110 = CONCAT44(local_110._4_4_,(uint)local_110 & ~local_120._4_4_);
              FUN_1449c0562(&local_120);
              param_1 = local_130;
              iVar8 = local_110._4_4_;
            } while (local_110._4_4_ < *(int *)(local_118 + 0x18));
          }
        }
        cVar7 = FUN_1446736aa(local_150,local_c8,param_6);
        if (cVar7 != '\0') break;
        if ((*(byte *)(local_148 + 5) & 2) != 0) {
          FUN_149896840(local_150,local_c8);
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 != param_5);
  }
  local_80 = 0;
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  FUN_145d11f08(local_c8);
  if ((local_70 ^ (ulonglong)auStack_188) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1498967e0 FUN_1498967e0 body=95 status=ok
// SIG undefined FUN_1498967e0(void)

undefined8 * FUN_1498967e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d11edd(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498982ba(param_1,iVar1);
      FUN_14989832c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149896840 FUN_149896840 body=404 status=ok
// SIG undefined FUN_149896840(void)

void FUN_149896840(longlong *param_1,longlong *param_2)

{
  double *pdVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  longlong *local_50;
  longlong *local_48;
  undefined2 local_40;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_30 = param_2 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_2[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_60 = local_28;
  iStack_5c = iStack_24;
  local_58 = local_20;
  local_54 = local_1c;
  local_70 = local_38;
  local_68 = local_30;
  local_40 = 0;
  local_78 = param_2;
  local_50 = param_2;
  local_48 = param_2;
  if (iStack_24 < (int)local_30[3]) {
    do {
      lVar3 = *local_78;
      lVar5 = (longlong)iStack_5c * 0xa0;
      if (*(char *)(lVar3 + 0x10 + lVar5) == '\x01') {
        lVar4 = *param_1;
        lVar6 = (longlong)*(int *)(lVar3 + lVar5) * 0x130;
        pdVar1 = (double *)(lVar4 + 0x30 + lVar6);
        dVar9 = *(double *)(lVar4 + 0x40 + lVar6) - *(double *)(lVar4 + 0xa0 + lVar6);
        pdVar2 = (double *)(lVar4 + 0x90 + lVar6);
        dVar7 = *pdVar1 - *pdVar2;
        dVar8 = pdVar1[1] - pdVar2[1];
        *(float *)(lVar3 + 0x74 + lVar5) =
             (float)SQRT(dVar9 * dVar9 + dVar7 * dVar7 + dVar8 * dVar8);
      }
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
    if (((local_40 & 1) != 0) && (local_40._1_1_ == '\x01')) {
      FUN_149899434(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34));
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498969d8 FUN_1498969d8 body=239 status=ok
// SIG undefined FUN_1498969d8(void)

void FUN_1498969d8(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar2 = (undefined8 *)*param_2;
  uVar3 = *puVar2;
  puVar4 = (undefined8 *)puVar2[4];
  puVar5 = (undefined8 *)puVar2[8];
  uVar6 = puVar2[0xc];
  uVar7 = puVar2[0x10];
  uVar1 = *(undefined1 *)puVar2[0x14];
  uVar8 = puVar2[0x18];
  lVar9 = (longlong)(*(int *)(param_1 + 0xe8) + -1);
  local_78 = FUN_144828ac0(puVar2 + 0x1c,0,
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 0xc + lVar9 * 0x14) +
                           *(int *)(*(longlong *)(param_1 + 0xe0) + 8 + lVar9 * 0x14));
  local_58 = *puVar5;
  local_50 = *(undefined4 *)(puVar5 + 1);
  local_68 = *puVar4;
  local_60 = *(undefined4 *)(puVar4 + 1);
  local_98 = uVar6;
  local_90 = uVar7;
  local_88 = uVar1;
  local_80 = uVar8;
  FUN_144673a16(*(undefined8 *)(param_1 + 0xc0),uVar3);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149896ad0 FUN_149896ad0 body=193 status=ok
// SIG undefined FUN_149896ad0(void)

void FUN_149896ad0(longlong param_1)

{
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  undefined1 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*(longlong *)(param_1 + 0x10) + 8))(param_1 + 0x10);
  local_28 = *(undefined8 *)(param_1 + 0x200);
  local_20 = *(undefined4 *)(param_1 + 0x208);
  local_38 = *(undefined8 *)(param_1 + 0x210);
  local_30 = *(undefined4 *)(param_1 + 0x218);
  local_48 = param_1 + 0x2d0;
  local_50 = param_1 + 0x250;
  local_58 = *(undefined1 *)(param_1 + 0x246);
  local_60 = param_1 + 0x244;
  local_68 = param_1 + 0x220;
  FUN_144673a16(param_1 + 0x10,param_1 + 0x1f0);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149896b92 FUN_149896b92 body=67 status=ok
// SIG undefined FUN_149896b92(void)

void FUN_149896b92(longlong param_1)

{
  undefined8 *puVar1;
  
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x58);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,0);
      FUN_1446efa72((longlong *)(param_1 + 0x58),0,0,0x10);
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return;
}



// FUNCTION 149896bd6 FUN_149896bd6 body=152 status=ok
// SIG undefined FUN_149896bd6(void)

void FUN_149896bd6(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  
  if ((longlong)*(int *)(param_1 + 0xe0) < 1) {
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    fVar3 = 0.0;
    lVar2 = 0;
    do {
      fVar1 = *(float *)(*(longlong *)(param_1 + 0xd8) + lVar2);
      if (fVar1 <= fVar3) {
        fVar1 = fVar3;
      }
      fVar3 = fVar1;
      *(float *)(param_1 + 0xd0) = fVar3;
      lVar2 = lVar2 + 4;
    } while ((longlong)*(int *)(param_1 + 0xe0) * 4 != lVar2);
    *(undefined4 *)(param_1 + 0xd4) = 0;
    if ((longlong)*(int *)(param_1 + 0xf0) != 0) {
      fVar3 = 0.0;
      lVar2 = 0;
      do {
        fVar1 = *(float *)(*(longlong *)(param_1 + 0xe8) + lVar2);
        if (fVar1 <= fVar3) {
          fVar1 = fVar3;
        }
        fVar3 = fVar1;
        *(float *)(param_1 + 0xd4) = fVar3;
        lVar2 = lVar2 + 4;
      } while ((longlong)*(int *)(param_1 + 0xf0) * 4 != lVar2);
    }
  }
  return;
}



// FUNCTION 149896c6e FUN_149896c6e body=25 status=ok
// SIG undefined FUN_149896c6e(void)

undefined8 FUN_149896c6e(undefined8 param_1,undefined8 param_2)

{
  FUN_1490faf2e(param_2);
  return param_2;
}



// FUNCTION 149896c88 FUN_149896c88 body=43 status=ok
// SIG undefined FUN_149896c88(void)

undefined8 FUN_149896c88(undefined8 param_1,int param_2)

{
  FUN_145d11f78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 149896d52 FUN_149896d52 body=59 status=ok
// SIG undefined FUN_149896d52(void)

undefined8 FUN_149896d52(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149896f28 FUN_149896f28 body=68 status=ok
// SIG undefined FUN_149896f28(void)

undefined8 FUN_149896f28(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      memcpy((void *)(param_2 + lVar1),(void *)(param_3 + lVar1),0xa0);
      lVar1 = lVar1 + 0xa0;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149896f94 FUN_149896f94 body=59 status=ok
// SIG undefined FUN_149896f94(void)

undefined8 FUN_149896f94(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498970ac FUN_1498970ac body=59 status=ok
// SIG undefined FUN_1498970ac(void)

undefined8 FUN_1498970ac(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897206 FUN_149897206 body=39 status=ok
// SIG undefined FUN_149897206(void)

undefined8 FUN_149897206(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  if (param_4 != 0) {
    lVar1 = 0;
    do {
      puVar3 = (undefined8 *)(param_3 + lVar1);
      puVar4 = (undefined8 *)(param_2 + lVar1);
      for (lVar2 = 0xf; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      lVar1 = lVar1 + 0x80;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 149897256 FUN_149897256 body=59 status=ok
// SIG undefined FUN_149897256(void)

undefined8 FUN_149897256(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897304 FUN_149897304 body=48 status=ok
// SIG undefined FUN_149897304(void)

void FUN_149897304(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x20,8);
  }
  return;
}



// FUNCTION 149897334 FUN_149897334 body=132 status=ok
// SIG undefined FUN_149897334(void)

void FUN_149897334(longlong param_1,int param_2)

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



// FUNCTION 149897462 FUN_149897462 body=59 status=ok
// SIG undefined FUN_149897462(void)

undefined8 FUN_149897462(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897504 FUN_149897504 body=122 status=ok
// SIG undefined FUN_149897504(void)

longlong FUN_149897504(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_14989757e(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 14989757e FUN_14989757e body=206 status=ok
// SIG undefined FUN_14989757e(void)

undefined8 * FUN_14989757e(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d12038(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_141431dd2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_14989764c(puVar6,puVar4);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0x28;
        puVar6 = puVar6 + 0x28;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 14989764c FUN_14989764c body=152 status=ok
// SIG undefined FUN_14989764c(void)

undefined4 * FUN_14989764c(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  puVar3 = (undefined8 *)(param_2 + 4);
  puVar4 = (undefined8 *)(param_1 + 4);
  for (lVar2 = 0xe; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  iVar1 = param_2[0x22];
  _Src = *(void **)(param_2 + 0x20);
  param_1[0x22] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0x23] = 0;
  }
  else {
    FUN_144a06ca8(param_1 + 0x20,iVar1,0);
    memcpy(*(void **)(param_1 + 0x20),_Src,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  return param_1;
}



// FUNCTION 149897854 FUN_149897854 body=59 status=ok
// SIG undefined FUN_149897854(void)

undefined8 FUN_149897854(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897924 FUN_149897924 body=63 status=ok
// SIG undefined FUN_149897924(void)

undefined1 FUN_149897924(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_149897b0a(param_2,param_3);
    param_3 = param_3 + 0x198;
    param_2 = param_2 + 0x198;
  }
  return 1;
}



// FUNCTION 14989798c FUN_14989798c body=59 status=ok
// SIG undefined FUN_14989798c(void)

undefined8 FUN_14989798c(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498979d8 FUN_1498979d8 body=40 status=ok
// SIG undefined FUN_1498979d8(void)

void FUN_1498979d8(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x198) == '\x01') {
    FUN_145d11daa(param_2);
    *(undefined1 *)(param_2 + 0x198) = 0;
  }
  return;
}



// FUNCTION 149897a4e FUN_149897a4e body=43 status=ok
// SIG undefined FUN_149897a4e(void)

undefined8 FUN_149897a4e(undefined8 param_1,int param_2)

{
  FUN_145d11f78();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 149897a7a FUN_149897a7a body=72 status=ok
// SIG undefined FUN_149897a7a(void)

void FUN_149897a7a(longlong *param_1)

{
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  FUN_145d11edd(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149897ac2 FUN_149897ac2 body=71 status=ok
// SIG undefined FUN_149897ac2(void)

void FUN_149897ac2(longlong param_1)

{
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 149897b0a FUN_149897b0a body=137 status=ok
// SIG undefined FUN_149897b0a(void)

longlong FUN_149897b0a(longlong param_1,longlong param_2)

{
  FUN_1498967e0();
  FUN_149897504(param_1 + 0x10,param_2 + 0x10);
  FUN_14054c6c4(param_1 + 0x60,param_2 + 0x60);
  FUN_149897c44(param_1 + 0x70,param_2 + 0x70);
  FUN_1459a7e20(param_1 + 0xc0,param_2 + 0xc0);
  FUN_149897b94(param_1 + 0x110,param_2 + 0x110);
  FUN_149897e2e(param_1 + 0x120,param_2 + 0x120);
  FUN_149897be4(param_1 + 0x188,param_2 + 0x188);
  return param_1;
}



// FUNCTION 149897b94 FUN_149897b94 body=79 status=ok
// SIG undefined FUN_149897b94(void)

undefined8 * FUN_149897b94(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149897d38(param_1,iVar1);
      FUN_149897dab(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149897be4 FUN_149897be4 body=95 status=ok
// SIG undefined FUN_149897be4(void)

undefined8 * FUN_149897be4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145d11eb5(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_149898126(param_1,iVar1);
      FUN_149898199(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149897c44 FUN_149897c44 body=122 status=ok
// SIG undefined FUN_149897c44(void)

longlong FUN_149897c44(longlong param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  void *_Dst;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 0x48);
    FUN_144a1cbf0((void *)(param_1 + 0x38),0,iVar1,4);
    if ((longlong)iVar1 != 0) {
      _Dst = (void *)(param_1 + 0x38);
      if (*(void **)(param_1 + 0x40) != (void *)0x0) {
        _Dst = *(void **)(param_1 + 0x40);
      }
      _Src = (void *)(param_2 + 0x38);
      if (*(void **)(param_2 + 0x40) != (void *)0x0) {
        _Src = *(void **)(param_2 + 0x40);
      }
      memcpy(_Dst,_Src,(longlong)iVar1 << 2);
    }
    *(int *)(param_1 + 0x48) = iVar1;
    FUN_149897cbe(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 149897cbe FUN_149897cbe body=121 status=ok
// SIG undefined FUN_149897cbe(void)

undefined8 * FUN_149897cbe(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_145d11fbc(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1403951a8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 149897d38 FUN_149897d38 body=115 status=ok
// SIG undefined FUN_149897d38(void)

void FUN_149897d38(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc0,0x10);
    iVar2 = (int)(uVar1 / 0xc0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xc0,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149897dab FUN_149897dab body=83 status=ok
// SIG undefined FUN_149897dab(void)

void FUN_149897dab(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    bVar1 = *(byte *)(param_2 + 0xb0);
    *(byte *)(param_1 + 0xb0) = bVar1;
    (*(code *)(&PTR_LAB_14bed0f20)[bVar1])(param_1,param_2);
    param_1 = param_1 + 0xc0;
    param_2 = param_2 + 0xc0;
  }
  return;
}



// FUNCTION 149897e2e FUN_149897e2e body=137 status=ok
// SIG undefined FUN_149897e2e(void)

longlong FUN_149897e2e(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [46];
  undefined1 local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_149897eb8(param_1 + 8,param_2 + 8,&local_1a);
  FUN_149897eb8(param_1 + 0x20,param_2 + 0x20,&local_19);
  FUN_149897f9a(param_1 + 0x38,param_2 + 0x38);
  FUN_14989801e(param_1 + 0x48,param_2 + 0x48);
  FUN_1498980a2(param_1 + 0x58,param_2 + 0x58);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897eb8 FUN_149897eb8 body=225 status=ok
// SIG undefined FUN_149897eb8(void)

void FUN_149897eb8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_78 [32];
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_2;
  local_30 = param_2[1];
  lVar6 = param_2[2];
  local_20 = local_30;
  if ((param_1[1] != local_30) || (param_1[2] != lVar6)) {
    FUN_1475090be(param_1);
    local_30 = param_1[1];
    lVar6 = param_1[2];
  }
  local_38 = *param_1;
  local_58 = &local_38;
  local_50 = &local_28;
  uVar8 = lVar6 * local_30;
  uVar7 = uVar8 + 3;
  if (-1 < (longlong)uVar8) {
    uVar7 = uVar8;
  }
  if (3 < (longlong)uVar8) {
    lVar6 = 0;
    do {
      puVar1 = (undefined4 *)(local_28 + lVar6 * 4);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      puVar2 = (undefined4 *)(local_38 + lVar6 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      puVar2[3] = uVar5;
      lVar6 = lVar6 + 4;
    } while (lVar6 < (longlong)(uVar7 & 0xfffffffffffffffc));
  }
  local_48 = param_3;
  local_40 = param_1;
  FUN_140eb7c84(&local_58);
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149897f9a FUN_149897f9a body=130 status=ok
// SIG undefined FUN_149897f9a(void)

void FUN_149897f9a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 14989801e FUN_14989801e body=130 status=ok
// SIG undefined FUN_14989801e(void)

void FUN_14989801e(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 1498980a2 FUN_1498980a2 body=130 status=ok
// SIG undefined FUN_1498980a2(void)

void FUN_1498980a2(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
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



// FUNCTION 149898126 FUN_149898126 body=115 status=ok
// SIG undefined FUN_149898126(void)

void FUN_149898126(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x30,8);
    iVar2 = (int)(uVar1 / 0x30);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x30,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149898199 FUN_149898199 body=52 status=ok
// SIG undefined FUN_149898199(void)

void FUN_149898199(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_1498981ce(param_1,param_2);
    param_1 = param_1 + 0x30;
    param_2 = param_2 + 0x30;
  }
  return;
}



// FUNCTION 1498981ce FUN_1498981ce body=235 status=ok
// SIG undefined FUN_1498981ce(void)

undefined8 * FUN_1498981ce(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1498982ba(param_1,iVar1,0);
    FUN_14989832c(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar3 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_144756262(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar3,(longlong)iVar1 * 0x60);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar3 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1405b70fe(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar3,(longlong)iVar1 * 0x18);
  }
  return param_1;
}



// FUNCTION 1498982ba FUN_1498982ba body=114 status=ok
// SIG undefined FUN_1498982ba(void)

void FUN_1498982ba(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x130,0x10);
    iVar2 = (int)(uVar1 / 0x130);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x130,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14989832c FUN_14989832c body=60 status=ok
// SIG undefined FUN_14989832c(void)

void FUN_14989832c(longlong param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    FUN_149898368(param_1,param_2);
    param_1 = param_1 + 0x130;
    param_2 = param_2 + 0x130;
  }
  return;
}



// FUNCTION 149898368 FUN_149898368 body=337 status=ok
// SIG undefined FUN_149898368(void)

void * FUN_149898368(void *param_1,void *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  memcpy(param_1,param_2,0xd8);
  *(undefined8 *)((longlong)param_1 + 0xd8) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xe0);
  pvVar2 = *(void **)((longlong)param_2 + 0xd8);
  *(int *)((longlong)param_1 + 0xe0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xe4) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)((longlong)param_1 + 0xd8),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0xd8),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0xe8) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0xf0);
  pvVar2 = *(void **)((longlong)param_2 + 0xe8);
  *(int *)((longlong)param_1 + 0xf0) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  }
  else {
    FUN_1447c510a((undefined8 *)((longlong)param_1 + 0xe8),iVar1,0);
    memcpy(*(void **)((longlong)param_1 + 0xe8),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  iVar1 = *(int *)((longlong)param_2 + 0x100);
  pvVar2 = *(void **)((longlong)param_2 + 0xf8);
  *(int *)((longlong)param_1 + 0x100) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  else {
    FUN_1498984ba((undefined8 *)((longlong)param_1 + 0xf8),iVar1);
    memcpy(*(void **)((longlong)param_1 + 0xf8),pvVar2,(longlong)iVar1 << 5);
  }
  uVar3 = *(undefined8 *)((longlong)param_2 + 0x110);
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x118);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x128);
  *(undefined8 *)((longlong)param_1 + 0x120) = *(undefined8 *)((longlong)param_2 + 0x120);
  *(undefined8 *)((longlong)param_1 + 0x128) = uVar5;
  *(undefined8 *)((longlong)param_1 + 0x110) = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x118) = uVar4;
  return param_1;
}



// FUNCTION 1498984ba FUN_1498984ba body=88 status=ok
// SIG undefined FUN_1498984ba(void)

void FUN_1498984ba(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = FUN_144a3809e((longlong)param_2 << 5,8);
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 5)) {
    uVar3 = uVar1 >> 5 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x20,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 149898548 FUN_149898548 body=63 status=ok
// SIG undefined FUN_149898548(void)

undefined1 FUN_149898548(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_14989869e(param_2,param_3);
    param_3 = param_3 + 0x470;
    param_2 = param_2 + 0x470;
  }
  return 1;
}



// FUNCTION 1498985b0 FUN_1498985b0 body=59 status=ok
// SIG undefined FUN_1498985b0(void)

undefined8 FUN_1498985b0(longlong *param_1)

{
  undefined1 auStack_38 [32];
  undefined1 local_18 [16];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  (**(code **)(*param_1 + 8))(param_1,local_18);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1498985fc FUN_1498985fc body=40 status=ok
// SIG undefined FUN_1498985fc(void)

void FUN_1498985fc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x470) == '\x01') {
    FUN_145d11d4a(param_2);
    *(undefined1 *)(param_2 + 0x470) = 0;
  }
  return;
}



// FUNCTION 149898672 FUN_149898672 body=43 status=ok
// SIG undefined FUN_149898672(void)

undefined8 FUN_149898672(undefined8 param_1,int param_2)

{
  FUN_145d11d4a();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x470);
  }
  return param_1;
}



// FUNCTION 14989869e FUN_14989869e body=138 status=ok
// SIG undefined FUN_14989869e(void)

longlong FUN_14989869e(longlong param_1,longlong param_2)

{
  FUN_1491c05d4(param_1 + 0x10,param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1f0) = *(undefined8 *)(param_2 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1f8) = *(undefined4 *)(param_2 + 0x1f8);
  FUN_149898728(param_1 + 0x200,param_2 + 0x200);
  FUN_149898778(param_1 + 0x210,param_2 + 0x210);
  memcpy((void *)(param_1 + 0x220),(void *)(param_2 + 0x220),0xa8);
  FUN_149897b0a(param_1 + 0x2d0,param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 149898728 FUN_149898728 body=79 status=ok
// SIG undefined FUN_149898728(void)

undefined8 * FUN_149898728(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1498987d2(param_1,iVar1);
      FUN_149898845(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 149898778 FUN_149898778 body=89 status=ok
// SIG undefined FUN_149898778(void)

undefined8 * FUN_149898778(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1498988fa(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 * 0xa0);
      }
    }
  }
  return param_1;
}



// FUNCTION 1498987d2 FUN_1498987d2 body=115 status=ok
// SIG undefined FUN_1498987d2(void)

void FUN_1498987d2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x60,0x10);
    iVar2 = (int)(uVar1 / 0x60);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x60,0x10);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 149898845 FUN_149898845 body=180 status=ok
// SIG undefined FUN_149898845(void)

void FUN_149898845(longlong param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_3 != 0) {
    lVar6 = 0;
    do {
      *(undefined1 *)(param_1 + lVar6) = 0;
      *(undefined8 *)(param_1 + 4 + lVar6) = 0;
      *(undefined8 *)(param_1 + 0x28 + lVar6) = 0x3e83f800000;
      *(undefined8 *)(param_1 + 0x50 + lVar6) = 0x3e83f800000;
      *(undefined4 *)(param_1 + 0x58 + lVar6) = 0;
      *(undefined4 *)(param_1 + 8 + lVar6) = *(undefined4 *)(param_2 + 8 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      *(undefined8 *)(param_1 + 0x20 + lVar6) = *(undefined8 *)(param_2 + 0x20 + lVar6);
      puVar1 = (undefined8 *)(param_2 + 0x10 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_1 + 0x10 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      *(undefined4 *)(param_1 + 0x28 + lVar6) = *(undefined4 *)(param_2 + 0x28 + lVar6);
      *(undefined4 *)(param_1 + 0x2c + lVar6) = *(undefined4 *)(param_2 + 0x2c + lVar6);
      puVar1 = (undefined8 *)(param_2 + 0x30 + lVar6);
      uVar3 = puVar1[1];
      puVar2 = (undefined8 *)(param_2 + 0x40 + lVar6);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(param_1 + 0x30 + lVar6);
      *puVar2 = *puVar1;
      puVar2[1] = uVar3;
      puVar1 = (undefined8 *)(param_1 + 0x40 + lVar6);
      *puVar1 = uVar4;
      puVar1[1] = uVar5;
      *(undefined4 *)(param_1 + 0x50 + lVar6) = *(undefined4 *)(param_2 + 0x50 + lVar6);
      *(undefined4 *)(param_1 + 0x54 + lVar6) = *(undefined4 *)(param_2 + 0x54 + lVar6);
      *(undefined4 *)(param_1 + 0x58 + lVar6) = *(undefined4 *)(param_2 + 0x58 + lVar6);
      lVar6 = lVar6 + 0x60;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1498988fa FUN_1498988fa body=115 status=ok
// SIG undefined FUN_1498988fa(void)

void FUN_1498988fa(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xa0,8);
    iVar2 = (int)(uVar1 / 0xa0);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar2) {
      iVar3 = iVar2;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0xa0,8);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14989896e FUN_14989896e body=58 status=ok
// SIG undefined FUN_14989896e(void)

int FUN_14989896e(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_149898a50(param_1,iVar1);
  }
  FUN_1498989a8((longlong)iVar1 * 0x130 + *param_1);
  return iVar1;
}



// FUNCTION 1498989a8 FUN_1498989a8 body=168 status=ok
// SIG undefined FUN_1498989a8(void)

void FUN_1498989a8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  *param_1 = 0xffffffff;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x3ff00000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3ff0000000000000;
  param_1[0x17] = 0x3ff0000000000000;
  param_1[0x18] = 0x3ff0000000000000;
  param_1[0x19] = 0;
  param_1[0x1a] = 0xbf800000bf800000;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  uVar1 = DAT_14c8463d8;
  param_1[0x22] = DAT_14c8463d0;
  param_1[0x23] = uVar1;
  uVar1 = DAT_14c8463e8;
  param_1[0x24] = DAT_14c8463e0;
  param_1[0x25] = uVar1;
  return;
}



// FUNCTION 149898a50 FUN_149898a50 body=146 status=ok
// SIG undefined FUN_149898a50(void)

void FUN_149898a50(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x130,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x130)) {
      uVar5 = uVar4 / 0x130 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x130,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 149898ae4 FUN_149898ae4 body=293 status=ok
// SIG undefined FUN_149898ae4(void)

undefined4 * FUN_149898ae4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_149898c0a(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar5 = *(uint *)*param_3;
  *local_40 = uVar5;
  *(undefined8 *)(local_40 + 1) = *puVar1;
  local_40[3] = *(uint *)(puVar1 + 1);
  local_40[4] = 0xffffffff;
  local_4c = local_48[0];
  cVar3 = FUN_149898cf0(param_1,uVar5,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar4) {
      uVar6 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar5 = *(int *)(param_1 + 0x48) - 1U & uVar5;
      local_40[5] = uVar5;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      local_40[4] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar5) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar5) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_149898de2(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149898c0a FUN_149898c0a body=230 status=ok
// SIG undefined FUN_149898c0a(void)

int * FUN_149898c0a(longlong *param_1,int *param_2)

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
      FUN_1403951a8(param_1,iVar6);
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



// FUNCTION 149898cf0 FUN_149898cf0 body=128 status=ok
// SIG undefined FUN_149898cf0(void)

undefined8 FUN_149898cf0(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar6 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar6 = (longlong *)param_1[8];
    }
    iVar7 = *(int *)((longlong)plVar6 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar7 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar7 * 0x18);
        if (*piVar1 == *param_3) {
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_149898d70(iVar2,*param_4);
          *param_4 = iVar7;
          return 1;
        }
        iVar7 = piVar1[4];
      } while (iVar7 != -1);
    }
  }
  return 0;
}



// FUNCTION 149898d70 FUN_149898d70 body=114 status=ok
// SIG undefined FUN_149898d70(void)

void FUN_149898d70(longlong *param_1,int param_2)

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



// FUNCTION 149898de2 FUN_149898de2 body=419 status=ok
// SIG undefined FUN_149898de2(void)

void FUN_149898de2(longlong *param_1)

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
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar6 * 0x18);
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



// FUNCTION 149898f86 FUN_149898f86 body=143 status=ok
// SIG undefined FUN_149898f86(void)

void FUN_149898f86(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xe0);
  *(uint *)(param_1 + 0xe0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xe4) < iVar1 + 1U) {
    FUN_14475e4ac(param_1 + 0xd8,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + (longlong)iVar1 * 4) = param_2;
  iVar1 = *(int *)(param_1 + 0xf0);
  *(uint *)(param_1 + 0xf0) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xf4) < iVar1 + 1U) {
    FUN_14475e4ac((longlong *)(param_1 + 0xe8),iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0xe8) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 149899016 FUN_149899016 body=191 status=ok
// SIG undefined FUN_149899016(void)

longlong FUN_149899016(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  int *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0xa0;
        if (*(int *)(*param_1 + (longlong)iVar1 * 0xa0) == *param_3) {
          if (lVar3 != 0) goto LAB_1498990b8;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x90);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1498990d6(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0xa0 + *param_1;
LAB_1498990b8:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 0x10;
}



// FUNCTION 1498990d6 FUN_1498990d6 body=329 status=ok
// SIG undefined FUN_1498990d6(void)

undefined4 * FUN_1498990d6(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined4 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_149899220(param_1,local_48);
  *local_40 = *(undefined4 *)*param_4;
  *(undefined8 *)(local_40 + 6) = 0;
  *(undefined8 *)(local_40 + 8) = 0;
  *(undefined8 *)(local_40 + 10) = 0;
  *(undefined8 *)(local_40 + 0x10) = 0;
  *(undefined8 *)(local_40 + 0x12) = 0;
  *(undefined8 *)(local_40 + 0x14) = 0;
  *(undefined8 *)(local_40 + 0x16) = 0;
  local_40[0x18] = 0x3f000000;
  local_40[0x19] = 0x3f000000;
  local_40[0x1a] = 0x3f000000;
  local_40[0x1b] = 0;
  local_40[0x1c] = 0x3f800000;
  *(undefined8 *)(local_40 + 0x1d) = 0;
  *(undefined8 *)(local_40 + 0x1f) = 0;
  *(undefined8 *)(local_40 + 0x20) = 0;
  *(undefined8 *)(local_40 + 0x22) = 0;
  local_40[0x24] = 0xffffffff;
  cVar1 = FUN_14989930e(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      local_40[0x25] = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      local_40[0x24] =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_149899478(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149899220 FUN_149899220 body=238 status=ok
// SIG undefined FUN_149899220(void)

int * FUN_149899220(longlong *param_1,int *param_2)

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
      FUN_141431dd2(param_1,iVar6);
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
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0xa0);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0xa0) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0xa0 + *param_1;
  return param_2;
}



// FUNCTION 14989930e FUN_14989930e body=171 status=ok
// SIG undefined FUN_14989930e(void)

undefined8 FUN_14989930e(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  void *_Dst;
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
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0xa0);
        if (*(int *)(*param_1 + (longlong)iVar2 * 0xa0) == *param_3) {
          if (*(longlong *)((longlong)_Dst + 0x80) != 0) {
            FUN_1400020a8();
          }
          memmove(_Dst,param_3,0x90);
          FUN_1498993ba(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x90);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1498993ba FUN_1498993ba body=122 status=ok
// SIG undefined FUN_1498993ba(void)

void FUN_1498993ba(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0xa0) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0xa0 + 4) = uVar4;
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



// FUNCTION 149899434 FUN_149899434 body=68 status=ok
// SIG undefined FUN_149899434(void)

void FUN_149899434(longlong param_1,uint param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  
  iVar3 = 1;
  if (3 < param_2) {
    uVar2 = (ulonglong)(param_2 & 0xfffffffe) + 0xf;
    lVar1 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    iVar3 = 1 << ((byte)lVar1 & 0x1f);
  }
  if (((int)param_2 < 1 || iVar3 <= *(int *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x48) <= iVar3)
     ) {
    return;
  }
  *(int *)(param_1 + 0x48) = iVar3;
  FUN_149899478(param_1);
  return;
}



// FUNCTION 149899478 FUN_149899478 body=433 status=ok
// SIG undefined FUN_149899478(void)

void FUN_149899478(longlong *param_1)

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
        lVar7 = (longlong)iVar5 * 0xa0;
        uVar10 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar3 + lVar7);
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x94 + lVar7) = iVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x90 + lVar7) =
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



// FUNCTION 14989962a FUN_14989962a body=48 status=ok
// SIG undefined FUN_14989962a(void)

void FUN_14989962a(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0xc0,0x10);
  }
  return;
}



// FUNCTION 14989965a FUN_14989965a body=147 status=ok
// SIG undefined FUN_14989965a(void)

void FUN_14989965a(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0xc0,0x10);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0xc0)) {
      uVar5 = uVar4 / 0xc0 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0xc0,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1498996ee FUN_1498996ee body=11 status=ok
// SIG undefined FUN_1498996ee(void)

void FUN_1498996ee(void *param_1,void *param_2)

{
  memcpy(param_1,param_2,0xb0);
  return;
}



// FUNCTION 149899706 FUN_149899706 body=23 status=ok
// SIG undefined FUN_149899706(void)

void FUN_149899706(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



// FUNCTION 14989971e FUN_14989971e body=36 status=ok
// SIG undefined FUN_14989971e(void)

undefined8 FUN_14989971e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14989975e FUN_14989975e body=93 status=ok
// SIG undefined FUN_14989975e(void)

void FUN_14989975e(longlong param_1,longlong *param_2)

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
  *puVar1 = &PTR_FUN_14bed1160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1498997bc FUN_1498997bc body=123 status=ok
// SIG undefined FUN_1498997bc(void)

void FUN_1498997bc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bed1160;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 149899838 FUN_149899838 body=21 status=ok
// SIG undefined FUN_149899838(void)

undefined8 FUN_149899838(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 14989984e FUN_14989984e body=99 status=ok
// SIG undefined FUN_14989984e(void)

void FUN_14989984e(undefined8 param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*param_2 + 8);
  lVar3 = *(longlong *)(*param_2 + 0x10);
  if ((lVar2 != 0 && lVar3 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(lVar2),0) < lVar3)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(lVar2),0));
    lVar2 = *(longlong *)(*param_2 + 8);
    lVar3 = *(longlong *)(*param_2 + 0x10);
  }
  FUN_1475090be(param_1,lVar3,lVar2);
  return;
}



// FUNCTION 1498998b1 FUN_1498998b1 body=147 status=ok
// SIG undefined FUN_1498998b1(void)

void FUN_1498998b1(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  
  param_2 = (undefined8 *)*param_2;
  puVar5 = (undefined4 *)*param_2;
  lVar2 = param_2[1];
  lVar4 = param_2[2];
  if ((param_1[1] != lVar4) || (lVar8 = lVar2, param_1[2] != lVar2)) {
    FUN_1475090be(param_1);
    lVar4 = param_1[1];
    lVar8 = param_1[2];
  }
  if (0 < lVar8) {
    lVar3 = *param_1;
    lVar1 = lVar4 * 4;
    lVar6 = 0;
    do {
      if (0 < lVar4) {
        lVar8 = 0;
        puVar7 = puVar5;
        do {
          *(undefined4 *)(lVar3 + lVar8 * 4) = *puVar7;
          lVar8 = lVar8 + 1;
          lVar4 = param_1[1];
          puVar7 = puVar7 + lVar2;
        } while (lVar8 < lVar4);
        lVar8 = param_1[2];
      }
      lVar6 = lVar6 + 1;
      lVar3 = lVar3 + lVar1;
      puVar5 = puVar5 + 1;
    } while (lVar6 < lVar8);
  }
  return;
}



// FUNCTION 149899944 FUN_149899944 body=107 status=ok
// SIG undefined FUN_149899944(void)

void FUN_149899944(undefined8 param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2[1] + 0x10);
  lVar3 = *(longlong *)(*param_2 + 8);
  if ((lVar2 != 0 && lVar3 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(lVar2),0) < lVar3)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(lVar2),0));
    lVar2 = *(longlong *)(param_2[1] + 0x10);
    lVar3 = *(longlong *)(*param_2 + 8);
  }
  FUN_1475090be(param_1,lVar3,lVar2);
  return;
}



// FUNCTION 1498999b0 FUN_1498999b0 body=74 status=ok
// SIG undefined FUN_1498999b0(void)

void FUN_1498999b0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(lVar1 + 8)) ||
     (*(longlong *)(param_1 + 0x10) != *(longlong *)(lVar2 + 0x10))) {
    FUN_1475090be(param_1,*(longlong *)(lVar1 + 8),*(longlong *)(lVar2 + 0x10));
    lVar1 = *param_2;
    lVar2 = param_2[1];
  }
  FUN_1498999fa(param_1,lVar1,lVar2);
  return;
}



// FUNCTION 1498999fa FUN_1498999fa body=179 status=ok
// SIG undefined FUN_1498999fa(void)

void FUN_1498999fa(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(longlong *)(param_1 + 8);
  if ((*(longlong *)(param_3 + 8) < 1) ||
     (0x13 < *(longlong *)(param_3 + 8) + local_40 + *(longlong *)(param_1 + 0x10))) {
    local_30 = 0;
    local_38 = *(longlong *)(param_1 + 0x10);
    FUN_149899ef5(param_1,&local_48);
    local_48 = CONCAT44(local_48._4_4_,0x3f800000);
    FUN_149899aae(param_1,param_2,param_3,&local_48);
  }
  else {
    local_48 = param_2;
    local_40 = param_3;
    FUN_149899c63(param_1,&local_48,&local_49);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149899aae FUN_149899aae body=436 status=ok
// SIG undefined FUN_149899aae(void)

void FUN_149899aae(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_d8 [40];
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 uStack_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong lStack_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  longlong lStack_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  puVar2 = (undefined8 *)param_2[2];
  if (((puVar2 != (undefined8 *)0x0) && (param_2[1] != 0)) && (param_3[2] != 0)) {
    local_60 = (undefined8 *)param_1[2];
    if (local_60 == (undefined8 *)&DAT_00000001) {
      local_78 = *param_1;
      lStack_70 = param_1[1];
      local_58 = (undefined8 *)0x0;
      lStack_50 = 0;
      local_b0 = (undefined8 *)*param_3;
      local_a8 = (undefined8 *)param_3[1];
      local_90 = (undefined8 *)0x0;
      uStack_88 = 0;
      local_98 = param_3;
      local_80 = local_a8;
      local_60 = param_1;
      local_48 = lStack_70;
      FUN_14989a04a(&local_78,param_2);
    }
    else {
      local_68 = (undefined8 *)param_1[1];
      if (local_68 == (undefined8 *)&DAT_00000001) {
        local_78 = *param_1;
        local_58 = (undefined8 *)0x0;
        lStack_50 = 0;
        local_48 = 1;
        local_b0 = (undefined8 *)*param_2;
        local_90 = (undefined8 *)0x0;
        uStack_88 = 0;
        local_80 = (undefined8 *)&DAT_00000001;
        local_a0 = puVar2;
        local_98 = param_2;
        local_68 = local_60;
        local_60 = param_1;
        FUN_14989a122(&local_78,&local_b0,param_3);
      }
      else {
        uVar1 = *param_4;
        local_78 = 0;
        lStack_70 = 0;
        local_58 = puVar2;
        FUN_14750ac12(&local_58,&local_68,&local_60,1);
        lStack_50 = (longlong)local_68 * (longlong)local_58;
        local_48 = (longlong)local_58 * (longlong)local_60;
        local_98 = (undefined8 *)CONCAT44(local_98._4_4_,uVar1);
        local_90 = &local_78;
        local_b0 = param_2;
        local_a8 = param_3;
        local_a0 = param_1;
        FUN_14989a3aa(&local_b0,param_2[1],param_3[2]);
        FUN_1400020a8(local_78);
        FUN_1400020a8(lStack_70);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149899c63 FUN_149899c63 body=195 status=ok
// SIG undefined FUN_149899c63(void)

void FUN_149899c63(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_a8 [40];
  undefined8 *local_80;
  undefined8 **local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_50 = (undefined8 *)*param_2;
  local_48 = (undefined4 *)param_2[1];
  local_40 = *local_50;
  local_58 = local_50[1];
  local_30 = *local_48;
  uStack_2c = local_48[1];
  uStack_28 = local_48[2];
  uStack_24 = local_48[3];
  local_20 = local_50[2];
  local_38 = local_58;
  if ((param_1[1] != local_58) || (param_1[2] != *(longlong *)(local_48 + 4))) {
    FUN_1475090be(param_1);
    local_58 = param_1[1];
  }
  local_60 = *param_1;
  local_80 = &local_60;
  local_78 = &local_50;
  local_70 = param_3;
  local_68 = param_1;
  FUN_149899d28();
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 149899d28 FUN_149899d28 body=324 status=ok
// SIG undefined FUN_149899d28(void)

void FUN_149899d28(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar2 = *(longlong *)(param_1[3] + 0x10);
  if (0 < lVar2) {
    lVar3 = *(longlong *)(param_1[3] + 8);
    uVar14 = (ulonglong)(-(int)lVar3 & 3);
    lVar15 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      if (0 < lVar10) {
        lVar8 = 0;
        do {
          FUN_149899e6c(param_1,lVar8,lVar11);
          lVar8 = lVar8 + 1;
        } while (lVar10 != lVar8);
      }
      uVar5 = lVar3 - lVar10 & 0xfffffffffffffffc;
      lVar8 = uVar5 + lVar10;
      if (0 < (longlong)uVar5) {
        lVar6 = lVar10 * 4;
        lVar7 = lVar10;
        do {
          lVar4 = param_1[1];
          if (*(longlong *)(lVar4 + 0x30) < 1) {
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          else {
            pfVar12 = (float *)(*(longlong *)(lVar4 + 0x10) + lVar6);
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            lVar13 = 0;
            do {
              fVar1 = *(float *)(*(longlong *)(lVar4 + 0x28) * lVar15 + *(longlong *)(lVar4 + 0x20)
                                + lVar13 * 4);
              fVar16 = fVar16 + *pfVar12 * fVar1;
              fVar17 = fVar17 + pfVar12[1] * fVar1;
              fVar18 = fVar18 + pfVar12[2] * fVar1;
              fVar19 = fVar19 + pfVar12[3] * fVar1;
              lVar13 = lVar13 + 1;
              pfVar12 = pfVar12 + *(longlong *)(lVar4 + 0x18);
            } while (*(longlong *)(lVar4 + 0x30) != lVar13);
          }
          pfVar12 = (float *)(((longlong *)*param_1)[1] * lVar11 * 4 + *(longlong *)*param_1 +
                             lVar7 * 4);
          *pfVar12 = fVar16;
          pfVar12[1] = fVar17;
          pfVar12[2] = fVar18;
          pfVar12[3] = fVar19;
          lVar7 = lVar7 + 4;
          lVar6 = lVar6 + 0x10;
        } while (lVar7 < lVar8);
      }
      for (; lVar8 < lVar3; lVar8 = lVar8 + 1) {
        FUN_149899e6c(param_1,lVar8,lVar11);
      }
      uVar9 = lVar10 + uVar14;
      uVar5 = uVar14 + lVar10 + 3;
      if (-1 < (longlong)uVar9) {
        uVar5 = uVar9;
      }
      lVar10 = uVar9 - (uVar5 & 0xfffffffffffffffc);
      if (lVar3 < lVar10) {
        lVar10 = lVar3;
      }
      lVar11 = lVar11 + 1;
      lVar15 = lVar15 + 4;
    } while (lVar11 != lVar2);
  }
  return;
}



// FUNCTION 149899e6c FUN_149899e6c body=137 status=ok
// SIG undefined FUN_149899e6c(void)

void FUN_149899e6c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  
  plVar1 = (longlong *)((longlong *)param_1[1])[1];
  lVar2 = plVar1[1];
  if (lVar2 == 0) {
    fVar8 = 0.0;
  }
  else {
    plVar3 = *(longlong **)param_1[1];
    lVar5 = *plVar3;
    pfVar7 = (float *)(lVar2 * param_3 * 4 + *plVar1);
    fVar8 = *pfVar7 * *(float *)(lVar5 + param_2 * 4);
    if (1 < lVar2) {
      lVar4 = plVar3[1];
      pfVar6 = (float *)(lVar5 + param_2 * 4 + lVar4 * 4);
      lVar5 = 1;
      do {
        fVar8 = fVar8 + pfVar7[lVar5] * *pfVar6;
        lVar5 = lVar5 + 1;
        pfVar6 = pfVar6 + lVar4;
      } while (lVar2 != lVar5);
    }
  }
  *(float *)(param_3 * ((longlong *)*param_1)[1] * 4 + *(longlong *)*param_1 + param_2 * 4) = fVar8;
  return;
}



// FUNCTION 149899ef5 FUN_149899ef5 body=340 status=ok
// SIG undefined FUN_149899ef5(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_149899ef5(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Dst;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined1 in_XMM2 [16];
  undefined1 auVar8 [16];
  undefined1 in_XMM3 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  
  lVar5 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  if ((param_1[1] != lVar5) || (param_1[2] != lVar4)) {
    FUN_1475090be(param_1);
    lVar5 = param_1[1];
    lVar4 = param_1[2];
  }
  auVar2 = _DAT_149931e80;
  lVar4 = lVar4 * lVar5;
  if (0 < lVar4) {
    iVar1 = *(int *)(param_2 + 0x18);
    _Dst = (void *)*param_1;
    if (iVar1 == 0) {
      memset(_Dst,0,lVar4 * 4);
      return;
    }
    lVar5 = lVar4 + -1;
    auVar6._8_4_ = (int)lVar5;
    auVar6._0_8_ = lVar5;
    auVar6._12_4_ = (int)((ulonglong)lVar5 >> 0x20);
    uVar3 = 0;
    auVar8 = pmovsxbq(in_XMM2,0x302);
    auVar9 = pmovsxbq(in_XMM3,0x100);
    auVar6 = auVar6 ^ _DAT_149931e80;
    do {
      lVar5 = auVar6._0_8_;
      lVar7 = auVar6._8_8_;
      if ((bool)(~(lVar5 < (longlong)(uVar3 ^ auVar2._0_8_)) & 1)) {
        *(int *)((longlong)_Dst + uVar3 * 4) = iVar1;
      }
      auVar10._8_4_ = (int)uVar3;
      auVar10._0_8_ = uVar3;
      auVar10._12_4_ = (int)(uVar3 >> 0x20);
      if ((longlong)((auVar10._8_8_ | auVar9._8_8_) ^ auVar2._8_8_) <= lVar7) {
        *(int *)((longlong)_Dst + uVar3 * 4 + 4) = iVar1;
      }
      auVar10 = (auVar10 | auVar8) ^ auVar2;
      if (auVar10._0_8_ <= lVar5) {
        *(int *)((longlong)_Dst + uVar3 * 4 + 8) = iVar1;
      }
      if (auVar10._8_8_ <= lVar7) {
        *(int *)((longlong)_Dst + uVar3 * 4 + 0xc) = iVar1;
      }
      uVar3 = uVar3 + 4;
    } while ((lVar4 + 3U & 0xfffffffffffffffc) != uVar3);
  }
  return;
}



// FUNCTION 14989a04a FUN_14989a04a body=215 status=ok
// SIG undefined FUN_14989a04a(void)

void FUN_14989a04a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)*param_3 * *(float *)*param_2;
      if (1 < lVar1) {
        lVar2 = 1;
        do {
          fVar3 = fVar3 + ((float *)*param_3)[lVar2] * ((float *)*param_2)[lVar2];
          lVar2 = lVar2 + 1;
        } while (lVar1 != lVar2);
      }
    }
    *(float *)*param_1 = *param_4 * fVar3 + *(float *)*param_1;
  }
  else {
    local_18 = *param_3;
    local_38 = *param_4;
    local_48 = *param_1;
    local_10 = 1;
    local_28 = *param_2;
    local_40 = 1;
    local_20 = lVar1;
    FUN_147509b58(lVar1,param_2[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989a122 FUN_14989a122 body=267 status=ok
// SIG undefined FUN_14989a122(void)

void FUN_14989a122(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  float *pfVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_3[2] == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar4 = 0.0;
    }
    else {
      pfVar2 = (float *)*param_2;
      fVar4 = *(float *)*param_3 * *pfVar2;
      if (1 < lVar1) {
        lVar3 = 1;
        do {
          pfVar2 = pfVar2 + *(longlong *)(param_2[3] + 8);
          fVar4 = fVar4 + ((float *)*param_3)[lVar3] * *pfVar2;
          lVar3 = lVar3 + 1;
        } while (lVar1 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_58 = param_2[6];
    local_88 = *param_2;
    uStack_80 = param_2[1];
    local_78 = param_2[2];
    uStack_70 = param_2[3];
    local_68 = param_2[4];
    uStack_60 = param_2[5];
    local_18 = param_1[6];
    local_48 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = *(undefined4 *)(param_1 + 1);
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_28 = *(undefined4 *)(param_1 + 4);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_20 = *(undefined4 *)(param_1 + 5);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_90 = param_3;
    FUN_14989a22e(&local_90,&local_88,&local_48);
  }
  if ((local_8 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989a22e FUN_14989a22e body=374 status=ok
// SIG undefined FUN_14989a22e(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14989a22e(longlong *param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined1 local_48 [8];
  
  local_60 = DAT_14c707940 ^ (ulonglong)local_48;
  puVar3 = (undefined8 *)*param_1;
  puVar13 = (undefined4 *)*param_2;
  uVar4 = param_2[2];
  lVar5 = param_2[3];
  uVar2 = *param_4;
  if (uVar4 >> 0x3e != 0) {
    FUN_14494321d();
  }
  uVar1 = uVar4 * 4;
  if (uVar1 < 0x20001) {
    lVar9 = -(uVar1 + 0x1e & 0xfffffffffffffff0);
    puVar12 = auStack_88 + lVar9;
    puVar10 = auStack_88 + lVar9;
  }
  else {
    puVar10 = (undefined1 *)FUN_14001cc68(uVar1,0x10);
    puVar12 = auStack_88;
    if (puVar10 == (undefined1 *)0x0) {
      FUN_14494321d();
      puVar12 = auStack_88;
      puVar10 = (undefined1 *)0x0;
    }
  }
  if (0 < (longlong)uVar4) {
    lVar5 = *(longlong *)(lVar5 + 8);
    uVar11 = 0;
    do {
      *(undefined4 *)(puVar10 + uVar11 * 4) = *puVar13;
      uVar11 = uVar11 + 1;
      puVar13 = puVar13 + lVar5;
    } while (uVar4 != uVar11);
  }
  uVar6 = *param_3;
  uVar7 = *(undefined8 *)(param_3[3] + 8);
  local_68 = 1;
  local_80 = *puVar3;
  local_78 = puVar3[1];
  uVar8 = puVar3[2];
  local_70 = puVar10;
  *(undefined4 *)(puVar12 + -0x10) = uVar2;
  *(undefined8 *)(puVar12 + -0x18) = uVar7;
  *(undefined8 *)(puVar12 + -0x20) = uVar6;
  *(undefined8 *)(puVar12 + -0x48) = 0x14989a31d;
  FUN_14750a274(uVar8);
  if (0x20000 < uVar1) {
    *(undefined8 *)(puVar12 + -0x28) = 0x14989a336;
    FUN_1400020a8(puVar10);
  }
  if ((local_60 ^ (ulonglong)local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + -0x28) = &UNK_14989a3a4;
  FUN_144d8e3a0();
}



// FUNCTION 14989a3aa FUN_14989a3aa body=129 status=ok
// SIG undefined FUN_14989a3aa(void)

void FUN_14989a3aa(longlong *param_1,undefined8 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined4 *)param_1[1];
  if (param_3 == -1) {
    param_3 = *(longlong *)(puVar1 + 4);
  }
  puVar2 = (undefined8 *)*param_1;
  FUN_14750b050(param_2,param_3,puVar2[2],*puVar2,puVar2[1],*puVar1,puVar1[2],
                *(undefined8 *)param_1[2],1,((undefined8 *)param_1[2])[1],(int)param_1[3],param_1[4]
                ,0);
  return;
}



// FUNCTION 14989a42b FUN_14989a42b body=275 status=ok
// SIG undefined FUN_14989a42b(void)

void FUN_14989a42b(longlong *param_1,longlong param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined1 *local_78;
  undefined8 local_70;
  longlong *local_68;
  longlong local_60;
  longlong local_58;
  undefined1 local_50 [8];
  longlong local_48;
  longlong lStack_40;
  float local_34;
  longlong lStack_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_48 = **(longlong **)(param_2 + 8);
  lStack_40 = (*(longlong **)(param_2 + 8))[1];
  local_34 = *(float *)(param_2 + 0x30);
  plVar4 = *(longlong **)(param_2 + 0x38);
  lStack_28 = *plVar4;
  local_58 = plVar4[1];
  lVar11 = plVar4[2];
  local_20 = local_58;
  if ((param_1[1] != local_58) || (param_1[2] != lVar11)) {
    FUN_1475090be(param_1);
    local_58 = param_1[1];
    lVar11 = param_1[2];
  }
  local_60 = *param_1;
  local_80 = &local_60;
  local_78 = local_50;
  uVar13 = lVar11 * local_58;
  uVar12 = uVar13 + 3;
  if (-1 < (longlong)uVar13) {
    uVar12 = uVar13;
  }
  if (3 < (longlong)uVar13) {
    lVar11 = 0;
    do {
      pfVar1 = (float *)(lStack_28 + lVar11 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar2 = (float *)(local_48 + lVar11 * 4);
      fVar8 = pfVar2[1];
      fVar9 = pfVar2[2];
      fVar10 = pfVar2[3];
      pfVar3 = (float *)(local_60 + lVar11 * 4);
      *pfVar3 = local_34 * *pfVar1 + *pfVar2;
      pfVar3[1] = local_34 * fVar5 + fVar8;
      pfVar3[2] = local_34 * fVar6 + fVar9;
      pfVar3[3] = local_34 * fVar7 + fVar10;
      lVar11 = lVar11 + 4;
    } while (lVar11 < (longlong)(uVar12 & 0xfffffffffffffffc));
  }
  local_70 = param_3;
  local_68 = param_1;
  FUN_14989a540(&local_80);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989a540 FUN_14989a540 body=53 status=ok
// SIG undefined FUN_14989a540(void)

void FUN_14989a540(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  
  if (param_2 < param_3) {
    do {
      lVar1 = param_1[1];
      *(float *)(*(longlong *)*param_1 + param_2 * 4) =
           *(float *)(lVar1 + 0x1c) * *(float *)(*(longlong *)(lVar1 + 0x28) + param_2 * 4) +
           *(float *)(*(longlong *)(lVar1 + 8) + param_2 * 4);
      param_2 = param_2 + 1;
    } while (param_3 != param_2);
  }
  return;
}



// FUNCTION 14989a576 FUN_14989a576 body=99 status=ok
// SIG undefined FUN_14989a576(void)

void FUN_14989a576(undefined8 param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(*param_2 + 8);
  lVar3 = *(longlong *)(*param_2 + 0x10);
  if ((lVar2 != 0 && lVar3 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(lVar2),0) < lVar3)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(lVar2),0));
    lVar2 = *(longlong *)(*param_2 + 8);
    lVar3 = *(longlong *)(*param_2 + 0x10);
  }
  FUN_1475090be(param_1,lVar3,lVar2);
  return;
}



// FUNCTION 14989a5da FUN_14989a5da body=60 status=ok
// SIG undefined FUN_14989a5da(void)

void FUN_14989a5da(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(lVar1 + 0x10)) ||
     (*(longlong *)(param_1 + 0x10) != *(longlong *)(lVar1 + 8))) {
    FUN_1475090be(param_1);
    lVar1 = *param_2;
  }
  FUN_14989a616(lVar1,param_1);
  return;
}



// FUNCTION 14989a616 FUN_14989a616 body=198 status=ok
// SIG undefined FUN_14989a616(void)

void FUN_14989a616(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_f8 [40];
  undefined8 local_d0 [3];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140eb79ee(local_d0,param_1);
  FUN_140eb81b4(&local_90,local_d0);
  local_48 = local_40;
  local_38 = local_80;
  local_30 = local_88;
  local_50 = &local_90;
  FUN_14989a6de(param_2);
  FUN_1400020a8(local_68);
  FUN_1400020a8(local_78);
  FUN_1400020a8(local_90);
  FUN_1400020a8(local_a8);
  FUN_1400020a8(local_b8);
  FUN_1400020a8(local_d0[0]);
  if ((local_20 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989a6de FUN_14989a6de body=71 status=ok
// SIG undefined FUN_14989a6de(void)

void FUN_14989a6de(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(lVar1 + 0x10)) ||
     (*(longlong *)(param_1 + 0x10) != *(longlong *)(lVar2 + 0x10))) {
    FUN_1475090be(param_1,*(longlong *)(lVar1 + 0x10));
    lVar1 = *param_2;
    lVar2 = param_2[1];
  }
  FUN_14989a726(lVar1,lVar2,param_1);
  return;
}



// FUNCTION 14989a726 FUN_14989a726 body=132 status=ok
// SIG undefined FUN_14989a726(void)

void FUN_14989a726(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_1 + 0x18;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  local_28 = param_2[4];
  uStack_24 = param_2[5];
  uStack_20 = param_2[6];
  uStack_1c = param_2[7];
  FUN_14989a7bc(param_3,&local_40);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14989a9aa(param_1,param_3);
    if (*(longlong *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989a7bc FUN_14989a7bc body=494 status=ok
// SIG undefined FUN_14989a7bc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14989a7bc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  longlong *plVar5;
  longlong lVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 in_XMM0 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar9 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar10 [16];
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  longlong lVar12;
  undefined1 auVar13 [16];
  longlong lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  undefined4 uVar18;
  longlong lVar16;
  
  plVar5 = (longlong *)*param_2;
  if ((param_1[1] != plVar5[1]) || (param_1[2] != param_2[3])) {
    in_XMM0._0_8_ = FUN_1475090be(param_1);
    in_XMM0._8_8_ = extraout_XMM0_Qb;
    plVar5 = (longlong *)*param_2;
  }
  auVar4 = _DAT_149931e80;
  lVar1 = param_2[2];
  if (0 < lVar1) {
    lVar6 = 0;
    auVar9 = pmovsxbq(in_XMM0,0x302);
    auVar10 = pmovsxbq(in_XMM1,0x100);
    auVar11 = pmovsxbq(in_XMM5,0x404);
    do {
      lVar2 = param_1[2];
      if (0 < lVar2) {
        lVar3 = param_1[1];
        puVar7 = (undefined4 *)((longlong)*(int *)(*plVar5 + lVar6 * 4) * 4 + *param_1);
        lVar8 = lVar2 + -1;
        auVar13._8_4_ = (int)lVar8;
        auVar13._0_8_ = lVar8;
        auVar13._12_4_ = (int)((ulonglong)lVar8 >> 0x20);
        lVar8 = 0;
        auVar15 = auVar10;
        auVar17 = auVar9;
        do {
          lVar16 = lVar6 + lVar8;
          lVar12 = SUB168(auVar13 ^ auVar4,0);
          lVar14 = SUB168(auVar13 ^ auVar4,8);
          if ((bool)(~(lVar12 < SUB168(auVar15 ^ auVar4,0)) & 1)) {
            uVar18 = 0x3f800000;
            if (lVar16 != 0) {
              uVar18 = 0;
            }
            *puVar7 = uVar18;
          }
          if (SUB168(auVar15 ^ auVar4,8) <= lVar14) {
            uVar18 = 0x3f800000;
            if (lVar16 != 1) {
              uVar18 = 0;
            }
            puVar7[lVar3] = uVar18;
          }
          if (SUB168(auVar17 ^ auVar4,0) <= lVar12) {
            uVar18 = 0x3f800000;
            if (lVar16 != 2) {
              uVar18 = 0;
            }
            puVar7[lVar3 * 2] = uVar18;
          }
          if (SUB168(auVar17 ^ auVar4,8) <= lVar14) {
            uVar18 = 0x3f800000;
            if (lVar16 != 3) {
              uVar18 = 0;
            }
            puVar7[lVar3 * 3] = uVar18;
          }
          lVar16 = auVar15._8_8_;
          auVar15._0_8_ = auVar15._0_8_ + auVar11._0_8_;
          auVar15._8_8_ = lVar16 + auVar11._8_8_;
          lVar16 = auVar17._8_8_;
          auVar17._0_8_ = auVar17._0_8_ + auVar11._0_8_;
          auVar17._8_8_ = lVar16 + auVar11._8_8_;
          puVar7 = puVar7 + lVar3 * 4;
          lVar8 = lVar8 + -4;
        } while (-lVar8 != (lVar2 + 3U & 0xfffffffffffffffc));
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != lVar1);
  }
  return;
}



// FUNCTION 14989a9aa FUN_14989a9aa body=239 status=ok
// SIG undefined FUN_14989a9aa(void)

void FUN_14989a9aa(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = param_1[1];
  lVar2 = param_2[2];
  local_68 = param_2[1];
  local_78 = 0;
  uStack_70 = 0;
  local_60 = lVar2;
  local_58 = lVar1;
  local_38 = lVar2;
  FUN_140eb83c2(&local_58,&local_68,&local_38,1);
  local_50 = local_68 * local_58;
  local_48 = local_58 * local_60;
  local_98 = *param_2;
  local_88 = param_2[1];
  local_80 = &local_78;
  local_90 = 1;
  FUN_140eb9374(lVar1,lVar2,*param_1,param_1[1]);
  FUN_1400020a8(local_78);
  FUN_1400020a8(uStack_70);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989ab8a FUN_14989ab8a body=104 status=ok
// SIG undefined FUN_14989ab8a(void)

void FUN_14989ab8a(undefined8 param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_14989abf4(&local_38);
  FUN_149897eb8(param_1,&local_38,&local_39);
  FUN_1400020a8(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989abf4 FUN_14989abf4 body=71 status=ok
// SIG undefined FUN_14989abf4(void)

void FUN_14989abf4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = param_2[2];
  if ((*(longlong *)(param_1 + 8) != *(longlong *)(*param_2 + 8)) ||
     (*(longlong *)(param_1 + 0x10) != *(longlong *)(lVar1 + 0x10))) {
    FUN_1475090be(param_1,*(longlong *)(*param_2 + 8),*(longlong *)(lVar1 + 0x10));
    lVar1 = param_2[2];
  }
  FUN_14989ac3c(param_1,param_2,lVar1);
  return;
}



// FUNCTION 14989ac3c FUN_14989ac3c body=182 status=ok
// SIG undefined FUN_14989ac3c(void)

void FUN_14989ac3c(longlong param_1,undefined4 *param_2,longlong param_3)

{
  undefined1 auStack_78 [47];
  undefined1 local_49;
  undefined4 local_48;
  undefined4 uStack_44;
  longlong lStack_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lStack_40 = *(longlong *)(param_1 + 8);
  local_38 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong *)(param_3 + 8) < 1) || (0x13 < *(longlong *)(param_3 + 8) + lStack_40 + local_38)
     ) {
    local_30 = 0;
    FUN_149899ef5(param_1,&local_48);
    local_48 = 0x3f800000;
    FUN_14989acf4(param_1,param_2,param_3,&local_48);
  }
  else {
    local_48 = *param_2;
    uStack_44 = param_2[1];
    lStack_40 = *(longlong *)(param_2 + 2);
    local_38 = param_3;
    FUN_14989af06(param_1,&local_48,&local_49);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989acf4 FUN_14989acf4 body=529 status=ok
// SIG undefined FUN_14989acf4(void)

void FUN_14989acf4(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined8 *local_c8;
  longlong *plStack_c0;
  undefined8 *local_b8;
  longlong *plStack_b0;
  undefined8 *local_a8;
  longlong lStack_a0;
  longlong *local_98;
  undefined8 local_88;
  longlong lStack_80;
  longlong local_78;
  undefined8 *puStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((*(longlong *)(param_2[1] + 0x10) != 0) && (*(longlong *)(*param_2 + 8) != 0)) &&
     (param_3[2] != 0)) {
    puStack_70 = param_1;
    if (param_1[2] == 1) {
      local_88 = *param_1;
      lStack_80 = param_1[1];
      local_68 = 0;
      lStack_60 = 0;
      local_c8 = (undefined8 *)*param_3;
      plStack_c0 = (longlong *)param_3[1];
      local_a8 = (undefined8 *)0x0;
      lStack_a0 = 0;
      plStack_b0 = param_3;
      local_98 = plStack_c0;
      local_58 = lStack_80;
      FUN_14989b1b0(&local_88,param_2,&local_c8,param_4);
    }
    else if (param_1[1] == 1) {
      local_88 = *param_1;
      local_68 = 0;
      lStack_60 = 0;
      local_58 = 1;
      local_c8 = (undefined8 *)*param_2;
      plStack_c0 = (longlong *)param_2[1];
      local_b8 = (undefined8 *)0x0;
      plStack_b0 = (longlong *)0x0;
      lStack_a0 = *(longlong *)(param_2[1] + 0x10);
      local_78 = param_1[2];
      FUN_14989b36a(&local_88,&local_c8,param_3,param_4);
    }
    else {
      local_e8 = 0;
      uStack_e0 = 0;
      local_d8 = 0;
      FUN_149899944(&local_e8,param_2);
      FUN_1498999b0(&local_e8,param_2);
      uVar1 = *param_4;
      local_78 = param_1[1];
      puStack_70 = (undefined8 *)param_1[2];
      local_88 = 0;
      lStack_80 = 0;
      local_68 = local_d8;
      FUN_14750ac12(&local_68,&local_78,&puStack_70,1);
      lStack_60 = local_78 * local_68;
      local_58 = local_68 * (longlong)puStack_70;
      plStack_b0 = (longlong *)CONCAT44(plStack_b0._4_4_,uVar1);
      local_a8 = &local_88;
      local_c8 = &local_e8;
      plStack_c0 = param_3;
      local_b8 = param_1;
      FUN_14989a3aa(&local_c8,*(undefined8 *)(*param_2 + 8),param_3[2]);
      FUN_1400020a8(local_88);
      FUN_1400020a8(lStack_80);
      FUN_1400020a8(local_e8);
    }
  }
  if ((local_50 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989af06 FUN_14989af06 body=223 status=ok
// SIG undefined FUN_14989af06(void)

void FUN_14989af06(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1498999b0(&local_78);
  local_60 = (undefined4 *)param_2[2];
  local_58 = local_78;
  uStack_50 = uStack_70;
  local_48 = *local_60;
  uStack_44 = local_60[1];
  uStack_40 = local_60[2];
  uStack_3c = local_60[3];
  local_38 = *(undefined8 *)(param_2[1] + 0x10);
  local_80 = *(longlong *)(*param_2 + 8);
  if ((param_1[1] != local_80) || (param_1[2] != *(longlong *)(local_60 + 4))) {
    FUN_1475090be(param_1);
    local_80 = param_1[1];
  }
  local_88 = *param_1;
  local_a8 = &local_88;
  local_a0 = &local_78;
  local_98 = param_3;
  local_90 = param_1;
  FUN_14989afe6();
  FUN_1400020a8(local_78);
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989afe6 FUN_14989afe6 body=324 status=ok
// SIG undefined FUN_14989afe6(void)

void FUN_14989afe6(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar2 = *(longlong *)(param_1[3] + 0x10);
  if (0 < lVar2) {
    lVar3 = *(longlong *)(param_1[3] + 8);
    uVar14 = (ulonglong)(-(int)lVar3 & 3);
    lVar15 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      if (0 < lVar10) {
        lVar8 = 0;
        do {
          FUN_14989b12a(param_1,lVar8,lVar11);
          lVar8 = lVar8 + 1;
        } while (lVar10 != lVar8);
      }
      uVar5 = lVar3 - lVar10 & 0xfffffffffffffffc;
      lVar8 = uVar5 + lVar10;
      if (0 < (longlong)uVar5) {
        lVar6 = lVar10 * 4;
        lVar7 = lVar10;
        do {
          lVar4 = param_1[1];
          if (*(longlong *)(lVar4 + 0x40) < 1) {
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          else {
            pfVar12 = (float *)(*(longlong *)(lVar4 + 0x20) + lVar6);
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            lVar13 = 0;
            do {
              fVar1 = *(float *)(*(longlong *)(lVar4 + 0x38) * lVar15 + *(longlong *)(lVar4 + 0x30)
                                + lVar13 * 4);
              fVar16 = fVar16 + *pfVar12 * fVar1;
              fVar17 = fVar17 + pfVar12[1] * fVar1;
              fVar18 = fVar18 + pfVar12[2] * fVar1;
              fVar19 = fVar19 + pfVar12[3] * fVar1;
              lVar13 = lVar13 + 1;
              pfVar12 = pfVar12 + *(longlong *)(lVar4 + 0x28);
            } while (*(longlong *)(lVar4 + 0x40) != lVar13);
          }
          pfVar12 = (float *)(((longlong *)*param_1)[1] * lVar11 * 4 + *(longlong *)*param_1 +
                             lVar7 * 4);
          *pfVar12 = fVar16;
          pfVar12[1] = fVar17;
          pfVar12[2] = fVar18;
          pfVar12[3] = fVar19;
          lVar7 = lVar7 + 4;
          lVar6 = lVar6 + 0x10;
        } while (lVar7 < lVar8);
      }
      for (; lVar8 < lVar3; lVar8 = lVar8 + 1) {
        FUN_14989b12a(param_1,lVar8,lVar11);
      }
      uVar9 = lVar10 + uVar14;
      uVar5 = uVar14 + lVar10 + 3;
      if (-1 < (longlong)uVar9) {
        uVar5 = uVar9;
      }
      lVar10 = uVar9 - (uVar5 & 0xfffffffffffffffc);
      if (lVar3 < lVar10) {
        lVar10 = lVar3;
      }
      lVar11 = lVar11 + 1;
      lVar15 = lVar15 + 4;
    } while (lVar11 != lVar2);
  }
  return;
}



// FUNCTION 14989b12a FUN_14989b12a body=134 status=ok
// SIG undefined FUN_14989b12a(void)

void FUN_14989b12a(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  
  plVar1 = (longlong *)param_1[1];
  lVar2 = ((longlong *)plVar1[3])[1];
  if (lVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    pfVar5 = (float *)(lVar2 * param_3 * 4 + *(longlong *)plVar1[3]);
    fVar6 = *pfVar5 * *(float *)(*plVar1 + param_2 * 4);
    if (1 < lVar2) {
      pfVar4 = (float *)(*plVar1 + param_2 * 4 + plVar1[1] * 4);
      lVar3 = 1;
      do {
        fVar6 = fVar6 + pfVar5[lVar3] * *pfVar4;
        lVar3 = lVar3 + 1;
        pfVar4 = pfVar4 + plVar1[1];
      } while (lVar2 != lVar3);
    }
  }
  *(float *)(param_3 * ((longlong *)*param_1)[1] * 4 + *(longlong *)*param_1 + param_2 * 4) = fVar6;
  return;
}



// FUNCTION 14989b1b0 FUN_14989b1b0 body=440 status=ok
// SIG undefined FUN_14989b1b0(void)

void FUN_14989b1b0(undefined8 *param_1,longlong *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined8 local_130;
  float local_128;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_158;
  if (*(longlong *)(*param_2 + 8) == 1) {
    fVar1 = *param_4;
    local_b8 = *(undefined8 *)(param_2[1] + 0x10);
    local_b0 = *param_3;
    local_a8 = param_3[1];
    local_f0 = param_3[2];
    local_100 = *param_3;
    uStack_f8 = param_3[1];
    local_80 = param_3[3];
    local_50 = *(undefined8 *)(local_80 + 8);
    lStack_e0 = *param_2;
    lStack_d8 = param_2[1];
    local_d0 = 0;
    uStack_c8 = 0;
    local_78 = param_3[4];
    uStack_70 = param_3[5];
    local_68 = param_3[6];
    local_60 = 0;
    fVar2 = 0.0;
    uStack_98 = local_100;
    local_90 = uStack_f8;
    local_88 = local_f0;
    if (local_a8 != 0) {
      fVar2 = (float)FUN_14989b4c4(&local_e8);
    }
    *(float *)*param_1 = fVar1 * fVar2 + *(float *)*param_1;
  }
  else {
    local_e8 = 0;
    lStack_e0 = 0;
    lStack_d8 = 0;
    FUN_1498999b0(&local_e8);
    local_108 = *param_3;
    local_128 = *param_4;
    local_138 = *param_1;
    local_100 = 1;
    local_118 = local_e8;
    local_110 = lStack_e0;
    local_130 = 1;
    FUN_147509b58(lStack_e0,lStack_d8);
    FUN_1400020a8(local_e8);
  }
  if ((local_40 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989b36a FUN_14989b36a body=345 status=ok
// SIG undefined FUN_14989b36a(void)

void FUN_14989b36a(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (param_3[2] == 1) {
    fVar1 = *param_4;
    uStack_d0 = *param_2;
    uStack_c8 = param_2[1];
    local_c0 = *(undefined4 *)(param_2 + 2);
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x14);
    uStack_b8 = *(undefined4 *)(param_2 + 3);
    uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x1c);
    local_b0 = *(undefined4 *)(param_2 + 4);
    uStack_ac = *(undefined4 *)((longlong)param_2 + 0x24);
    uStack_a8 = param_2[5];
    local_88 = param_2[5];
    local_80 = *param_3;
    local_78 = param_3[1];
    local_98 = 0;
    local_60 = 0;
    uStack_58 = 0;
    fVar2 = 0.0;
    local_68 = param_3;
    local_50 = local_78;
    if (local_78 != 0) {
      fVar2 = (float)FUN_14989b616(&local_d8);
    }
    *(float *)*param_1 = fVar1 * fVar2 + *(float *)*param_1;
  }
  else {
    local_f8 = 0;
    uStack_f0 = 0;
    FUN_14989b715(&local_f8);
    uStack_a8 = param_1[6];
    local_d8 = *(undefined4 *)param_1;
    uStack_d4 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_d0 = param_1[1];
    uStack_c8 = param_1[2];
    local_c0 = *(undefined4 *)(param_1 + 3);
    uStack_bc = *(undefined4 *)((longlong)param_1 + 0x1c);
    uStack_b8 = *(undefined4 *)(param_1 + 4);
    uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x24);
    local_b0 = *(undefined4 *)(param_1 + 5);
    uStack_ac = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_e8 = param_3;
    local_e0 = &local_f8;
    FUN_14989b826(&local_e8,&local_e0,&local_d8,param_4);
    FUN_1400020a8(local_f8);
  }
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989b4c4 FUN_14989b4c4 body=238 status=ok
// SIG undefined FUN_14989b4c4(void)

float FUN_14989b4c4(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_b8 [48];
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_60;
  longlong local_58;
  float *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14989b5b4(&local_88,param_1 + 8);
  local_60 = *(longlong *)(param_1 + 0x18);
  local_58 = *(longlong *)(param_1 + 0x20);
  local_48 = *(float **)(param_1 + 0x38);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x68) + 8);
  fVar3 = *local_48 * *(float *)(local_88 + local_80 * local_58 * 4 + local_60 * 4);
  if (1 < *(longlong *)(param_1 + 0x40)) {
    pfVar1 = (float *)(local_88 + local_60 * 4 + (local_58 + 1) * local_80 * 4);
    lVar2 = 1;
    do {
      fVar3 = fVar3 + local_48[lVar2] * *pfVar1;
      lVar2 = lVar2 + 1;
      pfVar1 = pfVar1 + local_80;
    } while (*(longlong *)(param_1 + 0x40) != lVar2);
  }
  FUN_1400020a8(local_78);
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989b5b4 FUN_14989b5b4 body=97 status=ok
// SIG undefined FUN_14989b5b4(void)

undefined8 * FUN_14989b5b4(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  param_1[1] = 0xffffffffffffffff;
  uVar1 = *(undefined8 *)(param_2[1] + 0x10);
  uVar2 = *(undefined8 *)(*param_2 + 8);
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1475090be(param_1 + 2,uVar2,uVar1);
  *(undefined4 *)param_1 = *(undefined4 *)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)((longlong)param_1 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_1 + 3);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_1 + 0x1c);
  FUN_1498999fa(param_1 + 2,*param_2,param_2[1]);
  return param_1;
}



// FUNCTION 14989b616 FUN_14989b616 body=254 status=ok
// SIG undefined FUN_14989b616(void)

float FUN_14989b616(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  longlong local_78;
  longlong local_70;
  longlong local_58;
  longlong local_50;
  float *local_48;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14989b5b4(&local_a0,param_1 + 8);
  local_78 = *(longlong *)(param_1 + 0x18);
  local_70 = *(longlong *)(param_1 + 0x20);
  local_58 = *(longlong *)(param_1 + 0x40);
  local_48 = *(float **)(param_1 + 0x58);
  local_38 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 8);
  fVar3 = *local_48 * *(float *)(local_a0 + (local_58 + local_70) * local_98 * 4 + local_78 * 4);
  if (1 < *(longlong *)(param_1 + 0x60)) {
    pfVar1 = (float *)(local_a0 + local_78 * 4 + (local_70 + local_58 + 1) * local_98 * 4);
    lVar2 = 1;
    do {
      fVar3 = fVar3 + local_48[lVar2] * *pfVar1;
      lVar2 = lVar2 + 1;
      pfVar1 = pfVar1 + local_98;
    } while (*(longlong *)(param_1 + 0x60) != lVar2);
  }
  local_50 = local_58;
  FUN_1400020a8(local_90);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return fVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989b715 FUN_14989b715 body=178 status=ok
// SIG undefined FUN_14989b715(void)

void FUN_14989b715(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_38;
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14989b5b4();
  local_38 = *(longlong *)(param_2 + 0x10);
  local_30 = *(longlong *)(param_2 + 0x18);
  lVar3 = *(longlong *)(param_2 + 0x28);
  if (param_1[1] != lVar3) {
    FUN_14989b7c8();
    lVar3 = param_1[1];
  }
  if (0 < lVar3) {
    lVar1 = *param_1;
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar1 + lVar2 * 4) =
           *(undefined4 *)((local_30 + lVar2) * local_58 * 4 + local_60 + local_38 * 4);
      lVar2 = lVar2 + 1;
    } while (lVar3 != lVar2);
  }
  FUN_1400020a8(local_50);
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989b7c8 FUN_14989b7c8 body=94 status=ok
// SIG undefined FUN_14989b7c8(void)

void FUN_14989b7c8(undefined8 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  if ((param_2 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(param_2),0) < 1)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(param_2),0));
  }
  if (param_1[1] != param_2) {
    FUN_1400020a8(*param_1);
    if (param_2 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_141729e88(param_2);
    }
    *param_1 = uVar2;
  }
  param_1[1] = param_2;
  return;
}



// FUNCTION 14989b826 FUN_14989b826 body=347 status=ok
// SIG undefined FUN_14989b826(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14989b826(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_38 [8];
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_38;
  puVar2 = (undefined8 *)*param_1;
  param_2 = (longlong *)*param_2;
  uVar1 = *param_4;
  if ((ulonglong)param_2[1] >> 0x3e != 0) {
    FUN_14494321d(0xffffffffffffffff);
  }
  puVar11 = auStack_78;
  puVar9 = (undefined1 *)*param_2;
  if (puVar9 == (undefined1 *)0x0) {
    uVar8 = param_2[1] * 4;
    if (uVar8 < 0x20001) {
      lVar3 = -(uVar8 + 0x1e & 0xfffffffffffffff0);
      puVar11 = auStack_78 + lVar3;
      puVar9 = auStack_78 + lVar3;
    }
    else {
      puVar9 = (undefined1 *)FUN_14001cc68(uVar8,0x10);
      puVar11 = auStack_78;
      if (puVar9 == (undefined1 *)0x0) {
        FUN_14494321d(0xffffffffffffffff);
        puVar11 = auStack_78;
        puVar9 = (undefined1 *)0x0;
      }
    }
  }
  lVar3 = *param_2;
  lVar4 = param_2[1];
  uVar5 = *param_3;
  uVar6 = *(undefined8 *)(param_3[3] + 8);
  local_58 = 1;
  local_70 = *puVar2;
  local_68 = puVar2[1];
  uVar7 = puVar2[2];
  local_60 = puVar9;
  *(undefined4 *)(puVar11 + -0x10) = uVar1;
  *(undefined8 *)(puVar11 + -0x18) = uVar6;
  *(undefined8 *)(puVar11 + -0x20) = uVar5;
  *(undefined8 *)(puVar11 + -0x48) = 0x14989b8f8;
  FUN_14750a274(uVar7);
  if (0x20000 < (ulonglong)(lVar4 << 2)) {
    puVar10 = (undefined1 *)0x0;
    if (lVar3 == 0) {
      puVar10 = puVar9;
    }
    *(undefined8 *)(puVar11 + -0x28) = 0x14989b917;
    FUN_1400020a8(puVar10);
  }
  if ((local_50 ^ (ulonglong)local_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar11 + -0x28) = &UNK_14989b945;
  FUN_144d8e3a0();
}



// FUNCTION 14989b986 FUN_14989b986 body=117 status=ok
// SIG undefined FUN_14989b986(void)

void FUN_14989b986(undefined8 param_1,longlong *param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_2[1] + 0x10);
  lVar2 = *(longlong *)(*param_2 + 8);
  if ((lVar3 != 0 && lVar2 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(lVar3),0) < lVar2)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(lVar3),0));
    lVar2 = *(longlong *)(*param_2 + 8);
    lVar3 = *(longlong *)(param_2[1] + 0x10);
  }
  FUN_146dddaba(param_1,lVar3 * lVar2,1);
  return;
}



// FUNCTION 14989b9fc FUN_14989b9fc body=81 status=ok
// SIG undefined FUN_14989b9fc(void)

void FUN_14989b9fc(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (*(longlong *)(lVar2 + 0x10) != 1 || *(longlong *)(param_1 + 8) != *(longlong *)(lVar1 + 8)) {
    FUN_146dddaba(param_1,*(longlong *)(lVar1 + 8),*(longlong *)(lVar2 + 0x10));
    lVar1 = *param_2;
    lVar2 = param_2[1];
  }
  FUN_14989ba4e(param_1,lVar1,lVar2);
  return;
}



// FUNCTION 14989ba4e FUN_14989ba4e body=180 status=ok
// SIG undefined FUN_14989ba4e(void)

void FUN_14989ba4e(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined1 auStack_68 [39];
  undefined1 local_41;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(param_3 + 8) < 1 || 0x12 < local_38 + *(longlong *)(param_3 + 8)) {
    local_2c = 0;
    FUN_146dde1b2(param_1,&local_40,&local_41);
    local_40 = CONCAT44(local_40._4_4_,0x3f800000);
    FUN_14989bb04(param_1,param_2,param_3,&local_40);
  }
  else {
    local_40 = param_2;
    local_38 = param_3;
    FUN_14989bba7(param_1,&local_40,&local_41);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989bb04 FUN_14989bb04 body=162 status=ok
// SIG undefined FUN_14989bb04(void)

void FUN_14989bb04(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (((*(longlong *)(param_2 + 0x10) != 0) && (*(longlong *)(param_2 + 8) != 0)) &&
     (param_3[2] != 0)) {
    local_40 = *param_1;
    local_38 = param_1[1];
    local_20 = 0;
    local_78 = *param_3;
    local_70 = param_3[1];
    local_58 = 0;
    uStack_50 = 0;
    local_60 = param_3;
    local_48 = local_70;
    local_28 = param_1;
    local_10 = local_38;
    FUN_14989bd70(&local_40,param_2,&local_78);
  }
  if ((local_8 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989bba7 FUN_14989bba7 body=191 status=ok
// SIG undefined FUN_14989bba7(void)

void FUN_14989bba7(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 **local_70;
  undefined8 local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = (undefined8 *)*param_2;
  local_48 = (undefined4 *)param_2[1];
  local_40 = *local_50;
  local_38 = local_50[1];
  local_30 = *local_48;
  uStack_2c = local_48[1];
  uStack_28 = local_48[2];
  uStack_24 = local_48[3];
  local_20 = local_50[2];
  if (*(longlong *)(local_48 + 4) != 1 || param_1[1] != local_38) {
    FUN_146dddaba(param_1);
  }
  local_58 = *param_1;
  local_78 = &local_58;
  local_70 = &local_50;
  local_68 = param_3;
  local_60 = param_1;
  FUN_14989bc68();
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989bc68 FUN_14989bc68 body=264 status=ok
// SIG undefined FUN_14989bc68(void)

void FUN_14989bc68(undefined8 *param_1)

{
  float fVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  float *pfVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  uVar2 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar2 & 0xfffffffffffffffc;
  if (0 < (longlong)uVar6) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      lVar3 = param_1[1];
      if (*(longlong *)(lVar3 + 0x30) < 1) {
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
      }
      else {
        pfVar8 = (float *)(*(longlong *)(lVar3 + 0x10) + lVar9);
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        fVar16 = 0.0;
        lVar7 = 0;
        do {
          fVar1 = *(float *)(*(longlong *)(lVar3 + 0x20) + lVar7 * 4);
          fVar13 = fVar13 + *pfVar8 * fVar1;
          fVar14 = fVar14 + pfVar8[1] * fVar1;
          fVar15 = fVar15 + pfVar8[2] * fVar1;
          fVar16 = fVar16 + pfVar8[3] * fVar1;
          lVar7 = lVar7 + 1;
          pfVar8 = pfVar8 + *(longlong *)(lVar3 + 0x18);
        } while (*(longlong *)(lVar3 + 0x30) != lVar7);
      }
      pfVar8 = (float *)(*(longlong *)*param_1 + lVar11 * 4);
      *pfVar8 = fVar13;
      pfVar8[1] = fVar14;
      pfVar8[2] = fVar15;
      pfVar8[3] = fVar16;
      lVar11 = lVar11 + 4;
      lVar9 = lVar9 + 0x10;
    } while (lVar11 < (longlong)uVar6);
  }
  if (uVar6 != uVar2) {
    uVar10 = uVar2 * 4 & 0xfffffffffffffff0;
    do {
      puVar4 = (undefined8 *)((longlong *)param_1[1])[1];
      lVar9 = puVar4[1];
      if (lVar9 == 0) {
        fVar13 = 0.0;
      }
      else {
        plVar5 = *(longlong **)param_1[1];
        lVar11 = *plVar5;
        pfVar8 = (float *)*puVar4;
        fVar13 = *pfVar8 * *(float *)(lVar11 + uVar6 * 4);
        if (1 < lVar9) {
          lVar3 = plVar5[1];
          pfVar12 = (float *)(lVar11 + uVar10 + lVar3 * 4);
          lVar11 = 1;
          do {
            fVar13 = fVar13 + pfVar8[lVar11] * *pfVar12;
            lVar11 = lVar11 + 1;
            pfVar12 = pfVar12 + lVar3;
          } while (lVar9 != lVar11);
        }
      }
      *(float *)(*(longlong *)*param_1 + uVar6 * 4) = fVar13;
      uVar6 = uVar6 + 1;
      uVar10 = uVar10 + 4;
    } while ((longlong)uVar6 < (longlong)uVar2);
  }
  return;
}



// FUNCTION 14989bd70 FUN_14989bd70 body=215 status=ok
// SIG undefined FUN_14989bd70(void)

void FUN_14989bd70(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_2[1];
  if (lVar1 == 1) {
    lVar1 = param_3[1];
    if (lVar1 == 0) {
      fVar3 = 0.0;
    }
    else {
      fVar3 = *(float *)*param_3 * *(float *)*param_2;
      if (1 < lVar1) {
        lVar2 = 1;
        do {
          fVar3 = fVar3 + ((float *)*param_3)[lVar2] * ((float *)*param_2)[lVar2];
          lVar2 = lVar2 + 1;
        } while (lVar1 != lVar2);
      }
    }
    *(float *)*param_1 = *param_4 * fVar3 + *(float *)*param_1;
  }
  else {
    local_18 = *param_3;
    local_38 = *param_4;
    local_48 = *param_1;
    local_10 = 1;
    local_28 = *param_2;
    local_40 = 1;
    local_20 = lVar1;
    FUN_147509b58(lVar1,param_2[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989be48 FUN_14989be48 body=103 status=ok
// SIG undefined FUN_14989be48(void)

void FUN_14989be48(undefined8 param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_2 + 8);
  lVar3 = *(longlong *)(param_2 + 0x10);
  if ((lVar3 != 0 && lVar2 != 0) &&
     (auVar1 = ZEXT816(0) << 0x40 | ZEXT816(0x7fffffffffffffff),
     SUB168(auVar1 / SEXT816(lVar3),0) < lVar2)) {
    FUN_14494321d(0xffffffffffffffff,SUB168(auVar1 % SEXT816(lVar3),0));
    lVar2 = *(longlong *)(param_2 + 8);
    lVar3 = *(longlong *)(param_2 + 0x10);
  }
  FUN_146dddaba(param_1,lVar3 * lVar2,1);
  return;
}



// FUNCTION 14989beaf FUN_14989beaf body=148 status=ok
// SIG undefined FUN_14989beaf(void)

void FUN_14989beaf(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *param_2;
  local_20 = param_2[1];
  if (param_2[2] != 1 || param_1[1] != local_20) {
    FUN_146dddaba(param_1);
  }
  local_30 = *param_1;
  local_50 = &local_30;
  local_48 = &local_28;
  local_40 = param_3;
  local_38 = param_1;
  FUN_14989bf44();
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989bf44 FUN_14989bf44 body=110 status=ok
// SIG undefined FUN_14989bf44(void)

void FUN_14989bf44(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  uVar3 = *(ulonglong *)(param_1[3] + 8);
  uVar6 = uVar3 + 3;
  if (-1 < (longlong)uVar3) {
    uVar6 = uVar3;
  }
  uVar6 = uVar6 & 0xfffffffffffffffc;
  if (3 < (longlong)uVar3) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(*(longlong *)param_1[1] + lVar5 * 4);
      uVar4 = puVar1[1];
      puVar2 = (undefined8 *)(*(longlong *)*param_1 + lVar5 * 4);
      *puVar2 = *puVar1;
      puVar2[1] = uVar4;
      lVar5 = lVar5 + 4;
    } while (lVar5 < (longlong)uVar6);
  }
  if ((longlong)uVar6 < (longlong)uVar3) {
    do {
      *(undefined4 *)(*(longlong *)*param_1 + uVar6 * 4) =
           *(undefined4 *)(*(longlong *)param_1[1] + uVar6 * 4);
      uVar6 = uVar6 + 1;
    } while (uVar3 != uVar6);
  }
  return;
}



// FUNCTION 14989bfb2 FUN_14989bfb2 body=104 status=ok
// SIG undefined FUN_14989bfb2(void)

void FUN_14989bfb2(undefined8 param_1)

{
  undefined1 auStack_68 [47];
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_14989c01c(&local_38);
  FUN_149897eb8(param_1,&local_38,&local_39);
  FUN_1400020a8(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989c01c FUN_14989c01c body=72 status=ok
// SIG undefined FUN_14989c01c(void)

void FUN_14989c01c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x38);
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if ((*(longlong *)(param_1 + 8) != lVar1) ||
     (*(longlong *)(param_1 + 0x10) != *(longlong *)(lVar2 + 0x10))) {
    FUN_1475090be(param_1,lVar1,*(longlong *)(lVar2 + 0x10));
    lVar2 = *(longlong *)(param_2 + 0x38);
  }
  FUN_14989c064(param_1,param_2,lVar2);
  return;
}



// FUNCTION 14989c064 FUN_14989c064 body=210 status=ok
// SIG undefined FUN_14989c064(void)

void FUN_14989c064(longlong param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_98 [47];
  undefined1 local_69;
  undefined4 local_68 [2];
  longlong local_60;
  longlong local_58;
  ulonglong local_50;
  undefined4 local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = *(longlong *)(param_1 + 0x10);
  if ((*(longlong *)(param_3 + 8) < 1) ||
     (0x13 < *(longlong *)(param_3 + 8) + *(longlong *)(param_1 + 8) + local_58)) {
    local_50 = local_50 & 0xffffffff00000000;
    local_60 = *(longlong *)(param_1 + 8);
    FUN_149899ef5(param_1,local_68);
    local_68[0] = 0x3f800000;
    FUN_14989c138(param_1,param_2,param_3,local_68);
  }
  else {
    local_48 = *(undefined4 *)(param_2 + 0x20);
    local_40 = *(longlong *)(param_2 + 0x28);
    local_50 = *(ulonglong *)(param_3 + 0x10);
    local_58 = *(longlong *)(local_40 + 8);
    local_38 = param_3;
    FUN_14989c30a(param_1,local_68,&local_69);
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989c138 FUN_14989c138 body=465 status=ok
// SIG undefined FUN_14989c138(void)

void FUN_14989c138(longlong *param_1,longlong param_2,longlong *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong *plStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_88;
  longlong local_78;
  longlong *local_70;
  longlong *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined8 uStack_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar3 = *(longlong *)(param_2 + 0x28);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (((lVar4 != 0) && (*(longlong *)(lVar3 + 8) != 0)) && (param_3[2] != 0)) {
    plStack_c0 = (longlong *)param_1[2];
    if (plStack_c0 == (longlong *)&DAT_00000001) {
      local_d8 = *param_1;
      lStack_d0 = param_1[1];
      local_b8 = 0;
      lStack_b0 = 0;
      local_78 = *param_3;
      local_70 = (longlong *)param_3[1];
      local_58 = (longlong *)0x0;
      uStack_50 = 0;
      plStack_c0 = param_1;
      local_a8 = lStack_d0;
      local_60 = param_3;
      local_48 = local_70;
      FUN_14989c5ce(&local_d8,param_2);
    }
    else {
      local_c8 = param_1[1];
      if (local_c8 == 1) {
        local_78 = *param_1;
        local_58 = (longlong *)0x0;
        uStack_50 = 0;
        local_48 = (longlong *)&DAT_00000001;
        local_c8 = *(longlong *)(param_2 + 0x10);
        local_b8 = CONCAT44(local_b8._4_4_,*(undefined4 *)(param_2 + 0x20));
        local_a0 = 0;
        uStack_98 = 0;
        local_68 = plStack_c0;
        plStack_c0 = *(longlong **)(param_2 + 0x18);
        lStack_b0 = lVar3;
        local_88 = lVar4;
        local_60 = param_1;
        FUN_14989c6bc(&local_78,&local_d8,param_3);
      }
      else {
        fVar1 = *param_4;
        fVar2 = *(float *)(param_2 + 0x20);
        local_d8 = 0;
        lStack_d0 = 0;
        local_b8 = lVar4;
        FUN_14750ac12(&local_b8,&local_c8,&plStack_c0,1);
        lStack_b0 = local_c8 * local_b8;
        local_a8 = local_b8 * (longlong)plStack_c0;
        local_60 = (longlong *)CONCAT44(local_60._4_4_,fVar1 * fVar2);
        local_58 = &local_d8;
        local_78 = lVar3;
        local_70 = param_3;
        local_68 = param_1;
        FUN_14989a3aa(&local_78,*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 8),param_3[2]);
        FUN_1400020a8(local_d8);
        FUN_1400020a8(lStack_d0);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989c30a FUN_14989c30a body=213 status=ok
// SIG undefined FUN_14989c30a(void)

void FUN_14989c30a(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [40];
  undefined8 *local_90;
  undefined1 *local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60 [4];
  undefined4 local_5c;
  undefined8 *local_50;
  undefined4 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_5c = *(undefined4 *)(param_2 + 0x20);
  local_50 = *(undefined8 **)(param_2 + 0x28);
  local_48 = *(undefined4 **)(param_2 + 0x30);
  local_40 = *local_50;
  local_68 = local_50[1];
  local_30 = *local_48;
  uStack_2c = local_48[1];
  uStack_28 = local_48[2];
  uStack_24 = local_48[3];
  local_20 = local_50[2];
  local_38 = local_68;
  if ((param_1[1] != local_68) || (param_1[2] != *(longlong *)(local_48 + 4))) {
    FUN_1475090be(param_1);
    local_68 = param_1[1];
  }
  local_70 = *param_1;
  local_90 = &local_70;
  local_88 = local_60;
  local_80 = param_3;
  local_78 = param_1;
  FUN_14989c3e0();
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989c3e0 FUN_14989c3e0 body=347 status=ok
// SIG undefined FUN_14989c3e0(void)

void FUN_14989c3e0(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar2 = *(longlong *)(param_1[3] + 0x10);
  if (0 < lVar2) {
    lVar3 = *(longlong *)(param_1[3] + 8);
    uVar13 = (ulonglong)(-(int)lVar3 & 3);
    lVar14 = 0;
    lVar10 = 0;
    lVar11 = 0;
    do {
      if (0 < lVar10) {
        lVar8 = 0;
        do {
          FUN_14989c53c(param_1,lVar8,lVar11);
          lVar8 = lVar8 + 1;
        } while (lVar10 != lVar8);
      }
      uVar5 = lVar3 - lVar10 & 0xfffffffffffffffc;
      lVar8 = uVar5 + lVar10;
      if (0 < (longlong)uVar5) {
        lVar6 = lVar10 * 4;
        lVar7 = lVar10;
        do {
          lVar4 = param_1[1];
          if (*(longlong *)(lVar4 + 0x40) < 1) {
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
          }
          else {
            pfVar12 = (float *)(*(longlong *)(lVar4 + 0x20) + lVar6);
            fVar16 = 0.0;
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar19 = 0.0;
            lVar15 = 0;
            do {
              fVar1 = *(float *)(*(longlong *)(lVar4 + 0x38) * lVar14 + *(longlong *)(lVar4 + 0x30)
                                + lVar15 * 4);
              fVar16 = fVar16 + *pfVar12 * fVar1;
              fVar17 = fVar17 + pfVar12[1] * fVar1;
              fVar18 = fVar18 + pfVar12[2] * fVar1;
              fVar19 = fVar19 + pfVar12[3] * fVar1;
              lVar15 = lVar15 + 1;
              pfVar12 = pfVar12 + *(longlong *)(lVar4 + 0x28);
            } while (*(longlong *)(lVar4 + 0x40) != lVar15);
          }
          fVar1 = *(float *)(lVar4 + 4);
          pfVar12 = (float *)(((longlong *)*param_1)[1] * lVar11 * 4 + *(longlong *)*param_1 +
                             lVar7 * 4);
          *pfVar12 = fVar1 * fVar16;
          pfVar12[1] = fVar1 * fVar17;
          pfVar12[2] = fVar1 * fVar18;
          pfVar12[3] = fVar1 * fVar19;
          lVar7 = lVar7 + 4;
          lVar6 = lVar6 + 0x10;
        } while (lVar7 < lVar8);
      }
      for (; lVar8 < lVar3; lVar8 = lVar8 + 1) {
        FUN_14989c53c(param_1,lVar8,lVar11);
      }
      uVar9 = lVar10 + uVar13;
      uVar5 = uVar13 + lVar10 + 3;
      if (-1 < (longlong)uVar9) {
        uVar5 = uVar9;
      }
      lVar10 = uVar9 - (uVar5 & 0xfffffffffffffffc);
      if (lVar3 < lVar10) {
        lVar10 = lVar3;
      }
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 4;
    } while (lVar11 != lVar2);
  }
  return;
}



// FUNCTION 14989c53c FUN_14989c53c body=145 status=ok
// SIG undefined FUN_14989c53c(void)

void FUN_14989c53c(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  
  lVar1 = param_1[1];
  lVar2 = (*(longlong **)(lVar1 + 0x18))[1];
  if (lVar2 == 0) {
    fVar7 = 0.0;
  }
  else {
    lVar4 = **(longlong **)(lVar1 + 0x10);
    pfVar6 = (float *)(lVar2 * param_3 * 4 + **(longlong **)(lVar1 + 0x18));
    fVar7 = *pfVar6 * *(float *)(lVar4 + param_2 * 4);
    if (1 < lVar2) {
      lVar3 = (*(longlong **)(lVar1 + 0x10))[1];
      pfVar5 = (float *)(lVar4 + param_2 * 4 + lVar3 * 4);
      lVar4 = 1;
      do {
        fVar7 = fVar7 + pfVar6[lVar4] * *pfVar5;
        lVar4 = lVar4 + 1;
        pfVar5 = pfVar5 + lVar3;
      } while (lVar2 != lVar4);
    }
  }
  *(float *)(param_3 * ((longlong *)*param_1)[1] * 4 + *(longlong *)*param_1 + param_2 * 4) =
       fVar7 * *(float *)(lVar1 + 4);
  return;
}



// FUNCTION 14989c5ce FUN_14989c5ce body=237 status=ok
// SIG undefined FUN_14989c5ce(void)

void FUN_14989c5ce(undefined8 *param_1,longlong param_2,undefined8 *param_3,float *param_4)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar1 = *(undefined8 **)(param_2 + 0x28);
  lVar2 = puVar1[1];
  if (lVar2 == 1) {
    lVar2 = param_3[1];
    if (lVar2 == 0) {
      fVar4 = 0.0;
    }
    else {
      fVar4 = *(float *)*puVar1 * *(float *)(param_2 + 0x20) * *(float *)*param_3;
      if (1 < lVar2) {
        lVar3 = 1;
        do {
          fVar4 = fVar4 + ((float *)*puVar1)[lVar3] * *(float *)(param_2 + 0x20) *
                          ((float *)*param_3)[lVar3];
          lVar3 = lVar3 + 1;
        } while (lVar2 != lVar3);
      }
    }
    *(float *)*param_1 = *param_4 * fVar4 + *(float *)*param_1;
  }
  else {
    local_18 = *param_3;
    local_38 = *(float *)(param_2 + 0x20) * *param_4;
    local_48 = *param_1;
    local_10 = 1;
    local_28 = *puVar1;
    local_40 = 1;
    local_20 = lVar2;
    FUN_147509b58(lVar2,puVar1[2]);
  }
  if ((local_8 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989c6bc FUN_14989c6bc body=329 status=ok
// SIG undefined FUN_14989c6bc(void)

void FUN_14989c6bc(undefined8 *param_1,longlong param_2,undefined8 *param_3,float *param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  undefined8 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  fVar1 = *(float *)(param_2 + 0x20);
  if (param_3[2] == 1) {
    lVar2 = param_3[1];
    if (lVar2 == 0) {
      fVar6 = 0.0;
    }
    else {
      lVar5 = **(longlong **)(param_2 + 0x28);
      lVar3 = (*(longlong **)(param_2 + 0x28))[1];
      fVar6 = *(float *)(lVar5 + lVar3 * *(longlong *)(param_2 + 0x40) * 4 +
                        *(longlong *)(param_2 + 0x38) * 4) * fVar1 * *(float *)*param_3;
      if (1 < lVar2) {
        pfVar4 = (float *)(lVar5 + *(longlong *)(param_2 + 0x38) * 4 +
                                   (*(longlong *)(param_2 + 0x40) + 1) * lVar3 * 4);
        lVar5 = 1;
        do {
          fVar6 = fVar6 + *pfVar4 * fVar1 * ((float *)*param_3)[lVar5];
          lVar5 = lVar5 + 1;
          pfVar4 = pfVar4 + lVar3;
        } while (lVar2 != lVar5);
      }
    }
    *(float *)*param_1 = *param_4 * fVar6 + *(float *)*param_1;
  }
  else {
    local_78 = *(undefined8 *)(param_2 + 0x28);
    local_18 = param_1[6];
    local_48 = *param_1;
    uStack_40 = param_1[1];
    local_38 = *(undefined4 *)(param_1 + 2);
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 3);
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x1c);
    local_28 = *(undefined4 *)(param_1 + 4);
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x24);
    uStack_20 = *(undefined4 *)(param_1 + 5);
    uStack_1c = *(undefined4 *)((longlong)param_1 + 0x2c);
    local_90 = *(undefined8 *)(param_2 + 0x10);
    uStack_88 = *(undefined8 *)(param_2 + 0x18);
    local_68 = *(undefined4 *)(param_2 + 0x38);
    uStack_64 = *(undefined4 *)(param_2 + 0x3c);
    uStack_60 = *(undefined4 *)(param_2 + 0x40);
    uStack_5c = *(undefined4 *)(param_2 + 0x44);
    local_58 = *(undefined4 *)(param_2 + 0x48);
    uStack_54 = *(undefined4 *)(param_2 + 0x4c);
    uStack_50 = *(undefined4 *)(param_2 + 0x50);
    uStack_4c = *(undefined4 *)(param_2 + 0x54);
    local_a8 = param_3;
    local_80 = fVar1;
    FUN_14989c806(&local_a8,local_a0,&local_48);
  }
  if ((local_10 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989c806 FUN_14989c806 body=465 status=ok
// SIG undefined FUN_14989c806(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_14989c806(longlong *param_1,longlong param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 *local_b8;
  ulonglong uStack_b0;
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined1 local_48 [24];
  
  local_50 = DAT_14c707940 ^ (ulonglong)local_48;
  puVar2 = (undefined8 *)*param_1;
  local_98 = *(undefined8 *)(param_2 + 0x10);
  uStack_90 = *(undefined8 *)(param_2 + 0x18);
  local_88 = *(undefined4 *)(param_2 + 0x20);
  local_80 = *(undefined8 *)(param_2 + 0x28);
  local_70 = *(undefined8 *)(param_2 + 0x38);
  uStack_68 = *(undefined8 *)(param_2 + 0x40);
  local_60 = *(undefined4 *)(param_2 + 0x48);
  uStack_5c = *(undefined4 *)(param_2 + 0x4c);
  uStack_58 = *(undefined4 *)(param_2 + 0x50);
  uStack_54 = *(undefined4 *)(param_2 + 0x54);
  local_b8 = (undefined1 *)0x0;
  uStack_b0 = 0;
  FUN_146dddaba(&local_b8,*(undefined8 *)(param_2 + 0x50),1);
  FUN_14989c9dc(&local_b8,&local_a8);
  uVar1 = *param_4;
  if (uStack_b0 >> 0x3e != 0) {
    FUN_14494321d(0xffffffffffffffff);
  }
  puVar11 = &local_c8;
  puVar9 = local_b8;
  if (local_b8 == (undefined1 *)0x0) {
    uVar8 = uStack_b0 * 4;
    if (uVar8 < 0x20001) {
      lVar6 = -(uVar8 + 0x1e & 0xfffffffffffffff0);
      puVar11 = (undefined8 *)((longlong)&local_c8 + lVar6);
      puVar9 = (undefined1 *)((longlong)&local_c8 + lVar6);
    }
    else {
      puVar9 = (undefined1 *)FUN_14001cc68(uVar8,0x10);
      puVar11 = &local_c8;
      if (puVar9 == (undefined1 *)0x0) {
        FUN_14494321d(0xffffffffffffffff);
        puVar11 = &local_c8;
        puVar9 = (undefined1 *)0x0;
      }
    }
  }
  puVar7 = local_b8;
  uVar8 = uStack_b0 << 2;
  uVar3 = *param_3;
  uVar4 = *(undefined8 *)(param_3[3] + 8);
  local_a0 = 1;
  local_c8 = *puVar2;
  local_c0 = puVar2[1];
  uVar5 = puVar2[2];
  local_a8 = puVar9;
  *(undefined4 *)((longlong)puVar11 + -0x10) = uVar1;
  *(undefined8 *)((longlong)puVar11 + -0x18) = uVar4;
  *(undefined8 *)((longlong)puVar11 + -0x20) = uVar3;
  *(undefined8 *)((longlong)puVar11 + -0x48) = 0x14989c93d;
  FUN_14750a274(uVar5);
  if (0x20000 < uVar8) {
    puVar10 = (undefined1 *)0x0;
    if (puVar7 == (undefined1 *)0x0) {
      puVar10 = puVar9;
    }
    *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14989c95c;
    FUN_1400020a8(puVar10);
  }
  puVar9 = local_b8;
  *(undefined8 *)((longlong)puVar11 + -0x28) = 0x14989c96d;
  FUN_1400020a8(puVar9);
  if ((local_50 ^ (ulonglong)local_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)((longlong)puVar11 + -0x28) = &UNK_14989c99b;
  FUN_144d8e3a0();
}



// FUNCTION 14989c9dc FUN_14989c9dc body=143 status=ok
// SIG undefined FUN_14989c9dc(void)

void FUN_14989c9dc(longlong *param_1,longlong param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  
  fVar1 = *(float *)(param_2 + 0x20);
  lVar6 = **(longlong **)(param_2 + 0x28);
  lVar2 = (*(longlong **)(param_2 + 0x28))[1];
  lVar3 = *(longlong *)(param_2 + 0x38);
  lVar4 = *(longlong *)(param_2 + 0x40);
  lVar7 = *(longlong *)(param_2 + 0x50);
  if (param_1[1] != lVar7) {
    FUN_146dddaba(param_1,lVar7,1);
    lVar7 = param_1[1];
  }
  if (0 < lVar7) {
    lVar5 = *param_1;
    pfVar8 = (float *)(lVar6 + lVar3 * 4 + lVar4 * lVar2 * 4);
    lVar6 = 0;
    do {
      *(float *)(lVar5 + lVar6 * 4) = *pfVar8 * fVar1;
      lVar6 = lVar6 + 1;
      pfVar8 = pfVar8 + lVar2;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 14989ca6c FUN_14989ca6c body=36 status=ok
// SIG undefined FUN_14989ca6c(void)

undefined8 FUN_14989ca6c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14989cab8 FUN_14989cab8 body=93 status=ok
// SIG undefined FUN_14989cab8(void)

void FUN_14989cab8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bed1210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14989cb16 FUN_14989cb16 body=93 status=ok
// SIG undefined FUN_14989cb16(void)

void FUN_14989cb16(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1280;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bed1210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14989cb74 FUN_14989cb74 body=123 status=ok
// SIG undefined FUN_14989cb74(void)

void FUN_14989cb74(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bed1280;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bed1210;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14989cbf0 FUN_14989cbf0 body=82 status=ok
// SIG undefined FUN_14989cbf0(void)

undefined8
FUN_14989cbf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6,param_7,param_8
            );
  return param_2;
}



// FUNCTION 14989cc42 FUN_14989cc42 body=119 status=ok
// SIG undefined FUN_14989cc42(void)

undefined8
FUN_14989cc42(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_7;
  local_38 = param_6;
  local_40 = param_5;
  local_48 = param_4;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),local_28,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989ccbc FUN_14989ccbc body=36 status=ok
// SIG undefined FUN_14989ccbc(void)

undefined8 FUN_14989ccbc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 14989cd08 FUN_14989cd08 body=93 status=ok
// SIG undefined FUN_14989cd08(void)

void FUN_14989cd08(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bed12f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14989cd66 FUN_14989cd66 body=93 status=ok
// SIG undefined FUN_14989cd66(void)

void FUN_14989cd66(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1360;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bed12f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 14989cdc4 FUN_14989cdc4 body=123 status=ok
// SIG undefined FUN_14989cdc4(void)

void FUN_14989cdc4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bed1360;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bed12f0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = (int)uVar2;
  p_Var1->ContentionCount = (int)((ulonglong)uVar2 >> 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14989ce40 FUN_14989ce40 body=48 status=ok
// SIG undefined FUN_14989ce40(void)

undefined8
FUN_14989ce40(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6)

{
  (**(code **)(param_1 + 0x20))
            (*(undefined8 *)(param_1 + 0x18),param_2,param_3,param_4,param_5,param_6);
  return param_2;
}



// FUNCTION 14989ce70 FUN_14989ce70 body=91 status=ok
// SIG undefined FUN_14989ce70(void)

undefined8
FUN_14989ce70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_20 [24];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = param_5;
  local_38 = param_4;
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18),local_20,param_2,param_3);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989cece FUN_14989cece body=147 status=ok
// SIG undefined FUN_14989cece(void)

void FUN_14989cece(longlong param_1,int param_2)

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



// FUNCTION 14989cf62 FUN_14989cf62 body=48 status=ok
// SIG undefined FUN_14989cf62(void)

void FUN_14989cf62(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x130,0x10);
  }
  return;
}



// FUNCTION 14989cf92 FUN_14989cf92 body=329 status=ok
// SIG undefined FUN_14989cf92(void)

void FUN_14989cf92(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x94 + (longlong)iVar4 * 0xa0) * 4) =
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



// FUNCTION 14989d0dc FUN_14989d0dc body=292 status=ok
// SIG undefined FUN_14989d0dc(void)

void FUN_14989d0dc(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + 0x80 + (longlong)iStack_44 * 0xa0) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140de7f60(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989d202 FUN_14989d202 body=68 status=ok
// SIG undefined FUN_14989d202(void)

void FUN_14989d202(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_14989d246();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14989d246 FUN_14989d246 body=322 status=ok
// SIG undefined FUN_14989d246(void)

void FUN_14989d246(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 14989d38a FUN_14989d38a body=34 status=ok
// SIG undefined FUN_14989d38a(void)

undefined8 FUN_14989d38a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 14989d3ce FUN_14989d3ce body=93 status=ok
// SIG undefined FUN_14989d3ce(void)

void FUN_14989d3ce(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1440;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bed13d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14989d42c FUN_14989d42c body=93 status=ok
// SIG undefined FUN_14989d42c(void)

void FUN_14989d42c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bed1440;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = *(undefined8 *)(param_1 + 8);
  puVar1[2] = uVar2;
  *puVar1 = &PTR_FUN_14bed13d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 14989d48a FUN_14989d48a body=123 status=ok
// SIG undefined FUN_14989d48a(void)

void FUN_14989d48a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  _LIST_ENTRY *p_Var2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bed1440;
  p_Var2 = *(_LIST_ENTRY **)(param_1 + 0x10);
  p_Var1->CriticalSection = *(_RTL_CRITICAL_SECTION **)(param_1 + 8);
  (p_Var1->ProcessLocksList).Flink = p_Var2;
  *(undefined ***)p_Var1 = &PTR_FUN_14bed13d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 14989d518 FUN_14989d518 body=27 status=ok
// SIG undefined FUN_14989d518(void)

undefined8 FUN_14989d518(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2,*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 14989d536 FUN_14989d536 body=48 status=ok
// SIG undefined FUN_14989d536(void)

void FUN_14989d536(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x30,8);
  }
  return;
}



// FUNCTION 14989d566 FUN_14989d566 body=292 status=ok
// SIG undefined FUN_14989d566(void)

undefined4 FUN_14989d566(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (((((((*(longlong *)(param_2 + 8) == *(longlong *)(param_1 + 8)) &&
          (*(longlong *)(param_2 + 0x10) == *(longlong *)(param_1 + 0x10))) &&
         (*(longlong *)(param_2 + 0x18) == *(longlong *)(param_1 + 0x18))) &&
        ((*(longlong *)(param_2 + 0x20) == *(longlong *)(param_1 + 0x20) &&
         (*(longlong *)(param_2 + 0x28) == *(longlong *)(param_1 + 0x28))))) &&
       (((*(longlong *)(param_2 + 0x30) == *(longlong *)(param_1 + 0x30) &&
         ((*(longlong *)(param_2 + 0x38) == *(longlong *)(param_1 + 0x38) &&
          (*(longlong *)(param_2 + 0x40) == *(longlong *)(param_1 + 0x40))))) &&
        (*(longlong *)(param_2 + 0x48) == *(longlong *)(param_1 + 0x48))))) &&
      ((((*(longlong *)(param_2 + 0x50) == *(longlong *)(param_1 + 0x50) &&
         (*(longlong *)(param_2 + 0x58) == *(longlong *)(param_1 + 0x58))) &&
        (*(longlong *)(param_2 + 0x60) == *(longlong *)(param_1 + 0x60))) &&
       (((*(longlong *)(param_2 + 0x68) == *(longlong *)(param_1 + 0x68) &&
         (*(longlong *)(param_2 + 0x70) == *(longlong *)(param_1 + 0x70))) &&
        ((*(longlong *)(param_2 + 0x78) == *(longlong *)(param_1 + 0x78) &&
         ((*(longlong *)(param_2 + 0x80) == *(longlong *)(param_1 + 0x80) &&
          (*(longlong *)(param_2 + 0x88) == *(longlong *)(param_1 + 0x88))))))))))) &&
     ((*(longlong *)(param_2 + 0x90) == *(longlong *)(param_1 + 0x90) &&
      ((*(longlong *)(param_2 + 0x98) == *(longlong *)(param_1 + 0x98) &&
       (*(int *)(param_2 + 0xa0) == *(int *)(param_1 + 0xa0))))))) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(param_2 + 0xa4) >> 8),
                     *(int *)(param_2 + 0xa4) == *(int *)(param_1 + 0xa4));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 14989d69a FUN_14989d69a body=311 status=ok
// SIG undefined FUN_14989d69a(void)

void FUN_14989d69a(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_1[1] == 0) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    param_1[1] = uVar2;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (param_1[3] == 0) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    param_1[3] = uVar2;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[2] = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (param_1[5] == 0) {
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    param_1[5] = uVar2;
  }
  param_1 = param_1 + 4;
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014989d790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
      return;
    }
    thunk_FUN_14572512c(param_2,param_1);
    return;
  }
  *param_1 = *puVar1;
  *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  return;
}



// FUNCTION 14989d7d2 FUN_14989d7d2 body=697 status=ok
// SIG undefined FUN_14989d7d2(void)

void FUN_14989d7d2(longlong *param_1,int *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [44];
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 != 0) && (param_4 - 1U < 0x7ff00000)) {
    param_2[4] = param_4;
    if (param_2[5] != 0) {
      local_3c = param_4;
      FUN_14989dc18(param_1);
      puVar2 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_3c);
        }
      }
      else {
        local_3c = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      plVar3 = (longlong *)param_1[0x12];
      uVar4 = *(undefined8 *)(param_1[0x14] + -8 + (longlong)(int)param_1[0x15] * 8);
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      FUN_1406b60b4(param_1 + 0x14);
      (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar4);
    }
    param_2[2] = param_4;
    local_3c = param_4;
    if (param_2[3] != 0) {
      FUN_14989dc18(param_1);
      puVar2 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_3c);
        }
      }
      else {
        local_3c = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      plVar3 = (longlong *)param_1[0x12];
      uVar4 = *(undefined8 *)(param_1[0x14] + -8 + (longlong)(int)param_1[0x15] * 8);
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      FUN_1406b60b4(param_1 + 0x14);
      (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar4);
    }
    local_3c = (**(code **)(*(longlong *)param_1[0x12] + 0x28))();
    *param_2 = local_3c;
    if (param_2[1] != 0) {
      FUN_14989dc18(param_1);
      puVar2 = (ulonglong *)param_1[1];
      piVar1 = (int *)*puVar2 + 1;
      if ((int *)puVar2[1] < piVar1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
        }
        else {
          thunk_FUN_14572512c(param_1,&local_3c);
        }
      }
      else {
        local_3c = *(int *)*puVar2;
        *puVar2 = (ulonglong)piVar1;
      }
      plVar3 = (longlong *)param_1[0x12];
      uVar4 = *(undefined8 *)(param_1[0x14] + -8 + (longlong)(int)param_1[0x15] * 8);
      *(int *)(param_1 + 0x15) = (int)param_1[0x15] + -1;
      FUN_1406b60b4(param_1 + 0x14);
      (**(code **)(*plVar3 + 0x1a0))(plVar3,uVar4);
    }
    (**(code **)(*(longlong *)param_1[0x12] + 0x170))((longlong *)param_1[0x12],param_3,param_4);
    if ((*(byte *)(param_1[0x12] + 0x29) & 2) == 0) goto LAB_14989d87d;
  }
  FUN_14572541c(param_1);
LAB_14989d87d:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989da8c FUN_14989da8c body=396 status=ok
// SIG undefined FUN_14989da8c(void)

void FUN_14989da8c(longlong param_1,uint *param_2,longlong *param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar1 = param_2[4];
  uVar2 = *param_2;
  uVar3 = param_2[2];
  uVar10 = (ulonglong)uVar3;
  lVar8 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x30))();
  if ((0x7ff00000 < uVar3 || 0x7ff00000 < uVar1) ||
      (longlong)(lVar8 - (ulonglong)uVar2) < (longlong)uVar10) goto LAB_14989dc00;
  FUN_14989dc18(param_1,(ulonglong)uVar2);
  lVar8 = FUN_144a7d36f(uVar1);
  if (uVar3 == uVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x170))
              (*(longlong **)(param_1 + 0x90),lVar8,uVar1);
LAB_14989db17:
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x29) & 2) != 0) goto LAB_14989db90;
    *param_3 = lVar8;
    *param_4 = uVar1;
    bVar6 = true;
  }
  else {
    lVar9 = FUN_144a7d36f(uVar10);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x170))
              (*(longlong **)(param_1 + 0x90),lVar9,uVar10);
    cVar7 = '\x01';
    if ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x29) & 2) == 0) {
      cVar7 = FUN_14472c225(lVar8,uVar1,lVar9,uVar10);
    }
    if (lVar9 != 0) {
      FUN_1400020a8(lVar9);
    }
    if (cVar7 != '\0') goto LAB_14989db17;
LAB_14989db90:
    if (lVar8 != 0) {
      FUN_1400020a8(lVar8);
    }
    bVar6 = false;
  }
  plVar4 = *(longlong **)(param_1 + 0x90);
  uVar5 = *(undefined8 *)
           (*(longlong *)(param_1 + 0xa0) + -8 + (longlong)*(int *)(param_1 + 0xa8) * 8);
  *(int *)(param_1 + 0xa8) = *(int *)(param_1 + 0xa8) + -1;
  FUN_1406b60b4(param_1 + 0xa0);
  (**(code **)(*plVar4 + 0x1a0))(plVar4,uVar5);
  if ((bVar6) && ((*(byte *)(*(longlong *)(param_1 + 0x90) + 0x29) & 2) == 0)) {
    return;
  }
LAB_14989dc00:
  FUN_14572541c(param_1);
  return;
}



// FUNCTION 14989dc18 FUN_14989dc18 body=114 status=ok
// SIG undefined FUN_14989dc18(void)

void FUN_14989dc18(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x90) + 0x28))();
  iVar1 = *(int *)(param_1 + 0xa8);
  *(uint *)(param_1 + 0xa8) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0xac) < iVar1 + 1U) {
    FUN_1410d14fc(param_1 + 0xa0,iVar1);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa0) + (longlong)iVar1 * 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00014989dc87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x1a0))(*(longlong **)(param_1 + 0x90),param_2);
  return;
}



// FUNCTION 14989dc8a FUN_14989dc8a body=440 status=ok
// SIG undefined FUN_14989dc8a(void)

void FUN_14989dc8a(int *param_1,longlong *param_2)

{
  uint *puVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,param_1);
    }
  }
  else {
    *param_1 = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar1 = (uint *)(param_1 + 1);
  puVar3 = *(uint **)param_2[1];
  if ((uint *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,puVar1,4);
    }
    else {
      thunk_FUN_14572512c(param_2,puVar1);
    }
  }
  else {
    *puVar1 = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[2] = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  if (param_1[4] == 0) {
    iVar4 = (**(code **)(*param_2 + 0x28))(param_2);
    param_1[4] = iVar4;
  }
  piVar2 = *(int **)param_2[1];
  if ((int *)((undefined8 *)param_2[1])[1] < piVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,param_1 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_2);
    }
  }
  else {
    param_1[3] = *piVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  FUN_14989d69a(param_1 + 5,param_2);
  FUN_14989d69a(param_1 + 0xb,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    return;
  }
  if (*param_1 == 0x1b1bacd4) {
    if (*puVar1 < 2) {
      return;
    }
  }
  else if (*param_1 == 0x11235801) {
    FUN_140033559(".\\../Plugins/Compression/OodleNetwork/Source/Private/OodleNetworkArchives.cpp",
                  0x15d,
                  L"Tried to load dictionary from old format. Regenerate dictionary using the trainer commandlet."
                 );
  }
  FUN_14572541c(param_2);
  return;
}



// FUNCTION 14989de42 FUN_14989de42 body=156 status=ok
// SIG undefined FUN_14989de42(void)

undefined8 * FUN_14989de42(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  FUN_140713482();
  *param_1 = &PTR_FUN_14bed3240;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  uVar2 = FUN_14118da1c();
  uVar1 = FUN_14054d46e(uVar2,L"FORCELOGFLUSH");
  *(undefined1 *)(param_1 + 0x13) = uVar1;
  *param_1 = &PTR_FUN_14bed1fa0;
  param_1[0x16] = 0x1b1bacd4;
  param_1[0x17] = 0xffffffff00000000;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((*(byte *)(param_1 + 5) & 4) != 0) {
    *(undefined8 *)((longlong)param_1 + 0xb4) = 0x900000001;
  }
  return param_1;
}



// FUNCTION 14989dede FUN_14989dede body=122 status=ok
// SIG undefined FUN_14989dede(void)

void FUN_14989dede(longlong param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    FUN_14989d7d2(param_1,param_1 + 0xc4,*param_2,*param_3);
    FUN_14989d7d2(param_1,param_1 + 0xdc,*param_4,*param_5);
    return;
  }
  FUN_14989da8c(param_1,param_1 + 0xc4);
  FUN_14989da8c(param_1,param_1 + 0xdc,param_4,param_5);
  return;
}



// FUNCTION 14989df58 FUN_14989df58 body=90 status=ok
// SIG undefined FUN_14989df58(void)

void FUN_14989df58(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  if (((*(longlong *)(param_1 + 0x10) == 0) &&
      (*(longlong *)(param_1 + 0x10) = param_2, param_2 != 0)) && (*(int *)(param_1 + 0x18) == -1))
  {
    FUN_14577cd40(param_2 + 0x60,param_1,1);
    uVar1 = FUN_146efc1f2(*(undefined8 *)(param_1 + 0x10),1);
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    FUN_14577ceb2(*(undefined8 *)(param_1 + 0x10),0,uVar1);
    return;
  }
  return;
}



// FUNCTION 14989dfb2 FUN_14989dfb2 body=100 status=ok
// SIG undefined FUN_14989dfb2(void)

undefined1 FUN_14989dfb2(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 uVar2;
  int *piVar3;
  
  pcVar1 = (char *)FUN_14989e016(param_2);
  uVar2 = 2;
  if ((pcVar1 != (char *)0x0) && ((byte)(*pcVar1 - 2U) < 3)) {
    if (*(int *)(param_1 + 0x18) != -1) {
      piVar3 = (int *)FUN_146efc2ee(*(undefined8 *)(param_1 + 0x10));
      *piVar3 = *piVar3 + 1;
      *(double *)(piVar3 + 2) = *(double *)(piVar3 + 2) + 0.0;
      uVar2 = FUN_146efc036(*(undefined8 *)(param_1 + 0x10),param_2);
      return uVar2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 14989e016 FUN_14989e016 body=89 status=ok
// SIG undefined FUN_14989e016(void)

longlong FUN_14989e016(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (DAT_14cc2e390 == 0) {
      uVar2 = FUN_14676bcfa();
      DAT_14cc2e390 = FUN_14171c317(FUN_14676bd5a,uVar2,L"EOodleNetResult");
    }
    lVar3 = 0;
    if (lVar1 == DAT_14cc2e390) {
      lVar3 = param_1;
    }
  }
  return lVar3;
}



// FUNCTION 14989e070 FUN_14989e070 body=165 status=ok
// SIG undefined FUN_14989e070(void)

void FUN_14989e070(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14bed2780;
  FUN_14989e116(param_1 + 9);
  FUN_14989e116(param_1 + 0xb);
  plVar3 = (longlong *)param_1[0xc];
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
  plVar3 = (longlong *)param_1[10];
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
  FUN_14597f13e(param_1);
  return;
}



// FUNCTION 14989e116 FUN_14989e116 body=445 status=ok
// SIG undefined FUN_14989e116(void)

void FUN_14989e116(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined2 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*param_1 != 0) {
    plVar5 = (longlong *)param_1[1];
    if (plVar5 == (longlong *)0x0) {
      *param_1 = 0;
    }
    else {
      if ((int)plVar5[1] == 2) {
        local_38 = 0x100000000;
        local_30 = &DAT_14cc2e3d0;
        local_28 = 0xffffffff;
        local_20 = 0;
        if (DAT_14cc2e3e8 != 0) {
          FUN_1449c0562(&local_38);
        }
        local_60 = local_28;
        uVar4 = local_60;
        local_58 = local_20;
        local_54 = local_1c;
        local_70 = local_38;
        local_68 = local_30;
        local_78 = &DAT_14cc2e3c0;
        local_50 = &DAT_14cc2e3c0;
        local_48 = &DAT_14cc2e3c0;
        local_40 = 0;
        local_60._4_4_ = (int)((ulonglong)local_28 >> 0x20);
        if (local_60._4_4_ < *(int *)(local_30 + 0x18)) {
          iVar3 = local_60._4_4_;
          local_60 = uVar4;
          do {
            if (*(longlong *)(*local_78 + 0x10 + (longlong)iVar3 * 0x28) == *param_1) {
              FUN_14989ee74(local_50);
              local_40 = CONCAT11(local_40._1_1_,1);
              goto LAB_14989e239;
            }
            local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
            FUN_1449c0562(&local_70);
            iVar3 = local_60._4_4_;
          } while (local_60._4_4_ < *(int *)(local_68 + 0x18));
          uVar4 = local_60;
          if ((local_40 & 1) != 0) {
LAB_14989e239:
            uVar4 = local_60;
            if (local_40._1_1_ == '\x01') {
              FUN_14989ec0a(local_48,*(int *)(local_48 + 1) - *(int *)((longlong)local_48 + 0x34));
              uVar4 = local_60;
            }
          }
        }
        local_60 = uVar4;
        plVar5 = (longlong *)param_1[1];
        *param_1 = 0;
        if (plVar5 == (longlong *)0x0) goto LAB_14989e259;
      }
      else {
        *param_1 = 0;
      }
      param_1[1] = 0;
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
LAB_14989e259:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14989e2d4 FUN_14989e2d4 body=42 status=ok
// SIG undefined FUN_14989e2d4(void)

void FUN_14989e2d4(undefined8 param_1,longlong *param_2)

{
  FUN_147079b30();
                    /* WARNING: Could not recover jumptable at 0x00014989e2fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,0x68,0x68);
  return;
}



// FUNCTION 14989e2fe FUN_14989e2fe body=242 status=ok
// SIG undefined FUN_14989e2fe(void)

void FUN_14989e2fe(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = FUN_1417072b0(DAT_14c872ce0,L"OodleNetworkHandlerComponent",&DAT_14c872ce8);
  if (cVar2 == '\0') {
    local_38 = &DAT_14c872ce8;
    FUN_14593bea2(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"bEnableOodle",1);
    local_38 = &DAT_14c872ce8;
    FUN_1410abc14(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ServerDictionary",&DAT_149dfb77a);
    local_38 = &DAT_14c872ce8;
    FUN_1410abc14(DAT_14c872ce0,L"OodleNetworkHandlerComponent",L"ClientDictionary",&DAT_149dfb77a);
    uVar1 = DAT_14c872ce0;
    FUN_140056680(local_30,&DAT_149dfb77a);
    FUN_140d6d8de(uVar1,0,local_30);
    if (local_30[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14989e400 FUN_14989e400 body=161 status=ok
// SIG undefined FUN_14989e400(void)

longlong * FUN_14989e400(longlong *param_1,char param_2)

{
  short *psVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  if (DAT_14cc2e390 == 0) {
    uVar3 = FUN_14676bcfa();
    DAT_14cc2e390 = FUN_14171c317(FUN_14676bd5a,uVar3,L"EOodleNetResult");
  }
  lVar2 = DAT_14cc2e390;
  *param_1 = (longlong)param_2;
  param_1[1] = 0;
  FUN_14485c47a(param_1 + 1,lVar2);
  param_1[2] = lVar2;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar4 = &DAT_14bed376a + *(int *)((longlong)&PTR_FUN_14bed3760 + (longlong)param_2 * 4);
  do {
    psVar1 = (short *)(puVar4 + -2);
    puVar4 = puVar4 + 2;
  } while (*psVar1 != 0x3a);
  FUN_14020fad6(param_1 + 3);
  return param_1;
}



// FUNCTION 14989e4ae FUN_14989e4ae body=95 status=ok
// SIG undefined FUN_14989e4ae(void)

undefined8 * FUN_14989e4ae(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = FUN_14001cc68(0x90,0x10);
  FUN_14467a1d6(uVar1);
  *param_2 = uVar1;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar2[1] = &DAT_100000001;
  *puVar2 = &PTR_LAB_14bed3690;
  puVar2[2] = uVar1;
  param_2[1] = puVar2;
  return param_2;
}



// FUNCTION 14989e52c FUN_14989e52c body=29 status=ok
// SIG undefined FUN_14989e52c(void)

undefined8 FUN_14989e52c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e54a FUN_14989e54a body=68 status=ok
// SIG undefined FUN_14989e54a(void)

undefined8 * FUN_14989e54a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bed3240;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e0ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e58e FUN_14989e58e body=38 status=ok
// SIG undefined FUN_14989e58e(void)

undefined8 FUN_14989e58e(undefined8 param_1,int param_2)

{
  FUN_14989e070();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e5b4 FUN_14989e5b4 body=68 status=ok
// SIG undefined FUN_14989e5b4(void)

undefined8 * FUN_14989e5b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14bed3240;
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_14041e0ea(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14989e5f8 FUN_14989e5f8 body=74 status=ok
// SIG undefined FUN_14989e5f8(void)

void FUN_14989e5f8(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[3];
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
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


